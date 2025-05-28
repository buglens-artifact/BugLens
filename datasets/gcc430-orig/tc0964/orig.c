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
   const unsigned char f0;
   int f1;
   const unsigned f2;
   unsigned char f3;
   const short f4;
   unsigned short f5;
};

union U1 {
   const int f0;
};


static unsigned char g_36 = 251UL;
static struct S0 g_79 = {253UL,-1L,0x2D2A5DBDL,1UL,0xA65DL,1UL};
static const union U1 g_104 = {0x2DF671B3L};
static union U1 g_122 = {0x59C1DB3DL};
static int *g_123 = &g_79.f1;
static union U1 *g_146 = &g_122;
static union U1 ** const g_145 = &g_146;
static unsigned char g_205 = 255UL;
static unsigned g_213 = 0x42DB4DAEL;
static struct S0 *g_219 = &g_79;
static struct S0 **g_218 = &g_219;
static unsigned g_283 = 0xCFE38B7FL;
static unsigned short g_284 = 65531UL;
static struct S0 g_297 = {0UL,0x7B437FCCL,0x442438CEL,0x9DL,-1L,0x8396L};
static short g_301 = 0L;
static unsigned short g_323 = 65535UL;
static union U1 *g_363 = &g_122;
static unsigned short g_378 = 0x67C8L;
static union U1 **g_440 = &g_363;
static unsigned char g_501 = 0x4DL;
static unsigned short g_509[3] = {0xED18L, 0xED18L, 0xED18L};
static union U1 g_516 = {0xF32A5538L};
static unsigned g_591 = 0x8D0FC2ABL;
static unsigned char g_592 = 0x13L;
static int g_623 = (-10L);
static const unsigned char g_658 = 246UL;
static const int g_702[4][3] = {{0xEB85D08DL, 0L, 0xCFF1D72BL}, {0xEB85D08DL, 0L, 0xCFF1D72BL}, {0xEB85D08DL, 0L, 0xCFF1D72BL}, {0xEB85D08DL, 0L, 0xCFF1D72BL}};
static const int *g_740 = &g_79.f1;
static int **g_746[5][8][6] = {{{(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}}, {{(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}}, {{(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}}, {{(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}}, {{(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}, {(void*)0, (void*)0, &g_123, (void*)0, (void*)0, &g_123}}};
static int ***g_745 = &g_746[2][6][0];
static union U1 g_797 = {0xA5E24CE3L};
static struct S0 g_802 = {1UL,0x168D88BDL,4294967290UL,0x78L,4L,0xFF53L};
static char g_871 = 5L;
static unsigned char g_1021 = 248UL;
static char g_1043[10] = {0xE8L, 0L, 0xE8L, 0L, 0xE8L, 0L, 0xE8L, 0L, 0xE8L, 0L};
static const unsigned short g_1163 = 2UL;
static unsigned short g_1226 = 0xA765L;
static unsigned short g_1274 = 0x2CB7L;
static struct S0 g_1337 = {0x18L,0L,1UL,0xF2L,0L,8UL};
static union U1 g_1379 = {0x76B18A17L};
static struct S0 g_1415 = {0x9BL,0x3D34472AL,1UL,0xA9L,-6L,65526UL};
static char g_1425 = 0x89L;



static unsigned short func_1(void);
static int func_2(union U1 p_3, short p_4, int p_5, char p_6, struct S0 p_7);
static short func_9(int p_10, unsigned short p_11, struct S0 p_12, union U1 p_13);
static unsigned func_16(int p_17, unsigned short p_18, char p_19);
static const unsigned short func_20(unsigned p_21, short p_22, char p_23);
static unsigned char func_56(char p_57, unsigned short p_58, short p_59, unsigned p_60, char p_61);
static char func_62(int p_63);
static short func_64(union U1 p_65, unsigned p_66, int p_67, unsigned short p_68, int p_69);
static union U1 func_70(short p_71, int p_72, char p_73);
static int func_74(struct S0 p_75, unsigned short p_76, unsigned p_77, int p_78);
static unsigned short func_1(void)
{
    union U1 l_8 = {0x836B16B4L};
    int l_49 = 1L;
    int *l_1424 = (void*)0;
    char l_1435 = 0x9FL;
    g_1425 ^= func_2(l_8, func_9((safe_add_func_uint8_t_u_u((func_16((func_20((((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(2L, ((safe_lshift_func_int16_t_s_s(((g_36 ^ (safe_sub_func_uint32_t_u_u((0x469209A4L != 0xD514FAF1L), (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(l_8.f0, 1UL)), (g_36 && (safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(g_36, (-1L))) >= 0x72L), 3L))))) & g_36), 13)) >= g_36) != 7L)))) >= 1UL), l_8.f0)) <= l_8.f0))) >= 4UL), g_36)) < 0x81F51B43L), 65533UL)), g_36)), 5)) <= 0UL) <= g_36), l_49, g_36) & l_49), g_297.f4, l_8.f0) == l_49), l_49)), l_8.f0, g_1337, g_797), l_49, l_49, g_1415);
    for (g_1425 = 0; (g_1425 > 3); g_1425++)
    {
        struct S0 ***l_1432 = &g_218;
        int l_1436 = 0xF21E312CL;
        int *l_1437 = &l_1436;
        (*l_1437) = (safe_rshift_func_int8_t_s_s((-1L), ((safe_sub_func_uint16_t_u_u(((&g_218 == l_1432) | ((6UL ^ 2L) < (*g_740))), (safe_add_func_int16_t_s_s(l_1435, l_1436)))) && (0L ^ 6UL))));
    }
    return g_284;
}







static int func_2(union U1 p_3, short p_4, int p_5, char p_6, struct S0 p_7)
{
    unsigned l_1418[5] = {0x5AEFB02EL, 0xF3723BEAL, 0x5AEFB02EL, 0xF3723BEAL, 0x5AEFB02EL};
    int *l_1423 = (void*)0;
    int i;
    if ((safe_rshift_func_uint8_t_u_u(l_1418[3], 4)))
    {
        return l_1418[3];
    }
    else
    {
        const unsigned l_1419 = 0x9C6CC315L;
        int l_1421 = 0L;
        if (((*g_745) == (void*)0))
        {
            int *l_1420 = &g_297.f1;
            (*l_1420) = (l_1419 != 0x3BBBL);
        }
        else
        {
            int **l_1422 = &g_123;
            l_1421 ^= 0xD52518C5L;
            (*l_1422) = &p_5;
        }
        l_1423 = l_1423;
    }
    return p_7.f0;
}







static short func_9(int p_10, unsigned short p_11, struct S0 p_12, union U1 p_13)
{
    union U1 *l_1345[10] = {(void*)0, &g_797, (void*)0, &g_797, (void*)0, &g_797, (void*)0, &g_797, (void*)0, &g_797};
    int l_1346 = (-1L);
    struct S0 l_1349 = {0x3BL,-1L,3UL,0x60L,-2L,0x2E53L};
    unsigned l_1350 = 0x4E27C546L;
    int **l_1351 = (void*)0;
    int **l_1352 = &g_123;
    unsigned l_1377 = 0x4505EF9BL;
    const struct S0 *l_1392 = &g_1337;
    const struct S0 **l_1391 = &l_1392;
    const struct S0 ***l_1390 = &l_1391;
    int l_1408 = 0xCF5C1753L;
    int i;
    l_1349.f1 &= p_11;
    (*l_1352) = &l_1346;
    for (l_1346 = 0; (l_1346 <= 4); l_1346 += 1)
    {
        struct S0 **l_1359 = &g_219;
        union U1 l_1360 = {-5L};
        int l_1361 = 0x9D93E4C6L;
        int *l_1362[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        int l_1393[1][10][6] = {{{0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}, {0x6E78EAA1L, 0xCEFDD850L, 0x0B1D6CCCL, 0xC4AC67EEL, 0L, 0x1C569C27L}}};
        int l_1394[3][9][2] = {{{0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}}, {{0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}}, {{0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}, {0xDC945711L, 0xADE31D9EL}}};
        union U1 l_1407[8] = {{1L}, {1L}, {0x781722C4L}, {1L}, {1L}, {0x781722C4L}, {1L}, {1L}};
        const int *l_1413 = &g_1337.f1;
        int i, j, k;
        l_1349.f1 ^= ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((-8L), (*g_740))), (((safe_rshift_func_int8_t_s_s(g_1226, 0)) == ((&g_145 == &g_145) >= (((((void*)0 != l_1359) == func_64(l_1360, l_1361, g_323, p_12.f1, g_1337.f2)) == g_871) | p_12.f2))) && 0x080388DDL))) & g_79.f1);
        for (g_283 = 0; (g_283 <= 4); g_283 += 1)
        {
            int *l_1367 = &g_802.f1;
            unsigned l_1378 = 0x4F47E30CL;
            int l_1396 = 0L;
            int *l_1414 = (void*)0;
            p_12.f1 &= (((safe_rshift_func_uint16_t_u_s(g_283, p_12.f3)) < ((void*)0 != &g_219)) ^ ((*g_745) != l_1352));
            (*l_1352) = l_1367;
            for (g_1337.f5 = 0; (g_1337.f5 <= 4); g_1337.f5 += 1)
            {
                struct S0 l_1368 = {253UL,0xF27ED548L,0xE9D9F9C1L,0UL,1L,0x2162L};
                int i;
                (*g_123) ^= p_10;
                for (g_297.f5 = 0; g_297.f5 < 6; g_297.f5 += 1)
                {
                    l_1362[g_297.f5] = &l_1361;
                }
                if ((func_74(l_1368, g_702[0][2], g_1163, (*g_740)) && (*l_1367)))
                {
                    int l_1373 = (-7L);
                    union U1 l_1374 = {1L};
                    for (g_802.f3 = 0; (g_802.f3 <= 5); g_802.f3 += 1)
                    {
                        int i;
                        p_12.f1 &= (*g_740);
                        l_1362[g_802.f3] = &p_10;
                    }
                    for (p_12.f1 = 2; (p_12.f1 >= 0); p_12.f1 -= 1)
                    {
                        int i;
                        return g_509[p_12.f1];
                    }
                    p_12.f1 = (safe_sub_func_int8_t_s_s((0x0BBC9886L & (safe_add_func_uint8_t_u_u((func_74(p_12, g_297.f2, (*l_1367), l_1373) || (g_79.f3 >= func_64(l_1374, g_297.f3, p_12.f0, p_13.f0, l_1374.f0))), 0x91L))), (-9L)));
                }
                else
                {
                    (*g_123) |= p_12.f2;
                    (**l_1352) |= (safe_rshift_func_int8_t_s_u(g_104.f0, 5));
                    l_1378 = l_1377;
                }
                (**l_1352) ^= p_12.f0;
            }
            for (g_623 = 1; (g_623 <= 4); g_623 += 1)
            {
                unsigned char l_1381 = 0x47L;
                int l_1410 = 0x7DF1A8CCL;
                for (g_213 = 0; (g_213 <= 4); g_213 += 1)
                {
                    union U1 l_1380[9] = {{0x5DF11CA5L}, {8L}, {0x5DF11CA5L}, {8L}, {0x5DF11CA5L}, {8L}, {0x5DF11CA5L}, {8L}, {0x5DF11CA5L}};
                    struct S0 * const *l_1389 = &g_219;
                    struct S0 * const **l_1388 = &l_1389;
                    const int *l_1411 = (void*)0;
                    int i;
                }
                if ((*g_740))
                    continue;
                if (p_12.f2)
                    continue;
                return p_12.f1;
            }
        }
    }
    p_12.f1 ^= (0xA5L < g_79.f1);
    return g_1043[6];
}







static unsigned func_16(int p_17, unsigned short p_18, char p_19)
{
    short l_1208 = 0x06BFL;
    int **l_1222 = (void*)0;
    union U1 * const *l_1232 = &g_363;
    int l_1234 = 0xCF8F79ECL;
    union U1 l_1256 = {0xC251699FL};
    char l_1260 = 0x2BL;
    int *l_1264 = &l_1234;
    struct S0 * const *l_1278 = (void*)0;
    struct S0 * const **l_1277 = &l_1278;
    unsigned l_1331[4] = {4294967295UL, 0UL, 4294967295UL, 0UL};
    char l_1335 = 1L;
    int i;
    if (l_1208)
    {
        int **l_1221[10][6] = {{(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}, {(void*)0, &g_123, (void*)0, &g_123, (void*)0, &g_123}};
        struct S0 l_1225 = {0xF9L,0x2705536AL,0xF0B75E80L,0xC8L,0xC4A5L,0x166AL};
        union U1 * const * const l_1233 = &g_363;
        union U1 l_1271 = {1L};
        struct S0 ***l_1279[8][9][3] = {{{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}, {{(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}, {(void*)0, &g_218, &g_218}}};
        struct S0 *l_1308 = &g_79;
        char l_1334 = 0x41L;
        int i, j, k;
        if ((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(g_1043[7], (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((l_1221[4][0] != l_1222), g_205)), (safe_rshift_func_int16_t_s_s(((void*)0 == (*g_745)), l_1208)))))), (0x23AF6B09L && (((g_297.f0 == 0x10F3L) | p_18) || (-1L))))))
        {
            unsigned short l_1227 = 0xC9F9L;
            int l_1228 = 0x14917358L;
            union U1 l_1237 = {6L};
            struct S0 ** const *l_1257 = &g_218;
            l_1228 = (g_802.f0 & g_802.f2);
            for (g_284 = 0; (g_284 >= 35); ++g_284)
            {
                int *l_1231 = &g_79.f1;
                l_1231 = (void*)0;
            }
            l_1234 = (l_1232 == l_1233);
            for (g_1226 = 0; (g_1226 >= 5); g_1226++)
            {
                unsigned short l_1238[4][2][10] = {{{65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}, {65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}}, {{65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}, {65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}}, {{65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}, {65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}}, {{65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}, {65527UL, 65527UL, 65526UL, 0x3BFEL, 0xEC12L, 0UL, 0UL, 65527UL, 0UL, 0UL}}};
                int l_1247 = 0xE7FEECE7L;
                int *l_1263 = &g_297.f1;
                int i, j, k;
                if ((p_17 > (((g_79.f1 > p_19) <= 0x19L) && g_79.f0)))
                {
                    int l_1258 = (-8L);
                    if ((!(*g_740)))
                    {
                        unsigned short l_1241 = 5UL;
                        int **l_1242[3][9][3] = {{{&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}}, {{&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}}, {{&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}, {&g_123, (void*)0, &g_123}}};
                        short l_1259[7] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
                        int i, j, k;
                        l_1247 = (safe_sub_func_uint16_t_u_u(((l_1241 | (!(2UL != (((void*)0 != l_1242[1][7][1]) && ((safe_add_func_uint16_t_u_u(l_1228, p_19)) < (p_17 == 8UL)))))) == p_19), p_17));
                        l_1228 = (((p_17 || ((safe_add_func_uint16_t_u_u(g_1226, ((safe_mod_func_int32_t_s_s((((((safe_add_func_uint16_t_u_u((((l_1259[3] & g_797.f0) == l_1227) || 65535UL), 0xD474L)) > p_17) || p_18) < g_1043[7]) <= p_17), p_18)) < g_623))) >= g_871)) > p_19) && p_18);
                    }
                    else
                    {
                        return p_19;
                    }
                }
                else
                {
                    if (((void*)0 != (*g_145)))
                    {
                        int l_1261 = (-3L);
                        int *l_1262[5][3][3] = {{{&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}}, {{&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}}, {{&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}}, {{&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}}, {{&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}, {&g_297.f1, &l_1225.f1, (void*)0}}};
                        int i, j, k;
                        l_1261 = l_1260;
                        l_1263 = l_1262[3][2][2];
                    }
                    else
                    {
                        if (p_18)
                            break;
                        l_1264 = &l_1247;
                    }
                }
            }
        }
        else
        {
            int *l_1282[4];
            unsigned l_1293[4];
            char l_1330 = (-1L);
            int i;
            for (i = 0; i < 4; i++)
                l_1282[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_1293[i] = 5UL;
            for (g_297.f5 = 0; (g_297.f5 <= 45); ++g_297.f5)
            {
                l_1282[2] = (void*)0;
                for (p_19 = 0; (p_19 != 22); p_19 = safe_add_func_int16_t_s_s(p_19, 8))
                {
                    unsigned l_1285 = 4294967292UL;
                    unsigned char l_1294 = 0xB3L;
                    for (l_1208 = 9; (l_1208 >= 2); l_1208 -= 1)
                    {
                        int l_1286 = 0x33EC51ABL;
                        int i;
                        l_1264 = (void*)0;
                        l_1285 = p_17;
                        l_1286 ^= p_19;
                        if (p_17)
                            break;
                    }
                    l_1294 |= ((safe_mod_func_int16_t_s_s(g_702[0][0], (safe_add_func_int32_t_s_s((p_18 || (safe_mod_func_int32_t_s_s(0x70BB6C2FL, p_18))), l_1293[2])))) >= 3UL);
                }
            }
            l_1234 = (safe_lshift_func_uint16_t_u_u(5UL, (&l_1233 != (void*)0)));
            if ((*g_740))
            {
                unsigned l_1297 = 0xFE482AEDL;
                l_1297 = p_17;
                for (p_18 = (-16); (p_18 == 7); ++p_18)
                {
                    int *l_1300 = &g_297.f1;
                    l_1300 = l_1282[2];
                }
            }
            else
            {
                unsigned l_1301 = 0xB2CFFECFL;
                short l_1320 = 0x5A01L;
                struct S0 l_1327 = {0x07L,0x417891AFL,4294967287UL,255UL,0L,1UL};
                l_1301 = (*g_740);
                for (g_802.f1 = 14; (g_802.f1 <= (-28)); --g_802.f1)
                {
                    if (p_17)
                        break;
                }
                if (((safe_div_func_uint16_t_u_u(p_19, g_297.f2)) == (*g_740)))
                {
                    unsigned l_1318[5];
                    int l_1319 = 9L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1318[i] = 0x12F18A8EL;
                    for (g_283 = 0; (g_283 < 42); g_283 = safe_add_func_int8_t_s_s(g_283, 4))
                    {
                        l_1318[0] = 0x8BE3472FL;
                        l_1319 = (*g_740);
                        l_1320 = 0xE8C75A3BL;
                    }
                    l_1327.f1 &= p_19;
                    l_1331[0] &= l_1330;
                }
                else
                {
                    return p_17;
                }
            }
        }
        l_1335 ^= ((&g_145 != (void*)0) != (safe_add_func_uint16_t_u_u(0xCE8CL, (0xBFL == p_19))));
    }
    else
    {
        unsigned l_1336 = 18446744073709551615UL;
        for (g_36 = 2; (g_36 <= 9); g_36 += 1)
        {
            (*l_1264) |= p_19;
            for (g_802.f5 = 2; (g_802.f5 <= 9); g_802.f5 += 1)
            {
                (*l_1264) = (p_19 < g_702[0][2]);
            }
        }
    }
    return g_284;
}







static const unsigned short func_20(unsigned p_21, short p_22, char p_23)
{
    const short l_522 = 1L;
    int l_988 = 0x64EB2B86L;
    union U1 ***l_990 = &g_440;
    struct S0 ***l_1006 = (void*)0;
    unsigned l_1082 = 0x4B28BAB7L;
    int l_1083 = (-4L);
    const int l_1130 = 1L;
    int l_1145 = (-2L);
    struct S0 l_1160 = {5UL,0x68A9B727L,4294967295UL,253UL,-1L,65535UL};
    int *l_1207 = &l_1160.f1;
    if ((g_36 < p_23))
    {
        unsigned short l_82 = 0xA775L;
        int *l_984[7];
        union U1 *l_989 = (void*)0;
        union U1 l_999[3] = {{-4L}, {-4L}, {-4L}};
        struct S0 ***l_1007 = &g_218;
        short l_1010 = 0x3356L;
        char l_1023 = 0xEEL;
        unsigned char l_1038 = 0x70L;
        char l_1091[6][5] = {{(-1L), (-9L), (-1L), 0x97L, 0xB2L}, {(-1L), (-9L), (-1L), 0x97L, 0xB2L}, {(-1L), (-9L), (-1L), 0x97L, 0xB2L}, {(-1L), (-9L), (-1L), 0x97L, 0xB2L}, {(-1L), (-9L), (-1L), 0x97L, 0xB2L}, {(-1L), (-9L), (-1L), 0x97L, 0xB2L}};
        int *l_1139 = &l_1083;
        unsigned l_1142 = 18446744073709551615UL;
        unsigned char l_1153 = 0x6EL;
        int i, j;
        for (i = 0; i < 7; i++)
            l_984[i] = &g_802.f1;
        if (((safe_lshift_func_int16_t_s_u((0x10B2D4ADL == ((((safe_rshift_func_uint8_t_u_u(0x5EL, 4)) | (safe_add_func_int32_t_s_s((1L | (func_56((((((~(p_23 <= func_62(((func_64(func_70(p_23, (func_74(g_79, g_36, (safe_sub_func_uint8_t_u_u(p_22, 0UL)), l_82) <= g_79.f2), p_22), p_23, l_82, g_297.f3, g_122.f0) >= p_22) < p_22)))) && l_522) && p_23) & 0xAE3E0946L) ^ p_22), g_79.f0, l_82, g_122.f0, l_522) || l_522)), l_82))) & p_22) != p_21)), p_23)) ^ l_522))
        {
            int *l_985 = &g_79.f1;
            l_985 = l_984[3];
        }
        else
        {
            union U1 ** const *l_991[7][8] = {{&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}, {&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}, {&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}, {&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}, {&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}, {&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}, {&g_145, &g_145, &g_440, &g_145, &g_440, &g_440, &g_440, &g_145}};
            int *l_992[9][6][2] = {{{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}, {{&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}, {&g_79.f1, &g_79.f1}}};
            int i, j, k;
            for (l_82 = (-3); (l_82 <= 34); l_82 = safe_add_func_int16_t_s_s(l_82, 1))
            {
                l_988 = p_22;
                l_989 = (*g_145);
            }
            l_988 &= (p_23 | ((l_990 != l_991[4][1]) || ((&l_988 == l_992[6][3][1]) | (!((((safe_rshift_func_int16_t_s_u(g_702[0][2], (safe_div_func_int32_t_s_s(((*g_218) != (void*)0), (safe_sub_func_uint32_t_u_u(0x4BE5671EL, p_21)))))) && p_21) == 0UL) < p_22)))));
        }
        if (((g_797.f0 > p_23) < 4294967295UL))
        {
            unsigned l_1013 = 0xB85D2E14L;
            struct S0 l_1016 = {0UL,-2L,4294967295UL,250UL,2L,65531UL};
            int *l_1026 = &l_1016.f1;
            for (g_283 = 0; (g_283 > 44); g_283++)
            {
                unsigned l_1015[10] = {0x8169AA94L, 0x3841A1C7L, 4294967291UL, 4294967291UL, 0x3841A1C7L, 0x8169AA94L, 0x3841A1C7L, 4294967291UL, 4294967291UL, 0x3841A1C7L};
                union U1 l_1037 = {1L};
                int *l_1039 = &g_297.f1;
                int i;
                if (((l_1013 > 0x56D665EAL) & p_22))
                {
                    unsigned l_1014 = 0x0F7858CEL;
                    int **l_1024 = &g_123;
                    if (l_1014)
                    {
                        unsigned char l_1022[6][6] = {{0x4DL, 247UL, 0xDBL, 247UL, 0x4DL, 252UL}, {0x4DL, 247UL, 0xDBL, 247UL, 0x4DL, 252UL}, {0x4DL, 247UL, 0xDBL, 247UL, 0x4DL, 252UL}, {0x4DL, 247UL, 0xDBL, 247UL, 0x4DL, 252UL}, {0x4DL, 247UL, 0xDBL, 247UL, 0x4DL, 252UL}, {0x4DL, 247UL, 0xDBL, 247UL, 0x4DL, 252UL}};
                        int i, j;
                        (**l_1007) = (void*)0;
                        if (l_1015[8])
                            break;
                        (*g_218) = (*g_218);
                        l_988 = (l_1014 > (g_104.f0 == ((~p_22) || p_23)));
                    }
                    else
                    {
                        if (p_22)
                            break;
                    }
                    (*g_745) = l_1024;
                }
                else
                {
                    int *l_1025 = &l_988;
                    if ((l_522 <= (!(-7L))))
                    {
                        l_1026 = l_1025;
                    }
                    else
                    {
                        if (l_1015[0])
                            break;
                        (*l_990) = &g_146;
                    }
                    if ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(g_79.f1, (safe_add_func_uint16_t_u_u(p_22, (safe_sub_func_uint8_t_u_u((~p_23), (safe_rshift_func_uint8_t_u_s((((*g_218) != (void*)0) > p_23), 3)))))))) | (-1L)), p_23)))
                    {
                        int **l_1040 = &l_1025;
                        (*l_1040) = l_1039;
                    }
                    else
                    {
                        int * const *l_1045 = (void*)0;
                        int * const **l_1044 = &l_1045;
                        (*l_1026) = (((safe_div_func_int8_t_s_s((((g_1043[7] <= 0x3AL) > (!((g_122.f0 & (l_1044 == &g_746[3][2][1])) == (*l_1026)))) <= l_988), (safe_rshift_func_int8_t_s_u(p_23, g_592)))) >= (-1L)) < p_23);
                        if (p_23)
                            continue;
                        (*l_1039) = (0xA3F1F77FL <= (*l_1026));
                    }
                    (*l_1039) = ((safe_add_func_int8_t_s_s(0x91L, (safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((g_802.f5 && (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_36 != g_284), (0x62BEL | g_297.f5))), (255UL ^ ((!(((!(safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(0x7B47L, (safe_div_func_uint16_t_u_u(0xD096L, l_988)))), 0x4408CF95L))) | g_1021) ^ l_988)) > 1L))))) <= g_297.f2), g_104.f0)) & 0xC2L), g_871)))) > (*l_1039));
                    (*l_1025) &= (g_802.f2 < 5UL);
                }
            }
            l_1083 &= (((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((p_23 && l_988), g_79.f0)), ((p_22 <= ((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((!p_23), ((((safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_23, (((safe_rshift_func_int16_t_s_s((p_21 ^ g_213), l_1082)) > p_21) != (-5L)))), 0x7225L)) & p_23) && g_79.f4), 0xA28AL)) >= g_1021) & (-9L)) & 0x44L))), (*l_1026))) == g_802.f4)) > g_104.f0))) == g_802.f3) || p_21);
            (*l_1026) = p_23;
            return p_23;
        }
        else
        {
            unsigned char l_1086 = 8UL;
            int *l_1092 = &l_1083;
            struct S0 l_1123 = {0x18L,1L,0x39DB1015L,0x11L,0xB91FL,0xBDFCL};
            l_1083 &= (p_21 | g_323);
            if ((l_1092 != &l_1083))
            {
                struct S0 **l_1095 = &g_219;
                int ***l_1101[7];
                unsigned l_1106[1];
                int i;
                for (i = 0; i < 7; i++)
                    l_1101[i] = &g_746[2][6][0];
                for (i = 0; i < 1; i++)
                    l_1106[i] = 0x6D6C71DDL;
                for (g_79.f5 = 1; (g_79.f5 <= 6); g_79.f5 += 1)
                {
                    const struct S0 *l_1100 = (void*)0;
                    int i;
                    (*l_1092) &= (((safe_lshift_func_int16_t_s_u((l_1095 != (void*)0), ((void*)0 != &l_984[g_79.f5]))) < (((void*)0 != &l_999[2]) != (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((*g_740) || l_988), g_592)), g_79.f1)))) ^ p_21);
                    (*l_1092) &= (((((g_802.f3 == 1UL) != (-1L)) <= ((void*)0 != l_1101[1])) >= (safe_lshift_func_uint16_t_u_u(g_802.f5, p_21))) >= (safe_sub_func_int16_t_s_s(p_21, g_702[0][2])));
                }
                l_1106[0] |= p_21;
                for (g_802.f5 = 10; (g_802.f5 == 42); g_802.f5++)
                {
                    char l_1113[3];
                    struct S0 l_1114 = {0xFFL,0L,4UL,251UL,5L,0x3FADL};
                    char l_1115 = 6L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1113[i] = 0L;
                    l_988 ^= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_1113[2] > l_1115), p_21)), g_323)) >= p_21);
                    l_1083 ^= 0x1AB45E74L;
                    if (p_21)
                    {
                        (*g_745) = (*g_745);
                        if (p_21)
                            continue;
                        l_1092 = &l_1083;
                    }
                    else
                    {
                        return p_22;
                    }
                }
                if (p_22)
                {
                    l_1083 = (*g_740);
                }
                else
                {
                    (*l_1092) &= 2L;
                    (*l_1092) ^= (-2L);
                }
            }
            else
            {
                int **l_1116 = &l_984[3];
                char l_1124 = 0xC1L;
                struct S0 **l_1129 = &g_219;
                (*l_1116) = l_1092;
                (**l_1116) = (!(p_21 ^ ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(g_802.f2, 0xCBL)), 10)) != (l_1130 > (**l_1116)))));
                (*l_1116) = (void*)0;
                (*l_1092) = ((&g_363 != &g_146) >= p_21);
            }
            for (g_871 = 0; (g_871 == 15); g_871 = safe_add_func_uint16_t_u_u(g_871, 2))
            {
                int **l_1133[10][6] = {{&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}, {&l_984[3], &g_123, &l_984[4], &l_984[1], &l_984[0], &l_984[0]}};
                int i, j;
                if (p_22)
                    break;
                l_1092 = l_984[6];
            }
            for (g_623 = 4; (g_623 >= 1); g_623 -= 1)
            {
                int l_1136 = (-7L);
                int i;
                l_988 ^= (safe_sub_func_int8_t_s_s((l_1136 > ((!(1UL > (safe_sub_func_int8_t_s_s((-6L), (p_23 > p_21))))) && p_22)), p_21));
                if ((0UL > g_516.f0))
                {
                    union U1 l_1150 = {4L};
                    short l_1164[1][2][5] = {{{0x0FA9L, 0x0FA9L, 0xB854L, 0x0FA9L, 0x0FA9L}, {0x0FA9L, 0x0FA9L, 0xB854L, 0x0FA9L, 0x0FA9L}}};
                    int i, j, k;
                    l_984[(g_623 + 2)] = l_1139;
                    l_1083 = (safe_lshift_func_uint16_t_u_u((g_297.f0 & (((l_1142 | ((safe_lshift_func_int16_t_s_u(1L, (((l_1145 <= ((safe_div_func_uint32_t_u_u(0x5813898FL, (safe_mod_func_int32_t_s_s((g_802.f3 != (p_22 == l_1083)), p_22)))) & g_802.f5)) != p_23) | p_23))) > 0L)) > l_1153) <= g_79.f3)), 4));
                    l_1083 |= (safe_sub_func_uint16_t_u_u(((((((safe_add_func_uint16_t_u_u(p_22, (safe_add_func_int8_t_s_s(p_21, p_22)))) | 65535UL) == 3UL) ^ g_1163) || p_23) || l_1164[0][0][4]), g_1043[8]));
                }
                else
                {
                    for (g_301 = 1; (g_301 <= 6); g_301 += 1)
                    {
                        int i, j;
                        l_984[(g_623 + 2)] = l_984[3];
                        (*l_1139) = (safe_lshift_func_uint16_t_u_u(l_1091[g_623][g_623], 11));
                    }
                    for (l_1160.f1 = 0; (l_1160.f1 <= 2); l_1160.f1 += 1)
                    {
                        int i, j;
                        l_984[g_623] = l_1092;
                        if (l_1091[(g_623 + 1)][(l_1160.f1 + 2)])
                            break;
                    }
                }
                for (g_802.f1 = 0; (g_802.f1 <= 6); g_802.f1 += 1)
                {
                    int *l_1167 = (void*)0;
                    struct S0 *l_1168 = &l_1160;
                    int i, j;
                    l_984[g_802.f1] = l_1167;
                    for (l_1082 = 1; (l_1082 <= 4); l_1082 += 1)
                    {
                        int *l_1169 = (void*)0;
                        (*g_218) = l_1168;
                        l_1169 = l_984[g_623];
                    }
                    if (l_1091[g_623][g_623])
                    {
                        int **l_1170 = &l_984[g_623];
                        (*l_1139) = ((void*)0 != (*g_745));
                        if (p_21)
                            break;
                        (*l_1170) = (void*)0;
                    }
                    else
                    {
                        unsigned char l_1181 = 0UL;
                        (*l_1139) = (safe_mod_func_int8_t_s_s((+((safe_rshift_func_uint16_t_u_u((((&g_218 == (void*)0) || (safe_rshift_func_int16_t_s_u(g_1043[6], (0UL ^ ((1UL == (p_22 || ((safe_add_func_uint32_t_u_u((+(!4294967295UL)), p_23)) || (0x74BEB79FL != p_22)))) != 1L))))) >= l_1082), g_79.f2)) | g_592)), l_1181));
                    }
                }
            }
        }
    }
    else
    {
        int l_1184 = 0L;
        int *l_1195 = &l_1184;
        char l_1206 = 0x95L;
        for (g_36 = 0; (g_36 < 35); g_36 = safe_add_func_uint32_t_u_u(g_36, 3))
        {
            int ** const *l_1187 = &g_746[2][6][0];
            if (p_23)
                break;
            (*g_123) = l_1184;
            if (p_23)
            {
                int l_1189[7] = {0L, 0x62F4C09CL, 0L, 0x62F4C09CL, 0L, 0x62F4C09CL, 0L};
                int *l_1192 = &l_1160.f1;
                int i;
                (*g_123) = ((**l_990) == (**l_990));
                if ((safe_lshift_func_int8_t_s_s(0L, 1)))
                {
                    int ***l_1188[3];
                    const int **l_1190 = (void*)0;
                    const int *l_1191 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1188[i] = &g_746[1][7][1];
                    (*g_123) ^= (((l_1187 == l_1188[0]) & (p_22 > 0x71FC7AF6L)) | 0x64BDL);
                    if (l_1189[4])
                        break;
                    l_1191 = &l_1130;
                }
                else
                {
                    int **l_1193 = (void*)0;
                    int **l_1194[2][10] = {{&g_123, &l_1192, &g_123, (void*)0, &l_1192, (void*)0, &l_1192, (void*)0, &g_123, &l_1192}, {&g_123, &l_1192, &g_123, (void*)0, &l_1192, (void*)0, &l_1192, (void*)0, &g_123, &l_1192}};
                    int i, j;
                    l_1192 = l_1192;
                    (*l_1192) = (*g_123);
                    if (p_22)
                        break;
                }
                (*g_123) = l_1160.f5;
            }
            else
            {
                for (g_623 = 0; g_623 < 10; g_623 += 1)
                {
                    g_1043[g_623] = 0xB4L;
                }
                l_1195 = &l_1184;
            }
            (*l_1195) = ((func_74((*g_219), p_22, g_658, (func_64((***l_990), ((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(255UL, (safe_lshift_func_uint8_t_u_s(((+(safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(g_297.f2, 1L)), (p_23 > p_23)))) && p_23), 7)))), l_1206)) & 0xE7L), l_1160.f0, g_802.f4, p_22) & 8UL)) && g_297.f4) < p_23);
        }
    }
    (*l_1207) ^= (p_22 || (*g_740));
    return p_22;
}







static unsigned char func_56(char p_57, unsigned short p_58, short p_59, unsigned p_60, char p_61)
{
    char l_528 = (-1L);
    struct S0 l_539 = {1UL,0xD16277DAL,0x5F623C63L,255UL,0x76CEL,0xFB6BL};
    short l_541 = 0x0754L;
    unsigned l_542[8][10] = {{18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}, {18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L, 18446744073709551608UL, 0xC3AB64E5L}};
    short l_556[10] = {0L, 0x1DA4L, 0L, 0x1DA4L, 0L, 0x1DA4L, 0L, 0x1DA4L, 0L, 0x1DA4L};
    int **l_599 = &g_123;
    struct S0 **l_609 = &g_219;
    union U1 ***l_612 = &g_440;
    short l_624 = 0x77ABL;
    const unsigned l_670 = 1UL;
    const int *l_727 = &l_539.f1;
    int l_780 = 0xD4AA009FL;
    unsigned l_833 = 0xECB9E14FL;
    int **l_860[7];
    union U1 l_874[3][5] = {{{0x0BF5FCB4L}, {6L}, {-2L}, {6L}, {0x0BF5FCB4L}}, {{0x0BF5FCB4L}, {6L}, {-2L}, {6L}, {0x0BF5FCB4L}}, {{0x0BF5FCB4L}, {6L}, {-2L}, {6L}, {0x0BF5FCB4L}}};
    unsigned l_894 = 7UL;
    int *l_922[4][10] = {{(void*)0, &l_539.f1, &g_802.f1, &g_79.f1, &l_539.f1, &g_802.f1, &l_539.f1, &g_79.f1, &g_802.f1, &l_539.f1}, {(void*)0, &l_539.f1, &g_802.f1, &g_79.f1, &l_539.f1, &g_802.f1, &l_539.f1, &g_79.f1, &g_802.f1, &l_539.f1}, {(void*)0, &l_539.f1, &g_802.f1, &g_79.f1, &l_539.f1, &g_802.f1, &l_539.f1, &g_79.f1, &g_802.f1, &l_539.f1}, {(void*)0, &l_539.f1, &g_802.f1, &g_79.f1, &l_539.f1, &g_802.f1, &l_539.f1, &g_79.f1, &g_802.f1, &l_539.f1}};
    char l_955 = (-1L);
    int i, j;
    for (i = 0; i < 7; i++)
        l_860[i] = &g_123;
    if ((*g_123))
    {
        char l_527[3];
        const union U1 *l_540 = &g_122;
        struct S0 l_553[7] = {{0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}, {0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}, {0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}, {0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}, {0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}, {0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}, {0xC4L,1L,0UL,0xBAL,0x956DL,0xCC2DL}};
        int **l_570[4];
        char l_583 = 0xA6L;
        unsigned short l_621 = 0x8B3CL;
        int i;
        for (i = 0; i < 3; i++)
            l_527[i] = 0xA1L;
        for (i = 0; i < 4; i++)
            l_570[i] = &g_123;
        if ((safe_mod_func_uint8_t_u_u(((g_297.f2 & ((4294967295UL | (*g_123)) ^ (safe_add_func_int8_t_s_s(l_527[1], l_528)))) == (~((l_527[1] == l_528) ^ func_62((*g_123))))), 0x6BL)))
        {
            char l_531[8][1] = {{0xBCL}, {0xBCL}, {0xBCL}, {0xBCL}, {0xBCL}, {0xBCL}, {0xBCL}, {0xBCL}};
            int *l_532 = &g_297.f1;
            int **l_533 = &l_532;
            int i, j;
            l_531[3][0] = (safe_sub_func_uint32_t_u_u(((~(&g_123 != (void*)0)) || 0x2FL), g_297.f3));
            (*l_533) = l_532;
        }
        else
        {
            int **l_534 = &g_123;
            (*g_123) |= p_58;
            (*l_534) = g_123;
        }
        if ((((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_59, g_297.f1)), func_74(l_539, ((*g_440) != l_540), (l_541 > g_284), l_542[4][3]))) < 6UL) != (-10L)) >= l_527[2]) < 9L))
        {
            unsigned short l_557 = 8UL;
            int l_569 = (-1L);
            int *l_572 = &g_297.f1;
            union U1 l_622[3][6] = {{{-7L}, {-7L}, {-7L}, {-7L}, {-7L}, {-7L}}, {{-7L}, {-7L}, {-7L}, {-7L}, {-7L}, {-7L}}, {{-7L}, {-7L}, {-7L}, {-7L}, {-7L}, {-7L}}};
            int l_657 = 0xD6346873L;
            int i, j;
            if ((g_297.f3 > (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(0x3D28L, (((&g_363 != (void*)0) > (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((func_74(l_553[3], (g_79.f5 && p_60), l_553[3].f0, (((safe_add_func_uint32_t_u_u(5UL, g_205)) <= l_553[3].f0) || l_539.f4)) != 0L), l_553[3].f2)), 2))) != l_553[3].f3))) > l_556[2]), l_557)), l_539.f5))))
            {
                int **l_566 = (void*)0;
                short l_567 = 0x637AL;
                union U1 l_568[5][10] = {{{0L}, {0x28709540L}, {0x05269914L}, {0xA3430603L}, {4L}, {-1L}, {0xE72D64E6L}, {0L}, {0x05269914L}, {0L}}, {{0L}, {0x28709540L}, {0x05269914L}, {0xA3430603L}, {4L}, {-1L}, {0xE72D64E6L}, {0L}, {0x05269914L}, {0L}}, {{0L}, {0x28709540L}, {0x05269914L}, {0xA3430603L}, {4L}, {-1L}, {0xE72D64E6L}, {0L}, {0x05269914L}, {0L}}, {{0L}, {0x28709540L}, {0x05269914L}, {0xA3430603L}, {4L}, {-1L}, {0xE72D64E6L}, {0L}, {0x05269914L}, {0L}}, {{0L}, {0x28709540L}, {0x05269914L}, {0xA3430603L}, {4L}, {-1L}, {0xE72D64E6L}, {0L}, {0x05269914L}, {0L}}};
                int ***l_571 = &l_570[2];
                int i, j;
                (*g_123) &= (+(4L != g_36));
                l_539.f1 &= ((func_64(l_568[3][0], g_79.f3, l_569, l_567, g_509[1]) <= 6L) && g_104.f0);
                (*l_571) = l_570[2];
            }
            else
            {
                int *l_573 = &l_553[3].f1;
                union U1 l_595 = {1L};
                l_573 = l_572;
                if ((*l_572))
                {
                    int *l_576[5];
                    union U1 l_582 = {0xAA7D5340L};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_576[i] = &g_297.f1;
                    for (g_213 = (-14); (g_213 > 14); g_213 = safe_add_func_int16_t_s_s(g_213, 6))
                    {
                        struct S0 l_581 = {0xCFL,0xE0D7737EL,0xA2F214EEL,0xCCL,0x9B15L,0x3671L};
                        g_123 = l_576[2];
                        g_79.f1 &= (*g_123);
                        if (p_60)
                            break;
                    }
                    for (g_205 = 27; (g_205 < 17); g_205 = safe_sub_func_uint32_t_u_u(g_205, 1))
                    {
                        unsigned short l_586 = 0xAB90L;
                        int *l_587[6][3] = {{&l_539.f1, &g_79.f1, &g_297.f1}, {&l_539.f1, &g_79.f1, &g_297.f1}, {&l_539.f1, &g_79.f1, &g_297.f1}, {&l_539.f1, &g_79.f1, &g_297.f1}, {&l_539.f1, &g_79.f1, &g_297.f1}, {&l_539.f1, &g_79.f1, &g_297.f1}};
                        struct S0 l_590 = {0UL,0xFAABD6E1L,0x6548BC7DL,0xFDL,0xD986L,1UL};
                        int i, j;
                        l_586 = 0L;
                        g_592 |= (((p_61 & (l_587[2][2] == l_576[2])) ^ (0x415E7342L || 0UL)) < (safe_mod_func_uint16_t_u_u((g_378 == (((*l_572) < l_539.f0) >= (*g_123))), 0xF707L)));
                        return g_509[2];
                    }
                    (*l_573) = p_61;
                    (*l_573) = (*g_123);
                }
                else
                {
                    unsigned char l_608 = 0x72L;
                    for (p_59 = 2; (p_59 <= 7); p_59 += 1)
                    {
                        int **l_598 = &l_573;
                        int i;
                        (*g_123) = (func_64((*g_363), l_556[(p_59 + 2)], p_61, ((g_36 > func_64(l_595, p_59, (safe_rshift_func_uint16_t_u_u(((0x70AC04BDL == l_556[(p_59 + 2)]) == (l_598 == l_599)), 15)), g_501, g_283)) != (-1L)), g_297.f3) <= 0L);
                    }
                    if (p_58)
                    {
                        (*g_218) = (*g_218);
                        (*l_573) = (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((void*)0 != l_572), ((safe_sub_func_uint32_t_u_u(p_58, (safe_div_func_uint32_t_u_u((((*g_123) <= 0L) >= p_61), l_608)))) & ((void*)0 == &g_123)))) && (-9L)), p_59));
                        return p_57;
                    }
                    else
                    {
                        (**l_599) &= p_57;
                        (*g_123) ^= p_57;
                    }
                }
                for (g_501 = 0; (g_501 <= 2); g_501 += 1)
                {
                    struct S0 **l_620 = (void*)0;
                    int i;
                    (*l_572) = (g_509[g_501] < p_57);
                    for (g_36 = 0; (g_36 <= 2); g_36 += 1)
                    {
                        l_609 = &g_219;
                    }
                    (*l_572) &= (safe_rshift_func_int8_t_s_s(((l_612 != l_612) != (p_58 > (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((g_509[2] <= (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_58, 8)), g_509[g_501]))))), l_624)))), 7));
                }
            }
            for (g_592 = 0; (g_592 >= 43); g_592 = safe_add_func_int32_t_s_s(g_592, 7))
            {
                unsigned l_638 = 1UL;
                union U1 *l_651 = &g_516;
                char l_656 = 0L;
                int *l_664 = &l_539.f1;
                (*l_599) = g_123;
                for (g_378 = 0; (g_378 < 54); g_378 = safe_add_func_int16_t_s_s(g_378, 6))
                {
                    struct S0 l_637 = {1UL,-1L,1UL,0UL,0x24DBL,0x845AL};
                    int *l_659[1][1];
                    int ***l_667 = (void*)0;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_659[i][j] = &g_79.f1;
                    }
                    (*l_572) = (g_509[1] != l_637.f2);
                    (**l_599) = (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((6L ^ ((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(p_59, (l_657 || g_592))), p_57)) < g_297.f1)), p_60)), g_79.f3)) > p_57) != g_516.f0) | (*g_123)) == 4294967295UL), p_58)) != g_658), 1));
                    if ((*l_572))
                    {
                        if ((*g_123))
                            break;
                        (*g_123) = (&g_219 != (void*)0);
                        l_659[0][0] = g_123;
                        (**l_599) ^= ((g_123 == g_123) != (((l_656 <= 0UL) < p_58) ^ p_58));
                    }
                    else
                    {
                        l_659[0][0] = g_123;
                        (*l_599) = g_123;
                        (*l_599) = l_664;
                        (*l_664) = (safe_rshift_func_uint16_t_u_u(((0x1434L > (*l_664)) <= (l_667 != (void*)0)), 10));
                    }
                }
                if ((*g_123))
                    continue;
            }
            (*g_123) &= (((*l_599) == g_123) >= (safe_unary_minus_func_int8_t_s(p_58)));
        }
        else
        {
            union U1 l_673 = {-4L};
            int *l_703 = &g_79.f1;
            struct S0 *l_709 = &l_539;
            if ((((void*)0 != (*l_612)) >= ((g_297.f5 & (p_61 ^ ((void*)0 != (*l_612)))) == p_61)))
            {
                int *l_669 = (void*)0;
                unsigned l_701 = 0xA57B344FL;
                unsigned short l_713 = 0x06FCL;
                l_669 = (*l_599);
                if ((*g_123))
                {
                    struct S0 **l_689 = &g_219;
                    if ((*g_123))
                    {
                        struct S0 **l_674 = &g_219;
                        (*g_123) ^= l_670;
                        (*l_669) = ((safe_div_func_int16_t_s_s((**l_599), (func_64(l_673, ((void*)0 != l_674), p_57, (**l_599), (g_592 ^ (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((**l_599), (~(*l_669)))) ^ g_79.f1) >= p_58), g_79.f1)), p_60)))) ^ l_673.f0))) ^ 0UL);
                    }
                    else
                    {
                        short l_690[6][7][3] = {{{(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}}, {{(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}}, {{(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}}, {{(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}}, {{(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}}, {{(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}, {(-3L), 0L, 5L}}};
                        int i, j, k;
                        (*g_218) = (*g_218);
                        (*l_599) = (void*)0;
                        (*l_669) = ((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_509[2], 1)), ((safe_rshift_func_int16_t_s_u((p_61 != (safe_sub_func_uint8_t_u_u(p_57, (0x41A3FE99L ^ (l_689 == l_689))))), l_690[5][4][2])) && 0xE0L))) >= g_79.f5);
                    }
                    if (((g_79.f5 ^ (g_297.f4 > 0xC1B61C34L)) || p_61))
                    {
                        int **l_708 = &l_703;
                        g_123 = (*l_599);
                        (*l_599) = l_703;
                        (*l_703) = (safe_lshift_func_int16_t_s_u(((+g_205) <= (0x4F74L && (g_509[0] > (l_708 != (void*)0)))), (((((l_709 != (void*)0) >= (safe_rshift_func_uint8_t_u_s(0xDFL, (g_297.f3 & 4294967290UL)))) == g_323) < 252UL) && 0x607BL)));
                    }
                    else
                    {
                        unsigned l_712 = 0x3CA545B2L;
                        l_712 |= 1L;
                        l_713 &= 0x312B3E6FL;
                    }
                }
                else
                {
                    for (l_621 = 0; (l_621 < 3); l_621 = safe_add_func_int8_t_s_s(l_621, 8))
                    {
                        const int *l_717[10] = {&l_673.f0, (void*)0, &l_553[3].f1, &l_553[3].f1, (void*)0, &l_673.f0, (void*)0, &l_553[3].f1, &l_553[3].f1, (void*)0};
                        const int **l_716 = &l_717[6];
                        int l_718[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_718[i] = 9L;
                        (*l_716) = &g_702[0][2];
                        l_718[1] = (*l_669);
                        if (p_58)
                            continue;
                        g_123 = (*l_599);
                    }
                }
            }
            else
            {
                return g_592;
            }
        }
        (*l_599) = (*l_599);
    }
    else
    {
        struct S0 **l_721 = &g_219;
        int l_724 = 0x2793D96AL;
        union U1 ** const l_735[5][4][5] = {{{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
        const int **l_739[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_739[i] = &l_727;
        l_724 ^= (safe_div_func_int16_t_s_s(func_64((**g_440), g_205, ((**l_612) != (**l_612)), g_501, (((l_609 != l_721) & (g_104.f0 <= (((safe_sub_func_uint32_t_u_u(4294967295UL, p_57)) < g_702[0][2]) != 255UL))) != g_297.f5)), 65535UL));
        if ((safe_mod_func_uint16_t_u_u(g_591, ((&g_123 != (void*)0) | (l_721 == &g_219)))))
        {
            char l_728 = 0L;
            l_727 = &g_702[0][2];
            if (l_728)
            {
                union U1 **l_729 = &g_146;
                (**l_599) &= (l_729 == (void*)0);
            }
            else
            {
                int *l_730 = &l_539.f1;
                (*g_123) = p_58;
                (*l_730) ^= (*g_123);
                for (g_297.f1 = (-25); (g_297.f1 != (-28)); --g_297.f1)
                {
                    int l_738 = 0x70D8A6D2L;
                    (*g_123) ^= (p_58 == (safe_sub_func_int32_t_s_s((p_58 >= 0L), (l_735[3][1][3] != &g_363))));
                    l_738 &= (safe_lshift_func_uint8_t_u_s((g_323 > (*g_123)), 4));
                }
            }
        }
        else
        {
            return g_378;
        }
        (**l_599) = l_724;
        g_740 = &g_702[0][0];
    }
    if ((*l_727))
    {
        char l_751 = 9L;
        (*l_599) = (void*)0;
        l_539.f1 = l_751;
    }
    else
    {
        char l_785[10] = {5L, (-5L), (-1L), (-1L), (-5L), 5L, (-5L), (-1L), (-1L), (-5L)};
        int l_795 = (-4L);
        union U1 l_805 = {6L};
        struct S0 l_819 = {9UL,-6L,4294967295UL,0x8AL,2L,65529UL};
        int i;
        if ((safe_div_func_uint16_t_u_u(g_284, (*l_727))))
        {
            unsigned l_760 = 5UL;
            int *l_764 = (void*)0;
            struct S0 l_767 = {0xA3L,0x3920C1ADL,4294967293UL,0x73L,-1L,0x4329L};
            union U1 ** const l_771 = &g_146;
            int l_815 = 0x80FD5F57L;
            int *l_834 = &l_767.f1;
            int *l_835 = &l_815;
            if ((*l_727))
            {
                const int *l_758 = &g_516.f0;
                int l_781 = 0x3B688054L;
                for (l_624 = 0; (l_624 <= 29); l_624 = safe_add_func_uint32_t_u_u(l_624, 5))
                {
                    int *l_761 = &g_79.f1;
                    for (g_297.f5 = 0; (g_297.f5 < 42); g_297.f5 = safe_add_func_int32_t_s_s(g_297.f5, 4))
                    {
                        const int **l_759 = &l_758;
                        (*g_440) = (*g_440);
                        (*l_759) = l_758;
                        return l_760;
                    }
                    (*l_761) |= (((void*)0 != &l_599) > (&l_758 != (*g_745)));
                }
                for (g_213 = 20; (g_213 != 1); g_213 = safe_sub_func_int32_t_s_s(g_213, 9))
                {
                    int *l_773 = (void*)0;
                    int *l_782 = &g_297.f1;
                    for (g_501 = 0; (g_501 <= 4); g_501 += 1)
                    {
                        union U1 * const *l_770 = (void*)0;
                        unsigned char l_772 = 0x67L;
                        int i;
                        (*l_599) = l_764;
                        (*l_599) = l_764;
                        l_781 = (safe_rshift_func_uint8_t_u_u(p_60, 5));
                    }
                    (*l_782) |= (*g_740);
                }
                l_785[4] = (*g_740);
            }
            else
            {
                int *l_788 = (void*)0;
                int *l_789 = &l_539.f1;
                (*l_789) ^= (safe_add_func_int32_t_s_s(p_58, (p_60 == g_297.f2)));
            }
            if ((safe_sub_func_int32_t_s_s(l_785[4], ((-2L) > ((void*)0 != (*g_440))))))
            {
                int l_794 = 4L;
                int *l_806 = &l_767.f1;
                if ((0L <= (&l_764 == &l_764)))
                {
                    int *l_792 = &g_79.f1;
                    (*l_792) = (0x4E3982B8L && p_57);
                    for (p_57 = 2; (p_57 <= 7); p_57 += 1)
                    {
                        unsigned short l_793 = 0xCFB9L;
                        if (l_793)
                            break;
                        (*g_440) = (*l_771);
                        if (p_60)
                            continue;
                        return l_794;
                    }
                }
                else
                {
                    int *l_796 = &l_767.f1;
                    (*l_599) = l_764;
                    l_795 = p_59;
                    (*l_796) = 0xB7409D52L;
                }
                if (((*g_740) == (*l_727)))
                {
                    for (g_36 = 0; g_36 < 5; g_36 += 1)
                    {
                        for (l_767.f3 = 0; l_767.f3 < 8; l_767.f3 += 1)
                        {
                            for (g_284 = 0; g_284 < 6; g_284 += 1)
                            {
                                g_746[g_36][l_767.f3][g_284] = (void*)0;
                            }
                        }
                    }
                }
                else
                {
                    (*l_599) = (*l_599);
                }
                (*l_806) = (*g_740);
            }
            else
            {
                union U1 l_814[4] = {{1L}, {0xA7676321L}, {1L}, {0xA7676321L}};
                union U1 l_853 = {0x8FCD8087L};
                int i;
                for (l_539.f1 = 0; (l_539.f1 > 21); ++l_539.f1)
                {
                    l_795 &= p_61;
                }
                for (g_205 = 12; (g_205 < 21); ++g_205)
                {
                    unsigned char l_818 = 0x8FL;
                    int *l_829 = &l_767.f1;
                    (*l_829) ^= ((l_818 >= p_59) > ((!l_795) & p_59));
                    for (g_323 = 0; g_323 < 3; g_323 += 1)
                    {
                        g_509[g_323] = 0x9B69L;
                    }
                }
                for (g_301 = 0; (g_301 == (-28)); g_301--)
                {
                    char l_832 = (-4L);
                    l_539.f1 &= ((l_832 != g_297.f2) < p_61);
                    if (l_833)
                        break;
                }
                for (l_760 = 0; (l_760 <= 4); l_760 += 1)
                {
                    unsigned short l_852 = 1UL;
                    int *l_861 = (void*)0;
                    int i;
                    for (g_297.f3 = 1; (g_297.f3 <= 9); g_297.f3 += 1)
                    {
                        (*l_599) = &l_795;
                        l_835 = l_834;
                    }
                    for (g_79.f3 = 0; (g_79.f3 <= 4); g_79.f3 += 1)
                    {
                        int i;
                        (*l_834) = (safe_add_func_uint8_t_u_u(l_556[(g_79.f3 + 1)], ((g_802.f1 > (*g_740)) <= 0x597DL)));
                    }
                    l_819.f1 &= ((l_556[l_760] != (p_58 || g_213)) < g_205);
                    (*l_834) |= p_58;
                    for (l_767.f1 = 4; (l_767.f1 >= 0); l_767.f1 -= 1)
                    {
                        unsigned l_858 = 2UL;
                        int l_859 = 0x6FB26062L;
                        l_859 ^= (((((safe_mod_func_uint16_t_u_u((0xC2D9L < (0x5CD3D7BBL < ((0xE8785EECL && (safe_add_func_uint8_t_u_u(p_57, (p_58 > (((l_853.f0 & ((l_853.f0 == 1L) | (((((*l_599) == (void*)0) != 65535UL) && 0xAFL) || p_57))) >= 0L) >= l_819.f1))))) != l_858))), l_814[3].f0)) ^ (-4L)) | p_58) && 1UL) < g_802.f3);
                        (*g_745) = l_860[0];
                        if ((*g_740))
                            continue;
                        l_861 = l_861;
                    }
                }
            }
            l_819.f1 ^= (*l_727);
            (*l_835) = p_61;
        }
        else
        {
            int *l_867 = (void*)0;
            int l_868[2][2][7] = {{{0x4A66BDEDL, 1L, (-5L), 1L, 0x4A66BDEDL, 0x7FD8AA40L, 0x4A66BDEDL}, {0x4A66BDEDL, 1L, (-5L), 1L, 0x4A66BDEDL, 0x7FD8AA40L, 0x4A66BDEDL}}, {{0x4A66BDEDL, 1L, (-5L), 1L, 0x4A66BDEDL, 0x7FD8AA40L, 0x4A66BDEDL}, {0x4A66BDEDL, 1L, (-5L), 1L, 0x4A66BDEDL, 0x7FD8AA40L, 0x4A66BDEDL}}};
            struct S0 ***l_869 = (void*)0;
            struct S0 ***l_870 = &g_218;
            int i, j, k;
            for (g_297.f1 = 5; (g_297.f1 < 1); g_297.f1 = safe_sub_func_int16_t_s_s(g_297.f1, 8))
            {
                for (l_541 = 0; (l_541 <= 4); l_541 += 1)
                {
                    unsigned char l_864 = 0xA5L;
                    int l_865 = 0x815F6FDEL;
                    if (l_864)
                        break;
                    (*g_218) = (void*)0;
                    for (g_36 = 0; (g_36 <= 4); g_36 += 1)
                    {
                        int l_866 = 2L;
                        int i, j, k;
                        l_865 &= p_58;
                        l_866 |= p_59;
                        (*l_599) = l_867;
                    }
                    l_865 &= l_868[0][1][5];
                    for (l_539.f5 = 1; (l_539.f5 <= 4); l_539.f5 += 1)
                    {
                        return g_79.f5;
                    }
                }
            }
            l_867 = &l_795;
            (*l_870) = &g_219;
            return p_61;
        }
        g_871 &= ((*g_440) == &l_805);
    }
    if ((*g_740))
    {
        int l_875[8] = {0x3FBC3809L, 0xAD955D90L, 0x3FBC3809L, 0xAD955D90L, 0x3FBC3809L, 0xAD955D90L, 0x3FBC3809L, 0xAD955D90L};
        int i;
        l_875[7] = (g_702[0][2] != p_60);
    }
    else
    {
        int l_878 = 1L;
        union U1 **l_882 = (void*)0;
        const unsigned l_897 = 0x802AD240L;
        int *l_945 = &l_878;
        short l_973 = 0x6CA0L;
        struct S0 l_978 = {255UL,-7L,1UL,9UL,-2L,0UL};
        if (((void*)0 == &l_727))
        {
            char l_877 = (-1L);
            int *l_883 = &l_878;
            for (l_528 = 5; (l_528 >= 0); l_528 -= 1)
            {
                int **l_876 = &g_123;
                int i;
                for (g_283 = 0; (g_283 <= 7); g_283 += 1)
                {
                    int i, j;
                    l_877 ^= ((l_876 == &l_727) || l_542[(l_528 + 2)][(l_528 + 3)]);
                }
                l_878 |= l_556[(l_528 + 3)];
                for (l_877 = 0; (l_877 <= 7); l_877 += 1)
                {
                    unsigned char l_879 = 255UL;
                    l_879 &= p_59;
                }
            }
            for (g_301 = 0; (g_301 > 19); g_301++)
            {
                (*l_612) = l_882;
                (*l_599) = l_883;
            }
            (*l_599) = l_883;
        }
        else
        {
            unsigned short l_884 = 65533UL;
            union U1 l_893 = {-3L};
            struct S0 ** const l_900 = &g_219;
            int *l_905 = &l_539.f1;
            (*l_599) = &l_878;
            if (func_64(l_893, g_509[0], p_61, p_58, g_509[2]))
            {
                int l_919[2];
                int l_921 = 0x5AB7C1F7L;
                int i;
                for (i = 0; i < 2; i++)
                    l_919[i] = 0L;
                (**l_599) &= (safe_rshift_func_int16_t_s_s(((void*)0 != l_900), (safe_lshift_func_uint16_t_u_u(0xC1A1L, (((safe_lshift_func_int8_t_s_s(g_501, ((l_905 != (void*)0) < (safe_lshift_func_uint8_t_u_u(p_61, g_297.f1))))) != g_802.f5) & p_57)))));
                for (g_36 = 15; (g_36 <= 60); g_36 = safe_add_func_int8_t_s_s(g_36, 9))
                {
                    int l_917 = 1L;
                    union U1 l_918[6][9] = {{{1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}}, {{1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}}, {{1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}}, {{1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}}, {{1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}}, {{1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}, {0x328B50FEL}, {1L}}};
                    struct S0 l_920 = {0x1CL,2L,0x54327449L,1UL,0x0402L,0xA210L};
                    int i, j;
                    for (l_884 = (-28); (l_884 > 45); l_884 = safe_add_func_uint8_t_u_u(l_884, 4))
                    {
                        int l_912 = 9L;
                        if (l_912)
                            break;
                        (**l_599) |= (-1L);
                        l_921 &= ((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((7L && l_917) == (g_104.f0 | func_64(l_918[3][2], l_897, ((l_919[0] || ((func_74(l_920, (0x00EA982BL < ((*l_905) >= 1UL)), p_57, l_897) & p_61) == g_297.f5)) == p_58), (*l_905), l_918[3][2].f0))), p_57)) || p_58), p_59)) & p_59);
                    }
                }
                l_922[2][6] = (void*)0;
            }
            else
            {
                int l_929 = 0L;
                for (l_884 = 0; l_884 < 8; l_884 += 1)
                {
                    for (g_284 = 0; g_284 < 10; g_284 += 1)
                    {
                        l_542[l_884][g_284] = 0x281BF759L;
                    }
                }
                (*l_599) = l_905;
                for (l_833 = (-27); (l_833 < 48); l_833 = safe_add_func_int8_t_s_s(l_833, 5))
                {
                    return p_59;
                }
                for (p_57 = 0; (p_57 < (-1)); p_57 = safe_sub_func_int16_t_s_s(p_57, 4))
                {
                    short l_944[5][6] = {{0x95BBL, 0x95BBL, 3L, 0x95BBL, 0x95BBL, 3L}, {0x95BBL, 0x95BBL, 3L, 0x95BBL, 0x95BBL, 3L}, {0x95BBL, 0x95BBL, 3L, 0x95BBL, 0x95BBL, 3L}, {0x95BBL, 0x95BBL, 3L, 0x95BBL, 0x95BBL, 3L}, {0x95BBL, 0x95BBL, 3L, 0x95BBL, 0x95BBL, 3L}};
                    int *l_946 = &l_929;
                    int i, j;
                    if (((safe_add_func_uint32_t_u_u((l_929 >= (safe_add_func_uint16_t_u_u(9UL, (((*l_905) == (g_297.f3 & ((safe_mod_func_int16_t_s_s(0xDE83L, (safe_add_func_int16_t_s_s((-7L), (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((((((p_58 | (p_59 < (safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((-10L), g_284)) < p_57), 0xC9L)))) & l_944[3][4]) < g_802.f3) ^ 0x45L) != 1UL) > p_61), (*g_740))), 12)))))) <= 0x2608B29FL))) & p_57)))), 0L)) == l_944[2][1]))
                    {
                        l_945 = (void*)0;
                        l_946 = l_905;
                    }
                    else
                    {
                        union U1 ** const l_947 = &g_146;
                        (*g_123) = (l_947 != &g_363);
                    }
                    for (g_378 = 0; (g_378 >= 49); ++g_378)
                    {
                        l_929 &= (1L != (*l_905));
                    }
                }
            }
            for (g_802.f5 = (-2); (g_802.f5 < 59); ++g_802.f5)
            {
                int ***l_952 = (void*)0;
                if (p_60)
                    break;
                if (l_897)
                    continue;
                (**l_599) = (*g_740);
                (**l_599) = ((((&g_746[0][4][0] == l_952) && (g_323 > ((*l_609) != (*l_609)))) == g_205) ^ 1UL);
            }
        }
        l_955 = (p_61 >= (safe_div_func_uint8_t_u_u(p_57, p_59)));
        if ((*g_740))
        {
            int l_962 = 0x47A35D0CL;
            int l_977 = 0xDAC5E47BL;
            char l_979 = 1L;
            int *l_980[9] = {&g_297.f1, &g_297.f1, (void*)0, &g_297.f1, &g_297.f1, (void*)0, &g_297.f1, &g_297.f1, (void*)0};
            int i;
            for (l_955 = 7; (l_955 == (-20)); l_955 = safe_sub_func_int16_t_s_s(l_955, 2))
            {
                for (g_301 = 0; (g_301 == 4); ++g_301)
                {
                    return g_509[2];
                }
            }
            if ((g_509[2] ^ p_60))
            {
                for (g_802.f3 = 29; (g_802.f3 == 6); g_802.f3--)
                {
                    return l_962;
                }
            }
            else
            {
                unsigned char l_963[10] = {0x97L, 255UL, 0x97L, 255UL, 0x97L, 255UL, 0x97L, 255UL, 0x97L, 255UL};
                struct S0 l_966[5][2] = {{{0xA1L,0x58BA73FFL,0UL,1UL,-1L,0x1155L}, {255UL,0x53494CCEL,0x3CD95F80L,0UL,0x7D03L,0x91A5L}}, {{0xA1L,0x58BA73FFL,0UL,1UL,-1L,0x1155L}, {255UL,0x53494CCEL,0x3CD95F80L,0UL,0x7D03L,0x91A5L}}, {{0xA1L,0x58BA73FFL,0UL,1UL,-1L,0x1155L}, {255UL,0x53494CCEL,0x3CD95F80L,0UL,0x7D03L,0x91A5L}}, {{0xA1L,0x58BA73FFL,0UL,1UL,-1L,0x1155L}, {255UL,0x53494CCEL,0x3CD95F80L,0UL,0x7D03L,0x91A5L}}, {{0xA1L,0x58BA73FFL,0UL,1UL,-1L,0x1155L}, {255UL,0x53494CCEL,0x3CD95F80L,0UL,0x7D03L,0x91A5L}}};
                const unsigned char l_971 = 1UL;
                struct S0 ***l_976 = (void*)0;
                int i, j;
                if ((l_963[5] < g_802.f3))
                {
                    unsigned char l_972 = 0x4EL;
                    if (p_60)
                    {
                        return p_60;
                    }
                    else
                    {
                        (*l_599) = (*l_599);
                    }
                    (*l_599) = (void*)0;
                    l_966[3][0].f1 = ((safe_rshift_func_uint8_t_u_s(p_57, g_802.f1)) != g_213);
                    l_977 = (safe_add_func_int32_t_s_s(((p_59 == ((g_297.f5 <= l_962) != 0x4DL)) >= g_802.f5), (l_976 == &g_218)));
                }
                else
                {
                    l_979 |= func_74(l_978, g_301, p_60, (**l_599));
                }
                l_980[2] = &l_977;
                (*l_599) = (void*)0;
            }
        }
        else
        {
            unsigned l_983 = 0x8F9C5944L;
            for (g_79.f5 = 13; (g_79.f5 > 44); g_79.f5 = safe_add_func_int16_t_s_s(g_79.f5, 7))
            {
                return g_79.f0;
            }
            (*g_123) = p_59;
            l_983 |= (~0x162C8F98L);
        }
        l_878 &= (0x13B1FB0BL <= p_60);
    }
    return p_61;
}







static char func_62(int p_63)
{
    unsigned short l_319[10][1][2] = {{{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}, {{0x4A77L, 0x93B9L}}};
    union U1 l_320[8] = {{0x25D48B0EL}, {9L}, {0x25D48B0EL}, {9L}, {0x25D48B0EL}, {9L}, {0x25D48B0EL}, {9L}};
    int l_339 = 0x045B9DD8L;
    const struct S0 *l_364 = (void*)0;
    int *l_382 = &l_339;
    int l_432 = 1L;
    unsigned l_466 = 0x625D57A6L;
    int l_473 = 8L;
    struct S0 *l_498 = &g_79;
    union U1 *l_515 = &g_516;
    short l_519 = 0L;
    short l_520 = 3L;
    int *l_521 = &l_473;
    int i, j, k;
    for (g_283 = 0; (g_283 <= 0); g_283 += 1)
    {
        int l_322 = 0xCBA468E9L;
        int *l_342 = &g_79.f1;
        union U1 *l_367 = &g_122;
        union U1 **l_369 = (void*)0;
        union U1 * const *l_406[3][9][6] = {{{&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}}, {{&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}}, {{&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}, {&l_367, (void*)0, &g_363, (void*)0, &g_363, (void*)0}}};
        union U1 ***l_438 = (void*)0;
        union U1 ***l_439[1];
        struct S0 l_462 = {0xCFL,0x99530D5CL,4294967293UL,1UL,0L,0UL};
        unsigned l_470 = 18446744073709551612UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_439[i] = &l_369;
    }
    (*l_521) ^= (safe_rshift_func_uint16_t_u_u((*l_382), ((func_64((*l_515), (g_301 || (((0UL < func_64((*g_363), (g_79.f1 && ((p_63 > ((l_519 <= (((&l_515 == &l_515) & 0xD877L) == l_520)) <= p_63)) > g_283)), g_297.f1, g_79.f0, p_63)) & (-1L)) && 65526UL)), p_63, g_284, p_63) ^ (*l_382)) != p_63)));
    return p_63;
}







static short func_64(union U1 p_65, unsigned p_66, int p_67, unsigned short p_68, int p_69)
{
    int *l_318 = &g_297.f1;
    (*l_318) ^= (*g_123);
    return (*l_318);
}







static union U1 func_70(short p_71, int p_72, char p_73)
{
    int l_237[6];
    struct S0 *l_240 = (void*)0;
    struct S0 **l_243 = &g_219;
    unsigned short l_248 = 8UL;
    union U1 l_260 = {0x359D785AL};
    int i;
    for (i = 0; i < 6; i++)
        l_237[i] = 0xCFB175DEL;
    if ((p_72 == (l_237[0] || (((safe_add_func_uint16_t_u_u((p_72 | (l_240 != l_240)), g_79.f2)) && func_74((**g_218), g_79.f1, l_237[0], l_237[0])) != g_36))))
    {
        short l_244 = 0xBB93L;
        int l_245 = 1L;
        char l_300[4];
        union U1 l_302 = {-1L};
        int i;
        for (i = 0; i < 4; i++)
            l_300[i] = (-1L);
        l_245 = (safe_sub_func_uint32_t_u_u(((void*)0 == &l_240), func_74((**g_218), ((void*)0 != l_243), (g_36 ^ l_237[0]), l_244)));
        if ((0x8AB661E3L ^ ((((func_74((**l_243), g_205, g_79.f5, ((safe_rshift_func_int8_t_s_s(p_71, 1)) || p_71)) >= l_237[0]) != (g_79.f4 ^ (-1L))) <= l_248) | 5UL)))
        {
            for (l_244 = 9; (l_244 < 25); l_244++)
            {
                int **l_251 = &g_123;
                l_237[5] = (-4L);
                (*l_251) = g_123;
                (*g_123) = (p_72 >= 0xE7L);
            }
        }
        else
        {
            int *l_259 = &g_79.f1;
            struct S0 l_281 = {251UL,0L,0xB6C139F9L,0xE5L,-6L,65535UL};
            struct S0 l_298 = {7UL,0x9DD8CF63L,0x3740F907L,0x01L,-5L,0x8E91L};
            if (((5UL <= (safe_rshift_func_int8_t_s_u((g_79.f0 && (p_73 == (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((func_74((**g_218), g_79.f2, l_248, p_71) || g_205), p_71)), 0xA3837B66L)))), 1))) != p_71))
            {
                int **l_258 = (void*)0;
                l_259 = g_123;
            }
            else
            {
                return l_260;
            }
            for (p_72 = 0; (p_72 < (-18)); --p_72)
            {
                unsigned l_274 = 5UL;
                struct S0 l_280[1] = {{1UL,0L,0x7D6E0D3AL,0xAFL,0x4A4CL,65531UL}};
                unsigned char l_282 = 0xCBL;
                int i;
                for (g_79.f5 = 0; (g_79.f5 == 17); g_79.f5 = safe_add_func_uint8_t_u_u(g_79.f5, 4))
                {
                    unsigned short l_272 = 0UL;
                    int *l_273 = &l_237[0];
                    (*l_273) |= ((safe_unary_minus_func_uint16_t_u((*l_259))) < (safe_div_func_int16_t_s_s((+((safe_lshift_func_uint8_t_u_s(g_79.f1, l_260.f0)) >= (safe_add_func_uint16_t_u_u(g_79.f2, (!(*l_259)))))), l_272)));
                    (*l_243) = (void*)0;
                    (*g_123) = p_72;
                    (*g_123) ^= p_71;
                }
                (*g_145) = (*g_145);
                l_274 = l_237[3];
                (*l_259) = (safe_unary_minus_func_uint32_t_u(((safe_div_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((+func_74(l_280[0], (3UL < func_74(l_281, g_79.f3, g_36, l_260.f0)), p_73, (g_79.f2 == g_213))), g_79.f4)) != l_282) != g_122.f0) & 65528UL), g_283)) != g_284)));
            }
            (*g_123) = (safe_rshift_func_uint8_t_u_u((0x0A5C7809L >= (safe_lshift_func_uint8_t_u_s((0x06AEBFF1L || ((safe_lshift_func_uint8_t_u_s(0xE6L, ((void*)0 == &g_146))) > p_72)), g_283))), 4));
            if ((*g_123))
            {
                unsigned l_299[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_299[i] = 0x715F0C1AL;
                (*l_259) = (p_72 != g_79.f4);
                if ((safe_sub_func_uint8_t_u_u((l_244 <= (safe_mod_func_int8_t_s_s(g_122.f0, func_74(g_297, (l_248 < func_74(l_298, ((((*l_259) > ((((g_297.f2 || 0xB7L) ^ l_244) <= l_299[0]) || l_300[2])) | l_299[0]) && g_301), p_71, p_73)), p_72, g_205)))), p_73)))
                {
                    return l_302;
                }
                else
                {
                    struct S0 l_303 = {0xEBL,1L,0x58D47F54L,0x39L,-1L,0x7154L};
                    int *l_310 = (void*)0;
                    int *l_311 = &l_237[1];
                    (*l_311) ^= (func_74(l_303, ((*l_259) != 0x5DL), (g_79.f4 != ((*g_123) == ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_205, g_79.f4)), (0xCA25EC3FL && p_72))), l_302.f0)) > (-1L)))), (*g_123)) >= l_260.f0);
                }
            }
            else
            {
                for (g_283 = 0; (g_283 != 7); g_283 = safe_add_func_uint8_t_u_u(g_283, 4))
                {
                    int **l_317 = &l_259;
                    for (l_245 = 0; (l_245 != 13); l_245++)
                    {
                        int *l_316 = &l_298.f1;
                        (*l_316) ^= (*g_123);
                        (*l_259) = l_302.f0;
                        l_259 = g_123;
                    }
                    (*l_317) = &l_237[5];
                }
            }
        }
        (*g_123) = (*g_123);
        (*g_123) &= (&g_123 != &g_123);
    }
    else
    {
        (*g_123) &= 0xA20B9343L;
    }
    (*g_123) = l_237[4];
    return l_260;
}







static int func_74(struct S0 p_75, unsigned short p_76, unsigned p_77, int p_78)
{
    unsigned char l_87 = 252UL;
    union U1 *l_121 = &g_122;
    int *l_208 = &g_79.f1;
    if ((safe_div_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((l_87 != l_87), l_87)) || (l_87 && 1L)), 6UL)))
    {
        char l_90 = 0x32L;
        short l_99[7] = {0x9D6EL, 0x0583L, 0x9D6EL, 0x0583L, 0x9D6EL, 0x0583L, 0x9D6EL};
        unsigned short l_157 = 3UL;
        struct S0 *l_187 = &g_79;
        union U1 *l_189 = (void*)0;
        int i;
        if ((safe_mod_func_uint8_t_u_u((p_75.f5 || l_90), ((g_79.f4 >= (g_79.f3 || (p_75.f4 && ((((0xBA4A7E2FL > (safe_sub_func_int32_t_s_s(l_90, (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0xDEL, (-1L))), l_87))))) && g_79.f4) && g_79.f5) | g_79.f3)))) & 1UL))))
        {
            return p_75.f1;
        }
        else
        {
            int l_151[9] = {(-6L), 0L, (-6L), 0L, (-6L), 0L, (-6L), 0L, (-6L)};
            int **l_156 = (void*)0;
            int l_188 = 0xDE8087ECL;
            int i;
            for (g_79.f3 = 0; (g_79.f3 < 52); g_79.f3 = safe_add_func_int32_t_s_s(g_79.f3, 9))
            {
                int l_117[4][3][7];
                union U1 * const l_138 = &g_122;
                const int *l_139 = &g_104.f0;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_117[i][j][k] = 0x3473E551L;
                    }
                }
                g_79.f1 = ((!(g_79.f2 == ((g_79.f3 & ((p_76 != (+p_75.f2)) >= (!(-1L)))) >= g_79.f3))) && (g_36 == l_99[5]));
                if (p_76)
                {
                    unsigned char l_106 = 0x52L;
                    for (p_78 = 17; (p_78 < (-25)); p_78 = safe_sub_func_int16_t_s_s(p_78, 9))
                    {
                        int *l_102 = &g_79.f1;
                        if (p_75.f0)
                            break;
                        (*l_102) |= (l_90 ^ g_36);
                        (*l_102) = p_77;
                    }
                    if ((0x53DE64C9L > l_90))
                    {
                        const union U1 *l_103[1];
                        const union U1 **l_105 = &l_103[0];
                        int *l_107 = &g_79.f1;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_103[i] = &g_104;
                        (*l_105) = l_103[0];
                        (*l_107) = (2L >= l_106);
                        p_78 = 0xC16C4145L;
                    }
                    else
                    {
                        int *l_108 = &g_79.f1;
                        if (l_87)
                            break;
                        (*l_108) |= p_75.f0;
                        if (p_76)
                            break;
                        if (l_87)
                            break;
                    }
                }
                else
                {
                    int *l_118 = &g_79.f1;
                    (*l_118) = ((safe_rshift_func_int16_t_s_s(p_76, (safe_add_func_uint16_t_u_u(l_99[4], (0xEE7FL <= ((((l_99[5] & p_78) > (g_79.f5 >= (l_87 <= ((p_76 ^ ((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_79.f5, (-1L))), g_79.f0)) & g_79.f0)) > 0x2822L)))) || l_117[2][0][4]) >= g_79.f3)))))) && l_87);
                    (*l_118) = p_78;
                }
                for (p_77 = 0; (p_77 < 8); p_77++)
                {
                    unsigned l_129 = 1UL;
                    int l_171 = 0L;
                    if ((((l_121 != (void*)0) >= g_104.f0) && (&p_78 == g_123)))
                    {
                        if (l_117[0][2][3])
                            break;
                    }
                    else
                    {
                        const unsigned l_124 = 0x93E846AAL;
                        const int **l_140 = &l_139;
                        (*g_123) = ((&g_122 == &g_104) < l_124);
                        (*g_123) = ((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((p_75.f5 || (1L ^ (l_129 != 0UL))), (safe_lshift_func_int8_t_s_s(g_79.f5, (safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((p_76 || g_104.f0) || (l_138 != (void*)0)) >= p_75.f0), l_87)), l_99[6])), 0x284AL)))))) && p_75.f4), g_79.f0)) != 0x8C7AL);
                        (*l_140) = l_139;
                    }
                    if ((safe_add_func_uint8_t_u_u(l_99[5], (((((((-9L) == (safe_div_func_uint32_t_u_u((&l_121 == g_145), (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_151[2], (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((l_156 == &g_123) || p_75.f2) != p_78), p_75.f3)), g_79.f2)))), p_75.f4))))) < p_75.f0) || (*g_123)) && l_157) < p_77) <= 65535UL))))
                    {
                        unsigned l_160 = 18446744073709551608UL;
                        (*g_145) = (void*)0;
                        (*g_123) = 0L;
                        l_160 = (safe_sub_func_int16_t_s_s((!l_87), (l_87 != ((g_122.f0 != g_122.f0) != l_99[3]))));
                    }
                    else
                    {
                        (*g_123) = (safe_lshift_func_uint8_t_u_u(g_79.f4, (0UL > (safe_add_func_uint16_t_u_u(g_79.f3, (((p_75.f0 ^ (safe_add_func_int16_t_s_s(g_79.f3, ((safe_div_func_uint32_t_u_u(((0x11E7L | g_122.f0) ^ 251UL), (safe_add_func_uint32_t_u_u(2UL, 0L)))) >= 4294967290UL)))) <= l_129) < p_78))))));
                        p_75.f1 = p_77;
                        l_171 = p_75.f0;
                    }
                }
                for (g_79.f5 = 0; (g_79.f5 > 27); g_79.f5 = safe_add_func_uint32_t_u_u(g_79.f5, 1))
                {
                    int **l_176 = &g_123;
                    struct S0 *l_178 = (void*)0;
                    struct S0 **l_177 = &l_178;
                    if ((l_157 > (l_87 >= p_75.f2)))
                    {
                        (*g_123) ^= l_157;
                    }
                    else
                    {
                        (*g_123) &= ((*l_139) == ((void*)0 == &l_121));
                        if (l_99[5])
                            continue;
                    }
                    (*l_176) = g_123;
                    (*l_177) = &g_79;
                    (**l_176) |= 0x818BC76BL;
                }
            }
            (*g_123) = (251UL ^ 0L);
            l_188 &= ((g_36 & ((safe_add_func_uint32_t_u_u(p_75.f5, 0xCBB44D92L)) | ((p_75.f0 && 0x23L) ^ ((safe_div_func_uint32_t_u_u(((p_75.f5 < ((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((&p_78 == (void*)0), 2)), ((l_187 != (void*)0) | l_87))) > p_77)) & 0x4855L), g_79.f1)) > g_36)))) == 1L);
        }
        (*g_145) = l_189;
        for (p_75.f5 = 0; (p_75.f5 >= 12); p_75.f5 = safe_add_func_uint8_t_u_u(p_75.f5, 6))
        {
            unsigned l_204[10][9] = {{3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}, {3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL, 3UL, 3UL, 0x958DDEBAL}};
            int i, j;
            for (p_77 = 0; (p_77 <= 32); p_77 = safe_add_func_uint16_t_u_u(p_77, 2))
            {
                unsigned short l_196 = 0xB365L;
            }
        }
    }
    else
    {
        int l_231 = 0L;
        int *l_234 = &g_79.f1;
        int **l_236 = &l_234;
        (*g_123) = l_231;
        for (p_75.f1 = 0; (p_75.f1 <= 20); ++p_75.f1)
        {
            int **l_235 = &g_123;
            (*l_235) = l_234;
        }
        (*l_236) = g_123;
    }
    return (*g_123);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5, "g_79.f5", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_297.f0, "g_297.f0", print_hash_value);
    transparent_crc(g_297.f1, "g_297.f1", print_hash_value);
    transparent_crc(g_297.f2, "g_297.f2", print_hash_value);
    transparent_crc(g_297.f3, "g_297.f3", print_hash_value);
    transparent_crc(g_297.f4, "g_297.f4", print_hash_value);
    transparent_crc(g_297.f5, "g_297.f5", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_509[i], "g_509[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_516.f0, "g_516.f0", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_702[i][j], "g_702[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_797.f0, "g_797.f0", print_hash_value);
    transparent_crc(g_802.f0, "g_802.f0", print_hash_value);
    transparent_crc(g_802.f1, "g_802.f1", print_hash_value);
    transparent_crc(g_802.f2, "g_802.f2", print_hash_value);
    transparent_crc(g_802.f3, "g_802.f3", print_hash_value);
    transparent_crc(g_802.f4, "g_802.f4", print_hash_value);
    transparent_crc(g_802.f5, "g_802.f5", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1043[i], "g_1043[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1163, "g_1163", print_hash_value);
    transparent_crc(g_1226, "g_1226", print_hash_value);
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1337.f0, "g_1337.f0", print_hash_value);
    transparent_crc(g_1337.f1, "g_1337.f1", print_hash_value);
    transparent_crc(g_1337.f2, "g_1337.f2", print_hash_value);
    transparent_crc(g_1337.f3, "g_1337.f3", print_hash_value);
    transparent_crc(g_1337.f4, "g_1337.f4", print_hash_value);
    transparent_crc(g_1337.f5, "g_1337.f5", print_hash_value);
    transparent_crc(g_1379.f0, "g_1379.f0", print_hash_value);
    transparent_crc(g_1415.f0, "g_1415.f0", print_hash_value);
    transparent_crc(g_1415.f1, "g_1415.f1", print_hash_value);
    transparent_crc(g_1415.f2, "g_1415.f2", print_hash_value);
    transparent_crc(g_1415.f3, "g_1415.f3", print_hash_value);
    transparent_crc(g_1415.f4, "g_1415.f4", print_hash_value);
    transparent_crc(g_1415.f5, "g_1415.f5", print_hash_value);
    transparent_crc(g_1425, "g_1425", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
