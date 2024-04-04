#include <Arduino.h>
#include <lvgl.h>
#include <ATD3.5-S3.h>
#include "gui/ui.h"

#include <WiFi.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
#include <ArtronShop_SHT45.h>
#include <ArtronShop_LineNotify.h>

// WiFi
#define WIFI_SSID     "Your WiFi Name"
#define WIFI_PASSWORD "Your WiFi Password"

// Token
#define GG_SHEET_SCRIPT_URL ""
#define LINE_TOKEN          ""

// Alarm threshold
#define ALARM_TEMP_AT (32)
#define ALARM_HUMI_AT (80)

#define LED_Y_PIN (5)

ArtronShop_SHT45 sht45(&Wire, 0x44); // SHT45-AD1B => 0x44

float t = 0, h = 0;

lv_chart_series_t * ui_temp_chart_series;
lv_chart_series_t * ui_humi_chart_series;

void sensor_update_cb(lv_timer_t *) {
   if (sht45.measure()) {
    t = sht45.temperature();
    h = sht45.humidity();
  } else {
    Serial.println("SHT45 read error");
  }

  lv_label_set_text_fmt(ui_temp_label, "%.01f °C", t);
  lv_label_set_text_fmt(ui_humi_label, "%.01f %RH", h);

  lv_chart_set_next_value(ui_temp_chart, ui_temp_chart_series, t);
  lv_chart_set_next_value(ui_humi_chart, ui_humi_chart_series, h);
  {
    static bool sent = false;
    if (t >= ALARM_TEMP_AT) {
      lv_label_set_text(ui_temp_status_label, "ผิดปกติ");
      lv_obj_set_style_bg_color(ui_temp_status_badge, lv_color_hex(0xE53935), LV_PART_MAIN);
      if (!sent) {
        if (LINE.send("อุณหภูมิสูงผิดปกติ ! (" + String(t, 1) + ")")) {
          Serial.println("Send notify successful");
        } else {
          Serial.printf("Send notify fail. check your token (code: %d)\n", LINE.status_code);
        }
        sent = true;
      }
    } else {
      lv_label_set_text(ui_temp_status_label, "ปกติ");
      lv_obj_set_style_bg_color(ui_temp_status_badge, lv_color_hex(0x2CC56F), LV_PART_MAIN);
      sent = false;
    }
  }

  {
    static bool sent = false;
    if (h >= ALARM_HUMI_AT) {
      lv_label_set_text(ui_humi_status_label, "ผิดปกติ");
      lv_obj_set_style_bg_color(ui_humi_status_badge, lv_color_hex(0xE53935), LV_PART_MAIN);
      if (!sent) {
        if (LINE.send("ความชื้นสูงผิดปกติ ! (" + String(h, 1) + ")")) {
          Serial.println("Send notify successful");
        } else {
          Serial.printf("Send notify fail. check your token (code: %d)\n", LINE.status_code);
        }
        sent = true;
      }
    } else {
      lv_label_set_text(ui_humi_status_label, "ปกติ");
      lv_obj_set_style_bg_color(ui_humi_status_badge, lv_color_hex(0x2CC56F), LV_PART_MAIN);
      sent = false;
    }
  }
}

void send_to_google_sheet(lv_timer_t *) {
  WiFiClientSecure socket;
  socket.setInsecure();

  HTTPClient http;
  String url = String(GG_SHEET_SCRIPT_URL) + "?temperature=" + String(t, 1) + "&humidity="+ String(h, 1);
  if (http.begin(socket, url)) {
    int status = http.GET();
    Serial.printf("Send update to google sheet with code %d\n", status);
  } else {
    Serial.println("Connect to google sheet fail");
  }
  http.end();
}

void setup() {
  Serial.begin(115200);
  
  // Setup peripherals
  Display.begin(0); // rotation number 0
  Touch.begin();
  Sound.begin();
  // Card.begin(); // uncomment if you want to Read/Write/Play/Load file in MicroSD Card
  pinMode(LED_Y_PIN, OUTPUT);
  digitalWrite(LED_Y_PIN, HIGH); // off LED Y

  Wire.begin();
  while (!sht45.begin()) {
    Serial.println("SHT45 not found !");
    delay(1000);
  }
  
  // Map peripheral to LVGL
  Display.useLVGL(); // Map display to LVGL
  Touch.useLVGL(); // Map touch screen to LVGL
  Sound.useLVGL(); // Map speaker to LVGL
  // Card.useLVGL(); // Map MicroSD Card to LVGL File System

  Display.enableAutoSleep(120); // Auto off display if not touch in 2 min
  
  // Add load your UI function
  ui_init();
  
  ui_temp_chart_series = lv_chart_add_series(ui_temp_chart, lv_color_hex(0x02DBC5), LV_CHART_AXIS_PRIMARY_Y);
  ui_humi_chart_series = lv_chart_add_series(ui_humi_chart, lv_color_hex(0xFFC021), LV_CHART_AXIS_PRIMARY_Y);

  // Add event handle
  lv_timer_create(sensor_update_cb, 1000, NULL);
  lv_timer_create(send_to_google_sheet, 60 * 1000, NULL);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("WiFi connect fail");
  }

  LINE.begin(LINE_TOKEN);
}

void loop() {
  Display.loop(); // Keep GUI work
}
