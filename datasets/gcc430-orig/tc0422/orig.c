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
   unsigned short f0;
   int f1;
   unsigned long long f2;
   unsigned f3;
};


static int g_14 = 0x72D9EE1CL;
static int *g_53 = &g_14;
static int * const *g_52 = &g_53;
static const struct S0 g_93 = {4UL,0xBEAAF72AL,18446744073709551615UL,18446744073709551614UL};
static struct S0 g_96 = {1UL,0xC683D18CL,0xA47519AD364BFA3CLL,0xB2E90E87L};
static unsigned char g_114 = 0xFFL;
static struct S0 **g_127 = (void*)0;
static struct S0 g_266 = {0xBCADL,0L,18446744073709551612UL,4UL};
static int g_285 = 0x337C76E8L;
static struct S0 g_294 = {0x51D6L,0x68DB9444L,0UL,18446744073709551611UL};
static int g_311 = (-1L);
static long long g_316 = 0x36B5C2FCE0FFC3ADLL;
static struct S0 g_317 = {0x7371L,-7L,18446744073709551611UL,2UL};
static struct S0 *g_333 = (void*)0;
static int g_364 = 0x2BCE109FL;
static int g_391 = (-1L);
static const struct S0 *g_412 = &g_317;



static const int func_1(void);
static unsigned short func_2(int p_3, short p_4, int p_5, const char p_6, char p_7);
static unsigned short func_9(char p_10, unsigned long long p_11, unsigned char p_12, long long p_13);
static unsigned short func_20(unsigned short p_21, unsigned char p_22);
static unsigned long long func_28(unsigned short p_29, int * p_30, int p_31);
static struct S0 func_38(unsigned short p_39, unsigned char p_40, int ** p_41);
static const unsigned char func_45(unsigned p_46, int * const * p_47, int ** p_48, unsigned p_49);
static unsigned short func_68(unsigned short p_69);
static unsigned long long func_70(int p_71, int * p_72, int p_73, const struct S0 p_74, int * p_75);
static long long func_78(long long p_79, long long p_80, long long p_81);
static const int func_1(void)
{
    char l_8 = 0x7CL;
    long long l_15 = (-5L);
    int **l_452 = (void*)0;
    int *l_453 = (void*)0;
    const char l_460 = 4L;
    if ((func_2(l_8, (func_9(g_14, l_8, g_14, l_15) != func_20(g_14, g_14)), l_8, l_8, l_8) ^ 0x1C7EL))
    {
        int *l_450 = &g_364;
        int **l_451 = &g_53;
        (*l_451) = l_450;

        ;
    }
    else
    {
        int **l_454 = &l_453;
        g_14 = ((g_317.f0 > ((g_93.f3 || ((void*)0 == &g_294)) & (-9L))) == g_317.f3);
        (*l_454) = l_453;
        (*l_454) = (*l_454);
    }


    ;

    for (g_317.f3 = 0; (g_317.f3 == 31); g_317.f3 = safe_add_func_int32_t_s_s(g_317.f3, 3))
    {
        int *l_457 = &g_14;
        int **l_458 = (void*)0;
        int **l_459 = &l_457;
        (*l_459) = l_457;
        if (g_266.f2)
            continue;
    }
    return l_460;
}







static unsigned short func_2(int p_3, short p_4, int p_5, const char p_6, char p_7)
{
    unsigned short l_428 = 0x84C4L;
    int **l_432 = &g_53;
    int ***l_431 = &l_432;
    int * const *l_437 = &g_53;
    struct S0 *l_444 = &g_96;
    if (l_428)
    {
        int **l_429 = &g_53;
        int **l_430 = &g_53;
        (*l_429) = &p_3;

        ;
        (*l_430) = (*g_52);
        (*g_53) = ((((void*)0 != l_431) ^ p_6) <= ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0xF1L, func_45(g_96.f0, l_437, &g_53, (**l_429)))), p_6)) < 0x14F3697CL));
    }
    else
    {
        for (g_266.f0 = 0; (g_266.f0 >= 49); ++g_266.f0)
        {
            int *l_440 = (void*)0;
            struct S0 *l_445 = (void*)0;
            struct S0 l_446 = {0x643CL,0L,0xDE6F619C15D4301BLL,0x69562257L};
            int *l_447 = &g_364;
            (*l_432) = l_440;

            ;
            for (g_266.f1 = 0; (g_266.f1 < 6); g_266.f1 = safe_add_func_uint32_t_u_u(g_266.f1, 7))
            {
                unsigned l_443 = 18446744073709551615UL;
                p_3 = l_443;
                l_445 = l_444;

                ;
            }

            ;
            l_446 = (*l_444);
            (*l_447) = l_446.f2;
        }
        (**l_431) = &p_3;

        ;
    }

    ;
    for (g_364 = 0; (g_364 > 11); g_364 = safe_add_func_int8_t_s_s(g_364, 1))
    {
        (**l_437) = ((**l_432) ^ p_6);
    }
    return g_311;


}







static unsigned short func_9(char p_10, unsigned long long p_11, unsigned char p_12, long long p_13)
{
    int *l_18 = &g_14;
    for (p_11 = 0; (p_11 <= 45); p_11++)
    {
        int **l_19 = &l_18;
        (*l_19) = l_18;
    }
    return g_14;
}







static unsigned short func_20(unsigned short p_21, unsigned char p_22)
{
    int **l_26 = (void*)0;
    int l_27 = 0xE2BF5F40L;
    int *l_35 = (void*)0;
    int * const *l_34 = &l_35;
    long long l_36 = 0L;
    unsigned l_37 = 4294967295UL;
    int l_342 = 2L;
    unsigned l_404 = 0x1BE1C545L;
    int **l_427 = &g_53;
    if (((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((l_26 != l_26))) | func_9((((1L ^ 65528UL) || l_27) & 0UL), func_28((safe_sub_func_uint64_t_u_u(((l_26 != l_34) | l_36), 0UL)), &l_27, l_37), g_93.f0, g_14)), 11)) || g_266.f0))
    {
        const int *l_330 = &g_14;
        const int **l_331 = &l_330;
        (*l_331) = l_330;
        return p_21;
    }
    else
    {
        int **l_332 = &l_35;
        (*l_332) = (*l_34);
    }


    g_333 = &g_266;

    ;
    if ((safe_mod_func_int16_t_s_s((p_21 | ((((((void*)0 != (*l_34)) <= 0x255ED363157A5481LL) > ((void*)0 != &g_53)) & g_294.f2) ^ (safe_mod_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((253UL | (p_21 & g_294.f1)), 4)) ^ g_96.f1) == p_22), 65535UL)) == g_96.f3) ^ p_22), p_22)))), l_342)))
    {
        return p_22;
    }
    else
    {
        char l_345 = 0xE3L;
        int * const *l_346 = (void*)0;
        int *l_349 = (void*)0;
        int l_350 = (-10L);
        const struct S0 l_363 = {0xB238L,0xB4046861L,0xAF7623DAB1411F47LL,0x2D4B6FAAL};
        short l_385 = 0x3CE4L;
        unsigned char l_403 = 251UL;
        l_350 = func_45((!(p_21 < ((g_96.f0 < 0UL) == l_345))), l_346, &l_35, (safe_lshift_func_uint16_t_u_s(g_93.f3, 3)));
        l_349 = (*l_34);
        if ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_14 | (&g_53 == (void*)0)), func_45(g_311, &l_349, &l_35, g_96.f3))), (((safe_mod_func_int8_t_s_s(g_96.f2, 5L)) < g_93.f1) & g_317.f2))))
        {
            int * const *l_359 = &l_35;
            int **l_360 = &l_349;
            g_364 = ((safe_mul_func_int8_t_s_s(g_294.f2, ((7UL == g_317.f3) | func_45((!(1L == g_266.f2)), l_359, l_360, ((safe_add_func_int8_t_s_s(p_21, func_70((func_68((((g_317.f1 <= (-1L)) && g_96.f3) >= 0xF06FL)) == 6UL), &g_14, p_22, l_363, &g_14))) == g_285))))) <= g_14);
            l_342 = p_21;
        }
        else
        {
            unsigned l_365 = 1UL;
            int *l_375 = &g_14;
            if (l_365)
            {
                unsigned short l_386 = 6UL;
                for (g_285 = 0; (g_285 <= (-23)); g_285 = safe_sub_func_int32_t_s_s(g_285, 8))
                {
                    int *l_372 = &l_342;
                    for (g_294.f0 = 0; (g_294.f0 > 43); g_294.f0 = safe_add_func_uint16_t_u_u(g_294.f0, 2))
                    {
                        int **l_370 = &g_53;
                        int *l_371 = &l_350;
                        (*l_370) = (void*)0;

                        ;
                        l_371 = (*g_52);

                        ;
                    }
                    (*l_372) = p_22;
                    for (l_345 = 0; (l_345 > (-3)); l_345 = safe_sub_func_int16_t_s_s(l_345, 5))
                    {
                        int **l_376 = &g_53;
                        l_375 = l_375;
                        (*l_372) = (*l_372);
                        (*l_376) = &l_350;

                        ;
                        (**g_52) = ((0xF692L != (p_21 < ((+((safe_mul_func_uint8_t_u_u((0x1A3F0E9EL == (g_316 && ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_93.f0, g_93.f1)), 3)), g_266.f3)) || g_364))), (!(&l_363 == (void*)0)))) ^ l_385)) <= g_364))) == p_21);
                    }
                    (*l_372) = l_386;
                }


                for (l_37 = 0; (l_37 >= 46); l_37++)
                {
                    if (g_93.f2)
                        break;
                }
                g_391 = ((~(*l_375)) == (((0xEAL & (((!(safe_add_func_int16_t_s_s(g_96.f3, (func_9((p_21 & (((1L > g_266.f1) ^ 1L) < 0x659F9DB165CC7719LL)), g_311, (*l_375), g_294.f0) <= l_386)))) && 0x1664L) > 0xE2L)) != 0xB7F0L) & p_21));
                return (*l_375);


            }
            else
            {
                int *l_392 = &l_350;
                unsigned l_405 = 4294967286UL;
                l_375 = l_392;

                ;
                l_35 = &g_14;

                ;
                if ((safe_sub_func_uint16_t_u_u((((!(g_93.f3 <= (2L == func_68(((safe_lshift_func_int8_t_s_s((~p_22), l_405)) >= (*l_375)))))) & g_364) >= 0L), g_311)))
                {
                    const struct S0 *l_407 = &g_93;
                    const struct S0 **l_406 = &l_407;
                    (*l_406) = &l_363;

                    ;
                    l_349 = l_375;

                    ;
                }
                else
                {
                    (*g_333) = l_363;
                    for (g_96.f2 = 0; (g_96.f2 <= 15); g_96.f2 = safe_add_func_int16_t_s_s(g_96.f2, 6))
                    {
                        struct S0 l_410 = {0x3A90L,0x0697EB82L,5UL,0xDE2C682FL};
                        int **l_411 = &l_35;
                        (*g_333) = l_410;
                        (*l_411) = (*l_34);
                        g_412 = &l_363;

                        ;
                    }

                    ;
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            if ((safe_sub_func_uint8_t_u_u(g_317.f1, g_93.f2)))
            {
                int **l_423 = &g_53;
                for (g_114 = 9; (g_114 >= 12); g_114 = safe_add_func_int64_t_s_s(g_114, 9))
                {
                    int *l_417 = (void*)0;
                    int l_424 = 0L;
                    const struct S0 l_425 = {1UL,-4L,0xEC2ADC47F3975087LL,0x1C8D14FBL};
                    (*l_375) = ((**l_34) > g_364);
                    (*l_375) = func_70(p_21, l_417, p_22, l_425, &g_364);
                }
            }
            else
            {
                int **l_426 = &l_375;
                (*l_426) = (*l_34);

                ;
            }

            ;
        }

        ;
        ;
        ;
    }

    ;

    (*l_427) = (*l_34);

    ;
    return p_22;
}







static unsigned long long func_28(unsigned short p_29, int * p_30, int p_31)
{
    unsigned short l_42 = 65528UL;
    int **l_54 = &g_53;
    struct S0 *l_329 = &g_294;
    (*l_329) = func_38(l_42, (func_9(func_9(p_29, g_14, func_9((safe_mul_func_uint8_t_u_u(func_45((((((((&p_30 == (void*)0) <= ((g_14 != ((((safe_mul_func_int16_t_s_s(g_14, 0L)) >= p_29) >= 1L) ^ (-4L))) == p_31)) <= p_31) == 65535UL) <= g_14) || 18446744073709551612UL) && g_14), g_52, l_54, p_31), g_14)), g_14, g_14, (**l_54)), p_29), g_14, g_14, g_14) != (-10L)), &g_53);


    l_329 = (void*)0;

    ;
    return g_96.f2;
}







static struct S0 func_38(unsigned short p_39, unsigned char p_40, int ** p_41)
{
    int * const *l_86 = (void*)0;
    int l_87 = 0xDFBA308DL;
    const struct S0 l_112 = {65529UL,0xD83399F1L,1UL,8UL};
    unsigned l_149 = 7UL;
    long long l_168 = 4L;
    unsigned l_173 = 0xBB4D12FDL;
    struct S0 *l_187 = (void*)0;
    struct S0 **l_186 = &l_187;
    unsigned char l_235 = 0xF3L;
    unsigned long long l_254 = 0x619B4148523E7098LL;
    struct S0 l_273 = {0x287CL,0xAB4C20C9L,18446744073709551614UL,0x245A1B65L};
    int * const l_322 = &l_87;
    unsigned l_325 = 4294967295UL;
    char l_326 = (-10L);
    struct S0 l_328 = {0x8CF1L,-9L,0x75CF2C8D41C1FC5ELL,0x7065C469L};
    if ((**g_52))
    {
        unsigned long long l_92 = 18446744073709551615UL;
        int ** const l_131 = &g_53;
        const struct S0 l_148 = {1UL,0x9B19E1A9L,0x04766C6174CE2EAALL,0x7561D2E7L};
        long long l_174 = 0xC2647FD4F96F3BD6LL;
        struct S0 **l_188 = &l_187;
        int * const *l_204 = &g_53;
        long long l_205 = 0xD22D4EF8352AC2D4LL;
        int *l_247 = &g_14;
        int l_308 = 3L;
        int l_318 = (-1L);
        if ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((**g_52) <= 0x102089CEL))), 7)), (safe_mod_func_int32_t_s_s((**p_41), (safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_14, func_68((func_70((safe_add_func_int32_t_s_s((func_78(g_14, (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(0L, g_14)) & func_45(g_14, l_86, &g_53, g_14)), p_40)), l_87) == g_14), (**g_52))), &g_14, l_92, g_93, (*p_41)) & 0x8B8ECDE22F50FADELL)))), p_40)) && (**p_41)), 1L)))))))
        {
            int **l_107 = &g_53;
            int ***l_106 = &l_107;
            int l_129 = 0xB645EBEAL;
            struct S0 *l_181 = (void*)0;
            struct S0 *l_182 = &g_96;
            g_53 = (*p_41);
            for (l_87 = 0; (l_87 > 10); ++l_87)
            {
                unsigned l_113 = 0UL;
                struct S0 * const l_153 = &g_96;
                int *l_165 = &g_14;
                int l_179 = 0x060409B1L;
            }
            (*l_182) = l_148;
            for (l_149 = 24; (l_149 >= 10); l_149 = safe_sub_func_int8_t_s_s(l_149, 3))
            {
                unsigned char l_185 = 0x8AL;
                l_185 = 4L;
            }
        }
        else
        {
            int l_195 = 0xE48530E6L;
            int *l_206 = &l_87;
            int l_238 = (-8L);
            struct S0 **l_250 = &l_187;
            char l_257 = 1L;
            int l_305 = 5L;
            int **l_309 = &g_53;
            (*l_206) = (((l_186 != l_188) >= (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((!0x565356F8BEA3A27DLL) | (safe_rshift_func_int16_t_s_u(l_195, (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_70((((**g_52) || l_195) > (g_14 > func_45((&g_52 == (void*)0), l_204, p_41, g_96.f3))), &g_14, (**p_41), g_93, &g_14), (-8L))), 3)) <= (**p_41)) > l_205), p_40)), (**l_204)))))), g_96.f2)), p_39))) ^ g_114);
            l_87 = (((void*)0 != (*l_186)) <= (safe_mod_func_uint32_t_u_u(g_93.f3, (safe_mod_func_uint32_t_u_u(0x25324488L, (**l_131))))));
            if (((g_127 == (void*)0) <= p_40))
            {
                unsigned l_219 = 0x38D42343L;
                const struct S0 l_242 = {0UL,0x230A905DL,1UL,18446744073709551615UL};
                int *l_244 = &l_87;
                l_219 = ((-4L) == func_68((safe_lshift_func_int16_t_s_s((p_39 | ((*l_206) < func_9(func_78((*l_206), p_40, (((0xD3L && ((safe_mod_func_int64_t_s_s(p_40, ((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((**g_52), (**g_52))), g_93.f0)) && 0x3A6AL))) & g_93.f2)) <= (*g_53)) && g_96.f2)), p_39, p_40, (*l_206)))), 0))));
                for (p_39 = (-17); (p_39 < 21); p_39++)
                {
                    int *l_237 = &l_87;
                    for (g_96.f1 = 0; (g_96.f1 != (-15)); g_96.f1--)
                    {
                        unsigned short l_236 = 0x2AB8L;
                        const struct S0 l_239 = {0x63AEL,1L,2UL,0xCE56ED2CL};
                        (*l_237) = (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s(6L)) ^ l_219), func_70((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((**l_131), (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_235, l_236)), 0xE7CFL)))), g_96.f2)), l_237, l_238, l_239, (*p_41))));
                        if ((**g_52))
                            continue;
                    }
                    if ((**p_41))
                        continue;
                    if ((safe_rshift_func_uint8_t_u_s(((*l_186) != &g_93), func_45(g_93.f3, &g_53, p_41, p_39))))
                    {
                        struct S0 *l_243 = &g_96;
                        (*l_243) = l_242;
                        if ((**p_41))
                            break;
                        if ((*g_53))
                            continue;
                        (*l_131) = l_244;

                        ;
                    }
                    else
                    {
                        int **l_246 = &l_237;
                        int ***l_245 = &l_246;
                        (*l_245) = &g_53;

                        ;
                        (*l_131) = l_247;

                        ;
                        (*p_41) = (*l_131);
                    }
                    if ((*l_237))
                        continue;
                }

                ;
            }
            else
            {
                const short l_253 = 0x54A6L;
                const struct S0 l_258 = {0xE2C6L,0xB3468687L,0x3F213AF98670366ALL,0xFBE80DE5L};
                struct S0 l_259 = {0UL,-8L,0x9BDA0E2562001A86LL,1UL};
                if ((safe_mul_func_int8_t_s_s((((void*)0 == l_250) == (safe_mul_func_uint16_t_u_u(l_253, g_114))), func_70(((func_9(g_96.f3, l_254, ((**g_52) && (safe_add_func_int32_t_s_s((65535UL == p_40), 0UL))), l_257) & l_253) >= p_39), (*p_41), (*g_53), l_258, &g_14))))
                {
                    l_259 = g_93;
                    (*p_41) = (*p_41);
                }
                else
                {
                    int **l_262 = (void*)0;
                    int **l_263 = &l_206;
                    for (l_259.f2 = (-17); (l_259.f2 > 11); l_259.f2++)
                    {
                        if ((**p_41))
                            break;
                        (*p_41) = (*p_41);
                    }
                    (*l_263) = (*g_52);

                    ;
                    for (l_195 = 3; (l_195 != (-12)); l_195--)
                    {
                        struct S0 l_267 = {0x26BCL,0xFAAC2A5FL,0x6FEA0349FBC6411BLL,0x35E30AAAL};
                        l_267 = g_266;
                    }
                }

                ;
                if (l_253)
                {
                    int **l_275 = &g_53;
                    int ***l_274 = &l_275;
                    if ((p_40 != (((0xC3L && (**l_131)) & l_259.f1) <= 0x71D1L)))
                    {
                        const struct S0 l_268 = {65535UL,0L,18446744073709551610UL,18446744073709551612UL};
                        struct S0 *l_269 = &l_259;
                        (*l_269) = l_268;
                    }
                    else
                    {
                        int **l_270 = (void*)0;
                        int ***l_271 = (void*)0;
                        int ***l_272 = &l_270;
                        (*l_272) = l_270;
                    }
                    l_273 = l_258;
                    if (func_78(((void*)0 == l_274), ((+((*l_250) != (*l_188))) | ((p_40 | (((l_258.f1 >= (safe_mul_func_uint8_t_u_u(((func_68(g_266.f2) < (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((-1L), 8)) | (*l_206)), p_39))) ^ g_114), 0x56L))) >= l_259.f0) >= (**g_52))) | (-1L))), l_258.f1))
                    {
                        int **l_282 = (void*)0;
                        int **l_283 = (void*)0;
                        int l_284 = 0xEEF5AA28L;
                        (*l_131) = (*g_52);
                        l_284 = (*l_247);
                    }
                    else
                    {
                        (*l_275) = (*p_41);
                        g_285 = (**p_41);
                        (*l_275) = (void*)0;

                        ;
                        (**l_274) = (void*)0;
                    }

                    ;
                }
                else
                {
                    int l_290 = 0xB38D032AL;
                    struct S0 *l_291 = &l_259;
                    int l_295 = 3L;
                    for (g_96.f3 = 0; (g_96.f3 != 15); g_96.f3 = safe_add_func_int32_t_s_s(g_96.f3, 3))
                    {
                        int *l_288 = &l_87;
                        (*l_288) = (**g_52);
                        l_87 = (safe_unary_minus_func_uint32_t_u(l_290));
                    }
                    if (((&l_259 == &l_258) && ((1UL < ((*l_186) == l_291)) ^ (*g_53))))
                    {
                        int *l_292 = (void*)0;
                        int *l_293 = &l_87;
                        (*l_293) = (!(*g_53));
                        g_294 = g_93;
                        l_295 = (**p_41);
                    }
                    else
                    {
                        int **l_296 = &l_206;
                        (*l_296) = (*g_52);

                        ;
                        l_305 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_114, (safe_lshift_func_uint8_t_u_s((**l_296), 6)))), (*l_247))), g_266.f3)) <= g_294.f3);
                    }
                }

                ;
                l_305 = ((safe_add_func_uint8_t_u_u((l_308 <= (*l_206)), (*l_206))) & (func_68(((1L != (+g_14)) & 0x03L)) | p_39));
                (*l_131) = (void*)0;

                ;
            }

            ;
            ;
            (*l_309) = (*g_52);
        }

        ;
        l_87 = func_70(p_39, (*p_41), l_87, l_273, &g_14);
        if ((65535UL & 1UL))
        {
            struct S0 l_310 = {3UL,7L,0UL,1UL};
            g_266 = l_310;
            g_311 = l_310.f0;
        }
        else
        {
            int *l_315 = &l_87;
            if (g_266.f0)
            {
                struct S0 l_312 = {0x1A9EL,-2L,18446744073709551614UL,0x8EEB7C2CL};
                return l_312;


            }
            else
            {
                for (p_39 = 0; (p_39 > 46); p_39++)
                {
                    l_315 = (void*)0;

                    ;
                    g_316 = (p_41 != &g_53);
                }

                ;
            }

            ;
            return g_317;


        }
        l_318 = 0x42902C64L;
    }
    else
    {
        struct S0 *l_319 = &g_294;
        int *l_324 = &g_14;
        (*l_186) = l_319;

        ;
        for (l_87 = 0; (l_87 < 6); ++l_87)
        {
            int **l_323 = &g_53;
            (*l_323) = l_322;

            ;
            (*p_41) = l_324;

            ;
            if (func_68(func_70(func_78(((void*)0 == &l_319), l_325, l_326), &g_14, (**l_323), (**l_186), l_324)))
            {
                unsigned l_327 = 0x272E7D34L;
                l_327 = (**g_52);
            }
            else
            {
                (*l_323) = (*l_323);
            }
            (*p_41) = (*l_323);
        }
    }

    ;
    ;
    return l_328;


}







static const unsigned char func_45(unsigned p_46, int * const * p_47, int ** p_48, unsigned p_49)
{
    return p_46;
}







static unsigned short func_68(unsigned short p_69)
{
    struct S0 l_95 = {0xCF81L,0xA8DC8D62L,1UL,0xCC01E3B4L};
    g_96 = l_95;
    return p_69;
}







static unsigned long long func_70(int p_71, int * p_72, int p_73, const struct S0 p_74, int * p_75)
{
    unsigned long long l_94 = 0xB89D53C4A2FBAA6DLL;
    l_94 = (*p_75);
    return l_94;
}







static long long func_78(long long p_79, long long p_80, long long p_81)
{
    unsigned long long l_88 = 0xEE15D11E9056FF37LL;
    int * const l_89 = &g_14;
    int *l_91 = &g_14;
    int **l_90 = &l_91;
    l_88 = (**g_52);
    (*l_90) = l_89;
    return p_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_93.f2, "g_93.f2", print_hash_value);
    transparent_crc(g_93.f3, "g_93.f3", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_266.f0, "g_266.f0", print_hash_value);
    transparent_crc(g_266.f1, "g_266.f1", print_hash_value);
    transparent_crc(g_266.f2, "g_266.f2", print_hash_value);
    transparent_crc(g_266.f3, "g_266.f3", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_294.f0, "g_294.f0", print_hash_value);
    transparent_crc(g_294.f1, "g_294.f1", print_hash_value);
    transparent_crc(g_294.f2, "g_294.f2", print_hash_value);
    transparent_crc(g_294.f3, "g_294.f3", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_317.f0, "g_317.f0", print_hash_value);
    transparent_crc(g_317.f1, "g_317.f1", print_hash_value);
    transparent_crc(g_317.f2, "g_317.f2", print_hash_value);
    transparent_crc(g_317.f3, "g_317.f3", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
