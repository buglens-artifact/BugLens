extern int printf (const char *, ...);



static char
(safe_unary_minus_func_int8_t_s)(char si )
{
 
  return


    (si==(-128)) ?
    ((si)) :


    -si;
}

static char
(safe_add_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((127)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-128)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static char
(safe_sub_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(127))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static char
(safe_mul_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((127) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-128) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-128) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((127) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static char
(safe_mod_func_int8_t_s_s)(char si1, char si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static char
(safe_div_func_int8_t_s_s)(char si1, char si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static char
(safe_lshift_func_int8_t_s_s)(char left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static char
(safe_lshift_func_int8_t_s_u)(char left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static char
(safe_rshift_func_int8_t_s_s)(char left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static char
(safe_rshift_func_int8_t_s_u)(char left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static short
(safe_unary_minus_func_int16_t_s)(short si )
{
 
  return


    (si==(-32767-1)) ?
    ((si)) :


    -si;
}

static short
(safe_add_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((32767)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-32767-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static short
(safe_sub_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(32767))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static short
(safe_mul_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((32767) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-32767-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-32767-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((32767) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static short
(safe_mod_func_int16_t_s_s)(short si1, short si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static short
(safe_div_func_int16_t_s_s)(short si1, short si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static short
(safe_lshift_func_int16_t_s_s)(short left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static short
(safe_lshift_func_int16_t_s_u)(short left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static short
(safe_rshift_func_int16_t_s_s)(short left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static short
(safe_rshift_func_int16_t_s_u)(short left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int
(safe_unary_minus_func_int32_t_s)(int si )
{
 
  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
}

static int
(safe_add_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int
(safe_sub_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int
(safe_mul_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int
(safe_mod_func_int32_t_s_s)(int si1, int si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int
(safe_div_func_int32_t_s_s)(int si1, int si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int
(safe_lshift_func_int32_t_s_s)(int left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int
(safe_lshift_func_int32_t_s_u)(int left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int
(safe_rshift_func_int32_t_s_s)(int left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int
(safe_rshift_func_int32_t_s_u)(int left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
static unsigned char
(safe_unary_minus_func_uint8_t_u)(unsigned char ui )
{
 
  return -ui;
}

static unsigned char
(safe_add_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ui1 + ui2;
}

static unsigned char
(safe_sub_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ui1 - ui2;
}

static unsigned char
(safe_mul_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned char
(safe_mod_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned char
(safe_div_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned char
(safe_lshift_func_uint8_t_u_s)(unsigned char left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned char
(safe_lshift_func_uint8_t_u_u)(unsigned char left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned char
(safe_rshift_func_uint8_t_u_s)(unsigned char left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned char
(safe_rshift_func_uint8_t_u_u)(unsigned char left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static unsigned short
(safe_unary_minus_func_uint16_t_u)(unsigned short ui )
{
 
  return -ui;
}

static unsigned short
(safe_add_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ui1 + ui2;
}

static unsigned short
(safe_sub_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ui1 - ui2;
}

static unsigned short
(safe_mul_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned short
(safe_mod_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned short
(safe_div_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned short
(safe_lshift_func_uint16_t_u_s)(unsigned short left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned short
(safe_lshift_func_uint16_t_u_u)(unsigned short left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned short
(safe_rshift_func_uint16_t_u_s)(unsigned short left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned short
(safe_rshift_func_uint16_t_u_u)(unsigned short left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static unsigned
(safe_unary_minus_func_uint32_t_u)(unsigned ui )
{
 
  return -ui;
}

static unsigned
(safe_add_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ui1 + ui2;
}

static unsigned
(safe_sub_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ui1 - ui2;
}

static unsigned
(safe_mul_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned
(safe_mod_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned
(safe_div_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned
(safe_lshift_func_uint32_t_u_s)(unsigned left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned
(safe_lshift_func_uint32_t_u_u)(unsigned left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned
(safe_rshift_func_uint32_t_u_s)(unsigned left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned
(safe_rshift_func_uint32_t_u_u)(unsigned left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}

static inline void platform_main_begin(void)
{
}

static inline void crc32_gentab (void)
{
}



int crc32_context;
extern int strcmp (const char *, const char *);


static inline void
transparent_crc (unsigned val, char* vname, int flag)
{
  if (flag) printf ("%s %d\n", vname, val);
  crc32_context += val;
}

static inline void
platform_main_end (int x, int flag)
{
  if (!flag) printf ("checksum = %x\n", x);
}


static long __undefined;



static unsigned char g_6 = 0x99L;
static int g_14 = (-5L);
static unsigned char g_16 = 0x9DL;
static unsigned g_36 = 0x0D69B45CL;
static char g_47 = 9L;
static char g_51 = 0xA4L;
static char *g_50[2] = {&g_51, &g_51};
static int g_65 = 1L;
static int g_72[6][10][4] = {{{0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}}, {{0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}}, {{0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}}, {{0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}}, {{0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}}, {{0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}, {0xD2503B3CL, 0L, (-2L), 6L}}};
static int *g_71 = &g_72[3][5][3];
static int g_82[5] = {(-10L), (-10L), (-10L), (-10L), (-10L)};
static short g_87 = (-1L);
static volatile int g_88[2] = {0xD2B54446L, 0xD2B54446L};
static volatile int g_89 = 0x356F341AL;
static int g_90 = 1L;
static volatile int g_91 = 0x5DA86A19L;
static int g_92 = 0x873BCDA4L;
static const unsigned char g_102[2][5] = {{246UL, 0x7FL, 0xEEL, 0xEEL, 0x7FL}, {246UL, 0x7FL, 0xEEL, 0xEEL, 0x7FL}};
static const unsigned g_118 = 0x52BBFD28L;
static unsigned short g_128 = 0x0113L;
static unsigned char *g_147 = &g_6;
static unsigned char **g_146 = &g_147;
static unsigned char g_158[8] = {248UL, 1UL, 248UL, 1UL, 248UL, 1UL, 248UL, 1UL};
static unsigned char g_161 = 248UL;
static int g_167 = 0x0D86458DL;
static unsigned short g_194 = 0xA791L;
static unsigned g_261[4][5] = {{0xB18FCEAAL, 0UL, 4294967289UL, 0UL, 0xB18FCEAAL}, {0xB18FCEAAL, 0UL, 4294967289UL, 0UL, 0xB18FCEAAL}, {0xB18FCEAAL, 0UL, 4294967289UL, 0UL, 0xB18FCEAAL}, {0xB18FCEAAL, 0UL, 4294967289UL, 0UL, 0xB18FCEAAL}};
static short g_317[2][9] = {{0xA0D1L, 0xC68BL, 0xA0D1L, 0xC68BL, 0xA0D1L, 0xC68BL, 0xA0D1L, 0xC68BL, 0xA0D1L}, {0xA0D1L, 0xC68BL, 0xA0D1L, 0xC68BL, 0xA0D1L, 0xC68BL, 0xA0D1L, 0xC68BL, 0xA0D1L}};
static unsigned g_380 = 4294967295UL;
static volatile unsigned short *g_484 = (void*)0;
static volatile unsigned short **g_483 = &g_484;
static short *g_543 = &g_317[0][6];
static short **g_542 = &g_543;
static const volatile char g_547 = 0L;
static volatile short g_621 = 2L;
static const unsigned g_647[4][4] = {{0x3495B26DL, 1UL, 0xA9EB4576L, 0xA9EB4576L}, {0x3495B26DL, 1UL, 0xA9EB4576L, 0xA9EB4576L}, {0x3495B26DL, 1UL, 0xA9EB4576L, 0xA9EB4576L}, {0x3495B26DL, 1UL, 0xA9EB4576L, 0xA9EB4576L}};
static volatile int *g_665 = (void*)0;
static unsigned g_756 = 0x6908EE8FL;
static volatile int ****g_785[1] = {(void*)0};
static volatile int g_812 = (-5L);
static short g_905 = 1L;
static const int *g_933 = &g_92;
static volatile unsigned g_946 = 0xEB970602L;
static int g_954 = 0x250837E2L;
static unsigned short *g_972 = &g_128;
static unsigned short **g_971[9] = {&g_972, &g_972, &g_972, &g_972, &g_972, &g_972, &g_972, &g_972, &g_972};
static int **g_1017 = &g_71;
static int ***g_1016 = &g_1017;
static int ****g_1015 = &g_1016;
static char **g_1046 = &g_50[1];
static char ***g_1045 = &g_1046;
static unsigned char g_1059 = 3UL;
static volatile char * const g_1093 = (void*)0;
static const int **g_1136 = &g_933;
static const int ***g_1135[5][6] = {{&g_1136, &g_1136, &g_1136, &g_1136, &g_1136, &g_1136}, {&g_1136, &g_1136, &g_1136, &g_1136, &g_1136, &g_1136}, {&g_1136, &g_1136, &g_1136, &g_1136, &g_1136, &g_1136}, {&g_1136, &g_1136, &g_1136, &g_1136, &g_1136, &g_1136}, {&g_1136, &g_1136, &g_1136, &g_1136, &g_1136, &g_1136}};
static const int ****g_1134 = &g_1135[0][4];
static const int *****g_1133 = &g_1134;
static const int ******g_1132 = &g_1133;
static unsigned g_1144 = 0UL;
static unsigned *g_1188 = &g_36;
static unsigned **g_1187 = &g_1188;
static int *g_1200 = &g_14;



static int func_1(void);
static int func_2(const unsigned char p_3, int p_4);
static int * func_7(int * p_8, unsigned short p_9, short p_10, unsigned char p_11, int * p_12);
static char func_20(short p_21);
static int func_24(unsigned short p_25, unsigned short p_26, const char p_27, unsigned char * p_28, char p_29);
static unsigned * func_37(unsigned char p_38, int * p_39, int p_40, short p_41);
static unsigned func_48(char * p_49);
static int func_56(unsigned char p_57, char p_58);
static unsigned char func_59(unsigned p_60, int p_61, unsigned p_62);
static unsigned short func_68(int * p_69, int p_70);
static int func_1(void)
{
    unsigned short l_5 = 0x5816L;
    int l_1197 = 0xE238E033L;
    int *l_1198 = &g_82[0];
    unsigned l_1199 = 0xC4072ECFL;
    (*l_1198) = (l_1197 = func_2((1L & l_5), g_6));


    ;


    (**g_1016) = &l_1197;

    ;
    (*l_1198) = l_1199;
    (*g_1136) = ((**g_1016) = g_1200);

    ;
    ;
    return (*l_1198);
}







static int func_2(const unsigned char p_3, int p_4)
{
    int *l_13[5][7][7] = {{{&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}}, {{&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}}, {{&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}}, {{&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}}, {{&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}, {&g_14, (void*)0, &g_14, &g_14, (void*)0, &g_14, (void*)0}}};
    unsigned char *l_15 = &g_16;
    char l_17[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_17[i] = 9L;
    (*g_1017) = func_7(l_13[1][2][6], g_6, ((((*l_15) = ((g_14 = (-6L)) >= 2UL)) && (l_17[2] > p_3)) != (safe_lshift_func_uint8_t_u_s(p_4, (func_20(p_4) != p_4)))), p_4, l_13[1][2][6]);

    ;
    ;


    for (p_4 = 3; (p_4 >= 0); p_4 -= 1)
    {
        int l_1121 = 0L;
        int *l_1122 = &g_72[3][5][3];
        short *l_1164 = &g_87;
        int l_1195 = 0xDA1FD1F9L;
        int l_1196 = (-9L);
        if (p_3)
        {
            return l_1121;
        }
        else
        {
            (*g_1017) = l_1122;

            ;
        }

        ;
        if (func_20((*l_1122)))
        {
            int *l_1123 = &g_90;
            (***g_1015) = l_1122;

            ;
            (*g_1017) = l_1122;
            for (g_16 = 0; (g_16 <= 4); g_16 += 1)
            {
                char l_1124 = 0L;
                for (g_51 = 0; (g_51 <= 1); g_51 += 1)
                {
                    int i, j, k;
                    g_72[(p_4 + 2)][(p_4 + 6)][(g_51 + 1)] = 1L;
                    return l_17[g_51];
                }
                if (l_1124)
                    break;
                if ((****g_1015))
                    break;
            }
        }
        else
        {
            int *l_1129 = (void*)0;
            const int *******l_1137 = (void*)0;
            const int *******l_1138 = (void*)0;
            short ***l_1153 = &g_542;
            short l_1171[6][7] = {{1L, (-8L), (-3L), (-8L), 1L, 0xB28AL, 1L}, {1L, (-8L), (-3L), (-8L), 1L, 0xB28AL, 1L}, {1L, (-8L), (-3L), (-8L), 1L, 0xB28AL, 1L}, {1L, (-8L), (-3L), (-8L), 1L, 0xB28AL, 1L}, {1L, (-8L), (-3L), (-8L), 1L, 0xB28AL, 1L}, {1L, (-8L), (-3L), (-8L), 1L, 0xB28AL, 1L}};
            unsigned **l_1190 = &g_1188;
            int i, j;
            if (((!(safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0xB22CL, (((l_1129 == l_1129) < p_3) && (**g_542)))), (safe_add_func_uint32_t_u_u(p_3, ((g_1132 = g_1132) != &g_1133)))))) > (safe_unary_minus_func_int8_t_s(p_3))))
            {
                unsigned l_1155 = 0xD23C2950L;
                short *l_1165 = (void*)0;
                int l_1173 = (-1L);
                int *l_1183[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1183[i] = &g_65;
                for (g_6 = 0; (g_6 <= 8); g_6 += 1)
                {
                    unsigned short l_1148[3];
                    const short l_1170 = 0x8BF5L;
                    int l_1182 = 0x78445BEAL;
                    unsigned ** const l_1191 = &g_1188;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1148[i] = 0UL;
                    if ((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_1144, 1UL)), ((0x3EE7E1ADL != (*l_1122)) == (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(g_261[1][1])), l_1148[1]))))))
                    {
                        return p_4;
                    }
                    else
                    {
                        short ****l_1154 = &l_1153;
                        (*l_1122) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((***g_1045), (((&g_542 == ((*l_1154) = l_1153)) > g_905) < (l_1155 < ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((~(~(safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_1164 = ((*g_542) = (*g_542))) == l_1165), (safe_mod_func_uint16_t_u_u((*l_1122), (safe_rshift_func_uint16_t_u_s(p_3, l_1170)))))), 15)))), (***g_1045))), p_3)) != (*g_147)))))) && (*g_147)), l_1171[3][0]));

                        ;
                    }

                    ;
                    if ((l_1155 | l_1155))
                    {
                        unsigned *l_1172[7][8][3] = {{{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}, {{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}, {{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}, {{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}, {{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}, {{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}, {{&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}, {&g_1144, &g_1144, &g_36}}};
                        int i, j, k;
                        (***g_1015) = &l_1182;

                        ;
                    }
                    else
                    {
                        int * const l_1184 = &g_65;
                        l_13[0][2][0] = l_1184;
                        (*l_1122) = (safe_rshift_func_uint8_t_u_u(249UL, 7));
                        (*l_1122) = (*l_1122);
                        if ((*l_1184))
                            continue;
                    }


                    for (g_1144 = 0; (g_1144 <= 2); g_1144 += 1)
                    {
                        unsigned ***l_1189[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_1189[i] = &g_1187;
                        if (l_17[g_1144])
                            break;
                        l_13[p_4][(p_4 + 2)][(p_4 + 1)] = &l_1182;
                        (*g_1136) = (void*)0;

                        ;
                    }


                }


                ;
            }
            else
            {
                int *l_1192 = &g_14;
                (**g_1016) = l_1192;

                ;
            }



            ;
            (***g_1015) = l_1122;

            ;
            (*g_71) = (safe_add_func_uint16_t_u_u((*l_1122), 0x0B28L));
            l_1196 = (l_1195 = ((****g_1015) = 7L));
        }


        ;
        return p_3;
    }
    return p_4;
}







static int * func_7(int * p_8, unsigned short p_9, short p_10, unsigned char p_11, int * p_12)
{
    int *l_823 = (void*)0;
    int l_844 = (-5L);
    char **l_920 = &g_50[0];
    char ***l_919[4][10][3] = {{{&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}}, {{&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}}, {{&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}}, {{&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}, {&l_920, (void*)0, &l_920}}};
    const int **l_982 = &g_933;
    const int ***l_981[7] = {&l_982, &l_982, &l_982, &l_982, &l_982, &l_982, &l_982};
    const int ****l_980 = &l_981[1];
    const int *****l_979[3];
    int * const l_998 = &g_954;
    int * const *l_997 = &l_998;
    unsigned short l_1024[1];
    int ****l_1073 = &g_1016;
    int *****l_1100 = &l_1073;
    int ******l_1099 = &l_1100;
    short *** const l_1114 = &g_542;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_979[i] = &l_980;
    for (i = 0; i < 1; i++)
        l_1024[i] = 0x76A9L;
    if (((void*)0 == l_823))
    {
        const short l_824 = 0L;
        int *l_825 = &g_72[4][0][2];
        (*l_825) = (l_824 < g_194);
    }
    else
    {
        unsigned l_829 = 0x51071179L;
        int l_830 = 0L;
        int l_848 = (-2L);
        int *l_922[2];
        unsigned short *l_969 = &g_128;
        unsigned short **l_968 = &l_969;
        int ***l_978 = (void*)0;
        int ****l_977[10] = {&l_978, &l_978, &l_978, &l_978, &l_978, &l_978, &l_978, &l_978, &l_978, &l_978};
        int *****l_976[8][6][1] = {{{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}, {{&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}, {&l_977[6]}}};
        int l_1014[9][10][2] = {{{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}, {{0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}, {0x75E68066L, (-10L)}}};
        char ***l_1043[1];
        unsigned l_1050 = 4294967295UL;
        const int * const *l_1055 = &g_933;
        const int * const **l_1054 = &l_1055;
        const int * const ***l_1053[2][6][4] = {{{&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}}, {{&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}, {&l_1054, &l_1054, (void*)0, (void*)0}}};
        int l_1098 = (-1L);
        short l_1102 = 0xE04AL;
        int *l_1103[7];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_922[i] = &g_14;
        for (i = 0; i < 1; i++)
            l_1043[i] = &l_920;
        for (i = 0; i < 7; i++)
            l_1103[i] = &l_1014[3][8][0];
        for (g_167 = 0; (g_167 > 13); ++g_167)
        {
            int **l_828 = &g_71;
            int l_837 = (-1L);
            int l_839 = 8L;
            int l_850 = 8L;
            (*l_828) = p_8;

            ;
            l_830 = l_829;
            for (l_829 = 0; (l_829 == 35); l_829 = safe_add_func_uint8_t_u_u(l_829, 6))
            {
                int l_836 = 4L;
                int l_859 = 8L;
                for (l_830 = 16; (l_830 < 14); l_830 = safe_sub_func_int8_t_s_s(l_830, 8))
                {
                    unsigned short *l_835[3][5][9] = {{{&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}}, {{&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}}, {{&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}, {&g_194, &g_128, &g_194, &g_128, &g_128, &g_194, &g_194, &g_128, (void*)0}}};
                    int *l_838[3];
                    int *l_841[3];
                    int **l_840 = &l_841[1];
                    int *l_843 = &g_167;
                    int **l_842 = &l_843;
                    unsigned *l_871 = &g_380;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_838[i] = &g_90;
                    for (i = 0; i < 3; i++)
                        l_841[i] = &g_167;
                    l_839 = ((l_837 = ((g_194 = p_11) | (l_836 = 0xFAD3L))) < 0UL);
                    if (((*g_147) && (((*l_840) = p_8) != ((*l_842) = (void*)0))))
                    {
                        char l_847 = 3L;
                        if (l_844)
                            break;
                        l_848 = (((safe_rshift_func_uint16_t_u_s(g_16, (l_847 <= 65531UL))) ^ 0x6577L) == p_10);
                        if (l_848)
                            continue;
                        g_71 = &l_830;

                        ;
                    }
                    else
                    {
                        short l_851 = 1L;
                        unsigned char l_858 = 255UL;
                        int l_860 = 0x227B7CB0L;
                        l_860 = (((*g_147) ^ (safe_rshift_func_uint16_t_u_u(p_11, ((safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((l_836 > l_858) <= g_82[0]), 0L)) || 0x7CL), 0xA6L)) < l_859)))) >= 9L);
                    }

                    ;

                    ;
                    (*l_828) = p_12;

                    ;
                    l_844 = (l_829 && (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((-7L), (safe_div_func_uint16_t_u_u(0xC209L, p_11)))), (((((safe_sub_func_uint32_t_u_u(p_10, l_836)) == l_859) && p_11) || l_844) != 7L))), 65527UL)));
                }
            }
        }


        for (g_380 = 11; (g_380 != 20); g_380 = safe_add_func_uint16_t_u_u(g_380, 4))
        {
            int **l_876 = &l_823;
            (*l_876) = p_12;
            for (g_14 = 0; (g_14 != (-9)); g_14 = safe_sub_func_uint16_t_u_u(g_14, 6))
            {
                g_71 = p_8;

                ;
            }
            (*l_876) = p_8;
            for (l_829 = 0; (l_829 <= 3); l_829 += 1)
            {
                char l_879 = (-1L);
                char *l_880 = &l_879;
                char *l_881 = (void*)0;
                char *l_882[4];
                int l_883 = (-1L);
                char l_918 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_882[i] = &g_47;
                if ((0x02L || (l_883 = ((*l_880) = l_879))))
                {
                    unsigned short l_908 = 2UL;
                    for (l_848 = 3; (l_848 >= 0); l_848 -= 1)
                    {
                        int l_884 = 0x0A2C50E8L;
                        int *l_885 = &l_844;
                        int *l_886 = &g_14;
                        int *l_894 = &g_167;
                        int **l_893[6] = {(void*)0, &l_894, (void*)0, &l_894, (void*)0, &l_894};
                        short *l_901 = (void*)0;
                        short *l_902 = &g_87;
                        short *l_903 = (void*)0;
                        short *l_904 = &g_905;
                        int i;
                        (*l_886) = ((*l_885) = l_884);
                        (*l_886) = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_880) = (g_90 != (((**g_542) = (safe_lshift_func_int8_t_s_u(0x31L, 4))) && ((void*)0 != l_893[1])))) < ((p_9 ^ (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*l_904) = ((*l_902) = (safe_sub_func_int32_t_s_s(l_883, 0x24DBC012L)))), 0x1095L)), (l_844 = (safe_add_func_int32_t_s_s((+(~l_908)), l_883)))))) || (*l_885))), 12)), 0xFDL)) >= l_830) < p_10);
                    }
                    for (g_756 = 0; (g_756 <= 1); g_756 += 1)
                    {
                        unsigned short *l_915 = &g_128;
                        int i;
                        (*l_876) = p_12;
                    }
                    for (g_90 = 0; (g_90 <= 3); g_90 += 1)
                    {
                        int *l_921 = &g_72[0][1][0];
                        if (l_918)
                            break;
                        l_922[0] = l_921;
                    }
                    for (g_87 = 0; (g_87 <= 3); g_87 += 1)
                    {
                        (*l_876) = p_8;
                    }
                }
                else
                {
                    if (l_918)
                        break;
                }
            }
        }

        ;

        if ((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*g_147) = (**g_146)), (safe_lshift_func_uint16_t_u_s(l_844, 0)))), p_10)))
        {
            const int *l_931[3];
            int i;
            for (i = 0; i < 3; i++)
                l_931[i] = &l_848;
            for (g_161 = 0; (g_161 == 50); ++g_161)
            {
                const int **l_932 = &l_931[1];
                int *l_934 = &g_90;
                unsigned *l_943[3];
                unsigned short *l_949 = &g_194;
                int *l_952 = &g_167;
                int *l_953 = &g_954;
                unsigned char l_963 = 0x34L;
                unsigned short ***l_970[2][10] = {{&l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968}, {&l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968, &l_968}};
                int l_973 = 0x6F67DF11L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_943[i] = &g_380;
                g_933 = ((*l_932) = l_931[0]);

                ;
                (*l_934) = (*g_933);
                l_973 = ((safe_mod_func_uint32_t_u_u(((((**g_542) = (safe_sub_func_int16_t_s_s((*g_543), (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_963, (safe_rshift_func_uint8_t_u_s((g_756 != ((*l_934) = (*g_933))), 6)))), ((safe_mul_func_uint16_t_u_u(((l_968 = (g_971[5] = l_968)) == &g_972), (**l_932))) <= p_10)))))) > (*g_972)) >= (-1L)), g_647[3][0])) || (*g_543));
            }

            ;

        }
        else
        {
            char l_975 = 0x1DL;
            unsigned short **l_1022 = &l_969;
            unsigned l_1023 = 0xA6E1DCAAL;
            char ***l_1044 = &l_920;
            int l_1052 = 0x73472023L;
            char l_1069 = 0x35L;
            int l_1086[8] = {(-1L), (-8L), (-1L), (-8L), (-1L), (-8L), (-1L), (-8L)};
            int *******l_1101 = &l_1099;
            unsigned short l_1108 = 0x909DL;
            int i;
            if (((**g_146) != 0x23L))
            {
                short l_974 = (-1L);
                const int ******l_983 = &l_979[2];
                int l_985[8] = {0x717AA56FL, 0x971D7D64L, 0x717AA56FL, 0x971D7D64L, 0x717AA56FL, 0x971D7D64L, 0x717AA56FL, 0x971D7D64L};
                short l_1025 = 1L;
                int i;
                l_975 = l_974;
                if ((******l_983))
                {
                    unsigned short l_986 = 0xC95EL;
                    int * const * const l_999[2] = {&l_998, &l_998};
                    int l_1000 = (-1L);
                    int i;
                    l_844 = 0L;
                    for (g_14 = 0; (g_14 <= 2); g_14 += 1)
                    {
                        char l_984[10] = {0x87L, 0xCDL, 0x87L, 0xCDL, 0x87L, 0xCDL, 0x87L, 0xCDL, 0x87L, 0xCDL};
                        int i;
                        l_984[5] = l_975;
                        l_985[2] = l_975;
                        l_985[2] = (-2L);
                        if ((**l_982))
                            break;
                    }
                    if ((l_986 == (******l_983)))
                    {
                        return &g_72[3][5][3];


                    }
                    else
                    {
                        int *l_1001 = (void*)0;
                        l_1000 = ((p_11 | p_9) > ((safe_add_func_uint32_t_u_u(0UL, (l_985[6] = ((safe_add_func_int32_t_s_s((p_9 > g_91), (((safe_div_func_uint16_t_u_u((******l_983), (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((l_997 != l_999[1]), p_9)), 2)))) < p_11) ^ 1L))) <= l_975)))) ^ p_10));
                        (*****l_983) = p_12;

                        ;
                        return p_8;


                    }
                }
                else
                {
                    unsigned l_1010 = 0xA85ECC07L;
                    int ** const l_1011 = &l_922[1];
                    (***l_980) = (*l_1011);

                    ;
                    if (((((**l_983) != (g_1015 = g_1015)) > ((**g_146) = p_9)) && l_1024[0]))
                    {
                        short l_1026 = (-4L);
                        l_985[6] = l_1025;
                        l_1026 = ((**l_1011) = 0xDD879867L);
                    }
                    else
                    {
                        (*l_1011) = (*l_1011);
                    }
                }

                ;
            }
            else
            {
                for (p_9 = 17; (p_9 >= 40); ++p_9)
                {
                    const unsigned short ***l_1048 = (void*)0;
                    int l_1051 = (-1L);
                    for (g_194 = 0; (g_194 == 47); ++g_194)
                    {
                        const unsigned short ***l_1047 = (void*)0;
                        unsigned *l_1049 = &g_380;
                        l_1052 = (safe_mul_func_int8_t_s_s(0x4CL, (safe_div_func_uint16_t_u_u(l_1050, l_1051))));
                        (***g_1015) = &l_1052;

                        ;
                        (***l_980) = l_1049;

                        ;
                        (***l_980) = p_8;

                        ;
                    }
                }


                ;
            }


            ;
            if ((l_1052 = ((void*)0 != l_1053[1][1][3])))
            {
                unsigned short l_1068 = 0x0A41L;
                const unsigned l_1087 = 4294967289UL;
                unsigned char *l_1088 = (void*)0;
                unsigned char *l_1089 = &g_158[5];
                int *l_1090[6] = {&g_14, &l_1014[7][7][0], &g_14, &l_1014[7][7][0], &g_14, &l_1014[7][7][0]};
                unsigned *l_1095 = &l_1023;
                unsigned **l_1094 = &l_1095;
                int i;
                for (p_11 = 0; (p_11 <= 1); p_11 += 1)
                {
                    int *l_1056 = (void*)0;
                    for (g_194 = 0; (g_194 <= 0); g_194 += 1)
                    {
                        (*l_982) = p_12;

                        ;
                        return p_12;



                    }
                    return l_1056;



                }
                if ((((safe_rshift_func_uint8_t_u_u((((l_1052 < ((**g_146) & 0x64L)) || 0L) < p_10), 5)) > 0x0AL) | 0xA8L))
                {
                    for (l_844 = 0; (l_844 == (-20)); --l_844)
                    {
                        l_1068 = 0x54B6711EL;
                        (*l_982) = (void*)0;

                        ;
                    }
                    for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
                    {
                        int i;
                        l_1069 = ((*g_147) >= (g_158[(g_14 + 6)] = (*g_147)));
                        return p_12;



                    }
                }
                else
                {
                    int *l_1070 = &g_82[0];
                    (***g_1015) = &l_1052;

                    ;
                }
                (*g_1017) = &l_1086[6];

                ;
                l_1086[6] = ((safe_add_func_int8_t_s_s((**g_1046), (((void*)0 != g_1093) < (((void*)0 != l_1094) <= l_1069)))) <= (safe_mod_func_int16_t_s_s(((*g_543) = p_9), func_56((*g_147), p_11))));

                ;
            }
            else
            {
                l_1052 = 0x1ED210B9L;
            }


            if ((((l_1098 = p_11) & (p_10 = (p_11 > ((*g_543) = l_1086[0])))) | (l_1102 = (((*l_1101) = l_1099) != (void*)0))))
            {
                return p_8;



            }
            else
            {
                int l_1111 = 0xF89E0F3DL;
                int l_1113 = 1L;
                for (l_1052 = 0; (l_1052 > (-8)); --l_1052)
                {
                    unsigned char l_1112[3][7][8] = {{{5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}}, {{5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}}, {{5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}, {5UL, 5UL, 0xB5L, 5UL, 5UL, 0xB5L, 5UL, 5UL}}};
                    int i, j, k;
                    if (p_9)
                        break;
                    l_1113 = (safe_add_func_int32_t_s_s(p_11, ((p_11 != l_1112[2][5][2]) < 0xD4FEL)));
                }
                (*g_1017) = p_12;

                ;
            }

            ;
        }

        ;

    }


    ;


    l_844 = ((void*)0 != l_1114);
    for (g_36 = 0; (g_36 <= 2); g_36 += 1)
    {
        int *l_1115 = &g_72[3][5][3];
        unsigned short l_1119 = 0x8172L;
        (*l_1115) = p_10;
        for (g_87 = 1; (g_87 >= 0); g_87 -= 1)
        {
            unsigned *l_1117[8][10][3] = {{{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}, {{&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}, {&g_261[1][1], &g_380, &g_36}}};
            int l_1118[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1118[i] = 0x788C5890L;
            if ((4294967291UL < 5UL))
            {
                volatile int **l_1116 = &g_665;
                int i;
                (*l_1116) = &g_88[g_87];

                ;
            }
            else
            {
                int i, j;
                if (g_317[g_87][(g_36 + 5)])
                    break;
            }
            l_1119 = ((**g_542) || ((p_10 < 1UL) != 0xD4A77963L));
            for (g_65 = 2; (g_65 >= 0); g_65 -= 1)
            {
                unsigned short l_1120 = 0x4064L;
                l_1120 = 0x26F08917L;
                for (g_167 = 0; g_167 < 6; g_167 += 1)
                {
                    l_1118[g_167] = (-1L);
                }
            }
        }
    }

    ;
    return p_8;


}







static char func_20(short p_21)
{
    int *l_22 = (void*)0;
    int l_693 = 0x03BE59E4L;
    unsigned char *l_694 = &g_6;
    const unsigned **l_780 = (void*)0;
    int * const *l_788 = &g_71;
    int * const ** const l_787 = &l_788;
    int * const ** const *l_786 = &l_787;
    int l_793 = 0x7C9BBE4FL;
    const short l_799 = 0L;
    unsigned short *l_813[7] = {(void*)0, (void*)0, &g_194, (void*)0, (void*)0, &g_194, (void*)0};
    int **l_820 = &g_71;
    int ***l_819 = &l_820;
    int ****l_818[7] = {&l_819, &l_819, &l_819, &l_819, &l_819, &l_819, &l_819};
    int *****l_821 = &l_818[1];
    int *l_822 = &g_82[4];
    int i;
    l_22 = (void*)0;
    if (g_6)
    {
        int l_23 = (-5L);
        return l_23;
    }
    else
    {
        short l_34 = 0xA74DL;
        unsigned *l_35 = &g_36;
        char *l_46 = &g_47;
        unsigned *l_692[7][6][6] = {{{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}, {{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}, {{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}, {{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}, {{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}, {{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}, {{&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}, {&g_261[2][4], &g_380, &g_380, (void*)0, &g_380, &g_380}}};
        unsigned **l_691 = &l_692[0][0][1];
        int *l_772 = &g_92;
        int *l_773 = &g_82[1];
        unsigned char *l_794 = &g_161;
        int i, j, k;
        (*l_773) = ((*l_772) = func_24((safe_rshift_func_int8_t_s_u((-5L), 0)), ((safe_mul_func_uint8_t_u_u((((*l_35) = (l_34 || g_6)) >= ((((*l_691) = func_37(p_21, l_22, (safe_add_func_int8_t_s_s(0x4CL, ((safe_sub_func_int8_t_s_s(((*l_46) = 0x43L), (p_21 > (func_48(g_50[0]) <= g_6)))) & p_21))), p_21)) == &g_118) != l_34)), l_693)) != 0x7F1B01BDL), l_34, l_694, p_21));


        (*l_773) = (((safe_sub_func_int8_t_s_s(((*l_46) = (safe_mod_func_int32_t_s_s(p_21, (safe_mul_func_uint8_t_u_u(((l_780 == (void*)0) || ((*l_794) = (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((*l_772) = ((*l_35) = (g_785[0] != l_786))) || ((((0xDC3925C4L < (*l_772)) <= (p_21 <= (safe_add_func_uint32_t_u_u(g_261[1][1], p_21)))) <= (-6L)) != g_47)) <= g_87), l_793)), 255UL)))), 0x67L))))), 0xF6L)) != p_21) == (*g_543));
        for (l_793 = (-24); (l_793 == (-30)); l_793--)
        {
            const int l_801 = 0x17371683L;
            int l_815 = 0xFC397D64L;
            for (p_21 = 0; (p_21 == 29); p_21++)
            {
                unsigned char l_800[9][3][9] = {{{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}, {{0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}, {0x62L, 0UL, 0x12L, 1UL, 251UL, 253UL, 0x75L, 4UL, 8UL}}};
                int *l_804 = &g_92;
                int i, j, k;
                if (l_799)
                {
                    int *l_802 = &g_72[3][5][3];
                    int **l_803[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_803[i] = &l_773;
                    g_71 = l_802;

                    ;
                }
                else
                {
                    int **l_805 = &l_804;
                    (*l_805) = l_804;
                    (*l_805) = l_804;
                }
                (*l_804) = 0x9630B3F9L;
                for (g_51 = 0; (g_51 >= 17); g_51 = safe_add_func_uint32_t_u_u(g_51, 9))
                {
                    unsigned l_814[5][3] = {{6UL, 6UL, 0x82B0F567L}, {6UL, 6UL, 0x82B0F567L}, {6UL, 6UL, 0x82B0F567L}, {6UL, 6UL, 0x82B0F567L}, {6UL, 6UL, 0x82B0F567L}};
                    int i, j;
                    l_815 = ((*l_772) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((l_814[4][1] = ((g_812 < ((l_813[5] == (*g_483)) & ((*l_804) >= p_21))) && (*l_773))) && l_814[2][1]), 4)), (*l_804))));
                    return p_21;
                }
                for (g_380 = 0; (g_380 != 48); ++g_380)
                {
                    return p_21;
                }
            }
        }
    }


    (*l_822) = ((-1L) && (((*l_821) = l_818[1]) == (void*)0));
    return p_21;
}







static int func_24(unsigned short p_25, unsigned short p_26, const char p_27, unsigned char * p_28, char p_29)
{
    short l_700 = (-1L);
    int l_704[7][6] = {{(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}, {(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}, {(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}, {(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}, {(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}, {(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}, {(-6L), 0L, 0x8B2B7471L, 0x52208D6EL, 0x52208D6EL, 0x8B2B7471L}};
    char l_705 = (-10L);
    int **l_771[3][5] = {{&g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71}};
    int i, j;
    for (g_47 = (-25); (g_47 > (-17)); g_47 = safe_add_func_int32_t_s_s(g_47, 2))
    {
        int *l_697[4][2] = {{&g_90, &g_72[3][5][3]}, {&g_90, &g_72[3][5][3]}, {&g_90, &g_72[3][5][3]}, {&g_90, &g_72[3][5][3]}};
        int *l_701[2];
        int ** const l_707[1][10][5] = {{{&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}, {&l_697[2][0], &l_701[1], &l_697[2][0], &l_701[1], &l_697[2][0]}}};
        int ** const *l_706 = &l_707[0][9][3];
        int ***l_708 = (void*)0;
        int ****l_709 = (void*)0;
        int ****l_710 = &l_708;
        short ***l_720 = (void*)0;
        unsigned char l_726 = 0xF9L;
        unsigned l_760 = 0xFA86CB2AL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_701[i] = &g_82[0];
        g_89 = g_161;
        g_71 = &g_65;

        ;
        for (g_128 = 16; (g_128 != 18); g_128++)
        {
            const unsigned l_717 = 0x3EE79871L;
            short ****l_721 = &l_720;
            unsigned *l_722 = (void*)0;
            unsigned *l_723 = &g_36;
            char *l_724[2][4][6] = {{{&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}, {&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}, {&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}, {&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}}, {{&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}, {&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}, {&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}, {&g_51, &g_47, &l_705, &g_51, &g_47, &g_51}}};
            int l_725 = (-3L);
            int *l_733 = &g_90;
            int **l_742[4][8][5] = {{{(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}}, {{(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}}, {{(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}}, {{(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}, {(void*)0, &l_701[0], &g_71, &l_733, &l_697[2][0]}}};
            int ***l_741[9][5][4] = {{{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}, {{(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}, {(void*)0, &l_742[1][0][1], (void*)0, &l_742[2][7][3]}}};
            int i, j, k;
            if (((l_726 = (safe_rshift_func_int16_t_s_u(func_56(((*p_28) & ((safe_add_func_uint16_t_u_u(l_717, 0xF3E8L)) != p_29)), (l_725 = ((*p_28) == (safe_sub_func_uint8_t_u_u((func_59(((*l_723) = (((*l_721) = l_720) == &g_542)), l_717, g_647[0][2]) && l_717), l_700))))), 4))) | 0xE4L))
            {
                return l_717;
            }
            else
            {
                int *l_732 = &g_72[3][5][3];
                int l_743 = (-3L);
                for (g_167 = 8; (g_167 != 10); g_167++)
                {
                    int *l_731 = &g_72[4][3][1];
                    for (p_26 = 0; (p_26 <= 22); p_26++)
                    {
                        l_731 = &l_725;

                        ;
                        return l_717;
                    }
                    for (p_29 = 0; (p_29 <= 1); p_29 += 1)
                    {
                        int i, j;
                        l_731 = l_697[(p_29 + 2)][p_29];
                        g_71 = l_697[p_29][p_29];

                        ;
                        l_732 = l_697[(p_29 + 1)][p_29];
                        l_733 = l_732;
                    }

                    ;
                    if ((*l_732))
                        break;
                    g_71 = l_732;

                    ;
                }

                ;
                ;
                ;
                for (l_700 = 1; (l_700 >= 0); l_700 -= 1)
                {
                    unsigned char l_746 = 255UL;
                    int *l_759 = &g_82[1];
                    for (g_167 = 3; (g_167 >= 0); g_167 -= 1)
                    {
                        unsigned char ***l_738 = (void*)0;
                        int i, j, k;
                        l_697[g_167][l_700] = l_697[(l_700 + 1)][l_700];
                        (*l_733) = ((safe_div_func_uint32_t_u_u(g_261[(l_700 + 2)][(g_167 + 1)], (safe_rshift_func_uint16_t_u_s(((void*)0 != l_738), 9)))) <= ((safe_sub_func_uint16_t_u_u((l_741[4][2][1] == (void*)0), g_72[(g_167 + 2)][g_167][l_700])) <= 5L));
                    }
                    l_743 = ((*g_71) = 1L);
                    for (g_51 = 0; (g_51 <= 3); g_51 += 1)
                    {
                        unsigned short *l_755 = &g_194;
                        int i, j;
                        l_704[0][0] = (((g_261[g_51][(l_700 + 1)] == (((p_29 = g_158[(g_51 + 2)]) != ((safe_mod_func_int16_t_s_s((l_746 | func_59(g_161, p_27, (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_755) = ((p_25 != (safe_rshift_func_uint16_t_u_u(l_704[0][2], 3))) | (g_317[0][4] == p_27))) | (*l_732)), 9)), 0xCEL)), (*p_28))))), (**g_542))) ^ g_756)) == p_26)) | (-8L)) ^ 0x0D67L);
                        (*l_759) = (g_102[0][2] >= (g_88[0] > (*g_71)));
                        l_697[(l_700 + 1)][l_700] = l_697[g_51][l_700];
                    }
                }
                for (g_51 = 0; (g_51 <= 3); g_51 += 1)
                {
                    int *l_766[9][6][4] = {{{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}, {{&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}, {&g_72[0][8][3], &g_90, &g_65, &g_92}}};
                    int i, j, k;
                    l_732 = l_766[6][2][2];
                }

                ;
                g_71 = &g_92;

                ;
            }

            ;
            ;
        }

        ;
    }


    g_71 = &l_704[4][0];

    ;
    return p_26;


}







static unsigned * func_37(unsigned char p_38, int * p_39, int p_40, short p_41)
{
    unsigned short l_200[6];
    int **l_210 = (void*)0;
    int *** const l_209 = &l_210;
    const int *l_270 = &g_90;
    short *l_412[8] = {&g_317[0][0], (void*)0, &g_317[0][0], (void*)0, &g_317[0][0], (void*)0, &g_317[0][0], (void*)0};
    short **l_411[7][9] = {{(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}, {(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}, {(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}, {(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}, {(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}, {(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}, {(void*)0, &l_412[7], &l_412[4], &l_412[3], &l_412[4], &l_412[7], (void*)0, &l_412[4], (void*)0}};
    unsigned char l_418 = 0x0FL;
    unsigned short *l_486 = &g_128;
    unsigned short * const *l_485 = &l_486;
    short l_557 = 0x716DL;
    char l_581 = 0xAEL;
    unsigned char l_634 = 0xEBL;
    int l_641[3][6] = {{2L, 0x47802D02L, 2L, 0x47802D02L, 2L, 0x47802D02L}, {2L, 0x47802D02L, 2L, 0x47802D02L, 2L, 0x47802D02L}, {2L, 0x47802D02L, 2L, 0x47802D02L, 2L, 0x47802D02L}};
    unsigned char ** const l_649 = &g_147;
    volatile int *l_660 = &g_88[1];
    unsigned l_666 = 0xAF8020E6L;
    int *l_667 = (void*)0;
    int i, j;
    for (i = 0; i < 6; i++)
        l_200[i] = 1UL;
    for (g_161 = (-18); (g_161 < 7); g_161++)
    {
        int *l_201 = &g_82[0];
        for (p_40 = (-12); (p_40 > 25); p_40 = safe_add_func_int8_t_s_s(p_40, 3))
        {
            short *l_254 = &g_87;
            const int l_259[9] = {0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L, 0xA4B74A62L};
            unsigned *l_260 = &g_261[1][1];
            int l_268[7] = {0xCB36B856L, 0xCB36B856L, (-3L), 0xCB36B856L, 0xCB36B856L, (-3L), 0xCB36B856L};
            int *l_269 = &g_82[1];
            int i;
            if (l_200[2])
                break;
        }
    }
    l_270 = l_270;
    for (p_41 = 0; (p_41 <= (-3)); p_41 = safe_sub_func_uint16_t_u_u(p_41, 9))
    {
        const unsigned char *l_281[2][5][4] = {{{&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}}, {{&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}, {&g_161, &g_6, &g_102[0][0], &g_102[0][0]}}};
        const unsigned char **l_280[5];
        int l_283[7];
        short l_336 = (-1L);
        short l_355[3][4][1];
        unsigned char l_365 = 0x19L;
        unsigned l_367 = 0x444951B0L;
        int l_379[5] = {0xE65E2219L, (-2L), 0xE65E2219L, (-2L), 0xE65E2219L};
        char l_391 = 0x5EL;
        unsigned *l_415[1];
        unsigned l_442 = 0x3C404A4CL;
        unsigned short *l_477 = &g_194;
        unsigned short **l_476 = &l_477;
        unsigned short ***l_475 = &l_476;
        short **l_506 = &l_412[4];
        unsigned l_524 = 3UL;
        unsigned l_539 = 0UL;
        unsigned char **l_552[2][7];
        int *l_611 = &g_82[0];
        char *l_620[7][8] = {{&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}, {&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}, {&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}, {&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}, {&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}, {&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}, {&g_47, (void*)0, &g_51, &l_391, &l_581, &g_51, &l_581, &l_391}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_280[i] = &l_281[0][0][0];
        for (i = 0; i < 7; i++)
            l_283[i] = 1L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_355[i][j][k] = (-10L);
            }
        }
        for (i = 0; i < 1; i++)
            l_415[i] = &g_261[1][1];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_552[i][j] = (void*)0;
        }
        for (g_87 = 0; (g_87 != (-23)); g_87 = safe_sub_func_int16_t_s_s(g_87, 4))
        {
            unsigned l_316 = 0UL;
            int l_329[5][3][3] = {{{1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}}, {{1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}}, {{1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}}, {{1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}}, {{1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}, {1L, 0x33A6990FL, 1L}}};
            char *l_388 = &g_47;
            short **l_414[9][4][5] = {{{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}, {{&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}, {&l_412[4], (void*)0, &l_412[7], (void*)0, &l_412[2]}}};
            short l_434 = 0xC694L;
            int *l_435 = &g_72[3][5][3];
            unsigned char ***l_513 = &g_146;
            unsigned short l_516 = 0x0010L;
            int i, j, k;
        }
        for (l_365 = 0; (l_365 != 15); ++l_365)
        {
            char * const *l_565 = &g_50[0];
            char * const **l_564 = &l_565;
            int l_570 = 0x2E87CEA2L;
            int **l_610[10] = {(void*)0, &g_71, &g_71, &g_71, &g_71, (void*)0, &g_71, &g_71, &g_71, &g_71};
            int i;
            if ((safe_mod_func_int8_t_s_s(((*g_71) ^ (p_38 >= (0x0830DE5DL | (safe_sub_func_int16_t_s_s(((void*)0 != l_564), (g_91 & (*g_71))))))), p_41)))
            {
                (*g_71) = p_38;
                for (g_92 = 0; (g_92 == (-14)); g_92 = safe_sub_func_uint32_t_u_u(g_92, 3))
                {
                    int l_571 = (-1L);
                    short l_572 = 0x49CDL;
                    if ((((*g_71) && 0x79FDB2B9L) | g_89))
                    {
                        int *l_573 = &g_72[3][5][3];
                        (*l_573) = (p_40 = (safe_rshift_func_uint16_t_u_s(((**l_485) = l_570), (l_571 > l_572))));
                    }
                    else
                    {
                        volatile int **l_574 = (void*)0;
                        volatile int *l_576 = &g_91;
                        volatile int **l_575 = &l_576;
                        int **l_577[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_577[i] = (void*)0;
                        (*l_575) = &g_89;

                        ;
                        g_71 = (p_39 = &p_40);

                        ;
                        ;
                    }
                }
                (*l_209) = &p_39;

                ;
            }
            else
            {
                int l_580 = 9L;
                (*g_71) = l_391;
                l_379[1] = (((**l_476) = ((*g_483) == (**l_475))) < func_56((safe_div_func_uint8_t_u_u((*g_147), func_56((*l_270), l_580))), l_581));
                (*g_71) = (*l_270);
            }
            l_570 = (safe_rshift_func_uint16_t_u_s(l_570, 14));
            for (g_92 = 0; (g_92 <= 3); g_92 += 1)
            {
                for (g_194 = 0; (g_194 <= 3); g_194 += 1)
                {
                    int l_593 = 1L;
                    unsigned *l_609 = &g_261[0][0];
                    if (p_40)
                    {
                        int **l_584 = (void*)0;
                        int **l_585 = &g_71;
                        int i, j, k;
                        g_72[(g_92 + 2)][(g_194 + 5)][g_92] = (*g_71);
                        (*l_585) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned l_592 = 4294967295UL;
                        int *l_594 = &g_72[0][4][2];
                        if ((*g_71))
                            break;
                        (*l_594) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(1UL, (l_283[6] = (**g_542)))) > p_41), (p_41 <= (((l_570 = (l_570 != p_41)) == (l_593 = l_592)) >= (l_367 != (**g_542)))))), (**g_146)));
                        if (l_379[1])
                            continue;
                    }

                    ;
                    if (((l_506 != l_506) < p_41))
                    {
                        volatile int *l_596 = &g_91;
                        volatile int **l_595 = &l_596;
                        int **l_597 = &g_71;
                        (*l_595) = &g_88[0];

                        ;
                        (*l_597) = &p_40;

                        ;
                        p_39 = &l_570;

                        ;
                    }
                    else
                    {
                        char *l_606[1][1];
                        int l_607 = (-1L);
                        int *l_608 = &g_65;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_606[i][j] = &l_391;
                        }
                        (*l_608) = ((!(safe_mul_func_int8_t_s_s(((&p_39 != (void*)0) || 0xC1C0L), (l_607 = ((**l_565) = ((safe_sub_func_int16_t_s_s(l_283[6], p_38)) == (safe_mul_func_int16_t_s_s(p_38, (safe_lshift_func_int16_t_s_u((-5L), (4294967295UL && g_380))))))))))) >= g_6);
                        return l_609;



                    }

                    ;
                    ;
                }
            }


            l_611 = &p_40;

            ;
        }

        ;
        l_379[0] = ((safe_mul_func_uint16_t_u_u(g_47, (safe_add_func_int8_t_s_s(((*l_611) = (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_40, (*l_611))), (*l_611)))), (*l_270))))) < 6UL);
        (*l_611) = ((g_621 < (p_41 & p_38)) || (((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((*l_270), (**g_542))), 0x23EAL)) && 0xD0L) & 0xDB909375L));
    }

    ;

    ;
    if ((*g_71))
    {
        unsigned short **l_633 = (void*)0;
        unsigned short *** const l_632 = &l_633;
        unsigned char *l_639 = &g_158[5];
        char *l_640[8];
        int l_642 = 0xB96E0091L;
        int l_643[8] = {5L, 5L, 6L, 5L, 5L, 6L, 5L, 5L};
        const unsigned *l_646 = &g_647[1][3];
        unsigned char **l_651 = (void*)0;
        int i;
        for (i = 0; i < 8; i++)
            l_640[i] = &g_47;
        if ((safe_sub_func_int8_t_s_s((l_642 = (safe_add_func_uint32_t_u_u((l_632 == &l_485), ((func_56(((*l_639) = (l_634 < ((p_41 && func_56((+((*l_639) = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((*l_270), p_41)), 7)))), (l_641[1][1] = ((void*)0 == (*g_542))))) > 1L))), p_38) >= l_642) != g_261[2][4])))), l_643[6])))
        {
            const unsigned *l_645[9] = {&g_118, &g_118, &g_118, &g_118, &g_118, &g_118, &g_118, &g_118, &g_118};
            const unsigned **l_644[5][3][10] = {{{&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}}, {{&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}}, {{&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}}, {{&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}}, {{&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}, {&l_645[0], &l_645[3], &l_645[0], &l_645[6], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0], &l_645[0]}}};
            unsigned *l_648 = &g_261[1][1];
            int i, j, k;
            (*g_71) = ((*g_71) && ((l_646 = &g_261[3][0]) != &g_261[1][1]));

            ;
            return l_648;



        }
        else
        {
            unsigned char ***l_650[6];
            int i;
            for (i = 0; i < 6; i++)
                l_650[i] = &g_146;
            (*g_71) = (l_649 != (l_651 = &l_639));

            ;
            return &g_380;



        }
    }
    else
    {
        int l_664 = 0x2B9F0B2FL;
        short ***l_674 = &l_411[0][0];
        short **l_675[10][3] = {{&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}, {&g_543, &g_543, &l_412[2]}};
        int i, j;
        (*g_71) = (*g_71);
        for (g_167 = (-8); (g_167 == 6); g_167 = safe_add_func_int8_t_s_s(g_167, 1))
        {
            int l_656 = 0x4DBE5696L;
            volatile int *l_659 = &g_89;
        }
    }
    return &g_261[0][1];



}







static unsigned func_48(char * p_49)
{
    int l_63 = 1L;
    int *l_64 = &g_65;
    int **l_73[10] = {&g_71, &g_71, (void*)0, &g_71, &g_71, (void*)0, &g_71, &g_71, (void*)0, &g_71};
    int l_74 = 0x5F5DB90CL;
    unsigned char l_125 = 0xCDL;
    unsigned short *l_126 = (void*)0;
    unsigned short *l_127[7] = {(void*)0, (void*)0, &g_128, (void*)0, (void*)0, &g_128, (void*)0};
    unsigned char *l_152 = &l_125;
    short l_153 = (-1L);
    char l_193 = 2L;
    int *l_195[4][3] = {{&g_90, &g_90, &l_63}, {&g_90, &g_90, &l_63}, {&g_90, &g_90, &l_63}, {&g_90, &g_90, &l_63}};
    int i, j;
    (*l_64) = (~((safe_div_func_int8_t_s_s(((*p_49) = ((safe_div_func_int32_t_s_s(0x1F059960L, func_56(((*l_152) = (func_59(l_63, (((*l_64) = (0xD0L < (~((*p_49) = (g_6 == l_63))))) ^ (((g_6 <= ((((g_128 = (safe_mul_func_uint8_t_u_u((9UL >= (g_6 < ((func_68((g_71 = g_71), l_74) != l_125) <= g_102[1][2]))), 0x61L))) == 8L) >= 4294967295UL) != g_118)) & g_88[0]) && (*g_71))), g_102[0][2]) || (*l_64))), l_153))) < l_193)), (*g_147))) != g_194));

    ;
    g_71 = l_195[0][2];

    ;
    for (g_92 = 0; g_92 < 2; g_92 += 1)
    {
        g_88[g_92] = (-1L);
    }
    g_71 = &g_92;

    ;
    return g_87;
}







static int func_56(unsigned char p_57, char p_58)
{
    int *l_154[5] = {&g_90, &g_72[3][5][3], &g_90, &g_72[3][5][3], &g_90};
    unsigned l_155 = 4294967293UL;
    int l_156 = 0x37CF8FE1L;
    unsigned char *l_157 = &g_158[0];
    unsigned char *l_159 = (void*)0;
    unsigned char *l_160 = &g_161;
    unsigned *l_165 = (void*)0;
    unsigned **l_164 = &l_165;
    int *l_166 = &g_167;
    int i;
    (*g_71) = func_59((((*l_160) = ((p_57 = (func_68(l_154[2], l_155) & p_57)) == ((*l_157) = (p_58 <= l_156)))) != 0xBBL), ((*l_166) = (safe_add_func_int16_t_s_s(((void*)0 == l_164), g_128))), g_91);
    for (g_161 = 0; (g_161 >= 14); ++g_161)
    {
        int ** const l_170 = (void*)0;
        int **l_172[10][5] = {{&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}, {&g_71, (void*)0, &l_154[2], (void*)0, &g_71}};
        int ***l_171 = &l_172[2][2];
        int l_187[5][9][5] = {{{0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}}, {{0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}}, {{0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}}, {{0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}}, {{0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}, {0x416FBCE5L, 8L, 0xEA7228B4L, 0L, (-1L)}}};
        short *l_188 = &g_87;
        char l_189[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_189[i] = 1L;
        (*l_171) = l_170;
        (*g_71) = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((**g_146), (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(func_59((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_58 >= ((*l_188) = ((*g_147) & ((g_118 <= g_102[1][2]) || (((*l_157) = func_59(l_187[2][1][0], p_57, p_58)) == 0x9AL))))), 65535UL)), 0xB2D7L)), p_57, p_58), p_58)) < g_102[0][2]), l_189[0])), (*g_147))) || g_89) >= g_90))), p_57));
        for (g_65 = 0; (g_65 != 9); ++g_65)
        {
            int *l_192 = &g_92;
            l_192 = (g_71 = l_192);

            ;
            l_192 = (void*)0;

            ;
        }
    }
    return p_58;
}







static unsigned char func_59(unsigned p_60, int p_61, unsigned p_62)
{
    int *l_133 = &g_92;
    unsigned char ***l_144 = (void*)0;
    unsigned char ***l_145 = (void*)0;
    unsigned char **l_148 = &g_147;
    unsigned char ***l_149 = &l_148;
    (*g_71) = (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((p_60 <= (*g_71)) == p_60), p_60)), p_60));
    return (*g_147);
}







static unsigned short func_68(int * p_69, int p_70)
{
    int *l_75 = &g_72[2][6][0];
    int **l_76 = &l_75;
    unsigned char *l_81 = &g_6;
    unsigned char **l_80 = &l_81;
    (*l_76) = l_75;
    for (p_70 = 0; (p_70 <= 3); p_70 += 1)
    {
        unsigned char *l_79 = &g_6;
        unsigned char **l_78 = &l_79;
        unsigned char ***l_77[3][1][4];
        int l_103 = 0x97B59C6DL;
        int l_104 = 4L;
        short * const l_115 = &g_87;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_77[i][j][k] = &l_78;
            }
        }
        l_80 = (void*)0;

        ;
        for (g_82[0] = 3; (g_82[0] >= 0); g_82[0] -= 1)
        {
            short *l_86 = &g_87;
            (*g_71) = ((safe_add_func_uint16_t_u_u((p_70 | (safe_unary_minus_func_int32_t_s(5L))), ((*l_86) = ((void*)0 == l_81)))) & p_70);
            (*l_76) = (*l_76);
            (**l_76) = ((void*)0 == p_69);
            for (g_87 = 0; (g_87 <= 3); g_87 += 1)
            {
                const unsigned *l_117 = &g_118;
                const unsigned ** const l_116[3] = {&l_117, &l_117, &l_117};
                int i;
                for (g_90 = 3; (g_90 >= 0); g_90 -= 1)
                {
                    for (g_92 = 1; (g_92 >= 0); g_92 -= 1)
                    {
                        const unsigned char **l_99 = (void*)0;
                        const unsigned char *l_101[1][3];
                        const unsigned char **l_100 = &l_101[0][0];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_101[i][j] = &g_102[0][2];
                        }
                        g_72[(g_82[0] + 2)][(g_82[0] + 6)][p_70] = (safe_mul_func_uint8_t_u_u(g_72[(g_92 + 2)][(g_92 + 5)][g_82[0]], 0x26L));
                    }
                    if ((*p_69))
                        break;
                }
                for (l_103 = 3; (l_103 >= 0); l_103 -= 1)
                {
                    int *l_105 = &l_104;
                    int i, j, k;
                    for (l_104 = 1; (l_104 >= 0); l_104 -= 1)
                    {
                        int i, j, k;
                        return g_72[g_82[0]][(l_103 + 3)][g_87];
                    }
                    if (((*l_105) = (g_72[l_103][g_82[0]][l_103] = g_72[(p_70 + 2)][(l_103 + 3)][p_70])))
                    {
                        return g_82[0];
                    }
                    else
                    {
                        (*l_75) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_104, 1)), g_6));
                        (*l_105) = ((*g_71) = (safe_div_func_uint32_t_u_u(p_70, p_70)));
                        (*l_76) = p_69;
                    }
                    for (g_92 = 3; (g_92 > 12); g_92++)
                    {
                        short **l_114 = &l_86;
                        const unsigned **l_120[6] = {&l_117, &l_117, &l_117, &l_117, &l_117, &l_117};
                        const unsigned ***l_119 = &l_120[4];
                        int i;
                        (*l_75) = (((*l_114) = (void*)0) == l_115);

                        ;
                        if ((*g_71))
                            continue;
                        (*l_119) = l_116[1];
                    }
                }
            }

            ;
        }
    }


    ;
    for (p_70 = (-19); (p_70 >= (-17)); ++p_70)
    {
        for (g_92 = 1; (g_92 < 21); g_92 = safe_add_func_int32_t_s_s(g_92, 1))
        {
            (**l_76) = ((*l_75) < ((-1L) < (*l_75)));
        }
    }
    (*l_76) = p_69;
    return (**l_76);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_102[i][j], "g_102[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_158[i], "g_158[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_261[i][j], "g_261[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_317[i][j], "g_317[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_647[i][j], "g_647[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
