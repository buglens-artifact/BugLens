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
   int f0;
};


static unsigned short g_7 = 0x9831L;
static union U0 g_23 = {0L};
static union U0 *g_22 = &g_23;
static unsigned char g_47 = 248UL;
static unsigned g_49 = 0x36CEDDA5L;
static short g_56 = (-6L);
static int g_59 = (-7L);
static union U0 **g_64 = &g_22;
static union U0 ***g_63 = &g_64;
static char g_67 = 0x26L;
static int *g_73 = &g_23.f0;
static int *g_79 = &g_23.f0;
static unsigned short g_91 = 7UL;
static unsigned g_115 = 1UL;
static unsigned g_124 = 0x4942BEBAL;
static short g_163 = 0L;
static int g_166 = (-1L);
static unsigned short g_198 = 65535UL;
static unsigned g_201 = 4294967295UL;
static union U0 g_208 = {0x113DB586L};
static int g_212 = 9L;
static char *g_215 = &g_67;
static char **g_214 = &g_215;
static char ***g_213 = &g_214;
static int g_261 = 0x7DBC3B14L;
static unsigned g_268 = 18446744073709551610UL;
static int *g_275 = &g_212;
static union U0 ****g_326 = (void*)0;
static union U0 *****g_325 = &g_326;
static char g_344 = 1L;
static unsigned char g_353 = 9UL;
static unsigned **g_400 = (void*)0;
static unsigned ***g_399 = &g_400;
static unsigned g_463 = 0xFCDBAE38L;
static unsigned char g_482 = 4UL;
static unsigned g_543 = 0xCDB5D771L;
static int g_546 = 0x53F24987L;
static unsigned char g_644 = 0UL;
static int g_723 = 0x4502A242L;
static unsigned short g_734 = 9UL;
static union U0 g_758 = {-6L};
static unsigned short g_789 = 0xF7B6L;
static short g_902 = 2L;
static char g_911 = 1L;
static short g_912 = (-1L);
static unsigned short g_949 = 8UL;
static unsigned g_1123 = 0UL;
static unsigned char g_1154 = 0x29L;
static int g_1242 = 0x14B616A4L;
static unsigned char g_1254 = 0x41L;
static char **g_1261 = &g_215;
static short g_1360 = 0xD376L;
static int g_1365 = 0xB549AD15L;
static int g_1376 = 0x28F56B22L;
static short g_1390 = 0x53F3L;
static unsigned char g_1404 = 0x39L;
static char g_1501 = 1L;
static unsigned short g_1507 = 0x3792L;
static unsigned char g_1589 = 0xB6L;
static short **g_1611 = (void*)0;
static unsigned g_1765 = 0x17D88C9DL;
static unsigned char g_1790 = 0UL;
static unsigned g_1792 = 18446744073709551607UL;
static unsigned short g_1855 = 0xFFEEL;
static unsigned char g_1930 = 0xA8L;
static int g_1994 = 8L;
static unsigned char g_1996 = 2UL;



static int func_1(void);
static union U0 * func_2(short p_3, unsigned char p_4, int p_5, union U0 * p_6);
static union U0 * func_9(union U0 * p_10, unsigned p_11);
static union U0 * func_12(unsigned short p_13, union U0 * p_14, union U0 * p_15);
static union U0 * func_16(union U0 * p_17, union U0 * p_18);
static int func_19(unsigned short p_20, union U0 * p_21);
static int func_24(unsigned p_25, union U0 p_26);
static union U0 func_27(int p_28, union U0 * p_29);
static char func_31(short p_32);
static unsigned char func_35(unsigned p_36);
static int func_1(void)
{
    unsigned short l_8 = 0xB659L;
    union U0 *l_220 = &g_23;
    union U0 *l_221 = (void*)0;
    unsigned l_1771 = 0x99CFFF84L;
    unsigned char *l_1779 = &g_1589;
    int l_1796 = 5L;
    int *l_1797 = &g_261;
    char l_1808 = 0x05L;
    int l_1877 = 2L;
    int l_1912 = 0x1760E9F7L;
    int l_1922 = 8L;
    int *l_1933 = (void*)0;
    unsigned *l_2009 = &g_1765;
    int l_2010 = (-8L);
    int *l_2011 = &l_1796;
    unsigned l_2012 = 0UL;
    (*g_64) = func_2(g_7, l_8, g_7, func_9(func_12(l_8, func_16((func_19(l_8, g_22) , (l_220 = (*g_64))), l_221), (*g_64)), l_8));
    if ((l_1771 <= (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((*l_1779) = (safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(l_8)) <= g_1765), g_902))), (2UL ^ ((l_8 <= (g_912 >= l_8)) != 0x1919033CL)))), l_8))))
    {
        unsigned l_1791 = 0xBC48E94BL;
        char *l_1793 = &g_67;
        short l_1794 = 0x5BE5L;
        int *l_1795 = &g_261;
        int *l_1798 = &g_212;
        int l_1809 = 0xA2FAF29FL;
        unsigned l_1831 = 0x95A0ACDCL;
        int l_1845 = (-5L);
        int l_1880 = (-4L);
        union U0 **l_1934 = &l_221;
        union U0 *l_1939 = &g_208;
        unsigned short *l_1940 = &g_91;
        if (((safe_lshift_func_uint8_t_u_s(250UL, (safe_sub_func_uint16_t_u_u((l_8 , (g_1765 <= ((((((safe_rshift_func_int8_t_s_u(((**g_214) = (l_1796 = l_1771)), 7)) <= l_1791) , &g_59) != l_1797) != l_8) && (*g_215)))), (-1L))))) , 0x57690105L))
        {
            char l_1805 = 1L;
            int *l_1810 = (void*)0;
            int *l_1811 = &l_1796;
            int *l_1812 = (void*)0;
            int *l_1813 = &g_212;
            int *l_1814 = &g_546;
            int *l_1815 = (void*)0;
            int *l_1816 = &g_212;
            int *l_1817 = &g_23.f0;
            int *l_1818 = (void*)0;
            int *l_1819 = (void*)0;
            int *l_1820 = (void*)0;
            int *l_1821 = &g_1376;
            int *l_1822 = &l_1809;
            int *l_1823 = &g_1376;
            int l_1824 = 0xB5E967E3L;
            int *l_1825 = &g_208.f0;
            int *l_1826 = &l_1824;
            int *l_1827 = (void*)0;
            int *l_1828 = &g_546;
            int *l_1829 = &l_1809;
            int *l_1830 = (void*)0;
            int *l_1834 = &g_1376;
            int *l_1835 = (void*)0;
            int *l_1836 = &g_1376;
            int *l_1837 = &g_546;
            int *l_1838 = &g_546;
            int *l_1839 = (void*)0;
            int *l_1840 = &l_1796;
            int *l_1841 = (void*)0;
            int *l_1842 = &g_212;
            int *l_1843 = (void*)0;
            int *l_1844 = &g_212;
            int *l_1846 = &l_1809;
            int *l_1847 = (void*)0;
            int *l_1848 = &l_1845;
            int *l_1849 = &g_546;
            int *l_1850 = &g_758.f0;
            int *l_1851 = &g_758.f0;
            int *l_1852 = &g_546;
            int *l_1853 = &g_1376;
            int *l_1854 = &g_23.f0;
            l_1798 = &l_1796;
            l_1809 ^= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(g_163, 7)) && (l_1771 <= (g_949 , (safe_mul_func_int16_t_s_s((((*l_1798) || (*l_1798)) , (l_1805 , l_1771)), ((((safe_add_func_int8_t_s_s(((void*)0 != &g_212), 0xCBL)) >= 0x0CEEL) <= l_1808) != g_911)))))), g_1360));
            ++l_1831;
            g_1855++;
        }
        else
        {
            int *l_1858 = &l_1809;
            int *l_1859 = &l_1845;
            int *l_1860 = &l_1796;
            int *l_1861 = (void*)0;
            int *l_1862 = &g_546;
            int l_1863 = 0L;
            int *l_1864 = &l_1845;
            int *l_1865 = &g_758.f0;
            int *l_1866 = &g_212;
            int *l_1867 = &g_212;
            int *l_1868 = &l_1863;
            int *l_1869 = &g_208.f0;
            int *l_1870 = &g_1376;
            int *l_1871 = &g_546;
            int *l_1872 = &g_758.f0;
            int *l_1873 = (void*)0;
            int *l_1874 = &g_23.f0;
            int *l_1875 = &g_758.f0;
            int *l_1876 = (void*)0;
            int *l_1878 = &l_1796;
            int *l_1879 = &l_1863;
            int *l_1881 = &l_1863;
            int *l_1882 = (void*)0;
            int *l_1883 = &g_546;
            int *l_1884 = &l_1845;
            int *l_1885 = (void*)0;
            int *l_1886 = &g_208.f0;
            int *l_1887 = &l_1863;
            int *l_1888 = &l_1845;
            int *l_1889 = &g_546;
            int *l_1890 = (void*)0;
            int l_1891 = (-8L);
            int *l_1892 = &l_1845;
            int *l_1893 = &g_212;
            int *l_1894 = &g_208.f0;
            int *l_1895 = &g_208.f0;
            int *l_1896 = (void*)0;
            int *l_1897 = (void*)0;
            int l_1898 = 1L;
            int *l_1899 = &l_1863;
            int *l_1900 = &l_1845;
            int *l_1901 = &l_1845;
            int *l_1902 = &l_1891;
            int *l_1903 = &l_1796;
            int *l_1904 = &g_758.f0;
            int *l_1905 = &g_23.f0;
            int l_1906 = (-6L);
            int *l_1907 = (void*)0;
            int *l_1908 = (void*)0;
            int *l_1909 = &l_1845;
            int *l_1910 = &g_758.f0;
            int *l_1911 = &l_1863;
            int *l_1913 = &l_1845;
            int *l_1914 = &g_23.f0;
            int *l_1915 = &l_1845;
            int *l_1916 = &l_1877;
            int *l_1917 = (void*)0;
            int l_1918 = 0L;
            int *l_1919 = &l_1877;
            int *l_1920 = (void*)0;
            int *l_1921 = (void*)0;
            int *l_1923 = &l_1912;
            int *l_1924 = &g_212;
            int *l_1925 = &g_546;
            int *l_1926 = &g_212;
            int *l_1927 = (void*)0;
            int *l_1928 = &g_23.f0;
            int *l_1929 = &l_1922;
            --g_1930;
        }
        l_1933 = &l_1877;
        (*l_1798) &= ((*l_1933) = (*l_1933));
    }
    else
    {
        int **l_1941 = &g_73;
        int *l_1942 = &g_212;
        int *l_1943 = (void*)0;
        int *l_1944 = &l_1877;
        int *l_1945 = &g_208.f0;
        int *l_1946 = &g_212;
        int *l_1947 = &g_1376;
        int *l_1948 = &g_758.f0;
        int *l_1949 = &l_1922;
        int *l_1950 = &g_212;
        int *l_1951 = &l_1922;
        int *l_1952 = &g_208.f0;
        int *l_1953 = (void*)0;
        int *l_1954 = &g_23.f0;
        int *l_1955 = &g_546;
        int *l_1956 = &g_1376;
        int *l_1957 = &l_1796;
        int *l_1958 = (void*)0;
        int *l_1959 = &l_1877;
        int *l_1960 = &l_1922;
        int *l_1961 = &l_1912;
        int *l_1962 = &l_1912;
        int *l_1963 = &g_212;
        int *l_1964 = &g_23.f0;
        int *l_1965 = &g_546;
        int *l_1966 = &g_208.f0;
        int *l_1967 = (void*)0;
        int *l_1968 = (void*)0;
        int *l_1969 = (void*)0;
        int *l_1970 = (void*)0;
        int *l_1971 = &g_208.f0;
        int *l_1972 = &g_1376;
        int *l_1973 = &g_1376;
        int *l_1974 = &g_1376;
        int *l_1975 = &g_1376;
        int *l_1976 = &l_1877;
        int *l_1977 = &l_1796;
        int *l_1978 = (void*)0;
        int *l_1979 = &l_1796;
        int *l_1980 = &g_208.f0;
        int *l_1981 = &g_208.f0;
        int *l_1982 = &l_1912;
        int l_1983 = (-7L);
        int *l_1984 = &l_1922;
        int *l_1985 = &l_1912;
        int *l_1986 = &g_546;
        int *l_1987 = &g_208.f0;
        int l_1988 = (-7L);
        int *l_1989 = &l_1983;
        int *l_1990 = &g_23.f0;
        int *l_1991 = &l_1796;
        int *l_1992 = &l_1922;
        int *l_1993 = &g_1376;
        char l_1995 = 0L;
        (*l_1941) = &l_1912;
        (**l_1941) = 0x4A07ADA3L;
        --g_1996;
    }
    g_23.f0 = ((*l_2011) = (((safe_mod_func_uint16_t_u_u(g_7, 0x904BL)) ^ (safe_mul_func_int16_t_s_s((((((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((((*l_2009) &= (l_1912 >= l_1771)) != l_2010) || ((***g_213) < g_902)) & l_1796) ^ g_56), 1UL)), 8)) ^ 0x6CL) != g_67) , 0x08E3L) ^ l_1922) < 0xEA13L) != (***g_213)), g_91))) | (***g_213)));
    return l_2012;
}







static union U0 * func_2(short p_3, unsigned char p_4, int p_5, union U0 * p_6)
{
    int *l_1668 = &g_546;
    int *l_1669 = &g_1376;
    int *l_1670 = &g_1376;
    int *l_1671 = (void*)0;
    int *l_1672 = &g_758.f0;
    int *l_1673 = &g_212;
    int *l_1674 = &g_758.f0;
    int *l_1675 = (void*)0;
    int *l_1676 = &g_758.f0;
    int *l_1677 = &g_758.f0;
    int *l_1678 = &g_1376;
    int *l_1679 = &g_758.f0;
    int *l_1680 = &g_208.f0;
    int *l_1681 = (void*)0;
    int *l_1682 = (void*)0;
    int l_1683 = 0x91401D7BL;
    int l_1684 = 0L;
    int *l_1685 = &g_23.f0;
    int *l_1686 = &g_23.f0;
    int *l_1687 = &l_1684;
    int *l_1688 = &g_546;
    int *l_1689 = &g_758.f0;
    int *l_1690 = (void*)0;
    int *l_1691 = &g_758.f0;
    int *l_1692 = &g_546;
    int *l_1693 = &g_212;
    int *l_1694 = &g_1376;
    int *l_1695 = &g_546;
    int *l_1696 = &g_23.f0;
    int *l_1697 = &g_23.f0;
    int l_1698 = 0x62D04648L;
    int *l_1699 = &g_23.f0;
    int l_1700 = 0x688E530BL;
    int *l_1701 = (void*)0;
    int *l_1702 = (void*)0;
    int *l_1703 = &g_212;
    int *l_1704 = &l_1698;
    int *l_1705 = &l_1698;
    int *l_1706 = (void*)0;
    int *l_1707 = (void*)0;
    int *l_1708 = &g_23.f0;
    int *l_1709 = &g_546;
    int *l_1710 = &g_1376;
    int l_1711 = 0L;
    int *l_1712 = &l_1711;
    int *l_1713 = (void*)0;
    int *l_1714 = &l_1700;
    int *l_1715 = &l_1683;
    int *l_1716 = &g_1376;
    int *l_1717 = &g_23.f0;
    int *l_1718 = &g_23.f0;
    int l_1719 = 0x96A57052L;
    int *l_1720 = &g_1376;
    int *l_1721 = &g_546;
    int *l_1722 = &l_1698;
    int *l_1723 = &g_23.f0;
    int *l_1724 = &l_1719;
    int *l_1725 = &g_212;
    int *l_1726 = &l_1684;
    int *l_1727 = &g_758.f0;
    int *l_1728 = &g_758.f0;
    int *l_1729 = &l_1684;
    int *l_1730 = &l_1684;
    int *l_1731 = (void*)0;
    int *l_1732 = &l_1684;
    int l_1733 = 9L;
    int *l_1734 = &l_1700;
    int *l_1735 = &l_1711;
    int *l_1736 = &l_1684;
    int *l_1737 = (void*)0;
    int *l_1738 = &g_23.f0;
    int l_1739 = (-9L);
    int *l_1740 = &l_1711;
    int *l_1741 = &l_1683;
    int *l_1742 = &l_1733;
    int *l_1743 = &l_1739;
    int *l_1744 = &l_1739;
    int *l_1745 = &l_1739;
    int *l_1746 = &g_212;
    int *l_1747 = &g_1376;
    int *l_1748 = &l_1719;
    int *l_1749 = &g_212;
    int *l_1750 = &g_758.f0;
    int *l_1751 = &g_212;
    int *l_1752 = &g_758.f0;
    int *l_1753 = &l_1719;
    int *l_1754 = &l_1711;
    int *l_1755 = &l_1733;
    int *l_1756 = &g_758.f0;
    int *l_1757 = &l_1739;
    int *l_1758 = (void*)0;
    int *l_1759 = &l_1711;
    int *l_1760 = &g_546;
    int *l_1761 = &l_1700;
    int *l_1762 = &g_23.f0;
    int *l_1763 = &g_758.f0;
    int *l_1764 = &g_23.f0;
    int **l_1768 = &l_1757;
    int **l_1769 = &l_1727;
    int **l_1770 = &l_1673;
    ++g_1765;
    (*l_1768) = &l_1700;
    (*l_1770) = ((*l_1769) = ((*l_1768) = (*l_1768)));
    return p_6;
}







static union U0 * func_9(union U0 * p_10, unsigned p_11)
{
    int l_371 = 0x84AE3615L;
    int l_378 = 0x15DD58F1L;
    unsigned short l_392 = 65535UL;
    unsigned ***l_412 = &g_400;
    int l_526 = (-1L);
    union U0 l_566 = {0x86542614L};
    short *l_690 = &g_163;
    short **l_689 = &l_690;
    int l_702 = 0x982E5903L;
    int **l_793 = &g_275;
    unsigned short *l_794 = &g_734;
    unsigned short *l_797 = &l_392;
    unsigned short l_813 = 0UL;
    unsigned char *l_1010 = &g_353;
    unsigned l_1023 = 6UL;
    unsigned short l_1043 = 0x8A5BL;
    int l_1264 = 0xDD585177L;
    union U0 ******l_1277 = &g_325;
    unsigned char l_1280 = 0x69L;
    int l_1307 = 0x4539FA5DL;
    int l_1339 = 0x54473BE1L;
    int l_1373 = 0x988C1AB9L;
    int l_1377 = 1L;
    int l_1382 = (-1L);
    char l_1610 = 0x66L;
    char **l_1666 = &g_215;
    if (p_11)
    {
        short l_356 = 0L;
        unsigned l_360 = 4294967294UL;
        union U0 ******l_361 = (void*)0;
        union U0 ******l_362 = (void*)0;
        union U0 ******l_363 = &g_325;
        (*g_73) |= (((l_356 != l_356) != ((((p_11 > (((safe_unary_minus_func_int32_t_s(p_11)) != (safe_sub_func_uint32_t_u_u(l_360, g_268))) > 0x89L)) , &g_326) != ((*l_363) = &g_326)) && g_261)) >= p_11);
    }
    else
    {
        unsigned l_372 = 4294967286UL;
        int l_377 = 0xCA833517L;
        int l_384 = 0xF2CDD3E7L;
        unsigned ***l_413 = &g_400;
        char ***l_502 = (void*)0;
        union U0 l_522 = {0xAC9B55ACL};
        unsigned l_556 = 0UL;
        char **l_580 = &g_215;
        char **l_585 = &g_215;
        int *l_586 = &g_212;
        int l_618 = 0x3BC8AFDAL;
        short **l_737 = (void*)0;
        short l_740 = 0x6BECL;
        unsigned l_746 = 4294967288UL;
        int l_792 = 0x3D4EFF09L;
        for (g_268 = (-6); (g_268 == 49); g_268++)
        {
            short l_366 = 0x762EL;
            unsigned short *l_367 = (void*)0;
            unsigned short *l_368 = &g_198;
            l_371 = (l_366 < ((*l_368)++));
            l_372--;
        }
        for (g_47 = 0; (g_47 > 53); g_47 = safe_add_func_int8_t_s_s(g_47, 1))
        {
            int *l_379 = (void*)0;
            int *l_380 = &g_23.f0;
            int *l_381 = &l_377;
            int *l_382 = (void*)0;
            int *l_383 = (void*)0;
            int *l_385 = &l_384;
            int *l_386 = &g_212;
            int *l_387 = &g_212;
            int *l_388 = &l_384;
            int *l_389 = &l_384;
            int *l_390 = &l_378;
            int *l_391 = &l_384;
            unsigned char *l_401 = &g_353;
            int l_441 = 0x472B14F8L;
            int l_446 = (-1L);
            int l_514 = 0x72A71F94L;
            char l_612 = (-4L);
            union U0 l_623 = {0xB58FC865L};
            int l_661 = (-1L);
            --l_392;
        }
        (*g_275) = func_31(l_792);
    }
    (*l_793) = (void*)0;
    if (((((*l_797) = ((*l_794)++)) == (g_789 &= g_91)) > ((void*)0 == l_690)))
    {
        union U0 *l_798 = &g_208;
        l_702 = (*g_79);
        return l_798;
    }
    else
    {
        int *l_799 = &l_702;
        int **l_800 = &g_73;
        union U0 ***l_812 = &g_64;
        int l_857 = (-1L);
        union U0 *l_930 = (void*)0;
        unsigned l_971 = 2UL;
        char ****l_980 = &g_213;
        union U0 *l_983 = &g_23;
        char l_984 = 1L;
        int l_985 = (-1L);
        (*l_800) = ((*l_793) = l_799);
        for (g_166 = 5; (g_166 != 7); g_166++)
        {
            union U0 ***l_805 = &g_64;
            union U0 *****l_806 = &g_326;
            int l_810 = 0x82D53247L;
            char *l_814 = &g_67;
            int *l_1007 = (void*)0;
            int *l_1008 = (void*)0;
            int *l_1009 = &l_378;
        }
    }
    if (((((*l_1010)++) ^ (65527UL == 8L)) , ((safe_lshift_func_int8_t_s_s(0x02L, (**l_793))) , (((g_482 == (safe_mul_func_uint8_t_u_u(((p_11 && g_115) > ((((**l_793) == (0x8CL && p_11)) < p_11) | (**l_793))), (**g_214)))) < 65535UL) & (**l_793)))))
    {
        unsigned l_1017 = 0x32BE493BL;
        int *l_1018 = &g_546;
        union U0 *l_1019 = (void*)0;
        union U0 ****l_1041 = &g_63;
        int l_1090 = 0x86166A87L;
        int l_1133 = 0L;
        int l_1143 = 0xA95384B0L;
        (*l_1018) |= (0UL && func_31((l_1017 = ((**l_793) = ((*l_690) = (-8L))))));
        (*g_64) = l_1019;
        if (((*g_73) ^= func_24((*l_1018), (*p_10))))
        {
            return p_10;
        }
        else
        {
            int l_1022 = 0x9F0CF286L;
            int l_1099 = (-4L);
            int l_1114 = 0xE73E39ECL;
            union U0 *l_1157 = &l_566;
            if ((safe_mul_func_int8_t_s_s((((*l_797) |= (l_1022 != p_11)) >= (*l_1018)), ((l_1023 = (**l_793)) != p_11))))
            {
                int l_1032 = 0xE7A45CF1L;
                int **l_1064 = &g_275;
                int *l_1076 = &g_212;
                int *l_1077 = &l_1032;
                int *l_1078 = &l_378;
                int *l_1079 = &l_566.f0;
                int *l_1080 = &l_1032;
                int *l_1081 = &l_566.f0;
                int *l_1082 = &l_378;
                int *l_1083 = &l_1032;
                int *l_1084 = (void*)0;
                int *l_1085 = (void*)0;
                int *l_1086 = &g_212;
                int *l_1087 = &l_566.f0;
                int *l_1088 = &l_702;
                int *l_1089 = &g_23.f0;
                int *l_1091 = (void*)0;
                int *l_1092 = &l_566.f0;
                int *l_1093 = (void*)0;
                int *l_1094 = (void*)0;
                int *l_1095 = &l_1090;
                int *l_1096 = &g_212;
                int *l_1097 = &g_212;
                int *l_1098 = &l_566.f0;
                int *l_1100 = &g_208.f0;
                int *l_1101 = (void*)0;
                int *l_1102 = (void*)0;
                short l_1103 = 1L;
                int *l_1104 = (void*)0;
                int *l_1105 = &l_1099;
                int *l_1106 = (void*)0;
                int *l_1107 = &g_208.f0;
                int *l_1108 = &l_1022;
                int *l_1109 = (void*)0;
                int *l_1110 = (void*)0;
                int *l_1111 = (void*)0;
                int *l_1112 = &g_546;
                int *l_1113 = &g_758.f0;
                int *l_1115 = &l_1114;
                int *l_1116 = &l_1114;
                int *l_1117 = &g_23.f0;
                int *l_1118 = &g_546;
                int *l_1119 = (void*)0;
                int *l_1120 = &l_1114;
                int *l_1121 = &l_1022;
                int *l_1122 = &l_1114;
                union U0 *l_1158 = &g_208;
                for (g_723 = 2; (g_723 >= 28); g_723 = safe_add_func_int8_t_s_s(g_723, 2))
                {
                    union U0 *l_1026 = &g_208;
                    unsigned char *l_1048 = (void*)0;
                    int l_1065 = 0xC4C3605BL;
                    if (p_11)
                    {
                        return l_1026;
                    }
                    else
                    {
                        int *l_1027 = &l_566.f0;
                        (*l_793) = l_1027;
                    }
                    if ((*l_1018))
                    {
                        int l_1042 = 0x37FB6AB5L;
                        if ((*g_275))
                            break;
                        (*g_73) &= (func_35((p_11 , (**l_793))) > l_1043);
                        l_1032 |= (*l_1018);
                        if ((*g_79))
                            continue;
                    }
                    else
                    {
                        unsigned l_1047 = 0x931AD29FL;
                        union U0 *******l_1061 = (void*)0;
                        union U0 ******l_1063 = &g_325;
                        union U0 *******l_1062 = &l_1063;
                        unsigned *l_1066 = (void*)0;
                        unsigned *l_1067 = &g_543;
                        (*g_275) |= (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(p_11)), g_902));
                        (*g_73) ^= (((l_1048 != &g_353) >= (!(((*l_1067) = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((*l_794) = (safe_add_func_uint16_t_u_u(p_11, ((-1L) == ((((safe_sub_func_int8_t_s_s(((*l_1018) = l_1022), (l_1022 < (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((*l_1062) = &g_325) != &g_325), ((((l_1064 != &l_1018) , l_1022) | l_1065) , g_7))) < 0xCF94L), p_11))))) >= (*g_275)) != g_56) && l_1047))))), 0xB0B3L)), 0xEADB6F11L))) || (*l_1018)))) == p_11);
                        (*g_73) = (safe_mul_func_uint32_t_u_u(l_1047, (((safe_rshift_func_uint8_t_u_s(((**l_793) , (g_344 | ((**l_1064) = func_24(p_11, (*p_10))))), 0)) <= (g_734 == (((((**g_214) ^= l_1047) , (++(*l_1010))) , func_35(l_1047)) < 0xCF85L))) == p_11)));
                        return p_10;
                    }
                }
                g_1123++;
                if ((safe_rshift_func_int16_t_s_u(g_463, 6)))
                {
                    (*l_1064) = (void*)0;
                    l_1018 = ((*l_1064) = &l_1022);
                }
                else
                {
                    char l_1128 = 0x86L;
                    int *l_1129 = &l_566.f0;
                    (*l_1076) = l_1128;
                    l_1129 = &g_212;
                    for (l_1090 = 0; (l_1090 != 10); ++l_1090)
                    {
                        int l_1132 = 1L;
                        int *l_1134 = (void*)0;
                        int l_1135 = 0xFE6E3ED3L;
                        int l_1136 = 0xBCF1BB0AL;
                        int *l_1137 = &l_378;
                        int *l_1138 = &g_758.f0;
                        int *l_1139 = &l_1099;
                        int *l_1140 = (void*)0;
                        int *l_1141 = (void*)0;
                        int *l_1142 = &l_1136;
                        int *l_1144 = &l_378;
                        int *l_1145 = &l_1099;
                        int *l_1146 = &g_212;
                        int *l_1147 = &l_1133;
                        int *l_1148 = (void*)0;
                        int *l_1149 = &g_546;
                        int *l_1150 = &l_566.f0;
                        int *l_1151 = &l_1032;
                        int *l_1152 = &l_1135;
                        int *l_1153 = &l_1099;
                        g_1154--;
                        return l_1158;
                    }
                }
            }
            else
            {
                int *l_1164 = &l_1099;
                (*l_1018) = ((*g_275) = (safe_rshift_func_int16_t_s_s(g_261, 6)));
                for (g_261 = 0; (g_261 >= (-10)); --g_261)
                {
                    short l_1163 = 0L;
                    (*g_275) = 0x01C0B374L;
                }
                (*l_793) = l_1164;
            }
            if (p_11)
            {
                unsigned l_1165 = 0x2B8844F9L;
                unsigned short *l_1192 = &g_7;
                int l_1219 = 0xBC053A1CL;
                char **l_1260 = &g_215;
                int **l_1262 = &g_275;
                ++l_1165;
                if ((safe_add_func_int32_t_s_s(func_24((**l_793), (*p_10)), (l_1165 != ((***g_213) = ((((*l_1018) <= (*l_1018)) || ((*l_1018) ^ ((p_11 > g_482) | (*l_1018)))) ^ g_115))))))
                {
                    unsigned short l_1193 = 0x8512L;
                    int l_1231 = (-1L);
                    if ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(1UL, p_11)), g_463)), (safe_add_func_int8_t_s_s((p_11 >= (p_11 <= (((*g_73) || (g_59 != (***g_213))) ^ 0x6B41L))), 253UL)))))
                    {
                        union U0 *l_1182 = &l_566;
                        int l_1194 = (-7L);
                        int *l_1195 = &l_1090;
                        short *l_1196 = &g_912;
                        int *l_1197 = &g_23.f0;
                        int *l_1198 = &g_546;
                        int *l_1199 = (void*)0;
                        int *l_1200 = &l_1143;
                        int *l_1201 = (void*)0;
                        int *l_1202 = &g_212;
                        int *l_1203 = &l_566.f0;
                        int *l_1204 = &l_1099;
                        int *l_1205 = &g_546;
                        int *l_1206 = (void*)0;
                        int *l_1207 = &l_1133;
                        int *l_1208 = &l_378;
                        int *l_1209 = &l_1143;
                        int *l_1210 = (void*)0;
                        int *l_1211 = (void*)0;
                        int *l_1212 = &l_702;
                        int *l_1213 = (void*)0;
                        int *l_1214 = &l_1099;
                        int *l_1215 = &g_208.f0;
                        int *l_1216 = &l_1143;
                        int *l_1217 = &l_1090;
                        int *l_1218 = &g_208.f0;
                        int *l_1220 = &l_1143;
                        int *l_1221 = (void*)0;
                        int *l_1222 = (void*)0;
                        int *l_1223 = (void*)0;
                        int *l_1224 = &l_1133;
                        int *l_1225 = &l_1022;
                        int *l_1226 = &g_23.f0;
                        int *l_1227 = &l_1099;
                        int *l_1228 = &g_208.f0;
                        int *l_1229 = &g_212;
                        int *l_1230 = &l_1090;
                        int *l_1232 = &l_378;
                        int *l_1233 = &l_1231;
                        int *l_1234 = &l_1133;
                        int *l_1235 = (void*)0;
                        int *l_1236 = &l_1133;
                        int *l_1237 = (void*)0;
                        int *l_1238 = (void*)0;
                        int *l_1239 = &g_208.f0;
                        int *l_1240 = &l_1231;
                        int *l_1241 = &g_212;
                        int *l_1243 = &g_758.f0;
                        int *l_1244 = (void*)0;
                        int *l_1245 = &l_378;
                        int *l_1246 = &l_566.f0;
                        int *l_1247 = &l_702;
                        int *l_1248 = &l_566.f0;
                        int *l_1249 = &l_1231;
                        int *l_1250 = (void*)0;
                        int *l_1251 = &l_1090;
                        int *l_1252 = &g_23.f0;
                        int *l_1253 = &g_758.f0;
                        (*g_275) = (((safe_rshift_func_int16_t_s_s((**l_793), ((*l_1196) |= ((**l_689) = (safe_mod_func_int32_t_s_s((p_10 != (func_35(p_11) , func_16(l_1182, ((*g_64) = &l_566)))), (*l_1018))))))) < p_11) != 1L);
                        g_1254++;
                    }
                    else
                    {
                        char l_1259 = 0L;
                        l_1259 |= (0x7BL == (safe_add_func_int16_t_s_s(g_463, (func_35(p_11) , (!g_344)))));
                        g_1261 = ((*g_213) = l_1260);
                    }
                    (*l_793) = &g_546;
                    (*l_793) = &g_212;
                }
                else
                {
                    int ***l_1263 = &l_793;
                    (*l_793) = (void*)0;
                    (*l_1263) = l_1262;
                    (*l_793) = (*l_793);
                    (**l_1263) = &g_212;
                }
                (**l_793) ^= p_11;
                g_73 = &g_212;
            }
            else
            {
                g_73 = (void*)0;
                l_1114 ^= (**l_793);
            }
            l_1264 |= p_11;
        }
    }
    else
    {
        union U0 l_1265 = {0xAD4C7EB6L};
        unsigned *l_1266 = &g_543;
        int *l_1281 = (void*)0;
        int l_1330 = 0x98D54586L;
        int l_1361 = (-1L);
        int l_1369 = 0x326EE324L;
        union U0 **l_1522 = &g_22;
        (*g_275) |= p_11;
        if ((l_1265 , (((*l_690) = ((((*l_1266) = p_11) == (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_mod_func_int32_t_s_s((*g_73), (((safe_mul_func_uint16_t_u_u(((*l_797) = ((l_1277 != (p_11 , &g_325)) , ((*l_794) = ((safe_mod_func_int8_t_s_s((((((*p_10) , (void*)0) == (void*)0) <= g_902) < l_1265.f0), l_1265.f0)) & 1L)))), 1UL)) < p_11) && p_11))) ^ l_1280) || p_11) < 2UL), g_482)), 1UL)), p_11))) , l_1265.f0)) & g_353)))
        {
            int l_1285 = 0x15C6CBB7L;
            int l_1338 = 6L;
            int l_1363 = 0x7DACEA53L;
            int l_1364 = 1L;
            int l_1383 = 0xD8347F2CL;
            int l_1394 = 0x702747A5L;
            g_79 = (void*)0;
            (*l_793) = (*l_793);
            if (((*l_793) != (void*)0))
            {
                int *l_1282 = &l_378;
                int *l_1283 = (void*)0;
                int *l_1284 = &l_378;
                int *l_1286 = &g_208.f0;
                int l_1287 = (-9L);
                int *l_1288 = &l_1265.f0;
                int *l_1289 = (void*)0;
                int *l_1290 = (void*)0;
                int l_1291 = 0x80271735L;
                int *l_1292 = &l_566.f0;
                int *l_1293 = &g_208.f0;
                int *l_1294 = &l_1291;
                int *l_1295 = &l_1265.f0;
                int *l_1296 = &g_546;
                int *l_1297 = &l_1285;
                int l_1298 = 1L;
                int *l_1299 = &g_208.f0;
                int *l_1300 = &g_23.f0;
                int *l_1301 = (void*)0;
                int *l_1302 = &g_758.f0;
                int *l_1303 = &l_378;
                int *l_1304 = (void*)0;
                int *l_1305 = &g_546;
                int *l_1306 = &l_1287;
                int *l_1308 = &l_1298;
                int *l_1309 = (void*)0;
                int *l_1310 = &l_702;
                int *l_1311 = (void*)0;
                int *l_1312 = &g_23.f0;
                int *l_1313 = &l_378;
                int *l_1314 = &l_378;
                int *l_1315 = &l_378;
                int *l_1316 = &l_1285;
                int *l_1317 = &l_1298;
                int *l_1318 = &g_546;
                int *l_1319 = &l_1265.f0;
                int *l_1320 = &g_546;
                int *l_1321 = &l_1285;
                int *l_1322 = (void*)0;
                int *l_1323 = &l_1291;
                int *l_1324 = &l_702;
                int *l_1325 = &g_23.f0;
                int *l_1326 = &l_378;
                int *l_1327 = &l_1291;
                int *l_1328 = &l_1291;
                int *l_1329 = &g_758.f0;
                int *l_1331 = &l_702;
                int *l_1332 = &l_1298;
                int *l_1333 = &l_1307;
                int *l_1334 = &l_1287;
                int *l_1335 = &l_1291;
                int *l_1336 = &g_23.f0;
                int *l_1337 = &g_758.f0;
                int *l_1340 = &g_208.f0;
                int *l_1341 = &l_1265.f0;
                int *l_1342 = &l_1330;
                int *l_1343 = (void*)0;
                int *l_1344 = &l_1265.f0;
                int *l_1345 = &l_1265.f0;
                int *l_1346 = &l_1330;
                int *l_1347 = (void*)0;
                int *l_1348 = &g_546;
                int *l_1349 = &l_1338;
                int *l_1350 = &l_702;
                int *l_1351 = &l_1298;
                int l_1352 = 1L;
                int *l_1353 = &g_23.f0;
                int *l_1354 = &l_1287;
                int *l_1355 = &g_212;
                int *l_1356 = &l_1285;
                int *l_1357 = &l_1291;
                int *l_1358 = (void*)0;
                int *l_1359 = &l_1307;
                int *l_1362 = &l_1352;
                int *l_1366 = (void*)0;
                int *l_1367 = &l_378;
                int *l_1368 = &g_23.f0;
                int *l_1370 = &l_1307;
                int *l_1371 = &l_1291;
                int *l_1372 = (void*)0;
                int *l_1374 = &l_1338;
                int *l_1375 = &l_1298;
                int *l_1378 = &l_1373;
                int *l_1379 = (void*)0;
                int *l_1380 = &g_208.f0;
                int *l_1381 = &l_566.f0;
                int *l_1384 = (void*)0;
                int *l_1385 = &l_1382;
                int *l_1386 = &g_546;
                int *l_1387 = (void*)0;
                int *l_1388 = &l_378;
                int *l_1389 = &l_1361;
                int *l_1391 = &l_1307;
                int *l_1392 = &l_1330;
                int *l_1393 = (void*)0;
                int *l_1395 = (void*)0;
                int *l_1396 = &g_1376;
                int *l_1397 = (void*)0;
                int *l_1398 = &l_1364;
                int *l_1399 = &l_1369;
                int *l_1400 = &g_212;
                int *l_1401 = &g_1376;
                int *l_1402 = &l_566.f0;
                int *l_1403 = &g_23.f0;
                union U0 *l_1411 = &g_23;
                l_1281 = &g_212;
                g_1404--;
                if (p_11)
                {
                    unsigned l_1407 = 18446744073709551615UL;
                    union U0 ******l_1410 = &g_325;
                    (*l_1315) &= ((g_49 | l_1407) == (safe_lshift_func_uint16_t_u_s((func_24(p_11, (*p_10)) || (((((void*)0 == l_1410) || p_11) > ((((((*l_1266) = func_24(((g_47 && p_11) || l_1407), (*p_10))) , p_11) && p_11) , l_1394) | l_1407)) >= 65535UL)), l_1285)));
                    return l_1411;
                }
                else
                {
                    unsigned char l_1412 = 1UL;
                    l_1412 = (*g_73);
                    return p_10;
                }
            }
            else
            {
                int l_1430 = (-10L);
                int l_1440 = (-1L);
                int l_1441 = (-2L);
                int l_1472 = 1L;
                int l_1483 = 0x855DAADBL;
                union U0 **l_1521 = &g_22;
                int *l_1523 = &l_1440;
                int *l_1524 = &l_1338;
                int *l_1525 = &l_1361;
                int *l_1526 = &l_378;
                int *l_1527 = &g_1376;
                int *l_1528 = &g_758.f0;
                int *l_1529 = (void*)0;
                int *l_1530 = (void*)0;
                int *l_1531 = &l_1307;
                int *l_1532 = &l_1377;
                int *l_1533 = (void*)0;
                int *l_1534 = &l_1285;
                int *l_1535 = &l_1363;
                int *l_1536 = &g_758.f0;
                int *l_1537 = (void*)0;
                int *l_1538 = (void*)0;
                int *l_1539 = &l_1394;
                int *l_1540 = &g_758.f0;
                int *l_1541 = &g_212;
                int *l_1542 = &l_1369;
                int *l_1543 = &g_546;
                int *l_1544 = &l_702;
                int *l_1545 = (void*)0;
                int *l_1546 = &l_1373;
                int *l_1547 = (void*)0;
                int *l_1548 = &l_1364;
                int *l_1549 = &l_1265.f0;
                int *l_1550 = &g_208.f0;
                int *l_1551 = &g_758.f0;
                int *l_1552 = &l_1361;
                int *l_1553 = &g_758.f0;
                int *l_1554 = &l_1383;
                int *l_1555 = &g_212;
                int *l_1556 = &l_1430;
                int *l_1557 = &l_702;
                int *l_1558 = &g_208.f0;
                int *l_1559 = &l_1338;
                int *l_1560 = &l_1441;
                int *l_1561 = &g_758.f0;
                int *l_1562 = &g_23.f0;
                int *l_1563 = &l_1440;
                int *l_1564 = &l_702;
                int *l_1565 = &l_1441;
                int *l_1566 = &g_546;
                int *l_1567 = &g_212;
                int *l_1568 = (void*)0;
                int *l_1569 = &g_23.f0;
                int *l_1570 = &l_1369;
                int *l_1571 = &l_1265.f0;
                int *l_1572 = (void*)0;
                int *l_1573 = &g_212;
                int *l_1574 = &l_1369;
                int *l_1575 = &l_1369;
                int *l_1576 = &l_1483;
                int *l_1577 = &g_1376;
                int *l_1578 = &l_1394;
                int *l_1579 = &l_1383;
                int *l_1580 = &l_1382;
                int *l_1581 = &l_1441;
                int *l_1582 = &l_1483;
                int *l_1583 = &l_1440;
                int *l_1584 = &l_1307;
                int *l_1585 = &l_1307;
                int *l_1586 = (void*)0;
                int *l_1587 = &l_1441;
                int *l_1588 = &g_23.f0;
                (*g_275) &= 0x1CF53C82L;
                if (p_11)
                {
                    short l_1448 = 0x0063L;
                    int l_1498 = 2L;
                    union U0 *l_1520 = (void*)0;
                    for (l_1023 = 0; (l_1023 > 2); l_1023 = safe_add_func_uint32_t_u_u(l_1023, 7))
                    {
                        int *l_1415 = &g_1376;
                        int *l_1416 = &l_1338;
                        int *l_1417 = &l_1363;
                        int *l_1418 = &l_1339;
                        int *l_1419 = (void*)0;
                        int *l_1420 = &g_1376;
                        int *l_1421 = &l_1338;
                        int *l_1422 = &l_1307;
                        int *l_1423 = &l_1265.f0;
                        unsigned l_1424 = 0x74AAAF3FL;
                        int *l_1427 = &l_378;
                        int *l_1428 = &l_1361;
                        int *l_1429 = (void*)0;
                        int *l_1431 = &g_212;
                        int *l_1432 = &l_1338;
                        int *l_1433 = (void*)0;
                        int *l_1434 = (void*)0;
                        int *l_1435 = &g_1376;
                        int *l_1436 = (void*)0;
                        int *l_1437 = &l_1430;
                        int *l_1438 = &l_1373;
                        int *l_1439 = &l_1383;
                        int *l_1442 = &l_1339;
                        int *l_1443 = &l_1382;
                        int *l_1444 = (void*)0;
                        int *l_1445 = &g_1376;
                        int *l_1446 = &g_1376;
                        int *l_1447 = (void*)0;
                        int *l_1449 = &l_1394;
                        int *l_1450 = &l_1441;
                        int *l_1451 = &g_1376;
                        int *l_1452 = (void*)0;
                        int *l_1453 = (void*)0;
                        int *l_1454 = &l_1363;
                        int *l_1455 = &l_1364;
                        int *l_1456 = &l_1265.f0;
                        int *l_1457 = &l_1394;
                        int *l_1458 = &g_758.f0;
                        int *l_1459 = &l_1382;
                        int *l_1460 = &l_1373;
                        int *l_1461 = &l_1339;
                        int *l_1462 = &l_566.f0;
                        int *l_1463 = &l_378;
                        int *l_1464 = &l_1364;
                        int *l_1465 = (void*)0;
                        int *l_1466 = &l_1363;
                        int *l_1467 = (void*)0;
                        int *l_1468 = (void*)0;
                        int *l_1469 = &l_1363;
                        int *l_1470 = &l_1373;
                        int *l_1471 = &l_1382;
                        int *l_1473 = &g_758.f0;
                        int *l_1474 = &l_1339;
                        int *l_1475 = &g_1376;
                        int *l_1476 = &l_1285;
                        int *l_1477 = &g_1376;
                        int l_1478 = 0L;
                        int *l_1479 = (void*)0;
                        int *l_1480 = &l_1441;
                        int *l_1481 = &l_1440;
                        int *l_1482 = &l_1441;
                        int *l_1484 = (void*)0;
                        int *l_1485 = (void*)0;
                        int *l_1486 = (void*)0;
                        int *l_1487 = (void*)0;
                        int *l_1488 = &l_1373;
                        int *l_1489 = &l_1430;
                        int *l_1490 = (void*)0;
                        int *l_1491 = &l_1478;
                        int *l_1492 = &l_1440;
                        int *l_1493 = &l_566.f0;
                        int *l_1494 = &l_1377;
                        int *l_1495 = &l_1377;
                        int *l_1496 = &l_1440;
                        int *l_1497 = (void*)0;
                        int *l_1499 = &l_1478;
                        int *l_1500 = &g_546;
                        int *l_1502 = &l_1441;
                        int *l_1503 = &l_1472;
                        int *l_1504 = &l_1383;
                        int *l_1505 = (void*)0;
                        int *l_1506 = &l_1361;
                        --l_1424;
                        (*l_793) = &l_1369;
                        ++g_1507;
                        (*l_1421) = l_1498;
                    }
                    if ((**l_793))
                    {
                        short l_1515 = 0xE760L;
                        l_1520 = ((safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s(((func_24((safe_add_func_int8_t_s_s(((!(l_1515 < ((l_1330 != g_482) >= (safe_lshift_func_int16_t_s_u((l_1364 = l_1515), 10))))) , (((safe_lshift_func_uint8_t_u_u(((**g_64) , ((void*)0 != &l_1280)), ((*l_1010) = 0UL))) & (*g_215)) && 0x5F2C42A4L)), p_11)), (*g_22)) ^ l_1394) > p_11))) < p_11) || p_11), g_198)) , p_10);
                    }
                    else
                    {
                        (*l_793) = (void*)0;
                    }
                }
                else
                {
                    (*l_793) = &g_546;
                    (*g_275) ^= ((*g_73) = p_11);
                    (*g_73) |= (l_1521 != l_1522);
                    return p_10;
                }
                g_1589++;
            }
        }
        else
        {
            union U0 l_1602 = {-9L};
            if ((func_35(((*g_79) > ((safe_sub_func_uint16_t_u_u(g_949, func_35(((safe_add_func_int8_t_s_s(0xC3L, 0x18L)) , 1UL)))) > 0L))) < (p_11 && (*g_73))))
            {
                int l_1596 = 0x037B96BBL;
                (**l_793) &= (((*l_797) = 65530UL) , func_35(l_1596));
                return p_10;
            }
            else
            {
                int l_1605 = 0xB4BC3B2CL;
                int *l_1656 = (void*)0;
                int *l_1657 = (void*)0;
                int *l_1658 = &g_1376;
                if (((safe_add_func_uint32_t_u_u(4294967295UL, (safe_mod_func_uint8_t_u_u(func_35(p_11), (safe_unary_minus_func_int32_t_s((l_1602 , (-5L)))))))) <= ((**l_689) = func_24(((-7L) > (0x67DAL == func_24((safe_mod_func_uint32_t_u_u(func_24(l_1605, (**l_1522)), g_268)), l_1602))), (*g_22)))))
                {
                    unsigned char *l_1608 = &g_482;
                    int l_1609 = 0xBD4A5A83L;
                    l_1609 ^= ((safe_sub_func_int16_t_s_s((g_47 > (-1L)), l_1602.f0)) | ((*l_1608) ^= ((*l_1010) &= 1UL)));
                    (*g_275) |= (0x17B05F5BL > l_1610);
                    if (((((void*)0 == g_1611) != ((&g_1365 == &l_1605) & ((((*g_79) = 0x40767DB2L) ^ (0xB3L != l_1609)) | (safe_lshift_func_uint8_t_u_u((((p_11 | p_11) || (**l_793)) , 1UL), l_1609))))) , (-1L)))
                    {
                        unsigned char l_1614 = 0xAAL;
                        ++l_1614;
                        (*l_793) = &g_1376;
                        (**l_793) = ((safe_mul_func_int8_t_s_s(p_11, (func_35(p_11) == l_1609))) & (((*l_797)--) && g_734));
                    }
                    else
                    {
                        unsigned short l_1621 = 0xD7CAL;
                        l_1621--;
                        (*g_275) |= func_35(((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_1123, (func_35(l_1605) , g_67))), 9)) <= (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((*l_1266) ^= p_11), ((safe_lshift_func_int16_t_s_u(((*l_690) &= 0xC2B3L), ((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_124 = func_24(p_11, (*p_10))), 0xE3C0D7EEL)), p_11)) & 0x3BE6L) ^ 4UL) , 0xAE45L))) && l_1621))), p_11))));
                        (*g_79) = (safe_mod_func_int32_t_s_s(l_1605, (((&p_10 != &p_10) < (**l_793)) | l_1602.f0)));
                        (*g_275) &= func_35((safe_rshift_func_uint16_t_u_u(p_11, 8)));
                    }
                }
                else
                {
                    char *l_1642 = &g_911;
                    int l_1653 = 0x59B6CEEEL;
                    int ***l_1654 = &l_793;
                    int *l_1655 = &l_1330;
                    (*g_73) |= ((p_11 <= p_11) != (((void*)0 != l_1642) , (p_11 | 65535UL)));
                    (*l_1655) ^= (safe_sub_func_uint32_t_u_u((((*l_1654) = ((+((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((func_31(g_723) , 255UL) != g_344), (safe_lshift_func_uint8_t_u_s((g_261 <= ((safe_add_func_uint32_t_u_u(g_1507, ((l_1605 & (l_1653 = ((*g_399) == (*g_399)))) && p_11))) < (-1L))), 0)))), l_1605)) , l_1605)) , &l_1281)) != &g_275), p_11));
                }
                (*l_1658) = ((*g_79) = 0xB7A2C39CL);
                if (p_11)
                {
                    (*l_793) = (void*)0;
                    l_1602.f0 ^= p_11;
                }
                else
                {
                    union U0 *l_1665 = &l_566;
                    (*g_73) = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(p_11, 15)) ^ ((void*)0 != (*g_214))), 0));
                    for (g_949 = 0; (g_949 != 59); g_949 = safe_add_func_uint8_t_u_u(g_949, 1))
                    {
                        int *l_1667 = (void*)0;
                    }
                }
                l_1602.f0 &= ((*g_73) = 3L);
            }
        }
    }
    return p_10;
}







static union U0 * func_12(unsigned short p_13, union U0 * p_14, union U0 * p_15)
{
    (*g_275) ^= (*g_79);
    (*g_73) &= (-4L);
    return (*g_64);
}







static union U0 * func_16(union U0 * p_17, union U0 * p_18)
{
    union U0 l_224 = {-1L};
    int l_248 = 5L;
    int l_254 = 0x88A0F280L;
    int l_264 = 1L;
    int l_286 = 0xA6948E95L;
    char *l_331 = (void*)0;
    int *l_340 = &g_208.f0;
    int *l_341 = &g_23.f0;
    int *l_342 = &l_264;
    int *l_343 = &l_224.f0;
    int *l_345 = (void*)0;
    int *l_346 = &l_264;
    int *l_347 = &l_254;
    int *l_348 = &l_224.f0;
    int *l_349 = (void*)0;
    int *l_350 = (void*)0;
    int *l_351 = &g_23.f0;
    int *l_352 = &l_264;
    if ((safe_sub_func_uint32_t_u_u(((l_224 , l_224.f0) != ((((*g_64) != &l_224) , (*g_73)) , (-5L))), l_224.f0)))
    {
        char l_227 = (-8L);
        unsigned short *l_228 = &g_91;
        int l_229 = 9L;
        int *l_230 = &g_208.f0;
        int *l_231 = &g_208.f0;
        int *l_232 = &l_229;
        int *l_233 = &g_208.f0;
        int *l_234 = &g_23.f0;
        int *l_235 = &l_224.f0;
        int *l_236 = &g_212;
        int *l_237 = (void*)0;
        int *l_238 = &g_212;
        int *l_239 = (void*)0;
        int *l_240 = (void*)0;
        int *l_241 = &l_224.f0;
        int *l_242 = (void*)0;
        int *l_243 = &l_224.f0;
        int *l_244 = &g_208.f0;
        int *l_245 = &l_229;
        int *l_246 = &l_229;
        int *l_247 = &g_208.f0;
        int *l_249 = &l_248;
        int *l_250 = &l_248;
        int *l_251 = &g_23.f0;
        int *l_252 = &l_224.f0;
        int *l_253 = &g_23.f0;
        int *l_255 = &l_224.f0;
        int *l_256 = &g_208.f0;
        int *l_257 = &g_23.f0;
        int *l_258 = (void*)0;
        int *l_259 = (void*)0;
        int *l_260 = &l_229;
        int *l_262 = &l_229;
        int *l_263 = &l_224.f0;
        int *l_265 = (void*)0;
        int *l_266 = (void*)0;
        int *l_267 = &l_229;
        union U0 ****l_291 = &g_63;
        l_229 = (safe_lshift_func_uint16_t_u_u(4UL, ((&g_64 == &g_64) && ((*l_228) = l_227))));
        g_268--;
        for (g_163 = 0; (g_163 < (-11)); --g_163)
        {
            unsigned char l_279 = 0x36L;
            union U0 ****l_290 = &g_63;
            int l_292 = 0xCD7A14AAL;
            unsigned char l_320 = 0xB5L;
        }
    }
    else
    {
        unsigned l_337 = 0UL;
        --l_337;
    }
    ++g_353;
    return p_17;
}







static int func_19(unsigned short p_20, union U0 * p_21)
{
    union U0 l_30 = {0x6986D6DBL};
    int *l_211 = &g_212;
    char ***l_216 = &g_214;
    union U0 *l_219 = &l_30;
    (*l_211) |= (((0x1B583DC0L >= g_7) > g_23.f0) , func_24((4294967295UL && ((func_27((l_30 , (func_31(l_30.f0) && (-1L))), p_21) , p_20) && p_20)), g_208));
    (*l_211) = (l_211 != ((((1UL == g_208.f0) < (((*l_219) = ((*g_22) = func_27((((((g_213 != l_216) , g_198) , ((func_35(g_59) > ((*l_211) = func_24(func_24((safe_mod_func_int16_t_s_s((g_23.f0 , 0x04BDL), p_20)), (*g_22)), (*g_22)))) >= g_124)) & 1L) & (*g_73)), &l_30))) , (*g_73))) ^ 4L) , l_211));
    return p_20;
}







static int func_24(unsigned p_25, union U0 p_26)
{
    int **l_209 = &g_79;
    union U0 *l_210 = &g_208;
    (*l_209) = g_79;
    l_210 = (*g_64);
    return p_26.f0;
}







static union U0 func_27(int p_28, union U0 * p_29)
{
    int l_128 = (-10L);
    int *l_129 = &l_128;
    int *l_130 = &g_23.f0;
    int *l_131 = &l_128;
    int l_132 = 0L;
    int *l_133 = &l_128;
    int *l_134 = &l_132;
    int *l_135 = &l_132;
    int *l_136 = (void*)0;
    int *l_137 = &l_132;
    int *l_138 = (void*)0;
    int *l_139 = &g_23.f0;
    int *l_140 = &l_128;
    int *l_141 = &l_132;
    int *l_142 = &l_132;
    int *l_143 = &l_128;
    int *l_144 = &g_23.f0;
    int *l_145 = &l_132;
    int *l_146 = &l_128;
    int *l_147 = &l_128;
    int *l_148 = &l_132;
    int *l_149 = &l_128;
    int *l_150 = (void*)0;
    int *l_151 = &l_128;
    int *l_152 = &l_128;
    int *l_153 = &g_23.f0;
    int *l_154 = &g_23.f0;
    int *l_155 = &l_128;
    int l_156 = (-4L);
    int *l_157 = &l_128;
    int *l_158 = &l_128;
    int *l_159 = (void*)0;
    int l_160 = 0x3AD1FF0DL;
    int *l_161 = (void*)0;
    int *l_162 = (void*)0;
    int *l_164 = &g_23.f0;
    int *l_165 = (void*)0;
    int *l_167 = &l_156;
    int *l_168 = &l_132;
    int *l_169 = &g_23.f0;
    int *l_170 = &g_23.f0;
    int *l_171 = &l_156;
    int *l_172 = &l_128;
    int *l_173 = &g_23.f0;
    int *l_174 = &l_156;
    int *l_175 = (void*)0;
    int *l_176 = &l_156;
    int *l_177 = (void*)0;
    int *l_178 = &g_23.f0;
    int *l_179 = &g_23.f0;
    int *l_180 = &l_132;
    int *l_181 = &l_128;
    int *l_182 = &l_132;
    int *l_183 = &l_128;
    int l_184 = 0xCD825BC7L;
    int *l_185 = &l_160;
    int *l_186 = &l_128;
    int *l_187 = (void*)0;
    int *l_188 = &l_184;
    int *l_189 = &l_128;
    int *l_190 = (void*)0;
    int *l_191 = &l_156;
    int *l_192 = &l_132;
    int *l_193 = &l_184;
    int l_194 = 0L;
    int *l_195 = &l_132;
    int l_196 = (-9L);
    int l_197 = 0x129AC59BL;
    int *l_204 = (void*)0;
    int **l_205 = &l_139;
    int **l_206 = &l_185;
    union U0 l_207 = {0x2D9DFC09L};
    l_128 = (g_7 != func_31(p_28));
    g_198--;
    g_201++;
    (*l_206) = (((*g_79) || (*g_79)) , ((*l_205) = l_204));
    return l_207;
}







static char func_31(short p_32)
{
    union U0 *l_39 = &g_23;
    union U0 **l_40 = &l_39;
    union U0 *l_43 = &g_23;
    union U0 **l_45 = (void*)0;
    union U0 ***l_44 = &l_45;
    unsigned char *l_46 = &g_47;
    unsigned *l_48 = &g_49;
    int l_68 = 0L;
    short *l_72 = &g_56;
    int *l_77 = &g_23.f0;
    if ((safe_mul_func_uint8_t_u_u((func_35(((*l_48) &= ((safe_add_func_uint8_t_u_u((((*l_40) = l_39) != &g_23), (safe_lshift_func_int8_t_s_s((l_43 == ((((*l_44) = &l_43) != &g_22) , (*l_45))), 5)))) ^ ((*l_46) |= g_23.f0)))) <= (((l_68 , l_68) , (void*)0) != l_48)), l_68)))
    {
        char l_71 = 1L;
        int *l_76 = (void*)0;
        unsigned **l_85 = &l_48;
        char **l_94 = (void*)0;
        char ***l_95 = &l_94;
        int *l_96 = &g_23.f0;
        int *l_97 = &l_68;
        int *l_98 = &l_68;
        int *l_99 = (void*)0;
        int *l_100 = &l_68;
        int *l_101 = &g_23.f0;
        int *l_102 = &g_23.f0;
        int *l_103 = (void*)0;
        int *l_104 = &l_68;
        int l_105 = (-3L);
        int *l_106 = &l_105;
        int *l_107 = &l_68;
        int *l_108 = (void*)0;
        int *l_109 = &l_68;
        int *l_110 = &g_23.f0;
        int l_111 = 7L;
        int *l_112 = (void*)0;
        int *l_113 = &l_105;
        int *l_114 = &l_68;
        if ((func_35((1UL ^ ((safe_mod_func_int8_t_s_s((((g_47 != (p_32 > func_35(p_32))) != 0x3BL) != p_32), ((0x0AE4L != 7UL) && l_71))) == 1UL))) | (-9L)))
        {
            union U0 ****l_83 = (void*)0;
            unsigned ***l_86 = (void*)0;
            unsigned ***l_87 = &l_85;
            if (((void*)0 != l_72))
            {
                int **l_74 = (void*)0;
                int **l_75 = &g_73;
                g_23.f0 = (((*l_75) = g_73) == (l_77 = l_76));
            }
            else
            {
                int **l_78 = &g_73;
                int **l_80 = &l_76;
                union U0 ****l_82 = &g_63;
                union U0 *****l_81 = &l_82;
                union U0 *****l_84 = &l_83;
                (*l_80) = (g_79 = ((*l_78) = g_73));
                (*g_79) &= ((((*l_81) = &g_63) == ((*l_84) = l_83)) , 0xC9D536C3L);
            }
            (*l_87) = l_85;
        }
        else
        {
            unsigned short *l_90 = &g_91;
            (*g_79) |= (safe_lshift_func_uint16_t_u_u(((void*)0 != &g_67), (++(*l_90))));
        }
        (*l_95) = l_94;
        --g_115;
        (*l_113) ^= (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0x3F75L, (0x43L != ((safe_mul_func_int16_t_s_s(((*l_72) |= g_23.f0), g_23.f0)) & p_32)))), (g_124 || ((*l_97) ^= (safe_mod_func_int32_t_s_s((*g_73), (*l_96)))))));
    }
    else
    {
        unsigned l_127 = 0x15DB8BE4L;
        return l_127;
    }
    return g_124;
}







static unsigned char func_35(unsigned p_36)
{
    int *l_50 = &g_23.f0;
    int **l_51 = &l_50;
    short *l_54 = (void*)0;
    short *l_55 = &g_56;
    union U0 l_65 = {-8L};
    (*l_51) = l_50;
    g_59 &= (((**l_51) == 0L) ^ (safe_add_func_int16_t_s_s(((*l_55) = g_47), (safe_mod_func_uint16_t_u_u(65526UL, 0x7461L)))));
    for (g_56 = (-30); (g_56 == (-5)); g_56 = safe_add_func_int16_t_s_s(g_56, 5))
    {
        union U0 ****l_62 = (void*)0;
        char *l_66 = &g_67;
        (*l_51) = (((((*l_66) |= (((g_63 = (void*)0) == &g_64) == (l_65 , g_49))) | 1L) != g_47) , (void*)0);
    }
    return g_23.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_208.f0, "g_208.f0", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_758.f0, "g_758.f0", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1154, "g_1154", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1365, "g_1365", print_hash_value);
    transparent_crc(g_1376, "g_1376", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1501, "g_1501", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1589, "g_1589", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    transparent_crc(g_1792, "g_1792", print_hash_value);
    transparent_crc(g_1855, "g_1855", print_hash_value);
    transparent_crc(g_1930, "g_1930", print_hash_value);
    transparent_crc(g_1994, "g_1994", print_hash_value);
    transparent_crc(g_1996, "g_1996", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
