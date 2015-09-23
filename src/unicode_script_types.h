#ifndef UNICODE_SCRIPT_TYPES_H
#define UNICODE_SCRIPT_TYPES_H

#include <stdlib.h>

#define NUM_CODEPOINTS 1114112
#define MAX_LANGS 122

typedef enum {
    SCRIPT_UNKNOWN = 0,
    SCRIPT_COMMON = 1,
    SCRIPT_LATIN = 2,
    SCRIPT_BOPOMOFO = 3,
    SCRIPT_INHERITED = 4,
    SCRIPT_GREEK = 5,
    SCRIPT_COPTIC = 6,
    SCRIPT_CYRILLIC = 7,
    SCRIPT_ARMENIAN = 8,
    SCRIPT_HEBREW = 9,
    SCRIPT_ARABIC = 10,
    SCRIPT_SYRIAC = 11,
    SCRIPT_THAANA = 12,
    SCRIPT_NKO = 13,
    SCRIPT_SAMARITAN = 14,
    SCRIPT_MANDAIC = 15,
    SCRIPT_DEVANAGARI = 16,
    SCRIPT_BENGALI = 17,
    SCRIPT_GURMUKHI = 18,
    SCRIPT_GUJARATI = 19,
    SCRIPT_ORIYA = 20,
    SCRIPT_TAMIL = 21,
    SCRIPT_TELUGU = 22,
    SCRIPT_KANNADA = 23,
    SCRIPT_MALAYALAM = 24,
    SCRIPT_SINHALA = 25,
    SCRIPT_THAI = 26,
    SCRIPT_LAO = 27,
    SCRIPT_TIBETAN = 28,
    SCRIPT_MYANMAR = 29,
    SCRIPT_GEORGIAN = 30,
    SCRIPT_HANGUL = 31,
    SCRIPT_ETHIOPIC = 32,
    SCRIPT_CHEROKEE = 33,
    SCRIPT_CANADIAN_ABORIGINAL = 34,
    SCRIPT_OGHAM = 35,
    SCRIPT_RUNIC = 36,
    SCRIPT_TAGALOG = 37,
    SCRIPT_HANUNOO = 38,
    SCRIPT_BUHID = 39,
    SCRIPT_TAGBANWA = 40,
    SCRIPT_KHMER = 41,
    SCRIPT_MONGOLIAN = 42,
    SCRIPT_LIMBU = 43,
    SCRIPT_TAI_LE = 44,
    SCRIPT_NEW_TAI_LUE = 45,
    SCRIPT_BUGINESE = 46,
    SCRIPT_TAI_THAM = 47,
    SCRIPT_BALINESE = 48,
    SCRIPT_SUNDANESE = 49,
    SCRIPT_BATAK = 50,
    SCRIPT_LEPCHA = 51,
    SCRIPT_OL_CHIKI = 52,
    SCRIPT_BRAILLE = 53,
    SCRIPT_GLAGOLITIC = 54,
    SCRIPT_TIFINAGH = 55,
    SCRIPT_HAN = 56,
    SCRIPT_HIRAGANA = 57,
    SCRIPT_KATAKANA = 58,
    SCRIPT_YI = 59,
    SCRIPT_LISU = 60,
    SCRIPT_VAI = 61,
    SCRIPT_BAMUM = 62,
    SCRIPT_SYLOTI_NAGRI = 63,
    SCRIPT_PHAGS_PA = 64,
    SCRIPT_SAURASHTRA = 65,
    SCRIPT_KAYAH_LI = 66,
    SCRIPT_REJANG = 67,
    SCRIPT_JAVANESE = 68,
    SCRIPT_CHAM = 69,
    SCRIPT_TAI_VIET = 70,
    SCRIPT_MEETEI_MAYEK = 71,
    SCRIPT_LINEAR_B = 72,
    SCRIPT_LYCIAN = 73,
    SCRIPT_CARIAN = 74,
    SCRIPT_OLD_ITALIC = 75,
    SCRIPT_GOTHIC = 76,
    SCRIPT_OLD_PERMIC = 77,
    SCRIPT_UGARITIC = 78,
    SCRIPT_OLD_PERSIAN = 79,
    SCRIPT_DESERET = 80,
    SCRIPT_SHAVIAN = 81,
    SCRIPT_OSMANYA = 82,
    SCRIPT_ELBASAN = 83,
    SCRIPT_CAUCASIAN_ALBANIAN = 84,
    SCRIPT_LINEAR_A = 85,
    SCRIPT_CYPRIOT = 86,
    SCRIPT_IMPERIAL_ARAMAIC = 87,
    SCRIPT_PALMYRENE = 88,
    SCRIPT_NABATAEAN = 89,
    SCRIPT_HATRAN = 90,
    SCRIPT_PHOENICIAN = 91,
    SCRIPT_LYDIAN = 92,
    SCRIPT_MEROITIC_HIEROGLYPHS = 93,
    SCRIPT_MEROITIC_CURSIVE = 94,
    SCRIPT_KHAROSHTHI = 95,
    SCRIPT_OLD_SOUTH_ARABIAN = 96,
    SCRIPT_OLD_NORTH_ARABIAN = 97,
    SCRIPT_MANICHAEAN = 98,
    SCRIPT_AVESTAN = 99,
    SCRIPT_INSCRIPTIONAL_PARTHIAN = 100,
    SCRIPT_INSCRIPTIONAL_PAHLAVI = 101,
    SCRIPT_PSALTER_PAHLAVI = 102,
    SCRIPT_OLD_TURKIC = 103,
    SCRIPT_OLD_HUNGARIAN = 104,
    SCRIPT_BRAHMI = 105,
    SCRIPT_KAITHI = 106,
    SCRIPT_SORA_SOMPENG = 107,
    SCRIPT_CHAKMA = 108,
    SCRIPT_MAHAJANI = 109,
    SCRIPT_SHARADA = 110,
    SCRIPT_KHOJKI = 111,
    SCRIPT_MULTANI = 112,
    SCRIPT_KHUDAWADI = 113,
    SCRIPT_GRANTHA = 114,
    SCRIPT_TIRHUTA = 115,
    SCRIPT_SIDDHAM = 116,
    SCRIPT_MODI = 117,
    SCRIPT_TAKRI = 118,
    SCRIPT_AHOM = 119,
    SCRIPT_WARANG_CITI = 120,
    SCRIPT_PAU_CIN_HAU = 121,
    SCRIPT_CUNEIFORM = 122,
    SCRIPT_EGYPTIAN_HIEROGLYPHS = 123,
    SCRIPT_ANATOLIAN_HIEROGLYPHS = 124,
    SCRIPT_MRO = 125,
    SCRIPT_BASSA_VAH = 126,
    SCRIPT_PAHAWH_HMONG = 127,
    SCRIPT_MIAO = 128,
    SCRIPT_DUPLOYAN = 129,
    SCRIPT_SIGNWRITING = 130,
    SCRIPT_MENDE_KIKAKUI = 131,
    NUM_SCRIPTS
} script_t;

#endif
