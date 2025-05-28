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



static int g_2 = (-1L);
static unsigned g_13 = 4294967291UL;
static int g_42 = 0xA9D9E177L;
static int g_58 = (-4L);
static char g_81 = 0x16L;
static unsigned g_82 = 0x161DBFA2L;
static unsigned short g_85 = 0x2876L;
static unsigned g_92 = 0UL;
static short g_101 = (-9L);
static unsigned g_122 = 18446744073709551608UL;
static unsigned char g_125 = 255UL;
static unsigned short g_134 = 0x2B9CL;
static long long g_162 = 0x6A65199CEA194CD1LL;
static int g_188 = 9L;
static short g_202 = (-1L);
static long long g_245 = 0x556593A71EFC389ELL;
static unsigned char g_254 = 0x98L;
static unsigned *g_260 = &g_122;
static unsigned **g_259 = &g_260;
static const unsigned *g_262 = &g_122;
static const unsigned **g_261 = &g_262;
static unsigned *g_278 = &g_82;
static int *g_301 = &g_42;
static long long *g_314 = &g_245;
static long long **g_313 = &g_314;
static unsigned **g_323 = &g_278;
static unsigned ***g_322 = &g_323;
static unsigned g_325 = 9UL;
static unsigned char *g_364 = &g_125;
static unsigned char * const *g_363 = &g_364;
static unsigned char * const **g_362 = &g_363;
static int ***g_412 = (void*)0;
static unsigned g_439 = 18446744073709551609UL;
static long long g_440 = 0x75F934C04760FD3ALL;
static int **g_479 = &g_301;
static int ***g_478 = &g_479;
static unsigned short *g_577 = &g_134;
static unsigned short * const *g_576 = &g_577;
static long long ***g_699 = &g_313;
static const int g_713 = 0x9F266AB6L;
static int *g_747 = (void*)0;
static int ** const *g_776 = (void*)0;
static int ** const **g_775 = &g_776;
static unsigned long long g_846 = 3UL;
static unsigned *g_917 = &g_13;
static short *g_925 = &g_202;
static short ** const g_924 = &g_925;
static unsigned ***g_933 = &g_323;
static unsigned short g_937 = 0UL;
static int *g_976 = &g_188;
static int **g_975 = &g_976;
static int **g_978 = &g_976;
static const unsigned g_988 = 0xBD358F88L;
static const unsigned *g_987 = &g_988;
static unsigned long long * const * const g_989 = (void*)0;
static unsigned long long *g_991 = &g_846;
static unsigned long long * const *g_990 = &g_991;
static long long g_1056 = 0xE7BBECF8D4C4B628LL;
static char g_1078 = 0L;
static unsigned short g_1177 = 0x34F6L;
static unsigned g_1230 = 9UL;
static int * const *g_1234 = &g_747;
static int * const **g_1233 = &g_1234;
static unsigned ****g_1280 = &g_933;
static unsigned *****g_1279 = &g_1280;



static unsigned func_1(void);
static int func_5(int p_6, int p_7, int p_8);
static unsigned short func_18(const int p_19, unsigned * p_20, unsigned long long p_21, short p_22);
static unsigned * func_23(unsigned * p_24, unsigned * p_25, unsigned * p_26);
static unsigned * func_27(int p_28, unsigned p_29, const unsigned short p_30);
static short func_32(const unsigned * p_33, unsigned * p_34);
static unsigned * func_35(short p_36, int p_37, unsigned * p_38, long long p_39, unsigned * const p_40);
static unsigned short func_47(unsigned short p_48, unsigned p_49, int * p_50, unsigned p_51, unsigned p_52);
static short func_55(int * p_56, unsigned * p_57);
static unsigned short func_64(unsigned p_65);
static unsigned func_1(void)
{
    int l_31 = 0xAB6DAD81L;
    unsigned *l_630 = &g_13;
    unsigned *l_915 = &g_13;
    const unsigned ***l_953 = &g_261;
    short l_969 = 0L;
    int *l_1003 = &g_58;
    unsigned short l_1009 = 0x1F17L;
    unsigned char l_1053 = 0xD3L;
    char l_1110 = 0x1DL;
    long long ***l_1112 = &g_313;
    int ** const l_1114 = &g_747;
    unsigned ****l_1189 = &g_933;
    unsigned *****l_1188 = &l_1189;
    unsigned ****l_1191 = &g_933;
    unsigned *****l_1190 = &l_1191;
    int ** const **l_1198 = &g_776;
    unsigned long long l_1210 = 0xE7884B404D78CE10LL;
    unsigned short l_1267 = 0x0D9FL;
    short l_1274 = 5L;
    for (g_2 = 15; (g_2 == 19); g_2 = safe_add_func_int64_t_s_s(g_2, 2))
    {
        int l_9 = 0xCFE04822L;
        unsigned *l_12 = &g_13;
        char *l_847 = &g_81;
        unsigned *l_916 = &g_82;
        unsigned ***l_930 = (void*)0;
        short *l_1012 = (void*)0;
        int *****l_1050 = (void*)0;
        char l_1060 = 0x53L;
        int l_1079 = (-1L);
        short l_1119 = 0xCEC9L;
        unsigned ***l_1134 = &g_259;
        unsigned long long l_1141 = 0UL;
        unsigned l_1162 = 0x226A2B62L;
        long long l_1171 = 5L;
    }
    for (g_58 = (-24); (g_58 <= 22); g_58 = safe_add_func_uint16_t_u_u(g_58, 3))
    {
        unsigned l_1187 = 0xDA01D334L;
        (*l_1114) = (void*)0;
        l_1187 = (**g_479);
        (*l_1114) = (*l_1114);
    }
    (*g_301) = ((((*l_1188) = &g_322) == ((*l_1190) = &g_322)) >= (*g_577));

    ;
    ;
    for (l_969 = 0; (l_969 != (-15)); l_969 = safe_sub_func_uint16_t_u_u(l_969, 9))
    {
        long long l_1199 = 0L;
        int l_1200 = 0L;
        unsigned short l_1209 = 1UL;
        unsigned * const l_1240 = &g_13;
        int *l_1266 = &g_58;
        unsigned ******l_1281 = &l_1190;
        unsigned ******l_1282 = (void*)0;
        unsigned ******l_1283 = &l_1188;
    }
    return (**g_323);
}







static int func_5(int p_6, int p_7, int p_8)
{
    int *l_852 = &g_42;
    unsigned l_894 = 0x13AD6FCFL;
    short *l_901 = &g_101;
    int *l_906 = &g_58;
    for (g_254 = (-27); (g_254 <= 36); g_254 = safe_add_func_uint16_t_u_u(g_254, 1))
    {
        unsigned char l_856 = 0xEDL;
        int ***l_861 = &g_479;
        int l_874 = 1L;
        for (g_122 = 15; (g_122 < 45); g_122 = safe_add_func_uint8_t_u_u(g_122, 2))
        {
            unsigned *l_853 = &g_13;
            int l_879 = 0x2C98C4CCL;
            int l_882 = 1L;
            unsigned short **l_893 = (void*)0;
            unsigned short ***l_892 = &l_893;
            if (p_7)
            {
                int l_857 = 0L;
                const int ** const *l_858 = (void*)0;
                (*g_479) = (l_852 = (**g_478));
                if ((p_7 && func_55(&p_8, (*g_323))))
                {
                    int ****l_859 = &g_412;
                    int ****l_860 = &g_412;
                    unsigned *l_862 = &g_13;
                    char *l_867 = &g_81;
                    (**g_478) = func_35(((l_857 = l_856) && (l_858 == (l_861 = &g_479))), p_7, l_862, l_856, l_862);

                    ;
                    (**g_479) = (safe_rshift_func_uint8_t_u_s((!(safe_rshift_func_int8_t_s_s(g_122, 2))), ((*l_867) = p_7)));
                    (***l_861) = (((((*l_867) = p_6) ^ ((safe_mul_func_int8_t_s_s(func_64((0L | 0xAD9B1438L)), p_7)) == ((safe_lshift_func_uint8_t_u_s((*g_364), 6)) < (safe_div_func_int16_t_s_s(l_874, (((***g_362) < p_8) && p_7)))))) == (***l_861)) >= (***g_699));
                    if ((safe_rshift_func_uint16_t_u_u(((((*l_862) = 0x561F73E5L) == (p_6 && p_6)) & (((safe_rshift_func_int16_t_s_u(l_879, 0)) > (safe_lshift_func_uint16_t_u_u((func_64(p_7) > ((((*g_577) = (((**g_313) = (**g_313)) > ((l_882 = p_7) | (0xB329CE1620FE6A10LL == 3L)))) < (***l_861)) >= g_92)), 10))) ^ 0x1088L)), 14)))
                    {
                        (**g_478) = &p_8;

                        ;
                    }
                    else
                    {
                        unsigned *l_886 = &g_13;
                        unsigned long long *l_887 = &g_846;
                        (***g_478) = p_8;
                        l_894 = (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(func_64(func_18((***g_478), l_886, ((*l_887) = 18446744073709551613UL), (safe_lshift_func_int16_t_s_s(((g_254 <= g_254) && ((void*)0 != l_892)), 10)))))), 0x03L));
                        if (p_6)
                            continue;
                        (***l_861) = (safe_sub_func_uint8_t_u_u(p_8, (**g_363)));
                    }

                    ;
                }
                else
                {
                    if (l_856)
                        break;
                }
            }
            else
            {
                (**l_861) = func_35((safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((**g_363), (l_901 == &g_101))), (*g_314))), p_6, &l_894, (***g_699), l_853);

                ;
                (**g_478) = (**l_861);
            }
        }
    }

    ;
    ;
    (*l_906) = (safe_mod_func_uint8_t_u_u(6UL, (safe_add_func_int32_t_s_s(((*g_278) || p_6), func_64((*g_260))))));
    return (*l_906);


}







static unsigned short func_18(const int p_19, unsigned * p_20, unsigned long long p_21, short p_22)
{
    int l_832 = (-5L);
    int l_835 = 0x815FAD88L;
    char l_836 = 3L;
    int l_843 = 0x458B1C89L;
    unsigned l_844 = 4294967290UL;
    unsigned long long *l_845 = &g_846;
    g_42 = (safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u(((*l_845) = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_832 = p_21), func_47((*g_577), (**g_261), p_20, (safe_div_func_int32_t_s_s((((((l_836 = l_835) == (l_843 = ((***g_322) && (safe_div_func_int64_t_s_s(p_21, (+((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((-10L) | ((*g_577) && 0xEA8EL)), 5)), l_835)) != (-1L)))))))) ^ 0x9BC6FBD15E6A153ELL) & (-1L)) > 0UL), p_21)), l_844))), 0xFFL)), p_19))), p_22)) != l_844) != 1L), p_19)), l_844));
    return p_19;
}







static unsigned * func_23(unsigned * p_24, unsigned * p_25, unsigned * p_26)
{
    unsigned char l_631 = 1UL;
    int *l_641 = &g_58;
    long long * const *l_661 = (void*)0;
    int *l_701 = (void*)0;
    short l_721 = (-6L);
    unsigned short **l_732 = &g_577;
    unsigned **l_750 = &g_260;
    unsigned long long l_757 = 0UL;
    int *l_758 = &g_42;
    unsigned short l_761 = 65530UL;
    int ****l_779 = &g_478;
    unsigned long long l_780 = 0x6079B65197E051DFLL;
    long long l_781 = 0L;
    unsigned ****l_791 = &g_322;
    unsigned long long l_794 = 4UL;
    if ((func_47(l_631, ((65535UL & func_64(l_631)) <= (g_82 == func_64(l_631))), (*g_479), l_631, (*p_26)) <= l_631))
    {
        int *l_632 = &g_42;
        unsigned *l_642 = &g_13;
        (*g_479) = l_632;

        ;
        (*l_632) = (((((l_631 >= 0x39L) & ((*g_314) = (*l_632))) > (*l_632)) && g_245) & 0xB3L);
    }
    else
    {
        unsigned *l_644 = &g_13;
        unsigned **l_643 = &l_644;
        int *l_651 = &g_42;
        unsigned short l_656 = 1UL;
        int l_684 = 0xA8E3B229L;
        int * const *l_692 = &l_651;
        int * const **l_691 = &l_692;
        int * const ***l_690 = &l_691;
        long long ***l_697 = &g_313;
        const int *l_712 = &g_713;
        unsigned ***l_723 = &g_259;
        char l_728 = 3L;
        int *l_741 = (void*)0;
        unsigned char *l_756 = &l_631;
        if (((**g_322) != ((*l_643) = (*g_323))))
        {
            long long l_645 = 6L;
            short l_664 = 0x3BDEL;
            unsigned *l_709 = &g_13;
            unsigned short **l_734 = (void*)0;
            if (l_645)
            {
                (*g_479) = (*g_479);
                (**g_478) = p_25;

                ;
            }
            else
            {
                const long long l_660 = 0xEE1654555B17CB2DLL;
                unsigned long long l_663 = 18446744073709551606UL;
                unsigned ***l_704 = &g_259;
                if (((***g_478) = func_47(l_645, (safe_lshift_func_uint8_t_u_s(l_645, g_245)), (**g_478), func_64((**g_261)), (*l_641))))
                {
                    int ***l_659 = (void*)0;
                    (*g_479) = (**g_478);
                    for (g_254 = 0; (g_254 <= 22); ++g_254)
                    {
                        char l_650 = 1L;
                        int l_662 = 0x871D43A7L;
                        (**g_478) = (void*)0;

                        ;
                        if (l_650)
                            continue;
                        l_651 = ((*g_479) = p_25);

                        ;
                        ;
                        l_663 = (safe_mod_func_uint32_t_u_u(((***g_322) = (safe_add_func_uint16_t_u_u((l_656 = 0x78B1L), (+(safe_mul_func_int16_t_s_s(((&g_479 != l_659) == func_47((1UL > func_55(((**g_478) = (*g_479)), (**g_322))), ((*g_260) = (l_660 & (&g_314 != l_661))), p_26, l_662, l_645)), 65535UL)))))), l_631));
                    }

                    ;
                    ;
                }
                else
                {
                    long long l_669 = (-8L);
                    int l_686 = 1L;
                    unsigned *l_694 = &g_13;
                    long long ****l_698 = (void*)0;
                    int **l_700 = (void*)0;
                    const int **l_710 = (void*)0;
                    const int **l_711 = (void*)0;
                    int **l_714 = (void*)0;
                    int **l_715 = &l_651;
                    unsigned l_722 = 4294967292UL;
                    unsigned short ***l_733 = (void*)0;
                    unsigned short ***l_735 = (void*)0;
                    unsigned short **l_737 = &g_577;
                    unsigned short ***l_736 = &l_737;
                    if (((*g_301) = l_645))
                    {
                        char l_685 = (-7L);
                        int l_687 = 0xF6FDD0C7L;
                        short *l_693 = &l_664;
                        unsigned * const l_695 = &g_325;
                        int **l_696 = &l_641;
                        (**g_478) = l_644;
                        (**g_479) = (-5L);
                        (*l_651) = (l_664 ^ (g_134 | (safe_add_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(0xAF59L, (l_669 = 0x9F63L))) && func_64(l_664)) <= ((~(0x82DE6746L == ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((l_685 = (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((~(safe_sub_func_uint16_t_u_u((**g_576), 0xE803L))), g_92)), (**g_363))) == (*l_651)) & l_684), 1L))), l_686)), g_82)) != (*g_314)))) <= l_687)), (*g_577)))));
                        (*l_696) = ((*g_479) = func_35(((*l_693) = (((*g_278) == (*p_26)) <= ((((*g_314) = (l_687 != (safe_div_func_uint32_t_u_u((l_690 != &g_478), func_64(l_685))))) != (****l_690)) >= g_101))), g_125, l_694, l_645, l_695));

                        ;
                    }
                    else
                    {
                        (***g_478) = ((****l_690) = 0x1ACA8030L);
                    }

                    ;
                    (*l_715) = ((**g_478) = func_35((((l_701 = &g_188) != (l_712 = func_35((safe_sub_func_int16_t_s_s(((l_704 = &g_259) == (void*)0), (safe_lshift_func_int16_t_s_u((*l_641), 14)))), ((safe_mod_func_int8_t_s_s(g_439, g_13)) > l_645), l_709, l_645, p_25))) || g_439), (**l_692), p_26, (***g_699), (*l_643)));

                    ;
                    ;
                    ;
                    if (((*l_651) = ((*p_26) ^ ((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint32_t_u((safe_add_func_uint64_t_u_u(((func_55(l_644, l_709) && (*p_25)) ^ l_664), l_721)))) < (0x2DAC08E1L | (func_64((**g_261)) != l_722))), (**g_576))) && (**g_363)))))
                    {
                        char *l_726 = &g_81;
                        int *l_727 = &l_686;
                        (***g_478) = (l_723 != (void*)0);
                        (**g_479) = (safe_sub_func_int8_t_s_s(l_660, ((*l_726) = 0x4AL)));
                        (*l_727) = ((**l_715) = 0x3F11F2B1L);
                        (*l_727) = (l_728 ^ (safe_lshift_func_int8_t_s_s(0x22L, 5)));
                    }
                    else
                    {
                        unsigned *l_731 = &g_82;
                        return l_731;


                    }
                    (***g_478) = ((l_734 = l_732) == ((*l_736) = &g_577));

                    ;
                }

                ;
                ;
                ;
                ;
                ;
                ;
                return (*g_323);


            }

            ;
        }
        else
        {
            short l_738 = (-4L);
            unsigned l_746 = 0x94184E62L;
            l_741 = func_27(l_738, ((***l_723) = ((*l_641) & (*g_577))), (safe_add_func_uint8_t_u_u((*l_651), g_101)));

            ;
            (*g_479) = func_27((func_47(l_738, (*l_641), func_35(g_82, g_439, l_701, ((**g_313) = (*l_641)), p_24), ((***l_723) = (safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((g_713 != (*l_641)), l_746)), (*l_641)))), (***g_322)) > 0x669DC975D2CA3F61LL), (**l_692), l_631);
        }

        ;
        ;
        ;
        if ((****l_690))
        {
            int * const l_748 = &g_58;
            int *l_749 = &g_42;
            l_641 = g_747;

            ;
            (**g_478) = (void*)0;

            ;
            l_651 = p_25;

            ;
            l_749 = l_748;

            ;
        }
        else
        {
            int *l_751 = &g_2;
            (**g_478) = l_751;

            ;
            (*l_641) = ((*l_641) | (***g_478));
            (**g_478) = p_26;

            ;
        }

        ;
        ;
        ;
        l_757 = (safe_sub_func_uint8_t_u_u(0x8DL, ((*l_756) = ((***g_362) = (safe_mul_func_uint16_t_u_u((*g_577), func_64(l_631)))))));
        (*g_479) = (void*)0;

        ;
    }

    ;
    ;
lbl_800:
    (*g_479) = (void*)0;

    ;
    (**g_478) = l_758;

    ;
    if ((safe_add_func_uint32_t_u_u(((*l_758) | ((0x5FC0L ^ l_761) != ((***g_362) > (safe_rshift_func_uint16_t_u_u(((*l_758) <= g_188), ((*g_577) = (**g_576))))))), (*p_25))))
    {
        unsigned short l_772 = 2UL;
        short *l_773 = &g_202;
        short *l_774 = &g_101;
        int ** const ***l_777 = (void*)0;
        int ** const ***l_778 = &g_775;
        const int l_790 = 1L;
        unsigned l_792 = 1UL;
        unsigned * const l_793 = (void*)0;
        (**g_479) = (((func_47((((*g_301) >= func_64((*l_758))) & ((*g_278) = (safe_sub_func_int32_t_s_s(0xB2E43DBFL, ((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((*l_774) = ((*l_773) = ((*l_758) <= l_772))), ((((*l_778) = g_775) == l_779) & (((*g_577) = (18446744073709551615UL < (****l_779))) > 5UL)))) <= (****l_779)), 0x4AE3L)), (*p_25))) == g_81))))), (*l_758), p_24, l_780, l_781) > 65533UL) | 0x10ACE207L) > 0x027FEC2BBE005F24LL);
        (***l_779) = func_35((*l_758), (****l_779), (***l_791), (***g_699), (**g_322));

        ;
        (***l_779) = func_35(((safe_rshift_func_int16_t_s_u(g_713, 13)) | 18446744073709551608UL), g_439, func_35((*l_758), g_134, (*g_323), ((((*l_758) ^ 0xA9503B2DL) >= (*l_758)) & 0x741067DAL), (*g_323)), (*g_314), (**g_322));
        (**g_479) = (****l_779);
    }
    else
    {
        unsigned l_799 = 0UL;
        int *l_803 = &g_2;
        for (g_58 = (-25); (g_58 <= (-15)); ++g_58)
        {
            if (l_799)
                break;
            if (l_799)
                continue;
        }
        if (g_85)
            goto lbl_800;
        (*g_479) = (***l_779);
        for (g_101 = (-8); (g_101 == 29); ++g_101)
        {
            int *l_804 = &g_42;
            l_804 = l_803;

            ;
        }
    }

    ;
    return (*g_323);


}







static unsigned * func_27(int p_28, unsigned p_29, const unsigned short p_30)
{
    int *l_41 = &g_42;
    unsigned short *l_84 = &g_85;
    int l_86 = 0xFFABE4BCL;
    int l_629 = 0xBC05BFC9L;
    p_28 = ((func_32(func_35((((*l_41) = 0x23DEC995L) <= g_2), (safe_lshift_func_uint16_t_u_s(((*l_84) = (safe_mul_func_uint16_t_u_u(func_47(((safe_mod_func_int16_t_s_s(func_55(&g_2, l_41), ((*l_84) = p_28))) & ((l_41 == (void*)0) > g_13)), p_29, &g_2, g_13, l_86), g_13))), 0)), &g_13, p_29, &g_13), l_41) && p_29) >= g_325);
    (**g_478) = func_35(((*g_364) && (0L > (!g_325))), (*l_41), l_41, (*l_41), l_41);

    ;
    return (**g_322);


}







static short func_32(const unsigned * p_33, unsigned * p_34)
{
    short l_113 = 1L;
    unsigned short *l_120 = (void*)0;
    unsigned *l_121 = &g_122;
    int l_123 = 0L;
    unsigned char *l_124 = &g_125;
    int *l_135 = &g_58;
    unsigned l_148 = 18446744073709551614UL;
    unsigned * const l_149 = (void*)0;
    char l_154 = 0L;
    int l_230 = 6L;
    unsigned long long l_298 = 18446744073709551611UL;
    unsigned short l_312 = 9UL;
    unsigned *l_324 = &g_325;
    unsigned short l_328 = 8UL;
    unsigned long long l_382 = 0xFF09BE1A63A71FD0LL;
    int *l_408 = &g_2;
    short l_416 = 0x42A7L;
    unsigned ***l_454 = &g_259;
    int ***l_481 = &g_479;
    unsigned short l_604 = 2UL;
    long long *l_610 = &g_440;
    long long l_624 = 0x087316FB4B6336E1LL;
    if ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_92, ((*l_124) = (~(~(((safe_mul_func_uint16_t_u_u((g_42 > (l_113 < l_113)), g_58)) != (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_113 | ((safe_add_func_uint64_t_u_u((l_113 != func_64((l_123 = ((*l_121) = (((l_113 != ((void*)0 != l_120)) < 0x3A1BF70EL) >= 252UL))))), g_42)) >= l_113)), l_113)), 4294967289UL))) | 0x5FL)))))), 5)), g_13)))
    {
        unsigned *l_128 = &g_82;
        int l_131 = 0xE53D9B4DL;
        unsigned l_172 = 2UL;
        unsigned **l_185 = &l_128;
        unsigned ***l_184 = &l_185;
        int *l_213 = &l_123;
        int **l_217 = &l_135;
        if ((g_42 == ((g_122 > (safe_add_func_uint8_t_u_u((func_55(&g_58, l_128) || (-6L)), g_85))) || (func_64((g_92 = (safe_mul_func_int8_t_s_s((0x8CL <= g_42), l_123)))) | l_131))))
        {
            return g_101;
        }
        else
        {
            unsigned short *l_132 = &g_85;
            unsigned short *l_133 = &g_134;
            unsigned *l_136 = &g_92;
            int l_137 = 0xB6A48933L;
            int **l_138 = (void*)0;
            int **l_139 = &l_135;
            short *l_146 = &g_101;
            unsigned *l_147 = &g_82;
            (*l_139) = func_35(func_47(((*l_133) = ((*l_132) = (l_123 = g_122))), g_101, l_135, ((*l_136) = 1UL), l_131), ((void*)0 == p_34), l_128, l_137, l_135);

            ;
            (*l_139) = func_35(g_42, (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((*l_135), g_42)), 4)), 0xD4C97A61L)), func_35(l_131, func_64(g_42), func_35(((*l_146) = l_131), (0x7BF5L || 65535UL), l_147, g_92, &g_13), l_148, l_135), g_85, l_149);
            for (l_113 = 0; (l_113 > (-30)); l_113 = safe_sub_func_uint16_t_u_u(l_113, 7))
            {
                short l_155 = (-3L);
                long long *l_160 = (void*)0;
                long long *l_161 = &g_162;
                unsigned l_167 = 0xA39D249FL;
                unsigned * const l_189 = &g_13;
                unsigned char l_208 = 0x99L;
                if (((l_131 <= (*l_135)) ^ (((safe_sub_func_uint16_t_u_u(l_154, (l_155 | (((*l_124) = l_155) | 0xD9L)))) < (((safe_mod_func_uint8_t_u_u((g_2 ^ func_64(((*l_136) = ((safe_mod_func_uint16_t_u_u((((*l_161) = 0x7DE0C385723E8202LL) <= (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(g_92, l_155)), g_101))), 65533UL)) ^ g_58)))), l_167)) && g_42) && l_167)) | l_155)))
                {
                    unsigned **l_169 = &l_147;
                    unsigned ***l_168 = &l_169;
                    unsigned **l_171 = (void*)0;
                    unsigned ***l_170 = &l_171;
                    (*l_170) = ((*l_168) = &p_34);

                    ;
                    ;
                }
                else
                {
                    unsigned long long l_186 = 0x006811DC0D213C73LL;
                    short *l_209 = &g_101;
                    if (((*l_135) = (l_167 || func_64(l_172))))
                    {
                        char *l_181 = &l_154;
                        unsigned ***l_182 = (void*)0;
                        unsigned ****l_183 = &l_182;
                        int *l_187 = &g_188;
                        int *l_190 = &l_137;
                        l_190 = func_35((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((p_34 != ((*l_139) = p_34)), l_113)), 4)), ((*l_187) = (safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_162, g_92)), g_13))), &g_82, g_2, l_189);

                        ;
                        ;
                        (*l_139) = &l_123;

                        ;
                    }
                    else
                    {
                        short *l_201 = &l_155;
                        short **l_210 = &l_201;
                        short **l_211 = &l_146;
                        int l_212 = 1L;
                        g_42 = (((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((g_202 = ((*l_133) = (safe_add_func_uint8_t_u_u(((*l_124) = 0xA0L), (1L | ((*l_201) = ((*l_146) = (safe_mul_func_int32_t_s_s((g_82 >= (func_64((**l_139)) < func_64(((*l_136) = g_82)))), ((**l_139) == ((*l_132) = (0x387BD1CFCE029DE2LL == 1L)))))))))))) || l_155), (-1L))), l_172)), l_186)) < l_167) != l_186);
                        l_213 = func_35((!g_162), l_155, ((**l_184) = func_35((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u((*p_34))), (((safe_div_func_int32_t_s_s(((*l_135) = l_208), g_125)) < g_122) <= (((*l_210) = l_209) == ((*l_211) = l_146))))), l_208, p_34, l_212, p_34)), g_2, p_34);

                        ;
                        ;
                        (*l_139) = &g_58;

                        ;
                        g_42 = ((*l_213) = l_186);
                    }

                    ;
                    ;
                    if ((*l_213))
                    {
                        int *l_216 = &g_42;
                        (*l_213) = g_202;
                        (*l_135) = (safe_mod_func_uint32_t_u_u((*l_135), 0x4C3BFC78L));
                    }
                    else
                    {
                        (*l_139) = &g_42;

                        ;
                    }

                    ;
                }

                ;
                ;
                return l_208;
            }
        }

        ;
        (*l_217) = &g_58;

        ;
        (**l_217) = (safe_rshift_func_uint16_t_u_s((0x6E628875L ^ (!((*p_34) = (safe_sub_func_uint64_t_u_u(18446744073709551611UL, (7UL & (((*l_135) >= ((*l_135) <= (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(0xBCL, func_64((safe_rshift_func_int16_t_s_u(g_202, ((((*l_135) | (+func_64((*l_135)))) | (*l_213)) ^ 0x4FB469CFL)))))), (*l_213))))) > (*l_135)))))))), l_230));
    }
    else
    {
        int l_240 = 0L;
        unsigned * const l_246 = &g_13;
        int l_272 = 0x75F73016L;
        unsigned short *l_288 = &g_134;
        char *l_320 = &l_154;
        const unsigned char l_347 = 0x43L;
        int l_348 = (-1L);
        const int *l_349 = &l_348;
        unsigned l_357 = 0x2F05AABCL;
        unsigned char **l_361 = &l_124;
        unsigned char ** const *l_360 = &l_361;
        unsigned *l_380 = &g_325;
        unsigned *l_381 = &g_325;
        short *l_420 = &g_202;
        unsigned ***l_453 = (void*)0;
        int **l_476 = &l_135;
        int ***l_475 = &l_476;
        int ****l_477 = &g_412;
        int ****l_480 = &g_478;
        long long *l_489 = &g_245;
        unsigned l_497 = 0xD8785AC9L;
        int l_514 = 0x7E93D4B7L;
        unsigned short l_523 = 0xF1C5L;
        const unsigned char l_542 = 1UL;
        unsigned *l_598 = &g_92;
        const unsigned l_619 = 18446744073709551610UL;
        if (((*l_135) = (*l_135)))
        {
            int **l_231 = &l_135;
            long long *l_241 = &g_162;
            long long *l_242 = (void*)0;
            long long *l_243 = (void*)0;
            long long *l_244 = &g_245;
            int **l_247 = (void*)0;
            int *l_249 = &l_230;
            int **l_248 = &l_249;
            int *l_251 = &l_230;
            int **l_250 = &l_251;
            char *l_252 = (void*)0;
            char *l_253 = &g_81;
            const unsigned ***l_263 = &g_261;
            unsigned short *l_270 = (void*)0;
            unsigned short *l_271 = (void*)0;
            (*l_231) = p_34;

            ;
            (*l_250) = func_35((func_64((**l_231)) ^ (g_254 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*l_135) || ((safe_mod_func_int8_t_s_s(((*l_253) = (safe_lshift_func_int16_t_s_u(g_13, func_64(func_55(((*l_250) = ((*l_248) = func_35(g_82, l_240, p_34, ((*l_244) = ((*l_241) = (*l_135))), l_246))), &g_13))))), 0x89L)) ^ 0x95L)), 10)), (*l_135))))), l_240, p_34, (*l_135), &g_13);

            ;
            ;
            (*l_248) = func_35(((safe_mod_func_uint8_t_u_u(1UL, func_64((safe_sub_func_int64_t_s_s(0x1EFE91F0B04548F1LL, (g_259 == ((*l_263) = g_261))))))) < g_58), (safe_rshift_func_uint16_t_u_u((l_272 = ((safe_lshift_func_uint16_t_u_u((((~g_101) | func_64(((safe_div_func_uint64_t_u_u(l_240, 0x4D4EC0B7275D6FB8LL)) | l_240))) ^ 0x8AL), (*l_135))) || (**l_248))), 11)), l_135, (**l_248), p_34);

            ;
        }
        else
        {
            int **l_273 = (void*)0;
            int **l_274 = &l_135;
            (*l_135) = 1L;
            (*l_274) = &g_2;

            ;
        }

        ;
        for (l_240 = 0; (l_240 != 17); ++l_240)
        {
            unsigned char l_277 = 250UL;
            char *l_285 = &l_154;
            unsigned short *l_289 = &g_85;
            unsigned short **l_290 = &l_289;
            int l_297 = (-3L);
            int l_299 = 0xBDDEB08EL;
            int **l_300 = &l_135;
            int *l_303 = &l_297;
            int **l_302 = &l_303;
            const int *l_305 = &g_42;
            const int **l_304 = &l_305;
            long long *l_308 = &g_162;
            unsigned **l_403 = &l_121;
        }
        if (((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0L == (*g_314)), 2)), ((*l_349) <= (safe_rshift_func_int8_t_s_s((0x98CC790FL || (((*l_477) = (l_475 = l_475)) != (l_481 = ((*l_480) = g_478)))), ((safe_add_func_uint16_t_u_u(((g_2 <= (**l_476)) > (*g_314)), g_125)) > 254UL)))))))) && 0x95F8L))
        {
            char l_486 = 0x04L;
            long long *l_490 = &g_440;
            (*g_301) = ((((((0xB800L == (safe_add_func_int16_t_s_s(g_125, l_486))) == ((***l_475) | (safe_sub_func_int64_t_s_s(0x233FA9AAFF6A0F1ALL, (l_489 != ((*g_313) = l_490)))))) != (safe_add_func_uint64_t_u_u((**l_476), (((safe_mod_func_int64_t_s_s((l_486 < (*l_408)), (*l_135))) > 1UL) ^ g_82)))) > g_2) ^ (****l_480)) < (***l_481));

            ;
            for (l_240 = 0; (l_240 != (-5)); --l_240)
            {
                unsigned short l_504 = 0xA6EBL;
                if ((l_497 && (safe_mul_func_uint8_t_u_u((0xE2L <= ((safe_sub_func_int16_t_s_s((((**l_361) = (((*g_313) != (*g_313)) == func_64(((*g_260) = (safe_sub_func_uint16_t_u_u(g_82, func_64((l_504 || ((safe_div_func_int32_t_s_s((-1L), func_64((***l_475)))) != l_486))))))))) > 0x28L), 65527UL)) < 0L)), l_486))))
                {
                    int l_507 = 0xCB8CF01FL;
                    (***l_481) = ((g_188 > l_486) && (l_507 & l_504));
                }
                else
                {
                    unsigned char l_521 = 0xC4L;
                    unsigned * const l_522 = &g_325;
                    for (g_122 = 0; (g_122 > 14); g_122 = safe_add_func_uint16_t_u_u(g_122, 6))
                    {
                        (**g_478) = func_35((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(l_514, 1UL)), ((*l_288) = ((((g_202 = l_504) && func_47(((func_64((*l_408)) & (-1L)) < 0x93L), (safe_lshift_func_int16_t_s_s(0x186AL, 2)), func_35(((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_288) = 0xED94L), 3)), (*g_314))) | 0xD3L), l_486, p_34, l_486, (*g_323)), (*g_260), l_521)) == l_504) || 0xDF11L)))), g_42, p_34, l_521, l_522);

                        ;
                        if (l_504)
                            continue;
                    }
                    if ((*g_301))
                        break;
                    if (l_504)
                        continue;
                    if (l_486)
                    {
                        return l_523;


                    }
                    else
                    {
                        const int **l_524 = &l_349;
                        (**g_479) = l_504;
                        (*l_524) = p_33;

                        ;
                    }

                    ;
                }

                ;
                return (***l_481);


            }
            (***l_480) = p_34;

            ;
        }
        else
        {
            short l_532 = 0L;
            unsigned short **l_570 = &l_288;
            int l_578 = 1L;
            unsigned char l_618 = 0UL;
            for (l_497 = 0; (l_497 == 17); l_497++)
            {
                unsigned char ** const l_531 = (void*)0;
                (**g_479) = func_64(((*l_121) = (func_64((**g_259)) > ((safe_mod_func_int8_t_s_s(l_532, l_532)) <= (**g_313)))));
            }
            for (l_148 = 0; (l_148 <= 31); l_148 = safe_add_func_int16_t_s_s(l_148, 1))
            {
                int l_535 = 0xECD7F034L;
                int l_557 = 0x8ECCA2D5L;
                unsigned long long *l_565 = &l_298;
                if ((((*l_320) = l_535) >= (g_42 && (safe_mod_func_uint16_t_u_u((****l_480), ((safe_sub_func_uint64_t_u_u((***l_481), 0xFEB3A67F1F358700LL)) && (*l_349)))))))
                {
                    long long ***l_556 = &g_313;
                    if (((safe_sub_func_uint8_t_u_u(((**g_363) = ((void*)0 != (*g_363))), l_542)) && l_535))
                    {
                        long long ***l_553 = &g_313;
                        long long ****l_554 = (void*)0;
                        long long ****l_555 = &l_553;
                        unsigned long long *l_558 = &l_382;
                        int l_559 = (-1L);
                        (**l_475) = p_34;

                        ;
                        (****l_480) = (0x66FCB468L < (safe_sub_func_int32_t_s_s((((*l_420) = (!(safe_add_func_uint64_t_u_u(((*l_558) = g_202), l_559)))) < (****l_480)), 3UL)));
                        if ((*l_349))
                            continue;
                        if ((***g_478))
                            break;
                    }
                    else
                    {
                        (*g_479) = (**g_478);
                    }
                }
                else
                {
                    int *l_560 = &l_230;
                    (*l_560) = ((*g_301) = l_532);
                    if ((**l_476))
                    {
                        unsigned long long **l_566 = &l_565;
                        if ((*l_560))
                            break;
                        (***g_478) = 0xB71E515CL;
                        (*l_560) = (safe_sub_func_uint16_t_u_u(((***g_322) && (*p_34)), ((((*l_420) = 2L) >= func_64((*g_260))) == (safe_rshift_func_uint16_t_u_u((((*l_566) = l_565) == l_489), 11)))));
                    }
                    else
                    {
                        int *l_567 = &l_123;
                        (***l_480) = l_567;

                        ;
                    }

                    ;
                    for (g_162 = 7; (g_162 > (-23)); --g_162)
                    {
                        unsigned short ***l_571 = &l_570;
                        (*l_560) = l_532;
                        (*l_571) = l_570;
                    }
                    (**g_478) = func_35((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((+func_64((g_576 == l_570))), (((*g_364) || 1UL) < (***l_475)))), (l_578 = (((4294967295UL && ((l_570 != &l_288) > 1L)) & l_532) | 0x9F4425D8C701A78BLL)))), (*l_135), p_34, (*l_560), p_34);

                    ;
                }
                return l_535;


            }
            (**l_475) = func_35(l_532, (safe_div_func_uint8_t_u_u(0x28L, (*l_135))), func_35(((*l_420) = g_440), (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_578 < ((***g_322) = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((func_64((+(safe_add_func_int64_t_s_s(1L, 0xB559AE18B7BDB30DLL)))) ^ ((*l_454) == (void*)0)), (***l_481))))))), (**l_476))), 0xA442L)), p_34, l_578, p_34), (**g_313), (*g_323));

            ;
            for (g_202 = (-18); (g_202 >= 4); g_202 = safe_add_func_uint32_t_u_u(g_202, 6))
            {
                short *l_599 = (void*)0;
                int ****l_605 = &g_412;
                const long long *l_611 = &g_162;
                const long long **l_612 = &l_611;
                char *l_617 = &g_81;
                (*g_479) = (**g_478);
                (**g_479) = (1UL < ((*p_34) != (safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((*g_364), (*l_349))), (g_101 = (safe_mul_func_int16_t_s_s((l_598 != (void*)0), ((*l_135) ^ (*g_364)))))))));
                (**g_479) = (safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_s(l_619, 1)) ^ l_578) != (*p_34)), 3));
            }
        }

        ;

    }

    ;
    for (l_312 = 0; (l_312 < 56); ++l_312)
    {
        const int *l_623 = &g_42;
        const int **l_622 = &l_623;
        (*l_622) = p_33;

        ;
        return g_202;
    }
    return l_624;
}







static unsigned * func_35(short p_36, int p_37, unsigned * p_38, long long p_39, unsigned * const p_40)
{
    return &g_82;


}







static unsigned short func_47(unsigned short p_48, unsigned p_49, int * p_50, unsigned p_51, unsigned p_52)
{
    int l_89 = 0xBF288841L;
    unsigned *l_100 = &g_82;
    unsigned *l_103 = &g_92;
    unsigned **l_102 = &l_103;
    unsigned ***l_104 = &l_102;
    for (p_52 = 0; (p_52 <= 59); p_52 = safe_add_func_int8_t_s_s(p_52, 2))
    {
        int *l_90 = &g_58;
        unsigned *l_91 = &g_92;
        int *l_93 = (void*)0;
        int *l_94 = &l_89;
        (*l_90) = l_89;
        (*l_90) = (*p_50);
        (*l_94) = ((*l_90) = func_64(((*l_91) = func_55(l_90, &g_82))));
    }
    g_58 = (safe_sub_func_uint8_t_u_u(((func_64((((g_2 ^ (safe_unary_minus_func_uint16_t_u(g_85))) >= (!(p_51 || ((safe_sub_func_uint16_t_u_u(((l_89 <= l_89) == ((*l_100) = l_89)), p_52)) <= g_81)))) ^ (g_101 = ((void*)0 != &p_52)))) ^ g_92) || g_82), l_89));
    (*l_104) = l_102;
    return l_89;
}







static short func_55(int * p_56, unsigned * p_57)
{
    unsigned long long l_71 = 0xD3FD90538E0EA626LL;
    unsigned char l_83 = 0x07L;
    for (g_58 = 13; (g_58 < (-27)); --g_58)
    {
        char l_61 = (-1L);
        int l_68 = 0x35CF455DL;
        int *l_78 = (void*)0;
        int *l_79 = &l_68;
        char *l_80 = &g_81;
        (*l_79) = ((l_61 = ((void*)0 != &g_58)) >= (safe_sub_func_uint16_t_u_u(func_64((+(0x5D1CC0C7L != ((g_13 || (((l_68 && (((safe_sub_func_uint8_t_u_u(l_71, ((*l_80) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_71, (g_2 ^ ((*l_79) = l_71)))), g_58)), 1)) >= 1UL)))) < (*p_56)) == l_71)) == l_71) != g_13)) ^ g_2)))), 1L)));
        g_82 = ((*l_79) = (p_57 == (void*)0));
    }
    return l_83;
}







static unsigned short func_64(unsigned p_65)
{
    return p_65;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
