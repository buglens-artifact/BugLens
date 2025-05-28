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



static short g_7 = (-1L);
static int g_14 = (-5L);
static char g_15 = 0x60L;
static unsigned char g_50 = 0UL;
static char g_56 = 0x2DL;
static int g_62 = 0x571B4D09L;
static char g_93 = 0xCCL;
static short g_136 = 1L;
static short g_164 = 0x385DL;
static unsigned g_170[5][2][4] = {{{4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}, {4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}}, {{4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}, {4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}}, {{4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}, {4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}}, {{4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}, {4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}}, {{4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}, {4294967290UL, 0x286A6E12L, 0x60B3B3C5L, 0x3F98BF10L}}};
static unsigned g_171 = 0x940A4941L;
static short g_219 = 0x53FFL;
static unsigned char g_238 = 1UL;
static int g_239 = (-1L);
static unsigned g_248 = 4UL;
static char g_288 = 7L;
static unsigned short g_348 = 65533UL;
static unsigned g_386 = 0x9E3DA630L;
static volatile char g_395 = 0x74L;
static unsigned char g_500 = 0x6DL;
static volatile char g_602 = 0x50L;
static volatile unsigned g_630 = 0x121D8DA0L;
static short g_639 = 1L;
static int g_919 = 1L;
static int g_943 = 0xC33BC2DCL;
static unsigned g_968 = 4294967286UL;
static int g_1029 = 6L;
static short g_1039[8] = {0x9A63L, (-8L), 0x9A63L, (-8L), 0x9A63L, (-8L), 0x9A63L, (-8L)};
static int g_1176 = 0x305A1978L;
static unsigned short g_1231 = 65535UL;
static short g_1438 = 0x6D6CL;
static char g_1489 = (-3L);
static volatile unsigned char g_1500 = 0x05L;
static int g_1589 = 0x7B59E703L;
static unsigned g_1616 = 4294967288UL;
static unsigned g_1681 = 1UL;



static unsigned func_1(void);
static unsigned func_3(unsigned p_4, char p_5, short p_6);
static unsigned func_16(char p_17, unsigned short p_18);
static char func_19(int p_20, char p_21, unsigned p_22, unsigned char p_23, int p_24);
static short func_25(int p_26, short p_27, unsigned char p_28, char p_29);
static unsigned char func_36(int p_37, unsigned p_38, int p_39, unsigned short p_40);
static unsigned short func_83(unsigned short p_84, unsigned char p_85, char p_86, unsigned p_87);
static unsigned short func_94(int p_95, int p_96, unsigned p_97);
static short func_100(unsigned char p_101, char p_102);
static unsigned short func_112(int p_113, unsigned char p_114, unsigned p_115, unsigned char p_116);
static unsigned func_1(void)
{
    unsigned l_2[2][3][2] = {{{1UL, 4294967293UL}, {1UL, 4294967293UL}, {1UL, 4294967293UL}}, {{1UL, 4294967293UL}, {1UL, 4294967293UL}, {1UL, 4294967293UL}}};
    int l_11 = 1L;
    short l_771[6] = {0xC8E2L, 0xC8E2L, 8L, 0xC8E2L, 0xC8E2L, 8L};
    int l_1106 = (-1L);
    short l_1157[9] = {0xCA8FL, 0L, 0xCA8FL, 0L, 0xCA8FL, 0L, 0xCA8FL, 0L, 0xCA8FL};
    unsigned short l_1232[10][9][2] = {{{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}, {{0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}, {0x92E3L, 2UL}}};
    int l_1248[9][10][2] = {{{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}, {{0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}, {0x6B0C1255L, 0x4851BCA5L}}};
    unsigned short l_1255 = 3UL;
    int l_1295 = 0x511E3804L;
    int l_1302 = 0x8100383AL;
    unsigned char l_1309 = 0x62L;
    unsigned l_1317 = 0x354B1196L;
    unsigned char l_1326 = 0xCBL;
    char l_1329[1][6][7] = {{{4L, (-7L), 0x32L, (-3L), (-3L), 0x32L, (-7L)}, {4L, (-7L), 0x32L, (-3L), (-3L), 0x32L, (-7L)}, {4L, (-7L), 0x32L, (-3L), (-3L), 0x32L, (-7L)}, {4L, (-7L), 0x32L, (-3L), (-3L), 0x32L, (-7L)}, {4L, (-7L), 0x32L, (-3L), (-3L), 0x32L, (-7L)}, {4L, (-7L), 0x32L, (-3L), (-3L), 0x32L, (-7L)}}};
    int l_1335 = 1L;
    unsigned char l_1336 = 0x43L;
    unsigned l_1355 = 0x5DC41718L;
    char l_1373[3];
    unsigned l_1402 = 4294967290UL;
    short l_1508 = 9L;
    short l_1513[1];
    int l_1598 = 0x589F46C8L;
    unsigned short l_1638 = 65532UL;
    unsigned l_1679 = 0x66EAA843L;
    int l_1694[2][1][2] = {{{8L, 0x15D997B6L}}, {{8L, 0x15D997B6L}}};
    int l_1749 = 0x8A0A1AF1L;
    int l_1750 = 0xDADCF95BL;
    unsigned char l_1756 = 0x82L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1373[i] = 0xD6L;
    for (i = 0; i < 1; i++)
        l_1513[i] = 2L;
    if (l_2[0][1][1])
    {
        unsigned l_10[1];
        int l_12 = 0x6917AB6DL;
        unsigned l_13 = 0UL;
        unsigned char l_1090 = 0x8AL;
        int l_1098 = 1L;
        int l_1099[2];
        int l_1111[9] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
        unsigned char l_1196 = 0x46L;
        char l_1197 = 0x71L;
        int l_1207[8] = {0x70F6CFEDL, (-6L), 0x70F6CFEDL, (-6L), 0x70F6CFEDL, (-6L), 0x70F6CFEDL, (-6L)};
        int i;
        for (i = 0; i < 1; i++)
            l_10[i] = 5UL;
        for (i = 0; i < 2; i++)
            l_1099[i] = 4L;
        g_15 = (((func_3(g_7, g_7, (g_7 | g_7)) < (((((safe_sub_func_uint8_t_u_u(func_3(l_10[0], g_7, (g_14 = (l_13 = (l_12 = ((l_11 = g_7) & ((-10L) < 0x7EL)))))), 0x63L)) != 0xBD850270L) <= l_10[0]) ^ 0x5D76270EL) && 0L)) <= g_7) == g_7);
        l_11 = (func_16((l_12 = func_19((func_25(g_14, g_15, ((safe_lshift_func_int16_t_s_s(g_15, 4)) >= (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((-5L), func_36(((l_13 == l_11) == (l_10[0] < ((-6L) == (g_7 = (0x763523E2L > l_2[1][1][0]))))), g_14, l_10[0], l_10[0]))), g_14))), l_771[1]) == 0x8E0BL), g_943, l_12, l_12, g_943)), g_943) & g_943);
        l_1099[0] = (l_771[0] , (l_1098 = (g_1029 = (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(((l_12 = ((l_1090 && ((safe_rshift_func_int16_t_s_u((func_25(g_171, (g_136 = (safe_mod_func_int32_t_s_s(g_968, (safe_add_func_uint32_t_u_u(func_3(g_170[4][0][2], g_15, l_11), (safe_unary_minus_func_uint8_t_u(l_10[0]))))))), g_602, l_2[1][0][1]) == l_11), 0)) ^ g_943)) , l_771[1])) ^ 65527UL), 6L)) || g_62), l_10[0])))));
        if ((safe_add_func_uint32_t_u_u(func_16((safe_lshift_func_uint16_t_u_s(((((func_83(l_10[0], (((g_170[2][0][2] , (g_62 > (safe_mod_func_int32_t_s_s(l_1106, l_771[1])))) == (safe_rshift_func_int16_t_s_s((4UL < (g_1029 , (safe_lshift_func_int8_t_s_u(l_12, g_386)))), 12))) && l_1099[0]), l_2[0][1][1], g_1029) && g_602) == l_1111[7]) <= l_1099[0]) && l_771[0]), 9)), g_50), l_10[0])))
        {
            char l_1118[4] = {0x62L, 9L, 0x62L, 9L};
            int l_1129 = 0x431835F8L;
            unsigned short l_1149 = 65530UL;
            int l_1156 = 0x30291109L;
            unsigned l_1188 = 0UL;
            int i;
            for (g_136 = 0; (g_136 >= (-13)); g_136--)
            {
                unsigned char l_1123[6][2] = {{0x82L, 0x03L}, {0x82L, 0x03L}, {0x82L, 0x03L}, {0x82L, 0x03L}, {0x82L, 0x03L}, {0x82L, 0x03L}};
                unsigned l_1128 = 6UL;
                int i, j;
                l_1098 = (safe_lshift_func_int16_t_s_u(g_50, 7));
                l_1129 = (g_62 = ((((safe_add_func_int8_t_s_s((l_11 = l_1118[1]), (safe_mod_func_int16_t_s_s((-7L), l_10[0])))) >= (~(l_13 > (safe_lshift_func_int16_t_s_s((g_1029 && func_3((g_171 = l_1123[2][1]), (safe_add_func_int8_t_s_s((~((safe_add_func_int32_t_s_s(func_3(l_1128, g_136, l_1123[1][1]), l_1123[4][0])) != l_1118[3])), g_239)), l_1099[0])), 3))))) , 1L) < 1UL));
            }
            for (l_1098 = 0; (l_1098 <= 5); l_1098 += 1)
            {
                unsigned char l_1132 = 0xF0L;
                l_1099[0] = (safe_mod_func_uint32_t_u_u(0UL, (g_500 ^ ((g_248 = ((((g_93 = (!func_83(l_771[2], l_1132, (g_164 > (g_968 >= 0L)), (l_1111[8] = (safe_mod_func_uint8_t_u_u((l_1106 , g_14), g_348)))))) ^ g_919) < 1L) , g_1029)) , 0x1304109CL))));
                l_11 = ((safe_mod_func_int8_t_s_s(g_630, 0x7AL)) & func_112((l_1099[0] ^ g_170[4][0][2]), ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_1039[4], (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(l_771[1], 8)) || (l_12 = func_3((g_386 = ((safe_mod_func_uint16_t_u_u((g_348 = g_7), 0x3428L)) , func_3(l_1132, l_1132, g_239))), l_1132, g_219))), g_238)))), g_56)) && g_170[4][0][2]), l_1149)) | 4294967287UL), g_170[2][0][0], g_7));
                return l_1099[1];
            }
            if (((g_170[4][0][2] > func_3(((safe_lshift_func_int16_t_s_s(func_3(l_2[0][1][1], ((((safe_rshift_func_int8_t_s_u((~func_3(g_136, g_219, (!(((l_1129 | (l_11 = (65535UL > (safe_lshift_func_uint16_t_u_u((((l_1156 = ((((g_238 , 0x71L) & ((((g_968 , l_1149) || (-5L)) || l_10[0]) != 0x4C1FL)) ^ 0xF43BCB26L) <= l_771[4])) ^ g_288) , 0x4CE0L), 12))))) <= l_1099[1]) != 1UL)))), l_12)) & l_2[1][1][0]) , g_171) > 255UL), l_2[0][1][1]), l_1157[3])) , 4294967295UL), l_2[1][2][0], l_1106)) , l_1090))
            {
                short l_1158 = 0L;
                unsigned l_1170[6][3] = {{4294967288UL, 4294967288UL, 0xE71BD5D9L}, {4294967288UL, 4294967288UL, 0xE71BD5D9L}, {4294967288UL, 4294967288UL, 0xE71BD5D9L}, {4294967288UL, 4294967288UL, 0xE71BD5D9L}, {4294967288UL, 4294967288UL, 0xE71BD5D9L}, {4294967288UL, 4294967288UL, 0xE71BD5D9L}};
                int i, j;
                for (l_13 = 0; (l_13 <= 1); l_13 += 1)
                {
                    unsigned char l_1159[9][9];
                    int l_1168 = 0x78FD5831L;
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_1159[i][j] = 0x74L;
                    }
                    l_1111[7] = (func_112((l_1129 = func_16(l_1158, l_1159[5][7])), l_1106, (g_248 = (safe_add_func_int16_t_s_s((((g_943 > g_93) , ((+(safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(4294967286UL, (0x24AA4FFBL & (safe_rshift_func_int16_t_s_s(6L, 1))))), l_1111[7]))) , g_500)) < l_1159[5][7]), g_93))), g_943) & l_1090);
                    for (l_1156 = 1; (l_1156 >= 0); l_1156 -= 1)
                    {
                        unsigned short l_1175 = 0x594EL;
                        if (l_1118[1])
                            break;
                        l_1168 = l_2[0][0][0];
                        if (g_248)
                            continue;
                        l_1129 = (((((((g_239 == func_112((g_919 = (safe_unary_minus_func_int16_t_s((l_1099[0] & g_219)))), l_1170[2][0], (safe_sub_func_uint8_t_u_u(l_1156, (-7L))), func_112(((func_3(g_630, g_1039[0], ((safe_mod_func_int32_t_s_s(((((1UL < g_248) != l_771[3]) | l_11) & g_93), l_1157[3])) , (-1L))) < 1UL) , l_1158), l_1118[1], l_1175, g_56))) >= g_288) >= l_1170[4][2]) != l_1170[2][0]) , 0L) != l_771[1]) && g_1176);
                    }
                }
                for (g_171 = 0; (g_171 == 54); g_171 = safe_add_func_uint32_t_u_u(g_171, 8))
                {
                    int l_1187 = 1L;
                    g_239 = ((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(func_3((1L == (l_1170[2][0] & l_1129)), (g_93 >= (safe_add_func_int32_t_s_s(((l_1188 = (~(l_1187 < func_3(func_3((0x427BL > 65535UL), l_2[0][1][1], (l_1158 | g_248)), l_1157[3], l_1170[2][0])))) == g_170[4][0][3]), 0x5CB6E129L))), l_1170[2][0]), 7)), 0xB8867B96L)), g_248)) != l_1090);
                    l_11 = (g_239 = (func_3(g_1039[5], (safe_sub_func_int16_t_s_s(l_11, l_1170[3][0])), ((l_1170[2][1] < ((safe_unary_minus_func_uint8_t_u(func_3(g_170[4][0][2], ((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(l_10[0], l_1196)) > g_602) ^ g_1176), l_2[0][1][1])) , g_136), l_1170[2][0]))) > 1L)) >= l_1197)) >= l_1187));
                    if (l_1158)
                        continue;
                }
            }
            else
            {
                char l_1202[2][10][7] = {{{(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}}, {{(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}, {(-1L), 0x0FL, 0x13L, 0L, (-1L), 0x77L, (-1L)}}};
                int l_1210 = (-6L);
                int i, j, k;
                g_1029 = l_1098;
                l_1207[5] = ((safe_lshift_func_uint8_t_u_u((l_1210 = (g_238 = ((safe_lshift_func_uint8_t_u_s(l_1202[0][9][4], 4)) , ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((l_1207[5] || 0x8979L), 0)), (safe_sub_func_uint32_t_u_u(l_1129, 4294967293UL)))) , g_1176)))), 1)) | ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((l_1111[7] = (safe_rshift_func_uint16_t_u_u((l_13 < (0xB8E907EDL != 4294967295UL)), 11))) > g_968) ^ 0UL), 2)) == g_1029), 3)) < 0x8A2F2466L));
            }
        }
        else
        {
            g_239 = 0x6D79927EL;
        }
    }
    else
    {
        g_62 = (0x2A32L ^ g_219);
        return g_62;
    }
    if (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(func_3(((safe_rshift_func_int8_t_s_s(((func_19((g_348 & (func_3((l_2[1][1][1] >= (safe_add_func_uint32_t_u_u((((l_2[1][2][0] , ((g_239 = 1L) == func_3((l_1157[3] && 0x24L), l_1157[3], (func_3((safe_rshift_func_uint16_t_u_u((g_1231 = (((safe_sub_func_uint16_t_u_u((1UL >= l_1106), l_1106)) == l_2[0][1][1]) ^ g_1039[1])), 6)), g_164, l_11) >= 1UL)))) == 0x1D2FBD2CL) , 4UL), g_238))), g_219, l_1157[5]) <= (-7L))), l_1232[3][3][1], g_639, g_386, g_1176) , (-1L)) <= 0x470EL), l_1157[3])) , g_239), l_2[1][1][1], l_771[3]), g_943)), l_771[5])) && l_1157[3]))
    {
        unsigned char l_1237 = 249UL;
        int l_1247[6];
        int i;
        for (i = 0; i < 6; i++)
            l_1247[i] = (-1L);
        for (g_500 = 23; (g_500 > 47); g_500 = safe_add_func_int16_t_s_s(g_500, 1))
        {
            unsigned short l_1244 = 0x31D4L;
            g_919 = ((0xD12DD737L ^ (g_62 & ((l_11 = (g_968 = ((safe_mod_func_uint16_t_u_u(g_170[1][1][2], l_1237)) == g_15))) >= (((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((g_1231 = (g_239 , 0UL)) && (safe_mod_func_int32_t_s_s(l_1244, (((((safe_rshift_func_uint16_t_u_u((((l_1237 , 1L) <= 0x24L) & 0xA3450ABDL), 5)) > 4294967295UL) <= 0xFEL) , g_943) , l_1157[4])))), 0x21L)) && 0L) , g_170[1][1][0]), 0xCB1FBB84L)) | g_7) , 0xF272E329L)))) , l_1244);
        }
        l_1247[5] = l_1237;
        g_239 = (g_919 = g_171);
        for (g_136 = 0; (g_136 <= 1); g_136 += 1)
        {
            char l_1249 = 0xBDL;
            int i;
            g_919 = ((g_219 = (l_1247[(g_136 + 1)] & g_170[1][1][3])) || (l_1247[0] = 0xE8FAL));
            l_1248[5][8][1] = (l_11 = 0x5959D900L);
            for (g_7 = 0; (g_7 <= 1); g_7 += 1)
            {
                unsigned short l_1254 = 0UL;
                unsigned short l_1256 = 65535UL;
                l_1254 = (g_15 <= func_3(l_1249, g_15, (safe_add_func_uint8_t_u_u((~0x23L), (l_1247[(g_136 + 2)] = (safe_mod_func_int32_t_s_s(0L, g_239)))))));
                if (l_1255)
                    break;
                for (g_386 = 0; (g_386 <= 1); g_386 += 1)
                {
                    for (l_1237 = 0; (l_1237 <= 1); l_1237 += 1)
                    {
                        int i, j, k;
                        l_1256 = l_2[g_386][(g_7 + 1)][g_136];
                    }
                    return g_395;
                }
            }
        }
    }
    else
    {
        int l_1257 = 0L;
        int l_1268 = 0xFC148957L;
        short l_1292 = 0xCD8BL;
        unsigned l_1293 = 0x3D90C95BL;
        short l_1294[4];
        short l_1310[3];
        int i;
        for (i = 0; i < 4; i++)
            l_1294[i] = 0x7956L;
        for (i = 0; i < 3; i++)
            l_1310[i] = 0xB01EL;
        g_1029 = l_1257;
        g_919 = (0x5584FD79L || (safe_rshift_func_uint8_t_u_s((g_50 = l_1257), (safe_sub_func_int16_t_s_s(func_3(l_1257, (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((-6L) || (l_1268 = ((g_170[4][0][2] <= ((l_2[1][2][1] , ((safe_sub_func_int8_t_s_s(0xCAL, ((((1UL != (((0UL | l_1257) > 0x1E00F76AL) >= (-5L))) < g_395) , l_1248[5][8][1]) && 1UL))) & g_56)) != 65527UL)) & l_1255))), 0x6771L)), l_771[0])), g_919), 0x0917L)))));
        if (g_239)
        {
            int l_1269[3][8] = {{0L, 0xC742B404L, 0xCD4C719CL, 0xC742B404L, 0L, 8L, 0L, 0xC742B404L}, {0L, 0xC742B404L, 0xCD4C719CL, 0xC742B404L, 0L, 8L, 0L, 0xC742B404L}, {0L, 0xC742B404L, 0xCD4C719CL, 0xC742B404L, 0L, 8L, 0L, 0xC742B404L}};
            unsigned char l_1303 = 0UL;
            int l_1308 = 0xFDF4D0D9L;
            int l_1327 = 1L;
            int l_1328 = 0xB6262AE6L;
            int i, j;
            l_1269[0][0] = g_386;
            for (g_7 = 0; (g_7 != (-4)); g_7 = safe_sub_func_uint32_t_u_u(g_7, 1))
            {
                int l_1286 = 0x45C96874L;
                int l_1296[4][1] = {{6L}, {6L}, {6L}, {6L}};
                int i, j;
                g_1029 = ((l_1296[1][0] = (((!(safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x589B09D1L, (((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((+(((l_1248[5][8][1] <= (((((safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(0xC4L, 7L)) == (l_1286 != ((((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_u((g_1039[5] = l_1292), (g_288 && (l_11 = (g_968 = ((l_1269[0][0] && (g_93 && g_395)) , g_136)))))))) != g_288) != g_50), l_1255)) <= l_1269[2][6]) , l_1286) , (-1L)))) == l_1248[6][8][0]) , g_239), 11)) & l_1293) ^ 0x23CCCFC6L) >= 7L) < 0xE599L)) , l_1294[2]) , l_1295)) > 0x5CL), g_56)), l_1294[2])), g_7)) != g_639) ^ l_771[4]))), 3))) || g_500) , g_630)) <= g_386);
            }
            if (l_1294[2])
            {
                unsigned short l_1299 = 0UL;
                l_1308 = (safe_lshift_func_uint8_t_u_u(func_36((func_19(l_1268, ((g_1039[5] = (l_1248[5][8][1] = ((func_83(l_1299, (l_1309 = (safe_mod_func_uint8_t_u_u((l_1106 > (l_1302 <= (func_19(l_1303, ((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(0x77L, l_1295)), 7)) , (-1L)), g_386, l_1308, l_1303) < g_1176))), 0x7BL))), g_1231, l_1248[5][8][1]) & l_1303) | (-1L)))) == g_14), l_1299, g_1231, g_1231) , g_395), g_1176, g_15, g_14), 1));
            }
            else
            {
                g_1029 = (l_1310[1] < (l_11 = ((l_1248[5][8][1] = (l_1269[0][0] && g_1231)) < g_919)));
            }
            g_919 = (((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((-1L) <= func_100((safe_add_func_int8_t_s_s(l_1317, func_112((g_62 = (l_1308 = (0x15CDL && g_1039[5]))), l_1248[5][8][1], ((2L == (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(l_1269[0][0], 6)) <= (l_1268 = func_3(((+g_248) , ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u((+(((func_3((g_386 = g_239), l_1295, l_1326) , l_1106) , l_1326) || g_56)), 0L)) , l_1255) <= g_348), 11)) > g_602)), g_14, l_1327))), l_1255))) >= l_1303), g_1176))), g_219)), l_1328)) && l_1157[3]), g_1231)) == l_1327) && g_1039[0]);
        }
        else
        {
            unsigned short l_1330 = 1UL;
            l_1329[0][5][5] = 0xC1AFB1C9L;
            g_1029 = (((l_1330 , (g_239 & (g_630 & (l_771[1] > (l_1294[2] >= (!2UL)))))) >= (((((safe_mod_func_int16_t_s_s(((g_1231 = g_1231) | ((((l_1294[1] == (safe_rshift_func_uint16_t_u_u(g_136, g_50))) > l_11) > g_136) | g_238)), g_239)) >= g_968) <= l_1330) >= l_1330) , g_639)) <= 252UL);
        }
        return g_348;
    }
    if (((l_1335 < l_1232[9][0][1]) != ((0x664640ADL && g_7) != l_1336)))
    {
        unsigned l_1340 = 4294967295UL;
        unsigned l_1429 = 0xF269B42AL;
        if (g_500)
        {
            unsigned char l_1339 = 0UL;
            int l_1357 = (-6L);
            int l_1390 = 0xED6DF9F8L;
            unsigned char l_1391 = 0xA4L;
            unsigned l_1401 = 0xD998C4DDL;
            char l_1403 = 0xB8L;
            if ((safe_mod_func_int32_t_s_s(l_1339, (l_1340 | 0L))))
            {
                int l_1345[9];
                unsigned l_1356 = 0xE30B7C20L;
                int l_1385[6] = {0x826E8AFFL, 0x826E8AFFL, 0x4729F26DL, 0x826E8AFFL, 0x826E8AFFL, 0x4729F26DL};
                int i;
                for (i = 0; i < 9; i++)
                    l_1345[i] = 1L;
                l_1357 = (((l_2[0][1][1] | func_19(l_1339, (((l_1340 != ((safe_sub_func_uint8_t_u_u(((7UL == l_1345[5]) , (safe_lshift_func_int16_t_s_s(((func_25(((0x37L == (func_3((((g_93 = g_170[4][0][1]) != ((safe_lshift_func_int8_t_s_u((~((safe_unary_minus_func_int8_t_s(((l_1345[0] & (((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((func_3((l_1339 == g_219), l_1326, l_1157[3]) & 0x99L) , g_602), g_7)) , g_1039[7]), g_62)) > l_2[0][1][1]) , g_164)) ^ l_1355))) ^ g_7)), g_248)) < 0xC734E11DL)) >= g_219), l_1356, l_1345[4]) >= l_1340)) , (-6L)), l_1339, g_500, l_1345[8]) , g_171) <= g_1231), 1))), l_1232[3][3][1])) >= (-1L))) && g_395) >= 0L), g_219, g_386, g_1039[0])) , l_1302) <= l_1329[0][5][2]);
                for (g_238 = 0; (g_238 != 12); g_238++)
                {
                    char l_1366[7] = {0xCFL, 0xCFL, 0x8EL, 0xCFL, 0xCFL, 0x8EL, 0xCFL};
                    int i;
                    for (l_1336 = 0; (l_1336 <= 1); l_1336 += 1)
                    {
                        return l_1340;
                    }
                    l_1248[5][0][0] = (safe_rshift_func_int16_t_s_s(l_1339, func_83(g_1039[3], g_1039[5], l_1340, (((((g_1231 & (safe_add_func_uint16_t_u_u((((1UL < (g_943 , g_238)) && (safe_rshift_func_uint8_t_u_s((g_50 = (g_919 <= (-5L))), 6))) > g_15), l_1366[4]))) == g_943) & g_348) , l_1345[2]) && 0xC2CAL))));
                    g_919 = ((safe_lshift_func_uint8_t_u_u(0x32L, 1)) <= ((g_248 = g_968) , g_386));
                    if (g_171)
                        break;
                }
                for (l_1317 = 0; (l_1317 <= 0); l_1317 += 1)
                {
                    short l_1374 = 0x8C09L;
                    int l_1375 = 0x02DB168BL;
                    l_1375 = (g_164 == ((safe_sub_func_uint32_t_u_u(l_1340, ((safe_add_func_int16_t_s_s(func_3(g_1176, ((g_56 = l_1373[0]) & (g_7 ^ l_1356)), func_3(g_239, l_2[0][1][1], g_170[4][0][2])), 8UL)) <= l_1374))) , 0x0B46896CL));
                    for (g_7 = 0; (g_7 >= 0); g_7 -= 1)
                    {
                        l_1357 = g_56;
                    }
                    for (g_7 = 0; (g_7 <= 0); g_7 += 1)
                    {
                        int l_1380 = 0x6C2522FFL;
                        g_1029 = l_1302;
                        g_239 = l_1329[0][3][6];
                        l_1380 = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s((l_1380 <= ((safe_lshift_func_int16_t_s_s(func_3((safe_lshift_func_int8_t_s_s(l_1345[3], 3)), (!((((l_1385[1] = l_1356) > g_7) <= ((safe_sub_func_int32_t_s_s((l_1380 || (l_1345[5] && (safe_mod_func_uint8_t_u_u(l_1390, (func_3(g_62, g_164, l_1374) , 1UL))))), g_50)) & g_93)) == 65535UL)), l_1340), g_288)) == l_1340)), l_1391)) , g_1231), 2)) , (-1L));
                    }
                }
            }
            else
            {
                return g_170[4][0][2];
            }
            g_919 = func_112(g_170[4][1][0], g_171, l_1390, l_1340);
            g_919 = (((l_1317 & ((g_136 = l_1340) < 0xB505L)) & l_1248[5][8][1]) , l_2[0][1][1]);
            l_1248[2][0][1] = (safe_sub_func_int16_t_s_s(func_25(g_919, l_1390, (l_1391 > l_1357), (0UL | func_3(func_94((l_1403 = ((g_968 = (func_94(((((g_170[4][0][2] = (safe_unary_minus_func_uint8_t_u(0x09L))) > ((safe_lshift_func_int16_t_s_s(l_1340, ((safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((func_3(g_164, (((func_3(g_1039[2], l_1391, g_93) > 0xBEL) <= l_1340) , 0x71L), g_1039[5]) || (-1L)), l_1295)) == 65531UL) , 0xE7A5E9AAL), l_1248[1][7][1])) || 0xB193C2A2L))) > 0x4E5AL)) <= g_386) > 0xCB8AL), l_1401, l_1340) > g_14)) != l_1402)), g_1231, l_1340), g_15, l_1373[0]))), 0L));
        }
        else
        {
            unsigned l_1424[1][10];
            unsigned l_1425 = 0xAFC1BFADL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1424[i][j] = 0xE3FC3F7CL;
            }
            for (l_1255 = 0; (l_1255 != 56); l_1255 = safe_add_func_uint32_t_u_u(l_1255, 3))
            {
                int l_1434 = 0x189DC15DL;
                for (l_1302 = 0; (l_1302 == (-26)); l_1302 = safe_sub_func_uint16_t_u_u(l_1302, 6))
                {
                    short l_1418 = 0x4F85L;
                    int l_1426[10] = {0x61673686L, 0x61673686L, 0L, 0x61673686L, 0x61673686L, 0L, 0x61673686L, 0x61673686L, 0L, 0x61673686L};
                    int i;
                    for (l_1326 = 0; (l_1326 <= 4); l_1326 = safe_add_func_int16_t_s_s(l_1326, 4))
                    {
                        unsigned char l_1423[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1423[i] = 0xBEL;
                        g_239 = g_170[4][0][2];
                        l_1426[0] = (0x8901L == (+(safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((safe_sub_func_int16_t_s_s((-4L), 0x18C8L)) , l_1418) <= (g_170[4][0][2] >= (safe_lshift_func_uint8_t_u_s((((l_1340 || (((((-6L) | ((g_7 || 65532UL) & 0UL)) && l_1423[6]) >= g_56) >= g_919)) , g_170[4][0][2]) || l_1424[0][2]), l_1425)))), g_238)), l_1423[2])), l_1335))));
                    }
                }
                l_11 = (func_100(l_2[0][1][1], (safe_add_func_uint8_t_u_u(((g_14 = (((((-10L) < 0x2A560754L) & g_171) & l_1424[0][4]) != ((l_1429 , g_248) && ((safe_rshift_func_uint8_t_u_s(0x61L, (((safe_mod_func_uint32_t_u_u(l_1434, l_1373[2])) >= l_1248[3][4][0]) , (-2L)))) == g_1029)))) , l_1424[0][2]), 0xA7L))) | 0xD40E711CL);
            }
            return l_1424[0][8];
        }
    }
    else
    {
        int l_1437 = (-2L);
        int l_1448 = (-3L);
        unsigned short l_1553[1];
        int l_1597 = 1L;
        char l_1622 = (-9L);
        char l_1755 = (-4L);
        int i;
        for (i = 0; i < 1; i++)
            l_1553[i] = 0x82F4L;
        l_1248[8][1][0] = (safe_add_func_int16_t_s_s(((l_1437 = (-3L)) , l_1157[3]), 0x7726L));
        for (g_171 = 0; (g_171 <= 0); g_171 += 1)
        {
            int l_1445 = 0L;
            int i;
            g_919 = (((l_1373[g_171] && (func_3((g_386 = l_1373[g_171]), (g_93 = (g_1438 = (g_15 = (-9L)))), (l_1373[(g_171 + 2)] && (l_1445 = (safe_add_func_int16_t_s_s(l_1373[(g_171 + 2)], (g_348 = ((g_170[4][0][2] = g_943) , (safe_rshift_func_uint16_t_u_s((g_1029 || ((l_11 = (((safe_sub_func_int8_t_s_s((-2L), g_602)) < 0x29AE77C2L) || 0UL)) >= g_248)), l_1373[(g_171 + 2)]))))))))) == l_1373[g_171])) , 0xA0F2L) >= g_968);
            for (l_1309 = 0; (l_1309 <= 0); l_1309 += 1)
            {
                int l_1459 = 0x4EB19F71L;
                int l_1463 = (-2L);
                int l_1464 = 0xCC6EC8B7L;
                for (l_1295 = 0; (l_1295 >= 0); l_1295 -= 1)
                {
                    for (g_136 = 0; (g_136 >= 0); g_136 -= 1)
                    {
                        int i, j, k;
                        return l_1329[g_136][(g_171 + 2)][(g_136 + 3)];
                    }
                }
                if (func_3(((safe_lshift_func_uint16_t_u_s(g_1039[5], ((l_1373[g_171] | 3UL) & (-8L)))) , ((((g_170[3][1][3] <= (-1L)) < ((g_348 = (g_1231 = l_1448)) > g_943)) ^ (g_238 , l_1448)) , 0x5B213B3BL)), l_1373[g_171], l_1437))
                {
                    unsigned l_1449 = 0xB713B906L;
                    l_1449 = (~g_62);
                }
                else
                {
                    for (l_1302 = 0; (l_1302 <= 18); l_1302 = safe_add_func_uint8_t_u_u(l_1302, 1))
                    {
                        return g_943;
                    }
                    l_1448 = (+(g_239 = (l_1437 > 0x517897D4L)));
                    g_1029 = g_170[0][0][0];
                }
                l_1448 = func_3(((safe_lshift_func_uint16_t_u_u(g_1438, func_3((((l_1302 && (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((((g_239 = l_1373[g_171]) >= (((g_62 = (0x6C9EL <= 0x72EAL)) , (l_1459 = g_630)) , ((safe_rshift_func_uint8_t_u_s(((g_62 = (0x3CL <= (g_238 = (g_500 = (safe_unary_minus_func_uint16_t_u(((g_943 <= l_1459) | g_639))))))) <= (-1L)), g_348)) ^ g_50))) || 0x320626B0L) && l_1373[0]), g_14)) == 0x12L) && (-3L)), 7))))) > l_1463) != g_170[4][0][2]), g_639, g_14))) < 0xB249L), g_386, l_1463);
                g_1029 = l_1464;
            }
        }
        if ((g_219 > (safe_rshift_func_uint16_t_u_s(g_968, (((safe_add_func_uint16_t_u_u(((((2UL >= g_238) > g_248) & g_7) & ((-5L) <= (l_1448 = func_3((g_171 = g_1029), (g_630 || 4294967292UL), g_1231)))), 65535UL)) || l_1437) < g_238)))))
        {
            char l_1469 = (-4L);
            l_1295 = g_1039[5];
            g_1029 = (l_1469 >= (-3L));
        }
        else
        {
            unsigned char l_1505 = 0x7DL;
            int l_1527 = 0xDD7D6264L;
            int l_1615 = 0x683CDF92L;
            unsigned l_1687[7][1][5] = {{{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}, {{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}, {{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}, {{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}, {{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}, {{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}, {{0xAAC8A003L, 0x8161D271L, 3UL, 0x1F2B207BL, 0x8161D271L}}};
            unsigned char l_1730 = 0UL;
            char l_1748 = 0x9CL;
            int i, j, k;
            for (l_1255 = 0; (l_1255 <= 8); l_1255 += 1)
            {
                short l_1479 = 1L;
                int l_1480[4];
                unsigned char l_1501 = 255UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_1480[i] = 0x0654768FL;
                for (g_1029 = 5; (g_1029 >= 0); g_1029 -= 1)
                {
                    int l_1478 = 0x25345316L;
                    int l_1497 = 0xEE8FB873L;
                    for (l_1402 = 0; (l_1402 <= 8); l_1402 += 1)
                    {
                        int i;
                        l_1480[3] = (l_1479 = ((((g_14 = l_1157[l_1402]) , g_1438) , g_602) , (safe_mod_func_uint16_t_u_u(g_1039[0], (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((func_100(l_1478, (g_93 = g_630)) , ((l_1437 == 0x5FL) >= 5UL)), 2)) != (-1L)), g_1176)), g_50))))));
                        return l_1480[1];
                    }
                    for (g_500 = 0; (g_500 <= 1); g_500 += 1)
                    {
                        int i, j, k;
                        g_919 = l_2[g_500][(g_500 + 1)][g_500];
                        l_1448 = (0UL > 4294967286UL);
                    }
                    g_239 = (((-2L) < (safe_mod_func_int32_t_s_s((((g_630 , l_1295) , ((g_1489 = ((g_7 || (safe_mod_func_int16_t_s_s((+(safe_mod_func_int32_t_s_s(l_1479, func_3((((g_50 = ((safe_rshift_func_int8_t_s_s(l_2[1][1][0], (g_639 <= g_602))) , (g_239 & l_1448))) != 255UL) ^ g_288), l_1437, l_1480[0])))), g_288))) | l_1480[3])) , 0x6C72L)) , l_1232[3][3][1]), g_1176))) && g_1438);
                    g_919 = 0xC77F1819L;
                    for (l_1479 = 1; (l_1479 >= 0); l_1479 -= 1)
                    {
                        unsigned l_1496 = 4294967286UL;
                        int i, j, k;
                        l_1497 = (g_7 >= ((0x41F3FF44L || (safe_mod_func_int16_t_s_s(((g_919 >= (safe_lshift_func_int8_t_s_u(((g_50 = (((g_62 , ((g_164 , l_1437) | 0xB620L)) & g_1489) | (l_1496 = (+(safe_lshift_func_int16_t_s_s(l_1478, 1)))))) == g_919), l_1448))) , g_15), 2UL))) && g_1176));
                        l_1480[1] = (func_25((safe_add_func_int16_t_s_s((!(func_83(g_50, (g_1500 & g_1029), l_1478, (l_2[l_1479][(l_1479 + 1)][l_1479] = (((g_239 = ((!g_7) , func_3(l_771[1], (g_1489 = g_919), l_1501))) | l_1402) != 0xF9L))) > g_968)), g_919)), l_1497, l_1478, g_1231) != g_1029);
                    }
                }
            }
            if ((g_943 > (safe_rshift_func_int8_t_s_u((g_15 = (g_1489 = func_19((g_1176 = (safe_unary_minus_func_uint32_t_u(l_1326))), g_1039[5], (g_7 & 0xFBL), l_1505, (l_1448 = ((safe_sub_func_uint32_t_u_u((l_1508 >= ((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0UL, func_3((g_1231 , 0x0531A776L), g_639, g_943))), 0xABL)) , l_1505)), l_1437)) , g_386))))), l_1513[0]))))
            {
                int l_1518 = 0xFDDFED28L;
                int l_1519 = 0x71AD6BB0L;
                l_1519 = ((l_1448 = ((func_100((((safe_sub_func_int8_t_s_s((1UL >= (safe_sub_func_uint16_t_u_u(l_1157[4], 0xC041L))), (func_19(l_1248[5][8][1], g_164, func_3(g_943, func_3(g_164, ((~((l_771[2] > (l_1518 = l_1505)) >= 0xDB3F2E12L)) != (-9L)), l_1448), g_386), g_1231, l_1505) < g_943))) <= 0xF2L) , 254UL), g_14) == g_1176) < 0x8DEFL)) , 0x967C07BCL);
                for (l_1448 = 1; (l_1448 >= 0); l_1448 -= 1)
                {
                    short l_1524 = (-1L);
                    int l_1544 = 2L;
                    l_1527 = (1L > func_3((l_11 != (((0xC5CCL | ((safe_sub_func_int16_t_s_s(((g_1029 != (l_1157[3] != l_1519)) >= l_1524), (l_1505 , func_25((((safe_lshift_func_uint16_t_u_u((l_1519 & 0x92B4F0E9L), 6)) >= 0xD4L) && g_1231), l_1519, l_1524, g_1039[1])))) | 65535UL)) , l_1524) > g_639)), l_1519, l_1519));
                    for (l_1309 = 0; (l_1309 <= 1); l_1309 += 1)
                    {
                        int l_1541 = 1L;
                        int l_1545 = 0x8AEE02B8L;
                        g_919 = g_943;
                        l_1545 = (safe_lshift_func_int8_t_s_s(g_919, (((safe_rshift_func_int8_t_s_s((g_248 ^ (safe_rshift_func_uint8_t_u_u(((func_83((!g_62), (g_500 = (((safe_unary_minus_func_uint32_t_u(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(0xB234239BL, (+g_630))) , ((((func_3(l_1448, (g_93 = (g_1489 = (g_1029 >= (l_1541 , (safe_add_func_int32_t_s_s((l_1255 , g_1029), 4294967294UL)))))), g_248) ^ g_62) > 0x1B84L) , g_919) <= (-2L))), l_1157[8])), g_386)) ^ g_14))) , (-4L)) && g_170[3][0][2])), g_238, l_1544) | l_1541) , 0x56L), l_2[1][2][1]))), g_14)) ^ g_56) == 8UL)));
                        g_239 = (safe_mod_func_uint16_t_u_u(l_1295, l_1519));
                        g_1029 = g_170[3][1][2];
                    }
                }
            }
            else
            {
                unsigned char l_1550 = 8UL;
                unsigned char l_1566 = 0xA1L;
                int l_1567[3];
                int l_1614 = 0xFA89D284L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1567[i] = 0xCD3FEAE7L;
                l_1553[0] = (safe_add_func_int32_t_s_s((l_1550 = 1L), (safe_rshift_func_int16_t_s_u(g_1029, 12))));
                g_919 = ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_1567[1] = (l_1448 = (g_238 = (((safe_mod_func_uint16_t_u_u((g_395 == (((5UL & ((((safe_add_func_uint32_t_u_u(g_171, g_219)) <= (safe_lshift_func_uint16_t_u_u(func_3(g_238, l_1505, (g_968 , (l_1527 = l_1566))), l_1448))) , l_1550) || l_1550)) , 4294967295UL) >= 0x5F6EFE21L)), 0x1957L)) || 8UL) != g_1438)))), g_7)), 5)), 65528UL)) && l_1505);
                if (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((0x87E7L > (-7L)), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_395, ((l_1157[3] < l_1527) || (!(l_1329[0][1][0] & g_1176))))), (0x38L || (g_93 , l_1550)))))), g_62)) & g_248))
                {
                    char l_1596[3];
                    unsigned short l_1613 = 6UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1596[i] = 2L;
                    if (l_1448)
                    {
                        unsigned short l_1588 = 0UL;
                        int l_1599 = 5L;
                        unsigned char l_1602 = 1UL;
                        l_1448 = (safe_mod_func_uint16_t_u_u((l_1550 != (safe_lshift_func_int16_t_s_u(((((safe_mod_func_int32_t_s_s(l_1505, 0x9C5138ABL)) ^ l_1505) < g_500) < g_919), func_83(((((((g_1589 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_248, ((g_348 = (safe_lshift_func_int8_t_s_s((-1L), g_348))) , l_1588))), g_170[4][0][2])) >= 1L)) <= g_1500) >= l_1567[1]) || 0x1227L) & g_7) , g_500), g_1489, l_1302, l_1553[0])))), l_1588));
                        g_1589 = (~g_500);
                        l_1599 = func_36((safe_lshift_func_uint16_t_u_s(65526UL, 11)), ((((0xCD2EAF99L || (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((func_100(l_1588, l_1596[0]) && l_1596[2]), l_1596[1])), (g_968 <= (g_919 = l_1597))))) <= l_1505) || 1UL) && l_1598), l_1596[0], g_1589);
                        g_239 = ((g_93 = (l_1615 = (!((((g_1231 , ((safe_sub_func_int16_t_s_s(((l_1614 = (((-4L) >= (~(g_1029 , (l_1550 & (l_1567[1] = ((((l_1602 = g_602) && ((g_348 = (safe_add_func_uint16_t_u_u((g_1231 = (l_1527 = (safe_mod_func_uint32_t_u_u((g_219 == (((safe_add_func_uint8_t_u_u((((l_1505 >= ((l_1599 = (l_1613 = ((safe_lshift_func_uint8_t_u_s(l_1588, 6)) || ((((safe_mod_func_uint16_t_u_u(0xD5A2L, g_62)) , 0x94L) , g_1029) , l_771[4])))) , 65535UL)) < l_1527) , l_2[0][1][1]), l_1527)) | l_1553[0]) ^ 0x7D5AL)), 1UL)))), l_1567[1]))) == 1L)) , l_1596[0]) || l_1550)))))) || 2L)) , g_15), 65534UL)) < 0xB89EL)) , 8L) <= g_93) >= l_1588)))) | g_56);
                    }
                    else
                    {
                        unsigned short l_1617[10][9][2] = {{{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}};
                        int l_1633 = 7L;
                        int i, j, k;
                        g_1616 = ((0xEA66L && func_112(g_968, l_1613, g_136, g_93)) != (g_14 && 65535UL));
                        l_11 = l_1617[9][1][1];
                        l_1633 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x1C73L, 2)), (((g_15 ^ g_170[4][0][2]) > l_1622) , ((((func_19((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_94(g_630, (g_1029 = (l_1448 = 3L)), (((l_1597 , (safe_add_func_int8_t_s_s(l_1596[0], (safe_rshift_func_int16_t_s_s((1L < 7L), 6))))) && l_1550) , g_348)), 0x8570L)), l_1596[0])) || g_395), g_15)), l_1617[0][7][0], g_1489, l_1437, g_1039[6]) ^ l_1553[0]) , 7L) > g_943) , l_1617[9][1][1]))));
                        l_1527 = func_16(((((l_1567[1] = l_1505) , (((g_136 != ((safe_rshift_func_int8_t_s_s(0x02L, (g_93 = 0xEDL))) == l_1567[0])) , g_170[4][0][2]) ^ (l_1505 < g_62))) <= (((l_1437 <= g_1616) != g_1500) < l_1553[0])) | 0x4890L), g_7);
                    }
                }
                else
                {
                    unsigned l_1636 = 0xDD698C75L;
                    int l_1637[7][4][1];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1637[i][j][k] = (-10L);
                        }
                    }
                    g_239 = g_56;
                    l_1248[5][8][1] = l_2[0][1][0];
                    l_1638 = (l_1637[6][0][0] = l_1636);
                }
            }
            for (g_164 = 0; (g_164 <= 0); g_164 += 1)
            {
                int l_1667 = 0x897A4099L;
                int i;
                if (((((l_1553[g_164] != (safe_sub_func_int16_t_s_s(l_1553[g_164], (g_348 = (safe_add_func_int32_t_s_s(l_1615, (((l_1553[g_164] != (g_386 != (safe_sub_func_uint8_t_u_u((((((safe_add_func_uint16_t_u_u((l_771[1] , l_1553[g_164]), (safe_add_func_uint16_t_u_u((0xDCL && (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((!0xFD19D7ECL), l_1553[g_164])), 3)) < (-1L)) != 7UL)), 0xAED7L)))) , g_14) || 0x81009724L) && g_602) != l_1505), g_919)))) && l_1232[1][0][0]) , g_248))))))) || l_1553[g_164]) && l_1513[0]) != 65535UL))
                {
                    char l_1655 = (-1L);
                    if (((safe_sub_func_int32_t_s_s(func_3(l_1553[0], ((g_56 == g_56) || (l_1622 , (l_1655 , l_1598))), (((g_50 = ((l_1335 = l_1622) > ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((l_1448 = 0x3BL), 3)) || (safe_mod_func_int32_t_s_s(l_1553[g_164], g_56))), 13)) && l_1553[0]))) && l_1655) , 0xAF83L)), 1L)) , g_1616))
                    {
                        return g_386;
                    }
                    else
                    {
                        g_1029 = l_1402;
                    }
                    if (l_1355)
                    {
                        g_1029 = (-3L);
                    }
                    else
                    {
                        char l_1666 = (-1L);
                        int l_1672 = 0xE227CCE7L;
                        int l_1680 = 0x6C59C805L;
                        l_1667 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(l_1666, 2)), 0)) > (g_288 == l_1437));
                        g_1029 = ((((g_93 = (safe_mod_func_int8_t_s_s((g_1681 = (safe_rshift_func_uint8_t_u_s((l_1672 <= (safe_lshift_func_uint16_t_u_s((g_1231 = (l_1232[3][3][1] != (safe_lshift_func_int8_t_s_u((g_1489 = g_239), 6)))), 9))), (((((safe_lshift_func_uint16_t_u_s((func_3((l_1679 & l_1553[g_164]), g_1039[6], func_3((0xF0D6EDA9L >= (+(l_1680 = ((func_3(func_3(((!g_1029) && (l_1666 || 0x57B6L)), l_1672, l_1527), g_56, g_93) | l_1553[g_164]) , 1UL)))), g_238, g_1500)) , 1UL), 11)) , g_219) , 9UL) > g_1176) , g_1029)))), g_1438))) || 255UL) , 0xF95CL) , g_500);
                        return l_1553[g_164];
                    }
                }
                else
                {
                    int l_1684 = 0x89CE6A46L;
                    g_919 = g_248;
                    for (l_1295 = 0; (l_1295 <= 1); l_1295 += 1)
                    {
                        return l_1553[0];
                    }
                    l_1667 = (safe_lshift_func_uint8_t_u_s(((func_3(((l_1615 = ((g_1029 >= 0x440B2399L) , l_1684)) || func_3(g_171, l_1615, l_1553[g_164])), g_238, l_1684) & 0x3BE3L) , 0x26L), g_238));
                }
                if ((l_1687[4][0][4] | (((safe_lshift_func_uint8_t_u_s(246UL, 0)) <= (((-2L) > (func_3((((((safe_add_func_int8_t_s_s(l_1667, (((safe_sub_func_int16_t_s_s(((((func_3(l_1513[0], (l_1448 = g_968), g_170[4][0][2]) <= (l_1553[g_164] != g_500)) , l_1667) , g_395) , l_1667), l_1553[0])) , 0x31L) != 0x43L))) <= l_1615) < g_288) == 0xC491L) & 9L), l_1527, l_1694[0][0][0]) < 65535UL)) || 0x3DA78981L)) <= 0xFAE4L)))
                {
                    unsigned l_1695 = 1UL;
                    l_1695 = (g_62 = ((g_1176 = g_348) , (6L != ((l_1694[0][0][1] , (g_171 & (g_14 < g_1681))) >= l_1553[g_164]))));
                    return g_943;
                }
                else
                {
                    unsigned char l_1709 = 1UL;
                    g_1029 = (safe_lshift_func_uint8_t_u_s((l_1527 ^ g_14), 0));
                    for (g_1029 = 1; (g_1029 >= 0); g_1029 -= 1)
                    {
                        l_1527 = g_1438;
                        l_1527 = 4L;
                    }
                    g_62 = g_919;
                    for (g_1681 = 0; (g_1681 <= 1); g_1681 += 1)
                    {
                        short l_1701 = 7L;
                        int l_1708 = 0L;
                        int l_1710[10][6] = {{0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}, {0xFB002F43L, 0x4131BD3CL, (-6L), 0x7A88632EL, 0xD0774748L, 0x7A88632EL}};
                        int l_1711 = 1L;
                        int i, j;
                        l_1711 = ((l_1710[0][3] = (safe_unary_minus_func_int32_t_s(((g_968 = (g_1039[6] , (l_1694[0][0][0] = (g_170[3][1][2] , (g_170[3][0][0] = g_1589))))) > ((((0UL > (safe_sub_func_int32_t_s_s(((l_1708 = ((!(l_1448 = l_1701)) > (safe_rshift_func_int8_t_s_s(((l_1553[g_164] < ((safe_mod_func_int32_t_s_s((l_1317 , ((g_15 || 251UL) , l_1553[g_164])), l_1232[0][0][1])) >= l_1553[g_164])) <= 7L), l_1437)))) == g_93), 0x7899815EL))) <= l_1709) & g_602) != 0x47L))))) > g_500);
                    }
                }
                if (g_56)
                    continue;
                l_1527 = ((safe_add_func_uint8_t_u_u(g_238, (safe_sub_func_uint16_t_u_u((g_1231 = 0x6758L), func_3((0L ^ (safe_mod_func_uint16_t_u_u((!(safe_sub_func_int8_t_s_s(1L, (safe_rshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(g_1039[3], (0x64L < l_1553[g_164]))) | (func_3(l_1615, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0xA7L, 6)), g_348)), l_1730) , l_1295)), g_136)) , 255UL) == g_943), 9))))), l_1553[g_164]))), g_630, l_1437))))) && l_1553[g_164]);
                for (l_1622 = 1; (l_1622 >= 0); l_1622 -= 1)
                {
                    unsigned l_1747 = 0UL;
                    for (g_15 = 1; (g_15 >= 0); g_15 -= 1)
                    {
                        int i, j, k;
                        g_1029 = ((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_2[l_1622][(g_15 + 1)][l_1622], ((-1L) < l_1232[(l_1622 + 7)][(g_164 + 1)][l_1622]))), 3)) , ((safe_mod_func_int32_t_s_s((g_1589 = func_3((l_1448 = (safe_rshift_func_int16_t_s_s(l_1232[(g_15 + 4)][(l_1622 + 2)][g_15], (((l_1667 = l_1437) & ((safe_rshift_func_uint8_t_u_u((~l_1615), 0)) && (safe_add_func_uint32_t_u_u(g_630, l_1687[4][0][4])))) == (((g_56 = (((((l_1747 , 250UL) == l_1553[0]) <= l_1106) == 0UL) == g_1616)) <= l_1232[(g_15 + 4)][(l_1622 + 2)][g_15]) , g_93))))), g_386, g_248)), g_968)) , l_1748)) > l_1749) | 1L), 0L)) ^ g_239), g_50)) , (-10L));
                    }
                    for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
                    {
                        unsigned char l_1753[3][1];
                        int l_1754[10] = {1L, 0L, 0xB427EC3EL, 0xB427EC3EL, 0L, 1L, 0L, 0xB427EC3EL, 0xB427EC3EL, 0L};
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1753[i][j] = 0x18L;
                        }
                        l_1335 = (g_93 & (+0xD4L));
                        l_1615 = (g_1489 | l_1750);
                        l_1615 = ((l_1754[9] = (((safe_sub_func_uint8_t_u_u(250UL, l_1747)) , (l_1527 = ((((((g_164 & (0L > (g_238 ^ l_1622))) != func_3((((g_170[4][0][2] , func_3((l_1248[5][8][1] , 4UL), l_1753[0][0], l_1753[0][0])) , 0x0E4EEBD6L) , l_1448), l_1687[4][0][2], g_1616)) , l_1615) ^ 4294967289UL) ^ g_136) || l_1747))) , g_164)) == l_1747);
                        g_1589 = l_1755;
                    }
                }
            }
            l_1448 = 4L;
        }
        l_1248[5][8][1] = l_1309;
    }
    return l_1756;
}







static unsigned func_3(unsigned p_4, char p_5, short p_6)
{
    return g_7;
}







static unsigned func_16(char p_17, unsigned short p_18)
{
    unsigned l_1055 = 4294967288UL;
    int l_1056 = (-4L);
    int l_1057 = 0xD09957D5L;
    int l_1058[6][9][4] = {{{0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}}, {{0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}}, {{0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}}, {{0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}}, {{0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}}, {{0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}, {0xA4356435L, 0L, 0x3C641C1FL, 0L}}};
    unsigned l_1072 = 0x96FEE419L;
    int i, j, k;
    g_1029 = func_83(p_17, g_171, p_17, (g_170[4][0][2] = (l_1058[1][4][2] = (((p_17 , (0x1F944D1FL <= p_18)) && (0x185CL & ((p_18 > (((l_1056 = ((safe_mod_func_uint32_t_u_u((p_17 == 4294967295UL), 0xFBDB7AAEL)) <= l_1055)) == g_50) & l_1057)) || 0x91L))) != 0x18E7L))));
    g_919 = (safe_rshift_func_uint8_t_u_s(((4294967295UL || (((p_17 , (p_17 & (safe_lshift_func_uint16_t_u_u(g_50, (safe_sub_func_int32_t_s_s(func_3((l_1056 , (l_1056 = (g_386 = ((safe_lshift_func_uint16_t_u_u(p_18, g_164)) || (((safe_rshift_func_int8_t_s_u((-1L), (p_18 == 0xCD83L))) != 65526UL) && p_17))))), l_1058[3][2][0], g_943), g_630)))))) > l_1058[4][7][1]) | p_18)) , 0x91L), l_1058[1][4][0]));
    l_1058[5][6][2] = g_919;
    for (g_164 = 0; (g_164 < 15); g_164++)
    {
        int l_1071 = (-1L);
        int l_1077 = 0x0C1AFD4BL;
        g_919 = (func_3(l_1071, (l_1072 || g_1039[5]), ((l_1077 = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0xA24EE65EL, g_136)), 1))) != (p_17 > g_56))) & (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((g_943 != l_1071), l_1071)) | 0x5F38AC8DL), (-2L))));
        g_62 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_18, 14)), 0)) , l_1058[2][0][0]);
        if (l_1057)
            continue;
    }
    return p_17;
}







static char func_19(int p_20, char p_21, unsigned p_22, unsigned char p_23, int p_24)
{
    unsigned l_950 = 0UL;
    int l_958 = (-5L);
    int l_979 = (-3L);
    short l_987 = 0L;
    unsigned l_1045 = 0x7B2B286FL;
    int l_1052[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_1052[i][j] = 0x551174EEL;
    }
    for (g_919 = 22; (g_919 > 20); g_919 = safe_sub_func_uint16_t_u_u(g_919, 3))
    {
        int l_946 = 3L;
        short l_957[5][4];
        int l_963 = 0x1755331DL;
        int l_964 = 0xBEABEF0DL;
        int l_965[10][2];
        short l_985[2];
        unsigned l_986[5];
        unsigned char l_1003 = 4UL;
        int l_1042 = 0L;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_957[i][j] = 0L;
        }
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 2; j++)
                l_965[i][j] = 0x05281427L;
        }
        for (i = 0; i < 2; i++)
            l_985[i] = 6L;
        for (i = 0; i < 5; i++)
            l_986[i] = 4294967294UL;
        for (g_219 = 0; (g_219 <= 1); g_219 += 1)
        {
            unsigned char l_947 = 255UL;
            int l_967 = 7L;
            unsigned l_976[8] = {0xDCD2D6E8L, 0xFDFC75D0L, 0xDCD2D6E8L, 0xFDFC75D0L, 0xDCD2D6E8L, 0xFDFC75D0L, 0xDCD2D6E8L, 0xFDFC75D0L};
            int i;
            l_947 = (l_946 = p_24);
            l_958 = (safe_rshift_func_uint8_t_u_u((p_23 = (((l_950 | (l_946 ^ ((g_14 ^ 0UL) && (p_20 | ((l_950 < 0UL) && p_24))))) >= (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(((l_957[4][3] , g_62) != p_22), l_957[4][3])) != g_639), 1)) <= l_947), l_958))) || 0xB4846974L)), l_946));
            for (g_171 = 0; (g_171 <= 1); g_171 += 1)
            {
                volatile int l_971 = 0xF0AC6AFCL;
                int l_1002 = (-10L);
                int i, j, k;
                g_239 = g_170[(g_219 + 2)][g_219][g_171];
                if (g_170[g_171][g_171][g_171])
                    continue;
                if ((g_170[(g_219 + 1)][g_219][g_171] && ((((safe_mod_func_int32_t_s_s((p_24 >= ((p_20 ^ ((safe_sub_func_uint16_t_u_u(func_3(func_3(p_20, func_3(p_21, (((((l_964 = (g_170[g_171][g_219][(g_171 + 1)] = (l_963 >= func_3(l_950, g_50, g_919)))) > 4294967295UL) && p_23) || p_20) < 6L), l_947), g_288), l_950, p_20), p_20)) != l_965[7][0])) , l_963)), p_23)) == g_602) & 1UL) > g_348)))
                {
                    short l_966 = 0x2B5CL;
                    if (p_22)
                    {
                        l_966 = (~l_947);
                        if (l_966)
                            break;
                    }
                    else
                    {
                        l_958 = ((func_3((l_967 = (g_919 > g_170[(g_219 + 2)][g_219][g_171])), (g_288 = (-10L)), p_24) ^ func_3((g_968 = (g_386 = (0xC625L ^ 0xBDCCL))), g_170[4][0][2], (safe_add_func_int32_t_s_s(p_23, l_965[7][0])))) < 0xB404L);
                        l_958 = g_7;
                        l_971 = g_630;
                        if (l_950)
                            break;
                    }
                }
                else
                {
                    char l_980 = 0xD7L;
                    l_980 = (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_976[3] , (l_958 <= (p_21 = g_219))), (safe_mod_func_uint16_t_u_u(65535UL, (g_239 , ((((((!(0x734CL && 0x7DA1L)) , g_14) >= func_3(((((l_979 = func_3(g_348, l_971, g_171)) , p_23) == (-8L)) , g_968), g_170[g_171][g_171][g_171], p_23)) < 1UL) , 0UL) , p_24)))))), p_22));
                }
                if ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((p_21 = (func_3(g_171, (func_3((0xEFL < (((l_985[0] = g_219) != (g_14 , func_3((g_219 == ((p_23 ^ 0x7306L) || (l_971 , 3L))), p_23, g_170[g_171][g_171][g_171]))) , l_986[1])), g_170[(g_219 + 2)][g_219][g_171], g_968) || l_947), l_976[3]) & 1UL)), (-8L))), l_958)))
                {
                    unsigned l_998 = 0xD7BB88C9L;
                    unsigned char l_999 = 248UL;
                    int l_1015 = (-4L);
                    unsigned char l_1028 = 1UL;
                    l_967 = (((p_21 = (!(((l_987 == (safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((g_238 ^ 251UL) ^ func_3(((g_386 || g_348) ^ ((safe_lshift_func_uint8_t_u_s((g_968 & (g_639 = p_23)), (((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_22, 4)), 4)) | g_919) >= 65529UL) ^ l_998) , l_950))) , g_15)), l_999, g_14)), 5)) & l_971) == l_965[7][0]), g_170[(g_219 + 2)][g_219][g_171]))) <= p_24) & g_943))) | p_22) < g_170[2][1][3]);
                    if (l_967)
                        continue;
                    if (((safe_lshift_func_uint16_t_u_s((l_1002 = p_24), 7)) < g_136))
                    {
                        if (g_248)
                            break;
                        l_967 = l_971;
                    }
                    else
                    {
                        unsigned short l_1012 = 65530UL;
                        int l_1016 = 0x5B494DAFL;
                        l_964 = ((g_170[(g_219 + 1)][g_219][g_171] | l_1003) , (g_239 = (p_20 != (l_985[0] < func_3(((safe_mod_func_uint16_t_u_u((l_1002 = ((safe_lshift_func_int16_t_s_s(func_3(p_20, (((l_965[5][0] = (safe_sub_func_uint8_t_u_u(func_3(p_24, p_20, (safe_sub_func_uint16_t_u_u(l_958, l_1012))), l_1002))) > 4294967295UL) , g_630), g_50), 8)) == 0xB7L)), p_24)) > l_979), p_21, p_20)))));
                        l_965[3][0] = (l_1015 = (safe_add_func_int32_t_s_s((((g_136 , l_958) && ((65535UL ^ (g_164 >= (-1L))) < ((((0x69L ^ 0xAAL) != p_23) , g_171) || g_386))) < g_14), (-7L))));
                        l_1016 = ((g_50 = g_639) , g_968);
                        l_958 = ((safe_lshift_func_uint8_t_u_u(l_1012, ((g_171 , (safe_sub_func_int32_t_s_s(l_967, (((g_248 == (safe_sub_func_int8_t_s_s(func_3((p_22 = 0x9855C971L), l_1012, g_7), (((0x02B93F4BL > p_23) || g_170[4][0][1]) , l_1015)))) <= g_219) <= g_14)))) | 1L))) <= 0x334EC5F9L);
                    }
                    if ((0x4BL >= 247UL))
                    {
                        short l_1023 = 1L;
                        l_967 = (0xBB32909AL <= ((((((l_1023 | 0x3F7DL) != (1UL > g_164)) , (p_23 || (safe_rshift_func_int8_t_s_s((g_919 > (251UL > 3L)), 7)))) | 0x54L) && g_968) <= l_971));
                    }
                    else
                    {
                        int l_1030 = 7L;
                        l_1030 = (p_21 , ((((safe_rshift_func_uint8_t_u_s(l_1028, 2)) < (!((g_136 == g_639) && g_968))) , (p_22 >= p_23)) == ((g_170[4][0][3] <= ((p_24 == g_1029) ^ p_24)) >= g_170[g_171][g_219][(g_171 + 1)])));
                        return l_971;
                    }
                }
                else
                {
                    int l_1040 = 0x91E3F40AL;
                    int l_1041 = 4L;
                    for (g_239 = 1; (g_239 <= 7); g_239 += 1)
                    {
                        int i, j;
                        l_967 = ((safe_lshift_func_uint16_t_u_s((0x43L < ((((0xF9AD284FL && (safe_lshift_func_uint8_t_u_u(l_957[g_171][(g_171 + 1)], (((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((1L ^ (g_1039[5] = (g_348 = (l_976[g_239] >= 65531UL)))), (p_24 , (-1L)))) | (~(l_1040 = 255UL))), l_971)) , 0x55C5L) && g_348)))) ^ 0x89E4L) >= p_21) == l_1041)), 12)) > l_1002);
                        return l_1042;
                    }
                    return l_947;
                }
            }
        }
        g_1029 = (+(+p_20));
    }
    l_1052[0][2] = func_36((l_958 = l_950), (func_100(((((safe_sub_func_int32_t_s_s((+p_23), g_386)) >= ((func_83((l_979 = func_83(l_1045, l_950, ((safe_mod_func_int16_t_s_s((g_1039[6] = (l_950 != (p_24 , ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_968, 2)), 10)) != (g_164 | p_20))))), 0x8195L)) || (-1L)), g_171)), l_950, g_919, g_248) , 0x990BL) && l_979)) < g_348) && 65527UL), g_386) , l_950), l_987, l_987);
    return p_24;
}







static short func_25(int p_26, short p_27, unsigned char p_28, char p_29)
{
    unsigned short l_772 = 0x8025L;
    int l_773[1];
    unsigned short l_774[4] = {65535UL, 1UL, 65535UL, 1UL};
    short l_788 = 0x614BL;
    int l_885 = 0xA978B7C1L;
    unsigned l_907[1];
    int i;
    for (i = 0; i < 1; i++)
        l_773[i] = 0xDEA2FDEFL;
    for (i = 0; i < 1; i++)
        l_907[i] = 0xF681BABAL;
    l_774[3] = ((l_773[0] = l_772) & p_29);
    l_773[0] = (~(0x480B6FDCL || (safe_add_func_uint16_t_u_u(p_29, (-1L)))));
    for (g_248 = 0; (g_248 <= 12); g_248++)
    {
        unsigned short l_779 = 7UL;
        int l_782 = 0x3C297572L;
        unsigned l_783 = 7UL;
        l_783 = (l_782 = (p_28 , (func_83((l_779 = l_773[0]), p_27, p_26, p_28) <= (safe_lshift_func_int16_t_s_s(((l_772 | g_348) , (-4L)), l_774[0])))));
    }
    for (p_29 = 0; (p_29 == 27); p_29 = safe_add_func_uint8_t_u_u(p_29, 9))
    {
        unsigned l_789 = 0xA4D7971CL;
        int l_790[4][10][4] = {{{0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}}, {{0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}}, {{0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}}, {{0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}, {0xB8A80948L, 0xF9F7A78DL, 0x1592AA36L, 0xB80FA93DL}}};
        unsigned l_848 = 0x0D6719C0L;
        int l_906 = (-3L);
        int l_938 = 0x7213BF0BL;
        int i, j, k;
        for (g_50 = 0; (g_50 <= 3); g_50 += 1)
        {
            unsigned l_828 = 0xD6A918A3L;
            int l_860[9][9][3] = {{{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}, {{1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}, {1L, (-1L), 0x27106A28L}}};
            int l_861 = 0xE04BC876L;
            unsigned char l_878[9][2];
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 2; j++)
                    l_878[i][j] = 255UL;
            }
            g_239 = l_774[3];
            for (g_288 = 0; (g_288 >= 0); g_288 -= 1)
            {
                int l_810 = 1L;
                char l_827 = 0x8EL;
                int l_886[10] = {7L, 7L, 0x7AEB9C64L, 7L, 7L, 0x7AEB9C64L, 7L, 7L, 0x7AEB9C64L, 7L};
                int i, j, k;
                if (((((g_170[(g_288 + 2)][g_288][(g_288 + 2)] == 0x3818E1B6L) ^ func_3((!(safe_lshift_func_uint8_t_u_s(((g_248 = (g_630 | g_170[4][0][2])) || func_3((0L || (0L ^ 7UL)), func_3((((l_788 && (l_789 = g_15)) ^ 0x7EL) & l_774[0]), g_170[(g_288 + 2)][g_288][(g_288 + 2)], p_29), g_170[(g_288 + 2)][g_288][(g_288 + 2)])), g_219))), l_790[1][3][3], g_14)) >= 7UL) , 0x16EDF8AEL))
                {
                    int l_791 = (-10L);
                    int l_809 = 0xCF050FC5L;
                    int i;
                    if ((l_773[g_288] = ((p_28 = l_791) != (safe_lshift_func_int16_t_s_s((!(g_171 , p_27)), 5)))))
                    {
                        int l_806[7] = {1L, 1L, 0xF6CF5F48L, 1L, 1L, 0xF6CF5F48L, 1L};
                        int l_807 = 0xF72E1131L;
                        int l_808 = 0L;
                        int i;
                        g_239 = (g_171 <= 0x1AL);
                        l_790[1][1][3] = l_773[g_288];
                        l_810 = (((safe_add_func_int32_t_s_s(6L, l_791)) == ((safe_lshift_func_uint8_t_u_u((l_809 = (p_29 , (safe_add_func_uint16_t_u_u(((((l_774[g_50] = g_56) & ((!((safe_sub_func_uint8_t_u_u((p_29 && ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_806[1], (((l_808 = (l_807 = p_29)) , g_630) > ((g_50 > 0x04L) , g_170[(g_288 + 2)][g_288][(g_288 + 2)])))), p_27)) || g_93) | p_29) > 7UL)), 0xF6L)) != g_170[3][1][1])) ^ p_29)) == l_791) < l_789), l_772)))), 5)) ^ 4294967286UL)) && g_15);
                        l_828 = (g_239 = (!(safe_sub_func_int8_t_s_s((g_93 = ((safe_lshift_func_uint16_t_u_u(0UL, 9)) == (safe_rshift_func_uint8_t_u_s(func_3(func_112(g_15, g_348, (~((((((p_29 && (((g_50 <= (((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(0x6FE423F2L, (safe_add_func_int32_t_s_s((func_3(g_395, ((((l_790[1][3][3] = g_136) , (safe_rshift_func_int16_t_s_u(l_773[g_288], 6))) == g_239) != p_28), l_772) ^ 0x8A6B9766L), p_26)))) > l_827), 6)) > 0x85C76A7DL) | 0x4AL)) , 0x9417L) <= p_29)) || 0L) < g_238) < l_809) , g_639) || l_807)), g_50), g_56, g_288), p_29)))), 0xBDL))));
                    }
                    else
                    {
                        unsigned short l_829 = 0x8E25L;
                        g_62 = l_829;
                        l_791 = (safe_sub_func_int16_t_s_s((g_171 , (safe_lshift_func_int8_t_s_s(g_56, (((l_829 != ((func_3(l_791, ((g_15 = 0x28L) , ((safe_add_func_int16_t_s_s(p_29, (((l_809 = g_50) || g_630) != (l_773[0] = 0L)))) ^ 0L)), p_27) > l_791) > g_164)) == l_810) , p_26)))), p_27));
                    }
                    if (g_630)
                        break;
                    for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
                    {
                        int i;
                        l_809 = l_774[g_7];
                        if (l_774[(g_288 + 2)])
                            continue;
                        return g_170[3][1][0];
                    }
                }
                else
                {
                    unsigned l_852 = 0x38A8F6C3L;
                    int l_862 = 0xE70E82B7L;
                    int l_864[7][7][5] = {{{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}, {{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}, {{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}, {{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}, {{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}, {{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}, {{0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}, {0xF3D0B9C1L, 0xB404D78CL, 0x1EACBF80L, 0x7290DEA5L, 0xADA96E88L}}};
                    int i, j, k;
                    if (((safe_mod_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((-2L), g_50)) & (((l_810 = (safe_lshift_func_int8_t_s_u(0x81L, 6))) == ((((g_164 < (g_14 ^ ((safe_lshift_func_uint16_t_u_s(func_3((((safe_rshift_func_uint8_t_u_s(g_171, 3)) && (((l_773[0] = l_774[1]) <= g_56) && (((safe_rshift_func_int16_t_s_u(((p_27 = (((((l_848 , g_62) >= l_848) <= 0x166793A8L) >= 0L) || 0x34L)) , l_828), l_827)) ^ 0xEFFA251BL) , g_93))) == g_170[4][0][2]), l_788, p_28), 8)) == l_827))) > 0L) , g_56) || g_15)) ^ 9L)) ^ p_28), p_29)) < g_630))
                    {
                        short l_855 = (-1L);
                        int l_863 = 2L;
                        l_790[1][3][3] = ((safe_unary_minus_func_uint16_t_u(g_219)) , ((safe_mod_func_int32_t_s_s(p_28, (((l_852 != g_62) >= (safe_add_func_int32_t_s_s(g_171, (p_26 > l_855)))) & (safe_rshift_func_uint16_t_u_s(func_3((safe_add_func_int32_t_s_s((((func_3((g_14 || g_50), g_62, g_630) || p_28) | l_855) == l_852), g_248)), g_238, g_386), p_28))))) > p_28));
                        if (p_27)
                            break;
                        l_864[6][6][3] = func_3(g_239, ((l_862 = (l_861 = l_860[8][0][0])) >= (((g_14 | ((~((g_348 = func_3((l_863 = 0xF7FCDB03L), l_860[8][0][0], l_855)) , (l_773[0] = l_772))) , ((p_27 < p_26) & 0xD0ACL))) && p_27) && l_790[1][8][1])), l_810);
                        g_239 = (func_3(p_28, (((safe_sub_func_uint32_t_u_u(0x4D9CE193L, g_7)) > (l_886[6] = ((safe_sub_func_int16_t_s_s((l_810 = (((((((g_248 = g_170[0][1][2]) < (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(func_3((((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((l_878[1][0] ^ (p_26 != ((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(((!(l_827 != g_14)) || (safe_add_func_int8_t_s_s((0xBBB6C937L < 4294967295UL), g_238))), g_171)) && l_863) == l_860[4][3][2]), (-1L))) , l_885))), l_828)) , l_827) && l_789), g_56)))) != l_790[1][7][3]) | g_15), g_348, p_29), 0xE768140CL)) , g_170[4][1][3]), p_29))) , 0x5C388952L) , 0UL) || 0xAC5253DAL) & p_29) >= p_28)), l_885)) >= g_7))) >= p_28), p_28) , g_500);
                    }
                    else
                    {
                        unsigned l_889 = 0x5320C2F8L;
                        int l_914 = 0x3C7280DCL;
                        l_790[2][7][1] = (l_907[0] = ((safe_add_func_int8_t_s_s(((l_889 <= g_239) > g_170[4][0][2]), (safe_lshift_func_uint8_t_u_u((p_28 >= ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((g_500 = (safe_mod_func_int16_t_s_s(((g_238 = 0x83L) , ((safe_mod_func_int32_t_s_s(((g_15 ^ g_93) != (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_56 = p_27), 3)), (safe_rshift_func_int16_t_s_u(func_3(g_238, g_395, p_28), 13))))), p_29)) & g_164)), 1L))), p_27)) < p_26), g_219)) , g_171)), l_906)))) == g_171));
                        if (l_828)
                            continue;
                        l_790[1][3][3] = g_56;
                        l_914 = (safe_mod_func_uint16_t_u_u(p_26, (safe_add_func_uint16_t_u_u(l_828, (safe_mod_func_int8_t_s_s(l_906, (-5L)))))));
                    }
                    if (g_164)
                    {
                        g_239 = (l_790[0][9][1] = (p_27 <= (l_810 = (l_773[0] = (!(l_886[6] != ((func_112(((safe_mod_func_uint32_t_u_u((p_29 <= (l_861 = g_15)), (l_852 ^ g_93))) || p_27), ((safe_rshift_func_uint8_t_u_u((((p_26 | (p_29 <= p_29)) != l_878[2][1]) > (-10L)), 6)) , 0x13L), p_29, p_29) , p_26) ^ g_50)))))));
                        return g_248;
                    }
                    else
                    {
                        if (g_62)
                            break;
                        l_861 = p_28;
                        return g_919;
                    }
                }
                for (g_14 = (-2); (g_14 >= (-15)); g_14 = safe_sub_func_int32_t_s_s(g_14, 1))
                {
                    g_919 = (l_790[2][1][3] = (l_773[0] >= g_348));
                }
            }
            l_885 = (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((l_790[1][3][3] >= ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(4L, l_860[5][7][2])), (l_773[0] = (p_28 ^ p_26)))), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_938 = (-2L)), (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((p_27 = ((g_171 = p_27) , g_919)) >= (p_28 > p_29)), p_29)) >= l_907[0]), 5L)))), 0)))) < p_26)) <= l_906), p_28)) & 0x26L), 7));
            for (l_848 = 0; (l_848 <= 1); l_848 += 1)
            {
                int i, j, k;
                return g_170[l_848][l_848][g_50];
            }
        }
    }
    return g_500;
}







static unsigned char func_36(int p_37, unsigned p_38, int p_39, unsigned short p_40)
{
    unsigned l_49 = 0x2DB60270L;
    int l_57[2];
    char l_90[8] = {0x85L, 0x42L, 0x85L, 0x42L, 0x85L, 0x42L, 0x85L, 0x42L};
    unsigned char l_745 = 0xF2L;
    unsigned char l_758 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_57[i] = 0x5E2E4BCBL;
    if ((0x57L & (0xB0C7B249L && g_7)))
    {
        unsigned char l_55 = 0UL;
        int l_63 = 1L;
        int l_98 = 0x0E761D3FL;
        for (p_40 = 0; (p_40 <= 42); p_40 = safe_add_func_int32_t_s_s(p_40, 7))
        {
            int l_64 = 0x6F2DB44EL;
            short l_731 = 4L;
            l_57[1] = (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((0xE9L > (g_50 = l_49)), 5)) , (((safe_mod_func_uint32_t_u_u((func_3((((l_57[1] = (g_56 = (l_55 = (safe_lshift_func_int16_t_s_s(0xE480L, (g_14 > p_37)))))) <= (p_39 , (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_62 = func_3(((p_39 && g_14) , 0x880E1B4AL), p_40, g_14)), 0UL)), 0x4BCAL)))) < g_50), p_39, l_63) ^ l_63), 0x0BF28884L)) ^ 0x80411BC3L) & p_39)), l_63)), 6UL));
            l_64 = l_49;
            l_57[1] = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_55, 2)), 5)), (l_63 = g_56))) , (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((l_63 = (((safe_rshift_func_uint16_t_u_u(func_83((g_50 < ((safe_mod_func_int32_t_s_s((((((func_3(g_15, func_3((l_90[1] , ((safe_mod_func_int8_t_s_s(((l_57[1] = (g_93 = 0x2093L)) > func_94(l_98, g_14, func_3(l_55, g_50, p_37))), l_731)) || 6L)), g_15, g_50), l_731) && l_64) >= l_63) , g_170[4][0][3]) && g_219) > p_38), g_15)) > 0xA3L)), g_14, g_14, l_49), 13)) > p_37) | (-1L))) > p_37) || l_731) && p_40), 0xFFL)), g_14))) | 0L) ^ g_14) , 0x7882L) ^ g_15), 0)), l_55)), g_50));
        }
    }
    else
    {
        short l_754 = (-1L);
        int l_755[8][10] = {{4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}, {4L, 0xC09182BDL, 8L, 0xA209FE77L, 8L, 0xC09182BDL, 4L, 0x19512955L, (-5L), 0x9A575153L}};
        int l_770 = 0xB03AD21FL;
        int i, j;
        l_745 = (p_40 >= 2UL);
        l_57[1] = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_639 , ((2UL >= g_7) && (g_630 | (l_755[1][3] = (1UL > (((g_500 || ((safe_lshift_func_uint8_t_u_s(l_754, 1)) >= ((0L && g_238) , g_500))) >= 0x97L) > p_40)))))), p_39)), 0x1D72L));
        l_57[0] = ((+(p_38 & func_100(l_755[1][3], (safe_mod_func_int32_t_s_s(g_164, (l_758 , ((((((safe_mod_func_uint16_t_u_u(((+(safe_lshift_func_uint16_t_u_s((((g_500 = ((safe_add_func_int16_t_s_s(g_239, (((safe_rshift_func_uint8_t_u_u(((func_3(l_90[3], ((safe_unary_minus_func_uint16_t_u(l_90[6])) ^ ((safe_add_func_uint8_t_u_u((g_248 , (g_50 = (l_770 = g_630))), 0x9EL)) | 1UL)), p_40) || l_758) & p_38), g_15)) < g_14) == p_39))) || g_500)) < g_238) || l_90[1]), g_93))) , 0x8E24L), g_136)) < l_90[7]) , (-1L)) , 0xCD01L) || g_171) & g_93))))))) <= l_57[0]);
    }
    return l_57[1];
}







static unsigned short func_83(unsigned short p_84, unsigned char p_85, char p_86, unsigned p_87)
{
    char l_734 = 0x14L;
    for (g_288 = 16; (g_288 >= (-20)); g_288--)
    {
        unsigned l_741 = 7UL;
        int l_744 = 0L;
        g_239 = ((l_744 = func_112(p_85, (l_734 & (((p_87 ^ (safe_sub_func_int16_t_s_s(func_3((safe_lshift_func_uint16_t_u_s(l_741, 4)), (func_3(func_112(g_500, l_741, l_741, (safe_sub_func_uint8_t_u_u((0x8063E04CL && ((((l_741 != l_734) <= g_93) <= p_86) & g_164)), (-2L)))), p_84, p_86) <= g_239), g_239), p_87))) > 0UL) ^ g_602)), g_14, p_87)) > g_639);
        return g_386;
    }
    return p_86;
}







static unsigned short func_94(int p_95, int p_96, unsigned p_97)
{
    short l_99[8][5] = {{(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}, {(-8L), 0x7856L, (-8L), 0x9E3CL, 0x023AL}};
    int i, j;
    p_96 = ((~(l_99[6][4] && func_100(g_56, (safe_mod_func_uint16_t_u_u(g_14, l_99[6][4]))))) <= l_99[6][4]);
    p_96 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0xE120L, 1UL)), (g_348 = l_99[2][1])));
    p_96 = p_97;
    return l_99[0][3];
}







static short func_100(unsigned char p_101, char p_102)
{
    int l_107 = 0x978B3CF7L;
    int l_122 = 0x27CD67D5L;
    int l_138 = 0x47BF5080L;
    char l_191[8][1] = {{5L}, {5L}, {5L}, {5L}, {5L}, {5L}, {5L}, {5L}};
    unsigned l_215 = 0UL;
    char l_217[9][4] = {{0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}, {0L, 1L, (-2L), 0x45L}};
    unsigned short l_362 = 0x104FL;
    short l_372 = 0L;
    unsigned l_497 = 4294967295UL;
    unsigned short l_706 = 0xE36CL;
    unsigned short l_707 = 0x918AL;
    int i, j;
    if ((safe_rshift_func_uint16_t_u_u(l_107, 0)))
    {
        char l_117 = 0x0CL;
        unsigned l_137 = 0x26F2DC12L;
        int l_139 = 0xD01B0F43L;
        unsigned l_214 = 4294967295UL;
        int l_237 = (-9L);
        unsigned l_287 = 0x8A1A9F44L;
        unsigned l_312[8][10][3] = {{{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}, {{0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}, {0x6D2DAACFL, 8UL, 0x8A8730B5L}}};
        int i, j, k;
        if ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((func_112((l_139 = (g_62 = func_3(l_117, ((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_122 = g_62), (-5L))), ((-6L) && (l_138 = (safe_sub_func_int16_t_s_s(l_117, (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u((l_117 , (safe_add_func_uint32_t_u_u(((g_56 , (func_3(((g_136 = (((safe_lshift_func_uint16_t_u_u(p_101, 12)) , (safe_rshift_func_int8_t_s_s((l_107 <= l_107), g_15))) || l_107)) < p_102), l_137, l_107) | g_56)) | l_117), p_102))), g_50)))), p_101)))))))) != 0xBAL), p_102))), l_107, p_102, l_107) > 0UL), 5)), l_107)))
        {
            int l_195 = 0xC952AE48L;
            int l_218 = 0x82BABF48L;
            if (((((safe_sub_func_uint8_t_u_u(p_102, (safe_unary_minus_func_int32_t_s((((((g_171 <= ((l_122 = 0x9A663178L) | (safe_add_func_uint16_t_u_u(p_102, 8L)))) && (((p_102 , (g_62 , l_139)) | (g_136 , l_107)) , g_170[4][0][2])) || g_136) && 252UL) != 0UL))))) & p_101) < l_191[6][0]) <= p_102))
            {
                unsigned l_194[9] = {0x55A95E6AL, 0x55A95E6AL, 0xC389E0A6L, 0x55A95E6AL, 0x55A95E6AL, 0xC389E0A6L, 0x55A95E6AL, 0x55A95E6AL, 0xC389E0A6L};
                int i;
                l_195 = (safe_mod_func_int32_t_s_s(l_194[0], g_14));
            }
            else
            {
                int l_216 = 0xC6079C38L;
                g_62 = (l_218 = (l_217[4][3] = ((g_170[2][0][3] != (safe_add_func_int32_t_s_s(func_3((l_117 == g_50), (l_138 , (func_3(g_14, (func_3((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((((!0x5CA3L) ^ (safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_3(l_138, (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((+(l_122 , func_3(((safe_sub_func_int16_t_s_s(((g_7 = p_102) == 0x16EBL), (-1L))) > g_62), p_102, l_214))), g_62)), 8)) > g_15) | l_195), g_62), p_101)), 4)) ^ p_102) & p_102) , 0x5F21L) == l_195), 10))) >= l_215) | 0xABL), p_101)), 0)), p_102, g_136) , (-1L)), p_101) >= g_164)), l_216), 0x3F4ACB36L))) > g_50)));
                for (l_195 = 0; (l_195 <= 0); l_195 += 1)
                {
                    g_219 = l_191[5][0];
                    return l_139;
                }
            }
        }
        else
        {
            unsigned l_222 = 4294967290UL;
            int l_246[5][3];
            char l_257 = 0x17L;
            int l_267[6][8] = {{1L, 1L, (-1L), 2L, (-9L), 0x03A96076L, 9L, 1L}, {1L, 1L, (-1L), 2L, (-9L), 0x03A96076L, 9L, 1L}, {1L, 1L, (-1L), 2L, (-9L), 0x03A96076L, 9L, 1L}, {1L, 1L, (-1L), 2L, (-9L), 0x03A96076L, 9L, 1L}, {1L, 1L, (-1L), 2L, (-9L), 0x03A96076L, 9L, 1L}, {1L, 1L, (-1L), 2L, (-9L), 0x03A96076L, 9L, 1L}};
            unsigned short l_278 = 65527UL;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 3; j++)
                    l_246[i][j] = (-1L);
            }
            for (g_62 = 0; (g_62 < 26); g_62 = safe_add_func_int16_t_s_s(g_62, 5))
            {
                char l_245 = 0x3DL;
                for (g_219 = 0; (g_219 <= 1); g_219 += 1)
                {
                    char l_223[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_223[i] = 0x76L;
                    l_139 = l_222;
                    l_223[0] = g_62;
                    if ((safe_mod_func_int8_t_s_s(((((safe_unary_minus_func_uint16_t_u(l_222)) > l_223[0]) || p_102) <= (safe_rshift_func_int8_t_s_u(l_139, 0))), (g_56 = (+(safe_rshift_func_uint16_t_u_s((p_101 && (safe_rshift_func_uint8_t_u_u((g_62 == func_3(((p_101 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((l_237 = g_15) | (0xAF47B704L > (((g_238 = g_50) , g_171) , 0x58B35087L))), g_14)), g_219))) , p_101), g_50, p_102)), 5))), 8)))))))
                    {
                        int l_240 = 0x08BF7B59L;
                        l_240 = (g_239 = l_138);
                        l_245 = ((safe_rshift_func_int16_t_s_s((0xFDL & l_191[5][0]), 2)) >= (((0xC4D48E72L & 0x199CA37CL) & (g_164 , (safe_rshift_func_int8_t_s_s(g_164, 5)))) , (~0xEDA8L)));
                        g_239 = l_222;
                        l_240 = p_101;
                    }
                    else
                    {
                        l_246[4][2] = p_102;
                        if (l_139)
                            break;
                    }
                    for (l_237 = 1; (l_237 >= 0); l_237 -= 1)
                    {
                        int i, j, k;
                        return g_170[(l_237 + 3)][l_237][l_237];
                    }
                }
                g_239 = (p_101 , g_170[4][0][2]);
                for (g_239 = 1; (g_239 >= 0); g_239 -= 1)
                {
                    int l_247[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_247[i] = 0L;
                    l_246[4][1] = l_137;
                    if (l_247[2])
                        continue;
                    for (l_237 = 0; (l_237 <= 1); l_237 += 1)
                    {
                        int i, j, k;
                        g_248 = g_170[l_237][g_239][(l_237 + 2)];
                    }
                }
            }
            if ((func_3((safe_mod_func_int8_t_s_s((l_237 < l_191[6][0]), ((((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_214, l_215)) && (safe_lshift_func_int16_t_s_s((func_112(l_257, (safe_rshift_func_int8_t_s_u((!func_112(((safe_sub_func_uint16_t_u_u(l_246[4][2], 0xBAC9L)) < (safe_add_func_uint16_t_u_u(l_214, g_219))), p_101, g_50, g_170[4][0][2])), 6)), p_101, g_56) || 0x6282E646L), l_257))), 0xE2L)) , p_101) == l_222) && 0x92DA7043L))), g_14, g_15) | g_56))
            {
                int l_264[4][2];
                int l_289 = 0x4B4C2999L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_264[i][j] = (-4L);
                }
                l_122 = (((g_136 ^ (((g_238 = p_102) <= func_3((!((l_264[0][0] || 1L) & 246UL)), (safe_sub_func_int32_t_s_s(0x481F414DL, l_222)), l_267[0][4])) , 0xA8B1A90EL)) && 1L) >= p_102);
                l_289 = ((p_102 ^ (g_288 = (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_56 || func_112((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_101, (safe_sub_func_int16_t_s_s((l_278 , ((l_222 && ((p_102 >= (((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((l_264[0][0] , (((l_122 = (l_138 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(func_112(((l_139 = 2UL) , ((g_14 || 0xF52832ABL) , l_257)), p_102, g_136, l_117), g_50)), g_219)))) , 0xEF4EL) ^ g_50)) == l_287), 0xAE18L)), g_15)) ^ 1L) , g_248)) <= l_257)) & g_239)), l_264[0][0])))), p_102)) < 0x30468DE3L) , l_264[1][0]), l_246[4][2], p_102, g_50)), 1UL)), p_102)))) , (-3L));
            }
            else
            {
                char l_292[3][2][5];
                int l_295 = 0xCFB04359L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_292[i][j][k] = 0x5FL;
                    }
                }
                l_237 = (g_62 = (safe_mod_func_int16_t_s_s((l_292[0][0][1] = func_3(l_257, p_102, l_117)), (safe_mod_func_uint32_t_u_u(func_3((l_295 , ((g_239 = g_239) , 0xEB0D5D64L)), ((safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(0xC115L, 0)) , (safe_mod_func_int32_t_s_s((0x9FL ^ 0x29L), 0x83041FB2L))) ^ p_101), p_102)) ^ p_102), p_102), p_102)))));
                l_267[4][6] = 0x23AABD78L;
            }
            l_246[2][1] = func_3(p_101, (g_56 , func_3(g_170[0][0][2], (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0UL, (p_101 || g_239))), (safe_add_func_uint32_t_u_u((l_138 = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(func_3((g_171 = (g_50 != g_62)), (g_14 & g_239), p_102), 0x0A51D1B7L)), p_101)) | 0x92CAL)), 0xDD6611CEL)))), l_312[5][2][0])), g_56);
        }
        for (p_101 = 0; (p_101 <= 1); p_101 += 1)
        {
            l_138 = 0x5A0C25E5L;
            return p_102;
        }
    }
    else
    {
        unsigned l_319 = 4294967295UL;
        int l_320 = 3L;
        unsigned char l_397 = 0x75L;
        int l_405 = 0xBC567CDCL;
        int l_407 = 0xEA51AAA4L;
        char l_479[4] = {0L, (-3L), 0L, (-3L)};
        int l_529 = 0x863FD924L;
        int i;
        for (g_238 = (-3); (g_238 < 6); ++g_238)
        {
            l_122 = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_102, 2)), l_215));
        }
        if (l_319)
        {
            unsigned char l_350 = 1UL;
            int l_370[9] = {0x7E6AB817L, 0xDC7A7DE5L, 0x7E6AB817L, 0xDC7A7DE5L, 0x7E6AB817L, 0xDC7A7DE5L, 0x7E6AB817L, 0xDC7A7DE5L, 0x7E6AB817L};
            int l_426 = 0x2E95BB55L;
            int l_480 = 0xEB93BDE2L;
            int i;
            g_62 = (l_320 = 0xE0CF0976L);
            for (l_138 = (-25); (l_138 > 1); ++l_138)
            {
                int l_349 = 0x5B127DF0L;
                int l_371 = 0x394CAB00L;
                short l_406 = 1L;
                if ((g_239 = (p_102 == (g_170[4][0][2] = (safe_rshift_func_int8_t_s_u(func_3(func_112(g_170[4][0][2], (l_217[4][3] > (((safe_rshift_func_uint16_t_u_s((l_319 != ((p_102 != (safe_rshift_func_uint16_t_u_u(0xF257L, g_14))) || func_3(l_320, ((g_14 == p_101) || 1L), l_138))), 6)) , g_171) || p_101)), g_7, l_191[6][0]), l_320, g_14), 3))))))
                {
                    for (p_102 = 0; (p_102 < (-16)); p_102--)
                    {
                        l_122 = 0x3CDE7710L;
                    }
                }
                else
                {
                    unsigned l_351 = 0x28C3E584L;
                    int l_363[2];
                    int l_373 = 0x7147C9C7L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_363[i] = 0x1A0B109EL;
                    for (p_102 = 0; (p_102 >= 0); p_102 -= 1)
                    {
                        int l_339 = 0L;
                        int i, j;
                        l_320 = (l_191[(p_102 + 6)][p_102] ^ (((((~((safe_lshift_func_int8_t_s_u(((l_122 = (safe_lshift_func_int8_t_s_u(func_112(func_112((safe_add_func_uint16_t_u_u(((((g_171 || (0UL < p_101)) && func_3((safe_lshift_func_int16_t_s_u(g_170[0][0][0], func_3(func_3(((l_339 = g_248) == (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_348 = func_3(func_3(((safe_mod_func_int8_t_s_s((l_217[4][3] != (safe_rshift_func_int8_t_s_s(func_3(((g_15 , (((((0xAFF7DCAAL | g_288) | l_319) > 0x9476L) == 0x352B3691L) , g_50)) , 4294967295UL), l_215, g_238), 2))), g_7)) , p_102), p_102, p_101), g_238, g_171)), l_349)), p_101))), l_350, g_50), g_56, l_191[(p_102 + 6)][p_102]))), p_101, l_349)) | p_102) == g_248), p_102)), p_102, p_101, l_350), l_350, l_351, l_217[4][0]), g_248))) != 65535UL), g_248)) | l_351)) || 5UL) >= 0x4A2FL) == 6UL) >= p_101));
                        g_239 = func_112(g_238, (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((0x54L != (-5L)), ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(l_350, g_238)) | (safe_rshift_func_uint8_t_u_s(0x62L, 5))), (l_320 == ((p_101 , g_219) > l_349)))) || l_350))), p_101)), p_102, g_56);
                    }
                    if (l_362)
                    {
                        short l_374[5][10][5] = {{{0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}}, {{0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}}, {{0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}}, {{0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}}, {{0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}, {0x5615L, 7L, (-1L), 9L, 1L}}};
                        unsigned char l_375 = 0xB0L;
                        int i, j, k;
                        if (p_102)
                            break;
                        if (l_351)
                            continue;
                        l_374[2][6][1] = ((l_363[1] || (+(safe_mod_func_uint16_t_u_u(4UL, func_3(l_349, (p_101 != g_7), (safe_mod_func_int16_t_s_s((l_350 , (0x5C39C28EL & (!((safe_rshift_func_int16_t_s_s(((l_371 = (l_363[1] = func_3(((l_370[5] = l_349) <= 0UL), l_215, g_219))) || l_372), 6)) && 0L)))), 0x0D7AL))))))) , l_373);
                        l_375 = ((0UL || g_348) , l_320);
                    }
                    else
                    {
                        l_363[1] = (+(0x2A1D2CDCL != (g_248 = (l_371 = g_62))));
                        l_363[1] = (((0x2332L >= l_370[5]) > (func_112((func_112(l_319, p_101, l_371, l_363[1]) && (((p_101 = ((safe_sub_func_int16_t_s_s(func_112(l_319, (g_62 , g_50), g_239, p_102), 1UL)) ^ 0x818842DBL)) , l_320) < g_248)), p_102, g_15, p_102) != g_50)) && g_14);
                        l_371 = 3L;
                        g_239 = ((l_363[1] != (0x96L >= (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((g_238 = g_164) != (l_320 = ((p_102 > ((((safe_sub_func_int32_t_s_s((g_62 = p_101), (safe_rshift_func_uint8_t_u_s(((l_319 >= g_386) , g_171), (248UL >= l_107))))) | 0L) & 0xFB4DL) <= l_319)) ^ l_351))), 7)) <= g_50), 0x6F14L)))) | p_102);
                    }
                    if (l_362)
                        break;
                    l_122 = l_363[0];
                }
                for (l_320 = 0; (l_320 <= 3); l_320 += 1)
                {
                    unsigned short l_387 = 0xFD1DL;
                    int l_390[1];
                    int l_396 = 0x53A32646L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_390[i] = 5L;
                    g_239 = (-1L);
                    l_390[0] = ((((l_387 = 0L) ^ ((safe_sub_func_uint32_t_u_u(7UL, ((0x5B738D30L == (((g_62 = ((+(l_390[0] <= (safe_rshift_func_uint16_t_u_s((l_122 , (l_370[5] = ((p_101 = l_370[5]) ^ (((((!(g_136 = ((func_3((l_319 , g_386), (l_217[(l_320 + 3)][l_320] = (((g_239 = l_350) <= p_102) <= g_395)), g_219) >= l_349) | l_370[5]))) != l_396) & 0xDCA3L) == l_122) > g_14)))), 1)))) > p_102)) < 0x64F176A5L) , (-1L))) , l_397))) | l_320)) , p_102) < l_371);
                    g_239 = (((l_396 = (func_3((l_407 = ((((safe_rshift_func_uint8_t_u_s(((g_62 = (safe_unary_minus_func_uint16_t_u((g_170[0][1][1] <= p_101)))) < ((safe_mod_func_int16_t_s_s(((l_405 = 0x7FE9L) <= (func_3(g_248, l_349, p_101) , (p_101 , 0x1EFEL))), l_371)) >= p_101)), l_406)) != 0UL) ^ p_102) == 0xD36BL)), p_101, g_239) || l_390[0])) , l_350) == g_164);
                    l_405 = g_136;
                    for (l_122 = 1; (l_122 >= 0); l_122 -= 1)
                    {
                        int l_429 = 1L;
                        int i, j, k;
                        if (p_101)
                            break;
                        l_429 = ((safe_sub_func_uint16_t_u_u(((+(g_170[2][0][2] , (((g_170[(l_122 + 2)][l_122][l_122] = ((((safe_add_func_uint8_t_u_u((g_238 = (safe_mod_func_uint16_t_u_u((func_112(((safe_sub_func_uint8_t_u_u((!g_171), ((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s(func_3(l_370[5], ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((l_396 = (safe_sub_func_uint32_t_u_u(0x370EED99L, ((l_426 = g_248) , (safe_rshift_func_uint8_t_u_u((p_101 & p_102), 1)))))) < ((p_101 & (((0x8947L <= p_102) && l_387) && l_370[5])) != (-1L))), 0xF3L)), g_238)) >= (-1L)), p_102), g_288)) >= p_102) , g_170[4][0][2]) & 1L), l_370[3])) & 0L))) , 0x558630AAL), g_171, g_288, p_101) ^ l_405), g_386))), 0x7DL)) , p_101) >= l_320) ^ 0xECCEL)) >= g_386) , l_362))) > g_239), p_101)) > 0xC6L);
                    }
                }
                if (p_102)
                    continue;
                for (g_386 = 0; (g_386 <= 3); g_386 += 1)
                {
                    int l_434 = 0L;
                    unsigned short l_464 = 0UL;
                    int i, j;
                    if (func_3((l_217[(g_386 + 1)][g_386] , p_102), ((((-7L) | ((l_349 ^ (-1L)) | p_102)) < (((l_434 = (safe_add_func_int8_t_s_s(func_3((l_122 = p_101), g_248, ((safe_sub_func_int32_t_s_s((0x642DF28AL < g_56), 0xCBFFB4B3L)) , p_101)), g_170[2][0][3]))) , p_101) > p_102)) < (-7L)), p_101))
                    {
                        unsigned l_449 = 4294967295UL;
                        int l_450 = 0L;
                        l_450 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_14 >= ((safe_lshift_func_int16_t_s_s(((func_112(l_362, (p_102 != (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_349 == (safe_sub_func_int32_t_s_s(((l_122 = 0x026EL) || (!(g_170[1][1][0] ^ (func_3((((g_248 , p_102) , (safe_rshift_func_int16_t_s_s((l_215 >= g_248), p_102))) & g_348), p_102, g_171) , 0x2AL)))), g_248))), 0x8EL)), p_102))), l_191[6][0], p_101) , 0x887E6014L) | p_101), 15)) | 1L)), l_449)), 1L));
                    }
                    else
                    {
                        int l_463 = 0xC893D892L;
                        int i, j;
                        l_122 = (((safe_rshift_func_int16_t_s_u((l_434 = func_112((safe_mod_func_uint16_t_u_u((g_348 = p_102), g_395)), (((safe_add_func_int32_t_s_s(g_50, (safe_rshift_func_int8_t_s_s((l_217[(g_386 + 5)][g_386] = (((p_102 , ((+0xA59FD3DAL) || func_112(l_434, p_102, (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((g_7 | (g_288 & 8UL)), l_370[5])), 6)), l_463))) > l_397) <= g_219)), l_122)))) && l_370[5]) & g_50), p_102, l_464)), 5)) <= p_102) < l_464);
                        l_407 = (func_112(l_371, (p_102 < func_112(l_371, (!g_136), p_102, ((p_101 == (func_3(l_370[5], (g_56 = l_426), l_217[(g_386 + 1)][g_386]) == g_238)) , l_217[(g_386 + 1)][g_386]))), l_370[5], l_217[(g_386 + 5)][g_386]) | 0x9EL);
                    }
                    for (g_136 = 0; (g_136 >= 0); g_136 -= 1)
                    {
                        int i, j;
                        if (l_191[(g_136 + 7)][g_136])
                            break;
                    }
                }
            }
            g_62 = l_370[6];
            l_370[5] = ((g_386 ^ g_14) <= (((safe_sub_func_uint16_t_u_u(((l_426 = g_7) | l_217[6][3]), func_3((((safe_add_func_uint16_t_u_u(1UL, (safe_mod_func_uint8_t_u_u(p_101, (safe_add_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(p_102, (safe_lshift_func_uint16_t_u_s(1UL, 14)))) , (g_239 = ((safe_lshift_func_int16_t_s_u(g_50, l_479[1])) > 0x02L))) > l_480) , 0x37CFL), p_101)))))) , 0xD2L) ^ p_101), g_164, p_102))) <= g_386) & l_217[3][1]));
        }
        else
        {
            unsigned l_489 = 0x9BD9B6EDL;
            int l_517[10] = {0x35D3C513L, 0x89995F9EL, 0x35D3C513L, 0x89995F9EL, 0x35D3C513L, 0x89995F9EL, 0x35D3C513L, 0x89995F9EL, 0x35D3C513L, 0x89995F9EL};
            int l_562 = 0x027FEC2BL;
            int i;
            for (g_171 = 0; (g_171 <= 1); g_171 += 1)
            {
                int l_501[7][5][3] = {{{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}, {{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}, {{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}, {{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}, {{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}, {{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}, {{(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}, {(-1L), 0x399DF287L, 0x08BEC183L}}};
                short l_561 = 0xEE50L;
                int l_568 = 0xF5828B36L;
                unsigned char l_640[6][3][1] = {{{0x02L}, {0x02L}, {0x02L}}, {{0x02L}, {0x02L}, {0x02L}}, {{0x02L}, {0x02L}, {0x02L}}, {{0x02L}, {0x02L}, {0x02L}}, {{0x02L}, {0x02L}, {0x02L}}, {{0x02L}, {0x02L}, {0x02L}}};
                int i, j, k;
                g_239 = (!(1UL > 4294967295UL));
                for (l_215 = 0; (l_215 <= 1); l_215 += 1)
                {
                    int l_490 = 0x3959D6D2L;
                    int i;
                    l_405 = func_3((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_479[g_171], p_101)), (safe_lshift_func_uint8_t_u_u(0xDBL, (safe_add_func_uint8_t_u_u(0x09L, g_56)))))), (l_490 = func_3((l_489 , (0x5EL > l_479[g_171])), g_288, l_479[g_171])), p_102);
                    for (l_372 = 1; (l_372 >= 0); l_372 -= 1)
                    {
                        int i, j, k;
                        l_138 = g_170[(g_171 + 2)][l_215][(l_372 + 1)];
                        return g_348;
                    }
                    for (l_489 = 0; (l_489 <= 1); l_489 += 1)
                    {
                        unsigned l_502 = 0UL;
                        int l_522 = (-1L);
                        l_502 = (func_3(g_170[4][0][2], (((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(g_136, (safe_add_func_int32_t_s_s((g_238 <= l_497), 5L)))), 10)) != (safe_mod_func_uint16_t_u_u(0x7FE0L, ((g_348 = g_395) && (l_501[3][4][0] = func_3((g_500 = (g_386 = func_3(g_50, g_15, g_7))), l_217[4][3], p_101)))))) , p_102), p_101) | 7UL);
                        g_239 = ((p_101 == ((l_517[6] = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((l_320 = (((safe_rshift_func_int8_t_s_u(func_3((g_386 = ((l_122 = g_170[3][0][1]) >= (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((l_502 & ((g_348 = ((((p_101 >= func_3(((l_497 == 0UL) == ((l_517[6] = (((g_348 && (safe_add_func_int8_t_s_s((-7L), g_386))) | g_62) , p_101)) & 0x8DL)), l_501[5][1][2], l_489)) < l_489) <= g_136) == g_7)) , l_489)), 1L)), 1L)), g_500)))), p_101, l_501[5][3][2]), 0)) && g_7) < g_170[3][1][3])) & 65535UL), 7)), l_405))) == p_101)) < g_164);
                        l_522 = (safe_lshift_func_int8_t_s_u((l_490 = (p_102 < g_288)), (safe_sub_func_int32_t_s_s((p_102 != l_517[6]), l_217[4][3]))));
                    }
                }
                g_62 = func_3((!(l_138 = p_101)), (g_15 >= 0x11D19A62L), ((((((safe_lshift_func_uint8_t_u_s((l_501[3][4][0] = (safe_add_func_int8_t_s_s(l_319, p_102))), g_171)) , g_248) | ((((((safe_add_func_int16_t_s_s(l_529, p_101)) >= p_102) , g_386) , (-10L)) | g_171) <= l_517[6])) & 0x62406EB5L) > p_102) , l_407));
                for (l_489 = 0; l_489 < 7; l_489 += 1)
                {
                    for (l_138 = 0; l_138 < 5; l_138 += 1)
                    {
                        for (l_397 = 0; l_397 < 3; l_397 += 1)
                        {
                            l_501[l_489][l_138][l_397] = 0xC0DCA462L;
                        }
                    }
                }
                for (p_101 = 0; (p_101 <= 1); p_101 += 1)
                {
                    short l_540 = 0x7717L;
                    unsigned char l_565[4][1] = {{0xFCL}, {0xFCL}, {0xFCL}, {0xFCL}};
                    int l_616 = 0x04482528L;
                    int l_617 = 0x3ADA9143L;
                    int i, j;
                    if (func_3(p_102, l_501[6][1][0], ((func_3(((g_170[4][1][1] != ((safe_add_func_int16_t_s_s(p_101, func_3(p_101, g_348, (0x91C26037L & (safe_rshift_func_uint8_t_u_s((l_497 , (safe_lshift_func_uint16_t_u_u(func_3(func_3(((((safe_mod_func_uint8_t_u_u(0xB7L, p_102)) > 0x71L) == g_7) , 0x405364EDL), p_102, p_102), p_101, g_171), 0))), 6)))))) | 0xADL)) , p_102), l_489, p_101) , 0L) , g_170[4][0][2])))
                    {
                        l_407 = l_320;
                        g_62 = (l_320 = (safe_sub_func_int16_t_s_s(func_3(l_540, func_3(p_101, (((func_3(p_101, l_517[6], ((safe_add_func_uint16_t_u_u(l_501[3][4][0], (safe_mod_func_int32_t_s_s(p_101, 0x2023EC3BL)))) , p_102)) || p_102) <= g_219) , g_248), p_101), g_136), 2L)));
                        l_138 = (g_239 = (g_219 ^ (((l_122 = func_3(p_102, ((l_517[6] = ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(p_101)), 6)) <= p_101)) > (~0xDBL)), ((func_3(((g_288 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_479[1], g_219)), p_102))) == (g_56 ^ 0x44EEC606L)), p_101, p_101) , p_102) <= 4294967287UL))) || 4294967295UL) ^ p_101)));
                    }
                    else
                    {
                        char l_552 = 2L;
                        g_239 = g_386;
                        return l_552;
                    }
                    if ((safe_sub_func_uint16_t_u_u(65530UL, (safe_rshift_func_uint8_t_u_s((p_102 || (l_517[6] = (safe_add_func_uint32_t_u_u(l_107, (safe_add_func_int16_t_s_s(l_561, p_101)))))), func_3((l_562 = p_102), (safe_sub_func_int8_t_s_s(l_565[1][0], 0x80L)), (((+1L) >= p_102) && 0xB34183E6L)))))))
                    {
                        l_501[4][0][1] = 0x86E02A33L;
                        return l_362;
                    }
                    else
                    {
                        unsigned l_571 = 0x874AB4F3L;
                        unsigned l_590 = 4294967286UL;
                        volatile int l_603[3][6][1];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_603[i][j][k] = (-8L);
                            }
                        }
                        l_571 = ((g_348 & (l_501[2][3][1] , (4294967287UL > (safe_add_func_uint32_t_u_u(0x9EEA9F96L, ((l_138 = (l_568 = (l_501[3][4][0] = 4UL))) , ((p_102 & (safe_mod_func_int8_t_s_s(9L, g_171))) , ((g_136 <= p_102) ^ g_136)))))))) , 0x2EF5B6FFL);
                        if (g_50)
                            continue;
                        g_239 = (l_501[3][4][0] = (0x50D0L && func_3((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((+(l_407 > (safe_sub_func_int8_t_s_s(g_170[4][0][2], ((safe_lshift_func_uint8_t_u_u(p_101, 0)) & (g_136 <= ((func_3(l_529, (safe_rshift_func_uint16_t_u_u((+(safe_add_func_uint16_t_u_u(p_102, (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(l_540, l_540)) || g_15), g_50)) , p_101), l_562))))), 9)), l_590) || p_101) <= g_62))))))), g_170[4][0][2])), 4)), g_14, p_101)));
                        l_603[2][0][0] = ((p_102 <= (l_562 = (g_56 >= ((((g_219 = (safe_mod_func_uint8_t_u_u((func_3(g_239, g_348, p_101) >= (((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_101, ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((l_529 || ((g_136 , p_101) == g_170[4][0][2])))), 4294967294UL)), l_319)) != 0x16A23AA0L))), l_501[3][4][0])) && l_217[4][3]) > 0xFC741650L)), g_386))) , 0x6C8CL) >= 0xB0D9L) , l_138)))) , g_602);
                    }
                    for (l_372 = 0; (l_372 <= 1); l_372 += 1)
                    {
                        int l_631 = 0L;
                        g_239 = (safe_add_func_int16_t_s_s((g_288 | (g_386 , 0xC0L)), (!l_372)));
                        l_501[3][4][0] = (((safe_lshift_func_uint16_t_u_u((func_3((l_407 = (p_102 > g_602)), p_102, l_568) & p_101), 8)) == (((~(safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(p_102, 1)), p_101)), (safe_add_func_int16_t_s_s(((g_164 = func_3(l_479[1], p_102, g_500)) & 0L), 1L))))) > 0UL) ^ p_102)) & 0xEBL);
                        g_239 = (l_616 = g_170[2][1][3]);
                        l_405 = (l_617 | (safe_rshift_func_uint8_t_u_s((((l_631 = (p_101 != (((((safe_add_func_int8_t_s_s((l_138 = (safe_lshift_func_int8_t_s_u(g_386, 0))), (safe_sub_func_uint16_t_u_u(func_3(l_405, ((safe_rshift_func_uint16_t_u_s((l_517[6] = g_170[4][0][2]), (func_3(g_219, (!(safe_mod_func_uint16_t_u_u(0x798AL, g_630))), l_501[3][4][0]) , 0x14B0L))) , 0x0CL), p_102), g_386)))) || g_14) || p_101) || l_562) > l_405))) && g_348) <= g_7), p_102)));
                    }
                    for (g_348 = 0; (g_348 <= 1); g_348 += 1)
                    {
                        char l_636 = 0L;
                        int l_641 = (-2L);
                        l_320 = ((((((safe_rshift_func_uint8_t_u_u(g_170[4][0][1], (g_386 , g_15))) > ((p_101 > 0x3BF54EFDL) != ((l_641 = (!(safe_add_func_int32_t_s_s((l_636 , ((safe_sub_func_uint8_t_u_u((p_101 < (g_639 = g_630)), l_640[2][1][0])) > g_56)), 0UL)))) >= l_636))) <= g_136) == l_362) != l_517[6]) == l_636);
                    }
                }
            }
            l_562 = (!(l_122 = l_397));
            g_62 = p_102;
        }
        for (g_239 = 0; (g_239 == 1); ++g_239)
        {
            unsigned l_659 = 0x69118A96L;
            int l_702[4][9] = {{1L, 1L, (-1L), 1L, 1L, (-1L), 1L, 1L, (-1L)}, {1L, 1L, (-1L), 1L, 1L, (-1L), 1L, 1L, (-1L)}, {1L, 1L, (-1L), 1L, 1L, (-1L), 1L, 1L, (-1L)}, {1L, 1L, (-1L), 1L, 1L, (-1L), 1L, 1L, (-1L)}};
            unsigned l_705 = 0xA4AD8177L;
            int l_723 = 1L;
            int i, j;
            for (l_107 = 0; (l_107 != 9); ++l_107)
            {
                int l_671 = 1L;
                int l_672 = 0x8F446336L;
                for (g_238 = 0; (g_238 > 3); ++g_238)
                {
                    unsigned char l_648 = 1UL;
                    int l_668 = 5L;
                    l_648 = p_102;
                    g_62 = (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((((func_3((l_659 = (l_122 = g_248)), ((safe_add_func_uint32_t_u_u(((0UL & (((safe_rshift_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((l_668 = l_217[4][3]) && (safe_add_func_int16_t_s_s((p_101 && l_648), ((l_671 | (((g_170[4][0][2] = ((l_672 = ((4294967287UL != 6L) , 4294967295UL)) , 4294967293UL)) <= 0x34EAA2BFL) != g_395)) | 3UL)))), 6)), g_219)) , 0xAF233014L) < 1L), 2)) > l_320) > l_407)) <= g_348), l_138)) >= g_348), l_648) > p_101) && p_101) == l_671), l_397)) & 5L) && (-1L)), 5)), g_239)), l_648)), 6));
                    return l_138;
                }
                if ((safe_rshift_func_int8_t_s_s(0x0FL, 3)))
                {
                    unsigned l_695 = 0x207CD332L;
                    g_62 = (safe_sub_func_int8_t_s_s(0xE8L, (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_136, (l_320 | ((safe_rshift_func_uint8_t_u_s(((0x0D2FL > (g_348 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(g_136, (safe_rshift_func_uint8_t_u_u(p_101, 4)))) || (g_248 = (safe_rshift_func_uint8_t_u_s(255UL, 6)))) & (safe_mod_func_uint8_t_u_u((p_101 < 0xF1CDL), p_102))), l_695)), (-1L))) != (-4L)))) != 0x38CEB85BL), 3)) > p_102)))), l_659))));
                }
                else
                {
                    char l_708 = (-3L);
                    if (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((g_348 = (l_659 , (func_3(((safe_mod_func_int16_t_s_s((p_101 ^ (func_3(l_702[0][6], g_14, (l_672 = (p_102 , ((l_707 = (((((l_405 = (safe_lshift_func_int8_t_s_s((g_164 & (((l_705 ^ ((l_702[0][3] == ((g_50 >= 0x13L) && 0x13L)) > 0UL)) | l_706) <= p_101)), 1))) < 65535UL) & p_101) , g_639) , l_702[1][1])) == 1UL)))) & g_171)), p_101)) < p_102), g_164, l_671) | l_708))) , l_659), l_659)), l_708)) , 0L))
                    {
                        char l_709[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_709[i] = (-5L);
                        l_320 = l_709[6];
                        l_320 = p_101;
                    }
                    else
                    {
                        g_62 = g_56;
                    }
                    g_62 = p_102;
                    for (l_319 = 0; (l_319 <= 3); l_319 += 1)
                    {
                        unsigned char l_722[5][10] = {{8UL, 0x44L, 1UL, 0x44L, 8UL, 0xA8L, 0xAFL, 0x44L, 0xA2L, 0x44L}, {8UL, 0x44L, 1UL, 0x44L, 8UL, 0xA8L, 0xAFL, 0x44L, 0xA2L, 0x44L}, {8UL, 0x44L, 1UL, 0x44L, 8UL, 0xA8L, 0xAFL, 0x44L, 0xA2L, 0x44L}, {8UL, 0x44L, 1UL, 0x44L, 8UL, 0xA8L, 0xAFL, 0x44L, 0xA2L, 0x44L}, {8UL, 0x44L, 1UL, 0x44L, 8UL, 0xA8L, 0xAFL, 0x44L, 0xA2L, 0x44L}};
                        int l_726 = 0L;
                        int i, j;
                        l_138 = (safe_mod_func_int8_t_s_s((l_479[l_319] || (l_479[l_319] || (((safe_rshift_func_uint8_t_u_u(((g_348 = ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(g_136, (l_320 = ((safe_lshift_func_int16_t_s_s((!0L), 8)) > (((func_3(l_397, ((p_102 | 1UL) > ((l_702[0][6] = (g_170[0][1][0] != p_102)) || 65533UL)), g_14) || l_122) , 4294967290UL) , g_219))))) == g_50), p_102)) , p_102)) || p_102), 5)) <= l_319) , (-8L)))), g_238));
                        l_726 = (l_671 = ((l_138 = (((((safe_rshift_func_int8_t_s_u(func_3((255UL == (((l_722[0][6] | (((l_723 , 65535UL) || (248UL > p_101)) <= (l_672 = l_672))) > (((safe_rshift_func_uint8_t_u_s((l_479[l_319] && p_101), p_101)) <= p_102) <= 0x7783BA73L)) <= 0xF408L)), l_671, g_248), l_497)) <= g_602) && 1L) && l_708) && 3L)) & l_671));
                        if (p_102)
                            continue;
                        l_723 = g_170[4][0][2];
                    }
                    if (l_497)
                        continue;
                }
            }
            return p_101;
        }
    }
    l_122 = l_215;
    return l_362;
}







static unsigned short func_112(int p_113, unsigned char p_114, unsigned p_115, unsigned char p_116)
{
    unsigned short l_140[3][9][4] = {{{1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}}, {{1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}}, {{1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}, {1UL, 65534UL, 0x2964L, 0x4249L}}};
    int l_141 = (-1L);
    int i, j, k;
    l_141 = (0x66L || l_140[0][2][0]);
    if ((l_140[2][7][1] , (((l_140[1][8][3] != ((safe_rshift_func_int8_t_s_u(g_50, (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_50, (l_141 = func_3(((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_114, 1)), (safe_rshift_func_int8_t_s_u(l_140[2][0][0], 3)))) > (g_14 && (safe_lshift_func_uint16_t_u_s(l_140[2][1][3], (((safe_rshift_func_int8_t_s_s(0x7AL, l_141)) || 0x37L) > 7UL))))) , 4294967295UL))) < p_113), g_136, l_140[1][3][3])))) <= l_140[0][2][0]), g_50)))) , p_114)) >= g_15) >= (-10L))))
    {
        char l_162 = (-1L);
        int l_169 = 0x1B3EE271L;
        p_113 = p_113;
        for (g_62 = 18; (g_62 >= (-17)); g_62--)
        {
            unsigned l_161 = 1UL;
            int l_163 = (-4L);
            l_161 = 0x986BD06FL;
            g_164 = (!(func_3(g_50, (func_3(p_114, (l_162 = g_15), g_62) > 0UL), (g_7 && (l_141 = ((l_163 = (p_115 > p_115)) , g_136)))) == l_161));
            g_170[4][0][2] = (l_169 = (l_163 && ((safe_sub_func_int8_t_s_s((!p_115), g_14)) < p_114)));
            l_169 = ((((l_141 = func_3(g_164, ((g_136 = (g_7 = 9L)) >= (g_171 = l_162)), ((p_115 , ((l_163 = g_170[4][0][2]) > (((0x2F31L < l_161) , (safe_sub_func_uint32_t_u_u(p_114, p_113))) >= (-1L)))) & g_14))) < g_170[4][0][2]) , g_7) < p_113);
        }
    }
    else
    {
        unsigned l_177 = 0x2EA8D45AL;
        int l_185[2][10] = {{0x74609296L, (-1L), 0xF799FEABL, 0xF799FEABL, (-1L), 0x74609296L, (-1L), 0xF799FEABL, 0xF799FEABL, (-1L)}, {0x74609296L, (-1L), 0xF799FEABL, 0xF799FEABL, (-1L), 0x74609296L, (-1L), 0xF799FEABL, 0xF799FEABL, (-1L)}};
        int i, j;
        for (p_114 = 0; (p_114 >= 29); p_114 = safe_add_func_uint32_t_u_u(p_114, 7))
        {
            unsigned short l_176 = 1UL;
            int l_184 = 0x02CAF5ADL;
            l_177 = func_3((g_56 , l_176), g_170[1][1][1], p_113);
            g_62 = (((((safe_add_func_int8_t_s_s(g_15, ((safe_add_func_uint8_t_u_u((p_116 = 0x72L), p_115)) , (l_176 || ((((l_176 | (((l_185[0][2] = ((p_116 == (p_115 > (((l_184 = (g_171 = p_115)) , (((g_164 = (l_184 = (g_170[4][0][2] > 1UL))) <= l_176) && 0x71L)) && l_184))) >= 0UL)) <= 0x75917A22L) == 0x50L)) , g_171) > g_14) == 6UL))))) != p_115) != g_7) ^ p_113) >= 254UL);
        }
        return l_185[0][5];
    }
    return g_164;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1039[i], "g_1039[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    transparent_crc(g_1500, "g_1500", print_hash_value);
    transparent_crc(g_1589, "g_1589", print_hash_value);
    transparent_crc(g_1616, "g_1616", print_hash_value);
    transparent_crc(g_1681, "g_1681", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
