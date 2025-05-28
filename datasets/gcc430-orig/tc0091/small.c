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



static int g_5 = 0x3B9DA4D0L;
static const int g_25 = (-7L);
static const int *g_24 = &g_25;
static int g_31 = 0x62BB2C59L;
static int g_37 = 6L;
static int g_39 = 0x58B39D20L;
static int g_61 = 9L;
static unsigned short g_64 = 0UL;
static unsigned g_79 = 0x79364560L;
static unsigned char g_82 = 1UL;
static unsigned g_106 = 4294967295UL;
static unsigned g_113 = 4294967287UL;
static unsigned short g_117 = 0x7977L;
static unsigned g_118 = 18446744073709551609UL;
static unsigned char *g_121 = &g_82;
static int *g_135 = &g_61;
static int **g_134 = &g_135;
static int ***g_133 = &g_134;
static short g_148 = 0L;
static int g_158 = 0xA174F72EL;
static const unsigned short g_248 = 0UL;
static const unsigned short *g_247 = &g_248;
static const unsigned short **g_246 = &g_247;
static char g_291 = (-9L);
static const char g_296 = 0xA9L;
static unsigned char **g_314 = &g_121;
static unsigned char ***g_313 = &g_314;
static int *g_373 = &g_39;
static int **g_372 = &g_373;
static const int ** const g_436 = &g_24;
static const int ** const *g_435 = &g_436;
static const unsigned *g_450 = &g_106;
static const unsigned **g_449 = &g_450;
static short g_461 = (-1L);
static int *g_587 = &g_39;
static unsigned *g_666 = (void*)0;
static unsigned **g_665 = &g_666;
static const char **g_695 = (void*)0;
static unsigned char g_703 = 252UL;
static const short g_729 = 8L;
static short g_731 = (-4L);



static int func_1(void);
static unsigned func_6(char p_7, short p_8);
static int * func_9(int * p_10);
static int * func_14(int * p_15, const int * p_16, int * const p_17);
static int * func_18(unsigned short p_19, unsigned short p_20, int * const * p_21, int p_22, int ** p_23);
static int * func_26(int ** p_27, int * p_28);
static int * func_32(const int p_33, int * p_34, int * p_35);
static int * func_40(unsigned short p_41, const unsigned p_42);
static unsigned short func_43(int * p_44, unsigned p_45, int p_46, int * p_47);
static char func_52(int * p_53, char p_54);
static int func_1(void)
{
    char l_4 = 0xDCL;
    short *l_730 = &g_731;
    int l_736 = (-9L);
    int *l_742 = &g_61;
    int *l_743 = &l_736;
    l_736 = (safe_rshift_func_uint8_t_u_u((l_4 <= (g_5 ^ ((func_6(l_4, l_4) < (((*l_730) = ((void*)0 == &g_666)) | ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_729, (l_4 <= g_703))), 4)) > l_4))) < 0L))), 3));


    ;
    ;

    for (g_118 = 0; (g_118 != 12); ++g_118)
    {
        const char *l_740 = (void*)0;
        const char **l_739 = &l_740;
        const char ***l_741 = &l_739;
        (*l_741) = l_739;
    }
    (*l_743) = (g_31 = ((*l_742) = (l_4 & (**g_449))));
    (*l_742) = (*l_742);
    return (*l_742);
}







static unsigned func_6(char p_7, short p_8)
{
    int **l_11 = (void*)0;
    int *l_13 = (void*)0;
    int **l_12 = &l_13;
    unsigned short l_403 = 0x7FC6L;
    int * const l_404 = &g_61;
    char *l_405 = &g_291;
    unsigned l_445 = 0xE8CD3D3DL;
    int *l_481 = &g_31;
    unsigned *l_485 = &g_106;
    unsigned **l_484 = &l_485;
    int l_490 = 0x14E49BF2L;
    unsigned char * const *l_550 = &g_121;
    unsigned char * const **l_549 = &l_550;
    unsigned char * const ***l_548 = &l_549;
    int ***l_554 = &l_12;
    int *l_606 = &g_31;
    const char *l_694 = &g_296;
    const char **l_693 = &l_694;
    short * const l_727 = &g_148;
    (*l_12) = ((**g_133) = func_9(((*l_12) = (void*)0)));

    ;
    ;
    ;
    ;
    (**g_133) = func_40(((-1L) & 1UL), g_31);

    ;
    if ((*l_404))
    {
        unsigned l_406 = 4294967291UL;
        unsigned short l_413 = 0xC1F5L;
        int *l_427 = &g_5;
        const int **l_456 = &g_24;
        l_406 = (((*l_405) = g_291) & (&g_134 == &g_134));
        for (g_82 = 0; (g_82 < 30); ++g_82)
        {
            int l_422 = (-1L);
            int l_432 = 0L;
            int **l_455 = &l_13;
            int * const l_463 = (void*)0;
            int **l_464 = &g_135;
            for (g_148 = 22; (g_148 >= 25); ++g_148)
            {
                const unsigned *l_418 = (void*)0;
                int l_419 = 0x769E7DFFL;
                unsigned short l_420 = 0x36ACL;
                int *l_438 = (void*)0;
            }
            if ((*l_404))
                continue;
        }
    }
    else
    {
        unsigned char l_465 = 251UL;
        int l_477 = 0x2C3858F7L;
        int *l_491 = &g_5;
        int l_528 = 0x875F6C4FL;
        int *l_529 = (void*)0;
        int **l_559 = &l_481;
        unsigned **l_564 = &l_485;
        int *l_664 = &g_31;
        char **l_692 = &l_405;
        if ((*l_404))
        {
            unsigned short l_472 = 65535UL;
            unsigned **l_486 = &l_485;
            unsigned short l_487 = 0x18E2L;
            int *l_504 = &g_61;
            int *** const *l_505 = (void*)0;
            char l_542 = (-7L);
            if ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((p_8 ^ (*g_135)) || (safe_div_func_int32_t_s_s((l_472 < 1L), ((l_477 = (safe_add_func_int32_t_s_s((l_465 | g_296), (safe_mod_func_int8_t_s_s(6L, (((~l_465) & 0xC45471E0L) & g_37)))))) ^ l_472)))), (***g_313))), (**g_246))))
            {
                int *l_480 = (void*)0;
                int *l_501 = &g_158;
                int **l_500 = &l_501;
                int *l_503 = &l_490;
                int **l_502 = &l_503;
                int ****l_507 = &g_133;
                for (g_113 = 0; (g_113 >= 39); g_113 = safe_add_func_uint32_t_u_u(g_113, 5))
                {
                    (**g_435) = l_481;

                    ;
                    (***g_133) = ((safe_div_func_uint8_t_u_u((((l_486 = l_484) != (void*)0) < l_487), (**g_314))) >= (0xBE3DL >= ((safe_add_func_uint32_t_u_u(l_490, (**g_449))) || (***g_313))));
                    (*l_404) = p_8;
                }

                ;
                if ((*l_404))
                {
                    (*g_436) = l_504;

                    ;
                }
                else
                {
                    int *** const **l_506 = &l_505;
                    int *l_522 = &l_490;
                    unsigned short *l_533 = &l_487;
                    unsigned short **l_532 = &l_533;
                    unsigned l_547 = 0UL;
                    if ((((*l_506) = l_505) != l_507))
                    {
                        unsigned short *l_510 = &g_64;
                        unsigned short *l_511 = &l_472;
                        (**g_134) = l_477;
                        return (**g_449);
                    }
                    else
                    {
                        short l_513 = 0x461CL;
                        (**g_133) = func_26((**l_507), (**g_133));

                        ;
                        (**g_133) = (*l_12);

                        ;
                        (*g_134) = (**g_133);
                        (*l_481) = (((**g_246) | (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0x8D75L, (**g_246))), (((safe_add_func_int8_t_s_s((+((safe_sub_func_uint8_t_u_u(p_7, l_513)) >= (**g_314))), g_248)) == g_461) != (**g_449))))) && 0xECL);
                    }

                    ;
                    if (l_465)
                    {
                        int l_525 = 0xE568839BL;
                        (*l_481) = p_8;
                        (*l_404) = ((safe_rshift_func_uint8_t_u_s(((65532UL | l_525) > (p_7 <= ((-5L) || (safe_rshift_func_uint8_t_u_s(1UL, g_25))))), 4)) >= (p_8 && (*l_504)));
                        (*g_134) = (*g_134);
                        (*l_404) = p_8;
                    }
                    else
                    {
                        (**g_435) = ((**g_133) = (*g_134));

                        ;
                    }

                    ;
                    if (((safe_rshift_func_uint8_t_u_u(l_547, p_8)) & ((*l_485) = ((void*)0 != l_548))))
                    {
                        unsigned *l_555 = &g_79;
                        (*l_481) = ((*l_404) = (((safe_unary_minus_func_uint16_t_u(p_8)) && ((safe_sub_func_int32_t_s_s((!l_528), (*g_450))) | ((l_554 = (*l_507)) == &g_436))) != (**g_246)));

                        ;
                        (*l_504) = ((*l_486) != l_555);
                    }
                    else
                    {
                        int l_556 = 0xA3A3B24CL;
                        (*l_481) = (((*g_121) = p_7) < 247UL);
                        (**g_435) = ((*l_559) = (**g_133));

                        ;
                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                (**g_435) = (*g_436);
            }

            ;
            ;
            ;
            ;
            if ((((*l_404) > (safe_div_func_uint8_t_u_u(255UL, ((***g_313) = 255UL)))) != (*l_404)))
            {
                int *l_562 = &l_528;
                (*g_436) = l_562;

                ;
            }
            else
            {
                int * const l_563 = &g_31;
                (*g_436) = (*g_436);
                (*g_134) = func_40(p_8, (*l_563));

                ;
                (*l_559) = (void*)0;

                ;
            }

            ;
            (*l_504) = p_7;
        }
        else
        {
            int *l_567 = &g_39;
            short *l_580 = &g_461;
            unsigned short *l_585 = (void*)0;
            unsigned short **l_584 = &l_585;
            unsigned short ***l_583 = &l_584;
            int l_586 = 0x768DE7A2L;
            int **l_589 = &l_13;
            const char *l_619 = &g_296;
            const char **l_618 = &l_619;
            char *l_623 = &g_291;
            int *l_699 = &l_477;
            unsigned char **l_700 = &g_121;
            unsigned char * const l_702 = &g_703;
            unsigned char * const *l_701 = &l_702;
            const int *l_722 = &g_61;
            const short *l_728 = &g_729;
            if ((safe_mod_func_int16_t_s_s(p_7, g_82)))
            {
                int *l_588 = &g_61;
                const char ***l_620 = &l_618;
                unsigned short l_628 = 5UL;
                int l_662 = 0xFD327A6EL;
                if (p_7)
                {
                    int *l_592 = &g_158;
                    const int l_599 = 6L;
                    (*g_436) = (**g_435);
                    (**g_435) = (*g_436);
                    (**g_134) = (g_39 ^ (g_118 & (safe_mod_func_int32_t_s_s((0x3A77274EL || 7UL), (safe_sub_func_uint32_t_u_u(0xE79A3B45L, p_8))))));
                }
                else
                {
                    int *l_615 = &l_586;
                    for (p_8 = 0; (p_8 <= 6); p_8 = safe_add_func_int32_t_s_s(p_8, 1))
                    {
                        (*l_559) = l_606;
                    }
                    (*l_481) = (1UL > p_7);
                }
                (**l_559) = p_7;
                if ((safe_div_func_uint32_t_u_u(((((*l_620) = l_618) == (void*)0) < (safe_div_func_int8_t_s_s(((l_623 = l_623) == &p_7), (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_628 && (**g_246)), 0L)), 6))))), 3UL)))
                {
                    unsigned l_634 = 0x9E2DA020L;
                    char l_645 = (-1L);
                    int *l_663 = &l_477;
                    int *l_668 = (void*)0;
                    for (g_61 = 17; (g_61 != (-26)); g_61 = safe_sub_func_int32_t_s_s(g_61, 5))
                    {
                        unsigned l_659 = 0x66F9AEC5L;
                        l_477 = ((**g_134) = (l_634 = (-1L)));
                        (*l_606) = (g_37 & (((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_8, p_7)), (*l_588))), (**g_314))) || p_8) > (safe_sub_func_int8_t_s_s(p_7, (safe_rshift_func_uint16_t_u_u(((*g_247) > l_645), 4))))));
                        (**g_435) = func_40(((safe_lshift_func_uint8_t_u_u(253UL, (((***g_313) == (***g_313)) >= (~((*g_247) != (safe_lshift_func_uint16_t_u_u(l_634, (safe_sub_func_uint32_t_u_u((*l_606), ((*l_485) = (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(0x2CL, (p_7 || (safe_mod_func_uint32_t_u_u(p_8, (**g_449)))))), (*l_588))))))))))))))) <= p_7), g_25);

                        ;
                        if (l_659)
                            continue;
                    }

                    ;
                    (*l_559) = l_588;

                    ;
                    (*l_481) = l_634;
                    if ((safe_rshift_func_int16_t_s_u(l_662, 14)))
                    {
                        unsigned ***l_667 = &g_665;
                        (*l_12) = (*l_559);

                        ;
                        l_664 = (*l_559);

                        ;
                        (*g_436) = ((**l_554) = &l_662);

                        ;
                        ;
                        (*l_667) = g_665;
                    }
                    else
                    {
                        unsigned short *l_671 = &g_64;
                        (**g_435) = &l_662;

                        ;
                        (*g_436) = (**g_133);

                        ;
                        (**g_133) = (void*)0;

                        ;
                        (*l_606) = (safe_lshift_func_uint16_t_u_s(((*l_671) = p_7), 5));
                    }

                    ;
                    ;
                    ;
                    ;
                }
                else
                {
                    if (p_8)
                    {
                        (*l_12) = &l_662;

                        ;
                        (**g_435) = (**l_554);

                        ;
                    }
                    else
                    {
                        return p_7;
                    }

                    ;
                    ;
                    (**g_133) = func_40(p_8, p_8);
                    (*g_436) = (**g_435);
                }

                ;
                ;
                ;
                ;
                ;
            }
            else
            {
                int **l_680 = &l_481;
                (*l_664) = 0L;
                if (((safe_unary_minus_func_uint16_t_u((**l_559))) && (-6L)))
                {
                    int *l_673 = (void*)0;
                    (**g_435) = l_673;

                    ;
                    for (l_490 = 0; (l_490 == (-13)); l_490 = safe_sub_func_int32_t_s_s(l_490, 1))
                    {
                        int **l_681 = &l_13;
                        const char ***l_696 = (void*)0;
                        const char ***l_697 = &l_693;
                        unsigned short *l_698 = &l_403;
                        (*l_664) = (!((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_8, (l_680 != l_681))), ((*l_698) = (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_106, g_117)), (**l_559))) != (l_692 != ((*l_697) = (g_695 = l_693)))), ((p_7 | 0x06A98C3AL) & 1UL))), g_31))))) | 7UL));

                        ;
                        if (p_8)
                            break;
                        if (p_7)
                            break;
                    }

                    ;
                    (*g_436) = l_699;

                    ;
                }
                else
                {
                    char l_704 = 1L;
                    if ((!((***g_133) && 4294967294UL)))
                    {
                        (***g_133) = p_8;
                        (**g_133) = (**l_554);

                        ;
                    }
                    else
                    {
                        unsigned *l_720 = (void*)0;
                        unsigned *l_721 = &g_79;
                        (**l_559) = (((+((l_700 != (l_701 = (*g_313))) == (+(((!(p_8 & l_704)) >= (g_117 = (safe_lshift_func_uint16_t_u_s((((**l_680) & p_7) && p_8), p_7)))) | p_7)))) == 65532UL) >= 0UL);

                        ;
                    }

                    ;
                    ;
                    (**g_435) = (**g_435);
                }

                ;
                ;
                ;
                ;
                l_722 = (**g_435);

                ;
                (*g_436) = (**g_435);
            }



            ;
            ;
            ;
            ;
            ;
            ;
            (*l_554) = &l_664;

            ;
            (*l_699) = ((**l_559) = ((safe_rshift_func_uint8_t_u_s(0xC4L, p_8)) | ((((*l_580) = (p_8 ^ (***g_313))) <= (safe_mod_func_int16_t_s_s(((l_727 != (l_728 = &g_148)) && p_7), (**l_12)))) >= 0x47L)));

            ;
        }


        ;

        ;
        ;
        ;
        ;
        ;
    }




    ;
    ;
    ;
    ;
    return (**g_449);


}







static int * func_9(int * p_10)
{
    int *l_30 = &g_31;
    int **l_29 = &l_30;
    int *l_36 = &g_37;
    int *l_38 = &g_39;
    unsigned l_257 = 4294967295UL;
    (*l_29) = ((**g_133) = func_14(func_18(((g_24 == ((*l_29) = func_26(l_29, func_32(((*l_38) = ((*l_36) = g_5)), &g_31, &g_31)))) & l_257), (5L | (*g_247)), l_29, l_257, l_29), p_10, p_10));

    ;
    ;
    ;
    ;
    return (**g_133);


}







static int * func_14(int * p_15, const int * p_16, int * const p_17)
{
    int *l_356 = &g_158;
    int *l_357 = (void*)0;
    int l_360 = 0x91FE3648L;
    unsigned *l_361 = &g_113;
    int l_371 = (-9L);
    int *l_375 = &l_371;
    unsigned l_394 = 0xD22E0137L;
    int *l_396 = &l_360;
    for (g_158 = 0; (g_158 <= 22); g_158++)
    {
        int *l_350 = (void*)0;
        int *l_351 = (void*)0;
        (*p_15) = 1L;
        (**g_133) = l_350;

        ;
        return l_351;


    }
    (*p_15) = ((**g_314) ^ 0L);
    if ((safe_div_func_int8_t_s_s(6L, (safe_rshift_func_int16_t_s_u((((l_356 = p_15) == l_357) && (safe_sub_func_int32_t_s_s((((3L | l_360) <= ((*p_15) = (l_360 && ((*l_361) = l_360)))) ^ l_360), (*g_24)))), l_360)))))
    {
        const int **l_362 = (void*)0;
        const int **l_363 = &g_24;
        (*l_363) = p_16;

        ;
    }
    else
    {
        int *l_366 = &g_31;
        l_371 = ((l_360 = ((((*p_15) = (-1L)) != ((*l_366) = (*g_24))) & (safe_mod_func_uint32_t_u_u(((+(&g_113 == p_15)) != ((safe_lshift_func_int16_t_s_u((((**g_314) > (g_64 || g_113)) < 0x322BL), 6)) >= g_291)), 4294967295UL)))) > l_371);
    }

    ;
    ;
    if (((*p_15) = (g_372 == (void*)0)))
    {
        int *l_374 = &l_360;
        (**g_133) = &l_371;

        ;
    }
    else
    {
        unsigned short l_393 = 65535UL;
        for (g_82 = (-22); (g_82 == 7); ++g_82)
        {
            (*p_15) = (-10L);
            for (g_106 = 0; (g_106 == 45); ++g_106)
            {
                for (g_291 = (-12); (g_291 <= 5); g_291 = safe_add_func_uint16_t_u_u(g_291, 1))
                {
                    (**g_133) = func_26(&p_15, &l_360);

                    ;
                    (*g_134) = (*g_134);
                }
            }
        }
        (*p_15) = 0L;
        for (g_291 = 0; (g_291 >= (-17)); g_291 = safe_sub_func_uint32_t_u_u(g_291, 6))
        {
            unsigned short l_392 = 1UL;
            int *l_395 = &g_31;
            (**g_133) = p_15;

            ;
            (**g_134) = (g_291 && (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((l_394 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(l_392, g_158)), g_82))) != (((((*l_375) ^ l_393) ^ (*p_15)) ^ 1UL) > l_393)) ^ l_392), (*g_121))), l_392)));
            (**g_133) = (void*)0;

            ;
            (**g_133) = (*g_134);
        }
    }


    return p_15;



}







static int * func_18(unsigned short p_19, unsigned short p_20, int * const * p_21, int p_22, int ** p_23)
{
    int *l_261 = (void*)0;
    int **l_260 = &l_261;
    int l_262 = (-7L);
    unsigned short l_263 = 5UL;
    unsigned short *l_264 = &l_263;
    unsigned l_289 = 0x868C946FL;
    char *l_290 = &g_291;
    const char *l_295 = &g_296;
    const char **l_294 = &l_295;
    short l_299 = 0x6880L;
    unsigned char **l_300 = (void*)0;
    unsigned char **l_301 = &g_121;
    unsigned char *l_303 = &g_82;
    unsigned char **l_302 = &l_303;
    int *l_312 = (void*)0;
    int *l_345 = &g_31;
    unsigned *l_347 = &g_79;
    unsigned **l_346 = &l_347;
    if ((safe_sub_func_uint16_t_u_u((p_22 & 0x6FB5L), ((*l_264) = (l_262 & (65531UL > g_118))))))
    {
        int *l_269 = (void*)0;
        for (g_61 = 0; (g_61 > 3); ++g_61)
        {
            unsigned char **l_268 = (void*)0;
            unsigned char ***l_267 = &l_268;
            (*l_267) = (void*)0;
        }
        (*g_134) = l_269;

        ;
    }
    else
    {
        char l_272 = 0xE2L;
        unsigned short * const l_273 = &l_263;
        if ((safe_add_func_uint16_t_u_u(p_22, 0UL)))
        {
            unsigned short **l_274 = (void*)0;
            unsigned short **l_275 = (void*)0;
            unsigned short **l_276 = (void*)0;
            unsigned short *l_277 = &g_64;
            unsigned char *l_278 = &g_82;
            char *l_281 = (void*)0;
            char *l_282 = &l_272;
            int l_283 = (-8L);
            (**p_21) = ((**p_21) && ((**p_23) != ((l_272 || ((*l_282) = ((((*l_278) = (l_273 == (l_277 = &p_20))) < ((l_263 == l_272) > 0x9014L)) && (safe_lshift_func_int16_t_s_s(g_79, 14))))) || l_283)));

            ;
        }
        else
        {
            int *l_284 = (void*)0;
            int **l_285 = (void*)0;
            int **l_286 = &g_135;
            (**p_21) = (**p_23);
            (*l_286) = (*p_21);

            ;
            (**g_133) = (void*)0;

            ;
        }
        (**p_21) = (-1L);
    }
    if (((safe_div_func_uint32_t_u_u(p_19, (65535UL | (255UL < (~((*l_290) = l_289)))))) ^ (g_82 = ((safe_sub_func_uint32_t_u_u((l_290 != ((*l_294) = l_290)), l_262)) <= (l_299 > (((*l_302) = ((*l_301) = l_290)) != &g_82))))))
    {
        char l_308 = (-2L);
        const unsigned short l_315 = 65535UL;
        if (l_289)
        {
            int *l_309 = &g_158;
            int l_316 = 0x5266A66FL;
            unsigned *l_317 = &g_113;
            unsigned char *l_318 = &g_82;
            (**p_23) = (((safe_rshift_func_int16_t_s_s(l_308, 6)) ^ (((*l_318) = ((*l_303) = (((*g_121) > (safe_mod_func_uint32_t_u_u(((*l_317) = (l_315 <= l_316)), 6L))) && p_19))) == l_316)) | 6UL);
            (**p_21) = l_316;
        }
        else
        {
            const unsigned char l_335 = 0xC7L;
            (**g_133) = func_40((safe_div_func_uint8_t_u_u(0x0DL, (safe_add_func_uint16_t_u_u(l_335, (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_263, (safe_add_func_int32_t_s_s(((**p_21) = l_335), ((**g_246) | ((254UL | (***g_313)) >= l_289)))))) || p_22), (*g_247))), 2)))))), g_118);

            ;
        }


    }
    else
    {
        int *l_344 = &g_31;
        l_345 = l_344;
    }

    ;

    ;
    ;
    (**p_21) = (&g_113 != ((*l_346) = &g_106));

    ;
    return (*p_23);


}







static int * func_26(int ** p_27, int * p_28)
{
    int l_242 = (-1L);
    const unsigned short *l_244 = &g_64;
    const unsigned short **l_243 = &l_244;
    const unsigned short ***l_245 = &l_243;
    const unsigned short **l_250 = &l_244;
    const unsigned short ***l_249 = &l_250;
    const unsigned short **l_251 = &l_244;
    unsigned short *l_253 = &g_64;
    unsigned short **l_252 = &l_253;
    int **l_254 = (void*)0;
    int *l_256 = &g_37;
    int **l_255 = &l_256;
    (**p_27) = (g_148 ^ (safe_mod_func_int32_t_s_s(l_242, l_242)));
    return &g_61;


}







static int * func_32(const int p_33, int * p_34, int * p_35)
{
    int *l_55 = &g_5;
    int *l_57 = (void*)0;
    int **l_56 = &l_57;
    const char l_59 = 1L;
    char *l_60 = (void*)0;
    (*l_56) = func_40(func_43(p_34, (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(func_52(l_55, (g_61 = (((((((*l_56) = &g_31) == p_34) & (((*p_34) = ((&p_34 != &g_24) ^ (((safe_unary_minus_func_int16_t_s(0xE8EAL)) == 0x16037280L) == l_59))) || 0x3E4F6F48L)) != g_25) <= l_59) < g_37))), p_33)), (-10L))), l_59, &g_39), g_25);

    ;
    ;

    return p_34;


}







static int * func_40(unsigned short p_41, const unsigned p_42)
{
    short l_238 = 0L;
    int *l_239 = &g_31;
    l_238 = (g_148 ^ p_41);
    return l_239;


}







static unsigned short func_43(int * p_44, unsigned p_45, int p_46, int * p_47)
{
    char l_175 = 0xE8L;
    unsigned char **l_192 = (void*)0;
    unsigned char ****l_198 = (void*)0;
    unsigned char ***l_200 = (void*)0;
    unsigned char ****l_199 = &l_200;
    int *l_201 = &g_39;
    unsigned char l_203 = 255UL;
    char l_215 = (-1L);
    int l_219 = (-8L);
    unsigned short l_237 = 0x67C5L;
    if ((((**g_134) = l_175) > (safe_div_func_uint8_t_u_u((0x2793L || g_113), l_175))))
    {
        char l_178 = (-3L);
        (*g_135) = l_178;
    }
    else
    {
        short l_181 = 0xC6B0L;
        for (g_118 = 0; (g_118 <= 44); ++g_118)
        {
            if (p_45)
            {
                (**g_133) = (**g_133);
            }
            else
            {
                (*g_134) = (void*)0;

                ;
                if (p_46)
                    continue;
            }
            if (l_181)
                continue;
        }

        ;
        for (g_39 = 0; (g_39 >= (-21)); g_39--)
        {
            unsigned *l_187 = &g_113;
            unsigned **l_186 = &l_187;
            int *l_188 = (void*)0;
            int *l_189 = &g_61;
            (*l_189) = (safe_rshift_func_uint8_t_u_u((p_47 != ((*l_186) = &g_113)), 3));
            (*g_134) = (*g_134);
            (*l_189) = (safe_div_func_int16_t_s_s(p_46, g_25));
        }
        if ((l_181 & 65531UL))
        {
            unsigned char ***l_193 = &l_192;
            (*g_134) = &p_46;

            ;
            (*g_135) = p_46;
            (*l_193) = l_192;
        }
        else
        {
            int *l_194 = &g_61;
            int *l_195 = &g_31;
            (*l_195) = ((*l_194) = 0xF3C2B3F8L);
            (**g_133) = (void*)0;

            ;
        }

        ;
    }

    ;
    if ((safe_rshift_func_int8_t_s_u(g_79, (((*l_199) = &l_192) == (void*)0))))
    {
        unsigned l_202 = 0xAC40A1D1L;
        int l_204 = 0xBAC05BC8L;
        int l_214 = 0L;
        unsigned char *l_218 = &g_82;
        char *l_222 = &l_215;
        l_204 = (l_203 >= 0L);
        p_46 = ((p_46 || g_148) <= g_79);
        for (g_39 = (-26); (g_39 == 4); ++g_39)
        {
            unsigned *l_209 = &g_79;
            p_46 = (p_46 != ((((l_204 & ((safe_sub_func_uint32_t_u_u(((*l_209) = l_175), (g_106 = 0x46D5B373L))) || (l_214 = (safe_sub_func_int32_t_s_s(l_204, (safe_div_func_int32_t_s_s((-1L), g_113))))))) > l_215) <= 0x8726DF7CL) > l_202));
        }
        if ((*g_24))
        {
            unsigned short l_223 = 2UL;
            return l_223;


        }
        else
        {
            short l_233 = 1L;
            for (l_202 = 0; (l_202 == 8); l_202++)
            {
                (**g_133) = (void*)0;

                ;
            }
            for (g_158 = 0; (g_158 < 19); g_158++)
            {
                unsigned l_232 = 0xE6A80779L;
                if (p_46)
                {
                    (**g_133) = &p_46;

                    ;
                }
                else
                {
                    return p_45;


                }

                ;
                (*g_134) = (**g_133);
                for (g_118 = 0; (g_118 >= 20); g_118++)
                {
                    int l_236 = 0x2AD83BFFL;
                    if ((*g_135))
                        break;
                    (***g_133) = (safe_mod_func_uint8_t_u_u(((l_232 ^ ((g_113 < (l_233 <= (safe_add_func_int16_t_s_s((l_204 = 3L), (l_236 || (l_214 = (+0x84L))))))) >= (((void*)0 == &l_218) & p_45))) >= p_45), p_45));
                }
                (**g_133) = (*g_134);
            }
        }
    }
    else
    {
        (**g_133) = (**g_133);
    }

    ;
    return l_237;


}







static char func_52(int * p_53, char p_54)
{
    int * const l_68 = &g_61;
    int * const *l_67 = &l_68;
    int * const **l_69 = &l_67;
    int l_77 = 0xD7AD251AL;
    unsigned *l_78 = &g_79;
    const int l_80 = 0x63F78CAFL;
    unsigned char *l_81 = (void*)0;
    unsigned short l_88 = 0xE1B0L;
    unsigned short **l_164 = (void*)0;
    int *l_167 = &g_61;
    unsigned short l_174 = 65531UL;
    if (((((g_64 = g_39) || (safe_add_func_int8_t_s_s(((-5L) > (0x5392L ^ (&g_24 != ((*l_69) = l_67)))), (!0x26L)))) < ((g_82 = ((safe_sub_func_uint8_t_u_u(p_54, (((((*l_68) = (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s(((safe_div_func_int8_t_s_s((l_77 <= (((*l_78) = (((p_54 > (*l_68)) < g_39) ^ p_54)) > 0x153D5795L)), 0x03L)) && l_80))) != 0L), p_54))) != p_54) | (*g_24)) != g_5))) > 255UL)) <= p_54)) > p_54))
    {
        int l_128 = 0xC8CE6C94L;
        unsigned short *l_136 = &g_117;
        if (((void*)0 != p_53))
        {
            (***l_69) = (*g_24);
        }
        else
        {
            int l_94 = (-1L);
            unsigned char l_142 = 0UL;
            if ((p_54 || ((safe_lshift_func_uint16_t_u_u(65527UL, g_31)) >= g_37)))
            {
                unsigned short l_87 = 1UL;
                int l_109 = (-10L);
                (**l_67) = (*g_24);
                if ((safe_div_func_uint8_t_u_u(((g_79 >= (*l_68)) && l_87), l_88)))
                {
                    short l_100 = 0x3FF5L;
                    int *l_108 = &g_31;
                    int **l_107 = &l_108;
                    int l_111 = 0L;
                    (**l_67) = ((((*l_78) = g_37) == ((g_25 == g_31) > ((safe_div_func_uint32_t_u_u(p_54, (g_82 ^ (0xF93DL >= g_25)))) <= 0x175EL))) == l_87);
                    for (l_88 = 0; (l_88 > 59); l_88 = safe_add_func_int16_t_s_s(l_88, 1))
                    {
                        int *l_93 = &g_31;
                        unsigned *l_105 = &g_106;
                        int *l_110 = (void*)0;
                        unsigned *l_112 = &g_113;
                        unsigned short *l_114 = &g_64;
                        unsigned short *l_115 = &l_87;
                        unsigned short *l_116 = &g_117;
                        (***l_69) = (l_93 != p_53);
                        (*l_93) = (l_94 && ((void*)0 != p_53));
                        g_118 = (((*l_116) = ((*l_115) = ((*l_114) = (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_add_func_int32_t_s_s((g_61 = (safe_unary_minus_func_int8_t_s(0xB3L))), (l_94 | ((l_100 || (g_79 != (safe_add_func_uint32_t_u_u(((*l_112) = (safe_lshift_func_uint16_t_u_s(l_94, ((l_100 >= (l_111 = (((*l_105) = 4294967295UL) >= (l_109 = ((*l_93) = (l_107 == &l_93)))))) != 0x68L)))), l_94)))) < 0x0CL))))))))) != 0x265EL);
                        if ((*l_68))
                            break;
                    }
                    (*l_68) = ((**l_67) > (safe_div_func_int8_t_s_s(((g_121 = l_81) != &g_82), (safe_lshift_func_int16_t_s_s(((*g_24) ^ (**l_67)), 3)))));

                    ;
                    (**l_107) = (0x8FL < 0xEDL);
                }
                else
                {
                    const int *l_125 = &g_31;
                    const int **l_124 = &l_125;
                    unsigned short *l_137 = &g_117;
                    int *l_151 = &g_31;
                    (*l_124) = &g_25;

                    ;
                    for (g_113 = 0; (g_113 >= 18); g_113++)
                    {
                        return l_128;
                    }
                    if ((safe_div_func_uint8_t_u_u(((*l_68) = ((*g_121) = 0x23L)), (+((-1L) < g_79)))))
                    {
                        (*l_124) = p_53;

                        ;
                        (***l_69) = ((g_113 = (g_133 != (void*)0)) >= (p_54 > (0x70L & ((((void*)0 == &g_134) <= ((**l_124) == 0x27L)) && ((l_136 == l_137) ^ (***l_69))))));
                        (***g_133) = p_54;
                    }
                    else
                    {
                        short *l_147 = &g_148;
                        (**g_134) = (*g_24);
                        (***g_133) = (g_117 & (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((((void*)0 != &g_134) != ((void*)0 != (*g_133))) == l_142) | (*l_68)), (g_64 & ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((((*l_147) = p_54) | 1L) < p_54), (**l_124))), l_109)) & (**l_67))))) > 0xA53E6A3FL), g_61)));
                        (*l_68) = (p_54 != (safe_sub_func_uint16_t_u_u((9UL >= ((void*)0 == &g_148)), (&g_39 == (void*)0))));
                    }

                    ;
                    (*l_151) = ((***l_69) = 0x73AC0290L);
                }

                ;
            }
            else
            {
                for (l_77 = 11; (l_77 != (-29)); --l_77)
                {
                    unsigned short ***l_165 = &l_164;
                    int **l_166 = &g_135;
                }
                (*g_134) = (*g_134);
            }

            ;
        }

        ;
    }
    else
    {
        unsigned char l_172 = 0UL;
        unsigned short *l_173 = &g_117;
        l_167 = (**l_69);
        (*g_135) = (safe_div_func_int8_t_s_s((0x9F4FA422L == (safe_rshift_func_uint16_t_u_s(l_172, ((((*l_173) = g_5) && (***l_69)) == (l_174 = l_172))))), (***l_69)));
    }

    ;
    return p_54;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
