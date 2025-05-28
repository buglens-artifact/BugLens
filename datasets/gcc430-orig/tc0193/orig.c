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
   unsigned f0 : 14;
};

struct S1 {
   char f0;
};


static char g_6 = (-2L);
static int g_14 = (-8L);
static int *g_13 = &g_14;
static unsigned g_46 = 0xED0BD2F2L;
static unsigned char g_96 = 0x9FL;
static unsigned g_107 = 0xD9F019D5L;
static int g_111 = 0L;
static int *g_110 = &g_111;
static unsigned char g_114 = 1UL;
static short g_126 = 0x7221L;
static short g_128 = 0xCFCEL;
static int g_135 = 0x5642E063L;
static int **g_165 = &g_110;
static unsigned char g_223 = 0xEDL;
static short g_243 = 1L;
static unsigned short g_248 = 65526UL;
static unsigned g_250 = 4UL;
static unsigned g_318 = 0x81B1BC71L;
static char *g_321 = (void*)0;
static short *g_343 = &g_126;
static int g_364 = 0L;
static unsigned char g_366 = 7UL;
static unsigned short *g_381 = &g_248;
static unsigned g_392 = 4294967288UL;
static struct S1 g_394 = {-6L};
static struct S1 *g_393 = &g_394;
static int g_399 = 0x96E2DC38L;
static unsigned short g_505 = 65535UL;
static unsigned g_514 = 0UL;
static unsigned char *g_535 = &g_114;
static struct S0 g_575 = {118};
static struct S0 *g_574 = &g_575;
static struct S0 **g_573 = &g_574;
static int g_585 = 0xDDD12492L;
static int *g_584 = &g_585;
static int g_679 = 0x48D24F35L;
static char g_701 = 1L;
static unsigned short g_727 = 0xAC78L;
static unsigned g_733 = 0x5E040CA6L;
static int g_858 = 0L;
static unsigned g_875 = 0xE2860F0DL;
static char g_970 = 9L;
static int g_989 = 0x52486B05L;
static char g_992 = 0L;
static int g_1003 = 0xA4B8121AL;
static int g_1027 = 1L;
static char g_1033 = 7L;
static unsigned char g_1066 = 0xF6L;
static char g_1176 = 0xF4L;
static int g_1183 = (-6L);
static char g_1193 = 0x39L;
static int g_1242 = 0L;
static unsigned short g_1254 = 0xA38EL;
static unsigned short g_1434 = 0xEB4BL;
static short g_1626 = 0x43E1L;
static short g_1648 = 0x5903L;
static char g_1655 = 0x82L;
static short g_1658 = 0x7307L;
static short *g_1683 = &g_243;
static unsigned short g_1758 = 4UL;
static struct S0 g_1839 = {111};
static unsigned short g_1855 = 0x7B63L;
static unsigned ****g_1861 = (void*)0;
static unsigned *g_1894 = &g_514;
static unsigned **g_1893 = &g_1894;
static unsigned g_1922 = 0x04D5FAC6L;
static int g_2017 = 0xE2819E41L;
static unsigned g_2025 = 0x56AFB557L;
static int g_2042 = 0L;
static struct S1 **g_2044 = &g_393;
static struct S1 ***g_2043 = &g_2044;
static int ***g_2065 = &g_165;
static unsigned char g_2081 = 255UL;
static int g_2348 = (-1L);
static int g_2351 = 0x571ED123L;
static unsigned char g_2353 = 8UL;



static char func_1(void);
static int func_4(int p_5);
static int * func_7(int * p_8, short p_9, short p_10);
static int * func_11(int * p_12);
static int * func_15(int * p_16);
static int * func_17(char p_18, char p_19, int * p_20);
static int * func_21(int p_22, unsigned short p_23);
static char func_24(int * p_25, int * p_26, int * p_27, unsigned p_28);
static int * func_29(unsigned short p_30);
static short func_35(int * p_36, unsigned p_37);
static char func_1(void)
{
    int *l_1854 = (void*)0;
    struct S1 **l_1874 = (void*)0;
    struct S1 ***l_1873 = &l_1874;
    short l_1886 = (-1L);
    unsigned *l_1901 = (void*)0;
    unsigned **l_1900 = &l_1901;
    unsigned ***l_1928 = &g_1893;
    int l_1929 = 0x10AC5F96L;
    int l_1973 = (-6L);
    int l_1985 = (-1L);
    int l_1997 = 0x2DED9890L;
    int l_2012 = (-1L);
    int *l_2036 = &g_1183;
    unsigned char l_2041 = 0x86L;
    unsigned char l_2062 = 1UL;
    int l_2356 = (-7L);
    unsigned char **l_2367 = &g_535;
    unsigned short *l_2368 = &g_727;
    int *l_2377 = &g_1242;
    unsigned l_2378 = 18446744073709551615UL;
    int *l_2379 = (void*)0;
    int *l_2380 = &g_858;
    if (((-10L) || 0xC4B4E126L))
    {
        int *l_1844 = &g_1183;
        unsigned l_1889 = 0xFB97681FL;
        unsigned **l_1895 = &g_1894;
        unsigned ***l_1915 = (void*)0;
        unsigned ****l_1914 = &l_1915;
        char l_1931 = 6L;
        int l_1939 = 2L;
        int l_1984 = 0L;
        int **l_2037 = &l_1854;
        unsigned short *l_2038 = &g_1758;
        if ((safe_mod_func_uint32_t_u_u(0xDB8FAAAEL, func_4(g_6))))
        {
            (*g_165) = l_1844;
        }
        else
        {
            int *l_1848 = &g_1242;
            char l_1860 = 0x94L;
            unsigned **l_1865 = (void*)0;
            unsigned ***l_1864 = &l_1865;
            unsigned ****l_1863 = &l_1864;
            int l_1888 = 0L;
            unsigned l_1917 = 3UL;
            unsigned short l_2031 = 7UL;
            for (g_1176 = 0; (g_1176 > (-3)); g_1176 = safe_sub_func_int32_t_s_s(g_1176, 5))
            {
                int *l_1847 = &g_135;
                if (((*l_1844) = (*g_584)))
                {
                    (*g_165) = l_1847;
                    return (*l_1844);
                }
                else
                {
                    short l_1851 = 2L;
                    unsigned *****l_1862 = &g_1861;
                    int l_1870 = 0xB54C99A1L;
                    if ((func_35(l_1848, g_128) || ((*g_535) = (safe_lshift_func_uint16_t_u_s(l_1851, 5)))))
                    {
                        (*l_1847) = (safe_sub_func_uint16_t_u_u(g_46, (*l_1847)));
                        (*g_165) = l_1854;
                        g_1855--;
                        (*g_584) &= 7L;
                    }
                    else
                    {
                        return g_248;
                    }
                    l_1870 &= (((safe_mod_func_uint32_t_u_u(g_875, ((*l_1844) |= ((*g_584) = (((l_1860 && 0x9BD1L) < (((*l_1862) = g_1861) != l_1863)) == 0xE9L))))) || (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u(func_35(((*g_165) = l_1848), g_114), 0x05L)) && (*l_1844)) ^ (*l_1848)), (*l_1848)))) != (*l_1848));
                    if (l_1870)
                        continue;
                }
            }
            if ((safe_rshift_func_int16_t_s_s((((((*g_535) != ((l_1873 != &l_1874) && g_1658)) != (*l_1844)) >= (*g_584)) | (safe_lshift_func_uint8_t_u_u(((((*l_1848) != (*l_1848)) < 0xE18C40CCL) != g_1193), 5))), (*l_1844))))
            {
                short l_1879 = 0xB072L;
                int *l_1887 = &g_111;
                (*l_1887) = (safe_add_func_uint32_t_u_u((~((l_1879 & (((safe_rshift_func_uint16_t_u_u(func_35(l_1887, (*l_1848)), g_1242)) > (-3L)) & 0xA569L)) == g_1066)), l_1888));
                return l_1889;
            }
            else
            {
                unsigned char l_1892 = 0x15L;
                for (g_248 = 22; (g_248 != 51); g_248++)
                {
                    (*g_165) = l_1844;
                    (*g_574) = (**g_573);
                    if (l_1892)
                        break;
                }
                (*g_584) &= l_1886;
                (*l_1844) = 1L;
                (*g_584) &= ((*l_1844) = (g_1893 != l_1895));
            }
            for (g_701 = (-10); (g_701 <= (-2)); g_701 = safe_add_func_uint8_t_u_u(g_701, 7))
            {
                unsigned l_1906 = 0x90033C97L;
                unsigned l_1909 = 0x8F42BFD5L;
                int l_1925 = (-1L);
                int l_1957 = 0x60FB0DCEL;
                int l_1964 = (-1L);
                if ((*l_1844))
                    break;
            }
        }
        if ((safe_add_func_uint8_t_u_u((((*l_1844) = (safe_rshift_func_uint16_t_u_s(((*l_2038) = g_392), (*g_343)))) >= ((safe_lshift_func_int8_t_s_s(g_126, 4)) < (-4L))), g_128)))
        {
            (*l_1844) &= l_2041;
        }
        else
        {
            return g_2042;
        }
    }
    else
    {
        unsigned l_2051 = 0x1A41A1FBL;
        struct S0 *l_2052 = &g_1839;
        unsigned l_2078 = 0x110A0351L;
        int l_2085 = 0xDCE293CCL;
        int l_2180 = 4L;
        int l_2333 = (-10L);
        int **l_2358 = &l_1854;
        (*g_393) = (*g_393);
        if (((void*)0 == g_2043))
        {
            int l_2048 = 0xF61EC496L;
            for (g_1183 = 0; (g_1183 <= (-1)); g_1183 = safe_sub_func_int32_t_s_s(g_1183, 9))
            {
                int l_2047 = 0L;
                (*g_13) |= l_2047;
            }
            (*g_13) |= l_2048;
            l_2051 &= (safe_add_func_uint8_t_u_u((*l_2036), (((*g_110) = l_2048) != 0L)));
            (*g_165) = (*g_165);
        }
        else
        {
            unsigned l_2053 = 0x9ABE8670L;
            int l_2084 = 0L;
            unsigned l_2105 = 0x3D24368FL;
            int l_2148 = 0x88A528B5L;
            unsigned l_2204 = 0UL;
            unsigned char l_2209 = 0xFEL;
            int l_2349 = 0x75FB3C30L;
            (*g_165) = (void*)0;
            (*g_573) = l_2052;
            if (((*l_2036) = ((*g_13) = l_2051)))
            {
                unsigned short *l_2060 = &g_727;
                int l_2061 = 7L;
                int ***l_2066 = &g_165;
                int ****l_2067 = &l_2066;
                unsigned *l_2098 = &g_318;
                unsigned l_2106 = 0x86541AEAL;
                int *l_2111 = &g_1242;
                int *l_2112 = &l_1997;
                int *l_2113 = &l_1997;
                int *l_2114 = &g_1027;
                int *l_2115 = &l_2084;
                int *l_2116 = &l_1985;
                int *l_2117 = &l_2084;
                int *l_2118 = &g_1183;
                int *l_2119 = &g_585;
                int *l_2120 = &g_585;
                int *l_2121 = &g_2042;
                int *l_2122 = &l_1985;
                int *l_2123 = &g_399;
                int *l_2124 = &g_111;
                int *l_2125 = (void*)0;
                int *l_2126 = &g_399;
                int *l_2127 = &g_1183;
                int *l_2128 = (void*)0;
                int *l_2129 = &l_1929;
                int *l_2130 = &g_1027;
                int *l_2131 = &g_111;
                int *l_2132 = &l_1929;
                int *l_2133 = &l_1929;
                int *l_2134 = &l_1973;
                int *l_2135 = &l_1985;
                int *l_2136 = &l_1985;
                int *l_2137 = &g_111;
                int *l_2138 = (void*)0;
                int *l_2139 = (void*)0;
                int *l_2140 = &l_1929;
                int *l_2141 = (void*)0;
                int *l_2142 = &g_399;
                int *l_2143 = &l_1985;
                int *l_2144 = &l_1997;
                int *l_2145 = &l_1929;
                int *l_2146 = &l_1997;
                int *l_2147 = &l_1929;
                int *l_2149 = &l_2061;
                int *l_2150 = &l_1985;
                int *l_2151 = &g_585;
                int *l_2152 = &g_135;
                int *l_2153 = &l_1985;
                int *l_2154 = (void*)0;
                int *l_2155 = &g_14;
                int *l_2156 = &l_1973;
                int *l_2157 = &l_1929;
                int *l_2158 = &g_135;
                int *l_2159 = &l_2084;
                int *l_2160 = &g_399;
                int *l_2161 = &g_399;
                int *l_2162 = (void*)0;
                int *l_2163 = &l_1973;
                int *l_2164 = (void*)0;
                int *l_2165 = &l_2061;
                int *l_2166 = &g_2042;
                int *l_2167 = &l_1973;
                int *l_2168 = (void*)0;
                int *l_2169 = (void*)0;
                int *l_2170 = &g_1183;
                int *l_2171 = &g_14;
                int *l_2172 = &g_14;
                int l_2173 = 1L;
                int *l_2174 = &g_135;
                int *l_2175 = &g_585;
                int *l_2176 = &g_1242;
                int *l_2177 = (void*)0;
                int *l_2178 = &l_2061;
                int *l_2179 = &l_2173;
                int *l_2181 = &l_2061;
                int *l_2182 = (void*)0;
                int *l_2183 = &l_2180;
                int *l_2184 = &l_1929;
                int *l_2185 = (void*)0;
                int *l_2186 = &g_399;
                int *l_2187 = &l_1985;
                int *l_2188 = &l_2173;
                int *l_2189 = &g_14;
                int *l_2190 = (void*)0;
                int *l_2191 = &l_2061;
                int *l_2192 = &g_585;
                int *l_2193 = &l_2173;
                int *l_2194 = &l_2173;
                int *l_2195 = &l_1929;
                int *l_2196 = &g_111;
                int *l_2197 = &g_135;
                int *l_2198 = (void*)0;
                int *l_2199 = &g_111;
                int *l_2200 = (void*)0;
                int *l_2201 = (void*)0;
                int *l_2202 = &g_585;
                int *l_2203 = &l_2148;
                l_2062 ^= ((*g_584) = (l_2053 && ((safe_sub_func_int32_t_s_s(0x895A742DL, (((*g_381)++) && (safe_mod_func_uint16_t_u_u(((*l_2060) &= (*g_381)), 65528UL))))) < (!(l_2061 ^ ((g_1254 > ((*l_2036) = ((*g_13) ^= (*l_2036)))) <= g_1839.f0))))));
                if (((safe_sub_func_uint8_t_u_u(1UL, ((g_2065 = &g_165) == ((*l_2067) = l_2066)))) < (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_2060 != (void*)0), 3)), (*g_343)))))
                {
                    int l_2074 = (-2L);
                    unsigned char *l_2077 = (void*)0;
                    (*g_584) = (((l_2051 <= ((*g_1683) = ((l_2074 | ((l_2074 == (safe_rshift_func_int16_t_s_u((((*g_1683) || ((void*)0 != l_2077)) | func_24((*g_165), (**g_2065), &l_1985, l_2078)), (*g_381)))) >= 0L)) || 0xDD750F79L))) && g_1758) > 4294967295UL);
                    for (g_1758 = 0; (g_1758 < 10); ++g_1758)
                    {
                        g_2081 = l_2074;
                    }
                }
                else
                {
                    int *l_2095 = &g_1027;
                    for (l_2062 = 0; (l_2062 > 17); l_2062 = safe_add_func_int16_t_s_s(l_2062, 2))
                    {
                        int *l_2086 = (void*)0;
                        int *l_2087 = (void*)0;
                        int *l_2088 = &l_1973;
                        int *l_2089 = &g_111;
                        int *l_2090 = (void*)0;
                        unsigned l_2091 = 4294967295UL;
                        int l_2094 = 3L;
                        l_2091--;
                        (*g_584) = l_2094;
                        (**g_2065) = &l_2084;
                        (*g_165) = l_2095;
                    }
                    for (g_1434 = 0; (g_1434 != 40); g_1434 = safe_add_func_uint16_t_u_u(g_1434, 5))
                    {
                        int **l_2107 = &l_2036;
                    }
                    for (g_875 = (-26); (g_875 == 25); g_875++)
                    {
                        unsigned short l_2110 = 0xFCCDL;
                        if (l_2110)
                            break;
                    }
                }
                l_2204++;
            }
            else
            {
                int *l_2210 = (void*)0;
                unsigned l_2213 = 5UL;
                unsigned l_2239 = 3UL;
                unsigned l_2357 = 0x96B19A27L;
                if (((func_24((*g_165), func_7(func_7((**g_2065), (safe_lshift_func_uint16_t_u_u(1UL, ((*g_381) = (l_2204 ^ l_2209)))), ((!func_24(l_2210, func_29(((*g_343) < ((*g_1683) = (safe_rshift_func_uint8_t_u_u(func_24((**g_2065), &l_2148, l_2210, l_2051), l_2105))))), (*g_165), l_2204)) && 1UL)), l_2084, l_2105), (**g_2065), (**g_1893)) >= l_2213) < l_2078))
                {
                    char l_2214 = 0x79L;
                    int *l_2215 = &l_1973;
                    int *l_2216 = &g_111;
                    int *l_2217 = &g_111;
                    int *l_2218 = (void*)0;
                    int *l_2219 = &l_1929;
                    int *l_2220 = &l_2180;
                    int *l_2221 = &l_2148;
                    int *l_2222 = &g_14;
                    int *l_2223 = (void*)0;
                    int *l_2224 = &l_1973;
                    int *l_2225 = &l_1929;
                    int *l_2226 = &g_2042;
                    int *l_2227 = &l_2180;
                    int *l_2228 = &l_1985;
                    int *l_2229 = &l_1997;
                    int *l_2230 = &l_1985;
                    int *l_2231 = &l_1929;
                    int *l_2232 = (void*)0;
                    int *l_2233 = (void*)0;
                    int *l_2234 = (void*)0;
                    int *l_2235 = &g_1183;
                    int *l_2236 = &l_1997;
                    int *l_2237 = &g_1027;
                    int *l_2238 = &l_2148;
                    (*l_2036) = (*g_584);
                    --l_2239;
                }
                else
                {
                    int l_2242 = 2L;
                    int *l_2243 = &g_111;
                    int *l_2244 = &g_1242;
                    int *l_2245 = &l_1973;
                    int *l_2246 = &l_1997;
                    int *l_2247 = (void*)0;
                    int *l_2248 = &g_1242;
                    int *l_2249 = &g_585;
                    int *l_2250 = &l_2180;
                    int *l_2251 = &l_2242;
                    int *l_2252 = &g_399;
                    int *l_2253 = &l_2085;
                    int *l_2254 = (void*)0;
                    int *l_2255 = &g_585;
                    int *l_2256 = (void*)0;
                    int *l_2257 = &l_1973;
                    int *l_2258 = &g_111;
                    int *l_2259 = &l_1997;
                    int l_2260 = 0L;
                    int *l_2261 = (void*)0;
                    int *l_2262 = (void*)0;
                    int *l_2263 = (void*)0;
                    int *l_2264 = &l_2148;
                    int l_2265 = (-1L);
                    int *l_2266 = (void*)0;
                    int *l_2267 = &g_1242;
                    int *l_2268 = &g_111;
                    int *l_2269 = &l_2085;
                    int *l_2270 = &g_111;
                    int *l_2271 = (void*)0;
                    int *l_2272 = (void*)0;
                    int *l_2273 = &l_1997;
                    int *l_2274 = (void*)0;
                    int l_2275 = 0x97DE336DL;
                    int l_2276 = 9L;
                    int *l_2277 = &l_1929;
                    int *l_2278 = &g_585;
                    int *l_2279 = &g_399;
                    int *l_2280 = &l_2265;
                    char l_2281 = 0x00L;
                    int *l_2282 = &g_585;
                    int *l_2283 = &l_1997;
                    int *l_2284 = &l_2084;
                    int *l_2285 = &l_1929;
                    int *l_2286 = &g_1183;
                    int *l_2287 = &l_2260;
                    int *l_2288 = &l_1929;
                    int *l_2289 = &g_111;
                    int *l_2290 = (void*)0;
                    int *l_2291 = &g_585;
                    int *l_2292 = &g_1027;
                    int *l_2293 = &l_2242;
                    int *l_2294 = &l_2180;
                    int *l_2295 = &l_2085;
                    int *l_2296 = &l_2148;
                    int *l_2297 = &g_1242;
                    int *l_2298 = (void*)0;
                    int *l_2299 = &l_2275;
                    int *l_2300 = &l_2180;
                    int *l_2301 = &l_1929;
                    int *l_2302 = &l_2148;
                    int *l_2303 = &l_1985;
                    int *l_2304 = &l_1929;
                    int *l_2305 = &l_2085;
                    int *l_2306 = &l_2265;
                    int *l_2307 = &g_1027;
                    int *l_2308 = &g_14;
                    int *l_2309 = &l_2148;
                    int *l_2310 = (void*)0;
                    int l_2311 = (-10L);
                    int *l_2312 = &g_399;
                    int *l_2313 = &l_2265;
                    int *l_2314 = (void*)0;
                    int *l_2315 = &l_2276;
                    int *l_2316 = &g_2042;
                    int *l_2317 = (void*)0;
                    int *l_2318 = &g_14;
                    int *l_2319 = &g_1183;
                    int *l_2320 = &g_14;
                    int *l_2321 = (void*)0;
                    int *l_2322 = (void*)0;
                    int l_2323 = 0x60D53E7AL;
                    int *l_2324 = &l_1973;
                    int *l_2325 = &g_1183;
                    int *l_2326 = &l_1997;
                    int *l_2327 = &l_2242;
                    int *l_2328 = &l_1929;
                    int *l_2329 = (void*)0;
                    int *l_2330 = &l_1997;
                    int *l_2331 = &l_1985;
                    int *l_2332 = &l_1985;
                    int *l_2334 = &g_135;
                    int *l_2335 = &l_2148;
                    int *l_2336 = (void*)0;
                    int *l_2337 = (void*)0;
                    int *l_2338 = &l_2260;
                    int *l_2339 = &l_2333;
                    int *l_2340 = &g_135;
                    int *l_2341 = (void*)0;
                    int *l_2342 = (void*)0;
                    int *l_2343 = &l_2275;
                    int *l_2344 = &l_1929;
                    int *l_2345 = &l_2180;
                    int *l_2346 = &l_2311;
                    int *l_2347 = (void*)0;
                    int *l_2350 = &g_1027;
                    int *l_2352 = (void*)0;
                    g_2353--;
                }
                (*g_13) = l_2356;
                return l_2357;
            }
            (**g_2065) = &l_1985;
        }
        (*l_2358) = func_21(((*l_2036) == (*l_2036)), l_2180);
    }
    (*l_2377) &= (*l_2036);
    return (*l_2377);
}







static int func_4(int p_5)
{
    short l_1290 = 0x1D96L;
    int *l_1843 = &g_14;
    l_1843 = func_7(func_11(g_13), g_1193, l_1290);
    return p_5;
}







static int * func_7(int * p_8, short p_9, short p_10)
{
    unsigned l_1293 = 7UL;
    int l_1296 = 0x7A7CA171L;
    char *l_1297 = (void*)0;
    int *l_1300 = &g_1027;
    unsigned **l_1311 = (void*)0;
    int l_1314 = 6L;
    int l_1317 = 0xE442D31DL;
    int l_1320 = 5L;
    int l_1353 = (-7L);
    int l_1358 = 0x9D7E9ABDL;
    int l_1400 = 0x9C3E4026L;
    int l_1416 = 0x7B534878L;
    unsigned l_1690 = 1UL;
    struct S0 l_1836 = {104};
    int *l_1842 = &g_135;
    (*l_1300) ^= ((safe_sub_func_int8_t_s_s(l_1293, (g_992 |= (safe_lshift_func_int8_t_s_s(func_35(p_8, (g_46 = g_733)), l_1296))))) & (safe_rshift_func_int8_t_s_s((p_10 == 4L), 0)));
    for (g_318 = 9; (g_318 <= 32); g_318 = safe_add_func_uint16_t_u_u(g_318, 6))
    {
        short l_1305 = 0xA0D4L;
        int *l_1306 = &g_1242;
        unsigned l_1307 = 0x97E09F89L;
        int l_1346 = 0x2A47669FL;
        char **l_1439 = &l_1297;
        int l_1470 = 0x42373CDFL;
        int l_1506 = 0x3FD44F99L;
        int l_1508 = 3L;
        int l_1519 = 0L;
        int l_1559 = 0xB2FA3450L;
        int l_1607 = 0L;
        int l_1623 = 1L;
        int l_1627 = (-9L);
        int l_1651 = 0x13926D4DL;
        struct S1 l_1681 = {0xF5L};
        unsigned char l_1834 = 0x8EL;
        (*g_584) |= (((+(func_35(&g_585, g_223) ^ ((*l_1300) |= l_1305))) && ((*l_1300) || (l_1307 & p_10))) > p_10);
        for (g_223 = 0; (g_223 > 40); g_223++)
        {
            unsigned l_1310 = 1UL;
            unsigned ***l_1312 = &l_1311;
            int l_1330 = 0x51D20206L;
            int l_1367 = 0x781D955CL;
            int l_1381 = 2L;
            int l_1413 = 0L;
            int l_1428 = 0x43081936L;
            unsigned char l_1667 = 0x3DL;
            int l_1740 = 0x3F245DEFL;
            int l_1746 = 0x5C98CB16L;
            int l_1748 = (-7L);
            unsigned l_1819 = 0xF69DF379L;
            (*l_1300) ^= l_1310;
            if ((*l_1306))
                continue;
        }
    }
    (*l_1300) ^= (safe_mul_func_int8_t_s_s(g_111, (*g_535)));
    p_8 = &l_1314;
    return l_1842;
}







static int * func_11(int * p_12)
{
    int l_112 = 2L;
    int *l_583 = (void*)0;
    int l_632 = (-9L);
    int l_730 = 0x53C73B86L;
    int l_731 = 0xE47515C2L;
    short l_765 = 7L;
    struct S0 l_880 = {100};
    int l_973 = (-1L);
    int l_1035 = 0x30765A50L;
    int l_1055 = 0xDA9596CEL;
    int *l_1070 = &l_730;
    char *l_1083 = &g_6;
    int l_1133 = (-9L);
    int l_1166 = 0x8B90A3C6L;
    int l_1169 = 0L;
    int l_1171 = (-1L);
    int l_1173 = 0xF3BE7702L;
    int l_1177 = 9L;
    int l_1179 = 0x9131F3B2L;
    int l_1206 = (-3L);
    int l_1240 = 0x78DE21F2L;
    int *l_1259 = &g_399;
    struct S1 **l_1287 = &g_393;
    struct S1 ***l_1286 = &l_1287;
    if ((*g_13))
    {
        unsigned *l_106 = &g_107;
        unsigned char *l_113 = &g_114;
        int l_402 = 0x492FC4D6L;
        int **l_577 = &g_13;
        int **l_578 = &g_13;
        int **l_579 = &g_110;
        int **l_580 = &g_110;
        int **l_581 = &g_110;
        int **l_582 = &g_110;
        int l_697 = (-1L);
        int l_718 = 1L;
        if (((l_583 = func_15(func_17(((p_12 = func_21((((func_24(&g_14, p_12, func_29(g_14), ((*l_106) &= g_6)) & ((4UL & (0xBFL != ((*l_113) = (safe_sub_func_int32_t_s_s(func_35(g_110, l_112), (*g_110)))))) <= g_6)) == 65534UL) ^ g_111), l_112)) != l_106), l_402, &l_402))) != g_584))
        {
            int l_586 = (-1L);
            unsigned short *l_589 = &g_248;
            int l_590 = 0xF7D3A1E4L;
            l_590 = ((l_586 && l_586) | (safe_sub_func_int8_t_s_s((!(((*l_589) ^= g_364) >= (&g_573 != &g_573))), g_46)));
        }
        else
        {
            unsigned l_591 = 5UL;
            char *l_592 = &g_6;
            char **l_593 = &l_592;
            char **l_594 = (void*)0;
            char **l_595 = &g_321;
            int ***l_617 = &l_577;
            int l_709 = (-1L);
            int l_716 = 0x2B9D9594L;
            int l_720 = (-5L);
            struct S1 l_743 = {0L};
            unsigned l_764 = 0x6CECA46EL;
            (*l_583) = (l_591 = (-5L));
            if ((((*l_595) = ((*l_593) = l_592)) != l_113))
            {
                unsigned short *l_604 = &g_248;
                int l_605 = 0x16E36453L;
                int l_667 = 0x92F31237L;
                int l_669 = (-1L);
                int l_675 = 0xFC969621L;
                int l_710 = 0x972D0B17L;
                unsigned l_742 = 0x6385F0BAL;
                (*g_584) = (safe_add_func_int8_t_s_s((((*g_343) >= (*g_343)) & (((*g_535) = (safe_rshift_func_int8_t_s_u(((*l_583) < ((safe_lshift_func_uint16_t_u_u((+func_35(p_12, g_111)), ((((*l_604) = ((*g_343) && g_46)) != (*g_343)) > (*g_535)))) != l_591)), (*g_535)))) != l_591)), 0x8AL));
                if ((((((l_605 > (~((safe_rshift_func_uint8_t_u_u((((*l_583) = (safe_sub_func_uint16_t_u_u(l_591, 0UL))) || (safe_mul_func_int16_t_s_s((g_505 ^ ((safe_lshift_func_int16_t_s_s((*g_343), 14)) == l_591)), 65535UL))), l_591)) >= 0xBAF4A80BL))) < (*g_584)) && (*g_321)) >= (-3L)) == 0x3EL))
                {
                    unsigned short l_615 = 0xB098L;
                    (*l_583) = ((*l_583) > (safe_unary_minus_func_int8_t_s(l_605)));
                    if ((l_615 >= g_111))
                    {
                        int ***l_616 = &g_165;
                        (*l_582) = (void*)0;
                        (*l_580) = func_17(((l_616 == l_617) == (*g_343)), (*g_321), p_12);
                        (**l_582) &= l_615;
                    }
                    else
                    {
                        (**g_573) = (**g_573);
                        (*l_582) = ((**l_617) = &l_605);
                    }
                    for (g_107 = 0; (g_107 != 4); g_107 = safe_add_func_uint32_t_u_u(g_107, 4))
                    {
                        struct S1 **l_620 = &g_393;
                        (*l_620) = &g_394;
                        (*g_165) = &g_135;
                    }
                }
                else
                {
                    unsigned short l_639 = 0UL;
                    int l_732 = 0L;
                    struct S1 *l_744 = (void*)0;
                    struct S1 *l_745 = (void*)0;
                    struct S1 *l_746 = &l_743;
                    for (g_46 = 0; (g_46 == 32); g_46++)
                    {
                        return p_12;
                    }
                    for (g_46 = (-23); (g_46 >= 57); ++g_46)
                    {
                        int *l_625 = &l_402;
                        int *l_626 = &g_399;
                        int *l_627 = &g_399;
                        int *l_628 = &g_585;
                        int *l_629 = &g_14;
                        int *l_630 = (void*)0;
                        int *l_631 = &g_135;
                        int *l_633 = &l_632;
                        int *l_634 = &g_399;
                        int *l_635 = &g_585;
                        int *l_636 = (void*)0;
                        int *l_637 = &g_399;
                        int *l_638 = &g_14;
                        int *l_642 = &g_111;
                        int *l_643 = &g_585;
                        int *l_644 = &g_135;
                        int *l_645 = (void*)0;
                        int *l_646 = &g_585;
                        int *l_647 = (void*)0;
                        int *l_648 = (void*)0;
                        int l_649 = (-3L);
                        int *l_650 = (void*)0;
                        int *l_651 = &g_135;
                        int *l_652 = &g_399;
                        int *l_653 = &l_402;
                        int *l_654 = &l_632;
                        int *l_655 = &l_632;
                        int *l_656 = &l_402;
                        int *l_657 = &l_605;
                        int *l_658 = &g_14;
                        int *l_659 = &g_399;
                        int *l_660 = &l_605;
                        int *l_661 = &g_585;
                        int *l_662 = &l_605;
                        int *l_663 = &g_399;
                        int *l_664 = &l_605;
                        int *l_665 = &l_605;
                        int *l_666 = &l_402;
                        int *l_668 = &g_399;
                        int *l_670 = &l_669;
                        int *l_671 = &g_135;
                        int *l_672 = &g_111;
                        int *l_673 = (void*)0;
                        int *l_674 = &l_667;
                        int *l_676 = &l_632;
                        int *l_677 = &l_632;
                        int *l_678 = &l_667;
                        int *l_680 = (void*)0;
                        int *l_681 = &g_135;
                        int *l_682 = (void*)0;
                        int *l_683 = &g_135;
                        int *l_684 = (void*)0;
                        int *l_685 = &l_402;
                        int *l_686 = &l_605;
                        int *l_687 = &g_14;
                        int *l_688 = &g_399;
                        int *l_689 = &l_667;
                        int *l_690 = &g_399;
                        int *l_691 = &l_667;
                        int *l_692 = &g_111;
                        int *l_693 = &g_14;
                        int *l_694 = &g_399;
                        int *l_695 = &g_111;
                        int *l_696 = (void*)0;
                        int *l_698 = &g_585;
                        int *l_699 = &l_402;
                        int *l_700 = &g_399;
                        int l_702 = 0x4ACD50D9L;
                        int *l_703 = &l_605;
                        int *l_704 = (void*)0;
                        int *l_705 = &g_111;
                        int *l_706 = &l_702;
                        int *l_707 = (void*)0;
                        int *l_708 = &l_697;
                        int *l_711 = (void*)0;
                        int *l_712 = &l_675;
                        int *l_713 = (void*)0;
                        int *l_714 = (void*)0;
                        int *l_715 = &l_667;
                        int *l_717 = &l_605;
                        int *l_719 = &g_135;
                        int *l_721 = &l_667;
                        int *l_722 = &l_710;
                        int *l_723 = &g_399;
                        int *l_724 = &l_716;
                        int *l_725 = &g_399;
                        int *l_726 = &l_649;
                        ++l_639;
                        g_727++;
                        ++g_733;
                    }
                    if ((~(safe_lshift_func_int16_t_s_u(l_709, (g_135 & func_35(&l_632, ((l_639 || (0xA066L && ((*g_343) = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(l_742, 1)), 12))))) > 4294967291UL)))))))
                    {
                        (*l_578) = p_12;
                    }
                    else
                    {
                        (*l_580) = ((*l_577) = p_12);
                    }
                    (*l_746) = ((*g_393) = l_743);
                }
                (*l_577) = func_15(&l_667);
                (**l_577) = (safe_mod_func_uint32_t_u_u(l_710, (*l_583)));
            }
            else
            {
                unsigned l_755 = 0xB96E4FF2L;
                g_14 &= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((*g_535), (safe_lshift_func_int16_t_s_s(0xF71DL, 7)))), l_755)) || ((*l_113) = (func_35(p_12, (((l_755 != (safe_rshift_func_int16_t_s_s(((*l_583) <= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((*g_584) = ((-4L) == 0L)) >= (safe_mod_func_uint16_t_u_u(((l_755 >= (*g_321)) != 0x43A8D199L), 65535UL))), l_764)), l_755))), 11))) == 1UL) & (*g_343))) ^ l_765)));
            }
            (*l_581) = &g_399;
        }
    }
    else
    {
        struct S1 **l_770 = &g_393;
        int l_847 = 0x528DA638L;
        int l_991 = 0x94EF5D28L;
        int l_1018 = 0L;
        int l_1025 = 0L;
        int l_1043 = 0x2B68E3A0L;
        struct S0 *l_1088 = &g_575;
        int *l_1090 = &l_991;
        int *l_1091 = (void*)0;
        int *l_1092 = &g_135;
        int *l_1093 = &l_632;
        int *l_1094 = &l_731;
        int *l_1095 = &g_111;
        int *l_1096 = &l_731;
        int *l_1097 = (void*)0;
        int *l_1098 = &l_973;
        int *l_1099 = &g_135;
        int *l_1100 = &g_1027;
        int *l_1101 = &g_399;
        int *l_1102 = &l_1043;
        int *l_1103 = &l_1055;
        int *l_1104 = &l_632;
        int *l_1105 = &g_14;
        int *l_1106 = &l_730;
        int *l_1107 = &g_399;
        int *l_1108 = &g_14;
        int *l_1109 = &l_1035;
        int *l_1110 = &l_731;
        int *l_1111 = &l_847;
        int *l_1112 = (void*)0;
        int *l_1113 = &l_730;
        int *l_1114 = &g_399;
        int *l_1115 = &l_1035;
        int *l_1116 = &l_1035;
        int *l_1117 = &l_1055;
        int *l_1118 = &l_1025;
        int *l_1119 = &l_973;
        int *l_1120 = &l_1018;
        int *l_1121 = &l_1043;
        int *l_1122 = (void*)0;
        int *l_1123 = &l_730;
        int *l_1124 = &g_135;
        int *l_1125 = (void*)0;
        int *l_1126 = &l_991;
        int *l_1127 = &l_1055;
        int *l_1128 = &l_1043;
        int *l_1129 = &g_111;
        int *l_1130 = (void*)0;
        int *l_1131 = &l_1043;
        int *l_1132 = &l_1035;
        int *l_1134 = &g_111;
        int *l_1135 = &l_991;
        int *l_1136 = &l_1043;
        int *l_1137 = &g_111;
        int *l_1138 = (void*)0;
        int *l_1139 = (void*)0;
        int *l_1140 = (void*)0;
        int *l_1141 = &l_1055;
        int *l_1142 = &l_1043;
        int *l_1143 = &g_585;
        int *l_1144 = (void*)0;
        int *l_1145 = &g_1027;
        int *l_1146 = &l_1055;
        int *l_1147 = &g_399;
        int *l_1148 = &g_135;
        int *l_1149 = &l_1025;
        int *l_1150 = &g_135;
        int *l_1151 = (void*)0;
        int *l_1152 = &l_632;
        int *l_1153 = (void*)0;
        int *l_1154 = &g_585;
        int *l_1155 = &l_1055;
        int *l_1156 = &l_1018;
        int *l_1157 = &l_1018;
        int *l_1158 = &g_14;
        int *l_1159 = &l_1055;
        int *l_1160 = (void*)0;
        int *l_1161 = &g_399;
        int *l_1162 = &l_1043;
        int *l_1163 = &l_973;
        int *l_1164 = &l_1043;
        int *l_1165 = &g_585;
        int *l_1167 = (void*)0;
        int *l_1168 = &g_135;
        int *l_1170 = &g_585;
        int *l_1172 = (void*)0;
        int *l_1174 = &l_730;
        int *l_1175 = (void*)0;
        int *l_1178 = &l_731;
        int *l_1180 = &l_1043;
        int *l_1181 = (void*)0;
        int *l_1182 = &l_730;
        int *l_1184 = &g_399;
        int *l_1185 = &l_1025;
        int *l_1186 = (void*)0;
        int *l_1187 = &l_1133;
        int *l_1188 = &l_1179;
        int *l_1189 = &l_731;
        int *l_1190 = &g_111;
        int *l_1191 = (void*)0;
        int l_1192 = 0x2F1C6FFEL;
        int *l_1194 = (void*)0;
        int *l_1195 = (void*)0;
        int *l_1196 = (void*)0;
        int l_1197 = 3L;
        int *l_1198 = &l_1035;
        int *l_1199 = &l_1166;
        int *l_1200 = &g_14;
        int *l_1201 = &l_991;
        int *l_1202 = &g_585;
        int *l_1203 = &l_1197;
        int *l_1204 = &l_632;
        int *l_1205 = &g_585;
        int *l_1207 = &l_1018;
        int *l_1208 = &l_1025;
        int *l_1209 = &g_1183;
        int *l_1210 = &g_135;
        int *l_1211 = (void*)0;
        int l_1212 = 0xCB0DBDDAL;
        int *l_1213 = &l_1169;
        int *l_1214 = (void*)0;
        int *l_1215 = (void*)0;
        int *l_1216 = (void*)0;
        int *l_1217 = &l_973;
        int l_1218 = 0x5620A8CEL;
        int *l_1219 = &g_585;
        int *l_1220 = &l_1018;
        int *l_1221 = (void*)0;
        int *l_1222 = &l_1171;
        int *l_1223 = &l_847;
        int *l_1224 = &l_1218;
        int l_1225 = 0x4C5A29ECL;
        int *l_1226 = &l_730;
        int *l_1227 = &l_1171;
        int *l_1228 = &g_585;
        int *l_1229 = &g_585;
        int *l_1230 = (void*)0;
        int *l_1231 = &l_1171;
        int l_1232 = 2L;
        int *l_1233 = &l_1166;
        int *l_1234 = &l_1212;
        int *l_1235 = (void*)0;
        int *l_1236 = &g_135;
        int l_1237 = 1L;
        int *l_1238 = &l_1171;
        int *l_1239 = &l_847;
        int *l_1241 = (void*)0;
        int *l_1243 = (void*)0;
        int *l_1244 = (void*)0;
        int *l_1245 = &l_1179;
        int *l_1246 = &g_399;
        int *l_1247 = &l_991;
        int *l_1248 = &l_730;
        int *l_1249 = &l_1133;
        int *l_1250 = &l_973;
        int *l_1251 = &l_1133;
        int *l_1252 = &l_1177;
        int *l_1253 = &l_1179;
        for (g_223 = 0; (g_223 != 10); g_223 = safe_add_func_int32_t_s_s(g_223, 5))
        {
            struct S1 **l_772 = &g_393;
            struct S1 ***l_771 = &l_772;
            int l_801 = (-5L);
            struct S0 ***l_890 = &g_573;
            int l_906 = 0xB80001A5L;
            int l_924 = 0x0AFF039BL;
            int l_953 = 0L;
            int l_956 = 0xF9675A4DL;
            int l_964 = 0x6B76D208L;
            int l_1047 = 9L;
            unsigned short l_1078 = 1UL;
            unsigned *l_1087 = &g_733;
            unsigned **l_1086 = &l_1087;
            unsigned ***l_1085 = &l_1086;
            unsigned ****l_1084 = &l_1085;
            unsigned short l_1089 = 1UL;
        }
        g_1254++;
        (*l_1217) = ((*g_381) && ((*g_381) |= 0xC866L));
        (*g_574) = (**g_573);
    }
    (*g_584) ^= (safe_add_func_uint8_t_u_u((*l_1070), g_1242));
    if ((*l_1259))
    {
        int *l_1274 = &l_1166;
        unsigned *l_1275 = &g_250;
        unsigned *l_1276 = &g_46;
        (*l_1274) = ((safe_add_func_int32_t_s_s((4294967290UL | ((*l_1259) == 0xE26F66ACL)), (*g_584))) >= (*l_1274));
    }
    else
    {
        int l_1277 = 0xFA471144L;
        int l_1278 = 0xCD349140L;
        (*l_1070) |= (&g_733 == p_12);
        if ((l_1277 && (l_1277 || g_992)))
        {
            unsigned char l_1279 = 1UL;
            int l_1280 = 0xCFF6E808L;
            p_12 = p_12;
            l_1278 &= ((*g_584) = (*g_584));
            l_1280 = ((*g_584) & l_1279);
        }
        else
        {
            unsigned l_1285 = 9UL;
            (*l_1070) = ((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_35(&l_1166, (l_1286 == &l_1287)), (safe_rshift_func_int8_t_s_s((*l_1070), l_1285)))), 6UL)) >= (*g_584));
        }
    }
    (*g_165) = p_12;
    return p_12;
}







static int * func_15(int * p_16)
{
    int *l_404 = &g_135;
    int *l_405 = &g_14;
    int *l_406 = &g_135;
    int *l_407 = &g_399;
    int *l_408 = &g_135;
    int *l_409 = &g_399;
    int *l_410 = (void*)0;
    int l_411 = 0xAD0F7610L;
    int *l_412 = &g_111;
    int *l_413 = (void*)0;
    int l_414 = 0x37E61190L;
    int *l_415 = &l_414;
    short l_416 = 5L;
    int l_417 = 1L;
    int *l_418 = (void*)0;
    int *l_419 = &g_111;
    int *l_420 = &g_111;
    int *l_421 = (void*)0;
    int *l_422 = (void*)0;
    int *l_423 = (void*)0;
    int *l_424 = &g_399;
    int *l_425 = &g_399;
    int *l_426 = &l_411;
    int *l_427 = &g_111;
    int *l_428 = &g_111;
    int *l_429 = &l_417;
    int *l_430 = &g_14;
    int *l_431 = &l_414;
    int *l_432 = &g_135;
    int *l_433 = (void*)0;
    int l_434 = 1L;
    int *l_435 = (void*)0;
    int *l_436 = &g_135;
    int *l_437 = (void*)0;
    int *l_438 = &g_135;
    int *l_439 = &l_414;
    int *l_440 = &g_135;
    int *l_441 = &l_434;
    int l_442 = 0x604E1AB3L;
    int l_443 = 0xBE5335BFL;
    int *l_444 = &l_434;
    int *l_445 = &g_111;
    int l_446 = 0x6B0DC29EL;
    int *l_447 = &l_446;
    int *l_448 = (void*)0;
    int *l_449 = &g_399;
    int l_450 = 9L;
    int *l_451 = &g_111;
    int *l_452 = (void*)0;
    int l_453 = 0x551F979EL;
    int *l_454 = &g_111;
    int *l_455 = &l_450;
    int *l_456 = &l_450;
    int *l_457 = (void*)0;
    int *l_458 = (void*)0;
    int *l_459 = &l_434;
    int *l_460 = &l_450;
    int *l_461 = &l_443;
    int *l_462 = &g_135;
    int *l_463 = (void*)0;
    int *l_464 = &g_111;
    int *l_465 = &l_417;
    int *l_466 = &g_135;
    int l_467 = 1L;
    int *l_468 = &l_414;
    int *l_469 = &l_411;
    int *l_470 = &l_442;
    int *l_471 = &l_434;
    int *l_472 = &g_399;
    int *l_473 = (void*)0;
    int *l_474 = &l_417;
    int *l_475 = (void*)0;
    int *l_476 = (void*)0;
    int *l_477 = &l_450;
    int *l_478 = &l_450;
    int *l_479 = (void*)0;
    int l_480 = 0x6152E5FBL;
    int *l_481 = &g_111;
    int *l_482 = &l_442;
    int *l_483 = (void*)0;
    int *l_484 = &l_467;
    int *l_485 = (void*)0;
    int *l_486 = &g_14;
    int *l_487 = &l_450;
    int *l_488 = &l_411;
    int *l_489 = &l_446;
    int *l_490 = &l_443;
    int l_491 = 0xE6ADB902L;
    int *l_492 = (void*)0;
    int *l_493 = &l_417;
    int *l_494 = (void*)0;
    int *l_495 = &l_434;
    int *l_496 = &l_434;
    int *l_497 = &g_399;
    int *l_498 = &l_467;
    int *l_499 = &l_414;
    int *l_500 = &g_14;
    int *l_501 = &l_443;
    int *l_502 = &l_480;
    int *l_503 = (void*)0;
    int *l_504 = (void*)0;
    int *l_508 = &l_480;
    int *l_509 = &l_480;
    int *l_510 = &l_467;
    int *l_511 = (void*)0;
    int *l_512 = (void*)0;
    int *l_513 = &l_467;
    unsigned char *l_519 = &g_96;
    int l_526 = (-1L);
    struct S0 l_529 = {16};
    unsigned **l_568 = (void*)0;
    unsigned ***l_567 = &l_568;
    ++g_505;
    g_514--;
    (*l_482) |= (((g_96 || ((*l_510) &= (safe_add_func_uint8_t_u_u(g_366, (--(*l_519)))))) || (((*l_472) >= (safe_add_func_int8_t_s_s((252UL || (~0xA8L)), (l_430 == l_471)))) > (*l_464))) > (((safe_mul_func_uint8_t_u_u((*l_425), 0xE0L)) ^ l_526) && (*g_343)));
    for (l_446 = 23; (l_446 >= (-7)); l_446 = safe_sub_func_int16_t_s_s(l_446, 9))
    {
        int l_531 = 0x9BABAE2EL;
        int *l_555 = &g_399;
        if ((*p_16))
        {
            struct S0 *l_530 = &l_529;
            char *l_532 = &g_394.f0;
            unsigned char l_536 = 253UL;
            (*l_530) = l_529;
            (*l_481) = ((*l_508) = l_531);
        }
        else
        {
            unsigned *l_537 = &g_318;
            int l_540 = 0x02C50F9EL;
            int l_541 = 0x7D8A5F0AL;
            unsigned short *l_542 = (void*)0;
            unsigned short *l_543 = &g_505;
            int l_546 = 0x54566B5CL;
            int l_549 = (-1L);
            unsigned char *l_550 = &g_366;
            (*g_165) = &l_467;
            (*l_445) ^= (((*l_550) ^= (((*l_543) = ((l_540 ^= (g_14 < func_35(p_16, (--(*l_537))))) < l_541)) > (safe_add_func_int16_t_s_s(l_546, ((*g_343) = func_35(p_16, (((l_549 ^= (((*l_519) &= (safe_mul_func_uint16_t_u_u(((l_531 != (*p_16)) & (-7L)), 0xCA25L))) == (*l_430))) || (*g_535)) > (*g_535)))))))) && 255UL);
        }
        if ((func_35(p_16, (*l_456)) == (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0xC410L, (*g_343))), g_223))))
        {
            (*l_502) ^= ((*l_449) = (*p_16));
            (*g_165) = (p_16 = p_16);
            return l_555;
        }
        else
        {
            unsigned short **l_560 = &g_381;
            int l_561 = 9L;
            unsigned short *l_562 = (void*)0;
            unsigned short *l_563 = &g_248;
            int l_566 = (-1L);
            unsigned ****l_569 = &l_567;
            unsigned ***l_570 = &l_568;
            struct S0 ***l_576 = &g_573;
            (*l_431) = ((*p_16) != ((safe_lshift_func_uint8_t_u_u((*l_555), (*g_535))) > (((*l_563) = (l_561 |= (~(safe_add_func_int8_t_s_s((g_6 = (l_560 != (void*)0)), 0x4BL))))) > (((*g_343) |= (safe_add_func_uint16_t_u_u(l_566, (((*l_569) = l_567) != (l_570 = &l_568))))) > 0xDF22L))));
            (*l_440) |= ((*l_412) = (safe_mul_func_int16_t_s_s((((*l_576) = g_573) == (void*)0), (*l_481))));
            return p_16;
        }
    }
    return p_16;
}







static int * func_17(char p_18, char p_19, int * p_20)
{
    int *l_403 = &g_135;
    (*g_165) = (void*)0;
    return l_403;
}







static int * func_21(int p_22, unsigned short p_23)
{
    char l_117 = 4L;
    unsigned char *l_120 = (void*)0;
    unsigned char *l_121 = &g_96;
    int *l_124 = &g_111;
    short *l_125 = &g_126;
    short *l_127 = &g_128;
    unsigned l_129 = 2UL;
    unsigned char l_137 = 0x71L;
    unsigned l_168 = 0xC4CEA799L;
    unsigned l_279 = 4294967295UL;
    int l_289 = (-7L);
    int l_302 = 0xF3818BB1L;
    struct S1 *l_395 = &g_394;
    int *l_400 = &l_302;
    int *l_401 = &g_399;
    if ((safe_lshift_func_uint8_t_u_s(l_117, (l_129 = (safe_rshift_func_int16_t_s_s(((*l_127) ^= (((*l_125) &= (((l_117 || l_117) < g_114) && func_24(func_29((((*l_121)--) | g_6)), &g_111, l_124, p_23))) | 0L)), p_22))))))
    {
        int **l_131 = &g_110;
        int ***l_130 = &l_131;
        int *l_134 = &g_135;
        (*l_134) |= (func_24(&g_111, l_124, &g_14, (*l_124)) && (g_96 & (((!(&l_124 == ((*l_130) = &g_110))) | (safe_sub_func_int32_t_s_s(((*g_110) | 0x10D33A12L), p_22))) != p_23)));
        l_124 = ((*l_131) = l_124);
    }
    else
    {
        int *l_136 = (void*)0;
        int **l_142 = &l_136;
        int **l_143 = &g_13;
        unsigned *l_145 = &g_107;
        unsigned **l_144 = &l_145;
        unsigned *l_147 = &l_129;
        unsigned **l_146 = &l_147;
        short *l_244 = &g_243;
        struct S0 l_251 = {82};
        unsigned char *l_276 = (void*)0;
        (*l_143) = ((*l_142) = (l_124 = func_29(func_24(l_124, &g_111, l_136, (func_24(l_136, &g_14, &g_14, l_137) > ((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((func_35(l_136, g_128) || (-1L)), p_23)), (*g_110))) != g_107))))));
        if (((&g_107 == ((*l_144) = l_136)) == func_35((*l_142), p_23)))
        {
            unsigned ***l_148 = &l_146;
            int l_151 = (-4L);
            int l_169 = (-6L);
            short *l_242 = &g_243;
            unsigned short *l_273 = &g_248;
            unsigned short l_325 = 1UL;
            struct S0 *l_336 = &l_251;
            (*l_148) = l_146;
            l_151 = (((*l_121) = (((**l_143) = (*g_13)) || (0xB9819055L > (safe_mul_func_int16_t_s_s((*l_124), g_126))))) > 2UL);
            if ((*g_13))
            {
                int ***l_164 = &l_142;
                unsigned char *l_277 = &g_96;
                if ((l_169 &= ((*l_124) = (l_151 <= (safe_rshift_func_uint16_t_u_u((((*l_143) = func_29((safe_sub_func_uint16_t_u_u(g_111, (((safe_rshift_func_uint16_t_u_s(p_22, ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_23, 0xD4FEL)), l_151)) > (safe_mod_func_uint16_t_u_u((((*l_164) = &g_110) != (g_165 = &g_13)), (safe_add_func_uint16_t_u_u(1UL, l_151))))))) == l_168) | g_128))))) != &l_151), 2))))))
                {
                    short l_176 = 0L;
                    int l_204 = 0L;
                    unsigned short *l_272 = &g_248;
                    unsigned short **l_271 = &l_272;
                    int *l_274 = &l_151;
                    int l_304 = 0x3E397D91L;
                    (*g_13) = ((((g_96 != ((safe_sub_func_uint8_t_u_u(func_24(l_124, (*g_165), ((*l_142) = l_124), ((**l_144) = (safe_mod_func_int8_t_s_s(g_96, (safe_lshift_func_uint8_t_u_u(l_176, func_35(l_124, l_176))))))), 0xBDL)) | 1L)) >= 0UL) ^ p_22) | l_176);
                    for (g_46 = 9; (g_46 < 24); g_46++)
                    {
                        int *l_179 = &g_135;
                        int *l_180 = &l_169;
                        int *l_181 = (void*)0;
                        int *l_182 = &g_111;
                        int *l_183 = &l_151;
                        int *l_184 = &g_111;
                        int *l_185 = (void*)0;
                        int *l_186 = &g_14;
                        int *l_187 = &g_111;
                        int *l_188 = &l_169;
                        int *l_189 = &g_14;
                        int *l_190 = (void*)0;
                        int *l_191 = &l_169;
                        int *l_192 = (void*)0;
                        int *l_193 = &l_151;
                        int *l_194 = &g_14;
                        int *l_195 = &g_14;
                        int *l_196 = &g_14;
                        int *l_197 = &g_111;
                        int *l_198 = &g_135;
                        int *l_199 = (void*)0;
                        int *l_200 = (void*)0;
                        int *l_201 = &g_135;
                        int l_202 = (-1L);
                        int *l_203 = &l_151;
                        int *l_205 = &l_169;
                        int *l_206 = &g_14;
                        int *l_207 = &g_135;
                        int *l_208 = &l_204;
                        int *l_209 = &l_151;
                        int *l_210 = (void*)0;
                        int *l_211 = &l_204;
                        int *l_212 = &g_135;
                        int *l_213 = &g_14;
                        int *l_214 = &g_111;
                        int *l_215 = &l_169;
                        int *l_216 = &g_111;
                        int *l_217 = &l_169;
                        int *l_218 = &l_169;
                        int *l_219 = &g_14;
                        int *l_220 = &l_204;
                        int *l_221 = &l_151;
                        int *l_222 = &l_151;
                        unsigned short *l_245 = (void*)0;
                        unsigned short *l_246 = (void*)0;
                        unsigned short *l_247 = &g_248;
                        unsigned *l_249 = &g_250;
                        struct S0 *l_252 = &l_251;
                        ++g_223;
                        (*l_208) |= (*g_13);
                        (**l_143) = (((*g_13) == ((*l_187) = (safe_sub_func_uint8_t_u_u((p_22 || ((*l_242) |= (((*l_125) = ((*l_127) = (*l_198))) <= (l_204 | (((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((func_35((*g_165), ((*l_249) = ((***l_148) = (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_247) = (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((l_242 != l_244), (*l_136))), 4))), (l_204 > p_23))), p_23)), p_22))))) && 0x8BL) | g_6), p_23)), g_46)) | 0x7ACCF6E1L) == g_114))))), 0x53L)))) <= g_96);
                        (*l_252) = l_251;
                    }
                    (**l_164) = (*g_165);
                    if (((*l_274) |= (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((*l_124), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_223, 5)), 4)))) < (safe_mul_func_uint8_t_u_u((((((g_6 ^= 0x04L) || (((func_35(&l_204, g_96) && func_35(&l_151, (safe_mul_func_int16_t_s_s(((((*l_271) = (void*)0) == l_273) < p_22), 0xEECAL)))) <= 0x1AL) == 0UL)) ^ p_23) < (*l_124)) < (***l_164)), l_169))), g_14)), 0x1CC4L)), g_46))))
                    {
                        char l_275 = 0x36L;
                        unsigned char **l_278 = &l_277;
                        char *l_280 = &l_117;
                        (*l_136) = l_275;
                        (***l_164) ^= (func_35(((*g_165) = (**l_164)), ((*l_147) = (((l_276 != ((*l_278) = l_277)) & l_279) < g_107))) > ((*l_280) = 6L));
                        (*l_136) = (safe_mod_func_uint32_t_u_u((((*l_125) &= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(g_46, 3)), p_23))) == ((*l_127) ^= (safe_sub_func_int8_t_s_s(((((g_46 <= (l_289 <= g_6)) == g_243) == (*l_136)) > (((***l_148) = p_23) & (p_23 > l_151))), l_275)))), 0xE4F70735L));
                        (**g_165) = func_24(&l_151, (*g_165), (*g_165), (*l_274));
                    }
                    else
                    {
                        int *l_290 = &g_14;
                        int *l_291 = &g_14;
                        int *l_292 = &l_204;
                        int *l_293 = &l_204;
                        int *l_294 = &g_14;
                        int *l_295 = &g_14;
                        int *l_296 = &g_135;
                        int *l_297 = &g_14;
                        int *l_298 = &g_135;
                        int *l_299 = &g_14;
                        int *l_300 = (void*)0;
                        int *l_301 = &g_14;
                        int *l_303 = &g_111;
                        int *l_305 = (void*)0;
                        int *l_306 = &l_304;
                        int *l_307 = &l_151;
                        int *l_308 = &g_135;
                        int *l_309 = &l_302;
                        int *l_310 = &l_302;
                        int *l_311 = &g_135;
                        int *l_312 = &l_169;
                        int *l_313 = &l_204;
                        int *l_314 = &l_304;
                        int *l_315 = &g_14;
                        int *l_316 = (void*)0;
                        int *l_317 = &l_204;
                        g_318++;
                        (*l_313) ^= ((*g_13) &= (g_321 != (void*)0));
                        (**l_164) = (*l_142);
                        (*l_299) ^= p_22;
                    }
                }
                else
                {
                    short l_322 = 2L;
                    int *l_331 = &g_111;
                    if (((*l_124) = ((g_6 ^= func_35(func_29(((g_243 ^ ((l_151 & (**l_142)) <= l_322)) < (***l_164))), (safe_sub_func_int16_t_s_s(func_35(&l_302, (0x73L < ((l_169 = p_23) && l_322))), l_325)))) != g_248)))
                    {
                        struct S0 *l_329 = &l_251;
                        struct S0 **l_328 = &l_329;
                        (**l_164) = func_29((++(*l_273)));
                        (*l_328) = (void*)0;
                        (**g_165) &= (p_23 ^ g_111);
                    }
                    else
                    {
                        unsigned short *l_330 = &g_248;
                        (**l_164) = func_29(((l_330 = (void*)0) != (void*)0));
                        (*l_142) = l_331;
                        return (*l_142);
                    }
                    (*g_165) = &l_302;
                    (*g_13) = (safe_add_func_uint16_t_u_u((((+((**g_165) > ((g_135 & ((safe_lshift_func_int16_t_s_u((-1L), 0)) || (*l_136))) >= ((g_135 > ((void*)0 != l_336)) <= 0xC927L)))) == (g_223 ^ p_22)) != p_23), g_248));
                }
                for (g_111 = 0; (g_111 == 25); g_111 = safe_add_func_int16_t_s_s(g_111, 4))
                {
                    struct S0 *l_339 = &l_251;
                    struct S0 **l_340 = &l_339;
                    (*l_340) = l_339;
                    return (**l_164);
                }
                (*g_13) = (-9L);
                for (l_129 = 0; (l_129 > 7); l_129 = safe_add_func_int8_t_s_s(l_129, 6))
                {
                    (*g_110) |= ((&g_128 == (g_343 = &g_126)) <= (p_23 > g_135));
                }
            }
            else
            {
                int *l_372 = (void*)0;
                (*l_336) = l_251;
                if ((func_35(((*l_143) = ((*g_165) = (*l_143))), g_128) != p_22))
                {
                    int *l_344 = &g_111;
                    int *l_345 = &l_169;
                    int *l_346 = &l_151;
                    int *l_347 = &g_14;
                    int *l_348 = &g_111;
                    int *l_349 = (void*)0;
                    int *l_350 = (void*)0;
                    int *l_351 = &g_14;
                    int *l_352 = (void*)0;
                    int *l_353 = &l_169;
                    int *l_354 = &l_169;
                    int *l_355 = (void*)0;
                    int *l_356 = (void*)0;
                    int *l_357 = &l_151;
                    int *l_358 = &l_302;
                    int *l_359 = &l_151;
                    int *l_360 = &g_135;
                    int *l_361 = &g_14;
                    int *l_362 = &l_151;
                    int *l_363 = &l_151;
                    int *l_365 = &l_151;
                    g_366--;
                    if ((*g_110))
                    {
                        unsigned l_369 = 18446744073709551615UL;
                        (*g_110) ^= l_369;
                        (*l_346) ^= (safe_lshift_func_int16_t_s_s(l_369, 6));
                    }
                    else
                    {
                        return l_372;
                    }
                    (*l_353) = (*g_110);
                }
                else
                {
                    (*g_165) = func_29(((*l_273) = (safe_mul_func_uint8_t_u_u(g_6, (*l_124)))));
                }
            }
            l_124 = &l_169;
        }
        else
        {
            unsigned short *l_380 = &g_248;
            unsigned short **l_379 = &l_380;
            char *l_388 = &l_117;
            int *l_391 = &g_111;
            (*l_136) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((*g_343) = ((g_392 = (g_248 = (((*l_391) = func_24(func_29(((((*l_379) = &p_23) != (g_381 = &p_23)) && (g_114 && (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x20L, ((*l_388) |= (safe_mul_func_int8_t_s_s((*l_136), (0xC4E5C6B9L && (((*g_165) = (*g_165)) == &l_302))))))), ((safe_add_func_uint8_t_u_u(p_23, g_366)) && 1UL)))))), &l_302, l_391, (*l_391))) == g_107))) ^ (*g_343))), 15)), g_243));
            l_395 = g_393;
        }
        (*l_142) = (*g_165);
        l_395 = l_395;
    }
    (**g_165) = l_302;
    for (g_318 = 20; (g_318 <= 45); ++g_318)
    {
        int *l_398 = &g_111;
        return l_398;
    }
    g_399 &= (*g_13);
    return l_401;
}







static char func_24(int * p_25, int * p_26, int * p_27, unsigned p_28)
{
    (*g_13) = (*g_13);
    return g_6;
}







static int * func_29(unsigned short p_30)
{
    int *l_38 = &g_14;
    unsigned *l_44 = (void*)0;
    unsigned *l_45 = &g_46;
    int l_49 = 0xDB2097E6L;
    int l_51 = 0L;
    int l_59 = (-1L);
    int l_86 = (-2L);
    if ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((((func_35(l_38, (*l_38)) <= func_35((g_13 = &g_14), (safe_mod_func_uint32_t_u_u(((*l_45) = ((*l_38) != p_30)), g_14)))) || ((((*l_38) || 0xC93846F2L) >= g_46) <= (*g_13))) == p_30), g_14)), 7)))
    {
        int *l_47 = &g_14;
        int *l_48 = &g_14;
        int l_50 = 0xD4C3F121L;
        int *l_52 = &l_51;
        int *l_53 = &l_50;
        int *l_54 = &l_50;
        int *l_55 = &l_50;
        int *l_56 = &l_50;
        int *l_57 = &l_49;
        int *l_58 = &l_49;
        int *l_60 = &l_49;
        int *l_61 = (void*)0;
        int l_62 = (-1L);
        int *l_63 = &l_50;
        int *l_64 = (void*)0;
        int *l_65 = &l_50;
        int *l_66 = (void*)0;
        int *l_67 = &l_51;
        int *l_68 = &l_49;
        int *l_69 = (void*)0;
        int *l_70 = &l_51;
        int *l_71 = &l_49;
        int *l_72 = &l_62;
        int *l_73 = &l_59;
        int *l_74 = (void*)0;
        int *l_75 = &l_50;
        int *l_76 = (void*)0;
        int *l_77 = &l_50;
        int *l_78 = &l_59;
        int *l_79 = (void*)0;
        int *l_80 = (void*)0;
        int *l_81 = (void*)0;
        int *l_82 = &g_14;
        int *l_83 = &l_62;
        int *l_84 = &l_50;
        int *l_85 = &l_50;
        int *l_87 = (void*)0;
        int l_88 = 1L;
        int *l_89 = &l_50;
        int *l_90 = &l_59;
        int *l_91 = (void*)0;
        int *l_92 = &l_51;
        int *l_93 = &l_49;
        int *l_94 = &l_62;
        int *l_95 = &l_86;
        int **l_99 = (void*)0;
        int **l_100 = (void*)0;
        int **l_101 = &l_79;
        int **l_102 = &l_72;
        (*g_13) = 0x2811FFBEL;
        --g_96;
        (*l_102) = ((*l_101) = &l_51);
    }
    else
    {
        int *l_105 = &l_59;
        for (l_59 = 0; (l_59 == 26); l_59++)
        {
            return &g_14;
        }
    }
    l_38 = &l_49;
    return &g_14;
}







static short func_35(int * p_36, unsigned p_37)
{
    unsigned short l_39 = 0x1DBCL;
    --l_39;
    return l_39;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_575.f0, "g_575.f0", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    transparent_crc(g_1434, "g_1434", print_hash_value);
    transparent_crc(g_1626, "g_1626", print_hash_value);
    transparent_crc(g_1648, "g_1648", print_hash_value);
    transparent_crc(g_1655, "g_1655", print_hash_value);
    transparent_crc(g_1658, "g_1658", print_hash_value);
    transparent_crc(g_1758, "g_1758", print_hash_value);
    transparent_crc(g_1839.f0, "g_1839.f0", print_hash_value);
    transparent_crc(g_1855, "g_1855", print_hash_value);
    transparent_crc(g_1922, "g_1922", print_hash_value);
    transparent_crc(g_2017, "g_2017", print_hash_value);
    transparent_crc(g_2025, "g_2025", print_hash_value);
    transparent_crc(g_2042, "g_2042", print_hash_value);
    transparent_crc(g_2081, "g_2081", print_hash_value);
    transparent_crc(g_2348, "g_2348", print_hash_value);
    transparent_crc(g_2351, "g_2351", print_hash_value);
    transparent_crc(g_2353, "g_2353", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
