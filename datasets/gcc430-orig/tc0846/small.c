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



static unsigned short g_8 = 0UL;
static char g_13 = 4L;
static char g_25 = 0x37L;
static char *g_24 = &g_25;
static int g_29 = (-1L);
static short g_31 = 0xB1D6L;
static int *g_68 = &g_29;
static int **g_67 = &g_68;
static long long g_80 = 5L;
static long long g_83 = 0L;
static unsigned short g_102 = 0x5344L;
static unsigned short g_104 = 1UL;
static unsigned short g_106 = 0xE4E4L;
static unsigned short *g_129 = &g_104;
static int g_136 = 0xC9109B52L;
static unsigned long long g_143 = 0x982E55E195D318EELL;
static unsigned g_169 = 0x6A3B4018L;
static int g_207 = 0x9AE18D8EL;
static int *g_211 = &g_29;
static unsigned char g_229 = 0xE3L;
static unsigned g_258 = 0UL;
static char g_329 = 1L;
static long long g_394 = 1L;
static long long g_405 = 1L;
static unsigned short **g_449 = &g_129;
static unsigned short ***g_448 = &g_449;
static unsigned short ***g_453 = &g_449;
static long long ***g_474 = (void*)0;
static unsigned char *g_493 = &g_229;
static int **g_502 = (void*)0;
static int g_525 = 0xF292C0D6L;
static int *g_524 = &g_525;



static unsigned func_1(void);
static int * func_2(unsigned p_3, int * p_4, char p_5, unsigned short p_6, unsigned char p_7);
static unsigned func_18(char * p_19, int * p_20, int p_21, int * p_22, long long p_23);
static char * func_34(long long p_35, unsigned p_36);
static char * func_37(int p_38);
static char * func_41(int * p_42, short p_43);
static long long func_51(int p_52, unsigned p_53, int ** p_54, int * p_55, short * p_56);
static int func_57(unsigned p_58, short * p_59, int ** p_60, unsigned long long p_61, int * p_62);
static short * func_63(int ** p_64, int ** p_65, short * p_66);
static short * func_70(int p_71, int p_72, unsigned long long p_73, short * p_74);
static unsigned func_1(void)
{
    int *l_9 = (void*)0;
    char *l_10 = (void*)0;
    char *l_11 = (void*)0;
    char *l_12 = &g_13;
    char **l_26 = &l_11;
    short *l_30 = &g_31;
    l_9 = func_2(g_8, l_9, ((*l_12) = 0x7AL), g_8, (+(safe_div_func_int32_t_s_s((l_9 != (void*)0), (safe_lshift_func_int16_t_s_u(((*l_30) = (func_18(g_24, l_9, (((*l_26) = &g_25) == &g_25), l_9, g_25) & 1UL)), g_29))))));
    return g_405;
}







static int * func_2(unsigned p_3, int * p_4, char p_5, unsigned short p_6, unsigned char p_7)
{
    int *l_44 = (void*)0;
    int ***l_69 = &g_67;
    long long *l_79 = &g_80;
    long long *l_81 = (void*)0;
    long long *l_82 = &g_83;
    short *l_84 = (void*)0;
    int l_503 = 0L;
    int *l_520 = (void*)0;
    char **l_523 = &g_24;
    long long l_527 = (-1L);
    unsigned long long *l_528 = &g_143;
    unsigned short ***l_531 = &g_449;
    (*g_524) = (((*l_528) = (safe_sub_func_uint64_t_u_u(((func_18(func_34(p_6, func_18(((*l_523) = func_37((((safe_div_func_uint64_t_u_u(func_18(func_41(l_44, (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u(p_5, p_6)) >= (safe_add_func_uint8_t_u_u(g_25, (func_51(func_57(g_29, func_63(&l_44, ((*l_69) = g_67), func_70((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((*l_82) = ((*l_79) = g_25)) > g_8), 7)) >= g_13), (*g_24))), (*g_68), p_5, l_84)), g_502, l_503, p_4), g_25, g_502, &g_29, l_84) == 0x6CA1EB8C3FE84135LL)))), p_7))), &l_503, g_329, l_520, p_7), 8UL)) && g_106) | p_6))), g_524, g_25, p_4, g_329)), p_4, p_7, p_4, l_527) ^ 18446744073709551615UL) | 1UL), p_3))) & g_25);
    for (g_104 = 0; (g_104 == 54); ++g_104)
    {
        (*g_524) = ((void*)0 != l_531);
    }
    return p_4;
}







static unsigned func_18(char * p_19, int * p_20, int p_21, int * p_22, long long p_23)
{
    int *l_28 = &g_29;
    int **l_27 = &l_28;
    (*l_27) = p_22;
    return g_25;
}







static char * func_34(long long p_35, unsigned p_36)
{
    char *l_526 = &g_329;
    return l_526;
}







static char * func_37(int p_38)
{
    int *l_521 = (void*)0;
    char *l_522 = &g_13;
    (*g_67) = l_521;
    return l_522;
}







static char * func_41(int * p_42, short p_43)
{
    int *l_515 = &g_207;
    int **l_516 = &l_515;
    int *l_517 = (void*)0;
    int l_518 = 0x76EDE2A5L;
    char *l_519 = &g_329;
    l_518 = (safe_mul_func_uint16_t_u_u((***g_453), (((*l_516) = l_515) != l_517)));
    return l_519;
}







static long long func_51(int p_52, unsigned p_53, int ** p_54, int * p_55, short * p_56)
{
    unsigned **l_505 = (void*)0;
    unsigned ***l_506 = &l_505;
    int l_509 = (-1L);
    char **l_510 = &g_24;
    char **l_512 = &g_24;
    char ***l_511 = &l_512;
    (*g_67) = (void*)0;
    (*g_67) = &p_52;
    (*l_506) = l_505;
    (*p_55) = (safe_add_func_int32_t_s_s(l_509, (l_510 != ((*l_511) = l_510))));
    return g_405;
}







static int func_57(unsigned p_58, short * p_59, int ** p_60, unsigned long long p_61, int * p_62)
{
    int *l_504 = &g_136;
    (*l_504) = 0x4654339FL;
    (*l_504) = (*l_504);
    return (*l_504);
}







static short * func_63(int ** p_64, int ** p_65, short * p_66)
{
    int l_167 = 0L;
    unsigned *l_168 = &g_169;
    char *l_172 = &g_13;
    unsigned long long l_173 = 0UL;
    int *l_348 = (void*)0;
    int l_360 = 0x25ABC53BL;
    unsigned long long *l_428 = &l_173;
    unsigned long long **l_427 = &l_428;
    unsigned l_432 = 0xFD7EBF04L;
    long long l_477 = 0x6306CAAE0C315EC5LL;
    int *l_480 = &l_360;
    unsigned char **l_491 = (void*)0;
    unsigned char **l_492 = (void*)0;
    unsigned char *l_496 = (void*)0;
    unsigned char *l_497 = &g_229;
    char l_498 = 0x53L;
    unsigned l_499 = 1UL;
    int l_500 = 0xC788502FL;
    int *l_501 = &l_167;
    if ((((safe_sub_func_uint32_t_u_u(((l_167 || ((((*l_168) = (0xD1C1305499C2BA90LL != l_167)) < (g_25 != ((l_167 <= (((safe_lshift_func_int16_t_s_s(func_18(l_172, &g_29, l_167, &l_167, l_167), 10)) || l_167) > l_167)) <= l_173))) > 5L)) && (-3L)), 0x12C33A15L)) <= 0xFEL) & g_104))
    {
        int l_181 = 0xACB3E338L;
        int *l_182 = &l_167;
        int *l_183 = &l_167;
        char *l_203 = (void*)0;
        for (g_31 = (-21); (g_31 >= 21); g_31++)
        {
            unsigned short **l_176 = &g_129;
            unsigned short ***l_177 = &l_176;
            int *l_180 = &g_136;
            (*l_177) = l_176;
            for (g_143 = (-22); (g_143 < 17); g_143++)
            {
                (*p_65) = l_180;
                if (l_181)
                    continue;
            }
            (*p_65) = &l_167;
        }
        l_183 = l_182;
        for (g_102 = (-1); (g_102 >= 22); g_102++)
        {
            unsigned short l_193 = 0x4868L;
            char *l_195 = &g_25;
            char **l_202 = (void*)0;
            (*l_182) = (0L ^ (l_167 ^ ((*l_183) < 8L)));
            if (l_167)
                break;
            for (g_31 = 0; (g_31 >= (-23)); g_31 = safe_sub_func_int16_t_s_s(g_31, 8))
            {
                unsigned short l_190 = 9UL;
                char *l_194 = &g_13;
                int *l_200 = (void*)0;
                int *l_201 = &g_136;
                for (g_106 = 16; (g_106 == 21); ++g_106)
                {
                    return p_66;
                }
                (*l_183) = l_190;
                (*l_201) = ((l_173 > (l_167 = 0xFEL)) >= (safe_div_func_int32_t_s_s((l_193 > ((l_194 == l_195) != ((&g_143 != (void*)0) & (safe_div_func_int16_t_s_s(g_143, (safe_lshift_func_int8_t_s_s((*g_24), 1))))))), l_190)));
            }
            (*l_183) = (((((*g_129) = (*g_129)) | 0x027AL) | (func_18((l_203 = l_172), (*p_64), g_80, (*p_64), l_173) != (safe_mod_func_int8_t_s_s((*g_24), 0xE1L)))) | (*p_66));
        }
    }
    else
    {
        int *l_206 = &g_207;
        char *l_210 = &g_13;
        long long *l_215 = &g_83;
        long long **l_214 = &l_215;
        int l_224 = 0xC33E8CD8L;
        int **l_251 = &g_211;
        unsigned long long l_256 = 0x26C4551C73A8097FLL;
        unsigned char l_359 = 255UL;
        int l_386 = (-1L);
        unsigned short ***l_450 = &g_449;
        int *l_455 = &g_207;
        int *l_471 = (void*)0;
lbl_438:
        if (func_18(&g_13, ((*g_67) = (*p_64)), ((*l_206) = 0x07333B9DL), l_206, (safe_rshift_func_int8_t_s_s(func_18(l_210, g_211, (l_167 = l_173), l_206, (safe_sub_func_int16_t_s_s((!0x4C9DL), (*p_66)))), 0))))
        {
            int *l_216 = (void*)0;
            int *l_217 = &g_136;
            short l_221 = (-1L);
            char *l_231 = &g_13;
            (*l_217) = (l_214 == (void*)0);
            if ((*g_211))
            {
                for (g_143 = 0; (g_143 <= 40); g_143 = safe_add_func_int16_t_s_s(g_143, 9))
                {
                    int l_220 = 0x350AEA43L;
                    int l_230 = 0xA974B994L;
                    if (((*l_217) = (l_220 || ((g_106 > l_221) <= (l_220 || (safe_div_func_int8_t_s_s(func_18(&g_13, (*p_65), l_224, &l_220, g_104), l_220)))))))
                    {
                        short l_225 = 0xA86CL;
                        int **l_226 = (void*)0;
                        int **l_227 = &g_211;
                        (*l_217) = l_225;
                        (*l_217) = l_220;
                        (*l_227) = ((*g_67) = (*g_67));
                    }
                    else
                    {
                        unsigned char *l_228 = &g_229;
                        if (l_220)
                            break;
                        l_230 = (((*l_228) = 1UL) & 1L);
                    }
                    (*l_217) = func_18(l_231, (*p_64), (*l_217), (*p_65), l_224);
                }
                l_167 = ((*l_217) = (l_224 >= g_25));
            }
            else
            {
                l_167 = (safe_lshift_func_uint16_t_u_s((*g_129), 9));
                (*p_65) = (*g_67);
            }
            if (l_224)
            {
                unsigned char l_247 = 4UL;
                int l_248 = 0x31CB3A65L;
                unsigned long long l_261 = 0xC84F3ABBA9BF4208LL;
                for (l_221 = (-23); (l_221 == 20); ++l_221)
                {
                    unsigned char l_244 = 1UL;
                    if (((safe_div_func_int64_t_s_s(l_167, (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((*p_66) = g_106), 4)) == (((l_244 == (safe_mul_func_int16_t_s_s(((void*)0 == (*l_214)), func_18(&g_25, (*g_67), g_169, (*p_65), l_224)))) == 0x5120L) >= l_244)), l_247)), l_247)))) && l_244))
                    {
                        char **l_249 = &l_231;
                        int *l_250 = &g_29;
                        unsigned *l_257 = &g_258;
                        l_248 = l_224;
                        (*l_217) = func_18(l_172, (*p_65), g_106, (*p_64), (*l_217));
                        l_248 = ((func_18(((*l_249) = l_231), ((*g_67) = (*g_67)), g_31, l_250, (((void*)0 != l_251) == func_18(&g_25, &l_248, (safe_div_func_uint32_t_u_u((l_167 = ((*l_257) = (safe_rshift_func_uint8_t_u_u((((*l_168) = (g_8 > g_104)) >= l_256), 1)))), (*l_217))), (*p_64), l_173))) > 0x151EL) == g_102);
                    }
                    else
                    {
                        (*l_217) = (safe_div_func_int32_t_s_s((*l_217), l_173));
                        (*l_217) = l_261;
                    }
                    (*g_67) = (*p_65);
                    for (l_167 = 0; (l_167 <= 23); ++l_167)
                    {
                        char **l_265 = &l_231;
                        char ***l_264 = &l_265;
                        char **l_267 = &l_172;
                        char ***l_266 = &l_267;
                        int l_268 = 2L;
                        (*l_217) = (((*l_264) = &g_24) == ((*l_266) = &l_210));
                        l_268 = ((*g_129) > 1L);
                    }
                }
                (*p_65) = &l_248;
                if ((~(**p_65)))
                {
                    (*p_65) = (*p_65);
                }
                else
                {
                    for (l_221 = 0; (l_221 == (-21)); l_221 = safe_sub_func_uint64_t_u_u(l_221, 1))
                    {
                        (**p_65) = (**g_67);
                    }
                    l_217 = (void*)0;
                    (*g_68) = (safe_unary_minus_func_uint16_t_u((0x1F7A47DFL | l_167)));
                }
            }
            else
            {
                l_167 = 7L;
                (*p_65) = (*g_67);
                (*l_217) = func_18(&g_13, (*g_67), g_31, (*l_251), (*l_217));
            }
        }
        else
        {
            long long l_293 = (-1L);
            char **l_296 = &l_210;
            unsigned **l_310 = &l_168;
            short *l_335 = &g_31;
            for (g_136 = 0; (g_136 <= 26); g_136++)
            {
                int *l_274 = &l_224;
                if (((*l_274) = (~(255UL != ((void*)0 == l_210)))))
                {
                    short *l_275 = &g_31;
                    return l_275;
                }
                else
                {
                    return &g_31;
                }
            }
            for (g_13 = (-15); (g_13 < (-11)); g_13++)
            {
                unsigned **l_278 = &l_168;
                unsigned char *l_291 = &g_229;
                int *l_292 = &l_224;
                long long **l_330 = &l_215;
            }
        }
lbl_482:
        for (l_167 = (-7); (l_167 != 12); l_167 = safe_add_func_int8_t_s_s(l_167, 6))
        {
            long long l_344 = 0xE33FC4FF34F1A146LL;
            int l_345 = (-1L);
            char *l_357 = &g_13;
            long long **l_401 = &l_215;
            int l_418 = 0x3AA83157L;
            char **l_430 = &g_24;
            char *l_431 = (void*)0;
            int *l_466 = &g_207;
            int *l_481 = &l_386;
            for (g_207 = 21; (g_207 <= (-26)); g_207 = safe_sub_func_uint16_t_u_u(g_207, 6))
            {
                char **l_340 = &l_172;
                unsigned l_341 = 1UL;
                int *l_350 = &l_345;
                (*g_67) = (*l_251);
                if (func_18(((*l_340) = &g_329), (*g_67), g_106, (*g_67), l_341))
                {
                    l_345 = (safe_rshift_func_uint8_t_u_u((((void*)0 != &g_67) > (0x96F3L == ((*p_66) = (l_167 < l_344)))), 6));
                }
                else
                {
                    unsigned short l_349 = 1UL;
                    unsigned long long *l_358 = &g_143;
                    int *l_361 = &l_360;
                    unsigned long long l_368 = 1UL;
                    int l_374 = 0x40358BF6L;
                    for (l_173 = 0; (l_173 < 2); ++l_173)
                    {
                        (*g_67) = (*p_65);
                        (*l_251) = l_348;
                    }
                    if (l_349)
                    {
                        if (l_345)
                            break;
                        (*p_65) = (*g_67);
                        (*l_251) = ((*g_67) = l_350);
                    }
                    else
                    {
                        int *l_353 = (void*)0;
                        (*l_350) = (safe_lshift_func_int16_t_s_u(g_258, 8));
                        l_353 = (*g_67);
                    }
                    if (((!(*g_24)) < (safe_lshift_func_uint8_t_u_s(((((*l_358) = ((*g_129) != ((0UL <= (((safe_unary_minus_func_uint8_t_u((+g_80))) || g_13) <= func_18(l_357, (*g_67), l_345, (*p_65), l_349))) > g_102))) <= g_229) & (*l_350)), l_344))))
                    {
                        (*p_65) = (*g_67);
                        if (l_349)
                            break;
                        (*l_251) = (*p_64);
                    }
                    else
                    {
                        unsigned short *l_373 = &g_102;
                        int *l_385 = &l_224;
                        l_360 = ((*l_350) = l_359);
                        (*l_251) = l_361;
                        (*l_361) = (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_368, ((*p_66) = (safe_rshift_func_uint8_t_u_s((*l_361), 3))))), (((*l_350) = (safe_rshift_func_int8_t_s_s((((*g_129) = ((*l_361) == 0x50L)) > ((((*l_373) = (*l_350)) > l_374) ^ ((safe_add_func_uint64_t_u_u((!(safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_229 || (((*l_385) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_345, 1)), 6))) > func_18(l_172, &l_360, (**l_251), (*p_64), g_29))), g_329)), (*l_361)))), g_80)) && l_386))), 2))) < 0xBA5FL))) != 0x39F98AEEAECE4B6BLL), (*g_211)));
                        (*p_65) = (*g_67);
                    }
                    (*p_65) = (*g_67);
                }
            }
            for (l_359 = 9; (l_359 < 10); l_359 = safe_add_func_int64_t_s_s(l_359, 2))
            {
                unsigned char l_393 = 0x0DL;
                int *l_406 = (void*)0;
                unsigned long long ***l_429 = &l_427;
                if (l_345)
                    break;
                if ((0xDAFDL && (safe_add_func_int16_t_s_s(((*p_66) = (func_18(l_210, ((*l_251) = (*p_64)), g_31, &l_360, (safe_mod_func_int8_t_s_s(((g_394 = ((func_18(l_210, &g_136, g_25, &g_29, l_393) >= (*g_129)) & l_345)) == (*p_66)), l_393))) > l_344)), 0x5439L))))
                {
                    unsigned l_398 = 1UL;
                    if (l_393)
                        break;
                    for (l_224 = 23; (l_224 != (-5)); l_224 = safe_sub_func_uint16_t_u_u(l_224, 9))
                    {
                        int *l_397 = &l_386;
                        (*l_397) = 0x2668FCE3L;
                        (*g_67) = (*l_251);
                        (*l_397) = (l_398 || 0xE0L);
                    }
                }
                else
                {
                    int *l_402 = &l_224;
                    int l_403 = 0x56C6A85FL;
                    l_403 = (l_345 | ((*l_402) = ((l_401 == &l_215) > ((!g_25) ^ l_345))));
                }
            }
            if (func_18(((*l_430) = l_210), (*p_64), func_18(l_431, &l_418, l_432, (*p_64), ((**l_214) = 0x21A6010E3AD07C3FLL)), (*p_64), g_394))
            {
                int l_460 = 1L;
                for (g_136 = 0; (g_136 >= (-6)); g_136 = safe_sub_func_uint32_t_u_u(g_136, 9))
                {
                    unsigned l_441 = 0x763186A5L;
                    unsigned short ***l_452 = (void*)0;
                    unsigned short ****l_451 = &l_452;
                    int **l_454 = &l_206;
                    int l_469 = 0x64914CADL;
                    int *l_470 = &l_360;
                    for (l_418 = 0; (l_418 > 17); l_418 = safe_add_func_int16_t_s_s(l_418, 3))
                    {
                        int *l_437 = &l_360;
                        (*g_67) = ((*l_251) = l_437);
                        if (l_173)
                            goto lbl_438;
                        (*l_437) = (safe_add_func_int64_t_s_s(l_441, l_418));
                        l_345 = 0L;
                    }
                    if (((safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(8UL, ((((*g_24) = (safe_add_func_uint32_t_u_u(((l_450 = g_448) != (g_453 = ((*l_451) = &g_449))), ((((*l_454) = l_206) != l_455) <= g_405)))) >= (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((9L || g_29), (((l_441 && l_344) | 0x27L) ^ g_31))), 0UL))) && l_441))) & l_460), l_441)) & l_460))
                    {
                        int *l_461 = (void*)0;
                        (*g_67) = &l_345;
                        (*l_251) = l_461;
                        (**p_65) = 1L;
                        (**g_67) = (g_13 && ((l_432 > g_394) && ((*l_428) = (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((*g_24) = (*g_24)), ((((*l_454) = l_206) == l_466) > 0xD7L))) && 0x077FL), l_418)))));
                    }
                    else
                    {
                        unsigned short l_467 = 65529UL;
                        int *l_468 = &l_345;
                        (*l_468) = l_467;
                    }
                    (*l_470) = ((-4L) == func_18(((*l_430) = l_210), (*l_251), l_469, &l_345, g_258));
                    if (l_460)
                        continue;
                }
                if (l_344)
                    break;
            }
            else
            {
                (*p_65) = l_471;
            }
            (*l_481) = ((*l_480) = func_18((*l_430), ((*l_251) = ((*p_65) = &g_136)), (safe_sub_func_uint16_t_u_u((g_474 == (void*)0), (safe_mul_func_int16_t_s_s(((l_418 ^ (9L > (l_477 && (((safe_rshift_func_int8_t_s_u((func_18((l_172 = &g_25), (*p_64), l_418, (*p_64), l_344) > g_405), g_8)) && g_104) | g_136)))) == g_329), g_143)))), l_480, l_418));
            if (l_386)
                goto lbl_482;
        }
        return &g_31;
    }
    (*l_480) = ((((-1L) | func_18(l_172, (*p_64), (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((l_499 = (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((*l_497) = func_18(l_172, (*p_64), (((*l_480) == ((**g_449) = ((g_493 = &g_229) == &g_229))) && ((safe_sub_func_uint64_t_u_u((((*g_24) != 6L) != (*g_24)), 18446744073709551615UL)) <= g_169)), &l_167, (*l_480))), l_498)), 4))), g_143)), g_169)), (*p_64), l_500)) & g_13) & g_169);
    (*p_65) = l_501;
    return &g_31;
}







static short * func_70(int p_71, int p_72, unsigned long long p_73, short * p_74)
{
    char *l_85 = &g_13;
    int *l_86 = (void*)0;
    char l_145 = (-1L);
    if (func_18(l_85, l_86, g_25, &g_29, p_72))
    {
        unsigned char l_107 = 0x2FL;
        int **l_117 = &g_68;
        int **l_118 = &l_86;
        for (g_80 = 0; (g_80 == 26); ++g_80)
        {
            int *l_93 = &g_29;
            char **l_94 = (void*)0;
            unsigned short *l_99 = &g_8;
            unsigned short *l_100 = (void*)0;
            unsigned short *l_101 = &g_102;
            unsigned short *l_103 = (void*)0;
            unsigned short *l_105 = &g_106;
            int **l_113 = (void*)0;
            int **l_114 = &g_68;
            l_107 = (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(func_18(l_85, l_93, ((void*)0 != l_94), &g_29, (safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((*l_105) = (g_104 = ((*l_101) = ((*l_99) = 0xCA38L)))), 0UL)), g_25))), 0xE5L)), p_71));
            if ((*g_68))
            {
                int *l_108 = &g_29;
                int **l_109 = &l_108;
                (*l_109) = l_108;
            }
            else
            {
                int **l_110 = (void*)0;
                int **l_111 = &l_86;
                int **l_112 = &l_93;
                (*l_112) = ((*l_111) = l_86);
            }
            (*l_114) = &g_29;
            for (l_107 = (-22); (l_107 == 23); l_107 = safe_add_func_uint16_t_u_u(l_107, 6))
            {
                (*l_114) = &g_29;
                (*l_114) = &g_29;
            }
        }
        (*l_118) = ((*l_117) = (void*)0);
    }
    else
    {
        int *l_121 = &g_29;
        char *l_144 = (void*)0;
        unsigned l_150 = 1UL;
        int **l_164 = &l_86;
        for (g_13 = 0; (g_13 >= (-20)); g_13--)
        {
            int **l_122 = &l_86;
            g_68 = l_121;
            (*l_122) = (void*)0;
        }
        for (p_73 = 0; (p_73 == 29); p_73++)
        {
            unsigned short *l_131 = (void*)0;
            unsigned short **l_130 = &l_131;
            int **l_140 = &l_121;
            int ***l_139 = &l_140;
            int **l_141 = &g_68;
            unsigned long long *l_142 = &g_143;
            if ((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_129 = &g_8) != ((*l_130) = p_74)), (((safe_add_func_int64_t_s_s((g_136 == ((((*l_142) = (safe_lshift_func_uint16_t_u_s((((*l_139) = &g_68) == l_141), 15))) != func_18(&g_13, &p_72, func_18(l_144, (*l_141), (**l_141), &g_136, (**l_141)), &g_136, l_145)) <= g_136)), p_72)) || p_72) & (-4L)))), 5)) > 4294967295UL) & p_71))
            {
                char *l_151 = &g_25;
                if ((safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_150, 7)) >= (**l_141)), (((g_25 < 0x755EL) == (*l_121)) | (((g_80 & func_18(l_151, &g_29, g_80, (*l_140), p_72)) < 0x9A38L) <= (**l_140))))))
                {
                    (*l_141) = &p_72;
                }
                else
                {
                    for (p_72 = 0; (p_72 != (-9)); p_72--)
                    {
                        return &g_31;
                    }
                    (*l_140) = &p_72;
                }
            }
            else
            {
                long long *l_155 = &g_83;
                long long **l_154 = &l_155;
                int *l_162 = &g_136;
                short *l_163 = &g_31;
                if (func_18(l_144, &p_72, func_18(l_144, &g_29, p_71, ((*l_140) = &p_72), (g_83 = (l_142 != &g_80))), &g_136, p_72))
                {
                    (*l_140) = &p_71;
                }
                else
                {
                    long long ***l_156 = &l_154;
                    (*l_156) = l_154;
                    for (g_106 = 0; (g_106 <= 4); g_106 = safe_add_func_int8_t_s_s(g_106, 2))
                    {
                        unsigned long long **l_161 = &l_142;
                        (**l_140) = ((safe_mod_func_int8_t_s_s(0x9CL, (0L || (&g_143 == ((*l_161) = &p_73))))) != 0x8B7C26C73D51CD1BLL);
                        l_162 = &p_72;
                        return l_163;
                    }
                }
            }
            (**l_140) = 0xC00E8DF1L;
        }
        l_86 = &p_71;
        (*l_164) = &p_71;
    }
    return &g_31;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
