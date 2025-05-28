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



static volatile unsigned char g_4 = 0xA0L;
static unsigned short g_10 = 1UL;
static int g_43 = 9L;
static int g_48 = 0L;
static int g_59 = 0x1576660BL;
static unsigned char g_63 = 254UL;
static unsigned long long g_80 = 0x8319B20E9505C00DLL;
static unsigned long long g_82 = 0xFA0B5BCDCEC458AFLL;
static long long g_93 = (-8L);
static unsigned g_95 = 0x3EC2CFCCL;
static unsigned g_96 = 0x6DB78960L;
static unsigned short g_110 = 0x2784L;
static unsigned * volatile g_113 = &g_95;
static unsigned * volatile *g_112 = &g_113;
static char g_136 = 0xCBL;
static char g_138 = 8L;
static int *g_144 = &g_43;
static int * volatile **g_149 = (void*)0;
static long long g_159 = (-2L);
static volatile unsigned short g_212 = 0x0B52L;
static volatile unsigned short * volatile g_211 = &g_212;
static volatile unsigned short * volatile *g_210 = &g_211;
static volatile unsigned long long g_232 = 18446744073709551609UL;
static volatile unsigned long long *g_231 = &g_232;
static volatile unsigned long long **g_230 = &g_231;
static char *g_256 = &g_138;
static short g_267 = 1L;
static unsigned short g_278 = 4UL;
static unsigned g_279 = 0x799871A7L;
static int **g_285 = &g_144;
static int ***g_284 = &g_285;
static int ***g_289 = &g_285;
static int g_322 = 0x4D0B19FEL;
static int *g_321 = &g_322;
static int g_348 = 0x3F60B24EL;
static unsigned char g_364 = 0xC2L;
static long long g_366 = 0x994EAE7410E65150LL;
static unsigned g_394 = 1UL;
static unsigned g_397 = 0x87AAEBE9L;
static unsigned *g_460 = (void*)0;
static unsigned **g_459 = &g_460;
static unsigned g_530 = 0x4EAF48ABL;
static unsigned long long **g_535 = (void*)0;
static unsigned long long ***g_534 = &g_535;
static unsigned long long ****g_533 = &g_534;
static volatile unsigned short g_569 = 65535UL;
static int * volatile g_589 = &g_348;
static unsigned long long *g_602 = &g_82;
static long long * volatile g_613 = &g_159;
static long long * volatile * volatile g_612 = &g_613;
static long long *g_615 = (void*)0;
static long long **g_614 = &g_615;



static long long func_1(void);
static int * func_2(unsigned char p_3);
static long long func_11(int * p_12, unsigned short p_13, int p_14);
static int * func_15(int p_16);
static long long func_19(int * p_20, int * p_21, unsigned long long p_22, unsigned char p_23);
static int * func_24(unsigned p_25, int p_26, int * p_27);
static int func_28(unsigned short p_29, long long p_30, int * p_31, int * p_32, unsigned short p_33);
static unsigned char func_34(int * p_35);
static int * func_36(unsigned p_37, char p_38);
static int * func_39(int * p_40, int * p_41);
static long long func_1(void)
{
    unsigned short l_7 = 0x6C3AL;
    int *l_320 = (void*)0;
    int *l_347 = &g_348;
    int l_577 = 0xFD1FC5C8L;
    unsigned char *l_594 = &g_364;
    int *l_598 = &l_577;
    int **l_597 = &l_598;
    unsigned long long *l_601 = &g_82;
    unsigned long long *l_603 = &g_82;
    unsigned l_604 = 0UL;
    char l_627 = 0xBEL;
    l_347 = func_2((!(g_4 ^ ((0xE443L != (l_7 > (safe_add_func_uint64_t_u_u(g_10, g_10)))) != (func_11(func_15((safe_add_func_int64_t_s_s(func_19(func_24(l_7, func_28(l_7, (func_34(func_36(l_7, g_10)) < l_7), l_320, g_321, l_7), l_320), l_347, g_348, g_348), (*l_347)))), l_577, g_10) >= g_10)))));

    ;
    ;

    ;

    if (((((**g_112) = ((*l_347) = (safe_add_func_uint32_t_u_u((*l_347), ((!(((+(((*l_594) = (safe_mod_func_uint8_t_u_u(g_43, (*l_347)))) & ((*l_347) == (safe_lshift_func_int16_t_s_s(((((&l_577 != ((*l_597) = g_144)) ^ (0x9AL && (safe_div_func_uint8_t_u_u(((g_602 = l_601) == (l_603 = (void*)0)), g_569)))) > g_279) < 6UL), 3))))) <= g_279) || (*l_347))) >= (*l_347)))))) != 0xDE3030B6L) > l_604))
    {
        (*l_347) = (***g_284);
    }
    else
    {
        unsigned long long l_605 = 0xFCCEA60AA52B89B7LL;
        (**g_284) = l_347;
        for (g_82 = 0; (g_82 != 35); g_82++)
        {
            long long l_610 = 1L;
            int *l_611 = &g_43;
            if ((l_610 & l_605))
            {
                long long ***l_616 = (void*)0;
                long long ***l_617 = &g_614;
                unsigned long long ****l_622 = &g_534;
                unsigned short *l_623 = &g_278;
                int l_624 = (-1L);
                long long *l_625 = (void*)0;
                long long *l_626 = &g_366;
                (*g_285) = (**g_284);
                if (l_605)
                    break;
                (**g_289) = l_611;

                ;
                (*g_589) = ((*g_144) = (((*l_626) = (l_624 = ((g_612 == ((*l_617) = g_614)) <= (safe_mod_func_int16_t_s_s((0x3DF24FB6C1C540CALL > (l_605 >= (safe_lshift_func_uint8_t_u_u((*l_611), g_82)))), ((*l_623) = (~(l_622 != l_622)))))))) >= (((*g_144) | l_605) || 0x86L)));
            }
            else
            {
                l_627 = (***g_284);
                (*l_611) = 0xC23FE450L;
            }
            (***g_284) = (0L < (0xC45FL != l_605));
        }

        ;
    }

    ;
    ;
    ;
    return (*l_347);
}







static int * func_2(unsigned char p_3)
{
    int *l_581 = &g_322;
    unsigned short l_584 = 0x4CD8L;
    char *l_587 = &g_136;
    char **l_588 = &g_256;
    (**g_284) = l_581;

    ;
    (**g_284) = l_581;
    (*g_589) = ((*g_144) = (safe_add_func_int64_t_s_s(0x92E6F447A808844ELL, (l_587 != ((*l_588) = l_587)))));

    ;
    return (*g_285);


}







static long long func_11(int * p_12, unsigned short p_13, int p_14)
{
    unsigned **l_578 = &g_460;
    int l_579 = 0x5EEAEE49L;
    int *l_580 = &g_48;
    l_579 = (l_578 != l_578);
    (*l_580) = l_579;
    return g_138;
}







static int * func_15(int p_16)
{
    int l_389 = 0L;
    int *l_398 = &g_59;
    char l_404 = 1L;
    int ****l_408 = &g_284;
    int ****l_409 = &g_289;
    short *l_410 = &g_267;
    unsigned char l_413 = 255UL;
    unsigned long long **l_439 = (void*)0;
    unsigned long long ***l_438 = &l_439;
    long long *l_493 = &g_93;
    int *l_497 = &g_43;
    for (g_159 = 10; (g_159 == 1); --g_159)
    {
        int l_378 = (-6L);
        unsigned *l_380 = &g_95;
        unsigned **l_379 = &l_380;
        long long *l_392 = &g_366;
        unsigned *l_393 = &g_394;
        unsigned *l_395 = (void*)0;
        unsigned *l_396 = &g_397;
        unsigned char *l_399 = (void*)0;
        unsigned char *l_400 = &g_63;
        short *l_401 = &g_267;
        int l_402 = 0xD301FC7AL;
        int *l_403 = &g_43;
        char l_405 = 0L;
        (*g_321) = (((*g_256) = ((*l_398) = (+((safe_lshift_func_uint8_t_u_s(func_28(((*l_398) = (0x5FL <= (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((((((safe_unary_minus_func_uint32_t_u(l_378)) >= (l_402 = (((void*)0 == l_379) <= ((*g_256) = (0xD8F2L != (((*l_401) = (safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint8_t_u_u((!(((*l_400) = (((safe_add_func_uint64_t_u_u(func_28((safe_rshift_func_uint16_t_u_u((l_389 | ((*l_396) = ((*l_393) = ((**l_379) = ((-1L) && (((*l_392) = (safe_rshift_func_uint16_t_u_s((&g_95 == &g_95), 8))) != 0xA573045CA483915BLL)))))), l_378)), l_378, &g_348, l_398, p_16), 18446744073709551611UL)) ^ p_16) == p_16)) > p_16)), 0xC7L)) || p_16) > 0xCE7B1CDFL), 9))) != p_16)))))) <= 0x9CBD28EFC2B7B0E1LL) == (-8L)) & l_378) || l_378), g_48)), 7)), g_80)))), g_279, l_398, l_403, (*l_403)), l_404)) ^ l_405)))) ^ g_110);

        ;
    }


    if ((safe_lshift_func_int16_t_s_s((((*l_408) = &g_285) != ((*l_409) = &g_285)), ((*l_410) = g_397))))
    {
        int *l_419 = &g_43;
        for (p_16 = 0; (p_16 != (-12)); p_16--)
        {
            int *l_420 = &g_59;
            (*g_321) = 0xA59AF7FBL;
            if (l_413)
            {
                int *l_425 = &g_43;
                unsigned *l_426 = &g_394;
                for (g_278 = (-4); (g_278 < 4); g_278++)
                {
                    int *l_416 = &g_59;
                    return l_416;


                }
                (*l_419) = ((((safe_rshift_func_int16_t_s_s(func_19(l_419, l_420, (safe_div_func_int16_t_s_s(((0x1D866102L > ((*l_426) = (func_28((safe_sub_func_uint16_t_u_u(0UL, ((*l_410) = g_136))), g_10, l_419, func_39(func_39(func_39(((***l_409) = func_39(l_419, l_425)), l_419), l_420), l_420), p_16) & 0x38F1L))) ^ 0xF14162AAEC976F7BLL), (-1L))), p_16), g_397)) && (*l_420)) > 0x630E757407D1827CLL) & 0x1E5DL);


            }
            else
            {
                return l_419;


            }


        }
    }
    else
    {
        unsigned *l_427 = &g_96;
        int l_435 = 0x661C0887L;
        unsigned long long ***l_436 = (void*)0;
        unsigned long long ****l_437 = &l_436;
        (**g_289) = func_24(((*l_427) = 6UL), (safe_div_func_int16_t_s_s((((safe_unary_minus_func_uint64_t_u(0xF653B7EF4470C024LL)) != func_28((safe_mod_func_int32_t_s_s(p_16, (safe_add_func_uint32_t_u_u(l_435, ((*l_398) == ((((*l_437) = l_436) == l_438) <= l_435)))))), l_435, &l_435, &g_59, p_16)) >= (*l_398)), g_136)), &l_435);

        ;
    }
    if ((safe_lshift_func_uint16_t_u_s(g_80, (*l_398))))
    {
        int l_444 = 0xED181C57L;
        unsigned short *l_445 = &g_278;
        unsigned **l_462 = &g_460;
        unsigned l_468 = 0x174A0397L;
        int *l_472 = &g_348;
        if (((-1L) == (g_96 & (((*l_445) = (((!l_444) ^ ((*l_398) = (g_322 > (!p_16)))) && 0xF3C09BFCL)) ^ (safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((p_16 & g_10), (safe_rshift_func_uint16_t_u_u(65527UL, 5)))), l_444))))))
        {
            char **l_452 = (void*)0;
            char **l_453 = &g_256;
            int *l_454 = (void*)0;
            p_16 = ((*g_321) = (((*l_453) = &g_136) != &l_404));

            ;
            return l_454;


        }
        else
        {
            unsigned ***l_461 = (void*)0;
            unsigned **l_464 = &g_460;
            unsigned ***l_463 = &l_464;
            unsigned long long *l_465 = &g_80;
            (*l_398) = (*g_321);
            (*l_398) = (3L == (safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((*l_465) = (((-1L) ^ ((l_462 = g_459) != ((*l_463) = &g_460))) > (*g_256))), (safe_lshift_func_uint8_t_u_u(g_366, 6)))), g_96)));
            (*g_321) = l_468;
        }
        for (p_16 = (-10); (p_16 > (-17)); p_16 = safe_sub_func_int16_t_s_s(p_16, 5))
        {
            int *l_471 = (void*)0;
            (*g_285) = l_471;

            ;
            if ((*g_321))
                continue;
            return l_472;


        }
        (*l_472) = ((*g_321) = (safe_add_func_int16_t_s_s(((((p_16 >= func_34(&l_444)) | (*l_472)) & 0xC84BL) < ((*l_472) | g_394)), g_364)));


        (*g_321) = ((g_267 | g_10) == ((*l_445) = 0xD218L));
    }
    else
    {
        long long l_479 = (-3L);
        int *l_496 = &g_48;
        unsigned **l_507 = &g_460;
        int ***l_517 = &g_285;
        unsigned l_539 = 0x52512EE1L;
        unsigned short l_546 = 0x4925L;
        unsigned long long *l_552 = &g_80;
        unsigned long long **l_551 = &l_552;
        int *l_570 = &g_348;
        for (g_96 = 0; (g_96 == 50); g_96++)
        {
            long long l_486 = (-1L);
            long long *l_492 = &l_479;
            long long **l_491 = &l_492;
            int *l_494 = &g_322;
            int *l_495 = &g_43;
            unsigned short l_538 = 65526UL;
            unsigned long long **l_553 = (void*)0;
            if ((safe_add_func_int16_t_s_s(l_479, ((func_28(l_479, (safe_lshift_func_int16_t_s_u(((0xB49CL & (safe_sub_func_uint64_t_u_u(func_28(g_96, ((*l_398) = (0xC612458E79AB5F15LL > (func_28(l_486, (safe_div_func_uint32_t_u_u(func_28(g_63, (p_16 >= (safe_lshift_func_int8_t_s_u(((*g_256) = (((*l_491) = &g_159) == l_493)), l_486))), l_494, l_494, l_479), p_16)), l_495, l_496, p_16) < (*l_496)))), l_497, l_496, g_43), 18446744073709551615UL))) ^ g_278), g_96)), l_495, l_494, p_16) != (*l_495)) & p_16))))
            {
                unsigned short *l_500 = &g_278;
                unsigned long long ****l_501 = &l_438;
                int l_504 = 0x48BE7075L;
                int **l_505 = (void*)0;
                (*l_496) = (safe_mod_func_int32_t_s_s((((l_500 == &g_10) >= (((*l_497) = ((*g_256) | ((void*)0 != l_501))) != (*l_494))) <= (g_95 < ((*l_500) = ((safe_rshift_func_int16_t_s_s(((*l_410) = 6L), (1UL == g_159))) > l_504)))), p_16));
                (***l_409) = &p_16;

                ;
                g_321 = ((*g_285) = (**g_284));

                ;
            }
            else
            {
                long long l_506 = 0L;
                int l_554 = (-3L);
                volatile unsigned short *l_568 = &g_569;
                volatile unsigned short * volatile *l_567 = &l_568;
                (*g_285) = (**g_284);
                if (l_506)
                {
                    unsigned short *l_515 = &g_278;
                    unsigned short l_516 = 0x2A29L;
                    if (((&g_460 != l_507) || func_28((*l_494), (safe_unary_minus_func_int16_t_s(p_16)), l_496, &p_16, ((*l_515) = (safe_sub_func_int8_t_s_s((g_138 | (((safe_lshift_func_int8_t_s_u((0x0C0CB181L <= (*l_495)), p_16)) ^ p_16) > 0x159C8B26L)), 0x31L))))))
                    {
                        unsigned long long l_524 = 0xDC54080EC6505AEELL;
                        int *l_527 = &l_389;
                        if (l_516)
                            break;
                        (***l_409) = func_24((((*l_408) = l_517) != (void*)0), ((*l_527) = (0x9B3DL >= ((safe_div_func_uint16_t_u_u((0x567FAADBBC287C23LL || (0xC0ECL >= (safe_rshift_func_int8_t_s_s(0L, 6)))), l_524)) <= (p_16 >= ((safe_lshift_func_int16_t_s_s(p_16, 14)) >= p_16))))), (**g_289));

                        ;
                        (*l_398) = (((safe_rshift_func_uint8_t_u_u((g_530 > ((safe_sub_func_uint32_t_u_u((func_28(g_394, ((g_533 = g_533) != (void*)0), func_24((safe_lshift_func_int16_t_s_s(g_366, 11)), ((*l_527) = (~(g_93 == ((((*l_492) = p_16) == l_506) == 0x9142L)))), l_495), l_527, g_63) & g_348), l_538)) == l_539)), 4)) < 0x5DD11A3AL) || 0x5464L);

                        ;
                    }
                    else
                    {
                        int *l_540 = &g_48;
                        return l_540;




                    }

                    ;
                    if (((*l_495) = (p_16 == (*l_495))))
                    {
                        if ((*l_497))
                            break;
                    }
                    else
                    {
                        unsigned char *l_545 = &g_364;
                        (*l_495) = (safe_add_func_uint32_t_u_u((~(((*l_494) || (l_546 = (safe_add_func_int8_t_s_s(1L, ((*l_545) = 1UL))))) >= (g_397 || (1L ^ (p_16 < l_506))))), ((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u(0L, (((*g_534) = l_551) == l_553))) || l_554) || g_80) < p_16), p_16)) ^ 18446744073709551608UL)));

                        ;
                        if (l_506)
                            continue;
                        (*g_321) = (((**g_284) == &p_16) >= 0x508DF86D66AD0C90LL);
                    }
                    (*l_495) = ((*l_494) = (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s(p_16)), l_506)));
                    (*g_321) = (*g_321);
                }
                else
                {
                    (**g_284) = (**l_517);
                    (*l_497) = p_16;
                    p_16 = (safe_rshift_func_int16_t_s_s(p_16, 15));
                }

                ;
                for (l_413 = 0; (l_413 == 22); l_413++)
                {
                    unsigned *l_562 = &g_530;
                    (**g_284) = func_24(((*l_562) = ((*l_497) >= 4294967295UL)), ((*l_398) == ((safe_add_func_uint64_t_u_u((0L >= ((*l_410) = (-2L))), (safe_add_func_int32_t_s_s(p_16, p_16)))) != 1UL)), &p_16);

                    ;
                }
                l_567 = g_210;

                ;
            }

            ;
            ;
            ;
            (*l_494) = (*l_496);
            (***l_409) = (*g_285);
            return l_495;





        }


        ;
        (**g_289) = func_39(l_496, l_570);

        ;
    }



    for (g_348 = 0; (g_348 <= 24); ++g_348)
    {
        int l_573 = (-1L);
        unsigned char l_576 = 0x83L;
        p_16 = ((*l_497) | func_28(l_573, l_573, &l_573, &l_573, (((func_28(p_16, ((*l_493) = (safe_lshift_func_int8_t_s_u(((*g_256) = (*g_256)), 7))), &l_573, ((***l_409) = &p_16), p_16) | 0x76785EDFL) <= 0UL) > g_394)));

        ;
    }


    return &g_348;


}







static long long func_19(int * p_20, int * p_21, unsigned long long p_22, unsigned char p_23)
{
    int *l_351 = &g_48;
    unsigned short l_354 = 65535UL;
    unsigned char *l_363 = &g_364;
    long long *l_365 = &g_366;
    (*l_351) = (safe_add_func_uint16_t_u_u((+func_34((p_21 = l_351))), ((p_23 <= p_22) | ((safe_lshift_func_int8_t_s_u(((l_354 > p_22) | 4294967295UL), 5)) > ((*l_365) = ((safe_lshift_func_uint8_t_u_s(((*l_363) = ((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((-2L), (safe_lshift_func_uint16_t_u_u((0x6F946EF15EC3500FLL | p_22), p_22)))) > p_22), p_23)) & g_322)), g_10)) == 0xA738E8AD9769677FLL))))));


    ;
    return p_23;
}







static int * func_24(unsigned p_25, int p_26, int * p_27)
{
    unsigned long long *l_331 = &g_80;
    short *l_340 = &g_267;
    short *l_342 = &g_267;
    short **l_341 = &l_342;
    short *l_343 = (void*)0;
    short **l_344 = &l_343;
    int l_345 = 7L;
    int *l_346 = (void*)0;
    l_345 = ((*g_321) = ((g_59 >= (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(func_28((safe_add_func_int32_t_s_s(9L, (0xE4E52E89L == (l_331 != (*g_230))))), (0x0FL & ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((((*l_341) = (l_340 = l_340)) != ((*l_344) = l_343)) != ((*l_331) = (func_28(l_345, g_279, p_27, (**g_289), p_25) & 0x2EL))), 3L)), g_267)), g_59)), 0)) > p_26)), p_27, p_27, l_345), p_25)), l_345))) != 253UL));


    l_345 = ((func_28(l_345, g_95, (**g_289), (**g_289), g_96) && p_25) == (l_345 || 4294967295UL));
    return l_346;


}







static int func_28(unsigned short p_29, long long p_30, int * p_31, int * p_32, unsigned short p_33)
{
    int ****l_323 = (void*)0;
    (*g_321) = ((!1L) || ((void*)0 == l_323));
    (*g_285) = (void*)0;

    ;
    if ((*g_321))
    {
        (**g_284) = p_32;


    }
    else
    {
        short l_324 = 0xCB4DL;
        (**g_284) = (void*)0;
        l_324 = (*g_321);
    }


    return g_63;
}







static unsigned char func_34(int * p_35)
{
    int l_142 = 6L;
    unsigned char *l_143 = &g_63;
    unsigned l_201 = 1UL;
    long long l_242 = 1L;
    g_59 = ((*p_35) = (*p_35));
    g_144 = func_36(l_142, ((void*)0 == l_143));

    ;
    for (g_136 = 0; (g_136 < (-10)); g_136--)
    {
        unsigned l_150 = 0xDB4A0C66L;
        long long *l_157 = &g_93;
        long long *l_158 = &g_159;
        int ***l_162 = (void*)0;
        char *l_163 = &g_138;
        int l_167 = (-9L);
        unsigned *l_178 = &g_95;
        unsigned **l_177 = &l_178;
        unsigned ***l_176 = &l_177;
        long long l_183 = (-1L);
        long long l_191 = 5L;
        int l_194 = (-1L);
        unsigned l_238 = 0x63FF8919L;
        unsigned long long *l_240 = &g_80;
        unsigned long long **l_239 = &l_240;
        short l_291 = 1L;
        if (((safe_rshift_func_uint8_t_u_s(((void*)0 != g_149), 6)) >= (g_96 > (((*l_163) = ((l_150 & ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((((*l_158) = ((*l_157) = (safe_mod_func_int16_t_s_s((g_43 <= g_80), l_150)))) != (safe_add_func_int32_t_s_s((*g_144), ((void*)0 != l_162)))) || 7L), 2)), 7)) < g_80)) | l_142)) <= 255UL))))
        {
            short l_164 = 9L;
            int *l_165 = (void*)0;
            int *l_166 = &l_142;
            int **l_184 = &l_166;
            l_167 = (~((*l_166) = ((*p_35) = l_164)));
            (*l_166) = ((*g_144) = (safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((0xAAD8L <= ((g_10 == ((void*)0 == l_176)) >= (safe_lshift_func_uint16_t_u_u(g_59, (!((((4UL ^ 0L) ^ 254UL) >= (((((*g_144) <= 0xA389647EL) != 0x87L) == 7UL) > g_80)) < l_142)))))) || 0x12L), 0x4ABAL)), 0x760D513AL)) && g_93), l_183)));
            (*l_184) = &l_142;
        }
        else
        {
            unsigned l_185 = 18446744073709551615UL;
            (*p_35) = (l_185 && g_10);
        }
        if ((l_142 != ((*l_157) = ((*l_158) = 0xCCC173D2B22B304CLL))))
        {
            int *l_186 = &l_167;
            int **l_187 = &l_186;
            unsigned **l_190 = &l_178;
            unsigned **l_214 = &l_178;
            (*g_144) = (*p_35);
            (*l_187) = l_186;
            if ((((((*p_35) & ((safe_div_func_int8_t_s_s(l_150, (l_142 || (*l_186)))) && (((*l_176) = l_190) == (void*)0))) || 0xED08L) < l_142) == l_191))
            {
                unsigned short *l_202 = &g_110;
                (**l_187) = (*p_35);
                (*p_35) = (safe_rshift_func_uint16_t_u_s(l_194, ((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((g_82 == ((*l_202) = (g_95 | (safe_div_func_int16_t_s_s(g_48, l_201))))) < (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((~l_201), 7)), (safe_lshift_func_uint8_t_u_s(((0UL & (*g_144)) != (((&g_149 != (void*)0) == 0xDBL) | g_48)), 1))))) & 0xCB911F2AL), (**l_187))), g_80)) || (*g_144))));
            }
            else
            {
                unsigned char l_209 = 250UL;
                int *l_216 = (void*)0;
                int **l_272 = (void*)0;
                if ((((*g_144) = (g_80 <= g_10)) ^ 6UL))
                {
                    if (l_209)
                        break;
                    g_210 = g_210;
                    if (((l_209 && 0x6CL) > (*p_35)))
                    {
                        unsigned **l_213 = &l_178;
                        int l_215 = 0xA8C2C0C5L;
                        l_214 = l_213;
                        g_144 = &g_48;

                        ;
                        return l_215;
                    }
                    else
                    {
                        (*p_35) = (*p_35);
                        (*l_187) = func_39(func_39(func_39(&g_59, (*l_187)), (*l_187)), p_35);


                        (*l_187) = func_39(p_35, p_35);
                        p_35 = func_39(&g_59, p_35);
                    }


                }
                else
                {
                    unsigned short *l_218 = &g_110;
                    unsigned short **l_217 = &l_218;
                    unsigned short **l_219 = (void*)0;
                    unsigned short *l_221 = &g_110;
                    unsigned short **l_220 = &l_221;
                    int l_229 = 3L;
                    if (((*p_35) = ((((*l_217) = &g_10) == ((*l_220) = &g_10)) & (((safe_mod_func_uint64_t_u_u(g_95, (safe_add_func_int16_t_s_s((((*l_186) > l_142) != g_10), (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(0xA6F6E398B15E2B98LL)), (~(l_229 = (*l_186))))))))) != (l_209 && g_96)) != g_95))))
                    {
                        volatile unsigned long long ***l_233 = &g_230;
                        (*l_233) = g_230;
                        (*g_144) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(l_229, (l_238 == g_138))), 12));
                    }
                    else
                    {
                        unsigned long long ***l_241 = &l_239;
                        (*p_35) = (*p_35);
                        (*l_241) = l_239;
                    }

                    ;
                    ;
                }


                (*l_187) = &l_142;

                ;
                if (((**l_187) = ((*g_144) = (*g_144))))
                {
                    unsigned l_249 = 0UL;
                    unsigned long long *l_251 = &g_80;
                    if ((l_242 || (safe_add_func_int8_t_s_s((0x23372F705CCF7F12LL > 18446744073709551610UL), (0x6768D720L > (l_209 ^ (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_249, 0)), g_43))))))))
                    {
                        int **l_250 = &l_216;
                        (*l_250) = func_39((*l_187), func_39(func_39(p_35, func_39(&g_48, func_39(func_39(func_39(&g_59, p_35), g_144), ((*l_250) = p_35)))), g_144));


                        (**l_187) = ((g_48 == ((*l_157) = ((*g_230) == l_251))) & 0xC8FFL);
                        if ((*p_35))
                            continue;
                    }
                    else
                    {
                        unsigned l_263 = 0x4FCE7EEAL;
                        short *l_266 = &g_267;
                        (*g_144) = (0xEAL >= (safe_div_func_int8_t_s_s(((((*l_157) = ((safe_sub_func_int8_t_s_s(g_82, ((g_256 = &g_138) != (void*)0))) || ((-1L) != (safe_mod_func_int32_t_s_s((((g_80 != (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_263, ((*l_143) = (g_82 && ((*l_266) = ((safe_rshift_func_int16_t_s_s(l_242, 10)) <= 0xBEBFL)))))), l_249))) || g_48) != l_249), (*g_144)))))) < l_142) != l_263), (*l_186))));
                    }


                    (*p_35) = l_249;
                    (*p_35) = (safe_lshift_func_uint16_t_u_u((*l_186), g_80));
                    for (g_159 = 0; (g_159 > (-24)); g_159 = safe_sub_func_uint8_t_u_u(g_159, 5))
                    {
                        int **l_273 = &l_186;
                        l_273 = l_272;

                        ;
                        (*l_187) = func_39(p_35, (*l_187));

                        ;
                        (*l_187) = &g_43;

                        ;
                    }

                    ;
                }
                else
                {
                    int ***l_288 = (void*)0;
                    (*l_187) = &g_43;

                    ;
                    for (g_110 = (-18); (g_110 > 55); g_110 = safe_add_func_int16_t_s_s(g_110, 7))
                    {
                        unsigned short *l_276 = (void*)0;
                        unsigned short *l_277 = &g_278;
                        int ****l_286 = (void*)0;
                        int ****l_287 = &g_284;
                        int ****l_290 = &l_162;
                        (*l_187) = &l_142;

                        ;
                        if ((*p_35))
                            continue;
                        (*l_187) = (void*)0;

                        ;
                        (*p_35) = (((0L > ((*l_163) = ((g_279 = ((*l_277) = g_110)) ^ (safe_div_func_int32_t_s_s((l_242 & ((*l_143) = 0xFEL)), (safe_rshift_func_int16_t_s_s(((0x2106L == (8L ^ (*g_256))) && ((g_289 = (l_288 = ((*l_287) = g_284))) == ((*l_290) = &g_285))), g_136))))))) & g_10) || g_95);
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;

            }

            ;
            ;
        }
        else
        {
            unsigned short l_294 = 0xC9AEL;
            int l_300 = (-10L);
            if (((((l_242 > l_291) >= ((safe_add_func_int16_t_s_s(l_201, (-1L))) & 1L)) | (**g_285)) & (((l_294 & (g_93 <= (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((l_294 >= g_80), 3)) <= 2UL), l_294)))) || (*p_35)) && 0x6639L)))
            {
                (**g_284) = &l_142;

                ;
            }
            else
            {
                long long l_299 = 0xDE0F63417869A76FLL;
                unsigned short *l_303 = (void*)0;
                unsigned short *l_304 = &g_110;
                int *l_309 = &g_59;
                (*g_144) = (*g_144);
                if (l_294)
                    break;
                (*g_144) = ((l_299 ^ (1UL != ((l_300 = 0x8031L) <= (safe_rshift_func_uint8_t_u_s(((*g_144) ^ (((g_93 >= (0x825CBD8DL >= ((*g_256) && (((*l_304) = 0x78EEL) != (((*l_240) = (safe_sub_func_int32_t_s_s(((*l_309) = (((*l_158) = (((safe_div_func_int32_t_s_s(((g_63 & l_299) >= (-1L)), 0x6DAA5E9EL)) || g_96) > l_299)) | l_294)), 0xC33E8E43L))) | l_142))))) < 0x5AL) > 0xDE01L)), 5))))) > g_48);
                (**g_284) = func_39((**g_284), p_35);
            }


            if (((***g_289) = ((safe_div_func_int8_t_s_s(((void*)0 != g_210), l_201)) && ((*l_143) = g_278))))
            {
                return g_96;


            }
            else
            {
                for (l_167 = 20; (l_167 > 14); l_167--)
                {
                    int *l_315 = (void*)0;
                    int **l_314 = &l_315;
                    int *l_316 = (void*)0;
                    int *l_317 = &g_59;
                    (*p_35) = (*p_35);
                    (*l_314) = ((**g_284) = func_39((*g_285), p_35));



                    (*l_317) = ((*p_35) = (l_142 = (*p_35)));
                }
                (**g_284) = &l_300;

                ;
                (**g_284) = p_35;


            }


        }

        ;
        (***g_284) = (safe_rshift_func_int8_t_s_s(0x34L, 7));
        (**g_289) = p_35;
    }


    return l_242;
}







static int * func_36(unsigned p_37, char p_38)
{
    int *l_42 = &g_43;
    int **l_115 = &l_42;
    int l_123 = 0L;
    int ***l_131 = &l_115;
    (*l_115) = func_39(l_42, l_42);

    ;
    if ((safe_add_func_int16_t_s_s(g_93, p_38)))
    {
        char l_118 = 1L;
        l_118 = ((*l_42) = (&g_95 != l_42));
    }
    else
    {
        unsigned l_126 = 0x3F00C75BL;
        unsigned *l_128 = &g_95;
        unsigned **l_127 = &l_128;
        unsigned char *l_129 = &g_63;
        int l_130 = 8L;
        int ***l_133 = &l_115;
        int ****l_132 = &l_133;
        char *l_134 = (void*)0;
        char *l_135 = &g_136;
        char *l_137 = &g_138;
        unsigned short *l_141 = &g_110;
        (*l_42) = (safe_sub_func_int8_t_s_s((-7L), ((*l_129) = (g_63 > ((((safe_mod_func_int64_t_s_s((p_38 <= ((l_123 && (safe_lshift_func_uint8_t_u_s((l_126 = (p_38 | p_37)), 1))) & ((g_112 != l_127) && (**l_115)))), (**l_115))) ^ g_43) == (*l_42)) >= 0L)))));
        (*l_42) = ((*l_42) <= p_37);
        (***l_131) = ((~((**l_115) == (l_130 == ((*l_137) = (((*l_135) = (l_131 == ((*l_132) = (void*)0))) != g_96))))) ^ (safe_lshift_func_uint16_t_u_s(((*l_141) = p_37), 3)));

        ;
    }
    (*l_42) = (***l_131);
    return &g_43;


}







static int * func_39(int * p_40, int * p_41)
{
    int *l_58 = (void*)0;
    int ***l_66 = (void*)0;
    unsigned char l_106 = 1UL;
    short l_111 = 0x8B4DL;
    unsigned * volatile **l_114 = &g_112;
    for (g_43 = (-17); (g_43 < 16); g_43++)
    {
        int *l_47 = &g_43;
        int **l_46 = &l_47;
        unsigned short *l_107 = (void*)0;
        unsigned short *l_108 = (void*)0;
        unsigned short *l_109 = &g_110;
        (*l_46) = &g_43;
        for (g_48 = (-6); (g_48 >= (-7)); g_48--)
        {
            int *l_52 = &g_43;
            int **l_51 = &l_52;
            int ***l_53 = &l_51;
            char l_83 = 0xA9L;
            (*l_51) = ((*l_46) = (void*)0);

            ;
            ;
            (*l_53) = &p_40;

            ;
            if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(g_10, (l_58 != ((*l_46) = &g_43)))), (**l_51))))
            {
                int *l_62 = &g_48;
                if ((+g_43))
                {
                    short l_67 = (-8L);
                    unsigned long long *l_78 = (void*)0;
                    unsigned long long *l_79 = &g_80;
                    unsigned long long *l_81 = &g_82;
                    for (g_59 = 0; (g_59 > (-5)); g_59 = safe_sub_func_int8_t_s_s(g_59, 7))
                    {
                        (*l_46) = l_62;

                        ;
                        g_63 = (~(~8L));
                        if ((***l_53))
                            continue;
                    }

                    ;
                    if ((safe_add_func_int64_t_s_s((**l_46), ((*l_81) = ((*l_79) = (g_10 & (~((l_67 = (g_59 = (l_66 != &l_46))) == (safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s(g_43, (safe_mod_func_uint32_t_u_u(0UL, g_10)))), (safe_div_func_int16_t_s_s(((*l_47) < ((**l_46) <= g_10)), g_43)))), g_63))))))))))
                    {
                        return &g_48;


                    }
                    else
                    {
                        if (g_63)
                            break;
                        (*l_46) = p_41;


                    }


                    if ((*l_62))
                        continue;
                }
                else
                {
                    long long *l_92 = &g_93;
                    unsigned *l_94 = &g_95;
                    l_83 = ((*l_47) | g_43);
                    g_96 = (safe_div_func_int8_t_s_s((***l_53), (safe_sub_func_uint64_t_u_u((g_10 || (safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((*l_92) = g_43), g_48)), ((*l_94) = 0xEB8EFB66L)))), ((*l_47) && 0xF41B6ADDL)))));
                }


                (*l_51) = &g_43;

                ;
                (**l_53) = p_40;
            }
            else
            {
                char l_105 = 0x4BL;
                g_59 = (safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((l_105 || (0xDE48L >= l_105)) | l_105), (**l_46))), (**l_46))), 7));
                if (g_82)
                    break;
            }


            (**l_53) = (*l_46);
        }


        l_111 = (((*l_109) = l_106) || (g_48 > g_96));
    }


    (*l_114) = g_112;
    return p_41;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
