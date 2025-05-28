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


union U0 {
   const unsigned f0;
   unsigned f1;
   const short f2;
   int f3;
};


static volatile unsigned g_27 = 0UL;
static unsigned char g_28 = 0xC6L;
static unsigned g_45[7][4] = {{4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}, {4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}, {4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}, {4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}, {4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}, {4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}, {4294967295UL, 4294967286UL, 4294967295UL, 4294967286UL}};
static unsigned g_76[7] = {2UL, 2UL, 2UL, 2UL, 2UL, 2UL, 2UL};
static int g_88 = 0x04C9466BL;
static unsigned g_103 = 0x4405C6DFL;
static unsigned char g_116 = 0x26L;
static unsigned char g_127 = 0x2FL;
static unsigned g_133 = 0x59864EC0L;
static unsigned g_138 = 0xE78BCBB5L;
static unsigned short g_141 = 0xB013L;
static volatile unsigned g_144 = 0xB3C15363L;
static unsigned g_153 = 7UL;
static unsigned char g_154 = 3UL;
static int g_157[5] = {0x04A2F46FL, (-8L), 0x04A2F46FL, (-8L), 0x04A2F46FL};
static int g_170[10][10] = {{(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}, {(-1L), 0xBB4DD17DL, (-1L), 0x7BBAC150L, (-8L), 0L, 0L, (-10L), 0L, 0L}};
static unsigned short g_230 = 3UL;
static unsigned short g_235 = 1UL;
static unsigned char g_262 = 0x8DL;
static int g_306 = 0x9ECAB78EL;
static unsigned char g_360 = 0x01L;
static unsigned char g_433[7][7][5] = {{{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}, {{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}, {{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}, {{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}, {{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}, {{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}, {{255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}, {255UL, 0xA9L, 255UL, 0xF7L, 9UL}}};
static unsigned g_440 = 0xAFAA862AL;
static volatile unsigned g_464 = 1UL;
static union U0 g_466 = {0x0F9E3BD0L};
static unsigned short g_473 = 0xF8ACL;
static int g_501 = 0x1275483DL;
static int g_513 = 0xA02A47BCL;
static short g_520 = 0x43EEL;
static unsigned char g_530[1][8][1] = {{{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}};
static unsigned g_538 = 8UL;
static unsigned char g_565 = 0xDBL;
static volatile unsigned short g_572 = 0xC9D7L;
static int g_573[8] = {0x1CFE587BL, 0x1CFE587BL, (-9L), 0x1CFE587BL, 0x1CFE587BL, (-9L), 0x1CFE587BL, 0x1CFE587BL};
static int g_591[4][8] = {{0L, 0x84F1C4C7L, 0L, (-6L), 0L, (-6L), 0L, 0x84F1C4C7L}, {0L, 0x84F1C4C7L, 0L, (-6L), 0L, (-6L), 0L, 0x84F1C4C7L}, {0L, 0x84F1C4C7L, 0L, (-6L), 0L, (-6L), 0L, 0x84F1C4C7L}, {0L, 0x84F1C4C7L, 0L, (-6L), 0L, (-6L), 0L, 0x84F1C4C7L}};
static short g_629 = 0x5FE9L;
static unsigned g_821 = 3UL;
static char g_845 = 0xB0L;
static const volatile unsigned g_1038[6] = {0UL, 0UL, 1UL, 0UL, 0UL, 1UL};
static volatile int g_1073[6] = {(-2L), (-2L), (-2L), (-2L), (-2L), (-2L)};
static int g_1080 = 1L;
static short g_1120 = (-1L);
static unsigned g_1155 = 0x8A729B62L;
static unsigned char g_1181[7][3][6] = {{{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}, {{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}, {{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}, {{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}, {{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}, {{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}, {{9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}, {9UL, 0UL, 0xE4L, 0xF6L, 0xE9L, 248UL}}};
static unsigned g_1202[1][9][1] = {{{0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}, {0xAC18E2C9L}}};
static int g_1209 = (-9L);
static unsigned g_1210 = 0x04041D6FL;
static volatile unsigned char g_1281[8] = {0x8CL, 0x8CL, 0x4BL, 0x8CL, 0x8CL, 0x4BL, 0x8CL, 0x8CL};
static unsigned short g_1348[3][4][5] = {{{0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}}, {{0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}}, {{0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}, {0x72A4L, 0xA00CL, 65535UL, 0xF94CL, 65535UL}}};
static int g_1370[1] = {0x948F0A75L};
static unsigned g_1638 = 0xC4753DB7L;
static int g_1640 = 0xF5AEEE62L;
static unsigned g_1783[7] = {4294967290UL, 4294967290UL, 4294967290UL, 4294967290UL, 4294967290UL, 4294967290UL, 4294967290UL};
static short g_1784[8][10] = {{6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}, {6L, 6L, 0L, 0xE9D2L, (-1L), 0xE9D2L, 0L, 6L, 6L, 0L}};
static unsigned char g_1869 = 253UL;
static unsigned g_1885 = 0x710BFB22L;



static const int func_1(void);
static unsigned short func_2(unsigned short p_3, short p_4, unsigned p_5, unsigned p_6, char p_7);
static const int func_8(int p_9, int p_10, int p_11, char p_12);
static const short func_20(const char p_21, int p_22);
static const char func_23(unsigned p_24, unsigned p_25, unsigned char p_26);
static int func_29(int p_30);
static short func_31(unsigned p_32);
static unsigned short func_42(char p_43, int p_44);
static short func_49(int p_50, const char p_51, union U0 p_52);
static const unsigned short func_55(unsigned char p_56, int p_57, unsigned p_58, char p_59);
static const int func_1(void)
{
    short l_13[7] = {0x878AL, 0xC365L, 0x878AL, 0xC365L, 0x878AL, 0xC365L, 0x878AL};
    unsigned char l_1295 = 0x04L;
    unsigned l_1927 = 0xCD4B1408L;
    int i;
    l_1927 = (func_2((func_8(l_13[3], (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(9L, (safe_sub_func_int16_t_s_s((-1L), func_20(func_23(l_13[5], (g_27 < l_13[3]), g_28), l_13[3]))))), l_13[3])), l_1295, l_1295) >= g_1202[0][5][0]), g_1202[0][5][0], l_1295, l_13[3], g_1202[0][2][0]) < l_13[3]);
    return l_1927;
}







static unsigned short func_2(unsigned short p_3, short p_4, unsigned p_5, unsigned p_6, char p_7)
{
    unsigned short l_1775 = 7UL;
    int l_1776 = 0x0C552FE1L;
    unsigned l_1804 = 0x59528141L;
    int l_1818[9];
    int i;
    for (i = 0; i < 9; i++)
        l_1818[i] = 0L;
    g_513 = ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_473 = (safe_add_func_uint16_t_u_u(3UL, (g_520 = ((l_1775 = 9UL) <= 0xA661C7ADL))))), func_42(l_1776, g_157[4]))), g_1181[5][2][2])) || 0x4EL);
    l_1776 = l_1776;
    for (g_466.f3 = 13; (g_466.f3 >= 27); g_466.f3 = safe_add_func_uint8_t_u_u(g_466.f3, 3))
    {
        unsigned char l_1779 = 3UL;
        for (g_88 = 0; (g_88 <= 7); g_88 += 1)
        {
            return g_103;
        }
        l_1779 = p_3;
    }
    for (g_127 = (-11); (g_127 > 11); g_127++)
    {
        const unsigned short l_1817 = 0UL;
        int l_1849 = 2L;
        char l_1861[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1861[i] = 5L;
        for (g_1210 = 1; (g_1210 <= 6); g_1210 += 1)
        {
            int l_1782[8];
            short l_1831 = 5L;
            const unsigned short l_1839 = 0xC7B6L;
            int i;
            for (i = 0; i < 8; i++)
                l_1782[i] = 9L;
            for (p_6 = 0; (p_6 <= 2); p_6 += 1)
            {
                int i, j, k;
                g_170[3][2] = ((65533UL & g_1181[p_6][p_6][(p_6 + 3)]) >= g_76[p_6]);
                g_170[3][2] = (l_1782[3] = (g_1281[(p_6 + 5)] >= func_42(l_1782[3], l_1782[0])));
            }
            g_1370[0] = p_3;
            g_1370[0] = (g_138 > (func_42(p_5, (g_1783[5] | (0L ^ 0L))) == l_1782[4]));
            for (p_3 = 0; (p_3 <= 9); p_3 += 1)
            {
                int l_1834 = 0x58D81519L;
                int i, j;
                g_170[p_3][(g_1210 + 1)] = (g_1784[7][3] || func_42(l_1775, ((g_170[p_3][(g_1210 + 1)] = p_6) != (safe_sub_func_uint32_t_u_u((p_7 | ((p_5 = 1UL) > func_42((l_1776 = p_6), (g_1783[5] || g_1209)))), l_1782[3])))));
                for (g_466.f1 = 0; (g_466.f1 <= 2); g_466.f1 += 1)
                {
                    int l_1787 = 0L;
                    int l_1788 = 0x5BCEE810L;
                    int i;
                    if ((l_1788 = (l_1787 = g_1073[(g_466.f1 + 1)])))
                    {
                        unsigned char l_1795 = 251UL;
                        int l_1805 = 5L;
                        l_1776 = ((safe_add_func_uint8_t_u_u(g_157[3], p_5)) && (l_1805 = ((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_1795, (safe_div_func_int16_t_s_s(func_42((((((safe_rshift_func_int8_t_s_s(((1UL < ((g_157[3] | (safe_div_func_int32_t_s_s(l_1804, g_170[p_3][(g_1210 + 1)]))) != ((4294967295UL > func_42(g_1080, g_170[p_3][(g_1210 + 1)])) != p_7))) >= g_153), p_5)) & 65535UL) != 0UL) || g_27) == g_170[p_3][(g_1210 + 1)]), g_1348[2][0][4]), p_4)))), g_433[4][6][3])) || g_144)));
                    }
                    else
                    {
                        l_1818[2] = (p_5 != ((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((safe_mod_func_int16_t_s_s(0xCFD1L, 7UL)))), (g_466.f1 >= (safe_add_func_uint32_t_u_u((safe_mul_func_int32_t_s_s(p_5, ((l_1782[6] = (((l_1776 = 0xCC85L) & (safe_rshift_func_uint16_t_u_s(g_170[p_3][(g_1210 + 1)], (g_520 = g_466.f2)))) > ((l_1782[5] > p_5) & l_1782[0]))) >= l_1804))), 0x11C4D7BBL))))) > p_4) || l_1817) <= l_1775));
                        return g_1348[1][3][1];
                    }
                    for (g_306 = 2; (g_306 >= 0); g_306 -= 1)
                    {
                        unsigned char l_1832 = 0x41L;
                        const int l_1833 = (-7L);
                        g_170[p_3][(g_1210 + 1)] = func_42((safe_rshift_func_int16_t_s_s((((l_1782[2] = l_1817) && ((g_845 = ((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((g_76[0] = ((safe_lshift_func_uint16_t_u_u(g_1783[6], p_3)) == (0xE1L > (g_170[3][2] > (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(g_1202[0][5][0], (-6L))), (func_42((l_1782[0] = p_7), l_1831) <= g_170[p_3][(g_1210 + 1)]))))))), l_1787)), g_573[7])) <= g_821)) == g_1783[1])) & l_1832), l_1833)), g_170[p_3][(g_1210 + 1)]);
                    }
                }
                g_1370[0] = (g_170[p_3][(g_1210 + 1)] = 0x60A37F9AL);
                for (g_1120 = 2; (g_1120 >= 0); g_1120 -= 1)
                {
                    l_1834 = (g_170[p_3][(g_1210 + 1)] = (-4L));
                    for (p_4 = 0; (p_4 <= 2); p_4 += 1)
                    {
                        int i, j, k;
                        if (g_1348[g_1120][p_4][p_4])
                            break;
                    }
                }
            }
            for (p_3 = 2; (p_3 <= 7); p_3 += 1)
            {
                int l_1846[2][9][4] = {{{1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}}, {{1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}, {1L, 0xFEC8F61AL, 1L, 0xFEC8F61AL}}};
                unsigned char l_1858 = 1UL;
                int l_1868 = 0x58429D3EL;
                unsigned l_1925[7][8][1] = {{{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}, {{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}, {{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}, {{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}, {{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}, {{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}, {{0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}, {0x2CCCBD86L}}};
                int i, j, k;
                if (((safe_lshift_func_int16_t_s_s(((l_1776 = ((safe_mod_func_uint32_t_u_u(l_1839, p_3)) == 0L)) >= g_76[3]), func_42(p_3, (g_1038[1] || 0x33EEL)))) >= l_1839))
                {
                    int l_1843 = 0x9A5A5F8BL;
                    for (g_629 = 0; (g_629 <= 2); g_629 += 1)
                    {
                        unsigned char l_1840 = 0xF0L;
                        if (l_1840)
                            break;
                        l_1776 = p_5;
                    }
                    g_1080 = (l_1849 = func_42((safe_mod_func_uint8_t_u_u(((g_573[4] | ((-5L) | (((l_1843 = g_45[6][1]) ^ ((-1L) ^ (l_1817 != ((safe_sub_func_uint8_t_u_u(0xFEL, (l_1846[1][3][3] | (((g_466.f0 & (p_5 <= 0x3F547172L)) ^ 0xBECB63F5L) <= p_5)))) & p_7)))) < g_88))) > 0x0A2741D1L), l_1818[0])), g_127));
                    g_513 = l_1843;
                }
                else
                {
                    short l_1884 = 0x5B27L;
                    int l_1926 = 0x07D01B6FL;
                    for (g_501 = 0; (g_501 <= 0); g_501 += 1)
                    {
                        int i, j, k;
                        g_1370[0] = (safe_lshift_func_int8_t_s_u(func_42((safe_mod_func_uint8_t_u_u(g_1370[g_501], g_530[g_501][p_3][g_501])), l_1776), ((safe_mod_func_int16_t_s_s(l_1775, ((0x141D66D2L == (l_1849 & 0xAC732B30L)) ^ (0x5CL | 255UL)))) < p_4)));
                        g_170[8][7] = (((+0x9A1A61E6L) == ((safe_add_func_int8_t_s_s((l_1858 = g_1784[7][3]), g_845)) == p_7)) & (safe_div_func_int32_t_s_s((l_1861[3] & (((safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((p_4 = (~((l_1782[3] ^ (g_1869 = (l_1868 = (safe_div_func_uint32_t_u_u(g_1370[g_501], 0x3CE952EFL))))) == (g_466.f0 >= p_5)))), g_28)) & g_1210), l_1846[1][3][3])) == 9L) || p_5)), p_7)));
                        return g_1281[5];
                    }
                    l_1818[1] = (((safe_div_func_uint16_t_u_u((g_141 ^ (g_1783[5] = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(4294967292UL, (safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((l_1782[2] = func_42((g_845 = l_1831), (safe_add_func_uint8_t_u_u((g_157[3] && (safe_rshift_func_uint8_t_u_s((g_433[0][6][0] = ((g_1885 = (l_1884 = 0L)) > g_76[0])), l_1858))), g_1038[5])))), l_1861[3])), g_360)))), p_3)))), g_629)) > 254UL) & g_153);
                    if (g_513)
                        continue;
                    if (g_27)
                    {
                        short l_1890[7][3] = {{(-10L), 1L, 0L}, {(-10L), 1L, 0L}, {(-10L), 1L, 0L}, {(-10L), 1L, 0L}, {(-10L), 1L, 0L}, {(-10L), 1L, 0L}, {(-10L), 1L, 0L}};
                        int l_1901 = 0L;
                        int i, j;
                        g_1080 = func_42(((safe_mod_func_uint32_t_u_u(((((g_466.f0 != (l_1890[6][2] = (safe_mod_func_uint32_t_u_u(((-1L) >= p_7), l_1846[1][3][3])))) ^ (safe_rshift_func_uint16_t_u_u((l_1846[0][3][2] | g_573[4]), ((g_170[1][4] = ((safe_lshift_func_int8_t_s_s(p_3, (0xD3L ^ (g_845 = func_42(((safe_lshift_func_uint16_t_u_s((g_141 = ((safe_lshift_func_int16_t_s_s(func_42((safe_div_func_int16_t_s_s(l_1782[3], l_1804)), l_1884), g_170[3][2])) == (-1L))), g_1784[7][3])) ^ g_157[3]), l_1839))))) == g_170[3][4])) != g_157[0])))) | p_4) <= l_1901), g_157[1])) | 0x704EL), g_530[0][1][0]);
                        if (g_1281[6])
                            break;
                        g_170[3][2] = l_1901;
                        g_170[3][2] = (l_1849 = (safe_sub_func_uint16_t_u_u(func_42((safe_unary_minus_func_int8_t_s(0x85L)), p_4), (((((((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_1861[3], (g_235 = (safe_unary_minus_func_int32_t_s((g_1370[0] = p_5)))))), (safe_mod_func_int8_t_s_s(g_103, g_433[2][5][2])))) ^ g_520) == (0x84L && p_7)) && g_1348[2][0][4]) >= 9L) & 0x8F51133CL) >= p_3))));
                    }
                    else
                    {
                        unsigned l_1924 = 0x06777D0FL;
                        l_1926 = ((safe_lshift_func_int16_t_s_s(0x91C2L, 11)) && (!((l_1925[5][1][0] = func_42(p_6, (g_360 < (safe_sub_func_uint32_t_u_u(func_42((+(safe_sub_func_int8_t_s_s(g_629, func_42((l_1861[1] < ((l_1782[3] = ((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((p_4 & (((((safe_lshift_func_uint16_t_u_s((g_1181[2][1][5] <= 0x82L), g_1120)) != l_1861[3]) < g_306) <= 0L) || l_1868)) <= g_1281[5]), 13)), g_45[2][0])) & p_5) > 4294967293UL) & p_3)) | p_4)), l_1924)))), g_1370[0]), l_1831))))) || 0x74L)));
                    }
                }
            }
        }
    }
    return p_3;
}







static const int func_8(int p_9, int p_10, int p_11, char p_12)
{
    unsigned short l_1312[5][4] = {{1UL, 0x002AL, 65528UL, 0x818AL}, {1UL, 0x002AL, 65528UL, 0x818AL}, {1UL, 0x002AL, 65528UL, 0x818AL}, {1UL, 0x002AL, 65528UL, 0x818AL}, {1UL, 0x002AL, 65528UL, 0x818AL}};
    int l_1349 = 0xD83F891CL;
    unsigned l_1409 = 0xDD7B30D9L;
    unsigned l_1469 = 4294967287UL;
    int l_1478 = 0x7721FD67L;
    unsigned short l_1486 = 0x09D9L;
    short l_1489 = 0xB04FL;
    unsigned l_1593 = 4294967295UL;
    volatile unsigned char l_1625 = 0UL;
    char l_1653 = 0x47L;
    short l_1659 = 0xEFF4L;
    char l_1674 = 0xA4L;
    int l_1677[5][2][2] = {{{0x0ADA943BL, 1L}, {0x0ADA943BL, 1L}}, {{0x0ADA943BL, 1L}, {0x0ADA943BL, 1L}}, {{0x0ADA943BL, 1L}, {0x0ADA943BL, 1L}}, {{0x0ADA943BL, 1L}, {0x0ADA943BL, 1L}}, {{0x0ADA943BL, 1L}, {0x0ADA943BL, 1L}}};
    unsigned short l_1686 = 65530UL;
    short l_1701[9] = {0x1F63L, 0x1F63L, 7L, 0x1F63L, 0x1F63L, 7L, 0x1F63L, 0x1F63L, 7L};
    short l_1703[1][4] = {{5L, (-1L), 5L, (-1L)}};
    int i, j, k;
lbl_1614:
    for (g_230 = 0; (g_230 != 19); g_230++)
    {
        char l_1302[8] = {0L, 0L, 0x5BL, 0L, 0L, 0x5BL, 0L, 0L};
        int l_1424[6] = {7L, 2L, 7L, 2L, 7L, 2L};
        int l_1440[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1440[i] = (-3L);
        if (p_11)
            break;
        for (g_565 = (-21); (g_565 == 10); g_565 = safe_add_func_int32_t_s_s(g_565, 9))
        {
            short l_1303 = (-1L);
            unsigned l_1313[10];
            int i;
            for (i = 0; i < 10; i++)
                l_1313[i] = 4294967294UL;
            g_170[3][2] = (g_28 != (safe_rshift_func_int16_t_s_s((0x4090L != g_230), l_1302[3])));
            p_10 = func_42(l_1303, (((+((g_573[4] > (safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((+g_1120), ((safe_lshift_func_int8_t_s_u(l_1312[4][1], 0)) ^ l_1312[4][1]))), l_1312[4][1])) >= l_1313[4]), 1))) <= p_10)) & l_1302[5]) >= 0xA890L));
        }
        for (g_821 = 1; (g_821 <= 7); g_821 += 1)
        {
            short l_1323 = 9L;
            const int l_1333 = 0x992AC442L;
            unsigned l_1438[10];
            int l_1439 = 0x17F901CBL;
            int l_1458 = 9L;
            int i;
            for (i = 0; i < 10; i++)
                l_1438[i] = 0x50571691L;
            for (g_538 = 0; (g_538 <= 7); g_538 += 1)
            {
                const int l_1318 = 6L;
                for (g_133 = 2; (g_133 <= 7); g_133 += 1)
                {
                    int l_1330 = 0xF299996BL;
                    int i;
                    if (g_573[g_821])
                        break;
                    p_10 = ((safe_mod_func_uint8_t_u_u(((((0x3B53L ^ ((((g_262 = (((safe_sub_func_uint32_t_u_u((((0x00L & l_1318) == (safe_div_func_uint8_t_u_u((~(safe_rshift_func_uint16_t_u_u(((l_1323 = 4294967295UL) || (safe_add_func_int8_t_s_s(g_1281[5], (((safe_mod_func_int8_t_s_s(func_42(((safe_sub_func_int16_t_s_s(((l_1330 >= 0xAA470733L) <= (((safe_sub_func_uint16_t_u_u(g_520, func_42(func_42((g_88 || g_360), l_1323), l_1323))) && g_591[0][7]) > g_235)), l_1330)) > g_1202[0][5][0]), g_573[g_821]), 0x01L)) < (-1L)) ^ p_12)))), g_821))), 248UL))) != 255UL), l_1302[3])) > g_153) || l_1312[1][0])) > l_1312[3][1]) | g_573[g_821]) == g_1209)) <= 65527UL) == p_12) != l_1333), p_9)) >= p_9);
                    g_466.f3 = (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((-9L), p_9)), (safe_rshift_func_uint16_t_u_u(func_42(g_157[3], g_466.f1), (safe_mod_func_int16_t_s_s(((safe_div_func_int8_t_s_s((p_10 ^ p_10), (safe_rshift_func_int8_t_s_s(l_1312[4][1], 1)))) != ((safe_add_func_int32_t_s_s((g_573[g_821] >= g_466.f2), 0L)) && g_845)), l_1330))))));
                    if (g_76[0])
                        break;
                }
                for (g_1120 = 0; (g_1120 <= 3); g_1120 += 1)
                {
                    int i, j;
                    g_466.f3 = g_591[g_1120][g_538];
                    g_1348[2][0][4] = func_42(g_1202[0][5][0], l_1333);
                    if (p_12)
                        continue;
                }
            }
            if (((l_1349 = func_42(g_154, g_629)) <= ((g_1210 = (0x0EL && 0x2CL)) & 0x6F8A3881L)))
            {
                return p_11;
            }
            else
            {
                short l_1360[4] = {9L, 1L, 9L, 1L};
                int l_1363[7][2] = {{6L, 0L}, {6L, 0L}, {6L, 0L}, {6L, 0L}, {6L, 0L}, {6L, 0L}, {6L, 0L}};
                int i, j;
                g_501 = func_42(func_42(p_10, (p_12 <= ((safe_sub_func_uint16_t_u_u(4UL, (safe_add_func_uint16_t_u_u(g_466.f2, (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((func_42((func_42(l_1360[0], ((safe_lshift_func_int16_t_s_u((((l_1363[1][1] = l_1302[7]) < (safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(1L, (func_42((p_12 > (safe_div_func_uint8_t_u_u((!p_12), p_11))), g_1370[0]) <= (-1L)))), p_9))) & p_10), 6)) < 1L)) <= g_1120), g_88) <= l_1302[3]) & g_573[7]), (-9L))), l_1360[0])) && p_10), g_440)))))) ^ g_1155))), l_1302[1]);
                g_1080 = (0xA9L | (safe_sub_func_uint32_t_u_u((p_10 && (l_1363[1][1] = (g_1281[5] || (l_1302[1] <= func_42((l_1323 > (l_1302[3] == ((safe_add_func_uint8_t_u_u(((l_1302[3] < (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_1302[3], l_1312[4][1])), g_1370[0]))) <= p_12), p_11)) <= p_9))), g_1120))))), 0xC02C2FC5L)));
            }
            for (g_565 = 0; (g_565 <= 3); g_565 += 1)
            {
                short l_1385 = 0xC707L;
                unsigned short l_1388[4][3] = {{0x9022L, 0x9022L, 0xD07AL}, {0x9022L, 0x9022L, 0xD07AL}, {0x9022L, 0x9022L, 0xD07AL}, {0x9022L, 0x9022L, 0xD07AL}};
                int l_1461[10][2][3] = {{{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}, {{0x584F0914L, 0x00F9754AL, 0x584F0914L}, {0x584F0914L, 0x00F9754AL, 0x584F0914L}}};
                int i, j, k;
                g_170[3][2] = (safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((g_572 && g_1202[0][5][0]), (0UL || ((l_1302[4] != (p_12 == 0x42L)) && (l_1385 = ((safe_sub_func_int16_t_s_s(((0x80E0L && l_1349) == (0UL && 0L)), l_1312[3][0])) && l_1333)))))) && 65534UL), 4));
                if (func_42(p_10, (g_1370[0] = ((g_1348[0][2][4] = (safe_sub_func_int8_t_s_s(func_42(l_1385, l_1312[4][1]), (0xFFL != l_1388[3][1])))) | p_9))))
                {
                    int l_1429[5][10] = {{0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L}, {0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L}, {0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L}, {0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L}, {0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L, 0L, 1L, 0x1FBE2011L, 1L}};
                    int i, j;
                    g_1080 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_11, p_10)), g_513));
                    if ((safe_add_func_uint32_t_u_u(((l_1349 = (safe_sub_func_int32_t_s_s(((g_513 || (((l_1302[5] ^ (((safe_mod_func_uint16_t_u_u((((g_262 = func_42(l_1302[3], (safe_rshift_func_uint16_t_u_u(l_1385, g_440)))) <= (safe_lshift_func_int16_t_s_u((p_10 ^ ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(g_170[0][4], 13)) > (safe_div_func_int16_t_s_s(((p_11 ^ (-1L)) || p_10), 0x170CL))), 2)) ^ 0x37L)), 6))) & g_76[3]), 65531UL)) && l_1323) && p_9)) == l_1302[6]) <= l_1409)) == p_9), l_1302[3]))) && 0x2658L), p_12)))
                    {
                        unsigned char l_1412 = 3UL;
                        l_1412 = (safe_mod_func_int8_t_s_s(0L, 0x69L));
                        l_1424[3] = ((p_10 & (((-1L) != ((l_1349 = (safe_lshift_func_uint8_t_u_u(((l_1349 | (safe_unary_minus_func_int8_t_s(((safe_div_func_uint8_t_u_u((~g_591[0][4]), (0x2678L ^ p_11))) >= ((safe_add_func_uint8_t_u_u((l_1409 < (0xD5L <= func_42(g_1073[5], g_116))), p_10)) <= l_1412))))) || g_170[3][2]), 7))) >= 1L)) < g_821)) >= g_1370[0]);
                    }
                    else
                    {
                        l_1440[1] = (safe_add_func_uint16_t_u_u((g_1181[3][1][0] < (g_433[2][1][2] || func_42((0xEDFFL & (safe_rshift_func_int16_t_s_u(p_10, func_42(l_1429[0][4], (g_262 >= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((-3L), (l_1424[3] = 1L))), (l_1440[1] = (safe_sub_func_int16_t_s_s((l_1439 = (l_1438[0] <= p_11)), 65535UL))))) && l_1429[0][4]), l_1302[3]))))))), l_1302[3]))), 0xB778L));
                        l_1424[3] = p_9;
                        return p_9;
                    }
                    for (g_1210 = 0; (g_1210 <= 3); g_1210 += 1)
                    {
                        int i;
                        p_10 = ((safe_rshift_func_int8_t_s_u((g_845 = 0L), l_1429[0][4])) == ((l_1388[1][0] == (l_1440[g_1210] = p_9)) ^ ((l_1349 = g_45[1][2]) & (l_1424[0] = g_591[0][7]))));
                    }
                }
                else
                {
                    for (g_466.f1 = 0; (g_466.f1 <= 0); g_466.f1 += 1)
                    {
                        return l_1438[0];
                    }
                }
                for (g_1080 = 7; (g_1080 >= 1); g_1080 -= 1)
                {
                    int l_1449 = 1L;
                    int l_1468 = 0xC49CB4E4L;
                    if ((safe_add_func_int32_t_s_s((l_1312[3][1] <= ((~((safe_mul_func_uint8_t_u_u(l_1438[5], (0xAE08650DL == 0xC0E6FEBDL))) >= (safe_rshift_func_int16_t_s_s(p_12, 12)))) < ((l_1449 & ((p_10 && func_42(g_360, l_1388[2][2])) > 5UL)) ^ (-9L)))), g_27)))
                    {
                        unsigned short l_1450 = 65535UL;
                        unsigned l_1451 = 7UL;
                        p_10 = (p_11 = func_42(g_306, (g_1370[0] && (g_473 = l_1450))));
                        if (l_1451)
                            break;
                        g_170[7][7] = func_42((((g_1348[2][3][3] <= (l_1439 = (g_1281[7] < (l_1451 < g_157[1])))) < l_1388[1][0]) <= ((safe_mod_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s((l_1458 = (safe_sub_func_uint16_t_u_u(g_1120, (l_1449 | (+(-4L)))))), func_42(((g_45[1][2] = ((safe_rshift_func_int16_t_s_u((l_1461[3][0][0] = g_133), 9)) & 0x1EL)) & p_12), g_127))) < g_1181[4][2][4]) & g_538) & g_565), 0xF92DL)) == g_440)), l_1440[1]);
                        l_1461[3][0][0] = (-1L);
                    }
                    else
                    {
                        return g_572;
                    }
                    if ((g_513 = (l_1349 = (safe_rshift_func_int8_t_s_u((p_12 >= (safe_add_func_uint32_t_u_u(l_1449, 1L))), 2)))))
                    {
                        volatile short l_1470 = 0x9ED9L;
                        p_10 = (safe_add_func_uint8_t_u_u(p_11, l_1458));
                        l_1469 = l_1468;
                        l_1470 = g_144;
                    }
                    else
                    {
                        unsigned l_1473 = 0UL;
                        l_1440[1] = (((g_153 && 0L) >= (safe_sub_func_uint32_t_u_u(func_42(l_1473, (l_1469 <= func_42(p_11, p_10))), (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((!1UL), g_76[5])), p_11))))) <= 1L);
                        g_513 = l_1424[3];
                        p_10 = p_9;
                        p_10 = (func_42(l_1478, p_12) & g_1080);
                    }
                    for (l_1478 = 0; (l_1478 <= 3); l_1478 += 1)
                    {
                        unsigned char l_1483 = 0xABL;
                        l_1468 = ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(func_42(l_1449, ((l_1483 = g_157[0]) >= func_42(g_127, l_1438[8]))), 0xC2L)), 7)) > (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int8_t_s(0x39L)))));
                        g_513 = l_1486;
                    }
                }
            }
            for (g_565 = 0; (g_565 <= 3); g_565 += 1)
            {
                int l_1494 = 0L;
                int l_1501 = 2L;
                p_11 = func_42(g_573[4], ((g_116 ^ ((((safe_add_func_uint32_t_u_u(l_1489, g_466.f1)) <= ((g_45[1][2] = l_1489) ^ p_12)) != ((l_1409 & (p_11 >= g_1209)) >= (-1L))) > p_11)) && g_45[1][2]));
                g_1370[0] = (((g_1181[4][1][0] = ((p_9 != ((safe_div_func_uint32_t_u_u(((func_42((safe_lshift_func_uint16_t_u_u((l_1494 <= func_42(((p_12 = (func_42((l_1501 = ((safe_add_func_uint16_t_u_u(((l_1458 && l_1494) != (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((~1L) <= (((p_11 && func_42(p_10, l_1424[2])) > g_530[0][4][0]) || p_10)), l_1478)), g_1038[1]))), 0x9057L)) && g_235)), p_9) | l_1494)) && g_591[0][7]), p_9)), 1)), g_76[0]) < l_1312[4][1]) | 4294967295UL), (-1L))) & p_11)) != 0x3DD3L)) != l_1424[3]) | 4294967295UL);
                if ((0xDEL > p_9))
                {
                    unsigned l_1512 = 18446744073709551612UL;
                    p_10 = l_1439;
                    if (l_1458)
                    {
                        short l_1531[9] = {0x9CE9L, 0x5FD2L, 0x9CE9L, 0x5FD2L, 0x9CE9L, 0x5FD2L, 0x9CE9L, 0x5FD2L, 0x9CE9L};
                        int i;
                        g_1080 = (((!(g_440 ^ p_9)) < (0L > l_1494)) ^ (safe_mod_func_uint16_t_u_u(((g_138 || (safe_rshift_func_uint16_t_u_s(1UL, 10))) <= (safe_sub_func_uint16_t_u_u((6L == func_42((g_466.f1 <= ((safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((((g_440 > g_133) == p_9) || g_501) > l_1478), l_1512)), 0xCBL)) & 0x5604EF4FL)), p_9)), l_1501))), g_1281[5])));
                        p_10 = (safe_div_func_int32_t_s_s((p_11 = (safe_sub_func_int8_t_s_s((g_845 = (safe_sub_func_uint8_t_u_u(func_42(func_42(p_9, p_9), (((p_12 != p_11) && (g_629 = (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_520 = (safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((+(((((l_1469 | ((safe_lshift_func_uint8_t_u_u((l_1512 != (safe_sub_func_int16_t_s_s(((l_1439 = g_433[4][6][3]) > ((~(l_1512 || p_9)) | 65532UL)), 65535UL))), l_1531[7])) >= l_1440[1])) < g_433[4][6][3]) & l_1501) ^ g_573[4]) < l_1494)), 7L)) | 1UL) | p_10), l_1458))), p_11)), p_10)))) <= g_262)), 0xB0L))), 9UL))), 0x1BA8EC38L));
                    }
                    else
                    {
                        if (g_28)
                            break;
                        g_466.f3 = func_42(p_12, p_9);
                    }
                }
                else
                {
                    int l_1556 = 1L;
                    int l_1557[5] = {0xF1E651ADL, 0xDDF18F64L, 0xF1E651ADL, 0xDDF18F64L, 0xF1E651ADL};
                    int i;
                    if (p_11)
                    {
                        char l_1540 = 0x0AL;
                        p_10 = p_11;
                        g_513 = (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_1556 = ((safe_rshift_func_int8_t_s_u(0x17L, func_42(l_1540, (safe_sub_func_int32_t_s_s((~(p_10 = (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((l_1349 = (l_1440[1] = l_1438[0])), 5)), (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((4294967291UL < (0x40L == (p_12 = ((safe_add_func_int32_t_s_s((g_466.f3 = g_133), (p_11 = (l_1438[0] >= l_1439)))) <= p_10)))))), 0xEE853051L)))) == 3L) > l_1323), 0x587FL)), g_433[6][2][4])))), 0xB2A0E2E7L))))) >= g_573[5])), 2)), p_9)), 0x90L));
                        l_1557[1] = 1L;
                    }
                    else
                    {
                        p_10 = (safe_div_func_uint32_t_u_u((((func_42(p_9, (safe_div_func_uint32_t_u_u(((p_9 == (safe_add_func_uint8_t_u_u((func_42(((g_1202[0][5][0] != g_466.f1) && g_103), (safe_div_func_uint16_t_u_u((func_42(((safe_div_func_uint32_t_u_u(((0x9F24L != (g_629 = (~9L))) < 0x1358D7E5L), func_42(l_1323, p_12))) <= p_12), p_10) <= 0L), 1L))) <= p_12), g_27))) >= g_1181[4][2][4]), 4294967295UL))) & l_1557[3]) && g_1181[0][1][2]) < l_1494), p_9));
                        g_1080 = 0x11DF8511L;
                        return l_1424[3];
                    }
                }
            }
        }
    }
    for (g_513 = 28; (g_513 > (-1)); g_513 = safe_sub_func_int32_t_s_s(g_513, 2))
    {
        const short l_1576[6] = {0xCEC5L, 0x1AB3L, 0xCEC5L, 0x1AB3L, 0xCEC5L, 0x1AB3L};
        int l_1577 = 1L;
        char l_1578 = 1L;
        unsigned short l_1579 = 0xE829L;
        int l_1639 = (-1L);
        int l_1731 = 0xBF00298EL;
        int i;
        if ((safe_add_func_uint16_t_u_u((((func_55((l_1579 = (l_1578 = (g_28 = (func_42((safe_mod_func_int32_t_s_s((~(p_10 = p_10)), l_1576[1])), g_520) && (l_1577 = (l_1349 = func_42(g_1080, (g_466.f3 = (1UL & l_1409))))))))), g_1073[5], g_153, l_1576[1]) <= g_513) <= 0xD96AL) && g_157[3]), l_1576[1])))
        {
            char l_1584[5][6][5] = {{{1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}}, {{1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}}, {{1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}}, {{1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}}, {{1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}, {1L, 0xC4L, 0xD5L, 0L, 0L}}};
            int l_1594 = (-5L);
            int l_1595 = (-1L);
            const int l_1667 = 0x1FD86DDCL;
            unsigned l_1676 = 4UL;
            int i, j, k;
            l_1595 = (((safe_mod_func_uint16_t_u_u(l_1578, ((((p_11 = (safe_mod_func_int32_t_s_s((l_1594 = ((((g_1080 = (g_306 ^ l_1584[2][4][2])) ^ (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(p_12, 2)) ^ g_530[0][3][0]), (safe_sub_func_int8_t_s_s(((g_76[0] > (g_1348[2][0][4] = func_42(((5L == l_1349) && ((func_42(l_1593, g_513) != 0UL) || 6L)), l_1584[2][3][2]))) && 0x85AFL), p_9)))) ^ 5UL) <= 0UL)) >= p_9) || p_10)), g_1202[0][5][0]))) > 0x1F57D135L) == p_10) && g_116))) && g_1281[5]) >= p_10);
            for (g_127 = 0; (g_127 <= 4); g_127 += 1)
            {
                int l_1664 = 3L;
                const short l_1728 = 0x2767L;
                int i, j;
                for (g_141 = 0; (g_141 <= 9); g_141 += 1)
                {
                    return g_360;
                }
                if ((p_12 && (p_12 <= (l_1349 || (g_170[(g_127 + 5)][(g_127 + 3)] = (g_1038[3] > 65526UL))))))
                {
                    int l_1606 = 0L;
                    for (g_520 = 1; (g_520 <= 4); g_520 += 1)
                    {
                        unsigned l_1613 = 0xC7C4EEAFL;
                        l_1349 = ((((~p_11) || (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(p_12, (safe_lshift_func_int16_t_s_u(p_11, (safe_add_func_int8_t_s_s((((func_42((g_845 = ((safe_mod_func_int8_t_s_s(l_1606, func_42(g_133, (g_530[0][4][0] <= (func_42((safe_lshift_func_uint8_t_u_s((255UL != ((func_42((safe_add_func_uint8_t_u_u(((!p_10) | (safe_sub_func_uint8_t_u_u(3UL, 0x53L))), 5UL)), l_1613) <= 0UL) && l_1613)), 5)), g_845) != g_170[(g_127 + 5)][(g_127 + 3)]))))) != p_9)), g_1181[4][2][4]) <= 0x67D8971AL) > g_170[(g_127 + 5)][(g_127 + 3)]) & (-10L)), g_170[(g_127 + 5)][(g_127 + 3)])))))), l_1606))) > p_12) < g_235);
                        if (g_501)
                            break;
                    }
                }
                else
                {
                    int l_1615 = 0xB01640BEL;
                    unsigned l_1618 = 0x9A4A212DL;
                    short l_1641 = 4L;
                    unsigned l_1675 = 0xE722D7B4L;
                    for (g_1120 = 0; (g_1120 <= 4); g_1120 += 1)
                    {
                        l_1594 = g_103;
                        if (l_1595)
                            continue;
                        if (g_235)
                            goto lbl_1614;
                        l_1615 = p_12;
                    }
                    for (g_821 = 1; (g_821 <= 4); g_821 += 1)
                    {
                        g_501 = ((l_1579 ^ (safe_rshift_func_uint16_t_u_s(l_1594, 9))) && l_1618);
                        p_10 = (safe_add_func_uint32_t_u_u(p_12, (g_45[2][3] = l_1584[2][4][2])));
                        g_170[9][0] = ((safe_lshift_func_uint16_t_u_u((g_88 != (0x2EL > 0L)), 3)) && 0xA5L);
                        l_1625 = g_464;
                    }
                    if (((safe_mod_func_uint16_t_u_u(((((g_45[1][2] = ((safe_mod_func_uint8_t_u_u((((l_1595 = ((((safe_mod_func_uint32_t_u_u(0x03BDBE41L, 0xE4D06AB8L)) < func_42((g_1640 = (safe_add_func_int8_t_s_s((-1L), ((g_573[0] == (g_1080 = (safe_sub_func_int16_t_s_s((-7L), (func_42((g_1638 = (g_845 = (p_12 >= ((safe_mod_func_uint32_t_u_u((func_42(g_1155, g_170[(g_127 + 5)][(g_127 + 3)]) < l_1615), g_170[(g_127 + 5)][(g_127 + 3)])) ^ p_9)))), p_11) ^ l_1618))))) > l_1639)))), g_170[(g_127 + 5)][(g_127 + 3)])) == 0xEEF36FE2L) <= p_9)) || l_1578) != g_573[7]), l_1615)) < p_11)) <= p_9) == 8UL) & 0x8EL), 1UL)) == 65535UL))
                    {
                        int l_1652[8][4][7] = {{{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}, {{0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}, {0xF0A2AB8DL, 0x6FE54228L, 0x2340A280L, 0xD2990CE8L, 0xA9C01E03L, 0x8ADBE053L, 0xA9C01E03L}}};
                        int l_1656 = 0x0F7EA79BL;
                        int i, j, k;
                        l_1641 = (-1L);
                        if (g_127)
                            continue;
                        p_11 = (func_42((g_845 = (-1L)), g_306) | (safe_div_func_uint8_t_u_u(((l_1652[4][2][2] = (p_10 >= (((safe_lshift_func_uint8_t_u_u(l_1615, 3)) > g_1210) < (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_1281[5] == (((!p_10) | ((p_10 >= l_1576[4]) | g_1348[2][0][4])) != l_1595)), g_153)), 7)), l_1478))))) >= l_1653), 0xCAL)));
                        l_1656 = (!func_42(l_1615, (safe_sub_func_uint16_t_u_u(0xA99EL, g_1281[5]))));
                    }
                    else
                    {
                        return g_520;
                    }
                    if ((g_501 = (((p_12 = func_42((safe_rshift_func_uint16_t_u_u(l_1659, func_42(p_10, g_45[1][2]))), (+p_9))) || 0x16L) >= (safe_lshift_func_int16_t_s_u((((g_170[3][2] = g_1073[0]) != (safe_rshift_func_uint8_t_u_u(g_466.f2, 4))) || 0x718BL), l_1664)))))
                    {
                        g_1370[0] = (safe_add_func_int32_t_s_s((func_42(((g_28 | 0L) == 0x85L), ((((l_1667 & (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((l_1595 = ((safe_div_func_uint8_t_u_u((func_42(g_591[0][7], func_42((+l_1674), g_170[(g_127 + 5)][(g_127 + 3)])) == l_1675), l_1576[1])) == 0x40L)), p_10)) > (-1L)), g_28))) ^ l_1641) || g_170[9][1]) ^ p_12)) || l_1618), l_1676));
                        if (l_1677[2][0][1])
                            continue;
                    }
                    else
                    {
                        unsigned l_1687 = 0xB4556444L;
                        int l_1698 = 0xDB352687L;
                        g_1370[0] = ((safe_mod_func_uint16_t_u_u((0x388879F1L != (g_76[0] = g_157[3])), (g_141 = (((l_1664 = (((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_1686, ((l_1687 = p_12) ^ func_42((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_11, ((safe_rshift_func_int8_t_s_u((-1L), g_440)) | (func_42(p_10, func_42((l_1698 = (safe_sub_func_uint32_t_u_u(g_157[2], l_1641))), g_1080)) != p_9)))) <= g_573[4]), 1L)), g_572)), p_12)))), g_1640)), l_1578)) < p_11) <= p_11)) && 0x4662L) | g_1370[0])))) == 0x90D09114L);
                        return p_9;
                    }
                }
                if (l_1664)
                    continue;
                for (g_235 = 1; (g_235 <= 4); g_235 += 1)
                {
                    int l_1702 = 0xAE0CB901L;
                    short l_1736 = 0xA000L;
                    int i, j, k;
                    if (g_433[2][0][3])
                    {
                        if (g_464)
                            break;
                    }
                    else
                    {
                        l_1701[5] = (safe_lshift_func_uint8_t_u_s(0UL, 3));
                        g_170[(g_127 + 5)][(g_127 + 3)] = g_170[(g_127 + 5)][(g_127 + 3)];
                        p_10 = (l_1664 < l_1702);
                        l_1703[0][2] = g_1640;
                    }
                    p_10 = (1L && (0x9DL | (g_433[(g_127 + 1)][(g_127 + 1)][g_127] = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_127 ^ (0x3707L <= p_11)), (safe_sub_func_int16_t_s_s(p_12, p_10)))), 4)))));
                    for (g_466.f1 = 1; (g_466.f1 <= 4); g_466.f1 += 1)
                    {
                        unsigned short l_1729 = 65535UL;
                        unsigned l_1730 = 0x156F093CL;
                        int l_1737[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1737[i] = 0L;
                        l_1595 = (g_154 == (((safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((!(l_1730 = func_42((p_12 = ((p_9 & (0xF57FL < func_42((safe_lshift_func_uint16_t_u_s(l_1576[1], 9)), p_11))) || ((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((~p_11) < (l_1728 > p_10)), g_1073[2])), 5)), l_1729)), g_141)) & g_170[3][4]))), l_1729))) | l_1731), 1)) ^ l_1594), 0x0CL)) != 1UL), 6)) <= 9L) & g_230));
                        p_10 = (l_1737[0] = (safe_lshift_func_uint16_t_u_s((!(~(safe_rshift_func_int16_t_s_u((func_42(l_1736, ((g_433[(g_466.f1 + 2)][(g_235 + 2)][g_235] = func_42(g_133, ((g_27 && p_12) & 0xDBL))) < p_12)) == 0x86L), 4)))), l_1730)));
                        l_1731 = (4294967295UL & g_433[(g_466.f1 + 2)][(g_235 + 2)][g_235]);
                        g_170[(g_127 + 5)][(g_127 + 3)] = func_42((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_1677[2][0][1] = g_433[(g_127 + 1)][(g_127 + 1)][g_127]), (g_1210 = (2UL & (safe_div_func_int8_t_s_s((8L != func_42(g_466.f3, ((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int16_t_s(((+((safe_sub_func_uint8_t_u_u((0UL == 4294967295UL), (safe_add_func_int32_t_s_s((g_501 = (safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_1676, (safe_lshift_func_uint16_t_u_s(p_9, (!(safe_mod_func_int8_t_s_s(l_1653, l_1593))))))), l_1728))), p_12)))) & p_9)) & 0x60D5L))) != 0x91L), l_1653)) > p_9))), p_9)))))), g_1638)), g_573[4]);
                    }
                }
            }
        }
        else
        {
            for (p_12 = 0; (p_12 > 17); p_12 = safe_add_func_uint8_t_u_u(p_12, 3))
            {
                g_170[5][3] = p_10;
            }
        }
    }
    p_11 = (0xA7C0L < ((p_10 == (l_1349 = ((l_1674 < (g_520 | p_9)) >= ((safe_mod_func_uint8_t_u_u((((func_42(l_1486, (((safe_sub_func_uint32_t_u_u(4294967295UL, (func_42((p_12 = (safe_rshift_func_uint16_t_u_s(p_10, 12))), l_1593) | 0xA359L))) == g_573[4]) != 0x97L)) == l_1653) > 0x8809C0CEL) > g_573[4]), l_1674)) && g_1210)))) == l_1674));
    return g_76[5];
}







static const short func_20(const char p_21, int p_22)
{
    unsigned l_1242 = 1UL;
    int l_1245 = (-9L);
    int l_1248 = 1L;
    unsigned l_1268 = 0UL;
    int l_1294[8] = {(-7L), 0xC2C32249L, (-7L), 0xC2C32249L, (-7L), 0xC2C32249L, (-7L), 0xC2C32249L};
    int i;
    for (g_1210 = 0; (g_1210 > 15); g_1210 = safe_add_func_int16_t_s_s(g_1210, 5))
    {
        unsigned short l_1235 = 65531UL;
        int l_1249 = 0x58DBB578L;
        for (g_360 = 25; (g_360 != 45); g_360++)
        {
            int l_1230 = 1L;
            g_513 = ((safe_rshift_func_uint8_t_u_u(g_1202[0][5][0], ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0L, l_1230)), (safe_rshift_func_uint16_t_u_s(((p_22 >= (p_22 < (((p_21 == p_21) || 0x99L) != (safe_rshift_func_uint8_t_u_s(func_42(l_1230, p_22), 7))))) ^ 0x96AFL), p_21)))) & p_22))) && l_1235);
            return l_1235;
        }
        if (g_88)
        {
            unsigned l_1265 = 0xEA944E0DL;
            l_1249 = ((safe_div_func_uint16_t_u_u(((l_1248 = (safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((l_1242 = g_141) != 0x4DL), 1L)) != (((g_154 = (((1L <= (((+(255UL | ((!((l_1245 = (safe_add_func_int32_t_s_s(g_573[4], p_21))) > ((safe_lshift_func_int16_t_s_s(p_22, 15)) || g_466.f1))) == l_1235))) <= 1UL) == p_21)) < l_1235) != l_1248)) || 0xF9L) < 0x26L)), (-9L)))) == g_1210), 65528UL)) & g_1209);
            for (l_1248 = 0; (l_1248 >= 12); l_1248 = safe_add_func_int16_t_s_s(l_1248, 5))
            {
                unsigned l_1258 = 4294967294UL;
                p_22 = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(250UL, (g_27 > l_1258))), p_21)) & func_42((0x27L < (g_845 = (safe_rshift_func_uint8_t_u_u((l_1245 = 0x6EL), g_530[0][4][0])))), p_21)), p_21));
            }
            if (p_21)
                break;
            l_1268 = (safe_lshift_func_uint16_t_u_s(0xC8C8L, (func_31(l_1265) && (l_1265 >= (l_1249 ^ (g_1202[0][1][0] || (safe_lshift_func_uint16_t_u_s(p_21, 0))))))));
        }
        else
        {
            p_22 = ((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((g_153 > (l_1268 | p_21)), 0x19B7EE91L)), (g_230 = func_42(l_1242, ((safe_add_func_int8_t_s_s((l_1245 = (safe_mod_func_uint32_t_u_u(((g_1202[0][2][0] >= p_22) & (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_22, 12)), (0L && g_433[4][6][3])))), g_1281[5]))), g_473)) >= l_1248))))) >= p_21);
        }
        g_501 = (safe_mod_func_int16_t_s_s(((g_466.f2 != (p_22 = 0xF540B865L)) >= ((((g_141 = (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((l_1294[1] = (p_21 < ((((((0x9DL & (safe_add_func_uint8_t_u_u((((l_1245 = l_1235) | g_170[3][2]) == p_21), (l_1248 = (safe_rshift_func_int16_t_s_s(0x3350L, 1)))))) && l_1245) >= p_21) > g_76[3]) != l_1235) == g_1181[4][1][5]))), 1)) ^ l_1249), 251UL)), g_1155))) == g_1202[0][5][0]) >= g_144) ^ g_466.f0)), l_1242));
        g_466.f3 = l_1249;
    }
    return g_157[3];
}







static const char func_23(unsigned p_24, unsigned p_25, unsigned char p_26)
{
    char l_33 = 0x85L;
    int l_1212 = (-1L);
    int l_1219 = 0x0A216F6BL;
    l_1212 = func_29((0x1F34L | func_31(l_33)));
    g_1080 = 1L;
    l_1212 = (func_55(g_27, p_25, (g_76[4] = (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(g_76[0], (safe_sub_func_int16_t_s_s((0x3BC2L & (l_33 == (!(l_1212 > p_24)))), g_170[3][2])))), (l_1219 = func_42(p_26, g_88))))), g_170[3][2]) >= g_629);
    return p_25;
}







static int func_29(int p_30)
{
    unsigned char l_1193 = 0x33L;
    int l_1211 = 0x3C00626AL;
    l_1211 = ((safe_rshift_func_uint8_t_u_u(l_1193, ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((func_31(p_30) >= l_1193), (safe_add_func_int8_t_s_s(p_30, g_1202[0][5][0])))) == 3L), (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((g_1210 = (p_30 <= ((g_1209 = l_1193) >= l_1193))), g_1202[0][3][0])) && p_30), p_30)))), g_1202[0][2][0])) >= (-1L)))) <= g_1202[0][7][0]);
    return l_1211;
}







static short func_31(unsigned p_32)
{
    short l_46 = 0L;
    unsigned short l_60 = 0x5172L;
    int l_67 = 0x046BAC60L;
    int l_68[4][1][10] = {{{(-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L, (-6L), 0xF45A3231L, (-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L}}, {{(-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L, (-6L), 0xF45A3231L, (-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L}}, {{(-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L, (-6L), 0xF45A3231L, (-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L}}, {{(-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L, (-6L), 0xF45A3231L, (-6L), 0x2FF7A2D4L, 0xF5C6F0D6L, 0x2FF7A2D4L}}};
    unsigned l_69 = 0xC950041AL;
    unsigned l_741[4][4] = {{0xB12201B4L, 0UL, 0x5838CCFCL, 0UL}, {0xB12201B4L, 0UL, 0x5838CCFCL, 0UL}, {0xB12201B4L, 0UL, 0x5838CCFCL, 0UL}, {0xB12201B4L, 0UL, 0x5838CCFCL, 0UL}};
    int l_800[5] = {0xB2D876EAL, 0x608186BFL, 0xB2D876EAL, 0x608186BFL, 0xB2D876EAL};
    unsigned l_817[4] = {0x41259B39L, 0x76DDD728L, 0x41259B39L, 0x76DDD728L};
    union U0 l_887[7][6][5] = {{{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}, {{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}, {{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}, {{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}, {{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}, {{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}, {{{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}, {{0UL}, {0xE4D69496L}, {1UL}, {0UL}, {4294967295UL}}}};
    unsigned short l_994[2][6] = {{65535UL, 0x812AL, 65535UL, 0x812AL, 65535UL, 0x812AL}, {65535UL, 0x812AL, 65535UL, 0x812AL, 65535UL, 0x812AL}};
    unsigned l_1020 = 18446744073709551610UL;
    unsigned l_1032 = 9UL;
    unsigned l_1100 = 0x20460890L;
    int i, j, k;
    if ((safe_div_func_uint16_t_u_u(p_32, (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((func_42(g_28, g_28) < l_46), (safe_lshift_func_int16_t_s_s(func_49((l_68[3][0][3] = ((safe_mod_func_uint16_t_u_u(func_55(l_60, (((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((p_32 != (l_68[3][0][3] = ((((8UL && (l_67 = l_60)) | l_60) <= p_32) <= (-10L)))), 4)) ^ 0x196AL), l_46)), 0x75D5L)) == l_46) == l_60), l_69, l_60), p_32)) == (-1L))), g_28, g_466), l_741[0][2])))), p_32)) >= 0xE927C4F6L), g_573[1])))))
    {
        char l_752 = 0xBFL;
        int l_753[10][5] = {{0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}, {0xCC3086E3L, 0L, 0xCC3086E3L, 0L, 0xCC3086E3L}};
        int i, j;
        g_170[9][3] = (safe_rshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(((l_753[7][4] = (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(l_752, 12)) >= g_473), 2)) ^ (l_68[3][0][3] = l_752)), func_42(l_741[1][3], l_752)))) && p_32), p_32)) == l_741[0][2]) <= g_141), l_752));
    }
    else
    {
        unsigned l_758 = 0xBD0D02E0L;
        int l_786 = (-9L);
        short l_820 = 0x36BFL;
        int l_889 = 1L;
        unsigned short l_894 = 0x3D09L;
        short l_1039 = (-9L);
        g_501 = (-1L);
        for (l_60 = 0; (l_60 <= 3); l_60 += 1)
        {
            int l_763[1][10][4] = {{{(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}, {(-5L), 0xBED46212L, (-5L), 0xBED46212L}}};
            int l_785 = (-4L);
            union U0 l_819 = {0x5F45E11AL};
            int l_832 = 0xB38FE4E8L;
            unsigned l_905[4] = {0UL, 7UL, 0UL, 7UL};
            short l_942 = 0x5AC7L;
            unsigned l_984 = 4294967290UL;
            int i, j, k;
            if ((safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((func_55(g_629, p_32, l_758, g_433[4][6][3]) | ((safe_div_func_int32_t_s_s(0x060A8973L, (safe_lshift_func_int8_t_s_u(l_758, 1)))) > g_538)), p_32)) || l_763[0][9][3]) != p_32), p_32)))
            {
                char l_781 = (-1L);
                int l_782 = 1L;
                unsigned l_801 = 0xA2E7BC60L;
                for (l_758 = 0; (l_758 <= 3); l_758 += 1)
                {
                    short l_764 = 0xC028L;
                    int i, j;
                    l_764 = g_591[l_758][(l_60 + 1)];
                    for (g_306 = 0; (g_306 <= 4); g_306 += 1)
                    {
                        int i, j;
                        return g_45[(l_758 + 1)][l_60];
                    }
                    if (g_538)
                        continue;
                    for (g_440 = 0; (g_440 <= 4); g_440 += 1)
                    {
                        int i, j, k;
                        return g_433[(g_440 + 1)][(g_440 + 1)][g_440];
                    }
                    for (g_629 = 0; (g_629 <= 4); g_629 += 1)
                    {
                        int i, j, k;
                        l_67 = (g_433[g_629][(l_758 + 1)][(l_758 + 1)] < (l_46 || (g_530[0][4][0] != ((l_741[3][0] == (g_235 = (((safe_rshift_func_int8_t_s_s(0L, 2)) ^ ((0xBDL || (((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((+(l_781 = (safe_mod_func_int32_t_s_s(func_42(func_42((safe_rshift_func_uint16_t_u_s(65535UL, 12)), g_170[3][2]), l_67), g_144)))), g_153)), l_782)) >= g_433[1][4][0]), 4294967289UL)), 4294967294UL)) > g_154) <= g_360)) > p_32)) | l_758))) < p_32))));
                        g_466.f3 = 0x117C4619L;
                    }
                }
                if (p_32)
                    break;
                g_170[3][2] = (p_32 | (l_786 = (l_758 ^ ((safe_add_func_uint16_t_u_u(0x3F62L, g_170[4][9])) >= func_42((l_785 = l_46), (l_67 = p_32))))));
                if ((((g_520 = (safe_unary_minus_func_uint32_t_u((func_55((safe_mod_func_uint32_t_u_u(0x180DC6C2L, p_32)), l_68[3][0][3], p_32, (safe_sub_func_int32_t_s_s(((((g_127 > ((l_800[4] = (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((l_782 = (255UL | ((-10L) > (l_763[0][9][3] | 65535UL)))), p_32)) || 0x2714E93AL), l_786)), p_32)), 6))) | g_538)) < 0xF3428E6FL) < 251UL) == g_513), 1L))) == g_28)))) | l_801) & p_32))
                {
                    unsigned short l_808 = 0xF7A5L;
                    int l_818 = 0x1ACE5A88L;
                    for (g_538 = 1; (g_538 <= 4); g_538 += 1)
                    {
                        int i, j;
                        if (g_591[l_60][(g_538 + 2)])
                            break;
                        l_818 = (safe_div_func_int32_t_s_s(g_45[(g_538 + 1)][l_60], (func_55((safe_sub_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((func_55((((g_76[0] = ((l_758 || (l_782 | (l_808 || (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((g_306 && (l_801 >= 0x1CE3D883L)) | (g_45[3][1] ^ ((!((safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((((p_32 && 0x2B83L) | p_32) != l_808), g_230)) | p_32), g_591[l_60][(g_538 + 2)])) <= l_781)) > l_781))), 2)) > l_786), p_32))))) || p_32)) && l_817[2]) ^ l_758), g_133, l_800[4], g_170[3][2]) & g_466.f1), 3)) < g_466.f2) ^ p_32), l_786)), g_591[0][7], g_45[(g_538 + 1)][l_60], p_32) || g_433[4][6][3])));
                        l_818 = 0xBEEF9F34L;
                    }
                }
                else
                {
                    l_800[0] = func_49((g_573[4] = g_538), g_520, l_819);
                }
            }
            else
            {
                unsigned l_833[7][9] = {{0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}, {0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}, {0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}, {0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}, {0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}, {0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}, {0xA29BC787L, 0x1F1C7AF9L, 18446744073709551615UL, 1UL, 4UL, 0x31B837AFL, 4UL, 1UL, 18446744073709551615UL}};
                int l_864 = 0xD54930CDL;
                int i, j;
                for (g_153 = 0; (g_153 <= 3); g_153 += 1)
                {
                    short l_834[7] = {0x276AL, 0x1F62L, 0x276AL, 0x1F62L, 0x276AL, 0x1F62L, 0x276AL};
                    int i, j;
                    for (g_501 = 3; (g_501 >= 0); g_501 -= 1)
                    {
                        int l_848[4] = {0x95E90A85L, 8L, 0x95E90A85L, 8L};
                        int i, j, k;
                        if (g_433[(g_501 + 3)][(g_153 + 2)][g_501])
                            break;
                        l_800[(l_60 + 1)] = func_42((g_821 = ((g_591[g_501][(g_153 + 2)] || l_820) < g_76[3])), func_42((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(g_141, (-1L))), (((safe_add_func_uint8_t_u_u(p_32, (((((safe_rshift_func_int16_t_s_s(((func_42(func_42(p_32, g_230), p_32) && l_832) >= g_591[g_501][(g_153 + 2)]), 9)) & 0xD577L) > g_433[4][5][1]) ^ 0L) >= l_833[5][6]))) || l_800[4]) < g_157[3]))), g_513)), l_834[1]));
                        l_848[2] = (safe_sub_func_uint16_t_u_u(((-1L) <= (g_845 = (g_170[3][2] != (safe_rshift_func_int16_t_s_s((g_45[1][2] ^ (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_800[(l_60 + 1)] = g_157[3]), 0x9BL)), g_235))), g_154))))), ((safe_div_func_int8_t_s_s((l_834[1] != (1UL | g_170[3][2])), p_32)) <= g_27)));
                    }
                    g_513 = g_591[l_60][(g_153 + 4)];
                    g_170[6][2] = (safe_mod_func_uint32_t_u_u(g_591[l_60][(l_60 + 1)], func_42(l_786, ((safe_mul_func_int8_t_s_s(0x4FL, 0UL)) == l_833[5][3]))));
                    for (l_46 = 4; (l_46 >= 0); l_46 -= 1)
                    {
                        int i, j, k;
                        return g_433[(l_60 + 1)][(l_46 + 2)][l_60];
                    }
                }
                for (l_785 = 0; (l_785 <= 4); l_785 += 1)
                {
                    union U0 l_861 = {0x14D8D57AL};
                    int i, j;
                    l_68[0][0][1] = ((func_49((g_157[l_60] == func_42((((~g_157[(l_60 + 1)]) > l_741[l_60][l_60]) ^ ((func_42(p_32, (g_170[9][9] = (l_786 = (safe_rshift_func_uint16_t_u_s((l_833[5][6] < ((((((((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_32, ((safe_add_func_int16_t_s_s(((0xCF2230FFL && g_170[4][5]) > (g_138 || 2L)), l_833[4][5])) ^ 0L))), 11)) > 0xDD302590L) == g_157[(l_60 + 1)]) < p_32) & g_153) && l_820) | g_144) | (-1L))), g_262))))) >= g_591[2][1]) <= g_845)), l_820)), g_133, l_861) ^ l_861.f3) || l_46);
                    l_864 = (g_127 || (safe_div_func_int8_t_s_s(0x66L, l_819.f3)));
                    for (g_88 = 4; (g_88 >= 0); g_88 -= 1)
                    {
                        int i, j, k;
                        if (g_433[(g_88 + 1)][(l_785 + 1)][l_785])
                            break;
                    }
                }
                l_786 = (l_68[3][0][3] = (safe_div_func_int16_t_s_s(l_60, (l_785 = l_833[5][6]))));
                if (l_69)
                    break;
            }
            for (l_758 = 0; (l_758 <= 6); l_758 += 1)
            {
                int l_888 = 6L;
                int i;
                if (((((-3L) | ((g_154 = g_76[(l_60 + 1)]) && 0L)) ^ ((safe_sub_func_uint32_t_u_u(func_42(g_157[l_60], (l_819.f3 = (safe_lshift_func_uint8_t_u_s(((((safe_mod_func_int32_t_s_s((0UL || g_157[(l_60 + 1)]), g_157[l_60])) > (g_629 && (g_235 = (!g_157[(l_60 + 1)])))) & l_786) >= p_32), 5)))), g_153)) < l_763[0][4][2])) || l_786))
                {
                    const char l_885 = 0xF3L;
                    int l_933 = 0xC093308FL;
                    int i;
                    l_889 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_786 = (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_885, (((safe_unary_minus_func_uint16_t_u(p_32)) ^ ((l_819.f3 = func_49(p_32, g_76[(l_60 + 1)], l_887[2][1][1])) <= 0xC7A9L)) | func_42(l_885, p_32)))), g_28))), 0x488EL)), 6)) == l_888);
                    l_889 = ((g_76[(l_60 + 3)] = ((l_819.f3 = func_42((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((l_894 = p_32) < (65532UL >= (((l_763[0][9][3] < (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_887[2][1][1].f1, g_157[l_60])), g_433[4][6][3]))) & (0x33EAE072L && (safe_lshift_func_uint16_t_u_s((l_885 <= (g_76[(l_60 + 1)] == l_68[3][0][3])), 13)))) > l_786))), 7)), g_565)), p_32)) >= g_154)) && l_819.f0);
                    for (g_565 = 0; (g_565 <= 4); g_565 += 1)
                    {
                        int l_916 = 7L;
                        int i, j, k;
                        l_916 = ((l_786 = g_433[(g_565 + 2)][l_758][(l_60 + 1)]) || (g_154 <= func_42((safe_mod_func_uint8_t_u_u((l_905[2] = (safe_rshift_func_uint16_t_u_s(g_45[1][2], 11))), (safe_lshift_func_uint16_t_u_s(((g_262 > (((0x9C7B4863L == (safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(g_138, (g_235 = g_466.f0))) != (safe_add_func_int8_t_s_s(0L, (safe_div_func_uint8_t_u_u(0x5EL, l_885))))) && p_32), 0x2698L))) != 0UL) && g_76[6])) > 0x55L), p_32)))), g_466.f1)));
                        if (g_433[(g_565 + 2)][l_758][(l_60 + 1)])
                            continue;
                        l_933 = ((safe_sub_func_uint16_t_u_u(0x7738L, (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, 5)), ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u((l_832 = func_55(l_888, g_530[0][4][0], l_817[2], p_32)), p_32)) < (g_845 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(g_821, 3)) ^ l_894), p_32)))) ^ p_32), l_905[2])), 11)) ^ l_820))))) == p_32);
                    }
                    for (l_785 = 0; (l_785 <= 6); l_785 += 1)
                    {
                        int l_934 = 0x193D98A7L;
                        int i, j, k;
                        l_934 = g_433[l_785][(l_60 + 3)][(l_60 + 1)];
                        return g_433[(l_60 + 3)][l_785][l_60];
                    }
                }
                else
                {
                    if (p_32)
                        break;
                    if (l_889)
                        continue;
                    if (g_845)
                        continue;
                }
                g_170[3][2] = p_32;
                for (p_32 = 0; (p_32 <= 4); p_32 += 1)
                {
                    const unsigned l_941[7][3][8] = {{{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}, {{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}, {{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}, {{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}, {{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}, {{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}, {{4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}, {4UL, 0x2FE599B8L, 0xBDA10120L, 0x74059945L, 8UL, 0x3E5CCE4DL, 4294967291UL, 4294967295UL}}};
                    int i, j, k;
                    for (l_46 = 0; (l_46 <= 4); l_46 += 1)
                    {
                        int i, j, k;
                        l_889 = (g_433[l_758][(p_32 + 2)][l_46] >= (safe_div_func_uint8_t_u_u(((((((-1L) < 0xFB5D01E8L) & 1L) <= ((0x95B88A67L != func_42(((g_473 = (p_32 >= (l_820 == ((safe_div_func_uint32_t_u_u((g_466.f0 ^ (((safe_div_func_uint32_t_u_u((g_45[4][3] = ((((func_42(((g_262 = g_157[(l_60 + 1)]) > l_817[2]), l_887[2][1][1].f3) != l_941[0][2][2]) ^ p_32) != g_170[4][4]) && 4294967295UL)), p_32)) & l_889) >= g_433[l_758][(p_32 + 2)][l_46])), g_157[(l_60 + 1)])) < l_69)))) > 0x626EL), g_154)) < l_942)) & g_76[0]) ^ 0xF0L), 0xBDL)));
                    }
                }
            }
            for (p_32 = 0; (p_32 <= 4); p_32 += 1)
            {
                unsigned short l_947 = 65528UL;
                unsigned char l_960 = 0xD3L;
                int l_985[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_985[i] = 0x3AC7D128L;
                g_466.f3 = p_32;
                g_513 = ((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_947 = p_32), p_32)), 4)) ^ l_820);
                for (g_306 = 0; (g_306 <= 4); g_306 += 1)
                {
                    int l_964 = 0x6A45FD75L;
                    int i, j, k;
                    for (g_154 = 0; (g_154 <= 3); g_154 += 1)
                    {
                        int i, j, k;
                        g_466.f3 = ((func_42(g_433[(g_306 + 2)][(g_306 + 1)][g_154], g_433[l_60][(g_306 + 2)][g_154]) <= ((safe_sub_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((l_819.f3 = 1UL), (safe_add_func_int16_t_s_s(l_817[l_60], (g_141 = (p_32 != (p_32 || (+4294967293UL)))))))) ^ 4L) > 8UL), p_32)) | l_763[0][5][0])) != p_32);
                    }
                    l_785 = ((0xACL <= (safe_mod_func_uint8_t_u_u(g_433[g_306][(l_60 + 2)][l_60], (l_832 = (g_530[0][6][0] = (safe_div_func_int32_t_s_s((l_947 >= (l_800[1] = p_32)), 7UL))))))) ^ (255UL != g_821));
                    for (g_88 = (-5); (g_88 <= 3); g_88 = safe_add_func_int32_t_s_s(g_88, 5))
                    {
                        unsigned short l_961 = 4UL;
                        l_960 = g_821;
                        if (l_961)
                            continue;
                    }
                    l_964 = (safe_add_func_int32_t_s_s(l_947, p_32));
                }
                for (g_306 = 5; (g_306 >= 0); g_306 -= 1)
                {
                    unsigned l_983 = 0xEF57D45DL;
                    unsigned char l_995 = 0xEBL;
                    for (l_889 = 3; (l_889 >= 0); l_889 -= 1)
                    {
                        int i;
                        l_985[0] = (l_819.f3 = (safe_mod_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(5UL, func_42((safe_mod_func_int16_t_s_s((((g_157[(l_889 + 1)] | (65529UL && (g_157[(l_60 + 1)] > (l_984 = (248UL || (safe_mod_func_int16_t_s_s((g_629 = 0L), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_905[l_889] == ((((safe_div_func_uint8_t_u_u((l_983 = (l_887[2][1][1].f3 = (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_170[3][2], g_565)), l_905[l_889])))), l_820)) | l_894) | p_32) >= g_157[(l_60 + 1)])), 15)), 1))))))))) || g_513) <= l_800[4]), g_821)), g_360))) != g_133) ^ g_133), p_32)));
                    }
                    for (g_262 = 1; (g_262 <= 9); g_262 += 1)
                    {
                        int i, j;
                        g_501 = g_157[l_60];
                        if (l_741[l_60][l_60])
                            break;
                        l_832 = ((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_170[(g_306 + 2)][(l_60 + 5)] ^ (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_141 = func_42(l_994[1][3], p_32)), 0x0B27L)), ((p_32 & 0x88B87847L) == p_32)))), g_76[2])), g_573[4])) != l_995);
                    }
                }
            }
        }
        if (func_49((0x4512D834L && (p_32 = (l_786 = ((((safe_div_func_int16_t_s_s((l_758 <= p_32), (7L & ((safe_sub_func_uint32_t_u_u(1UL, (((safe_add_func_int8_t_s_s(0x76L, (3UL & (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(g_230, func_42(p_32, l_46))), l_887[2][1][1].f2))))) >= l_786) ^ p_32))) && p_32)))) || l_67) || l_800[0]) == g_433[3][5][1])))), l_894, l_887[2][1][1]))
        {
            short l_1021 = (-1L);
            int l_1022[4][8];
            unsigned l_1023 = 0x4999B25DL;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 8; j++)
                    l_1022[i][j] = 1L;
            }
            g_466.f3 = ((0xF0L != (g_28 = (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((g_45[1][1] = func_55(((safe_rshift_func_int16_t_s_u(p_32, (safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((((p_32 >= (func_55(g_157[3], ((l_1021 = l_1020) & func_42((l_800[0] = (g_845 = (2UL > 250UL))), g_76[0])), g_138, p_32) != l_786)) >= 0L) & g_629), l_1020)) >= l_1022[1][2]), 3)))) == 8L), g_466.f1, g_28, l_1023)) ^ g_473), g_466.f2)), 5)) ^ p_32), 1)))) >= p_32);
            for (g_440 = 0; (g_440 <= 0); g_440 += 1)
            {
                char l_1027 = (-10L);
                l_1027 = func_42(p_32, (g_28 <= ((safe_unary_minus_func_uint16_t_u((l_786 = g_157[4]))) | ((safe_rshift_func_uint16_t_u_s(0x442AL, l_69)) <= 0x549EL))));
                if (g_591[2][4])
                    break;
                return g_230;
            }
            l_1032 = ((p_32 = (l_67 = (g_45[6][1] = p_32))) ^ func_49((safe_div_func_uint32_t_u_u((+(l_1022[2][0] = l_1022[2][7])), 0x46D95621L)), (safe_rshift_func_int8_t_s_u(l_1023, 3)), g_466));
            for (g_501 = 0; (g_501 < 22); g_501 = safe_add_func_uint32_t_u_u(g_501, 3))
            {
                unsigned l_1035 = 0UL;
                l_1035 = (p_32 || p_32);
                l_889 = g_103;
                l_1039 = ((safe_add_func_uint32_t_u_u(((l_887[2][1][1].f3 < l_758) & g_629), l_820)) != (g_1038[5] != l_820));
                g_513 = (((safe_unary_minus_func_int16_t_s((((+(l_1023 == (g_845 = 0x16L))) & g_360) ^ (g_170[3][2] = 0x908B8EE7L)))) > func_42(p_32, l_1035)) & 0x63L);
            }
        }
        else
        {
            unsigned char l_1048 = 250UL;
            for (g_466.f3 = 0; (g_466.f3 < 11); ++g_466.f3)
            {
                unsigned short l_1047 = 0xC821L;
                l_1048 = ((safe_sub_func_int8_t_s_s(g_538, (safe_add_func_uint16_t_u_u(l_1047, 0xC19AL)))) > (g_45[5][0] != p_32));
                l_786 = (g_170[3][2] = (safe_add_func_int32_t_s_s((g_466.f0 < l_1020), (safe_mod_func_uint8_t_u_u(((((safe_div_func_uint32_t_u_u(g_466.f1, g_170[3][2])) & (safe_div_func_uint32_t_u_u((((g_154 = (l_67 = (safe_sub_func_int32_t_s_s(((((l_889 = (((p_32 == (safe_add_func_uint32_t_u_u(g_530[0][6][0], g_464))) != (((4L >= (p_32 == p_32)) >= 0x12L) <= 0xE459L)) | p_32)) ^ p_32) > 255UL) < l_1020), 0x3A17A465L)))) < 0x34L) || p_32), l_1048))) | p_32) || 0xD519L), g_591[1][4])))));
                if (l_1047)
                    continue;
            }
        }
        for (g_845 = (-27); (g_845 != (-16)); g_845 = safe_add_func_int16_t_s_s(g_845, 8))
        {
            unsigned l_1074 = 0xD7244B4CL;
            int l_1101 = 0L;
            int l_1138[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1138[i] = 0x6777627EL;
            for (g_141 = 0; (g_141 >= 42); g_141 = safe_add_func_int32_t_s_s(g_141, 6))
            {
                unsigned char l_1072 = 0x93L;
                int l_1075 = 0x0F2A99D2L;
                unsigned char l_1137[4] = {247UL, 0x8DL, 247UL, 0x8DL};
                unsigned short l_1156[3][1][8] = {{{0UL, 65528UL, 0x9C93L, 0xD77EL, 0xD77EL, 0x9C93L, 65528UL, 0UL}}, {{0UL, 65528UL, 0x9C93L, 0xD77EL, 0xD77EL, 0x9C93L, 65528UL, 0UL}}, {{0UL, 65528UL, 0x9C93L, 0xD77EL, 0xD77EL, 0x9C93L, 65528UL, 0UL}}};
                short l_1159 = (-4L);
                unsigned short l_1160 = 0x006EL;
                int i, j, k;
                for (g_629 = 0; (g_629 >= 2); g_629++)
                {
                    unsigned l_1093 = 0x043DE1D7L;
                    int l_1098[5];
                    int l_1099 = (-4L);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1098[i] = (-1L);
                    for (g_103 = 0; (g_103 <= 3); g_103 += 1)
                    {
                        int l_1071 = 0x1DD0B287L;
                        int i;
                        l_1074 = (g_157[(g_103 + 1)] > ((g_573[(g_103 + 2)] > ((l_1072 = (l_1071 = ((g_170[3][2] | func_42(p_32, g_76[0])) >= (safe_lshift_func_int16_t_s_s(p_32, 14))))) >= g_103)) == (p_32 <= g_1073[5])));
                        return g_591[3][0];
                    }
                    if (l_1020)
                        continue;
                    l_1075 = ((g_45[1][2] & (l_889 = p_32)) > l_800[4]);
                    if ((0x7BL ^ (g_154 < func_42(((safe_rshift_func_uint16_t_u_s(g_501, ((g_1080 = p_32) != (safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((l_1101 = (safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((g_360 >= func_42(l_1072, (((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((l_1093 = l_1072), (safe_div_func_uint16_t_u_u((g_45[6][1] || ((l_1099 = (safe_div_func_uint16_t_u_u(((4294967291UL > l_1098[1]) > p_32), 0xB6E9L))) > 65534UL)), l_894)))), l_1098[1])) == l_786) ^ l_1074))) >= 0xCE6BL), g_466.f3)) != l_1098[0]) < l_1100), p_32))) != 0xC4B00949L), g_591[0][7])), g_144))))) != l_1072), p_32))))
                    {
                        char l_1139 = 0xACL;
                        int l_1140 = (-4L);
                        g_170[5][6] = (safe_rshift_func_int8_t_s_u((l_1098[1] = func_42(g_144, p_32)), p_32));
                        g_1080 = (0x59C2L == (l_1099 | (l_1075 = (safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(g_433[4][6][3], l_800[0])) | (g_572 <= (safe_lshift_func_uint16_t_u_u((l_1098[4] = 0x4E93L), 9)))) >= (l_67 = (p_32 >= g_565))), 0)), ((!func_42((safe_rshift_func_uint16_t_u_u((((((g_1120 = (safe_sub_func_uint32_t_u_u(((g_45[1][2] = (l_1101 = p_32)) ^ g_306), g_591[1][6]))) == g_103) < l_1093) && 0xE59FL) <= g_1080), 10)), g_530[0][5][0])) || 1L))) && 0x02L) < g_466.f3) < l_887[2][1][1].f2), l_1072)) ^ l_1093), 5)))));
                        l_1140 = (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((-1L), 2)) >= p_32), 0x5A2836ABL)), (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((l_1093 != ((((((func_42(l_1101, (l_1072 < ((l_1138[0] = ((-6L) < (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_887[2][1][1].f1, p_32)), l_1137[0])))) < l_1139))) & p_32) & p_32) & 1UL) ^ 0xB7L) > l_1139) == l_1139)), g_464)), g_573[4]))));
                    }
                    else
                    {
                        g_513 = ((0x51E1L > (l_894 < (safe_div_func_int32_t_s_s(0L, (p_32 && g_230))))) == g_629);
                    }
                }
                l_887[2][1][1].f3 = (g_591[0][0] & (safe_rshift_func_int8_t_s_u((p_32 <= (safe_lshift_func_uint16_t_u_u(((l_1156[0][0][4] = ((safe_lshift_func_int8_t_s_s((g_1155 = (safe_add_func_uint32_t_u_u((((l_67 = ((g_433[2][1][3] = ((0x562903CCL <= (((l_1075 = (safe_sub_func_uint8_t_u_u(g_572, (safe_lshift_func_int8_t_s_u(6L, 2))))) && func_42(l_1075, (l_1138[0] && 0x6AB321B4L))) ^ l_1072)) != g_1080)) & 0x49L)) || l_758) & 0xD90300A3L), 0xB3D121E2L))), 4)) > p_32)) & 0x27A1L), g_845))), p_32)));
                for (g_520 = 21; (g_520 < 0); g_520 = safe_sub_func_int32_t_s_s(g_520, 5))
                {
                    unsigned short l_1174 = 0x5E24L;
                    int l_1184 = 1L;
                    l_1075 = 0L;
                    if ((l_1075 = p_32))
                    {
                        return g_28;
                    }
                    else
                    {
                        int l_1167 = 1L;
                        g_1080 = (((g_235 > (p_32 < (l_1159 & (+l_1160)))) ^ (((safe_lshift_func_int16_t_s_s(0x2C8DL, (safe_add_func_uint32_t_u_u(((0xC6C4L | 0xFD41L) <= 1UL), (safe_sub_func_int8_t_s_s((l_1138[0] = g_1080), l_1167)))))) > 248UL) <= l_1167)) ^ l_820);
                    }
                    for (g_565 = (-6); (g_565 >= 41); ++g_565)
                    {
                        l_1075 = (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((2UL && l_1174), 14)) & (l_800[0] = ((safe_rshift_func_int8_t_s_s(func_42((~l_1174), p_32), (g_1181[4][2][4] = (safe_lshift_func_int8_t_s_u(p_32, (safe_div_func_int16_t_s_s(p_32, p_32))))))) && (l_1184 = (safe_div_func_uint32_t_u_u(l_1159, 0x51F4C6F2L)))))), 0x31C8L));
                        return g_530[0][6][0];
                    }
                    for (l_1020 = 0; (l_1020 >= 50); l_1020 = safe_add_func_int8_t_s_s(l_1020, 1))
                    {
                        int l_1187 = 5L;
                        int l_1188 = 0L;
                        l_1188 = l_1187;
                    }
                }
                for (l_60 = 0; (l_60 > 43); l_60 = safe_add_func_uint8_t_u_u(l_60, 8))
                {
                    return p_32;
                }
            }
        }
    }
    l_67 = g_466.f0;
    return g_1120;
}







static unsigned short func_42(char p_43, int p_44)
{
    g_45[1][2] = p_44;
    return p_44;
}







static short func_49(int p_50, const char p_51, union U0 p_52)
{
    unsigned l_469[8] = {2UL, 18446744073709551608UL, 2UL, 18446744073709551608UL, 2UL, 18446744073709551608UL, 2UL, 18446744073709551608UL};
    volatile int l_486 = 1L;
    int l_525 = 0L;
    unsigned short l_541 = 0x9EB1L;
    short l_607[9][8] = {{0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}, {0xC917L, 0x77D6L, 0x0A34L, (-9L), 0x94B5L, 0x915DL, 0x94B5L, (-9L)}};
    int l_698 = 0xAB155B96L;
    int i, j;
    for (g_466.f1 = 0; (g_466.f1 >= 22); g_466.f1++)
    {
        short l_472 = 0xC8C6L;
        int l_492 = 0x3CC7EE48L;
        unsigned short l_529 = 65535UL;
        int l_560 = 0xF5FCC2F0L;
        int l_586 = 8L;
        int l_608 = 0x3C83520CL;
        unsigned short l_650 = 0xE4E0L;
        p_52.f3 = l_469[7];
        if (((safe_lshift_func_int16_t_s_s(g_127, ((g_473 = l_472) > ((g_76[0] < (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_103 && (p_51 > g_88)), (!(0xE2D25132L && 0x87A4DF89L)))), ((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((-3L), l_472)), g_466.f1)) && 0L)))) <= p_50)))) | l_469[7]))
        {
            const unsigned short l_512[9][7][4] = {{{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}, {{1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}, {1UL, 1UL, 0x4D6FL, 65535UL}}};
            int l_521 = 0xCD06652DL;
            int i, j, k;
            if ((p_52.f3 <= g_138))
            {
                unsigned l_491 = 3UL;
                for (g_440 = 23; (g_440 < 4); g_440 = safe_sub_func_uint16_t_u_u(g_440, 9))
                {
                    l_486 = g_144;
                    g_170[3][2] = p_52.f1;
                    p_52.f3 = (p_52.f1 > ((((0xE851L & l_472) & g_154) == 0x08L) > (safe_div_func_uint16_t_u_u(((g_466.f1 > (l_492 = (((safe_lshift_func_uint8_t_u_s((l_491 = g_440), 1)) || 0xCE77L) != (g_433[4][6][3] > 0UL)))) == p_52.f2), 0x6D4CL))));
                }
            }
            else
            {
                int l_504 = (-8L);
                p_52.f3 = (((safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_472, (-10L))), (g_513 = (func_55((safe_lshift_func_int16_t_s_u(func_55(g_466.f2, ((g_501 = (~g_466.f0)) == (safe_sub_func_uint32_t_u_u((g_153 = l_504), (p_52.f3 ^ ((safe_unary_minus_func_uint8_t_u((((safe_add_func_uint32_t_u_u((g_28 ^ l_469[7]), (+(safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_170[4][0], l_492)), l_492))))) || l_512[4][0][1]) & p_50))) > 0x13L))))), g_127, p_52.f2), g_473)), g_466.f0, l_469[7], g_466.f3) ^ 0xA4L)))) || g_466.f1), 0x73L)) != 0xC85DL) || l_504);
                l_492 = (safe_sub_func_uint16_t_u_u((g_262 ^ 0L), l_486));
                for (g_141 = 1; (g_141 <= 4); g_141 += 1)
                {
                    int i;
                    g_501 = g_157[g_141];
                    for (g_306 = 4; (g_306 >= 1); g_306 -= 1)
                    {
                        int l_524 = (-8L);
                        int i, j, k;
                        l_521 = ((safe_mul_func_int32_t_s_s(((g_433[g_141][g_141][g_306] ^ l_469[0]) < (g_230 = 1UL)), ((safe_add_func_int8_t_s_s(g_157[3], (((+(g_235 != g_127)) | (!p_52.f2)) < (g_520 = (l_492 = g_170[7][4]))))) != (g_157[3] != p_50)))) < g_433[g_141][g_141][g_306]);
                        p_52.f3 = (safe_rshift_func_int8_t_s_s((l_524 = l_512[8][0][1]), 0));
                    }
                    for (g_127 = 1; (g_127 <= 6); g_127 += 1)
                    {
                        int i;
                        g_501 = g_76[g_141];
                        if (p_50)
                            continue;
                        g_170[4][0] = (l_525 = g_473);
                    }
                    for (g_230 = 0; (g_230 <= 4); g_230 += 1)
                    {
                        return l_469[1];
                    }
                }
                if (p_52.f3)
                    break;
            }
        }
        else
        {
            int l_528[8];
            unsigned l_542 = 0x3F2A3EEAL;
            short l_547 = (-3L);
            unsigned char l_553[1][2][10] = {{{0x0FL, 0x0FL, 0x2FL, 254UL, 0x97L, 254UL, 0x2FL, 0x0FL, 0x0FL, 0x2FL}, {0x0FL, 0x0FL, 0x2FL, 254UL, 0x97L, 254UL, 0x2FL, 0x0FL, 0x0FL, 0x2FL}}};
            char l_680 = 1L;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_528[i] = 0x572EA0A6L;
            if (p_52.f2)
            {
                g_170[3][2] = (((safe_rshift_func_int8_t_s_s((l_529 = l_528[3]), 0)) != g_530[0][4][0]) > g_466.f0);
                if (l_492)
                    continue;
            }
            else
            {
                int l_539[2][10];
                int l_540 = 0x8AB036FBL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_539[i][j] = 0x0D22350DL;
                }
                l_542 = ((((p_50 < (safe_unary_minus_func_int8_t_s((!((safe_sub_func_int8_t_s_s((g_538 = (safe_add_func_int16_t_s_s(p_52.f0, ((safe_lshift_func_uint16_t_u_u(1UL, 4)) != (g_76[0] || 0x9ACDD002L))))), (g_513 || (((((+((l_540 = (((0x00L != g_154) || l_539[0][2]) == 0xBF17432CL)) <= 0xEEF7L)) >= 0x2F4078A7L) & p_52.f0) != l_541) ^ g_157[3])))) & g_440))))) >= p_52.f2) ^ 0x93D3CC05L) != l_541);
                for (l_541 = 3; (l_541 <= 9); l_541 += 1)
                {
                    int i, j;
                    g_513 = (safe_lshift_func_uint16_t_u_s((g_170[l_541][l_541] = (g_170[l_541][l_541] && (g_76[0] = (1L | l_541)))), 2));
                    if ((p_52.f3 = ((0x6CL ^ (l_492 = g_501)) & (~(safe_lshift_func_uint16_t_u_s(l_528[0], (g_466.f2 <= p_51)))))))
                    {
                        g_170[3][9] = g_360;
                        p_52.f3 = 2L;
                    }
                    else
                    {
                        p_52.f3 = 0xD2A66727L;
                    }
                    if (l_547)
                        continue;
                    for (l_540 = 0; (l_540 >= 0); l_540 -= 1)
                    {
                        unsigned l_548 = 0x344B1F34L;
                        g_501 = p_51;
                        if (l_548)
                            continue;
                        if (p_52.f0)
                            break;
                    }
                }
                if (g_138)
                {
                    const unsigned short l_563 = 0x13CAL;
                    unsigned l_564 = 1UL;
                    g_501 = l_547;
                    if (func_55(((safe_div_func_int32_t_s_s((g_170[5][9] = (~(((l_553[0][0][0] = (safe_rshift_func_int16_t_s_u(g_170[0][0], 9))) <= ((safe_lshift_func_int8_t_s_s(l_528[2], 5)) >= (g_466.f0 && (safe_lshift_func_int8_t_s_s(0x03L, 7))))) | ((safe_mod_func_int8_t_s_s(g_133, l_560)) < p_52.f0)))), g_501)) && (safe_add_func_int32_t_s_s(l_563, 4294967288UL))), g_513, l_540, g_144))
                    {
                        g_565 = (!l_564);
                    }
                    else
                    {
                        return g_466.f1;
                    }
                }
                else
                {
                    short l_574 = 0x5ADAL;
                    int l_579 = 8L;
                    g_513 = (safe_div_func_uint8_t_u_u(l_539[0][0], l_486));
                    p_52.f3 = (safe_div_func_int8_t_s_s((l_574 = (safe_add_func_uint16_t_u_u(g_572, g_573[4]))), (safe_add_func_int8_t_s_s(((l_492 = g_157[3]) <= (safe_mod_func_uint8_t_u_u(l_579, (~(g_513 != ((0x1098B156L < ((g_530[0][4][0] != (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(g_433[6][1][1], (safe_add_func_int32_t_s_s((l_539[1][1] & g_530[0][4][0]), g_538)))) <= l_553[0][1][2]), 0x4FA4201DL))) & 0xE2L)) >= 0x29L)))))), l_586))));
                }
            }
            for (g_103 = 0; (g_103 <= 7); g_103 += 1)
            {
                char l_592 = (-6L);
                for (l_547 = 7; (l_547 >= 0); l_547 -= 1)
                {
                    int i;
                    g_170[5][7] = (safe_mod_func_int32_t_s_s(((safe_div_func_int8_t_s_s(l_469[l_547], (1UL || (g_591[0][7] = l_469[l_547])))) & (((((l_472 >= l_469[l_547]) & g_127) & ((g_141 = l_592) != g_157[0])) == (safe_div_func_uint8_t_u_u(l_469[4], l_492))) == g_466.f3)), l_469[l_547]));
                    for (g_116 = 0; (g_116 <= 7); g_116 += 1)
                    {
                        int l_595 = 0x927F95D2L;
                        l_595 = (0UL > (g_473 = g_464));
                        p_52.f3 = l_469[0];
                    }
                    return l_553[0][0][8];
                }
            }
            if (g_501)
            {
                short l_598 = (-7L);
                int l_634[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_634[i] = 0xD2118156L;
                if ((l_525 = (((safe_div_func_uint8_t_u_u(func_55((p_52.f2 >= (l_492 >= (((g_141 = (l_528[3] || (l_598 > (p_52.f1 ^ (l_608 = ((l_528[3] = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(6UL, (safe_lshift_func_int8_t_s_u((l_607[8][7] = (p_51 | (safe_add_func_int32_t_s_s(p_52.f3, (((p_50 == p_51) > 0xE6F6BAE3L) <= 4UL))))), 5)))), 3)) >= p_52.f0)) & 0UL)))))) > l_598) | p_52.f3))), g_520, l_542, l_553[0][1][9]), 0xB7L)) == g_520) && (-8L))))
                {
                    unsigned l_632 = 0x0916475DL;
                    int l_633[4][4][8] = {{{9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}}, {{9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}}, {{9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}}, {{9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}, {9L, 0xF0AFEDC0L, 0xDD3C761AL, (-2L), 0x8A53FB92L, 1L, 0x8A53FB92L, (-2L)}}};
                    int i, j, k;
                    g_513 = (safe_add_func_int32_t_s_s((l_634[0] = ((safe_div_func_int8_t_s_s((l_633[2][3][4] = ((p_52.f1 && ((safe_add_func_uint16_t_u_u((g_230 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_76[5], ((safe_lshift_func_int16_t_s_s((~g_360), 6)) || (l_632 = ((g_153 = ((safe_div_func_uint32_t_u_u(l_547, (safe_add_func_int8_t_s_s(9L, (safe_lshift_func_uint8_t_u_s(251UL, (l_525 = (g_629 = (safe_add_func_uint8_t_u_u((l_492 = 254UL), 0UL)))))))))) <= (safe_div_func_uint16_t_u_u((l_542 <= l_598), p_52.f3)))) == g_235))))), 13))), p_51)) || g_262)) <= 0x6DA8L)), g_513)) == l_547)), 0x33A5DC26L));
                    g_501 = ((l_634[0] = (safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_103, ((g_141 = g_157[3]) & (g_235 == p_52.f3)))) > (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_52.f3, (l_528[0] | ((g_466.f3 & (g_170[5][0] <= g_573[3])) == g_466.f3)))), l_598))), l_608))) && p_51);
                }
                else
                {
                    unsigned l_645 = 0xEEA111E4L;
                    int l_651 = 0xB1049947L;
                    if ((safe_rshift_func_uint8_t_u_u((l_634[0] = (l_645 || 65530UL)), 1)))
                    {
                        g_170[3][2] = (safe_sub_func_int32_t_s_s(((p_51 >= func_55((l_486 <= ((g_530[0][3][0] = ((safe_add_func_int32_t_s_s(g_170[3][2], g_473)) != l_560)) != l_645)), l_529, p_52.f3, p_52.f2)) & 0xE1L), l_650));
                        p_52.f3 = l_634[0];
                        p_52.f3 = l_586;
                        p_52.f3 = 0x8E3C6B47L;
                    }
                    else
                    {
                        return l_645;
                    }
                    if ((l_651 = p_52.f2))
                    {
                        unsigned char l_674 = 0UL;
                        int l_675[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_675[i] = 0x025DAB0DL;
                        l_525 = (-8L);
                        l_651 = 0x47F1AAC4L;
                        g_170[3][2] = (-4L);
                        g_513 = (!(((~l_645) >= 0x8171L) > (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((3L && (func_55((l_675[1] = (g_565 = (safe_add_func_int32_t_s_s((p_52.f3 = 0x4EFA6D67L), (g_103 >= (((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_530[0][0][0] = g_591[0][7]), g_464)), (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_76[0] <= l_674), 0L)), p_51)))), 0x455FB667L)) != g_573[4]), p_50)), 4)) == l_598) != 0x4AL)))))), p_51, l_547, g_473) && g_573[4])) > l_598), 13)), 253UL))));
                    }
                    else
                    {
                        unsigned l_681 = 0x1B919511L;
                        g_170[4][7] = (((safe_div_func_uint8_t_u_u(0xB4L, (g_433[4][6][3] & p_52.f3))) | l_547) != ((safe_div_func_uint16_t_u_u(l_680, 0xCBC4L)) != (l_681 = g_153)));
                        if (p_52.f1)
                            break;
                    }
                    g_501 = (g_170[5][7] = l_634[0]);
                    g_170[6][5] = ((l_651 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(func_55(g_157[3], ((safe_add_func_int32_t_s_s((((l_634[0] >= ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_651, 6)), 0x8D16565DL)) <= p_52.f0)) >= 0x12L) && 0x6214C65AL), (((safe_rshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((l_608 > (l_525 = (g_520 = (l_492 = 0xBBC2L)))) | l_634[0]), p_52.f3)) > l_598), l_645)) > (-1L)) != (-6L)))) != g_138), g_565, p_51), p_50)), g_629))) == l_608);
                }
            }
            else
            {
                g_501 = (safe_div_func_uint32_t_u_u(4294967295UL, g_473));
            }
        }
        if (l_698)
        {
            l_492 = l_492;
        }
        else
        {
            int l_728 = 0xF27B1620L;
            for (l_650 = 0; (l_650 > 27); l_650 = safe_add_func_uint16_t_u_u(l_650, 8))
            {
                int l_711 = 0x011375A9L;
                unsigned char l_738 = 0x6CL;
                for (g_360 = (-17); (g_360 != 41); g_360 = safe_add_func_uint8_t_u_u(g_360, 1))
                {
                    int l_718 = 0x2A726C83L;
                    unsigned short l_719 = 65535UL;
                    p_52.f3 = (0x05CAF742L >= (safe_sub_func_uint32_t_u_u(((l_607[8][7] & (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0x95L, 2)), (((l_586 != g_116) <= 0x39L) < (safe_add_func_uint8_t_u_u(l_711, (safe_add_func_uint8_t_u_u((l_492 = (safe_lshift_func_uint16_t_u_s((p_52.f1 && ((g_433[4][6][3] = (g_565 = ((safe_rshift_func_int8_t_s_u((((l_718 = 0x7EL) >= l_472) != g_466.f2), 0)) & 0x1080L))) == p_52.f1)), 11))), l_719)))))))) > 255UL), g_501)));
                }
                if (g_538)
                    continue;
                l_608 = (safe_lshift_func_uint8_t_u_u(g_27, (safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_711, (l_728 | (safe_unary_minus_func_int32_t_s((l_492 = (safe_rshift_func_uint8_t_u_u(0x7FL, ((p_50 != l_728) < (safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_525 = l_492), ((((-6L) && (safe_div_func_uint32_t_u_u((g_157[3] ^ 0xEC80323EL), 0x9347CDFCL))) > p_52.f1) == p_52.f3))) || p_52.f3), g_28))))))))))), 0x6AL)) > g_573[4]), g_88))));
                g_513 = (func_55(p_52.f2, l_728, (func_55(l_738, func_55((safe_sub_func_uint8_t_u_u(0xEDL, ((g_76[0] = func_55((l_608 = g_154), g_76[0], p_50, p_51)) >= p_50))), g_538, l_728, g_466.f3), p_52.f0, l_738) < l_607[8][7]), p_52.f1) | p_51);
            }
            g_501 = g_230;
            return l_469[7];
        }
    }
    g_170[2][0] = g_88;
    l_698 = g_141;
    return g_235;
}







static const unsigned short func_55(unsigned char p_56, int p_57, unsigned p_58, char p_59)
{
    int l_70 = (-1L);
    unsigned short l_90 = 65526UL;
    int l_102 = 0xBB9FEC4FL;
    unsigned l_232 = 0xD499BF41L;
    if ((l_70 > p_59))
    {
        char l_73 = 0x13L;
        int l_85 = 0xC62D7FAEL;
        int l_135 = 0x02198734L;
        unsigned short l_140 = 0xFF55L;
        short l_261 = 8L;
        int l_462 = 0x21442307L;
lbl_416:
        l_70 = g_28;
        for (p_56 = (-7); (p_56 <= 13); p_56++)
        {
            int l_89 = 3L;
            l_89 = (g_88 = (0xD588L && (l_73 > ((safe_add_func_int8_t_s_s((g_76[0] = p_57), ((65531UL | (safe_unary_minus_func_int8_t_s((g_27 < ((p_58 != (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u((l_85 = l_70), (safe_sub_func_uint32_t_u_u(g_28, g_28)))))), p_58)), g_28))) <= g_28))))) & 1L))) >= p_56))));
            if (l_73)
                continue;
        }
        if (g_28)
        {
            unsigned l_100 = 0xE6652566L;
            unsigned short l_115 = 0x604EL;
            int l_125 = 0x463D7759L;
            int l_139 = 0xBEA0BD57L;
            if ((l_90 || (-1L)))
            {
                unsigned short l_97 = 65534UL;
                unsigned short l_101 = 0xCDEEL;
                int l_108 = 0L;
                if ((g_27 || p_57))
                {
                    l_70 = (l_100 = (safe_mod_func_uint16_t_u_u((~((l_85 = ((safe_sub_func_uint16_t_u_u((g_27 & p_56), p_56)) ^ (l_97 == 0xB71DEE15L))) || ((safe_add_func_int32_t_s_s((g_28 ^ p_57), p_58)) & (g_76[6] || g_28)))), 9UL)));
                }
                else
                {
                    l_101 = 0L;
                    g_103 = l_102;
                }
                if (((0x37L == l_101) <= ((safe_mod_func_uint8_t_u_u(((g_103 <= (l_108 = (safe_rshift_func_int8_t_s_u(p_57, 4)))) != ((((p_59 != (p_58 = ((((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((p_59 > (l_85 = (safe_add_func_int32_t_s_s(l_101, ((l_100 || p_56) == l_115))))) & 0xE7L) | 0xD9L), 0xD1L)), p_56)) ^ (-1L)) != p_56) & 0xF5L))) != g_76[0]) >= l_101) >= g_27)), 0x45L)) >= 1UL)))
                {
                    l_108 = g_76[0];
                    if (g_88)
                    {
                        g_116 = g_103;
                        return g_27;
                    }
                    else
                    {
                        return l_85;
                    }
                }
                else
                {
                    int l_126[6][4] = {{1L, (-4L), (-1L), 0L}, {1L, (-4L), (-1L), 0L}, {1L, (-4L), (-1L), 0L}, {1L, (-4L), (-1L), 0L}, {1L, (-4L), (-1L), 0L}, {1L, (-4L), (-1L), 0L}};
                    int i, j;
                    l_85 = 0x05E82EF2L;
                    g_127 = (safe_div_func_uint16_t_u_u(((0x3FL & (safe_div_func_uint16_t_u_u((l_85 ^ 0UL), g_27))) <= ((safe_add_func_uint16_t_u_u(g_76[4], (((l_126[3][0] = (l_125 = p_56)) || p_57) > 0x9E284758L))) > (0xE5A8EECEL == p_57))), l_73));
                }
                l_125 = (l_100 < g_103);
            }
            else
            {
                short l_132 = 0L;
                int l_161 = 0x77858FB2L;
                l_140 = ((l_85 = (l_139 = ((safe_div_func_int8_t_s_s((p_59 = (l_132 && (((5UL && (g_88 < (g_133 = p_57))) & (l_85 | (l_135 = ((safe_unary_minus_func_uint8_t_u(p_57)) <= l_70)))) <= (l_125 = (g_138 = ((65530UL == (safe_lshift_func_uint8_t_u_s(((p_59 > 0xA2L) && 0x57L), l_73))) <= 0xE9L)))))), 0xEDL)) >= p_58))) || l_132);
                g_141 = g_28;
                for (p_56 = 22; (p_56 <= 49); p_56 = safe_add_func_int8_t_s_s(p_56, 7))
                {
                    l_139 = g_144;
                    g_153 = (g_144 < ((p_59 = (p_56 <= p_58)) < (safe_rshift_func_uint16_t_u_u(g_116, (((safe_add_func_uint8_t_u_u((g_127 = (p_58 > (safe_div_func_uint16_t_u_u((l_139 = g_88), g_141)))), 0xECL)) == 0xD1EAB3F1L) <= p_56)))));
                    return p_56;
                }
                if (p_59)
                {
                    const int l_160 = 0x76CBE3BFL;
                    g_154 = (p_56 >= g_103);
                    for (l_102 = 0; (l_102 >= 1); l_102 = safe_add_func_int16_t_s_s(l_102, 1))
                    {
                        g_157[3] = 0x57FB1E3AL;
                        return p_56;
                    }
                    for (p_56 = (-25); (p_56 > 55); p_56++)
                    {
                        return l_160;
                    }
                    l_161 = l_160;
                }
                else
                {
                    l_139 = g_157[4];
                    if ((safe_div_func_uint8_t_u_u(g_141, (p_56 ^ (((safe_rshift_func_uint8_t_u_s(1UL, 7)) & (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((0xC88D1BEAL != g_27), (g_170[3][2] = ((g_127 = (l_70 = l_132)) ^ (l_140 >= (p_56 == 0xC62B0E76L)))))), p_58))) > p_56)))))
                    {
                        l_85 = (g_170[1][4] = g_76[1]);
                        l_70 = 0x764DEBD4L;
                        g_170[6][5] = 0x9D0B9B82L;
                    }
                    else
                    {
                        return g_170[3][2];
                    }
                }
            }
        }
        else
        {
            const char l_171 = 1L;
            short l_174[6][1][7] = {{{0xD883L, (-1L), 1L, (-2L), 3L, 0L, 0L}}, {{0xD883L, (-1L), 1L, (-2L), 3L, 0L, 0L}}, {{0xD883L, (-1L), 1L, (-2L), 3L, 0L, 0L}}, {{0xD883L, (-1L), 1L, (-2L), 3L, 0L, 0L}}, {{0xD883L, (-1L), 1L, (-2L), 3L, 0L, 0L}}, {{0xD883L, (-1L), 1L, (-2L), 3L, 0L, 0L}}};
            int l_192 = 9L;
            int l_217 = 1L;
            int l_243 = 0x55F6B4EEL;
            unsigned char l_246 = 0x31L;
            short l_363 = (-1L);
            unsigned char l_375 = 0x9FL;
            unsigned char l_420 = 0xD6L;
            int i, j, k;
lbl_441:
            if (l_171)
            {
                int l_203[10][6] = {{7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}, {7L, 0L, 0x066FCE70L, 0xA19CEE7FL, (-2L), (-5L)}};
                int l_248 = 0x58DFBB1BL;
                int l_253 = 0xFB598AF3L;
                unsigned char l_263 = 0x7EL;
                int i, j;
lbl_177:
                l_102 = 0xF823E191L;
                if ((safe_div_func_uint32_t_u_u(p_56, l_174[0][0][0])))
                {
                    unsigned char l_188 = 0x99L;
                    unsigned char l_191 = 0x79L;
                    int l_205 = 0x7AFCDE76L;
                    for (l_73 = 9; (l_73 == 6); l_73 = safe_sub_func_int16_t_s_s(l_73, 1))
                    {
                        if (l_140)
                            goto lbl_177;
                        if (p_57)
                            continue;
                    }
                    if ((l_192 = (safe_add_func_uint16_t_u_u((l_102 ^ l_140), ((safe_div_func_int32_t_s_s(l_85, p_58)) & (safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(l_70, (safe_add_func_int8_t_s_s((0x7EL >= (l_188 = l_90)), (safe_sub_func_int32_t_s_s(g_141, l_191)))))), g_138)))))))
                    {
                        g_170[3][2] = ((65535UL <= 8L) | (-2L));
                    }
                    else
                    {
                        unsigned l_204 = 18446744073709551611UL;
                        int l_206[4][7] = {{(-1L), 7L, 1L, 7L, (-1L), 7L, 1L}, {(-1L), 7L, 1L, 7L, (-1L), 7L, 1L}, {(-1L), 7L, 1L, 7L, (-1L), 7L, 1L}, {(-1L), 7L, 1L, 7L, (-1L), 7L, 1L}};
                        int i, j;
                        g_170[6][9] = (((+(l_205 = (((g_76[1] = (p_58 != ((l_203[9][1] = (((p_58 != (0UL == ((safe_add_func_int16_t_s_s(g_154, (l_85 = (l_174[3][0][2] <= (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((g_141 = (((safe_add_func_uint32_t_u_u((((g_154 > (g_157[3] <= l_192)) || p_57) <= 4294967287UL), 0UL)) >= g_76[6]) > g_170[2][1])) > 0xF899L), p_58)), p_56)), g_144)))))) || p_58))) != g_88) && 0xE9L)) ^ g_127))) || (-5L)) >= l_204))) >= p_57) <= g_157[3]);
                        l_70 = p_58;
                        l_192 = (l_73 != (1UL <= ((-7L) || ((l_206[3][2] = (!l_171)) == ((g_127 ^ g_116) || p_56)))));
                        g_170[9][6] = (0xB79DC5B5L || ((p_59 && (((g_153 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_58, 0)), g_28))) >= (!((safe_rshift_func_int16_t_s_s(l_205, 14)) && (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((l_191 || l_217) > 1UL) ^ (safe_lshift_func_int8_t_s_u(l_203[6][3], g_127))), 0x9BC9FA81L)), l_90))))) <= g_127)) & l_205));
                    }
                    for (l_192 = 5; (l_192 >= 0); l_192 -= 1)
                    {
                        int l_231 = (-1L);
                        int l_242 = 0x24142CD7L;
                        l_232 = (safe_unary_minus_func_uint8_t_u((((!(l_231 = ((safe_mod_func_uint16_t_u_u(((0xD7L >= g_138) <= (g_170[3][2] = (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((l_171 && 6L), 0x5F55L)), (p_59 <= (((((safe_unary_minus_func_int16_t_s(l_140)) && (!g_230)) == (g_76[0] = p_58)) | p_56) == 4294967295UL)))))), g_144)) & l_73))) && g_88) < l_188)));
                        l_243 = (((safe_sub_func_uint16_t_u_u(p_58, (((g_235 = p_59) && l_188) > l_203[9][1]))) != (l_231 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(g_157[2], p_57)), (g_141 = 65530UL))))) < (safe_div_func_uint32_t_u_u(l_242, ((p_59 <= l_242) & p_57))));
                        g_170[4][7] = g_133;
                    }
                }
                else
                {
lbl_247:
                    for (l_192 = 0; (l_192 <= 19); ++l_192)
                    {
                        g_170[0][1] = l_246;
                        if (g_141)
                            goto lbl_254;
                        if (l_85)
                            continue;
                    }
                    for (l_246 = 0; (l_246 <= 0); l_246 += 1)
                    {
                        g_170[0][3] = 3L;
                    }
                    for (g_153 = 0; (g_153 <= 0); g_153 += 1)
                    {
                        if (l_102)
                            goto lbl_247;
                    }
                }
                g_170[3][5] = (l_248 = p_58);
                if ((l_248 >= (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((l_174[0][0][5] != (g_153 | (-9L))), g_138)) || (p_59 == (l_232 | ((g_103 == (l_253 = 0x11D2L)) >= l_203[3][2])))), p_59))))
                {
                    if ((l_232 >= l_90))
                    {
lbl_254:
                        g_170[3][2] = p_56;
                        g_262 = (g_170[5][8] = (safe_sub_func_uint32_t_u_u(g_230, ((safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(g_27, (l_261 = p_59))) || p_56), ((((0L > ((p_58 || g_157[1]) || p_57)) >= p_56) > p_57) < l_203[5][0]))) != 0xDF58AA48L))));
                        g_170[1][8] = (g_230 != l_263);
                    }
                    else
                    {
                        unsigned char l_264 = 254UL;
                        l_135 = p_56;
                        l_264 = (l_90 != g_28);
                    }
                    for (g_141 = 1; (g_141 <= 6); g_141 += 1)
                    {
                        l_243 = ((g_144 < 4UL) <= p_59);
                    }
                }
                else
                {
                    for (l_232 = 0; (l_232 <= 6); l_232 += 1)
                    {
                        g_170[3][2] = (-1L);
                        l_192 = p_59;
                        l_243 = (!1L);
                        g_170[3][2] = g_157[3];
                    }
                }
            }
            else
            {
                unsigned char l_304 = 0UL;
                unsigned l_329 = 0xC5B3CAC8L;
                int l_332 = 1L;
                unsigned l_333 = 18446744073709551607UL;
lbl_398:
                l_135 = (!(-1L));
                l_135 = (l_102 = 0x5F0FA449L);
                if ((g_170[3][2] = ((safe_mod_func_uint16_t_u_u(p_59, (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_76[0] || ((safe_rshift_func_uint8_t_u_u(p_58, 6)) && g_138)), (3L <= (g_230 = g_230)))), l_174[0][0][6])))) <= (safe_lshift_func_uint16_t_u_s(0x0FEBL, 4)))))
                {
                    unsigned l_279 = 18446744073709551614UL;
                    int l_328[9][9] = {{0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}, {0x10C0132FL, (-4L), 0x10C0132FL, 5L, 8L, 0x53EA8AC7L, 0x02329175L, 0x02329175L, 0x53EA8AC7L}};
                    int i, j;
                    if (((safe_add_func_uint16_t_u_u(l_70, (g_157[1] | (p_56 || (p_58 <= (g_103 && (l_279 = 0xDC22L))))))) == (l_243 >= (safe_mod_func_int32_t_s_s(0xA3D84FE9L, 0xC6C1E38EL)))))
                    {
                        unsigned l_305 = 18446744073709551613UL;
                        g_170[7][8] = (l_171 && ((0x56DCL == (l_135 < (g_76[6] & g_170[3][2]))) && ((p_57 & (safe_rshift_func_int8_t_s_s(0x63L, 7))) <= ((4294967289UL | l_261) | g_262))));
                        g_170[3][2] = (((safe_div_func_int32_t_s_s((((-2L) != g_88) && (safe_div_func_int8_t_s_s(p_58, l_135))), (safe_lshift_func_uint16_t_u_u((((g_306 = (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(l_279, (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((l_90 || (g_76[0] = ((l_192 = (p_56 ^ (~(~(l_279 == g_144))))) == 0xFABCL))), g_153)) <= 0x0F04L), p_56)) > l_304), p_57)))) >= 0x6DL), 4)), l_305))) || g_28) | 0UL), 7)))) < p_58) & p_56);
                    }
                    else
                    {
                        return g_27;
                    }
                    if (g_157[3])
                    {
                        const unsigned short l_319 = 0xF2B9L;
                        l_102 = (+(((l_232 >= (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_262, (g_153 = p_58))), (((safe_lshift_func_uint8_t_u_u(g_230, (g_154 = (g_116 = (safe_div_func_uint16_t_u_u(p_58, (safe_lshift_func_int16_t_s_u(l_319, 6)))))))) < (safe_add_func_int8_t_s_s(g_127, (~(safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((p_56 != g_306), 5L)) < l_171) > l_217), p_58)))))) && l_304))) & g_170[7][8]), l_70))) & l_319) & p_56));
                        l_328[5][4] = ((p_57 && 0xF971L) < (safe_lshift_func_uint8_t_u_s(l_279, 6)));
                    }
                    else
                    {
                        l_329 = (!(l_328[1][5] <= g_262));
                        l_85 = g_230;
                        l_192 = g_230;
                    }
                    l_332 = (l_73 & (l_102 = (safe_rshift_func_int8_t_s_u(l_73, (g_127 = p_59)))));
                    for (p_57 = 2; (p_57 <= 8); p_57 += 1)
                    {
                        return p_56;
                    }
                }
                else
                {
                    int l_347[1][10];
                    int l_397 = 1L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_347[i][j] = 0x6BA76FA0L;
                    }
                    if (((-1L) & (0UL <= (l_333 = p_56))))
                    {
                        unsigned char l_340 = 255UL;
                        g_170[3][2] = 0x7D210C74L;
                        l_347[0][2] = (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(l_340, g_157[3])), (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((0xD5E9L ^ (((p_58 ^ l_232) & (p_59 = (((((g_306 ^ p_57) != p_58) ^ ((l_340 && 4L) ^ 0xF6L)) > l_340) ^ 0x225BA550L))) == p_58)), g_157[3])), l_261)))) >= 1UL), 0x0BE9A3CAL));
                        g_170[3][2] = g_170[3][2];
                    }
                    else
                    {
                        g_170[9][1] = (((safe_sub_func_uint32_t_u_u((g_76[0] < (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((g_27 >= (safe_sub_func_int16_t_s_s(g_127, ((l_70 = (safe_mod_func_int16_t_s_s((g_360 = g_157[3]), (g_230 = (g_88 & (safe_div_func_uint32_t_u_u(0x5D0FD5C3L, 1L))))))) == l_363)))) | g_306) > g_76[0]), g_133)), p_58)) & 1L) & 0L), 14))), g_170[3][2])) <= g_157[2]) == (-5L));
                        g_170[8][6] = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((p_58 || p_56) >= (g_154 > g_157[3])) || l_217), 8)), g_76[0]));
                    }
                    if ((l_70 = (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_170[3][2], 0)), (safe_unary_minus_func_int8_t_s((l_347[0][2] >= (safe_rshift_func_uint8_t_u_u((l_261 == l_375), (0x25EBL > g_306))))))))))
                    {
                        int l_384[6] = {0x39E677AAL, 0x17CF08D6L, 0x39E677AAL, 0x17CF08D6L, 0x39E677AAL, 0x17CF08D6L};
                        int i;
                        l_135 = (safe_lshift_func_uint16_t_u_s((p_57 >= ((l_332 = 0x157FL) ^ (((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(g_116, (l_304 & (!p_58)))), (4294967295UL | 0xC08AB6B9L))) && (safe_div_func_int32_t_s_s((((((l_261 != g_103) || p_58) > l_85) | p_58) == p_59), l_384[3]))) ^ 0x3872D6BFL))), 8));
                        g_170[3][2] = p_56;
                    }
                    else
                    {
                        l_332 = g_141;
                        g_170[9][1] = (p_58 <= g_88);
                    }
                    if (((g_88 ^ ((safe_div_func_int16_t_s_s(l_261, ((((l_332 = l_85) || (safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(l_332, g_141)) & g_127), (((0x9DL == (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(g_76[5], (safe_sub_func_int32_t_s_s(((p_58 > g_144) && 0x6B6CL), p_59)))), p_57))) || l_347[0][3]) || 0L)))) == g_28) && l_347[0][5]))) >= g_141)) && 0x2BL))
                    {
                        unsigned l_399[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_399[i] = 0x57C4CBADL;
                        l_397 = g_103;
                        if (g_138)
                            goto lbl_398;
                        l_399[2] = (-1L);
                    }
                    else
                    {
                        unsigned short l_411 = 0x7324L;
                        l_85 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(l_192, (safe_unary_minus_func_uint32_t_u((l_347[0][8] && (((g_157[3] != (l_243 = p_59)) && (safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_411 = p_57), p_59)), 3))) ^ g_76[0])))))), l_329)), (safe_mod_func_uint16_t_u_u(g_127, l_85))));
                        g_170[3][2] = (p_58 ^ 65528UL);
                    }
                }
            }
            for (l_140 = (-25); (l_140 > 40); ++l_140)
            {
                int l_419 = (-1L);
                if (g_133)
                    goto lbl_416;
                g_170[6][4] = p_58;
                if (p_57)
                {
                    l_135 = 0x17D5CF26L;
                    g_170[6][9] = (l_420 = (safe_lshift_func_int16_t_s_u(l_419, 5)));
                }
                else
                {
                    unsigned short l_425 = 1UL;
                    unsigned l_428 = 0xA6C8D04AL;
                    l_428 = (safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_425 = g_141), (((g_157[3] == 0x8AL) ^ l_261) || ((((g_230 = ((g_127 | p_58) > l_135)) != ((g_116 = 250UL) & l_140)) || 9UL) <= 8UL)))), l_419));
                    return p_58;
                }
                for (g_153 = 9; (g_153 <= 31); g_153++)
                {
                    int l_434 = 0x482D0FDDL;
                    if (((safe_mod_func_int8_t_s_s(0x67L, p_58)) ^ (g_170[8][5] = ((g_262 >= 0xFDL) < g_154))))
                    {
                        g_433[4][6][3] = (g_170[3][8] = l_102);
                    }
                    else
                    {
                        l_434 = g_157[3];
                        return l_73;
                    }
                }
            }
            l_102 = l_102;
            for (g_306 = 0; (g_306 >= 1); g_306 = safe_add_func_uint8_t_u_u(g_306, 6))
            {
                short l_444 = 1L;
                unsigned l_463 = 4294967295UL;
                for (g_235 = 0; (g_235 < 24); g_235 = safe_add_func_uint16_t_u_u(g_235, 8))
                {
                    short l_439 = (-3L);
                    g_440 = (((g_170[3][8] = ((l_102 = p_59) <= l_439)) || p_58) && l_261);
                }
                if (l_73)
                    goto lbl_441;
                for (l_375 = 21; (l_375 > 60); l_375 = safe_add_func_int8_t_s_s(l_375, 1))
                {
                    unsigned short l_451[6][9][4] = {{{0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}}, {{0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}}, {{0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}}, {{0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}}, {{0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}}, {{0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}, {0UL, 0UL, 0xABBAL, 65535UL}}};
                    int i, j, k;
                    l_243 = (p_57 & ((((((((((l_444 = (p_59 = p_56)) != g_157[3]) || (l_217 || l_232)) && g_153) < g_133) > (p_58 = (safe_sub_func_int16_t_s_s(0xDB83L, (safe_div_func_uint8_t_u_u(g_157[3], p_57)))))) >= g_433[4][6][3]) && (-2L)) ^ 0x5A01L) != l_102));
                    if ((l_444 & g_440))
                    {
                        g_170[3][2] = (safe_sub_func_uint16_t_u_u(g_433[4][6][3], (!(l_451[5][8][2] <= p_59))));
                        l_192 = g_133;
                        return l_451[1][3][1];
                    }
                    else
                    {
                        short l_461 = 1L;
                        l_192 = (g_360 | l_444);
                        l_461 = (safe_mod_func_uint16_t_u_u(p_56, (safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_uint8_t_u(g_138)) == (safe_lshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(g_157[3], 0x82L)), 3))) >= l_444) && l_174[2][0][6]), 0))));
                        if (l_462)
                            break;
                    }
                    if (l_451[2][8][0])
                        continue;
                    if (l_463)
                        break;
                }
            }
        }
    }
    else
    {
        unsigned char l_465 = 6UL;
        l_102 = g_464;
        l_465 = g_133;
    }
    return l_70;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_45[i][j], "g_45[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_170[i][j], "g_170[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_433[i][j][k], "g_433[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f1, "g_466.f1", print_hash_value);
    transparent_crc(g_466.f2, "g_466.f2", print_hash_value);
    transparent_crc(g_466.f3, "g_466.f3", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_530[i][j][k], "g_530[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_573[i], "g_573[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_591[i][j], "g_591[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1038[i], "g_1038[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1073[i], "g_1073[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1080, "g_1080", print_hash_value);
    transparent_crc(g_1120, "g_1120", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1181[i][j][k], "g_1181[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1202[i][j][k], "g_1202[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1281[i], "g_1281[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1348[i][j][k], "g_1348[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1370[i], "g_1370[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1638, "g_1638", print_hash_value);
    transparent_crc(g_1640, "g_1640", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1783[i], "g_1783[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1784[i][j], "g_1784[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1869, "g_1869", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
