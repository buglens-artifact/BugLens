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
   unsigned f0 : 23;
   unsigned f1 : 18;
   signed f2 : 13;
   unsigned f3 : 4;
   signed f4 : 5;
   unsigned f5 : 10;
   signed f6 : 1;
   signed f7 : 16;
};

union U1 {
   int f0;
   int f1;
   short f2;
   unsigned long long f3;
   unsigned char f4;
};

union U2 {
   unsigned char f0;
   int f1;
   int f2;
   const unsigned long long f3;
   unsigned f4;
};


static char g_2 = (-1L);
static const union U2 g_17 = {0x61L};
static int g_41 = 0x9458D81CL;
static struct S0 g_67 = {2700,473,-88,0,2,13,0,-205};
static unsigned long long g_78 = 18446744073709551615UL;
static unsigned g_143 = 0xBDDC6D73L;
static unsigned g_164 = 6UL;
static unsigned short g_184 = 65535UL;
static unsigned long long g_212 = 0UL;
static union U1 g_218 = {0xFBAC7AF0L};
static unsigned long long g_261 = 0xBCDFAA73AA586F34LL;
static unsigned short g_272 = 0xC55AL;
static int g_292 = 0x25584206L;
static int g_341 = 3L;
static unsigned g_440 = 18446744073709551615UL;
static unsigned g_444 = 0xEA8F5173L;
static long long g_513 = (-7L);
static unsigned char g_548 = 5UL;
static unsigned char g_572 = 0x56L;
static unsigned long long g_600 = 1UL;
static long long g_705 = 0x8040D1108931C50FLL;
static union U1 g_720 = {0x543D985AL};
static unsigned char g_875 = 255UL;
static struct S0 g_878 = {2515,107,20,0,1,9,0,-8};



static short func_1(void);
static char func_3(union U2 p_4, int p_5, union U2 p_6, struct S0 p_7);
static union U2 func_8(short p_9, short p_10, char p_11, int p_12, union U1 p_13);
static unsigned char func_15(const union U2 p_16);
static struct S0 func_20(union U1 p_21, unsigned char p_22, long long p_23, unsigned p_24);
static struct S0 func_27(char p_28, int p_29, unsigned p_30);
static short func_38(const struct S0 p_39);
static struct S0 func_44(unsigned short p_45, unsigned p_46);
static short func_52(long long p_53, unsigned short p_54, unsigned long long p_55, union U1 p_56, long long p_57);
static int func_63(struct S0 p_64, unsigned short p_65, short p_66);
static short func_1(void)
{
    unsigned char l_14 = 0x06L;
    int l_716 = 0xB6F1853BL;
    const union U2 l_717 = {1UL};
    struct S0 l_783 = {1880,368,85,1,-2,10,0,136};
    char l_793 = 3L;
    long long l_797 = 0x3044B0D6E6F6D6A6LL;
    struct S0 l_854 = {1536,191,-27,0,-3,2,0,-154};
    short l_879 = (-5L);
    int l_987 = (-1L);
    char l_992 = 3L;
    g_2 = 0x143E95AAL;
    l_783.f2 = (func_3(func_8(g_2, l_14, (func_15(g_17) || ((l_716 = 0UL) && ((g_572 & g_164) <= (safe_mod_func_uint32_t_u_u((0xC007L | g_2), l_14))))), l_717.f0, g_720), l_717.f0, g_17, l_783) ^ 0xD5L);
    if (l_793)
    {
        unsigned long long l_805 = 0xF964A2C1D7F3D962LL;
        int l_806 = 0xD45B884AL;
        short l_807 = 0x004CL;
        unsigned char l_835 = 0x81L;
        unsigned short l_853 = 0x3DF2L;
        short l_866 = 0x82C7L;
        struct S0 l_868 = {1438,458,71,2,4,24,-0,177};
        l_783.f2 = ((l_783.f4 = (safe_rshift_func_int16_t_s_u((g_67.f1 <= (safe_unary_minus_func_int16_t_s((l_797 & g_572)))), 9))) ^ ((safe_unary_minus_func_uint64_t_u((safe_add_func_int8_t_s_s(g_17.f0, (safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((g_164 > l_805) || ((l_806 = ((g_67.f5 == 1L) > 0x82L)) >= g_212)), g_440)) == l_807), 0xB49C2B83L)))))) || g_292));
        if ((safe_mod_func_int8_t_s_s(l_717.f0, l_783.f6)))
        {
            int l_827 = 0L;
            int l_839 = (-6L);
            for (g_720.f3 = 0; (g_720.f3 < 36); g_720.f3 = safe_add_func_int32_t_s_s(g_720.f3, 6))
            {
                unsigned l_832 = 0xACA6ABE5L;
                for (g_212 = 0; (g_212 <= 21); g_212 = safe_add_func_uint8_t_u_u(g_212, 5))
                {
                    int l_826 = (-1L);
                    unsigned l_828 = 4294967290UL;
                    g_341 = g_184;
                    l_826 = (safe_sub_func_uint32_t_u_u(((g_272 = (((safe_mod_func_uint8_t_u_u(g_705, 0x6FL)) | (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((((g_261 = l_806) == l_826) == l_827), 5)) >= 0xAE5DL), g_600)) & (0x86F801FBL & (l_828 = (l_783.f2 = g_548)))), l_797)), 0xDE5B0575L))) <= g_143)) ^ g_143), g_67.f1));
                }
                l_806 = l_783.f1;
                for (g_164 = 4; (g_164 >= 51); g_164 = safe_add_func_int64_t_s_s(g_164, 7))
                {
                    int l_831 = 0x592D0358L;
                    g_218.f1 = (g_67.f7 = (3UL && (l_832 = l_831)));
                    g_341 = (!(safe_sub_func_uint32_t_u_u(g_212, (l_835 || g_548))));
                }
                if ((((safe_unary_minus_func_uint32_t_u(l_783.f5)) ^ ((l_783.f2 = (((l_806 = l_806) != func_63(func_44((g_184 = g_720.f1), ((g_548 = ((l_839 = (safe_lshift_func_int8_t_s_u(g_548, g_720.f2))) >= (safe_mod_func_uint64_t_u_u(g_720.f2, (+(((0x1069L | l_783.f5) ^ l_832) >= g_218.f4)))))) != 1L)), l_835, g_272)) >= g_444)) || 0x722B9CF852403D71LL)) != l_797))
                {
                    const unsigned l_846 = 4294967295UL;
                    struct S0 l_852 = {1914,50,33,1,-0,4,0,174};
                    l_852.f4 = (safe_sub_func_uint32_t_u_u((g_292 == g_41), (safe_rshift_func_int8_t_s_u(((l_846 && (65527UL > (func_3(l_717, (safe_rshift_func_int8_t_s_s(((l_832 >= (((safe_add_func_int8_t_s_s((g_600 == ((safe_unary_minus_func_uint32_t_u(g_341)) & l_807)), 1UL)) >= l_839) && 0x0734L)) && 0xAA17CDEE6EDD3265LL), g_67.f1)), g_17, l_852) >= g_572))) && g_41), 3))));
                    l_853 = 0x4ADDC586L;
                }
                else
                {
                    unsigned l_860 = 0xED16AB77L;
                    unsigned l_865 = 1UL;
                    int l_867 = (-5L);
                    l_854 = func_27(g_292, (g_67.f6 = l_807), g_78);
                    for (g_261 = 0; (g_261 != 30); ++g_261)
                    {
                        int l_857 = 0L;
                        l_868 = func_27(l_857, ((safe_lshift_func_uint16_t_u_s((g_272 = func_63(g_67, ((l_860 >= l_857) == (((l_860 < (safe_sub_func_int32_t_s_s((l_867 = (g_41 = (safe_rshift_func_uint8_t_u_s(((g_218.f2 = (-6L)) > ((l_865 != l_866) > g_572)), 4)))), 0x768A15E4L))) == l_854.f4) >= l_839)), g_572)), 2)) ^ l_854.f4), g_600);
                        return l_839;
                    }
                    g_67 = g_67;
                    l_867 = ((((safe_mod_func_int8_t_s_s((0xE5L <= (g_67.f6 & l_865)), g_720.f1)) < l_832) <= (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(g_164, ((-8L) != (g_875 = (l_868.f2 = (+0xE9C6L)))))) > l_866), 2))) | l_839);
                }
            }
            g_67.f6 = (g_212 >= 8L);
        }
        else
        {
            union U2 l_876 = {1UL};
            union U1 l_877 = {0x4E80DB12L};
            l_783.f7 = (l_868.f6 = (g_878.f2 = ((func_3(l_876, g_705, func_8(l_868.f7, l_876.f0, g_67.f0, g_548, l_877), g_878) <= g_878.f1) < l_879)));
        }
    }
    else
    {
        char l_894 = 1L;
        short l_897 = 2L;
        int l_898 = (-2L);
        struct S0 l_911 = {164,505,56,0,-4,25,-0,61};
        long long l_916 = 0x0E2D71CFD2B68554LL;
        struct S0 l_920 = {534,492,-20,1,-1,8,-0,97};
        unsigned l_934 = 0x0CDCD01AL;
        union U1 l_947 = {0x38D9831AL};
        unsigned char l_976 = 0xD5L;
        unsigned char l_988 = 0xBCL;
        for (g_444 = 26; (g_444 <= 8); g_444--)
        {
            unsigned long long l_886 = 0x59E012952333FC12LL;
            struct S0 l_887 = {1914,47,-67,2,3,28,-0,249};
            g_41 = l_783.f6;
            for (g_164 = (-29); (g_164 == 23); g_164 = safe_add_func_int8_t_s_s(g_164, 6))
            {
                char l_890 = 2L;
                for (l_793 = 0; (l_793 < (-29)); l_793 = safe_sub_func_uint16_t_u_u(l_793, 1))
                {
                    g_67.f7 = 0L;
                    l_886 = g_720.f1;
                    l_887 = l_887;
                }
                g_341 = (g_218.f4 | ((g_2 = ((safe_lshift_func_uint16_t_u_s(l_783.f4, 5)) && (0UL < (l_890 = 0xF665L)))) != (l_14 || l_887.f3)));
            }
        }
        l_783 = l_854;
        if ((l_898 = ((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_s((((l_716 = (7L ^ ((65532UL != l_894) >= g_705))) && g_212) | 65533UL), ((safe_rshift_func_uint8_t_u_s(l_783.f0, 0)) > (l_854.f4 & ((l_897 != 0xD95C9DDCF43D469FLL) < l_894))))))) != l_894)))
        {
            unsigned l_910 = 1UL;
            int l_917 = 0xA76CCCCFL;
            int l_918 = 1L;
            struct S0 l_919 = {2368,359,-49,2,3,13,-0,182};
            unsigned short l_973 = 65535UL;
            l_783.f7 = (safe_mod_func_int64_t_s_s(0xA87905B026AEA8A7LL, 0xFF4E3C683A31489ELL));
            for (g_218.f4 = 0; (g_218.f4 == 5); g_218.f4 = safe_add_func_uint64_t_u_u(g_218.f4, 2))
            {
                const unsigned long long l_905 = 18446744073709551613UL;
                l_911 = func_27(((l_894 >= (((l_783.f4 | (safe_rshift_func_int8_t_s_s(l_905, l_894))) | g_67.f5) < (safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((g_572 & ((l_910 && l_783.f5) <= l_783.f5)), g_878.f1)), g_878.f4)))) ^ g_143), l_894, g_720.f4);
                l_919 = func_27(l_905, g_878.f1, (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((g_705 = g_184), (l_918 = ((l_917 = (g_878.f6 != (~((0x51A1A0C4L || (g_67.f5 = (l_897 != ((l_716 = l_916) ^ g_184)))) != l_905)))) | g_878.f1)))), g_720.f1)));
                l_920 = func_27(g_572, l_917, g_67.f1);
                if (g_720.f4)
                    continue;
            }
            if ((l_920.f2 != func_52((!l_879), (l_911.f2 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((0UL || (safe_sub_func_int64_t_s_s(g_341, (safe_sub_func_int8_t_s_s(((((g_878.f5 >= (((l_854.f6 == (g_67.f3 <= ((g_878.f0 > (l_783.f7 != l_920.f7)) == g_878.f4))) != g_143) < g_878.f6)) || g_2) ^ g_67.f6) >= 18446744073709551611UL), g_67.f4))))), l_797)) ^ 0xCE2D85DB3D043892LL), 7))), g_67.f2, g_720, l_919.f1)))
            {
                char l_931 = 0x5BL;
                int l_940 = 1L;
                union U1 l_948 = {-6L};
                if ((l_854.f4 = (safe_add_func_uint64_t_u_u((func_38(g_878) && l_931), (safe_lshift_func_int16_t_s_s((((l_934 = 9L) && 0xBC648A7CL) >= (g_572 = g_17.f0)), 1))))))
                {
                    struct S0 l_944 = {267,449,-43,1,-2,5,-0,227};
                    struct S0 l_957 = {1908,385,64,0,1,18,0,-137};
                    l_920.f7 = (l_911.f6 = (!((65535UL | (g_184 = l_854.f3)) & (l_911.f1 <= g_212))));
                    if (l_931)
                    {
                        struct S0 l_939 = {2101,182,-89,2,-1,3,-0,204};
                        g_878.f4 = ((g_218.f4 | (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((g_720.f0 != l_783.f5), (+(l_940 = func_63(l_939, l_917, g_184))))), (g_878.f6 >= g_878.f6)))) < g_720.f1);
                        l_944 = func_20(g_218, (((safe_unary_minus_func_uint32_t_u(l_717.f0)) & (l_911.f4 = 0x6E5E8D4FL)) >= (safe_lshift_func_int16_t_s_s(g_878.f6, 7))), g_2, g_878.f1);
                        l_939.f2 = 0L;
                        l_911.f4 = ((((func_52(g_41, (g_67.f5 ^ (l_939.f7 < (safe_lshift_func_int16_t_s_s(5L, g_292)))), l_944.f2, (l_948 = l_947), (safe_mod_func_int8_t_s_s((((((((+((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((0x877CL <= l_783.f0), 15)), g_2)) & l_920.f7)) > g_875) <= l_940) | l_919.f3) < 0xCBL) > 0xD5F8CC78F95E7215LL) >= g_67.f5), 0x07L))) || l_947.f0) | 0xF02925253F10B72ALL) || g_440) | l_947.f0);
                    }
                    else
                    {
                        int l_956 = (-5L);
                        l_956 = ((safe_unary_minus_func_uint16_t_u(1UL)) && 0x1581BD90L);
                        l_957 = l_944;
                        l_919 = func_20(l_947, g_17.f0, g_67.f6, g_67.f1);
                    }
                    for (g_548 = 0; (g_548 <= 39); g_548 = safe_add_func_uint8_t_u_u(g_548, 7))
                    {
                        return g_878.f4;
                    }
                }
                else
                {
                    l_917 = 0xAA44FC6AL;
                    g_218.f1 = (l_911.f7 = 6L);
                }
            }
            else
            {
                unsigned l_970 = 4294967287UL;
                l_920.f6 = ((l_854.f4 = (safe_add_func_int8_t_s_s(l_910, (l_920.f2 < l_919.f6)))) <= (l_970 = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0xCF4968150D26D9B4LL < ((l_14 & (safe_mod_func_int64_t_s_s(l_920.f4, l_879))) | (g_548 = 1UL))), 3)), (g_2 = (safe_mod_func_uint8_t_u_u(g_212, g_67.f7)))))));
                g_720.f1 = g_875;
            }
            g_218.f1 = (g_720.f1 = (safe_lshift_func_int8_t_s_s((l_973 == (-1L)), 6)));
        }
        else
        {
            int l_981 = 0xA0F2082AL;
            struct S0 l_989 = {15,118,62,3,2,5,-0,-82};
            g_878.f7 = l_920.f6;
            l_989 = func_27((g_2 = (safe_sub_func_uint32_t_u_u((l_976 = g_67.f4), (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_981 || (l_981 | ((safe_mod_func_int32_t_s_s(((g_878.f3 = ((g_67.f7 ^ g_878.f3) != l_783.f0)) | ((((+(!(safe_unary_minus_func_int64_t_s(((((g_548 = (g_212 >= (g_164 < (safe_rshift_func_uint8_t_u_s(g_720.f4, 5))))) <= g_67.f1) >= 0x2CL) || g_720.f0))))) <= 0L) & l_987) != l_988)), l_981)) | l_981))), 10)), l_717.f0))))), l_981, g_67.f2);
            l_716 = ((l_898 = (((+g_67.f5) != (l_920.f2 | (l_783.f7 >= g_878.f6))) ^ g_67.f3)) > ((0x4DL != (safe_lshift_func_uint8_t_u_s((l_783.f4 = l_989.f4), 0))) & (g_78 >= g_67.f2)));
        }
        l_716 = g_67.f3;
    }
    return l_992;
}







static char func_3(union U2 p_4, int p_5, union U2 p_6, struct S0 p_7)
{
    unsigned l_784 = 0x0F215A5AL;
    p_4.f2 = (~g_720.f2);
    if ((((!g_164) | (l_784 & g_67.f7)) != g_572))
    {
        const union U2 l_785 = {255UL};
        short l_791 = 0x2997L;
        if (p_7.f4)
        {
            unsigned long long l_790 = 0x7CC9F53F5CD709D4LL;
            g_218.f1 = ((p_4.f2 && (((~(safe_sub_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(l_785.f0, 0x0615L)) <= l_790) | func_63(g_67, p_7.f7, g_17.f0)), 1L))) >= l_791) < g_17.f0)) == 0L);
        }
        else
        {
            g_67.f6 = p_7.f5;
            g_67.f6 = 1L;
        }
    }
    else
    {
        int l_792 = 0xA06B26CDL;
        l_792 = g_720.f1;
    }
    return p_7.f6;
}







static union U2 func_8(short p_9, short p_10, char p_11, int p_12, union U1 p_13)
{
    struct S0 l_721 = {1638,501,2,3,3,15,-0,-222};
    int l_722 = (-1L);
    int l_727 = 0x2670A8FEL;
    int l_780 = 1L;
    union U2 l_782 = {247UL};
    if (func_63(l_721, func_63(func_27((g_184 || g_720.f0), (l_722 = p_13.f4), (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((g_218.f4 || (l_727 = 0x7CA80F05L)), p_9)), 7)) && g_600) ^ (-1L))), l_721.f7, p_13.f0), g_705))
    {
        short l_728 = 0x4490L;
        l_728 = p_10;
        l_721 = g_67;
    }
    else
    {
        struct S0 l_731 = {515,422,47,0,-4,18,0,76};
        unsigned short l_736 = 65535UL;
        int l_748 = 0x504F54D8L;
        if ((l_731.f4 = (0x60L && (safe_sub_func_int64_t_s_s(((l_721.f4 = g_572) <= func_63(l_731, (g_184 = (g_184 != g_272)), (((safe_rshift_func_uint16_t_u_s(g_67.f6, 15)) || (p_13.f3 = l_731.f3)) <= (safe_lshift_func_int8_t_s_s(g_67.f2, l_736))))), p_9)))))
        {
            unsigned l_747 = 0UL;
            g_341 = ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(9L, func_63(l_721, (l_731.f2 = (249UL != (safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_12, l_747)), (-5L))))), g_261))) <= 4294967295UL), g_720.f4)) || l_748), p_13.f2)) > 0xA859L);
            p_13.f1 = g_67.f3;
            for (g_292 = (-30); (g_292 >= 15); ++g_292)
            {
                if ((0xFFL | ((+p_11) > (g_513 = ((9L || (safe_rshift_func_int8_t_s_u(func_63(g_67, l_731.f3, (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((p_10 < g_272), g_720.f0)) != p_11), l_731.f3)) <= g_720.f2), l_747))), l_731.f6))) ^ (-6L))))))
                {
                    g_41 = (l_747 > l_748);
                    return g_17;
                }
                else
                {
                    return g_17;
                }
            }
        }
        else
        {
            l_721 = l_721;
        }
        l_731 = g_67;
        l_721.f6 = (p_13.f1 = p_11);
    }
    g_67.f4 = ((l_721.f7 != 0x47D624FF17FD9C6CLL) || ((g_218.f4 > (((p_13.f2 <= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_721.f2, (l_721.f7 = g_164))), 13))) == (l_721.f0 < ((safe_lshift_func_int16_t_s_s(l_727, p_11)) || l_721.f5))) ^ g_41)) | g_67.f0));
    if (((7UL > (safe_lshift_func_int16_t_s_u((3UL || ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(g_78, 13)) == 0xE6L), 0)) <= l_721.f1)), l_722))) | g_67.f0))
    {
        char l_777 = (-1L);
        g_67.f7 = l_777;
        for (g_218.f3 = 12; (g_218.f3 <= 48); g_218.f3 = safe_add_func_int16_t_s_s(g_218.f3, 4))
        {
            return g_17;
        }
        l_780 = 1L;
    }
    else
    {
        unsigned short l_781 = 0xF882L;
        l_721 = l_721;
        l_721.f7 = l_781;
    }
    g_67.f6 = 0xA742B330L;
    return l_782;
}







static unsigned char func_15(const union U2 p_16)
{
    unsigned l_18 = 0xFB1AF9D6L;
    int l_19 = (-3L);
    union U1 l_25 = {0x883E731EL};
    struct S0 l_653 = {437,199,-26,2,-1,15,0,91};
    int l_688 = (-10L);
    long long l_702 = 1L;
    if (p_16.f0)
    {
        unsigned short l_26 = 0x35DBL;
        l_19 = (0x11FCL & (l_18 = 5L));
        l_653 = func_20(l_25, g_17.f0, l_26, g_2);
    }
    else
    {
        struct S0 l_674 = {2471,157,25,1,-3,2,0,-200};
        int l_681 = 0xA018DA9FL;
        int l_682 = (-1L);
        unsigned l_683 = 18446744073709551615UL;
        l_674.f4 = (((safe_sub_func_uint32_t_u_u(func_63(func_27(g_272, ((safe_sub_func_int32_t_s_s(func_63(func_27((((safe_rshift_func_int8_t_s_s(0x46L, 4)) ^ ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(8UL, ((((safe_mod_func_uint8_t_u_u((g_572 = (safe_sub_func_uint8_t_u_u(0x47L, (safe_rshift_func_uint8_t_u_u(p_16.f0, 5))))), (safe_lshift_func_int16_t_s_u(((func_63(l_674, (l_682 = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((0x8DL | l_25.f2), (l_681 = (g_218.f4 = ((l_653.f4 = func_63(g_67, l_653.f4, p_16.f0)) > p_16.f0))))), p_16.f0)), l_653.f2))), p_16.f0) | l_653.f2) >= 0x50E6L), 4)))) <= l_674.f0) == l_674.f5) != 0L))), 0xB5CC4D65L)), g_261)) == g_292)) | l_674.f4), l_25.f2, g_2), l_674.f6, p_16.f0), 4294967293UL)) >= p_16.f0), l_25.f4), p_16.f0, l_683), l_683)) & g_17.f0) ^ 0x63L);
        l_653.f2 = g_218.f4;
        l_674.f7 = ((((g_67.f1 <= l_674.f2) != ((safe_rshift_func_int8_t_s_u((((l_18 != (g_67.f7 || ((3L >= (safe_mod_func_uint8_t_u_u(((g_67.f0 = 4294967295UL) <= (4294967290UL != ((1UL || (l_688 & l_653.f5)) && g_67.f4))), g_513))) == 1UL))) != p_16.f0) || l_674.f6), 4)) ^ g_67.f1)) && 0xA4F0L) > p_16.f0);
    }
    for (g_548 = 0; (g_548 <= 26); g_548 = safe_add_func_uint64_t_u_u(g_548, 9))
    {
        char l_691 = 0xEFL;
        int l_696 = 0x42257EF2L;
        l_702 = ((func_63(l_653, l_691, (((0xFCDEL > (((safe_rshift_func_uint16_t_u_u((l_25.f1 = ((safe_add_func_int32_t_s_s((l_696 = g_2), (l_653.f7 | (p_16.f0 >= (g_272 || p_16.f0))))) | (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((l_19 = g_17.f0))), g_164)))), 14)) < l_691) & 65535UL)) ^ g_67.f2) >= 0xF0L)) ^ 253UL) >= p_16.f0);
        l_696 = 0x0A10F34EL;
    }
    l_653.f4 = func_63(l_653, g_212, (safe_sub_func_uint32_t_u_u((g_572 & ((g_705 <= p_16.f0) <= (~(safe_lshift_func_uint16_t_u_s((+(((p_16.f0 && g_67.f4) || (safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((p_16.f0 <= (l_653.f0 && l_688)), p_16.f0)), 6)), 1L)), p_16.f0))) == (-8L))), l_19))))), 1UL)));
    return g_218.f4;
}







static struct S0 func_20(union U1 p_21, unsigned char p_22, long long p_23, unsigned p_24)
{
    unsigned long long l_31 = 0x494FB389FA18394DLL;
    const struct S0 l_40 = {2747,475,-58,0,4,3,0,46};
    int l_430 = 0xBFF7D43EL;
    struct S0 l_649 = {1135,271,-76,0,3,25,0,-202};
    l_649 = func_27((l_430 = (l_31 ^ (safe_sub_func_uint8_t_u_u(p_21.f1, ((((safe_sub_func_int64_t_s_s(g_17.f0, l_31)) || (l_31 > func_38(l_40))) && p_21.f4) <= ((p_22 = g_17.f0) >= p_21.f2)))))), g_17.f0, g_17.f0);
    g_67.f7 = p_21.f2;
    for (g_184 = 21; (g_184 < 13); --g_184)
    {
        struct S0 l_652 = {2390,284,-65,1,1,20,0,-143};
        return l_652;
    }
    return g_67;
}







static struct S0 func_27(char p_28, int p_29, unsigned p_30)
{
    int l_437 = 0x39B0527FL;
    int l_445 = (-7L);
    struct S0 l_465 = {2548,96,18,1,3,4,0,-174};
    int l_481 = (-5L);
    union U1 l_620 = {0L};
    for (p_29 = (-7); (p_29 == (-17)); --p_29)
    {
        int l_433 = (-1L);
        struct S0 l_434 = {388,54,-62,2,-3,8,0,173};
        int l_443 = 0x4C3257E3L;
        unsigned l_599 = 0xC5707918L;
        short l_607 = 0L;
        unsigned l_627 = 0x75E4D0DCL;
    }
    return l_465;
}







static short func_38(const struct S0 p_39)
{
    long long l_62 = 0x41B6ADD7081DC493LL;
    int l_68 = 0x53AF4B50L;
    struct S0 l_383 = {2004,464,-6,0,0,9,0,54};
    short l_391 = 0xCE59L;
    const long long l_415 = 7L;
    int l_424 = 0xC080BE2EL;
    struct S0 l_429 = {2024,155,6,2,2,14,0,-124};
    for (g_41 = 27; (g_41 >= (-5)); g_41 = safe_sub_func_int32_t_s_s(g_41, 4))
    {
        long long l_47 = 3L;
        int l_217 = 0xA3D644B8L;
        int l_396 = 0xBD027C93L;
        int l_398 = (-4L);
        struct S0 l_405 = {716,494,-70,1,4,15,0,148};
        struct S0 l_410 = {2018,298,46,0,-2,6,0,-129};
        l_383 = func_44(l_47, ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((0xA8A1D584D75F053DLL < ((func_52(((l_217 = (((safe_sub_func_int32_t_s_s(8L, ((0x675F713EC2CFCCFFLL == l_47) <= (safe_sub_func_int8_t_s_s(l_62, (func_63(g_67, (l_68 = 7UL), (+(p_39.f1 >= l_62))) > p_39.f4)))))) && g_67.f6) && l_47)) != l_62), l_62, l_62, g_218, p_39.f6) <= p_39.f4) >= 0xDE6BL)), g_2)) & l_62), 1L)) & g_2));
        if (g_67.f2)
        {
            int l_386 = (-7L);
            int l_399 = (-2L);
            l_383.f6 = (safe_add_func_uint32_t_u_u(p_39.f7, (p_39.f5 & l_386)));
            for (g_272 = 0; (g_272 != 51); g_272 = safe_add_func_int32_t_s_s(g_272, 1))
            {
                unsigned l_397 = 18446744073709551608UL;
                l_399 = func_63(p_39, p_39.f3, (safe_sub_func_uint16_t_u_u(func_63((g_67 = l_383), p_39.f1, (l_391 = (l_217 = p_39.f7))), (l_398 = ((~((l_68 = ((~0x3B55L) > g_218.f2)) < (((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((l_396 = l_386), l_386)), g_292)) && l_397) && (-1L)))) <= 0x98DB19007965F1F2LL)))));
            }
            for (g_292 = 0; (g_292 <= 0); g_292 = safe_add_func_int32_t_s_s(g_292, 1))
            {
                for (l_396 = (-2); (l_396 != 6); ++l_396)
                {
                    const struct S0 l_404 = {226,230,-53,2,4,9,-0,-10};
                    g_67.f6 = p_39.f2;
                    g_67 = p_39;
                    l_405 = l_404;
                }
            }
        }
        else
        {
            unsigned short l_414 = 0x2A3FL;
            l_383 = func_44((safe_rshift_func_uint8_t_u_u(l_217, 6)), (l_68 = ((safe_lshift_func_uint16_t_u_s((l_405.f7 == 5UL), (func_63((g_67 = l_410), (safe_rshift_func_uint16_t_u_u(((p_39.f0 != ((safe_unary_minus_func_int16_t_s((l_414 ^ (l_415 <= g_261)))) > (l_383.f7 && l_405.f7))) & l_414), 11)), p_39.f7) <= g_218.f0))) ^ p_39.f4)));
            l_68 = (g_67.f4 = (g_218.f1 && p_39.f6));
            g_67.f6 = g_67.f4;
        }
        if (g_78)
            break;
    }
    l_424 = ((l_383.f1 | p_39.f4) > (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x4C0A7CF9L, (safe_mod_func_int64_t_s_s((g_67.f3 || g_67.f1), ((p_39.f6 < l_424) ^ (safe_lshift_func_uint8_t_u_u((l_383.f2 = 255UL), (((safe_lshift_func_uint16_t_u_u(l_383.f4, l_424)) <= p_39.f7) < 0L)))))))), 1UL)));
    l_429 = (l_383 = g_67);
    return p_39.f1;
}







static struct S0 func_44(unsigned short p_45, unsigned p_46)
{
    long long l_370 = 7L;
    int l_372 = 0x399C6124L;
    for (g_78 = (-20); (g_78 >= 11); g_78 = safe_add_func_int64_t_s_s(g_78, 4))
    {
        unsigned long long l_368 = 2UL;
        int l_381 = (-6L);
        if (p_46)
        {
            short l_349 = 0xC5B0L;
            int l_350 = 0xE79E6F67L;
            struct S0 l_371 = {775,259,-33,2,-2,16,-0,79};
            for (g_218.f1 = 23; (g_218.f1 < (-12)); --g_218.f1)
            {
                unsigned l_352 = 0xC57303B4L;
                int l_355 = 0x4052BC20L;
                struct S0 l_359 = {1391,207,65,1,4,8,-0,119};
                if ((safe_mod_func_uint8_t_u_u(0x61L, l_349)))
                {
                    long long l_351 = 0x1BDB2856A77FA5B0LL;
                    l_351 = (((g_17.f0 != (l_350 = (0x24F19855L | g_218.f0))) || ((!g_143) > 7L)) == (-3L));
                }
                else
                {
                    char l_358 = 0x8BL;
                    l_352 = g_67.f1;
                    for (g_184 = 14; (g_184 <= 35); g_184++)
                    {
                        l_355 = 0xBF3C09BFL;
                        l_350 = g_67.f3;
                        g_67.f7 = (~(safe_mod_func_int64_t_s_s(((l_358 = 0x36C75DEE242F2EF0LL) && 0x24755AEB25E59AA8LL), p_46)));
                    }
                    if (l_355)
                        break;
                }
                l_359 = g_67;
                g_67.f4 = 0xA55D6717L;
                l_359 = g_67;
            }
            if (p_46)
                continue;
            if (((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((g_67.f5 = (safe_mod_func_uint16_t_u_u((((g_67.f4 = (safe_rshift_func_uint16_t_u_s(((((p_45 >= ((((l_368 != ((safe_unary_minus_func_int32_t_s((p_45 <= g_218.f0))) ^ (+p_46))) ^ l_350) >= 0x79C33F0CA0BBB431LL) || l_370)) ^ g_67.f0) && l_368) ^ 0xB40735C3L), p_46))) == g_17.f0) | 0x6E50L), (-7L)))) > 0UL), 0x8833D5459226EBE7LL)), g_212)) <= g_164))
            {
                return l_371;
            }
            else
            {
                g_218.f1 = g_17.f0;
            }
            l_372 = l_368;
        }
        else
        {
            char l_379 = (-6L);
            int l_380 = 0L;
            struct S0 l_382 = {2824,316,17,1,0,12,0,-176};
            g_218.f1 = (l_381 = ((safe_lshift_func_int16_t_s_s(g_67.f0, g_341)) >= ((g_184 = (l_380 = (((l_372 = l_370) | (((p_46 != (p_45 >= l_368)) | (8L == (safe_lshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(0xEBEA80B9L, l_379)) | 0x2C64FA1B566AA79ELL) == 65535UL), p_46)))) | g_17.f0)) & 253UL))) & g_17.f0)));
            l_382 = g_67;
        }
    }
    return g_67;
}







static short func_52(long long p_53, unsigned short p_54, unsigned long long p_55, union U1 p_56, long long p_57)
{
    struct S0 l_219 = {139,265,-42,2,-4,15,-0,-59};
    int l_337 = 0x6EF9082DL;
    if ((((g_218.f1 = func_63(l_219, g_67.f7, l_219.f2)) >= g_2) <= 0x589DL))
    {
        unsigned short l_226 = 1UL;
        p_56.f1 = (p_55 < (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(((g_67.f3 & ((g_218.f1 <= p_55) || p_56.f2)) < 6UL), 6)) || (func_63(l_219, g_78, g_41) == g_17.f0)) >= l_219.f4) ^ l_226), p_57)), l_219.f6)));
        g_67.f7 = g_218.f2;
    }
    else
    {
        long long l_227 = 1L;
        struct S0 l_228 = {1403,481,44,2,3,2,-0,-116};
        struct S0 l_244 = {155,353,-33,0,0,10,-0,-105};
        unsigned l_269 = 0x5CD862EAL;
        if (p_54)
        {
            unsigned short l_248 = 0x7A61L;
            int l_273 = 6L;
            struct S0 l_302 = {1705,416,-61,1,-1,1,-0,-195};
            l_227 = func_63(l_219, g_67.f2, g_218.f0);
            l_228 = (g_67 = l_228);
            for (p_56.f0 = (-19); (p_56.f0 > 10); p_56.f0 = safe_add_func_int8_t_s_s(p_56.f0, 9))
            {
                unsigned l_239 = 0x1B8ECEDBL;
                const struct S0 l_246 = {724,189,48,2,-3,28,-0,127};
                int l_274 = (-1L);
                int l_332 = 0x1CE318A9L;
                for (p_57 = 0; (p_57 != 29); p_57 = safe_add_func_uint8_t_u_u(p_57, 7))
                {
                    char l_243 = 0L;
                    unsigned char l_245 = 0x0BL;
                    struct S0 l_247 = {373,418,84,1,-2,30,-0,-104};
                    for (l_227 = (-12); (l_227 != (-15)); l_227--)
                    {
                        int l_242 = 0xD0B19FE6L;
                        l_245 = (safe_mod_func_int32_t_s_s((l_228.f2 = ((l_243 = (safe_rshift_func_int8_t_s_u(l_239, (safe_lshift_func_uint8_t_u_s(l_242, 0))))) ^ l_219.f3)), func_63(l_244, ((g_67.f3 <= g_67.f5) & g_218.f1), g_218.f2)));
                        l_247 = l_246;
                        g_67.f2 = (-1L);
                    }
                }
                if ((l_248 != 0x5516A132L))
                {
                    unsigned char l_267 = 255UL;
                    int l_268 = 0x84FFCF1DL;
                    l_219.f7 = g_143;
                    for (g_164 = 13; (g_164 == 41); g_164++)
                    {
                        unsigned long long l_266 = 1UL;
                        l_268 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(p_54, 11)), (p_53 != ((g_17.f0 & (l_219.f6 = l_219.f3)) < (safe_lshift_func_uint16_t_u_u((l_267 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(((g_261 = (g_184 = (p_56.f4 && 0x617D44FB6F4A190BLL))) & ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_266, 8)), (0x41D0L || (l_228.f6 >= 0UL)))) < 0x0B24L)), p_56.f1)), 5))), 2))))));
                        l_269 = g_67.f6;
                        l_273 = (safe_rshift_func_int16_t_s_s((l_268 = (g_67.f6 || (g_272 = p_56.f4))), (~p_56.f1)));
                        l_274 = p_56.f0;
                    }
                }
                else
                {
                    unsigned char l_287 = 0xCBL;
                    unsigned l_288 = 0x92D0F30BL;
                    int l_289 = 0xDCA60020L;
                    l_289 = (safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint16_t_u_u(((+((((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_67.f4 || (g_218.f3 = g_67.f5)), (g_212 || ((p_55 < g_67.f1) ^ (((0x10E65150L > ((g_272 ^ g_2) >= (safe_add_func_uint64_t_u_u(0xCC20BC8F22753F27LL, g_67.f3)))) | g_272) == l_244.f2))))), g_67.f3)) || l_287) != 6L) >= g_67.f7)) && l_273), 0x8203L)) == l_288) | p_56.f2) || p_54), (-3L)));
                    for (p_53 = 0; (p_53 >= (-4)); --p_53)
                    {
                        struct S0 l_299 = {462,500,87,0,-0,9,0,199};
                        if (p_56.f2)
                            break;
                        g_292 = (l_228.f2 = p_55);
                        if (g_67.f2)
                            break;
                        l_289 = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0xCA1CL, 5)), func_63(l_299, p_54, (safe_rshift_func_uint8_t_u_s(func_63(l_244, func_63(l_302, (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u(func_63(g_67, p_56.f0, (safe_add_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((p_53 <= ((safe_mod_func_int32_t_s_s((g_212 != p_56.f1), p_56.f4)) >= 5L)), p_54)) < g_292), g_212))), l_302.f4)))), g_17.f0), g_218.f1), p_56.f4))))), g_272));
                    }
                    for (l_269 = 0; (l_269 <= 12); l_269++)
                    {
                        l_302.f4 = (safe_unary_minus_func_uint8_t_u(0x75L));
                        return g_218.f2;
                    }
                    for (p_54 = (-11); (p_54 >= 25); p_54 = safe_add_func_int32_t_s_s(p_54, 7))
                    {
                        g_67 = l_244;
                    }
                }
                l_332 = (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((l_274 = (((safe_unary_minus_func_uint8_t_u(func_63(g_67, (g_184 = (l_244.f3 | (~((65528UL < (-1L)) != p_56.f2)))), (l_302.f4 = ((safe_rshift_func_uint16_t_u_s((g_67.f6 ^ (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_56.f4, (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((-4L), p_55)), p_56.f2)))), g_218.f2))), 14)) & g_67.f6))))) & p_55) == 0xFFL)), g_272)), 4));
            }
            l_244.f4 = (4294967290UL != l_228.f7);
        }
        else
        {
            int l_340 = 6L;
            int l_342 = 0x81FBFCF6L;
            p_56.f1 = (!g_218.f1);
            l_342 = (p_56.f1 = (safe_sub_func_int16_t_s_s(((!0UL) >= (((g_341 = (((safe_lshift_func_uint16_t_u_u(0UL, (func_63((l_219 = g_67), p_56.f4, l_337) || 0x8DA0AA44L))) < (l_340 = (safe_rshift_func_int16_t_s_u((0x838F1172DA7D141FLL ^ (249UL != p_53)), 13)))) <= (-5L))) && 0x57407D1827CA51E5LL) | 0x58444DED637181D8LL)), 9UL)));
            return p_57;
        }
    }
    return p_56.f2;
}







static int func_63(struct S0 p_64, unsigned short p_65, short p_66)
{
    const unsigned l_71 = 0xC9E27847L;
    int l_81 = 0x81FA89BFL;
    int l_98 = 7L;
    unsigned short l_109 = 65535UL;
    char l_171 = 0x6EL;
    struct S0 l_191 = {15,203,58,2,2,20,-0,56};
    l_81 = (g_67.f2 = (safe_add_func_int16_t_s_s(l_71, (safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((-1L), g_78)) == (((g_67.f6 ^ g_67.f7) != l_71) == (safe_sub_func_uint16_t_u_u(p_65, l_71)))), ((p_64.f7 > l_71) <= p_64.f5))), g_67.f0)))));
    if ((safe_rshift_func_int8_t_s_u(g_41, (((g_67.f3 = (safe_mod_func_uint16_t_u_u((l_81 = (safe_add_func_uint8_t_u_u(l_71, (-1L)))), (p_66 = 0xD243L)))) == (((l_71 == 18446744073709551615UL) ^ (safe_add_func_int8_t_s_s(0x8DL, (0xCAC0D748L & g_67.f4)))) >= 0xA7L)) != 246UL))))
    {
        unsigned l_94 = 0xA2E2E988L;
        int l_97 = (-1L);
        int l_99 = 5L;
        long long l_117 = 0x80CDBF83720D768DLL;
        struct S0 l_121 = {1415,381,-56,3,-1,4,-0,-233};
        unsigned l_166 = 0x398AC174L;
        int l_215 = 0xF6C481FFL;
        l_99 = (((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((l_94 | (l_97 = (p_65 ^ (l_71 && (safe_sub_func_uint16_t_u_u(l_94, l_94)))))), 11)), (((0x1F07AA33L <= (g_17.f0 <= l_71)) & ((+l_98) && p_64.f6)) > 6UL))) ^ g_67.f7) & 0x8B88EAD4L);
        if (p_64.f1)
        {
            int l_108 = 0xEF039836L;
            int l_112 = 0x296794CAL;
            struct S0 l_122 = {759,6,65,2,1,28,0,-255};
            int l_165 = 0x87D74882L;
            l_97 = (l_98 & l_99);
            if (((safe_add_func_int32_t_s_s((p_64.f2 < (l_71 <= (g_67.f1 && g_67.f7))), (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((g_78 == (l_109 = (l_108 = g_67.f0))) >= (safe_lshift_func_int16_t_s_u(p_64.f5, 7))) | (0xB2L > (l_71 & p_64.f5))), l_112)), l_71)), p_64.f2)))) ^ g_78))
            {
                int l_115 = 0x90685852L;
                if (((p_64.f3 && 0xD0L) == (safe_rshift_func_uint8_t_u_s(p_65, (l_115 = (g_41 != 1UL))))))
                {
                    const int l_116 = 0xD8DB6A50L;
                    int l_120 = (-5L);
                    l_108 = ((p_64.f2 || l_116) != ((g_67.f4 || ((g_67.f6 = ((~g_78) > l_117)) == (l_120 = (g_78 ^ (safe_add_func_uint16_t_u_u((1L & g_2), ((l_81 = p_66) != g_78))))))) <= g_67.f3));
                    p_64 = l_121;
                    p_64 = l_122;
                    p_64.f6 = (safe_mod_func_uint32_t_u_u(l_98, g_78));
                }
                else
                {
                    return l_108;
                }
            }
            else
            {
                unsigned short l_125 = 1UL;
                g_67.f4 = (-1L);
                l_125 = g_41;
            }
            for (p_66 = 0; (p_66 < (-20)); --p_66)
            {
                char l_128 = 1L;
                int l_133 = 0xC00A24D0L;
                if ((0xD0F64802L & l_128))
                {
                    for (p_65 = 0; (p_65 <= 35); p_65 = safe_add_func_uint8_t_u_u(p_65, 5))
                    {
                        g_67.f2 = (safe_lshift_func_uint8_t_u_s(((l_133 = p_64.f1) != (l_81 = ((p_66 <= (safe_sub_func_int8_t_s_s(((l_97 = ((safe_sub_func_int64_t_s_s((p_64.f0 ^ p_64.f5), (g_78 = ((safe_add_func_int8_t_s_s((g_143 = (safe_add_func_uint8_t_u_u(p_64.f2, (safe_unary_minus_func_uint8_t_u(g_67.f5))))), (l_112 = ((safe_add_func_uint64_t_u_u(g_67.f3, l_81)) == (safe_lshift_func_uint16_t_u_u(l_121.f1, 11)))))) >= g_41)))) > 255UL)) <= l_108), 0x82L))) <= 0xD256L))), 2));
                        p_64.f7 = g_143;
                        g_67.f2 = p_64.f0;
                    }
                    g_67.f7 = (safe_add_func_int32_t_s_s(((g_78 > g_67.f2) || g_17.f0), (0x59CEL >= p_64.f6)));
                    g_67 = p_64;
                    g_67.f2 = (p_64.f6 ^ ((safe_lshift_func_int8_t_s_s(g_67.f4, 2)) <= (safe_rshift_func_int16_t_s_s(p_64.f0, 8))));
                }
                else
                {
                    unsigned l_154 = 0x4299DA23L;
                    long long l_155 = 0x9DF1B6C9F75E263BLL;
                    l_155 = l_154;
                    g_67.f7 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(g_41, (g_164 = (0x96L | g_67.f5)))), p_64.f5)), 2)), 6));
                    p_64 = l_122;
                    l_166 = l_165;
                }
                l_81 = l_122.f1;
                p_64.f4 = (safe_mod_func_int64_t_s_s(((l_171 = (safe_rshift_func_int8_t_s_s(p_64.f1, 1))) < g_67.f5), g_67.f3));
            }
            p_64.f4 = g_67.f2;
        }
        else
        {
            int l_189 = 0xC69D37B5L;
            for (g_164 = 0; (g_164 == 41); g_164 = safe_add_func_uint8_t_u_u(g_164, 8))
            {
                unsigned char l_182 = 0x25L;
                int l_210 = 2L;
                for (l_94 = 0; (l_94 <= 15); l_94 = safe_add_func_int8_t_s_s(l_94, 3))
                {
                    if ((l_81 = 0xCA5F8AAAL))
                    {
                        struct S0 l_176 = {667,278,-76,2,-0,17,-0,-143};
                        g_67 = l_176;
                        if (g_67.f4)
                            break;
                    }
                    else
                    {
                        long long l_177 = 0xAB5507861EF60014LL;
                        g_67.f4 = l_177;
                    }
                    if ((safe_mod_func_uint64_t_u_u(g_67.f1, (l_99 = 0x10A40B4FC89CDC83LL))))
                    {
                        g_67.f4 = (g_67.f6 = (safe_lshift_func_int8_t_s_s(0x9AL, 4)));
                    }
                    else
                    {
                        struct S0 l_183 = {2323,63,17,2,-2,8,-0,70};
                        l_182 = p_64.f0;
                        l_183 = (p_64 = g_67);
                        g_67.f6 = ((g_184 = 0xF129L) && (2L & g_184));
                        p_64.f6 = (safe_add_func_int32_t_s_s(l_109, (-6L)));
                    }
                }
                if (g_67.f4)
                {
                    for (l_171 = (-24); (l_171 == (-28)); l_171 = safe_sub_func_uint16_t_u_u(l_171, 1))
                    {
                        g_67 = g_67;
                        p_64.f2 = p_64.f5;
                        l_189 = g_78;
                    }
                }
                else
                {
                    short l_190 = 0L;
                    int l_207 = (-3L);
                    if (l_190)
                    {
                        const unsigned l_202 = 18446744073709551607UL;
                        l_191 = g_67;
                        g_67.f4 = (((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u(l_191.f1, (safe_add_func_int32_t_s_s((1UL < l_189), ((safe_rshift_func_uint8_t_u_u(((((p_64.f3 | g_67.f5) & ((safe_add_func_uint32_t_u_u((g_67.f0 = (p_64.f1 > (l_202 && g_67.f5))), (g_184 < p_64.f3))) != l_190)) >= l_94) != p_64.f1), l_190)) < p_64.f1))))) || 9L) && p_64.f0) == p_64.f5), 2)) != g_164) || 0x8DC2B037CAC54704LL);
                    }
                    else
                    {
                        int l_211 = (-1L);
                        g_67.f7 = (safe_rshift_func_uint8_t_u_s((((g_17.f0 && ((-5L) || (p_64.f0 = 4294967293UL))) ^ (safe_mod_func_int32_t_s_s(g_67.f5, ((((l_207 = p_64.f7) >= g_2) < g_67.f5) | 0x6A78DC8BCB830702LL)))) != g_67.f0), 5));
                        if (p_64.f0)
                            continue;
                        p_64.f6 = ((((g_67.f6 & ((((l_210 = (safe_lshift_func_uint8_t_u_u((~((-9L) || l_182)), 1))) >= ((p_66 = ((g_67.f1 <= (!p_64.f7)) == p_64.f5)) > p_64.f7)) && (g_41 >= (p_64.f1 <= 0x5D35F0CBL))) & 1UL)) || l_211) < l_182) | 0x1DCC6617L);
                        p_64.f7 = (((p_65 && g_184) <= (p_64.f4 = (p_64.f0 != ((l_207 || (+(l_189 = (+(0x8E1CF2D15554DE58LL & ((0xC4D5L == (g_212 = p_64.f3)) <= (l_189 & (safe_add_func_int16_t_s_s(g_164, 0xB945L))))))))) ^ l_215)))) >= 0x0E00L);
                    }
                }
            }
        }
        l_191 = g_67;
    }
    else
    {
        short l_216 = (-1L);
        return l_216;
    }
    return l_171;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_67.f2, "g_67.f2", print_hash_value);
    transparent_crc(g_67.f3, "g_67.f3", print_hash_value);
    transparent_crc(g_67.f4, "g_67.f4", print_hash_value);
    transparent_crc(g_67.f5, "g_67.f5", print_hash_value);
    transparent_crc(g_67.f6, "g_67.f6", print_hash_value);
    transparent_crc(g_67.f7, "g_67.f7", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_218.f4, "g_218.f4", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_720.f0, "g_720.f0", print_hash_value);
    transparent_crc(g_720.f1, "g_720.f1", print_hash_value);
    transparent_crc(g_720.f2, "g_720.f2", print_hash_value);
    transparent_crc(g_720.f4, "g_720.f4", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_878.f0, "g_878.f0", print_hash_value);
    transparent_crc(g_878.f1, "g_878.f1", print_hash_value);
    transparent_crc(g_878.f2, "g_878.f2", print_hash_value);
    transparent_crc(g_878.f3, "g_878.f3", print_hash_value);
    transparent_crc(g_878.f4, "g_878.f4", print_hash_value);
    transparent_crc(g_878.f5, "g_878.f5", print_hash_value);
    transparent_crc(g_878.f6, "g_878.f6", print_hash_value);
    transparent_crc(g_878.f7, "g_878.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
