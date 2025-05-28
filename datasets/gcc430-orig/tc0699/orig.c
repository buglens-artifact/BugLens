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


struct S0 {
   int f0;
   int f1;
   short f2;
   short f3;
   char f4;
   int f5;
   short f6;
   unsigned f7;
   int f8;
   char f9;
};

struct S1 {
   unsigned f0;
   unsigned f1;
   int f2;
   unsigned f3;
   int f4;
   int f5;
   char f6;
   int f7;
   unsigned f8;
};


static unsigned g_7 = 18446744073709551609UL;
static int g_16[5][4][9] = {{{0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}}, {{0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}}, {{0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}}, {{0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}}, {{0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}, {0x511AFD20L, 0xF5CBF793L, (-10L), 0L, (-4L), (-9L), 5L, (-7L), 1L}}};
static int *g_15 = &g_16[0][0][4];
static int g_33 = 0xFC491750L;
static unsigned g_50 = 0x31781FA8L;
static unsigned char g_57 = 0xFFL;
static unsigned short g_74 = 0UL;
static struct S0 g_79 = {1L,0L,-7L,-6L,0x70L,0xD57B232BL,-6L,4294967291UL,3L,-1L};
static int *g_89 = &g_16[0][0][4];
static struct S1 g_96 = {0xA4BF25F1L,18446744073709551610UL,-8L,0UL,-7L,0xF068E203L,0x90L,-1L,0xF7924299L};
static unsigned short *g_117[5][1] = {{&g_74}, {&g_74}, {&g_74}, {&g_74}, {&g_74}};
static unsigned short **g_116 = &g_117[4][0];
static int *g_129 = &g_79.f5;
static int **g_138 = &g_129;
static int **g_141 = &g_129;
static struct S0 g_234 = {0x18E979E8L,0xE9252BB6L,1L,0x64D2L,0x6BL,-1L,0x8AB6L,4294967286UL,-9L,0xD3L};
static struct S0 **g_345 = (void*)0;
static char *g_369 = &g_234.f4;
static char **g_368 = &g_369;
static struct S0 g_381 = {0x8E2ABB98L,-7L,-7L,0x6CC6L,9L,4L,0L,4294967295UL,0x4DBAB3D3L,3L};
static struct S0 *g_380 = &g_381;
static struct S1 g_388 = {1UL,0xF8EAE948L,0xF12CDA75L,0x0D9CE885L,5L,-1L,1L,0x66E7AB1FL,4294967287UL};
static unsigned short g_444 = 65535UL;
static char g_465[5] = {1L, 1L, 1L, 1L, 1L};
static unsigned char **g_536 = (void*)0;
static unsigned g_545 = 0xDCCB74ACL;



static int func_1(void);
static int * func_3(int p_4, int * p_5, int * p_6);
static int * func_10(struct S1 p_11, int * p_12, int * p_13);
static int * func_17(struct S0 p_18);
static struct S0 func_19(short p_20, int * p_21);
static short func_22(struct S0 p_23, unsigned p_24, short p_25);
static struct S0 func_26(unsigned char p_27, unsigned p_28, int * p_29, int * p_30, int p_31);
static int * func_38(int * p_39, unsigned short p_40, int * p_41);
static int * func_42(struct S1 p_43, char p_44);
static struct S1 func_45(int * p_46, short p_47, int * p_48, int * p_49);
static int func_1(void)
{
    int l_2 = (-10L);
    int *l_8 = (void*)0;
    int *l_9 = &l_2;
    struct S1 l_14 = {5UL,0xDEBF889EL,0x22A5BC42L,0x06DD2CC9L,-1L,0xA2EF703CL,0x76L,1L,0xA6B719D8L};
    int *l_32 = &g_33;
    short l_126 = 1L;
    unsigned short l_546 = 0x08B1L;
    l_2 = (-8L);
    (*g_141) = func_3(((*l_9) = g_7), func_10(l_14, g_15, func_17(func_19(func_22(func_26(l_14.f1, g_16[0][0][4], l_32, l_9, (((*l_32) >= 0x3AL) && (*l_32))), g_7, l_126), l_8))), l_32);

    ;
    ;
    return l_546;
}







static int * func_3(int p_4, int * p_5, int * p_6)
{
    struct S0 l_530[10][6] = {{{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}, {{0x822F0700L,0xE782ED76L,2L,-7L,0L,0xBC6A6D8AL,1L,0UL,-1L,0x2FL}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {9L,1L,-1L,0xB400L,-8L,7L,0xDF38L,1UL,0xBF2177D5L,0xEEL}, {1L,0x20866215L,0x90B1L,0x2459L,8L,0x29E9FB67L,0xDAF0L,0UL,0x0082C671L,-9L}, {0xCD077A79L,-10L,0xE754L,0x9D6DL,3L,0x0013A84CL,0x16B8L,0x758A89E2L,-6L,0x8AL}}};
    int *l_531 = (void*)0;
    unsigned char *l_535 = &g_57;
    unsigned char **l_534 = &l_535;
    unsigned char ***l_537 = &g_536;
    unsigned short **l_538 = &g_117[4][0];
    unsigned short ***l_539 = &g_116;
    char l_540 = 0x98L;
    struct S1 *l_541 = &g_388;
    struct S1 **l_542 = &l_541;
    int i, j;
    (*p_5) = (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((p_4 == func_22(l_530[9][5], (l_530[9][5].f1 <= func_22((*g_380), g_381.f9, l_530[9][5].f4)), l_530[9][5].f5)), 0xCF5AL)), (**g_138)));
    (**g_141) = func_22(((*g_380) = func_26(((*l_535) = (safe_add_func_uint8_t_u_u(l_530[9][5].f7, ((((((((*g_369) >= (g_79.f9 | (g_96.f8 || p_4))) != (l_534 == ((*l_537) = g_536))) >= (0xFE188BF6L != (((*l_539) = l_538) == (void*)0))) < 8L) ^ 1UL) && 0x41995799L) | p_4)))), g_381.f4, (*g_141), (*g_138), l_540)), g_388.f0, l_530[9][5].f3);
    (*l_542) = l_541;
    for (g_96.f4 = (-12); (g_96.f4 == 24); g_96.f4 = safe_add_func_int32_t_s_s(g_96.f4, 2))
    {
        (*g_141) = p_6;

        ;
        (*g_141) = (*g_138);
        (*g_138) = func_42(((*l_541) = func_45((*g_141), p_4, &g_16[0][0][4], &g_16[3][3][0])), ((**g_368) = (**g_368)));

        ;
        (**g_138) = g_545;
    }

    ;
    return l_531;


}







static int * func_10(struct S1 p_11, int * p_12, int * p_13)
{
    int *l_522 = &g_381.f5;
    int **l_525 = &g_89;
    (*g_129) = 3L;
    (*l_522) = ((*g_129) = p_11.f1);
    for (g_96.f4 = (-5); (g_96.f4 > (-27)); g_96.f4--)
    {
        (*g_138) = p_13;

        ;
    }

    ;
    (*g_141) = func_38(((*l_525) = &g_16[0][0][4]), p_11.f4, &g_16[0][0][4]);

    ;
    return p_13;


}







static int * func_17(struct S0 p_18)
{
    unsigned char l_458 = 0UL;
    unsigned char *l_462 = &l_458;
    unsigned char **l_461 = &l_462;
    struct S0 l_472 = {0x8E9E7447L,0xDC692874L,0x9B76L,0x3458L,1L,0x01F70B8FL,0L,0UL,0x8F881D41L,6L};
    int l_475[5][8][5] = {{{0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}}, {{0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}}, {{0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}}, {{0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}}, {{0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}, {0x6555D797L, (-1L), 0L, 0x6B4C0255L, 0x413D2F95L}}};
    short *l_476[2][10] = {{(void*)0, &g_79.f3, &g_381.f3, &g_381.f6, &g_381.f6, &g_381.f6, &g_381.f6, &g_381.f6, &g_381.f3, &g_79.f3}, {(void*)0, &g_79.f3, &g_381.f3, &g_381.f6, &g_381.f6, &g_381.f6, &g_381.f6, &g_381.f6, &g_381.f3, &g_79.f3}};
    unsigned short **l_479 = &g_117[2][0];
    unsigned *l_480[2];
    int ***l_510[3][3] = {{&g_141, (void*)0, &g_141}, {&g_141, (void*)0, &g_141}, {&g_141, (void*)0, &g_141}};
    int *l_521 = &g_388.f5;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_480[i] = &g_79.f7;
    (*g_129) = ((safe_rshift_func_int8_t_s_s(((**g_368) = (func_22((*g_380), l_458, (((safe_sub_func_int32_t_s_s(((&g_57 != ((*l_461) = &l_458)) <= ((*g_129) != func_22(p_18, g_388.f7, ((safe_add_func_int8_t_s_s((**g_368), (*g_369))) || 0xD3C7C2A8L)))), g_16[0][0][4])) >= l_458) || g_465[1])) < p_18.f2)), 3)) == 0xC0L);
    for (p_18.f9 = 0; (p_18.f9 >= (-20)); p_18.f9--)
    {
        short *l_471 = &g_234.f3;
        short **l_470 = &l_471;
        short ***l_469 = &l_470;
        (**g_141) = (safe_unary_minus_func_int8_t_s(p_18.f0));
        (*l_469) = (void*)0;

        ;
    }
lbl_511:
    p_18.f0 = ((func_22(l_472, (safe_add_func_uint16_t_u_u((l_475[4][0][0] = 0UL), (g_381.f6 = g_234.f4))), func_22(func_26(((safe_add_func_int16_t_s_s(g_96.f3, ((void*)0 != l_479))) && ((g_381.f7 = 0x258040D1L) < l_458)), p_18.f6, (*g_138), l_480[1], (*g_89)), l_472.f7, p_18.f7)) >= g_234.f3) | p_18.f1);
    for (g_234.f4 = (-13); (g_234.f4 >= (-18)); --g_234.f4)
    {
        unsigned short l_485 = 0x4029L;
        struct S0 *l_488[1][2][7];
        int **l_499[9];
        short l_517 = 0x25E2L;
        int l_520[9];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 7; k++)
                    l_488[i][j][k] = &g_79;
            }
        }
        for (i = 0; i < 9; i++)
            l_499[i] = &g_15;
        for (i = 0; i < 9; i++)
            l_520[i] = 0L;
        if ((safe_sub_func_uint8_t_u_u((l_472.f6 | l_485), (((safe_rshift_func_uint16_t_u_u(l_485, 7)) > l_485) != 9L))))
        {
            unsigned l_493 = 0x252119ECL;
            for (g_388.f3 = 0; (g_388.f3 <= 1); g_388.f3 += 1)
            {
                struct S0 *l_489[3];
                struct S0 **l_490[4][3] = {{(void*)0, &l_488[0][0][2], (void*)0}, {(void*)0, &l_488[0][0][2], (void*)0}, {(void*)0, &l_488[0][0][2], (void*)0}, {(void*)0, &l_488[0][0][2], (void*)0}};
                int *l_494 = &g_96.f5;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_489[i] = &g_381;
                l_488[0][0][1] = &l_472;
                g_380 = l_489[1];
                (**g_141) = (((*g_369) < (safe_add_func_int32_t_s_s((p_18.f9 & p_18.f9), l_493))) == 0UL);
                for (l_472.f0 = 3; (l_472.f0 >= 0); l_472.f0 -= 1)
                {
                    return l_494;


                }
            }


        }
        else
        {
            unsigned l_503 = 4294967295UL;
            short **l_507 = &l_476[0][1];
            short ***l_506 = &l_507;
            char *l_512 = (void*)0;
            char *l_513 = &g_388.f6;
            struct S0 l_516 = {0xA423A3A7L,0x09E9588EL,-1L,0xDAA7L,0xD9L,1L,-10L,0xEC02B98DL,0xD9A5FE9CL,0x4EL};
            if (((**g_141) ^ g_96.f2))
            {
                unsigned l_497 = 5UL;
                int l_498 = 0x6C98964DL;
                unsigned l_500 = 0x2221C82BL;
                (**g_141) = (((safe_add_func_int32_t_s_s(((l_497 = (p_18.f6 = 0x650BL)) < l_498), ((((l_499[6] != &g_89) & (l_500 ^ p_18.f7)) ^ ((safe_add_func_int32_t_s_s((!(l_503 < l_500)), g_234.f2)) == p_18.f4)) || l_475[3][0][0]))) < 0x3D9AL) & p_18.f2);
                (**g_141) = (l_472.f2 != ((safe_add_func_uint32_t_u_u(l_485, ((l_498 = (&g_368 != &g_368)) <= ((void*)0 == l_506)))) & (safe_lshift_func_uint16_t_u_u((~(l_500 & ((void*)0 == l_510[0][0]))), 6))));
                (**g_138) = 0x337D9467L;
            }
            else
            {
                (*g_380) = func_19(p_18.f3, (g_89 = &g_16[0][3][8]));
            }
            if (l_472.f8)
                goto lbl_511;
            (*g_129) = (((*l_513) = (**g_368)) & ((((*l_507) = g_117[3][0]) == (void*)0) >= ((((safe_add_func_int16_t_s_s((-7L), p_18.f4)) && (l_503 < func_22(l_516, l_517, ((l_485 < (**g_368)) != 252UL)))) ^ l_517) ^ p_18.f0)));
            l_520[8] = (safe_mod_func_int8_t_s_s(p_18.f2, func_22((*g_380), g_96.f7, g_79.f5)));
        }


    }
    return l_521;


}







static struct S0 func_19(short p_20, int * p_21)
{
    int *l_438 = &g_96.f7;
    int l_445 = 0L;
    int l_448 = (-7L);
    int *l_449 = &g_16[0][0][4];
    struct S1 l_450 = {0xF5B15C77L,0UL,0x07E9C51BL,0UL,1L,1L,3L,-2L,0x058638DEL};
    int **l_453 = &l_449;
    struct S1 *l_454 = &l_450;
    struct S0 l_455 = {-1L,1L,0x9E10L,0x49B5L,1L,5L,0x9B4AL,0x6C29CCD0L,-6L,0xCCL};
    for (g_234.f0 = 0; (g_234.f0 <= 22); g_234.f0 = safe_add_func_uint8_t_u_u(g_234.f0, 7))
    {
        struct S0 l_446 = {0xDCC1D0C8L,5L,0x01D3L,0x487BL,0x48L,-5L,0x6712L,0UL,0x5F9EAC18L,0xAFL};
        (**g_138) = (**g_141);
        for (g_381.f4 = 0; (g_381.f4 <= 3); g_381.f4 += 1)
        {
            short l_441 = 0x7C09L;
            unsigned short *l_442 = &g_74;
            unsigned short *l_443[6][6] = {{&g_444, &g_444, &g_444, &g_444, &g_444, &g_444}, {&g_444, &g_444, &g_444, &g_444, &g_444, &g_444}, {&g_444, &g_444, &g_444, &g_444, &g_444, &g_444}, {&g_444, &g_444, &g_444, &g_444, &g_444, &g_444}, {&g_444, &g_444, &g_444, &g_444, &g_444, &g_444}, {&g_444, &g_444, &g_444, &g_444, &g_444, &g_444}};
            struct S0 *l_447 = &g_79;
            int i, j;
            (*g_129) = func_22((*g_380), g_79.f2, l_445);
            for (g_96.f3 = 0; (g_96.f3 <= 3); g_96.f3 += 1)
            {
                return (*l_447);
            }
        }
    }
    (*l_454) = func_45(func_38(func_42(l_450, (safe_add_func_int16_t_s_s(l_450.f3, (l_448 = (((*l_453) = l_438) != (void*)0))))), p_20, p_21), p_20, &g_16[3][0][8], p_21);

    ;
    return l_455;
}







static short func_22(struct S0 p_23, unsigned p_24, short p_25)
{
    unsigned short *l_145 = &g_74;
    int l_158 = 0x43D6F2FDL;
    int l_159 = 0x47BFB23AL;
    int *l_212 = &g_79.f1;
    struct S1 l_215 = {0x777C9553L,0x55BCBC91L,0xEC19C680L,4UL,1L,-6L,1L,0xC8F22753L,0x2718EB8AL};
    struct S0 *l_233[5][9][4] = {{{&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}}, {{&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}}, {{&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}}, {{&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}}, {{&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}, {&g_234, &g_234, &g_234, (void*)0}}};
    struct S0 **l_232 = &l_233[2][7][1];
    unsigned char *l_235 = &g_57;
    int *l_270[5][5][6] = {{{&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}}, {{&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}}, {{&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}}, {{&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}}, {{&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}, {&g_33, &g_79.f0, (void*)0, &g_79.f0, &g_33, &g_79.f0}}};
    struct S1 l_283 = {18446744073709551607UL,6UL,-1L,0x41F6079FL,0xFDB27AC7L,-4L,5L,0L,0x9D6BF60BL};
    char l_336[3][9];
    int l_408 = 0xF926C500L;
    unsigned l_420 = 0x484A8A5CL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
            l_336[i][j] = 0x79L;
    }
    for (p_23.f8 = 0; (p_23.f8 <= 0); p_23.f8 += 1)
    {
        int l_135 = 0x871A79F7L;
        struct S1 l_142 = {0UL,0xECCD6428L,0xB9456BA3L,0UL,0L,-5L,0xF0L,1L,0xD7BF6C48L};
        int l_160 = 1L;
        int *l_161 = &g_96.f4;
        struct S0 *l_196[6] = {&g_79, &g_79, &g_79, &g_79, &g_79, &g_79};
        int ***l_201 = &g_141;
        unsigned short l_225[7][6] = {{1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}, {1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}, {1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}, {1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}, {1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}, {1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}, {1UL, 0x3293L, 1UL, 0x3293L, 1UL, 65531UL}};
        int i, j;
    }
    return g_381.f5;
}







static struct S0 func_26(unsigned char p_27, unsigned p_28, int * p_29, int * p_30, int p_31)
{
    short l_85 = 3L;
    int l_97 = (-1L);
    int *l_108 = (void*)0;
    int *l_112[6];
    struct S0 *l_123[3][3];
    int *l_125 = &g_79.f5;
    int **l_124 = &l_125;
    int i, j;
    for (i = 0; i < 6; i++)
        l_112[i] = &g_16[0][0][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_123[i][j] = &g_79;
    }
    for (p_27 = 0; (p_27 == 30); p_27++)
    {
        struct S1 l_95[7] = {{18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}, {18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}, {18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}, {18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}, {18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}, {18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}, {18446744073709551615UL,18446744073709551610UL,0x68297EEDL,4294967295UL,4L,0L,0x49L,0x3678AA32L,4294967294UL}};
        int *l_107[8][5][6] = {{{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}, {{&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}, {&l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2, &l_95[0].f5, &l_95[0].f2}}};
        int i, j, k;
        for (p_28 = 1; (p_28 != 52); p_28 = safe_add_func_uint8_t_u_u(p_28, 7))
        {
            int *l_88 = &g_16[4][1][2];
            int **l_87[3];
            int l_90[8][10][3] = {{{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}, {{0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}, {0xC2F3C20DL, 0xF4E4257DL, (-1L)}}};
            int *l_92 = (void*)0;
            int **l_91 = &l_92;
            int *l_94 = &g_79.f5;
            int **l_93 = &l_94;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_87[i] = &l_88;
            (*l_93) = ((*l_91) = func_38((g_89 = func_42(func_45(p_29, g_7, &g_16[0][2][3], &g_16[0][0][4]), (l_85 ^ (&g_16[2][2][4] == &g_16[0][0][4])))), l_90[3][2][1], &g_16[1][3][6]));

            ;
            ;
            g_96 = l_95[0];
            (*l_93) = (void*)0;

            ;
            if (g_33)
            {
                int l_105[6][4] = {{0x9218137CL, 0L, 0x680494BAL, 0x680494BAL}, {0x9218137CL, 0L, 0x680494BAL, 0x680494BAL}, {0x9218137CL, 0L, 0x680494BAL, 0x680494BAL}, {0x9218137CL, 0L, 0x680494BAL, 0x680494BAL}, {0x9218137CL, 0L, 0x680494BAL, 0x680494BAL}, {0x9218137CL, 0L, 0x680494BAL, 0x680494BAL}};
                unsigned short *l_115[5];
                unsigned short **l_114 = &l_115[2];
                unsigned short ***l_113[2][10];
                struct S0 **l_118 = (void*)0;
                struct S0 *l_120 = &g_79;
                struct S0 **l_119 = &l_120;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_115[i] = (void*)0;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_113[i][j] = &l_114;
                }
                if ((0UL < (((*l_92) && (l_97 = ((&g_89 == (void*)0) < (p_30 != (*l_91))))) && ((safe_lshift_func_int16_t_s_u(p_28, (((safe_rshift_func_int8_t_s_s(p_27, l_95[0].f5)) > p_28) ^ p_27))) ^ (-1L)))))
                {
                    for (g_96.f5 = 0; (g_96.f5 >= (-4)); --g_96.f5)
                    {
                        return g_79;
                    }
                }
                else
                {
                    int *l_104[8] = {&l_95[0].f2, &l_95[0].f2, (void*)0, &l_95[0].f2, &l_95[0].f2, (void*)0, &l_95[0].f2, &l_95[0].f2};
                    unsigned short *l_106[1][10][3] = {{{&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}, {&g_74, &g_74, &g_74}}};
                    int l_111 = 0x70DB40B9L;
                    int i, j, k;
                    (*p_29) = g_79.f2;
                    (*l_91) = func_38((l_108 = (l_107[2][3][0] = func_38(l_104[6], (g_74 = (0x6E398B15L & l_105[1][0])), l_104[5]))), (!((l_111 = (safe_add_func_int32_t_s_s((-9L), 0x11B2BD44L))) == ((void*)0 != l_112[0]))), &g_16[0][0][6]);

                    ;
                }
                g_116 = (void*)0;

                ;
                if (g_79.f8)
                    continue;
                (*l_119) = (void*)0;

                ;
            }
            else
            {
                struct S1 *l_121 = &l_95[0];
                struct S1 **l_122 = &l_121;
                (*l_122) = l_121;
            }
        }


    }

    ;
    g_79 = g_79;
    l_124 = l_124;
    return g_79;
}







static int * func_38(int * p_39, unsigned short p_40, int * p_41)
{
    return &g_33;


}







static int * func_42(struct S1 p_43, char p_44)
{
    int *l_86 = &g_16[0][0][4];
    return l_86;


}







static struct S1 func_45(int * p_46, short p_47, int * p_48, int * p_49)
{
    unsigned char l_52[10] = {9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL};
    int l_72 = (-10L);
    struct S1 l_84[3][1] = {{{0xC21D3621L,0UL,2L,0x35DC3474L,0xBD426427L,9L,0xCBL,0xEE1CE7A6L,0x02E1C81CL}}, {{0xC21D3621L,0UL,2L,0x35DC3474L,0xBD426427L,9L,0xCBL,0xEE1CE7A6L,0x02E1C81CL}}, {{0xC21D3621L,0UL,2L,0x35DC3474L,0xBD426427L,9L,0xCBL,0xEE1CE7A6L,0x02E1C81CL}}};
    int i, j;
    if ((((g_50 = g_16[0][0][3]) >= p_47) && 0x80L))
    {
        int l_51 = 0xA725BA0FL;
        int l_64 = (-6L);
        struct S0 l_77 = {-5L,0L,0x7414L,0L,0x67L,0x910A9399L,0xEF03L,0x836713F9L,0xC6D2ED0BL,1L};
        struct S0 *l_78[6] = {&l_77, &l_77, &l_77, &l_77, &l_77, &l_77};
        int i;
        if (((((void*)0 != &g_16[4][2][5]) > (((l_51 || l_52[6]) != (0xDBL || p_47)) || (((safe_unary_minus_func_int8_t_s((0xF0L ^ (safe_unary_minus_func_uint8_t_u(((g_7 < (safe_lshift_func_int16_t_s_u(g_50, g_57))) < l_51)))))) <= (-1L)) & g_50))) && g_33))
        {
            short l_65 = (-9L);
            unsigned short *l_73[7] = {&g_74, &g_74, &g_74, &g_74, &g_74, &g_74, &g_74};
            int l_75 = 1L;
            int *l_76 = &l_72;
            int i;
            (*l_76) = (safe_mod_func_uint8_t_u_u((((*p_46) = ((safe_add_func_int16_t_s_s((l_52[2] == ((((l_64 = 0UL) < l_65) != ((l_75 = (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_16[0][1][0], (l_52[6] <= 1L))) != (1UL > (safe_add_func_uint16_t_u_u(l_51, l_72)))), p_47))) <= 0UL)) & l_72)), p_47)) > 0x12L)) | g_16[2][1][4]), p_47));
        }
        else
        {
            (*p_46) = (l_72 < l_51);
        }
        g_79 = l_77;
    }
    else
    {
        for (g_33 = 14; (g_33 < 7); --g_33)
        {
            struct S1 l_82 = {0x3EDC7201L,0x7A66DA98L,-4L,4294967295UL,0L,0x085D5259L,-7L,0xB8142826L,0xC4865E95L};
            return l_82;
        }
lbl_83:
        (*p_46) = (g_79.f0 = (*p_46));
    }
    if (p_47)
        goto lbl_83;
    return l_84[1][0];
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
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_16[i][j][k], "g_16[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5, "g_79.f5", print_hash_value);
    transparent_crc(g_79.f6, "g_79.f6", print_hash_value);
    transparent_crc(g_79.f7, "g_79.f7", print_hash_value);
    transparent_crc(g_79.f8, "g_79.f8", print_hash_value);
    transparent_crc(g_79.f9, "g_79.f9", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_96.f4, "g_96.f4", print_hash_value);
    transparent_crc(g_96.f5, "g_96.f5", print_hash_value);
    transparent_crc(g_96.f6, "g_96.f6", print_hash_value);
    transparent_crc(g_96.f7, "g_96.f7", print_hash_value);
    transparent_crc(g_96.f8, "g_96.f8", print_hash_value);
    transparent_crc(g_234.f0, "g_234.f0", print_hash_value);
    transparent_crc(g_234.f1, "g_234.f1", print_hash_value);
    transparent_crc(g_234.f2, "g_234.f2", print_hash_value);
    transparent_crc(g_234.f3, "g_234.f3", print_hash_value);
    transparent_crc(g_234.f4, "g_234.f4", print_hash_value);
    transparent_crc(g_234.f5, "g_234.f5", print_hash_value);
    transparent_crc(g_234.f6, "g_234.f6", print_hash_value);
    transparent_crc(g_234.f7, "g_234.f7", print_hash_value);
    transparent_crc(g_234.f8, "g_234.f8", print_hash_value);
    transparent_crc(g_234.f9, "g_234.f9", print_hash_value);
    transparent_crc(g_381.f0, "g_381.f0", print_hash_value);
    transparent_crc(g_381.f1, "g_381.f1", print_hash_value);
    transparent_crc(g_381.f2, "g_381.f2", print_hash_value);
    transparent_crc(g_381.f3, "g_381.f3", print_hash_value);
    transparent_crc(g_381.f4, "g_381.f4", print_hash_value);
    transparent_crc(g_381.f5, "g_381.f5", print_hash_value);
    transparent_crc(g_381.f6, "g_381.f6", print_hash_value);
    transparent_crc(g_381.f7, "g_381.f7", print_hash_value);
    transparent_crc(g_381.f8, "g_381.f8", print_hash_value);
    transparent_crc(g_381.f9, "g_381.f9", print_hash_value);
    transparent_crc(g_388.f0, "g_388.f0", print_hash_value);
    transparent_crc(g_388.f1, "g_388.f1", print_hash_value);
    transparent_crc(g_388.f2, "g_388.f2", print_hash_value);
    transparent_crc(g_388.f3, "g_388.f3", print_hash_value);
    transparent_crc(g_388.f4, "g_388.f4", print_hash_value);
    transparent_crc(g_388.f5, "g_388.f5", print_hash_value);
    transparent_crc(g_388.f6, "g_388.f6", print_hash_value);
    transparent_crc(g_388.f7, "g_388.f7", print_hash_value);
    transparent_crc(g_388.f8, "g_388.f8", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_465[i], "g_465[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_545, "g_545", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
