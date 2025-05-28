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



static int g_4 = 5L;
static unsigned g_15 = 0xF415D724L;
static unsigned short g_47 = 65526UL;
static unsigned char g_74 = 1UL;
static unsigned g_79 = 4294967293UL;
static unsigned g_83 = 4294967286UL;
static unsigned g_95 = 0x8E10B09EL;
static int g_97 = (-1L);
static int *g_98 = &g_97;
static short g_114 = 0x3740L;
static short g_116 = 1L;
static char g_123 = 6L;
static short g_163 = 7L;
static int ****g_196 = (void*)0;
static const unsigned g_203 = 18446744073709551615UL;
static short **g_210 = (void*)0;
static volatile unsigned *g_315 = (void*)0;
static volatile unsigned **g_314 = &g_315;
static unsigned short * const g_328 = &g_47;
static unsigned short * const *g_327 = &g_328;
static int g_361 = 0x117913F1L;
static int g_363 = 0xEF1BC82AL;
static unsigned *g_369 = &g_95;
static unsigned **g_368 = &g_369;
static unsigned char g_372 = 1UL;
static unsigned ***g_389 = &g_368;
static unsigned ****g_388 = &g_389;
static int **g_456 = &g_98;
static int ***g_455 = &g_456;
static const char g_463 = 0L;
static unsigned g_560 = 0xEE4CC71DL;
static unsigned g_562 = 7UL;
static volatile unsigned char g_601 = 0x3FL;
static volatile unsigned char *g_600 = &g_601;
static volatile unsigned char ** const g_599 = &g_600;
static const short g_623 = 4L;
static char g_626 = 0xEDL;
static short * const g_682 = &g_116;
static short * const *g_681 = &g_682;
static unsigned short g_685 = 0x9703L;
static unsigned short *g_725 = &g_47;
static unsigned short **g_724 = &g_725;
static unsigned short ***g_723 = &g_724;



static const unsigned func_1(void);
static int func_5(int p_6, unsigned short p_7, short p_8, int p_9, unsigned p_10);
static int * func_21(const unsigned * p_22, short p_23, char p_24, char p_25);
static unsigned func_29(unsigned * p_30, unsigned char p_31, char p_32, unsigned short p_33);
static short func_37(char p_38, unsigned * p_39);
static unsigned * func_41(unsigned p_42, char p_43);
static short func_57(int * p_58, short p_59, unsigned * p_60);
static unsigned char func_62(unsigned * p_63);
static int * func_65(int * p_66, unsigned p_67);
static unsigned func_68(unsigned char p_69, unsigned p_70, unsigned p_71);
static const unsigned func_1(void)
{
    unsigned l_2 = 0xC05BAF43L;
    int *l_3 = &g_4;
    int l_12 = 0x88E17B84L;
    unsigned *l_13 = (void*)0;
    unsigned *l_14 = &g_15;
    int l_731 = (-4L);
    (*l_3) = l_2;
    (*l_3) = (*l_3);
    if (((*l_3) = func_5(g_4, (g_4 ^ 0x6EL), (~(safe_unary_minus_func_int16_t_s(0x0EF3L))), l_12, ((*l_14) = g_4))))
    {
        short l_40 = 0L;
        (*l_3) = g_15;
        for (g_4 = 0; (g_4 != 28); g_4 = safe_add_func_int16_t_s_s(g_4, 1))
        {
            const unsigned *l_26 = &g_15;
            int l_34 = 0x1DAB551FL;
            unsigned short *l_46 = &g_47;
            char l_728 = 0L;
            int *l_732 = (void*)0;
            int *l_733 = &g_361;
            (*g_456) = func_21(l_26, (safe_add_func_uint32_t_u_u(func_29(l_14, l_34, l_34, (safe_add_func_int16_t_s_s(func_37(l_40, func_41((safe_lshift_func_uint16_t_u_u(((*l_46) = g_15), (*l_3))), g_4)), l_728))), (*l_3))), (*l_3), (*l_3));
            l_731 = func_62(l_14);
            (*l_733) = 0x70C394F0L;
            l_731 = (*l_3);
        }
    }
    else
    {
        unsigned char *l_736 = &g_372;
        const int l_737 = 0x4C2A207EL;
        (*l_3) = (safe_rshift_func_uint16_t_u_s((l_736 != (void*)0), (l_737 == l_737)));
    }
    l_3 = &l_731;
    return (***g_389);
}







static int func_5(int p_6, unsigned short p_7, short p_8, int p_9, unsigned p_10)
{
    unsigned *l_16 = &g_15;
    int l_17 = (-7L);
    int *l_18 = &g_4;
    (*l_18) = ((l_16 == &g_15) < l_17);
    (*l_18) = (*l_18);
    return (*l_18);
}







static int * func_21(const unsigned * p_22, short p_23, char p_24, char p_25)
{
    int *l_730 = (void*)0;
    return l_730;
}







static unsigned func_29(unsigned * p_30, unsigned char p_31, char p_32, unsigned short p_33)
{
    int *l_729 = &g_361;
    (*l_729) = p_32;
    (*l_729) = p_33;
    (*l_729) = p_32;
    return (*l_729);
}







static short func_37(char p_38, unsigned * p_39)
{
    unsigned char *l_643 = &g_74;
    unsigned char **l_642 = &l_643;
    unsigned char ***l_641 = &l_642;
    int l_644 = (-1L);
    unsigned *l_647 = (void*)0;
    unsigned *l_648 = &g_560;
    unsigned *l_673 = &g_15;
    int *l_689 = &l_644;
    unsigned short *l_697 = &g_685;
    unsigned short **l_696 = &l_697;
    unsigned short ***l_695 = &l_696;
    unsigned l_709 = 4294967295UL;
    if ((g_79 & (3UL && func_68((safe_lshift_func_uint16_t_u_u((0L | ((1L ^ (safe_lshift_func_uint8_t_u_u(((((((g_83 = ((*l_648) = (((void*)0 == l_641) || (l_644 ^ (((safe_lshift_func_uint8_t_u_u(func_57(&l_644, p_38, l_647), p_38)) | l_644) ^ (**g_327)))))) || p_38) != 0x0ACE968BL) > 0x37L) >= 0x58E577CFL) > g_562), p_38))) && (*g_328))), 1)), l_644, g_95))))
    {
        int **l_654 = &g_98;
        int l_674 = (-8L);
        for (g_560 = 0; (g_560 <= 44); g_560++)
        {
            int **l_653 = &g_98;
            int **l_655 = &g_98;
            int l_656 = 4L;
            if ((safe_rshift_func_uint16_t_u_u(l_644, p_38)))
            {
                l_656 = (l_653 == (l_655 = l_654));
            }
            else
            {
                if (p_38)
                    break;
                (*l_654) = p_39;
                (***g_455) = (**l_655);
                (*g_98) = ((**l_655) == p_38);
            }
            for (g_562 = (-6); (g_562 < 25); g_562++)
            {
                unsigned l_659 = 0x6E882C62L;
                int *l_660 = &g_363;
                (*l_660) = l_659;
                for (l_644 = (-17); (l_644 == 3); l_644 = safe_add_func_uint16_t_u_u(l_644, 7))
                {
                    const int *l_663 = &l_644;
                    const int **l_664 = (void*)0;
                    l_663 = l_663;
                    (*l_660) = l_644;
                }
            }
        }
        for (g_116 = 0; (g_116 < 9); ++g_116)
        {
            int *l_668 = &g_363;
            int **l_667 = &l_668;
            int *l_671 = &g_361;
            unsigned short l_672 = 6UL;
            (*l_667) = ((*l_654) = (void*)0);
            (**g_455) = (void*)0;
            for (g_47 = 0; (g_47 >= 52); g_47++)
            {
                int *l_686 = &g_97;
                l_674 = func_57(l_671, l_672, l_673);
                for (g_95 = (-2); (g_95 > 13); g_95++)
                {
                    unsigned short *l_683 = &l_672;
                    unsigned short *l_684 = &g_685;
                    if (l_644)
                        break;
                    (*l_671) = ((void*)0 != (*g_327));
                    g_363 = (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((void*)0 == g_681), ((*l_684) = ((*l_683) = 0xBB5AL)))), 3)) <= g_560) > g_47);
                    (*l_654) = func_65((l_686 = (*g_456)), p_38);
                }
            }
            for (l_674 = 18; (l_674 >= (-21)); l_674 = safe_sub_func_int8_t_s_s(l_674, 1))
            {
                if (p_38)
                    break;
                (*l_671) = p_38;
                l_689 = (void*)0;
            }
        }
    }
    else
    {
        unsigned short *l_694 = &g_47;
        unsigned short **l_693 = &l_694;
        unsigned short ***l_692 = &l_693;
        int l_710 = 1L;
        (**g_455) = func_41((((***g_388) = (**g_389)) == l_647), ((safe_rshift_func_uint8_t_u_u(((((-1L) > (l_692 == l_695)) ^ (*l_689)) <= ((*l_648) = (g_562 = p_38))), (*g_600))) && (*l_689)));
        for (g_562 = (-19); (g_562 < 49); g_562++)
        {
            unsigned char **l_701 = (void*)0;
            char l_704 = 0x58L;
            int l_705 = 0x6AE7D09FL;
            unsigned *l_708 = (void*)0;
        }
    }
    return (*g_682);
}







static unsigned * func_41(unsigned p_42, char p_43)
{
    int l_48 = 0x4FA72D50L;
    int *l_49 = &l_48;
    unsigned short *l_52 = (void*)0;
    int **l_61 = &l_49;
    unsigned *l_64 = &g_15;
    int *l_420 = &g_97;
    char *l_422 = &g_123;
    int l_593 = 0xEC439382L;
    unsigned char *l_633 = &g_372;
    unsigned char **l_632 = &l_633;
    l_48 = 0xAAC1E0F7L;
    (*l_49) = 0L;
    if (((*l_420) = (safe_add_func_uint16_t_u_u(g_15, ((((void*)0 == l_52) ^ g_15) == (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(p_43, (&l_48 != (void*)0))) & func_57(((*l_61) = &g_4), (func_62(l_64) && l_48), l_64)), g_361)))))))
    {
        unsigned *l_426 = &g_15;
        short l_433 = (-9L);
        char l_434 = 0x1DL;
        int l_470 = 8L;
        short *l_506 = &g_116;
        int *l_514 = (void*)0;
        int *l_515 = &g_363;
        unsigned short l_544 = 65531UL;
        if (((void*)0 == l_52))
        {
            int l_421 = 9L;
            char *l_423 = &g_123;
lbl_437:
            (*l_420) = (l_421 > (l_422 != l_423));
            if ((~((safe_rshift_func_int8_t_s_s((((void*)0 == l_426) | 0x48L), 4)) <= (p_42 ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((0x42L >= (safe_sub_func_uint16_t_u_u(0xC24AL, ((p_43 || ((((*g_328) = l_433) & (l_434 != p_43)) | p_42)) ^ l_434)))), 1)), 0xB0L))))))
            {
                short l_467 = 0L;
                for (g_363 = 0; (g_363 == 29); ++g_363)
                {
                    if (g_363)
                        goto lbl_437;
                    (*l_61) = (void*)0;
                    (*l_420) = l_434;
                    l_421 = ((safe_mod_func_int16_t_s_s((l_426 == ((***g_388) = (**g_389))), (**g_327))) > (p_43 < g_203));
                }
                (*l_61) = (void*)0;
                if (p_42)
                {
                    int ***l_440 = &l_61;
                    (*l_420) = (((void*)0 != l_440) || ((**g_327) = p_42));
                    if (l_434)
                        goto lbl_443;
                    (**l_440) = &l_421;
                    if ((*l_49))
                    {
                        (***l_440) = (safe_rshift_func_int8_t_s_u(1L, g_79));
                        (**l_61) = (l_426 != (**l_440));
lbl_443:
                        (*l_420) = (*g_98);
                        (*l_61) = &g_361;
                    }
                    else
                    {
                        int ***l_454 = &l_61;
                        int ****l_457 = (void*)0;
                        int ****l_458 = &l_440;
                        const char *l_462 = &g_463;
                        const char **l_461 = &l_462;
                        short l_464 = 0L;
                        short *l_466 = &l_433;
                        short **l_465 = &l_466;
                        (*g_456) = func_65((*l_61), (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((l_454 == ((*l_458) = g_455)), (safe_rshift_func_int8_t_s_u((((*l_461) = &g_123) != &g_123), (p_43 || ((*l_422) = l_464)))))), (**g_327))), 5)), 0x64AADFF8L)), p_43)));
                        (**g_455) = func_65(((*l_61) = func_65((**l_440), (l_465 != (void*)0))), l_421);
                    }
                }
                else
                {
                    unsigned l_471 = 3UL;
                    unsigned *l_478 = &g_15;
                    short l_482 = 0x3D7DL;
                    l_467 = (l_433 ^ ((*l_422) = l_421));
                    if ((l_471 = (safe_rshift_func_uint16_t_u_u((l_470 = 0x4468L), 6))))
                    {
                        (*g_456) = &l_470;
                    }
                    else
                    {
                        short *l_479 = &g_163;
                        int l_480 = 0xAEBB779AL;
                        unsigned *l_481 = &g_79;
                        int *l_483 = &g_361;
                        (*l_483) = ((*g_328) | (l_470 | ((((((*l_481) = (p_43 <= (((safe_rshift_func_uint16_t_u_s((l_433 ^ (((safe_sub_func_int32_t_s_s(((*l_420) = (safe_sub_func_int16_t_s_s((l_480 = ((*l_479) = func_57((**g_455), func_68(l_433, ((4294967288UL < l_433) && l_434), g_4), l_478))), (*g_328)))), 0xBDC8BF43L)) >= p_43) != l_434)), l_471)) && g_47) || 1UL))) < p_42) || l_467) || l_482) == p_43)));
                        (*l_483) = 0xDC916C79L;
                        return (*g_368);
                    }
                }
            }
            else
            {
                return (*g_368);
            }
        }
        else
        {
            (*l_420) = (**g_456);
            (*l_420) = 8L;
            (**g_455) = &l_470;
        }
        for (g_97 = 0; (g_97 != 22); g_97 = safe_add_func_int16_t_s_s(g_97, 2))
        {
            int *l_488 = &g_361;
            unsigned ***l_510 = &g_368;
            unsigned l_528 = 0x5CFDD420L;
            l_470 = (safe_lshift_func_int8_t_s_u(g_4, func_57(l_488, (safe_mod_func_uint8_t_u_u(p_43, g_4)), l_488)));
            for (g_74 = (-20); (g_74 != 4); ++g_74)
            {
                char l_493 = 0xB8L;
                int *l_494 = (void*)0;
            }
            (**g_455) = &l_470;
            for (g_123 = (-1); (g_123 <= (-30)); g_123 = safe_sub_func_uint8_t_u_u(g_123, 9))
            {
                unsigned ***l_509 = &g_368;
                int l_537 = 0x9F95C6FDL;
            }
        }
        for (g_83 = 0; (g_83 >= 59); g_83 = safe_add_func_uint32_t_u_u(g_83, 2))
        {
            if (p_43)
                break;
        }
        for (l_48 = (-10); (l_48 != (-3)); l_48 = safe_add_func_int32_t_s_s(l_48, 1))
        {
            for (p_43 = 26; (p_43 < 11); p_43 = safe_sub_func_uint32_t_u_u(p_43, 9))
            {
                if (l_544)
                    break;
            }
        }
    }
    else
    {
        int *l_545 = &g_4;
        const unsigned short *l_606 = (void*)0;
        unsigned char ***l_634 = (void*)0;
        unsigned char **l_636 = &l_633;
        unsigned char ***l_635 = &l_636;
        (**g_455) = l_545;
        for (g_83 = 0; (g_83 != 42); g_83++)
        {
            unsigned *l_548 = &g_79;
            int l_549 = 1L;
            int l_551 = 1L;
            short *l_589 = &g_163;
            short *l_590 = &g_116;
        }
        (*l_420) = (l_632 == ((*l_635) = (void*)0));
        (*l_420) = (**l_61);
    }
    return l_64;
}







static short func_57(int * p_58, short p_59, unsigned * p_60)
{
    int *l_334 = &g_4;
    int **l_335 = &l_334;
    unsigned char *l_344 = &g_74;
    unsigned l_351 = 0UL;
    unsigned *l_354 = &l_351;
    unsigned short *l_412 = (void*)0;
    unsigned short **l_411 = &l_412;
    unsigned short ***l_410 = &l_411;
    p_58 = (g_98 = l_334);
    return (**l_335);
}







static unsigned char func_62(unsigned * p_63)
{
    unsigned char *l_72 = (void*)0;
    unsigned char *l_73 = &g_74;
    int l_75 = 1L;
    unsigned *l_78 = &g_79;
    int l_80 = 1L;
    unsigned *l_81 = (void*)0;
    unsigned *l_82 = &g_83;
    char l_110 = 0x93L;
    char l_122 = 0xA3L;
    const int *l_180 = &l_80;
    const int **l_179 = &l_180;
    const int ***l_178 = &l_179;
    unsigned ***l_218 = (void*)0;
    unsigned short l_239 = 0x2F14L;
lbl_138:
    g_98 = func_65(p_63, func_68(((*l_73) = 0x45L), l_75, ((*l_82) = (l_80 = (safe_lshift_func_uint8_t_u_s((((*l_78) = 1UL) != l_75), 4))))));
    l_80 = l_75;
    if ((*g_98))
    {
        unsigned short l_105 = 0UL;
        (*g_98) = (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((*l_73) = func_68(((*l_73) = l_105), g_47, l_105)), 8L)), (safe_sub_func_int8_t_s_s(l_105, g_83)))), (l_80 | ((*l_78) = (9L <= (*g_98))))));
    }
    else
    {
        unsigned char *l_111 = &g_74;
        short *l_112 = (void*)0;
        short *l_113 = &g_114;
        short *l_115 = &g_116;
        int l_119 = 1L;
        int l_166 = 1L;
        unsigned short **l_220 = (void*)0;
        int *l_225 = &l_75;
        int l_228 = 0x819D7496L;
        const int *l_316 = &g_97;
        unsigned short l_326 = 0xB929L;
        unsigned char l_333 = 1UL;
        if ((safe_lshift_func_uint16_t_u_s(l_110, ((g_123 = ((*l_73) = (((((((void*)0 == l_111) || ((*l_115) = ((*l_113) = l_80))) & ((*g_98) = ((safe_add_func_int8_t_s_s(l_119, func_68((safe_rshift_func_uint16_t_u_s(65528UL, 1)), l_75, l_119))) != 5L))) > g_79) > l_122) < l_119))) | l_80))))
        {
            int **l_130 = &g_98;
            for (l_119 = 2; (l_119 < 1); --l_119)
            {
                int *l_126 = &g_4;
                int **l_127 = &g_98;
                int **l_128 = (void*)0;
                int **l_129 = &l_126;
                (*l_129) = ((*l_127) = l_126);
                if ((*g_98))
                    continue;
            }
            if ((l_130 != &g_98))
            {
                for (l_119 = 0; (l_119 < (-20)); l_119 = safe_sub_func_int8_t_s_s(l_119, 8))
                {
                    int *l_133 = &l_75;
                    (*l_133) = (**l_130);
                    for (g_97 = 0; (g_97 == 28); g_97 = safe_add_func_uint8_t_u_u(g_97, 6))
                    {
                        int *l_136 = (void*)0;
                        int *l_137 = &l_80;
                        (*l_137) = ((*l_133) = (*g_98));
                        if (l_119)
                            goto lbl_138;
                        (*l_133) = (func_68(l_122, ((*l_82) = (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_114 >= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((g_15 == (**l_130)), (l_133 == p_63))), g_116))), 0x04L)), 6))), (*l_133)) == 0x970FL);
                    }
                }
            }
            else
            {
                int **l_147 = &g_98;
                int ***l_148 = (void*)0;
                int ***l_149 = &l_130;
                (*l_149) = l_147;
                g_98 = &l_80;
            }
            return l_75;
        }
        else
        {
            int l_159 = (-9L);
            int l_177 = 0xF5DD30C4L;
            int **l_183 = &g_98;
            int *** const l_182 = &l_183;
            int *l_229 = &l_159;
            unsigned short *l_236 = &g_47;
            unsigned l_252 = 0UL;
            unsigned char *l_280 = (void*)0;
            unsigned char l_329 = 0UL;
            for (l_75 = 0; (l_75 > 7); l_75 = safe_add_func_uint16_t_u_u(l_75, 7))
            {
                int **l_152 = (void*)0;
                int **l_153 = (void*)0;
                int **l_154 = &g_98;
                const int ****l_181 = &l_178;
                unsigned short *l_187 = (void*)0;
                unsigned short *l_188 = &g_47;
                int ** const *l_195 = (void*)0;
                int ** const **l_194 = &l_195;
                (*l_154) = p_63;
                for (g_97 = 23; (g_97 != 25); ++g_97)
                {
                    unsigned *l_161 = (void*)0;
                    unsigned **l_160 = &l_161;
                    unsigned ***l_162 = &l_160;
                    for (l_122 = 0; (l_122 != 0); ++l_122)
                    {
                        return l_159;
                    }
                    (*l_162) = l_160;
                    g_163 = (*g_98);
                    for (g_95 = (-6); (g_95 <= 5); g_95 = safe_add_func_uint16_t_u_u(g_95, 5))
                    {
                        l_166 = l_110;
                        return g_83;
                    }
                }
                for (g_123 = 0; (g_123 > 25); g_123 = safe_add_func_int16_t_s_s(g_123, 3))
                {
                    int l_169 = 0x63AB8821L;
                    return l_169;
                }
                if ((safe_mod_func_uint16_t_u_u((l_159 = g_116), (0xE182C0C4L && ((((0UL && func_68((safe_add_func_uint8_t_u_u((l_177 = (+(((*l_73) = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u(g_114)), 3))) != l_119))), (((*l_181) = l_178) == l_182))), (safe_add_func_uint16_t_u_u((**l_179), ((*l_188) = func_68((safe_unary_minus_func_uint8_t_u(g_95)), (*l_180), l_166)))), g_163)) <= g_123) ^ 0x32L) ^ 3L)))))
                {
                    return (**l_183);
                }
                else
                {
                    int *l_189 = &l_80;
                    short **l_209 = &l_115;
                    (*l_179) = (*l_179);
                    if (((*l_189) = (&g_4 != ((*l_183) = func_65(p_63, g_83)))))
                    {
                        (*g_98) = (safe_sub_func_uint16_t_u_u(0UL, 4L));
                        (*l_154) = func_65(p_63, l_166);
                    }
                    else
                    {
                        const unsigned *l_202 = &g_203;
                        const unsigned **l_201 = &l_202;
                        char *l_208 = &l_110;
                        (***l_182) = (safe_lshift_func_int16_t_s_u((l_166 ^ (l_194 != g_196)), g_116));
                        (*l_183) = func_65(&l_75, l_119);
                        (**l_154) = ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((*l_201) = func_65(&l_119, (***l_182))) == p_63) != (safe_sub_func_uint8_t_u_u((p_63 != (void*)0), (((*l_78) = 4294967293UL) && (*l_189))))), (safe_lshift_func_int8_t_s_u(((*l_208) = ((*l_189) ^ (*l_189))), 5)))), 0xADL)) ^ 0xF0L);
                        g_210 = l_209;
                    }
                    for (g_123 = 0; (g_123 != (-29)); g_123 = safe_sub_func_uint16_t_u_u(g_123, 6))
                    {
                        const unsigned char l_217 = 0x45L;
                        unsigned ****l_219 = &l_218;
                        unsigned short ***l_221 = &l_220;
                        int *l_222 = &g_97;
                        (**l_183) = (safe_add_func_int8_t_s_s(1L, (+(((safe_add_func_int8_t_s_s(l_217, g_123)) && ((((((*l_219) = l_218) == (void*)0) > func_68((l_119 | (l_166 || 0x4605F856L)), l_217, g_163)) > 0xE4CFL) & 0xCF68907DL)) & (-4L)))));
                        (**l_182) = (*l_183);
                        (*l_221) = l_220;
                        g_98 = l_222;
                    }
                }
            }
            (***l_182) = (*g_98);
            if (((*l_179) == ((**l_182) = func_65(func_65((l_225 = func_65(&l_80, (safe_rshift_func_int16_t_s_u(2L, 5)))), ((*l_78) = (safe_mod_func_int8_t_s_s(l_119, ((((l_75 = ((*l_229) = l_228)) < (safe_rshift_func_int8_t_s_u(1L, 6))) & ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(func_68((*l_180), (((*l_236) = g_163) | g_74), l_228), 11)), 7)) < l_228)) || (*l_229)))))), l_166))))
            {
                (**l_183) = ((***l_182) || (*l_229));
                (*l_179) = (**l_178);
            }
            else
            {
                int l_251 = 0L;
                int *l_253 = &l_159;
                unsigned char **l_281 = &l_280;
                unsigned char l_308 = 255UL;
                for (g_79 = 0; (g_79 == 56); g_79 = safe_add_func_int32_t_s_s(g_79, 8))
                {
                    unsigned char **l_249 = (void*)0;
                    int l_250 = (-1L);
                }
                (**l_183) = (*l_253);
                if (((safe_rshift_func_uint16_t_u_u((***l_178), (0xEDL & (((func_68((*l_180), (*l_253), (*l_253)) && (safe_sub_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(0xF7L, (safe_rshift_func_int16_t_s_s(0xE1D0L, 11)))) >= (((*l_281) = l_280) != (void*)0)) > (***l_178)), g_97))) || (*l_253)) < (*l_253))))) == (*l_253)))
                {
                    (*l_179) = (void*)0;
                }
                else
                {
                    unsigned l_309 = 0x94F7204BL;
                    for (l_252 = (-25); (l_252 <= 50); l_252 = safe_add_func_uint8_t_u_u(l_252, 9))
                    {
                        char *l_285 = &g_123;
                        char **l_284 = &l_285;
                        char *l_287 = &l_122;
                        char **l_286 = &l_287;
                        (*l_179) = func_65(func_65(&l_75, (((*l_286) = ((*l_284) = &g_123)) == l_280)), ((*l_82) = (safe_rshift_func_int8_t_s_u((g_163 != (*l_229)), 4))));
                    }
                    (**l_183) = ((*l_253) = (*l_225));
                    for (g_95 = 0; (g_95 >= 11); g_95 = safe_add_func_uint32_t_u_u(g_95, 1))
                    {
                        char *l_296 = &l_122;
                        char *l_310 = &l_110;
                        (**l_178) = func_65(&l_75, (*l_180));
                        l_75 = ((g_123 < (((*l_236) = (safe_mod_func_int8_t_s_s((1L || g_83), (*l_253)))) == (4294967292UL == ((*l_180) & ((*l_115) = ((((*l_296) = ((*g_98) & ((safe_add_func_uint16_t_u_u((*l_253), (***l_182))) != g_116))) ^ (***l_182)) <= 65535UL)))))) ^ 1UL);
                        (*l_225) = (safe_sub_func_uint16_t_u_u(((*l_180) <= (safe_sub_func_uint32_t_u_u(0UL, (safe_lshift_func_uint8_t_u_s(255UL, ((*l_310) = ((g_83 = ((*l_78) = (safe_rshift_func_uint8_t_u_s((((*l_236) = (0L >= ((*l_113) = ((g_74 && ((((~((*l_253) = ((void*)0 != &l_111))) >= ((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u(((*l_73) = l_308), (g_123 = ((*l_296) = (l_309 && l_309))))))) ^ l_308)) && g_97) <= g_203)) > g_95)))) & 65530UL), l_309)))) < (*l_225)))))))), (-1L)));
                    }
                    for (l_122 = (-15); (l_122 < (-1)); l_122 = safe_add_func_uint16_t_u_u(l_122, 4))
                    {
                        char l_313 = 0L;
                        (*l_183) = &l_119;
                        return l_313;
                    }
                }
            }
            if (((void*)0 != g_314))
            {
                int l_325 = 0x1747DE5BL;
                char *l_330 = (void*)0;
                char *l_331 = &l_110;
                int *l_332 = &l_80;
                l_316 = (*l_179);
                l_332 = ((*l_183) = func_65(&l_80, (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((**l_183) = ((*l_331) = (((((0xFE9EL <= 5UL) | (g_74 != ((safe_mod_func_int32_t_s_s((0UL == (*l_229)), (safe_sub_func_uint32_t_u_u(func_68((l_326 = l_325), ((l_325 < func_68((g_327 == &g_328), g_97, l_329)) || 0x2C5ECF49L), g_123), 1L)))) >= 0x53L))) < 1UL) ^ (***l_182)) > (**l_183)))) ^ g_47), g_83)), (*l_229)))));
            }
            else
            {
                (*l_179) = func_65(&g_4, (***l_182));
            }
        }
        return l_333;
    }
    return g_15;
}







static int * func_65(int * p_66, unsigned p_67)
{
    int *l_96 = &g_97;
    (*l_96) = ((0L ^ (!(0x6A86E60EL || (*p_66)))) >= (~0xCCL));
    return &g_97;
}







static unsigned func_68(unsigned char p_69, unsigned p_70, unsigned p_71)
{
    int **l_84 = (void*)0;
    int *l_86 = (void*)0;
    int **l_85 = &l_86;
    unsigned char *l_89 = &g_74;
    unsigned char **l_90 = &l_89;
    unsigned char **l_91 = (void*)0;
    unsigned char *l_92 = (void*)0;
    unsigned char l_94 = 0xA5L;
    (*l_85) = &g_4;
    g_95 = (g_83 > (7UL != (safe_add_func_int8_t_s_s(((+(((*l_90) = l_89) != (l_92 = &p_69))) || (safe_unary_minus_func_int32_t_s(p_69))), ((!p_71) & l_94)))));
    return (*l_86);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
