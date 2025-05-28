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
   const unsigned f0;
   short f1;
   int f2;
   unsigned char f3;
};

union U1 {
   long long f0;
   unsigned long long f1;
};

union U2 {
   long long f0;
};

union U3 {
   unsigned short f0;
   char f1;
   const long long f2;
};

union U4 {
   unsigned f0;
   unsigned long long f1;
   unsigned f2;
};

union U5 {
   long long f0;
   unsigned char f1;
   char * f2;
};

union U6 {
   long long f0;
};

union U7 {
   const unsigned f0;
   unsigned f1;
   const unsigned f2;
};

union U8 {
   char f0;
   long long f1;
};


static unsigned long long g_2 = 0x451D52AA0A5DEC4FLL;
static int g_9 = 6L;
static int g_16 = 1L;
static char g_31 = 0x90L;
static unsigned short g_33 = 0UL;
static unsigned short g_35 = 0xC775L;
static short g_37 = (-9L);
static union U5 g_69 = {0L};
static union U1 g_70 = {-9L};
static union U6 g_82 = {-5L};
static short g_85 = 0xA0A0L;
static unsigned char g_86 = 0xC6L;
static int g_106 = 0x49DF3C4FL;
static unsigned long long g_125 = 0x18FACA3631A0D171LL;
static char g_137 = 4L;
static union U8 g_139 = {0L};
static short *g_144 = &g_85;
static short **g_143 = &g_144;
static union U3 g_147 = {0x90DCL};
static union U3 *g_146 = &g_147;
static union U4 g_151 = {0xCA9E6B2CL};
static int g_162 = 0x5CC3D6C7L;
static int *g_189 = &g_106;
static const long long *g_199 = (void*)0;
static const union U5 g_222 = {0x5E94B15D7F04335ELL};
static union U2 g_236 = {-8L};
static union U5 g_249 = {-6L};
static union U5 *g_277 = (void*)0;
static union U5 **g_276 = &g_277;
static union U5 ***g_275 = &g_276;
static char *g_302 = (void*)0;
static char **g_301 = &g_302;
static union U3 **g_308 = &g_146;
static union U3 ***g_307 = &g_308;
static union U8 *g_316 = &g_139;
static union U8 ** const g_315 = &g_316;
static union U8 ** const *g_314 = &g_315;
static const int * const g_356 = (void*)0;
static const int * const *g_355 = &g_356;
static const int * const **g_354 = &g_355;
static union U7 g_357 = {18446744073709551614UL};
static unsigned short *g_399 = &g_33;
static unsigned short **g_398 = &g_399;
static union U2 *g_404 = (void*)0;
static const union U8 *g_488 = (void*)0;
static const union U8 **g_487 = &g_488;
static const union U8 ***g_486 = &g_487;
static const unsigned short **g_512 = (void*)0;
static const unsigned short ***g_511 = &g_512;
static char *g_515 = &g_139.f0;
static const int g_523 = 0x7B3AEEDCL;
static short ***g_541 = &g_143;
static short ****g_540 = &g_541;
static union U1 *g_558 = &g_70;
static union U1 ** const g_557 = &g_558;
static union U0 g_561 = {0x66A93ED4L};
static int *g_585 = &g_162;
static union U0 g_594 = {0x65AA5542L};
static union U0 *g_593 = &g_594;
static union U4 *g_623 = &g_151;
static union U4 ** const g_622 = &g_623;
static union U3 g_656 = {2UL};
static const int *g_694 = &g_162;
static union U2 **g_751 = (void*)0;
static union U2 ***g_750 = &g_751;
static long long g_762 = 9L;



static union U2 func_1(void);
static unsigned short func_5(char * p_6);
static union U8 func_7(const int p_8);
static short func_20(unsigned p_21, const unsigned char p_22, char * p_23, int * p_24);
static long long func_38(char * p_39, int * p_40, union U3 p_41, char * p_42, union U8 p_43);
static char * func_44(char * p_45, union U8 p_46, union U3 p_47, unsigned char p_48);
static union U3 func_50(unsigned p_51, const short * p_52);
static unsigned char func_55(unsigned short * const p_56, int p_57);
static short func_63(union U5 p_64, unsigned short p_65, union U1 p_66, union U4 p_67, union U1 p_68);
static union U1 func_72(union U1 p_73);
static union U2 func_1(void)
{
    char *l_405 = &g_137;
    int l_428 = 0x65D95A72L;
    unsigned l_437 = 0xE314778DL;
    short ***l_441 = (void*)0;
    unsigned l_443 = 9UL;
    union U4 *l_445 = &g_151;
    union U4 *l_447 = &g_151;
    union U5 **l_475 = &g_277;
    union U0 l_482 = {18446744073709551615UL};
    union U2 l_498 = {0xB7DA53C348E5D819LL};
    unsigned l_506 = 0xDA34E3CBL;
    unsigned l_539 = 0UL;
    unsigned *l_550 = (void*)0;
    unsigned *l_551 = &g_357.f1;
    int **l_552 = &g_189;
    union U2 **l_555 = (void*)0;
    unsigned long long l_556 = 0x8B7C6C937C427C19LL;
    union U3 l_562 = {0xEDAAL};
    union U7 l_564 = {0UL};
    union U1 l_567 = {1L};
    union U8 l_606 = {0x02L};
    int l_624 = 0xA9546319L;
    unsigned long long l_638 = 0xC489D7E116C1635ALL;
    union U3 l_666 = {2UL};
    unsigned char l_706 = 0UL;
    unsigned short *l_722 = &g_656.f0;
    unsigned char l_745 = 251UL;
    unsigned l_746 = 0UL;
    if ((g_2 | (safe_rshift_func_uint16_t_u_u(func_5((l_405 = (func_7((!0x825062D7L)) , (*g_301)))), (!(g_2 && l_428))))))
    {
        union U5 l_438 = {0xCD4801127916FAC9LL};
        short ***l_440 = &g_143;
        short ****l_439 = &l_440;
        int l_442 = 0x424261E4L;
        int *l_444 = &g_9;
        union U4 **l_446 = (void*)0;
        l_442 = ((safe_add_func_uint32_t_u_u(l_428, ((2L | (((void*)0 == &g_302) <= (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*g_144) = (0x2152L > ((**g_398) = l_437))), 1)), (g_151.f0 , ((l_438 , ((*l_439) = &g_143)) == l_441)))), l_438.f1)))) | l_437))) ^ g_125);
        l_442 = l_443;
        (*l_444) = 8L;
        l_447 = l_445;
    }
    else
    {
        int l_458 = 1L;
        int **l_461 = &g_189;
        char *l_481 = &g_31;
        int l_503 = (-7L);
        union U3 l_514 = {0xDB6EL};
        const union U4 * const l_531 = &g_151;
        const union U4 * const *l_530 = &l_531;
        union U8 l_538 = {-1L};
        short *****l_542 = &g_540;
        int *l_543 = &g_9;
        for (g_139.f1 = 22; (g_139.f1 <= (-16)); --g_139.f1)
        {
            unsigned char l_473 = 2UL;
            union U5 **l_476 = &g_277;
            unsigned long long *l_522 = &g_70.f1;
            unsigned long long **l_521 = &l_522;
            union U3 l_532 = {65527UL};
            unsigned short * const l_533 = &g_33;
            const int *l_534 = (void*)0;
            for (g_151.f0 = (-28); (g_151.f0 >= 19); g_151.f0 = safe_add_func_uint16_t_u_u(g_151.f0, 7))
            {
                short **l_452 = &g_144;
                int *l_453 = &l_428;
                (*l_453) = (g_357.f2 | (&g_144 != l_452));
            }
            for (g_147.f0 = 0; (g_147.f0 <= 29); ++g_147.f0)
            {
                union U1 *l_457 = &g_70;
                union U1 **l_456 = &l_457;
                union U7 l_460 = {0xEBB02EE8L};
                int *l_469 = &l_428;
                const unsigned short **l_509 = (void*)0;
                const unsigned short ***l_508 = &l_509;
                union U8 l_517 = {0x41L};
                (*l_456) = &g_70;
                if (l_458)
                {
                    unsigned l_459 = 18446744073709551615UL;
                    int *l_462 = &l_458;
                    (*l_462) = ((l_459 & (l_460 , (l_461 == ((0UL | g_33) , (void*)0)))) & g_162);
                    for (g_37 = 0; (g_37 != (-10)); g_37 = safe_sub_func_uint64_t_u_u(g_37, 1))
                    {
                        union U2 l_465 = {-1L};
                        return l_465;



                                            }
                }
                else
                {
                    union U3 **l_474 = &g_146;
                    for (g_151.f1 = 8; (g_151.f1 != 22); g_151.f1 = safe_add_func_uint32_t_u_u(g_151.f1, 3))
                    {
                        union U4 **l_468 = &l_445;
                        (*l_468) = (void*)0;

                        ;
                        g_189 = l_469;

                        ;
                    }

                                        for (g_85 = 8; (g_85 != (-14)); g_85 = safe_sub_func_int16_t_s_s(g_85, 5))
                    {
                        union U2 **l_472 = &g_404;
                        (*l_472) = &g_236;

                        ;
                        (*l_469) = l_473;
                    }
                    (*l_474) = &g_147;

                    ;
                    (*l_469) = (l_475 == l_476);
                }
                for (g_357.f1 = (-25); (g_357.f1 >= 12); g_357.f1 = safe_add_func_int16_t_s_s(g_357.f1, 8))
                {
                    unsigned short l_497 = 1UL;
                    union U2 **l_500 = &g_404;
                    union U2 ***l_499 = &l_500;
                    for (g_37 = 0; (g_37 <= (-27)); g_37 = safe_sub_func_int64_t_s_s(g_37, 7))
                    {
                        const union U8 ****l_489 = &g_486;
                        int l_496 = (-5L);
                        l_497 = (g_357.f2 == (l_482 , (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u(func_55((*g_398), (((*l_489) = g_486) != &g_487)), ((*g_144) && ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(func_55((*g_398), l_496), g_125)), l_482.f3)), l_473)) >= (-2L)))))))));
                        return l_498;



                                            }
                    (*l_499) = &g_404;
                }

                                for (g_106 = 0; (g_106 >= 2); g_106 = safe_add_func_int8_t_s_s(g_106, 8))
                {
                    unsigned short ***l_513 = &g_398;
                    int l_518 = 0xDE6C499AL;
                    union U3 *l_524 = &l_514;
                    const int **l_535 = &l_534;
                    const int *l_537 = &l_503;
                    const int **l_536 = &l_537;
                    if ((l_503 = (0x040A8ED3L >= 0xC95B495FL)))
                    {
                        char *l_507 = &g_147.f1;
                        const unsigned short ****l_510 = (void*)0;
                        int l_516 = 0x751FD970L;
                        (*l_469) = ((safe_add_func_int32_t_s_s(l_506, func_38(l_507, (((g_511 = l_508) != l_513) , l_469), l_514, g_515, ((l_516 , l_473) , l_517)))) < l_518);

                        ;
                    }
                    else
                    {
                        union U3 **l_525 = (void*)0;
                        union U3 **l_526 = (void*)0;
                        union U3 **l_527 = &g_146;
                        (*l_469) = (((g_106 & (l_521 == (void*)0)) > l_473) && g_137);
                        (*l_469) = g_523;
                        (*l_527) = l_524;

                        ;
                        if (l_482.f1)
                            break;
                    }
                    (*l_469) = (((*l_533) = ((safe_rshift_func_uint8_t_u_u((l_473 | (g_69.f0 & func_55((((l_530 == (void*)0) , func_38((*g_301), &g_16, l_532, l_481, (***g_314))) , l_533), l_518))), 2)) == l_518)) >= (*l_469));
                    (*l_536) = ((*l_535) = l_534);

                    ;
                }


            }

                    }

                ;
        ;
        ;

        (*l_461) = (*l_461);
        (*l_543) = ((l_443 | l_482.f2) <= 0x50L);
    }


    ;
    ;
    ;
    ;
    ;

    if ((l_556 = (((l_482 , g_82) , (safe_add_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((l_482.f3 || 3L), (safe_sub_func_uint64_t_u_u(((void*)0 == l_555), 0x20071BE5E8C925E9LL)))), (-10L))), l_482.f0))) == l_482.f3)))
    {
        union U6 l_563 = {0x38B26566AD81E4E7LL};
        union U4 l_566 = {1UL};
        int l_569 = 0xD1C910E2L;
        union U3 l_613 = {0UL};
        const unsigned l_621 = 0x121423A2L;
        union U2 l_626 = {0x3CE371D4667D3ACELL};
        const union U6 *l_644 = &l_563;
        char *l_667 = &l_666.f1;
        const int *l_680 = &l_624;
        union U0 l_723 = {0xC4D4F22AL};
        short l_727 = 4L;
        if (((void*)0 != g_557))
        {
            unsigned short l_565 = 5UL;
            int *l_586 = (void*)0;
            union U0 *l_592 = &l_482;
            union U2 l_607 = {0xAC68E37BBA3F8AABLL};
            long long l_612 = (-1L);
            unsigned l_625 = 1UL;
            union U2 **l_627 = &g_404;
            union U2 ***l_628 = &l_555;
            if (((safe_add_func_int8_t_s_s((g_561 , (+(l_562 , (l_563 , (l_565 == l_566.f0))))), l_565)) <= l_565))
            {
                unsigned char l_568 = 0x69L;
                union U3 *l_601 = (void*)0;
                int *l_604 = (void*)0;
                int l_614 = 0x7FFBDEC2L;
                l_568 = g_162;
                if (l_565)
                {
                    int *l_584 = &g_162;
                    l_569 = 0x570CD389L;
                    for (l_568 = 0; (l_568 >= 3); ++l_568)
                    {
                        union U5 **l_572 = &g_277;
                        int l_573 = 0x04B572D1L;
                        union U2 **l_582 = &g_404;
                        unsigned char *l_583 = &g_86;
                        (*g_275) = l_572;
                        (*l_584) = ((***g_541) && 8UL);
                        (*l_552) = g_585;

                        ;
                    }

                    ;
                    l_569 = (*l_584);
                    (*l_552) = l_586;

                    ;
                }
                else
                {
                    char *l_589 = &g_31;
                    for (l_563.f0 = (-24); (l_563.f0 == 29); l_563.f0 = safe_add_func_uint64_t_u_u(l_563.f0, 5))
                    {
                        l_428 = l_565;
                    }
                }
                for (g_151.f2 = 0; (g_151.f2 > 33); ++g_151.f2)
                {
                    g_593 = l_592;

                    ;
                    if (l_566.f2)
                        continue;
                }

                                ;
                if (l_568)
                {
                    for (g_139.f1 = 0; (g_139.f1 != (-6)); --g_139.f1)
                    {
                        const int *l_598 = &g_594.f2;
                        const int **l_597 = &l_598;
                        (*l_597) = (**g_354);

                        ;
                    }

                                        return g_236;



                                    }
                else
                {
                    const int *l_600 = &l_569;
                    const int **l_599 = &l_600;
                    long long *l_620 = &l_563.f0;
                    (*l_599) = (**g_354);

                    ;
                    if ((*g_585))
                    {
                        int *l_605 = &g_106;
                        g_146 = l_601;

                        ;
                        (*g_585) = (safe_mod_func_int32_t_s_s((((0xDE4C4FB0L < (l_604 == l_605)) < ((g_82 , l_606) , (g_357.f1 >= (+l_563.f0)))) || (((*l_605) = (-2L)) | g_594.f3)), l_566.f0));
                    }
                    else
                    {
                        union U5 l_615 = {0L};
                        union U1 l_616 = {0L};
                        char l_617 = 0x9BL;
                        int l_618 = 0xBCF1EEADL;
                        union U2 l_619 = {0xC003F7EF4C9E24B4LL};
                        (*g_585) = ((l_614 = (l_607 , (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((*g_515) <= (*g_515)), (l_612 != (((g_357.f1 , l_613) , g_16) >= g_33)))), 1)))) <= (l_618 = l_617));
                        return l_619;



                                            }

                    ;
                    (*g_585) = ((18446744073709551606UL == ((*l_620) = l_566.f2)) && ((g_82 , l_621) && 0xA22FAFF6640F26BCLL));
                    (*g_557) = (*g_557);
                }

                ;
            }
            else
            {
                (*g_585) = ((l_624 = (g_622 == &g_623)) ^ l_625);
                return l_626;


                            }

            ;
                        ;
            (*l_628) = l_627;

            ;
            (*g_585) = l_621;
            (*g_557) = (*g_557);
        }
        else
        {
            const short l_629 = 0xF35FL;
            union U3 l_639 = {65535UL};
            char *l_640 = &g_139.f0;
            union U8 l_641 = {-9L};
            const union U6 *l_642 = &l_563;
            const unsigned *l_646 = (void*)0;
            union U4 *l_648 = &g_151;
            int l_657 = 0x8D41E633L;
            unsigned short ***l_662 = &g_398;
            unsigned short ****l_661 = &l_662;
            union U6 *l_665 = &l_563;
            unsigned char l_705 = 0x0AL;
            union U1 *l_744 = &g_70;
            unsigned long long l_756 = 0xEA3C903EC40709C0LL;
            (*g_585) = l_629;
            if (((!(((***g_541) >= (safe_sub_func_uint32_t_u_u((!((+(0xB6E3D42A87E9874ALL >= func_38((*g_301), &g_106, l_613, l_640, l_641))) <= l_566.f2)), l_613.f0))) != g_137)) , 6L))
            {
                const union U6 **l_643 = (void*)0;
                unsigned *l_645 = &l_506;
                const unsigned **l_647 = &l_646;
                l_644 = l_642;
                l_642 = &g_82;

                ;
                (*g_585) = (l_645 != ((*l_647) = l_646));
            }
            else
            {
                int l_649 = 0xBA9D0971L;
                int *l_658 = &l_657;
                (*g_585) = 0x0FD44119L;
                (*g_622) = l_648;
                l_657 = (l_649 >= (((***g_541) & ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(l_649, (safe_rshift_func_uint16_t_u_u((((*g_515) && (g_147.f1 = (*g_515))) | l_649), func_38(l_640, &g_16, (l_606 , g_656), (*g_301), l_641))))) , g_561.f0), l_639.f1)) , (-4L))) ^ 0xCFB9L));
                (*l_552) = l_658;

                ;
            }

            ;
            ;
            if ((l_562 , l_657))
            {
                long long l_670 = 4L;
                union U6 *l_673 = &g_82;
                for (g_594.f3 = 0; (g_594.f3 >= 23); g_594.f3 = safe_add_func_int16_t_s_s(g_594.f3, 3))
                {
                    (*g_585) = (l_670 , 0xC4E1ECC3L);
                }

                for (l_428 = 0; (l_428 <= (-1)); l_428 = safe_sub_func_uint8_t_u_u(l_428, 1))
                {
                    union U6 **l_674 = &l_673;
                    if ((*g_585))
                        break;
                    (*l_674) = l_673;
                }
                for (g_357.f1 = 0; (g_357.f1 == 11); g_357.f1 = safe_add_func_uint8_t_u_u(g_357.f1, 7))
                {
                    union U6 **l_677 = &l_665;
                    int l_682 = 0xEC4B038BL;
                    unsigned long long *l_685 = &g_70.f1;
                    union U3 l_686 = {7UL};
                    char *l_687 = &g_31;
                    (*g_585) = 0x2E2933A2L;
                    (*l_677) = (void*)0;

                    ;
                    for (g_31 = 0; (g_31 == 6); g_31 = safe_add_func_uint16_t_u_u(g_31, 2))
                    {
                        const int **l_681 = &l_680;
                        (*l_681) = l_680;
                        if ((*g_585))
                            continue;
                        (*g_585) = l_682;
                    }
                    (*g_585) = ((safe_mod_func_uint64_t_u_u(((*l_685) = g_357.f2), func_38((*g_301), &g_9, l_686, l_687, (*g_316)))) < g_162);

                }

                                ;
            }
            else
            {
                int *l_691 = &l_657;
                union U2 l_695 = {1L};
                union U5 l_698 = {0x15C53CA297EF9A7DLL};
                unsigned long long *l_726 = &g_151.f1;
                unsigned long long *l_728 = &l_638;
                union U3 l_739 = {0xC8F1L};
                for (g_561.f2 = 0; (g_561.f2 == (-20)); g_561.f2--)
                {
                    char l_690 = 0xC9L;
                    unsigned short * const l_699 = &l_639.f0;
                    unsigned short **l_700 = &g_399;
                    unsigned l_709 = 0x3081BE3DL;
                    if (l_629)
                    {
                        (*g_585) = l_639.f0;
                        if (l_690)
                            break;
                        (*l_552) = l_691;

                        ;
                    }
                    else
                    {
                        const int **l_692 = (void*)0;
                        const int **l_693 = (void*)0;
                        (*g_585) = l_690;
                        g_694 = (**g_354);

                        ;
                    }
                    (*l_691) = (((l_695 , (safe_rshift_func_int16_t_s_s((l_698 , func_55(((*l_700) = l_699), (safe_add_func_int32_t_s_s(0L, ((g_249.f1 , l_690) < (l_705 != (*l_691))))))), 7))) >= g_137) != g_35);

                    ;
                    (*l_691) = (*l_691);
                    if (l_706)
                    {
                        (*g_585) = l_690;
                        (*l_691) = ((safe_mod_func_int16_t_s_s(((***g_541) = l_709), (safe_unary_minus_func_int16_t_s(l_705)))) | 0x6B60L);
                        (*l_691) = ((void*)0 != (*g_557));
                    }
                    else
                    {
                        const int **l_711 = &l_680;
                        (*l_711) = (*g_355);

                        ;
                        return l_695;



                                            }
                }

                ;
                                ;
                (*l_691) = l_641.f0;
                if (((safe_rshift_func_uint8_t_u_u((((*l_640) = ((*l_667) = ((*l_680) >= (safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((*g_541) == (void*)0), ((safe_div_func_uint64_t_u_u((((((*l_728) = (safe_sub_func_int8_t_s_s((((*g_398) = (*g_398)) != l_722), ((l_723 , (l_639.f0 && ((*l_726) = (safe_rshift_func_uint16_t_u_s((l_639.f1 <= (6L & 0xDAL)), (****g_540)))))) <= l_727)))) && 18446744073709551615UL) && (*l_691)) , g_523), 18446744073709551610UL)) ^ l_705))), 1))))) != (*l_680)), 2)) | g_2))
                {
                    short *l_733 = &g_561.f1;
                    short ****l_738 = &l_441;
                    int l_747 = 0L;
                    (*l_691) = (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((*l_733) = ((***g_541) = func_55(l_722, ((**g_486) != (void*)0)))), (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((*l_691) & ((((*g_540) != ((*l_738) = l_441)) , l_739) , (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*g_557) == l_744), 9)), 1)) | l_745) && 0xA4AA9608E5914141LL))) ^ (*l_691)), l_746)), l_747)))) > (*l_680)), l_747));

                                    }
                else
                {
                    const int *l_748 = &l_657;
                    const int **l_749 = &g_694;
                    union U2 ***l_753 = &g_751;
                    union U2 ****l_752 = &l_753;
                    (*l_749) = l_748;

                    ;
                    if (((g_750 != ((*l_752) = (void*)0)) , (*g_585)))
                    {
                        const int **l_754 = &l_680;
                        union U0 **l_755 = &g_593;
                        (*l_754) = (*g_355);

                        ;
                        (*l_755) = &g_594;
                        (*l_691) = l_756;
                        (*l_691) = 0x4563F85DL;
                    }
                    else
                    {
                        char ***l_757 = &g_301;
                        char **l_759 = &g_515;
                        char ***l_758 = &l_759;
                        (*l_691) = (((*g_694) < g_561.f2) == (*g_515));
                        (*l_749) = (*l_749);
                        (*g_622) = (*g_622);
                        (*l_758) = ((*l_757) = &g_302);

                        ;
                    }

                    ;
                    ;
                    (*l_749) = (void*)0;

                    ;
                }

                                                ;
            }

                        ;
                        ;
                        ;
            ;
            for (l_639.f1 = 20; (l_639.f1 >= (-22)); l_639.f1--)
            {
                unsigned short **l_763 = (void*)0;
                unsigned short **l_764 = &l_722;
                int *l_765 = &g_162;
                (*g_585) = (g_762 , func_55(((*l_764) = (*g_398)), (l_562 , (*g_585))));

                ;
                (*l_552) = l_765;

                ;
            }

            ;
                        ;
        }




        ;
                ;
                ;
        ;

    }
    else
    {
        (*g_585) = (*g_694);
    }




    ;
        ;
        ;

    return l_498;



    }







static unsigned short func_5(char * p_6)
{
    union U4 l_406 = {0UL};
    union U4 *l_407 = &g_151;
    union U4 *l_408 = &l_406;
    int **l_409 = (void*)0;
    int **l_410 = &g_189;
    union U3 l_421 = {0xDFDDL};
    union U8 l_422 = {-1L};
    unsigned long long l_423 = 18446744073709551608UL;
    unsigned char *l_424 = &g_249.f1;
    int l_425 = 0xACEC5DDEL;
    int *l_426 = (void*)0;
    int *l_427 = &g_162;
    (*g_189) = (((*l_408) = ((*l_407) = l_406)) , l_406.f2);
    (*l_410) = (void*)0;

    ;
    (*l_427) = (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(l_406.f0, ((*l_424) = (g_147.f1 , ((safe_add_func_int8_t_s_s((((g_70.f0 >= ((*g_398) != (void*)0)) >= (safe_sub_func_uint16_t_u_u(l_406.f2, 65528UL))) <= func_38((*g_301), (*l_410), l_421, p_6, l_422)), l_423)) < 1L))))) != l_425) && 4294967295UL), 1));

    return (*l_427);
}







static union U8 func_7(const int p_8)
{
    int l_19 = 0x46BC2273L;
    union U8 l_49 = {0xCDL};
    int *l_320 = &g_16;
    union U5 l_348 = {0xB8893ACE1D4C389BLL};
    int **l_359 = &l_320;
    int ***l_358 = &l_359;
    union U3 **l_366 = &g_146;
    char *l_367 = &g_147.f1;
    short *l_374 = &g_85;
    union U6 l_387 = {-1L};
    int *l_402 = &g_9;
    for (g_9 = (-28); (g_9 == 17); g_9 = safe_add_func_uint64_t_u_u(g_9, 3))
    {
        int *l_12 = (void*)0;
        int *l_13 = (void*)0;
        int *l_14 = (void*)0;
        int *l_15 = &g_16;
        char *l_30 = &g_31;
        unsigned short *l_32 = &g_33;
        unsigned short *l_34 = &g_35;
        short *l_36 = &g_37;
        union U3 l_318 = {65535UL};
        (*l_15) = 0xB57A67D9L;
    }
    for (g_125 = 0; (g_125 < 14); ++g_125)
    {
        int **l_331 = &g_189;
        unsigned short * const l_344 = &g_35;
        (*l_331) = &g_162;

        ;
        (*l_331) = &g_162;
        for (g_151.f0 = (-26); (g_151.f0 != 4); ++g_151.f0)
        {
            union U8 l_347 = {-8L};
            int * const l_360 = (void*)0;
            for (g_9 = 0; (g_9 <= 15); g_9 = safe_add_func_uint32_t_u_u(g_9, 8))
            {
                short l_343 = 0x89D9L;
                unsigned short * const l_351 = &g_33;
                (**l_331) = 0x052BFA01L;
            }
        }
    }

    ;
    (**l_358) = (((2L > (((safe_rshift_func_int16_t_s_s(((void*)0 != l_366), 5)) | ((g_357 , (g_249.f0 >= (((*l_367) = ((g_137 = p_8) != 254UL)) && (safe_sub_func_uint64_t_u_u(g_147.f1, ((p_8 & g_69.f1) , 0x5BEF1D057D9B5C91LL)))))) && 0x0A4CBC25709750C5LL)) || p_8)) <= 0xC281L) , (void*)0);

        ;
    if ((((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((((*g_143) != l_374) >= ((((g_249.f0 == (~p_8)) && func_55(l_374, p_8)) || ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0x01L, 1)), (*g_144))) > p_8)) > p_8)) != g_249.f1) ^ 0xF0L), p_8)) , 0x4B38L), (**g_143))) < g_357.f1) || p_8))
    {
        union U0 l_384 = {4UL};
        unsigned short *l_392 = &g_147.f0;
        (*g_307) = ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((l_49 , (safe_sub_func_uint32_t_u_u((g_85 != g_125), (p_8 < g_82.f0)))))), ((l_384 , (((safe_mod_func_int8_t_s_s((func_38((*g_301), &g_106, (**l_366), (*g_301), (***g_314)) && g_357.f0), p_8)) != (*g_189)) ^ p_8)) <= (-2L)))) , (void*)0);

        ;
        (*g_189) = (l_387 , (safe_add_func_int8_t_s_s((p_8 , (((safe_rshift_func_int16_t_s_u(p_8, ((*l_392) = p_8))) & (safe_add_func_int16_t_s_s(0x6ECFL, 0L))) != 0xB5L)), p_8)));

            }
    else
    {
        union U1 l_397 = {0x787C15747386AE05LL};
        unsigned short ***l_400 = &g_398;
        union U3 l_401 = {0UL};
        union U2 l_403 = {1L};
        (*g_189) = p_8;
        (*g_189) = (((safe_rshift_func_uint8_t_u_s((func_72(l_397) , p_8), 5)) , ((*l_400) = g_398)) != (l_401 , &g_399));
        (**l_358) = l_402;

        ;
        g_404 = (l_403 , &g_236);

        ;
    }

    ;
    ;
    ;
    return (***g_314);

    }







static short func_20(unsigned p_21, const unsigned char p_22, char * p_23, int * p_24)
{
    union U5 l_321 = {0xFA4616B117CF7601LL};
    union U1 l_322 = {0x37623F314BEDBEB4LL};
    union U4 l_323 = {0xB608A64FL};
    char l_324 = (-4L);
    const short *l_325 = (void*)0;
    const short **l_326 = (void*)0;
    const short **l_327 = &l_325;
    int **l_328 = &g_189;
    (*g_189) = ((*p_24) = (func_63(l_321, l_321.f1, l_322, l_323, l_322) , (-1L)));

        (*p_24) = l_321.f0;
    (*p_24) = func_38(p_23, &g_9, func_50(l_324, ((*l_327) = l_325)), p_23, (*g_316));
    (*l_328) = p_24;

    ;
    return (**g_143);
}







static long long func_38(char * p_39, int * p_40, union U3 p_41, char * p_42, union U8 p_43)
{
    unsigned long long l_319 = 18446744073709551607UL;
    l_319 = (-1L);
    return p_41.f1;
}







static char * func_44(char * p_45, union U8 p_46, union U3 p_47, unsigned char p_48)
{
    int *l_207 = &g_106;
    int *l_208 = &g_106;
    short * const l_253 = (void*)0;
    union U8 **l_267 = (void*)0;
    long long *l_294 = &g_70.f0;
    unsigned long long *l_295 = &g_125;
    union U2 l_298 = {0x728A352BA2A9D10ALL};
    union U5 ** const l_299 = &g_277;
    unsigned short *l_300 = &g_147.f0;
    char **l_303 = &g_302;
    const union U4 l_304 = {0xEE263D41L};
    union U3 ****l_309 = (void*)0;
    union U3 ***l_311 = &g_308;
    union U3 ****l_310 = &l_311;
    int *l_317 = &g_162;
    for (g_139.f0 = 0; (g_139.f0 > 23); g_139.f0 = safe_add_func_int64_t_s_s(g_139.f0, 5))
    {
        long long l_209 = (-8L);
        union U5 **l_219 = (void*)0;
        unsigned short * const l_246 = &g_35;
        int *l_255 = &g_162;
        short ** const *l_258 = &g_143;
        int l_259 = 0L;
        const union U4 l_262 = {4294967295UL};
        l_208 = l_207;
    }
    (*l_208) = ((g_35 = ((*l_300) = ((safe_add_func_int16_t_s_s((*l_207), (safe_unary_minus_func_uint32_t_u((((safe_add_func_int64_t_s_s(0xF71DAF93510A1EBCLL, (g_151.f1 = ((*l_295) = (((*l_294) = (*l_207)) || 0x60CFAABE31B95325LL))))) < (l_208 != l_208)) != ((*l_208) < ((safe_lshift_func_int8_t_s_s((*p_45), 6)) != ((l_298 , l_299) != (void*)0)))))))) | p_47.f1))) < g_85);

    l_303 = g_301;
    (*l_317) = ((g_70.f0 , (void*)0) == ((l_304 , (((safe_div_func_int32_t_s_s((g_82 , ((*l_208) = (((*g_189) == (((*l_208) > (((g_307 == ((*l_310) = &g_308)) , (safe_sub_func_int64_t_s_s(((func_55(&g_35, (*l_207)) != 0UL) == (*g_189)), 18446744073709551613UL))) > g_249.f0)) , g_35)) < (*l_207)))), 9UL)) == 0xB5L) <= l_304.f0)) , g_314));
    return (*g_301);


}







static union U3 func_50(unsigned p_51, const short * p_52)
{
    unsigned short * const l_58 = &g_35;
    unsigned short *l_60 = &g_35;
    unsigned short **l_59 = &l_60;
    union U4 l_71 = {0x7D7132C2L};
    union U1 l_74 = {-1L};
    union U5 l_154 = {1L};
    int *l_161 = &g_106;
    short *l_171 = (void*)0;
    union U6 l_195 = {0x28ABA7F53FFDED0FLL};
    long long *l_198 = &l_154.f0;
    union U5 **l_200 = (void*)0;
    union U5 **l_201 = (void*)0;
    union U5 *l_203 = &g_69;
    union U5 **l_202 = &l_203;
    union U3 l_204 = {0x8941L};
    g_162 = ((*l_161) = (safe_mod_func_uint8_t_u_u(func_55(((*l_59) = l_58), (safe_div_func_uint64_t_u_u((func_63(g_69, ((*l_58) = 65531UL), g_70, l_71, func_72(l_74)) , (func_63(l_154, l_74.f0, g_70, g_151, l_74) >= g_147.f1)), p_51))), 0x0AL)));

        for (g_147.f0 = 0; (g_147.f0 <= 19); g_147.f0++)
    {
        unsigned l_167 = 0xC981C0E1L;
        short *l_170 = (void*)0;
        union U5 l_186 = {0x7C9880E71BFC32D7LL};
        union U4 l_188 = {0x700571A6L};
        if (((*l_161) = ((safe_rshift_func_int8_t_s_u(l_167, 3)) , ((((((l_171 = ((safe_div_func_int32_t_s_s(g_86, 0x1999A739L)) , l_170)) == (*g_143)) == g_147.f1) | (safe_unary_minus_func_int16_t_s(l_167))) != ((safe_sub_func_int16_t_s_s((func_55(&g_35, (l_167 && 0L)) , 0xFF8BL), p_51)) & p_51)) || g_106))))
        {
            union U5 l_185 = {-5L};
            union U1 l_187 = {-9L};
            union U7 l_190 = {0x4AE63F1CL};
            if ((safe_sub_func_uint8_t_u_u(p_51, ((((safe_rshift_func_int16_t_s_u((((7UL && (safe_sub_func_uint64_t_u_u(g_69.f1, g_151.f0))) , (-1L)) == (safe_add_func_uint16_t_u_u((((*l_161) = func_63(l_185, (l_186 , g_70.f0), l_187, l_188, g_70)) , p_51), g_9))), 14)) || p_51) > 0x6598BD18L) > 4294967291UL))))
            {
                if (p_51)
                    break;
                g_189 = l_161;
                if (l_186.f1)
                    break;
            }
            else
            {
                union U1 l_191 = {0x96D85D5641618F1ELL};
                unsigned *l_192 = &l_188.f0;
                (*g_189) = (*g_189);
                (*l_161) = (p_51 < (((*l_192) = (p_51 < (func_63((l_190 , l_185), ((*l_58) = (p_51 | l_187.f1)), l_191, g_151, l_74) < g_31))) >= 4UL));
            }
        }
        else
        {
            unsigned long long *l_196 = &l_188.f1;
            union U1 l_197 = {0xF1C6A60F3683EEDBLL};
            (*l_161) = (safe_mod_func_uint64_t_u_u((l_195 , ((*l_196) = 0x83CBDCB88E399912LL)), func_63(l_154, l_186.f1, l_74, l_71, func_72(l_197))));

                    }
        (*g_189) = (l_198 != g_199);
    }
    (*l_202) = &g_69;
    return l_204;

    }







static unsigned char func_55(unsigned short * const p_56, int p_57)
{
    union U3 **l_156 = &g_146;
    union U3 ***l_155 = &l_156;
    union U3 **l_158 = &g_146;
    union U3 ***l_157 = &l_158;
    union U3 **l_160 = &g_146;
    union U3 ***l_159 = &l_160;
    (*l_159) = ((*l_157) = ((*l_155) = (void*)0));

    ;
    ;
    ;
    return g_139.f0;
}







static short func_63(union U5 p_64, unsigned short p_65, union U1 p_66, union U4 p_67, union U1 p_68)
{
    int *l_80 = &g_9;
    union U2 l_83 = {0x743FD0416CBB4D05LL};
    short l_100 = (-1L);
    int *l_134 = &g_106;
    unsigned long long *l_148 = &g_70.f1;
    union U5 l_149 = {-1L};
    union U5 *l_150 = &l_149;
    for (p_67.f2 = 0; (p_67.f2 <= 2); p_67.f2 = safe_add_func_int32_t_s_s(p_67.f2, 5))
    {
        int **l_81 = &l_80;
        short *l_84 = &g_85;
        unsigned long long l_102 = 0x6680AE02F11925CFLL;
        union U8 *l_138 = &g_139;
        (*l_81) = l_80;
        if (g_31)
            continue;
        if (((g_82 , &p_65) != (((((*l_84) = (l_83 , 0x471FL)) || (**l_81)) , 0x714ABA13L) , (void*)0)))
        {
            int l_99 = (-2L);
            long long *l_101 = &g_82.f0;
            unsigned long long *l_103 = (void*)0;
            unsigned long long *l_104 = &l_102;
            int *l_105 = &g_106;
            g_86 = (*l_80);
            (*l_105) = (((safe_add_func_uint8_t_u_u(g_85, (((safe_mod_func_uint64_t_u_u(((*l_104) = (safe_mod_func_int8_t_s_s((((0xC6L ^ ((safe_add_func_int32_t_s_s((g_85 > g_2), g_2)) == g_69.f1)) ^ ((safe_rshift_func_uint8_t_u_u(g_70.f1, 2)) | (safe_lshift_func_int16_t_s_s((l_99 || (((*l_101) = l_100) | 0x466E1A5BDB26F1A7LL)), 1)))) <= l_102), 0xB7L))), p_64.f1)) , g_69.f1) == 7L))) != 0xDCL) , (*l_80));
        }
        else
        {
            int *l_107 = (void*)0;
            int *l_108 = &g_106;
            union U2 *l_110 = &l_83;
            union U2 **l_109 = &l_110;
            const union U3 l_113 = {1UL};
            union U0 l_120 = {0x3ADA1D09L};
            unsigned short * const l_121 = (void*)0;
            unsigned long long *l_122 = &l_102;
            unsigned long long *l_123 = (void*)0;
            unsigned long long *l_124 = &g_125;
            short ***l_145 = &g_143;
            l_108 = l_107;

            ;
            (*l_109) = &l_83;
            if ((p_68.f1 && ((safe_mod_func_uint16_t_u_u((l_113 , ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_70.f0, ((&g_2 == (void*)0) , (**l_81)))), ((safe_sub_func_int64_t_s_s((-3L), ((*l_124) = (l_120 , ((*l_122) = (((**l_81) , l_121) == &p_65)))))) | g_70.f0))) , 1UL)), 0x9568L)) <= 0xB4BAC794L)))
            {
                if (p_66.f0)
                    break;
            }
            else
            {
                char l_136 = 1L;
                union U3 l_141 = {65535UL};
                if (g_125)
                    break;
                for (g_85 = 25; (g_85 == (-2)); g_85 = safe_sub_func_int16_t_s_s(g_85, 1))
                {
                    unsigned char *l_130 = &g_86;
                    int **l_133 = &l_108;
                    short *l_135 = (void*)0;
                    if (p_66.f0)
                        break;
                    g_106 = ((safe_rshift_func_uint16_t_u_u(g_85, 1)) != ((*l_80) , (((((*l_130) = (**l_81)) >= (safe_div_func_uint16_t_u_u(((*l_80) , ((18446744073709551615UL != ((l_134 = ((*l_133) = &g_106)) == l_80)) != (0xCA432BFDB46CE14ELL <= 8L))), g_9))) && p_65) , (**l_81))));

                    ;
                    g_106 = (((l_136 = p_67.f2) != (**l_133)) | g_82.f0);
                    if ((g_137 ^ p_67.f2))
                    {
                        union U8 **l_140 = &l_138;
                        (**l_133) = (p_67.f2 < (1UL >= 0x65AEC415L));
                        (*l_140) = l_138;
                    }
                    else
                    {
                        unsigned char l_142 = 0x2FL;
                        (**l_133) = ((l_142 = (((*l_138) , l_141) , (253UL ^ g_70.f0))) & (p_65 || (((**l_133) , (**l_133)) <= (**l_81))));
                    }
                }

                ;
            }

            ;
            (*l_145) = g_143;
        }
        (*l_134) = (**l_81);
    }

        g_146 = g_146;
    g_106 = (((*l_150) = (((((*l_148) = p_64.f0) , g_70.f1) == g_82.f0) , l_149)) , ((((*l_80) < (p_64.f0 == (*l_134))) || (g_151 , (safe_mod_func_uint64_t_u_u(p_66.f0, g_31)))) && p_65));

    return (*l_134);
}







static union U1 func_72(union U1 p_73)
{
    int *l_75 = &g_9;
    int **l_76 = (void*)0;
    int **l_77 = &l_75;
    (*l_77) = l_75;
    return p_73;

    }





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_222.f0, "g_222.f0", print_hash_value);
    transparent_crc(g_222.f1, "g_222.f1", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_249.f1, "g_249.f1", print_hash_value);
    transparent_crc(g_357.f0, "g_357.f0", print_hash_value);
    transparent_crc(g_357.f1, "g_357.f1", print_hash_value);
    transparent_crc(g_357.f2, "g_357.f2", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_561.f1, "g_561.f1", print_hash_value);
    transparent_crc(g_561.f3, "g_561.f3", print_hash_value);
    transparent_crc(g_594.f3, "g_594.f3", print_hash_value);
    transparent_crc(g_656.f0, "g_656.f0", print_hash_value);
    transparent_crc(g_656.f1, "g_656.f1", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
