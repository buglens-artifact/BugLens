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



static volatile unsigned g_15 = 0x0B101AAEL;
static int g_18 = 0x0BB8BFFBL;
static unsigned g_34 = 4294967289UL;
static char g_61 = 0L;
static int g_72 = 0x7FD326D3L;
static short g_85 = 0xDE17L;
static char g_87 = 0x6FL;
static long long g_90 = (-5L);
static unsigned short g_109 = 65526UL;
static unsigned short g_111 = 0x0912L;
static unsigned short *g_127 = &g_109;
static volatile short *g_146 = (void*)0;
static volatile short **g_145 = &g_146;
static short g_158 = 7L;
static int *g_172 = &g_72;
static const int g_192 = 0x0F894422L;
static unsigned g_221 = 0x794C979CL;
static char *g_254 = &g_61;
static int g_257 = (-2L);
static int * const g_256 = &g_257;
static long long g_281 = 0xA332A19252623D08LL;
static unsigned long long g_300 = 18446744073709551615UL;
static unsigned long long g_302 = 0x66E90E1A3B808F38LL;
static unsigned long long g_304 = 1UL;
static unsigned g_397 = 18446744073709551611UL;
static long long ***g_514 = (void*)0;
static int *g_617 = &g_257;
static volatile char g_627 = 0L;
static const volatile char *g_626 = &g_627;
static const volatile char **g_625 = &g_626;
static const volatile char ***g_624 = &g_625;
static int *g_654 = (void*)0;
static int **g_680 = &g_172;
static int ** const *g_679 = &g_680;
static unsigned g_695 = 2UL;
static long long g_707 = 0xF5CD7B713EA96C5FLL;
static short *g_721 = &g_158;
static short **g_720 = &g_721;
static long long g_740 = 1L;
static unsigned short g_784 = 1UL;
static int g_786 = (-1L);
static unsigned char g_789 = 8UL;
static unsigned char *g_788 = &g_789;
static unsigned char **g_787 = &g_788;



static unsigned char func_1(void);
static int * func_2(short p_3, char p_4, char p_5, int * p_6);
static short func_7(int p_8);
static const int func_10(unsigned char p_11, int * p_12);
static const long long func_13(int p_14);
static char func_21(const unsigned p_22, const int * p_23, unsigned p_24, int * const p_25);
static unsigned func_26(char p_27, unsigned p_28, short p_29);
static char func_30(int * p_31, char p_32, unsigned p_33);
static int func_41(int * p_42, short p_43, const unsigned p_44, long long p_45, const unsigned char p_46);
static int * func_48(int * p_49, unsigned short p_50, short p_51);
static unsigned char func_1(void)
{
    unsigned l_9 = 4294967295UL;
    unsigned short *l_783 = &g_784;
    int *l_785 = &g_786;
    (**g_679) = func_2(func_7(l_9), ((safe_lshift_func_uint8_t_u_u(255UL, 5)) == (((safe_lshift_func_int8_t_s_u(l_9, (safe_lshift_func_int8_t_s_s(g_192, 3)))) && 0xE6L) || (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_9, (((*l_783) = 0UL) && l_9))), 0xDBD0L)), g_192)))), l_9, l_785);
    return (*l_785);
}







static int * func_2(short p_3, char p_4, char p_5, int * p_6)
{
    unsigned char * const *l_790 = &g_788;
    unsigned char * const **l_791 = &l_790;
    int *l_792 = &g_72;
    (*p_6) = (((void*)0 == &g_680) == p_4);
    if (((g_787 == ((*l_791) = l_790)) >= (-1L)))
    {
        (**g_679) = p_6;
    }
    else
    {
        return p_6;
    }
    return (**g_679);
}







static short func_7(int p_8)
{
    char l_653 = (-1L);
    int l_656 = (-5L);
    int **l_678 = (void*)0;
    int ***l_677 = &l_678;
    unsigned l_760 = 4294967295UL;
    l_656 = func_10(((func_13((0x89A6L > (g_15 ^ p_8))) && 7UL) <= (safe_div_func_uint8_t_u_u(l_653, (-1L)))), g_654);
    for (g_221 = 0; (g_221 != 39); g_221 = safe_add_func_uint16_t_u_u(g_221, 7))
    {
        unsigned l_659 = 0UL;
        int l_759 = 0xE0B7027EL;
        if (l_659)
            break;
        for (g_281 = 0; (g_281 == 24); g_281++)
        {
            int *l_664 = &g_18;
            unsigned long long *l_686 = (void*)0;
            unsigned long long **l_685 = &l_686;
            unsigned long long **l_688 = (void*)0;
            int *l_693 = &g_72;
            char * const l_745 = &g_87;
            if ((safe_rshift_func_int8_t_s_u((func_10(g_304, &g_72) & p_8), 7)))
            {
                unsigned short *l_671 = &g_111;
                unsigned long long *l_672 = (void*)0;
                unsigned long long *l_673 = (void*)0;
                unsigned long long *l_674 = &g_304;
                char *l_681 = (void*)0;
                char *l_682 = &g_87;
                unsigned long long **l_687 = (void*)0;
                unsigned short *l_691 = &g_109;
                int l_692 = (-1L);
                unsigned *l_694 = &g_695;
                const char l_704 = 0x24L;
                char l_712 = (-1L);
                short *l_719 = &g_158;
                short **l_718 = &l_719;
                (*g_617) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((*l_674) = ((l_671 != l_671) >= (*l_664))), p_8)), 4294967291UL));
                if ((safe_add_func_int64_t_s_s((((l_677 == g_679) > ((*l_682) = p_8)) == (((safe_rshift_func_int16_t_s_u(((l_687 = l_685) != l_688), (g_111 = g_221))) >= ((*l_694) = (g_34 = (func_10((((safe_mod_func_uint64_t_u_u((g_304 = (0x47E6L > ((*l_691) = (p_8 && (((+(func_10(g_109, l_664) & p_8)) != p_8) || p_8))))), p_8)) || l_659) && l_692), l_693) > l_692)))) < 0xD89BL)), 18446744073709551613UL)))
                {
                    long long *l_705 = (void*)0;
                    long long *l_706 = &g_707;
                    (*g_617) = p_8;
                    (*g_617) = (func_26((g_281 && (l_692 = p_8)), g_72, (safe_add_func_int64_t_s_s(((*l_706) = (g_90 = (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((((((!(func_10(g_90, l_694) ^ (safe_sub_func_uint16_t_u_u(p_8, p_8)))) <= g_90) && g_302) && 1L) == 0UL), 7)) >= l_704), p_8)))), p_8))) || 1UL);
                }
                else
                {
                    int *l_713 = &l_656;
                    for (l_656 = (-18); (l_656 != 23); l_656++)
                    {
                        (*l_664) = (safe_sub_func_int32_t_s_s((*g_617), g_257));
                        (**g_679) = &l_692;
                    }
                    if (l_712)
                        continue;
                    (*g_680) = &l_692;
                    if (l_692)
                        continue;
                }
                for (g_109 = (-3); (g_109 == 31); g_109 = safe_add_func_int64_t_s_s(g_109, 1))
                {
                    for (l_692 = 17; (l_692 != 29); l_692++)
                    {
                        long long l_722 = (-6L);
                        (*l_693) = p_8;
                        (*l_693) = (0L > ((g_397 | l_659) != p_8));
                        (*g_617) = (((((g_720 = l_718) != &g_721) && l_722) | (*l_664)) < (((*g_721) >= l_722) ^ 0xF80A275DAFDDA69ALL));
                    }
                }
            }
            else
            {
                unsigned short l_727 = 65534UL;
                for (g_72 = 0; (g_72 == (-19)); g_72--)
                {
                    (*l_664) = (safe_rshift_func_uint16_t_u_s(9UL, l_727));
                }
                (*l_693) = (*l_693);
                for (g_707 = 0; (g_707 != (-18)); --g_707)
                {
                    int *l_730 = &l_656;
                    (*g_680) = l_730;
                    for (g_90 = 5; (g_90 <= 11); g_90 = safe_add_func_uint32_t_u_u(g_90, 4))
                    {
                        long long *l_739 = &g_740;
                        int l_748 = (-1L);
                        unsigned long long *l_751 = &g_302;
                        unsigned short *l_752 = (void*)0;
                        unsigned short *l_753 = &g_111;
                        (*g_617) = ((safe_div_func_int8_t_s_s((p_8 != (p_8 || (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((*l_730), p_8)), p_8)))), 255UL)) == 0xD8L);
                        (*g_256) = (safe_lshift_func_uint16_t_u_s(((*l_753) = ((safe_rshift_func_uint16_t_u_s(((void*)0 == l_745), 14)) >= ((*l_664) == (safe_div_func_uint64_t_u_u(p_8, (l_748 ^ (safe_div_func_uint32_t_u_u((l_727 || ((*l_751) = (func_10((*l_730), (**g_679)) ^ 18446744073709551615UL))), p_8)))))))), p_8));
                    }
                }
            }
            if (p_8)
                continue;
            for (g_257 = 0; (g_257 == (-1)); g_257 = safe_sub_func_int32_t_s_s(g_257, 9))
            {
                short **l_758 = &g_721;
                int l_770 = (-1L);
                for (g_158 = 0; (g_158 >= (-1)); g_158--)
                {
                    l_759 = ((*l_693) = (((p_8 <= (l_758 != (void*)0)) ^ 7UL) != (*g_617)));
                    l_760 = (*g_617);
                    (*g_680) = l_693;
                    (*g_172) = p_8;
                }
                for (g_87 = 0; (g_87 <= 15); g_87++)
                {
                    short **l_769 = &g_721;
                    (*l_693) = (p_8 != (safe_div_func_int64_t_s_s((p_8 && (g_740 = ((*l_693) | p_8))), l_770)));
                }
            }
        }
    }
    return p_8;
}







static const int func_10(unsigned char p_11, int * p_12)
{
    const int l_655 = 0x288B95FDL;
    p_12 = (void*)0;
    return l_655;
}







static const long long func_13(int p_14)
{
    int l_16 = 0xB5C6F8B8L;
    int *l_17 = &g_18;
    char *l_215 = &g_61;
    unsigned *l_220 = &g_221;
    (*l_17) = l_16;
    (*g_256) = (safe_sub_func_int8_t_s_s(func_21(func_26(((*l_215) = func_30(&g_18, g_34, (safe_lshift_func_int8_t_s_s(p_14, 4)))), ((*l_220) = (~((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((p_14 == ((void*)0 != &g_172)), p_14)), p_14)) < g_192))), p_14), l_17, l_16, g_256), p_14));
    return p_14;
}







static char func_21(const unsigned p_22, const int * p_23, unsigned p_24, int * const p_25)
{
    unsigned short **l_262 = &g_127;
    unsigned short **l_264 = (void*)0;
    int *l_275 = (void*)0;
    int l_276 = 0xC5609187L;
    short l_278 = 0xB303L;
    unsigned char l_335 = 1UL;
    int *l_349 = &g_18;
    int l_350 = 0x0011547DL;
    short l_352 = 0x2F35L;
    int *l_376 = &g_72;
    short *l_396 = &l_352;
    char * const l_409 = (void*)0;
    short ** const *l_491 = (void*)0;
    unsigned l_503 = 1UL;
    int *l_504 = (void*)0;
    char **l_508 = &g_254;
    int **l_512 = &l_376;
    int ***l_511 = &l_512;
    unsigned l_549 = 0xCF91C0B2L;
    long long *l_557 = (void*)0;
    int *l_602 = &g_18;
    if (((*p_25) = (*p_25)))
    {
        unsigned short ***l_263 = &l_262;
        unsigned short ***l_265 = (void*)0;
        unsigned short ***l_266 = &l_264;
        int l_277 = 0x1029D39CL;
        long long *l_279 = &g_90;
        long long *l_280 = &g_281;
        char *l_288 = &g_87;
        unsigned short **l_293 = &g_127;
        unsigned short **l_294 = &g_127;
        unsigned short **l_295 = &g_127;
        unsigned short **l_296 = &g_127;
        unsigned short **l_297 = (void*)0;
        unsigned short *l_298 = &g_111;
        unsigned long long *l_299 = &g_300;
        unsigned long long *l_301 = &g_302;
        unsigned long long *l_303 = &g_304;
        int *l_307 = &g_18;
        long long l_310 = 0x09B9CACC8E27A598LL;
        l_277 = (p_22 && ((*l_280) = ((*l_279) = ((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((((((*l_263) = l_262) != ((*l_266) = l_264)) < g_221) || ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0xB5AAL, (safe_add_func_int64_t_s_s(l_277, 18446744073709551607UL)))), 15)) && 0L)) <= l_278), g_192)), 8)) < l_277))));
        (*l_307) = (l_277 = ((*p_25) = (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((*l_288) = (p_24 & p_22)), g_158)), 2)) && (((*l_303) = ((*l_301) = ((*l_299) = (safe_add_func_uint64_t_u_u(p_22, ((*l_280) = (safe_sub_func_uint64_t_u_u(((&g_109 != (l_298 = &g_109)) | p_24), 0xCAB0785E97A1A073LL)))))))) && ((safe_lshift_func_uint16_t_u_s(65535UL, 1)) || 5L))), 3))));
        if ((((safe_lshift_func_int8_t_s_s(p_24, (func_26(((*l_307) ^ (((*l_303) = g_61) <= 0UL)), p_22, l_310) >= (2L < p_24)))) == p_22) != 1UL))
        {
            int *l_313 = &g_257;
            const int *l_316 = (void*)0;
            const int **l_315 = &l_316;
            int **l_317 = &g_172;
            for (g_304 = 8; (g_304 <= 52); g_304 = safe_add_func_int8_t_s_s(g_304, 6))
            {
                int **l_314 = &l_313;
                (*p_25) = ((void*)0 != (*g_145));
                (*l_314) = l_313;
                l_315 = &p_23;
            }
            (*l_317) = p_25;
        }
        else
        {
            volatile short ***l_320 = (void*)0;
            volatile short ***l_321 = &g_145;
            int *l_328 = &g_18;
            for (l_276 = 10; (l_276 < (-29)); l_276 = safe_sub_func_uint16_t_u_u(l_276, 6))
            {
                l_275 = (void*)0;
                return p_22;
            }
            (*l_321) = &g_146;
            (*g_256) = func_26((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_26(g_72, g_158, p_22), 1)), (safe_add_func_int16_t_s_s((l_328 != (void*)0), ((safe_rshift_func_uint16_t_u_s((g_34 < ((*l_299) = (g_111 & (safe_rshift_func_uint16_t_u_u(p_24, p_22))))), p_24)) && 4L))))) >= g_111) & (*l_307)), (*l_328), (*l_307));
            (*l_307) = 0x140DCD40L;
        }
        (*l_307) = (*l_307);
    }
    else
    {
        char *l_340 = &g_61;
        int l_341 = (-1L);
        int **l_344 = (void*)0;
        int **l_345 = (void*)0;
        int **l_346 = &l_275;
        unsigned *l_351 = &g_34;
        short l_469 = 1L;
        unsigned char *l_544 = &l_335;
        unsigned short *l_545 = (void*)0;
        unsigned short *l_546 = &g_111;
        (*p_25) = (((safe_mod_func_int16_t_s_s(l_335, (safe_rshift_func_int8_t_s_u((0xE2E7L > (((*l_351) = ((safe_mod_func_int8_t_s_s(((*l_340) = p_22), ((-1L) ^ l_341))) ^ (safe_lshift_func_int16_t_s_s(p_22, 10)))) != g_304)), g_304)))) & (*l_349)) ^ p_22);
        if ((p_22 ^ l_352))
        {
            short *l_357 = (void*)0;
            short *l_358 = (void*)0;
            short *l_359 = &l_278;
            const int l_360 = 0xA6EC7818L;
            long long *l_361 = &g_281;
            unsigned char *l_362 = &l_335;
            unsigned long long *l_363 = &g_304;
            int l_374 = (-6L);
            unsigned *l_380 = &g_34;
            int l_414 = 0x6E85BE0AL;
            unsigned l_446 = 18446744073709551612UL;
            unsigned long long **l_476 = (void*)0;
            long long l_483 = 0xAF18A5AB74BA3209LL;
            short ** const l_490 = &l_357;
            short ** const *l_489 = &l_490;
            char **l_509 = &l_340;
            (*l_346) = &l_276;
            if ((safe_div_func_uint32_t_u_u((((*l_349) | ((safe_sub_func_uint64_t_u_u(l_360, ((*l_363) = 1UL))) > (safe_sub_func_int64_t_s_s(((*l_361) = (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-5L), 4)), 0x336BL))), g_34)))) != (-1L)), (*g_256))))
            {
                unsigned short *l_372 = (void*)0;
                unsigned short *l_373 = &g_111;
                unsigned short ***l_375 = &l_264;
                int l_379 = 1L;
                int l_382 = 0xE0C4DDB9L;
                long long **l_387 = &l_361;
                int *l_389 = &l_379;
                (*l_346) = (void*)0;
                l_374 = (*p_25);
                if ((((*l_375) = &g_127) == (void*)0))
                {
                    unsigned **l_381 = &l_380;
                    int *l_383 = (void*)0;
                    if ((l_360 || p_22))
                    {
                        (*p_25) = (*p_25);
                        (*p_25) = (*l_349);
                        (*p_25) = 1L;
                        return p_24;
                    }
                    else
                    {
                        int *l_384 = &g_257;
                        (*l_349) = 0x5E26B5C4L;
                        l_384 = &g_72;
                        (*l_376) = (*g_256);
                    }
                }
                else
                {
                    (*l_346) = &l_276;
                    if (l_379)
                    {
                        (*l_346) = &g_257;
                    }
                    else
                    {
                        return p_24;
                    }
                    (*l_346) = &l_374;
                }
                if ((*p_25))
                {
                    for (g_281 = 0; (g_281 == 4); ++g_281)
                    {
                        long long ***l_388 = &l_387;
                        (*l_388) = l_387;
                        (*g_256) = (*p_25);
                    }
                }
                else
                {
                    unsigned char l_392 = 1UL;
                    short **l_395 = &l_358;
                    char *l_410 = (void*)0;
                    g_172 = &l_382;
                    if (l_360)
                    {
                        return g_61;
                    }
                    else
                    {
                        (*l_346) = &g_18;
                    }
                    l_389 = ((*l_346) = &g_72);
                    if ((*g_256))
                    {
                        unsigned l_398 = 0x072548CCL;
                        char **l_411 = &l_340;
                        char **l_412 = &l_410;
                        unsigned short *l_413 = &g_109;
                        int **l_415 = &l_376;
                        (*l_376) = l_398;
                        (**l_346) = (*g_172);
                        (*l_346) = &l_276;
                        (*l_415) = p_25;
                    }
                    else
                    {
                        unsigned short *l_416 = &g_111;
                        unsigned short **l_417 = &g_127;
                        unsigned short **l_418 = &l_416;
                        const int l_427 = 0x0B101C0AL;
                        (*l_346) = &g_72;
                        (*p_25) = (p_22 & ((((safe_add_func_uint64_t_u_u(g_221, 0x122C96B1DF589D1ELL)) ^ (((safe_mod_func_uint64_t_u_u(p_22, (safe_lshift_func_uint16_t_u_u(func_26((safe_rshift_func_int8_t_s_s(((*l_389) & (l_360 == (*p_25))), 3)), g_158, (**l_346)), p_22)))) && 0x4EL) | l_392)) == l_427) && (-1L)));
                    }
                }
            }
            else
            {
                unsigned l_430 = 18446744073709551607UL;
                int *l_460 = &l_414;
                const char l_473 = 0xF8L;
                unsigned short * const *l_479 = &g_127;
                int **l_513 = &l_349;
                if ((safe_lshift_func_uint8_t_u_u((*l_275), ((void*)0 == l_346))))
                {
                    int *l_445 = &l_276;
                    l_430 = 0x908F4F7AL;
                    (*l_346) = &g_18;
                    (*l_376) = 0xED84E948L;
                    if (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(18446744073709551614UL, (safe_sub_func_int64_t_s_s((((255UL | (safe_div_func_int8_t_s_s(((void*)0 == &g_281), 0x94L))) < l_414) > 0x36L), ((safe_rshift_func_int16_t_s_s(p_24, 8)) || l_446))))), 6)) || g_281) > 3UL), p_22)), 3)) | 0UL))
                    {
                        (*l_376) = (((+(((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u((p_22 < l_374), p_24)) >= g_15), ((safe_mod_func_uint32_t_u_u(l_430, ((*l_351) = (safe_mod_func_uint8_t_u_u((8UL ^ l_430), p_22))))) == ((safe_div_func_uint32_t_u_u(0x39703B16L, (**l_346))) | p_24)))) <= 1UL) >= g_304)) < 0x94L) && p_22);
                        return (*l_275);
                    }
                    else
                    {
                        l_445 = &g_18;
                    }
                }
                else
                {
                    int *l_459 = (void*)0;
                    int l_484 = 1L;
                    short ** const l_488 = &l_357;
                    short ** const *l_487 = &l_488;
                    for (g_158 = 13; (g_158 <= 3); --g_158)
                    {
                        l_376 = l_460;
                    }
                    (*p_25) = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((l_374 && ((*l_376) && (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_26(l_469, (safe_unary_minus_func_uint16_t_u(((p_24 && p_22) < (safe_add_func_uint8_t_u_u(p_22, ((l_414 = p_22) ^ 18446744073709551615UL)))))), p_24), 1)), 0xAC73L)))), l_473)) | 0x333EA55186942E31LL), 0x4F4BL));
                    for (l_446 = 0; (l_446 >= 1); l_446 = safe_add_func_int8_t_s_s(l_446, 1))
                    {
                        g_172 = (l_275 = l_459);
                        l_476 = (void*)0;
                    }
                    if ((l_484 = ((((*l_349) = (((*l_363) = (*l_460)) && ((*l_363) = (g_192 <= (l_479 == &g_127))))) | (p_24 ^ (g_302 < (safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int8_t_s_s(g_109, l_414)) | 1UL)))))) < l_483)))
                    {
                        (*p_25) = (safe_sub_func_uint8_t_u_u((l_487 == (l_491 = l_489)), ((*l_340) = (((void*)0 == &g_254) <= l_414))));
                        return p_22;
                    }
                    else
                    {
                        long long l_494 = 0x58925F25E432309CLL;
                        int *l_505 = &g_18;
                        const int *l_507 = &g_192;
                        const int **l_506 = &l_507;
                        char ***l_510 = &l_508;
                        (*l_460) = ((*l_349) = (((((*p_25) = (*l_460)) & (safe_rshift_func_uint16_t_u_s(p_24, 6))) == ((l_494 > (((+((((p_24 > ((*l_362) = (((!p_24) || (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_24, (*l_460))), 0UL))) == 0x450BB2A901A7BE7ALL))) | (*l_460)) || 0x4A44ECC7L) & p_24)) && g_192) < 0xCE31EFFFL)) > (*l_349))) || l_494));
                        (*l_506) = p_23;
                        (*l_506) = l_460;
                        (*l_510) = (l_509 = l_508);
                    }
                }
                (*l_513) = p_25;
            }
        }
        else
        {
            int *l_515 = &g_257;
            if ((g_514 != g_514))
            {
                int *l_516 = (void*)0;
                unsigned char *l_517 = &l_335;
                unsigned **l_522 = &l_351;
                g_172 = l_516;
                (*p_25) = 1L;
                (*l_376) = (((*l_517) = g_257) & (((*l_522) = &g_221) != (void*)0));
            }
            else
            {
                int l_528 = 1L;
                (*p_25) = (safe_add_func_int8_t_s_s((((*l_340) = (p_22 && 0x15L)) || (l_528 = (p_22 == (p_24 == l_528)))), p_24));
                return (*l_515);
            }
            if ((*p_25))
            {
                const int *l_530 = (void*)0;
                const int **l_529 = &l_530;
                (*l_529) = p_23;
            }
            else
            {
                long long l_533 = 2L;
                for (l_503 = 16; (l_503 != 34); l_503 = safe_add_func_int32_t_s_s(l_503, 9))
                {
                    int *l_536 = &g_72;
                    (*g_256) = (*l_349);
                    if (l_533)
                    {
                        const int *l_535 = &l_350;
                        const int **l_534 = &l_535;
                        (*l_534) = p_23;
                        l_515 = &g_18;
                        if ((*p_23))
                            continue;
                    }
                    else
                    {
                        (*l_346) = ((**l_511) = l_536);
                    }
                }
                (*g_256) = (((*p_25) && 0x2752BDE5L) ^ (4UL || l_533));
            }
        }
        (*p_25) = (safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((*l_546) = (safe_rshift_func_uint8_t_u_u(((*l_544) = 5UL), 1))) > p_22), 0)), 5))));
    }
    (*g_256) = (safe_lshift_func_int8_t_s_u(((*l_349) <= l_549), 2));
    if ((*g_256))
    {
        long long *l_556 = &g_281;
        int *l_561 = &g_18;
        unsigned long long l_568 = 0x8345F7949768348ELL;
        unsigned char l_606 = 0xB8L;
        char ***l_623 = &l_508;
        for (p_24 = 0; (p_24 <= 47); p_24++)
        {
            char l_558 = 0L;
            unsigned long long *l_565 = &g_302;
            unsigned long long **l_564 = &l_565;
            unsigned *l_566 = &g_221;
            unsigned *l_567 = &g_34;
            (*l_561) = func_26((((*l_567) = ((*l_566) = (safe_rshift_func_uint8_t_u_s(((g_87 = ((safe_sub_func_int8_t_s_s(((l_556 != l_557) >= (l_558 <= (safe_mod_func_uint32_t_u_u(1UL, (*p_25))))), 9L)) | p_22)) | 0UL), 2)))) <= 0x5B4DB022L), g_302, l_568);
            if ((*p_23))
            {
                unsigned char *l_577 = &l_335;
                int l_580 = 1L;
                char l_600 = 0xF6L;
                for (l_278 = 0; (l_278 >= (-10)); --l_278)
                {
                    unsigned short l_571 = 0xCAB3L;
                    unsigned char *l_572 = (void*)0;
                    unsigned char **l_573 = &l_572;
                    unsigned char *l_575 = (void*)0;
                    unsigned char **l_574 = &l_575;
                    unsigned char **l_576 = (void*)0;
                    unsigned short *l_578 = &g_111;
                    int l_579 = 0xF5C11B6EL;
                    int **l_581 = &l_349;
                    int *l_589 = (void*)0;
                    (*l_581) = ((**l_511) = l_566);
                    if ((g_34 < l_558))
                    {
                        unsigned short l_588 = 65535UL;
                        (*l_561) = l_588;
                    }
                    else
                    {
                        char *l_598 = (void*)0;
                        char *l_599 = (void*)0;
                        (**l_512) = (*g_256);
                        (*g_256) = (p_22 >= 0UL);
                        (*g_256) = (*g_256);
                    }
                }
            }
            else
            {
                long long l_601 = 6L;
                int *l_603 = &g_257;
                (**l_511) = l_602;
                (*l_512) = l_603;
                if ((safe_div_func_int64_t_s_s(l_606, 0xF36D592E75AAC8FBLL)))
                {
                    const int l_620 = (-1L);
                    const int l_621 = (-8L);
                    for (g_158 = (-23); (g_158 == 19); g_158++)
                    {
                        int *l_609 = (void*)0;
                        short l_610 = 8L;
                        short *l_618 = &l_278;
                        char *l_619 = &g_61;
                        (*p_25) = l_620;
                    }
                    if ((*p_23))
                        break;
                }
                else
                {
                    int *l_622 = (void*)0;
                    (*l_512) = &g_18;
                    if ((*g_256))
                        break;
                }
            }
            (*g_617) = (*g_617);
        }
    }
    else
    {
        unsigned l_634 = 8UL;
        int *l_641 = &g_72;
        unsigned long long l_648 = 0x0F161A77D7B0871BLL;
        unsigned long long l_649 = 5UL;
        int *l_650 = &l_350;
        for (l_335 = 0; (l_335 < 31); ++l_335)
        {
            unsigned short *l_635 = &g_109;
            int **l_636 = (void*)0;
            int **l_637 = (void*)0;
            int **l_638 = &g_617;
            (*p_25) = (safe_sub_func_int16_t_s_s(((*l_396) = (safe_rshift_func_uint16_t_u_s(((*l_635) = l_634), 15))), (((*l_638) = &g_18) != p_23)));
            for (g_281 = 0; (g_281 != (-15)); g_281 = safe_sub_func_int32_t_s_s(g_281, 8))
            {
                (*l_512) = (g_172 = &g_18);
                if ((*g_256))
                    break;
                if ((*g_256))
                {
                    return p_22;
                }
                else
                {
                    l_650 = (**l_511);
                    (*l_638) = &g_18;
                }
            }
        }
    }
    return p_22;
}







static unsigned func_26(char p_27, unsigned p_28, short p_29)
{
    int *l_222 = &g_72;
    int **l_223 = &g_172;
    const char *l_233 = &g_61;
    char *l_249 = &g_87;
    char **l_248 = &l_249;
    char *l_251 = (void*)0;
    char **l_250 = &l_251;
    char *l_253 = &g_61;
    char **l_252 = &l_253;
    unsigned short *l_255 = &g_109;
    (*l_223) = l_222;
    if ((**l_223))
    {
        int *l_224 = &g_18;
        l_224 = &g_72;
        (*g_172) = ((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((*l_224), (safe_lshift_func_uint8_t_u_u(0x05L, 2)))), 0x8D450DD38C2C0AFCLL)) || p_29);
        (*l_223) = &g_72;
    }
    else
    {
        (*l_223) = (void*)0;
        for (g_158 = (-29); (g_158 == (-7)); g_158++)
        {
            char *l_244 = &g_61;
            long long *l_247 = &g_90;
            (*l_222) = (((*l_247) = ((g_61 || (safe_lshift_func_int8_t_s_s(((*l_244) = ((safe_rshift_func_int8_t_s_u((g_85 | g_192), 7)) > 0x0EB3L)), p_28))) <= (((safe_div_func_int16_t_s_s(((*l_222) & p_27), p_29)) && 0xB260L) == 0x552DD0EBL))) == g_34);
        }
    }
    (*l_222) = (0UL & ((*l_255) = (((*l_252) = ((*l_250) = ((*l_248) = &p_27))) != (g_254 = &p_27))));
    return g_15;
}







static char func_30(int * p_31, char p_32, unsigned p_33)
{
    int *l_47 = &g_18;
    unsigned long long l_54 = 0x7A0211E9A9D01274LL;
    int *l_60 = &g_18;
    int **l_59 = &l_60;
    const short l_188 = (-1L);
    char *l_190 = &g_61;
    const int *l_191 = &g_192;
    const int **l_193 = (void*)0;
    const int *l_195 = &g_72;
    const int **l_194 = &l_195;
    long long * const l_196 = &g_90;
    unsigned l_203 = 0x1F07F589L;
    unsigned short *l_204 = &g_109;
    unsigned short l_209 = 65535UL;
    (*g_172) = ((safe_rshift_func_int8_t_s_u(((*l_190) = (safe_add_func_int32_t_s_s((!((*l_47) = func_41(l_47, ((((*l_59) = func_48(p_31, (*l_47), (((((*p_31) == p_32) == (safe_rshift_func_uint16_t_u_u(l_54, ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((g_61 = (&g_18 != ((*l_59) = l_47))) != g_15), g_34)), g_18)) > (*l_47))))) >= (*l_47)) <= p_32))) == p_31) <= g_158), l_188, g_158, g_158))), l_188))), p_32)) ^ g_158);
    (*l_194) = (l_191 = (void*)0);
    if ((p_32 | (((void*)0 != l_196) | func_41((*l_59), ((g_111 | (safe_lshift_func_uint16_t_u_u(((((*l_47) = (p_32 < (safe_lshift_func_uint16_t_u_u((p_32 != (safe_lshift_func_uint16_t_u_s(((*l_204) = l_203), (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(p_33, (*g_172))) && 0xE4D920E91C3CDCB4LL), p_32))))), p_32)))) > 6L) > 7L), 14))) | p_33), g_72, l_209, g_15))))
    {
        (*p_31) = ((*l_60) = 0xBADC3C1FL);
    }
    else
    {
        const int **l_212 = (void*)0;
        (*p_31) = ((g_61 > (p_32 & ((void*)0 != &p_33))) | ((void*)0 != l_212));
        (*l_59) = p_31;
        p_31 = p_31;
        for (g_18 = 11; (g_18 >= 16); g_18 = safe_add_func_uint16_t_u_u(g_18, 5))
        {
            (*l_59) = &g_72;
        }
    }
    return g_15;
}







static int func_41(int * p_42, short p_43, const unsigned p_44, long long p_45, const unsigned char p_46)
{
    int l_189 = (-3L);
    (*g_172) = (*g_172);
    return l_189;
}







static int * func_48(int * p_49, unsigned short p_50, short p_51)
{
    unsigned l_64 = 0xA5D0C9ADL;
    int *l_71 = &g_72;
    short **l_147 = (void*)0;
    if (((*l_71) = (safe_add_func_uint8_t_u_u((((g_15 > ((0x771FDA6603FA8B74LL > (l_64 > g_34)) & (safe_add_func_uint16_t_u_u(l_64, (l_64 == p_50))))) >= (safe_div_func_int32_t_s_s(0xDE97EE8CL, ((*p_49) = (safe_add_func_int32_t_s_s(((p_51 < p_51) < 0x34L), g_61)))))) == l_64), g_61))))
    {
        unsigned l_78 = 0x7029BB2DL;
        int l_88 = 5L;
        (*p_49) = (*p_49);
        for (g_34 = 0; (g_34 == 30); g_34 = safe_add_func_uint32_t_u_u(g_34, 5))
        {
            int **l_75 = &l_71;
            char *l_76 = (void*)0;
            char *l_77 = (void*)0;
            short *l_83 = (void*)0;
            short *l_84 = &g_85;
            char *l_86 = &g_87;
            (*l_75) = p_49;
            if (g_72)
                break;
            if (g_34)
                break;
            l_88 = (1L != (((g_61 > (*l_71)) < (((*l_86) = ((l_78 = g_72) != (p_51 | (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_61, ((*l_84) = ((*p_49) && (((g_61 ^ g_61) < p_50) && p_50))))), 2))))) || p_51)) >= 0xA00A4EDB9D72FAF7LL));
        }
    }
    else
    {
        long long *l_89 = &g_90;
        int l_96 = 0x9115BA09L;
        int *l_138 = &g_72;
        short *l_143 = &g_85;
        short **l_142 = &l_143;
        if (((&g_72 == (void*)0) & ((*l_89) = g_72)))
        {
            int **l_91 = &l_71;
            int ***l_92 = &l_91;
            (*l_91) = l_71;
            (*p_49) = g_34;
            (*l_92) = (void*)0;
        }
        else
        {
            int **l_93 = &l_71;
            const int l_121 = 0x760DC054L;
            (*l_93) = (void*)0;
            if (((safe_add_func_int16_t_s_s(g_61, l_96)) && (*p_49)))
            {
                for (g_61 = 0; (g_61 != 6); g_61++)
                {
                    int *l_99 = (void*)0;
                    l_99 = &g_72;
                }
            }
            else
            {
                unsigned l_100 = 4294967295UL;
                int * const *l_132 = (void*)0;
                unsigned l_136 = 0xD3BBE631L;
                short ***l_144 = &l_142;
                l_100 = ((*p_49) = (*p_49));
                for (g_18 = 0; (g_18 != (-7)); g_18 = safe_sub_func_int32_t_s_s(g_18, 8))
                {
                    unsigned short *l_107 = (void*)0;
                    unsigned short *l_108 = &g_109;
                    unsigned short *l_110 = &g_111;
                    g_72 = (p_51 > ((((*l_110) = ((*l_108) = (safe_add_func_uint8_t_u_u(1UL, g_72)))) | g_34) < (l_96 >= (safe_add_func_uint8_t_u_u(l_100, l_96)))));
                }
                if ((l_96 = ((g_109 | (safe_div_func_uint16_t_u_u(g_18, (g_85 | (+p_51))))) <= g_111)))
                {
                    int l_118 = 0x8B7E04BEL;
                    unsigned *l_124 = (void*)0;
                    unsigned *l_125 = (void*)0;
                    unsigned *l_126 = &l_100;
                    char *l_128 = &g_87;
                    int l_129 = 1L;
                    unsigned short *l_130 = &g_109;
                    int ***l_131 = &l_93;
                    int * const l_135 = (void*)0;
                    int * const *l_134 = &l_135;
                    int * const **l_133 = &l_134;
                    int *l_137 = (void*)0;
                    (*p_49) = (safe_add_func_uint16_t_u_u(l_118, ((*l_130) = ((l_129 = (safe_sub_func_int32_t_s_s((g_72 & l_121), (g_85 == (safe_lshift_func_int16_t_s_s(((((*l_126) = l_96) && (p_51 ^ ((g_127 = &p_50) != &g_109))) < ((*l_128) = g_109)), g_61)))))) >= 0xC8F0L))));
                    (*p_49) = (((*l_131) = (void*)0) != ((*l_133) = (l_132 = &p_49)));
                    p_49 = p_49;
                    l_129 = ((*p_49) = ((((***l_133) && g_90) != g_111) < (((l_136 && 0UL) & (p_51 != (**l_132))) | (p_50 && l_96))));
                }
                else
                {
                    unsigned short **l_141 = &g_127;
                    (*l_93) = l_138;
                    for (l_64 = 0; (l_64 > 54); l_64 = safe_add_func_uint16_t_u_u(l_64, 7))
                    {
                        (*l_93) = (void*)0;
                    }
                    (*l_138) = (&p_50 != ((*l_141) = &p_50));
                }
                (*l_144) = l_142;
            }
            g_18 = (((void*)0 != &p_51) == (g_145 != l_147));
        }
        for (p_50 = (-25); (p_50 < 43); p_50 = safe_add_func_int32_t_s_s(p_50, 9))
        {
            short *l_157 = &g_158;
            int l_164 = 5L;
            unsigned short l_177 = 0xFB31L;
            g_72 = ((*p_49) = ((*g_127) < (!p_50)));
        }
        for (g_87 = (-7); (g_87 == 5); g_87 = safe_add_func_int16_t_s_s(g_87, 9))
        {
            (*g_172) = (*p_49);
        }
        l_138 = (void*)0;
    }
    return &g_72;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
