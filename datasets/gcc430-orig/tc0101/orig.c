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
   int f0;
   unsigned char f1;
};


static unsigned g_4 = 1UL;
static int *g_7 = (void*)0;
static int g_20 = 0L;
static short g_60 = 0x1EC8L;
static unsigned char g_73 = 0UL;
static struct S0 g_87 = {-8L,0x6BL};
static unsigned short g_108 = 7UL;
static int g_115 = 0x9E1DE551L;
static unsigned g_148 = 1UL;
static int g_172 = 1L;
static struct S0 *g_279 = &g_87;
static struct S0 **g_278 = &g_279;
static unsigned short g_371 = 65535UL;
static short g_400 = 7L;
static int g_507 = (-1L);



static int func_1(void);
static int func_2(char p_3);
static int * func_5(int * p_6);
static int * func_17(unsigned p_18);
static unsigned short func_21(int * p_22, int * p_23);
static char func_24(int * p_25, int * p_26, int * p_27, int * p_28, unsigned short p_29);
static unsigned func_30(unsigned char p_31, int * p_32, int p_33, int * p_34);
static short func_37(unsigned char p_38, short p_39);
static char func_49(int * p_50);
static int * func_53(int * p_54, int * p_55, int * p_56, short p_57, unsigned short p_58);
static int func_1(void)
{
    int *l_505 = (void*)0;
    int *l_506 = &g_507;
    int **l_508 = &l_506;
    (*l_506) ^= (!func_2(g_4));
    (*l_508) = &g_507;
    for (g_108 = 0; (g_108 == 43); g_108 = safe_add_func_int32_t_s_s(g_108, 4))
    {
        char l_513 = 0L;
        (*l_506) |= (safe_add_func_uint32_t_u_u(g_148, l_513));
        if (l_513)
            continue;
    }
    return (*l_506);
}







static int func_2(char p_3)
{
    int **l_504 = &g_7;
    (*l_504) = func_5(g_7);
    return p_3;
}







static int * func_5(int * p_6)
{
    char l_16 = 1L;
    int *l_44 = &g_20;
    unsigned l_117 = 0UL;
    int *l_413 = &g_172;
    unsigned short l_414 = 0xCD58L;
    unsigned short l_436 = 0xBD0BL;
    struct S0 l_437 = {-3L,0x2FL};
    int l_454 = 0x8AA62C5CL;
    (*l_44) = (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(((((safe_div_func_int32_t_s_s(l_16, l_16)) , func_17(g_4)) != ((func_21(func_17((((func_24(func_17(func_30(((((safe_add_func_int16_t_s_s(0x8886L, func_37(l_16, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((~(((void*)0 != l_44) > ((*l_44) != g_20))), g_20)), 10))))) ^ 0UL) && (-1L)) && g_87.f0), l_44, g_73, p_6)), p_6, l_44, p_6, l_117) , (void*)0) == &g_172) && 0xB2067BBAL)), &g_172) , (-3L)) , l_44)) < l_16), 4294967293UL)), 0x70L)), g_172));

    ;
    (*l_413) ^= func_30(g_400, func_17(g_4), (*l_44), l_44);

    ;
    l_414 = 0x12113F23L;
    if ((((((safe_sub_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(g_400, (0xF9E83C6FL | (*l_413)))), func_21(l_44, l_44))) , (safe_sub_func_uint32_t_u_u((((*l_413) <= (safe_add_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((*l_44) && g_148))), (*l_413)))) == (*g_7)), g_371))) != (*l_413)) && 0x3DD30B71L) && g_172), g_371)) < 0x03L) && g_172) >= (*l_413)) , (*g_7)))
    {
        unsigned l_428 = 0x434D2C63L;
        struct S0 l_440 = {-3L,0xE4L};
        (*l_44) |= ((safe_rshift_func_int8_t_s_s((l_428 >= l_428), 0)) > (((safe_unary_minus_func_uint8_t_u(((((safe_rshift_func_uint16_t_u_u((+65535UL), 15)) & l_428) , (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((+(l_428 & ((*l_413) > 0x68164DC9L))), g_87.f0)), 3))) || 0xB934L))) & (*g_7)) & 0x3BL));
        (**g_278) = l_437;
        for (l_414 = 4; (l_414 != 52); ++l_414)
        {
            int **l_441 = &l_44;
            (*g_279) = l_437;
            l_440 = l_437;
            (*l_441) = p_6;

            ;
            for (l_117 = 19; (l_117 >= 53); l_117++)
            {
                l_440.f0 = (*g_7);
            }
        }

        ;
    }
    else
    {
        int l_455 = (-1L);
        int l_458 = 0xB8970C0AL;
        short l_472 = 0xD5FAL;
        int l_484 = 0x0192E4D0L;
        int *l_487 = (void*)0;
        l_458 ^= ((safe_div_func_uint8_t_u_u(g_4, (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_37((func_37((((safe_mod_func_int32_t_s_s((&p_6 == ((safe_lshift_func_uint8_t_u_s(l_454, 5)) , &g_7)), (l_455 | (((l_455 , (*g_278)) != &l_437) | (((safe_add_func_int8_t_s_s((((*l_413) <= (*l_44)) >= l_455), 0UL)) >= 0x4BC42C78L) < (*g_7)))))) != (*l_44)) , l_455), g_87.f1) ^ 255UL), l_455), 65535UL)), l_455)))) || g_20);

        ;
        (*l_413) |= g_20;
        if ((g_148 || (safe_div_func_int16_t_s_s(g_400, ((*l_44) ^ 0x6AL)))))
        {
            struct S0 l_461 = {0x3A1357D6L,0xC1L};
            (*l_413) ^= l_461.f1;
        }
        else
        {
            char l_475 = 0x27L;
            l_458 &= (safe_rshift_func_uint16_t_u_s(g_73, l_475));
            (*l_44) = ((safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s((g_172 > g_20), (((safe_mod_func_uint16_t_u_u(0UL, l_475)) != (safe_add_func_int16_t_s_s((l_475 , l_475), g_108))) & 65529UL))) | l_484), 0x3F51C234L)) != g_400);
            for (g_371 = 24; (g_371 != 29); g_371 = safe_add_func_int32_t_s_s(g_371, 9))
            {
                unsigned l_498 = 4294967293UL;
                (*l_413) = func_21(func_17(g_60), l_487);

                ;
                if ((*g_7))
                {
                    int l_501 = 1L;
                    (*l_44) ^= (((safe_div_func_int8_t_s_s(g_60, (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_475, 11)), (safe_add_func_int8_t_s_s(0xF8L, (((*l_413) < ((safe_add_func_int8_t_s_s((l_498 == (l_475 , (g_400 , (safe_add_func_uint32_t_u_u(4294967289UL, (0UL != g_115)))))), l_498)) <= l_475)) | l_501))))))) , g_148) <= 0x0DD2L);
                    return p_6;


                }
                else
                {
                    (*l_413) |= (safe_lshift_func_int8_t_s_s(g_87.f1, 2));
                }
            }

            ;
        }

        ;
    }

    ;
    ;
    return p_6;


}







static int * func_17(unsigned p_18)
{
    int *l_19 = &g_20;
    return l_19;


}







static unsigned short func_21(int * p_22, int * p_23)
{
    unsigned l_411 = 0UL;
    int **l_412 = &g_7;
    (*p_22) &= l_411;
    (*l_412) = &g_115;

    ;
    return g_20;
}







static char func_24(int * p_25, int * p_26, int * p_27, int * p_28, unsigned short p_29)
{
    unsigned l_124 = 18446744073709551612UL;
    unsigned l_125 = 4294967290UL;
    int l_130 = 0x8F8553EDL;
    int *l_131 = (void*)0;
    int l_132 = 0xE95B6698L;
    unsigned char l_143 = 9UL;
    struct S0 l_176 = {0xCA5F8AAAL,0x06L};
    short l_191 = 5L;
    int *l_231 = (void*)0;
    struct S0 *l_287 = &g_87;
    unsigned char l_292 = 8UL;
    struct S0 ***l_316 = &g_278;
    unsigned short l_386 = 65535UL;
    int **l_390 = &l_131;
    int ***l_389 = &l_390;
    int *l_409 = &l_130;
    l_132 |= ((4294967287UL && 4294967286UL) && (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(l_124, l_125)), func_30(l_125, &g_20, (((safe_div_func_uint16_t_u_u((g_87.f0 <= (((g_87.f0 <= 0x8B0AA5F9L) ^ 1L) > l_130)), 0x01A7L)) ^ 0xDA98L) , l_124), &g_115))), g_108)));
    if ((safe_add_func_uint8_t_u_u(((((((safe_sub_func_int8_t_s_s((p_29 , (g_60 , (safe_add_func_uint16_t_u_u((((((*p_27) <= (!p_29)) | 0xAA38L) > (safe_add_func_int16_t_s_s(g_87.f1, g_87.f0))) , ((safe_rshift_func_uint8_t_u_u((g_73 ^ 65529UL), g_73)) < g_115)), l_143)))), 0x77L)) > 0x61EAL) || g_87.f0) & (*p_27)) != 1L) != g_115), p_29)))
    {
        int *l_144 = &g_115;
        int **l_145 = &g_7;
        unsigned short l_160 = 0x4849L;
        struct S0 l_161 = {-1L,0x56L};
        unsigned l_242 = 0x763AE82EL;
        unsigned l_249 = 4UL;
        char l_305 = 1L;
        (*l_145) = func_17(((void*)0 == l_144));

        ;
        if ((1L < (~(safe_lshift_func_uint16_t_u_s(0xC4FFL, 0)))))
        {
            unsigned char l_149 = 0xC2L;
            int l_173 = 1L;
            if (((func_30(((func_37((g_148 , (p_29 <= l_149)), ((*l_144) >= ((safe_rshift_func_int8_t_s_u(((&p_28 == (void*)0) ^ ((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(l_149, ((g_108 , (+(((&g_7 != &l_144) <= g_73) , g_87.f1))) > p_29))) , l_149) > p_29), 0x3ABDF95BL)), p_29)) <= g_4)), g_148)) > p_29))) <= g_73) != 0x3678L), &g_115, l_160, p_27) < g_108) | 65535UL))
            {
                struct S0 *l_162 = &g_87;
                (*l_162) = l_161;
            }
            else
            {
                unsigned short l_167 = 0x1229L;
                l_173 &= ((func_49(&g_115) , (((((p_29 != ((((*g_7) <= (safe_sub_func_uint16_t_u_u(p_29, 0xA232L))) , ((safe_div_func_int16_t_s_s((l_167 > (((~((((safe_div_func_int32_t_s_s(7L, (safe_lshift_func_uint16_t_u_s(g_108, 11)))) || (*p_27)) , p_29) || 0x5CL)) , (-7L)) || (*l_144))), p_29)) , 0xCD30398AL)) == g_172)) != l_167) <= l_149) > 0x5AE5L) , p_26)) == (void*)0);

                ;
                for (g_87.f0 = 0; (g_87.f0 <= (-8)); g_87.f0 = safe_sub_func_uint8_t_u_u(g_87.f0, 3))
                {
                    (*l_145) = p_28;

                    ;
                    (*l_144) ^= l_149;
                }

                ;
            }

            ;
            return g_87.f1;
        }
        else
        {
            struct S0 *l_177 = &l_176;
            int l_207 = 0xDE66CF56L;
            (*l_177) = l_176;
            for (l_161.f0 = (-28); (l_161.f0 > (-26)); l_161.f0++)
            {
                unsigned l_180 = 2UL;
                int *l_194 = &g_20;
                unsigned l_220 = 0x7CBF35DCL;
                (*p_27) = func_37(g_20, l_180);

                ;
                for (l_180 = 0; (l_180 >= 58); l_180 = safe_add_func_uint32_t_u_u(l_180, 8))
                {
                    unsigned short l_208 = 0x680CL;
                    (*p_25) ^= (~(*l_144));
                    if ((safe_div_func_uint16_t_u_u(((g_148 || (l_176 , ((void*)0 == &g_87))) >= ((g_148 || l_180) < ((safe_rshift_func_int8_t_s_u(p_29, g_115)) > 0x1AL))), g_115)))
                    {
                        (*p_27) |= l_191;
                        (*l_145) = func_17(((p_29 == g_115) , (safe_lshift_func_uint8_t_u_s(247UL, 4))));

                        ;
                    }
                    else
                    {
                        (*p_25) = ((4L & ((void*)0 != &g_7)) != ((((((((func_49(l_194) <= (safe_mod_func_int16_t_s_s(l_176.f0, (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((g_87.f0 < (safe_rshift_func_int8_t_s_s(0xB5L, (safe_div_func_uint16_t_u_u(((!(safe_add_func_int8_t_s_s(0xC6L, l_207))) > g_60), p_29))))) != 0x2EA5L), 1UL)), 0x8B74L))))) , (void*)0) != &l_176) , l_207) != g_148) || l_208) == g_60) , g_172));

                        ;
                        (*l_145) = (void*)0;

                        ;
                        if (g_115)
                            break;
                        return g_148;
                    }

                    ;
                }

                ;
                if (((((safe_mod_func_int8_t_s_s((!((safe_sub_func_int8_t_s_s(p_29, g_172)) & g_60)), 0x52L)) < ((*l_177) , (safe_sub_func_uint32_t_u_u(p_29, ((0x550BL < l_207) && (g_115 >= 1UL)))))) || (*l_194)) , (*l_194)))
                {
                    int ***l_217 = &l_145;
                    (*l_217) = &g_7;
                    (*l_177) = l_161;
                    if (l_207)
                        break;
                    (*l_145) = &g_172;

                    ;
                }
                else
                {
                    int ***l_221 = &l_145;
                    (*l_144) |= ((((safe_mod_func_int32_t_s_s(((void*)0 == &g_115), l_220)) && (l_221 != &l_145)) != (g_73 , 0x83L)) && (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((g_108 >= g_73), 4)), p_29)));
                }

                ;
                for (g_87.f0 = 0; (g_87.f0 > (-11)); g_87.f0--)
                {
                    int *l_230 = &l_176.f0;
                    if (g_20)
                        break;
                    if ((*p_27))
                        break;
                    for (g_108 = 10; (g_108 < 15); g_108 = safe_add_func_uint16_t_u_u(g_108, 1))
                    {
                        (*l_144) |= l_176.f1;
                        (*l_145) = l_230;

                        ;
                    }
                }

                ;
            }

            ;
            (*l_145) = l_231;

            ;
        }

        ;
        if ((*l_144))
        {
            int l_232 = 1L;
            struct S0 l_239 = {6L,0x33L};
            int *l_270 = (void*)0;
            struct S0 ***l_300 = &g_278;
            unsigned l_317 = 0x809A12A5L;
            if ((func_37(l_232, (0UL >= (((safe_lshift_func_int8_t_s_u((l_232 > (((((g_60 && (safe_div_func_int32_t_s_s((((safe_add_func_uint8_t_u_u(((l_239 , ((safe_sub_func_int8_t_s_s(l_242, g_60)) , 0L)) != (safe_add_func_int32_t_s_s((!(safe_rshift_func_int8_t_s_u((g_87.f1 == (*l_144)), 5))), (*p_25)))), 0x83L)) != g_87.f1) < g_73), l_239.f0))) < g_87.f1) , 1UL) & g_20) >= p_29)), g_20)) , g_148) > g_20))) || (*p_25)))
            {
                int l_261 = 0xF3464047L;
                int l_271 = 5L;
                int *l_274 = &l_132;
                for (g_60 = 0; (g_60 >= 1); ++g_60)
                {
                    unsigned l_252 = 0xC7AF0A2BL;
                    struct S0 l_262 = {0x6708EC85L,0UL};
                    if (l_239.f0)
                        break;
                    (*l_144) ^= ((func_37((l_249 ^ (safe_add_func_uint32_t_u_u(p_29, ((0UL || l_252) != (((void*)0 != &l_132) && g_4))))), (&l_239 != (void*)0)) ^ g_172) , 0x820DD73FL);

                    ;
                    if (((safe_add_func_uint32_t_u_u((l_239.f0 ^ (safe_div_func_int32_t_s_s((g_73 , l_232), l_232))), ((safe_mod_func_int8_t_s_s(0xFBL, 246UL)) || (g_87.f0 || ((safe_rshift_func_uint8_t_u_s(l_261, (func_49(func_17((g_115 != p_29))) && p_29))) , p_29))))) < p_29))
                    {
                        struct S0 *l_263 = (void*)0;
                        struct S0 *l_264 = &l_239;
                        int l_269 = 8L;
                        (*l_145) = &l_130;

                        ;
                        (*p_27) &= ((void*)0 != &l_231);
                        (*l_264) = l_262;
                        (*p_27) = ((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((-8L) >= l_269) | (func_49(func_53(&l_261, l_270, p_26, l_269, p_29)) & p_29)) != 0x3BL), 6)), l_271)) >= g_87.f1) , p_29) <= p_29);

                        ;
                    }
                    else
                    {
                        (*l_144) &= (g_73 <= (safe_mod_func_uint8_t_u_u(l_252, ((-1L) & 0x1618L))));
                        (*l_145) = (void*)0;

                        ;
                        g_7 = (void*)0;
                    }

                    ;
                }

                ;
                l_274 = &l_132;
                for (l_143 = (-21); (l_143 != 51); l_143++)
                {
                    struct S0 *l_277 = &l_239;
                    struct S0 ***l_280 = (void*)0;
                    struct S0 ***l_281 = &g_278;
                    (*l_277) = g_87;
                    (*l_281) = g_278;
                    if (g_20)
                        continue;
                }
            }
            else
            {
                struct S0 *l_284 = &g_87;
                struct S0 ***l_285 = (void*)0;
                int l_301 = 3L;
                for (l_124 = (-6); (l_124 != 16); ++l_124)
                {
                    (*g_278) = l_284;
                }
                if ((l_285 != (void*)0))
                {
                    struct S0 *l_286 = &g_87;
                    int l_291 = 2L;
                    if (g_60)
                    {
                        (*l_145) = &l_132;

                        ;
                        l_287 = l_286;
                    }
                    else
                    {
                        int *l_290 = &l_239.f0;
                        (*l_145) = (((((((0x8E0E4D52L != func_30((l_239 , g_4), l_290, g_87.f0, &g_20)) > (((0x5516L == g_148) , &g_279) != (void*)0)) , 2UL) < g_148) >= 0x1C70L) & l_291) , p_27);

                        ;
                        l_291 = func_30(g_20, &g_20, g_60, &g_172);

                        ;
                        (*p_27) |= ((p_29 > l_292) < 0L);
                        return (*l_144);
                    }

                    ;
                }
                else
                {
                    struct S0 ***l_299 = (void*)0;
                    int l_302 = 0x3CF6F25CL;
                    if ((*p_25))
                    {
                        unsigned l_303 = 0x0675B026L;
                        int *l_304 = &l_239.f0;
                        (*l_145) = (void*)0;
                        (*g_279) = l_161;
                        (*l_304) ^= (safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((g_172 | ((safe_mod_func_uint32_t_u_u((l_299 == l_300), ((l_301 != ((func_30(l_301, func_17(l_302), l_302, &g_172) <= p_29) < l_303)) , l_303))) & 2L)), g_148)) , g_148), 0xC3L));
                        return p_29;
                    }
                    else
                    {
                        (*l_145) = p_26;
                    }
                    (*l_145) = (void*)0;
                }

                ;
                return p_29;


            }

            ;
            (*l_145) = func_53((*l_145), (*l_145), func_53(&g_115, func_53(func_17(p_29), func_53(&g_20, (*l_145), p_28, (*l_144), p_29), p_27, g_87.f1, p_29), p_28, l_305, g_4), g_148, (*l_144));
            if ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(0xE6L, (l_317 ^ 0xA5L))), 5)) , g_87.f0), 12)))
            {
                (*p_27) |= (g_73 , 0L);
                for (g_87.f1 = 0; (g_87.f1 > 36); g_87.f1 = safe_add_func_int32_t_s_s(g_87.f1, 2))
                {
                    (*l_145) = (g_60 , &g_20);

                    ;
                }
                (*p_27) = ((*l_144) ^ g_60);
            }
            else
            {
                l_239.f0 &= (safe_mod_func_uint8_t_u_u((p_29 , p_29), p_29));
            }
        }
        else
        {
            (*p_25) |= 0L;
            (*l_144) = ((void*)0 != l_316);
            return p_29;
        }

        ;
        for (l_161.f0 = 0; (l_161.f0 < (-24)); --l_161.f0)
        {
            unsigned l_336 = 0UL;
            int l_344 = 0L;
            int l_372 = 7L;
            for (l_191 = 23; (l_191 >= 14); l_191 = safe_sub_func_int16_t_s_s(l_191, 6))
            {
                int l_335 = 0x01FC7AE0L;
                int *l_337 = &g_20;
                for (l_292 = 0; (l_292 == 2); l_292 = safe_add_func_uint16_t_u_u(l_292, 1))
                {
                    int ***l_332 = &l_145;
                    (*p_27) = (((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(0x87AAL, ((((((l_332 != (void*)0) <= (safe_rshift_func_uint16_t_u_s(p_29, 15))) < l_335) ^ ((g_87.f1 < l_336) || func_30(p_29, l_337, l_336, &g_115))) < p_29) ^ p_29))) || g_87.f0), 0xD9EAL)) >= 0UL) != 7L);
                }
            }
            if ((*l_144))
            {
                struct S0 l_340 = {-1L,253UL};
                int **l_351 = &g_7;
                int l_359 = 0xDB035E90L;
                unsigned short l_393 = 0xA7E3L;
                if (((((l_336 , (safe_sub_func_uint8_t_u_u(g_73, (p_29 , p_29)))) != (65527UL >= ((4UL & l_336) > func_37(g_87.f1, (*l_144))))) == g_4) | 1L))
                {
                    unsigned l_345 = 0xA1814A40L;
                    struct S0 l_346 = {0x082D228DL,0UL};
                    (*l_287) = l_340;
                    for (l_132 = 7; (l_132 == (-9)); l_132 = safe_sub_func_int16_t_s_s(l_132, 6))
                    {
                        short l_343 = 0x6610L;
                        (*p_27) &= 0x76AF6C5CL;
                        l_345 |= (g_87.f1 , ((0L >= ((l_343 >= (0xD3F7A21FL != g_115)) && func_37(p_29, l_344))) , 0xDF24C9ECL));
                    }
                    (*g_279) = l_346;
                    (*p_25) = g_115;
                }
                else
                {
                    int *l_356 = &l_161.f0;
                    char l_360 = 0xC6L;
                    short l_361 = (-8L);
                    if ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((func_49(p_27) || (&p_26 == l_351)) , ((safe_lshift_func_uint16_t_u_s(func_37(p_29, (p_29 <= (((((+(safe_div_func_int16_t_s_s((l_356 == (void*)0), ((safe_rshift_func_uint16_t_u_u((l_359 , g_87.f0), 6)) , p_29)))) , l_360) && l_344) == (**l_351)) != p_29))), l_361)) < g_115)), p_29)), p_29)))
                    {
                        unsigned l_362 = 0xFDBCDAE1L;
                        struct S0 **l_375 = &g_279;
                        (*p_27) = (g_4 | (l_362 | ((safe_mul_func_int16_t_s_s(g_108, (((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(((p_29 == (safe_sub_func_uint8_t_u_u((g_108 || p_29), ((void*)0 == p_27)))) == 0x20A2L), 5)) >= p_29), g_108)) == 1L) , 0UL))) == 1L)));
                        g_371 ^= (((func_30(g_115, &g_20, ((*p_25) & (p_29 , g_172)), p_25) || (((*p_27) & ((*l_144) > 0x2840B4C9L)) > p_29)) <= p_29) , (*l_144));
                        if (l_372)
                            break;
                        (*p_27) &= (g_108 == (l_375 != (l_161 , l_375)));
                    }
                    else
                    {
                        return g_148;
                    }
                    (*l_351) = l_356;

                    ;
                    (*l_351) = func_53(&g_115, &g_115, &g_172, (**l_145), l_336);

                    ;
                    (*l_351) = p_28;

                    ;
                }

                ;
                for (l_130 = 5; (l_130 != 0); l_130 = safe_sub_func_int16_t_s_s(l_130, 6))
                {
                    unsigned char l_399 = 0x9DL;
                    (*l_351) = &g_115;

                    ;
                    (*p_27) = (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((func_37((safe_lshift_func_uint16_t_u_s(g_108, 12)), (safe_lshift_func_int8_t_s_u((g_148 > ((l_386 & (safe_sub_func_int8_t_s_s(0x35L, ((((p_29 >= (**l_351)) < l_344) , (void*)0) == l_389)))) , g_172)), p_29))) > g_172), (*l_144))), g_73));

                    ;
                    (*l_351) = (void*)0;
                    for (g_115 = 18; (g_115 <= 2); g_115 = safe_sub_func_uint32_t_u_u(g_115, 7))
                    {
                        g_400 ^= (((l_393 , g_172) != (((safe_mod_func_int32_t_s_s(g_371, (safe_add_func_uint8_t_u_u(l_344, ((*p_27) && 0x2E1EAFA4L))))) && (((func_37((safe_unary_minus_func_int32_t_s((*l_144))), p_29) < p_29) ^ g_148) == g_73)) == (-1L))) >= l_399);
                        return g_148;
                    }
                }
                for (l_130 = 0; (l_130 <= (-27)); l_130--)
                {
                    unsigned l_403 = 18446744073709551615UL;
                    if (l_403)
                        break;
                }
            }
            else
            {
                unsigned l_406 = 0UL;
                (**l_389) = func_17((safe_rshift_func_int16_t_s_s(((g_172 ^ (&g_115 == (*l_145))) > g_60), l_406)));

                ;
            }


            if (l_344)
                break;
            (*l_390) = &l_372;

            ;
        }


    }
    else
    {
        int l_410 = 0x15968FA5L;
        for (l_176.f1 = 0; (l_176.f1 <= 36); l_176.f1++)
        {
            (**l_389) = l_409;

            ;
        }

        ;
        (*p_27) = 0xF5C012D4L;
        (*p_25) |= l_410;
        (*p_25) ^= 0L;
    }

    ;

    (*l_389) = &p_25;

    ;
    return (**l_390);
}







static unsigned func_30(unsigned char p_31, int * p_32, int p_33, int * p_34)
{
    char l_89 = 0L;
    int *l_90 = &g_20;
    struct S0 *l_93 = &g_87;
    int **l_94 = &l_90;
    int *l_114 = &g_115;
    short l_116 = 0xF767L;
    (*p_32) |= l_89;
    (*l_94) = (func_49(&g_20) , func_53(&g_20, l_90, l_90, g_4, ((safe_div_func_uint32_t_u_u(((*l_90) , (l_93 == &g_87)), p_31)) & 0xD4L)));

    ;
    for (l_89 = 20; (l_89 != (-21)); l_89--)
    {
        int *l_97 = &g_87.f0;
        (*l_94) = func_53((*l_94), func_53(func_53(p_34, func_53(p_32, &g_20, l_97, (g_87.f0 > p_31), g_87.f0), &g_20, p_31, (**l_94)), (*l_94), (*l_94), (**l_94), p_31), &g_20, g_4, g_4);
        (*l_93) = (*l_93);
        for (g_60 = (-10); (g_60 != (-5)); ++g_60)
        {
            int l_111 = 1L;
            (*l_94) = func_17((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((g_73 < p_33), 12)), func_37((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((func_37((g_87.f0 ^ (g_4 | g_108)), ((safe_mod_func_uint8_t_u_u(0x7CL, 0x5BL)) ^ l_111)) , 7UL), p_31)), g_60)), p_33))));

            ;
        }
    }

    ;
    (*l_114) ^= (safe_add_func_uint8_t_u_u(func_37((p_33 <= ((**l_94) != (p_33 , 5UL))), (0x48L || (((((p_31 == (((g_20 & ((((p_33 <= (0L != 4L)) > (**l_94)) , 0xECCAL) != (**l_94))) < (*l_90)) == 0L)) & (**l_94)) && p_33) , (void*)0) != l_93))), p_33));

    ;
    return l_116;
}







static short func_37(unsigned char p_38, short p_39)
{
    int *l_51 = &g_20;
    int *l_82 = (void*)0;
    int l_83 = 0xA5C12BBFL;
    int **l_84 = &g_7;
    struct S0 l_85 = {1L,0x64L};
    struct S0 *l_86 = (void*)0;
    int l_88 = 0x2D48012CL;
    l_83 ^= (p_38 <= ((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_49(l_51), g_4)), p_39)) & (((g_73 ^ g_60) ^ (g_73 > p_39)) & g_60)));

    ;
    (*l_84) = (void*)0;

    ;
    g_87 = l_85;
    return l_88;
}







static char func_49(int * p_50)
{
    char l_52 = 0L;
    unsigned short l_59 = 0UL;
    short l_63 = 0x744FL;
    int **l_64 = &g_7;
    char l_67 = 0xB2L;
    (*p_50) &= l_52;
    (*l_64) = func_53(((l_52 <= g_20) , func_17(l_59)), p_50, p_50, (l_59 , ((g_60 <= ((safe_mod_func_int32_t_s_s((0xA4L <= g_4), 0x3970C0F3L)) <= l_59)) | l_63)), l_59);

    ;
    (*g_7) = ((**l_64) <= ((((*g_7) != 0x2DC0978CL) != (safe_lshift_func_int16_t_s_u(l_67, 14))) ^ (safe_unary_minus_func_int8_t_s(((safe_div_func_uint32_t_u_u(((((**l_64) == (safe_div_func_int32_t_s_s((**l_64), ((((void*)0 != p_50) , g_73) & 65532UL)))) , (**l_64)) & (*g_7)), (**l_64))) , g_73)))));
    for (g_20 = 0; (g_20 < 2); g_20++)
    {
        unsigned char l_78 = 0xEFL;
        int l_79 = 0xF7E48FFCL;
        l_79 = ((safe_sub_func_int32_t_s_s((l_78 < (**l_64)), l_78)) > 0x3EC2CFCCL);
    }
    return (**l_64);
}







static int * func_53(int * p_54, int * p_55, int * p_56, short p_57, unsigned short p_58)
{
    return p_54;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
