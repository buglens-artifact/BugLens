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
   char f0;
   long long f1;
   short f2;
   int f3;
   unsigned f4;
};


static unsigned long long g_4 = 18446744073709551615UL;
static struct S0 g_48 = {0x42L,9L,-1L,0xA6F85D55L,7UL};
static int g_69 = 0xE2CBD031L;
static int g_81 = 7L;
static char g_137 = 0x94L;
static unsigned g_149 = 6UL;
static char g_154 = 0xB6L;
static short g_155 = (-1L);
static unsigned g_156 = 9UL;
static long long g_164 = 0xE9DE1E5EACDDF55BLL;
static int g_171 = 0x84902EFDL;
static struct S0 g_247 = {-6L,1L,0xA4C0L,0x3BF6E991L,0UL};
static long long g_374 = (-4L);
static char g_482 = (-2L);
static struct S0 g_573 = {1L,0x9A4FE0EFC14EF2F9LL,1L,0L,4294967295UL};
static unsigned short g_688 = 0x9E66L;
static unsigned char g_712 = 0x32L;



static char func_1(void);
static struct S0 func_2(long long p_3);
static char func_9(long long p_10, long long p_11, int p_12, struct S0 p_13, int p_14);
static short func_21(struct S0 p_22, long long p_23);
static struct S0 func_24(unsigned char p_25);
static struct S0 func_26(unsigned short p_27);
static struct S0 func_29(unsigned p_30, int p_31, int p_32, unsigned short p_33);
static short func_36(short p_37, short p_38, unsigned short p_39);
static int func_41(unsigned char p_42, int p_43, unsigned short p_44);
static unsigned char func_45(int p_46);
static char func_1(void)
{
    unsigned char l_15 = 0xB7L;
    int l_18 = 0x770B168FL;
    unsigned long long l_433 = 18446744073709551611UL;
    struct S0 l_434 = {1L,-4L,3L,-2L,4294967295UL};
    struct S0 l_789 = {0L,1L,0x9BEBL,0x497810F6L,0x23616796L};
    l_789 = func_2(((g_4 != 0x565E08CCCDDD1D8FLL) , (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(func_9(((((l_15 < (l_15 > (g_4 , ((safe_add_func_uint16_t_u_u(l_15, l_18)) , (safe_lshift_func_int8_t_s_u((func_21(func_24(g_4), l_18) , g_247.f0), 5)))))) & l_15) != l_18) , 0L), g_374, l_433, l_434, g_374), 4)), l_434.f1))));
    l_18 = g_48.f3;
    return l_789.f1;
}







static struct S0 func_2(long long p_3)
{
    int l_689 = (-7L);
    struct S0 l_694 = {0x4FL,0L,0xEEBAL,0x8CD4CD2DL,4UL};
    char l_695 = 1L;
    char l_699 = 1L;
    int l_741 = 0x865821C3L;
    unsigned char l_776 = 0x33L;
    int l_787 = 0xB90380B5L;
    struct S0 l_788 = {-1L,0x439E718B5602FC31LL,1L,0x5F65F8EAL,0x31BDD280L};
    if (l_689)
    {
        unsigned char l_696 = 0x1CL;
        int l_710 = 1L;
        struct S0 l_711 = {-1L,0xD34EBCCC982926A5LL,0xF9A4L,0L,7UL};
        if ((g_482 | ((safe_sub_func_int8_t_s_s(((-3L) != (65529UL < ((safe_mod_func_int64_t_s_s((-6L), func_21(l_694, g_247.f1))) > p_3))), ((g_482 , l_695) & g_573.f3))) , p_3)))
        {
            return l_694;
        }
        else
        {
            unsigned long long l_709 = 0x6AA971F90A24EF38LL;
            int l_733 = 0L;
            struct S0 l_740 = {0x83L,0x3011701E58CB2A15LL,0xD1C3L,8L,4294967289UL};
            if (l_696)
            {
                unsigned l_708 = 0xB1C16DEEL;
                char l_730 = 1L;
                l_710 = (safe_sub_func_int32_t_s_s(func_36((((l_689 < l_699) > (safe_rshift_func_int16_t_s_s(((+(l_696 ^ (p_3 == l_696))) ^ ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((p_3 <= (func_24((+(g_247.f0 < g_573.f2))) , l_689)), p_3)) | g_374), l_708)), 0UL)) & l_696)), l_709))) , 0xFE15L), p_3, p_3), p_3));
                l_711 = (l_699 , g_48);
                l_694 = func_24(g_712);
                for (g_247.f2 = 13; (g_247.f2 > 27); g_247.f2 = safe_add_func_int32_t_s_s(g_247.f2, 1))
                {
                    struct S0 l_717 = {0x3CL,0x41BCD8B610DEC79FLL,0xAB89L,3L,0x49D1E715L};
                    l_710 = ((((safe_rshift_func_int16_t_s_u((func_21(l_717, g_247.f3) >= p_3), 2)) > ((l_708 >= (g_688 <= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(l_709, 6)) , l_708) , l_730), g_573.f1)), 7)) , 65534UL) != 1UL), 11)), g_688)) >= p_3))) , g_573.f0)) <= l_709) ^ p_3);
                    for (g_48.f2 = 0; (g_48.f2 < 19); g_48.f2 = safe_add_func_uint64_t_u_u(g_48.f2, 2))
                    {
                        l_733 = 0L;
                        if (g_48.f3)
                            continue;
                        l_710 = g_573.f3;
                    }
                }
            }
            else
            {
                unsigned long long l_736 = 0xD7212ADB699923B6LL;
                int l_737 = (-9L);
                l_737 = ((safe_lshift_func_int16_t_s_s(l_696, l_736)) > (g_164 <= g_155));
                l_737 = func_45((func_41((((((g_247.f1 , 1L) || g_573.f1) >= ((l_737 > func_41(((1UL <= ((func_45(((safe_add_func_int64_t_s_s(((p_3 < func_21(l_740, (l_711 , (-1L)))) , p_3), l_740.f2)) == l_711.f3)) & p_3) != 4UL)) , g_154), g_712, l_737)) | 0x0C6671AA8AF2646DLL)) < 0x88L) != l_710), g_247.f3, g_247.f2) <= l_737));
                l_733 = (-1L);
            }
            l_741 = (p_3 >= p_3);
            return l_740;
        }
    }
    else
    {
        struct S0 l_749 = {9L,0xFB35BA337B437F15LL,0L,0x568F7FDCL,0xA77D6049L};
        int l_750 = 0L;
        unsigned short l_767 = 0x6EBBL;
        int l_775 = 0x891B4D89L;
        l_750 = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((((9L == (((((((safe_unary_minus_func_int8_t_s(0x69L)) | (((0xDBL > l_694.f0) <= (func_21(func_26((g_48 , (((((l_694.f0 || l_741) , (safe_lshift_func_int16_t_s_u(p_3, func_21(l_749, g_573.f0)))) ^ p_3) > g_247.f1) ^ 0UL))), p_3) , p_3)) != 0x7AL)) , p_3) ^ (-2L)) || 0UL) , 0x0AL) != l_694.f2)) , l_749.f4) , 2UL) == g_573.f0), l_749.f2)) , l_694.f2), p_3));
        l_750 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((1L | (!(safe_rshift_func_int16_t_s_u(((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(8UL, 8)), l_741)) >= p_3) != (safe_sub_func_uint8_t_u_u(g_164, (safe_sub_func_uint16_t_u_u(1UL, g_155))))) , ((safe_sub_func_uint16_t_u_u((0x56L == (func_24((1UL || l_699)) , l_767)), p_3)) | p_3)), 10)))) == 0xB8L), g_573.f0)), 0xD8L));
        l_776 = func_9(g_688, l_694.f1, (0xAE52DC74L >= (func_9(((safe_mod_func_int32_t_s_s((g_154 <= (((safe_sub_func_uint8_t_u_u(g_171, func_45((func_36(((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_u(0UL, (l_749.f1 , (((((l_694 , 0x7407L) != 0x669AL) , g_48.f1) != l_694.f1) & p_3)))))) || g_48.f1), p_3, g_247.f0) >= g_573.f2)))) || 0x7094L) , g_69)), p_3)) == 0x29L), l_775, l_741, g_573, p_3) & g_688)), l_749, p_3);
        l_741 = 4L;
    }
    l_741 = (safe_mod_func_int16_t_s_s(((((((safe_lshift_func_int16_t_s_s(l_694.f4, 15)) != p_3) && (g_154 | (func_36((+g_48.f4), p_3, p_3) ^ (((safe_rshift_func_uint16_t_u_u((l_694.f1 == (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((0x94FF3F0BL <= l_787), p_3)), g_4)) | g_156) <= p_3)), 13)) < g_482) > p_3)))) , g_573.f4) , p_3) && 0x777AE71FC0768B6DLL), 0x1BFCL));
    g_171 = 0x896D6990L;
    return l_788;
}







static char func_9(long long p_10, long long p_11, int p_12, struct S0 p_13, int p_14)
{
    unsigned short l_435 = 65534UL;
    int l_543 = 0xB79C51BBL;
    int l_648 = 0L;
    struct S0 l_661 = {6L,-3L,0x5C21L,-3L,4UL};
    l_435 = g_156;
    g_171 = 2L;
    if ((p_13 , (p_10 > (safe_rshift_func_uint16_t_u_s(((p_10 , (!l_435)) > p_12), 2)))))
    {
        short l_444 = 4L;
        unsigned char l_478 = 7UL;
        char l_529 = (-1L);
        int l_530 = 0x4A87671AL;
        struct S0 l_559 = {-2L,0x871125067DC0E57DLL,0xAE1EL,-3L,0x58146954L};
        g_171 = l_435;
        g_171 = p_13.f0;
        g_247 = g_247;
        if (g_48.f0)
        {
            unsigned long long l_445 = 0x229D3015658D500BLL;
            unsigned char l_451 = 0xE0L;
            int l_454 = (-1L);
            struct S0 l_508 = {0xD0L,0xA506325F462AB24DLL,-1L,6L,4294967294UL};
            if ((safe_mod_func_int64_t_s_s(((((safe_rshift_func_uint8_t_u_s((g_247 , 0xA1L), g_149)) ^ (4294967287UL <= ((safe_sub_func_uint32_t_u_u((l_444 ^ func_36(g_69, g_247.f4, p_13.f2)), l_444)) >= g_164))) > 0x09L) > l_445), 0x71CA4684CC45CE51LL)))
            {
                unsigned char l_448 = 255UL;
                p_14 = (func_41(g_156, (((((g_137 != (safe_sub_func_uint32_t_u_u((func_41(((l_448 != (((0xC177L == l_445) <= 0L) | g_247.f4)) || ((((((safe_lshift_func_uint16_t_u_s(((~func_45((func_45((p_10 != g_137)) , g_48.f2))) != g_149), l_448)) == l_444) , 0x68DBB830L) & 0xECC87DAEL) >= g_154) || g_247.f1)), g_4, l_445) & p_10), 4294967287UL))) > (-1L)) || g_247.f2) <= l_445) <= l_451), p_13.f1) < 0xA9L);
                if (l_448)
                {
                    char l_467 = 0x95L;
                    l_454 = (safe_lshift_func_int8_t_s_u(g_247.f2, 0));
                    for (g_48.f1 = 9; (g_48.f1 > (-17)); g_48.f1--)
                    {
                        long long l_457 = (-8L);
                        l_457 = 0xB0A236A0L;
                        g_171 = ((((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_374, ((safe_rshift_func_int16_t_s_s((((1L > l_457) == g_149) > p_13.f4), 5)) <= (safe_lshift_func_uint16_t_u_u(func_41((safe_unary_minus_func_uint64_t_u(func_41((g_69 == g_48.f2), ((g_164 || p_13.f0) , g_155), p_13.f1))), g_247.f4, p_13.f1), 15))))) || g_154), g_171)) & l_467) && l_448) & 0x5FL);
                    }
                    return l_444;
                }
                else
                {
                    g_171 = (safe_mod_func_uint8_t_u_u(255UL, l_444));
                }
            }
            else
            {
                int l_479 = 0x7DB0D489L;
                p_14 = (safe_add_func_int64_t_s_s(g_4, ((safe_sub_func_uint16_t_u_u(1UL, ((safe_lshift_func_uint8_t_u_s(p_13.f4, 7)) , (g_69 && (p_13.f0 && ((safe_rshift_func_int16_t_s_s((g_247.f2 , func_41(g_247.f4, g_137, g_48.f3)), 2)) || l_435)))))) , g_247.f2)));
                g_482 = (l_478 & ((+l_479) , (((g_171 , (p_13.f3 , 1L)) , g_154) ^ (((18446744073709551613UL < ((safe_add_func_int64_t_s_s(g_164, 0UL)) <= g_247.f4)) | p_14) ^ g_149))));
                if (((safe_add_func_uint64_t_u_u(g_247.f2, ((((safe_rshift_func_int16_t_s_u((+(func_36((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(l_444)) == ((func_29((((((((safe_mod_func_int32_t_s_s((func_36(((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s(l_454, ((1UL | (safe_mod_func_uint8_t_u_u(((((g_247.f4 , (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_478, (g_164 == (safe_sub_func_uint16_t_u_u((l_435 , (((l_435 & (-1L)) <= (-1L)) ^ 0xF7CFL)), l_478))))), 65535UL)), 12)), p_13.f2))) <= 0x36L) & l_454) ^ l_479), 255UL))) ^ 0x8D8FL))) , 18446744073709551615UL) == 0L) && p_11), 10)) && p_12), g_247.f2, l_479) , g_164), l_451)) != 0xCB3189EFL) , 0x18L) >= 1L) , l_454) != g_4) > g_164), l_479, l_445, g_247.f4) , 1UL) > p_13.f2)), p_13.f3)), g_247.f4, l_444) > l_454)), p_13.f4)) , 0xEBCC252DL) > l_479) | 1L))) && l_478))
                {
                    int l_515 = 0L;
                    int l_520 = 1L;
                    l_508 = func_24(p_12);
                    l_520 = ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_479, (safe_mod_func_uint64_t_u_u((l_515 | (p_13.f4 | (g_81 > ((-4L) <= ((0L <= (+0x75D1EF86L)) != func_45((safe_sub_func_int16_t_s_s(((func_41((safe_rshift_func_int8_t_s_u((g_374 > (p_10 | l_508.f2)), 7)), g_48.f2, g_154) , p_13.f0) & l_454), p_14)))))))), g_156)))) > p_14), p_12)) == (-9L));
                    l_530 = ((((safe_add_func_uint64_t_u_u((p_12 , (65527UL == (((((!g_48.f1) || (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((g_69 <= (g_156 , func_45(p_13.f1))) , g_48.f2), (((safe_lshift_func_uint8_t_u_s(((0x3B1CDB37981BCEC0LL || g_4) | l_529), l_508.f2)) < g_155) , p_12))), p_12))) , p_13.f0) , g_4) && l_508.f2))), g_137)) , p_13.f0) != l_478) & 0UL);
                    l_530 = p_14;
                }
                else
                {
                    l_454 = (-7L);
                }
            }
            l_543 = (p_13.f1 ^ func_41(p_13.f3, ((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((func_41(((((safe_rshift_func_int8_t_s_s((p_13.f4 > (safe_add_func_int16_t_s_s(l_435, (safe_lshift_func_uint16_t_u_s(0UL, p_12))))), 6)) == l_508.f2) != ((l_445 <= (safe_add_func_int32_t_s_s((!(0xFCE4598BBE980309LL && (-3L))), p_11))) != p_13.f3)) , 1UL), p_10, p_10) <= 0xCFL) > g_247.f4) >= 0x9EE209277777EC36LL), 0xCDB5E24FL)), 65530UL)) > l_435), g_154));
        }
        else
        {
            unsigned l_550 = 0xEF2367A9L;
            char l_557 = 0xAFL;
            long long l_558 = 0x38454A4D0655BBB0LL;
            p_14 = (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(l_543, 3)) || (safe_sub_func_int32_t_s_s(((func_36(l_550, ((l_530 , (safe_mod_func_int64_t_s_s((g_247 , (p_13.f4 , ((l_543 || ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((func_26((g_4 <= (0x39EFL ^ l_550))) , 0x6DDEL), 0)) || l_478), g_374)) >= l_557)) , l_558))), g_482))) && 1L), l_557) > 0x50L) < g_374), g_374))), 9UL)) && l_530) || g_482);
            g_247 = l_559;
            return p_12;
        }
    }
    else
    {
        struct S0 l_574 = {0xE4L,0L,4L,0x72D6C60AL,4294967295UL};
        unsigned long long l_657 = 18446744073709551615UL;
        int l_658 = 1L;
        unsigned long long l_667 = 1UL;
        unsigned short l_683 = 0x20CEL;
        if ((((((0x3182B4E7L & ((safe_sub_func_uint8_t_u_u(l_435, 2L)) | func_21(g_48, p_10))) , ((((safe_add_func_int64_t_s_s(((((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_s(0L, g_247.f4)) ^ (0x2271L | g_374)) , 0x5BL))), 6UL)) && p_13.f1) || 0x90L) || 0x82A7L) | g_171) && l_435), 0x69EB125F053228AALL)) & l_543) >= 9UL) > 0x7EACL)) <= g_247.f3) , p_13.f2) , p_12))
        {
            short l_579 = 0L;
            for (g_149 = (-25); (g_149 == 35); g_149 = safe_add_func_uint16_t_u_u(g_149, 6))
            {
                for (p_13.f0 = 0; (p_13.f0 == (-30)); p_13.f0--)
                {
                    l_574 = g_573;
                }
            }
            p_14 = ((((safe_lshift_func_int16_t_s_u(0xDA6DL, ((g_247.f3 , (((safe_rshift_func_int8_t_s_u((0xBC51CBFB13606635LL & l_579), func_45((((!(func_41(((safe_add_func_int8_t_s_s((p_13 , ((p_10 | ((safe_rshift_func_int8_t_s_u(0L, 0)) , 7UL)) != l_579)), 0L)) & g_69), l_579, l_579) && p_12)) , g_48.f4) , 1L)))) == g_573.f1) , l_579)) == 1UL))) >= 18446744073709551610UL) , p_13.f4) >= 0x3AL);
        }
        else
        {
            unsigned short l_584 = 0xFC12L;
            int l_607 = 0L;
            char l_622 = (-5L);
            struct S0 l_623 = {0x4EL,5L,0x2299L,0x94A94C51L,0xBAE2CF60L};
            int l_629 = 0xEEB0BD36L;
            long long l_649 = (-8L);
            if (l_584)
            {
                short l_600 = 0xCC8FL;
                p_13 = func_29((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((+((p_11 == l_574.f4) | ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(0xEAL)) == g_149), ((safe_rshift_func_uint8_t_u_s((g_573.f2 != (((safe_add_func_int16_t_s_s(((p_13.f3 != (safe_sub_func_int16_t_s_s(p_11, l_543))) ^ p_13.f4), 0xC461L)) , l_435) && p_13.f0)), 7)) | g_482))) > l_574.f4))), 2)), g_171)), g_154, g_573.f2, p_12);
                l_607 = ((!(g_69 < (p_13.f0 || (g_48.f3 , (safe_rshift_func_uint16_t_u_u(g_155, l_600)))))) ^ ((safe_rshift_func_uint8_t_u_u(((g_247.f3 != ((((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_600, p_11)), p_11)) , l_574.f4) ^ p_13.f3) <= l_600) | l_600) < l_574.f4)) != g_149), 5)) == 255UL));
                g_247 = ((((safe_mod_func_uint16_t_u_u(func_45((p_10 , ((((((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(0x05L, 3)) | (safe_add_func_uint32_t_u_u(l_600, (func_36(((p_13.f3 > func_41((((l_600 && (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((p_14 != ((((((g_155 >= g_573.f3) <= (-8L)) < 0x6B32L) >= p_13.f4) | 0UL) < p_10)) != g_573.f0), 0x0CL)), 7)), 0x4EL))) | p_13.f1) , 0UL), p_11, l_543)) != 0xCE891D35094B4BF2LL), l_607, g_149) >= p_10)))) | 7UL), p_10)) != g_137) != p_13.f3) | (-6L)) != l_622) && g_164))), p_13.f4)) || 0xB3ACC627L) >= p_13.f2) , p_13);
                l_623 = func_24(l_584);
            }
            else
            {
                unsigned long long l_624 = 3UL;
                struct S0 l_631 = {0x22L,0L,0L,0xEECDED7CL,1UL};
                if (((p_13.f0 < func_21(g_247, p_10)) > 0L))
                {
                    struct S0 l_630 = {3L,-1L,1L,-1L,0xCE36EBCDL};
                    if (l_624)
                    {
                        g_573 = func_29((safe_mod_func_uint8_t_u_u(((g_48.f0 , p_14) , ((g_247.f0 , 3UL) >= ((safe_mod_func_int8_t_s_s(((g_247.f1 <= func_21(p_13, g_155)) , (0x0BFDL || l_629)), 0xC6L)) ^ g_374))), l_624)), g_247.f1, l_607, g_573.f0);
                        return p_13.f3;
                    }
                    else
                    {
                        l_630 = l_623;
                        l_631 = l_630;
                    }
                    l_623 = p_13;
                    return g_155;
                }
                else
                {
                    short l_634 = 0x9371L;
                    if (l_574.f0)
                    {
                        return l_631.f0;
                    }
                    else
                    {
                        p_14 = (safe_sub_func_int16_t_s_s((func_36(l_634, ((((((safe_mod_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(0xC043L, ((safe_lshift_func_uint8_t_u_u(g_48.f4, 3)) || (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u(1UL, (safe_add_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u((p_11 >= func_41((l_634 , g_48.f0), (0xABL & (p_10 || g_374)), l_624)), l_634)) & p_13.f0), g_247.f4))))))))) & g_81), p_12)) , 0x304A1884L) != p_11) || 255UL) >= l_648) <= l_649), l_623.f1) < l_631.f3), 0x565DL));
                        g_171 = 0x91458A4FL;
                    }
                }
                l_658 = func_36((g_164 >= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((4294967295UL == ((((0x2A23L < (l_629 > func_41(func_45(((1L || l_631.f0) || (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s(l_543)), func_41(l_543, (!g_69), g_247.f0))))), l_623.f2, l_543))) & l_574.f3) , l_543) <= g_171)), p_12)), l_648))), l_623.f2, l_657);
                l_661 = func_24((~(safe_lshift_func_uint8_t_u_u(g_573.f2, l_657))));
            }
            for (l_622 = 0; (l_622 > 25); ++l_622)
            {
                char l_664 = 0x09L;
                g_171 = (l_664 != (safe_mod_func_uint8_t_u_u((l_667 ^ (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_13.f4, (p_14 ^ (g_247.f1 , func_45((g_156 , 6L)))))), p_12)) >= g_154) <= 0L)), l_574.f3)));
                for (g_156 = 0; (g_156 >= 36); ++g_156)
                {
                    unsigned char l_674 = 0xD4L;
                    g_171 = (l_674 , l_661.f1);
                }
            }
            p_14 = p_14;
            g_171 = ((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(p_11, 2)) >= (!0L)), (safe_rshift_func_uint16_t_u_u(l_648, l_623.f2)))) <= (safe_mod_func_int32_t_s_s(func_45(l_574.f1), p_13.f3)));
        }
        l_574 = (((g_573.f2 , (((l_661.f2 != (g_573.f0 & 0x985D1173FEBBCEC7LL)) ^ ((+l_683) , (g_48.f2 || ((safe_sub_func_int64_t_s_s((~(((l_658 ^ (0x03L >= ((safe_sub_func_uint8_t_u_u(l_574.f1, g_688)) ^ 1L))) , g_48.f1) , (-1L))), l_661.f2)) & 0x881FL)))) && l_574.f2)) ^ 18446744073709551615UL) , p_13);
    }
    return l_661.f1;
}







static short func_21(struct S0 p_22, long long p_23)
{
    unsigned char l_424 = 0xC0L;
    char l_425 = (-1L);
    int l_432 = (-4L);
    p_22 = func_29((safe_add_func_uint16_t_u_u((((g_4 || (g_48.f1 != 0x1798C67D35B22305LL)) ^ (((((((-7L) >= p_22.f4) > g_247.f2) != (func_41((8L < ((safe_mod_func_uint64_t_u_u((p_22 , (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(func_41(((safe_mod_func_uint32_t_u_u(l_424, g_247.f1)) <= 1UL), p_22.f1, g_48.f3), 1UL)), g_137))), g_156)) == 0x752FL)), g_374, g_247.f2) >= l_424)) || p_23) != 1UL) ^ 1UL)) != g_154), l_424)), l_424, l_424, l_425);
    g_171 = (l_424 | p_22.f2);
    l_432 = (((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(g_81, func_36(((safe_sub_func_uint64_t_u_u((g_48 , (+(((p_22.f3 != (g_164 , ((func_45(g_149) != ((g_247.f1 , l_424) , p_22.f2)) > 253UL))) , p_22.f1) == l_424))), l_425)) > 0x4BL), l_424, p_23))), p_22.f1)) != l_424) || p_23);
    return g_155;
}







static struct S0 func_24(unsigned char p_25)
{
    short l_28 = 0x0104L;
    struct S0 l_409 = {0xA4L,0x78303DC814CA008ELL,7L,-1L,3UL};
    l_409 = func_26((p_25 ^ l_28));
    g_171 = 0L;
    g_171 = func_41(l_409.f3, g_247.f1, g_48.f3);
    l_409 = func_29(p_25, l_409.f4, (safe_sub_func_uint8_t_u_u(((p_25 != 0xBE12F43CL) != (g_247 , (safe_sub_func_int64_t_s_s(p_25, (g_48.f4 != ((l_409.f1 == (g_48 , p_25)) != l_409.f2)))))), l_409.f3)), p_25);
    return l_409;
}







static struct S0 func_26(unsigned short p_27)
{
    unsigned l_40 = 0xDA828C04L;
    struct S0 l_165 = {0xD1L,0xF96CBEDFB4805B92LL,0L,0x9E8BE2EBL,0xB0FDDEACL};
    int l_166 = 9L;
    unsigned short l_175 = 0UL;
    unsigned short l_185 = 0xB109L;
    unsigned l_296 = 3UL;
    unsigned char l_312 = 255UL;
    unsigned l_341 = 0x2127C1FBL;
    l_165 = func_29(g_4, (safe_sub_func_uint64_t_u_u((p_27 > (0x1F6ED734895C4B79LL >= (p_27 || ((((func_36(l_40, l_40, (l_40 , p_27)) && p_27) & l_40) ^ g_4) , g_4)))), l_40)), g_4, l_40);
    l_166 = l_165.f0;
    for (g_164 = 0; (g_164 > (-22)); g_164--)
    {
        for (g_48.f1 = 4; (g_48.f1 == 1); g_48.f1 = safe_sub_func_uint64_t_u_u(g_48.f1, 8))
        {
            struct S0 l_174 = {-1L,0x28D7A2F4DF6C7F8FLL,0xDC13L,0x1652B824L,6UL};
            g_171 = 0x38AB0B14L;
            for (l_165.f3 = 18; (l_165.f3 >= (-15)); l_165.f3--)
            {
                return l_174;
            }
        }
        if (l_175)
            continue;
        for (g_69 = 0; (g_69 > (-14)); g_69 = safe_sub_func_int32_t_s_s(g_69, 1))
        {
            l_166 = g_171;
            for (p_27 = 0; (p_27 >= 15); p_27 = safe_add_func_uint16_t_u_u(p_27, 5))
            {
                struct S0 l_180 = {1L,0L,0x0418L,0x3AEAE043L,0x46F77F4DL};
                g_48 = g_48;
                return l_180;
            }
            return g_48;
        }
    }
    if ((p_27 ^ ((g_48.f3 || ((safe_sub_func_uint16_t_u_u((l_165.f2 == (g_155 , func_36((safe_add_func_int32_t_s_s(func_36(l_185, ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(func_41(l_165.f0, g_155, l_185), 0xB0A9F560L)), 0x2F29F115L)) , p_27), p_27), g_156)), p_27, p_27))), g_81)) == p_27)) && g_164)))
    {
        struct S0 l_190 = {0x9EL,0x970BE373B64E5738LL,7L,-2L,0xD295D964L};
        int l_193 = 0L;
        struct S0 l_213 = {0L,9L,1L,6L,0UL};
        unsigned l_276 = 0x8213D1F3L;
        int l_350 = 0xD9327C20L;
        g_171 = (((l_190 , g_149) < g_149) | 1UL);
        l_193 = ((g_149 , ((safe_rshift_func_int16_t_s_u(func_36((func_29(g_48.f2, ((((func_41(p_27, l_190.f4, l_190.f0) , ((func_41(func_41(p_27, l_190.f3, g_48.f4), l_165.f0, g_4) & g_154) < 0xACD4D962L)) || 248UL) , l_190.f3) > p_27), p_27, g_81) , p_27), g_171, p_27), 15)) , p_27)) || 0x3FL);
        if (p_27)
        {
            unsigned l_202 = 0x7D1BF06AL;
            int l_203 = 1L;
            l_203 = (((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((0x82L ^ 0xA9L) , (l_190.f4 ^ 0xC8L)) , (safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(func_41((((p_27 , (((((l_190.f4 , (0L == (func_41((func_29(l_202, l_190.f4, g_154, g_48.f0) , g_48.f0), p_27, l_40) , p_27))) , l_202) , g_48) , (-7L)) & p_27)) , p_27) , g_154), l_185, p_27), g_171)) != 18446744073709551615UL), g_171))), 8)), (-9L))) ^ p_27) && (-1L)) != 0xBC3C5A20AEDE11C7LL) < p_27);
        }
        else
        {
            short l_222 = 9L;
            struct S0 l_254 = {-1L,1L,0x36DBL,-7L,4294967292UL};
            short l_261 = 0xD2E8L;
            int l_264 = 0xEB5E6DA3L;
            unsigned long long l_277 = 0xEE9B9BCCF346CF62LL;
            struct S0 l_359 = {0L,0L,2L,-1L,4294967287UL};
            if ((p_27 <= 0xBBCBL))
            {
                short l_212 = 1L;
                l_212 = (func_45(((g_81 , (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_27, p_27)) | l_193), 10))) ^ (safe_rshift_func_uint8_t_u_u(0UL, 6)))) | (!g_155));
                return l_213;
            }
            else
            {
                unsigned short l_221 = 1UL;
                int l_265 = 0xDEECB3B7L;
                if ((((0x4506L > 65535UL) , g_164) , (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(func_41((safe_lshift_func_int8_t_s_u(0L, (p_27 > (safe_unary_minus_func_uint64_t_u((((func_41(p_27, l_165.f3, l_221) | l_190.f2) && l_221) > l_213.f1)))))), p_27, l_222), g_156)) && l_221), l_213.f3))))
                {
                    char l_223 = 0x9BL;
                    int l_224 = 0L;
                    l_224 = l_223;
                    g_171 = ((safe_lshift_func_int16_t_s_s((g_149 , (p_27 , (0UL <= p_27))), (65535UL == (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((+(safe_lshift_func_int16_t_s_u(l_221, 3))), ((8L | p_27) || (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((func_36(((l_222 == p_27) < p_27), g_154, g_48.f1) <= 0xDFD2DB43L), g_4)), g_171)) == g_154) | g_4)))), l_222))))) , p_27);
                    for (l_190.f2 = 0; (l_190.f2 == 1); ++l_190.f2)
                    {
                        if (l_224)
                            break;
                        g_247 = func_29(((l_166 && (((safe_add_func_uint16_t_u_u(p_27, (safe_rshift_func_uint16_t_u_u((l_213.f1 & g_48.f3), 11)))) ^ 0x62CEF5FAAF09B1D9LL) || (p_27 , (l_221 , ((l_221 , ((safe_sub_func_int8_t_s_s(((((func_41(func_45((safe_sub_func_int8_t_s_s(g_48.f0, g_48.f4))), l_213.f2, p_27) , l_221) , 0xCDL) & (-3L)) != 0xECEDL), l_221)) , p_27)) && p_27))))) , g_48.f1), p_27, l_224, g_4);
                        return l_213;
                    }
                }
                else
                {
                    int l_250 = 9L;
                    for (l_165.f3 = 0; (l_165.f3 >= 26); l_165.f3 = safe_add_func_uint32_t_u_u(l_165.f3, 7))
                    {
                        g_171 = p_27;
                        g_171 = ((func_45(p_27) & ((l_221 || l_213.f1) & l_250)) && (g_171 && ((safe_unary_minus_func_int64_t_s((!(func_36(g_48.f4, (safe_rshift_func_uint16_t_u_s(g_48.f1, (p_27 != l_222))), p_27) , g_247.f2)))) > p_27)));
                        return l_254;
                    }
                    l_265 = (8L && (p_27 | (safe_mod_func_uint32_t_u_u((((!(-7L)) , (safe_lshift_func_int16_t_s_s(p_27, 11))) || (((safe_sub_func_uint16_t_u_u(l_261, 0x85C9L)) && l_250) >= (safe_add_func_uint8_t_u_u(((p_27 >= 6L) , 0UL), l_165.f1)))), l_264))));
                    l_265 = func_41(p_27, (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(1L, 11)) ^ p_27), (((safe_lshift_func_uint8_t_u_s((((p_27 || 0L) > (((l_165.f0 >= (p_27 != l_165.f0)) ^ g_48.f1) & p_27)) , 0x1CL), p_27)) != p_27) >= p_27))), p_27);
                    if (((g_247.f2 , ((safe_rshift_func_int8_t_s_s((((p_27 , (((func_41(p_27, ((l_213.f2 || func_36(func_41((safe_sub_func_uint16_t_u_u((func_45(p_27) > (l_190.f1 >= ((p_27 & l_254.f3) ^ l_221))), 0x66B7L)), p_27, p_27), l_276, g_247.f4)) | (-1L)), g_247.f1) > 0x59L) != l_277) | 0UL)) , g_247.f0) || g_48.f3), 3)) == 0xE9F9L)) , g_48.f1))
                    {
                        int l_295 = (-1L);
                        l_295 = ((safe_mod_func_int32_t_s_s((l_250 == ((((safe_add_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(l_40, (((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(((l_166 < g_4) >= (((~((0L || p_27) , (g_156 || ((((safe_lshift_func_uint8_t_u_s(((+(safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(g_48.f2, (safe_unary_minus_func_int16_t_s((p_27 , l_175))))), 0))) < 247UL), g_149)) <= g_4) > g_156) != g_247.f2)))) < p_27) & l_250)), p_27)), g_4)) != l_265) ^ g_247.f4))) | g_48.f0), 0UL)) , g_48.f0) != l_295) , 0x64FDL)), g_247.f2)) | l_296);
                        g_247 = l_213;
                    }
                    else
                    {
                        int l_311 = 0x101F3979L;
                        l_265 = ((safe_add_func_uint8_t_u_u((+((safe_sub_func_uint8_t_u_u((1L | ((safe_add_func_uint32_t_u_u(g_48.f4, ((func_41(p_27, (safe_rshift_func_int8_t_s_u((p_27 , p_27), 1)), func_41(((~((func_41(g_48.f3, (func_41((0x8716988AL == (((-9L) || ((+l_213.f0) , g_81)) && l_250)), l_250, p_27) || g_4), p_27) | 0L) , 0xEE0E000EL)) | p_27), l_213.f3, g_247.f3)) & g_48.f3) != p_27))) != 0x5F7E6AA0FA19F6DDLL)), 0xF0L)) , l_250)), g_48.f2)) < l_250);
                        l_312 = ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(func_36(g_149, p_27, (((l_254.f3 , (g_171 , p_27)) && (((safe_rshift_func_uint16_t_u_u((g_149 != 4294967295UL), func_41(p_27, p_27, p_27))) & g_247.f0) | 0xB51BDFFC9A4B7BF0LL)) , l_311)), 4)) != 65529UL) && 65535UL), (-5L))) && p_27);
                        g_171 = g_155;
                        g_171 = ((safe_sub_func_uint8_t_u_u(p_27, (safe_mod_func_uint16_t_u_u(g_48.f3, (l_265 | ((((~((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(p_27, (safe_add_func_int8_t_s_s(((func_41((safe_add_func_uint32_t_u_u(g_155, l_265)), g_48.f2, l_254.f2) | g_171) & 0xCEL), 0x2AL)))), 3)) | g_247.f4)) && g_164) < p_27) , 2UL)))))) , 1L);
                    }
                }
                if (((safe_rshift_func_uint8_t_u_u((0L >= (((safe_lshift_func_uint8_t_u_u(func_45(p_27), l_276)) | l_213.f4) > g_164)), p_27)) <= (safe_rshift_func_int16_t_s_s(l_193, (safe_rshift_func_uint8_t_u_u(p_27, 3))))))
                {
                    unsigned l_339 = 18446744073709551613UL;
                    struct S0 l_340 = {8L,-5L,0xC3D0L,0L,0xB950C5E9L};
                    l_166 = ((p_27 == g_81) , (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(l_339, g_48.f0)) > func_41(l_165.f2, ((((((((func_41((p_27 , 0x96L), (p_27 != 1L), p_27) != 0x205C9C4CL) , l_265) == l_221) >= g_171) , l_340) , 7UL) , g_149) > (-1L)), l_277)) || 0x2C1FL), p_27)) >= g_155) ^ l_165.f3) && 0x379A0499L), l_341)));
                    for (l_165.f2 = (-19); (l_165.f2 >= 0); l_165.f2 = safe_add_func_int64_t_s_s(l_165.f2, 1))
                    {
                        l_359 = func_29(l_165.f2, l_340.f1, (safe_mod_func_uint64_t_u_u((!(((safe_sub_func_int32_t_s_s(((g_48.f2 == (func_41((g_4 && ((func_41(((safe_lshift_func_uint8_t_u_s(((l_350 , ((l_165.f2 ^ (safe_sub_func_int64_t_s_s(((((safe_rshift_func_uint16_t_u_s(65534UL, 8)) != (p_27 && (safe_sub_func_int8_t_s_s(((((((((safe_rshift_func_int8_t_s_s(l_165.f0, 5)) == l_261) != 0x94FC5A9CL) , 0x7113E96B69F79CD5LL) ^ g_48.f0) >= p_27) , 1L) || l_254.f1), g_247.f2)))) | g_4) | 1L), g_247.f0))) != p_27)) || l_221), p_27)) , g_164), p_27, g_164) & p_27) | p_27)), g_171, g_247.f2) ^ g_247.f2)) != 5UL), p_27)) , p_27) > p_27)), g_4)), g_156);
                        if (p_27)
                            break;
                        l_350 = (safe_lshift_func_int8_t_s_u((0x09L ^ (safe_lshift_func_int16_t_s_s(g_48.f0, 5))), 1));
                    }
                }
                else
                {
                    unsigned l_375 = 0x2CE8FD7EL;
                    int l_392 = 0x893DC634L;
                    l_165 = g_48;
                    l_375 = ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_27, ((((safe_mod_func_int8_t_s_s(g_137, 0xE4L)) | (((p_27 < (func_41((((safe_add_func_int8_t_s_s((!g_247.f4), ((g_154 <= g_69) >= p_27))) | (+g_155)) != p_27), g_374, g_247.f1) , p_27)) == p_27) , 0x34E5C464219A541FLL)) > g_149) , 0UL))), p_27)) < 0x1359F148L) , 0x1843L), 4)) != g_247.f4);
                    if (g_247.f1)
                    {
                        g_48 = l_254;
                        g_171 = (g_48.f4 & (safe_lshift_func_int8_t_s_s(p_27, 1)));
                        g_171 = (safe_lshift_func_int8_t_s_s(g_156, 2));
                    }
                    else
                    {
                        unsigned short l_391 = 0xA583L;
                        g_171 = (((safe_sub_func_uint16_t_u_u(g_48.f1, g_48.f4)) , (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_27, 1)), p_27))) & 0x1616FBDBL);
                        l_190 = g_247;
                        l_392 = (safe_mod_func_int32_t_s_s((func_36((g_48.f1 || l_375), (0x5ACF06F11A5ECB20LL || ((((g_247.f3 , l_175) && (safe_sub_func_uint16_t_u_u((p_27 != (func_41(((p_27 ^ (0xBCD2L != (safe_unary_minus_func_int64_t_s((+1L))))) >= g_374), p_27, p_27) && l_190.f4)), g_154))) <= g_149) , g_48.f4)), l_193) , 1L), l_391));
                    }
                }
                g_48 = l_359;
            }
        }
    }
    else
    {
        unsigned l_397 = 0x50F0944CL;
        l_166 = (((p_27 , (!((safe_sub_func_uint32_t_u_u((!(l_397 , (safe_mod_func_int16_t_s_s((-10L), 0x54FAL)))), (l_40 && g_48.f1))) , (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(g_164)), ((safe_rshift_func_int16_t_s_u((+(safe_rshift_func_uint8_t_u_u(g_48.f1, g_247.f1))), 12)) == 0x39L))) , l_397), p_27))))) != 0L) > 0xFF6CD7C1FDB081EBLL);
    }
    return l_165;
}







static struct S0 func_29(unsigned p_30, int p_31, int p_32, unsigned short p_33)
{
    unsigned l_77 = 4294967292UL;
    int l_80 = 0x3A67FE42L;
    int l_90 = (-1L);
    int l_130 = 0x2D19C510L;
    struct S0 l_148 = {9L,0x3E3C2ACCF6335B14LL,1L,-6L,4294967295UL};
    g_81 = ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_77, g_48.f1)) , ((((((l_77 > ((0xD26016E5DCA5B7F4LL & ((~((0L && ((((l_77 & func_41(l_77, (safe_rshift_func_int8_t_s_s(l_77, (((-1L) <= l_77) < 4294967286UL))), l_77)) | g_48.f0) , (-3L)) & 0xFE0EC9289037596CLL)) && g_48.f1)) & p_31)) , 0x0FL)) < l_80) == 0xDDECA68EB2A14D58LL) | g_4) ^ l_77) | g_48.f1)), l_77)), g_48.f1)) > l_80);
    if ((func_41((0xA7FFL ^ (safe_sub_func_int32_t_s_s(p_33, (safe_sub_func_uint16_t_u_u(p_32, l_77))))), ((l_80 , ((((0L ^ (safe_mod_func_int64_t_s_s((g_48.f4 & (((func_41(p_31, ((((safe_lshift_func_int8_t_s_s((((((g_48.f2 != g_48.f3) < 0x0BL) < 0xA6A910B1L) , l_80) | 1UL), 0)) != 0L) , g_48.f3) <= 1UL), l_77) | l_90) & p_33) && p_31)), (-7L)))) & l_90) & l_80) , l_90)) , l_90), l_77) <= 1UL))
    {
        struct S0 l_126 = {4L,0x49CFF131093E8F6ELL,-5L,0xA7B5E453L,4294967295UL};
        int l_131 = (-8L);
        long long l_136 = (-1L);
        unsigned l_147 = 0xEFFBD2F4L;
        for (g_4 = 21; (g_4 <= 41); ++g_4)
        {
            return g_48;
        }
        if ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_32, g_4)), g_48.f3)))
        {
            unsigned long long l_127 = 3UL;
            unsigned short l_128 = 1UL;
            unsigned short l_129 = 0UL;
            int l_150 = 0x941D4D58L;
            for (p_30 = 0; (p_30 <= 24); ++p_30)
            {
                struct S0 l_121 = {0L,0xCEA876B16355718CLL,0x2972L,-9L,0x652091CAL};
                if ((func_41(((((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((func_41((safe_sub_func_uint32_t_u_u(g_48.f0, ((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((p_32 < (safe_add_func_uint32_t_u_u(g_48.f4, ((safe_mod_func_int32_t_s_s(func_41((((p_33 < (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_121 , ((safe_add_func_uint8_t_u_u((~((safe_rshift_func_int16_t_s_s((func_41((l_126 , ((((func_41(g_81, g_69, (~g_81)) , p_31) < 0UL) ^ g_81) , 1UL)), g_48.f4, g_48.f4) > p_31), 0)) < 0x763EEA7E5B6355D2LL)), l_121.f2)) >= 0UL)), l_77)), 0)) || p_31), 7))) | 4UL) >= g_48.f1), g_48.f2, l_127), 0x6BA46063L)) == l_77)))), 0UL)) | l_126.f2), g_81)) , 0x583E1B12L))), g_4, g_48.f3) , 0x2FL), l_127)), l_128)), 0xA6L)) && l_121.f2) , l_129) & l_126.f2) || g_81) , g_48.f1), l_130, l_131) | g_4))
                {
                    p_32 = l_77;
                    g_137 = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_136, 0x415CL)), 2L)) <= (l_121.f2 , l_128));
                }
                else
                {
                    unsigned short l_144 = 65534UL;
                    struct S0 l_153 = {0x9AL,0x6C974F601976A6A2LL,1L,0L,0xCB4505FAL};
                    if (func_45((safe_rshift_func_int16_t_s_s(7L, (safe_rshift_func_int8_t_s_u(func_41((safe_sub_func_int64_t_s_s(l_144, 1L)), (g_137 < func_45((1UL & (((((-9L) >= func_45(((safe_lshift_func_uint8_t_u_u((+(0x7FL != (func_45((g_137 , ((-5L) >= p_32))) <= 0x87E6F670L))), g_4)) ^ (-1L)))) >= l_121.f0) <= l_147) ^ g_4)))), l_144), 6))))))
                    {
                        l_131 = g_137;
                        g_48 = g_48;
                        l_126 = l_148;
                    }
                    else
                    {
                        g_149 = (p_33 , (l_126.f0 , l_148.f1));
                        l_150 = 0x602B377AL;
                    }
                    for (g_48.f1 = 0; (g_48.f1 != (-26)); g_48.f1--)
                    {
                        l_153 = g_48;
                        p_32 = (p_30 <= p_30);
                        g_154 = g_137;
                    }
                    l_148 = l_153;
                }
                g_155 = 0L;
            }
        }
        else
        {
            short l_163 = 0L;
            g_156 = p_30;
            for (p_32 = 0; (p_32 != (-26)); p_32--)
            {
                return g_48;
            }
            l_131 = (p_33 & (g_137 > ((safe_sub_func_int16_t_s_s(0x0EDBL, func_45(g_81))) ^ (l_148 , (((safe_lshift_func_uint16_t_u_u(g_155, l_163)) , p_30) == l_136)))));
            g_164 = (p_32 < (-8L));
        }
    }
    else
    {
        p_32 = p_31;
    }
    return l_148;
}







static short func_36(short p_37, short p_38, unsigned short p_39)
{
    int l_49 = 0L;
    int l_70 = (-2L);
    l_70 = func_41(func_45((g_4 , g_4)), l_49, (l_49 , l_49));
    return g_69;
}







static int func_41(unsigned char p_42, int p_43, unsigned short p_44)
{
    int l_50 = (-9L);
    char l_51 = (-1L);
    short l_68 = 1L;
    l_51 = l_50;
    l_50 = g_48.f3;
    g_69 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_48.f1, (safe_lshift_func_int16_t_s_u((g_48.f4 , (safe_mod_func_uint32_t_u_u(g_48.f3, (safe_add_func_int8_t_s_s((l_50 < ((safe_rshift_func_uint16_t_u_s(g_48.f2, p_42)) , 1UL)), (g_48.f2 == ((safe_add_func_uint32_t_u_u(g_48.f0, p_42)) , g_48.f2))))))), l_51)))), l_68)), g_4));
    return l_50;
}







static unsigned char func_45(int p_46)
{
    struct S0 l_47 = {1L,0L,0x6105L,0x61CA7276L,0x63A47399L};
    g_48 = l_47;
    g_48 = g_48;
    return g_48.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_48.f4, "g_48.f4", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_247.f1, "g_247.f1", print_hash_value);
    transparent_crc(g_247.f2, "g_247.f2", print_hash_value);
    transparent_crc(g_247.f3, "g_247.f3", print_hash_value);
    transparent_crc(g_247.f4, "g_247.f4", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_573.f0, "g_573.f0", print_hash_value);
    transparent_crc(g_573.f1, "g_573.f1", print_hash_value);
    transparent_crc(g_573.f2, "g_573.f2", print_hash_value);
    transparent_crc(g_573.f3, "g_573.f3", print_hash_value);
    transparent_crc(g_573.f4, "g_573.f4", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
