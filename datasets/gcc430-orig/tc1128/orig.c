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


union U0 {
   volatile short f0;
};

union U1 {
   int f0;
   volatile int f1;
   unsigned char f2;
};


static int g_8 = (-9L);
static union U1 g_32 = {-2L};
static const int *g_132 = (void*)0;
static union U1 *g_170 = &g_32;
static union U1 **g_169 = &g_170;
static int *g_222 = &g_8;
static int **g_221 = &g_222;
static union U0 g_227 = {0L};
static const int *g_285 = (void*)0;
static union U0 *g_313 = &g_227;
static union U0 **g_312 = &g_313;
static unsigned g_339 = 0xCF35AF17L;
static unsigned g_406 = 0x18FFB8DDL;
static const int *g_461 = &g_8;



static short func_1(void);
static int * func_2(unsigned p_3, int * p_4, unsigned p_5, int p_6, unsigned p_7);
static short func_10(int p_11, int p_12, int * p_13);
static const union U1 * func_14(char p_15, int p_16, unsigned short p_17);
static unsigned char func_26(int * const p_27, short p_28, union U1 * p_29, int p_30);
static int * func_36(unsigned short p_37, int * p_38, unsigned p_39, char p_40, const unsigned short p_41);
static int ** func_52(char p_53, int * const * p_54);
static int ** func_56(const unsigned char p_57, unsigned p_58, int ** p_59);
static int * func_63(unsigned short p_64, int p_65, int ** p_66);
static int func_72(char p_73, char p_74, const int * p_75, int p_76);
static short func_1(void)
{
    int *l_9 = &g_8;
    (*g_221) = func_2(g_8, l_9, g_8, g_8, (*l_9));

    ;
    ;
    ;
    (**g_221) = (*l_9);
    return g_8;
}







static int * func_2(unsigned p_3, int * p_4, unsigned p_5, int p_6, unsigned p_7)
{
    unsigned l_597 = 0xBB9D2CB6L;
    l_597 = (func_10(g_8, p_3, &g_8) > g_339);

    ;
    ;

    ;
    (*p_4) = (*g_461);
    return p_4;


}







static short func_10(int p_11, int p_12, int * p_13)
{
    union U1 *l_31 = &g_32;
    int l_372 = 1L;
    unsigned l_373 = 8UL;
    const union U1 **l_579 = (void*)0;
    const union U1 *l_581 = &g_32;
    const union U1 **l_580 = &l_581;
    (*l_580) = func_14(p_12, (((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(4294967295UL, (-3L))), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(func_26(&g_8, p_12, l_31, g_32.f0), 7)), (safe_rshift_func_int8_t_s_s(0L, 5)))))) & l_372) <= l_372), l_373);

    ;
    ;

    ;
    ;
    if ((&g_313 != (void*)0))
    {
        int l_586 = (-1L);
        int *l_587 = (void*)0;
        int * const l_588 = &l_586;
        union U1 *l_593 = &g_32;
        (*p_13) = (safe_mul_func_int8_t_s_s(g_8, ((safe_mul_func_uint16_t_u_u((9L || (4294967293UL == ((l_586 > g_227.f0) >= (((void*)0 == l_587) | (func_26(&l_586, ((func_26(&g_8, p_12, (*g_169), (*p_13)) || 1L) == 0xF7B63D27L), l_31, l_372) != l_373))))), 0L)) == p_11)));
        if (func_26(l_588, l_373, (*g_169), (*p_13)))
        {
            union U0 ***l_589 = &g_312;
            (*l_588) = 8L;
            (*p_13) = ((void*)0 != l_589);
            (*g_221) = &l_372;

            ;
        }
        else
        {
            int *l_590 = &l_372;
            (*p_13) = (1UL != (-1L));
            (*g_221) = l_590;

            ;
            (*g_222) = (safe_mul_func_uint8_t_u_u((*l_590), (g_227.f0 != 8UL)));
            l_372 = (func_26(&l_586, (*l_588), (*g_169), func_26(p_13, p_12, l_593, (*p_13))) || (-1L));
        }

        ;
    }
    else
    {
        int * const *l_596 = &g_222;
        (*p_13) = (l_373 ^ ((safe_mod_func_int32_t_s_s((l_596 == (void*)0), l_372)) & l_373));
    }


    g_8 = (+(*p_13));
    return g_339;


}







static const union U1 * func_14(char p_15, int p_16, unsigned short p_17)
{
    union U1 ***l_376 = &g_169;
    int l_377 = 0x60DF409EL;
    int **l_413 = &g_222;
    unsigned short l_448 = 65532UL;
    union U0 *l_549 = &g_227;
    union U1 ***l_560 = &g_169;
    unsigned l_567 = 0x6526F974L;
    unsigned char l_568 = 0x74L;
    (*g_222) = (safe_mul_func_uint16_t_u_u(((void*)0 == l_376), p_16));
    if (l_377)
    {
        int ***l_380 = (void*)0;
        int ***l_381 = &g_221;
        unsigned short l_396 = 0xD7AEL;
        const union U1 *l_407 = &g_32;
        int l_435 = 0xFB7BE2BCL;
        union U0 * const l_447 = &g_227;
        union U1 *l_480 = &g_32;
        unsigned char l_481 = 252UL;
        int **l_524 = &g_222;
        if ((((~(safe_rshift_func_int8_t_s_u(func_72(((func_72(g_8, ((l_380 != l_381) != (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_377, 0xDFEFL)), p_16)) && g_32.f2), 1)) > (((safe_mod_func_uint8_t_u_u(255UL, (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_15, 3)), 0L)))) < p_15) <= l_377)), l_377))), (*g_221), (**g_221)) == l_377) ^ l_377), g_227.f0, (*g_221), l_396), g_32.f2))) >= p_17) > (-6L)))
        {
            int l_400 = 0xCAD145C0L;
            for (g_32.f2 = 15; (g_32.f2 > 27); g_32.f2 = safe_add_func_uint8_t_u_u(g_32.f2, 9))
            {
                if ((+(l_376 != (void*)0)))
                {
                    int l_399 = 1L;
                    (**g_221) = l_399;
                    (**l_381) = &p_16;

                    ;
                }
                else
                {
                    int l_405 = (-9L);
                    union U1 *l_408 = &g_32;
                    (***l_381) = p_15;
                    (*g_222) = (+func_72(p_15, l_400, &p_16, (**g_221)));
                    (**g_221) = ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((l_405 <= (g_406 <= (l_407 != l_408))) >= g_227.f0), (l_400 >= (0xA817L == ((~(0xBEL && g_32.f2)) & p_17))))), g_8)) < p_15);
                    if ((***l_381))
                        continue;
                }
                (***l_381) = 0xD79BB856L;
            }

            ;
            (**g_221) = (-3L);
            (*l_413) = func_63((safe_mod_func_int8_t_s_s((((**l_376) == (void*)0) && p_16), p_15)), (**g_221), l_413);

            ;
        }
        else
        {
            int l_434 = (-5L);
            const union U1 *l_483 = &g_32;
            union U1 *l_488 = (void*)0;
            unsigned char l_538 = 0xDAL;
            union U0 *l_539 = &g_227;
            if ((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(func_72(g_339, (g_227.f0 < (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((255UL | g_8), g_8)), ((safe_mul_func_int16_t_s_s(p_17, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_8 >= ((safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_15 >= (**l_413)), g_32.f2)), 0x15L)) && p_17), (***l_381))) > p_16)), 255UL)), (**l_413))))) > p_15)))), (*g_221), l_434), l_435)) != 65531UL) == g_32.f2) || 0UL), g_406)))
            {
                char l_438 = 0x02L;
                int **l_449 = &g_222;
                if (func_26((**l_381), g_8, (**l_376), p_17))
                {
                    p_16 = p_15;
                }
                else
                {
                    union U0 **l_458 = (void*)0;
                    int l_460 = 1L;
                    (*g_222) = (safe_lshift_func_uint8_t_u_u(((g_339 > p_15) | ((safe_add_func_uint32_t_u_u(g_227.f0, (safe_lshift_func_int8_t_s_s(func_26((*g_221), (g_406 == (safe_mod_func_uint16_t_u_u(((void*)0 == l_458), ((safe_unary_minus_func_uint16_t_u((0L < func_72(l_460, g_32.f2, g_461, p_16)))) ^ p_15)))), (**l_376), p_15), 6)))) ^ g_406)), p_16));
                    (**g_221) = ((void*)0 == (*g_221));
                }
                if (((((safe_lshift_func_int8_t_s_s(((0x2209L != ((safe_mul_func_uint16_t_u_u(g_406, func_72(((safe_mod_func_int16_t_s_s(((func_26((*g_221), ((g_406 | (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((func_26(&p_16, (safe_sub_func_uint32_t_u_u(1UL, (((!0xDC942D0CL) == (!((safe_lshift_func_int16_t_s_u(func_72((safe_rshift_func_uint16_t_u_u(l_434, ((safe_sub_func_uint8_t_u_u((p_15 > g_32.f2), g_339)) > p_15))), p_16, (*g_221), p_17), 9)) || g_406))) | p_17))), l_480, p_15) > (-4L)), 11)) && (**l_449)), g_227.f0))) && g_406), (*g_169), p_16) || 1UL) & 0xBC0E3DA2L), l_434)) | p_16), l_481, (*l_413), p_15))) != g_406)) < 4294967289UL), g_406)) >= p_17) && g_8) && (**l_413)))
                {
                    int *l_482 = &l_435;
                    l_482 = &p_16;

                    ;
                }
                else
                {
                    (*l_413) = (*g_221);
                    (*g_221) = (*l_413);
                }
                return l_483;


            }
            else
            {
                short l_497 = (-1L);
                char l_501 = (-5L);
                int *** const l_523 = &l_413;
                const union U1 *l_527 = &g_32;
                union U0 ***l_536 = &g_312;
                if (((safe_unary_minus_func_int8_t_s(g_406)) > 65535UL))
                {
                    int l_498 = 0x40FB0CFAL;
                    union U1 *l_509 = &g_32;
                    unsigned short l_525 = 0xA48CL;
                    const short l_532 = 0x0F9EL;
                    for (l_396 = 10; (l_396 == 57); l_396 = safe_add_func_uint8_t_u_u(l_396, 3))
                    {
                        const union U1 *l_487 = (void*)0;
                        (**l_413) = 0x48190C90L;
                        return l_487;


                    }
                    p_16 = func_72((p_16 && func_26(&l_434, g_32.f2, l_488, ((*g_169) != (*g_169)))), ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0x72L, g_8)), g_227.f0)), (*g_222))) != 0x8C5EABFDL), p_15)) <= 0x8020ED56L), (*g_221), l_497);
                    if (l_498)
                    {
                        int *l_508 = &l_435;
                        (**l_381) = func_36(g_227.f0, &p_16, (((safe_rshift_func_int16_t_s_u(l_501, p_17)) < (((g_339 ^ (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(1UL, func_72(((&g_170 == (void*)0) <= ((void*)0 != &p_16)), g_8, (*g_221), (*g_461)))), p_17))) | 0xBAL) ^ l_498)) != l_498), g_32.f2, p_16);

                        ;
                        ;
                        ;
                        (*l_508) = (safe_mod_func_uint8_t_u_u(g_8, 0x7EL));
                        (*l_508) = ((void*)0 != l_509);
                        (*l_508) = 0L;
                    }
                    else
                    {
                        unsigned char l_522 = 1UL;
                        int *l_526 = &g_8;
                        (**g_221) = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_498, g_339)), (0x89L > ((void*)0 == (*g_221)))));
                        (*l_526) = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_498 < func_26(func_63(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_17, l_522)), 3UL)) < 0xF2L), (&g_221 == l_523), l_524), g_32.f2, &g_32, l_525)), p_16)), l_434));

                        ;

                        return l_527;


                    }

                    ;
                    ;
                    ;
                    (*l_413) = &p_16;

                    ;
                }
                else
                {
                    const int *l_537 = &g_8;
                    if ((*g_461))
                    {
                        (*l_376) = &g_170;
                        (*g_221) = &p_16;

                        ;
                    }
                    else
                    {
                        union U0 ***l_533 = &g_312;
                        (*l_533) = (void*)0;

                        ;
                        (***l_523) = (***l_523);
                        p_16 = ((safe_add_func_int32_t_s_s(func_72(p_17, ((**l_413) <= ((void*)0 != l_536)), l_537, (*g_461)), p_15)) && ((l_434 || g_406) && 0xCDL));
                        (*l_524) = (void*)0;

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

            ;
            ;
            ;
            ;
            if (((l_538 != g_32.f2) < ((l_539 != l_539) <= (safe_add_func_uint8_t_u_u(p_17, (((void*)0 == (**l_376)) != p_17))))))
            {
                int *l_542 = &g_8;
                p_16 = p_15;
                (*l_542) = 0L;
                (*l_524) = (*g_221);
                for (g_406 = 0; (g_406 == 40); g_406++)
                {
                    (*l_542) = (safe_mul_func_int8_t_s_s((g_32.f2 | ((safe_lshift_func_int16_t_s_u(l_538, 6)) | g_32.f2)), p_17));
                    (*l_542) = (l_549 == (void*)0);
                }
            }
            else
            {
                int l_550 = 0xE7C6EC0EL;
                unsigned short l_551 = 65535UL;
                l_551 = l_550;
                l_550 = (g_8 ^ g_339);
            }
        }

        ;
        ;
        ;
        ;
        return (*g_169);



    }
    else
    {
        char l_563 = (-1L);
        int l_564 = (-4L);
        (**l_413) = func_72(((((safe_mod_func_uint16_t_u_u(((((((void*)0 != l_560) & (p_16 || ((g_406 <= ((0UL == 0xFECDD40CL) <= g_227.f0)) < g_8))) & (safe_sub_func_uint16_t_u_u(func_26((*l_413), (**l_413), (*g_169), l_563), 0xB970L))) | g_406) || 9UL), g_8)) | (**l_413)) || p_15) != 0x7C49E4FDL), p_17, (*g_221), (*g_222));
        l_564 = 0L;
    }
    if ((((safe_rshift_func_uint16_t_u_s(0UL, 8)) < (l_567 <= 0x0561L)) <= l_568))
    {
        unsigned short l_571 = 0xA779L;
        int * const l_578 = &g_8;
        (**l_413) = (*g_461);
        (*g_222) = (safe_sub_func_uint32_t_u_u((l_571 & ((safe_mul_func_int16_t_s_s(5L, (0x3E36L >= ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((p_16 || (g_8 & p_16)), 0x8A1DL)), func_26(l_578, p_16, (*g_169), p_16))) > g_8)))) && (**l_413))), (-1L)));
    }
    else
    {
        (**l_560) = (void*)0;

        ;
    }

    ;
    return (*g_169);


}







static unsigned char func_26(int * const p_27, short p_28, union U1 * p_29, int p_30)
{
    int l_46 = (-1L);
    char l_49 = 1L;
    unsigned l_369 = 18446744073709551611UL;
    for (g_32.f2 = 7; (g_32.f2 == 22); ++g_32.f2)
    {
        char l_35 = 0x96L;
        int *l_42 = (void*)0;
        unsigned l_43 = 0x8DB8846BL;
        if (l_35)
            break;
    }
    return l_369;
}







static int * func_36(unsigned short p_37, int * p_38, unsigned p_39, char p_40, const unsigned short p_41)
{
    int *l_61 = &g_8;
    int **l_60 = &l_61;
    union U1 ***l_232 = &g_169;
    unsigned l_233 = 18446744073709551615UL;
    union U0 * const l_238 = &g_227;
    char l_346 = 0x7AL;
    const int *l_349 = &g_8;
    int l_368 = 0L;
    for (p_39 = 0; (p_39 > 44); p_39++)
    {
        int l_55 = (-1L);
        int ***l_229 = &g_221;
    }
    if (((safe_sub_func_int32_t_s_s((*l_61), (l_232 == l_232))) >= l_233))
    {
        int *l_234 = (void*)0;
        return l_234;


    }
    else
    {
        const union U0 *l_237 = &g_227;
        const int *l_254 = &g_8;
        int **l_255 = &g_222;
        const union U1 *l_297 = (void*)0;
        unsigned l_300 = 1UL;
        if (p_37)
        {
            unsigned l_247 = 18446744073709551615UL;
            const int *l_268 = (void*)0;
            union U0 *l_277 = &g_227;
            int **l_284 = &g_222;
            int l_309 = (-5L);
            int l_336 = (-1L);
            (*l_60) = func_63(p_41, (+(safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_247 >= ((safe_sub_func_int32_t_s_s((**g_221), 0x704ADF11L)) ^ g_32.f2)), 2UL)), (*l_61)))), l_255);

            ;

            if ((+(*l_254)))
            {
                union U1 * const *l_265 = &g_170;
                union U1 * const **l_264 = &l_265;
                int l_266 = 0x6D35079EL;
                union U0 *l_278 = &g_227;
                if (l_247)
                {
                    int *l_267 = (void*)0;
                    (*g_221) = l_267;

                    ;
                }
                else
                {
                    (**l_232) = (*g_169);
                }


                (*l_61) = l_266;
                (**l_60) = (safe_lshift_func_uint8_t_u_u((l_277 != l_278), 2));
            }
            else
            {
                unsigned l_279 = 4294967292UL;
                int l_286 = 0xC78BEF38L;
                int **l_291 = (void*)0;
                (*l_61) = (7UL < l_279);
                l_286 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((**l_60) || (~g_32.f2)), p_41)), p_39));
                if ((+(safe_unary_minus_func_int32_t_s(2L))))
                {
                    int l_290 = 0x478F816EL;
                    int l_292 = 0x9BE5D540L;
                    if (p_40)
                    {
                        (*g_221) = p_38;


                        (*g_221) = (*l_60);

                        ;
                        l_292 = p_41;
                    }
                    else
                    {
                        union U0 **l_301 = (void*)0;
                        int l_302 = 0xEB70EFD0L;
                        (*l_61) = (((4294967295UL != l_292) < (safe_mod_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u(((l_297 != (**l_232)) | (safe_rshift_func_uint16_t_u_s((g_8 == (g_8 | (l_300 ^ ((void*)0 == l_301)))), g_8))), l_290)) > p_37) || l_302) == p_39), g_8))) || p_39);
                        (*l_60) = &g_8;
                    }
                    (**l_60) = ((g_32.f2 | g_32.f2) == ((((**l_60) <= l_292) & (safe_sub_func_int8_t_s_s(g_227.f0, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((void*)0 != &l_60), 6)) < ((&p_38 != (void*)0) & 1UL)), 0x4EA9L))))) >= l_309));
                    for (l_300 = 0; (l_300 < 33); ++l_300)
                    {
                        union U0 ***l_314 = &g_312;
                        (*l_284) = &g_8;

                        ;
                        (*l_314) = g_312;
                        if (l_292)
                            break;
                        (*l_255) = p_38;


                    }


                    (*l_60) = &g_8;
                }
                else
                {
                    unsigned l_319 = 0xCED499C8L;
                    short l_320 = 2L;
                    if (((*l_254) >= ((p_41 & g_8) < (((((void*)0 == (*l_60)) < (safe_add_func_uint8_t_u_u((0x5475L ^ (g_32.f2 != (safe_add_func_int32_t_s_s(0x1FECEB42L, l_319)))), g_32.f2))) & l_320) ^ 0xF7L))))
                    {
                        (*g_221) = p_38;


                        g_8 = (*l_254);
                    }
                    else
                    {
                        int *l_321 = (void*)0;
                        (**l_232) = (void*)0;

                        ;
                        return l_321;


                    }


                }


            }


            if ((safe_sub_func_int32_t_s_s((**l_60), ((safe_rshift_func_int8_t_s_u(g_227.f0, (((**l_60) & ((safe_mul_func_uint16_t_u_u(g_8, (safe_lshift_func_uint16_t_u_u((((0L < g_8) < (safe_unary_minus_func_uint32_t_u(p_39))) | (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((p_40 || g_32.f2) | 0x3A13L), p_40)) | 1UL), (-1L))) >= (**l_60)) < (**l_60))), p_40)))) ^ 0xAF29779FL)) && (**l_60)))) > 4294967295UL))))
            {
                const union U0 **l_335 = &l_237;
                (**l_60) = (0x48L || g_227.f0);
                (*l_335) = l_237;
            }
            else
            {
                (*l_60) = (void*)0;

                ;
            }

            ;
            if (p_37)
            {
                unsigned char l_342 = 0xA8L;
                const int **l_345 = &g_132;
                int *l_350 = &l_336;
                (*l_350) = (safe_mod_func_uint32_t_u_u(l_342, (~(((safe_add_func_uint8_t_u_u((&p_38 != l_345), (g_32.f2 != func_72(g_32.f2, l_346, l_349, (*l_254))))) <= g_339) > 0x27D1L))));
                (*l_350) = (*l_350);
            }
            else
            {
                int *l_351 = (void*)0;
                (*l_60) = l_351;

                ;
            }
        }
        else
        {
            int l_356 = 5L;
            short l_367 = 0x0878L;
            (**l_60) = (safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((g_227.f0 >= 1L) > l_356), l_368)) & g_32.f2), p_37));
            (*l_255) = (*g_221);
        }

        ;
        ;

    }

    ;
    ;

    (*l_60) = (*l_60);
    return p_38;


}







static int ** func_52(char p_53, int * const * p_54)
{
    union U0 *l_226 = &g_227;
    union U0 **l_225 = &l_226;
    int *l_228 = (void*)0;
    for (g_8 = 24; (g_8 >= (-9)); --g_8)
    {
        (*g_169) = (*g_169);
    }
    (**g_221) = ((void*)0 == l_225);
    (*g_221) = l_228;

    ;
    return &g_222;


}







static int ** func_56(const unsigned char p_57, unsigned p_58, int ** p_59)
{
    char l_62 = (-1L);
    int *l_71 = &g_8;
    union U1 *l_79 = &g_32;
    if (l_62)
    {
        unsigned char l_220 = 255UL;
        (*p_59) = func_63(((safe_add_func_int8_t_s_s((((-9L) & (safe_sub_func_int8_t_s_s((((void*)0 != l_71) <= p_58), (func_72(((safe_add_func_int32_t_s_s(g_32.f2, g_8)) <= (((*p_59) == &g_8) >= ((&g_32 != l_79) != 0x2A8FL))), p_58, &g_8, (**p_59)) & p_57)))) ^ p_57), 0x48L)) > g_32.f2), g_32.f2, p_59);

        ;
        (*p_59) = func_63((1L <= p_58), ((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((*l_71) <= (g_32.f2 ^ ((safe_rshift_func_int16_t_s_u(0x81AEL, 1)) ^ (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_32.f2, g_32.f2)), p_57))))), g_32.f2)), p_58)) >= p_58) & l_220) | (*l_71)), &l_71);


    }
    else
    {
        (*l_71) = 0xE64DF401L;
        return p_59;


    }


    ;
    return g_221;


}







static int * func_63(unsigned short p_64, int p_65, int ** p_66)
{
    unsigned short l_96 = 0xFB0CL;
    union U1 *l_97 = (void*)0;
    short l_98 = 8L;
    int **l_123 = (void*)0;
    char l_155 = (-5L);
    int *l_208 = &g_8;
    for (p_64 = 0; (p_64 > 2); ++p_64)
    {
        int l_91 = 1L;
        union U1 **l_117 = &l_97;
        int *l_118 = &g_8;
        (**p_66) = (safe_lshift_func_int8_t_s_u(g_8, (g_32.f2 && (safe_mod_func_int8_t_s_s(((-2L) != (4294967295UL ^ (safe_lshift_func_uint8_t_u_u((l_91 && ((!(safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(p_65, l_96)), 7))) & ((((void*)0 != l_97) < p_65) < l_98))), 1)))), g_8)))));
        for (p_65 = 26; (p_65 < 9); p_65 = safe_sub_func_int8_t_s_s(p_65, 1))
        {
            union U1 ***l_115 = (void*)0;
            union U1 ***l_116 = (void*)0;
            for (l_98 = (-28); (l_98 >= (-22)); l_98 = safe_add_func_int16_t_s_s(l_98, 1))
            {
            }
            l_117 = (void*)0;

            ;
        }

        ;
        (**p_66) = (&l_117 != (void*)0);
        (*p_66) = l_118;
    }
    for (l_96 = 20; (l_96 == 32); ++l_96)
    {
        int *l_121 = &g_8;
        int *l_122 = &g_8;
        l_121 = (void*)0;

        ;
        l_121 = l_122;

        ;
    }
    if (((void*)0 != l_123))
    {
        unsigned short l_126 = 65535UL;
        g_8 = (safe_sub_func_uint16_t_u_u(((0x41226098L || 4294967291UL) | p_64), p_64));
        (**p_66) = l_126;
        return (*p_66);


    }
    else
    {
        unsigned char l_129 = 0UL;
        unsigned l_157 = 0x794C0DA3L;
        short l_182 = 0x2276L;
        union U1 ** const *l_189 = &g_169;
        union U0 *l_206 = (void*)0;
        union U1 ***l_209 = &g_169;
        if ((65535UL | 0x50B9L))
        {
            union U1 ** const l_131 = &l_97;
            union U1 ** const *l_130 = &l_131;
            int l_133 = 0x83FE2F77L;
            if (l_133)
            {
                union U1 *l_152 = &g_32;
                const int *l_156 = &l_133;
                g_132 = &g_8;

                ;
                (**p_66) = ((safe_mod_func_uint16_t_u_u((func_72((safe_mul_func_int16_t_s_s(((p_65 || (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(func_72((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((p_65 || func_72(((*g_132) < (&l_133 == (void*)0)), (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((~(l_152 != l_152)) < (safe_sub_func_uint32_t_u_u(p_65, 4294967295UL))), l_155)), 5)), 0x00L)), (*p_66), (**p_66))), p_64)), p_65)), g_32.f2, l_156, g_32.f2), l_157)), (-3L)))) == g_32.f2), 3L)), (*l_156), g_132, l_133) & 0UL), p_64)) || (-4L));
                return &g_8;


            }
            else
            {
                int *l_158 = &l_133;
                (*p_66) = l_158;


                for (l_129 = 0; (l_129 >= 54); l_129++)
                {
                    return &g_8;



                }
            }


            (*p_66) = &l_133;
            for (l_129 = 0; (l_129 >= 60); l_129++)
            {
                int l_173 = 0x58BBDFDCL;
                if (l_133)
                    break;
                (**p_66) = (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((void*)0 != &g_132), 2)) & ((!(safe_sub_func_int16_t_s_s((((((void*)0 == g_169) || ((safe_sub_func_int16_t_s_s(l_173, l_173)) | 0x1BCAL)) && g_32.f2) >= 0xB685L), l_157))) >= 0xE3DC10E4L)), p_64));
            }
        }
        else
        {
            union U1 ***l_190 = (void*)0;
            int l_203 = 2L;
            for (l_96 = 0; (l_96 <= 50); l_96 = safe_add_func_int8_t_s_s(l_96, 2))
            {
                int l_202 = 0L;
                unsigned char l_205 = 1UL;
                (**p_66) = (func_72(p_65, g_32.f2, &g_8, (**p_66)) >= (p_65 < g_32.f2));
                (*g_169) = (*g_169);
                for (p_64 = 13; (p_64 > 12); p_64 = safe_sub_func_uint16_t_u_u(p_64, 4))
                {
                    unsigned short l_193 = 65527UL;
                    if (((l_129 | (safe_lshift_func_int8_t_s_s((l_182 & g_8), ((p_66 == (void*)0) & (65535UL == g_32.f2))))) & l_182))
                    {
                        (**p_66) = (&g_132 == p_66);
                        (**p_66) = ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((((p_65 && 5L) ^ (l_189 == l_190)) >= ((safe_add_func_uint16_t_u_u(g_8, g_8)) | l_193)), p_65)) || (p_64 & p_65)), g_32.f2)), 0x12F4L)) > 0L);
                        (**p_66) = l_193;
                    }
                    else
                    {
                        const int *l_204 = &l_203;
                        union U0 **l_207 = &l_206;
                        (**p_66) = ((safe_mod_func_uint8_t_u_u(g_32.f2, l_205)) < 0x30L);
                        (*l_207) = l_206;
                    }
                }
            }
            (*p_66) = l_208;
        }


        (*l_209) = &g_170;
    }


    return &g_8;


}







static int func_72(char p_73, char p_74, const int * p_75, int p_76)
{
    unsigned short l_82 = 0x7C29L;
    for (g_8 = 0; (g_8 > (-6)); g_8--)
    {
        l_82 = (*p_75);
    }
    return g_32.f2;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
