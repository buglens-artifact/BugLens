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
   volatile signed f0 : 20;
   volatile unsigned f1 : 27;
   volatile signed f2 : 18;
   volatile short f3;
   int f4;
   unsigned f5 : 6;
   const int f6;
};

struct S1 {
   volatile unsigned f0 : 17;
   volatile unsigned f1 : 16;
   unsigned : 0;
   signed f2 : 30;
};

struct S2 {
   const unsigned char f0;
   const volatile unsigned short f1;
   const volatile unsigned f2 : 29;
   volatile struct S1 f3;
   const unsigned f4 : 27;
};


static unsigned g_9 = 0xDF7CD95DL;
static struct S0 g_22 = {291,6655,306,0x51AEL,-1L,7,-1L};
static struct S0 **g_47 = (void*)0;
static short g_58 = 0x1837L;
static int *g_78 = (void*)0;
static int ** volatile g_77 = &g_78;
static int g_82 = 8L;
static volatile struct S1 g_84 = {62,154,1818};
static volatile struct S1 g_86 = {29,98,-5007};
static const struct S2 g_87 = {0x9CL,0x97E1L,12765,{193,66,-4127},4106};
static struct S1 g_89 = {268,97,-5529};
static short g_96 = 1L;
static volatile struct S1 g_97 = {101,33,26781};
static unsigned short g_125 = 65535UL;
static struct S0 g_128 = {813,10044,423,-6L,-1L,4,0x16E3A478L};
static const struct S0 *g_127 = &g_128;
static const struct S0 **g_126 = &g_127;
static int g_143 = 0xA25E917AL;
static int ** volatile g_146 = &g_78;
static int ** volatile g_147 = (void*)0;
static int ** volatile g_149 = &g_78;
static volatile struct S1 g_155 = {141,202,19991};
static struct S1 g_159 = {39,253,-9831};
static struct S1 ** volatile g_165 = (void*)0;
static struct S2 g_212 = {0x56L,65535UL,5671,{232,62,609},2811};
static char g_215 = 0x32L;
static const unsigned char g_246 = 0UL;
static unsigned g_250 = 0x73CEC42EL;
static const struct S1 *g_284 = (void*)0;
static struct S2 g_287 = {0x4FL,65526UL,5260,{261,15,-5443},163};
static struct S0 g_301 = {499,3495,-350,0x6ABDL,1L,7,0L};
static int * volatile g_324 = &g_82;
static unsigned char g_335 = 0xB9L;
static unsigned short g_341 = 0x974AL;
static struct S0 *g_363 = &g_301;
static struct S0 * const *g_362 = &g_363;
static struct S0 * const ** const volatile g_361 = &g_362;
static const struct S1 **g_369 = &g_284;
static const struct S1 *** volatile g_368 = &g_369;
static unsigned g_390 = 18446744073709551610UL;
static int **g_397 = (void*)0;
static int *** volatile g_396 = &g_397;
static struct S0 g_416 = {-951,6960,-97,-1L,0xB84948ACL,1,0x224E852BL};
static unsigned short **g_432 = (void*)0;
static int * volatile g_433 = (void*)0;
static const volatile struct S1 g_436 = {282,216,1895};
static int g_439 = 1L;
static unsigned char g_447 = 252UL;
static volatile struct S1 g_456 = {162,32,-6023};
static volatile struct S1 * volatile g_457 = &g_84;
static unsigned g_459 = 4294967292UL;
static unsigned short g_467 = 65535UL;
static struct S1 g_471 = {134,99,-20194};
static char g_490 = 0x3DL;
static char *g_489 = &g_490;
static int * volatile g_517 = &g_439;
static int * volatile g_541 = &g_143;
static volatile struct S1 g_542 = {201,248,2435};
static struct S1 g_547 = {204,151,32525};
static const unsigned g_552 = 0xF187F81EL;
static struct S1 g_618 = {139,0,-25385};
static int ** volatile g_623 = &g_78;
static int ** volatile g_624 = (void*)0;
static int ** volatile g_625 = &g_78;
static int * volatile g_658 = (void*)0;
static int * volatile g_660 = &g_439;



static int func_1(void);
static struct S1 * func_2(unsigned char p_3, unsigned short p_4);
static unsigned char func_5(unsigned char p_6, int p_7);
static const int func_12(struct S0 * p_13, unsigned short p_14, unsigned short p_15, const struct S0 ** p_16, const int p_17);
static struct S0 func_27(unsigned char p_28, unsigned char p_29, char p_30, struct S0 * p_31, const int p_32);
static unsigned char func_33(const struct S1 * p_34, struct S0 * p_35);
static struct S0 * func_37(struct S0 * p_38, struct S0 ** p_39, unsigned p_40);
static struct S0 * func_41(char p_42, char p_43, struct S0 ** p_44);
static unsigned short func_48(struct S0 ** p_49);
static unsigned char func_52(unsigned p_53, const struct S0 ** p_54, unsigned short p_55);
static int func_1(void)
{
    unsigned l_8 = 0xD16652D0L;
    unsigned *l_458 = &g_459;
    unsigned short *l_466 = &g_467;
    struct S1 *l_470 = (void*)0;
    struct S1 *l_472 = (void*)0;
    struct S1 *l_473 = &g_159;
    char *l_480 = &g_215;
    const unsigned char l_493 = 255UL;
    char *l_495 = &g_490;
    char **l_494 = &l_495;
    unsigned *l_496 = &g_390;
    int l_497 = 0x56026958L;
    int *l_511 = (void*)0;
    int **l_510 = &l_511;
    unsigned char l_612 = 2UL;
    int l_640 = 0xDD93878FL;
    struct S2 *l_652 = &g_212;
    struct S2 **l_651 = &l_652;
    struct S2 ***l_650 = &l_651;
    l_470 = func_2(func_5(l_8, g_9), (g_416.f6 , ((((*l_458) = g_301.f5) , g_128.f6) || (safe_sub_func_int32_t_s_s(0x8C82065BL, ((safe_add_func_uint8_t_u_u(g_416.f6, ((l_466 != (void*)0) > 0UL))) > l_8))))));
lbl_628:
    (*l_473) = g_471;
    (*l_473) = (*l_473);
    if ((safe_sub_func_int16_t_s_s((l_497 = (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((*l_480) = (g_89.f2 && (g_128.f1 , g_301.f4))), ((((*l_496) |= (g_287.f0 > (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((g_489 = l_480) != ((*l_494) = ((safe_add_func_int8_t_s_s(g_96, l_493)) , l_480))), (((l_493 < l_8) <= l_8) <= l_493))) >= g_459), g_250)), l_493)), g_22.f5)))) , l_8) && l_8))), l_8))), l_8)))
    {
        unsigned char *l_500 = &g_447;
        unsigned char **l_499 = &l_500;
        unsigned char ***l_498 = &l_499;
        int l_539 = 3L;
        (*g_324) &= (&g_47 != (void*)0);
        (*l_498) = (void*)0;
        for (g_341 = 13; (g_341 != 37); g_341++)
        {
            char l_509 = (-1L);
            const int *l_529 = &g_22.f4;
            unsigned *l_536 = &g_390;
            for (g_459 = (-10); (g_459 == 48); g_459 = safe_add_func_uint16_t_u_u(g_459, 6))
            {
                struct S0 ***l_505 = &g_47;
                unsigned *l_506 = &g_250;
                short l_512 = 8L;
                const unsigned **l_548 = (void*)0;
                const unsigned **l_549 = (void*)0;
                const unsigned *l_551 = &g_552;
                const unsigned **l_550 = &l_551;
                struct S2 *l_554 = &g_287;
                struct S2 **l_553 = &l_554;
                if ((g_128.f0 > 0x4BECL))
                {
                    const short l_513 = 0x6FE8L;
                    int *l_516 = &g_22.f4;
                    (*g_517) = (((*l_516) = (safe_rshift_func_int8_t_s_u(l_509, (((((void*)0 != l_510) <= (l_512 , l_513)) > func_52(l_509, &g_127, (safe_lshift_func_uint8_t_u_u(g_97.f2, 6)))) != l_513)))) , (*g_324));
                }
                else
                {
                    char l_533 = 0x96L;
                    char l_540 = 0x01L;
                    for (g_390 = 0; (g_390 > 59); g_390++)
                    {
                        const char l_528 = 0xFAL;
                        const int **l_530 = &l_529;
                        (*g_541) = (func_12(((safe_add_func_uint16_t_u_u(8UL, (safe_lshift_func_int8_t_s_u((((*l_466) &= (safe_rshift_func_int16_t_s_s(((g_490 |= (((l_528 , ((*l_530) = l_529)) == g_433) == (l_509 >= ((safe_add_func_int8_t_s_s(((*l_480) |= (l_533 == ((safe_div_func_uint32_t_u_u((l_536 != (((*l_500) = (g_128.f6 > (safe_div_func_int16_t_s_s(l_533, g_287.f4)))) , l_506)), l_539)) != l_528))), g_250)) <= g_96)))) ^ l_493), l_509))) > 0x39E1L), 2)))) , (void*)0), l_509, l_540, &g_127, g_335) ^ 4294967295UL);
                        (*l_473) = g_542;
                    }
                }
                (*l_553) = (((l_509 | (safe_mod_func_uint32_t_u_u(l_509, (safe_sub_func_int8_t_s_s((g_547 , (((*l_550) = (g_96 , (l_509 , l_496))) == &g_250)), ((*l_500) = l_509)))))) | g_128.f6) , (void*)0);
            }
        }
    }
    else
    {
        short l_565 = (-5L);
        unsigned short l_583 = 1UL;
        unsigned l_621 = 0x31AE87EEL;
        struct S0 **l_629 = &g_363;
        struct S2 ****l_653 = &l_650;
        struct S2 ***l_655 = &l_651;
        struct S2 ****l_654 = &l_655;
        struct S2 ***l_657 = &l_651;
        struct S2 ****l_656 = &l_657;
        int *l_659 = (void*)0;
        for (g_58 = 0; (g_58 != 7); ++g_58)
        {
            struct S0 *l_559 = &g_301;
            int *l_568 = &g_143;
            const struct S0 **l_569 = &g_127;
            const int *l_649 = &g_301.f4;
            const int **l_648 = &l_649;
            const int ***l_647 = &l_648;
            if ((safe_lshift_func_int8_t_s_u((func_12(l_559, ((g_97.f0 != (safe_unary_minus_func_int8_t_s(((*l_480) = (*g_489))))) , ((safe_lshift_func_uint8_t_u_s((~((((g_212.f3.f1 | (((safe_add_func_int32_t_s_s(l_565, (g_22.f5 = (((void*)0 != &g_459) ^ ((*l_568) &= ((safe_rshift_func_int16_t_s_s(0xFDDAL, l_8)) , 1L)))))) && l_565) > l_565)) , 0x6DD438CAL) || l_565) && l_565)), 4)) & g_125)), g_212.f4, l_569, l_565) | l_565), 5)))
            {
                unsigned short l_582 = 8UL;
                int *l_584 = &g_22.f4;
                int *l_585 = &g_82;
                const struct S0 **l_609 = &g_127;
                (*l_585) &= func_52((*l_568), (((*l_480) = (func_52((((*l_584) = (g_416.f0 > ((*l_568) , (safe_rshift_func_int8_t_s_s((l_565 < (((safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((*l_568), (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((g_87.f4 , (((((l_582 , &g_335) != &l_493) , (-1L)) == g_390) != (*l_568))) <= l_582), (*g_489))) != l_582), g_490)), 5)))) >= l_583) < (*g_489)), g_250)) && 0xD7L) ^ g_96)), (*g_489)))))) , g_287.f3.f0), &g_127, g_128.f5) && l_497)) , &g_127), g_22.f5);
                for (l_582 = (-8); (l_582 <= 13); ++l_582)
                {
                    int l_603 = 0x7B9AF9F0L;
                    struct S2 *l_607 = &g_212;
                    struct S2 **l_606 = &l_607;
                    int *l_608 = &g_143;
                }
                if (func_12(func_37(&g_128, &g_363, g_542.f0), l_583, (*l_568), l_609, l_583))
                {
                    for (g_9 = 0; (g_9 > 52); g_9++)
                    {
                        if (l_612)
                            break;
                    }
                    if ((*l_585))
                        continue;
                    for (g_416.f4 = 0; (g_416.f4 == (-6)); g_416.f4 = safe_sub_func_uint32_t_u_u(g_416.f4, 1))
                    {
                        int **l_615 = &l_568;
                        (*l_615) = &l_497;
                    }
                    for (g_439 = 0; (g_439 == 23); g_439++)
                    {
                        (*l_585) = (*l_568);
                    }
                }
                else
                {
                    int **l_622 = (void*)0;
                    (*l_473) = g_618;
                    for (g_301.f4 = 0; (g_301.f4 < 27); ++g_301.f4)
                    {
                        (*l_568) |= l_621;
                        (*l_568) &= (*g_324);
                    }
                    (*g_623) = l_568;
                    (*g_625) = &l_497;
                }
                for (l_497 = 0; (l_497 <= 14); ++l_497)
                {
                    (*l_585) = 0xE6CB70D4L;
                    if (l_8)
                        goto lbl_628;
                }
            }
            else
            {
                l_629 = (void*)0;
                return g_447;
            }
            (*l_568) = ((!((safe_lshift_func_uint16_t_u_s(l_612, 0)) >= g_416.f5)) > func_52((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((*g_489) < func_52(g_301.f0, (g_126 = (void*)0), (g_143 , (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_640, (*l_568))), (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((((l_565 >= 0x9D32L) ^ 7L) , &l_510) == l_647), (-9L))), (-4L))) >= 0x5E5CL), g_301.f4))))))), l_565)), 1L)), &g_127, (*l_568)));
            (*l_473) = (*g_457);
            if (l_621)
                break;
        }
        (*g_660) = (((*l_656) = ((*l_654) = ((*l_653) = l_650))) != &l_651);
    }
    return l_612;
}







static struct S1 * func_2(unsigned char p_3, unsigned short p_4)
{
    int l_468 = 0xBE4A733FL;
    struct S1 *l_469 = (void*)0;
    l_468 &= p_4;
    return l_469;
}







static unsigned char func_5(unsigned char p_6, int p_7)
{
    struct S0 *l_11 = (void*)0;
    struct S0 **l_10 = &l_11;
    int l_18 = 2L;
    short l_19 = (-1L);
    const struct S0 *l_21 = &g_22;
    const struct S0 **l_20 = &l_21;
    const struct S1 *l_36 = (void*)0;
    struct S0 *l_152 = &g_22;
    struct S0 **l_151 = &l_152;
    int *l_438 = &g_439;
    unsigned char *l_444 = &g_335;
    unsigned char *l_446 = &g_447;
    unsigned char **l_445 = &l_446;
    unsigned short *l_448 = &g_341;
    (*l_10) = (void*)0;
    (*l_438) &= func_12((*l_10), l_18, l_19, l_20, (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((func_27(p_6, func_33(l_36, ((*l_151) = func_37(func_41((g_22.f1 ^ ((safe_rshift_func_uint8_t_u_u((&l_21 != (void*)0), g_22.f5)) >= g_22.f4)), g_22.f5, g_47), &l_11, l_19))), l_19, (*l_10), l_19) , l_19), l_19)), g_301.f6)));
    if ((((*l_448) = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((*l_438), g_287.f4)) | (((*l_444) = (0UL >= (*l_438))) > func_52((&g_246 != ((*l_445) = l_444)), &g_127, g_89.f0))), (*l_438))) & (*l_438))) & (*l_438)))
    {
        short l_449 = 1L;
        (*l_438) = l_449;
        (*l_438) = (g_159.f2 |= (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(0x777AL, 10)) && p_6), 8)), g_301.f2)));
    }
    else
    {
        (*g_457) = g_456;
    }
    return g_212.f3.f0;
}







static const int func_12(struct S0 * p_13, unsigned short p_14, unsigned short p_15, const struct S0 ** p_16, const int p_17)
{
    unsigned l_421 = 0xC548D682L;
    int l_434 = 0xCC5D8070L;
    int *l_435 = &g_143;
    volatile struct S1 *l_437 = &g_97;
    l_434 = (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_22.f1, l_421)), (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((+p_17), (p_15 || ((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((((!p_17) | (((safe_mod_func_int8_t_s_s(((((255UL >= ((+l_421) & (((g_287.f0 , (0L ^ l_421)) , (void*)0) != g_432))) == p_14) , g_341) <= l_421), g_58)) ^ 0xF9L) <= 1L)) > l_421), l_421)), 0)) ^ l_421)))), 15))));
    (*l_435) &= l_434;
    (*l_437) = g_436;
    return (*l_435);
}







static struct S0 func_27(unsigned char p_28, unsigned char p_29, char p_30, struct S0 * p_31, const int p_32)
{
    struct S2 *l_303 = (void*)0;
    struct S2 **l_304 = &l_303;
    const struct S0 *l_305 = &g_301;
    const int l_306 = 0x469B2086L;
    int l_311 = 0x803F65F4L;
    short *l_312 = &g_58;
    int *l_342 = &g_143;
    const struct S1 *l_343 = &g_159;
    int *l_394 = &g_301.f4;
    int ** const l_393 = &l_394;
lbl_379:
    if ((0L ^ ((*l_312) |= ((((*l_304) = l_303) != (void*)0) == (((l_305 != ((*g_126) = p_31)) ^ l_306) < ((safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((l_311 = g_212.f1), ((((g_250 == g_22.f5) || 0xA0F1875FL) , p_30) , g_82))) <= l_306) != 4L), p_30)) != 0xB18B9FEDL))))))
    {
        short l_317 = 0x44E9L;
        unsigned l_320 = 18446744073709551611UL;
        unsigned *l_321 = &g_250;
        int *l_322 = &g_128.f4;
        const char *l_323 = &g_215;
        (*g_324) = (safe_sub_func_uint32_t_u_u(func_52((g_287.f2 == 0UL), &g_127, (safe_lshift_func_int8_t_s_u((((l_317 != g_87.f0) , ((*l_322) = (safe_sub_func_int32_t_s_s(l_306, ((*l_321) &= l_320))))) , (((void*)0 == l_323) || g_89.f2)), 5))), 0x7AC640EFL));
    }
    else
    {
        char *l_329 = (void*)0;
        unsigned *l_330 = (void*)0;
        unsigned *l_331 = &g_9;
        unsigned char *l_334 = &g_335;
        int l_336 = 0x5B3381A5L;
        int l_337 = 8L;
        unsigned short *l_338 = &g_125;
        unsigned short *l_339 = (void*)0;
        unsigned short *l_340 = &g_341;
        l_337 |= (p_29 < ((safe_add_func_int8_t_s_s(p_28, (((*l_331) = (safe_div_func_int32_t_s_s(((l_329 = &g_215) == &g_215), p_28))) , ((*l_334) ^= (safe_lshift_func_int8_t_s_s(g_22.f5, 1)))))) , ((l_336 && (!((*l_305) , g_22.f4))) > l_336)));
        (*g_324) = (p_29 > ((*l_305) , ((*l_340) ^= ((*l_338) |= g_128.f6))));
    }
    (*l_342) = func_48(g_47);
    if ((*l_342))
    {
        unsigned short l_344 = 65533UL;
        const int l_387 = 0x67356F17L;
        int ***l_395 = (void*)0;
        unsigned *l_401 = &g_250;
        if (l_344)
        {
            int *l_349 = &l_311;
            unsigned short *l_364 = &g_341;
            for (l_344 = 1; (l_344 <= 7); l_344 = safe_add_func_uint32_t_u_u(l_344, 6))
            {
                for (g_143 = 0; (g_143 != 23); g_143 = safe_add_func_int16_t_s_s(g_143, 1))
                {
                    if (p_29)
                        break;
                    if (g_87.f0)
                        goto lbl_350;
                }
            }
lbl_350:
            (*l_349) |= ((&g_212 == (*l_304)) != (g_143 && g_287.f3.f1));
            for (p_28 = 26; (p_28 <= 46); ++p_28)
            {
                (*l_349) = (*l_349);
            }
            for (p_29 = (-17); (p_29 < 15); ++p_29)
            {
                struct S0 * const l_360 = &g_301;
                struct S0 * const *l_359 = &l_360;
                int l_377 = 0x07E25A2EL;
                for (g_250 = 0; (g_250 <= 52); g_250 = safe_add_func_int32_t_s_s(g_250, 1))
                {
                    unsigned char l_365 = 1UL;
                    for (g_96 = (-19); (g_96 > 1); g_96++)
                    {
                        (*l_342) &= p_30;
                    }
                    (*g_361) = l_359;
                    (*l_349) = (*l_349);
                    if (((*l_349) = ((0x27L & (((void*)0 != l_364) != (((void*)0 == &g_250) , (65535UL >= (l_365 > func_52((((safe_lshift_func_uint16_t_u_u((p_29 && p_32), g_287.f3.f0)) , p_30) != g_301.f6), &g_127, (*l_349))))))) | 1UL)))
                    {
                        (*g_368) = &g_284;
                        (*l_349) = (safe_sub_func_int8_t_s_s((((safe_div_func_int16_t_s_s((func_48(&g_363) , 0xECF8L), (p_30 | p_32))) == (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint32_t_u_u(l_344, (&g_250 != (((g_212.f4 > p_32) | p_32) , (void*)0)))) , l_344)))) , l_377), l_344));
                    }
                    else
                    {
                        unsigned short l_378 = 1UL;
                        (*l_342) &= (*g_324);
                        if (l_378)
                            break;
                    }
                }
                if (g_212.f4)
                    goto lbl_398;
                if (p_32)
                    goto lbl_379;
            }
        }
        else
        {
            unsigned char l_386 = 0UL;
            unsigned *l_388 = (void*)0;
            unsigned *l_389 = &g_390;
            int *l_391 = &g_82;
            int *l_392 = &l_311;
            (*l_392) = ((*l_391) = (g_301.f0 >= (safe_add_func_uint8_t_u_u(((p_32 , (((*l_389) = (l_344 >= ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_342) = ((0x94L > (p_30 ^ (2L && (l_386 , g_22.f6)))) ^ (65535UL && 1UL))), p_28)) > g_58), (-9L))) | l_387))) , 0x878A97C9L)) >= 0xCD0EAC3AL), l_386))));
        }
lbl_398:
        (*g_396) = l_393;
        (*l_342) = ((safe_add_func_uint32_t_u_u(((*l_401) = p_29), 0x2FAF88E1L)) , (safe_sub_func_int16_t_s_s(1L, (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_28, func_48(&g_363))), (((*l_342) | (safe_add_func_uint32_t_u_u(l_344, (safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(p_32, 65535UL)) ^ g_22.f4), 0))))) , g_287.f4))))));
    }
    else
    {
        const int *l_415 = &g_301.f6;
        const int **l_414 = &l_415;
        (*l_414) = &l_306;
        return g_416;
    }
    return (*l_305);
}







static unsigned char func_33(const struct S1 * p_34, struct S0 * p_35)
{
    struct S0 **l_153 = (void*)0;
    int *l_154 = &g_82;
    volatile struct S1 *l_156 = &g_84;
    short *l_171 = &g_58;
    unsigned char l_244 = 0x41L;
    const int l_251 = 0x25EF8F92L;
    int l_281 = 0x10EFDCEBL;
    struct S0 *l_285 = &g_22;
    int l_286 = 0L;
    unsigned char *l_292 = &l_244;
    unsigned *l_299 = &g_250;
    unsigned *l_300 = &g_9;
    unsigned l_302 = 0xE14EDE75L;
    (*l_154) = func_48(l_153);
    (*l_156) = g_155;
    if ((safe_div_func_uint8_t_u_u(g_89.f1, (*l_154))))
    {
        unsigned short l_162 = 0x90CCL;
        int l_163 = 1L;
        struct S1 *l_164 = &g_89;
        (*l_156) = g_159;
        for (g_82 = (-13); (g_82 != (-2)); ++g_82)
        {
            unsigned short l_180 = 0UL;
            if (l_162)
            {
                struct S1 **l_166 = &l_164;
                int l_172 = 0L;
                unsigned l_179 = 0UL;
                int *l_181 = &g_143;
                l_163 = (*l_154);
                (*l_166) = l_164;
                (*l_181) |= (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((l_171 != (l_172 , &g_96)) | l_162) < (l_163 = (safe_sub_func_uint16_t_u_u(((*l_154) <= (safe_add_func_uint32_t_u_u(4294967295UL, ((void*)0 != g_165)))), (((((((((safe_mod_func_uint8_t_u_u(((void*)0 != &g_125), l_179)) && 0xEB4EL) > 0xBF27L) >= l_180) , (*l_154)) >= l_162) & 0UL) & (*l_154)) > 1L))))), 0x5C2BL)), 0x75L));
            }
            else
            {
                int *l_182 = &l_163;
                (*g_77) = l_182;
                (*l_164) = g_155;
                for (g_58 = (-29); (g_58 != (-8)); g_58++)
                {
                    unsigned short **l_187 = (void*)0;
                    unsigned short *l_189 = &l_180;
                    unsigned short **l_188 = &l_189;
                    int l_194 = 0x5F78CBBDL;
                    l_194 ^= (safe_sub_func_uint16_t_u_u((g_165 != (g_128.f4 , (void*)0)), (((*l_182) || (((*l_188) = &g_125) != (((safe_lshift_func_int16_t_s_u((((*l_154) != ((*l_182) && (safe_lshift_func_int16_t_s_u((*l_154), g_22.f6)))) > (*l_182)), 14)) <= l_162) , (void*)0))) <= l_180)));
                    (*l_182) = 0xFAFE7941L;
                }
            }
            (*l_156) = (*l_156);
        }
    }
    else
    {
        char l_207 = 0x48L;
        int l_216 = 0xA78F6B65L;
        char *l_223 = (void*)0;
        char *l_224 = &g_215;
        char *l_225 = &l_207;
        short l_236 = 0x4B8CL;
        struct S2 *l_275 = &g_212;
        struct S2 **l_274 = &l_275;
        const struct S1 **l_283 = (void*)0;
        for (g_82 = (-7); (g_82 > (-4)); ++g_82)
        {
            int l_201 = 0xFAD20018L;
            unsigned char l_206 = 255UL;
            char l_221 = 0x91L;
            if ((safe_rshift_func_int8_t_s_s(((0x0A552AD8L > (safe_sub_func_uint32_t_u_u(func_52(l_201, &g_127, (safe_mod_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(l_201, l_206)) >= (((void*)0 == &g_78) && (func_52((l_207 & (g_82 , 4294967291UL)), &g_127, g_87.f3.f0) == (*l_154)))) > 0L), 0x7CL))), l_207))) < (*l_154)), l_206)))
            {
                return l_207;
            }
            else
            {
                char *l_213 = &l_207;
                char *l_214 = &g_215;
                int l_219 = 0xC3D3C4ABL;
                int *l_220 = &g_143;
                (*l_220) &= ((*l_154) && (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((*l_214) = ((*l_213) = (0L != (g_212 , 0xF313L)))) != (g_87.f0 != (((g_22.f4 , l_216) , 4L) && (safe_div_func_int32_t_s_s(l_219, g_9))))), g_212.f4)), l_219)));
            }
            if (l_221)
                break;
        }
        if (((safe_unary_minus_func_uint16_t_u(0x0DE7L)) ^ ((*l_225) = ((*l_224) ^= l_207))))
        {
            (*l_154) = (*l_154);
        }
        else
        {
            struct S0 *l_229 = &g_128;
            struct S0 **l_228 = &l_229;
            struct S0 ***l_230 = &l_153;
            int l_235 = 8L;
            unsigned short *l_257 = &g_125;
            int *l_261 = &g_82;
            unsigned short l_280 = 65532UL;
            int **l_282 = &l_154;
            if (((*l_154) = (0xEFL && func_52(l_207, &g_127, (safe_lshift_func_int16_t_s_u((func_48(((*l_230) = l_228)) >= (-1L)), (((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((*l_224) ^= (g_128.f4 && (1L & l_235))), l_235)), l_236)) ^ l_216) == 0UL)))))))
            {
                struct S2 *l_237 = &g_212;
                struct S2 **l_238 = &l_237;
                const struct S0 **l_243 = &g_127;
                unsigned char *l_245 = &l_244;
                unsigned *l_247 = (void*)0;
                unsigned *l_248 = &g_9;
                unsigned *l_249 = &g_250;
                int l_252 = 0x5FF4329AL;
                int *l_253 = &l_216;
                (*l_154) |= l_235;
                (*l_238) = l_237;
                (*l_253) |= ((g_143 ^ (((~(*l_154)) > (0x24DCL <= (safe_rshift_func_uint16_t_u_s((((g_22.f5 ^= ((*l_249) = ((*l_248) = (safe_div_func_int16_t_s_s(((((*l_245) = (func_52(g_97.f1, (g_128.f5 , l_243), l_235) < (l_244 >= l_207))) <= (*l_154)) <= g_246), 3UL))))) <= l_251) < l_252), 2)))) == l_252)) | l_252);
            }
            else
            {
                const unsigned short *l_258 = &g_125;
                int l_259 = (-4L);
                const int *l_264 = &g_82;
                const int **l_263 = &l_264;
                struct S2 **l_277 = (void*)0;
                if (((*l_154) = (safe_unary_minus_func_uint16_t_u(((((safe_add_func_uint16_t_u_u((l_236 && 1L), ((*l_257) = ((**g_126) , (l_257 == l_258))))) , &g_127) != (*l_230)) ^ l_259)))))
                {
                    int * const l_260 = (void*)0;
                    (*l_154) |= l_235;
                    l_261 = l_260;
                    return g_89.f0;
                }
                else
                {
                    const struct S0 **l_262 = (void*)0;
                    const int ***l_265 = &l_263;
                    unsigned char l_266 = 0xF2L;
                    const struct S2 *l_268 = &g_87;
                    const struct S2 **l_267 = &l_268;
                    (*l_154) = ((l_236 < (l_259 & (((func_52(((l_154 != (l_261 = &l_259)) , (*l_154)), l_262, (g_87.f3.f1 != ((((*l_265) = l_263) != (void*)0) >= g_143))) , l_266) < l_207) , g_89.f2))) > g_215);
                    (*l_267) = &g_87;
                    for (g_82 = (-17); (g_82 == 17); g_82 = safe_add_func_int8_t_s_s(g_82, 8))
                    {
                        unsigned char *l_273 = &l_266;
                        struct S2 ***l_276 = &l_274;
                        struct S2 ***l_278 = (void*)0;
                        struct S2 ***l_279 = &l_277;
                        l_281 = (safe_lshift_func_int16_t_s_s((g_155.f1 , (((*l_273) |= g_82) < ((***l_265) > (g_212.f3.f0 || (((*l_276) = l_274) == ((*l_279) = l_277)))))), ((l_280 | (***l_265)) , (-1L))));
                        (*l_263) = &l_216;
                    }
                    (*l_154) = l_216;
                }
            }
            (*l_282) = &l_216;
        }
        (*l_156) = g_212.f3;
        g_284 = p_34;
    }
    (*g_126) = func_37(l_285, &p_35, (((l_286 , g_287) , ((g_143 ^= (safe_lshift_func_int16_t_s_s(((((((((*l_292) = g_128.f4) >= (((((((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((((g_22.f3 != ((*l_300) = ((*l_299) |= g_287.f4))) , g_301) , l_281) & l_302), g_287.f4)) > l_302), g_287.f0)), g_82)) >= l_286) > 0UL) , l_302) | l_302) <= l_251) && 0L)) > g_96) , l_171) == (void*)0) <= g_215) >= g_82), l_251))) != l_281)) > (-7L)));
    return g_128.f3;
}







static struct S0 * func_37(struct S0 * p_38, struct S0 ** p_39, unsigned p_40)
{
    struct S0 *l_150 = (void*)0;
    return l_150;
}







static struct S0 * func_41(char p_42, char p_43, struct S0 ** p_44)
{
    struct S0 *l_51 = &g_22;
    struct S0 **l_50 = &l_51;
    int l_141 = 0xC9291112L;
    int *l_142 = &g_143;
    int *l_144 = (void*)0;
    int *l_145 = &l_141;
    int **l_148 = (void*)0;
    (*l_145) = (func_48(l_50) < (safe_add_func_uint32_t_u_u((p_42 ^ (safe_lshift_func_uint16_t_u_s(p_42, (safe_div_func_int32_t_s_s(((*l_142) ^= (safe_add_func_int8_t_s_s((g_22.f5 > p_42), (((((safe_lshift_func_int8_t_s_u(l_141, 3)) > 4UL) > p_43) | p_42) , l_141)))), 1UL))))), p_42)));
    (*g_146) = &l_141;
    (*g_149) = &l_141;
    return &g_22;
}







static unsigned short func_48(struct S0 ** p_49)
{
    const unsigned l_56 = 0x0CFADBACL;
    short *l_57 = &g_58;
    const struct S0 *l_60 = &g_22;
    const struct S0 **l_59 = &l_60;
    int *l_90 = &g_82;
    unsigned l_101 = 18446744073709551614UL;
    if ((func_52(((l_56 & l_56) ^ ((*l_57) = l_56)), l_59, ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0x80DD333FL, 4294967295UL)), l_56)) , 0x6A09L)) && l_56))
    {
        for (g_9 = 3; (g_9 < 47); ++g_9)
        {
            int *l_81 = &g_82;
            int **l_83 = &g_78;
            volatile struct S1 *l_85 = (void*)0;
            (*l_83) = l_81;
            g_86 = g_84;
            (*g_78) = (-1L);
            if (l_56)
                continue;
        }
    }
    else
    {
        unsigned l_88 = 0x32FD8C04L;
        const struct S0 **l_93 = &l_60;
        int l_104 = 0xC2D20EAEL;
        short l_114 = (-1L);
        if ((g_87 , l_88))
        {
            int **l_91 = &l_90;
            int *l_92 = &g_82;
            const struct S0 **l_94 = (void*)0;
            const struct S0 **l_95 = &l_60;
            volatile struct S1 *l_98 = &g_86;
            (*l_98) = (((g_89 , ((*l_91) = l_90)) != (l_88 , (l_92 = &g_82))) , (((g_84.f0 , ((g_96 = (l_88 || func_52((*l_92), (l_94 = l_93), func_52((*l_90), l_95, l_88)))) ^ (*l_92))) != 0xFFL) , g_97));
            l_104 |= (safe_div_func_int8_t_s_s((((0x25521BE8L != l_101) < (safe_lshift_func_uint16_t_u_u((**l_91), 4))) | ((g_22 , 0UL) , ((*l_57) &= 0L))), g_22.f5));
            return g_22.f5;
        }
        else
        {
            int *l_105 = &l_104;
            int **l_106 = (void*)0;
            int **l_107 = &g_78;
            unsigned short *l_121 = (void*)0;
            unsigned short *l_122 = (void*)0;
            unsigned short *l_123 = (void*)0;
            unsigned short *l_124 = &g_125;
            const int *l_130 = &l_104;
            const int **l_129 = &l_130;
            (*l_107) = l_105;
            if ((((safe_mod_func_int32_t_s_s((**l_107), ((*l_90) &= (**g_77)))) >= (safe_rshift_func_int16_t_s_u(((l_114 = (safe_sub_func_int32_t_s_s((~(((*l_57) = l_56) || (**l_107))), g_22.f4))) == (((void*)0 == l_57) >= (g_22.f4 , l_104))), 5))) && (*l_90)))
            {
                (*l_59) = (*l_59);
            }
            else
            {
                return g_22.f1;
            }
            g_89.f2 ^= ((l_106 = ((**l_107) , (((((*l_57) = ((safe_lshift_func_uint8_t_u_s((func_52((((l_88 >= g_97.f2) && (safe_rshift_func_uint8_t_u_u((*l_90), 7))) != 2L), ((*l_105) , (((**l_107) || (safe_sub_func_int8_t_s_s((g_22.f5 != ((((~((((*l_124) = g_22.f4) || l_114) >= 0x4494L)) , (void*)0) == (void*)0) , (*l_90))), g_87.f4))) , g_126)), l_88) , 0x7EL), (*l_105))) >= (*l_105))) | (*l_90)) >= g_22.f4) , (void*)0))) != l_129);
        }
    }
    return (*l_90);
}







static unsigned char func_52(unsigned p_53, const struct S0 ** p_54, unsigned short p_55)
{
    short l_65 = 1L;
    int *l_72 = (void*)0;
    int l_73 = 0L;
    int **l_74 = (void*)0;
    int **l_75 = (void*)0;
    int **l_76 = &l_72;
    l_73 ^= ((!g_22.f6) == (((((l_65 & (safe_add_func_int16_t_s_s(l_65, l_65))) > ((g_9 == (safe_sub_func_uint8_t_u_u(g_22.f2, (g_22.f4 >= (0L & (safe_rshift_func_uint8_t_u_s(6UL, l_65))))))) == g_22.f6)) , g_22.f0) & 0x484382FDL) != 0x1D02L));
    (*g_77) = ((*l_76) = &l_73);
    (*g_78) = (*g_78);
    (**l_76) = (*g_78);
    return g_22.f3;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_22.f4, "g_22.f4", print_hash_value);
    transparent_crc(g_22.f5, "g_22.f5", print_hash_value);
    transparent_crc(g_22.f6, "g_22.f6", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_87.f2, "g_87.f2", print_hash_value);
    transparent_crc(g_87.f3.f0, "g_87.f3.f0", print_hash_value);
    transparent_crc(g_87.f3.f1, "g_87.f3.f1", print_hash_value);
    transparent_crc(g_87.f3.f2, "g_87.f3.f2", print_hash_value);
    transparent_crc(g_87.f4, "g_87.f4", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_128.f5, "g_128.f5", print_hash_value);
    transparent_crc(g_128.f6, "g_128.f6", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f1, "g_212.f1", print_hash_value);
    transparent_crc(g_212.f2, "g_212.f2", print_hash_value);
    transparent_crc(g_212.f3.f0, "g_212.f3.f0", print_hash_value);
    transparent_crc(g_212.f3.f1, "g_212.f3.f1", print_hash_value);
    transparent_crc(g_212.f3.f2, "g_212.f3.f2", print_hash_value);
    transparent_crc(g_212.f4, "g_212.f4", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_287.f0, "g_287.f0", print_hash_value);
    transparent_crc(g_287.f1, "g_287.f1", print_hash_value);
    transparent_crc(g_287.f2, "g_287.f2", print_hash_value);
    transparent_crc(g_287.f3.f0, "g_287.f3.f0", print_hash_value);
    transparent_crc(g_287.f3.f1, "g_287.f3.f1", print_hash_value);
    transparent_crc(g_287.f3.f2, "g_287.f3.f2", print_hash_value);
    transparent_crc(g_287.f4, "g_287.f4", print_hash_value);
    transparent_crc(g_301.f0, "g_301.f0", print_hash_value);
    transparent_crc(g_301.f1, "g_301.f1", print_hash_value);
    transparent_crc(g_301.f2, "g_301.f2", print_hash_value);
    transparent_crc(g_301.f3, "g_301.f3", print_hash_value);
    transparent_crc(g_301.f4, "g_301.f4", print_hash_value);
    transparent_crc(g_301.f5, "g_301.f5", print_hash_value);
    transparent_crc(g_301.f6, "g_301.f6", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_416.f0, "g_416.f0", print_hash_value);
    transparent_crc(g_416.f1, "g_416.f1", print_hash_value);
    transparent_crc(g_416.f2, "g_416.f2", print_hash_value);
    transparent_crc(g_416.f3, "g_416.f3", print_hash_value);
    transparent_crc(g_416.f4, "g_416.f4", print_hash_value);
    transparent_crc(g_416.f5, "g_416.f5", print_hash_value);
    transparent_crc(g_416.f6, "g_416.f6", print_hash_value);
    transparent_crc(g_436.f0, "g_436.f0", print_hash_value);
    transparent_crc(g_436.f1, "g_436.f1", print_hash_value);
    transparent_crc(g_436.f2, "g_436.f2", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    transparent_crc(g_456.f1, "g_456.f1", print_hash_value);
    transparent_crc(g_456.f2, "g_456.f2", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_471.f0, "g_471.f0", print_hash_value);
    transparent_crc(g_471.f1, "g_471.f1", print_hash_value);
    transparent_crc(g_471.f2, "g_471.f2", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_542.f0, "g_542.f0", print_hash_value);
    transparent_crc(g_542.f1, "g_542.f1", print_hash_value);
    transparent_crc(g_542.f2, "g_542.f2", print_hash_value);
    transparent_crc(g_547.f0, "g_547.f0", print_hash_value);
    transparent_crc(g_547.f1, "g_547.f1", print_hash_value);
    transparent_crc(g_547.f2, "g_547.f2", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_618.f0, "g_618.f0", print_hash_value);
    transparent_crc(g_618.f1, "g_618.f1", print_hash_value);
    transparent_crc(g_618.f2, "g_618.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
