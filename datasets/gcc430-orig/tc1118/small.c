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



static unsigned g_18 = 18446744073709551614UL;
static int g_25 = 0x923CCDE6L;
static int g_45 = (-1L);
static unsigned * const *g_82 = (void*)0;
static unsigned g_108 = 0x5CCAEA4CL;
static short g_112 = 9L;
static short g_114 = (-1L);
static int *g_123 = &g_25;
static unsigned char g_130 = 0x57L;
static char g_143 = 0L;
static unsigned g_161 = 0xE2BA1CD2L;
static unsigned char g_176 = 0x5AL;
static unsigned char g_178 = 1UL;
static unsigned short g_183 = 0x82C5L;
static int **g_209 = &g_123;
static volatile char g_210 = (-1L);
static short g_258 = 1L;
static char g_267 = 0x8CL;
static short *g_275 = &g_114;
static short **g_274 = &g_275;
static unsigned short g_288 = 0xEC28L;
static short g_302 = 0xB079L;
static unsigned char g_304 = 1UL;
static char g_323 = 0L;
static char **g_334 = (void*)0;
static int g_407 = 0x52137E13L;
static char g_482 = 0xF0L;
static unsigned *g_537 = &g_108;
static unsigned **g_536 = &g_537;
static int *g_541 = &g_25;
static unsigned short g_554 = 0x177BL;
static unsigned short *g_580 = &g_554;
static unsigned short **g_579 = &g_580;
static unsigned short **g_581 = &g_580;
static const int *g_582 = &g_45;



static unsigned short func_1(void);
static const int * func_2(unsigned p_3, int p_4, short p_5, int * p_6, int * p_7);
static char func_11(int * p_12);
static int * func_13(char p_14, int * p_15);
static int * func_16(short p_17);
static unsigned func_21(int * p_22, int * p_23);
static int * func_26(unsigned short p_27, unsigned p_28, int * const p_29, char p_30, int * p_31);
static int func_36(unsigned p_37, unsigned p_38, int * p_39);
static int func_61(unsigned * p_62, int p_63);
static unsigned short func_78(unsigned * const * p_79, unsigned p_80, unsigned short p_81);
static unsigned short func_1(void)
{
    int l_8 = 0xE8384627L;
    const int *l_583 = &g_25;
    l_583 = func_2(l_8, (~((safe_div_func_int8_t_s_s(func_11(func_13(l_8, func_16(g_18))), 0x83L)) <= l_8)), g_302, g_537, g_537);
    return (*l_583);
}







static const int * func_2(unsigned p_3, int p_4, short p_5, int * p_6, int * p_7)
{
    int l_550 = 0xD6B33085L;
    int l_551 = 7L;
    unsigned * const *l_552 = &g_537;
    unsigned short *l_553 = &g_554;
    short **l_562 = &g_275;
    short **l_567 = (void*)0;
    short ***l_572 = &g_274;
    unsigned short ***l_578 = (void*)0;
    (*p_6) = (p_3 ^ (safe_div_func_int8_t_s_s(p_5, (safe_rshift_func_int8_t_s_s((l_550 = (l_550 || p_4)), l_551)))));
    (*p_7) = func_11(func_13(func_78(&g_537, l_551, ((*l_553) &= ((1UL <= (func_36((func_78(l_552, g_45, l_550) | 4294967295UL), p_3, &l_551) < 0xF695L)) > 0x7189L))), &l_551));
    for (g_304 = (-19); (g_304 != 4); g_304 = safe_add_func_int16_t_s_s(g_304, 1))
    {
        short ***l_563 = &l_562;
        short ***l_564 = &g_274;
        short ***l_565 = &g_274;
        short ***l_566 = &g_274;
        unsigned *l_568 = &g_161;
        short ****l_569 = (void*)0;
        short ****l_570 = (void*)0;
        short ****l_571 = &l_564;
        int l_575 = 0x937BE94AL;
        int *l_576 = (void*)0;
        int *l_577 = &l_551;
        (*l_577) = ((*p_7) = (safe_div_func_uint16_t_u_u((((*l_568) |= (func_11(func_13(p_5, &p_4)) == (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u((&g_275 == (l_567 = ((*l_563) = l_562))))), 3)))) <= (((*l_571) = l_566) != (l_572 = &g_274))), ((safe_rshift_func_uint16_t_u_s(p_4, l_575)) & g_25))));
        if ((*l_577))
            break;
        if ((*p_6))
            break;
        (*g_209) = &l_551;
    }
    g_581 = (g_579 = &l_553);
    return g_582;
}







static char func_11(int * p_12)
{
    int *l_545 = &g_45;
    (*g_209) = l_545;
    return (*l_545);
}







static int * func_13(char p_14, int * p_15)
{
    int *l_544 = (void*)0;
    for (g_482 = 0; (g_482 < 18); g_482++)
    {
        (*g_209) = p_15;
    }
    return l_544;
}







static int * func_16(short p_17)
{
    int *l_24 = &g_25;
    unsigned *l_40 = (void*)0;
    unsigned *l_41 = (void*)0;
    unsigned *l_42 = &g_18;
    char *l_485 = &g_482;
    char **l_484 = &l_485;
    unsigned char *l_489 = &g_130;
    int *l_490 = (void*)0;
    unsigned char l_509 = 0xABL;
    (*l_24) = ((safe_div_func_uint32_t_u_u(func_21(l_24, func_26(g_25, g_25, &g_25, (((+(safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_36(((*l_42) = (g_25 >= (g_18 <= ((void*)0 != &g_25)))), p_17, &g_25), (*l_24))), (*l_24)))) | 3L) ^ 0x65L), &g_25)), g_407)) <= g_482);
    (*g_209) = (void*)0;
    if ((*l_24))
    {
        (*g_209) = (void*)0;
        return (*g_209);
    }
    else
    {
        int *l_483 = &g_407;
        char ***l_486 = &l_484;
        (*g_209) = (*g_209);
        (*g_209) = l_483;
        if ((((*l_486) = l_484) != &l_485))
        {
            int *l_487 = &g_407;
            return l_487;
        }
        else
        {
            int *l_488 = &g_25;
            (*g_209) = (*g_209);
            (**g_209) = func_36(g_18, g_143, l_488);
        }
    }
    if (((*g_275) & (l_489 != &g_176)))
    {
        (*g_209) = l_490;
    }
    else
    {
        unsigned l_493 = 4294967295UL;
        unsigned l_501 = 4294967295UL;
        int *l_502 = (void*)0;
        int l_507 = 0x8EA64290L;
        for (g_25 = 0; (g_25 > (-16)); g_25--)
        {
            unsigned char **l_494 = (void*)0;
            unsigned short *l_503 = (void*)0;
            int l_504 = 0L;
            int l_505 = 0xF447B531L;
            int *l_506 = &l_505;
            int l_508 = (-4L);
            unsigned *l_519 = &g_108;
            short l_521 = 0x607EL;
            short **l_533 = &g_275;
            l_493 = 0x819D411DL;
        }
        g_541 = (void*)0;
        (*g_123) = l_507;
    }
    return (*g_209);
}







static unsigned func_21(int * p_22, int * p_23)
{
    int l_385 = 0x288C40D4L;
    unsigned *l_386 = &g_18;
    short **l_403 = (void*)0;
    int l_413 = (-1L);
    int l_463 = (-3L);
    int l_464 = (-8L);
    char *l_478 = (void*)0;
    char **l_477 = &l_478;
    char * const l_481 = &g_482;
    char * const *l_480 = &l_481;
    char * const **l_479 = &l_480;
    for (g_114 = (-1); (g_114 != (-13)); g_114 = safe_sub_func_int32_t_s_s(g_114, 9))
    {
        char l_384 = 0L;
        int *l_410 = &g_45;
        int *l_441 = &g_25;
        unsigned char *l_453 = (void*)0;
        unsigned char *l_454 = (void*)0;
        unsigned char *l_455 = &g_304;
        short *l_460 = &g_302;
        unsigned *l_461 = (void*)0;
        unsigned *l_462 = &g_161;
    }
    (*p_22) = (l_477 == ((*l_479) = g_334));
    return g_130;
}







static int * func_26(unsigned short p_27, unsigned p_28, int * const p_29, char p_30, int * p_31)
{
    unsigned l_65 = 1UL;
    unsigned * const l_84 = (void*)0;
    unsigned * const *l_83 = &l_84;
    char **l_333 = (void*)0;
    unsigned char l_377 = 0x98L;
    int *l_381 = &g_45;
    for (p_30 = 0; (p_30 == (-16)); --p_30)
    {
        unsigned short l_57 = 0x3821L;
        unsigned *l_75 = &l_65;
        unsigned **l_74 = &l_75;
        const short *l_301 = &g_302;
        const short **l_300 = &l_301;
        unsigned char *l_303 = &g_304;
        int l_305 = (-1L);
        char *l_307 = &g_143;
        char **l_306 = &l_307;
        char ***l_308 = &l_306;
        (*p_29) = (g_18 > (((((0xF4C9L <= (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(l_57)), 6L))) && ((safe_unary_minus_func_uint32_t_u((p_30 != (safe_sub_func_int32_t_s_s(func_61(&g_18, ((*p_29) = g_25)), l_65))))) < l_65)) >= l_57) && g_25) >= g_18));
        l_305 ^= (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((*l_74) = &g_18) != &p_28), ((safe_rshift_func_int16_t_s_s(((((*l_303) &= (func_78((l_83 = g_82), (safe_unary_minus_func_int32_t_s(l_57)), p_28) | (+(((void*)0 != l_300) ^ 0L)))) & 9UL) <= l_65), 12)) >= p_30))), l_65)), g_302)), l_57));
        (*l_308) = l_306;
        (*p_31) = l_65;
    }
    (*g_209) = (void*)0;
    if (((*p_29) = l_65))
    {
        (*p_29) ^= (-1L);
    }
    else
    {
        int l_319 = 0x85EFD15DL;
        int l_329 = (-7L);
        int l_344 = 0x1721C394L;
        int l_374 = 0x981ACFEAL;
        (*p_29) &= 0xAF6F3C17L;
        for (g_161 = 0; (g_161 == 26); g_161 = safe_add_func_int32_t_s_s(g_161, 4))
        {
            char *l_322 = &g_267;
            int l_324 = 0xC849BAF9L;
            int *l_326 = &l_324;
            int **l_325 = &l_326;
            g_323 = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((65534UL == (safe_lshift_func_uint8_t_u_s(l_319, ((*l_322) &= (safe_add_func_uint8_t_u_u(l_65, p_28)))))), 0xD4F2L)), p_27)), p_27));
            if (l_324)
                break;
            (*l_325) = ((*g_209) = &l_324);
            if (l_65)
                continue;
        }
        for (g_114 = 14; (g_114 < (-22)); g_114--)
        {
            int **l_330 = &g_123;
            l_329 |= (*p_31);
            (*l_330) = l_84;
            (*p_31) = l_319;
        }
        if ((*p_29))
        {
            unsigned l_331 = 18446744073709551615UL;
            unsigned * const *l_332 = &l_84;
            short *l_355 = (void*)0;
            char *l_372 = &g_323;
            char **l_371 = &l_372;
            (*p_31) = l_331;
            if ((65535UL < func_78(l_332, (l_333 == g_334), p_27)))
            {
                short l_343 = 0xD46FL;
                if ((*p_29))
                {
                    int l_337 = 9L;
                    int l_338 = (-7L);
                    for (g_114 = 0; (g_114 >= 16); ++g_114)
                    {
                        (*p_31) = (((*p_31) ^ (*p_29)) && (l_331 ^ 0x4701L));
                        return &g_45;
                    }
                    (*p_29) = (l_338 |= l_337);
                }
                else
                {
                    for (g_112 = (-1); (g_112 < (-16)); g_112--)
                    {
                        (*p_31) = (*p_31);
                    }
                }
                l_343 &= (safe_add_func_uint16_t_u_u((p_30 | 255UL), (&g_210 != &g_143)));
                (*p_29) = l_344;
            }
            else
            {
                int *l_360 = &l_329;
                for (g_130 = (-14); (g_130 < 9); g_130++)
                {
                    if (((*p_31) = (*p_31)))
                    {
                        int *l_348 = &l_329;
                        int **l_347 = &l_348;
                        (*l_347) = ((*g_209) = p_31);
                        (*l_347) = (*g_209);
                        (*l_348) = (safe_mod_func_int16_t_s_s(0x8151L, (*g_275)));
                        if ((**g_209))
                            continue;
                    }
                    else
                    {
                        unsigned *l_358 = &l_65;
                        const int l_359 = 7L;
                        unsigned short *l_361 = &g_183;
                        unsigned short *l_362 = &g_288;
                        char *l_370 = &g_267;
                        char **l_369 = &l_370;
                        unsigned char *l_373 = &g_178;
                        (*g_209) = &g_25;
                        (**g_209) = (safe_rshift_func_int16_t_s_s((((*l_362) = ((*l_361) |= ((((*g_275) != (safe_div_func_int32_t_s_s(((void*)0 == l_355), func_36(((*l_358) = (safe_div_func_int16_t_s_s(((*p_31) == l_331), 1UL))), (l_359 <= (*g_275)), l_360)))) > l_319) | 7L))) | 1L), 2));
                        l_374 ^= (l_359 <= ((((safe_mod_func_uint32_t_u_u(((!l_344) || ((*l_360) = ((**g_209) = (p_27 == ((*l_373) &= (safe_lshift_func_int8_t_s_u(((4294967294UL > (safe_div_func_uint16_t_u_u(g_176, 0x4D66L))) >= (65535UL ^ ((*g_275) = (*g_275)))), (l_369 == l_371)))))))), l_65)) | l_359) & l_65) | l_344));
                    }
                }
                if (func_36(func_36((*l_360), (safe_div_func_int32_t_s_s(l_319, l_377)), &l_374), p_27, p_31))
                {
                    int *l_378 = &l_344;
                    (*l_378) &= ((*l_360) |= (*p_31));
                    (*p_29) |= (safe_add_func_int8_t_s_s(0x55L, (&l_372 != (void*)0)));
                    return p_31;
                }
                else
                {
                    return p_31;
                }
            }
        }
        else
        {
            (*p_29) = (*p_31);
        }
    }
    return l_381;
}







static int func_36(unsigned p_37, unsigned p_38, int * p_39)
{
    char l_43 = (-1L);
    int *l_44 = &g_45;
    (*l_44) = (l_43 &= 0L);
    for (l_43 = 20; (l_43 != (-15)); l_43--)
    {
        return (*p_39);
    }
    return g_45;
}







static int func_61(unsigned * p_62, int p_63)
{
    unsigned l_64 = 0xBA424ACDL;
    p_63 ^= 0x82C5A4ECL;
    return l_64;
}







static unsigned short func_78(unsigned * const * p_79, unsigned p_80, unsigned short p_81)
{
    unsigned *l_100 = &g_18;
    int l_109 = 7L;
    int l_110 = 0L;
    int l_154 = (-1L);
    unsigned l_164 = 1UL;
    int l_181 = 0x0FF7F8D1L;
    unsigned *l_236 = (void*)0;
    int l_250 = 0x35AD3CA9L;
    short **l_273 = (void*)0;
    for (p_80 = 0; (p_80 == 6); p_80 = safe_add_func_int16_t_s_s(p_80, 9))
    {
        unsigned *l_107 = &g_108;
        short *l_111 = &g_112;
        short *l_113 = &g_114;
        int *l_115 = &l_109;
        int *l_125 = (void*)0;
        int l_160 = (-4L);
        int *l_215 = (void*)0;
        short *l_257 = &g_258;
        char *l_259 = (void*)0;
        char *l_260 = &g_143;
        (*l_115) = func_61(&g_18, (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((0UL && 65535UL), (g_18 & ((*l_113) ^= ((*l_111) = (0x37D67F3EL != (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_61(l_100, (safe_add_func_int16_t_s_s(((g_18 >= ((safe_rshift_func_uint16_t_u_u((p_80 < func_36(((*l_107) = (safe_div_func_int32_t_s_s((p_81 <= g_25), 1UL))), g_45, l_107)), l_109)) | p_80)) == l_109), p_80))), p_81)), 65535UL)) && l_110) < 0xF54F738DL), p_80)), 0)))))))) | 2UL), g_25)));
        for (p_81 = (-6); (p_81 >= 22); p_81 = safe_add_func_int16_t_s_s(p_81, 7))
        {
            int l_122 = (-1L);
            l_122 &= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(0xB13CFF85L, l_109)), 3));
            g_123 = &l_122;
        }
        if (((*l_115) &= (-1L)))
        {
            unsigned *l_124 = &g_18;
            int l_131 = (-7L);
            int l_179 = 0x135E92A0L;
            if (func_61(l_124, p_81))
            {
                int **l_126 = &l_115;
                int **l_127 = &l_125;
                (*l_127) = ((*l_126) = l_125);
                for (g_25 = 11; (g_25 == 5); --g_25)
                {
                    g_45 = 0L;
                }
                if ((l_131 = ((g_130 = func_61(l_115, g_108)) || l_131)))
                {
                    char *l_142 = &g_143;
                    unsigned char *l_144 = (void*)0;
                    unsigned char *l_145 = &g_130;
                    if ((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(func_36(l_131, l_110, &g_45), ((((*l_145) |= (((*l_142) = (safe_mod_func_int16_t_s_s(((*l_113) = ((((safe_add_func_uint32_t_u_u((((safe_div_func_int32_t_s_s(p_80, g_18)) != (g_25 == func_61(l_124, p_81))) & 0x1895B12CL), g_108)) == p_80) >= g_114) == g_25)), g_108))) && 0xFEL)) & l_109) < 1L))), g_112)))
                    {
                        return g_25;
                    }
                    else
                    {
                        int *l_146 = &l_131;
                        (*l_146) = g_130;
                    }
                }
                else
                {
                    (*l_126) = l_115;
                }
                for (g_130 = 0; (g_130 != 20); g_130++)
                {
                    int *l_151 = &l_131;
                    unsigned short l_157 = 0x075EL;
                    unsigned short *l_158 = &l_157;
                    unsigned char *l_159 = (void*)0;
                    g_161 &= func_36(((l_109 = func_36(g_108, (safe_div_func_uint16_t_u_u(((void*)0 != &g_108), (g_114 = (func_36(l_131, l_109, l_151) && ((*l_158) = (((safe_div_func_int32_t_s_s(((*l_151) = l_154), (safe_add_func_int16_t_s_s(g_45, g_18)))) == 0x64AAL) ^ l_157)))))), &g_25)) && p_81), l_160, &l_160);
                    (*l_151) &= 1L;
                    for (l_110 = 0; (l_110 != 28); l_110 = safe_add_func_int32_t_s_s(l_110, 2))
                    {
                        int l_173 = 1L;
                        unsigned char *l_174 = (void*)0;
                        unsigned char *l_175 = &g_176;
                        unsigned char *l_177 = &g_178;
                        g_45 |= l_110;
                        (*l_151) ^= l_164;
                        l_179 ^= ((safe_lshift_func_int16_t_s_s(g_112, (safe_sub_func_uint8_t_u_u(7UL, ((safe_lshift_func_uint8_t_u_s(((*l_177) = ((*l_175) = (g_161 <= (safe_div_func_int8_t_s_s(l_173, func_61(l_151, ((*l_151) ^= (0xFF46L || g_18)))))))), 2)) >= 65535UL))))) != 9UL);
                    }
                }
            }
            else
            {
                int **l_180 = &g_123;
                unsigned short *l_182 = &g_183;
                unsigned *l_184 = &g_161;
                int l_185 = 0x07AF9B48L;
                unsigned short l_194 = 3UL;
                (*l_180) = &g_45;
                (*l_180) = (void*)0;
                l_154 = ((func_36(l_181, (((*l_184) ^= (g_114 <= ((*l_182) &= p_80))) < func_61(&g_108, p_80)), &l_179) == (((g_25 = ((*l_115) ^= ((p_81 & g_176) > l_131))) != p_81) && 9UL)) | g_108);
                if (p_81)
                {
                    unsigned l_213 = 0UL;
                    for (l_185 = 0; (l_185 <= 5); l_185 = safe_add_func_uint16_t_u_u(l_185, 3))
                    {
                        int *l_190 = &l_179;
                        const unsigned l_193 = 0x328F77E6L;
                        unsigned char l_208 = 0xB9L;
                        l_131 ^= (((safe_sub_func_uint8_t_u_u(0xB0L, (func_36((g_130 <= (4294967293UL != g_143)), g_161, l_190) | (safe_lshift_func_int8_t_s_u(l_193, 5))))) & 0x52FFL) | g_143);
                        (*l_115) = ((0x220EF409L && l_194) != (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_182) = g_161), 12)), p_81)), (safe_sub_func_int8_t_s_s(p_80, (((safe_mod_func_uint32_t_u_u(p_81, (safe_unary_minus_func_int8_t_s(l_208)))) & (((g_209 = &g_123) == &l_190) & 0x99BDL)) == g_210))))), g_18)));
                    }
                    for (l_110 = 0; (l_110 <= (-30)); l_110 = safe_sub_func_int8_t_s_s(l_110, 1))
                    {
                        int l_214 = (-1L);
                        (*l_115) |= l_213;
                        (*l_180) = (*g_209);
                        l_214 |= (0xF4L < 0UL);
                    }
                    (*l_180) = l_215;
                    g_45 = p_80;
                }
                else
                {
                    int l_216 = (-8L);
                    (*l_115) &= p_81;
                    if (l_216)
                        break;
                }
            }
        }
        else
        {
            unsigned char l_223 = 1UL;
            int l_224 = 0x1B73B22AL;
            int *l_229 = &g_25;
            unsigned *l_245 = &g_161;
            int *l_246 = &l_160;
            unsigned short *l_247 = (void*)0;
            (*l_229) |= (((safe_lshift_func_int16_t_s_u(func_61(l_125, (g_112 | g_183)), 8)) != (safe_rshift_func_uint8_t_u_s((func_61(&g_108, (safe_sub_func_uint32_t_u_u((l_223 = l_109), ((l_224 = 0xB4EFAD5DL) == ((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((p_80 & (*l_115)) < l_110), l_110)) >= p_81), p_80)) > g_18))))) | 1UL), 6))) >= l_110);
            (*l_246) = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(p_80, func_61(l_236, (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_154 = 0x97B07068L), (*l_229))), g_130))))), (p_81 = func_61(&l_164, p_80)))), (*l_246)));
            for (l_154 = 17; (l_154 < (-3)); l_154--)
            {
                short **l_252 = &l_111;
                short ***l_251 = &l_252;
                l_250 &= ((*l_246) &= (*l_115));
                (*g_209) = &l_109;
                (*l_251) = (void*)0;
                (*g_209) = &l_160;
            }
        }
        if ((0UL && ((*l_260) = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_257) = ((*l_113) = ((*l_111) = (0x08L < g_45)))), l_109)), g_143)))))
        {
            unsigned **l_262 = &l_107;
            int *l_268 = &g_25;
            (*l_268) = (((safe_unary_minus_func_int8_t_s(func_61(((*l_262) = &g_108), g_258))) & ((func_36(((*l_100) = (0x06ADL || 0xA950L)), (safe_div_func_int32_t_s_s((0L || (((((*l_113) = l_110) >= g_143) | ((g_267 = ((safe_div_func_int8_t_s_s(g_161, g_176)) >= p_80)) | 1UL)) <= g_176)), p_81)), &l_160) | 0x62L) | p_81)) < l_154);
            l_268 = ((*g_209) = &l_160);
            for (l_164 = 0; (l_164 >= 4); l_164++)
            {
                (*l_268) = (p_80 & ((((safe_mod_func_int16_t_s_s(g_25, (p_80 | (l_273 == (g_274 = &l_113))))) != 8L) >= g_25) | p_81));
            }
        }
        else
        {
            int *l_278 = &l_154;
            int *l_279 = (void*)0;
            int *l_280 = &g_25;
            unsigned *l_283 = &g_161;
            unsigned l_284 = 4UL;
            unsigned short *l_285 = (void*)0;
            unsigned short *l_286 = &g_183;
            unsigned short *l_287 = &g_288;
            unsigned char *l_295 = &g_176;
            char *l_296 = &g_267;
            unsigned char l_297 = 255UL;
            (*l_278) |= ((safe_div_func_uint8_t_u_u((!g_143), g_258)) > (-10L));
            (*l_280) |= (*l_278);
            (*l_278) |= (safe_lshift_func_int8_t_s_s((((((*l_283) &= ((void*)0 == &g_161)) & l_284) <= ((*l_287) |= ((*l_286) = 0UL))) && l_250), ((*l_260) = (safe_sub_func_uint16_t_u_u(g_112, 1UL)))));
            (*l_280) = (safe_lshift_func_int16_t_s_u((p_81 >= (*g_275)), g_112));
        }
    }
    return g_25;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
