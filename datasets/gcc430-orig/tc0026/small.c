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


struct S0 {
   const int f0;
   signed f1 : 28;
   unsigned char f2;
   short f3;
};

union U1 {
   signed f0 : 21;
};

union U2 {
   unsigned f0;
};


static int g_7 = 0xA2FAFD11L;
static struct S0 g_34 = {-1L,11611,0x7DL,1L};
static struct S0 *g_33 = &g_34;
static int g_55 = 1L;
static int g_115 = 0xC459F779L;
static unsigned g_127 = 0UL;
static union U2 g_131 = {0UL};
static int *g_162 = (void*)0;
static int ** const g_193 = (void*)0;
static int ** const *g_192 = &g_193;
static union U1 g_233 = {0x2EEF4D9AL};
static union U1 *g_232 = &g_233;
static union U1 **g_231 = &g_232;
static union U2 **g_338 = (void*)0;
static int *g_383 = (void*)0;
static int g_384 = (-3L);
static int *g_450 = (void*)0;
static unsigned g_473 = 8UL;
static unsigned g_480 = 0x698D87ACL;
static struct S0 **g_568 = &g_33;
static struct S0 ***g_567 = &g_568;
static union U2 g_600 = {0x9E901CEAL};
static unsigned char g_763 = 0x0CL;



static const short func_1(void);
static int * func_2(int * p_3, int * p_4, unsigned char p_5);
static short func_10(int * p_11, int * p_12, union U1 p_13);
static int * func_14(unsigned p_15, unsigned char p_16);
static short func_17(int * p_18);
static int * func_19(int * p_20, int * p_21, int * p_22);
static int * func_23(int p_24, int * p_25, int * p_26, unsigned p_27, union U2 p_28);
static int func_39(unsigned short p_40);
static struct S0 * func_44(struct S0 * p_45, unsigned char p_46, unsigned char p_47, struct S0 * p_48, int p_49);
static struct S0 * func_50(unsigned p_51, union U1 p_52);
static const short func_1(void)
{
    int *l_6 = &g_7;
    int l_30 = (-2L);
    union U2 l_32 = {0xE60D743CL};
    union U1 l_606 = {0xB09303C9L};
    l_6 = func_2(l_6, l_6, ((safe_mod_func_uint8_t_u_u((0UL <= (((((func_10(func_14(((!(func_17(func_19(&g_7, func_23((g_7 != ((safe_unary_minus_func_int16_t_s(l_30)) || (safe_unary_minus_func_int16_t_s((&g_7 != &l_30))))), &l_30, &l_30, g_7, l_32), &g_7)) <= g_34.f0)) ^ (-7L)), g_233.f0), &l_30, l_606) && (*l_6)) != g_600.f0) | g_600.f0) >= g_233.f0) >= l_32.f0)), 1L)) < g_600.f0));

    ;
    ;




    ;
    (*l_6) = (*l_6);
    return g_763;


}







static int * func_2(int * p_3, int * p_4, unsigned char p_5)
{
    int *l_825 = &g_115;
    (*p_4) = (g_131.f0 < (!((p_5 || (*p_3)) != ((void*)0 == (*g_568)))));
    (*l_825) = func_17(func_23(p_5, p_3, l_825, (*l_825), g_131));
    for (g_34.f2 = (-18); (g_34.f2 < 55); ++g_34.f2)
    {
        int **l_828 = &l_825;
        (*l_828) = p_4;

        ;
        (*l_828) = l_825;
        (*l_825) = ((**g_567) == (*g_568));
        if ((safe_mod_func_int8_t_s_s((&l_825 == (void*)0), (g_55 | (0x8DL != (safe_lshift_func_int16_t_s_s((((0x455DL == (p_5 && (safe_add_func_uint32_t_u_u((**l_828), (safe_sub_func_uint8_t_u_u((*l_825), (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((*l_825), (**l_828))), g_7)), 14)))))))))) == p_5) > p_5), 8)))))))
        {
            (*p_3) = (*l_825);
            (*l_828) = p_4;
        }
        else
        {
            (*p_3) = (safe_rshift_func_int8_t_s_u((-3L), 6));
            (*l_828) = p_4;
        }
    }

    ;
    return l_825;


}







static short func_10(int * p_11, int * p_12, union U1 p_13)
{
    unsigned l_607 = 0xC76CDB37L;
    char l_617 = (-9L);
    union U2 *l_619 = &g_600;
    union U2 **l_618 = &l_619;
    int *l_668 = &g_115;
    union U2 *l_689 = &g_600;
    unsigned l_766 = 4294967295UL;
    unsigned char l_775 = 255UL;
    int l_776 = 0xE41BBC82L;
    int l_792 = 0x93D67A81L;
    unsigned short l_817 = 65528UL;
    int **l_824 = &g_162;
    if (((func_17(p_12) != (((+l_607) < p_13.f0) || ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_607, g_34.f0)), l_607)) && l_617), 5)))), (((void*)0 == l_618) < 0UL))) <= p_13.f0))) <= 0x6DBFL))
    {
        unsigned l_623 = 18446744073709551606UL;
        int l_626 = 0x6FAE800AL;
        for (g_384 = 0; (g_384 > 5); ++g_384)
        {
            int *l_622 = &g_115;
            int **l_624 = (void*)0;
            int **l_625 = &g_162;
            (*g_231) = &p_13;

            ;
            (*l_625) = p_11;

            ;
            (*p_11) = (&g_193 != (void*)0);
        }



        l_626 = l_623;
    }
    else
    {
        unsigned l_631 = 18446744073709551611UL;
        struct S0 ***l_641 = &g_568;
        const unsigned l_665 = 3UL;
        int *l_718 = &g_55;
        int **l_802 = &g_450;
        int ***l_801 = &l_802;
        union U1 *l_815 = &g_233;
        const union U2 *l_822 = &g_600;
        const union U2 **l_823 = &l_822;
        for (l_607 = (-6); (l_607 >= 16); ++l_607)
        {
            int *l_629 = &g_55;
            char l_630 = (-6L);
            union U2 *l_636 = (void*)0;
            (*l_618) = (*l_618);
            (*p_11) = (((p_13.f0 <= func_17(l_629)) >= (l_630 >= 0xFCL)) < ((g_34.f0 & l_631) & (safe_unary_minus_func_uint16_t_u(p_13.f0))));
            for (g_480 = 0; (g_480 != 8); g_480 = safe_add_func_int16_t_s_s(g_480, 3))
            {
                struct S0 **l_635 = (void*)0;
                int l_644 = 0xF617D356L;
                if (((g_384 != (l_635 == (void*)0)) <= (((void*)0 == l_636) ^ (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_13.f0, p_13.f0)) && ((0x50L & p_13.f0) < (*p_12))), p_13.f0)))))
                {
                    (*p_11) = 0x6962399CL;
                }
                else
                {
                    (*p_11) = (*p_12);
                    (*g_568) = (**g_567);
                }
                for (g_384 = (-14); (g_384 > 25); g_384++)
                {
                    unsigned char l_647 = 248UL;
                    if (l_617)
                        break;
                    (*p_12) = l_617;
                    (*l_629) = l_647;
                    (*p_12) = (*p_12);
                }
            }
            for (g_34.f2 = 0; (g_34.f2 > 4); g_34.f2 = safe_add_func_uint8_t_u_u(g_34.f2, 2))
            {
                unsigned l_650 = 0x3B9606BBL;
                (*p_11) = ((p_13.f0 < g_115) | (l_607 ^ l_650));
                for (l_650 = 0; (l_650 == 36); ++l_650)
                {
                    int **l_653 = (void*)0;
                    int **l_654 = &g_162;
                    (*l_654) = p_12;


                }
            }
        }


lbl_681:
        (*p_11) = ((safe_mod_func_int32_t_s_s((p_13.f0 | g_7), l_631)) >= (safe_sub_func_int16_t_s_s(l_631, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((~(g_473 >= (0x4FF8A131L || (safe_add_func_uint32_t_u_u((p_13.f0 & (!l_665)), ((void*)0 != (*g_567))))))), p_13.f0)), 4)))));
        if (((g_233.f0 >= p_13.f0) & 0x42L))
        {
            unsigned l_669 = 9UL;
            int *l_680 = &g_7;
            int *l_682 = &g_55;
            union U2 *l_687 = &g_131;
            int l_769 = 1L;
            char l_814 = (-1L);
lbl_688:
            for (g_7 = 13; (g_7 < 12); g_7--)
            {
                (*p_11) = (0x3EDBL ^ g_115);
                l_668 = func_14(((l_607 | p_13.f0) > (g_34.f1 >= p_13.f0)), ((void*)0 != l_641));
                return g_55;
            }
            (*p_11) = (*p_12);
            if ((((((void*)0 == (*l_618)) == (l_669 & l_669)) <= ((((((p_13.f0 == 0L) ^ (safe_mod_func_int32_t_s_s((*p_11), l_631))) != (0x4CL < l_631)) != 0L) >= g_34.f3) ^ 0UL)) != p_13.f0))
            {
                union U1 *l_677 = &g_233;
                int *l_678 = &g_115;
                int **l_683 = &l_678;
                unsigned short l_703 = 0x3028L;
                for (l_607 = (-12); (l_607 > 51); l_607++)
                {
                    int l_676 = (-10L);
                    if (((safe_lshift_func_int16_t_s_s(3L, 0)) != l_676))
                    {
                        if ((*p_11))
                            break;
                        if (l_676)
                            break;
                        (*g_231) = l_677;

                        ;
                    }
                    else
                    {
                        int **l_679 = (void*)0;
                        l_680 = p_12;


                    }
                    if ((*p_11))
                        break;
                }
                if (g_34.f1)
                    goto lbl_681;
                (*l_683) = l_682;

                ;
                if ((*l_680))
                {
                    int *l_686 = &g_55;
                    (*p_11) = func_17(func_14(((**l_683) ^ (**l_683)), (safe_rshift_func_uint16_t_u_u((*l_682), ((0xC9094D11L != ((*l_678) < ((g_473 && p_13.f0) & (*l_668)))) <= (0xABFEL <= 0L))))));
                    (*l_683) = l_686;
                    if ((~((*p_12) != 0x167BEF9EL)))
                    {
                        (*l_683) = l_682;
                        (**l_641) = (**g_567);
                        (*p_12) = (*l_682);
                        (*l_683) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_618) = l_687;

                        ;
                        if (g_600.f0)
                            goto lbl_688;
                        (*l_683) = func_14(g_7, (g_473 | ((*l_683) == (void*)0)));

                        ;
                        return g_131.f0;
                    }

                    ;
                    if ((*p_11))
                    {
                        (*l_618) = l_689;

                        ;
                    }
                    else
                    {
                        short l_704 = 2L;
                        (*l_683) = p_12;


                    }


                }
                else
                {
                    int l_709 = 0x090B9589L;
                    (**l_683) = (safe_mod_func_int32_t_s_s((g_115 <= (7L <= g_115)), (safe_rshift_func_uint16_t_u_s(l_709, 13))));
                    if ((safe_sub_func_int16_t_s_s(0xD1F4L, ((((&g_568 != &g_568) >= (+(!p_13.f0))) <= g_55) >= (((!(safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((g_473 >= ((((*p_12) & g_473) < (*l_678)) & p_13.f0)), 0x69F7L)) >= 0L), 1UL))) & g_600.f0) != g_115)))))
                    {
                        (*l_683) = p_12;


                    }
                    else
                    {
                        (*l_683) = l_718;
                        (*l_668) = (-1L);
                    }


                }


            }
            else
            {
                int *l_719 = &g_115;
                int **l_722 = &l_682;
                l_719 = l_680;


                p_11 = func_14(p_13.f0, (safe_mod_func_int8_t_s_s(g_127, (*l_682))));
                (*l_722) = p_11;

                ;
                (*l_718) = (-3L);
            }

            ;
            for (g_34.f2 = 0; (g_34.f2 > 33); g_34.f2 = safe_add_func_int16_t_s_s(g_34.f2, 7))
            {
                unsigned l_733 = 0UL;
                union U2 *l_734 = &g_131;
                unsigned l_770 = 4294967289UL;
            }
        }
        else
        {
            const char l_816 = 0xB2L;
            (**l_801) = p_11;

            ;
            (*g_231) = l_815;

            ;
            (*l_718) = l_816;
            (***l_801) = (((((((g_233.f0 || l_817) & l_816) >= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_34.f2, p_13.f0)), (*l_668))) && (0xDAL != p_13.f0))) < g_127) <= 65532UL) & p_13.f0) || p_13.f0);
        }

        ;
        (*l_823) = l_822;
    }



    ;
    ;
    (*l_824) = l_668;

    ;
    (**l_824) = 0xDC8C3025L;
    (*l_824) = p_12;


    return g_34.f0;


}







static int * func_14(unsigned p_15, unsigned char p_16)
{
    int *l_605 = &g_115;
    return l_605;


}







static short func_17(int * p_18)
{
    unsigned l_494 = 4294967291UL;
    int *l_499 = &g_55;
    union U2 l_510 = {0UL};
    union U2 *l_512 = &l_510;
    union U2 ** const l_511 = &l_512;
    union U1 * const *l_604 = &g_232;
    for (g_127 = (-19); (g_127 >= 35); ++g_127)
    {
        int **l_495 = &g_162;
        struct S0 *l_498 = (void*)0;
        union U2 l_508 = {0x397411F6L};
        unsigned l_509 = 0x5211B66BL;
        if (l_494)
            break;
        (*l_495) = p_18;


        for (g_34.f3 = 0; (g_34.f3 <= 16); ++g_34.f3)
        {
            (*p_18) = ((*p_18) ^ (*g_162));
        }
        (*l_495) = func_23((&g_34 != l_498), l_499, func_23(((*l_499) <= (safe_add_func_uint16_t_u_u((**l_495), (safe_mod_func_int32_t_s_s((**l_495), (safe_sub_func_uint32_t_u_u((((*p_18) > (((safe_rshift_func_uint8_t_u_u((0xE3L < ((-2L) <= g_473)), 6)) | (**l_495)) <= (-1L))) == g_131.f0), (**l_495)))))))), p_18, p_18, (*l_499), l_508), l_509, l_510);

        ;
    }
    if ((*p_18))
    {
        return (*l_499);
    }
    else
    {
        int l_513 = 0x90FE056FL;
        int *l_534 = &g_7;
        union U1 *l_538 = (void*)0;
        int *l_541 = (void*)0;
        struct S0 **l_552 = &g_33;
        struct S0 ***l_551 = &l_552;
        int l_557 = 0L;
        if ((l_513 != ((l_513 == ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((((*l_499) > (~(*p_18))) != ((1UL < l_513) > ((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_513, (safe_rshift_func_uint16_t_u_s(g_127, (1L & (-10L)))))), g_480)) < (*l_499)))), g_34.f3)) <= (*l_499)), l_513)), l_513)) <= 0xE7L)) && (*l_499))))
        {
            int *l_535 = (void*)0;
            for (g_384 = 4; (g_384 < (-7)); g_384 = safe_sub_func_uint8_t_u_u(g_384, 7))
            {
                (*l_499) = l_513;
            }
            for (g_127 = 6; (g_127 <= 40); g_127++)
            {
                if ((*p_18))
                    break;
            }
            l_535 = func_23((g_233.f0 >= (g_384 ^ ((-1L) <= l_513))), l_534, p_18, g_34.f3, (*l_512));

            ;
            for (l_494 = 0; (l_494 >= 23); l_494 = safe_add_func_int8_t_s_s(l_494, 9))
            {
                int **l_539 = &l_499;
                (*g_231) = l_538;

                ;
                (*l_539) = p_18;
            }


        }
        else
        {
            int *l_540 = &g_7;
            int **l_542 = &l_540;
            l_540 = p_18;


            (*l_542) = p_18;
            (*p_18) = (**l_542);
            return g_34.f1;
        }


        for (g_473 = (-10); (g_473 != 27); ++g_473)
        {
            unsigned l_553 = 18446744073709551611UL;
            int l_558 = 0x562943D1L;
            struct S0 ***l_569 = &l_552;
            union U1 *l_573 = &g_233;
            const char l_599 = 0x9BL;
            l_499 = p_18;
            if ((*p_18))
            {
                const short l_556 = 0x091AL;
                (*p_18) = ((safe_sub_func_uint16_t_u_u(((*p_18) > (safe_mod_func_int32_t_s_s((*l_534), (*l_499)))), g_127)) <= g_131.f0);
                l_558 = ((*l_499) <= g_34.f1);
            }
            else
            {
                int **l_559 = &g_383;
                (*l_559) = &l_558;

                ;
            }


            for (g_131.f0 = 0; (g_131.f0 <= 40); g_131.f0 = safe_add_func_int16_t_s_s(g_131.f0, 3))
            {
                int l_564 = 1L;
                int **l_581 = &g_162;
                int ***l_580 = &l_581;
                if ((g_473 | (safe_lshift_func_int16_t_s_s((l_564 != (*p_18)), (safe_lshift_func_uint8_t_u_s((g_567 != l_569), ((safe_lshift_func_int8_t_s_u(g_34.f2, 4)) < 0x2C3DL)))))))
                {
                    unsigned char l_572 = 0xD3L;
                    if ((*p_18))
                    {
                        if (l_572)
                            break;
                    }
                    else
                    {
                        l_573 = l_573;
                    }
                    for (l_572 = 0; (l_572 >= 33); l_572++)
                    {
                        return l_572;


                    }
                }
                else
                {
                    unsigned l_582 = 0xD121242EL;
                    for (g_34.f2 = 0; (g_34.f2 != 23); ++g_34.f2)
                    {
                        int l_585 = 3L;
                        (*l_511) = (void*)0;

                        ;
                        (*p_18) = (((safe_sub_func_int16_t_s_s((l_580 == (void*)0), ((((*l_499) && l_582) != g_233.f0) != (safe_rshift_func_uint8_t_u_s(l_585, (safe_lshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x2D4CL, (g_233.f0 && g_131.f0))), 0xD49E747EL)) || l_553) != l_585), 0))))))) | 0L) < l_585);
                        if ((*p_18))
                            continue;
                        if (l_582)
                            break;
                    }
                }
                if ((*p_18))
                    break;
            }
            for (g_55 = 0; (g_55 <= 14); g_55 = safe_add_func_uint8_t_u_u(g_55, 4))
            {
                unsigned l_594 = 0x1A959259L;
                int **l_601 = &l_534;
                (*l_601) = func_23(g_34.f1, p_18, &l_557, ((g_34.f2 <= ((l_594 || (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((l_599 & g_127), g_473)), 12))) > l_553)) & 0xF97A311BL), g_600);
                (*l_534) = ((**l_601) >= (safe_lshift_func_int8_t_s_s(g_384, 6)));
            }
        }

        ;
    }


    ;
    (*l_499) = ((l_604 == &g_232) >= g_131.f0);
    return (*l_499);
}







static int * func_19(int * p_20, int * p_21, int * p_22)
{
    struct S0 * const l_43 = (void*)0;
    int l_367 = 0x9D6124FCL;
    int **l_373 = &g_162;
    int ***l_372 = &l_373;
    union U2 *l_385 = &g_131;
    union U1 *l_430 = &g_233;
    struct S0 *l_449 = &g_34;
    int *l_471 = (void*)0;
    if ((safe_lshift_func_uint8_t_u_u(((*p_22) >= func_39((safe_add_func_uint16_t_u_u(0UL, (l_43 == l_43))))), l_367)))
    {
        unsigned char l_368 = 1UL;
        char l_369 = (-1L);
        int ** const *l_374 = &g_193;
        int l_405 = 1L;
        union U1 l_421 = {0x54A64B2BL};
        struct S0 **l_426 = &g_33;
        union U2 *l_465 = &g_131;
        int l_481 = 0x28FB1EA3L;
        if ((253UL ^ (0xF7L == l_368)))
        {
            unsigned short l_379 = 65535UL;
            (*p_21) = ((*p_20) >= l_369);
            for (g_7 = 0; (g_7 >= (-24)); g_7 = safe_sub_func_int32_t_s_s(g_7, 1))
            {
                int l_378 = 0L;
                if ((l_372 == l_374))
                {
                    unsigned short l_377 = 0x7B41L;
                    for (g_115 = 0; (g_115 != (-25)); g_115 = safe_sub_func_uint8_t_u_u(g_115, 7))
                    {
                        struct S0 **l_380 = &g_33;
                        l_377 = (*p_20);
                        l_379 = l_378;
                        (*l_380) = &g_34;
                        (*l_373) = (void*)0;

                        ;
                    }
                }
                else
                {
                    if (l_378)
                        break;
                }
            }
        }
        else
        {
            unsigned short l_390 = 0UL;
            union U2 l_396 = {6UL};
            union U1 **l_429 = &g_232;
            int *l_437 = &g_115;
lbl_408:
            for (l_369 = 0; (l_369 <= 4); l_369 = safe_add_func_uint32_t_u_u(l_369, 1))
            {
                unsigned l_386 = 0x81001D6CL;
                (*l_373) = g_383;

                ;
                if (g_131.f0)
                    goto lbl_408;
                p_22 = func_23((g_34.f0 >= ((l_385 == &g_131) && l_386)), p_22, p_20, g_34.f2, (*l_385));
                for (g_127 = 0; (g_127 < 57); g_127 = safe_add_func_int8_t_s_s(g_127, 1))
                {
                    int l_389 = 0L;
                    union U2 **l_393 = &l_385;
                    (*p_22) = l_389;
                    (*p_20) = l_389;
                }
            }
            for (l_396.f0 = 0; (l_396.f0 > 59); l_396.f0 = safe_add_func_uint8_t_u_u(l_396.f0, 8))
            {
                unsigned l_427 = 0x78E7BE64L;
                int *l_435 = &g_7;
                for (g_34.f3 = 0; (g_34.f3 >= 8); g_34.f3++)
                {
                    short l_419 = 0L;
                    union U1 ***l_423 = &g_231;
                    int *l_428 = &g_7;
                    int l_433 = (-10L);
                    for (g_127 = 12; (g_127 < 28); g_127 = safe_add_func_int32_t_s_s(g_127, 1))
                    {
                        union U2 **l_420 = &l_385;
                        struct S0 **l_422 = &g_33;
                        (*l_422) = func_50(((g_55 & (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_390, 4)) < g_384), (l_419 | (l_420 != &l_385))))) < (*p_21)), l_421);

                        ;
                        (*p_22) = ((void*)0 == l_423);
                        l_428 = func_23(((safe_add_func_uint8_t_u_u((&l_43 != l_426), l_396.f0)) & (g_115 == l_427)), l_428, p_22, (*l_428), (*l_385));
                    }
                    if ((*p_22))
                        break;
                    if ((((void*)0 == l_429) < (!g_7)))
                    {
                        (*p_20) = ((0x610EC722L <= ((l_430 != (void*)0) & (((safe_lshift_func_uint16_t_u_s(l_433, 7)) != g_34.f1) == 0x2C61L))) && (l_428 != (void*)0));
                        if ((*p_22))
                            break;
                        (*p_21) = (*p_22);
                        if ((*p_22))
                            break;
                    }
                    else
                    {
                        union U2 ***l_434 = &g_338;
                        int l_436 = 0x97BF920FL;
                        (*l_434) = &l_385;

                        ;
                        if ((*p_22))
                            break;
                        (*l_373) = func_23(l_421.f0, l_435, func_23(g_131.f0, p_21, p_21, (l_436 <= g_34.f3), (***l_434)), l_396.f0, (**g_338));

                        ;
                        if ((*g_162))
                            break;
                    }
                    if (l_396.f0)
                        break;
                }

                ;
                ;
                return p_22;



            }
            g_383 = l_437;

            ;
        }

        ;
        if ((*p_21))
        {
            union U1 *l_443 = &l_421;
            union U2 l_454 = {0UL};
            unsigned char l_460 = 1UL;
            int **l_463 = &g_383;
            if ((g_34.f0 == (g_131.f0 != (7UL >= ((g_55 || g_233.f0) & g_115)))))
            {
                union U1 *l_445 = &l_421;
                int l_451 = 7L;
                int *l_455 = &g_7;
                for (g_7 = 0; (g_7 > (-6)); g_7 = safe_sub_func_int16_t_s_s(g_7, 6))
                {
                    unsigned short l_452 = 0x625BL;
                    struct S0 ***l_453 = &l_426;
                    l_421.f0 = (*p_20);
                    for (g_131.f0 = 0; (g_131.f0 == 13); g_131.f0++)
                    {
                        union U1 *l_442 = &l_421;
                        int *l_446 = &l_367;
                        (**l_372) = (void*)0;

                        ;
                        (*l_446) = ((l_442 == l_443) != (safe_unary_minus_func_uint16_t_u((l_442 != l_445))));
                        if ((*p_20))
                            break;
                    }
                }
                l_455 = func_23(g_131.f0, &l_451, p_21, l_451, l_454);
            }
            else
            {
                union U1 ***l_456 = (void*)0;
                int l_457 = 0xC17839F5L;
                int **l_464 = &g_162;
                (*p_20) = (*p_20);
                g_231 = &g_232;
                if (l_457)
                {
                    union U2 **l_467 = &l_385;
                    if ((safe_sub_func_uint16_t_u_u((2UL && l_460), (g_115 ^ (safe_lshift_func_int16_t_s_u(l_457, (l_463 != l_464)))))))
                    {
                        (*l_463) = (*l_463);
                    }
                    else
                    {
                        union U2 **l_466 = &l_385;
                        (*p_22) = (*p_22);
                        (*l_466) = l_465;
                    }
                    (*l_467) = l_465;
                }
                else
                {
                    int *l_470 = &g_115;
                    union U2 l_472 = {0x9F03E3C6L};
                    for (g_127 = (-9); (g_127 == 46); g_127 = safe_add_func_uint16_t_u_u(g_127, 5))
                    {
                        int l_475 = 0x3812432FL;
                        (*g_231) = l_430;

                        ;
                        (*l_463) = func_23(g_127, l_470, l_471, g_131.f0, l_472);

                        ;
                        (*l_426) = func_44(l_449, g_473, (safe_unary_minus_func_int32_t_s(7L)), (*l_426), l_475);
                        (*l_470) = (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((l_475 || (**l_463)) > g_480), g_233.f0)), (*g_383)));
                    }

                    ;
                    (*l_373) = p_22;

                    ;
                    (*p_21) = 0x90245AD9L;
                    (*p_21) = (**l_464);
                }

                ;
            }

            ;
            (**l_372) = (void*)0;

            ;
            (*p_21) = ((g_127 >= l_460) || (g_384 ^ ((0xF8L > (((l_421.f0 != 0L) ^ (0x63732188L <= l_421.f0)) < l_481)) ^ (*p_20))));
            (*p_22) = (-1L);
        }
        else
        {
            for (g_480 = (-3); (g_480 < 36); g_480 = safe_add_func_uint32_t_u_u(g_480, 3))
            {
                unsigned short l_486 = 0x53C4L;
                union U2 *l_487 = &g_131;
                union U2 **l_488 = (void*)0;
                union U2 **l_489 = &l_385;
                (*p_21) = (safe_sub_func_uint8_t_u_u((l_486 >= (g_34.f0 & l_486)), l_486));
                (*l_489) = l_487;
                (*p_21) = (*p_20);
                (*l_489) = l_465;
            }
            (**l_372) = p_20;

            ;
        }

        ;
        ;
        for (g_34.f2 = (-27); (g_34.f2 <= 28); g_34.f2 = safe_add_func_int16_t_s_s(g_34.f2, 7))
        {
            (*p_21) = (*p_21);
        }
        (*l_373) = p_20;

        ;
    }
    else
    {
        (*g_231) = l_430;

        ;
    }



    ;
    return p_21;


}







static int * func_23(int p_24, int * p_25, int * p_26, unsigned p_27, union U2 p_28)
{
    struct S0 **l_35 = &g_33;
    int *l_36 = &g_7;
    (*l_35) = g_33;
    return l_36;


}







static int func_39(unsigned short p_40)
{
    union U1 l_53 = {0x4CA72CB5L};
    struct S0 *l_65 = &g_34;
    struct S0 **l_69 = (void*)0;
    struct S0 * const l_72 = (void*)0;
    int *l_80 = (void*)0;
    union U2 l_90 = {0xD53B18A5L};
    int l_189 = 0x50529A07L;
    char l_207 = (-1L);
    union U2 l_254 = {4294967289UL};
    unsigned l_290 = 4294967295UL;
    union U2 *l_337 = (void*)0;
    union U2 **l_336 = &l_337;
    char l_349 = 0x3AL;
lbl_79:
    g_33 = func_44(func_50(g_34.f2, l_53), l_53.f0, ((g_7 ^ (l_53.f0 ^ (g_34.f3 ^ ((safe_mod_func_int16_t_s_s((g_34.f1 && (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(p_40, 0xB818E961L)) || l_53.f0), 0xE6L))), p_40)) == g_34.f3)))) ^ g_34.f2), l_65, p_40);
    if ((g_7 | p_40))
    {
        int *l_71 = &g_7;
        int **l_70 = &l_71;
        struct S0 *l_73 = &g_34;
        int *l_74 = (void*)0;
        int *l_75 = &g_55;
        (*l_70) = &g_7;
        (*l_75) = (l_72 == l_73);
        (*l_75) = (!((&l_65 == &l_65) != g_7));
        l_53.f0 = p_40;
    }
    else
    {
        int *l_78 = &g_55;
        int **l_91 = &l_78;
        (*l_78) = (safe_lshift_func_int8_t_s_s(p_40, 4));
        if (g_34.f2)
            goto lbl_79;
        (*l_91) = func_23(p_40, l_80, l_80, ((safe_lshift_func_int16_t_s_s(p_40, (safe_unary_minus_func_uint8_t_u(((g_34.f3 <= (safe_add_func_uint8_t_u_u(l_53.f0, (p_40 > p_40)))) >= (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*l_78), p_40)), g_34.f1))))))) < g_7), l_90);

        ;
    }
    if ((g_34.f1 | g_55))
    {
        int *l_94 = &g_55;
        (*l_94) = (safe_sub_func_uint16_t_u_u(0x36A5L, p_40));
        (*l_94) = p_40;
    }
    else
    {
        unsigned l_95 = 18446744073709551610UL;
        int *l_96 = &g_55;
        (*l_96) = (g_55 >= (l_95 ^ (((1UL > (7UL ^ p_40)) != p_40) <= 0x38E6A276L)));
    }
    if (l_53.f0)
    {
        unsigned char l_102 = 0xEAL;
        struct S0 **l_118 = &g_33;
        for (g_55 = 0; (g_55 <= (-7)); g_55 = safe_sub_func_uint32_t_u_u(g_55, 5))
        {
            int l_101 = 0xC9AC803BL;
            union U2 l_132 = {1UL};
            int *l_133 = &g_115;
            l_102 = ((safe_lshift_func_int16_t_s_s(0x8BEBL, 4)) <= l_101);
            for (l_90.f0 = (-3); (l_90.f0 <= 6); l_90.f0++)
            {
                struct S0 **l_119 = &l_65;
                int l_122 = 0x62231194L;
                int *l_134 = &g_115;
                for (p_40 = 0; (p_40 >= 23); p_40++)
                {
                    for (g_34.f3 = 27; (g_34.f3 != (-28)); g_34.f3 = safe_sub_func_uint16_t_u_u(g_34.f3, 6))
                    {
                        unsigned l_128 = 6UL;
                        g_115 = ((safe_add_func_int8_t_s_s((+(((safe_add_func_uint32_t_u_u((&g_7 == &g_55), (4294967295UL == (safe_add_func_uint16_t_u_u(p_40, (g_115 >= ((0x06L != (+(p_40 ^ ((0x81L ^ ((safe_rshift_func_int16_t_s_s(3L, g_55)) > 0UL)) > l_102)))) >= 0UL))))))) < 0x5CECF825L) == 0xE256L)), l_101)) < g_7);
                        l_119 = l_118;

                        ;
                        g_115 = (2UL & (safe_sub_func_int16_t_s_s(((l_122 != ((safe_lshift_func_uint16_t_u_u(p_40, 5)) & p_40)) < g_34.f3), ((((safe_mod_func_int8_t_s_s(l_101, ((0x1D701D6BL <= ((((255UL < l_101) && l_102) | (-1L)) | g_127)) | 0xEA76L))) && l_122) < g_127) | l_128))));
                    }
                    l_80 = &g_55;

                    ;
                    (*l_119) = (*l_119);
                }

                ;
                l_133 = func_23(g_34.f0, &g_55, func_23(g_34.f0, func_23(l_101, &g_115, l_80, ((safe_rshift_func_int16_t_s_u(1L, 0)) > 0x58L), g_131), &g_7, l_101, l_132), l_122, l_90);

                ;
                (*l_134) = p_40;
            }

            ;
            g_115 = ((*l_133) >= g_34.f1);
        }

        ;
    }
    else
    {
        unsigned short l_139 = 1UL;
        int *l_159 = &g_7;
        const union U1 *l_177 = (void*)0;
        short l_181 = 0x08F0L;
        int **l_188 = &g_162;
        int l_198 = (-1L);
        union U2 l_199 = {0x64FF402FL};
        char l_255 = 8L;
        int *l_276 = &g_115;
        union U2 **l_318 = (void*)0;
        const short l_335 = (-1L);
        struct S0 *l_358 = (void*)0;
        union U1 ***l_364 = &g_231;
lbl_187:
        if (p_40)
        {
            int * const l_140 = &g_55;
            union U2 l_161 = {1UL};
            int *l_163 = &g_55;
            const union U1 **l_184 = &l_177;
            const union U1 ***l_183 = &l_184;
            int **l_185 = &l_159;
            if ((safe_add_func_uint8_t_u_u(252UL, ((((safe_add_func_int16_t_s_s((&l_65 == (void*)0), l_139)) & (l_140 != l_140)) || (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(g_34.f2, p_40)), 7))) > 0x8CL))))
            {
                unsigned short l_147 = 1UL;
                int l_154 = 0x397DF8BEL;
                if (((safe_add_func_int8_t_s_s(p_40, l_147)) < (safe_lshift_func_int8_t_s_s(l_147, 3))))
                {
                    int *l_164 = &g_7;
                    for (g_55 = 0; (g_55 != 6); g_55++)
                    {
                        struct S0 **l_155 = (void*)0;
                        struct S0 **l_156 = &l_65;
                        l_154 = ((safe_add_func_uint8_t_u_u(0UL, p_40)) | 1L);
                        (*l_156) = &g_34;
                    }
                    for (p_40 = 15; (p_40 > 28); p_40++)
                    {
                        int **l_160 = &l_159;
                        (*l_160) = l_159;
                    }
                    g_162 = func_23(p_40, l_80, l_159, ((!g_115) < (&l_80 != &l_80)), l_161);

                    ;
                    if (((void*)0 != l_163))
                    {
                        int **l_165 = (void*)0;
                        int **l_166 = &l_164;
                        l_80 = &g_115;

                        ;
                        (*l_166) = l_164;
                    }
                    else
                    {
                        return (*g_162);


                    }

                    ;
                }
                else
                {
                    (*l_140) = (+(safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(g_34.f1, p_40)), 4)));
                    (*l_140) = p_40;
                }
                if (g_131.f0)
                    goto lbl_187;
            }
            else
            {
                const union U1 **l_178 = &l_177;
                unsigned short l_182 = 0xE8D1L;
                for (l_161.f0 = (-15); (l_161.f0 != 54); l_161.f0 = safe_add_func_uint8_t_u_u(l_161.f0, 8))
                {
                    int * const *l_176 = &g_162;
                    int * const **l_175 = &l_176;
                    (*l_140) = (*l_159);
                    for (g_115 = 0; (g_115 < 11); ++g_115)
                    {
                        if (p_40)
                            break;
                    }
                    (*l_163) = ((void*)0 != &g_34);
                    (*l_175) = &l_140;

                    ;
                }
                (*l_178) = l_177;
                (*l_163) = ((g_55 >= g_34.f0) < (safe_lshift_func_int16_t_s_u(0x2160L, 6)));
                (*l_163) = ((*l_163) < (g_115 >= ((*l_140) && ((((((*l_140) >= (0x8CL || g_115)) || (p_40 >= g_34.f2)) > l_181) < 1L) ^ l_182))));
            }
            (*l_183) = &l_177;
            (*l_185) = l_80;

            ;
            (*l_140) = p_40;
        }
        else
        {
            int **l_186 = &g_162;
            g_162 = l_80;

            ;
            (*l_186) = l_80;
        }


        ;
        (*l_188) = (void*)0;

        ;
        if (((void*)0 == &g_115))
        {
            int ***l_194 = &l_188;
            union U2 l_200 = {0x2E0D2957L};
            int *l_226 = &g_55;
            union U1 *l_257 = &l_53;
            union U2 *l_261 = &l_200;
            int l_275 = (-6L);
            if ((p_40 == l_189))
            {
                int l_197 = 0L;
                int ***l_234 = &l_188;
                union U2 l_236 = {0x6E7149C6L};
                int l_245 = (-9L);
                unsigned short l_251 = 0x3A09L;
lbl_201:
                (**l_194) = func_23(g_34.f0, func_23((((-5L) | (safe_sub_func_int16_t_s_s(((0x3DL && ((g_192 != l_194) || (((safe_mod_func_uint32_t_u_u((l_197 < p_40), 0xC6485764L)) <= g_34.f3) | g_34.f1))) > l_197), 0xE85FL))) ^ l_198), (**l_194), &l_197, g_34.f3, l_199), l_80, g_34.f3, l_200);

                ;
                if ((4294967295UL == 0xF1CB64C1L))
                {
                    if (g_34.f0)
                        goto lbl_201;
                    return l_197;


                }
                else
                {
                    unsigned char l_204 = 255UL;
                    if ((safe_lshift_func_int8_t_s_s((((l_197 < (l_204 || 65535UL)) >= (safe_mod_func_int8_t_s_s(g_7, p_40))) ^ (g_55 >= l_207)), 0)))
                    {
                        return (***l_194);


                    }
                    else
                    {
                        union U2 *l_209 = &l_200;
                        union U2 **l_208 = &l_209;
                        (**l_194) = &l_197;

                        ;
                        (***l_194) = l_197;
                        (*l_208) = (void*)0;

                        ;
                    }

                    ;
                    if ((**l_188))
                    {
                        int l_210 = (-3L);
                        (**l_188) = l_210;
                    }
                    else
                    {
                        const unsigned l_219 = 4294967289UL;
                        (**l_194) = func_23(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((***l_194), (!(safe_mod_func_int8_t_s_s(g_55, l_219))))) | (safe_add_func_uint8_t_u_u((2UL | p_40), p_40))), 0)), 0x69846BA3L)) >= (safe_mod_func_uint8_t_u_u(((0xBDL >= (safe_sub_func_uint32_t_u_u(g_34.f3, p_40))) < 7L), l_219))), l_226, (*l_188), g_131.f0, g_131);

                        ;
                    }

                    ;
                }

                ;
                l_197 = p_40;
                if (p_40)
                {
                    union U2 l_235 = {0xE8D4344CL};
                    (*l_188) = func_23((safe_rshift_func_int8_t_s_u(g_7, (safe_lshift_func_int16_t_s_u(((-1L) && p_40), (((g_231 != (void*)0) ^ (l_234 == (void*)0)) && 255UL))))), func_23(p_40, &g_7, l_80, g_34.f0, l_235), l_80, g_233.f0, l_236);

                    ;
                    (*l_226) = (safe_mod_func_uint16_t_u_u((g_7 > ((((**l_188) || ((*l_226) >= 0x66F9L)) ^ ((safe_add_func_int8_t_s_s(p_40, p_40)) > (((*l_188) != (*l_188)) > ((safe_sub_func_int16_t_s_s(p_40, 0xFAEFL)) | g_131.f0)))) || g_55)), (***l_234)));
                    for (l_189 = 0; (l_189 >= (-18)); l_189 = safe_sub_func_uint16_t_u_u(l_189, 9))
                    {
                        return l_245;


                    }
                }
                else
                {
                    int *l_253 = (void*)0;
                    union U2 *l_259 = &g_131;
                    union U2 **l_258 = &l_259;
                    for (l_236.f0 = 21; (l_236.f0 >= 52); ++l_236.f0)
                    {
                        int l_250 = 6L;
                        (*l_226) = (p_40 ^ (((safe_mod_func_int8_t_s_s(0x69L, 1UL)) | p_40) | (~0UL)));
                        l_250 = (*g_162);
                    }
                    if (l_251)
                    {
                        unsigned l_252 = 0xEEED96AFL;
                        l_252 = (&g_231 != &g_231);
                        (*l_188) = l_253;

                        ;
                        if (g_115)
                            goto lbl_256;
                        (*l_188) = func_23(p_40, l_80, (*l_188), p_40, l_254);

                        ;
                    }
                    else
                    {
lbl_256:
                        (*l_188) = func_23(p_40, func_23(p_40, l_80, (*l_188), (l_255 & g_55), g_131), (**l_194), g_34.f3, l_199);

                        ;
                        (*g_231) = l_257;

                        ;
                    }

                    ;
                    (*l_258) = (void*)0;

                    ;
                    (*l_226) = 0xA208960FL;
                }

                ;
            }
            else
            {
                union U2 *l_260 = (void*)0;
                l_261 = l_260;

                ;
            }

            ;
            ;
            (*l_226) = p_40;
            for (p_40 = (-9); (p_40 > 9); ++p_40)
            {
                int *l_264 = &g_115;
                (*l_226) = (-1L);
                if (p_40)
                {
                    unsigned short l_268 = 0x88F7L;
                    (**l_194) = (*l_188);
                    if (p_40)
                    {
                        l_264 = (**l_194);

                        ;
                        (*l_188) = l_264;
                        if (g_34.f2)
                            continue;
                    }
                    else
                    {
                        union U2 **l_265 = &l_261;
                        const int *l_266 = &g_55;
                        const int **l_267 = &l_266;
                        (*l_265) = &l_90;

                        ;
                        (*l_267) = l_266;
                        if (l_268)
                            break;
                    }

                    ;
                }
                else
                {
                    return p_40;


                }

                ;
            }

            ;
            for (l_255 = 0; (l_255 <= (-3)); l_255--)
            {
                int *l_277 = &g_115;
                (*l_188) = (*l_188);
                l_277 = func_23(g_233.f0, (**l_194), func_23((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(1L, (l_275 == g_34.f0))) > g_34.f1), 3)), l_276, (**l_194), g_7, g_131), g_131.f0, g_131);

                ;
                for (l_275 = (-1); (l_275 < (-18)); l_275--)
                {
                    int *l_283 = &l_198;
                    (**l_194) = l_277;

                    ;
                    for (g_127 = 29; (g_127 > 35); g_127 = safe_add_func_uint32_t_u_u(g_127, 7))
                    {
                        struct S0 **l_282 = &g_33;
                        (*l_276) = p_40;
                        (*l_282) = &g_34;
                        if (p_40)
                            break;
                    }
                    (**l_194) = l_283;

                    ;
                    if (p_40)
                    {
                        unsigned l_284 = 0xF1FC1168L;
                        l_284 = (*g_162);
                        (*l_188) = l_80;

                        ;
                    }
                    else
                    {
                        short l_285 = 0L;
                        (**l_188) = ((!p_40) > g_34.f0);
                        l_285 = p_40;
                        if ((*g_162))
                            continue;
                        if (g_34.f1)
                            goto lbl_79;

                    }

                    ;
                }
            }

            ;
        }
        else
        {
            const short l_292 = (-1L);
            int l_299 = 0x21089FC9L;
            union U1 *l_306 = &g_233;
            union U2 l_329 = {0x111132A1L};
            const short l_360 = 0xFA4DL;
            if (p_40)
            {
                int *l_286 = &l_198;
                int ***l_289 = (void*)0;
                l_286 = l_80;

                ;
                l_290 = (g_127 & (((g_34.f1 != g_131.f0) | (safe_rshift_func_int8_t_s_u((l_289 != &l_188), g_7))) | p_40));
                if ((safe_unary_minus_func_int8_t_s(((l_292 > (g_34.f3 > 0x01L)) > (safe_rshift_func_int8_t_s_u((((g_34.f2 < l_292) & (((safe_add_func_uint16_t_u_u((g_115 > ((safe_mod_func_int32_t_s_s(1L, (4294967295UL ^ (g_34.f3 != (*l_276))))) & (-1L))), (*l_276))) && p_40) | p_40)) < 0x798F2DC3L), 2))))))
                {
                    l_299 = (g_34.f0 > l_292);
                }
                else
                {
                    for (l_199.f0 = 0; (l_199.f0 <= 16); l_199.f0 = safe_add_func_uint32_t_u_u(l_199.f0, 1))
                    {
                        (*l_276) = (p_40 ^ l_299);
                        (*l_276) = (safe_add_func_uint32_t_u_u(g_34.f3, ((safe_sub_func_uint32_t_u_u(l_292, p_40)) > p_40)));
                    }
                }
            }
            else
            {
                unsigned l_307 = 0xFACFC060L;
                (*g_231) = l_306;

                ;
                l_307 = p_40;
                (*l_188) = (*l_188);
            }
            if ((((safe_mod_func_uint8_t_u_u((l_292 ^ (*l_276)), ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_131.f0, (((safe_add_func_uint16_t_u_u(g_115, ((*g_231) == (void*)0))) || p_40) && (((safe_sub_func_uint8_t_u_u(((0x2C8CL & (l_318 == (void*)0)) & p_40), p_40)) || g_127) <= p_40)))), g_34.f2)) | l_292))) < p_40) || 4294967290UL))
            {
                union U1 ***l_319 = &g_231;
                (*l_319) = &g_232;
                (*l_188) = l_80;

                ;
            }
            else
            {
                short l_322 = 0xB343L;
                int *l_323 = &g_115;
                union U2 l_328 = {4294967291UL};
                struct S0 **l_361 = (void*)0;
                (*l_188) = func_23((safe_mod_func_int16_t_s_s(g_131.f0, l_322)), &l_299, func_23(g_34.f0, &l_299, func_23((g_127 <= p_40), l_323, func_23((safe_add_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(0x3E631B1CL, (*l_323))) >= g_55) < 0xE04E4066L), (*l_323))), (*l_188), &l_299, p_40, g_131), p_40, l_90), p_40, l_328), p_40, l_329);

                ;
                for (l_207 = 24; (l_207 != (-6)); --l_207)
                {
                    unsigned l_339 = 0UL;
                    int ***l_355 = &l_188;
                    if ((safe_unary_minus_func_uint16_t_u(((void*)0 == &g_193))))
                    {
                        (*l_276) = p_40;
                    }
                    else
                    {
                        (*l_276) = (safe_rshift_func_uint8_t_u_s(g_233.f0, 7));
                        if (p_40)
                            continue;
                        if (p_40)
                            break;
                    }
                    if (l_335)
                    {
                        union U2 l_340 = {0x2BFEAC4EL};
                        (*l_188) = l_323;

                        ;
                        (*g_162) = (l_336 != g_338);
                        if ((*l_323))
                            break;
                        (*l_188) = func_23(g_34.f1, &l_299, l_80, ((g_115 < ((*l_276) > l_339)) & (~0x2AC4L)), l_340);

                        ;
                    }
                    else
                    {
                        return p_40;


                    }

                    ;
                    for (g_34.f3 = 26; (g_34.f3 >= (-15)); g_34.f3 = safe_sub_func_int32_t_s_s(g_34.f3, 6))
                    {
                        int l_350 = 1L;
                        (*l_188) = (void*)0;

                        ;
                        (*l_276) = ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x9C985195L, (safe_add_func_uint16_t_u_u(p_40, l_349)))), ((void*)0 == &g_33))) < l_207) < (l_350 <= (65527UL ^ (((((void*)0 != (*g_192)) == g_115) > 0xADL) != 0x2C0C4FCAL)))) >= g_127);
                    }

                    ;
                    if ((g_115 | ((l_339 != ((safe_add_func_int8_t_s_s(((g_34.f2 >= p_40) >= (l_355 != l_355)), (safe_rshift_func_int8_t_s_u((p_40 ^ 4294967287UL), g_34.f3)))) == l_292)) < p_40)))
                    {
                        struct S0 **l_359 = &l_358;
                        (*l_188) = l_80;

                        ;
                        (*l_359) = l_358;
                        (**l_355) = &g_7;

                        ;
                    }
                    else
                    {
                        (*l_323) = (!(((l_360 | ((0xABA51FE3L ^ (g_34.f0 ^ (g_131.f0 == ((void*)0 != &g_34)))) != g_115)) <= (&g_33 != l_361)) | g_7));
                    }
                }

                ;
            }

            ;
        }

        ;
        (*l_188) = func_23(((~((safe_add_func_uint8_t_u_u(p_40, ((void*)0 == l_364))) | p_40)) ^ (safe_rshift_func_int16_t_s_u(g_34.f3, 12))), l_80, (*l_188), (&g_231 == l_364), g_131);

        ;
    }


    ;
    return l_90.f0;


}







static struct S0 * func_44(struct S0 * p_45, unsigned char p_46, unsigned char p_47, struct S0 * p_48, int p_49)
{
    char l_66 = 1L;
    int *l_67 = &g_55;
    struct S0 *l_68 = &g_34;
    l_66 = 0xAD2DA0D3L;
    g_34.f1 = (0xF3D0L | ((p_47 == (g_34.f3 & p_47)) <= 65527UL));
    (*l_67) = 0L;
    return l_68;


}







static struct S0 * func_50(unsigned p_51, union U1 p_52)
{
    int *l_54 = &g_55;
    int *l_56 = &g_55;
    int **l_57 = &l_56;
    struct S0 *l_58 = (void*)0;
    l_54 = &g_7;

    ;
    (*l_56) = g_34.f2;
    (*l_57) = (void*)0;

    ;
    return l_58;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_34.f3, "g_34.f3", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
