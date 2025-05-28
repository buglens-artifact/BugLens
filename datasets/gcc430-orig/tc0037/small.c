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



static int *g_7 = (void*)0;
static int g_17 = 0L;
static short g_40 = 1L;
static int g_49 = 0L;
static short *g_58 = (void*)0;
static short g_60 = 1L;
static unsigned short g_72 = 65526UL;
static unsigned short g_74 = 65532UL;
static unsigned char g_82 = 250UL;
static char g_188 = 0xEBL;
static char *g_189 = &g_188;
static unsigned char g_192 = 0xF7L;
static unsigned char g_194 = 0UL;
static int g_195 = 0x07125969L;
static const int *g_213 = &g_195;
static short g_220 = 0xFA66L;
static unsigned g_227 = 1UL;
static unsigned g_254 = 4294967295UL;
static short **g_282 = (void*)0;
static short ***g_281 = &g_282;
static unsigned g_285 = 0UL;
static const unsigned short *g_302 = &g_72;
static const unsigned short **g_301 = &g_302;
static unsigned char g_371 = 0x7BL;
static unsigned g_424 = 0xC588E311L;
static int g_457 = 1L;
static unsigned g_515 = 0x20056DA0L;
static int *g_565 = &g_195;
static unsigned g_572 = 0x5EABFD20L;
static char g_657 = 0L;
static unsigned g_715 = 8UL;
static short *g_746 = &g_40;
static char g_762 = 0x29L;
static const unsigned *g_822 = (void*)0;
static const unsigned **g_821 = &g_822;
static const unsigned ***g_820 = &g_821;



static short func_1(void);
static int * func_2(unsigned p_3, int * p_4, int p_5, unsigned short p_6);
static int * func_8(char p_9, int * p_10, int * p_11, int * p_12);
static int * func_13(int p_14, int * p_15);
static unsigned char func_18(int p_19, unsigned short p_20);
static unsigned short func_27(unsigned p_28, int * p_29, unsigned p_30, int * p_31);
static short func_41(char p_42, int * p_43, unsigned p_44, unsigned short p_45);
static unsigned func_46(unsigned p_47);
static short * func_52(int * p_53, int p_54);
static int * func_55(short * p_56, int * p_57);
static short func_1(void)
{
    int *l_16 = &g_17;
    int **l_750 = (void*)0;
    int **l_751 = &g_565;
    int l_810 = 0x54D78A8CL;
    int *l_844 = &g_49;
    l_844 = func_2((g_7 == ((*l_751) = func_8((((*l_751) = func_13((1L != (((void*)0 == l_16) >= (g_17 | func_18(g_17, g_17)))), &g_17)) != (void*)0), &g_17, &g_17, &g_17))), g_7, g_572, l_810);

    ;
    ;

    ;
    return (*g_746);
}







static int * func_2(unsigned p_3, int * p_4, int p_5, unsigned short p_6)
{
    short *l_811 = &g_220;
    unsigned **l_819 = (void*)0;
    unsigned ***l_818 = &l_819;
    const unsigned ****l_823 = &g_820;
    char *l_827 = &g_762;
    char **l_826 = &l_827;
    int l_828 = 0L;
    const int **l_834 = &g_213;
    const int ***l_833 = &l_834;
    const int **l_836 = &g_213;
    const int ***l_835 = &l_836;
    unsigned char *l_837 = &g_371;
    unsigned char l_838 = 0xB9L;
    unsigned short *l_839 = &g_72;
    g_565 = &l_828;

    ;
    if ((0x5629FB11L ^ (p_3 >= (safe_mul_func_uint8_t_u_u(((*g_565) < (-7L)), 251UL)))))
    {
        const int l_840 = 0xBEF23654L;
        (*g_565) = p_3;
        (*g_565) = l_840;
    }
    else
    {
        int *l_841 = (void*)0;
        (*l_836) = &g_49;

        ;
        (*l_834) = func_8(((***l_833) || 0xA08C6C41L), l_841, func_13(p_6, func_13(g_285, p_4)), &g_49);

        ;
        ;
    }

    ;
    ;
    l_828 = (safe_rshift_func_int8_t_s_s(5L, ((**l_826) = (*g_189))));
    l_828 = (0xD2EBL | p_6);
    return p_4;



}







static int * func_8(char p_9, int * p_10, int * p_11, int * p_12)
{
    const int l_754 = 0L;
    char *l_761 = &g_762;
    int *l_765 = &g_17;
    int **l_766 = (void*)0;
    int **l_767 = &g_565;
    unsigned short *l_788 = (void*)0;
    unsigned short **l_787 = &l_788;
    (*p_11) = (safe_sub_func_int16_t_s_s((l_754 > 0x3771L), ((g_657 != ((-1L) && ((p_9 && func_46(g_227)) <= (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((((*l_761) = ((*g_189) = l_754)) >= (safe_mul_func_uint8_t_u_u(1UL, l_754))) || g_715), g_254)), 2))))) == g_424)));
    (*l_767) = l_765;

    ;
    for (g_371 = 0; (g_371 <= 31); g_371 = safe_add_func_int8_t_s_s(g_371, 6))
    {
        unsigned char *l_776 = &g_82;
        g_565 = func_13((((((0x1BF9L == (safe_lshift_func_int16_t_s_s(((*p_11) != (safe_mod_func_int8_t_s_s((251UL >= (safe_mod_func_int16_t_s_s((*g_746), p_9))), p_9))), (l_776 != l_761)))) && p_9) == 0UL) & 1UL) ^ (**l_767)), p_10);

        ;
    }

    ;
    if ((*l_765))
    {
        for (g_72 = 0; (g_72 >= 1); g_72 = safe_add_func_int16_t_s_s(g_72, 3))
        {
            unsigned short *l_780 = &g_74;
            unsigned short * const *l_779 = &l_780;
            unsigned short * const **l_781 = &l_779;
            (*l_767) = p_10;

            ;
            (*l_781) = l_779;
        }

        ;
    }
    else
    {
        unsigned short *l_786 = &g_72;
        unsigned short * const *l_785 = &l_786;
        int l_795 = (-1L);
        int l_802 = 1L;
        for (g_188 = 0; (g_188 < 3); g_188++)
        {
            int *l_784 = &g_17;
            unsigned short *l_792 = (void*)0;
            char *l_798 = &g_657;
            g_565 = l_784;

            ;
        }
    }

    ;
    return (*l_767);


}







static int * func_13(int p_14, int * p_15)
{
    int *l_748 = &g_195;
    int **l_749 = &l_748;
    p_15 = l_748;

    ;
    (*l_749) = l_748;
    return &g_49;


}







static unsigned char func_18(int p_19, unsigned short p_20)
{
    int l_38 = (-9L);
    short *l_39 = &g_40;
    int l_332 = 0x1BBF2BBBL;
    unsigned short *l_491 = &g_72;
    int *l_492 = (void*)0;
    int *l_493 = &l_332;
    short * const *l_527 = &l_39;
    short * const **l_526 = &l_527;
    short * const ***l_525 = &l_526;
    char ***l_587 = (void*)0;
    int *l_663 = &g_195;
    int *l_695 = (void*)0;
    unsigned l_699 = 0xA3E7371CL;
    unsigned short l_719 = 8UL;
    int **l_747 = &l_663;
    if (((*l_493) = ((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_17, p_19)), (p_20 >= (!((*l_491) = (safe_sub_func_uint16_t_u_u((1UL & func_27(((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((*l_39) = l_38), (1L > g_17))), 3)), (l_332 = (0L >= (func_41((l_39 != l_39), &l_38, p_20, l_38) != l_38))))) || l_332) >= g_17) | (*g_189)), &l_38, g_285, &l_38)), 2UL))))))) >= 3UL)))
    {
        const short *l_501 = (void*)0;
        const short **l_500 = &l_501;
        int l_502 = 0xD757702AL;
        (*l_493) = g_82;
        (*l_493) = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((*l_491) = (safe_lshift_func_uint8_t_u_u(((l_500 != &l_501) ^ l_502), 3))), (9L | (safe_mul_func_int8_t_s_s((*g_189), (l_502 > (+(1L >= 0xEBL)))))))), (l_502 & p_20)));
    }
    else
    {
        char **l_506 = &g_189;
        char ***l_505 = &l_506;
        unsigned *l_513 = (void*)0;
        unsigned *l_514 = &g_515;
        int l_518 = 0x0D751C81L;
        unsigned *l_519 = &g_285;
        unsigned char *l_524 = &g_192;
        short *l_528 = (void*)0;
        short *l_529 = &g_220;
        (*l_505) = (void*)0;

        ;
        (*l_493) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_20, 0)), (safe_mod_func_int32_t_s_s(func_46(((*l_514) = 2UL)), (safe_mul_func_uint16_t_u_u(l_518, ((p_19 || ((*l_519) = ((*l_493) >= 0UL))) && (safe_mod_func_uint8_t_u_u(((*l_524) = (0UL == ((*l_39) = 0L))), p_19)))))))));
        (*l_493) = (p_20 > (((*l_39) = (&g_281 == l_525)) | (l_518 = (l_528 != (l_529 = l_528)))));

        ;
    }

    ;
    ;
    for (g_285 = 0; (g_285 >= 6); g_285 = safe_add_func_uint8_t_u_u(g_285, 1))
    {
        unsigned l_555 = 1UL;
        int *l_557 = &l_38;
        int **l_579 = &l_557;
    }
    for (g_424 = 19; (g_424 < 10); --g_424)
    {
        const int **l_584 = &g_213;
        int l_594 = 0xC3C14E78L;
        unsigned char *l_595 = &g_82;
        int *l_596 = &g_457;
        int *l_597 = &l_594;
        char l_632 = 5L;
        short l_702 = 0x5E42L;
        const unsigned char l_703 = 0x6CL;
        short l_720 = 3L;
        char l_721 = 0x3FL;
        const unsigned *l_737 = &g_227;
        const unsigned **l_736 = &l_737;
        const unsigned ***l_735 = &l_736;
        (*g_565) = (safe_lshift_func_int8_t_s_u((l_584 != &g_7), 5));
        (*l_493) = (*l_493);
        (*l_584) = func_55(func_52(&l_332, p_20), (l_597 = func_55(func_52(&l_332, ((*l_596) = (safe_mul_func_int16_t_s_s(((g_424 < p_20) != (((*l_595) = ((((*g_189) = (((void*)0 == l_587) != (safe_mul_func_uint8_t_u_u((~(safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_19, l_594)), p_20))), 0x59L)))) <= l_594) ^ p_20)) ^ p_20)), (**g_301))))), &g_17)));

        ;
        ;
    }

    ;
    (*l_747) = func_55(g_746, &l_332);

    ;
    return g_188;
}







static unsigned short func_27(unsigned p_28, int * p_29, unsigned p_30, int * p_31)
{
    char l_335 = 0L;
    int *l_338 = &g_195;
    short ***l_347 = &g_282;
    short ***l_349 = &g_282;
    int l_389 = 0xD4BDB758L;
    int **l_390 = &l_338;
    unsigned short **l_394 = (void*)0;
    unsigned short l_456 = 65533UL;
    if ((p_30 ^ ((safe_rshift_func_int8_t_s_s(l_335, 3)) >= ((*p_31) = 0x8290AFDDL))))
    {
        int *l_337 = &g_49;
        int **l_336 = &l_337;
        short ***l_346 = &g_282;
        short ****l_348 = &g_281;
        unsigned short *l_350 = &g_72;
        (*l_336) = &g_49;
        (*l_336) = func_55(func_52(l_338, (safe_unary_minus_func_int8_t_s((0xFC50L != p_30)))), &g_49);

        ;
        (*l_336) = p_31;


    }
    else
    {
        unsigned l_359 = 0x29B32BA9L;
        char *l_367 = &l_335;
        unsigned short ** const * const l_377 = (void*)0;
        unsigned short ** const * const *l_376 = &l_377;
        for (g_220 = (-14); (g_220 > 20); g_220 = safe_add_func_int32_t_s_s(g_220, 5))
        {
            unsigned l_382 = 4294967295UL;
            int * const l_387 = &g_195;
            if ((*p_31))
            {
                unsigned l_362 = 0x076C89BEL;
                int l_368 = (-6L);
                unsigned char *l_369 = &g_192;
                unsigned char *l_370 = &g_371;
                int *l_384 = (void*)0;
                int **l_385 = &l_384;
                if ((~((safe_rshift_func_uint16_t_u_s(p_28, ((safe_sub_func_uint16_t_u_u(1UL, (safe_mul_func_int8_t_s_s(func_46(l_359), ((*l_370) = (safe_add_func_uint8_t_u_u(l_362, ((*l_369) = (l_368 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((l_367 == (void*)0), 4)), 12))))))))))) != 0x55D4DA4FL))) && (l_368 = (*g_189)))))
                {
                    if (func_46((*l_338)))
                    {
                        unsigned short *l_372 = (void*)0;
                        unsigned short *l_373 = &g_74;
                        (*p_29) = ((p_30 & (**g_301)) | ((*l_373) = p_28));
                    }
                    else
                    {
                        if (l_359)
                            break;
                    }
                }
                else
                {
                    short *l_378 = &g_60;
                    short *l_379 = &g_40;
                    if (((((*l_378) = (p_30 | (0x0CL >= (((**g_301) | p_30) >= (safe_lshift_func_uint16_t_u_s((l_376 != &l_377), 6)))))) < ((*l_379) = ((&p_30 != (void*)0) && (*g_189)))) && (*p_29)))
                    {
                        int **l_383 = &l_338;
                        if ((*l_338))
                            break;
                        (*p_29) = (safe_add_func_int32_t_s_s((*p_29), (func_46(func_46(l_382)) | (*g_189))));
                        (*l_383) = func_55(func_52(&l_368, l_368), p_29);
                        l_384 = &g_195;

                        ;
                    }
                    else
                    {
                        (*l_338) = ((*l_338) == 0xB418L);
                    }

                    ;
                }

                ;
                (*l_385) = &l_368;

                ;
                (*p_31) = 0x0B46ECC8L;
            }
            else
            {
                int **l_386 = &l_338;
                int **l_388 = &l_338;
                (*l_386) = p_31;
                if (l_359)
                    continue;
                if (l_359)
                    break;
                (*l_388) = l_387;

                ;
            }
            return l_389;
        }


        return l_359;
    }
    (*l_390) = &g_49;

    ;
    for (g_82 = 6; (g_82 < 29); ++g_82)
    {
        const short l_393 = 1L;
        unsigned short *l_396 = (void*)0;
        unsigned short **l_395 = &l_396;
        unsigned short ***l_397 = &l_395;
        int l_416 = 0L;
        int * const l_490 = &l_416;
    }
    return (**g_301);
}







static short func_41(char p_42, int * p_43, unsigned p_44, unsigned short p_45)
{
    int * const l_236 = &g_49;
    int *l_237 = (void*)0;
    unsigned * const l_267 = (void*)0;
    unsigned * const *l_266 = &l_267;
    char l_313 = 1L;
    const unsigned short *l_315 = &g_74;
    unsigned short * const * const **l_320 = (void*)0;
    unsigned short * const * const l_322 = (void*)0;
    unsigned short * const * const *l_321 = &l_322;
    unsigned short * const * const l_324 = (void*)0;
    unsigned short * const * const *l_323 = &l_324;
    short *l_329 = (void*)0;
    short *l_330 = &g_220;
    unsigned l_331 = 1UL;
    if ((func_46(p_45) >= (safe_rshift_func_uint8_t_u_u(0x08L, 4))))
    {
        int *l_238 = &g_195;
        int **l_239 = &l_237;
        unsigned *l_261 = &g_254;
        unsigned **l_260 = &l_261;
        l_237 = l_236;

        ;
        (*l_239) = l_238;

        ;
        if ((*p_43))
        {
            unsigned char *l_246 = &g_82;
            (*l_236) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((((*l_238) = 0xAD3B4E33L) | g_74), (((*l_246) = 0xAEL) || (p_44 > (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((&g_58 != &g_58), 5)), ((void*)0 == &g_188))) <= p_42) > g_227))))), (*l_236)));
        }
        else
        {
            short l_251 = 0x7936L;
            unsigned *l_252 = &g_227;
            unsigned *l_253 = &g_254;
            short **l_255 = &g_58;
            short ***l_256 = &l_255;
            short **l_258 = &g_58;
            short ***l_257 = &l_258;
            short *l_259 = &g_220;
            unsigned **l_262 = &l_253;
            (*l_236) = ((*l_237) = ((g_192 < (0xE385L < (((*p_43) && l_251) > (((*l_259) = (((*p_43) & ((*l_253) = ((*l_252) = g_220))) >= (((*l_256) = l_255) == ((*l_257) = &g_58)))) & 0L)))) && (*l_237)));
            l_262 = l_260;

            ;
        }
    }
    else
    {
        unsigned *l_265 = (void*)0;
        unsigned * const *l_264 = &l_265;
        short l_288 = 7L;
        int **l_314 = &l_237;
        if ((*p_43))
        {
            (*l_236) = ((*p_43) < 0xC7531552L);
            g_195 = (*p_43);
            if ((*p_43))
            {
                (*l_236) = (*p_43);
            }
            else
            {
                unsigned char *l_263 = &g_192;
                int **l_268 = &l_237;
                int *l_270 = &g_195;
                int **l_269 = &l_270;
                (*l_269) = ((*l_268) = func_55(func_52(func_55(func_52(p_43, func_46(g_195)), p_43), ((((*l_263) = ((*p_43) ^ 0xE727DB1DL)) == ((l_264 != l_266) == (-1L))) > 0x913BL)), &g_17));

                ;
                ;
                (*l_236) = (*p_43);
                (*l_268) = &g_195;

                ;
            }

            ;
        }
        else
        {
            unsigned short l_304 = 0x4D7AL;
            for (g_60 = 0; (g_60 > (-14)); g_60 = safe_sub_func_int16_t_s_s(g_60, 4))
            {
                short l_280 = 0x5195L;
                int l_297 = 6L;
                const unsigned short ***l_303 = &g_301;
                for (g_82 = 0; (g_82 < 55); g_82 = safe_add_func_uint32_t_u_u(g_82, 1))
                {
                    int l_295 = (-1L);
                    p_43 = &g_17;

                    ;
                    for (g_192 = (-6); (g_192 == 10); g_192 = safe_add_func_uint32_t_u_u(g_192, 9))
                    {
                        int l_279 = (-1L);
                        short *l_283 = &g_220;
                        int **l_284 = &l_237;
                        int *l_289 = (void*)0;
                        int *l_290 = (void*)0;
                        int *l_291 = (void*)0;
                        int *l_292 = &g_195;
                        (*l_236) = ((safe_add_func_uint8_t_u_u((l_279 == (-1L)), (1UL && ((*l_283) = ((~l_280) < ((void*)0 == g_281)))))) && p_42);
                        (*l_284) = l_265;

                        ;
                        if (g_285)
                            break;
                        (*l_292) = ((*l_236) = (((safe_add_func_uint16_t_u_u(((((*g_189) < (~g_285)) != l_280) || (p_44 > g_72)), l_288)) > 0x1AL) > (-10L)));
                    }
                    for (g_192 = (-10); (g_192 >= 20); g_192++)
                    {
                        int **l_296 = &l_237;
                        int **l_298 = (void*)0;
                        int *l_300 = (void*)0;
                        int **l_299 = &l_300;
                        (*l_236) = (p_42 || l_295);
                        (*l_296) = (void*)0;

                        ;
                        (*l_236) = l_297;
                        (*l_299) = (p_43 = ((*l_296) = &g_17));

                        ;
                        ;
                    }
                }
                (*l_303) = g_301;
                if ((*p_43))
                    continue;
                if ((*p_43))
                    break;
            }


            ;
            (*l_236) = (0L >= 0xDDL);
            (*l_236) = l_288;
            (*l_236) = (((*g_301) != (*g_301)) == (l_304 > (((p_45 > func_46((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((g_195 != (g_188 && (l_313 | (*p_43)))), l_288)) > l_288) == g_195), 12)) < p_44) <= 0UL), (-1L))) || 9UL), (**g_301))))) && p_45) || g_254)));
        }


        ;
        (*l_236) = 5L;
        (*l_314) = (void*)0;

        ;
    }


    ;
    ;
    ;
    (*l_236) = func_46(((l_315 != l_315) == ((*l_330) = (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_44, ((l_323 = (l_321 = (void*)0)) != (void*)0))), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_42, 0)), p_44)))))));

    ;
    ;
    return l_331;
}







static unsigned func_46(unsigned p_47)
{
    int *l_48 = &g_49;
    short *l_59 = &g_60;
    short *l_222 = &g_220;
    int **l_233 = &l_48;
    l_48 = (void*)0;

    ;
    for (p_47 = 9; (p_47 < 59); ++p_47)
    {
        int **l_215 = &l_48;
        short *l_219 = &g_220;
        short **l_221 = (void*)0;
        int l_223 = 6L;
        unsigned *l_226 = &g_227;
        unsigned *l_230 = &g_227;
        l_223 = ((g_58 = func_52(((*l_215) = func_55((l_59 = g_58), l_48)), g_72)) != (l_222 = l_219));

        ;
        ;
        if ((((((*l_226) = (safe_mul_func_int16_t_s_s((*g_58), (*g_58)))) & ((safe_mul_func_int8_t_s_s((p_47 != p_47), p_47)) ^ p_47)) != g_194) && ((void*)0 == l_230)))
        {
            int *l_231 = &g_195;
            (*l_231) = p_47;
        }
        else
        {
            int *l_232 = &l_223;
            l_232 = func_55(&g_60, (*l_215));

            ;
        }
        (*l_215) = &g_17;

        ;
        g_213 = (void*)0;

        ;
    }

    ;
    ;
    (*l_233) = &g_17;

    ;
    (*l_233) = func_55(&g_220, func_55(&g_60, &g_49));

    ;
    return (**l_233);
}







static short * func_52(int * p_53, int p_54)
{
    int *l_217 = (void*)0;
    int **l_216 = &l_217;
    short *l_218 = &g_60;
    (*l_216) = &g_49;

    ;
    return l_218;


}







static int * func_55(short * p_56, int * p_57)
{
    int l_65 = 0x98093AF8L;
    unsigned short *l_73 = &g_74;
    unsigned l_124 = 3UL;
    short **l_155 = &g_58;
    if ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((0x64E48C0CL ^ l_65) || ((safe_mul_func_int16_t_s_s((l_65 < (p_57 != (void*)0)), (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(g_49, (l_65 ^ g_72))), 2)))) > ((*l_73) = 65535UL))), g_49)), g_49)))
    {
        unsigned char *l_81 = &g_82;
        unsigned short **l_87 = &l_73;
        short * const l_88 = (void*)0;
        int l_89 = 0x627F1A9FL;
        int l_122 = 0x699CBFF9L;
        int *l_135 = &l_65;
        if ((safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_81) = l_65), 1)), (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((((((*l_87) = p_56) != p_56) == (g_72 & g_60)) < 0L) ^ (((void*)0 == l_88) || l_89)) == l_65), 0)), 0xBC4AL)))) || 9UL), l_89)))
        {
            int *l_91 = &g_49;
            int **l_90 = &l_91;
            (*l_90) = &l_89;

            ;
            (*l_91) = (**l_90);
        }
        else
        {
            int l_92 = 1L;
            int *l_93 = &l_89;
            int **l_136 = &l_93;
            (*l_93) = l_92;
            if (l_89)
            {
                (*l_93) = l_65;
            }
            else
            {
                char l_94 = 0L;
                unsigned l_104 = 0xA66835ACL;
                int **l_112 = &l_93;
                char *l_115 = (void*)0;
                char *l_116 = &l_94;
                unsigned short l_125 = 0xFDFBL;
                const int *l_129 = &l_89;
                (*l_93) = l_94;
                for (g_60 = 23; (g_60 > 22); g_60 = safe_sub_func_int8_t_s_s(g_60, 5))
                {
                    unsigned l_103 = 0x82577C8AL;
                    int l_111 = 0x175669BAL;
                    for (l_89 = 0; (l_89 <= 6); l_89 = safe_add_func_int32_t_s_s(l_89, 7))
                    {
                        l_111 = (safe_lshift_func_uint16_t_u_s(l_94, (safe_mod_func_uint16_t_u_u(((l_103 < (&p_57 != (void*)0)) < l_104), (safe_sub_func_uint8_t_u_u((&g_60 == p_56), (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(((*l_81) = g_60), (g_49 || (-8L)))) == g_60), 4))))))));
                    }
                }
                (*l_112) = (void*)0;

                ;
                if ((g_72 == ((g_72 == (safe_lshift_func_int16_t_s_u(0x3D8BL, 15))) | ((*l_116) = (l_89 | g_72)))))
                {
                    l_65 = g_74;
                    l_93 = p_57;


                    (*l_112) = &g_49;

                    ;
                    (**l_112) = (**l_112);
                }
                else
                {
                    int l_121 = 0x267AFBDFL;
                    short **l_127 = &g_58;
                    g_49 = 0L;
                    if ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_89 = g_82) | (g_82 & (l_121 & g_49))), l_122)), g_60)))
                    {
                        int l_123 = (-3L);
                        int *l_126 = &l_122;
                        short ***l_128 = &l_127;
                        const int **l_130 = &l_129;
                        l_124 = l_123;
                        (*l_126) = l_125;
                        (*l_128) = l_127;
                        (*l_130) = l_129;
                    }
                    else
                    {
                        (*l_112) = &g_49;

                        ;
                        (*l_112) = &g_17;

                        ;
                    }

                    ;
                    if (g_74)
                    {
                        int l_133 = 1L;
                        int *l_134 = &l_65;
                        (*l_134) = (((253UL ^ g_72) <= (safe_rshift_func_uint16_t_u_u(l_121, l_124))) > (l_133 > l_65));
                        (*l_112) = l_93;
                    }
                    else
                    {
                        (*l_112) = (l_135 = &g_49);

                        ;
                        ;
                    }

                    ;
                    ;
                    (*l_112) = p_57;


                }


                ;
            }


            ;
            (*l_136) = l_93;
        }


        ;
    }
    else
    {
        short ***l_137 = (void*)0;
        short **l_139 = &g_58;
        short ***l_138 = &l_139;
        const int *l_152 = &l_65;
        const int ** const l_151 = &l_152;
        char * const *l_203 = &g_189;
        int *l_214 = &g_195;
        (*l_138) = &g_58;
        for (l_124 = 24; (l_124 > 5); l_124--)
        {
            int *l_142 = &l_65;
            int **l_143 = &l_142;
            int *l_144 = &l_65;
            int **l_145 = &l_144;
            (*l_143) = l_142;
            (*l_145) = ((*l_143) = l_144);
            (*l_143) = (void*)0;

            ;
        }
        for (g_74 = 28; (g_74 >= 56); g_74++)
        {
            unsigned l_150 = 3UL;
            short l_175 = 0x32FAL;
            char *l_187 = &g_188;
            int l_204 = 0L;
        }
        return l_214;


    }


    return p_57;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
