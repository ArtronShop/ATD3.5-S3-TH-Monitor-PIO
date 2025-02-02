/*******************************************************************************
 * Size: 18 px
 * Bpp: 4
 * Opts: --bpp 4 --size 18 --font C:/Users/sonth/Downloads/ATD3.5-S3-TH-Monitor-PIO/SquareLine Studio Project/assets/Kanit-Regular.ttf -o C:/Users/sonth/Downloads/ATD3.5-S3-TH-Monitor-PIO/SquareLine Studio Project/assets\ui_font_Kanit18.c --format lvgl -r 0x0E00-0x0E7F --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_KANIT18
#define UI_FONT_KANIT18 1
#endif

#if UI_FONT_KANIT18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0E01 "ก" */
    0x0, 0x5b, 0xef, 0xda, 0x30, 0x1c, 0xfe, 0xba,
    0xcf, 0xf3, 0x3f, 0xb0, 0x0, 0x7, 0xfa, 0x2e,
    0xfd, 0x50, 0x2, 0xfd, 0x1, 0xcf, 0x60, 0x1,
    0xfe, 0x8, 0xf7, 0x0, 0x1, 0xfe, 0xb, 0xf3,
    0x0, 0x1, 0xfe, 0xb, 0xf3, 0x0, 0x1, 0xfe,
    0xb, 0xf3, 0x0, 0x1, 0xfe, 0xb, 0xf3, 0x0,
    0x1, 0xfe,

    /* U+0E02 "ข" */
    0x2f, 0xff, 0x40, 0xa, 0xf5, 0x17, 0xcf, 0x70,
    0xa, 0xf5, 0x0, 0xaf, 0x30, 0xa, 0xf5, 0x4,
    0xfa, 0x0, 0xa, 0xf5, 0xd, 0xf1, 0x0, 0xa,
    0xf5, 0xf, 0xe0, 0x0, 0xa, 0xf5, 0xf, 0xe0,
    0x0, 0xa, 0xf4, 0xe, 0xf2, 0x0, 0xe, 0xf2,
    0x6, 0xff, 0xaa, 0xef, 0xa0, 0x0, 0x4c, 0xef,
    0xc6, 0x0,

    /* U+0E03 "ฃ" */
    0x4f, 0xcf, 0x80, 0xb, 0xf3, 0x4f, 0x9f, 0xc0,
    0xb, 0xf3, 0x17, 0x4f, 0x80, 0xb, 0xf3, 0x1,
    0xee, 0x0, 0xb, 0xf3, 0xa, 0xf4, 0x0, 0xb,
    0xf3, 0xf, 0xf0, 0x0, 0xb, 0xf3, 0xf, 0xf0,
    0x0, 0xc, 0xf3, 0xe, 0xf3, 0x0, 0x1f, 0xf1,
    0x7, 0xff, 0xaa, 0xef, 0x90, 0x0, 0x5c, 0xef,
    0xc6, 0x0,

    /* U+0E04 "ค" */
    0x3, 0xbe, 0xfe, 0xb4, 0x3, 0xff, 0xca, 0xcf,
    0xf4, 0xaf, 0x70, 0x0, 0x6f, 0xbd, 0xf2, 0x0,
    0x1, 0xfe, 0xdf, 0x10, 0x0, 0xf, 0xed, 0xfa,
    0xef, 0x20, 0xfe, 0xdf, 0xea, 0x92, 0xf, 0xed,
    0xf2, 0x0, 0x0, 0xfe, 0xdf, 0x10, 0x0, 0xf,
    0xed, 0xf1, 0x0, 0x0, 0xfe,

    /* U+0E05 "ฅ" */
    0x1c, 0xfc, 0x4b, 0xfd, 0x39, 0xfe, 0xdf, 0xed,
    0xfb, 0xdf, 0x20, 0x61, 0x1f, 0xed, 0xf1, 0x0,
    0x0, 0xfe, 0xdf, 0x10, 0x0, 0xf, 0xed, 0xfa,
    0xef, 0x20, 0xfe, 0xdf, 0xea, 0x92, 0xf, 0xed,
    0xf1, 0x0, 0x0, 0xfe, 0xdf, 0x10, 0x0, 0xf,
    0xed, 0xf1, 0x0, 0x0, 0xfe,

    /* U+0E06 "ฆ" */
    0x2f, 0xcf, 0x90, 0x4, 0xfa, 0x2f, 0x9f, 0xe0,
    0x4, 0xfa, 0x17, 0x3f, 0xa0, 0x4, 0xfa, 0x0,
    0xcf, 0x20, 0x4, 0xfa, 0x6, 0xf8, 0x0, 0x4,
    0xfa, 0xd, 0xf1, 0x0, 0x4, 0xfa, 0xe, 0xf0,
    0x0, 0x4, 0xfa, 0xf, 0xf7, 0x0, 0x8, 0xf8,
    0xf, 0xff, 0xda, 0xbf, 0xf2, 0xf, 0xe1, 0xae,
    0xfc, 0x40,

    /* U+0E07 "ง" */
    0x0, 0x0, 0x8f, 0xe8, 0x0, 0x0, 0x0, 0x48,
    0xcf, 0xa0, 0x0, 0x0, 0x0, 0xd, 0xf1, 0x6f,
    0x80, 0x0, 0x9, 0xf4, 0xf, 0xe0, 0x0, 0x8,
    0xf5, 0x9, 0xf5, 0x0, 0x9, 0xf4, 0x2, 0xfb,
    0x0, 0xc, 0xf2, 0x0, 0xcf, 0x20, 0x4f, 0xd0,
    0x0, 0x5f, 0xba, 0xff, 0x40, 0x0, 0xd, 0xff,
    0xb3, 0x0,

    /* U+0E08 "จ" */
    0x9, 0xce, 0xfe, 0xb5, 0x0, 0xf, 0xba, 0xac,
    0xff, 0x70, 0x0, 0x0, 0x0, 0x2f, 0xf1, 0x0,
    0x0, 0x0, 0x9, 0xf5, 0x18, 0x82, 0x0, 0x7,
    0xf7, 0x3f, 0xfa, 0x0, 0x7, 0xf6, 0x0, 0xcf,
    0x0, 0xa, 0xf4, 0x0, 0x6f, 0x60, 0x2f, 0xe0,
    0x0, 0x1f, 0xda, 0xff, 0x40, 0x0, 0x9, 0xff,
    0xb3, 0x0,

    /* U+0E09 "ฉ" */
    0x19, 0xce, 0xff, 0xd7, 0x0, 0x3f, 0xca, 0xab,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x1e, 0xf2, 0x0,
    0x0, 0x0, 0xa, 0xf4, 0x8, 0x70, 0x0, 0xa,
    0xf5, 0x1f, 0xd0, 0x0, 0xa, 0xf5, 0x1f, 0xd0,
    0x0, 0xa, 0xf5, 0xf, 0xf1, 0x0, 0x2d, 0xf5,
    0xa, 0xfe, 0xab, 0xff, 0xf5, 0x1, 0xae, 0xfc,
    0x57, 0xf5,

    /* U+0E0A "ช" */
    0x2f, 0xff, 0x40, 0xa, 0xf5, 0x17, 0xcf, 0x70,
    0x3d, 0xf2, 0x0, 0xaf, 0x35, 0xff, 0x70, 0x4,
    0xfa, 0x2, 0x6f, 0xf1, 0xd, 0xf2, 0x0, 0xa,
    0xf4, 0xf, 0xe0, 0x0, 0xa, 0xf5, 0xf, 0xf0,
    0x0, 0xa, 0xf4, 0xd, 0xf3, 0x0, 0x1e, 0xf1,
    0x6, 0xff, 0xaa, 0xef, 0x90, 0x0, 0x4c, 0xef,
    0xd7, 0x0,

    /* U+0E0B "ซ" */
    0x4f, 0xdf, 0x80, 0xa, 0xf5, 0x4f, 0x5f, 0xd0,
    0x3d, 0xf3, 0x17, 0x6f, 0x95, 0xff, 0x90, 0x2,
    0xfe, 0x2, 0x6f, 0xd0, 0xb, 0xf5, 0x0, 0xa,
    0xf4, 0xf, 0xf0, 0x0, 0xa, 0xf5, 0xf, 0xf0,
    0x0, 0xa, 0xf4, 0xd, 0xf3, 0x0, 0x1e, 0xf2,
    0x6, 0xff, 0xaa, 0xef, 0xa0, 0x0, 0x4c, 0xef,
    0xc6, 0x0,

    /* U+0E0C "ฌ" */
    0x0, 0x5b, 0xef, 0xd9, 0x20, 0x0, 0x0, 0xef,
    0x11, 0xcf, 0xeb, 0xac, 0xfe, 0x10, 0x0, 0xe,
    0xf1, 0x3f, 0xb0, 0x0, 0x9, 0xf7, 0x0, 0x0,
    0xef, 0x12, 0xdf, 0xe5, 0x0, 0x5f, 0x90, 0x0,
    0xe, 0xf1, 0x1, 0xdf, 0x50, 0x4, 0xfa, 0x0,
    0x0, 0xef, 0x10, 0x8f, 0x60, 0x0, 0x4f, 0xa0,
    0x0, 0xe, 0xf1, 0xb, 0xf3, 0x0, 0x4, 0xfa,
    0x0, 0x0, 0xef, 0x0, 0xbf, 0x40, 0x0, 0x4f,
    0xd3, 0x0, 0x3f, 0xe0, 0xa, 0xfe, 0xb0, 0x4,
    0xff, 0xfd, 0xcf, 0xf8, 0x0, 0x3e, 0xff, 0x0,
    0x4f, 0x75, 0xcf, 0xe9, 0x0,

    /* U+0E0D "ญ" */
    0x0, 0x5b, 0xef, 0xd9, 0x10, 0x0, 0x0, 0xaf,
    0x41, 0xcf, 0xeb, 0xac, 0xfe, 0x10, 0x0, 0xa,
    0xf4, 0x3f, 0xa0, 0x0, 0x9, 0xf6, 0x0, 0x0,
    0xaf, 0x42, 0xff, 0xd5, 0x0, 0x5f, 0x90, 0x0,
    0xa, 0xf4, 0x1, 0xcf, 0x70, 0x4, 0xfa, 0x0,
    0x0, 0xaf, 0x40, 0x8f, 0x70, 0x0, 0x3f, 0xc0,
    0x0, 0xc, 0xf2, 0xb, 0xf3, 0x0, 0x0, 0xef,
    0x61, 0x17, 0xfd, 0x0, 0xbf, 0x30, 0x0, 0x4,
    0xff, 0xff, 0xff, 0xe0, 0xa, 0xfc, 0x80, 0x0,
    0x1, 0x68, 0x84, 0x8f, 0x40, 0x3e, 0xff, 0x0,
    0x9, 0xeb, 0x99, 0xbf, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x3a, 0xdf, 0xfe, 0xa3, 0x0,

    /* U+0E0E "ฎ" */
    0x0, 0x17, 0xcf, 0xfd, 0x81, 0x0, 0x3e, 0xfd,
    0xba, 0xdf, 0xd0, 0x7, 0xf7, 0x0, 0x0, 0xcf,
    0x50, 0x6f, 0xfd, 0x30, 0x8, 0xf7, 0x0, 0x2e,
    0xf3, 0x0, 0x7f, 0x80, 0x9, 0xf5, 0x0, 0x7,
    0xf8, 0x0, 0xcf, 0x30, 0x0, 0x7f, 0x80, 0xc,
    0xf2, 0x0, 0x7, 0xf8, 0x19, 0xff, 0x10, 0x0,
    0x7f, 0x82, 0xff, 0x70, 0x0, 0x7, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0x80, 0x0, 0x16, 0x88,
    0x68, 0xf8, 0x0, 0xf, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x62, 0x0, 0x27, 0x84,

    /* U+0E0F "ฏ" */
    0x0, 0x17, 0xcf, 0xfd, 0x81, 0x0, 0x3e, 0xfd,
    0xba, 0xdf, 0xd0, 0x7, 0xf7, 0x0, 0x0, 0xcf,
    0x50, 0x6f, 0xfd, 0x30, 0x8, 0xf7, 0x0, 0x2e,
    0xf3, 0x0, 0x7f, 0x80, 0x9, 0xf5, 0x0, 0x7,
    0xf8, 0x0, 0xcf, 0x30, 0x0, 0x7f, 0x80, 0xc,
    0xf2, 0x0, 0x7, 0xf8, 0x19, 0xff, 0x10, 0x0,
    0x7f, 0x82, 0xff, 0x70, 0x0, 0x7, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0x70, 0x0, 0x14, 0xda,
    0x2b, 0xf6, 0x0, 0x7f, 0xfe, 0xff, 0xfe, 0x10,
    0x4, 0x87, 0x12, 0x66, 0x10,

    /* U+0E10 "ฐ" */
    0x9, 0xde, 0xff, 0xff, 0xff, 0x31, 0xeb, 0xaa,
    0xcf, 0xfd, 0x91, 0x0, 0x0, 0x0, 0x3f, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0x30, 0x18, 0x82,
    0x0, 0x8, 0xf5, 0x4, 0xff, 0x80, 0x0, 0x9f,
    0x40, 0x0, 0xee, 0x0, 0xb, 0xf2, 0x0, 0x8,
    0xf4, 0x4, 0xfc, 0x0, 0x0, 0x2f, 0xca, 0xff,
    0x30, 0x0, 0x0, 0xaf, 0xea, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x4, 0x40, 0x0, 0x12, 0x9f, 0x63,
    0xff, 0x0, 0xe, 0xff, 0xdf, 0xff, 0x80, 0x0,
    0x77, 0x50, 0x47, 0x40, 0x0,

    /* U+0E11 "ฑ" */
    0x4f, 0xcf, 0x9c, 0xfe, 0x70, 0x4f, 0x9f, 0xf9,
    0x8e, 0xf4, 0x17, 0x3f, 0xa0, 0x6, 0xf9, 0x0,
    0x9f, 0x40, 0x4, 0xfa, 0x2, 0xfd, 0x0, 0x4,
    0xfa, 0x7, 0xf8, 0x0, 0x4, 0xfa, 0x8, 0xf6,
    0x0, 0x4, 0xfa, 0x8, 0xf6, 0x0, 0x4, 0xfa,
    0x8, 0xf6, 0x0, 0x4, 0xfa, 0x8, 0xf6, 0x0,
    0x4, 0xfa,

    /* U+0E12 "ฒ" */
    0x0, 0x9f, 0xe5, 0x8f, 0xe6, 0x0, 0x0, 0x5f,
    0xa0, 0x7f, 0xdc, 0xfe, 0xaf, 0xf0, 0x0, 0x5,
    0xfa, 0xe, 0xf1, 0x6, 0x30, 0xbf, 0x20, 0x0,
    0x5f, 0xa1, 0xfc, 0x0, 0x0, 0xb, 0xf3, 0x0,
    0x5, 0xfa, 0x3f, 0xa0, 0x0, 0x0, 0xbf, 0x30,
    0x0, 0x5f, 0xa3, 0xfa, 0x0, 0x0, 0xb, 0xf3,
    0x0, 0x5, 0xfa, 0x1f, 0xc0, 0x0, 0x0, 0xbf,
    0x30, 0x0, 0x5f, 0xa0, 0xdf, 0x30, 0x0, 0xb,
    0xf8, 0x0, 0x8, 0xf8, 0x5, 0xff, 0xb9, 0x30,
    0xbf, 0xfd, 0xab, 0xff, 0x20, 0x5, 0xcf, 0xf4,
    0xb, 0xf2, 0x9e, 0xfc, 0x40,

    /* U+0E13 "ณ" */
    0x0, 0x5b, 0xef, 0xda, 0x20, 0x0, 0x0, 0xdf,
    0x21, 0xcf, 0xeb, 0xac, 0xfe, 0x10, 0x0, 0xd,
    0xf2, 0x3f, 0xb0, 0x0, 0x9, 0xf7, 0x0, 0x0,
    0xdf, 0x22, 0xdf, 0xe5, 0x0, 0x5f, 0x90, 0x0,
    0xd, 0xf2, 0x1, 0xdf, 0x50, 0x4, 0xfa, 0x0,
    0x0, 0xdf, 0x20, 0x8f, 0x60, 0x0, 0x4f, 0xa0,
    0x0, 0xd, 0xf2, 0xb, 0xf3, 0x0, 0x4, 0xfa,
    0x0, 0x0, 0xdf, 0x20, 0xbf, 0x40, 0x0, 0x2f,
    0xe1, 0x0, 0x5f, 0xf2, 0xa, 0xfe, 0xb0, 0x0,
    0xcf, 0xfc, 0xef, 0xff, 0x20, 0x3e, 0xff, 0x0,
    0x1, 0xae, 0xfc, 0x4b, 0xf2,

    /* U+0E14 "ด" */
    0x0, 0x19, 0xef, 0xec, 0x50, 0x0, 0x2e, 0xfd,
    0xab, 0xff, 0x80, 0xb, 0xf8, 0x0, 0x1, 0xef,
    0x10, 0xfe, 0x0, 0x0, 0xa, 0xf5, 0x2f, 0xb0,
    0x0, 0x0, 0x8f, 0x63, 0xfa, 0x0, 0x0, 0x8,
    0xf6, 0x1f, 0xc0, 0x0, 0x0, 0x8f, 0x60, 0xdf,
    0x30, 0x0, 0x8, 0xf6, 0x5, 0xff, 0xb9, 0x30,
    0x8f, 0x60, 0x5, 0xcf, 0xf4, 0x8, 0xf6,

    /* U+0E15 "ต" */
    0x0, 0x8e, 0xe6, 0x7e, 0xe9, 0x0, 0x7f, 0xdb,
    0xff, 0xae, 0xf4, 0xd, 0xf1, 0x5, 0x40, 0x8f,
    0x71, 0xfc, 0x0, 0x0, 0x7, 0xf7, 0x3f, 0xb0,
    0x0, 0x0, 0x7f, 0x73, 0xfa, 0x0, 0x0, 0x7,
    0xf7, 0x1f, 0xc0, 0x0, 0x0, 0x7f, 0x70, 0xdf,
    0x30, 0x0, 0x7, 0xf7, 0x5, 0xff, 0xb9, 0x30,
    0x7f, 0x70, 0x5, 0xcf, 0xf4, 0x7, 0xf7,

    /* U+0E16 "ถ" */
    0x0, 0x5b, 0xef, 0xda, 0x30, 0x1c, 0xfe, 0xba,
    0xcf, 0xf3, 0x3f, 0xb0, 0x0, 0x7, 0xfa, 0x2e,
    0xfd, 0x50, 0x2, 0xfd, 0x1, 0xcf, 0x60, 0x1,
    0xfe, 0x8, 0xf7, 0x0, 0x1, 0xfe, 0xb, 0xf3,
    0x0, 0x1, 0xfe, 0xb, 0xf4, 0x0, 0x1, 0xfe,
    0xa, 0xfc, 0x80, 0x1, 0xfe, 0x3, 0xef, 0xf0,
    0x1, 0xfe,

    /* U+0E17 "ท" */
    0xdf, 0x2a, 0xef, 0xd5, 0xd, 0xff, 0xb7, 0x8f,
    0xf3, 0xdf, 0x50, 0x0, 0x6f, 0x9d, 0xf1, 0x0,
    0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1,
    0x0, 0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd,
    0xf1, 0x0, 0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f,
    0xbd, 0xf1, 0x0, 0x3, 0xfb,

    /* U+0E18 "ธ" */
    0x2, 0x9d, 0xff, 0xeb, 0x30, 0xef, 0xca, 0xab,
    0xd5, 0x2f, 0xb0, 0x0, 0x0, 0x0, 0xef, 0xa5,
    0x10, 0x0, 0x1, 0x9e, 0xff, 0xc6, 0x0, 0x54,
    0x2, 0x6d, 0xf7, 0xf, 0xc0, 0x0, 0x1f, 0xc0,
    0xfc, 0x0, 0x3, 0xfc, 0xf, 0xfb, 0x9a, 0xef,
    0x60, 0x7b, 0xdf, 0xec, 0x50,

    /* U+0E19 "น" */
    0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1, 0x0, 0x3,
    0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1, 0x0,
    0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1,
    0x0, 0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbb,
    0xf5, 0x0, 0x9, 0xfb, 0x5f, 0xfa, 0xae, 0xff,
    0xb0, 0x6d, 0xfe, 0x82, 0xfb,

    /* U+0E1A "บ" */
    0xdf, 0x10, 0x0, 0xe, 0xf0, 0xdf, 0x10, 0x0,
    0xe, 0xf0, 0xdf, 0x10, 0x0, 0xe, 0xf0, 0xdf,
    0x10, 0x0, 0xe, 0xf0, 0xdf, 0x10, 0x0, 0xe,
    0xf0, 0xdf, 0x10, 0x0, 0xe, 0xf0, 0xdf, 0x20,
    0x0, 0xf, 0xf0, 0xaf, 0x80, 0x0, 0x5f, 0xc0,
    0x2f, 0xfc, 0xab, 0xff, 0x40, 0x2, 0x9d, 0xfe,
    0xa3, 0x0,

    /* U+0E1B "ป" */
    0x0, 0x0, 0x0, 0xe, 0xf0, 0x0, 0x0, 0x0,
    0xe, 0xf0, 0x0, 0x0, 0x0, 0xe, 0xf0, 0xdf,
    0x10, 0x0, 0xe, 0xf0, 0xdf, 0x10, 0x0, 0xe,
    0xf0, 0xdf, 0x10, 0x0, 0xe, 0xf0, 0xdf, 0x10,
    0x0, 0xe, 0xf0, 0xdf, 0x10, 0x0, 0xe, 0xf0,
    0xdf, 0x10, 0x0, 0xe, 0xf0, 0xdf, 0x20, 0x0,
    0xf, 0xf0, 0xaf, 0x80, 0x0, 0x5f, 0xc0, 0x2f,
    0xfc, 0xab, 0xff, 0x40, 0x2, 0x9d, 0xfe, 0xa3,
    0x0,

    /* U+0E1C "ผ" */
    0x5e, 0xfb, 0x0, 0x7, 0xf7, 0xcf, 0xa6, 0x0,
    0x7, 0xf7, 0xdf, 0x0, 0x0, 0x7, 0xf7, 0xdf,
    0x0, 0xd7, 0x7, 0xf7, 0xdf, 0x6, 0xfe, 0x17,
    0xf7, 0xdf, 0x1e, 0x9e, 0x97, 0xf7, 0xdf, 0x9e,
    0x6, 0xf9, 0xf7, 0xdf, 0xf6, 0x0, 0xdf, 0xf7,
    0xdf, 0xd0, 0x0, 0x4f, 0xf7, 0xdf, 0x50, 0x0,
    0xc, 0xf7,

    /* U+0E1D "ฝ" */
    0x0, 0x0, 0x0, 0x7, 0xf7, 0x0, 0x0, 0x0,
    0x7, 0xf7, 0x0, 0x0, 0x0, 0x7, 0xf7, 0x5e,
    0xfb, 0x0, 0x7, 0xf7, 0xcf, 0xa6, 0x0, 0x7,
    0xf7, 0xdf, 0x0, 0x0, 0x7, 0xf7, 0xdf, 0x0,
    0xd7, 0x7, 0xf7, 0xdf, 0x6, 0xfe, 0x17, 0xf7,
    0xdf, 0x1e, 0x9e, 0x97, 0xf7, 0xdf, 0x9e, 0x6,
    0xf9, 0xf7, 0xdf, 0xf6, 0x0, 0xdf, 0xf7, 0xdf,
    0xd0, 0x0, 0x4f, 0xf7, 0xdf, 0x50, 0x0, 0xc,
    0xf7,

    /* U+0E1E "พ" */
    0x4f, 0xa0, 0x3, 0xf4, 0x0, 0x9f, 0x50, 0xfd,
    0x0, 0x4f, 0x90, 0xc, 0xf1, 0xd, 0xf1, 0x9,
    0xfd, 0x0, 0xfe, 0x0, 0x9f, 0x40, 0xdf, 0xf1,
    0x2f, 0xa0, 0x5, 0xf7, 0x2f, 0x7f, 0x65, 0xf6,
    0x0, 0x2f, 0xa7, 0xf0, 0xda, 0x8f, 0x30, 0x0,
    0xed, 0xcb, 0x9, 0xec, 0xf0, 0x0, 0xb, 0xff,
    0x60, 0x4f, 0xfc, 0x0, 0x0, 0x7f, 0xf1, 0x0,
    0xff, 0x80, 0x0, 0x3, 0xfc, 0x0, 0xb, 0xf5,
    0x0,

    /* U+0E1F "ฟ" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0x74, 0xfa, 0x0, 0x3f, 0x40,
    0x9, 0xf3, 0xf, 0xd0, 0x4, 0xf9, 0x0, 0xcf,
    0x0, 0xdf, 0x10, 0x9f, 0xd0, 0xf, 0xd0, 0x9,
    0xf4, 0xd, 0xff, 0x12, 0xf9, 0x0, 0x5f, 0x72,
    0xf7, 0xf6, 0x5f, 0x60, 0x2, 0xfa, 0x7f, 0xd,
    0xa8, 0xf2, 0x0, 0xe, 0xdc, 0xb0, 0x9e, 0xcf,
    0x0, 0x0, 0xbf, 0xf6, 0x4, 0xff, 0xb0, 0x0,
    0x7, 0xff, 0x10, 0xf, 0xf8, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0xbf, 0x40, 0x0,

    /* U+0E20 "ภ" */
    0x0, 0x17, 0xcf, 0xfd, 0x81, 0x0, 0x3e, 0xfd,
    0xba, 0xdf, 0xd0, 0x7, 0xf7, 0x0, 0x0, 0xcf,
    0x40, 0x6f, 0xfd, 0x30, 0x8, 0xf7, 0x0, 0x2e,
    0xf3, 0x0, 0x7f, 0x80, 0x9, 0xf5, 0x0, 0x7,
    0xf8, 0x0, 0xcf, 0x30, 0x0, 0x7f, 0x80, 0xc,
    0xf2, 0x0, 0x7, 0xf8, 0x19, 0xff, 0x10, 0x0,
    0x7f, 0x82, 0xff, 0x70, 0x0, 0x7, 0xf8,

    /* U+0E21 "ม" */
    0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1, 0x0, 0x3,
    0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1, 0x0,
    0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1,
    0x0, 0x3, 0xfb, 0xdf, 0x10, 0x0, 0x3f, 0xbd,
    0xf8, 0x0, 0x7, 0xf9, 0xdf, 0xfd, 0xab, 0xff,
    0x3d, 0xf1, 0x9e, 0xfc, 0x40,

    /* U+0E22 "ย" */
    0x3, 0xbf, 0xf5, 0x5, 0xf9, 0xe, 0xfb, 0xa4,
    0x5, 0xf9, 0x2f, 0xb0, 0x0, 0x5, 0xf9, 0x1f,
    0xe4, 0x20, 0x5, 0xf9, 0x5, 0xff, 0xf6, 0x5,
    0xf9, 0xd, 0xf8, 0x52, 0x5, 0xf9, 0x3f, 0xa0,
    0x0, 0x6, 0xf8, 0x3f, 0xc0, 0x0, 0xb, 0xf6,
    0xc, 0xfd, 0xaa, 0xdf, 0xd0, 0x0, 0x8d, 0xff,
    0xe9, 0x10,

    /* U+0E23 "ร" */
    0x1, 0x9d, 0xfe, 0xd6, 0x0, 0xdf, 0xca, 0xac,
    0xa0, 0x2f, 0xc0, 0x0, 0x0, 0x1, 0xfe, 0x40,
    0x0, 0x0, 0x5, 0xff, 0xe9, 0x20, 0x0, 0x0,
    0x6c, 0xff, 0x80, 0x0, 0x0, 0x2, 0xdf, 0x20,
    0x0, 0x0, 0xb, 0xf3, 0xf, 0xca, 0x9c, 0xfe,
    0x0, 0xad, 0xff, 0xea, 0x20,

    /* U+0E24 "ฤ" */
    0x0, 0x5b, 0xef, 0xda, 0x20, 0x1c, 0xfe, 0xba,
    0xcf, 0xf3, 0x3f, 0xb0, 0x0, 0x7, 0xfa, 0x2e,
    0xfd, 0x50, 0x2, 0xfd, 0x1, 0xcf, 0x60, 0x1,
    0xfe, 0x8, 0xf7, 0x0, 0x1, 0xfe, 0xb, 0xf3,
    0x0, 0x1, 0xfe, 0xb, 0xf4, 0x0, 0x1, 0xfe,
    0xa, 0xfc, 0x80, 0x1, 0xfe, 0x3, 0xef, 0xf0,
    0x1, 0xfe, 0x0, 0x0, 0x0, 0x1, 0xfe, 0x0,
    0x0, 0x0, 0x1, 0xfe, 0x0, 0x0, 0x0, 0x1,
    0xfe,

    /* U+0E25 "ล" */
    0x0, 0x9d, 0xef, 0xea, 0x20, 0x1, 0xeb, 0xaa,
    0xcf, 0xe1, 0x0, 0x0, 0x0, 0xa, 0xf6, 0x0,
    0x0, 0x0, 0x6, 0xf8, 0x1, 0x9d, 0xff, 0xff,
    0xf8, 0xb, 0xfc, 0x88, 0x8b, 0xf8, 0x1f, 0xd0,
    0x0, 0x6, 0xf8, 0x1f, 0xd0, 0x0, 0x6, 0xf8,
    0xc, 0xfc, 0x99, 0x6, 0xf8, 0x1, 0xaf, 0xfc,
    0x6, 0xf8,

    /* U+0E26 "ฦ" */
    0x0, 0x17, 0xcf, 0xfd, 0x80, 0x0, 0x3e, 0xfd,
    0xba, 0xdf, 0xd0, 0x7, 0xf7, 0x0, 0x0, 0xcf,
    0x40, 0x6f, 0xfd, 0x30, 0x8, 0xf7, 0x0, 0x2e,
    0xf3, 0x0, 0x7f, 0x80, 0x9, 0xf5, 0x0, 0x7,
    0xf8, 0x0, 0xcf, 0x30, 0x0, 0x7f, 0x80, 0xc,
    0xf2, 0x0, 0x7, 0xf8, 0x19, 0xff, 0x10, 0x0,
    0x7f, 0x82, 0xff, 0x70, 0x0, 0x7, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0x80, 0x0, 0x0, 0x0,
    0x7, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x80,

    /* U+0E27 "ว" */
    0x3b, 0xef, 0xea, 0x30, 0x6, 0xda, 0xac, 0xff,
    0x30, 0x0, 0x0, 0x5, 0xfd, 0x0, 0x0, 0x0,
    0xd, 0xf1, 0x0, 0x0, 0x0, 0xaf, 0x30, 0x0,
    0x0, 0xa, 0xf3, 0x0, 0x0, 0x0, 0xdf, 0x10,
    0x0, 0x0, 0x5f, 0xd0, 0x5d, 0xa9, 0xcf, 0xf4,
    0x3, 0xbe, 0xfe, 0xb3, 0x0,

    /* U+0E28 "ศ" */
    0x3, 0xbe, 0xff, 0xff, 0xfc, 0x3f, 0xfe, 0xcd,
    0xff, 0xd8, 0xaf, 0x80, 0x0, 0x7f, 0xb0, 0xdf,
    0x20, 0x0, 0x1f, 0xe0, 0xdf, 0x10, 0x0, 0xf,
    0xe0, 0xdf, 0xae, 0xf2, 0xf, 0xe0, 0xdf, 0xea,
    0x92, 0xf, 0xe0, 0xdf, 0x20, 0x0, 0xf, 0xe0,
    0xdf, 0x10, 0x0, 0xf, 0xe0, 0xdf, 0x10, 0x0,
    0xf, 0xe0,

    /* U+0E29 "ษ" */
    0xdf, 0x10, 0x0, 0xf, 0xf0, 0xd, 0xf1, 0x0,
    0x0, 0xff, 0x0, 0xdf, 0x10, 0x0, 0xf, 0xf0,
    0xd, 0xf1, 0x2, 0x88, 0xff, 0x80, 0xdf, 0x10,
    0x4f, 0xff, 0xff, 0xd, 0xf1, 0x0, 0x0, 0xff,
    0x0, 0xdf, 0x20, 0x0, 0xf, 0xf0, 0xa, 0xf8,
    0x0, 0x5, 0xfd, 0x0, 0x2f, 0xfc, 0xab, 0xff,
    0x50, 0x0, 0x29, 0xdf, 0xeb, 0x30, 0x0,

    /* U+0E2A "ส" */
    0x0, 0x9d, 0xef, 0xff, 0xff, 0x40, 0x1e, 0xba,
    0xad, 0xff, 0xa2, 0x0, 0x0, 0x0, 0xa, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0x70, 0x1, 0x9d,
    0xff, 0xff, 0xf8, 0x0, 0xbf, 0xc8, 0x88, 0xbf,
    0x80, 0x1f, 0xd0, 0x0, 0x6, 0xf8, 0x1, 0xfd,
    0x0, 0x0, 0x6f, 0x80, 0xd, 0xfc, 0x99, 0x6,
    0xf8, 0x0, 0x1a, 0xff, 0xc0, 0x6f, 0x80,

    /* U+0E2B "ห" */
    0xdf, 0x10, 0x0, 0x3f, 0xbd, 0xf1, 0x0, 0x3,
    0xfb, 0xdf, 0x10, 0x0, 0x6f, 0x9d, 0xf8, 0x88,
    0x9f, 0xf2, 0xdf, 0xff, 0xff, 0xfb, 0xd, 0xf1,
    0x0, 0x1b, 0xf7, 0xdf, 0x10, 0x0, 0x5f, 0x9d,
    0xf1, 0x0, 0x5, 0xfa, 0xdf, 0x10, 0x0, 0x5f,
    0xad, 0xf1, 0x0, 0x5, 0xfa,

    /* U+0E2C "ฬ" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x26, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x4f, 0xfc, 0x14, 0xfa, 0x0, 0x4, 0x2,
    0x6e, 0xf0, 0xf, 0xd0, 0x3, 0xf5, 0x0, 0xcf,
    0x0, 0xdf, 0x10, 0x5f, 0xa0, 0xe, 0xd0, 0x9,
    0xf4, 0xb, 0xff, 0x2, 0xf9, 0x0, 0x5f, 0x71,
    0xfc, 0xf4, 0x5f, 0x60, 0x2, 0xfa, 0x6f, 0x3f,
    0x98, 0xf2, 0x0, 0xe, 0xec, 0xd0, 0xbe, 0xcf,
    0x0, 0x0, 0xbf, 0xf8, 0x6, 0xff, 0xb0, 0x0,
    0x7, 0xff, 0x20, 0x1f, 0xf8, 0x0, 0x0, 0x3f,
    0xd0, 0x0, 0xcf, 0x40, 0x0,

    /* U+0E2D "อ" */
    0x8, 0xce, 0xff, 0xc6, 0x0, 0xe, 0xba, 0xab,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x1e, 0xf2, 0x0,
    0x0, 0x0, 0x7, 0xf6, 0x1f, 0xff, 0xc0, 0x5,
    0xf8, 0x1f, 0xe8, 0x60, 0x5, 0xf8, 0x1f, 0xc0,
    0x0, 0x7, 0xf6, 0x1f, 0xc0, 0x0, 0x1d, 0xf2,
    0x1f, 0xfb, 0x9b, 0xef, 0x90, 0x7, 0xbe, 0xff,
    0xc6, 0x0,

    /* U+0E2E "ฮ" */
    0x8, 0xce, 0xff, 0xff, 0xff, 0x30, 0xeb, 0xaa,
    0xbf, 0xfe, 0x91, 0x0, 0x0, 0x0, 0x1e, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x60, 0x1f, 0xff,
    0xc0, 0x5, 0xf8, 0x1, 0xfe, 0x86, 0x0, 0x5f,
    0x80, 0x1f, 0xc0, 0x0, 0x7, 0xf6, 0x1, 0xfc,
    0x0, 0x1, 0xdf, 0x20, 0x1f, 0xfb, 0x9b, 0xef,
    0x90, 0x0, 0x7b, 0xef, 0xfc, 0x60, 0x0,

    /* U+0E2F "ฯ" */
    0xc, 0xf2, 0x0, 0x1f, 0xd0, 0xfe, 0x0, 0x1,
    0xfd, 0xf, 0xd0, 0x0, 0x1f, 0xd0, 0xdf, 0x50,
    0x18, 0xfd, 0x4, 0xff, 0xff, 0xff, 0xd0, 0x1,
    0x68, 0x63, 0xfd, 0x0, 0x0, 0x0, 0x1f, 0xd0,
    0x0, 0x0, 0x1, 0xfd, 0x0, 0x0, 0x0, 0x1f,
    0xd0, 0x0, 0x0, 0x1, 0xfd,

    /* U+0E30 "ะ" */
    0x0, 0x0, 0x0, 0x3f, 0x82, 0x20, 0x3f, 0xff,
    0xf0, 0x15, 0x55, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0x82, 0x20, 0x3f, 0xff, 0xf0,
    0x15, 0x55, 0x50,

    /* U+0E31 "ั" */
    0x13, 0x0, 0x0, 0x6, 0xf4, 0x11, 0x11, 0x6f,
    0xff, 0xff, 0xd1, 0x44, 0x44, 0x43,

    /* U+0E32 "า" */
    0x6c, 0xff, 0xd6, 0xb, 0xba, 0xbf, 0xf4, 0x0,
    0x0, 0x7f, 0x90, 0x0, 0x3, 0xfb, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x3, 0xfc,

    /* U+0E33 "ำ" */
    0x8, 0xfe, 0x40, 0x0, 0x0, 0x0, 0x1f, 0x59,
    0xd0, 0x0, 0x0, 0x0, 0xb, 0xff, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xcf, 0xfd, 0x60, 0x0, 0x0,
    0xb, 0xba, 0xbf, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x3, 0xfb,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xfc,

    /* U+0E34 "ิ" */
    0x1, 0x11, 0x11, 0x11, 0x9f, 0xff, 0xff, 0xfd,
    0x24, 0x44, 0x44, 0x43,

    /* U+0E35 "ี" */
    0x0, 0x0, 0x0, 0x89, 0x1, 0x11, 0x11, 0xcd,
    0x9f, 0xff, 0xff, 0xfd, 0x24, 0x44, 0x44, 0x43,

    /* U+0E36 "ึ" */
    0x0, 0x0, 0x9, 0xd8, 0x0, 0x11, 0x13, 0xe0,
    0xe0, 0x9f, 0xff, 0xff, 0xbc, 0x2, 0x44, 0x44,
    0x44, 0x0,

    /* U+0E37 "ื" */
    0x0, 0x0, 0xb3, 0x69, 0x1, 0x12, 0xf6, 0x9d,
    0x9f, 0xff, 0xff, 0xfd, 0x24, 0x44, 0x44, 0x43,

    /* U+0E38 "ุ" */
    0x1, 0xe, 0xfd, 0x3d, 0xd0, 0xdd, 0x3, 0x30,

    /* U+0E39 "ู" */
    0x0, 0x0, 0x0, 0x6f, 0xf0, 0x9d, 0x19, 0xf1,
    0xbd, 0x3, 0xff, 0xf7, 0x0, 0x3, 0x10,

    /* U+0E3A "ฺ" */
    0x0, 0x0, 0xec, 0xd, 0xb0,

    /* U+0E3F "฿" */
    0x12, 0x25, 0xf4, 0x0, 0x0, 0xdf, 0xff, 0xff,
    0xfc, 0x20, 0xdf, 0x67, 0xf7, 0x9f, 0xc0, 0xdf,
    0x14, 0xf3, 0xc, 0xf1, 0xdf, 0x14, 0xf3, 0xb,
    0xf1, 0xdf, 0x35, 0xf5, 0x6f, 0xc0, 0xdf, 0xff,
    0xff, 0xff, 0x30, 0xdf, 0x67, 0xf7, 0x8f, 0xe1,
    0xdf, 0x14, 0xf3, 0x8, 0xf7, 0xdf, 0x14, 0xf3,
    0x6, 0xf8, 0xdf, 0x14, 0xf3, 0x9, 0xf6, 0xdf,
    0x89, 0xf9, 0xaf, 0xf1, 0xdf, 0xff, 0xff, 0xeb,
    0x30, 0x0, 0x4, 0xf3, 0x0, 0x0, 0x0, 0x3,
    0xd2, 0x0, 0x0,

    /* U+0E40 "เ" */
    0xdf, 0x10, 0xdf, 0x10, 0xdf, 0x10, 0xdf, 0x10,
    0xdf, 0x10, 0xdf, 0x10, 0xdf, 0x10, 0xdf, 0x20,
    0xcf, 0xc6, 0x5e, 0xfb,

    /* U+0E41 "แ" */
    0xdf, 0x10, 0x7f, 0x70, 0xdf, 0x10, 0x7f, 0x70,
    0xdf, 0x10, 0x7f, 0x70, 0xdf, 0x10, 0x7f, 0x70,
    0xdf, 0x10, 0x7f, 0x70, 0xdf, 0x10, 0x7f, 0x70,
    0xdf, 0x10, 0x7f, 0x70, 0xdf, 0x10, 0x7f, 0x70,
    0xcf, 0xb5, 0x6f, 0xe9, 0x5e, 0xf9, 0x1c, 0xff,

    /* U+0E42 "โ" */
    0xf, 0xff, 0xff, 0x70, 0xcf, 0xe9, 0x94, 0x0,
    0xaf, 0x50, 0x0, 0x4, 0xfb, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x2,
    0xfc, 0x0, 0x0, 0x1f, 0xf9, 0x30, 0x0, 0x9f,
    0xf6,

    /* U+0E43 "ใ" */
    0x9, 0xdf, 0xd5, 0x2, 0xda, 0xbf, 0xe0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x9f, 0x70, 0x0, 0x7f,
    0x90, 0x0, 0xf, 0xf0, 0x0, 0x1, 0xfd, 0x0,
    0x0, 0x1f, 0xd0, 0x0, 0x1, 0xfd, 0x0, 0x0,
    0x1f, 0xd0, 0x0, 0x1, 0xfd, 0x0, 0x0, 0x1f,
    0xd0, 0x0, 0x0, 0xff, 0x94, 0x0, 0x8, 0xff,
    0x70,

    /* U+0E44 "ไ" */
    0x3f, 0xff, 0xff, 0x21, 0x99, 0xcf, 0xd1, 0x0,
    0x2f, 0xd0, 0x0, 0x7, 0xf7, 0x0, 0x0, 0x9f,
    0x50, 0x0, 0x9, 0xf5, 0x0, 0x0, 0x9f, 0x50,
    0x0, 0x9, 0xf5, 0x0, 0x0, 0x9f, 0x50, 0x0,
    0x9, 0xf5, 0x0, 0x0, 0x9f, 0x50, 0x0, 0x9,
    0xf5, 0x0, 0x0, 0x8f, 0xc8, 0x0, 0x2, 0xdf,
    0xf0,

    /* U+0E45 "ๅ" */
    0x6c, 0xff, 0xd6, 0xb, 0xba, 0xbf, 0xf4, 0x0,
    0x0, 0x7f, 0x90, 0x0, 0x3, 0xfb, 0x0, 0x0,
    0x3f, 0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f,
    0xc0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0, 0x0,
    0x3, 0xfc, 0x0, 0x0, 0x3f, 0xc0,

    /* U+0E46 "ๆ" */
    0x1, 0xbf, 0xc5, 0xdf, 0xa0, 0xa, 0xfc, 0xdf,
    0xcd, 0xf6, 0xf, 0xf1, 0x27, 0x7, 0xf8, 0xf,
    0xf0, 0x0, 0x6, 0xf9, 0xe, 0xf5, 0x0, 0x6,
    0xf9, 0x6, 0xff, 0xfb, 0x6, 0xf9, 0x0, 0x38,
    0x95, 0x6, 0xf9, 0x0, 0x0, 0x0, 0x6, 0xf9,
    0x0, 0x0, 0x0, 0x6, 0xf9, 0x0, 0x0, 0x0,
    0x6, 0xf9,

    /* U+0E47 "็" */
    0x1b, 0xff, 0xff, 0xf1, 0x8d, 0x33, 0x32, 0x20,
    0x9c, 0x7, 0xe0, 0x0, 0x3e, 0xff, 0xdf, 0xc0,
    0x0, 0x10, 0x2, 0x20,

    /* U+0E48 "่" */
    0x1f, 0xd1, 0xfd, 0x1f, 0xd0,

    /* U+0E49 "้" */
    0x11, 0x10, 0x0, 0xb, 0xff, 0x10, 0x0, 0x37,
    0xf2, 0x11, 0x10, 0x4f, 0xff, 0xfe, 0x1, 0x44,
    0x44, 0x40,

    /* U+0E4A "๊" */
    0x9, 0xe8, 0xdc, 0x1d, 0x32, 0xf3, 0xe5, 0xc7,
    0xe3, 0x3f, 0x12, 0xa, 0x8f, 0x30, 0xcf, 0x60,
    0xaf, 0xd0, 0x0, 0x21, 0x1, 0x20, 0x0,

    /* U+0E4B "๋" */
    0x0, 0x21, 0x0, 0x3f, 0xb1, 0x5f, 0xff, 0xd1,
    0x6f, 0xc4,

    /* U+0E4C "์" */
    0x1, 0x11, 0x11, 0x6f, 0xff, 0xfd, 0x6f, 0x64,
    0x43, 0x5c, 0x20, 0x0,

    /* U+0E4D "ํ" */
    0x5, 0xec, 0x20, 0xf5, 0x9b, 0x1f, 0x38, 0xc0,
    0x8f, 0xf4, 0x0, 0x10, 0x0,

    /* U+0E4E "๎" */
    0x0, 0x9e, 0xa0, 0xf, 0x50, 0xa, 0xda, 0x3,
    0xf3, 0x10, 0xb, 0xfe, 0x0,

    /* U+0E4F "๏" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xaf,
    0xfe, 0x90, 0x0, 0x2, 0xed, 0x64, 0x7e, 0xd0,
    0x0, 0xbd, 0x2b, 0xfa, 0x2e, 0x90, 0x1f, 0x5b,
    0xa3, 0xb9, 0x7f, 0x2, 0xf2, 0xc7, 0x9, 0xa4,
    0xf0, 0x1f, 0x53, 0xef, 0xd2, 0x7e, 0x0, 0xbd,
    0x10, 0x20, 0x2e, 0x80, 0x1, 0xde, 0x86, 0x9f,
    0xc0, 0x0, 0x1, 0x8e, 0xfd, 0x70, 0x0,

    /* U+0E50 "๐" */
    0x0, 0x2a, 0xef, 0xea, 0x20, 0x0, 0x3f, 0xfc,
    0xac, 0xff, 0x30, 0xd, 0xf4, 0x0, 0x4, 0xfd,
    0x1, 0xfc, 0x0, 0x0, 0xd, 0xf1, 0x3f, 0xb0,
    0x0, 0x0, 0xbf, 0x32, 0xfc, 0x0, 0x0, 0xd,
    0xf1, 0xd, 0xf4, 0x0, 0x4, 0xfd, 0x0, 0x4f,
    0xfc, 0xab, 0xff, 0x40, 0x0, 0x3a, 0xef, 0xea,
    0x30, 0x0,

    /* U+0E51 "๑" */
    0x0, 0x3a, 0xef, 0xfc, 0x60, 0x0, 0x5f, 0xfc,
    0xab, 0xff, 0x90, 0xe, 0xf4, 0x0, 0x1, 0xdf,
    0x32, 0xfc, 0x0, 0x0, 0x6, 0xf8, 0x2f, 0xb0,
    0x0, 0x0, 0x4f, 0xa0, 0xfe, 0x0, 0x0, 0x4,
    0xfa, 0x9, 0xfd, 0x9a, 0x50, 0x7f, 0x70, 0x8,
    0xdf, 0xd3, 0x1e, 0xf1, 0x0, 0x0, 0x0, 0x4d,
    0xf7, 0x0, 0x0, 0x0, 0xaf, 0xf7, 0x0, 0x0,
    0x0, 0x7, 0x71, 0x0, 0x0,

    /* U+0E52 "๒" */
    0xde, 0x0, 0x0, 0x0, 0x10, 0xd, 0xe0, 0x8f,
    0xf8, 0xef, 0xc0, 0xde, 0x1f, 0xa9, 0xf9, 0xaf,
    0x6d, 0xe4, 0xf3, 0x17, 0x14, 0xf7, 0xde, 0x4f,
    0x30, 0x0, 0x4f, 0x8d, 0xe2, 0xf9, 0x12, 0x4,
    0xf7, 0xbf, 0x18, 0xff, 0xb0, 0x6f, 0x66, 0xfa,
    0x1, 0x31, 0x1d, 0xf2, 0xb, 0xfe, 0xa8, 0xaf,
    0xf7, 0x0, 0x6, 0xbe, 0xfe, 0xb4, 0x0,

    /* U+0E53 "๓" */
    0x0, 0x9f, 0xd5, 0x8e, 0xe7, 0x0, 0x9f, 0xcc,
    0xff, 0xae, 0xf3, 0xf, 0xe0, 0xe, 0x90, 0x8f,
    0x62, 0xfb, 0x0, 0xe9, 0x7, 0xf7, 0x3f, 0xa0,
    0x1, 0x10, 0x7f, 0x72, 0xfa, 0x0, 0x0, 0x7,
    0xf7, 0xf, 0xe1, 0x0, 0x0, 0x7f, 0x70, 0x9f,
    0xea, 0x92, 0x7, 0xf7, 0x0, 0x7d, 0xfe, 0x30,
    0x7f, 0x70,

    /* U+0E54 "๔" */
    0x0, 0x0, 0x0, 0x0, 0x14, 0x50, 0x0, 0x7c,
    0xef, 0xff, 0xf8, 0x1, 0xdf, 0xea, 0x98, 0x74,
    0x0, 0xbf, 0x80, 0x0, 0x0, 0x0, 0x1f, 0xd0,
    0x0, 0x0, 0x10, 0x3, 0xfa, 0x0, 0x7, 0xff,
    0xf3, 0x2f, 0xb0, 0x3, 0xfc, 0x55, 0x20, 0xef,
    0x20, 0x4f, 0x70, 0x0, 0x6, 0xff, 0xaa, 0xff,
    0xa9, 0x80, 0x5, 0xcf, 0xfb, 0x9e, 0xfe,

    /* U+0E55 "๕" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xa5,
    0x10, 0x1, 0x45, 0x0, 0x2c, 0xff, 0xff, 0xff,
    0x80, 0x7, 0xff, 0xb9, 0x87, 0x40, 0x7, 0xfa,
    0x10, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x1,
    0x0, 0x2f, 0xa0, 0x0, 0x7f, 0xff, 0x32, 0xfb,
    0x0, 0x3f, 0xc5, 0x52, 0xf, 0xf1, 0x4, 0xf7,
    0x0, 0x0, 0x7f, 0xfa, 0xaf, 0xfa, 0x98, 0x0,
    0x5c, 0xef, 0xb9, 0xef, 0xe0,

    /* U+0E56 "๖" */
    0x6f, 0x40, 0x0, 0x0, 0x0, 0x1, 0xfa, 0x7,
    0xdf, 0xea, 0x10, 0xb, 0xfa, 0xfb, 0xad, 0xfe,
    0x10, 0x6f, 0xf3, 0x0, 0x9, 0xf7, 0x1, 0xe9,
    0x0, 0x0, 0x2f, 0xb0, 0x0, 0x0, 0x0, 0x1,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xb0, 0x2,
    0x10, 0x0, 0xb, 0xf6, 0x0, 0x6f, 0xca, 0xae,
    0xfc, 0x0, 0x1, 0x8d, 0xff, 0xd7, 0x0,

    /* U+0E57 "๗" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0x30,
    0xa, 0xfe, 0x4a, 0xee, 0x60, 0x9, 0xf3, 0x9,
    0xfb, 0xcf, 0xfa, 0xef, 0x10, 0x9f, 0x30, 0xfd,
    0x2, 0xf8, 0x8, 0xf3, 0x9, 0xf3, 0x2f, 0xa0,
    0x1f, 0x80, 0x7f, 0x30, 0x9f, 0x33, 0xf9, 0x0,
    0x10, 0x7, 0xf3, 0x9, 0xf3, 0x2f, 0xa0, 0x0,
    0x0, 0x7f, 0x30, 0x9f, 0x20, 0xfe, 0x10, 0x0,
    0x7, 0xf3, 0xc, 0xf0, 0x9, 0xfe, 0xba, 0x30,
    0x7f, 0xbd, 0xfa, 0x0, 0x8, 0xdf, 0xe3, 0x7,
    0xff, 0xe9, 0x10,

    /* U+0E58 "๘" */
    0x0, 0x0, 0x0, 0x0, 0x15, 0x50, 0x1, 0x8d,
    0xff, 0xff, 0xf7, 0x3, 0xef, 0xda, 0x88, 0x63,
    0x0, 0xcf, 0x50, 0x0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x2, 0xff, 0x83, 0xfa, 0x0, 0x43, 0x4,
    0xf8, 0x2f, 0xa0, 0xb, 0xa0, 0x1f, 0x80, 0xfd,
    0x0, 0xcb, 0x1, 0xf8, 0xa, 0xfc, 0xaf, 0xfa,
    0xbf, 0x80, 0x1a, 0xfe, 0x77, 0xef, 0xc2,

    /* U+0E59 "๙" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xf0, 0xa,
    0xfe, 0x68, 0xfe, 0x70, 0x9f, 0x9, 0xfc, 0xbf,
    0xfa, 0xcf, 0x4c, 0xc0, 0xfe, 0x0, 0xdf, 0x3,
    0xff, 0xf5, 0x2f, 0xa0, 0x8, 0xf2, 0x4, 0x41,
    0x3, 0xfa, 0x0, 0x4f, 0x70, 0x0, 0x0, 0x2f,
    0xa0, 0x0, 0xfb, 0x0, 0x0, 0x0, 0xfe, 0x0,
    0xb, 0xf0, 0x0, 0x0, 0x8, 0xfc, 0x94, 0x6f,
    0x40, 0x0, 0x0, 0x8, 0xef, 0x72, 0xf9, 0x0,
    0x0,

    /* U+0E5A "๚" */
    0xc, 0xf2, 0x0, 0x1f, 0xd0, 0x0, 0x4f, 0xb0,
    0xfe, 0x0, 0x1, 0xfd, 0x0, 0x4, 0xfb, 0xf,
    0xd0, 0x0, 0x1f, 0xd0, 0x0, 0x4f, 0xb0, 0xdf,
    0x50, 0x18, 0xff, 0x30, 0x2a, 0xfb, 0x4, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x1, 0x68,
    0x63, 0xfe, 0x68, 0x55, 0xfb, 0x0, 0x0, 0x0,
    0x1f, 0xd0, 0x0, 0x4f, 0xb0, 0x0, 0x0, 0x1,
    0xfd, 0x0, 0x4, 0xfb, 0x0, 0x0, 0x0, 0x1f,
    0xd0, 0x0, 0x4f, 0xb0, 0x0, 0x0, 0x1, 0xfd,
    0x0, 0x4, 0xfb,

    /* U+0E5B "๛" */
    0x0, 0x3b, 0xfe, 0xb2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xd6, 0x6d, 0xf1, 0x26,
    0x20, 0x0, 0x0, 0x0, 0x0, 0xb, 0xe0, 0x0,
    0x1f, 0x75, 0xfa, 0xc, 0x80, 0x71, 0x0, 0x1,
    0xf8, 0x0, 0x0, 0xe9, 0x4f, 0xf1, 0xfe, 0x2f,
    0x7b, 0x40, 0x2f, 0x60, 0x0, 0xf, 0x84, 0xfc,
    0x7e, 0xe9, 0xec, 0xef, 0x42, 0xf7, 0x0, 0x9,
    0xf2, 0x7f, 0x7f, 0xa9, 0xf8, 0xee, 0x20, 0xf,
    0xa0, 0x0, 0xe5, 0xc, 0xb3, 0xf6, 0x4f, 0x36,
    0x50, 0x0, 0xaf, 0x30, 0x0, 0x6, 0xf5, 0x6,
    0x10, 0x0, 0x0, 0x0, 0x1, 0xef, 0x96, 0x7b,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x9d, 0xfe, 0xb5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 177, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 167, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 166, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 162, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 164, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 168, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 168, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 168, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 276, .box_w = 17, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 279, .box_w = 17, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 719, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 796, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 873, .adv_w = 174, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 950, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 285, .box_w = 17, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 276, .box_w = 17, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 185, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 177, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1330, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1375, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1420, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1465, .adv_w = 179, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1515, .adv_w = 179, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1580, .adv_w = 185, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1630, .adv_w = 185, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1695, .adv_w = 209, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1760, .adv_w = 209, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1845, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1900, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1945, .adv_w = 172, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1995, .adv_w = 145, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2040, .adv_w = 177, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2105, .adv_w = 171, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2155, .adv_w = 186, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2227, .adv_w = 143, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2272, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2322, .adv_w = 183, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2377, .adv_w = 175, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2432, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2477, .adv_w = 209, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2562, .adv_w = 166, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2612, .adv_w = 174, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2667, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2712, .adv_w = 93, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2739, .adv_w = 0, .box_w = 7, .box_h = 4, .ofs_x = -6, .ofs_y = 11},
    {.bitmap_index = 2753, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2788, .adv_w = 127, .box_w = 12, .box_h = 14, .ofs_x = -5, .ofs_y = 0},
    {.bitmap_index = 2872, .adv_w = 0, .box_w = 8, .box_h = 3, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 2884, .adv_w = 0, .box_w = 8, .box_h = 4, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 2900, .adv_w = 0, .box_w = 9, .box_h = 4, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 2918, .adv_w = 0, .box_w = 8, .box_h = 4, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 2934, .adv_w = 0, .box_w = 3, .box_h = 5, .ofs_x = -4, .ofs_y = -5},
    {.bitmap_index = 2942, .adv_w = 0, .box_w = 6, .box_h = 5, .ofs_x = -7, .ofs_y = -6},
    {.bitmap_index = 2957, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -4, .ofs_y = -3},
    {.bitmap_index = 2962, .adv_w = 182, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3037, .adv_w = 88, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3057, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3097, .adv_w = 91, .box_w = 7, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3146, .adv_w = 85, .box_w = 7, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3195, .adv_w = 87, .box_w = 7, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3244, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3290, .adv_w = 171, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3340, .adv_w = 0, .box_w = 8, .box_h = 5, .ofs_x = -9, .ofs_y = 10},
    {.bitmap_index = 3360, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -4, .ofs_y = 11},
    {.bitmap_index = 3365, .adv_w = 0, .box_w = 7, .box_h = 5, .ofs_x = -7, .ofs_y = 11},
    {.bitmap_index = 3383, .adv_w = 0, .box_w = 9, .box_h = 5, .ofs_x = -9, .ofs_y = 10},
    {.bitmap_index = 3406, .adv_w = 0, .box_w = 5, .box_h = 4, .ofs_x = -6, .ofs_y = 11},
    {.bitmap_index = 3416, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -6, .ofs_y = 11},
    {.bitmap_index = 3428, .adv_w = 0, .box_w = 5, .box_h = 5, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 3441, .adv_w = 0, .box_w = 5, .box_h = 5, .ofs_x = -6, .ofs_y = 11},
    {.bitmap_index = 3454, .adv_w = 174, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3509, .adv_w = 176, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3559, .adv_w = 183, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3620, .adv_w = 202, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3675, .adv_w = 185, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3725, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3780, .adv_w = 180, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3841, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3896, .adv_w = 245, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3971, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4026, .adv_w = 214, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4091, .adv_w = 253, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4166, .adv_w = 338, .box_w = 21, .box_h = 10, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 3585, .range_length = 58, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3647, .range_length = 29, .glyph_id_start = 59,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Kanit18 = {
#else
lv_font_t ui_font_Kanit18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_KANIT18*/

