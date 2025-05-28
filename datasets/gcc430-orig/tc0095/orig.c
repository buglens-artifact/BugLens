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




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
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




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
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



static unsigned g_6 = 8UL;
static unsigned g_14 = 5UL;
static int g_35 = (-10L);
static long long g_49 = 3L;
static unsigned char g_61[7][2][6] = {{{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}, {{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}, {{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}, {{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}, {{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}, {{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}, {{0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}, {0x88L, 0xB8L, 0xD4L, 1UL, 1UL, 0xA1L}}};
static int *g_85 = &g_35;
static char g_90 = (-6L);
static short g_104 = 9L;
static short g_106[2][5] = {{(-5L), 1L, (-5L), 1L, (-5L)}, {(-5L), 1L, (-5L), 1L, (-5L)}};
static const int g_109 = 0xEF3EF0B8L;
static const int *g_108 = &g_109;
static short g_112 = (-9L);
static long long g_134 = (-5L);
static unsigned char *g_141 = &g_61[2][0][0];
static unsigned char g_146 = 6UL;
static int * const **g_170[2] = {(void*)0, (void*)0};
static int **g_178 = &g_85;
static unsigned short g_195 = 1UL;
static unsigned long long g_207 = 0UL;
static int * const *g_211 = (void*)0;
static int g_227 = 0L;
static char g_243 = 0L;
static int g_256[4][6] = {{1L, (-6L), 0x3028740AL, (-1L), (-1L), 0x3028740AL}, {1L, (-6L), 0x3028740AL, (-1L), (-1L), 0x3028740AL}, {1L, (-6L), 0x3028740AL, (-1L), (-1L), 0x3028740AL}, {1L, (-6L), 0x3028740AL, (-1L), (-1L), 0x3028740AL}};
static unsigned char g_286[4] = {0UL, 0x21L, 0UL, 0x21L};
static unsigned g_316 = 0UL;
static unsigned g_392[9][2] = {{4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}, {4294967295UL, 4294967288UL}};
static unsigned g_401 = 0xF4D8DB94L;
static unsigned *g_467 = (void*)0;
static unsigned **g_466 = &g_467;
static unsigned **g_471 = (void*)0;
static unsigned **g_472 = (void*)0;
static int *g_479 = &g_256[3][3];
static short g_480 = 0xFF93L;



static int func_1(void);
static int * func_2(int p_3, char p_4);
static int * func_7(const unsigned char p_8);
static unsigned func_17(unsigned * p_18);
static unsigned * func_19(unsigned * p_20, unsigned p_21, int * p_22, int p_23);
static int * func_25(unsigned * p_26);
static const char func_31(int * p_32, unsigned long long p_33);
static int func_40(unsigned short p_41, unsigned long long p_42, const char p_43, int * p_44, unsigned long long p_45);
static unsigned func_51(unsigned char p_52, int * p_53, unsigned p_54, char p_55, const long long p_56);
static int * func_62(int * p_63, unsigned * p_64, unsigned char * p_65, unsigned long long p_66);
static int func_1(void)
{
    int l_5 = 0x6F9B2CFBL;
    long long *l_496 = &g_134;
    long long **l_495 = &l_496;
    unsigned short *l_498 = (void*)0;
    unsigned short ** const l_497 = &l_498;
    unsigned short **l_500 = &l_498;
    unsigned short ***l_499 = &l_500;
    (*g_178) = func_2(l_5, g_6);

    ;
    ;
    l_495 = l_495;
    (*l_499) = l_497;
    (*g_178) = func_7(l_5);

    ;
    return g_256[0][1];
}







static int * func_2(int p_3, char p_4)
{
    int **l_444 = (void*)0;
    int *l_446[4];
    int **l_445[10][1][2] = {{{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}, {{&l_446[0], &l_446[0]}}};
    char l_455[9] = {0xC5L, 0x58L, 0xC5L, 0x58L, 0xC5L, 0x58L, 0xC5L, 0x58L, 0xC5L};
    unsigned l_462 = 0x6F54A072L;
    int *l_494 = &g_256[0][1];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_446[i] = (void*)0;
    g_108 = ((*g_178) = func_7(g_6));

    ;
    for (g_35 = 0; (g_35 != (-3)); g_35--)
    {
        for (g_195 = 0; (g_195 != 41); ++g_195)
        {
            l_455[7] = (safe_lshift_func_uint16_t_u_u(p_3, (safe_rshift_func_int16_t_s_u(0x97DCL, 11))));
        }
    }
    for (g_401 = 0; (g_401 <= 45); g_401 = safe_add_func_int8_t_s_s(g_401, 1))
    {
        unsigned char l_460 = 0x1AL;
        unsigned short *l_485[5][4] = {{&g_195, &g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195, &g_195}};
        unsigned short **l_484 = &l_485[2][0];
        int i, j;
        if (p_4)
            break;
    }
    return l_494;


}







static int * func_7(const unsigned char p_8)
{
    int *l_324 = &g_35;
    unsigned short l_351 = 2UL;
    int l_357 = 0xE9650826L;
    int *l_367 = &g_256[1][2];
    unsigned long long l_370 = 18446744073709551608UL;
    unsigned char **l_438 = &g_141;
    unsigned *l_440 = (void*)0;
    unsigned **l_439 = &l_440;
    int *l_441 = &l_357;
    int *l_442[6][6];
    int *l_443 = &g_35;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
            l_442[i][j] = &l_357;
    }
    for (g_6 = (-8); (g_6 > 58); g_6++)
    {
        short l_48 = 0x12A2L;
        int *l_50 = (void*)0;
        unsigned l_326 = 4294967295UL;
        unsigned short *l_331 = (void*)0;
        unsigned short * const *l_330 = &l_331;
        unsigned short * const **l_329 = &l_330;
        unsigned short ***l_336 = (void*)0;
        int l_356 = 1L;
    }
    (*g_178) = (((((func_17(((*l_439) = func_62((*g_178), func_62(((safe_mod_func_int32_t_s_s(((&g_141 != l_438) , ((!((0xF6L & p_8) < ((g_109 != func_17(l_367)) < g_243))) , (-1L))), p_8)) , &l_357), l_324, &g_146, p_8), (*l_438), g_90))) == g_49) < p_8) >= g_392[2][0]) ^ g_227) , l_441);

    ;
    ;
    return l_443;



}







static unsigned func_17(unsigned * p_18)
{
    int l_300 = 3L;
    long long *l_305 = &g_134;
    int *l_308 = &g_35;
    unsigned short *l_309 = &g_195;
    unsigned char *l_310 = (void*)0;
    short *l_311 = (void*)0;
    short *l_312[1];
    int * const *l_313 = &l_308;
    long long l_314 = 1L;
    int i;
    for (i = 0; i < 1; i++)
        l_312[i] = &g_106[0][1];
    (*l_308) = ((+func_51((g_286[1] , l_300), &l_300, g_49, (g_286[1] , l_300), g_6)) > (-1L));
    l_314 = (((*g_141) = ((((((*l_309) = (*l_308)) || (((((((*l_308) = (((*l_308) , g_35) , (*l_308))) , l_313) != (void*)0) == g_49) & g_134) > g_256[3][2])) ^ l_300) && 0x3B5EF5EFL) , (*g_141))) >= g_286[0]);
    return g_286[3];
}







static unsigned * func_19(unsigned * p_20, unsigned p_21, int * p_22, int p_23)
{
    int l_298 = 1L;
    unsigned *l_299[8][3][7] = {{{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6, &g_6, &g_6, &g_6, &g_6}}};
    int i, j, k;
    (*g_178) = (l_298 , &l_298);

    ;
    (*g_178) = &l_298;
    return l_299[6][0][4];



}







static int * func_25(unsigned * p_26)
{
    int l_86 = 0xFFD659CAL;
    int **l_98 = (void*)0;
    unsigned l_120 = 1UL;
    unsigned l_162 = 0x75E0746DL;
    int l_163 = 0x080E1D11L;
    int l_164 = 0L;
    short l_190 = 0x0FA8L;
    int *l_191 = &l_163;
    short l_193[6];
    unsigned char **l_196 = &g_141;
    unsigned short l_247 = 0x4A69L;
    int *l_255[4][4][3] = {{{&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}}, {{&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}}, {{&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}}, {{&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}, {&g_256[3][3], &g_35, (void*)0}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_193[i] = 0xB4A3L;
    if (l_86)
    {
        char *l_89[2][7][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
        int l_91 = 0xBC9383A2L;
        const int *l_93[1];
        const int **l_92[3][4] = {{&l_93[0], &l_93[0], &l_93[0], &l_93[0]}, {&l_93[0], &l_93[0], &l_93[0], &l_93[0]}, {&l_93[0], &l_93[0], &l_93[0], &l_93[0]}};
        int ***l_99 = (void*)0;
        int **l_101 = &g_85;
        int ***l_100 = &l_101;
        short *l_103 = &g_104;
        short *l_105 = &g_106[0][1];
        unsigned *l_151 = &g_6;
        unsigned l_231 = 4294967287UL;
        unsigned short l_242 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_93[i] = &g_35;
        if ((((*l_105) = (((safe_lshift_func_int8_t_s_u((l_91 = l_86), ((void*)0 == l_92[0][2]))) || (safe_lshift_func_int8_t_s_u((((~(g_61[1][0][2] , g_35)) , g_6) == ((*l_103) = (safe_mod_func_int16_t_s_s((l_98 != ((*l_100) = &g_85)), (safe_unary_minus_func_int8_t_s((l_89[0][4][0] != (void*)0))))))), 1))) >= g_6)) , (**l_101)))
        {
            const int *l_107 = &g_35;
            char *l_131 = &g_90;
            int l_135 = 0L;
            int *l_200[5][6][2] = {{{&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}}, {{&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}}, {{&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}}, {{&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}}, {{&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}, {&l_135, &g_35}}};
            int i, j, k;
            for (l_91 = 0; (l_91 <= 1); l_91 += 1)
            {
                unsigned short l_113 = 0x86B1L;
                unsigned char *l_126 = (void*)0;
                int *l_127 = (void*)0;
                for (g_35 = 0; (g_35 <= 1); g_35 += 1)
                {
                    int i, j;
                    if (g_106[l_91][l_91])
                        break;
                    g_108 = l_107;

                    ;
                    if ((*g_108))
                        continue;
                    return &g_35;


                }
                for (l_86 = (-17); (l_86 <= 8); l_86++)
                {
                    unsigned short l_123 = 65528UL;
                    int *l_124[8] = {&g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35, &g_35};
                    unsigned char *l_125 = &g_61[2][0][0];
                    int ***l_130 = &l_98;
                    int i;
                    (**l_100) = &g_35;
                    (**l_101) = (*g_108);
                    if (((g_112 ^ (l_113 , (((safe_lshift_func_int8_t_s_s(l_113, 1)) >= ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_120, (safe_rshift_func_int8_t_s_u(l_123, 0)))), 0)) , func_31(func_62(func_62(func_62(func_62(l_124[2], p_26, l_125, l_86), p_26, &g_61[2][0][0], g_61[6][1][2]), p_26, &g_61[4][0][5], g_90), &g_6, l_125, l_120), (***l_100)))) & 1L))) , (*l_107)))
                    {
                        g_108 = func_62(((*l_101) = p_26), p_26, l_126, (*l_107));

                        ;
                        l_127 = p_26;

                        ;
                        l_107 = l_107;
                    }
                    else
                    {
                        unsigned short *l_132 = (void*)0;
                        unsigned short *l_133[9] = {(void*)0, &l_113, (void*)0, &l_113, (void*)0, &l_113, (void*)0, &l_113, (void*)0};
                        int i;
                        l_135 = (safe_mod_func_uint16_t_u_u(((((l_130 == (void*)0) , l_131) == (void*)0) , (g_134 = g_104)), (-9L)));
                    }
                    for (l_113 = 2; (l_113 <= 7); l_113 += 1)
                    {
                        int i;
                        l_124[l_113] = l_124[l_113];
                    }
                    if (g_104)
                        goto lbl_136;
                }

                ;
                (***l_100) = (*g_108);
            }
lbl_136:
            (**l_100) = &g_35;
            for (g_35 = 23; (g_35 != 27); g_35 = safe_add_func_int32_t_s_s(g_35, 3))
            {
                int *l_143[4][2] = {{(void*)0, &g_35}, {(void*)0, &g_35}, {(void*)0, &g_35}, {(void*)0, &g_35}};
                unsigned l_165 = 0xC9179A28L;
                int i, j;
                for (l_135 = 0; (l_135 >= 0); l_135 -= 1)
                {
                    unsigned char *l_140 = (void*)0;
                    unsigned char **l_139[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_139[i] = &l_140;
                    if (func_31(func_62(&g_35, p_26, (g_141 = &g_61[6][1][4]), (*l_107)), (*l_107)))
                    {
                        const int ***l_142 = &l_92[1][3];
                        int i;
                        (*l_142) = &l_93[l_135];
                    }
                    else
                    {
                        int i;
                        l_93[l_135] = (l_143[3][0] = l_143[3][0]);
                    }
                    for (l_120 = 0; (l_120 >= 4); l_120 = safe_add_func_int16_t_s_s(l_120, 5))
                    {
                        long long l_150[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_150[i] = 6L;
                        g_146 = (*g_85);
                        g_108 = ((*g_108) , ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((((g_90 = g_112) != 0x53L) <= g_6))), l_150[0])) , &g_109));

                        ;
                        return &g_35;


                    }
                }
                l_165 = func_31(func_62(&g_35, l_151, (g_61[5][1][5] , (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_61[0][1][0] , (g_61[3][1][4] || (safe_mod_func_int8_t_s_s((((*l_107) , (*l_107)) | (*p_26)), ((*l_131) = (~(safe_rshift_func_uint8_t_u_u(((*g_141) = (safe_sub_func_uint8_t_u_u(((l_162 = (func_31(&g_35, (*l_107)) & 0x4F2FL)) != 1L), 0xB4L))), (*l_107))))))))), g_146)), (*l_107))) <= l_163) , (void*)0)), g_146), l_164);
            }


            if (l_120)
            {
                short l_171 = (-1L);
                int **l_177 = &g_85;
                int *l_208[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_208[i][j] = &l_91;
                }
                for (g_49 = (-11); (g_49 < (-27)); --g_49)
                {
                    for (g_112 = (-12); (g_112 > 3); ++g_112)
                    {
                        int *l_172 = &g_35;
                        (***l_100) = (((g_170[1] == &l_92[0][2]) , (+0x7CF8L)) >= l_171);
                        return l_172;


                    }
                }
                for (g_35 = 0; (g_35 <= 3); g_35++)
                {
                    int *l_183 = &l_163;
                    int l_184[4][3];
                    int *l_185 = &l_135;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_184[i][j] = 0L;
                    }
                    (*l_185) = (((safe_add_func_int64_t_s_s((l_177 != g_178), (((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_90, 1)), ((*l_183) = 0L))) == (g_106[1][3] == (0x7DCBL & ((*p_26) == (func_31((*l_101), (((*g_141) < (**l_177)) == 0x08A32CF9L)) && l_184[1][1]))))) & (*l_107)))) | (*l_107)) >= l_86);
                    (*g_178) = (void*)0;

                    ;
                    (*l_177) = func_62((*g_178), &g_6, &g_61[5][1][5], g_109);

                    ;
                }
                for (g_90 = 0; (g_90 < 5); ++g_90)
                {
                    unsigned short l_192 = 9UL;
                    short **l_194 = &l_105;
                    long long *l_197 = (void*)0;
                    long long *l_198 = &g_134;
                    long long *l_199 = &g_49;
                    unsigned char *l_205 = &g_61[0][0][2];
                    unsigned long long *l_206 = &g_207;
                    int l_209 = (-4L);
                    int l_210 = 0xD33C817CL;
                    (*g_178) = ((((safe_rshift_func_uint8_t_u_s(((((((**l_101) && ((*l_199) = ((*l_198) = func_51(l_190, l_191, l_192, (g_195 = ((l_193[1] , l_192) || (((*l_194) = &g_104) == &g_106[0][1]))), ((l_196 = &g_141) != (void*)0))))) || g_61[5][1][5]) , 0xB35F69D6L) , l_131) == (void*)0), g_112)) ^ 0xF52EL) , (*l_107)) , l_200[1][5][1]);

                    ;
                    for (l_164 = 4; (l_164 >= 1); l_164 -= 1)
                    {
                        return p_26;



                    }
                    l_210 = ((l_209 = func_51(func_51((*g_141), p_26, (*l_107), g_146, func_31((((*l_206) = ((((safe_add_func_uint16_t_u_u(((5UL >= ((void*)0 == &l_135)) & ((safe_add_func_uint8_t_u_u(func_31(func_62(((g_195 | g_112) , (*g_178)), &l_162, l_205, l_192), g_6), (*g_141))) > 0xB1L)), 0L)) ^ 0xE74CL) | g_6) || g_112)) , (void*)0), g_112)), l_208[1][0], l_192, g_109, g_146)) && (*g_141));

                    ;
                }

                ;
                for (g_49 = 0; g_49 < 2; g_49 += 1)
                {
                    g_170[g_49] = &g_211;
                }
            }
            else
            {
                unsigned long long l_216 = 1UL;
                unsigned long long l_228 = 0UL;
                int *l_229[10][9] = {{&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}, {&l_163, &l_163, &l_135, &l_135, (void*)0, &l_135, (void*)0, &l_135, &l_135}};
                unsigned char *l_248 = &g_61[2][0][0];
                int i, j;
                for (l_164 = (-15); (l_164 == 21); l_164++)
                {
                    unsigned l_221[2][4][8] = {{{3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}, {3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}, {3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}, {3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}}, {{3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}, {3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}, {3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}, {3UL, 3UL, 0UL, 3UL, 3UL, 0UL, 3UL, 3UL}}};
                    int ** const l_224[6][2][2] = {{{&l_191, &l_200[1][5][1]}, {&l_191, &l_200[1][5][1]}}, {{&l_191, &l_200[1][5][1]}, {&l_191, &l_200[1][5][1]}}, {{&l_191, &l_200[1][5][1]}, {&l_191, &l_200[1][5][1]}}, {{&l_191, &l_200[1][5][1]}, {&l_191, &l_200[1][5][1]}}, {{&l_191, &l_200[1][5][1]}, {&l_191, &l_200[1][5][1]}}, {{&l_191, &l_200[1][5][1]}, {&l_191, &l_200[1][5][1]}}};
                    int *l_225 = &l_86;
                    int *l_226[6] = {(void*)0, &g_227, (void*)0, &g_227, (void*)0, &g_227};
                    unsigned short *l_230[6];
                    int l_233 = (-1L);
                    const short l_241 = (-3L);
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_230[i] = &g_195;
                }
                l_229[0][7] = func_62(&l_135, &g_6, l_248, g_90);


            }

            ;
        }
        else
        {
            unsigned l_253 = 5UL;
            unsigned long long *l_254 = &g_207;
            int l_257 = 0x90FAD0A5L;
            int l_258[6][3][2] = {{{(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}}, {{(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}}, {{(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}}, {{(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}}, {{(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}}, {{(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}, {(-1L), 0xE6314A1BL}}};
            int *l_259 = &l_257;
            unsigned short *l_263[5] = {(void*)0, &l_247, (void*)0, &l_247, (void*)0};
            unsigned short **l_262 = &l_263[3];
            unsigned char *l_270 = (void*)0;
            int i, j, k;
            l_257 = (safe_mod_func_uint32_t_u_u((*l_191), func_31((*l_101), ((**g_178) && (safe_add_func_int64_t_s_s(l_253, ((func_40(g_104, ((*l_254) = ((**l_101) & g_243)), l_253, (l_255[2][3][0] = (void*)0), g_49) > 0x3535FD6FD450B8E1LL) > l_253)))))));
            if (l_258[5][1][1])
            {
                l_259 = p_26;

                ;
                (*l_259) = (!(*g_108));
                for (g_35 = (-6); (g_35 <= 6); g_35 = safe_add_func_uint64_t_u_u(g_35, 2))
                {
                    unsigned short ***l_264 = (void*)0;
                    unsigned short ***l_265 = &l_262;
                    (*l_265) = l_262;
                }
            }
            else
            {
                int l_271[5][7] = {{0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L}, {0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L}, {0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L}, {0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L}, {0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L, 0xB92BA8E1L, 0xAF9089C4L}};
                long long l_285 = 0xC0AAC95829EE725DLL;
                int *l_289 = (void*)0;
                int i, j;
                (**l_100) = (*g_178);
                if ((safe_rshift_func_int8_t_s_s(0x4FL, 0)))
                {
                    unsigned char l_284 = 255UL;
                    for (g_227 = (-3); (g_227 == 10); g_227 = safe_add_func_uint16_t_u_u(g_227, 6))
                    {
                        long long l_274 = 0x11449F1F28B5C55ELL;
                        unsigned short l_275[3];
                        int *l_276 = &l_91;
                        unsigned char *l_277 = &g_61[2][0][0];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_275[i] = 2UL;
                        l_276 = func_62((*g_178), &l_231, l_270, (g_256[3][3] >= (!((((*g_141) = ((void*)0 != l_270)) || (l_271[3][0] = 0xB9L)) <= (safe_lshift_func_int8_t_s_u((g_104 & l_274), l_275[0]))))));

                        ;
                        (*g_178) = func_62((((((((*l_196) = l_277) != l_277) && ((g_112 , (((*g_141) = (*g_141)) & (*l_259))) ^ (((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((*l_276), l_284)), 1)) || (((((*l_254) = (((+18446744073709551615UL) != ((g_207 < g_112) , g_106[0][4])) | 0xC6F954ECL)) <= l_284) && (*l_191)) , l_271[3][0])), l_271[3][0])) < (*l_259)) < l_285))) || l_271[2][5]) , 0x627B09ABL) , (*g_178)), &g_6, &g_146, l_285);
                        (*g_178) = func_62((*g_178), (((*p_26) = (g_286[1] , (((void*)0 == &l_270) && l_284))) , &g_6), (*l_196), l_284);
                    }
                }
                else
                {
                    short l_287 = (-1L);
                    int *l_288[10][6][4] = {{{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}, {{&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}, {&l_257, &l_163, (void*)0, &g_256[3][3]}}};
                    int i, j, k;
                    if (l_287)
                    {
                        (**l_100) = l_288[4][3][1];

                        ;
                        l_259 = l_289;

                        ;
                        (**l_100) = p_26;

                        ;
                    }
                    else
                    {
                        l_289 = func_62(&l_257, l_289, &g_286[3], g_35);

                        ;
                    }

                    ;
                    ;
                    return l_289;


                }
            }

            ;
            for (g_35 = 0; (g_35 <= 2); g_35 += 1)
            {
                const unsigned long long l_290 = 0xBE43E4FF47D78C67LL;
                if ((*l_259))
                {
                    if (l_290)
                        break;
                }
                else
                {
                    short *l_293 = &g_106[0][1];
                    int l_294 = (-1L);
                    l_294 = (((safe_mod_func_int8_t_s_s(0xC9L, ((*p_26) ^ ((l_293 = &g_112) != l_103)))) ^ (l_294 & g_286[0])) & ((*l_259) & (g_106[0][1] ^ g_106[0][3])));

                    ;
                }
                (**l_100) = p_26;

                ;
                for (g_243 = 0; (g_243 <= 1); g_243 += 1)
                {
                    (*g_178) = (void*)0;

                    ;
                    for (l_120 = 0; (l_120 <= 2); l_120 += 1)
                    {
                        int i, j, k;
                        (*g_178) = l_255[(l_120 + 1)][(g_35 + 1)][l_120];
                    }

                    ;
                }

                ;
            }

            ;
            (*g_178) = p_26;

            ;
        }


        ;
    }
    else
    {
        unsigned short *l_297 = &l_247;
        (*l_191) = (safe_rshift_func_int8_t_s_u((l_297 != (void*)0), 1));
    }
    (*l_191) = 0L;
    return (*g_178);


}







static const char func_31(int * p_32, unsigned long long p_33)
{
    unsigned *l_80 = &g_6;
    int l_81 = (-9L);
    unsigned char *l_82 = (void*)0;
    int **l_83 = (void*)0;
    int **l_84 = (void*)0;
    g_85 = func_62(func_62(&g_35, l_80, &g_61[2][0][0], l_81), func_62(func_62(p_32, (l_81 , (void*)0), &g_61[4][0][4], g_61[2][1][5]), l_80, l_82, p_33), l_82, l_81);

    ;
    return g_6;
}







static int func_40(unsigned short p_41, unsigned long long p_42, const char p_43, int * p_44, unsigned long long p_45)
{
    unsigned short l_59 = 0xE86AL;
    unsigned char *l_60[5] = {&g_61[2][0][0], &g_61[2][0][0], &g_61[2][0][0], &g_61[2][0][0], &g_61[2][0][0]};
    int *l_67 = &g_35;
    int **l_68 = &l_67;
    int l_77 = 0x5B66FFBAL;
    int i;
    l_77 = (((void*)0 != p_44) == func_51((g_61[2][0][0] = (!(safe_rshift_func_uint8_t_u_s(l_59, 7)))), func_62(((*l_68) = l_67), &g_6, (p_43 , l_60[0]), (g_6 , l_59)), g_49, g_49, g_35));
    return g_49;
}







static unsigned func_51(unsigned char p_52, int * p_53, unsigned p_54, char p_55, const long long p_56)
{
    unsigned l_75[5] = {4294967292UL, 6UL, 4294967292UL, 6UL, 4294967292UL};
    unsigned char *l_76[5][8][3] = {{{&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}}, {{&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}}, {{&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}}, {{&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}}, {{&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}, {&g_61[3][0][5], &g_61[2][0][0], (void*)0}}};
    int i, j, k;
    (*p_53) = (0xF4L >= (safe_mod_func_uint8_t_u_u((p_52 = (g_61[2][0][0] = (((((safe_sub_func_int8_t_s_s(p_52, p_52)) , 0x38L) >= (p_54 , g_61[6][0][2])) | (safe_rshift_func_int16_t_s_u(((void*)0 == &p_52), g_35))) <= l_75[2]))), l_75[2])));
    (*p_53) = g_61[2][0][0];
    return p_55;
}







static int * func_62(int * p_63, unsigned * p_64, unsigned char * p_65, unsigned long long p_66)
{
    p_63 = &g_35;

    ;
    return p_63;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_106[i][j], "g_106[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_256[i][j], "g_256[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_286[i], "g_286[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_316, "g_316", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_392[i][j], "g_392[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
