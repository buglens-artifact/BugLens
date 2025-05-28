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
   short f0;
   short f1;
   unsigned f2;
   int f3;
   char f4;
   unsigned f5;
   unsigned char f6;
};


static char g_9 = 0x75L;
static unsigned short g_94 = 0x96A1L;
static struct S0 g_111 = {0x3232L,-2L,0x59577EE7L,1L,-7L,0UL,0xE4L};
static unsigned char g_113 = 0x91L;
static char g_127 = 0L;
static unsigned g_170 = 0x2AC7DB9AL;
static short g_194 = 0x16E3L;
static char g_226 = 0x47L;
static unsigned short g_283 = 0UL;
static short g_311 = 1L;
static unsigned g_314 = 0x9F67F97CL;
static unsigned g_323 = 0x813B3EB5L;
static short g_354 = 0xBCCCL;
static unsigned short g_358 = 0x8A46L;
static int g_363 = 0x61BE2EFFL;
static char g_400 = 0x97L;
static short g_401 = 0x332FL;
static unsigned char g_430 = 250UL;
static unsigned short g_433 = 0xB6D1L;
static unsigned g_447 = 0UL;
static unsigned g_477 = 0UL;
static unsigned g_484 = 0xA54368FAL;
static unsigned g_510 = 0xBBA5B328L;
static int g_522 = 0x837F951FL;
static unsigned short g_540 = 1UL;
static int g_578 = 2L;
static struct S0 g_741 = {6L,1L,0x99CCC1CFL,0L,4L,4294967287UL,1UL};
static struct S0 g_1049 = {-1L,0x5C33L,0x143F0DFCL,0x7C8A7DEBL,0xE3L,0UL,255UL};



static struct S0 func_1(void);
static int func_2(int p_3, int p_4, char p_5, unsigned short p_6);
static int func_25(unsigned p_26, unsigned p_27);
static int func_31(unsigned p_32, int p_33, unsigned p_34, struct S0 p_35);
static struct S0 func_41(unsigned char p_42);
static char func_46(char p_47, int p_48);
static int func_51(short p_52, char p_53);
static unsigned short func_60(unsigned p_61, int p_62, char p_63, unsigned p_64, unsigned p_65);
static char func_74(short p_75, short p_76, unsigned p_77, unsigned p_78);
static short func_79(unsigned p_80);
static struct S0 func_1(void)
{
    int l_10 = 6L;
    unsigned short l_23 = 1UL;
    int l_24 = 1L;
    unsigned l_931 = 0x7FECEB4DL;
    char l_932 = 0x35L;
    int l_978 = 0L;
    short l_1010 = 0x0FF0L;
    char l_1026 = (-10L);
    struct S0 l_1035 = {0L,0xBF3AL,0x69DF6904L,-2L,0x58L,0x2ABC0D5DL,0xDFL};
    if (func_2((safe_mul_func_int16_t_s_s(g_9, l_10)), ((+g_9) > (((g_9 <= (safe_add_func_int16_t_s_s(7L, 0xB0B4L))) == (safe_lshift_func_uint8_t_u_s((l_10 > g_9), 5))) >= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((4294967295UL ^ l_10) & l_23) >= l_24), l_10)) <= g_9), g_9)), 4)), g_9)))), g_9, g_9))
    {
        unsigned l_900 = 0xB1AF5174L;
        unsigned char l_901 = 0x61L;
        unsigned l_904 = 0UL;
        int l_933 = 0xCF26CE96L;
        struct S0 l_1036 = {0x254AL,1L,0UL,-1L,0x87L,0xD2C938FAL,9UL};
lbl_1034:
        if ((g_311 & (safe_mul_func_uint8_t_u_u(func_60((((safe_lshift_func_uint16_t_u_u(g_741.f4, 13)) | g_540) | l_900), l_24, l_901, (g_127 & (((safe_mul_func_int16_t_s_s((((l_900 || func_79(l_23)) < g_401) | l_24), g_111.f6)) == l_10) >= l_23)), g_354), 0UL))))
        {
            unsigned short l_905 = 0xED6DL;
            unsigned short l_918 = 0UL;
            int l_925 = 0L;
            int l_930 = 0x6ED77CC1L;
            if (g_127)
            {
                g_578 = 0xDE0624C9L;
                if (g_111.f4)
                    goto lbl_910;
            }
            else
            {
                g_578 = (((g_540 ^ (((g_323 & 0xB699F790L) != (0x1FL >= g_283)) || ((g_314 == l_904) >= (l_23 != (l_23 || g_741.f3))))) >= 0xBD24L) || 65535UL);
                l_905 = g_363;
lbl_910:
                g_578 = (((l_905 > l_905) || l_10) == ((safe_lshift_func_uint16_t_u_u(l_905, 13)) || (((0xB3L && 0x51L) & func_31(g_111.f1, g_111.f1, (safe_rshift_func_int8_t_s_u(g_484, 1)), g_111)) | g_447)));
                l_933 = ((safe_sub_func_int16_t_s_s((!func_60(((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((func_2((l_918 > (func_46(((func_79((safe_add_func_uint8_t_u_u(((!(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_113 > l_905), 11)), func_79((l_925 && (safe_rshift_func_uint8_t_u_s(0x18L, 1)))))) ^ (safe_mod_func_int16_t_s_s(((g_323 | g_358) > l_930), l_23))) ^ g_433)) | 65533UL), g_401))) <= g_477) ^ (-1L)), g_323) & l_925)), l_900, g_433, l_23) | l_904), g_354)) >= g_363), l_931)))) != g_113), g_354, l_901, l_932, g_354)), g_363)) | g_363);
            }
        }
        else
        {
            int l_942 = 1L;
            struct S0 l_1031 = {0xA45BL,0xFB95L,18446744073709551615UL,-4L,0L,0UL,1UL};
            if (g_540)
            {
                unsigned char l_949 = 5UL;
                int l_968 = (-1L);
                if ((0xB6243A36L && (safe_add_func_int32_t_s_s(0x5BB8D546L, (safe_lshift_func_uint16_t_u_s((g_741.f2 != g_111.f5), g_111.f2))))))
                {
                    g_578 = (1UL != g_510);
lbl_952:
                    for (g_433 = 0; (g_433 < 46); g_433++)
                    {
                        if (l_10)
                            break;
                    }
                    g_741 = func_41((((g_194 && (func_74((((safe_mul_func_int32_t_s_s(l_942, ((g_111.f5 ^ (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(g_401, (safe_lshift_func_int16_t_s_s(0xDA93L, 13)))) || (func_51(g_111.f3, (((g_111.f4 || 1L) >= g_741.f5) | g_540)) >= 0x99L)), g_484))) < 0x899DL))) != l_942) != 0x58L), l_949, g_741.f5, g_578) | 65529UL)) == 0x45C5F8FAL) || l_901));
                }
                else
                {
                    struct S0 l_957 = {0x7666L,-1L,0UL,5L,0L,0xF6C3D2C6L,0x0EL};
                    int l_977 = 1L;
                    if ((safe_add_func_uint8_t_u_u(l_949, (1L || (g_111.f1 ^ l_23)))))
                    {
                        unsigned char l_955 = 255UL;
                        if (g_401)
                            goto lbl_952;
                        l_955 = (~(safe_rshift_func_int8_t_s_s(g_430, 0)));
                    }
                    else
                    {
                        int l_956 = 0xE5C27895L;
                        l_957 = func_41(l_956);
                        g_578 = 0x82FFD5D9L;
                        l_968 = (safe_mod_func_int8_t_s_s((!(safe_mod_func_int16_t_s_s((((~g_111.f1) & ((-5L) & (safe_sub_func_uint32_t_u_u(g_741.f2, l_901)))) & (0xF7L < (safe_mul_func_uint8_t_u_u((0x05DDL && ((safe_mod_func_int8_t_s_s(0xDFL, l_956)) == 0xBD0AL)), 0x93L)))), g_111.f3))), g_9));
                        l_977 = (g_323 == (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u(((l_942 || ((safe_mul_func_int16_t_s_s(3L, l_968)) && l_957.f2)) & func_74(((l_956 <= (l_904 > func_60(l_956, l_931, g_484, l_957.f5, g_433))) ^ 3L), g_741.f3, l_942, l_24)), 0x2B76B380L)) == 1UL) != 252UL) <= g_741.f6), g_447)), g_484)));
                    }
                    g_578 = 1L;
                    l_978 = l_10;
                    for (g_741.f2 = (-4); (g_741.f2 <= 12); ++g_741.f2)
                    {
                        return g_741;
                    }
                }
            }
            else
            {
                unsigned char l_989 = 0xD2L;
                struct S0 l_992 = {-1L,0x2D0CL,3UL,6L,2L,0x72F30F51L,1UL};
                l_978 = func_79((l_932 < ((safe_sub_func_int32_t_s_s(0x24A2B372L, g_430)) != ((safe_mod_func_int8_t_s_s(((250UL == (((((-3L) && g_113) >= func_60(g_9, (safe_mul_func_int8_t_s_s(func_46(((g_447 && ((safe_mul_func_uint16_t_u_u(l_989, g_741.f4)) ^ 253UL)) > 0x39L), g_741.f0), g_578)), l_989, l_24, g_741.f1)) != l_933) && g_111.f6)) && l_989), g_363)) | g_400))));
                g_578 = (((safe_mul_func_int8_t_s_s(l_901, g_741.f4)) >= ((g_226 | g_430) || ((l_942 || func_31(g_741.f6, l_989, l_989, l_992)) | g_363))) || l_942);
            }
            if (g_477)
                goto lbl_993;
lbl_993:
            g_741 = g_111;
            if ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_10 < (0x27ACL > (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_23, 0)), (g_484 >= g_194))))), 0UL)), func_51(func_51(g_226, l_942), l_933))))
            {
                l_942 = (safe_sub_func_int16_t_s_s((((0UL <= 0xD7D477FFL) > (((safe_add_func_uint32_t_u_u(8UL, ((l_23 > ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((l_901 > 0x0EDA9A4AL) >= func_74(g_94, l_933, l_24, g_741.f4)), 13)) | 0UL), g_111.f1)) | 0x3EL)) >= l_1010))) != 0x7732C602L) == g_430)) < 0x5D00E3F6L), 0xBCF8L));
                g_741 = func_41((l_10 < (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((g_741.f5 || g_113), l_942)), l_933))));
            }
            else
            {
                unsigned l_1025 = 0xAFE18497L;
                l_978 = ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((!((-2L) | g_111.f0)) < (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(248UL, 5)), g_741.f3)), l_1025))), l_1026)), func_79(((safe_mod_func_int32_t_s_s((0x29L ^ l_931), g_741.f3)) && l_942)))) | g_741.f6);
                for (g_314 = 3; (g_314 > 13); ++g_314)
                {
                    l_1031 = g_111;
                }
                g_741 = g_741;
            }
        }
        if ((safe_rshift_func_int16_t_s_u(l_1010, 14)))
        {
            if (g_741.f0)
                goto lbl_1034;
            l_1036 = l_1035;
        }
        else
        {
            struct S0 l_1037 = {0L,0xC377L,0x750EF64CL,9L,0x57L,0UL,0x25L};
            int l_1038 = 0L;
            l_1037 = g_741;
            l_1038 = l_1035.f5;
        }
        l_933 = l_1036.f6;
    }
    else
    {
        short l_1065 = (-1L);
        short l_1068 = 0x9B9AL;
        int l_1069 = 0L;
        for (l_1010 = 0; (l_1010 <= 7); l_1010 = safe_add_func_int32_t_s_s(l_1010, 6))
        {
            int l_1045 = 1L;
            g_741 = func_41((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((0L > g_522), 4)), (l_1045 || func_31(g_522, l_978, l_1035.f3, g_741)))));
            for (g_433 = (-7); (g_433 <= 47); g_433 = safe_add_func_uint8_t_u_u(g_433, 2))
            {
                g_578 = (safe_unary_minus_func_uint32_t_u(6UL));
                l_1035 = g_1049;
            }
        }
        g_578 = g_741.f6;
        for (g_111.f4 = 0; (g_111.f4 > (-13)); --g_111.f4)
        {
            g_578 = l_1035.f1;
        }
        l_1069 = ((((l_931 > func_51(((safe_add_func_int32_t_s_s((l_1035.f4 ^ l_10), g_111.f6)) ^ (func_74(((+(safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((~g_111.f1), ((~(safe_add_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(g_113)), (g_94 == (safe_add_func_uint8_t_u_u((l_1065 == ((safe_sub_func_uint16_t_u_u(l_1035.f1, 0x7AF0L)) != l_1065)), l_1068)))))) || g_111.f2))) | l_1065), 15)), 0xE159L))) || 0x75D6L), g_741.f0, l_23, g_433) == 0UL)), g_111.f6)) != 0xDAL) <= g_522) < g_111.f4);
    }
    return g_111;
}







static int func_2(int p_3, int p_4, char p_5, unsigned short p_6)
{
    int l_28 = 0x7AE2718BL;
    int l_888 = 1L;
    unsigned l_893 = 0xA2C57DBDL;
    l_888 = func_25(l_28, g_9);
    l_888 = ((func_46(g_94, p_6) <= ((safe_mod_func_int8_t_s_s((0x4C12L >= ((p_5 > (((safe_sub_func_int8_t_s_s((-6L), ((p_5 != l_893) == (g_741.f2 >= 0UL)))) ^ l_28) >= 0xCBA1L)) && g_354)), 7UL)) <= l_888)) || 0x4AL);
    return l_893;
}







static int func_25(unsigned p_26, unsigned p_27)
{
    unsigned char l_37 = 0x70L;
    unsigned l_428 = 0xAF41BFAFL;
    unsigned short l_463 = 3UL;
    char l_476 = 0L;
    struct S0 l_557 = {0x81A1L,0xD77CL,9UL,0xA879B872L,0xA0L,4294967286UL,0xDAL};
    int l_579 = 0x208C586CL;
    char l_627 = 3L;
    unsigned char l_640 = 2UL;
    unsigned l_673 = 0xCF2F6486L;
    unsigned char l_756 = 0xBAL;
    short l_875 = 1L;
    int l_886 = 1L;
    int l_887 = 0x0D5EBDCEL;
lbl_639:
    for (p_26 = 24; (p_26 == 49); ++p_26)
    {
        short l_38 = 2L;
        struct S0 l_39 = {0L,0xDC63L,0UL,0xFD17BA7DL,0x82L,4294967290UL,254UL};
        int l_411 = 0L;
        struct S0 l_546 = {0L,0x06FBL,0UL,0x2155AAE2L,0xE9L,0x20118409L,0UL};
        struct S0 l_620 = {0x435AL,0x46DAL,0x0E38D8FCL,0x10B0F55AL,0x1CL,0x7D5A098BL,2UL};
        l_411 = func_31(((5L == ((0x18L < (safe_unary_minus_func_uint32_t_u(l_37))) != l_38)) != (g_9 ^ (~p_26))), l_37, ((0x96F7L >= (l_37 != g_9)) & l_37), l_39);
        for (g_323 = 0; (g_323 == 60); g_323 = safe_add_func_uint16_t_u_u(g_323, 5))
        {
            unsigned short l_416 = 65528UL;
            struct S0 l_435 = {-2L,3L,0x70371D9BL,6L,9L,1UL,0x35L};
            if (func_79(l_411))
            {
                int l_423 = (-1L);
                unsigned l_462 = 18446744073709551611UL;
                unsigned l_505 = 0x5B1A4478L;
                if (((~(((safe_sub_func_int16_t_s_s(l_416, (safe_mul_func_uint8_t_u_u((g_111.f3 || (safe_add_func_int32_t_s_s(0x57729BDCL, g_111.f5))), g_363)))) == func_51((safe_mul_func_int8_t_s_s(l_423, (safe_mul_func_uint8_t_u_u(0xF4L, l_416)))), (safe_lshift_func_int8_t_s_s(((((l_37 && l_423) < l_428) > l_416) && g_113), l_39.f1)))) & g_113)) == 0x98FD706EL))
                {
                    char l_446 = 1L;
                    g_111 = g_111;
                    if (((g_111.f3 < ((l_37 == (l_423 && p_26)) & 1UL)) >= p_26))
                    {
                        unsigned char l_429 = 0UL;
                        g_430 = (!(!l_429));
                        g_433 = (safe_add_func_int32_t_s_s(g_170, g_111.f4));
                    }
                    else
                    {
                        unsigned char l_434 = 0x4AL;
                        l_434 = 1L;
                        l_435 = l_39;
                        l_411 = (safe_mod_func_uint16_t_u_u(l_423, (p_27 ^ p_26)));
                        l_411 = (func_74(g_127, (~g_194), g_111.f1, g_323) == func_60((((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s((func_74(g_111.f1, (safe_lshift_func_int16_t_s_s(l_423, (safe_lshift_func_uint8_t_u_s(p_26, 0)))), l_428, g_323) < p_26), 253UL)), g_354)) != g_170) | l_39.f5), p_26, g_127, l_446, p_27));
                    }
                }
                else
                {
                    unsigned char l_448 = 0xB0L;
                    int l_479 = 8L;
                    g_447 = p_26;
                    if (l_448)
                        continue;
                    if ((p_27 < (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_194, (safe_sub_func_int8_t_s_s(p_26, ((func_51((g_111.f0 > (((!(safe_rshift_func_uint8_t_u_u(l_423, g_363))) != (p_27 <= g_283)) <= (((((safe_unary_minus_func_int32_t_s(((safe_sub_func_int8_t_s_s(l_462, l_463)) > l_423))) != 0L) & 1L) | l_416) == g_111.f0))), g_358) == 0x20E4L) >= g_111.f0))))), l_37))))
                    {
                        g_477 = ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(func_79(p_27), (safe_add_func_int8_t_s_s(g_111.f4, (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((0L < p_27) >= (!l_476)), (p_26 || (p_26 | 4294967294UL)))), g_358)))))), g_170)), p_26)) < (-1L));
                    }
                    else
                    {
                        unsigned l_478 = 0x76119070L;
                        l_479 = l_478;
                        l_423 = p_27;
                    }
                }
                for (l_462 = 0; (l_462 > 19); l_462 = safe_add_func_int16_t_s_s(l_462, 4))
                {
                    unsigned l_509 = 18446744073709551612UL;
                    int l_534 = 0x0365C96CL;
                    if ((safe_lshift_func_uint8_t_u_s((g_484 < (0xF2559C4EL ^ g_447)), 0)))
                    {
                        char l_508 = 0x4AL;
                        unsigned char l_513 = 0xB0L;
                        g_510 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((+(safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((((g_354 >= (safe_add_func_uint16_t_u_u((0x4E08L == (+((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_430, (g_323 < g_430))), 6L)) != ((safe_mod_func_uint32_t_u_u(g_94, (safe_add_func_int32_t_s_s((l_505 > ((safe_mul_func_int16_t_s_s(((l_508 || l_509) & l_476), 0xEBD9L)) <= p_26)), 0xCD056996L)))) <= p_27)))), l_509))) & 0x42EBL) ^ p_27), g_447)) ^ l_462) >= g_430), 4))), (-5L))), p_27)), l_463)) && l_505);
                        g_522 = ((safe_mul_func_uint16_t_u_u(g_354, l_513)) <= (p_27 & (safe_mod_func_uint32_t_u_u(5UL, (func_60((p_26 <= ((!(safe_lshift_func_int8_t_s_s(g_111.f5, 4))) < g_226)), (func_79(func_60((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_94 != 0xDD09L), g_430)), p_26)), g_113, l_513, l_476, p_27)) | g_111.f0), g_111.f4, l_435.f4, p_26) & 0xDBL)))));
                        l_534 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(func_74(g_111.f3, func_51(p_27, l_435.f3), p_26, p_26), func_74((safe_add_func_int32_t_s_s((l_435.f6 == (safe_rshift_func_uint8_t_u_s(0x33L, l_435.f0))), 3L)), l_37, l_411, l_37))))), l_505)), 14));
                        if (l_505)
                            break;
                    }
                    else
                    {
                        unsigned l_539 = 0UL;
                        g_540 = ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_539, g_311)), g_113)) != (func_51(func_79(g_226), (l_39.f3 || p_26)) != (+(0x5EL >= l_505))));
                    }
                }
            }
            else
            {
                return l_37;
            }
            if (((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint16_t_u_u(((g_510 <= l_476) < p_26), 0xC23AL)) & func_74(l_39.f1, p_27, l_435.f2, l_39.f6)))) != p_27))
            {
                struct S0 l_558 = {0xA468L,0L,1UL,0x519DEDD1L,0x52L,0xECA2CE9AL,0x2FL};
                char l_575 = 0xBBL;
                for (g_9 = 0; (g_9 > (-28)); g_9 = safe_sub_func_int8_t_s_s(g_9, 9))
                {
                    g_111 = l_546;
                }
                if ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((0x08D2L < g_113), 0x27D1L)) > (1L != (safe_lshift_func_int8_t_s_u((l_435.f1 < l_428), (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(func_79(p_27), ((p_26 | g_170) >= g_400))), 0x99B8L)))))), 0xD166L)))
                {
                    if (l_546.f6)
                    {
                        g_111 = l_435;
                    }
                    else
                    {
                        g_111 = g_111;
                        if (p_26)
                            continue;
                        l_557 = l_39;
                        l_558 = g_111;
                    }
                }
                else
                {
                    short l_568 = (-7L);
                    l_568 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(1UL, (safe_sub_func_int16_t_s_s(0xF7CCL, (safe_sub_func_int32_t_s_s((g_283 & (safe_unary_minus_func_int32_t_s(((p_27 && 0xECL) != 0x51217C7FL)))), g_433)))))), func_79(p_27)));
                }
                l_579 = (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(4L, (0x0385E88DL < ((~(((safe_mod_func_uint32_t_u_u((l_575 != l_557.f0), (safe_rshift_func_uint16_t_u_u((+7UL), 5)))) >= (g_522 < g_363)) > p_26)) != ((((l_39.f0 & g_578) >= 0x0584L) < l_476) >= 0x3B5AL))))), 0x6332L));
            }
            else
            {
                struct S0 l_586 = {0x88E1L,0x40D2L,0UL,-1L,0x5EL,4294967295UL,0UL};
                int l_610 = 1L;
                for (g_283 = 0; (g_283 != 12); g_283++)
                {
                    char l_601 = 1L;
                    struct S0 l_619 = {0xD4CDL,-7L,0x30299EC8L,0x2CF7CFBFL,1L,6UL,0x7FL};
                    if (func_60(((safe_lshift_func_uint8_t_u_u((!((g_323 | g_433) & 0x8DL)), 0)) && (l_435.f4 == (((safe_rshift_func_uint16_t_u_s((func_79(p_27) >= (!l_557.f6)), (g_311 < p_27))) <= g_283) == 0x3A6868F3L))), g_401, p_27, g_400, l_463))
                    {
                        g_578 = ((p_27 == p_27) == 0xC9L);
                        l_586 = g_111;
                        l_579 = 9L;
                    }
                    else
                    {
                        if (l_557.f6)
                            break;
                        return p_27;
                    }
                    if (g_111.f3)
                    {
                        unsigned short l_604 = 0x1376L;
                        g_578 = (func_60(g_540, (safe_add_func_int32_t_s_s(g_358, ((safe_rshift_func_int8_t_s_s(g_113, 6)) < 0x6CL))), (safe_add_func_uint8_t_u_u(l_586.f6, (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_26, 7)), (safe_mul_func_int16_t_s_s((func_60(g_111.f3, p_26, p_26, l_586.f6, g_578) || l_586.f3), p_27)))), p_27)))), l_435.f2, l_601) == 0xCFL);
                        if (g_311)
                            continue;
                        l_435 = l_435;
                        l_604 = (safe_rshift_func_int8_t_s_u(g_578, g_433));
                    }
                    else
                    {
                        short l_609 = (-10L);
                        l_610 = ((func_60(g_111.f6, g_9, p_26, p_27, p_26) ^ (func_74(l_435.f6, ((safe_lshift_func_int16_t_s_u(l_38, (((safe_mul_func_int16_t_s_s(p_27, l_609)) > l_435.f5) && 0xD961L))) & p_26), g_311, p_26) == g_111.f0)) < p_26);
                        g_578 = (((safe_rshift_func_uint16_t_u_s(l_411, (safe_mul_func_uint16_t_u_u(p_26, (safe_mod_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s(g_111.f0, (func_79(((0L == func_74(g_226, l_609, g_111.f3, p_26)) < 9UL)) > p_27))) <= 0x070319FEL) >= g_522) > g_323), p_26)))))) <= 0xC5L) || g_127);
                    }
                    l_620 = l_619;
                    if (g_311)
                        break;
                }
                return g_111.f6;
            }
        }
        g_111 = g_111;
        g_578 = func_74((safe_mul_func_uint8_t_u_u(1UL, (g_111.f5 != l_546.f4))), l_37, l_557.f6, (safe_add_func_uint32_t_u_u((((l_39.f5 & (((l_37 && (safe_mod_func_int8_t_s_s(func_60(g_226, g_354, g_400, l_627, g_94), g_400))) > g_430) ^ 0x31L)) <= l_620.f5) > g_127), g_9)));
    }
    for (g_510 = 0; (g_510 < 40); g_510 = safe_add_func_uint16_t_u_u(g_510, 1))
    {
        unsigned l_630 = 0x8FED2D8AL;
        int l_684 = 1L;
        struct S0 l_695 = {0x3678L,0x5347L,0x502B8F4BL,0x4E849F56L,0x0EL,0x09E70318L,0xB4L};
        unsigned l_717 = 0x7D8208BCL;
        short l_740 = 0L;
        int l_773 = (-3L);
        int l_851 = 0xCA08FAB0L;
        int l_854 = 0xC2DE6B48L;
        l_579 = func_74(((((func_31((p_27 > l_630), p_26, p_26, g_111) | (-8L)) ^ (safe_rshift_func_uint8_t_u_u(0x94L, l_630))) == p_26) < g_522), p_26, p_27, p_26);
        for (g_111.f2 = 12; (g_111.f2 >= 52); g_111.f2++)
        {
            char l_638 = 0x6BL;
            short l_662 = 0xD3F6L;
            struct S0 l_688 = {0L,1L,0xB00E7C49L,-10L,-5L,4294967289UL,0x05L};
            g_578 = 0L;
            for (g_401 = 0; (g_401 < (-7)); --g_401)
            {
                unsigned l_644 = 0UL;
                if ((+p_26))
                {
                    l_579 = p_26;
                    l_638 = (safe_unary_minus_func_int16_t_s(g_401));
                    l_579 = g_111.f4;
                }
                else
                {
                    unsigned char l_643 = 255UL;
                    int l_645 = 1L;
                    if (g_226)
                        goto lbl_639;
                    l_645 = func_74(((g_111.f1 != ((((g_510 == (((l_640 != 0xE7L) < (safe_mul_func_int8_t_s_s(func_74((func_51(func_60(g_9, p_26, l_643, func_79(l_644), l_638), g_170) <= 0UL), l_630, l_638, l_638), p_26))) || g_363)) != l_638) | g_170) == l_643)) && p_27), p_26, p_27, g_433);
                    g_578 = p_27;
                }
                g_578 = ((safe_sub_func_int8_t_s_s(((p_26 == (safe_sub_func_uint32_t_u_u(g_430, 0x7225E02EL))) != (safe_rshift_func_int8_t_s_u((+((safe_add_func_int16_t_s_s(l_630, func_74(p_27, (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_111.f0, (safe_mul_func_int16_t_s_s(p_27, l_627)))), (safe_mul_func_int16_t_s_s(g_283, g_358)))), l_638, g_127))) != l_662)), g_111.f1))), l_630)) != p_27);
                g_578 = ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(p_27, ((safe_rshift_func_uint8_t_u_u(l_630, (safe_mul_func_int16_t_s_s((func_74(l_673, (safe_mul_func_uint8_t_u_u(g_540, func_79((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_26, l_662)), (0x9C51BBECL < l_630)))))), p_26, l_644) > 255UL), l_630)))) || 0x35L))), p_27)), l_644)) == p_27);
                l_684 = ((((-4L) && (safe_lshift_func_uint16_t_u_s((1UL != g_311), 0))) & (func_51(l_557.f1, l_627) >= (func_79(l_640) < l_644))) < p_26);
            }
            for (g_484 = 0; (g_484 >= 6); g_484++)
            {
                struct S0 l_687 = {0xC19BL,-1L,1UL,0xF162F56DL,0xECL,4294967293UL,0xBAL};
                l_688 = l_687;
                g_578 = l_687.f5;
            }
            if (g_111.f4)
                break;
        }
        for (g_111.f0 = 0; (g_111.f0 == 1); g_111.f0 = safe_add_func_uint32_t_u_u(g_111.f0, 2))
        {
            struct S0 l_696 = {0x0208L,0x4440L,0xDB6751E6L,0L,0L,4294967295UL,252UL};
            int l_724 = (-6L);
            unsigned char l_727 = 255UL;
            unsigned l_754 = 0x6C8F4A8BL;
            char l_755 = (-5L);
            unsigned char l_772 = 0x01L;
            if (g_111.f5)
            {
                return p_26;
            }
            else
            {
                struct S0 l_697 = {0x9E5AL,0x49A1L,0x89FA06F4L,1L,0xD0L,4294967295UL,0x0AL};
                for (g_522 = 9; (g_522 > 5); g_522 = safe_sub_func_int32_t_s_s(g_522, 2))
                {
                    short l_701 = (-6L);
                    for (g_400 = (-9); (g_400 <= (-17)); g_400 = safe_sub_func_int16_t_s_s(g_400, 5))
                    {
                        l_696 = l_695;
                        if (g_358)
                            continue;
                        if (p_27)
                            break;
                    }
                    if ((~p_27))
                    {
                        struct S0 l_698 = {0x8C1DL,8L,8UL,0xF053228AL,-1L,7UL,0xDDL};
                        l_696 = l_697;
                        g_578 = 0xA922C990L;
                        l_698 = g_111;
                    }
                    else
                    {
                        int l_714 = 1L;
                        l_579 = ((0L <= (g_400 < (9UL && (((safe_add_func_uint8_t_u_u(l_701, (safe_lshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(l_476, 7)) || (safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint16_t_u_u(p_27, (safe_lshift_func_uint8_t_u_u(p_27, 7)))))) <= 65535UL)))) != (0xDF85L | 0xD6DFL)), 4L)) == p_26) && 0xC4L), g_226)))) < l_714) < l_630)))) >= p_27);
                        if (g_226)
                            break;
                    }
                    g_578 = l_696.f6;
                    l_724 = ((((safe_add_func_uint32_t_u_u(1UL, 4294967295UL)) != (l_695.f2 == 0x84C3L)) < (l_717 | 0x8F3FL)) <= (p_27 || (g_433 < (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(func_79(l_697.f4), l_695.f1)), 0UL)), p_27)))));
                }
                l_696 = l_697;
                if ((safe_mul_func_int16_t_s_s(l_727, (safe_lshift_func_int8_t_s_s(g_540, 7)))))
                {
                    unsigned l_734 = 0x08858FF4L;
                    if (((l_557.f6 || l_476) | g_170))
                    {
                        int l_739 = 0x27B9E87AL;
                        if (p_26)
                            break;
                        l_684 = (l_697.f4 ^ ((+func_51((((safe_add_func_int8_t_s_s(p_27, (safe_sub_func_uint8_t_u_u((p_27 > (g_578 >= (func_60(l_734, (p_27 & p_26), (safe_mul_func_int8_t_s_s((+(safe_mul_func_int16_t_s_s(g_363, 0L))), g_477)), g_9, l_627) > p_26))), l_739)))) < l_727) < l_740), g_430)) <= 0x6B72L));
                        l_739 = func_74(p_27, l_696.f0, ((g_314 == (func_74(g_401, p_26, g_540, func_79(g_113)) || l_696.f4)) & p_27), l_557.f5);
                        l_697 = g_111;
                    }
                    else
                    {
                        if (p_27)
                            break;
                        g_741 = l_695;
                        g_578 = g_741.f5;
                        if (g_741.f6)
                            continue;
                    }
                    if ((safe_add_func_uint32_t_u_u((0xADL | ((l_695.f1 && func_60((p_27 & (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_557.f6, g_170)), (safe_mul_func_int8_t_s_s(g_433, func_74(func_60(l_695.f5, (safe_add_func_uint32_t_u_u(g_401, l_734)), g_477, l_754, p_26), p_27, l_557.f1, g_741.f0))))), p_27))), l_755, g_484, l_756, p_27)) == g_477)), g_111.f2)))
                    {
                        unsigned char l_771 = 0x48L;
                        l_684 = 0x56B32E00L;
                        g_578 = (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_170 && 255UL), l_695.f4)), p_27));
                        g_578 = (0L >= (safe_sub_func_int16_t_s_s(func_79(p_27), func_74((safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s(func_74((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x0C26D6BBL, (~((func_51(p_27, func_74((func_74(g_194, p_26, p_26, func_74(p_26, g_741.f1, l_627, g_741.f5)) & l_697.f5), l_771, g_741.f6, p_27)) != 0x096AB468L) < 0L)))), 0x64L)), l_772, l_773, l_772), 5)) || 0x70201698L) == g_741.f0) <= p_27), 6)), l_697.f0, g_354, g_522))));
                        g_741 = l_695;
                    }
                    else
                    {
                        unsigned short l_788 = 0x207AL;
                        l_788 = (safe_add_func_uint16_t_u_u(l_557.f0, (safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_26, ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_433, g_111.f3)), (func_51(g_447, g_400) & g_522))) && ((safe_mul_func_uint16_t_u_u(0x5CD1L, 0x096EL)) || 0L)))), l_734)) == l_755), 14))));
                        g_578 = l_695.f1;
                        g_578 = (safe_lshift_func_int16_t_s_u(p_27, 11));
                    }
                    g_741 = l_697;
                }
                else
                {
                    int l_791 = 0xC9C889DFL;
                    l_724 = l_791;
                }
            }
            g_741 = l_696;
            if (g_111.f4)
            {
                unsigned l_809 = 0x8CA4A355L;
                int l_829 = 0xDF65CD44L;
                if ((l_684 > 65535UL))
                {
                    int l_792 = 0x293719B8L;
                    if (l_792)
                        break;
                }
                else
                {
                    unsigned l_797 = 0UL;
                    struct S0 l_798 = {0x3797L,1L,0x9792B73BL,0L,1L,0xB058504FL,1UL};
                    for (g_111.f5 = 0; (g_111.f5 < 27); g_111.f5 = safe_add_func_uint8_t_u_u(g_111.f5, 9))
                    {
                        l_797 = (safe_mul_func_int16_t_s_s(l_717, p_26));
                        g_741 = l_798;
                        g_578 = g_430;
                        g_578 = ((g_578 >= l_557.f2) & (safe_add_func_uint8_t_u_u(1UL, (g_741.f2 != (((~(safe_mul_func_uint8_t_u_u(g_314, (0xF8L <= (safe_mul_func_int16_t_s_s(g_111.f5, 0x2E8AL)))))) & (safe_lshift_func_int8_t_s_u(p_27, 0))) <= 1L)))));
                    }
                }
                if ((g_111.f4 | (0x5FL == 0xA5L)))
                {
                    short l_824 = 0x68F7L;
                    for (l_557.f3 = 0; (l_557.f3 > 10); l_557.f3 = safe_add_func_int32_t_s_s(l_557.f3, 1))
                    {
                        unsigned char l_816 = 247UL;
                        int l_817 = 0L;
                        l_809 = g_323;
                        l_817 = ((g_323 | ((p_27 >= (safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(g_578, l_816)), 1)) <= l_772), g_113))) || l_557.f3)) | g_522);
                        g_741 = l_557;
                        g_578 = ((safe_mul_func_int8_t_s_s(0x43L, 0UL)) | (((safe_rshift_func_uint8_t_u_s(((-1L) || func_74((safe_add_func_uint16_t_u_u(g_741.f0, 0L)), ((l_824 == ((g_741.f4 & (l_727 < (((func_51(l_696.f5, g_226) ^ p_26) & 4294967291UL) >= 1UL))) & 255UL)) ^ 4294967289UL), p_26, g_510)), 2)) || g_741.f2) > g_314));
                    }
                    if (l_727)
                        break;
                    if ((!0L))
                    {
                        g_578 = (-4L);
                        l_829 = (safe_lshift_func_uint16_t_u_s(l_557.f0, (safe_add_func_int16_t_s_s(0L, 0x7295L))));
                    }
                    else
                    {
                        unsigned l_830 = 7UL;
                        l_830 = (g_311 < func_74(g_323, l_824, (((1L >= 0x00L) <= (l_809 ^ (-1L))) && (p_27 != g_484)), l_695.f6));
                        if (l_772)
                            break;
                        return g_741.f1;
                    }
                }
                else
                {
                    g_741 = l_695;
                }
                if (l_809)
                    break;
                l_684 = g_540;
            }
            else
            {
                unsigned l_831 = 0x0EC9E574L;
                struct S0 l_832 = {6L,0x85D1L,0x73FEBBCEL,0x7AB91DB8L,-4L,0xF7765112L,0UL};
                l_831 = p_27;
                g_741 = l_832;
                l_773 = (safe_add_func_int16_t_s_s((g_540 & ((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(p_27, 0x3BL)) >= (safe_mul_func_uint16_t_u_u(g_283, p_26))) && (((safe_rshift_func_uint16_t_u_s(((1UL & (safe_lshift_func_uint16_t_u_u(l_695.f0, 8))) == ((!(safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_477 || l_832.f1), l_851)), p_27))) != l_695.f3)), 11)) | g_484) < p_27)), 0xA4L)) < g_477), 0x6A95L)) & g_477)), 0xE18BL));
            }
            l_579 = (((safe_mod_func_uint16_t_u_u((l_854 < g_127), l_673)) <= l_579) & (p_26 < g_741.f5));
        }
        l_854 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((func_74(l_673, (g_311 | p_27), ((safe_lshift_func_uint16_t_u_u(g_311, 4)) && p_27), ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((p_27 ^ g_111.f0) <= p_27), g_433)), g_741.f4)), 0xA971L)) > g_127), 14)) >= (-5L))) | g_111.f6), g_477)), p_27)), 9));
    }
    g_578 = (((safe_add_func_uint32_t_u_u((p_27 >= func_74((safe_mul_func_int8_t_s_s(l_875, (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_226, (safe_lshift_func_int8_t_s_s(func_74(g_484, l_476, ((safe_rshift_func_int16_t_s_u(p_27, 7)) != (safe_mod_func_uint8_t_u_u(g_94, func_74(g_323, l_673, l_886, g_447)))), l_557.f0), 7)))), l_476)))), p_26, p_26, g_741.f1)), 0L)) <= 1UL) && p_26);
    return l_887;
}







static int func_31(unsigned p_32, int p_33, unsigned p_34, struct S0 p_35)
{
    short l_40 = 3L;
    char l_392 = 5L;
    int l_393 = 0x78855DD7L;
    char l_394 = 0x56L;
    p_33 = p_35.f2;
    if (l_40)
    {
        struct S0 l_370 = {0x385CL,0L,0xD4865413L,0x34BA4E07L,1L,4294967287UL,0xC9L};
        l_370 = func_41(g_9);
        l_393 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((~(safe_mod_func_uint16_t_u_u(func_46((safe_sub_func_uint16_t_u_u((func_60(p_35.f3, ((~(((-9L) <= g_354) <= (safe_unary_minus_func_int16_t_s(l_370.f3)))) >= (func_74((g_226 & ((((safe_add_func_int16_t_s_s(((0x80L | (safe_mul_func_uint8_t_u_u(p_33, 255UL))) || (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_392, g_111.f3)), 5)), l_392))), g_111.f5)) != g_363) && 0x22L) < l_370.f6)), p_35.f1, g_113, g_111.f1) > (-1L))), p_33, l_370.f5, l_40) <= p_35.f3), 0xA820L)), p_35.f0), p_35.f2))), 1UL)), g_113)) & (-1L)), p_35.f2));
        l_394 = p_35.f0;
    }
    else
    {
        int l_408 = 1L;
        for (g_111.f5 = 0; (g_111.f5 == 2); g_111.f5 = safe_add_func_int8_t_s_s(g_111.f5, 5))
        {
            char l_399 = 1L;
            g_401 = (l_393 <= (safe_sub_func_uint16_t_u_u(((0UL < g_311) & (func_60(g_111.f2, g_113, l_399, g_111.f1, g_400) > g_400)), p_33)));
        }
        l_408 = (l_392 >= (l_394 < (safe_mod_func_int32_t_s_s((g_400 & ((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s(3L, (l_392 > (g_9 | 0L)))) < ((p_35.f4 | 0x56L) >= l_393)), 0L)) < 0UL)), l_40))));
        p_33 = (safe_sub_func_uint16_t_u_u(p_32, (l_40 | l_408)));
    }
    return l_40;
}







static struct S0 func_41(unsigned char p_42)
{
    unsigned l_45 = 18446744073709551611UL;
    unsigned short l_68 = 0xCCCEL;
    int l_368 = (-1L);
    struct S0 l_369 = {1L,0L,0UL,0xA7767F09L,1L,0xDB1AD04EL,0x1BL};
    l_368 = (1L & (safe_mod_func_uint8_t_u_u(l_45, func_46((safe_sub_func_int32_t_s_s(l_45, p_42)), func_51((+l_45), (safe_add_func_uint8_t_u_u(0UL, (safe_mod_func_int16_t_s_s(((((1UL > (1L != (safe_rshift_func_uint16_t_u_s(func_60((safe_mul_func_uint8_t_u_u((l_68 >= g_9), p_42)), g_9, p_42, l_45, l_68), l_45)))) && l_68) && (-1L)) <= g_9), g_9)))))))));
    return l_369;
}







static char func_46(char p_47, int p_48)
{
    unsigned l_116 = 0xDC67607BL;
    short l_126 = (-7L);
    struct S0 l_129 = {-8L,-1L,18446744073709551612UL,1L,0x23L,0xE97BC7E1L,4UL};
    int l_193 = 0x6E1C48D9L;
    unsigned short l_212 = 1UL;
    int l_214 = 6L;
    int l_233 = 1L;
    if (p_47)
    {
        unsigned l_125 = 0x38FA3529L;
        struct S0 l_128 = {0x2A41L,-3L,0xED55ED51L,-1L,0x72L,3UL,0xBEL};
        g_127 = (safe_rshift_func_uint8_t_u_s(249UL, ((((l_116 && (0xC74BL < (g_111.f6 <= ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((5L ^ (safe_sub_func_int16_t_s_s(0x015CL, g_9))), func_74(p_47, (safe_mul_func_uint16_t_u_u(g_111.f3, l_125)), g_111.f3, p_48))), l_126)) >= l_126)))) && 0xAAL) ^ g_111.f1) || p_47)));
        l_129 = l_128;
    }
    else
    {
        int l_169 = 3L;
        struct S0 l_171 = {-1L,0L,18446744073709551612UL,0x415CA0C0L,-1L,4294967292UL,255UL};
        short l_192 = (-1L);
        short l_205 = 0xB7AFL;
        int l_213 = (-1L);
        unsigned l_282 = 4294967295UL;
lbl_195:
        if ((3UL || g_113))
        {
            unsigned l_151 = 0x2BE9FDC9L;
            int l_152 = 0xC679C7D3L;
            l_152 = ((0x9C58L <= (safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(1L, ((g_113 ^ (safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s(0xB5E4L, g_9))))) && ((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_129.f1, (safe_mod_func_int8_t_s_s((func_60(g_111.f2, (safe_add_func_uint8_t_u_u(250UL, l_151)), p_47, l_151, l_151) || g_111.f4), g_111.f1)))), p_48)), l_151)), l_151)) && 0UL)))), 1UL)) > 252UL), p_47))) > l_151);
            g_170 = (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_48, 2)), ((safe_mul_func_uint16_t_u_u(g_111.f2, (((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_74(l_151, (!p_47), g_111.f2, g_111.f1), l_169)), p_47)), 1)) != p_48) & 0x02L))) < p_47))), 0x41L)), 0x30F596B1L));
            l_171 = g_111;
            if (g_111.f1)
                goto lbl_195;
        }
        else
        {
            l_169 = (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((-1L), (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(g_9, p_48)), 7)))), (safe_mod_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((g_94 | (((func_51(l_129.f5, p_48) > p_47) & 0L) && g_111.f0)) >= l_192) != l_129.f2), g_111.f5)), p_47)), p_48)), 4294967295UL)) != p_48) || 0x63EAL) > p_47), g_170)))), 0));
lbl_305:
            g_111 = g_111;
            l_193 = g_111.f2;
            g_194 = l_129.f3;
        }
        for (l_129.f1 = 0; (l_129.f1 != 2); l_129.f1++)
        {
            int l_200 = 0L;
            g_111 = l_171;
            l_169 = (((safe_lshift_func_int8_t_s_u((-1L), l_200)) <= (g_111.f6 && (l_200 == func_51((safe_mul_func_int8_t_s_s(func_74(g_194, l_116, p_48, ((p_47 & (~(safe_add_func_uint32_t_u_u(p_47, 1L)))) == g_127)), l_129.f1)), g_127)))) <= 0x2889L);
        }
        l_169 = 0x640BF3ECL;
        if (((l_193 == l_205) <= (0L > ((safe_lshift_func_uint16_t_u_s((((((func_74(p_48, p_47, (g_111.f0 >= (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((l_212 & 0xACDDL), (2UL ^ l_129.f3))) != l_213), l_129.f6))), p_47) ^ g_194) & 1L) && l_171.f3) & g_111.f4) == l_214), 14)) ^ p_48))))
        {
            unsigned short l_217 = 0UL;
            unsigned short l_254 = 0UL;
            struct S0 l_324 = {1L,0x7618L,0x1FB9C763L,1L,0x30L,0x581F7334L,0UL};
            if (p_48)
            {
                unsigned char l_245 = 3UL;
                struct S0 l_256 = {0L,0L,0x78C961D1L,0xE868B81BL,0x9AL,0x68F20608L,0xBBL};
                unsigned l_265 = 1UL;
                unsigned l_290 = 18446744073709551615UL;
                if ((safe_sub_func_uint32_t_u_u((l_217 | ((((4294967289UL <= ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_111.f5 > ((safe_rshift_func_int8_t_s_u((l_171.f1 != g_194), 4)) & 1L)), p_48)), 6)) | (safe_mul_func_int16_t_s_s(1L, l_116)))) < p_48) | l_171.f3) >= l_171.f1)), 0x4683A1E9L)))
                {
                    char l_232 = 0x15L;
                    if (p_48)
                    {
                        g_226 = l_171.f3;
                    }
                    else
                    {
                        unsigned l_231 = 0x4A7757DAL;
                        int l_234 = 1L;
                        l_234 = (0xE043946FL & (g_111.f6 >= ((safe_mul_func_int8_t_s_s((-1L), l_171.f6)) && (((((((safe_mul_func_int8_t_s_s((g_94 > (65535UL || (((0xF947L & p_47) && (l_231 < 0L)) <= g_111.f2))), l_232)) == 3UL) != p_48) <= l_233) >= l_205) & 0xE0FAL) == l_231))));
                        l_193 = (p_48 || (safe_sub_func_uint32_t_u_u(((func_74((safe_sub_func_int8_t_s_s((l_212 <= (0UL | ((0L != 1UL) != (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_9, 6)), func_51(p_48, l_171.f1))), l_245))))), p_47)), g_113, p_47, l_231) > p_47) && 1UL), l_129.f5)));
                        l_234 = (l_232 ^ ((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_47, p_48)) || func_79(p_48)), p_47)), ((safe_rshift_func_int8_t_s_s(p_47, 1)) & (4L >= p_48)))) != g_127) == l_231) >= 2L));
                    }
                }
                else
                {
                    l_254 = l_171.f6;
                }
                if (g_111.f5)
                {
                    struct S0 l_255 = {0xC46AL,-1L,8UL,4L,0x0EL,0x737E1BAFL,3UL};
                    unsigned short l_307 = 65528UL;
                    int l_308 = 0L;
                    if (g_111.f3)
                    {
                        return g_111.f5;
                    }
                    else
                    {
                        l_171 = l_255;
                        l_169 = p_47;
                    }
                    l_256 = g_111;
                    if ((g_111.f5 && (g_9 || (safe_unary_minus_func_int16_t_s((-1L))))))
                    {
                        unsigned char l_258 = 0x73L;
                        return l_258;
                    }
                    else
                    {
                        int l_266 = 0L;
                        char l_267 = 0x99L;
                        l_266 = (1UL <= ((safe_mul_func_int8_t_s_s(func_74(p_47, (p_47 != g_111.f3), p_48, p_48), ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_256.f1, (((g_170 < l_265) == p_47) < (-7L)))), 0xDEF7L)) >= 0x925AE960L))) < l_129.f5));
                        if (l_129.f1)
                            goto lbl_306;
                        l_267 = ((g_94 <= l_245) || l_129.f1);
                    }
                    if ((func_60((((safe_add_func_uint16_t_u_u((((((safe_mul_func_int16_t_s_s((-3L), g_111.f2)) >= (safe_lshift_func_uint16_t_u_s((((4294967288UL | ((safe_rshift_func_uint16_t_u_u(l_254, p_47)) < ((safe_sub_func_int8_t_s_s((g_111.f6 < ((safe_sub_func_int8_t_s_s((0x2F24C6D4L > ((safe_sub_func_uint8_t_u_u(g_111.f4, 0x2EL)) > 0x23C0L)), 255UL)) & 0x51L)), (-1L))) | g_111.f6))) != p_48) && 65535UL), l_282))) > g_94) || (-5L)) && l_255.f0), g_111.f0)) | 0xDFL) == g_127), p_48, l_217, p_48, p_47) || l_217))
                    {
                        int l_303 = (-3L);
                        int l_304 = 0L;
                        g_283 = g_111.f3;
                        l_169 = (+(safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((l_254 != (((safe_mul_func_int8_t_s_s(1L, p_47)) || g_194) >= l_290)) | 1UL), (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(g_111.f0, ((+(g_111.f2 <= (safe_rshift_func_int8_t_s_s((func_60((safe_lshift_func_uint16_t_u_s(((p_47 > l_171.f6) == 4294967295UL), 14)), g_226, l_171.f2, p_47, p_47) == l_303), 1)))) ^ 0x587FL))) < 0x8BL), l_304)), 12)), g_226)))), 0x181E8334L)));
                    }
                    else
                    {
lbl_306:
                        if (l_205)
                            goto lbl_305;
                        l_233 = 1L;
                        l_307 = g_170;
                        l_308 = l_256.f6;
                    }
                }
                else
                {
                    l_171 = l_129;
                }
                g_311 = (safe_mod_func_int32_t_s_s(l_171.f6, l_171.f2));
                if (g_170)
                {
                    struct S0 l_315 = {0L,0x0AE3L,0xDBBD370AL,-8L,0xDEL,0x8AD6DF75L,0xB4L};
                    for (l_256.f5 = 1; (l_256.f5 != 12); l_256.f5 = safe_add_func_int16_t_s_s(l_256.f5, 1))
                    {
                        g_314 = ((0xB0ADA181L || g_94) <= (0x4C6D2363L > l_217));
                        g_111 = l_315;
                    }
                }
                else
                {
                    for (l_256.f1 = (-13); (l_256.f1 < 28); l_256.f1 = safe_add_func_int16_t_s_s(l_256.f1, 6))
                    {
                        return g_311;
                    }
                }
            }
            else
            {
                unsigned char l_320 = 0x79L;
                struct S0 l_339 = {0x8963L,0x4CBCL,7UL,0xAC048399L,-3L,1UL,0xA1L};
                l_171 = g_111;
                l_169 = l_217;
                if (((65535UL > ((safe_rshift_func_int8_t_s_s(g_111.f4, 6)) ^ l_320)) > g_111.f3))
                {
                    unsigned l_337 = 0x140DDB9DL;
                    for (l_129.f1 = 10; (l_129.f1 == 20); l_129.f1++)
                    {
                        g_323 = p_48;
                        l_324 = g_111;
                    }
                    l_193 = ((safe_mod_func_uint32_t_u_u((g_314 ^ (7L | 0xD9079CEFL)), (p_47 | ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_47, (safe_mul_func_int16_t_s_s(p_47, 0x4306L)))), (p_47 == g_111.f5))), 0x51L)) == 1L)))) & g_226);
                    if ((l_320 ^ (l_171.f1 <= (((l_320 ^ (p_48 == (l_320 > l_169))) | (safe_lshift_func_uint16_t_u_u(0x5A1FL, l_337))) || 65526UL))))
                    {
                        struct S0 l_338 = {0x2876L,0x9231L,0x213D1F3DL,0x490537F6L,-7L,0x73596953L,1UL};
                        l_324 = l_338;
                        l_129 = g_111;
                        l_339 = g_111;
                        l_171 = l_129;
                    }
                    else
                    {
                        l_324 = g_111;
                    }
                    return l_193;
                }
                else
                {
                    return l_339.f6;
                }
            }
            return g_111.f4;
        }
        else
        {
            int l_342 = 0x09B8FF13L;
            unsigned short l_353 = 1UL;
            int l_355 = 0xEEA15874L;
            l_355 = (safe_add_func_uint32_t_u_u((l_342 || ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(0xD0L, 1)), 6)) > ((((l_282 || p_48) <= (safe_mod_func_int8_t_s_s(((func_60((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_111.f4, ((p_48 | g_111.f3) | (((255UL | ((g_111.f0 >= 0x5EL) ^ p_47)) >= g_9) <= p_48)))), l_353)), p_48, g_111.f1, l_171.f4, p_48) < l_353) != g_323), 1L))) || l_353) > l_171.f5))), g_354));
            g_358 = (safe_lshift_func_uint8_t_u_u(g_323, 1));
            l_355 = ((65535UL <= (safe_add_func_uint8_t_u_u(249UL, (safe_mul_func_uint16_t_u_u(g_363, p_47))))) == (((p_47 | ((safe_rshift_func_uint8_t_u_u((l_353 | (safe_rshift_func_int16_t_s_u(l_205, 14))), 0)) != g_226)) != (((0xE0L < 0L) & p_47) & g_283)) || g_283));
        }
    }
    return l_129.f1;
}







static int func_51(short p_52, char p_53)
{
    struct S0 l_112 = {5L,0x1FF1L,0x73263BB6L,0xCE132E46L,0x4EL,0x9C9FCC30L,1UL};
    l_112 = g_111;
    return g_113;
}







static unsigned short func_60(unsigned p_61, int p_62, char p_63, unsigned p_64, unsigned p_65)
{
    int l_69 = 0xF08EAF53L;
    struct S0 l_110 = {0x99A0L,6L,0x98031143L,0x463D90BCL,0x14L,0x55FA7FFFL,0x57L};
    l_69 = l_69;
    for (p_63 = 0; (p_63 != 18); ++p_63)
    {
        int l_95 = 1L;
        l_69 = l_69;
        l_69 = (safe_rshift_func_int16_t_s_s((!g_9), (((func_74(func_79(g_9), g_9, l_95, (safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_9, 2)), (safe_rshift_func_int8_t_s_u(g_9, 1)))), ((-6L) | 0x8985BB29L))), g_9)) || g_9), p_65))) || p_63) ^ p_63) == l_69)));
        for (p_65 = 0; (p_65 != 16); p_65++)
        {
            if (g_9)
                break;
        }
    }
    l_110 = l_110;
    return l_110.f0;
}







static char func_74(short p_75, short p_76, unsigned p_77, unsigned p_78)
{
    return p_77;
}







static short func_79(unsigned p_80)
{
    unsigned char l_83 = 1UL;
    for (p_80 = 0; (p_80 <= 56); p_80 = safe_add_func_uint32_t_u_u(p_80, 1))
    {
        return l_83;
    }
    g_94 = (safe_sub_func_uint32_t_u_u(4294967287UL, ((safe_sub_func_uint16_t_u_u(0x962DL, g_9)) != ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_80, (((p_80 < ((!l_83) | (safe_mod_func_uint32_t_u_u(p_80, (0x6FL && l_83))))) && g_9) >= (-8L)))), 0x0AL)) | 0x9E4BL))));
    return g_94;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_111.f4, "g_111.f4", print_hash_value);
    transparent_crc(g_111.f5, "g_111.f5", print_hash_value);
    transparent_crc(g_111.f6, "g_111.f6", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_741.f0, "g_741.f0", print_hash_value);
    transparent_crc(g_741.f1, "g_741.f1", print_hash_value);
    transparent_crc(g_741.f2, "g_741.f2", print_hash_value);
    transparent_crc(g_741.f3, "g_741.f3", print_hash_value);
    transparent_crc(g_741.f4, "g_741.f4", print_hash_value);
    transparent_crc(g_741.f5, "g_741.f5", print_hash_value);
    transparent_crc(g_741.f6, "g_741.f6", print_hash_value);
    transparent_crc(g_1049.f0, "g_1049.f0", print_hash_value);
    transparent_crc(g_1049.f1, "g_1049.f1", print_hash_value);
    transparent_crc(g_1049.f2, "g_1049.f2", print_hash_value);
    transparent_crc(g_1049.f3, "g_1049.f3", print_hash_value);
    transparent_crc(g_1049.f4, "g_1049.f4", print_hash_value);
    transparent_crc(g_1049.f5, "g_1049.f5", print_hash_value);
    transparent_crc(g_1049.f6, "g_1049.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
