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



static int g_18 = (-1L);
static char g_20 = 0x4BL;
static unsigned short g_38 = 65529UL;
static unsigned char g_49 = 246UL;
static int ** volatile g_73 = (void*)0;
static int *g_75 = &g_18;
static int ** volatile g_74 = &g_75;
static short g_78 = 0xF0D2L;
static unsigned g_82 = 1UL;
static int g_91 = 0xE433C58DL;
static int g_124 = (-1L);
static char g_170 = 0L;
static volatile short g_174 = 0x9B40L;
static volatile unsigned g_181 = 18446744073709551611UL;
static int * volatile g_204 = &g_91;
static unsigned g_207 = 4294967295UL;
static int * volatile g_209 = &g_124;
static int ** volatile g_211 = &g_75;
static volatile int g_282 = 0xB777FD19L;
static volatile int g_416 = 0xA6D5E8C4L;
static volatile unsigned char g_417 = 0xD9L;
static unsigned g_433 = 0UL;
static short g_448 = 0x634FL;
static char * const g_499 = &g_170;
static char * const volatile *g_498 = &g_499;
static int ** volatile g_509 = &g_75;
static volatile unsigned short g_565 = 0x3E66L;
static volatile unsigned short * volatile g_564 = &g_565;
static char *g_574 = (void*)0;
static int ** volatile g_629 = (void*)0;
static unsigned g_789 = 0xDDA7E193L;
static int ** volatile g_792 = &g_75;
static int * volatile g_818 = &g_91;
static int g_1018 = 0L;
static volatile short g_1036 = 0xD894L;
static volatile unsigned char g_1050 = 0x14L;
static unsigned *g_1072 = &g_82;
static unsigned **g_1071 = &g_1072;
static int * volatile g_1307 = &g_91;
static unsigned g_1333 = 1UL;
static unsigned short g_1351 = 0UL;
static int * volatile g_1357 = (void*)0;
static volatile unsigned g_1564 = 0UL;
static unsigned short *g_1593 = &g_1351;
static unsigned short **g_1592 = &g_1593;
static unsigned short **g_1596 = &g_1593;
static unsigned short g_1605 = 65531UL;
static volatile int g_1891 = (-1L);
static volatile int g_1917 = 0x56C5B437L;
static volatile char g_1919 = 0x2CL;
static volatile short g_1940 = 0x3E0BL;
static unsigned g_1945 = 0xEFC98055L;
static int * volatile g_1950 = &g_1018;
static unsigned char g_1953 = 0x15L;
static unsigned char *g_1952 = &g_1953;
static unsigned char **g_1951 = &g_1952;
static unsigned g_1960 = 4UL;
static const unsigned g_1963 = 1UL;
static int ** volatile g_2024 = (void*)0;



static unsigned func_1(void);
static int func_2(unsigned short p_3, unsigned short p_4);
static char func_6(int p_7, short p_8, char p_9, unsigned p_10, unsigned short p_11);
static short func_13(unsigned char p_14);
static int func_21(unsigned p_22, char * p_23, unsigned char p_24, unsigned short p_25, unsigned short p_26);
static char func_32(short p_33, int p_34);
static unsigned func_39(unsigned p_40);
static short func_41(char * p_42);
static char * func_55(unsigned char * p_56, char p_57);
static unsigned func_63(char p_64, unsigned short p_65, char * const p_66, char * p_67);
static unsigned func_1(void)
{
    unsigned short l_5 = 0x5010L;
    unsigned short l_17 = 65531UL;
    char *l_19 = &g_20;
    unsigned char ***l_1954 = (void*)0;
    unsigned char ***l_1955 = &g_1951;
    unsigned char **l_1957 = &g_1952;
    unsigned char ***l_1956 = &l_1957;
    unsigned char **l_1958 = &g_1952;
    unsigned *l_1959 = &g_1960;
    unsigned l_2050 = 0x08714DD8L;
    l_2050 = func_2(((((!l_5) && l_5) & (((func_6((safe_unary_minus_func_uint16_t_u(l_5)), (func_13((safe_div_func_int8_t_s_s(((*l_19) &= (l_17 & g_18)), l_5))) == (((*l_1959) = (((*l_1956) = ((*l_1955) = g_1951)) != l_1958)) , l_5)), l_17, g_1605, (**g_1592)) != 0x4FL) & l_5) == g_1963)) & l_17), l_17);
    return (*g_1072);
}







static int func_2(unsigned short p_3, unsigned short p_4)
{
    int **l_2022 = (void*)0;
    int **l_2023 = (void*)0;
    int **l_2025 = &g_75;
    char *l_2044 = (void*)0;
    char **l_2049 = &l_2044;
    char ***l_2048 = &l_2049;
    (*l_2025) = (*g_74);
    if ((g_1917 , (((**g_1596) && 1L) || p_3)))
    {
        int *l_2026 = (void*)0;
        (*l_2025) = (void*)0;
        (*l_2025) = l_2026;
    }
    else
    {
        unsigned l_2038 = 18446744073709551612UL;
        unsigned char l_2047 = 255UL;
        for (g_433 = 0; (g_433 <= 7); g_433 = safe_add_func_int8_t_s_s(g_433, 8))
        {
            int *l_2029 = &g_1018;
            unsigned *l_2030 = &g_1960;
            unsigned short l_2037 = 1UL;
            unsigned char *l_2039 = &g_49;
            int *l_2045 = (void*)0;
            int *l_2046 = &g_124;
            (*l_2029) = (*g_818);
            (*l_2046) ^= (func_63(func_32((*l_2029), (((*l_2030) = g_1050) & (p_4 & (safe_rshift_func_uint8_t_u_u(((*l_2039) = ((*g_1952) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(l_2037, (!(0x75L || ((*g_499) = l_2038))))), p_3)))), (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(func_21(((**g_1071) = (l_2038 , (((p_3 ^ 0x6FL) , p_4) < (-9L)))), l_2044, p_4, p_4, (*l_2029)), 0x972EL)), (*l_2029)))))))), (*l_2029), l_2039, &g_20) < 8UL);
            (*l_2046) = l_2047;
            if (p_4)
                continue;
        }
    }
    (*l_2048) = (void*)0;
    (*l_2025) = (void*)0;
    return (*g_818);
}







static char func_6(int p_7, short p_8, char p_9, unsigned p_10, unsigned short p_11)
{
    const unsigned *l_1962 = &g_1963;
    const unsigned **l_1961 = &l_1962;
    int *l_1964 = &g_124;
    short **l_1977 = (void*)0;
    short *l_1979 = &g_78;
    short **l_1978 = &l_1979;
    unsigned *l_1984 = &g_789;
    char **l_2001 = &g_574;
    char **l_2003 = &g_574;
    char * const l_2010 = &g_20;
    char *l_2011 = &g_20;
    int *l_2017 = (void*)0;
    int *l_2018 = &g_18;
    unsigned short ***l_2019 = &g_1592;
    int l_2020 = 0x03DAFA15L;
    int l_2021 = 0x3D93175FL;
    (*l_1964) |= (&p_10 == ((*l_1961) = (void*)0));
    for (g_1333 = (-21); (g_1333 != 27); ++g_1333)
    {
        unsigned l_1970 = 0UL;
        for (g_789 = 0; (g_789 != 8); g_789 = safe_add_func_int8_t_s_s(g_789, 1))
        {
            int *l_1969 = (void*)0;
            if ((*g_204))
                break;
            if (p_11)
                continue;
            --l_1970;
        }
    }
    if ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((*l_1978) = &p_8) == &p_8), func_13(((0UL < (g_1333 < ((safe_sub_func_uint32_t_u_u(g_1036, ((*l_1984) = g_207))) > (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((*l_1964), p_8)), (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((0x5209L & (*l_1964)), (*l_1964))) ^ (*l_1964)), p_11))))))) != (*l_1964))))), 1)))
    {
        return (**g_498);
    }
    else
    {
        char ***l_2002 = &l_2001;
        int l_2012 = (-3L);
        l_2012 = func_63(((**g_498) = (**g_498)), (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((**g_1596) = (p_11++)) <= (safe_div_func_int32_t_s_s((((*l_2002) = l_2001) != l_2003), (safe_mod_func_int32_t_s_s(p_8, (*g_209)))))), (safe_add_func_int8_t_s_s(0xD9L, (p_10 , 0x16L))))), (safe_rshift_func_uint8_t_u_u((**g_1951), (*g_1952))))), l_2010, l_2011);
    }
    l_2021 = (((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((((*l_2018) &= ((*l_1964) ^= (*g_1950))) , ((g_91 , p_8) > (&l_1961 != (void*)0))), (*g_499))), (l_2020 ^= (l_2019 != &g_1596)))) != (-8L)) , (-1L));
    return (**g_498);
}







static short func_13(unsigned char p_14)
{
    int l_27 = 6L;
    unsigned short *l_37 = &g_38;
    char *l_43 = &g_20;
    short *l_1653 = &g_448;
    char l_1948 = 0x33L;
    short l_1949 = 0xA872L;
    (*g_1950) = func_21((l_27 != (safe_add_func_int8_t_s_s((((253UL > (((*l_1653) = (safe_mod_func_int8_t_s_s(func_32(((*l_1653) = (safe_mod_func_uint32_t_u_u((g_18 <= (!((*l_37) = g_18))), func_39((!(func_41(l_43) >= func_41(&g_20))))))), l_27), l_1948))) , 0x49L)) , p_14) >= l_1948), p_14))), &l_1948, p_14, l_1949, l_1948);
    return g_1605;
}







static int func_21(unsigned p_22, char * p_23, unsigned char p_24, unsigned short p_25, unsigned short p_26)
{
    return p_22;
}







static char func_32(short p_33, int p_34)
{
    int *l_1654 = &g_124;
    int *l_1655 = (void*)0;
    int *l_1656 = &g_18;
    int *l_1657 = &g_124;
    int *l_1658 = &g_18;
    int *l_1659 = &g_124;
    int *l_1660 = &g_1018;
    int *l_1661 = &g_124;
    int *l_1662 = &g_1018;
    int l_1663 = 0x54B269CAL;
    int *l_1664 = &g_18;
    int *l_1665 = (void*)0;
    int *l_1666 = &l_1663;
    int *l_1667 = &g_124;
    int *l_1668 = (void*)0;
    int *l_1669 = &l_1663;
    int *l_1670 = &g_91;
    int *l_1671 = &g_91;
    int *l_1672 = &g_91;
    int *l_1673 = &g_91;
    int *l_1674 = &l_1663;
    int *l_1675 = &g_18;
    int *l_1676 = (void*)0;
    int *l_1677 = (void*)0;
    char l_1678 = (-6L);
    int *l_1679 = &g_18;
    int *l_1680 = &g_18;
    int *l_1681 = &g_18;
    int *l_1682 = &g_18;
    int *l_1683 = &g_1018;
    int *l_1684 = &l_1663;
    int l_1685 = 0x258D51E0L;
    int *l_1686 = (void*)0;
    int *l_1687 = &g_18;
    int *l_1688 = &l_1685;
    int *l_1689 = &g_1018;
    int *l_1690 = &g_91;
    int *l_1691 = &g_18;
    int *l_1692 = &l_1663;
    int *l_1693 = &g_1018;
    unsigned l_1694 = 0xBF68A25BL;
    int *l_1697 = &g_18;
    int *l_1698 = &l_1663;
    int *l_1699 = &g_124;
    int *l_1700 = &g_18;
    int *l_1701 = &g_1018;
    int *l_1702 = &g_18;
    int *l_1703 = &g_1018;
    int *l_1704 = &g_1018;
    int *l_1705 = &l_1685;
    int *l_1706 = &g_1018;
    int *l_1707 = &g_1018;
    int *l_1708 = &g_18;
    int *l_1709 = &g_18;
    int *l_1710 = &l_1685;
    int *l_1711 = (void*)0;
    int *l_1712 = &g_91;
    int *l_1713 = &g_1018;
    int *l_1714 = &g_18;
    int *l_1715 = &l_1663;
    int *l_1716 = &l_1685;
    int *l_1717 = (void*)0;
    int *l_1718 = &g_124;
    int *l_1719 = &g_1018;
    int *l_1720 = &l_1663;
    int *l_1721 = &l_1685;
    int *l_1722 = (void*)0;
    int *l_1723 = &l_1663;
    int *l_1724 = &g_18;
    int *l_1725 = (void*)0;
    int *l_1726 = (void*)0;
    int *l_1727 = &g_91;
    int *l_1728 = &g_91;
    int *l_1729 = &g_1018;
    int *l_1730 = &g_124;
    int *l_1731 = &l_1663;
    int *l_1732 = &g_18;
    int *l_1733 = &g_1018;
    int *l_1734 = &g_91;
    int *l_1735 = &l_1663;
    int *l_1736 = &l_1685;
    int *l_1737 = (void*)0;
    int *l_1738 = &g_124;
    int *l_1739 = &g_91;
    int *l_1740 = &l_1663;
    int *l_1741 = &g_18;
    int *l_1742 = &l_1685;
    int *l_1743 = &l_1663;
    int *l_1744 = &g_124;
    int *l_1745 = &l_1685;
    int *l_1746 = &g_124;
    int l_1747 = 0x0A4306EEL;
    int *l_1748 = &g_1018;
    int *l_1749 = &l_1663;
    int *l_1750 = &g_1018;
    int *l_1751 = &g_18;
    int *l_1752 = (void*)0;
    int *l_1753 = &l_1663;
    int *l_1754 = (void*)0;
    int *l_1755 = &l_1663;
    int *l_1756 = &g_124;
    int *l_1757 = &l_1747;
    int l_1758 = 0xA5FD384EL;
    int *l_1759 = (void*)0;
    int *l_1760 = (void*)0;
    int *l_1761 = &g_18;
    int *l_1762 = &g_18;
    int *l_1763 = &l_1747;
    int *l_1764 = &l_1747;
    int *l_1765 = (void*)0;
    int *l_1766 = &l_1758;
    int *l_1767 = &g_18;
    int l_1768 = 0x7CED7C15L;
    int *l_1769 = &l_1685;
    int *l_1770 = &l_1758;
    int *l_1771 = (void*)0;
    int *l_1772 = (void*)0;
    int *l_1773 = (void*)0;
    int *l_1774 = &g_124;
    int *l_1775 = &l_1663;
    int *l_1776 = &g_1018;
    int l_1777 = 0x7D5B5312L;
    int *l_1778 = &g_1018;
    int *l_1779 = (void*)0;
    int *l_1780 = &l_1768;
    int *l_1781 = &l_1768;
    int *l_1782 = &l_1768;
    int *l_1783 = &l_1663;
    int *l_1784 = &g_18;
    int *l_1785 = &l_1758;
    int *l_1786 = &l_1747;
    int *l_1787 = &l_1777;
    int l_1788 = 0xA3B731A7L;
    int *l_1789 = &g_124;
    int l_1790 = 0L;
    int *l_1791 = &l_1685;
    int *l_1792 = &g_18;
    int *l_1793 = &l_1788;
    int *l_1794 = &l_1777;
    int *l_1795 = &l_1758;
    int *l_1796 = &l_1788;
    int *l_1797 = &l_1685;
    int *l_1798 = &l_1790;
    int *l_1799 = &g_124;
    int *l_1800 = &g_124;
    int *l_1801 = (void*)0;
    int *l_1802 = &g_124;
    int *l_1803 = &l_1790;
    int *l_1804 = &l_1790;
    int *l_1805 = &l_1685;
    int *l_1806 = &l_1747;
    int *l_1807 = &l_1790;
    int *l_1808 = &g_124;
    int l_1809 = 1L;
    int *l_1810 = &l_1758;
    int *l_1811 = &l_1685;
    int *l_1812 = &g_18;
    int *l_1813 = &g_18;
    int *l_1814 = &l_1788;
    int *l_1815 = (void*)0;
    int *l_1816 = &l_1663;
    int *l_1817 = &l_1788;
    int *l_1818 = &l_1768;
    int *l_1819 = &l_1758;
    int *l_1820 = (void*)0;
    int *l_1821 = &l_1747;
    int *l_1822 = &l_1788;
    int l_1823 = 0xED69D887L;
    int *l_1824 = &l_1790;
    int *l_1825 = &l_1788;
    int *l_1826 = &l_1768;
    int *l_1827 = &g_1018;
    int *l_1828 = &l_1663;
    int *l_1829 = &l_1663;
    int l_1830 = 0xE38688C5L;
    int *l_1831 = &l_1663;
    int *l_1832 = &g_124;
    int *l_1833 = (void*)0;
    int *l_1834 = &l_1758;
    int *l_1835 = (void*)0;
    int *l_1836 = &l_1823;
    int *l_1837 = &l_1777;
    int *l_1838 = &l_1768;
    int *l_1839 = &l_1685;
    int *l_1840 = &l_1830;
    int *l_1841 = &l_1685;
    int l_1842 = 1L;
    int *l_1843 = (void*)0;
    int *l_1844 = &l_1788;
    int *l_1845 = &l_1685;
    int *l_1846 = &l_1842;
    int *l_1847 = &g_1018;
    int l_1848 = (-1L);
    int *l_1849 = &l_1842;
    int *l_1850 = &l_1747;
    int *l_1851 = &l_1747;
    int *l_1852 = &l_1768;
    int *l_1853 = &l_1758;
    int *l_1854 = &l_1768;
    int *l_1855 = &l_1790;
    int *l_1856 = &l_1790;
    int *l_1857 = &l_1788;
    int *l_1858 = &l_1747;
    int *l_1859 = &l_1747;
    int l_1860 = 0L;
    int l_1861 = 7L;
    int l_1862 = (-7L);
    int *l_1863 = &g_18;
    int *l_1864 = &l_1788;
    int *l_1865 = &l_1823;
    int l_1866 = 0x50172176L;
    int l_1867 = 0x152780BDL;
    int *l_1868 = &g_18;
    int *l_1869 = (void*)0;
    int l_1870 = 0L;
    int *l_1871 = (void*)0;
    int l_1872 = 0x93553860L;
    int *l_1873 = &l_1866;
    int *l_1874 = &l_1777;
    int *l_1875 = &g_91;
    int *l_1876 = &l_1848;
    int *l_1877 = &g_18;
    int l_1878 = 0xD6031EF9L;
    int *l_1879 = &g_1018;
    int *l_1880 = &l_1872;
    int *l_1881 = &g_1018;
    int *l_1882 = &g_124;
    int *l_1883 = &g_1018;
    int *l_1884 = &l_1685;
    int *l_1885 = &l_1663;
    int l_1886 = 0xE190B459L;
    int *l_1887 = &l_1861;
    int *l_1888 = (void*)0;
    int l_1889 = 0xF231FDA3L;
    int *l_1890 = &l_1758;
    int *l_1892 = (void*)0;
    int *l_1893 = &l_1878;
    int *l_1894 = (void*)0;
    int *l_1895 = (void*)0;
    int *l_1896 = (void*)0;
    int *l_1897 = &l_1866;
    int *l_1898 = &l_1777;
    int *l_1899 = &l_1867;
    int *l_1900 = &g_124;
    int *l_1901 = (void*)0;
    int *l_1902 = &g_91;
    int *l_1903 = &l_1842;
    int *l_1904 = &g_91;
    int *l_1905 = &l_1870;
    int *l_1906 = &l_1848;
    int *l_1907 = &l_1861;
    int l_1908 = 0xC14EEA24L;
    int *l_1909 = (void*)0;
    int *l_1910 = &g_18;
    int l_1911 = 0L;
    int *l_1912 = &g_124;
    int *l_1913 = (void*)0;
    int l_1914 = (-9L);
    int *l_1915 = &g_18;
    int l_1916 = (-2L);
    int *l_1918 = &l_1758;
    int *l_1920 = (void*)0;
    int *l_1921 = (void*)0;
    int *l_1922 = &l_1663;
    int *l_1923 = &l_1747;
    int l_1924 = (-1L);
    int *l_1925 = &l_1777;
    int *l_1926 = &l_1777;
    int *l_1927 = &l_1916;
    int *l_1928 = &g_1018;
    int l_1929 = (-5L);
    int *l_1930 = &l_1916;
    int *l_1931 = &l_1870;
    int *l_1932 = &l_1685;
    int *l_1933 = &g_124;
    int *l_1934 = &l_1790;
    int *l_1935 = &l_1768;
    int *l_1936 = &g_91;
    int *l_1937 = (void*)0;
    int *l_1938 = &g_124;
    int *l_1939 = (void*)0;
    int *l_1941 = &l_1916;
    int *l_1942 = &l_1768;
    int *l_1943 = (void*)0;
    int *l_1944 = &l_1870;
    ++l_1694;
    g_1945--;
    return p_34;
}







static unsigned func_39(unsigned p_40)
{
    unsigned char *l_48 = &g_49;
    int l_52 = 0x08FAA83FL;
    unsigned l_284 = 4294967288UL;
    unsigned l_302 = 0UL;
    int l_366 = 0x7535322EL;
    int l_367 = 1L;
    unsigned l_454 = 0xE361AB7BL;
    char *l_458 = &g_20;
    short l_607 = 1L;
    char *l_609 = &g_20;
    int l_667 = (-1L);
    int l_685 = 0x55635CD5L;
    int l_690 = 0L;
    int l_705 = (-1L);
    int l_709 = 0xD0341DB6L;
    int l_713 = 0xD6039CACL;
    int l_716 = 0xF5C31C67L;
    int l_718 = 0L;
    int l_724 = 0x919CC3F2L;
    int l_737 = (-1L);
    int l_755 = 0x22C57D97L;
    char l_795 = 0x38L;
    unsigned l_821 = 0x9E535819L;
    int l_917 = 0x5C5FE19EL;
    int l_994 = 0x27F1656DL;
    int l_1012 = 0x84A117D4L;
    int l_1031 = 1L;
    int l_1049 = 0x9E87A243L;
    unsigned **l_1075 = &g_1072;
    unsigned ** const l_1076 = &g_1072;
    unsigned char l_1299 = 0x80L;
    char * const l_1377 = (void*)0;
    char **l_1642 = &g_574;
    unsigned short *l_1649 = &g_1605;
    int *l_1650 = (void*)0;
    int *l_1651 = (void*)0;
    int *l_1652 = &g_1018;
    if ((l_52 = (safe_div_func_int16_t_s_s(p_40, (safe_unary_minus_func_uint16_t_u((func_41(&g_20) == (++(*l_48)))))))))
    {
        unsigned char *l_60 = &g_49;
        int l_76 = (-7L);
        short *l_77 = &g_78;
        unsigned *l_79 = (void*)0;
        unsigned *l_80 = (void*)0;
        unsigned *l_81 = &g_82;
        int *l_205 = &g_91;
        int l_234 = 0x9291112FL;
        int l_278 = 0x4A526252L;
        int l_404 = 0xF3864CD2L;
        int l_422 = 0x373CEC42L;
        unsigned short l_480 = 0xF461L;
        char **l_503 = &l_458;
        int l_576 = 0x95C905C7L;
        int l_610 = 6L;
        int l_619 = 0x73957556L;
        unsigned short *l_624 = &l_480;
        int **l_630 = &g_75;
        int *l_631 = &l_619;
        int *l_632 = &l_366;
        int *l_633 = &g_91;
        int *l_634 = &l_404;
        int *l_635 = &l_52;
        int *l_636 = &l_234;
        int *l_637 = &l_404;
        int *l_638 = (void*)0;
        int *l_639 = &l_619;
        int *l_640 = &g_91;
        int *l_641 = &l_76;
        int *l_642 = &l_422;
        int *l_643 = &l_76;
        int *l_644 = &l_422;
        int *l_645 = (void*)0;
        int *l_646 = &l_619;
        int *l_647 = &g_124;
        int *l_648 = (void*)0;
        int *l_649 = &l_404;
        int *l_650 = &g_91;
        int *l_651 = (void*)0;
        int *l_652 = &l_619;
        int *l_653 = &l_234;
        int *l_654 = &l_619;
        int *l_655 = &l_234;
        int *l_656 = &l_366;
        int *l_657 = &l_52;
        int *l_658 = &l_367;
        int *l_659 = (void*)0;
        int *l_660 = &l_52;
        int *l_661 = &l_76;
        int *l_662 = &l_367;
        int *l_663 = (void*)0;
        int *l_664 = (void*)0;
        int *l_665 = &l_52;
        int *l_666 = (void*)0;
        int *l_668 = &l_422;
        int *l_669 = &l_422;
        int *l_670 = &l_422;
        int *l_671 = &l_52;
        int *l_672 = &l_367;
        int *l_673 = &l_76;
        int *l_674 = &l_367;
        int *l_675 = (void*)0;
        int *l_676 = &g_124;
        int *l_677 = &l_422;
        int *l_678 = &l_667;
        int *l_679 = &l_278;
        int *l_680 = &l_576;
        int *l_681 = &g_124;
        int *l_682 = (void*)0;
        int *l_683 = &l_278;
        int *l_684 = (void*)0;
        int *l_686 = &l_422;
        int *l_687 = (void*)0;
        int *l_688 = (void*)0;
        int *l_689 = &g_91;
        int *l_691 = &l_76;
        int *l_692 = &l_76;
        int *l_693 = &l_576;
        int *l_694 = (void*)0;
        int *l_695 = (void*)0;
        int *l_696 = &l_367;
        int *l_697 = &l_690;
        int *l_698 = &l_404;
        int *l_699 = &l_366;
        int *l_700 = &l_667;
        int *l_701 = (void*)0;
        int *l_702 = &l_76;
        int *l_703 = &l_404;
        int *l_704 = &l_667;
        int *l_706 = (void*)0;
        int l_707 = 6L;
        int *l_708 = (void*)0;
        int *l_710 = &l_422;
        int *l_711 = &l_404;
        int *l_712 = &l_707;
        int *l_714 = &l_707;
        int *l_715 = &l_713;
        int *l_717 = &l_76;
        int l_719 = (-9L);
        int *l_720 = (void*)0;
        int *l_721 = (void*)0;
        int *l_722 = &l_366;
        int *l_723 = &l_705;
        int *l_725 = &l_404;
        int *l_726 = &l_619;
        int *l_727 = &l_716;
        int *l_728 = &l_234;
        int *l_729 = &l_719;
        int *l_730 = &l_76;
        int *l_731 = (void*)0;
        int *l_732 = &l_76;
        int *l_733 = &l_709;
        int *l_734 = &l_707;
        int *l_735 = &l_685;
        int *l_736 = (void*)0;
        int *l_738 = &l_709;
        int *l_739 = &l_278;
        int *l_740 = &l_576;
        int *l_741 = &l_705;
        int *l_742 = &l_404;
        int *l_743 = &l_719;
        int *l_744 = (void*)0;
        int *l_745 = &l_278;
        int *l_746 = &l_234;
        int *l_747 = &l_713;
        int *l_748 = &g_91;
        int *l_749 = &l_367;
        int *l_750 = &g_124;
        int *l_751 = &l_716;
        int *l_752 = (void*)0;
        int *l_753 = &l_707;
        int l_754 = (-3L);
        int *l_756 = (void*)0;
        int *l_757 = (void*)0;
        int *l_758 = &l_713;
        int *l_759 = &l_754;
        int *l_760 = &l_367;
        int *l_761 = &l_52;
        int *l_762 = &l_690;
        int *l_763 = (void*)0;
        int *l_764 = &l_755;
        int *l_765 = &l_690;
        int *l_766 = (void*)0;
        int *l_767 = &l_404;
        int *l_768 = &g_124;
        int *l_769 = &l_422;
        int *l_770 = &l_755;
        int *l_771 = (void*)0;
        int *l_772 = &l_719;
        int *l_773 = &l_713;
        int *l_774 = &l_576;
        int *l_775 = &l_685;
        int *l_776 = (void*)0;
        int *l_777 = &l_685;
        int *l_778 = (void*)0;
        int *l_779 = &l_705;
        int l_780 = 0xE666A5D6L;
        int *l_781 = &l_76;
        int *l_782 = &l_718;
        int l_783 = (-7L);
        int *l_784 = &l_422;
        int *l_785 = (void*)0;
        int *l_786 = &l_780;
        int l_787 = 0x75332D84L;
        int l_788 = 0x56E4C112L;
        if (((*l_205) = (safe_rshift_func_int16_t_s_s(func_41(func_55(&g_49, ((safe_rshift_func_int16_t_s_s((&g_49 == l_60), 5)) , (safe_lshift_func_uint16_t_u_u((((*l_81) = (p_40 >= (((*l_77) = ((l_76 = func_63(l_52, p_40, &g_20, &g_20)) && g_20)) , 0L))) , l_76), l_52))))), 9))))
        {
            unsigned l_212 = 1UL;
            int l_216 = 0x4D0EF1DBL;
            int l_292 = 0x1E45C98EL;
            char l_309 = (-5L);
            int l_362 = 0L;
            unsigned l_363 = 18446744073709551608UL;
            int l_568 = 0x4CC2D40BL;
            unsigned char l_598 = 0x39L;
            char * const l_608 = &g_170;
            if (((g_82 | 0x30B0L) , p_40))
            {
                unsigned *l_206 = &g_207;
                int *l_208 = (void*)0;
                (*g_209) |= ((*l_205) & ((*l_206) = p_40));
                (*l_205) = (-10L);
            }
            else
            {
                return g_174;
            }
            if (p_40)
            {
                int *l_210 = &g_18;
                char *l_213 = (void*)0;
                char **l_214 = (void*)0;
                char **l_215 = &l_213;
                int l_298 = (-5L);
                int l_368 = (-7L);
                int l_414 = (-2L);
                int *l_459 = &l_216;
                int *l_460 = (void*)0;
                int *l_461 = &l_216;
                int *l_462 = (void*)0;
                int *l_463 = &g_124;
                int *l_464 = &l_362;
                int *l_465 = &l_278;
                int *l_466 = &g_91;
                int *l_467 = (void*)0;
                int *l_468 = &l_298;
                int *l_469 = &l_362;
                int *l_470 = &l_234;
                int *l_471 = &l_234;
                int *l_472 = &l_76;
                int *l_473 = &l_76;
                int *l_474 = (void*)0;
                char l_475 = 0xF1L;
                int *l_476 = &g_91;
                int *l_477 = &l_278;
                int *l_478 = &g_91;
                int *l_479 = &l_52;
                (*g_211) = l_210;
                if (func_41(((*l_215) = l_213)))
                {
                    int *l_217 = &l_76;
                    int *l_218 = &l_76;
                    int *l_219 = &g_124;
                    int *l_220 = (void*)0;
                    int *l_221 = &g_91;
                    int *l_222 = (void*)0;
                    int *l_223 = (void*)0;
                    int *l_224 = &l_76;
                    int *l_225 = &l_216;
                    int *l_226 = (void*)0;
                    int *l_227 = &l_216;
                    int *l_228 = &l_76;
                    int *l_229 = &g_124;
                    int *l_230 = &l_216;
                    int *l_231 = &g_124;
                    int *l_232 = &g_124;
                    int *l_233 = &l_76;
                    int l_235 = 0x574F060BL;
                    int *l_236 = &g_91;
                    int *l_237 = (void*)0;
                    int l_238 = 0xA824672FL;
                    int *l_239 = &l_216;
                    int *l_240 = &l_76;
                    int *l_241 = (void*)0;
                    int *l_242 = &l_52;
                    int *l_243 = &l_238;
                    int *l_244 = &g_124;
                    int *l_245 = &l_52;
                    int *l_246 = &l_52;
                    int *l_247 = (void*)0;
                    int *l_248 = &l_235;
                    int *l_249 = &g_124;
                    int *l_250 = &l_238;
                    int *l_251 = &g_124;
                    int *l_252 = &l_238;
                    int *l_253 = &l_76;
                    int *l_254 = &l_216;
                    int *l_255 = &l_76;
                    int *l_256 = &l_76;
                    int *l_257 = &l_52;
                    int *l_258 = &l_52;
                    int *l_259 = &g_124;
                    int *l_260 = (void*)0;
                    int *l_261 = &g_124;
                    int *l_262 = (void*)0;
                    int *l_263 = &l_234;
                    int *l_264 = (void*)0;
                    int *l_265 = &l_234;
                    int *l_266 = &g_124;
                    int *l_267 = &g_91;
                    int *l_268 = &g_91;
                    int *l_269 = &g_124;
                    int *l_270 = (void*)0;
                    int *l_271 = &l_76;
                    int *l_272 = &l_238;
                    int *l_273 = (void*)0;
                    int *l_274 = &l_52;
                    int *l_275 = (void*)0;
                    int *l_276 = &l_234;
                    int *l_277 = &l_238;
                    int *l_279 = (void*)0;
                    int *l_280 = &l_216;
                    int *l_281 = (void*)0;
                    int l_283 = 0x25C1C26EL;
                    --l_284;
                    for (l_278 = 1; (l_278 > (-15)); l_278 = safe_sub_func_uint8_t_u_u(l_278, 6))
                    {
                        unsigned l_289 = 0UL;
                        ++l_289;
                        (*l_242) = l_292;
                    }
                    (*l_257) &= (safe_rshift_func_uint16_t_u_u(p_40, 3));
                    (*l_272) &= 1L;
                }
                else
                {
                    int l_295 = 0L;
                    int l_408 = 0L;
                    short l_420 = (-10L);
                    int l_421 = 0x849BAEF5L;
                    int l_425 = 1L;
                    if (l_295)
                    {
                        int *l_296 = &l_216;
                        int *l_297 = (void*)0;
                        int *l_299 = &g_124;
                        int *l_300 = (void*)0;
                        int *l_301 = (void*)0;
                        l_302++;
                    }
                    else
                    {
                        int *l_305 = &l_216;
                        int l_306 = 0L;
                        int *l_307 = &l_76;
                        int *l_308 = &l_216;
                        int *l_310 = &g_124;
                        int *l_311 = &l_216;
                        int *l_312 = &l_234;
                        int *l_313 = &l_234;
                        int *l_314 = &l_234;
                        int *l_315 = (void*)0;
                        int *l_316 = &g_91;
                        int *l_317 = &l_278;
                        int *l_318 = &l_278;
                        int *l_319 = (void*)0;
                        int *l_320 = &l_234;
                        int *l_321 = &g_91;
                        int *l_322 = &g_91;
                        int *l_323 = &g_124;
                        int *l_324 = (void*)0;
                        int *l_325 = &l_306;
                        int *l_326 = (void*)0;
                        int *l_327 = &l_295;
                        int *l_328 = &l_234;
                        int *l_329 = &l_52;
                        int *l_330 = &l_298;
                        int *l_331 = &l_295;
                        int *l_332 = &l_295;
                        int *l_333 = &g_124;
                        int *l_334 = (void*)0;
                        int *l_335 = &l_52;
                        int *l_336 = (void*)0;
                        int *l_337 = &l_298;
                        int *l_338 = &l_76;
                        int *l_339 = &l_76;
                        int *l_340 = &l_234;
                        int *l_341 = &l_52;
                        int l_342 = 0x30D89702L;
                        int *l_343 = &l_295;
                        int *l_344 = &l_52;
                        int *l_345 = &l_278;
                        int *l_346 = &l_52;
                        int *l_347 = &l_295;
                        int *l_348 = &l_342;
                        int *l_349 = (void*)0;
                        int l_350 = 1L;
                        int *l_351 = &l_298;
                        int *l_352 = &g_91;
                        int *l_353 = &g_91;
                        int *l_354 = &l_216;
                        int *l_355 = &l_350;
                        int *l_356 = &g_124;
                        int *l_357 = &l_216;
                        int *l_358 = &l_350;
                        int *l_359 = &l_76;
                        int *l_360 = &l_234;
                        int *l_361 = &l_234;
                        int *l_369 = &l_278;
                        int *l_370 = (void*)0;
                        int *l_371 = &l_278;
                        int *l_372 = &l_342;
                        int *l_373 = (void*)0;
                        int *l_374 = &l_367;
                        int *l_375 = &g_124;
                        int *l_376 = &l_342;
                        int *l_377 = &l_362;
                        int *l_378 = &l_298;
                        int *l_379 = &l_362;
                        int *l_380 = (void*)0;
                        int *l_381 = &g_91;
                        int *l_382 = (void*)0;
                        int *l_383 = &l_362;
                        int *l_384 = &l_367;
                        int *l_385 = &l_362;
                        int *l_386 = &l_295;
                        int *l_387 = (void*)0;
                        int *l_388 = (void*)0;
                        int *l_389 = &g_91;
                        int *l_390 = &l_350;
                        int *l_391 = &l_306;
                        int *l_392 = &g_124;
                        int *l_393 = &l_295;
                        int *l_394 = &l_295;
                        int *l_395 = &l_342;
                        int *l_396 = &g_91;
                        int *l_397 = &l_298;
                        int *l_398 = &g_124;
                        int *l_399 = &l_278;
                        int *l_400 = &l_76;
                        int *l_401 = &l_362;
                        int *l_402 = &l_295;
                        int *l_403 = &g_91;
                        int *l_405 = &l_216;
                        int *l_406 = (void*)0;
                        int *l_407 = &l_295;
                        int *l_409 = &l_295;
                        int *l_410 = (void*)0;
                        int *l_411 = &l_278;
                        int *l_412 = &l_76;
                        int *l_413 = &l_367;
                        int *l_415 = &l_306;
                        int *l_423 = (void*)0;
                        int *l_424 = (void*)0;
                        int *l_426 = &l_422;
                        int *l_427 = &l_295;
                        int *l_428 = &l_404;
                        int *l_429 = &l_76;
                        int *l_430 = &l_278;
                        int *l_431 = &l_306;
                        int *l_432 = &l_295;
                        l_363++;
                        g_417++;
                        --g_433;
                        (*l_205) ^= ((*l_385) = (**g_211));
                    }
                    return (*l_210);
                }
                for (l_366 = 0; (l_366 <= (-2)); l_366--)
                {
                    unsigned char l_449 = 0xE8L;
                    int l_455 = 0L;
                    for (l_298 = 0; (l_298 < 10); l_298++)
                    {
                        char *l_452 = &g_170;
                        int l_453 = (-7L);
                        l_216 &= (safe_sub_func_int16_t_s_s(((*l_77) = (func_41(&g_20) , (p_40 & (((safe_add_func_uint8_t_u_u((((*l_205) = ((safe_add_func_uint8_t_u_u(((((p_40 > (l_77 != l_77)) <= p_40) , (void*)0) == ((g_448 = ((*l_81) |= (((**g_74) <= (*g_75)) != p_40))) , &l_309)), g_433)) > l_362)) , 0x22L), (*l_210))) == l_302) && l_449)))), l_449));
                        (*l_205) = (safe_mod_func_int16_t_s_s(func_41(((**g_211) , l_452)), l_453));
                        if (l_363)
                            continue;
                    }
                    (*l_205) = ((p_40 , (((l_309 | 247UL) > (l_455 = (0x81L & l_454))) && p_40)) & (((safe_mod_func_uint32_t_u_u((l_212 >= l_366), l_362)) != p_40) >= p_40));
                    (*l_205) &= func_41((l_458 = (void*)0));
                }
                l_480++;
            }
            else
            {
                unsigned l_493 = 0xD337FFADL;
                char **l_500 = &l_458;
                char ***l_501 = (void*)0;
                char ***l_502 = (void*)0;
                unsigned short *l_504 = (void*)0;
                unsigned short *l_505 = (void*)0;
                unsigned short *l_506 = &l_480;
                int l_546 = 0xD6970CD7L;
                unsigned l_553 = 0x8969E618L;
                l_366 |= ((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0x2127L, 4)), (l_81 != (void*)0))), 2)) || ((*l_458) &= p_40));
                if (((*l_205) = (((*l_48) = (*l_205)) <= (func_63((((&l_309 == &g_170) >= ((1L >= ((**g_498) ^= (((*l_506) = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(g_181, g_124)) & l_493), (safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((g_498 == (l_503 = l_500)) >= g_207), 0x4BL)) > g_207), p_40))))) || p_40))) , 0UL)) < g_124), l_493, l_60, &g_20) | g_82))))
                {
                    int l_507 = (-3L);
                    unsigned *l_508 = &g_433;
                    (*l_205) = l_284;
                    l_362 = ((+((l_454 < ((0xDF239672L >= ((*l_205) = l_507)) < (&g_498 == (p_40 , &l_500)))) ^ ((*l_508) = ((p_40 > 1L) , 4294967288UL)))) | 0x0E17L);
                    (*g_509) = &l_278;
                }
                else
                {
                    int *l_510 = &l_362;
                    int *l_511 = &l_362;
                    int *l_512 = &l_76;
                    int *l_513 = &l_216;
                    int *l_514 = &l_366;
                    int *l_515 = (void*)0;
                    int *l_516 = &l_367;
                    int *l_517 = &g_124;
                    int *l_518 = (void*)0;
                    int *l_519 = &l_234;
                    int *l_520 = &l_362;
                    int *l_521 = &l_234;
                    int *l_522 = &l_366;
                    int *l_523 = &g_91;
                    int *l_524 = &l_278;
                    int *l_525 = &l_234;
                    int *l_526 = &l_362;
                    int *l_527 = (void*)0;
                    int *l_528 = &l_404;
                    int *l_529 = (void*)0;
                    int *l_530 = (void*)0;
                    int *l_531 = &l_366;
                    int *l_532 = &l_216;
                    int *l_533 = &l_367;
                    int *l_534 = (void*)0;
                    int *l_535 = &l_278;
                    int *l_536 = &l_362;
                    int *l_537 = &l_367;
                    int *l_538 = &l_367;
                    int *l_539 = &l_216;
                    int *l_540 = &l_216;
                    int *l_541 = &l_362;
                    int *l_542 = &g_124;
                    int *l_543 = &l_362;
                    int *l_544 = &l_52;
                    int *l_545 = &l_362;
                    int *l_547 = (void*)0;
                    int *l_548 = &l_52;
                    int *l_549 = &l_216;
                    int *l_550 = &l_234;
                    int *l_551 = &l_216;
                    int *l_552 = &l_278;
                    ++l_553;
                }
                if (((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_505 == (((safe_sub_func_int32_t_s_s(((*l_205) &= p_40), (func_41(((*l_503) = &l_309)) ^ 0x0C08L))) , 1UL) , g_564)), ((+3UL) <= ((safe_lshift_func_int16_t_s_s(func_41(&g_170), p_40)) > g_207)))) == g_207), l_568)), g_433)) <= 252UL))
                {
                    unsigned l_569 = 0x2E2028FAL;
                    char *l_575 = &g_170;
                    int l_577 = 0x1A30BC3BL;
                    unsigned *l_586 = &l_493;
                    short l_597 = 0xCD76L;
                    l_577 = (l_569 >= (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(l_569, p_40)) , (((func_63((&g_448 != &g_78), (*g_564), (*l_503), (((func_41((g_574 = &g_20)) , &g_499) != &g_499) , l_575)) | g_78) ^ p_40) >= l_576)), p_40)));
                    (*l_205) = (safe_mod_func_int8_t_s_s(((**g_498) = ((*g_574) = ((func_63((safe_add_func_int8_t_s_s(((((g_20 <= ((safe_rshift_func_int16_t_s_u(9L, 10)) >= (~((p_40 ^ (safe_rshift_func_int16_t_s_u(((func_41(&g_20) >= ((++(*l_586)) || ((safe_sub_func_int8_t_s_s((*l_205), (l_569 < (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((0x68B1L && (safe_add_func_uint16_t_u_u(((*l_506) = l_597), 0x643AL))), 1UL)), 0xC93DL))))) , l_577))) == 1UL), (*g_564)))) || g_124)))) > g_91) && (*l_205)) ^ p_40), 0xC7L)), g_433, &g_170, l_575) , g_124) && l_598))), g_91));
                }
                else
                {
                    unsigned l_599 = 0x585E5724L;
                    (*l_205) ^= l_599;
                }
            }
            for (g_82 = 17; (g_82 < 22); ++g_82)
            {
                unsigned l_602 = 0xE3E00FD4L;
                (*l_205) = (l_602 >= (p_40 || (safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(func_63((p_40 || g_78), l_607, l_608, (p_40 , l_609)), 0x6949L)), g_49))));
            }
            (*l_205) = ((void*)0 != &l_309);
        }
        else
        {
            unsigned **l_611 = &l_81;
            unsigned **l_612 = &l_80;
            (*l_205) = l_610;
            (*l_205) |= (1UL ^ (p_40 == (((*l_612) = ((*l_611) = &p_40)) != (void*)0)));
        }
        (*l_205) &= ((((*l_48)--) , g_174) || (safe_mod_func_int32_t_s_s((p_40 , (l_619 , (l_607 == (safe_div_func_int8_t_s_s((**g_498), ((safe_lshift_func_uint16_t_u_u((l_366 = (--(*l_624))), (safe_div_func_uint32_t_u_u(func_41(&g_170), g_18)))) || (p_40 >= (-1L)))))))), 4294967291UL)));
        (*l_630) = &l_52;
        g_789++;
    }
    else
    {
        (*g_792) = &l_685;
    }
    for (l_667 = 0; (l_667 <= (-1)); l_667--)
    {
        unsigned *l_813 = &l_454;
        char l_825 = 0xF3L;
        int l_834 = (-6L);
        int l_863 = 0L;
        int l_972 = 0x1BBB5777L;
        int l_976 = 1L;
        int l_987 = 9L;
        int l_1008 = 1L;
        int l_1047 = 0xDFC63912L;
        int l_1199 = 0L;
        unsigned char l_1216 = 0x3CL;
        int **l_1306 = &g_75;
        unsigned l_1368 = 0xF9438198L;
        int l_1548 = 0x11922E9DL;
        unsigned l_1617 = 4294967295UL;
    }
    (*l_1652) |= ((*g_1307) = (((safe_mod_func_int8_t_s_s(((*g_499) = func_63((*g_499), (p_40 != (func_41(((*l_1642) = &l_795)) < ((safe_lshift_func_int16_t_s_u((((p_40 & ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(func_41(&l_795), (p_40 & p_40))), 0x59F5B8E8L)) == 0xB173C9C1L)) ^ 3UL) || g_282), p_40)) , 8UL))), &g_170, &g_20)), p_40)) , l_1649) != l_1649));
    return g_78;
}







static short func_41(char * p_42)
{
    char l_44 = 0x69L;
    return l_44;
}







static char * func_55(unsigned char * p_56, char p_57)
{
    short l_85 = 0x1826L;
    int l_94 = 0x5D6F9C23L;
    int l_103 = (-1L);
    int l_148 = 0xF6205A16L;
    int l_163 = 9L;
    unsigned char *l_198 = (void*)0;
    unsigned char **l_199 = &l_198;
    short *l_200 = &g_78;
    char * const l_201 = &g_20;
    unsigned l_202 = 0x44620185L;
    int *l_203 = &l_163;
    if ((l_85 <= ((safe_lshift_func_uint16_t_u_u(2UL, 8)) , 0L)))
    {
        char l_116 = 1L;
        int l_117 = 0x4E562A08L;
        int l_152 = 0L;
        for (g_82 = 0; (g_82 > 3); ++g_82)
        {
            int *l_90 = &g_91;
            int *l_92 = (void*)0;
            int *l_93 = &g_91;
            int *l_95 = &g_91;
            int *l_96 = &l_94;
            int *l_97 = &g_91;
            int *l_98 = &l_94;
            int *l_99 = &g_91;
            int *l_100 = (void*)0;
            int *l_101 = &g_91;
            int *l_102 = (void*)0;
            int *l_104 = (void*)0;
            int *l_105 = &l_94;
            int l_106 = 0xEBB4DFC4L;
            int *l_107 = &l_103;
            int *l_108 = (void*)0;
            int *l_109 = &g_91;
            int *l_110 = &l_103;
            int *l_111 = &l_103;
            int *l_112 = &l_94;
            int *l_113 = (void*)0;
            int *l_114 = &g_91;
            int *l_115 = (void*)0;
            int *l_118 = &l_103;
            int *l_119 = &l_103;
            int *l_120 = &l_103;
            int *l_121 = &g_91;
            int *l_122 = (void*)0;
            int *l_123 = (void*)0;
            int *l_125 = &l_117;
            int l_126 = (-6L);
            int *l_127 = &g_124;
            int *l_128 = &g_91;
            int *l_129 = &l_94;
            int *l_130 = &l_94;
            int *l_131 = &l_94;
            int *l_132 = &l_103;
            int *l_133 = &l_126;
            int *l_134 = &l_106;
            int *l_135 = &l_94;
            int *l_136 = &g_91;
            int *l_137 = &g_124;
            int *l_138 = &l_126;
            int *l_139 = (void*)0;
            int *l_140 = &l_94;
            int *l_141 = &g_91;
            int *l_142 = (void*)0;
            int *l_143 = &g_91;
            int *l_144 = &g_124;
            int *l_145 = &l_126;
            int *l_146 = &l_103;
            int *l_147 = &g_124;
            int *l_149 = &l_106;
            int *l_150 = &l_94;
            int l_151 = (-1L);
            int *l_153 = &l_103;
            int *l_154 = &l_106;
            int *l_155 = &l_148;
            int *l_156 = (void*)0;
            int *l_157 = (void*)0;
            int *l_158 = &g_91;
            int *l_159 = &l_148;
            int *l_160 = &l_94;
            int *l_161 = &l_151;
            int *l_162 = &l_151;
            int *l_164 = (void*)0;
            int *l_165 = &l_106;
            int *l_166 = &l_152;
            int *l_167 = &l_148;
            int *l_168 = &l_117;
            int *l_169 = &l_117;
            int l_171 = 0xF1CC41D5L;
            int *l_172 = &l_126;
            int *l_173 = (void*)0;
            int *l_175 = &l_117;
            int *l_176 = &l_171;
            int *l_177 = &l_171;
            int *l_178 = (void*)0;
            int *l_179 = &l_171;
            int *l_180 = &l_151;
            --g_181;
        }
    }
    else
    {
        int *l_184 = &l_163;
        int *l_185 = (void*)0;
        int *l_186 = &g_91;
        int *l_187 = &l_148;
        int *l_188 = &l_148;
        int *l_189 = &l_163;
        int *l_190 = &l_163;
        int *l_191 = (void*)0;
        int *l_192 = &l_163;
        unsigned l_193 = 0x3753CE46L;
        --l_193;
        return &g_170;
    }
    (*g_204) = ((*l_203) = ((((((((safe_lshift_func_int16_t_s_s((l_148 &= (l_103 = ((*l_200) = ((p_57 , &g_49) != ((*l_199) = l_198))))), (func_41(&g_170) == (((func_41(&g_20) == (((*p_56) = func_63(func_63(p_57, func_63(p_57, l_85, &g_170, &g_20), l_201, &g_170), g_91, l_201, &g_170)) == g_82)) , (void*)0) == (void*)0)))) >= p_57) & g_91) < l_202) | 0xCBL) , 4294967295UL) , g_174) ^ 0xFFL));
    return l_198;
}







static unsigned func_63(char p_64, unsigned short p_65, char * const p_66, char * p_67)
{
    int *l_71 = (void*)0;
    int **l_72 = (void*)0;
    for (p_65 = (-1); (p_65 < 10); ++p_65)
    {
        int l_70 = 0xDBACD6BCL;
        if (l_70)
            break;
    }
    (*g_74) = l_71;
    return p_65;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1333, "g_1333", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1564, "g_1564", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    transparent_crc(g_1891, "g_1891", print_hash_value);
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_1940, "g_1940", print_hash_value);
    transparent_crc(g_1945, "g_1945", print_hash_value);
    transparent_crc(g_1953, "g_1953", print_hash_value);
    transparent_crc(g_1960, "g_1960", print_hash_value);
    transparent_crc(g_1963, "g_1963", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
