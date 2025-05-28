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
   unsigned f0;
   unsigned f1;
};

union U1 {
   volatile unsigned f0;
   volatile int f1;
   unsigned char f2;
   unsigned char f3;
};


static union U0 g_8 = {0x7478144AL};
static volatile int g_32 = 0L;
static volatile int *g_31 = &g_32;
static int g_56 = 0x8EBCCE3FL;
static int *g_55 = &g_56;
static union U1 g_63 = {0x0979B5CEL};
static volatile int *g_64 = &g_32;
static int g_78 = 0x90C32740L;
static union U1 *g_98 = &g_63;
static int g_160 = (-2L);
static int *g_159 = &g_160;
static union U1 g_167 = {1UL};
static union U1 g_171 = {0UL};
static union U1 g_234 = {0UL};
static int ***g_301 = (void*)0;
static volatile char g_310 = 0x45L;
static int *g_325 = &g_78;
static union U1 g_326 = {18446744073709551615UL};
static volatile union U1 g_339 = {0x76B58073L};
static volatile union U0 g_391 = {1UL};
static volatile union U0 *g_390 = &g_391;
static volatile union U0 **g_389 = &g_390;
static volatile union U1 g_577 = {18446744073709551615UL};
static unsigned long long g_589 = 2UL;
static volatile union U1 g_629 = {0xD1574431L};
static union U1 g_656 = {18446744073709551608UL};
static union U1 g_762 = {18446744073709551613UL};
static unsigned char g_775 = 5UL;
static volatile short g_798 = (-2L);
static union U1 g_837 = {0xC56051CBL};



static unsigned char func_1(void);
static int func_2(unsigned short p_3, union U0 p_4, int p_5, unsigned p_6);
static char func_11(short p_12, unsigned char p_13);
static int * func_14(int * p_15, int p_16);
static int * func_17(unsigned p_18, int p_19, union U0 p_20, unsigned long long p_21, int * p_22);
static unsigned func_24(int * p_25, int * p_26);
static int * func_27(unsigned long long p_28, int * p_29, unsigned p_30);
static unsigned func_35(int * p_36, short p_37, int * p_38, unsigned p_39);
static short func_44(unsigned char p_45, unsigned short p_46, short p_47, int * p_48);
static int * func_50(int p_51, int * p_52, int * p_53, int p_54);
static unsigned char func_1(void)
{
    unsigned long long l_7 = 18446744073709551613UL;
    int *l_671 = &g_160;
    long long l_681 = 0xDCCA1A96F7532D90LL;
    union U0 *l_697 = &g_8;
    union U0 **l_696 = &l_697;
    long long l_720 = 0x3F0370C707C95694LL;
    int *l_769 = (void*)0;
    long long l_853 = 0x4FA58E0C85AB6E29LL;
    int **l_855 = &g_325;
    int ***l_854 = &l_855;
    if (func_2(l_7, g_8, l_7, (safe_sub_func_int8_t_s_s((l_7 == l_7), func_11(g_8.f1, l_7)))))
    {
        unsigned l_663 = 4294967292UL;
        int l_664 = 0x3DE31C2CL;
        l_664 = (safe_lshift_func_uint16_t_u_s(l_663, func_24(&g_78, &g_56)));

        ;
    }
    else
    {
        unsigned l_674 = 18446744073709551615UL;
        int *l_725 = &g_78;
        int *l_726 = (void*)0;
        int *l_735 = (void*)0;
        unsigned long long l_799 = 0xDCBDA735876FF13BLL;
        union U0 *l_809 = &g_8;
        unsigned char l_860 = 1UL;
        unsigned short l_879 = 1UL;
        if ((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((l_7 == (safe_lshift_func_uint8_t_u_u(l_7, 6))), (((&g_32 == l_671) & (safe_sub_func_int64_t_s_s(l_674, (g_63.f3 || (((*l_671) != (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(func_11(((&g_32 != (void*)0) , l_674), g_310), l_681)), 13))) != 0x76E9L))))) <= g_171.f3))) , (-1L)), l_674)))
        {
            int *l_691 = &g_78;
            int l_727 = 0x87D9E625L;
            unsigned l_747 = 0xCF06569BL;
            for (g_8.f1 = (-10); (g_8.f1 <= 54); g_8.f1 = safe_add_func_uint8_t_u_u(g_8.f1, 7))
            {
                short l_702 = 0xF96DL;
                for (g_160 = 0; (g_160 == (-6)); g_160--)
                {
                    volatile int **l_686 = &g_31;
                    int l_703 = 0xC3D219D5L;
                    (*l_686) = &g_32;
                }
            }

            lbl_729:
            (*l_671) = 0x7B65EE38L;
            if (func_11(g_629.f0, (safe_mod_func_int16_t_s_s(((((0xD5L < (g_8 , (func_11(((safe_rshift_func_uint16_t_u_u(((*l_691) , g_56), 9)) ^ g_167.f3), func_11(((((-9L) < g_63.f2) < (l_674 >= g_326.f3)) , g_160), (*l_691))) >= g_78))) , 0x8B8C142BL) ^ 0x5DDABBC5L) , g_167.f3), g_167.f2))))
            {
                int *l_711 = &g_78;
                union U1 **l_719 = &g_98;
                int l_728 = 0x67DF43CEL;
                for (g_160 = (-14); (g_160 != 14); ++g_160)
                {
                    int **l_714 = &g_55;
                    if (l_674)
                    {
                        union U1 **l_710 = &g_98;
                        int **l_712 = &g_55;
                        if ((*l_671))
                            break;
                        (*l_710) = (void*)0;

                        ;
                        l_671 = l_691;

                        ;
                        (*l_712) = l_711;

                        ;
                    }
                    else
                    {
                        int **l_713 = &g_55;
                        (*l_713) = l_691;

                        ;
                        if (l_674)
                            break;
                    }

                    ;
                    (*l_714) = l_671;

                    ;
                    for (g_78 = (-6); (g_78 <= (-30)); --g_78)
                    {
                        l_728 = ((safe_mul_func_uint8_t_u_u(((l_719 != ((l_720 , 0x6A24997BL) , ((safe_mod_func_int16_t_s_s(((*g_389) != (void*)0), ((safe_add_func_int32_t_s_s(func_24(l_725, l_726), (*l_671))) , g_577.f1))) , (void*)0))) , l_727), (*l_725))) , (-1L));

                        ;
                    }

                    ;
                }


                ;
                ;
            }
            else
            {
                short l_732 = 0x972CL;
                volatile int l_754 = 0xEBA3D9B4L;
                int l_789 = 0x9D2B9C76L;
                unsigned char l_790 = 0x8EL;
                short l_791 = 0xCF09L;
                int *l_796 = &g_56;
                long long l_807 = 0xA49C73FB98D85EF4LL;
                int *l_808 = &g_160;
lbl_768:
                if (g_656.f2)
                    goto lbl_729;
                if ((safe_mul_func_int8_t_s_s(g_167.f2, (((l_732 && (0L < (*g_325))) , (safe_mul_func_uint16_t_u_u(0xD2D8L, g_391.f1))) != (*l_671)))))
                {
                    short l_738 = 1L;
                    unsigned short l_752 = 0x3723L;
                    union U1 *l_767 = &g_171;
                    int *l_776 = (void*)0;
                    int **l_777 = &l_769;
                    if (((safe_lshift_func_int8_t_s_u(l_738, (safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(g_326.f3, (((*l_725) || g_656.f3) , g_577.f2))), l_752)))) >= (*l_725)))
                    {
                        int *l_753 = &g_56;
                        union U1 *l_761 = &g_762;
                        l_753 = l_753;
                        l_754 = (*g_31);
                        (*g_325) = ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((l_752 != 0x82E505350F2C46BCLL), (g_577.f1 | ((g_167.f3 , l_761) != ((&g_389 == &g_389) , g_98))))), (safe_lshift_func_uint8_t_u_s(((g_762.f3 , &g_389) != &g_389), l_752)))) > g_63.f2), g_167.f3)) < g_167.f3);
                        (*g_31) = ((safe_rshift_func_uint16_t_u_s(((*l_691) >= (((l_767 != (void*)0) , g_339.f2) >= (((g_171.f3 >= g_171.f3) && ((func_11((*l_753), g_78) >= g_762.f3) || 0x70AF2A5441545FD9LL)) ^ 0x74F8FE95C4F3E943LL))), (*l_753))) == l_732);
                    }
                    else
                    {
                        int **l_770 = &l_726;
                        if (g_326.f2)
                            goto lbl_768;
                        (*l_770) = l_769;
                    }
                    (*l_671) = ((safe_rshift_func_uint16_t_u_s(((1L == (safe_add_func_int32_t_s_s((*l_691), (((*l_691) <= (((g_656.f2 < func_11(g_629.f1, (((l_752 == ((g_775 != (((0x12L ^ g_656.f3) != (-6L)) , l_752)) <= 0xDFD2L)) && 0x206DL) > g_160))) != 0xDC411E7FL) == 6UL)) & 0x84L)))) , (*l_691)), 3)) , l_754);
                    (*l_777) = ((&l_754 == l_776) , &g_160);

                    ;
                }
                else
                {
                    unsigned l_783 = 4294967295UL;
                    if ((&g_98 != (void*)0))
                    {
                        long long l_778 = 0xB87A078D427FCA6BLL;
                        int **l_793 = &g_55;
                        (*l_691) = (-2L);
                        if (g_326.f3)
                            goto lbl_792;
                        (*g_31) = l_791;
lbl_792:
                        (*l_691) = (*g_325);
                        (*l_793) = (void*)0;

                        ;
                    }
                    else
                    {
                        int **l_797 = &g_325;
                        (*l_725) = (g_391.f0 & (safe_rshift_func_uint16_t_u_u(g_762.f3, (l_796 == &g_78))));
                        (*l_797) = &g_78;
                        (*g_31) = g_798;
                    }
                    (*l_691) = (*l_671);
                    if (func_11(g_798, l_799))
                    {
                        union U0 *l_800 = &g_8;
                        int **l_801 = &l_726;
                        (*l_801) = func_27(l_783, &g_56, ((void*)0 != l_800));


                        ;
                    }
                    else
                    {
                        int *l_802 = (void*)0;
                        (*g_31) = (*g_64);
                    }

                    ;
                }

                ;
                ;
                l_808 = &l_727;

                ;
            }


            ;
            ;
            ;
            ;
            (*l_696) = (g_589 , l_809);
        }
        else
        {
            unsigned l_821 = 0xB43B4743L;
            unsigned l_824 = 6UL;
            int **l_831 = &l_769;
            int ***l_830 = &l_831;
            volatile union U1 *l_863 = &g_577;
            volatile union U1 **l_862 = &l_863;
            long long l_880 = 0L;
lbl_864:
            for (g_762.f2 = (-12); (g_762.f2 > 49); ++g_762.f2)
            {
                unsigned l_820 = 4294967292UL;
                int *l_822 = &g_160;
                unsigned short l_861 = 65530UL;
                for (g_8.f1 = 0; (g_8.f1 == 42); g_8.f1 = safe_add_func_uint8_t_u_u(g_8.f1, 1))
                {
                    int **l_823 = &g_325;
                    int ***l_829 = (void*)0;
                    int l_832 = 0x44D40C1AL;
                    int *l_842 = (void*)0;
                    (*l_823) = l_671;

                    ;
                    (**l_830) = func_17(func_11(l_824, g_629.f1), ((~((safe_sub_func_int8_t_s_s((((0xA79E5E3BL || ((*l_671) >= g_167.f3)) ^ g_656.f2) , 9L), (safe_mod_func_int16_t_s_s(func_11((func_11(((l_829 == l_830) || (*l_822)), l_832) || (*l_822)), g_63.f2), g_762.f3)))) & 0x1C73574934A4371ALL)) && 0L), (*l_697), (**l_823), &g_78);

                    ;
                    ;
                    (**l_823) = (!(*g_31));
                    (*l_831) = l_725;
                }

                                ;
                (*l_725) = 0x975A8A50L;
                (*l_831) = func_50(((((((*l_725) < (safe_add_func_uint8_t_u_u((((*l_671) & ((safe_lshift_func_int16_t_s_u(g_171.f1, (safe_rshift_func_uint8_t_u_u((18446744073709551613UL && g_56), (safe_add_func_uint16_t_u_u((((func_11((((safe_mul_func_uint8_t_u_u(((l_853 , ((void*)0 != &l_769)) > (*l_725)), 0xFFL)) && g_56) <= g_234.f2), g_762.f2) ^ g_326.f3) && g_78) != 0xF9C61B267DF6A797LL), 0UL)))))) & g_837.f2)) == (*l_671)), g_171.f2))) > 0x90E3L) < (*l_671)) || (*l_671)) , (*g_64)), &g_160, l_769, g_837.f3);


                ;
                (**l_855) = ((((l_854 == &l_831) && 0L) || (safe_lshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u(l_860, (*l_822))) && 0L) >= g_310), (*l_822)))) & l_861);
            }
            (*l_862) = &g_629;

            ;
            if (g_171.f2)
                goto lbl_864;
            (*g_31) = (((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((*g_389) != (void*)0), (safe_add_func_uint32_t_u_u(4294967287UL, g_577.f3)))) < g_837.f2), g_589)) ^ 0xB337E1A0L), g_326.f2)) && g_339.f0) , l_880);
        }


        ;
        ;
        ;
        ;
        ;
        return g_8.f0;
    }

    ;
        ;
    return g_160;
}







static int func_2(unsigned short p_3, union U0 p_4, int p_5, unsigned p_6)
{
    union U0 l_528 = {0x5A3C821BL};
    unsigned short l_529 = 0xEC2BL;
    int *l_542 = &g_160;
    union U0 *l_635 = &l_528;
    union U0 **l_634 = &l_635;
    union U0 ***l_633 = &l_634;
    union U1 *l_653 = &g_63;
    if (((g_63.f0 ^ (l_528 , (func_11(p_3, l_528.f0) || (l_528.f0 && (func_11(l_529, g_234.f2) > 0x51D5CD12L))))) , (*g_159)))
    {
        int **l_532 = &g_159;
        union U0 l_538 = {0xB92F76AEL};
        (*g_325) = (safe_mul_func_int16_t_s_s(g_63.f2, p_4.f1));
        if (((void*)0 != l_532))
        {
            int *l_533 = (void*)0;
            union U1 *l_541 = (void*)0;
            (*g_55) = 2L;
            (**l_532) = ((l_533 == (p_5 , (*l_532))) , (safe_sub_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u(g_391.f0, func_11(l_529, ((l_538 , (safe_sub_func_int64_t_s_s((1UL < ((void*)0 != l_541)), p_6))) == 0xAAE4F3D36BC6A5ADLL)))) ^ p_3) , l_542) == (*l_532)), p_5)));
        }
        else
        {
            int *l_545 = &g_160;
            unsigned l_548 = 0xE809754EL;
            union U0 *l_558 = (void*)0;
            union U0 **l_557 = &l_558;
            int *l_580 = &g_78;
            int *l_591 = &g_56;
            union U1 **l_615 = &g_98;
            if ((*g_55))
            {
                int l_556 = 5L;
                int l_559 = 0x61D7CB71L;
                for (l_528.f0 = 0; (l_528.f0 != 35); l_528.f0 = safe_add_func_uint8_t_u_u(l_528.f0, 8))
                {
                    char l_553 = 0x42L;
                    (*l_532) = func_50(p_4.f1, l_545, l_545, p_5);

                    ;
                    (*g_159) = ((void*)0 != &p_4);
                    l_559 = (safe_sub_func_int16_t_s_s(g_63.f3, (((((l_548 ^ g_234.f2) ^ (4294967289UL < 0x5A9D1DCEL)) | (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((l_553 && ((*l_545) , (!func_11((*l_545), (safe_rshift_func_int8_t_s_u((+g_326.f0), p_6)))))) == (*l_542)), l_556)), g_167.f3)) == l_556) <= (**l_532))) , l_557) == &l_558)));
                }


                ;
                return (*l_545);
            }
            else
            {
                union U0 ***l_560 = &l_557;
                int l_576 = 0x13AEC737L;
                volatile union U0 *l_590 = &g_391;
                if (((-1L) & (l_560 != (void*)0)))
                {
                    int l_569 = 0xAAA7488BL;
                    (*g_31) = (safe_lshift_func_int16_t_s_u(2L, 11));
                    (*l_532) = (void*)0;

                    ;
                    (*g_31) = ((((g_63.f3 , p_5) , (g_339.f0 == g_78)) == g_326.f2) ^ (safe_lshift_func_int16_t_s_u(0xD9B5L, (safe_mod_func_uint64_t_u_u(g_56, g_78)))));
                    if ((((safe_sub_func_uint8_t_u_u(func_44(g_167.f1, func_11((func_11(((*l_542) == (((((l_569 | (safe_mul_func_int8_t_s_s(g_326.f2, (safe_rshift_func_uint16_t_u_u(p_5, (65530UL & (safe_add_func_uint64_t_u_u(0UL, ((*l_542) > ((((~((((g_63.f3 < 1UL) & g_78) & 0x73L) & p_5)) , l_576) && l_569) == g_56)))))))))) , (*l_545)) & (*g_325)) && g_171.f3) , p_6)), g_167.f3) && l_576), g_326.f2), g_63.f3, &g_160), g_171.f3)) && p_4.f1) > 0xC79DL))
                    {
                        (*l_532) = func_50((g_577 , (safe_lshift_func_int16_t_s_s((*l_542), 4))), l_580, &l_576, (!func_11((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(g_234.f2, (safe_mul_func_int16_t_s_s(g_171.f2, (func_11(p_4.f0, (p_4 , (((((safe_mod_func_uint64_t_u_u(((((+(2UL > p_5)) & (-1L)) ^ p_3) != p_4.f1), p_6)) <= p_3) & g_167.f3) <= g_589) , 0x77L))) == 7L))))), p_3)), g_56)));


                        ;
                        (*l_545) = p_3;
                    }
                    else
                    {
                        (*g_31) = p_3;
                        return (*g_64);
                    }


                    ;
                }
                else
                {
                    (*l_532) = l_542;
                }


                ;
                l_590 = (*g_389);
                (*l_532) = l_591;

                ;
            }


            ;
            for (g_167.f3 = 0; (g_167.f3 == 13); g_167.f3++)
            {
                long long l_600 = (-1L);
                if ((*l_591))
                    break;
                (*l_532) = (*l_532);
                (*l_580) = (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((((-2L) | (0x7F7860A9L <= (*l_542))) ^ 8UL) == ((safe_mod_func_int64_t_s_s(p_4.f0, 0x9AA7195AE03AE652LL)) || ((((6L || (*l_591)) != ((0L < (-1L)) ^ 0x8BL)) == g_577.f0) , l_600))), 10)) | p_3), (*l_580))) == g_8.f1) & l_600);
                for (g_589 = 20; (g_589 < 35); g_589++)
                {
                    union U1 *l_603 = (void*)0;
                    (*g_325) = (&g_577 != l_603);
                    (*l_532) = l_591;
                }
            }

            for (g_234.f2 = 0; (g_234.f2 >= 29); ++g_234.f2)
            {
                unsigned l_614 = 0UL;
                int *l_622 = &g_160;
                union U0 ***l_627 = &l_557;
                (*l_532) = func_17(p_3, p_6, p_4, (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x29L, ((safe_mul_func_uint16_t_u_u(g_326.f0, g_63.f2)) | g_326.f2))), (g_8 , (safe_add_func_int8_t_s_s((p_6 || g_8.f1), g_234.f3))))), (*l_532));

                ;
                ;
                if (l_614)
                    continue;
                if ((l_615 != &g_98))
                {
                    int *l_616 = &g_56;
                    union U0 *l_617 = &l_528;
                    g_55 = (*l_532);

                    ;
                    if ((l_616 == (void*)0))
                    {
                        return p_5;
                    }
                    else
                    {
                        union U0 ***l_628 = &l_557;
                        int *l_630 = &g_160;
                        unsigned l_631 = 0xDEEFE1C4L;
                        (*l_557) = l_617;

                        ;
                        (*l_532) = func_14(l_616, ((l_614 >= (((safe_add_func_int32_t_s_s(func_24(l_622, func_14(func_17(((safe_add_func_int8_t_s_s(p_4.f1, ((0xB448L ^ ((safe_mul_func_int16_t_s_s((l_627 == l_628), (g_629 , func_44(((**g_389) , p_4.f0), (*l_616), g_160, l_616)))) <= g_589)) , (-4L)))) || g_326.f0), p_6, g_8, p_4.f0, l_630), l_631)), g_326.f3)) != 0UL) & p_6)) , 0x80D4D5CCL));

                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    unsigned short l_632 = 65532UL;
                    return l_632;
                }

                ;
                ;
                (*l_542) = ((void*)0 != l_633);
            }


                        ;
            ;
        }


                ;
        (*g_31) = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((**l_532) < (*l_542)), ((((~0x8A3FL) && 0xF749L) == g_326.f3) != p_6))), (&l_538 != (*g_389)))) , (*l_542)) , (**l_532));
    }
    else
    {
        unsigned char l_646 = 0x2AL;
        int **l_649 = &l_542;
        if ((safe_add_func_uint8_t_u_u(0xE2L, g_629.f0)))
        {
            int **l_648 = &l_542;
            (*l_648) = func_17((safe_sub_func_int64_t_s_s((g_63.f0 , (g_339.f2 > ((*g_159) || ((&g_389 == (void*)0) < 0x218CL)))), 0x83F07376A93B84E7LL)), ((safe_lshift_func_int16_t_s_s(l_646, (safe_unary_minus_func_uint64_t_u((*l_542))))) , (*l_542)), p_4, l_646, l_542);

            ;
            ;
            (*l_542) = (l_648 != l_649);
        }
        else
        {
            int *l_654 = &g_160;
            long long l_655 = 0x41A8BDB7FA4C102FLL;
            for (l_528.f1 = (-23); (l_528.f1 != 43); l_528.f1 = safe_add_func_uint16_t_u_u(l_528.f1, 8))
            {
                union U1 **l_652 = (void*)0;
                l_653 = &g_326;

                ;
            }

                        ;
            l_654 = l_542;
            (*l_542) = ((*l_542) && func_24(l_654, func_27(((((l_655 || ((**l_649) , (g_656 , func_11(((*l_654) == ((~(safe_rshift_func_uint8_t_u_u((p_4.f0 , (safe_lshift_func_uint8_t_u_u(func_11((func_11(((g_656.f3 , (*l_654)) , p_4.f0), g_656.f3) != 5L), p_5), p_3))), g_8.f0))) , g_234.f0)), g_8.f0)))) != p_3) <= p_6) || 4294967295UL), l_542, g_326.f2)));

            ;
        }

        ;
        ;
        ;
        return p_4.f1;
    }


        ;
    return (*g_325);
}







static char func_11(short p_12, unsigned char p_13)
{
    int l_23 = 0x2C60EDACL;
    unsigned short l_76 = 3UL;
    int *l_77 = &g_78;
    int **l_221 = (void*)0;
    int **l_222 = &l_77;
    union U0 l_235 = {0x1C580CF4L};
    int l_266 = 0x073A34EBL;
    int *l_284 = (void*)0;
    union U1 *l_297 = (void*)0;
    long long l_329 = 0x29329F13FC4F8BCCLL;
    union U0 *l_346 = &l_235;
    union U0 **l_345 = &l_346;
    unsigned l_419 = 0xC809FFDFL;
    int *l_448 = (void*)0;
    union U0 ***l_467 = (void*)0;
    union U1 **l_496 = &l_297;
    return p_13;
}







static int * func_14(int * p_15, int p_16)
{
    int l_149 = 0xC845C4EFL;
    int *l_150 = &g_78;
    short l_206 = (-1L);
    if ((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s(((!l_149) >= ((void*)0 == &g_64)), 4)))))))
    {
        int **l_151 = (void*)0;
        int **l_152 = &l_150;
        (*l_152) = l_150;
    }
    else
    {
        unsigned char l_156 = 0UL;
        int *l_210 = &g_78;
        for (g_63.f2 = (-11); (g_63.f2 == 1); g_63.f2 = safe_add_func_int16_t_s_s(g_63.f2, 3))
        {
            union U0 l_155 = {0x19659B86L};
            int *l_172 = &g_160;
            if ((g_8.f0 , l_156))
            {
                volatile int **l_162 = &g_64;
                volatile int ***l_161 = &l_162;
                union U1 *l_170 = &g_171;
                int l_185 = 0xD77870C7L;
                (*l_161) = &g_64;
                for (l_155.f0 = 0; (l_155.f0 != 28); l_155.f0++)
                {
                    char l_187 = 0x03L;
                }
                (*l_150) = (safe_mul_func_int16_t_s_s(((0x33249D86L > g_78) , ((((-1L) && 0xA157F97FL) && (g_32 ^ 0x6EL)) , (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*l_172) && ((!0x8B170AB6L) == func_24((g_160 , p_15), &g_56))) > (*g_159)), l_206)), (-6L))))), g_160));
            }
            else
            {
                int **l_207 = &g_159;
                (*l_207) = p_15;

                ;
                if ((*p_15))
                    break;
            }
            (*g_31) = (-2L);
            (*l_210) = (func_24(func_27(p_16, &g_160, p_16), l_210) ^ ((void*)0 == &g_78));
            for (p_16 = 0; (p_16 > (-1)); --p_16)
            {
                return p_15;


            }
        }

        ;
        (*g_159) = (g_171.f1 && (func_24(l_210, p_15) , (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((*l_150), 15)), ((safe_rshift_func_uint16_t_u_u((*l_210), (((*l_150) <= ((safe_lshift_func_uint8_t_u_s(0x24L, 6)) || (func_24(l_210, l_150) , p_16))) , 1UL))) != (*l_150))))));
    }

    ;
    return p_15;


}







static int * func_17(unsigned p_18, int p_19, union U0 p_20, unsigned long long p_21, int * p_22)
{
    int *l_142 = &g_56;
    for (g_56 = 0; (g_56 == 17); g_56++)
    {
        union U0 *l_137 = &g_8;
        union U0 **l_136 = &l_137;
        (*g_31) = (*g_64);
        (*l_136) = (void*)0;

        ;
    }
    (*p_22) = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(func_24(&p_19, l_142), (safe_mod_func_uint16_t_u_u(65533UL, (0L ^ 65532UL))))), (+p_21)));

    ;
    return &g_78;


}







static unsigned func_24(int * p_25, int * p_26)
{
    int **l_133 = &g_55;
    (*l_133) = (void*)0;

    ;
    return g_32;
}







static int * func_27(unsigned long long p_28, int * p_29, unsigned p_30)
{
    long long l_115 = 0L;
    int *l_120 = &g_78;
    int **l_121 = &l_120;
    int l_128 = 0xB22BBA05L;
    union U0 l_131 = {0x3C1E39B2L};
    unsigned long long l_132 = 18446744073709551615UL;
    (*l_121) = func_50(((-8L) && l_115), func_50((safe_mul_func_uint16_t_u_u(l_115, (safe_mod_func_uint64_t_u_u(18446744073709551609UL, g_32)))), &g_56, p_29, g_8.f0), l_120, p_28);


    ;
    (*l_120) = (*l_120);
    (*p_29) = ((p_30 ^ (safe_mod_func_uint8_t_u_u((l_131 , (0x62A355C2L | (p_30 || ((void*)0 == &l_121)))), l_132))) & g_63.f2);
    return p_29;


}







static unsigned func_35(int * p_36, short p_37, int * p_38, unsigned p_39)
{
    int l_84 = 0xE0EA8EDFL;
    int *l_113 = &g_78;
    int **l_114 = &g_55;
    if (((((safe_rshift_func_int8_t_s_s(2L, p_37)) >= ((safe_unary_minus_func_uint16_t_u((l_84 & p_39))) >= (!((((p_37 , (-9L)) , g_63) , (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_8.f0, (l_84 , l_84))), g_63.f1))) > l_84)))) , g_8) , (*g_64)))
    {
        union U0 l_95 = {4294967295UL};
        (*g_64) = ((+(safe_mul_func_int16_t_s_s((-5L), (func_44((safe_mod_func_int8_t_s_s(p_39, (safe_lshift_func_uint8_t_u_u(p_37, (l_95 , p_39))))), p_37, (safe_rshift_func_int8_t_s_u(g_8.f1, l_84)), p_38) <= 0x3FL)))) & l_84);
        g_98 = &g_63;
        return g_63.f2;
    }
    else
    {
        int **l_99 = (void*)0;
        int **l_100 = &g_55;
        int *l_111 = (void*)0;
        int *l_112 = &g_78;
        (*l_100) = (void*)0;

        ;
        if ((*p_36))
        {
            (*p_36) = (*p_38);
        }
        else
        {
            (*p_38) = (*p_38);
        }
        (*l_100) = func_50(l_84, p_38, l_113, (*l_113));

        ;
    }
    (*l_114) = func_50(((p_36 == &g_56) >= 1L), p_38, p_36, g_63.f3);
    return g_78;
}







static short func_44(unsigned char p_45, unsigned short p_46, short p_47, int * p_48)
{
    int l_49 = 0xD9FABAF1L;
    int **l_74 = (void*)0;
    int **l_75 = &g_55;
    (*p_48) = l_49;
    (*l_75) = func_50(((&g_32 != &g_32) , l_49), g_55, &g_56, g_8.f1);

    ;
    return p_47;
}







static int * func_50(int p_51, int * p_52, int * p_53, int p_54)
{
    long long l_69 = 0xFB48103B8AF769BFLL;
    int *l_73 = &g_56;
    g_55 = &g_56;

    ;
    (*p_52) = (*g_31);
    for (p_54 = (-9); (p_54 == (-4)); p_54++)
    {
        unsigned char l_70 = 0x61L;
        int **l_71 = &g_55;
        int ***l_72 = &l_71;
        g_55 = ((g_8 , (safe_add_func_int16_t_s_s((0x68L & p_51), (safe_rshift_func_int16_t_s_u(p_54, ((*g_55) & (((p_54 || (g_63 , (g_64 != (((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(l_69, l_70)) != p_51), 4)) == p_54) , &g_32)))) , 0UL) & 0x4EL))))))) , &p_51);

        ;
        (*l_72) = l_71;
    }

    ;
    return l_73;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_167.f2, "g_167.f2", print_hash_value);
    transparent_crc(g_167.f3, "g_167.f3", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_234.f2, "g_234.f2", print_hash_value);
    transparent_crc(g_234.f3, "g_234.f3", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_326.f0, "g_326.f0", print_hash_value);
    transparent_crc(g_326.f1, "g_326.f1", print_hash_value);
    transparent_crc(g_326.f2, "g_326.f2", print_hash_value);
    transparent_crc(g_326.f3, "g_326.f3", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    transparent_crc(g_339.f2, "g_339.f2", print_hash_value);
    transparent_crc(g_339.f3, "g_339.f3", print_hash_value);
    transparent_crc(g_391.f0, "g_391.f0", print_hash_value);
    transparent_crc(g_391.f1, "g_391.f1", print_hash_value);
    transparent_crc(g_577.f0, "g_577.f0", print_hash_value);
    transparent_crc(g_577.f1, "g_577.f1", print_hash_value);
    transparent_crc(g_577.f2, "g_577.f2", print_hash_value);
    transparent_crc(g_577.f3, "g_577.f3", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_629.f0, "g_629.f0", print_hash_value);
    transparent_crc(g_629.f1, "g_629.f1", print_hash_value);
    transparent_crc(g_629.f2, "g_629.f2", print_hash_value);
    transparent_crc(g_629.f3, "g_629.f3", print_hash_value);
    transparent_crc(g_656.f0, "g_656.f0", print_hash_value);
    transparent_crc(g_656.f1, "g_656.f1", print_hash_value);
    transparent_crc(g_656.f2, "g_656.f2", print_hash_value);
    transparent_crc(g_656.f3, "g_656.f3", print_hash_value);
    transparent_crc(g_762.f2, "g_762.f2", print_hash_value);
    transparent_crc(g_762.f3, "g_762.f3", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_837.f0, "g_837.f0", print_hash_value);
    transparent_crc(g_837.f1, "g_837.f1", print_hash_value);
    transparent_crc(g_837.f2, "g_837.f2", print_hash_value);
    transparent_crc(g_837.f3, "g_837.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
