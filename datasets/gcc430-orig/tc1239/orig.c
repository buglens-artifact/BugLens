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
   char f1;
   unsigned f2;
   unsigned char f3;
   unsigned long long f4;
   short f5;
   unsigned char f6;
};

struct S1 {
   short f0;
   struct S0 f1;
   int f2;
   int f3;
   short f4;
   short f5;
   char f6;
};


static unsigned g_6 = 0x4B2AB76DL;
static struct S1 *g_7 = (void*)0;
static short g_9 = 0x2835L;
static unsigned long long g_10 = 18446744073709551610UL;
static struct S1 g_46 = {0x16CBL,{0x4D05L,2L,0x1F2AED5AL,2UL,18446744073709551606UL,0xD5E7L,0x4AL},0xA13E97A0L,0xDE8B3EC6L,0x9FE2L,3L,0xEBL};
static int g_70 = 3L;
static unsigned long long g_87 = 1UL;
static short *g_91 = &g_46.f0;
static short **g_90 = &g_91;
static int *g_110 = &g_70;
static int g_155 = 0x48893BA8L;
static unsigned long long g_162 = 0x2180A8C217868D4CLL;
static char g_175 = 0L;
static struct S0 g_179 = {-2L,0x1BL,18446744073709551611UL,246UL,0UL,0L,1UL};
static unsigned short g_261 = 65535UL;
static int g_334 = (-7L);
static unsigned g_340 = 0x5C1FB0D2L;
static struct S1 g_344 = {-9L,{0xFC39L,0x58L,18446744073709551609UL,0x64L,1UL,0xA307L,0x16L},0x47B0E61FL,0x24285D88L,-3L,-3L,0xCEL};
static unsigned g_397 = 0x4EDDFC61L;
static int **g_408 = &g_110;
static long long g_510 = 0xFD839D0093E75EC8LL;
static int g_520 = 0x668D6F55L;
static short g_527 = 1L;
static short g_554 = 1L;
static unsigned g_568 = 0x6DFACB86L;
static unsigned short g_656 = 0x7A66L;
static long long g_872 = (-1L);
static short g_902 = 0x9A25L;
static unsigned short g_905 = 0xA335L;
static int g_1004 = (-1L);
static unsigned long long g_1015 = 0x6BB6C207066F5EFALL;
static struct S1 *g_1018 = &g_344;
static unsigned char *g_1041 = &g_179.f3;
static long long g_1176 = 0x49CE26886137561FLL;
static long long g_1210 = (-7L);
static unsigned long long g_1215 = 0x4AAD9C34C966BD1DLL;
static unsigned char g_1451 = 1UL;
static int g_1473 = (-1L);
static unsigned g_1474 = 0xB6B958F9L;
static unsigned char g_1591 = 0x15L;
static unsigned g_1682 = 18446744073709551615UL;
static unsigned short *g_1691 = &g_905;
static unsigned short **g_1690 = &g_1691;
static unsigned g_1857 = 0UL;
static short g_2019 = 0x1012L;
static unsigned long long g_2024 = 0xEE30098253F86CBALL;
static unsigned short g_2054 = 1UL;
static char g_2143 = 0xA4L;
static char g_2146 = 0L;
static char g_2150 = 3L;
static short g_2161 = 2L;
static unsigned g_2166 = 0x85A48244L;
static int g_2173 = 0L;
static unsigned g_2272 = 0xDB447F24L;
static char *g_2276 = &g_2146;
static int g_2318 = (-7L);
static unsigned g_2337 = 18446744073709551610UL;
static int g_2446 = 0x7E936AA8L;
static int g_2451 = 0xE2CA8454L;
static unsigned short g_2477 = 0UL;
static unsigned char **g_2640 = &g_1041;
static unsigned char ***g_2639 = &g_2640;
static struct S1 g_2642 = {-10L,{-10L,0xA0L,0xAED82531L,253UL,18446744073709551612UL,1L,0xF2L},0x08B07288L,3L,0x8F05L,1L,0xEEL};
static char g_2727 = 0x7BL;
static int g_2739 = 0x092DA8D7L;
static unsigned g_2753 = 0x8E71C23CL;
static struct S1 g_2896 = {-1L,{1L,6L,5UL,255UL,1UL,0xD193L,0x54L},6L,0x208D405FL,0xA53FL,1L,7L};
static char g_3060 = 0xE3L;
static unsigned short g_3081 = 0x2C18L;
static int g_3199 = 0x35A94367L;
static unsigned char g_3200 = 0x13L;
static struct S0 *g_3219 = &g_344.f1;
static struct S0 **g_3218 = &g_3219;
static char g_3458 = 0x7BL;
static unsigned short g_3461 = 0x4E29L;
static unsigned g_3623 = 0x2AF42E69L;



static char func_1(void);
static struct S1 * func_2(char p_3, unsigned short p_4, int p_5);
static unsigned short func_14(short p_15, unsigned short p_16, struct S1 * p_17);
static struct S1 * func_18(unsigned long long p_19, short * p_20, long long p_21, unsigned p_22, struct S1 p_23);
static unsigned char func_26(short * p_27, short * p_28, char p_29, struct S1 * p_30, struct S0 p_31);
static char func_33(struct S1 * p_34, struct S1 p_35, short p_36);
static struct S1 func_37(unsigned p_38);
static unsigned func_39(struct S0 p_40, struct S1 * p_41, int p_42, short * p_43);
static int * func_93(struct S1 * p_94, int p_95, unsigned p_96, short ** p_97);
static short ** func_98(short *** p_99, short ** p_100, short ** p_101, short p_102, short ** p_103);
static char func_1(void)
{
    short *l_8 = &g_9;
    struct S1 **l_1956 = &g_7;
    int l_1957 = 1L;
    short *l_1958 = &g_9;
    int l_1983 = (-2L);
    int l_1990 = 0xDB7395C5L;
    int l_2017 = 0xFC68A51DL;
    struct S0 l_2029 = {0x20D3L,-2L,1UL,254UL,0x23648963864BE970LL,0x2C2CL,1UL};
    char l_2072 = 0xEEL;
    unsigned short l_2196 = 65535UL;
    long long l_2239 = (-7L);
    int l_2547 = 0x70C4DC38L;
    unsigned char l_2624 = 255UL;
    unsigned char ***l_2638 = (void*)0;
    short l_2647 = 0xF30EL;
    unsigned char l_2770 = 0x8CL;
    int *l_2828 = &l_1983;
    int l_3092 = 0xC665889DL;
    struct S1 l_3093 = {0x7352L,{0x5123L,0x4FL,18446744073709551615UL,0xA7L,18446744073709551613UL,0x0234L,0xF6L},0L,0x12A468C4L,-1L,0xBC5FL,-9L};
    short l_3210 = (-3L);
    int l_3433 = 0L;
    unsigned l_3492 = 4294967294UL;
    char *l_3511 = &g_3060;
    unsigned l_3518 = 18446744073709551610UL;
    (*l_1956) = func_2(((g_6 ^ g_6) | ((*l_8) = ((void*)0 != g_7))), g_6, g_10);
    if ((((**g_1690) = 3UL) > func_39(g_344.f1, &g_46, func_39(g_179, &g_46, l_1957, l_1958), &g_902)))
    {
        int *l_1959 = &g_1004;
        int *l_1960 = &g_70;
        int *l_1961 = (void*)0;
        int *l_1962 = &g_70;
        int *l_1963 = &g_155;
        int *l_1964 = &l_1957;
        int l_1965 = (-9L);
        int *l_1966 = &g_70;
        int *l_1967 = &l_1965;
        int *l_1968 = (void*)0;
        int *l_1969 = (void*)0;
        int l_1970 = 0x7407BBC0L;
        int l_1971 = 0x6FAC2588L;
        int *l_1972 = &g_46.f2;
        int *l_1973 = &g_70;
        int *l_1974 = &l_1957;
        int *l_1975 = &g_46.f2;
        int *l_1976 = &g_1473;
        int *l_1977 = &g_344.f2;
        int *l_1978 = &g_70;
        int *l_1979 = &g_70;
        int *l_1980 = &g_1473;
        int *l_1981 = &l_1965;
        int l_1982 = (-5L);
        int l_1984 = 0L;
        int *l_1985 = &g_344.f2;
        int *l_1986 = &l_1982;
        int *l_1987 = &l_1965;
        int *l_1988 = &g_344.f2;
        int *l_1989 = &g_520;
        int *l_1991 = (void*)0;
        int *l_1992 = &g_334;
        int *l_1993 = (void*)0;
        int *l_1994 = &g_344.f2;
        int *l_1995 = &g_344.f2;
        int *l_1996 = &g_155;
        int *l_1997 = (void*)0;
        int l_1998 = 8L;
        int *l_1999 = &l_1971;
        int *l_2000 = &l_1957;
        int l_2001 = 1L;
        int *l_2002 = &g_520;
        int *l_2003 = (void*)0;
        int *l_2004 = (void*)0;
        int *l_2005 = (void*)0;
        int *l_2006 = &l_2001;
        int *l_2007 = &g_1004;
        int *l_2008 = &g_155;
        int *l_2009 = (void*)0;
        int *l_2010 = (void*)0;
        int *l_2011 = &l_1984;
        int *l_2012 = &g_344.f2;
        int *l_2013 = &l_1983;
        int *l_2014 = &l_1982;
        int *l_2015 = &l_1957;
        int *l_2016 = &l_1984;
        int *l_2018 = &l_1983;
        int *l_2020 = &g_520;
        int *l_2021 = &l_2001;
        int *l_2022 = (void*)0;
        int *l_2023 = &g_334;
        (*g_110) = (+((**g_1690) < (+(*g_1691))));
        --g_2024;
        (*l_1967) &= (safe_mul_func_uint8_t_u_u((*g_1041), (l_1990 != (*l_1966))));
    }
    else
    {
        int *l_2033 = &l_1957;
        int l_2096 = 1L;
        int l_2122 = 0x6388863FL;
        short *l_2183 = &g_344.f5;
        struct S0 **l_2343 = (void*)0;
        struct S0 ***l_2342 = &l_2343;
        struct S1 *l_2351 = &g_344;
        unsigned short l_2627 = 1UL;
        unsigned char **l_2637 = &g_1041;
        unsigned char ***l_2636 = &l_2637;
        int l_2715 = 0L;
        int l_2733 = 0x41CD1158L;
        if ((func_39(l_2029, &g_46, (safe_sub_func_uint16_t_u_u(l_1957, (*g_91))), (*g_90)) <= g_46.f1.f3))
        {
            int **l_2032 = &g_110;
            (*l_2032) = &g_334;
            (*l_2032) = l_2033;
            (**l_2032) &= l_2029.f1;
        }
        else
        {
            long long *l_2036 = &g_872;
            struct S0 l_2050 = {0x09E2L,-1L,0UL,1UL,0xAEEE3D99B53E797BLL,0x65D7L,0UL};
            int l_2073 = 0x662E2094L;
            int l_2077 = 0x72F27464L;
            int l_2078 = 0x8A6352B8L;
            int l_2086 = 1L;
            int l_2094 = (-4L);
            int l_2101 = 0xEA259A5EL;
            int l_2119 = 1L;
            int l_2157 = 0xF4D0D793L;
            char *l_2169 = &g_46.f6;
            int l_2172 = 0x106D6E14L;
            struct S1 *l_2181 = &g_344;
            int l_2527 = 0x104ABFD7L;
            unsigned char l_2528 = 0xA9L;
            int **l_2769 = (void*)0;
            for (g_1682 = 0; (g_1682 <= 39); ++g_1682)
            {
                unsigned long long l_2037 = 0xF3558B96F973A592LL;
                unsigned short *l_2051 = &g_261;
                unsigned short *l_2052 = &g_656;
                unsigned short *l_2053 = &g_2054;
                struct S1 l_2057 = {2L,{0x046DL,-9L,5UL,0x1DL,0x63ED7200E65AD9A0LL,1L,0UL},1L,1L,0xF4B4L,4L,0x77L};
                struct S1 *l_2058 = &g_46;
                (*l_2033) |= (l_2036 == &g_1210);
                --l_2037;
                if ((safe_mul_func_uint16_t_u_u((*g_1691), ((safe_lshift_func_int8_t_s_s(l_2029.f2, 5)) == ((safe_add_func_int16_t_s_s(0x45F8L, (((*l_8) = ((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_2053) = ((*l_2052) = ((*l_2051) ^= func_39(l_2050, &g_46, ((~g_162) && g_1473), l_8)))), 0xC119L)), l_2050.f5)) < 0xC114F376L)) & (*g_91)))) == (*l_2033))))))
                {
                    (*l_2033) &= 1L;
                }
                else
                {
                    struct S1 l_2059 = {0L,{-5L,9L,18446744073709551613UL,255UL,8UL,0L,255UL},0x72B900F4L,0xFF47B235L,-2L,0x0B8BL,0xCDL};
                    int *l_2061 = &g_1004;
                    int *l_2062 = &g_70;
                    int *l_2063 = &g_334;
                    int *l_2064 = &g_344.f2;
                    int *l_2065 = &l_2057.f2;
                    int *l_2066 = &g_520;
                    int *l_2067 = &g_344.f2;
                    int *l_2068 = &g_70;
                    int *l_2069 = &g_334;
                    int *l_2070 = &g_520;
                    int *l_2071 = &g_520;
                    int *l_2074 = &g_1004;
                    int *l_2075 = (void*)0;
                    int *l_2076 = (void*)0;
                    int *l_2079 = &g_334;
                    int *l_2080 = &l_2017;
                    int *l_2081 = &g_520;
                    int *l_2082 = &g_334;
                    int *l_2083 = &g_1004;
                    int *l_2084 = &g_520;
                    int *l_2085 = &g_70;
                    int *l_2087 = &g_70;
                    int *l_2088 = &l_2059.f2;
                    int *l_2089 = &g_46.f2;
                    int *l_2090 = &g_344.f2;
                    int *l_2091 = &g_70;
                    int *l_2092 = &g_46.f2;
                    int *l_2093 = (void*)0;
                    int *l_2095 = &l_2078;
                    int *l_2097 = &l_2077;
                    int *l_2098 = &g_344.f2;
                    int *l_2099 = &l_1983;
                    int *l_2100 = &g_344.f2;
                    int *l_2102 = (void*)0;
                    int *l_2103 = &l_2101;
                    int *l_2104 = &l_1990;
                    int *l_2105 = &l_1990;
                    int *l_2106 = (void*)0;
                    int *l_2107 = &l_2059.f2;
                    int *l_2108 = &l_2057.f2;
                    int *l_2109 = (void*)0;
                    int *l_2110 = (void*)0;
                    int *l_2111 = &g_1473;
                    int *l_2112 = (void*)0;
                    int *l_2113 = &l_2073;
                    int *l_2114 = &g_70;
                    int *l_2115 = &g_46.f2;
                    int *l_2116 = &l_1983;
                    int *l_2117 = (void*)0;
                    int *l_2118 = &g_520;
                    int *l_2120 = &l_2094;
                    int *l_2121 = (void*)0;
                    int *l_2123 = &g_46.f2;
                    int *l_2124 = (void*)0;
                    int *l_2125 = &g_46.f2;
                    int *l_2126 = &l_1990;
                    int *l_2127 = &g_1004;
                    int *l_2128 = &g_70;
                    int *l_2129 = &l_2059.f2;
                    int *l_2130 = &g_1004;
                    int *l_2131 = (void*)0;
                    int *l_2132 = (void*)0;
                    int *l_2133 = &l_2077;
                    int *l_2134 = &l_2077;
                    int *l_2135 = &g_344.f2;
                    int *l_2136 = &g_1004;
                    int *l_2137 = &g_334;
                    int *l_2138 = &g_70;
                    int *l_2139 = &l_1990;
                    int *l_2140 = &g_1004;
                    int *l_2141 = &l_2096;
                    int *l_2142 = &l_2119;
                    int *l_2144 = &g_1004;
                    int *l_2145 = &l_2077;
                    int *l_2147 = &l_2096;
                    int *l_2148 = &l_1983;
                    int *l_2149 = &g_344.f2;
                    int *l_2151 = &g_155;
                    int *l_2152 = &l_2017;
                    int *l_2153 = &l_2059.f2;
                    int *l_2154 = &l_2096;
                    int *l_2155 = &l_2059.f2;
                    int *l_2156 = &l_2059.f2;
                    int *l_2158 = &l_2059.f2;
                    int *l_2159 = &g_1473;
                    int *l_2160 = &l_2157;
                    int *l_2162 = &g_344.f2;
                    int *l_2163 = &l_2119;
                    int *l_2164 = &l_2057.f2;
                    int *l_2165 = &l_2057.f2;
                    for (l_2050.f6 = 0; (l_2050.f6 != 1); ++l_2050.f6)
                    {
                        int **l_2060 = &l_2033;
                        (*l_2060) = func_93(&g_344, ((*l_2033) = (func_33(&g_46, l_2057, (8L | func_33(l_2058, l_2059, ((**g_90) = (*l_2033))))) > l_1990)), g_9, &g_91);
                        (*l_2060) = &l_1957;
                    }
                    ++g_2166;
                    return g_179.f0;
                }
                (*g_110) &= l_2017;
            }
            g_2173 = (((*l_2169) = (-1L)) ^ (safe_mul_func_int8_t_s_s(l_2172, g_344.f1.f5)));
            if (l_2050.f5)
            {
                struct S0 l_2180 = {0x027FL,0xB9L,18446744073709551609UL,0xABL,0x12D94102629B4F35LL,0x4FBFL,0xB3L};
                short *l_2184 = &l_2029.f0;
                unsigned long long l_2195 = 1UL;
                char *l_2275 = &l_2029.f1;
                unsigned long long *l_2348 = &g_1215;
                int l_2366 = 0x0E2F345BL;
                int l_2405 = 0L;
                int l_2450 = 5L;
                int l_2472 = 1L;
                int *l_2630 = &l_2096;
                struct S1 *l_2646 = &g_2642;
                char l_2677 = (-1L);
                int l_2707 = (-1L);
                for (g_1004 = (-3); (g_1004 >= (-24)); g_1004--)
                {
                    struct S0 l_2182 = {-5L,9L,0UL,0x2CL,7UL,-8L,250UL};
                    int l_2311 = 0x8FFB5C54L;
                    int l_2326 = 6L;
                }
                if (((*g_1041) || (safe_mod_func_int32_t_s_s(0L, (safe_sub_func_int32_t_s_s(((l_2119 < ((*g_1691) ^ (l_2119 == g_344.f3))) ^ (((*l_2348)++) > func_14(l_1983, l_1957, l_2351))), 6UL))))))
                {
                    int *l_2352 = &g_155;
                    int *l_2353 = &l_2157;
                    int *l_2354 = &g_155;
                    int *l_2355 = &g_2318;
                    int *l_2356 = &l_1983;
                    int l_2357 = 0xAE4377B2L;
                    int *l_2358 = &g_334;
                    int *l_2359 = (void*)0;
                    int *l_2360 = &l_2119;
                    int *l_2361 = &g_1473;
                    int *l_2362 = &l_2094;
                    int *l_2363 = &l_2078;
                    int *l_2364 = (void*)0;
                    int *l_2365 = &l_2094;
                    int *l_2367 = &g_334;
                    int *l_2368 = &l_2094;
                    int *l_2369 = &l_2122;
                    int *l_2370 = &g_2318;
                    int *l_2371 = &g_1004;
                    int *l_2372 = &l_2077;
                    int *l_2373 = &l_2101;
                    int *l_2374 = &l_2366;
                    int *l_2375 = &l_2357;
                    int *l_2376 = &g_70;
                    int *l_2377 = &l_2086;
                    int *l_2378 = &l_1983;
                    int l_2379 = 9L;
                    int *l_2380 = &g_520;
                    int l_2381 = (-1L);
                    int *l_2382 = &l_2157;
                    int *l_2383 = &g_155;
                    int *l_2384 = &g_1004;
                    int *l_2385 = (void*)0;
                    int *l_2386 = &l_1990;
                    int l_2387 = 4L;
                    int *l_2388 = &g_520;
                    int *l_2389 = &l_2387;
                    int *l_2390 = &l_2078;
                    int *l_2391 = &l_1983;
                    int *l_2392 = (void*)0;
                    int *l_2393 = &l_2096;
                    int *l_2394 = &l_2073;
                    int *l_2395 = (void*)0;
                    int *l_2396 = &g_1004;
                    int *l_2397 = &l_2357;
                    int *l_2398 = &l_2078;
                    int *l_2399 = &g_344.f2;
                    int *l_2400 = &g_334;
                    int *l_2401 = &l_2119;
                    int *l_2402 = &l_2379;
                    int *l_2403 = (void*)0;
                    int *l_2404 = (void*)0;
                    int *l_2406 = (void*)0;
                    int *l_2407 = &g_1004;
                    int *l_2408 = &g_2318;
                    int *l_2409 = &g_334;
                    int *l_2410 = &g_344.f2;
                    int *l_2411 = (void*)0;
                    int *l_2412 = &l_2366;
                    int *l_2413 = &l_2387;
                    int *l_2414 = &g_344.f2;
                    int *l_2415 = (void*)0;
                    int *l_2416 = &g_2318;
                    int *l_2417 = (void*)0;
                    int *l_2418 = (void*)0;
                    int *l_2419 = &g_155;
                    int *l_2420 = (void*)0;
                    int *l_2421 = &l_2096;
                    int *l_2422 = &l_2017;
                    int *l_2423 = (void*)0;
                    int *l_2424 = &l_2366;
                    int *l_2425 = &g_520;
                    int *l_2426 = (void*)0;
                    int *l_2427 = &g_46.f2;
                    int *l_2428 = &l_2101;
                    int *l_2429 = &l_2094;
                    int *l_2430 = &l_2094;
                    int *l_2431 = &g_1473;
                    int *l_2432 = &g_2318;
                    int *l_2433 = &g_70;
                    int *l_2434 = &l_2101;
                    int *l_2435 = &g_155;
                    int *l_2436 = &l_1957;
                    int *l_2437 = (void*)0;
                    int *l_2438 = &l_2073;
                    int *l_2439 = &l_2381;
                    int *l_2440 = &l_2094;
                    int *l_2441 = (void*)0;
                    int *l_2442 = (void*)0;
                    int *l_2443 = &g_46.f2;
                    int *l_2444 = &g_155;
                    int *l_2445 = &g_344.f2;
                    int *l_2447 = (void*)0;
                    int *l_2448 = &l_1983;
                    int *l_2449 = (void*)0;
                    int *l_2452 = &g_520;
                    int *l_2453 = &g_2451;
                    int *l_2454 = &l_2379;
                    int *l_2455 = &l_2073;
                    int *l_2456 = (void*)0;
                    int *l_2457 = &g_520;
                    int *l_2458 = (void*)0;
                    int *l_2459 = &l_2073;
                    int *l_2460 = &l_2387;
                    int *l_2461 = &l_2387;
                    int *l_2462 = &l_2405;
                    int l_2463 = 0x66DE33E4L;
                    int *l_2464 = &l_2381;
                    int *l_2465 = (void*)0;
                    int *l_2466 = &l_2366;
                    int *l_2467 = &l_2157;
                    int *l_2468 = &l_2157;
                    int *l_2469 = &l_1957;
                    int *l_2470 = (void*)0;
                    int *l_2471 = &g_46.f2;
                    int *l_2473 = &l_2157;
                    int *l_2474 = &l_1983;
                    int *l_2475 = &g_1004;
                    int *l_2476 = &g_520;
                    int **l_2480 = (void*)0;
                    int **l_2481 = (void*)0;
                    int **l_2482 = &l_2424;
                    (*l_2033) ^= ((void*)0 == &g_1690);
                    g_2477++;
                    (*l_2482) = &g_1473;
                    (*l_2482) = (void*)0;
                }
                else
                {
                    int *l_2483 = &l_2086;
                    int *l_2484 = &l_2122;
                    int *l_2485 = &g_1473;
                    int *l_2486 = (void*)0;
                    int *l_2487 = &l_1983;
                    int *l_2488 = &l_1957;
                    int *l_2489 = &l_2094;
                    int *l_2490 = &l_2157;
                    int *l_2491 = &l_2077;
                    int *l_2492 = &g_70;
                    int *l_2493 = &l_2122;
                    int *l_2494 = &l_2122;
                    int *l_2495 = &g_70;
                    int *l_2496 = (void*)0;
                    int *l_2497 = &l_2086;
                    int *l_2498 = &g_1473;
                    int *l_2499 = &l_2078;
                    int *l_2500 = (void*)0;
                    int *l_2501 = &l_1990;
                    int *l_2502 = &l_1990;
                    int *l_2503 = &g_2451;
                    int *l_2504 = (void*)0;
                    int *l_2505 = &l_2017;
                    int *l_2506 = &g_520;
                    int *l_2507 = &g_2318;
                    int *l_2508 = &g_1473;
                    int *l_2509 = &l_2472;
                    int *l_2510 = (void*)0;
                    int *l_2511 = &g_2446;
                    int *l_2512 = &l_2157;
                    int *l_2513 = &l_2017;
                    int *l_2514 = (void*)0;
                    int *l_2515 = &l_2450;
                    int *l_2516 = &l_2119;
                    int *l_2517 = (void*)0;
                    int *l_2518 = (void*)0;
                    int *l_2519 = &g_2451;
                    int *l_2520 = (void*)0;
                    int *l_2521 = &l_2096;
                    int *l_2522 = (void*)0;
                    int *l_2523 = &l_2078;
                    int *l_2524 = &l_2017;
                    int *l_2525 = &g_2318;
                    int *l_2526 = &l_2073;
                    unsigned char **l_2537 = &g_1041;
                    struct S0 *l_2538 = &l_2180;
                    l_2528--;
                    (*l_2181) = func_37((((*l_2509) = ((safe_mod_func_int32_t_s_s(((&g_1690 != &g_1690) != g_510), (safe_lshift_func_int16_t_s_s((-5L), (*l_2033))))) != ((safe_mul_func_int16_t_s_s(l_2472, ((*g_1691) = (**g_1690)))) >= (*l_2033)))) <= (l_2537 == (void*)0)));
                    (*l_2538) = g_179;
                    for (g_9 = (-8); (g_9 != 15); g_9 = safe_add_func_uint16_t_u_u(g_9, 2))
                    {
                        unsigned *l_2545 = &g_6;
                        struct S1 l_2546 = {-1L,{0x68E1L,0x83L,0UL,0x39L,0xE47ADB61651D85FELL,0xC017L,0x76L},0x0F01FB6CL,0xD6B129D8L,0x2FCEL,8L,0x26L};
                        (*l_2513) = (safe_mod_func_int8_t_s_s((*g_2276), (*l_2033)));
                        return l_2527;
                    }
                }
                l_2366 &= (((*l_2169) = ((void*)0 != &g_6)) ^ ((*l_2275) &= ((*g_2276) = l_2029.f0)));
                if ((g_70 <= ((void*)0 != &l_2172)))
                {
                    int **l_2548 = &g_110;
                    int l_2574 = (-1L);
                    struct S1 *l_2641 = &g_344;
                    short **l_2644 = (void*)0;
                    short *l_2645 = (void*)0;
                    (*l_2548) = (void*)0;
                    if ((g_179.f0 && l_2239))
                    {
                        int *l_2549 = &l_2096;
                        int *l_2550 = &g_1004;
                        int *l_2551 = &l_2077;
                        int *l_2552 = &l_2527;
                        int *l_2553 = &l_1983;
                        int *l_2554 = &l_2077;
                        int *l_2555 = &l_2405;
                        int *l_2556 = &l_2472;
                        int *l_2557 = &l_2094;
                        int *l_2558 = (void*)0;
                        int *l_2559 = (void*)0;
                        int *l_2560 = (void*)0;
                        int *l_2561 = &l_2119;
                        int *l_2562 = (void*)0;
                        int *l_2563 = &l_2078;
                        int *l_2564 = (void*)0;
                        int *l_2565 = (void*)0;
                        int *l_2566 = &l_2472;
                        int *l_2567 = &l_2405;
                        int *l_2568 = (void*)0;
                        int *l_2569 = (void*)0;
                        int *l_2570 = &l_2101;
                        int *l_2571 = &g_155;
                        int *l_2572 = (void*)0;
                        int *l_2573 = &g_70;
                        int *l_2575 = (void*)0;
                        int *l_2576 = &g_155;
                        int *l_2577 = &g_334;
                        int *l_2578 = (void*)0;
                        int *l_2579 = &l_2405;
                        int *l_2580 = &l_2366;
                        int *l_2581 = &l_2450;
                        int *l_2582 = (void*)0;
                        int *l_2583 = &l_1990;
                        int *l_2584 = &l_1957;
                        int *l_2585 = &g_1004;
                        int *l_2586 = &g_520;
                        int *l_2587 = &l_2017;
                        int *l_2588 = &g_2318;
                        int *l_2589 = &g_2446;
                        int *l_2590 = &l_1983;
                        int *l_2591 = (void*)0;
                        int *l_2592 = &g_2318;
                        int *l_2593 = &l_2122;
                        int *l_2594 = &g_70;
                        int *l_2595 = &l_2073;
                        int *l_2596 = &l_2527;
                        int *l_2597 = &l_2405;
                        int *l_2598 = &l_2405;
                        int *l_2599 = &l_2086;
                        int *l_2600 = (void*)0;
                        int *l_2601 = (void*)0;
                        int *l_2602 = &l_2078;
                        int *l_2603 = &g_2446;
                        int *l_2604 = (void*)0;
                        int *l_2605 = &l_2077;
                        int *l_2606 = &l_1983;
                        int *l_2607 = &l_2527;
                        int *l_2608 = &g_520;
                        int *l_2609 = &l_2122;
                        int *l_2610 = &l_2472;
                        int *l_2611 = &l_2094;
                        int l_2612 = (-1L);
                        int *l_2613 = &l_2527;
                        int *l_2614 = &l_2094;
                        int *l_2615 = &l_2612;
                        int *l_2616 = &g_2451;
                        int *l_2617 = &l_1990;
                        int *l_2618 = &g_1004;
                        int *l_2619 = &g_1004;
                        int *l_2620 = &l_2157;
                        int *l_2621 = &l_2073;
                        int *l_2622 = &g_46.f2;
                        int *l_2623 = &g_520;
                        l_2624++;
                        l_2627++;
                        (*l_2567) = 0L;
                        (*l_2548) = &l_2612;
                    }
                    else
                    {
                        struct S1 *l_2631 = &g_344;
                        int l_2643 = 0x50C3495AL;
                        (*l_2548) = (l_2630 = (void*)0);
                        (*l_2548) = func_93(l_2631, ((((((*l_2033) = 0xC44B7E08L) > (safe_sub_func_int8_t_s_s(0x3BL, (safe_rshift_func_int16_t_s_s((l_2636 == (g_2639 = l_2638)), (((65527UL < l_1983) > ((((*l_2548) = func_93(l_2641, l_2643, g_261, l_2644)) == &l_2119) < g_2642.f1.f3)) || 0x91258A300D9BA6C0LL)))))) || 1L) > g_2318) == 1L), g_2642.f3, &g_91);
                    }
                    (*l_2033) &= l_2094;
                }
                else
                {
                    int *l_2648 = &l_2073;
                    int *l_2649 = &l_2086;
                    int *l_2650 = (void*)0;
                    int *l_2651 = (void*)0;
                    int *l_2652 = &l_2086;
                    int *l_2653 = &l_2405;
                    int *l_2654 = &l_2450;
                    int *l_2655 = (void*)0;
                    int *l_2656 = &l_2017;
                    int *l_2657 = &l_1990;
                    int *l_2658 = (void*)0;
                    int *l_2659 = &l_2017;
                    int *l_2660 = &l_2096;
                    int *l_2661 = &g_1473;
                    int *l_2662 = &l_2073;
                    int *l_2663 = &l_2450;
                    int *l_2664 = &l_2086;
                    int *l_2665 = &l_1957;
                    int *l_2666 = &g_334;
                    int *l_2667 = &l_2078;
                    int *l_2668 = &l_1990;
                    int *l_2669 = &l_2094;
                    int *l_2670 = &l_2119;
                    int *l_2671 = &l_2086;
                    int *l_2672 = &g_2446;
                    int *l_2673 = &l_2096;
                    int l_2674 = (-1L);
                    int *l_2675 = (void*)0;
                    int *l_2676 = (void*)0;
                    int *l_2678 = (void*)0;
                    int *l_2679 = &g_46.f2;
                    int *l_2680 = &l_2472;
                    int *l_2681 = &l_2157;
                    int *l_2682 = &g_1004;
                    int *l_2683 = &l_2405;
                    int *l_2684 = &l_2472;
                    int *l_2685 = &g_2451;
                    int *l_2686 = &g_46.f2;
                    int *l_2687 = &l_2077;
                    int *l_2688 = &g_46.f2;
                    int *l_2689 = &g_2318;
                    int *l_2690 = &g_1473;
                    int *l_2691 = &g_46.f2;
                    int l_2692 = (-3L);
                    int *l_2693 = &l_2157;
                    int *l_2694 = &g_70;
                    int *l_2695 = &l_1990;
                    int *l_2696 = &l_2101;
                    int *l_2697 = &l_2073;
                    int *l_2698 = &g_344.f2;
                    int *l_2699 = &l_2077;
                    int *l_2700 = &l_2073;
                    int *l_2701 = (void*)0;
                    int *l_2702 = &l_2094;
                    int *l_2703 = &g_2446;
                    int *l_2704 = (void*)0;
                    int *l_2705 = &g_2446;
                    int *l_2706 = (void*)0;
                    int *l_2708 = (void*)0;
                    int *l_2709 = &l_1957;
                    int *l_2710 = &g_1004;
                    int *l_2711 = &l_2157;
                    int *l_2712 = &l_2157;
                    int *l_2713 = &l_2157;
                    int *l_2714 = &l_2101;
                    int *l_2716 = &l_2157;
                    int *l_2717 = &g_2318;
                    int *l_2718 = &g_70;
                    int *l_2719 = (void*)0;
                    int *l_2720 = &l_2122;
                    int *l_2721 = &l_2122;
                    int *l_2722 = &l_2692;
                    int *l_2723 = &l_2405;
                    int *l_2724 = (void*)0;
                    int *l_2725 = &l_2715;
                    int *l_2726 = &g_520;
                    int *l_2728 = (void*)0;
                    int *l_2729 = (void*)0;
                    int *l_2730 = &l_2450;
                    int *l_2731 = &l_2078;
                    int *l_2732 = &l_2094;
                    int *l_2734 = &l_2122;
                    int *l_2735 = (void*)0;
                    int *l_2736 = &l_2450;
                    int *l_2737 = (void*)0;
                    int *l_2738 = &l_2405;
                    int *l_2740 = &l_2405;
                    int *l_2741 = &l_2674;
                    int *l_2742 = &g_2318;
                    int *l_2743 = &l_2527;
                    int *l_2744 = &l_2119;
                    int *l_2745 = &l_2078;
                    int *l_2746 = (void*)0;
                    int *l_2747 = &g_2451;
                    int *l_2748 = &l_2094;
                    int *l_2749 = &g_46.f2;
                    int *l_2750 = &g_1473;
                    int *l_2751 = &l_2405;
                    int *l_2752 = &g_1473;
                    ++g_2753;
                    g_110 = &g_334;
                }
            }
            else
            {
                struct S1 l_2766 = {0x97D1L,{0xE9EAL,0x3BL,18446744073709551615UL,1UL,0x5AF04B819F12EBA3LL,0x6C84L,0x6EL},0xA5B88F21L,0xC681161EL,-5L,-3L,-6L};
                int l_2768 = 0xFF6D0C5EL;
                for (g_179.f1 = 11; (g_179.f1 != 9); g_179.f1--)
                {
                    short *l_2758 = &g_46.f1.f0;
                    struct S1 l_2764 = {0x6ED2L,{1L,0x85L,0x57B82DDBL,6UL,18446744073709551615UL,0xD2CAL,0x0DL},1L,0xF70B7130L,0xDD3DL,0xD015L,0xAAL};
                    struct S1 *l_2765 = &l_2764;
                    int *l_2767 = &g_2451;
                    (*l_2767) &= func_33(func_18((g_344.f1.f4 = 0x78772C5C0FAFDEEELL), l_2758, (safe_rshift_func_int16_t_s_s((*l_2033), (safe_lshift_func_uint8_t_u_u((l_2101 = (l_1957 > (safe_unary_minus_func_uint8_t_u((*l_2033))))), 2)))), g_1857, ((*l_2765) = l_2764)), l_2766, (*l_2033));
                }
                return l_2768;
            }
            g_110 = &l_2157;
        }
    }
    if (l_2770)
    {
        short l_2771 = 0x43B3L;
        unsigned short l_2777 = 7UL;
        struct S0 *l_2890 = &l_2029;
        int l_2917 = 0x05C37124L;
        int l_2928 = 0x5D7EE86CL;
        int l_2985 = 0x1FD830D9L;
        int l_2997 = (-4L);
        int l_3032 = (-2L);
        long long l_3076 = (-1L);
        int l_3078 = 0x89E11FA3L;
        struct S1 **l_3094 = (void*)0;
        char l_3117 = 9L;
        short l_3147 = 0xE9ADL;
        unsigned short **l_3216 = &g_1691;
        unsigned short l_3531 = 1UL;
        if (l_2771)
        {
            int l_2788 = 0x41BF06C2L;
            short *l_2807 = &g_902;
            int l_2826 = (-8L);
            int l_2876 = 0xA3D44D48L;
            unsigned char l_2887 = 1UL;
            for (g_2451 = 0; (g_2451 <= 0); g_2451 = safe_add_func_uint64_t_u_u(g_2451, 5))
            {
                int *l_2776 = &g_520;
                int *l_2778 = (void*)0;
                int *l_2779 = &g_155;
                int *l_2780 = &g_1004;
                int *l_2781 = &g_70;
                int *l_2782 = &g_2642.f2;
                int *l_2783 = &g_46.f2;
                int *l_2784 = (void*)0;
                int *l_2785 = (void*)0;
                int *l_2786 = &g_1004;
                int *l_2787 = &l_1983;
                int *l_2789 = (void*)0;
                int *l_2790 = &g_344.f2;
                int *l_2791 = &g_520;
                int *l_2792 = &g_1004;
                int *l_2793 = &g_520;
                int *l_2794 = (void*)0;
                int *l_2795 = &g_1473;
                unsigned long long l_2796 = 0UL;
                int l_2844 = 0L;
                short l_2848 = (-2L);
                int l_2857 = 0x25BB4DEDL;
                int l_2881 = 0L;
                struct S0 **l_2891 = &l_2890;
                l_2777 |= ((*l_2776) = (safe_mod_func_int64_t_s_s((0x527263423330B5FFLL > l_2029.f3), (-8L))));
                l_2796--;
                for (l_2029.f4 = 28; (l_2029.f4 < 22); l_2029.f4 = safe_sub_func_uint64_t_u_u(l_2029.f4, 2))
                {
                    unsigned long long *l_2808 = &g_1015;
                    int l_2827 = (-2L);
                    int *l_2830 = &g_2446;
                    int *l_2831 = &g_70;
                    int l_2832 = 1L;
                    int *l_2833 = &l_2826;
                    int *l_2834 = (void*)0;
                    int *l_2835 = &g_155;
                    int *l_2836 = &l_2017;
                    int *l_2837 = &g_520;
                    int *l_2838 = &g_344.f2;
                    int *l_2839 = &g_2446;
                    int *l_2840 = &g_2446;
                    int *l_2841 = (void*)0;
                    int *l_2842 = (void*)0;
                    int *l_2843 = (void*)0;
                    int *l_2845 = &l_2826;
                    int *l_2846 = &g_155;
                    int *l_2847 = (void*)0;
                    int *l_2849 = (void*)0;
                    int *l_2850 = (void*)0;
                    int *l_2851 = (void*)0;
                    int *l_2852 = &g_70;
                    int *l_2853 = (void*)0;
                    int *l_2854 = (void*)0;
                    int *l_2855 = &g_70;
                    int *l_2856 = &l_2827;
                    int *l_2858 = (void*)0;
                    int *l_2859 = &l_2844;
                    int *l_2860 = &l_1990;
                    int *l_2861 = &g_2318;
                    int *l_2862 = &g_1004;
                    int *l_2863 = &l_2788;
                    int *l_2864 = &l_2844;
                    int *l_2865 = &l_2844;
                    int *l_2866 = (void*)0;
                    int *l_2867 = (void*)0;
                    int *l_2868 = &l_1983;
                    int *l_2869 = &g_155;
                    int *l_2870 = &g_2642.f2;
                    int *l_2871 = &l_2827;
                    int *l_2872 = (void*)0;
                    int *l_2873 = &l_2826;
                    int *l_2874 = &l_2788;
                    int *l_2875 = &l_2826;
                    int *l_2877 = &g_1004;
                    int *l_2878 = &l_2826;
                    int *l_2879 = &g_344.f2;
                    int *l_2880 = (void*)0;
                    int *l_2882 = &g_70;
                    int *l_2883 = &l_2876;
                    char l_2884 = 0x2AL;
                    int *l_2885 = &g_1473;
                    int *l_2886 = &g_2642.f2;
                    for (l_2029.f1 = 0; (l_2029.f1 != (-16)); l_2029.f1--)
                    {
                        int **l_2803 = &g_110;
                        (*l_2803) = &g_70;
                    }
                    (*l_2790) = ((safe_lshift_func_uint16_t_u_s((1UL > ((void*)0 != &g_1176)), (*g_91))) & (-3L));
                    if ((safe_unary_minus_func_int16_t_s(((*g_91) = (((*l_2808) &= g_46.f1.f5) ^ ((-1L) < 0xE49AL))))))
                    {
                        int l_2809 = 0L;
                        int l_2815 = 0x562F17A3L;
                        int **l_2829 = &l_2782;
                        (*l_2793) &= (((5L | (((4294967295UL >= ((l_2809 > ((safe_unary_minus_func_uint16_t_u(l_2777)) > l_2029.f0)) && l_2827)) <= (**g_1690)) < 0x57L)) != g_10) <= l_2809);
                        (*l_2829) = l_2828;
                    }
                    else
                    {
                        return (*g_2276);
                    }
                    l_2887--;
                }
                (*l_2891) = l_2890;
            }
        }
        else
        {
            struct S1 l_2897 = {0x059EL,{0x3B1FL,-1L,0x5FAFCEF5L,0xCBL,0x48F55E50433FCED0LL,0x37EBL,252UL},0x895A8C4AL,1L,3L,-4L,0x98L};
            struct S1 *l_2900 = (void*)0;
            int l_2921 = 0L;
            int l_2956 = 0xBEF3781AL;
            int l_2968 = 0x31E65850L;
            int l_2986 = 1L;
            short l_3009 = (-2L);
            int l_3026 = 0L;
            int l_3030 = 0x19CAA9ADL;
            int l_3063 = 0L;
            if ((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(3L, (**g_90))), 65526UL)))
            {
                unsigned l_2901 = 0x09D37EF5L;
                return l_2901;
            }
            else
            {
                int *l_2902 = &l_1957;
                int *l_2903 = &g_1473;
                int *l_2904 = &g_70;
                int *l_2905 = &g_46.f2;
                int *l_2906 = &g_2642.f2;
                int *l_2907 = &g_1473;
                int *l_2908 = &l_2017;
                int *l_2909 = &g_46.f2;
                int *l_2910 = &g_334;
                int *l_2911 = (void*)0;
                int *l_2912 = &l_1983;
                int *l_2913 = &g_2451;
                int *l_2914 = &g_1004;
                int *l_2915 = &g_520;
                int *l_2916 = &l_1983;
                int *l_2918 = (void*)0;
                int *l_2919 = &g_520;
                int *l_2920 = &l_1990;
                int *l_2922 = &g_2451;
                int *l_2923 = &l_2897.f2;
                int *l_2924 = &g_2642.f2;
                int *l_2925 = &g_1473;
                int *l_2926 = &g_334;
                int *l_2927 = &l_1957;
                int *l_2929 = (void*)0;
                int *l_2930 = &g_70;
                int *l_2931 = &g_2446;
                int *l_2932 = &g_155;
                int *l_2933 = &l_1983;
                int *l_2934 = &l_2917;
                int *l_2935 = &g_2318;
                int *l_2936 = &g_70;
                int *l_2937 = &g_344.f2;
                int *l_2938 = &g_2446;
                int *l_2939 = &l_2928;
                int *l_2940 = &l_1990;
                int *l_2941 = &g_155;
                int *l_2942 = (void*)0;
                int *l_2943 = &g_334;
                int *l_2944 = &g_70;
                int *l_2945 = &g_520;
                int *l_2946 = &g_1004;
                int *l_2947 = (void*)0;
                int *l_2948 = &g_155;
                int *l_2949 = (void*)0;
                int *l_2950 = &g_334;
                int *l_2951 = &l_2917;
                int *l_2952 = (void*)0;
                int *l_2953 = (void*)0;
                int *l_2954 = (void*)0;
                int *l_2955 = &g_1473;
                int *l_2957 = &g_155;
                int *l_2958 = &l_2956;
                int *l_2959 = &g_155;
                int *l_2960 = (void*)0;
                int *l_2961 = &l_1983;
                int *l_2962 = &g_155;
                int *l_2963 = (void*)0;
                int *l_2964 = (void*)0;
                int *l_2965 = (void*)0;
                int *l_2966 = &g_520;
                int *l_2967 = &g_70;
                int *l_2969 = (void*)0;
                int *l_2970 = &g_2642.f2;
                int *l_2971 = &g_344.f2;
                int *l_2972 = (void*)0;
                int *l_2973 = &g_1473;
                int *l_2974 = &g_2642.f2;
                int *l_2975 = &l_2968;
                int *l_2976 = &l_2968;
                int *l_2977 = (void*)0;
                int *l_2978 = &g_2318;
                int *l_2979 = &g_2896.f2;
                int *l_2980 = (void*)0;
                int *l_2981 = &g_1473;
                int *l_2982 = &g_155;
                int *l_2983 = (void*)0;
                int *l_2984 = &l_2897.f2;
                int *l_2987 = &g_1004;
                int *l_2988 = &g_2318;
                int *l_2989 = &l_2897.f2;
                int *l_2990 = (void*)0;
                int *l_2991 = &g_1473;
                int *l_2992 = &l_2968;
                int *l_2993 = &g_520;
                int *l_2994 = (void*)0;
                int *l_2995 = (void*)0;
                int *l_2996 = &l_2986;
                int *l_2998 = &g_1004;
                int *l_2999 = &l_2928;
                int *l_3000 = (void*)0;
                int *l_3001 = &g_155;
                int *l_3002 = &l_2928;
                int *l_3003 = &l_2017;
                int *l_3004 = &l_2928;
                int *l_3005 = (void*)0;
                int *l_3006 = &l_2921;
                int *l_3007 = &l_2928;
                int *l_3008 = (void*)0;
                int *l_3010 = &l_2017;
                int *l_3011 = &g_334;
                int *l_3012 = &g_155;
                int *l_3013 = &l_2968;
                int *l_3014 = &g_344.f2;
                int *l_3015 = &g_1473;
                int *l_3016 = &g_344.f2;
                int *l_3017 = &l_2897.f2;
                int *l_3018 = &g_344.f2;
                int *l_3019 = &g_155;
                int *l_3020 = &l_2985;
                int *l_3021 = &l_1990;
                int *l_3022 = &l_2928;
                int *l_3023 = &g_2896.f2;
                int *l_3024 = (void*)0;
                int *l_3025 = &l_2017;
                int *l_3027 = (void*)0;
                int *l_3028 = &g_2446;
                int *l_3029 = &l_2921;
                int *l_3031 = &g_70;
                int *l_3033 = &g_155;
                int *l_3034 = (void*)0;
                int *l_3035 = &l_1990;
                int *l_3036 = &l_1957;
                int *l_3037 = &l_2956;
                short l_3038 = (-1L);
                int *l_3039 = &g_70;
                int *l_3040 = &g_1473;
                int *l_3041 = &g_46.f2;
                int *l_3042 = &l_2017;
                int *l_3043 = &l_3026;
                int *l_3044 = &l_2986;
                int *l_3045 = &g_46.f2;
                int *l_3046 = &l_2017;
                int *l_3047 = &l_2928;
                int *l_3048 = &g_46.f2;
                int *l_3049 = &g_344.f2;
                int *l_3050 = &g_46.f2;
                int *l_3051 = &g_520;
                int *l_3052 = (void*)0;
                int *l_3053 = &l_2985;
                int *l_3054 = &l_1983;
                int *l_3055 = &g_155;
                int *l_3056 = &g_70;
                int *l_3057 = (void*)0;
                int *l_3058 = &l_1957;
                int *l_3059 = (void*)0;
                int *l_3061 = (void*)0;
                int *l_3062 = &l_3026;
                int *l_3064 = &l_3032;
                int *l_3065 = &l_3030;
                int *l_3066 = &l_2917;
                int *l_3067 = &l_3063;
                int *l_3068 = &g_334;
                int *l_3069 = &l_3030;
                int *l_3070 = &l_3026;
                int *l_3071 = &l_2956;
                int *l_3072 = &l_3026;
                int *l_3073 = &g_70;
                int *l_3074 = &l_2017;
                int *l_3075 = &l_2917;
                int *l_3077 = &l_2985;
                int *l_3079 = (void*)0;
                int *l_3080 = (void*)0;
                g_3081--;
                return (*g_2276);
            }
        }
        if (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((&g_3060 != (void*)0), 7)) | (g_2896.f1.f3 & g_2019)), 0)), (((((((*l_8) ^= (safe_lshift_func_int16_t_s_s((**g_90), 0))) < 1L) | (*l_2828)) & 0xD8AD77D028BF099ALL) == 8UL) ^ 0UL))) < 18446744073709551613UL))
        {
            long long l_3118 = (-8L);
            int l_3119 = 0xCA78F957L;
            int l_3120 = 0xC7B06FACL;
            int l_3158 = 0x4E67E9D9L;
            int l_3189 = 0x99CE90E2L;
            int l_3198 = 0x5474799AL;
            struct S0 **l_3217 = (void*)0;
            unsigned short l_3220 = 1UL;
            int l_3297 = 0xA6327383L;
            unsigned l_3351 = 4294967287UL;
            int *l_3354 = &g_2642.f2;
            int *l_3355 = (void*)0;
            int *l_3356 = &l_3119;
            int *l_3357 = &g_1473;
            int *l_3358 = (void*)0;
            int *l_3359 = &g_2451;
            int *l_3360 = &l_2928;
            int *l_3361 = &g_70;
            int *l_3362 = &g_46.f2;
            int *l_3363 = &g_2446;
            int *l_3364 = &l_1957;
            int *l_3365 = &g_2451;
            int *l_3366 = &l_2985;
            int *l_3367 = &l_3158;
            int *l_3368 = (void*)0;
            int *l_3369 = &g_2642.f2;
            int *l_3370 = &l_1990;
            int *l_3371 = &l_3119;
            int *l_3372 = &l_3189;
            int *l_3373 = &l_3198;
            int *l_3374 = &l_2997;
            int *l_3375 = &l_3078;
            int *l_3376 = &l_2017;
            int *l_3377 = (void*)0;
            int *l_3378 = &l_3032;
            int *l_3379 = &g_3199;
            int *l_3380 = &l_2997;
            int *l_3381 = (void*)0;
            int *l_3382 = &g_344.f2;
            int *l_3383 = &g_2896.f2;
            int *l_3384 = &l_1983;
            int *l_3385 = (void*)0;
            int *l_3386 = (void*)0;
            int *l_3387 = &l_3189;
            int *l_3388 = &g_334;
            int *l_3389 = &l_2017;
            int *l_3390 = (void*)0;
            int *l_3391 = &l_2917;
            int *l_3392 = &l_3119;
            int *l_3393 = &g_155;
            int *l_3394 = &l_3119;
            int *l_3395 = &g_2318;
            int *l_3396 = &g_344.f2;
            int *l_3397 = &g_70;
            int *l_3398 = &l_2017;
            int *l_3399 = (void*)0;
            int *l_3400 = &g_2318;
            int *l_3401 = &l_2997;
            int *l_3402 = &l_2017;
            int *l_3403 = &g_3199;
            int *l_3404 = &g_520;
            int *l_3405 = &g_2446;
            int *l_3406 = &g_520;
            int *l_3407 = &g_334;
            int *l_3408 = &l_3120;
            int *l_3409 = &l_3198;
            int *l_3410 = &l_2917;
            int *l_3411 = &l_2997;
            int *l_3412 = &l_3198;
            int *l_3413 = (void*)0;
            int *l_3414 = &l_3189;
            int *l_3415 = &l_3198;
            int *l_3416 = (void*)0;
            int *l_3417 = &g_46.f2;
            int *l_3418 = &g_2446;
            int *l_3419 = &g_2896.f2;
            int *l_3420 = &l_1990;
            int *l_3421 = &l_3078;
            int *l_3422 = &l_2985;
            int *l_3423 = &l_3078;
            int *l_3424 = &g_2318;
            int *l_3425 = &l_1957;
            int *l_3426 = &l_2917;
            int *l_3427 = &l_3078;
            int *l_3428 = &g_3199;
            int *l_3429 = &g_2318;
            int *l_3430 = (void*)0;
            int *l_3431 = &l_3189;
            int *l_3432 = &g_2318;
            int *l_3434 = &l_3093.f2;
            int *l_3435 = &l_2928;
            int *l_3436 = &g_46.f2;
            int *l_3437 = (void*)0;
            int *l_3438 = &l_1957;
            int *l_3439 = &g_1473;
            int *l_3440 = &g_155;
            int *l_3441 = &g_344.f2;
            int *l_3442 = &l_1957;
            int *l_3443 = &g_334;
            int *l_3444 = &g_2896.f2;
            int *l_3445 = &l_3120;
            int *l_3446 = (void*)0;
            int *l_3447 = &l_2997;
            int *l_3448 = &l_3032;
            int *l_3449 = (void*)0;
            int *l_3450 = &l_3032;
            int *l_3451 = (void*)0;
            int *l_3452 = &g_46.f2;
            int *l_3453 = &g_46.f2;
            int *l_3454 = &g_1473;
            int *l_3455 = &g_520;
            int *l_3456 = &g_155;
            int *l_3457 = (void*)0;
            int *l_3459 = &g_520;
            int *l_3460 = &l_3032;
            int *l_3464 = (void*)0;
            int *l_3465 = &g_334;
            int *l_3466 = &g_2446;
            int *l_3467 = &l_2985;
            int *l_3468 = &g_70;
            int *l_3469 = &l_3158;
            int *l_3470 = &l_2997;
            int *l_3471 = (void*)0;
            int *l_3472 = &g_344.f2;
            int *l_3473 = &g_2318;
            int *l_3474 = &g_2446;
            int *l_3475 = (void*)0;
            int *l_3476 = &g_2451;
            int *l_3477 = &g_3199;
            int *l_3478 = (void*)0;
            int *l_3479 = &g_344.f2;
            int *l_3480 = &l_3119;
            int *l_3481 = &l_1990;
            int *l_3482 = (void*)0;
            int *l_3483 = &l_3158;
            int *l_3484 = &l_3078;
            int *l_3485 = &g_2446;
            int *l_3486 = (void*)0;
            int *l_3487 = (void*)0;
            int *l_3488 = &l_2985;
            int *l_3489 = &l_3158;
            int *l_3490 = &l_2017;
            int *l_3491 = (void*)0;
            if ((*l_2828))
            {
                struct S1 ***l_3095 = &l_3094;
                unsigned char *l_3112 = &g_344.f1.f3;
                int *l_3121 = (void*)0;
                int l_3122 = 5L;
                int *l_3123 = (void*)0;
                int *l_3124 = &l_3122;
                int *l_3125 = &l_2997;
                int *l_3126 = &g_1004;
                int *l_3127 = &g_46.f2;
                int *l_3128 = &g_155;
                int *l_3129 = &l_1957;
                int *l_3130 = &g_2896.f2;
                int *l_3131 = &l_2017;
                int *l_3132 = (void*)0;
                int *l_3133 = &l_2928;
                int *l_3134 = &g_2318;
                int *l_3135 = &l_2917;
                int *l_3136 = &l_2917;
                int *l_3137 = &g_1473;
                int *l_3138 = &l_2985;
                int *l_3139 = &l_1957;
                int *l_3140 = &g_334;
                int *l_3141 = &l_3122;
                int *l_3142 = &g_1473;
                int l_3143 = 0x7B18EA13L;
                int *l_3144 = &l_3032;
                int *l_3145 = (void*)0;
                int *l_3146 = &g_155;
                int *l_3148 = &g_344.f2;
                int *l_3149 = &l_2997;
                int *l_3150 = (void*)0;
                int *l_3151 = (void*)0;
                int *l_3152 = &l_3120;
                int *l_3153 = &l_3119;
                int *l_3154 = &l_2017;
                int *l_3155 = &l_3078;
                int l_3156 = 0x6912EB40L;
                int *l_3157 = &l_3032;
                int *l_3159 = &l_3078;
                int *l_3160 = &l_2017;
                int *l_3161 = &l_2997;
                int *l_3162 = &g_155;
                int *l_3163 = &l_3122;
                int *l_3164 = &g_334;
                int *l_3165 = &l_3122;
                int *l_3166 = &l_1983;
                int l_3167 = 4L;
                int *l_3168 = &l_2997;
                int *l_3169 = &g_2318;
                int *l_3170 = &l_3078;
                int *l_3171 = &l_3093.f2;
                int *l_3172 = &g_2446;
                int *l_3173 = &l_1990;
                int *l_3174 = &g_2896.f2;
                int *l_3175 = &l_2917;
                int *l_3176 = &l_3122;
                int *l_3177 = (void*)0;
                int *l_3178 = (void*)0;
                int *l_3179 = (void*)0;
                int *l_3180 = &l_3032;
                int *l_3181 = (void*)0;
                int *l_3182 = (void*)0;
                int *l_3183 = &g_155;
                int *l_3184 = (void*)0;
                int *l_3185 = &l_3032;
                int *l_3186 = (void*)0;
                int *l_3187 = &l_2985;
                int *l_3188 = &l_3122;
                int *l_3190 = &g_2318;
                int *l_3191 = &l_3119;
                int *l_3192 = &l_2917;
                int *l_3193 = &l_3158;
                int *l_3194 = &g_70;
                int *l_3195 = (void*)0;
                int *l_3196 = (void*)0;
                int *l_3197 = (void*)0;
                (*l_3095) = l_3094;
                l_3119 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((&g_1690 == &g_1690) && ((safe_rshift_func_uint8_t_u_u(((((*l_2828) || (safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((*g_1041), (safe_mod_func_int8_t_s_s((*g_2276), (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((0x6351FD052283DA80LL > (((*l_3112)++) || (&g_408 != &g_408))) > (safe_mul_func_uint16_t_u_u((*g_1691), 0xF7D6L))), l_3117)), g_2896.f1.f2)))))) | 0x09L) | g_2642.f1.f1), 6))) ^ g_2019) | (**g_1690)), 1)) || g_334)) > l_3118), (*g_2276))), 0xAF4CL));
                g_3200++;
            }
            else
            {
                unsigned *l_3207 = &g_6;
                unsigned short **l_3215 = &g_1691;
                int *l_3221 = (void*)0;
                int *l_3222 = &l_1983;
                int *l_3223 = &l_2997;
                int *l_3224 = &l_2928;
                int *l_3225 = &l_3032;
                int *l_3226 = (void*)0;
                int *l_3227 = (void*)0;
                int *l_3228 = &l_2017;
                int *l_3229 = &l_1957;
                int *l_3230 = &l_2985;
                int *l_3231 = (void*)0;
                int *l_3232 = &g_520;
                int *l_3233 = &g_520;
                int *l_3234 = &l_2917;
                int *l_3235 = &g_46.f2;
                int *l_3236 = &l_1990;
                int *l_3237 = &g_334;
                int *l_3238 = &g_344.f2;
                int *l_3239 = &l_3119;
                int *l_3240 = &l_3189;
                int *l_3241 = &g_344.f2;
                int *l_3242 = &g_155;
                int *l_3243 = &l_1957;
                int *l_3244 = &g_155;
                int *l_3245 = &l_2917;
                int *l_3246 = &l_1990;
                int *l_3247 = &l_2997;
                int *l_3248 = &g_344.f2;
                int *l_3249 = &l_3119;
                int *l_3250 = &l_3093.f2;
                int *l_3251 = (void*)0;
                int *l_3252 = &l_3189;
                int *l_3253 = &g_520;
                int *l_3254 = &g_155;
                int *l_3255 = &l_3198;
                int *l_3256 = &l_3078;
                int *l_3257 = &g_2896.f2;
                int *l_3258 = &g_2446;
                int *l_3259 = &l_2917;
                int *l_3260 = &g_2896.f2;
                int *l_3261 = &g_2642.f2;
                int *l_3262 = &g_2642.f2;
                int *l_3263 = &l_1990;
                int *l_3264 = (void*)0;
                int *l_3265 = &l_3158;
                int *l_3266 = (void*)0;
                int *l_3267 = &g_2896.f2;
                int *l_3268 = &l_2928;
                int *l_3269 = (void*)0;
                int *l_3270 = (void*)0;
                int *l_3271 = &l_3198;
                int *l_3272 = &l_3119;
                int *l_3273 = &g_46.f2;
                int *l_3274 = &l_3158;
                int *l_3275 = &g_46.f2;
                int *l_3276 = &g_344.f2;
                int *l_3277 = (void*)0;
                int *l_3278 = (void*)0;
                int *l_3279 = &g_2446;
                int *l_3280 = &g_344.f2;
                int *l_3281 = &g_1004;
                int l_3282 = 1L;
                int *l_3283 = &l_3282;
                int *l_3284 = &l_3120;
                int *l_3285 = &g_2896.f2;
                int *l_3286 = &l_3189;
                int *l_3287 = &l_3032;
                int *l_3288 = &l_1990;
                int *l_3289 = (void*)0;
                int *l_3290 = &g_70;
                int *l_3291 = (void*)0;
                int *l_3292 = &g_520;
                int *l_3293 = &l_3158;
                int *l_3294 = &l_2985;
                int *l_3295 = &l_3032;
                int *l_3296 = &g_1473;
                int *l_3298 = &l_2985;
                int *l_3299 = (void*)0;
                int *l_3300 = &l_2017;
                int *l_3301 = &l_2928;
                int *l_3302 = &g_46.f2;
                int *l_3303 = &l_3093.f2;
                int *l_3304 = &l_1957;
                int *l_3305 = &g_1004;
                int *l_3306 = (void*)0;
                int *l_3307 = &g_2446;
                int *l_3308 = &g_2896.f2;
                int *l_3309 = &l_3119;
                int *l_3310 = (void*)0;
                int *l_3311 = &l_2997;
                int *l_3312 = (void*)0;
                int *l_3313 = &l_1983;
                int *l_3314 = &g_2642.f2;
                int *l_3315 = &g_70;
                int *l_3316 = &l_3120;
                int *l_3317 = (void*)0;
                int *l_3318 = (void*)0;
                int *l_3319 = &g_344.f2;
                int *l_3320 = &g_2451;
                int *l_3321 = &l_3158;
                int *l_3322 = &l_2928;
                int *l_3323 = &l_3120;
                int *l_3324 = &g_46.f2;
                int *l_3325 = (void*)0;
                int *l_3326 = (void*)0;
                int *l_3327 = &g_155;
                int *l_3328 = &g_2318;
                int *l_3329 = &l_3189;
                int *l_3330 = &g_1004;
                short l_3331 = 0xDF2EL;
                int *l_3332 = &g_2642.f2;
                int *l_3333 = &g_2446;
                int *l_3334 = &g_155;
                int *l_3335 = &l_3198;
                int *l_3336 = (void*)0;
                int *l_3337 = &g_334;
                int *l_3338 = &l_2985;
                int *l_3339 = &l_3119;
                int *l_3340 = &g_46.f2;
                int *l_3341 = &g_520;
                int *l_3342 = &g_1004;
                int *l_3343 = &l_3158;
                int *l_3344 = &l_2917;
                int *l_3345 = &l_3282;
                int *l_3346 = &g_2446;
                int *l_3347 = &l_3120;
                int *l_3348 = &l_3032;
                int *l_3349 = &l_3119;
                int *l_3350 = &l_2928;
                (*l_2828) = (safe_add_func_int64_t_s_s((((safe_mul_func_int8_t_s_s((g_46.f2 != ((*l_3207) = ((**g_2640) >= 0x2AL))), l_2771)) < (safe_mod_func_int8_t_s_s((0UL ^ l_3210), (safe_add_func_int64_t_s_s((((l_3215 = &g_1691) == l_3216) != (l_3217 != g_3218)), l_3220))))) & (*l_2828)), 0x2C9D9381388BC7F5LL));
                l_2828 = &g_334;
                l_3351++;
            }
            g_3461--;
            --l_3492;
            for (g_2642.f0 = (-13); (g_2642.f0 > (-27)); --g_2642.f0)
            {
                unsigned short l_3507 = 0xAA45L;
                int l_3523 = 0L;
                char **l_3524 = &l_3511;
                (*l_3428) = (-1L);
                if ((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((0x765A8A34DD6A6C4ALL | func_39((*g_3219), ((*l_1956) = &g_2642), (*l_2828), (*g_90))), (safe_lshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(0xE3342D9DL, (!(safe_rshift_func_int16_t_s_s(((+l_3507) | 8UL), 11))))) >= (**g_2640)), 0)))) != g_179.f0), 6UL)))
                {
                    unsigned long long l_3508 = 0x35978CB3F99E4AC4LL;
                    (*l_3357) &= l_3508;
                    g_110 = &g_1473;
                }
                else
                {
                    int *l_3509 = (void*)0;
                    int l_3517 = 0x9EE4A46AL;
                    (*l_3489) &= (*g_110);
                    if ((*g_110))
                    {
                        int **l_3510 = &l_3455;
                        (*l_3510) = (l_3509 = &g_70);
                        (*l_3404) = ((*l_3372) ^= ((((*l_3424) > ((void*)0 != l_3511)) >= (-1L)) < (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((*l_2828), 3)), (**l_3510)))));
                        (*g_110) = 0xC9E81432L;
                    }
                    else
                    {
                        unsigned l_3516 = 4294967295UL;
                        if ((*g_110))
                            break;
                        if ((*g_110))
                            continue;
                        (*l_3445) &= (2UL && (((l_3516 || 0xEF184FDEDE4FBEEBLL) & g_2896.f4) > l_3507));
                    }
                    --l_3518;
                    for (g_2896.f1.f2 = 0; (g_2896.f1.f2 >= 40); ++g_2896.f1.f2)
                    {
                        char ***l_3525 = &l_3524;
                        if (l_3523)
                            break;
                        (*l_3525) = l_3524;
                    }
                }
            }
        }
        else
        {
            int **l_3526 = (void*)0;
            int **l_3527 = &g_110;
            long long *l_3530 = &l_2239;
            (*l_3527) = &g_70;
            (*l_2828) |= (g_3461 >= (safe_add_func_int16_t_s_s((g_397 <= ((*l_3530) ^= 0x9CF80701B65B74BDLL)), l_3531)));
            return (*g_2276);
        }
        l_3078 ^= ((*g_2276) ^ l_2985);
    }
    else
    {
        struct S1 *l_3532 = &g_46;
        struct S1 l_3533 = {0xCF25L,{1L,1L,0x9988A207L,0xAEL,9UL,0x5C79L,255UL},0L,0xE9A17ACEL,0x16FCL,0x9B8BL,-1L};
        int l_3568 = 0x5D249D6FL;
        int l_3570 = 0x6522BB32L;
        int l_3579 = (-1L);
        if (l_3533.f1.f0)
        {
            int l_3538 = 0L;
            int l_3546 = (-1L);
            int l_3556 = 1L;
            (*l_2828) |= 0x1C36073BL;
            for (g_2642.f3 = 19; (g_2642.f3 == 16); g_2642.f3--)
            {
                int *l_3539 = &g_520;
                int *l_3540 = &l_3093.f2;
                int *l_3541 = &g_3199;
                int *l_3542 = &g_155;
                int *l_3543 = &g_70;
                int *l_3544 = &l_3538;
                int *l_3545 = (void*)0;
                int *l_3547 = &l_2017;
                int *l_3548 = &g_70;
                int *l_3549 = &g_46.f2;
                int *l_3550 = &g_46.f2;
                int *l_3551 = &l_1957;
                int *l_3552 = &l_3538;
                int *l_3553 = &l_1983;
                int *l_3554 = &g_3199;
                int *l_3555 = &g_344.f2;
                int *l_3557 = &l_2017;
                int *l_3558 = (void*)0;
                int *l_3559 = &l_1983;
                int *l_3560 = &l_1990;
                int *l_3561 = &l_1983;
                int *l_3562 = &l_3546;
                int *l_3563 = &g_2642.f2;
                int *l_3564 = &l_3556;
                int *l_3565 = (void*)0;
                int *l_3566 = (void*)0;
                int *l_3567 = &g_2896.f2;
                int *l_3569 = &g_2642.f2;
                int *l_3571 = &g_520;
                int *l_3572 = (void*)0;
                int *l_3573 = &l_2017;
                int *l_3574 = &g_334;
                int *l_3575 = &g_2446;
                int *l_3576 = &g_520;
                int *l_3577 = (void*)0;
                int *l_3578 = (void*)0;
                int *l_3580 = &g_520;
                int *l_3581 = &l_3533.f2;
                int *l_3582 = &g_2446;
                int *l_3583 = &l_3579;
                int *l_3584 = &l_3538;
                int *l_3585 = &g_2446;
                int *l_3586 = &l_3538;
                int *l_3587 = &l_3538;
                int *l_3588 = &l_3570;
                int *l_3589 = &g_2318;
                int *l_3590 = &g_46.f2;
                int *l_3591 = &g_334;
                int *l_3592 = (void*)0;
                int *l_3593 = &g_2318;
                int *l_3594 = &g_70;
                int *l_3595 = &l_1990;
                int *l_3596 = &l_1957;
                int *l_3597 = &g_334;
                int *l_3598 = (void*)0;
                int *l_3599 = &l_1990;
                int *l_3600 = &g_520;
                int *l_3601 = &l_3093.f2;
                int *l_3602 = &l_3556;
                int *l_3603 = &g_3199;
                int *l_3604 = &l_3533.f2;
                int *l_3605 = (void*)0;
                int *l_3606 = &g_46.f2;
                int *l_3607 = &l_3570;
                int *l_3608 = &l_3546;
                int *l_3609 = (void*)0;
                int *l_3610 = &l_2017;
                int *l_3611 = &l_3093.f2;
                int *l_3612 = &l_3538;
                int *l_3613 = &g_1473;
                int *l_3614 = &l_3538;
                int *l_3615 = &g_2446;
                int *l_3616 = &l_3556;
                int *l_3617 = &l_1990;
                int *l_3618 = &g_70;
                int *l_3619 = &g_2896.f2;
                int *l_3620 = &l_3579;
                int *l_3621 = &g_1473;
                int *l_3622 = (void*)0;
                int **l_3626 = &l_3544;
                ++g_3623;
                (*l_3626) = &l_3568;
            }
            return (*g_2276);
        }
        else
        {
            return (*g_2276);
        }
    }
    return (*g_2276);
}







static struct S1 * func_2(char p_3, unsigned short p_4, int p_5)
{
    unsigned long long l_11 = 18446744073709551608UL;
    struct S1 *l_343 = &g_344;
    unsigned short l_1335 = 0x74CAL;
    short *l_1339 = &g_9;
    int l_1386 = 1L;
    int l_1389 = 0xFA6AB55CL;
    char *l_1458 = &g_179.f1;
    struct S0 l_1468 = {0x83A9L,0x9FL,0x121299A5L,253UL,0xB604E4BC160017C9LL,0x539EL,0x59L};
    short l_1471 = 0x8A4CL;
    int *l_1495 = &l_1389;
    unsigned l_1733 = 4294967286UL;
    long long *l_1950 = &g_872;
    long long *l_1951 = (void*)0;
    long long *l_1952 = &g_1176;
    struct S0 *l_1955 = &l_1468;
    if (p_4)
    {
        short *l_32 = &g_9;
        struct S0 l_44 = {-4L,3L,0x60DD4F95L,0x01L,18446744073709551615UL,-7L,255UL};
        struct S1 *l_45 = &g_46;
        unsigned *l_705 = &g_6;
        struct S1 l_706 = {0x69E3L,{0x7C14L,-3L,6UL,246UL,0xEED547744F20A68ELL,0x7861L,255UL},-7L,0xBE7B3DF3L,1L,0L,-8L};
        unsigned long long *l_1323 = &g_1215;
        int *l_1324 = &g_1004;
        (*l_1324) ^= (((*l_1323) = (((l_11 | ((safe_sub_func_uint16_t_u_u(func_14(g_9, p_5, (l_343 = func_18((((*l_705) &= (safe_lshift_func_uint8_t_u_u(func_26(&g_9, l_32, func_33(g_7, func_37(func_39(l_44, l_45, g_10, l_32)), l_11), l_343, g_46.f1), 6))) ^ 9L), &g_554, g_179.f6, p_4, l_706))), l_44.f6)) || g_902)) <= 3UL) < l_44.f4)) | l_11);
    }
    else
    {
        short *l_1325 = &g_554;
        int l_1328 = 1L;
        int l_1333 = 0xA363FC3CL;
        struct S1 **l_1334 = &g_7;
        struct S0 l_1336 = {0xA8EFL,0xE6L,0x0BD621EAL,0x66L,0xD4127D366B5B8596LL,0xECBBL,0x87L};
        int *l_1337 = (void*)0;
        int *l_1338 = &g_46.f3;
        int l_1426 = 4L;
        int l_1479 = 2L;
        short l_1693 = 0x762DL;
        long long *l_1699 = (void*)0;
        int *l_1888 = &g_1004;
        struct S1 l_1890 = {0L,{0xCDDDL,0x50L,0xB2111EE9L,0xF9L,0x65BEFF137E8DE211LL,1L,0x25L},0x3D4A99BFL,0xF44FB7C7L,0xD7E9L,0xD89DL,0xEFL};
        unsigned l_1933 = 0x5335C634L;
        (**g_408) = (l_1335 != l_1328);
        if (((func_39(l_1336, l_343, ((*l_1338) = g_554), l_1339) == 0xE1L) < g_340))
        {
            unsigned l_1347 = 0x99480C23L;
            int l_1355 = 0xE5AC5E91L;
            int l_1374 = 0x998F98C5L;
            int l_1437 = 0xF672174EL;
            struct S1 *l_1469 = &g_46;
            unsigned short **l_1692 = (void*)0;
            (*g_408) = func_93(l_343, p_4, p_4, &l_1325);
            for (p_3 = 0; (p_3 <= (-2)); p_3 = safe_sub_func_int32_t_s_s(p_3, 9))
            {
                (*g_408) = &l_1328;
            }
            for (g_179.f6 = 22; (g_179.f6 > 1); g_179.f6 = safe_sub_func_uint16_t_u_u(g_179.f6, 5))
            {
                struct S1 *l_1346 = (void*)0;
                int l_1359 = 0x284885DEL;
                int l_1397 = 0x5901B594L;
                struct S0 l_1454 = {-10L,0xC5L,0xDF3EF61EL,248UL,18446744073709551610UL,-1L,253UL};
                unsigned *l_1489 = &g_6;
                int *l_1492 = (void*)0;
                int *l_1493 = &l_1397;
                int *l_1494 = (void*)0;
                for (g_9 = 0; (g_9 != 2); ++g_9)
                {
                    return l_1346;
                }
                if ((l_1347 = (g_110 != g_110)))
                {
                    int *l_1348 = &g_520;
                    int *l_1349 = &g_1004;
                    int *l_1350 = &l_1333;
                    int *l_1351 = &l_1328;
                    int *l_1352 = &g_344.f2;
                    int *l_1353 = (void*)0;
                    int *l_1354 = &g_46.f2;
                    int *l_1356 = &g_344.f2;
                    int *l_1357 = (void*)0;
                    int *l_1358 = &g_520;
                    int *l_1360 = &g_334;
                    int *l_1361 = (void*)0;
                    int *l_1362 = &l_1333;
                    int *l_1363 = &l_1359;
                    int *l_1364 = &g_520;
                    int *l_1365 = &g_70;
                    int *l_1366 = &g_70;
                    long long l_1367 = 0xD16138374F5E64B7LL;
                    int *l_1368 = &l_1359;
                    int *l_1369 = &g_70;
                    int *l_1370 = &g_70;
                    int *l_1371 = (void*)0;
                    int *l_1372 = &l_1328;
                    int *l_1373 = &l_1359;
                    int *l_1375 = &g_155;
                    int *l_1376 = (void*)0;
                    int *l_1377 = &g_334;
                    int *l_1378 = &g_520;
                    int *l_1379 = &l_1374;
                    int *l_1380 = (void*)0;
                    int *l_1381 = &l_1355;
                    int *l_1382 = &g_70;
                    int *l_1383 = &g_155;
                    int *l_1384 = &g_70;
                    int *l_1385 = &g_520;
                    int *l_1387 = &g_46.f2;
                    int *l_1388 = (void*)0;
                    int *l_1390 = &g_46.f2;
                    int *l_1391 = (void*)0;
                    int *l_1392 = (void*)0;
                    int *l_1393 = &l_1374;
                    int *l_1394 = (void*)0;
                    int *l_1395 = &l_1328;
                    int *l_1396 = &l_1374;
                    int *l_1398 = &l_1359;
                    int *l_1399 = &l_1355;
                    int *l_1400 = &l_1328;
                    int *l_1401 = &g_334;
                    int *l_1402 = &l_1389;
                    int *l_1403 = &l_1374;
                    int *l_1404 = &l_1333;
                    int *l_1405 = &l_1328;
                    int *l_1406 = &l_1374;
                    int *l_1407 = (void*)0;
                    int *l_1408 = &l_1355;
                    int *l_1409 = &g_70;
                    int *l_1410 = &g_1004;
                    int *l_1411 = &l_1355;
                    int *l_1412 = &l_1328;
                    int *l_1413 = &l_1389;
                    int *l_1414 = &l_1333;
                    int *l_1415 = &g_155;
                    int *l_1416 = (void*)0;
                    int *l_1417 = &l_1359;
                    int *l_1418 = &l_1328;
                    int *l_1419 = (void*)0;
                    int *l_1420 = &g_520;
                    int *l_1421 = &l_1389;
                    int *l_1422 = &g_334;
                    int *l_1423 = (void*)0;
                    int *l_1424 = &l_1386;
                    int *l_1425 = &g_334;
                    int *l_1427 = &l_1374;
                    int *l_1428 = (void*)0;
                    int *l_1429 = (void*)0;
                    int *l_1430 = &l_1359;
                    int *l_1431 = &l_1374;
                    int *l_1432 = &l_1374;
                    int *l_1433 = &g_155;
                    int *l_1434 = &l_1389;
                    int *l_1435 = &l_1355;
                    int *l_1436 = &l_1359;
                    int *l_1438 = (void*)0;
                    int *l_1439 = &l_1426;
                    int *l_1440 = (void*)0;
                    int *l_1441 = &l_1389;
                    int *l_1442 = &l_1437;
                    int *l_1443 = &g_155;
                    int *l_1444 = &l_1426;
                    int *l_1445 = (void*)0;
                    int *l_1446 = &l_1437;
                    int *l_1447 = &g_155;
                    int *l_1448 = &g_520;
                    int *l_1449 = &l_1359;
                    int *l_1450 = &l_1333;
                    g_1451++;
                    g_46.f1 = l_1454;
                    if (p_5)
                    {
                        unsigned short *l_1457 = &g_656;
                        char **l_1459 = &l_1458;
                        l_1397 |= (((safe_rshift_func_uint16_t_u_u(g_179.f1, ((*l_1457) = 0xDDC1L))) == (((*l_1459) = l_1458) != (void*)0)) != (safe_sub_func_int16_t_s_s(0x9A43L, ((safe_mod_func_int32_t_s_s(p_4, func_33(l_1346, func_37((safe_sub_func_uint8_t_u_u(((*g_1041)--), (func_39((l_1468 = l_1336), l_1469, g_344.f1.f5, l_1325) <= l_1335)))), p_4))) >= (*g_91)))));
                    }
                    else
                    {
                        long long l_1470 = 0x99B3EC163AFB673ELL;
                        int l_1472 = 0x421EA41BL;
                        --g_1474;
                    }
                }
                else
                {
                    int *l_1480 = &l_1386;
                    (*l_1480) = ((safe_rshift_func_int8_t_s_s(((*l_1458) = (l_1437 < ((*l_1325) &= ((0x77CFL & g_344.f5) & l_1426)))), 5)) == l_1336.f5);
                }
                if ((((0x925CEF7522CFFC7ALL && 18446744073709551615UL) != (g_70 ^= ((*l_1493) = p_3))) || l_1468.f5))
                {
                    unsigned l_1512 = 0x5DF67443L;
                    int l_1556 = (-1L);
                    int l_1575 = 0xBF2EDE07L;
                    l_1495 = (*g_408);
                    for (g_155 = 6; (g_155 != 6); g_155 = safe_add_func_int64_t_s_s(g_155, 5))
                    {
                        int *l_1498 = &l_1359;
                        int *l_1499 = &l_1426;
                        int *l_1500 = (void*)0;
                        int *l_1501 = (void*)0;
                        int *l_1502 = &g_520;
                        int *l_1503 = &l_1333;
                        int *l_1504 = &g_334;
                        int *l_1505 = &g_334;
                        int *l_1506 = (void*)0;
                        int *l_1507 = &g_334;
                        int *l_1508 = &g_334;
                        int *l_1509 = &l_1426;
                        int *l_1510 = &l_1437;
                        int *l_1511 = &l_1333;
                        int *l_1515 = &g_46.f2;
                        int *l_1516 = &g_46.f2;
                        int *l_1517 = &l_1397;
                        int *l_1518 = &g_334;
                        int *l_1519 = &l_1437;
                        int *l_1520 = &l_1426;
                        int *l_1521 = &l_1386;
                        int *l_1522 = &l_1333;
                        int *l_1523 = &l_1359;
                        int *l_1524 = &l_1374;
                        int *l_1525 = &l_1359;
                        int *l_1526 = &g_70;
                        int *l_1527 = &l_1355;
                        int *l_1528 = &l_1389;
                        int *l_1529 = &l_1359;
                        int *l_1530 = &g_1473;
                        int l_1531 = 6L;
                        int *l_1532 = &l_1333;
                        int *l_1533 = &l_1374;
                        int *l_1534 = &g_46.f2;
                        int *l_1535 = &g_334;
                        int *l_1536 = &g_520;
                        int *l_1537 = (void*)0;
                        int *l_1538 = &g_334;
                        int *l_1539 = &l_1426;
                        int *l_1540 = &g_70;
                        int *l_1541 = &l_1397;
                        int *l_1542 = (void*)0;
                        int *l_1543 = &l_1355;
                        int *l_1544 = &l_1389;
                        int *l_1545 = &g_334;
                        int *l_1546 = &g_46.f2;
                        int *l_1547 = &l_1397;
                        int *l_1548 = &g_334;
                        int *l_1549 = &l_1397;
                        int *l_1550 = &g_46.f2;
                        int *l_1551 = (void*)0;
                        int *l_1552 = (void*)0;
                        int *l_1553 = &l_1359;
                        int *l_1554 = (void*)0;
                        int *l_1555 = &g_520;
                        int *l_1557 = &g_344.f2;
                        int *l_1558 = (void*)0;
                        int *l_1559 = &g_520;
                        int *l_1560 = &l_1531;
                        int *l_1561 = &l_1479;
                        int *l_1562 = &l_1386;
                        int *l_1563 = &l_1333;
                        int *l_1564 = &l_1437;
                        int *l_1565 = &g_1473;
                        int *l_1566 = &g_1473;
                        int *l_1567 = (void*)0;
                        int *l_1568 = &l_1397;
                        int *l_1569 = &l_1437;
                        int *l_1570 = &g_70;
                        int *l_1571 = &g_344.f2;
                        int *l_1572 = &l_1437;
                        int *l_1573 = (void*)0;
                        int *l_1574 = &l_1426;
                        int *l_1576 = &g_1004;
                        int *l_1577 = &g_344.f2;
                        int *l_1578 = &g_70;
                        int *l_1579 = &g_520;
                        int l_1580 = 2L;
                        int *l_1581 = &l_1531;
                        int l_1582 = 0xABBDA34FL;
                        int l_1583 = (-9L);
                        int *l_1584 = &l_1582;
                        int *l_1585 = &l_1575;
                        int *l_1586 = &g_1004;
                        int *l_1587 = &l_1426;
                        int *l_1588 = &l_1374;
                        int *l_1589 = &l_1359;
                        int *l_1590 = &g_70;
                        l_1512--;
                        --g_1591;
                        return l_343;
                    }
                }
                else
                {
                    int *l_1596 = (void*)0;
                    int *l_1597 = &g_70;
                    int *l_1598 = &l_1374;
                    int *l_1599 = &g_155;
                    int *l_1600 = &g_344.f2;
                    int *l_1601 = &l_1386;
                    int *l_1602 = &l_1386;
                    int *l_1603 = &g_520;
                    int *l_1604 = (void*)0;
                    int *l_1605 = &l_1333;
                    int *l_1606 = &g_334;
                    int *l_1607 = &g_155;
                    int *l_1608 = (void*)0;
                    int *l_1609 = (void*)0;
                    int *l_1610 = &l_1397;
                    int *l_1611 = &g_155;
                    int *l_1612 = &g_344.f2;
                    int *l_1613 = (void*)0;
                    int *l_1614 = (void*)0;
                    int *l_1615 = (void*)0;
                    int *l_1616 = &l_1359;
                    int *l_1617 = (void*)0;
                    int *l_1618 = &l_1374;
                    int *l_1619 = &g_344.f2;
                    int *l_1620 = &l_1374;
                    int *l_1621 = &l_1374;
                    int l_1622 = 0x85FC51E8L;
                    int *l_1623 = (void*)0;
                    int *l_1624 = (void*)0;
                    int *l_1625 = (void*)0;
                    int *l_1626 = &l_1333;
                    int *l_1627 = &g_1473;
                    int *l_1628 = &l_1359;
                    int *l_1629 = &g_334;
                    int *l_1630 = &l_1355;
                    int *l_1631 = &l_1333;
                    int *l_1632 = &l_1479;
                    int *l_1633 = &g_46.f2;
                    int *l_1634 = &l_1397;
                    int *l_1635 = &l_1359;
                    int *l_1636 = (void*)0;
                    int *l_1637 = &l_1622;
                    int *l_1638 = &l_1389;
                    int *l_1639 = &l_1359;
                    int *l_1640 = &l_1355;
                    int *l_1641 = &l_1426;
                    int *l_1642 = &g_1473;
                    int *l_1643 = &l_1426;
                    int *l_1644 = &l_1437;
                    int *l_1645 = &g_155;
                    int *l_1646 = &l_1397;
                    int *l_1647 = &l_1359;
                    int *l_1648 = &g_344.f2;
                    int *l_1649 = &g_520;
                    int *l_1650 = &g_344.f2;
                    int *l_1651 = &g_70;
                    int *l_1652 = &l_1359;
                    int *l_1653 = &l_1386;
                    int *l_1654 = (void*)0;
                    int *l_1655 = &g_1004;
                    int *l_1656 = &l_1359;
                    int *l_1657 = &g_1473;
                    int *l_1658 = (void*)0;
                    int *l_1659 = &g_1004;
                    int *l_1660 = (void*)0;
                    int *l_1661 = &g_46.f2;
                    int *l_1662 = &l_1622;
                    int *l_1663 = &l_1355;
                    int *l_1664 = (void*)0;
                    int *l_1665 = (void*)0;
                    int *l_1666 = &g_344.f2;
                    int l_1667 = 0xBAEAA883L;
                    int *l_1668 = &g_1004;
                    int *l_1669 = &g_344.f2;
                    int *l_1670 = &g_1004;
                    int *l_1671 = &l_1622;
                    int *l_1672 = (void*)0;
                    int *l_1673 = &g_70;
                    int *l_1674 = (void*)0;
                    int *l_1675 = &g_334;
                    int *l_1676 = &l_1389;
                    int *l_1677 = &l_1622;
                    int *l_1678 = &l_1437;
                    int *l_1679 = &l_1437;
                    int *l_1680 = &l_1479;
                    int *l_1681 = &g_46.f2;
                    unsigned short l_1686 = 0xDB28L;
                    struct S1 *l_1689 = &g_46;
                    for (g_87 = 0; (g_87 == 5); g_87 = safe_add_func_int64_t_s_s(g_87, 4))
                    {
                        (*l_1493) = 0x941DC390L;
                    }
                    if (p_5)
                        continue;
                    --g_1682;
                    if (p_5)
                    {
                        short l_1685 = 0x33E3L;
                        --l_1686;
                        (*g_408) = &l_1359;
                        (*g_408) = (void*)0;
                        if ((*l_1493))
                            break;
                    }
                    else
                    {
                        return l_1689;
                    }
                }
            }
            l_1693 = (g_1690 != l_1692);
        }
        else
        {
            short ***l_1696 = &g_90;
            long long *l_1701 = &g_872;
            int l_1709 = 0x3E8678F2L;
            int l_1714 = 0x3C8AF979L;
            struct S1 *l_1736 = (void*)0;
            for (g_162 = (-25); (g_162 > 16); g_162 = safe_add_func_uint8_t_u_u(g_162, 4))
            {
                long long **l_1700 = (void*)0;
                short **l_1702 = &l_1339;
                int *l_1703 = (void*)0;
                int *l_1704 = (void*)0;
                int *l_1705 = &g_520;
                int *l_1706 = &g_334;
                int *l_1707 = &l_1479;
                int *l_1708 = &g_344.f2;
                int *l_1710 = &g_344.f2;
                int *l_1711 = &g_520;
                int *l_1712 = &l_1333;
                int *l_1713 = (void*)0;
                int *l_1715 = (void*)0;
                int *l_1716 = &l_1714;
                int *l_1717 = &g_155;
                int *l_1718 = &l_1328;
                int *l_1719 = &l_1333;
                int *l_1720 = (void*)0;
                int *l_1721 = &l_1328;
                int *l_1722 = &l_1389;
                int *l_1723 = &g_344.f2;
                int *l_1724 = &l_1426;
                int *l_1725 = (void*)0;
                int l_1726 = 0x8D253205L;
                int *l_1727 = &g_520;
                int *l_1728 = &g_1004;
                int *l_1729 = &g_155;
                int *l_1730 = &g_520;
                int *l_1731 = (void*)0;
                int *l_1732 = (void*)0;
                (*g_408) = &p_5;
                (*g_408) = func_93(&g_344, p_3, p_4, func_98(l_1696, &g_91, &g_91, ((safe_mod_func_uint32_t_u_u((g_344.f1.f5 ^ (((l_1701 = l_1699) != &g_872) < g_510)), p_5)) == 0x52BE66744EEA7CFCLL), l_1702));
                --l_1733;
            }
            (*l_1334) = l_1736;
            for (l_1336.f4 = 16; (l_1336.f4 >= 34); l_1336.f4 = safe_add_func_int32_t_s_s(l_1336.f4, 3))
            {
                int *l_1739 = &g_1004;
                int *l_1740 = &g_155;
                int *l_1741 = &l_1714;
                int *l_1742 = &g_46.f2;
                int *l_1743 = &l_1389;
                int *l_1744 = &l_1328;
                int *l_1745 = &g_1473;
                int *l_1746 = &l_1426;
                int *l_1747 = &g_1004;
                int *l_1748 = &g_344.f2;
                int *l_1749 = &g_334;
                int *l_1750 = (void*)0;
                int *l_1751 = &l_1386;
                int *l_1752 = &g_46.f2;
                int *l_1753 = &l_1714;
                int *l_1754 = &g_46.f2;
                int *l_1755 = (void*)0;
                int *l_1756 = &l_1426;
                int *l_1757 = &g_46.f2;
                int *l_1758 = &g_520;
                int *l_1759 = &l_1333;
                int *l_1760 = &l_1386;
                int *l_1761 = &l_1714;
                int *l_1762 = &l_1714;
                int *l_1763 = &l_1389;
                int *l_1764 = (void*)0;
                int *l_1765 = &g_70;
                int *l_1766 = &g_1004;
                int *l_1767 = &l_1479;
                int *l_1768 = (void*)0;
                int *l_1769 = &g_70;
                int *l_1770 = &g_155;
                int *l_1771 = &g_334;
                int *l_1772 = &g_344.f2;
                int *l_1773 = &g_1473;
                int *l_1774 = &g_520;
                int *l_1775 = &l_1714;
                int *l_1776 = &l_1426;
                int *l_1777 = (void*)0;
                int *l_1778 = (void*)0;
                int *l_1779 = &g_155;
                int *l_1780 = &g_155;
                int *l_1781 = &l_1426;
                int *l_1782 = (void*)0;
                int *l_1783 = &g_155;
                int *l_1784 = &g_155;
                int *l_1785 = &g_344.f2;
                int *l_1786 = &l_1333;
                int *l_1787 = (void*)0;
                int *l_1788 = &l_1426;
                int *l_1789 = &l_1479;
                int *l_1790 = (void*)0;
                int *l_1791 = &l_1479;
                int *l_1792 = &l_1709;
                int *l_1793 = &g_344.f2;
                int *l_1794 = &g_46.f2;
                int *l_1795 = &g_344.f2;
                int *l_1796 = &l_1333;
                int *l_1797 = &g_155;
                int *l_1798 = (void*)0;
                int *l_1799 = &l_1709;
                int *l_1800 = &g_344.f2;
                int *l_1801 = &l_1386;
                int *l_1802 = &l_1328;
                int *l_1803 = &l_1333;
                int *l_1804 = &g_520;
                int *l_1805 = &g_70;
                int *l_1806 = (void*)0;
                int *l_1807 = &g_155;
                int *l_1808 = &l_1386;
                int *l_1809 = (void*)0;
                int *l_1810 = &l_1479;
                int *l_1811 = &g_46.f2;
                int *l_1812 = &g_1473;
                int *l_1813 = &g_334;
                int *l_1814 = &g_520;
                int *l_1815 = &l_1328;
                int *l_1816 = (void*)0;
                int *l_1817 = &l_1709;
                int *l_1818 = &l_1389;
                int *l_1819 = (void*)0;
                int *l_1820 = &g_46.f2;
                int *l_1821 = &l_1389;
                int *l_1822 = (void*)0;
                int *l_1823 = &l_1386;
                int *l_1824 = &g_334;
                int *l_1825 = &g_46.f2;
                int *l_1826 = &g_1473;
                int *l_1827 = &l_1386;
                int *l_1828 = &l_1709;
                int *l_1829 = (void*)0;
                int *l_1830 = &g_70;
                int *l_1831 = &g_70;
                int *l_1832 = (void*)0;
                int *l_1833 = &g_70;
                int *l_1834 = &g_344.f2;
                int *l_1835 = &g_1473;
                int *l_1836 = &g_334;
                int *l_1837 = &l_1479;
                int *l_1838 = &l_1328;
                int *l_1839 = &g_46.f2;
                int *l_1840 = &g_334;
                int *l_1841 = &l_1386;
                int *l_1842 = (void*)0;
                int *l_1843 = (void*)0;
                int *l_1844 = &l_1389;
                int *l_1845 = &g_1473;
                int *l_1846 = &g_1473;
                int *l_1847 = &g_1004;
                int *l_1848 = &l_1333;
                int *l_1849 = &l_1479;
                int *l_1850 = &g_70;
                int *l_1851 = &l_1389;
                int *l_1852 = &g_334;
                int *l_1853 = &g_70;
                int *l_1854 = (void*)0;
                int *l_1855 = &g_1004;
                int *l_1856 = &l_1479;
                (*g_408) = l_1739;
                g_1857++;
            }
        }
        for (g_179.f4 = 13; (g_179.f4 > 30); g_179.f4 = safe_add_func_uint32_t_u_u(g_179.f4, 4))
        {
            char *l_1875 = &g_344.f6;
            unsigned long long l_1879 = 0x2D77E4A10AB075EALL;
            struct S0 l_1895 = {0x2DB4L,0x6AL,4UL,249UL,0xA918D280BA599B63LL,0x98CEL,0xC9L};
            int l_1916 = 0L;
            for (g_554 = 0; (g_554 > 10); g_554++)
            {
                struct S1 *l_1864 = (void*)0;
                long long *l_1867 = &g_510;
                struct S1 *l_1874 = &g_344;
                short *l_1876 = &g_554;
                int l_1877 = 0x876E36BDL;
                if (p_5)
                    break;
                (*l_1334) = l_1864;
                if (((safe_rshift_func_int8_t_s_s(p_4, 6)) > ((void*)0 == l_1867)))
                {
                    unsigned short l_1878 = 0x0BFDL;
                    p_5 = ((((*l_1867) = (-8L)) < ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(p_4, ((safe_mul_func_int8_t_s_s(g_344.f1.f2, (+p_3))) || p_4))), 1)) >= (*g_1041))) ^ (~(func_39(g_46.f1, l_1874, (((void*)0 != l_1875) >= p_5), l_1876) <= g_155)));
                    if (p_4)
                    {
                        (**g_408) |= (((l_1877 > ((l_1878 |= l_1426) >= l_1879)) >= (safe_mod_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(l_1877, (safe_mul_func_uint8_t_u_u((*g_1041), g_46.f4)))), g_1215)) && (!g_155)), p_5))) & p_3);
                    }
                    else
                    {
                        int **l_1889 = &l_1495;
                        (*l_1889) = ((*g_408) = l_1888);
                        (*l_343) = (*g_1018);
                        l_1888 = &p_5;
                    }
                    (*l_1874) = l_1890;
                }
                else
                {
                    if (p_4)
                        break;
                }
                for (l_1389 = 28; (l_1389 >= (-2)); l_1389 = safe_sub_func_uint16_t_u_u(l_1389, 3))
                {
                    struct S0 l_1896 = {-8L,0x87L,0x1FF6D6A4L,0xEDL,7UL,0xBF85L,0xD2L};
                    for (g_1857 = 0; (g_1857 != 56); g_1857 = safe_add_func_uint64_t_u_u(g_1857, 8))
                    {
                        l_1896 = l_1895;
                    }
                }
            }
            for (g_1682 = 0; (g_1682 == 58); g_1682++)
            {
                int *l_1899 = &g_155;
                int *l_1900 = (void*)0;
                int *l_1901 = &l_1386;
                int *l_1902 = &l_1386;
                int *l_1903 = (void*)0;
                int *l_1904 = (void*)0;
                int *l_1905 = &g_155;
                int *l_1906 = &l_1333;
                int *l_1907 = &l_1890.f2;
                int *l_1908 = &l_1333;
                int *l_1909 = &l_1386;
                int *l_1910 = &l_1389;
                int *l_1911 = &g_344.f2;
                int *l_1912 = &g_334;
                int *l_1913 = &g_155;
                int *l_1914 = &l_1479;
                int *l_1915 = &g_1473;
                int *l_1917 = &l_1890.f2;
                int *l_1918 = &g_46.f2;
                int l_1919 = 2L;
                int *l_1920 = &g_344.f2;
                int *l_1921 = &l_1333;
                int *l_1922 = &g_46.f2;
                int *l_1923 = &l_1333;
                int *l_1924 = &g_520;
                int *l_1925 = &g_70;
                int *l_1926 = &g_344.f2;
                int *l_1927 = (void*)0;
                int *l_1928 = &g_1004;
                int l_1929 = (-1L);
                int *l_1930 = (void*)0;
                int *l_1931 = &l_1929;
                int *l_1932 = &l_1919;
                --l_1933;
            }
            l_1916 |= l_1895.f0;
        }
        return (*l_1334);
    }
    if (p_3)
    {
        int **l_1953 = &g_110;
        struct S0 *l_1954 = &l_1468;
        (*l_1953) = &l_1389;
        (*l_1954) = l_1468;
    }
    else
    {
        return &g_344;
    }
    (*g_110) = (!(g_510 != (((void*)0 != &p_5) < 3UL)));
    return l_343;
}







static unsigned short func_14(short p_15, unsigned short p_16, struct S1 * p_17)
{
    struct S0 *l_1019 = &g_179;
    char *l_1029 = &g_179.f1;
    int l_1034 = 1L;
    int l_1085 = 0xADE54534L;
    int l_1109 = 6L;
    int l_1115 = 0x4F49B432L;
    int l_1119 = 0x9F202F20L;
    int l_1156 = (-1L);
    int l_1163 = (-3L);
    int l_1194 = 0xFBFA1495L;
    short **l_1307 = &g_91;
    unsigned char l_1308 = 252UL;
    unsigned l_1322 = 0x6D220284L;
    (*l_1019) = g_344.f1;
    (*l_1019) = (*l_1019);
    for (g_397 = 18; (g_397 < 25); g_397 = safe_add_func_int32_t_s_s(g_397, 6))
    {
        int *l_1024 = &g_70;
        unsigned char *l_1025 = &g_344.f1.f3;
        struct S1 l_1046 = {0xD42AL,{0xC30EL,0x33L,0x3E660904L,0x0FL,0x6E6E472A75A34E50LL,0xE548L,9UL},1L,0xEF1E3081L,0xE3D5L,0xAE26L,0x51L};
        unsigned char **l_1065 = &g_1041;
        struct S1 **l_1076 = (void*)0;
        int l_1140 = (-9L);
        int l_1149 = 1L;
        int l_1186 = (-10L);
        struct S1 *l_1312 = &g_46;
        unsigned l_1313 = 0x558D9E69L;
        struct S0 **l_1320 = &l_1019;
        if ((((safe_mul_func_int8_t_s_s((l_1024 == (void*)0), g_344.f4)) >= ((*l_1024) < g_46.f0)) > (g_344.f0 && (p_16 <= ((*l_1025) = p_15)))))
        {
            char l_1028 = 0x44L;
            char *l_1030 = &g_179.f1;
            (*g_110) &= (safe_add_func_int8_t_s_s(((l_1028 = (*l_1024)) || 18446744073709551612UL), (l_1029 != l_1030)));
        }
        else
        {
            long long l_1045 = 0x36672551F95334A1LL;
            int l_1078 = 0L;
            int l_1150 = 1L;
            int l_1190 = 0xA3D20ED1L;
            int l_1207 = (-2L);
            for (g_179.f4 = 0; (g_179.f4 <= 4); g_179.f4++)
            {
                struct S1 *l_1033 = (void*)0;
                long long *l_1039 = (void*)0;
                unsigned long long *l_1040 = &g_46.f1.f4;
                unsigned char *l_1042 = &g_46.f1.f6;
                unsigned char **l_1043 = (void*)0;
                unsigned char **l_1044 = &l_1025;
                int **l_1047 = &g_110;
            }
            (*g_110) ^= ((l_1045 == p_15) >= (*l_1024));
            if ((*g_110))
                break;
            for (g_344.f1.f5 = 0; (g_344.f1.f5 != (-7)); g_344.f1.f5 = safe_sub_func_int32_t_s_s(g_344.f1.f5, 5))
            {
                char *l_1062 = &g_46.f1.f1;
                unsigned char **l_1064 = &l_1025;
                unsigned char ***l_1063 = &l_1064;
                int l_1066 = 0xF4302C69L;
                short l_1075 = 7L;
                int l_1100 = (-1L);
                int l_1107 = 0xAD028E7BL;
                unsigned short *l_1228 = &g_656;
            }
        }
        for (g_6 = 14; (g_6 < 16); g_6 = safe_add_func_int16_t_s_s(g_6, 9))
        {
            short **l_1231 = (void*)0;
            int **l_1232 = (void*)0;
            int **l_1233 = &g_110;
            int l_1253 = 1L;
            int l_1284 = 0xA13A3FFBL;
            unsigned short l_1294 = 1UL;
            unsigned *l_1298 = &g_6;
            struct S0 ***l_1321 = &l_1320;
            (*l_1233) = func_93(p_17, p_15, p_15, l_1231);
            if ((*l_1024))
            {
                int *l_1234 = &l_1109;
                int *l_1235 = (void*)0;
                int *l_1236 = &l_1085;
                int *l_1237 = &l_1115;
                int *l_1238 = &l_1034;
                int l_1239 = 0L;
                int *l_1240 = (void*)0;
                int *l_1241 = &l_1156;
                int *l_1242 = (void*)0;
                int *l_1243 = &l_1239;
                int *l_1244 = &g_344.f2;
                int *l_1245 = (void*)0;
                int *l_1246 = &g_46.f2;
                int l_1247 = 8L;
                int *l_1248 = &l_1046.f2;
                int *l_1249 = &l_1149;
                int *l_1250 = (void*)0;
                int *l_1251 = &l_1163;
                int *l_1252 = &l_1149;
                int *l_1254 = &l_1109;
                int *l_1255 = &g_70;
                int *l_1256 = &g_334;
                int *l_1257 = &l_1034;
                int l_1258 = 0x3C761901L;
                int *l_1259 = &l_1149;
                int *l_1260 = (void*)0;
                int *l_1261 = &l_1149;
                int *l_1262 = (void*)0;
                int *l_1263 = (void*)0;
                int *l_1264 = &l_1140;
                int l_1265 = 0x11ABC02BL;
                int *l_1266 = &l_1163;
                int *l_1267 = &l_1247;
                int *l_1268 = &l_1109;
                int *l_1269 = (void*)0;
                int *l_1270 = &g_344.f2;
                int *l_1271 = (void*)0;
                int *l_1272 = &l_1115;
                int *l_1273 = &l_1186;
                int l_1274 = 4L;
                int *l_1275 = &l_1109;
                int *l_1276 = (void*)0;
                int *l_1277 = &l_1239;
                int *l_1278 = &l_1046.f2;
                int *l_1279 = (void*)0;
                int *l_1280 = &l_1253;
                int *l_1281 = &l_1253;
                int *l_1282 = (void*)0;
                int *l_1283 = (void*)0;
                int *l_1285 = &l_1247;
                int *l_1286 = (void*)0;
                int *l_1287 = &l_1239;
                int *l_1288 = &g_155;
                int *l_1289 = &l_1265;
                int *l_1290 = &l_1034;
                int *l_1291 = &l_1119;
                int *l_1292 = &l_1247;
                int *l_1293 = &l_1274;
                struct S1 **l_1297 = &g_1018;
                short *l_1305 = &l_1046.f0;
                long long *l_1306 = &g_510;
                ++l_1294;
                (*l_1233) = func_93(((*l_1297) = p_17), (&g_6 != l_1298), ((**g_90) >= (((*l_1306) = (p_16 != (((safe_lshift_func_int16_t_s_s((g_554 <= (safe_add_func_int32_t_s_s(0x92154861L, (safe_sub_func_int16_t_s_s((*l_1293), (((*l_1305) &= 0x26FEL) && (**g_90))))))), (**g_90))) <= p_15) > p_15))) | (-10L))), l_1307);
                l_1308++;
            }
            else
            {
                int *l_1311 = &l_1284;
                long long *l_1315 = &g_510;
                long long **l_1314 = &l_1315;
                long long *l_1317 = (void*)0;
                long long **l_1316 = &l_1317;
                long long *l_1319 = &g_1176;
                long long **l_1318 = &l_1319;
                (*l_1233) = l_1311;
                (*l_1233) = func_93((l_1312 = p_17), (l_1313 != ((((*l_1318) = ((*l_1316) = ((*l_1314) = &g_1176))) != (void*)0) > (g_872 >= (func_39(g_46.f1, p_17, g_527, (*g_90)) == (*g_1041))))), l_1194, l_1231);
                (*l_1311) = p_15;
            }
            (*l_1321) = l_1320;
        }
        return l_1085;
    }
    return l_1322;
}







static struct S1 * func_18(unsigned long long p_19, short * p_20, long long p_21, unsigned p_22, struct S1 p_23)
{
    int *l_707 = (void*)0;
    int *l_708 = &g_334;
    int **l_714 = (void*)0;
    short **l_716 = &g_91;
    int *l_718 = &g_155;
    struct S1 *l_730 = (void*)0;
    int l_767 = (-8L);
    int l_776 = 0x2B05E8C8L;
    int l_783 = 1L;
    int l_787 = 0x456F0451L;
    int l_835 = 0x2720089DL;
    int *l_908 = &l_767;
    int *l_909 = (void*)0;
    long long l_910 = 0xEB0D0D0FC8EBF6A7LL;
    int *l_911 = &l_776;
    int *l_912 = &g_334;
    int *l_913 = &g_155;
    int *l_914 = &g_520;
    int *l_915 = &l_783;
    int *l_916 = &l_787;
    int *l_917 = (void*)0;
    int *l_918 = (void*)0;
    int *l_919 = (void*)0;
    int *l_920 = &l_783;
    int *l_921 = (void*)0;
    int *l_922 = &g_334;
    int *l_923 = (void*)0;
    int *l_924 = &g_344.f2;
    int *l_925 = (void*)0;
    int *l_926 = &l_787;
    int *l_927 = &l_776;
    int *l_928 = (void*)0;
    int *l_929 = &g_155;
    int l_930 = 0x2E711793L;
    int *l_931 = &g_344.f2;
    int *l_932 = &l_787;
    int *l_933 = &g_520;
    int *l_934 = &g_46.f2;
    int *l_935 = &l_930;
    int *l_936 = &g_46.f2;
    int *l_937 = &l_787;
    int *l_938 = &l_787;
    int *l_939 = &l_767;
    int l_940 = 0xF7D3F6F4L;
    int *l_941 = &l_940;
    int *l_942 = &g_344.f2;
    int l_943 = (-10L);
    int *l_944 = &g_334;
    int l_945 = 0x404C8FE2L;
    int *l_946 = &l_930;
    int *l_947 = &l_945;
    int *l_948 = &l_940;
    int *l_949 = &l_945;
    int *l_950 = (void*)0;
    int *l_951 = &l_835;
    int *l_952 = &l_783;
    int *l_953 = &l_943;
    int *l_954 = &g_70;
    int *l_955 = &l_835;
    int *l_956 = &l_945;
    int *l_957 = &g_46.f2;
    int *l_958 = (void*)0;
    int *l_959 = (void*)0;
    int *l_960 = &g_70;
    int *l_961 = &g_70;
    int *l_962 = &l_940;
    int *l_963 = &l_930;
    int *l_964 = &g_334;
    int *l_965 = &g_520;
    int *l_966 = &g_46.f2;
    int *l_967 = &l_943;
    int *l_968 = &g_334;
    int l_969 = 0x62C29BBFL;
    int *l_970 = &l_943;
    int *l_971 = &l_767;
    int l_972 = 0xBDE5A5D5L;
    int *l_973 = &l_945;
    int *l_974 = &l_930;
    int *l_975 = (void*)0;
    int *l_976 = &g_46.f2;
    int *l_977 = &l_776;
    int *l_978 = &g_155;
    int *l_979 = &l_767;
    int l_980 = 0x9208D608L;
    int *l_981 = &l_969;
    int *l_982 = (void*)0;
    int *l_983 = &l_943;
    int l_984 = 1L;
    int *l_985 = &l_835;
    int l_986 = 0x8C1710C6L;
    int *l_987 = (void*)0;
    int *l_988 = (void*)0;
    int *l_989 = &g_334;
    int *l_990 = &l_776;
    int *l_991 = &l_835;
    int *l_992 = &l_943;
    int *l_993 = &g_46.f2;
    int *l_994 = &l_783;
    int l_995 = 0x2D9298D3L;
    int *l_996 = &g_155;
    int l_997 = 1L;
    int *l_998 = &l_776;
    int *l_999 = (void*)0;
    int *l_1000 = &g_46.f2;
    int l_1001 = (-6L);
    int *l_1002 = &l_835;
    int *l_1003 = &l_986;
    int *l_1005 = &g_46.f2;
    int *l_1006 = &l_835;
    int *l_1007 = (void*)0;
    int *l_1008 = (void*)0;
    int *l_1009 = &l_787;
    int l_1010 = (-6L);
    int l_1011 = 0x7E10C4E1L;
    int l_1012 = 0x041951C1L;
    int l_1013 = 0x55DEABE2L;
    int *l_1014 = &l_943;
    (*l_708) &= (*g_110);
    for (g_344.f1.f5 = 0; (g_344.f1.f5 < 13); g_344.f1.f5 = safe_add_func_int16_t_s_s(g_344.f1.f5, 8))
    {
        int **l_713 = (void*)0;
        int ***l_715 = &l_714;
        int **l_717 = &l_707;
        int l_754 = 0L;
        int l_773 = (-1L);
        int l_799 = 0xB1115B09L;
        int l_802 = 6L;
        int l_865 = 1L;
        int l_875 = 0x0C52FB11L;
        int l_896 = 0L;
        if ((safe_mul_func_int16_t_s_s(((**g_90) = (l_713 != ((*l_715) = l_714))), (l_708 != (l_718 = ((*l_717) = func_93(&g_344, g_6, g_334, func_98(&g_90, &g_91, l_716, (*p_20), l_716))))))))
        {
            if (p_23.f1.f0)
                break;
        }
        else
        {
            unsigned l_719 = 0x872203C8L;
            int *l_722 = &g_334;
            int l_742 = 0xAEB1A127L;
            int l_762 = 0L;
            int l_808 = 0L;
            int l_855 = (-2L);
            int l_889 = 0xE4F0E574L;
            --l_719;
            (*l_717) = l_722;
            if ((*l_722))
                continue;
            for (p_23.f3 = 5; (p_23.f3 != (-3)); p_23.f3 = safe_sub_func_int16_t_s_s(p_23.f3, 8))
            {
                int l_731 = 0x381F511CL;
                int *l_732 = &g_155;
                int *l_733 = &g_334;
                int *l_734 = &g_520;
                int *l_735 = &g_344.f2;
                int *l_736 = &g_334;
                int *l_737 = (void*)0;
                int *l_738 = &g_344.f2;
                int *l_739 = &g_344.f2;
                int *l_740 = (void*)0;
                int *l_741 = &g_344.f2;
                int *l_743 = &g_344.f2;
                int *l_744 = &l_742;
                int *l_745 = &l_742;
                int *l_746 = &l_742;
                int *l_747 = &l_742;
                int *l_748 = (void*)0;
                int *l_749 = &l_742;
                int *l_750 = &l_742;
                int *l_751 = &g_70;
                int *l_752 = &l_742;
                int *l_753 = &g_70;
                int *l_755 = &l_742;
                int *l_756 = &g_520;
                int *l_757 = &l_754;
                int *l_758 = (void*)0;
                int *l_759 = &g_155;
                int *l_760 = &l_754;
                int *l_761 = &g_70;
                int *l_763 = &g_334;
                int *l_764 = &g_70;
                int *l_765 = &g_344.f2;
                int *l_766 = &g_344.f2;
                int *l_768 = &l_754;
                int *l_769 = &g_334;
                int *l_770 = (void*)0;
                int *l_771 = &l_754;
                int *l_772 = &l_754;
                int *l_774 = &g_334;
                int *l_775 = &l_773;
                int *l_777 = &l_773;
                int *l_778 = &l_742;
                int *l_779 = &l_767;
                int *l_780 = &g_334;
                int *l_781 = &g_46.f2;
                int *l_782 = &l_773;
                int *l_784 = &g_520;
                int *l_785 = (void*)0;
                int *l_786 = &l_742;
                int *l_788 = &g_334;
                int *l_789 = &l_773;
                int *l_790 = &l_754;
                int *l_791 = &g_70;
                int l_792 = 0xB314C03FL;
                int *l_793 = &g_334;
                int *l_794 = &l_767;
                int *l_795 = &l_742;
                int *l_796 = &l_754;
                int *l_797 = &g_334;
                int l_798 = 0x2B9A7EFDL;
                int *l_800 = &l_754;
                int *l_801 = (void*)0;
                int *l_803 = &l_783;
                int *l_804 = &l_762;
                int *l_805 = &g_70;
                int *l_806 = &l_792;
                int *l_807 = &l_783;
                int *l_809 = &l_776;
                int *l_810 = (void*)0;
                int *l_811 = &l_776;
                int *l_812 = &l_798;
                int *l_813 = (void*)0;
                int *l_814 = &l_773;
                int *l_815 = &l_762;
                int *l_816 = &g_334;
                int *l_817 = &l_808;
                int *l_818 = &l_787;
                int l_819 = 0x28AB4972L;
                int *l_820 = &l_819;
                int *l_821 = &l_776;
                int *l_822 = (void*)0;
                int l_823 = 0xE0792618L;
                int *l_824 = (void*)0;
                int *l_825 = &l_783;
                int *l_826 = &g_70;
                int *l_827 = &l_792;
                int *l_828 = &g_155;
                int *l_829 = &g_70;
                int *l_830 = &l_823;
                int *l_831 = &g_520;
                int *l_832 = &g_46.f2;
                int *l_833 = &l_773;
                int *l_834 = &l_754;
                int *l_836 = &l_776;
                int *l_837 = &l_742;
                int *l_838 = &l_823;
                int *l_839 = &g_70;
                int *l_840 = (void*)0;
                int *l_841 = &l_799;
                int l_842 = 1L;
                int *l_843 = &g_334;
                int *l_844 = (void*)0;
                int *l_845 = &l_792;
                int l_846 = 0x979698A8L;
                int *l_847 = (void*)0;
                int *l_848 = &l_754;
                int *l_849 = &l_767;
                int *l_850 = &g_155;
                int *l_851 = &l_846;
                int *l_852 = &l_842;
                int *l_853 = &l_819;
                int *l_854 = &l_787;
                int l_856 = 0x00B03BCFL;
                int *l_857 = &l_823;
                int *l_858 = &l_835;
                int *l_859 = &l_856;
                int *l_860 = (void*)0;
                int *l_861 = (void*)0;
                int *l_862 = &l_754;
                int *l_863 = (void*)0;
                int *l_864 = &l_802;
                int *l_866 = (void*)0;
                int *l_867 = (void*)0;
                int *l_868 = (void*)0;
                int *l_869 = &l_823;
                int *l_870 = (void*)0;
                int *l_871 = &l_762;
                int *l_873 = &l_754;
                int *l_874 = &l_776;
                int *l_876 = (void*)0;
                int *l_877 = &l_835;
                int *l_878 = &l_783;
                int *l_879 = &l_767;
                int *l_880 = (void*)0;
                int *l_881 = (void*)0;
                int *l_882 = &l_819;
                int *l_883 = &l_846;
                int *l_884 = (void*)0;
                int *l_885 = &l_754;
                int *l_886 = &l_787;
                int *l_887 = &l_846;
                int *l_888 = (void*)0;
                int *l_890 = &l_823;
                int *l_891 = &l_783;
                int *l_892 = &l_865;
                int *l_893 = &l_762;
                int *l_894 = &l_767;
                int *l_895 = &l_846;
                int *l_897 = &g_520;
                int *l_898 = (void*)0;
                int *l_899 = &l_798;
                int *l_900 = &g_155;
                int *l_901 = &l_856;
                int *l_903 = (void*)0;
                int *l_904 = &g_344.f2;
                for (l_719 = 11; (l_719 >= 12); l_719++)
                {
                    long long *l_727 = &g_510;
                    p_23.f2 &= (((*l_727) &= p_21) <= (safe_mod_func_uint64_t_u_u((!g_46.f1.f3), (*l_722))));
                    return l_730;
                }
                ++g_905;
                l_887 = (*l_717);
            }
        }
    }
    --g_1015;
    return g_1018;
}







static unsigned char func_26(short * p_27, short * p_28, char p_29, struct S1 * p_30, struct S0 p_31)
{
    int *l_348 = &g_334;
    int *l_349 = &g_70;
    int l_350 = 0x5B8F50E1L;
    int *l_351 = &g_70;
    int l_352 = 0xFF0CECDEL;
    int *l_353 = &g_46.f2;
    int *l_354 = (void*)0;
    int *l_355 = &g_46.f2;
    int *l_356 = (void*)0;
    int *l_357 = &g_334;
    int *l_358 = &l_350;
    int *l_359 = &g_155;
    int *l_360 = &g_155;
    int *l_361 = &g_70;
    int l_362 = (-1L);
    int *l_363 = &g_344.f2;
    int *l_364 = (void*)0;
    int *l_365 = &g_70;
    int *l_366 = (void*)0;
    int *l_367 = &l_350;
    int *l_368 = &g_155;
    int *l_369 = &l_362;
    int *l_370 = &l_350;
    int l_371 = 0x85FEB4F4L;
    int *l_372 = &l_350;
    int l_373 = 0L;
    int *l_374 = &g_46.f2;
    int *l_375 = (void*)0;
    int *l_376 = (void*)0;
    int *l_377 = &g_344.f2;
    int *l_378 = (void*)0;
    int *l_379 = &g_70;
    int l_380 = 0xC4CAF09FL;
    int *l_381 = (void*)0;
    int l_382 = 0xE923F389L;
    int *l_383 = (void*)0;
    int *l_384 = &g_46.f2;
    int *l_385 = &l_382;
    int *l_386 = (void*)0;
    int *l_387 = &l_371;
    int *l_388 = (void*)0;
    int *l_389 = (void*)0;
    int *l_390 = (void*)0;
    int *l_391 = &l_371;
    int *l_392 = &g_46.f2;
    int l_393 = 1L;
    int *l_394 = (void*)0;
    int *l_395 = &l_352;
    int *l_396 = (void*)0;
    struct S1 **l_402 = &g_7;
    short *l_403 = &g_344.f0;
    unsigned long long *l_404 = &g_162;
    char *l_405 = (void*)0;
    char *l_406 = &g_175;
    for (g_344.f4 = (-10); (g_344.f4 >= (-16)); g_344.f4 = safe_sub_func_int8_t_s_s(g_344.f4, 2))
    {
        int *l_347 = &g_155;
        (*l_347) ^= (*g_110);
    }
    g_397--;
    if ((safe_add_func_int8_t_s_s(((*l_406) = (((l_402 = &g_7) != (void*)0) & (g_70 & ((*l_404) |= (l_403 != (p_28 = l_403)))))), (-3L))))
    {
        int **l_407 = &l_370;
        int **l_410 = &l_394;
        int ***l_409 = &l_410;
        int l_456 = 0x1D413EEDL;
        int l_468 = 0xFE7AE4C3L;
        int l_525 = 0x12C5AFB0L;
        int l_566 = 0x87C15747L;
        unsigned char l_672 = 0UL;
        short **l_674 = &g_91;
        struct S0 l_677 = {0x69CCL,0xF6L,0x3E7C4E6FL,0UL,0xFE3BF29AA3ED2BC8LL,0x7CFBL,0xAAL};
        struct S1 *l_679 = &g_344;
        if (((*l_391) = ((g_408 = l_407) == ((*l_409) = (void*)0))))
        {
            struct S1 l_429 = {0x235BL,{1L,-1L,0x6DD12310L,255UL,0x8AB7BDC03675BC93LL,0L,0UL},0x5DE6A0B4L,1L,0x1779L,1L,0x4FL};
            (*g_110) = (**g_408);
            (*l_353) ^= (safe_lshift_func_int8_t_s_u((**l_407), 4));
            for (g_46.f1.f0 = 20; (g_46.f1.f0 == 3); g_46.f1.f0 = safe_sub_func_uint64_t_u_u(g_46.f1.f0, 4))
            {
                unsigned long long **l_432 = (void*)0;
                unsigned long long **l_433 = &l_404;
                short *l_434 = &l_429.f4;
                (**g_408) &= (safe_rshift_func_uint8_t_u_s(func_39(g_179, (*l_402), ((safe_rshift_func_uint8_t_u_s(0xDCL, 0)) | ((safe_lshift_func_int8_t_s_s(p_31.f5, 1)) == ((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((((safe_mul_func_int8_t_s_s(g_162, (safe_sub_func_int16_t_s_s(func_33(p_30, l_429, (safe_rshift_func_int16_t_s_u((((*l_433) = &g_162) == &g_10), 5))), 0x91A9L)))) != g_344.f1.f4) != 0x838B68C0CF1EBDD3LL) > p_31.f1) | p_31.f1), p_31.f6)), (*g_91))) > l_429.f5))), l_434), 4));
            }
            (*l_357) = p_29;
        }
        else
        {
            long long l_437 = (-1L);
            int l_443 = 0x3ABC618CL;
            int l_472 = 0x47B23B86L;
            int l_491 = 0xBD50C7D6L;
            int l_550 = 0xA49C0721L;
            int l_562 = 0x7FA7DDDAL;
            for (g_10 = 0; (g_10 != 7); ++g_10)
            {
                unsigned long long l_441 = 0x966703702CCE13A8LL;
                int l_444 = 0x5AADE92AL;
                int l_445 = (-1L);
                if (((*g_110) ^= (0x1EB4032FL ^ l_437)))
                {
                    unsigned l_438 = 0x0D01CEF0L;
                    l_438++;
                }
                else
                {
                    int l_442 = 0xDA57ACD3L;
                    int l_477 = 0x8480B581L;
                    int l_480 = (-1L);
                    int l_499 = (-1L);
                    int l_529 = 0L;
                    if (((*l_358) = l_441))
                    {
                        int *l_446 = &l_350;
                        int *l_447 = &g_344.f2;
                        int *l_448 = (void*)0;
                        int *l_449 = &l_362;
                        int *l_450 = &l_445;
                        int *l_451 = &l_371;
                        int *l_452 = &l_362;
                        int *l_453 = &l_380;
                        int *l_454 = &g_155;
                        int *l_455 = &l_444;
                        int *l_457 = &l_373;
                        int *l_458 = (void*)0;
                        int *l_459 = &l_352;
                        int *l_460 = &l_352;
                        int *l_461 = &g_70;
                        int *l_462 = &l_350;
                        int *l_463 = &g_334;
                        int *l_464 = (void*)0;
                        int *l_465 = &l_393;
                        int *l_466 = &l_350;
                        int l_467 = (-1L);
                        int *l_469 = &l_362;
                        int *l_470 = &l_443;
                        int *l_471 = &l_456;
                        int *l_473 = &g_344.f2;
                        int *l_474 = &l_468;
                        int *l_475 = &l_350;
                        int *l_476 = &l_393;
                        int *l_478 = &l_444;
                        int *l_479 = (void*)0;
                        int *l_481 = &g_334;
                        int *l_482 = &l_444;
                        int *l_483 = (void*)0;
                        int *l_484 = (void*)0;
                        int *l_485 = &l_373;
                        int *l_486 = &l_382;
                        int *l_487 = &l_477;
                        int *l_488 = &g_344.f2;
                        int *l_489 = &l_467;
                        int *l_490 = &l_444;
                        int *l_492 = &l_362;
                        int *l_493 = (void*)0;
                        int *l_494 = (void*)0;
                        int *l_495 = (void*)0;
                        int *l_496 = &l_445;
                        int *l_497 = &l_467;
                        int *l_498 = &l_491;
                        int *l_500 = &l_382;
                        int *l_501 = &l_362;
                        int *l_502 = (void*)0;
                        int *l_503 = (void*)0;
                        int *l_504 = (void*)0;
                        int *l_505 = &l_445;
                        int *l_506 = &g_46.f2;
                        int *l_507 = &l_352;
                        int *l_508 = &l_491;
                        int *l_509 = &l_477;
                        int *l_511 = &g_155;
                        int *l_512 = &g_334;
                        int *l_513 = &l_373;
                        int *l_514 = &l_468;
                        int *l_515 = &l_352;
                        int *l_516 = &g_46.f2;
                        int *l_517 = &g_344.f2;
                        int *l_518 = (void*)0;
                        int *l_519 = &l_443;
                        int *l_521 = &l_382;
                        int *l_522 = &l_491;
                        int l_523 = 0L;
                        int *l_524 = &l_468;
                        int *l_526 = &l_491;
                        int *l_528 = (void*)0;
                        int *l_530 = &l_393;
                        int l_531 = 9L;
                        int *l_532 = (void*)0;
                        int *l_533 = (void*)0;
                        int *l_534 = &g_46.f2;
                        int *l_535 = &l_472;
                        int *l_536 = &l_443;
                        int *l_537 = (void*)0;
                        int *l_538 = &l_442;
                        int l_539 = 0L;
                        int *l_540 = &g_46.f2;
                        int *l_541 = &l_373;
                        int *l_542 = &l_531;
                        int *l_543 = &l_525;
                        int *l_544 = &l_472;
                        int *l_545 = &l_539;
                        int *l_546 = &l_480;
                        int *l_547 = &l_477;
                        int *l_548 = &l_477;
                        int *l_549 = &l_467;
                        int *l_551 = (void*)0;
                        int *l_552 = &g_46.f2;
                        int *l_553 = &l_445;
                        int *l_555 = &l_467;
                        int *l_556 = &l_539;
                        int *l_557 = &l_531;
                        int *l_558 = (void*)0;
                        int *l_559 = &l_499;
                        int *l_560 = &g_155;
                        int *l_561 = (void*)0;
                        int *l_563 = &l_468;
                        int *l_564 = &l_445;
                        int *l_565 = &l_525;
                        int *l_567 = &l_491;
                        g_568++;
                        (*l_351) = (safe_rshift_func_int8_t_s_u(g_340, (safe_lshift_func_int16_t_s_u((*g_91), 6))));
                    }
                    else
                    {
                        unsigned l_575 = 0xA343AA78L;
                        (*l_369) ^= p_31.f4;
                        if (l_575)
                            continue;
                        (*l_407) = (*g_408);
                    }
                }
            }
        }
        if ((**g_408))
        {
            unsigned char l_578 = 0x98L;
            int l_583 = (-7L);
            int l_584 = (-3L);
            int *l_585 = &l_350;
            int *l_586 = &g_155;
            int *l_587 = &l_350;
            int *l_588 = (void*)0;
            int *l_589 = &l_456;
            int *l_590 = &l_393;
            int *l_591 = &l_352;
            int *l_592 = (void*)0;
            int *l_593 = &l_350;
            int *l_594 = &g_46.f2;
            int *l_595 = &l_584;
            int *l_596 = &l_382;
            int *l_597 = (void*)0;
            int *l_598 = (void*)0;
            int *l_599 = (void*)0;
            int *l_600 = &l_525;
            int *l_601 = &g_155;
            int *l_602 = &g_155;
            int *l_603 = &l_352;
            int *l_604 = &l_393;
            int *l_605 = &l_583;
            int *l_606 = &l_583;
            int *l_607 = &l_525;
            int *l_608 = (void*)0;
            int *l_609 = (void*)0;
            int *l_610 = &l_456;
            int *l_611 = &g_155;
            int *l_612 = &l_371;
            int *l_613 = &l_468;
            int l_614 = 0x81153ED2L;
            int *l_615 = &l_525;
            int *l_616 = &l_566;
            int *l_617 = &g_344.f2;
            int *l_618 = &g_155;
            int *l_619 = &l_566;
            int *l_620 = (void*)0;
            int *l_621 = &l_362;
            int *l_622 = &l_566;
            int *l_623 = &l_525;
            int *l_624 = &l_456;
            int *l_625 = &l_373;
            int *l_626 = &g_46.f2;
            int *l_627 = &g_334;
            int *l_628 = &g_520;
            int *l_629 = &g_334;
            int *l_630 = &l_371;
            int *l_631 = &l_614;
            int *l_632 = &l_566;
            int *l_633 = &l_371;
            int *l_634 = &l_584;
            int *l_635 = (void*)0;
            int *l_636 = (void*)0;
            int *l_637 = &l_373;
            int *l_638 = &l_584;
            int *l_639 = &g_520;
            int *l_640 = (void*)0;
            int *l_641 = (void*)0;
            int *l_642 = &l_583;
            int *l_643 = &g_520;
            int *l_644 = (void*)0;
            int *l_645 = &l_583;
            int *l_646 = &l_468;
            int *l_647 = &l_584;
            int *l_648 = &g_520;
            int *l_649 = &g_334;
            int *l_650 = &g_344.f2;
            int *l_651 = &l_614;
            int *l_652 = (void*)0;
            int *l_653 = &l_456;
            int *l_654 = (void*)0;
            int *l_655 = &l_525;
            (*l_348) ^= (safe_mul_func_int8_t_s_s(l_578, (safe_sub_func_int8_t_s_s(p_31.f2, (safe_mul_func_int8_t_s_s(p_31.f0, (((g_179.f3 & (6L | p_31.f5)) >= p_31.f1) <= (**l_407))))))));
            --g_656;
        }
        else
        {
            for (g_397 = 0; (g_397 == 53); ++g_397)
            {
                char l_663 = (-1L);
                (*g_110) = 0x35D5C15EL;
                for (l_362 = 0; (l_362 <= 22); l_362 = safe_add_func_int64_t_s_s(l_362, 9))
                {
                    if (l_663)
                        break;
                }
                if (p_29)
                    break;
            }
        }
        for (p_31.f6 = 0; (p_31.f6 >= 15); p_31.f6++)
        {
            unsigned l_673 = 0xF72279E6L;
            struct S1 l_680 = {-1L,{-1L,0xCBL,0x4F8BCEA9L,1UL,0xEDF42FC2866AC8FDLL,0xA81BL,0xF2L},0L,0x2290BD67L,0xB7DAL,1L,0x48L};
            short **l_687 = &l_403;
            struct S0 *l_702 = &g_344.f1;
            struct S0 **l_701 = &l_702;
        }
        (*l_368) = ((*l_409) != (g_408 = &l_354));
    }
    else
    {
        (*g_408) = (*g_408);
    }
    (*l_384) = ((*l_387) |= ((*l_349) = (safe_mul_func_uint8_t_u_u(func_33((*l_402), (*p_30), (*p_27)), (p_31.f3 | 1L)))));
    return g_261;
}







static char func_33(struct S1 * p_34, struct S1 p_35, short p_36)
{
    char l_202 = 0xBFL;
    int l_243 = 0L;
    struct S1 l_279 = {0xA315L,{0x90E7L,-3L,0UL,0xF4L,0UL,-1L,0x18L},9L,1L,0xD42BL,0xDF69L,0x2EL};
    unsigned short **l_294 = (void*)0;
    unsigned short ***l_295 = (void*)0;
    unsigned short ***l_296 = &l_294;
    int *l_297 = &l_243;
    int *l_298 = &g_155;
    int *l_299 = (void*)0;
    int *l_300 = &g_155;
    int *l_301 = &g_70;
    int *l_302 = &g_155;
    int *l_303 = &l_243;
    int *l_304 = &g_46.f2;
    int *l_305 = &l_279.f2;
    int *l_306 = &l_243;
    int *l_307 = &l_279.f2;
    int *l_308 = &g_46.f2;
    int *l_309 = &l_243;
    int *l_310 = &g_70;
    int *l_311 = (void*)0;
    int *l_312 = (void*)0;
    int *l_313 = &g_46.f2;
    int *l_314 = &g_155;
    int *l_315 = &g_155;
    int *l_316 = (void*)0;
    int *l_317 = (void*)0;
    int *l_318 = &l_243;
    int *l_319 = &l_243;
    int *l_320 = &g_70;
    int *l_321 = &g_46.f2;
    int *l_322 = &g_70;
    int *l_323 = &g_46.f2;
    int *l_324 = (void*)0;
    int *l_325 = &g_70;
    int *l_326 = &g_70;
    int *l_327 = &g_70;
    int *l_328 = &l_279.f2;
    int *l_329 = &l_243;
    int *l_330 = &l_243;
    int *l_331 = &g_155;
    int *l_332 = &l_243;
    int *l_333 = &g_46.f2;
    int *l_335 = &l_279.f2;
    int *l_336 = &g_46.f2;
    int *l_337 = &g_155;
    int *l_338 = (void*)0;
    int l_339 = 5L;
    p_35.f2 ^= ((*g_110) = (*g_110));
    for (g_46.f5 = 15; (g_46.f5 == 23); g_46.f5 = safe_add_func_uint32_t_u_u(g_46.f5, 5))
    {
        struct S0 l_178 = {0xC3E9L,0x71L,2UL,1UL,4UL,1L,0x6DL};
        int l_189 = 0x63A23B04L;
        int l_190 = 0x4C238B7CL;
        int l_227 = 0xEA5BE4CFL;
        unsigned long long l_267 = 0x1F8A6136E16DA6D5LL;
        short *l_277 = &g_179.f5;
        int *l_278 = &g_155;
        struct S1 l_280 = {-1L,{5L,0x9BL,0x1375F163L,8UL,0xE4CE34C1BD7C0A1DLL,0x6D75L,0x8BL},0xDF9FEE00L,-9L,-4L,6L,1L};
        unsigned *l_288 = (void*)0;
        unsigned *l_289 = &g_6;
        int **l_290 = (void*)0;
        int **l_291 = (void*)0;
        int **l_292 = &l_278;
        int **l_293 = &g_110;
    }
    (*l_296) = l_294;
    ++g_340;
    return p_35.f1.f6;
}







static struct S1 func_37(unsigned p_38)
{
    int *l_116 = &g_70;
    int *l_117 = &g_46.f2;
    int *l_118 = &g_46.f2;
    int *l_119 = &g_70;
    int *l_120 = &g_70;
    int *l_121 = &g_46.f2;
    int *l_122 = &g_70;
    int *l_123 = &g_70;
    int *l_124 = &g_70;
    int *l_125 = &g_70;
    int *l_126 = &g_46.f2;
    int *l_127 = (void*)0;
    int *l_128 = &g_46.f2;
    int *l_129 = &g_70;
    int l_130 = 0x8A0849DAL;
    int *l_131 = &g_46.f2;
    int l_132 = (-8L);
    int *l_133 = &l_132;
    int *l_134 = &g_70;
    int *l_135 = (void*)0;
    int *l_136 = &g_46.f2;
    int *l_137 = &l_132;
    int *l_138 = &l_132;
    int *l_139 = &g_46.f2;
    int *l_140 = (void*)0;
    int l_141 = 0x415B45A7L;
    int *l_142 = &g_46.f2;
    int l_143 = (-1L);
    int *l_144 = &l_141;
    int *l_145 = &l_141;
    int *l_146 = &l_143;
    int *l_147 = &l_141;
    int *l_148 = &l_130;
    int *l_149 = &l_132;
    int *l_150 = (void*)0;
    int *l_151 = &l_143;
    int *l_152 = &g_46.f2;
    int *l_153 = (void*)0;
    int *l_154 = &g_70;
    int *l_156 = &l_130;
    int *l_157 = &l_141;
    int *l_158 = &g_46.f2;
    int *l_159 = &l_130;
    int *l_160 = &l_132;
    int *l_161 = &g_70;
    g_162--;
    return g_46;
}







static unsigned func_39(struct S0 p_40, struct S1 * p_41, int p_42, short * p_43)
{
    int *l_47 = &g_46.f2;
    int *l_48 = &g_46.f2;
    int *l_49 = &g_46.f2;
    int *l_50 = &g_46.f2;
    int *l_51 = &g_46.f2;
    int *l_52 = &g_46.f2;
    int *l_53 = &g_46.f2;
    int l_54 = 0xB3EA3FEEL;
    int *l_55 = &l_54;
    int *l_56 = &l_54;
    int *l_57 = &l_54;
    int *l_58 = &g_46.f2;
    int *l_59 = &g_46.f2;
    int *l_60 = &g_46.f2;
    int l_61 = (-10L);
    int *l_62 = (void*)0;
    int *l_63 = (void*)0;
    int *l_64 = &l_61;
    int *l_65 = &l_61;
    int *l_66 = &l_54;
    int *l_67 = &l_61;
    int *l_68 = &l_61;
    int *l_69 = &l_61;
    int *l_71 = &g_46.f2;
    int *l_72 = (void*)0;
    int *l_73 = &g_46.f2;
    int *l_74 = (void*)0;
    int *l_75 = &l_61;
    int *l_76 = &g_70;
    int *l_77 = (void*)0;
    int *l_78 = &l_61;
    int *l_79 = &l_61;
    int l_80 = 0xD996F049L;
    int *l_81 = &l_54;
    int l_82 = 0xB7EA8D29L;
    int *l_83 = &l_80;
    int *l_84 = &g_70;
    int l_85 = 0xAD519FD4L;
    int *l_86 = &g_46.f2;
    short ***l_92 = &g_90;
    short **l_105 = &g_91;
    short ***l_104 = &l_105;
    short **l_107 = &g_91;
    short ***l_106 = &l_107;
    long long l_108 = (-1L);
    int **l_115 = &l_86;
    g_87++;
    (*l_92) = g_90;
    (*l_115) = func_93(&g_46, (g_46.f3 = (*l_49)), p_40.f2, func_98(l_92, (*l_92), ((*l_106) = ((*l_104) = &p_43)), l_108, (*l_92)));
    return p_40.f1;
}







static int * func_93(struct S1 * p_94, int p_95, unsigned p_96, short ** p_97)
{
    int *l_114 = (void*)0;
    return l_114;
}







static short ** func_98(short *** p_99, short ** p_100, short ** p_101, short p_102, short ** p_103)
{
    int *l_109 = &g_46.f2;
    int **l_111 = (void*)0;
    int *l_112 = (void*)0;
    int l_113 = 0x041AE354L;
    g_110 = l_109;
    g_110 = l_109;
    l_113 &= p_102;
    return &g_91;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1.f0, "g_46.f1.f0", print_hash_value);
    transparent_crc(g_46.f1.f1, "g_46.f1.f1", print_hash_value);
    transparent_crc(g_46.f1.f2, "g_46.f1.f2", print_hash_value);
    transparent_crc(g_46.f1.f3, "g_46.f1.f3", print_hash_value);
    transparent_crc(g_46.f1.f4, "g_46.f1.f4", print_hash_value);
    transparent_crc(g_46.f1.f5, "g_46.f1.f5", print_hash_value);
    transparent_crc(g_46.f1.f6, "g_46.f1.f6", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
    transparent_crc(g_46.f4, "g_46.f4", print_hash_value);
    transparent_crc(g_46.f5, "g_46.f5", print_hash_value);
    transparent_crc(g_46.f6, "g_46.f6", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f1, "g_179.f1", print_hash_value);
    transparent_crc(g_179.f2, "g_179.f2", print_hash_value);
    transparent_crc(g_179.f3, "g_179.f3", print_hash_value);
    transparent_crc(g_179.f4, "g_179.f4", print_hash_value);
    transparent_crc(g_179.f5, "g_179.f5", print_hash_value);
    transparent_crc(g_179.f6, "g_179.f6", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_344.f0, "g_344.f0", print_hash_value);
    transparent_crc(g_344.f1.f0, "g_344.f1.f0", print_hash_value);
    transparent_crc(g_344.f1.f1, "g_344.f1.f1", print_hash_value);
    transparent_crc(g_344.f1.f2, "g_344.f1.f2", print_hash_value);
    transparent_crc(g_344.f1.f3, "g_344.f1.f3", print_hash_value);
    transparent_crc(g_344.f1.f4, "g_344.f1.f4", print_hash_value);
    transparent_crc(g_344.f1.f5, "g_344.f1.f5", print_hash_value);
    transparent_crc(g_344.f1.f6, "g_344.f1.f6", print_hash_value);
    transparent_crc(g_344.f2, "g_344.f2", print_hash_value);
    transparent_crc(g_344.f3, "g_344.f3", print_hash_value);
    transparent_crc(g_344.f4, "g_344.f4", print_hash_value);
    transparent_crc(g_344.f5, "g_344.f5", print_hash_value);
    transparent_crc(g_344.f6, "g_344.f6", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1451, "g_1451", print_hash_value);
    transparent_crc(g_1473, "g_1473", print_hash_value);
    transparent_crc(g_1474, "g_1474", print_hash_value);
    transparent_crc(g_1591, "g_1591", print_hash_value);
    transparent_crc(g_1682, "g_1682", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    transparent_crc(g_2019, "g_2019", print_hash_value);
    transparent_crc(g_2024, "g_2024", print_hash_value);
    transparent_crc(g_2054, "g_2054", print_hash_value);
    transparent_crc(g_2143, "g_2143", print_hash_value);
    transparent_crc(g_2146, "g_2146", print_hash_value);
    transparent_crc(g_2150, "g_2150", print_hash_value);
    transparent_crc(g_2161, "g_2161", print_hash_value);
    transparent_crc(g_2166, "g_2166", print_hash_value);
    transparent_crc(g_2173, "g_2173", print_hash_value);
    transparent_crc(g_2272, "g_2272", print_hash_value);
    transparent_crc(g_2318, "g_2318", print_hash_value);
    transparent_crc(g_2337, "g_2337", print_hash_value);
    transparent_crc(g_2446, "g_2446", print_hash_value);
    transparent_crc(g_2451, "g_2451", print_hash_value);
    transparent_crc(g_2477, "g_2477", print_hash_value);
    transparent_crc(g_2642.f0, "g_2642.f0", print_hash_value);
    transparent_crc(g_2642.f1.f0, "g_2642.f1.f0", print_hash_value);
    transparent_crc(g_2642.f1.f1, "g_2642.f1.f1", print_hash_value);
    transparent_crc(g_2642.f1.f2, "g_2642.f1.f2", print_hash_value);
    transparent_crc(g_2642.f1.f3, "g_2642.f1.f3", print_hash_value);
    transparent_crc(g_2642.f1.f4, "g_2642.f1.f4", print_hash_value);
    transparent_crc(g_2642.f1.f5, "g_2642.f1.f5", print_hash_value);
    transparent_crc(g_2642.f1.f6, "g_2642.f1.f6", print_hash_value);
    transparent_crc(g_2642.f2, "g_2642.f2", print_hash_value);
    transparent_crc(g_2642.f3, "g_2642.f3", print_hash_value);
    transparent_crc(g_2642.f4, "g_2642.f4", print_hash_value);
    transparent_crc(g_2642.f5, "g_2642.f5", print_hash_value);
    transparent_crc(g_2642.f6, "g_2642.f6", print_hash_value);
    transparent_crc(g_2727, "g_2727", print_hash_value);
    transparent_crc(g_2739, "g_2739", print_hash_value);
    transparent_crc(g_2753, "g_2753", print_hash_value);
    transparent_crc(g_2896.f0, "g_2896.f0", print_hash_value);
    transparent_crc(g_2896.f1.f0, "g_2896.f1.f0", print_hash_value);
    transparent_crc(g_2896.f1.f1, "g_2896.f1.f1", print_hash_value);
    transparent_crc(g_2896.f1.f2, "g_2896.f1.f2", print_hash_value);
    transparent_crc(g_2896.f1.f3, "g_2896.f1.f3", print_hash_value);
    transparent_crc(g_2896.f1.f4, "g_2896.f1.f4", print_hash_value);
    transparent_crc(g_2896.f1.f5, "g_2896.f1.f5", print_hash_value);
    transparent_crc(g_2896.f1.f6, "g_2896.f1.f6", print_hash_value);
    transparent_crc(g_2896.f2, "g_2896.f2", print_hash_value);
    transparent_crc(g_2896.f3, "g_2896.f3", print_hash_value);
    transparent_crc(g_2896.f4, "g_2896.f4", print_hash_value);
    transparent_crc(g_2896.f5, "g_2896.f5", print_hash_value);
    transparent_crc(g_2896.f6, "g_2896.f6", print_hash_value);
    transparent_crc(g_3060, "g_3060", print_hash_value);
    transparent_crc(g_3081, "g_3081", print_hash_value);
    transparent_crc(g_3199, "g_3199", print_hash_value);
    transparent_crc(g_3200, "g_3200", print_hash_value);
    transparent_crc(g_3458, "g_3458", print_hash_value);
    transparent_crc(g_3461, "g_3461", print_hash_value);
    transparent_crc(g_3623, "g_3623", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
