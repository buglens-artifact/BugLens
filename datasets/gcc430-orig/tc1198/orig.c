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



static unsigned g_50 = 0x0BD907C4L;
static int *g_61 = (void*)0;
static int g_65 = 0L;
static char g_73 = 0xBCL;
static int g_75 = (-8L);
static volatile long long g_77 = 0L;
static int * volatile g_87 = (void*)0;
static long long g_95 = 2L;
static long long g_97 = 0x4BBB87E338AE633CLL;
static int *g_103 = &g_65;
static int ** volatile g_102 = &g_103;
static int g_238 = 0xC5CA8165L;
static volatile int g_239 = 0x993E3A24L;
static long long g_299 = (-1L);
static volatile unsigned g_310 = 4294967291UL;
static unsigned char g_313 = 0xD2L;
static int ** volatile g_325 = &g_103;
static short g_335 = 0x34FEL;
static volatile short g_342 = 8L;
static volatile unsigned g_363 = 0xF4952A9FL;
static int * volatile g_373 = &g_75;
static int **g_378 = &g_103;
static int *** volatile g_377 = &g_378;
static unsigned short g_509 = 0x0EE3L;
static int ** volatile g_512 = &g_61;
static int g_549 = 0x0942BAB9L;
static int *g_548 = &g_549;
static volatile int g_591 = (-1L);
static const int *g_656 = &g_238;
static unsigned char g_776 = 0UL;
static volatile short g_996 = 1L;
static int g_998 = 0x29DA1BF9L;
static unsigned g_1146 = 0x77EF40C7L;
static volatile unsigned g_1386 = 0xD3BD476AL;
static volatile int g_1518 = 0xAE7DD257L;
static volatile int *g_1517 = &g_1518;
static unsigned g_1541 = 18446744073709551612UL;
static int g_1808 = 0L;
static volatile unsigned short g_1815 = 65535UL;
static unsigned g_1820 = 0x0E8A472EL;
static char *g_1895 = &g_73;
static char **g_1894 = &g_1895;
static unsigned *g_1952 = &g_1820;
static unsigned * const *g_1951 = &g_1952;
static unsigned long long g_1960 = 18446744073709551615UL;
static unsigned long long *g_1975 = &g_1960;
static unsigned long long **g_1974 = &g_1975;



static char func_1(void);
static int * func_2(int * p_3, int p_4, int * p_5, int * p_6, const int * p_7);
static const short func_12(unsigned char p_13, unsigned short p_14, unsigned long long p_15);
static unsigned func_16(unsigned p_17, const int * p_18, int * p_19);
static unsigned func_24(unsigned char p_25, int * p_26);
static const unsigned func_40(const int * p_41, int * p_42);
static const int * func_43(int * const p_44, int * p_45);
static int * func_46(unsigned p_47);
static int * func_53(unsigned * p_54);
static unsigned * func_55(unsigned * p_56, const unsigned short p_57, short p_58, int * p_59);
static char func_1(void)
{
    long long l_23 = 0L;
    unsigned *l_48 = (void*)0;
    unsigned *l_49 = &g_50;
    int **l_547 = &g_61;
    int l_781 = (-3L);
    unsigned char *l_1966 = &g_313;
    (*l_547) = func_2(((1L || (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(func_12(((*l_1966) = (func_16((((((((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint16_t_u_s(l_23, 6)) & (func_24((l_23 , ((safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(1UL, (safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint32_t_u_u((+func_40(func_43(((*l_547) = func_46(((*l_49) ^= l_23))), g_548), &g_549)), g_549)) , g_310))), g_549)) ^ l_781), (-5L))))), g_299)) && g_65), 10)) == 0x2449L)), &g_549) != l_23)))) ^ l_781) , 0x0EL) == g_998) ^ 0x1EFDB647L) , (void*)0) != g_656), g_656, &l_781) > g_998)), l_781, g_299), g_1808)), g_1808))) , (*g_378)), l_781, g_1952, &l_781, g_1952);
    return (*g_1895);
}







static int * func_2(int * p_3, int p_4, int * p_5, int * p_6, const int * p_7)
{
    char l_1968 = 0xD8L;
    unsigned l_1969 = 0x22BC96CAL;
    const int *l_1970 = (void*)0;
    int *l_1971 = (void*)0;
    unsigned long long **l_1972 = (void*)0;
    short l_1980 = 7L;
    unsigned *l_1981 = (void*)0;
    unsigned *l_1985 = &l_1969;
    int *l_1988 = &g_75;
    l_1968 &= (***g_377);
    (*g_1517) = (*p_3);
    (*p_5) ^= ((**g_325) |= (p_4 >= p_4));
    if ((0x96514550A1FA97BCLL >= p_4))
    {
        unsigned long long ***l_1973 = &l_1972;
        (*g_378) = &p_4;
        g_1974 = ((*l_1973) = l_1972);
    }
    else
    {
        int **l_1978 = &l_1971;
        unsigned l_1979 = 0xE580E77AL;
        unsigned **l_1982 = (void*)0;
        unsigned *l_1984 = &g_50;
        unsigned **l_1983 = &l_1984;
        unsigned long long l_1986 = 1UL;
        unsigned char *l_1987 = &g_776;
        (*g_1517) = (safe_mul_func_int8_t_s_s(((g_1518 , ((**g_1894) = (func_16(((**g_1951) = (p_4 , func_40((*g_102), (*g_378)))), &p_4, ((*l_1978) = (*g_378))) ^ (p_4 >= p_4)))) && (**l_1978)), l_1979));
        l_1980 = (**g_102);
        (*p_6) |= (**l_1978);
        (*l_1978) = ((*g_378) = func_53(func_55((l_1985 = (((~g_342) < 18446744073709551610UL) , ((*l_1983) = (l_1981 = (void*)0)))), ((((*p_3) ^= l_1986) || 0xCB0D0C3CL) , ((**l_1978) >= func_12(((*l_1987) = (**l_1978)), g_549, (*g_1975)))), p_4, &g_75)));
    }
    return l_1988;
}







static const short func_12(unsigned char p_13, unsigned short p_14, unsigned long long p_15)
{
    int *l_1967 = &g_549;
    (*g_378) = l_1967;
    return g_1541;
}







static unsigned func_16(unsigned p_17, const int * p_18, int * p_19)
{
    int *l_1574 = &g_238;
    int l_1595 = 3L;
    int l_1614 = 4L;
    int l_1658 = 0xB958F9A3L;
    int l_1690 = 0x48C630D3L;
    int l_1710 = 0xF7F11FB7L;
    int l_1722 = 0x82943EEFL;
    int l_1726 = 2L;
    int l_1731 = 0xBE5CC014L;
    int l_1743 = 0x35848704L;
    short l_1758 = 5L;
    int l_1765 = 0xF47AFF7BL;
    int l_1778 = 0L;
    int l_1806 = (-1L);
    int l_1813 = 0x8FD13F53L;
    unsigned short l_1833 = 6UL;
    long long l_1845 = 0xE01EB7BFA6833E3BLL;
    unsigned l_1903 = 5UL;
    short l_1957 = 0x1AD8L;
    long long l_1965 = 0xD6F6C649A7573F32LL;
    if ((*p_18))
    {
        int *l_1573 = &g_549;
        long long l_1580 = (-7L);
        int l_1605 = 9L;
        int l_1613 = 0x7D104E97L;
        int l_1637 = (-1L);
        int l_1656 = 1L;
        int l_1667 = (-4L);
        int l_1672 = 9L;
        int l_1709 = (-1L);
        int l_1752 = 0x3578BBDAL;
        int l_1775 = 0xAD988B54L;
        int l_1794 = 0x62F0B4DBL;
        int l_1796 = 1L;
        unsigned *l_1874 = &g_1541;
        const unsigned short l_1880 = 0xE9A0L;
        (**g_377) = l_1573;
        (*g_378) = l_1574;
        (*g_373) ^= (*l_1574);
        for (g_238 = 0; (g_238 > (-25)); --g_238)
        {
            int *l_1577 = &g_65;
            int *l_1578 = &g_75;
            int *l_1579 = &g_549;
            int *l_1581 = &g_75;
            int *l_1582 = &g_549;
            int *l_1583 = &g_75;
            int *l_1584 = &g_549;
            int *l_1585 = &g_75;
            int *l_1586 = (void*)0;
            int *l_1587 = &g_75;
            int *l_1588 = &g_549;
            int *l_1589 = &g_549;
            int *l_1590 = &g_549;
            int *l_1591 = &g_65;
            int *l_1592 = &g_549;
            int *l_1593 = &g_549;
            int *l_1594 = &g_65;
            int *l_1596 = (void*)0;
            int *l_1597 = &g_75;
            int *l_1598 = &g_549;
            int *l_1599 = &g_65;
            int *l_1600 = &g_549;
            int *l_1601 = (void*)0;
            int *l_1602 = (void*)0;
            int *l_1603 = (void*)0;
            int *l_1604 = &l_1595;
            int *l_1606 = (void*)0;
            int *l_1607 = &g_65;
            int *l_1608 = &g_549;
            int *l_1609 = &g_75;
            int *l_1610 = &l_1595;
            int *l_1611 = (void*)0;
            int *l_1612 = &g_65;
            int *l_1615 = (void*)0;
            int *l_1616 = &g_75;
            int *l_1617 = &g_549;
            int *l_1618 = &g_75;
            int l_1619 = 0x8F8546B3L;
            int l_1620 = 0L;
            int *l_1621 = &l_1619;
            int *l_1622 = (void*)0;
            int *l_1623 = &l_1619;
            int *l_1624 = &g_75;
            int *l_1625 = &l_1614;
            int *l_1626 = (void*)0;
            int *l_1627 = &l_1595;
            int *l_1628 = (void*)0;
            int *l_1629 = (void*)0;
            int *l_1630 = &l_1620;
            int *l_1631 = &g_75;
            int *l_1632 = &l_1595;
            int *l_1633 = &l_1613;
            int *l_1634 = &l_1614;
            int *l_1635 = &l_1595;
            int *l_1636 = &l_1620;
            int *l_1638 = (void*)0;
            int *l_1639 = &l_1619;
            int *l_1640 = (void*)0;
            int *l_1641 = &l_1605;
            int *l_1642 = &g_65;
            int *l_1643 = &g_75;
            int *l_1644 = &l_1637;
            int *l_1645 = &l_1595;
            int *l_1646 = &g_65;
            int *l_1647 = &l_1637;
            int *l_1648 = &l_1620;
            int *l_1649 = &g_549;
            int *l_1650 = &l_1637;
            int *l_1651 = &l_1619;
            int *l_1652 = &g_65;
            int *l_1653 = &l_1613;
            int *l_1654 = &l_1613;
            int *l_1655 = (void*)0;
            int *l_1657 = &l_1619;
            int *l_1659 = (void*)0;
            int *l_1660 = &l_1595;
            int *l_1661 = &l_1656;
            int l_1662 = 0L;
            int *l_1663 = &l_1662;
            int *l_1664 = &l_1613;
            int l_1665 = 0x29FDE2EDL;
            int *l_1666 = &l_1613;
            int l_1668 = 5L;
            int *l_1669 = &g_65;
            int l_1670 = (-6L);
            int *l_1671 = &l_1595;
            int *l_1673 = (void*)0;
            int *l_1674 = (void*)0;
            int *l_1675 = &l_1637;
            int *l_1676 = &l_1670;
            int *l_1677 = (void*)0;
            int *l_1678 = &l_1667;
            int *l_1679 = &l_1595;
            int *l_1680 = &l_1595;
            int *l_1681 = &l_1595;
            int *l_1682 = &l_1613;
            int *l_1683 = (void*)0;
            int *l_1684 = (void*)0;
            int *l_1685 = (void*)0;
            int *l_1686 = &g_65;
            int *l_1687 = &l_1605;
            int *l_1688 = &l_1668;
            int *l_1689 = (void*)0;
            int *l_1691 = &l_1662;
            int *l_1692 = &l_1637;
            int *l_1693 = &l_1690;
            int *l_1694 = &l_1619;
            int *l_1695 = &l_1668;
            int *l_1696 = &l_1656;
            int *l_1697 = &l_1595;
            int *l_1698 = &l_1658;
            int *l_1699 = &g_75;
            int *l_1700 = &l_1614;
            int *l_1701 = &l_1670;
            int *l_1702 = (void*)0;
            int *l_1703 = &l_1595;
            int *l_1704 = (void*)0;
            int *l_1705 = &l_1690;
            int *l_1706 = &l_1619;
            int *l_1707 = &l_1690;
            int l_1708 = 1L;
            int *l_1711 = &l_1668;
            int *l_1712 = &l_1690;
            int *l_1713 = &l_1662;
            int *l_1714 = &l_1658;
            int *l_1715 = &l_1656;
            int *l_1716 = &l_1665;
            int l_1717 = 0xBCA55737L;
            int *l_1718 = (void*)0;
            int *l_1719 = &l_1619;
            int *l_1720 = &g_65;
            int *l_1721 = &l_1717;
            int *l_1723 = &l_1619;
            int *l_1724 = &l_1656;
            int *l_1725 = (void*)0;
            int *l_1727 = &g_65;
            int l_1728 = 1L;
            int *l_1729 = &g_549;
            int *l_1730 = &l_1710;
            int l_1732 = (-4L);
            int *l_1733 = &l_1613;
            int *l_1734 = &l_1709;
            int *l_1735 = &l_1637;
            int *l_1736 = &g_75;
            int *l_1737 = &l_1710;
            int *l_1738 = (void*)0;
            int *l_1739 = (void*)0;
            int *l_1740 = &l_1726;
            int *l_1741 = &l_1728;
            int *l_1742 = &l_1690;
            int *l_1744 = &l_1619;
            int *l_1745 = (void*)0;
            int *l_1746 = &l_1670;
            int *l_1747 = &l_1619;
            int *l_1748 = &l_1726;
            int *l_1749 = &g_549;
            int *l_1750 = &l_1662;
            int *l_1751 = (void*)0;
            int *l_1753 = &l_1726;
            int *l_1754 = &l_1752;
            int l_1755 = 0xDE009CE9L;
            int *l_1756 = &l_1665;
            int *l_1757 = &l_1726;
            int *l_1759 = &g_65;
            int *l_1760 = (void*)0;
            int *l_1761 = &l_1728;
            int *l_1762 = &l_1665;
            int *l_1763 = (void*)0;
            int *l_1764 = (void*)0;
            int *l_1766 = &l_1619;
            int *l_1767 = &l_1755;
            int *l_1768 = &l_1614;
            int *l_1769 = &l_1656;
            int *l_1770 = &l_1668;
            int *l_1771 = &l_1613;
            int *l_1772 = &l_1662;
            int *l_1773 = &g_65;
            int *l_1774 = (void*)0;
            int *l_1776 = &l_1656;
            int *l_1777 = &l_1595;
            int l_1779 = 0x3B13FC9DL;
            int *l_1780 = &l_1708;
            int *l_1781 = (void*)0;
            int *l_1782 = &l_1614;
            int *l_1783 = (void*)0;
            int *l_1784 = &l_1665;
            int *l_1785 = &l_1665;
            int *l_1786 = &l_1775;
            int *l_1787 = (void*)0;
            int *l_1788 = &g_549;
            int *l_1789 = &g_65;
            int *l_1790 = &l_1717;
            int *l_1791 = &l_1662;
            int *l_1792 = &g_65;
            int *l_1793 = (void*)0;
            int *l_1795 = &l_1613;
            int *l_1797 = &l_1665;
            int *l_1798 = &l_1722;
            int *l_1799 = &l_1665;
            int *l_1800 = (void*)0;
            int *l_1801 = &l_1619;
            int *l_1802 = (void*)0;
            int *l_1803 = &l_1605;
            int *l_1804 = &l_1665;
            int *l_1805 = &l_1775;
            int *l_1807 = &l_1794;
            int *l_1809 = &l_1710;
            int *l_1810 = &l_1667;
            int *l_1811 = &l_1614;
            int *l_1812 = &l_1728;
            int *l_1814 = &l_1690;
            unsigned long long l_1836 = 18446744073709551615UL;
            unsigned l_1887 = 0UL;
            g_1815++;
            (*l_1641) = (safe_lshift_func_uint8_t_u_u(3UL, ((g_1820++) , 1UL)));
        }
    }
    else
    {
        long long l_1912 = 0x80BFD8FB47686D32LL;
        char l_1931 = 0xDAL;
        (*g_1517) = l_1912;
        for (g_75 = 1; (g_75 == (-29)); g_75--)
        {
            char l_1942 = 0x50L;
            short l_1943 = 1L;
            for (l_1743 = 0; (l_1743 > (-21)); l_1743--)
            {
                int *l_1940 = &l_1765;
                short *l_1941 = &g_335;
                unsigned **l_1958 = &g_1952;
                if ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((l_1943 ^= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((0UL <= (*p_19)), l_1931)), ((((0xCDL || (*g_1895)) , (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(1L, (+(safe_lshift_func_uint8_t_u_s(((*l_1574) | ((*g_1895) = (~p_17))), 2))))), 10)), ((*l_1941) ^= (((*l_1940) = (*p_18)) && (*p_18)))))) && l_1942) & 0xAAL)))), g_313)), l_1931)), 5)), 0x33E7CEF81D956268LL)), 4)))
                {
                    p_18 = p_18;
                    for (l_1726 = 18; (l_1726 != 22); l_1726 = safe_add_func_uint32_t_u_u(l_1726, 6))
                    {
                        if ((*p_18))
                            break;
                    }
                }
                else
                {
                    const int **l_1946 = &g_656;
                    unsigned * const **l_1953 = (void*)0;
                    unsigned * const **l_1954 = &g_1951;
                    unsigned long long *l_1959 = &g_1960;
                    if ((*p_18))
                        break;
                    (*l_1946) = p_18;
                    (*l_1574) ^= (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((*l_1954) = g_1951) == ((*l_1940) , ((g_77 == ((safe_rshift_func_int16_t_s_u(0x83DDL, 10)) || (p_17 < l_1957))) , l_1958))), (((((*l_1959)++) != g_1541) <= (safe_sub_func_int8_t_s_s(((l_1965 = p_17) , 1L), (-1L)))) || 0xBC35A74DL))), p_17));
                }
                return (*l_1574);
            }
        }
    }
    return p_17;
}







static unsigned func_24(unsigned char p_25, int * p_26)
{
    long long l_782 = 0x60663C011F439084LL;
    int **l_788 = &g_548;
    int *l_795 = (void*)0;
    int l_834 = 0x06C00B28L;
    int l_837 = 0x0CFB90A3L;
    int l_852 = (-1L);
    int l_869 = (-5L);
    int l_886 = 8L;
    int l_922 = 0x9A7EFD32L;
    int l_981 = 7L;
    int l_984 = 0xF7EF4C9EL;
    int l_1010 = 0xC3CE371DL;
    unsigned long long l_1040 = 0x8D2E61F404C8FE23LL;
    long long l_1043 = 0x7E6A0B33386E59B0LL;
    unsigned l_1505 = 0UL;
    unsigned long long l_1542 = 0x1F226D0BCA6DDDCCLL;
    if (l_782)
    {
        unsigned short l_783 = 0xD834L;
        int l_801 = 0x3648E167L;
        unsigned short l_814 = 0x804CL;
        char l_815 = 0L;
        int l_858 = 1L;
        int l_877 = 1L;
        int l_882 = 0x5583EF56L;
        int l_915 = 0x542373D3L;
        int l_960 = 0x6784FC92L;
        int l_976 = 0x36BB5143L;
        int l_983 = 0xD5FB94BDL;
        char l_1014 = 1L;
        int *l_1396 = (void*)0;
        unsigned char l_1436 = 1UL;
        if ((~(g_50 <= (((*g_548) ^= l_783) , p_25))))
        {
            int ***l_789 = &l_788;
            unsigned *l_794 = &g_50;
            int *l_796 = &g_238;
            int *l_797 = &g_238;
            int *l_798 = &g_65;
            int *l_799 = &g_238;
            int l_800 = (-1L);
            int *l_802 = &g_238;
            int *l_803 = (void*)0;
            int *l_804 = &g_238;
            int *l_805 = &g_549;
            int *l_806 = &g_75;
            int *l_807 = &l_800;
            int *l_808 = &g_65;
            int *l_809 = &g_75;
            int *l_810 = &l_801;
            unsigned l_811 = 1UL;
            int l_954 = 0xFFCB4A67L;
            unsigned char l_1016 = 0xCBL;
            char *l_1028 = &l_1014;
            char l_1159 = 0xE5L;
            short *l_1162 = (void*)0;
            int l_1379 = (-7L);
            (*p_26) = ((((((safe_rshift_func_uint16_t_u_u(g_65, 8)) , ((*l_789) = l_788)) == (void*)0) == ((*p_26) >= (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((p_25 < g_509), p_25)), (*g_548))))) , (void*)0) != &g_335);
            l_811--;
            if (((*l_797) = (l_814 &= (*l_807))))
            {
                int *l_816 = &l_801;
                int *l_817 = &g_238;
                int *l_818 = &g_549;
                int *l_819 = &l_800;
                int l_820 = (-6L);
                int *l_821 = &g_65;
                int *l_822 = &l_801;
                int *l_823 = &l_820;
                int *l_824 = &g_238;
                int *l_825 = &g_238;
                int *l_826 = &g_75;
                int *l_827 = &l_801;
                int *l_828 = &g_75;
                int *l_829 = &l_820;
                int *l_830 = (void*)0;
                int *l_831 = &g_549;
                int *l_832 = &g_75;
                int *l_833 = (void*)0;
                int *l_835 = &l_801;
                int *l_836 = &l_820;
                int *l_838 = &l_800;
                int *l_839 = &l_801;
                int *l_840 = &l_837;
                int *l_841 = &g_549;
                int *l_842 = &l_834;
                int *l_843 = &g_238;
                int *l_844 = &l_801;
                int *l_845 = (void*)0;
                int *l_846 = &l_837;
                int *l_847 = (void*)0;
                int *l_848 = &l_800;
                int *l_849 = (void*)0;
                int *l_850 = &l_801;
                int *l_851 = (void*)0;
                int *l_853 = &l_800;
                int *l_854 = &l_834;
                int l_855 = 0L;
                int *l_856 = &l_852;
                int *l_857 = &l_837;
                int *l_859 = &l_834;
                int *l_860 = &l_855;
                int *l_861 = &l_834;
                int *l_862 = &l_801;
                int *l_863 = (void*)0;
                int *l_864 = &l_800;
                int *l_865 = (void*)0;
                int *l_866 = (void*)0;
                int *l_867 = (void*)0;
                int *l_868 = (void*)0;
                int *l_870 = &l_858;
                int *l_871 = (void*)0;
                int *l_872 = &l_855;
                int *l_873 = &l_837;
                int *l_874 = &l_869;
                int *l_875 = &g_238;
                int *l_876 = &l_800;
                int *l_878 = &l_801;
                int *l_879 = (void*)0;
                int *l_880 = &l_837;
                int *l_881 = (void*)0;
                int *l_883 = &l_834;
                int *l_884 = &g_549;
                int *l_885 = &g_549;
                int *l_887 = &l_858;
                int *l_888 = &g_65;
                int *l_889 = &l_882;
                int *l_890 = (void*)0;
                int *l_891 = &l_877;
                int *l_892 = &l_800;
                int *l_893 = &g_238;
                int *l_894 = &g_549;
                int *l_895 = &l_852;
                int *l_896 = &l_886;
                int *l_897 = (void*)0;
                int *l_898 = &g_238;
                int *l_899 = &l_858;
                int *l_900 = &g_549;
                int *l_901 = &l_837;
                int *l_902 = &l_858;
                int *l_903 = &l_882;
                int *l_904 = &l_869;
                int *l_905 = &l_886;
                int *l_906 = &g_75;
                int *l_907 = &l_858;
                int *l_908 = &l_869;
                int *l_909 = &l_834;
                int *l_910 = &l_800;
                int *l_911 = &l_855;
                int *l_912 = &g_238;
                int *l_913 = (void*)0;
                int *l_914 = &l_858;
                int *l_916 = &l_801;
                int *l_917 = &l_834;
                int *l_918 = (void*)0;
                int *l_919 = &l_882;
                int *l_920 = (void*)0;
                int *l_921 = &l_801;
                int *l_923 = (void*)0;
                int *l_924 = &l_922;
                int *l_925 = &l_855;
                int *l_926 = &g_65;
                int *l_927 = &l_877;
                int *l_928 = &l_915;
                int *l_929 = &l_886;
                int *l_930 = &l_820;
                int *l_931 = &l_834;
                int *l_932 = &l_877;
                int *l_933 = &l_915;
                int *l_934 = &l_801;
                int *l_935 = &l_922;
                int *l_936 = (void*)0;
                int *l_937 = &l_882;
                int l_938 = (-3L);
                int *l_939 = (void*)0;
                int *l_940 = &l_915;
                int *l_941 = &l_938;
                int *l_942 = &l_922;
                int *l_943 = (void*)0;
                int *l_944 = (void*)0;
                int *l_945 = (void*)0;
                int *l_946 = (void*)0;
                int *l_947 = &l_834;
                int *l_948 = &l_877;
                int *l_949 = &l_855;
                int *l_950 = (void*)0;
                int *l_951 = &g_549;
                int *l_952 = &l_938;
                int *l_953 = &l_837;
                int *l_955 = &l_800;
                int *l_956 = &l_858;
                int *l_957 = &l_800;
                int *l_958 = (void*)0;
                int *l_959 = &l_820;
                int *l_961 = &l_877;
                int *l_962 = &l_882;
                int *l_963 = &g_65;
                int *l_964 = &g_65;
                int *l_965 = &l_852;
                int *l_966 = (void*)0;
                int *l_967 = &l_922;
                int *l_968 = &l_800;
                int *l_969 = (void*)0;
                int *l_970 = (void*)0;
                int *l_971 = &l_869;
                int *l_972 = &l_886;
                int *l_973 = &l_915;
                int *l_974 = &l_869;
                int *l_975 = (void*)0;
                int *l_977 = &l_800;
                int *l_978 = &l_877;
                int *l_979 = (void*)0;
                int *l_980 = (void*)0;
                int *l_982 = &l_852;
                int *l_985 = &l_855;
                int *l_986 = (void*)0;
                int *l_987 = &l_938;
                int *l_988 = &l_869;
                int *l_989 = &l_837;
                int *l_990 = &l_820;
                int *l_991 = (void*)0;
                int *l_992 = &l_981;
                int *l_993 = &l_981;
                int *l_994 = (void*)0;
                int *l_995 = &l_869;
                int *l_997 = &l_869;
                int *l_999 = &l_960;
                int *l_1000 = &l_801;
                int *l_1001 = &l_938;
                int *l_1002 = &l_938;
                int *l_1003 = &l_820;
                int *l_1004 = (void*)0;
                int *l_1005 = &l_886;
                int *l_1006 = &l_852;
                int *l_1007 = &l_960;
                int l_1008 = (-4L);
                int *l_1009 = &l_869;
                int *l_1011 = &l_837;
                int *l_1012 = &l_877;
                int *l_1013 = &l_938;
                int *l_1015 = &l_820;
                ++l_1016;
            }
            else
            {
                char *l_1023 = &g_73;
                int l_1025 = 0x7670D3A6L;
                int l_1086 = 1L;
                int l_1089 = 0xC7FE7677L;
                int l_1093 = (-1L);
                short l_1248 = 0xD16BL;
                int l_1369 = (-5L);
                if (((+(safe_sub_func_uint64_t_u_u(((g_95 > (safe_sub_func_int32_t_s_s(((void*)0 == &g_97), (((((func_40(p_26, (**l_789)) , &g_73) == (((*l_1023) = g_313) , &g_73)) && (*l_808)) , (*p_26)) > (*p_26))))) == g_299), g_996))) > 0x76L))
                {
                    unsigned l_1024 = 18446744073709551615UL;
                    char **l_1029 = (void*)0;
                    char **l_1030 = &l_1023;
                    char **l_1031 = (void*)0;
                    char **l_1032 = &l_1028;
                    char **l_1033 = (void*)0;
                    char *l_1035 = &l_815;
                    char **l_1034 = &l_1035;
                    long long *l_1036 = &g_97;
                    int *l_1037 = &l_858;
                    int *l_1038 = &l_922;
                    int *l_1039 = &l_1025;
                    (*p_26) ^= (g_299 & (l_1024 == ((l_1025 != ((0x5BL && (safe_lshift_func_int16_t_s_u(4L, 15))) , (((*l_1032) = ((*l_1030) = l_1028)) != ((*l_1034) = &l_815)))) , ((*l_1036) = g_591))));
                    (*l_802) &= func_40(p_26, (*l_788));
                    (**l_789) = &l_976;
                    l_1040++;
                }
                else
                {
                    int *l_1044 = &l_922;
                    int *l_1045 = &l_882;
                    int *l_1046 = (void*)0;
                    int *l_1047 = &g_549;
                    int *l_1048 = &l_960;
                    int *l_1049 = &l_877;
                    int *l_1050 = (void*)0;
                    int *l_1051 = &l_1010;
                    int l_1052 = (-6L);
                    int *l_1053 = &l_801;
                    int *l_1054 = &g_65;
                    int *l_1055 = &l_800;
                    int *l_1056 = &g_238;
                    int *l_1057 = &l_1025;
                    int *l_1058 = &l_984;
                    int *l_1059 = &l_1025;
                    int *l_1060 = &l_858;
                    int *l_1061 = &g_75;
                    int *l_1062 = &l_800;
                    int *l_1063 = &l_915;
                    int *l_1064 = &l_869;
                    int *l_1065 = (void*)0;
                    int *l_1066 = &l_869;
                    int *l_1067 = &l_976;
                    int *l_1068 = (void*)0;
                    int *l_1069 = &l_852;
                    int l_1070 = 1L;
                    int *l_1071 = (void*)0;
                    int *l_1072 = &l_915;
                    int *l_1073 = &l_877;
                    int *l_1074 = (void*)0;
                    int *l_1075 = &l_915;
                    int *l_1076 = (void*)0;
                    int *l_1077 = &l_869;
                    int *l_1078 = &l_877;
                    int *l_1079 = (void*)0;
                    int *l_1080 = (void*)0;
                    int *l_1081 = &l_984;
                    int *l_1082 = &l_1025;
                    int *l_1083 = &l_834;
                    int *l_1084 = &l_886;
                    int *l_1085 = &l_1052;
                    int *l_1087 = (void*)0;
                    int *l_1088 = &l_877;
                    int *l_1090 = &l_976;
                    int *l_1091 = &g_75;
                    int *l_1092 = &l_915;
                    int *l_1094 = &l_1010;
                    int *l_1095 = &l_801;
                    int *l_1096 = (void*)0;
                    int *l_1097 = &l_801;
                    int *l_1098 = &l_1052;
                    int *l_1099 = &l_1086;
                    int *l_1100 = &l_983;
                    int *l_1101 = (void*)0;
                    int *l_1102 = &l_837;
                    int *l_1103 = &l_981;
                    int *l_1104 = &l_983;
                    int *l_1105 = (void*)0;
                    int l_1106 = 0xEFADE18FL;
                    int *l_1107 = (void*)0;
                    int *l_1108 = (void*)0;
                    int *l_1109 = &l_922;
                    int *l_1110 = &l_1093;
                    int *l_1111 = &l_954;
                    int *l_1112 = &l_837;
                    int *l_1113 = &l_801;
                    int *l_1114 = &l_984;
                    int *l_1115 = (void*)0;
                    int l_1116 = 5L;
                    int *l_1117 = &g_549;
                    int *l_1118 = &g_238;
                    int *l_1119 = &l_1116;
                    int *l_1120 = (void*)0;
                    int *l_1121 = &l_1116;
                    int *l_1122 = (void*)0;
                    int *l_1123 = (void*)0;
                    int *l_1124 = &l_1070;
                    int *l_1125 = &l_1116;
                    int *l_1126 = &l_877;
                    int *l_1127 = (void*)0;
                    int *l_1128 = (void*)0;
                    int *l_1129 = &l_800;
                    int *l_1130 = &l_852;
                    int *l_1131 = (void*)0;
                    int *l_1132 = &l_869;
                    int *l_1133 = (void*)0;
                    int *l_1134 = &l_837;
                    int *l_1135 = &l_915;
                    int *l_1136 = (void*)0;
                    int *l_1137 = (void*)0;
                    int *l_1138 = (void*)0;
                    int *l_1139 = &l_983;
                    int *l_1140 = &l_1106;
                    int *l_1141 = &l_1106;
                    int *l_1142 = &l_837;
                    int *l_1143 = (void*)0;
                    int *l_1144 = &l_869;
                    int *l_1145 = &l_960;
                    (**l_789) = l_1044;
                    g_1146--;
                    (*l_788) = p_26;
                }
                (*p_26) = ((((((safe_div_func_int64_t_s_s(p_25, (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_299, (+((l_960 || (safe_add_func_int8_t_s_s(0x05L, (safe_sub_func_int8_t_s_s(g_65, l_1089))))) , l_877)))), (l_1025 , p_25))))) , 0xDBL) || 254UL) != 0x42ABL) == 0x13E6L) , (*p_26));
                if (l_1159)
                {
                    unsigned short *l_1163 = &l_814;
                    int l_1166 = 0L;
                    unsigned *l_1169 = &l_811;
                    int l_1198 = 4L;
                    int l_1216 = (-1L);
                    int l_1233 = 0x41DBB5C8L;
                    int l_1238 = 0x8EF74FDEL;
                    int l_1261 = 1L;
                    int l_1314 = 0x8F356B59L;
                    int l_1368 = 8L;
                    if ((safe_add_func_int8_t_s_s((((((l_1162 == (void*)0) && g_97) , ((*l_1163)++)) != (((**l_788) && (((*l_804) = ((l_1166 & ((0xC94128A3L != ((((*l_1169) = (safe_add_func_uint8_t_u_u(p_25, func_40(func_55(p_26, (*l_810), (*l_798), p_26), p_26)))) ^ (*p_26)) <= p_25)) & g_95)) > (*p_26))) == 0x4463C4D4L)) ^ (*l_808))) | 5UL), l_1086)))
                    {
                        return p_25;
                    }
                    else
                    {
                        int *l_1170 = &l_877;
                        int *l_1171 = &l_976;
                        int *l_1172 = &l_983;
                        int *l_1173 = &l_915;
                        int *l_1174 = &l_1086;
                        int *l_1175 = &l_882;
                        int *l_1176 = &l_922;
                        int *l_1177 = &l_877;
                        int *l_1178 = (void*)0;
                        int *l_1179 = &g_65;
                        int *l_1180 = &l_1025;
                        int *l_1181 = &l_984;
                        int *l_1182 = &l_1086;
                        int *l_1183 = &l_954;
                        int *l_1184 = &l_1089;
                        int *l_1185 = &l_981;
                        int *l_1186 = &l_858;
                        int *l_1187 = &l_954;
                        int *l_1188 = &l_981;
                        int *l_1189 = &l_858;
                        int *l_1190 = &l_1086;
                        int *l_1191 = &l_983;
                        int *l_1192 = &l_1089;
                        int *l_1193 = (void*)0;
                        int *l_1194 = &l_981;
                        int *l_1195 = &g_238;
                        int *l_1196 = &l_801;
                        int *l_1197 = &l_882;
                        int *l_1199 = &l_800;
                        int *l_1200 = &l_1025;
                        int *l_1201 = &l_869;
                        int *l_1202 = &l_801;
                        int *l_1203 = &l_915;
                        int *l_1204 = &l_858;
                        int *l_1205 = &l_852;
                        int *l_1206 = &g_65;
                        int *l_1207 = &l_1086;
                        int *l_1208 = &l_960;
                        int *l_1209 = (void*)0;
                        int *l_1210 = &l_886;
                        int *l_1211 = &l_886;
                        int *l_1212 = &l_886;
                        int *l_1213 = &l_976;
                        int *l_1214 = &l_976;
                        int *l_1215 = &l_801;
                        int *l_1217 = &l_954;
                        int *l_1218 = &l_1010;
                        int *l_1219 = &g_238;
                        int *l_1220 = &l_801;
                        int *l_1221 = &g_238;
                        int *l_1222 = (void*)0;
                        int *l_1223 = (void*)0;
                        int l_1224 = 0x838AB1ABL;
                        int *l_1225 = &l_1166;
                        int *l_1226 = &l_1093;
                        int *l_1227 = &l_834;
                        int *l_1228 = (void*)0;
                        int *l_1229 = (void*)0;
                        int *l_1230 = &l_1216;
                        int *l_1231 = &l_834;
                        int *l_1232 = &l_800;
                        int *l_1234 = &l_834;
                        int *l_1235 = &l_1010;
                        int *l_1236 = &l_922;
                        int *l_1237 = &l_877;
                        int *l_1239 = &l_1089;
                        int *l_1240 = &l_869;
                        int *l_1241 = (void*)0;
                        int *l_1242 = &l_960;
                        int *l_1243 = &l_1198;
                        int *l_1244 = (void*)0;
                        int *l_1245 = (void*)0;
                        int *l_1246 = &l_922;
                        int *l_1247 = (void*)0;
                        int *l_1249 = &l_1025;
                        int *l_1250 = &l_877;
                        int *l_1251 = (void*)0;
                        int *l_1252 = &l_882;
                        int *l_1253 = &l_976;
                        int *l_1254 = &l_1224;
                        int *l_1255 = &l_1025;
                        int *l_1256 = &l_981;
                        int *l_1257 = &g_238;
                        int *l_1258 = &l_960;
                        int *l_1259 = &l_886;
                        int *l_1260 = &l_1089;
                        int l_1262 = 5L;
                        int *l_1263 = &l_922;
                        int *l_1264 = (void*)0;
                        int *l_1265 = &l_983;
                        int *l_1266 = &l_834;
                        int *l_1267 = &l_1216;
                        int *l_1268 = &l_877;
                        int *l_1269 = &l_1261;
                        int *l_1270 = &l_1093;
                        int *l_1271 = &l_837;
                        int *l_1272 = &l_1262;
                        int *l_1273 = &l_922;
                        int *l_1274 = &l_1198;
                        int *l_1275 = &l_954;
                        int *l_1276 = &l_1025;
                        int *l_1277 = (void*)0;
                        int *l_1278 = &l_954;
                        int *l_1279 = &l_801;
                        int *l_1280 = (void*)0;
                        int *l_1281 = &l_834;
                        int *l_1282 = &l_1198;
                        int *l_1283 = &l_886;
                        int *l_1284 = &l_869;
                        int *l_1285 = (void*)0;
                        int *l_1286 = (void*)0;
                        int *l_1287 = &l_886;
                        int *l_1288 = &g_549;
                        int *l_1289 = &l_1216;
                        int *l_1290 = (void*)0;
                        int *l_1291 = &l_837;
                        int *l_1292 = &l_1198;
                        int *l_1293 = &l_1093;
                        int *l_1294 = &l_858;
                        int *l_1295 = (void*)0;
                        int *l_1296 = &l_1166;
                        int *l_1297 = &l_1025;
                        int *l_1298 = &l_915;
                        int *l_1299 = &l_1166;
                        int *l_1300 = &g_238;
                        int *l_1301 = &l_922;
                        int *l_1302 = &l_852;
                        int *l_1303 = &l_1224;
                        int *l_1304 = &l_1025;
                        int *l_1305 = &l_882;
                        int *l_1306 = &l_852;
                        int *l_1307 = &l_1093;
                        int *l_1308 = &l_886;
                        int *l_1309 = &l_801;
                        int *l_1310 = &l_954;
                        int *l_1311 = &l_801;
                        int *l_1312 = &l_915;
                        int *l_1313 = (void*)0;
                        int *l_1315 = &l_1198;
                        int *l_1316 = (void*)0;
                        int *l_1317 = (void*)0;
                        int *l_1318 = &l_1093;
                        int *l_1319 = &l_1198;
                        int *l_1320 = &l_984;
                        int *l_1321 = &g_549;
                        int *l_1322 = &l_983;
                        int *l_1323 = &l_1314;
                        int *l_1324 = &l_1314;
                        int *l_1325 = &l_976;
                        int *l_1326 = &l_1261;
                        int *l_1327 = &l_915;
                        int *l_1328 = &l_1238;
                        int l_1329 = 0x9F0E22A5L;
                        int *l_1330 = &l_1166;
                        int *l_1331 = &g_65;
                        int *l_1332 = &l_1314;
                        int *l_1333 = &l_976;
                        int *l_1334 = &l_1216;
                        int *l_1335 = &l_984;
                        int *l_1336 = (void*)0;
                        int *l_1337 = &l_1233;
                        int *l_1338 = &l_1329;
                        int *l_1339 = &g_75;
                        int *l_1340 = &l_1238;
                        int *l_1341 = &l_1166;
                        int *l_1342 = &l_1198;
                        int *l_1343 = &l_922;
                        int l_1344 = 0x692B3A09L;
                        int *l_1345 = &l_834;
                        int *l_1346 = &l_1089;
                        int *l_1347 = &l_886;
                        int *l_1348 = &l_1224;
                        int *l_1349 = &l_852;
                        int *l_1350 = (void*)0;
                        int *l_1351 = (void*)0;
                        int *l_1352 = &l_886;
                        int *l_1353 = &g_65;
                        int *l_1354 = &l_1025;
                        int *l_1355 = &l_1025;
                        int *l_1356 = &l_1329;
                        int *l_1357 = &l_1089;
                        int *l_1358 = &l_981;
                        int *l_1359 = &l_1025;
                        int *l_1360 = &l_837;
                        int *l_1361 = &l_1025;
                        int *l_1362 = &l_837;
                        int *l_1363 = &l_1198;
                        int *l_1364 = &l_1010;
                        int *l_1365 = &g_75;
                        int *l_1366 = &l_1089;
                        int *l_1367 = &l_800;
                        int *l_1370 = &l_1344;
                        int *l_1371 = &l_981;
                        int *l_1372 = &l_800;
                        int *l_1373 = &l_1166;
                        int *l_1374 = &l_801;
                        int *l_1375 = &g_238;
                        int *l_1376 = &l_1329;
                        int *l_1377 = &l_960;
                        int *l_1378 = &l_886;
                        int *l_1380 = &l_801;
                        int *l_1381 = &l_852;
                        int *l_1382 = &l_954;
                        int *l_1383 = &l_981;
                        int *l_1384 = &l_976;
                        int *l_1385 = &l_882;
                        ++g_1386;
                    }
                }
                else
                {
                    (*g_325) = p_26;
                }
            }
            for (l_915 = 10; (l_915 <= (-25)); l_915 = safe_sub_func_int16_t_s_s(l_915, 2))
            {
                if ((safe_add_func_int16_t_s_s(p_25, (g_996 | (g_97 , 0xF17CL)))))
                {
                    const unsigned l_1395 = 4294967289UL;
                    (*l_788) = (**l_789);
                    for (l_837 = (-24); (l_837 == 11); l_837 = safe_add_func_int64_t_s_s(l_837, 7))
                    {
                        if ((*g_548))
                            break;
                        (*g_548) = (0x45EF92ABL != l_1395);
                    }
                    (**l_789) = p_26;
                    if ((*g_548))
                        break;
                }
                else
                {
                    (*l_802) = (*p_26);
                }
            }
        }
        else
        {
            l_1396 = (void*)0;
            return g_97;
        }
        if ((*p_26))
        {
            int *l_1397 = &l_981;
            p_26 = p_26;
            (*l_1397) &= (*p_26);
            return p_25;
        }
        else
        {
            long long l_1400 = 0L;
            char *l_1401 = (void*)0;
            char *l_1402 = (void*)0;
            char *l_1403 = (void*)0;
            int *l_1404 = &l_852;
            int *l_1405 = &l_984;
            int *l_1406 = &g_65;
            int *l_1407 = (void*)0;
            int *l_1408 = &l_915;
            int *l_1409 = (void*)0;
            int *l_1410 = &g_549;
            int *l_1411 = &g_238;
            int *l_1412 = &l_852;
            int *l_1413 = (void*)0;
            int *l_1414 = &l_858;
            int *l_1415 = &l_922;
            int *l_1416 = &l_886;
            int *l_1417 = &g_549;
            int *l_1418 = &l_984;
            int *l_1419 = &l_886;
            int *l_1420 = &l_834;
            int *l_1421 = &l_852;
            int *l_1422 = &l_886;
            int *l_1423 = &l_922;
            int *l_1424 = &g_65;
            int *l_1425 = &l_984;
            int *l_1426 = &g_65;
            int *l_1427 = &l_922;
            int *l_1428 = &g_65;
            int *l_1429 = &l_858;
            int *l_1430 = &l_922;
            int l_1431 = (-1L);
            int *l_1432 = (void*)0;
            int *l_1433 = (void*)0;
            int *l_1434 = &l_834;
            int *l_1435 = &g_75;
            int l_1470 = (-1L);
            int l_1477 = 4L;
            int l_1501 = 0x02F8A3A5L;
            int l_1503 = (-3L);
            (*g_378) = l_1404;
            l_1436--;
            (*g_378) = (**g_377);
            for (g_97 = 0; (g_97 >= 13); g_97 = safe_add_func_uint16_t_u_u(g_97, 1))
            {
                short l_1441 = 0xDED8L;
                int l_1442 = 0x931AAE0CL;
                int l_1443 = (-2L);
                int l_1444 = 8L;
                int *l_1445 = &l_834;
                int *l_1446 = (void*)0;
                int *l_1447 = &l_886;
                int *l_1448 = &g_65;
                int *l_1449 = &l_858;
                int *l_1450 = (void*)0;
                int *l_1451 = (void*)0;
                int *l_1452 = &l_1442;
                int *l_1453 = &l_869;
                int *l_1454 = &l_882;
                int *l_1455 = &g_549;
                int *l_1456 = &l_1010;
                int *l_1457 = &l_1431;
                int *l_1458 = (void*)0;
                int *l_1459 = &l_877;
                int *l_1460 = &l_1442;
                int *l_1461 = &l_922;
                int *l_1462 = &l_922;
                int *l_1463 = &l_1442;
                int *l_1464 = (void*)0;
                int *l_1465 = &l_869;
                int *l_1466 = &l_837;
                int *l_1467 = &l_858;
                int *l_1468 = &l_983;
                int *l_1469 = (void*)0;
                int *l_1471 = &l_981;
                int *l_1472 = (void*)0;
                int *l_1473 = &l_834;
                int *l_1474 = &g_238;
                int *l_1475 = &l_922;
                int l_1476 = 0x8674A891L;
                int *l_1478 = &l_1476;
                int l_1479 = 0xDCE56C6CL;
                int *l_1480 = (void*)0;
                int *l_1481 = &l_960;
                int *l_1482 = &l_984;
                int *l_1483 = &l_922;
                int l_1484 = (-3L);
                int *l_1485 = (void*)0;
                int *l_1486 = &l_852;
                int *l_1487 = &l_976;
                int l_1488 = 0x6D220284L;
                int *l_1489 = &l_1470;
                int *l_1490 = &l_960;
                int *l_1491 = &l_801;
                int *l_1492 = &l_837;
                int *l_1493 = &l_1479;
                int *l_1494 = (void*)0;
                int *l_1495 = &l_882;
                int *l_1496 = &l_834;
                int *l_1497 = &l_886;
                int *l_1498 = &l_1477;
                int *l_1499 = &l_976;
                int *l_1500 = &l_801;
                int *l_1502 = &l_886;
                int *l_1504 = &l_1488;
                unsigned long long l_1545 = 4UL;
                const unsigned short *l_1559 = &l_783;
                l_1505++;
                if ((*p_26))
                    break;
                if ((*g_103))
                    break;
                for (l_1444 = 0; (l_1444 < (-5)); l_1444 = safe_sub_func_int32_t_s_s(l_1444, 3))
                {
                    unsigned char l_1512 = 0xA3L;
                    unsigned * const ***l_1519 = (void*)0;
                    unsigned *l_1520 = (void*)0;
                    unsigned *l_1521 = (void*)0;
                    unsigned *l_1522 = &l_1505;
                    unsigned short *l_1558 = &l_814;
                    unsigned long long *l_1560 = &l_1040;
                    l_1512 = (((*l_1429) &= (safe_mul_func_int8_t_s_s(g_996, (-1L)))) >= p_25);
                }
            }
        }
    }
    else
    {
        int *l_1561 = &l_981;
        unsigned long long *l_1569 = &l_1542;
        char *l_1570 = &g_73;
        l_795 = ((*l_788) = ((*g_102) = l_1561));
        (*g_548) = (safe_rshift_func_int16_t_s_u(((!(p_25 , (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((-7L), ((*l_1561) != p_25))), 6L)))) | (*l_1561)), 0));
        for (g_75 = (-29); (g_75 < (-2)); g_75++)
        {
            return p_25;
        }
    }
    return g_310;
}







static const unsigned func_40(const int * p_41, int * p_42)
{
    int *l_657 = &g_75;
    unsigned short l_661 = 3UL;
    long long l_665 = 0x0327AA73DDEBD45DLL;
    int l_672 = 0xC711C35DL;
    int l_700 = 0L;
    int l_701 = 1L;
    int l_706 = 0xAAE15F20L;
    int l_724 = 0xEBD1C04FL;
    int l_742 = (-1L);
    int l_763 = 8L;
    int l_775 = (-7L);
    const unsigned l_780 = 0x172701EBL;
    (*l_657) |= (*p_42);
    if ((*l_657))
    {
        int **l_658 = (void*)0;
        int **l_659 = (void*)0;
        int **l_660 = &g_548;
        int *l_662 = &g_65;
        int l_663 = 0x3CB30D84L;
        int *l_664 = &l_663;
        int *l_666 = &g_75;
        int *l_667 = &g_549;
        int *l_668 = (void*)0;
        int *l_669 = &g_549;
        int *l_670 = &g_65;
        int *l_671 = &l_663;
        int *l_673 = &l_663;
        int *l_674 = (void*)0;
        int *l_675 = &g_65;
        int *l_676 = &g_65;
        int *l_677 = &l_672;
        int l_678 = (-9L);
        int l_679 = 0xAABABBD7L;
        int *l_680 = &l_663;
        int *l_681 = &l_678;
        int *l_682 = (void*)0;
        int *l_683 = &l_672;
        int *l_684 = &g_549;
        int *l_685 = &g_549;
        int *l_686 = &l_672;
        int *l_687 = &l_672;
        int *l_688 = (void*)0;
        int *l_689 = (void*)0;
        int *l_690 = &g_65;
        int *l_691 = &g_75;
        int *l_692 = &g_65;
        int *l_693 = (void*)0;
        int *l_694 = (void*)0;
        int *l_695 = &l_663;
        int *l_696 = &g_75;
        int *l_697 = &g_549;
        int *l_698 = (void*)0;
        int *l_699 = &l_672;
        int *l_702 = &l_679;
        int *l_703 = &g_549;
        int *l_704 = &l_679;
        int *l_705 = &g_75;
        int *l_707 = &l_700;
        int *l_708 = &l_706;
        int *l_709 = &l_663;
        int *l_710 = &g_238;
        int *l_711 = &g_549;
        int *l_712 = (void*)0;
        int *l_713 = &l_700;
        int *l_714 = &g_549;
        int *l_715 = &g_75;
        int l_716 = 0L;
        int *l_717 = &g_549;
        int *l_718 = &g_65;
        int l_719 = 0xDEABBF5FL;
        int *l_720 = &l_672;
        int *l_721 = &g_238;
        int *l_722 = &l_700;
        int *l_723 = (void*)0;
        int *l_725 = &l_672;
        int *l_726 = &l_719;
        int l_727 = 0x2D8AA018L;
        int *l_728 = &g_75;
        int *l_729 = &l_701;
        int *l_730 = &l_679;
        int *l_731 = &l_727;
        int *l_732 = &g_549;
        int *l_733 = &g_238;
        int *l_734 = &l_719;
        int *l_735 = &g_65;
        int *l_736 = &g_65;
        int *l_737 = &g_65;
        int *l_738 = &l_678;
        int *l_739 = &l_716;
        int *l_740 = &g_238;
        int *l_741 = &l_706;
        int *l_743 = &l_672;
        int *l_744 = &l_701;
        int *l_745 = &l_742;
        int *l_746 = (void*)0;
        int *l_747 = &g_238;
        int *l_748 = &l_700;
        int *l_749 = (void*)0;
        int *l_750 = &l_663;
        int *l_751 = &l_672;
        int *l_752 = &g_549;
        int *l_753 = &l_719;
        int *l_754 = &g_75;
        int *l_755 = &l_700;
        int *l_756 = (void*)0;
        int *l_757 = &l_742;
        int *l_758 = &l_724;
        int *l_759 = &l_678;
        int *l_760 = &l_672;
        int *l_761 = &l_672;
        int l_762 = 0x2917DDB6L;
        int *l_764 = &l_679;
        int *l_765 = &g_549;
        int *l_766 = &l_727;
        int *l_767 = &l_700;
        int l_768 = (-4L);
        int *l_769 = &g_549;
        int *l_770 = &l_672;
        int *l_771 = &l_679;
        int *l_772 = &g_549;
        int *l_773 = &l_716;
        int *l_774 = &g_238;
        l_661 = (l_657 != ((*l_660) = p_42));
        g_776--;
    }
    else
    {
        const unsigned l_779 = 0xA138B695L;
        return l_779;
    }
    return l_780;
}







static const int * func_43(int * const p_44, int * p_45)
{
    char l_556 = 1L;
    int l_587 = 0x8AB148E8L;
    int l_610 = 0x69B2CAB1L;
    long long l_622 = 1L;
    int l_623 = 0x862B212AL;
    int l_624 = 5L;
    int l_634 = 0x6BDB91CCL;
    int l_638 = 0L;
    const int *l_654 = &l_587;
    const int *l_655 = &l_624;
    (*g_378) = (**g_377);
    for (g_73 = 0; (g_73 >= 11); ++g_73)
    {
        int *l_552 = &g_75;
        int *l_553 = &g_75;
        int *l_554 = &g_75;
        int *l_555 = &g_75;
        int *l_557 = &g_75;
        int *l_558 = &g_75;
        int *l_559 = &g_549;
        int *l_560 = &g_75;
        int *l_561 = &g_549;
        int *l_562 = &g_75;
        int *l_563 = &g_549;
        int l_564 = 0xF38F12F4L;
        int *l_565 = &g_65;
        int *l_566 = &g_75;
        int *l_567 = &g_549;
        int *l_568 = (void*)0;
        int *l_569 = &l_564;
        int l_570 = 0x5525F55CL;
        int *l_571 = (void*)0;
        int *l_572 = &g_75;
        int *l_573 = (void*)0;
        int *l_574 = &l_570;
        int *l_575 = &g_549;
        int l_576 = 0xA6AA0306L;
        int *l_577 = &l_564;
        int *l_578 = &g_75;
        int *l_579 = &l_570;
        int *l_580 = &l_576;
        int *l_581 = &g_65;
        int *l_582 = (void*)0;
        int *l_583 = &g_238;
        int *l_584 = (void*)0;
        int *l_585 = &l_564;
        int *l_586 = (void*)0;
        int *l_588 = (void*)0;
        int *l_589 = &g_65;
        int l_590 = (-4L);
        int *l_592 = (void*)0;
        int *l_593 = &l_576;
        int *l_594 = &l_587;
        int *l_595 = &l_570;
        int *l_596 = &l_570;
        int *l_597 = &l_564;
        int *l_598 = &l_570;
        int *l_599 = &l_590;
        int l_600 = 0xBF76EF71L;
        int *l_601 = &l_570;
        int *l_602 = &l_590;
        int *l_603 = &l_564;
        int *l_604 = &l_587;
        int *l_605 = &l_590;
        int *l_606 = &l_576;
        int *l_607 = &l_564;
        int l_608 = 0x7386AE05L;
        int *l_609 = (void*)0;
        int *l_611 = &l_600;
        int *l_612 = &l_610;
        int *l_613 = &l_564;
        int *l_614 = (void*)0;
        int *l_615 = &l_590;
        int *l_616 = &l_570;
        int *l_617 = &l_587;
        int *l_618 = &l_570;
        unsigned long long l_619 = 18446744073709551614UL;
        int *l_625 = &l_610;
        int *l_626 = &g_65;
        int *l_627 = &l_570;
        int *l_628 = (void*)0;
        int *l_629 = &l_564;
        int *l_630 = (void*)0;
        int *l_631 = &l_564;
        int *l_632 = &l_564;
        int *l_633 = &l_608;
        int *l_635 = &l_570;
        int *l_636 = &l_576;
        int *l_637 = &l_608;
        int *l_639 = &g_65;
        int *l_640 = (void*)0;
        int *l_641 = &g_238;
        int *l_642 = &l_576;
        int *l_643 = &l_600;
        int *l_644 = (void*)0;
        int *l_645 = (void*)0;
        int *l_646 = &g_75;
        int *l_647 = &g_549;
        int *l_648 = &l_570;
        int *l_649 = &l_608;
        int *l_650 = &l_610;
        unsigned short l_651 = 0x2CDCL;
        l_619--;
        if ((*p_45))
            continue;
        (*g_378) = &l_610;
        ++l_651;
    }
    p_45 = func_46((0xD3321529816D34CALL & ((&l_622 == &l_622) && g_75)));
    (*g_378) = (*g_378);
    return g_656;
}







static int * func_46(unsigned p_47)
{
    const unsigned short l_60 = 65535UL;
    int l_431 = 0xA3139005L;
    int l_477 = 0xDC3ABB43L;
    int *l_513 = &g_238;
    int *l_514 = (void*)0;
    int *l_515 = &g_75;
    int *l_516 = &l_431;
    int *l_517 = (void*)0;
    int *l_518 = (void*)0;
    int *l_519 = &l_431;
    int *l_520 = (void*)0;
    int *l_521 = &g_238;
    int *l_522 = &g_75;
    int *l_523 = &g_238;
    int *l_524 = &g_75;
    int *l_525 = &g_65;
    int *l_526 = &g_75;
    int *l_527 = &g_238;
    int *l_528 = (void*)0;
    int *l_529 = &g_75;
    int *l_530 = &g_238;
    int *l_531 = &l_431;
    int l_532 = 1L;
    int *l_533 = (void*)0;
    int l_534 = (-3L);
    int l_535 = 0L;
    int *l_536 = &l_532;
    int *l_537 = &g_75;
    int *l_538 = &g_238;
    int *l_539 = (void*)0;
    int l_540 = 0x184EF315L;
    int *l_541 = &g_238;
    int *l_542 = &l_431;
    int *l_543 = &l_535;
    unsigned l_544 = 18446744073709551613UL;
    for (g_50 = (-14); (g_50 >= 7); g_50 = safe_add_func_int32_t_s_s(g_50, 1))
    {
        int *l_374 = &g_75;
        l_374 = func_53(func_55(&g_50, l_60, g_50, g_61));
        return (*g_325);
    }
    for (g_313 = 0; (g_313 != 4); ++g_313)
    {
        long long l_418 = 0x12310BAFB8AB7BDCLL;
        int l_420 = 0xF3D5DE6AL;
        int l_423 = 1L;
        int l_454 = (-6L);
        int l_466 = 0xCCE13A80L;
        int l_492 = 0x53062A9CL;
        int l_502 = 0xEFC44F52L;
        (*g_377) = &g_103;
        for (g_238 = 26; (g_238 != (-3)); g_238 = safe_sub_func_uint64_t_u_u(g_238, 8))
        {
            long long l_381 = (-1L);
            int *l_382 = &g_65;
            int *l_383 = &g_75;
            int *l_384 = (void*)0;
            int *l_385 = &g_75;
            int *l_386 = &g_75;
            int *l_387 = &g_75;
            int *l_388 = &g_75;
            int *l_389 = &g_65;
            int *l_390 = &g_65;
            int *l_391 = &g_65;
            int *l_392 = (void*)0;
            int *l_393 = &g_65;
            int *l_394 = &g_75;
            int *l_395 = &g_65;
            int l_396 = 0xC99466FFL;
            int *l_397 = &g_65;
            int *l_398 = &l_396;
            int *l_399 = &g_75;
            int *l_400 = &g_65;
            int *l_401 = (void*)0;
            int *l_402 = &g_65;
            int *l_403 = &g_75;
            int *l_404 = &g_65;
            int *l_405 = &l_396;
            int *l_406 = &g_65;
            int *l_407 = &l_396;
            int *l_408 = &g_75;
            int *l_409 = &g_75;
            int *l_410 = &l_396;
            int *l_411 = &l_396;
            int *l_412 = &g_75;
            int *l_413 = &l_396;
            int *l_414 = &l_396;
            int *l_415 = &l_396;
            int *l_416 = &g_75;
            int *l_417 = &g_75;
            int *l_419 = (void*)0;
            int *l_421 = &g_65;
            int *l_422 = &g_65;
            int *l_424 = &g_75;
            int *l_425 = &g_75;
            int *l_426 = &l_420;
            int *l_427 = (void*)0;
            int *l_428 = &l_423;
            int *l_429 = &l_423;
            int *l_430 = &l_420;
            int l_432 = (-8L);
            int *l_433 = &l_431;
            int *l_434 = &l_420;
            int *l_435 = &g_75;
            int *l_436 = &g_65;
            int *l_437 = (void*)0;
            int *l_438 = &l_396;
            int *l_439 = (void*)0;
            int *l_440 = &l_432;
            int *l_441 = (void*)0;
            int *l_442 = (void*)0;
            int *l_443 = &g_75;
            int *l_444 = &l_432;
            int *l_445 = &l_431;
            int *l_446 = &l_432;
            int *l_447 = (void*)0;
            int *l_448 = (void*)0;
            int *l_449 = &g_75;
            int *l_450 = &g_75;
            int *l_451 = &l_396;
            int *l_452 = &g_65;
            int *l_453 = &g_65;
            int *l_455 = &l_423;
            int *l_456 = (void*)0;
            int *l_457 = &l_396;
            int *l_458 = (void*)0;
            int *l_459 = (void*)0;
            int *l_460 = &l_431;
            int *l_461 = (void*)0;
            int *l_462 = &l_454;
            int *l_463 = (void*)0;
            int *l_464 = &l_420;
            int *l_465 = &l_454;
            int *l_467 = (void*)0;
            int *l_468 = (void*)0;
            int *l_469 = &l_466;
            int *l_470 = &l_454;
            int *l_471 = (void*)0;
            int *l_472 = &g_75;
            int *l_473 = &l_432;
            int *l_474 = (void*)0;
            int *l_475 = (void*)0;
            int *l_476 = (void*)0;
            int *l_478 = (void*)0;
            int *l_479 = &l_431;
            int *l_480 = &l_431;
            int *l_481 = &l_477;
            int *l_482 = &l_396;
            int *l_483 = &g_65;
            int *l_484 = &l_420;
            int *l_485 = &l_423;
            int *l_486 = &g_75;
            int *l_487 = &l_466;
            int l_488 = 0x90C542ADL;
            int *l_489 = &l_432;
            int *l_490 = &l_466;
            int *l_491 = &l_488;
            int *l_493 = (void*)0;
            int *l_494 = (void*)0;
            int *l_495 = &l_431;
            int *l_496 = (void*)0;
            int *l_497 = &g_75;
            int *l_498 = &l_492;
            int *l_499 = &l_477;
            int *l_500 = (void*)0;
            int *l_501 = (void*)0;
            int *l_503 = (void*)0;
            int *l_504 = &l_432;
            int *l_505 = &l_477;
            int *l_506 = &l_420;
            int *l_507 = &l_488;
            int *l_508 = &l_466;
            g_509++;
            (*g_512) = ((*g_378) = (void*)0);
        }
    }
    l_544--;
    return (*g_512);
}







static int * func_53(unsigned * p_54)
{
    unsigned **l_89 = (void*)0;
    unsigned ***l_90 = &l_89;
    const int l_91 = 1L;
    long long *l_94 = &g_95;
    long long *l_96 = &g_97;
    int l_106 = 0L;
    int l_113 = 0x361F3D49L;
    int l_125 = 0x9EDD65E7L;
    int l_130 = 0xCB588F49L;
    int l_142 = 0x83956885L;
    int l_155 = 0L;
    int l_174 = 9L;
    int l_178 = 0x5551AFAAL;
    int l_189 = 8L;
    int l_204 = (-3L);
    int l_220 = 0L;
    int l_234 = (-1L);
    int l_247 = 3L;
    int l_251 = 0x981C0E1BL;
    unsigned l_252 = 2UL;
    int **l_326 = &g_61;
    char l_333 = 0xA8L;
    short *l_370 = &g_335;
    (*l_90) = l_89;
    if ((l_91 , (l_91 & ((safe_lshift_func_uint8_t_u_s(((void*)0 == p_54), g_65)) != ((*l_96) = ((*l_94) = ((+((~l_91) & (0x85L | g_50))) < l_91)))))))
    {
        int **l_98 = (void*)0;
        int *l_99 = &g_75;
        int **l_100 = &g_61;
        int **l_101 = (void*)0;
        (*g_102) = ((((*l_100) = (l_99 = p_54)) != (void*)0) , func_55(p_54, l_91, (((*l_100) = p_54) == &l_91), &g_65));
        l_106 &= (safe_mod_func_uint8_t_u_u(248UL, ((1L || 1L) , g_65)));
    }
    else
    {
        int l_107 = (-3L);
        int *l_108 = &g_65;
        int *l_109 = &l_106;
        int *l_110 = &g_65;
        int *l_111 = &l_106;
        int *l_112 = &l_106;
        int *l_114 = &l_113;
        int *l_115 = &l_113;
        int *l_116 = &l_106;
        int *l_117 = &g_65;
        int *l_118 = &g_75;
        int *l_119 = &l_106;
        int *l_120 = &l_106;
        int *l_121 = &g_75;
        int *l_122 = (void*)0;
        int *l_123 = &g_65;
        int *l_124 = (void*)0;
        int *l_126 = &g_75;
        int *l_127 = &l_125;
        int *l_128 = &g_75;
        int *l_129 = &g_75;
        int *l_131 = &l_113;
        int *l_132 = &g_75;
        int *l_133 = (void*)0;
        int *l_134 = &l_130;
        int *l_135 = &l_125;
        int l_136 = 0x80447D5CL;
        int *l_137 = &g_65;
        int *l_138 = (void*)0;
        int *l_139 = &l_125;
        int *l_140 = &l_125;
        int *l_141 = &l_136;
        int l_143 = (-1L);
        int *l_144 = (void*)0;
        int *l_145 = &l_130;
        int *l_146 = &l_113;
        int *l_147 = &l_143;
        int *l_148 = &l_142;
        int *l_149 = &l_142;
        int *l_150 = &l_136;
        int *l_151 = &g_65;
        int *l_152 = &l_130;
        int *l_153 = &l_143;
        int *l_154 = &g_75;
        int *l_156 = &l_143;
        int l_157 = (-7L);
        int *l_158 = &l_155;
        int *l_159 = (void*)0;
        int *l_160 = &g_75;
        int *l_161 = &l_136;
        int *l_162 = (void*)0;
        int *l_163 = &l_130;
        int *l_164 = &l_130;
        int *l_165 = &g_65;
        int *l_166 = &l_136;
        int *l_167 = &g_65;
        int *l_168 = (void*)0;
        int *l_169 = &g_75;
        int *l_170 = &l_155;
        int *l_171 = &l_113;
        int l_172 = 0xE8DB49C3L;
        int *l_173 = &g_75;
        int l_175 = (-1L);
        int *l_176 = &l_157;
        int *l_177 = (void*)0;
        int *l_179 = &l_113;
        int *l_180 = &l_175;
        int *l_181 = &l_125;
        int *l_182 = &l_125;
        int *l_183 = &l_157;
        int l_184 = 3L;
        int *l_185 = &l_172;
        int *l_186 = (void*)0;
        int *l_187 = &l_142;
        int *l_188 = &l_125;
        int *l_190 = &l_142;
        int *l_191 = &l_136;
        int *l_192 = (void*)0;
        int *l_193 = &l_175;
        int l_194 = (-2L);
        int *l_195 = &l_106;
        int *l_196 = &l_142;
        int *l_197 = &l_157;
        int *l_198 = &l_155;
        int *l_199 = &l_174;
        int *l_200 = &l_125;
        int *l_201 = &l_136;
        int *l_202 = (void*)0;
        int l_203 = 0x86ABA2F2L;
        int *l_205 = &l_106;
        int *l_206 = &l_184;
        int *l_207 = &l_157;
        int *l_208 = &l_157;
        int *l_209 = &l_178;
        int *l_210 = &l_178;
        int *l_211 = &l_174;
        int *l_212 = (void*)0;
        int *l_213 = (void*)0;
        int *l_214 = &l_130;
        int *l_215 = &l_157;
        int *l_216 = (void*)0;
        int *l_217 = &l_106;
        int *l_218 = &g_65;
        int *l_219 = &l_130;
        int *l_221 = &l_175;
        int *l_222 = (void*)0;
        int *l_223 = &l_130;
        int *l_224 = &l_194;
        int *l_225 = &l_113;
        int *l_226 = &l_178;
        int l_227 = (-1L);
        int *l_228 = &l_155;
        int *l_229 = &l_178;
        int l_230 = 1L;
        int *l_231 = &l_227;
        int *l_232 = &l_113;
        int *l_233 = (void*)0;
        int *l_235 = &l_143;
        int *l_236 = &l_113;
        int *l_237 = &l_130;
        int *l_240 = &l_113;
        int *l_241 = &l_113;
        int *l_242 = &g_65;
        int *l_243 = &l_157;
        int *l_244 = &l_204;
        int *l_245 = (void*)0;
        int *l_246 = &l_155;
        int *l_248 = &g_65;
        int *l_249 = &g_75;
        int *l_250 = &g_238;
        --l_252;
        for (g_65 = 0; (g_65 > (-27)); g_65 = safe_sub_func_int16_t_s_s(g_65, 5))
        {
            unsigned char l_265 = 253UL;
            int l_296 = (-2L);
            int l_298 = 0L;
            int l_300 = 0x25B8D42BL;
            unsigned *l_323 = &l_252;
            const unsigned *l_331 = (void*)0;
            const unsigned **l_330 = &l_331;
            const unsigned ***l_329 = &l_330;
            short *l_334 = &g_335;
            for (l_106 = 0; (l_106 >= 17); l_106 = safe_add_func_uint32_t_u_u(l_106, 5))
            {
                char *l_270 = &g_73;
                int l_271 = 9L;
                unsigned l_272 = 0x53D42119L;
                int *l_282 = &g_238;
                int l_290 = (-1L);
                int l_291 = 0x82ABCCD4L;
                int l_292 = 3L;
                int l_293 = 1L;
                int l_295 = 0x29C93A30L;
                int *l_324 = &l_292;
                unsigned ****l_328 = &l_90;
                const unsigned ****l_332 = &l_329;
            }
            l_298 = (*l_170);
            (*l_326) = func_55(&g_50, l_298, g_50, func_55(func_55(&g_50, l_298, ((*l_334) &= g_73), (*g_325)), ((void*)0 != &l_330), (*l_191), &g_238));
        }
        for (l_333 = 0; (l_333 < 24); l_333 = safe_add_func_int64_t_s_s(l_333, 6))
        {
            int l_338 = 0xE6810FC3L;
            int l_339 = 0x0E61FE24L;
            int l_340 = 0x1D3F6865L;
            int l_341 = 0L;
            int l_343 = 0x93510A1EL;
            int l_344 = 0L;
            int l_345 = 1L;
            int *l_346 = &l_340;
            int *l_347 = (void*)0;
            int *l_348 = &l_142;
            int *l_349 = &l_174;
            int *l_350 = &l_178;
            int *l_351 = (void*)0;
            int *l_352 = &l_345;
            int *l_353 = &l_345;
            int *l_354 = &l_174;
            int *l_355 = &l_113;
            int l_356 = 9L;
            int *l_357 = &g_238;
            int *l_358 = &l_106;
            int *l_359 = (void*)0;
            int *l_360 = &l_184;
            int *l_361 = &l_220;
            int *l_362 = &g_238;
            g_363++;
        }
        (*l_326) = (*g_102);
    }
    (*g_373) = (safe_mul_func_int16_t_s_s(((*l_370) &= (safe_sub_func_uint16_t_u_u((g_95 && ((void*)0 == &g_50)), ((void*)0 == &p_54)))), (safe_lshift_func_int16_t_s_u(l_234, 11))));
    return (*l_326);
}







static unsigned * func_55(unsigned * p_56, const unsigned short p_57, short p_58, int * p_59)
{
    unsigned long long l_83 = 0x245E34605DD88BA5LL;
    unsigned *l_86 = &g_50;
    int *l_88 = &g_75;
    for (p_58 = (-12); (p_58 <= (-3)); p_58++)
    {
        int *l_64 = &g_65;
        int *l_66 = &g_65;
        int *l_67 = &g_65;
        int *l_68 = (void*)0;
        int *l_69 = &g_65;
        int *l_70 = (void*)0;
        int *l_71 = &g_65;
        int *l_72 = &g_65;
        int *l_74 = &g_65;
        int *l_76 = &g_75;
        int *l_78 = &g_75;
        int *l_79 = &g_65;
        int *l_80 = &g_75;
        int *l_81 = &g_75;
        int *l_82 = &g_75;
        ++l_83;
        return p_59;
    }
    (*l_88) |= ((g_73 , 0x070A6219FF40B36FLL) , (l_83 , ((l_83 , l_86) == (l_83 , (void*)0))));
    (*l_88) = (-8L);
    return &g_50;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1146, "g_1146", print_hash_value);
    transparent_crc(g_1386, "g_1386", print_hash_value);
    transparent_crc(g_1518, "g_1518", print_hash_value);
    transparent_crc(g_1541, "g_1541", print_hash_value);
    transparent_crc(g_1808, "g_1808", print_hash_value);
    transparent_crc(g_1815, "g_1815", print_hash_value);
    transparent_crc(g_1820, "g_1820", print_hash_value);
    transparent_crc(g_1960, "g_1960", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
