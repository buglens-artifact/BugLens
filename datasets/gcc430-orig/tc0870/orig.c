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
   signed f0 : 28;
   signed f1 : 1;
   signed f2 : 31;
   signed f3 : 15;
   char f4;
   unsigned f5 : 12;
   long long f6;
   unsigned f7 : 1;
   unsigned f8 : 4;
};


static unsigned short g_19 = 0x509EL;
static long long g_60 = (-8L);
static unsigned g_63 = 0UL;
static unsigned long long g_68 = 0xD74ECB9A7B846FCCLL;
static struct S0 g_74 = {-15847,0,27779,3,-1L,9,-1L,0,3};
static unsigned g_90 = 1UL;
static int g_97 = 0x42C8AC77L;
static int g_120 = 0x8AFD6114L;
static long long g_123 = 0xC20F6EBCB29D2F47LL;
static unsigned g_161 = 0xEB0F3594L;
static char g_163 = 0x62L;
static unsigned short g_171 = 65531UL;
static unsigned g_179 = 18446744073709551615UL;
static int g_212 = (-1L);
static short g_236 = 0xA49CL;
static unsigned char g_240 = 0x0FL;
static long long g_251 = 0x1C62A095AAE58CCBLL;
static unsigned g_252 = 1UL;
static unsigned g_261 = 8UL;
static int g_267 = (-1L);
static short g_268 = 0x4B30L;
static int g_270 = 0xFE30B6DDL;
static unsigned long long g_271 = 0x1958A2EDE8AA6399LL;
static struct S0 g_283 = {13297,0,-3993,-5,0x0AL,11,0xDB340D868492E97BLL,0,3};
static unsigned g_372 = 0x4F66C186L;
static struct S0 g_411 = {14411,0,-31328,-55,0x0DL,42,-5L,0,2};
static unsigned char g_554 = 0x03L;
static unsigned long long g_587 = 0x03ACE0EB751AC892LL;
static unsigned g_601 = 0x28EC2FF9L;
static unsigned g_605 = 0x0C2E2896L;
static struct S0 g_609 = {-16099,0,-37850,47,0x60L,62,0x4A0107A1075A531CLL,0,2};



static int func_1(void);
static long long func_6(unsigned char p_7, unsigned short p_8, struct S0 p_9, long long p_10);
static unsigned char func_13(int p_14, unsigned p_15, unsigned short p_16, unsigned char p_17);
static char func_22(unsigned char p_23, unsigned long long p_24, int p_25, unsigned char p_26, struct S0 p_27);
static unsigned char func_28(short p_29, int p_30, short p_31, unsigned p_32);
static short func_33(char p_34, long long p_35, unsigned p_36, unsigned short p_37);
static long long func_38(unsigned short p_39, int p_40, unsigned long long p_41, int p_42);
static int func_47(char p_48, int p_49);
static unsigned long long func_50(unsigned long long p_51, struct S0 p_52);
static struct S0 func_54(unsigned p_55);
static int func_1(void)
{
    char l_18 = 0xEDL;
    char l_379 = 0x52L;
    int l_415 = 1L;
    struct S0 l_416 = {-13511,0,-12814,-8,0x15L,50,-1L,0,0};
    int l_591 = 0x8D0EBFEBL;
    unsigned l_610 = 4294967294UL;
    short l_612 = 0xE758L;
    unsigned long long l_613 = 18446744073709551613UL;
    int l_624 = 0x42DE0D48L;
    unsigned short l_625 = 65534UL;
    l_612 ^= ((l_416.f0 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(func_6((safe_lshift_func_uint16_t_u_u((func_13(l_18, ((g_19 >= ((0x90350D8AL & ((l_18 ^ func_22(l_18, l_18, ((l_415 = func_28(((func_33(g_19, func_38((~(l_18 && (g_19 , 0x4E78L))), g_19, l_18, l_18), l_379, l_379) || g_74.f8) , l_18), l_18, g_97, l_379)) < g_411.f5), g_251, l_416)) != l_416.f1)) | l_591)) , l_416.f6), g_587, g_97) || l_379), l_416.f3)), l_416.f8, g_609, l_610), 0xF9F5110DCC02E8DFLL)), 7))) >= g_609.f2);
    l_613 = 0L;
    for (g_212 = (-7); (g_212 != (-2)); ++g_212)
    {
        unsigned short l_616 = 0x0860L;
        int l_623 = (-7L);
        g_74.f1 = (((((g_601 != ((l_616++) , g_411.f2)) , l_616) <= g_161) ^ g_74.f6) < ((safe_rshift_func_int8_t_s_s(g_74.f8, func_33(((safe_rshift_func_uint8_t_u_u(l_623, l_416.f3)) >= (l_623 != l_623)), l_623, g_609.f7, g_123))) ^ l_416.f6));
    }
    ++l_625;
    return l_416.f7;
}







static long long func_6(unsigned char p_7, unsigned short p_8, struct S0 p_9, long long p_10)
{
    struct S0 l_611 = {14123,-0,-1887,165,0xB5L,45,-10L,0,1};
    l_611 = l_611;
    return g_411.f5;
}







static unsigned char func_13(int p_14, unsigned p_15, unsigned short p_16, unsigned char p_17)
{
    int l_596 = (-6L);
    int l_599 = 0x66BF2508L;
    int l_600 = 0x27A3E9AAL;
    struct S0 l_608 = {-5293,-0,24097,102,0x3EL,6,1L,0,3};
    g_601 ^= (l_596 = func_33((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_28(l_596, l_596, p_16, g_68), (l_599 ^= (g_120 >= (safe_lshift_func_uint8_t_u_s(0xA3L, 6)))))), 1L)), (l_600 &= g_411.f6), p_16, l_596));
    for (g_271 = 0; (g_271 <= 14); g_271 = safe_add_func_uint8_t_u_u(g_271, 4))
    {
        char l_604 = 7L;
        ++g_605;
        l_608 = g_411;
        return p_17;
    }
    return p_14;
}







static char func_22(unsigned char p_23, unsigned long long p_24, int p_25, unsigned char p_26, struct S0 p_27)
{
    unsigned short l_417 = 65530UL;
    long long l_428 = (-4L);
    int l_453 = 0x690EF32DL;
    unsigned char l_464 = 0UL;
    unsigned long long l_513 = 18446744073709551609UL;
    unsigned char l_518 = 0xC6L;
    struct S0 l_534 = {-8119,0,-17599,8,-4L,7,-4L,0,3};
    short l_544 = 0x51B1L;
    unsigned long long l_580 = 0x5AFE7FCEA9CE3999LL;
    unsigned l_588 = 0xA0B91481L;
    if (l_417)
    {
        unsigned short l_441 = 65528UL;
        int l_452 = 0x8F935192L;
        int l_454 = 0x2FB90FAAL;
        long long l_540 = (-1L);
        unsigned long long l_557 = 18446744073709551611UL;
        char l_558 = 2L;
lbl_537:
        p_27.f1 = (safe_sub_func_int64_t_s_s((g_120 >= 0L), 18446744073709551615UL));
        if ((safe_mod_func_uint64_t_u_u((g_68 = (g_251 ^ (((safe_div_func_int64_t_s_s(l_417, (l_428 ^= (++g_271)))) | (l_417 & (safe_add_func_int16_t_s_s((g_74.f2 | g_251), 0x1C7EL)))) ^ g_63))), (g_123 = (((safe_mod_func_uint8_t_u_u(p_27.f7, 0x7AL)) , 0L) , l_417)))))
        {
            unsigned l_455 = 4294967295UL;
            char l_467 = 0xA4L;
            int l_471 = (-5L);
            long long l_499 = 0x8A470E8DBB146832LL;
            struct S0 l_519 = {-6338,-0,-21853,10,0x33L,42,0x53D06A86FCC0C62ALL,0,0};
            unsigned short l_520 = 0x64D5L;
            if ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s(func_47((p_23 | 0xBE26E32C7C724EEBLL), (func_28((l_454 ^= (l_453 = (g_268 = ((safe_lshift_func_uint16_t_u_u((g_171++), l_441)) && (((-6L) & (l_428 ^ ((g_411.f0 | ((safe_add_func_uint32_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((0x82B63C7F41241078LL > ((l_452 = p_27.f5) & 0x02L)), 0xCC36L)) < p_27.f6), 4)) , p_27.f1) || p_24), g_251)), 12)))) >= p_27.f7)) ^ 0xF761L))) <= 0UL))))), l_441, l_455, p_26) , l_428)), 5L)) > p_27.f4), g_411.f7)))
            {
                unsigned long long l_458 = 0xCCB4F9CFB12D965ELL;
                if (g_411.f8)
                {
                    int l_459 = 0xAD504F89L;
                    p_25 = g_268;
                    g_411.f3 = func_33((safe_rshift_func_int8_t_s_u((g_163 = (g_411.f4 = ((l_458 |= (0x91D493B6L < p_24)) , ((((((~g_74.f7) >= l_459) | (g_179 , p_24)) && ((p_27.f4 = (safe_lshift_func_uint16_t_u_u(0xA5BAL, g_270))) < ((safe_lshift_func_int8_t_s_s((g_411.f1 , 4L), g_123)) && l_458))) , 0xA746F59F785ACA40LL) == g_411.f6)))), g_411.f3)), g_283.f5, g_251, p_27.f1);
                }
                else
                {
                    l_464--;
                }
                l_467 &= 0x370A3413L;
            }
            else
            {
                int l_472 = 1L;
                int l_474 = 5L;
                for (g_251 = 26; (g_251 < (-24)); g_251 = safe_sub_func_uint16_t_u_u(g_251, 8))
                {
                    unsigned long long l_476 = 18446744073709551615UL;
                    int l_492 = (-5L);
                    unsigned char l_498 = 255UL;
                    if (g_74.f3)
                    {
                        long long l_470 = 1L;
                        int l_473 = 0L;
                        int l_475 = 0L;
                        l_476--;
                        g_411.f1 = (safe_unary_minus_func_uint16_t_u((g_171 = (safe_mod_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s(((((l_471 = g_236) , (safe_add_func_uint8_t_u_u(((((5UL == 0xC8FB3084L) && ((safe_rshift_func_int8_t_s_u(g_283.f8, 4)) , (safe_sub_func_int64_t_s_s(((p_27.f4 > (p_27.f4 ^ 0x81L)) != p_24), g_74.f3)))) <= 0x1A06L) | g_63), 3L))) | l_467) <= 0x28L), (-9L))) == p_27.f2) , p_27.f6) <= g_283.f0), 0x0810L)))));
                        p_27.f0 |= (safe_div_func_int8_t_s_s(p_27.f5, 0xE6L));
                    }
                    else
                    {
                        int l_497 = 0x2EF0A67DL;
                        l_492 = g_283.f8;
                        l_499 = (safe_sub_func_uint16_t_u_u((l_452 && g_411.f2), ((l_453 | ((safe_sub_func_int16_t_s_s(g_68, g_74.f3)) ^ func_33((func_33(g_411.f2, g_267, (p_27.f8 = l_472), func_33(l_467, l_497, l_497, p_27.f5)) != 9L), p_27.f2, l_498, l_467))) > p_27.f3)));
                        p_25 = 0L;
                        p_27.f0 = (safe_sub_func_uint64_t_u_u((p_23 == ((func_54(l_474) , l_428) && (safe_lshift_func_uint16_t_u_u(func_47((((l_454 ^= (safe_div_func_int64_t_s_s((l_497 || g_251), (safe_lshift_func_uint8_t_u_s(l_498, (safe_lshift_func_uint16_t_u_u((g_74.f4 || (((g_163 = (safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_u((p_27.f2 && p_25), l_513))))) , l_497) & 7UL)), g_283.f2))))))) | l_499) | g_252), g_283.f0), l_497)))), 0UL));
                    }
                    if (g_411.f3)
                    {
                        long long l_514 = 0xB2DC59FE1D74C6D1LL;
                        int l_517 = 1L;
                        l_471 = g_270;
                        l_453 |= 0xAE00F6E8L;
                        g_411.f1 = (((func_38(l_428, (((func_28(l_472, (l_514 ^= p_27.f8), (l_453 &= (g_268 &= (safe_lshift_func_int8_t_s_s(l_464, (l_517 ^= (0x78L != (g_163 = (l_452 = (p_27.f4 < 0L))))))))), (l_454 = p_24)) >= g_411.f6) , g_161) , 3L), g_411.f3, p_26) == p_27.f6) <= l_441) || p_27.f2);
                    }
                    else
                    {
                        g_74.f3 &= p_27.f6;
                        if (p_27.f3)
                            continue;
                    }
                    g_283 = ((p_25 , func_33((0x027EL || g_74.f0), ((0x607EL == ((l_454 <= ((!1L) , 4294967288UL)) & l_518)) < g_283.f0), p_27.f8, l_492)) , g_74);
                    if ((l_453 = l_498))
                    {
                        if (g_283.f4)
                            break;
                        return g_251;
                    }
                    else
                    {
                        return p_26;
                    }
                }
                p_27 = l_519;
                return l_471;
            }
            l_454 |= (g_283.f7 , (l_520 = (p_27.f7 , l_519.f7)));
            for (l_513 = 0; (l_513 > 43); l_513 = safe_add_func_uint64_t_u_u(l_513, 4))
            {
                unsigned char l_525 = 0x85L;
                unsigned short l_541 = 0xC90BL;
                struct S0 l_545 = {205,-0,-5237,125,0x75L,21,0x4FFE464A8A55015ELL,0,0};
                g_411 = (l_534 = func_54((((safe_mod_func_uint16_t_u_u(l_525, p_27.f2)) ^ ((~g_411.f3) , ((safe_mod_func_int16_t_s_s((l_454 &= 0xF5CEL), func_47((l_519.f0 = p_27.f8), (p_25 != (l_519.f3 &= (safe_add_func_uint8_t_u_u((l_453 = l_519.f5), ((((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((g_411.f6 = (p_27.f5 && l_518)), l_417)), 65535UL)) >= p_27.f4) >= g_74.f8) || l_525)))))))) & g_261))) && l_441)));
                for (g_163 = 0; (g_163 == (-21)); --g_163)
                {
                    unsigned l_553 = 0x249161C9L;
                    g_411.f0 ^= ((l_452 = g_74.f2) , func_47(l_471, p_27.f5));
                    if (g_179)
                        goto lbl_537;
                    for (g_372 = 0; (g_372 >= 27); g_372++)
                    {
                        unsigned l_548 = 0x097D60DFL;
                        --l_541;
                        if (l_544)
                            break;
                        l_545 = g_411;
                        l_545.f1 = ((func_33(((safe_lshift_func_uint8_t_u_u(l_548, ((((l_452 = (l_548 & (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(0x16C54924208B8FC1LL, func_33(p_27.f3, l_553, l_452, p_27.f4))), l_441)))) <= p_27.f7) | p_27.f2) < l_441))) >= l_519.f6), g_161, g_74.f8, g_554) | p_27.f4) == l_553);
                    }
                    for (p_26 = (-21); (p_26 >= 30); p_26 = safe_add_func_uint32_t_u_u(p_26, 4))
                    {
                        p_25 = (l_557 &= (g_283.f0 < (-9L)));
                        p_27.f2 = l_558;
                    }
                }
                for (p_27.f4 = 0; (p_27.f4 < 9); ++p_27.f4)
                {
                    unsigned l_561 = 0x3B2CDE96L;
                    struct S0 l_568 = {6270,-0,46289,26,0xAAL,37,0x480694E06080111DLL,0,1};
                    l_561 = l_417;
                    l_568 = func_54((p_27.f8 = (safe_sub_func_int8_t_s_s((((l_454 = (p_27.f5 | l_558)) | 0x9650L) ^ ((g_74.f4 = g_270) > (p_27.f0 , (safe_sub_func_int32_t_s_s(func_33(g_283.f1, (safe_sub_func_int32_t_s_s((p_24 , g_123), 0xFC38F3F4L)), g_74.f8, p_23), p_26))))), p_27.f5))));
                    p_27.f0 ^= (g_268 , g_411.f4);
                }
            }
        }
        else
        {
            unsigned l_577 = 3UL;
            int l_589 = 0xD222846DL;
            l_454 = (l_453 = (safe_lshift_func_uint16_t_u_u((((((l_589 = (g_74.f3 , ((((((((((((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0x28E73CFC83AA9534LL, (safe_mod_func_int64_t_s_s(l_534.f3, l_577)))), (safe_mod_func_uint16_t_u_u(func_28(l_580, ((p_27.f4 && (safe_sub_func_uint8_t_u_u((g_554 = (((((safe_div_func_int64_t_s_s(g_171, l_557)) && (safe_rshift_func_int8_t_s_u(g_283.f6, p_27.f4))) <= p_23) , 4294967287UL) != g_587)), l_558))) <= g_252), g_271, g_270), g_411.f2)))) , l_540) , p_27.f1) >= 0xEAL) >= g_411.f5) ^ p_27.f8) , 1L) || l_577) , g_74.f6) ^ l_588) , 0x7CL) & l_577))) , 0x8DL) >= p_27.f2) , g_411.f5) || g_411.f3), 7)));
            l_589 = (6L ^ l_454);
            p_27.f1 = (-2L);
        }
    }
    else
    {
        unsigned short l_590 = 65535UL;
        l_590 &= 1L;
    }
    return l_534.f4;
}







static unsigned char func_28(short p_29, int p_30, short p_31, unsigned p_32)
{
    unsigned short l_397 = 9UL;
    int l_400 = 0x45C48BDEL;
    int l_412 = 0xCC28DFE8L;
    int l_413 = 0x954E7B07L;
    struct S0 l_414 = {9078,-0,14116,117,0x45L,42,0xC4206CAF53FA4B1DLL,0,3};
    ++l_397;
    l_400 = 0xD301AD19L;
    l_414 = func_54(((l_400 > (l_413 = ((safe_add_func_int8_t_s_s(0L, ((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(l_400, 0L)), (l_412 = (func_47((g_74 , func_33(((((func_50((func_47(g_163, p_30) < (((p_31 , 0x29CAFD24L) , 0xA0BD074CB4B96582LL) >= p_29)), g_411) , g_283.f6) >= l_400) , l_400) | l_400), l_400, p_31, g_251)), p_30) | l_397)))) == g_411.f7))) != l_400))) && p_29));
    return g_163;
}







static short func_33(char p_34, long long p_35, unsigned p_36, unsigned short p_37)
{
    char l_380 = (-6L);
    int l_381 = 0L;
    int l_382 = 0x1EF6E230L;
    int l_383 = 0x5970D477L;
    int l_384 = 0L;
    int l_385 = 0xC42388ACL;
    int l_386 = 0L;
    int l_387 = 0x07E1C385L;
    int l_388 = 8L;
    char l_389 = 0x41L;
    int l_390 = 0xBB7433FAL;
    unsigned long long l_391 = 0x227E1B0A81330449LL;
    l_391--;
    for (g_171 = 25; (g_171 >= 31); g_171 = safe_add_func_int32_t_s_s(g_171, 6))
    {
        long long l_396 = 0x6529D9DC93415A64LL;
        return l_396;
    }
    return g_123;
}







static long long func_38(unsigned short p_39, int p_40, unsigned long long p_41, int p_42)
{
    char l_43 = (-1L);
    unsigned l_46 = 0xA36FE543L;
    struct S0 l_53 = {-15128,-0,-38492,89,0xA3L,58,0xBBDB817BB5C02AC6LL,0,2};
    int l_330 = 0x1FE8B0F7L;
    int l_331 = 0x48CFE875L;
    int l_378 = 1L;
    l_46 = (l_43 && ((safe_rshift_func_uint16_t_u_s((1UL || ((p_39 , l_43) >= g_19)), 14)) && 6UL));
    l_378 ^= func_47((l_330 = ((((func_50(g_19, (l_53 = l_53)) || ((((g_236 = g_74.f3) , (func_50(p_42, l_53) & (l_330 != (l_331 &= p_42)))) | p_40) , g_74.f3)) > 0L) < p_42) || p_40)), p_39);
    return p_40;
}







static int func_47(char p_48, int p_49)
{
    short l_336 = (-9L);
    struct S0 l_373 = {-5756,0,25268,48,0xB1L,20,-9L,0,0};
    unsigned short l_374 = 0xB1A4L;
    g_74 = func_54((((((((((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((l_336 <= g_74.f6) > (l_336 || l_336)), (g_90 , 0x2311EF88L))) == g_74.f3), g_161)) & (l_336 != g_74.f3)) >= 0UL) != g_283.f8) || l_336) ^ l_336) && p_49) == p_48) || p_48));
    for (g_240 = 0; (g_240 != 17); g_240 = safe_add_func_int16_t_s_s(g_240, 8))
    {
        long long l_354 = 8L;
        struct S0 l_355 = {16371,0,-21157,67,1L,14,-2L,0,3};
        for (g_271 = 0; (g_271 >= 37); ++g_271)
        {
            unsigned l_345 = 0xB653837CL;
            g_267 |= (0x9FA5L & ((((safe_add_func_uint8_t_u_u(g_68, g_74.f6)) && g_74.f1) ^ (p_48 != (((!((((l_345 <= (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_345, g_74.f6)), 0x2EL)), 0x482354808C08210BLL)), p_49))) != 7L) <= g_63) | l_336)) <= g_120) < 0x1DA2793B3B70A786LL))) | 0UL));
        }
        l_355 = func_54(((g_236 | l_354) == p_49));
        if (((g_90 >= (g_236 = l_355.f2)) <= ((g_267 < (safe_rshift_func_int16_t_s_s((l_355.f3 = (((((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(p_49, (g_372 = (safe_lshift_func_uint8_t_u_s(g_283.f7, (safe_sub_func_int32_t_s_s((g_74.f0 = ((safe_lshift_func_int8_t_s_u(p_48, (safe_add_func_int32_t_s_s((-6L), (((((((safe_div_func_int8_t_s_s(g_161, p_48)) && p_49) , g_252) , g_90) , l_336) < g_74.f2) > 0x05B4BBC8L))))) , p_48)), p_48))))))), l_355.f1)) , 3L) , l_355.f2) , (-4L)) <= 0x5F25L)), g_283.f7))) , (-1L))))
        {
            g_283 = (l_373 = l_355);
        }
        else
        {
            unsigned l_375 = 0xC78A6BF2L;
            if (l_374)
            {
                --l_375;
            }
            else
            {
                l_373.f2 = p_48;
            }
            return g_163;
        }
        return l_373.f1;
    }
    g_74 = func_54(l_373.f1);
    return p_48;
}







static unsigned long long func_50(unsigned long long p_51, struct S0 p_52)
{
    unsigned short l_77 = 9UL;
    unsigned l_84 = 18446744073709551615UL;
    int l_87 = 0x8E1F03B4L;
    int l_88 = (-1L);
    int l_89 = 0L;
    long long l_95 = (-6L);
    unsigned l_96 = 18446744073709551615UL;
    int l_169 = 0xCF2F2AFFL;
    int l_247 = 0x7D50ABDCL;
    long long l_250 = 0xC7D4BD7B55C8FD6DLL;
    g_74 = func_54(g_19);
    p_52.f3 = (safe_sub_func_int64_t_s_s(l_77, (g_74.f6 = (((safe_lshift_func_int16_t_s_u(1L, (l_84 = (safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(l_77, 18446744073709551615UL)), l_77))))) != ((p_52.f1 ^= ((((((safe_sub_func_uint32_t_u_u((g_90++), (l_77 || (g_74.f6 < 0x54249152248422EELL)))) == ((l_89 ^ l_95) , 6L)) >= p_52.f7) | l_96) , g_97) || 0x16BAB3D6DB513C54LL)) != 0UL)) ^ 0x07L))));
    for (l_96 = 0; (l_96 != 26); l_96++)
    {
        long long l_102 = 1L;
        int l_121 = 8L;
        int l_122 = 0L;
        struct S0 l_248 = {-8970,-0,17224,-8,3L,19,0xBA4CF426AAB0778BLL,0,3};
        long long l_259 = 0xD34D63906056CC7CLL;
        for (l_89 = 11; (l_89 > (-30)); l_89--)
        {
            unsigned short l_107 = 1UL;
            int l_112 = 1L;
            unsigned short l_116 = 1UL;
            unsigned char l_124 = 0xB9L;
            unsigned long long l_139 = 18446744073709551615UL;
            int l_178 = 0x4805D29AL;
            int l_229 = 0xAFCE4FDFL;
            struct S0 l_249 = {15387,-0,-23327,-135,-3L,0,1L,0,0};
            if ((l_102 , (safe_div_func_uint32_t_u_u(p_52.f0, (l_112 = ((safe_mod_func_uint64_t_u_u((l_107 & (safe_sub_func_int32_t_s_s(p_52.f4, g_68))), (-1L))) || (safe_sub_func_uint16_t_u_u(g_60, l_102))))))))
            {
                unsigned long long l_131 = 0UL;
                unsigned char l_132 = 0x3BL;
                for (l_87 = (-26); (l_87 != 19); l_87++)
                {
                    char l_115 = 0x38L;
                    int l_119 = 0x70B01AA1L;
                    p_52.f0 = ((g_74.f6 = (l_107 , l_96)) ^ l_107);
                    if (l_107)
                        continue;
                    if (l_115)
                    {
                        return l_116;
                    }
                    else
                    {
                        g_74.f2 = (safe_lshift_func_int16_t_s_u(g_74.f6, 1));
                        l_124--;
                        p_52.f3 |= (g_63 != (p_52.f2 == (safe_sub_func_uint16_t_u_u((l_132 |= l_131), p_51))));
                    }
                    if ((safe_div_func_int64_t_s_s((0L > 0x393F5684B0DFAB60LL), g_123)))
                    {
                        p_52.f2 |= g_74.f0;
                    }
                    else
                    {
                        g_74.f0 = g_74.f4;
                        p_52 = g_74;
                    }
                }
            }
            else
            {
                unsigned l_148 = 4294967295UL;
                int l_162 = 0x69AB3D76L;
                l_122 = g_74.f1;
                for (l_107 = 0; (l_107 < 13); l_107++)
                {
                    unsigned short l_143 = 0x09B2L;
                    int l_149 = 0x3B6C1D07L;
                    unsigned char l_150 = 2UL;
                    if ((g_74.f0 = (g_90 ^ ((p_52.f4 & ((((safe_mod_func_int8_t_s_s(l_139, ((safe_div_func_int64_t_s_s(1L, (((safe_unary_minus_func_int16_t_s(p_52.f1)) != (((l_149 = ((l_143 == ((safe_sub_func_uint16_t_u_u(l_139, ((safe_rshift_func_uint8_t_u_u(p_52.f3, 3)) & l_148))) & 0xAE24E5D9L)) && l_121)) < p_52.f6) == l_148)) & l_143))) , p_52.f5))) ^ g_74.f0) || l_148) , g_97)) != p_52.f3))))
                    {
                        l_112 = 0L;
                        l_150 ^= (0x4FB0B04AL < (g_74.f0 = g_60));
                        l_112 = (safe_rshift_func_int16_t_s_s((g_161 |= ((safe_lshift_func_uint8_t_u_u(p_52.f5, 3)) , (safe_mod_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((~(!((g_74.f5 , (g_74.f0 <= (l_148 , ((p_52.f0 ^= ((p_52.f8 , p_52.f3) & (safe_lshift_func_uint16_t_u_s(5UL, 3)))) , p_52.f3)))) != (p_52.f4 | 0xC9F68FA652D37032LL)))), p_52.f1)) && p_52.f2), 7L)))), 4));
                        if (g_74.f1)
                            continue;
                    }
                    else
                    {
                        return g_74.f0;
                    }
                    l_112 = p_51;
                    l_112 &= (((l_162 &= l_148) | ((g_163 &= l_149) == l_148)) >= (p_52.f8 | 0x7B1BE5FBL));
                    g_74 = g_74;
                }
                return g_74.f6;
            }
            if (l_96)
            {
                unsigned long long l_164 = 4UL;
                int l_168 = 0x7DEE9CF0L;
                struct S0 l_201 = {11885,-0,-19501,109,0x67L,4,-1L,0,0};
                unsigned l_226 = 0x22FE8215L;
                l_164--;
                if (p_52.f2)
                {
                    long long l_167 = (-1L);
                    int l_170 = (-6L);
                    unsigned long long l_182 = 0xD19F2AA79D8590BCLL;
                    g_171++;
                    for (l_124 = 0; (l_124 < 8); l_124++)
                    {
                        g_74.f3 = ((safe_lshift_func_uint16_t_u_s(l_164, ((++g_179) >= (!(l_168 != ((p_52.f4 |= g_74.f0) && ((g_68 & ((p_52.f2 ^= (p_52.f1 ^= 0xB315FCE8L)) || (--l_182))) , (((safe_lshift_func_uint8_t_u_u(l_102, 3)) && g_60) > ((safe_rshift_func_int8_t_s_s((18446744073709551615UL || ((0xE50127869117D6C0LL >= 18446744073709551614UL) & g_163)), 6)) , 1L))))))))) != g_161);
                    }
                    g_74.f3 &= g_74.f6;
                }
                else
                {
                    short l_189 = (-3L);
                    p_52.f0 |= l_189;
                    for (l_189 = 0; (l_189 <= (-20)); l_189 = safe_sub_func_int32_t_s_s(l_189, 9))
                    {
                        unsigned long long l_194 = 0xFCE94049F96D3B48LL;
                        l_178 &= (safe_mod_func_int32_t_s_s(5L, (l_116 || l_194)));
                    }
                }
                p_52.f1 ^= (((l_112 ^= (((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_89, ((func_54(g_161) , (safe_mod_func_uint32_t_u_u(l_164, l_168))) , l_164))), (((l_121 = (-1L)) == ((l_201 , l_201.f8) >= p_52.f0)) , 0x2AL))) < p_52.f3) , 0UL)) & 0x3094L) == g_74.f6);
                if ((safe_lshift_func_int8_t_s_u((l_122 > (((((safe_sub_func_int64_t_s_s((((-7L) > (g_212 = (p_52.f2 ^ (((l_121 = ((safe_lshift_func_uint8_t_u_s((l_121 < (((g_74.f0 , l_121) , 1UL) | (l_102 || (255UL <= p_52.f8)))), l_122)) , l_201.f1)) != g_74.f0) < p_52.f8)))) , g_74.f4), l_84)) && 0L) && g_74.f0) == g_74.f6) == l_169)), 2)))
                {
                    unsigned char l_223 = 0UL;
                    if (g_74.f7)
                    {
                        g_74.f3 &= (p_52.f6 & ((g_163 & ((safe_sub_func_uint64_t_u_u(l_164, (p_52.f3 == ((safe_sub_func_int16_t_s_s(((~(l_201.f5 , ((+4294967286UL) ^ 0UL))) || g_123), (safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((g_179 , l_112) , g_74.f4) <= p_51), g_212)), (-5L))))) | p_52.f8)))) == g_90)) <= 1L));
                        --l_223;
                        l_226--;
                        l_178 = l_201.f7;
                    }
                    else
                    {
                        l_229 ^= 0x3F941D61L;
                        if (p_52.f2)
                            break;
                    }
                    l_201.f3 &= p_52.f5;
                }
                else
                {
                    g_74 = g_74;
                }
            }
            else
            {
                int l_239 = 0xECEE319EL;
                l_178 ^= ((l_229 = g_19) >= 8UL);
                l_229 = ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(p_52.f4, 5)) != g_74.f3), (g_236 = (safe_add_func_uint64_t_u_u((g_68 = l_116), (g_161 >= p_52.f3)))))) | (p_52.f8 > ((((safe_lshift_func_uint8_t_u_s((g_240 &= (l_239 || g_74.f7)), (((l_122 < 0x03EE402FC24BD377LL) <= 5L) & 1L))) <= 0x1BABL) < (-7L)) | p_52.f0)));
                l_229 ^= ((l_247 = (g_212 & (safe_div_func_int16_t_s_s(((l_122 = p_52.f2) | (((((safe_rshift_func_uint8_t_u_s(l_102, 0)) > (((g_236 = g_179) ^ p_52.f6) <= (g_19 , g_212))) | (((p_52.f5 != (g_74.f4 != 6UL)) ^ 0xCE31F70DFA86E48CLL) > 0xEAL)) && l_95) <= l_95)), 0x1FB6L)))) || 0xF901617EL);
                l_249 = l_248;
            }
            ++g_252;
            g_74 = p_52;
        }
        if (g_240)
            continue;
        for (g_74.f6 = 6; (g_74.f6 == 23); g_74.f6++)
        {
            int l_257 = (-6L);
            short l_258 = 0x50F6L;
            int l_260 = (-5L);
            int l_269 = (-9L);
            unsigned l_307 = 0x5213D7F1L;
            int l_314 = 0x3DA78BECL;
            g_261++;
            p_52.f2 ^= g_179;
            for (l_247 = 0; (l_247 != 7); l_247 = safe_add_func_uint32_t_u_u(l_247, 9))
            {
                int l_266 = 0L;
                int l_282 = 0xA0BA23CEL;
                long long l_292 = 0x38FB73719AC969B5LL;
                char l_311 = (-1L);
                g_271--;
                g_74.f1 = ((p_52.f7 || (p_51 = ((g_74.f4 ^= l_266) & ((p_52.f4 , g_171) < (safe_rshift_func_uint16_t_u_s(p_52.f3, 11)))))) , (l_269 = (safe_unary_minus_func_uint64_t_u((g_271 = l_266)))));
                for (g_74.f4 = 7; (g_74.f4 != (-24)); --g_74.f4)
                {
                    unsigned long long l_310 = 0UL;
                    int l_312 = 0x3B6ED61AL;
                    int l_313 = 0x9CC06512L;
                    struct S0 l_329 = {-1343,0,25132,53,0xA5L,2,5L,0,1};
                    if ((0xFDBEL ^ (g_19 > p_52.f6)))
                    {
                        int l_281 = 0x950BB044L;
                        l_282 = ((l_281 = 0x808FF8841FB543D2LL) > l_259);
                        l_281 |= ((p_52.f5 && l_269) < l_257);
                    }
                    else
                    {
                        p_52.f2 |= (p_52.f1 == (-1L));
                        if (p_51)
                            continue;
                    }
                    g_283 = func_54(g_171);
                    if ((((((safe_rshift_func_uint16_t_u_s((g_171 = (((l_248.f8 > g_251) == (!(((l_122 ^= (safe_lshift_func_uint16_t_u_u(g_74.f8, 6))) && (l_248.f1 = (((safe_rshift_func_int8_t_s_s((l_292 = (g_271 <= (-3L))), 3)) == 0x5FA4L) & (safe_div_func_uint64_t_u_u(((((safe_add_func_uint64_t_u_u((p_52.f4 >= ((0x44L | (safe_mod_func_uint64_t_u_u(((l_282 ^= (safe_sub_func_int64_t_s_s((0xF0C6E62EL != 0xB2AB0640L), 6UL))) == p_52.f7), g_120))) , p_52.f7)), 0x209B306FA724ABC3LL)) != g_63) && l_96) && g_283.f6), g_60))))) == l_96))) > 0x726BL)), 11)) , l_258) < p_52.f6) == (-10L)) , 2L))
                    {
                        unsigned char l_315 = 0x86L;
                        g_267 &= (((((((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_52.f8, (safe_lshift_func_uint16_t_u_s(l_307, 8)))), (safe_sub_func_uint16_t_u_u(0UL, l_310)))) ^ ((p_52.f4 &= p_52.f5) , 0xBFL)) , func_54(l_89)) , p_52.f4) , g_74.f3) != g_283.f7) >= 0x728CL);
                        if (p_52.f1)
                            continue;
                        l_315++;
                        l_248.f3 = ((safe_mod_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u((g_74.f8 &= 0x318745E3L), (~l_102))) & p_52.f2) & (safe_sub_func_int64_t_s_s(((p_52.f1 < 0x5524799DL) <= (5L <= (l_282 & g_68))), ((!p_52.f0) , p_52.f3)))), p_52.f2)) | g_74.f4);
                    }
                    else
                    {
                        unsigned char l_326 = 255UL;
                        l_326++;
                        p_52 = l_329;
                    }
                }
            }
        }
        p_52.f3 = 0x3B9EFC18L;
    }
    return l_96;
}







static struct S0 func_54(unsigned p_55)
{
    struct S0 l_56 = {-14601,-0,27768,120,0x77L,34,0x6C342871EB1C2610LL,0,2};
    char l_59 = 1L;
    l_56 = l_56;
    if (((l_56.f2 == ((l_56 , (safe_mod_func_int16_t_s_s(((l_59 = l_56.f3) != p_55), (((g_60 = g_19) | (-3L)) , ((safe_add_func_uint16_t_u_u((7UL ^ ((l_56.f1 = (p_55 >= g_60)) ^ l_56.f5)), g_19)) , p_55))))) | g_19)) | 0xA5D7A232L))
    {
        --g_63;
    }
    else
    {
        long long l_73 = 0xD6C1C926A5A418E4LL;
        for (g_63 = 23; (g_63 != 57); g_63 = safe_add_func_int64_t_s_s(g_63, 1))
        {
            g_68--;
            l_73 = (safe_add_func_uint8_t_u_u(p_55, g_63));
        }
        return l_56;
    }
    return g_74;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_74.f5, "g_74.f5", print_hash_value);
    transparent_crc(g_74.f6, "g_74.f6", print_hash_value);
    transparent_crc(g_74.f7, "g_74.f7", print_hash_value);
    transparent_crc(g_74.f8, "g_74.f8", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_283.f0, "g_283.f0", print_hash_value);
    transparent_crc(g_283.f1, "g_283.f1", print_hash_value);
    transparent_crc(g_283.f2, "g_283.f2", print_hash_value);
    transparent_crc(g_283.f3, "g_283.f3", print_hash_value);
    transparent_crc(g_283.f4, "g_283.f4", print_hash_value);
    transparent_crc(g_283.f5, "g_283.f5", print_hash_value);
    transparent_crc(g_283.f6, "g_283.f6", print_hash_value);
    transparent_crc(g_283.f7, "g_283.f7", print_hash_value);
    transparent_crc(g_283.f8, "g_283.f8", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_411.f3, "g_411.f3", print_hash_value);
    transparent_crc(g_411.f4, "g_411.f4", print_hash_value);
    transparent_crc(g_411.f5, "g_411.f5", print_hash_value);
    transparent_crc(g_411.f6, "g_411.f6", print_hash_value);
    transparent_crc(g_411.f7, "g_411.f7", print_hash_value);
    transparent_crc(g_411.f8, "g_411.f8", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_609.f0, "g_609.f0", print_hash_value);
    transparent_crc(g_609.f1, "g_609.f1", print_hash_value);
    transparent_crc(g_609.f2, "g_609.f2", print_hash_value);
    transparent_crc(g_609.f3, "g_609.f3", print_hash_value);
    transparent_crc(g_609.f4, "g_609.f4", print_hash_value);
    transparent_crc(g_609.f5, "g_609.f5", print_hash_value);
    transparent_crc(g_609.f6, "g_609.f6", print_hash_value);
    transparent_crc(g_609.f7, "g_609.f7", print_hash_value);
    transparent_crc(g_609.f8, "g_609.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
