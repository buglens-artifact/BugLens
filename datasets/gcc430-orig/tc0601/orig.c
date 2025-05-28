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



static short g_35 = (-1L);
static char g_64 = 0x5AL;
static unsigned g_92 = 0xF57B8DD8L;
static unsigned g_122 = 0x34BCD699L;
static unsigned short g_127 = 3UL;
static int g_152 = 0x989D15E5L;
static unsigned char g_188 = 0x49L;
static unsigned char g_249 = 254UL;
static short g_313 = 0xF8BCL;
static short g_316 = 0x0E8EL;
static unsigned short g_317 = 1UL;
static unsigned g_320 = 4294967286UL;
static unsigned g_335 = 0xF2D6018BL;
static int g_364 = 0L;
static unsigned char g_370 = 0UL;
static int g_373 = 0x4AE5B25DL;
static unsigned g_374 = 0x3C87D683L;
static int g_507 = 0xD2834BC2L;
static int g_531 = 3L;
static unsigned char g_532 = 255UL;
static int g_536 = 0x52DD61B0L;
static unsigned short g_538 = 1UL;
static unsigned g_544 = 4294967295UL;
static unsigned char g_582 = 0xA6L;
static unsigned short g_599 = 65532UL;
static short g_605 = 1L;
static unsigned short g_606 = 1UL;
static char g_618 = 0x69L;
static unsigned short g_619 = 0xC8B6L;
static unsigned char g_626 = 1UL;
static const unsigned g_766 = 0xC6A24997L;
static unsigned short g_773 = 0xD278L;
static int g_824 = 1L;
static char g_826 = 0x30L;
static int g_827 = (-1L);
static short g_832 = 0x682FL;
static unsigned g_833 = 1UL;
static short g_1047 = 0L;
static short g_1114 = 0xE0F2L;
static unsigned g_1121 = 0x4252D789L;



static const unsigned func_1(void);
static unsigned short func_2(unsigned p_3, unsigned p_4);
static char func_6(short p_7, int p_8, unsigned p_9, int p_10);
static unsigned short func_16(int p_17, int p_18);
static unsigned func_19(unsigned p_20, short p_21, unsigned char p_22, char p_23);
static unsigned char func_24(unsigned short p_25, const char p_26, unsigned short p_27, int p_28);
static char func_31(const short p_32, int p_33, int p_34);
static unsigned char func_39(unsigned p_40, short p_41, int p_42);
static int func_43(unsigned char p_44, int p_45, const char p_46, int p_47);
static char func_48(char p_49);
static const unsigned func_1(void)
{
    const unsigned char l_13 = 0xBFL;
    unsigned short l_627 = 0xCD85L;
    const char l_648 = 0x57L;
    int l_697 = 0x5B720F06L;
    int l_998 = 0x2FF90474L;
    unsigned short l_1012 = 8UL;
    short l_1020 = (-10L);
    const int l_1122 = (-1L);
    unsigned l_1123 = 0xACA297F6L;
lbl_1077:
    l_998 ^= ((func_2(((((((((0xA4BEL && (safe_unary_minus_func_int8_t_s(func_6((l_13 | ((safe_lshift_func_uint16_t_u_u(((func_16((func_19((((((func_24(((((safe_sub_func_int8_t_s_s(func_31(l_13, l_13, l_13), ((0xC1BFL <= (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((g_507 , (g_618 != g_626)), 0x66L)), g_626))) | l_13))) || g_370) >= g_531) , 0xC8FAL), l_13, g_531, l_627) != l_13) | 8L) , 0x55B5L) >= l_648) >= l_648), l_627, g_626, g_531) , l_627), g_626) , l_13) < 7L), l_13)) <= 0x33L)), g_618, l_697, l_627)))) | 65535UL) , g_532) != 0x78FDL) > l_697) ^ 0x8C4A2573L) != g_826) , 0xEA7B5E2FL), l_648) == 7L) && l_648);
    for (g_64 = 15; (g_64 < 20); g_64 = safe_add_func_uint8_t_u_u(g_64, 5))
    {
        unsigned char l_1007 = 0xD1L;
        int l_1025 = 0x8D5D35A4L;
        char l_1100 = 0xE3L;
        int l_1101 = 0x89A6789BL;
        for (g_373 = 22; (g_373 >= (-7)); g_373--)
        {
            unsigned l_1015 = 0x3FFD8D21L;
            int l_1026 = 0x26912B13L;
            unsigned l_1045 = 18446744073709551615UL;
            l_998 = (safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((g_531 , (l_1007 , (0x5606L <= (g_618 == l_627)))), ((g_824 <= ((safe_div_func_uint8_t_u_u(((l_1012 == (g_626 < (safe_rshift_func_int16_t_s_s((((l_697 > g_317) , l_1007) != l_1015), l_1015)))) > 1L), l_1007)) == 0x931FE16AL)) <= l_1015))) , 0x5345FF30L), l_1007));
            if (g_619)
                continue;
            if ((((0x21470EFDL || 0x10E455C4L) != (((l_1015 >= (safe_rshift_func_uint16_t_u_s(g_531, (safe_add_func_int16_t_s_s((l_1020 , ((safe_lshift_func_uint8_t_u_s(1UL, 2)) ^ (safe_mod_func_uint8_t_u_u((l_13 < l_1025), l_1026)))), l_1026))))) >= 1UL) > l_1020)) , 1L))
            {
                const unsigned char l_1044 = 253UL;
                int l_1062 = (-3L);
                for (g_316 = 16; (g_316 != (-8)); g_316 = safe_sub_func_uint8_t_u_u(g_316, 2))
                {
                    unsigned short l_1063 = 2UL;
                    for (l_627 = 0; (l_627 < 42); ++l_627)
                    {
                        int l_1046 = 1L;
                        l_1045 = ((l_1012 <= (!g_531)) & (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((g_317 <= (safe_rshift_func_uint16_t_u_s(g_832, 7))), l_697)) ^ g_582), ((((((safe_add_func_uint32_t_u_u((l_1044 , (g_605 && (g_507 == l_1044))), l_1026)) & g_364) ^ g_316) || g_827) || l_1025) & g_316))), 3)))));
                        g_152 |= l_1046;
                        l_1026 = g_1047;
                    }
                    for (g_317 = 3; (g_317 < 12); ++g_317)
                    {
                        int l_1060 = 2L;
                        int l_1061 = 0x17C50F3BL;
                        g_152 ^= ((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(l_1045, ((safe_lshift_func_uint16_t_u_u(l_998, (((l_998 , (g_536 <= (g_127 > g_824))) , l_1060) >= g_619))) & (l_1060 , 0x5EL)))), l_1045)), 252UL)) , 0xAA8FEB24L);
                        l_1061 = (255UL > g_833);
                    }
                    --l_1063;
                    g_364 = (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(0x41L, (g_833 & (g_773 > (safe_lshift_func_int8_t_s_u((l_1063 , (safe_unary_minus_func_int8_t_s(((((g_538 == (l_1025 == ((l_697 != (((safe_div_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(l_1007, (g_532 | l_1045))) && l_1063) == 1UL), l_1044)) > g_832) != g_833)) , l_1063))) | 7L) & g_619) , g_35)))), l_1026)))))), 12));
                }
                if (g_605)
                    continue;
            }
            else
            {
                if (g_538)
                    goto lbl_1077;
            }
        }
        g_373 = (l_648 < (safe_rshift_func_uint8_t_u_u(0xF2L, l_1025)));
        for (g_249 = 17; (g_249 > 3); g_249 = safe_sub_func_int32_t_s_s(g_249, 3))
        {
            char l_1102 = (-6L);
            short l_1113 = 1L;
            l_1101 &= ((safe_div_func_uint8_t_u_u((((g_618 != ((safe_lshift_func_int8_t_s_s((g_536 && (safe_lshift_func_int16_t_s_u((l_1020 < g_373), ((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(0xCC8EA6CFL, (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((l_1007 , ((((l_1007 ^ g_538) , (safe_sub_func_uint16_t_u_u((g_766 | 0x58L), l_1025))) ^ 0L) && 0L)), l_697)) , g_335), (-1L))))), 2UL)), g_364)) , 0x17E9L)))), 5)) ^ l_1100)) ^ 0xBDL) , g_335), (-5L))) > l_1007);
            if (g_152)
                continue;
            g_364 &= ((l_1102 & (g_824 >= ((safe_div_func_int16_t_s_s((l_1020 || (((safe_sub_func_int32_t_s_s(((g_35 == ((g_1047 == (safe_rshift_func_int16_t_s_u(g_249, 4))) && (safe_rshift_func_uint8_t_u_s((((safe_div_func_int8_t_s_s((l_1020 <= ((+(g_827 , ((0x9609L >= g_544) != g_320))) != g_127)), l_1012)) | g_582) , l_1102), 3)))) > l_1102), g_313)) | g_827) >= l_1102)), l_1113)) >= l_1101))) || 0x32FAL);
        }
        g_1114 = g_316;
    }
    g_827 |= func_19(g_832, (!((safe_sub_func_int32_t_s_s(g_619, ((((((safe_add_func_uint32_t_u_u(func_24((func_19((0x7B8874CCL | (((safe_sub_func_int8_t_s_s(func_39(l_1020, l_627, g_1121), g_544)) == ((((((1L && 0x52L) > l_13) >= l_998) & 0xA64E968AL) , g_35) > g_313)) > l_627)), g_582, g_538, l_648) , 65527UL), l_1122, g_1047, g_599), l_627)) && g_626) > l_998) && 3L) , 65535UL) && 0xC45EL))) , (-2L))), g_313, l_1123);
    return l_1012;
}







static unsigned short func_2(unsigned p_3, unsigned p_4)
{
    const char l_985 = 0x04L;
    int l_997 = (-1L);
    l_997 = func_31(l_985, ((l_985 > (-6L)) < ((func_16(l_985, ((safe_unary_minus_func_uint32_t_u((!((safe_sub_func_int16_t_s_s((l_985 , (safe_lshift_func_uint8_t_u_s(l_985, 1))), (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_985, 4)), g_64)))) ^ (safe_mod_func_int16_t_s_s((p_3 <= g_320), l_985)))))) , 0xED7A314BL)) == p_3) | p_3)), g_773);
    return l_985;
}







static char func_6(short p_7, int p_8, unsigned p_9, int p_10)
{
    unsigned l_702 = 0xF24BA6ECL;
    unsigned char l_703 = 0xC5L;
    short l_712 = (-3L);
    short l_717 = (-1L);
    int l_727 = (-10L);
    int l_756 = 7L;
    int l_887 = 0x0FCB9467L;
    char l_901 = 7L;
    int l_907 = 0x853FCE0DL;
    int l_909 = 1L;
    int l_910 = 0L;
    int l_911 = 0L;
    unsigned l_915 = 0x1AB63CDEL;
    if ((func_39(func_39(((safe_mod_func_int8_t_s_s((((((safe_mod_func_int32_t_s_s(((0x3CL == 0xF3L) == (func_19(l_702, l_703, ((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((p_7 ^ (func_19(g_538, l_702, (safe_div_func_uint8_t_u_u(g_544, ((func_16((p_9 , 0xC3AF9F30L), g_373) , g_507) && l_712))), p_7) != p_9)) , (-9L)), l_702)) , 9L), (-1L))) || p_8), l_703) | 0x1DL)), l_703)) , l_702) < 0x1E1FL) != g_188) && g_313), 0x8CL)) | 65535UL), g_606, g_606), p_8, l_702) > g_370))
    {
        unsigned l_718 = 0xC1664A09L;
        unsigned l_728 = 1UL;
        unsigned l_759 = 8UL;
        int l_769 = (-8L);
        int l_780 = 0x3473B588L;
        unsigned short l_796 = 9UL;
        int l_828 = 0xCE31727CL;
        int l_860 = 1L;
        unsigned short l_886 = 0UL;
        if (func_19(((safe_sub_func_uint8_t_u_u(((7UL ^ (safe_sub_func_uint32_t_u_u(((0xB57DC77BL >= p_9) < 8L), l_717))) > (g_370 == l_718)), (safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(l_718, ((safe_div_func_uint8_t_u_u(p_10, l_717)) && p_8))) <= l_727) | 0UL), 65533UL)) , p_7), l_718)))) <= p_8), p_8, l_728, g_618))
        {
            unsigned char l_739 = 0x5AL;
            const char l_768 = 0xCBL;
            int l_771 = 0xDBD2D8FBL;
            for (g_316 = 0; (g_316 == (-6)); g_316 = safe_sub_func_uint32_t_u_u(g_316, 4))
            {
                const int l_743 = 0x561614DBL;
                int l_770 = 0xEF23E98FL;
                int l_772 = (-1L);
                for (g_599 = 0; (g_599 < 31); g_599 = safe_add_func_int16_t_s_s(g_599, 8))
                {
                    unsigned l_742 = 0UL;
                    for (p_9 = 0; (p_9 == 35); p_9 = safe_add_func_uint16_t_u_u(p_9, 1))
                    {
                        int l_767 = 8L;
                        p_8 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_8, (func_43(l_739, g_92, ((safe_mod_func_int16_t_s_s(((l_742 ^ g_619) , (l_743 & (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_728, func_48((safe_rshift_func_int16_t_s_s(l_742, (((-8L) || 0xFD4D83A5L) == (-2L))))))), g_618)))), l_718)) < p_7), g_599) <= l_739))), p_7));
                        p_8 = (((safe_sub_func_int8_t_s_s(((((+((safe_mod_func_int32_t_s_s((0x76B0B98EL ^ ((safe_add_func_uint16_t_u_u((l_756 , ((p_10 || (safe_sub_func_int16_t_s_s(l_759, (safe_mod_func_uint8_t_u_u(func_43(((safe_rshift_func_int8_t_s_u(l_742, 7)) | l_742), func_39(((safe_div_func_uint32_t_u_u(0x71649FDDL, g_599)) , ((g_335 < p_7) >= g_766)), l_767, g_35), l_768, g_370), 0xDEL))))) || g_320)), 0x54AEL)) , 0x7984DAF9L)), g_249)) || 9L)) <= 0UL) == (-1L)) == 0xBCL), 0xDFL)) != g_536) && 0xB781E068L);
                    }
                    l_769 = g_374;
                    g_536 = (l_769 ^ 4294967292UL);
                    return g_370;
                }
                --g_773;
            }
            g_536 |= (func_43(p_7, g_766, ((p_9 | p_8) , (l_717 > g_364)), func_48((!(func_48(l_728) & ((~(((safe_sub_func_uint16_t_u_u(p_10, l_769)) , (-6L)) != 0x3EL)) < g_35))))) > 0x6D71C37CL);
        }
        else
        {
            unsigned short l_791 = 1UL;
            g_364 ^= (((((p_7 ^ ((safe_mod_func_uint8_t_u_u(func_48(p_8), l_780)) , (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((+((safe_sub_func_int8_t_s_s(g_335, ((((-1L) & p_8) <= (safe_rshift_func_uint16_t_u_s(p_8, p_7))) < l_791))) , 0xD4L)), p_7)) , l_769) , l_791), g_582)), g_373)))) < l_727) != 7UL) != l_717) , g_373);
            if ((safe_sub_func_int32_t_s_s(p_9, p_10)))
            {
                char l_797 = (-7L);
                unsigned l_800 = 18446744073709551608UL;
                l_800 = ((+(((~(safe_sub_func_int8_t_s_s(2L, l_796))) , l_797) , (+p_8))) && (safe_lshift_func_uint16_t_u_s(g_370, 3)));
            }
            else
            {
                int l_803 = (-1L);
                int l_804 = 0xDE571D56L;
                g_536 |= (-1L);
                if ((func_24(g_92, g_313, (((safe_lshift_func_int16_t_s_u((func_16(l_703, (func_48(p_10) , 3L)) >= 0x4CDCL), g_618)) , 252UL) > g_313), g_92) , l_796))
                {
                    char l_805 = 0L;
                    unsigned l_806 = 18446744073709551613UL;
                    int l_814 = (-6L);
                    int l_825 = 0x5A2908DCL;
                    int l_830 = (-6L);
                    int l_831 = 8L;
lbl_813:
                    l_806++;
                    for (g_320 = (-7); (g_320 > 25); g_320 = safe_add_func_int8_t_s_s(g_320, 6))
                    {
                        g_536 = (safe_rshift_func_uint16_t_u_u(p_8, (3UL ^ func_48(l_769))));
                    }
                    p_8 |= func_48(g_536);
                    if (g_532)
                    {
                        unsigned l_823 = 18446744073709551615UL;
                        if (g_320)
                            goto lbl_813;
                        g_824 |= ((func_24(g_317, g_122, l_814, (!(func_24(((safe_lshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s(func_48((0x245D39CDL <= (l_712 >= (((safe_add_func_int16_t_s_s((g_773 , func_16(p_7, g_626)), l_823)) ^ g_249) > p_9)))), l_756)) <= g_544), 0xF7L)) >= g_599), 15)) , p_10), l_791, l_823, g_618) , g_531))) , 0xC38C580DL) != g_122);
                    }
                    else
                    {
                        char l_829 = 0xD4L;
                        ++g_833;
                        p_8 &= (safe_mod_func_int32_t_s_s(((l_829 & (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_9 & (l_829 >= func_19((((p_10 ^ g_599) != (((l_830 > l_829) , ((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((((l_829 , (((g_374 & g_316) , (-1L)) | g_827)) != g_320) && l_829) != g_532), p_9)), l_791)) && p_9)) < g_536)) <= l_804), p_9, l_717, l_803))), 255UL)), 3))) == 0x3A9BL), 0x38BECCF0L));
                    }
                }
                else
                {
                    return p_7;
                }
                p_8 = 1L;
                return g_317;
            }
            p_8 = ((safe_mod_func_int16_t_s_s((l_828 <= (safe_lshift_func_int16_t_s_u((p_9 | func_43((((((0x53L < p_7) ^ (((p_7 <= func_31((((g_538 , l_791) == (safe_div_func_int32_t_s_s(((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_div_func_int32_t_s_s(((func_48(((safe_mod_func_uint16_t_u_u((g_538 | (((func_19((p_9 ^ 0xBEL), l_717, l_718, g_826) <= l_791) & l_860) || l_703)), g_317)) , (-1L))) , g_827) || 0x20L), p_10)) == g_374) | p_8), l_791)), g_532)) ^ 0UL), g_826))) <= p_8), g_92, l_718)) , p_9) , g_188)) == p_9) > l_791) >= p_7), p_8, g_618, g_313)), g_626))), p_7)) , p_10);
            if (g_313)
            {
                p_8 = g_320;
            }
            else
            {
                unsigned l_861 = 4294967295UL;
                --l_861;
            }
        }
        if (l_828)
        {
            unsigned short l_873 = 0x6865L;
            for (g_618 = 0; (g_618 <= 14); g_618++)
            {
                unsigned l_866 = 4294967295UL;
                g_364 = g_773;
                --l_866;
                p_8 = (safe_sub_func_int16_t_s_s(((((func_43(g_766, p_8, ((((((!func_24(p_8, p_8, p_10, (safe_sub_func_int8_t_s_s(((1UL >= ((g_122 >= 0L) , (l_866 ^ g_127))) <= p_7), p_10)))) < g_536) == l_769) && p_7) & (-1L)) , 0L), p_7) <= 1UL) , 0xBDL) , p_9) | l_718), p_9));
            }
            l_887 &= func_24(g_532, g_374, l_873, (safe_mod_func_int32_t_s_s(((g_374 & ((((((safe_sub_func_int8_t_s_s(l_756, ((((((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_373 || (safe_add_func_uint16_t_u_u((g_544 , (g_364 > l_717)), p_9))), l_886)), l_828)), 0x5CL)) == g_619) < l_717) || 0x0D902A3CL) , p_7) , (-1L)))) < (-8L)) , p_7) && 1UL) || g_313) , l_712)) ^ l_873), g_599)));
        }
        else
        {
            unsigned char l_890 = 1UL;
            g_827 = p_7;
            if ((safe_sub_func_int16_t_s_s(l_828, p_8)))
            {
                p_8 = p_9;
                return l_890;
            }
            else
            {
                return l_890;
            }
        }
        l_828 ^= (func_39(p_10, p_7, p_8) && l_728);
        p_8 = p_10;
    }
    else
    {
        unsigned l_896 = 0xF15580BCL;
        int l_902 = (-1L);
        int l_903 = 0x190854E4L;
        int l_904 = 6L;
        int l_905 = 1L;
        int l_906 = 0x4763C835L;
        int l_908 = 0x9D1839D2L;
        int l_912 = 0xC85AB6E2L;
        int l_913 = 0x94C49BCCL;
        int l_914 = 7L;
        g_827 = (g_599 <= ((safe_unary_minus_func_uint8_t_u(((p_9 & (g_766 , p_7)) > func_39(((safe_lshift_func_int16_t_s_s((((g_826 , func_43((safe_rshift_func_uint8_t_u_u(l_896, (p_9 > func_16((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(func_24(p_7, g_313, l_896, g_188), 0xDD0EL)), l_896)), p_9)))), g_532, p_7, l_756)) == 1UL) , g_531), g_538)) ^ p_8), g_582, p_7)))) & 0x8EL));
        ++l_915;
        if ((safe_rshift_func_int16_t_s_u(g_92, l_712)))
        {
            return p_7;
        }
        else
        {
            unsigned l_924 = 0x257BCA06L;
            g_364 = (safe_div_func_int16_t_s_s((0L ^ ((safe_add_func_int8_t_s_s(((l_924 <= (safe_add_func_int32_t_s_s((p_7 , g_127), (safe_lshift_func_uint16_t_u_s((((l_712 , (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((-1L), (safe_mod_func_int16_t_s_s(g_35, func_39(g_317, ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x7C0EL, l_912)), g_826)) == l_924), l_902))))), 0x0CL))) & l_903) , l_914), 1))))) != 5UL), p_7)) ^ l_912)), p_7));
            p_8 = (l_924 , (-2L));
            l_756 &= ((safe_add_func_uint32_t_u_u(1UL, ((((((l_924 | (safe_sub_func_int32_t_s_s((l_901 , (func_16(func_19((safe_sub_func_uint8_t_u_u(251UL, g_335)), (~g_606), (safe_lshift_func_uint8_t_u_u(((p_9 , (safe_lshift_func_int16_t_s_u(g_826, ((+(p_7 , p_8)) | g_373)))) && g_532), l_924)), l_702), g_826) != g_826)), 1UL))) > 65526UL) || l_910) , g_64) == 0x47L) && l_904))) , g_364);
            g_364 = (65535UL > (0x5FA00117L > 0xAD13B16BL));
        }
        for (g_618 = 0; (g_618 != (-4)); g_618 = safe_sub_func_uint8_t_u_u(g_618, 7))
        {
            unsigned char l_965 = 255UL;
            p_8 = p_10;
            p_8 |= g_188;
            p_8 = (safe_mod_func_uint8_t_u_u(255UL, (func_31((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((((func_19(g_335, p_7, l_902, ((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((func_48((safe_sub_func_uint16_t_u_u(0x2680L, ((((safe_add_func_uint32_t_u_u(1UL, 1UL)) , func_24(l_910, p_10, l_965, g_582)) , p_8) < g_317)))) , l_965) & 0x60L), g_127)), l_904)) , p_10)) , g_317) != g_317) , g_335), l_702)) <= 0xA4F61890L), l_910)), g_249, p_10) && g_766)));
            for (g_532 = 0; (g_532 <= 5); g_532 = safe_add_func_int16_t_s_s(g_532, 2))
            {
                unsigned l_968 = 18446744073709551615UL;
                int l_984 = 0xA57077ADL;
                l_968 = func_39(l_965, ((((p_10 | 0x6C605BDDL) , ((g_619 , l_965) > ((p_8 , (65535UL >= func_48(func_24(p_10, g_538, p_7, g_619)))) , p_9))) , 3UL) ^ l_896), l_903);
                l_984 |= (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s(0x2A9CL, (func_24(l_968, ((p_10 > (func_48((g_832 , func_39((!g_335), g_335, (l_965 , ((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_968, 2)), g_626)), 0x8DL)) >= 1UL), l_965)) || 0UL))))) < 65535UL)) , p_8), p_10, g_827) , g_626))))) >= 0x0DA0A2EFL) == l_908), p_9)) != p_10), 0));
            }
        }
    }
    return g_833;
}







static unsigned short func_16(int p_17, int p_18)
{
    int l_679 = 1L;
    int l_696 = (-6L);
    g_536 = l_679;
    for (g_35 = (-19); (g_35 == (-23)); g_35 = safe_sub_func_int16_t_s_s(g_35, 4))
    {
        unsigned l_695 = 0UL;
        for (g_619 = 0; (g_619 != 24); ++g_619)
        {
            unsigned l_694 = 0xBD60C2CAL;
            l_696 ^= (0x9513A694L > ((safe_mod_func_int32_t_s_s(g_626, ((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u(((p_18 <= ((safe_sub_func_int32_t_s_s((func_19(g_370, g_507, (l_694 <= (((~(g_64 != 0xFF710316L)) == p_17) && g_619)), g_605) , l_679), g_374)) < l_695)) == g_531), p_17)) & g_249), 0)) , l_694))) && 0xAD06L));
        }
    }
    return l_679;
}







static unsigned func_19(unsigned p_20, short p_21, unsigned char p_22, char p_23)
{
    unsigned char l_655 = 0xA9L;
    if (g_313)
    {
        return g_544;
    }
    else
    {
        unsigned l_662 = 18446744073709551608UL;
        const int l_663 = 0L;
        g_373 = (safe_div_func_uint8_t_u_u(p_22, (safe_sub_func_int8_t_s_s((~(((safe_rshift_func_int16_t_s_u((p_21 < 0x9FL), 2)) , l_655) >= l_655)), (0xCEF5L & g_92)))));
        for (g_127 = (-4); (g_127 == 23); g_127 = safe_add_func_uint32_t_u_u(g_127, 8))
        {
            unsigned l_658 = 1UL;
            int l_659 = 0x7A6C1F45L;
            l_659 = l_658;
            g_364 = ((safe_lshift_func_uint8_t_u_u(p_20, (p_20 && func_24(func_24(g_64, l_655, l_662, l_658), (!l_658), g_35, g_544)))) , l_663);
            if (p_21)
                continue;
            l_659 = (((l_655 , (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_22, (safe_lshift_func_uint8_t_u_u((g_605 == (((safe_unary_minus_func_int8_t_s((0xC7904E68L >= (safe_add_func_uint8_t_u_u(g_536, (safe_sub_func_int8_t_s_s((g_582 || 251UL), (g_249 > g_317)))))))) , 0x1435L) & l_658)), 4)))), p_23)), p_22))) <= g_507) | g_618);
        }
        g_373 = (safe_sub_func_uint16_t_u_u(p_22, p_21));
    }
    return g_122;
}







static unsigned char func_24(unsigned short p_25, const char p_26, unsigned short p_27, int p_28)
{
    unsigned l_628 = 2UL;
    l_628++;
    for (g_320 = (-10); (g_320 > 30); g_320++)
    {
        unsigned short l_634 = 0xEA45L;
        int l_645 = 0xB448D8EBL;
        g_152 = (((~(safe_unary_minus_func_int16_t_s((l_634 ^ ((safe_div_func_int16_t_s_s(func_39((p_28 & ((func_48((!l_628)) <= g_599) != (safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((0x245588A1L | ((p_25 > ((safe_sub_func_int32_t_s_s((((p_26 , (l_628 < l_634)) <= g_626) , l_628), l_628)) <= p_27)) < l_634)), g_507)) <= 0x85L), p_28)))), g_507, g_626), p_28)) , p_25))))) || 253UL) & (-1L));
        l_645 = (g_606 , ((0x2CBAL | l_634) ^ func_48(p_28)));
        for (g_316 = 0; (g_316 > 26); g_316++)
        {
            return p_26;
        }
    }
    return p_27;
}







static char func_31(const short p_32, int p_33, int p_34)
{
    const unsigned char l_38 = 255UL;
    int l_215 = (-5L);
    int l_312 = 1L;
    int l_315 = 0x32D318F0L;
    int l_333 = 0x75BB1642L;
    unsigned char l_377 = 254UL;
    char l_381 = 0x67L;
    unsigned l_464 = 0x412B05DBL;
    unsigned l_468 = 0x508354CCL;
    unsigned short l_480 = 0x99F0L;
    unsigned short l_551 = 65535UL;
    if ((((g_35 , (safe_rshift_func_int8_t_s_u(p_33, 7))) == (!l_38)) , ((((func_39(l_38, ((p_33 < (1UL >= func_43(l_38, (((p_32 & (func_48(((l_38 == 0UL) >= 0xCE324E81L)) | 0xC8L)) < l_38) | 0UL), p_33, p_34))) , (-7L)), l_38) <= 0x4EL) < g_188) >= l_38) , l_38)))
    {
        short l_199 = 0xF070L;
        int l_200 = 1L;
        char l_296 = 5L;
        int l_354 = 0x6E790414L;
lbl_250:
        l_200 = (((safe_add_func_int8_t_s_s((g_188 <= ((safe_lshift_func_int16_t_s_u(((-7L) >= ((safe_sub_func_int8_t_s_s(func_43(g_152, p_32, (g_122 , ((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(func_48(l_38), (p_33 <= p_34))), p_32)) >= (-10L))), p_33), 0xDFL)) , l_199)), 13)) == p_33)), 0L)) > p_33) < p_34);
        if (g_127)
        {
            short l_210 = 1L;
            int l_225 = 7L;
            unsigned short l_245 = 0x4CE0L;
            if (g_35)
            {
                unsigned l_201 = 18446744073709551615UL;
                g_152 = ((func_39((l_201 , (safe_rshift_func_uint16_t_u_s(l_38, (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(l_210, g_127)) , ((safe_lshift_func_uint8_t_u_u(p_33, 7)) && ((((l_200 != g_127) && (p_33 > (p_32 ^ g_35))) >= 0x6CD9F983L) , l_38))) <= l_38), p_34)) == p_33) != l_201), l_38))))), g_127, p_33) || 1UL) > g_92);
                for (l_199 = (-29); (l_199 != 27); l_199 = safe_add_func_int16_t_s_s(l_199, 2))
                {
                    l_200 = l_201;
                    p_34 |= l_215;
                }
            }
            else
            {
                int l_220 = 0x64DA32A0L;
                int l_246 = (-1L);
                p_34 = (safe_lshift_func_uint8_t_u_u(((p_33 < ((0x2A20L >= (safe_add_func_uint16_t_u_u(p_34, (g_152 || (l_220 , (p_32 >= g_188)))))) <= (func_48(l_220) || 0x8DL))) , g_35), 0));
                for (g_64 = 0; (g_64 == (-8)); --g_64)
                {
                    const int l_229 = (-2L);
                    for (g_188 = 4; (g_188 <= 35); g_188 = safe_add_func_uint32_t_u_u(g_188, 5))
                    {
                        unsigned l_226 = 0xE2510918L;
                        l_225 = g_152;
                        l_226--;
                    }
                    if (g_127)
                    {
                        l_225 = g_152;
                    }
                    else
                    {
                        unsigned l_244 = 8UL;
                        l_246 = (((0x3072L == g_188) && l_229) > ((p_34 , (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((g_35 != (safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((~g_122) & (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_122 , (((((((((p_33 >= (safe_rshift_func_int8_t_s_u((g_92 <= l_229), 6))) , l_200) && 2L) > p_33) < p_33) != 0xD1B0L) , p_34) >= l_215) <= p_32)), 0)), g_127))), l_244)) && l_245), 6))), p_32)) >= 0x68L) || l_229), g_35))) > p_32));
                    }
                    for (g_152 = (-29); (g_152 > (-17)); g_152 = safe_add_func_uint8_t_u_u(g_152, 5))
                    {
                        g_249 = 8L;
                        if (p_34)
                            goto lbl_250;
                        if (p_32)
                            break;
                        if (p_32)
                            break;
                    }
                }
            }
            l_200 = (-1L);
            g_152 = (safe_div_func_int8_t_s_s(g_188, 246UL));
        }
        else
        {
            short l_255 = 0x0634L;
            int l_301 = 0xFF2BF14AL;
            int l_308 = (-10L);
            if ((safe_sub_func_uint16_t_u_u((((l_255 <= func_43(func_39(l_255, l_38, (((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((p_33 != (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((~(safe_lshift_func_uint16_t_u_u((l_200 , ((safe_sub_func_int8_t_s_s(l_199, (((func_39((safe_mod_func_uint8_t_u_u(((g_35 , 0x21F283B0L) != ((l_215 >= g_92) < 0xC1B4L)), 7L)), l_215, p_33) > p_34) ^ l_199) >= 0x9EBC7C8AL))) , 0x9842L)), 2))), g_92)), 0xBDL))), g_92)) && g_127), 0xCC898E3FL)) < g_152), g_188)) < l_199) , 0xBFAB435FL)), l_215, g_92, g_152)) ^ 7UL) , p_32), l_38)))
            {
                const short l_276 = 0x8D05L;
                int l_310 = (-5L);
                p_33 = ((safe_sub_func_uint16_t_u_u((func_43((((func_39(g_152, ((5UL & ((((p_33 <= (safe_sub_func_uint16_t_u_u((func_48(func_48(((p_33 , (g_64 | ((p_33 , l_276) | ((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((l_199 | (safe_lshift_func_int8_t_s_u((((g_35 > g_122) && g_152) != 0xF2B7L), g_127))) || p_32))), p_34)), l_200)) == 0xDF9373D1L)))) >= 0x7B92L))) != p_32), p_33))) , g_122) , g_35) , 1UL)) >= 0x603CDA89L), g_122) <= g_188) != g_92) < g_122), p_33, p_33, p_33) > 0x68392C3CL), 0xC5E2L)) ^ 0UL);
lbl_332:
                p_33 = 1L;
                if ((+(((safe_lshift_func_int16_t_s_u(func_43(l_200, l_199, p_34, ((safe_add_func_uint32_t_u_u(((((65534UL || (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((func_48((p_33 != l_215)) == 0UL), p_34)) || 0x15A4L), g_35)), l_296))) || 5L) , p_32) && g_122), p_33)) , l_215)), 9)) != l_38) , l_200)))
                {
                    int l_314 = 0x461C8AACL;
                    g_152 = ((g_64 < g_127) , ((0xD9CA3109L && p_34) , (p_33 , func_39(p_34, g_152, func_48(g_249)))));
                    l_301 = (((safe_rshift_func_int16_t_s_u((((g_35 && (0xD9BCL ^ g_249)) > p_33) ^ (0x103C044DL & 0L)), 6)) <= (g_127 != (g_152 , ((safe_rshift_func_uint16_t_u_u(l_276, g_35)) < p_34)))) <= 5UL);
                    for (p_33 = 0; (p_33 <= 19); p_33++)
                    {
                        p_34 = g_35;
                    }
                    if (l_276)
                    {
                        char l_309 = 5L;
                        int l_311 = 0x5DE54D68L;
                        g_152 = ((0x0DL < p_34) , (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(p_34, 7)), 0x52B5L)));
                        g_317--;
                        g_320--;
                    }
                    else
                    {
                        unsigned l_325 = 1UL;
                        g_152 = (safe_div_func_uint16_t_u_u(8UL, (6UL & p_33)));
                        l_325 = p_33;
                    }
                }
                else
                {
                    unsigned l_329 = 0x8419B407L;
                    int l_334 = 1L;
                    if (((g_127 > ((((l_276 < ((0x49L | (((l_38 ^ ((g_316 && g_313) <= (safe_lshift_func_uint16_t_u_u(func_39(p_33, p_34, func_39(g_316, g_152, p_32)), 7)))) , g_188) || (-1L))) <= 0x13L)) , p_34) , p_32) , 0xD3D122B5L)) ^ p_33))
                    {
                        int l_328 = 0xBCF1D008L;
                        l_328 = l_199;
                        l_329++;
                    }
                    else
                    {
                        if (g_35)
                            goto lbl_332;
                    }
                    g_335++;
                }
                l_312 ^= g_127;
            }
            else
            {
                int l_340 = 0L;
                p_34 |= 1L;
                if (l_296)
                {
                    unsigned short l_353 = 0x6202L;
                    const char l_363 = 1L;
                    p_34 = (func_39(((1UL <= ((safe_add_func_uint16_t_u_u((func_43(l_340, (((func_39((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((p_32 & (((safe_add_func_int16_t_s_s((func_43((g_335 != g_127), ((safe_lshift_func_uint16_t_u_s(((((((safe_sub_func_int16_t_s_s(p_33, (g_249 > p_32))) , g_316) | p_34) ^ p_33) ^ 4L) && 0x00L), l_301)) , (-10L)), g_188, g_317) , 0x371FL), g_320)) , g_249) > l_199)), g_335)), g_313)), p_34, p_33) && g_317) && l_333) > l_353), p_32, l_333) || 0xFD08L), p_33)) , g_320)) != 0xC36CL), l_354, g_249) != p_33);
                    p_34 = (safe_mod_func_int16_t_s_s(g_249, p_34));
                    p_34 = (-4L);
                    g_364 &= func_48((func_39(g_152, func_39(l_353, (g_335 , g_249), (safe_mod_func_int8_t_s_s(g_313, 0x2FL))), (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((p_33 , (1UL > l_363)) , (-9L)), l_340)), p_32))) && g_122));
                }
                else
                {
                    for (l_255 = (-28); (l_255 >= (-28)); l_255 = safe_add_func_uint16_t_u_u(l_255, 8))
                    {
                        unsigned char l_367 = 0xCDL;
                        return l_367;
                    }
                }
                if ((safe_add_func_uint32_t_u_u(g_122, p_33)))
                {
                    ++g_370;
                    --g_374;
                    return g_374;
                }
                else
                {
                    return p_32;
                }
            }
            p_33 = g_374;
            return p_34;
        }
        p_34 = l_377;
    }
    else
    {
        int l_378 = 0x57E8F957L;
        int l_543 = (-1L);
        l_378 = (func_39(func_43(g_364, p_33, g_127, g_335), ((g_249 , (l_378 != g_370)) | l_378), g_370) < l_378);
        if ((0xF8L >= 251UL))
        {
            char l_413 = 0x65L;
            char l_467 = (-5L);
            int l_511 = 0L;
            int l_541 = (-1L);
            int l_542 = 0xF44C1419L;
            l_378 = func_43(((safe_rshift_func_uint8_t_u_u((p_32 && ((l_381 , l_377) > ((g_317 || 0xCFL) == (safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_378 >= ((!(p_34 | (0xAA23L > l_378))) ^ (-1L))) > 0x77L), g_188)), g_122)), l_381))))), 0)) != 0x6FL), l_377, g_316, l_215);
            for (g_364 = (-9); (g_364 < (-1)); g_364 = safe_add_func_int32_t_s_s(g_364, 3))
            {
                int l_392 = 0x2A6FEAA3L;
                int l_473 = 0x198A81FEL;
                unsigned l_525 = 4UL;
                g_152 = ((safe_sub_func_int32_t_s_s(((0UL >= l_392) && g_313), (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((g_92 <= p_32), 0x81L)) || (((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((!(safe_div_func_int8_t_s_s((((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(g_320, 0x233CDAF9L)) <= (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(p_33, 0xEC10B6D7L)), l_413))), p_33)) < p_34) <= g_374), g_152))), l_392)) < p_34) || l_413), g_64)) > p_33) < g_373)), p_33)), l_378)))) >= g_127);
                if ((safe_add_func_uint32_t_u_u(func_39((!(func_43(l_378, (safe_lshift_func_int16_t_s_s(func_48(l_392), 3)), (g_364 & (((safe_add_func_uint32_t_u_u(4294967295UL, (g_370 != 0x1C41L))) , l_392) , (l_378 , p_33))), g_35) , 0x5F1A0963L)), l_392, p_34), g_374)))
                {
                    unsigned l_427 = 4294967294UL;
                    if (g_188)
                        break;
                    p_33 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(1UL, (((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((-1L))) > 1UL), 4)) && (g_188 < (p_32 < (l_392 && l_427)))) , g_92))), ((((l_427 <= 0x83F1L) , 0x90L) != p_34) && p_32)));
                }
                else
                {
                    char l_442 = 3L;
                    int l_443 = 0x325F09CDL;
                    unsigned char l_451 = 0xE9L;
                    if ((safe_lshift_func_int8_t_s_u(p_34, 5)))
                    {
                        g_152 = g_317;
                        l_443 ^= (func_39(g_373, (safe_add_func_int32_t_s_s(l_413, (safe_sub_func_uint32_t_u_u((p_34 ^ (safe_div_func_uint16_t_u_u(func_43(g_249, (safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_add_func_int8_t_s_s(p_33, l_442)) , 0x459EL), (l_413 | g_35))), g_320)), g_374, g_316), l_413))), l_215)))), l_215) || l_312);
                    }
                    else
                    {
                        const unsigned l_446 = 0x4B2C4DECL;
                        p_34 = (l_442 & 0x7B1DD455L);
                        l_215 = (safe_mod_func_int32_t_s_s(p_32, func_43(((1UL || l_446) & (safe_add_func_int16_t_s_s(g_320, (safe_sub_func_int8_t_s_s(l_451, p_34))))), g_335, ((1L != g_92) >= g_317), p_34)));
                    }
                    g_373 = l_378;
                    for (g_127 = (-18); (g_127 == 11); g_127 = safe_add_func_uint8_t_u_u(g_127, 8))
                    {
                        char l_456 = (-7L);
                        g_152 = (safe_lshift_func_int8_t_s_u(func_48(p_33), (g_127 ^ (((l_392 < l_456) ^ (l_215 < (safe_unary_minus_func_int32_t_s((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((l_464 == ((safe_sub_func_uint32_t_u_u(l_442, g_374)) <= g_188)) , g_316) , l_467) , l_456), 5)), p_34)))))) , p_33))));
                        return l_378;
                    }
                    l_473 = (((4294967288UL && (l_468 == 4294967287UL)) , (safe_mod_func_int32_t_s_s(3L, l_467))) , (l_468 & ((p_32 | ((((!(g_249 < (safe_add_func_uint8_t_u_u(p_32, p_33)))) > l_312) & l_443) , 0x40L)) | l_378)));
                }
                if ((((((p_32 >= ((((!(p_34 | ((safe_add_func_uint32_t_u_u((~g_35), g_317)) == ((g_370 <= g_373) || (safe_sub_func_uint8_t_u_u(func_48(((g_249 <= 0x71BEL) || (func_39(p_33, g_335, p_32) == 0x4DB9A804L))), 5UL)))))) <= g_374) , g_316) != l_413)) > p_34) ^ 0L) , 6UL) && p_34))
                {
                    const unsigned short l_510 = 0x7761L;
                    if (p_32)
                    {
                        l_378 = func_39((g_364 == g_374), l_38, l_480);
                        p_33 |= p_34;
                        p_34 ^= 0x5A0BEDADL;
                        g_373 = (safe_add_func_uint16_t_u_u(0x0F02L, (p_32 , (safe_mod_func_int32_t_s_s((l_480 == p_33), (safe_mod_func_uint16_t_u_u(p_32, 0x633AL)))))));
                    }
                    else
                    {
                        p_33 = (safe_lshift_func_uint16_t_u_u(p_33, (p_32 , ((((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((g_316 , ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_374, p_34)), (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((g_249 <= (g_364 , (0x909CL == g_249))), g_92)) && g_316), 13)))) , 0xC451L)), g_35)), l_467)) > g_316) > p_33) && 0x71BB1555L), l_312)) > g_320), (-8L))) == l_38) <= 0xE33A0C3DL) < 0x914BL))));
                    }
                    if (((safe_lshift_func_int16_t_s_u((p_34 & 0x3B5EL), (0x374AL != ((g_364 || ((((g_507 || (func_43((func_43((safe_div_func_int32_t_s_s(((p_34 | (((g_64 , p_34) || 0x83L) >= p_32)) <= l_378), p_33)), g_92, l_510, g_320) ^ g_188), g_249, p_32, l_312) , p_34)) < g_370) & l_315) , l_378)) < 1UL)))) < p_34))
                    {
                        l_511 = l_413;
                    }
                    else
                    {
                        unsigned l_524 = 0xDABD5DF9L;
                        l_215 = (p_33 > (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((((((((safe_sub_func_int16_t_s_s(((func_48((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_378, ((g_335 < ((((safe_rshift_func_int16_t_s_u(func_48((l_524 && 0x1FL)), l_524)) | 0x157F35A5L) | (p_33 < 0xA4L)) & g_374)) && (-9L)))), g_507))) | l_525) != (-1L)), g_152)) ^ 0xDA1B7B4AL) , l_467) , g_64) > p_32) > g_122) > p_33) & g_316), 10)) , g_64), p_34)));
                        return p_33;
                    }
                    for (g_122 = 0; (g_122 > 2); ++g_122)
                    {
                        int l_530 = (-2L);
                        g_373 = ((p_34 & (func_48(((((!func_39(p_34, l_530, g_335)) , 0UL) ^ p_33) & l_525)) <= 0xCAL)) <= p_32);
                    }
                }
                else
                {
                    int l_535 = 7L;
                    int l_537 = 0x365FE562L;
                    --g_532;
                    if (l_378)
                        break;
                    g_538--;
                    l_511 = 0xAAE4F3D3L;
                }
                if (g_532)
                    break;
            }
            g_544--;
            p_34 &= (safe_lshift_func_uint16_t_u_u(l_467, ((-9L) > (safe_div_func_uint32_t_u_u(func_39(g_370, p_33, (0xA875L > 65532UL)), (~g_374))))));
        }
        else
        {
            short l_562 = 5L;
            int l_581 = (-1L);
            int l_594 = 1L;
            int l_598 = 0x77A82B4FL;
            l_312 &= l_551;
            for (g_122 = 0; (g_122 <= 28); ++g_122)
            {
                unsigned l_563 = 6UL;
                int l_580 = 0xBC8A1087L;
                p_34 = ((safe_rshift_func_uint8_t_u_u((p_33 >= (0xAB8AL < (safe_sub_func_uint8_t_u_u(l_215, (safe_mod_func_uint16_t_u_u((((((p_32 < 0x065AL) == (safe_add_func_int8_t_s_s((p_34 , (l_562 | (((2L | p_33) < g_544) ^ l_563))), g_374))) | (-1L)) , l_381) >= p_33), l_543)))))), 7)) , l_377);
                if ((safe_lshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s((func_39((l_315 == (((safe_add_func_int16_t_s_s((l_563 != (g_370 || l_563)), func_48((g_127 && 4L)))) <= ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_34, (safe_lshift_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((p_33 & 0xF4AAL), p_32)) > 1UL) , l_563), p_32)))), 1L)), p_34)) && 0L)) < l_562)), g_531, p_34) | p_34), g_538)) >= p_32) | p_34), 9)))
                {
                    --g_582;
                    p_33 = g_536;
                }
                else
                {
                    char l_591 = (-10L);
                    int l_595 = 5L;
                    int l_602 = 0x21561983L;
                    int l_603 = 0L;
                    int l_604 = 6L;
                    p_33 = ((((safe_mod_func_int32_t_s_s((p_32 > ((+((g_320 , (+(((l_543 != (l_468 ^ (g_538 > p_32))) > (l_378 , ((((safe_sub_func_int8_t_s_s(p_34, 0x71L)) == g_64) || (-1L)) > g_335))) != g_152))) & g_122)) == p_34)), l_591)) , 0xA7L) != g_249) & 0xE5L);
                    for (l_333 = 0; (l_333 > (-20)); l_333 = safe_sub_func_uint16_t_u_u(l_333, 1))
                    {
                        char l_596 = 0x4DL;
                        int l_597 = 0xB1D44C41L;
                        ++g_599;
                        l_378 |= 0L;
                    }
                    g_606++;
                }
            }
        }
        return g_531;
    }
    for (p_33 = (-4); (p_33 != 13); ++p_33)
    {
        int l_614 = 5L;
        for (p_34 = 17; (p_34 > 20); p_34++)
        {
            int l_613 = 0xEFC407A3L;
            int l_615 = 1L;
            int l_616 = (-2L);
            int l_617 = 0xDE9E7F78L;
            ++g_619;
        }
    }
    return g_122;
}







static unsigned char func_39(unsigned p_40, short p_41, int p_42)
{
    unsigned l_187 = 0x41834B80L;
    l_187 |= func_48(p_42);
    return p_41;
}







static int func_43(unsigned char p_44, int p_45, const char p_46, int p_47)
{
    unsigned l_65 = 4294967289UL;
    int l_90 = 0x463D6F3BL;
    char l_147 = 0x17L;
    p_47 |= (((((((((l_65 | (safe_add_func_int8_t_s_s(g_35, (safe_add_func_uint32_t_u_u(func_48(g_35), (-1L)))))) == (safe_mod_func_uint16_t_u_u(g_35, ((g_35 == l_65) | (g_35 == 4294967295UL))))) <= p_46) == 0xB1L) & 0xE4L) & l_65) , p_44) | 0x3F95L) < (-5L));
    for (g_64 = (-12); (g_64 > 5); ++g_64)
    {
        unsigned short l_87 = 0UL;
        int l_88 = 2L;
        if (p_45)
        {
            unsigned l_74 = 4294967290UL;
            int l_91 = (-6L);
            const unsigned l_120 = 0xADA2C71BL;
            if (p_46)
                break;
            if (p_46)
            {
                unsigned l_89 = 5UL;
                ++l_74;
                for (g_35 = (-7); (g_35 >= 2); g_35 = safe_add_func_uint32_t_u_u(g_35, 2))
                {
                    unsigned short l_79 = 0xF38FL;
                    l_88 = (((l_79 && p_47) < 0xF331L) , (safe_sub_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(p_47)), (l_79 & ((((safe_rshift_func_uint16_t_u_s((p_45 ^ (0xB78EL <= l_79)), 10)) | l_74) >= p_46) == p_44)))) , l_87) , p_46) | g_35), 0xB1D3L)));
                    if (l_89)
                        break;
                    p_47 |= (-3L);
                }
                g_92++;
            }
            else
            {
                unsigned l_103 = 0UL;
                l_91 |= (safe_rshift_func_int8_t_s_u((g_92 < (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_64, p_45)), (g_35 || ((safe_lshift_func_int8_t_s_s(((((((l_65 | (-9L)) , ((g_92 , p_44) == l_103)) , 0L) <= g_64) , 0xAEL) != p_45), l_87)) >= p_46))))), 2));
                for (l_88 = 0; (l_88 > 22); ++l_88)
                {
                    p_45 = 9L;
                }
                l_90 = (0xCC31L ^ (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(l_65, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((p_47 <= ((p_46 | ((((-1L) && l_74) >= ((safe_add_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(g_92, 6L)) ^ g_64) && l_103), g_92)) >= l_103)) > 255UL)) & g_35)) > g_92), l_74)), 15)))) >= g_92), l_120)));
            }
            if (p_46)
                break;
        }
        else
        {
            short l_121 = 0xD10EL;
            if (p_45)
                break;
            p_45 = (p_46 && g_64);
            --g_122;
        }
        for (p_45 = 0; (p_45 < 17); ++p_45)
        {
            int l_142 = 3L;
            g_127 = l_87;
            l_90 = ((safe_lshift_func_int16_t_s_u((p_44 == (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_45, 2)), (p_47 , p_47)))), (safe_rshift_func_uint8_t_u_s((p_44 & (((safe_mod_func_uint32_t_u_u((g_122 , ((safe_lshift_func_int8_t_s_u(l_142, 7)) >= (((p_44 , ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(l_147, 0xFE34L)) | l_142), 0x4E81L)) < g_35)) | l_88) == g_64))), l_65)) >= l_87) != g_64)), p_44)))) >= 0xC9CEB3ADL);
        }
        for (g_122 = 0; (g_122 >= 40); g_122++)
        {
            g_152 &= (safe_lshift_func_uint8_t_u_u(g_64, 1));
        }
        g_152 ^= 0L;
    }
    for (g_35 = 0; (g_35 >= 26); g_35 = safe_add_func_uint8_t_u_u(g_35, 4))
    {
        unsigned l_157 = 18446744073709551615UL;
        int l_175 = 0x560C6884L;
        unsigned l_176 = 1UL;
        for (g_64 = 0; (g_64 <= (-30)); --g_64)
        {
            unsigned short l_186 = 0UL;
            l_157--;
            for (p_44 = (-29); (p_44 != 43); ++p_44)
            {
                unsigned short l_174 = 0x9362L;
                for (l_147 = (-30); (l_147 > 22); ++l_147)
                {
                    for (p_45 = 12; (p_45 <= (-8)); p_45 = safe_sub_func_uint8_t_u_u(p_45, 3))
                    {
                        return p_45;
                    }
                }
                for (g_127 = 0; (g_127 > 35); g_127++)
                {
                    unsigned l_185 = 0x62409C12L;
                    if (((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((1UL < l_147), 4)), (l_65 ^ g_35))), g_92)) <= (0x59L > 1L)))
                    {
                        l_174 = p_44;
                        if (p_45)
                            continue;
                        ++l_176;
                        l_90 = (+(-1L));
                    }
                    else
                    {
                        p_45 = p_44;
                        return g_127;
                    }
                    for (l_90 = 0; (l_90 == (-6)); --l_90)
                    {
                        g_152 = (safe_add_func_int8_t_s_s(p_47, (g_127 != ((g_127 , (-7L)) & (p_47 > (0L <= g_35))))));
                        return g_127;
                    }
                    for (g_92 = 0; (g_92 != 38); g_92 = safe_add_func_int16_t_s_s(g_92, 8))
                    {
                        l_185 &= p_45;
                        if (p_44)
                            continue;
                    }
                }
            }
            l_175 = (l_176 , 0x09CB0568L);
            g_152 = l_186;
        }
    }
    return l_90;
}







static char func_48(char p_49)
{
    short l_50 = 1L;
    int l_55 = 0x227FD5D1L;
    l_55 |= (((p_49 <= (l_50 | l_50)) , l_50) ^ (((safe_rshift_func_int16_t_s_s(0x0979L, 5)) < (safe_lshift_func_int16_t_s_u(l_50, g_35))) & g_35));
    l_55 &= l_50;
    g_64 &= (safe_div_func_uint16_t_u_u(((((g_35 <= ((safe_rshift_func_int8_t_s_s(((g_35 || g_35) > ((l_50 & ((safe_lshift_func_uint8_t_u_s(g_35, 7)) == (255UL && (safe_add_func_uint8_t_u_u(g_35, (((l_50 != l_55) | g_35) <= p_49)))))) != p_49)), g_35)) | 1L)) != p_49) > g_35) || (-4L)), g_35));
    return g_35;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_766, "g_766", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_833, "g_833", print_hash_value);
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
