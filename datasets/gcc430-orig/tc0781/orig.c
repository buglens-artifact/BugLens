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
   short f0;
   short f1;
   char f2;
};


static int g_17 = 0L;
static const struct S0 g_60 = {0xD6A5L,0x390AL,0x41L};
static int g_63 = 0xD4EE3B91L;
static struct S0 g_65 = {-6L,-3L,0x46L};
static int *g_89 = &g_63;
static int **g_88 = &g_89;
static struct S0 *g_99 = (void*)0;
static struct S0 * const *g_98 = &g_99;
static const int *g_208 = &g_63;
static int * const *g_220 = &g_89;
static int g_229 = 0x01544EF6L;
static const struct S0 g_246 = {0x3ED1L,0x1DCAL,0x96L};
static const struct S0 *g_348 = &g_65;
static const char g_363 = 0x3AL;
static unsigned g_367 = 0x9179A116L;
static char g_431 = (-1L);
static unsigned short g_631 = 0x1E0AL;



static unsigned short func_1(void);
static int func_2(unsigned p_3, int p_4);
static int func_6(short p_7, int p_8);
static unsigned short func_9(unsigned char p_10, unsigned p_11, char p_12, const int p_13, unsigned p_14);
static const char func_15(short p_16);
static unsigned char func_28(char p_29);
static char func_30(int p_31, unsigned p_32, unsigned p_33, short p_34);
static int * func_43(const int * p_44, unsigned p_45, unsigned p_46);
static char func_52(int p_53);
static int func_57(int * p_58, const struct S0 p_59);
static unsigned short func_1(void)
{
    unsigned l_5 = 3UL;
    unsigned l_537 = 0x98841D4FL;
    unsigned l_658 = 4294967295UL;
    char l_659 = 0x06L;
    int *l_753 = (void*)0;
    struct S0 *l_758 = &g_65;
    char l_764 = (-1L);
    if (func_2(l_5, func_6((func_9((255UL || func_15((l_5 < (g_17 != ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(func_28(((((l_5 != (0xD4AA41A8L != (0x37L > func_30(((safe_rshift_func_uint16_t_u_u(((g_17 && (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((0xCA0CEC51L & l_5), l_5)), g_17)), l_5))) != l_5), 13)) & g_17), g_17, g_17, g_17)))) , g_367) & l_537) >= g_60.f2)), 2)), g_367)) < l_5) , g_65.f0) & 1L) < l_5), 0)) || l_5), 4)) , l_658) <= l_659), g_60.f1)) & l_537))))), g_60.f0, l_659, l_5, l_537) && l_659), l_659)))
    {
        struct S0 l_752 = {0x60F3L,0x6A18L,0x80L};
        l_752 = l_752;
        (*g_88) = l_753;
    }
    else
    {
        unsigned short l_763 = 65529UL;
        int *l_778 = &g_63;
        if ((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((((void*)0 != l_758) | (safe_add_func_uint16_t_u_u((((l_758 != (void*)0) ^ ((safe_add_func_int32_t_s_s(l_763, (((g_17 > (g_17 < (((((+(-1L)) == g_60.f2) , 5UL) > g_363) | (-7L)))) | 0x272FL) , l_763))) ^ l_763)) < 0x9CC346D0L), l_763))) > (-5L)), 4)) >= g_65.f0) != l_764), g_63)))
        {
            unsigned l_765 = 0x0637507DL;
            int *l_766 = &g_63;
            (*l_766) = l_765;
            (*g_88) = l_766;
        }
        else
        {
            int l_771 = 0x64FDAB0BL;
            struct S0 l_776 = {1L,-2L,-3L};
            struct S0 l_777 = {1L,0x8E83L,0xF3L};
            if ((!(g_367 , (safe_mod_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(g_60.f1, l_771)) && (safe_add_func_int16_t_s_s((-1L), func_6((((safe_mod_func_int32_t_s_s((l_771 || func_52(((func_28(l_763) , l_771) >= l_763))), l_771)) && g_229) , g_65.f2), l_763)))) , g_246.f1), l_771)))))
            {
                (*g_88) = func_43(&g_63, (l_776 , 0xBF0A4660L), l_776.f2);
            }
            else
            {
                (*l_758) = l_776;
            }
            (*l_758) = l_777;
        }
        (*g_88) = l_778;
        for (g_63 = 16; (g_63 == 14); --g_63)
        {
            int *l_781 = &g_17;
            unsigned short l_782 = 1UL;
            (*g_88) = l_781;
            if (l_782)
                continue;
            return (*l_778);
        }
        return g_431;
    }
    return l_659;
}







static int func_2(unsigned p_3, int p_4)
{
    struct S0 l_680 = {1L,-10L,-10L};
    struct S0 *l_681 = &g_65;
    int *l_682 = &g_63;
    (*l_681) = l_680;
    (*l_681) = (*l_681);
    (*g_88) = l_682;
    for (g_65.f0 = (-24); (g_65.f0 >= 0); g_65.f0 = safe_add_func_uint32_t_u_u(g_65.f0, 7))
    {
        char l_703 = 0x22L;
        unsigned char l_704 = 0x48L;
        struct S0 *l_740 = &l_680;
        int *l_741 = (void*)0;
        struct S0 **l_746 = &g_99;
        struct S0 ***l_745 = &l_746;
        for (l_680.f0 = (-14); (l_680.f0 != 18); l_680.f0++)
        {
            if (p_3)
                break;
        }
        for (g_63 = (-25); (g_63 <= (-14)); ++g_63)
        {
            int l_705 = 0xEC2916E5L;
            int *l_751 = &g_17;
            for (g_631 = 0; (g_631 <= 9); g_631 = safe_add_func_int8_t_s_s(g_631, 3))
            {
                int l_693 = 0x6EF8C96EL;
                int l_694 = (-10L);
                l_694 = (func_9(((g_65.f1 >= func_15((g_65.f2 | (safe_mod_func_uint16_t_u_u((l_693 , p_3), p_3))))) & (g_246.f0 > (0x38930B4BL >= ((g_60.f1 , 0x59BF525AL) || g_246.f0)))), g_65.f1, p_3, p_4, p_4) <= 0x01L);
                for (l_680.f1 = (-20); (l_680.f1 == 3); l_680.f1 = safe_add_func_uint8_t_u_u(l_680.f1, 1))
                {
                    (*g_88) = func_43(func_43(l_682, (((safe_lshift_func_uint8_t_u_u(251UL, (safe_rshift_func_int8_t_s_u(g_246.f1, (g_229 == ((**g_88) , p_4)))))) > (((safe_lshift_func_int8_t_s_s(p_3, (l_703 != (4294967286UL & (*l_682))))) & p_4) && 0x01A2EABDL)) >= 0xF064DECCL), l_704), l_694, p_3);
                    return l_705;
                }
            }
            for (g_17 = 0; (g_17 > (-14)); g_17--)
            {
                int **l_708 = &g_89;
                struct S0 l_727 = {1L,-3L,1L};
                int l_730 = (-4L);
                (*l_708) = (*g_220);
                if (((-1L) & ((g_246.f0 | (**l_708)) || ((safe_lshift_func_uint8_t_u_u((*l_682), 4)) , (((((func_15(p_4) ^ g_367) | (((((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((-5L), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_3, g_60.f2)), (-4L))) || 0xCEF6L), 7)) == l_703), 3)) >= g_229), g_60.f1)))), g_246.f1)), 0L)) , g_631) <= g_367) <= p_4) < g_65.f1)) == p_4) , p_3) ^ l_703)))))
                {
                    l_730 = (((0x47A88BC5L | l_705) && ((*g_88) == (l_727 , (void*)0))) || (((((*g_98) == (((safe_mul_func_uint8_t_u_u((g_65.f1 ^ l_704), 0x68L)) & g_60.f2) , (*g_98))) , g_17) || p_4) < 0x19F1446CL));
                    return p_4;
                }
                else
                {
                    char l_737 = (-2L);
                    struct S0 *l_738 = &l_680;
                    struct S0 **l_739 = &l_681;
                    (*l_739) = (((0xF0E620C4L == func_9((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(l_705, (((4294967295UL == (g_631 <= (g_363 >= ((l_737 > (g_367 > (((func_15((0xA5L == (-1L))) ^ g_65.f2) | 4294967295UL) , 0xE367L))) || (*l_682))))) <= p_4) ^ (*l_682)))), 7)), g_229, l_703, p_4, p_3)) ^ 0xFF60583FL) , l_738);
                    g_99 = l_740;
                    p_4 = ((+(((void*)0 == l_741) >= 0x2FD3L)) >= (p_4 , ((safe_unary_minus_func_uint8_t_u(l_705)) && (safe_sub_func_int32_t_s_s((**g_88), ((((g_431 , &l_740) != &g_99) & 4UL) != 0x3DF082DDL))))));
                }
            }
            if ((((((((0x74L && (g_65.f1 | (((void*)0 == &g_98) ^ (*l_682)))) , l_745) == &g_98) > (&l_681 != (l_705 , (void*)0))) >= 0x1561442AL) || p_3) < 0L))
            {
                struct S0 l_747 = {0L,0x0F70L,5L};
                l_747 = (*l_740);
            }
            else
            {
                int *l_750 = (void*)0;
                (*l_740) = (*l_681);
                g_17 = ((func_9((((0x828FL | g_63) <= (safe_add_func_uint16_t_u_u((((p_3 , ((void*)0 != &g_220)) & ((0x748FL <= g_63) > p_4)) && 6UL), p_3))) , 254UL), (*l_682), g_246.f1, (*l_682), p_3) >= p_3) && (**g_88));
                (*g_88) = &p_4;
            }
            (*l_751) = 0xC95CE6F8L;
        }
    }
    return p_4;
}







static int func_6(short p_7, int p_8)
{
    const int *l_664 = &g_17;
    unsigned l_667 = 6UL;
    int **l_670 = &g_89;
    int *l_673 = &g_63;
    const struct S0 l_674 = {-1L,0xBC44L,0x14L};
    int **l_679 = &g_89;
    (*g_88) = func_43(l_664, (safe_mod_func_int8_t_s_s(g_60.f1, g_363)), g_65.f1);
    (*g_88) = func_43((*g_88), p_8, ((l_667 , (*l_664)) < (safe_mul_func_uint8_t_u_u((((*l_664) , p_8) || (l_670 == &g_208)), (safe_rshift_func_int16_t_s_s((func_57(l_673, l_674) != p_7), (*l_664)))))));
    (*g_88) = func_43((*g_88), g_65.f0, (*l_673));
    (*l_679) = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((p_7 , p_8), 7)), (**g_220))) , (*g_220));
    return (*l_664);
}







static unsigned short func_9(unsigned char p_10, unsigned p_11, char p_12, const int p_13, unsigned p_14)
{
    int * const l_660 = &g_63;
    int **l_661 = (void*)0;
    int **l_662 = &g_89;
    int * const *l_663 = &g_89;
    (*l_662) = l_660;
    l_663 = &l_660;
    return g_246.f2;
}







static const char func_15(short p_16)
{
    (*g_88) = (void*)0;
    return g_431;
}







static unsigned char func_28(char p_29)
{
    int * const * const *l_542 = &g_220;
    struct S0 l_545 = {-10L,0x472AL,0L};
    int *l_547 = &g_17;
    int *l_548 = &g_63;
    struct S0 **l_553 = &g_99;
    struct S0 l_560 = {0x5A39L,0xBB07L,0L};
    unsigned l_561 = 0xC40D58F6L;
    const struct S0 l_566 = {0xEB9FL,0L,-1L};
    (*l_548) = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_542 == &g_220) , 0xBAL), (p_29 == p_29))), ((safe_add_func_uint8_t_u_u(0xAAL, (l_545 , 0x21L))) , (safe_unary_minus_func_int16_t_s(func_57(l_547, l_545))))));
    (*l_548) = ((((safe_add_func_uint8_t_u_u(g_367, g_65.f1)) >= (0xB66EL ^ ((((safe_add_func_uint8_t_u_u(g_363, g_229)) >= (l_553 != &g_99)) == p_29) <= (safe_lshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((l_560 , 18446744073709551615UL) , l_561) >= 0x203EL), g_431)), g_246.f2)) && p_29) <= (*l_547)), g_65.f0))))) , (*l_547)) < (*l_548));
    (*g_88) = l_548;
    for (l_560.f0 = (-11); (l_560.f0 > 9); l_560.f0 = safe_add_func_int8_t_s_s(l_560.f0, 2))
    {
        unsigned l_586 = 0x7846FB28L;
        const struct S0 l_590 = {-4L,9L,0x1BL};
        const struct S0 l_593 = {0x0E07L,4L,0xEFL};
        const int *l_597 = &g_63;
        int *l_618 = &g_17;
        const struct S0 l_619 = {3L,0L,0x2AL};
        struct S0 l_657 = {0xF989L,0x5978L,-9L};
        (*l_548) = ((((safe_mul_func_uint8_t_u_u(((void*)0 == (*l_542)), ((((***l_542) || func_57((*g_88), l_566)) ^ p_29) ^ ((safe_sub_func_int16_t_s_s((g_60.f2 != g_60.f1), g_60.f2)) != g_363)))) ^ g_367) || (*l_548)) || 0x01E299AFL);
        for (g_431 = 0; (g_431 >= 11); g_431 = safe_add_func_uint32_t_u_u(g_431, 2))
        {
            unsigned short l_573 = 0x6831L;
            const struct S0 l_587 = {0x2708L,0x0AE4L,-1L};
        }
        for (l_561 = 0; (l_561 > 20); ++l_561)
        {
            int l_596 = 9L;
            int *l_634 = &g_63;
            struct S0 l_652 = {0L,0x4DACL,-1L};
        }
    }
    return g_367;
}







static char func_30(int p_31, unsigned p_32, unsigned p_33, short p_34)
{
    int *l_56 = &g_17;
    struct S0 l_67 = {1L,-1L,8L};
    int *l_169 = (void*)0;
    unsigned char l_224 = 255UL;
    unsigned char l_228 = 246UL;
    unsigned l_243 = 1UL;
    const struct S0 l_278 = {-4L,0xE8E7L,0x74L};
    struct S0 **l_395 = (void*)0;
    unsigned l_436 = 0x0070CCFAL;
    int *** const l_454 = &g_88;
    l_169 = func_43(&g_17, (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(((func_52((((safe_add_func_int8_t_s_s(((&g_17 != l_56) != (p_31 && func_57(l_56, g_60))), (*l_56))) , (l_67 , (*l_56))) >= g_60.f2)) , l_56) != l_56))), p_33)), (*l_56))), (*l_56));
    for (l_67.f1 = 7; (l_67.f1 < (-15)); l_67.f1--)
    {
        unsigned char l_174 = 0xBAL;
        const int *l_210 = &g_63;
        int l_216 = (-6L);
        const struct S0 l_227 = {0xC2FDL,0L,-9L};
        unsigned char l_262 = 0x3AL;
        int **l_303 = &g_89;
        for (p_31 = 24; (p_31 >= 18); p_31--)
        {
            short l_180 = 0x1A9EL;
            struct S0 *l_181 = &l_67;
            int *l_251 = (void*)0;
            const int l_277 = 0xA3669614L;
            if ((&g_98 != (void*)0))
            {
                return p_34;
            }
            else
            {
                const int *l_178 = (void*)0;
                int *l_222 = (void*)0;
                const struct S0 l_223 = {0x8A03L,0x9461L,-7L};
                if ((l_174 ^ p_33))
                {
                    struct S0 *l_177 = &g_65;
                    int l_185 = 0x2F59D8B5L;
                    for (p_33 = (-27); (p_33 < 25); p_33 = safe_add_func_uint16_t_u_u(p_33, 3))
                    {
                        struct S0 **l_182 = &l_181;
                        (*l_169) = (((*g_98) == l_177) , p_31);
                        (*g_88) = func_43(l_178, ((safe_unary_minus_func_uint8_t_u(1UL)) > (g_65.f2 , 1L)), l_180);
                        (*l_182) = l_181;
                        (*l_177) = (*l_181);
                    }
                    if ((safe_sub_func_int32_t_s_s(l_185, (*l_169))))
                    {
                        int *l_186 = &g_63;
                        (*g_88) = l_186;
                    }
                    else
                    {
                        (*g_88) = l_169;
                        if (l_174)
                            break;
                        (**g_88) = (((p_32 , &g_89) != &l_169) && ((safe_lshift_func_int16_t_s_u(g_17, 10)) && (((safe_lshift_func_uint8_t_u_s(p_32, 4)) , (safe_rshift_func_uint8_t_u_u(((g_60.f2 | (safe_add_func_uint8_t_u_u(p_34, g_65.f2))) != 0xA776L), 3))) <= (-4L))));
                    }
                    (*g_89) = (*g_89);
                    if ((p_31 == (safe_mul_func_uint8_t_u_u((g_65.f2 <= ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_33, (((safe_mul_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s(((p_34 >= 0x9DC22399L) < p_34), p_34)) >= g_63) || (((safe_mod_func_uint16_t_u_u(g_63, l_180)) || g_65.f2) , p_31)) ^ p_32), g_65.f1)) > g_65.f0) == p_32))), (*l_56))) | l_185)), (*l_56)))))
                    {
                        int *l_207 = &g_63;
                        (*g_88) = l_207;
                        g_208 = l_178;
                    }
                    else
                    {
                        struct S0 l_209 = {-6L,9L,0x2BL};
                        const int **l_211 = &l_210;
                        (*l_177) = l_209;
                        (*l_211) = l_210;
                        (*l_211) = (*g_88);
                    }
                }
                else
                {
                    (*l_169) = 0x57AD140FL;
                    return g_17;
                }
                if ((g_63 , (safe_add_func_uint16_t_u_u((*l_56), (safe_rshift_func_uint16_t_u_u(l_216, p_33))))))
                {
                    for (l_180 = 0; (l_180 > 20); l_180 = safe_add_func_uint32_t_u_u(l_180, 6))
                    {
                        int * const *l_219 = &g_89;
                        struct S0 l_221 = {-1L,0x8DE9L,1L};
                        g_220 = l_219;
                        l_221 = l_67;
                    }
                }
                else
                {
                    return (*l_210);
                }
                if (l_224)
                {
                    struct S0 *l_230 = &g_65;
                    (*g_89) = (safe_add_func_uint32_t_u_u(g_60.f1, ((l_180 != (&g_89 != &g_89)) == (((((((((((func_57(l_169, l_227) <= ((p_33 >= 0x6C622BE4L) >= (-1L))) , l_228) && p_31) ^ 9UL) , 9UL) , l_180) & p_31) > p_32) <= p_33) == g_229) , (*l_210)))));
                    (*l_230) = g_60;
                }
                else
                {
                    unsigned short l_245 = 0x5225L;
                    for (l_216 = 0; (l_216 < (-9)); l_216 = safe_sub_func_int16_t_s_s(l_216, 6))
                    {
                        unsigned l_244 = 0x1B27E7B4L;
                        (*l_169) = (g_60.f1 | (((p_31 > (((g_229 ^ (safe_sub_func_uint32_t_u_u(g_17, (safe_mul_func_int8_t_s_s((((func_57(func_43(func_43(func_43((*g_88), g_65.f2, ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((!((p_32 && ((safe_rshift_func_uint8_t_u_u((*l_210), 5)) >= ((((l_243 == 65534UL) >= 8L) < 0UL) != 2UL))) | g_60.f0)) , p_31), 13)) & 0xDAL) | l_244), l_245)) , 0xAFD96858L)), g_17, p_31), p_31, p_33), g_246) && 1UL) , 0x5BA95721L) | 0x1E720B53L), p_32))))) != 255UL) == p_31)) > l_245) != g_246.f0));
                        return p_33;
                    }
                    for (l_67.f0 = 0; (l_67.f0 <= 4); l_67.f0 = safe_add_func_uint32_t_u_u(l_67.f0, 1))
                    {
                        (**g_220) = p_31;
                    }
                    for (g_65.f0 = 0; (g_65.f0 >= (-13)); --g_65.f0)
                    {
                        struct S0 l_256 = {0x2CF8L,-6L,0xEFL};
                        int **l_257 = &l_169;
                        (*g_88) = func_43(func_43(func_43((*g_88), g_65.f2, g_229), g_60.f2, p_31), ((p_32 | (l_180 < l_180)) <= 1UL), p_31);
                        (*g_88) = l_251;
                        (*g_88) = func_43(l_178, ((safe_lshift_func_int16_t_s_s(p_33, 7)) , ((-3L) ^ ((((safe_mod_func_int8_t_s_s((l_256 , (l_257 != ((((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_262, p_33)), 1UL)) <= (safe_lshift_func_uint16_t_u_u((p_32 < 0x97FDL), p_33))) > g_65.f0) , &g_208))), 0x9DL)) < 0xA94BL) > 0x2867L) & l_245))), g_60.f2);
                    }
                }
                (*g_88) = l_169;
            }
            for (p_33 = (-10); (p_33 < 24); p_33++)
            {
                (*g_88) = func_43(l_251, g_60.f1, (safe_add_func_uint16_t_u_u((g_60.f2 & (+(&g_208 != &l_251))), (((safe_mul_func_uint16_t_u_u(((&g_89 != &l_210) | p_34), ((safe_sub_func_uint32_t_u_u(4294967288UL, p_33)) == p_31))) != p_34) == 65535UL))));
            }
            (*g_88) = func_43(func_43(func_43((*g_88), ((safe_add_func_uint16_t_u_u(((((*l_169) >= g_65.f0) <= g_246.f0) , g_60.f0), p_32)) >= (l_277 > 0x6AL)), p_32), g_60.f2, (*l_210)), g_60.f1, g_229);
            if (func_57((g_60.f2 , (*g_88)), l_278))
            {
                unsigned char l_289 = 255UL;
                (**g_220) = ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_60.f1 > p_33), g_17)), ((safe_rshift_func_int16_t_s_u(((*l_210) || (((l_289 == (*l_169)) == p_31) > ((p_34 > g_65.f0) != 0x5FL))), 10)) <= g_17))), 9UL)), (-2L))) , (*l_56));
                (*l_169) = (safe_lshift_func_int16_t_s_u(g_246.f1, p_32));
                return g_65.f1;
            }
            else
            {
                unsigned char l_300 = 1UL;
                struct S0 l_305 = {0x0F51L,-1L,0L};
                unsigned char l_324 = 0x0AL;
                for (l_67.f0 = 8; (l_67.f0 == 1); --l_67.f0)
                {
                    struct S0 l_304 = {1L,0x767CL,0L};
                    int *l_311 = (void*)0;
                    if ((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_300 < ((safe_mul_func_int16_t_s_s(0xF0B8L, (((l_303 == (void*)0) , (*g_98)) == l_181))) <= func_52((*g_89)))), 2)), p_31)), p_31)))
                    {
                        l_305 = l_304;
                        if (p_33)
                            break;
                    }
                    else
                    {
                        const int l_306 = (-1L);
                        l_311 = (((l_306 , ((l_306 >= ((g_229 <= p_31) || g_246.f0)) , g_229)) ^ (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((*l_56) & l_304.f0), p_34)), l_304.f1))) , l_56);
                        (*l_169) = func_57(func_43(func_43(func_43(l_251, (safe_add_func_uint8_t_u_u(0xE1L, p_32)), (func_57((g_246.f2 , func_43(l_169, (((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((((safe_mod_func_int16_t_s_s((*l_169), ((g_229 > ((safe_add_func_int8_t_s_s(((p_33 && (safe_mod_func_int32_t_s_s(((*l_169) , p_32), p_34))) ^ l_305.f0), l_306)) & 253UL)) || p_32))) >= (*l_169)) < 0x4FL) > p_32) >= g_60.f0) | g_60.f1), g_60.f2)), 6)) && p_34) >= g_65.f0) & l_324) | p_34), p_34)), l_278) , 0xD9544736L)), (*l_311), p_32), p_31, p_34), l_227);
                    }
                    (*g_88) = l_251;
                    return (*l_210);
                }
            }
        }
    }
    if ((safe_mod_func_int32_t_s_s(p_34, (g_65.f1 & p_34))))
    {
        char l_329 = 0x73L;
        const struct S0 l_332 = {0xFADFL,1L,0L};
        (*g_88) = l_56;
        (*l_169) = (safe_mul_func_uint8_t_u_u(((((((((*g_220) == (((l_278 , (*l_169)) , l_329) , func_43(l_56, (safe_lshift_func_int8_t_s_s((func_57(l_169, l_332) | g_246.f1), 5)), l_332.f1))) <= g_60.f2) , g_60.f2) && 0x38L) || p_31) != g_246.f1) & g_246.f1), 0x45L));
    }
    else
    {
        int *l_337 = &g_63;
        struct S0 l_340 = {4L,0xF045L,8L};
        int l_358 = (-10L);
        unsigned char l_368 = 1UL;
        int l_421 = 0x02C88F02L;
        int ***l_453 = (void*)0;
        struct S0 l_487 = {1L,1L,1L};
        (*g_88) = ((4294967295UL <= ((p_32 | 0x06A1L) , (((g_17 , (g_246.f1 > (p_34 < ((-5L) && (0x4898F887L <= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(6UL, 4L)), g_65.f1))))))) != 0xA37591F8L) & 0x4BL))) , l_337);
        if ((*g_89))
        {
            int *l_338 = &g_63;
            struct S0 l_342 = {-6L,0xCCB9L,1L};
            if ((p_31 && (l_338 != (*g_88))))
            {
                struct S0 *l_339 = &g_65;
                int l_341 = 0x9ABDAC23L;
                (*l_339) = l_67;
                (*l_339) = l_340;
                l_341 = 0xAB405F77L;
                if ((*l_169))
                {
                    (*l_338) = p_31;
                    l_342 = l_342;
                }
                else
                {
                    for (p_31 = 0; (p_31 <= (-9)); p_31 = safe_sub_func_uint32_t_u_u(p_31, 7))
                    {
                        return p_31;
                    }
                    (**g_220) = (0UL < 0xE116L);
                }
            }
            else
            {
                struct S0 *l_349 = &l_340;
                for (l_67.f1 = 0; (l_67.f1 == (-2)); --l_67.f1)
                {
                    int *l_347 = (void*)0;
                    (*g_88) = l_347;
                    g_348 = &l_278;
                }
                (*g_88) = (void*)0;
                (*l_349) = (*g_348);
            }
            for (g_65.f1 = 0; (g_65.f1 == (-18)); g_65.f1--)
            {
                int **l_364 = &l_56;
                const int *l_379 = &g_17;
                l_169 = (*g_220);
                for (p_31 = (-17); (p_31 >= 24); ++p_31)
                {
                    unsigned char l_372 = 0xDFL;
                    struct S0 l_381 = {-10L,-8L,0xBAL};
                    for (l_342.f2 = 6; (l_342.f2 == (-24)); l_342.f2 = safe_sub_func_int32_t_s_s(l_342.f2, 9))
                    {
                        (*g_88) = l_337;
                    }
                }
                (*g_88) = (((safe_mul_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(0L, p_31)) , p_32) | (safe_rshift_func_int16_t_s_u(g_246.f0, 0))) != (safe_rshift_func_uint16_t_u_u((g_60.f1 , (0x5C315691L >= (*l_337))), 10))), 7UL)) , ((void*)0 != l_395)) , (void*)0);
            }
            (*g_88) = l_169;
            if ((0x11L < p_34))
            {
                (*g_88) = l_169;
            }
            else
            {
                struct S0 **l_396 = &g_99;
                (*g_88) = (void*)0;
                (*l_396) = (*g_98);
            }
        }
        else
        {
            struct S0 l_399 = {0L,0x5200L,-6L};
            struct S0 * const *l_426 = &g_99;
            if (p_32)
            {
                char l_403 = 3L;
                const int *l_416 = (void*)0;
                if (p_33)
                {
                    struct S0 *l_400 = &g_65;
                    for (p_33 = 0; (p_33 < 50); p_33 = safe_add_func_int8_t_s_s(p_33, 4))
                    {
                        (*g_88) = l_56;
                    }
                    (*l_400) = l_399;
                }
                else
                {
                    const int *l_404 = &g_63;
                    if ((((safe_mul_func_uint16_t_u_u(((l_403 != 0UL) , 6UL), 0x1641L)) < (*l_169)) || 0x4B520F06L))
                    {
                        (*g_88) = (void*)0;
                        (*g_88) = func_43(func_43(l_404, p_32, ((safe_rshift_func_int16_t_s_u(((l_403 , (safe_rshift_func_int16_t_s_s(p_32, 2))) | g_363), (safe_unary_minus_func_int32_t_s((((*l_337) , ((*l_404) >= 7L)) && l_399.f1))))) , p_33)), g_65.f0, g_246.f1);
                        (*g_89) = (safe_lshift_func_uint16_t_u_u(g_60.f1, (g_60.f2 >= (*l_337))));
                    }
                    else
                    {
                        const struct S0 **l_413 = &g_348;
                        const struct S0 ***l_412 = &l_413;
                        (*l_412) = &g_348;
                        (*g_88) = l_56;
                        return g_246.f0;
                    }
                }
                for (p_31 = 0; (p_31 != 14); p_31 = safe_add_func_uint32_t_u_u(p_31, 1))
                {
                    const int **l_417 = &l_416;
                    struct S0 **l_418 = &g_99;
                    (*l_337) = 1L;
                    (*l_417) = l_416;
                    (*l_418) = (*g_98);
                    (*l_337) = (p_34 < (((((*g_348) , (((safe_mod_func_uint32_t_u_u((l_421 || (((safe_mod_func_int32_t_s_s(0L, l_399.f2)) ^ ((void*)0 == l_169)) < (safe_mod_func_uint32_t_u_u(g_65.f1, (**g_220))))), 0x1DA72551L)) >= p_32) , (void*)0)) != l_426) , 7UL) , p_32));
                }
                for (l_399.f2 = 0; (l_399.f2 != 7); l_399.f2 = safe_add_func_int8_t_s_s(l_399.f2, 9))
                {
                    (*l_169) = (safe_rshift_func_int8_t_s_u(g_431, 6));
                    (*g_88) = func_43(&l_421, g_363, g_60.f1);
                    if (p_33)
                        continue;
                    g_65 = (*g_348);
                }
                for (g_65.f0 = 19; (g_65.f0 == 25); g_65.f0++)
                {
                    (*l_169) = (safe_rshift_func_int16_t_s_s(p_34, g_63));
                }
            }
            else
            {
                struct S0 l_443 = {0x45D6L,0x464BL,2L};
                (*l_169) = (((void*)0 == &l_426) , l_436);
                for (l_67.f0 = (-10); (l_67.f0 <= 6); l_67.f0 = safe_add_func_int32_t_s_s(l_67.f0, 5))
                {
                    return g_363;
                }
                for (l_340.f2 = 0; (l_340.f2 != (-14)); l_340.f2--)
                {
                    unsigned char l_447 = 0UL;
                    for (l_224 = (-11); (l_224 >= 47); ++l_224)
                    {
                        struct S0 *l_444 = &l_67;
                        int *l_452 = &g_63;
                        (*l_444) = l_443;
                        (*l_444) = (*g_348);
                    }
                    return l_447;
                }
                (**g_88) = 1L;
            }
        }
        if ((p_33 , ((l_340 , l_453) == (p_33 , l_454))))
        {
            const struct S0 l_458 = {1L,3L,0xA1L};
            int **l_468 = &l_56;
            for (l_340.f2 = 0; (l_340.f2 <= 22); l_340.f2++)
            {
                const struct S0 l_484 = {-9L,0L,2L};
                struct S0 l_493 = {0xC203L,-1L,-3L};
                int * const l_507 = (void*)0;
                int *l_508 = &g_63;
            }
            for (p_32 = 0; (p_32 < 11); ++p_32)
            {
                const struct S0 l_526 = {0xF3A1L,0xCC3BL,0x2DL};
                (*l_337) = (((safe_sub_func_uint32_t_u_u((((p_32 || p_33) , (-1L)) || 1UL), (**l_468))) , p_33) <= 0x30BCL);
            }
            (*l_337) = (g_65.f1 >= ((((*l_337) , (*l_454)) != ((**l_468) , ((*l_337) , l_468))) < (**l_468)));
        }
        else
        {
            struct S0 l_527 = {0x48A8L,0x195BL,9L};
            int *l_534 = &g_63;
            if (p_33)
            {
                l_527 = l_67;
            }
            else
            {
                struct S0 l_528 = {0xEA96L,0x8359L,0xC1L};
                struct S0 *l_529 = &l_67;
                (*l_529) = l_528;
                l_534 = (((g_60.f0 && (g_63 , g_60.f1)) || p_31) , func_43((*g_88), (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_246.f2, p_33)), 2L)), l_528.f0));
                (**l_454) = func_43((**l_454), (((((*l_337) <= (((g_363 , ((1L == (l_528.f2 & (safe_mul_func_int8_t_s_s(p_33, g_246.f0)))) >= ((0x5127L >= 0UL) <= l_528.f1))) & p_33) <= g_60.f2)) & p_32) > l_528.f2) , 18446744073709551608UL), g_229);
            }
        }
        (*g_88) = func_43(func_43((**l_454), g_367, p_31), g_246.f1, p_31);
    }
    return g_246.f2;
}







static int * func_43(const int * p_44, unsigned p_45, unsigned p_46)
{
    int *l_168 = &g_63;
    return l_168;
}







static char func_52(int p_53)
{
    const struct S0 l_80 = {8L,0x33DFL,-1L};
    int *l_87 = &g_17;
    int **l_86 = &l_87;
    unsigned short l_121 = 0xBD3DL;
    if ((0xB8L && g_65.f1))
    {
        return p_53;
    }
    else
    {
        for (g_65.f1 = 19; (g_65.f1 < (-23)); g_65.f1 = safe_sub_func_uint32_t_u_u(g_65.f1, 5))
        {
            int *l_70 = &g_63;
            (*l_70) = 0xC24175C8L;
        }
    }
    if ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_53, 4)), 0xDA4AA2EEL)), (safe_unary_minus_func_uint16_t_u(0xC91EL)))))
    {
        int *l_79 = (void*)0;
        int **l_78 = &l_79;
        (*l_78) = (void*)0;
    }
    else
    {
        int *l_81 = &g_63;
        struct S0 *l_97 = (void*)0;
        struct S0 **l_96 = &l_97;
        int *l_100 = &g_17;
        struct S0 l_123 = {-4L,0L,-10L};
        char l_145 = 0x49L;
        unsigned short l_148 = 0x1598L;
        (*l_81) = func_57(&g_17, l_80);
        (**g_88) = ((((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_53, (l_86 != (g_60.f0 , g_88)))), (safe_lshift_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(p_53, 12)), (*l_87))) , (g_65 , l_96)) == g_98) >= (-1L)), 11)))) || 0x415234D5L) < p_53) , (**l_86));
        if ((*g_89))
        {
            unsigned short l_111 = 9UL;
            int *l_131 = &g_17;
            struct S0 l_142 = {0x4D05L,0x2AB3L,-1L};
            const struct S0 *l_166 = &g_65;
            const struct S0 **l_165 = &l_166;
            (**g_88) = (p_53 , 0x839B4770L);
            if (p_53)
            {
                short l_101 = 0x0122L;
                int *l_102 = &g_17;
                const struct S0 l_120 = {0xABF9L,0L,-10L};
                struct S0 l_124 = {0xD4BAL,1L,0x95L};
                if ((func_57(l_100, l_80) , l_101))
                {
                    const struct S0 l_103 = {0L,0L,0x61L};
                    struct S0 **l_125 = &g_99;
                    struct S0 ***l_126 = &l_96;
                    (**g_88) = (func_57(l_102, l_103) | ((*l_87) & (((0x15L & p_53) & (((safe_lshift_func_uint16_t_u_s((*l_102), 4)) , (((safe_add_func_int16_t_s_s(g_17, (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(((((((g_60.f1 && 0L) <= g_60.f0) >= (*l_102)) >= (-4L)) & g_60.f1) | p_53))) <= 4294967287UL), g_60.f1)))) > p_53) < l_111)) , g_60.f2)) & 0xD4L)));
                    if ((p_53 > (((((g_60.f0 , ((*l_96) != (*l_96))) || (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((l_103 , (g_60.f1 , (((-5L) == (safe_add_func_uint32_t_u_u(func_57((*l_86), l_120), 0xDC093C88L))) , g_60.f0))), 0xD1L)), (*l_100))), (*l_87)))) && l_121) & 0x5B7EE776L) == (-10L))))
                    {
                        struct S0 l_122 = {0L,0x8E40L,2L};
                        (*g_89) = (*g_89);
                        (*l_86) = (*g_88);
                        l_123 = l_122;
                    }
                    else
                    {
                        g_65 = l_80;
                        l_124 = l_120;
                        (*g_88) = (*g_88);
                    }
                    (*l_126) = l_125;
                    (*g_89) = (safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s(func_57(l_131, ((safe_sub_func_int8_t_s_s((g_65.f1 < p_53), (safe_sub_func_uint16_t_u_u(((((*l_81) , 0x0ABAL) < p_53) , (((((safe_mod_func_int16_t_s_s((*l_102), (*l_87))) , ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(p_53, 1UL)), 3)) < g_60.f2)) , g_63) & p_53) == g_65.f0)), g_63)))) , l_80)), 5)) ^ g_60.f0) & (*l_102)) | g_60.f1), g_60.f1));
                }
                else
                {
                    struct S0 *l_143 = (void*)0;
                    struct S0 *l_144 = &l_124;
                    (*l_81) = (g_65.f2 & ((*l_96) != &l_80));
                    (*l_144) = l_142;
                    (*l_86) = (*l_86);
                    p_53 = (*g_89);
                }
            }
            else
            {
                if ((l_145 && func_57(&p_53, g_60)))
                {
                    (**g_88) = (safe_sub_func_int16_t_s_s(func_57((*g_88), l_80), ((-8L) != p_53)));
                }
                else
                {
                    const struct S0 l_161 = {0xA91CL,0x8AAAL,1L};
                    if ((l_148 <= (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((*l_87), (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x6EL, (g_60.f2 || (safe_mul_func_uint16_t_u_u(((g_60.f1 || func_57(&p_53, (p_53 , (((safe_mul_func_uint16_t_u_u(g_60.f2, g_60.f0)) ^ p_53) , l_161)))) , 0x9334L), p_53))))), 1UL)))) && g_60.f1), 4))))
                    {
                        struct S0 l_162 = {-2L,0x6BBBL,0L};
                        l_162 = l_142;
                        (*l_86) = (*l_86);
                        (*g_88) = &p_53;
                    }
                    else
                    {
                        struct S0 l_163 = {0xB29EL,0x41F7L,-6L};
                        struct S0 *l_164 = &g_65;
                        (*l_86) = &p_53;
                        g_65 = l_142;
                        (*l_164) = l_163;
                    }
                }
                (*l_81) = 0x4005F240L;
                (*l_81) = (*l_81);
            }
            (*l_165) = (g_60.f0 , &l_80);
        }
        else
        {
            int *l_167 = &g_63;
            (*g_88) = l_167;
        }
    }
    g_65 = l_80;
    return p_53;
}







static int func_57(int * p_58, const struct S0 p_59)
{
    int * const l_61 = &g_17;
    int *l_62 = &g_63;
    struct S0 *l_64 = &g_65;
    struct S0 **l_66 = &l_64;
    (*l_62) = (l_61 != p_58);
    (*l_62) = (&g_17 == l_61);
    (*l_64) = p_59;
    (*l_66) = l_64;
    return (*p_58);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_65.f2, "g_65.f2", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
