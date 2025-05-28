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



static const short g_10 = 9L;
static unsigned g_74 = 0xC5348320L;
static unsigned long long g_103 = 0UL;
static volatile int g_111 = (-2L);
static volatile int g_112 = 0xDB868C93L;
static int g_113 = 0xD781F8E3L;
static unsigned long long g_171 = 18446744073709551610UL;
static char g_221 = 0xAAL;
static int g_229 = 0L;
static unsigned g_230 = 4294967293UL;
static short g_233 = (-1L);
static volatile int g_234 = (-1L);
static unsigned long long g_236 = 6UL;
static int g_371 = 0x4B092D65L;
static volatile char g_389 = 0xEFL;
static int g_391 = 0x55A96B93L;
static unsigned char g_394 = 0x3CL;
static unsigned g_442 = 0x79F19893L;
static unsigned g_489 = 18446744073709551606UL;
static short g_502 = 0L;
static volatile char g_503 = 0xDFL;
static unsigned short g_505 = 3UL;
static volatile unsigned long long g_521 = 1UL;
static volatile unsigned short g_574 = 1UL;
static unsigned short g_588 = 0x0C69L;
static unsigned g_638 = 0x6D62F496L;
static char g_750 = 0xB3L;
static unsigned short g_762 = 0x3E0DL;
static int g_768 = 0x9E3E75BFL;



static short func_1(void);
static unsigned char func_6(const unsigned long long p_7, long long p_8, char p_9);
static unsigned short func_18(unsigned p_19, int p_20, unsigned long long p_21, unsigned short p_22, unsigned char p_23);
static unsigned func_41(unsigned char p_42, int p_43, const long long p_44);
static const int func_50(short p_51, char p_52, long long p_53);
static char func_56(char p_57, unsigned p_58, char p_59);
static long long func_62(unsigned long long p_63, int p_64, unsigned p_65);
static int func_67(unsigned p_68, unsigned char p_69, const int p_70, unsigned char p_71);
static unsigned func_87(const unsigned long long p_88);
static char func_96(unsigned long long p_97, const short p_98);
static short func_1(void)
{
    char l_11 = (-1L);
    g_768 |= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((-5L), func_6(g_10, l_11, (safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((func_18(g_10, g_10, ((-3L) && ((safe_unary_minus_func_uint64_t_u(8UL)) && ((safe_add_func_uint8_t_u_u((g_10 <= ((0x42AFA017779A7B44LL && g_10) || 2UL)), l_11)) && g_10))), g_10, g_10) <= l_11), g_10)), 0xF2D6273DL)) >= l_11), 0xF7C629C4L))))), 4));
    g_234 = l_11;
    return g_442;
}







static unsigned char func_6(const unsigned long long p_7, long long p_8, char p_9)
{
    long long l_45 = 0x88FF7673ED13222CLL;
    int l_520 = 0xA9DF633CL;
    unsigned short l_527 = 0x6BB3L;
    unsigned short l_579 = 1UL;
    int l_614 = (-3L);
    unsigned short l_703 = 65535UL;
    int l_751 = 0xA0F7C01EL;
    int l_752 = (-1L);
    int l_754 = (-7L);
    int l_759 = (-3L);
    int l_761 = (-1L);
    int l_767 = 7L;
lbl_591:
    if ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((g_10 > func_18(((g_10 & ((safe_lshift_func_int16_t_s_s(((func_18((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((func_18((safe_rshift_func_uint16_t_u_u(func_18((g_10 != func_41(l_45, l_45, (+(safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((-1L), 7)) ^ (-4L)), (p_9 == func_50(l_45, p_7, g_10))))))), p_7, l_45, p_9, p_9), 3)), l_45, p_8, l_45, g_229) && p_9), g_502)), 5)), p_8, l_45, p_9, l_45) || g_505) & g_391), 7)) == 0xE6FBD6F8L)) ^ 0x449F7745L), g_442, g_74, l_520, l_45)), 0xB3761B67L)), l_45)), g_502)))
    {
        short l_526 = 0x9F1CL;
        l_520 &= p_8;
        g_521++;
        l_526 = func_41((((p_8 | func_62(((p_7 || (((~(g_505 ^ (safe_add_func_uint16_t_u_u((p_9 ^ g_229), p_9)))) | ((p_7 ^ (2UL <= (0x662E8185L ^ g_74))) != g_391)) | 1L)) & p_9), l_520, g_389)) ^ 0L) == 4294967290UL), p_8, p_7);
    }
    else
    {
        unsigned char l_545 = 1UL;
        int l_546 = (-1L);
        int l_547 = (-1L);
        int l_548 = 0x48C4E740L;
        l_548 ^= (func_18((l_527 < ((safe_sub_func_uint8_t_u_u(g_112, p_7)) && (func_67(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((+(!(safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u(((~(((((+(safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((!0xE70DL), 3)), (p_9 >= p_8))), 1)), (func_67(l_527, p_7, p_7, g_10) && g_505)))) != 0UL) <= p_8) && g_229) > 1L)) & 0xF76F57C1E3B0096FLL), g_505)))))), l_45)), g_502)) <= 0x46L), g_74, l_527, l_545) >= 65531UL))), p_8, l_545, l_546, l_547) <= 0x616825E0L);
        l_520 = l_527;
        l_520 = g_389;
    }
    for (l_527 = 0; (l_527 <= 14); l_527++)
    {
        unsigned char l_551 = 0xD5L;
        int l_555 = (-7L);
        unsigned l_563 = 1UL;
        long long l_628 = 0x13FB3EEB2618BB75LL;
        int l_723 = 0xC93C173CL;
        if (l_551)
        {
            unsigned l_556 = 6UL;
            for (g_230 = 17; (g_230 < 45); g_230++)
            {
                unsigned l_554 = 0x7B131902L;
                l_554 ^= (-9L);
                l_556++;
                l_555 = ((safe_add_func_uint64_t_u_u(g_230, p_7)) & func_87(g_391));
            }
            return g_502;
        }
        else
        {
            short l_564 = 0x09CCL;
            unsigned l_570 = 4294967292UL;
            unsigned l_609 = 0x033D4CC4L;
            unsigned long long l_610 = 2UL;
            char l_624 = 0L;
            int l_725 = 0x1C70CD03L;
            char l_726 = 1L;
            int l_728 = 0xAD02DDDCL;
            long long l_753 = 2L;
            if (((safe_mod_func_uint32_t_u_u(l_555, l_563)) == p_7))
            {
                int l_567 = 0xEF9B0AEDL;
                l_564 = p_8;
                l_567 ^= (safe_sub_func_uint8_t_u_u(4UL, (-4L)));
                l_567 = (((safe_lshift_func_uint8_t_u_s(((((-1L) < 0L) >= p_7) == l_520), (0xE9L == func_87(g_505)))) <= l_570) < (func_18(((safe_add_func_int32_t_s_s(p_9, 1UL)) < g_442), l_570, l_45, l_527, p_7) >= 0x756DL));
            }
            else
            {
                long long l_573 = 0xF6CD11842243E4F2LL;
                if (g_394)
                    break;
                g_574--;
            }
            if ((p_9 == ((safe_sub_func_uint16_t_u_u(l_564, ((!func_50(l_579, ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((+((safe_rshift_func_int8_t_s_s(g_230, ((0x364C4400A923D82ELL != ((((~g_10) || g_503) & ((func_18((p_9 == ((l_579 | 0xA315F514L) && (-1L))), p_8, g_74, p_8, g_588) != 0x2586L) >= g_502)) || 0x0518L)) && g_389))) <= g_588)) == 18446744073709551615UL), l_570)), 8)), 5)) & p_7), p_9)) & l_564))) | g_391)))
            {
                l_555 ^= l_564;
                for (g_442 = 7; (g_442 >= 56); g_442 = safe_add_func_int32_t_s_s(g_442, 3))
                {
                    int l_594 = 0x369EBC61L;
                    int l_595 = 1L;
                    int l_596 = 0x0B2B44CFL;
                    if (l_570)
                        goto lbl_591;
                    for (g_221 = (-12); (g_221 >= 23); g_221++)
                    {
                        unsigned short l_597 = 0xF7C4L;
                        g_371 |= 1L;
                        l_597--;
                        g_371 |= (((safe_lshift_func_uint8_t_u_s(0UL, 2)) >= (safe_lshift_func_uint8_t_u_u((p_8 > 0x885501581D6A7E88LL), g_103))) < (safe_mod_func_int64_t_s_s((g_103 != ((l_597 <= (safe_unary_minus_func_uint16_t_u(l_597))) <= p_9)), (((((((((((p_7 < p_7) && p_9) == g_233) ^ 8L) ^ 0x7A48084D41BEAE02LL) > g_389) & 0x020426F2L) && g_394) ^ 0x9D8C4452L) & 0x7E9BD64D9299A7F5LL) || 0x25FDL))));
                    }
                }
            }
            else
            {
                unsigned char l_613 = 0x0BL;
                for (g_442 = 28; (g_442 < 6); g_442--)
                {
                    l_520 = l_609;
                    if (g_489)
                        break;
                    if (p_7)
                        continue;
                    --l_610;
                }
                l_614 &= (l_613 < l_520);
                for (g_394 = 29; (g_394 >= 34); ++g_394)
                {
                    unsigned l_625 = 4294967287UL;
                    int l_629 = 0x58B8BB48L;
                    for (g_371 = 0; (g_371 <= (-4)); g_371--)
                    {
                        g_111 = 9L;
                        if (g_371)
                            break;
                        l_629 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((p_7 < (((safe_sub_func_uint32_t_u_u((p_7 < l_624), l_625)) < (0x47L == ((0xA01C5807L >= ((((safe_mul_func_uint8_t_u_u(l_625, (l_579 == (func_87(p_8) ^ p_8)))) < p_8) || 0x2A51A3B2A78841C7LL) <= p_8)) || 0x3BL))) || l_628)))), 2UL));
                        l_520 ^= 0x5D3EE2AFL;
                    }
                    l_555 = (safe_sub_func_uint32_t_u_u(func_67(p_7, func_96((l_45 > (l_551 == 18446744073709551615UL)), (((safe_rshift_func_int16_t_s_u((((((l_609 || ((l_629 < p_8) <= (func_41(l_564, (safe_add_func_int16_t_s_s(l_629, p_8)), p_7) ^ p_8))) < l_570) != p_9) && g_502) >= l_629), 8)) ^ g_391) | 0UL)), l_628, g_502), p_7));
                }
                l_614 = (l_610 && g_638);
            }
            if (((safe_sub_func_int8_t_s_s(g_505, (~g_236))) || l_628))
            {
                if (g_234)
                {
                    g_113 ^= ((g_503 > (g_489 > p_8)) > (safe_sub_func_uint8_t_u_u(g_221, (safe_rshift_func_int16_t_s_s(p_7, 0)))));
                }
                else
                {
                    unsigned short l_647 = 0UL;
                    for (g_588 = 13; (g_588 <= 20); ++g_588)
                    {
                        --l_647;
                    }
                    return g_10;
                }
            }
            else
            {
                int l_700 = (-7L);
                int l_702 = 1L;
                int l_719 = (-7L);
                int l_724 = (-5L);
                int l_727 = (-1L);
                int l_755 = 5L;
                int l_756 = (-1L);
                int l_757 = 0L;
                int l_758 = 0L;
                int l_760 = 0L;
                l_555 ^= (-5L);
                if ((0x83L < (g_442 == ((0x8CCEL | l_610) > (safe_sub_func_int8_t_s_s((p_7 == p_9), (safe_mul_func_int32_t_s_s(0L, ((((g_74 ^ ((safe_add_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_527, g_521)), 65535UL)) > g_171), p_7)) == 0x84L)) && l_610) || g_391) > p_8)))))))))
                {
                    int l_664 = 0x0ABB0502L;
                    int l_701 = (-1L);
                    if (((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((-1L), 0UL)), (l_664 | (safe_mod_func_uint16_t_u_u(p_8, g_574))))) && (safe_mul_func_uint16_t_u_u(g_505, ((0UL != (safe_mod_func_int64_t_s_s(((safe_sub_func_int16_t_s_s(func_67(l_555, (safe_rshift_func_uint16_t_u_u(func_67((safe_lshift_func_uint16_t_u_s(l_664, g_171)), p_8, p_9, p_7), 15)), p_9, p_9), p_7)) < (-4L)), p_8))) >= 0x69L)))))
                    {
                        long long l_695 = 0xC90281DF8527255BLL;
                        int l_696 = 0xE4E1B798L;
                        g_112 = g_74;
                        l_696 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((g_638 >= (safe_lshift_func_int8_t_s_u(((((safe_add_func_int8_t_s_s(((7L > (safe_add_func_uint8_t_u_u(func_18(g_230, p_7, (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_7, p_7)), (func_56(p_8, (safe_rshift_func_uint8_t_u_u((+3UL), (((func_67(g_574, p_7, p_9, l_551) > 0UL) && g_111) | g_489))), g_489) == p_9))), l_551)), g_502, l_695), (-9L)))) & g_229), p_9)) <= g_233) > 253UL) <= l_551), l_614))), 0)), g_229));
                        return l_696;
                    }
                    else
                    {
                        unsigned long long l_699 = 0x0B29A98CE11C2C26LL;
                        l_699 |= (safe_add_func_int8_t_s_s(p_8, (l_579 || l_551)));
                    }
                    l_701 = (l_700 == l_700);
                    if (p_7)
                    {
                        l_520 = ((g_230 >= (l_609 >= (0x1DL & g_230))) & l_624);
                        --l_703;
                        l_555 = (-4L);
                        if (g_505)
                            continue;
                    }
                    else
                    {
                        if (p_7)
                            break;
                        l_555 = g_588;
                    }
                    for (g_391 = (-23); (g_391 > (-13)); ++g_391)
                    {
                        unsigned l_708 = 0x0F49AA78L;
                        short l_718 = 0x3352L;
                        l_708 = (-1L);
                        g_112 = (safe_rshift_func_uint16_t_u_s(g_230, 5));
                        l_719 |= ((safe_add_func_int16_t_s_s(0x315EL, ((l_708 == (g_505 ^ (0UL | (~(safe_mod_func_int8_t_s_s(((g_171 | 0x41L) > ((safe_lshift_func_uint16_t_u_s((((safe_unary_minus_func_int16_t_s(0L)) <= l_718) >= func_18((0x972FC327L >= l_702), l_703, l_614, l_708, l_702)), l_701)) < g_505)), 0x9DL)))))) != p_7))) & l_702);
                        g_113 = (safe_unary_minus_func_uint16_t_u(g_371));
                    }
                }
                else
                {
                    g_112 = (l_700 | (~p_8));
                    for (l_702 = 25; (l_702 > (-8)); l_702 = safe_sub_func_int64_t_s_s(l_702, 5))
                    {
                        unsigned l_729 = 0x7FFA786DL;
                        unsigned short l_732 = 0x6FE8L;
                        l_729++;
                        --l_732;
                        if (l_570)
                            continue;
                        g_750 ^= ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(l_725)), 0x20L)) && ((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(func_67((7UL <= (func_62(l_628, p_9, ((+p_7) > ((safe_add_func_uint64_t_u_u(p_9, (safe_add_func_int8_t_s_s(((func_41((safe_sub_func_uint16_t_u_u((g_489 >= (safe_lshift_func_uint16_t_u_u((((~func_18(p_9, p_9, l_729, p_9, g_371)) < l_570) || 7UL), 1))), l_520)), l_728, p_7) != g_229) == g_10), 4L)))) & p_8))) & 0xE0L)), g_74, l_520, g_588), l_570)), l_732)) != 0x0CE3131A09C98C12LL));
                    }
                    if (p_7)
                        break;
                }
                --g_762;
                l_728 ^= ((safe_mod_func_int8_t_s_s(g_750, (~(~g_171)))) | g_236);
            }
        }
        if (g_233)
            break;
    }
    return l_767;
}







static unsigned short func_18(unsigned p_19, int p_20, unsigned long long p_21, unsigned short p_22, unsigned char p_23)
{
    return p_20;
}







static unsigned func_41(unsigned char p_42, int p_43, const long long p_44)
{
    const unsigned short l_510 = 0x4CF7L;
    p_43 = (func_87(g_74) | (p_42 & l_510));
    p_43 = ((l_510 >= (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s(p_43)), l_510)), (0xB669L | (((((l_510 <= (safe_add_func_int8_t_s_s(p_44, (l_510 ^ (~(safe_lshift_func_int16_t_s_u((l_510 >= p_44), 12))))))) | p_42) || 0xA2E1L) < 0xC309A2FEL) != g_233))))) == g_74);
    return p_42;
}







static const int func_50(short p_51, char p_52, long long p_53)
{
    unsigned l_66 = 4294967295UL;
    int l_375 = 0xC3F117C1L;
    int l_382 = (-1L);
    int l_384 = 0L;
    int l_393 = 1L;
    unsigned short l_495 = 1UL;
    if (((((+((safe_sub_func_int8_t_s_s(func_56(p_52, func_18(((safe_lshift_func_uint16_t_u_s((func_62(l_66, func_67(g_10, ((safe_mod_func_int16_t_s_s(0xA44BL, l_66)) > (g_74 && ((g_10 >= ((((safe_add_func_uint64_t_u_u(func_18(p_51, p_53, g_74, p_52, p_52), g_74)) && l_66) == l_66) <= l_66)) | g_74))), g_10, p_52), g_74) & p_51), l_66)) <= 1UL), p_53, p_51, g_10, g_229), g_10), p_52)) < l_375)) ^ p_52) | l_375) >= p_52))
    {
        int l_381 = 0x7A405C94L;
        int l_388 = 1L;
        for (g_233 = 12; (g_233 == (-30)); g_233 = safe_sub_func_int32_t_s_s(g_233, 6))
        {
            int l_383 = 1L;
            int l_385 = 0x41A955DCL;
            int l_386 = 0x980F1695L;
            int l_448 = 0xCBB65BC4L;
            unsigned long long l_478 = 0x14DAFFD6F66ED171LL;
            unsigned l_481 = 0xE2C34BD1L;
            char l_488 = 0x1AL;
            unsigned short l_490 = 0x67B1L;
            for (p_52 = 0; (p_52 < 12); ++p_52)
            {
                int l_380 = 2L;
                int l_387 = (-4L);
                int l_390 = 0x0606C95BL;
                int l_392 = 0xBF15BDACL;
                --g_394;
                l_387 = (func_18(l_381, l_383, (safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(1L, (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(g_74, 12)) != (g_221 <= l_381)), 14)))), 0L)), (safe_mod_func_uint32_t_u_u(g_103, (safe_sub_func_int32_t_s_s(func_18(func_18(g_389, l_383, p_52, p_53, l_66), l_392, g_103, g_394, l_393), l_380)))), p_52) ^ p_51);
                return l_381;
            }
            for (l_382 = (-20); (l_382 <= (-15)); ++l_382)
            {
                unsigned char l_421 = 4UL;
                int l_479 = 0x015EE2A7L;
                g_113 = (4L > (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(248UL, g_389)), l_385)) <= (l_66 & g_10)), 0x3696BEF7L)));
                if (((safe_add_func_int32_t_s_s(0x9BBE0326L, func_67(g_234, (safe_mod_func_int32_t_s_s((p_51 < (248UL | func_18(l_384, p_51, ((p_53 == l_381) == g_113), p_53, l_421))), 1UL)), l_382, g_229))) ^ l_385))
                {
                    int l_426 = 0L;
                    if ((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u(l_426, ((safe_rshift_func_uint8_t_u_u(g_394, g_391)) == (l_388 ^ l_426)))) | (g_103 & ((0L | g_10) != (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x6CL, g_236)), 2))))) || p_53), 4)))
                    {
                        unsigned l_437 = 0xC997CF1AL;
                        unsigned char l_440 = 247UL;
                        unsigned l_441 = 0x5A2B2338L;
                        long long l_443 = 1L;
                        g_371 &= ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((1L != func_67(g_113, ((((func_18(g_391, g_394, l_437, g_236, l_385) > (safe_rshift_func_int8_t_s_s((((((g_230 < p_52) != 0L) > l_426) && 0x4DL) || 1UL), p_51))) >= p_51) < l_440) | (-9L)), p_51, l_441)), 14)) <= g_442), (-1L))) & l_383);
                        if (p_51)
                            continue;
                        g_111 = l_421;
                        g_371 = (func_18(l_443, (g_113 && g_234), g_229, l_381, p_52) | 18446744073709551615UL);
                    }
                    else
                    {
                        int l_459 = 0x5AD26CA1L;
                        l_381 = ((safe_mod_func_uint32_t_u_u((func_18(g_221, (safe_sub_func_uint64_t_u_u(l_448, (((safe_lshift_func_uint8_t_u_s(func_96(g_113, p_53), 0)) > func_18((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_74, 9)), (safe_add_func_int64_t_s_s(g_74, (safe_rshift_func_uint8_t_u_u((0x9DB8F0A8L != g_442), 2)))))), l_388, p_52, g_230, l_426)) != l_421))), l_459, l_459, g_233) <= p_52), 1UL)) | g_233);
                    }
                    l_478 ^= ((safe_add_func_uint8_t_u_u(g_74, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_381, p_51)), (safe_rshift_func_int16_t_s_s(0x4DAEL, (((safe_add_func_int32_t_s_s(l_385, (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(4294967292UL, (0x62689EF0L & (safe_rshift_func_uint16_t_u_s((func_67(g_111, g_394, g_10, g_171) < p_53), 11))))), 5L)))) <= 0xE9L) != l_388))))), g_221)))) == p_51);
                    l_479 = g_394;
                }
                else
                {
                    short l_480 = (-1L);
                    l_480 = p_52;
                    l_479 = l_481;
                    l_388 = 0x62E70A77L;
                }
            }
            l_375 |= p_53;
            l_490 = (((g_389 == ((!1UL) == (((((-1L) > (((safe_mod_func_uint32_t_u_u(p_52, (p_51 | (0x308639D33BB9B582LL > ((func_18((safe_lshift_func_int16_t_s_s((g_74 <= l_448), g_171)), l_488, g_103, g_489, l_388) == p_53) || 250UL))))) <= p_51) | p_52)) | l_386) || 0xD505C9C2B50DF7F9LL) >= g_371))) != l_478) < l_393);
        }
        return p_51;
    }
    else
    {
        unsigned long long l_496 = 0xC23776A21A2E9158LL;
        int l_497 = 0x2121E1F0L;
        int l_498 = (-7L);
        int l_499 = 0x2BE83FFCL;
        int l_500 = 0x5CA595E6L;
        int l_501 = (-1L);
        int l_504 = 0xE883802AL;
        l_497 = func_87((0xF38BA8A3L || (safe_lshift_func_uint8_t_u_s(((-1L) | l_66), ((safe_add_func_uint32_t_u_u(l_384, (g_230 && (0x888E1F630A92F456LL > l_495)))) < func_18(p_51, l_496, g_221, g_111, g_371))))));
        --g_505;
        l_501 |= func_62((safe_sub_func_uint8_t_u_u(254UL, func_62(l_495, p_52, (l_499 >= ((func_67(l_495, l_495, func_56(g_489, (0xB5A4F82BL >= g_103), l_66), g_391) | p_53) || 0x8FL))))), l_498, l_382);
        return p_52;
    }
}







static char func_56(char p_57, unsigned p_58, char p_59)
{
    int l_364 = (-1L);
    int l_374 = (-10L);
    l_364 |= 0xDADCA18AL;
    l_374 = func_67(g_233, p_58, ((l_364 | (safe_sub_func_int32_t_s_s(g_233, (safe_add_func_uint8_t_u_u(((p_58 > (safe_rshift_func_uint8_t_u_u(p_57, g_371))) == 1UL), (safe_rshift_func_uint8_t_u_s(l_364, 6))))))) < l_364), p_58);
    return p_58;
}







static long long func_62(unsigned long long p_63, int p_64, unsigned p_65)
{
    unsigned char l_216 = 0UL;
    int l_222 = 0xA57CCE38L;
    int l_225 = 0x24A8259FL;
    unsigned l_310 = 0x99EE68FAL;
    if ((((p_63 ^ (safe_sub_func_uint16_t_u_u((~l_216), 65533UL))) ^ 1UL) <= g_103))
    {
        long long l_224 = 0x7D6B70E42B31CC7DLL;
        int l_226 = 0x51272D65L;
        int l_235 = 0L;
        for (l_216 = 0; (l_216 == 30); l_216 = safe_add_func_uint64_t_u_u(l_216, 7))
        {
            char l_223 = 0L;
            int l_228 = 0L;
            for (p_65 = 0; (p_65 == 33); p_65 = safe_add_func_int16_t_s_s(p_65, 2))
            {
                char l_227 = (-1L);
                g_221 ^= func_87(p_63);
                g_230--;
            }
        }
        ++g_236;
        return g_230;
    }
    else
    {
        unsigned long long l_243 = 0x6E9E258E6F13F4DBLL;
        char l_254 = 0x4BL;
        unsigned l_269 = 4294967286UL;
        unsigned short l_270 = 0UL;
        int l_311 = 0L;
        for (g_236 = (-9); (g_236 == 29); ++g_236)
        {
            g_111 |= (~((safe_add_func_uint32_t_u_u((+l_243), ((g_236 < g_233) ^ l_243))) || 1UL));
            g_234 = (g_74 != ((p_65 != (~((((safe_rshift_func_int16_t_s_u(((p_63 <= l_243) ^ (func_87((safe_add_func_uint64_t_u_u((((!g_112) && p_63) ^ (!(-1L))), func_18(l_225, ((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((0UL >= 1UL) < p_65) && g_74), 7)) <= p_65), l_254)), l_254)) == 0xAEE45CAA373232EFLL), p_64, g_233, l_216)))) | 0x7874FC3CL)), 8)) > 3UL) <= p_63) && l_225))) != 0x0AA5L));
        }
        g_113 &= (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_221, ((g_230 && g_230) > ((~g_10) & ((18446744073709551615UL || (safe_sub_func_uint32_t_u_u((((((p_65 && p_65) > l_225) & (safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(((~(safe_lshift_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_s(((0x0F3B7A9BL ^ l_216) && g_171), g_112)) < l_225) | l_269) || g_111) && 4294967295UL), p_65))) & g_233), p_64)) >= l_216), p_64))) != l_270) ^ g_74), g_171))) | 0x52L))))), p_63));
        if (func_87(((p_65 < ((l_270 > (((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x3D16L, ((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(func_67(g_171, (safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((g_234 >= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((g_229 <= 0x79L) <= l_222), p_63)), l_270)) <= g_113)), g_230)) <= 8UL), l_243)), p_64, l_225), p_63)) >= g_233) == l_269), 0x798BL)) >= l_225))), l_269)) < g_236) || p_65) <= 7L) >= l_269)) & p_65)) ^ l_222)))
        {
            unsigned l_309 = 0xEFF7825DL;
            l_311 |= (safe_rshift_func_int16_t_s_u((!(safe_lshift_func_int16_t_s_s(0x8E6CL, 7))), (((255UL != 0x4AL) ^ (func_67(p_63, g_112, (safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_225, (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((~p_65) <= (safe_add_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_63, 15)), (g_74 && l_309))) >= 0x38BB7738A4042223LL), g_230))), p_65)) != g_171), p_64)), l_310)) && (-1L)), g_74)))), p_65)), g_221) > p_64)) & 0xC7D5L)));
            p_64 = (-1L);
        }
        else
        {
            unsigned char l_329 = 255UL;
            p_64 &= (65531UL < ((p_63 <= g_229) != g_233));
lbl_335:
            for (g_236 = (-8); (g_236 > 26); g_236 = safe_add_func_int8_t_s_s(g_236, 8))
            {
                if (p_65)
                    break;
                if (p_64)
                    continue;
                if (g_112)
                    break;
            }
            if (g_10)
            {
                return g_236;
            }
            else
            {
                for (g_236 = 0; (g_236 != 29); ++g_236)
                {
                    int l_326 = 5L;
                    for (l_216 = 24; (l_216 >= 43); l_216 = safe_add_func_int8_t_s_s(l_216, 5))
                    {
                        const unsigned l_330 = 0x1C6F64A7L;
                        p_64 &= (safe_add_func_int64_t_s_s(0x36CB3E5B87094CEFLL, (((safe_rshift_func_int8_t_s_u(func_87(l_225), 3)) > (safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(g_229, l_326)) >= (safe_lshift_func_uint8_t_u_s(l_329, ((g_221 && 0x41A2L) && p_63)))), 4))) == p_65)));
                        l_326 = 0xDC111D26L;
                        l_326 |= 1L;
                        if (l_330)
                            continue;
                    }
                }
            }
            for (g_236 = (-27); (g_236 != 53); g_236 = safe_add_func_uint64_t_u_u(g_236, 1))
            {
                for (l_216 = 0; (l_216 < 54); l_216 = safe_add_func_uint8_t_u_u(l_216, 5))
                {
                    if (g_230)
                        goto lbl_335;
                    if (p_64)
                        break;
                }
                g_112 |= (safe_sub_func_int8_t_s_s((0x27L == g_113), p_63));
            }
        }
    }
    l_222 = (((((safe_lshift_func_int16_t_s_u(l_216, 13)) ^ (0xD5C7E7E5BDE789B6LL >= (func_18(l_225, ((g_111 == ((safe_rshift_func_uint8_t_u_u((0xC3L && (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(g_229, 5)), (p_64 && (safe_sub_func_int32_t_s_s(g_233, g_103)))))), 0)) || l_222)) < l_216), p_65, p_63, l_216) <= 0xA6B4D2B5L))) | l_216) >= p_63) || g_113);
    if (g_171)
    {
        g_113 ^= l_216;
    }
    else
    {
        unsigned short l_348 = 0x0301L;
        --l_348;
    }
    for (g_230 = 0; (g_230 == 46); g_230 = safe_add_func_int64_t_s_s(g_230, 9))
    {
        short l_353 = 0x7577L;
        short l_360 = 1L;
        if ((g_74 & l_353))
        {
            unsigned l_356 = 6UL;
            for (g_233 = 0; (g_233 <= 11); g_233++)
            {
                unsigned l_357 = 0x50BF2CEFL;
                p_64 ^= g_233;
                p_64 ^= func_18(p_65, p_65, g_111, l_356, l_216);
                g_111 = l_357;
            }
            p_64 = ((safe_add_func_uint32_t_u_u(func_96((l_360 || g_10), g_229), (p_63 ^ 0x764B8550L))) <= 0xA30DL);
        }
        else
        {
            unsigned l_361 = 0xD288F8E8L;
            if (g_229)
                break;
            g_111 = ((l_361 ^ g_236) && (safe_rshift_func_int16_t_s_s((-3L), 4)));
        }
    }
    return g_233;
}







static int func_67(unsigned p_68, unsigned char p_69, const int p_70, unsigned char p_71)
{
    short l_204 = 0x489FL;
    int l_206 = (-4L);
    for (p_69 = 0; (p_69 != 22); ++p_69)
    {
        unsigned l_205 = 0x047370D5L;
        int l_210 = 5L;
        l_206 = (((((g_74 ^ (3UL != ((safe_sub_func_int32_t_s_s((func_18(p_70, (((safe_mod_func_int16_t_s_s(g_74, (safe_mod_func_uint16_t_u_u((((0xD3L ^ func_18((safe_add_func_uint32_t_u_u(func_87(g_10), (0x70E1A0D32EC22218LL && (safe_lshift_func_int16_t_s_s((l_204 <= p_69), l_205))))), p_69, p_71, p_70, g_74)) != 0x15L) > g_74), l_204)))) < p_68) & 1UL), l_205, g_10, g_10) || l_204), g_10)) != p_68))) && 0xE3L) & g_74) & p_69) ^ l_204);
        if ((0x362B2AF5L && g_112))
        {
            unsigned char l_207 = 0x05L;
            int l_208 = 0L;
            l_207 = (l_205 == 0x0DB86E312B95ED4DLL);
            l_208 = (g_113 > g_103);
        }
        else
        {
            if (l_204)
            {
                unsigned short l_209 = 0UL;
                if (l_206)
                    break;
                l_209 |= ((l_204 <= g_111) && (g_112 < p_69));
            }
            else
            {
                unsigned short l_211 = 0x13DDL;
                l_211++;
                return p_68;
            }
            return g_103;
        }
    }
    return p_71;
}







static unsigned func_87(const unsigned long long p_88)
{
    const unsigned long long l_95 = 0xDB4C2A7322E546ECLL;
    unsigned short l_102 = 0xB4D3L;
    unsigned short l_104 = 0xAC61L;
    int l_201 = (-1L);
    l_201 = (~(func_18((!(safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s(l_95, 0)) <= func_18(p_88, (p_88 || func_96(l_95, (func_18(((safe_add_func_uint16_t_u_u(0x3C83L, 4UL)) != func_18((((safe_unary_minus_func_int64_t_s(p_88)) | ((func_18(l_95, g_10, l_102, l_95, p_88) & l_102) > l_102)) || p_88), l_95, g_74, p_88, g_103)), l_104, l_104, g_103, p_88) == l_104))), p_88, p_88, g_74)) == 4UL) || l_104) == 0xF7C884FDL), g_10)) | l_95) == p_88), 12))), g_74, p_88, p_88, p_88) | g_10));
    return p_88;
}







static char func_96(unsigned long long p_97, const short p_98)
{
    unsigned long long l_118 = 1UL;
    int l_199 = (-9L);
    for (g_103 = (-14); (g_103 <= 49); g_103 = safe_add_func_uint32_t_u_u(g_103, 7))
    {
        short l_117 = 0x1196L;
        unsigned short l_121 = 65535UL;
        int l_178 = 0xFBDA86EFL;
        int l_179 = 0x0A0E1395L;
        const unsigned short l_187 = 0x4042L;
        unsigned l_198 = 0xE6D32158L;
        unsigned char l_200 = 0xE5L;
        for (p_97 = 6; (p_97 <= 2); --p_97)
        {
            int l_122 = 1L;
            int l_143 = 8L;
            unsigned l_146 = 0xD066B323L;
            int l_147 = 0x0BE52350L;
            if ((safe_rshift_func_int8_t_s_s(g_103, (0x7F729B20146E0633LL > g_10))))
            {
                if (g_103)
                {
                    for (g_113 = (-14); (g_113 >= (-10)); g_113 = safe_add_func_int8_t_s_s(g_113, 5))
                    {
                        return p_98;
                    }
                }
                else
                {
                    const unsigned l_116 = 0x9281337FL;
                    if (l_116)
                        break;
                    --l_118;
                    l_122 |= l_121;
                }
                l_122 = (p_98 > l_122);
            }
            else
            {
                unsigned l_149 = 4294967292UL;
                for (g_113 = 3; (g_113 <= (-30)); g_113 = safe_sub_func_uint8_t_u_u(g_113, 1))
                {
                    int l_160 = 0L;
                    g_111 = ((safe_add_func_int8_t_s_s(g_112, (safe_lshift_func_uint16_t_u_u(p_98, 3)))) > (~(l_122 || g_10)));
                    if ((!((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((p_98 < (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s(p_97, 12)) >= l_143) > ((p_98 && (g_10 != l_122)) == g_10)), (safe_add_func_uint64_t_u_u(p_97, 1UL)))), l_146))), p_98)) == g_111), p_97)), g_113)), g_113)) && l_118)))
                    {
                        g_112 = p_97;
                        if (g_74)
                            continue;
                    }
                    else
                    {
                        long long l_148 = 7L;
                        l_147 = ((0xABL || (p_97 > p_98)) > g_112);
                        g_112 = (g_113 >= g_111);
                        ++l_149;
                        g_111 = ((((func_18((g_103 <= l_118), (safe_sub_func_uint32_t_u_u(4294967289UL, (safe_add_func_uint64_t_u_u(0x9497261C4191E15BLL, p_97)))), l_118, (safe_mod_func_int32_t_s_s(g_74, (safe_sub_func_int64_t_s_s(0L, 0xA0B6D6E77E331CA0LL)))), g_111) > l_160) | 0x971ED8D5F6D39C23LL) == 3UL) & p_98);
                    }
                    if (p_97)
                        break;
                    g_171 |= (0L | (g_111 || func_18((func_18((safe_rshift_func_uint8_t_u_u(1UL, 1)), g_113, (+((0UL >= g_113) > (safe_add_func_uint64_t_u_u((+(((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_143 | g_112), (safe_add_func_uint32_t_u_u(g_103, l_149)))), g_10)) | p_98) || l_160)), g_74)))), p_97, g_103) <= g_103), p_98, g_10, g_113, p_98)));
                }
            }
        }
        for (l_121 = 20; (l_121 < 60); ++l_121)
        {
            unsigned l_180 = 0x998684FAL;
            g_112 = (safe_add_func_int32_t_s_s(1L, ((!l_118) < (safe_add_func_int32_t_s_s(p_97, p_97)))));
            ++l_180;
        }
        l_178 = (safe_sub_func_int8_t_s_s((!((l_179 > (safe_add_func_int64_t_s_s(g_10, g_171))) ^ l_187)), func_18((safe_lshift_func_int16_t_s_u(l_187, (safe_lshift_func_uint16_t_u_s(9UL, 1)))), (safe_mod_func_uint8_t_u_u(func_18(g_103, l_118, l_118, p_97, g_113), 0x3CL)), p_98, g_171, g_111)));
        l_199 = (g_113 >= func_18((func_18((func_18((safe_lshift_func_int16_t_s_s(((-7L) ^ ((safe_add_func_int16_t_s_s(0xA939L, (9L < (func_18(l_118, g_74, func_18(p_97, g_171, p_97, p_97, g_111), g_171, g_171) != l_198)))) > 7L)), p_98)), l_121, l_198, l_187, p_98) & p_97), p_98, g_74, g_103, g_74) && p_98), g_113, l_199, p_98, l_200));
    }
    return p_98;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
