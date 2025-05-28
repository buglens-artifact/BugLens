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



static unsigned char g_6 = 255UL;
static unsigned char g_49 = 0xB1L;
static unsigned g_53 = 0x0B42B8FFL;
static int g_71 = 0x5CD63CCFL;
static short g_75 = 1L;
static unsigned char g_123 = 0x70L;
static unsigned char g_124 = 0x2BL;
static unsigned g_125 = 0xCDCAF520L;
static char g_176 = (-6L);
static char g_181 = (-1L);
static char g_201 = 0L;
static int g_253 = 0x0E5491D3L;
static unsigned char g_315 = 255UL;
static short g_357 = (-1L);
static short g_372 = 1L;
static int g_377 = 0x0F54275DL;
static short g_470 = 0xF709L;
static unsigned char g_594 = 0x5AL;
static unsigned short g_637 = 0x4EE9L;
static unsigned short g_742 = 0xBF3DL;
static short g_771 = (-1L);
static unsigned g_924 = 18446744073709551606UL;
static unsigned g_958 = 0x3B13124FL;
static char g_988 = 1L;
static unsigned g_1004 = 0xEC121455L;
static unsigned short g_1021 = 65528UL;
static char g_1050 = 0L;
static unsigned char g_1070 = 0x73L;
static short g_1121 = 0x767EL;



static int func_1(void);
static int func_2(unsigned short p_3, unsigned short p_4);
static const int func_7(unsigned p_8);
static const int func_9(unsigned short p_10, short p_11, unsigned short p_12, unsigned short p_13, unsigned short p_14);
static const unsigned short func_20(char p_21, unsigned char p_22);
static unsigned func_27(char p_28, unsigned p_29, unsigned p_30, unsigned p_31);
static unsigned func_32(char p_33, unsigned p_34);
static char func_37(int p_38);
static short func_39(unsigned char p_40);
static unsigned char func_41(unsigned char p_42);
static int func_1(void)
{
    unsigned l_5 = 0xF2C29A3DL;
    int l_1139 = 1L;
    l_1139 = func_2(l_5, (g_6 | l_5));
    return g_1021;
}







static int func_2(unsigned short p_3, unsigned short p_4)
{
    unsigned short l_1138 = 65535UL;
    l_1138 &= func_7(p_3);
    return l_1138;
}







static const int func_7(unsigned p_8)
{
    unsigned l_19 = 0x8D383303L;
    unsigned char l_323 = 0xAFL;
    int l_1082 = 0x66227D22L;
    int l_1122 = 1L;
    l_1082 ^= (+func_9(g_6, (safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((l_19 != (func_20((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(255UL, (func_27(g_6, (func_32(((g_6 > l_19) >= (safe_rshift_func_int8_t_s_u(func_37((func_39(func_41((l_19 && ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(0x64F6L, 9)), l_19)) | 0x1C0A9C5AL)))) & 1L)), l_323))), l_19) & g_6), g_6, l_19) <= 0xB3C2FCF9L))), p_8)), p_8) ^ 0xCE46L)), g_6)) == 0x3C2EL) < p_8), p_8)), g_6, g_6, g_6));
    for (g_470 = 0; (g_470 < (-9)); g_470--)
    {
        unsigned l_1089 = 1UL;
        int l_1106 = 0x9350DDA4L;
        int l_1107 = (-1L);
        for (g_201 = 19; (g_201 > (-30)); g_201--)
        {
            unsigned l_1108 = 0xB864545EL;
            int l_1109 = 0x6E9DFD86L;
            l_1109 = (p_8 | (safe_add_func_uint32_t_u_u(l_1089, (g_1004 ^= (2L == (l_1082 & (safe_sub_func_uint8_t_u_u(g_123, ((g_958 = func_41((g_594 = (safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0x34E0C387L < (safe_sub_func_int16_t_s_s((l_1107 |= (safe_add_func_int16_t_s_s((g_75 = (g_594 < ((safe_add_func_int8_t_s_s(g_771, (safe_sub_func_int16_t_s_s((l_1106 = g_594), 0x0B6FL)))) <= 0UL))), p_8))), p_8))), g_124)), 10)) | l_1108) > 0x29L), 12))))) || p_8)))))))));
        }
        g_253 = ((g_123 < (p_8 & 1UL)) == 1L);
        if (p_8)
        {
            char l_1123 = (-1L);
            l_1082 = (safe_lshift_func_uint16_t_u_s(func_37((l_1082 <= 8L)), 8));
            for (g_742 = 0; (g_742 < 58); ++g_742)
            {
                unsigned l_1116 = 0xB1A83FB3L;
                int l_1126 = 0x58AF8F6BL;
                g_253 = (+(-1L));
                l_1116 = (p_8 | (safe_lshift_func_uint8_t_u_u(p_8, g_742)));
                g_253 = (~((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_181, (((l_1122 = ((l_1082 = g_1121) != p_8)) | (g_1004 = l_1123)) & ((p_8 != (0xA7L <= (safe_rshift_func_uint8_t_u_u((l_1126 ^= 0x7FL), (g_6 = func_41(l_1089)))))) <= l_1116)))), g_1070)) | p_8));
            }
            g_71 |= g_372;
        }
        else
        {
            unsigned short l_1137 = 0x1112L;
            l_1137 = ((safe_mod_func_uint16_t_u_u((((!(safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(func_39(g_470), 7)) ^ p_8), 4))) >= func_41(g_637)) ^ (p_8 == l_1107)), p_8)) ^ (safe_lshift_func_int16_t_s_s(0x0038L, 1)));
        }
    }
    return g_1070;
}







static const int func_9(unsigned short p_10, short p_11, unsigned short p_12, unsigned short p_13, unsigned short p_14)
{
    unsigned char l_1061 = 255UL;
    int l_1064 = 1L;
    int l_1069 = 0x872758C2L;
    int l_1078 = 0x68BB09E1L;
    for (g_53 = 0; (g_53 == 37); g_53++)
    {
        return p_11;
    }
    g_1070 = (((-3L) != func_39((safe_add_func_int8_t_s_s((l_1061 <= g_988), ((safe_mod_func_int32_t_s_s(p_11, ((g_201 = ((((((l_1064 = p_10) > (safe_mod_func_uint8_t_u_u((g_124 && (safe_sub_func_uint8_t_u_u(g_1050, 0xE0L))), (g_123 = (~(l_1069 = ((p_14 >= g_958) > g_53))))))) < 0xB66EL) != l_1061) < 6UL) && l_1061)) && g_315))) != 0L))))) > p_12);
    l_1078 |= func_20(((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((func_32(((l_1069 ^= 0UL) != ((p_13 > 0x1775873DL) > p_10)), (g_924 = (safe_unary_minus_func_uint8_t_u(((-4L) == (p_12 = (g_53 < p_12))))))) == (safe_add_func_int8_t_s_s(l_1064, g_742))) | p_13) && g_315), g_176)) >= 0x72L), p_14)) > 0x0FL), l_1061);
    for (g_53 = 0; (g_53 != 25); ++g_53)
    {
        unsigned l_1081 = 18446744073709551615UL;
        l_1081 = func_41(p_13);
        return g_742;
    }
    return g_315;
}







static const unsigned short func_20(char p_21, unsigned char p_22)
{
    int l_756 = 7L;
    int l_758 = (-1L);
    short l_843 = 0x5298L;
    unsigned short l_885 = 0x8767L;
    unsigned l_914 = 0x1ED2F8B1L;
    unsigned short l_917 = 0UL;
    unsigned short l_920 = 0x8E68L;
    unsigned char l_1047 = 1UL;
    unsigned l_1056 = 18446744073709551608UL;
lbl_992:
    for (p_22 = (-27); (p_22 > 1); p_22++)
    {
        unsigned short l_759 = 5UL;
        int l_762 = 5L;
        l_756 = ((safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(p_22, (safe_add_func_uint32_t_u_u(g_357, l_756)))) > ((func_37((p_22 < g_637)) > (((l_758 &= (safe_unary_minus_func_int32_t_s((g_49 != g_357)))) && (g_125 = ((g_372 && l_759) | (-1L)))) | l_759)) | (-1L))) & g_372), p_22)) < l_759);
        l_758 = (l_756 |= 1L);
        g_253 &= ((l_759 ^ (safe_add_func_int16_t_s_s((~(l_762 = (l_756 >= g_372))), (((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((((-7L) & (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((g_771 <= (g_181 = l_756)), (safe_add_func_uint32_t_u_u((g_124 > ((~(l_758 = func_41(g_125))) ^ 7L)), 0x2364FD1BL)))) ^ g_6), 65526UL))) ^ g_357) > l_756) == g_742), 0xDC9808F2L)), p_22)) || 0x0EL) | 65533UL)))) >= 0x51B8L);
    }
    for (g_75 = 0; (g_75 != (-4)); --g_75)
    {
        unsigned l_786 = 0x22BDCB57L;
        int l_800 = 2L;
        int l_830 = 0L;
        int l_904 = 0x3FE0A5BCL;
        unsigned short l_957 = 0x2AAFL;
        char l_1017 = 0x29L;
        char l_1018 = 0x04L;
        int l_1019 = 0L;
        int l_1053 = 7L;
        if (((safe_lshift_func_uint8_t_u_s((p_22 |= p_21), 1)) >= g_594))
        {
            int l_778 = 2L;
            unsigned char l_779 = 249UL;
            int l_817 = 9L;
            unsigned l_837 = 1UL;
            const short l_923 = 0x74CEL;
            l_779 = (l_778 = func_37(g_771));
            if (g_742)
            {
                unsigned short l_793 = 0xF797L;
                int l_799 = 0x5685B1D8L;
                int l_814 = 0x0105066EL;
                if (l_758)
                {
                    unsigned l_808 = 0x7E23FB8BL;
                    unsigned l_813 = 9UL;
                    for (g_49 = 0; (g_49 <= 51); g_49++)
                    {
                        unsigned char l_797 = 0x0DL;
                        int l_798 = (-8L);
                        l_800 &= ((l_799 = ((!(((func_41(((safe_add_func_int8_t_s_s(p_21, (safe_mod_func_uint16_t_u_u((g_742 = l_786), 0xA7BBL)))) < (l_798 &= (((safe_mod_func_uint8_t_u_u((func_41(l_756) == (safe_lshift_func_uint8_t_u_s(0xE5L, 5))), (safe_sub_func_int32_t_s_s(g_771, (l_793 >= (g_124 = (safe_unary_minus_func_uint32_t_u((safe_add_func_int16_t_s_s(((p_22 & 65531UL) <= p_22), l_797)))))))))) < g_637) && 0x10A0L)))) != 0x1429L) ^ (-1L)) <= 0x54163B80L)) | 2UL)) > g_176);
                        l_800 &= (l_814 ^= ((g_377 | ((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(p_22, (((p_22 | (l_808 = ((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(g_377)), 8)) || (p_22 ^ (l_798 ^= (l_799 = p_21)))))) < l_797) ^ (safe_rshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s(l_813, 9)) == l_786) && 4294967286UL) | l_793), g_123))))), p_22)) || 0L)) > l_813));
                        if (l_778)
                            continue;
                    }
                    if ((l_800 = l_778))
                    {
                        return p_22;
                    }
                    else
                    {
                        g_71 = 0xAD52F539L;
                    }
                    for (g_377 = 0; (g_377 >= (-5)); g_377 = safe_sub_func_int16_t_s_s(g_377, 2))
                    {
                        if (p_21)
                            break;
                        l_817 = g_315;
                        if (l_808)
                            break;
                    }
                }
                else
                {
                    short l_828 = 0L;
                    int l_829 = 0x25FE5228L;
                    l_799 &= (l_756 || (((safe_mod_func_uint32_t_u_u(g_470, func_41(g_125))) <= ((safe_mod_func_int32_t_s_s(((l_828 = ((~l_779) & ((safe_sub_func_uint8_t_u_u(func_37(g_315), p_21)) > ((safe_mod_func_int8_t_s_s(g_771, l_779)) ^ l_793)))) < g_123), 0x0466BECAL)) || (-1L))) > l_829));
                    l_830 = l_756;
                }
                l_800 = (safe_lshift_func_uint16_t_u_s((0x9599L || (func_41((p_22 = (+g_75))) != (((g_637 = func_37(l_830)) || l_793) & (safe_lshift_func_int16_t_s_s(((((g_372 < (((l_756 = (l_800 <= func_41((safe_rshift_func_uint8_t_u_s(l_800, l_793))))) == 0xB7216F83L) > l_799)) <= l_837) <= l_800) | (-6L)), 6))))), 9));
            }
            else
            {
                unsigned l_842 = 2UL;
                l_843 ^= (l_842 = ((g_71 | (g_75 || (func_41(p_22) <= (l_758 | func_41(g_742))))) ^ (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_22, (p_22 == 0xF075AD3FL))), l_786))));
            }
            if ((l_817 = ((l_756 ^= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_830, (safe_lshift_func_int8_t_s_u(0x31L, 3)))) || p_21), p_21)), 6))) < ((~(safe_unary_minus_func_uint16_t_u((((0UL > (safe_lshift_func_uint16_t_u_s((g_742 = p_22), ((func_37((g_377 = (safe_rshift_func_uint16_t_u_s((g_637 = (+g_253)), 3)))) & ((1L ^ g_123) > g_49)) >= l_837)))) <= 0x916DL) > p_21)))) || l_830))))
            {
                int l_873 = 9L;
                int l_886 = (-4L);
                for (l_778 = (-3); (l_778 > 16); l_778 = safe_add_func_uint8_t_u_u(l_778, 9))
                {
                    unsigned char l_865 = 0xC4L;
                    l_756 = (safe_add_func_uint16_t_u_u(g_357, (((safe_add_func_uint8_t_u_u((+(l_817 = p_22)), (safe_add_func_uint8_t_u_u(l_800, p_21)))) && g_315) <= (l_865 = g_357))));
                    return l_830;
                }
                if ((((g_315 < ((((0x3268L != ((g_125 | ((func_41(l_756) != 65535UL) > ((0xC067L != ((safe_rshift_func_int16_t_s_u((l_758 = func_41((g_71 >= p_22))), 8)) && 0UL)) >= g_53))) >= g_377)) < l_756) | g_594) & p_22)) > l_786) != 0xC2L))
                {
                    int l_872 = 0x208ACACAL;
                    for (g_377 = 0; (g_377 != (-3)); g_377 = safe_sub_func_int8_t_s_s(g_377, 6))
                    {
                        g_253 = p_22;
                        l_872 = (safe_rshift_func_int8_t_s_s(g_771, 0));
                        return g_125;
                    }
                    if (l_758)
                        continue;
                }
                else
                {
                    unsigned char l_884 = 0x37L;
                    l_886 = (g_637 > (g_6 & ((l_873 < ((safe_mod_func_int32_t_s_s(g_124, p_21)) >= (-10L))) && (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(1UL, func_37((safe_lshift_func_int8_t_s_u(func_41((l_884 && 0x6F774683L)), 3))))), 249UL)), l_885)))));
                }
            }
            else
            {
                const int l_897 = 1L;
                short l_902 = 0x86A7L;
                unsigned l_903 = 0x8B4C78CAL;
                int l_905 = (-4L);
                for (g_201 = 21; (g_201 == (-2)); g_201 = safe_sub_func_int16_t_s_s(g_201, 9))
                {
                    l_904 = ((l_756 & (safe_add_func_int32_t_s_s(2L, ((((safe_lshift_func_int16_t_s_s(((l_817 &= (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((-8L), 0xE26C5BD3L)), (g_470 |= (l_897 >= (l_903 = ((0L <= (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((l_800 = 0x1FC1B02EL), ((p_21 >= l_902) | g_49))) && g_181), p_22))) == 5UL))))))) < l_756), 2)) || l_800) >= g_124) & 2UL)))) != 8UL);
                }
                l_905 = g_742;
                l_756 = (((-3L) != (g_123 = (g_49 ^= ((l_903 != ((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((l_905 = (p_22 & (g_924 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_914 & func_37((l_817 &= ((safe_sub_func_uint8_t_u_u(((g_315 &= (g_124 ^= (func_41((l_917 ^= g_594)) ^ g_771))) && ((((!((func_41(((safe_rshift_func_uint8_t_u_s(l_920, (safe_rshift_func_int8_t_s_s(g_357, 2)))) || p_22)) | l_800) | p_21)) < 1UL) < l_923) <= p_22)), l_830)) || p_22)))), 9)), g_125))))), l_837)), g_742)) && l_885)) != 0x091AL)))) <= p_21);
                l_817 = ((safe_add_func_int32_t_s_s(0x1F5B6194L, p_22)) <= ((l_756 = p_22) < (g_742 &= (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((0x860EL < p_22), p_22)), (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(g_125)), g_377)))))));
            }
        }
        else
        {
            const int l_946 = 0L;
            unsigned char l_956 = 0x72L;
            int l_989 = 0x8522AED8L;
            for (g_771 = 11; (g_771 <= 9); g_771--)
            {
                unsigned char l_942 = 0xD7L;
                if ((l_756 |= (1UL || (0xBFL <= (0x233BBD18L & (p_21 && (g_637 = 1UL)))))))
                {
                    unsigned char l_943 = 0x1DL;
                    for (g_53 = 0; (g_53 == 48); g_53 = safe_add_func_uint16_t_u_u(g_53, 8))
                    {
                        if (p_22)
                            break;
                    }
                    if (p_22)
                        break;
                    for (g_377 = 19; (g_377 != 7); g_377 = safe_sub_func_int8_t_s_s(g_377, 3))
                    {
                        l_904 = ((g_315 < (l_942 = (safe_rshift_func_uint8_t_u_u((g_123 = g_71), 3)))) & l_943);
                        if (p_21)
                            break;
                        if (p_21)
                            continue;
                    }
                    if (l_943)
                        continue;
                }
                else
                {
                    l_800 &= l_885;
                }
                for (l_843 = 0; (l_843 >= (-20)); --l_843)
                {
                    g_71 = ((5UL & g_181) || 0x88L);
                    if (g_75)
                        continue;
                }
                return l_946;
            }
            if (g_176)
            {
                int l_947 = 0L;
                l_947 ^= l_946;
                g_958 |= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_947 = (safe_add_func_uint16_t_u_u(func_37(l_914), (safe_mod_func_int16_t_s_s(g_377, l_956))))), l_957)), 0));
                if (g_6)
                    continue;
                l_947 = l_946;
            }
            else
            {
                unsigned char l_991 = 0xFDL;
                char l_1003 = 0x34L;
                if (p_21)
                    break;
                for (l_917 = 19; (l_917 == 59); l_917 = safe_add_func_uint16_t_u_u(l_917, 4))
                {
                    unsigned l_961 = 0x0C16AE5DL;
                    char l_968 = 0xE4L;
                    l_756 &= 0L;
                    if (l_961)
                        continue;
                    for (l_904 = (-3); (l_904 < 29); l_904 = safe_add_func_int32_t_s_s(l_904, 3))
                    {
                        unsigned char l_987 = 6UL;
                        int l_990 = 0L;
                        l_991 = func_41((((safe_lshift_func_uint8_t_u_u(((func_37(g_357) & func_41((safe_sub_func_uint8_t_u_u(func_41((((l_800 = (((l_968 >= g_771) & ((safe_mod_func_uint16_t_u_u((l_990 ^= (2L | (l_989 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0xF5L, ((0xB40B8B23L >= (-1L)) >= func_41((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((g_988 |= (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((g_958 ^= (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(l_987, l_961)) <= p_22), 5))), 0x07E46EC8L)) && l_987) != (-1L)), 4))), p_21)), g_372)))))), l_957))))), g_924)) || p_21)) >= l_920)) || 0x6017L) || g_594)), g_924)))) < l_756), 4)) & 4294967289UL) < g_49));
                        l_990 = g_6;
                        if (g_742)
                            goto lbl_992;
                    }
                    g_1004 = (safe_lshift_func_int8_t_s_s(func_41(func_37(((safe_mod_func_uint32_t_u_u(0x40CE963AL, p_21)) & ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0x06L, 6)), (((l_904 = 0UL) <= g_176) && (65535UL | (((p_21 < (p_21 & (g_637 = g_181))) <= (-1L)) & p_21))))), p_21)) ^ l_1003)))), p_21));
                }
            }
            g_71 |= (l_904 |= (((l_758 = ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(func_41(l_946), 2)) != (safe_add_func_uint16_t_u_u(((l_756 = ((0x77F5L > g_176) & func_41((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((-1L), l_920)), (safe_mod_func_uint8_t_u_u((+g_176), l_800))))))) == g_49), p_22))), l_1017)) & g_124)) >= l_1018) != l_1019));
        }
        if (l_920)
            goto lbl_992;
        if ((func_37(l_917) && p_22))
        {
            char l_1020 = 0x07L;
            int l_1042 = 0x1756BB6AL;
            if (((1UL <= l_758) & func_41(((g_71 = (func_41(g_49) <= l_830)) == l_1020))))
            {
                int l_1040 = 0x45A0E3BAL;
                int l_1041 = 0x407938CEL;
                g_1021 |= p_22;
                for (l_843 = 0; (l_843 <= (-28)); --l_843)
                {
                    int l_1026 = (-10L);
                    if (g_1004)
                        break;
                    l_1026 &= func_41((func_41(l_830) && (g_124 & (safe_mod_func_uint16_t_u_u(func_41(p_21), (func_41(p_21) || p_21))))));
                    l_1026 = (l_1041 |= ((((safe_sub_func_uint32_t_u_u((0UL >= 249UL), 0x9F8720B0L)) & l_1020) < ((safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0x3BL, func_41(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((p_21 = (((safe_unary_minus_func_int8_t_s(g_377)) > (((3UL > p_21) || l_1040) >= g_176)) > 0L)), 1)), 4)) <= p_22)))), l_843)) <= p_22), p_22)) < 1UL)) != g_470));
                }
                l_1042 = 8L;
            }
            else
            {
                l_758 = g_124;
                if (g_75)
                    break;
            }
            if (l_1018)
                continue;
            l_1053 &= (safe_sub_func_int8_t_s_s((l_1020 ^ (l_1042 = ((g_988 < (func_37(l_1047) >= 4294967287UL)) == (safe_lshift_func_int8_t_s_u((0UL || (((g_125 |= l_885) > (g_1050 = g_357)) ^ (((safe_lshift_func_int8_t_s_s((p_21 = func_41(p_22)), 6)) >= l_1020) ^ 0xB820L))), 5))))), g_742));
        }
        else
        {
            if (l_885)
                goto lbl_992;
        }
        if (g_470)
            continue;
    }
    l_756 = (safe_mod_func_uint32_t_u_u(((func_37(g_253) && l_1056) && p_21), 0x67DA17DBL));
    return l_1047;
}







static unsigned func_27(char p_28, unsigned p_29, unsigned p_30, unsigned p_31)
{
    unsigned l_564 = 1UL;
    int l_620 = 0xCB336758L;
    int l_715 = 0xF1EAFC7EL;
    if (l_564)
    {
        unsigned l_565 = 0UL;
        int l_579 = 0x7BB4D0ADL;
        int l_608 = 0x61BDEADEL;
        short l_714 = 0xF5D4L;
        if (l_565)
        {
            char l_566 = (-1L);
            int l_577 = 0x5CEB2D7CL;
            const short l_614 = (-3L);
            int l_665 = 0xB188B562L;
            l_566 = 0x31F2DEBFL;
            if (p_29)
            {
                unsigned short l_569 = 0UL;
                int l_575 = (-3L);
                if (p_28)
                {
                    unsigned char l_574 = 0xD6L;
                    int l_576 = 0x1CF8745DL;
                    l_577 = ((g_315 == (g_123 ^ ((((l_576 &= (safe_add_func_uint8_t_u_u(((((p_29 == func_41(l_569)) > (l_575 |= (safe_lshift_func_int8_t_s_s(g_253, (0x1F1FB9A1L | (((safe_sub_func_int16_t_s_s(((((!p_28) < p_31) && 0x61L) != l_574), p_30)) < p_29) & g_125)))))) && 65527UL) >= (-7L)), 0x69L))) <= g_75) <= 0x5F38L) < g_372))) && p_29);
                    if ((l_579 = (1L != ((g_125 = g_123) != (safe_unary_minus_func_int8_t_s(g_315))))))
                    {
                        g_253 |= g_53;
                    }
                    else
                    {
                        return l_564;
                    }
                    if (g_357)
                    {
                        int l_582 = 1L;
                        g_253 |= 0x0672279BL;
                        l_582 = (safe_rshift_func_int16_t_s_u(((l_579 = g_470) & l_564), 12));
                        g_253 ^= ((safe_rshift_func_int16_t_s_u((p_30 <= 1UL), 0)) == (safe_add_func_uint32_t_u_u(4294967292UL, p_31)));
                    }
                    else
                    {
                        int l_593 = 2L;
                        l_576 = ((safe_rshift_func_int8_t_s_s(l_574, (((((0x7B63AC82L ^ 0x98427661L) || (l_579 &= (safe_sub_func_int8_t_s_s(l_565, (l_574 && (l_577 = ((((p_28 < (safe_rshift_func_uint16_t_u_u(l_565, 13))) == (0UL | (l_575 = (-1L)))) | 0x72L) ^ l_577))))))) < l_593) || g_181) && p_29))) < p_29);
                        g_594 |= (func_39(g_315) <= l_564);
                    }
                }
                else
                {
                    for (l_564 = 12; (l_564 < 13); ++l_564)
                    {
                        g_71 = p_30;
                    }
                }
                g_253 |= g_315;
            }
            else
            {
                unsigned l_607 = 18446744073709551609UL;
                unsigned char l_622 = 0xD2L;
                int l_638 = 1L;
                l_608 = (((safe_lshift_func_uint16_t_u_s(((l_577 < (((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(g_75, (safe_add_func_int8_t_s_s(g_201, ((+(safe_add_func_uint8_t_u_u(((p_28 | g_176) || (g_75 != ((l_579 &= (-9L)) <= (l_607 ^ l_565)))), (-3L)))) >= 9L))))) == g_377), 4)) < 0x553D6877L) <= g_6)) && p_30), 5)) < 0x8B39L) ^ p_29);
                if (l_565)
                {
                    unsigned l_621 = 0UL;
                    for (g_125 = 0; (g_125 <= 15); g_125++)
                    {
                        int l_613 = 0L;
                        int l_619 = 0x1BFA07D4L;
                        g_71 = (func_41(p_31) ^ ((safe_mod_func_int8_t_s_s(((((l_613 = l_613) <= ((l_614 >= p_29) && p_29)) != (g_176 >= (l_620 = ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_28, (p_31 >= g_357))), l_619)) <= 0x9B62L)))) && 4294967293UL), l_621)) <= l_622));
                        if (l_565)
                            break;
                        g_253 = 0x57F61D5CL;
                    }
                }
                else
                {
                    unsigned l_625 = 0x9C6F412EL;
                    int l_635 = 0x501E6DAAL;
                    for (g_71 = (-12); (g_71 < 8); g_71 = safe_add_func_int16_t_s_s(g_71, 1))
                    {
                        const short l_632 = 0xBDA3L;
                        int l_636 = 0xD7082AFDL;
                        l_638 |= (((((l_625 == 5L) | ((((p_31 & 1L) && (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(l_632, l_625)), 0)) < (g_637 = ((l_636 = (safe_add_func_uint8_t_u_u(func_41(g_49), func_41(func_41((l_635 = 0x70L)))))) > l_632))), g_201))) & g_176) | l_620)) && 1UL) >= 1L) <= g_53);
                    }
                    l_608 = (safe_rshift_func_uint8_t_u_u(g_123, func_41(l_565)));
                    return l_564;
                }
                for (p_31 = 0; (p_31 < 56); p_31 = safe_add_func_int32_t_s_s(p_31, 1))
                {
                    int l_649 = 0xD48FA498L;
                    l_649 = ((safe_mod_func_int16_t_s_s(((g_125 || p_30) || l_607), (-1L))) >= ((l_607 <= ((safe_lshift_func_uint8_t_u_u((((-1L) & (safe_add_func_uint32_t_u_u(p_29, func_37(g_377)))) > p_29), l_579)) || l_620)) <= g_470));
                    for (g_594 = 0; (g_594 <= 11); g_594 = safe_add_func_int8_t_s_s(g_594, 8))
                    {
                        char l_654 = (-1L);
                        int l_666 = 0x57961436L;
                        int l_667 = 0xDA74A401L;
                        l_649 = g_181;
                        if (p_29)
                            continue;
                        l_608 = (safe_rshift_func_uint16_t_u_s(((l_654 >= (safe_sub_func_int8_t_s_s(g_253, func_41(p_31)))) < (func_41((l_667 = (((0xB08FL & (safe_add_func_int16_t_s_s(g_253, ((safe_lshift_func_uint16_t_u_u(((g_49 = (((l_666 = func_41(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_564 == (0x83F8AF6FL <= func_41(g_49))), 3UL)), l_665)) || g_201))) == l_665) <= l_638)) | 0x96L), p_31)) > g_71)))) || p_29) < 65535UL))) && 4L)), 1));
                    }
                    if (g_71)
                        break;
                }
            }
            g_71 = (safe_sub_func_int16_t_s_s(func_41(l_620), ((((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((((l_564 > g_377) && (safe_mod_func_int32_t_s_s((l_565 == (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0x61L, g_594)), 13))), g_124))) >= p_29) & p_28), p_31)) < 251UL), p_28)), 3)) == g_181) & g_201) || 0xE5F8L)));
        }
        else
        {
            unsigned short l_684 = 65526UL;
            int l_693 = 0x3582A48EL;
            l_693 = (safe_mod_func_int16_t_s_s(func_37(l_684), (safe_unary_minus_func_int8_t_s(((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint16_t_u_u(g_125, 6)) > (safe_lshift_func_uint8_t_u_s(func_41(g_6), 7))))), 8L)) && (g_372 = l_565))))));
            if (p_30)
                goto lbl_703;
lbl_703:
            l_608 ^= ((p_29 | 0x31FDL) <= (func_41((l_620 |= 0xB0L)) != (((safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s((p_29 > 0UL), (safe_rshift_func_int8_t_s_s(func_32(l_564, g_181), g_637)))))) && 0x1DL) == g_201)));
            l_620 = (65534UL != (l_579 & g_6));
            l_693 = l_564;
        }
        l_579 = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((g_637 = (l_715 = ((safe_mod_func_uint16_t_u_u((l_608 ^= ((l_620 = func_32(l_579, (g_53 = func_41(g_201)))) != p_28)), ((safe_lshift_func_uint16_t_u_u(p_30, 5)) | (safe_sub_func_int16_t_s_s(((g_594 && func_41(l_714)) & g_201), g_637))))) & p_29))), g_594)) & l_565), g_176));
        return g_176;
    }
    else
    {
        int l_722 = (-10L);
        int l_727 = 0x615D3462L;
        int l_728 = (-6L);
        unsigned l_733 = 0x59385064L;
        l_728 = (p_30 < ((g_71 ^= g_124) != ((safe_rshift_func_int16_t_s_s(((!(l_727 = (((g_125 &= func_41((l_715 = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_637 &= (((p_30 ^ (g_123 | (65534UL > l_722))) | (safe_mod_func_int8_t_s_s((g_181 |= (safe_lshift_func_uint16_t_u_u(((func_41(func_41(l_715)) | p_30) <= g_123), g_470))), l_564))) > 5UL)), l_722)), 9)) != l_620)))) <= 0x832158F9L) && g_372))) == g_49), l_620)) > l_722)));
        g_71 = (g_253 = ((l_620 = (safe_mod_func_uint8_t_u_u(l_727, (safe_rshift_func_uint8_t_u_u(l_733, 3))))) || g_49));
    }
    if (g_124)
        goto lbl_745;
lbl_745:
    for (l_715 = 0; (l_715 >= 11); l_715++)
    {
        char l_743 = 0x72L;
        int l_744 = 5L;
        l_744 = (l_743 = ((safe_lshift_func_uint16_t_u_u((((g_125 = p_30) == (func_41(g_637) & ((safe_rshift_func_int8_t_s_s(p_31, 3)) | func_37((l_620 = (~(safe_sub_func_int16_t_s_s((l_620 > p_29), g_742)))))))) > (65532UL != l_564)), 11)) | p_30));
    }
    if ((0x8CAAL >= g_176))
    {
        char l_746 = (-3L);
        l_746 = g_123;
    }
    else
    {
        int l_747 = 0L;
        l_747 = g_315;
        l_620 = (p_29 <= 0xDB20L);
    }
    return l_564;
}







static unsigned func_32(char p_33, unsigned p_34)
{
    int l_324 = (-1L);
    int l_373 = (-8L);
    int l_374 = 0xCA31A6CAL;
    char l_405 = 0xF6L;
    unsigned char l_417 = 0x86L;
    int l_509 = (-1L);
    unsigned short l_553 = 65535UL;
    if (l_324)
    {
        unsigned short l_335 = 65535UL;
        int l_338 = 0x2B3A83FAL;
        unsigned l_363 = 1UL;
        for (g_253 = 0; (g_253 < (-29)); g_253--)
        {
            short l_339 = 0L;
            int l_340 = (-1L);
            unsigned l_345 = 4294967295UL;
            char l_346 = 0x92L;
            for (g_53 = 0; (g_53 == 30); g_53++)
            {
                unsigned l_331 = 0x87655EF6L;
                int l_341 = 0x25883E4BL;
                unsigned char l_342 = 250UL;
                for (g_315 = 25; (g_315 < 56); ++g_315)
                {
                    short l_332 = 0xD896L;
                    if (g_49)
                        break;
                    l_331 ^= 0x4C55312FL;
                    g_71 ^= ((((+(l_332 = 0x8EL)) != g_181) < l_331) > ((-2L) & (safe_mod_func_uint16_t_u_u(l_335, (l_338 = (safe_mod_func_uint16_t_u_u(0xE463L, p_33)))))));
                    g_71 = p_34;
                }
                l_342 = ((l_324 = (l_340 = l_339)) != (l_341 = p_34));
                if ((safe_rshift_func_int16_t_s_u((l_345 | (l_346 >= (p_34 | (safe_add_func_int32_t_s_s(((((g_71 = (safe_sub_func_int32_t_s_s(((l_341 &= l_324) > p_34), g_49))) && (0x02F4L || 65535UL)) & 0x48L) | p_34), 0x2FFF6BB7L))))), g_75)))
                {
                    unsigned l_358 = 18446744073709551615UL;
                    l_324 |= (l_341 ^= (p_34 != (-2L)));
                    for (g_123 = 0; (g_123 <= 2); g_123++)
                    {
                        l_324 = ((safe_add_func_int32_t_s_s((+((g_357 = (g_125 |= func_41((safe_add_func_int16_t_s_s(1L, (g_181 == (l_331 & (g_49 & ((+(((0x98FAL <= (g_75 & p_33)) && (p_33 <= 0x22L)) < 7L)) <= p_34))))))))) ^ p_33)), p_34)) | 6L);
                    }
                    l_341 = g_53;
                    l_358 = 0xE8493797L;
                }
                else
                {
                    l_341 &= g_181;
                    l_338 |= g_71;
                    return p_34;
                }
            }
            l_324 ^= ((safe_mod_func_uint32_t_u_u(func_41(p_33), p_34)) && (g_6 || p_34));
            l_363 |= (safe_lshift_func_uint8_t_u_u(g_6, 7));
        }
        l_373 = ((255UL < (safe_sub_func_int8_t_s_s(g_49, (safe_lshift_func_int8_t_s_u((((g_201 < (safe_sub_func_uint16_t_u_u((l_374 &= (safe_mod_func_int16_t_s_s(g_315, (0xC82AF049L & (p_33 && ((((l_338 |= (g_6 >= ((g_372 &= (l_324 &= (g_53 <= ((0x85D1L <= g_124) >= g_357)))) > l_373))) || g_53) == l_363) >= l_373)))))), 0x73EEL))) > g_253) > l_335), l_335))))) <= g_49);
        l_373 = l_335;
    }
    else
    {
        short l_382 = 1L;
        int l_383 = 0L;
        int l_384 = (-1L);
        int l_385 = 0xDCA61D59L;
        g_377 = (safe_sub_func_uint16_t_u_u(((+l_374) == g_53), 0x4D47L));
        l_385 = (l_383 = (l_384 |= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_34 <= ((l_382 = p_34) ^ l_383)), l_383)), 2))));
        g_253 = 0x61C01269L;
    }
    for (g_124 = 0; (g_124 <= 14); g_124 = safe_add_func_uint8_t_u_u(g_124, 2))
    {
        unsigned l_394 = 0x5A11C1BFL;
        int l_401 = (-1L);
        int l_404 = 0x44210E2DL;
        unsigned l_427 = 0x1492B466L;
        unsigned char l_435 = 0xD3L;
        short l_529 = 0x6B85L;
        int l_562 = 0x93C67A39L;
        unsigned l_563 = 18446744073709551615UL;
        g_253 = ((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(1UL, (safe_lshift_func_uint16_t_u_u((((p_33 == ((l_394 = 0L) > (g_123 = ((safe_rshift_func_uint16_t_u_u(65535UL, ((safe_sub_func_int32_t_s_s(0xAF761C27L, ((1UL >= (l_401 > (l_324 > (safe_sub_func_int8_t_s_s((~((((l_404 = p_34) & l_405) & 1UL) < 0x60L)), l_401))))) || l_405))) <= 253UL))) >= g_253)))) != p_34) == p_33), 1)))), g_71)) || g_123) && 0x4B601889L) <= 0x5860L);
        for (g_315 = 21; (g_315 < 40); ++g_315)
        {
            int l_458 = (-10L);
            int l_465 = 0x1330A687L;
            unsigned char l_488 = 1UL;
            int l_530 = 2L;
            for (l_394 = 0; (l_394 != 34); l_394++)
            {
                const unsigned l_416 = 1UL;
                int l_430 = 0x939C0611L;
                const unsigned l_491 = 0x9A0500A4L;
                if ((safe_sub_func_uint16_t_u_u(func_41(l_401), func_41(func_41(((safe_lshift_func_uint8_t_u_s((g_49 = func_41(p_33)), (((safe_rshift_func_uint8_t_u_s((func_41(p_33) <= p_34), 3)) | (g_71 = (l_417 |= ((func_41(l_401) >= 0x8EB2AF3AL) <= l_416)))) ^ p_33))) && 4UL))))))
                {
                    short l_420 = (-1L);
                    int l_423 = 0xC7C3C239L;
                    int l_426 = 0x1CC3B5E4L;
                    unsigned short l_440 = 0x57D8L;
                    if (((l_374 &= p_33) < (((safe_add_func_uint16_t_u_u(0x4C86L, (g_75 = ((l_427 = ((l_420 | p_34) != ((l_423 |= ((safe_lshift_func_uint16_t_u_u(0x0E1CL, 6)) ^ l_416)) > (0x7508L < (((l_426 = ((safe_lshift_func_int16_t_s_s(((g_357 = (9L <= (p_33 > 1UL))) < g_123), l_401)) <= g_176)) && l_417) ^ p_34))))) && 1L)))) < p_34) != (-1L))))
                    {
                        int l_459 = 0xFC099468L;
                        l_430 = (safe_add_func_int32_t_s_s(0x8151461EL, (-1L)));
                        if (p_34)
                            break;
                        l_459 = (l_373 = (((safe_lshift_func_uint8_t_u_s(((g_181 = ((((safe_lshift_func_int8_t_s_u((l_435 | (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_440, (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(l_440, 3)) & (g_315 > ((func_41(g_6) || (safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_374 |= ((((safe_add_func_uint16_t_u_u((p_33 && (0x02L || ((l_401 = 1UL) | g_315))), p_34)) >= (-1L)) <= 6L) | g_372)), g_123)), g_125)) | g_315), 0x10CFA0E9L))) == 5L))), 2)), p_34)))))), 0x4D79L))), 2)) == l_426) != g_75) != 0xCAL)) != l_458), 0)) < p_34) & g_357));
                    }
                    else
                    {
                        int l_460 = 0xC8B28E14L;
                        g_71 = (l_430 = l_460);
                        l_465 = func_41((((safe_lshift_func_uint8_t_u_s(func_41(l_417), (func_41(((0L | (l_458 || (p_34 ^ 0x78231961L))) >= p_34)) < (safe_rshift_func_uint8_t_u_s(g_53, 6))))) ^ p_33) <= l_435));
                    }
                }
                else
                {
                    char l_475 = 0L;
                    int l_477 = 0x18EE1040L;
                    if ((safe_sub_func_uint16_t_u_u(g_201, (0x1BL >= ((l_465 = 0L) >= p_34)))))
                    {
                        return g_71;
                    }
                    else
                    {
                        g_253 = p_34;
                    }
                    l_373 = ((func_41(p_33) | (((((func_41((((9L | g_49) == ((p_33 >= (safe_add_func_uint32_t_u_u((l_324 >= 4294967295UL), (p_34 < g_75)))) & 0x03L)) && 0x78L)) != l_373) ^ p_33) & g_470) != g_372) != p_34)) >= 0UL);
                    for (g_253 = (-15); (g_253 == 1); ++g_253)
                    {
                        unsigned l_476 = 0x0E886505L;
                        l_430 = ((func_41(l_465) != p_34) || l_373);
                        l_477 = (6UL & (safe_sub_func_int32_t_s_s(l_475, l_476)));
                        l_465 &= (g_124 != (((p_33 = (safe_mod_func_uint16_t_u_u(func_41(p_33), func_41(((safe_add_func_uint32_t_u_u(p_34, 4294967295UL)) ^ (((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_357 < (g_49 && g_181)) == (4294967295UL || p_34)), 4)), 7)) | p_33), (-6L))) | 0xB431L) && 3L) < l_488) & 0x82L)))))) < p_34) | 8UL));
                    }
                    return l_417;
                }
                if (((safe_lshift_func_int8_t_s_u(l_417, ((l_491 < (((p_33 ^ l_394) >= (g_470 &= ((((0UL <= ((((func_41(p_33) <= ((safe_lshift_func_int16_t_s_s(((6UL ^ ((l_401 = ((g_53 > 249UL) & l_488)) == 2UL)) <= l_427), l_430)) >= p_33)) <= 0L) <= 4294967295UL) == g_181)) | 0L) <= 2UL) || g_75))) >= g_253)) ^ 255UL))) == 4294967295UL))
                {
                    int l_496 = (-8L);
                    l_374 = g_201;
                    l_373 |= (g_71 = (l_465 = l_496));
                    if (g_377)
                    {
                        g_71 = ((safe_rshift_func_uint8_t_u_u((l_373 = (p_33 < g_181)), (safe_rshift_func_int8_t_s_u(p_33, 4)))) & func_41(g_75));
                        return p_34;
                    }
                    else
                    {
                        unsigned l_501 = 4294967295UL;
                        g_71 |= p_34;
                        l_373 = func_41((g_71 ^ (0xF68319A3L || 0xF192CDCDL)));
                        return l_501;
                    }
                }
                else
                {
                    char l_508 = 1L;
                    int l_513 = (-1L);
                    int l_528 = (-6L);
                    if ((g_176 ^ (l_509 ^= (g_176 ^ (safe_lshift_func_int8_t_s_u((l_491 ^ l_427), (safe_rshift_func_uint8_t_u_s(func_41((((safe_rshift_func_int16_t_s_s(((l_508 = g_201) <= (l_430 <= 1L)), ((func_41(l_394) >= p_34) && 0x477BB3A2L))) && 0x10L) & g_49)), p_33))))))))
                    {
                        unsigned l_510 = 0xE839301CL;
                        g_71 ^= g_315;
                        l_401 = p_33;
                        g_71 = l_510;
                        l_513 &= (safe_sub_func_uint8_t_u_u(p_34, (g_49 |= g_315)));
                    }
                    else
                    {
                        short l_531 = 0x1C00L;
                        l_430 &= (p_34 > (func_41((g_176 && (l_513 ^ ((safe_lshift_func_uint8_t_u_s(((l_530 = (l_529 = ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((l_465 = 0x2200L), (safe_add_func_uint16_t_u_u(p_33, (safe_sub_func_uint32_t_u_u(func_41(l_491), (l_528 = (safe_lshift_func_int8_t_s_u((((-1L) != ((safe_lshift_func_uint8_t_u_u(((g_6 & g_253) > l_417), l_513)) && 0L)) || l_513), 2))))))))) ^ l_416), l_405)) ^ p_34))) ^ 2UL), l_531)) & 0xFC9FL)))) | 0xC4EFL));
                        l_404 = p_34;
                    }
                    return g_125;
                }
            }
            for (l_373 = 0; (l_373 <= (-7)); l_373 = safe_sub_func_int8_t_s_s(l_373, 7))
            {
                g_253 = l_509;
            }
            g_71 ^= (-1L);
        }
        g_253 = ((safe_add_func_int32_t_s_s((g_71 = (safe_unary_minus_func_uint8_t_u((l_563 = (g_176 <= ((safe_rshift_func_int8_t_s_u(((-1L) || (0xDE009277L & func_41((safe_mod_func_int8_t_s_s(g_181, ((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((1UL <= (safe_lshift_func_int16_t_s_u((((((l_562 = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_125 ^= (safe_sub_func_int32_t_s_s(l_553, (safe_lshift_func_uint16_t_u_s(l_427, 7))))), ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((l_401 = (l_404 = (((l_509 = (safe_sub_func_uint16_t_u_u(((l_427 || (l_374 & 0xADE259A7L)) > g_372), l_373))) && l_374) >= l_394))), (-7L))), 0x023F1CE5L)) | 0UL))), l_435)) == p_34)) < 0x72L) || g_372) == g_75) ^ l_435), g_123))), l_417)) != p_33), g_470)) ^ 0x1A2EB81AL)))))), 5)) != p_34)))))), 0x54561179L)) == g_201);
    }
    return l_417;
}







static char func_37(int p_38)
{
    char l_284 = 0x5CL;
    int l_285 = 0x6E526A48L;
    int l_286 = 4L;
    unsigned short l_289 = 3UL;
    if ((l_286 ^= (safe_unary_minus_func_uint32_t_u((l_285 |= ((safe_rshift_func_uint8_t_u_u(0xB1L, 4)) || (l_284 &= p_38)))))))
    {
        g_71 = (safe_sub_func_int32_t_s_s((g_53 | func_41(l_289)), l_284));
    }
    else
    {
        int l_295 = (-1L);
        g_253 = (((-1L) || p_38) & g_253);
        if (p_38)
        {
            l_285 = 1L;
        }
        else
        {
            int l_297 = 0x9D27DC5EL;
            if (g_71)
            {
                unsigned l_299 = 0x3FF211D8L;
                int l_300 = 1L;
                for (g_124 = 0; (g_124 != 36); g_124++)
                {
                    unsigned short l_294 = 65535UL;
                    int l_296 = (-8L);
                    for (g_53 = 0; (g_53 >= 21); g_53 = safe_add_func_int8_t_s_s(g_53, 1))
                    {
                        int l_298 = 0x98AFD053L;
                        l_295 = (l_285 = (l_286 &= l_294));
                        l_297 |= (l_296 = l_284);
                        if (l_298)
                            break;
                    }
                    l_300 |= l_299;
                }
                if (p_38)
                    goto lbl_321;
                l_285 &= (safe_add_func_uint32_t_u_u(((g_201 || (((p_38 == ((~(safe_sub_func_int32_t_s_s(p_38, (((safe_mod_func_int16_t_s_s(3L, 0xE7D0L)) & 0x8FL) <= (safe_mod_func_uint16_t_u_u(p_38, g_181)))))) & (safe_sub_func_uint16_t_u_u(g_53, g_253)))) == g_181) == l_297)) | l_295), l_295));
                l_300 = l_297;
                g_253 = ((safe_add_func_uint16_t_u_u(l_286, (((p_38 < g_201) <= 0xB2L) ^ (l_295 &= (l_300 = ((l_285 ^= g_181) && func_41(g_315))))))) != 246UL);
            }
            else
            {
                for (g_315 = 0; (g_315 > 45); ++g_315)
                {
                    unsigned l_320 = 4294967295UL;
                    for (g_201 = 0; (g_201 == (-5)); g_201 = safe_sub_func_int16_t_s_s(g_201, 6))
                    {
                        l_320 = 0x3F4B22B9L;
                        g_253 |= func_41(g_53);
                        l_297 = ((+(g_124 | (0x7FL == func_41(p_38)))) & 0xC8L);
                        g_71 = p_38;
                    }
                }
                return g_6;
            }
            g_253 |= p_38;
lbl_321:
            l_286 = 0L;
            l_297 |= 0xD4011D43L;
        }
    }
    l_286 = g_315;
    l_286 = ((safe_unary_minus_func_int32_t_s((65529UL || (l_285 = l_286)))) ^ l_289);
    return l_289;
}







static short func_39(unsigned char p_40)
{
    unsigned short l_48 = 0x589AL;
    int l_67 = 0x5375BB79L;
    unsigned short l_102 = 0x3A56L;
    int l_280 = (-4L);
    g_49 = ((l_48 <= p_40) > p_40);
    for (g_49 = (-16); (g_49 > 3); ++g_49)
    {
        unsigned short l_52 = 0x918CL;
        int l_76 = (-7L);
        int l_269 = 7L;
        if (g_6)
        {
            unsigned char l_77 = 252UL;
            unsigned short l_80 = 65528UL;
            int l_122 = 0L;
            g_53 &= (l_52 >= l_52);
            for (g_53 = 0; (g_53 == 1); ++g_53)
            {
                unsigned short l_66 = 65535UL;
                int l_70 = 1L;
                int l_72 = (-4L);
                l_72 = (safe_mod_func_uint8_t_u_u((func_41(l_52) & p_40), (((l_48 == ((safe_add_func_int8_t_s_s(((!((safe_mod_func_uint32_t_u_u(((((l_67 |= (safe_lshift_func_uint8_t_u_s(0xCFL, ((safe_lshift_func_uint8_t_u_s(l_66, 0)) >= func_41((!g_53)))))) & (+(safe_lshift_func_int8_t_s_u((g_71 = l_70), 5)))) == 4294967295UL) & g_6), 9UL)) & l_70)) == p_40), 0L)) | p_40)) <= l_52) | 0UL)));
                for (g_71 = 24; (g_71 <= (-22)); g_71 = safe_sub_func_int8_t_s_s(g_71, 7))
                {
                    g_75 = l_52;
                    l_76 = (0xC9L > g_53);
                }
                if (func_41(((!(+l_77)) >= (safe_add_func_int8_t_s_s(l_80, (safe_add_func_int8_t_s_s((((0xB6D8D46DL != 0xA569FAA3L) < ((g_53 ^ (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(func_41(p_40), p_40)), (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x8724L, 2)), 8L))))) & p_40)) == 0x6C484D54L), p_40)))))))
                {
                    int l_113 = (-9L);
                    int l_120 = 0x81DCF01EL;
                    if (func_41(p_40))
                    {
                        g_71 = ((safe_rshift_func_int8_t_s_u(0xA1L, 7)) >= l_66);
                    }
                    else
                    {
                        int l_101 = 0xD7C7E680L;
                        short l_121 = (-1L);
                        l_67 = ((!0x3FL) > 3UL);
                        l_67 = p_40;
                        l_101 = (g_71 &= (safe_add_func_int32_t_s_s(((((g_125 = ((safe_rshift_func_uint16_t_u_s(func_41((g_124 = ((g_123 = (((safe_sub_func_int32_t_s_s(g_6, (l_122 ^= ((safe_sub_func_uint16_t_u_u(func_41((((l_102 = l_101) <= (safe_lshift_func_uint8_t_u_s((l_77 == ((safe_rshift_func_uint16_t_u_s((l_52 & (safe_add_func_int32_t_s_s((g_75 != (safe_sub_func_uint16_t_u_u(5UL, ((safe_add_func_uint8_t_u_u((l_113 = g_6), ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_77, (func_41((func_41(((safe_add_func_int16_t_s_s((-8L), l_101)) && l_72)) > 0UL)) != 0x6FB9L))), l_101)) != l_70))) ^ 0xE8L)))), p_40))), l_120)) > l_121)), 1))) > 0x23L)), (-5L))) > p_40)))) >= (-6L)) | p_40)) <= (-1L)))), g_53)) & p_40)) >= p_40) >= g_49) >= p_40), 4294967291UL)));
                        l_122 = ((g_125 ^ (((safe_lshift_func_int8_t_s_s(((0UL ^ p_40) ^ ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_101 = func_41((l_72 = l_66))), p_40)), l_66)) & func_41((safe_mod_func_uint32_t_u_u(((g_123 || (((safe_add_func_int32_t_s_s(((p_40 > 0xD978L) ^ l_120), l_121)) != g_53) && l_121)) != g_123), g_75))))), 3)) <= 4294967295UL) | (-1L))) && l_122);
                    }
                    l_72 = (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_40 ^ (9L | ((safe_lshift_func_int16_t_s_s(((l_67 = (safe_lshift_func_uint8_t_u_s((l_70 || p_40), ((((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(g_71, 1)) ^ (g_6 && (safe_mod_func_uint32_t_u_u(g_123, l_120)))), (-1L))), p_40)) && l_72) > 0x065BL) ^ p_40)))) || l_113), 6)) == (-9L)))), 0)), l_76)) & l_66) == g_53);
                    if (((l_67 ^= g_75) | 255UL))
                    {
                        g_71 = g_53;
                        l_67 |= (!l_48);
                        l_120 = ((safe_mod_func_uint16_t_u_u(p_40, 0x2CBAL)) | ((safe_add_func_uint8_t_u_u(0x79L, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(4L, 0)), 0)) == 0x9850BAFFL))) > g_6));
                    }
                    else
                    {
                        g_176 = (((g_75 & l_122) == (safe_lshift_func_int16_t_s_s(l_76, (((((g_6 != p_40) == (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(((g_71 |= (l_67 = 0x2223408EL)) > (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_6, ((((safe_lshift_func_int16_t_s_u((0x10L && (safe_rshift_func_int8_t_s_s((~((func_41(func_41(l_113)) ^ 0x8F72B244L) || 1L)), g_49))), g_123)) || g_53) ^ 0x5366L) ^ 0xED5E1251L))) > 0UL), p_40))), g_53)) > 0x1287A51EL) > (-3L)), g_53))) && g_75) ^ 0x435DL) ^ 0xC8L)))) != p_40);
                    }
                    return g_75;
                }
                else
                {
                    unsigned short l_182 = 0xAF55L;
                    l_72 = p_40;
                    if (((g_124 || (g_181 = (safe_mod_func_int8_t_s_s(0x99L, (safe_add_func_int8_t_s_s(0xD0L, g_71)))))) >= g_176))
                    {
                        g_71 ^= func_41((p_40 <= (65535UL < 1L)));
                        l_182 = (g_176 ^ func_41(g_125));
                    }
                    else
                    {
                        int l_183 = (-1L);
                        l_183 &= 0x8FB61F0DL;
                        if (l_182)
                            break;
                        l_122 = ((g_123 >= (~0UL)) && func_41(g_181));
                    }
                }
            }
            return p_40;
        }
        else
        {
            unsigned short l_186 = 1UL;
            int l_222 = 4L;
            unsigned short l_252 = 0xA347L;
            int l_258 = 0x10044AA3L;
            g_201 = (g_71 = (safe_rshift_func_int16_t_s_s(func_41((l_186 & (((((((safe_mod_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(func_41(g_181), (safe_rshift_func_uint16_t_u_s(((-4L) ^ (((safe_sub_func_int16_t_s_s(func_41(g_6), (safe_lshift_func_int16_t_s_s((+((safe_mod_func_uint8_t_u_u(l_186, (l_76 &= 0x99L))) < (0xD44B8B31L < l_48))), l_52)))) <= g_124) == g_75)), g_124)))) | 4294967287UL) || l_102) > l_48), g_49)) == g_53) && p_40) > l_186) ^ p_40) ^ 0x91L) < g_176))), p_40)));
            for (p_40 = (-28); (p_40 == 39); p_40 = safe_add_func_int32_t_s_s(p_40, 6))
            {
                unsigned l_226 = 4294967295UL;
                int l_229 = (-1L);
                for (g_123 = 0; (g_123 > 39); ++g_123)
                {
                    char l_208 = 1L;
                    const short l_221 = 0xCA71L;
                    for (l_102 = 23; (l_102 == 45); l_102 = safe_add_func_uint32_t_u_u(l_102, 9))
                    {
                        unsigned short l_211 = 0x36E2L;
                        int l_225 = 1L;
                        g_71 = (0xC323CAD4L != ((l_208 &= 0L) | 0x9FL));
                        l_67 = (l_52 ^ (safe_rshift_func_uint8_t_u_s(((((g_201 &= (l_211 >= ((((((safe_mod_func_uint8_t_u_u((~(((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(7L, ((g_124 < 0x93L) & ((((g_176 ^= (l_222 ^= (safe_sub_func_int16_t_s_s((0UL | g_6), l_221)))) != func_41((safe_rshift_func_uint8_t_u_s(func_41(l_208), 3)))) > l_225) < p_40)))), 7)) != 0xE24A4532L))) >= g_124) > p_40)), g_124)) ^ 0x7BL) >= l_48) > 0L) | 0UL) || g_124))) || p_40) && 0L) | l_221), l_186)));
                        l_222 = l_226;
                    }
                    l_222 = (safe_rshift_func_int16_t_s_s(0x2BA5L, func_41(func_41(l_102))));
                    g_71 = 3L;
                }
                l_229 = l_226;
                if ((((safe_unary_minus_func_uint8_t_u(p_40)) <= (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_40, (func_41(g_125) >= (safe_mod_func_int32_t_s_s((((g_124 | ((((safe_rshift_func_int8_t_s_u(g_71, ((l_222 < (safe_unary_minus_func_uint16_t_u(l_226))) == l_226))) || (-10L)) & g_181) == 0x9FAA199BL)) > 1UL) & 0x3AL), p_40))))), g_125)), l_52))) <= l_229))
                {
                    unsigned short l_254 = 0xA3EDL;
                    l_254 = (p_40 > (((0xB4L != g_53) ^ (g_253 |= (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(0x4238L, (l_76 ^ g_124))) != ((safe_lshift_func_uint16_t_u_s(g_71, 8)) & (-6L))), (g_125 |= func_41((l_67 = (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((l_222 ^ g_49), 0x77L)) ^ l_252), p_40))))))))) & g_49));
                    l_67 = 0x44C72F99L;
                }
                else
                {
                    l_258 = (safe_lshift_func_uint16_t_u_s((p_40 >= (safe_unary_minus_func_int16_t_s((l_222 = g_49)))), 0));
                }
                g_253 = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((l_76 = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((l_269 |= ((l_67 = l_76) || (-1L))), ((safe_lshift_func_int16_t_s_u(l_76, (safe_rshift_func_uint8_t_u_s(p_40, ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(p_40, (0xCDL <= p_40))) == (safe_rshift_func_uint16_t_u_u((func_41(l_280) ^ g_181), 0))), l_52)) ^ 0x3555BB47L))))) || g_201))), 7)) >= p_40), g_124))) && p_40), g_71)) | p_40), 1UL));
            }
        }
        return g_123;
    }
    return p_40;
}







static unsigned char func_41(unsigned char p_42)
{
    char l_47 = 0x9CL;
    l_47 = g_6;
    return g_6;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_958, "g_958", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
