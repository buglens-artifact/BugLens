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
   char * f0;
   const unsigned f1;
};

union U1 {
   volatile signed f0 : 1;
   short f1;
   volatile short f2;
};


static char g_16 = 0xA5L;
static int g_57 = 0x50B7F45BL;
static const int *g_60 = &g_57;
static const int ** volatile g_59 = &g_60;
static int * volatile g_62 = &g_57;
static char g_80 = 0xDAL;
static char g_99 = 0L;
static unsigned char g_105 = 252UL;
static int *g_124 = &g_57;
static int **g_123 = &g_124;
static unsigned char g_130 = 0UL;
static int g_132 = 0x904586DBL;
static int g_134 = (-10L);
static unsigned short g_155 = 0x0203L;
static volatile int g_176 = 0L;
static union U1 g_183 = {0x32DA6A28L};
static union U0 g_185 = {0};
static union U0 *g_187 = &g_185;
static union U0 ** volatile g_186 = &g_187;
static union U1 *g_191 = &g_183;
static union U1 ** volatile g_190 = &g_191;
static int g_215 = (-8L);
static char g_227 = (-1L);
static unsigned short g_231 = 0UL;
static unsigned g_232 = 9UL;
static int * volatile g_267 = &g_132;
static volatile union U1 g_269 = {0xB5ABC4B9L};
static const volatile union U1 * const g_268 = &g_269;
static const volatile union U1 *g_271 = &g_269;
static const volatile union U1 ** volatile g_270 = &g_271;
static unsigned g_292 = 1UL;
static int *g_307 = &g_132;
static int * volatile g_308 = &g_215;
static int * volatile g_338 = &g_215;
static int g_354 = 0xBF5C2DFBL;
static const union U1 *g_368 = &g_183;
static const union U1 ** volatile g_367 = &g_368;
static char *g_375 = &g_16;
static int g_388 = 0xCEFF6CCFL;
static char **g_391 = &g_375;
static char g_444 = (-1L);
static volatile unsigned short g_462 = 65535UL;
static int ** const volatile g_463 = &g_307;
static union U0 g_491 = {0};
static const int ** volatile g_520 = &g_60;



static union U1 func_1(void);
static int func_2(char * p_3, int p_4, unsigned p_5, char * p_6, const char * const p_7);
static char * func_8(union U0 p_9, short p_10);
static union U0 func_11(unsigned p_12, char * p_13, int p_14, char * p_15);
static char * func_18(int p_19, int p_20, short p_21, int p_22);
static int func_23(char * p_24, unsigned p_25, short p_26, union U0 p_27, int p_28);
static unsigned short func_30(char * p_31, char * p_32, char * p_33, char * p_34, unsigned p_35);
static char * func_36(unsigned char p_37, char * p_38, char * const p_39);
static char * func_40(unsigned p_41);
static char * func_46(char * p_47, int p_48, char * p_49, unsigned p_50);
static union U1 func_1(void)
{
    unsigned short l_17 = 0x5047L;
    char *l_29 = (void*)0;
    char **l_178 = (void*)0;
    char *l_180 = &g_80;
    char **l_179 = &l_180;
    union U0 l_233 = {0};
    int *l_353 = &g_354;
    int ***l_413 = &g_123;
    int ****l_412 = &l_413;
    char *l_441 = &g_99;
    char l_449 = 0xCFL;
    char *l_458 = &g_99;
    union U1 *l_466 = &g_183;
    unsigned l_472 = 0xC7243162L;
    char l_483 = (-1L);
    int l_502 = 0x0F56E2CBL;
    (*l_353) &= func_2(func_8(func_11(g_16, &g_16, l_17, func_18(l_17, func_23(l_29, (((func_30(&g_16, &g_16, func_36(g_16, ((*l_179) = func_40((safe_add_func_int16_t_s_s((l_17 > g_16), g_16)))), &g_16), l_29, g_16) != (-8L)) > g_16) != l_17), l_17, l_233, g_16), l_17, g_16)), l_17), g_16, l_17, &g_16, &g_16);

    ;
    ;

    ;
    ;
    ;
    if ((safe_sub_func_uint16_t_u_u(g_16, (g_132 | ((*l_353) |= 0L)))))
    {
        unsigned l_357 = 0UL;
        char *l_372 = &g_80;
        int ****l_416 = &l_413;
        int l_419 = 0L;
        const char * const l_469 = &g_444;
        if (l_357)
        {
            const union U1 *l_366 = &g_183;
            const int l_369 = 0xE5606840L;
            for (g_80 = 5; (g_80 < (-23)); g_80 = safe_sub_func_int16_t_s_s(g_80, 5))
            {
                (*g_338) |= l_357;
            }
            for (g_183.f1 = 22; (g_183.f1 <= (-26)); --g_183.f1)
            {
                unsigned char l_378 = 0x7CL;
                const char * const l_389 = &g_16;
                unsigned l_390 = 0x8550A6A3L;
                for (g_354 = (-1); (g_354 >= (-25)); g_354 = safe_sub_func_uint16_t_u_u(g_354, 2))
                {
                    unsigned char *l_379 = &g_105;
                    unsigned short *l_386 = (void*)0;
                    unsigned short *l_387 = &g_155;
                    for (g_16 = 0; (g_16 <= (-5)); g_16 = safe_sub_func_uint16_t_u_u(g_16, 1))
                    {
                        (*g_367) = l_366;
                        if (l_369)
                            continue;
                        (*g_123) = (void*)0;
                        if ((*g_267))
                            break;
                    }
                    (*g_307) = ((safe_mul_func_int8_t_s_s((func_2(l_372, ((safe_mod_func_int8_t_s_s((*l_353), l_357)) || func_2(g_375, (safe_mod_func_uint8_t_u_u(((*l_379) = l_378), g_176)), (safe_add_func_int32_t_s_s((*g_60), (8UL || (safe_lshift_func_uint16_t_u_u(((g_388 = (+((safe_add_func_uint16_t_u_u(((*l_387) = 65535UL), 0xD5FBL)) != g_227))) | 0x3967L), (*l_353)))))), &g_227, &g_16)), l_369, &g_80, l_389) < (*g_375)), l_357)) >= l_390);
                }
            }

                    }
        else
        {
            char *l_392 = &g_227;
            int l_393 = 3L;
            union U0 *l_408 = &l_233;
            union U0 **l_409 = &g_187;
            union U0 **l_410 = &g_187;
            union U0 **l_411 = &l_408;
            int *****l_414 = (void*)0;
            int *****l_415 = &l_412;
            unsigned short *l_417 = &g_155;
            unsigned char l_418 = 0x60L;
            char ***l_452 = (void*)0;
            (*l_353) = (((((g_391 = &l_29) != (void*)0) <= func_2(l_392, (*g_62), l_393, ((*l_179) = (*l_179)), &g_16)) | (safe_mul_func_uint16_t_u_u(l_357, g_388))) ^ g_232);

            ;
            l_419 &= ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(2UL, ((*g_267) != (safe_mod_func_int8_t_s_s(((((((*l_411) = l_408) == &g_185) & 255UL) || (g_292 = ((0x0205L || (*l_353)) <= ((*l_417) = ((*l_353) > (((*l_415) = l_412) == l_416)))))) == g_105), g_132))))) | 0x1695L), (*g_375))), (*g_375))) | l_418), g_388)) > 0L), 6)) == (*g_307));
            for (g_99 = (-1); (g_99 != (-9)); g_99 = safe_sub_func_int32_t_s_s(g_99, 6))
            {
                int l_424 = 0x9ABE34B0L;
                unsigned *l_453 = &l_357;
                unsigned char l_468 = 1UL;
            }
        }

        ;
    }
    else
    {
        unsigned char l_473 = 255UL;
        int l_482 = 0xB3959362L;
        union U0 *l_489 = &l_233;
        char *l_492 = &g_16;
        int l_500 = (-1L);
        l_472 &= 0x683ACA40L;
        (*l_353) = ((((0xFBC8L >= (l_473 >= (((l_482 = (!(((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*g_307) = l_473), 0x5EE2A7A3L)), (*l_353))) ^ (safe_lshift_func_int8_t_s_s((*g_375), ((*l_458) = l_473)))) == (safe_sub_func_int32_t_s_s((*l_353), l_473))))) ^ 255UL) & (*g_308)))) < 65531UL) <= 4294967295UL) > 1UL);
        if (l_483)
        {
            int l_486 = (-1L);
            (*l_353) &= (safe_mul_func_int16_t_s_s(l_486, l_473));
        }
        else
        {
            union U0 *l_490 = &g_491;
            char l_493 = 0xA9L;
            char **l_496 = &l_29;
            unsigned l_497 = 0x38BA8A39L;
            unsigned *l_498 = (void*)0;
            unsigned char *l_499 = &l_473;
            char *l_501 = &g_227;
            unsigned l_516 = 3UL;
            for (l_483 = 0; (l_483 <= 17); l_483++)
            {
                l_490 = l_489;

                ;
            }

            ;
            (*l_353) |= l_473;
            for (g_388 = (-29); (g_388 >= 13); g_388++)
            {
                unsigned l_514 = 1UL;
                char *l_515 = (void*)0;
                for (g_215 = 0; (g_215 <= (-29)); g_215--)
                {
                    unsigned l_513 = 0x7D5CC352L;
                    char *l_517 = &l_449;
                    unsigned *l_518 = (void*)0;
                    unsigned *l_519 = &l_516;
                    (*l_353) ^= (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((3L && 4294967295UL), (func_2((*g_391), l_513, ((*l_519) &= func_2((*g_391), (*g_267), g_444, l_517, (*g_391))), l_517, (*l_179)) > l_482))) && g_99), 0xE8L)), l_497));

                    ;
                    (***l_412) = (*g_463);

                    ;
                    (*g_520) = (*g_59);
                }
            }

            ;
        }

        ;
        return (*l_466);

            }

    ;
    return (*g_271);


    }







static int func_2(char * p_3, int p_4, unsigned p_5, char * p_6, const char * const p_7)
{
    union U1 *l_350 = &g_183;
    union U1 **l_351 = (void*)0;
    union U1 **l_352 = &g_191;
    (*g_307) |= ((l_350 = l_350) != ((*l_352) = (*g_190)));
    (*g_123) = (void*)0;

    ;
    return (**g_59);
}







static char * func_8(union U0 p_9, short p_10)
{
    const int *l_348 = &g_215;
    char *l_349 = (void*)0;
    l_348 = (*g_59);

    ;
    return l_349;


}







static union U0 func_11(unsigned p_12, char * p_13, int p_14, char * p_15)
{
    union U0 l_345 = {0};
    for (g_232 = 24; (g_232 == 39); g_232 = safe_add_func_uint32_t_u_u(g_232, 5))
    {
        short l_346 = (-2L);
        union U0 l_347 = {0};
        for (g_215 = 0; (g_215 >= 20); ++g_215)
        {
            if ((g_269.f0 <= g_57))
            {
                int *l_344 = &g_132;
                (*g_123) = l_344;

                ;
            }
            else
            {
                return l_345;


                            }

            ;
            l_346 = ((*g_124) = (((void*)0 == &p_14) && p_12));
        }


        ;
        return l_347;


            }
    return l_345;


    }







static char * func_18(int p_19, int p_20, short p_21, int p_22)
{
    unsigned char l_337 = 0xA9L;
    char *l_339 = &g_80;
    (*g_123) = &p_19;

    ;
    (*g_124) = (*g_62);
    (*g_338) ^= ((**g_123) = (((((*g_307) = l_337) & p_19) ^ (l_337 && l_337)) != (~1UL)));
    return l_339;



}







static int func_23(char * p_24, unsigned p_25, short p_26, union U0 p_27, int p_28)
{
    const int l_240 = (-1L);
    char *l_241 = (void*)0;
    unsigned short *l_242 = (void*)0;
    unsigned short *l_243 = &g_155;
    char *l_244 = &g_227;
    union U1 **l_265 = &g_191;
    union U0 **l_272 = &g_187;
    const short l_299 = (-6L);
    union U1 *l_317 = &g_183;
    const int * const *l_320 = &g_60;
    const int * const **l_319 = &l_320;
    int l_321 = (-6L);
    int l_329 = 0x22EE6539L;
    (**g_123) = (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_240, g_176)), l_240));
    if ((*g_60))
    {
        int *l_249 = (void*)0;
        int l_252 = (-1L);
        for (g_99 = 0; (g_99 == (-16)); g_99 = safe_sub_func_uint8_t_u_u(g_99, 2))
        {
            unsigned char l_250 = 0x6EL;
            int l_251 = 0L;
            for (g_231 = (-8); (g_231 >= 57); g_231++)
            {
                int *l_253 = (void*)0;
                int *l_254 = (void*)0;
                union U1 *l_255 = (void*)0;
                (*g_123) = (l_249 = l_249);

                ;
                l_250 = (*g_60);
                if (((*g_62) ^= (l_252 ^= (l_251 ^= (l_250 < p_25)))))
                {
                    unsigned l_256 = 0UL;
                    unsigned l_262 = 0xAF6FDADEL;
                    (*g_190) = l_255;

                    ;
                    if (l_256)
                        continue;
                    for (g_155 = 0; (g_155 > 11); g_155 = safe_add_func_uint16_t_u_u(g_155, 3))
                    {
                        int *l_261 = &g_215;
                        (*g_123) = l_249;
                        l_262 = (safe_lshift_func_int8_t_s_u((p_28 > g_155), (((&p_28 == l_261) & 0x73321FACL) > p_26)));
                    }
                }
                else
                {
                    union U1 ***l_266 = &l_265;
                    int *l_273 = &g_134;
                    int **l_274 = &l_273;
                    if ((safe_sub_func_uint8_t_u_u((g_231 ^ g_80), (((*l_266) = l_265) != &l_255))))
                    {
                        (*g_267) ^= p_25;
                    }
                    else
                    {
                        (*g_270) = g_268;
                        (*g_123) = &p_28;

                        ;
                        (*g_267) |= p_28;
                        l_272 = &g_187;
                    }

                    ;
                    (*l_273) &= (l_251 = ((*g_62) = (*g_267)));
                    (*l_274) = ((*g_123) = &p_28);

                    ;
                    ;
                    return (*g_267);


                }

                ;
                for (g_132 = 22; (g_132 >= 9); g_132--)
                {
                    unsigned l_279 = 18446744073709551611UL;
                    for (g_105 = 25; (g_105 > 2); g_105 = safe_sub_func_uint32_t_u_u(g_105, 3))
                    {
                        int *l_280 = &g_215;
                        (*l_280) |= (g_231 >= (g_80 = l_279));
                        if ((*g_60))
                            break;
                    }
                }
            }
        }

        ;
        ;
        return p_26;
    }
    else
    {
        int l_285 = 0xFF9ED612L;
        char *l_288 = (void*)0;
        unsigned char *l_289 = &g_105;
        char * const l_290 = &g_99;
        unsigned *l_291 = &g_292;
        if ((safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(0x2CA5F56CL, (((l_285 < (safe_mul_func_uint16_t_u_u(((((*l_291) = g_99) | 0xC1CD0E78L) & g_227), l_240))) > 0x20E4L) <= p_26))) ^ g_99) == l_285), 0x19L)))
        {
            int l_328 = 0x825D7338L;
            for (g_99 = (-6); (g_99 <= (-26)); g_99--)
            {
                short l_300 = 5L;
                union U1 * const **l_311 = (void*)0;
                union U1 * const **l_312 = (void*)0;
                union U1 * const *l_314 = (void*)0;
                union U1 * const **l_313 = &l_314;
                if ((((g_80 = (safe_mod_func_uint16_t_u_u(0x3EDAL, (safe_mul_func_int16_t_s_s(l_299, (l_285 != l_300)))))) || l_285) <= g_231))
                {
                    int *l_304 = &g_132;
                    for (l_300 = (-23); (l_300 < (-19)); l_300++)
                    {
                        char l_303 = 0L;
                        (*g_124) |= l_303;
                        (*g_123) = (*g_123);
                        l_304 = l_304;
                    }
                }
                else
                {
                    for (l_285 = 0; (l_285 != (-15)); --l_285)
                    {
                        g_307 = (*g_123);
                    }
                    (*g_308) &= (g_57 != 8L);
                    if ((*g_307))
                        continue;
                }
                if ((+((safe_lshift_func_uint16_t_u_s(g_105, (&g_271 == ((*l_313) = &g_191)))) || p_28)))
                {
                    short *l_318 = (void*)0;
                    (*l_272) = &p_27;

                    ;
                    (**g_123) = (safe_sub_func_int16_t_s_s((g_183.f1 = (l_317 == (void*)0)), (l_319 != (void*)0)));

                }
                else
                {
                    if ((***l_319))
                        break;
                    return (*g_307);


                }

                ;
                ;
                (*g_307) = l_321;
            }

            ;
            ;
            (**g_123) = (safe_mul_func_int16_t_s_s(0x824AL, ((*g_62) == (((safe_mod_func_uint32_t_u_u(0xA3FFCC7CL, (safe_mul_func_int16_t_s_s(0xD46BL, (((l_285 ^= (l_328 | 249UL)) > l_329) == (**g_123)))))) <= ((*l_290) = p_26)) | 4L))));
            for (l_329 = (-9); (l_329 > 17); l_329 = safe_add_func_int16_t_s_s(l_329, 6))
            {
                unsigned l_334 = 0x29A9D7D5L;
                for (g_292 = (-9); (g_292 != 41); g_292 = safe_add_func_uint8_t_u_u(g_292, 7))
                {
                    return (*g_62);


                }
                if ((***l_319))
                    continue;
                if (l_334)
                    continue;
            }
            (*l_272) = (*g_186);
        }
        else
        {
            for (g_292 = (-6); (g_292 != 33); g_292 = safe_add_func_uint16_t_u_u(g_292, 4))
            {
                return p_28;
            }
        }

        ;
        ;
    }

    ;
    ;
    return p_28;


}







static unsigned short func_30(char * p_31, char * p_32, char * p_33, char * p_34, unsigned p_35)
{
    unsigned l_195 = 0UL;
    unsigned short l_207 = 0x7ABFL;
    int l_230 = 0x36A0D05BL;
    if (((safe_sub_func_int16_t_s_s((l_195 >= (safe_unary_minus_func_uint16_t_u(p_35))), (l_195 | 0xA4L))) && (**g_59)))
    {
        return g_134;
    }
    else
    {
        char **l_198 = (void*)0;
        char ***l_197 = &l_198;
        int l_204 = 0x0B6CD385L;
        short *l_208 = &g_183.f1;
        int ***l_211 = &g_123;
        int ****l_212 = &l_211;
        int *l_213 = (void*)0;
        int *l_214 = &g_215;
        const int **l_216 = &g_60;
        char *l_226 = &g_227;
        (*l_197) = (void*)0;
        (*l_214) = ((((safe_rshift_func_uint8_t_u_s(g_176, ((safe_add_func_uint16_t_u_u(((g_134 = (l_204 = ((*g_124) = (safe_unary_minus_func_int32_t_s((*g_60)))))) > (0x45F4L && (safe_lshift_func_uint16_t_u_s(l_195, ((*l_208) = ((p_35 <= p_35) & l_207)))))), g_130)) && (!((safe_mul_func_uint8_t_u_u((((*l_212) = l_211) == &g_123), 3UL)) <= g_99))))) >= 0xD23BL) <= l_207) ^ p_35);
        (*l_216) = (*g_59);
        g_232 ^= (safe_add_func_uint8_t_u_u((((((g_132 | g_134) && (g_99 = (safe_lshift_func_uint16_t_u_s(l_207, g_99)))) == ((g_231 = (((((((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int8_t_s_u(((*l_226) ^= (g_80 = (*p_31))), 3)) && g_176))), (safe_add_func_uint16_t_u_u(l_195, (l_230 = l_195))))) > 7UL) > 0xC8L) && g_134) | l_195) & 0L) == g_215)) && 0x7DL)) > 0UL) < l_195), (***l_211)));
    }
    return g_232;
}







static char * func_36(unsigned char p_37, char * p_38, char * const p_39)
{
    int *l_181 = &g_134;
    union U1 *l_182 = &g_183;
    char *l_192 = &g_80;
    l_181 = l_181;
    l_182 = l_182;
    if ((**g_123))
    {
        unsigned char l_188 = 1UL;
        if (((*l_181) |= ((**g_123) |= 0xF5F90F01L)))
        {
            union U0 *l_184 = &g_185;
            (*g_186) = l_184;

        }
        else
        {
            union U1 *l_189 = &g_183;
            (*g_124) = (*g_62);
            (**g_123) = ((g_183.f0 <= l_188) < p_37);
            (*g_190) = l_189;
            return &g_16;


        }

    }
    else
    {
        l_181 = l_181;
    }

    (*l_181) &= (**g_123);
    return l_192;


}







static char * func_40(unsigned p_41)
{
    int l_51 = (-1L);
    char *l_52 = (void*)0;
    short l_116 = 0L;
    char l_126 = 0xE0L;
    int l_177 = 0x9BC94048L;
    (*g_62) = (safe_add_func_uint16_t_u_u((p_41 < ((l_52 = func_46(&g_16, l_51, &g_16, ((l_52 == l_52) > (safe_sub_func_uint32_t_u_u((!0x2AFE2499L), l_51))))) != (void*)0)), l_51));

    ;
    for (g_57 = 0; (g_57 <= 25); g_57 = safe_add_func_int16_t_s_s(g_57, 2))
    {
        int *l_77 = &g_57;
        int l_78 = 0xCC907F7AL;
        char *l_79 = &g_80;
        const int l_161 = 0x4CB4AB47L;
        int ***l_163 = &g_123;
        if ((safe_mod_func_uint32_t_u_u(0x6F2C0E84L, (safe_mul_func_uint8_t_u_u(l_51, ((((*l_79) |= (safe_mul_func_int8_t_s_s(((void*)0 == (*g_59)), (((safe_add_func_uint32_t_u_u(p_41, ((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_41 & ((l_77 = l_77) == &l_51)), l_78)), l_78)) != l_78))) ^ 0L) >= 1UL)))) > 0UL) & p_41))))))
        {
            return &g_16;


        }
        else
        {
            int *l_81 = (void*)0;
            int *l_82 = &l_78;
            unsigned char l_85 = 1UL;
            unsigned short l_86 = 0x2B15L;
            (*l_82) = 0L;
            l_51 ^= (safe_mul_func_uint16_t_u_u(0x053AL, (*l_77)));
            if (l_85)
                continue;
            (*l_82) = ((*l_77) >= l_86);
        }
        if ((*l_77))
            continue;
        if ((*g_62))
        {
            int **l_87 = &l_77;
            char *l_98 = &g_99;
            const short l_100 = 0x3622L;
            unsigned l_101 = 0x015DB4C2L;
            unsigned char *l_104 = &g_105;
            int ***l_125 = &g_123;
            unsigned char *l_129 = &g_130;
            int *l_131 = &g_132;
            int *l_133 = &g_134;
            (*l_87) = &l_78;

            ;
            l_101 |= (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(g_80, l_51)) != p_41), p_41)), (((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((((**l_87) && (g_80 >= ((*l_98) ^= (l_51 & g_57)))) >= ((*l_77) != l_100)), p_41)), 4)) == (-2L)) >= (-7L))));
            (*l_133) |= ((safe_add_func_uint8_t_u_u(((*l_104) = g_16), (+(safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(p_41, ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_99, 1)), (l_116 < (safe_sub_func_uint8_t_u_u(((~(safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((((*l_125) = g_123) == (void*)0) || ((*l_131) = (((**l_87) ^= l_126) ^ (safe_mod_func_uint8_t_u_u((***l_125), ((*l_129) ^= (l_51 |= p_41))))))), g_57)), 0xF8L))) ^ (-1L)), p_41))))) != g_99))) == 0x4AL) && 0x6292L), p_41)), g_57))))) > (**g_59));
        }
        else
        {
            int l_148 = 0xFD8B1EB1L;
            char *l_156 = &l_126;
            for (g_105 = (-11); (g_105 < 54); ++g_105)
            {
                int *l_137 = &g_132;
                short *l_151 = &l_116;
                unsigned short *l_154 = &g_155;
                char *l_157 = (void*)0;
                (*g_123) = l_137;

                ;
                (*l_137) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((*l_77), 0)), (g_80 | ((((safe_sub_func_int8_t_s_s(g_130, (*l_137))) != ((safe_add_func_int16_t_s_s(p_41, (safe_rshift_func_int16_t_s_s(p_41, 8)))) <= l_148)) < p_41) != (((*l_151) = (safe_mod_func_int8_t_s_s(((((p_41 <= l_126) >= l_116) < p_41) == l_51), p_41))) == 7L)))));
                if ((safe_add_func_uint16_t_u_u(((*l_154) &= l_148), g_105)))
                {
                    return l_157;


                }
                else
                {
                    if (p_41)
                        break;
                    for (g_130 = 27; (g_130 <= 27); ++g_130)
                    {
                        if ((*g_60))
                            break;
                        (**g_123) = 0x2ABCF54FL;
                        return &g_99;


                    }
                }
            }
            if (l_116)
            {
                int *l_160 = &g_134;
                int *l_162 = &l_78;
                l_160 = (*g_123);

                ;
                (*l_162) = l_161;
            }
            else
            {
                int ***l_165 = &g_123;
                int ****l_164 = &l_165;
                unsigned short *l_166 = &g_155;
                int *l_167 = &l_78;
                (*l_167) = (p_41 || (!((*l_166) |= (l_163 == ((*l_164) = &g_123)))));
                l_51 = (**g_123);
                (*l_167) = (!((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((***l_163) <= p_41), ((safe_mod_func_int16_t_s_s((g_80 > (safe_add_func_int32_t_s_s((~((g_176 ^ (*l_167)) != p_41)), p_41))), p_41)) != 0UL))) <= 0xF2ED6A3EL), p_41)) || (****l_164)));
            }
            (*g_123) = (**l_163);
            (*g_123) = (*g_123);
        }

        ;
        l_177 ^= l_51;
    }

    ;
    return &g_99;


}







static char * func_46(char * p_47, int p_48, char * p_49, unsigned p_50)
{
    const int l_55 = 0L;
    int *l_56 = &g_57;
    const int *l_58 = &g_57;
    const int **l_61 = &l_58;
    (*l_56) = ((l_55 > l_55) && p_50);
    (*l_56) = p_48;
    (*g_59) = l_58;
    (*l_61) = &l_55;

    ;
    return p_49;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
