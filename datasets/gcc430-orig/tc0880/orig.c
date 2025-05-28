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



static int g_3 = 0x6847DFA8L;
static unsigned char g_10 = 0xC4L;
static int *g_18 = (void*)0;
static int **g_17 = &g_18;
static int g_47 = (-1L);
static unsigned short g_120 = 0x53D1L;
static int g_147 = 0x8043A44AL;
static int g_151 = 3L;
static unsigned short g_199 = 65533UL;
static int **g_235 = &g_18;
static unsigned long long g_239 = 0UL;
static int g_292 = 7L;
static unsigned g_363 = 9UL;
static unsigned g_411 = 18446744073709551615UL;
static unsigned short g_487 = 1UL;
static const int *g_495 = &g_3;
static unsigned g_549 = 18446744073709551612UL;
static unsigned g_616 = 4294967295UL;
static unsigned long long g_643 = 0x941FA45E12521B31LL;
static unsigned long long g_677 = 1UL;
static unsigned g_732 = 6UL;
static unsigned long long g_822 = 0x8B41999C207EE671LL;



static char func_1(void);
static int * const * func_13(unsigned char p_14, int ** p_15, char p_16);
static unsigned short func_25(long long p_26, long long p_27);
static long long func_28(unsigned long long p_29, int ** p_30, long long p_31, unsigned p_32, long long p_33);
static unsigned long long func_34(int p_35, int * p_36, int ** p_37);
static int ** func_123(int ** p_124, unsigned long long p_125);
static const short func_126(unsigned p_127);
static long long func_129(int ** const p_130, unsigned char p_131, int p_132, int p_133, unsigned char p_134);
static int ** const func_135(const int * p_136, unsigned char p_137, unsigned p_138, unsigned p_139);
static const int * func_140(unsigned p_141);
static char func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = (void*)0;
    int *l_5 = (void*)0;
    int *l_6 = &g_3;
    int *l_7 = &g_3;
    int *l_8 = &g_3;
    int *l_9 = &g_3;
    int * const *l_869 = &l_2;
    --g_10;
    l_869 = func_13((*l_7), g_17, (*l_2));



    ;
    ;
    for (g_292 = 0; (g_292 == (-30)); g_292 = safe_sub_func_uint8_t_u_u(g_292, 1))
    {
        return g_822;
    }
    (*l_2) = ((void*)0 != &l_6);
    return g_411;
}







static int * const * func_13(unsigned char p_14, int ** p_15, char p_16)
{
    int *l_38 = &g_3;
    const int l_848 = 0x4F4C1FB8L;
    long long l_849 = 0L;
    (*l_38) = (((0x6F3F17E2L || ((safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_25(func_28(func_34(g_3, l_38, &l_38), func_123(&g_18, (((*l_38) < func_126((*l_38))) != p_14)), p_16, (*l_38), g_292), (*l_38)), l_848)), l_848)) | l_849), p_16)) & l_849)) >= p_16) > 0L);



    ;
    for (g_411 = (-27); (g_411 >= 56); g_411++)
    {
        unsigned long long l_852 = 0xC6677179BEE8F932LL;
        unsigned long long l_857 = 1UL;
        int l_868 = 0x74B91CC9L;
        l_868 = func_28(l_852, func_123(&g_18, (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_852, ((*l_38) != l_857))), ((safe_mul_func_int16_t_s_s((*l_38), ((safe_sub_func_int16_t_s_s(l_852, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_120 | (safe_mod_func_uint64_t_u_u(0x09006909BE530638LL, (*l_38)))), p_16)), (*l_38))))) <= p_14))) || 0x52BFB4BCL)))), p_16, p_16, p_16);
        return p_15;


    }
    return p_15;


}







static unsigned short func_25(long long p_26, long long p_27)
{
    char l_763 = 0xE9L;
    int *l_774 = &g_3;
    char l_791 = (-2L);
    int l_800 = 0x88284C36L;
    long long l_807 = 0xA0B4AEAAAD8483F4LL;
    int l_818 = 0x2E75F289L;
    int *l_844 = &g_3;
    int l_846 = 0L;
    int *l_847 = &l_800;
    if ((safe_mul_func_uint16_t_u_u(l_763, (g_616 > (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_28((p_26 ^ ((safe_lshift_func_int8_t_s_u(1L, (safe_sub_func_int16_t_s_s((!p_26), (0L && (safe_lshift_func_uint8_t_u_s(func_34(p_26, l_774, func_123(func_123(&l_774, g_616), g_199)), 3))))))) | p_27)), &g_18, g_10, (*l_774), (*l_774)), 0xE5L)), p_26))))))
    {
        short l_781 = 0x6A58L;
        int l_786 = 0x2157995CL;
        if ((*l_774))
        {
            int *l_775 = (void*)0;
            int *l_776 = (void*)0;
            int *l_777 = (void*)0;
            int *l_778 = &g_147;
            int *l_779 = (void*)0;
            int *l_780 = (void*)0;
            int *l_782 = &g_151;
            int *l_783 = &g_147;
            int *l_784 = (void*)0;
            int *l_785 = &g_151;
            int *l_787 = &g_151;
            int *l_788 = (void*)0;
            int *l_789 = &g_147;
            int *l_790 = &g_147;
            int *l_792 = &g_151;
            int *l_793 = &l_786;
            int *l_794 = &g_151;
            int *l_795 = &g_3;
            int *l_796 = &l_786;
            int *l_797 = &g_3;
            int *l_798 = &g_151;
            int *l_799 = (void*)0;
            int *l_801 = &l_786;
            int l_802 = 1L;
            int *l_803 = (void*)0;
            int *l_804 = &g_151;
            int *l_805 = &l_800;
            int *l_806 = &l_802;
            int l_808 = 0xDD49B0B2L;
            int *l_809 = &l_808;
            int *l_810 = &g_147;
            int *l_811 = (void*)0;
            int *l_812 = &g_3;
            int *l_813 = (void*)0;
            int *l_814 = &l_800;
            int *l_815 = &g_147;
            int l_816 = 0x7AA1AE93L;
            int *l_817 = &g_3;
            int *l_819 = &l_802;
            int *l_820 = (void*)0;
            int *l_821 = &l_786;
            --g_822;
        }
        else
        {
            unsigned char l_827 = 0xCBL;
            (*g_235) = &l_800;

            ;
            (**g_235) ^= 0xE580D83EL;
            (*l_774) &= (!l_827);
            return g_643;


        }
    }
    else
    {
        short l_832 = 0x3966L;
        int ** const l_839 = &l_774;
        int **l_845 = &l_844;
        l_774 = &l_800;

        ;
        for (p_27 = 0; (p_27 > (-8)); p_27 = safe_sub_func_uint8_t_u_u(p_27, 1))
        {
            int * const l_830 = &l_818;
            int **l_831 = &l_774;
            (*l_831) = l_830;

            ;
            (*l_774) = l_832;
            if (p_27)
                break;
            return g_120;
        }

        ;
        g_147 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(g_411, 4)), (safe_add_func_int16_t_s_s(l_832, func_129(l_839, (0x95C28A2CL > (func_28((+(((!func_129(&g_18, (((func_28((safe_rshift_func_uint16_t_u_s((*l_774), ((safe_mod_func_int32_t_s_s(func_34((g_199 != ((*l_774) | g_643)), l_844, &l_844), 4294967288UL)) & 0UL))), &g_18, g_10, p_27, (*l_774)) <= g_292) && g_549) ^ p_27), (*l_774), g_3, g_151)) ^ (**l_839)) && (*l_774))), l_845, (**l_839), l_846, p_27) && (*l_844))), p_26, (**l_839), p_27)))));

        ;
    }

    ;
    ;
    (*l_847) ^= (*l_844);
    return p_26;
}







static long long func_28(unsigned long long p_29, int ** p_30, long long p_31, unsigned p_32, long long p_33)
{
    const int l_759 = 0xD366DB7AL;
    int *l_760 = &g_147;
    for (g_199 = (-3); (g_199 != 34); g_199 = safe_add_func_int64_t_s_s(g_199, 1))
    {
        if ((*g_495))
            break;
        if (l_759)
            break;
        (*p_30) = l_760;
    }
    return g_10;
}







static unsigned long long func_34(int p_35, int * p_36, int ** p_37)
{
    int *l_39 = &g_3;
    int *l_40 = (void*)0;
    int *l_41 = &g_3;
    int *l_42 = (void*)0;
    int *l_43 = &g_3;
    int l_44 = 0xDADF8609L;
    int l_45 = 0x434A938FL;
    int l_46 = 0x5950CFDFL;
    int *l_48 = &l_44;
    int *l_49 = &g_3;
    int *l_50 = &l_46;
    int *l_51 = (void*)0;
    int *l_52 = &l_44;
    int *l_53 = &l_46;
    int *l_54 = (void*)0;
    int l_55 = 0xEE6DABACL;
    int l_56 = 0xA885C82FL;
    int *l_57 = &l_46;
    int *l_58 = &l_55;
    int *l_59 = &l_55;
    int *l_60 = (void*)0;
    int *l_61 = &l_45;
    int *l_62 = &g_3;
    int *l_63 = (void*)0;
    int *l_64 = &l_44;
    int *l_65 = &l_46;
    int *l_66 = &l_46;
    int *l_67 = &l_44;
    int *l_68 = &l_44;
    int *l_69 = (void*)0;
    int *l_70 = (void*)0;
    int l_71 = 0x94AD4DB1L;
    int *l_72 = &l_46;
    int *l_73 = &l_46;
    int *l_74 = &g_3;
    int *l_75 = &l_71;
    int *l_76 = &l_55;
    int *l_77 = &l_56;
    int *l_78 = &l_55;
    int *l_79 = &l_44;
    int *l_80 = &l_46;
    int *l_81 = &l_71;
    int *l_82 = &l_46;
    int *l_83 = (void*)0;
    int *l_84 = &l_44;
    int l_85 = 8L;
    int *l_86 = &l_71;
    int *l_87 = &l_46;
    int *l_88 = (void*)0;
    int *l_89 = &l_55;
    int l_90 = 1L;
    int *l_91 = (void*)0;
    int l_92 = 9L;
    int *l_93 = &l_44;
    int *l_94 = &l_44;
    int *l_95 = &l_71;
    int l_96 = (-2L);
    int *l_97 = &l_46;
    int *l_98 = (void*)0;
    int *l_99 = &l_71;
    int *l_100 = &l_90;
    int *l_101 = &g_3;
    int *l_102 = &g_3;
    int *l_103 = &l_85;
    int l_104 = 0x6066FA41L;
    int *l_105 = &l_92;
    int *l_106 = (void*)0;
    int *l_107 = &l_45;
    int *l_108 = &l_85;
    int *l_109 = (void*)0;
    int *l_110 = &l_71;
    int *l_111 = (void*)0;
    int *l_112 = &l_56;
    int *l_113 = &l_85;
    int *l_114 = (void*)0;
    int *l_115 = &l_92;
    int *l_116 = (void*)0;
    int *l_117 = &l_44;
    int *l_118 = (void*)0;
    int *l_119 = &l_92;
    --g_120;
    return g_3;
}







static int ** func_123(int ** p_124, unsigned long long p_125)
{
    short l_744 = (-6L);
    int *l_745 = &g_147;
    int ***l_748 = (void*)0;
    (*l_745) = (+(safe_sub_func_uint64_t_u_u(1UL, (((safe_mod_func_uint16_t_u_u(1UL, (safe_sub_func_int16_t_s_s(g_151, p_125)))) <= p_125) > (safe_rshift_func_int16_t_s_u((((+l_744) || p_125) <= l_744), 10))))));
    (*l_745) = (*g_495);
    (*l_745) = ((((safe_rshift_func_int16_t_s_s(0x7328L, ((g_487 <= (safe_rshift_func_int16_t_s_u((~((*l_745) >= (g_411 < 18446744073709551608UL))), 5))) || g_147))) <= (p_125 <= ((safe_sub_func_uint8_t_u_u(g_147, (safe_lshift_func_uint8_t_u_s((((void*)0 != l_745) >= 0x38F1B1C8L), g_411)))) ^ g_677))) | (*l_745)) | 1UL);
    return &g_18;


}







static const short func_126(unsigned p_127)
{
    const short l_128 = 0L;
    int l_735 = 1L;
    l_735 &= (l_128 <= (18446744073709551611UL <= func_129(func_135(func_140(g_3), (safe_rshift_func_int8_t_s_s(g_411, 1)), l_128, g_3), g_411, p_127, p_127, p_127)));



    ;
    return p_127;
}







static long long func_129(int ** const p_130, unsigned char p_131, int p_132, int p_133, unsigned char p_134)
{
    int l_571 = (-1L);
    int ***l_574 = &g_235;
    unsigned short l_621 = 0UL;
    int l_646 = 0x726E6707L;
    int l_659 = 0L;
    int *l_690 = &l_646;
    int *l_691 = &g_147;
    long long l_692 = 0x385D3454CC3FDFB1LL;
    int *l_693 = &g_147;
    int *l_694 = &l_659;
    int *l_695 = (void*)0;
    int *l_696 = &l_646;
    int *l_697 = &l_571;
    int *l_698 = &l_571;
    int *l_699 = &l_646;
    int *l_700 = &g_147;
    int *l_701 = (void*)0;
    int *l_702 = &l_659;
    int *l_703 = (void*)0;
    int *l_704 = (void*)0;
    int *l_705 = &g_151;
    int *l_706 = &g_147;
    int *l_707 = (void*)0;
    int *l_708 = &l_571;
    int *l_709 = (void*)0;
    int l_710 = (-2L);
    int *l_711 = &g_147;
    int *l_712 = &g_151;
    int *l_713 = &g_147;
    int *l_714 = &l_659;
    int *l_715 = &g_147;
    int l_716 = 0xD202A448L;
    int *l_717 = (void*)0;
    int *l_718 = &l_659;
    int l_719 = 0xB5059EE4L;
    int *l_720 = &g_151;
    int *l_721 = &l_571;
    int l_722 = 0xE401372DL;
    int *l_723 = &l_722;
    int *l_724 = &l_716;
    int *l_725 = &l_659;
    int *l_726 = &l_659;
    int *l_727 = &l_571;
    int *l_728 = &g_147;
    int *l_729 = &g_151;
    int *l_730 = &l_716;
    int l_731 = (-2L);
    for (g_10 = 0; (g_10 <= 58); ++g_10)
    {
        unsigned short l_564 = 65528UL;
        int l_620 = 0x8601DBE7L;
        int l_647 = (-10L);
        int l_655 = 0xBEAA29ABL;
        l_564 |= (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((&p_130 != &g_235), 7)), g_199));
        if ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_133, ((safe_sub_func_int8_t_s_s(((p_130 != p_130) && (l_571 & (safe_lshift_func_int16_t_s_u(l_564, 8)))), (l_574 == (void*)0))) < (*g_495)))), (p_132 <= p_133))))
        {
            unsigned l_587 = 8UL;
            int l_638 = 0x4A6165DBL;
            int l_639 = 0x7A08B2CFL;
            for (p_134 = 0; (p_134 != 59); p_134++)
            {
                int *l_577 = &g_151;
                int *l_578 = &g_151;
                int *l_579 = &l_571;
                int *l_580 = &g_151;
                int *l_581 = &g_147;
                int *l_582 = &l_571;
                int *l_583 = &g_147;
                int *l_584 = &g_151;
                int l_585 = 0xFFD86D64L;
                int *l_586 = &g_147;
                int *l_619 = &l_585;
                unsigned short l_640 = 1UL;
                short l_686 = 1L;
                (*l_577) = p_132;
                ++l_587;
                for (g_363 = 0; (g_363 != 43); ++g_363)
                {
                    int *l_592 = &l_585;
                    int *l_593 = &g_147;
                    int *l_594 = &l_571;
                    int *l_595 = &g_151;
                    int *l_596 = (void*)0;
                    int *l_597 = &l_571;
                    int *l_598 = &l_585;
                    int *l_599 = &l_585;
                    int *l_600 = (void*)0;
                    int *l_601 = &l_585;
                    int *l_602 = &g_147;
                    int *l_603 = &l_585;
                    int *l_604 = (void*)0;
                    int *l_605 = &g_147;
                    int *l_606 = &g_151;
                    int *l_607 = &l_585;
                    int *l_608 = &g_151;
                    int *l_609 = &l_585;
                    int *l_610 = &g_147;
                    int *l_611 = &l_571;
                    int *l_612 = &l_571;
                    int *l_613 = &l_571;
                    int *l_614 = &l_585;
                    int *l_615 = &l_571;
                    int *l_648 = (void*)0;
                    int *l_649 = &l_639;
                    int *l_650 = &g_147;
                    int *l_651 = &l_646;
                    int l_652 = 0L;
                    int l_653 = 0x1381FAF7L;
                    int *l_654 = &l_639;
                    int *l_656 = &l_653;
                    int *l_657 = &l_646;
                    int *l_658 = &g_147;
                    int *l_660 = &l_646;
                    int l_661 = (-1L);
                    int *l_662 = &l_620;
                    int *l_663 = &l_647;
                    int *l_664 = &l_652;
                    int *l_665 = &l_638;
                    int *l_666 = (void*)0;
                    int *l_667 = (void*)0;
                    int *l_668 = &l_585;
                    int *l_669 = &g_147;
                    int *l_670 = (void*)0;
                    int *l_671 = &l_620;
                    int l_672 = (-3L);
                    int l_673 = 0xE14933FCL;
                    int *l_674 = &l_672;
                    int *l_675 = &l_659;
                    int *l_676 = &l_659;
                    int *l_682 = (void*)0;
                    char l_689 = 0xC4L;
                    ++g_616;
                    if ((*g_495))
                    {
                        (**l_574) = l_619;

                        ;
                        (*p_130) = (*p_130);
                        (*l_607) = (!(p_134 == p_131));
                        if ((**p_130))
                            break;
                    }
                    else
                    {
                        short l_628 = 0x1041L;
                        const long long l_636 = 0xE12587180B2D4C4FLL;
                        int l_637 = 0xEECCF07DL;
                        --l_621;
                        (*l_577) &= ((safe_lshift_func_int8_t_s_s((g_549 == (p_133 == (safe_add_func_uint16_t_u_u(p_131, l_628)))), ((safe_rshift_func_uint8_t_u_s((l_628 <= ((+18446744073709551611UL) < p_132)), (safe_unary_minus_func_int32_t_s(((safe_add_func_int8_t_s_s(p_134, (safe_add_func_uint16_t_u_u((((p_130 != (*l_574)) > p_132) ^ l_587), l_636)))) != p_134))))) < p_132))) && 65535UL);
                        --l_640;
                        g_643--;
                    }
                    g_677++;
                    if (l_620)
                    {
                        const short l_685 = 0L;
                        (*l_662) = (g_677 ^ ((safe_mul_func_uint16_t_u_u((((l_682 != &l_585) >= ((((safe_mul_func_uint8_t_u_u(l_685, 255UL)) < (0xC2EB425264EAE1FFLL || ((1L && (p_132 > (p_134 & p_131))) > p_132))) > g_643) & 7L)) & 0x3696L), p_132)) && l_685));
                        (*l_654) = ((((((((p_134 <= l_685) & (p_133 > ((l_686 <= (safe_rshift_func_int16_t_s_u(p_133, l_587))) >= l_639))) >= (!l_685)) == ((+(p_132 || (-1L))) == p_131)) >= 1UL) > l_689) != 0x5E1DF802B541B65DLL) & (-1L));
                    }
                    else
                    {
                        return g_411;


                    }
                }


            }
        }
        else
        {
            (**l_574) = &p_132;

            ;
        }
    }


    g_732++;
    (*l_726) = 0xD4DF0ABBL;
    return g_732;


}







static int ** const func_135(const int * p_136, unsigned char p_137, unsigned p_138, unsigned p_139)
{
    char l_526 = 0L;
    int l_527 = 9L;
    int ** const l_531 = &g_18;
    int *l_557 = &g_147;
    if (l_526)
    {
        int *l_528 = &g_147;
        l_527 &= (*g_495);
        p_136 = l_528;

        ;
    }
    else
    {
        int *l_529 = &g_147;
        int ***l_530 = &g_17;
        (*l_529) = 0xF21BAC02L;
        (*l_530) = &l_529;

        ;
        (***l_530) = (l_527 >= (g_147 <= p_139));
        return l_531;



    }

    ;
    if ((*p_136))
    {
        unsigned long long l_532 = 18446744073709551615UL;
        --l_532;
    }
    else
    {
        const int *l_535 = &g_147;
        int *l_536 = &g_151;
        int l_542 = 0x3D10254EL;
        l_535 = p_136;
        (*l_536) ^= (*p_136);
        for (g_151 = (-6); (g_151 > (-26)); g_151 = safe_sub_func_int64_t_s_s(g_151, 3))
        {
            int *l_539 = (void*)0;
            int *l_540 = &g_147;
            int *l_541 = (void*)0;
            int *l_543 = &l_527;
            int *l_544 = &l_527;
            int *l_545 = &l_527;
            int *l_546 = &l_527;
            int *l_547 = &g_147;
            int *l_548 = &g_147;
            --g_549;
        }
    }
    for (p_138 = 0; (p_138 != 21); p_138++)
    {
        const int **l_554 = (void*)0;
        const int **l_555 = (void*)0;
        const int **l_556 = &g_495;
        (*l_556) = p_136;

        ;
    }

    ;
    (*l_557) = (*p_136);
    return &g_18;


}







static const int * func_140(unsigned p_141)
{
    int **l_142 = &g_18;
    int **l_143 = &g_18;
    int *l_146 = &g_147;
    int l_162 = (-5L);
    int l_181 = (-5L);
    int l_189 = 9L;
    int l_192 = 0L;
    char l_270 = 0x5DL;
    unsigned long long l_444 = 0xA8B2C8D88053D1B3LL;
    const int *l_491 = &l_192;
    const int *l_494 = &l_192;
    (*l_146) = (((l_142 == l_143) && 0x1EL) == (safe_lshift_func_uint8_t_u_s(0UL, 3)));
    for (g_147 = (-2); (g_147 != 14); g_147 = safe_add_func_uint32_t_u_u(g_147, 3))
    {
        int *l_150 = &g_151;
        int *l_152 = &g_151;
        int *l_153 = &g_151;
        int *l_154 = &g_151;
        int *l_155 = (void*)0;
        int *l_156 = &g_151;
        int *l_157 = (void*)0;
        int *l_158 = &g_151;
        int l_159 = 1L;
        int *l_160 = &g_151;
        int *l_161 = &g_151;
        int *l_163 = &l_162;
        int *l_164 = &l_159;
        int *l_165 = &l_159;
        int *l_166 = (void*)0;
        int *l_167 = &l_162;
        int *l_168 = &l_162;
        int *l_169 = (void*)0;
        int *l_170 = &l_162;
        int *l_171 = &l_159;
        int *l_172 = &l_159;
        int *l_173 = &g_151;
        int *l_174 = &g_151;
        int *l_175 = &l_162;
        int *l_176 = (void*)0;
        int *l_177 = &l_162;
        int *l_178 = &g_151;
        int *l_179 = (void*)0;
        int *l_180 = &l_162;
        int *l_182 = &l_159;
        int *l_183 = &l_159;
        int *l_184 = (void*)0;
        int *l_185 = &l_181;
        int *l_186 = &l_159;
        int *l_187 = &l_181;
        int l_188 = 0x62B6CB16L;
        int *l_190 = &l_181;
        int *l_191 = &l_162;
        int *l_193 = &l_188;
        int *l_194 = &g_151;
        int *l_195 = &l_192;
        int *l_196 = (void*)0;
        int *l_197 = (void*)0;
        int *l_198 = (void*)0;
        --g_199;
    }
    for (l_189 = 0; (l_189 == (-22)); l_189 = safe_sub_func_int32_t_s_s(l_189, 8))
    {
        int l_204 = 0x5DBD19AAL;
        const int *l_205 = &l_162;
        int l_321 = 0x7832723FL;
        int l_358 = (-1L);
        int l_479 = 0L;
        const int *l_490 = &l_162;
        const int *l_492 = &l_162;
        if (((p_141 && (-8L)) >= (g_47 | ((p_141 || (p_141 < (l_204 >= ((18446744073709551615UL || (g_151 >= (l_205 != (*l_142)))) && (*l_146))))) || p_141))))
        {
            char l_208 = 0x58L;
            unsigned char l_211 = 252UL;
            const int **l_218 = (void*)0;
            int l_354 = 6L;
            int l_371 = 0x51559326L;
            if ((((safe_sub_func_uint16_t_u_u(p_141, l_208)) && (safe_mul_func_int8_t_s_s(l_211, 0L))) ^ (safe_rshift_func_int16_t_s_s((((l_211 < 0UL) <= (safe_add_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_int8_t_s(1L)))) <= (((((void*)0 != l_218) | 18446744073709551608UL) <= g_199) > 0L)) ^ 1UL), p_141))) | (*l_205)), 8))))
            {
                unsigned short l_219 = 0xCA51L;
                int **l_234 = &g_18;
                int l_291 = 1L;
                int l_298 = 7L;
                int l_318 = (-9L);
                int l_361 = (-1L);
                int l_362 = (-1L);
                long long l_370 = 0xD5C270F0C57F21A0LL;
                (*l_146) |= ((void*)0 != &g_18);
                (*l_146) &= (p_141 < l_219);
                for (l_181 = (-5); (l_181 >= (-26)); l_181--)
                {
                    unsigned long long l_236 = 18446744073709551615UL;
                    unsigned l_242 = 1UL;
                    int *l_245 = (void*)0;
                    int *l_246 = &l_192;
                    int *l_247 = &g_151;
                    int *l_248 = &l_192;
                    int *l_249 = (void*)0;
                    int *l_250 = &g_147;
                    int *l_251 = &l_192;
                    int *l_252 = &l_162;
                    int *l_253 = &l_162;
                    int *l_254 = &l_192;
                    int *l_255 = &l_192;
                    int *l_256 = &l_162;
                    int *l_257 = &l_162;
                    int *l_258 = &l_192;
                    int *l_259 = (void*)0;
                    int *l_260 = &g_147;
                    int *l_261 = &l_162;
                    int *l_262 = &l_192;
                    int *l_263 = &g_151;
                    int *l_264 = &l_192;
                    int *l_265 = &g_147;
                    int *l_266 = &g_151;
                    int *l_267 = &l_162;
                    int *l_268 = &g_147;
                    int *l_269 = &l_192;
                    int *l_271 = &l_192;
                    int *l_272 = &g_151;
                    int *l_273 = &l_192;
                    int *l_274 = (void*)0;
                    int *l_275 = &g_151;
                    int *l_276 = &l_192;
                    int *l_277 = &g_147;
                    int *l_278 = (void*)0;
                    int *l_279 = &l_192;
                    int l_280 = 0x74D08404L;
                    int *l_281 = &l_280;
                    int *l_282 = (void*)0;
                    int *l_283 = &l_192;
                    int *l_284 = &l_162;
                    int *l_285 = &l_192;
                    int *l_286 = &g_147;
                    int l_287 = 1L;
                    int *l_288 = &g_151;
                    int *l_289 = &l_192;
                    int *l_290 = &l_192;
                    int *l_293 = (void*)0;
                    int *l_294 = &l_287;
                    int *l_295 = &g_147;
                    int *l_296 = &l_162;
                    int *l_297 = (void*)0;
                    int *l_299 = &g_151;
                    int *l_300 = (void*)0;
                    int *l_301 = &l_291;
                    int *l_302 = &l_162;
                    int *l_303 = &l_162;
                    int l_304 = 8L;
                    int *l_305 = &l_280;
                    int *l_306 = &l_192;
                    int *l_307 = &l_304;
                    int *l_308 = &l_291;
                    int *l_309 = &l_192;
                    int *l_310 = &l_192;
                    int *l_311 = &g_147;
                    int *l_312 = (void*)0;
                    int *l_313 = &l_291;
                    int *l_314 = &l_192;
                    int l_315 = (-5L);
                    int *l_316 = &l_304;
                    int *l_317 = &l_162;
                    int *l_319 = (void*)0;
                    int *l_320 = (void*)0;
                    int *l_322 = (void*)0;
                    int *l_323 = &l_321;
                    int *l_324 = (void*)0;
                    int *l_325 = &l_318;
                    int *l_326 = &l_192;
                    int *l_327 = &l_318;
                    int *l_328 = &l_287;
                    int l_329 = (-10L);
                    int *l_330 = &g_151;
                    int *l_331 = &l_318;
                    int *l_332 = &l_321;
                    int *l_333 = &l_304;
                    int *l_334 = &g_147;
                    int *l_335 = &l_287;
                    int *l_336 = &l_162;
                    int *l_337 = &l_291;
                    int *l_338 = &l_329;
                    int *l_339 = &l_287;
                    int *l_340 = &l_304;
                    int *l_341 = &l_280;
                    int *l_342 = &l_280;
                    int *l_343 = (void*)0;
                    int *l_344 = (void*)0;
                    int *l_345 = &l_287;
                    int *l_346 = &l_287;
                    int *l_347 = &g_151;
                    int *l_348 = &l_280;
                    int *l_349 = &l_162;
                    int *l_350 = &l_329;
                    int *l_351 = (void*)0;
                    int *l_352 = &g_151;
                    int *l_353 = &l_315;
                    int *l_355 = &l_280;
                    int *l_356 = &l_315;
                    int *l_357 = &l_298;
                    int *l_359 = (void*)0;
                    int *l_360 = &l_358;
                    if (p_141)
                    {
                        unsigned long long l_237 = 0xBCF927AEA63C46DELL;
                        int l_238 = 0L;
                        (*l_146) ^= (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((void*)0 != (*g_17)), 4)), ((l_205 != (void*)0) <= (~1L)))) == 3UL), 4));
                        l_237 ^= (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u((((p_141 < ((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_141)), (l_234 != g_235))) < (p_141 && 0x406C9851L))) != g_10) <= (l_236 <= g_147)), g_147))));
                        ++g_239;
                    }
                    else
                    {
                        l_242--;
                        (*g_17) = (*l_143);
                    }
                    ++g_363;
                }
                for (g_47 = 0; (g_47 != 29); g_47 = safe_add_func_int32_t_s_s(g_47, 3))
                {
                    long long l_376 = (-5L);
                    int *l_414 = &g_147;
                }
            }
            else
            {
                (*g_17) = &l_354;

                ;
            }

            ;
        }
        else
        {
            int *l_415 = &l_162;
            (*l_142) = l_415;

            ;
            for (g_151 = (-3); (g_151 == 28); g_151 = safe_add_func_int8_t_s_s(g_151, 2))
            {
                l_358 |= (*l_205);
            }
        }


        for (g_10 = 0; (g_10 <= 16); g_10 = safe_add_func_uint32_t_u_u(g_10, 2))
        {
            int * const *l_422 = &g_18;
            int l_438 = 0xA9A4678BL;
            int l_450 = (-1L);
            const int *l_493 = &l_192;
            for (l_162 = 0; (l_162 == 18); l_162 = safe_add_func_int64_t_s_s(l_162, 3))
            {
                int * const **l_423 = (void*)0;
                int * const **l_424 = &l_422;
                const int *l_435 = &g_151;
                int *l_436 = &g_151;
                int *l_437 = &l_321;
                int *l_439 = &l_358;
                int *l_440 = &g_147;
                int *l_441 = &l_192;
                int *l_442 = (void*)0;
                int *l_443 = &l_192;
                (*l_424) = l_422;
                if ((*l_205))
                {
                    (*l_146) = ((g_363 && (safe_rshift_func_int8_t_s_u(6L, 6))) || p_141);
                    (*l_146) = ((safe_lshift_func_uint8_t_u_s(p_141, (*l_205))) && (safe_mod_func_uint8_t_u_u(g_239, ((p_141 || (p_141 & p_141)) | (safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(g_151, p_141)), 1L))))));
                    return l_435;



                }
                else
                {
                    (*l_146) ^= p_141;
                    l_321 = p_141;
                }
                ++l_444;
                for (g_363 = 21; (g_363 >= 22); ++g_363)
                {
                    int l_449 = 0x3571BFDBL;
                    int *l_451 = &l_192;
                    int l_452 = (-1L);
                    int l_453 = 0xCCD7B2C7L;
                    int l_454 = 7L;
                    int *l_455 = &l_450;
                    int *l_456 = (void*)0;
                    int *l_457 = (void*)0;
                    int *l_458 = &l_450;
                    int *l_459 = &l_452;
                    int *l_460 = &l_181;
                    int *l_461 = (void*)0;
                    int *l_462 = &l_321;
                    int *l_463 = &l_181;
                    int *l_464 = &l_454;
                    int *l_465 = &g_151;
                    int *l_466 = &g_151;
                    int *l_467 = &l_453;
                    int *l_468 = &g_151;
                    int *l_469 = &l_321;
                    int *l_470 = &l_438;
                    int *l_471 = &l_453;
                    int *l_472 = &l_450;
                    int *l_473 = &g_147;
                    int *l_474 = &g_147;
                    int *l_475 = &l_358;
                    int *l_476 = &l_181;
                    int *l_477 = &l_181;
                    int *l_478 = &l_358;
                    int *l_480 = &g_151;
                    int *l_481 = &l_450;
                    int *l_482 = &g_151;
                    int *l_483 = (void*)0;
                    int *l_484 = &l_358;
                    int *l_485 = (void*)0;
                    int *l_486 = &l_450;
                    (*l_437) = p_141;
                    ++g_487;
                    if (g_3)
                        break;
                    if (p_141)
                        continue;
                }
            }
            return g_495;



        }
        (*l_143) = &g_3;

        ;
    }

    ;
    for (g_239 = 0; (g_239 > 20); g_239 = safe_add_func_uint64_t_u_u(g_239, 4))
    {
        int **l_503 = &g_18;
        unsigned char l_504 = 255UL;
        if ((!((void*)0 == &g_17)))
        {
            int l_502 = (-1L);
            (*l_146) |= (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(l_502, ((void*)0 == l_503))), 0x0642AA80L));
        }
        else
        {
            long long l_507 = 0x0C5DD6833591E915LL;
            int l_522 = 0xCDC31119L;
            (*l_146) = ((g_151 | p_141) > (*l_491));
            (*l_146) = (((18446744073709551615UL == l_504) || (safe_mul_func_int16_t_s_s((l_507 | (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((g_147 && 0UL))), 2))), (p_141 < ((0xA8E8L & (g_487 | g_151)) < 0L))))) != 255UL);
            if ((*g_495))
            {
                for (p_141 = 9; (p_141 != 16); p_141++)
                {
                    unsigned char l_521 = 0x20L;
                    (*l_146) = (safe_mod_func_int8_t_s_s((l_507 < (safe_sub_func_uint16_t_u_u(p_141, (p_141 && p_141)))), p_141));
                    if ((safe_sub_func_int64_t_s_s((l_507 ^ (safe_mod_func_uint8_t_u_u(1UL, g_10))), ((&g_235 == (void*)0) > 5L))))
                    {
                        (*g_235) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_146) = (p_141 < p_141);
                    }
                    (*l_146) = 0L;
                    if (l_521)
                        continue;
                }
            }
            else
            {
                const int *l_523 = &g_151;
                l_522 ^= p_141;
                return l_523;


            }
        }
    }
    return (*l_142);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
