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
   unsigned f0;
   unsigned char f1;
   unsigned short f2;
};


static unsigned short g_10 = 0x5925L;
static union U0 g_28 = {0xED7C6AE4L};
static int g_43 = 0L;
static int g_73 = 0x5FEC6B03L;
static int **g_74 = (void*)0;
static const int *g_87 = &g_73;
static union U0 g_102 = {0x7543214EL};
static const union U0 *g_104 = &g_102;
static char g_232 = 0xFAL;
static const int g_308 = 0x32B24B8BL;
static volatile union U0 g_370 = {18446744073709551606UL};
static const volatile union U0 *g_369 = &g_370;
static const volatile union U0 **g_368 = &g_369;
static const volatile union U0 ** const *g_367 = &g_368;
static int g_454 = 0xFC2AB607L;
static volatile unsigned char g_743 = 0x4BL;
static volatile unsigned char g_744 = 0x7FL;
static union U0 *g_827 = &g_28;
static union U0 **g_826 = &g_827;
static int g_847 = 1L;



static unsigned short func_1(void);
static unsigned func_3(unsigned p_4, int p_5, int p_6, unsigned short p_7, short p_8);
static char func_13(unsigned p_14, const short p_15, short p_16, short p_17, unsigned char p_18);
static unsigned long long func_21(char p_22, unsigned p_23, short p_24);
static int func_25(union U0 p_26, unsigned long long p_27);
static int * func_29(unsigned p_30, long long p_31, union U0 p_32, short p_33, const int p_34);
static unsigned short func_38(int * p_39, int p_40, int * p_41);
static unsigned char func_44(int p_45, union U0 p_46, unsigned p_47, const int * p_48);
static int * func_53(const char p_54);
static int ** func_58(int p_59, int ** p_60, unsigned char p_61, char p_62);
static unsigned short func_1(void)
{
    unsigned l_9 = 0xB29949DFL;
    int l_640 = 0xA99ABB8AL;
    unsigned char l_799 = 8UL;
    int *l_846 = &g_847;
    union U0 l_855 = {7UL};
    union U0 l_856 = {18446744073709551615UL};
    short l_867 = 0L;
    unsigned long long l_870 = 0xFE3C97508575AFB0LL;
    (*l_846) ^= (safe_unary_minus_func_uint32_t_u(func_3(l_9, l_9, (g_10 == (safe_lshift_func_int8_t_s_s(func_13(l_9, (safe_mod_func_uint64_t_u_u(g_10, func_21(g_10, l_9, (((g_10 >= func_25(g_28, l_9)) ^ 0x48L) >= g_102.f0)))), l_640, l_9, l_640), l_799))), l_9, l_799)));

        ;
        ;
    for (l_9 = 0; (l_9 >= 27); l_9 = safe_add_func_uint8_t_u_u(l_9, 2))
    {
        long long l_850 = 0xDCC9DCD7518E83F4LL;
        (*l_846) = l_850;
    }
    (*l_846) = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((&g_87 != (void*)0), (g_370.f2 & func_25(l_855, (*l_846))))), func_25(l_856, (g_102.f2 ^ ((&g_73 != (void*)0) != (*l_846))))));
    l_640 &= ((safe_mod_func_int8_t_s_s(g_370.f2, (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_102.f1, 0)), 7)) != g_232), (func_25((*g_104), l_867) != (safe_add_func_int64_t_s_s((*l_846), g_102.f1))))), func_25((*g_827), (*l_846)))))) || g_743);
    return l_870;
}







static unsigned func_3(unsigned p_4, int p_5, int p_6, unsigned short p_7, short p_8)
{
    short l_821 = 0xA6A9L;
    int l_822 = 0xC632B513L;
    short l_833 = (-9L);
    int ***l_834 = &g_74;
    for (g_232 = (-2); (g_232 < 25); ++g_232)
    {
        int *l_806 = &g_454;
        int **l_815 = &l_806;
        const union U0 *l_820 = &g_102;
    }
    if (p_8)
    {
        l_822 = ((void*)0 != &p_5);
    }
    else
    {
        for (g_73 = (-17); (g_73 >= (-25)); g_73--)
        {
            union U0 **l_825 = (void*)0;
            int **l_828 = (void*)0;
            int *l_830 = &g_43;
            int **l_829 = &l_830;
            g_826 = l_825;

            ;
            (*l_829) = &g_73;

            ;
        }

        ;
    }

    ;
    if (((safe_lshift_func_uint16_t_u_u(l_833, ((void*)0 != l_834))) != p_6))
    {
        int *l_844 = &l_822;
        union U0 * const l_845 = &g_102;
        for (g_102.f2 = 0; (g_102.f2 > 26); g_102.f2 = safe_add_func_int16_t_s_s(g_102.f2, 4))
        {
            unsigned long long l_841 = 0x922BF95697E24455LL;
            for (g_73 = (-15); (g_73 < (-18)); g_73 = safe_sub_func_int32_t_s_s(g_73, 6))
            {
                if ((((safe_mul_func_uint8_t_u_u(g_370.f0, l_841)) < l_841) & 0x6534CFDC3C4541B8LL))
                {
                    return p_4;
                }
                else
                {
                    int *l_843 = &l_822;
                    int **l_842 = &l_843;
                    (*l_842) = &p_6;

                    ;
                    if ((*g_87))
                        break;
                    l_844 = &p_6;

                    ;
                }

                ;
            }
        }

        ;
        (*l_844) = (l_845 != (*g_368));
    }
    else
    {
        return p_6;
    }
    return g_370.f2;
}







static char func_13(unsigned p_14, const short p_15, short p_16, short p_17, unsigned char p_18)
{
    unsigned long long l_644 = 2UL;
    union U0 l_659 = {0x4403E67CL};
    int ***l_662 = &g_74;
    int *l_692 = &g_43;
    int ***l_708 = &g_74;
    if ((safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_int32_t_s(l_644)) || (safe_rshift_func_int8_t_s_u(((l_644 != ((safe_rshift_func_uint16_t_u_u((!((g_43 != g_370.f2) != (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((l_644 != func_25(l_659, p_17)) >= 0x2FL), 4294967295UL)), g_232)), l_659.f1)), (-1L))))), l_659.f1)) < 0x23C0E6BEL)) ^ l_644), 2))) <= l_644) > 0UL), g_102.f1)))
    {
        int l_665 = 0L;
        union U0 l_667 = {0x6ABA6C3AL};
        if (((safe_mul_func_uint16_t_u_u(0UL, p_17)) == ((void*)0 == l_662)))
        {
            char l_668 = (-3L);
            int ***l_669 = &g_74;
            union U0 l_696 = {18446744073709551615UL};
            if ((safe_rshift_func_uint16_t_u_s(p_16, 9)))
            {
                int *l_666 = &g_73;
                (*l_666) = l_665;
                (*l_662) = (void*)0;
                (*l_666) = (func_25(l_667, l_668) <= (+(l_662 != l_669)));
                for (l_668 = 4; (l_668 >= (-18)); l_668--)
                {
                    unsigned l_674 = 0x22940000L;
                    short l_676 = 0xF174L;
                    if ((((void*)0 != l_662) < (p_14 != 7UL)))
                    {
                        (*l_666) ^= (!p_17);
                        (*l_666) |= (safe_lshift_func_uint8_t_u_u(g_370.f1, 2));
                        (*l_666) |= l_674;
                    }
                    else
                    {
                        short l_675 = 0x200FL;
                        if (l_675)
                            break;
                    }
                    (*l_666) = (*g_87);
                    if (p_18)
                        break;
                    (*l_666) = l_676;
                }
            }
            else
            {
                int *l_680 = &l_665;
                for (p_17 = 0; (p_17 > (-26)); --p_17)
                {
                    int *l_679 = &g_43;
                    int ***l_688 = (void*)0;
                    (*l_680) &= (l_679 != l_680);
                    if ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(g_308, ((*g_87) >= 0x9C47E36BL))), g_73)))
                    {
                        const unsigned l_685 = 1UL;
                        (*l_679) |= p_16;
                        (*l_680) &= l_685;
                    }
                    else
                    {
                        int l_689 = (-2L);
                        (*l_680) ^= (safe_add_func_uint8_t_u_u((g_102.f1 || ((~((void*)0 != l_688)) && 0xE6056676L)), func_25(l_659, (p_16 ^ func_25(l_659, l_689)))));
                        (*l_680) = ((p_16 <= g_28.f1) & (safe_add_func_int64_t_s_s(0x48A711987F2E497CLL, l_689)));
                        if ((*g_87))
                            continue;
                        g_87 = l_692;

                        ;
                    }
                    if ((*g_87))
                    {
                        union U0 *l_693 = &l_659;
                        union U0 **l_694 = &l_693;
                        int **l_695 = &l_680;
                        (*l_694) = l_693;
                        if ((*l_680))
                            continue;
                        (*l_695) = l_680;
                        g_454 ^= (*g_87);
                    }
                    else
                    {
                        (*l_680) ^= (func_25(l_696, (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(g_73, p_18)), 18446744073709551615UL))) == (*g_87));
                    }
                }

                ;
            }

            ;
            return g_232;
        }
        else
        {
            for (g_28.f1 = 0; (g_28.f1 >= 40); g_28.f1 = safe_add_func_int16_t_s_s(g_28.f1, 7))
            {
                if (p_18)
                    break;
            }
        }
    }
    else
    {
        short l_703 = 0L;
        int *l_712 = &g_43;
        (*l_692) = l_703;
        for (g_102.f0 = 0; (g_102.f0 > 41); g_102.f0 = safe_add_func_uint16_t_u_u(g_102.f0, 7))
        {
            int * const **l_709 = (void*)0;
            int **l_713 = &l_692;
            (*l_713) = l_712;
            if ((*g_87))
                break;
        }

    }
    for (g_102.f2 = 21; (g_102.f2 < 26); g_102.f2 = safe_add_func_uint8_t_u_u(g_102.f2, 7))
    {
        int *l_746 = &g_73;
        int **l_798 = &l_746;
        for (p_14 = 0; (p_14 <= 53); p_14++)
        {
            union U0 l_741 = {0UL};
            unsigned char l_742 = 0x59L;
            int * const l_748 = &g_454;
            union U0 *l_757 = &l_741;
            const int * const l_791 = &g_43;
        }
    }
    return p_16;
}







static unsigned long long func_21(char p_22, unsigned p_23, short p_24)
{
    union U0 *l_417 = &g_28;
    int *l_425 = &g_43;
    int l_534 = 0x188DD18EL;
    unsigned long long l_541 = 0UL;
    unsigned l_627 = 5UL;
    unsigned char l_635 = 254UL;
    if ((l_417 != (*g_368)))
    {
        short l_424 = 0x22B8L;
        for (g_43 = (-27); (g_43 >= (-24)); g_43 = safe_add_func_int8_t_s_s(g_43, 3))
        {
            int *l_420 = &g_73;
            (*l_420) = 0xD3616943L;
            for (g_28.f1 = 23; (g_28.f1 == 10); g_28.f1--)
            {
                int l_423 = (-1L);
                (*l_420) ^= l_423;
                if ((*g_87))
                    continue;
            }
        }

                return l_424;
    }
    else
    {
        int *l_432 = &g_73;
        union U0 l_474 = {0x2D6C3E22L};
        if ((l_425 == (void*)0))
        {
            const int l_437 = 0L;
            int *l_458 = (void*)0;
            union U0 l_510 = {18446744073709551610UL};
            for (g_43 = 17; (g_43 >= 23); g_43++)
            {
                int *l_430 = (void*)0;
                short l_433 = 0L;
                union U0 **l_434 = &l_417;
                long long l_490 = 0L;
                unsigned l_492 = 0x13EF8866L;
            }
        }
        else
        {
            return g_370.f0;
        }
    }
    l_425 = &l_534;

    ;
    if (l_541)
    {
        int l_551 = 1L;
        int *l_563 = &g_73;
        union U0 l_564 = {0xDD3EEA59L};
        if ((((safe_sub_func_int8_t_s_s(g_43, (*l_425))) | g_10) <= p_24))
        {
            unsigned short l_548 = 65535UL;
            g_43 |= (safe_add_func_uint8_t_u_u((((((safe_add_func_int64_t_s_s(l_548, (&l_534 != (void*)0))) || g_370.f2) >= ((safe_lshift_func_uint8_t_u_s((p_23 | func_25((*l_417), l_551)), 6)) ^ (*l_425))) == 0x8FB62C3645A83089LL) == g_454), (*l_425)));
            for (g_28.f1 = 0; (g_28.f1 != 12); g_28.f1 = safe_add_func_uint16_t_u_u(g_28.f1, 8))
            {
                for (p_24 = 0; (p_24 <= (-30)); --p_24)
                {
                    int *l_556 = (void*)0;
                    int **l_557 = &l_425;
                    int *l_558 = (void*)0;
                    int *l_559 = &g_73;
                    (*l_557) = l_556;

                    ;
                    (*l_559) ^= l_548;
                }
            }

                        ;
        }
        else
        {
            const int *l_562 = &g_454;
            l_551 ^= func_44(p_23, (*g_369), (safe_mod_func_int64_t_s_s(1L, p_23)), l_562);

            (*l_425) |= (*l_562);
        }

                ;
        (*l_563) |= p_22;
        if (func_25(l_564, (&g_74 != &g_74)))
        {
            (*l_563) |= 0x7425572CL;
        }
        else
        {
            char l_565 = 0L;
            l_565 |= p_22;
            (*l_563) = 0L;
        }
    }
    else
    {
        unsigned l_566 = 8UL;
        (*l_425) = ((l_566 < p_22) | (*l_425));
    }

        ;
    for (g_102.f2 = 0; (g_102.f2 == 47); g_102.f2++)
    {
        const union U0 **l_572 = (void*)0;
        const union U0 ***l_571 = &l_572;
        int *l_579 = &g_43;
        l_425 = (void*)0;

        ;
    }

    return g_370.f2;
}







static int func_25(union U0 p_26, unsigned long long p_27)
{
    const unsigned l_35 = 0x64C9D8D9L;
    int *l_42 = &g_43;
    union U0 l_317 = {18446744073709551615UL};
    unsigned short l_318 = 0x2513L;
    int **l_410 = (void*)0;
    int **l_411 = &l_42;
    return (*g_87);
}







static int * func_29(unsigned p_30, long long p_31, union U0 p_32, short p_33, const int p_34)
{
    unsigned long long l_323 = 5UL;
    const int *l_333 = &g_73;
    int *l_336 = &g_43;
    int **l_335 = &l_336;
    union U0 l_396 = {0xEEF7C797L};
    char l_397 = 2L;
    for (g_28.f2 = 0; (g_28.f2 != 39); g_28.f2 = safe_add_func_int32_t_s_s(g_28.f2, 1))
    {
        char l_324 = 0xC6L;
        int *l_334 = &g_73;
        l_324 = (safe_mul_func_int16_t_s_s((p_30 < p_32.f2), (g_102.f1 == (l_323 ^ p_34))));
        (*l_334) = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((((safe_add_func_uint64_t_u_u(((void*)0 == &p_34), (g_308 < (safe_lshift_func_uint8_t_u_u(l_324, 5))))) > (g_43 >= p_34)) > g_232) < 1UL), p_32.f0)) > l_324), 5));
    }

    (*l_335) = &g_73;

    ;
    for (g_28.f1 = (-1); (g_28.f1 > 57); g_28.f1++)
    {
        unsigned long long l_339 = 18446744073709551615UL;
        int *l_344 = &g_43;
        int ***l_407 = &l_335;
        (*l_336) = l_339;
        (*l_344) = ((safe_mod_func_int32_t_s_s((0x0BL >= (safe_add_func_uint16_t_u_u((((**l_335) >= (safe_rshift_func_uint8_t_u_u(p_33, (safe_mul_func_int8_t_s_s(p_32.f2, p_32.f1))))) & p_32.f1), g_43))), g_232)) >= p_33);
        for (p_32.f2 = 0; (p_32.f2 == 17); p_32.f2++)
        {
            unsigned long long l_359 = 0xF1BFE3D08FB6B238LL;
            int l_364 = 0xD901C866L;
            (*l_344) = ((p_31 ^ (*g_87)) > ((p_32.f1 & (p_31 >= (safe_lshift_func_uint8_t_u_u(p_31, 0)))) && (**l_335)));
            if (p_32.f2)
            {
                int l_353 = (-1L);
                (*l_344) = l_353;
                for (p_31 = (-1); (p_31 < 27); p_31 = safe_add_func_int64_t_s_s(p_31, 7))
                {
                    for (g_73 = 0; (g_73 != 9); ++g_73)
                    {
                        const int **l_358 = &l_333;
                        (*l_358) = &p_34;

                        ;
                        (*l_358) = &p_34;
                        (*l_358) = &g_73;

                        ;
                    }
                    (*l_336) |= p_32.f2;
                    (**l_335) |= l_359;
                }
            }
            else
            {
                unsigned l_363 = 0x80DFA0F3L;
                const int *l_393 = &g_43;
                if (((-1L) != p_33))
                {
                    char l_360 = 0x9CL;
                    int l_361 = 2L;
                    l_361 = l_360;
                }
                else
                {
                    unsigned l_362 = 1UL;
                    union U0 ** const l_366 = (void*)0;
                    union U0 ** const * const l_365 = &l_366;
                    l_364 = l_363;
                    if ((*g_87))
                    {
                        if (l_362)
                            break;
                        g_87 = &p_34;

                        ;
                        (**l_335) = (0L | (l_365 == g_367));
                        (*l_335) = (*l_335);
                    }
                    else
                    {
                        l_364 &= p_30;
                    }
                }
                (**l_335) ^= ((-2L) && (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_31, l_359)), 0x5C7AFD33L)), (safe_add_func_uint32_t_u_u(((-9L) | (p_32.f1 == (safe_lshift_func_int8_t_s_s(1L, 4)))), (safe_rshift_func_uint8_t_u_s(g_308, (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(g_232, p_32.f2)), g_232)))))))));
                (**l_335) &= (!(g_10 & 7UL));
            }
            for (p_31 = 18; (p_31 >= 23); p_31++)
            {
                const int *l_398 = (void*)0;
                const union U0 **l_400 = &g_104;
                const union U0 ***l_399 = &l_400;
                int ** const *l_408 = &g_74;
                (*l_344) = ((p_33 ^ (*l_344)) != (l_399 != (void*)0));
                (*l_344) ^= (safe_mul_func_int16_t_s_s((~((safe_rshift_func_uint8_t_u_u((((-1L) || (g_102.f1 > ((l_407 == l_408) & g_102.f1))) <= 0x214BE4D71671EE6FLL), 0)) ^ p_32.f1)), p_32.f1));
                (*l_344) = (safe_unary_minus_func_uint64_t_u(g_370.f1));
            }
        }
    }

    ;
        (*l_336) = (-1L);
    return &g_73;



}







static unsigned short func_38(int * p_39, int p_40, int * p_41)
{
    unsigned l_311 = 0x6AAEE7DBL;
    union U0 *l_314 = (void*)0;
    union U0 **l_313 = &l_314;
    union U0 ***l_312 = &l_313;
    int *l_316 = &g_73;
    int **l_315 = &l_316;
    for (g_102.f1 = 0; (g_102.f1 > 12); ++g_102.f1)
    {
        unsigned l_307 = 0x7DC1299EL;
        l_307 ^= 0L;
        if (g_308)
            break;
    }
    (*l_315) = func_53(((safe_add_func_int8_t_s_s(g_10, ((*p_41) && (l_311 == 0x59D26998L)))) == (((void*)0 != l_312) | (-9L))));

    ;
    return p_40;
}







static unsigned char func_44(int p_45, union U0 p_46, unsigned p_47, const int * p_48)
{
    const long long l_55 = 0x650BA4309063446BLL;
    int **l_281 = (void*)0;
    const union U0 **l_287 = &g_104;
    const union U0 ***l_286 = &l_287;
    char l_299 = 0x7AL;
    int *l_301 = &g_73;
    int **l_300 = &l_301;
lbl_285:
    if ((safe_rshift_func_int16_t_s_u(0x9BFAL, 10)))
    {
        int *l_51 = (void*)0;
        int *l_52 = (void*)0;
        int **l_273 = &l_52;
        g_43 |= g_28.f0;
        (*l_273) = func_53(l_55);
    }
    else
    {
        int *l_274 = &g_73;
        int **l_275 = &l_274;
        (*l_274) = (*g_87);
        if (g_43)
            goto lbl_285;
        (*l_275) = &p_45;

        ;
        for (g_102.f1 = (-2); (g_102.f1 != 42); ++g_102.f1)
        {
            int **l_280 = &l_274;
            (**l_275) = ((*p_48) & (l_280 != (void*)0));
            (**l_280) |= ((void*)0 != l_281);
            for (g_43 = (-12); (g_43 == 9); g_43 = safe_add_func_uint32_t_u_u(g_43, 6))
            {
                const int *l_284 = &g_73;
                (*l_275) = &g_73;

                ;
                if ((*l_274))
                    break;
                l_284 = l_284;
            }
        }

        ;
    }

    (*l_286) = &g_104;
    (*l_300) = func_53((((g_43 <= ((safe_rshift_func_int8_t_s_u(p_45, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_46.f2, 2)), ((safe_unary_minus_func_uint16_t_u(p_46.f1)) ^ (*g_87)))))) == (safe_mod_func_uint16_t_u_u(g_28.f1, (safe_mod_func_int8_t_s_s((((void*)0 == &g_102) == l_299), l_299)))))) <= g_102.f1) < 1L));

    ;
    for (l_299 = 27; (l_299 > (-13)); l_299--)
    {
        char l_304 = 0xF4L;
        return l_304;
    }
    return g_10;
}







static int * func_53(const char p_54)
{
    int l_63 = 0x820F90F5L;
    int ***l_77 = &g_74;
    union U0 *l_101 = &g_102;
    unsigned char l_134 = 8UL;
    int *l_142 = &l_63;
    int **l_141 = &l_142;
    char l_183 = 0xC9L;
    unsigned l_191 = 4294967292UL;
    char l_207 = 0x47L;
    int *l_254 = &g_73;
    int *l_272 = (void*)0;
    for (g_43 = 0; (g_43 < 27); ++g_43)
    {
        int *l_65 = (void*)0;
        int **l_64 = &l_65;
        int ***l_75 = (void*)0;
        int ***l_76 = &l_64;
        (*l_76) = func_58(l_63, l_64, g_10, ((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(g_28.f2, (safe_mul_func_int16_t_s_s((p_54 >= l_63), g_28.f1)))), (((((~p_54) == ((void*)0 != &g_43)) & 0x5AC950041AC573C0LL) | g_28.f2) == 7UL))) == p_54));

        ;
    }
    return l_272;


}







static int ** func_58(int p_59, int ** p_60, unsigned char p_61, char p_62)
{
    int *l_72 = &g_73;
    (*l_72) = 0xCB4F7BC7L;
    return g_74;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2, "g_370.f2", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
