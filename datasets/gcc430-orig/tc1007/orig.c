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



static const int g_7 = 4L;
static unsigned char g_13 = 0x6BL;
static int g_26 = 0L;
static long long g_41 = 0L;
static short g_43 = (-10L);
static int g_47 = 0x6E1459F4L;
static unsigned char *g_85 = (void*)0;
static unsigned char g_105 = 255UL;
static unsigned char **g_109 = &g_85;
static char g_111 = 4L;
static char g_113 = 0L;
static unsigned short g_125 = 65535UL;
static unsigned short g_127 = 65530UL;
static unsigned g_132 = 0x901A93EFL;
static const short g_153 = 9L;
static const short *g_152 = &g_153;
static int g_191 = 0x513A33BAL;
static long long ***g_205 = (void*)0;
static int g_208 = (-1L);
static long long * const *g_237 = (void*)0;
static unsigned long long g_254 = 0UL;
static const int *g_255 = (void*)0;
static unsigned short *g_389 = (void*)0;
static unsigned short **g_388 = &g_389;
static int g_505 = 0L;
static int *g_504 = &g_505;



static unsigned long long func_1(void);
static char func_2(unsigned long long p_3);
static unsigned long long func_8(const int * p_9, unsigned char p_10, unsigned char p_11);
static int * func_14(unsigned char * const p_15, int * p_16, unsigned p_17, char p_18);
static unsigned char * func_19(int * p_20, int * p_21, const short p_22, unsigned p_23, int p_24);
static unsigned func_31(int * p_32, char p_33, int * p_34);
static char func_35(char p_36, short p_37);
static char func_52(unsigned p_53);
static unsigned char func_59(int p_60, unsigned p_61, const short * p_62, char p_63);
static unsigned func_65(char p_66, const int p_67, unsigned char * p_68, const int p_69);
static unsigned long long func_1(void)
{
    const int *l_6 = &g_7;
    unsigned char *l_12 = &g_13;
    short *l_462 = (void*)0;
    short *l_463 = &g_43;
    long long **l_464 = (void*)0;
    l_6 = (func_2((safe_sub_func_uint8_t_u_u((((*l_463) = ((l_6 != &g_7) | func_8(l_6, ((*l_12) = (*l_6)), (*l_6)))) && ((g_191 > (l_464 != g_237)) || 18446744073709551614UL)), (*l_6)))) , l_6);
    (*g_504) = ((void*)0 == &g_153);
    return (*l_6);
}







static char func_2(unsigned long long p_3)
{
    unsigned l_465 = 18446744073709551615UL;
    int *l_466 = (void*)0;
    int *l_467 = &g_208;
    int **l_468 = &l_466;
    unsigned char *l_475 = &g_105;
    unsigned char l_476 = 255UL;
    int l_477 = 0x6308EB30L;
    long long l_478 = 0x73066D88AE0489ACLL;
    const unsigned l_479 = 0xC724C184L;
    unsigned char l_480 = 246UL;
    short *l_481 = &g_43;
    int *l_491 = &g_208;
    int *l_500 = &g_26;
    g_26 = ((*l_467) = l_465);
    (*l_468) = &g_26;
    if (((p_3 ^ ((((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((-3L), 7UL)), (safe_lshift_func_int16_t_s_s(((*l_481) = (0x0AL > func_31(((*l_468) = func_14((*g_109), (*l_468), g_111, (**l_468))), g_13, &g_47))), (*l_467))))) , (**l_468)) >= 0x28C4L) , 1UL)) > p_3))
    {
        unsigned char * const l_502 = &g_13;
        int l_503 = 0x70CE0AC1L;
        (*l_467) = (**l_468);
        for (g_254 = 0; (g_254 >= 6); g_254++)
        {
            unsigned long long l_487 = 1UL;
            unsigned short *l_488 = &g_125;
            int *l_495 = (void*)0;
            unsigned char * const l_501 = &g_105;
            if ((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(g_41)) != (+((*l_488) = l_487))), 0xA2L)))
            {
                for (g_26 = 0; (g_26 < (-3)); g_26 = safe_sub_func_int16_t_s_s(g_26, 7))
                {
                    (**l_468) = func_31(&g_208, p_3, (*l_468));
                    (*l_467) = p_3;
                }
            }
            else
            {
                unsigned long long l_494 = 9UL;
                unsigned char ***l_499 = &g_109;
                (*l_468) = l_491;
                for (g_105 = 0; (g_105 >= 35); g_105++)
                {
                    char *l_497 = &g_113;
                    char **l_496 = &l_497;
                    int l_498 = 0L;
                    if (p_3)
                        break;
                    l_495 = func_14((*g_109), func_14((*g_109), (*l_468), l_494, p_3), p_3, g_43);
                    l_498 = (((*l_496) = (void*)0) == (void*)0);
                }
                (*l_499) = &g_85;
                (*l_468) = l_500;
            }
            (*l_468) = func_14(l_501, func_14(func_19(func_14(l_502, &g_47, (0x0256FF44L ^ g_111), (p_3 , p_3)), &g_26, (*g_152), g_105, l_503), g_504, p_3, g_43), p_3, g_254);
        }
        return p_3;
    }
    else
    {
        int l_508 = 0x8392EB8EL;
        unsigned char * const l_509 = &g_105;
        unsigned long long l_510 = 1UL;
        int *l_521 = (void*)0;
        unsigned char *l_522 = &l_476;
        for (l_476 = 0; (l_476 < 17); l_476 = safe_add_func_int16_t_s_s(l_476, 1))
        {
            unsigned long long l_511 = 18446744073709551610UL;
            unsigned short *l_512 = &g_127;
            l_508 = 0L;
            (*l_468) = func_14(l_509, &g_191, (p_3 == (l_510 ^ ((l_511 <= l_510) == (0UL ^ (((p_3 && ((*l_512) = p_3)) & 0xED2619A1FCFAB749LL) && p_3))))), g_132);
            (**l_468) = (((safe_mod_func_uint64_t_u_u((p_3 , g_208), ((safe_lshift_func_uint8_t_u_s(0xACL, 0)) && (((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_3, 0x498AL)) < func_65(l_511, l_511, l_522, l_511)), p_3)) ^ 0x2FB6L) , (*g_152))))) ^ p_3) , (*g_504));
        }
    }
    return g_7;
}







static unsigned long long func_8(const int * p_9, unsigned char p_10, unsigned char p_11)
{
    int *l_25 = &g_26;
    long long *l_40 = &g_41;
    short *l_42 = &g_43;
    unsigned l_353 = 0xFEB27B65L;
    int **l_461 = &l_25;
    (*l_461) = func_14(func_19(l_25, &g_26, (*l_25), g_13, (safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s(((*l_25) , ((func_31(l_25, func_35((safe_lshift_func_uint8_t_u_u(((*p_9) , 0UL), 5)), ((*l_42) = (((*l_40) = (p_10 != 4L)) > p_11))), l_25) , 0x2F6D8BA3A87524CALL) <= l_353)), (*l_25))) ^ p_10) > 0x15L), p_11))), l_25, p_10, g_13);
    (*l_461) = (void*)0;
    return g_7;
}







static int * func_14(unsigned char * const p_15, int * p_16, unsigned p_17, char p_18)
{
    int *l_460 = &g_47;
    for (g_127 = 1; (g_127 != 31); g_127 = safe_add_func_uint16_t_u_u(g_127, 2))
    {
        int *l_459 = (void*)0;
        int **l_458 = &l_459;
        (*l_458) = p_16;
        (*p_16) = func_52(((**l_458) & (0xB361L || 0x3FC7L)));
        (*l_458) = &g_47;
    }
    return l_460;
}







static unsigned char * func_19(int * p_20, int * p_21, const short p_22, unsigned p_23, int p_24)
{
    unsigned char *l_360 = &g_105;
    int l_369 = 6L;
    short * const l_372 = &g_43;
    int *l_374 = &g_208;
    int **l_373 = &l_374;
    unsigned long long *l_375 = &g_254;
    unsigned long long **l_376 = &l_375;
    unsigned long long *l_377 = &g_254;
    unsigned long long **l_378 = &l_377;
    long long *l_391 = &g_41;
    long long * const *l_390 = &l_391;
    long long l_392 = 0x50B3E28EC3E9EDABLL;
    const unsigned l_418 = 0x5599A07CL;
    char *l_453 = &g_111;
    char l_454 = 0xC5L;
    char *l_455 = &l_454;
    (*l_373) = ((l_369 = (safe_add_func_uint16_t_u_u(g_113, (safe_mod_func_uint32_t_u_u(0x2D7BAE0BL, ((*p_20) = (safe_sub_func_uint8_t_u_u(((*l_360) = 0xC0L), ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((1L || p_22), (safe_rshift_func_uint16_t_u_u(g_153, 4)))) , (l_369 != (safe_lshift_func_int8_t_s_u((&p_22 != l_372), p_22)))), 0UL)), 6UL)) != p_24))))))))) , (void*)0);
    if ((((*l_376) = l_375) != ((*l_378) = l_377)))
    {
        unsigned short l_385 = 65528UL;
        int *l_393 = &g_208;
        int *l_408 = (void*)0;
        int *l_422 = (void*)0;
        (*p_20) = ((+((((g_153 , (safe_sub_func_int8_t_s_s(g_41, ((void*)0 != &g_255)))) | ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u(l_385, (safe_add_func_int16_t_s_s((((((((void*)0 != g_388) != 0UL) | (l_385 == l_385)) , p_22) , p_22) , p_23), p_24)))) , l_390) == (void*)0), l_392)) , (-4L))) <= (*g_152)) , l_385)) >= (*p_21));
        (*l_393) = ((*p_21) = g_26);
        for (l_385 = (-20); (l_385 >= 27); l_385 = safe_add_func_int8_t_s_s(l_385, 9))
        {
            for (g_47 = 0; (g_47 > (-12)); --g_47)
            {
                return (*g_109);
            }
        }
        for (g_208 = 20; (g_208 <= (-3)); g_208 = safe_sub_func_uint64_t_u_u(g_208, 1))
        {
            unsigned short l_416 = 0x3748L;
            char *l_421 = &g_111;
            unsigned short *l_423 = &g_127;
            for (g_111 = 0; (g_111 > (-25)); g_111 = safe_sub_func_int8_t_s_s(g_111, 3))
            {
                char l_415 = (-1L);
                int *l_417 = &g_191;
                for (g_113 = (-7); (g_113 != 15); ++g_113)
                {
                    long long l_411 = 0xC2AC4045477F4ADELL;
                    int **l_414 = &l_374;
                    l_416 = (((*p_21) = 1L) || (l_415 = ((((((**l_390) = (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_22, 2)), p_22))) , ((safe_rshift_func_int8_t_s_u((l_411 == (((safe_rshift_func_uint8_t_u_u(((*l_360) = l_411), 4)) ^ (l_414 != &g_255)) < p_24)), 0)) , 3L)) && 0x947EAB82L) & p_24) , (*l_393))));
                    (*l_373) = &g_208;
                    (*p_20) = (0x4488DE92L < (*p_21));
                }
                g_255 = (void*)0;
                (*l_417) = ((*p_20) = (*p_20));
            }
            if (g_254)
                break;
            (*p_20) = (((((*l_423) = (g_7 , (*l_393))) >= 1UL) < g_13) | p_24);
            (*l_373) = l_422;
        }
    }
    else
    {
        unsigned l_428 = 0x2C6A1D4FL;
        const short *l_429 = &g_43;
        char *l_436 = (void*)0;
        char *l_437 = (void*)0;
        char *l_438 = &g_111;
        if (((*p_20) = (((safe_mul_func_uint8_t_u_u((((**l_390) = ((0xFEFA8AE212ADDC4BLL ^ (0x08638680L > (safe_add_func_int16_t_s_s(((*g_152) == 0L), l_428)))) || p_23)) & 8L), 0xC8L)) <= p_23) , (*p_20))))
        {
            (*p_21) = (0x2D5CF314L != g_132);
        }
        else
        {
            const int *l_439 = &g_208;
            const int **l_440 = &l_439;
            (*l_440) = l_439;
            (*l_440) = &g_7;
        }
    }
    (*p_20) = ((safe_add_func_int8_t_s_s((g_111 || (safe_rshift_func_int8_t_s_u(((*l_455) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((g_43 > ((*l_453) = (safe_sub_func_int16_t_s_s((((*l_391) = (safe_sub_func_uint16_t_u_u(p_24, p_22))) > 0L), (*g_152))))) >= (-6L)), l_454)), (*p_21)))), p_24))), (-1L))) != l_392);
    return l_360;
}







static unsigned func_31(int * p_32, char p_33, int * p_34)
{
    int **l_343 = (void*)0;
    int *l_345 = &g_47;
    int **l_344 = &l_345;
    unsigned short *l_346 = &g_125;
    unsigned short **l_347 = (void*)0;
    unsigned short **l_348 = &l_346;
    int l_349 = (-1L);
    long long l_352 = 7L;
    (*l_344) = p_32;
    l_349 = (&g_127 == ((*l_348) = ((g_43 >= (*p_34)) , l_346)));
    (*l_344) = &g_191;
    for (g_41 = (-17); (g_41 > 23); ++g_41)
    {
        if ((*p_34))
            break;
    }
    return l_352;
}







static char func_35(char p_36, short p_37)
{
    short *l_44 = &g_43;
    int *l_45 = (void*)0;
    int *l_46 = &g_47;
    int l_64 = (-1L);
    unsigned char *l_70 = &g_13;
    int **l_266 = &l_45;
    unsigned char **l_318 = &g_85;
    unsigned char **l_319 = &g_85;
    (*l_46) = (&g_43 != l_44);
    for (g_47 = (-15); (g_47 <= (-12)); g_47 = safe_add_func_int8_t_s_s(g_47, 5))
    {
        unsigned char l_58 = 0xCBL;
        int l_257 = (-1L);
        l_64 = (safe_add_func_uint16_t_u_u(g_26, (func_52((safe_mul_func_uint8_t_u_u(g_13, ((l_257 = (safe_rshift_func_uint16_t_u_u(l_58, (func_59(l_64, (~func_65(p_37, p_36, l_70, p_37)), g_152, g_153) && p_36)))) | g_7)))) & 254UL)));
    }
    (*l_266) = &l_64;
    if ((0xAF559A891246E79FLL <= p_36))
    {
        int *l_267 = &g_208;
        (*l_266) = &g_191;
        (*l_266) = l_267;
    }
    else
    {
        unsigned char *l_272 = &g_105;
        int l_277 = 0x76C4515CL;
        char *l_278 = (void*)0;
        char *l_279 = &g_111;
        unsigned short *l_280 = &g_125;
        unsigned short *l_281 = &g_127;
        unsigned char *l_305 = &g_105;
        long long *l_342 = (void*)0;
        (*l_45) = (*l_45);
        if ((p_36 , (safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u(0x6D7DL)) , 0xBAFC14AFL) , l_277), (((*g_152) , &g_43) == (void*)0)))))
        {
            const long long l_287 = (-1L);
            unsigned long long l_290 = 0x8DEAA3913078B42CLL;
            int l_298 = 0L;
            int *l_303 = &g_47;
            long long *l_308 = &g_41;
            long long **l_307 = &l_308;
            long long ***l_306 = &l_307;
            if (((**l_266) = (((p_37 && func_52(p_36)) , p_36) ^ l_290)))
            {
                long long l_295 = 0x6E58BBD95422EF5DLL;
                (**l_266) = ((*l_46) = (((*l_272) = (safe_mul_func_uint8_t_u_u(((!(((safe_add_func_int8_t_s_s((p_37 & g_113), (!l_295))) , ((safe_rshift_func_int8_t_s_s((g_111 != ((g_191 >= p_37) , 18446744073709551613UL)), 0)) && p_36)) != g_43)) & l_298), p_37))) & p_36));
            }
            else
            {
                unsigned long long *l_304 = &g_254;
                if ((g_105 && (safe_rshift_func_int16_t_s_s(func_65(((((*l_304) = (1UL || (((safe_mod_func_int16_t_s_s((((&g_47 != &g_26) , &g_26) == l_303), (*l_45))) | 0UL) & p_36))) , (-1L)) , 1L), g_153, l_305, p_37), (*g_152)))))
                {
                    (*l_46) = p_36;
                    if ((p_36 <= (*l_303)))
                    {
                        return g_191;
                    }
                    else
                    {
                        (*l_266) = (*l_266);
                        return p_36;
                    }
                }
                else
                {
                    return p_36;
                }
            }
            (*l_46) = (*l_303);
            l_277 = (l_306 != &g_237);
        }
        else
        {
            unsigned char l_317 = 0xD5L;
            int l_320 = 1L;
            (**l_266) = (0xEC5664AEL || 4UL);
            l_320 = ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((p_36 , ((((((*l_46) == 0xA8A470504D8E8CD1LL) || (safe_mul_func_uint16_t_u_u((l_277 = (0L >= ((*l_44) = (l_277 == (safe_lshift_func_uint16_t_u_s(0x53F4L, l_317)))))), ((l_318 == (l_319 = &l_70)) != p_37)))) == p_36) > g_153) != 0x4FL)), 1UL)) <= l_317), l_317)) == (*g_152));
        }
        for (g_191 = 0; (g_191 < 3); g_191 = safe_add_func_int64_t_s_s(g_191, 6))
        {
            for (g_41 = (-14); (g_41 < 18); g_41 = safe_add_func_uint64_t_u_u(g_41, 1))
            {
                const int **l_325 = (void*)0;
                const int **l_326 = &g_255;
                (*l_326) = &g_7;
            }
            (*l_46) = g_26;
        }
    }
    return p_37;
}







static char func_52(unsigned p_53)
{
    int *l_259 = &g_191;
    int **l_258 = &l_259;
    int *l_265 = &g_191;
    (*l_258) = &g_47;
    (*l_258) = (g_7 , (*l_258));
    for (g_41 = 1; (g_41 != 23); ++g_41)
    {
        unsigned long long l_262 = 18446744073709551615UL;
        if (l_262)
            break;
        for (p_53 = 0; (p_53 != 17); ++p_53)
        {
            return p_53;
        }
    }
    (*l_265) = g_127;
    return g_26;
}







static unsigned char func_59(int p_60, unsigned p_61, const short * p_62, char p_63)
{
    unsigned l_154 = 18446744073709551612UL;
    short *l_183 = &g_43;
    unsigned char *l_184 = &g_105;
    const int *l_186 = &g_7;
    const int **l_185 = &l_186;
    if (((l_154 < (safe_add_func_uint16_t_u_u((((((p_61 == (safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s(p_61, (safe_lshift_func_uint8_t_u_s((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((+((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((*g_152), 2)), (func_65((((*l_183) = ((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_127, (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((*g_85), (safe_sub_func_uint8_t_u_u(p_60, (l_154 && (*p_62)))))), p_63)))), g_111)), g_113)) == 0xFC01L)) | l_154), l_154, l_184, p_60) , 0x5B6DL))) > 4294967295UL)), l_154)), g_47)) <= 254UL) != p_60), l_154)))) , 0x6E6AAC493E54A660LL) , g_13), l_154))) < l_154) ^ g_47) , l_185) == (void*)0), (**l_185)))) || (*l_186)))
    {
        const int *l_188 = &g_7;
        const int **l_187 = &l_188;
        (*l_187) = ((*l_185) = (void*)0);
    }
    else
    {
        int * const l_189 = (void*)0;
        (*l_185) = &p_60;
        if (p_60)
        {
            int *l_190 = &g_191;
            l_190 = l_189;
            p_60 = (0x39L <= (**g_109));
        }
        else
        {
            return (*g_85);
        }
    }
    if (((0xDFF3C429L <= g_47) != 1UL))
    {
        long long l_213 = 0x02B69C37587FDEBDLL;
        long long *l_226 = &g_41;
        long long **l_225 = &l_226;
        long long ***l_224 = &l_225;
        unsigned short l_227 = 0x8550L;
        int *l_252 = &g_47;
        int **l_251 = &l_252;
        for (g_125 = (-17); (g_125 > 17); ++g_125)
        {
            const char *l_206 = &g_111;
            int l_212 = 0x9CAFDD34L;
            long long **l_236 = &l_226;
            long long l_248 = 0x471E60DA4F588204LL;
            for (p_61 = (-8); (p_61 == 52); p_61 = safe_add_func_uint32_t_u_u(p_61, 4))
            {
                char *l_207 = (void*)0;
                long long *l_211 = &g_41;
                int l_230 = 0x8BDE8087L;
                const int *l_234 = &g_47;
                if ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((((g_105 == (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((void*)0 != g_205))), 0xACL))) , l_206) == l_207), ((((g_208 = (+g_125)) && (p_61 == ((*l_211) = (safe_mod_func_int64_t_s_s(g_113, g_47))))) >= 0x1389L) >= 1L))) || l_212), 12)), l_213)))
                {
                    const int *l_235 = &g_191;
                    int l_240 = 0L;
                    long long **l_243 = &l_226;
                    for (g_127 = 0; (g_127 > 53); ++g_127)
                    {
                        return (**g_109);
                    }
                    (*l_185) = (l_213 , (*l_185));
                    for (g_132 = (-18); (g_132 != 51); g_132 = safe_add_func_int32_t_s_s(g_132, 2))
                    {
                        int *l_231 = &g_208;
                        (*l_231) = (((safe_mul_func_uint16_t_u_u((0x012FL == 1L), ((safe_rshift_func_uint8_t_u_u(((*l_184) = (safe_add_func_uint64_t_u_u((p_61 && ((void*)0 == l_224)), l_227))), 2)) && (l_230 = (safe_mul_func_int16_t_s_s((*g_152), (*g_152))))))) | ((*g_152) , g_7)) != p_60);
                    }
                    for (g_208 = (-29); (g_208 == (-15)); g_208 = safe_add_func_int16_t_s_s(g_208, 1))
                    {
                        unsigned short *l_244 = &g_127;
                        int *l_247 = &l_212;
                        unsigned long long *l_253 = &g_254;
                        l_235 = l_234;
                        (*l_247) = (p_63 ^ (((*l_244) = ((l_236 == g_237) < (safe_sub_func_int32_t_s_s(l_240, ((**g_109) <= (safe_rshift_func_int16_t_s_u((l_243 != ((*l_224) = (void*)0)), 10))))))) || (safe_mod_func_uint32_t_u_u((((!(p_60 >= ((((p_61 == 0xBAL) , l_213) , 65535UL) ^ (*l_234)))) || 0xEC33L) | l_212), g_47))));
                        l_248 = g_105;
                        (*l_247) = ((safe_sub_func_uint8_t_u_u(((void*)0 == &l_227), ((l_251 == (void*)0) & g_26))) == ((*l_253) = 18446744073709551611UL));
                    }
                }
                else
                {
                    (*l_185) = (void*)0;
                }
                (*l_251) = &g_191;
            }
        }
        g_255 = &g_7;
    }
    else
    {
        int *l_256 = &g_208;
        l_256 = (void*)0;
        return p_61;
    }
    (*l_185) = (void*)0;
    return p_60;
}







static unsigned func_65(char p_66, const int p_67, unsigned char * p_68, const int p_69)
{
    unsigned l_71 = 0x262B0969L;
    long long *l_76 = (void*)0;
    long long *l_77 = &g_41;
    int l_78 = 0x7E177106L;
    const unsigned l_79 = 4294967295UL;
    const unsigned char l_80 = 255UL;
    int l_81 = 1L;
    int *l_82 = (void*)0;
    int *l_83 = &l_78;
    long long **l_84 = &l_77;
    unsigned char *l_86 = &g_13;
    unsigned char **l_87 = &l_86;
    unsigned char *l_89 = &g_13;
    unsigned char **l_88 = &l_89;
    unsigned long long l_151 = 18446744073709551611UL;
    l_81 = (g_7 != ((l_71 & (((p_69 != 0x2D4AL) >= ((g_13 | (((((l_78 = (safe_mod_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(0xEEB3L, 3)) != l_71), ((*l_77) = g_26)))) >= l_79) , p_69) != 0x0E13L) < l_71)) == g_43)) | l_80)) == 0x0C16569D98E87BB6LL));
    (*l_83) = l_71;
    l_84 = &l_77;
    if (((g_85 = &g_13) == ((*l_88) = ((*l_87) = (((*l_83) = g_41) , l_86)))))
    {
        short l_123 = (-9L);
        (*l_83) = (*l_83);
        if (p_67)
        {
            long long **l_90 = (void*)0;
            long long ***l_91 = &l_90;
            int l_104 = 0xD2B77DEEL;
            (*l_91) = l_90;
            g_105 = (!((*l_83) = ((((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((*g_85), ((safe_mod_func_int64_t_s_s((-3L), ((p_66 != (safe_add_func_int16_t_s_s((g_43 = (safe_sub_func_uint32_t_u_u(p_69, (g_43 | (p_69 == p_67))))), p_69))) , (safe_sub_func_uint8_t_u_u((0x852136032EE702D1LL && l_104), (*p_68)))))) != p_66))) && (-1L)), 1L)) | g_47) != 0x4F829999L) > 1L)));
        }
        else
        {
            int **l_106 = &l_83;
            char *l_110 = &g_111;
            char *l_112 = &g_113;
            short l_120 = 0xA6FAL;
            unsigned short *l_124 = &g_125;
            unsigned short *l_126 = &g_127;
            int *l_128 = &l_81;
            (*l_106) = &g_26;
            (*l_128) = ((((((((*l_126) = ((safe_mul_func_int8_t_s_s(((*l_110) = ((void*)0 == g_109)), ((*l_112) = g_13))) < (safe_add_func_uint32_t_u_u(((((*g_85) ^ ((0UL | 4294967295UL) != (((*l_124) = ((((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((l_120 | (safe_mod_func_int64_t_s_s(l_123, (p_67 , g_13)))), p_69)) > p_66), 65529UL)) | (**l_106)) < 252UL) <= p_69)) < g_26))) , 0x7EL) && 250UL), g_7)))) <= (*l_83)) || p_69) , 0xB5A5E529L) | 4294967295UL) < (*l_83)) , (-3L));
            (*l_106) = &g_47;
            for (l_71 = (-9); (l_71 > 34); l_71 = safe_add_func_uint64_t_u_u(l_71, 2))
            {
                (*l_128) = (1UL > 0x7064L);
            }
        }
    }
    else
    {
        unsigned l_131 = 0xDB7D616EL;
        int *l_135 = (void*)0;
        unsigned l_145 = 4294967295UL;
        unsigned short *l_148 = &g_125;
        g_132 = l_131;
        if ((safe_rshift_func_uint8_t_u_u(255UL, 7)))
        {
            int *l_136 = &l_78;
            long long ***l_137 = &l_84;
            l_136 = l_135;
            (*l_83) = (((*l_137) = &l_76) != (void*)0);
            (*l_83) = (p_66 >= p_67);
            (*l_83) = p_69;
        }
        else
        {
            int *l_138 = &l_81;
            int **l_139 = &l_135;
            (*l_139) = l_138;
        }
        (*l_83) = p_69;
        (*l_83) = ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((+g_47))), g_47)), ((g_127 = ((4294967295UL >= p_69) & (((l_145 || (safe_mod_func_int32_t_s_s((((*l_148) = 65531UL) , (safe_sub_func_uint16_t_u_u(g_127, l_151))), ((l_148 == (void*)0) ^ g_132)))) & g_41) , p_67))) , p_66))) < 4294967295UL);
    }
    return g_105;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
