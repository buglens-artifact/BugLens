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



static int g_8 = 0x167FA5C6L;
static int g_73 = (-9L);
static int g_92 = 0x34C2E397L;
static int *g_94 = &g_8;
static int **g_93 = &g_94;
static int g_97 = 1L;
static int *g_108 = &g_8;
static char g_124 = 0x60L;
static unsigned short g_212 = 0x13ABL;
static const unsigned g_253 = 0xDD9B7CDBL;
static int g_357 = 0xDDD2FD38L;
static const int *g_458 = &g_73;
static short g_472 = 0xE56EL;
static unsigned g_495 = 1UL;



static char func_1(void);
static int * func_2(int * p_3, int * p_4, unsigned short p_5, const unsigned char p_6);
static int * func_9(int p_10);
static unsigned func_11(const unsigned short p_12, int * p_13, const unsigned char p_14, int * p_15);
static unsigned short func_16(int * const p_17, int * p_18, int p_19);
static const unsigned char func_29(int * p_30, int * p_31);
static int * func_32(const int p_33, unsigned char p_34, char p_35, int * p_36, int * p_37);
static char func_40(int * const p_41, const int * const p_42, int * p_43, char p_44);
static int * const func_45(int * p_46, int * p_47, short p_48, int * p_49, char p_50);
static unsigned func_59(unsigned p_60);
static char func_1(void)
{
    int *l_7 = &g_8;
    int *l_20 = (void*)0;
    int *l_51 = &g_8;
    int **l_516 = &l_20;
    int l_517 = 0x1B54D93EL;
    int *l_518 = &g_8;
    (*l_516) = func_2(l_7, func_9((func_11(func_16(&g_8, l_20, (safe_sub_func_uint32_t_u_u(((g_8 != (((safe_mul_func_uint8_t_u_u(g_8, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(func_29(func_32(g_8, (((safe_rshift_func_int8_t_s_s(func_40(func_45(l_51, &g_8, g_8, &g_8, g_8), l_51, (*g_93), (*l_51)), 6)) || 0L) | g_8), g_8, &g_8, &g_8), l_7), (*l_51))), g_8)))) && 8L) == (-10L))) & g_212), (*g_108)))), l_20, g_253, l_51) > g_253)), g_253, g_253);

    ;
    ;

    ;
    l_517 &= (*l_7);
    (*l_51) = (func_29((*l_516), l_518) != (*l_518));
    return g_357;
}







static int * func_2(int * p_3, int * p_4, unsigned short p_5, const unsigned char p_6)
{
    int *l_397 = &g_73;
    unsigned l_407 = 0xBEE199B7L;
    unsigned l_408 = 1UL;
    int *l_409 = (void*)0;
    char l_483 = 0L;
    int *l_486 = &g_73;
    char l_490 = (-6L);
    if ((!(l_397 != p_3)))
    {
        int **l_398 = &l_397;
        (*l_398) = p_4;

        ;
        (*p_4) = (**l_398);
        (*l_398) = func_9((safe_lshift_func_int8_t_s_s((**l_398), p_5)));
        if ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_6, p_6)), p_5)))
        {
            char l_421 = (-6L);
            int *l_433 = &g_8;
            int ***l_443 = (void*)0;
            if (((**l_398) == g_124))
            {
                const int l_420 = 0x970DB5E4L;
                int l_430 = 1L;
                unsigned l_447 = 0xA6DB96E4L;
                if ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_420 <= (((**l_398) < 0x381F1477L) ^ (l_420 <= (safe_add_func_int8_t_s_s((g_212 < g_73), ((safe_rshift_func_uint16_t_u_s((p_6 <= (safe_rshift_func_uint16_t_u_u(((0xB8A8L != 1UL) > 0xD15E0714L), p_5))), 9)) && p_6)))))), 0)), (**l_398))))
                {
                    int * const l_434 = &g_92;
                    (*p_4) = (g_73 | (safe_add_func_uint32_t_u_u(l_430, (safe_add_func_uint32_t_u_u(func_29(l_433, p_4), 4294967295UL)))));
                    (*l_398) = l_434;

                    ;
                }
                else
                {
                    int *l_438 = &g_73;
                    int ***l_446 = (void*)0;
                    for (g_92 = (-30); (g_92 >= (-1)); g_92 = safe_add_func_uint8_t_u_u(g_92, 3))
                    {
                        (*l_398) = &g_92;

                        ;
                        if ((*p_4))
                            continue;
                        return p_3;


                    }

                    ;
                    if ((*p_4))
                    {
                        int *l_437 = &g_97;
                        (*l_437) &= (4294967294UL | ((p_6 >= (**l_398)) ^ p_6));
                        (*l_437) = (**l_398);
                        return l_438;


                    }
                    else
                    {
                        (*l_398) = &l_430;

                        ;
                    }

                    ;
                    for (g_357 = (-5); (g_357 <= 11); g_357 = safe_add_func_uint16_t_u_u(g_357, 3))
                    {
                        (*l_397) = (*p_3);
                        (*p_3) = (*p_4);
                    }
                    (*l_398) = func_9((((safe_mul_func_int8_t_s_s(p_5, g_124)) || (g_97 ^ ((l_430 ^ (((0x55L >= ((safe_lshift_func_int16_t_s_s((l_446 != &l_398), 1)) >= 0x33L)) && p_5) < 0UL)) > g_97))) > p_5));

                    ;
                }

                ;
                p_4 = &g_97;

                ;
                (*l_398) = (void*)0;

                ;
                (*l_433) ^= l_447;
            }
            else
            {
                (*l_398) = (void*)0;

                ;
            }

            ;
            ;
        }
        else
        {
            int *l_456 = &g_73;
            const unsigned l_457 = 18446744073709551606UL;
            unsigned l_477 = 7UL;
            if (((p_5 <= (((**l_398) <= (**l_398)) >= p_6)) == 0x5A83L))
            {
                const int **l_459 = (void*)0;
                const int **l_460 = &g_458;
                (*l_398) = l_456;

                ;
                (*p_3) |= ((void*)0 != p_4);
                (*l_460) = g_458;
                (**l_398) = (-8L);
            }
            else
            {
                int *l_465 = &g_73;
                for (g_97 = 11; (g_97 > 18); g_97 = safe_add_func_uint8_t_u_u(g_97, 9))
                {
                    (*l_456) &= (safe_add_func_uint16_t_u_u(0x47D2L, g_97));
                    (*l_398) = l_465;

                    ;
                }

                ;
            }

            ;
            (*p_4) = (g_124 <= ((safe_mul_func_int16_t_s_s(((0x4A355E92L & 0x645FABA8L) && ((*l_456) > (safe_mul_func_int8_t_s_s(1L, (safe_lshift_func_int8_t_s_u(((g_472 | (safe_add_func_int32_t_s_s((*l_397), func_29(p_4, l_456)))) | 249UL), 1)))))), g_73)) <= p_6));
            (*l_398) = l_456;

            ;
        }

        ;
        ;
    }
    else
    {
        unsigned char l_478 = 0UL;
        int ***l_481 = (void*)0;
        int *l_482 = &g_73;
        p_3 = (void*)0;

        ;
        g_108 = (void*)0;

        ;
        (*p_4) |= (*g_458);
    }

    ;
    ;
    ;
    if (((l_483 <= g_73) < func_29(func_9((p_6 && 0x3FL)), p_4)))
    {
        int ** const *l_489 = &g_93;
        (*p_4) = l_490;
        p_4 = l_409;

        ;
        (*l_486) = ((safe_add_func_int8_t_s_s(((p_5 != ((safe_add_func_uint16_t_u_u(g_212, (g_73 ^ (g_495 & (l_489 != l_489))))) & ((g_472 ^ (p_5 || (*l_486))) && 1L))) & 0xBD62L), 1UL)) < 253UL);
    }
    else
    {
        unsigned short l_502 = 0UL;
        int **l_503 = &l_486;
        for (g_8 = 17; (g_8 < 24); g_8++)
        {
            return l_409;


        }
        (*p_4) = (safe_add_func_uint16_t_u_u((0x86F4E648L >= (((safe_mul_func_uint16_t_u_u(g_92, (&p_3 != (void*)0))) > l_502) ^ (*g_458))), p_5));
        (*l_503) = p_4;

        ;
    }

    ;
    ;
    (*l_486) = (safe_sub_func_int16_t_s_s((((g_253 & ((0xB67E40BDL < (*g_458)) > g_92)) || p_6) > (*g_458)), g_472));
    if (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(8UL, 1)), ((*l_486) > (*g_458)))) | 0x89C0ED1AL))
    {
        int **l_514 = &l_397;
        (*l_514) = p_3;

        ;
    }
    else
    {
        short l_515 = 1L;
        (*l_486) = (l_515 < 4294967286UL);
    }

    ;
    return l_409;


}







static int * func_9(int p_10)
{
    int * const l_389 = &g_92;
    int *l_390 = &g_8;
    (*l_390) = (safe_lshift_func_uint8_t_u_s(((*l_389) > p_10), 7));
    (*l_390) = (*l_390);
    return l_390;


}







static unsigned func_11(const unsigned short p_12, int * p_13, const unsigned char p_14, int * p_15)
{
    int *l_256 = &g_97;
    int *l_260 = &g_8;
    const unsigned l_276 = 0x5FD471ECL;
    int *l_385 = &g_73;
    int l_386 = 7L;
    (*g_108) ^= (-10L);
    if ((*g_108))
    {
        int *l_257 = &g_97;
        short l_321 = (-6L);
        if ((((safe_sub_func_int32_t_s_s((l_256 == l_257), 0x723124B1L)) >= g_124) < (*l_256)))
        {
            int *l_295 = (void*)0;
            int *l_314 = &g_73;
            if ((*l_256))
            {
                char l_261 = 6L;
                int * const l_264 = (void*)0;
                (*g_93) = (*g_93);
                for (g_212 = (-17); (g_212 == 56); g_212 = safe_add_func_int32_t_s_s(g_212, 1))
                {
                    (*p_15) |= (*l_256);
                    (*g_93) = (*g_93);
                    (*g_108) = ((void*)0 != (*g_93));
                }
                (*g_93) = l_257;

                ;
                if (l_261)
                {
                    return p_14;
                }
                else
                {
                    int **l_299 = &l_295;
                    for (g_73 = (-29); (g_73 <= (-22)); g_73 = safe_add_func_uint32_t_u_u(g_73, 5))
                    {
                        int **l_265 = &l_256;
                        (*l_265) = l_264;

                        ;
                    }

                    ;
                    if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(p_14, 6)), (safe_sub_func_uint16_t_u_u(((&g_108 == &g_108) <= g_212), ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(l_276, (*l_257))), (safe_sub_func_int32_t_s_s(func_59((func_59(g_212) & g_124)), (*l_257))))) && 251UL))))))
                    {
                        unsigned char l_296 = 0UL;
                        (*g_93) = (*g_93);
                        (*g_108) = (safe_rshift_func_int8_t_s_u((&g_94 != &g_108), func_16(p_15, (*g_93), ((safe_rshift_func_uint8_t_u_u(0xDEL, ((safe_sub_func_int16_t_s_s(0L, (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(g_124, 2)), 0)), ((safe_lshift_func_uint8_t_u_s(((p_14 >= g_92) || (*l_260)), p_12)) <= l_296))), l_296)))) && 0xB923L))) | g_73))));
                    }
                    else
                    {
                        int ***l_300 = &g_93;
                        (*l_257) ^= (safe_rshift_func_uint8_t_u_u(1UL, 0));
                        (*l_257) = (*p_15);
                        (*l_300) = l_299;

                        ;
                    }

                    ;
                    (*l_260) = (*l_257);
                }

                ;
                ;
            }
            else
            {
                (*l_257) = (*g_108);
                (*l_257) = 0xC08B88E9L;
                (*l_257) &= (*g_108);
                for (g_73 = (-9); (g_73 == (-7)); g_73 = safe_add_func_int8_t_s_s(g_73, 3))
                {
                    char l_303 = 0xF3L;
                    (*l_256) |= l_303;
                    return p_14;
                }
            }

            ;
            ;
            ;
            (*g_108) = ((*l_260) >= (safe_sub_func_uint16_t_u_u((&g_108 != &l_256), ((safe_lshift_func_int8_t_s_u(p_12, (safe_lshift_func_int8_t_s_u(p_12, p_14)))) | (safe_mul_func_int16_t_s_s((!(l_295 != (*g_93))), 0xF146L))))));
            (*p_15) &= (g_124 >= g_97);
            (*l_314) |= (safe_sub_func_int32_t_s_s((func_29(p_13, p_15) && 1L), g_124));
        }
        else
        {
            return g_8;
        }

        ;

        ;
        (*l_257) = ((-1L) != ((safe_add_func_int8_t_s_s(p_14, (*l_260))) == (p_14 > ((p_15 != p_15) < (!(safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((*p_15), g_73)) > (*l_257)), l_321)))))));
        (*l_257) = 0x683CE644L;
    }
    else
    {
        int l_324 = 0L;
        for (g_8 = (-25); (g_8 <= 7); g_8 = safe_add_func_int16_t_s_s(g_8, 4))
        {
            if (l_324)
            {
                (*l_256) = (-1L);
                if ((*p_15))
                    continue;
                for (g_124 = 2; (g_124 > (-7)); g_124--)
                {
                    return g_253;
                }
                if ((*l_260))
                    continue;
            }
            else
            {
                if ((*g_108))
                    break;
            }
        }
        return p_14;
    }

    ;

    ;
    if ((*g_108))
    {
        int *l_335 = &g_92;
        int *l_342 = &g_73;
        char l_345 = (-6L);
        (*l_342) &= (0x4CL <= (safe_mul_func_uint16_t_u_u((*l_260), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((void*)0 == p_13) > 0x31C0L), 0)) > (0x1A50L && (l_335 != (void*)0))), (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((8UL ^ (-9L)), g_92)), 5)), p_12)))), 11)))));
        if ((safe_mul_func_uint8_t_u_u(l_345, g_212)))
        {
            for (g_212 = 0; (g_212 >= 25); ++g_212)
            {
                char l_352 = 0x07L;
                (*l_260) |= (safe_rshift_func_uint8_t_u_s(g_92, (safe_rshift_func_int16_t_s_s(g_212, 6))));
                (*p_15) = l_352;
            }
            (*l_260) = 0x5A1B66CBL;
        }
        else
        {
            unsigned short l_354 = 0xDFDFL;
            if ((*l_335))
            {
                unsigned l_353 = 0x97B3AE03L;
                (*l_335) ^= l_353;
                l_354 ^= l_353;
            }
            else
            {
                for (l_345 = 16; (l_345 <= 18); l_345++)
                {
                    (*l_342) ^= (-2L);
                }
            }
            return g_253;
        }
        g_108 = l_342;

        ;
        if (g_357)
        {
            int ***l_362 = (void*)0;
            if ((g_253 > 0x8443L))
            {
                (*p_15) = ((*p_15) || (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x88A6L, 10)), ((*g_108) ^ (l_362 != &g_93)))));
                if ((*p_15))
                {
                    int **l_366 = (void*)0;
                    int **l_367 = &g_108;
                    (*g_108) &= (*p_15);
                    for (g_357 = 0; (g_357 == (-30)); g_357 = safe_sub_func_int32_t_s_s(g_357, 8))
                    {
                        int **l_365 = &l_335;
                        (*l_365) = p_13;

                        ;
                        return p_14;
                    }
                    (*l_367) = p_15;

                    ;
                    (*l_367) = p_13;

                    ;
                }
                else
                {
                    unsigned char l_370 = 2UL;
                    for (g_357 = (-24); (g_357 < (-23)); ++g_357)
                    {
                        (*l_335) = (*p_15);
                        l_370 ^= (*g_108);
                    }
                    (*g_108) = l_370;
                }

                ;
            }
            else
            {
                unsigned l_373 = 0x6231FCB9L;
                (*p_15) ^= (safe_sub_func_uint16_t_u_u(0UL, 1UL));
                return l_373;
            }

            ;
            return g_357;
        }
        else
        {
            int * const l_374 = &g_97;
            int **l_375 = &l_256;
            (*l_375) = l_374;

            ;
        }

        ;
    }
    else
    {
        char l_376 = 0x69L;
        int **l_377 = (void*)0;
        int **l_378 = &g_94;
        (*l_260) = l_376;
        (*g_108) = ((+(*l_260)) | g_92);
        (*l_378) = l_256;

        ;
    }

    ;
    l_386 |= (((g_253 ^ (*l_260)) | ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((*l_260) <= 0x3CL) <= ((0x1BC6L || (((&g_108 == &l_260) | (safe_mul_func_int16_t_s_s((l_385 != (void*)0), (*l_385)))) | 3UL)) > g_253)), g_92)), p_12)) & (-9L))) <= p_14);
    return g_92;
}







static unsigned short func_16(int * const p_17, int * p_18, int p_19)
{
    unsigned char l_245 = 253UL;
    (*g_108) = 0x9D00192FL;
    l_245 ^= (*p_17);
    for (g_8 = 14; (g_8 < (-13)); g_8--)
    {
        int *l_252 = &g_73;
        (*g_93) = p_18;

        ;
        (*l_252) = (safe_mul_func_uint16_t_u_u((0x2DL || (l_252 != (*g_93))), p_19));
    }
    (*g_108) = (p_19 <= (*p_17));
    return l_245;
}







static const unsigned char func_29(int * p_30, int * p_31)
{
    unsigned short l_148 = 65535UL;
    int *l_150 = &g_97;
    int *l_244 = &g_92;
    for (g_97 = 22; (g_97 != 7); --g_97)
    {
        int *l_147 = &g_92;
        unsigned l_225 = 0UL;
    }
    l_150 = p_31;

    ;
    (*l_244) |= (*l_150);
    return g_92;
}







static int * func_32(const int p_33, unsigned char p_34, char p_35, int * p_36, int * p_37)
{
    short l_143 = 7L;
    int l_144 = 4L;
    if (l_143)
    {
        l_144 ^= (g_73 <= l_143);
    }
    else
    {
        (*g_93) = (*g_93);
    }
    (*g_93) = (*g_93);
    return p_37;


}







static char func_40(int * const p_41, const int * const p_42, int * p_43, char p_44)
{
    int *l_118 = &g_97;
    const int l_123 = 0xD5741E93L;
    unsigned l_136 = 0xB8DA5B5AL;
    unsigned short l_142 = 0xB771L;
    (*g_93) = (*g_93);
    if ((func_59((*l_118)) || (*l_118)))
    {
        char l_119 = (-1L);
        int **l_137 = &g_94;
        int l_138 = 1L;
        g_124 |= (((p_44 && (l_119 == func_59(p_44))) & (l_119 && (p_44 < (g_97 || (safe_unary_minus_func_uint8_t_u(g_97)))))) | ((safe_sub_func_uint16_t_u_u(((l_123 <= (-4L)) ^ (*l_118)), 0xB6EFL)) | (*l_118)));
        (*l_137) = func_45(p_43, (*g_93), ((((~((-10L) == ((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(p_44, 8)) != (((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((~(safe_add_func_uint8_t_u_u((&g_94 == (void*)0), (l_119 != (*p_43))))), (*l_118))))) & 65529UL) | g_92)) > p_44), g_73)) > p_44))) ^ g_124) >= 252UL) != l_136), p_43, g_97);
        (*l_118) &= (0x92L <= (0x485DL ^ l_138));
    }
    else
    {
        int *l_139 = (void*)0;
        (*g_93) = l_139;

        ;
    }

    ;
    (*g_93) = (*g_93);
    (*l_118) |= (*p_42);
    return p_44;
}







static int * const func_45(int * p_46, int * p_47, short p_48, int * p_49, char p_50)
{
    int l_100 = 0L;
    for (p_50 = 0; (p_50 <= 25); ++p_50)
    {
        unsigned char l_54 = 0UL;
        int *l_96 = &g_97;
        int l_105 = 0x80087D4EL;
        l_54 = (0x638299FAL != ((&g_8 != (void*)0) > g_8));
        (*l_96) |= (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((func_59(((safe_rshift_func_int16_t_s_u((g_8 == l_54), l_54)) >= (((p_50 >= p_50) | g_8) ^ (safe_add_func_uint16_t_u_u(g_8, (l_54 > (((p_48 & (*p_47)) != 0xBFEBL) == 0x6CL))))))) || 0xB0392260L) >= (*p_49)), g_8)), 65534UL));
        if ((((safe_lshift_func_int16_t_s_s(l_100, ((((((void*)0 == (*g_93)) | (*l_96)) != (*l_96)) && (&p_46 != (void*)0)) | (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((func_59((*l_96)) <= (*p_49)), (*l_96))), l_105))))) > p_48) & 0UL))
        {
            unsigned char l_113 = 0x01L;
            (*l_96) = (((safe_add_func_int8_t_s_s(g_8, p_48)) >= ((*g_93) != g_108)) ^ (safe_mod_func_int16_t_s_s((0xA71BL == 0xACDCL), (safe_lshift_func_int8_t_s_u(p_50, (l_113 > (((p_46 == (*g_93)) >= 0x810FL) < p_50)))))));
            if ((safe_mul_func_int16_t_s_s(l_113, func_59(l_100))))
            {
                return (*g_93);


            }
            else
            {
                return p_47;


            }
        }
        else
        {
            unsigned l_116 = 0x12ED8564L;
            int l_117 = 1L;
            if ((*g_94))
                break;
            if ((*g_108))
                continue;
            l_117 = l_116;
            if ((*g_108))
                continue;
        }
        if ((**g_93))
            break;
    }
    return (*g_93);


}







static unsigned func_59(unsigned p_60)
{
    const unsigned l_78 = 1UL;
    int **l_95 = &g_94;
    if ((safe_rshift_func_int16_t_s_s((0x67D5B449L != p_60), 2)))
    {
        unsigned char l_75 = 6UL;
        for (p_60 = 0; (p_60 > 16); p_60++)
        {
            int *l_71 = &g_8;
            int *l_72 = &g_73;
            int **l_74 = &l_72;
            (*l_72) = (safe_mod_func_int32_t_s_s(((l_71 == (void*)0) < p_60), g_8));
            (*l_72) &= p_60;
            (*l_74) = &g_8;

            ;
        }
        l_75 = 2L;
    }
    else
    {
        const short l_79 = 0L;
        int *l_80 = (void*)0;
        int *l_81 = &g_73;
        unsigned l_88 = 0xB67338D5L;
        int **l_89 = (void*)0;
        int *l_90 = (void*)0;
        int *l_91 = &g_92;
        (*l_81) ^= ((safe_mod_func_uint8_t_u_u(l_78, l_78)) > l_79);
        (*l_91) &= (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((~g_73), ((l_88 ^ (l_78 || p_60)) & p_60))), l_78)), ((void*)0 == l_89)));
        (*l_91) = (g_92 >= (g_93 == l_95));
    }
    return p_60;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
