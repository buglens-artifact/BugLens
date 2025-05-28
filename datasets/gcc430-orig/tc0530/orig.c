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
   unsigned char f0;
   int f1;
};

struct S1 {
   short f0;
   volatile long long f1;
   unsigned f2;
   unsigned f3;
};


static volatile int g_2 = 0x12B57E8BL;
static volatile int g_3 = 0xD4914D2EL;
static volatile int g_4 = 0x555B7CEFL;
static volatile int g_5 = 1L;
static int g_6 = 0x96A162C9L;
static int g_9 = 0xD744D028L;
static struct S1 *g_12 = (void*)0;
static unsigned g_13 = 0UL;
static int g_37 = 0L;
static int * volatile g_36 = &g_37;
static const struct S0 g_46 = {0xBCL,0L};
static struct S0 g_60 = {0xD5L,0x7E8F8848L};
static const int * const volatile g_99 = &g_9;
static const int * volatile g_101 = (void*)0;
static struct S0 g_121 = {255UL,-3L};
static struct S0 * volatile g_120 = &g_121;
static int g_136 = 0L;
static struct S1 g_138 = {0L,4L,0UL,6UL};
static struct S1 g_144 = {8L,1L,0UL,18446744073709551608UL};
static struct S1 * const volatile g_145 = &g_138;
static volatile struct S1 g_166 = {0x7285L,-1L,0UL,0UL};
static volatile struct S1 * volatile g_167 = &g_166;
static struct S0 *g_170 = (void*)0;
static struct S0 ** volatile g_169 = &g_170;
static int * volatile g_171 = &g_136;
static struct S1 g_218 = {0x5BF6L,0xD406CBD5F4407CCELL,0x36C4CAD9L,1UL};
static struct S1 g_220 = {0x4026L,1L,18446744073709551606UL,0x1412115AL};
static int g_239 = 1L;
static int * volatile g_254 = &g_239;
static unsigned g_255 = 1UL;
static volatile struct S0 * const g_256 = (void*)0;
static struct S1 g_258 = {-4L,-1L,0x06168A2AL,0x0B260D45L};
static int *g_268 = &g_6;
static int ** volatile g_267 = &g_268;
static int g_273 = (-1L);
static int ** const volatile g_274 = (void*)0;
static struct S0 * volatile g_351 = &g_121;
static int ** volatile g_352 = &g_268;
static struct S1 g_361 = {7L,0x1B92B901C74AD158LL,0x95D608E9L,1UL};
static int * volatile g_364 = &g_239;
static struct S1 g_376 = {0x5689L,0x19BA98011CAAB8DDLL,0xD27568DBL,0UL};
static int ** volatile g_377 = &g_268;
static struct S1 g_409 = {-1L,0xC41481E0D7E1F17ALL,0UL,0UL};
static int ** volatile g_410 = &g_268;
static int ** volatile g_417 = &g_268;
static struct S1 g_419 = {0x4C69L,0x24AD25D5551144C9LL,1UL,0UL};
static int * volatile g_466 = &g_136;
static volatile struct S0 g_486 = {254UL,1L};
static volatile struct S0 *g_485 = &g_486;
static volatile struct S0 **g_484 = &g_485;
static volatile struct S0 ***g_483 = &g_484;
static volatile struct S1 * volatile *g_500 = &g_167;
static volatile struct S1 * volatile ** volatile g_499 = &g_500;
static struct S1 g_502 = {5L,-9L,0xDFC92BCAL,0x1AEED544L};
static struct S1 g_503 = {0L,0x90F8A7A4D2B8BFFCLL,0xACD0A6EEL,0xD6984B96L};
static struct S1 g_515 = {0x69CCL,0x1E15542F66127394LL,6UL,0x60B660F0L};
static struct S1 ** volatile g_520 = (void*)0;
static struct S1 g_548 = {0L,0x3443872AEA804FDCLL,18446744073709551609UL,0x8E080124L};
static struct S1 *g_547 = &g_548;
static int g_555 = (-1L);
static int ** volatile g_559 = &g_268;
static int ** volatile g_571 = &g_268;
static unsigned short g_584 = 0xF15DL;
static int ** volatile g_589 = &g_268;



static const unsigned func_1(void);
static char func_16(unsigned short p_17, int p_18, char p_19, struct S1 * p_20, struct S1 * const p_21);
static short func_24(struct S1 * p_25, struct S1 * p_26);
static struct S1 * func_27(short p_28, long long p_29);
static int func_38(int p_39);
static unsigned func_43(unsigned p_44, const struct S0 p_45);
static int * func_47(unsigned short p_48, int * p_49, struct S1 * p_50);
static int * func_52(unsigned p_53, int p_54);
static short func_68(struct S0 * p_69, int p_70, struct S0 * p_71);
static struct S0 * func_72(long long p_73, unsigned char p_74, unsigned short p_75, unsigned short p_76, struct S1 * p_77);
static const unsigned func_1(void)
{
    int l_545 = 0xA0E59066L;
    int *l_558 = (void*)0;
    const char l_570 = (-1L);
    struct S1 **l_596 = &g_12;
    struct S1 ** const *l_595 = &l_596;
    for (g_6 = 26; (g_6 < 23); --g_6)
    {
        int l_546 = (-6L);
        for (g_9 = 0; (g_9 > (-20)); g_9 = safe_sub_func_uint16_t_u_u(g_9, 1))
        {
            long long l_30 = 0x456574B6046E74A6LL;
            struct S1 *l_418 = &g_419;
            int *l_554 = &g_555;
            short l_572 = (-1L);
            g_12 = g_12;
            g_13 |= g_3;
        }
    }
    (*g_268) = (safe_add_func_uint32_t_u_u(0x769800E8L, (l_595 != &l_596)));
    return l_570;
}







static char func_16(unsigned short p_17, int p_18, char p_19, struct S1 * p_20, struct S1 * const p_21)
{
    unsigned l_553 = 0x99410EB9L;
    for (g_60.f0 = (-19); (g_60.f0 > 9); g_60.f0 = safe_add_func_int16_t_s_s(g_60.f0, 3))
    {
        if ((*g_99))
        {
            (*g_268) = 0L;
        }
        else
        {
            int **l_551 = (void*)0;
            int **l_552 = &g_268;
            (*l_552) = (*g_377);
        }
    }
    return l_553;
}







static short func_24(struct S1 * p_25, struct S1 * p_26)
{
    unsigned short l_420 = 0xE731L;
    struct S0 *l_429 = &g_121;
    int *l_457 = &g_37;
    unsigned char l_471 = 0x34L;
    int l_534 = (-1L);
    if (func_43(l_420, (*g_351)))
    {
        short l_423 = 0x0029L;
        struct S0 *l_433 = &g_121;
        int **l_453 = &g_268;
        (*g_268) |= (*g_171);
        if ((safe_rshift_func_uint16_t_u_s(l_423, 2)))
        {
            const int * volatile **l_424 = (void*)0;
            const int * volatile *l_426 = &g_101;
            const int * volatile **l_425 = &l_426;
            (*l_425) = &g_101;
        }
        else
        {
            struct S0 **l_432 = &l_429;
            int l_434 = 0x908F4F7AL;
            int **l_447 = &g_268;
            unsigned short l_461 = 0UL;
            struct S1 *l_467 = &g_409;
            int *l_474 = &l_434;
            if (((((l_423 && func_68(func_72((((safe_sub_func_uint16_t_u_u(l_434, l_434)) >= (safe_lshift_func_int16_t_s_u(l_434, 1))) | l_434), g_376.f2, l_434, l_434, &g_144), (*g_268), l_433)) && (*g_99)) ^ g_409.f2) | l_420))
            {
                int *l_437 = (void*)0;
                int **l_438 = (void*)0;
                int **l_439 = (void*)0;
                int **l_440 = &l_437;
                (*l_440) = l_437;
                (*g_268) |= (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(g_273, g_166.f1)), (safe_lshift_func_uint16_t_u_u(g_409.f2, 15))));
                (*g_268) = (*g_99);
                (*l_433) = (*g_351);
            }
            else
            {
                unsigned l_450 = 0x55CB79CFL;
                const struct S0 l_454 = {248UL,0L};
                (*g_268) = (l_447 == (void*)0);
                if (((l_420 || (~l_450)) >= ((safe_div_func_int64_t_s_s(func_43(((g_258.f0 > (l_450 < l_423)) | ((**l_447) != ((void*)0 != l_453))), l_454), l_420)) <= g_144.f0)))
                {
                    for (g_273 = 0; (g_273 >= (-8)); --g_273)
                    {
                        (**l_453) = (&l_429 != (void*)0);
                        l_457 = (*l_447);

                        ;
                        (*g_268) &= 0L;
                        if ((*l_457))
                            continue;
                    }

                    ;
                }
                else
                {
                    struct S1 **l_468 = &l_467;
                    for (g_218.f3 = 4; (g_218.f3 > 55); g_218.f3++)
                    {
                        (**l_447) = (safe_unary_minus_func_int8_t_s((**l_453)));
                        (*l_433) = l_454;
                    }
                    (*g_268) = (l_454.f1 || l_461);
                    (*g_466) |= (safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(255UL, l_454.f1)), ((*l_457) & (**l_447))));
                    (*l_468) = l_467;
                }

                ;
                (*l_457) = l_450;
            }

            ;
            (*l_447) = (*g_377);
            (*l_474) |= ((safe_sub_func_int64_t_s_s(((**l_453) ^ l_471), ((g_218.f1 && (**l_453)) && (**l_453)))) ^ (safe_rshift_func_int16_t_s_u(2L, (0L || g_258.f3))));
            (*g_352) = (*g_352);
        }

        ;
    }
    else
    {
        struct S0 **l_488 = (void*)0;
        struct S0 ***l_487 = &l_488;
        int l_505 = 0xFA521C4EL;
        int **l_513 = &l_457;
        int ***l_512 = &l_513;
        for (l_471 = 19; (l_471 <= 45); l_471 = safe_add_func_int64_t_s_s(l_471, 9))
        {
            unsigned l_489 = 0x6A57F744L;
            for (g_361.f0 = 0; (g_361.f0 >= (-28)); g_361.f0--)
            {
                char l_490 = 0L;
                struct S0 *l_501 = &g_60;
                (*l_457) ^= ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_361.f1, (g_483 == l_487))), l_489)) >= l_490);
                if (l_489)
                    break;
                if ((safe_sub_func_uint16_t_u_u(((l_490 >= ((safe_rshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((void*)0 == &l_457), ((**g_417) > ((0x821C09D9L || l_490) <= (*l_457))))), 1)) >= ((~(safe_rshift_func_uint16_t_u_u(0x212FL, 6))) < (!g_138.f3)))) & 0xF0CFL), (*l_457))))
                {
                    (*g_268) = (l_490 & l_489);
                    (*g_499) = &g_167;
                    (*l_457) ^= l_489;
                }
                else
                {
                    unsigned l_504 = 2UL;
                    struct S1 *l_514 = &g_515;
                    int *l_519 = &l_505;
                    g_503 = g_502;
                    (**l_512) = func_52((((~0x09C3397EL) != func_68(func_72(l_504, l_505, (safe_mul_func_uint8_t_u_u(0x01L, (l_505 < (*l_457)))), (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((g_409.f1 | 9L) > (l_512 != (void*)0)), l_504)), l_504)), l_514), (*g_268), &g_60)) ^ 0x0C40EB8F3C7403A0LL), g_220.f2);


                    ;
                    if (l_489)
                    {
                        return g_255;
                    }
                    else
                    {
                        char l_518 = (-4L);
                        (*g_268) = (*l_457);
                        l_518 ^= ((~0x44ECC76CC31A9D30LL) == (safe_add_func_int64_t_s_s(((*l_457) == (0xF0L < g_60.f0)), (*l_457))));
                        (*l_513) = func_47(l_504, l_519, p_25);
                    }
                    p_26 = p_26;
                }
                for (g_258.f3 = (-6); (g_258.f3 >= 52); g_258.f3++)
                {
                    char l_523 = 0x64L;
                    (*l_457) &= (l_523 || g_486.f1);
                    for (g_376.f3 = 0; (g_376.f3 <= 26); g_376.f3++)
                    {
                        unsigned long long l_539 = 0xB146E38B36EF0189LL;
                        l_534 ^= (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(5L, ((*l_457) == ((0x4EL || (&l_513 == (void*)0)) && ((safe_rshift_func_uint16_t_u_u((+(l_490 && g_60.f1)), 4)) ^ g_376.f3))))), (*l_457)));
                        if (l_490)
                            break;
                        (***l_512) = (safe_mul_func_int16_t_s_s(g_409.f0, ((*l_457) || (safe_mod_func_int16_t_s_s(l_539, l_539)))));
                        if ((**g_267))
                            continue;
                    }
                }
            }
            (***l_512) |= (safe_div_func_uint8_t_u_u(((void*)0 != &g_417), 0x17L));
            if ((*g_268))
                break;
        }

        ;
    }

    ;
    ;
    if ((safe_add_func_uint16_t_u_u((0UL == ((1UL > ((*g_499) == &g_12)) & (*l_457))), 2UL)))
    {
        return g_220.f0;
    }
    else
    {
        int **l_544 = &l_457;
        (*l_544) = l_457;
        (*l_544) = (*g_352);

        ;
    }

    ;
    return g_46.f0;
}







static struct S1 * func_27(short p_28, long long p_29)
{
    int l_35 = 8L;
    struct S0 l_313 = {0xBDL,2L};
    int *l_374 = (void*)0;
    struct S1 *l_375 = &g_376;
    if ((((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0L, p_29)), 4)) < g_5) == p_29))
    {
        int l_42 = 0x3AE50714L;
        struct S0 **l_292 = &g_170;
        struct S0 ***l_291 = &l_292;
        struct S1 **l_301 = &g_12;
        unsigned l_320 = 18446744073709551614UL;
        int *l_332 = (void*)0;
        int *l_373 = &g_273;
        (*g_36) &= l_35;
        if (func_38((safe_sub_func_uint8_t_u_u(g_6, l_42))))
        {
            int *l_295 = (void*)0;
            for (g_136 = 10; (g_136 >= (-10)); g_136 = safe_sub_func_uint8_t_u_u(g_136, 2))
            {
                unsigned char l_288 = 0x90L;
                int *l_293 = (void*)0;
                int *l_294 = &g_239;
                int **l_296 = &g_268;
                (*l_294) &= (safe_rshift_func_int16_t_s_u(l_35, ((((safe_sub_func_int32_t_s_s((p_29 >= (safe_rshift_func_uint8_t_u_u(l_288, ((safe_lshift_func_uint8_t_u_s(((l_42 >= (+(g_3 | g_60.f0))) > ((p_28 | (~g_255)) > (((void*)0 != l_291) > g_273))), g_121.f0)) || g_138.f1)))), g_138.f0)) | 0x121CEEE4L) & p_29) & 18446744073709551611UL)));
                (*l_296) = l_295;

                ;
            }


        }
        else
        {
            int l_302 = 1L;
            int *l_303 = (void*)0;
            struct S0 ***l_323 = (void*)0;
            struct S1 **l_333 = &g_12;
            (*g_36) = ((l_42 && g_138.f3) == (safe_lshift_func_uint8_t_u_u((g_255 && (safe_sub_func_uint16_t_u_u((l_301 == (void*)0), (p_28 ^ l_302)))), 0)));
            if ((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_42, ((7UL | (&g_171 != &g_254)) & p_29))), g_220.f2)))
            {
                int **l_308 = &l_303;
                (*l_308) = (void*)0;
                (*l_301) = &g_144;

                ;
                (*l_308) = (*l_308);
            }
            else
            {
                int *l_311 = &g_37;
                int l_334 = 1L;
                struct S0 l_335 = {0UL,2L};
                struct S1 **l_345 = &g_12;
                if (l_42)
                {
                    int *l_312 = &g_239;
                    if (((*g_36) <= (l_311 != (void*)0)))
                    {
                        l_312 = l_311;

                        ;
                    }
                    else
                    {
                        l_313 = l_313;
                    }

                    ;
                    for (g_273 = 0; (g_273 == (-18)); --g_273)
                    {
                        (**l_291) = (*g_169);
                    }
                }
                else
                {
                    if ((&g_274 == (void*)0))
                    {
                        int *l_324 = (void*)0;
                        int **l_325 = &l_311;
                        struct S0 l_336 = {255UL,-1L};
                        (*l_311) &= (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_218.f2, (l_320 & (g_144.f0 != 0x1EFB264947CCC286LL)))), (((safe_div_func_uint32_t_u_u(p_28, g_60.f1)) != ((l_323 == l_323) != l_313.f1)) != 0UL)));
                        (*l_325) = l_324;

                        ;
                        l_334 ^= ((0x31L & (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(g_220.f1, p_28)), 3)) >= ((void*)0 != l_332)) != (l_333 != &g_12)), 4))) <= g_136);
                        l_336 = l_335;
                    }
                    else
                    {
                        char l_350 = 0x95L;
                        (*l_311) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_29, (safe_sub_func_uint32_t_u_u(func_38((safe_mul_func_uint16_t_u_u((l_345 == &g_167), (safe_add_func_uint16_t_u_u(p_29, ((func_43(p_29, (*g_120)) | (safe_rshift_func_uint8_t_u_u(0x3FL, (g_46.f0 != 0UL)))) >= 0x69338E5F94D6FDC2LL)))))), l_350)))), 0xA828L));
                        return &g_220;


                    }

                    ;
                    (*g_351) = l_335;
                }

                ;
                (*g_352) = &l_334;

                ;
                (*g_268) = (*g_99);
            }

            ;
        }

        ;

        ;

        for (g_220.f2 = 29; (g_220.f2 <= 7); g_220.f2 = safe_sub_func_int16_t_s_s(g_220.f2, 1))
        {
            const int *l_355 = (void*)0;
            struct S1 *l_360 = &g_361;
            struct S0 *l_362 = &g_60;
            int *l_363 = (void*)0;
            g_101 = l_355;

            ;
            (*g_364) &= (18446744073709551610UL | (safe_lshift_func_int16_t_s_u((g_218.f2 != (p_29 < g_6)), 1)));
            (*l_362) = (*g_120);
        }
        (*l_373) &= ((safe_add_func_int32_t_s_s(l_313.f0, (6UL ^ 1UL))) < ((safe_mul_func_int16_t_s_s(func_43(g_121.f1, l_313), (safe_sub_func_int64_t_s_s(0xF3346A63ACC88B0BLL, ((g_6 ^ (safe_rshift_func_int16_t_s_s(l_313.f0, 6))) != p_29))))) | 2UL));

        ;
    }
    else
    {
        unsigned l_380 = 0xBDBE4718L;
        int *l_381 = &g_273;
        struct S1 *l_415 = (void*)0;
        (*g_377) = func_47(func_38((*g_99)), l_374, l_375);


        ;
        ;
        (*l_381) |= (safe_sub_func_int64_t_s_s((func_43(p_28, (*g_120)) || (l_380 == (p_29 != 1L))), g_13));
        if ((safe_mul_func_uint8_t_u_u((func_43((safe_sub_func_uint32_t_u_u(0xBFCDF91FL, (*l_381))), l_313) > g_144.f0), (safe_lshift_func_uint8_t_u_s(g_144.f0, (p_29 <= (safe_lshift_func_int8_t_s_u(p_29, g_273))))))))
        {
            int *l_402 = &g_273;
            struct S0 *l_406 = (void*)0;
            struct S1 *l_408 = &g_409;
            const struct S0 *l_414 = &g_121;
            const struct S0 **l_413 = &l_414;
            (*l_381) |= (safe_add_func_uint64_t_u_u(p_29, 0x700DC5EC50204655LL));
            if (p_28)
            {
                (*g_268) &= p_29;
            }
            else
            {
                int *l_403 = &g_239;
                for (g_239 = 0; (g_239 != (-19)); g_239 = safe_sub_func_int16_t_s_s(g_239, 8))
                {
                    unsigned l_407 = 0UL;
                    (*l_402) = (p_28 && (((safe_rshift_func_int8_t_s_s(p_29, (p_29 ^ ((safe_div_func_uint16_t_u_u((safe_mul_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((!((g_220.f2 && (l_402 == l_403)) | ((g_258.f0 && (*l_381)) < (safe_sub_func_uint16_t_u_u((l_406 != &l_313), (*l_402)))))), g_121.f1)), 0L)), p_29)) || p_29)))) || l_407) | p_28));
                    return &g_138;


                }
                (*g_410) = func_47(g_166.f3, l_403, l_408);
                (*l_402) |= (-1L);
            }
            for (g_60.f1 = (-9); (g_60.f1 != 22); g_60.f1 = safe_add_func_int8_t_s_s(g_60.f1, 5))
            {
                (*l_381) ^= (&g_120 != l_413);
            }
            return l_408;


        }
        else
        {
            struct S1 **l_416 = &l_375;
            (*l_416) = l_415;

            ;
            return l_415;


        }
    }

    ;

    ;
    ;
    (*g_417) = func_47((p_29 <= 6UL), l_374, &g_138);
    return l_375;


}







static int func_38(int p_39)
{
    struct S0 *l_271 = &g_121;
    int *l_272 = &g_273;
    int **l_275 = &g_268;
    long long l_278 = 0x2A91C8B06D998AB7LL;
    (*l_272) &= ((func_43(p_39, g_46) && (p_39 <= (l_271 != l_271))) & g_6);

    ;
    (*l_272) = (&l_272 != &l_272);
    (*l_275) = &p_39;

    ;
    if ((safe_add_func_int16_t_s_s((g_138.f1 != l_278), (p_39 >= p_39))))
    {
        (*l_275) = (*l_275);
lbl_279:
        (*g_268) = (*g_254);
    }
    else
    {
        if (g_46.f0)
            goto lbl_279;
    }
    return (*g_36);


}







static unsigned func_43(unsigned p_44, const struct S0 p_45)
{
    unsigned l_51 = 0x904E20EEL;
    struct S1 *l_257 = &g_258;
    int **l_270 = &g_268;
    (*l_270) = func_47(l_51, func_52(g_13, l_51), l_257);

    ;
    return g_220.f3;
}







static int * func_47(unsigned short p_48, int * p_49, struct S1 * p_50)
{
    long long l_265 = 0xAD3DD4C34E27C4DBLL;
    int **l_266 = (void*)0;
    int **l_269 = &g_268;
    (*g_267) = func_52(g_166.f3, (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0x41E0E378A0C2E42FLL && (g_9 & (safe_mod_func_int8_t_s_s((0x60L || g_138.f2), l_265)))), (8UL >= (g_144.f2 || ((p_48 > 0x0C9B8F6F592905C2LL) >= l_265))))), 6)));

    ;
    (*l_269) = (*g_267);
    return (*g_267);


}







static int * func_52(unsigned p_53, int p_54)
{
    struct S1 **l_55 = (void*)0;
    int *l_58 = &g_37;
    struct S0 *l_59 = &g_60;
    l_55 = (void*)0;
    (*l_58) ^= (safe_mul_func_uint8_t_u_u(0x89L, ((((g_12 != (void*)0) == g_9) ^ g_46.f1) <= (4294967295UL <= g_4))));
    (*l_59) = g_46;
    for (p_53 = (-12); (p_53 < 14); ++p_53)
    {
        int l_63 = 0x32038BE4L;
        struct S0 *l_88 = &g_60;
        unsigned l_97 = 0UL;
        struct S1 *l_98 = (void*)0;
        g_255 |= (l_63 || (((((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_68(func_72(g_6, g_3, g_60.f1, ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((g_37 | (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((void*)0 != l_88), g_60.f1)), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(p_53, g_37)), l_97)), g_6)), g_46.f1)) >= g_6)))), (*l_58))), p_54)), p_54)) < 18446744073709551610UL), l_98), g_60.f1, l_59), g_220.f3)), p_54)) == 255UL) & g_46.f1) >= p_53) <= 0UL));
        (*l_58) |= ((g_256 != (*g_169)) ^ g_13);
        if ((*g_171))
            continue;
    }
    return &g_239;


}







static short func_68(struct S0 * p_69, int p_70, struct S0 * p_71)
{
    short l_112 = (-1L);
    struct S0 l_119 = {0xFAL,-9L};
    unsigned l_140 = 0xAB18E11BL;
    const long long l_152 = 0L;
    unsigned char l_153 = 247UL;
    int *l_176 = &g_6;
    int ** const l_175 = &l_176;
    struct S0 **l_244 = (void*)0;
    for (g_60.f1 = 0; (g_60.f1 > 11); g_60.f1 = safe_add_func_uint64_t_u_u(g_60.f1, 7))
    {
        long long l_109 = 0L;
        struct S1 **l_122 = &g_12;
        int *l_123 = &g_37;
        if (p_70)
        {
            char l_113 = 0L;
            int *l_116 = &g_9;
            int **l_117 = &l_116;
            int *l_118 = &g_37;
            (*g_36) = ((0x73L < ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_109, g_9)), (safe_rshift_func_int8_t_s_s((((g_2 ^ (l_112 <= 0L)) | 0xE7EFL) & l_113), (g_37 >= g_37))))) < g_60.f0)) || g_4);
            (*g_36) = (safe_add_func_uint8_t_u_u(l_113, g_60.f1));
            (*l_117) = l_116;
            (*l_118) = 0L;
        }
        else
        {
            (*g_120) = l_119;
        }
        (*l_122) = (void*)0;

        ;
        (*l_123) |= p_70;
    }
    for (g_60.f0 = 0; (g_60.f0 > 18); g_60.f0 = safe_add_func_int8_t_s_s(g_60.f0, 9))
    {
        unsigned long long l_130 = 0xCF288C1B93FB8B7ELL;
        for (g_121.f0 = 25; (g_121.f0 < 6); g_121.f0 = safe_sub_func_uint8_t_u_u(g_121.f0, 7))
        {
            struct S1 **l_139 = &g_12;
            int l_143 = 0L;
            if ((safe_mul_func_int16_t_s_s(l_130, g_60.f0)))
            {
                for (g_37 = 0; (g_37 > (-23)); g_37--)
                {
                    int *l_135 = &g_136;
                    struct S1 *l_137 = &g_138;
                    (*l_135) = (safe_sub_func_int64_t_s_s(g_46.f0, 3L));
                    (*l_135) ^= ((l_137 == (void*)0) && ((-2L) < (l_139 == (void*)0)));
                    return l_140;
                }
                (*g_36) &= (safe_lshift_func_uint8_t_u_s(g_60.f0, ((l_140 < (&l_119 != (void*)0)) | 1L)));
                return l_143;
            }
            else
            {
                return p_70;
            }
        }
        (*g_145) = g_144;
    }
    if ((safe_div_func_uint64_t_u_u(l_119.f1, (safe_mod_func_int32_t_s_s((p_70 && ((((safe_add_func_uint32_t_u_u(4294967288UL, (+(*g_101)))) != p_70) != (l_152 || l_153)) < 0L)), l_140)))))
    {
        int *l_154 = &g_9;
        int **l_155 = &l_154;
        (*l_155) = l_154;
    }
    else
    {
        struct S0 l_156 = {255UL,0x23FB1128L};
        int *l_174 = &g_37;
        (*p_69) = l_156;
        for (l_140 = 0; (l_140 < 37); l_140 = safe_add_func_uint8_t_u_u(l_140, 2))
        {
            unsigned short l_159 = 65527UL;
            volatile int *l_173 = &g_4;
            volatile int **l_172 = &l_173;
            l_159 = 0L;
            for (g_37 = 0; (g_37 > (-13)); g_37--)
            {
                for (l_112 = 0; (l_112 == 4); l_112 = safe_add_func_int32_t_s_s(l_112, 4))
                {
                    for (g_121.f1 = 0; (g_121.f1 > (-20)); g_121.f1--)
                    {
                        struct S1 **l_168 = &g_12;
                        g_101 = &p_70;

                        ;
                        (*g_167) = g_166;
                        (*l_168) = (void*)0;

                        ;
                        (*g_169) = &g_60;

                        ;
                    }
                    (*g_171) = l_156.f0;
                    (*p_71) = (*p_69);
                }

                ;
                return l_112;


            }
            (*l_172) = &g_3;

            ;
        }
        (*l_174) &= (*g_101);
        (*l_174) = (&g_101 == l_175);
    }
    if ((*l_176))
    {
        int *l_177 = &g_37;
        unsigned l_190 = 18446744073709551611UL;
        (*l_177) |= (*g_171);
        (*l_175) = (void*)0;

        ;
        for (l_140 = 0; (l_140 == 33); l_140++)
        {
            return (*l_177);
        }
        for (p_70 = 0; (p_70 > 23); p_70++)
        {
            const int **l_188 = (void*)0;
            for (g_121.f0 = 0; (g_121.f0 == 30); g_121.f0 = safe_add_func_int16_t_s_s(g_121.f0, 8))
            {
                int **l_189 = (void*)0;
                int l_191 = 0x8CD10D83L;
                l_191 &= ((safe_lshift_func_uint8_t_u_s((l_188 == l_189), g_3)) ^ (l_190 >= 255UL));
            }
        }
    }
    else
    {
        unsigned l_243 = 0xC0AFCBF9L;
        for (g_138.f2 = 0; (g_138.f2 < 57); g_138.f2 = safe_add_func_uint8_t_u_u(g_138.f2, 5))
        {
            unsigned long long l_196 = 0x8F595BA468D3B5AALL;
            struct S1 *l_219 = &g_220;
            int **l_246 = &l_176;
            (*l_175) = (void*)0;

            ;
            g_136 |= (*g_36);
            if ((*g_36))
                continue;
            if ((g_46.f0 | (g_46.f0 ^ (g_9 | (p_70 != (safe_div_func_int16_t_s_s(((p_70 < ((0L == l_196) ^ (+(p_70 & ((safe_div_func_uint64_t_u_u(p_70, g_2)) >= 0xF1F56C1A719620DELL))))) <= l_196), g_46.f0)))))))
            {
                char l_204 = 6L;
                struct S1 *l_217 = &g_218;
                const unsigned long long l_221 = 1UL;
                struct S0 **l_228 = &g_170;
                volatile int *l_242 = &g_2;
                for (g_60.f1 = 0; (g_60.f1 == 7); g_60.f1 = safe_add_func_int64_t_s_s(g_60.f1, 8))
                {
                    int *l_203 = &g_37;
                    (*l_203) = 0xC08C7137L;
                }
                (*g_36) |= l_204;
                for (l_119.f0 = 10; (l_119.f0 != 59); l_119.f0++)
                {
                    unsigned short l_207 = 0xDBEEL;
                    int *l_208 = &g_136;
                    (*l_208) = l_207;
                }
                for (g_144.f3 = 0; (g_144.f3 < 48); ++g_144.f3)
                {
                    struct S1 *l_222 = &g_138;
                    int l_237 = (-1L);
                    volatile int *l_241 = &g_2;
                    volatile int **l_240 = &l_241;
                    if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_138.f1, (safe_mod_func_uint64_t_u_u((l_217 == l_219), l_221)))), g_136)))
                    {
                        (*p_69) = (*g_120);
                    }
                    else
                    {
                        struct S0 **l_223 = &g_170;
                        int *l_238 = &g_239;
                        (*l_223) = func_72(p_70, p_70, p_70, p_70, l_222);

                        ;
                        (*l_238) |= (safe_div_func_int64_t_s_s(((1L && (((safe_mul_func_int8_t_s_s((&g_120 == l_228), (safe_div_func_uint16_t_u_u(((*g_171) == p_70), (0xB9BCL & ((safe_mod_func_uint8_t_u_u(g_46.f0, ((!((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_70 || ((p_70 | 255UL) & g_220.f3)), p_70)), l_237)) > 65533UL)) | 0x2E5DFB398794C979LL))) == p_70)))))) | g_60.f0) != g_220.f0)) >= (-5L)), g_37));
                        p_70 = (!l_196);
                    }
                    (*l_240) = &g_2;
                    l_242 = (*l_240);
                    if (l_243)
                        break;
                }
            }
            else
            {
                struct S0 ***l_245 = &l_244;
                int ***l_247 = &l_246;
                (*l_245) = l_244;
                (*l_247) = l_246;
                (*g_254) = (0xCEABL && ((safe_mul_func_int8_t_s_s((0x65L <= (l_243 & l_243)), (g_6 && 0xE16E7D2BL))) & (safe_lshift_func_uint16_t_u_s((0xACB64CFAL | (1L < ((safe_rshift_func_uint8_t_u_s((g_218.f1 != 1L), 3)) == g_220.f2))), 3))));
            }
        }

        ;
        return p_70;
    }

    ;
    return g_239;
}







static struct S0 * func_72(long long p_73, unsigned char p_74, unsigned short p_75, unsigned short p_76, struct S1 * p_77)
{
    const int * volatile *l_100 = &g_101;
    struct S0 *l_102 = &g_60;
    (*l_100) = g_99;

    ;
    return l_102;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    transparent_crc(g_138.f3, "g_138.f3", print_hash_value);
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_144.f2, "g_144.f2", print_hash_value);
    transparent_crc(g_144.f3, "g_144.f3", print_hash_value);
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_166.f3, "g_166.f3", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_218.f3, "g_218.f3", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_361.f0, "g_361.f0", print_hash_value);
    transparent_crc(g_361.f1, "g_361.f1", print_hash_value);
    transparent_crc(g_361.f2, "g_361.f2", print_hash_value);
    transparent_crc(g_361.f3, "g_361.f3", print_hash_value);
    transparent_crc(g_376.f0, "g_376.f0", print_hash_value);
    transparent_crc(g_376.f1, "g_376.f1", print_hash_value);
    transparent_crc(g_376.f2, "g_376.f2", print_hash_value);
    transparent_crc(g_376.f3, "g_376.f3", print_hash_value);
    transparent_crc(g_409.f0, "g_409.f0", print_hash_value);
    transparent_crc(g_409.f1, "g_409.f1", print_hash_value);
    transparent_crc(g_409.f2, "g_409.f2", print_hash_value);
    transparent_crc(g_409.f3, "g_409.f3", print_hash_value);
    transparent_crc(g_419.f0, "g_419.f0", print_hash_value);
    transparent_crc(g_419.f1, "g_419.f1", print_hash_value);
    transparent_crc(g_419.f2, "g_419.f2", print_hash_value);
    transparent_crc(g_419.f3, "g_419.f3", print_hash_value);
    transparent_crc(g_486.f0, "g_486.f0", print_hash_value);
    transparent_crc(g_486.f1, "g_486.f1", print_hash_value);
    transparent_crc(g_502.f0, "g_502.f0", print_hash_value);
    transparent_crc(g_502.f1, "g_502.f1", print_hash_value);
    transparent_crc(g_502.f2, "g_502.f2", print_hash_value);
    transparent_crc(g_502.f3, "g_502.f3", print_hash_value);
    transparent_crc(g_503.f0, "g_503.f0", print_hash_value);
    transparent_crc(g_503.f1, "g_503.f1", print_hash_value);
    transparent_crc(g_503.f2, "g_503.f2", print_hash_value);
    transparent_crc(g_503.f3, "g_503.f3", print_hash_value);
    transparent_crc(g_515.f0, "g_515.f0", print_hash_value);
    transparent_crc(g_515.f1, "g_515.f1", print_hash_value);
    transparent_crc(g_515.f2, "g_515.f2", print_hash_value);
    transparent_crc(g_515.f3, "g_515.f3", print_hash_value);
    transparent_crc(g_548.f0, "g_548.f0", print_hash_value);
    transparent_crc(g_548.f1, "g_548.f1", print_hash_value);
    transparent_crc(g_548.f2, "g_548.f2", print_hash_value);
    transparent_crc(g_548.f3, "g_548.f3", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
