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
   unsigned short f0;
   unsigned short f1;
   unsigned long long f2;
   long long f3;
   short f4;
   int f5;
   unsigned f6;
   unsigned f7;
   int f8;
   short f9;
};


static unsigned g_6 = 0x1E948708L;
static struct S0 g_11 = {0xDFD9L,1UL,1UL,0x1EEFB6F65E790E86LL,0x896EL,1L,4294967295UL,0x263D1880L,0L,0x038EL};
static struct S0 *g_10 = &g_11;
static int *g_35 = (void*)0;
static char g_84 = (-1L);
static struct S0 g_94 = {65528UL,65527UL,0xC16C4145F50B00A4LL,0L,-1L,0xC9E73302L,4294967287UL,0x5E52939AL,0x9A9C08A9L,0x624BL};
static unsigned long long g_182 = 18446744073709551609UL;
static int *g_244 = &g_11.f8;
static int **g_329 = (void*)0;
static struct S0 ***g_384 = (void*)0;
static struct S0 g_387 = {3UL,65528UL,0x3748EF549C92E23FLL,0x3F4FC39AEE4F8E2ELL,-1L,1L,4294967295UL,1UL,0x8E118DF4L,0L};
static short g_515 = 0xCD3FL;
static int **g_516 = &g_35;
static struct S0 *g_703 = &g_11;
static struct S0 **g_702 = &g_703;
static short g_708 = 3L;
static int *g_761 = &g_94.f8;
static struct S0 **g_801 = &g_703;



static unsigned short func_1(void);
static int * func_12(int p_13, long long p_14);
static unsigned short func_16(short p_17, long long p_18);
static unsigned short func_21(struct S0 ** p_22, struct S0 ** p_23);
static unsigned func_27(int p_28, struct S0 ** p_29, int * p_30, struct S0 p_31, long long p_32);
static unsigned short func_42(struct S0 ** p_43, unsigned char p_44);
static struct S0 func_45(struct S0 * p_46, int * p_47, char p_48, short p_49, unsigned short p_50);
static int * func_52(int * p_53, int p_54, int * p_55, unsigned p_56, struct S0 ** p_57);
static unsigned func_61(struct S0 * p_62, struct S0 p_63);
static struct S0 * func_65(int p_66);
static unsigned short func_1(void)
{
    int l_7 = (-1L);
    struct S0 **l_767 = &g_703;
    int *l_768 = &g_387.f8;
    long long l_786 = 0x3F95ADD1197D22F8LL;
    struct S0 *l_795 = &g_94;
    if ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_6, l_7)), g_6)))
    {
        struct S0 *l_8 = (void*)0;
        struct S0 **l_9 = (void*)0;
        int l_15 = (-10L);
        g_10 = l_8;

        ;
        (*g_516) = func_12((l_15 > (l_15 && func_16(((safe_mul_func_int8_t_s_s(((&g_10 != (void*)0) ^ func_21(&g_10, &g_10)), (!g_387.f8))) >= l_15), l_15))), g_182);

        ;

        l_15 = (g_387.f6 && g_94.f5);
    }
    else
    {
        int l_796 = (-2L);
        struct S0 **l_802 = &g_10;
        char l_849 = 0xA4L;
        if ((0xBFD8L >= (safe_mod_func_int16_t_s_s(func_27(l_7, l_767, l_768, (**l_767), (g_94.f1 != (g_11.f5 == (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(g_94.f9, (+(!((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_94.f8, g_387.f2)), 0x06D7L)) != (*l_768)))))), 4))))), (*l_768)))))
        {
            short l_777 = 0x818AL;
lbl_799:
            (*l_768) = ((l_777 < ((safe_div_func_int16_t_s_s(((!((safe_mod_func_int32_t_s_s((g_387.f8 != (safe_mod_func_int64_t_s_s((g_515 || (safe_rshift_func_int16_t_s_s(l_786, 2))), ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((*g_244) && ((((func_61(l_795, (**l_767)) > l_796) > (*l_768)) , 1L) >= (*l_768))) ^ g_11.f3), 0xD8903F8DL)), l_777)), g_11.f4)) , 7L)))), 0xBB555F60L)) && g_11.f4)) && (*l_768)), g_11.f4)) >= (*g_761))) , l_777);
            for (g_387.f0 = (-27); (g_387.f0 != 33); g_387.f0++)
            {
                struct S0 **l_800 = &g_703;
                if (g_94.f6)
                    goto lbl_799;
            }
        }
        else
        {
            struct S0 **l_811 = &g_10;
            unsigned short l_813 = 0x8740L;
            unsigned char l_814 = 0xB8L;
            if (l_796)
            {
                for (g_11.f5 = 28; (g_11.f5 == 19); g_11.f5 = safe_sub_func_uint64_t_u_u(g_11.f5, 6))
                {
                    struct S0 ***l_812 = &l_802;
                    (*g_516) = (*g_516);
                    (*l_812) = l_811;
                    return g_515;
                }
                (*g_761) = l_813;
            }
            else
            {
                struct S0 l_822 = {8UL,65527UL,0x6E58900ABF55A4D5LL,0x15F6FDEE6C4DBD2BLL,6L,0x6335FBEDL,0x03E25679L,0x4F662070L,0xE9978D69L,0x9F0CL};
                (**g_702) = l_822;
            }
            (*g_516) = &l_7;

            ;
            (*g_516) = &l_7;
        }

        ;
        ;
        ;
        if (func_21(l_802, &g_10))
        {
            int **l_823 = &l_768;
            int ***l_824 = &g_329;
            (*l_824) = l_823;

            ;
            for (g_387.f2 = 0; (g_387.f2 >= 51); g_387.f2 = safe_add_func_uint64_t_u_u(g_387.f2, 1))
            {
                unsigned short l_827 = 0x1AC2L;
                (*g_702) = func_65(l_827);

                ;
            }

            ;
        }
        else
        {
            short l_835 = 1L;
            for (g_11.f1 = 3; (g_11.f1 > 25); g_11.f1 = safe_add_func_int8_t_s_s(g_11.f1, 8))
            {
                struct S0 *l_830 = &g_387;
                (*g_516) = &l_796;

                ;
                l_830 = (void*)0;

                ;
                if ((*g_761))
                    continue;
            }

            ;
            (*l_768) = ((*l_795) , ((safe_mod_func_uint8_t_u_u((safe_div_func_int64_t_s_s(g_387.f2, g_11.f2)), 0x39L)) ^ l_835));
        }

        ;
        ;
        ;
        ;
        ;
        if (((*l_802) == (void*)0))
        {
            l_796 = (*l_768);
            (*l_795) = (*l_795);
        }
        else
        {
            struct S0 **l_838 = &g_10;
            int l_841 = 0x8CD3AB20L;
            struct S0 l_848 = {9UL,0x1DBDL,18446744073709551615UL,-2L,1L,-5L,4294967289UL,1UL,-1L,0x0686L};
            short l_850 = 0L;
            (*g_516) = ((((safe_rshift_func_int16_t_s_u(g_387.f2, g_708)) , (((*l_768) >= (safe_mul_func_uint16_t_u_u(l_841, (safe_rshift_func_int8_t_s_s(func_16((g_11 , ((g_11.f3 > ((l_848 , (void*)0) == &l_795)) ^ g_6)), l_848.f8), l_849))))) || l_850)) == 0x531C1717L) , (void*)0);

            ;
            ;
        }
    }

    ;


    ;
    ;
    return (*l_768);




}







static int * func_12(int p_13, long long p_14)
{
    char l_612 = 0xABL;
    struct S0 l_613 = {2UL,1UL,0xB2F76C1A781E5DA2LL,0x5ECE439F37FD8511LL,1L,0x8C605CA0L,5UL,4294967292UL,-7L,-9L};
    struct S0 *l_614 = &g_387;
    int *l_615 = &l_613.f5;
    int l_625 = (-7L);
    char l_660 = 3L;
    unsigned l_733 = 0x677C8B07L;
    int *l_762 = &g_11.f8;
    (*l_614) = (l_612 , l_613);
    (*l_614) = (*l_614);
    l_615 = &p_13;

    ;
    if (p_14)
    {
        struct S0 **l_618 = &g_10;
        struct S0 l_619 = {0x176FL,0x6071L,0x79076F7B238CE6CALL,0xD49A671E8D138635LL,0x8BFAL,0x9124EC93L,0xEE845714L,0x58AA541AL,-4L,0L};
        int *l_624 = &l_613.f8;
        if ((safe_add_func_uint64_t_u_u((*l_615), p_13)))
        {
            int *l_628 = &g_387.f8;
            for (l_619.f3 = 0; (l_619.f3 == 15); ++l_619.f3)
            {
                (*g_516) = (void*)0;

                ;
                l_615 = (void*)0;

                ;
            }

            ;
            (*g_516) = l_628;

            ;
        }
        else
        {
            struct S0 ***l_629 = (void*)0;
            struct S0 ***l_630 = &l_618;
            int **l_631 = &g_244;
            (*l_630) = &l_614;

            ;
            (*l_624) = ((&g_35 != l_631) || (-8L));
            for (g_11.f3 = 15; (g_11.f3 == 0); --g_11.f3)
            {
                (*l_631) = &p_13;

                ;
                (**l_631) = (&l_624 != &g_35);
                (*l_615) = p_13;
            }

            ;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        int *l_637 = &g_11.f8;
        struct S0 **l_639 = &l_614;
        unsigned short l_752 = 0xEE39L;
        for (g_11.f1 = 0; (g_11.f1 < 14); g_11.f1 = safe_add_func_int8_t_s_s(g_11.f1, 5))
        {
            unsigned l_636 = 6UL;
            int *l_638 = &g_94.f5;
            if ((g_11.f6 < l_636))
            {
                (*g_516) = func_52(l_637, g_387.f8, l_638, g_6, l_639);

                ;
                return l_637;


            }
            else
            {
                int *l_640 = (void*)0;
                return l_640;


            }
        }
        p_13 = p_13;
    }

    ;
    ;
    ;
    return (*g_516);



}







static unsigned short func_16(short p_17, long long p_18)
{
    int *l_607 = &g_11.f8;
    struct S0 l_610 = {0x3746L,0xCA57L,0xC479AD8A72D1DDE1LL,-6L,-1L,0L,0xF6D6E811L,1UL,0x88DFF8B0L,1L};
    struct S0 *l_611 = &g_94;
    (*l_607) = (g_6 ^ (g_515 | (((safe_mod_func_uint64_t_u_u((l_607 != ((func_61((func_61(func_65((((p_18 != ((*l_607) , g_94.f4)) && (safe_mul_func_uint8_t_u_u((p_17 < (*l_607)), ((*l_607) != 4L)))) > 0x4B8DL)), l_610) , l_611), (*l_611)) != 0xC5L) , l_607)), (*l_607))) < (*l_607)) < g_387.f9)));

    ;
    return g_387.f4;
}







static unsigned short func_21(struct S0 ** p_22, struct S0 ** p_23)
{
    int l_24 = 0x9209A488L;
    unsigned char l_33 = 0UL;
    struct S0 **l_34 = &g_10;
    int l_430 = 0x9268EE25L;
    int **l_444 = &g_35;
    long long l_458 = 1L;
    int *l_459 = &l_430;
    struct S0 l_588 = {0x6840L,0x0432L,0UL,0x36D9E5D8F2C813C6LL,-1L,0x68D2B08EL,6UL,0x38B28CCFL,0x4CD4F6D2L,0xCEE0L};
    if ((l_24 > (safe_sub_func_uint16_t_u_u((1L || ((0x4CL > (func_27(l_33, l_34, g_35, g_11, l_33) && l_24)) | 0UL)), g_84))))
    {
        int l_428 = 0xD83F40E0L;
        struct S0 l_429 = {0UL,65531UL,0x139E0D042617E67ELL,0x7F53882F0685F3AALL,0x375BL,0x328C70E8L,0UL,4UL,3L,-1L};
        struct S0 ***l_431 = &l_34;
        l_430 = (l_24 == func_61((*l_34), ((safe_div_func_uint16_t_u_u(0x86BFL, l_428)) , l_429)));

        ;
        (*l_431) = p_23;

        ;
    }
    else
    {
        unsigned long long l_432 = 1UL;
        struct S0 l_454 = {0x3390L,0x2BD2L,18446744073709551614UL,0x6AE049224FCD6222LL,0L,0xBFB7852BL,0x3175C0B0L,0UL,-1L,0xED6AL};
        unsigned l_455 = 4294967295UL;
        unsigned short l_456 = 0UL;
        struct S0 **l_457 = &g_10;
        int ***l_469 = &g_329;
        unsigned short l_476 = 0UL;
        short l_506 = (-5L);
        if ((~(&g_244 != (void*)0)))
        {
            return l_432;
        }
        else
        {
            long long l_439 = 1L;
            struct S0 l_445 = {0x2226L,0UL,0UL,0x2C03883EED2C2E40LL,0xCC0AL,0xF503F2EEL,0xF4AF103DL,0x8EF343B4L,0x97CFD824L,0x1799L};
            unsigned long long l_446 = 18446744073709551615UL;
            int ***l_470 = (void*)0;
            long long l_471 = 0x0F04963824A99931LL;
            int *l_581 = &g_387.f5;
            struct S0 *l_593 = (void*)0;
            struct S0 **l_592 = &l_593;
            (*l_444) = ((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((((p_22 != p_22) <= (safe_lshift_func_int8_t_s_u(l_439, 7))) || ((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((((l_439 > (((void*)0 == l_444) < g_11.f4)) >= 0x6262D24CL) || (l_445.f8 <= g_387.f2)) >= l_432), l_446)) && l_445.f5), 0xD11457FEL)) | l_445.f9)), 0xBC32EE872010BABCLL)), l_446)) , (void*)0);

            ;
            if (((g_94.f7 == ((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(l_439, (((safe_add_func_uint16_t_u_u((func_61((*p_23), g_94) || (func_61(&l_445, l_454) && func_61(&l_454, l_454))), g_94.f3)) <= l_455) , l_456))) ^ l_454.f8) <= l_445.f5) ^ g_387.f7), g_387.f9)) >= l_445.f4))) >= (-1L))) , l_454.f1))
            {
                unsigned long long l_460 = 0x791FC156400917E9LL;
                int ***l_482 = (void*)0;
                unsigned long long l_514 = 1UL;
                long long l_517 = 0xA0AFD5F46ADF3B0FLL;
                struct S0 *l_528 = (void*)0;
                struct S0 l_529 = {0x67C4L,1UL,18446744073709551608UL,-1L,1L,0xF38E4DFDL,4294967288UL,6UL,1L,0x2AA7L};
                g_244 = (g_94.f6 , (*l_444));

                ;
                for (g_11.f1 = 0; (g_11.f1 != 36); g_11.f1 = safe_add_func_uint8_t_u_u(g_11.f1, 1))
                {
                    unsigned short l_481 = 65535UL;
                    struct S0 l_490 = {0x7CD5L,65535UL,0x3C0A804C3BB1E18ALL,1L,0x1DB0L,0x4C4ABF24L,1UL,0x319FE0B8L,0x5D67B613L,1L};
                    int *l_492 = &l_490.f8;
                    if ((safe_mul_func_uint8_t_u_u((((l_476 & ((((*l_459) & l_460) && (safe_div_func_int16_t_s_s(g_11.f7, g_387.f4))) & (safe_add_func_int64_t_s_s(((g_11 , g_94.f4) == 0L), l_481)))) , 0x99D877BFL) ^ 5UL), 1L)))
                    {
                        long long l_487 = 0x776E0CA82F3B43DELL;
                        int *l_491 = &l_490.f8;
                        struct S0 l_499 = {4UL,0xB6BCL,1UL,0xCD458C3951D44C46LL,0x1246L,0x7E490DEBL,0xBAB7EF2FL,0x9672C573L,0x05EB7875L,-8L};
                        struct S0 *l_500 = &g_94;
                        (*l_459) = func_61(func_65((&g_329 != l_482)), l_490);
                        if ((*l_459))
                            break;
                        (*l_444) = l_491;

                        ;
                        (*l_500) = l_499;
                    }
                    else
                    {
                        unsigned l_503 = 18446744073709551606UL;
                        struct S0 *l_509 = &g_11;
                        (*l_492) = (safe_mod_func_uint32_t_u_u((((l_503 , (safe_sub_func_uint64_t_u_u(((l_506 , ((((safe_div_func_int8_t_s_s(func_61(l_509, l_490), (safe_mod_func_uint16_t_u_u(l_503, g_94.f3)))) || g_11.f4) , 0x2BC42BA4L) < l_503)) & g_11.f7), 0x31099D7967F707F6LL))) ^ 0xEBL) >= 0UL), l_503));
                        (*l_459) = ((*l_492) || (safe_lshift_func_int8_t_s_u(((l_503 | g_387.f3) || (l_514 < (((((((void*)0 == &g_244) , l_503) < (*l_459)) , g_94.f7) , g_387.f3) , g_387.f5))), 3)));
                        (*l_492) = ((g_516 != (((*l_492) >= ((((l_503 >= g_11.f6) , l_517) , (safe_lshift_func_int8_t_s_s((l_503 && (((((void*)0 == l_482) , g_11.f0) == 0L) < g_11.f3)), 2))) > 0x637AF20FL)) , (void*)0)) | (*l_492));
                    }


                    for (l_445.f3 = (-20); (l_445.f3 <= (-7)); l_445.f3 = safe_add_func_int32_t_s_s(l_445.f3, 8))
                    {
                        int *l_522 = &l_430;
                    }
                }


                for (g_11.f5 = 0; (g_11.f5 != 10); ++g_11.f5)
                {
                    if (l_454.f6)
                    {
                        unsigned l_530 = 4UL;
                        (*g_516) = g_244;

                        ;
                        (*l_459) = ((safe_unary_minus_func_int64_t_s(func_61(l_528, l_529))) <= l_530);
                        (*g_516) = (*l_444);
                        (*g_516) = (*l_444);
                    }
                    else
                    {
                        struct S0 *l_531 = &l_445;
                        (*l_459) = 0x77FE7724L;
                        (*l_531) = g_94;
                        (*l_444) = &l_430;

                        ;
                    }

                    ;
                    if ((*l_459))
                        break;
                    for (g_6 = 2; (g_6 > 52); g_6++)
                    {
                        int *l_534 = &g_11.f5;
                        (*g_516) = (*g_516);
                        (*l_444) = l_534;

                        ;
                        (*g_516) = l_534;
                    }

                    ;
                    l_445 = l_445;
                }


            }
            else
            {
                int l_539 = 0L;
                int l_580 = (-4L);
                struct S0 l_591 = {1UL,0x04BEL,18446744073709551615UL,9L,1L,0L,0x264E7C95L,0x5A083DC5L,0xE2713057L,-5L};
                int *l_598 = &g_387.f5;
                if ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((g_11.f9 , (l_539 && l_539)), (safe_rshift_func_uint8_t_u_u(((~(safe_mul_func_int16_t_s_s((((l_539 != 1UL) , (safe_lshift_func_int16_t_s_s(l_439, g_11.f4))) >= 0xE26E25F6L), g_11.f4))) >= (*l_459)), 5)))), g_11.f4)))
                {
                    struct S0 *l_550 = (void*)0;
                    int l_557 = 0x7173AD7CL;
                    struct S0 ***l_558 = &l_34;
                    l_454 = g_387;
                    (*l_459) = l_557;
                    (*l_558) = p_22;

                    ;
                }
                else
                {
                    unsigned long long l_563 = 4UL;
                    struct S0 *l_578 = &l_454;
                    (*g_516) = (*g_516);
                    if (l_446)
                        goto lbl_579;
lbl_579:
                    (*l_459) = (g_94.f9 <= ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((((l_563 , g_11.f7) ^ ((safe_mul_func_int8_t_s_s(g_94.f9, (safe_div_func_int16_t_s_s(((!((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_456 <= (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(func_61(l_578, (*l_578)), ((((0xE512FA11L <= 0xFCCE8B3CL) == g_182) , l_539) || 1UL))) && g_387.f2), g_182))), 1UL)), 6L)), 5UL)) , l_563)) < 0xECFB9E38L), 1L)))) >= l_563)) , l_539) | (*l_459)), l_445.f2)) < (*l_459)), l_563)) < l_563));
                    if (l_563)
                    {
                        int *l_582 = &l_454.f8;
                        (*g_516) = (l_580 , l_581);

                        ;
                        (*l_444) = l_582;

                        ;
                    }
                    else
                    {
                        unsigned long long l_587 = 0xD6D98BF08B0E00B5LL;
                        (*l_444) = ((*l_459) , (void*)0);
                        (*l_578) = l_588;
                        (*l_444) = (*g_516);
                    }

                    ;
                    for (l_476 = (-23); (l_476 <= 2); l_476 = safe_add_func_uint8_t_u_u(l_476, 7))
                    {
                        (*l_581) = ((safe_add_func_int16_t_s_s((l_598 != (void*)0), (*l_581))) , (safe_lshift_func_int16_t_s_s(l_454.f0, g_387.f6)));
                        (*l_598) = (*l_581);
                        if (l_563)
                            continue;
                    }
                }

                ;
                ;
            }

            ;
            ;

        }

        ;
        ;

        for (l_454.f9 = 0; (l_454.f9 < 23); ++l_454.f9)
        {
            for (g_11.f4 = 0; (g_11.f4 < 4); g_11.f4 = safe_add_func_uint16_t_u_u(g_11.f4, 3))
            {
                if ((*l_459))
                    break;
                (*g_516) = (void*)0;

                ;
            }
        }
        (*l_444) = (void*)0;

        ;
    }

    ;

    return g_387.f8;
}







static unsigned func_27(int p_28, struct S0 ** p_29, int * p_30, struct S0 p_31, long long p_32)
{
    struct S0 *l_51 = &g_11;
    int *l_60 = &g_11.f8;
    int *l_355 = (void*)0;
    struct S0 l_361 = {65531UL,0x1FCFL,0xB7493E852797F1FALL,0x0CE07EB1FF3E3909LL,7L,0L,0xDEF63977L,0xED7C35F5L,5L,0x7469L};
    int ***l_381 = &g_329;
    unsigned char l_402 = 0xF0L;
    if ((safe_sub_func_int16_t_s_s(0x373CL, ((safe_lshift_func_uint8_t_u_s(((p_31.f6 >= 0UL) != g_11.f3), 1)) >= ((safe_rshift_func_uint16_t_u_s(func_42((func_45(l_51, func_52(((safe_lshift_func_uint16_t_u_s(g_11.f8, 3)) , (void*)0), p_31.f4, l_60, p_31.f9, &g_10), g_11.f6, g_11.f3, p_32) , &l_51), p_31.f6), g_11.f3)) <= g_11.f3)))))
    {
        char l_269 = (-3L);
        struct S0 l_299 = {0x925BL,65526UL,18446744073709551610UL,0L,0xB6AEL,3L,0xDEEC54CDL,0x7756C69EL,0L,0xC31CL};
        int *l_307 = &l_299.f8;
        unsigned l_352 = 18446744073709551615UL;
lbl_277:
        l_269 = 0x47154698L;
        for (g_11.f1 = 0; (g_11.f1 < 59); g_11.f1++)
        {
            unsigned long long l_276 = 0xB0E516BA491E4C79LL;
            (*g_244) = ((safe_mul_func_int16_t_s_s((l_269 , 1L), p_31.f6)) && (p_31.f7 == (p_31.f1 > ((safe_mul_func_uint8_t_u_u(l_276, 0x8DL)) != 0xB431L))));
            (*p_29) = &g_11;
            if (g_11.f8)
                goto lbl_277;
        }
        if (((safe_lshift_func_uint8_t_u_u(g_6, 4)) > l_269))
        {
            long long l_280 = 6L;
            (*g_244) = l_280;
        }
        else
        {
            struct S0 l_289 = {0x7A2BL,65534UL,0xF4F6CBA468E9773BLL,-3L,-1L,0x3E516917L,0UL,0xF87003E3L,0x35331CA1L,0x8B28L};
            int *l_290 = &l_289.f5;
            short l_302 = 7L;
            struct S0 **l_309 = &l_51;
            for (p_31.f3 = (-24); (p_31.f3 >= (-2)); p_31.f3 = safe_add_func_int16_t_s_s(p_31.f3, 6))
            {
                unsigned short l_288 = 0xB0E2L;
                int *l_291 = &g_94.f8;
                int ***l_305 = (void*)0;
                struct S0 l_322 = {0xE3B7L,0xC428L,0x57DCD74454D5258DLL,-7L,4L,7L,0UL,4294967295UL,1L,-1L};
                (*g_244) = (*g_244);
                if ((*l_60))
                    continue;
            }
            (*g_244) = (3UL == ((((((**l_309) , (p_31.f7 , (((((l_299 , 4294967295UL) || (*g_244)) > (0x7249L == ((g_329 != (void*)0) != p_32))) , g_11.f9) | 0x51L))) , g_11.f4) , g_6) , &g_244) != &l_60));
            for (p_31.f6 = 0; (p_31.f6 != 23); p_31.f6 = safe_add_func_uint8_t_u_u(p_31.f6, 3))
            {
                unsigned char l_342 = 0x8EL;
                int l_354 = 0xD12EB80CL;
                for (l_299.f1 = 0; (l_299.f1 == 33); l_299.f1 = safe_add_func_int32_t_s_s(l_299.f1, 6))
                {
                    short l_336 = (-4L);
                    int *l_337 = &l_299.f5;
                }
                for (l_299.f2 = 0; (l_299.f2 > 34); l_299.f2 = safe_add_func_int64_t_s_s(l_299.f2, 8))
                {
                    unsigned long long l_351 = 0x7111350BEF6F8E7ALL;
                    int **l_353 = &g_35;
                    struct S0 l_360 = {2UL,0xB72DL,0x7DDEF10342B1AC3CLL,0x8392EB8E7512D4A1LL,8L,-2L,4294967294UL,0xDFB49962L,-1L,0xD19EL};
                    (*l_353) = func_52(func_52(p_30, (((safe_mod_func_int32_t_s_s(p_31.f0, 1UL)) == ((g_84 <= g_84) > 5L)) , ((*l_290) | l_351)), l_290, l_352, p_29), p_31.f1, l_307, (*l_60), p_29);

                    ;
                    ;
                    (*l_353) = (void*)0;

                    ;
                    if ((*l_290))
                        continue;
                    (*l_353) = g_35;
                }
            }
        }
        (*l_51) = l_361;
    }
    else
    {
        unsigned char l_366 = 0xBFL;
        int *l_371 = &g_11.f8;
        short l_422 = 2L;
        for (g_94.f8 = 0; (g_94.f8 >= 27); ++g_94.f8)
        {
            int **l_364 = &g_35;
            struct S0 l_365 = {1UL,1UL,0x9D791E13B9E157B5LL,0xAD6C75871132302CLL,0xEB7DL,0x61A5BDE2L,0UL,0UL,1L,0x580BL};
            (*l_364) = g_35;
            if (func_61((*p_29), l_365))
            {
                if (l_366)
                    break;
                (*g_244) = (safe_lshift_func_int16_t_s_s(p_31.f5, g_6));
            }
            else
            {
                struct S0 **l_369 = &g_10;
                struct S0 ***l_370 = &l_369;
                (*l_370) = l_369;
                (*l_364) = l_371;

                ;
            }
        }

        ;
        l_371 = l_355;

        ;
        for (p_31.f9 = 0; (p_31.f9 <= (-12)); p_31.f9 = safe_sub_func_uint8_t_u_u(p_31.f9, 2))
        {
            struct S0 *l_385 = (void*)0;
            int l_386 = 0xAA68DA57L;
            int *l_395 = (void*)0;
            if (((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((l_386 ^ 0UL))), 0xE2L)), 0x85DDL)) && p_31.f8))
            {
                return l_386;
            }
            else
            {
                int l_391 = 0x1BAFAF94L;
                struct S0 l_392 = {65535UL,3UL,18446744073709551612UL,0xE100CF8C86D93371LL,-1L,-9L,3UL,0x7DAA8D77L,1L,0x8C14L};
                struct S0 **l_404 = (void*)0;
                for (g_11.f6 = 19; (g_11.f6 > 20); g_11.f6 = safe_add_func_uint64_t_u_u(g_11.f6, 6))
                {
                    int l_390 = (-10L);
                    int **l_394 = &g_244;
                    if (((p_28 != l_390) > (l_391 >= ((g_94.f5 >= (((l_371 == p_30) != l_391) != 0x434CL)) && p_31.f4))))
                    {
                        return g_387.f7;
                    }
                    else
                    {
                        struct S0 *l_393 = &l_392;
                        (*l_393) = l_392;
                    }
                    (*l_394) = p_30;
                }
                (*l_51) = p_31;
                if (func_61(&l_361, g_387))
                {
                    l_386 = p_31.f3;
                }
                else
                {
                    short l_403 = (-1L);
                    int *l_405 = &g_11.f8;
                    p_30 = g_244;
                }
            }
            if (p_31.f8)
            {
                struct S0 l_423 = {1UL,65535UL,0xCA31212EB65FCF39LL,0xF3F8F0CFB5D87785LL,1L,1L,4294967291UL,0x00D0F22BL,0x44AD5A3CL,0x6284L};
                l_386 = (safe_mul_func_uint8_t_u_u((0x6982L | g_387.f0), (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0x3D760E76L, g_387.f8)), (*l_60))) , 4294967295UL), 1L)), ((safe_div_func_int64_t_s_s(0x87221BE685625D57LL, (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((*l_60), g_182)), g_387.f3)))) , g_387.f6)))));
                (*l_60) = l_422;
                (*l_51) = l_423;
                if ((safe_rshift_func_int8_t_s_s(func_61((*p_29), g_11), l_423.f7)))
                {
                    if (l_423.f6)
                        break;
                }
                else
                {
                    return g_94.f9;
                }
            }
            else
            {
                return p_32;
            }
            (*l_60) = (*l_60);
        }


    }

    ;

    l_51 = (*p_29);

    ;
    return p_31.f6;
}







static unsigned short func_42(struct S0 ** p_43, unsigned char p_44)
{
    int l_172 = 0xE1F2821DL;
    int **l_181 = (void*)0;
    struct S0 l_183 = {0x024EL,0UL,2UL,0x190030C72001B596LL,0xDA76L,-1L,0xC33B20C6L,0x6CD64C1BL,1L,0x407DL};
    int *l_245 = &g_94.f8;
    int *l_263 = &g_11.f5;
    struct S0 *l_267 = &g_11;
    struct S0 **l_266 = &l_267;
    int **l_268 = &g_35;
    if ((&g_11 != (*p_43)))
    {
        unsigned long long l_161 = 18446744073709551606UL;
        int *l_184 = &g_11.f8;
        (*l_184) = (p_44 , ((((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_161, (safe_mod_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(func_61((((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_11.f3 == (l_172 , g_11.f0)), (safe_sub_func_int16_t_s_s(g_11.f8, (safe_sub_func_int8_t_s_s((l_161 , ((func_61((((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((p_44 || ((l_181 != &g_35) | p_44)), g_182)), 18446744073709551611UL)) <= 0x00FDL) , (*p_43)), l_183) , l_161) <= g_94.f3)), g_11.f7)))))), 254UL)) , 0xE14DL) != p_44) , 0xD2L), 5)) > 6L) , &g_11), g_94), p_44)) > g_11.f7), (-10L))))), p_44)) > g_11.f3) , p_44) | p_44));
    }
    else
    {
        int *l_196 = &g_11.f8;
        struct S0 l_197 = {0xEC77L,0x6C22L,0x4725C5B7124CF966LL,0x2D96FB6D299ECA85LL,0xECF6L,-1L,0xC49715F7L,0x578D7559L,-1L,0xC7BAL};
        unsigned l_214 = 0x6C705CD1L;
        struct S0 **l_246 = &g_10;
        int **l_247 = (void*)0;
        int **l_248 = &g_35;
        unsigned l_260 = 1UL;
        struct S0 *l_261 = &l_183;
        for (l_183.f0 = 0; (l_183.f0 > 12); l_183.f0++)
        {
            struct S0 *l_195 = &l_183;
            int *l_199 = &l_197.f5;
            int **l_200 = &l_199;
            struct S0 l_229 = {2UL,0x4747L,1UL,0x8365F3817B0A8863LL,8L,0x3B38C434L,4294967286UL,0UL,-4L,0L};
            if (((safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(func_61(func_65(((*p_43) == (void*)0)), l_197), 7)), p_44)) , 0x6380375A509CE921LL), 0x8BB56B627C589AB2LL)) ^ p_44))
            {
                (*l_196) = p_44;
            }
            else
            {
                char l_198 = 0xAAL;
                (*l_196) = l_198;
                l_199 = l_196;

                ;
            }

            ;
            (*l_200) = (void*)0;

            ;
            for (p_44 = 17; (p_44 == 57); ++p_44)
            {
                int *l_203 = (void*)0;
                struct S0 **l_230 = &l_195;
            }
        }
        (*l_248) = func_52(l_196, l_183.f7, func_52(l_245, g_94.f2, g_244, p_44, ((*l_196) , l_246)), p_44, p_43);

        ;
        (*l_261) = (**p_43);
    }
    (*l_268) = ((g_244 == (((-9L) == (safe_unary_minus_func_int32_t_s((*l_245)))) , g_244)) , (void*)0);

    ;
    return g_11.f2;
}







static struct S0 func_45(struct S0 * p_46, int * p_47, char p_48, short p_49, unsigned short p_50)
{
    char l_126 = 0xEAL;
    struct S0 **l_127 = &g_10;
    short l_151 = 0x68FDL;
    struct S0 l_156 = {0x2862L,1UL,18446744073709551611UL,0x45BF07671DAD4EEALL,0xA905L,-9L,0x06B43409L,0x365E47C5L,4L,0x2F9FL};
lbl_134:
    (*l_127) = func_65(l_126);
    if ((safe_add_func_uint8_t_u_u(0UL, (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((void*)0 != &g_35), g_94.f5)), 1)))))
    {
        if (l_126)
            goto lbl_134;
    }
    else
    {
        struct S0 l_145 = {65535UL,6UL,0x8AEAC466B2A51B15LL,0x7E67BAFF3CA177F5LL,0x0FD4L,0x72C14070L,0xB8FCCBCFL,0x55BB8F8DL,0x673C1710L,0L};
        for (g_94.f7 = (-11); (g_94.f7 != 35); g_94.f7 = safe_add_func_uint8_t_u_u(g_94.f7, 1))
        {
            int *l_137 = &g_11.f5;
            int **l_138 = &l_137;
            (*l_138) = l_137;
        }
        for (g_94.f5 = 18; (g_94.f5 >= (-18)); g_94.f5 = safe_sub_func_uint64_t_u_u(g_94.f5, 2))
        {
            int **l_141 = &g_35;
            struct S0 **l_144 = (void*)0;
            int *l_148 = &g_11.f5;
            (*l_141) = p_47;


            (*l_148) = ((safe_rshift_func_int16_t_s_s(((**l_141) , (((g_11.f8 , l_144) != (void*)0) && func_61(p_46, l_145))), 15)) == ((safe_div_func_int8_t_s_s(((0x340C11E2AE170879LL ^ p_49) ^ l_126), l_126)) >= l_126));
        }


        (*p_47) = (l_145.f9 , (safe_add_func_int32_t_s_s((((g_11.f8 < l_151) || (l_151 || (*p_47))) != ((safe_lshift_func_uint8_t_u_s((func_61(func_65(((((g_94.f0 | l_126) && (safe_lshift_func_int8_t_s_s(l_145.f0, (0x38L | 0x6AL)))) > l_145.f5) || g_94.f0)), (*p_46)) | 1L), 2)) & p_49)), g_94.f4)));
    }


    (*p_47) = 0x045441F6L;
    g_94 = l_156;
    return (*p_46);
}







static int * func_52(int * p_53, int p_54, int * p_55, unsigned p_56, struct S0 ** p_57)
{
    struct S0 *l_64 = &g_11;
    int l_74 = 0xDEECC15CL;
    int *l_125 = &g_94.f5;
    if ((func_61(l_64, g_11) || (((void*)0 != &g_10) == (+(safe_div_func_int8_t_s_s(l_74, 255UL))))))
    {
        for (g_11.f2 = (-24); (g_11.f2 == 12); g_11.f2 = safe_add_func_int32_t_s_s(g_11.f2, 9))
        {
            (*p_55) = (safe_sub_func_uint16_t_u_u((g_11.f8 >= (g_11.f8 , p_56)), (0xC7L & ((void*)0 == p_55))));
            if (l_74)
                continue;
        }
    }
    else
    {
        int *l_80 = &g_11.f5;
        struct S0 l_95 = {1UL,0xC0BAL,0xD37901A93EFF9D66LL,0xDAB47FCA77B68111LL,0x00ABL,0x1FB6C9C4L,0x2E654CDFL,0x1806A296L,0xC64A2822L,0L};
        unsigned short l_120 = 0x1660L;
        int **l_124 = &g_35;
        if ((8UL & g_11.f5))
        {
            int **l_79 = &g_35;
            (*l_79) = p_53;


            (*l_79) = p_53;
        }
        else
        {
            short l_96 = 0x5C5DL;
            struct S0 l_97 = {0x94DFL,1UL,18446744073709551615UL,1L,0x69D3L,0xDFAC9312L,1UL,1UL,0xDAD6103DL,0x00CEL};
            int **l_122 = &l_80;
            if (func_61(&g_11, g_11))
            {
                int **l_81 = &g_35;
                (*l_81) = l_80;

                ;
                for (g_11.f5 = 25; (g_11.f5 > (-5)); g_11.f5--)
                {
                    (*p_55) = (*g_35);
                    (*p_55) = g_84;
                    if ((*g_35))
                    {
                        (*l_81) = g_35;
                        (*p_55) = ((safe_sub_func_uint16_t_u_u(0x0583L, (l_74 , (((safe_mul_func_uint8_t_u_u((0UL < (*p_55)), g_11.f5)) ^ (4UL < (*p_55))) && 0L)))) ^ l_74);
                        (*l_81) = &l_74;

                        ;
                        (*l_81) = &l_74;
                    }
                    else
                    {
                        if (l_74)
                            break;
                    }
                }

                ;
                for (g_11.f7 = 0; (g_11.f7 >= 34); g_11.f7 = safe_add_func_int64_t_s_s(g_11.f7, 9))
                {
                    short l_104 = 9L;
                    for (g_6 = 5; (g_6 == 52); g_6++)
                    {
                        struct S0 *l_93 = &g_94;
                        (*l_93) = g_11;
                        l_96 = func_61((*p_57), l_95);
                    }
                    (*p_55) = func_61(&g_11, l_97);
                }
            }
            else
            {
                int **l_121 = &g_35;
                (*l_121) = l_80;

                ;
                if (g_11.f2)
                    goto lbl_123;
            }

            ;
            g_35 = g_35;
lbl_123:
            (*l_122) = p_53;


            (*l_122) = g_35;

            ;
        }


        ;
        (*l_124) = g_35;
        (*p_55) = ((g_94.f5 || ((void*)0 != p_55)) ^ 4294967286UL);
    }

    ;

    return l_125;



}







static unsigned func_61(struct S0 * p_62, struct S0 p_63)
{
    struct S0 l_70 = {65535UL,65535UL,0x3AA798D667733019LL,-1L,0xCB15L,6L,0x1BF9D45AL,4294967293UL,1L,0x379DL};
    struct S0 *l_71 = &l_70;
    g_10 = func_65((&p_62 == &p_62));

    ;
    (*l_71) = l_70;
    return g_11.f9;
}







static struct S0 * func_65(int p_66)
{
    int *l_67 = (void*)0;
    int **l_68 = &l_67;
    struct S0 *l_69 = (void*)0;
    (*l_68) = l_67;
    return l_69;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_11.f5, "g_11.f5", print_hash_value);
    transparent_crc(g_11.f6, "g_11.f6", print_hash_value);
    transparent_crc(g_11.f7, "g_11.f7", print_hash_value);
    transparent_crc(g_11.f8, "g_11.f8", print_hash_value);
    transparent_crc(g_11.f9, "g_11.f9", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_94.f8, "g_94.f8", print_hash_value);
    transparent_crc(g_94.f9, "g_94.f9", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_387.f3, "g_387.f3", print_hash_value);
    transparent_crc(g_387.f4, "g_387.f4", print_hash_value);
    transparent_crc(g_387.f5, "g_387.f5", print_hash_value);
    transparent_crc(g_387.f6, "g_387.f6", print_hash_value);
    transparent_crc(g_387.f7, "g_387.f7", print_hash_value);
    transparent_crc(g_387.f8, "g_387.f8", print_hash_value);
    transparent_crc(g_387.f9, "g_387.f9", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
