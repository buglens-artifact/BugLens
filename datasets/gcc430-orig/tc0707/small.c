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



static volatile int g_8 = (-1L);
static int g_26 = 0x6FDD8FB8L;
static int **g_37 = (void*)0;
static const int *g_45 = (void*)0;
static const int ** const g_44 = &g_45;
static int g_140 = 0L;
static int g_315 = 0xF3601600L;
static int g_322[2] = {(-5L), (-5L)};
static int g_367 = 0x41E05720L;
static char g_423 = 1L;
static char g_521[9][5][5] = {{{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}, {{0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}, {0L, 7L, (-10L), (-8L), 0xD8L}}};
static int **g_619 = (void*)0;
static char g_652 = (-1L);



static unsigned func_1(void);
static char func_2(unsigned short p_3, int p_4, unsigned p_5);
static unsigned char func_16(char p_17, int p_18, int p_19);
static int * const func_27(int p_28, int p_29, unsigned p_30, int ** p_31, unsigned p_32);
static int func_41(const int ** const p_42, unsigned p_43);
static unsigned func_48(int p_49);
static unsigned func_52(int ** p_53, int * const * p_54, int ** p_55, int ** const p_56);
static int * const * func_57(int * const p_58, char p_59, unsigned short p_60);
static int * const func_61(char p_62, unsigned short p_63, int * p_64);
static int ** func_66(int p_67, unsigned p_68, int * const * p_69);
static unsigned func_1(void)
{
    unsigned char l_13[9] = {0xF5L, 0xFBL, 0xF5L, 0xFBL, 0xF5L, 0xFBL, 0xF5L, 0xFBL, 0xF5L};
    int l_20 = 0xF368A901L;
    char l_714 = 0L;
    int *l_717 = &g_315;
    int ***l_732 = &g_619;
    const int *l_740 = &g_26;
    int ***l_779 = &g_37;
    unsigned char l_787 = 0UL;
    unsigned short l_832 = 0x921CL;
    int i;
    (*l_717) = ((+(func_2((safe_rshift_func_int16_t_s_u((0x49DFCF09L >= (g_8 , (safe_lshift_func_uint16_t_u_u((254UL && (~(safe_add_func_uint32_t_u_u(l_13[0], (safe_div_func_int8_t_s_s(g_8, func_16((l_20 & 0xA4E86524L), (safe_lshift_func_uint16_t_u_s(0UL, 4)), l_13[0]))))))), l_13[0])))), g_521[3][0][2])), l_13[0], l_714) < l_13[0])) >= 0x304BL);


    if ((safe_sub_func_int32_t_s_s((*l_717), (g_521[3][0][2] , (+(safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((*l_717), (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((*l_717), (0x84L & (&g_44 != l_732)))), (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((*l_717), ((*l_732) == (*l_732)))), 10)) < (*l_717)) != g_521[0][4][0]))))) == g_322[1]), g_26)), (*l_717))))))))
    {
        unsigned char l_737 = 1UL;
        int *l_739 = &g_315;
        if (l_737)
        {
            const int *l_738 = &g_315;
            (*g_44) = l_738;

            ;
        }
        else
        {
            (*g_44) = l_739;

            ;
        }

        ;
        return (*l_739);
    }
    else
    {
        unsigned l_743 = 0x202D8DB9L;
        int **l_747 = (void*)0;
        int l_781 = (-5L);
        int l_792 = 1L;
        short l_833 = 0xB775L;
        int l_840 = 0x420955EBL;
        int l_843[8] = {0x80AE19A3L, 0xBD2C9E33L, 0x80AE19A3L, 0xBD2C9E33L, 0x80AE19A3L, 0xBD2C9E33L, 0x80AE19A3L, 0xBD2C9E33L};
        int *l_865 = &g_140;
        int i;
        if ((l_740 == &l_20))
        {
            for (g_367 = 1; (g_367 <= 4); g_367 += 1)
            {
                return g_322[1];
            }
        }
        else
        {
            short l_744 = (-10L);
            int **l_748 = (void*)0;
            int **l_749[9] = {&l_717, &l_717, (void*)0, &l_717, &l_717, (void*)0, &l_717, &l_717, (void*)0};
            int **l_750 = &l_717;
            short l_780 = (-9L);
            const int l_811 = 0xB22625D6L;
            unsigned char l_819 = 2UL;
            unsigned char l_831 = 0x52L;
            unsigned short l_851 = 0x1FABL;
            int i;
            (*l_750) = func_27((safe_sub_func_int8_t_s_s(g_8, (l_743 > ((g_521[8][2][2] & g_367) >= l_744)))), ((safe_mul_func_int16_t_s_s((l_744 , 0xE035L), (((*l_717) , (((g_521[3][0][2] >= g_521[3][0][2]) & l_744) <= 4294967289UL)) < g_652))) != l_743), g_652, l_747, l_744);

            ;
            for (g_140 = 0; (g_140 != 18); g_140 = safe_add_func_int16_t_s_s(g_140, 1))
            {
                int l_753 = (-7L);
                int *l_771 = &g_140;
                int ***l_804 = &g_619;
                for (g_367 = 0; (g_367 <= 8); g_367 += 1)
                {
                    int *l_754 = &g_367;
                    unsigned char l_769 = 0x7EL;
                    int **l_770 = &l_754;
                    int i;
                    l_754 = (l_13[g_367] , func_61(g_8, l_753, l_754));
                    (*l_770) = func_61((((!(g_521[7][3][2] == (safe_sub_func_uint8_t_u_u(((void*)0 == l_754), ((safe_mul_func_uint8_t_u_u((g_521[3][0][2] , g_652), l_753)) && g_322[0]))))) , (void*)0) != (void*)0), l_769, &g_315);

                    ;
                }
                for (l_781 = 0; (l_781 > (-30)); l_781 = safe_sub_func_int32_t_s_s(l_781, 2))
                {
                    short l_801 = 0x7D3CL;
                    int l_815[7] = {0x6A7579F2L, 0xA789FF64L, 0x6A7579F2L, 0xA789FF64L, 0x6A7579F2L, 0xA789FF64L, 0x6A7579F2L};
                    int i;
                    (*g_44) = ((&g_45 != ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s((!(((safe_add_func_uint32_t_u_u((g_322[0] || (-3L)), (func_2(l_801, l_801, (((void*)0 == &g_619) >= g_521[5][2][3])) & g_26))) | 0xB3L) ^ l_801)), (*l_771))))) , (void*)0)) , &g_367);

                    ;
                    if ((safe_sub_func_uint16_t_u_u(((l_804 != (void*)0) != (((func_2((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((((void*)0 != (*g_44)) || l_792), l_801)), (*g_45))), (safe_div_func_int16_t_s_s((l_801 < (*l_771)), g_423)), (*l_717)) < 8UL) && 4294967288UL) , l_811)), g_322[1])))
                    {
                        return g_521[6][0][3];
                    }
                    else
                    {
                        int *l_812 = &g_26;
                        l_812 = (void*)0;

                        ;
                        l_815[3] = (safe_lshift_func_uint8_t_u_u(g_652, g_315));
                    }
                    for (l_801 = 0; (l_801 <= 27); l_801 = safe_add_func_uint32_t_u_u(l_801, 7))
                    {
                        int *l_818 = &g_367;
                        (*g_44) = (*g_44);
                        (*g_44) = l_818;
                        (*l_717) = l_819;
                    }
                    (*l_717) = 0xBDA0A230L;
                }
            }
            if ((l_747 == &g_45))
            {
                (**l_750) = (g_140 != l_743);
            }
            else
            {
                char l_822 = 5L;
                int * const l_834 = &g_26;
                int *l_835 = &g_26;
                (**l_750) = l_792;
                for (g_367 = 25; (g_367 > (-29)); g_367 = safe_sub_func_int16_t_s_s(g_367, 1))
                {
                    if (func_48(g_521[1][2][0]))
                    {
                        g_140 = 0x615D26CDL;
                    }
                    else
                    {
                        if (l_822)
                            break;
                    }


                }
                (*l_834) = (g_322[1] , (g_521[6][4][0] >= func_2((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(7L, (*l_740))), func_2(g_140, (((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_521[6][1][0], 252UL)) < g_367), ((((((func_2(g_26, l_831, g_322[0]) ^ 8L) & l_822) , l_832) > l_833) , g_652) | g_652))) , l_834) != l_835), g_26))), (*l_835), g_322[1])));
                if ((g_423 == l_843[1]))
                {
                    return g_140;
                }
                else
                {
                    unsigned short l_850 = 0xD505L;
                    int *l_852 = &l_781;
                    if ((safe_sub_func_int8_t_s_s((+g_367), (safe_lshift_func_int8_t_s_s((((func_48(g_140) && (safe_sub_func_int32_t_s_s(((void*)0 != &g_140), ((**l_750) == func_2((*l_740), l_850, l_851))))) == g_521[3][0][4]) == 0x096E233BL), g_367)))))
                    {
                        (*l_750) = l_852;

                        ;
                    }
                    else
                    {
                        int l_855 = 0x2B8F1DE6L;
                        int *l_856 = &g_26;
                        (*g_44) = ((func_16(((safe_mod_func_int8_t_s_s(func_2(g_423, (0x82D2L >= 0x93EFL), g_322[1]), l_855)) && 1UL), (*l_834), (*l_852)) >= 7L) , l_856);

                        ;
                        (*l_856) = (((*l_835) & g_26) != ((safe_sub_func_int32_t_s_s((+(safe_mul_func_int8_t_s_s(g_140, g_140))), (**l_750))) == (safe_div_func_uint8_t_u_u(0x6BL, (safe_div_func_uint8_t_u_u((func_2(g_423, (g_322[0] < (&g_45 != (void*)0)), (*l_852)) && g_140), g_140))))));
                    }


                    ;
                }


                ;
            }

            ;
            (*g_44) = l_865;

            ;
        }


        ;
        (*g_44) = (void*)0;

        ;
    }

    ;

    for (g_423 = 7; (g_423 >= 0); g_423 -= 1)
    {
        int *l_866 = (void*)0;
        (*g_44) = l_866;
        for (g_315 = 0; (g_315 <= 8); g_315 += 1)
        {
            (*g_44) = (*g_44);
        }
    }
    return g_26;
}







static char func_2(unsigned short p_3, int p_4, unsigned p_5)
{
    unsigned char l_715[9][7][1] = {{{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}, {{0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}, {0x4AL}}};
    int *l_716 = &g_315;
    int i, j, k;
    (*l_716) = l_715[5][0][0];
    return (*l_716);
}







static unsigned char func_16(char p_17, int p_18, int p_19)
{
    char l_23[4] = {0x48L, 1L, 0x48L, 1L};
    int *l_25 = &g_26;
    int * const *l_531 = &l_25;
    int l_532 = 0x8031CB15L;
    const int *l_535 = (void*)0;
    unsigned l_593 = 0xB6E423DDL;
    int *l_610 = &g_367;
    unsigned short l_638 = 1UL;
    int i;
    for (p_19 = 0; (p_19 <= 3); p_19 += 1)
    {
        int **l_24 = (void*)0;
        unsigned char l_542 = 0x5BL;
        unsigned l_592 = 0UL;
        char l_601 = (-1L);
        int **l_602[10] = {(void*)0, &l_25, (void*)0, &l_25, (void*)0, &l_25, (void*)0, &l_25, (void*)0, &l_25};
        int **l_603 = &l_25;
        int i;
        l_25 = (void*)0;

        ;
        for (p_17 = 3; (p_17 >= 0); p_17 -= 1)
        {
            int * const *l_530 = &l_25;
            int * const **l_529 = &l_530;
            const char l_574 = 0x54L;
            char l_585 = 0x49L;
            short l_591 = 8L;
            int i;
        }
        (*l_603) = (*l_531);
    }

    ;
    (*l_610) = func_48((p_19 >= p_19));
    if (((-8L) && ((-4L) & p_19)))
    {
        unsigned short l_611 = 0x3FAAL;
        int **l_612 = &l_610;
        (*l_610) = (l_611 , l_611);
        p_18 = (-1L);
        (*l_612) = func_27(p_17, p_17, g_521[3][0][2], g_37, g_521[3][0][2]);


        for (g_423 = (-1); (g_423 >= 24); g_423++)
        {
            int l_620[8];
            int *l_621[3][4] = {{&l_532, &l_532, &l_532, &l_532}, {&l_532, &l_532, &l_532, &l_532}, {&l_532, &l_532, &l_532, &l_532}};
            int **l_622[10] = {(void*)0, (void*)0, &l_25, (void*)0, (void*)0, &l_25, (void*)0, (void*)0, &l_25, (void*)0};
            int **l_623 = &l_621[0][2];
            int i, j;
            for (i = 0; i < 8; i++)
                l_620[i] = (-6L);
        }
    }
    else
    {
        unsigned l_627 = 0x0669DE38L;
        int * const l_628 = &g_367;
        int * const *l_637 = &l_25;
        int l_662 = 4L;
        unsigned char l_682 = 0UL;
        unsigned char l_699 = 0x68L;
        (*l_610) = (((((g_26 >= 0x6FL) < g_322[1]) == 9UL) , (void*)0) == (void*)0);
        l_638 = (&g_37 != &l_637);
        for (g_140 = 0; (g_140 >= (-22)); --g_140)
        {
            unsigned l_651 = 18446744073709551615UL;
            int *l_672 = &g_367;
            int *l_673 = &g_367;
            const unsigned short l_696 = 0x928BL;
            for (g_367 = 0; (g_367 <= 1); g_367 += 1)
            {
                int *l_641 = &g_140;
                (*g_44) = &p_18;

                ;
                for (p_19 = 1; (p_19 >= 0); p_19 -= 1)
                {
                    int **l_653 = &l_610;
                    for (l_627 = 0; (l_627 <= 1); l_627 += 1)
                    {
                        int i, j, k;
                        (*g_44) = l_641;

                        ;
                        g_26 = g_521[(g_367 + 4)][g_367][p_19];
                        p_18 = (safe_unary_minus_func_int32_t_s(g_322[l_627]));
                        p_18 = (g_322[g_367] , 0x4C65A2B8L);
                    }

                    ;
                    (*g_44) = ((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((p_17 , p_19) >= (safe_lshift_func_int8_t_s_s(p_19, 5))), p_17)), ((safe_lshift_func_int16_t_s_u(l_651, (g_652 || ((*l_641) , 9L)))) , (4294967286UL <= (*l_641))))) , (void*)0);

                    ;
                    if (p_17)
                        break;
                    (*l_653) = (*l_637);

                    ;
                }

                ;
            }


            if (func_48((func_48((safe_div_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((((((((safe_add_func_int8_t_s_s(g_652, p_19)) & ((safe_mod_func_int32_t_s_s(p_18, (((l_651 < (l_651 >= (g_322[0] ^ p_18))) | l_651) , l_662))) < p_19)) | g_521[3][0][2]) , &g_45) == &g_45) < p_19) > l_651), g_652)) ^ l_651) != g_315) & p_17), l_651))) , 0xE2A726C8L)))
            {
                unsigned char l_665 = 255UL;
                for (l_627 = (-5); (l_627 != 30); l_627 = safe_add_func_int8_t_s_s(l_627, 5))
                {
                    if (g_652)
                        break;
                }
                (*l_628) = l_665;
                p_18 = (((safe_sub_func_uint32_t_u_u(func_48(l_651), p_19)) || (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((g_521[3][0][2] , (l_672 != &p_18)) == ((void*)0 != l_673)), (safe_lshift_func_int8_t_s_u(func_48(p_19), p_18)))), p_18))) < 0x00L);
                for (p_19 = 0; (p_19 != (-3)); --p_19)
                {
                    for (l_627 = (-23); (l_627 != 55); l_627 = safe_add_func_int16_t_s_s(l_627, 5))
                    {
                        (*g_44) = &p_18;

                        ;
                    }


                    (*g_44) = (void*)0;

                    ;
                }
            }
            else
            {
                int *l_683 = &g_315;
                if (g_423)
                {
                    int *l_684 = &g_26;
                    for (l_638 = 0; (l_638 < 32); l_638 = safe_add_func_uint16_t_u_u(l_638, 8))
                    {
                        int **l_685 = &l_610;
                        int **l_686 = &l_610;
                        (*l_628) = (l_682 , p_17);
                        l_684 = l_683;

                        ;
                        (*l_685) = func_61(g_521[3][0][2], func_48(g_652), l_684);

                        ;
                        (*l_686) = (g_521[6][3][0] , func_61(g_315, p_19, &g_26));

                        ;
                    }

                    ;
                }
                else
                {
                    short l_705 = 0L;
                    if (p_17)
                        break;
                    (*l_672) = (*l_672);
                    if ((safe_sub_func_uint8_t_u_u(func_48((*l_672)), (safe_unary_minus_func_int32_t_s((p_19 ^ g_423))))))
                    {
                        p_19 = (((7L & (!(safe_mod_func_uint8_t_u_u(g_521[3][0][2], func_48((((safe_div_func_int32_t_s_s(l_696, 3L)) , (safe_mul_func_int16_t_s_s(g_315, (func_48(g_521[8][0][0]) , p_17)))) != (p_17 , g_140))))))) <= g_315) ^ l_699);
                    }
                    else
                    {
                        int **l_700 = &l_610;
                        (*l_700) = func_61((g_315 | g_652), (*l_683), &p_19);

                        ;
                    }
                    p_19 = (safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(l_705, func_48(g_521[3][0][2]))) , func_48(p_19)) , (*l_672)), (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(p_19, 3)), (safe_lshift_func_int16_t_s_u(p_18, g_367)))), g_423))));
                }
            }


            if (p_19)
                continue;
        }

        ;
    }


    ;
    l_610 = (g_521[3][0][2] , (void*)0);

    ;
    return p_18;
}







static int * const func_27(int p_28, int p_29, unsigned p_30, int ** p_31, unsigned p_32)
{
    unsigned l_40 = 0x1BBBBFEFL;
    int *l_47 = &g_26;
    int **l_46 = &l_47;
    int *l_65 = &g_26;
    (*l_47) = ((((safe_lshift_func_uint16_t_u_u(((l_40 , func_41(g_44, (((p_30 , g_26) || ((l_46 == &l_47) && (((*l_47) && (func_48((safe_add_func_uint32_t_u_u(func_52(g_37, func_57(func_61(g_26, (**l_46), l_65), g_140, p_30), p_31, &l_65), p_29))) < 4294967294UL)) == 1L))) || 9L))) , (*l_47)), p_30)) , (-5L)) == g_521[3][0][2]) == g_521[3][0][2]);


    (*l_46) = &p_28;

    ;
    return &g_367;


}







static int func_41(const int ** const p_42, unsigned p_43)
{
    short l_412[7] = {0L, 0xCA9EL, 0L, 0xCA9EL, 0L, 0xCA9EL, 0L};
    char l_446 = 0x11L;
    int *l_465 = &g_367;
    int **l_464 = &l_465;
    int i;
    for (g_26 = 0; (g_26 <= (-17)); g_26 = safe_sub_func_int32_t_s_s(g_26, 1))
    {
        char l_409 = 1L;
        unsigned char l_410 = 3UL;
        const int * const *l_435 = &g_45;
        int **l_467 = &l_465;
        for (g_140 = (-3); (g_140 < 24); g_140++)
        {
            int *l_404 = (void*)0;
            int **l_403 = &l_404;
            int *l_411 = &g_315;
            (*l_411) = (p_43 || ((p_43 ^ ((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(g_367, ((((safe_mod_func_uint16_t_u_u((g_315 != (~(safe_div_func_int16_t_s_s((p_42 == l_403), (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((p_43 >= 253UL), (l_409 >= l_409))) < 0x192E0207L), g_367)))))), 0xA6BCL)) != 1UL) && g_367) ^ p_43))) , 0x34L), l_410)) >= 1UL)) >= 0xEE41L));
            for (l_410 = 0; (l_410 <= 1); l_410 += 1)
            {
                int i;
                return g_322[l_410];
            }
            if (l_412[0])
            {
                int l_413 = 3L;
                for (g_315 = 0; g_315 < 2; g_315 += 1)
                {
                    g_322[g_315] = 0xADA9AE9DL;
                }
                if (l_413)
                    continue;
            }
            else
            {
                int l_416 = 0x8CC1B151L;
                short l_457 = (-1L);
                if ((((((((safe_add_func_int8_t_s_s(l_416, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_43, (0x7CCC5574L & (&g_44 != &p_42)))), p_43)))) != g_140) <= ((p_43 ^ (~(g_367 <= 0UL))) , g_315)) , g_423) & g_26) , 0x6EA5L) == 0L))
                {
                    int l_444 = 0x69606F89L;
                    const unsigned l_445[2][3][7] = {{{0x908CE7FDL, 0xE9865CD3L, 0xF9FB7ABCL, 0xE9865CD3L, 0x908CE7FDL, 0x0F76DA6CL, 0xF9FB7ABCL}, {0x908CE7FDL, 0xE9865CD3L, 0xF9FB7ABCL, 0xE9865CD3L, 0x908CE7FDL, 0x0F76DA6CL, 0xF9FB7ABCL}, {0x908CE7FDL, 0xE9865CD3L, 0xF9FB7ABCL, 0xE9865CD3L, 0x908CE7FDL, 0x0F76DA6CL, 0xF9FB7ABCL}}, {{0x908CE7FDL, 0xE9865CD3L, 0xF9FB7ABCL, 0xE9865CD3L, 0x908CE7FDL, 0x0F76DA6CL, 0xF9FB7ABCL}, {0x908CE7FDL, 0xE9865CD3L, 0xF9FB7ABCL, 0xE9865CD3L, 0x908CE7FDL, 0x0F76DA6CL, 0xF9FB7ABCL}, {0x908CE7FDL, 0xE9865CD3L, 0xF9FB7ABCL, 0xE9865CD3L, 0x908CE7FDL, 0x0F76DA6CL, 0xF9FB7ABCL}}};
                    int i, j, k;
                    for (l_410 = 0; l_410 < 7; l_410 += 1)
                    {
                        l_412[l_410] = 0x19C3L;
                    }
                    if (l_409)
                        continue;
                    for (g_315 = (-16); (g_315 >= 7); g_315 = safe_add_func_uint16_t_u_u(g_315, 5))
                    {
                        int l_428 = 0x88B1FAFBL;
                        int *l_447 = &l_428;
                        (*p_42) = &l_416;

                        ;
                        g_367 = ((g_140 & ((safe_div_func_uint8_t_u_u(l_428, (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_322[0] <= (safe_mul_func_uint16_t_u_u((l_435 != ((((!(((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(3L, 7)) | ((&p_42 == &p_42) > ((**l_435) & (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_444 >= l_416) , 0xF7E4L), p_43)), l_412[4]))))), l_445[0][1][1])) == l_428) != g_140)) , 0xB1C1F842L) , g_322[1]) , &g_45)), (**l_435)))), p_43)), g_322[1])))) && p_43)) | l_446);
                        (*l_447) = (**g_44);
                        (*l_403) = (void*)0;
                    }


                }
                else
                {
                    unsigned l_448 = 0x4C903916L;
                    (*p_42) = ((((l_448 != l_412[0]) | ((void*)0 != &g_45)) , ((0x98L ^ ((l_412[0] && (l_416 , l_416)) != (((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_43, l_409)), 1L)) != 0x20FB14A0L) , l_416))) && g_140)) , (void*)0);

                    ;
                    (*p_42) = ((g_322[1] | l_416) , (*p_42));
                    for (l_416 = (-3); (l_416 < (-21)); l_416 = safe_sub_func_uint32_t_u_u(l_416, 1))
                    {
                        (*l_411) = l_448;
                        if (p_43)
                            break;
                    }
                }


                (*l_411) = 0x5BED76DEL;
                (*p_42) = (*l_403);

                ;
                if ((safe_mod_func_uint16_t_u_u(l_457, g_26)))
                {
                    char l_460 = 0L;
                    for (g_315 = 28; (g_315 < (-29)); g_315--)
                    {
                        (*g_44) = (*g_44);
                        l_416 = l_460;
                        (*p_42) = (*p_42);
                        (*p_42) = (*p_42);
                    }
                    for (p_43 = (-19); (p_43 <= 56); p_43 = safe_add_func_int32_t_s_s(p_43, 7))
                    {
                        int *l_463 = &g_367;
                        l_416 = 0x6C9952BFL;
                        (*g_44) = l_463;

                        ;
                        g_315 = 0x1DC41066L;
                    }

                    ;
                    if (l_457)
                        break;
                }
                else
                {
                    int ***l_466[5] = {&g_37, &l_403, &g_37, &l_403, &g_37};
                    unsigned short l_470 = 0x9907L;
                    int i;
                    l_467 = l_464;
                    if ((0L != g_26))
                    {
                        (*l_465) = (safe_add_func_int8_t_s_s(g_367, p_43));
                        return l_470;
                    }
                    else
                    {
                        (**l_467) = p_43;
                        (**l_467) = 1L;
                    }
                }

                ;
            }
        }
    }
    for (g_367 = (-19); (g_367 < 4); g_367 = safe_add_func_uint8_t_u_u(g_367, 5))
    {
        char l_485 = 0x2AL;
        int *l_493 = &g_367;
        const int *l_503[1];
        int l_517 = (-10L);
        int i;
        for (i = 0; i < 1; i++)
            l_503[i] = &g_26;
        for (g_26 = 18; (g_26 >= 28); g_26++)
        {
            unsigned l_488[9][6] = {{0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}, {0UL, 4294967295UL, 0xC69D896AL, 0x326B4D6FL, 0x9EEA80F1L, 0xBB3AB9D2L}};
            int *l_489[6];
            unsigned l_492 = 0xFBD36EA0L;
            int i, j;
            for (i = 0; i < 6; i++)
                l_489[i] = &g_315;
            g_315 = (g_322[1] > (safe_rshift_func_int16_t_s_u((~p_43), (safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(g_423, (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_485, (g_367 > g_140))), ((g_322[0] >= (g_367 != ((safe_lshift_func_int8_t_s_s((0x67EFL ^ g_367), (**l_464))) | 0UL))) && 0UL))))) != 0xE489L) , l_488[1][4]), 0x55D5L)))));
            for (g_315 = 0; (g_315 != 11); g_315 = safe_add_func_uint8_t_u_u(g_315, 3))
            {
                l_492 = (*l_465);
                (*p_42) = l_493;

                ;
            }
            if ((((*l_493) >= ((safe_lshift_func_uint16_t_u_s(g_315, (g_322[1] , (((((((p_43 < g_315) ^ ((9L <= ((g_315 >= p_43) <= ((safe_add_func_int16_t_s_s((*l_493), 9L)) , (*l_493)))) > 255UL)) , g_367) , (void*)0) != (void*)0) && 0x2FB0L) && p_43)))) , (*l_493))) || g_423))
            {
                unsigned l_516 = 18446744073709551610UL;
                for (l_485 = 0; (l_485 > 29); l_485++)
                {
                    unsigned l_502 = 0UL;
                    int l_510[2];
                    int l_515 = 0xDA53EE17L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_510[i] = 0xD195E66BL;
                    (*p_42) = ((safe_rshift_func_uint8_t_u_u(l_502, 3)) , l_503[0]);

                    ;
                    g_140 = ((0UL && 0xC7D15100L) | (((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_140, ((**p_42) & l_510[0]))) || ((void*)0 != &g_44)), 8)) ^ (safe_lshift_func_uint8_t_u_s((((void*)0 != &l_465) , g_140), 4))), 15)) > 0x18L) , p_43));
                    for (g_423 = 0; (g_423 != (-6)); g_423--)
                    {
                        l_515 = ((**p_42) == g_423);
                        l_516 = (**p_42);
                        l_517 = (**g_44);
                        l_515 = (safe_unary_minus_func_int8_t_s(p_43));
                    }
                }
                for (l_517 = 4; (l_517 >= 0); l_517 -= 1)
                {
                    for (g_423 = 5; (g_423 >= 0); g_423 -= 1)
                    {
                        int i;
                        l_489[g_423] = (*l_464);
                    }
                }


                if (p_43)
                    break;
            }
            else
            {
                unsigned l_519 = 4294967295UL;
                int *l_520 = &g_315;
                g_140 = l_519;
                (*l_464) = l_520;

                ;
            }


        }
        if ((*l_493))
            break;
    }

    ;
    return (*l_465);
}







static unsigned func_48(int p_49)
{
    int *l_377 = &g_26;
    const int **l_379 = &g_45;
    const int ***l_378 = &l_379;
    int **l_388 = &l_377;
    (*l_377) = 0x64089EE8L;
    (*l_378) = &g_45;
    (*l_379) = &g_315;

    ;
    (*l_388) = func_61((**l_379), (safe_rshift_func_uint8_t_u_u((((**l_378) != (void*)0) && (safe_mul_func_int16_t_s_s(2L, (safe_lshift_func_uint8_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s((*l_377), p_49))))))), 2)), l_377);


    return g_315;
}







static unsigned func_52(int ** p_53, int * const * p_54, int ** p_55, int ** const p_56)
{
    unsigned char l_309 = 1UL;
    unsigned l_310[8] = {0xBF1BFE3DL, 0xAB118BC7L, 0xBF1BFE3DL, 0xAB118BC7L, 0xBF1BFE3DL, 0xAB118BC7L, 0xBF1BFE3DL, 0xAB118BC7L};
    int *l_323 = (void*)0;
    int **l_343[9] = {(void*)0, (void*)0, &l_323, (void*)0, (void*)0, &l_323, (void*)0, (void*)0, &l_323};
    int l_352 = (-1L);
    char l_372 = 0L;
    const short l_373[4][1] = {{0x3038L}, {0x3038L}, {0x3038L}, {0x3038L}};
    short l_374 = 1L;
    unsigned short l_375 = 0UL;
    int l_376 = 0L;
    int i, j;
    (**p_56) = ((l_309 & l_309) < l_309);
    for (g_26 = 6; (g_26 >= 1); g_26 -= 1)
    {
        int l_321[7][6][6] = {{{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}, {{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}, {{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}, {{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}, {{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}, {{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}, {{(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}, {(-2L), 1L, 0L, 1L, 0L, 0x8EEF7C79L}}};
        int l_327[6][7] = {{(-8L), 9L, 0x4BE8A045L, 0x4BE8A045L, 9L, (-8L), 9L}, {(-8L), 9L, 0x4BE8A045L, 0x4BE8A045L, 9L, (-8L), 9L}, {(-8L), 9L, 0x4BE8A045L, 0x4BE8A045L, 9L, (-8L), 9L}, {(-8L), 9L, 0x4BE8A045L, 0x4BE8A045L, 9L, (-8L), 9L}, {(-8L), 9L, 0x4BE8A045L, 0x4BE8A045L, 9L, (-8L), 9L}, {(-8L), 9L, 0x4BE8A045L, 0x4BE8A045L, 9L, (-8L), 9L}};
        int i, j, k;
        for (l_309 = 2; (l_309 <= 7); l_309 += 1)
        {
            int * const l_311 = (void*)0;
            int *l_313 = &g_26;
            int **l_312[9] = {&l_313, &l_313, &l_313, &l_313, &l_313, &l_313, &l_313, &l_313, &l_313};
            int **l_314 = &l_313;
            int i;
            (*l_314) = l_311;

            ;
            if (l_310[l_309])
            {
                unsigned char l_320 = 8UL;
                int *l_333 = &l_327[3][6];
                (*p_56) = &g_140;


                for (g_140 = 2; (g_140 <= 7); g_140 += 1)
                {
                    int *l_316[8][1] = {{&g_26}, {&g_26}, {&g_26}, {&g_26}, {&g_26}, {&g_26}, {&g_26}, {&g_26}};
                    int i, j;
                    for (g_315 = 0; (g_315 <= 7); g_315 += 1)
                    {
                        unsigned l_319 = 0xE592466DL;
                        (*g_44) = l_316[2][0];

                        ;
                        l_319 = (safe_sub_func_uint8_t_u_u((l_309 == 6L), 4L));
                    }
                    for (g_315 = 7; (g_315 >= 0); g_315 -= 1)
                    {
                        if (l_320)
                            break;
                        g_322[1] = l_321[0][1][3];
                    }
                    return g_140;


                }
                if (l_321[0][1][3])
                    continue;
                if (((g_140 , l_323) == (*p_56)))
                {
                    int *l_324 = &g_26;
                    (*p_56) = l_324;


                    for (g_315 = 7; (g_315 >= 0); g_315 -= 1)
                    {
                        p_54 = p_54;
                        (*l_314) = ((((-3L) == ((l_320 & (g_26 || g_322[0])) | (0xA1L > g_26))) < l_310[6]) , l_324);

                        ;
                        l_327[2][6] = ((g_322[1] | g_26) != ((**p_56) >= g_26));
                        (*g_44) = (*p_56);

                        ;
                    }

                    ;
                    g_315 = 0xEEA1D027L;
                    if (((safe_sub_func_uint32_t_u_u(((((safe_sub_func_int8_t_s_s((((p_54 == ((g_322[1] < (*l_324)) , &l_324)) , g_26) >= (((g_322[1] , &l_327[4][5]) == (*p_56)) > (*l_324))), g_315)) && l_320) , l_320) ^ 65535UL), l_321[5][0][4])) > g_322[0]))
                    {
                        int *l_332 = &g_315;
                        (*g_44) = l_332;

                        ;
                        return g_322[1];
                    }
                    else
                    {
                        (*p_56) = l_333;


                    }


                }
                else
                {
                    if ((**p_56))
                    {
                        unsigned l_337 = 0x35AD49D2L;
                        int l_342 = 0x26FEDE40L;
                        l_342 = ((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(g_26, (((*l_333) || l_337) ^ (safe_add_func_uint16_t_u_u(g_315, (safe_add_func_uint32_t_u_u(g_322[0], 0x0D1BDF20L))))))))) != g_322[1]);
                        (*p_56) = &l_342;


                        l_343[8] = p_55;
                    }
                    else
                    {
                        (*g_44) = &l_327[4][5];

                        ;
                        (*l_333) = (**p_56);
                    }


                    for (g_140 = 0; (g_140 <= 7); g_140 += 1)
                    {
                        return g_140;


                    }
                }


                ;
            }
            else
            {
                short l_353[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_353[i] = 0x78D5L;
                g_140 = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_327[4][4], 3)), (safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_321[0][1][3] >= (g_315 || (g_26 >= (+g_315)))), (l_321[0][1][3] & l_327[2][2]))) , ((l_352 , l_353[6]) , g_140)), g_140))));
            }

            ;
        }



        if (l_327[3][1])
            continue;


        g_315 = (safe_lshift_func_uint8_t_u_u((&l_327[1][5] == &l_327[1][4]), 6));
        for (l_309 = 2; (l_309 <= 7); l_309 += 1)
        {
            int *l_356 = &l_327[2][6];
            g_315 = l_321[6][5][1];
            l_356 = &g_140;

            ;
        }
    }



    (*p_56) = (void*)0;


    l_376 = (safe_mod_func_uint16_t_u_u((((((safe_add_func_uint16_t_u_u(g_322[0], (((safe_lshift_func_int8_t_s_s((((&g_140 != ((((~(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((g_322[1] >= (g_367 , 0xA1223F12L)) != 0xE2L), (!g_322[0]))), g_322[0])) , (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((((((g_367 < l_372) , g_367) <= g_315) , g_322[1]) , l_373[0][0]) > l_374), g_140)), g_26))) ^ g_367)) , 0L) , g_140) , (void*)0)) , g_26) && g_322[1]), 6)) || l_375) || g_140))) , &g_315) == (void*)0) > 0x10L) , 0x8DEAL), g_140));
    return g_322[0];
}







static int * const * func_57(int * const p_58, char p_59, unsigned short p_60)
{
    int *l_142 = (void*)0;
    int **l_141 = &l_142;
    int **l_143[8][5][4] = {{{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}, {{&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}, {&l_142, &l_142, &l_142, (void*)0}}};
    int **l_144 = (void*)0;
    int **l_145 = &l_142;
    short l_203 = 0xBF25L;
    int l_300 = 0xE2D49E9BL;
    const unsigned short l_301 = 0x79C2L;
    short l_303 = 0L;
    const int l_308[3][2][6] = {{{6L, 0x2E3CCA1BL, 0x654D56DCL, (-1L), 0x654D56DCL, 0x2E3CCA1BL}, {6L, 0x2E3CCA1BL, 0x654D56DCL, (-1L), 0x654D56DCL, 0x2E3CCA1BL}}, {{6L, 0x2E3CCA1BL, 0x654D56DCL, (-1L), 0x654D56DCL, 0x2E3CCA1BL}, {6L, 0x2E3CCA1BL, 0x654D56DCL, (-1L), 0x654D56DCL, 0x2E3CCA1BL}}, {{6L, 0x2E3CCA1BL, 0x654D56DCL, (-1L), 0x654D56DCL, 0x2E3CCA1BL}, {6L, 0x2E3CCA1BL, 0x654D56DCL, (-1L), 0x654D56DCL, 0x2E3CCA1BL}}};
    int i, j, k;
    (*l_141) = p_58;

    ;
    (*l_145) = p_58;
    if ((*p_58))
    {
        for (p_59 = 0; (p_59 != (-11)); p_59 = safe_sub_func_uint32_t_u_u(p_59, 5))
        {
            short l_160 = 1L;
            (**l_141) = (p_59 > (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((p_58 != p_58) ^ (safe_lshift_func_uint16_t_u_s(0x4E00L, p_59))) == (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_160, (((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s(((*l_142) == g_140))) || p_59), p_60)) == (*p_58)) == g_140))), p_60)), g_26))), 0)), g_26)));
        }
    }
    else
    {
        int * const *l_164 = (void*)0;
        const unsigned l_198 = 0x4D6EFB63L;
        int *l_204 = &g_26;
        int l_250 = (-1L);
        unsigned char l_260 = 0x3EL;
        short l_261 = (-8L);
        if (((*p_58) ^ (*l_142)))
        {
            return l_164;


        }
        else
        {
            int **l_165 = &l_142;
            int **l_276[7][9] = {{&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}, {&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}, {&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}, {&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}, {&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}, {&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}, {&l_204, &l_204, &l_204, &l_142, &l_204, &l_204, &l_142, &l_142, &l_204}};
            int **l_277 = &l_204;
            int i, j;
            if ((**l_141))
            {
                unsigned short l_208 = 0xD625L;
                (**l_145) = (p_60 < 65535UL);
                if (((void*)0 != &p_58))
                {
                    char l_166 = 0xE4L;
                    if (((l_165 == (void*)0) , l_166))
                    {
                        const int *l_167 = (void*)0;
                        (*l_142) = (**l_165);
                        (*g_44) = l_167;

                        ;
                        l_141 = (void*)0;

                        ;
                    }
                    else
                    {
                        int **l_168[8];
                        int **l_169[10][10][2] = {{{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}, {{(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}, {(void*)0, &l_142}}};
                        int **l_170 = &l_142;
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_168[i] = &l_142;
                        (*l_170) = p_58;
                        (*p_58) = (((safe_sub_func_int8_t_s_s(0xFBL, 2UL)) <= (safe_lshift_func_uint16_t_u_s(g_140, 11))) , g_26);
                    }

                    ;
                    for (p_59 = 0; (p_59 <= 23); ++p_59)
                    {
                        int *l_185 = &g_26;
                        (*p_58) = (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((l_166 , ((void*)0 == l_185)) && (safe_div_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((0x2DBFL == (!(safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((*p_58), (*p_58))), 4)))))), g_26)), p_59)) && (&g_45 == l_164)))), (**l_145)))) , p_60) , p_59), (**l_165))), g_26)), (-10L))), (*l_185)));
                    }
                    return g_37;


                }
                else
                {
                    int *l_199 = &g_140;
                    int l_221 = (-1L);
                    if (l_198)
                    {
                        unsigned short l_200 = 65535UL;
                        int *l_201[5];
                        int **l_202 = &l_201[0];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_201[i] = &g_140;
                        (*l_202) = func_61((p_60 , (**l_165)), ((((void*)0 != p_58) > ((g_26 && (((l_199 != (void*)0) , (void*)0) != ((*l_142) , (void*)0))) ^ l_200)) , p_59), l_201[3]);
                    }
                    else
                    {
                        int **l_205[6][7] = {{&l_199, &l_204, &l_204, &l_199, &l_199, (void*)0, &l_199}, {&l_199, &l_204, &l_204, &l_199, &l_199, (void*)0, &l_199}, {&l_199, &l_204, &l_204, &l_199, &l_199, (void*)0, &l_199}, {&l_199, &l_204, &l_204, &l_199, &l_199, (void*)0, &l_199}, {&l_199, &l_204, &l_204, &l_199, &l_199, (void*)0, &l_199}, {&l_199, &l_204, &l_204, &l_199, &l_199, (void*)0, &l_199}};
                        int **l_206 = (void*)0;
                        int **l_207 = &l_204;
                        int i, j;
                        (*l_207) = func_61(l_203, g_26, l_204);
                    }
                    if ((*p_58))
                    {
                        (**l_145) = 0xAAAF8999L;
                        (*l_142) = (g_140 != (l_208 ^ g_26));
                        (**l_141) = 0x71DA066FL;
                    }
                    else
                    {
                        int **l_209 = &l_204;
                        int **l_210 = &l_204;
                        (*l_209) = func_61(p_60, p_60, l_204);
                        (*p_58) = (!9L);
                        (*l_210) = p_58;
                        (*g_44) = func_61(p_59, (safe_add_func_uint16_t_u_u(g_140, (**l_141))), (*l_165));

                        ;
                    }
                    for (g_140 = 0; (g_140 != (-8)); g_140 = safe_sub_func_uint8_t_u_u(g_140, 9))
                    {
                        (**l_165) = ((void*)0 != p_58);
                    }
                    for (g_26 = 23; (g_26 > (-23)); g_26--)
                    {
                        (*l_145) = &g_140;

                        ;
                        (**l_141) = (**l_141);
                        (*l_142) = ((g_26 | (safe_lshift_func_uint8_t_u_u(((((g_140 >= 0x79L) || ((*p_58) >= ((0L != ((void*)0 != p_58)) , (safe_div_func_int16_t_s_s((((((l_221 , p_58) != (void*)0) > 2UL) != 5L) , p_60), 65528UL))))) , p_59) , 0x2AL), 0))) > g_140);
                    }

                    ;
                }

                ;
                (*p_58) = (**l_145);
            }
            else
            {
                const unsigned l_245 = 0x99BF4135L;
                (*l_145) = &g_26;
                if ((p_60 > (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_60, 7UL)), (**l_165)))))
                {
                    if ((safe_sub_func_uint8_t_u_u(p_60, (safe_rshift_func_uint16_t_u_s(((*p_58) > (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_140, (safe_rshift_func_uint16_t_u_s(g_140, 1)))), ((safe_mul_func_int8_t_s_s(g_140, (&g_45 != &g_45))) ^ 0x1410L)))), g_140)))))
                    {
                        char l_242 = 0x64L;
                        (*p_58) = (((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u(((!(p_59 || l_242)) == g_140), (safe_lshift_func_int8_t_s_u(((g_140 > (l_245 || g_140)) <= ((**l_165) || p_59)), p_59)))) >= 0x2614C50DL) , p_60), 7)) || (**l_145)) != g_26);
                    }
                    else
                    {
                        unsigned short l_274[2][10] = {{0x9810L, 65533UL, 0x9810L, 65533UL, 0x9810L, 65533UL, 0x9810L, 65533UL, 0x9810L, 65533UL}, {0x9810L, 65533UL, 0x9810L, 65533UL, 0x9810L, 65533UL, 0x9810L, 65533UL, 0x9810L, 65533UL}};
                        int i, j;
                        (**l_145) = (safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(p_60, (l_250 , (safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u((l_260 || l_261), (((9L == (g_26 <= (safe_sub_func_int16_t_s_s((((0UL >= ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(1UL, (safe_add_func_uint16_t_u_u(p_59, 65534UL)))) == l_274[0][2]) , 2L), g_140)) <= (*p_58)), p_60)) , l_245)) ^ 0x3572653DL) <= g_140), g_140)))) < 0xC1L) , g_140))))), l_245)) ^ l_245), p_60)) <= g_26) <= 0x47L), g_140))))) ^ 0x9F93L), 0x3408L));
                    }
                }
                else
                {
                    int * const *l_275 = &l_204;
                    return g_37;


                }
            }

            ;
            (*p_58) = (*p_58);
            (*l_277) = func_61(p_60, g_140, &l_250);

            ;
            for (p_60 = 0; (p_60 <= 3); p_60 += 1)
            {
                int *l_283[6] = {&g_26, &g_26, &l_250, &g_26, &g_26, &l_250};
                int i;
                for (l_250 = 0; (l_250 <= 6); l_250 += 1)
                {
                    int i, j;
                    return g_37;


                }
                for (l_260 = 2; (l_260 <= 6); l_260 += 1)
                {
                    short l_282 = 0xEF5CL;
                    for (p_59 = 5; (p_59 >= 1); p_59 -= 1)
                    {
                        int l_278 = 0x27E28ABAL;
                        int **l_279 = (void*)0;
                        int **l_280[2];
                        int **l_281 = &l_204;
                        int *l_296 = &l_250;
                        int **l_297 = &l_204;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_280[i] = &l_142;
                        if (l_278)
                            break;
                        (*l_281) = p_58;

                        ;
                        l_283[1] = func_61(p_60, g_140, (l_282 , (void*)0));
                        (*l_297) = ((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((*p_58), ((void*)0 != l_276[2][7]))), (safe_sub_func_uint32_t_u_u(p_60, 4UL)))) , func_61((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*p_58), 0x9D225D92L)), 7)), (safe_add_func_uint8_t_u_u(g_140, p_59)), l_296));

                        ;
                    }
                    for (l_282 = 0; (l_282 <= 3); l_282 += 1)
                    {
                        int **l_298 = (void*)0;
                        int **l_299 = &l_283[5];
                        (*l_299) = p_58;
                        if ((*p_58))
                            continue;
                    }
                }


            }
        }

        ;
        ;
    }

    ;
    (*p_58) = (((249UL || ((p_60 > l_300) >= (*p_58))) | l_301) & (safe_unary_minus_func_uint16_t_u((((l_303 , (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((l_308[0][1][3] >= (*p_58)), 0)) & (p_59 < p_59)), 0x5B90L))) , g_26) < p_60))));
    return g_37;


}







static int * const func_61(char p_62, unsigned short p_63, int * p_64)
{
    int **l_139 = (void*)0;
    l_139 = func_66(p_63, p_63, g_37);
    return p_64;


}







static int ** func_66(int p_67, unsigned p_68, int * const * p_69)
{
    int *l_75[5][5][2] = {{{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}}};
    int **l_74 = &l_75[1][2][0];
    int *l_102 = (void*)0;
    int i, j, k;
    g_26 = ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_74 == (g_26 , &l_75[1][2][0])), ((void*)0 != &g_45))), (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_67 >= (-1L)), (safe_mul_func_uint16_t_u_u(((p_69 != (void*)0) , 0xAEFFL), p_68)))), 9L)))) | p_68);
    for (p_68 = 29; (p_68 <= 57); ++p_68)
    {
        char l_90[7];
        int l_99 = (-6L);
        int **l_106 = (void*)0;
        int *l_107 = &g_26;
        const int **l_112 = &g_45;
        const int * const *l_125 = (void*)0;
        char l_126 = (-1L);
        int i;
        for (i = 0; i < 7; i++)
            l_90[i] = 0x59L;
        g_26 = (((((safe_sub_func_uint16_t_u_u((g_26 , ((safe_add_func_uint16_t_u_u(65533UL, p_68)) | ((((((safe_lshift_func_int8_t_s_s(l_90[4], 4)) , (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((0xBAE66525L | (safe_mod_func_int8_t_s_s((&g_45 != (void*)0), l_90[4]))) , (((safe_lshift_func_int8_t_s_s(l_90[1], 7)) < 1UL) > p_67)) , 0UL), g_26)), g_26))) >= 1UL) | l_90[6]) , g_26) <= 1UL))), 0UL)) , l_90[4]) , 0x12L) != l_99) < g_26);
        for (l_99 = 27; (l_99 >= (-28)); l_99--)
        {
            l_102 = (*l_74);
            (*g_44) = (*l_74);

            ;
            for (p_67 = 0; (p_67 < 20); ++p_67)
            {
                int **l_105[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_105[i] = &l_75[1][2][0];
                return l_106;


            }
        }
        (*g_44) = l_107;

        ;
        if ((safe_add_func_int32_t_s_s((**g_44), ((((p_69 == &g_45) , p_68) >= ((safe_mul_func_uint16_t_u_u(((void*)0 == l_112), (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_67, (((p_68 && (*g_45)) && p_68) || (**g_44)))), g_26)))) < (*l_107))) , p_67))))
        {
            int l_121 = 0x9C3224A6L;
            int l_124 = (-1L);
            (*g_44) = (((*g_45) == ((void*)0 != &l_102)) , (*g_44));
            for (g_26 = 11; (g_26 == (-22)); g_26 = safe_sub_func_int8_t_s_s(g_26, 4))
            {
                short l_137 = 0L;
                (*g_44) = (*g_44);
                if (((l_121 && (safe_mod_func_uint32_t_u_u(l_124, p_68))) & (p_69 != l_125)))
                {
                    (*l_112) = (*g_44);
                }
                else
                {
                    l_126 = (*g_45);
                }
                for (l_126 = 0; (l_126 > (-27)); l_126--)
                {
                    short l_131[8] = {0x650DL, 1L, 0x650DL, 1L, 0x650DL, 1L, 0x650DL, 1L};
                    int * const l_132 = &l_121;
                    int i;
                    if ((safe_div_func_uint8_t_u_u((*l_107), ((l_131[1] >= p_67) , p_68))))
                    {
                        int **l_133[3][3];
                        int **l_134[6];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_133[i][j] = &l_75[1][2][0];
                        }
                        for (i = 0; i < 6; i++)
                            l_134[i] = &l_107;
                        (*l_112) = l_132;

                        ;
                        if ((*l_132))
                            continue;
                        (*l_132) = ((safe_sub_func_int16_t_s_s(0L, ((g_26 , 0xCBB879D1L) & (g_26 && ((((l_137 , (*g_44)) != (((*l_74) != &l_121) , (*g_44))) , 0x4EL) , g_26))))) & p_68);
                        (*l_112) = &l_121;
                    }
                    else
                    {
                        (*l_132) = (*g_45);
                        (*l_132) = 0x6D56307DL;
                        (*g_44) = (*g_44);
                    }
                    if (l_121)
                        continue;
                }
            }

            ;
        }
        else
        {
            int **l_138 = &l_75[3][0][1];
            return g_37;


        }


    }

    ;
    return g_37;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_322[i], "g_322[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_521[i][j][k], "g_521[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_652, "g_652", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
