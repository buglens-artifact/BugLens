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


union U0 {
   int f0;
};

union U1 {
   signed f0 : 25;
};

union U2 {
   int f0;
   volatile char f1;
   volatile long long f2;
};


static volatile short g_4 = (-1L);
static int g_11 = 0xCA3C0BF9L;
static int g_18 = 0x658EDFE0L;
static int g_77 = (-1L);
static union U0 g_78 = {5L};
static unsigned g_105 = 0x8A7B986AL;
static union U1 g_112 = {0L};
static volatile int g_182 = (-5L);
static volatile int * volatile g_181 = &g_182;
static volatile int * volatile *g_180 = &g_181;
static volatile union U2 g_218 = {0xAEEF2259L};
static volatile union U2 *g_217 = &g_218;
static unsigned short g_238 = 0x1900L;
static int g_262 = 0x20534451L;
static union U1 g_274 = {-7L};
static union U2 g_288 = {0xE4B6F538L};
static int g_412 = 3L;
static unsigned char g_413 = 1UL;
static union U2 g_433 = {0xC1D7FB45L};
static union U2 g_436 = {0x4556B4D1L};
static unsigned g_486 = 4294967295UL;
static int g_505 = 0xF95D60C0L;
static short g_585 = 0L;
static int g_594 = 1L;
static volatile union U1 * volatile g_624 = (void*)0;
static volatile union U1 * volatile *g_623 = &g_624;
static union U2 g_634 = {-8L};
static unsigned long long g_652 = 0x47C366842C025459LL;
static int * volatile g_660 = &g_594;



static const union U2 func_1(void);
static unsigned long long func_5(unsigned short p_6, unsigned p_7, const long long p_8, unsigned p_9, int p_10);
static unsigned char func_12(long long p_13, int p_14, unsigned short p_15, long long p_16, const char p_17);
static unsigned short func_20(union U0 p_21, unsigned char p_22, union U1 p_23, unsigned short p_24);
static union U0 func_25(long long p_26, unsigned p_27, int p_28, char p_29, unsigned short p_30);
static int func_31(unsigned short p_32, const union U0 p_33, long long p_34, unsigned short p_35, unsigned short p_36);
static short func_44(const unsigned long long p_45);
static int func_48(union U0 p_49, union U0 p_50, short p_51, unsigned short p_52, union U1 p_53);
static union U0 func_54(union U0 p_55, unsigned p_56, unsigned p_57, long long p_58, const unsigned char p_59);
static unsigned char func_62(short p_63, int p_64, unsigned short p_65, unsigned char p_66, unsigned long long p_67);
static const union U2 func_1(void)
{
    unsigned long long l_19 = 0x7A7525D2D91509CFLL;
    const union U0 l_37 = {0xE815F842L};
    union U1 l_79 = {0xB293C34FL};
    short l_564 = 0x0B38L;
    unsigned char l_665 = 250UL;
    int *l_666 = &g_11;
    (*g_660) = ((safe_mod_func_int64_t_s_s(g_4, func_5((g_11 | func_12(g_18, l_19, func_20(func_25(((func_31(l_19, l_37, (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((!(safe_rshift_func_int8_t_s_s(g_18, 3))), func_44((safe_rshift_func_int16_t_s_s(((func_48(func_54(l_37, l_37.f0, g_18, g_18, l_37.f0), g_78, l_37.f0, g_11, l_79) <= g_18) && l_79.f0), 0))))), g_11)), g_18, l_19) && 0xBBE48660L) == g_505), l_37.f0, l_19, l_79.f0, g_433.f0), l_564, l_79, g_433.f0), g_262, g_288.f0)), g_652, g_262, g_262, l_564))) <= 0xD5B5CE8DL);
    (*l_666) |= (safe_sub_func_uint64_t_u_u(func_62((&g_433 != &g_634), (l_564 & (safe_sub_func_int8_t_s_s(g_18, (g_486 < l_19)))), (l_665 > (0x9CL & l_79.f0)), g_4, g_486), 0x971B6A7E92C8F082LL));
    return (*g_217);

    }







static unsigned long long func_5(unsigned short p_6, unsigned p_7, const long long p_8, unsigned p_9, int p_10)
{
    union U0 l_655 = {1L};
    union U1 l_656 = {4L};
    int l_657 = 0x23BE82BFL;
    const unsigned long long l_658 = 0x6E186ED34B75A985LL;
    int *l_659 = &g_77;
    (*l_659) = (0x6E64L || ((safe_div_func_uint16_t_u_u(((func_31(func_31(p_7, func_25(p_6, (((func_48(g_78, l_655, l_655.f0, g_105, l_656) ^ p_6) ^ p_10) | l_657), l_655.f0, l_655.f0, l_656.f0), p_8, g_505, g_436.f0), l_655, g_652, g_288.f0, l_656.f0) | l_658) > l_655.f0), g_288.f0)) ^ l_655.f0));
    return g_105;
}







static unsigned char func_12(long long p_13, int p_14, unsigned short p_15, long long p_16, const char p_17)
{
    unsigned long long l_574 = 0x6650989D3A3C46B0LL;
    union U1 *l_605 = &g_112;
    union U1 **l_625 = &l_605;
    const union U0 l_626 = {1L};
    int l_628 = 0x7F2F9AD6L;
    if (l_574)
    {
        int *l_581 = &g_77;
        int **l_580 = &l_581;
        int ***l_579 = &l_580;
        const union U0 l_582 = {0x77FC88C1L};
        long long l_583 = 0xE81AF920992E8C8DLL;
        unsigned long long l_584 = 0xE9532768A1F6C9FFLL;
        g_585 |= (~(safe_add_func_int16_t_s_s(3L, func_31((safe_sub_func_uint32_t_u_u((l_579 == &l_580), l_574)), l_582, p_17, l_583, l_584))));
        (**l_580) = l_574;
    }
    else
    {
        const union U0 l_590 = {0L};
        int *l_593 = &g_594;
        union U1 **l_640 = &l_605;
        int **l_646 = &l_593;
        (*l_593) &= ((safe_rshift_func_int8_t_s_u((func_31((safe_lshift_func_int16_t_s_u(p_16, 10)), l_590, ((safe_lshift_func_int16_t_s_u((9UL < p_16), 14)) > 0xC830416393760276LL), g_413, (g_238 >= l_574)) | g_585), g_585)) > 0x4DEAE775L);
        if (p_16)
        {
            int **l_595 = &l_593;
            (*l_595) = &p_14;

            ;
        }
        else
        {
            int *l_598 = (void*)0;
            int *l_601 = &g_412;
            union U0 l_635 = {-6L};
            for (g_77 = (-11); (g_77 <= 23); ++g_77)
            {
                int **l_599 = &l_593;
                int *l_600 = &g_412;
                (*l_599) = l_598;

                ;
                (*l_600) = g_77;
            }

            ;
            (*l_601) = p_13;
            for (p_16 = 13; (p_16 > 11); p_16 = safe_sub_func_uint8_t_u_u(p_16, 2))
            {
                int **l_604 = &l_598;
                (*l_604) = &g_11;

                ;
            }

            ;
            return g_634.f0;
        }

        ;
        (*l_646) = &p_14;
    }
    for (g_433.f0 = 21; (g_433.f0 <= 24); ++g_433.f0)
    {
        union U2 * const l_649 = (void*)0;
        union U2 *l_651 = (void*)0;
        union U2 **l_650 = &l_651;
        (*l_650) = l_649;
    }
    return g_18;
}







static unsigned short func_20(union U0 p_21, unsigned char p_22, union U1 p_23, unsigned short p_24)
{
    int l_565 = 0x98F95A39L;
    union U1 l_570 = {0xB2E2C56CL};
    int *l_571 = (void*)0;
    int *l_572 = &g_412;
    int *l_573 = &g_412;
    (*l_572) |= func_62((0x92L == g_505), l_565, g_238, (safe_lshift_func_uint16_t_u_s((g_217 != (void*)0), (safe_mod_func_int64_t_s_s(((1UL < func_48(g_78, func_54(g_78, g_413, l_565, p_21.f0, l_565), g_11, g_262, l_570)) ^ 0L), 0x1A631482713B82C5LL)))), g_288.f0);
    l_571 = &g_11;

    ;
    (*l_572) = (&g_217 == (void*)0);
    l_573 = &g_11;

    ;
    return (*l_571);
}







static union U0 func_25(long long p_26, unsigned p_27, int p_28, char p_29, unsigned short p_30)
{
    const short l_561 = 0x07B3L;
    int *l_562 = &g_412;
    union U0 l_563 = {-4L};
    (*l_562) |= (safe_unary_minus_func_int16_t_s(l_561));
    return l_563;

    }







static int func_31(unsigned short p_32, const union U0 p_33, long long p_34, unsigned short p_35, unsigned short p_36)
{
    unsigned l_176 = 1UL;
    int *l_177 = &g_11;
    unsigned short l_194 = 1UL;
    int l_275 = 6L;
    int l_290 = 0x87B3A4D1L;
    unsigned short l_539 = 65531UL;
    union U0 l_556 = {0x2D1C9BFAL};
    union U1 l_558 = {0L};
    char l_559 = (-4L);
    if ((l_176 ^ ((l_177 != l_177) || (func_62(((safe_sub_func_int16_t_s_s((g_180 != (void*)0), func_62(g_78.f0, (safe_mod_func_int8_t_s_s((*l_177), (safe_rshift_func_int16_t_s_u(p_34, 8)))), g_112.f0, (*l_177), p_34))) > p_36), p_35, (*l_177), g_77, p_32) || (*l_177)))))
    {
        int **l_191 = &l_177;
        int l_209 = 0L;
        int l_210 = (-1L);
        unsigned long long l_241 = 0xED955F3680C6D9DELL;
        union U1 ** const l_249 = (void*)0;
        unsigned l_260 = 4294967295UL;
        unsigned l_261 = 0x194D5882L;
        int l_341 = 0x5E0C5CD0L;
        char l_429 = 1L;
        union U2 * const l_432 = &g_433;
        if (((safe_rshift_func_int16_t_s_u((l_191 != (void*)0), 10)) & ((safe_sub_func_int16_t_s_s((l_194 <= p_36), (((*l_177) >= g_77) > func_62(g_11, p_32, ((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((func_62(p_32, (*l_177), g_18, (**l_191), (*l_177)) >= (**l_191)) >= (**l_191)), p_35)), g_105)) || p_35), (*l_177), p_33.f0)))) == p_35)))
        {
            int **l_201 = &l_177;
            union U1 l_279 = {-1L};
            int l_342 = 0xBE669C13L;
            int **l_428 = &l_177;
            int l_479 = 1L;
            if (g_112.f0)
            {
                unsigned short l_214 = 65535UL;
                int l_228 = 0x409496DEL;
                unsigned short l_284 = 65526UL;
                int l_289 = 0L;
                int l_318 = (-9L);
                int *l_416 = &g_77;
                if ((safe_lshift_func_int16_t_s_u(0x1010L, 15)))
                {
                    unsigned short l_208 = 1UL;
                    int *l_221 = (void*)0;
                    int *l_222 = (void*)0;
                    int *l_223 = &l_210;
                    int *l_224 = &l_210;
                    int *l_225 = &l_209;
                    int *l_226 = &g_77;
                    int *l_227 = &l_210;
                    int *l_229 = &l_210;
                    int *l_230 = &l_228;
                    int l_231 = 0x54AC5FBAL;
                    int *l_232 = &l_210;
                    int *l_233 = &l_209;
                    int *l_234 = &l_228;
                    int *l_235 = &l_231;
                    int *l_236 = &g_77;
                    int *l_237 = (void*)0;
                    if (((l_201 != l_201) > (safe_add_func_int16_t_s_s((p_36 || ((func_62(p_32, ((**l_201) <= 0x3AFDC62DB5C1620ELL), (((safe_mod_func_int16_t_s_s(g_18, (safe_add_func_uint32_t_u_u((0L & g_11), 0xF7408670L)))) < g_78.f0) > p_33.f0), p_33.f0, (**l_191)) ^ g_11) <= l_208)), g_18))))
                    {
                        int *l_211 = &g_77;
                        int *l_212 = &l_209;
                        int *l_213 = &g_77;
                        volatile union U2 **l_219 = &g_217;
                        --l_214;
                        (*l_219) = g_217;
                        (*l_211) |= g_18;
                        g_112.f0 = p_35;
                    }
                    else
                    {
                        volatile int * volatile **l_220 = &g_180;
                        (*l_220) = g_180;
                    }
                    ++g_238;
                }
                else
                {
                    unsigned short l_246 = 65528UL;
                    union U1 **l_250 = (void*)0;
                    (*l_191) = (*l_191);
                    if (l_241)
                    {
                        union U1 *l_243 = &g_112;
                        union U1 **l_242 = &l_243;
                        (*l_242) = &g_112;
                    }
                    else
                    {
                        int *l_251 = &l_228;
                        (*l_251) = ((safe_mod_func_int32_t_s_s((p_36 && (p_36 ^ (l_246 <= ((safe_div_func_uint32_t_u_u(g_78.f0, (((void*)0 != l_249) | 0xD1DA8338L))) <= (((void*)0 != l_250) & l_246))))), l_228)) | (**l_201));
                    }
                }
                if ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((!func_44((**l_191))), func_62(g_11, p_33.f0, ((g_238 & (func_62(g_18, (((safe_lshift_func_int16_t_s_u((func_62(g_18, p_35, g_238, g_18, p_33.f0) | (**l_191)), p_34)) < l_260) == 0xDDL), l_261, p_35, g_262) == g_11)) == g_18), (*l_177), p_35))) > 3L), l_214)))
                {
                    char l_273 = 0x48L;
                    int *l_276 = &g_77;
                    union U2 *l_287 = &g_288;
                    if ((safe_mod_func_int16_t_s_s((-6L), p_32)))
                    {
                        l_228 = (safe_sub_func_int16_t_s_s(func_48(p_33, p_33, (func_62((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(p_32, func_44(g_112.f0))) ^ (-8L)) <= (*l_177)), ((g_11 == (**l_201)) & p_36))), 0xC953L)), p_36, p_36, l_273, l_273) <= (-1L)), g_262, g_274), (**l_191)));
                        l_275 = (g_18 != g_18);
                        (*l_191) = &l_275;

                        ;
                    }
                    else
                    {
                        (*l_201) = l_276;

                        ;
                    }

                    ;
                    if ((safe_add_func_int64_t_s_s((*l_177), (func_48(g_78, p_33, g_105, g_274.f0, l_279) ^ (safe_add_func_uint64_t_u_u(func_62((safe_lshift_func_int16_t_s_s(g_238, 6)), p_35, p_32, (*l_177), p_32), g_274.f0))))))
                    {
                        return l_284;
                    }
                    else
                    {
                        l_290 &= (safe_rshift_func_uint16_t_u_u((((void*)0 == l_287) >= 0x16AA3D3629F83BD3LL), l_289));
                    }
                }
                else
                {
                    unsigned l_356 = 0x8E19375EL;
                    int l_385 = 0xCB4C1B82L;
                    if (p_33.f0)
                    {
                        int *l_291 = &g_77;
                        int *l_292 = (void*)0;
                        int l_293 = 0x3E2319AEL;
                        int *l_294 = &l_275;
                        int *l_295 = (void*)0;
                        int *l_296 = &l_210;
                        int *l_297 = &l_228;
                        int *l_298 = &l_275;
                        int *l_299 = (void*)0;
                        int *l_300 = &l_290;
                        int *l_301 = &l_275;
                        int l_302 = 0x433B515CL;
                        int *l_303 = &l_210;
                        int *l_304 = &l_210;
                        int *l_305 = (void*)0;
                        int *l_306 = &l_302;
                        int *l_307 = &l_275;
                        int *l_308 = (void*)0;
                        int *l_309 = &g_77;
                        int *l_310 = &l_302;
                        int *l_311 = &l_293;
                        int *l_312 = &l_302;
                        int *l_313 = &l_275;
                        int *l_314 = (void*)0;
                        int *l_315 = &l_293;
                        int *l_316 = &l_290;
                        int *l_317 = (void*)0;
                        int *l_319 = &l_209;
                        int l_320 = 7L;
                        int *l_321 = &l_318;
                        int *l_322 = &l_275;
                        int *l_323 = (void*)0;
                        int *l_324 = (void*)0;
                        int *l_325 = &l_320;
                        int *l_326 = &l_320;
                        int *l_327 = &l_275;
                        int *l_328 = (void*)0;
                        int *l_329 = &l_320;
                        int *l_330 = &l_320;
                        int *l_331 = &l_293;
                        int *l_332 = &l_293;
                        int *l_333 = (void*)0;
                        int *l_334 = &l_293;
                        int *l_335 = &l_320;
                        int *l_336 = &l_209;
                        int *l_337 = &l_290;
                        int *l_338 = &l_293;
                        int *l_339 = &l_302;
                        int *l_340 = &l_290;
                        int *l_343 = (void*)0;
                        int *l_344 = (void*)0;
                        int *l_345 = &l_320;
                        int *l_346 = &l_210;
                        int *l_347 = &l_290;
                        int l_348 = 0x9AB5B6C6L;
                        int *l_349 = &l_318;
                        int *l_350 = &l_293;
                        int *l_351 = &l_275;
                        int *l_352 = (void*)0;
                        int *l_353 = (void*)0;
                        int *l_354 = (void*)0;
                        int *l_355 = &l_320;
                        l_356--;
                    }
                    else
                    {
                        unsigned l_359 = 1UL;
                        int *l_360 = &l_318;
                        int *l_361 = &l_290;
                        int *l_362 = &l_209;
                        int *l_363 = (void*)0;
                        int *l_364 = &l_342;
                        int *l_365 = &l_318;
                        int *l_366 = (void*)0;
                        int *l_367 = &l_318;
                        int *l_368 = &l_341;
                        int *l_369 = &g_77;
                        int *l_370 = &l_275;
                        int *l_371 = &l_228;
                        int *l_372 = (void*)0;
                        int *l_373 = (void*)0;
                        int *l_374 = &l_275;
                        int *l_375 = &l_290;
                        int *l_376 = &l_342;
                        int *l_377 = &l_290;
                        int *l_378 = &g_77;
                        int *l_379 = &l_342;
                        int *l_380 = &l_210;
                        int *l_381 = &l_341;
                        int *l_382 = (void*)0;
                        int *l_383 = &l_275;
                        int *l_384 = (void*)0;
                        int *l_386 = &l_210;
                        int *l_387 = &l_275;
                        int *l_388 = &g_77;
                        int *l_389 = (void*)0;
                        int *l_390 = &l_342;
                        int *l_391 = &l_275;
                        int *l_392 = &l_341;
                        int *l_393 = &l_290;
                        int *l_394 = &l_210;
                        int *l_395 = (void*)0;
                        int *l_396 = &l_342;
                        int *l_397 = &l_209;
                        int *l_398 = &l_290;
                        int *l_399 = &l_342;
                        int *l_400 = &l_210;
                        int *l_401 = &l_342;
                        int *l_402 = (void*)0;
                        int *l_403 = &g_77;
                        int l_404 = 9L;
                        int *l_405 = (void*)0;
                        int *l_406 = &l_341;
                        int *l_407 = &l_385;
                        int *l_408 = &l_404;
                        int *l_409 = &l_341;
                        int *l_410 = &l_318;
                        int *l_411 = &l_318;
                        (*l_191) = &g_77;

                        ;
                        l_359 ^= (&g_217 != (void*)0);
                        ++g_413;
                        (*l_400) = p_35;
                    }

                    ;
                }

                ;
                (*l_416) = (**l_201);
            }
            else
            {
                union U2 *l_435 = &g_436;
                union U2 **l_434 = &l_435;
                for (l_342 = 0; (l_342 > (-16)); --l_342)
                {
                    int l_430 = 2L;
                    int *l_431 = &g_412;
                    (*l_431) ^= (p_34 && ((safe_add_func_uint16_t_u_u((((void*)0 == g_180) < (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((g_274.f0 && p_33.f0), (safe_unary_minus_func_int8_t_s((g_112.f0 | (g_112.f0 && (safe_sub_func_int64_t_s_s(0x2CA0155A2B3F61FCLL, func_62((&l_177 == l_428), l_429, (**l_428), g_262, p_33.f0))))))))), p_36))), l_430)) >= g_18));
                }
                (*l_434) = l_432;

                ;
            }

            ;
            if ((**l_428))
            {
                int *l_437 = &l_290;
                int *l_438 = &l_209;
                int *l_439 = (void*)0;
                int *l_440 = &g_77;
                int *l_441 = &l_290;
                int *l_442 = &g_412;
                int *l_443 = &l_210;
                int *l_444 = &l_209;
                int *l_445 = &l_341;
                int *l_446 = &l_209;
                int *l_447 = &l_275;
                int l_448 = 1L;
                int *l_449 = &l_275;
                int *l_450 = &l_290;
                int *l_451 = &l_209;
                int *l_452 = &l_341;
                int *l_453 = &g_77;
                int *l_454 = &l_341;
                int *l_455 = &g_412;
                int *l_456 = &l_275;
                int *l_457 = (void*)0;
                int *l_458 = &l_341;
                int *l_459 = &g_77;
                int *l_460 = &l_210;
                int *l_461 = &l_275;
                int *l_462 = &l_341;
                int *l_463 = &l_210;
                int *l_464 = &l_275;
                int *l_465 = &l_448;
                int *l_466 = &l_275;
                int *l_467 = (void*)0;
                int *l_468 = (void*)0;
                int *l_469 = &g_412;
                int *l_470 = &l_290;
                int *l_471 = (void*)0;
                int *l_472 = &l_341;
                int *l_473 = &l_290;
                int *l_474 = &l_341;
                int *l_475 = &l_448;
                int l_476 = 0x32BE164FL;
                int *l_477 = &l_476;
                int *l_478 = &l_341;
                int *l_480 = &l_476;
                int *l_481 = (void*)0;
                int *l_482 = (void*)0;
                int *l_483 = &g_77;
                int *l_484 = &l_448;
                int *l_485 = &l_341;
                ++g_486;
            }
            else
            {
                return g_274.f0;
            }
            (*l_428) = (*l_191);
        }
        else
        {
            return g_486;
        }

        ;
    }
    else
    {
        int *l_489 = &l_290;
        int **l_490 = &l_489;
        int l_491 = 0x0CEAFF0FL;
        int *l_492 = &l_491;
        int *l_493 = &g_77;
        int *l_494 = &l_290;
        int *l_495 = &l_275;
        int *l_496 = &g_412;
        int *l_497 = (void*)0;
        int *l_498 = &l_275;
        int *l_499 = &l_290;
        int *l_500 = (void*)0;
        int *l_501 = (void*)0;
        int *l_502 = &l_275;
        int *l_503 = &l_290;
        int *l_504 = &g_412;
        int *l_506 = (void*)0;
        int *l_507 = &l_290;
        int *l_508 = &l_275;
        int *l_509 = &l_290;
        int *l_510 = (void*)0;
        int *l_511 = &l_290;
        int *l_512 = &l_275;
        int *l_513 = &l_275;
        int *l_514 = &g_77;
        int *l_515 = &l_290;
        int *l_516 = &g_412;
        int *l_517 = &l_290;
        int *l_518 = &l_275;
        int *l_519 = &g_412;
        int *l_520 = &l_290;
        int *l_521 = &l_290;
        int l_522 = 0x2BC33D4BL;
        int *l_523 = &l_491;
        int *l_524 = &l_522;
        int *l_525 = &l_491;
        int *l_526 = &l_522;
        int *l_527 = &g_77;
        int *l_528 = (void*)0;
        int *l_529 = &l_522;
        int *l_530 = &l_290;
        int *l_531 = &l_491;
        int *l_532 = &l_275;
        int *l_533 = &l_491;
        int *l_534 = &l_491;
        int *l_535 = &g_412;
        int *l_536 = &l_290;
        int l_537 = (-1L);
        int *l_538 = &l_290;
        (*l_490) = l_489;
        --l_539;
    }

    ;
    if (func_62(p_34, ((-8L) || g_262), p_36, p_33.f0, (p_32 <= (*l_177))))
    {
        int *l_542 = (void*)0;
        int **l_543 = &l_177;
        (*l_543) = l_542;

        ;
    }
    else
    {
        int *l_548 = (void*)0;
        int *l_549 = (void*)0;
        union U1 l_557 = {-9L};
        g_274.f0 = ((safe_add_func_uint32_t_u_u((g_78.f0 > (safe_sub_func_int32_t_s_s(g_262, 0x491985D1L))), 4294967287UL)) < p_33.f0);
        l_275 = (safe_mod_func_int32_t_s_s(0xF3D06509L, (+(safe_lshift_func_int8_t_s_s(func_48(p_33, p_33, (*l_177), (((*l_177) && g_262) < ((+p_36) > ((safe_mod_func_int16_t_s_s((p_32 < (func_48(l_556, p_33, p_36, p_34, l_557) | 0x08L)), p_35)) > p_34))), l_558), l_559)))));
    }

    ;
    g_412 ^= p_32;
    return p_33.f0;
}







static short func_44(const unsigned long long p_45)
{
    int *l_110 = &g_77;
    union U0 l_111 = {0xB2D29C61L};
    short l_135 = 1L;
    union U1 l_136 = {-1L};
    int **l_175 = &l_110;
    g_77 &= (safe_lshift_func_uint16_t_u_s((&g_77 != &g_77), 10));
    if (func_48(func_54(g_78, ((void*)0 != l_110), p_45, p_45, g_18), l_111, g_105, p_45, g_112))
    {
        int l_128 = 0x06A58E0DL;
        for (g_78.f0 = 0; (g_78.f0 >= 28); g_78.f0++)
        {
            short l_115 = 0x7202L;
            union U0 l_129 = {-1L};
            unsigned long long l_134 = 0x0864F5ABE080F988LL;
            (*l_110) |= g_78.f0;
            (*l_110) = ((g_18 < (l_115 < l_115)) || (!(((((-5L) == (~(l_110 != (void*)0))) | p_45) >= g_11) | (safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(p_45, l_115)), g_77)), 1UL)) || p_45), 0x9DD37137L)), l_115)))));
            (*l_110) = g_11;
            (*l_110) = ((((void*)0 == &g_11) != 0UL) & (safe_mod_func_int64_t_s_s(l_128, func_48(l_129, func_54(func_54(func_54(func_54(l_111, p_45, (safe_lshift_func_int16_t_s_s((p_45 != ((safe_lshift_func_uint16_t_u_s((p_45 | g_112.f0), 5)) ^ 1UL)), 0)), l_128, l_115), l_115, g_78.f0, p_45, p_45), p_45, g_78.f0, l_134, g_11), g_112.f0, g_11, g_105, g_112.f0), g_78.f0, l_135, l_136))));
        }
    }
    else
    {
        unsigned char l_145 = 0x02L;
        unsigned char l_146 = 0x0BL;
        int *l_156 = &g_77;
        for (l_111.f0 = (-23); (l_111.f0 < 24); l_111.f0++)
        {
            if (g_11)
                break;
        }
        for (l_135 = 0; (l_135 != (-24)); l_135 = safe_sub_func_int32_t_s_s(l_135, 3))
        {
            int l_151 = 0x5D6BEAECL;
            int *l_161 = &g_77;
            unsigned l_163 = 0xA50B6C34L;
            for (l_111.f0 = (-17); (l_111.f0 > (-4)); l_111.f0++)
            {
                unsigned l_162 = 0x338E40FFL;
                (*l_161) = (safe_div_func_uint64_t_u_u((l_145 >= func_62(l_146, ((safe_rshift_func_int8_t_s_u((func_48(func_54(func_54(l_111, (safe_add_func_uint16_t_u_u(l_151, ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(g_11, 12)) || ((l_156 == (void*)0) && g_78.f0)), 5)) != (safe_mod_func_uint32_t_u_u(((((safe_div_func_int32_t_s_s((l_156 != l_161), 0x251B451AL)) || 2L) == 0xA36831ADL) > l_162), g_112.f0))))), (*l_161), g_77, g_112.f0), p_45, p_45, p_45, g_78.f0), l_111, g_18, l_162, g_112) != 0L), 0)) | l_163), l_162, g_112.f0, g_112.f0)), 0x4DE7E0673044D688LL));
            }
            g_112.f0 |= (((l_161 == (void*)0) ^ (~(safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_110) < (safe_unary_minus_func_uint64_t_u((safe_mod_func_uint32_t_u_u((g_78.f0 || func_62((l_110 != &g_11), g_78.f0, g_18, (safe_mod_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s(0xA5L, 0L)) != (*l_161)) <= p_45) <= 0xC4L), (*l_161))), p_45)), g_78.f0))))), p_45)), (*l_156))))) || (*l_156));
        }
    }
    (*l_175) = &g_11;

    ;
    return (**l_175);
}







static int func_48(union U0 p_49, union U0 p_50, short p_51, unsigned short p_52, union U1 p_53)
{
    const unsigned l_86 = 4294967295UL;
    unsigned char l_93 = 0UL;
    int *l_94 = &g_77;
    int *l_95 = &g_77;
    int *l_96 = &g_77;
    int *l_97 = &g_77;
    int *l_98 = &g_77;
    int *l_99 = &g_77;
    int *l_100 = &g_77;
    int *l_101 = (void*)0;
    int *l_102 = &g_77;
    int l_103 = 6L;
    int *l_104 = &g_77;
    p_53.f0 = (!(0x5C2DL == ((g_18 && (func_62((!g_78.f0), ((safe_lshift_func_int8_t_s_u((l_86 | l_86), 2)) & (l_86 == (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(func_62((safe_rshift_func_uint8_t_u_u((g_77 ^ l_86), 1)), g_77, l_93, p_50.f0, g_11), 0xACL)), 0x44L)))), l_86, l_86, g_77) <= (-1L))) <= p_49.f0)));
    --g_105;
    return g_77;
}







static union U0 func_54(union U0 p_55, unsigned p_56, unsigned p_57, long long p_58, const unsigned char p_59)
{
    unsigned long long l_72 = 0x6CD219FA4A603D2CLL;
    short l_73 = 0x14A1L;
    int *l_75 = (void*)0;
    int *l_76 = &g_77;
    (*l_76) = ((((safe_sub_func_int64_t_s_s((8L != func_62(p_58, g_18, ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(l_72, (((p_59 != g_11) < l_73) & 0UL))), 6)) > (g_11 && p_55.f0)), l_72, l_73)), p_58)) ^ g_11) && l_72) != l_73);
    return g_78;

    }







static unsigned char func_62(short p_63, int p_64, unsigned short p_65, unsigned char p_66, unsigned long long p_67)
{
    unsigned short l_74 = 2UL;
    return l_74;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_112.f0, "g_112.f0", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_433.f0, "g_433.f0", print_hash_value);
    transparent_crc(g_433.f1, "g_433.f1", print_hash_value);
    transparent_crc(g_436.f0, "g_436.f0", print_hash_value);
    transparent_crc(g_436.f1, "g_436.f1", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_634.f0, "g_634.f0", print_hash_value);
    transparent_crc(g_634.f1, "g_634.f1", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
