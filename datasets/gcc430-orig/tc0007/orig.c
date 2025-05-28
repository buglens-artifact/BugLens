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
   unsigned f0 : 18;
   unsigned short f1;
   signed f2 : 17;
   unsigned f3 : 17;
   unsigned f4 : 20;
   signed f5 : 18;
   unsigned f6 : 13;
   unsigned f7 : 19;
   signed f8 : 22;
};

struct S1 {
   int f0;
   int f1;
   int f2;
   signed f3 : 21;
   unsigned f4;
   const int f5;
   const unsigned char f6;
   short f7;
   unsigned f8;
};

struct S2 {
   unsigned f0 : 17;
   const signed f1 : 15;
   signed f2 : 25;
   const signed f3 : 22;
   signed f4 : 18;
   signed f5 : 17;
   const signed f6 : 3;
   unsigned f7 : 4;
};

struct S3 {
   signed f0 : 30;
   const signed f1 : 5;
   const signed f2 : 19;
   unsigned f3 : 30;
   const signed f4 : 2;
   signed f5 : 5;
   unsigned f6 : 16;
   signed f7 : 3;
};

union U4 {
   const char f0;
   short f1;
   int f2;
};


static unsigned short g_4 = 0x9827L;
static struct S3 g_39 = {-31185,-3,371,14058,0,-4,64,-0};
static unsigned char g_52 = 255UL;
static struct S0 g_62 = {204,0UL,73,69,696,-249,48,503,1383};
static int g_73 = (-4L);
static unsigned char g_77 = 0x46L;
static short g_85 = (-8L);
static unsigned char g_136 = 251UL;
static struct S1 g_151 = {0L,0xABA9B552L,7L,76,0x1EB29961L,0x603A4C91L,0x03L,2L,18446744073709551612UL};
static char g_183 = 0xFEL;
static char g_201 = 0xDFL;
static unsigned short g_202 = 65533UL;
static int g_242 = 0x6EDDA87DL;
static int g_256 = (-7L);
static struct S2 g_265 = {123,63,-1818,-956,-416,142,-1,2};
static int g_286 = (-6L);
static struct S1 g_319 = {1L,0L,1L,-538,18446744073709551614UL,0x6D0633EEL,1UL,0x7546L,0x45224457L};
static unsigned char g_358 = 0x25L;
static struct S2 g_423 = {277,155,2857,-849,-253,296,1,3};
static unsigned g_443 = 0x4EB5AAD7L;
static struct S1 g_543 = {8L,1L,0x57271939L,-301,0UL,0x1EC8C7C8L,249UL,-1L,0xCDE53045L};
static union U4 g_577 = {0xC3L};
static short g_596 = 0x7E5CL;
static int g_606 = 1L;
static unsigned short g_607 = 0xE4F0L;
static struct S0 g_666 = {469,0xA5EEL,-114,151,770,371,41,14,249};
static struct S0 g_671 = {320,0UL,-114,132,904,-17,27,422,1785};
static unsigned short g_731 = 0xA5C6L;



static unsigned char func_1(void);
static int func_2(short p_3);
static int func_5(unsigned short p_6, union U4 p_7, short p_8, char p_9, struct S0 p_10);
static union U4 func_11(unsigned char p_12);
static int func_17(unsigned p_18, unsigned p_19);
static unsigned func_25(const char p_26, unsigned p_27, unsigned short p_28);
static const char func_29(const struct S2 p_30, struct S0 p_31, struct S2 p_32, union U4 p_33);
static struct S2 func_34(struct S3 p_35, int p_36, unsigned short p_37, struct S2 p_38);
static unsigned char func_44(short p_45);
static unsigned func_57(int p_58, struct S1 p_59, struct S1 p_60);
static unsigned char func_1(void)
{
    short l_951 = 0L;
    int l_952 = (-9L);
    int l_953 = 1L;
    if (((func_2(g_4) > g_577.f0) < (l_953 = (safe_unary_minus_func_int8_t_s((l_952 = l_951))))))
    {
        return g_666.f4;
    }
    else
    {
        struct S0 l_954 = {208,0x30AEL,14,197,666,467,57,139,1724};
        struct S0 l_955 = {4,1UL,-46,339,822,258,77,569,-1288};
        l_955 = l_954;
    }
    return g_73;
}







static int func_2(short p_3)
{
    unsigned l_587 = 8UL;
    struct S0 l_588 = {497,1UL,91,74,86,-228,51,33,62};
    const unsigned char l_620 = 0x9AL;
    unsigned l_637 = 0x7F7927A9L;
    union U4 l_668 = {0x4DL};
    struct S1 l_767 = {0xEED29153L,8L,0x52FDDC39L,276,18446744073709551610UL,-1L,0xE1L,0x98C2L,1UL};
    const struct S2 l_782 = {164,-134,4204,-21,368,-238,-1,3};
    l_588.f2 = ((func_5(g_4, func_11(p_3), l_587, g_543.f2, l_588) >= ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((g_607 = (g_606 = p_3)), (safe_div_func_int8_t_s_s(1L, p_3)))) && p_3) && 8UL), 0x4FD3L)), 4294967295UL)) ^ g_39.f2)) >= p_3);
    if (l_588.f0)
    {
        char l_610 = 0x7CL;
        return l_610;
    }
    else
    {
        int l_613 = 0x13FC44A2L;
        int l_614 = (-1L);
        int l_619 = 0xCCC0A1A2L;
        struct S0 l_621 = {281,65529UL,-356,104,749,-485,5,660,1648};
        struct S1 l_635 = {0x1007B56AL,0x389DE9CCL,0x23263F13L,539,18446744073709551613UL,1L,0x98L,0x98FCL,0xD9F8F87FL};
        const struct S2 l_651 = {281,76,-5446,-1495,-33,226,1,2};
        g_543.f0 = ((0UL ^ (p_3 | (((((g_151.f1 & 0xA58748BEL) & (safe_rshift_func_int8_t_s_u(((g_319.f7 = p_3) != ((g_62.f0 > l_613) & l_588.f1)), 1))) && l_614) | 1UL) & l_613))) < 0x51L);
        g_543.f0 = (g_151.f3 = (~((l_588.f4 <= func_25((0x85L | p_3), g_286, ((safe_rshift_func_uint8_t_u_s((l_619 = (~0UL)), 5)) >= 0UL))) | (g_151.f0 == (l_614 || g_319.f1)))));
        if (l_620)
        {
            int l_622 = 0xC2D0E14FL;
            l_588 = (g_62 = l_621);
            if ((+(func_44(g_543.f4) & (~(l_622 = ((g_543.f2 | l_613) ^ l_621.f2))))))
            {
                int l_623 = 1L;
                l_623 = l_621.f8;
            }
            else
            {
                int l_626 = 5L;
                g_265.f5 = (l_588.f8 = ((-5L) & ((g_358 = ((safe_mod_func_int8_t_s_s(p_3, func_29(g_423, l_621, g_265, g_577))) < (l_626 != (l_621.f5 | p_3)))) == 8UL)));
                return g_39.f5;
            }
        }
        else
        {
            int l_634 = 0L;
            int l_636 = 9L;
            struct S2 l_642 = {7,-111,3780,1316,-508,-216,0,2};
            for (l_587 = (-11); (l_587 > 37); l_587 = safe_add_func_int8_t_s_s(l_587, 9))
            {
                unsigned l_633 = 4294967291UL;
                g_62.f8 = g_423.f0;
                l_637 = (((-3L) != (l_619 = (g_62.f7 = (l_636 = func_57((l_588.f8 != ((g_136 = (l_588.f2 = (safe_rshift_func_int8_t_s_u(9L, 7)))) != (g_265.f2 >= (p_3 < (l_634 = l_633))))), l_635, l_635))))) == 0x79CBL);
                for (g_151.f2 = (-1); (g_151.f2 <= 12); g_151.f2 = safe_add_func_int32_t_s_s(g_151.f2, 6))
                {
                    unsigned l_654 = 0x53EF1863L;
                    for (g_201 = 3; (g_201 < (-3)); g_201--)
                    {
                        l_588.f2 = (0x126D028CL && (0xF9L | (g_319.f2 || (p_3 = func_29(g_265, g_62, l_642, g_577)))));
                        g_62 = g_62;
                        return g_319.f3;
                    }
                    l_621.f8 = g_151.f1;
                    l_654 = (p_3 ^ (!(l_588.f2 = ((l_642.f5 = (safe_add_func_int32_t_s_s(g_62.f2, (l_588.f8 != (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(func_29(l_651, g_62, g_423, g_577), 5)) == (safe_div_func_int32_t_s_s(g_151.f2, p_3))) & 0UL), 255UL)))))) >= g_4))));
                }
                l_588.f2 = 0x8848D164L;
            }
        }
        for (g_543.f0 = 0; (g_543.f0 <= 10); g_543.f0 = safe_add_func_int32_t_s_s(g_543.f0, 9))
        {
            const unsigned l_657 = 0xD810AA9EL;
            struct S3 l_662 = {-21412,3,137,27130,-0,-0,125,1};
            int l_663 = 0xA9DEF1EAL;
            struct S2 l_667 = {79,93,3967,807,17,186,-0,2};
            l_588.f5 = (l_657 != (((safe_lshift_func_uint16_t_u_u(9UL, 11)) >= g_423.f5) ^ (func_29(func_34(l_662, (l_635.f2 = ((((l_663 = g_286) || (g_39.f7 = 0xF098888BL)) & p_3) == (!(g_423.f2 > (safe_sub_func_uint16_t_u_u(l_588.f4, g_77)))))), l_662.f5, l_651), g_666, l_667, l_668) > l_621.f4)));
            g_666 = l_621;
        }
    }
    l_588.f5 = (l_588.f2 = (safe_add_func_uint16_t_u_u((4294967295UL == func_5(l_587, func_11((g_136 = p_3)), (g_39.f1 > g_319.f5), (((g_666.f6 > (g_666.f8 = p_3)) == ((g_151.f8 >= g_423.f4) >= 9UL)) && p_3), g_671)), g_543.f7)));
    if (g_543.f7)
    {
        short l_676 = 0x0305L;
        int l_677 = 0xAA6EEBD3L;
        short l_678 = 0x4F0CL;
        int l_691 = 0L;
        int l_696 = 0x10DA035BL;
        struct S0 l_697 = {509,6UL,26,260,1022,232,35,300,-508};
        const unsigned l_706 = 0UL;
        g_151.f0 = (safe_mod_func_int32_t_s_s(g_543.f3, ((safe_sub_func_int8_t_s_s((l_588.f8 = (l_676 = p_3)), (g_606 & (((l_677 = l_677) | (1L < (g_183 = (0UL != func_57(g_39.f7, g_151, g_543))))) > p_3)))) & l_678)));
        l_588.f8 = ((l_696 = (l_677 || ((safe_mod_func_uint16_t_u_u(((g_202 = (g_671.f1 = (safe_sub_func_uint16_t_u_u(1UL, g_319.f8)))) != 2L), (safe_mod_func_int16_t_s_s(l_678, g_606)))) > (safe_lshift_func_int16_t_s_s((l_588.f2 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_691 | l_677), ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((func_25(g_62.f7, l_676, g_265.f7) != l_677), p_3)), 0x91L)) >= 0L))), 1UL))), 13))))) == 0xAC451DE2L);
        if (p_3)
        {
            g_62 = l_697;
        }
        else
        {
            char l_732 = 0x1AL;
            l_588.f2 = (-9L);
            if ((p_3 == (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(p_3, ((g_607 = (p_3 != 0x26C9L)) | (g_543.f2 <= g_151.f8)))), (safe_lshift_func_uint16_t_u_s(l_706, (safe_rshift_func_uint8_t_u_s(g_666.f4, 1)))))) != (safe_mod_func_int16_t_s_s(1L, g_151.f7))), g_543.f7))))
            {
                l_588.f2 = g_77;
                l_588.f2 = g_543.f2;
            }
            else
            {
                unsigned l_737 = 0UL;
                for (l_587 = (-7); (l_587 != 5); l_587 = safe_add_func_uint8_t_u_u(l_587, 4))
                {
                    unsigned l_728 = 3UL;
                    l_732 = (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s(((g_62.f0 = ((g_423.f7 = g_62.f5) || g_183)) ^ (((safe_rshift_func_int16_t_s_s((0x59F7L || (safe_add_func_uint16_t_u_u(p_3, ((safe_add_func_uint8_t_u_u((0x24L | (safe_unary_minus_func_int16_t_s(l_728))), (safe_add_func_uint16_t_u_u(l_728, (l_706 < (p_3 || g_39.f5)))))) | p_3)))), g_151.f0)) && 1UL) > 1UL)), g_731)), g_136)), g_183)), l_728));
                    return g_256;
                }
                for (g_151.f1 = 0; (g_151.f1 != 22); ++g_151.f1)
                {
                    g_39.f7 = 0x4E44F20BL;
                    g_671 = g_671;
                    g_671 = g_666;
                    l_588.f5 = ((safe_rshift_func_uint8_t_u_u(p_3, p_3)) < (0xACL | l_587));
                }
                l_737 = g_151.f7;
            }
            l_588 = g_666;
            l_697 = g_666;
        }
        g_62 = l_697;
    }
    else
    {
        struct S0 l_740 = {126,65535UL,-8,263,732,24,31,180,1961};
        unsigned short l_763 = 65529UL;
        struct S1 l_768 = {0x280BDB97L,1L,-10L,-799,1UL,0xB8C81B30L,251UL,-10L,0x620D4DEEL};
        int l_801 = 0xB3AFDE29L;
        l_588.f8 = p_3;
        if (((safe_add_func_int8_t_s_s((func_29(g_265, l_740, g_265, g_577) >= ((l_588.f2 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(253UL, ((l_740.f0 & (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_588.f5 > g_39.f6), g_256)), p_3))) || l_588.f3))) >= g_543.f1), p_3)), 1UL))) || p_3)), l_588.f5)) < l_740.f6))
        {
            int l_751 = 0xB2D0819EL;
            const unsigned char l_752 = 0xC8L;
            int l_764 = (-1L);
            int l_765 = (-1L);
            struct S0 l_766 = {72,0xAFFFL,351,230,356,412,24,433,181};
            union U4 l_784 = {0xCCL};
            l_765 = (g_39.f5 = (l_588.f2 = (g_256 = ((0x1CC4L >= (l_740.f5 = (l_764 = ((l_588.f8 = (func_5(l_751, g_577, (((l_752 | func_17((l_740.f2 = (func_17(p_3, (safe_div_func_int8_t_s_s((l_740.f8 = (safe_lshift_func_uint16_t_u_s(0x7BB9L, 3))), (safe_rshift_func_int8_t_s_u(((g_423.f4 < (0x9F50L | ((safe_add_func_uint32_t_u_u((g_265.f0 = (safe_div_func_uint16_t_u_u(0x4231L, l_763))), p_3)) == l_740.f2))) && l_751), 0))))) == 0x07B4CAFAL)), p_3)) == p_3) > g_596), l_637, g_666) | g_423.f5)) != p_3)))) == 1UL))));
            l_588 = l_766;
            if (func_57(g_358, l_767, l_768))
            {
                struct S2 l_783 = {197,130,3770,359,413,165,0,2};
                struct S3 l_793 = {-19834,-4,9,1014,-1,-0,74,1};
                l_588 = g_62;
                for (l_768.f7 = 0; (l_768.f7 != 28); l_768.f7++)
                {
                    struct S0 l_771 = {160,1UL,229,100,564,256,33,611,1184};
                    int l_792 = 0x91139AE9L;
                    if (g_319.f8)
                        break;
                    l_771 = g_671;
                    for (g_52 = (-3); (g_52 != 39); g_52++)
                    {
                        l_768.f2 = (((+((func_17(g_671.f0, (safe_div_func_int8_t_s_s(g_62.f8, l_771.f1))) | 1L) < (l_740.f8 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((l_588.f8 <= (g_423.f2 < p_3)) <= g_265.f4), g_423.f6)), 0x92L))))) != l_771.f7) | g_4);
                    }
                    l_740.f2 = (l_588.f8 = (safe_add_func_uint32_t_u_u(func_29(l_782, (g_62 = (l_771 = l_766)), l_783, l_784), (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((l_792 = (l_783.f2 >= ((safe_div_func_int16_t_s_s(p_3, p_3)) && (safe_div_func_int16_t_s_s(0L, g_265.f7))))))), 0xFDL)))));
                }
                if (func_29(g_423, l_740, func_34(l_793, g_671.f3, g_265.f4, g_423), g_577))
                {
                    short l_798 = 0xC36BL;
                    l_588.f2 = (safe_sub_func_int32_t_s_s((l_767.f3 = (safe_mod_func_uint32_t_u_u(l_798, g_671.f6))), g_265.f4));
                    l_765 = (l_793.f5 = (safe_sub_func_uint8_t_u_u((g_358 = ((g_319.f1 || (0x4AL | (g_201 = l_740.f6))) >= (func_25(g_151.f0, p_3, (0UL == (4294967291UL != l_801))) >= p_3))), 0xB7L)));
                }
                else
                {
                    struct S0 l_816 = {14,65535UL,-218,323,35,-265,62,298,-1767};
                    g_666.f2 = ((safe_rshift_func_int16_t_s_s((8UL & p_3), 11)) > (safe_rshift_func_uint8_t_u_u(func_5((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((((g_543.f3 || (p_3 ^ g_596)) > p_3) | (g_671.f5 = p_3)) > (safe_mod_func_int8_t_s_s(func_25(l_793.f3, g_151.f4, p_3), l_588.f8))) | l_740.f7), g_671.f8)), g_4)), g_666.f3)), g_265.f6)), l_784, l_766.f7, p_3, l_816), l_783.f4)));
                }
                l_793.f7 = ((g_607 = (safe_sub_func_int32_t_s_s(((0x9DAD2354L >= (safe_sub_func_int8_t_s_s(l_740.f6, (0x39C9L > ((((!l_740.f6) > ((safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_3, (safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_767.f3 = ((l_783.f4 = (g_202 = (0L >= (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((5UL <= (l_764 = 8L)) <= func_57(p_3, l_768, l_768)), g_671.f4)) && g_151.f0), p_3))))) ^ p_3)), g_39.f1)), g_543.f4)))), l_793.f1)) && 0x7B86L), 0xBA687A79L)) != g_543.f5), 0xA1FF3282L)) <= 0xCCB800B7L)) | 0x7D74L) && p_3))))) >= 9UL), g_286))) > g_265.f0);
            }
            else
            {
                l_768.f0 = (g_671.f3 & (safe_div_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(g_319.f3)), l_782.f4)));
            }
        }
        else
        {
            int l_859 = 6L;
            struct S0 l_863 = {90,0xB958L,274,95,330,187,74,502,-1636};
            int l_907 = (-1L);
            struct S0 l_941 = {168,0xEDC2L,66,211,342,255,69,400,-946};
            union U4 l_947 = {0xE7L};
            for (l_768.f1 = (-24); (l_768.f1 < (-15)); l_768.f1 = safe_add_func_uint16_t_u_u(l_768.f1, 9))
            {
                struct S0 l_855 = {346,1UL,-157,298,301,124,29,706,-1636};
                unsigned short l_856 = 0xE6C1L;
                l_767.f3 = (safe_sub_func_int16_t_s_s(g_671.f1, l_767.f7));
                for (l_768.f8 = (-20); (l_768.f8 < 51); l_768.f8 = safe_add_func_int8_t_s_s(l_768.f8, 5))
                {
                    unsigned char l_852 = 1UL;
                    int l_857 = 0xCB4895F8L;
                    char l_858 = (-8L);
                    if ((safe_add_func_uint16_t_u_u(func_17((safe_mod_func_int8_t_s_s((g_671.f4 > ((l_855.f5 = ((l_855.f8 = (g_671.f6 >= (l_858 = ((l_852 ^ (l_857 = (func_17(func_5(((-1L) == 0x7A5CL), g_577, ((safe_add_func_uint8_t_u_u(func_44(g_666.f6), 0xB3L)) <= g_671.f4), g_543.f5, l_855), l_856) > g_671.f3))) <= p_3)))) ^ g_358)) <= 0xA5L)), l_856)), g_39.f2), g_265.f0)))
                    {
                        l_768.f0 = g_423.f3;
                        if (g_62.f7)
                            break;
                        if (g_543.f1)
                            break;
                    }
                    else
                    {
                        return g_73;
                    }
                }
                if (l_855.f4)
                    continue;
            }
            if (l_859)
            {
                char l_866 = 1L;
                union U4 l_879 = {0xB3L};
                int l_880 = 9L;
                short l_901 = (-8L);
                int l_908 = 0xD05557E1L;
                struct S0 l_909 = {9,0UL,292,285,806,411,52,361,1453};
                for (l_637 = 0; (l_637 >= 13); ++l_637)
                {
                    struct S0 l_862 = {185,0UL,137,127,720,185,60,434,-1706};
                    l_862 = g_671;
                    if (func_29(g_265, l_863, g_265, l_668))
                    {
                        unsigned l_872 = 0x20B6EEC4L;
                        const struct S2 l_877 = {352,-48,-3913,-1667,-228,-186,-1,0};
                        struct S0 l_878 = {177,65527UL,91,50,285,36,86,77,-255};
                        struct S1 l_887 = {7L,1L,0xE31D7A13L,167,4UL,0x1C2E7C1EL,1UL,0x7DECL,0x202B9D56L};
                        l_740.f2 = (0x39L & ((safe_add_func_int32_t_s_s((g_543.f3 >= (g_201 != l_866)), (g_39.f0 != (((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint16_t_u_u(g_39.f7, l_872)))) <= ((safe_rshift_func_int8_t_s_u((((g_286 & ((safe_lshift_func_uint8_t_u_u(((l_740.f8 = (l_863.f5 = (l_880 = func_29(l_877, l_878, g_265, l_879)))) >= l_877.f4), g_62.f1)) >= 0x091CC2F3L)) ^ l_866) ^ g_671.f7), p_3)) != g_423.f3)) == 0xCDABL)))) != 0L));
                        l_862.f8 = (p_3 == (g_543.f8 || l_862.f1));
                        l_862.f2 = (l_862.f1 != ((g_543.f7 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(0x6EL, 6)), 3)) < ((1UL > ((safe_lshift_func_uint8_t_u_s(0UL, 2)) > (+(-10L)))) <= func_57(l_768.f2, l_887, l_887)))) | 0L));
                    }
                    else
                    {
                        int l_890 = 0xE9F457D1L;
                        int l_895 = 0L;
                        int l_900 = 0x485DF0A0L;
                        g_319.f2 = (((((l_880 = p_3) & ((p_3 | (+((((g_319.f4 <= (g_666.f8 < (l_890 = p_3))) ^ (safe_add_func_uint16_t_u_u(func_5(g_62.f7, l_668, l_866, l_862.f3, l_588), p_3))) == 0x2732L) != l_767.f6))) == 8L)) | p_3) & g_423.f7) | l_863.f1);
                        l_900 = (safe_sub_func_uint8_t_u_u((l_895 = g_358), (g_443 == func_17((safe_mod_func_uint16_t_u_u(((255UL || l_782.f0) > ((p_3 | (-2L)) & (g_671.f1 & ((safe_div_func_uint8_t_u_u((p_3 > l_863.f6), l_880)) == p_3)))), g_151.f4)), g_62.f3))));
                        if (l_588.f5)
                            continue;
                    }
                }
                l_908 = (((g_423.f5 & (l_880 = func_44(g_543.f3))) && (func_44(l_901) | l_740.f7)) >= (safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((g_319.f1 | (l_907 = ((p_3 & l_740.f7) <= l_768.f3))))) > g_151.f3), p_3)));
                l_909 = l_588;
                g_256 = ((safe_sub_func_int16_t_s_s(p_3, 0L)) | ((g_183 = (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(g_423.f4, 10)) | 0x234649ABL), g_151.f1)), (safe_add_func_uint16_t_u_u(p_3, g_62.f1)))), (l_909.f8 = g_606))) & (((((0x98L || p_3) || g_265.f1) < p_3) > g_151.f0) > l_768.f4)), 14)) ^ p_3), g_358))) <= l_768.f5));
            }
            else
            {
                struct S0 l_926 = {268,1UL,-250,191,6,-418,10,289,-688};
                const struct S2 l_946 = {36,74,755,707,434,-103,-0,0};
                l_863 = l_926;
                l_863.f8 = (safe_rshift_func_uint16_t_u_u(l_926.f2, ((safe_add_func_int16_t_s_s(l_763, (safe_add_func_int32_t_s_s(func_5(l_863.f0, func_11(g_39.f6), g_319.f3, ((l_740.f5 = (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((p_3 | l_926.f8), (safe_add_func_uint8_t_u_u(l_767.f0, p_3)))), (-8L))), 15))) == p_3), l_941), 2L)))) && l_620)));
                l_588.f2 = (safe_lshift_func_int16_t_s_u(func_25(g_62.f4, l_941.f4, (func_25(l_926.f2, (safe_add_func_uint32_t_u_u((((p_3 == l_941.f1) && 0xF7L) > (func_29(l_946, (g_666 = g_666), g_423, l_947) | g_319.f4)), p_3)), p_3) <= p_3)), g_319.f8));
            }
        }
        for (l_768.f0 = 0; (l_768.f0 < (-10)); --l_768.f0)
        {
            g_319.f0 = ((g_671.f4 = (g_671.f5 < l_782.f4)) || p_3);
        }
    }
    return l_588.f4;
}







static int func_5(unsigned short p_6, union U4 p_7, short p_8, char p_9, struct S0 p_10)
{
    int l_589 = (-3L);
    int l_597 = (-1L);
    l_589 = g_39.f2;
    p_10.f5 = (2L >= (l_597 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_589 = (((safe_add_func_int32_t_s_s(l_589, g_596)) >= g_543.f6) & (func_44((l_589 <= (p_10.f2 = ((+g_151.f5) >= 0xE6D2C988L)))) || (p_10.f5 < 0x0B051AE1L)))), 4294967288UL)), 3))));
    p_10.f8 = (safe_lshift_func_int8_t_s_u(4L, 4));
    return l_589;
}







static union U4 func_11(unsigned char p_12)
{
    unsigned l_55 = 1UL;
    struct S1 l_61 = {0x38DB2228L,0xF583EF4CL,5L,-1387,0xAAD11CF5L,0x32FC9DABL,1UL,0xBB23L,0xF491560FL};
    struct S0 l_422 = {238,0x8CCFL,-249,182,802,178,33,348,1432};
    union U4 l_424 = {0xB9L};
    struct S2 l_576 = {295,164,4427,-1511,189,143,1,2};
    for (p_12 = (-28); (p_12 < 58); p_12 = safe_add_func_int32_t_s_s(p_12, 1))
    {
        char l_24 = 0xB5L;
        int l_56 = 4L;
        const struct S2 l_574 = {101,7,-1505,846,-272,232,1,2};
        struct S0 l_575 = {72,65535UL,223,220,454,158,43,126,1632};
        const int l_580 = (-8L);
        l_61.f3 = ((safe_sub_func_int32_t_s_s(((func_17((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(l_24, 2)), 5)), func_25(func_29(func_34(g_39, ((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(func_44((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_24 <= (p_12 ^ (g_52 = (p_12 == l_24)))), (safe_lshift_func_uint16_t_u_u(((l_56 = l_55) <= (g_39.f5 >= func_57(l_55, l_61, l_61))), g_62.f1)))), p_12))), p_12)) | g_39.f2), g_151.f5)) <= g_151.f5), g_151.f4, g_265), l_422, g_423, l_424), g_319.f5, g_265.f0)) <= (-1L)) | 0xDF8CL), g_265.f3)) & p_12);
        for (g_319.f0 = 6; (g_319.f0 <= (-18)); g_319.f0 = safe_sub_func_uint16_t_u_u(g_319.f0, 3))
        {
            unsigned short l_573 = 1UL;
            int l_581 = 0x1FE330EFL;
            l_56 = (-2L);
            for (g_319.f2 = 0; (g_319.f2 != (-28)); g_319.f2--)
            {
                l_56 = p_12;
                if (l_573)
                    break;
            }
            if (g_151.f8)
                continue;
            l_581 = (0x0FL < ((((func_29(l_574, l_575, l_576, g_577) | (p_12 > ((safe_lshift_func_uint16_t_u_s(l_573, ((p_12 != 8UL) < g_265.f4))) || (-5L)))) & l_580) >= l_575.f6) <= 1L));
        }
        l_575.f2 = (l_422.f8 = (g_39.f0 = (-2L)));
        for (g_201 = 0; (g_201 <= (-6)); g_201 = safe_sub_func_uint32_t_u_u(g_201, 7))
        {
            unsigned short l_584 = 0UL;
            int l_585 = 0x21219E4CL;
            struct S0 l_586 = {454,0x74DEL,224,116,729,-419,15,79,-539};
            l_585 = l_584;
            l_586 = l_586;
            g_319.f2 = (l_61.f3 = p_12);
        }
    }
    return l_424;
}







static int func_17(unsigned p_18, unsigned p_19)
{
    unsigned char l_457 = 0x46L;
    int l_461 = 0xC3EE66E6L;
    unsigned char l_468 = 255UL;
    struct S0 l_473 = {350,0x50CCL,-228,100,197,-424,15,59,1120};
    struct S1 l_480 = {0xAF270E89L,1L,0x27499F9DL,1405,0x846FE1F2L,0x1B2A4531L,5UL,1L,0x900F0AE0L};
    int l_507 = 0x3827B19BL;
    const unsigned short l_567 = 0x0550L;
    g_151.f3 = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(g_39.f1)), (g_202 = l_457)));
    for (g_151.f7 = (-4); (g_151.f7 <= 8); ++g_151.f7)
    {
        unsigned l_460 = 0x4DBC960CL;
        l_460 = 0xE61DF45AL;
    }
    l_461 = p_19;
    for (g_319.f2 = 27; (g_319.f2 < (-25)); --g_319.f2)
    {
        unsigned l_469 = 18446744073709551607UL;
        struct S0 l_472 = {140,65527UL,28,355,742,-54,80,180,901};
        unsigned l_502 = 18446744073709551615UL;
        short l_527 = 0x8F30L;
        struct S1 l_541 = {6L,-6L,-5L,187,0xDF706860L,0x4BB99AE4L,1UL,0xAA8EL,18446744073709551610UL};
        int l_551 = 0xF44ED7F2L;
        if ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((g_201 = l_461), ((func_25((p_19 || 0xAE25L), l_468, l_469) | (safe_add_func_int16_t_s_s((0L | ((l_469 != (g_423.f7 || g_183)) || 4294967295UL)), l_461))) & l_469))), g_286)))
        {
            int l_479 = 5L;
            int l_491 = 9L;
            const int l_501 = (-2L);
            struct S0 l_559 = {250,0xE223L,-33,195,303,-162,47,85,-1808};
            l_473 = l_472;
            for (g_151.f2 = 1; (g_151.f2 == 22); g_151.f2 = safe_add_func_int8_t_s_s(g_151.f2, 2))
            {
                int l_476 = 0xF88C1C2FL;
                struct S1 l_490 = {0x9F667F0CL,5L,0x03B8D3CDL,-1000,0xC797B08FL,0xD1244969L,0x55L,-4L,0x251597FAL};
                struct S0 l_542 = {473,0UL,319,71,411,181,37,4,-1719};
                int l_568 = 0L;
                if (((p_18 == (l_476 <= (safe_mod_func_uint16_t_u_u(65533UL, func_57(l_479, l_480, g_319))))) | l_468))
                {
                    const int l_489 = 0x1DA16024L;
                    unsigned l_494 = 4UL;
                    g_319.f0 = 0x325088D0L;
                    l_491 = ((p_18 == ((safe_add_func_int32_t_s_s(func_57(((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_18, (safe_sub_func_uint32_t_u_u(func_57(((l_489 < (func_57(g_62.f5, g_319, l_490) < g_62.f5)) ^ p_18), g_319, l_490), g_265.f5)))), g_265.f4)) <= 3L), g_151, g_151), g_62.f3)) <= g_62.f7)) && g_265.f1);
                    if ((safe_add_func_uint8_t_u_u((l_479 ^ g_265.f3), p_19)))
                    {
                        l_490.f2 = l_494;
                    }
                    else
                    {
                        l_473.f8 = l_491;
                        return g_39.f0;
                    }
                }
                else
                {
                    int l_516 = 0x75A19280L;
                    if ((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(g_319.f8, l_491)), (safe_sub_func_int32_t_s_s(l_472.f3, (((l_501 | l_490.f5) <= l_502) != (safe_rshift_func_int16_t_s_u(((l_472.f2 = (g_202 = l_473.f7)) == (safe_lshift_func_uint8_t_u_u(l_468, 0))), (((l_507 & (-9L)) >= g_423.f7) == 65526UL)))))))))
                    {
                        struct S1 l_540 = {1L,-6L,0L,-1123,18446744073709551615UL,0xA9267C8EL,0x5DL,0x3DE8L,0UL};
                        g_151.f0 = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(0L, (safe_lshift_func_uint8_t_u_s(l_516, 0)))), g_423.f3)), (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((((l_472.f8 & g_423.f2) != func_57((l_491 = ((safe_add_func_int16_t_s_s(g_85, ((p_18 & ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(p_19, g_62.f0)), l_457)) ^ g_62.f4)) && g_319.f0))) | g_52)), g_319, g_319)) & 6L), 7)) || (-2L)) && l_527), 0L)))) | p_18);
                        l_540.f0 = (safe_add_func_uint32_t_u_u(g_265.f5, (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_319.f0 <= g_151.f6), (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((l_490.f3 && func_57(((safe_rshift_func_uint8_t_u_s((g_77 = ((!(((p_18 > g_319.f5) > ((0xA2D5L <= (p_18 > l_479)) || g_62.f7)) && g_136)) & l_461)), 0)) <= p_19), l_540, l_541)) > p_18), g_151.f7)), l_490.f3)))), p_18))));
                        l_490.f3 = p_19;
                        l_542 = g_62;
                    }
                    else
                    {
                        l_491 = func_57(l_491, g_319, g_543);
                        l_507 = p_18;
                    }
                    if (p_19)
                        continue;
                }
                for (l_473.f1 = (-13); (l_473.f1 <= 11); l_473.f1 = safe_add_func_uint16_t_u_u(l_473.f1, 7))
                {
                    struct S1 l_550 = {-6L,-1L,0xAF4FDC2AL,-919,0xC32C5D20L,0x19E91C9CL,0x1DL,0x52DEL,9UL};
                    int l_553 = 0L;
                    if (g_265.f3)
                        break;
                    if ((safe_add_func_uint32_t_u_u(4294967295UL, ((0x5BCEL > ((g_39.f0 < (((l_542.f0 > g_543.f1) && (l_551 = (safe_div_func_uint32_t_u_u(p_19, func_57((~func_57(((p_19 & g_39.f2) <= (g_319.f7 = ((((-6L) <= 1L) | l_472.f1) | 0xB033L))), l_541, l_550)), g_543, g_151))))) < g_543.f0)) > p_19)) || p_19))))
                    {
                        struct S0 l_558 = {363,2UL,352,171,568,271,51,474,-1150};
                        l_541.f2 = (((safe_unary_minus_func_uint8_t_u((l_480.f0 = (g_136 = (l_491 = (0L == (l_472.f8 || p_18))))))) == (l_553 = l_472.f5)) & (g_151.f7 && p_19));
                        l_472.f8 = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, 7)), g_39.f4));
                        g_151.f3 = (g_62.f3 <= (l_491 = l_550.f5));
                        g_62 = l_558;
                    }
                    else
                    {
                        g_62 = g_62;
                        g_62 = l_559;
                        if (p_18)
                            continue;
                    }
                    return l_472.f7;
                }
                l_542.f2 = (l_502 || ((l_559.f8 = (safe_rshift_func_int8_t_s_u(func_57(l_542.f6, l_490, g_543), (safe_unary_minus_func_int16_t_s((((((p_19 & (g_201 = (safe_div_func_uint16_t_u_u((g_39.f5 & (p_18 ^ (l_559.f5 = (safe_sub_func_int32_t_s_s(p_18, l_559.f4))))), l_567)))) & (-10L)) & g_265.f6) <= l_568) < g_423.f7)))))) < (-1L)));
            }
            l_473 = g_62;
            g_543.f0 = 7L;
        }
        else
        {
            l_541.f2 = 1L;
        }
        return p_18;
    }
    return g_242;
}







static unsigned func_25(const char p_26, unsigned p_27, unsigned short p_28)
{
    struct S1 l_448 = {-1L,0xC962D9AFL,0x3432B433L,591,0UL,0x23655677L,0x65L,0xAAA6L,18446744073709551615UL};
    struct S1 l_449 = {0x4419CA8EL,0xEC4534D0L,1L,-1086,18446744073709551609UL,-10L,0x79L,0x00C9L,0xC720E6E7L};
    int l_453 = 0xC221E961L;
    l_449.f0 = (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_28, (func_57(g_265.f0, l_448, l_449) > (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((l_453 = (g_151.f2 = l_449.f8)))), 2))))), p_28));
    g_62.f2 = l_448.f4;
    return p_28;
}







static const char func_29(const struct S2 p_30, struct S0 p_31, struct S2 p_32, union U4 p_33)
{
    struct S1 l_427 = {0L,4L,7L,-191,1UL,9L,248UL,0x80A4L,18446744073709551611UL};
    int l_434 = 4L;
    int l_439 = 0xC962FDF6L;
    int l_440 = 0x1E5EDFC9L;
    g_319.f2 = (safe_div_func_int8_t_s_s(func_57(p_31.f7, g_319, l_427), (safe_div_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u((l_434 = g_319.f3), 10)) ^ (g_183 = p_31.f3)) < ((p_31.f2 | (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_440 = l_439), ((safe_sub_func_uint8_t_u_u(g_443, l_427.f8)) || p_31.f6))), l_427.f0))) != 0L)) != g_39.f4), 0x40L))));
    return g_62.f8;
}







static struct S2 func_34(struct S3 p_35, int p_36, unsigned short p_37, struct S2 p_38)
{
    int l_269 = (-7L);
    struct S1 l_285 = {0L,0L,0L,-661,0UL,9L,0x0BL,0xB92BL,1UL};
    int l_328 = 0x78EA6429L;
    unsigned char l_367 = 3UL;
    struct S0 l_402 = {474,9UL,9,166,94,-497,47,675,-783};
    struct S2 l_421 = {326,-60,-2323,39,130,160,0,3};
    for (g_242 = (-25); (g_242 <= (-16)); g_242 = safe_add_func_int16_t_s_s(g_242, 4))
    {
        unsigned l_268 = 1UL;
        g_151.f0 = l_268;
    }
    if (l_269)
    {
        unsigned char l_274 = 0x2BL;
        struct S1 l_296 = {0xCD2C348AL,-6L,9L,834,18446744073709551611UL,-1L,0UL,0xB819L,0xB918FB0FL};
        struct S0 l_301 = {340,0UL,-127,97,274,-346,8,186,-1859};
        struct S2 l_325 = {277,129,4231,-201,-280,185,-0,0};
        p_38.f5 = ((((-1L) != (((safe_div_func_int32_t_s_s(((~((func_44(p_38.f5) || func_44(((safe_sub_func_uint8_t_u_u(l_269, func_57(l_274, g_151, g_151))) >= (safe_mod_func_uint32_t_u_u(g_62.f2, p_35.f1))))) || g_62.f8)) >= g_39.f0), 1L)) ^ p_38.f1) ^ l_274)) ^ g_151.f4) < l_269);
        p_35.f7 = (safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((p_37 = (g_202 = l_274)) | ((safe_mod_func_uint16_t_u_u((func_57((g_265.f3 >= (safe_mod_func_uint8_t_u_u(0x15L, p_35.f3))), l_285, g_151) != (g_286 = p_38.f1)), l_274)) ^ p_35.f5)), p_35.f5)) ^ l_285.f4), g_265.f2));
        for (l_285.f8 = (-26); (l_285.f8 > 18); ++l_285.f8)
        {
            short l_289 = (-8L);
            struct S1 l_297 = {0xEA32EE7FL,-1L,1L,-544,18446744073709551615UL,0x059E2F2EL,0x27L,-1L,0x46B01905L};
            const struct S0 l_326 = {95,0xDE80L,-290,22,94,-416,50,259,249};
            g_265.f4 = func_44((l_285.f3 = func_44(l_289)));
            p_38.f2 = (safe_sub_func_int16_t_s_s(p_38.f2, (g_85 = p_38.f1)));
            if (func_57((safe_mod_func_int16_t_s_s(l_289, (safe_sub_func_int8_t_s_s((l_285.f2 = 0xC1L), (func_44(g_73) == (4294967295UL <= (-1L))))))), l_296, l_297))
            {
                int l_317 = 0x8C71D38BL;
                struct S1 l_318 = {0x1F7BD6D8L,0x53019834L,0x1FA0AB24L,526,18446744073709551609UL,0x17977A91L,0x24L,-1L,0x53217AC5L};
                p_38.f4 = g_202;
                for (l_296.f7 = (-6); (l_296.f7 != (-13)); --l_296.f7)
                {
                    int l_300 = 1L;
                    g_151.f3 = l_300;
                    l_301 = l_301;
                    if ((l_301.f1 && func_57((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((func_44((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(g_39.f2, (safe_sub_func_uint8_t_u_u(l_297.f0, (0x491E8C46L >= (p_38.f7 = ((safe_sub_func_int8_t_s_s((((l_297.f3 = ((+0x4CA7L) && (~g_265.f4))) && (l_317 = 255UL)) <= (p_38.f0 = (g_39.f6 = g_286))), g_256)) ^ 0UL))))))), l_297.f1)) < g_265.f1), 9))) | l_296.f6))), l_301.f3)), l_318, g_319)))
                    {
                        g_62 = l_301;
                    }
                    else
                    {
                        return g_265;
                    }
                }
                for (g_319.f4 = 3; (g_319.f4 >= 50); ++g_319.f4)
                {
                    char l_324 = 0L;
                    p_35.f5 = g_265.f6;
                    if ((func_57(l_297.f5, l_297, l_318) < p_35.f0))
                    {
                        return g_265;
                    }
                    else
                    {
                        l_324 = (safe_mod_func_int16_t_s_s((l_296.f0 = p_38.f1), p_38.f6));
                        return l_325;
                    }
                }
            }
            else
            {
                struct S0 l_327 = {98,65530UL,-235,198,185,-186,23,467,-1071};
                l_327 = l_326;
            }
            if (l_328)
            {
                l_301.f2 = func_44(p_35.f7);
            }
            else
            {
                const int l_331 = 5L;
                g_39.f0 = (l_297.f2 = (g_265.f2 = (safe_mod_func_int32_t_s_s(g_39.f4, l_331))));
            }
        }
    }
    else
    {
        return p_38;
    }
    if (l_328)
    {
        char l_332 = 0x23L;
        l_332 = 0L;
        l_285.f2 = (g_265.f5 = (l_285.f0 = l_285.f6));
    }
    else
    {
        unsigned l_337 = 0UL;
        struct S1 l_368 = {0xB6642E69L,1L,0L,-1347,0x8F14BAA5L,-5L,255UL,1L,0xE014B08FL};
        short l_401 = 0L;
        char l_418 = 1L;
        for (g_319.f7 = 22; (g_319.f7 >= (-19)); --g_319.f7)
        {
            unsigned short l_340 = 0UL;
            char l_341 = 9L;
            char l_342 = 0x92L;
            struct S0 l_343 = {77,0x3AA4L,-267,138,886,-483,69,60,1838};
            int l_357 = (-1L);
            struct S1 l_375 = {0x80B40B59L,-1L,0xC7A9D6D4L,-843,18446744073709551610UL,6L,0x64L,-1L,18446744073709551615UL};
            p_35.f7 = (g_151.f3 = ((safe_lshift_func_uint16_t_u_u(((-1L) == ((~(((l_328 && p_35.f4) != p_38.f3) == (l_337 && ((g_52 > (safe_rshift_func_int8_t_s_s((-1L), 7))) <= ((g_39.f3 || ((g_39.f6 = (g_265.f7 = l_340)) ^ 0xC01F32B7L)) != g_39.f0))))) < g_201)), l_341)) | 5L));
            if (l_342)
            {
                unsigned l_347 = 0x4B1D9451L;
                struct S0 l_369 = {371,65526UL,115,131,560,434,30,685,1430};
                if (func_44(g_151.f4))
                {
                    int l_350 = 0x2EC74DB1L;
                    int l_359 = (-1L);
                    l_343 = g_62;
                    if (g_62.f3)
                    {
                        int l_360 = (-1L);
                        g_39.f0 = (safe_unary_minus_func_uint32_t_u((safe_div_func_int32_t_s_s((0x5068L > l_347), (safe_mod_func_uint32_t_u_u((l_360 = ((((l_350 = p_35.f6) & g_319.f7) | 0xAFL) > (safe_div_func_uint16_t_u_u(p_38.f6, ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((func_57(((((l_343.f2 = func_44(l_357)) == (g_358 = g_319.f5)) && p_38.f6) > l_269), g_319, g_319) | 0x6EL), g_256)), l_359)) || g_151.f7))))), g_39.f7))))));
                        p_35.f7 = (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((p_35.f3 != ((+(safe_mod_func_uint8_t_u_u(l_343.f1, func_57(func_57(l_367, l_285, l_368), l_368, g_151)))) != 0x3548L)) && p_38.f5), l_347)), 7)) <= g_265.f5) != 0x37L);
                        g_62 = l_369;
                        l_343.f2 = (p_38.f5 = 0x41C4B5FFL);
                    }
                    else
                    {
                        l_359 = ((safe_add_func_int16_t_s_s((p_38.f7 != (((func_44((((safe_mod_func_int32_t_s_s((p_37 > 0x1BL), (safe_unary_minus_func_int32_t_s(l_369.f5)))) && l_359) | (65535UL > func_57((l_350 < p_35.f5), g_151, l_375)))) < l_350) != (-1L)) || g_151.f4)), p_38.f2)) <= 0xE73DE404L);
                    }
                }
                else
                {
                    unsigned l_386 = 18446744073709551609UL;
                    g_39.f0 = (safe_sub_func_uint16_t_u_u((0x1DL != (func_44(((l_369.f2 = 1L) < ((safe_mod_func_uint32_t_u_u(g_77, ((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((+1UL), 0)), l_386)) ^ 255UL) > p_35.f2), 3)) & p_35.f1))) | (l_375.f3 = p_38.f6)))) | 0L)), p_35.f0));
                    g_62.f2 = ((safe_rshift_func_uint16_t_u_u(((g_73 & ((g_62.f5 > (l_369.f6 >= 0xBB16L)) != l_369.f0)) & ((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((g_265.f5 < 0x70C65F0CL), g_62.f4)) || (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(g_39.f0, 0x8FL)) == 247UL), p_35.f4))), p_35.f1)), l_285.f5)) || l_343.f2)), p_36)) < l_269);
                }
                for (g_151.f0 = 0; (g_151.f0 != 14); g_151.f0 = safe_add_func_uint32_t_u_u(g_151.f0, 1))
                {
                    if ((l_401 = l_343.f1))
                    {
                        return p_38;
                    }
                    else
                    {
                        p_35.f7 = 3L;
                        if (g_77)
                            continue;
                        l_343 = l_402;
                    }
                }
                for (g_183 = (-23); (g_183 != (-15)); g_183 = safe_add_func_int32_t_s_s(g_183, 3))
                {
                    struct S1 l_409 = {0x2740A9A2L,8L,0x83717AF0L,690,0xE1DFE164L,0x609B45B6L,0UL,1L,3UL};
                    for (l_402.f1 = (-4); (l_402.f1 <= 8); l_402.f1 = safe_add_func_uint32_t_u_u(l_402.f1, 4))
                    {
                        unsigned l_407 = 4294967295UL;
                        int l_408 = (-1L);
                        struct S0 l_410 = {206,0x336FL,296,27,1013,305,75,379,-1202};
                        g_256 = func_57((l_408 = l_407), l_375, l_409);
                        g_62 = l_410;
                    }
                }
                for (g_242 = (-16); (g_242 < 10); g_242 = safe_add_func_int16_t_s_s(g_242, 2))
                {
                    if (p_38.f1)
                    {
                        g_319.f0 = l_285.f0;
                    }
                    else
                    {
                        return g_265;
                    }
                    p_35.f7 = l_343.f6;
                    g_62 = g_62;
                }
            }
            else
            {
                struct S0 l_415 = {140,0x68B8L,195,273,924,-145,39,356,-969};
                g_256 = (g_265.f2 = (g_151.f3 = (g_62.f6 < ((p_38.f5 || ((9UL != func_57(l_342, l_375, g_319)) != 0x9CC9BA00L)) != l_341))));
                if (p_38.f2)
                    continue;
                l_415 = (l_402 = g_62);
            }
            l_368.f3 = ((l_269 >= func_44(((l_375.f6 & (65535UL == p_35.f7)) & func_57((p_38.f4 = (g_62.f8 = (p_35.f0 = p_37))), l_368, l_368)))) >= 0xF3487C4BL);
        }
        l_418 = l_285.f2;
        g_39.f5 = (safe_div_func_int32_t_s_s(func_57(g_151.f7, g_151, l_285), (-2L)));
        return g_265;
    }
    return l_421;
}







static unsigned char func_44(short p_45)
{
    const int l_81 = 0x8D8CC678L;
    int l_82 = 0x5AE40314L;
    struct S1 l_94 = {-9L,-2L,0L,-583,1UL,0x1ADD9D0CL,0UL,0x48A9L,0UL};
    unsigned short l_95 = 0xA213L;
    unsigned l_96 = 4294967293UL;
    unsigned l_97 = 18446744073709551607UL;
    struct S0 l_121 = {230,0xB02BL,-225,15,700,354,74,259,285};
    l_82 = l_81;
    if ((!(safe_add_func_int8_t_s_s(((g_85 = g_62.f4) >= (!((safe_mod_func_int16_t_s_s(((-2L) >= (safe_lshift_func_uint8_t_u_s(g_39.f1, ((((l_94.f0 = (safe_sub_func_int8_t_s_s((0xF8L >= 0x8AL), ((safe_div_func_uint32_t_u_u((func_57(p_45, l_94, l_94) >= l_94.f4), 0x988215CFL)) | 4L)))) <= p_45) > l_95) > g_39.f0)))), l_96)) != l_97))), l_97))))
    {
        unsigned l_113 = 4294967289UL;
        int l_114 = 0x62BB9ADCL;
        unsigned char l_118 = 255UL;
        struct S1 l_137 = {-1L,3L,0x99BD31FFL,-471,0x7347B2A0L,0x2FCF300BL,1UL,0x7AC8L,3UL};
        char l_153 = 0x5EL;
        struct S1 l_165 = {0x49CAA41AL,0x79352E0FL,0x2CBD3E61L,1021,0xFD4C6E64L,0x1088D654L,5UL,0x27C8L,18446744073709551613UL};
        struct S0 l_184 = {393,5UL,-161,157,520,-274,4,396,-580};
        for (l_95 = 0; (l_95 < 27); l_95 = safe_add_func_uint32_t_u_u(l_95, 5))
        {
            unsigned char l_117 = 0UL;
            int l_120 = 6L;
            unsigned short l_139 = 1UL;
            struct S1 l_152 = {-9L,0x9E97B070L,1L,-1298,0x2D6EEAA0L,3L,253UL,0x332FL,1UL};
            struct S0 l_217 = {393,0x976EL,197,229,989,336,13,453,-244};
            for (g_52 = 0; (g_52 >= 58); g_52 = safe_add_func_uint16_t_u_u(g_52, 4))
            {
                unsigned char l_106 = 9UL;
                int l_119 = 0x8B8FBAE0L;
                g_62.f8 = (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_106 = (l_94.f2 = l_82)), 0xF7L)), ((safe_div_func_uint32_t_u_u(l_81, (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((l_114 = l_113), 5)), (((g_62.f6 = (~(safe_rshift_func_uint8_t_u_u(l_117, 6)))) >= l_118) != (+(l_117 || (p_45 | (-1L))))))))) > l_119)));
                l_120 = p_45;
            }
            l_120 = (l_94.f0 = l_94.f4);
            if ((g_62.f0 && 4294967292UL))
            {
                char l_140 = 0xD7L;
                int l_149 = 9L;
                struct S1 l_166 = {0x26CC1D1BL,-1L,0L,407,18446744073709551613UL,1L,0x45L,-1L,0UL};
                struct S0 l_190 = {214,0UL,-177,18,754,-4,88,509,1185};
                unsigned l_200 = 0xCA9C0FA1L;
                if (g_39.f5)
                    break;
                l_121 = g_62;
                if (g_62.f4)
                {
                    unsigned short l_127 = 0xBD69L;
                    struct S1 l_138 = {1L,-1L,3L,704,18446744073709551615UL,0x9F913A68L,0x20L,0xE628L,0xBD8C4516L};
                    struct S0 l_178 = {492,65531UL,85,17,433,-357,40,558,749};
                    for (p_45 = 0; (p_45 == 29); ++p_45)
                    {
                        short l_126 = 0x42A8L;
                        l_127 = (l_126 = (safe_mod_func_uint16_t_u_u(p_45, p_45)));
                        l_140 = ((safe_lshift_func_int16_t_s_s(p_45, 9)) <= (safe_sub_func_uint16_t_u_u(((-6L) || (((safe_rshift_func_int8_t_s_s(p_45, 1)) <= (((safe_div_func_uint32_t_u_u((((g_136 = p_45) != ((g_62.f7 == g_39.f2) | func_57((g_62.f5 = 0L), l_137, l_138))) != l_139), g_62.f7)) & l_138.f3) | g_52)) || g_52)), p_45)));
                        return g_62.f1;
                    }
                    for (l_113 = 15; (l_113 <= 1); l_113 = safe_sub_func_uint16_t_u_u(l_113, 1))
                    {
                        char l_164 = (-1L);
                        struct S1 l_167 = {9L,0x72E11571L,0L,-703,1UL,1L,0x6BL,0x9A32L,18446744073709551608UL};
                        l_152.f2 = ((((safe_sub_func_uint32_t_u_u(4294967294UL, (l_149 = ((g_85 = (safe_rshift_func_int8_t_s_s((-1L), (g_39.f3 >= (safe_rshift_func_int16_t_s_s(g_39.f0, 11)))))) < g_62.f0)))) ^ g_39.f0) > ((l_94.f3 = (safe_unary_minus_func_int16_t_s(p_45))) == (g_39.f6 ^ func_57(p_45, g_151, l_152)))) == l_153);
                        g_151.f0 = (safe_lshift_func_int8_t_s_s(func_57((l_94.f8 || (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((((p_45 >= (((safe_div_func_int8_t_s_s(func_57(((l_137.f0 = l_149) & (safe_sub_func_uint16_t_u_u(l_164, 0UL))), l_165, l_166), g_62.f4)) < 1UL) && 7L)) != g_151.f3) != 0x9F1E3D12L), l_166.f5)), 246UL))), l_167, g_151), 3));
                        if (g_151.f2)
                            continue;
                    }
                    if ((l_165.f7 && ((safe_sub_func_uint32_t_u_u((g_62.f3 != ((p_45 >= p_45) <= (safe_add_func_int32_t_s_s((-1L), 9L)))), 0xE1FC20E1L)) && ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((-10L), (l_121.f5 = (safe_div_func_int32_t_s_s(g_39.f2, p_45))))), l_166.f5)) > 0xEFL))))
                    {
                        l_121 = l_178;
                        return g_62.f0;
                    }
                    else
                    {
                        l_166.f2 = 2L;
                        l_152.f0 = (p_45 & ((safe_add_func_uint32_t_u_u((g_62.f7 || (safe_lshift_func_int8_t_s_s(l_121.f5, 3))), func_57(((0x82L >= (p_45 > (!func_57((g_151.f5 < (g_183 = l_166.f6)), g_151, g_151)))) < l_166.f5), l_137, l_138))) || 0x82L));
                        return p_45;
                    }
                }
                else
                {
                    struct S0 l_185 = {77,65527UL,-317,106,191,357,57,175,566};
                    l_185 = l_184;
                    g_151.f2 = ((l_152.f0 = l_94.f8) < (l_152.f3 = g_151.f4));
                    for (l_113 = 16; (l_113 == 32); l_113++)
                    {
                        struct S0 l_191 = {461,0xDF75L,288,12,342,-176,54,139,-1668};
                        g_73 = ((p_45 > (safe_lshift_func_uint8_t_u_s(((g_73 ^ (((l_137.f6 ^ (p_45 & l_149)) ^ 0xC520L) >= p_45)) < (g_62.f2 ^ 0x17A56BC6L)), 5))) == p_45);
                        l_121 = (g_62 = l_121);
                        l_184 = (l_191 = l_190);
                        l_191.f2 = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((-3L), (p_45 = (g_151.f7 = (func_57(g_52, g_151, l_152) & ((l_185.f8 = (g_202 = ((safe_lshift_func_uint16_t_u_s((g_201 = l_200), g_39.f2)) & (l_113 == l_190.f4)))) >= l_152.f6)))))) < g_183), 13)) || 0x966ABFE7L), 0));
                    }
                    if (p_45)
                        continue;
                }
                if (g_39.f7)
                    continue;
            }
            else
            {
                unsigned short l_205 = 0xE255L;
                char l_213 = 1L;
                struct S1 l_216 = {0L,0x2E94D31AL,0x16F3B513L,1363,18446744073709551614UL,0x9AB182FDL,0xFEL,0L,18446744073709551615UL};
                struct S0 l_218 = {229,9UL,-326,49,359,151,52,275,-784};
                l_120 = (255UL && (p_45 & (!p_45)));
                for (g_151.f1 = 0; (g_151.f1 > 20); g_151.f1 = safe_add_func_int32_t_s_s(g_151.f1, 3))
                {
                    const int l_206 = 0L;
                    l_205 = p_45;
                    l_184.f5 = (g_73 | l_206);
                    l_120 = (p_45 | (safe_add_func_uint16_t_u_u(l_206, func_57((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((l_213 = 0xD6FFL) > (safe_mod_func_int8_t_s_s(3L, 254UL))), (-7L))), l_165.f3)), l_216, l_94))));
                }
                l_218 = l_217;
            }
        }
        for (g_201 = (-4); (g_201 >= (-17)); g_201--)
        {
            struct S1 l_240 = {0xE0398EE9L,0x6175C34AL,-1L,827,1UL,0xFB3528B5L,0xC1L,0x9FFFL,18446744073709551615UL};
            for (g_52 = 0; (g_52 > 42); g_52 = safe_add_func_uint32_t_u_u(g_52, 8))
            {
                unsigned short l_233 = 0xCFCBL;
                l_233 = (safe_add_func_uint16_t_u_u(p_45, (safe_mod_func_int8_t_s_s(l_121.f8, (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((0xE3E7L || p_45), 6)), (p_45 & (3L || (g_183 = 0x4FL))))), g_62.f5))))));
            }
            g_62.f5 = (g_39.f4 && (-1L));
            for (p_45 = 0; (p_45 == 13); p_45 = safe_add_func_uint8_t_u_u(p_45, 8))
            {
                unsigned l_239 = 0x83CF0072L;
                struct S0 l_243 = {501,65535UL,-168,108,561,-467,23,55,-2004};
                if ((safe_unary_minus_func_uint8_t_u(((l_137.f0 = l_94.f0) ^ p_45))))
                {
                    unsigned short l_241 = 0xDD47L;
                    l_241 = (safe_mod_func_int32_t_s_s(1L, func_57(l_239, l_94, l_240)));
                    if (l_239)
                    {
                        return p_45;
                    }
                    else
                    {
                        l_184.f8 = ((+((0xD186E39AL != g_39.f5) & l_121.f8)) ^ p_45);
                        g_151.f0 = (l_241 < (0xCAL < g_242));
                        g_62 = l_243;
                    }
                }
                else
                {
                    unsigned l_257 = 0xA6F27C5AL;
                    if ((func_57(p_45, l_165, g_151) || (l_240.f1 < (safe_add_func_uint8_t_u_u(0x6BL, (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(l_94.f8, 2)) == (((safe_rshift_func_uint16_t_u_s(1UL, l_243.f5)) && g_256) >= g_136)) > 1L), (-5L))), 8)) >= g_62.f6), 0xBDDBL)))))))
                    {
                        l_240.f0 = l_257;
                        l_184.f5 = (safe_rshift_func_int8_t_s_s(func_57(p_45, g_151, l_240), 2));
                        return l_257;
                    }
                    else
                    {
                        int l_260 = 0x33E2BE75L;
                        l_137.f3 = g_73;
                        g_62.f2 = (-1L);
                        return l_260;
                    }
                }
                l_240.f2 = g_62.f6;
                for (l_240.f7 = (-30); (l_240.f7 >= (-26)); l_240.f7++)
                {
                    struct S0 l_263 = {166,0x211EL,-238,91,191,469,56,92,20};
                    g_62 = l_263;
                    g_62 = l_263;
                }
            }
        }
        g_62.f2 = g_52;
    }
    else
    {
        struct S0 l_264 = {384,0xDC51L,-179,224,831,27,66,649,-1844};
        g_62 = l_264;
        g_62 = g_62;
    }
    return l_121.f1;
}







static unsigned func_57(int p_58, struct S1 p_59, struct S1 p_60)
{
    struct S0 l_63 = {170,1UL,348,189,813,-505,0,114,1002};
    int l_68 = 0x0C93A8B8L;
    l_63 = g_62;
    if ((p_60.f8 & g_62.f0))
    {
        unsigned char l_71 = 0x0AL;
        int l_72 = 9L;
        unsigned l_76 = 1UL;
        g_62.f8 = ((2L < p_59.f6) || (g_77 = (safe_div_func_uint8_t_u_u(((!(((safe_lshift_func_uint16_t_u_s((l_68 ^ (safe_lshift_func_uint8_t_u_s((l_71 = p_59.f8), (g_73 = (l_72 = l_72))))), g_62.f4)) && ((((g_73 & (safe_div_func_uint16_t_u_u(65535UL, (l_72 = ((p_60.f7 || 4UL) ^ g_39.f7))))) == 0xBFL) >= 0xC3794E43L) < g_39.f7)) || p_60.f5)) ^ g_62.f2), l_76))));
        return g_62.f6;
    }
    else
    {
        unsigned l_80 = 4294967295UL;
        g_73 = (g_62.f8 = (((safe_lshift_func_int8_t_s_u(p_59.f1, p_59.f5)) | (l_80 ^ p_58)) <= 1L));
    }
    l_63.f8 = (p_59.f3 = ((+p_60.f7) ^ l_63.f3));
    return p_58;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_39.f5, "g_39.f5", print_hash_value);
    transparent_crc(g_39.f6, "g_39.f6", print_hash_value);
    transparent_crc(g_39.f7, "g_39.f7", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_62.f4, "g_62.f4", print_hash_value);
    transparent_crc(g_62.f5, "g_62.f5", print_hash_value);
    transparent_crc(g_62.f6, "g_62.f6", print_hash_value);
    transparent_crc(g_62.f7, "g_62.f7", print_hash_value);
    transparent_crc(g_62.f8, "g_62.f8", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_151.f3, "g_151.f3", print_hash_value);
    transparent_crc(g_151.f4, "g_151.f4", print_hash_value);
    transparent_crc(g_151.f5, "g_151.f5", print_hash_value);
    transparent_crc(g_151.f6, "g_151.f6", print_hash_value);
    transparent_crc(g_151.f7, "g_151.f7", print_hash_value);
    transparent_crc(g_151.f8, "g_151.f8", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f1, "g_265.f1", print_hash_value);
    transparent_crc(g_265.f2, "g_265.f2", print_hash_value);
    transparent_crc(g_265.f3, "g_265.f3", print_hash_value);
    transparent_crc(g_265.f4, "g_265.f4", print_hash_value);
    transparent_crc(g_265.f5, "g_265.f5", print_hash_value);
    transparent_crc(g_265.f6, "g_265.f6", print_hash_value);
    transparent_crc(g_265.f7, "g_265.f7", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_319.f0, "g_319.f0", print_hash_value);
    transparent_crc(g_319.f1, "g_319.f1", print_hash_value);
    transparent_crc(g_319.f2, "g_319.f2", print_hash_value);
    transparent_crc(g_319.f3, "g_319.f3", print_hash_value);
    transparent_crc(g_319.f4, "g_319.f4", print_hash_value);
    transparent_crc(g_319.f5, "g_319.f5", print_hash_value);
    transparent_crc(g_319.f6, "g_319.f6", print_hash_value);
    transparent_crc(g_319.f7, "g_319.f7", print_hash_value);
    transparent_crc(g_319.f8, "g_319.f8", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_423.f0, "g_423.f0", print_hash_value);
    transparent_crc(g_423.f1, "g_423.f1", print_hash_value);
    transparent_crc(g_423.f2, "g_423.f2", print_hash_value);
    transparent_crc(g_423.f3, "g_423.f3", print_hash_value);
    transparent_crc(g_423.f4, "g_423.f4", print_hash_value);
    transparent_crc(g_423.f5, "g_423.f5", print_hash_value);
    transparent_crc(g_423.f6, "g_423.f6", print_hash_value);
    transparent_crc(g_423.f7, "g_423.f7", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_543.f0, "g_543.f0", print_hash_value);
    transparent_crc(g_543.f1, "g_543.f1", print_hash_value);
    transparent_crc(g_543.f2, "g_543.f2", print_hash_value);
    transparent_crc(g_543.f3, "g_543.f3", print_hash_value);
    transparent_crc(g_543.f4, "g_543.f4", print_hash_value);
    transparent_crc(g_543.f5, "g_543.f5", print_hash_value);
    transparent_crc(g_543.f6, "g_543.f6", print_hash_value);
    transparent_crc(g_543.f7, "g_543.f7", print_hash_value);
    transparent_crc(g_543.f8, "g_543.f8", print_hash_value);
    transparent_crc(g_577.f0, "g_577.f0", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_666.f0, "g_666.f0", print_hash_value);
    transparent_crc(g_666.f1, "g_666.f1", print_hash_value);
    transparent_crc(g_666.f2, "g_666.f2", print_hash_value);
    transparent_crc(g_666.f3, "g_666.f3", print_hash_value);
    transparent_crc(g_666.f4, "g_666.f4", print_hash_value);
    transparent_crc(g_666.f5, "g_666.f5", print_hash_value);
    transparent_crc(g_666.f6, "g_666.f6", print_hash_value);
    transparent_crc(g_666.f7, "g_666.f7", print_hash_value);
    transparent_crc(g_666.f8, "g_666.f8", print_hash_value);
    transparent_crc(g_671.f0, "g_671.f0", print_hash_value);
    transparent_crc(g_671.f1, "g_671.f1", print_hash_value);
    transparent_crc(g_671.f2, "g_671.f2", print_hash_value);
    transparent_crc(g_671.f3, "g_671.f3", print_hash_value);
    transparent_crc(g_671.f4, "g_671.f4", print_hash_value);
    transparent_crc(g_671.f5, "g_671.f5", print_hash_value);
    transparent_crc(g_671.f6, "g_671.f6", print_hash_value);
    transparent_crc(g_671.f7, "g_671.f7", print_hash_value);
    transparent_crc(g_671.f8, "g_671.f8", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
