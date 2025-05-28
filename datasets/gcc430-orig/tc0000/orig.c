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
   unsigned char f0;
   int f1;
   unsigned short f2;
   unsigned f3;
   volatile unsigned char f4;
   volatile unsigned short f5;
   unsigned f6;
   short f7;
   short f8;
   unsigned char f9;
};

union U1 {
   unsigned char f0;
   unsigned f1;
   int f2;
   unsigned char f3;
};


static struct S0 g_2 = {0UL,0xA2FAFD11L,1UL,4294967295UL,0xD0L,65535UL,0x35A23E86L,0x8C7BL,0xC6EFL,0x3DL};
static struct S0 g_3 = {0xF6L,0x858905B8L,0x78ACL,1UL,0xC7L,65526UL,0x15E314A5L,0L,0x4A90L,0x6DL};
static char g_104 = 0x8EL;
static unsigned short g_150 = 0x3209L;
static unsigned g_151 = 0UL;
static union U1 g_209 = {0UL};
static short g_240 = 0x4D9AL;
static unsigned short g_244 = 0x611CL;
static unsigned short g_281 = 65530UL;
static unsigned g_286 = 0xA83810A5L;
static short g_354 = 0xE331L;
static unsigned g_435 = 0x83901A58L;
static union U1 g_550 = {0x1FL};
static int g_641 = 0xBEF51BD3L;
static short g_810 = (-8L);
static int g_822 = 1L;
static char g_931 = 0xF6L;
static unsigned g_992 = 0UL;
static int g_1210 = 0L;
static unsigned g_1318 = 0x9EF9E8CCL;
static unsigned char g_1319 = 2UL;
static unsigned g_1466 = 0UL;
static int g_1576 = (-1L);
static short g_1754 = (-4L);



static char func_1(void);
static short func_8(unsigned char p_9);
static short func_12(short p_13, unsigned short p_14, unsigned short p_15, char p_16);
static char func_22(unsigned p_23, unsigned p_24, int p_25, char p_26);
static union U1 func_29(unsigned p_30, union U1 p_31, unsigned p_32);
static unsigned func_33(int p_34, int p_35, unsigned p_36, unsigned p_37, unsigned short p_38);
static unsigned short func_41(short p_42, unsigned short p_43, unsigned p_44, short p_45);
static unsigned char func_48(short p_49, unsigned short p_50);
static unsigned short func_61(union U1 p_62, char p_63, unsigned p_64, unsigned p_65, unsigned short p_66);
static union U1 func_67(unsigned short p_68, unsigned short p_69, short p_70);
static char func_1(void)
{
    unsigned char l_19 = 5UL;
    union U1 l_1733 = {1UL};
    unsigned l_1734 = 18446744073709551611UL;
    int l_1812 = 0x12F6EB4AL;
    g_3 = g_2;
    g_3 = g_3;
    g_2.f1 |= 0x2DA3C3D2L;
    l_1812 = (g_3.f4 & ((safe_add_func_int16_t_s_s(func_8((0xE712L & (1UL == (((safe_div_func_int16_t_s_s(func_12(g_3.f9, (safe_sub_func_uint8_t_u_u(g_3.f6, l_19)), (safe_mul_func_int8_t_s_s((g_2.f8 , func_22(((safe_lshift_func_uint16_t_u_u(((g_209 = func_29(l_19, (func_33((safe_add_func_uint16_t_u_u(func_41(((safe_lshift_func_uint8_t_u_u(func_48((g_2.f2 , g_2.f6), g_3.f7), g_641)) < l_19), l_19, g_992, g_992), l_19)), l_19, g_2.f8, g_1466, l_19) , l_1733), l_1734)) , 0xAD9CL), g_3.f6)) <= 0x8A9200A6L), g_3.f6, g_3.f1, g_1318)), l_1734)), l_19), l_19)) <= g_1318) & l_19)))), 7UL)) < g_3.f6));
    return l_1812;
}







static short func_8(unsigned char p_9)
{
    int l_1811 = (-1L);
    for (g_992 = 0; (g_992 <= 40); g_992++)
    {
        l_1811 = p_9;
    }
    return p_9;
}







static short func_12(short p_13, unsigned short p_14, unsigned short p_15, char p_16)
{
    char l_1800 = 1L;
    int l_1803 = 0L;
    int l_1806 = (-3L);
    l_1806 = ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((g_3.f1 = (-7L)), 0x44C0CFBCL)) | l_1800), 2)), g_104)) ^ (safe_mod_func_int32_t_s_s((g_240 != ((l_1803 &= l_1800) , ((safe_add_func_uint8_t_u_u((g_209 , p_15), (g_281 , l_1803))) , p_16))), 0x8D687264L)));
    l_1803 |= (safe_rshift_func_uint16_t_u_s(p_15, 4));
    l_1803 = l_1803;
    return g_2.f6;
}







static char func_22(unsigned p_23, unsigned p_24, int p_25, char p_26)
{
    int l_1759 = 0x56285C5AL;
    unsigned short l_1783 = 0x2D7AL;
    int l_1788 = 0L;
    int l_1789 = 0x07CF9219L;
    int l_1790 = 0x64A2F6D5L;
    int l_1791 = 0xF7E49C25L;
    for (p_25 = 0; (p_25 > 11); p_25 = safe_add_func_int8_t_s_s(p_25, 8))
    {
        unsigned l_1760 = 0xCAD5F7BEL;
        l_1760 = (l_1759 = 0x93CBD7FAL);
    }
    g_1210 |= (safe_lshift_func_int16_t_s_u((l_1759 < ((safe_rshift_func_uint16_t_u_u((0xFA5CL && (p_26 , ((safe_div_func_int16_t_s_s((((((g_281 ^= (g_2.f2 ^= 65535UL)) | (safe_lshift_func_int8_t_s_s(((((p_26 = ((1UL ^ (((((0x54L || 0x8CL) , (((~0x8E52L) ^ p_24) || p_23)) != g_151) && p_25) == p_26)) <= p_23)) != 255UL) <= l_1759) >= g_2.f9), 0))) <= p_23) >= p_25) , l_1759), 1UL)) == (-7L)))), 6)) < p_23)), p_24));
    g_1576 = (safe_sub_func_uint16_t_u_u((func_67((l_1791 = (l_1790 = (p_25 <= (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((((((g_2.f2 = (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((g_209.f1 = (p_26 | (safe_sub_func_int32_t_s_s(l_1783, (((l_1789 = (l_1788 = ((((((p_24 = (safe_rshift_func_uint8_t_u_u(246UL, g_3.f1))) == 9L) <= (p_23 > g_2.f3)) != (((((l_1759 ^= (0x0126L | p_23)) , 0xEF0391B4L) == 0UL) , p_25) == 1UL)) != l_1783) | p_26))) || l_1789) != (-4L)))))), l_1783)) || g_3.f0), 0x351F2EA5L))) | 0xD4F2L) , p_25) == l_1783) , p_25) | l_1783), g_2.f0)) ^ l_1783), g_1754))))), l_1783, g_1210) , 0x98B9L), 0UL));
    l_1789 = (safe_lshift_func_int8_t_s_u(0x12L, 7));
    return p_24;
}







static union U1 func_29(unsigned p_30, union U1 p_31, unsigned p_32)
{
    unsigned short l_1737 = 1UL;
    int l_1748 = 0x6D9312CCL;
    char l_1749 = 0L;
    unsigned char l_1750 = 0xA1L;
    int l_1751 = 0xA222FDFAL;
    unsigned l_1752 = 0xE5D5EEE9L;
    unsigned l_1753 = 0xA6854096L;
    unsigned char l_1755 = 0xF1L;
    unsigned short l_1756 = 65535UL;
    l_1751 ^= (((g_3.f6 , ((g_550 , (((safe_add_func_int16_t_s_s((g_2.f8 ^= l_1737), func_41(l_1737, g_1318, (((safe_sub_func_int32_t_s_s(g_992, (g_2.f3 , ((func_41((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(p_32, (((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((func_41((l_1748 = func_41(g_3.f7, p_31.f3, g_2.f0, g_3.f9)), g_104, l_1749, g_2.f9) ^ p_31.f3), 6)), p_30)) <= l_1737) , g_931))), l_1750)) & l_1737) == p_32), g_354, g_550.f0, g_209.f3) && 0x59L) && 0x34L)))) ^ g_3.f0) | p_31.f3), l_1737))) , l_1749) , g_822)) < 0x2477FA9BL)) & 65535UL) ^ p_31.f3);
    l_1748 |= ((((func_33(func_33(l_1751, l_1752, l_1753, l_1752, l_1750), (0x04C4A300L >= (g_1754 ^= ((1L && g_3.f1) == g_992))), g_1466, l_1751, g_1318) && 0UL) | l_1755) , l_1750) < l_1755);
    l_1756 = g_1466;
    l_1748 = p_30;
    return g_209;
}







static unsigned func_33(int p_34, int p_35, unsigned p_36, unsigned p_37, unsigned short p_38)
{
    short l_1630 = 0x024AL;
    int l_1631 = (-1L);
    union U1 l_1634 = {1UL};
    int l_1637 = 1L;
    unsigned short l_1643 = 65535UL;
    unsigned short l_1671 = 65535UL;
    g_1210 = (p_34 = (((l_1630 = p_34) & (0x4690L >= 65528UL)) != ((g_1319 , l_1631) , (g_822 &= (g_2.f1 ^= g_2.f2)))));
    l_1631 = p_36;
    l_1637 = ((safe_div_func_int32_t_s_s(((1L || func_61(l_1634, ((safe_sub_func_int8_t_s_s((l_1631 = func_48(((func_48(func_48(l_1634.f0, (g_286 >= g_2.f9)), g_992) , g_3.f0) && l_1630), l_1634.f0)), 0x73L)) , l_1634.f0), g_1318, l_1630, g_1466)) , 0L), l_1630)) || 255UL);
    for (g_3.f7 = 0; (g_3.f7 >= (-8)); --g_3.f7)
    {
        unsigned l_1642 = 0x95B9DED5L;
        int l_1647 = 8L;
        unsigned short l_1656 = 0x098EL;
        unsigned l_1666 = 0xACA0E395L;
        if (((safe_sub_func_uint16_t_u_u(((~p_38) <= p_36), g_822)) != (g_104 = (((func_41(g_1319, l_1642, (l_1631 != (l_1630 & (p_38 < ((g_150 &= func_41(l_1642, l_1642, l_1643, l_1642)) == p_38)))), p_35) , p_38) , l_1643) && 0x8E87L))))
        {
            short l_1644 = 0xD629L;
            l_1644 |= g_2.f3;
        }
        else
        {
            union U1 l_1648 = {252UL};
            char l_1651 = 0xF4L;
            int l_1699 = 0xF8265F5EL;
            int l_1732 = 1L;
            p_34 = g_822;
            if ((0xC5L & (p_38 >= (safe_lshift_func_int16_t_s_s(((l_1647 = 255UL) >= (l_1637 ^= (p_37 || 0xBF84L))), ((l_1631 = ((l_1648 = g_550) , ((func_41(g_3.f0, g_2.f9, (safe_div_func_uint16_t_u_u(p_35, l_1642)), l_1651) != l_1642) , 0x7F93L))) & g_354))))))
            {
                for (l_1648.f1 = (-17); (l_1648.f1 != 31); l_1648.f1++)
                {
                    return p_36;
                }
                for (l_1648.f3 = (-22); (l_1648.f3 <= 51); l_1648.f3 = safe_add_func_uint32_t_u_u(l_1648.f3, 9))
                {
                    l_1656 |= ((p_37 ^ l_1630) && 246UL);
                }
            }
            else
            {
                int l_1665 = (-7L);
                int l_1680 = (-1L);
                int l_1681 = 0L;
                int l_1682 = 0x39BB0E76L;
                unsigned l_1716 = 0x8872C8C9L;
                unsigned l_1729 = 0xC4EEFECCL;
                p_34 = (g_2.f6 | (((g_550 = l_1634) , (((func_41(((l_1631 = ((p_38 == (safe_lshift_func_int16_t_s_u(g_2.f1, 4))) != (safe_sub_func_uint32_t_u_u(((g_2.f9 > (l_1647 = p_38)) & (p_37 >= ((~(l_1643 != (safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0L, p_38)) , p_35), 0L)))) == l_1665))), 9L)))) , g_550.f0), l_1665, g_354, p_38) != l_1634.f0) , p_37) > g_3.f1)) > 0xF7L));
                if ((~func_41(l_1666, p_38, ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((l_1666 != p_37) & p_34), l_1671)), ((l_1682 = ((safe_mod_func_uint16_t_u_u((l_1681 = ((l_1680 = ((l_1631 = ((safe_lshift_func_uint8_t_u_u((p_35 == 0x1E1FL), ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0xEFL, p_35)), g_286)) >= 0x67C0L))) < g_3.f0)) < g_3.f3)) , l_1665)), p_34)) >= p_36)) || g_3.f3))) , 4294967290UL), l_1656)))
                {
                    unsigned char l_1685 = 0xBCL;
                    int l_1703 = 0xFA652F92L;
                    for (l_1634.f2 = 29; (l_1634.f2 >= (-8)); --l_1634.f2)
                    {
                        unsigned l_1692 = 0xF3316903L;
                        int l_1702 = 0x89E7E20AL;
                        if (l_1685)
                            break;
                        g_822 = (-1L);
                        g_822 = func_41(((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_1642 || func_41((l_1692 < (((safe_sub_func_int32_t_s_s(0x4677099EL, (safe_add_func_int32_t_s_s(0xFD99D8E3L, ((l_1703 = (safe_sub_func_int8_t_s_s((l_1699 = 0x92L), ((func_41((((safe_lshift_func_int8_t_s_s(p_37, 6)) ^ (((1UL <= g_1576) , func_41((l_1702 &= l_1648.f3), l_1682, p_36, g_1210)) & g_2.f6)) , p_36), l_1647, l_1692, l_1671) , 0x4CL) | 0UL)))) == p_35))))) , l_1692) <= 0xE5L)), p_38, l_1682, g_3.f6)), l_1692)), p_37)) >= 0x3E93L), p_36, p_37, l_1651);
                    }
                    p_35 = (safe_lshift_func_uint8_t_u_u(p_35, (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_1318, g_2.f0)), (((safe_div_func_uint16_t_u_u(l_1665, func_41(p_37, l_1671, (safe_lshift_func_int16_t_s_u(0xD964L, ((((((p_36 > (l_1699 = (p_36 != 0x198D8FD0L))) == 0xF9L) | l_1665) , g_641) <= l_1666) && p_36))), l_1637))) && l_1716) , 1UL)))));
                    l_1729 = (safe_sub_func_int32_t_s_s(((g_2.f7 , (func_41((g_354 ^= func_41(func_41((g_2.f7 = func_41(l_1630, g_2.f3, (safe_sub_func_uint16_t_u_u(func_41(g_150, p_37, (l_1682 = (p_36 ^= (((l_1666 == (safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_641, p_37)) || (safe_lshift_func_int16_t_s_u(p_37, 3))), p_38)), l_1648.f3))) , l_1631) , g_286))), p_38), l_1648.f3)), g_2.f8)), g_281, g_209.f0, p_34), l_1666, g_240, p_38)), l_1634.f2, l_1656, g_209.f0) & l_1666)) & g_3.f8), (-9L)));
                    if (p_37)
                        continue;
                }
                else
                {
                    for (l_1648.f2 = 0; (l_1648.f2 > (-21)); l_1648.f2 = safe_sub_func_uint8_t_u_u(l_1648.f2, 5))
                    {
                        g_822 ^= 0xF03A8508L;
                    }
                }
                p_35 ^= (4L && (func_41(g_354, l_1666, p_37, (l_1732 <= ((l_1631 = p_36) , (l_1682 = p_36)))) , ((l_1665 && g_3.f3) & 0xEEL)));
            }
            if (l_1647)
                break;
        }
    }
    return g_931;
}







static unsigned short func_41(short p_42, unsigned short p_43, unsigned p_44, short p_45)
{
    int l_1613 = 0x19A13630L;
    union U1 l_1617 = {0xC2L};
    unsigned short l_1624 = 0x54C5L;
    int l_1625 = 0L;
    unsigned char l_1626 = 0xD6L;
    int l_1627 = (-2L);
    int l_1628 = (-10L);
    int l_1629 = (-1L);
    g_2.f1 &= (l_1629 = (l_1613 = (((l_1613 == (l_1627 = (safe_add_func_int32_t_s_s(((g_151 |= (((((l_1626 = ((((((!(((l_1613 , ((safe_unary_minus_func_int16_t_s((l_1625 = (l_1617 , ((((((((l_1613 , p_44) <= g_3.f1) ^ (safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((g_2.f6 | 0L) & l_1624), g_3.f2)), l_1624)) & 3UL), 0xB2L))) != 0xAD56L) && 0x9AL) >= l_1617.f0) == 4294967290UL) == g_1466))))) ^ 0x25L)) <= l_1624) ^ p_45)) || 0xD27BC9ACL) != 0L) != p_45) && p_45) == 0x17D1L)) || g_3.f0) >= 65531UL) | 1UL) == (-1L))) , l_1624), 0UL)))) || l_1617.f0) ^ l_1628)));
    return l_1628;
}







static unsigned char func_48(short p_49, unsigned short p_50)
{
    unsigned l_57 = 0x3CF54CEAL;
    int l_58 = 1L;
    int l_73 = 0x9BFBD42FL;
    int l_74 = 0x81468F30L;
    int l_1612 = 0xFB4E64EEL;
    l_1612 = (g_1576 = (((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((l_58 |= (!(l_57 || l_57))) <= (safe_div_func_uint32_t_u_u(0x74E6A83BL, ((p_49 ^ ((g_3.f1 ^ (-5L)) < func_61(func_67(p_49, (safe_sub_func_uint8_t_u_u((((l_74 ^= (l_73 = g_3.f6)) >= p_49) > g_2.f3), g_2.f7)), p_49), l_57, g_3.f6, l_57, g_3.f9))) && p_50)))), p_50)) >= g_3.f6), (-4L))), p_50)) < p_49) == g_641));
    l_74 = 0x39400993L;
    return g_1318;
}







static unsigned short func_61(union U1 p_62, char p_63, unsigned p_64, unsigned p_65, unsigned short p_66)
{
    int l_982 = 0xC334C97EL;
    int l_1012 = 0x8DF261E5L;
    int l_1031 = 6L;
    short l_1055 = (-1L);
    int l_1066 = 0x9D57B55AL;
    unsigned char l_1180 = 0x13L;
    union U1 l_1304 = {1UL};
    int l_1344 = 0L;
    unsigned l_1433 = 0x4A755059L;
    int l_1554 = 0xBBE5A327L;
    if (l_982)
    {
        int l_989 = 2L;
        int l_994 = 2L;
        unsigned short l_1075 = 65528UL;
        if (((4294967292UL < g_550.f0) , ((p_64 &= (((safe_lshift_func_uint16_t_u_s((+((safe_lshift_func_uint16_t_u_s(g_104, (safe_sub_func_uint32_t_u_u(g_3.f9, (p_62.f3 , (g_822 = l_982)))))) | l_989)), 5)) , ((g_104 = (p_62.f3 , g_281)) <= 255UL)) < l_982)) , g_2.f7)))
        {
lbl_1134:
            l_982 = g_2.f3;
        }
        else
        {
            int l_993 = 0L;
            l_982 = (safe_mul_func_uint8_t_u_u(g_2.f0, l_989));
            g_2.f1 = (((g_992 <= (p_64 != (l_993 > (2L | g_3.f7)))) < 1UL) , (g_822 = (((l_993 |= ((p_63 = l_989) | (l_994 = (g_810 , (((!(g_2.f2 & 65531UL)) ^ 0xCCA9L) != l_982))))) & p_65) & 0x9E9DL)));
        }
        if (g_209.f0)
        {
            unsigned short l_1002 = 65535UL;
            int l_1014 = 1L;
            union U1 l_1096 = {4UL};
            for (g_550.f1 = 0; (g_550.f1 != 40); g_550.f1 = safe_add_func_uint8_t_u_u(g_550.f1, 3))
            {
                unsigned char l_1000 = 0xF8L;
                int l_1003 = 0x194AE754L;
                if ((((g_822 = g_2.f7) >= (safe_rshift_func_int16_t_s_u(l_989, 13))) & p_64))
                {
                    unsigned l_999 = 0x34DD6801L;
                    l_1000 &= l_999;
                    l_1003 = (0x4B4485FDL == ((l_989 = 0L) || (((~((((safe_unary_minus_func_int32_t_s(g_240)) <= g_244) < (1UL & g_151)) >= p_63)) <= (g_822 = ((+p_66) , l_1002))) == l_1000)));
                    if (p_64)
                        continue;
                    l_982 = (safe_lshift_func_uint16_t_u_s(p_65, 1));
                }
                else
                {
                    int l_1013 = 0L;
                    int l_1015 = 0xFF7321E0L;
                    unsigned short l_1041 = 1UL;
                    l_1015 = (((safe_mul_func_uint16_t_u_u(p_62.f3, 0xB845L)) > (safe_sub_func_int16_t_s_s((((l_1002 == ((p_63 = (safe_mul_func_int16_t_s_s((l_989 = p_64), (g_209.f3 == (l_982 |= g_822))))) == (((l_1013 = l_1012) == (l_1014 &= g_2.f9)) & 9L))) || g_550.f1) | l_1002), 3UL))) <= p_62.f0);
                    l_982 &= (l_1003 |= (-6L));
                    for (g_281 = (-7); (g_281 <= 59); ++g_281)
                    {
                        unsigned l_1018 = 18446744073709551615UL;
                        int l_1032 = (-1L);
                        g_2.f1 = (l_1012 |= (-10L));
                        g_2.f1 = (l_1018 , l_1002);
                        l_1032 = (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(p_62.f0, (g_931 = 0x90L))), 7UL)) & ((-4L) & (safe_rshift_func_int8_t_s_u((l_1013 = (((65532UL && ((65530UL | (safe_mul_func_uint16_t_u_u((g_244 = ((l_1014 = (l_982 |= (safe_rshift_func_int16_t_s_s(0L, 12)))) | (safe_mod_func_int16_t_s_s((g_3.f7 &= 0xB83DL), (l_1012 & l_1003))))), g_435))) >= l_1031)) || g_104) <= g_550.f0)), 4)))) || l_1013);
                        g_2.f1 = (safe_mul_func_int16_t_s_s(0x9BA7L, (safe_div_func_int32_t_s_s((g_822 = 0x147A0ED3L), p_62.f0))));
                    }
                    if ((l_1015 = (!p_64)))
                    {
                        return l_1002;
                    }
                    else
                    {
                        char l_1054 = (-4L);
                        if (l_989)
                            break;
                        l_1015 = (1UL || ((p_64 & (((safe_rshift_func_int16_t_s_u(g_2.f1, g_3.f6)) && (g_550 , (((p_62.f0 , p_64) , ((l_1014 |= g_209.f0) >= ((((safe_rshift_func_int8_t_s_s((g_104 |= g_354), 2)) >= 0x1E35511CL) || l_1041) > g_2.f8))) == 0x6A1DL))) ^ g_3.f8)) , 0x70L));
                        l_994 = ((p_64 != (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(g_550.f0, p_65)), 14)), (g_550.f2 & (p_64 || (safe_mod_func_int32_t_s_s(((p_62 , (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_982 < (l_1054 = (l_1014 , p_64))), p_62.f0)), 0x3BL))) ^ 0x5FL), l_1055))))))) < g_550.f1);
                        l_994 = ((l_1012 | (p_62 , l_989)) != ((g_104 = ((safe_mod_func_int8_t_s_s(g_3.f9, (safe_sub_func_uint8_t_u_u(0x25L, l_1054)))) < (l_1055 , (safe_div_func_uint32_t_u_u((((l_982 &= ((g_3.f0 = (0x94CD81D0L != (safe_div_func_uint16_t_u_u(((g_822 = (~((safe_div_func_int8_t_s_s(l_1012, p_64)) , g_3.f1))) | g_3.f6), l_1066)))) <= g_435)) & l_989) , 4294967292UL), g_992))))) ^ p_62.f3));
                    }
                }
            }
lbl_1133:
            l_1031 = l_1002;
            if ((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_int8_t_s_s(((1UL && p_62.f3) == l_1066), (((safe_lshift_func_uint16_t_u_s(l_1014, (func_67(g_2.f1, (safe_lshift_func_uint8_t_u_s((g_3.f7 == g_550.f0), ((p_63 , 4UL) ^ 0x6EDFF349L))), g_992) , l_994))) <= (-1L)) , l_1075))) <= 0xF7L) & p_62.f0) , g_3.f0), 5)))
            {
                unsigned l_1088 = 4294967294UL;
                for (g_2.f7 = (-14); (g_2.f7 != (-6)); g_2.f7 = safe_add_func_uint32_t_u_u(g_2.f7, 5))
                {
                    unsigned short l_1091 = 9UL;
                    int l_1105 = (-1L);
                    g_822 &= ((((((safe_sub_func_int8_t_s_s((l_1066 , (g_931 &= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u(l_1012, p_62.f0)) & ((g_2.f7 || (0UL > (safe_mod_func_uint8_t_u_u(2UL, l_1088)))) ^ (p_65 > (safe_mod_func_int16_t_s_s(g_550.f3, l_1014))))) | g_3.f9), p_63)) != 0x595578D2L), l_1075)))), p_62.f3)) & 0x0CL) | p_62.f0) , l_1091) | (-8L)) | l_989);
                    for (g_2.f6 = (-14); (g_2.f6 <= 50); g_2.f6 = safe_add_func_int8_t_s_s(g_2.f6, 9))
                    {
                        l_982 &= ((p_65 , (safe_lshift_func_int16_t_s_u(((p_62 = l_1096) , 0xD33AL), (0L & (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_1088, p_66)), (safe_add_func_int32_t_s_s((l_1014 = (0x68L == 0x1AL)), l_1088)))))))) && g_2.f3);
                        if (p_62.f0)
                            continue;
                        return p_62.f3;
                    }
                    for (l_1031 = 0; (l_1031 != (-7)); --l_1031)
                    {
                        l_1105 = (g_822 &= g_209.f3);
                    }
                }
                l_989 = 0x0E411878L;
                l_1014 = g_2.f7;
            }
            else
            {
                int l_1112 = 0x332DC498L;
                int l_1117 = 0L;
                int l_1177 = 4L;
                short l_1181 = 0x9A9CL;
                if ((4294967286UL != (0L || (((!(-1L)) != (safe_add_func_int8_t_s_s((g_104 ^= ((safe_sub_func_int8_t_s_s((g_150 != p_65), (safe_mul_func_int16_t_s_s((l_994 &= ((l_1112 = g_2.f0) <= ((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(l_1117, (safe_mul_func_uint8_t_u_u((l_1031 || (l_1014 = ((safe_div_func_uint8_t_u_u(0xDDL, g_286)) != 255UL))), g_2.f0)))), g_354)) < l_1066))), 9L)))) >= p_62.f3)), l_1117))) ^ l_1012))))
                {
                    int l_1128 = 0x6B959B1CL;
                    int l_1135 = (-7L);
                    for (g_2.f3 = 0; (g_2.f3 <= 18); g_2.f3++)
                    {
                        l_1128 = ((safe_div_func_uint8_t_u_u(4UL, l_1096.f0)) && g_3.f3);
                    }
                    for (l_994 = 18; (l_994 == 21); ++l_994)
                    {
                        g_822 = p_64;
                    }
                    if (((g_3.f1 , (p_63 , (safe_mul_func_uint8_t_u_u(l_1128, g_151)))) , p_62.f0))
                    {
                        if (g_3.f8)
                            goto lbl_1133;
                        if (l_1066)
                            goto lbl_1134;
                    }
                    else
                    {
                        unsigned short l_1136 = 0x6D90L;
                        l_1136 = (l_1135 = p_62.f3);
                    }
                    g_2.f1 = (l_1112 >= ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_1135, (0xFBL == (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0UL, (safe_add_func_uint32_t_u_u(p_62.f3, 0xFC0F5995L)))), (g_2.f2 , (l_1014 = ((p_62.f0 >= ((l_989 ^= 1L) , l_1135)) , p_63))))), g_281))))) & 0UL), p_63)) | g_2.f7));
                }
                else
                {
                    short l_1158 = 0xFD5BL;
                    int l_1161 = 0x6691A412L;
                    if (p_64)
                    {
                        char l_1157 = 2L;
                        l_1158 = ((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((l_982 < (safe_div_func_uint16_t_u_u(((l_989 = (l_1002 >= ((g_550.f3 = l_1117) | ((p_62.f3 ^= (((safe_mul_func_int16_t_s_s(l_1075, (-3L))) <= g_3.f1) && (l_1012 == (0x5D4FL & 65535UL)))) <= g_2.f0)))) != (-1L)), l_1096.f0))), l_994)) ^ l_1014), 0x90E1L)) > l_1157);
                    }
                    else
                    {
                        g_2.f1 = (safe_mul_func_uint16_t_u_u(0x5E4DL, (l_1014 <= l_1112)));
                        l_982 &= (l_1096.f0 < p_66);
                        l_982 = (l_1161 ^= (g_550.f0 == p_66));
                    }
                    return p_65;
                }
                for (g_3.f3 = 0; (g_3.f3 > 22); ++g_3.f3)
                {
                    unsigned short l_1164 = 65531UL;
                    unsigned short l_1168 = 65533UL;
                    l_994 &= ((~((l_1164 <= (safe_sub_func_uint16_t_u_u((~((((p_63 |= p_62.f3) || (l_989 = p_66)) , ((!l_1014) , g_3.f7)) && p_65)), p_62.f3))) , (((((safe_unary_minus_func_uint32_t_u((l_1168 > ((safe_lshift_func_int8_t_s_u(p_64, g_3.f6)) == 0x31L)))) >= 0x51A9L) > 0UL) >= g_3.f2) , g_550.f3))) <= p_66);
                }
                l_1112 = (safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((g_286 = ((p_65 , 0x38F17C31L) == (p_63 == (safe_sub_func_uint16_t_u_u((l_1177 = (g_2.f2 ^= l_1177)), (g_281 ^= (p_66 = (p_64 , g_209.f0)))))))) > (p_63 , (p_64 & (l_1096.f3 | g_240)))), l_989)) | g_2.f0), 0UL));
                l_1181 = (((p_63 ^ l_989) , p_62.f3) , ((((0x2BL ^ (l_1177 , (l_1075 > g_992))) || ((((safe_div_func_int8_t_s_s((l_1002 < (l_1014 = l_994)), l_1012)) || g_992) == p_64) == 0x069DL)) || l_1180) , g_550.f3));
            }
            return l_989;
        }
        else
        {
            if (g_209.f0)
            {
                g_822 &= (safe_sub_func_int16_t_s_s(l_982, ((g_641 & p_62.f0) && l_1180)));
                g_822 = 0xE0CBAC5FL;
            }
            else
            {
                l_982 = p_62.f3;
            }
            return l_1066;
        }
    }
    else
    {
        unsigned l_1192 = 0xB9AE0194L;
        l_982 = (p_64 >= (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((0xDB2F52B5L & ((p_66 = p_63) , ((g_240 >= (((safe_div_func_int32_t_s_s((((g_2.f2 && (l_1012 >= ((0xB75095DDL <= (safe_div_func_uint8_t_u_u((((p_65 & g_3.f8) >= 1L) ^ 0xF7L), p_64))) == 0xA7L))) <= l_1192) || p_65), p_64)) < l_982) , p_62.f3)) <= g_150))) && 0L) < l_1066), g_286)), l_1012)));
    }
    g_2.f1 = (safe_mul_func_uint8_t_u_u(0xB5L, l_1012));
    if ((((p_62.f0 , (g_550 , ((g_104 ^= p_63) == g_2.f8))) && (g_104 = (p_63 = (((l_1031 , g_2.f6) ^ (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_62.f3, p_62.f3)) != (l_982 < 0xE686L)), p_62.f0))) == 4UL)))) == 1L))
    {
        unsigned l_1199 = 0x7B84F149L;
        int l_1213 = 0x9B0CA8BFL;
        unsigned l_1287 = 1UL;
        unsigned l_1298 = 4UL;
        int l_1382 = 7L;
        char l_1396 = 0x52L;
        unsigned char l_1407 = 255UL;
        char l_1414 = 1L;
        if (l_1199)
        {
            int l_1211 = 0xB4147E71L;
            for (l_1031 = 10; (l_1031 >= 19); l_1031 = safe_add_func_int8_t_s_s(l_1031, 3))
            {
                unsigned l_1207 = 0x5C7B04A5L;
                int l_1212 = (-1L);
                l_1211 &= ((((safe_unary_minus_func_int8_t_s((safe_mod_func_int8_t_s_s((p_63 = ((g_209 , g_822) & ((((((l_1066 , ((l_1199 < (l_1207 == (g_240 >= (safe_sub_func_int32_t_s_s((l_1207 , p_62.f3), (l_1199 >= p_64)))))) , p_62.f0)) >= 4294967295UL) > l_1199) , g_209.f0) != g_3.f2) , 0x25L))), 255UL)))) , p_65) ^ g_1210) | 0x5BL);
                l_1212 &= p_62.f0;
            }
            l_1213 = (g_2.f1 = l_1199);
        }
        else
        {
            char l_1218 = 6L;
            unsigned l_1267 = 0xE2063602L;
            l_1213 = ((p_66 > (g_992 < p_62.f3)) ^ (~0UL));
            if (((safe_mul_func_int16_t_s_s((g_2.f9 ^ (((safe_mod_func_uint32_t_u_u(l_1218, (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u(l_982, 7)))), ((p_63 = ((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_354 = g_1210), (((l_1218 , (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((g_3.f2 , (l_1213 = g_209.f3)), (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((g_281 |= (((safe_div_func_uint16_t_u_u(0UL, (g_244 = (safe_mul_func_uint8_t_u_u(g_209.f3, p_66))))) ^ g_2.f1) <= 0L)) || l_1218), g_3.f6)), p_64)))) == g_3.f9), 0x4DD485E1L)), l_1199))) & l_1218) == p_64))), l_1199)) > p_66), l_1218)) <= g_3.f0)) , 65535UL))) ^ 1L), p_62.f0)))) , g_1210) || p_62.f3)), 0x1D4EL)) ^ p_65))
            {
                return g_550.f0;
            }
            else
            {
                unsigned l_1265 = 4294967295UL;
                int l_1266 = (-1L);
                unsigned short l_1286 = 0x4F90L;
                for (g_550.f1 = (-12); (g_550.f1 != 47); g_550.f1 = safe_add_func_uint16_t_u_u(g_550.f1, 1))
                {
                    l_1031 = l_1218;
                    l_1266 = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((g_550.f0 , (safe_add_func_int32_t_s_s(((!p_63) | ((safe_div_func_uint16_t_u_u(l_1213, (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((g_104 &= g_550.f1), g_2.f6)), (g_286 &= ((safe_sub_func_uint16_t_u_u((p_66 = (p_64 && (safe_unary_minus_func_uint8_t_u(l_982)))), (l_1066 & l_1199))) > 4294967295UL)))))) != 4294967295UL)), 0x40402AC3L))), l_1265)), l_1213));
                }
                if (l_1218)
                {
                    l_1213 = ((p_62.f0 & l_1267) , 0x0B2C091EL);
                }
                else
                {
                    char l_1274 = 1L;
                    unsigned short l_1297 = 0x9D14L;
                    if (g_3.f0)
                    {
                        return g_2.f7;
                    }
                    else
                    {
                        short l_1275 = 0x0A0BL;
                        g_2.f1 = p_62.f3;
                        l_1012 &= (safe_sub_func_uint8_t_u_u((p_62.f0 = ((safe_sub_func_uint16_t_u_u(g_3.f8, 0x1A21L)) != ((safe_div_func_int32_t_s_s(g_354, 4294967295UL)) , l_1274))), (l_1266 = ((l_1213 , (g_2.f9 | p_63)) & (g_209.f3 , g_3.f7)))));
                        l_1275 &= g_822;
                    }
                    l_1298 = (g_2.f2 || (safe_rshift_func_int16_t_s_u((!(l_1213 = (safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_1266, 5)), ((safe_add_func_uint32_t_u_u((l_1287 = (l_1286 , p_64)), ((g_150 = (((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((l_1218 , (p_62.f0 , g_550.f2)))) && p_63), 0x4D01L)) >= g_209.f3), l_1213)), 7)), g_992)) , (-1L)) >= p_62.f3)) , 4294967288UL))) , l_1267))) == 0x71EC7C09L), l_1297)))), 0)));
                    if (g_931)
                    {
                        char l_1299 = (-1L);
                        l_1299 ^= (g_2.f1 &= p_63);
                    }
                    else
                    {
                        g_2.f1 = ((safe_add_func_int16_t_s_s((-5L), ((safe_mul_func_int16_t_s_s(((((((l_1304 , (-9L)) , (((g_3.f3 , (safe_sub_func_int8_t_s_s(0x33L, l_1274))) != (g_550.f2 == l_1218)) < ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_mul_func_uint8_t_u_u(g_435, g_209.f0)) || p_64))), p_65)), 11)), l_1218)) < g_2.f9))) != 0x5018L) ^ 0xA7L) | g_3.f6) <= l_1297), p_62.f0)) != g_550.f0))) >= g_1318);
                        g_1319 = p_64;
                        g_2.f1 ^= (p_63 & (l_1298 < (-1L)));
                    }
                }
                return g_3.f9;
            }
        }
        if ((safe_mul_func_uint8_t_u_u((+l_1055), (0x5ACBL >= (g_150 = ((g_281 & ((+((6UL < (safe_mul_func_int8_t_s_s(0x39L, ((safe_div_func_int16_t_s_s(g_1318, l_1213)) | (g_209.f3 = (g_2.f0 = 0UL)))))) != (!(safe_div_func_int16_t_s_s((((0x6E2A33D3L | p_65) , 6L) & g_3.f1), g_435))))) & g_2.f9)) && g_3.f8))))))
        {
            unsigned char l_1349 = 0x5CL;
            int l_1350 = 0xA665EF3DL;
            unsigned short l_1378 = 0xBCECL;
            char l_1392 = 0xB6L;
            int l_1398 = (-1L);
            for (p_63 = 0; (p_63 != (-21)); p_63 = safe_sub_func_uint16_t_u_u(p_63, 1))
            {
                unsigned l_1330 = 0x7D96D1FBL;
                int l_1333 = 0x58395360L;
                l_1330 = 0xB549A69DL;
                l_1333 &= ((safe_mod_func_int8_t_s_s(0x61L, 9UL)) <= 0x9E538791L);
                return g_3.f8;
            }
            for (g_244 = 0; (g_244 <= 59); g_244 = safe_add_func_int8_t_s_s(g_244, 2))
            {
                unsigned char l_1336 = 0x37L;
                l_1336 = 0xC6DEC259L;
                for (g_3.f8 = 0; (g_3.f8 != 5); g_3.f8 = safe_add_func_uint8_t_u_u(g_3.f8, 2))
                {
                    return l_1336;
                }
            }
            l_1012 = g_2.f0;
            for (g_810 = 24; (g_810 != 0); --g_810)
            {
                int l_1343 = 0L;
                if (l_1055)
                    break;
                for (l_1055 = (-14); (l_1055 < 18); l_1055 = safe_add_func_uint8_t_u_u(l_1055, 3))
                {
                    int l_1345 = 0xBA6DE6D2L;
                    l_1012 = (g_1210 ^= g_2.f9);
                    l_1213 = (p_64 < 0x829861A6L);
                    if ((g_822 = ((p_62.f3 |= ((g_209.f3 , (g_2.f9 = ((l_1343 == p_64) , (p_65 || g_150)))) == 255UL)) ^ (!l_1344))))
                    {
                        int l_1346 = (-1L);
                        char l_1354 = 0L;
                        l_982 = g_286;
                        l_1346 ^= l_1345;
                        l_1350 = (safe_mul_func_uint8_t_u_u(g_240, (g_2.f7 >= l_1349)));
                        l_1354 = (g_1210 = (!(g_209 , (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(g_151)), 3)))));
                    }
                    else
                    {
                        int l_1361 = (-6L);
                        l_1361 = (safe_div_func_uint16_t_u_u(0xFC3AL, (safe_rshift_func_uint16_t_u_s((((((0x03A4L || l_1349) < p_66) ^ p_66) || 4294967295UL) != (l_1350 ^= (0xDE50L & ((~p_62.f3) , ((((safe_sub_func_int16_t_s_s(3L, g_150)) , l_1345) | g_3.f2) , 0x9058L))))), 9))));
                    }
                }
                if ((safe_rshift_func_uint16_t_u_u(p_62.f0, (p_66 <= (safe_div_func_int16_t_s_s(0xEC11L, (g_244 = (g_3.f9 , (safe_rshift_func_uint8_t_u_s((l_1350 , p_63), 5))))))))))
                {
                    return g_931;
                }
                else
                {
                    int l_1379 = 0x4AE6DF3EL;
                    unsigned char l_1399 = 0xA0L;
                    if (((l_1343 == ((l_1350 &= p_65) & (0x5BL && (-1L)))) ^ (safe_mod_func_int16_t_s_s(l_1012, p_64))))
                    {
                        char l_1383 = 0x7CL;
                        l_1383 = ((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((0xC1L ^ l_1378), (0xB829L || g_244))), 2)) ^ 0x0B86L), 3)) , ((l_1379 , (l_1180 & (l_1180 > (safe_div_func_uint32_t_u_u(((l_1349 | 0x15L) || 0xDFL), l_1382))))) ^ p_66)), g_2.f2)) ^ 0x44D3F8C2L);
                        g_822 = (safe_sub_func_uint16_t_u_u((g_641 , ((g_2.f0 , (4294967295UL | l_1343)) >= l_1379)), (p_66 ^= p_64)));
                        g_822 &= (-7L);
                        return p_64;
                    }
                    else
                    {
                        unsigned char l_1393 = 0UL;
                        unsigned l_1397 = 0UL;
                        g_1210 = (l_1304.f3 == (((safe_rshift_func_int16_t_s_u((g_1318 != (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((l_1031 = (p_63 & (p_62.f3 , 0xC8B9L))) , (g_3.f3 == 0x40FAL)) < (p_62.f0 <= l_1378)), p_66)), 0x77D3L))), 1)) || 0UL) & 0L));
                        l_1398 ^= (g_2.f1 = ((l_1350 = l_1379) != (((l_1392 , p_63) <= l_1393) < ((p_63 , (~g_2.f2)) , ((l_982 = (l_1397 = ((safe_mul_func_uint8_t_u_u(((p_62 , g_992) >= ((g_3.f2 = ((l_1343 > g_151) , p_63)) || 0x0AEBL)), g_3.f9)) < l_1396))) | p_62.f3)))));
                        l_1213 = ((p_63 ^ (~l_1399)) || l_1343);
                    }
                }
            }
        }
        else
        {
            unsigned l_1400 = 9UL;
            int l_1401 = 0x22BB931AL;
            char l_1404 = 0xADL;
            unsigned l_1410 = 0xA34196CEL;
            l_1213 = (l_1401 = l_1400);
            if (((g_3.f6 || (g_550.f0 = ((safe_sub_func_uint8_t_u_u(l_1404, l_1401)) == (p_62.f0 < (+(l_1298 & g_2.f2)))))) && g_150))
            {
                l_1401 &= ((safe_div_func_int8_t_s_s(l_1407, ((p_66 = p_63) & ((l_1382 ^ ((p_64 , l_1382) != p_62.f3)) != (65532UL && (safe_div_func_int8_t_s_s((l_1410 |= g_240), p_62.f3))))))) || p_66);
                g_822 ^= l_1012;
            }
            else
            {
                unsigned char l_1411 = 0UL;
                l_1213 = l_1199;
                if (l_1031)
                    goto lbl_1426;
                l_1411 = l_1401;
lbl_1426:
                g_822 = (safe_add_func_uint32_t_u_u(l_1414, (l_1287 & (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((p_63 || ((safe_rshift_func_uint8_t_u_u(g_435, 7)) != g_3.f8)), (safe_unary_minus_func_uint8_t_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_64, (g_104 &= (g_931 = (p_62 , ((((p_65 , p_63) && p_62.f3) , p_65) & 0xC4L)))))), g_281)) <= 0xC7L))))) >= 0x78L), 10)))));
                g_1210 = (p_62.f3 && (((p_63 = (l_1066 && g_641)) < (g_2.f7 == ((g_209.f3 , (((safe_mod_func_uint32_t_u_u((g_3.f8 | (g_286 , (safe_div_func_uint32_t_u_u(8UL, (p_62.f1 = (safe_mod_func_uint16_t_u_u(65535UL, l_1411))))))), 5UL)) & p_64) & l_1304.f0)) <= 1UL))) , g_209.f0));
            }
        }
    }
    else
    {
        short l_1438 = (-7L);
        int l_1439 = 0L;
        int l_1454 = 7L;
        int l_1586 = 0xE4451C43L;
lbl_1444:
        l_1433 = p_66;
        if ((safe_mul_func_uint8_t_u_u((1UL <= (((l_1304.f3 <= ((l_1438 , l_1344) < (l_1012 = (l_982 < l_1438)))) >= 1UL) >= ((l_1439 = l_1433) >= (safe_rshift_func_uint16_t_u_s((255UL >= p_65), g_150))))), p_63)))
        {
            unsigned l_1449 = 0xBD73EBC0L;
            int l_1455 = 0L;
            union U1 l_1467 = {0xB6L};
            int l_1608 = 0xB0CB7115L;
            for (g_281 = 0; (g_281 != 58); g_281 = safe_add_func_int8_t_s_s(g_281, 4))
            {
                int l_1456 = 0L;
                int l_1480 = 0x3EBECD92L;
                if (g_2.f2)
                    goto lbl_1444;
                for (g_2.f9 = 0; (g_2.f9 == 42); g_2.f9++)
                {
                    unsigned short l_1479 = 0xB72CL;
                    if ((((!7L) && ((safe_lshift_func_uint16_t_u_u(0xB93CL, 13)) ^ (g_244 = (g_150 = l_1449)))) , ((g_151 < (0x0EC2829EL ^ 9UL)) , (!((g_2.f2 || (safe_div_func_uint8_t_u_u(((g_354 != (l_1454 |= ((safe_lshift_func_uint8_t_u_u((g_3.f2 == 255UL), 2)) == l_1439))) == p_66), g_3.f0))) == g_2.f6)))))
                    {
                        l_1455 = (p_62.f3 || 65531UL);
                        return l_1455;
                    }
                    else
                    {
                        unsigned l_1465 = 4294967289UL;
                        int l_1468 = (-8L);
                        l_1031 = ((g_2.f7 < l_1456) , (((l_1304.f3 != ((l_1180 >= (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x2F0B24E0L, g_281)), (safe_div_func_int32_t_s_s(((((g_2.f1 , 0x84FDL) == ((((~(l_1465 <= 0x5C67802EL)) , 1UL) >= l_1465) , g_1466)) , l_1465) ^ 0L), p_62.f3))))) && p_66)) > 1L) || (-10L)));
                        l_1480 = (((l_1467 , (p_62 , 0x4E63L)) , (p_63 = (l_1456 = ((l_1468 &= g_931) || (l_1454 | g_822))))) < ((safe_add_func_int32_t_s_s(0x439FB13EL, ((l_1479 = (0x19CADC88L | (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(0x6CL, 0x4DL)) & p_62.f3) , p_64), (-1L))) & l_1439) == l_1439), l_1465)), p_62.f0)))) <= 8UL))) | l_1465));
                        g_1210 = l_1455;
                    }
                    g_822 &= l_1456;
                    l_1480 = p_62.f3;
                    for (l_1456 = (-11); (l_1456 != 20); l_1456 = safe_add_func_uint16_t_u_u(l_1456, 5))
                    {
                        int l_1483 = (-4L);
                        l_1455 = l_1483;
                        l_1012 = (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_65 < ((4UL > l_1480) != (safe_mod_func_uint16_t_u_u((l_1483 = ((safe_add_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s(g_2.f7, 5)) != p_63) < l_1467.f0) & (safe_mod_func_uint16_t_u_u(p_63, p_64))), ((((l_1483 == (-3L)) <= l_1449) <= 0x82CF3154L) > p_63))) ^ l_1479)), 65535UL)))), g_2.f7)), l_1480));
                        g_1210 = 1L;
                    }
                }
            }
            for (l_1467.f2 = 5; (l_1467.f2 <= (-4)); --l_1467.f2)
            {
                unsigned l_1516 = 4294967290UL;
                int l_1519 = (-2L);
                unsigned l_1532 = 1UL;
                int l_1599 = 0x9EAAE8C2L;
                g_1210 = g_281;
                g_1210 = l_1055;
                if ((safe_add_func_int16_t_s_s((((g_151 = ((safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_435, ((g_1319 | (!(p_63 || (l_1454 = g_240)))) | (safe_sub_func_uint8_t_u_u((~(safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((g_2.f9 == (safe_sub_func_int32_t_s_s((l_1516 ^= (-1L)), g_209.f3))) != l_1467.f3), 6)), 6))), (((((g_822 |= (safe_add_func_uint32_t_u_u((p_62.f0 , l_1438), l_1439))) <= l_1438) < g_3.f6) < g_281) <= g_151)))))), 1UL)), l_1438)) || g_2.f3)) >= 3L) != l_1519), p_62.f0)))
                {
                    unsigned short l_1545 = 0xFCA6L;
                    int l_1563 = 0x4B6AF7B2L;
                    l_1455 &= (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_1454, g_992)) <= (safe_sub_func_int32_t_s_s((((l_1467.f0 ^ (l_1532 & (((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((g_641 == l_1180), (l_1467 , 0x11L))) == (g_1319 = 0x44L)), g_3.f1)) <= p_65) & p_66))) | g_2.f8) > p_65), 0L))), l_1519)), 5L)), p_62.f0)), l_1438));
                    l_1519 |= ((((safe_add_func_uint16_t_u_u(0x8744L, 1UL)) ^ ((p_64 | (safe_sub_func_uint8_t_u_u(255UL, (((g_150 , 0L) ^ (safe_lshift_func_uint16_t_u_s(0x443EL, 2))) >= l_1449)))) >= (safe_rshift_func_int16_t_s_u((p_66 == 0xCDAAL), p_66)))) && p_63) , 5L);
                    l_1545 = (-1L);
                    l_1031 = (safe_mod_func_uint8_t_u_u((~(((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_66 == ((safe_mod_func_uint8_t_u_u(((l_1554 <= 6L) || p_66), (safe_lshift_func_int16_t_s_u((!g_2.f9), ((l_1066 > (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((g_209.f1 = g_641), (p_64 , (+g_2.f9)))), 0)), g_2.f7))) & 0xD7E90C2EL))))) ^ l_1563)), 0xA5ACC5B2L)), l_1433)) == p_63) & l_1467.f3)), g_2.f7));
                }
                else
                {
                    int l_1597 = 0xA37D8754L;
                    int l_1598 = 0x74ED6C02L;
                    for (l_1066 = 0; (l_1066 <= (-13)); --l_1066)
                    {
                        int l_1581 = 0xEC8B1582L;
                        l_982 = g_2.f3;
                        g_1210 &= (safe_div_func_uint32_t_u_u((l_1439 | ((safe_rshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(1UL, (g_3.f9 , (((safe_lshift_func_int16_t_s_u((g_1576 , ((l_1516 == (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_150 > (((p_62.f0 || ((0x35C65C40L != p_66) && p_65)) <= p_63) < l_1455)), p_64)), p_65))) && p_62.f3)), l_1454)) >= g_151) != l_1581)))), l_1581)) < 246UL) & g_244), 1)) , g_1466)), p_66));
                    }
                    l_1599 ^= (g_1210 , (l_1598 ^= ((p_62.f3 , g_240) , (safe_mod_func_uint8_t_u_u((~(g_3.f2 && ((l_1586 = ((safe_mul_func_uint16_t_u_u(p_64, l_1586)) ^ (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((l_1454 &= p_65), l_1519)) , (safe_mod_func_int32_t_s_s(p_63, 0x898AD8D5L))) ^ 0UL), g_435)) && g_1210), g_151)), g_244)))) <= l_1597))), p_62.f0)))));
                    for (g_209.f3 = (-11); (g_209.f3 < 46); g_209.f3 = safe_add_func_uint16_t_u_u(g_209.f3, 5))
                    {
                        l_1608 &= ((p_65 != (~(~((l_1344 &= l_1439) < l_1455)))) ^ ((safe_mod_func_uint8_t_u_u(0UL, (l_1180 | l_1066))) > (safe_add_func_uint32_t_u_u(7UL, (l_1180 >= (safe_add_func_int16_t_s_s(((p_62.f3 <= l_1467.f3) == l_1066), g_3.f3)))))));
                        g_1210 = p_62.f0;
                    }
                }
                return g_992;
            }
        }
        else
        {
            char l_1611 = 7L;
            g_1210 |= ((safe_sub_func_int16_t_s_s(p_63, 65535UL)) , l_982);
            l_1611 = (l_1344 || g_354);
        }
        return p_64;
    }
    return g_3.f7;
}







static union U1 func_67(unsigned short p_68, unsigned short p_69, short p_70)
{
    int l_75 = 0x979388B3L;
    int l_80 = 0x42AC96AAL;
    union U1 l_93 = {246UL};
    int l_102 = 0L;
    int l_103 = (-2L);
    char l_136 = 0xC0L;
    char l_143 = 0x2DL;
    unsigned short l_145 = 0x7421L;
    unsigned char l_252 = 0x1DL;
    int l_322 = 0L;
    unsigned short l_415 = 0x3311L;
    unsigned short l_484 = 0xBD68L;
    int l_485 = 1L;
    char l_496 = 0x0CL;
    unsigned l_497 = 0x828B9E66L;
    unsigned char l_607 = 0xB0L;
    unsigned l_622 = 4294967295UL;
    char l_675 = 0x67L;
    int l_714 = 0xBBA59CCEL;
    int l_715 = 0L;
    unsigned short l_722 = 0x4097L;
    unsigned l_749 = 4294967287UL;
    unsigned l_830 = 0x1EA08D4DL;
    short l_898 = 0x52EBL;
    unsigned l_920 = 0x39095BCCL;
    union U1 l_937 = {0xE1L};
lbl_419:
    g_104 &= (l_75 || (safe_div_func_uint8_t_u_u(5UL, (safe_add_func_int8_t_s_s((l_80 ^ ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_80 != (((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((l_93 , (l_103 &= (safe_lshift_func_uint16_t_u_s((p_69 < g_3.f6), (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(((safe_unary_minus_func_uint32_t_u((l_102 = (6UL == ((safe_sub_func_int16_t_s_s((-5L), g_2.f2)) <= p_70))))) , g_2.f9))) & g_3.f6), g_2.f9)))))) < p_69), 13)), 0x1B59L)), p_68)) < g_3.f9) < p_69)), 6)), 7)) & p_68), 0x7320B692L)) >= l_93.f3)), p_68)))));
    if (g_2.f2)
    {
        unsigned char l_113 = 0UL;
        int l_129 = 3L;
        char l_314 = (-4L);
        int l_481 = (-7L);
        int l_482 = 0x2610EC72L;
lbl_483:
        l_103 |= 8L;
        if (l_93.f3)
        {
            char l_107 = 6L;
            int l_117 = 1L;
            unsigned l_149 = 4UL;
            unsigned short l_206 = 0UL;
            int l_268 = 0L;
            int l_292 = 0xEF6ECB2FL;
            unsigned l_350 = 0x0ADB3E63L;
            if (p_68)
            {
                char l_116 = 0x68L;
                int l_118 = 0x4E9E2562L;
                unsigned char l_120 = 0xB0L;
                unsigned l_133 = 5UL;
                if (l_102)
                {
                    char l_112 = 0x35L;
                    int l_119 = 0x2801F5D8L;
                    if (p_70)
                    {
                        unsigned l_106 = 1UL;
                        l_120 = ((((0xF365L == ((p_69 != (p_68 > (safe_unary_minus_func_int16_t_s(l_106)))) != (l_118 = (l_107 > ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((l_113 = (l_112 = (l_102 = g_2.f3))) >= (((0xF38FL && p_68) | ((l_117 ^= ((safe_add_func_int32_t_s_s((g_2.f1 >= 1L), 4294967289UL)) , l_116)) , l_106)) < g_2.f7)) > p_70), 0x363BB6A5L)), 14)) != g_3.f1))))) != l_119) >= l_119) > p_70);
                        g_2.f1 = ((~(g_3.f7 | (p_70 = (l_102 <= ((p_68 != (safe_rshift_func_uint16_t_u_u(p_70, 10))) && ((((+(((l_118 = (+g_3.f0)) , (g_2.f3 |= (((p_68 && ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(l_75, 4)) , ((safe_mul_func_uint8_t_u_u(g_104, (g_2.f1 <= l_106))) != l_113)), p_70)) , 0xC6L)) , g_104) != p_69))) , 1L)) & l_112) && g_2.f0) == p_70)))))) == l_116);
                        l_129 &= (-10L);
                    }
                    else
                    {
                        unsigned char l_130 = 255UL;
                        l_119 &= 0xCC0FEBE7L;
                        l_119 = l_113;
                        l_129 = (l_130 = g_3.f6);
                    }
                }
                else
                {
                    l_129 = (safe_rshift_func_int16_t_s_s(l_133, 10));
                }
                l_129 &= g_3.f9;
                l_129 = p_69;
            }
            else
            {
                unsigned l_147 = 0xEA65F88FL;
                int l_152 = 0x03BC58EBL;
                unsigned short l_204 = 0UL;
                unsigned l_205 = 0xE48255A9L;
                short l_243 = (-1L);
                if ((safe_rshift_func_int16_t_s_u(g_2.f8, 3)))
                {
                    unsigned short l_144 = 0xCF18L;
                    int l_148 = 0x8FE46327L;
                    if (l_136)
                    {
                        unsigned short l_146 = 0x535DL;
                        union U1 l_153 = {253UL};
                        g_2.f1 = ((g_151 = (g_150 = (p_70 != (p_69 >= (safe_sub_func_uint8_t_u_u(((~(-3L)) == (l_149 = (!(0xB5L <= (l_148 = (((safe_rshift_func_uint8_t_u_s((l_143 || ((((((0x0CF7L >= g_3.f8) , (g_104 < ((((1UL | 0x99L) , 0xA1BC1FB2L) ^ l_144) || l_145))) != p_68) == g_2.f2) , l_146) , (-1L))), g_3.f2)) | g_2.f6) , l_147)))))), 0xB4L)))))) , l_147);
                        l_152 ^= (g_3.f3 && l_146);
                        g_2.f1 = (-9L);
                        return l_153;
                    }
                    else
                    {
                        char l_154 = 0L;
                        l_154 = l_75;
                        g_2.f1 ^= g_3.f9;
                        l_117 = p_69;
                    }
                    for (g_2.f0 = 0; (g_2.f0 <= 10); g_2.f0 = safe_add_func_int16_t_s_s(g_2.f0, 2))
                    {
                        unsigned short l_169 = 0x1A66L;
                        int l_177 = (-5L);
                        l_117 |= g_150;
                        if (p_68)
                            continue;
                        l_177 = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((g_3.f0 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(5UL, l_169)), 5))), 5L)) & (((safe_add_func_uint32_t_u_u((g_2.f7 , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_3.f2, ((safe_unary_minus_func_int16_t_s((g_3.f8 = g_2.f1))) , (g_151 = l_143)))), 0))), (0x78L == 0x60L))) , (-1L)) >= g_150)), (-1L))), g_150)), l_169));
                        if (g_2.f1)
                            continue;
                    }
                    for (p_68 = 0; (p_68 > 33); p_68 = safe_add_func_uint32_t_u_u(p_68, 9))
                    {
                        char l_193 = 0x78L;
                        l_206 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(p_69, g_3.f9)), (safe_lshift_func_int8_t_s_s(g_3.f8, 5)))) > ((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s(l_136, l_193)))) || (safe_add_func_uint32_t_u_u(p_70, (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((0xED9211E9L != ((((((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0xAC6FL, 5)), 0L)) != l_204) , p_69) <= p_70) & g_2.f9) | p_70)) != 0x72FCL) >= p_69), 65533UL)) && l_205), 1)))))), p_68)) , 0x59L), 0));
                        l_152 = (l_117 = 2L);
                        l_152 = g_3.f3;
                    }
                }
                else
                {
                    unsigned char l_212 = 0x64L;
                    l_129 = (l_102 = (p_70 & g_2.f3));
                    for (l_206 = 4; (l_206 >= 25); ++l_206)
                    {
                        return g_209;
                    }
                    for (g_151 = (-5); (g_151 == 53); ++g_151)
                    {
                        g_2.f1 = (+g_3.f3);
                        l_212 = p_69;
                    }
                }
                for (g_209.f3 = (-10); (g_209.f3 >= 7); g_209.f3 = safe_add_func_int32_t_s_s(g_209.f3, 4))
                {
                    int l_215 = 1L;
                    g_2.f1 = g_2.f1;
                    g_2.f1 = (((0x4CL != (g_104 = l_215)) && 0xF7L) || (0x22FCL & (g_3.f6 ^ l_215)));
                    g_2.f1 = ((p_69 | 7L) & (((((g_2.f0 && (g_2.f7 = g_3.f2)) & ((l_102 = g_2.f2) , (l_129 , ((safe_rshift_func_uint16_t_u_u(l_136, (safe_sub_func_int16_t_s_s(7L, (-1L))))) , p_70)))) > p_68) ^ l_152) && l_117));
                    l_152 ^= (safe_mul_func_int16_t_s_s(g_3.f6, (safe_mul_func_int16_t_s_s((8UL & (l_103 , (p_68 & (((((g_150 = (((g_2.f1 &= (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(1L, (safe_div_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_205, (!((g_2.f9 , l_215) ^ ((safe_sub_func_uint16_t_u_u((g_209.f3 , 0xAA92L), l_93.f3)) & g_3.f0))))), 249UL)) , 0UL) | p_68), p_69)))), 15)) <= g_240), p_68)) , g_240) != p_68), l_204))) || l_215) | g_104)) == l_205) ^ l_103) , 0x44C0L) > p_70)))), l_93.f0))));
                }
                l_103 = p_70;
                g_244 ^= (((0UL <= p_68) , (safe_lshift_func_uint16_t_u_s(g_2.f1, 7))) && ((l_129 |= 0xF4L) >= l_243));
            }
            if (p_70)
            {
                int l_249 = 0x359ED160L;
                union U1 l_253 = {0xB8L};
                l_102 = (safe_sub_func_int16_t_s_s((p_70 ^= ((safe_add_func_int8_t_s_s(g_2.f8, g_3.f6)) || p_68)), (l_129 > ((l_249 <= (safe_lshift_func_int8_t_s_s(p_68, 0))) , g_150))));
                if ((l_252 > g_2.f8))
                {
                    return l_253;
                }
                else
                {
                    l_129 = g_244;
                }
                g_2.f1 = (g_3.f0 && l_206);
                l_102 = (l_129 = ((g_2.f1 = (g_150 || p_68)) > (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0UL, ((safe_mod_func_int32_t_s_s((((((l_117 = p_68) ^ ((+(safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(p_70, p_70)) != p_68), 0))) & 0xA50DL)) == (l_268 = ((l_253.f3 && g_3.f2) , p_68))) || p_68) && g_2.f8), l_253.f0)) , 0x98L))), 0x3717L)), l_249)), (-9L)))));
            }
            else
            {
                short l_287 = 0L;
                int l_289 = (-1L);
                unsigned l_401 = 18446744073709551615UL;
                if ((0x8960F64EL == g_104))
                {
                    int l_273 = (-1L);
                    int l_280 = 0xCDADA2B9L;
                    l_129 = p_68;
                    for (l_149 = 3; (l_149 < 10); l_149 = safe_add_func_int32_t_s_s(l_149, 5))
                    {
                        l_103 = p_70;
                    }
                    for (g_3.f7 = (-23); (g_3.f7 >= (-23)); g_3.f7++)
                    {
                        l_273 |= 0xC0796E71L;
                        g_281 |= (safe_sub_func_uint32_t_u_u((l_280 = ((safe_mul_func_int8_t_s_s(g_244, (g_209 , g_2.f9))) >= (0xE57FL == (1UL | (g_2.f1 = (g_244 || p_68)))))), (p_68 == 8L)));
                        l_129 |= l_107;
                    }
                }
                else
                {
                    unsigned l_288 = 0UL;
                    for (g_2.f2 = 0; (g_2.f2 == 20); g_2.f2 = safe_add_func_int32_t_s_s(g_2.f2, 5))
                    {
                        g_2.f1 |= (safe_rshift_func_int8_t_s_u((g_3.f7 , g_2.f7), 0));
                        g_2.f1 = g_151;
                    }
                    g_286 ^= (g_2.f1 |= 0L);
                    l_288 = (l_102 &= l_287);
                }
                if ((l_268 = l_289))
                {
                    int l_299 = 7L;
                    g_2.f1 &= (l_113 , (safe_mul_func_int8_t_s_s(p_69, l_292)));
                    l_117 = ((safe_rshift_func_int16_t_s_s((p_69 != (l_102 |= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_299 = (g_3.f8 = l_103)) != l_289), (safe_div_func_int8_t_s_s((((l_113 , l_268) || (safe_mul_func_uint16_t_u_u(g_281, l_129))) < ((((g_240 | g_3.f6) < 0x45L) || p_68) >= 1L)), l_129)))), (-6L))))), p_70)) | p_69);
                    g_2.f1 |= (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_2.f6 <= g_3.f6), p_70)), p_70)) ^ (0xB1FCE4B7L & g_2.f0)), l_299)), (~(((safe_mul_func_uint16_t_u_u(((g_286 = (l_314 , (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(p_69)), g_281)))) & p_70), 1L)) > g_3.f6) | 0xF196L))));
                }
                else
                {
                    short l_323 = 0L;
                    int l_349 = 0xE69CA974L;
                    char l_361 = 0x22L;
                    l_268 |= (safe_mul_func_uint8_t_u_u(p_69, ((0x4AD67650L <= p_69) || (l_323 |= ((((p_70 , (safe_lshift_func_uint16_t_u_s((+g_2.f7), (p_70 > ((p_68 && g_2.f8) & ((((g_209.f1 = ((g_2.f2 = g_151) && l_322)) || 4294967288UL) && l_113) < p_69)))))) , 0L) >= g_3.f2) , l_287)))));
                    if (((safe_mod_func_int8_t_s_s(l_129, (safe_sub_func_int8_t_s_s(g_3.f3, (safe_sub_func_uint16_t_u_u((p_68 = (safe_mul_func_uint16_t_u_u(p_68, (p_69 | (g_209.f0 != g_2.f3))))), 0x976BL)))))) < (((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(l_103, 5)), (safe_unary_minus_func_uint32_t_u(l_323)))) != g_151) >= g_209.f0) != g_240) > l_287)))
                    {
                        int l_351 = 0x7E04E406L;
                        g_2.f1 = 0x39F8D692L;
                        l_351 ^= (l_129 = ((((((0xA82C3EB7L & (safe_mod_func_uint16_t_u_u(((((l_268 , (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_68, (safe_lshift_func_int16_t_s_s((-3L), 15)))), l_323))) != (safe_lshift_func_uint8_t_u_s(l_145, 5))) & p_70) < p_68), ((l_349 = g_3.f2) && p_70)))) || l_268) > g_240) & l_350) < p_68) || p_69));
                    }
                    else
                    {
                        g_354 &= (safe_div_func_uint16_t_u_u(g_2.f9, g_3.f6));
                        g_2.f1 = (g_2.f3 != g_3.f8);
                        l_117 = (l_361 |= (g_104 < (safe_mul_func_int16_t_s_s(p_68, (p_68 , ((safe_mul_func_int16_t_s_s(0L, (l_145 && (l_129 = g_2.f8)))) & (((safe_lshift_func_uint8_t_u_s((p_70 & g_2.f0), 5)) , 0x4AA44A49L) | g_3.f8)))))));
                    }
                }
                if (g_3.f9)
                {
                    int l_383 = 0L;
                    unsigned l_390 = 0UL;
                    unsigned short l_399 = 0x8027L;
                    unsigned char l_400 = 9UL;
                    union U1 l_404 = {1UL};
                    char l_414 = (-1L);
                    int l_418 = 0x26475456L;
                    l_103 = (safe_sub_func_int16_t_s_s((((l_289 = g_3.f6) <= ((safe_mod_func_int16_t_s_s((-8L), (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_68, g_209.f3)), ((!(g_3.f8 && ((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((g_2.f9 = l_136) ^ (safe_rshift_func_uint8_t_u_u(p_70, 5))), (g_2.f1 & (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(l_149, l_314)), 6))))), 0x9CL)) || g_2.f0))) & 4294967295UL))), 0xFA67L)))) < 254UL)) >= g_3.f8), g_2.f0));
                    if (l_113)
                        goto lbl_382;
                    if (l_75)
                    {
lbl_382:
                        l_129 = (p_70 > l_314);
                        l_383 &= (g_150 ^ p_69);
                        l_117 = ((safe_mul_func_uint16_t_u_u(3UL, l_287)) != (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_390, (safe_rshift_func_int16_t_s_s((g_240 &= p_70), (l_268 |= g_3.f0))))), ((safe_lshift_func_uint16_t_u_u(((l_117 && l_289) == (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((0x4C95L >= l_314) | l_289) , l_399), l_400)), g_2.f7))), 5)) <= (-1L)))));
                        l_401 = 0xE6289F04L;
                    }
                    else
                    {
                        unsigned l_405 = 18446744073709551612UL;
                        g_2.f1 = l_103;
                        l_129 = (safe_mul_func_int8_t_s_s((l_404 , (p_70 && ((l_405 , (safe_div_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_s(l_113, (safe_add_func_int32_t_s_s(g_2.f8, p_68)))) , p_69) > ((l_268 = (p_68 > ((safe_rshift_func_uint16_t_u_s(g_2.f9, 3)) | 0x47BBL))) & p_70)) | l_390), p_69))) , l_414))), p_70));
                        l_415 = 0x8E2AD8C1L;
                        l_289 = p_69;
                    }
                    l_418 = (((g_3.f1 | (((p_68 ^ 0x63L) > p_68) , 5UL)) || l_292) , (safe_div_func_int8_t_s_s(p_68, g_244)));
                }
                else
                {
                    if (l_93.f3)
                        goto lbl_419;
                }
            }
        }
        else
        {
            unsigned l_434 = 5UL;
            int l_438 = (-1L);
            union U1 l_445 = {251UL};
            unsigned short l_452 = 0xE67FL;
            char l_474 = 0L;
            for (g_3.f7 = 0; (g_3.f7 == 26); g_3.f7++)
            {
                short l_424 = 0x28BCL;
                int l_453 = (-7L);
                short l_454 = 1L;
                if ((g_2.f1 &= ((safe_lshift_func_uint16_t_u_s(p_69, 5)) != l_424)))
                {
                    unsigned short l_427 = 0x56E4L;
                    g_2.f1 &= (safe_div_func_int8_t_s_s((l_93.f0 < p_68), p_68));
                    l_103 |= l_427;
                }
                else
                {
                    int l_442 = (-9L);
                    for (g_2.f7 = 0; (g_2.f7 < (-20)); g_2.f7 = safe_sub_func_int8_t_s_s(g_2.f7, 1))
                    {
                        l_102 = 0x41B184DCL;
                        if (g_240)
                            goto lbl_419;
                        l_129 ^= (l_103 |= (safe_lshift_func_uint8_t_u_s(l_424, 2)));
                    }
                    g_2.f1 = 6L;
                    l_129 |= (g_240 , ((safe_sub_func_int8_t_s_s(((g_435 = l_434) && (((((safe_add_func_uint16_t_u_u((255UL && l_438), (0x87E1L < l_438))) ^ (safe_rshift_func_uint16_t_u_u(g_3.f3, (((((safe_unary_minus_func_int8_t_s((0L >= ((l_103 ^= (g_3.f1 <= l_434)) , p_69)))) , 0x604A93B7L) & 0x638D83F1L) ^ 0xE45A4210L) , l_438)))) & 1L) && 3UL) | p_69)), p_69)) >= l_442));
                    l_438 = (l_80 , ((l_453 |= (safe_div_func_uint16_t_u_u(p_70, (((l_445 , 9UL) && g_104) && (l_434 < (g_281 = ((((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_69 == ((l_452 , (g_3.f0 = p_69)) && 0x9FL)), p_68)), p_70)), p_70)) , l_145) && l_93.f0) > (-3L)))))))) < p_68));
                }
                if (l_454)
                    break;
                for (g_151 = (-22); (g_151 > 45); g_151++)
                {
                    unsigned l_459 = 4294967289UL;
                    for (g_209.f3 = 3; (g_209.f3 <= 51); g_209.f3++)
                    {
                        l_459 &= l_75;
                        if (p_69)
                            break;
                        return g_209;
                    }
                    for (l_438 = 0; (l_438 <= (-30)); l_438--)
                    {
                        char l_468 = 9L;
                        int l_469 = 0x9117F19FL;
                        l_469 = (((p_70 | (l_103 = (((((safe_mod_func_int8_t_s_s((0x90B6071BL <= l_103), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(0xCCL, 3)), 6)))) <= g_3.f9) , g_209) , (p_68 &= (+l_452))) >= l_468))) <= ((g_209.f0 < g_3.f1) < g_3.f2)) >= g_3.f7);
                        l_482 ^= (p_69 && (g_209.f3 = ((+(safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((p_69 = (l_474 && (safe_div_func_uint32_t_u_u(l_93.f0, ((l_129 &= 0xBCAFL) || ((l_445.f3 | l_434) | ((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_474 >= 5L), g_3.f9)), 15)) , p_70) && l_481) , l_415))))))) && 0x2EF7L), 4)), p_70))) <= p_68)));
                        l_103 = 0xA3691007L;
                        g_2.f1 = g_2.f1;
                    }
                }
            }
            g_2.f1 = g_2.f7;
            g_2.f1 |= g_2.f9;
            l_129 |= (l_103 = g_3.f6);
        }
        if (p_69)
            goto lbl_483;
        l_482 = ((0xA435L < (l_129 = l_484)) < (l_485 , (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(l_482, (safe_add_func_uint8_t_u_u(((l_93 , 0x10L) ^ (l_102 &= ((l_482 , (g_2.f1 = l_482)) , (((g_2.f3 |= (safe_rshift_func_int16_t_s_u(l_103, l_496))) ^ 0UL) != (-4L))))), l_497)))), l_482)) < p_68), 0x5CL))));
    }
    else
    {
        union U1 l_500 = {0x1EL};
        int l_540 = 6L;
        unsigned l_636 = 1UL;
        unsigned l_663 = 0xB86F4105L;
        unsigned l_691 = 0x0FF10CADL;
        unsigned char l_699 = 0UL;
        for (l_93.f3 = 0; (l_93.f3 == 8); l_93.f3 = safe_add_func_uint8_t_u_u(l_93.f3, 2))
        {
            return l_500;
        }
        for (g_244 = 0; (g_244 < 27); g_244 = safe_add_func_uint16_t_u_u(g_244, 1))
        {
            g_2.f1 = (-5L);
            g_2.f1 ^= l_252;
        }
        if (((safe_sub_func_int16_t_s_s(4L, (((+(p_69 < (safe_mul_func_int8_t_s_s(g_209.f3, l_500.f0)))) && l_93.f3) , (g_435 ^ (l_500 , ((safe_div_func_uint32_t_u_u(4294967292UL, (safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((l_103 = p_68), l_500.f0)), 0x22ADA309L)), l_500.f0)))) < g_2.f8)))))) & 0x2562L))
        {
            char l_525 = (-1L);
            union U1 l_563 = {0xADL};
            int l_582 = 0x561B8B1EL;
            int l_598 = (-1L);
            for (g_150 = 0; (g_150 > 57); g_150 = safe_add_func_int8_t_s_s(g_150, 8))
            {
                unsigned l_538 = 1UL;
                int l_539 = 0x92718C42L;
                short l_547 = 0xC6B9L;
                unsigned char l_551 = 0x77L;
                l_540 = ((((p_70 = (((safe_add_func_uint32_t_u_u(p_70, ((1UL > (((safe_div_func_uint32_t_u_u(p_68, 2UL)) , (safe_lshift_func_uint8_t_u_s((l_525 == (safe_rshift_func_uint16_t_u_s((l_103 = (safe_lshift_func_uint16_t_u_u((g_3.f2 ^= l_500.f3), 12))), (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(0x6DL, g_3.f7)) , (l_539 = l_538)), 1)), 7)) == p_69), l_322))))), g_104))) > g_2.f0)) & p_70))) , g_2.f0) && g_3.f7)) < 0xB156L) && 0xBDL) <= g_3.f1);
                if ((safe_mul_func_uint16_t_u_u((p_69 ^ l_500.f0), ((l_102 = ((safe_mul_func_uint16_t_u_u(g_354, (l_540 ^= ((l_496 >= (safe_add_func_int32_t_s_s(0L, 1UL))) , l_547)))) ^ l_484)) == l_539))))
                {
                    unsigned l_562 = 18446744073709551612UL;
                    int l_613 = 0x4B4F2838L;
                    for (l_136 = (-22); (l_136 > (-2)); l_136 = safe_add_func_uint16_t_u_u(l_136, 1))
                    {
                        return g_550;
                    }
                    l_540 = ((3UL ^ (0xC83AL >= (((~l_551) ^ ((g_286 |= g_151) == (safe_mul_func_int16_t_s_s(p_68, ((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_68, p_69)), (safe_div_func_uint16_t_u_u((g_281 = ((safe_add_func_uint8_t_u_u(((-1L) || g_550.f3), p_68)) | l_525)), 0x9759L)))) & l_562))))) , 0xDD6AL))) == p_69);
                    g_2.f1 ^= (-1L);
                    if (((((~(0xC823CFCAL || ((((l_563 , g_281) <= (g_3.f2 = l_547)) == ((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_563.f3, ((safe_mod_func_uint16_t_u_u(((l_540 = g_209.f0) , g_550.f3), ((((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_68, p_70)), l_563.f0)) | g_3.f3) && 0x0DL) || l_145))) , 0x6466L))), l_525)) && g_2.f0)) == g_2.f2))) && g_2.f3) , g_2.f6) | l_322))
                    {
                        unsigned short l_593 = 0xB12FL;
                        l_582 = (((safe_div_func_int32_t_s_s(p_68, (l_103 = g_209.f0))) | (((safe_lshift_func_int8_t_s_s(0xE8L, 0)) & 1UL) & (((l_496 , p_70) && g_3.f8) ^ ((safe_div_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(0xDBA7L, p_68)) | g_2.f8), g_2.f0)) , g_2.f3)))) || g_2.f2);
                        l_540 = (safe_add_func_uint32_t_u_u(((g_2.f7 ^ (safe_mul_func_int16_t_s_s(l_562, (p_68 = g_2.f6)))) & 4UL), (1UL == (g_3.f0 & p_69))));
                        l_598 = (((g_550 , 0xC8E3E57DL) , (l_103 = ((safe_lshift_func_int16_t_s_s((g_3.f7 = (((safe_mul_func_int16_t_s_s(0xD397L, ((((!(safe_rshift_func_uint16_t_u_s(g_3.f8, (l_593 == (g_240 ^ p_70))))) >= ((safe_sub_func_int16_t_s_s(l_593, (safe_mul_func_int16_t_s_s((l_102 = g_3.f7), 1UL)))) , l_593)) | p_70) , l_562))) != g_2.f1) & g_3.f3)), g_281)) && 0x6EF3L))) , g_354);
                        return g_550;
                    }
                    else
                    {
                        char l_612 = 0x6FL;
                        l_598 = (safe_sub_func_int32_t_s_s(l_562, (l_613 |= ((safe_sub_func_uint32_t_u_u((g_281 , (safe_sub_func_int16_t_s_s(p_69, (l_500 , (((g_244 , (safe_mul_func_int8_t_s_s(l_607, (((safe_lshift_func_int8_t_s_u((g_104 = p_70), (safe_div_func_int16_t_s_s((l_539 = ((g_2.f9 = (p_69 != g_2.f7)) >= g_150)), l_598)))) >= 0x6BL) & l_562)))) ^ g_151) | l_540))))), l_612)) , g_3.f6))));
                        return l_500;
                    }
                }
                else
                {
                    short l_616 = 4L;
                    for (l_93.f0 = (-11); (l_93.f0 > 29); l_93.f0 = safe_add_func_uint16_t_u_u(l_93.f0, 8))
                    {
                        int l_621 = 0x5E6F3CDEL;
                        l_598 = (((l_616 & (safe_add_func_uint16_t_u_u(((((((p_69 > ((~1UL) && ((g_209.f3 = ((p_68 = p_68) == 1L)) <= (1UL != g_2.f6)))) <= l_598) && 0xA43A0AFFL) && l_621) | p_70) != g_3.f1), l_622))) == 0x43DCL) , (-1L));
                        if (l_485)
                            break;
                        g_2.f1 ^= l_616;
                    }
                    if (l_540)
                        continue;
                }
                for (l_93.f1 = 0; (l_93.f1 == 24); ++l_93.f1)
                {
                    char l_625 = 0x59L;
                    unsigned short l_650 = 0x1814L;
                    int l_655 = 0x352D2D01L;
                    g_2.f1 |= (p_68 != (l_625 || ((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((-1L), p_69)) >= (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_2.f6, 14)), ((l_636 == 0L) < (0xECCF4909L & (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_3.f6, 1UL)), l_625)))))), 0x7FFDL))) && g_550.f3), l_582)) < g_641)));
                    if (g_550.f0)
                        break;
                    l_655 = (g_2.f1 = (safe_lshift_func_int16_t_s_u((~(((safe_div_func_int16_t_s_s((p_69 && ((safe_sub_func_int8_t_s_s(g_209.f3, ((p_68 == l_650) < (l_540 ^= p_69)))) > (g_2.f6 <= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((g_2.f0 | p_69) , p_69) >= g_244), g_281)), g_209.f0))))), p_68)) < l_547) , l_551)), 4)));
                    if (g_3.f9)
                    {
                        return g_209;
                    }
                    else
                    {
                        char l_656 = 0xE1L;
                        l_656 &= p_69;
                        if (g_2.f0)
                            break;
                        if (l_538)
                            break;
                    }
                }
                return g_209;
            }
            g_2.f1 = (safe_mul_func_uint16_t_u_u(((l_103 = ((p_69 | p_70) == ((1L && g_550.f3) ^ ((g_286 |= ((g_2.f2 = (p_68 >= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_209 , l_540), 2)), ((p_69 , (l_598 = 0xDFL)) , g_104))))) || 65535UL)) , 0x0EL)))) != 0xF0836715L), l_500.f0));
        }
        else
        {
            int l_670 = (-5L);
            int l_676 = 0x0344CFDEL;
            l_663 ^= 0xE8AE7EFFL;
            l_670 = (g_2.f1 ^= ((safe_div_func_int32_t_s_s((+(((safe_mod_func_uint8_t_u_u(g_3.f9, l_322)) <= p_70) , (l_103 &= (l_663 , (~(0L < (safe_add_func_uint32_t_u_u((((p_68 & (1UL && l_670)) != l_670) & g_2.f9), 0UL)))))))), g_3.f6)) , 0xA1746ABDL));
            l_676 |= (l_670 < (g_209 , (safe_mul_func_uint8_t_u_u(g_281, (safe_rshift_func_uint8_t_u_u(((0x57L < (g_550.f3 = l_607)) , l_675), (p_69 >= g_3.f0)))))));
        }
        for (l_497 = 0; (l_497 <= 10); l_497++)
        {
            int l_684 = (-5L);
            int l_692 = 3L;
            l_692 = (((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((safe_div_func_uint8_t_u_u(g_2.f6, l_636)) != l_684))), p_69)) != 0x472B3AAAL) || (safe_mod_func_uint16_t_u_u((g_550.f0 == g_3.f0), (safe_mod_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((l_684 && 1UL), 2L)) >= l_691), 250UL))))) , g_3.f8) && p_70);
            g_2.f1 |= l_500.f0;
            if ((safe_lshift_func_uint8_t_u_s((g_2.f0 == 0x93L), 7)))
            {
                l_540 = (g_209.f3 && (1L <= g_2.f3));
                return l_93;
            }
            else
            {
                for (g_209.f0 = 0; (g_209.f0 <= 25); g_209.f0++)
                {
                    l_692 = g_2.f2;
                }
                g_2.f1 &= p_69;
            }
            l_103 &= (safe_add_func_int32_t_s_s((0x7E4EL | (l_102 = l_684)), l_699));
        }
    }
    if (((g_354 >= ((((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_75, ((g_641 , (g_435 ^= (!((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((g_244 = ((l_715 = (safe_add_func_int32_t_s_s(((safe_div_func_int32_t_s_s(l_143, l_80)) >= l_80), (l_103 = ((safe_mul_func_uint16_t_u_u((((l_102 = p_68) ^ ((l_143 <= (l_714 , 0x05L)) && 0xBDL)) ^ 3L), p_69)) & 1L))))) , 0x8306L)), 0xC392L)) , g_3.f3) > (-8L)), g_281)) == 0x69L)))) , p_70))), 0xB15B71B0L)) | 1L) , 0x9BADL) > p_69)) < g_104))
    {
        int l_733 = 0xC5DF3F8FL;
        int l_748 = 5L;
        int l_750 = 0xF872AC11L;
        g_2.f1 ^= (p_69 == (safe_mod_func_int8_t_s_s(g_104, ((safe_div_func_uint16_t_u_u((g_3.f1 ^ (l_607 ^ p_70)), (p_68 = (safe_mod_func_int16_t_s_s((0xE5L >= l_722), (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((g_281 = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((g_641 || ((safe_sub_func_int32_t_s_s(g_2.f0, g_2.f9)) >= g_3.f9)), p_68)) != p_70), 7))), 0x7BC4L)) & g_2.f6), 0xF91F6EC8L))))))) ^ l_733))));
        l_750 = (safe_add_func_int8_t_s_s(((1UL || ((safe_mod_func_uint8_t_u_u(g_2.f9, ((safe_lshift_func_uint8_t_u_u(0xF8L, 1)) || (safe_lshift_func_uint16_t_u_s(g_3.f1, ((((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_68 > ((l_715 = l_80) <= (l_497 >= ((l_748 = (safe_sub_func_uint8_t_u_u(g_2.f0, g_281))) && 0x5AL)))), (-10L))), g_240)) | g_240) > 0xF5A9L) , 6L)))))) <= p_70)) < p_69), l_749));
        g_2.f1 ^= (safe_rshift_func_uint16_t_u_s((+l_750), ((g_244 , l_497) , g_2.f2)));
        g_2.f1 = (1UL | (p_69 | (g_2.f6 < (safe_sub_func_int32_t_s_s((g_3.f7 >= (safe_div_func_int32_t_s_s(g_2.f6, g_2.f9))), (g_3.f3 = l_252))))));
    }
    else
    {
        short l_762 = 0x92D9L;
        int l_765 = (-1L);
        int l_806 = 0x920A844DL;
        unsigned char l_834 = 254UL;
        union U1 l_889 = {253UL};
        unsigned short l_932 = 0xBC93L;
        if (g_2.f1)
        {
            int l_761 = 0x6959FB07L;
            union U1 l_796 = {1UL};
            int l_809 = 0xD870B050L;
            unsigned l_851 = 1UL;
            l_102 |= ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_761, g_2.f7)), l_762)) <= (g_2.f2 = ((p_68 , ((g_209 , (safe_add_func_int16_t_s_s(g_150, g_3.f9))) , (l_765 |= ((l_761 , g_3.f3) < p_70)))) & 8L)));
            g_2.f1 = l_761;
            for (l_93.f1 = 21; (l_93.f1 <= 13); l_93.f1 = safe_sub_func_uint8_t_u_u(l_93.f1, 5))
            {
                short l_772 = 0x2351L;
                unsigned l_787 = 0x8D85A294L;
                int l_800 = 0L;
                if ((!g_209.f0))
                {
                    char l_771 = 0x20L;
                    if (g_2.f6)
                    {
                        char l_770 = (-1L);
                        l_771 = ((safe_sub_func_int16_t_s_s(((0x86D3L | (l_765 = l_770)) & g_240), g_240)) > (4UL != g_2.f2));
                        return g_550;
                    }
                    else
                    {
                        int l_785 = 5L;
                        int l_786 = (-1L);
                        char l_797 = 0x90L;
                        l_772 = 0x7292E34FL;
                        l_765 ^= (((safe_add_func_uint32_t_u_u(l_772, g_2.f2)) , 0UL) >= ((g_3.f8 = (safe_lshift_func_uint8_t_u_s(g_2.f8, 4))) < ((((0xA642A607L != (l_786 = ((safe_lshift_func_uint16_t_u_u(((~p_68) , (safe_sub_func_int16_t_s_s(p_70, (g_354 = (~p_69))))), 15)) && (safe_mod_func_int8_t_s_s(((l_785 = l_772) & 0xEBA2L), (-1L)))))) && p_70) , l_787) && p_69)));
                        l_765 = ((((safe_lshift_func_uint16_t_u_s(g_354, 3)) != (l_786 | g_2.f6)) , l_785) & ((safe_sub_func_int16_t_s_s(2L, ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((l_796 , (l_797 |= g_3.f1)), (g_3.f7 , (safe_mul_func_int16_t_s_s((g_3.f8 = (g_3.f7 = (~0x9893L))), 1L))))) | 1UL), (-7L))) ^ 0L))) <= 0x6BL));
                    }
                    l_800 = g_3.f1;
                    g_2.f1 |= (g_3.f3 , g_209.f3);
                }
                else
                {
                    unsigned short l_803 = 1UL;
                    int l_823 = 1L;
                    g_810 = (g_286 || (p_68 , (l_761 <= ((g_2.f1 |= (l_809 ^= (safe_mul_func_uint8_t_u_u((l_803 = l_765), (safe_sub_func_int32_t_s_s((l_806 = g_3.f1), (l_103 = (g_2.f3 ^= (safe_mod_func_int8_t_s_s(((((0xB9D9L || 0x4019L) < (((g_2.f7 = (g_3.f9 <= (p_69 >= 0xEFL))) || p_68) , p_69)) , l_497) <= p_70), l_800)))))))))) || 9UL))));
                    for (g_3.f8 = 27; (g_3.f8 <= (-11)); g_3.f8 = safe_sub_func_int8_t_s_s(g_3.f8, 9))
                    {
                        unsigned short l_817 = 65530UL;
                        l_823 = (g_150 , (safe_mod_func_int16_t_s_s((-3L), (((safe_mul_func_int8_t_s_s((l_817 &= g_151), ((l_145 <= (1UL & (safe_rshift_func_uint8_t_u_s(p_70, 5)))) && ((0xEAE55358L & (((safe_sub_func_int32_t_s_s(l_749, ((g_281 , 0xB7L) & p_70))) < 0xF69FL) != g_822)) || g_3.f3)))) , g_3.f3) | l_765))));
                        g_2.f1 ^= p_69;
                    }
                    l_761 = (((l_806 = (safe_lshift_func_int8_t_s_u((~((safe_sub_func_uint8_t_u_u(g_3.f7, g_2.f2)) == g_810)), p_70))) == (((l_497 ^ (safe_div_func_int8_t_s_s(((l_830 <= (g_104 = (p_68 == g_435))) < 1UL), p_68))) | g_151) != g_2.f8)) > g_151);
                    if (((p_68 > (l_103 ^= l_772)) , l_796.f3))
                    {
                        char l_831 = 0x6CL;
                        unsigned char l_837 = 254UL;
                        l_831 ^= p_70;
                        l_765 = ((((p_69 | ((((+0x61L) && p_69) , p_70) & ((0UL && p_70) , (((safe_mod_func_int16_t_s_s((l_834 = g_3.f3), p_68)) <= (safe_mod_func_int16_t_s_s((g_435 <= l_837), l_831))) >= g_3.f1)))) , g_151) >= g_3.f3) , g_3.f6);
                        l_800 ^= g_3.f9;
                    }
                    else
                    {
                        short l_838 = 3L;
                        int l_852 = 0L;
                        int l_857 = 0x51B2E7E2L;
                        int l_858 = 0x0D65D966L;
                        l_102 |= p_68;
                        l_838 = l_143;
                        g_822 &= (safe_rshift_func_uint16_t_u_u((g_104 == (l_858 = (safe_div_func_int32_t_s_s((l_143 , (l_834 & (safe_lshift_func_uint16_t_u_u((g_354 || ((safe_mul_func_uint16_t_u_u(p_69, ((safe_rshift_func_uint16_t_u_u(0xB17BL, 0)) , ((l_857 = (g_2.f9 = (safe_sub_func_int32_t_s_s((g_2.f1 , (l_852 = l_851)), (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((((g_810 & g_2.f7) , 0x6EL) | 6UL), 4)) & 0x1434L), p_68)))))) ^ l_761)))) || 0x11FDL)), l_809)))), l_838)))), 1));
                        if (l_852)
                            break;
                    }
                }
                if (((l_715 = 0xC22FL) , (g_3.f1 | g_3.f1)))
                {
                    int l_888 = 0xFB4E31F3L;
                    if (g_3.f0)
                        break;
                    l_715 ^= (safe_add_func_int32_t_s_s((l_806 = ((safe_lshift_func_int16_t_s_s(p_68, (l_103 = l_675))) , (251UL < (g_2.f9 &= (l_761 , g_244))))), (safe_mod_func_uint8_t_u_u((!l_765), (safe_add_func_int16_t_s_s((p_69 , (((p_68 == (p_70 = g_550.f3)) && 4294967295UL) & p_68)), l_765))))));
                    if (((p_70 = 0L) == (safe_lshift_func_uint16_t_u_u(g_2.f3, 3))))
                    {
                        unsigned l_871 = 3UL;
                        l_800 ^= (p_69 || ((((((safe_div_func_int16_t_s_s(p_69, g_2.f9)) >= g_354) <= l_871) != p_69) && ((safe_rshift_func_int16_t_s_u(l_762, (safe_div_func_uint8_t_u_u(((g_822 = (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((l_871 && ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_70, g_3.f6)), g_3.f6)) ^ g_150)), 5)) , g_3.f2) & (-3L)), l_888)), 0x76C4A31DL)), g_3.f1))) == g_2.f8), l_762)))) ^ l_75)) & l_761));
                        l_715 = g_209.f0;
                    }
                    else
                    {
                        return l_889;
                    }
                }
                else
                {
                    l_761 = (g_2.f1 |= (safe_rshift_func_int8_t_s_u((0xA09AL == (l_796 , (g_550.f3 , g_3.f6))), (safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(p_68, ((safe_lshift_func_uint16_t_u_s(0x2058L, 12)) | g_2.f6))) , p_69) , (l_898 != l_749)), 0x76L)))));
                }
                l_806 = p_70;
            }
            l_809 ^= (safe_add_func_uint16_t_u_u((((l_796 , p_70) < (g_2.f6 = p_68)) , g_209.f0), g_286));
        }
        else
        {
            unsigned char l_909 = 4UL;
            int l_919 = (-1L);
            l_715 = 0x444E5986L;
            l_806 = (safe_add_func_uint32_t_u_u((0xE0L < (safe_lshift_func_uint8_t_u_s((~(g_2.f9 = (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(l_909, (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_s((-3L), (l_765 |= g_3.f3))) == (l_919 = (g_3.f1 == (p_70 |= (safe_lshift_func_int8_t_s_s(((((g_240 & (safe_rshift_func_int8_t_s_u(((l_909 || ((safe_add_func_uint32_t_u_u(((g_3.f2 || l_909) > l_762), 8UL)) | l_909)) != g_3.f8), 5))) ^ 0x0626L) <= g_435) != 0xDCL), l_762)))))))))) , l_920), l_762)))), g_240))), g_240));
            l_765 = (g_822 = (g_209.f3 == (l_932 = (g_931 ^= (g_104 = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_68 > (g_2.f6 = (p_70 | g_2.f0))), ((p_70 <= (l_889.f3 == (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(p_69, (((safe_mul_func_uint16_t_u_u(g_2.f0, (l_909 >= 0xC95788CCL))) & 4294967294UL) , 0xA6L))), l_919)))) == 0x9576E7F7L))), l_889.f3)))))));
        }
    }
    for (g_810 = (-30); (g_810 >= (-28)); ++g_810)
    {
        short l_940 = 0x7812L;
        int l_941 = 0x210C1FDCL;
        if (p_68)
        {
            int l_946 = 0x2777EF06L;
            int l_963 = 0x890C6F0FL;
            l_941 = ((safe_add_func_uint8_t_u_u(((((l_937 , (safe_add_func_int32_t_s_s(p_70, (-1L)))) || (g_3.f3 = (((p_69 && (g_2.f9 , (g_550.f0 || g_822))) < g_240) != (l_940 < p_68)))) <= 0x8EL) , 0xB9L), g_931)) == g_104);
            for (g_550.f0 = 0; (g_550.f0 > 49); g_550.f0 = safe_add_func_uint32_t_u_u(g_550.f0, 4))
            {
                char l_952 = (-1L);
                union U1 l_975 = {1UL};
                int l_981 = 0x83F40CABL;
                for (g_2.f3 = 0; (g_2.f3 == 33); g_2.f3++)
                {
                    unsigned l_959 = 4294967294UL;
                    int l_966 = 0L;
                    if (l_946)
                    {
                        int l_947 = (-7L);
                        l_947 ^= g_2.f9;
                        if (p_70)
                            continue;
                        return g_550;
                    }
                    else
                    {
                        short l_960 = (-1L);
                        if (p_70)
                            break;
                        l_103 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_952 || (l_952 & (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((g_550 , p_70) <= (((-3L) > p_68) | (safe_rshift_func_int16_t_s_u((l_946 || g_3.f1), l_959)))), g_3.f8)), l_960)))), 0xBFL)), 5));
                    }
                    for (g_435 = 25; (g_435 >= 17); --g_435)
                    {
                        l_963 = g_3.f2;
                        g_822 = ((g_2.f9 = ((safe_lshift_func_uint16_t_u_u((g_150 <= (l_952 != (((l_941 = (g_3.f6 & l_946)) || 0x1F31D62FL) <= g_2.f9))), 11)) <= p_70)) , (l_966 = (((p_69 ^ g_2.f3) | l_959) & p_70)));
                    }
                }
                if ((g_822 = (((safe_rshift_func_uint16_t_u_s(((((g_2.f3 | (!((1UL ^ 1UL) & (safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(0x1EL, g_3.f8)) , ((g_2.f3 == (l_975 , (((p_69 , 0L) < 0x7FBEL) != g_151))) < l_975.f3)), p_68)) == g_281) > g_240), p_70))))) > g_2.f7) , (-1L)) >= l_940), l_940)) < l_952) , 0x65EC959CL)))
                {
                    if (g_2.f1)
                        break;
                    return l_93;
                }
                else
                {
                    unsigned l_976 = 4294967295UL;
                    l_981 = (l_976 && ((safe_div_func_uint32_t_u_u(l_976, g_641)) >= (g_150 < p_70)));
                }
            }
        }
        else
        {
            return g_209;
        }
        l_941 |= (p_70 == l_940);
    }
    return g_550;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_2.f5, "g_2.f5", print_hash_value);
    transparent_crc(g_2.f6, "g_2.f6", print_hash_value);
    transparent_crc(g_2.f7, "g_2.f7", print_hash_value);
    transparent_crc(g_2.f8, "g_2.f8", print_hash_value);
    transparent_crc(g_2.f9, "g_2.f9", print_hash_value);
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
    transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
    transparent_crc(g_3.f4, "g_3.f4", print_hash_value);
    transparent_crc(g_3.f5, "g_3.f5", print_hash_value);
    transparent_crc(g_3.f6, "g_3.f6", print_hash_value);
    transparent_crc(g_3.f7, "g_3.f7", print_hash_value);
    transparent_crc(g_3.f8, "g_3.f8", print_hash_value);
    transparent_crc(g_3.f9, "g_3.f9", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_550.f0, "g_550.f0", print_hash_value);
    transparent_crc(g_550.f3, "g_550.f3", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1319, "g_1319", print_hash_value);
    transparent_crc(g_1466, "g_1466", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1754, "g_1754", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
