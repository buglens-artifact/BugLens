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
   signed f0 : 15;
   char f1;
   signed f2 : 10;
   signed f3 : 6;
};

struct S1 {
   int f0;
   unsigned char f1;
   char f2;
   signed f3 : 24;
   char f4;
   unsigned short f5;
   unsigned long long f6;
   unsigned short f7;
   unsigned f8;
};

struct S2 {
   unsigned f0 : 26;
   unsigned f1;
};

union U3 {
   int f0;
   unsigned f1;
   short f2;
};


static long long g_10 = (-9L);
static unsigned g_97 = 0xAF4489F7L;
static struct S1 g_101 = {0L,253UL,0x04L,3662,2L,8UL,0x960B978F22BB1B77LL,7UL,0x88BF30E8L};
static struct S1 g_166 = {-1L,0x5AL,0L,-3956,6L,0x4BEFL,18446744073709551615UL,0xA7A0L,0x67B5E8C0L};
static struct S2 g_178 = {702,0x9CEFAC0FL};
static int g_209 = 0x4A33C600L;
static union U3 g_246 = {0x4F2782A3L};
static short g_259 = 0xB980L;
static unsigned short g_264 = 0x2063L;
static struct S0 g_297 = {59,-1L,-31,-3};
static unsigned g_325 = 1UL;
static char g_404 = (-1L);
static struct S1 g_669 = {6L,0xAFL,1L,-2155,0x40L,0x2515L,0xF41641D282241783LL,3UL,0x48754495L};
static int g_783 = 0L;
static long long g_854 = 0x651B043CD8C17B8FLL;
static unsigned g_897 = 0xB2F503B9L;
static unsigned long long g_999 = 0UL;
static unsigned long long g_1064 = 9UL;
static union U3 g_1435 = {5L};
static int g_1460 = 0xB2964D42L;



static struct S1 func_1(void);
static unsigned short func_7(int p_8, unsigned short p_9);
static int func_11(struct S0 p_12, struct S1 p_13);
static struct S0 func_14(unsigned short p_15, unsigned p_16, int p_17, long long p_18, struct S0 p_19);
static int func_29(unsigned short p_30);
static unsigned char func_49(union U3 p_50, unsigned long long p_51, unsigned p_52);
static union U3 func_53(struct S0 p_54);
static int func_56(struct S0 p_57, struct S2 p_58, unsigned p_59, unsigned p_60);
static struct S0 func_61(int p_62, short p_63, union U3 p_64);
static unsigned short func_67(unsigned p_68, int p_69);
static struct S1 func_1(void)
{
    unsigned l_6 = 18446744073709551615UL;
    struct S1 l_1670 = {0xA5D7ABBBL,255UL,0xCFL,850,0x9CL,0x36A7L,0x3310549693069137LL,0x9DAAL,0xAB3F33B5L};
    if (((safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((4L & l_6), func_7(l_6, g_10))) && 0x05L) > (g_1460 >= 3UL)), 0x67L)) < l_6))
    {
        return l_1670;
    }
    else
    {
        return g_101;
    }
}







static unsigned short func_7(int p_8, unsigned short p_9)
{
    char l_26 = 3L;
    struct S0 l_667 = {106,-1L,-14,1};
    struct S2 l_1483 = {2993,0x0556C6DAL};
    struct S1 l_1525 = {-1L,255UL,7L,1386,-6L,65535UL,18446744073709551615UL,0xFA19L,0xBCFED530L};
    struct S0 l_1546 = {80,-1L,-25,7};
    struct S0 l_1550 = {-32,0xCDL,0,-2};
    unsigned l_1641 = 0xF9187FE2L;
    struct S0 l_1666 = {164,-4L,11,-4};
    int l_1669 = 1L;
    if (func_11(func_14(((safe_lshift_func_int16_t_s_s(0x4782L, 4)) && (g_10 >= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_26, p_9)), 1)))), g_10, (safe_add_func_uint16_t_u_u(p_9, l_26)), ((g_10 & func_29((safe_add_func_int64_t_s_s((-1L), p_8)))) || g_264), l_667), g_669))
    {
        union U3 l_1487 = {0x5ABF8155L};
        unsigned l_1488 = 0xDB092006L;
        struct S2 l_1491 = {2145,0x7D7C1829L};
        struct S0 l_1496 = {-11,1L,-6,6};
        unsigned long long l_1579 = 0UL;
        unsigned l_1586 = 4294967295UL;
        for (g_259 = 0; (g_259 == 18); g_259 = safe_add_func_uint8_t_u_u(g_259, 1))
        {
            unsigned l_1486 = 0x953196B5L;
            struct S1 l_1492 = {-4L,255UL,0x6CL,1400,0x26L,0x15A4L,1UL,65528UL,1UL};
            struct S0 l_1501 = {-48,0xDDL,-5,-0};
            unsigned char l_1516 = 0xBAL;
            if (((0xCEBBC653L || (((safe_mod_func_int64_t_s_s(g_259, 0xBF0F8A753127C721LL)) > (0x315FA1A0CDD7B0B4LL || func_56(l_667, l_1483, p_9, (safe_mod_func_uint32_t_u_u(l_1486, func_49(l_1487, l_1486, l_1487.f1)))))) >= p_8)) || g_325))
            {
                l_667.f3 = l_1488;
                if (g_1435.f2)
                    continue;
                return g_101.f0;
            }
            else
            {
                struct S0 l_1490 = {-139,0xA4L,15,-3};
                g_1435.f0 = (safe_unary_minus_func_int64_t_s(((func_56(l_1490, l_1491, g_669.f8, g_166.f1) || (g_101.f3 != func_11(l_667, l_1492))) & 0xA4746948L)));
            }
            if (p_8)
            {
                unsigned short l_1493 = 65535UL;
                struct S0 l_1508 = {-114,0x22L,2,-0};
                struct S2 l_1547 = {4592,0UL};
                if (l_1493)
                    break;
                l_1492.f3 &= (safe_mod_func_uint64_t_u_u(func_56(l_1496, g_178, ((l_1493 <= func_11(g_297, g_669)) > (l_1493 & 0x6CCA68DEL)), p_8), 1L));
                for (g_166.f8 = 12; (g_166.f8 > 49); g_166.f8 = safe_add_func_uint64_t_u_u(g_166.f8, 5))
                {
                    unsigned short l_1513 = 0x6758L;
                    struct S1 l_1534 = {0x3DA0176AL,0x0CL,-9L,3400,1L,0x54A2L,3UL,0x1056L,4294967295UL};
                    l_1487.f0 ^= 0xBD75E1D5L;
                    for (g_325 = 0; (g_325 != 52); g_325++)
                    {
                        short l_1502 = (-7L);
                        l_1501 = g_297;
                        return l_1502;
                    }
                    if ((safe_sub_func_int8_t_s_s((func_11(func_14(l_1492.f0, l_1496.f3, ((((((safe_rshift_func_int8_t_s_s(((0xDFCD0412C964F30BLL <= p_8) & p_8), l_1492.f5)) > (safe_unary_minus_func_int8_t_s(l_1493))) & l_1492.f8) != g_297.f1) && 7L) & l_1493), g_246.f1, l_1508), g_166) <= l_667.f3), p_8)))
                    {
                        return g_166.f6;
                    }
                    else
                    {
                        if (p_9)
                            break;
                        l_1516 ^= (((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((p_8 != (((((g_166.f6 > (-10L)) || (p_9 >= l_1513)) != l_1513) != (((l_1483.f1 & (safe_add_func_int32_t_s_s(p_9, 0x496408EFL))) & p_8) & g_246.f0)) >= 0xA4L)), 0x22A86B8FL)), p_9)) != 1UL) || g_166.f6);
                    }
                    if ((func_11(l_1508, g_669) > g_97))
                    {
                        int l_1528 = 0xF72321B3L;
                        struct S0 l_1529 = {129,3L,-1,0};
                        g_166.f3 = (((safe_sub_func_uint8_t_u_u(p_8, (func_11(func_14((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((!(safe_sub_func_int8_t_s_s(((func_11(g_297, l_1525) & ((0x07L != p_8) == ((g_297.f3 == ((safe_lshift_func_uint16_t_u_u(l_1528, 9)) <= p_8)) && p_9))) || p_9), p_8))), p_9)), (-5L))), p_8, l_1496.f1, p_8, l_1529), g_101) <= 255UL))) && 0UL) & 0x432DL);
                        l_1508.f0 |= (p_9 < (g_669.f8 > (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((func_11(l_1501, l_1534) || l_1529.f3), p_9)), 5))));
                        if (l_1529.f3)
                            break;
                        l_1525.f3 = (safe_rshift_func_uint16_t_u_u(l_1491.f0, 13));
                    }
                    else
                    {
                        struct S0 l_1537 = {-8,1L,15,2};
                        unsigned short l_1538 = 65528UL;
                        l_1501 = g_297;
                        l_1496 = l_1537;
                        if (l_1538)
                            break;
                        l_1508.f2 = (safe_mod_func_int32_t_s_s(g_101.f0, (l_1508.f0 | 0xBA978ED6L)));
                    }
                }
                if (g_209)
                {
                    int l_1561 = 0xFDD016D7L;
                    for (g_404 = (-14); (g_404 == 26); g_404++)
                    {
                        union U3 l_1545 = {0x90098F3BL};
                        g_1435.f0 = p_9;
                        l_1550 = func_14(p_9, ((safe_add_func_int8_t_s_s(func_49(l_1545, func_56(l_1546, l_1547, (0x4838L >= g_1064), (safe_sub_func_uint32_t_u_u(0x4B04F637L, g_264))), l_1491.f1), 0x2CL)) ^ 0x4994L), p_9, p_8, l_1546);
                        l_1546.f2 = (+(0UL == (((p_9 <= (l_1525.f1 == (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(2UL, 8)), (+((safe_lshift_func_uint8_t_u_s(l_1525.f0, 5)) < func_56(func_14((!l_1547.f0), l_1545.f1, (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(((g_669.f6 ^ l_1561) & (-8L)), 1L)), g_669.f6)), l_1561, g_297), g_178, l_667.f1, p_8))))))) & p_9) || 0L)));
                        if (g_10)
                            break;
                    }
                }
                else
                {
                    g_101 = g_166;
                }
            }
            else
            {
                struct S1 l_1570 = {-1L,247UL,0x28L,396,-5L,0x0E06L,0x99915FB9DDBA7502LL,3UL,0xE8FD5961L};
                l_1501.f2 = ((safe_sub_func_int16_t_s_s(g_101.f1, 1L)) < (safe_rshift_func_int16_t_s_s(((g_264 >= ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((func_11(l_1546, l_1570) & ((g_101.f7 != p_9) > ((safe_mod_func_int64_t_s_s(p_8, (-9L))) | l_1570.f2))), g_178.f0)), 1UL)) == p_9)) && (-1L)), 13)));
                if (l_1570.f7)
                {
                    l_667.f3 = ((safe_add_func_uint16_t_u_u(l_667.f3, ((safe_rshift_func_int16_t_s_u(func_11(func_14((l_1550.f3 == l_1525.f2), p_9, (p_8 && g_1435.f1), (((safe_lshift_func_uint16_t_u_s((g_325 <= p_8), 4)) && ((-4L) && g_297.f3)) > p_9), l_1501), l_1525), l_1487.f0)) && 0xCC8EA251L))) <= g_669.f4);
                    if (l_1579)
                        break;
                }
                else
                {
                    l_1586 ^= (safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint8_t_u_u(g_669.f1, (g_10 != 1L))) < (g_669.f7 <= ((safe_rshift_func_uint16_t_u_u((l_1487.f2 == (func_49(g_246, g_166.f0, g_669.f5) == 0x54L)), l_1491.f0)) != (-4L)))) >= l_1570.f4) | 5L), 5));
                    for (l_1487.f2 = 12; (l_1487.f2 < (-7)); --l_1487.f2)
                    {
                        struct S1 l_1589 = {7L,0x00L,0xA2L,-3971,0L,65535UL,0xD6CF5AF72D85E9C1LL,65531UL,0xFBDFF96BL};
                        g_669 = l_1589;
                        return g_101.f6;
                    }
                }
                return p_9;
            }
        }
        l_667.f0 |= p_8;
        g_669 = l_1525;
        l_1496.f0 = ((safe_mod_func_uint32_t_u_u(g_669.f8, (((safe_lshift_func_uint8_t_u_u(p_8, 7)) == l_1496.f0) ^ 0x6529L))) || ((func_67(g_669.f7, g_101.f6) ^ ((l_1579 >= (func_11(l_1496, l_1525) || g_783)) | p_9)) < l_1546.f1));
    }
    else
    {
        unsigned l_1603 = 0x83956462L;
        int l_1610 = (-1L);
lbl_1633:
        for (g_1435.f2 = (-25); (g_1435.f2 > (-9)); g_1435.f2++)
        {
            struct S2 l_1596 = {5317,3UL};
            l_1596 = g_178;
            g_297.f3 |= (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((p_8 ^ (((((safe_add_func_uint8_t_u_u((func_67(p_8, (l_1603 == (safe_rshift_func_int16_t_s_u((func_67((safe_rshift_func_uint16_t_u_u(65535UL, ((0x51A60D95L >= 1UL) == (safe_add_func_uint32_t_u_u(((0x9A26L <= (1UL != (0xF966E1807DC9740ELL >= 0x51847E717DA1A3FELL))) || p_9), l_1610))))), l_1596.f1) || g_101.f4), p_8)))) == 65527UL), g_297.f0)) <= 0x5EF0L) | g_404) & g_669.f8) < 0x1E7AB41543A829D0LL)), 0x92L)), g_669.f2));
        }
        g_166.f3 = p_8;
        if (g_166.f8)
            goto lbl_1633;
    }
    if ((safe_lshift_func_int8_t_s_u(0x03L, ((!(l_1525.f8 && func_56(l_667, l_1483, func_29((safe_unary_minus_func_int64_t_s((func_56(func_61((safe_sub_func_int64_t_s_s(g_101.f7, ((0x43237746DA4AF14FLL > ((g_1435.f2 < ((safe_add_func_uint16_t_u_u(p_8, g_259)) || l_1525.f1)) ^ g_97)) >= g_669.f7))), l_1525.f4, g_246), l_1483, l_1641, p_9) && 0x3AL)))), p_9))) | p_8))))
    {
        unsigned long long l_1660 = 0UL;
        int l_1661 = 0xC02D5EDAL;
        l_1661 = (safe_mod_func_int8_t_s_s(((g_178.f0 ^ (g_178.f1 | ((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(p_9, (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(p_8, (safe_mod_func_int32_t_s_s(((~(safe_add_func_uint32_t_u_u((((1L <= (safe_mod_func_int8_t_s_s(func_11(l_1550, l_1525), g_166.f4))) == g_669.f7) | (-3L)), (-3L)))) | g_669.f4), p_8)))) || g_669.f6), 4294967293UL)) <= g_669.f5) < p_8))) | g_166.f3) == p_8), 1UL)) == 1L), 1UL)) != p_9))) <= l_1660), p_9));
    }
    else
    {
        return g_166.f0;
    }
    g_101.f3 = ((safe_add_func_int32_t_s_s(l_1483.f1, (((g_166.f0 > (-4L)) > p_9) || ((safe_rshift_func_uint8_t_u_s(g_101.f5, g_669.f5)) < (((((func_11(l_1666, l_1525) && g_669.f3) | 6L) < g_669.f0) == p_9) <= 0xD1L))))) ^ 0xDF9C0825D6B2A015LL);
    g_166.f3 |= (safe_add_func_uint32_t_u_u(g_101.f5, p_9));
    return l_1669;
}







static int func_11(struct S0 p_12, struct S1 p_13)
{
    long long l_672 = 4L;
    long long l_683 = 0xCB8F614D934DF2BELL;
    int l_787 = 0xD1C30F77L;
    struct S2 l_798 = {2235,0xCF3CC1D8L};
    short l_841 = (-1L);
    long long l_878 = 3L;
    unsigned char l_881 = 6UL;
    unsigned l_888 = 5UL;
    short l_906 = 0x204DL;
    unsigned char l_935 = 0x79L;
    unsigned l_936 = 0x8A98D728L;
    char l_940 = 0L;
    char l_1013 = 0x3BL;
    long long l_1025 = 0L;
    int l_1057 = 0x80794806L;
    unsigned l_1083 = 0UL;
    union U3 l_1084 = {-1L};
    long long l_1161 = (-1L);
    union U3 l_1185 = {0x978F3AD9L};
    int l_1194 = 0x80804673L;
    unsigned long long l_1308 = 0x8E13BBCF65F695CCLL;
    unsigned short l_1312 = 65530UL;
    unsigned short l_1399 = 0x4907L;
    long long l_1414 = 0xE3B83E2D20F711F5LL;
    unsigned l_1454 = 0x21E3F65EL;
    struct S0 l_1465 = {143,1L,-4,-2};
    g_246.f0 = (safe_add_func_int16_t_s_s(p_13.f8, l_672));
    return g_897;
}







static struct S0 func_14(unsigned short p_15, unsigned p_16, int p_17, long long p_18, struct S0 p_19)
{
    unsigned l_668 = 4UL;
    l_668 = g_101.f8;
    return p_19;
}







static int func_29(unsigned short p_30)
{
    struct S0 l_55 = {-9,1L,22,5};
    unsigned long long l_597 = 4UL;
    struct S2 l_649 = {5297,0xE48E3100L};
    if ((g_10 || ((65529UL & p_30) > g_10)))
    {
        unsigned l_596 = 0xB473B25EL;
        for (p_30 = 0; (p_30 == 2); p_30 = safe_add_func_int8_t_s_s(p_30, 8))
        {
            long long l_37 = 0L;
            unsigned l_44 = 0x2CE33A90L;
            l_596 = (safe_add_func_uint8_t_u_u((0xBFL < ((l_37 > ((safe_mod_func_uint64_t_u_u(p_30, (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(l_44, (safe_rshift_func_uint8_t_u_s(0x7BL, 5)))) < (safe_lshift_func_uint8_t_u_s(func_49(func_53(l_55), p_30, ((+(safe_lshift_func_int8_t_s_s(0x39L, 3))) == l_37)), l_55.f0))), p_30)))) < 0xB83717994858D862LL)) != p_30)), g_325));
        }
        return l_55.f3;
    }
    else
    {
        int l_603 = 0L;
        int l_614 = 0xDB71C407L;
        short l_625 = 0x40CAL;
        struct S0 l_637 = {-154,0L,-11,-6};
        int l_647 = (-1L);
        struct S1 l_664 = {0x4C5F00BFL,0x7EL,-1L,-657,0x17L,0x7B28L,0xC69E5CF633356115LL,0x8570L,4294967295UL};
        int l_666 = 0x47DF420BL;
        if ((func_67(p_30, p_30) | (l_55.f1 <= l_597)))
        {
            unsigned l_598 = 4294967295UL;
            if (((g_166.f0 && (g_101.f4 >= (g_10 >= (g_297.f3 && (-5L))))) | ((l_598 != (safe_sub_func_int16_t_s_s(l_598, (safe_sub_func_int32_t_s_s(l_603, (safe_add_func_uint8_t_u_u(l_597, l_55.f1))))))) ^ 0x94L)))
            {
                int l_613 = (-9L);
                struct S1 l_630 = {-9L,8UL,3L,3719,-1L,1UL,0xC1C535FCEEF9BE18LL,0xC4B5L,0xDFE70636L};
                int l_640 = (-8L);
                l_614 = (((safe_unary_minus_func_int64_t_s((g_101.f1 ^ g_166.f2))) | (((((safe_rshift_func_uint8_t_u_s((g_166.f5 ^ 0xE3L), 1)) < g_166.f0) && ((((safe_lshift_func_uint8_t_u_u(l_613, 4)) && (p_30 >= g_101.f4)) != l_55.f0) && 0x84L)) & l_603) | g_10)) & g_404);
                l_614 = ((safe_mod_func_int16_t_s_s(g_178.f1, (-1L))) & (safe_mod_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(((0x3F1B0999A998318DLL | (0x68D94FDDD6B542C4LL ^ 0x59A53CD3446A8339LL)) > l_603), 3)) < (-5L)) | 0xCEEB931A71AE4D88LL), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((g_246.f2 ^ 6L) && l_614), l_55.f1)), l_625)))));
                for (g_101.f2 = 0; (g_101.f2 >= 11); g_101.f2 = safe_add_func_uint32_t_u_u(g_101.f2, 7))
                {
                    for (g_259 = 0; (g_259 >= 11); g_259 = safe_add_func_int16_t_s_s(g_259, 1))
                    {
                        l_630 = g_101;
                        g_101.f3 = ((safe_rshift_func_int16_t_s_s(g_246.f0, p_30)) ^ (0xD1L && (((0x314FL < (((((safe_mod_func_int64_t_s_s(((g_101.f3 != g_325) != 2UL), (safe_sub_func_uint16_t_u_u(g_325, g_297.f1)))) > g_166.f5) >= g_166.f3) & l_630.f8) && p_30)) ^ 6UL) == 0x81BAC70D0425BCCDLL)));
                        l_55.f0 = g_101.f8;
                        l_637 = l_55;
                    }
                    g_209 |= (g_166.f4 & 0UL);
                    if (p_30)
                        break;
                    l_55.f3 = (6L && (safe_rshift_func_uint16_t_u_s(g_101.f8, p_30)));
                }
                if (g_101.f6)
                {
                    l_640 = (1L == 1UL);
                    l_55.f0 ^= ((safe_lshift_func_int8_t_s_s((0x2DL >= (g_166.f4 || (+g_101.f6))), g_325)) < ((l_613 >= l_637.f0) != p_30));
                }
                else
                {
                    int l_648 = 0x509BC937L;
                    g_246.f0 |= (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0x834B85FAL, p_30)), 10));
                    l_648 = l_647;
                }
            }
            else
            {
                l_55.f0 = func_56(g_297, l_649, l_55.f2, (safe_rshift_func_uint8_t_u_s(1UL, 5)));
            }
        }
        else
        {
            unsigned l_663 = 0x63AB2160L;
            int l_665 = 0xEC950A6CL;
            for (g_101.f2 = 0; (g_101.f2 <= 22); g_101.f2 = safe_add_func_int16_t_s_s(g_101.f2, 4))
            {
                int l_656 = 0x548DE643L;
                g_209 = ((-1L) >= (safe_add_func_int32_t_s_s(l_656, (safe_lshift_func_int8_t_s_s((4294967295UL ^ (g_10 != (safe_mod_func_uint32_t_u_u((l_55.f3 >= (g_101.f5 < (p_30 & ((l_637.f0 && ((l_663 == p_30) > l_614)) <= (-8L))))), l_663)))), 0)))));
            }
            g_101 = l_664;
            l_665 = (~0L);
            l_665 = l_665;
        }
        l_666 = 1L;
    }
    return l_55.f3;
}







static unsigned char func_49(union U3 p_50, unsigned long long p_51, unsigned p_52)
{
    struct S0 l_563 = {-66,1L,-28,-2};
    struct S2 l_564 = {2066,0x14B7B7BFL};
    struct S2 l_565 = {6783,0x094D9E0DL};
    p_50.f0 = ((p_50.f2 > (safe_add_func_int64_t_s_s(((func_56(l_563, l_564, (!(l_564.f1 < p_50.f0)), g_101.f8) == l_563.f1) && l_563.f3), 1UL))) | 0L);
    l_564 = l_565;
    for (g_246.f1 = 20; (g_246.f1 <= 8); g_246.f1 = safe_sub_func_uint8_t_u_u(g_246.f1, 8))
    {
        unsigned short l_573 = 0UL;
        int l_594 = 0x55DB0BA4L;
        struct S2 l_595 = {7730,1UL};
        for (g_101.f7 = (-5); (g_101.f7 > 19); g_101.f7 = safe_add_func_int64_t_s_s(g_101.f7, 5))
        {
            unsigned char l_570 = 0xE5L;
            char l_580 = 0xB8L;
            long long l_585 = 0x3E9E45EFB86D6406LL;
            p_50.f0 &= (-1L);
            g_209 &= (!(g_297.f1 >= l_570));
            l_573 &= ((safe_sub_func_int64_t_s_s(g_101.f5, g_166.f3)) > p_50.f2);
            l_594 ^= (safe_mod_func_uint64_t_u_u(((g_166.f1 > (safe_sub_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(l_580, (safe_add_func_int16_t_s_s(0xF651L, (safe_lshift_func_int16_t_s_u(l_585, p_51)))))) || (g_178.f0 <= (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(l_573, g_264)) && (safe_sub_func_int16_t_s_s((g_246.f2 <= p_50.f2), (-3L)))), g_246.f0)), l_573)))), 0xC1CED1034349396FLL))) & l_573), p_50.f1));
        }
        g_166.f3 = p_52;
        g_178 = l_595;
    }
    return p_51;
}







static union U3 func_53(struct S0 p_54)
{
    int l_70 = 1L;
    int l_73 = 0x7D512630L;
    struct S2 l_261 = {3010,0xE5552EE5L};
    union U3 l_558 = {0L};
    l_70 = ((func_56(func_61((safe_rshift_func_uint16_t_u_s(func_67(l_70, ((g_10 == (safe_lshift_func_uint8_t_u_u(l_73, 7))) & l_73)), 13)), ((0x10D91E9BL == (0x6F42569A2F9D2B5ELL > (g_10 >= (safe_unary_minus_func_int8_t_s(p_54.f3))))) == 0UL), g_246), l_261, l_261.f1, g_10) && l_73) || (-7L));
    return l_558;
}







static int func_56(struct S0 p_57, struct S2 p_58, unsigned p_59, unsigned p_60)
{
    int l_281 = 0xF54D604EL;
    int l_282 = 1L;
    unsigned short l_290 = 0UL;
    long long l_342 = 7L;
    unsigned char l_379 = 0x6EL;
    struct S0 l_431 = {153,0xD7L,25,2};
    unsigned long long l_550 = 18446744073709551615UL;
    for (g_166.f5 = 0; (g_166.f5 > 5); ++g_166.f5)
    {
        unsigned char l_265 = 0x80L;
        p_57.f3 &= (g_264 >= l_265);
    }
    for (g_166.f7 = 0; (g_166.f7 != 52); g_166.f7++)
    {
        int l_278 = 0x596ABB34L;
        l_282 &= (safe_add_func_int16_t_s_s(g_166.f3, (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((g_97 && g_246.f1) > (safe_rshift_func_int16_t_s_u(((l_278 == p_60) || (-10L)), 7))), g_101.f3)), (safe_rshift_func_uint16_t_u_s(l_281, 14)))) >= 0xB0F8BC7FL), l_281))));
    }
    if (p_57.f2)
    {
        unsigned long long l_319 = 2UL;
        int l_326 = (-1L);
        p_57.f2 |= p_57.f3;
        if (func_67(g_97, ((((p_58.f0 >= g_166.f3) | (safe_add_func_uint32_t_u_u(l_282, l_281))) <= l_282) > p_57.f1)))
        {
            int l_285 = 1L;
            if (l_285)
            {
                int l_291 = 0x7C1476EEL;
                for (g_166.f4 = (-22); (g_166.f4 == (-22)); ++g_166.f4)
                {
                    long long l_296 = 0x2063B94F89951ACALL;
                    p_57.f0 = p_57.f1;
                    l_296 = (g_209 != (safe_mod_func_uint64_t_u_u(((p_59 == (p_60 <= l_290)) > l_291), ((p_57.f2 == (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((l_285 || p_57.f1) <= ((0x20L <= 0L) && g_264)), g_101.f8)) > l_291) <= 0xA9F2B07FL), 10))) ^ (-1L)))));
                    if (p_59)
                    {
                        if (g_246.f1)
                            break;
                    }
                    else
                    {
                        l_281 = p_59;
                        if (p_59)
                            break;
                        g_297 = p_57;
                        l_291 = (safe_sub_func_int16_t_s_s((p_57.f3 != (safe_mod_func_uint16_t_u_u((1UL <= g_178.f0), (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s((g_297.f1 | l_291), (p_57.f3 == 4294967295UL))) <= (safe_sub_func_uint64_t_u_u(0UL, g_178.f0))), 4)), 13)) && l_291) && p_57.f0)))), l_290));
                    }
                    return g_297.f0;
                }
            }
            else
            {
                g_297.f2 = (safe_sub_func_int32_t_s_s((+l_285), p_59));
            }
            return p_59;
        }
        else
        {
            unsigned l_314 = 4294967291UL;
            int l_327 = 7L;
            p_57.f0 = func_67((func_67(func_67(p_58.f1, g_101.f3), g_297.f0) >= p_59), g_297.f0);
            for (g_166.f6 = 0; (g_166.f6 > 58); g_166.f6++)
            {
                short l_340 = 0xF6C1L;
                g_209 = l_314;
                if (g_297.f1)
                {
                    if (g_101.f1)
                    {
                        char l_318 = 0xD6L;
                        g_101.f3 = g_101.f6;
                        g_246.f0 &= (safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint32_t_u_u(l_318, l_319)) ^ 8L)));
                    }
                    else
                    {
                        int l_320 = (-8L);
                        g_209 = (g_101.f3 >= ((p_58.f0 && (0x5ED2078140AC22FBLL < p_57.f3)) && 7L));
                        if (l_320)
                            break;
                        l_326 |= (((safe_lshift_func_int8_t_s_s(((p_57.f0 > (safe_sub_func_int64_t_s_s(g_101.f6, 0xF90630243307E187LL))) || g_325), 3)) && (p_57.f1 ^ p_57.f2)) == g_97);
                        l_327 = (!(l_281 | g_101.f7));
                    }
                }
                else
                {
                    for (g_166.f0 = (-21); (g_166.f0 != (-10)); g_166.f0++)
                    {
                        char l_341 = 5L;
                        l_341 = (((((p_57.f2 <= ((safe_rshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(0x0CL, (((safe_add_func_int8_t_s_s(g_209, (p_58.f0 == (0x676B62B178CEC19DLL & 1L)))) | (((safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((p_57.f0 || (p_60 != (p_57.f3 ^ 251UL))) != g_166.f3), g_166.f8)), 18446744073709551611UL)) >= 0x36L) == l_340)) & g_246.f2))) != 0UL) ^ g_166.f0), 2)) != l_319)) >= p_58.f1) >= 0x275F8133E97BD179LL) < 0L) || 0x66A6F619964F89DELL);
                    }
                    return l_342;
                }
                for (g_166.f0 = 3; (g_166.f0 >= 14); g_166.f0 = safe_add_func_int32_t_s_s(g_166.f0, 5))
                {
                    short l_351 = (-1L);
                    for (g_246.f0 = 29; (g_246.f0 < 12); --g_246.f0)
                    {
                        char l_360 = 8L;
                        g_297 = p_57;
                        p_57.f0 |= ((g_97 != (safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((l_351 != (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((p_58.f0 == (safe_lshift_func_int8_t_s_u(l_340, 5))) & p_57.f3) == (p_59 <= p_60)) != (g_166.f1 > (((safe_add_func_uint64_t_u_u((l_360 >= l_319), l_360)) && l_351) & g_10))), l_340)), l_340))), l_326)), 6))) && g_259);
                    }
                }
                p_57.f0 = 0xCFE27E4DL;
            }
            p_57.f2 = ((safe_rshift_func_uint16_t_u_s(p_57.f3, l_326)) >= p_59);
        }
        g_166.f3 |= p_57.f0;
    }
    else
    {
        unsigned l_365 = 0x78DFC918L;
        struct S1 l_366 = {0xAC41647DL,0x6EL,-4L,-3411,0x0BL,65535UL,0x2909C2C84B44F7EELL,0xC5E6L,0x180A5AA0L};
        long long l_475 = 0x066377F5CB66BE14LL;
        unsigned short l_526 = 0UL;
        unsigned l_527 = 0UL;
        for (g_264 = 3; (g_264 != 21); ++g_264)
        {
            p_57.f2 = g_297.f0;
        }
        if (l_365)
        {
            g_101 = l_366;
        }
        else
        {
            short l_382 = 0x0AFBL;
            int l_383 = 5L;
            struct S1 l_391 = {0x927A8550L,0x86L,-4L,3193,0x86L,4UL,0UL,0x833BL,0x14EBBF1EL};
            int l_408 = 0L;
            if (((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((p_57.f1 && (safe_mod_func_int16_t_s_s((+((g_10 <= (safe_add_func_uint64_t_u_u(((p_57.f2 < (-2L)) && (l_366.f5 <= p_59)), ((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((0xF67CL < l_379), (((safe_add_func_uint32_t_u_u(((-1L) < l_382), l_366.f2)) > 0x6AF7L) && g_166.f3))), g_101.f3)) | 65535UL)))) == l_379)), 1L))), (-1L))), l_379)) & l_281))
            {
                p_57.f2 |= (p_57.f3 && 65528UL);
            }
            else
            {
                unsigned l_386 = 0xDD263AD6L;
                l_383 = 0x6CA871F6L;
                l_282 = func_67(((l_366.f4 > (safe_add_func_int32_t_s_s((((((((((((-4L) && (g_101.f6 & (p_57.f2 & g_166.f7))) | 0x56L) && (!(l_386 <= (safe_mod_func_uint32_t_u_u(l_382, p_58.f1))))) | p_57.f0) >= g_166.f2) >= 3UL) >= g_325) != p_59) || p_58.f0) & p_60), (-7L)))) | 1UL), l_386);
            }
            l_282 = 1L;
            for (g_166.f2 = 9; (g_166.f2 > (-10)); --g_166.f2)
            {
                int l_392 = 8L;
                g_101 = l_391;
                l_392 = 0x88A9712EL;
            }
            if (p_58.f1)
            {
                unsigned l_403 = 0x1AAE636FL;
                short l_407 = 0L;
                for (l_391.f5 = 6; (l_391.f5 > 57); l_391.f5 = safe_add_func_uint32_t_u_u(l_391.f5, 4))
                {
                    g_297.f2 ^= func_67(p_58.f1, ((+(g_101.f4 > ((p_57.f2 ^ (0L > (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0xAD82L, l_391.f8)), 2)) > (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(0x0D26L, (g_166.f1 ^ ((l_403 ^ p_59) | (-1L))))) ^ 0L), 9UL))) > g_404))) ^ g_325))) & g_10));
                    g_101.f3 &= g_101.f4;
                }
                p_57.f2 = func_67(((p_57.f3 < ((0L > p_58.f0) > (l_366.f8 <= func_67(func_67(l_290, g_101.f2), ((safe_sub_func_uint8_t_u_u(l_407, l_408)) ^ 0x872FF5E7564B5113LL))))) & 2L), g_246.f2);
                g_297.f3 = l_282;
            }
            else
            {
                int l_411 = 0xB2CDAFD6L;
                p_57.f2 = ((g_246.f2 > (safe_add_func_int8_t_s_s(3L, g_166.f7))) && l_411);
            }
        }
        if (p_60)
        {
            unsigned l_412 = 0xEE22F16AL;
            int l_413 = (-5L);
            struct S1 l_488 = {9L,0x96L,0L,-643,0xAAL,0UL,0UL,0xE560L,4294967289UL};
            char l_520 = 0xCFL;
            unsigned l_521 = 0x02F0E0C2L;
            l_413 = (l_412 < l_281);
            if (g_101.f6)
            {
                int l_426 = 0x61F9DEB3L;
                for (l_282 = (-13); (l_282 != (-26)); --l_282)
                {
                    if (l_290)
                        break;
                    return l_413;
                }
                for (g_101.f2 = 0; (g_101.f2 != (-19)); g_101.f2 = safe_sub_func_uint8_t_u_u(g_101.f2, 9))
                {
                    if (l_282)
                    {
                        l_281 &= (-6L);
                    }
                    else
                    {
                        p_57.f2 = 0x422E4F08L;
                        return p_58.f1;
                    }
                    l_413 = (l_412 == (safe_mod_func_uint32_t_u_u((p_58.f0 < (safe_lshift_func_uint8_t_u_s(l_366.f6, ((((((((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((-1L) >= l_426), p_57.f0)) != (0xF8L || (0UL ^ (safe_lshift_func_uint8_t_u_u(g_297.f0, p_57.f2))))), 1)) < 0UL) >= 4294967286UL) < 0xB7AB3DDA44F4CE64LL) == l_366.f1) & 65533UL) != g_166.f2) != g_166.f3)))), p_57.f0)));
                    if (p_60)
                        break;
                    g_297.f3 = (safe_lshift_func_uint16_t_u_s(g_97, 11));
                }
                l_431 = g_297;
                for (g_166.f1 = 25; (g_166.f1 == 45); g_166.f1 = safe_add_func_uint8_t_u_u(g_166.f1, 7))
                {
                    for (l_366.f2 = 0; (l_366.f2 == (-29)); l_366.f2 = safe_sub_func_int64_t_s_s(l_366.f2, 8))
                    {
                        unsigned l_446 = 0UL;
                        g_297.f2 &= (safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((0xB150L && (safe_lshift_func_uint8_t_u_s(((l_366.f6 <= ((p_58.f1 & ((((g_259 < ((safe_lshift_func_int16_t_s_s(g_101.f7, 4)) & l_281)) != (((safe_lshift_func_int16_t_s_s(((p_58.f1 & ((l_446 | ((0x55B21C62L && g_259) <= g_101.f2)) && 0xC665L)) && p_58.f0), p_59)) ^ p_60) == l_366.f8)) | (-1L)) > g_166.f6)) & p_57.f0)) || p_57.f1), 2))) & 0x403EL), p_57.f1)) | 0x1286L), 15));
                        g_209 = l_446;
                        g_246.f0 = l_366.f0;
                    }
                }
            }
            else
            {
                int l_457 = 0x66E0E221L;
                unsigned char l_487 = 0x68L;
                int l_500 = (-1L);
                p_57.f2 = (safe_rshift_func_uint8_t_u_u((~8UL), 3));
                if (l_366.f1)
                {
                    long long l_464 = 0xB32F9698077F8ABCLL;
                    p_57.f2 = ((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s((+func_67(g_166.f6, (safe_mod_func_uint32_t_u_u(g_166.f0, l_457)))), 1UL)), ((~(safe_lshift_func_int8_t_s_u((1L < g_404), 1))) != (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(4L, l_464)), 3))))), (-9L))) <= l_457);
                    if ((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(func_67(g_101.f5, ((((safe_rshift_func_uint8_t_u_u((g_101.f5 ^ 0xB684L), (safe_add_func_uint32_t_u_u(g_166.f5, (g_166.f1 || (l_464 < (safe_rshift_func_uint8_t_u_s((g_246.f1 | ((l_464 && (l_464 & l_475)) | 0xB143DAB5C596C7A6LL)), l_457)))))))) ^ p_59) > l_290) > p_57.f2)), l_431.f1)), g_246.f0)))
                    {
                        unsigned l_484 = 0x02319C59L;
                        l_487 ^= (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(l_464, ((safe_add_func_int16_t_s_s(((4294967295UL != (safe_add_func_int32_t_s_s((-5L), func_67(l_464, ((l_484 == 7UL) && ((g_259 < 0xD6L) || func_67((safe_lshift_func_uint8_t_u_s(l_412, p_57.f3)), g_166.f5))))))) & g_246.f1), 0x1AC0L)) >= p_57.f2))) <= l_457), p_57.f3));
                        p_57.f2 ^= 0x8C7A3BD8L;
                        p_57 = p_57;
                    }
                    else
                    {
                        short l_489 = (-10L);
                        l_488 = g_166;
                        l_500 &= ((l_489 >= (safe_mod_func_int64_t_s_s(g_101.f4, p_58.f1))) && ((func_67(((safe_mod_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(0L, (safe_mod_func_uint32_t_u_u((0x6E6AL & ((safe_lshift_func_uint8_t_u_u(p_58.f1, 2)) >= g_166.f4)), g_297.f1)))) == g_264), l_365)) < g_166.f7), l_457) && g_297.f3) | g_10));
                    }
                }
                else
                {
                    unsigned long long l_501 = 0x018B13D0D66266C1LL;
                    g_166.f3 = ((p_57.f2 >= (0L == l_488.f7)) & l_501);
                    g_246.f0 = (((safe_rshift_func_int16_t_s_s(0L, ((safe_mod_func_uint64_t_u_u((p_58.f0 & (0x0FL > ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((p_58.f1 <= (safe_rshift_func_int16_t_s_s(l_500, 8))) | (((safe_rshift_func_int16_t_s_u(p_58.f1, (safe_add_func_uint16_t_u_u(l_500, (p_58.f0 < (safe_add_func_uint32_t_u_u(func_67((((((4294967293UL == g_246.f1) || 248UL) & l_431.f2) || l_431.f3) == g_101.f4), l_475), l_457))))))) != (-1L)) || l_501)), l_520)), (-5L))), g_404)) | g_264))), p_60)) >= 0L))) || p_57.f1) || g_264);
                }
                l_521 = l_431.f3;
                l_488.f3 = (safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(l_526, 0x735528518AC3DCB0LL)), ((!3L) > g_101.f8)));
            }
            l_366.f3 ^= (g_209 & (l_527 > 0x54L));
        }
        else
        {
            unsigned char l_533 = 255UL;
            for (l_366.f0 = 16; (l_366.f0 > 23); ++l_366.f0)
            {
                short l_540 = (-4L);
                for (g_101.f5 = 28; (g_101.f5 <= 6); --g_101.f5)
                {
                    unsigned long long l_532 = 0x2EA7FC6860DCBF25LL;
                    return l_532;
                }
                g_297 = g_297;
                g_246.f0 = (p_58.f1 < (7L || func_67(l_533, ((((1L <= l_366.f3) <= (((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((l_533 || 0x42L) != ((4L && (safe_mod_func_int8_t_s_s(p_57.f0, p_59))) >= g_246.f1)), p_58.f0)), 0x1774462EL)) && g_166.f6) >= l_540)) < g_166.f1) != 0xF9L))));
            }
            for (g_101.f8 = 23; (g_101.f8 != 46); g_101.f8++)
            {
                struct S0 l_543 = {-123,0xE6L,-2,1};
                if (p_58.f1)
                    break;
                if ((0xFCL && (((+l_431.f3) < g_101.f0) >= l_533)))
                {
                    unsigned l_547 = 0xA911D0B9L;
                    g_297 = l_543;
                    g_297.f3 |= p_58.f0;
                    l_550 = ((safe_unary_minus_func_int16_t_s((((safe_sub_func_int8_t_s_s((p_58.f0 || l_366.f8), (g_97 && p_57.f2))) | (0x54C26916L || (((l_533 | 18446744073709551615UL) == (((l_547 != (safe_add_func_uint8_t_u_u(l_431.f2, l_281))) <= 4UL) ^ g_264)) ^ g_166.f7))) <= g_178.f1))) == 0xE649C3E860EC221ALL);
                }
                else
                {
                    g_209 ^= (((0L != ((safe_add_func_int8_t_s_s(((g_166.f2 >= p_57.f0) > (((l_550 >= (g_264 && (safe_mod_func_int32_t_s_s(g_166.f2, l_431.f1)))) || p_58.f0) < (safe_add_func_int32_t_s_s(p_57.f2, g_246.f1)))), 0xD8L)) >= g_259)) & g_101.f3) == l_366.f5);
                    if (p_58.f1)
                        break;
                }
            }
            if ((((((p_57.f1 || (safe_unary_minus_func_int16_t_s(l_533))) < (p_58.f0 >= (p_57.f3 || g_101.f3))) == 255UL) != 18446744073709551615UL) ^ (l_342 == g_101.f4)))
            {
                l_281 = (g_166.f0 & p_57.f0);
            }
            else
            {
                return g_404;
            }
        }
        p_57.f0 = g_178.f1;
    }
    return l_431.f2;
}







static struct S0 func_61(int p_62, short p_63, union U3 p_64)
{
    int l_257 = 0x3D4A470AL;
    struct S0 l_260 = {51,0xAFL,15,1};
    for (g_246.f0 = 8; (g_246.f0 != 6); g_246.f0 = safe_sub_func_uint16_t_u_u(g_246.f0, 9))
    {
        unsigned l_258 = 18446744073709551615UL;
        g_259 |= (safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_67(l_257, l_258), 2)), p_63)) & 18446744073709551615UL) & (l_257 ^ g_246.f0)) & ((((p_64.f1 <= l_258) <= 2UL) > g_10) < 0xCEL)), 4));
    }
    l_260 = l_260;
    return l_260;
}







static unsigned short func_67(unsigned p_68, int p_69)
{
    unsigned short l_76 = 65531UL;
    int l_83 = 1L;
    unsigned short l_99 = 65532UL;
    unsigned short l_118 = 1UL;
    unsigned l_125 = 0x2D80D5DAL;
    struct S2 l_163 = {5711,1UL};
    long long l_180 = 0xF83D26D1B1C2D190LL;
    unsigned l_226 = 0xEB13F110L;
    short l_242 = 0x2788L;
    if ((((safe_rshift_func_uint8_t_u_s(l_76, 4)) >= g_10) >= (p_69 | (p_69 == (safe_mod_func_int16_t_s_s((p_68 == ((p_68 ^ (g_10 >= l_76)) > ((!((safe_sub_func_uint8_t_u_u(l_76, g_10)) || 0xB5DBL)) || 0x3D8A5C08L))), g_10))))))
    {
        unsigned l_84 = 0UL;
        int l_92 = 7L;
        if (l_76)
        {
            l_83 &= 7L;
            return p_68;
        }
        else
        {
            unsigned short l_87 = 0xCBDCL;
            int l_98 = 0x38A8812EL;
            struct S1 l_100 = {0xF13771C7L,7UL,-1L,-3755,-1L,0x1002L,1UL,1UL,0xE1B6EB86L};
            l_92 |= ((l_84 && 0x3B3BE7B8BBD03C5CLL) >= ((p_69 <= (((p_69 ^ (p_68 < ((l_84 > (0x2D42L || l_87)) && (((safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(l_87, 0L)) != 18446744073709551606UL) >= g_10), 4)) == g_10) | g_10)))) <= l_84) > g_10)) || l_83));
            for (l_84 = 17; (l_84 <= 35); ++l_84)
            {
                unsigned char l_117 = 246UL;
                unsigned long long l_161 = 0x66CB3554E5FB264BLL;
                if (g_10)
                {
                    short l_116 = 0x5942L;
                    for (p_69 = 3; (p_69 > 29); ++p_69)
                    {
                        g_97 &= 0x2485FC01L;
                        l_98 = p_68;
                    }
                    if (l_99)
                    {
                        g_101 = l_100;
                    }
                    else
                    {
                        unsigned short l_138 = 0x18C7L;
                        g_101.f3 ^= g_101.f2;
                        g_101.f3 ^= (((p_68 && (safe_sub_func_uint16_t_u_u(g_97, p_68))) & ((safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((!(safe_rshift_func_int16_t_s_s((l_100.f4 > (safe_add_func_int16_t_s_s((((0xFC9CL | g_10) != ((((safe_rshift_func_uint8_t_u_u(((g_10 >= l_84) ^ (safe_mod_func_int8_t_s_s((~0L), p_69))), g_101.f1)) == l_98) == l_76) & p_68)) < l_116), 0UL))), 5))), 7)) == 0x7D4A0575L) > l_117), l_118)) == (-2L))) == 0L);
                        g_101.f3 ^= ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(l_125, 1)) && ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_68, l_100.f0)), (safe_mod_func_int32_t_s_s(g_101.f4, ((safe_sub_func_uint8_t_u_u((g_101.f4 | l_125), (g_101.f6 && (safe_add_func_uint16_t_u_u(g_101.f6, ((safe_rshift_func_int16_t_s_u(((g_101.f8 <= g_97) & g_101.f4), 5)) < 0x9BC8L)))))) && 3L))))) >= l_76)) >= 1UL), g_97)), 3)) <= l_138);
                    }
                    l_83 = (safe_lshift_func_uint16_t_u_s(l_92, 12));
                    g_101.f3 |= l_117;
                }
                else
                {
                    g_101.f3 &= (safe_unary_minus_func_uint64_t_u((safe_mod_func_uint32_t_u_u((p_69 >= 65531UL), 4294967286UL))));
                    if ((safe_lshift_func_uint16_t_u_u(l_100.f7, 5)))
                    {
                        char l_150 = 0xA0L;
                        l_100.f3 |= (safe_sub_func_uint32_t_u_u(g_101.f8, (l_76 | (safe_add_func_int16_t_s_s(g_101.f3, g_101.f7)))));
                        l_83 = l_150;
                        g_101.f3 ^= g_101.f0;
                        if (l_117)
                            break;
                    }
                    else
                    {
                        short l_160 = 1L;
                        l_161 |= ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(g_101.f2, l_92)) & p_68), g_97)) | ((safe_unary_minus_func_int16_t_s((((!(l_118 ^ (p_69 <= g_101.f4))) ^ l_160) || (p_69 | 18446744073709551606UL)))) < 0x3EE2624CL)) >= g_101.f7), 5)) ^ g_101.f1);
                    }
                }
            }
        }
        return p_69;
    }
    else
    {
        struct S2 l_162 = {7924,2UL};
        l_163 = l_162;
        for (g_101.f6 = 0; (g_101.f6 <= 2); g_101.f6 = safe_add_func_uint16_t_u_u(g_101.f6, 7))
        {
            int l_167 = 4L;
            g_166 = g_101;
            if (p_68)
                continue;
            l_167 = g_101.f3;
            g_166.f3 ^= (safe_lshift_func_uint16_t_u_u(p_68, 6));
        }
    }
    g_166.f3 = g_101.f0;
    for (g_166.f5 = 3; (g_166.f5 < 29); g_166.f5 = safe_add_func_int64_t_s_s(g_166.f5, 5))
    {
        struct S0 l_172 = {19,-1L,10,-2};
        struct S1 l_182 = {0x10FA4C86L,0x7FL,-2L,-2697,0x76L,0xA925L,0x8784709BD9AF42D7LL,0x2229L,0xE17D4CA5L};
        struct S2 l_227 = {2981,8UL};
        unsigned long long l_237 = 1UL;
        l_172 = l_172;
        l_83 |= p_68;
        if (g_101.f1)
        {
            int l_173 = 0x4A4583EDL;
            struct S1 l_183 = {-4L,3UL,0x90L,-1641,0x4FL,1UL,0x1C32F403320DE5E2LL,0xDD8FL,0UL};
            if (l_173)
            {
                g_166.f3 = g_97;
                for (g_101.f6 = 0; (g_101.f6 > 9); g_101.f6 = safe_add_func_uint64_t_u_u(g_101.f6, 8))
                {
                    l_173 = p_69;
                    for (g_101.f0 = 0; (g_101.f0 >= 16); g_101.f0 = safe_add_func_uint32_t_u_u(g_101.f0, 4))
                    {
                        l_163 = g_178;
                    }
                }
            }
            else
            {
                unsigned l_179 = 1UL;
                g_101.f3 = (l_179 && l_180);
            }
            if (l_173)
            {
                unsigned l_181 = 0x6787CEB1L;
                struct S1 l_200 = {-1L,1UL,1L,3865,0L,0x45D7L,0x8CCBAA57302E08C7LL,0UL,0x3D2B0BF1L};
                if (l_181)
                    break;
                l_183 = l_182;
                l_172.f0 ^= (g_166.f3 != ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_166.f6, 0)), ((safe_mod_func_uint32_t_u_u(l_183.f2, (safe_sub_func_int16_t_s_s(((((0x7F79L >= l_181) ^ l_181) != (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(0L, (((safe_add_func_uint8_t_u_u(6UL, g_101.f5)) & p_69) ^ g_166.f1))), g_101.f0))) >= (-1L)), g_97)))) & l_181))), l_183.f0)) && g_101.f2));
                l_200 = g_166;
            }
            else
            {
                int l_201 = (-8L);
                l_173 = (0x15776B27L <= p_69);
                l_201 ^= (0x84L | 4UL);
                for (l_182.f4 = 0; (l_182.f4 <= (-24)); l_182.f4 = safe_sub_func_int8_t_s_s(l_182.f4, 7))
                {
                    return g_166.f4;
                }
            }
        }
        else
        {
            char l_208 = 0x76L;
            struct S2 l_221 = {7027,0x4E2B856EL};
            int l_223 = 0L;
            l_83 &= (((((((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_208, g_209)), g_101.f0)) == ((safe_lshift_func_uint8_t_u_u(g_166.f6, l_163.f0)) ^ l_99)) != (safe_sub_func_uint64_t_u_u(g_101.f1, 0x4508A83B6B2B969ALL))) & 1UL) > 0xA2L) > p_68) <= 0x424DCF8CL);
            for (l_163.f1 = 0; (l_163.f1 != 59); l_163.f1 = safe_add_func_int16_t_s_s(l_163.f1, 8))
            {
                unsigned char l_218 = 0x71L;
                if (g_166.f7)
                    break;
                l_218 = ((safe_add_func_uint8_t_u_u(0x43L, g_101.f4)) && (p_69 & (~g_101.f5)));
                l_83 = 4L;
                if (p_69)
                {
                    for (g_166.f0 = 0; (g_166.f0 <= 15); g_166.f0++)
                    {
                        l_221 = l_221;
                    }
                }
                else
                {
                    char l_222 = 0x91L;
                    l_223 ^= l_222;
                }
            }
            l_83 = p_68;
        }
        for (g_166.f2 = 0; (g_166.f2 <= 10); g_166.f2++)
        {
            if (l_226)
            {
                unsigned l_232 = 0x8C9672B4L;
                unsigned l_241 = 0x126BB138L;
                g_178 = l_227;
                g_209 |= ((safe_mod_func_int16_t_s_s(1L, p_69)) | p_68);
                for (l_182.f5 = (-23); (l_182.f5 == 2); ++l_182.f5)
                {
                    l_232 = (p_68 && p_69);
                }
                for (l_118 = 0; (l_118 == 43); l_118 = safe_add_func_uint16_t_u_u(l_118, 7))
                {
                    unsigned l_240 = 0x14EFA435L;
                    l_182.f3 = (((0x44EEL >= 1L) != g_166.f1) != (-2L));
                    l_172.f2 = p_68;
                    g_209 = ((g_101.f3 || ((l_237 <= ((0UL > (safe_lshift_func_int16_t_s_u(l_240, 0))) < l_241)) & (+l_172.f0))) != (g_101.f2 == g_101.f7));
                    l_242 &= 0x1CDE32BAL;
                }
            }
            else
            {
                return g_209;
            }
        }
    }
    l_163 = l_163;
    return g_166.f3;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f1, "g_101.f1", print_hash_value);
    transparent_crc(g_101.f2, "g_101.f2", print_hash_value);
    transparent_crc(g_101.f3, "g_101.f3", print_hash_value);
    transparent_crc(g_101.f4, "g_101.f4", print_hash_value);
    transparent_crc(g_101.f5, "g_101.f5", print_hash_value);
    transparent_crc(g_101.f6, "g_101.f6", print_hash_value);
    transparent_crc(g_101.f7, "g_101.f7", print_hash_value);
    transparent_crc(g_101.f8, "g_101.f8", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_166.f3, "g_166.f3", print_hash_value);
    transparent_crc(g_166.f4, "g_166.f4", print_hash_value);
    transparent_crc(g_166.f5, "g_166.f5", print_hash_value);
    transparent_crc(g_166.f6, "g_166.f6", print_hash_value);
    transparent_crc(g_166.f7, "g_166.f7", print_hash_value);
    transparent_crc(g_166.f8, "g_166.f8", print_hash_value);
    transparent_crc(g_178.f0, "g_178.f0", print_hash_value);
    transparent_crc(g_178.f1, "g_178.f1", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_297.f0, "g_297.f0", print_hash_value);
    transparent_crc(g_297.f1, "g_297.f1", print_hash_value);
    transparent_crc(g_297.f2, "g_297.f2", print_hash_value);
    transparent_crc(g_297.f3, "g_297.f3", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_669.f0, "g_669.f0", print_hash_value);
    transparent_crc(g_669.f1, "g_669.f1", print_hash_value);
    transparent_crc(g_669.f2, "g_669.f2", print_hash_value);
    transparent_crc(g_669.f3, "g_669.f3", print_hash_value);
    transparent_crc(g_669.f4, "g_669.f4", print_hash_value);
    transparent_crc(g_669.f5, "g_669.f5", print_hash_value);
    transparent_crc(g_669.f6, "g_669.f6", print_hash_value);
    transparent_crc(g_669.f7, "g_669.f7", print_hash_value);
    transparent_crc(g_669.f8, "g_669.f8", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    transparent_crc(g_1435.f2, "g_1435.f2", print_hash_value);
    transparent_crc(g_1460, "g_1460", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
