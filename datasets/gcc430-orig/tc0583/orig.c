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



static const int g_7 = 8L;
static unsigned char g_41 = 1UL;
static int g_46 = 0x8EF3352FL;
static unsigned g_70 = 0x39FCB6EAL;
static int g_84 = (-8L);
static int g_86 = (-7L);
static int *g_104 = &g_84;
static int ** volatile g_103 = &g_104;
static int **g_106 = &g_104;
static int *** volatile g_105 = &g_106;
static unsigned *g_124 = &g_70;
static unsigned short g_129 = 0xD9EBL;
static char g_135 = 0xE4L;
static short g_147 = 0L;
static short g_149 = 9L;
static unsigned long long g_163 = 1UL;
static int g_169 = 5L;
static unsigned short g_171 = 0xD73FL;
static int g_174 = (-1L);
static int g_177 = 2L;
static unsigned long long g_207 = 0x9B9BB54825C2B004LL;
static int *g_211 = &g_177;
static int * volatile * volatile g_210 = &g_211;
static unsigned char *g_245 = &g_41;
static unsigned char **g_244 = &g_245;
static unsigned char *** volatile g_243 = &g_244;
static int **g_260 = &g_211;
static int ***g_259 = &g_260;
static long long g_281 = 0xCF061B8DCB77C4CBLL;
static unsigned char g_301 = 255UL;
static volatile short * volatile *g_310 = (void*)0;
static volatile short g_313 = 0x82A3L;
static volatile short * volatile g_312 = &g_313;
static int * volatile g_457 = &g_86;
static int *g_459 = &g_169;
static unsigned g_469 = 7UL;
static char g_475 = 0x59L;
static long long g_478 = 0x96E957D3D4BE4A73LL;
static const long long *g_480 = &g_281;
static const long long * volatile * volatile g_479 = &g_480;
static short g_548 = 0L;
static const int ** const volatile g_579 = (void*)0;
static const int ** volatile g_580 = (void*)0;
static const int *g_582 = &g_86;
static const int ** volatile g_581 = &g_582;
static volatile int g_612 = (-1L);
static volatile unsigned long long *g_636 = (void*)0;
static volatile unsigned long long ** volatile g_635 = &g_636;
static unsigned long long *g_718 = &g_207;
static unsigned long long **g_717 = &g_718;
static unsigned g_724 = 18446744073709551615UL;
static unsigned g_739 = 1UL;
static char g_804 = (-2L);
static int *g_843 = &g_169;
static const long long **g_847 = &g_480;
static const long long *** volatile g_846 = &g_847;
static const volatile unsigned char g_889 = 2UL;
static const int ** volatile g_904 = (void*)0;
static const int ** volatile g_905 = &g_582;
static const int ** volatile g_906 = &g_582;



static unsigned char func_1(void);
static int func_2(const unsigned short p_3, int p_4, unsigned char p_5, unsigned p_6);
static int func_8(int p_9, unsigned char p_10, unsigned p_11, char p_12, int p_13);
static const int func_14(long long p_15, unsigned char p_16);
static char func_19(const unsigned char p_20, unsigned p_21, const char p_22, long long p_23, unsigned short p_24);
static unsigned short func_30(long long p_31, const int p_32);
static long long func_33(char p_34, unsigned long long p_35, unsigned char p_36, int p_37, long long p_38);
static char func_51(int * p_52, unsigned p_53, short p_54, int * p_55);
static int * func_56(const char p_57);
static int * func_59(char p_60);
static unsigned char func_1(void)
{
    const unsigned long long l_25 = 0x34DE6F885EA6EDADLL;
    int *l_176 = &g_177;
    int l_467 = 0x657CA74AL;
    unsigned *l_468 = &g_70;
    char *l_474 = &g_475;
    long long *l_476 = (void*)0;
    long long *l_477 = &g_478;
    unsigned char **l_890 = (void*)0;
    const unsigned l_892 = 1UL;
    int *l_913 = &g_86;
    if (func_2(g_7, func_8(((((func_14(((*l_477) &= (safe_lshift_func_int8_t_s_s(((-1L) >= (g_7 == ((*l_474) &= func_19(l_25, ((*l_468) = (((l_467 = (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((0xB50FL & func_30(l_25, ((*l_176) = (func_33((safe_div_func_uint8_t_u_u(l_25, (g_41 = (+0x4BL)))), g_7, g_7, l_25, l_25) ^ (-3L))))) < l_25), l_25)) >= l_25) < g_301), l_25))) > 0xE240L) && (***g_243))), l_25, g_207, g_469)))), 2))), l_25) && 0xE666A5D6L) < g_469) > l_25) ^ 0x81L), l_25, g_7, g_207, l_25), l_25, g_724))
    {
        int l_882 = 0xA5EFCA03L;
        unsigned char **l_891 = &g_245;
        char l_893 = 0xEAL;
        const unsigned char *l_901 = &g_41;
        const unsigned char **l_900 = &l_901;
        const unsigned char ***l_899 = &l_900;
        if ((safe_lshift_func_int16_t_s_u(l_882, ((safe_sub_func_uint64_t_u_u(l_25, 0xB4CC3E22D7906EF5LL)) | (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(0x8C18L, (g_889 & (l_890 == l_891)))), l_892))))))
        {
            (*g_843) = l_893;
        }
        else
        {
            const unsigned char ****l_902 = &l_899;
            for (g_724 = 0; (g_724 <= 39); g_724++)
            {
                short l_896 = (-4L);
                if (l_896)
                    break;
                (*g_106) = (*g_106);
            }
            if ((safe_sub_func_uint64_t_u_u(l_25, (0x0369L >= (&l_890 != ((*l_902) = l_899))))))
            {
                return (**g_244);
            }
            else
            {
                unsigned long long l_903 = 0xB89401D9857D7A4ELL;
                return l_903;
            }
        }
        return (*g_245);
    }
    else
    {
        (*g_905) = (*g_581);
    }

    ;

    (*g_906) = (*g_905);
    (*g_106) = func_56(((safe_rshift_func_uint8_t_u_u((func_19((0x8BA88CF9L | l_25), (7UL < ((~(safe_rshift_func_uint16_t_u_u(g_281, (*l_913)))) <= (*l_913))), (*l_913), (*l_913), g_169) <= 0xC6L), (**g_244))) & (*l_913)));

    ;
    return (*l_913);
}







static int func_2(const unsigned short p_3, int p_4, unsigned char p_5, unsigned p_6)
{
    int *l_729 = &g_84;
    unsigned long long **l_828 = &g_718;
    int l_854 = (-1L);
    unsigned long long l_860 = 0xE4E050973B9F4689LL;
    short *l_864 = &g_149;
    short **l_865 = (void*)0;
    short *l_866 = (void*)0;
    char *l_879 = &g_475;
    for (g_86 = 0; (g_86 < (-14)); --g_86)
    {
        (*g_459) &= p_4;
        for (g_475 = 8; (g_475 < 20); g_475++)
        {
            (*g_106) = l_729;

            ;
        }

        ;
        return p_5;
    }
    (*l_729) ^= ((*g_459) = p_3);
    for (g_70 = (-15); (g_70 <= 9); g_70 = safe_add_func_int8_t_s_s(g_70, 3))
    {
        unsigned long long l_732 = 1UL;
        int l_740 = (-1L);
        unsigned *l_783 = &g_739;
        int *l_789 = &g_84;
        unsigned long long l_822 = 18446744073709551608UL;
    }
    (*l_729) = (safe_lshift_func_int8_t_s_s(((+(safe_unary_minus_func_int64_t_s((l_864 == (l_866 = l_864))))) | ((&l_854 != &l_854) != ((*l_879) = (~(safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((p_4 <= (safe_lshift_func_uint16_t_u_u(p_3, 8))), (((*g_459) &= (*l_729)) >= ((safe_add_func_uint8_t_u_u((1L > (safe_add_func_uint8_t_u_u(253UL, p_5))), 0xBFL)) <= (*g_312))))) != (*l_729)) & p_3), p_6)))))), 4));

    ;
    return (*g_843);
}







static int func_8(int p_9, unsigned char p_10, unsigned p_11, char p_12, int p_13)
{
    unsigned l_499 = 0xAD14D540L;
    unsigned long long l_500 = 18446744073709551615UL;
    int *l_501 = &g_174;
    short l_502 = 0x066FL;
    int *l_536 = &g_169;
    unsigned short l_625 = 0xFD4CL;
    int *l_628 = (void*)0;
    short *l_649 = &g_147;
    short ** const l_648 = &l_649;
    unsigned long long *l_715 = &l_500;
    unsigned long long **l_714 = &l_715;
    unsigned long long ***l_713 = &l_714;
    unsigned long long **l_716 = &l_715;
    unsigned long long ***l_719 = &g_717;
    unsigned *l_720 = &g_70;
    char *l_721 = &g_475;
    for (g_147 = 0; (g_147 >= 27); g_147++)
    {
        unsigned short l_490 = 0UL;
        unsigned short l_497 = 0UL;
        int l_498 = 0x554AEE74L;
        for (g_281 = 16; (g_281 < 26); ++g_281)
        {
            (*g_459) |= p_13;
        }
        if ((p_11 < ((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_490, (safe_add_func_uint16_t_u_u(l_490, (safe_mod_func_int64_t_s_s(p_12, ((+func_19((((void*)0 != &g_103) < p_10), l_490, ((((l_498 = ((safe_sub_func_int32_t_s_s((g_478 < 0L), l_497)) & p_12)) != (*g_459)) != l_499) > l_499), (*g_480), g_469)) & 0x3EL))))))), l_490)) < 0UL)))
        {
            (*g_106) = func_56((((void*)0 != &p_10) & 3UL));

            ;
            return l_500;
        }
        else
        {
            (*g_459) = (-5L);
        }
    }
    if (p_10)
    {
        const unsigned long long l_505 = 0UL;
        int ***l_508 = &g_106;
        unsigned short *l_509 = &g_129;
        unsigned *l_510 = &l_499;
        (*g_106) = l_501;

        ;
        (*g_459) = l_502;
        (*g_459) |= (((((safe_mod_func_int8_t_s_s(((*l_501) < (((*l_510) ^= (((0x32L > (*l_501)) | 0x9C743024CE6B5562LL) & (-1L))) & (*l_501))), g_281)) | (*l_501)) < p_9) >= p_12) >= 0x3E5B3455L);
    }
    else
    {
        int *l_537 = &g_169;
        unsigned char **l_566 = &g_245;
        int *l_615 = &g_174;
        unsigned l_622 = 18446744073709551615UL;
        char l_627 = 0L;
        long long *l_677 = &g_478;
        long long **l_676 = &l_677;
        long long ***l_675 = &l_676;
lbl_645:
        for (g_147 = 0; (g_147 != 26); g_147++)
        {
            unsigned char * const *l_515 = &g_245;
            int l_518 = 0x79364305L;
            unsigned char *l_553 = (void*)0;
            int l_594 = 1L;
            char l_608 = 5L;
        }
        (*l_501) |= ((*l_536) = (((safe_rshift_func_uint16_t_u_s(g_147, 12)) | (*l_537)) || g_475));
        if (((*l_537) >= (((g_612 && (safe_rshift_func_uint8_t_u_s((*g_245), (*l_615)))) > g_281) == 0L)))
        {
            (*l_501) = (*g_582);
            (*g_459) = (*g_582);
        }
        else
        {
            unsigned long long *l_638 = &l_500;
            unsigned long long **l_637 = &l_638;
            short *l_639 = &g_548;
            unsigned * const l_642 = &g_70;
            int l_644 = 0x1BB2AE37L;
            long long *** const l_678 = &l_676;
            unsigned l_680 = 0xAED605B9L;
            const int **l_694 = &g_582;
            unsigned char ***l_696 = (void*)0;
            unsigned char ****l_695 = &l_696;
            unsigned long long l_699 = 0x07FA4444F3FB1149LL;
            unsigned long long l_704 = 0x7508CA025FEACC6DLL;
            int *l_705 = (void*)0;
            int *l_706 = &g_84;
            if ((safe_sub_func_uint16_t_u_u(p_11, (safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_635 != l_637), (((*l_639) = ((void*)0 != &g_135)) | (safe_rshift_func_uint16_t_u_s(g_478, 9))))), (p_10 | ((void*)0 == l_642)))))))
            {
                int *l_643 = &g_169;
                (*g_106) = l_643;

                ;
                l_644 ^= p_10;
            }
            else
            {
                long long *l_651 = &g_281;
                long long ** const l_650 = &l_651;
                int l_655 = 4L;
                if (l_502)
                    goto lbl_645;
                if ((safe_mod_func_uint8_t_u_u((0x26L == 6UL), g_174)))
                {
                    long long ***l_652 = (void*)0;
                    long long **l_654 = &l_651;
                    long long ***l_653 = &l_654;
                    (*g_106) = (void*)0;
                    (*g_459) = ((void*)0 != l_648);
                    (*l_653) = l_650;
                    (*g_106) = l_537;

                    ;
                }
                else
                {
                    unsigned char l_667 = 0xE6L;
                    int *l_668 = &g_46;
                    unsigned char *** const l_689 = &l_566;
                    (*l_615) ^= p_11;
                    l_668 = func_56((safe_mod_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(((*g_210) == &p_9), ((**l_637) = 0x858F382BE3B456FDLL))) != func_19(p_11, l_644, p_13, p_9, (safe_unary_minus_func_uint32_t_u((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(0xE8L, func_19((safe_sub_func_int64_t_s_s((l_667 | 0x8A3CL), p_10)), p_13, l_667, p_11, p_9))), p_13)))))), 0x80FCDB1D5212244FLL)));
                    for (g_475 = (-29); (g_475 <= 6); g_475++)
                    {
                        unsigned short *l_673 = &l_625;
                        unsigned short *l_674 = &g_129;
                        const int l_679 = 6L;
                        unsigned l_681 = 1UL;
                        char *l_682 = &g_135;
                        (*l_537) = func_30(((((safe_lshift_func_int16_t_s_s(((*l_639) = p_9), p_13)) || ((*l_682) = (func_19((((*l_674) = ((*l_673) = g_149)) & func_19(l_644, (p_11 & (l_644 <= (l_675 == l_678))), l_679, (**g_479), l_644)), l_680, g_70, l_681, l_655) & p_9))) > 9L) & (**g_244)), p_11);


                        (*l_501) |= 0x6743CE15L;
                        (*g_106) = l_668;

                        ;
                        (*l_615) = 0x1C9A02B0L;
                    }

                    ;
                    for (l_644 = 0; (l_644 >= (-4)); l_644 = safe_sub_func_int32_t_s_s(l_644, 3))
                    {
                        unsigned char *l_693 = &l_667;
                        unsigned char ** const l_692 = &l_693;
                        unsigned char ** const *l_691 = &l_692;
                        unsigned char ** const **l_690 = &l_691;
                        (*l_501) ^= (((safe_rshift_func_int16_t_s_s((&l_644 != l_668), 8)) != 0UL) < (l_689 != ((*l_690) = &g_244)));

                        ;
                    }
                }

                ;
                l_655 = 0x5675D8DCL;
            }

            ;
            (*l_694) = (*g_581);
            (*l_706) |= ((((-1L) == (((void*)0 != l_695) | ((-3L) & (((((0x5AL <= (safe_add_func_int32_t_s_s(p_12, l_699))) && (!((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((**l_694), (((*l_615) & p_9) != (***g_243)))), p_10)) & l_704))) > 0x932DL) != (*l_501)) || p_10)))) || (*l_537)) != (**g_244));
        }

        ;
    }

    ;
    (*l_536) = (((safe_sub_func_uint32_t_u_u((((*l_501) < (*l_501)) != ((safe_sub_func_uint8_t_u_u(((*g_245) = (***g_243)), ((*l_721) = (safe_mul_func_uint32_t_u_u(((*l_720) = ((l_716 = ((*l_713) = (void*)0)) == ((*l_719) = g_717))), ((p_12 || p_13) <= p_10)))))) != 0x182EAF061B1558AALL)), (*l_501))) ^ g_177) && g_612);

    ;
    ;
    (*l_501) = (safe_div_func_uint32_t_u_u(((*l_720) = p_11), (*g_459)));
    return (**g_260);
}







static const int func_14(long long p_15, unsigned char p_16)
{
    const short l_481 = (-1L);
    g_479 = g_479;
    return l_481;
}







static char func_19(const unsigned char p_20, unsigned p_21, const char p_22, long long p_23, unsigned short p_24)
{
    int *l_470 = (void*)0;
    int l_473 = (-8L);
    (*g_106) = l_470;

    ;
    (*g_459) = (safe_add_func_int16_t_s_s(p_23, (+((p_24 >= l_473) <= (l_473 ^ (-2L))))));
    return g_147;
}







static unsigned short func_30(long long p_31, const int p_32)
{
    const unsigned char l_178 = 1UL;
    int *l_194 = &g_86;
    int l_223 = 0xB2269D59L;
    short *l_237 = &g_147;
    int ***l_261 = &g_260;
    int ***l_288 = &g_260;
    unsigned char ***l_306 = &g_244;
    unsigned char l_350 = 255UL;
    char *l_432 = &g_135;
    if (l_178)
    {
        char l_181 = 0x3FL;
        int *l_189 = &g_169;
        int l_199 = 0xAB3FDB3DL;
        long long *l_284 = (void*)0;
        volatile short * volatile *l_311 = &g_312;
        const int l_342 = 7L;
        int * const l_454 = &l_199;
        unsigned char l_460 = 0x69L;
        if ((safe_add_func_int32_t_s_s((l_181 &= 0x110B79F6L), p_32)))
        {
            const int l_182 = 0x115F6FB7L;
            short *l_192 = &g_147;
            int *l_193 = &g_174;
            if ((l_182 | 1L))
            {
                int ***l_183 = &g_106;
                int *l_184 = &g_86;
                (*l_184) = (((*l_183) = (*g_105)) == (void*)0);
            }
            else
            {
                return g_149;
            }
            (*l_193) = (safe_div_func_int16_t_s_s(((&g_135 != &l_181) >= (safe_lshift_func_int8_t_s_u(((*l_189) < 1UL), 7))), l_178));
            (*g_106) = l_194;

            ;
            return (*l_189);
        }
        else
        {
            unsigned l_202 = 0xFC0AEFA7L;
            unsigned char *l_242 = &g_41;
            unsigned char **l_241 = &l_242;
            long long *l_280 = &g_281;
            char *l_282 = &l_181;
            char *l_283 = &g_135;
            const int *l_296 = &g_177;
            unsigned char **l_327 = &g_245;
            int *l_375 = &g_86;
            short l_387 = (-1L);
            unsigned ** const l_413 = &g_124;
            unsigned l_439 = 4294967287UL;
            const long long *l_452 = &g_281;
            int * volatile l_458 = &g_46;
            (*g_106) = func_56(p_32);

            ;
        }

        ;
        (*g_459) = (((l_460 > (func_51(&l_199, (0x0E14L | 8UL), ((*l_237) = ((*l_194) = 4L)), &l_223) | ((safe_rshift_func_uint8_t_u_s(p_32, (safe_add_func_uint32_t_u_u((+p_31), p_32)))) ^ 0xDEFB562337D7B04CLL))) && 4294967294UL) | p_32);

        ;
        for (g_281 = 0; (g_281 >= 11); ++g_281)
        {
            return g_149;


        }
    }
    else
    {
        (*g_106) = &l_223;

        ;
    }


    return p_32;


}







static long long func_33(char p_34, unsigned long long p_35, unsigned char p_36, int p_37, long long p_38)
{
    short l_44 = 2L;
    int *l_64 = &g_46;
    int **l_63 = &l_64;
    int **l_65 = (void*)0;
    int **l_66 = (void*)0;
    int *l_68 = (void*)0;
    int **l_67 = &l_68;
    unsigned *l_69 = &g_70;
    unsigned long long *l_170 = &g_163;
    int *l_172 = (void*)0;
    int *l_173 = &g_174;
    int *l_175 = &g_86;
    for (p_34 = (-9); (p_34 <= (-15)); p_34--)
    {
        if (p_36)
        {
            return l_44;
        }
        else
        {
            int *l_45 = &g_46;
            (*l_45) &= 8L;
        }
    }
    p_37 = ((*l_175) = ((*l_173) &= (g_171 ^= (safe_sub_func_uint64_t_u_u(((*l_170) = (safe_div_func_int8_t_s_s(func_51(func_56(g_46), l_44, g_7, func_59((safe_mod_func_uint32_t_u_u(((*l_69) = (((*l_63) = (void*)0) == ((*l_67) = &g_46))), 1UL)))), g_169))), 0L)))));

    ;
    ;
    ;
    (*g_106) = (*g_103);
    return g_169;
}







static char func_51(int * p_52, unsigned p_53, short p_54, int * p_55)
{
    unsigned l_80 = 9UL;
    int *l_110 = &g_46;
    const int *l_158 = (void*)0;
    const int **l_157 = &l_158;
    const int ***l_156 = &l_157;
    short *l_159 = (void*)0;
    for (g_70 = (-1); (g_70 > 53); g_70++)
    {
        unsigned short l_74 = 0UL;
        l_74 = (p_52 == (void*)0);
        for (p_54 = 0; (p_54 == 20); p_54 = safe_add_func_int16_t_s_s(p_54, 7))
        {
            unsigned long long l_108 = 0x2581EE2C157B4C73LL;
            (*p_52) = 8L;
            if ((*p_55))
            {
                long long l_77 = 0xE99E855C71DA89A0LL;
                (*p_52) &= (l_77 | (safe_lshift_func_uint8_t_u_u((g_41 | p_53), l_80)));
                (*p_55) &= (-1L);
                for (g_46 = 6; (g_46 >= 26); ++g_46)
                {
                    if ((*p_55))
                    {
                        int *l_83 = &g_84;
                        int *l_85 = &g_86;
                        long long *l_95 = (void*)0;
                        long long *l_96 = &l_77;
                        if (g_7)
                            break;
                        (*l_85) |= ((*l_83) ^= (p_53 | (p_52 != &g_46)));
                        (*g_103) = func_59((l_80 && (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((~g_84), ((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((l_80 > (1L >= (((*l_96) = g_86) ^ (g_7 < (safe_rshift_func_uint16_t_u_s(g_84, g_70)))))), (safe_lshift_func_uint8_t_u_u((g_41 = (safe_rshift_func_int16_t_s_s(0xC888L, 12))), p_53)))), g_7)) || p_54))), 7))));

                        ;
                        (*g_105) = &g_104;
                    }
                    else
                    {
                        int *l_107 = &g_84;
                        (*g_106) = (void*)0;

                        ;
                        (*l_107) ^= (*p_52);
                        return l_108;
                    }

                    ;
                }
                (*g_106) = p_55;


            }
            else
            {
                unsigned *l_109 = (void*)0;
                (***g_105) |= (0x33F8A1C32FD8C043LL > ((void*)0 != l_109));
            }
            (**g_106) = (*g_104);
        }
    }


    (*g_106) = l_110;

    ;
    if ((**g_106))
    {
        unsigned l_115 = 0x78824160L;
        (*g_106) = p_55;


        for (g_86 = 0; (g_86 != 16); g_86 = safe_add_func_uint8_t_u_u(g_86, 6))
        {
            const unsigned l_118 = 0xB3C324F1L;
            unsigned *l_119 = &l_115;
            int l_152 = 0x4A9F0E05L;
            short *l_160 = &g_147;
            if ((safe_rshift_func_int8_t_s_s(g_86, 1)))
            {
                long long l_127 = (-7L);
                if (((l_115 = g_86) == g_7))
                {
                    (*g_106) = p_52;


                }
                else
                {
                    unsigned *l_120 = &l_115;
                    unsigned **l_121 = (void*)0;
                    unsigned **l_122 = (void*)0;
                    unsigned **l_123 = (void*)0;
                    unsigned short *l_128 = &g_129;
                    unsigned char *l_130 = &g_41;
                    long long *l_133 = &l_127;
                    char *l_134 = &g_135;
                    int l_136 = 0x6053C14BL;
                    (*p_52) = (((((safe_div_func_uint8_t_u_u(((*l_130) ^= (l_118 < ((l_119 == (g_124 = l_120)) >= (safe_div_func_int16_t_s_s(g_46, ((*l_128) |= l_127)))))), g_84)) && (((safe_sub_func_uint8_t_u_u(((*l_130) = 0x18L), ((*l_134) = (0x53CD9AAC9FE4BF81LL >= ((*l_133) = p_53))))) != (*p_55)) | 18446744073709551612UL)) == l_136) | 0x58L) <= l_136);

                    ;
                }


                (**g_106) = (0x3FL ^ (-2L));
                for (p_54 = (-28); (p_54 <= (-5)); p_54 = safe_add_func_int16_t_s_s(p_54, 1))
                {
                    short l_143 = 1L;
                    short *l_146 = &g_147;
                    short *l_148 = &g_149;
                    (*l_110) = (((safe_div_func_int8_t_s_s(l_143, p_54)) == ((g_129 |= (safe_add_func_uint8_t_u_u(g_46, (-1L)))) > ((*l_146) = l_127))) != ((p_54 <= ((3UL >= 0x9186L) > ((*l_148) &= ((p_54 < p_53) <= (*p_55))))) == g_46));
                    (*p_55) = 0xE232A7A6L;
                    return p_54;


                }
            }
            else
            {
                char *l_153 = &g_135;
                unsigned long long *l_161 = (void*)0;
                unsigned long long *l_162 = &g_163;
                int l_164 = 0L;
                (*p_52) = (safe_sub_func_uint8_t_u_u(((*p_55) < p_53), g_84));
                if (l_152)
                    break;
                (*p_55) = (((*l_153) = (-1L)) && ((safe_add_func_uint64_t_u_u((0UL | (((void*)0 != l_156) || ((+((l_160 = l_159) != &g_147)) && (p_54 > (((+p_54) != (((*l_162) = 18446744073709551615UL) ^ l_164)) || g_147))))), l_115)) < p_53));

                ;
                (*g_104) ^= 0L;
            }


            ;
            return p_54;


        }
    }
    else
    {
        int * const *l_165 = &l_110;
        int * const **l_166 = (void*)0;
        int * const l_168 = &g_169;
        int * const *l_167 = &l_168;
        (*g_104) = ((~g_135) && (l_165 != (l_167 = &l_110)));

        ;
    }


    return g_147;
}







static int * func_56(const char p_57)
{
    int *l_58 = &g_46;
    return l_58;


}







static int * func_59(char p_60)
{
    unsigned short l_71 = 5UL;
    l_71 = ((p_60 != g_70) | (p_60 ^ 0x909FF4C90EB1F0CFLL));
    return &g_46;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
