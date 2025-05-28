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
   signed f0 : 19;
   unsigned f1 : 1;
   signed f2 : 24;
   unsigned f3 : 15;
   unsigned f4 : 14;
   unsigned f5 : 30;
   signed f6 : 20;
   signed f7 : 11;
   unsigned f8 : 30;
};

struct S1 {
   unsigned f0 : 10;
   signed f1 : 17;
   signed f2 : 3;
};


static char g_5 = 0xA4L;
static unsigned g_56 = 0x709B8073L;
static unsigned g_63 = 0xF1F6A35EL;
static short g_64 = 0xD8AAL;
static struct S1 g_71 = {22,-183,-1};
static unsigned char g_78 = 0UL;
static struct S0 g_130 = {-253,0,-1202,122,11,30723,-446,35,1663};
static unsigned g_216 = 0x445221C5L;
static unsigned g_234 = 18446744073709551615UL;
static char g_273 = 0x93L;
static struct S1 g_478 = {9,-196,-0};
static unsigned short g_521 = 0xE697L;
static int g_538 = 0xADD1F213L;
static int g_564 = (-1L);



static struct S1 func_1(void);
static short func_7(short p_8, unsigned short p_9);
static unsigned short func_10(int p_11, unsigned p_12);
static unsigned short func_17(short p_18, unsigned short p_19, struct S1 p_20, unsigned p_21);
static unsigned short func_25(struct S0 p_26, struct S1 p_27, int p_28, unsigned short p_29, unsigned p_30);
static struct S1 func_32(short p_33, unsigned p_34, unsigned p_35, int p_36, unsigned p_37);
static unsigned char func_38(unsigned p_39, int p_40, unsigned char p_41, short p_42);
static int func_43(unsigned short p_44, struct S1 p_45);
static struct S0 func_46(int p_47, char p_48);
static struct S0 func_49(unsigned p_50, int p_51, unsigned char p_52, unsigned p_53, unsigned p_54);
static struct S1 func_1(void)
{
    char l_6 = 0x79L;
    struct S1 l_22 = {20,114,-1};
    int l_588 = 1L;
    if (((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint16_t_u((((((g_5 <= (g_5 <= l_6)) > (l_6 <= ((func_7((((func_10((safe_sub_func_uint32_t_u_u(((g_5 == l_6) <= (safe_lshift_func_uint16_t_u_u((g_5 == ((g_5 >= (func_17(l_6, g_5, l_22, g_5) || l_22.f0)) > g_5)), g_5))), 1L)), g_521) & l_22.f0) >= l_22.f0) , g_216), g_5) >= g_521) , g_64))) < l_22.f0) & (-8L)) ^ 1UL))) & g_564), l_6)) & g_564))
    {
        int l_569 = (-9L);
        struct S1 l_570 = {6,344,1};
        unsigned l_571 = 0x95BBDFDEL;
        short l_584 = 0xEC0DL;
        unsigned l_585 = 0xA5BE53F3L;
        unsigned char l_586 = 0x15L;
        char l_587 = 0L;
        g_130 = g_130;
        l_571 = ((((l_22.f2 , 0x08AC9070L) >= l_22.f0) == func_25(func_49((safe_rshift_func_int8_t_s_u(g_71.f0, 4)), ((l_22 , 4294967295UL) && g_71.f2), (((((g_130.f8 | (safe_add_func_int16_t_s_s((l_22.f1 < l_22.f1), g_130.f0))) != g_63) == g_71.f1) != l_569) >= 0x9EL), g_478.f1, l_569), l_570, g_78, l_569, g_130.f8)) == 2UL);
        l_588 &= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0xC5B8L, func_25(func_49((((safe_mod_func_uint8_t_u_u(func_43((safe_add_func_int16_t_s_s(g_216, g_130.f2)), func_32(l_571, l_22.f0, (g_130 , (safe_rshift_func_int8_t_s_s((g_64 ^ (((func_38((g_71.f0 ^ (safe_rshift_func_int16_t_s_s(((func_38(((l_6 ^ l_584) < 0x9E5B4FD1L), l_22.f1, l_571, g_478.f0) , g_538) & g_130.f5), 6))), l_585, l_6, g_564) | g_273) <= l_586) < l_586)), 5))), g_71.f2, g_71.f1)), l_570.f1)) > l_22.f1) || 0xF8L), g_521, l_6, l_570.f2, l_587), l_22, l_571, g_478.f0, g_56))), l_22.f2));
        l_569 ^= 0L;
    }
    else
    {
        unsigned char l_589 = 246UL;
        g_478.f2 ^= l_589;
    }
    return g_478;
}







static short func_7(short p_8, unsigned short p_9)
{
    int l_529 = 0x2D92E522L;
    struct S1 l_536 = {29,233,-1};
    for (g_63 = 0; (g_63 < 37); g_63++)
    {
        struct S1 l_532 = {5,-307,0};
        unsigned l_535 = 0xD19E1A0FL;
        struct S0 l_537 = {-100,0,-38,87,2,24584,151,-44,10320};
        struct S0 l_558 = {-649,0,476,133,90,26198,-194,2,29607};
        g_71.f1 = func_43(((safe_add_func_uint8_t_u_u((g_130 , ((l_529 || ((safe_mul_func_uint16_t_u_u((!((p_8 , (g_130.f0 | (l_529 , (l_532 , (safe_rshift_func_uint16_t_u_s(((((1UL && ((g_216 != l_532.f1) < 0x55DDL)) >= 6L) & g_71.f1) >= l_535), 7)))))) | 0xED14L)), p_9)) ^ 0x437FL)) && 0xA4L)), g_56)) <= 0xA8L), g_71);
        g_538 |= func_25(g_130, l_536, l_535, (l_537 , g_478.f2), g_130.f3);
        g_130 = l_537;
        if (p_9)
        {
            struct S1 l_543 = {26,112,-0};
            l_543.f2 = ((safe_lshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(0x0413L, (p_9 & l_536.f1))) >= g_5) > ((l_543 , (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(g_216, (safe_rshift_func_uint16_t_u_u(p_9, 13)))) >= ((safe_lshift_func_int16_t_s_u((g_5 , (-6L)), 1)) , 0x5376L)), l_529))) ^ g_78)), 3)) != p_8);
            if (l_529)
                break;
        }
        else
        {
            unsigned char l_563 = 8UL;
            if (l_536.f0)
                break;
            l_558.f6 = (safe_rshift_func_int8_t_s_s(l_529, (p_9 ^ (l_529 < (safe_sub_func_uint8_t_u_u(p_8, ((l_537.f8 || ((func_43((safe_sub_func_uint32_t_u_u((func_25(l_558, ((((((((safe_rshift_func_uint8_t_u_u(l_537.f2, (safe_lshift_func_uint16_t_u_s((0xBBL < (l_537.f6 > 0xF3L)), 0)))) | l_532.f2) & p_8) , p_8) , l_563) >= 0L) >= p_9) , l_532), g_64, g_71.f0, p_9) < l_558.f1), 0xFD736A9CL)), l_532) > (-1L)) && p_8)) , 0x9FL)))))));
            l_536.f2 |= g_130.f0;
        }
    }
    return l_536.f2;
}







static unsigned short func_10(int p_11, unsigned p_12)
{
    unsigned l_522 = 0xB8E8178FL;
    int l_523 = (-9L);
    struct S0 l_524 = {-643,0,2946,15,91,706,42,30,13382};
    l_523 = (g_71.f0 && l_522);
    g_130 = l_524;
    return g_130.f1;
}







static unsigned short func_17(short p_18, unsigned short p_19, struct S1 p_20, unsigned p_21)
{
    int l_447 = 0xFD23D2D6L;
    unsigned char l_454 = 0x1BL;
    unsigned l_492 = 4294967290UL;
    unsigned l_493 = 0x4D21DA14L;
    unsigned l_506 = 0x704473B2L;
    for (p_19 = 0; (p_19 <= 19); p_19++)
    {
        struct S0 l_31 = {566,0,3824,137,11,25784,55,-21,31744};
        l_447 = (func_25(l_31, func_32(l_31.f5, (func_38(p_20.f2, func_43(((l_31.f1 , func_46(p_20.f1, p_20.f0)) , p_20.f1), p_20), p_19, g_56) != 0x92L), l_447, l_447, p_20.f0), l_454, l_31.f7, p_20.f1) || l_31.f3);
        l_447 = (safe_lshift_func_uint16_t_u_u((!((safe_rshift_func_uint8_t_u_u(g_130.f3, 3)) <= ((!func_25(g_130, g_478, (((g_478.f2 && (l_31.f3 , l_447)) , p_18) <= 0xB258L), (g_5 & l_447), l_454)) | 0x2B212808L))), 15));
        g_71.f2 &= p_19;
        p_20 = p_20;
    }
    for (g_78 = (-19); (g_78 >= 34); g_78 = safe_add_func_uint8_t_u_u(g_78, 7))
    {
        for (p_19 = (-29); (p_19 <= 34); ++p_19)
        {
            unsigned short l_489 = 0UL;
            p_20.f2 = l_489;
            return p_20.f0;
        }
    }
    l_506 |= (safe_mul_func_uint16_t_u_u(l_492, ((l_493 != (!(-7L))) || (func_43(p_18, g_478) || (safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(l_492, 3)) <= ((safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(p_20.f2, 0x2061L)) <= 65531UL) < p_18), 65531UL)), g_130.f2)) >= l_493) , p_20.f0) ^ l_454), 3)) || p_20.f2)) != 0x3D744F47L) <= p_18), p_20.f2))))));
    for (l_492 = 0; (l_492 == 38); l_492 = safe_add_func_uint8_t_u_u(l_492, 4))
    {
        struct S0 l_509 = {-261,0,300,96,20,15046,-471,-9,11913};
        unsigned char l_520 = 255UL;
        l_509 = l_509;
        p_20.f1 |= l_493;
        g_478.f2 |= (safe_lshift_func_uint8_t_u_u(((65529UL > (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(65534UL, 0)) ^ (safe_lshift_func_int16_t_s_s(0xBF66L, 2))) | ((safe_lshift_func_uint8_t_u_u(0xB5L, 0)) || (l_506 > (p_19 , (l_520 > g_71.f0))))), (func_38(g_56, p_20.f1, p_19, p_20.f0) , l_509.f0)))) , l_520), 3));
    }
    return l_454;
}







static unsigned short func_25(struct S0 p_26, struct S1 p_27, int p_28, unsigned short p_29, unsigned p_30)
{
    int l_455 = (-1L);
    unsigned l_456 = 4294967289UL;
    int l_469 = (-5L);
    int l_479 = (-6L);
    struct S1 l_480 = {18,-119,1};
    if ((p_28 , l_455))
    {
        unsigned l_459 = 0x2F5E56BAL;
        p_27.f1 = ((l_456 || (((safe_rshift_func_int16_t_s_s(g_130.f2, 12)) > g_78) >= (func_43(l_459, g_71) | (safe_mul_func_int8_t_s_s(0x68L, 0L))))) != 7UL);
    }
    else
    {
        char l_462 = 0x7CL;
        l_455 = (l_462 || l_456);
    }
    g_478 = func_32(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_130.f4, ((safe_sub_func_uint32_t_u_u(l_455, l_455)) || l_469))), (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((p_26.f1 , (((safe_sub_func_int8_t_s_s(p_26.f1, (safe_rshift_func_uint16_t_u_u(p_30, 4)))) <= l_455) <= g_130.f6)) != l_469), l_456)), 5)))) , 0L), g_130.f6, l_469, p_26.f1, g_63);
    l_479 &= l_456;
    g_130.f2 = func_43((l_479 < func_43(p_26.f7, g_71)), l_480);
    return p_27.f1;
}







static struct S1 func_32(short p_33, unsigned p_34, unsigned p_35, int p_36, unsigned p_37)
{
    char l_450 = 0x1FL;
    struct S1 l_451 = {20,-184,-0};
    g_71 = ((safe_rshift_func_uint8_t_u_s((func_38((func_43(l_450, l_451) > (safe_rshift_func_uint8_t_u_s(l_451.f0, 6))), g_130.f6, p_33, g_273) == func_43((0xAAE1C528L ^ l_451.f2), g_71)), l_451.f2)) , l_451);
    return g_71;
}







static unsigned char func_38(unsigned p_39, int p_40, unsigned char p_41, short p_42)
{
    unsigned char l_434 = 255UL;
    struct S1 l_435 = {29,-349,0};
    int l_446 = 0x44B5F292L;
    l_446 &= (((safe_rshift_func_int8_t_s_u(((0L == func_43(((safe_mul_func_int16_t_s_s(func_43(l_434, l_435), g_130.f7)) < ((safe_rshift_func_uint16_t_u_s(((p_40 == (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_435.f2 , g_130.f7) | ((safe_add_func_uint8_t_u_u((0L != 0xCE08A271L), p_41)) && 4294967289UL)), l_435.f0)) < p_42), 0xD149L)), 1))) == p_40), 12)) , 0x90EACFA1L)), g_71)) || p_39), 5)) > g_234) , 0L);
    return g_130.f1;
}







static int func_43(unsigned short p_44, struct S1 p_45)
{
    p_45.f2 = ((-1L) != g_78);
    return g_130.f2;
}







static struct S0 func_46(int p_47, char p_48)
{
    int l_55 = 9L;
    struct S1 l_98 = {2,-306,1};
    char l_185 = 0x4CL;
    struct S0 l_272 = {621,0,-1395,63,21,28523,-434,17,8904};
    char l_279 = (-8L);
    unsigned char l_346 = 0UL;
    int l_374 = 0xABF47401L;
    short l_423 = 1L;
    if (((func_49(l_55, g_56, (+(g_56 , (l_55 , l_55))), (safe_mod_func_int16_t_s_s(l_55, (0L || p_47))), l_55) , 3L) < g_56))
    {
        struct S1 l_99 = {30,216,1};
        struct S0 l_121 = {591,0,-3845,136,48,7295,865,37,11139};
        unsigned l_184 = 1UL;
        unsigned l_269 = 0xD0A9A317L;
        if ((safe_mod_func_int8_t_s_s(((g_71 , (g_56 , (((((safe_sub_func_int16_t_s_s(g_64, g_71.f1)) | l_55) > g_63) , (safe_mod_func_uint16_t_u_u(l_55, g_71.f2))) == 0x317EL))) <= g_64), p_48)))
        {
            unsigned l_91 = 2UL;
            short l_92 = 9L;
            char l_97 = 0x9AL;
            l_97 = (safe_mod_func_uint16_t_u_u(((((+l_55) , g_78) || (safe_lshift_func_uint16_t_u_u(0x570CL, (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(251UL, (safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((func_49((p_47 != (safe_add_func_uint8_t_u_u((l_91 , p_47), l_92))), ((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_71.f2, 0x31L)), g_5)) | g_71.f1), l_92, p_47, g_56) , g_5) >= 0x1409L), 0x9A73L)) ^ l_91), 6)))), 2L))))) | 0x95E3EEF2L), 4UL));
            l_99 = l_98;
        }
        else
        {
            int l_104 = (-1L);
            int l_150 = (-10L);
            struct S1 l_282 = {16,-11,1};
            g_71.f1 |= (safe_sub_func_uint8_t_u_u(p_48, (safe_mod_func_int8_t_s_s(g_56, g_64))));
            l_99 = l_99;
            if ((l_104 || ((safe_rshift_func_uint16_t_u_s(p_48, ((safe_mul_func_int8_t_s_s(g_71.f0, l_99.f2)) != ((g_78 >= p_47) == l_98.f2)))) & (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_48, (safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(l_104, l_104)) ^ 0x3B40L), p_48)))), 0x59L)))))
            {
                int l_131 = (-3L);
                unsigned l_151 = 4294967289UL;
                for (g_64 = 18; (g_64 == 25); g_64 = safe_add_func_uint8_t_u_u(g_64, 1))
                {
                    unsigned l_132 = 4294967292UL;
                    int l_143 = 7L;
                    l_132 = ((l_121 , (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_71.f1 && (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_71.f1, 15)), p_47))) , 5L), g_71.f2)), (((g_64 != (4L > (g_130 , l_131))) == 65535UL) == 0xB7L)))) || 0xEE13L);
                    l_143 |= (safe_rshift_func_int8_t_s_u(p_47, ((g_130.f7 ^ (safe_mod_func_uint8_t_u_u((+(g_130.f7 | ((g_130.f1 != ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_130.f7, (p_48 && (p_48 & (safe_add_func_uint16_t_u_u(l_104, (((p_48 >= g_63) , l_98.f1) < p_48))))))), 3)) > g_130.f3)) >= 0xB0L))), 0xB5L))) , 0x76L)));
                }
                g_130.f0 = (l_121.f0 , (safe_lshift_func_int16_t_s_u((p_47 | ((g_64 & p_48) >= (p_48 , ((safe_add_func_uint8_t_u_u((((!l_131) < (safe_add_func_uint8_t_u_u(p_47, p_48))) > (g_71.f1 >= g_71.f2)), l_121.f3)) | 0x18D8E2A7L)))), g_71.f0)));
                l_150 &= 1L;
                if ((l_151 | (l_98.f2 , l_98.f1)))
                {
                    char l_152 = 0xBFL;
                    int l_158 = 1L;
                    l_152 = 7L;
                    if ((l_152 , l_104))
                    {
                        return g_130;
                    }
                    else
                    {
                        unsigned l_155 = 0x100E805AL;
                        g_71 = l_98;
                        l_98.f1 = (safe_lshift_func_uint8_t_u_s((g_56 == (l_155 | (((8L != l_121.f3) < l_150) , l_121.f7))), l_152));
                        l_121 = ((g_130.f8 || 0x2C95L) , func_49(g_130.f3, g_71.f0, ((safe_lshift_func_uint8_t_u_s(9UL, (((1UL > (g_71.f1 , (l_150 || l_158))) && 3UL) , l_152))) , g_130.f5), l_98.f1, g_130.f8));
                    }
                    g_71.f1 &= (safe_sub_func_uint16_t_u_u((g_130.f8 || ((safe_mod_func_int32_t_s_s((-6L), (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_150, g_130.f8)), l_99.f1)))) < (safe_lshift_func_int16_t_s_u((g_130.f4 >= g_64), 15)))), p_48));
                }
                else
                {
                    struct S1 l_169 = {22,-248,-1};
                    l_169 = g_71;
                }
            }
            else
            {
                int l_188 = 5L;
                int l_217 = 0x80EA506BL;
                struct S1 l_254 = {11,-50,-1};
                g_71.f1 = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((4294967289UL == (~0x50D549ECL)), ((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(((p_47 < (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((l_184 > (((l_185 >= (g_71.f1 > (p_47 ^ (safe_lshift_func_int16_t_s_u(5L, 12))))) , 0xAE2FL) & g_130.f0)) || 65534UL) || 9UL), 4)), l_188))) , l_188), 0L)), l_188)) | l_184), 0x86F313ADL)) > g_71.f0))) , 0x9D05L), g_130.f8));
                if (((safe_add_func_uint8_t_u_u((((l_104 , 0L) < (safe_mod_func_uint8_t_u_u(((((((!p_47) == (g_130.f8 & (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((l_99.f1 ^ (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(p_48, (p_47 , (safe_add_func_int16_t_s_s((g_5 | l_150), g_130.f0))))), 1)) && 0L)))) , l_104) > p_48), p_47)), l_104)) || 0x1C72L) , p_48))) , g_5) | 0L) == p_48) | p_48), l_188))) , 255UL), 9UL)) <= 1UL))
                {
                    unsigned short l_204 = 0xD486L;
                    unsigned short l_236 = 65535UL;
                    g_130 = func_49((l_99.f0 ^ g_71.f0), p_48, (l_104 <= g_130.f2), p_47, l_204);
                    if (l_150)
                    {
                        g_71.f2 &= g_78;
                    }
                    else
                    {
                        int l_215 = 0L;
                        g_130 = (((-1L) <= (safe_mod_func_uint16_t_u_u((g_64 > g_5), 0x898DL))) , l_121);
                        g_130.f7 |= ((safe_lshift_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(p_47, 0x51L)), l_215)), (p_48 , (p_48 >= (g_64 | l_121.f8))))) != g_63) >= ((l_121.f6 ^ (-1L)) == p_47)) , 0xD2L), 6)) <= l_185);
                    }
                    if (p_48)
                    {
                        g_216 |= 0x0B82205BL;
                        l_217 = 0x4357E977L;
                    }
                    else
                    {
                        char l_235 = (-1L);
                        p_47 = (safe_rshift_func_uint16_t_u_u(((g_130.f3 == (safe_mul_func_uint16_t_u_u(((g_5 && (((l_188 & ((p_48 < 0xF4L) >= l_99.f0)) , (g_130.f5 < (safe_mod_func_int16_t_s_s(((p_47 , ((safe_mul_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((p_48 , 255UL), l_217)), p_48)) != g_5) != 0x1AL) , l_104), (-9L))) >= l_188), l_121.f1)) == l_104) == l_104) < 65533UL) >= g_234) || 4UL), g_130.f3)) > g_130.f6)) >= p_47), 65528UL)))) <= l_235)) < 0UL), p_48))) || l_236), l_104));
                    }
                    l_217 |= g_78;
                }
                else
                {
                    char l_243 = 0x6AL;
                    struct S0 l_253 = {-649,0,2124,43,42,4933,-192,9,16778};
                    unsigned short l_274 = 0xA6E6L;
                    for (l_188 = 0; (l_188 == (-30)); l_188 = safe_sub_func_int8_t_s_s(l_188, 9))
                    {
                        unsigned char l_244 = 0UL;
                        l_98.f1 = p_48;
                        l_253 = func_49(((safe_lshift_func_int16_t_s_u(0xB58FL, (safe_rshift_func_int8_t_s_s(((l_217 || l_243) && (((+p_48) | l_244) > (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(g_130.f2, l_104)) & (safe_mod_func_uint8_t_u_u(((0x3AD1BBFEL <= (((((+((p_47 | 65527UL) , l_244)) && p_47) , 0x6D0FL) == l_99.f1) | l_150)) | l_121.f7), l_217))) >= p_48), 0x4E5BL)), p_47)))), p_47)))) || 0x7CL), l_121.f2, l_243, l_55, p_48);
                    }
                    g_130.f6 = (((l_254 , ((safe_sub_func_int32_t_s_s((l_254.f2 <= ((safe_mul_func_uint8_t_u_u((g_130 , (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((((+(safe_mul_func_uint16_t_u_u(l_269, ((func_49(p_48, (g_71 , (safe_lshift_func_int8_t_s_s(l_254.f2, l_121.f8))), (l_272 , 0x83L), l_188, g_273) , l_150) || l_121.f6)))) ^ (-5L)) , p_48), 7)) ^ p_47) && 1L), l_253.f4)), 0xB2L)) != 1L), p_47))), g_130.f3)) < g_5)), 4294967295UL)) == 9L)) < l_274) , (-1L));
                    p_47 = g_130.f7;
                }
                g_130.f7 ^= l_150;
                g_130.f0 = (safe_add_func_uint16_t_u_u((g_71 , (!(safe_mul_func_uint16_t_u_u(l_279, l_272.f0)))), (safe_sub_func_uint8_t_u_u(((func_49(g_71.f0, l_272.f5, g_78, (l_282 , l_188), p_47) , g_63) > g_216), l_121.f1))));
            }
        }
        l_99.f2 = (((p_47 , (safe_lshift_func_uint8_t_u_s(p_48, p_48))) & g_71.f0) && l_272.f2);
    }
    else
    {
        unsigned l_289 = 0UL;
        g_130.f6 |= ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_289 | g_5), l_272.f4)), ((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_272.f7, (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((p_48 | ((safe_rshift_func_uint8_t_u_u(g_130.f3, g_130.f3)) & ((safe_mod_func_uint32_t_u_u((g_234 & g_78), p_48)) , 0x2D44B38EL))), 3)), p_47)))), 5)) , l_289))) | 0x900FL);
        for (p_48 = 7; (p_48 > (-18)); p_48--)
        {
            struct S0 l_304 = {54,0,-1292,91,53,2113,-979,-30,6279};
            return l_304;
        }
    }
    if ((safe_unary_minus_func_int32_t_s((((safe_mod_func_uint8_t_u_u(g_234, g_130.f3)) , 3L) , (4294967295UL && 0x1DF90D58L)))))
    {
        int l_322 = 0L;
        unsigned l_327 = 0xA9E3A809L;
        struct S1 l_330 = {14,-144,1};
        g_71.f1 = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(65535UL, (((safe_add_func_int32_t_s_s((g_130.f7 && (safe_mul_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_47, 8)) || (l_322 >= (safe_rshift_func_uint16_t_u_u((p_48 < ((p_48 == p_48) , (p_48 , ((safe_lshift_func_int16_t_s_u((p_47 < g_216), 5)) < l_272.f5)))), 11)))), 2UL)) || g_130.f1) | g_5) < p_48), p_47))), p_47)) | l_322) != g_130.f2))), l_322)), g_130.f1)) != l_327) , g_234);
        p_47 ^= p_48;
        for (g_273 = 24; (g_273 < (-4)); g_273 = safe_sub_func_uint16_t_u_u(g_273, 9))
        {
            unsigned l_333 = 1UL;
            struct S1 l_348 = {15,227,-1};
            int l_364 = (-1L);
            unsigned short l_369 = 0x9D94L;
            struct S0 l_407 = {-645,0,-343,141,87,27359,528,-26,6336};
            l_98 = l_330;
            if ((safe_rshift_func_int8_t_s_u(0x2CL, (!(g_130.f8 , ((4294967286UL != g_130.f2) >= ((l_333 & g_71.f0) >= ((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_272.f5 || (safe_add_func_int32_t_s_s(6L, (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((l_346 > g_130.f5), g_5)), p_47)), 1L))))), p_48)), l_185)) > p_48) >= p_47) ^ (-2L)))))))))
            {
                struct S1 l_347 = {12,-327,-1};
                unsigned char l_384 = 0x47L;
                l_348 = l_347;
                for (g_234 = 0; (g_234 != 38); g_234++)
                {
                    unsigned l_359 = 0x13895B77L;
                    g_130.f7 ^= l_333;
                    p_47 = (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s(((l_333 < g_273) , (safe_lshift_func_int16_t_s_s(p_48, 4))), ((safe_sub_func_uint16_t_u_u(((p_47 > l_359) == 9UL), p_47)) & l_359))) || ((g_71.f1 ^ 0x3919L) == p_47)) != l_279) , 1L), g_130.f4));
                    g_130.f6 = (g_130 , (+((p_47 <= ((l_359 || (p_48 >= (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(g_5, 6)) | 4294967295UL), g_71.f2)))) & l_348.f0)) >= l_364)));
                    l_330.f1 = (~(safe_add_func_uint16_t_u_u(l_330.f2, g_78)));
                }
                for (l_364 = 0; (l_364 == (-25)); --l_364)
                {
                    if ((((g_234 | l_369) || g_130.f8) > (((((l_347.f2 > (p_47 || (safe_mod_func_uint8_t_u_u((g_234 != ((l_347.f2 != g_130.f7) >= (safe_add_func_uint32_t_u_u(l_374, g_130.f4)))), p_47)))) > g_71.f2) || p_47) || 0x92L) >= p_47)))
                    {
                        l_98.f2 &= ((safe_unary_minus_func_uint32_t_u(g_71.f2)) , p_47);
                    }
                    else
                    {
                        p_47 = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_47, ((((safe_add_func_uint16_t_u_u(p_47, (-8L))) < l_347.f0) , p_47) , ((p_47 >= (safe_rshift_func_int16_t_s_s(((g_5 <= l_384) , l_347.f2), 1))) >= l_348.f0)))), 1UL));
                        l_348 = l_347;
                    }
                }
                l_272.f6 = ((0x7CL != (safe_sub_func_uint32_t_u_u(l_364, (safe_mul_func_uint16_t_u_u(g_71.f2, (((g_64 && (safe_sub_func_int8_t_s_s((p_47 == (safe_unary_minus_func_int32_t_s(g_234))), (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((g_130.f1 , g_71.f1) || (((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((!g_130.f5), p_48)) > (-1L)) < g_130.f8), l_327)) == 1L) , g_130.f5)), 5)), g_130.f0)) && 0xDAB85CC2L) & g_130.f5), p_48)), p_47))))) , g_234) < 1L)))))) == g_130.f2);
            }
            else
            {
                unsigned l_406 = 0x8DF2F150L;
                struct S0 l_408 = {260,0,-2334,11,50,565,409,17,10368};
                p_47 = ((((l_364 == (((safe_mul_func_int16_t_s_s(l_272.f0, l_369)) < (~((l_272.f1 & ((!(l_406 > ((1UL == p_47) > g_5))) && (p_47 || g_71.f2))) < 0UL))) , (-1L))) || 8UL) || 0x736DF966L) < g_130.f4);
                p_47 = g_71.f0;
                l_408 = l_407;
                g_130.f0 = p_48;
            }
        }
        p_47 = ((((safe_mod_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((+g_130.f6), 0)) < (l_272.f5 >= l_272.f8)) , (safe_lshift_func_int16_t_s_u(p_48, (safe_add_func_uint16_t_u_u(((l_55 == g_130.f0) != l_272.f2), (!(l_322 < p_48))))))), p_47)) || p_48) , l_330.f2) && p_47);
    }
    else
    {
        unsigned short l_422 = 0x71C0L;
        g_130.f7 = ((safe_unary_minus_func_uint8_t_u(p_48)) < ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(l_422, p_48)) , l_422), l_272.f2)) & ((g_216 , (((l_423 , g_130.f5) , (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((!((((safe_sub_func_int32_t_s_s(l_55, p_48)) || g_130.f5) , l_423) , p_47)), 1L)), p_48))) ^ 0x43L)) , 0x26EDL)));
    }
    return l_272;
}







static struct S0 func_49(unsigned p_50, int p_51, unsigned char p_52, unsigned p_53, unsigned p_54)
{
    short l_59 = (-1L);
    int l_60 = 3L;
    short l_65 = 0x282DL;
    struct S0 l_68 = {329,0,1618,9,104,16129,954,19,9881};
    if (p_54)
    {
        l_60 = (l_59 | g_5);
    }
    else
    {
        l_60 = p_51;
        g_63 ^= (safe_rshift_func_int8_t_s_s(l_59, 2));
        g_64 &= p_51;
        l_65 |= (1UL >= p_54);
    }
    l_60 |= ((l_65 | 4L) | (safe_add_func_uint16_t_u_u(p_54, p_51)));
    return l_68;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_130.f2, "g_130.f2", print_hash_value);
    transparent_crc(g_130.f3, "g_130.f3", print_hash_value);
    transparent_crc(g_130.f4, "g_130.f4", print_hash_value);
    transparent_crc(g_130.f5, "g_130.f5", print_hash_value);
    transparent_crc(g_130.f6, "g_130.f6", print_hash_value);
    transparent_crc(g_130.f7, "g_130.f7", print_hash_value);
    transparent_crc(g_130.f8, "g_130.f8", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_478.f1, "g_478.f1", print_hash_value);
    transparent_crc(g_478.f2, "g_478.f2", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
