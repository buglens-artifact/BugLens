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
   unsigned f0 : 14;
   short f1;
   long long f2;
   signed f3 : 18;
   unsigned short f4;
   short f5;
   signed : 0;
   unsigned f6;
   short f7;
};

struct S1 {
   signed f0 : 3;
   signed f1 : 6;
   signed f2 : 11;
   unsigned f3 : 10;
};


static char g_8 = (-7L);
static struct S0 g_78 = {114,0L,1L,-467,0xAEA2L,-1L,0xC6A45D31L,0x2576L};
static struct S1 g_91 = {-0,5,13,15};
static struct S1 g_114 = {-0,4,33,26};
static unsigned g_199 = 18446744073709551615UL;
static struct S1 g_276 = {-1,0,19,3};
static struct S0 g_282 = {111,0xF069L,0L,381,0x133CL,0L,18446744073709551613UL,1L};
static int g_367 = 0L;
static unsigned g_417 = 4294967288UL;
static unsigned g_437 = 0xE8981D3EL;
static int g_550 = 0x60FA85D3L;



static struct S1 func_1(void);
static struct S1 func_2(long long p_3, long long p_4, unsigned char p_5, unsigned p_6);
static unsigned func_9(short p_10, int p_11, int p_12, short p_13, unsigned p_14);
static long long func_17(unsigned short p_18, int p_19, unsigned long long p_20, unsigned long long p_21, struct S0 p_22);
static unsigned char func_25(unsigned p_26, struct S1 p_27, int p_28, struct S1 p_29);
static unsigned func_30(int p_31, struct S1 p_32, unsigned p_33);
static long long func_36(struct S1 p_37, int p_38, short p_39, struct S1 p_40, int p_41);
static struct S1 func_42(char p_43, unsigned long long p_44, int p_45, int p_46);
static long long func_47(char p_48, unsigned p_49, struct S1 p_50, int p_51);
static unsigned long long func_53(unsigned p_54);
static struct S1 func_1(void)
{
    unsigned l_7 = 4UL;
    unsigned short l_52 = 1UL;
    unsigned long long l_55 = 0xCFB11589A458230BLL;
    struct S1 l_62 = {-1,-4,-38,24};
    unsigned char l_281 = 0UL;
    struct S1 l_326 = {0,-6,-17,30};
    unsigned l_342 = 0x33CE66FDL;
    int l_371 = 1L;
    char l_421 = 5L;
    unsigned short l_498 = 1UL;
    struct S0 l_500 = {85,6L,0xE49874BAE41FBABFLL,-30,0x05CDL,8L,1UL,0xC682L};
    unsigned long long l_528 = 0xE9314E3489EDA959LL;
    unsigned l_549 = 18446744073709551615UL;
    g_276 = func_2(l_7, (0x43L & 250UL), g_8, func_9(((safe_mod_func_int16_t_s_s((g_8 & func_17((g_8 >= l_7), (safe_add_func_uint8_t_u_u((func_25((((((func_30((safe_sub_func_int64_t_s_s((~func_36(func_42((((func_47(l_52, ((func_53(l_55) != 0x9BDEFAB77C19C50ELL) & l_7), l_62, g_8) && g_8) >= g_8) & g_8), g_8, g_8, l_62.f1), l_62.f0, l_62.f1, g_114, l_62.f0)), 0xF79517D8BD1D58CDLL)), g_276, g_199) & l_62.f2) == g_114.f0) > 0xFE907973L) | g_114.f2) >= l_62.f2), l_62, l_281, g_276) & 0x15L), 0x5FL)), g_114.f2, g_276.f3, g_282)), g_282.f6)) ^ g_282.f6), l_62.f1, l_7, g_282.f2, l_7));
    l_62.f2 = l_62.f2;
    for (g_78.f1 = 0; (g_78.f1 == (-21)); g_78.f1 = safe_sub_func_int8_t_s_s(g_78.f1, 3))
    {
        unsigned long long l_320 = 0x668688869D018CBELL;
        int l_328 = 0xEEFD7E30L;
        struct S1 l_348 = {-0,-2,-14,8};
        unsigned char l_355 = 0x9CL;
        struct S1 l_366 = {-0,-7,5,21};
        unsigned long long l_379 = 0x271EE976597471B3LL;
        short l_430 = 0x0634L;
        struct S0 l_476 = {118,0L,1L,271,0x41DAL,0xF49FL,3UL,0x87CEL};
        long long l_521 = (-7L);
        if ((safe_sub_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_u(g_114.f3, g_282.f7)) && 0xAEL) || g_276.f1) != g_276.f0) | 0x11L), 6UL)))
        {
            if (g_199)
                break;
        }
        else
        {
            char l_321 = 0xE6L;
            unsigned l_327 = 9UL;
            int l_336 = 0xC3ADBA4FL;
            int l_343 = 0x0AA29DE7L;
            struct S1 l_368 = {-0,1,-16,1};
            unsigned short l_423 = 65532UL;
            int l_438 = (-1L);
            int l_448 = 0x1FBB9AE5L;
            struct S0 l_499 = {41,0x1F33L,1L,181,0xDDB8L,1L,18446744073709551614UL,0x8D21L};
            short l_522 = 0x66D7L;
            if (((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_320, l_321)), 0L)) <= (+((safe_sub_func_int32_t_s_s((func_9((func_47(l_321, (((safe_sub_func_int64_t_s_s(g_282.f5, ((0x5C0EDC9BEBC32C68LL | (func_53(g_91.f1) ^ g_91.f3)) || g_78.f4))) != 0xB09AL) == g_276.f0), l_326, l_327) == 0UL), g_78.f3, l_52, g_78.f5, l_52) >= l_320), 9L)) | g_114.f1))))
            {
                unsigned l_335 = 18446744073709551609UL;
                int l_339 = 0xDF9F01FBL;
                l_328 = g_282.f3;
                l_336 = ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((g_114.f1 >= l_328), 3)), l_321)) && (safe_sub_func_uint32_t_u_u((((65535UL < g_282.f1) == g_282.f7) > l_327), (((g_282.f1 < ((l_328 ^ 0xF780C5D144D0A465LL) != l_335)) >= 2UL) == g_91.f0))));
                if ((l_336 > g_282.f6))
                {
                    l_339 = (l_55 | (safe_mod_func_int8_t_s_s((g_78.f6 < l_321), g_78.f4)));
                    g_78.f3 = (((safe_sub_func_uint64_t_u_u(1UL, 0x898C33FE9B47BCCFLL)) > (((l_335 | g_78.f3) & func_53(l_342)) | 65535UL)) && g_282.f6);
                    if (l_343)
                        continue;
                    return g_276;
                }
                else
                {
                    l_62.f0 = (+(safe_unary_minus_func_int8_t_s(g_78.f7)));
                }
            }
            else
            {
                unsigned l_353 = 0x11F8ADE7L;
                int l_359 = 0xC9372773L;
                unsigned char l_404 = 5UL;
                int l_420 = 0x8DFD85F6L;
                int l_429 = (-7L);
                struct S1 l_436 = {-0,-3,-36,11};
                unsigned short l_441 = 0xCAF5L;
                struct S0 l_445 = {57,-9L,0x2D8E9F0929D5FF4DLL,-322,0UL,0x130FL,0xF2824C95L,-6L};
                struct S0 l_477 = {102,0L,0xD8F9BD7691855961LL,-126,0xE0E0L,-1L,0x1089C80DL,1L};
                struct S1 l_523 = {0,-2,15,7};
                if (g_282.f7)
                {
                    unsigned l_347 = 0x22FDED5EL;
                    struct S1 l_354 = {-0,-6,22,4};
                    if (func_30(func_30(l_328, g_114, g_8), g_276, g_78.f3))
                    {
                        g_91 = g_91;
                        l_354.f2 = ((((safe_rshift_func_int16_t_s_u((l_320 == (((g_276.f1 != func_25(g_282.f0, g_91, l_347, l_348)) <= ((safe_add_func_int8_t_s_s((+(!(safe_sub_func_int64_t_s_s(l_353, func_47(g_276.f0, g_91.f3, l_354, g_91.f1))))), 1UL)) >= g_282.f3)) <= g_282.f4)), 7)) >= 0x97L) & l_355) || g_8);
                        g_91.f1 = 0x3AB809C7L;
                    }
                    else
                    {
                        unsigned char l_358 = 1UL;
                        l_326.f1 = l_353;
                        l_359 = (safe_add_func_uint16_t_u_u(l_358, (1UL > ((l_326.f0 | g_91.f2) || l_336))));
                        l_348 = g_114;
                    }
                }
                else
                {
                    short l_365 = 1L;
                    int l_372 = (-7L);
                    g_114 = l_348;
                    if (l_62.f0)
                    {
                        struct S1 l_364 = {-0,-3,11,21};
                        l_359 = (safe_sub_func_int64_t_s_s((0xD2L >= (safe_lshift_func_int16_t_s_u(0x619CL, 15))), func_36(l_364, g_91.f2, (0x1C74D21402CF99B6LL >= (func_47(g_78.f3, (func_53(g_78.f7) <= func_9(l_326.f1, l_353, l_348.f2, g_78.f5, g_78.f6)), l_348, g_282.f4) && 0xF4L)), g_114, l_365)));
                        g_276.f1 = func_36(l_366, g_367, l_365, l_368, (func_9((safe_add_func_int16_t_s_s((g_91.f2 ^ g_114.f1), (g_276.f0 | 0x696BL))), (0x43L > g_282.f2), g_78.f2, g_282.f1, l_371) | g_78.f4));
                        g_367 = g_282.f4;
                        return g_91;
                    }
                    else
                    {
                        l_372 = g_78.f3;
                    }
                }
                if (((+(safe_sub_func_int16_t_s_s(g_282.f1, (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_371, l_379)), (func_36(g_276, g_78.f1, g_78.f4, g_114, (((-9L) & (safe_add_func_uint16_t_u_u(func_53(g_78.f2), 2UL))) != g_199)) > 0x7C8B6362L))) == 0UL) >= g_78.f2)))) & l_368.f2))
                {
                    unsigned char l_388 = 255UL;
                    unsigned char l_410 = 247UL;
                    struct S1 l_424 = {0,-3,-34,14};
                    if (l_62.f2)
                    {
                        l_348.f2 = l_52;
                    }
                    else
                    {
                        char l_391 = 0L;
                        long long l_405 = (-1L);
                        g_276.f0 = ((safe_add_func_int16_t_s_s(((l_379 || ((safe_lshift_func_uint16_t_u_u(g_114.f3, l_326.f1)) ^ (safe_lshift_func_int16_t_s_u(g_276.f2, 15)))) > l_52), l_368.f3)) && ((-1L) >= g_78.f5));
                        l_336 = ((l_388 < (((((safe_rshift_func_int8_t_s_s(g_78.f2, 3)) & l_391) < g_114.f3) | (((((~(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_62.f2, g_78.f0)), l_391)) && ((safe_sub_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((!0x7ADD14C6L), ((((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(0x9DL, l_388)) || 0xE3CCA6D61B4E32C6LL), l_359)) | 0UL) > 0xC4L) <= l_404))) < (-7L)) || g_91.f2), l_391)) == 0xC680L)) | l_388)) | l_405) & l_404) | g_282.f1) > g_367)) != g_282.f3)) < 0x03L);
                    }
                    if ((safe_lshift_func_uint16_t_u_u(func_36(g_276, g_114.f0, l_359, g_276, (safe_lshift_func_uint16_t_u_u(l_410, (func_9((l_355 != (((safe_add_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((l_366.f0 < g_417), (((((((safe_sub_func_int32_t_s_s(g_78.f7, g_199)) < g_282.f5) ^ g_91.f3) || l_404) ^ 0xA095CF3CL) | g_78.f0) <= l_388))) & l_404) || g_276.f1) > g_282.f3), 1L)) ^ g_78.f7) != g_91.f3), l_420)) <= l_420) | l_421)), l_388, g_114.f3, l_62.f0, l_404) >= g_78.f5)))), l_368.f3)))
                    {
                        short l_422 = (-1L);
                        l_423 = (0L != (l_422 != g_282.f2));
                        return l_424;
                    }
                    else
                    {
                        unsigned l_431 = 0UL;
                        l_62.f0 = ((l_353 || (safe_sub_func_int32_t_s_s(((0x49E89731L < (safe_rshift_func_uint8_t_u_u(g_91.f2, (g_417 > (l_429 < l_355))))) >= l_430), (l_431 ^ (254UL > g_78.f6))))) >= g_282.f3);
                    }
                    l_424.f1 = 0x07B3F76FL;
                }
                else
                {
                    g_276.f2 = (6UL != ((((safe_add_func_uint64_t_u_u(0x536337888637AB95LL, (+(safe_rshift_func_uint16_t_u_u(g_276.f0, 12))))) > func_25(l_326.f1, l_436, g_78.f0, g_91)) == 0L) ^ g_367));
                    if ((g_437 || (((l_438 && (safe_sub_func_int16_t_s_s(func_9((((g_78.f4 ^ (l_368.f3 >= ((!((0xECL <= func_53(l_441)) != (1L <= (safe_lshift_func_int8_t_s_s(g_282.f7, g_8))))) & g_78.f0))) >= l_366.f3) && 0xD2L), g_282.f3, l_436.f0, l_359, l_359), g_114.f0))) && 65529UL) < l_62.f2)))
                    {
                        if (l_348.f1)
                            break;
                        g_276.f1 = (l_404 >= (g_276.f3 < (safe_unary_minus_func_int64_t_s(l_327))));
                    }
                    else
                    {
                        int l_449 = 1L;
                        l_445 = g_282;
                        g_78.f3 = ((safe_mod_func_int16_t_s_s(l_366.f3, g_114.f1)) != (8L | ((l_448 >= g_78.f7) == g_282.f2)));
                        l_368.f0 = l_449;
                    }
                    for (l_328 = 0; (l_328 == 5); l_328++)
                    {
                        return l_436;
                    }
                }
                if ((g_78.f6 > g_78.f3))
                {
                    unsigned short l_474 = 65534UL;
                    int l_475 = 1L;
                    l_475 = (safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((l_421 != ((safe_mod_func_uint32_t_u_u((6UL <= l_368.f3), l_366.f2)) ^ (safe_lshift_func_int8_t_s_u((g_78.f0 & (safe_add_func_uint8_t_u_u(func_53((g_367 ^ (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(0x29L, (safe_mod_func_uint16_t_u_u(l_348.f0, (l_7 | l_436.f3))))) >= g_276.f2), l_474)) <= 0L), 5)))), g_78.f1))), l_475)))), g_91.f3)), g_282.f0)), g_282.f5)), g_282.f7));
                    l_477 = l_476;
                    return l_348;
                }
                else
                {
                    int l_484 = 0L;
                    struct S0 l_501 = {66,0x3D6BL,0x6D208DF88E9A8134LL,-414,0x7D52L,-8L,0xADCFAA5EL,0xBDA3L};
                    for (g_282.f4 = (-8); (g_282.f4 > 8); g_282.f4++)
                    {
                        unsigned short l_485 = 0x64CBL;
                        l_484 = (safe_add_func_uint32_t_u_u((g_8 < (0xA2L < (safe_add_func_int8_t_s_s(0L, g_78.f5)))), 1UL));
                        l_485 = g_114.f2;
                        g_276.f0 = l_445.f6;
                        g_114 = g_114;
                    }
                    if ((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((l_420 == l_484), ((0x84L >= 0x40L) > (safe_lshift_func_uint8_t_u_s(l_421, (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u(0x729CE98FL, (safe_mod_func_int32_t_s_s(((-6L) & (!(((l_379 < g_8) <= 0xBB5CFA8EB0764945LL) && g_282.f6))), g_78.f5)))) ^ g_78.f3) <= 0x0EF6B402889D8E4CLL), g_78.f6))))))), l_498)))
                    {
                        l_500 = l_499;
                        l_501 = l_500;
                    }
                    else
                    {
                        unsigned l_512 = 0x4B5CAA13L;
                        g_276.f0 = 1L;
                        l_326.f1 = func_53((safe_add_func_int8_t_s_s((g_282.f2 | (safe_add_func_uint8_t_u_u(((func_30((((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_512 & g_78.f1), ((((safe_rshift_func_uint16_t_u_u(l_500.f2, l_62.f2)) & g_78.f5) <= l_366.f2) | l_445.f0))) || (safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_78.f1, g_417)), 0xADA5C3A70C3FC633LL)), l_521))), 6)), g_91.f1)) | l_430) >= l_326.f2), g_114, l_522) != (-1L)) && g_91.f3), l_476.f3))), g_282.f2)));
                    }
                }
                l_523 = g_91;
            }
            l_500.f3 = l_476.f1;
            l_326.f1 = ((g_114.f1 <= ((g_91.f3 || (+(safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((0xC0L < (g_282.f0 > func_47(((0UL && l_500.f3) >= g_282.f6), l_438, l_368, g_114.f0))) <= g_114.f0), 7)), g_78.f0)))) == l_528)) == 0x94L);
        }
        if (g_282.f2)
            break;
    }
    if (func_17((l_371 <= 18446744073709551606UL), (safe_rshift_func_uint8_t_u_u((!(safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((func_25(l_500.f1, func_42(((((safe_lshift_func_int16_t_s_s((func_53(l_500.f4) & g_282.f7), 5)) < (((safe_lshift_func_int8_t_s_s((!(safe_add_func_int64_t_s_s(0L, 0UL))), 7)) <= ((0L ^ g_276.f2) || g_282.f4)) || g_114.f3)) != 65531UL) != g_91.f2), g_78.f1, g_367, l_326.f0), l_500.f3, g_114) && 0x7CL), 4)), g_276.f1))), g_437)), g_282.f4, g_282.f4, l_500))
    {
        unsigned long long l_541 = 3UL;
        struct S1 l_548 = {-0,4,31,14};
        struct S0 l_551 = {63,1L,0x8962453D6AC72CEALL,396,0x7636L,0x7A1AL,0x6E3F14D9L,0x3640L};
        g_276.f1 = ((+l_541) && (safe_sub_func_int16_t_s_s((((0x8D7D62A608220E7CLL ^ (safe_lshift_func_uint16_t_u_s(((g_276.f2 <= ((safe_rshift_func_uint8_t_u_u(0xC1L, 4)) && ((func_36(func_2(g_199, g_91.f1, l_541, g_78.f3), g_282.f6, l_541, l_548, g_417) >= 0x08L) | l_549))) <= 0x33L), g_282.f0))) || g_550) & g_437), (-1L))));
        l_551 = g_78;
        l_326.f2 = l_551.f6;
    }
    else
    {
        long long l_554 = (-1L);
        g_114.f2 = (((g_437 && (safe_rshift_func_int16_t_s_s((((0xC4L < (l_554 < l_500.f6)) == 247UL) == l_500.f3), 4))) <= ((safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(((g_282.f6 != ((+(l_371 >= (safe_sub_func_int32_t_s_s(l_326.f2, l_500.f7)))) == g_437)) ^ (-1L)), g_114.f2)) == g_437), l_554)) == 65527UL)) > 0x7AL);
    }
    return g_114;
}







static struct S1 func_2(long long p_3, long long p_4, unsigned char p_5, unsigned p_6)
{
    unsigned char l_298 = 255UL;
    int l_303 = 0L;
    struct S0 l_306 = {56,0x09D0L,-1L,121,65535UL,3L,0xE95D116EL,0L};
    struct S1 l_309 = {-1,-3,17,15};
    l_303 = (safe_sub_func_uint64_t_u_u(((((safe_sub_func_uint8_t_u_u(p_6, g_91.f2)) | (!((safe_sub_func_int8_t_s_s(((g_8 && p_4) && (((l_298 <= (p_5 != ((safe_add_func_uint8_t_u_u(l_298, (safe_sub_func_uint8_t_u_u(p_3, g_78.f5)))) >= p_6))) > 1L) > g_114.f1)), p_6)) <= g_78.f5))) > g_78.f2) <= l_298), g_78.f3));
    l_303 = (safe_lshift_func_int8_t_s_u((g_78.f3 >= g_8), 6));
    l_306 = g_78;
    l_309 = func_42(p_4, g_199, (l_306.f3 >= (~(g_282.f2 || ((func_25(p_5, func_42((safe_mod_func_int16_t_s_s(g_78.f0, p_5)), p_6, (((+p_3) >= g_8) && l_298), p_4), g_282.f1, l_309) <= 1UL) < 1UL)))), g_114.f3);
    return l_309;
}







static unsigned func_9(short p_10, int p_11, int p_12, short p_13, unsigned p_14)
{
    unsigned char l_287 = 7UL;
    int l_288 = 0L;
    struct S0 l_291 = {70,-2L,-5L,-211,0xCE64L,2L,0x4EE3F9E5L,0xAA0FL};
    l_287 = (+4L);
    l_288 = g_276.f3;
    for (p_13 = 14; (p_13 < (-14)); p_13--)
    {
        l_291 = g_282;
        if (p_10)
            continue;
    }
    return l_291.f1;
}







static long long func_17(unsigned short p_18, int p_19, unsigned long long p_20, unsigned long long p_21, struct S0 p_22)
{
    unsigned short l_283 = 0UL;
    int l_284 = 1L;
    g_78 = p_22;
    l_284 = (p_22.f0 & l_283);
    g_91.f0 = func_47(g_276.f1, (safe_rshift_func_int16_t_s_u(p_22.f4, (!(+g_78.f3)))), g_114, l_284);
    return l_284;
}







static unsigned char func_25(unsigned p_26, struct S1 p_27, int p_28, struct S1 p_29)
{
    p_29.f2 = 0x72CEC631L;
    return g_276.f0;
}







static unsigned func_30(int p_31, struct S1 p_32, unsigned p_33)
{
    struct S1 l_277 = {-0,1,-41,30};
    unsigned char l_280 = 0x84L;
    p_32 = p_32;
    p_32.f0 = ((func_36(l_277, ((p_32.f1 > ((!(l_277.f2 == (p_33 || (safe_lshift_func_int8_t_s_s(p_32.f3, (0x69411491L ^ ((((-9L) && 0x0A70L) ^ g_78.f7) > 0x4FA6L))))))) || l_277.f2)) && l_280), p_33, p_32, l_277.f2) == p_33) <= g_78.f5);
    return g_199;
}







static long long func_36(struct S1 p_37, int p_38, short p_39, struct S1 p_40, int p_41)
{
    char l_117 = (-5L);
    int l_132 = 6L;
    int l_187 = 0xB46BF440L;
    unsigned l_210 = 0x68258067L;
    char l_261 = 0x90L;
    for (g_78.f7 = 0; (g_78.f7 > 12); g_78.f7 = safe_add_func_uint64_t_u_u(g_78.f7, 8))
    {
        l_117 = g_78.f7;
        return p_40.f3;
    }
    for (g_78.f4 = 0; (g_78.f4 == 52); ++g_78.f4)
    {
        short l_122 = 7L;
        int l_123 = 1L;
        char l_157 = (-1L);
        char l_163 = 0xA2L;
        struct S1 l_240 = {1,-1,39,6};
        if ((safe_mod_func_int16_t_s_s(p_37.f1, func_47(l_117, (l_122 ^ g_8), p_37, p_37.f1))))
        {
            int l_124 = 0x2946C84EL;
            if (p_37.f0)
                break;
            l_123 = 0x05509CA3L;
            p_40.f2 = l_124;
        }
        else
        {
            struct S1 l_162 = {-0,-7,34,13};
            for (p_38 = 23; (p_38 > 23); ++p_38)
            {
                int l_127 = 0x0B6939ADL;
                unsigned l_200 = 0x1B1BC71CL;
                unsigned l_209 = 4294967290UL;
                if (l_127)
                {
                    char l_149 = 1L;
                    l_132 = (((0xE8534C0AFD8232EDLL ^ g_78.f5) > (safe_add_func_uint32_t_u_u(g_114.f2, g_78.f2))) >= (((func_53((18446744073709551608UL ^ (safe_sub_func_uint8_t_u_u((l_132 & (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u((!((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_127 <= func_47(g_78.f6, g_91.f0, g_114, g_78.f4)), l_122)) > l_127), p_37.f2)), l_123)) != 0UL)), g_91.f2)) && (-6L)) == g_8), l_149)), g_91.f1)) & 1L) & 1UL) != g_78.f4), 0x9058L)), 0))), p_38)))) ^ p_40.f2) < 0xF6E7EF8C87ACCF6ELL) == g_78.f1));
                    if (((p_40.f2 >= p_37.f2) | g_91.f3))
                    {
                        unsigned char l_152 = 0xC6L;
                        l_152 = (safe_mod_func_uint64_t_u_u(4UL, 18446744073709551613UL));
                    }
                    else
                    {
                        l_123 = (((safe_rshift_func_int8_t_s_u((~(((safe_rshift_func_uint16_t_u_s((0x61C1L == ((p_41 >= l_157) ^ (+(func_53(g_91.f0) != (safe_lshift_func_int16_t_s_s(((g_91.f1 && (l_149 & (safe_add_func_uint16_t_u_u(func_47(l_122, p_37.f1, l_162, l_163), 0x0A7EL)))) != l_162.f0), 1)))))), 1)) > g_114.f0) || g_78.f5)), 7)) | p_37.f2) == 0x55L);
                        g_91.f0 = (p_39 && l_117);
                    }
                    p_40.f2 = p_41;
                }
                else
                {
                    int l_166 = 2L;
                    l_162.f2 = (g_114.f0 >= (func_53(g_114.f0) <= (safe_sub_func_int32_t_s_s((l_166 || p_37.f2), (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_127 < g_78.f7) == ((!((safe_add_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((p_38 >= (safe_rshift_func_uint8_t_u_u(g_78.f5, 0))), (-6L))) < l_166), 0UL)) || p_40.f2)) & l_127)), g_114.f1)) | p_37.f0), 0UL))))));
                    if (g_114.f3)
                        break;
                    for (p_41 = 11; (p_41 != (-27)); p_41--)
                    {
                        unsigned l_198 = 18446744073709551613UL;
                        if (g_114.f3)
                            break;
                        p_37.f2 = g_78.f7;
                        g_91.f1 = ((((safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u((((l_187 && p_39) <= (safe_lshift_func_uint8_t_u_s(0x1FL, 1))) & ((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(0xC9L, g_114.f2)) != (((0x1AL && func_53(func_53(l_157))) ^ l_123) || l_198)) | l_166), 6)), 0xE6L)), g_114.f0)) || p_37.f0)), l_157)) == p_37.f3) == p_40.f1) <= l_127), 4)), l_127)) != 0x35DFL), g_199)) < l_166) == p_37.f1) != p_40.f3);
                    }
                    return l_200;
                }
                g_114.f1 = func_47(func_47(func_47(p_40.f1, (safe_rshift_func_int16_t_s_u(l_162.f0, ((((safe_add_func_uint64_t_u_u(l_200, (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(0x17L, l_209)) <= l_123), 0)))) & 1UL) > l_162.f3) & g_78.f0))), p_40, p_40.f3), g_114.f1, g_91, g_114.f1), l_210, p_37, l_117);
            }
            if (p_40.f2)
                break;
            for (p_38 = (-17); (p_38 <= 11); ++p_38)
            {
                unsigned char l_219 = 253UL;
                g_91.f1 = (~l_210);
                if (p_40.f3)
                    continue;
                if (func_53(func_47((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((1L >= g_114.f0), 1)), (safe_mod_func_int64_t_s_s((p_37.f1 < l_219), l_123)))), g_78.f6, g_91, ((-1L) >= g_8))))
                {
                    int l_226 = 1L;
                    p_40.f1 = ((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((((safe_mul_func_int8_t_s_s(func_53(l_122), ((0x9BL ^ 0x78L) <= g_114.f1))) | (0x9F92A775L ^ (l_226 == (safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((!(safe_add_func_int64_t_s_s((-8L), ((safe_sub_func_uint32_t_u_u(func_47(l_187, p_37.f2, g_114, l_219), 0x1445D630L)) & 0UL)))) <= 0x4BE17463L), 0x03624ADBFCEA1EC8LL)), 3))))) && g_91.f3), l_210)), 4L)) & 4L);
                    if (g_78.f7)
                        continue;
                }
                else
                {
                    return l_157;
                }
                l_162.f1 = (safe_rshift_func_uint8_t_u_u((0xD18F8EADL && p_38), g_78.f5));
            }
            g_91 = g_114;
        }
        p_37.f0 = (p_39 <= (((safe_unary_minus_func_int32_t_s((0x4AL > ((((func_47(p_40.f1, p_38, p_37, g_78.f6) >= ((l_123 != (safe_rshift_func_int16_t_s_u((func_47(l_187, p_37.f1, l_240, l_240.f3) >= 0xF9L), g_199))) >= g_199)) >= p_40.f0) != p_37.f0) == g_78.f7)))) >= p_40.f3) == 1L));
        if ((safe_rshift_func_uint16_t_u_s(g_78.f2, 0)))
        {
            struct S1 l_260 = {1,-5,14,12};
            for (l_123 = 0; (l_123 < (-6)); l_123 = safe_sub_func_int64_t_s_s(l_123, 8))
            {
                char l_259 = 0x57L;
                struct S1 l_262 = {1,0,-3,14};
                l_261 = (((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(func_47(((safe_sub_func_uint64_t_u_u(func_47(p_41, (safe_sub_func_int64_t_s_s(g_114.f2, func_47((safe_add_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((p_37.f1 ^ (l_240.f1 || p_41)), (65535UL != (safe_add_func_uint32_t_u_u(l_259, (((g_78.f7 == l_210) <= 0x0AL) == 18446744073709551615UL)))))) == 0x7611L) > g_91.f3), 0x32DA90C5L)), p_40.f1, g_114, p_40.f3))), l_260, l_187), l_259)) == p_37.f3), p_37.f3, l_240, l_157), p_40.f0)) > p_37.f0), l_260.f2)) >= g_91.f3) < l_132);
                l_260 = l_240;
                l_240 = l_262;
            }
        }
        else
        {
            struct S1 l_263 = {-1,-3,-30,10};
            l_263 = g_91;
            if (((p_38 < l_263.f3) < 8L))
            {
                char l_264 = 0x49L;
                l_264 = (l_210 || g_199);
                g_91.f2 = (safe_sub_func_int8_t_s_s((-1L), (p_40.f3 ^ (2L || (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((p_37.f1 != g_91.f2) | (l_187 ^ func_47(g_199, l_123, g_91, l_210))), 2)), g_78.f1)) & l_264), p_37.f1))))));
            }
            else
            {
                return g_78.f3;
            }
            for (l_123 = 9; (l_123 < 28); l_123++)
            {
                struct S1 l_275 = {-0,6,22,10};
                l_275 = l_263;
                if (g_8)
                    continue;
            }
        }
    }
    return p_39;
}







static struct S1 func_42(char p_43, unsigned long long p_44, int p_45, int p_46)
{
    struct S0 l_77 = {20,0x5AE8L,0xE6D542D3F7CC8272LL,-418,0xDB03L,1L,1UL,-6L};
    struct S1 l_111 = {-0,-3,-37,15};
    struct S1 l_113 = {1,-2,-3,22};
    g_78 = l_77;
    for (l_77.f7 = 0; (l_77.f7 >= (-26)); l_77.f7 = safe_sub_func_int16_t_s_s(l_77.f7, 1))
    {
        int l_81 = 0x76030DEEL;
        struct S1 l_110 = {1,7,18,19};
        if (func_53(((g_78.f1 | 0x76CAF4455642E063LL) >= (-2L))))
        {
            if (g_78.f5)
                break;
            l_81 = g_78.f7;
        }
        else
        {
            int l_96 = 0x60A5FB02L;
            struct S1 l_112 = {1,-3,37,19};
            for (g_78.f1 = 25; (g_78.f1 >= (-17)); g_78.f1 = safe_sub_func_uint8_t_u_u(g_78.f1, 4))
            {
                unsigned l_84 = 0UL;
                g_78.f3 = (p_44 <= func_53(l_84));
            }
            g_91.f2 = (((-5L) ^ ((safe_sub_func_uint64_t_u_u((l_81 | (safe_lshift_func_int8_t_s_s(0xFCL, 2))), func_47(func_53(l_81), (0xC626C4802A3EDB7DLL <= (safe_lshift_func_int16_t_s_u(0xB769L, l_81))), g_91, g_91.f1))) || g_78.f0)) == p_45);
            l_77.f3 = func_47((safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(p_45, (func_53(l_96) >= (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((func_47(g_78.f4, (((~(func_47(l_81, ((p_46 || (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int8_t_s(((safe_mod_func_uint32_t_u_u(func_53((((g_91.f0 || l_77.f1) <= func_47((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((func_53((g_91.f0 && g_78.f2)) != 0xA122FC4CL), 255UL)), 10)), p_46, g_91, g_8)) | p_45)), l_81)) > g_78.f5))), p_44))) >= g_78.f3), l_110, g_78.f3) >= g_91.f1)) < g_78.f2) != g_91.f1), l_111, l_111.f2) > 0x61DEDA819422B6A9LL), l_77.f4)), 6)) && l_111.f0) ^ 2UL)))), 0xF20BB848L)), l_77.f6, l_112, p_43);
        }
    }
    return l_113;
}







static long long func_47(char p_48, unsigned p_49, struct S1 p_50, int p_51)
{
    int l_63 = 1L;
    unsigned l_70 = 18446744073709551615UL;
    unsigned short l_73 = 0x54D8L;
    p_51 = g_8;
    l_73 = (+(l_63 && (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((p_48 || 0x7D66A4358B9E0795LL) && l_70), (safe_add_func_int8_t_s_s((-1L), g_8)))), 12)), 4))));
    for (l_73 = (-15); (l_73 <= 45); l_73 = safe_add_func_uint32_t_u_u(l_73, 7))
    {
        struct S1 l_76 = {-0,-4,27,27};
        l_76 = p_50;
    }
    l_63 = g_8;
    return g_8;
}







static unsigned long long func_53(unsigned p_54)
{
    struct S0 l_58 = {81,4L,0x70D5DD215CD4DCD7LL,312,0UL,0xDAF8L,0x98C68336L,0x6A8EL};
    for (p_54 = 10; (p_54 <= 28); ++p_54)
    {
        unsigned l_59 = 0x047C1471L;
        l_58 = l_58;
        if (g_8)
            break;
        l_59 = g_8;
    }
    l_58.f3 = (safe_rshift_func_int16_t_s_u(g_8, 15));
    return p_54;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_78.f5, "g_78.f5", print_hash_value);
    transparent_crc(g_78.f6, "g_78.f6", print_hash_value);
    transparent_crc(g_78.f7, "g_78.f7", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_276.f0, "g_276.f0", print_hash_value);
    transparent_crc(g_276.f1, "g_276.f1", print_hash_value);
    transparent_crc(g_276.f2, "g_276.f2", print_hash_value);
    transparent_crc(g_276.f3, "g_276.f3", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_282.f3, "g_282.f3", print_hash_value);
    transparent_crc(g_282.f4, "g_282.f4", print_hash_value);
    transparent_crc(g_282.f5, "g_282.f5", print_hash_value);
    transparent_crc(g_282.f6, "g_282.f6", print_hash_value);
    transparent_crc(g_282.f7, "g_282.f7", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
