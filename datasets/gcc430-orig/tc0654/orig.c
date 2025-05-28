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



static int g_2 = 0L;
static volatile int g_5 = 0L;
static int g_6 = 0xCDDD1D8FL;
static volatile int g_10 = (-1L);
static int g_11[6][1][9] = {{{(-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L)}}, {{(-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L)}}, {{(-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L)}}, {{(-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L)}}, {{(-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L)}}, {{(-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L), 0x31C587C7L, 0x85589B58L, 0x31C587C7L, (-1L)}}};
static const int g_102 = 0xB0F83D54L;
static short g_127 = (-6L);
static unsigned g_128 = 0xDDDCD3E8L;
static char g_130 = 0x7FL;
static short g_142 = (-1L);
static unsigned g_172 = 0xE79E523DL;
static unsigned g_178 = 0xF47512D4L;
static short g_184[6] = {1L, 1L, 1L, 1L, 1L, 1L};
static unsigned g_208 = 0x62AE1A41L;
static unsigned g_212[2] = {0x3B64E573L, 0x3B64E573L};
static int g_224 = (-4L);
static short g_384[2][5][3] = {{{0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}}, {{0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}, {0x4C11L, (-10L), 9L}}};
static unsigned short g_385 = 0UL;
static unsigned short g_398[6] = {0x7A1AL, 0x9AFEL, 0x7A1AL, 0x9AFEL, 0x7A1AL, 0x9AFEL};
static unsigned g_430 = 5UL;
static int g_455 = 0xF2135F33L;
static unsigned char g_500 = 255UL;
static unsigned short g_620 = 0x9461L;
static const char g_631 = (-1L);
static unsigned g_703 = 18446744073709551615UL;
static int g_863[1][6] = {{6L, 6L, 6L, 6L, 6L, 6L}};
static unsigned char g_901 = 3UL;
static short g_930 = 0x76D4L;
static int g_1234 = 0xAF29F551L;
static char g_1235 = 1L;
static const unsigned g_1417 = 18446744073709551615UL;
static volatile short g_2036 = 0x002CL;



static char func_1(void);
static short func_13(unsigned p_14, short p_15, const int p_16, unsigned p_17);
static short func_18(int p_19, const short p_20, unsigned char p_21, int p_22);
static const int func_25(int p_26, char p_27, int p_28, char p_29, char p_30);
static unsigned short func_40(const int p_41);
static int func_52(short p_53, unsigned short p_54, int p_55, const unsigned char p_56);
static short func_67(unsigned p_68, const short p_69, unsigned short p_70, unsigned p_71, short p_72);
static char func_82(const unsigned p_83, int p_84, int p_85, unsigned p_86, unsigned p_87);
static const short func_100(int p_101);
static short func_111(unsigned p_112, unsigned p_113);
static char func_1(void)
{
    unsigned short l_9[9][2][3] = {{{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}, {{0x0A70L, 1UL, 1UL}, {0x0A70L, 1UL, 1UL}}};
    int l_2079 = 0L;
    unsigned char l_2090 = 0xBDL;
    short l_2095 = 0x9B84L;
    int i, j, k;
    for (g_2 = 0; (g_2 == (-23)); g_2 = safe_sub_func_int16_t_s_s(g_2, 4))
    {
        unsigned l_38 = 5UL;
        int l_2075 = (-2L);
        for (g_6 = (-23); (g_6 != 27); ++g_6)
        {
            int l_39 = 0x997736EAL;
            unsigned l_1739 = 0xBE21C771L;
            for (g_11[2][0][4] = 1; (g_11[2][0][4] >= 0); g_11[2][0][4] -= 1)
            {
                volatile short l_12 = 1L;
                l_12 = g_10;
            }
            g_863[0][4] = (func_13(g_11[4][0][4], g_5, (func_18((safe_mod_func_int32_t_s_s(func_25((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((g_2 && 8UL), (((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u(l_38)) >= l_39), func_40((g_11[2][0][4] < (g_11[2][0][4] < (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_s(((l_38 || 9L) & l_38), 15)) | 0xDA828C04L) & l_9[3][0][0]), 3))))))) < 9UL) != g_11[0][0][7]))) < (-1L)), g_2)), l_38, l_39, l_9[2][1][2], l_9[1][0][0]), 0x658F2A2EL)), l_39, l_1739, g_11[5][0][2]) & l_38), l_38) | 0x5A05L);
            l_2075 = (safe_mul_func_int8_t_s_s((-1L), (l_1739 && (g_11[2][0][4] & (((func_25(g_142, l_1739, l_9[6][0][2], (safe_rshift_func_int16_t_s_u(l_9[0][0][2], (0xCEC589CDL ^ (safe_rshift_func_int8_t_s_s((l_38 < l_38), 5))))), l_9[0][1][1]) < (-1L)) != 0xB489L) ^ 0x05FAF9A0L)))));
        }
        l_2079 = func_13(((safe_unary_minus_func_uint16_t_u(65535UL)) <= (g_620 || l_38)), ((l_9[2][1][1] > g_5) < (g_11[2][0][4] >= (safe_add_func_int16_t_s_s(l_9[7][1][2], l_9[8][1][2])))), ((g_2 < 0UL) <= 0xFFC1208FL), g_1417);
        return l_9[4][0][2];
    }
    g_11[2][0][4] = ((((safe_rshift_func_uint8_t_u_s(0xC2L, func_25(g_102, (0x38L && func_18((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((((g_500 > g_6) != (l_9[7][0][0] <= (safe_sub_func_int32_t_s_s(((((safe_mul_func_uint16_t_u_u(l_2090, ((8UL == (safe_rshift_func_int8_t_s_u(((l_2079 ^ 0x241CL) < g_102), l_2079))) > l_9[5][0][0]))) > g_127) >= 0xE1L) <= g_128), l_2079)))) > g_142) | g_930) && l_9[2][0][1]), g_620)), l_9[3][0][2])), l_2090, g_620, g_6)), l_9[7][1][0], l_2079, l_9[6][1][0]))) | g_1235) != l_9[8][0][2]) >= 0x12D1L);
    l_2079 = (g_620 == (safe_lshift_func_uint16_t_u_u(l_9[5][1][0], 8)));
    return l_2095;
}







static short func_13(unsigned p_14, short p_15, const int p_16, unsigned p_17)
{
    int l_2048 = 0xA421884BL;
    for (g_178 = 0; (g_178 <= 1); g_178 += 1)
    {
        char l_2025 = 0xB0L;
        for (g_430 = 0; (g_430 <= 0); g_430 += 1)
        {
            int l_2051 = 0x0AEB6A25L;
            int i, j;
            g_5 = func_111(g_863[g_430][(g_178 + 1)], (g_212[(g_430 + 1)] & (((-1L) != ((0x289BL || g_2) > p_16)) < (!(safe_sub_func_int16_t_s_s(l_2025, 0x1039L))))));
            for (g_172 = 0; (g_172 <= 0); g_172 += 1)
            {
                return g_500;
            }
            for (g_142 = 0; (g_142 >= 0); g_142 -= 1)
            {
                int l_2034[4];
                int l_2058 = 0xF1D164A1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_2034[i] = 9L;
                for (g_455 = 0; (g_455 <= 0); g_455 += 1)
                {
                    int i, j, k;
                    g_11[(g_142 + 5)][g_142][(g_178 + 2)] = l_2025;
                    g_11[(g_430 + 3)][g_142][(g_142 + 2)] = (4294967295UL != g_1234);
                    g_863[g_430][(g_178 + 1)] = ((safe_mul_func_uint16_t_u_u((0L | (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0xDDE7L, g_11[(g_430 + 3)][g_142][(g_142 + 2)])) != p_16), 7)), 10))), ((g_398[1] ^ func_111(l_2034[3], (p_15 ^ 1L))) != p_14))) & p_15);
                }
                if (g_208)
                {
                    unsigned l_2035 = 0xDE65E4ADL;
                    l_2035 = 0xFE2A663DL;
                    if (g_2036)
                        break;
                    for (g_455 = 15; (g_455 > (-23)); g_455 = safe_sub_func_uint8_t_u_u(g_455, 7))
                    {
                        return p_15;
                    }
                }
                else
                {
                    unsigned l_2047 = 0x76178F6CL;
                    for (g_224 = (-18); (g_224 != (-23)); g_224 = safe_sub_func_uint8_t_u_u(g_224, 2))
                    {
                        g_863[0][2] = (-1L);
                        g_5 = (0x61BC44ACL > func_111((g_385 <= g_102), (((-1L) & (g_6 >= g_128)) <= g_1234)));
                    }
                    g_863[g_430][(g_178 + 1)] = (((safe_sub_func_int32_t_s_s((p_15 <= ((-7L) >= ((safe_mul_func_int16_t_s_s(((~0x0AACL) | ((p_16 || (((l_2047 & ((l_2048 == (l_2034[3] || ((((safe_mod_func_int16_t_s_s(l_2051, l_2048)) >= l_2048) | g_184[5]) | 0x1E8BL))) == g_130)) || l_2025) & p_15)) | g_128)), p_15)) && 0x1EL))), 0x05AB35F1L)) & p_17) == (-1L));
                    g_224 = g_398[3];
                    l_2058 = ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((~g_430), func_40((g_631 | ((g_455 ^ g_212[0]) ^ func_111(l_2034[0], (safe_mod_func_uint32_t_u_u(p_16, (+(1L && 0x4FL)))))))))) >= (-6L)), p_16)) > p_17);
                }
            }
        }
        g_224 = func_40(((((safe_sub_func_int8_t_s_s(func_40((safe_sub_func_int8_t_s_s((p_15 > l_2048), l_2048))), (safe_mul_func_int8_t_s_s(func_111((safe_mul_func_uint8_t_u_u(249UL, ((0x18DE6D36L ^ func_40(((!((safe_lshift_func_uint16_t_u_u(0x769CL, (g_385 <= l_2048))) || l_2048)) ^ 4294967288UL))) <= p_16))), p_16), p_14)))) & l_2025) | 0xC919L) == l_2025));
    }
    return l_2048;
}







static short func_18(int p_19, const short p_20, unsigned char p_21, int p_22)
{
    unsigned short l_1751 = 0x8224L;
    int l_1881 = 0xF00EA0BBL;
    unsigned short l_1976 = 5UL;
    char l_2011 = (-6L);
    char l_2020 = 4L;
    unsigned l_2021 = 0xE6CAEB55L;
    unsigned l_2022 = 0x9CA441A0L;
    for (g_172 = 0; (g_172 <= 1); g_172 += 1)
    {
        short l_1746 = (-5L);
        int l_1772 = 0x4907E3C6L;
        int l_1798[6];
        int l_1984 = (-4L);
        short l_2003[6] = {0x1EEAL, 0x7B86L, 0x1EEAL, 0x7B86L, 0x1EEAL, 0x7B86L};
        int i;
        for (i = 0; i < 6; i++)
            l_1798[i] = 0x52034470L;
        for (g_142 = 1; (g_142 >= 0); g_142 -= 1)
        {
            unsigned char l_1839 = 0x3BL;
            int l_1862 = 9L;
            int l_1880 = 1L;
            short l_1898 = 0xCE8AL;
            int i;
            if ((func_40(g_212[g_142]) && ((g_384[0][3][2] ^ (p_21 != (safe_sub_func_uint8_t_u_u((g_455 & (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_398[3], 15)), l_1746))), (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((l_1746 != l_1746) >= l_1751), 0x1424L)), 65535UL)))))) && p_22)))
            {
                unsigned char l_1758 = 0x35L;
                if (((safe_mod_func_uint32_t_u_u(p_21, g_212[g_142])) | p_21))
                {
                    short l_1761 = 0xB47FL;
                    for (l_1751 = (-16); (l_1751 >= 48); l_1751 = safe_add_func_int8_t_s_s(l_1751, 1))
                    {
                        char l_1771 = 0x49L;
                        l_1772 = (((safe_rshift_func_uint8_t_u_s(((l_1758 == (g_212[1] <= func_52((((p_19 == g_385) == (safe_add_func_int16_t_s_s((l_1761 != g_142), (0x65L & (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint8_t_u_u(l_1751, ((2UL < g_1234) | g_455))))), p_20)) || p_20) ^ g_130), (-3L))) == l_1771), g_11[2][0][4])))))) > p_21), p_19, g_208, l_1761))) != g_212[1]), g_863[0][2])) >= l_1761) > 0x35L);
                    }
                }
                else
                {
                    unsigned l_1785 = 0x2F4BDBC3L;
                    int l_1845 = 1L;
                    p_19 = func_52(p_22, l_1751, g_212[g_142], ((((safe_mod_func_uint32_t_u_u((0x17B97CAFL == (safe_mod_func_int32_t_s_s(func_40(g_1235), (safe_mod_func_int32_t_s_s(((g_1417 <= 5UL) | (safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((~0x9A04L), 13)), 0xD8F8DB46L)) == 0xA3C1L), l_1758))), l_1746))))), p_19)) | g_184[5]) != l_1785) >= 0xA0L));
                    if ((((safe_mod_func_int32_t_s_s((((p_22 || ((((0xB3F3L <= (-1L)) | (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_int8_t_s_u(0xF2L, func_52(l_1758, (g_384[1][0][1] < ((safe_rshift_func_int8_t_s_s(g_1235, func_52((safe_lshift_func_int8_t_s_u(p_20, 0)), p_21, g_1417, g_11[5][0][8]))) > p_20)), p_21, g_212[1]))) && l_1751) == 0x02L) > g_455), 5)) <= 0x5BBC89AFL), l_1798[4]))) & g_385) ^ p_20)) | 0xB7CEL) >= g_212[0]), l_1751)) || l_1785) && p_19))
                    {
                        short l_1817 = 0x2944L;
                        p_19 = (safe_lshift_func_uint16_t_u_s(l_1798[4], 4));
                        p_22 = ((func_111(g_212[0], (g_184[2] & (((((((safe_rshift_func_int8_t_s_u(0x27L, (l_1798[3] | (((safe_mul_func_uint8_t_u_u(((g_863[0][2] & func_111(p_20, l_1751)) < (func_40((!((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_172, 0)), (-5L))), p_21)), 0UL)) != l_1751))) < p_22)), l_1798[2])) | p_20) != p_21)))) <= p_19) < p_22) ^ g_1234) <= g_398[1]) < p_20) | 0xCF3D9361L))) == 0xA2328BADL) == p_20);
                        l_1798[4] = ((safe_mul_func_uint8_t_u_u(p_20, (p_20 && g_1234))) != (safe_sub_func_int8_t_s_s(0L, l_1817)));
                        if (g_631)
                            break;
                    }
                    else
                    {
                        const unsigned l_1818 = 0x3253C62DL;
                        int l_1840 = 1L;
                        g_863[0][5] = 0x2CECA1C8L;
                        g_863[0][4] = l_1818;
                        l_1772 = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_863[0][0] ^ ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(1L, 3)), l_1751)) && (safe_sub_func_int8_t_s_s(((func_52(p_19, (((safe_add_func_int16_t_s_s(p_21, ((((((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((-8L) >= ((g_620 <= (-4L)) | (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((func_52(l_1798[4], p_19, g_1234, l_1785) != p_20), g_863[0][2])), p_22)))), p_21)) && g_11[5][0][3]), p_21)) && 0xA8D2ED3FL) != 1L) >= g_212[g_142]) < l_1839) && g_1235))) == l_1785) < g_128), p_19, g_1417) && l_1839) != l_1840), 0xA0L)))), g_430)), p_19));
                    }
                    l_1845 = (p_22 == ((((0x87148CC2L == (p_20 & ((-3L) == l_1751))) & (safe_sub_func_uint8_t_u_u(g_142, (g_212[g_142] >= (l_1758 != 0x7A39C8D2L))))) <= l_1798[4]) <= g_703));
                    if (l_1785)
                        break;
                }
                for (g_127 = 0; (g_127 <= 23); g_127 = safe_add_func_int32_t_s_s(g_127, 1))
                {
                    g_224 = l_1758;
                    if (p_20)
                        break;
                }
                l_1798[4] = (safe_add_func_int32_t_s_s(g_212[1], ((safe_sub_func_int16_t_s_s((g_11[2][0][4] < (0xEDA3L <= (safe_mul_func_int8_t_s_s(func_40(g_930), ((g_184[5] > (safe_mod_func_uint8_t_u_u(g_385, 0x57L))) == g_130))))), 0UL)) || l_1798[5])));
                for (g_500 = 0; (g_500 > 43); g_500 = safe_add_func_uint32_t_u_u(g_500, 2))
                {
                    l_1862 = ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(g_212[0], func_111(g_184[5], p_20))), ((-8L) > g_212[1]))) || p_19);
                    if (g_455)
                        continue;
                }
            }
            else
            {
                unsigned short l_1879 = 0UL;
                p_22 = ((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x15L, (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_20 ^ func_111(p_21, ((safe_add_func_uint16_t_u_u(((func_111(l_1772, g_2) ^ func_52((g_398[4] >= (-6L)), p_22, l_1879, l_1751)) <= g_1235), l_1751)) < 0x47L))), 2)), l_1880)), g_102)), 0xE9L)), l_1879)))), 1UL)) & l_1880);
                l_1881 = l_1880;
                g_863[0][4] = (func_111(((safe_mul_func_int8_t_s_s((-1L), (safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_21 && ((((g_184[4] & 1UL) || (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((l_1879 && g_208), (p_22 || 5L))), 3)), l_1879)), p_20))) ^ g_102) <= (-1L))), l_1862)), l_1898)) & 1UL), p_21)))) ^ p_19), p_21) == p_20);
            }
            for (g_130 = 0; g_130 < 6; g_130 += 1)
            {
                g_398[g_130] = 0x614BL;
            }
            if (((6UL ^ (safe_lshift_func_uint8_t_u_s(l_1798[3], 6))) <= (~(0x24C4L && (safe_sub_func_int32_t_s_s((g_398[1] == func_52(g_384[0][3][2], l_1880, (safe_rshift_func_uint16_t_u_s(l_1798[2], g_901)), (safe_add_func_uint16_t_u_u(65531UL, g_184[1])))), g_703))))))
            {
                unsigned char l_1909 = 0x6EL;
                g_224 = ((safe_add_func_int8_t_s_s((0xCE7EL <= (l_1909 && 1L)), (safe_rshift_func_int8_t_s_u(p_21, 3)))) <= g_620);
            }
            else
            {
                int l_1914 = 0L;
                p_19 = ((safe_mod_func_uint32_t_u_u((l_1914 != ((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((0x93L < (((safe_add_func_int32_t_s_s(g_901, (((safe_rshift_func_uint16_t_u_s(g_1417, l_1914)) || func_40(p_21)) || p_22))) && 0x7AL) && p_20)) <= 0x6FE0L), 4)) | p_19) == l_1839), 6)) <= g_384[0][0][2])), l_1881)) | p_21);
            }
        }
        if (p_19)
        {
            unsigned short l_1926 = 65535UL;
            for (g_455 = 0; (g_455 < (-12)); g_455--)
            {
                const int l_1929 = 0xF3BD0208L;
                l_1926 = (safe_unary_minus_func_uint16_t_u(p_20));
                for (g_430 = 0; (g_430 < 8); g_430 = safe_add_func_int16_t_s_s(g_430, 4))
                {
                    g_863[0][2] = 0xE3DDDEB1L;
                }
                for (g_930 = 4; (g_930 >= 0); g_930 -= 1)
                {
                    for (g_128 = 0; (g_128 <= 5); g_128 += 1)
                    {
                        p_19 = p_20;
                        l_1881 = p_19;
                    }
                }
                if (g_172)
                {
                    p_19 = (p_20 && p_21);
                }
                else
                {
                    if (func_40(l_1929))
                    {
                        g_863[0][2] = p_19;
                        if (p_20)
                            continue;
                        l_1798[4] = 0x63ED6732L;
                    }
                    else
                    {
                        short l_1944[2];
                        const unsigned char l_1945 = 0x8FL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1944[i] = (-9L);
                        g_1234 = (p_19 ^ (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((p_20 != (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((0xB226L | 0x4F3DL) != g_500), ((+(func_40(l_1929) <= (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_20, (l_1944[1] > l_1945))), 0x30DFL)))) < 0UL))), g_500)), 1UL))), 6)), p_20)));
                        g_1234 = (safe_mul_func_int8_t_s_s(p_22, (!(((l_1926 ^ g_863[0][2]) && g_1235) >= g_224))));
                        p_22 = 1L;
                    }
                }
            }
        }
        else
        {
            l_1772 = p_22;
            g_224 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_20, ((safe_mod_func_uint16_t_u_u(g_184[5], 65530UL)) == g_455))), g_224));
        }
        p_19 = ((safe_add_func_int32_t_s_s(g_901, func_111(p_22, g_385))) == g_208);
        for (g_142 = 0; (g_142 <= (-22)); --g_142)
        {
            int l_1979 = (-1L);
            unsigned l_1985 = 0x92611A5EL;
            l_1881 = (((safe_rshift_func_uint16_t_u_s((l_1798[5] >= ((safe_mod_func_uint8_t_u_u((g_11[2][0][4] <= func_40((l_1751 ^ (safe_mod_func_uint32_t_u_u(((l_1881 & (safe_sub_func_int16_t_s_s(((func_52(p_20, l_1746, p_19, p_22) > p_21) ^ (-1L)), 0xF80EL))) != 3L), p_19))))), (-2L))) > g_142)), g_863[0][4])) >= p_20) == p_22);
            if ((safe_lshift_func_uint8_t_u_s(((p_19 < l_1881) && ((p_22 > func_40((2L == (safe_rshift_func_uint8_t_u_s(p_19, 5))))) > p_22)), g_863[0][3])))
            {
                g_863[0][4] = (((safe_mod_func_uint8_t_u_u((g_102 == ((safe_rshift_func_uint8_t_u_u((l_1751 || g_384[0][3][2]), g_620)) > ((safe_rshift_func_int16_t_s_u(p_20, g_620)) > (l_1976 <= 4294967295UL)))), (safe_lshift_func_int8_t_s_u(g_2, l_1979)))) > g_384[0][3][2]) >= p_20);
                if (l_1881)
                    break;
            }
            else
            {
                p_19 = (safe_add_func_uint8_t_u_u(l_1979, (((safe_add_func_uint32_t_u_u(l_1984, (g_631 | ((l_1985 != g_1417) && (safe_mod_func_int32_t_s_s(func_111(l_1984, g_142), 5L)))))) >= (-1L)) || l_1985)));
                for (g_430 = 0; (g_430 > 23); g_430 = safe_add_func_int32_t_s_s(g_430, 4))
                {
                    const unsigned short l_1994[3] = {0xCBF4L, 0xCBF4L, 0xCBF4L};
                    int i;
                    for (g_178 = 17; (g_178 < 16); g_178 = safe_sub_func_int32_t_s_s(g_178, 3))
                    {
                        p_19 = (func_40(g_455) <= (safe_sub_func_uint16_t_u_u(func_40(l_1994[0]), g_1417)));
                        p_22 = ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(0x445DL, 13)) || 0L), (safe_sub_func_uint8_t_u_u(p_20, p_20)))), p_21)) & l_2003[2]);
                    }
                }
                p_19 = (safe_unary_minus_func_int16_t_s(l_1798[3]));
            }
        }
    }
    p_22 = (safe_mod_func_int32_t_s_s((((((0x8226L == (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(0UL, ((func_40(g_384[0][3][2]) ^ p_21) > (((g_212[0] && 0x00591076L) >= (((251UL >= p_19) && l_1881) == l_2011)) | p_22)))), 9))) >= p_21) || 1L) ^ g_930) ^ p_22), g_11[2][0][3]));
    g_224 = ((safe_add_func_int32_t_s_s(((-1L) || ((((safe_mul_func_int16_t_s_s(p_22, ((l_1751 ^ (-1L)) > l_1976))) <= ((safe_add_func_uint32_t_u_u((((p_22 && ((0x4BB35261L & p_22) < ((0x7529L < l_2020) || l_2021))) != (-1L)) <= g_930), p_22)) <= l_1751)) & (-2L)) || p_20)), l_1751)) > g_178);
    return l_2022;
}







static const int func_25(int p_26, char p_27, int p_28, char p_29, char p_30)
{
    short l_48[9] = {9L, 9L, (-1L), 9L, 9L, (-1L), 9L, 9L, (-1L)};
    int l_51 = 1L;
    unsigned l_77 = 0xD444C677L;
    int l_1121[4][8][8] = {{{(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}}, {{(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}}, {{(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}}, {{(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}, {(-9L), 0x776FB5D1L, (-3L), 1L, 3L, 0L, 3L, (-1L)}}};
    int l_1220 = 0xBF2ADB5CL;
    short l_1449[6];
    unsigned l_1581[9] = {0x94D503DDL, 0x14564163L, 0x94D503DDL, 0x14564163L, 0x94D503DDL, 0x14564163L, 0x94D503DDL, 0x14564163L, 0x94D503DDL};
    const int l_1612[9] = {0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L, 0x8DF906E7L};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1449[i] = 6L;
    l_51 = (l_48[0] && (4UL < (safe_lshift_func_int16_t_s_u(0x9BABL, 4))));
    if (func_52(func_40(p_30), l_48[0], l_48[0], (g_11[3][0][2] == func_40(func_40(func_40((((+func_40((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_11[0][0][8], 5)), (((safe_sub_func_int16_t_s_s((-1L), (safe_sub_func_int16_t_s_s(func_67(((-1L) >= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_11[2][0][4], 13)), l_48[0]))), g_11[2][0][4], l_48[2], l_48[2], l_77), g_102)))) & l_48[0]) == p_26))), 5L)))) && 0x92C9L) <= l_1121[0][6][7])))))))
    {
        unsigned l_1134 = 0xB3395B6EL;
        int l_1159[3][10] = {{0xD1D8C509L, 1L, 0xD1D8C509L, 1L, 0x0061928CL, 0xD068A3D2L, 0xE8031618L, 0xE8031618L, 0xD068A3D2L, 0x0061928CL}, {0xD1D8C509L, 1L, 0xD1D8C509L, 1L, 0x0061928CL, 0xD068A3D2L, 0xE8031618L, 0xE8031618L, 0xD068A3D2L, 0x0061928CL}, {0xD1D8C509L, 1L, 0xD1D8C509L, 1L, 0x0061928CL, 0xD068A3D2L, 0xE8031618L, 0xE8031618L, 0xD068A3D2L, 0x0061928CL}};
        unsigned short l_1182 = 0x16D9L;
        int l_1185 = 0x9D662797L;
        int i, j;
        l_51 = (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_102 > 0x969E91AEL), g_142)), 2));
        l_1134 = (252UL & (-7L));
        for (g_172 = 0; (g_172 > 60); ++g_172)
        {
            unsigned short l_1153 = 0x7D18L;
            int l_1154 = 0L;
            unsigned l_1197 = 0x9D20F680L;
            unsigned short l_1213 = 0UL;
            unsigned short l_1214 = 0x4468L;
            l_1154 = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(p_26, ((((safe_add_func_uint16_t_u_u(p_30, ((p_26 && p_29) | p_29))) != g_863[0][2]) ^ (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_620, func_52((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_1134, 2)), (l_48[8] > l_51))) & g_142), g_128)), g_127, p_30, p_29))), l_1153))) > (-3L)))) && g_127), 12));
            g_224 = (safe_mod_func_int16_t_s_s(((+func_40(l_51)) < l_77), p_29));
            for (l_1153 = 0; (l_1153 < 3); ++l_1153)
            {
                unsigned l_1183 = 0x9FFA41D2L;
                l_1159[0][2] = g_6;
                for (g_703 = 0; (g_703 > 60); g_703++)
                {
                    char l_1184 = 0xF8L;
                    int l_1198[7] = {1L, 1L, (-1L), 1L, 1L, (-1L), 1L};
                    int i;
                    if ((g_500 < (g_184[1] == (g_128 <= ((safe_rshift_func_int8_t_s_u((g_863[0][5] | (((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(g_11[2][0][4], g_384[1][4][2])) <= (!(safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(func_40(g_620), (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_111(func_111(l_1153, p_27), l_48[8]), 2)), 65533UL)))), p_30)), l_1182)) | l_1183) ^ l_1184), (-1L))), g_385)))), p_29)) == p_29) & g_863[0][2])), 7)) != 255UL)))))
                    {
                        int l_1194[10] = {0x7426A777L, 0L, 0x7426A777L, 0L, 0x7426A777L, 0L, 0x7426A777L, 0L, 0x7426A777L, 0L};
                        int i;
                        g_863[0][4] = l_1183;
                        l_1185 = 9L;
                        g_863[0][0] = func_52(p_27, func_40(((safe_mod_func_uint8_t_u_u(g_130, (func_111(p_29, (((safe_add_func_uint8_t_u_u(l_1182, (p_27 && (~g_172)))) | 4294967293UL) >= (l_1134 < func_111(l_1183, p_30)))) | 65535UL))) == g_384[0][1][1])), g_2, g_385);
                        l_1194[6] = (safe_rshift_func_uint16_t_u_s(func_40(p_29), 4));
                    }
                    else
                    {
                        g_863[0][2] = (safe_add_func_int32_t_s_s(l_1197, (p_27 < g_398[5])));
                        l_1154 = ((0x7692CD91L == ((0UL < (g_500 && func_52((g_384[0][3][2] == func_52(p_29, l_1184, l_1183, g_184[5])), g_384[0][3][2], l_1121[3][0][5], p_29))) != l_1154)) == 0x50L);
                    }
                    l_1198[6] = 0x3C3D6213L;
                }
                g_863[0][2] = ((safe_lshift_func_int8_t_s_s((((~((func_40((~l_1153)) || (g_130 < ((((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_40(p_28), 15)), (safe_mul_func_int16_t_s_s(p_30, (safe_lshift_func_int8_t_s_s(l_1213, 4)))))) != ((g_142 != g_208) || 0xBBL)), 6L)) > l_1121[0][6][7]) | l_1183), 7)) & p_26) & p_26) > p_30))) <= p_28)) == l_1183) | l_1214), p_30)) <= l_1159[2][8]);
                g_863[0][2] = (safe_lshift_func_int16_t_s_s(l_1183, func_40(g_102)));
            }
        }
        g_224 = (l_1182 > g_430);
    }
    else
    {
        unsigned char l_1217 = 255UL;
        int l_1231[9][1][10] = {{{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}, {{0L, 0x980E1E0BL, 0x26E7FA39L, 0xAF76B134L, (-1L), 0x59B8A43AL, (-8L), (-3L), 0x17C1AFF1L, (-8L)}}};
        int i, j, k;
        l_1217 = (+p_27);
        for (g_930 = 0; (g_930 > 17); g_930 = safe_add_func_int16_t_s_s(g_930, 5))
        {
            const int l_1221 = 0xCE723E90L;
            unsigned l_1226[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1226[i] = 0xF961783FL;
            if (l_1220)
                break;
            g_863[0][2] = (l_1221 == (((safe_rshift_func_uint16_t_u_u((((func_52((func_52((0x08L < (safe_mod_func_uint32_t_u_u(0x430EFA31L, 1L))), g_384[0][0][1], (1L < (g_930 != 0x9C707C3DL)), g_212[1]) != g_142), p_28, g_130, l_48[0]) & l_77) > g_184[1]) || l_48[0]), 8)) <= p_30) >= g_620));
            l_1226[6] = p_27;
            l_1231[7][0][6] = (l_1217 > (g_212[1] == (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_620, g_863[0][1])), g_703))));
        }
    }
    for (p_26 = 0; (p_26 != (-13)); --p_26)
    {
        const unsigned short l_1248 = 0UL;
        const unsigned l_1260 = 18446744073709551607UL;
        int l_1274 = 0xC42147E6L;
        const char l_1302 = 0L;
        int l_1539 = 1L;
        int l_1588 = (-1L);
        unsigned l_1656 = 18446744073709551615UL;
        int l_1720 = 1L;
        for (p_29 = 1; (p_29 >= 0); p_29 -= 1)
        {
            int l_1257 = 1L;
            unsigned short l_1267 = 65535UL;
            int l_1518[3][4][5] = {{{0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}}, {{0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}}, {{0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}, {0xF464B4EAL, 0xF464B4EAL, 2L, 9L, (-9L)}}};
            int i, j, k;
            for (g_127 = 8; (g_127 >= 2); g_127 -= 1)
            {
                int l_1261 = 0xD50A196AL;
                unsigned short l_1319[9];
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_1319[i] = 8UL;
                if (g_384[p_29][(p_29 + 1)][(p_29 + 1)])
                {
                    unsigned l_1242 = 0UL;
                    int i;
                    for (g_130 = 5; (g_130 >= 0); g_130 -= 1)
                    {
                        int i;
                        g_1234 = (-3L);
                        g_1234 = (g_212[p_29] >= (l_48[(p_29 + 1)] || g_1235));
                        g_863[0][4] = p_27;
                        g_1234 = p_27;
                    }
                    for (g_455 = 0; (g_455 <= 0); g_455 += 1)
                    {
                        unsigned l_1243 = 4294967295UL;
                        int i, j;
                        g_863[g_455][(p_29 + 1)] = ((g_212[(g_455 + 1)] ^ (l_48[(g_455 + 3)] >= (g_385 != ((0x68C6L & func_40(l_1121[0][6][7])) >= g_901)))) ^ p_26);
                        g_863[0][2] = ((-1L) < ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(0x64B4L, (l_48[(g_455 + 3)] & g_398[1]))) | l_1242) | (g_385 >= l_51)) & func_52(func_40(p_26), g_184[5], g_11[5][0][0], g_130)), g_398[2])) == l_1243), 0)) != g_930));
                        g_863[0][2] = func_52(func_40(func_52(p_26, (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((g_384[1][3][2] == (func_40(l_1248) & g_212[1])) >= ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((((g_208 ^ (safe_lshift_func_uint8_t_u_u(((2L < l_1257) != 0x03ADL), 3))) != p_28) & p_30) <= (-1L)), p_27)) > g_1235) > 4294967288UL), l_1257)) <= 0x8035L), 4)) >= p_27)), 15)) != g_130), 0xCA015ACEL)), p_27, p_28)), l_1242, g_102, p_26);
                        if (p_27)
                            continue;
                    }
                    if (((safe_add_func_uint8_t_u_u(g_212[p_29], func_52(l_48[g_127], l_48[(p_29 + 3)], g_384[p_29][(p_29 + 1)][(p_29 + 1)], l_48[2]))) <= ((g_901 && ((g_128 >= p_26) != p_26)) || 0xDCE9C2B6L)))
                    {
                        return l_1248;
                    }
                    else
                    {
                        l_1261 = func_52((g_11[3][0][6] > l_48[(p_29 + 3)]), p_30, g_384[p_29][(p_29 + 1)][(p_29 + 1)], l_1260);
                        if (p_28)
                            break;
                    }
                }
                else
                {
                    unsigned short l_1286 = 65535UL;
                    short l_1309 = 2L;
                    int l_1312[6];
                    unsigned l_1347 = 0x1C6C83E9L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1312[i] = (-8L);
                    if (((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u(func_40((safe_mod_func_int32_t_s_s(l_1267, func_40(p_29)))))) | g_208), 65535UL)) > (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((0xD2L ^ l_1274), 2)) < (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_1286, l_1248)), 0x6A88L)), (-1L))) & 0xAC34L), 5L)))), 5UL))), l_48[0])), g_6))))
                    {
                        const unsigned short l_1301 = 0x8236L;
                        g_863[0][1] = (safe_lshift_func_int8_t_s_s((l_1257 > (func_52(g_102, ((func_52((((p_29 < (!(l_48[4] | (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_6, (((safe_sub_func_uint32_t_u_u(8UL, (func_52((g_430 != (g_384[p_29][(p_29 + 1)][(p_29 + 1)] && (safe_sub_func_uint32_t_u_u(func_40(l_1301), g_901)))), p_28, l_1257, l_1121[2][5][2]) | l_1220))) & (-1L)) && 0x6710A9DAL))), p_29)), p_26)), l_1121[0][6][7]))))) == p_28) != g_1234), p_29, p_30, l_1267) > p_30) ^ p_28), g_102, l_1302) < 65527UL)), 7));
                        l_51 = p_30;
                        l_1312[0] = (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_30 != 1UL), l_1309)), p_26)), ((g_385 || (l_1286 >= ((p_29 & ((safe_mod_func_int32_t_s_s(g_455, 0xD91A007CL)) | g_11[2][0][4])) && p_26))) > l_1260)));
                        l_51 = ((safe_rshift_func_uint8_t_u_s(((0x92L || 6UL) <= g_172), 4)) | 4294967295UL);
                    }
                    else
                    {
                        g_224 = ((safe_sub_func_uint8_t_u_u(p_28, p_26)) != (safe_add_func_int16_t_s_s((g_384[p_29][(p_29 + 1)][(p_29 + 1)] == g_398[1]), p_28)));
                        if (l_1319[4])
                            continue;
                    }
                    if (g_128)
                    {
                        l_1261 = (safe_rshift_func_uint8_t_u_s(g_398[3], 5));
                        g_224 = g_11[4][0][0];
                        l_1257 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0x5785L, (safe_lshift_func_uint8_t_u_s(func_52((0x84CCL < g_455), p_26, (safe_lshift_func_uint8_t_u_u(0xC1L, (0x2BEC6FA9L ^ (g_2 && p_26)))), p_28), l_51)))), p_26)), g_172));
                        if (g_208)
                            break;
                    }
                    else
                    {
                        unsigned short l_1332 = 9UL;
                        int l_1333[7] = {1L, 0L, 1L, 0L, 1L, 0L, 1L};
                        unsigned l_1346 = 0x3F9AAEBFL;
                        int i;
                        l_1332 = ((g_631 == g_901) == g_500);
                        l_1312[0] = ((func_52(p_30, func_40(p_26), l_1333[5], ((safe_rshift_func_uint8_t_u_u(((-8L) >= l_51), (+((g_863[0][2] != func_52(g_385, (g_224 & g_398[0]), p_27, p_30)) || 0xD1ABE4DFL)))) > p_28)) | g_930) | p_29);
                        l_1257 = g_384[p_29][(p_29 + 1)][(p_29 + 1)];
                        g_863[0][2] = func_52(((g_398[1] == ((0UL || (g_1234 && (l_1267 < 0xC3B5L))) ^ (((((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(0xC8L, 5)), (g_500 ^ (((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(0x7532L, 13)), 0x50L)) == l_1346) ^ p_29)))) || 0x46L), p_28)) < 0xE510L) != g_2) != l_1260) < g_398[1]))) <= l_1347), g_130, p_30, l_1248);
                    }
                    if (p_28)
                    {
                        return g_127;
                    }
                    else
                    {
                        int l_1364 = 0x854FE8C6L;
                        l_1312[0] = func_52(l_1319[4], l_48[0], l_1347, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(func_52((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(65535UL, 1L)), (safe_add_func_uint16_t_u_u((p_29 != ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x20F2L, (safe_lshift_func_uint8_t_u_s(((l_1364 <= g_1235) < g_901), p_28)))), l_1257)) ^ g_6)), 0UL)))), g_430, g_178, g_172), 2)), 13)) || l_48[5]));
                        l_1274 = g_102;
                        l_1274 = (safe_mod_func_uint8_t_u_u(((l_1364 > ((safe_lshift_func_int16_t_s_u(l_1364, (((l_1364 < (p_29 >= ((l_1274 != (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_1347 ^ p_26), 7)), ((safe_lshift_func_int8_t_s_s((((((func_52(g_901, (safe_lshift_func_uint8_t_u_s(p_26, 5)), l_1302, l_1364) <= g_212[1]) <= 0xF8C2L) || g_1234) | g_398[1]) ^ p_26), 4)) < l_1347)))) && 253UL))) <= l_1364) | 0x5BL))) >= p_28)) & g_863[0][5]), g_500));
                        if (l_1364)
                            continue;
                    }
                }
                l_1261 = (func_40(g_455) <= func_52((l_1257 >= (-7L)), ((g_102 <= g_384[p_29][(p_29 + 1)][(p_29 + 1)]) | (safe_rshift_func_uint16_t_u_u(p_30, (safe_add_func_int16_t_s_s(((g_6 & g_863[0][2]) < 0xB038L), p_26))))), l_1257, p_30));
                l_51 = (g_901 >= (safe_mul_func_int8_t_s_s(0L, l_1302)));
            }
            if ((g_212[p_29] && l_1248))
            {
                for (g_430 = 0; (g_430 <= 1); g_430 += 1)
                {
                    int i, j, k;
                    return g_384[p_29][(p_29 + 3)][p_29];
                }
            }
            else
            {
                const int l_1400 = 0L;
                int l_1435 = 0xBFDFDBD1L;
                short l_1481[9] = {(-7L), 0xAC72L, (-7L), 0xAC72L, (-7L), 0xAC72L, (-7L), 0xAC72L, (-7L)};
                const unsigned short l_1510 = 65535UL;
                int i;
                if ((safe_rshift_func_uint16_t_u_u(p_28, (safe_rshift_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_int8_t_s(p_28)) > p_26) == (safe_mod_func_int32_t_s_s(func_82((1L >= p_28), (safe_mul_func_int16_t_s_s((p_29 && ((safe_sub_func_int32_t_s_s(((l_1260 != p_27) <= ((((safe_sub_func_uint16_t_u_u(1UL, 0x1E55L)) || l_51) == p_30) > 65533UL)), g_212[p_29])) > 5UL)), g_2)), g_500, l_1302, g_212[1]), 0x0B73AFC7L))), g_11[2][0][4])) >= 0x3EE5L) == (-4L)) || g_930), 2)))))
                {
                    int l_1418 = 0x7ECA6D9FL;
                    int l_1434[10] = {0xD65A18F2L, 0xD7BA06FEL, 0xD65A18F2L, 0xD7BA06FEL, 0xD65A18F2L, 0xD7BA06FEL, 0xD65A18F2L, 0xD7BA06FEL, 0xD65A18F2L, 0xD7BA06FEL};
                    int l_1450 = (-1L);
                    int i;
                    l_1257 = ((p_29 & (safe_mul_func_int16_t_s_s(l_1400, (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(g_398[1], ((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(9L, (safe_mul_func_uint16_t_u_u(g_863[0][4], func_52(g_128, p_29, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1400, func_40(g_1417))), p_28)), p_29)), p_26))))) <= (-1L)), (-9L))) >= l_1418))), 2))))) > 0x27L);
                    if (g_178)
                    {
                        unsigned l_1433 = 0UL;
                        int l_1436[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1436[i] = 3L;
                        l_1434[5] = (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(func_111(((safe_mod_func_uint16_t_u_u((p_29 > (safe_add_func_int16_t_s_s(g_430, (safe_mul_func_int16_t_s_s(p_26, p_28))))), 1UL)) == (((safe_rshift_func_int16_t_s_s(g_184[5], (+l_1433))) ^ p_28) >= 0xA9217725L)), p_28), g_430)), g_863[0][0]));
                        l_1435 = (-8L);
                        l_1436[6] = (l_1418 ^ g_208);
                        g_863[0][2] = (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(g_212[p_29])) ^ 0xAEL), func_40((safe_unary_minus_func_int16_t_s(g_11[0][0][0])))));
                    }
                    else
                    {
                        int l_1451 = 0xEC7E34AEL;
                        unsigned l_1464[5][8] = {{0UL, 4294967290UL, 0x36BE32B8L, 0x1A5CC60FL, 0xD35932DDL, 4294967295UL, 4294967288UL, 4294967295UL}, {0UL, 4294967290UL, 0x36BE32B8L, 0x1A5CC60FL, 0xD35932DDL, 4294967295UL, 4294967288UL, 4294967295UL}, {0UL, 4294967290UL, 0x36BE32B8L, 0x1A5CC60FL, 0xD35932DDL, 4294967295UL, 4294967288UL, 4294967295UL}, {0UL, 4294967290UL, 0x36BE32B8L, 0x1A5CC60FL, 0xD35932DDL, 4294967295UL, 4294967288UL, 4294967295UL}, {0UL, 4294967290UL, 0x36BE32B8L, 0x1A5CC60FL, 0xD35932DDL, 4294967295UL, 4294967288UL, 4294967295UL}};
                        unsigned l_1465 = 9UL;
                        int i, j;
                        g_863[0][2] = (0L < 1UL);
                        l_1435 = (func_111((((safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(l_1435, ((safe_rshift_func_int8_t_s_s(func_67(p_28, p_26, p_28, (safe_add_func_uint32_t_u_u(func_82(p_29, l_1435, p_29, l_1434[5], p_27), l_1267)), p_26), g_2)) & 0xE499L))) < p_30), l_1449[5])) < 4UL) <= l_1450), l_1451) & 3L);
                        l_1465 = (func_82(p_26, ((g_6 || (g_398[1] > g_1234)) != (safe_mul_func_int8_t_s_s((g_2 & (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((+g_398[1]) ^ ((((safe_lshift_func_int8_t_s_u((p_30 == 65534UL), 1)) >= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((0UL <= l_1434[5]), g_631)), g_384[1][2][1]))) > 1L) && l_1418)) | p_30), l_1464[3][2])), 1))), p_30))), g_1417, g_224, l_1418) & g_1234);
                        g_224 = (g_102 != (((safe_lshift_func_int8_t_s_s((-7L), (safe_add_func_uint16_t_u_u(l_1435, (((safe_mod_func_uint16_t_u_u(g_6, g_208)) <= g_1234) != (safe_add_func_int32_t_s_s(l_1248, (func_111(p_26, l_1435) && l_1434[5])))))))) & l_1465) | g_1235));
                    }
                    l_1257 = p_27;
                    l_1257 = (safe_mul_func_uint16_t_u_u((func_82((+g_1234), (l_1274 && p_27), (((p_30 && (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(func_40(g_863[0][2]))), (p_26 >= ((safe_sub_func_uint8_t_u_u(255UL, p_28)) & p_27))))) ^ 0x84L) != p_28), l_1450, g_130) | l_1481[2]), 5L));
                }
                else
                {
                    const char l_1486 = 6L;
                    int l_1495 = 2L;
                    char l_1509 = 0xEEL;
                    l_1495 = ((safe_sub_func_uint16_t_u_u(func_111(l_1481[3], ((func_67((0x0FL | p_30), (l_1260 == (safe_mod_func_int32_t_s_s(g_224, l_1486))), (safe_rshift_func_int16_t_s_s(p_30, (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((func_111(l_1267, p_29) && p_30), 65533UL)), 5)) <= 0xBA98F4E3L), p_27)))), l_1257, p_27) > 4294967295UL) != g_1417)), p_26)) >= p_27);
                    if (g_128)
                    {
                        unsigned char l_1498 = 0x67L;
                        l_1435 = (((p_28 == g_11[5][0][5]) == (1L >= (g_2 & ((0x92L ^ (((safe_add_func_int8_t_s_s(l_1274, l_1498)) != (safe_add_func_uint32_t_u_u((p_26 > func_100(l_1486)), p_30))) != l_48[0])) != 1UL)))) | p_26);
                    }
                    else
                    {
                        g_1234 = (((safe_add_func_uint16_t_u_u(1UL, l_1495)) & (p_29 & ((((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s((0x9CD8L && ((0L && func_67((safe_add_func_uint8_t_u_u((func_111(l_1509, (p_30 >= (l_1435 >= l_1449[5]))) < l_1435), g_212[1])), g_398[1], g_385, p_26, p_29)) != g_11[2][0][4])), p_29)) && l_1510), p_30)) == p_28) > (-10L)) >= 1L))) < 0xC4F4L);
                        l_1495 = 6L;
                    }
                }
                g_863[0][4] = g_631;
                if (l_1302)
                    continue;
                for (g_178 = 0; (g_178 <= 0); g_178 += 1)
                {
                    const int l_1517 = 0xD4988692L;
                    int i, j;
                    g_863[g_178][(g_178 + 1)] = ((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((~func_111(p_26, (l_1449[0] && (9UL || (safe_add_func_uint32_t_u_u((func_111(l_1449[5], p_30) || 0x2D0DL), func_40(l_1517))))))), l_1518[2][2][2])), l_1517)) > l_1517);
                    l_51 = (safe_sub_func_int16_t_s_s(0x2B3FL, (safe_mod_func_int32_t_s_s((-5L), (safe_mod_func_uint32_t_u_u((l_48[0] & l_1260), (safe_mul_func_uint8_t_u_u((g_128 && p_28), l_1302))))))));
                    g_224 = func_111(((safe_rshift_func_uint8_t_u_s((~(safe_add_func_uint32_t_u_u(((~(safe_rshift_func_uint16_t_u_s((p_27 | p_27), 2))) >= ((0x0FL <= g_130) > (+func_40((0xC990L == (safe_lshift_func_uint8_t_u_s(l_1481[7], ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(65526UL, 4)) & 249UL), g_430)) && g_128)))))))), g_863[g_178][(g_178 + 1)]))), p_28)) & l_1539), g_224);
                }
            }
            for (g_901 = 0; (g_901 <= 1); g_901 += 1)
            {
                unsigned char l_1544 = 1UL;
                unsigned short l_1551 = 65535UL;
                l_1544 = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_620, 1)), p_29)) <= p_29);
                l_51 = (4294967291UL || ((p_27 > (-9L)) < (safe_sub_func_int16_t_s_s(p_29, 1L))));
                g_224 = (safe_lshift_func_uint16_t_u_s(0x1BDAL, g_930));
                l_1551 = (safe_rshift_func_uint16_t_u_s((func_40(g_455) || p_29), 8));
            }
        }
        g_1234 = g_127;
        l_1274 = (0xB30C2F50L || ((((((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_1539 & (0xD3L == (((safe_unary_minus_func_int8_t_s(func_67(l_1449[5], p_30, (g_1234 > 0x25587C10L), p_30, (func_67(l_1220, g_208, p_28, p_27, g_102) && l_77)))) >= l_77) == 0x98F9L))), 0xB0D905FCL)) >= g_11[4][0][5]), 0x478BL)), l_1121[0][6][7])) & 0x4CL) == l_48[2]) || g_178) > l_48[0]) & p_30));
        if ((safe_unary_minus_func_uint8_t_u(0x9AL)))
        {
            unsigned l_1579[6];
            int l_1580 = (-3L);
            unsigned l_1591 = 1UL;
            int i;
            for (i = 0; i < 6; i++)
                l_1579[i] = 1UL;
            for (l_77 = 1; (l_77 <= 5); l_77 += 1)
            {
                int l_1571[9] = {0x8BF258D1L, 0x8BF258D1L, 0L, 0x8BF258D1L, 0x8BF258D1L, 0L, 0x8BF258D1L, 0x8BF258D1L, 0L};
                int i;
                for (g_178 = 0; (g_178 <= 5); g_178 += 1)
                {
                    const short l_1564 = 0L;
                    int i;
                    l_1274 = g_398[l_77];
                    if (g_930)
                        continue;
                    l_1580 = (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_1564, (safe_sub_func_uint32_t_u_u((g_398[1] & (safe_mod_func_int32_t_s_s(((0x725C617BL & (safe_mod_func_int8_t_s_s(g_398[5], func_40(p_29)))) > l_1571[7]), p_26))), (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_mul_func_int8_t_s_s(l_1260, p_30)) && 0UL))), l_1579[1])), l_51)))))), p_27));
                    l_1581[6] = 0x4FF5FAE1L;
                }
                if (p_27)
                    break;
                g_863[0][5] = ((safe_mul_func_int16_t_s_s(p_28, (4294967287UL | g_11[2][0][4]))) <= ((safe_mul_func_int16_t_s_s(0x666FL, ((g_455 & ((safe_mul_func_uint16_t_u_u(l_1588, (((safe_mod_func_uint16_t_u_u(((l_1588 != 4294967294UL) <= (l_1248 | 0L)), 0xB523L)) == l_1571[7]) != g_11[1][0][0]))) >= l_1591)) && p_30))) != 0xC2L));
            }
        }
        else
        {
            unsigned char l_1620 = 0xB1L;
            int l_1675[1];
            const unsigned char l_1694[8][9][3] = {{{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}, {{4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}, {4UL, 250UL, 0x30L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1675[i] = (-6L);
            if (l_48[5])
            {
                char l_1619 = 3L;
                int l_1676[9] = {0x5323CBBEL, 0x5323CBBEL, 0x740719C9L, 0x5323CBBEL, 0x5323CBBEL, 0x740719C9L, 0x5323CBBEL, 0x5323CBBEL, 0x740719C9L};
                int i;
                if (g_384[1][4][0])
                {
                    const unsigned l_1613 = 0x9FB9D257L;
                    for (p_27 = 0; p_27 < 4; p_27 += 1)
                    {
                        for (g_385 = 0; g_385 < 8; g_385 += 1)
                        {
                            for (g_208 = 0; g_208 < 8; g_208 += 1)
                            {
                                l_1121[p_27][g_385][g_208] = 1L;
                            }
                        }
                    }
                    g_863[0][5] = p_27;
                    for (g_208 = 1; (g_208 <= 5); g_208 += 1)
                    {
                        unsigned char l_1614 = 0x57L;
                        int i;
                        g_1234 = func_40(((!l_1449[g_208]) || (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0xF2L, l_1449[g_208])), (safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s(g_930)) < ((g_212[1] <= p_29) || (p_28 < 0x35905434L))), 3)), l_48[0]))))))));
                        l_1614 = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_208, 5)), func_111(l_1449[g_208], (safe_mod_func_uint8_t_u_u(246UL, p_27))))) >= ((safe_lshift_func_uint8_t_u_u(p_29, (((l_1612[1] < func_40(l_1613)) <= g_2) & p_27))) != 0x137FL));
                    }
                }
                else
                {
                    const unsigned l_1622 = 0xC964B3E5L;
                    int l_1635 = 0x8D18A239L;
                    unsigned short l_1657 = 0x0F4DL;
                    if ((((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((-7L), ((((func_100(l_1619) > func_40(l_77)) > func_40(p_27)) < func_40((0x73L | g_11[0][0][5]))) != l_1620))), g_1234)) <= p_27) <= 0xBC54L))
                    {
                        unsigned char l_1621[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1621[i] = 0x90L;
                        l_1274 = (l_1621[1] >= l_1622);
                    }
                    else
                    {
                        short l_1644[7][3][3] = {{{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}, {{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}, {{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}, {{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}, {{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}, {{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}, {{0L, 0L, 8L}, {0L, 0L, 8L}, {0L, 0L, 8L}}};
                        int i, j, k;
                        l_1635 = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(g_127, (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0UL, (safe_lshift_func_uint8_t_u_u((p_27 <= (safe_rshift_func_uint8_t_u_s(g_178, p_29))), p_29)))), l_1620)))), 15));
                        g_1234 = (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((g_1235 && (254UL <= p_27)), (((g_128 & (safe_lshift_func_uint8_t_u_s(p_30, (((safe_lshift_func_int8_t_s_s((g_703 < (!((((!p_27) | (-1L)) > 0xB0L) == l_1619))), l_1644[1][1][2])) >= 0x85L) ^ p_28)))) >= 0L) || p_29))) ^ 0L), p_30));
                        l_1274 = (!(-1L));
                        l_51 = ((safe_rshift_func_int8_t_s_u(((l_1644[2][0][0] | p_27) == (safe_lshift_func_uint8_t_u_u((g_1234 ^ 65530UL), (safe_mul_func_int16_t_s_s(((((g_863[0][3] < ((safe_unary_minus_func_uint32_t_u((l_1644[1][0][2] <= ((0x85L < g_930) && (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((-9L), 0x6129879AL)), l_1644[1][1][2])))))) || 0x48FD44BDL)) && 5L) == (-5L)) ^ l_1656), g_142))))), 4)) & g_384[1][3][2]);
                    }
                    if ((~(p_26 > l_1657)))
                    {
                        int l_1674 = 0x23106F18L;
                        l_1675[0] = ((safe_rshift_func_uint16_t_u_s(p_26, g_455)) || ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(2L, ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1302 && func_67(p_26, l_1656, p_30, (safe_mod_func_int8_t_s_s(g_130, (safe_lshift_func_int16_t_s_s(l_1619, 2)))), g_11[3][0][4])), 7)), (-7L))), p_29)) ^ l_1674))), 7)) ^ p_27));
                    }
                    else
                    {
                        return g_863[0][0];
                    }
                    if (p_30)
                        continue;
                    l_1676[2] = l_1612[0];
                }
                for (g_1234 = (-19); (g_1234 >= (-28)); g_1234 = safe_sub_func_uint16_t_u_u(g_1234, 1))
                {
                    unsigned char l_1691 = 246UL;
                    l_1675[0] = (safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((g_224 != (l_1581[6] | (safe_mul_func_uint16_t_u_u((!l_1676[2]), l_1675[0])))), func_40(p_27))), l_1675[0])), g_398[0])) | (safe_sub_func_int32_t_s_s((~p_28), 0UL))), 7L));
                    l_1675[0] = func_111(g_620, g_172);
                    if (l_1691)
                        continue;
                    for (g_172 = 0; (g_172 != 13); ++g_172)
                    {
                        if (p_26)
                            break;
                        if (p_26)
                            break;
                    }
                }
                l_1675[0] = (func_111((0x5FEFL & p_26), func_67(g_398[0], l_1694[4][7][1], (safe_mul_func_int16_t_s_s((-5L), (safe_sub_func_uint32_t_u_u(func_52(((safe_lshift_func_uint8_t_u_u(1UL, 7)) && (g_703 >= l_1694[0][1][0])), func_52((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(p_30, p_27)) >= 0x650FL), l_1694[3][2][1])), g_863[0][2], g_863[0][2], p_29), g_863[0][2], g_631), g_1235)))), g_142, g_142)) > g_11[2][0][4]);
            }
            else
            {
                const int l_1710 = 0xFDF3DBBDL;
                int l_1711 = (-6L);
                for (g_127 = 5; (g_127 >= 1); g_127 -= 1)
                {
                    int i;
                    if ((safe_unary_minus_func_uint16_t_u(((l_1449[g_127] > ((safe_add_func_uint8_t_u_u((1UL > (safe_lshift_func_uint8_t_u_s(func_40((((g_398[g_127] | (func_40(l_1710) | ((((p_30 | (g_130 & g_863[0][4])) < ((4294967295UL ^ p_26) ^ p_29)) != 0xB10BC7D6L) <= 7L))) && (-1L)) != 0x43CE68B4L)), 7))), g_11[4][0][7])) && l_1675[0])) < 0UL))))
                    {
                        int l_1714[9] = {0x1A6B1A91L, 0xAC05EF76L, 0x1A6B1A91L, 0xAC05EF76L, 0x1A6B1A91L, 0xAC05EF76L, 0x1A6B1A91L, 0xAC05EF76L, 0x1A6B1A91L};
                        unsigned l_1719 = 0xC4E6F0AAL;
                        int i;
                        if (p_28)
                            break;
                        l_1711 = (l_1694[4][7][1] < p_27);
                        l_1675[0] = (((safe_sub_func_uint8_t_u_u(func_52(g_1234, g_2, l_1714[2], (((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u(((func_40(l_1711) > (0x28L >= ((p_26 < p_30) > 0x8B7DL))) < g_212[0]), p_30)) | 0x3682B4C1L) == 0xC8BBL), 2)) & 1UL) > l_1719)), 0x81L)) | p_26) & l_1720);
                        l_51 = (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u((g_224 && g_172), (p_28 || (-1L)))))), (safe_lshift_func_uint8_t_u_u(p_30, 2))));
                    }
                    else
                    {
                        g_224 = l_1449[g_127];
                        if (p_26)
                            continue;
                    }
                    l_1711 = (g_631 > (-1L));
                }
                l_1675[0] = l_1121[0][6][7];
            }
            for (g_130 = 0; (g_130 >= 14); g_130 = safe_add_func_uint8_t_u_u(g_130, 1))
            {
                unsigned char l_1734 = 0x87L;
                g_863[0][1] = (safe_lshift_func_uint8_t_u_s(p_26, (l_1720 || (safe_lshift_func_uint16_t_u_s((p_26 == (p_29 == (l_1734 | (l_1675[0] >= ((0L & (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(func_40(p_29), 11)) & 65534UL), 4))) && g_184[5]))))), p_28)))));
            }
        }
    }
    return l_48[0];
}







static unsigned short func_40(const int p_41)
{
    const int l_46 = 0xED5EBAE8L;
    int l_47 = 0x47D02C9AL;
    l_47 = ((l_46 == l_46) || g_6);
    l_47 = ((g_11[4][0][2] || l_46) > l_47);
    return g_6;
}







static int func_52(short p_53, unsigned short p_54, int p_55, const unsigned char p_56)
{
    p_55 = ((func_40(g_398[1]) < g_901) <= g_184[2]);
    for (g_178 = 0; (g_178 >= 44); ++g_178)
    {
        unsigned l_1124 = 18446744073709551615UL;
        return l_1124;
    }
    for (g_208 = 1; (g_208 <= 5); g_208 += 1)
    {
        short l_1127 = 0x89A2L;
        p_55 = ((p_56 >= p_56) >= (safe_lshift_func_uint16_t_u_s(l_1127, 6)));
    }
    p_55 = (safe_lshift_func_int16_t_s_u(1L, 11));
    return g_184[4];
}







static short func_67(unsigned p_68, const short p_69, unsigned short p_70, unsigned p_71, short p_72)
{
    unsigned char l_88 = 0xDCL;
    int l_1064 = (-10L);
    if ((((safe_add_func_int16_t_s_s(func_40(p_70), (((safe_rshift_func_int8_t_s_s(func_82(g_11[3][0][4], func_40((((l_88 && (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_88, (p_71 != (safe_mul_func_int8_t_s_s(func_40(l_88), g_11[2][0][4]))))), 0x2D96L))) <= g_11[1][0][3]) ^ p_68)), g_2, l_88, l_88), p_69)) > g_6) ^ 0x4C36DFCCL))) != l_88) && 65535UL))
    {
        unsigned l_1040 = 0xBEB7AF03L;
        int l_1048 = 0x4257EF90L;
        unsigned l_1056 = 0xB8C0ECA7L;
        const char l_1094[5] = {0L, 0L, 0L, 0L, 0L};
        int i;
        if ((safe_mul_func_int8_t_s_s(0L, (p_69 != l_1040))))
        {
            int l_1047 = 6L;
            l_1048 = (safe_sub_func_uint16_t_u_u(func_82(g_620, (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(l_1040, l_1040)), (l_1047 ^ func_111(p_69, func_111(l_1047, p_72))))), g_384[0][3][1], l_1047, g_184[5]), l_1047));
        }
        else
        {
            for (p_71 = 0; (p_71 != 27); ++p_71)
            {
                for (g_455 = 0; (g_455 < (-24)); g_455 = safe_sub_func_uint8_t_u_u(g_455, 5))
                {
                    int l_1061[9] = {(-1L), (-2L), (-1L), (-2L), (-1L), (-2L), (-1L), (-2L), (-1L)};
                    int i;
                    if (((l_88 > (p_69 | ((safe_unary_minus_func_uint8_t_u(l_1056)) <= (p_68 != (0x7460L <= (func_100(l_88) & (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(((g_631 <= (g_6 != 6UL)) || g_2), l_1061[8])), 0)))))))) && p_68))
                    {
                        g_863[0][2] = 0L;
                        l_1064 = (1UL >= (safe_rshift_func_int8_t_s_s(g_863[0][4], 4)));
                        l_1064 = l_88;
                    }
                    else
                    {
                        l_1064 = l_1061[8];
                        if (g_11[0][0][6])
                            continue;
                        return g_863[0][2];
                    }
                    if (l_1048)
                        continue;
                }
            }
        }
        g_863[0][1] = g_6;
        for (g_930 = 0; (g_930 < 24); ++g_930)
        {
            unsigned l_1067 = 3UL;
            l_1067 = p_71;
        }
        for (g_142 = 3; (g_142 != (-16)); --g_142)
        {
            unsigned l_1095[2][1];
            int l_1118 = 7L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1095[i][j] = 0xCD219A31L;
            }
            for (g_430 = 0; (g_430 > 50); g_430 = safe_add_func_int32_t_s_s(g_430, 6))
            {
                short l_1096 = (-1L);
                int l_1097 = 4L;
                l_1097 = ((safe_mul_func_int8_t_s_s((((((((((func_40(((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((p_68 >= ((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_88, ((safe_unary_minus_func_int32_t_s(func_111(p_70, func_111(((safe_mul_func_int8_t_s_s(0x83L, (g_430 ^ ((0x13236D8CL < ((0x448CL >= ((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((((func_111((safe_unary_minus_func_int32_t_s(((g_130 || func_111(func_40(l_1094[0]), g_500)) == g_178))), p_69) > g_384[0][0][0]) & g_178) & 5L) > p_68), 0xEC35L)) & p_72) ^ 65535UL), 0xFAL)), p_72)) && p_72)) == l_1095[0][0])) > 1UL)))) | g_631), l_1096)))) ^ 65535UL))), 0x62L)) || p_70), g_384[1][3][2])) != p_70)) && p_69) ^ g_224), 0x65L)), g_631)) != 0xB117A4A8L)) && 1L) >= g_863[0][0]) || p_69) != g_184[4]) || p_68) < p_70) && g_178) < p_69) >= l_1094[3]), p_70)) < 0UL);
                l_1097 = (safe_add_func_int16_t_s_s(((-1L) ^ (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_11[2][0][4], 7)), (safe_lshift_func_int16_t_s_u(func_111((p_69 <= p_71), p_72), 2))))), (0x07L || (((((safe_rshift_func_int8_t_s_s(p_69, g_102)) > 1L) > 65529UL) >= p_72) || (-3L)))));
                l_1118 = ((safe_rshift_func_int16_t_s_u((p_68 > (g_500 || (l_1040 == 0UL))), g_863[0][3])) != (((safe_rshift_func_int8_t_s_s((p_71 & p_72), 2)) && ((!((g_430 && (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(0L, p_72)), 6))) < l_1097)) >= 0x5CL)) || p_72));
            }
        }
    }
    else
    {
        g_863[0][1] = l_1064;
        for (g_930 = 9; (g_930 <= 14); g_930++)
        {
            g_224 = (0x8DD8L & l_88);
            g_863[0][3] = (-1L);
        }
    }
    return l_1064;
}







static char func_82(const unsigned p_83, int p_84, int p_85, unsigned p_86, unsigned p_87)
{
    int l_97 = 0L;
    unsigned char l_942 = 250UL;
    int l_958 = 9L;
    const unsigned l_1037[2] = {0x41F8658EL, 0x41F8658EL};
    int i;
    g_863[0][4] = ((safe_mod_func_int32_t_s_s(((l_97 && (safe_rshift_func_int16_t_s_s(func_100((func_40(g_102) || (l_97 >= (safe_add_func_int16_t_s_s(l_97, l_97))))), (safe_add_func_int32_t_s_s(((0xD280L & g_455) ^ 0x9694L), p_84))))) <= 1L), g_455)) > 0xB1C3L);
    l_942 = ((safe_unary_minus_func_uint32_t_u((func_100(g_430) | ((p_83 >= (safe_add_func_int8_t_s_s(g_102, (safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(g_11[2][0][4], ((safe_add_func_uint8_t_u_u(0xB8L, (0x42L < (g_455 && func_40(g_11[5][0][8]))))) & 0xA9L))) ^ 0xB9L), 0xF9L))))) < g_11[2][0][4])))) >= l_97);
    for (g_208 = 6; (g_208 < 25); g_208 = safe_add_func_int16_t_s_s(g_208, 6))
    {
        unsigned short l_968 = 0UL;
        p_85 = p_87;
        p_84 = (-6L);
        for (g_178 = 0; (g_178 <= 1); g_178 += 1)
        {
            char l_957[10][8][3] = {{{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}, {{(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}, {(-3L), 0L, 0xE0L}}};
            int l_978 = 0xBBF471A1L;
            int i, j, k;
            l_958 = ((func_111(g_212[1], ((g_127 ^ ((safe_mod_func_uint32_t_u_u(((p_86 < p_84) >= (g_863[0][2] && (safe_lshift_func_int16_t_s_s(0x6A02L, (p_85 == (safe_rshift_func_uint16_t_u_u(func_40((g_430 > (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_102, g_212[1])), g_930)) != p_86), 7)))), l_957[9][1][1]))))))), g_863[0][5])) < 0x15L)) == l_97)) == g_430) && p_87);
            if (l_97)
                break;
            for (g_224 = 0; (g_224 <= 1); g_224 += 1)
            {
                unsigned l_975 = 0x64B527F9L;
                const char l_996 = 0xE8L;
                int l_1004 = 0x19CA011FL;
                for (g_128 = 0; (g_128 <= 0); g_128 += 1)
                {
                    int l_965 = 0x7F10ED44L;
                    int i, j;
                    g_863[g_128][g_178] = (safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((+(p_83 && p_83)), l_965)) | (l_942 ^ (safe_rshift_func_int8_t_s_s(l_968, 1)))) || (safe_mul_func_uint16_t_u_u(1UL, 0UL))), (func_111(g_11[2][0][4], (safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((g_224 != l_957[9][1][1]), l_957[8][5][1])) & l_975) == g_901), l_968))) ^ 2L)));
                    if (g_455)
                        continue;
                }
                l_958 = (g_142 > (0x74362C23L <= (0xB050DCE3L < ((safe_add_func_uint8_t_u_u(g_224, (~0x39L))) != l_957[1][4][0]))));
                if (func_111(((0xF2L || p_87) < l_975), l_975))
                {
                    short l_993 = 1L;
                    const unsigned l_997[9] = {0xE21F4F5FL, 0xE21F4F5FL, 4294967295UL, 0xE21F4F5FL, 0xE21F4F5FL, 4294967295UL, 0xE21F4F5FL, 0xE21F4F5FL, 4294967295UL};
                    int i;
                    l_978 = g_620;
                    for (g_703 = 0; (g_703 <= 0); g_703 += 1)
                    {
                        int i, j;
                        g_863[g_703][g_178] = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_968 == p_86), 7)), (safe_sub_func_uint32_t_u_u(l_975, ((~((safe_mul_func_uint8_t_u_u((0xD0L <= (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_942, 13)), (safe_rshift_func_uint8_t_u_u(l_993, 0))))), g_6)) || g_212[1])) ^ g_212[1])))));
                        g_863[g_703][g_224] = func_111((((safe_rshift_func_uint8_t_u_u(g_398[4], l_996)) > g_142) || func_40((((g_102 & l_993) & (((l_997[0] ^ ((safe_rshift_func_uint16_t_u_s(func_40((((safe_lshift_func_uint16_t_u_s(p_87, 11)) <= l_975) | 0xDAL)), 15)) || 6L)) != (-6L)) && p_83)) ^ g_184[2]))), l_958);
                        if (g_11[2][0][4])
                            continue;
                    }
                    g_863[0][2] = p_84;
                    l_1004 = (safe_lshift_func_uint8_t_u_u(255UL, func_40(g_385)));
                }
                else
                {
                    for (l_942 = 0; (l_942 <= 1); l_942 += 1)
                    {
                        p_85 = (g_208 > (+((0x88L || ((safe_mul_func_int8_t_s_s(0x50L, (g_224 <= l_957[3][7][0]))) >= (((safe_lshift_func_int16_t_s_u(0xAC00L, 10)) > g_11[2][0][4]) || g_128))) >= l_957[9][1][1])));
                    }
                    if (g_430)
                        break;
                    for (g_172 = 0; (g_172 <= 0); g_172 += 1)
                    {
                        int i, j;
                        g_863[g_172][(g_172 + 2)] = g_863[g_172][(g_178 + 2)];
                        g_863[g_172][(g_172 + 1)] = (((g_127 != (p_84 >= g_130)) | (g_142 && g_863[g_172][(g_178 + 2)])) || (safe_lshift_func_int8_t_s_s(((((p_85 & (((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((((0x81L & ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((!(safe_lshift_func_int16_t_s_s(g_208, (safe_add_func_uint32_t_u_u(0x717C58CFL, g_2))))), l_975)), 0x4A22L)) ^ g_863[0][2])) || g_11[2][0][4]) != p_84), g_703)) & (-1L)), g_398[3])) > p_86) < 65527UL)) <= p_83) == p_84) == 0UL), 3)));
                    }
                    g_863[0][4] = p_86;
                }
            }
            p_84 = (((safe_mul_func_uint8_t_u_u(l_958, func_111(p_85, l_942))) && 1L) | func_40(g_398[0]));
            for (g_142 = 0; (g_142 <= 1); g_142 += 1)
            {
                int l_1033 = (-3L);
                p_85 = p_86;
                g_224 = ((g_384[0][3][2] < l_968) <= (l_968 != ((p_87 != g_703) ^ (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0UL, (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_1033, 0x15EDL)), p_87)))), l_968)))));
                return g_703;
            }
        }
        for (g_620 = 0; (g_620 <= 20); g_620 = safe_add_func_int16_t_s_s(g_620, 9))
        {
            short l_1036 = 0xE7DCL;
            p_84 = l_1036;
            p_84 = l_1037[0];
        }
    }
    return l_1037[1];
}







static const short func_100(int p_101)
{
    char l_122 = 4L;
    int l_143 = (-1L);
    unsigned l_211 = 0UL;
    unsigned short l_328 = 65535UL;
    short l_331 = 0x8794L;
    short l_386[6][3][8] = {{{1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}}, {{1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}}, {{1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}}, {{1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}}, {{1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}}, {{1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}, {1L, 0xC1FBL, (-10L), (-1L), (-1L), (-10L), 0xC1FBL, 1L}}};
    int l_394[5];
    char l_431 = 0xC3L;
    char l_448 = 0xECL;
    int l_541 = 0x1D08C08DL;
    const unsigned short l_689 = 0xDC78L;
    char l_776 = 0x39L;
    unsigned l_839 = 0UL;
    unsigned char l_902 = 0x3BL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_394[i] = (-4L);
    for (p_101 = 11; (p_101 != 14); p_101++)
    {
        char l_125 = (-3L);
        short l_126 = 6L;
        short l_129 = 1L;
        int l_151 = 0xEDAF9C58L;
        short l_210 = (-9L);
        char l_247 = 0x94L;
        if ((((p_101 & 0L) || func_40((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((func_111(func_40((safe_mul_func_int8_t_s_s(func_40((p_101 == (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_122, p_101)), (0x1313FE16L | (safe_rshift_func_uint16_t_u_s(g_2, 8))))), l_125)))), l_126))), g_2) || 0L), 8)) ^ g_2), 1UL)))) ^ l_125))
        {
            unsigned short l_152[4][6][2] = {{{0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}}, {{0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}}, {{0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}}, {{0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}, {0UL, 3UL}}};
            int i, j, k;
            g_128 = g_11[0][0][1];
            l_129 = 0x8A40F947L;
            g_130 = g_11[2][0][4];
            for (g_128 = 16; (g_128 == 13); --g_128)
            {
                unsigned short l_144 = 0xEC29L;
                unsigned l_173 = 18446744073709551609UL;
                if ((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_102, p_101)), ((+p_101) && g_128))) <= (((((func_40(p_101) | (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint8_t_u_u(p_101, (p_101 & ((g_128 > p_101) && p_101)))) | l_126)))) & 0xC63CL) >= p_101) && (-8L)) && g_6)), p_101)))
                {
                    g_142 = g_2;
                    l_143 = p_101;
                    if (g_142)
                        break;
                }
                else
                {
                    int l_153 = 0xC948D72DL;
                    int l_181[8][8][4] = {{{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}, {{(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}, {(-10L), 1L, 0x41D4D588L, 0x8BE2EB9BL}}};
                    int i, j, k;
                    l_144 = 0xFED72739L;
                    if ((safe_rshift_func_uint8_t_u_u((func_111(p_101, (safe_mul_func_int8_t_s_s(g_102, 1UL))) | (safe_lshift_func_int16_t_s_s(g_130, 4))), 1)))
                    {
                        l_151 = ((0x5718CB29L <= ((p_101 || g_130) >= l_144)) ^ p_101);
                        l_143 = 0xC2217A83L;
                    }
                    else
                    {
                        l_152[2][2][1] = 0x8CBBEE73L;
                    }
                    if (((g_142 & 0xB92A5F0EL) == l_153))
                    {
                        int l_163[6] = {6L, 1L, 6L, 1L, 6L, 1L};
                        int i;
                        g_172 = (p_101 <= func_40((p_101 | ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((1L != 0xC662L), l_163[0])), 9UL)))), (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(9UL, (safe_rshift_func_uint8_t_u_s(l_143, 1)))) >= (safe_rshift_func_int8_t_s_s((g_128 <= p_101), 5))), l_153)))) > 0L))));
                        l_173 = l_143;
                        g_178 = ((1UL & (g_102 || ((((safe_lshift_func_int16_t_s_s(((p_101 | (safe_rshift_func_int16_t_s_s((((l_144 >= ((func_40(l_122) > 0xD13A51B2L) ^ l_144)) | (g_11[2][0][4] | l_153)) | l_153), g_127))) ^ 0x5CL), 12)) ^ g_128) && p_101) < l_144))) && (-1L));
                    }
                    else
                    {
                        l_181[5][6][2] = (func_40((safe_rshift_func_uint16_t_u_s(g_6, 5))) && g_172);
                    }
                }
                l_151 = l_129;
                g_184[5] = (safe_add_func_uint8_t_u_u(l_173, p_101));
            }
        }
        else
        {
            unsigned l_209 = 0x3BB0A9F5L;
            int l_213[5][7][7] = {{{(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}}, {{(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}}, {{(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}}, {{(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}}, {{(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}, {(-8L), 0xD88BDD47L, 0x53668A93L, 1L, 0xD88BDD47L, 0xD14C442BL, 0xD88BDD47L}}};
            int l_266 = 0L;
            unsigned l_332 = 4294967295UL;
            int i, j, k;
            for (l_129 = 0; (l_129 != 12); ++l_129)
            {
                unsigned l_203[9] = {0x9C46E934L, 18446744073709551615UL, 0x9C46E934L, 18446744073709551615UL, 0x9C46E934L, 18446744073709551615UL, 0x9C46E934L, 18446744073709551615UL, 0x9C46E934L};
                unsigned l_227 = 18446744073709551615UL;
                int i;
                g_212[1] = func_111(((l_143 & (safe_sub_func_int16_t_s_s((((0UL && p_101) < (l_143 || ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((func_111(func_40(func_111(((safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((p_101 != ((safe_sub_func_uint16_t_u_u(g_127, (l_203[5] & (1L <= (safe_add_func_uint8_t_u_u(func_40((safe_mul_func_uint8_t_u_u(1UL, 0xDBL))), l_122)))))) < g_208)), g_184[5])) && 0x3934F947L) | l_122), g_172)) != g_2), g_130)), g_130) < l_209) && 0x96L), 7)), l_210)), 0x7FEAL)) ^ 2L), g_102)) | l_203[3]))) > 0xCF24L), g_130))) >= g_2), l_211);
                l_213[2][5][3] = func_40(p_101);
                if ((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(g_212[1], p_101)) > 0xE7L), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_213[2][5][3] || g_102) != ((safe_add_func_uint32_t_u_u(func_111(g_142, ((((((func_40(l_213[2][6][4]) || l_209) == p_101) < g_208) < g_142) < p_101) > p_101)), l_213[2][5][3])) <= p_101)), g_184[5])), p_101)))))
                {
                    short l_234 = 0xED75L;
                    g_224 = 0x093CF060L;
                    l_234 = (safe_add_func_int8_t_s_s((l_227 == (safe_rshift_func_uint16_t_u_u((((((-1L) ^ func_111((safe_lshift_func_int8_t_s_u(0x8BL, 2)), ((-6L) && (g_127 != ((g_11[2][0][4] & (safe_mul_func_int8_t_s_s((p_101 ^ l_209), 3UL))) || p_101))))) && p_101) <= g_184[0]) < l_213[2][5][3]), g_128))), p_101));
                }
                else
                {
                    const unsigned short l_237[1] = {0xF291L};
                    int i;
                    for (l_211 = (-26); (l_211 < 32); ++l_211)
                    {
                        unsigned char l_242[10][2][5] = {{{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}, {{250UL, 0xD1L, 0x19L, 4UL, 254UL}, {250UL, 0xD1L, 0x19L, 4UL, 254UL}}};
                        int i, j, k;
                        l_143 = func_40(l_237[0]);
                        g_224 = ((g_6 | (l_237[0] || (safe_add_func_int32_t_s_s((-4L), ((0xD79FL < (-9L)) != func_111(p_101, ((0xD552EA11L && (0x62L || (safe_add_func_uint32_t_u_u((g_212[1] | l_242[1][1][0]), 0x7C29BA30L)))) | 8UL))))))) | l_227);
                    }
                    if ((((((((l_122 < func_111((safe_sub_func_int32_t_s_s(g_208, g_208)), p_101)) & ((func_40(l_211) >= 0x2EL) | g_224)) ^ 4L) & (-5L)) <= 5UL) > p_101) ^ g_11[2][0][4]))
                    {
                        unsigned short l_248[7][2] = {{0x1DF7L, 65531UL}, {0x1DF7L, 65531UL}, {0x1DF7L, 65531UL}, {0x1DF7L, 65531UL}, {0x1DF7L, 65531UL}, {0x1DF7L, 65531UL}, {0x1DF7L, 65531UL}};
                        int i, j;
                        g_224 = (safe_rshift_func_uint8_t_u_s(func_40(((l_247 & (3L >= (l_248[1][1] > l_209))) == (safe_rshift_func_uint16_t_u_s(func_111(func_111((safe_mul_func_uint8_t_u_u(0xABL, (+g_142))), p_101), g_2), g_224)))), 3));
                    }
                    else
                    {
                        return p_101;
                    }
                }
            }
            if (g_224)
                continue;
            for (l_126 = 0; (l_126 >= (-25)); --l_126)
            {
                int l_257 = 0xB442EEB0L;
                char l_273 = (-1L);
                short l_284 = 0x2CBCL;
                l_257 = (func_111(((0xF2L != (((p_101 | ((safe_sub_func_int32_t_s_s(((l_257 & l_151) && 0L), (l_122 <= p_101))) && l_126)) || (safe_add_func_int16_t_s_s((-7L), 0x678CL))) == l_143)) && (-4L)), g_184[5]) & p_101);
                g_224 = func_40(g_184[5]);
                g_224 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((((safe_add_func_uint8_t_u_u((l_266 | (g_178 | (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_111(g_127, (safe_add_func_int8_t_s_s(l_273, func_40((safe_lshift_func_uint8_t_u_s(l_126, (((safe_lshift_func_int16_t_s_s(((0x9BL == 254UL) == l_266), (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_213[2][1][3] == l_273), l_213[2][4][0])), l_211)), p_101)))) < l_126) | g_178))))))), g_212[1])), g_212[1])))), 0x4AL)) <= p_101) < 0x68L) ^ 0x8CL) ^ l_284), p_101)), l_126));
            }
            for (g_142 = 28; (g_142 != 24); g_142 = safe_sub_func_uint16_t_u_u(g_142, 8))
            {
                unsigned l_304 = 0UL;
                int l_333[7] = {1L, 1L, 0x4D871698L, 1L, 1L, 0x4D871698L, 1L};
                int i;
                for (g_178 = 0; (g_178 != 59); g_178 = safe_add_func_uint32_t_u_u(g_178, 5))
                {
                    short l_292[8][7] = {{1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}, {1L, 0xE6DAL, 1L, 0xE6DAL, 1L, 0xE6DAL, 1L}};
                    unsigned l_293 = 0x8E152159L;
                    int i, j;
                    for (l_247 = 0; (l_247 < (-30)); l_247 = safe_sub_func_int8_t_s_s(l_247, 1))
                    {
                        unsigned l_291 = 1UL;
                        l_143 = (l_291 && (248UL < 0UL));
                        g_224 = func_111(g_11[2][0][4], l_291);
                    }
                    l_292[6][2] = g_172;
                    if (p_101)
                    {
                        unsigned char l_294 = 0x54L;
                        int l_295 = 0x90D4C23DL;
                        l_295 = ((((((l_210 | (((65528UL >= l_293) != ((l_151 && ((p_101 > (func_111((l_211 || (g_127 & (1L <= p_101))), p_101) == 0xA5L)) && l_294)) != l_292[6][2])) != g_184[2])) >= g_208) ^ l_294) ^ l_293) != 4294967295UL) ^ 1UL);
                        return p_101;
                    }
                    else
                    {
                        unsigned l_296 = 0UL;
                        l_296 = l_209;
                    }
                    for (l_293 = 0; (l_293 < 4); ++l_293)
                    {
                        unsigned short l_303 = 0x1F78L;
                        int l_319 = 0xAE991FC1L;
                        g_224 = (safe_lshift_func_uint8_t_u_u(((-1L) || (p_101 ^ g_11[2][0][4])), (p_101 && ((-1L) > ((p_101 ^ g_127) != (safe_sub_func_int32_t_s_s(l_303, l_304)))))));
                        l_319 = (safe_lshift_func_uint16_t_u_s((!(safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(1L, (safe_rshift_func_uint16_t_u_u(g_178, 1)))) | ((p_101 == 9L) != l_266)) <= ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((0x8860L != ((((func_40(((safe_add_func_uint8_t_u_u(g_184[2], ((func_111(g_6, ((l_304 != l_293) != l_209)) || 0x0BL) >= p_101))) <= 0L)) > p_101) > 9UL) & l_304) ^ p_101)), l_143)), l_304)) >= l_292[1][5])), 0x3FF6D9E3L))), p_101));
                    }
                }
                l_333[1] = ((safe_lshift_func_uint8_t_u_s(g_11[0][0][5], (0x564FD79DL <= ((safe_add_func_int16_t_s_s(0x3640L, (safe_lshift_func_uint16_t_u_u(g_178, (!(((((safe_mod_func_uint32_t_u_u(g_11[2][0][4], g_212[0])) != l_122) & l_328) <= (safe_lshift_func_uint8_t_u_u((l_331 == l_122), g_212[1]))) < l_332)))))) ^ 0xC01C5CEDL)))) | g_11[2][0][1]);
                for (l_332 = 0; (l_332 <= 59); l_332 = safe_add_func_int16_t_s_s(l_332, 5))
                {
                    for (g_178 = 0; g_178 < 6; g_178 += 1)
                    {
                        g_184[g_178] = 0x9BD6L;
                    }
                    if (l_333[1])
                        continue;
                    if (p_101)
                        continue;
                    for (l_125 = 0; (l_125 <= (-18)); l_125 = safe_sub_func_uint16_t_u_u(l_125, 2))
                    {
                        g_224 = (l_122 || (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_142 & p_101), 2)), g_184[3])));
                        return g_212[0];
                    }
                }
                l_143 = 0xF6DDA776L;
            }
        }
        for (g_172 = 0; (g_172 > 7); g_172 = safe_add_func_int8_t_s_s(g_172, 7))
        {
            short l_357 = (-1L);
            const unsigned l_381 = 1UL;
            short l_395[4];
            int i;
            for (i = 0; i < 4; i++)
                l_395[i] = 0x8A1AL;
            if ((safe_sub_func_uint16_t_u_u(((l_328 >= ((+(g_142 > func_111((!0xBA4E0764L), p_101))) ^ (((0L < (func_40(l_143) >= (0x65C56F89L > g_184[2]))) > p_101) > 0xF04F6DF0L))) != l_328), l_211)))
            {
                for (g_208 = (-7); (g_208 == 37); g_208 = safe_add_func_uint16_t_u_u(g_208, 1))
                {
                    short l_350 = 0L;
                    l_350 = p_101;
                }
            }
            else
            {
                g_224 = p_101;
            }
            for (g_224 = 0; (g_224 != (-21)); --g_224)
            {
                char l_358 = 0x31L;
                int l_366[10][10][2] = {{{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}};
                int l_423 = (-6L);
                unsigned l_427 = 18446744073709551615UL;
                int i, j, k;
                if (((safe_add_func_uint16_t_u_u(func_111((safe_add_func_uint8_t_u_u((l_357 == func_111(l_358, l_358)), (safe_lshift_func_uint8_t_u_s(((+p_101) >= (safe_sub_func_uint8_t_u_u((!g_128), (l_358 <= (safe_rshift_func_int16_t_s_u((-1L), 7)))))), 0)))), p_101), 0UL)) != 0L))
                {
                    int l_365 = 0x6224B253L;
                    int l_387 = 0x2A02113AL;
                    if (l_365)
                    {
                        l_366[3][6][1] = ((g_212[0] & p_101) | p_101);
                        l_151 = l_143;
                        g_384[0][3][2] = (safe_sub_func_int32_t_s_s(0x0562B501L, (safe_lshift_func_uint8_t_u_u((func_111((safe_rshift_func_uint16_t_u_s(65535UL, 13)), func_111((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_151, (((safe_add_func_int32_t_s_s(4L, ((safe_lshift_func_uint8_t_u_s(p_101, 5)) ^ p_101))) != (~l_381)) || (safe_mul_func_uint8_t_u_u((l_358 != (func_40(g_2) >= l_125)), 0x9CL))))), l_143)), l_365)) > p_101), g_130))));
                    }
                    else
                    {
                        g_385 = ((-1L) | p_101);
                        return g_384[0][3][2];
                    }
                    l_387 = l_386[2][1][6];
                    g_398[1] = ((safe_rshift_func_uint16_t_u_s(p_101, 9)) | (safe_lshift_func_uint8_t_u_s(((func_111(((safe_add_func_uint8_t_u_u(((l_125 >= l_394[4]) > (l_395[3] & func_111(func_111(func_111((safe_lshift_func_int8_t_s_u(func_40(g_385), 6)), g_224), l_386[2][1][6]), p_101))), g_384[0][3][2])) | 65533UL), g_178) && p_101) & p_101), l_358)));
                    l_387 = 1L;
                }
                else
                {
                    unsigned l_399 = 4294967294UL;
                    l_399 = p_101;
                }
                if ((+p_101))
                {
                    unsigned char l_421 = 250UL;
                    int l_422 = (-10L);
                    unsigned l_424[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_424[i] = 0x7E004E41L;
                    l_423 = (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(g_385)), ((g_102 ^ (safe_lshift_func_int16_t_s_s(((func_111(((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_101, p_101)), (func_111(g_212[1], (safe_add_func_int32_t_s_s((l_328 < (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_357 ^ (l_381 > l_421)), g_184[5])) > 0x9752A0C1L), 0x5FL))), l_358))) | l_422))), l_423)) > g_6), l_424[1]) ^ g_384[1][2][0]) | g_130), g_11[2][0][5]))) ^ l_126))), 0x40L)), g_102));
                }
                else
                {
                    unsigned char l_428 = 255UL;
                    for (l_143 = 0; (l_143 > 13); ++l_143)
                    {
                        if (p_101)
                            break;
                        l_427 = p_101;
                        if (l_428)
                            break;
                        g_430 = (+(0x7BL & (safe_unary_minus_func_uint32_t_u(p_101))));
                    }
                }
            }
        }
        return p_101;
    }
    l_431 = l_386[2][1][6];
    for (l_328 = (-30); (l_328 == 31); l_328++)
    {
        short l_434 = (-8L);
        int l_474 = 5L;
        unsigned l_718 = 0x13D66CD6L;
        unsigned l_719 = 18446744073709551615UL;
        if ((p_101 || (-1L)))
        {
            const unsigned char l_436 = 0x1FL;
            int l_437 = 0x6F11A5ECL;
            int l_451 = 0L;
            if (l_434)
            {
                short l_446 = 0L;
                p_101 = g_127;
                for (g_178 = 0; (g_178 <= 5); g_178 += 1)
                {
                    int l_435[9][6];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_435[i][j] = 0x02CE8FD7L;
                    }
                    if (g_184[g_178])
                    {
                        int i;
                        l_435[2][4] = g_184[g_178];
                    }
                    else
                    {
                        int i;
                        if (g_398[g_178])
                            break;
                        l_437 = (func_40(p_101) & ((!(g_430 >= (((func_40(l_436) > l_434) & 0x01043741L) && ((((func_111(p_101, l_434) >= g_398[g_178]) != 4L) && 0x6EECL) ^ g_212[1])))) | l_435[2][4]));
                        g_224 = (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((g_172 <= func_111(g_384[0][3][2], (((((safe_mod_func_uint32_t_u_u((l_446 > (g_11[2][0][4] != (((65535UL >= g_172) | (g_172 == (p_101 & g_384[0][3][2]))) > 3UL))), l_386[2][1][6])) ^ p_101) < 1L) & p_101) <= 0UL))) < 4294967292UL), l_446)), g_184[g_178]));
                    }
                }
            }
            else
            {
                g_224 = g_11[1][0][7];
                return g_212[0];
            }
            if (g_430)
            {
                unsigned l_447[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_447[i] = 0x4CA479C7L;
                g_224 = l_328;
                l_447[0] = p_101;
                p_101 = l_448;
            }
            else
            {
                int l_456[9] = {0L, 0L, 1L, 0L, 0L, 1L, 0L, 0L, 1L};
                unsigned l_457[9][2] = {{0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}, {0x5B328EE4L, 0x5B328EE4L}};
                int i, j;
                l_451 = ((g_398[4] || l_434) < (p_101 == (safe_sub_func_int16_t_s_s(func_40(p_101), (2L && l_451)))));
                for (l_437 = (-4); (l_437 <= 27); l_437 = safe_add_func_uint16_t_u_u(l_437, 1))
                {
                    unsigned l_454[6] = {6UL, 6UL, 18446744073709551614UL, 6UL, 6UL, 18446744073709551614UL};
                    int i;
                    l_456[8] = (((g_130 && l_454[5]) && 0xFB30L) ^ (((p_101 && ((p_101 < 0x6996B4E3L) != (p_101 | 0x4DL))) | g_455) | l_451));
                    if (l_457[1][0])
                        continue;
                    for (l_451 = 0; (l_451 <= 5); l_451 += 1)
                    {
                        int i;
                        p_101 = (l_454[l_451] ^ 0UL);
                    }
                    for (l_143 = 11; (l_143 < (-26)); --l_143)
                    {
                        unsigned l_472 = 1UL;
                        unsigned short l_473 = 0x1139L;
                        int l_479 = 0L;
                        l_474 = (g_142 >= ((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_11[3][0][1], 1UL)), (((((((safe_rshift_func_int8_t_s_s((g_184[0] && func_111((g_208 <= ((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((0x09F6L <= (g_128 != (g_102 || (!(safe_lshift_func_int16_t_s_s((-3L), g_212[1])))))), 0x752FAC16L)) < l_472), 5UL)) != g_11[2][0][4])), p_101)), 0)) ^ 1UL) || l_454[5]) ^ p_101) > p_101) >= l_473) <= 0xE4L))) ^ 0x2CE6C228L));
                        p_101 = ((-1L) && ((l_457[8][0] == g_398[1]) & (safe_mul_func_int8_t_s_s((func_111(((safe_lshift_func_uint16_t_u_s((+0UL), (l_473 | 0x5FL))) < (g_385 < ((p_101 && g_11[2][0][4]) > g_398[1]))), g_6) ^ 0x0422L), p_101))));
                        l_479 = 0x8C10EF60L;
                    }
                }
                if (((((0UL <= ((p_101 != l_434) <= (safe_mul_func_int8_t_s_s(p_101, l_456[8])))) >= 0x954FDB46L) != (safe_mul_func_int16_t_s_s((-1L), ((g_385 <= (((l_437 ^ 65526UL) == l_436) == g_172)) & (-5L))))) == 0x6884L))
                {
                    const short l_486 = 3L;
                    if (((-8L) ^ l_486))
                    {
                        unsigned l_487[7][1][7] = {{{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}, {{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}, {{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}, {{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}, {{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}, {{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}, {{9UL, 0xA879B872L, 18446744073709551606UL, 0xEDEB5C68L, 18446744073709551606UL, 0xA879B872L, 9UL}}};
                        int i, j, k;
                        l_487[4][0][1] = 0x85F79899L;
                        return p_101;
                    }
                    else
                    {
                        char l_503 = 0xB7L;
                        p_101 = 1L;
                        g_224 = (safe_lshift_func_int8_t_s_s(func_111(p_101, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_u(((((l_457[2][1] && 0xE3L) != (p_101 ^ g_500)) & ((-5L) && (safe_mul_func_uint16_t_u_u(l_328, func_111(l_503, g_102))))) <= g_130), g_212[0])) >= 1L) >= l_486), l_503)) ^ p_101), l_143)) < p_101) | p_101), l_456[8])), 0UL))), 7));
                    }
                    if (p_101)
                        continue;
                }
                else
                {
                    char l_508[7][9][4] = {{{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}, {{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}, {{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}, {{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}, {{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}, {{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}, {{0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}, {0xA3L, 0x8AL, 9L, 0x05L}}};
                    int i, j, k;
                    l_508[4][6][0] = (safe_sub_func_int32_t_s_s((~0xB074A68DL), ((safe_mul_func_int8_t_s_s(g_384[1][3][0], p_101)) < 0UL)));
                    g_224 = ((safe_rshift_func_int16_t_s_s(((l_386[2][1][6] || (l_431 || l_456[8])) >= l_456[4]), func_111((l_436 <= ((func_111(((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(p_101, p_101)), 4)), p_101)), (safe_add_func_uint8_t_u_u(p_101, g_130)))))), 0)) > p_101) == 0xB8E693ADL) < 0x7A01L), l_434) > g_142) < l_457[3][1])), g_455))) >= p_101);
                    for (g_500 = 0; (g_500 <= 1); g_500 += 1)
                    {
                        int l_526 = (-4L);
                        int i;
                        l_526 = (safe_add_func_uint16_t_u_u(g_212[g_500], ((func_111(l_437, g_212[1]) | (0x833DL < l_508[3][7][0])) || 0UL)));
                        g_224 = (((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(g_455, (p_101 ^ p_101))), (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0xBBL == (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_541, (safe_lshift_func_int8_t_s_s((-9L), 6)))), (safe_lshift_func_uint8_t_u_u(g_212[1], func_40(p_101)))))), p_101)), g_500)))), l_437)) > 0x9732376BL) >= 0x45222AF4L);
                    }
                    p_101 = l_436;
                }
                for (g_128 = 5; (g_128 > 10); g_128++)
                {
                    unsigned l_554 = 18446744073709551606UL;
                    unsigned char l_580 = 0UL;
                    if (p_101)
                    {
                        g_224 = (safe_rshift_func_uint16_t_u_s(func_111(p_101, (func_111(((safe_lshift_func_uint8_t_u_u(((g_208 & ((-4L) && (~(safe_rshift_func_int16_t_s_u(l_554, 5))))) < 0xD0L), g_398[1])) < ((safe_rshift_func_int8_t_s_u(g_430, 3)) < (((+g_398[4]) || l_457[1][0]) != 0x9EL))), p_101) < 1UL)), l_474));
                        g_224 = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_6, 8)), l_434)), ((safe_rshift_func_int16_t_s_s(g_500, (safe_rshift_func_int16_t_s_u((0UL >= ((safe_unary_minus_func_uint8_t_u(2UL)) <= l_541)), 8)))) != 252UL))) == (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_102, func_111(((~(safe_add_func_uint16_t_u_u((g_398[1] || 0xBB8BL), (-1L)))) >= g_128), g_11[5][0][5]))), 1UL)), 1L))) & l_456[2]), 0xB2L)), 0xED77L));
                        g_224 = g_11[4][0][2];
                        p_101 = p_101;
                    }
                    else
                    {
                        l_580 = l_456[8];
                        p_101 = (p_101 >= (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(func_111(l_554, p_101), g_6)), func_40(func_40(l_437)))));
                    }
                }
            }
        }
        else
        {
            g_224 = ((g_184[1] < (func_111(p_101, func_40(p_101)) ^ g_102)) < l_474);
        }
        if (p_101)
        {
            unsigned short l_587 = 7UL;
            unsigned l_632 = 18446744073709551615UL;
            g_224 = g_102;
            for (l_211 = 0; (l_211 < 5); l_211++)
            {
                const unsigned char l_623 = 0x62L;
                l_474 = l_587;
                for (p_101 = 2; (p_101 >= 0); p_101 -= 1)
                {
                    const short l_590 = 1L;
                    int l_599[9][5] = {{1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}, {1L, 1L, 0xBD025288L, 0x64B3E79EL, 1L}};
                    short l_617 = 0x249AL;
                    int i, j, k;
                    for (l_541 = 0; (l_541 <= 2); l_541 += 1)
                    {
                        int i, j, k;
                        if (l_386[(l_541 + 2)][p_101][(l_541 + 1)])
                            break;
                        g_224 = (safe_rshift_func_uint8_t_u_s(func_40(l_590), (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0x425CL != ((safe_mod_func_int8_t_s_s(l_590, (safe_lshift_func_int8_t_s_u(l_599[7][2], 7)))) == ((safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(0x5FL, l_434)) != (safe_unary_minus_func_int16_t_s((0x21L <= 0xFFL)))), (-8L))) | 65532UL))), l_386[(l_541 + 2)][p_101][(l_541 + 1)])), p_101))));
                    }
                    for (g_130 = 0; (g_130 <= 1); g_130 += 1)
                    {
                        int i, j, k;
                        if (g_384[g_130][(p_101 + 2)][p_101])
                            break;
                        return g_384[g_130][p_101][g_130];
                    }
                    l_541 = (safe_mul_func_uint16_t_u_u((l_386[p_101][p_101][(p_101 + 3)] <= (((safe_rshift_func_uint8_t_u_u(0x25L, (((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(func_40(g_430), func_40(p_101))), l_617)), g_178)) > 8UL), 7)) != l_386[2][1][6]) && g_430))) || l_474) > 9UL)), l_599[5][4]));
                    for (g_178 = 0; (g_178 <= 2); g_178 += 1)
                    {
                        unsigned l_628 = 0x072E6F37L;
                        g_224 = (safe_add_func_uint32_t_u_u(g_620, (safe_sub_func_uint16_t_u_u(p_101, (l_623 ^ (func_40((0x9B7FL >= ((safe_rshift_func_uint8_t_u_s((p_101 < (safe_lshift_func_uint8_t_u_u(247UL, p_101))), 3)) != func_40((p_101 != func_111(((l_628 == g_178) & l_587), g_212[1])))))) < 65533UL))))));
                        if (l_434)
                            continue;
                    }
                }
                p_101 = g_384[0][0][1];
            }
            g_224 = l_431;
            l_632 = (safe_rshift_func_uint16_t_u_s((1UL <= func_40(g_631)), 11));
        }
        else
        {
            unsigned l_657[1];
            int i;
            for (i = 0; i < 1; i++)
                l_657[i] = 18446744073709551606UL;
            if (((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_143 & (safe_sub_func_uint16_t_u_u(g_384[0][3][2], func_111(p_101, l_474)))) > ((-1L) && (g_631 | g_430))), (func_40((safe_rshift_func_uint8_t_u_u(((1UL || g_208) || g_212[0]), p_101))) != g_620))), g_430)) && p_101))
            {
                return p_101;
            }
            else
            {
                unsigned l_641 = 18446744073709551609UL;
                char l_670 = 0x2CL;
                l_641 = p_101;
                for (l_434 = 4; (l_434 >= 0); l_434 -= 1)
                {
                    unsigned char l_652 = 0x84L;
                    int i;
                    p_101 = 0L;
                    if ((safe_sub_func_int16_t_s_s((0x4C1F0387L == (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((7UL <= (l_394[l_434] & 0x2C8AL)), 13)), (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_652 & (safe_lshift_func_int8_t_s_u((0L > (safe_sub_func_int16_t_s_s(l_657[0], (255UL < (safe_add_func_uint16_t_u_u(p_101, l_474)))))), g_500))), l_657[0])), l_434))))), l_641)))
                    {
                        return p_101;
                    }
                    else
                    {
                        p_101 = g_212[0];
                    }
                    l_474 = g_620;
                    p_101 = (l_652 != (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_657[0] <= ((safe_lshift_func_int8_t_s_s(0xBFL, 1)) & ((safe_mod_func_uint8_t_u_u(p_101, g_212[1])) && (safe_add_func_int8_t_s_s(l_670, func_40(((g_398[1] < ((safe_add_func_uint32_t_u_u((func_40((safe_rshift_func_int16_t_s_u(p_101, 15))) ^ l_670), 5UL)) && g_172)) <= 0L))))))), l_652)), l_657[0])));
                }
                if (p_101)
                    break;
                if (((safe_mul_func_int16_t_s_s(g_385, g_11[2][0][4])) != (safe_mod_func_int32_t_s_s(((((safe_lshift_func_int16_t_s_u((p_101 == (func_40(func_40(l_386[2][1][6])) != (((((safe_rshift_func_uint16_t_u_u(g_384[0][2][1], ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(0UL, 4)), 4294967295UL)) == 0x7AL))) && 255UL) < l_657[0]) || 0L) == l_641))), p_101)) > (-4L)) & 0xE825L) | g_384[0][3][2]), p_101))))
                {
                    for (l_434 = (-12); (l_434 <= (-20)); l_434 = safe_sub_func_uint32_t_u_u(l_434, 6))
                    {
                        g_224 = (g_398[2] != (func_40((l_657[0] > (g_130 || (g_500 ^ (l_328 | func_40(l_689)))))) <= (0x62L <= g_620)));
                        return l_434;
                    }
                    g_224 = 0x426840EEL;
                    if (g_2)
                        break;
                    return g_208;
                }
                else
                {
                    for (g_430 = 0; (g_430 < 58); g_430 = safe_add_func_uint32_t_u_u(g_430, 4))
                    {
                        unsigned l_692[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_692[i] = 18446744073709551615UL;
                        l_692[1] = func_40(g_500);
                        l_474 = (-9L);
                        g_224 = (safe_add_func_int8_t_s_s(g_11[2][0][4], ((safe_mod_func_int32_t_s_s(p_101, (safe_lshift_func_int8_t_s_u((g_11[2][0][4] != func_40(l_692[0])), 5)))) > func_40(g_430))));
                        p_101 = l_143;
                    }
                    g_224 = (safe_rshift_func_uint8_t_u_s(((p_101 >= p_101) || func_111(((l_657[0] || 0xC461L) > (safe_mod_func_int8_t_s_s(g_184[1], l_122))), g_703)), (safe_rshift_func_int8_t_s_u((func_40(g_703) < 0xDAL), g_142))));
                }
            }
            g_224 = 0xC93EB5C9L;
        }
        if (l_394[4])
            continue;
        if (((safe_lshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s((p_101 || 0x72L), (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(g_142, ((safe_mul_func_uint16_t_u_u(p_101, l_434)) ^ g_385))) ^ g_398[0]), ((safe_sub_func_int16_t_s_s(((func_111((p_101 < func_111(l_474, g_127)), l_122) < g_142) ^ p_101), l_718)) ^ l_474))))) && g_455) ^ 4UL), 1)) ^ l_719))
        {
            int l_722 = 0x43E16BC7L;
            l_474 = (safe_rshift_func_int16_t_s_s((g_178 > l_722), 7));
        }
        else
        {
            char l_745 = 0x52L;
            int l_770 = 0x49A9E73DL;
            p_101 = (safe_mul_func_uint8_t_u_u((func_111(g_212[1], l_386[2][1][6]) && (g_184[2] == ((safe_rshift_func_uint8_t_u_u((g_127 | p_101), g_128)) != (func_40(l_394[0]) || p_101)))), 6UL));
            if (p_101)
            {
                short l_735[7] = {0x75AAL, 3L, 0x75AAL, 3L, 0x75AAL, 3L, 0x75AAL};
                int i;
                g_224 = ((safe_mod_func_uint8_t_u_u((0UL >= (-1L)), (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_101, l_735[6])), p_101)))) & (safe_mul_func_uint16_t_u_u(g_6, ((safe_mod_func_uint8_t_u_u(func_111(l_434, (l_719 ^ ((safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_719 < 0xD56AL), 0xD7L)), l_745)))) | l_745))), 0x17L)) | l_745))));
            }
            else
            {
                int l_747 = (-8L);
                unsigned short l_766 = 0x0E45L;
                if (g_455)
                {
                    unsigned l_746 = 0x6BB762B7L;
                    int l_748 = 0x419834FEL;
                    l_746 = g_128;
                    if (l_434)
                    {
                        l_747 = (1L || p_101);
                        l_748 = l_431;
                    }
                    else
                    {
                        unsigned short l_759 = 0xD075L;
                        p_101 = (65526UL <= (safe_sub_func_uint8_t_u_u(g_102, (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(l_745, 15)) || g_11[2][0][5]), p_101)), (safe_lshift_func_uint16_t_u_s(l_434, p_101)))))));
                        if (p_101)
                            break;
                        g_224 = l_759;
                    }
                    g_224 = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((func_40(((p_101 ^ (safe_add_func_int8_t_s_s(((l_748 >= p_101) != (0xF223L && l_766)), ((0x82L == g_2) || ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((+p_101) ^ (func_111(g_172, l_386[1][1][7]) > 0L)))), l_719)) | (-8L)))))) <= p_101)) >= p_101), g_142)), p_101)) ^ 0x71L);
                    g_224 = 0L;
                }
                else
                {
                    g_224 = func_111(l_770, func_111(p_101, p_101));
                    for (g_142 = (-1); (g_142 >= 11); g_142 = safe_add_func_int8_t_s_s(g_142, 3))
                    {
                        const short l_775 = (-1L);
                        int l_779 = 0xC043797CL;
                        l_747 = g_11[3][0][3];
                        p_101 = p_101;
                        g_224 = (safe_add_func_int8_t_s_s(l_775, l_776));
                        g_224 = (safe_add_func_uint16_t_u_u(p_101, l_779));
                    }
                }
                l_143 = (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_398[1])), func_111((safe_mul_func_int8_t_s_s(p_101, (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_398[1] ^ (safe_mul_func_int8_t_s_s(0x68L, (safe_sub_func_uint32_t_u_u((l_541 < l_747), (p_101 | (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_11[0][0][6], ((-1L) | g_224))), 4)))))))), g_212[1])), 0x64F8L)))), p_101)));
                g_224 = g_384[0][3][2];
                for (l_474 = 0; (l_474 < 19); l_474 = safe_add_func_int16_t_s_s(l_474, 6))
                {
                    unsigned l_817 = 0UL;
                    int l_818[10][7][3] = {{{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}, {{(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}, {(-7L), (-6L), 2L}}};
                    int i, j, k;
                    l_818[3][3][2] = ((func_111((safe_add_func_int16_t_s_s(func_111(p_101, (safe_sub_func_int16_t_s_s((((((g_385 ^ (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_631 <= g_130), g_130)), p_101))) | (g_224 | ((safe_mod_func_int8_t_s_s(l_745, func_111((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(func_40((~(safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_817 < g_703), 0x1673L)), l_766)))), 0UL)), l_770)), p_101))) && p_101))) && l_817) == p_101) > p_101), p_101))), 65530UL)), l_770) != g_172) <= p_101);
                }
            }
            l_541 = g_430;
        }
    }
    for (g_620 = 0; (g_620 < 10); ++g_620)
    {
        const char l_821 = (-8L);
        int l_854[7][6][4] = {{{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}, {{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}, {{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}, {{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}, {{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}, {{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}, {{1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}, {1L, 0x73825C08L, 0x6DEEA0FAL, 0x73825C08L}}};
        unsigned char l_928 = 0x9FL;
        int i, j, k;
        if ((l_821 <= func_40((((-3L) == l_386[2][1][6]) >= ((((safe_lshift_func_int8_t_s_s((p_101 != (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s(l_821)) > (safe_lshift_func_int8_t_s_s((((0x59684AFBL || l_821) < l_821) <= 6L), g_500))), l_541))), 7)) < (-7L)) > l_143) & 9UL)))))
        {
            unsigned l_830 = 0x4157FA2CL;
            int l_872 = 0x2C116031L;
            l_541 = (safe_unary_minus_func_uint16_t_u(l_830));
            for (l_122 = 0; (l_122 <= 1); l_122 += 1)
            {
                int l_831[3];
                int l_840 = 0x721C4407L;
                int i;
                for (i = 0; i < 3; i++)
                    l_831[i] = 0x1F776511L;
                if (l_831[0])
                {
                    int l_847 = 0L;
                    if (g_172)
                    {
                        unsigned char l_832 = 1UL;
                        g_224 = (func_111(l_832, l_832) < (-1L));
                        if (g_398[3])
                            break;
                        l_541 = (0x36B83B54L > ((p_101 >= (safe_mul_func_int8_t_s_s((-1L), g_11[2][0][4]))) >= (-1L)));
                    }
                    else
                    {
                        g_224 = 0xA39973BEL;
                        l_840 = ((l_831[0] && (0xE677521CL & ((safe_mul_func_int8_t_s_s(0L, l_839)) >= l_821))) ^ 4L);
                        if (g_128)
                            break;
                        g_224 = (p_101 > p_101);
                    }
                    l_854[1][4][1] = (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((l_830 != ((safe_add_func_int8_t_s_s(l_847, (safe_lshift_func_int16_t_s_s(0x41BEL, 12)))) >= (func_40((func_40(((p_101 > p_101) <= (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((g_430 == ((g_128 <= p_101) >= (func_40(l_847) > p_101))), g_212[1])), g_500)))) > p_101)) | 0L))) <= 252UL) == 0x4843L) != g_127), 0xA8L)), g_398[1]));
                    p_101 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(func_40(p_101), func_40((safe_lshift_func_uint16_t_u_s((g_212[0] ^ (p_101 == (l_831[2] ^ l_831[0]))), 9))))), ((safe_lshift_func_uint8_t_u_s((g_863[0][2] >= g_178), 6)) || g_212[1])));
                    for (l_431 = 0; (l_431 <= 5); l_431 += 1)
                    {
                        int i, j, k;
                        if (g_184[l_122])
                            break;
                        l_854[l_431][(l_122 + 1)][(l_122 + 2)] = ((((safe_add_func_int16_t_s_s(l_854[l_122][l_431][(l_122 + 2)], (safe_rshift_func_int16_t_s_u(func_40(g_398[(l_122 + 2)]), 7)))) | (safe_mod_func_int8_t_s_s(g_398[l_122], p_101))) != func_111(g_398[(l_122 + 2)], func_111((p_101 | (0x6F24L <= (+(safe_lshift_func_int16_t_s_s(((+((-9L) || g_142)) <= g_385), l_854[l_122][l_431][(l_122 + 2)]))))), l_847))) || p_101);
                        g_863[0][0] = l_830;
                    }
                }
                else
                {
                    unsigned short l_877 = 1UL;
                    unsigned char l_904 = 0x0BL;
                    p_101 = 0L;
                    l_872 = 1L;
                    if (l_872)
                    {
                        short l_886 = 7L;
                        l_840 = p_101;
                        l_840 = func_111((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((((0xBAL ^ l_877) && func_40(func_40((safe_rshift_func_uint8_t_u_u((0UL != (1L <= (safe_add_func_int8_t_s_s(0x1EL, (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_886, g_398[0])), 11)))))), 2))))) || 0x54661B5FL) && l_854[3][2][1]) || 2L), p_101)), g_208)), g_384[1][0][2]);
                    }
                    else
                    {
                        const short l_903 = 0x90A0L;
                        g_863[0][2] = (func_40((safe_lshift_func_int8_t_s_s((p_101 <= p_101), 3))) ^ (((((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x06L, (safe_lshift_func_uint8_t_u_s(func_40((~(+(p_101 || g_208)))), (safe_sub_func_int16_t_s_s(((((((safe_mul_func_uint8_t_u_u(8UL, 0x49L)) < 4UL) && g_455) >= 0x0CL) && 0xAAL) | g_703), 0L)))))), 1)), p_101)) || g_184[5]) != l_877) > l_877) || p_101));
                        g_901 = p_101;
                        p_101 = ((((0L > (l_902 || ((p_101 && g_500) >= ((l_903 == l_821) & (g_142 == (func_40(p_101) <= 0UL)))))) & p_101) ^ p_101) < l_904);
                    }
                    for (l_541 = 1; (l_541 >= 0); l_541 -= 1)
                    {
                        g_863[0][2] = (safe_sub_func_int16_t_s_s(p_101, ((((l_904 | (g_208 & (safe_lshift_func_int16_t_s_u(p_101, 7)))) > (safe_mod_func_uint8_t_u_u(g_631, (safe_mod_func_uint8_t_u_u(p_101, (((p_101 >= 0L) || ((safe_sub_func_uint8_t_u_u(p_101, g_384[1][0][2])) >= g_208)) || g_212[1])))))) || 0x24L) == l_872)));
                    }
                }
                p_101 = g_398[1];
                g_863[0][0] = (safe_add_func_int16_t_s_s(0x2CCDL, g_128));
                for (l_331 = 1; (l_331 >= 0); l_331 -= 1)
                {
                    g_863[0][2] = func_40(g_384[0][3][2]);
                }
            }
        }
        else
        {
            unsigned l_927[4];
            int i;
            for (i = 0; i < 4; i++)
                l_927[i] = 1UL;
            for (g_500 = (-12); (g_500 == 43); g_500++)
            {
                const unsigned short l_923[5][7][7] = {{{1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}}, {{1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}}, {{1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}}, {{1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}}, {{1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}, {1UL, 0xFA3EL, 65532UL, 0xCC17L, 0xAECCL, 0x22D5L, 0x8E3CL}}};
                int l_929[4][10] = {{0L, 0x0B929875L, 0L, 0x0B929875L, 0L, 0L, 0L, 0L, 0L, 0x0B929875L}, {0L, 0x0B929875L, 0L, 0x0B929875L, 0L, 0L, 0L, 0L, 0L, 0x0B929875L}, {0L, 0x0B929875L, 0L, 0x0B929875L, 0L, 0L, 0L, 0L, 0L, 0x0B929875L}, {0L, 0x0B929875L, 0L, 0x0B929875L, 0L, 0L, 0L, 0L, 0L, 0x0B929875L}};
                int i, j, k;
                l_929[0][1] = func_111((g_127 & (g_224 >= (safe_sub_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(0x8D00L, (((((l_923[2][4][3] && (safe_unary_minus_func_int16_t_s(p_101))) && (p_101 == (((safe_lshift_func_uint16_t_u_u(9UL, l_854[6][1][0])) || ((g_703 ^ p_101) | l_689)) <= g_863[0][2]))) == 0x64L) != l_927[1]) < 0x5DL))) >= g_212[1]) <= g_863[0][2]), l_448)))), l_928);
                g_863[0][2] = p_101;
            }
            p_101 = 0x68B6D5CFL;
            for (g_142 = 0; g_142 < 2; g_142 += 1)
            {
                g_212[g_142] = 2UL;
            }
            g_930 = func_40(g_6);
        }
    }
    return g_2;
}







static short func_111(unsigned p_112, unsigned p_113)
{
    g_127 = g_6;
    return g_11[2][0][4];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_184[i], "g_184[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_208, "g_208", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_212[i], "g_212[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_224, "g_224", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_384[i][j][k], "g_384[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_398[i], "g_398[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_863[i][j], "g_863[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_901, "g_901", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_1234, "g_1234", print_hash_value);
    transparent_crc(g_1235, "g_1235", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_2036, "g_2036", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
