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
   unsigned f0;
   volatile int f1;
   unsigned char f2;
};

union U1 {
   unsigned short f0;
   volatile short f1;
};


static const volatile short g_11 = (-9L);
static const unsigned g_15[6] = {1UL,5UL,1UL,1UL,5UL,1UL};
static unsigned g_33 = 0xFF1EB7E5L;
static int g_70 = 1L;
static int g_75 = 0x4478C2BAL;
static volatile int g_90 = 9L;
static volatile int *g_89 = &g_90;
static int g_94 = 0xFB2EC16DL;
static int g_111 = 0xD7A4D755L;
static unsigned g_133 = 4294967292UL;
static unsigned char g_138 = 0x30L;
static short g_160 = 0x33D0L;
static unsigned char g_162[4][4] = {{0xD5L,0xD5L,0xD5L,0xD5L},{0xD5L,0xD5L,0xD5L,0xD5L},{0xD5L,0xD5L,0xD5L,0xD5L},{0xD5L,0xD5L,0xD5L,0xD5L}};
static union U0 g_179 = {0UL};
static volatile int **g_186 = &g_89;
static volatile int ***g_185 = &g_186;
static unsigned char g_281 = 0UL;
static unsigned g_298 = 2UL;
static char g_304[7][2] = {{0x12L,0x12L},{(-6L),0x12L},{0x12L,(-6L)},{0x12L,0x12L},{(-6L),0x12L},{0x12L,(-6L)},{0x12L,0x12L}};
static unsigned char g_345 = 0x2EL;
static short g_350 = 0xEAEEL;
static unsigned short g_353 = 65535UL;
static union U0 g_363 = {0x5E7A8B45L};
static union U0 g_365 = {1UL};
static union U1 g_367 = {65535UL};
static union U1 * const g_366 = &g_367;
static union U1 g_370 = {0x2493L};
static union U1 g_371 = {0x0FCAL};
static union U1 g_372 = {65535UL};
static union U1 g_373 = {0xAFE7L};
static union U1 g_374[10][1][4] = {{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}},{{{65528UL},{0xE4D0L},{0xE4D0L},{65528UL}}}};
static union U1 g_375 = {65529UL};
static union U1 g_376 = {5UL};
static union U1 g_377 = {0xEBC0L};
static union U1 g_378 = {0x5FA3L};
static union U1 g_379[1] = {{7UL}};
static union U1 g_380 = {5UL};
static union U1 g_381 = {1UL};
static union U1 g_382 = {65534UL};
static union U1 g_383[1] = {{65532UL}};
static union U1 g_384[5][9][5] = {{{{0xA1F0L},{0xFB2DL},{0UL},{65535UL},{65532UL}},{{0x1125L},{0x4120L},{1UL},{65535UL},{0x6710L}},{{65532UL},{0x1371L},{1UL},{0xFB2DL},{0xFB2DL}},{{65529UL},{65535UL},{65529UL},{0xC778L},{4UL}},{{65532UL},{0xA1F0L},{65535UL},{0x1371L},{0xA1F0L}},{{0x1125L},{0x6502L},{65529UL},{0x6502L},{0x1125L}},{{0xA1F0L},{0x1371L},{65535UL},{0xA1F0L},{65532UL}},{{4UL},{0xC778L},{65529UL},{65535UL},{65529UL}},{{0xFB2DL},{0xFB2DL},{1UL},{0x1371L},{65532UL}}},{{{0x6710L},{65535UL},{1UL},{0x4120L},{0x1125L}},{{65532UL},{65535UL},{0UL},{0xFB2DL},{0xA1F0L}},{{4UL},{65535UL},{0x59F0L},{0x6502L},{4UL}},{{0x3895L},{0xFB2DL},{65535UL},{65535UL},{0xFB2DL}},{{0x1125L},{0xC778L},{1UL},{0x6502L},{0x6710L}},{{0xFB2DL},{0x1371L},{0x4CB3L},{0xFB2DL},{65532UL}},{{65529UL},{0x6502L},{65529UL},{0x4120L},{4UL}},{{0xFB2DL},{0xA1F0L},{0UL},{0x1371L},{0x3895L}},{{0x1125L},{65535UL},{65529UL},{65535UL},{0x1125L}}},{{{0x3895L},{0x1371L},{0UL},{0xA1F0L},{0xFB2DL}},{{4UL},{0x4120L},{65529UL},{0x6502L},{65529UL}},{{65532UL},{0xFB2DL},{0x4CB3L},{0x1371L},{0xFB2DL}},{{0x6710L},{0x6502L},{1UL},{0xC778L},{0x1125L}},{{0xFB2DL},{65535UL},{65535UL},{0xFB2DL},{0x3895L}},{{4UL},{0x6502L},{0x59F0L},{65535UL},{4UL}},{{0xA1F0L},{0xFB2DL},{0UL},{65535UL},{65532UL}},{{0x1125L},{0x4120L},{1UL},{65535UL},{0x6710L}},{{65532UL},{0x1371L},{1UL},{0xFB2DL},{0xFB2DL}}},{{{65529UL},{65535UL},{65529UL},{0xC778L},{4UL}},{{65532UL},{0xA1F0L},{65535UL},{0x1371L},{0xA1F0L}},{{0x1125L},{0x6502L},{65529UL},{0x6502L},{0x1125L}},{{0xA1F0L},{0x1371L},{65535UL},{0xA1F0L},{65532UL}},{{4UL},{0xC778L},{65529UL},{65535UL},{0x59F0L}},{{0xA1F0L},{0xA1F0L},{1UL},{65535UL},{0x3895L}},{{0x73DDL},{0x4120L},{65529UL},{0x2C45L},{0x6710L}},{{0x3895L},{0x4CB3L},{1UL},{0xA1F0L},{0xAD21L}},{{65529UL},{0x4120L},{4UL},{0xC778L},{65529UL}}},{{{1UL},{0xA1F0L},{0x4CB3L},{0x4CB3L},{0xA1F0L}},{{0x6710L},{0xBC4FL},{65529UL},{0xC778L},{0x73DDL}},{{0xA1F0L},{65535UL},{0x1371L},{0xA1F0L},{0x3895L}},{{0x59F0L},{0xC778L},{0x59F0L},{0x2C45L},{65529UL}},{{0xA1F0L},{0xAD21L},{1UL},{65535UL},{1UL}},{{0x6710L},{0x4120L},{0x4E08L},{0x4120L},{0x6710L}},{{1UL},{65535UL},{1UL},{0xAD21L},{0xA1F0L}},{{65529UL},{0x2C45L},{0x59F0L},{0xC778L},{0x59F0L}},{{0x3895L},{0xA1F0L},{0x1371L},{65535UL},{0xA1F0L}}}};
static union U1 g_385 = {0x4346L};
static union U1 g_386 = {0x5C18L};
static union U1 g_387[9] = {{0x68F6L},{65528UL},{0x68F6L},{0x68F6L},{65528UL},{0x68F6L},{0x68F6L},{65528UL},{0x68F6L}};
static union U1 g_392 = {0xEBF0L};
static union U1 g_393 = {0x021AL};
static char g_398[6][9][4] = {{{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}},{{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}},{{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}},{{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}},{{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}},{{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}}};
static unsigned g_400 = 0xDC7E6054L;
static unsigned char g_406 = 0UL;
static union U1 g_420 = {1UL};
static union U1 g_437[1] = {{0xB453L}};
static union U0 g_449 = {0x5D8AD277L};
static volatile int g_451 = 8L;
static const int *g_456[1][5][8] = {{{&g_75,&g_111,&g_75,&g_70,&g_75,&g_111,&g_75,&g_75},{&g_111,&g_70,&g_75,&g_75,&g_70,&g_111,&g_94,&g_111},{&g_70,&g_111,&g_94,&g_111,&g_70,&g_75,&g_75,&g_70},{&g_111,&g_75,&g_75,&g_111,&g_75,&g_70,&g_75,&g_111},{&g_75,&g_75,&g_75,&g_75,&g_94,&g_94,&g_75,&g_75}}};
static int g_463 = 0x6A9AAE1CL;
static int g_466 = 0x6B644CD1L;
static int g_467 = (-1L);
static int g_470 = 0xD8F18704L;
static char g_471 = 0x3DL;
static unsigned g_472 = 0x01E663E3L;
static volatile union U0 *g_475 = (void*)0;
static union U1 g_524 = {6UL};
static union U1 g_525[2][9] = {{{65535UL},{0x0301L},{65535UL},{0x0301L},{65535UL},{0x0301L},{65535UL},{0x0301L},{65535UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
static union U1 g_526 = {6UL};
static union U1 g_527[5][10] = {{{0UL},{0xCBBCL},{0UL},{0UL},{0xE244L},{0xA4FCL},{65535UL},{65535UL},{0xA4FCL},{0xE244L}},{{0UL},{65534UL},{65534UL},{0UL},{0UL},{1UL},{0UL},{65535UL},{0UL},{1UL}},{{0xA4FCL},{0x49BBL},{0UL},{0x49BBL},{0xA4FCL},{0UL},{65534UL},{0UL},{0UL},{65534UL}},{{65535UL},{65535UL},{0UL},{0UL},{65535UL},{1UL},{0x49BBL},{0UL},{0xE244L},{0UL}},{{65534UL},{0UL},{0xE244L},{0UL},{0xE244L},{0UL},{65534UL},{0x49BBL},{0xCBBCL},{0xCBBCL}}};
static union U1 g_528 = {1UL};
static union U1 g_529 = {1UL};
static union U1 g_530[9] = {{65527UL},{65527UL},{65533UL},{65527UL},{65527UL},{65533UL},{65527UL},{65527UL},{65533UL}};
static union U1 g_531 = {2UL};
static union U1 g_532 = {0xD73CL};
static union U1 g_533 = {65535UL};
static union U1 g_534 = {0x7012L};
static union U1 g_535 = {65535UL};
static union U1 g_536 = {7UL};
static short g_550 = 0xDFDEL;
static unsigned short g_565[9][8] = {{0x613DL,0xD512L,65530UL,0xD740L,65535UL,0UL,65535UL,65530UL},{0x613DL,65535UL,0xD512L,0x9375L,65535UL,0x8DECL,0x8DECL,65535UL},{0xC484L,0x6C2BL,0x6C2BL,0xC484L,1UL,0x846BL,0xD512L,1UL},{1UL,0x78A5L,65535UL,65530UL,0x207DL,1UL,0x0415L,0x9375L},{0xE86CL,0x78A5L,0xC484L,0xD512L,0xD740L,0x846BL,0x78A5L,0x846BL},{65535UL,0x6C2BL,0x3FC2L,0x6C2BL,65535UL,0x8DECL,0xD740L,0x3FC2L},{0xF4E1L,65535UL,65535UL,65535UL,1UL,0UL,0x8DECL,0x6C2BL},{1UL,0xD512L,65535UL,0xC484L,0x0415L,0x9F4EL,0xD740L,0xD740L},{1UL,1UL,0x3FC2L,0x3FC2L,65535UL,0x9375L,0xD512L,65535UL}};
static short g_585 = 0x76ECL;
static const char g_602[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static union U1 *g_622 = (void*)0;
static volatile char g_715 = 9L;
static unsigned char g_741 = 0UL;
static unsigned g_751[8] = {8UL,0UL,8UL,8UL,0UL,8UL,8UL,0UL};
static unsigned short g_782 = 1UL;
static volatile short g_811 = 0x5820L;
static int *g_825[4] = {&g_111,&g_111,&g_111,&g_111};
static union U1 g_832[3][10][5] = {{{{0x2710L},{0x1E9CL},{0x0FF7L},{0x6FCEL},{0x9A7AL}},{{65535UL},{0UL},{65532UL},{0x40F4L},{0x1664L}},{{65531UL},{1UL},{65530UL},{0UL},{5UL}},{{65530UL},{65532UL},{0UL},{65534UL},{0xC91BL}},{{0UL},{0x9AD7L},{65526UL},{0x7DB3L},{0x3669L}},{{0x3FC4L},{1UL},{2UL},{0xC642L},{65532UL}},{{65532UL},{65530UL},{0x0486L},{0xC642L},{1UL}},{{0xC83AL},{0x663CL},{0UL},{0x7DB3L},{0x6FCEL}},{{0x22F3L},{65535UL},{0x3FC4L},{65534UL},{0x786EL}},{{0x40F4L},{0x893FL},{0x4CFEL},{0UL},{65532UL}}},{{{0x1E9CL},{5UL},{0x9A7AL},{0x40F4L},{0x40F4L}},{{65535UL},{0x032EL},{65535UL},{0x6FCEL},{65527UL}},{{65526UL},{0xC642L},{0x032EL},{0x3FC4L},{65527UL}},{{0x6FCEL},{1UL},{0xEF94L},{0x1E9CL},{65526UL}},{{0x7FE8L},{65531UL},{0x032EL},{65527UL},{65526UL}},{{1UL},{65532UL},{0x893FL},{0x1E9CL},{0x3669L}},{{65526UL},{0x893FL},{65530UL},{0x9985L},{0x40F4L}},{{5UL},{0x6956L},{65527UL},{65526UL},{1UL}},{{0xEF94L},{0x2785L},{2UL},{0x786EL},{65535UL}},{{65532UL},{0x3FC4L},{65531UL},{0x7DB3L},{65530UL}}},{{{0x9AD7L},{0x0FF7L},{0x53EAL},{0x6FCEL},{1UL}},{{0x7F34L},{0x0FF7L},{0xC91BL},{0x893FL},{65534UL}},{{0x9A7AL},{0x3FC4L},{65530UL},{65531UL},{0UL}},{{65532UL},{0x2785L},{0UL},{0UL},{65535UL}},{{65534UL},{0x6956L},{0x1664L},{0UL},{0xA9FCL}},{{65527UL},{0x893FL},{0x9AD7L},{0x9AD7L},{0x893FL}},{{0UL},{65532UL},{65534UL},{65535UL},{0x3FC4L}},{{65530UL},{1UL},{0x4CFEL},{65531UL},{0x9A7AL}},{{65531UL},{65535UL},{65534UL},{1UL},{0UL}},{{65530UL},{0x7F34L},{0x40F4L},{0xA9FCL},{0xC642L}}}};
static union U1 g_833 = {0xA55DL};
static union U0 g_839 = {0x2E96D92FL};
static char g_841 = 0xEAL;
static int g_870 = 0x45B9E856L;
static const union U0 *g_882 = &g_363;
static int g_909 = 0xE7267A73L;
static volatile char g_988 = 3L;
static unsigned short g_1049 = 0x9DB6L;
static short g_1064 = 0xE9C9L;
static union U1 g_1087 = {0x2DB5L};
static union U1 g_1088 = {0xFB57L};
static short g_1095 = (-1L);
static union U1 g_1169 = {65528UL};
static union U1 g_1183 = {0UL};
static union U1 g_1195 = {0xD417L};
static union U1 g_1230 = {0x9800L};
static const int g_1234 = 6L;
static union U1 g_1246 = {0x6890L};
static short g_1252[4] = {0x2DA7L,0x2DA7L,0x2DA7L,0x2DA7L};
static unsigned short g_1257 = 65530UL;
static unsigned short g_1311[8] = {0x32C8L,1UL,0x32C8L,1UL,0x32C8L,1UL,0x32C8L,1UL};
static unsigned g_1332[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int g_1372 = 0xC600890CL;
static volatile unsigned g_1454 = 0x65609D0FL;
static unsigned char g_1478 = 9UL;
static unsigned short g_1483 = 0xD1DDL;
static union U1 g_1503 = {0x12CFL};



static union U1 func_1(void);
static unsigned short func_6(unsigned char p_7, char p_8, const unsigned short p_9, unsigned p_10);
static unsigned func_12(const unsigned char p_13, unsigned short p_14);
static unsigned short func_29(unsigned short p_30, unsigned p_31, char p_32);
static char func_44(unsigned p_45, int p_46);
static unsigned short func_51(char p_52, char p_53, int p_54);
static char func_59(short p_60, unsigned p_61, int p_62);
static char func_65(const int p_66, unsigned short p_67);
static int func_83(int * p_84);
static int * func_85(int p_86, short p_87, int * p_88);
static union U1 func_1(void)
{
    unsigned l_20 = 0x9D2E819DL;
    short l_35 = 0xD46DL;
    unsigned l_851 = 3UL;
    int **l_877 = (void*)0;
    int l_903 = 1L;
    int l_906 = (-2L);
    int l_910[3][6][10] = {{{(-5L),0x9801AC14L,1L,0xBCA632F0L,0xAE121F50L,0L,1L,0xA4EB8B13L,(-1L),(-1L)},{0xAE121F50L,1L,3L,0x450818C1L,6L,0xAE121F50L,1L,0xA4EB8B13L,0xC877B59BL,0x2C4EFA48L},{(-2L),0x9DDB80F6L,(-1L),2L,(-4L),0L,6L,0x9D6A4CD3L,1L,0xAE121F50L},{(-2L),0x450818C1L,(-1L),1L,0L,0xAE121F50L,(-7L),(-1L),1L,0x9AE6B5BCL},{0xAE121F50L,(-7L),(-1L),1L,0x9AE6B5BCL,0L,1L,0L,1L,0L},{0x2B19E193L,2L,0xA4EB8B13L,2L,0x2B19E193L,0x2C4EFA48L,1L,0L,0xC877B59BL,(-9L)}},{{(-9L),(-7L),(-1L),0x450818C1L,0L,6L,(-7L),1L,(-1L),(-9L)},{(-1L),0x450818C1L,0L,0xBCA632F0L,0x2B19E193L,(-2L),6L,0x1159498EL,(-7L),0L},{6L,0x9DDB80F6L,0L,6L,0x9AE6B5BCL,0x9D294B8EL,1L,1L,0xBCA632F0L,0x9AE6B5BCL},{(-9L),1L,(-1L),0xC877B59BL,0L,0x9D294B8EL,1L,0L,1L,0L},{(-1L),0x2B19E193L,0xA52355E3L,(-4L),1L,0x02B85910L,0x2C4EFA48L,(-8L),0xAE121F50L,0x6E01169BL},{0xF5B905D1L,6L,0x1F6BD894L,0x9AE6B5BCL,(-1L),(-1L),0x9AE6B5BCL,0x1F6BD894L,6L,0xF5B905D1L}},{{(-6L),6L,(-5L),(-9L),0L,0x6E01169BL,0x2C4EFA48L,0L,(-4L),3L},{3L,0x2B19E193L,0xA08FFB5AL,6L,0L,0xFA89D790L,(-2L),0xA52355E3L,0L,0xF5B905D1L},{0L,0x2C4EFA48L,(-6L),0x9D294B8EL,(-1L),0L,0L,0xA52355E3L,0x9AE6B5BCL,0x6E01169BL},{0x02B85910L,(-9L),0xA08FFB5AL,(-1L),1L,0x9801AC14L,(-9L),0L,0x2B19E193L,0L},{0x02B85910L,0x9D294B8EL,(-5L),0L,0x9801AC14L,0L,(-4L),0x1F6BD894L,0L,0x47885DE6L},{0L,(-4L),0x1F6BD894L,0L,0x47885DE6L,0xFA89D790L,0x2B19E193L,(-8L),0x2B19E193L,0xFA89D790L}}};
    int *l_976 = &l_910[2][5][9];
    unsigned short l_985 = 0x42BCL;
    unsigned short l_1067 = 0xA3AAL;
    short l_1093[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    int l_1096 = (-5L);
    char l_1113[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int l_1147 = 0x0798B1BFL;
    unsigned l_1245[1];
    short l_1288 = 0xBC86L;
    union U0 *l_1321 = &g_449;
    union U1 **l_1322[4][9][7] = {{{&g_622,(void*)0,(void*)0,&g_622,&g_622,&g_622,&g_622},{(void*)0,(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622},{(void*)0,&g_622,&g_622,&g_622,(void*)0,&g_622,&g_622},{(void*)0,&g_622,(void*)0,&g_622,&g_622,&g_622,&g_622},{(void*)0,(void*)0,&g_622,&g_622,&g_622,&g_622,(void*)0},{(void*)0,&g_622,&g_622,&g_622,(void*)0,&g_622,&g_622},{(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,(void*)0,&g_622,&g_622,(void*)0}},{{&g_622,&g_622,(void*)0,&g_622,&g_622,&g_622,&g_622},{&g_622,(void*)0,(void*)0,&g_622,(void*)0,&g_622,(void*)0},{&g_622,(void*)0,(void*)0,&g_622,(void*)0,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,(void*)0,&g_622,&g_622},{(void*)0,(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,(void*)0,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,(void*)0,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,(void*)0},{&g_622,&g_622,&g_622,&g_622,&g_622,(void*)0,&g_622}},{{(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{(void*)0,&g_622,(void*)0,&g_622,(void*)0,&g_622,&g_622},{(void*)0,&g_622,&g_622,&g_622,&g_622,(void*)0,&g_622},{&g_622,&g_622,&g_622,(void*)0,&g_622,&g_622,&g_622},{&g_622,&g_622,(void*)0,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,(void*)0},{&g_622,&g_622,&g_622,(void*)0,&g_622,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_622,&g_622,&g_622,(void*)0}},{{&g_622,&g_622,(void*)0,(void*)0,(void*)0,&g_622,&g_622},{(void*)0,(void*)0,&g_622,(void*)0,&g_622,(void*)0,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,(void*)0},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{(void*)0,(void*)0,&g_622,(void*)0,(void*)0,&g_622,&g_622},{&g_622,(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622},{(void*)0,(void*)0,&g_622,&g_622,&g_622,(void*)0,&g_622}}};
    unsigned char l_1338 = 0UL;
    short l_1348 = 0x8480L;
    int *l_1379 = (void*)0;
    int *l_1380 = &l_1096;
    int *l_1381 = &g_909;
    int *l_1382 = &l_903;
    int *l_1383 = &g_75;
    int *l_1384 = &g_870;
    int *l_1385 = &g_111;
    int *l_1386 = &g_111;
    int *l_1387 = (void*)0;
    int *l_1388 = &g_70;
    int *l_1389 = &l_910[1][0][7];
    int *l_1390 = &g_94;
    int *l_1391 = &g_909;
    int *l_1392 = &l_1147;
    int *l_1393 = &l_903;
    int *l_1394 = &g_70;
    int *l_1395[7][2][8] = {{{&l_1147,&g_94,&g_111,&g_909,&l_910[2][2][2],&g_70,&g_70,&g_111},{&l_1096,&l_910[2][2][2],&g_909,&l_1096,&g_909,&l_910[2][2][2],&l_1096,&l_1147}},{{&l_1096,&l_1147,&g_70,&g_870,&g_909,&g_70,&g_909,&g_909},{&g_94,&l_903,(void*)0,&g_111,&g_909,&g_94,&g_111,&g_909}},{{&g_94,&l_1096,&g_70,&l_1147,&l_1147,&g_70,&l_1096,&g_94},{&l_1147,&l_910[2][2][2],&g_1372,&g_870,(void*)0,&l_1147,&l_1147,&g_1372}},{{&g_909,(void*)0,&l_1096,&g_70,&g_870,&l_1147,&l_1147,&g_70},{&g_909,&l_910[2][2][2],&g_70,&g_70,&g_111,&g_70,&g_70,&l_910[2][2][2]}},{{&g_70,&l_1096,&g_870,&g_1372,&l_903,&g_70,&g_909,&g_70},{&g_909,&g_909,&g_70,&l_1096,&g_70,&l_1147,&g_909,&g_94}},{{&l_903,&l_1096,&g_870,&g_70,(void*)0,(void*)0,&g_70,&g_870},{(void*)0,(void*)0,&g_70,&g_870,&l_1096,&l_903,&l_1147,&g_870}},{{&l_1147,&g_70,&l_1096,&g_70,&g_909,&g_909,&l_1147,&g_870},{&g_70,&l_903,&g_1372,&g_870,&l_1096,&g_70,&l_1096,&g_870}}};
    char l_1396 = (-1L);
    int l_1397 = 0xC4CBE606L;
    unsigned l_1398 = 3UL;
    unsigned l_1403 = 0xEB18B4F9L;
    int l_1452 = 0xF0ECE76CL;
    int l_1463 = 7L;
    char l_1464 = 0x67L;
    union U1 *l_1481[7][8] = {{&g_832[1][1][0],&g_529,(void*)0,(void*)0,(void*)0,&g_533,&g_384[0][7][2],(void*)0},{&g_1246,&g_384[0][7][2],(void*)0,&g_387[0],(void*)0,(void*)0,(void*)0,(void*)0},{&g_530[0],&g_832[1][1][0],&g_535,&g_535,&g_832[1][1][0],&g_530[0],&g_393,&g_378},{(void*)0,&g_533,&g_378,&g_529,&g_375,&g_384[0][7][2],&g_437[0],&g_384[3][5][4]},{&g_387[0],&g_1087,&g_393,&g_529,&g_535,&g_378,(void*)0,&g_378},{(void*)0,&g_535,&g_832[2][3][0],&g_535,(void*)0,&g_532,&g_375,(void*)0},{&g_375,&g_378,&g_384[0][7][2],&g_377,(void*)0,&g_533,&g_530[0],&g_535}};
    unsigned l_1500[7] = {1UL,1UL,0xBB756CA9L,1UL,1UL,0xBB756CA9L,1UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1245[i] = 0x50BE1A4FL;
    if ((((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(func_6((((g_11 > func_12(g_15[3], (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((((((~(g_15[1] > l_20)) & (safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_15[3], ((((func_29(g_15[3], l_20, l_20) < g_15[3]) | l_20) < g_15[3]) < l_20))), l_20)) == 65535UL) >= g_15[3]), g_15[3])), 10))) & l_20) > l_35) >= l_35) || 6UL) > 0x6C1DL), l_20)), l_20)))) >= (-1L)) & l_20), l_20, g_534.f0, g_533.f0), l_35)) || 0x88B6L) | g_841), l_35)) && l_851) > l_35))
    {
        int l_867 = 0x7AA892F7L;
        int *l_878 = &g_70;
        int l_907 = 1L;
        int l_911 = 0L;
        int l_912[1];
        unsigned char l_1048 = 0xBAL;
        int l_1112 = (-1L);
        unsigned char l_1149 = 0xFBL;
        unsigned l_1173 = 9UL;
        int i;
        for (i = 0; i < 1; i++)
            l_912[i] = 0x7481918CL;
lbl_1170:
        for (g_365.f2 = 0; (g_365.f2 <= 3); g_365.f2 += 1)
        {
            int l_852 = 0L;
            int l_871 = 0x94AC20D0L;
            const union U0 *l_880 = &g_363;
            int l_900[6][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xB3A817A1L,0xB3A817A1L,0xB3A817A1L,0xB3A817A1L,0xB3A817A1L},{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xB3A817A1L,0xB3A817A1L,0xB3A817A1L,0xB3A817A1L,0xB3A817A1L},{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xB3A817A1L,0xB3A817A1L,0xB3A817A1L,0xB3A817A1L,0xB3A817A1L}};
            unsigned char l_913 = 0xD7L;
            union U1 **l_928[7][7] = {{(void*)0,(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,(void*)0,&g_622,(void*)0,&g_622},{(void*)0,(void*)0,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622,&g_622,&g_622}};
            int l_983 = 0x55C206BAL;
            int i, j;
            l_852 = func_83(&g_111);
            for (g_33 = 0; (g_33 <= 0); g_33 += 1)
            {
                int l_855 = (-5L);
                const unsigned char l_868 = 1UL;
                int l_904 = 0x7A669605L;
                int l_905 = 0x2A9EE2D5L;
                int l_908[8] = {0xC62BE92FL,0x05299345L,0xC62BE92FL,0xC62BE92FL,0x05299345L,0xC62BE92FL,0xC62BE92FL,0x05299345L};
                int i;
                if ((safe_add_func_uint32_t_u_u(l_855, (-3L))))
                {
                    unsigned l_866 = 0UL;
                    for (g_375.f0 = 0; (g_375.f0 <= 3); g_375.f0 += 1)
                    {
                        int *l_869[7] = {&g_870,&g_870,&g_870,&g_870,&g_870,&g_870,&g_870};
                        int i, j, k;
                        if (g_398[(g_33 + 4)][(g_33 + 8)][g_375.f0])
                            break;
                        l_871 &= (g_398[g_365.f2][(g_33 + 7)][g_365.f2] | ((+((func_6(g_380.f0, ((safe_div_func_uint16_t_u_u(0UL, g_304[1][0])) >= (safe_mul_func_int8_t_s_s((-7L), (((safe_add_func_uint32_t_u_u(l_852, g_527[3][4].f1)) > (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(func_65(l_851, g_531.f0), l_866)) < l_867), l_855))) && g_392.f0)))), l_868, g_398[g_365.f2][(g_33 + 7)][g_365.f2]) | l_20) || 1UL)) | l_852));
                    }
                }
                else
                {
                    unsigned short l_876 = 65526UL;
                    int **l_879 = &l_878;
                    unsigned short l_898 = 0UL;
                    l_855 = ((l_855 < l_855) & g_383[0].f1);
                    if (l_20)
                        continue;
                    (*l_879) = func_85((safe_add_func_int16_t_s_s(g_15[4], (safe_sub_func_int32_t_s_s(l_876, (3UL || ((*g_185) == l_877)))))), l_852, l_878);

                    ;
                    ;
                    for (l_35 = 0; (l_35 <= 0); l_35 += 1)
                    {
                        const union U0 **l_881[3];
                        int l_893 = 0xCCD76007L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_881[i] = &l_880;
                        g_882 = l_880;

                        ;
                        g_825[0] = func_85((safe_add_func_uint16_t_u_u((+((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_893, l_893)), 0xD62BL)) == (((+(((safe_add_func_int16_t_s_s(l_855, ((g_367.f1 <= (safe_rshift_func_uint8_t_u_s((func_65(func_59(g_449.f2, l_898, (*l_878)), g_449.f2) > 0x4748L), 3))) < g_529.f0))) | 0UL) || l_893)) == g_533.f0) != l_868)), g_376.f0)) || 0xBE98A2B0L), l_852)) == l_855)), g_363.f2)), l_893, &g_870);
                        if (l_871)
                            continue;
                    }
                }
                for (l_871 = 0; (l_871 >= 0); l_871 -= 1)
                {
                    char l_899 = 9L;
                    int *l_901 = &g_70;
                    int *l_902[4][9] = {{&g_70,&g_94,&g_94,&g_94,&g_94,&g_70,&g_75,&g_870,&g_94},{&g_870,(void*)0,&g_70,&g_94,&l_900[0][4],&g_870,&g_870,&l_900[0][4],&g_94},{&g_94,&g_94,&g_94,&g_70,&l_900[0][4],&g_94,&g_75,(void*)0,&g_70},{&g_94,&l_900[0][4],&g_70,&g_94,&g_94,&g_94,&g_70,&l_900[0][4],&g_94}};
                    int i, j;
                    --l_913;
                    l_855 = l_852;
                    (*l_878) ^= l_910[2][3][2];
                }
            }
            l_907 |= func_6(((((safe_mul_func_uint8_t_u_u(((*l_878) ^ (+(*l_878))), (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(func_6((safe_mod_func_int8_t_s_s(func_44(l_900[0][4], ((g_533.f0 <= func_44(g_472, (safe_rshift_func_int16_t_s_s((l_928[4][1] != &g_366), (safe_lshift_func_int16_t_s_u(func_44((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((*l_878), (safe_rshift_func_uint8_t_u_s((g_393.f1 ^ g_449.f0), 5)))), (*l_878))) & (*l_878)), l_871)), l_852), (*l_878))))))) || g_471)), g_304[3][0])), g_380.f0, (*l_878), l_852), (*l_878))), 0)), 2UL)))) == (*l_878)) == l_900[0][4]) != g_528.f0), l_913, l_913, g_75);
            for (g_375.f0 = 0; (g_375.f0 <= 3); g_375.f0 += 1)
            {
                unsigned char l_939 = 251UL;
                int l_981 = 0x9898BF86L;
                int l_982 = 0x03527CC3L;
                int l_984[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_984[i][j] = (-8L);
                }
                for (g_524.f0 = 0; (g_524.f0 <= 3); g_524.f0 += 1)
                {
                    unsigned char l_964 = 1UL;
                    int l_967 = 0xB3D0F843L;
                    if ((*l_878))
                    {
                        const unsigned short l_942[3][4][8] = {{{6UL,65528UL,0x868EL,3UL,0x3A2CL,0x868EL,0x7BBFL,0x54C7L},{0x54C7L,0x7BBFL,0x868EL,0x3A2CL,3UL,0x868EL,65528UL,6UL},{0x54C7L,65528UL,0UL,0x3A2CL,0x3A2CL,0UL,65528UL,0x54C7L},{6UL,65528UL,0x868EL,3UL,0x3A2CL,0x868EL,0x7BBFL,0x54C7L}},{{0x54C7L,0x7BBFL,0x868EL,0x3A2CL,3UL,0x868EL,65528UL,6UL},{0x54C7L,65528UL,0UL,0x3A2CL,0x3A2CL,0UL,65528UL,0x54C7L},{6UL,65528UL,0x868EL,3UL,0x3A2CL,0x868EL,0x7BBFL,0x54C7L},{0x54C7L,0x7BBFL,0x868EL,0x3A2CL,3UL,0x868EL,65528UL,6UL}},{{0x54C7L,65528UL,0UL,0x3A2CL,0x3A2CL,0UL,65528UL,0x54C7L},{6UL,65528UL,0x868EL,3UL,0x3A2CL,0x868EL,0x7BBFL,0x54C7L},{0x54C7L,0x7BBFL,0x868EL,0x3A2CL,3UL,0x868EL,65528UL,6UL},{0x54C7L,65528UL,0UL,0x3A2CL,0x3A2CL,0UL,65528UL,0x54C7L}}};
                        int **l_951 = &g_825[0];
                        int i, j, k;
                        if (l_939)
                            break;
                        (*l_951) = func_85(l_913, ((l_871 <= (func_83(&g_70) & ((l_942[2][2][7] & (safe_sub_func_uint8_t_u_u(g_370.f0, ((g_374[6][0][3].f0 > (safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(0L, (l_939 && g_449.f2))), 0xF3FF5A39L)), g_449.f2))) >= g_602[4])))) > 0L))) <= 0UL), &g_70);

                        ;
                    }
                    else
                    {
                        union U0 *l_953 = (void*)0;
                        union U0 **l_952[10][10] = {{&l_953,&l_953,&l_953,&l_953,(void*)0,&l_953,&l_953,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,&l_953,(void*)0,(void*)0,&l_953,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,(void*)0,(void*)0,&l_953,&l_953,&l_953,&l_953,&l_953},{&l_953,&l_953,(void*)0,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,(void*)0,&l_953,&l_953,&l_953,(void*)0,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0,&l_953,&l_953,&l_953},{&l_953,&l_953,&l_953,&l_953,(void*)0,(void*)0,&l_953,&l_953,&l_953,&l_953}};
                        int *l_954 = &l_912[0];
                        int *l_955 = &l_900[2][4];
                        int *l_956 = &g_70;
                        int *l_957 = &l_910[2][4][8];
                        int *l_958 = &g_94;
                        int *l_959 = (void*)0;
                        int *l_960 = &l_903;
                        int *l_961 = &g_909;
                        int *l_962 = &l_911;
                        int *l_963[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_963[i] = (void*)0;
                        g_882 = &g_179;

                        ;
                        l_964--;
                        (*l_955) = l_967;
                    }
                }
                (*l_878) = ((safe_div_func_uint32_t_u_u(l_35, (safe_rshift_func_int16_t_s_u(((g_467 >= ((-4L) | func_44(g_162[1][3], g_385.f0))) & g_406), 6)))) ^ ((safe_mul_func_uint16_t_u_u(g_528.f0, (safe_rshift_func_int16_t_s_s(0L, 0)))) <= g_534.f0));
                for (g_449.f0 = 0; (g_449.f0 <= 3); g_449.f0 += 1)
                {
                    int *l_978 = (void*)0;
                    int *l_979 = &l_900[0][4];
                    int *l_980[8][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{&g_75,(void*)0,&l_900[0][4],&l_852},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_900[0][0]},{(void*)0,(void*)0,&l_900[0][4],(void*)0},{&l_903,&l_900[0][4],&l_900[0][0],&l_900[0][4]},{&l_900[0][0],&l_900[0][4],&l_903,(void*)0},{&l_900[0][4],(void*)0,(void*)0,&l_900[0][0]}};
                    int i, j;
                    for (g_372.f0 = 0; (g_372.f0 <= 0); g_372.f0 += 1)
                    {
                        int **l_977 = &l_976;
                        (*l_977) = l_976;
                        if ((**l_977))
                            break;
                    }
                    if (l_900[2][2])
                        continue;
                    l_985++;
                }
            }
        }
        if (g_988)
        {
            unsigned short l_989 = 1UL;
            unsigned char l_990 = 0xE6L;
            const unsigned char l_1005[2] = {0x07L,0x07L};
            int l_1009 = (-4L);
            union U0 *l_1023 = &g_839;
            union U0 **l_1022[8][6] = {{&l_1023,(void*)0,&l_1023,&l_1023,(void*)0,(void*)0},{&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023},{&l_1023,&l_1023,&l_1023,&l_1023,(void*)0,(void*)0},{&l_1023,&l_1023,(void*)0,&l_1023,&l_1023,&l_1023},{&l_1023,&l_1023,&l_1023,(void*)0,(void*)0,&l_1023},{(void*)0,&l_1023,(void*)0,(void*)0,&l_1023,(void*)0},{(void*)0,&l_1023,&l_1023,&l_1023,(void*)0,&l_1023},{&l_1023,(void*)0,(void*)0,(void*)0,(void*)0,&l_1023}};
            int *l_1026 = &l_912[0];
            int **l_1041 = &g_825[0];
            int *l_1050 = (void*)0;
            unsigned l_1076 = 0x9B0E1001L;
            int i, j;
            g_456[0][3][7] = func_85(l_989, l_990, &g_870);

            ;
            for (g_529.f0 = 0; (g_529.f0 <= 0); g_529.f0 += 1)
            {
                char l_991 = 8L;
                int ***l_1040 = (void*)0;
                unsigned l_1059 = 0xD39C221AL;
                const unsigned short l_1068[5][3] = {{0x48F6L,0xE5EFL,0xE5EFL},{65532UL,8UL,8UL},{0x48F6L,0xE5EFL,0xE5EFL},{65532UL,8UL,8UL},{0x48F6L,0xE5EFL,0xE5EFL}};
                int l_1073 = 7L;
                int l_1075 = 1L;
                int i, j;
                for (g_371.f0 = 0; (g_371.f0 <= 1); g_371.f0 += 1)
                {
                    unsigned char l_999 = 255UL;
                    for (g_345 = 0; (g_345 <= 0); g_345 += 1)
                    {
                        const unsigned l_994 = 0UL;
                        unsigned l_1006 = 0UL;
                        if (l_991)
                            break;
                        (*l_878) = func_51(func_83(&g_111), ((safe_sub_func_int16_t_s_s(l_994, (safe_lshift_func_int16_t_s_s((~g_392.f0), ((((safe_mod_func_int8_t_s_s(((func_6(l_999, func_6(g_90, (safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(0UL, ((((safe_unary_minus_func_uint32_t_u((((g_33 < 0xC143L) && 0xA591774BL) == l_991))) != l_994) | 0L) && g_751[2]))) < 0xEF966385L) <= g_378.f0), g_363.f2)), g_383[0].f0, l_991), l_1005[1], l_999) != l_999) && l_991), g_565[6][2])) & 0UL) == l_1006) & l_999))))) == l_994), l_991);
                    }
                    if ((func_83(&l_912[0]) < ((void*)0 == &g_186)))
                    {
                        l_1009 = 0xC0824022L;
                        (*l_976) &= func_51(g_94, g_741, l_999);
                        (*l_878) ^= ((safe_div_func_int8_t_s_s(g_90, l_999)) && 0L);
                    }
                    else
                    {
                        unsigned char l_1016 = 0x4EL;
                        const union U0 **l_1021 = &g_882;
                        if (l_989)
                            break;
                        if (l_1005[0])
                            continue;
                        l_1026 = func_85((safe_lshift_func_uint8_t_u_s(func_44(((*l_878) && l_999), (safe_add_func_uint16_t_u_u(l_1016, (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_1021 == l_1022[1][3]), (safe_div_func_uint16_t_u_u((*l_878), g_536.f0)))), g_832[0][8][4].f1))))), l_1009)), l_1009, &g_75);

                        ;
                    }
                    if ((((((((void*)0 == &g_475) >= g_470) | g_392.f0) || (-3L)) && 0x72CE0AC8L) | (safe_sub_func_uint8_t_u_u(l_999, (safe_mul_func_int16_t_s_s((((*l_878) >= (safe_rshift_func_uint16_t_u_u(func_44(((void*)0 == &g_449), g_304[3][0]), (*l_976)))) == l_991), g_90))))))
                    {
                        unsigned l_1033 = 0UL;
                        if (l_1033)
                            break;
                    }
                    else
                    {
                        (*l_976) |= (-1L);
                    }
                }
                for (g_841 = 0; (g_841 >= 0); g_841 -= 1)
                {
                    int *l_1072[8][9][3] = {{{(void*)0,&l_903,(void*)0},{&g_870,(void*)0,&g_75},{&l_1009,(void*)0,&g_111},{&g_70,&l_903,&g_909},{&l_907,(void*)0,&g_75},{(void*)0,&g_70,&l_903},{&g_75,&g_111,&g_75},{(void*)0,(void*)0,&g_75},{(void*)0,&g_870,&l_912[0]}},{{&g_75,(void*)0,(void*)0},{&l_1009,&g_909,(void*)0},{&l_907,&g_75,(void*)0},{&g_75,&l_907,&l_912[0]},{&l_1009,&g_75,&g_75},{&g_870,&l_907,&g_75},{&g_909,(void*)0,&l_903},{(void*)0,&l_903,&g_75},{&g_870,&g_70,&g_909}},{{&l_910[2][3][2],&g_75,&g_111},{&l_903,(void*)0,&g_75},{&g_94,&l_903,(void*)0},{&l_912[0],&g_70,&l_912[0]},{(void*)0,&l_910[2][3][1],(void*)0},{&g_94,&l_910[2][3][2],&g_870},{&l_903,&g_870,&l_903},{&l_912[0],&l_911,&g_70},{&l_903,&l_912[0],&g_70}},{{&g_94,&l_912[0],&l_911},{(void*)0,&g_75,&g_70},{&l_912[0],&l_907,&g_75},{&g_94,&l_911,(void*)0},{&l_903,&l_912[0],&l_903},{&l_910[2][3][2],(void*)0,&g_870},{(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_111},{&g_870,(void*)0,(void*)0}},{{(void*)0,&l_903,&g_870},{&g_75,&l_1009,&g_70},{&l_903,&l_912[0],(void*)0},{(void*)0,&l_903,&l_912[0]},{&g_94,&l_912[0],&g_94},{&l_907,&l_1009,&l_912[0]},{&g_870,&l_903,&g_909},{&g_111,(void*)0,&g_70},{(void*)0,&g_75,&g_75}},{{(void*)0,(void*)0,&l_903},{&l_911,&g_870,&l_910[2][5][6]},{&l_1009,(void*)0,&g_870},{&g_75,&l_907,&l_1009},{&g_870,&l_903,(void*)0},{&g_909,&g_909,(void*)0},{&l_903,&g_111,(void*)0},{&g_111,&g_111,&l_907},{&g_909,&l_912[0],(void*)0}},{{&l_912[0],&g_111,&l_907},{(void*)0,&g_75,(void*)0},{&l_910[2][3][1],&g_75,(void*)0},{&l_1009,&l_1009,(void*)0},{&l_903,(void*)0,&l_1009},{&g_70,(void*)0,&g_870},{&g_94,&g_870,&l_910[2][5][6]},{(void*)0,&l_912[0],&l_903},{&g_75,&l_903,&g_75}},{{&l_910[2][3][2],&l_912[0],&g_70},{&g_909,&l_911,&g_909},{&l_911,&g_111,&g_70},{&l_1009,&g_111,(void*)0},{&g_94,(void*)0,(void*)0},{&g_870,&l_911,(void*)0},{&g_94,&l_910[2][3][2],(void*)0},{&l_1009,&l_910[2][3][2],&l_911},{&l_911,&g_70,&g_111}}};
                    int i, j, k;
                    for (g_839.f0 = 0; (g_839.f0 <= 0); g_839.f0 += 1)
                    {
                        int i, j;
                        (**g_185) = (**g_185);
                        if (g_565[(g_839.f0 + 8)][(g_839.f0 + 5)])
                            continue;
                    }
                    (*l_1041) = func_85(g_565[(g_841 + 4)][(g_529.f0 + 5)], (safe_lshift_func_int16_t_s_u(4L, (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u((l_1040 == (void*)0), ((void*)0 == l_1041))) || (((safe_lshift_func_uint8_t_u_s(func_65((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(g_532.f0, ((((*l_1026) ^ g_376.f0) >= l_1048) ^ (*l_878)))) == g_602[3]), 0x8BL)), (**l_1041)), g_839.f2)) > g_565[(g_841 + 4)][(g_529.f0 + 5)]) <= 0x495CL)) || g_1049) >= g_437[0].f0), g_383[0].f1)))), l_1050);
                    (*l_1026) = ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((*l_1026) <= (safe_add_func_uint32_t_u_u((g_565[(g_841 + 4)][(g_529.f0 + 5)] <= g_367.f0), (safe_lshift_func_int8_t_s_u(l_1059, 0))))), (g_162[1][2] && g_179.f2))) ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((func_44(g_526.f1, ((**l_1041) | g_532.f0)) == 0UL) || g_437[0].f0), 2UL)), 1UL))), g_529.f0)) >= g_1064);
                    for (g_1049 = 0; (g_1049 <= 1); g_1049 += 1)
                    {
                        const unsigned short l_1069[7][2][1] = {{{0x3DA6L},{0x944EL}},{{0x3DA6L},{0x3DA6L}},{{0x944EL},{0x3DA6L}},{{0x3DA6L},{0x944EL}},{{0x3DA6L},{0x3DA6L}},{{0x944EL},{0x3DA6L}},{{0x3DA6L},{0x944EL}}};
                        int l_1074[8][2][10];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 10; k++)
                                    l_1074[i][j][k] = 0x099CC19AL;
                            }
                        }
                        (*l_976) &= (safe_sub_func_uint8_t_u_u(1UL, ((l_1067 >= l_1068[0][2]) < func_65(((func_65(l_1069[3][0][0], g_535.f1) && g_565[(g_841 + 4)][(g_529.f0 + 5)]) && (safe_add_func_int8_t_s_s(func_12(((void*)0 == l_1072[6][3][0]), g_384[2][6][3].f0), l_1069[1][0][0]))), g_532.f0))));
                        ++l_1076;
                    }
                }
                for (g_365.f2 = 0; (g_365.f2 <= 1); g_365.f2 += 1)
                {
                    for (g_160 = 0; (g_160 <= 0); g_160 += 1)
                    {
                        int i;
                        return g_379[g_529.f0];

                                            }
                }
            }

            ;
            for (g_870 = 0; (g_870 <= 5); g_870 += 1)
            {
                unsigned char l_1081[6][9][1] = {{{1UL},{4UL},{0UL},{4UL},{1UL},{4UL},{0UL},{4UL},{1UL}},{{4UL},{0UL},{4UL},{1UL},{4UL},{0UL},{4UL},{1UL},{4UL}},{{0UL},{4UL},{1UL},{4UL},{0UL},{4UL},{1UL},{4UL},{0UL}},{{4UL},{1UL},{4UL},{0UL},{4UL},{1UL},{4UL},{0UL},{4UL}},{{1UL},{4UL},{0UL},{4UL},{1UL},{4UL},{0UL},{4UL},{1UL}},{{4UL},{0UL},{4UL},{1UL},{4UL},{0UL},{4UL},{1UL},{4UL}}};
                union U1 *l_1083 = (void*)0;
                int i, j, k;
                for (g_839.f2 = 0; (g_839.f2 <= 5); g_839.f2 += 1)
                {
                    int *l_1080[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    for (g_371.f0 = 0; (g_371.f0 <= 5); g_371.f0 += 1)
                    {
                        union U1 **l_1079 = &g_622;
                        (*l_1079) = &g_533;

                        ;
                        (*l_1041) = func_85(g_363.f2, (**l_1041), l_1080[2][1]);
                    }
                    if (((-10L) > ((void*)0 != (**g_185))))
                    {
                        union U1 **l_1082[8][8][4] = {{{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,&g_622,&g_622,&g_622},{(void*)0,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,(void*)0,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,(void*)0,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}},{{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,(void*)0,&g_622,&g_622},{&g_622,&g_622,&g_622,(void*)0},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622}}};
                        int i, j, k;
                        (*l_976) &= (~l_1081[0][7][0]);
                        l_1083 = &g_383[0];

                        ;
                    }
                    else
                    {
                        unsigned short l_1084 = 0x6699L;
                        ++l_1084;
                        if ((*l_878))
                            break;
                        return g_1087;

                                            }

                    ;
                }

                ;
                for (g_909 = 4; (g_909 >= 0); g_909 -= 1)
                {
                    (*l_976) |= 0x61B0CC9CL;
                    (*l_878) ^= l_1081[0][7][0];
                }
            }

            ;
            return g_1088;

                    }
        else
        {
            char l_1094 = (-10L);
            unsigned short l_1097 = 0xFE7EL;
            int l_1100 = 0L;
            int l_1101[4][3] = {{0L,0L,0L},{0x17FED59DL,0x17FED59DL,0x17FED59DL},{0L,0L,0L},{0x17FED59DL,0x17FED59DL,0x17FED59DL}};
            char l_1111 = 0x06L;
            unsigned char l_1114 = 8UL;
            const union U0 *l_1130 = &g_365;
            union U1 *l_1193 = &g_420;
            int l_1194[10][9][2] = {{{(-8L),0x0C011F64L},{1L,0x4BAAD0CDL},{1L,0x0C011F64L},{(-8L),0x1B007BC7L},{(-6L),0L},{(-7L),(-2L)},{0x57E508AFL,0xE74A1F2EL},{0L,1L},{0L,0x1B007BC7L}},{{4L,0xE28BBFA1L},{0xE7627FF3L,1L},{(-6L),(-2L)},{1L,1L},{0x6C80283EL,0x29C85AB4L},{0x57E508AFL,0x5CBD2FB8L},{0x57E508AFL,0x29C85AB4L},{0x6C80283EL,1L},{1L,(-2L)}},{{(-6L),1L},{0xE7627FF3L,0xE28BBFA1L},{4L,0x1B007BC7L},{0L,0x1B007BC7L},{4L,0xE28BBFA1L},{0xE7627FF3L,1L},{(-6L),(-2L)},{1L,1L},{0x6C80283EL,0x29C85AB4L}},{{0x57E508AFL,0x5CBD2FB8L},{0x57E508AFL,0x29C85AB4L},{0x6C80283EL,1L},{1L,(-2L)},{(-6L),1L},{0xE7627FF3L,0xE28BBFA1L},{4L,0x1B007BC7L},{0L,0x1B007BC7L},{4L,0xE28BBFA1L}},{{0xE7627FF3L,1L},{(-6L),(-2L)},{1L,1L},{0x6C80283EL,0x29C85AB4L},{0x57E508AFL,0x5CBD2FB8L},{0x57E508AFL,0x29C85AB4L},{0x6C80283EL,1L},{1L,(-2L)},{(-6L),1L}},{{0xE7627FF3L,0xE28BBFA1L},{4L,0x1B007BC7L},{0L,0x1B007BC7L},{4L,0xE28BBFA1L},{0xE7627FF3L,1L},{(-6L),(-2L)},{1L,1L},{0x6C80283EL,0x29C85AB4L},{0x57E508AFL,0x5CBD2FB8L}},{{0x57E508AFL,0x29C85AB4L},{0x6C80283EL,1L},{0x57E508AFL,1L},{1L,0x1B007BC7L},{0xC57D913BL,0x4BAAD0CDL},{0x82A3A5F7L,1L},{0L,1L},{0x82A3A5F7L,0x4BAAD0CDL},{0xC57D913BL,0x1B007BC7L}},{{1L,1L},{0x57E508AFL,3L},{0x51988EFEL,0L},{0xE7627FF3L,0x0C011F64L},{0xE7627FF3L,0L},{0x51988EFEL,3L},{0x57E508AFL,1L},{1L,0x1B007BC7L},{0xC57D913BL,0x4BAAD0CDL}},{{0x82A3A5F7L,1L},{0L,1L},{0x82A3A5F7L,0x4BAAD0CDL},{0xC57D913BL,0x1B007BC7L},{1L,1L},{0x57E508AFL,3L},{0x51988EFEL,0L},{0xE7627FF3L,0x0C011F64L},{0xE7627FF3L,0L}},{{0x51988EFEL,3L},{0x57E508AFL,1L},{1L,0x1B007BC7L},{0xC57D913BL,0x4BAAD0CDL},{0x82A3A5F7L,1L},{0L,1L},{0x82A3A5F7L,0x4BAAD0CDL},{0xC57D913BL,0x1B007BC7L},{1L,1L}}};
            const unsigned char l_1200 = 0x67L;
            int l_1220 = 0x540C214AL;
            unsigned short l_1247 = 65530UL;
            int l_1264 = (-8L);
            const short l_1273 = 0L;
            unsigned l_1279 = 0x1AFA5AA3L;
            int i, j, k;
            if ((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(func_44(((((0xBCL ^ func_51(l_1093[7], l_1094, g_1095)) || l_1096) | ((l_1097 > (0xFCC3L ^ (g_373.f1 < 0xBB30L))) || 4UL)) <= (*l_976)), (*l_976)), g_375.f0)) >= 0xB85EL), 0L)))
            {
                int *l_1102 = &l_903;
                int *l_1103 = (void*)0;
                int *l_1104 = &l_912[0];
                int *l_1105 = &g_94;
                int *l_1106 = &l_912[0];
                int *l_1107 = &l_910[2][3][2];
                int *l_1108 = &l_1100;
                int *l_1109 = &l_1100;
                int *l_1110[6] = {&l_1096,&l_1096,&l_1096,&l_1096,&l_1096,&l_1096};
                unsigned short l_1133 = 0xEED4L;
                short l_1139 = 0xD139L;
                unsigned l_1144 = 0x87730214L;
                union U1 *l_1168[4][3][4] = {{{&g_370,(void*)0,(void*)0,(void*)0},{&g_531,&g_525[0][4],&g_832[0][4][3],&g_525[0][4]},{&g_373,&g_1088,&g_530[0],&g_437[0]}},{{&g_393,&g_375,(void*)0,&g_437[0]},{&g_832[0][4][3],&g_383[0],(void*)0,(void*)0},{&g_832[0][4][3],&g_1088,(void*)0,(void*)0}},{{&g_530[0],&g_832[0][4][3],&g_379[0],&g_379[0]},{(void*)0,&g_379[0],&g_379[0],(void*)0},{&g_379[0],&g_379[0],&g_832[0][4][3],&g_530[0]}},{{(void*)0,(void*)0,&g_1088,&g_379[0]},{&g_832[0][4][3],(void*)0,&g_370,&g_379[0]},{&g_531,(void*)0,&g_437[0],&g_530[0]}}};
                unsigned l_1179 = 4294967286UL;
                int i, j, k;
lbl_1152:
                l_1114++;
                for (g_365.f2 = 14; (g_365.f2 >= 8); g_365.f2 = safe_sub_func_uint16_t_u_u(g_365.f2, 8))
                {
                    char l_1125 = 0x8DL;
                    int l_1136 = 0xD3866307L;
                    int l_1137 = 0xEB06C49BL;
                    int l_1138 = 0x8850BFAEL;
                    int l_1140 = 0x5686C31EL;
                    int l_1142[1];
                    union U1 *l_1163 = &g_376;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1142[i] = 0xB51A7268L;
                    if ((safe_sub_func_uint16_t_u_u((+(safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1125 & 0L), ((safe_mod_func_int16_t_s_s(((~(((4UL ^ ((*g_185) != &l_976)) & ((*l_1105) ^ (safe_mod_func_int8_t_s_s((l_1130 != &g_179), (safe_mod_func_uint16_t_u_u((*l_1102), (-2L))))))) && (*l_1109))) < 5UL), 65534UL)) & g_367.f0))), g_472))), g_378.f0)))
                    {
                        --l_1133;
                        (*l_976) = (*l_878);
                    }
                    else
                    {
                        char l_1141 = 0x08L;
                        int l_1143 = 0x259A7F6EL;
                        int l_1148 = 0x92846C1CL;
                        l_1144++;
                        if (l_1141)
                            continue;
                        (*l_1104) = l_1125;
                        ++l_1149;
                    }
                    if (g_406)
                        goto lbl_1152;
                    if (l_1100)
                        break;
                    if ((g_374[6][0][3].f0 != ((safe_lshift_func_int16_t_s_s(g_353, g_387[2].f0)) ^ (((void*)0 != &g_622) < (safe_mod_func_int32_t_s_s(((-1L) <= g_449.f1), (((*l_878) || g_536.f0) || 0L)))))))
                    {
                        unsigned char l_1166 = 255UL;
                        const union U0 **l_1167 = &g_882;
                        (*l_976) = func_51((&l_1108 != (void*)0), (*l_1104), l_1137);
                        (*l_1107) = ((safe_mod_func_uint32_t_u_u((*l_878), (safe_div_func_uint16_t_u_u(g_534.f0, (((l_1163 == &g_437[0]) ^ (safe_rshift_func_int8_t_s_s(g_533.f1, 7))) && ((func_29(g_531.f1, g_353, g_1095) ^ l_1166) < l_1101[3][0])))))) == g_751[1]);
                        (*l_1167) = l_1130;

                        ;
                        if (l_1137)
                            break;
                    }
                    else
                    {
                        (*l_878) = (l_1168[2][0][0] == l_1168[2][0][0]);
                    }
                }
                if (l_1094)
                {
                    return g_1169;

                                    }
                else
                {
                    unsigned l_1174 = 4294967287UL;
                    if (g_536.f0)
                        goto lbl_1170;
                    if ((*l_1107))
                    {
                        int l_1180[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1180[i] = 0x03402392L;
                        (*l_1107) |= ((((safe_div_func_uint32_t_u_u((l_1173 ^ func_6(l_1174, (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*g_185) == (void*)0), func_29((g_375.f1 ^ g_372.f0), g_535.f0, l_1179))), (*l_878))), l_1100, (*l_878))), g_602[4])) & l_1180[7]) ^ l_1174) <= 0xA3E8L);
                    }
                    else
                    {
                        (*l_1108) = (func_83(&g_75) || (safe_sub_func_uint32_t_u_u(0x21FE973EL, (&g_1088 != (void*)0))));
                    }
                }
                return g_1183;

                            }
            else
            {
                unsigned short l_1186[1][2][1];
                char l_1211 = 0x3EL;
                int l_1217 = 3L;
                int l_1218 = 0x6FCF5B66L;
                int l_1219[9] = {0x2792BC30L,0x2792BC30L,0x2792BC30L,0x2792BC30L,0x2792BC30L,0x2792BC30L,0x2792BC30L,0x2792BC30L,0x2792BC30L};
                const char l_1241 = 0xE6L;
                const int **l_1259 = &g_456[0][0][5];
                const int ***l_1258 = &l_1259;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1186[i][j][k] = 0xDA97L;
                    }
                }
                if (func_12((safe_rshift_func_uint8_t_u_s((l_1186[0][0][0] ^ func_44(func_65(l_1101[1][1], (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((void*)0 != &g_449) >= 0x4815FBACL), 1UL)), ((((void*)0 == l_1193) && 0x53B72D59L) < l_1111))) > 1UL), l_1194[4][1][0]))), l_1111)), 3)), g_378.f1))
                {
                    for (g_741 = 0; (g_741 <= 1); g_741 += 1)
                    {
                        return g_1195;

                                            }
                }
                else
                {
                    unsigned short l_1205[10];
                    int l_1206 = 1L;
                    int *l_1207 = &l_912[0];
                    int *l_1208 = (void*)0;
                    int *l_1209 = (void*)0;
                    int *l_1210[6][2] = {{&l_1096,&l_1096},{&g_70,&l_1096},{&l_1096,&g_70},{&l_1096,&l_1096},{&g_70,&l_1096},{&l_1096,&g_70}};
                    unsigned short l_1212 = 0x1F97L;
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_1205[i] = 0x4F8AL;
                    (*l_976) = (g_375.f0 || (&g_186 != (void*)0));
                    l_1206 &= ((l_1186[0][1][0] <= (safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u(l_1200, l_1100)) && ((1UL ^ (g_382.f1 && (*l_976))) & ((safe_div_func_int32_t_s_s((!(*l_878)), ((((safe_mod_func_uint16_t_u_u((((0xABL | ((1UL ^ 1L) || (*l_878))) != 4294967290UL) ^ g_281), 0xC038L)) <= g_15[1]) > l_1186[0][1][0]) || l_1186[0][1][0]))) > l_1205[6]))) || (*l_878)) && g_179.f2), g_524.f0))) >= g_373.f0);
                    ++l_1212;
                    for (g_839.f0 = (-28); (g_839.f0 > 3); g_839.f0 = safe_add_func_uint16_t_u_u(g_839.f0, 5))
                    {
                        unsigned short l_1221[5][5] = {{0UL,0x62E1L,0x62E1L,0UL,0xD041L},{65535UL,0UL,0xFA84L,0xF6C8L,0xE4D6L},{65535UL,0xFA84L,0xD041L,0xFA84L,65535UL},{0UL,0x7F9DL,0xE598L,0xF6C8L,0x62E1L},{0xE598L,0x7F9DL,0UL,0UL,0x7F9DL}};
                        int i, j;
                        l_1221[0][1]++;
                    }
                }
                for (l_1220 = (-3); (l_1220 == 14); l_1220 = safe_add_func_uint8_t_u_u(l_1220, 6))
                {
                    unsigned l_1231 = 0x2DD17C1CL;
                    if (l_1094)
                        break;
                    (*l_878) = (safe_rshift_func_uint16_t_u_s(l_1211, 14));
                    for (l_911 = 0; (l_911 < 6); l_911++)
                    {
                        return g_1230;

                                            }
                    if (((&g_882 != (void*)0) >= (l_1231 <= (l_1217 ^ (((g_1234 <= ((((safe_lshift_func_uint16_t_u_u(65535UL, (0x9C96L >= ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(func_65((l_1211 != (*l_878)), (*l_976)), 2)), l_1231)) ^ l_1219[0])))) > l_1097) || l_1231) & 0x848EFB7FL)) && g_536.f1) >= l_1241)))))
                    {
                        const unsigned l_1242 = 4294967286UL;
                        (*l_976) = l_1242;
                        (**g_185) = (**g_185);
                    }
                    else
                    {
                        const union U1 **l_1243 = (void*)0;
                        union U1 **l_1244 = &l_1193;
                        if (l_1231)
                            break;
                        (*l_1244) = (void*)0;

                        ;
                        if ((*l_878))
                            break;
                        (*l_878) |= l_1245[0];
                    }
                }

                ;
                for (g_1095 = 3; (g_1095 >= 0); g_1095 -= 1)
                {
                    return g_1246;

                                    }
                if (l_1247)
                {
                    unsigned short l_1256 = 0xB35BL;
                    const unsigned char l_1281 = 255UL;
                    int l_1282 = 0x8F9BD50DL;
                    for (l_867 = 0; (l_867 == (-7)); --l_867)
                    {
                        unsigned short l_1253 = 0x2AF6L;
                        l_1253 &= (safe_lshift_func_int8_t_s_u((*l_878), g_1252[3]));
                        (*l_976) = (safe_add_func_uint32_t_u_u(0UL, 0x01698987L));
                    }
                    for (g_75 = 0; (g_75 <= 0); g_75 += 1)
                    {
                        int i;
                        l_1219[(g_75 + 1)] = 0x82FA7D24L;
                        if (l_1217)
                            break;
                        if (l_1256)
                            continue;
                        if (g_1257)
                            continue;
                    }
                    if (((l_1258 == &g_186) | (safe_lshift_func_int8_t_s_s(g_1087.f1, (safe_div_func_int8_t_s_s(l_1264, (safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(g_94, ((***l_1258) ^ (((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(func_6(((0xDBL && g_398[4][3][1]) || func_6((**l_1259), g_363.f0, l_1256, g_406)), (**l_1259), l_1273, (*l_878)), (*l_976))), g_1230.f0)) != (*l_878)) ^ 0x25L)))), 0))))))))
                    {
                        (*l_976) &= (safe_lshift_func_int16_t_s_u(((0UL <= func_51(g_384[2][6][3].f0, (*l_878), (***l_1258))) == g_525[1][2].f1), g_463));
                        (**l_1258) = &l_1194[4][1][1];


                    }
                    else
                    {
                        int l_1280[6] = {0xF569E6A1L,0x0835C988L,0x0835C988L,0xF569E6A1L,0x0835C988L,0x0835C988L};
                        int *l_1283[8][8][2] = {{{&l_1100,(void*)0},{(void*)0,&g_870},{&l_1219[8],(void*)0},{(void*)0,(void*)0},{&l_1219[8],&g_870},{(void*)0,(void*)0},{&l_1100,&l_1282},{(void*)0,(void*)0}},{{&l_1218,&l_1096},{&g_870,&l_912[0]},{&l_910[1][0][1],&l_1282},{&l_1147,&l_1194[4][1][0]},{&l_1112,&l_910[1][0][1]},{&l_1112,&l_1112},{&l_1194[4][1][0],(void*)0},{&l_1096,&l_1100}},{{&l_1219[8],(void*)0},{&l_1112,&l_1219[8]},{&l_1194[4][1][0],(void*)0},{&l_1194[4][1][0],&l_1219[8]},{&l_1112,(void*)0},{&l_1219[8],&l_1100},{&l_1096,(void*)0},{&l_1194[4][1][0],&l_1112}},{{&l_1112,&l_910[1][0][1]},{&l_1112,&l_1194[4][1][0]},{&l_1147,&l_1282},{&l_910[1][0][1],&l_912[0]},{&g_870,&l_1096},{&l_1218,&l_1112},{&l_910[2][3][2],&l_1147},{(void*)0,&l_1217}},{{&l_1194[0][2][0],(void*)0},{&l_912[0],(void*)0},{&l_1194[4][1][0],(void*)0},{&l_912[0],(void*)0},{&l_1194[0][2][0],&l_1217},{(void*)0,&l_1147},{&l_910[2][3][2],&l_1112},{&l_1218,&l_1096}},{{&g_870,&l_912[0]},{&l_910[1][0][1],&l_1282},{&l_1147,&l_1194[4][1][0]},{&l_1112,&l_910[1][0][1]},{&l_1112,&l_1112},{&l_1194[4][1][0],(void*)0},{&l_1096,&l_1100},{&l_1219[8],(void*)0}},{{&l_1112,&l_1219[8]},{&l_1194[4][1][0],(void*)0},{&l_1194[4][1][0],&l_1219[8]},{&l_1112,(void*)0},{&l_1219[8],&l_1100},{&l_1096,(void*)0},{&l_1194[4][1][0],&l_1112},{&l_1112,&l_910[1][0][1]}},{{&l_1194[4][1][0],&g_870},{&l_1219[8],&l_1217},{&l_1218,(void*)0},{(void*)0,&l_912[0]},{&l_1100,&l_1100},{&l_1194[4][1][0],&l_1219[8]},{(void*)0,&l_1194[4][1][0]},{&l_910[2][3][2],&l_1194[0][2][0]}}};
                        union U1 *l_1291 = &g_524;
                        int i, j, k;
                        l_1100 ^= (safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(((*l_976) & 0xAE07L), (!(((l_1279 <= (((l_1280[3] != (func_51(g_536.f1, ((*l_878) <= g_1169.f0), (*l_976)) == (-3L))) < l_1281) != 0UL)) < g_387[2].f0) <= l_1282))))));
                        (*l_878) = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((((*l_976) | 0x0440L) | g_463) > (((*l_878) || 1L) == (!(((l_1288 <= (func_6((***l_1258), (safe_mod_func_uint32_t_u_u(((void*)0 == l_1291), 4294967286UL)), l_1282, g_526.f0) || 0x55F4L)) || l_1281) && (*l_878))))), g_138)), 1L));
                    }


                }
                else
                {
                    for (l_1220 = (-10); (l_1220 == (-6)); l_1220 = safe_add_func_uint8_t_u_u(l_1220, 9))
                    {
                        (*l_976) = (**l_1259);
                    }
                    for (g_281 = 0; g_281 < 10; g_281 += 1)
                    {
                        l_1113[g_281] = 0xC0L;
                    }
                    for (g_372.f0 = 0; (g_372.f0 <= 44); g_372.f0 = safe_add_func_uint8_t_u_u(g_372.f0, 3))
                    {
                        unsigned short l_1308[10][6] = {{6UL,0x8E4AL,0x49DEL,0x49DEL,0x8E4AL,6UL},{0x8E4AL,0UL,65535UL,65535UL,0UL,3UL},{0x49DEL,65535UL,0xF666L,65526UL,0x5B7EL,65533UL},{0x49DEL,65535UL,65526UL,65535UL,0x49DEL,0UL},{0x8E4AL,0UL,0x5B7EL,0x49DEL,65533UL,5UL},{6UL,3UL,65533UL,0UL,5UL,5UL},{0x5121L,0x5B7EL,0x5B7EL,0x5121L,65533UL,0UL},{5UL,0x81C1L,65526UL,0UL,65535UL,65533UL},{65526UL,6UL,0xF666L,3UL,65535UL,3UL},{65535UL,0x81C1L,65535UL,65526UL,65533UL,6UL}};
                        int i, j;
                        (*l_976) |= (*l_878);
                        l_1308[1][1] = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(0xF9L, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((l_1264 && ((void*)0 != (*g_185))), (&g_882 == &g_882))), (**l_1259))))), (+(!(safe_sub_func_int32_t_s_s(l_1094, l_1100))))));
                    }
                }


            }


            ;
        }


    }
    else
    {
        unsigned short l_1345[3];
        union U1 * const l_1378 = &g_393;
        int i;
        for (i = 0; i < 3; i++)
            l_1345[i] = 0x3ACFL;
        (*g_186) = (**g_185);
        if (func_59(g_384[2][6][3].f1, func_44((*l_976), (g_111 ^ (safe_rshift_func_uint16_t_u_s(g_162[1][3], 3)))), g_1087.f0))
        {
            int l_1313 = 0x22FDC024L;
            int *l_1316 = &l_910[0][5][1];
            union U0 *l_1320 = &g_363;
            int l_1346 = (-9L);
            unsigned l_1377 = 18446744073709551610UL;
            (**g_185) = (**g_185);
            for (g_1195.f0 = 0; (g_1195.f0 <= 1); g_1195.f0 += 1)
            {
                short l_1312 = 0x256AL;
                int ***l_1314 = (void*)0;
                int l_1331[9][5] = {{0xDE5BE02EL,7L,0L,1L,1L},{0x73156059L,7L,0x73156059L,(-1L),1L},{0xDE5BE02EL,0x1AE7BDF5L,0x73156059L,1L,(-1L)},{0xDE5BE02EL,7L,0L,1L,0L},{0x1AE7BDF5L,1L,0x1AE7BDF5L,0x9820D149L,0L},{7L,(-1L),0x1AE7BDF5L,0L,0x9820D149L},{7L,1L,0x6356DE11L,0L,0L},{0x1AE7BDF5L,1L,0x1AE7BDF5L,0x9820D149L,0L},{7L,(-1L),0x1AE7BDF5L,0L,0x9820D149L}};
                int *l_1347 = &g_870;
                int i, j;
                if (g_1311[2])
                    break;
                if (((&g_382 != (void*)0) >= ((l_1312 > l_1313) <= (+(l_1314 != (void*)0)))))
                {
                    unsigned short l_1318 = 0xE845L;
                    union U1 **l_1323[1][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_622,&g_622,(void*)0},{&g_622,(void*)0,&g_622,&g_622},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_622,&g_622,(void*)0}}};
                    int i, j, k;
                    if ((&g_622 != (void*)0))
                    {
                        unsigned l_1315[10][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
                        int **l_1317 = &l_976;
                        int i, j;
                        if (l_1315[1][0])
                            break;
                        (*l_1317) = l_1316;
                    }
                    else
                    {
                        char l_1319[9][5] = {{(-8L),0x44L,0x25L,0x16L,0x16L},{0x16L,0L,0x16L,0L,0x0BL},{0x25L,0x44L,(-8L),(-10L),0x0BL},{(-2L),(-1L),(-1L),(-2L),0x16L},{(-10L),(-2L),(-8L),0x0BL,0x44L},{(-10L),(-8L),0x16L,(-8L),0x0BL},{0x16L,0x25L,0x44L,(-8L),(-10L)},{0x44L,0x25L,0x16L,0x16L,0x25L},{(-10L),(-1L),0x0BL,0x25L,(-10L)}};
                        int i, j;
                        l_1318 &= (*l_1316);
                        (*l_1316) ^= l_1319[4][1];
                        l_1321 = l_1320;

                        ;
                        return (*g_366);

                                            }
                    for (g_345 = 0; (g_345 <= 1); g_345 += 1)
                    {
                        (*l_976) ^= (l_1322[2][0][6] == l_1323[0][1][3]);
                        (*g_186) = (void*)0;

                        ;
                    }
                }
                else
                {
                    int l_1330[5][7][7] = {{{0xB3929841L,2L,0xB3929841L,6L,0L,0L,(-10L)},{0x876146A2L,(-2L),(-1L),0xBFE70F3DL,0xD9E58EBDL,0xBCBB7B6EL,(-2L)},{0x2A84F674L,0x7B741227L,1L,0L,0L,0L,1L},{0x66F101F6L,0x66F101F6L,0xBCBB7B6EL,(-1L),0x876146A2L,(-2L),0x78A9CBF1L},{(-2L),6L,2L,0x7B741227L,(-2L),1L,0L},{0L,(-2L),0x0B66DD8BL,0x22CFFCC3L,0x876146A2L,0xBB27DE86L,0x9747BBD2L},{0x983CE4C7L,0x35C83121L,(-10L),2L,0L,6L,0x7A223EAEL}},{{(-4L),0x22CFFCC3L,0L,0x0B66DD8BL,0xD9E58EBDL,(-4L),0xBCBB7B6EL},{(-2L),0L,0L,2L,0L,0L,(-2L)},{(-2L),0L,(-1L),0x22CFFCC3L,0x66F101F6L,0xD27216E9L,0L},{0x2A84F674L,2L,0x49621F03L,0x7B741227L,0x983CE4C7L,0L,0x7A223EAEL},{0x22CFFCC3L,0xD9E58EBDL,(-1L),0x78A9CBF1L,0x876146A2L,0xDE0249C3L,0L},{(-10L),2L,2L,2L,0L,0x35C83121L,2L},{0L,0x0B66DD8BL,(-1L),0x66F101F6L,0xDE0249C3L,0xBB27DE86L,0xBB27DE86L}},{{0x2A84F674L,2L,0xE5F66785L,2L,0x2A84F674L,0x9B05DBB5L,(-10L)},{8L,0x22CFFCC3L,(-2L),(-1L),0xBFE70F3DL,8L,0xBCBB7B6EL},{2L,0x7B741227L,(-2L),1L,0L,7L,0L},{8L,(-1L),(-1L),0xD9E58EBDL,0x22CFFCC3L,0x9747BBD2L,(-1L)},{0x2A84F674L,0L,(-10L),0L,0xF0EB1B48L,0L,0x49621F03L},{0L,0xBFE70F3DL,0xD27216E9L,(-1L),(-4L),(-4L),(-1L)},{(-10L),6L,(-10L),7L,2L,0x35C83121L,0L}},{{0xBFE70F3DL,0L,0x78A9CBF1L,0x66F101F6L,0x876146A2L,(-1L),0xBCBB7B6EL},{0L,2L,(-10L),0x35C83121L,0x983CE4C7L,0x35C83121L,(-10L)},{(-4L),0L,(-1L),0x78A9CBF1L,0xBFE70F3DL,(-4L),0xBB27DE86L},{0xB3929841L,7L,(-2L),2L,0xB3929841L,0L,2L},{0xDE0249C3L,0x78A9CBF1L,(-1L),0L,0L,(-1L),0x78A9CBF1L},{0x2A84F674L,0L,0x7A223EAEL,2L,(-2L),0L,0xE5F66785L},{0xBFE70F3DL,0L,0xBB27DE86L,(-1L),(-2L),0xDE0249C3L,0x0B66DD8BL}},{{0L,6L,0xB3929841L,2L,0xB3929841L,6L,0L},{0x22CFFCC3L,0x0B66DD8BL,(-2L),0L,0x876146A2L,0xBCBB7B6EL,0xBB27DE86L},{0xF0EB1B48L,1L,(-10L),0x9B05DBB5L,0x2A84F674L,2L,0xE5F66785L},{(-4L),0x66F101F6L,(-2L),(-2L),0x66F101F6L,(-4L),0xD27216E9L},{2L,0L,0xB3929841L,2L,(-2L),7L,0xB3929841L},{0x876146A2L,0L,0xBB27DE86L,0xD9E58EBDL,0L,0xBCBB7B6EL,0L},{0x983CE4C7L,0L,0x7A223EAEL,0L,0x983CE4C7L,0x7B741227L,0x49621F03L}}};
                    int *l_1335 = &l_910[2][3][2];
                    int *l_1336 = &g_870;
                    int *l_1337 = &l_1331[1][3];
                    int i, j, k;
                    (*g_186) = (**g_185);
                    for (g_536.f0 = 0; (g_536.f0 <= 1); g_536.f0 += 1)
                    {
                        unsigned l_1324[5];
                        int *l_1327 = &g_75;
                        int *l_1328 = &g_870;
                        int *l_1329[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1324[i] = 1UL;
                        l_1324[0]--;
                        --g_1332[0];
                        (*g_186) = (**g_185);
                    }
                    --l_1338;
                }
                (*l_1347) |= func_51((((void*)0 != (*g_185)) ^ (*l_976)), (*l_1316), (safe_mod_func_uint8_t_u_u((0x68052F1EL >= ((!(*l_1316)) | (+(3L || 1UL)))), (safe_sub_func_uint16_t_u_u((l_1345[1] > l_1346), g_531.f1)))));
                (*l_1347) ^= l_1348;
                for (g_526.f0 = 0; (g_526.f0 <= 1); g_526.f0 += 1)
                {
                    unsigned char l_1349[8] = {0x54L,0x54L,0UL,0x54L,0x54L,0UL,0x54L,0x54L};
                    int i;
                    --l_1349[6];
                    for (g_370.f1 = 0; g_370.f1 < 1; g_370.f1 += 1)
                    {
                        for (l_1313 = 0; l_1313 < 5; l_1313 += 1)
                        {
                            for (g_381.f1 = 0; g_381.f1 < 8; g_381.f1 += 1)
                            {
                                g_456[g_370.f1][l_1313][g_381.f1] = &g_75;
                            }
                        }
                    }
                    for (g_471 = 0; (g_471 <= 1); g_471 += 1)
                    {
                        int i, j, k;
                        (*l_976) |= (safe_mul_func_int16_t_s_s(g_988, (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_1195.f0, (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_1345[1], g_602[4])), (safe_rshift_func_uint16_t_u_u(l_1345[1], 6)))))), (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((g_1372 & 0xA45CB1B2L) | (((-1L) || (safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(65534UL, g_94)) != 0x045E2663L), g_1332[3]))) >= l_1377)), 1L)), 4)), g_602[2])))), 7))));
                        (*l_976) |= (-5L);
                        (*l_976) = ((l_1378 == &g_530[0]) > (g_378.f1 && (0xAB7DL != 65532UL)));
                    }
                }
            }
        }
        else
        {
            return (*l_1378);

                    }
    }

    ;


    ;
    l_1398--;
    for (l_1147 = 0; (l_1147 != (-8)); l_1147--)
    {
        int l_1426 = 0x7810A994L;
        unsigned char l_1428 = 255UL;
        unsigned short l_1435 = 0xA5A9L;
        int l_1453 = 0x95E82FDCL;
        if ((*l_1390))
        {
            int * const *l_1414 = &l_1392;
            int * const **l_1413 = &l_1414;
            if (l_1403)
                break;
            for (g_133 = (-24); (g_133 == 42); g_133++)
            {
                int ***l_1412[1][9][2] = {{{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877},{&l_877,&l_877}}};
                char l_1423 = 0L;
                union U1 *l_1427 = &g_393;
                int i, j, k;
                (*l_1381) |= (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(func_65((((0x3884EFCBL == (safe_lshift_func_uint16_t_u_u(0x717DL, 7))) && (l_1412[0][8][1] == l_1413)) <= (0UL & (safe_sub_func_int8_t_s_s(3L, (g_386.f1 >= (safe_rshift_func_uint16_t_u_u(g_304[3][0], 8))))))), (*l_1380)), g_363.f2)) < 0x8F5B4747L), g_384[2][6][3].f0));
                if ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0UL, g_367.f1)), (g_1372 >= 1UL))))
                {
                    if ((l_1423 != (safe_mod_func_int32_t_s_s(l_1426, l_1426))))
                    {
                        (*l_1394) &= func_29(((void*)0 == l_1427), g_383[0].f0, l_1426);
                        (*l_1389) = (l_1428 ^ g_988);
                    }
                    else
                    {
                        int l_1432 = 0xB14D3928L;
                        g_456[0][3][3] = func_85((((void*)0 != (*g_185)) > g_533.f0), (*l_1388), &g_1372);

                        ;
                        l_1432 ^= (((safe_unary_minus_func_int32_t_s((g_75 && ((void*)0 == l_1427)))) & ((safe_add_func_int16_t_s_s((***l_1413), (g_470 || 0UL))) < 2UL)) || (*l_1388));
                    }
                }
                else
                {
                    for (l_1067 = (-3); (l_1067 <= 33); l_1067 = safe_add_func_int8_t_s_s(l_1067, 8))
                    {
                        (**g_185) = (*g_186);
                    }
                    (*l_1393) &= l_1435;
                    l_1453 = (safe_lshift_func_uint8_t_u_s((g_393.f0 | func_29((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((0x92L ^ g_371.f1), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(((4294967294UL != (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((-9L), (g_398[5][8][1] | l_1452))), 3))) & (func_59(g_909, (***l_1413), (*l_1393)) && (*l_1380))), 7)) > 0xEF54B750L) || g_1311[5]), 15)), l_1435)))), 6)), (***l_1413), g_565[6][2])), 3));
                }
            }
        }
        else
        {
            unsigned l_1455 = 0xE95E99C1L;
            int l_1485 = 0x6A72D00AL;
            (*l_1394) ^= l_1428;
            if (g_1454)
            {
                int l_1456 = 0xC14AAF5FL;
                int l_1465 = 0xD02FBC73L;
                union U1 *l_1480 = (void*)0;
                (*l_1390) = (0x4DDDL > ((((func_29(l_1455, (l_1455 >= ((((l_1428 == 8UL) || l_1456) | ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((func_29((g_532.f1 || (safe_mul_func_int8_t_s_s((func_59(g_374[6][0][3].f1, l_1426, g_379[0].f0) == g_782), g_378.f0))), l_1456, l_1428) == 4294967295UL), 0x4B47F11FL)) <= 4294967291UL) != l_1463), g_741)) && g_449.f1)) & 0x59B15B1FL)), l_1464) != 1L) || (*l_1383)) >= l_1426) | l_1465));
                for (g_782 = 0; (g_782 >= 28); ++g_782)
                {
                    unsigned l_1475 = 4294967290UL;
                    int *l_1479 = &l_1147;
                    if (func_44(g_525[1][2].f1, g_565[3][3]))
                    {
                        short l_1468[7][1];
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1468[i][j] = 0x12E0L;
                        }
                        (*l_1382) = l_1468[0][0];
                        (*l_1390) = ((g_365.f2 & (func_29(((func_29(g_373.f0, (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s(l_1475, (65535UL ^ (safe_mod_func_int32_t_s_s(l_1428, func_59(l_1468[4][0], g_298, func_6(l_1465, g_1195.f0, g_1169.f0, g_370.f0))))))) || l_1428) <= g_374[6][0][3].f1) > g_1478), 9)), g_367.f0)), g_602[1]) > 0x5EL) <= g_1183.f0), g_15[4], l_1455) >= 4UL)) & 8L);
                        return (*g_366);

                                            }
                    else
                    {
                        (*l_1389) = (((**g_185) == l_1479) && (l_1480 != l_1481[5][5]));
                        return (*g_366);

                                            }
                }
            }
            else
            {
                unsigned short l_1482 = 65527UL;
                int **l_1484 = &l_976;
                unsigned l_1486 = 0x664C29CBL;
                (*l_1484) = func_85(func_29(g_536.f1, g_602[4], g_532.f0), (*l_1381), func_85(l_1482, g_1483, &l_1397));

                ;
                ;
                --l_1486;
            }
        }
        for (g_179.f2 = 0; (g_179.f2 <= 51); g_179.f2 = safe_add_func_int8_t_s_s(g_179.f2, 7))
        {
            unsigned char l_1499 = 254UL;
            (*l_1382) = (safe_sub_func_uint32_t_u_u(0xB5D9FA54L, ((safe_mul_func_int16_t_s_s(g_534.f0, (((+0x4FL) | g_530[0].f1) < (safe_mul_func_uint16_t_u_u((((((safe_mul_func_int8_t_s_s(0xD6L, g_1246.f0)) && (func_44((*l_1384), g_94) && 1UL)) | l_1499) != g_33) <= g_398[0][8][1]), g_1252[3]))))) & l_1499)));
            ++l_1500[5];
            for (g_1372 = 0; (g_1372 <= 7); g_1372 += 1)
            {
                int i;
                (*l_1383) |= g_1311[g_1372];
                (*l_1380) = (*l_1382);
                for (g_420.f0 = 0; (g_420.f0 <= 3); g_420.f0 += 1)
                {
                    int i, j, k;
                    l_1322[g_420.f0][g_1372][g_420.f0] = l_1322[g_420.f0][(g_420.f0 + 2)][(g_420.f0 + 3)];
                    return g_1503;

                                    }
            }
        }
        if (l_1428)
            break;
    }

    ;
    return (*g_366);

    }







static unsigned short func_6(unsigned char p_7, char p_8, const unsigned short p_9, unsigned p_10)
{
    int *l_576[4][4] = {{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75,&g_75}};
    int **l_577 = &l_576[0][3];
    const unsigned l_608[10][4][6] = {{{4294967293UL,2UL,0x5745DCFFL,0xC272A325L,0xC272A325L,0x5745DCFFL},{0xC272A325L,0xC272A325L,0x5745DCFFL,2UL,4294967293UL,0x5745DCFFL},{2UL,4294967293UL,0x5745DCFFL,4294967293UL,2UL,0x5745DCFFL},{4294967293UL,2UL,0x5745DCFFL,0xC272A325L,0xC272A325L,0x5745DCFFL}},{{0xC272A325L,0xC272A325L,0x5745DCFFL,2UL,4294967293UL,0x5745DCFFL},{2UL,4294967293UL,0x5745DCFFL,4294967293UL,2UL,0x5745DCFFL},{4294967293UL,2UL,0x5745DCFFL,0xC272A325L,0xC272A325L,0x5745DCFFL},{0xC272A325L,0xC272A325L,0x5745DCFFL,2UL,4294967293UL,0x5745DCFFL}},{{2UL,4294967293UL,0x5745DCFFL,4294967293UL,2UL,0x5745DCFFL},{4294967293UL,2UL,0x5745DCFFL,0xC272A325L,0xC272A325L,0x5745DCFFL},{0xC272A325L,0xC272A325L,0x5745DCFFL,2UL,4294967293UL,0x5745DCFFL},{2UL,4294967293UL,0x5745DCFFL,4294967293UL,2UL,0x5745DCFFL}},{{4294967293UL,0x97B88C77L,2UL,0xCC63B1D0L,0xCC63B1D0L,2UL},{0xCC63B1D0L,0xCC63B1D0L,2UL,0x97B88C77L,0x31AC907EL,2UL},{0x97B88C77L,0x31AC907EL,2UL,0x31AC907EL,0x97B88C77L,2UL},{0x31AC907EL,0x97B88C77L,2UL,0xCC63B1D0L,0xCC63B1D0L,2UL}},{{0xCC63B1D0L,0xCC63B1D0L,2UL,0x97B88C77L,0x31AC907EL,2UL},{0x97B88C77L,0x31AC907EL,2UL,0x31AC907EL,0x97B88C77L,2UL},{0x31AC907EL,0x97B88C77L,2UL,0xCC63B1D0L,0xCC63B1D0L,2UL},{0xCC63B1D0L,0xCC63B1D0L,2UL,0x97B88C77L,0x31AC907EL,2UL}},{{0x97B88C77L,0x31AC907EL,2UL,0x31AC907EL,0x97B88C77L,2UL},{0x31AC907EL,0x97B88C77L,2UL,0xCC63B1D0L,0xCC63B1D0L,2UL},{0xCC63B1D0L,0xCC63B1D0L,2UL,0x97B88C77L,0x31AC907EL,2UL},{0x97B88C77L,0x31AC907EL,2UL,0x31AC907EL,0x97B88C77L,2UL}},{{0x31AC907EL,0x97B88C77L,2UL,0xCC63B1D0L,0xCC63B1D0L,2UL},{0xCC63B1D0L,0xCC63B1D0L,2UL,0x97B88C77L,0x31AC907EL,2UL},{0x97B88C77L,0x31AC907EL,2UL,0x31AC907EL,0x97B88C77L,2UL},{0x31AC907EL,0x97B88C77L,2UL,0xCC63B1D0L,0xCC63B1D0L,2UL}},{{0x31AC907EL,0x31AC907EL,0xC272A325L,0xCC63B1D0L,0x97B88C77L,0xC272A325L},{0xCC63B1D0L,0x97B88C77L,0xC272A325L,0x97B88C77L,0xCC63B1D0L,0xC272A325L},{0x97B88C77L,0xCC63B1D0L,0xC272A325L,0x31AC907EL,0x31AC907EL,0xC272A325L},{0x31AC907EL,0x31AC907EL,0xC272A325L,0xCC63B1D0L,0x97B88C77L,0xC272A325L}},{{0xCC63B1D0L,0x97B88C77L,0xC272A325L,0x97B88C77L,0xCC63B1D0L,0xC272A325L},{0x97B88C77L,0xCC63B1D0L,0xC272A325L,0x31AC907EL,0x31AC907EL,0xC272A325L},{0x31AC907EL,0x31AC907EL,0xC272A325L,0xCC63B1D0L,0x97B88C77L,0xC272A325L},{0xCC63B1D0L,0x97B88C77L,0xC272A325L,0x97B88C77L,0xCC63B1D0L,0xC272A325L}},{{0x97B88C77L,0xCC63B1D0L,0xC272A325L,0x31AC907EL,0x31AC907EL,0xC272A325L},{0x31AC907EL,0x31AC907EL,0xC272A325L,0xCC63B1D0L,0x97B88C77L,0xC272A325L},{0xCC63B1D0L,0x97B88C77L,0xC272A325L,0x97B88C77L,0xCC63B1D0L,0xC272A325L},{0x97B88C77L,0xCC63B1D0L,0xC272A325L,0x31AC907EL,0x31AC907EL,0xC272A325L}}};
    volatile int *l_612 = &g_451;
    const union U1 *l_634 = &g_370;
    int l_670 = (-1L);
    unsigned l_681 = 0xCEF855DCL;
    union U0 *l_694 = &g_365;
    unsigned l_765 = 0UL;
    char l_799 = (-1L);
    int l_845[6][4] = {{0xD43834DEL,0xD43834DEL,0x1B649B84L,0xFE51734FL},{0xD43834DEL,1L,(-1L),0xD43834DEL},{1L,0xFE51734FL,1L,(-1L)},{2L,0xFE51734FL,0x1B649B84L,0xD43834DEL},{0xFE51734FL,1L,1L,0xFE51734FL},{1L,0xD43834DEL,1L,(-1L)}};
    int l_847[7];
    unsigned char l_848 = 0xEBL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_847[i] = 0x8CDA7CA8L;
    (*l_577) = l_576[0][3];
    for (g_472 = 16; (g_472 < 36); g_472 = safe_add_func_int8_t_s_s(g_472, 1))
    {
        unsigned short l_580[4][1][1] = {{{65529UL}},{{0x4113L}},{{65529UL}},{{0x4113L}}};
        union U1 *l_588 = &g_371;
        union U1 **l_587[4] = {&l_588,&l_588,&l_588,&l_588};
        int l_589 = 0L;
        int ***l_659 = &l_577;
        int l_680 = (-1L);
        int i, j, k;
    }
    for (g_376.f0 = 5; (g_376.f0 > 47); g_376.f0++)
    {
        unsigned short l_717[5][2][3] = {{{9UL,65529UL,9UL},{1UL,5UL,65532UL}},{{1UL,1UL,5UL},{9UL,5UL,5UL}},{{5UL,65529UL,65532UL},{9UL,65529UL,9UL}},{{1UL,5UL,65532UL},{1UL,1UL,5UL}},{{9UL,5UL,5UL},{5UL,65529UL,65532UL}}};
        int l_748 = 0xF1E5CF10L;
        int l_805 = 0x6F780201L;
        int l_808 = (-1L);
        short l_809 = 3L;
        int l_810[2];
        const union U0 *l_838 = &g_839;
        unsigned l_842[5] = {0xB00F4140L,0xB00F4140L,0xB00F4140L,0xB00F4140L,0xB00F4140L};
        int l_846[3][9][2] = {{{(-1L),0x7F0814BAL},{0x31082ED8L,1L},{0xFE52B46DL,0xEAF0943BL},{0L,0L},{(-10L),0xF5E3CA0FL},{0x8AA77AA4L,0xB0A44B01L},{0x31082ED8L,0xB0A44B01L},{0x8AA77AA4L,0xF5E3CA0FL},{(-10L),0L}},{{0L,0xEAF0943BL},{0xFE52B46DL,1L},{0x31082ED8L,0x7F0814BAL},{(-1L),0x4571F09BL},{0L,0L},{7L,0x54AF9F19L},{0xC5385977L,0xA744B946L},{0x31082ED8L,0x44DC6973L},{(-1L),0x31082ED8L}},{{0xA30ACE95L,0L},{0xA30ACE95L,0x31082ED8L},{(-1L),0x44DC6973L},{0x31082ED8L,0xA744B946L},{0xC5385977L,0x54AF9F19L},{7L,0L},{0L,0x4571F09BL},{(-1L),0x7F0814BAL},{(-1L),0xEAF0943BL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_810[i] = 1L;
        for (g_382.f0 = 0; (g_382.f0 != 38); ++g_382.f0)
        {
            unsigned char l_695 = 0xF8L;
            char l_713[1][8];
            int l_714 = 4L;
            int l_798 = 1L;
            int l_801 = 0x19F2FC3AL;
            int l_803 = 1L;
            int l_806[2];
            char l_818 = 0xEDL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 8; j++)
                    l_713[i][j] = (-1L);
            }
            for (i = 0; i < 2; i++)
                l_806[i] = 1L;
        }
        l_842[4]--;
        l_848++;
    }
    return g_535.f0;
}







static unsigned func_12(const unsigned char p_13, unsigned short p_14)
{
    char l_36[2][3] = {{0L,0L,0L},{(-7L),(-7L),(-7L)}};
    int l_434 = 1L;
    union U1 *l_436 = &g_437[0];
    union U1 **l_435 = &l_436;
    union U0 *l_448[7];
    int l_468[6];
    int i, j;
    for (i = 0; i < 7; i++)
        l_448[i] = &g_449;
    for (i = 0; i < 6; i++)
        l_468[i] = 0xC13B04F1L;
    for (g_33 = 0; (g_33 <= 1); g_33 += 1)
    {
        int l_43 = 0x203D7E6DL;
        unsigned l_431 = 0x931FFE94L;
        volatile int *l_450 = &g_451;
        int l_460 = 0x2E4D3A5AL;
        int l_461 = 0x02BC4801L;
        int l_462[7][3][7] = {{{1L,(-1L),0xC30EC9AAL,0x27112E2EL,0xC30EC9AAL,(-1L),1L},{(-1L),0x4F2BBC0AL,0x0FC19CCBL,0L,0x5816370BL,0xC30EC9AAL,(-9L)},{0xCFA17F01L,0x5816370BL,0x6C07635FL,0xCFA17F01L,0x2D6A2865L,0xA9FB644BL,0x27112E2EL}},{{1L,0xDE2A5830L,0x0FC19CCBL,0x2D6A2865L,4L,0x0FC19CCBL,0x7B086B05L},{4L,1L,0xC30EC9AAL,0L,0x5816370BL,0xF292C0D6L,0xF292C0D6L},{0x6980B8B4L,1L,0x4C3237FEL,1L,0x6980B8B4L,(-10L),0x5816370BL}},{{0L,0xDE2A5830L,(-1L),0x4F2BBC0AL,0L,0L,1L},{(-9L),0x5816370BL,(-1L),4L,0x7B086B05L,0xF292C0D6L,0x0FC19CCBL},{0L,0x4F2BBC0AL,0x9C4A044FL,0xCFA17F01L,0x4F2BBC0AL,0xD1493943L,0L}},{{0x6980B8B4L,(-1L),(-1L),0L,0xDE2A5830L,0xDE2A5830L,0L},{4L,0x6470C1F8L,4L,0xF292C0D6L,0L,0xC30EC9AAL,0x0FC19CCBL},{1L,0xCFA17F01L,1L,0x27112E2EL,0x6980B8B4L,0x9C4A044FL,1L}},{{0xCFA17F01L,0L,0x0FC19CCBL,(-1L),(-10L),9L,0L},{0x4C3237FEL,0L,(-10L),0x4C3237FEL,0xC30EC9AAL,(-8L),0x9C4A044FL},{(-9L),0x92CE790EL,0x7B086B05L,0xC30EC9AAL,0xC30EC9AAL,0x7B086B05L,0x92CE790EL}},{{0xC30EC9AAL,0x6C07635FL,9L,0x0FC19CCBL,(-10L),0x9C4A044FL,(-1L)},{9L,(-9L),1L,0x6C07635FL,0L,0xD1493943L,(-10L)},{0xDE2A5830L,0x92CE790EL,0x5816370BL,0x0FC19CCBL,(-1L),0L,(-9L)}},{{0L,(-10L),0x4C3237FEL,0xC30EC9AAL,(-8L),0x9C4A044FL,0xDE2A5830L},{0xA9FB644BL,0x0FC19CCBL,0x4C3237FEL,0x4C3237FEL,0x0FC19CCBL,0xA9FB644BL,0L},{0L,4L,0x5816370BL,(-1L),0x92CE790EL,0x6470C1F8L,(-1L)}}};
        union U1 **l_478[1][7][9] = {{{&l_436,&l_436,(void*)0,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{(void*)0,&l_436,&l_436,&l_436,&l_436,(void*)0,&l_436,&l_436,&l_436},{(void*)0,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436},{&l_436,&l_436,&l_436,&l_436,&l_436,(void*)0,&l_436,&l_436,&l_436}}};
        const int **l_560 = &g_456[0][3][4];
        const int ***l_559 = &l_560;
        short l_564 = 0xC561L;
        int *l_572 = &l_462[5][0][1];
        int i, j, k;
        for (p_14 = 0; (p_14 <= 1); p_14 += 1)
        {
            int *l_416 = &g_94;
            union U1 *l_419 = &g_420;
            int i, j;
            (*l_416) = (((((safe_mod_func_uint32_t_u_u(0UL, ((((0x4C99FFFBL != l_36[p_14][g_33]) & (l_36[g_33][(p_14 + 1)] != l_36[g_33][p_14])) <= (safe_rshift_func_uint16_t_u_s(5UL, 5))) & ((safe_mul_func_int8_t_s_s(l_43, func_44((!(safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((func_51((safe_mod_func_int16_t_s_s(g_15[5], (safe_sub_func_int16_t_s_s(l_43, 0xD326L)))), g_33, g_15[4]) > 0x9666L), g_377.f0)), l_43))), g_375.f0))) > l_36[g_33][p_14])))) < l_43) < l_36[0][2]) != l_36[1][0]) == 1L);
            (*l_416) = ((~(safe_rshift_func_uint16_t_u_u((g_304[3][0] <= (*l_416)), 7))) && (l_419 != (void*)0));
            (*l_416) = (safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u(func_83(func_85(g_363.f0, g_387[2].f0, func_85((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((!(safe_lshift_func_int8_t_s_u(p_13, 7))))), func_59(l_43, l_36[1][2], (g_381.f0 == p_13)))), l_431, l_416))), p_13)))), p_14));

            ;
            for (g_111 = 0; (g_111 <= 1); g_111 += 1)
            {
                (*l_416) &= l_36[0][2];
            }
        }
        for (g_70 = 1; (g_70 >= 0); g_70 -= 1)
        {
            int i, j;
            l_434 |= (safe_rshift_func_uint16_t_u_u(((0x4713L || l_36[g_33][(g_33 + 1)]) || g_400), p_13));
        }
        if (((l_435 != &l_436) | l_431))
        {
            unsigned l_452 = 18446744073709551611UL;
            int l_464[3];
            int l_465[7][9][4] = {{{0L,(-6L),1L,0L},{9L,(-4L),0xBD6A5CE2L,1L},{0x03A076FDL,0xEF4D7771L,9L,0xB258E612L},{(-4L),1L,2L,0L},{0xBD6A5CE2L,1L,(-1L),1L},{0L,0xE3F0D4D6L,1L,0xE3F0D4D6L},{0x3CA7951CL,(-6L),0x527B866AL,0x92B21280L},{0x22BD43B4L,0x03A076FDL,1L,1L},{0x39A400A4L,0L,0x5DF16E59L,0L}},{{0x39A400A4L,0x9D0BA8BCL,1L,0xB258E612L},{0x22BD43B4L,0L,0x527B866AL,0x9BC91FC8L},{0x3CA7951CL,0xEF4D7771L,1L,0x27BFFE73L},{0L,0xFC3A6CB2L,(-1L),(-4L)},{0xBD6A5CE2L,0x39A400A4L,2L,(-1L)},{(-4L),0x03A076FDL,9L,0xE3F0D4D6L},{0x03A076FDL,0xFC3A6CB2L,0xBD6A5CE2L,0x158CED8EL},{9L,0x3CA7951CL,1L,0x9BC91FC8L},{1L,(-1L),0xEF4D7771L,0x45A7A181L}},{{0xFC3A6CB2L,0xB8EA459BL,9L,(-1L)},{1L,1L,0xD483C2BAL,0xE99867B7L},{0x22BD43B4L,0x9BC91FC8L,0xEF4D7771L,0xDDB57425L},{1L,0L,0L,1L},{0x59564B6EL,1L,0xB8EA459BL,1L},{0x9BC91FC8L,0x22BD43B4L,0L,0xBD6A5CE2L},{0L,0x1269B700L,0x5DF16E59L,0xBD6A5CE2L},{1L,0x22BD43B4L,9L,1L},{(-1L),1L,0xA382B66FL,1L}},{{0xFC3A6CB2L,0L,(-1L),0xDDB57425L},{0x48F9B615L,0x9BC91FC8L,0x59564B6EL,0xE99867B7L},{0x527B866AL,1L,(-4L),(-1L)},{0x9BC91FC8L,0xB8EA459BL,0L,0x45A7A181L},{0x48F9B615L,(-1L),6L,(-1L)},{1L,0x22BD43B4L,0xA382B66FL,(-1L)},{(-1L),(-5L),0xD483C2BAL,0L},{1L,0x527B866AL,(-1L),9L},{1L,2L,0L,1L}},{{2L,(-5L),0L,(-1L)},{0x59564B6EL,1L,0x59564B6EL,(-1L)},{0L,(-1L),0xEF4D7771L,0x9D0BA8BCL},{1L,0xB8EA459BL,0x98202F03L,(-1L)},{1L,1L,0x98202F03L,0xB6524629L},{0xDDB57425L,1L,3L,0x45A7A181L},{1L,0x48F9B615L,0xE99867B7L,1L},{0xE99867B7L,1L,0x98202F03L,0L},{0L,0x6CDF5559L,0x27BFFE73L,(-1L)}},{{9L,0x59564B6EL,0x1269B700L,(-1L)},{9L,0xDDB57425L,(-1L),0L},{0x9BC91FC8L,(-6L),1L,9L},{0xDDB57425L,0x48F9B615L,1L,0x9D0BA8BCL},{(-7L),0L,0x48F9B615L,0xB6524629L},{1L,1L,(-1L),0x9BC91FC8L},{1L,0xD483C2BAL,0xE99867B7L,(-1L)},{(-7L),0x9BC91FC8L,0x1269B700L,0x1269B700L},{0x6CDF5559L,0x6CDF5559L,1L,2L}},{{0x527B866AL,9L,6L,9L},{9L,1L,1L,6L},{1L,1L,0x27BFFE73L,9L},{1L,9L,0xD483C2BAL,2L},{0xE99867B7L,0x6CDF5559L,0x48F9B615L,0x1269B700L},{(-6L),0x9BC91FC8L,3L,(-1L)},{0x30F8EAB6L,0xD483C2BAL,(-1L),0x9BC91FC8L},{0xA2DB1415L,1L,6L,0xB6524629L},{0x6CDF5559L,0L,3L,0x9D0BA8BCL}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_464[i] = 0x27C53955L;
            for (g_179.f2 = 0; (g_179.f2 <= 1); g_179.f2 += 1)
            {
                int *l_440 = &g_111;
                int l_458 = 0x3FE84135L;
                int l_469 = 0x3D744F47L;
                (*l_440) |= ((p_14 ^ (safe_sub_func_int16_t_s_s(5L, l_434))) < (p_13 < p_14));
                g_75 = p_14;
                for (g_373.f0 = 0; (g_373.f0 <= 1); g_373.f0 += 1)
                {
                    const char l_443 = (-1L);
                    const int *l_454 = &g_94;
                    volatile union U0 **l_476 = (void*)0;
                    if (((safe_sub_func_int16_t_s_s((g_400 > p_13), g_381.f0)) && (l_443 >= (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_43, (0x3873L != (l_448[6] != (void*)0)))), g_138)))))
                    {
                        l_450 = (**g_185);

                        ;
                        return l_452;
                    }
                    else
                    {
                        union U1 **l_453 = &l_436;
                        const int **l_455[10] = {&l_454,&l_454,&l_454,&l_454,&l_454,&l_454,&l_454,&l_454,&l_454,&l_454};
                        int *l_457 = &g_70;
                        int *l_459[10] = {&l_458,(void*)0,&l_434,&l_434,(void*)0,&l_458,(void*)0,&l_434,&l_434,(void*)0};
                        int i;
                        (*l_453) = g_366;

                        ;
                        g_456[0][0][5] = l_454;
                        ++g_472;
                        (*l_440) ^= (p_13 ^ l_452);
                    }

                    ;
                    g_475 = g_475;
                }
            }
        }
        else
        {
            int *l_482[4][1][10] = {{{(void*)0,&g_111,(void*)0,&g_111,(void*)0,&g_111,&g_111,(void*)0,&g_111,(void*)0}},{{&l_434,&l_434,(void*)0,(void*)0,&g_75,(void*)0,(void*)0,&l_434,&l_434,(void*)0}},{{&g_111,(void*)0,&g_111,&g_111,(void*)0,&g_111,(void*)0,&g_111,(void*)0,&g_111}},{{&l_462[5][0][5],&l_434,&l_462[5][0][5],&g_111,(void*)0,(void*)0,&g_111,&l_462[5][0][5],&l_434,&l_462[5][0][5]}}};
            int * const *l_506[5];
            int * const **l_505 = &l_506[1];
            union U1 * const l_523[2][10][4] = {{{&g_534,(void*)0,(void*)0,&g_534},{(void*)0,&g_534,&g_527[3][4],&g_527[3][4]},{&g_530[0],&g_530[0],&g_536,&g_525[1][2]},{&g_530[0],(void*)0,&g_527[3][4],&g_530[0]},{(void*)0,&g_525[1][2],(void*)0,&g_527[3][4]},{&g_534,&g_525[1][2],&g_536,&g_530[0]},{&g_525[1][2],(void*)0,(void*)0,&g_525[1][2]},{(void*)0,&g_530[0],(void*)0,&g_527[3][4]},{&g_525[1][2],&g_534,&g_536,&g_534},{&g_534,(void*)0,(void*)0,&g_534}},{{(void*)0,&g_534,(void*)0,(void*)0},{&g_534,&g_534,&g_528,&g_530[0]},{&g_534,(void*)0,(void*)0,&g_534},{&g_527[3][4],&g_530[0],&g_527[3][4],(void*)0},{&g_525[1][2],&g_530[0],&g_528,&g_534},{&g_530[0],(void*)0,(void*)0,&g_530[0]},{&g_527[3][4],&g_534,(void*)0,(void*)0},{&g_530[0],&g_525[1][2],&g_528,&g_525[1][2]},{&g_525[1][2],(void*)0,&g_527[3][4],&g_525[1][2]},{&g_527[3][4],&g_525[1][2],(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_506[i] = &l_482[2][0][8];
            if (p_13)
            {
                union U1 **l_477 = &l_436;
                int l_484 = 0x90F697B5L;
                int *l_496 = &l_484;
                int **l_504 = &l_482[2][0][3];
                int ***l_503 = &l_504;
                unsigned l_515[7] = {0UL,0UL,0x56973F3AL,0UL,0UL,0x56973F3AL,0UL};
                unsigned short l_552 = 0x6CE7L;
                int i;
                (*l_477) = g_366;

                ;
                if (((-1L) > ((void*)0 == l_478[0][4][7])))
                {
                    int *l_479[7][6][6] = {{{&g_94,(void*)0,&g_111,&g_111,(void*)0,&g_94},{&g_94,&g_70,&l_462[5][0][5],&g_75,&g_94,&l_468[2]},{(void*)0,&g_75,&l_462[5][0][5],&l_461,(void*)0,&g_75},{(void*)0,&l_468[2],&l_461,&g_75,&l_434,&g_70},{&g_94,&g_94,&l_468[2],&g_111,&l_468[1],(void*)0},{&g_94,&l_461,&l_462[5][0][5],&g_94,&l_434,&g_111}},{{&g_75,&l_468[2],&l_461,&l_462[5][0][5],(void*)0,&g_94},{&g_75,(void*)0,&l_461,&l_461,&g_94,&g_111},{&l_468[2],&l_461,&g_75,&l_462[5][0][5],&l_468[2],&l_468[2]},{&l_434,&l_468[2],&l_468[2],&l_434,&l_468[2],&l_468[2]},{&g_75,&l_461,&l_462[5][0][5],&l_468[2],&g_94,&g_75},{&g_94,&g_75,&l_462[5][0][5],&l_468[2],&g_94,&l_460}},{{&g_75,&l_461,&l_461,&g_111,&l_468[2],(void*)0},{(void*)0,&l_468[2],&g_70,&l_461,&l_468[2],&l_462[5][0][5]},{&l_468[1],(void*)0,&l_461,&l_468[2],(void*)0,&l_434},{&l_468[2],&l_461,&l_462[5][0][5],(void*)0,&g_94,&l_461},{&l_468[2],&l_434,&l_462[5][0][5],&l_468[2],&g_94,(void*)0},{&l_468[1],&l_462[5][0][5],&l_468[2],&l_461,&l_461,&l_468[2]}},{{(void*)0,(void*)0,&g_75,&g_111,&g_94,&l_461},{&g_75,&l_460,&l_468[2],&l_468[2],&g_94,&g_75},{&g_94,&g_75,&l_468[2],&l_468[2],(void*)0,&l_461},{&g_75,&l_468[2],&g_75,&l_434,&l_468[2],&l_468[2]},{&l_434,&l_468[2],&l_468[2],&l_462[5][0][5],&l_468[2],(void*)0},{&g_75,&g_70,&l_462[5][0][5],(void*)0,&g_94,&l_461}},{{&g_94,&g_75,&g_75,(void*)0,&l_468[1],&l_434},{&g_94,&l_468[2],&l_462[5][0][5],&l_461,&g_75,&l_462[5][0][5]},{&g_94,&l_434,&l_468[2],&l_468[2],&l_434,&g_94},{&l_461,&l_468[2],&l_462[5][0][5],&l_468[1],&g_94,&l_462[5][0][5]},{&l_434,&g_94,&g_75,&l_462[5][0][5],&l_468[2],&g_94},{&l_434,&l_462[5][0][5],&l_462[5][0][5],&l_468[1],(void*)0,&l_468[2]}},{{&l_461,&g_94,&l_460,&l_468[2],(void*)0,&l_434},{&g_94,&l_462[5][0][5],(void*)0,&l_461,(void*)0,&l_468[2]},{&g_94,&l_434,&g_111,(void*)0,&l_468[2],&g_75},{&l_468[1],&l_468[2],&g_111,&l_468[2],&g_94,&l_468[2]},{&g_75,&l_468[2],(void*)0,&l_461,&l_434,&l_434},{&g_94,&l_460,&l_460,&g_94,&g_75,&l_468[2]}},{{&g_75,(void*)0,&l_462[5][0][5],&l_468[2],&l_468[1],&g_94},{&l_468[1],(void*)0,&g_75,&g_75,&l_468[1],&l_462[5][0][5]},{&g_94,(void*)0,&l_462[5][0][5],&g_70,&g_75,&g_94},{&g_94,&l_460,&l_468[2],(void*)0,&l_434,&l_462[5][0][5]},{&l_461,&l_434,&l_462[5][0][5],&g_70,&l_468[2],&g_94},{&l_434,&g_111,(void*)0,&l_468[2],&g_75,&g_111}}};
                    int i, j, k;
                    g_111 ^= p_14;
                    g_70 = (safe_add_func_int32_t_s_s(l_434, ((**g_185) == l_482[3][0][3])));
                }
                else
                {
                    unsigned short l_483 = 65532UL;
                    int l_497 = 5L;
                    l_483 = 0x401BC52DL;
                    if (l_484)
                    {
                        return g_437[0].f0;
                    }
                    else
                    {
                        int l_489 = 0xA21118B3L;
                        l_489 &= (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_14, l_484)), p_14));
                    }
                    if ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_43 <= l_483), (((safe_mul_func_int8_t_s_s((func_83(l_496) && g_379[0].f0), ((((*l_496) | g_374[6][0][3].f0) && ((p_14 == func_44((p_14 | 0xA27AL), l_497)) == l_483)) >= p_14))) == p_14) <= 254UL))), 3)))
                    {
                        (*l_496) ^= ((safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s(p_13, (p_14 || (!(safe_add_func_int8_t_s_s((((l_503 != l_505) == ((*l_435) != (*l_477))) & (0x2A77L < func_44(g_381.f0, p_14))), p_14)))))))) & g_381.f0);
                    }
                    else
                    {
                        int l_549[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_549[i] = 0x9BE26A99L;
                        (*l_504) = func_85((*l_496), g_375.f0, func_85((safe_mod_func_uint16_t_u_u(((g_472 & l_43) <= (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(p_13, (g_94 | (safe_sub_func_uint16_t_u_u((p_14 > func_44(g_75, l_515[6])), g_449.f2))))) <= 0x9D1770C0L), l_497))), (*l_496))), g_345, l_482[2][0][6]));

                        ;
                        l_497 ^= ((((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u((g_383[0].f0 > (safe_mul_func_int16_t_s_s(((+(l_523[1][2][2] != (*l_477))) <= g_374[6][0][3].f0), (l_434 && (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_378.f0, (+g_384[2][6][3].f0))), 8L)))))), 1)))) != (!250UL)), g_371.f0)) <= 0x85L) & g_529.f0) | p_14);
                        if (l_468[2])
                            continue;
                        g_550 |= ((g_375.f0 == (p_14 > func_59(g_471, (((safe_sub_func_uint8_t_u_u((!(~p_14)), (func_65((g_466 <= (g_449.f0 | (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_36[0][1], ((g_530[0].f0 & g_398[4][2][1]) <= l_549[1]))), 0x5AL)))), l_549[1]) | l_468[2]))) > 0xB87DL) & 0x88L), p_14))) || 0xECCE5C0BL);
                    }
                    if ((safe_unary_minus_func_int32_t_s(l_434)))
                    {
                        (*g_186) = (*g_186);
                        if (l_552)
                            continue;
                    }
                    else
                    {
                        (*l_496) &= p_14;
                    }
                }
            }
            else
            {
                const short l_562 = (-1L);
                int l_563[2][8][5] = {{{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL}},{{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL},{0x486CE1BAL,0x486CE1BAL,0x190D58DBL,0L,0x190D58DBL}}};
                int i, j, k;
                if (l_462[5][0][5])
                {
                    (**g_185) = (void*)0;

                    ;
                    return l_468[4];
                }
                else
                {
                    int * const **l_561 = (void*)0;
                    l_468[2] = (l_36[0][0] == (((&g_475 == (void*)0) > (safe_sub_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((p_14 | (safe_div_func_uint16_t_u_u((l_559 != l_561), 0x95E7L))), func_59((l_36[0][1] >= 6UL), p_14, p_13))) < l_562) & p_14), p_13))) <= 0UL));
                }
                --g_565[6][2];
                l_434 |= (+func_65((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(1UL, 13)), func_51(((void*)0 == l_478[0][6][6]), (l_562 < (l_468[0] != g_383[0].f0)), (~p_14)))), g_304[3][0]));
            }
        }
        (*l_572) &= p_14;
        for (g_400 = 0; (g_400 <= 1); g_400 += 1)
        {
            int *l_575 = &l_460;
            (*l_575) &= (~(safe_rshift_func_int16_t_s_s(8L, func_83(&l_462[5][0][5]))));
        }
    }

    ;
    return p_14;
}







static unsigned short func_29(unsigned short p_30, unsigned p_31, char p_32)
{
    unsigned short l_34 = 0x9FF9L;
    g_33 = g_15[4];
    return l_34;
}







static char func_44(unsigned p_45, int p_46)
{
    int *l_414[6] = {&g_111,&g_111,&g_75,&g_111,&g_111,&g_75};
    int **l_415 = &l_414[4];
    int i;
    (*l_415) = l_414[4];
    return p_46;
}







static unsigned short func_51(char p_52, char p_53, int p_54)
{
    unsigned char l_301 = 4UL;
    int *l_323 = (void*)0;
    int **l_322 = &l_323;
    int ***l_321 = &l_322;
    int l_347 = 0x82543912L;
    int l_405[6];
    int l_413 = 6L;
    int i;
    for (i = 0; i < 6; i++)
        l_405[i] = (-8L);
    if ((func_59((safe_rshift_func_int8_t_s_s(p_52, 0)), (func_65(g_33, g_33) > 0x27L), ((g_138 ^ (p_53 <= l_301)) && (safe_div_func_uint8_t_u_u(g_304[3][0], g_133)))) > p_54))
    {
        (**g_185) = (**g_185);
    }
    else
    {
        int *l_311 = &g_70;
        unsigned l_312 = 0xDFC68977L;
        int **l_320 = &l_311;
        int ** const * const l_319 = &l_320;
        int l_348 = 0x9DBA9E3AL;
        int l_352 = (-3L);
        union U0 *l_364[4][8];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 8; j++)
                l_364[i][j] = &g_365;
        }
        (*l_311) = 8L;
lbl_394:
        (*l_311) = ((*l_311) > l_312);
        for (p_53 = 0; (p_53 != (-11)); p_53--)
        {
            int *l_340 = &g_70;
            int l_349 = 1L;
            int l_351 = (-1L);
            if ((p_54 ^ (+((g_298 <= (safe_sub_func_uint32_t_u_u(p_53, p_52))) <= ((safe_mul_func_uint16_t_u_u(p_52, (l_319 == l_321))) && g_281)))))
            {
                for (g_160 = 0; (g_160 > 26); g_160 = safe_add_func_uint8_t_u_u(g_160, 9))
                {
                    for (g_179.f2 = 0; (g_179.f2 >= 28); g_179.f2++)
                    {
                        return p_53;
                    }
                }
            }
            else
            {
                int **l_338 = &l_311;
                const unsigned short l_339 = 6UL;
                int *l_346[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_346[i] = &g_111;
                if ((safe_div_func_int8_t_s_s(g_70, (safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_83(func_85((safe_mul_func_int16_t_s_s(2L, ((*l_311) > (((void*)0 == l_338) >= 0x4E80F069L)))), (l_339 & 246UL), l_340)), g_281)), 0xDAL)))))
                {
                    if ((*l_340))
                        break;
                    if (p_54)
                        break;
                }
                else
                {
                    (*g_186) = (*g_186);
                    (*l_340) = ((p_53 == (safe_sub_func_int32_t_s_s((p_53 != g_133), ((((p_53 ^ (p_53 < g_133)) < g_94) || (safe_sub_func_int32_t_s_s((**l_338), (((3L <= g_345) <= 0UL) | 65527UL)))) && (*l_311))))) >= p_52);
                }

                ;
                ++g_353;
            }
            for (g_94 = 3; (g_94 >= 0); g_94 -= 1)
            {
                union U1 *l_391[10] = {&g_392,&g_392,&g_392,&g_392,&g_392,&g_392,&g_392,&g_392,&g_392,&g_392};
                int l_396 = 2L;
                int l_397[6][8] = {{0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL},{0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL},{0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL},{0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL},{0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL},{0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL,0x4018F86AL}};
                int ***l_403 = &l_322;
                int *l_404[8][1][1] = {{{&g_75}},{{&l_396}},{{&g_75}},{{&l_396}},{{&g_75}},{{&l_396}},{{&g_75}},{{&l_396}}};
                int i, j, k;
                if ((safe_lshift_func_int8_t_s_u(((((*g_186) != (*g_186)) == (safe_mod_func_uint16_t_u_u((g_162[g_94][g_94] ^ g_162[g_94][g_94]), g_15[1]))) && (!p_53)), 0)))
                {
                    const union U0 *l_362 = &g_363;
                    for (g_133 = 0; (g_133 <= 3); g_133 += 1)
                    {
                        union U1 *l_369[5][10] = {{&g_370,&g_380,&g_384[2][6][3],&g_382,&g_372,&g_375,&g_372,&g_382,&g_384[2][6][3],&g_380},{(void*)0,&g_387[2],&g_376,&g_379[0],&g_374[6][0][3],&g_383[0],&g_385,&g_380,(void*)0,&g_370},{&g_384[2][6][3],&g_386,&g_381,&g_370,(void*)0,&g_383[0],(void*)0,&g_385,&g_378,&g_384[2][6][3]},{&g_385,&g_372,&g_372,&g_385,&g_371,(void*)0,(void*)0,(void*)0,&g_386,&g_377},{&g_383[0],&g_375,&g_381,&g_379[0],(void*)0,&g_374[6][0][3],&g_372,(void*)0,&g_386,(void*)0}};
                        union U1 **l_368[3];
                        union U1 **l_388 = &l_369[0][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_368[i] = &l_369[2][9];
                        if (p_54)
                            break;
                        (**l_320) = (safe_mul_func_uint8_t_u_u(g_162[g_94][g_94], (l_362 != l_364[1][4])));
                        (*l_388) = g_366;


                        return p_52;
                    }
                }
                else
                {
                    int l_399 = (-2L);
                    for (g_350 = 3; (g_350 >= 0); g_350 -= 1)
                    {
                        g_75 = (0xB5F81B0AL > (safe_add_func_int8_t_s_s(p_54, 249UL)));
                    }
                    (*l_320) = func_85(g_33, g_281, &l_351);

                    ;
                    ;
                    if ((p_53 != (((void*)0 == l_391[6]) >= p_54)))
                    {
                        int *l_395[5][7] = {{&l_347,&g_70,&l_347,&l_347,&g_70,&l_347,&l_347},{&l_351,&l_348,&l_348,&l_348,&l_351,&g_70,&l_351},{&g_70,&l_347,&l_347,&g_70,&l_347,&l_347,&g_70},{(void*)0,&l_348,(void*)0,&l_348,&l_351,&l_348,(void*)0},{&g_70,&g_70,&l_349,&g_70,&g_70,&l_349,&g_70}};
                        int i, j;
                        if (g_350)
                            goto lbl_394;
                        --g_400;
                        if (p_52)
                            break;
                    }
                    else
                    {
                        p_54 &= (&g_366 != (void*)0);
                        (*l_311) = ((l_403 == (void*)0) & g_374[6][0][3].f0);
                    }
                }
                --g_406;
                for (p_52 = 0; (p_52 <= 3); p_52 += 1)
                {
                    (**l_403) = &p_54;

                    ;
                    if (p_53)
                        break;
                    (**l_320) = (((7UL == (safe_sub_func_uint8_t_u_u(0xC9L, (1L || 3UL)))) != (-3L)) | (p_53 <= (safe_rshift_func_uint8_t_u_s(g_406, (*l_323)))));
                    if (p_53)
                        break;
                }
            }
            (**l_321) = (*l_322);
        }
        (*l_322) = (**l_321);
    }

    ;
    return l_413;
}







static char func_59(short p_60, unsigned p_61, int p_62)
{
    char l_309 = (-9L);
    int *l_310 = &g_75;
    (*l_310) = (safe_sub_func_uint32_t_u_u(((g_304[3][0] < func_83(&g_75)) != (safe_mul_func_uint8_t_u_u(0x59L, g_33))), l_309));
    return (*l_310);
}







static char func_65(const int p_66, unsigned short p_67)
{
    int l_68 = 0x04799C81L;
    int *l_69 = &g_70;
    short l_73[5][8] = {{0x59AEL,0x848AL,0L,0x848AL,0x59AEL,(-1L),(-1L),0x59AEL},{0x848AL,(-5L),(-5L),0x848AL,(-1L),0x59AEL,(-1L),0x848AL},{(-5L),(-1L),(-5L),(-1L),0L,0L,(-1L),(-5L)},{(-1L),(-1L),0L,0x59AEL,0L,0x59AEL,0L,(-1L)},{(-1L),(-5L),(-1L),0L,0L,0x59AEL,0x848AL,0L}};
    int i, j;
    (*l_69) = l_68;
    for (p_67 = 25; (p_67 > 40); ++p_67)
    {
        unsigned short l_80 = 1UL;
        for (g_70 = 4; (g_70 >= 1); g_70 -= 1)
        {
            int *l_74 = &g_75;
            int *l_76 = &g_75;
            int *l_77 = &g_75;
            int l_78 = (-1L);
            int *l_79[6][7] = {{&l_78,&l_78,(void*)0,&l_78,(void*)0,&l_78,&l_78},{(void*)0,&g_70,&g_70,&g_70,&g_70,&g_70,(void*)0},{&l_78,&l_78,(void*)0,&l_78,(void*)0,&l_78,&l_78},{(void*)0,&g_70,&g_70,&g_70,&g_70,&g_70,(void*)0},{&l_78,&l_78,(void*)0,&l_78,(void*)0,&l_78,&l_78},{(void*)0,&g_70,&g_70,&g_70,&g_70,&g_70,(void*)0}};
            int i, j;
            l_80--;
            for (l_78 = 0; (l_78 <= 4); l_78 += 1)
            {
                int i, j;
                (*l_77) = func_83(func_85(l_73[g_70][(l_78 + 3)], g_15[4], l_79[g_70][g_70]));

                ;
                (*l_74) = ((*l_77) >= (safe_mod_func_uint16_t_u_u((p_66 || 0x55L), ((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(p_67, (g_94 && (safe_lshift_func_int16_t_s_u(g_15[3], (g_133 != p_67)))))), 0)) != (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_80, p_67)), 0L))) ^ 0x914BL) || p_67))));
                if (g_111)
                    break;
            }
            for (l_80 = 0; (l_80 <= 4); l_80 += 1)
            {
                int l_297[8][3][6] = {{{0xF7DA083CL,(-6L),0x2AE4F81FL,(-7L),1L,(-1L)},{1L,0x1A146EBEL,1L,(-6L),(-1L),(-1L)},{0x837DD9ADL,0x2AE4F81FL,0x2AE4F81FL,0x837DD9ADL,0x65C340BFL,(-6L)}},{{(-1L),0xD4496F3EL,(-1L),0x01D9B859L,1L,1L},{(-1L),1L,9L,0x1A146EBEL,1L,0x1A146EBEL},{0x0D745113L,0xD4496F3EL,0x0D745113L,0xEDC7B7FFL,0x65C340BFL,1L}},{{(-6L),0x2AE4F81FL,(-7L),1L,(-1L),0x65C340BFL},{0x01D9B859L,0x1A146EBEL,0xEDC7B7FFL,1L,1L,0xEDC7B7FFL},{(-6L),(-6L),0xD4496F3EL,0x2AE4F81FL,0x65C340BFL,0xD4496F3EL}},{{0xD4496F3EL,(-1L),0x01D9B859L,1L,1L,1L},{0x837DD9ADL,0xD4496F3EL,0x01D9B859L,(-1L),0x01D9B859L,0xD4496F3EL},{0xF7DA083CL,(-1L),1L,0xEDC7B7FFL,9L,0x2AE4F81FL}},{{0xEDC7B7FFL,9L,0x2AE4F81FL,0x01D9B859L,(-7L),0x1A146EBEL},{(-6L),9L,0x65C340BFL,0x65C340BFL,9L,(-6L)},{9L,(-1L),0xD4496F3EL,(-1L),0x01D9B859L,1L}},{{0x65C340BFL,0xD4496F3EL,(-7L),0x837DD9ADL,1L,0x0D745113L},{0x65C340BFL,(-1L),0x837DD9ADL,(-1L),0x65C340BFL,0x01D9B859L},{9L,0x01D9B859L,1L,0x65C340BFL,0x0D745113L,0xF7DA083CL}},{{(-6L),1L,0x0D745113L,0x01D9B859L,0xF7DA083CL,0xF7DA083CL},{0xEDC7B7FFL,1L,1L,0xEDC7B7FFL,0x1A146EBEL,0x01D9B859L},{0xF7DA083CL,1L,0x837DD9ADL,(-1L),(-1L),0x0D745113L}},{{0x837DD9ADL,(-6L),(-7L),1L,(-1L),1L},{0xD4496F3EL,1L,0xD4496F3EL,0x2AE4F81FL,0x1A146EBEL,(-6L)},{0x01D9B859L,1L,0x65C340BFL,0x0D745113L,0xF7DA083CL,0x1A146EBEL}}};
                int i, j, k;
                g_281 |= (safe_rshift_func_uint16_t_u_s((((((safe_add_func_uint8_t_u_u(func_83(&l_78), l_73[l_80][(g_70 + 1)])) != 0x5E432B75L) == ((safe_mul_func_int8_t_s_s(l_73[g_70][(g_70 + 1)], (safe_mul_func_int8_t_s_s(l_73[g_70][(g_70 + 1)], g_138)))) < 0x9D535500L)) >= p_67) || p_67), l_80));
                for (g_179.f0 = 0; (g_179.f0 <= 4); g_179.f0 += 1)
                {
                    unsigned short l_282 = 65533UL;
                    for (g_281 = 1; (g_281 <= 4); g_281 += 1)
                    {
                        (*l_76) |= g_15[2];
                        return l_73[g_70][(g_70 + 1)];
                    }
                    for (g_281 = 1; (g_281 <= 4); g_281 += 1)
                    {
                        int *l_287 = &g_70;
                        int **l_296 = &l_76;
                        (*l_296) = func_85((p_67 >= (((0L < (l_282 >= (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(g_179.f2, ((void*)0 != l_287))), ((safe_mod_func_int8_t_s_s(((~(safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(250UL, ((l_282 != 1L) > l_73[g_70][(g_70 + 1)]))), 0)), 3))) & 0L), 0xBAL)) & g_179.f2))))) >= (*l_69)) == (*l_287))), p_66, &g_94);

                        ;
                        (*g_186) = (**g_185);
                        g_94 = p_67;
                    }
                    return l_282;
                }

                g_298--;
            }
        }
    }
    return p_66;
}







static int func_83(int * p_84)
{
    const unsigned l_109 = 0xECF96537L;
    int * const l_122 = (void*)0;
    int * const *l_121 = &l_122;
    int l_136 = 9L;
    int l_137 = (-10L);
    int l_227 = 0x86014B7CL;
    int *l_251 = &g_111;
    int *l_252 = &g_75;
    int *l_253 = &l_137;
    int *l_254 = &g_111;
    int *l_255 = &g_111;
    unsigned l_256[3];
    int i;
    for (i = 0; i < 3; i++)
        l_256[i] = 2UL;
    for (g_75 = 16; (g_75 == (-27)); g_75 = safe_sub_func_int8_t_s_s(g_75, 3))
    {
        unsigned l_105 = 0UL;
        unsigned l_108 = 18446744073709551606UL;
        int **l_112 = (void*)0;
        int *l_114[6][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{&g_75,&g_75,&g_75}},{{(void*)0,(void*)0,(void*)0}},{{&g_75,&g_75,&g_75}},{{(void*)0,(void*)0,(void*)0}},{{&g_75,&g_75,&g_75}}};
        int **l_113 = &l_114[3][0][2];
        int l_153 = 0xFD5C3A27L;
        int i, j, k;
        for (g_94 = 0; (g_94 != 15); g_94 = safe_add_func_uint16_t_u_u(g_94, 1))
        {
            int *l_98 = &g_94;
            int *l_110 = &g_111;
            if ((*p_84))
                break;
            if (g_33)
                continue;
            (*l_110) ^= ((safe_unary_minus_func_uint32_t_u((((void*)0 != l_98) || (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_98) != (0x5C3EL || g_15[3])), (safe_mod_func_int16_t_s_s(l_105, l_105)))), ((safe_rshift_func_uint8_t_u_u(l_108, 0)) < (l_109 || (*l_98)))))))) <= l_105);
        }
        (*l_113) = &g_75;
        if ((*p_84))
            continue;
        if (g_70)
        {
            int l_123 = 0x7ACA13C8L;
            int l_130[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_130[i][j] = 0L;
            }
            for (g_94 = 0; (g_94 == 19); g_94 = safe_add_func_int32_t_s_s(g_94, 5))
            {
                int l_145 = 1L;
                int l_161 = 1L;
                union U0 *l_178 = &g_179;
                int *** const l_184 = &l_113;
                unsigned l_189 = 4294967295UL;
                unsigned l_207 = 0xEF009D05L;
                short l_224 = 1L;
                g_111 &= (l_109 && (((!(g_33 < (8L > 0x1EL))) > (safe_rshift_func_int8_t_s_u(((l_121 == (void*)0) < (l_123 < l_123)), 3))) != g_70));
            }
        }
        else
        {
            char l_233[8] = {1L,(-9L),1L,(-9L),1L,(-9L),1L,(-9L)};
            int i;
            for (g_179.f2 = 0; (g_179.f2 == 34); ++g_179.f2)
            {
                g_111 |= ((l_233[7] != (l_233[7] < (safe_add_func_uint32_t_u_u(l_233[1], g_15[3])))) & 0x14L);
            }
            for (l_137 = (-5); (l_137 <= 17); l_137 = safe_add_func_int16_t_s_s(l_137, 1))
            {
                unsigned char l_246 = 1UL;
                g_94 |= (((*p_84) <= g_111) != (safe_sub_func_int32_t_s_s((*p_84), (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_246, (safe_add_func_uint32_t_u_u(2UL, (((safe_mod_func_uint8_t_u_u(((void*)0 == (*g_185)), g_33)) ^ 8L) && (-3L)))))), l_233[2])), 1L)))));
            }
        }
    }
    l_256[2]++;
    return g_179.f2;
}







static int * func_85(int p_86, short p_87, int * p_88)
{
    int *l_91 = &g_75;
    g_89 = (void*)0;

    ;
    return l_91;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_162[i][j], "g_162[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_179.f2, "g_179.f2", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_304[i][j], "g_304[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    transparent_crc(g_363.f1, "g_363.f1", print_hash_value);
    transparent_crc(g_363.f2, "g_363.f2", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_367.f0, "g_367.f0", print_hash_value);
    transparent_crc(g_367.f1, "g_367.f1", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_372.f1, "g_372.f1", print_hash_value);
    transparent_crc(g_373.f0, "g_373.f0", print_hash_value);
    transparent_crc(g_373.f1, "g_373.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_374[i][j][k].f0, "g_374[i][j][k].f0", print_hash_value);
                transparent_crc(g_374[i][j][k].f1, "g_374[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_375.f0, "g_375.f0", print_hash_value);
    transparent_crc(g_375.f1, "g_375.f1", print_hash_value);
    transparent_crc(g_376.f0, "g_376.f0", print_hash_value);
    transparent_crc(g_376.f1, "g_376.f1", print_hash_value);
    transparent_crc(g_377.f0, "g_377.f0", print_hash_value);
    transparent_crc(g_377.f1, "g_377.f1", print_hash_value);
    transparent_crc(g_378.f0, "g_378.f0", print_hash_value);
    transparent_crc(g_378.f1, "g_378.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_379[i].f0, "g_379[i].f0", print_hash_value);
        transparent_crc(g_379[i].f1, "g_379[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_380.f0, "g_380.f0", print_hash_value);
    transparent_crc(g_380.f1, "g_380.f1", print_hash_value);
    transparent_crc(g_381.f0, "g_381.f0", print_hash_value);
    transparent_crc(g_381.f1, "g_381.f1", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_383[i].f0, "g_383[i].f0", print_hash_value);
        transparent_crc(g_383[i].f1, "g_383[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_384[i][j][k].f0, "g_384[i][j][k].f0", print_hash_value);
                transparent_crc(g_384[i][j][k].f1, "g_384[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_385.f0, "g_385.f0", print_hash_value);
    transparent_crc(g_385.f1, "g_385.f1", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_387[i].f0, "g_387[i].f0", print_hash_value);
        transparent_crc(g_387[i].f1, "g_387[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_392.f0, "g_392.f0", print_hash_value);
    transparent_crc(g_392.f1, "g_392.f1", print_hash_value);
    transparent_crc(g_393.f0, "g_393.f0", print_hash_value);
    transparent_crc(g_393.f1, "g_393.f1", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_398[i][j][k], "g_398[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_420.f0, "g_420.f0", print_hash_value);
    transparent_crc(g_420.f1, "g_420.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_437[i].f0, "g_437[i].f0", print_hash_value);
        transparent_crc(g_437[i].f1, "g_437[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_449.f0, "g_449.f0", print_hash_value);
    transparent_crc(g_449.f1, "g_449.f1", print_hash_value);
    transparent_crc(g_449.f2, "g_449.f2", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_524.f0, "g_524.f0", print_hash_value);
    transparent_crc(g_524.f1, "g_524.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_525[i][j].f0, "g_525[i][j].f0", print_hash_value);
            transparent_crc(g_525[i][j].f1, "g_525[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_526.f0, "g_526.f0", print_hash_value);
    transparent_crc(g_526.f1, "g_526.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_527[i][j].f0, "g_527[i][j].f0", print_hash_value);
            transparent_crc(g_527[i][j].f1, "g_527[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_528.f0, "g_528.f0", print_hash_value);
    transparent_crc(g_528.f1, "g_528.f1", print_hash_value);
    transparent_crc(g_529.f0, "g_529.f0", print_hash_value);
    transparent_crc(g_529.f1, "g_529.f1", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_530[i].f0, "g_530[i].f0", print_hash_value);
        transparent_crc(g_530[i].f1, "g_530[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_531.f0, "g_531.f0", print_hash_value);
    transparent_crc(g_531.f1, "g_531.f1", print_hash_value);
    transparent_crc(g_532.f0, "g_532.f0", print_hash_value);
    transparent_crc(g_532.f1, "g_532.f1", print_hash_value);
    transparent_crc(g_533.f0, "g_533.f0", print_hash_value);
    transparent_crc(g_533.f1, "g_533.f1", print_hash_value);
    transparent_crc(g_534.f0, "g_534.f0", print_hash_value);
    transparent_crc(g_534.f1, "g_534.f1", print_hash_value);
    transparent_crc(g_535.f0, "g_535.f0", print_hash_value);
    transparent_crc(g_535.f1, "g_535.f1", print_hash_value);
    transparent_crc(g_536.f0, "g_536.f0", print_hash_value);
    transparent_crc(g_536.f1, "g_536.f1", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_565[i][j], "g_565[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_585, "g_585", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_602[i], "g_602[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_751[i], "g_751[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_832[i][j][k].f0, "g_832[i][j][k].f0", print_hash_value);
                transparent_crc(g_832[i][j][k].f1, "g_832[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_833.f0, "g_833.f0", print_hash_value);
    transparent_crc(g_833.f1, "g_833.f1", print_hash_value);
    transparent_crc(g_839.f2, "g_839.f2", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_870, "g_870", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    transparent_crc(g_1064, "g_1064", print_hash_value);
    transparent_crc(g_1087.f0, "g_1087.f0", print_hash_value);
    transparent_crc(g_1087.f1, "g_1087.f1", print_hash_value);
    transparent_crc(g_1088.f0, "g_1088.f0", print_hash_value);
    transparent_crc(g_1088.f1, "g_1088.f1", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1169.f0, "g_1169.f0", print_hash_value);
    transparent_crc(g_1169.f1, "g_1169.f1", print_hash_value);
    transparent_crc(g_1183.f0, "g_1183.f0", print_hash_value);
    transparent_crc(g_1183.f1, "g_1183.f1", print_hash_value);
    transparent_crc(g_1195.f0, "g_1195.f0", print_hash_value);
    transparent_crc(g_1195.f1, "g_1195.f1", print_hash_value);
    transparent_crc(g_1230.f0, "g_1230.f0", print_hash_value);
    transparent_crc(g_1230.f1, "g_1230.f1", print_hash_value);
    transparent_crc(g_1234, "g_1234", print_hash_value);
    transparent_crc(g_1246.f0, "g_1246.f0", print_hash_value);
    transparent_crc(g_1246.f1, "g_1246.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1252[i], "g_1252[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1257, "g_1257", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1311[i], "g_1311[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1332[i], "g_1332[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1372, "g_1372", print_hash_value);
    transparent_crc(g_1454, "g_1454", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    transparent_crc(g_1483, "g_1483", print_hash_value);
    transparent_crc(g_1503.f0, "g_1503.f0", print_hash_value);
    transparent_crc(g_1503.f1, "g_1503.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
