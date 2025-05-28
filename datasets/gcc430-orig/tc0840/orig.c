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
   unsigned long long f1;
   signed f2 : 7;
   char f3;
   unsigned f4;
   unsigned f5;
   unsigned f6;
   int f7;
};


static int g_8 = 1L;
static int g_31 = 0x21462CCDL;
static int g_42 = 4L;
static int g_78 = (-1L);
static struct S0 g_87 = {0x78C6C423L,18446744073709551609UL,-2,0xA0L,18446744073709551615UL,0x540E5169L,0x878D320CL,-7L};
static const struct S0 *g_86 = &g_87;
static int *g_127 = &g_42;
static long long g_173 = 0xFD5171A10681B76BLL;
static short g_231 = 5L;
static int ***g_233 = (void*)0;
static const struct S0 **g_274 = (void*)0;
static const struct S0 ***g_273 = &g_274;
static int **g_414 = &g_127;
static struct S0 g_433 = {0x1E6FA66BL,18446744073709551613UL,-0,1L,0xD250D3C9L,18446744073709551615UL,0x4F4DA735L,1L};
static struct S0 g_470 = {6L,0xACF154E17701155FLL,-10,-1L,0x3AC4C7BAL,0x7CD3711BL,1UL,5L};
static int g_517 = 0xF4B9C93AL;
static int *g_678 = &g_42;



static unsigned char func_1(void);
static int func_2(long long p_3);
static char func_4(int p_5, unsigned char p_6, const char p_7);
static int * func_12(unsigned char p_13, char p_14, char p_15, int * const p_16);
static unsigned short func_20(long long p_21, int * const p_22, unsigned char p_23);
static int * func_24(unsigned p_25, const unsigned long long p_26, int * p_27);
static char func_37(const unsigned char p_38, unsigned p_39, unsigned char p_40);
static long long func_45(unsigned long long p_46, short p_47, unsigned short p_48, unsigned short p_49, int * p_50);
static unsigned short func_51(const int p_52, int p_53);
static char func_54(long long p_55, char p_56, int * p_57, unsigned char p_58, int * const p_59);
static unsigned char func_1(void)
{
    unsigned long long l_11 = 7UL;
    int l_675 = 0x331A4846L;
    long long l_685 = 0x363FEBE1EA08D4D1LL;
    l_675 = func_2((((!func_4((4294967295UL > g_8), (safe_mod_func_uint16_t_u_u(65531UL, g_8)), (g_8 <= l_11))) | (safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint64_t_u(g_8)) | (-10L)), 0UL))) > 18446744073709551609UL));
    (**g_414) = ((g_433.f0 > 0x254904AEL) < 0x50282AEAL);
    if ((*g_127))
    {
        (*g_414) = (*g_414);
    }
    else
    {
        for (g_470.f4 = (-7); (g_470.f4 >= 32); g_470.f4 = safe_add_func_int16_t_s_s(g_470.f4, 3))
        {
            (**g_414) = 0xF90D207BL;
            return g_433.f4;
        }
        (*g_414) = g_678;
    }
    l_675 = (((((safe_div_func_uint32_t_u_u(l_675, g_470.f5)) != func_54(g_470.f1, l_675, (*g_414), (((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((0xFE90L || g_87.f2), 2)), g_470.f5)) == 0x145710DC5444BFD5LL) <= g_470.f3), &l_675)) > l_685) ^ l_11) == (-4L));
    return g_87.f6;
}







static int func_2(long long p_3)
{
    const struct S0 ***l_623 = (void*)0;
    int l_624 = 1L;
    struct S0 l_628 = {-9L,0UL,-10,-5L,0xEE0D4024L,0UL,0x1560DCD8L,-1L};
    int *l_656 = &g_31;
    int *l_659 = &g_78;
    int **l_666 = &l_659;
    for (g_470.f1 = (-18); (g_470.f1 <= 4); g_470.f1 = safe_add_func_uint8_t_u_u(g_470.f1, 7))
    {
        struct S0 *l_619 = (void*)0;
        int l_625 = (-1L);
        int **l_650 = (void*)0;
        for (g_470.f7 = 14; (g_470.f7 >= 9); --g_470.f7)
        {
            struct S0 *l_620 = &g_87;
            int l_626 = 0xE521059EL;
            int **l_649 = &g_127;
            l_620 = l_619;
        }
        return p_3;
    }
    return p_3;
}







static char func_4(int p_5, unsigned char p_6, const char p_7)
{
    int l_17 = 0x8ACC4B7CL;
    int *l_30 = &g_31;
    struct S0 *l_411 = (void*)0;
    struct S0 **l_410 = &l_411;
    int * const l_516 = &g_517;
    int **l_605 = &g_127;
    (*l_605) = func_12(l_17, (safe_sub_func_uint32_t_u_u((func_20(p_5, func_24(g_8, (safe_mul_func_uint8_t_u_u((l_30 == l_30), (*l_30))), &g_31), (l_410 != (void*)0)) ^ p_7), p_7)), g_8, l_516);
    (*g_414) = func_24(g_433.f3, (*l_30), (*l_605));
    for (g_87.f5 = 0; (g_87.f5 == 48); g_87.f5 = safe_add_func_uint8_t_u_u(g_87.f5, 5))
    {
        if (p_5)
            break;
        return (*l_516);
    }
    return p_7;
}







static int * func_12(unsigned char p_13, char p_14, char p_15, int * const p_16)
{
    struct S0 l_518 = {0xDC835101L,0x9A913EEDC3504AB5LL,9,0xF0L,18446744073709551615UL,0x7054F3D1L,1UL,1L};
    struct S0 *l_519 = &g_470;
    int *l_529 = &g_78;
    int * const l_530 = &g_517;
    struct S0 * const *l_559 = &l_519;
    struct S0 * const **l_558 = &l_559;
    struct S0 **l_603 = (void*)0;
    struct S0 **l_604 = &l_519;
    (*l_519) = l_518;
    for (g_470.f6 = 0; (g_470.f6 >= 51); g_470.f6 = safe_add_func_uint8_t_u_u(g_470.f6, 6))
    {
        struct S0 l_522 = {0x56170AA0L,0x3C4F43DC13B5F980LL,-4,0x45L,1UL,0x51A60707L,18446744073709551606UL,0x678ABCA8L};
        g_433 = l_522;
        if ((*p_16))
            break;
    }
    if ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_14, (safe_mod_func_uint32_t_u_u(g_470.f5, (((l_518.f4 || l_518.f3) != l_518.f1) | (*l_530)))))), g_470.f7)))
    {
        int *l_531 = (void*)0;
        unsigned l_548 = 0xC10352D2L;
        l_531 = l_529;
        if (((8UL || (((void*)0 == l_531) | 18446744073709551607UL)) || (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((*l_530), (*l_531))), 6L))))
        {
            return l_529;
        }
        else
        {
            struct S0 **l_564 = &l_519;
            for (g_433.f5 = 0; (g_433.f5 < 57); g_433.f5++)
            {
                int *l_543 = &g_517;
                struct S0 *l_546 = &l_518;
                for (l_518.f6 = (-24); (l_518.f6 <= 12); l_518.f6++)
                {
                    int *l_542 = &g_31;
                    for (p_14 = 0; (p_14 != (-6)); p_14 = safe_sub_func_int8_t_s_s(p_14, 5))
                    {
                        (*g_414) = l_542;
                        return l_543;
                    }
                }
                for (p_13 = (-20); (p_13 == 58); p_13 = safe_add_func_uint32_t_u_u(p_13, 5))
                {
                    struct S0 **l_547 = &l_519;
                    (*l_547) = l_546;
                    if ((l_546 == (void*)0))
                    {
                        if (l_548)
                            break;
                    }
                    else
                    {
                        (*p_16) = (*p_16);
                        (*g_414) = (void*)0;
                    }
                }
            }
            if (((&g_274 != (void*)0) != func_45((*l_531), g_87.f5, g_231, (safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(g_433.f7, g_470.f6)) >= (safe_add_func_uint32_t_u_u(4294967291UL, (*p_16)))), 0xDEL)), l_531)))
            {
                long long l_555 = 0L;
                struct S0 **l_557 = &l_519;
                struct S0 ***l_556 = &l_557;
                const unsigned long long l_562 = 0x1A9592596F00E81FLL;
                int **l_563 = &l_529;
                (*l_563) = p_16;
            }
            else
            {
                (*l_558) = l_564;
            }
        }
        (*l_530) = ((safe_mod_func_int8_t_s_s((1L != ((safe_mod_func_uint32_t_u_u(((0x878D0693L ^ ((0x6D948252309E625BLL & ((safe_mul_func_uint16_t_u_u(g_433.f7, (*l_529))) || (*l_531))) && g_87.f3)) == (*l_531)), 0x23C9576FL)) && g_78)), p_15)) < p_14);
        if ((*l_529))
        {
            int *l_571 = &g_31;
            (*g_414) = l_571;
            return l_531;
        }
        else
        {
            struct S0 l_576 = {0x9BC6D591L,1UL,-9,0xEEL,0x4936F9AEL,0x9722DEFFL,1UL,0L};
            for (l_518.f4 = 0; (l_518.f4 == 22); ++l_518.f4)
            {
                if ((*p_16))
                    break;
                l_576 = (***l_558);
            }
            for (g_42 = 0; (g_42 > 29); g_42 = safe_add_func_uint64_t_u_u(g_42, 5))
            {
                int *l_579 = &g_31;
                (*g_414) = l_579;
                l_579 = (void*)0;
                (*g_414) = l_531;
            }
            (*l_530) = (safe_sub_func_uint64_t_u_u((func_20((safe_unary_minus_func_int64_t_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_15, 5)), (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((g_470.f3 > ((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((((p_16 != (void*)0) == (((safe_add_func_uint16_t_u_u(p_15, p_15)) & p_13) <= 1L)) <= ((*l_529) <= (*l_529))) == p_14), p_15)), g_87.f7)), 9)) > p_15)) != (*l_531)), 5)), (*p_16))))), 0xCDL)) && 18446744073709551615UL))), l_531, p_14) | p_13), 6L));
        }
    }
    else
    {
        return &g_42;
    }
    (*l_604) = (**l_558);
    return l_529;
}







static unsigned short func_20(long long p_21, int * const p_22, unsigned char p_23)
{
    long long l_412 = 0xDEAA68DCC2A20949LL;
    int *l_413 = &g_78;
    struct S0 *l_419 = &g_87;
    struct S0 * const *l_418 = &l_419;
    struct S0 * const **l_417 = &l_418;
    if ((l_412 | p_23))
    {
        struct S0 l_420 = {0x81F47511L,0UL,9,0xC2L,0UL,18446744073709551611UL,0x07316541L,-1L};
        int *l_443 = &g_31;
        if ((*p_22))
        {
            char l_428 = 0x11L;
            struct S0 l_438 = {0xB94F0977L,5UL,1,0x6DL,0x00B130DBL,18446744073709551615UL,0xA30994F2L,6L};
            (*l_419) = l_420;
            for (g_87.f6 = (-14); (g_87.f6 >= 45); g_87.f6 = safe_add_func_int64_t_s_s(g_87.f6, 9))
            {
                unsigned char l_427 = 0x4BL;
                int **l_437 = &l_413;
                if ((((*l_417) == (void*)0) ^ (safe_mul_func_int16_t_s_s((!((safe_mul_func_uint8_t_u_u(0x39L, 1L)) | l_427)), ((l_428 && g_87.f2) > 18446744073709551614UL)))))
                {
                    int **l_429 = &l_413;
                    (*l_429) = p_22;
                }
                else
                {
                    int l_436 = 0xA74D207DL;
                    for (l_420.f1 = (-7); (l_420.f1 == 46); l_420.f1 = safe_add_func_int8_t_s_s(l_420.f1, 1))
                    {
                        int **l_432 = &l_413;
                        int * const *l_435 = &l_413;
                        int * const **l_434 = &l_435;
                        (*l_432) = p_22;
                        g_433 = (*g_86);
                        (*l_434) = &p_22;
                    }
                    if (l_436)
                        continue;
                }
                (*l_437) = p_22;
            }
            l_438 = l_420;
            (*l_443) = (l_438.f6 >= (l_420.f0 <= (((safe_div_func_int8_t_s_s(0L, (safe_mul_func_int16_t_s_s((l_443 != (void*)0), 0x2BB3L)))) < g_87.f2) > l_438.f3)));
        }
        else
        {
            return g_433.f5;
        }
    }
    else
    {
        const unsigned char l_460 = 255UL;
        int *l_461 = &g_78;
        struct S0 l_469 = {0x216416DDL,0xA9F363207EE8DCCDLL,10,0x9DL,0x83EA0A88L,0UL,9UL,0L};
        for (g_87.f1 = 1; (g_87.f1 < 23); ++g_87.f1)
        {
            int l_452 = (-5L);
            int *l_471 = &g_31;
            (*p_22) = (((((void*)0 == &g_274) > func_45((4294967295UL == (safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((l_452 && (*l_413)) ^ (((*l_413) <= ((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((*p_22), (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(g_433.f2)), 0x549B605CL)))), p_23)) | (*p_22))) == l_460)) & 65534UL), 0x9E3C7521L)), 7)), (-9L)))), l_460, p_21, (*l_413), l_413)) >= g_42) > p_21);
            (*g_414) = l_461;
            if ((((*l_413) ^ (safe_add_func_uint8_t_u_u((p_21 | (((*l_413) != 0x27L) && (0x5C79L <= 0x988DL))), p_23))) & (((*g_414) == p_22) >= (*l_461))))
            {
                int **l_464 = (void*)0;
                int **l_465 = &l_461;
                (*l_465) = p_22;
                if ((*l_461))
                    continue;
                for (g_433.f3 = (-20); (g_433.f3 > (-9)); g_433.f3++)
                {
                    int *l_468 = &g_78;
                    l_413 = l_468;
                    g_470 = l_469;
                    l_461 = l_471;
                }
            }
            else
            {
                int ***l_472 = &g_414;
                struct S0 **l_474 = &l_419;
                struct S0 ***l_473 = &l_474;
                (**g_414) = 0x64805D4FL;
                (*l_472) = &g_127;
                l_469 = l_469;
                (*g_127) = (&g_274 == l_473);
            }
        }
        (*g_414) = l_461;
    }
    for (g_433.f6 = 0; (g_433.f6 > 37); ++g_433.f6)
    {
        struct S0 l_477 = {0x99435AABL,0UL,7,0L,0x870CC951L,0x4430A292L,1UL,-3L};
        (*l_419) = l_477;
    }
    for (g_87.f0 = 23; (g_87.f0 >= 19); g_87.f0--)
    {
        char l_499 = 0L;
        struct S0 l_505 = {-1L,0x6221E7FB5F397EBDLL,8,0xA4L,18446744073709551615UL,0x91062FABL,0xD10270BEL,0xB72DCEE5L};
        unsigned short l_510 = 0xFACDL;
        for (g_78 = 0; (g_78 > 25); ++g_78)
        {
            int *l_484 = &g_42;
            for (g_87.f4 = 0; (g_87.f4 == 8); g_87.f4++)
            {
                unsigned long long l_485 = 18446744073709551608UL;
                int **l_491 = (void*)0;
                int **l_492 = &g_127;
                l_484 = l_413;
                if (l_485)
                {
                    int *l_488 = &g_31;
                    struct S0 *l_489 = (void*)0;
                    struct S0 *l_490 = &g_470;
                    (*l_488) = (safe_div_func_uint64_t_u_u(6UL, g_42));
                    (*l_490) = (***l_417);
                }
                else
                {
                    return g_87.f7;
                }
                (*l_492) = p_22;
            }
            if ((((*l_413) != (((**l_417) != (void*)0) < (p_23 >= g_470.f4))) >= (safe_add_func_int16_t_s_s(p_21, (((p_23 == (safe_rshift_func_uint16_t_u_u((~l_499), (safe_sub_func_int16_t_s_s(p_21, (*l_413)))))) > p_21) <= p_21)))))
            {
                int *l_502 = (void*)0;
                (*l_417) = (*l_417);
                l_484 = p_22;
                (*g_414) = l_502;
            }
            else
            {
                g_42 = l_499;
                for (g_87.f5 = 12; (g_87.f5 > 52); g_87.f5++)
                {
                    l_505 = (*g_86);
                }
            }
            (*g_414) = l_413;
        }
        (*l_413) = (safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((l_510 | (safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(1L)) <= ((*l_413) < (0xAFC67035L > l_505.f5))), ((((void*)0 == &p_22) >= p_23) | 0x4CB18CC3C2349389LL)))), (*l_413))) & 0UL), l_510));
    }
    (***l_417) = (*g_86);
    return (*l_413);
}







static int * func_24(unsigned p_25, const unsigned long long p_26, int * p_27)
{
    const unsigned l_366 = 0x03E40603L;
    struct S0 l_371 = {0xC4CCBB0DL,1UL,-2,7L,0x0C4F6498L,1UL,0xF0830096L,0L};
    char l_378 = 0x37L;
    int *l_388 = &g_31;
    int **l_408 = (void*)0;
    int **l_409 = &l_388;
    if (g_31)
    {
        int *l_32 = &g_31;
        long long l_369 = 0xD6CA62EEB9AF1AAALL;
        if ((&g_31 == l_32))
        {
            (*p_27) = (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_26 != (0L | (g_31 >= g_8))), func_37(((void*)0 != p_27), g_8, (*l_32)))), 0xC8L));
        }
        else
        {
            unsigned l_354 = 0x26475456L;
            short l_367 = 0xE468L;
            int * const l_370 = &g_42;
            struct S0 *l_384 = &l_371;
            struct S0 **l_383 = &l_384;
            for (g_31 = 0; (g_31 != 12); g_31 = safe_add_func_int64_t_s_s(g_31, 8))
            {
                long long l_357 = 1L;
                int *l_368 = &g_31;
                struct S0 ***l_385 = (void*)0;
                struct S0 ***l_386 = (void*)0;
                struct S0 ***l_387 = &l_383;
            }
            l_388 = l_32;
            for (l_371.f4 = 15; (l_371.f4 > 35); ++l_371.f4)
            {
                struct S0 l_395 = {0L,0x9E22149D6A5D7A0DLL,8,2L,0xD2189067L,18446744073709551608UL,0UL,-1L};
                int **l_397 = &l_32;
                if ((*l_370))
                    break;
                for (l_354 = 0; (l_354 == 44); l_354 = safe_add_func_int32_t_s_s(l_354, 1))
                {
                    for (g_231 = 0; (g_231 != 7); g_231++)
                    {
                        struct S0 *l_396 = &l_395;
                        (*l_396) = l_395;
                    }
                    (*p_27) = (*p_27);
                }
                (*l_397) = l_370;
            }
        }
    }
    else
    {
        int *l_406 = &g_31;
        (*p_27) = (*l_388);
        for (g_87.f7 = 0; (g_87.f7 <= 26); g_87.f7 = safe_add_func_int8_t_s_s(g_87.f7, 1))
        {
            struct S0 *l_400 = &l_371;
            (*l_400) = l_371;
            if ((*p_27))
                break;
        }
        for (l_371.f5 = 0; (l_371.f5 == 30); ++l_371.f5)
        {
            int *l_403 = &g_78;
            return l_403;
        }
        for (g_87.f3 = 24; (g_87.f3 > 21); --g_87.f3)
        {
            int **l_407 = &g_127;
            (*l_407) = l_406;
            if ((*p_27))
                continue;
        }
    }
    (*l_409) = &g_78;
    return p_27;
}







static char func_37(const unsigned char p_38, unsigned p_39, unsigned char p_40)
{
    int *l_41 = &g_42;
    struct S0 l_343 = {0L,18446744073709551615UL,7,0x6FL,18446744073709551615UL,1UL,18446744073709551611UL,0L};
    (*l_41) = (-1L);
    (*l_41) = ((safe_add_func_uint32_t_u_u(g_8, ((void*)0 == &g_31))) || p_38);
    (*l_41) = (func_45(g_8, (func_51((func_54(g_42, p_40, &g_31, ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((&g_31 == l_41), ((*l_41) && (((-9L) && ((((void*)0 == l_41) || 1L) > g_8)) && (*l_41))))), p_38)) | 65535UL), &g_31) == 255UL), p_38) < g_8), p_39, g_31, l_41) > 1L);
    l_343 = l_343;
    return p_40;
}







static long long func_45(unsigned long long p_46, short p_47, unsigned short p_48, unsigned short p_49, int * p_50)
{
    unsigned long long l_331 = 18446744073709551615UL;
    struct S0 *l_340 = &g_87;
    (*p_50) = (*p_50);
    (*p_50) = (((safe_sub_func_uint32_t_u_u(4294967294UL, (((safe_lshift_func_uint8_t_u_s(((-1L) < (l_331 && p_46)), 3)) != (safe_rshift_func_uint8_t_u_u(p_48, 1))) && (((p_49 & g_87.f4) > l_331) <= ((safe_mul_func_int8_t_s_s(0L, g_42)) > l_331))))) > g_42) >= p_46);
    (*p_50) = (*p_50);
    (*p_50) = (l_331 ^ (*p_50));
    return p_49;
}







static unsigned short func_51(const int p_52, int p_53)
{
    struct S0 l_223 = {-1L,0xD4CEE256FD156975LL,-3,0xF7L,18446744073709551615UL,0UL,0x0D10B849L,0x18664344L};
    struct S0 *l_224 = &l_223;
    int * const **l_232 = (void*)0;
    int *l_250 = &g_42;
    struct S0 **l_272 = &l_224;
    struct S0 ***l_271 = &l_272;
    int *l_291 = &g_31;
    int *l_299 = (void*)0;
    (*l_224) = l_223;
    if ((g_87.f7 == l_223.f6))
    {
        int *l_234 = &g_78;
        int *l_251 = &g_42;
        int * const l_252 = (void*)0;
        char l_283 = 0xBAL;
        int *l_300 = (void*)0;
        if ((safe_add_func_int16_t_s_s((((g_87.f6 || ((safe_div_func_int16_t_s_s(g_231, (g_87.f2 | g_87.f3))) < (l_223.f6 ^ g_87.f5))) >= (l_232 != g_233)) >= g_173), g_87.f7)))
        {
            int **l_235 = (void*)0;
            int **l_236 = &g_127;
            (*l_236) = l_234;
            if (p_52)
            {
                (*g_127) = p_52;
                (*l_236) = &p_53;
            }
            else
            {
                (*g_127) = (safe_add_func_int32_t_s_s(0xD6F3FE04L, 4294967294UL));
                for (l_223.f6 = 0; (l_223.f6 <= 17); l_223.f6 = safe_add_func_int64_t_s_s(l_223.f6, 6))
                {
                    struct S0 * const l_243 = &g_87;
                    struct S0 **l_244 = &l_224;
                    (*g_127) = (g_173 == ((*l_234) & (safe_add_func_uint32_t_u_u(g_231, (p_52 <= p_52)))));
                    (*l_244) = l_243;
                    (*l_224) = (*g_86);
                }
            }
            return p_53;
        }
        else
        {
            int *l_247 = &g_42;
            struct S0 **l_261 = &l_224;
            int **l_270 = &l_247;
            int ***l_269 = &l_270;
            unsigned char l_279 = 4UL;
            for (l_223.f6 = 0; (l_223.f6 <= 9); l_223.f6++)
            {
                unsigned char l_253 = 0x0EL;
                int *l_258 = (void*)0;
                const unsigned l_282 = 0UL;
                l_247 = l_234;
                (*l_247) = (p_53 < ((safe_sub_func_int32_t_s_s((g_87.f5 > (p_52 && 255UL)), p_52)) == (-8L)));
                if ((+(0x9BL <= g_42)))
                {
                    int **l_254 = &l_251;
                    (*l_254) = &p_53;
                }
                else
                {
                    const int ** const *l_268 = (void*)0;
                    for (g_87.f0 = 0; (g_87.f0 < 2); ++g_87.f0)
                    {
                        unsigned short l_257 = 0xFC11L;
                        (*l_250) = l_257;
                        if (l_257)
                            continue;
                    }
                    l_258 = &p_53;
                    for (g_42 = 0; (g_42 >= 8); g_42 = safe_add_func_uint32_t_u_u(g_42, 3))
                    {
                        struct S0 ***l_262 = &l_261;
                        int **l_263 = &l_258;
                        (*l_262) = l_261;
                        (*l_263) = &g_78;
                    }
                    (*l_258) = ((safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(((((((l_268 == l_269) >= (*l_250)) == ((l_271 == g_273) > (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x900867E8L, l_279)), (safe_lshift_func_int8_t_s_s(l_282, g_87.f5)))))) == p_52) && p_52) >= g_87.f1), 0x20L)) && (-1L)), g_87.f1)) == 0xEAL);
                }
            }
            if (l_283)
            {
                int l_289 = 0x46647A81L;
                int l_290 = 5L;
                (*l_234) = p_52;
                (*l_270) = &p_53;
                (*l_251) = (!(**l_270));
                (***l_269) = ((safe_mod_func_int8_t_s_s(p_52, l_289)) != l_290);
            }
            else
            {
                unsigned l_293 = 0UL;
                const char l_304 = 1L;
                int *l_305 = (void*)0;
                if ((*g_127))
                {
                    int *l_292 = &g_78;
                    (*l_270) = &g_42;
                    if ((*g_127))
                    {
                        unsigned long long l_294 = 0x33C998A2E6060EF3LL;
                        return l_294;
                    }
                    else
                    {
                        (**l_270) = (251UL != (safe_mul_func_uint16_t_u_u(g_42, (((*l_251) != g_87.f5) <= (g_87.f3 & g_78)))));
                        (*l_234) = p_52;
                        (*l_272) = (void*)0;
                        (*l_270) = (*l_270);
                    }
                    for (g_87.f1 = 0; (g_87.f1 <= 56); g_87.f1++)
                    {
                        (*l_270) = l_299;
                        (**l_269) = &p_53;
                        (*l_270) = l_300;
                    }
                    (*l_270) = &p_53;
                }
                else
                {
                    (**l_269) = &g_42;
                    (*l_224) = (**l_272);
                    (*l_251) = (*g_127);
                }
                for (l_279 = 23; (l_279 > 8); l_279--)
                {
                    int l_303 = 2L;
                    if (p_52)
                    {
                        if (l_304)
                            break;
                    }
                    else
                    {
                        (**l_269) = l_305;
                        (*l_251) = p_53;
                        (**l_269) = (void*)0;
                    }
                    (**l_269) = l_305;
                    for (g_87.f4 = 1; (g_87.f4 >= 52); g_87.f4 = safe_add_func_int32_t_s_s(g_87.f4, 3))
                    {
                        return p_53;
                    }
                }
            }
            for (l_283 = 0; (l_283 == 25); l_283 = safe_add_func_int16_t_s_s(l_283, 5))
            {
                short l_314 = 0xA91AL;
                int *l_326 = &g_31;
                if ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((p_52 == ((l_314 == p_52) && (safe_sub_func_int16_t_s_s(l_314, ((&p_53 != (void*)0) ^ (safe_mul_func_int16_t_s_s(g_87.f6, (safe_add_func_int16_t_s_s(0L, (safe_mul_func_uint8_t_u_u((+0x54L), 250UL))))))))))) <= p_52), g_87.f4)), g_87.f5)))
                {
                    struct S0 l_323 = {0x7B65FDDDL,0x462EF8245736F658LL,3,0x2AL,0x4F3AD51CL,0xBFEAC4E3L,6UL,1L};
                    g_87 = l_323;
                }
                else
                {
                    for (g_87.f6 = 0; (g_87.f6 > 48); g_87.f6 = safe_add_func_uint16_t_u_u(g_87.f6, 1))
                    {
                        if (l_314)
                            break;
                        if ((*g_127))
                            continue;
                    }
                    (**l_269) = l_326;
                }
                if ((*g_127))
                    break;
            }
            return g_87.f3;
        }
    }
    else
    {
        (***l_271) = (***l_271);
    }
    return p_52;
}







static char func_54(long long p_55, char p_56, int * p_57, unsigned char p_58, int * const p_59)
{
    struct S0 l_71 = {0x57240E60L,0x36B80555F25AD92ELL,6,-2L,1UL,0x29BFBD42L,0x9032B814L,1L};
    int *l_91 = &g_78;
    unsigned l_141 = 0x49E25332L;
    const unsigned short l_157 = 0x7EF5L;
    unsigned l_192 = 0UL;
    int **l_222 = &g_127;
    for (p_56 = (-21); (p_56 != 16); p_56++)
    {
        return g_31;
    }
    if (g_8)
    {
        int *l_68 = (void*)0;
        int **l_67 = &l_68;
        int ***l_66 = &l_67;
        (*l_66) = (void*)0;
        for (g_42 = (-19); (g_42 >= (-9)); g_42 = safe_add_func_int32_t_s_s(g_42, 6))
        {
            struct S0 *l_72 = &l_71;
            (*l_72) = l_71;
            for (p_56 = (-11); (p_56 > 6); p_56++)
            {
                struct S0 *l_88 = (void*)0;
                const int *l_107 = &g_42;
                const int **l_106 = &l_107;
                if (g_8)
                {
                    int *l_77 = &g_78;
                    for (l_71.f7 = 0; (l_71.f7 > (-4)); l_71.f7 = safe_sub_func_uint32_t_u_u(l_71.f7, 4))
                    {
                        l_77 = p_59;
                        if (g_8)
                            continue;
                        g_78 = (safe_mul_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s((p_58 && (((!(g_86 != l_88)) || 0x07C8L) >= (g_87.f3 & (g_87.f1 == (!((p_58 && g_87.f5) & ((safe_div_func_uint64_t_u_u((*l_77), (*l_77))) ^ p_58))))))))) <= 0xE8584DF831B5E352LL) & p_56), p_56)), 0x94B961AC8BEBE450LL)) & 0x2614L), 0xACL));
                    }
                    l_91 = p_57;
                }
                else
                {
                    int **l_92 = &l_91;
                    struct S0 **l_93 = &l_88;
                    (*l_92) = &g_42;
                    (*l_92) = &g_78;
                    (*l_93) = &g_87;
                }
                for (p_55 = 0; (p_55 == (-26)); p_55 = safe_sub_func_uint32_t_u_u(p_55, 3))
                {
                    if (((g_31 & 1UL) & g_78))
                    {
                        int *l_96 = &g_42;
                        int **l_97 = (void*)0;
                        int **l_98 = &l_91;
                        (*l_98) = l_96;
                    }
                    else
                    {
                        struct S0 *l_103 = &g_87;
                        int *l_110 = &g_78;
                        if ((*p_57))
                            break;
                        l_91 = p_57;
                        (*l_110) = (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((p_55 != (l_72 != l_103)), (1UL & (safe_lshift_func_int16_t_s_s((((void*)0 != l_106) || (0xA5CECF82584F164ELL ^ 0x2562E968F5B2801FLL)), ((safe_add_func_int16_t_s_s((((*l_91) <= 0L) | g_87.f7), p_55)) < p_55)))))) >= p_58), 0xDD4D06223119449FLL));
                        if (g_87.f3)
                            continue;
                    }
                    g_78 = (*p_59);
                    l_71 = l_71;
                }
            }
            return g_31;
        }
    }
    else
    {
        unsigned char l_111 = 248UL;
        struct S0 l_128 = {0x1C78AB42L,0xC255036077B2A72BLL,8,0x5FL,0UL,4UL,4UL,-1L};
        int l_138 = 0x01E8EA3FL;
        int **l_143 = &g_127;
        int ***l_142 = &l_143;
        int ***l_144 = (void*)0;
        unsigned char l_199 = 0UL;
        if (l_111)
        {
            int **l_112 = (void*)0;
            int **l_113 = &l_91;
            (*l_113) = &g_42;
        }
        else
        {
            unsigned long long l_116 = 1UL;
            int *l_124 = &g_42;
            struct S0 l_171 = {0x30F98853L,0xCE19DED147D6BF53LL,-5,-3L,18446744073709551615UL,18446744073709551609UL,18446744073709551608UL,1L};
            for (p_56 = (-22); (p_56 <= 17); ++p_56)
            {
                struct S0 l_129 = {0x40EC616CL,0UL,-8,0x9EL,1UL,0xAF1E809FL,0x26083B57L,0xFA0F4C75L};
                struct S0 *l_130 = (void*)0;
                struct S0 *l_131 = &l_128;
                l_116 = g_8;
                for (g_87.f0 = 0; (g_87.f0 >= 14); g_87.f0++)
                {
                    int l_123 = 0x61C728F0L;
                    if ((safe_mod_func_uint64_t_u_u(7UL, ((safe_lshift_func_int8_t_s_u(l_123, 2)) | (g_87.f5 != (65535UL | l_123))))))
                    {
                        int **l_125 = &l_124;
                        (*l_125) = l_124;
                    }
                    else
                    {
                        int **l_126 = (void*)0;
                        g_127 = &g_42;
                    }
                }
                l_128 = (*g_86);
                (*l_131) = l_129;
            }
            for (l_128.f6 = 0; (l_128.f6 < 12); l_128.f6 = safe_add_func_int64_t_s_s(l_128.f6, 1))
            {
                int *l_134 = (void*)0;
                int **l_135 = &l_124;
                if ((*p_57))
                    break;
                (*l_135) = l_134;
                (*l_135) = p_57;
                (*g_127) = (((((((&l_128 == &l_71) < (safe_div_func_uint32_t_u_u(l_138, (safe_mul_func_uint16_t_u_u(0x8FA8L, g_87.f1))))) && (l_141 <= p_56)) >= (l_142 == l_144)) > g_87.f4) && p_56) <= p_55);
            }
            if ((safe_mod_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((p_55 || (0xE715EE1BD5518D9DLL != (((*g_127) != (safe_sub_func_int64_t_s_s(((((1L > ((void*)0 == &g_87)) && (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((g_87.f2 > 2UL), p_58)), p_56))) ^ (*l_124)) != p_56), l_157))) != (*g_127)))) & (**l_143)) < g_87.f4), 0x96EE1C10L)), 0UL)) != p_55), 0x0F6B982E9718D2ECLL)))
            {
                int l_172 = 1L;
                int *l_194 = &l_138;
                for (g_87.f1 = 0; (g_87.f1 <= 10); g_87.f1 = safe_add_func_int32_t_s_s(g_87.f1, 5))
                {
                    const struct S0 **l_161 = &g_86;
                    const struct S0 ***l_160 = &l_161;
                    (*l_160) = &g_86;
                    for (p_55 = 0; (p_55 < (-22)); p_55 = safe_sub_func_uint32_t_u_u(p_55, 7))
                    {
                        (*l_143) = &g_31;
                        (*l_143) = (void*)0;
                        (*l_161) = &g_87;
                    }
                }
                for (l_128.f7 = 0; (l_128.f7 != 18); l_128.f7 = safe_add_func_uint64_t_u_u(l_128.f7, 1))
                {
                    struct S0 *l_166 = &l_71;
                    (*l_166) = (*g_86);
                }
                for (l_71.f5 = 0; (l_71.f5 == 2); ++l_71.f5)
                {
                    struct S0 *l_169 = &l_128;
                    int *l_193 = &g_78;
                    (*l_169) = (*g_86);
                    if ((*l_124))
                    {
                        int *l_170 = &g_31;
                        (*l_143) = l_170;
                        (*l_143) = &g_31;
                    }
                    else
                    {
                        (*l_169) = l_171;
                        g_173 = l_172;
                        (*l_91) = (!0L);
                    }
                    if (((g_78 | p_56) != p_58))
                    {
                        g_78 = ((*p_59) || g_87.f6);
                        (**l_142) = (void*)0;
                    }
                    else
                    {
                        (*l_143) = l_124;
                        (*l_169) = l_171;
                        (*l_143) = (void*)0;
                        (*l_169) = (*g_86);
                    }
                    for (p_58 = (-21); (p_58 != 46); p_58 = safe_add_func_int64_t_s_s(p_58, 6))
                    {
                        (*l_91) = (safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_55, ((p_56 && (*p_59)) && (~g_87.f5)))), g_87.f6)), g_78)) && (safe_rshift_func_uint16_t_u_s(g_87.f4, 14))), (safe_lshift_func_int16_t_s_s(((((*l_91) < (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((~g_8), g_42)), g_87.f4))) & l_172) >= l_192), p_56))));
                        p_57 = &g_31;
                        l_194 = l_193;
                    }
                }
            }
            else
            {
                if (((g_87.f1 != (safe_sub_func_int8_t_s_s(3L, ((-10L) != ((safe_mul_func_int16_t_s_s(l_199, (safe_sub_func_uint32_t_u_u(((g_87.f3 & (safe_unary_minus_func_int8_t_s((***l_142)))) && p_55), ((safe_mod_func_int64_t_s_s(p_56, g_87.f4)) & (*p_59)))))) | 0xBE7EL))))) && (*l_124)))
                {
                    short l_213 = 0x452DL;
                    for (l_128.f7 = 0; (l_128.f7 != 19); l_128.f7++)
                    {
                        struct S0 *l_207 = &l_171;
                        struct S0 **l_208 = &l_207;
                        int *l_209 = (void*)0;
                        (*l_208) = l_207;
                        (*l_143) = l_209;
                        (*l_143) = &g_31;
                    }
                    for (p_55 = 21; (p_55 < (-18)); p_55 = safe_sub_func_int16_t_s_s(p_55, 2))
                    {
                        int **l_212 = &g_127;
                        (*l_212) = p_59;
                    }
                    l_213 = (*p_59);
                }
                else
                {
                    const struct S0 l_216 = {0xB1C0CD3EL,5UL,10,0xF7L,18446744073709551608UL,18446744073709551612UL,0xF4D9A014L,1L};
                    struct S0 l_217 = {-1L,0UL,-1,-1L,18446744073709551615UL,18446744073709551615UL,1UL,0x659B8041L};
                    struct S0 *l_218 = &l_171;
                    if ((*p_59))
                    {
                        (**l_142) = &g_42;
                        (*l_91) = 9L;
                        (*g_127) = (255UL | ((safe_lshift_func_uint16_t_u_u(p_55, 9)) <= 0x0DAAL));
                    }
                    else
                    {
                        l_217 = l_216;
                        (**l_142) = &g_31;
                        return p_55;
                    }
                    (*l_218) = l_171;
                    (*l_218) = (*l_218);
                }
                for (l_128.f4 = 0; (l_128.f4 >= 4); ++l_128.f4)
                {
                    struct S0 *l_221 = &l_71;
                    (*l_221) = l_171;
                }
                return p_56;
            }
            (**l_142) = &g_78;
        }
    }
    (*l_222) = l_91;
    return p_56;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f2, "g_87.f2", print_hash_value);
    transparent_crc(g_87.f3, "g_87.f3", print_hash_value);
    transparent_crc(g_87.f4, "g_87.f4", print_hash_value);
    transparent_crc(g_87.f5, "g_87.f5", print_hash_value);
    transparent_crc(g_87.f6, "g_87.f6", print_hash_value);
    transparent_crc(g_87.f7, "g_87.f7", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_433.f0, "g_433.f0", print_hash_value);
    transparent_crc(g_433.f1, "g_433.f1", print_hash_value);
    transparent_crc(g_433.f2, "g_433.f2", print_hash_value);
    transparent_crc(g_433.f3, "g_433.f3", print_hash_value);
    transparent_crc(g_433.f4, "g_433.f4", print_hash_value);
    transparent_crc(g_433.f5, "g_433.f5", print_hash_value);
    transparent_crc(g_433.f6, "g_433.f6", print_hash_value);
    transparent_crc(g_433.f7, "g_433.f7", print_hash_value);
    transparent_crc(g_470.f0, "g_470.f0", print_hash_value);
    transparent_crc(g_470.f1, "g_470.f1", print_hash_value);
    transparent_crc(g_470.f2, "g_470.f2", print_hash_value);
    transparent_crc(g_470.f3, "g_470.f3", print_hash_value);
    transparent_crc(g_470.f4, "g_470.f4", print_hash_value);
    transparent_crc(g_470.f5, "g_470.f5", print_hash_value);
    transparent_crc(g_470.f6, "g_470.f6", print_hash_value);
    transparent_crc(g_470.f7, "g_470.f7", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
