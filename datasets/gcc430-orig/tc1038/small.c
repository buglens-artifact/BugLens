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
   volatile unsigned short f0;
   int f1;
   volatile char f2;
   unsigned f3 : 24;
   volatile char f4;
   unsigned f5;
   volatile unsigned f6;
   volatile unsigned short f7;
   unsigned f8;
   volatile unsigned short f9;
};


static int g_9 = (-1L);
static int *g_8 = &g_9;
static volatile unsigned long long g_51 = 0xC5C3C3AE50714BA0LL;
static volatile int g_52 = 0L;
static int g_53 = 0x09892657L;
static int g_57 = 0xD56A4262L;
static int *g_56 = &g_57;
static unsigned long long g_67 = 18446744073709551613UL;
static unsigned long long g_70 = 0x4E69A4575F7F7777LL;
static struct S0 g_76 = {0x52C2L,0x470E9879L,-1L,3749,0xDEL,0x7EE8C4B0L,2UL,0UL,0x2038BE40L,65535UL};
static volatile unsigned g_80 = 0xC7BC07E7L;
static char g_94 = 0L;
static unsigned long long **g_96 = (void*)0;
static struct S0 g_99 = {65528UL,1L,5L,394,0x0AL,0xEDB9D72FL,0UL,0UL,1UL,0x3480L};
static short g_123 = 0x5961L;
static volatile struct S0 g_127 = {0x0CFEL,0xE9AC7269L,0x06L,3896,6L,0UL,18446744073709551615UL,0x1FDCL,0xA3977A87L,0x1533L};
static unsigned long long ****g_138 = (void*)0;
static unsigned short g_163 = 0xB8EDL;
static unsigned short g_165 = 0x1092L;
static unsigned g_166 = 0x2DA10ACFL;
static char g_171 = 0x65L;
static char g_174 = 0x8FL;
static volatile struct S0 g_177 = {8UL,0L,0xA8L,2860,-1L,4294967293UL,0x77048F12L,65530UL,18446744073709551610UL,0x2186L};
static struct S0 g_207 = {65531UL,-9L,0x56L,1838,-1L,1UL,18446744073709551610UL,0xCDCBL,18446744073709551609UL,0x4C60L};
static unsigned char g_213 = 1UL;
static struct S0 *g_221 = &g_99;
static struct S0 **g_220 = &g_221;
static long long g_240 = 1L;
static struct S0 g_257 = {0xE42FL,-2L,-2L,831,-9L,4294967290UL,18446744073709551615UL,0x20AAL,0xB0DE8B86L,9UL};
static struct S0 g_258 = {6UL,0x480967B4L,0xB6L,4090,0x69L,4294967290UL,0xB8F6F592L,0x05C2L,1UL,0UL};
static char g_280 = 1L;
static char *g_279 = &g_280;
static int g_282 = 0L;
static int *g_305 = (void*)0;
static short *g_311 = (void*)0;
static unsigned long long g_313 = 0x2E7B58E8656E9965LL;
static struct S0 g_324 = {0x2AB7L,0xA9950C41L,1L,2873,-3L,0xC14F0286L,18446744073709551615UL,0x0115L,18446744073709551611UL,0x7101L};
static volatile char *g_360 = &g_257.f2;
static volatile char **g_359 = &g_360;
static volatile char ***g_358 = &g_359;
static volatile struct S0 g_413 = {0xBEC5L,0L,0x0DL,2868,0x87L,4294967292UL,0xD54160B1L,0UL,0xA63BB0A0L,7UL};
static short g_441 = 0x591CL;



static unsigned func_1(void);
static int * func_2(int * p_3, int * p_4, unsigned p_5, unsigned long long p_6, unsigned char p_7);
static int * func_10(int * p_11, short p_12);
static short func_13(int * p_14, int * p_15);
static int func_17(int * p_18, int * p_19);
static int * func_20(int * p_21, short p_22, short p_23, unsigned char p_24, unsigned short p_25);
static unsigned short func_26(unsigned long long p_27, unsigned char p_28, int * p_29, int * p_30);
static short func_32(int * p_33, unsigned short p_34);
static unsigned func_36(unsigned p_37, char p_38, unsigned p_39, unsigned p_40);
static int func_43(unsigned short p_44, short p_45);
static unsigned func_1(void)
{
    int *l_16 = &g_9;
    short *l_231 = &g_123;
    char **l_318 = &g_279;
    char **l_320 = &g_279;
    char ***l_319 = &l_320;
    char **l_322 = &g_279;
    char ***l_321 = &l_322;
    int **l_475 = (void*)0;
    int **l_476 = (void*)0;
    int **l_477 = &g_8;
    int **l_478 = &g_56;
    (*l_477) = func_2(g_8, func_10(&g_9, ((*l_231) = func_13(&g_9, l_16))), g_257.f8, (safe_sub_func_uint32_t_u_u((l_318 == ((*l_321) = ((*l_319) = &g_279))), g_257.f1)), g_207.f1);


    ;
    (*l_478) = (g_8 = &g_9);

    ;
    (*l_478) = (g_305 = (void*)0);

    ;
    ;
    return g_257.f0;
}







static int * func_2(int * p_3, int * p_4, unsigned p_5, unsigned long long p_6, unsigned char p_7)
{
    int **l_323 = &g_56;
    unsigned char *l_339 = &g_213;
    struct S0 **l_343 = &g_221;
    long long *l_355 = (void*)0;
    unsigned long long l_424 = 9UL;
    short *l_459 = &g_123;
    unsigned long long *****l_467 = &g_138;
    unsigned long long *l_474 = &g_313;
    (*l_323) = p_4;

    ;
    g_324 = (*g_221);
    for (g_174 = 23; (g_174 != 24); g_174++)
    {
        struct S0 **l_342 = (void*)0;
        struct S0 ***l_344 = (void*)0;
        struct S0 ***l_345 = (void*)0;
        struct S0 ***l_346 = &g_220;
        int l_347 = 0x68E0CB7CL;
        unsigned long long *l_367 = &g_70;
        long long l_410 = (-7L);
        int l_425 = 6L;
        int l_438 = 0xF71AB1ABL;
    }
    (*g_8) = (safe_sub_func_int32_t_s_s(0x71640995L, func_26(((*l_474) = (**l_323)), g_99.f6, (*l_323), p_3)));


    return &g_9;


}







static int * func_10(int * p_11, short p_12)
{
    long long *l_239 = &g_240;
    int l_245 = 0x2BFF11E0L;
    short *l_252 = &g_123;
    unsigned short *l_253 = (void*)0;
    unsigned short *l_254 = &g_163;
    unsigned long long *l_255 = (void*)0;
    unsigned long long *l_256 = &g_67;
    unsigned *l_266 = (void*)0;
    unsigned **l_265 = &l_266;
    unsigned ***l_264 = &l_265;
    char *l_281 = &g_280;
    volatile int *l_308 = &g_52;
    unsigned long long *l_312 = &g_313;
    int **l_315 = &g_56;
    if (((*p_11) = ((((*l_256) = (((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((((*l_239) = p_12) | 1L))), (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_245, 0xE6A33768AC4890B7LL)), 7)))), (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*l_254) = ((safe_mul_func_uint16_t_u_u(p_12, func_32(func_20(&g_9, ((void*)0 != &g_138), ((*l_252) = p_12), p_12, p_12), g_174))) || (*p_11))), p_12)), 14)))), p_12)) | 0x884AA91BL) < l_245)) && 0x26D70503560D2B78LL) || l_245)))
    {
        g_258 = g_257;
    }
    else
    {
        for (g_123 = 0; (g_123 >= (-28)); g_123--)
        {
            return p_11;


        }
        if (g_99.f8)
            goto lbl_314;
    }

    ;
    if ((safe_mod_func_int64_t_s_s(l_245, func_13(p_11, p_11))))
    {
        int *l_263 = &g_9;
        int **l_283 = &l_263;
        l_263 = func_20(func_20(l_263, ((void*)0 != l_264), (+(g_282 = ((*l_252) = (((safe_sub_func_int16_t_s_s(((((p_12 == (((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(p_12, func_13(p_11, &g_57))), (safe_sub_func_int16_t_s_s(((l_281 = g_279) != (void*)0), 65528UL)))), l_245)) <= p_12), l_245)) || p_12) | 255UL)) > (-1L)) | p_12) > g_207.f8), 0xCAB0L)) >= g_258.f1) ^ 0x73L)))), g_258.f3, p_12), g_207.f5, p_12, p_12, l_245);
        (*l_283) = &l_245;

        ;
        return &g_53;


    }
    else
    {
        long long l_286 = 8L;
        int *l_289 = &l_245;
        unsigned long long l_301 = 0UL;
        unsigned l_302 = 1UL;
        if (((*p_11) < ((p_12 >= (l_245 | (!(safe_rshift_func_uint16_t_u_s(g_127.f7, (p_12 | l_286)))))) <= (safe_add_func_uint16_t_u_u(p_12, ((void*)0 != &g_138))))))
        {
            int **l_298 = &g_56;
            long long l_303 = 0x0D4D5453080C64B0LL;
            char l_304 = 0x1EL;
            int **l_306 = &l_289;
            (*l_306) = (p_11 = (g_305 = ((*l_298) = func_20(l_289, (g_177.f8 != 0xE27AL), ((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*g_8) = 1L) && (((safe_rshift_func_int16_t_s_u(((!func_32(((*l_298) = &l_245), (safe_rshift_func_int8_t_s_u(0x68L, func_36(l_301, ((*g_279) = func_36(g_240, (*g_279), l_302, g_99.f5)), g_99.f5, l_303))))) || 0x82AA6F4FL), 4)) >= l_304) && (*l_289))), (*l_289))), g_213)) ^ g_213), 0)) <= p_12), p_12, (*l_289)))));

            ;
            ;
            ;
        }
        else
        {
            int **l_307 = &g_56;
            (*p_11) = func_43(p_12, p_12);


            (*l_307) = &g_9;

            ;
            l_308 = &g_52;
        }

        ;
        ;
        ;
    }

    ;
lbl_314:
    (*l_308) = ((((p_12 & ((*g_8) = func_17(&l_245, p_11))) != l_245) != (((*l_312) = (safe_lshift_func_uint8_t_u_s(255UL, ((l_252 = &p_12) == g_311)))) || ((l_245 < (*g_279)) ^ g_207.f1))) > l_245);

    ;
    ;
    (*l_315) = &g_9;

    ;
    return &g_53;


}







static short func_13(int * p_14, int * p_15)
{
    unsigned short l_31 = 8UL;
    int *l_35 = &g_9;
    unsigned l_130 = 0xC4D3BBE6L;
    unsigned long long l_216 = 0xBD94EE24373CAA1ALL;
    struct S0 *l_225 = &g_99;
    int **l_230 = &l_35;
    if ((*g_8))
    {
        long long l_46 = 0x0BFE7374489B467BLL;
        unsigned *l_129 = &g_99.f5;
        int *l_217 = &g_53;
        int **l_218 = (void*)0;
        int **l_219 = &g_56;
        struct S0 ***l_222 = &g_220;
        (*l_217) = (l_216 = ((*p_14) = func_17(&g_9, func_20(p_14, g_9, (func_26(l_31, (func_32(l_35, (func_36(((*l_129) = (g_9 < (safe_sub_func_int32_t_s_s((*p_14), func_43(l_46, (*l_35)))))), (*l_35), l_130, l_46) ^ g_99.f8)) | 0xCE2EL), p_15, &g_9) & g_166), g_9, (*l_35)))));

        ;
        (*l_219) = l_35;

        ;
        (*l_222) = g_220;
        (**g_220) = (**g_220);
    }
    else
    {
        int **l_223 = &l_35;
        (*l_223) = l_35;
    }
    (*g_8) = func_32(p_14, (*l_35));

    ;
    if (g_99.f8)
        goto lbl_224;
lbl_224:
    (*g_8) = (*g_56);
    (*l_230) = func_20(&g_9, (((l_225 == (*g_220)) != (*l_35)) & g_174), (*l_35), (g_213 = ((*l_35) == (safe_rshift_func_int8_t_s_u((*l_35), ((safe_mod_func_int8_t_s_s(((*l_35) || (*l_35)), 0x18L)) < g_53))))), g_76.f7);

    ;
    return (*l_35);
}







static int func_17(int * p_18, int * p_19)
{
    struct S0 *l_208 = &g_76;
    int l_211 = 0L;
    unsigned char *l_212 = &g_213;
    int *l_214 = &g_53;
    int **l_215 = &l_214;
    (*l_208) = g_207;
    (*l_215) = func_20(&g_57, ((func_26(((safe_rshift_func_int16_t_s_u(l_211, g_127.f5)) | func_32(&l_211, l_211)), ((*l_212) = ((void*)0 == p_19)), p_19, l_214) >= g_166) > g_70), g_207.f5, g_70, g_207.f3);

    ;
    ;
    return (*p_19);
}







static int * func_20(int * p_21, short p_22, short p_23, unsigned char p_24, unsigned short p_25)
{
    struct S0 *l_205 = &g_76;
    int **l_206 = &g_56;
    (*l_205) = g_99;
    p_21 = ((*l_206) = (void*)0);

    ;
    ;
    (*l_206) = (*l_206);
    return &g_9;


}







static unsigned short func_26(unsigned long long p_27, unsigned char p_28, int * p_29, int * p_30)
{
    unsigned long long **l_146 = (void*)0;
    int l_150 = 1L;
    int l_151 = 0L;
    unsigned *l_199 = &g_76.f5;
    unsigned **l_198 = &l_199;
    unsigned ***l_200 = &l_198;
    int **l_201 = &g_56;
    int *l_203 = &l_150;
    int **l_202 = &l_203;
    int l_204 = 0xB8F03842L;
    for (g_67 = 2; (g_67 < 30); g_67++)
    {
        int **l_191 = &g_56;
        int *l_193 = &g_9;
        int **l_192 = &l_193;
        if (((safe_add_func_int64_t_s_s(((void*)0 == l_146), (p_28 >= p_28))) != p_28))
        {
            int *l_147 = &g_57;
            (*l_147) = (-1L);
        }
        else
        {
            unsigned short l_152 = 0xA6A3L;
            char *l_159 = &g_94;
            int l_160 = 2L;
            short *l_161 = &g_123;
            unsigned short *l_162 = &g_163;
            unsigned short *l_164 = &g_165;
            char *l_170 = &g_171;
            char *l_172 = (void*)0;
            char *l_173 = &g_174;
            if ((*p_29))
                break;
            if ((*p_29))
                break;
            g_52 = (!((safe_add_func_uint16_t_u_u(g_57, (l_150 & (l_152 = (l_151 = 0xB5371582L))))) | (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(l_150, (safe_lshift_func_int8_t_s_s(((*l_159) = g_76.f1), (l_160 & ((*l_164) = ((*l_162) = (p_28 >= ((*l_161) = g_76.f9))))))))), func_36(p_28, g_99.f1, p_27, g_9)))));
            if ((g_166 <= (safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(((g_165 = g_127.f3) > (g_94 && p_28)), ((*l_173) = ((*l_170) = func_32(&g_53, p_27)))))))))
            {
                struct S0 *l_176 = (void*)0;
                struct S0 **l_175 = &l_176;
                (*l_175) = &g_76;

                ;
                (*l_176) = g_177;
            }
            else
            {
                unsigned short l_182 = 65535UL;
                unsigned long long *l_185 = &g_67;
                struct S0 *l_189 = &g_76;
                for (l_152 = 24; (l_152 <= 29); l_152++)
                {
                    unsigned l_183 = 0x2EF1F56CL;
                    unsigned *l_184 = &g_99.f5;
                    int l_186 = 0x3BC08C71L;
                    l_186 = ((l_152 == (*g_56)) >= ((safe_lshift_func_int8_t_s_u(((*l_159) = p_27), (1L != ((~l_150) >= (((*l_184) = (l_183 = (l_182 == g_76.f7))) || (l_185 == (void*)0)))))) > p_27));
                    return g_127.f3;
                }
                for (g_94 = (-20); (g_94 <= (-2)); g_94++)
                {
                    struct S0 **l_190 = &l_189;
                    (*l_190) = l_189;
                    (*g_56) = (+0x94422981L);
                }
            }

            ;
        }
        (*l_192) = ((*l_191) = p_30);

        ;
        ;
        for (g_123 = 2; (g_123 == (-15)); g_123 = safe_sub_func_uint64_t_u_u(g_123, 3))
        {
            struct S0 *l_196 = (void*)0;
            struct S0 *l_197 = &g_99;
            (*l_197) = g_76;
            return g_174;
        }
    }
    (*l_200) = l_198;
    (*l_202) = ((*l_201) = &l_150);

    ;
    return l_204;


}







static short func_32(int * p_33, unsigned short p_34)
{
    struct S0 **l_135 = (void*)0;
    unsigned long long ***l_137 = &g_96;
    unsigned long long ****l_136 = &l_137;
    unsigned long long *****l_139 = &g_138;
    int *l_140 = &g_57;
    int **l_141 = &g_56;
    (*l_140) = (safe_mul_func_int16_t_s_s(((l_135 != l_135) >= (l_136 != ((*l_139) = g_138))), g_70));
    (*l_141) = p_33;


    return (**l_141);
}







static unsigned func_36(unsigned p_37, char p_38, unsigned p_39, unsigned p_40)
{
    int *l_131 = (void*)0;
    int *l_132 = &g_53;
    (*l_132) = p_40;
    return g_99.f8;
}







static int func_43(unsigned short p_44, short p_45)
{
    int l_64 = 2L;
    struct S0 *l_92 = &g_76;
    char *l_104 = &g_94;
    for (p_44 = 19; (p_44 <= 31); ++p_44)
    {
        long long l_65 = (-1L);
        int l_79 = 3L;
        int *l_101 = &g_53;
        unsigned long long ***l_119 = &g_96;
        volatile struct S0 *l_128 = &g_127;
        for (p_45 = (-26); (p_45 < 21); p_45 = safe_add_func_int64_t_s_s(p_45, 3))
        {
            int *l_58 = &g_57;
            unsigned long long ****l_120 = &l_119;
            char **l_121 = &l_104;
            short *l_122 = &g_123;
            unsigned *l_126 = &g_76.f5;
            if (g_51)
            {
                int **l_59 = &g_56;
                for (g_53 = 9; (g_53 > 17); g_53++)
                {
                    g_56 = &g_9;

                    ;
                }
                (*l_59) = l_58;

                ;
            }
            else
            {
                unsigned long long *l_66 = &g_67;
                unsigned long long *l_69 = &g_70;
                unsigned long long **l_68 = &l_69;
                unsigned long long *l_72 = &g_70;
                unsigned long long **l_71 = &l_72;
                struct S0 *l_90 = &g_76;
                int **l_102 = &g_56;
                if ((safe_sub_func_uint64_t_u_u((p_44 < ((safe_sub_func_uint8_t_u_u(0xCEL, (l_64 == (+l_65)))) & ((*l_66) = p_45))), (g_70 = (((*l_68) = (void*)0) != ((*l_71) = &g_70))))))
                {
                    int **l_73 = &l_58;
                    (*l_73) = &g_9;

                    ;
                    for (g_67 = 0; (g_67 <= 55); g_67 = safe_add_func_int8_t_s_s(g_67, 9))
                    {
                        struct S0 *l_77 = (void*)0;
                        struct S0 *l_78 = &g_76;
                        (*l_78) = g_76;
                    }
                    l_79 = (p_44 ^ (p_45 >= (4L | l_64)));
                    g_80 = 0x88A3D85AL;
                }
                else
                {
                    struct S0 **l_91 = (void*)0;
                    char *l_93 = &g_94;
                    int **l_100 = &l_58;
                    for (g_67 = 0; (g_67 < 39); g_67 = safe_add_func_uint64_t_u_u(g_67, 5))
                    {
                        struct S0 *l_84 = &g_76;
                        struct S0 **l_83 = &l_84;
                        int **l_85 = &l_58;
                        (*l_83) = &g_76;
                        if ((*g_8))
                            continue;
                        (*l_85) = &g_57;
                    }
                    if ((safe_add_func_int8_t_s_s(((*l_93) = (safe_sub_func_uint64_t_u_u((l_90 != (l_92 = (void*)0)), (*l_58)))), p_44)))
                    {
                        int **l_95 = &l_58;
                        (*l_95) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned long long ***l_97 = &g_96;
                        int **l_98 = &g_56;
                        (*l_97) = g_96;
                        (*l_98) = l_58;

                        ;
                    }

                    ;
                    ;
                    (*l_90) = g_99;
                    l_101 = ((*l_100) = &l_79);

                    ;
                    ;
                }

                ;
                ;
                (*l_102) = l_58;

                ;
            }

            ;
            ;
            l_64 = ((*l_101) = ((!((*l_104) = (safe_unary_minus_func_uint16_t_u((&g_94 == l_104))))) >= (g_76.f1 && p_44)));
            if (((*l_101) = ((p_44 > p_44) | (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_45, 4)) == 18446744073709551607UL), g_99.f4)))))
            {
                struct S0 *l_109 = &g_99;
                struct S0 **l_110 = &l_109;
                struct S0 **l_111 = (void*)0;
                struct S0 **l_112 = &l_92;
                int **l_113 = &l_58;
                (*l_101) = (((*l_110) = l_109) != ((*l_112) = &g_99));

                ;
                (*l_113) = &g_57;

                ;
                (*l_113) = (void*)0;

                ;
            }
            else
            {
                if ((*l_58))
                    break;
            }

            ;
            (*l_101) = (((*l_126) = (safe_sub_func_uint32_t_u_u((+((g_76.f5 >= ((safe_unary_minus_func_int16_t_s((((safe_rshift_func_int16_t_s_s(((*l_122) = (((((*l_120) = l_119) != &g_96) != 4L) | (&g_94 == ((*l_121) = l_104)))), (((safe_mul_func_uint8_t_u_u((p_45 != 0x01L), (*l_101))) | (*g_8)) ^ g_76.f7))) >= (-1L)) <= g_99.f3))) > g_57)) > 1UL)), (*l_101)))) || (*l_101));
        }


        ;
        (*l_128) = g_127;
    }

    ;
    return (*g_8);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_76.f4, "g_76.f4", print_hash_value);
    transparent_crc(g_76.f5, "g_76.f5", print_hash_value);
    transparent_crc(g_76.f6, "g_76.f6", print_hash_value);
    transparent_crc(g_76.f7, "g_76.f7", print_hash_value);
    transparent_crc(g_76.f8, "g_76.f8", print_hash_value);
    transparent_crc(g_76.f9, "g_76.f9", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3, "g_99.f3", print_hash_value);
    transparent_crc(g_99.f4, "g_99.f4", print_hash_value);
    transparent_crc(g_99.f5, "g_99.f5", print_hash_value);
    transparent_crc(g_99.f6, "g_99.f6", print_hash_value);
    transparent_crc(g_99.f7, "g_99.f7", print_hash_value);
    transparent_crc(g_99.f8, "g_99.f8", print_hash_value);
    transparent_crc(g_99.f9, "g_99.f9", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_127.f5, "g_127.f5", print_hash_value);
    transparent_crc(g_127.f6, "g_127.f6", print_hash_value);
    transparent_crc(g_127.f7, "g_127.f7", print_hash_value);
    transparent_crc(g_127.f8, "g_127.f8", print_hash_value);
    transparent_crc(g_127.f9, "g_127.f9", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_177.f0, "g_177.f0", print_hash_value);
    transparent_crc(g_177.f1, "g_177.f1", print_hash_value);
    transparent_crc(g_177.f2, "g_177.f2", print_hash_value);
    transparent_crc(g_177.f3, "g_177.f3", print_hash_value);
    transparent_crc(g_177.f4, "g_177.f4", print_hash_value);
    transparent_crc(g_177.f5, "g_177.f5", print_hash_value);
    transparent_crc(g_177.f6, "g_177.f6", print_hash_value);
    transparent_crc(g_177.f7, "g_177.f7", print_hash_value);
    transparent_crc(g_177.f8, "g_177.f8", print_hash_value);
    transparent_crc(g_177.f9, "g_177.f9", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_207.f2, "g_207.f2", print_hash_value);
    transparent_crc(g_207.f3, "g_207.f3", print_hash_value);
    transparent_crc(g_207.f4, "g_207.f4", print_hash_value);
    transparent_crc(g_207.f5, "g_207.f5", print_hash_value);
    transparent_crc(g_207.f6, "g_207.f6", print_hash_value);
    transparent_crc(g_207.f7, "g_207.f7", print_hash_value);
    transparent_crc(g_207.f8, "g_207.f8", print_hash_value);
    transparent_crc(g_207.f9, "g_207.f9", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_257.f5, "g_257.f5", print_hash_value);
    transparent_crc(g_257.f6, "g_257.f6", print_hash_value);
    transparent_crc(g_257.f7, "g_257.f7", print_hash_value);
    transparent_crc(g_257.f8, "g_257.f8", print_hash_value);
    transparent_crc(g_257.f9, "g_257.f9", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_258.f4, "g_258.f4", print_hash_value);
    transparent_crc(g_258.f5, "g_258.f5", print_hash_value);
    transparent_crc(g_258.f6, "g_258.f6", print_hash_value);
    transparent_crc(g_258.f7, "g_258.f7", print_hash_value);
    transparent_crc(g_258.f8, "g_258.f8", print_hash_value);
    transparent_crc(g_258.f9, "g_258.f9", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_324.f0, "g_324.f0", print_hash_value);
    transparent_crc(g_324.f1, "g_324.f1", print_hash_value);
    transparent_crc(g_324.f2, "g_324.f2", print_hash_value);
    transparent_crc(g_324.f3, "g_324.f3", print_hash_value);
    transparent_crc(g_324.f4, "g_324.f4", print_hash_value);
    transparent_crc(g_324.f5, "g_324.f5", print_hash_value);
    transparent_crc(g_324.f6, "g_324.f6", print_hash_value);
    transparent_crc(g_324.f7, "g_324.f7", print_hash_value);
    transparent_crc(g_324.f8, "g_324.f8", print_hash_value);
    transparent_crc(g_324.f9, "g_324.f9", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_413.f4, "g_413.f4", print_hash_value);
    transparent_crc(g_413.f5, "g_413.f5", print_hash_value);
    transparent_crc(g_413.f6, "g_413.f6", print_hash_value);
    transparent_crc(g_413.f7, "g_413.f7", print_hash_value);
    transparent_crc(g_413.f8, "g_413.f8", print_hash_value);
    transparent_crc(g_413.f9, "g_413.f9", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
