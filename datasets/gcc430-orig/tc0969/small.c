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
   const unsigned f0 : 27;
   signed f1 : 6;
   signed f2 : 17;
   signed f3 : 24;
   unsigned f4 : 9;
   unsigned f5 : 30;
};


static unsigned short g_2 = 0xD4F2L;
static char g_3 = 0x64L;
static unsigned char g_5 = 0x9BL;
static int g_9[10] = {1L, 1L, 0x85FAAFE3L, 1L, 1L, 0x85FAAFE3L, 1L, 1L, 0x85FAAFE3L, 1L};
static int g_53 = 0x8FA1B441L;
static const int *g_61[4] = {&g_53, &g_53, &g_53, &g_53};
static int *g_67 = (void*)0;
static int g_77[6] = {8L, 8L, 8L, 8L, 8L, 8L};
static unsigned long long g_82[8] = {0xF7DD1A1FBCDA4F1DLL, 0xF7DD1A1FBCDA4F1DLL, 18446744073709551607UL, 0xF7DD1A1FBCDA4F1DLL, 0xF7DD1A1FBCDA4F1DLL, 18446744073709551607UL, 0xF7DD1A1FBCDA4F1DLL, 0xF7DD1A1FBCDA4F1DLL};
static long long g_95 = 0xC8D62BAD2CC01E3BLL;
static long long g_149 = 0x0BE24ED17E8DB4B3LL;
static unsigned g_153 = 0x66C1E4EEL;
static unsigned short g_159[7][2] = {{0x1E99L, 0x1E99L}, {0x1E99L, 0x1E99L}, {0x1E99L, 0x1E99L}, {0x1E99L, 0x1E99L}, {0x1E99L, 0x1E99L}, {0x1E99L, 0x1E99L}, {0x1E99L, 0x1E99L}};
static struct S0 g_166 = {8972,3,-96,2868,18,24310};
static struct S0 * const g_165[9] = {&g_166, (void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166};
static unsigned long long g_200 = 0x046515910C99AEF3LL;
static unsigned long long *g_235 = &g_200;
static unsigned long long * const *g_234 = &g_235;
static unsigned long long * const **g_233 = &g_234;
static unsigned long long **g_255[8] = {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235};
static unsigned long long ***g_254[10] = {&g_255[1], &g_255[0], &g_255[0], &g_255[0], &g_255[0], &g_255[1], &g_255[0], &g_255[0], &g_255[0], &g_255[0]};
static long long *g_276 = (void*)0;
static long long **g_275 = &g_276;
static short g_293 = 0L;
static unsigned char **g_323 = (void*)0;
static unsigned char ***g_322 = &g_323;
static const unsigned char g_331[8] = {0xF4L, 0xF4L, 0xE2L, 0xF4L, 0xF4L, 0xE2L, 0xF4L, 0xF4L};
static char g_372[5][7] = {{4L, 0xE1L, 4L, 0x1EL, 0x8FL, 0x9AL, 5L}, {4L, 0xE1L, 4L, 0x1EL, 0x8FL, 0x9AL, 5L}, {4L, 0xE1L, 4L, 0x1EL, 0x8FL, 0x9AL, 5L}, {4L, 0xE1L, 4L, 0x1EL, 0x8FL, 0x9AL, 5L}, {4L, 0xE1L, 4L, 0x1EL, 0x8FL, 0x9AL, 5L}};
static int g_383 = 0x13FA40F8L;
static int g_385 = 0xF761D017L;
static const unsigned g_390 = 0UL;
static short *g_401 = &g_293;
static short ** const g_438 = &g_401;
static unsigned short *g_453[8][10][3] = {{{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}, {{&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}, {&g_159[3][1], (void*)0, &g_159[2][1]}}};
static unsigned short g_499 = 1UL;
static int g_514 = 0x9F53F0A1L;
static const unsigned *g_557 = (void*)0;
static const unsigned **g_556 = &g_557;
static int **g_583 = &g_67;
static unsigned long long *g_586 = &g_82[3];
static short g_658 = 0L;
static const unsigned long long g_786[2] = {18446744073709551614UL, 18446744073709551614UL};
static const unsigned long long *g_785 = &g_786[0];
static const unsigned long long **g_784 = &g_785;
static int g_850 = 0x7107E227L;



static unsigned func_1(void);
static int func_10(unsigned p_11, struct S0 p_12, int p_13);
static struct S0 func_14(unsigned short p_15, unsigned long long p_16, char p_17, unsigned char * p_18, unsigned p_19);
static unsigned long long func_24(const int * p_25, short p_26, int p_27);
static int func_34(unsigned char p_35, unsigned short p_36, unsigned long long p_37, unsigned short p_38, short p_39);
static unsigned long long func_40(const unsigned char * p_41, struct S0 p_42);
static unsigned char * func_43(int * p_44);
static int * func_45(long long p_46, short p_47, const unsigned char p_48);
static long long func_49(unsigned char p_50);
static unsigned func_56(unsigned long long p_57, unsigned long long p_58, unsigned long long p_59, int * p_60);
static unsigned func_1(void)
{
    unsigned char *l_4 = &g_5;
    int *l_8 = &g_9[4];
    char l_51 = 0x83L;
    struct S0 l_282[10][10] = {{{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}, {{4799,-2,-305,-3356,18,7695}, {5881,6,348,-3367,0,20373}, {1744,-1,-126,1977,18,19885}, {6002,2,305,2939,17,23341}, {1236,6,235,-837,3,1134}, {6002,2,305,2939,17,23341}, {1744,-1,-126,1977,18,19885}, {5881,6,348,-3367,0,20373}, {4799,-2,-305,-3356,18,7695}, {2296,7,257,-3903,12,12552}}};
    unsigned l_391 = 0UL;
    int i, j;
lbl_853:
    (*l_8) = (g_2 && ((*l_4)++));
    for (g_2 = 1; (g_2 <= 9); g_2 += 1)
    {
        long long *l_94 = &g_95;
        char l_100 = (-1L);
        char *l_370 = &g_3;
        char *l_371 = &g_372[4][5];
        int *l_849 = &g_850;
        unsigned short *l_851[6][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
        const long long l_852 = (-5L);
        int i, j, k;
        (*l_849) &= (g_9[g_2] = func_10(g_9[g_2], func_14(((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(func_24(&g_9[1], (((***g_233) = ((safe_rshift_func_int8_t_s_u((((*l_371) |= ((*l_370) = (safe_add_func_int32_t_s_s((((*l_94) = (safe_add_func_int32_t_s_s(func_34(g_9[g_2], (*l_8), func_40(func_43(func_45(((*l_94) = func_49(l_51)), (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(g_9[4], ((0x47L > g_9[g_2]) | l_100))) | (*l_8)), 1)), g_2)), l_282[5][4]), l_100, (*l_8)), g_166.f0))) >= l_100), g_331[6])))) && g_153), g_9[g_2])) <= g_9[4])) < g_9[g_2]), l_100), 2UL)), g_9[4])) ^ l_100), (*l_8), l_100, l_371, l_391), (*l_8)));
        if (((*l_8) == ((l_4 == (void*)0) & (func_49((func_40(func_43(&g_9[g_2]), func_14(((*l_849) = ((func_49(func_49((*l_849))) ^ ((*l_8) ^ (*g_401))) > 0xC309L)), l_100, g_200, l_4, g_3)) <= l_852)) || 0x70D10F64E59CE61ELL))))
        {
            if (g_2)
                goto lbl_853;
            (*g_583) = (*g_583);
            (*g_583) = &g_9[g_2];
        }
        else
        {
            (*g_67) = (*g_67);
            return (*l_849);
        }
    }
    return g_514;
}







static int func_10(unsigned p_11, struct S0 p_12, int p_13)
{
    unsigned ***l_681 = (void*)0;
    int l_688 = 0x0B8BBEECL;
    int l_694 = 0x9BF3BBE7L;
    int l_697[6] = {0xD5F2AE61L, 1L, 0xD5F2AE61L, 1L, 0xD5F2AE61L, 1L};
    unsigned long long l_699 = 0xDC78BFB720312577LL;
    long long l_704 = (-1L);
    struct S0 l_706 = {992,5,283,-1307,14,28690};
    short l_732 = 1L;
    unsigned char l_733 = 255UL;
    long long l_789 = 1L;
    unsigned long long ** const *l_790 = &g_255[7];
    unsigned long long l_801 = 1UL;
    int l_803 = 0x37DD24C8L;
    unsigned l_825 = 18446744073709551615UL;
    long long l_840 = 0xDB4F281223933244LL;
    int i;
    for (g_383 = 12; (g_383 == 13); g_383 = safe_add_func_int16_t_s_s(g_383, 1))
    {
        short l_696 = 0x57C6L;
        int l_698 = 5L;
        int *l_731[8][1];
        short l_755 = 0x416BL;
        unsigned char * const l_758 = (void*)0;
        unsigned char *l_761 = &l_733;
        long long *l_817 = (void*)0;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_731[i][j] = (void*)0;
        }
        if (func_49((&g_556 != l_681)))
        {
            const unsigned l_684 = 1UL;
            int *l_685 = &g_53;
            int *l_686 = &g_514;
            int *l_687 = &g_77[2];
            int *l_689 = &g_9[4];
            int *l_690 = (void*)0;
            int *l_691 = &g_77[4];
            int *l_692 = &g_9[4];
            int *l_693 = (void*)0;
            int *l_695[7][7][5] = {{{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}, {{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}, {{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}, {{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}, {{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}, {{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}, {{&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}, {&g_383, &g_383, &g_9[3], (void*)0, &g_77[1]}}};
            int i, j, k;
            (*g_67) |= (safe_rshift_func_int8_t_s_u(p_12.f2, 2));
            if (l_684)
                continue;
            l_699++;
            for (g_5 = (-8); (g_5 != 25); g_5 = safe_add_func_uint8_t_u_u(g_5, 5))
            {
                return l_704;
            }
        }
        else
        {
            const unsigned char *l_705 = &g_331[6];
            int *l_707 = &l_697[2];
            (*l_707) |= (func_40(l_705, l_706) ^ 65534UL);
            for (g_658 = 2; (g_658 >= 0); g_658 -= 1)
            {
                long long **l_720 = &g_276;
            }
            for (g_293 = 0; (g_293 < (-15)); --g_293)
            {
                long long l_723 = 9L;
                (*g_67) = l_723;
                for (g_149 = 2; (g_149 >= 0); g_149 -= 1)
                {
                    unsigned short l_724 = 0x7DCCL;
                    struct S0 *l_730 = (void*)0;
                    struct S0 **l_729[4][10][5] = {{{&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}}, {{&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}}, {{&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}}, {{&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}, {&l_730, &l_730, &l_730, &l_730, &l_730}}};
                    int i, j, k;
                    if (p_12.f0)
                    {
                        int i;
                        ++l_724;
                        (*l_707) = (safe_mod_func_int32_t_s_s((p_12.f1 >= (func_49(((void*)0 != l_729[2][9][3])) == (p_12.f3 >= 5UL))), l_724));
                        (*g_67) = p_12.f1;
                    }
                    else
                    {
                        (**g_583) = l_698;
                        (*g_67) |= 0x627FCD41L;
                    }
                    return l_723;
                }
            }
        }
        l_733++;
        for (g_499 = 0; (g_499 <= 3); g_499 += 1)
        {
            const struct S0 *l_736 = &l_706;
            const unsigned char *l_741[4][8][6] = {{{&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}}, {{&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}}, {{&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}}, {{&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}, {&l_733, &g_5, (void*)0, &g_5, &g_331[7], &g_5}}};
            int l_751 = 0xB9F683F9L;
            unsigned char l_752 = 0x5EL;
            short l_759 = (-1L);
            unsigned long long **l_779[3];
            int l_813 = 0xE95B009BL;
            const int *l_830 = &g_77[4];
            int l_837 = (-6L);
            unsigned l_846 = 4294967287UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_779[i] = (void*)0;
            for (g_658 = 0; (g_658 <= 7); g_658 += 1)
            {
                const struct S0 **l_737 = (void*)0;
                const struct S0 **l_738 = &l_736;
                int i;
                for (g_200 = 0; (g_200 <= 7); g_200 += 1)
                {
                    return (*g_67);
                }
                if ((**g_583))
                    break;
                (*l_738) = l_736;
            }
            for (l_688 = 0; (l_688 <= 3); l_688 += 1)
            {
                int l_742[8] = {0x7AA58AF5L, 2L, 0x7AA58AF5L, 2L, 0x7AA58AF5L, 2L, 0x7AA58AF5L, 2L};
                long long **l_749 = &g_276;
                unsigned long long **l_780 = (void*)0;
                int l_806 = 0xE4C9719AL;
                unsigned l_814 = 0x86E9B29FL;
                int i;
                for (l_699 = 0; (l_699 <= 4); l_699 += 1)
                {
                    int i, j;
                    for (g_514 = 1; (g_514 >= 0); g_514 -= 1)
                    {
                        l_706.f1 |= ((-1L) && func_40(func_43((*g_583)), p_12));
                    }
                    (**g_583) = ((void*)0 != &g_401);
                    if ((g_372[(g_499 + 1)][(l_688 + 1)] != g_9[(l_699 + 4)]))
                    {
                        int i;
                        g_61[g_499] = (*g_583);
                        (**g_583) = (safe_sub_func_uint64_t_u_u((***g_233), l_706.f0));
                    }
                    else
                    {
                        unsigned char *l_750[4] = {&g_5, (void*)0, &g_5, (void*)0};
                        int i;
                        g_166.f1 &= (p_12.f3 = ((func_49(l_742[1]) && (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((l_751 = (p_12.f3 || (((safe_sub_func_int64_t_s_s((l_742[1] ^ ((*g_401) <= ((l_749 == l_749) > p_12.f5))), (*g_276))) <= 0x1FL) || (*g_401)))) & l_706.f5), l_752)), p_12.f5))) ^ p_12.f3));
                        (*g_67) |= (safe_mod_func_uint64_t_u_u(((*g_401) == l_751), l_742[1]));
                        if (l_755)
                            continue;
                    }
                    if (p_12.f0)
                        continue;
                }
                for (p_11 = 0; (p_11 <= 4); p_11 += 1)
                {
                    unsigned short *l_760 = &g_159[5][0];
                    int i, j;
                    if ((safe_rshift_func_int8_t_s_s((((void*)0 == l_758) != (g_372[(g_499 + 1)][(p_11 + 1)] < func_40(&l_733, func_14((((*l_760) ^= (((0x9662C001C1C5BA21LL || ((*g_276) == p_12.f0)) || ((*g_235) |= l_759)) == (~l_752))) <= l_742[4]), p_12.f4, l_742[1], l_761, p_12.f1)))), l_706.f1)))
                    {
                        unsigned long long l_765 = 1UL;
                        int l_778[6] = {1L, 0xE71ECB5AL, 1L, 0xE71ECB5AL, 1L, 0xE71ECB5AL};
                        const unsigned long long *l_782[7];
                        const unsigned long long **l_781[10];
                        const unsigned long long ***l_783[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_782[i] = (void*)0;
                        for (i = 0; i < 10; i++)
                            l_781[i] = &l_782[5];
                        for (i = 0; i < 7; i++)
                            l_783[i] = &l_781[4];
                        p_12.f1 |= ((**g_583) |= ((l_732 >= ((*g_401) ^= (l_751 = (safe_sub_func_int64_t_s_s((0x6DL && ((safe_unary_minus_func_uint16_t_u(((*g_276) ^ (*g_586)))) ^ p_12.f4)), l_765))))) && (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((0x811F5709L <= (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((((l_742[0] <= (safe_sub_func_uint64_t_u_u(8UL, p_12.f3))) ^ g_372[(g_499 + 1)][(p_11 + 1)]) && 0x30018E61C5F93C9CLL), 0)) | 4294967295UL) | l_742[3]), 11))) | g_2) || 0xA949D7531C25BCB0LL), p_12.f0)), g_372[(g_499 + 1)][(p_11 + 1)]))));
                        l_778[4] |= (((safe_rshift_func_uint8_t_u_u(p_11, func_49(p_12.f3))) | (p_11 >= l_765)) || p_12.f2);
                        (*g_67) ^= ((((l_780 = l_779[0]) != (g_784 = l_781[7])) & 0xAF8348F8L) != l_752);
                    }
                    else
                    {
                        char *l_793[8][10][3] = {{{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}, {{&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}, {&g_372[3][0], &g_372[(g_499 + 1)][(p_11 + 1)], &g_3}}};
                        int i, j, k;
                        (**g_583) = (+(-1L));
                        g_61[g_499] = func_45((safe_add_func_uint16_t_u_u((((***g_233) ^= l_789) && (~(func_49(((-1L) || ((l_790 != (void*)0) || ((0x256B86DAL && (safe_lshift_func_int8_t_s_u((g_3 = g_2), p_12.f3))) == p_12.f4)))) == p_13))), l_699)), (**g_438), p_12.f0);
                        if (l_742[1])
                            continue;
                    }
                }
                if ((safe_lshift_func_uint16_t_u_u(l_759, (safe_add_func_uint32_t_u_u(p_12.f4, p_12.f3)))))
                {
                    char *l_802[4][5][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                    int l_804 = 0x919EA94EL;
                    short *l_805 = &g_658;
                    int i, j, k;
                    (*g_583) = &l_742[5];
                    (*g_583) = func_45((~l_742[1]), ((((**g_234) && (((safe_mod_func_uint32_t_u_u(p_12.f0, (safe_unary_minus_func_int64_t_s(((l_751 = (0x86D4BDF7L != ((p_12.f5 ^ ((l_736 != (void*)0) == (l_801 >= ((0x687A9F729CF4AF5CLL == 0x94495AE733444396LL) <= 0xE7A19601L)))) >= (-8L)))) ^ p_12.f5))))) < (*g_785)) == l_803)) || p_12.f3) >= l_804), l_742[5]);
                    (**g_583) = ((&l_732 == ((*g_438) = l_805)) >= ((*g_275) != (void*)0));
                }
                else
                {
                    unsigned char l_808 = 0x73L;
                    int l_811 = 0x316E254CL;
                    unsigned *l_820[5][6] = {{&l_814, (void*)0, &l_814, &l_814, (void*)0, &l_814}, {&l_814, (void*)0, &l_814, &l_814, (void*)0, &l_814}, {&l_814, (void*)0, &l_814, &l_814, (void*)0, &l_814}, {&l_814, (void*)0, &l_814, &l_814, (void*)0, &l_814}, {&l_814, (void*)0, &l_814, &l_814, (void*)0, &l_814}};
                    char l_828 = 3L;
                    unsigned long long ****l_829[7];
                    char l_834[8];
                    int l_836 = 1L;
                    int l_838 = 0x791C334DL;
                    unsigned l_841 = 8UL;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_829[i] = &g_254[1];
                    for (i = 0; i < 8; i++)
                        l_834[i] = (-1L);
                    for (g_385 = 1; (g_385 >= 0); g_385 -= 1)
                    {
                        char l_807 = 0x27L;
                        int l_812 = 0L;
                        --l_808;
                        --l_814;
                        l_706.f3 = (-1L);
                    }
                    if ((!(((void*)0 == l_817) && ((safe_sub_func_uint16_t_u_u(((l_811 ^= 0x83E649F4L) > (safe_mod_func_uint32_t_u_u((g_166.f4 ^= (g_153 = (safe_sub_func_int16_t_s_s(((l_825 != (((safe_sub_func_int16_t_s_s(func_49(l_828), 65534UL)) <= (&l_779[0] != (g_254[6] = &g_255[0]))) || p_11)) <= p_12.f0), 0x187EL)))), l_742[2]))), (**g_438))) ^ (**g_438)))))
                    {
                        unsigned long long l_831 = 0xA95CC54BF7A2BA1BLL;
                        l_830 = (void*)0;
                        --l_831;
                        return p_12.f5;
                    }
                    else
                    {
                        char l_835 = (-1L);
                        int l_839 = 0x1B14BF19L;
                        (*g_583) = func_45((**g_275), (p_12.f3 | p_13), p_12.f4);
                        l_841--;
                        (**g_583) &= (safe_lshift_func_uint8_t_u_u(0x03L, 0));
                        p_12.f1 &= (*g_67);
                    }
                    for (l_694 = 0; (l_694 <= 0); l_694 += 1)
                    {
                        int i, j;
                        (**g_583) ^= (+(-7L));
                        --l_846;
                    }
                }
            }
            return l_733;
        }
    }
    return p_12.f3;
}







static struct S0 func_14(unsigned short p_15, unsigned long long p_16, char p_17, unsigned char * p_18, unsigned p_19)
{
    short *l_402 = &g_293;
    int l_407[7] = {(-9L), (-9L), 0xC54F13C0L, (-9L), (-9L), 0xC54F13C0L, (-9L)};
    unsigned short l_432[3][3][5] = {{{65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}, {65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}, {65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}}, {{65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}, {65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}, {65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}}, {{65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}, {65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}, {65527UL, 0x6F43L, 65535UL, 0x6F43L, 65527UL}}};
    int *l_464 = (void*)0;
    int *l_465 = &g_77[1];
    struct S0 l_466 = {3742,6,179,-1856,21,3878};
    unsigned long long l_521 = 6UL;
    unsigned short **l_547 = (void*)0;
    int l_659[5] = {1L, 0x95EC6BB3L, 1L, 0x95EC6BB3L, 1L};
    char l_668 = 0x9FL;
    int i, j, k;
    for (p_16 = (-9); (p_16 == 45); p_16 = safe_add_func_uint64_t_u_u(p_16, 3))
    {
        short *l_404[3];
        int l_409 = 0xEABC92F2L;
        int l_506 = 9L;
        int l_510 = 0xED653B93L;
        int l_511[5][3][2] = {{{3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}}, {{3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}}, {{3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}}, {{3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}}, {{3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}, {3L, 0x4CF7546EL}}};
        unsigned l_537 = 0UL;
        int **l_542[7] = {&l_465, &l_465, &g_67, &l_465, &l_465, &g_67, &l_465};
        unsigned short **l_548 = (void*)0;
        unsigned short **l_551 = &g_453[4][1][2];
        long long l_593[7];
        int l_594 = 3L;
        unsigned l_600 = 5UL;
        long long l_660 = 0x683C803081CB6716LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_404[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_593[i] = 4L;
        for (g_5 = 0; (g_5 == 4); g_5 = safe_add_func_uint16_t_u_u(g_5, 6))
        {
            struct S0 *l_399 = &g_166;
            struct S0 **l_398 = &l_399;
            short *l_400 = &g_293;
            short **l_403 = &l_402;
            unsigned char l_418 = 255UL;
            int l_479 = 0x05E7D216L;
            int l_503 = 0x2F9D98ECL;
            int l_507 = 0xE7EB24D2L;
            int l_513 = 0L;
            int *l_527[2];
            int i;
            for (i = 0; i < 2; i++)
                l_527[i] = &l_511[1][0][0];
        }
    }
    return l_466;
}







static unsigned long long func_24(const int * p_25, short p_26, int p_27)
{
    long long l_375 = (-1L);
    unsigned char *l_376 = &g_5;
    long long *l_380 = &l_375;
    long long **l_379 = &l_380;
    unsigned l_381 = 1UL;
    int *l_382 = &g_383;
    int *l_384 = &g_385;
    (*l_382) ^= func_34((safe_mod_func_int8_t_s_s(2L, ((*l_376)--))), (((((((((*l_379) = ((*g_275) = (*g_275))) == (void*)0) && ((((**g_275) ^= 7L) && (l_375 | func_34(p_26, l_381, ((void*)0 == &g_9[4]), p_27, l_375))) != p_27)) == 3L) & g_166.f3) | p_26) ^ l_381) & (*p_25)), l_381, g_3, l_375);
    (*l_384) &= ((*l_382) = (*g_67));
    for (p_26 = (-16); (p_26 >= 14); p_26 = safe_add_func_int16_t_s_s(p_26, 1))
    {
        const unsigned *l_389 = &g_390;
        const unsigned **l_388 = &l_389;
        p_27 ^= ((((*l_388) = &l_381) == (void*)0) & (*l_382));
        l_384 = &g_9[8];
        (*l_382) &= (p_27 = (*l_384));
    }
    return p_26;
}







static int func_34(unsigned char p_35, unsigned short p_36, unsigned long long p_37, unsigned short p_38, short p_39)
{
    unsigned long long l_347 = 0x7B9A00A2772F636ALL;
    int *l_348 = &g_53;
    unsigned l_351 = 0x60D6F5DCL;
    struct S0 *l_353 = &g_166;
    struct S0 ** const l_352 = &l_353;
    unsigned char l_354 = 255UL;
    unsigned *l_357 = &g_153;
    short *l_358 = &g_293;
    int *l_359 = &g_77[4];
    int *l_360 = &g_77[5];
    int *l_361 = &g_53;
    int *l_362 = &g_77[3];
    int *l_363 = (void*)0;
    int *l_364 = &g_77[5];
    int *l_365 = &g_77[0];
    int *l_366[7][7][5] = {{{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}, {{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}, {{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}, {{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}, {{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}, {{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}, {{&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}, {&g_9[4], (void*)0, (void*)0, &g_9[1], &g_9[7]}}};
    unsigned short l_367 = 0xD1C6L;
    int i, j, k;
    (*l_348) |= l_347;
    (*l_359) = (safe_lshift_func_uint8_t_u_u(((*l_348) = ((l_351 >= (l_352 == &l_353)) <= (*l_348))), ((l_354 > 0x61E8B4579F48DB9DLL) > ((*l_358) = (l_354 ^ (g_200 | (((*l_357) &= ((safe_rshift_func_uint8_t_u_s(p_39, 7)) != g_9[4])) > p_35)))))));
    --l_367;
    return p_37;
}







static unsigned long long func_40(const unsigned char * p_41, struct S0 p_42)
{
    unsigned short l_283 = 9UL;
    unsigned short *l_284[9];
    int l_285 = (-1L);
    long long *l_290 = &g_149;
    long long *l_291 = &g_149;
    unsigned char *l_292 = (void*)0;
    int **l_294 = &g_67;
    unsigned l_345 = 0xBFF09336L;
    int *l_346[2];
    int i;
    for (i = 0; i < 9; i++)
        l_284[i] = &g_159[1][1];
    for (i = 0; i < 2; i++)
        l_346[i] = (void*)0;
    (*l_294) = func_45(l_283, (((*l_290) = ((*p_41) != ((l_285 = p_42.f2) ^ (g_9[4] ^ ((safe_rshift_func_uint8_t_u_s((g_293 = (safe_add_func_uint8_t_u_u(l_283, (((*g_275) = l_290) == (l_291 = l_290))))), 3)) != p_42.f3))))) <= 0xEF974E3EA0CFDCC5LL), l_283);
    for (g_200 = 20; (g_200 <= 60); ++g_200)
    {
        int *l_297 = &l_285;
        (*l_297) |= (**l_294);
        if ((*l_297))
            break;
    }
    for (g_3 = (-25); (g_3 > (-13)); g_3 = safe_add_func_int32_t_s_s(g_3, 5))
    {
        unsigned char *l_340[7];
        int l_342[6][4] = {{0xB663AE90L, 0x57B6CDF7L, 0xB663AE90L, 0x57B6CDF7L}, {0xB663AE90L, 0x57B6CDF7L, 0xB663AE90L, 0x57B6CDF7L}, {0xB663AE90L, 0x57B6CDF7L, 0xB663AE90L, 0x57B6CDF7L}, {0xB663AE90L, 0x57B6CDF7L, 0xB663AE90L, 0x57B6CDF7L}, {0xB663AE90L, 0x57B6CDF7L, 0xB663AE90L, 0x57B6CDF7L}, {0xB663AE90L, 0x57B6CDF7L, 0xB663AE90L, 0x57B6CDF7L}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_340[i] = &g_5;
        for (g_293 = 0; (g_293 <= 6); g_293 = safe_add_func_int32_t_s_s(g_293, 2))
        {
            unsigned l_318 = 0x3CFA673BL;
            const unsigned char *l_330 = &g_331[6];
            const unsigned char **l_329[5][3] = {{(void*)0, &l_330, (void*)0}, {(void*)0, &l_330, (void*)0}, {(void*)0, &l_330, (void*)0}, {(void*)0, &l_330, (void*)0}, {(void*)0, &l_330, (void*)0}};
            const unsigned char ***l_328 = &l_329[2][2];
            int i, j;
            for (g_149 = 0; (g_149 <= 8); g_149 += 1)
            {
                unsigned short l_315 = 0UL;
                long long l_321[7] = {(-1L), 0xCAE7A2E0D5361504LL, (-1L), 0xCAE7A2E0D5361504LL, (-1L), 0xCAE7A2E0D5361504LL, (-1L)};
                const unsigned char *l_326 = &g_5;
                const unsigned char **l_325 = &l_326;
                const unsigned char ***l_324[6][4];
                int *l_341 = &l_285;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_324[i][j] = &l_325;
                }
                for (l_283 = 2; (l_283 <= 8); l_283 += 1)
                {
                    int *l_304 = &l_285;
                    int *l_305 = &g_53;
                    int *l_306 = &g_77[4];
                    int *l_307 = &g_77[4];
                    int *l_308 = (void*)0;
                    int *l_309 = &g_53;
                    int *l_310 = &g_77[4];
                    int *l_311 = (void*)0;
                    int *l_312 = &l_285;
                    int *l_313 = &l_285;
                    int *l_314 = &g_53;
                    for (l_285 = 0; (l_285 <= 8); l_285 += 1)
                    {
                        int *l_302 = &g_77[4];
                        int **l_303 = &l_302;
                        (*l_294) = (void*)0;
                        (*l_302) |= p_42.f4;
                        (*l_303) = ((*l_294) = &g_9[4]);
                    }
                    l_315++;
                    (*l_294) = (*l_294);
                }
                for (g_200 = 2; (g_200 <= 8); g_200 += 1)
                {
                    const unsigned char ****l_327[6] = {&l_324[2][0], &l_324[2][0], &l_324[2][0], &l_324[2][0], &l_324[2][0], &l_324[2][0]};
                    int l_332 = 0x1A09218CL;
                    int *l_333 = &g_77[4];
                    int i;
                    p_42.f1 &= (l_318 & (safe_lshift_func_int8_t_s_s((p_42.f5 != (((0UL == (l_318 || (l_321[2] < ((g_322 == (l_328 = l_324[2][0])) || (p_42.f5 || ((*l_333) ^= l_332)))))) || p_42.f3) >= (-1L))), p_42.f0)));
                    for (l_285 = (-3); (l_285 >= 6); l_285 = safe_add_func_int64_t_s_s(l_285, 1))
                    {
                        return (***g_233);
                    }
                    g_61[2] = &g_53;
                }
                (*l_341) ^= func_49(l_315);
            }
        }
        return l_342[2][0];
    }
    p_42.f3 = ((*p_41) <= ((safe_add_func_uint16_t_u_u(((**l_294) && (l_345 = (0x0BF755DEL & (1L && (**l_294))))), 0xD1D9L)) && (**l_294)));
    return (***g_233);
}







static unsigned char * func_43(int * p_44)
{
    short l_279 = 0x8149L;
    int l_280 = (-2L);
    unsigned char *l_281 = &g_5;
    l_280 = l_279;
    return l_281;
}







static int * func_45(long long p_46, short p_47, const unsigned char p_48)
{
    int l_104 = (-6L);
    int l_107[7];
    long long l_139 = 0L;
    short l_141 = 0x813DL;
    unsigned long long l_145[2][3][6] = {{{0xEAED4DD8C49E0325LL, 0xEAED4DD8C49E0325LL, 0xC961556879814F5DLL, 0x2A84E0C2DAF40BCFLL, 18446744073709551615UL, 0x2A84E0C2DAF40BCFLL}, {0xEAED4DD8C49E0325LL, 0xEAED4DD8C49E0325LL, 0xC961556879814F5DLL, 0x2A84E0C2DAF40BCFLL, 18446744073709551615UL, 0x2A84E0C2DAF40BCFLL}, {0xEAED4DD8C49E0325LL, 0xEAED4DD8C49E0325LL, 0xC961556879814F5DLL, 0x2A84E0C2DAF40BCFLL, 18446744073709551615UL, 0x2A84E0C2DAF40BCFLL}}, {{0xEAED4DD8C49E0325LL, 0xEAED4DD8C49E0325LL, 0xC961556879814F5DLL, 0x2A84E0C2DAF40BCFLL, 18446744073709551615UL, 0x2A84E0C2DAF40BCFLL}, {0xEAED4DD8C49E0325LL, 0xEAED4DD8C49E0325LL, 0xC961556879814F5DLL, 0x2A84E0C2DAF40BCFLL, 18446744073709551615UL, 0x2A84E0C2DAF40BCFLL}, {0xEAED4DD8C49E0325LL, 0xEAED4DD8C49E0325LL, 0xC961556879814F5DLL, 0x2A84E0C2DAF40BCFLL, 18446744073709551615UL, 0x2A84E0C2DAF40BCFLL}}};
    char l_150 = 0x69L;
    unsigned long long *l_179 = (void*)0;
    unsigned long long **l_178[3];
    unsigned short l_196 = 0x026AL;
    long long l_201 = 0xFA9E0024463F7B03LL;
    long long *l_204 = &g_149;
    long long * const *l_203[1];
    int **l_278 = &g_67;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_107[i] = 0x03DC5799L;
    for (i = 0; i < 3; i++)
        l_178[i] = &l_179;
    for (i = 0; i < 1; i++)
        l_203[i] = &l_204;
lbl_229:
    if (p_48)
    {
        int *l_101 = &g_9[4];
        int **l_102 = &g_67;
        int *l_103 = &g_53;
        int l_105 = 0x61F16875L;
        int *l_106[5] = {&g_77[4], (void*)0, &g_77[4], (void*)0, &g_77[4]};
        unsigned l_108 = 1UL;
        int l_124 = 0x781183D2L;
        int i;
        for (p_46 = 5; (p_46 >= 0); p_46 -= 1)
        {
            return l_101;
        }
        if (p_46)
            goto lbl_111;
        (*l_102) = &g_9[5];
lbl_111:
        l_108++;
        for (g_5 = 0; (g_5 == 37); ++g_5)
        {
            int l_114 = 0xF842C222L;
            int l_129 = 0xC01D43B6L;
            int l_130 = 0xD449BA73L;
            int l_132 = 0x0BDAFFA7L;
            int l_133 = 0x446B0253L;
            int l_134 = 0x2ACA09A6L;
            int l_136 = 0xE6D3A6ACL;
            int l_137 = 2L;
            int l_138 = 0L;
            int l_140 = 0xF47B0E09L;
            int l_143 = (-7L);
            short l_151 = 0L;
        }
    }
    else
    {
        int **l_174 = &g_67;
        unsigned long long *l_176 = &g_82[6];
        unsigned long long **l_175[1][4][1] = {{{&l_176}, {&l_176}, {&l_176}, {&l_176}}};
        long long * const *l_205 = &l_204;
        int i, j, k;
        (*l_174) = &g_9[0];
        for (g_149 = 3; (g_149 >= 0); g_149 -= 1)
        {
            unsigned long long ***l_177[3][1];
            unsigned char *l_197 = &g_5;
            long long *l_198[10][7][3] = {{{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}, {{(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}, {(void*)0, &g_149, (void*)0}}};
            int *l_199[8];
            unsigned char l_202 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_177[i][j] = &l_175[0][0][0];
            }
            for (i = 0; i < 8; i++)
                l_199[i] = &g_77[0];
            l_178[2] = l_175[0][1][0];
            l_107[6] |= ((((safe_lshift_func_uint16_t_u_s((++g_159[6][1]), ((((-2L) || (((**l_174) >= l_202) != g_3)) >= 0L) > 0xC3E9L))) < 0L) != 0xEB821A7CDE2C682FLL) > g_166.f1);
        }
        l_205 = l_203[0];
    }
    for (g_153 = 0; (g_153 <= 5); g_153 += 1)
    {
        int l_214 = 0x0B08A201L;
        int l_221 = 0L;
        int l_222 = 0x47392D7BL;
        int l_224 = (-2L);
        int l_225[6][4] = {{0x3975087DL, 0xEC2ADC47L, 0x755B596BL, 2L}, {0x3975087DL, 0xEC2ADC47L, 0x755B596BL, 2L}, {0x3975087DL, 0xEC2ADC47L, 0x755B596BL, 2L}, {0x3975087DL, 0xEC2ADC47L, 0x755B596BL, 2L}, {0x3975087DL, 0xEC2ADC47L, 0x755B596BL, 2L}, {0x3975087DL, 0xEC2ADC47L, 0x755B596BL, 2L}};
        short l_240[2][5];
        unsigned long long ***l_256 = &l_178[2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_240[i][j] = 0x2570L;
        }
        for (g_95 = 0; (g_95 <= 3); g_95 += 1)
        {
            int *l_206 = &l_107[6];
            int *l_207 = (void*)0;
            int *l_208 = &g_53;
            int *l_209 = &g_53;
            int *l_210 = &g_77[2];
            int *l_211 = (void*)0;
            int *l_212 = (void*)0;
            int *l_213 = &l_104;
            int *l_215 = (void*)0;
            int *l_216 = &g_77[1];
            int *l_217 = &l_107[3];
            int *l_218 = &l_104;
            int *l_219 = &g_77[4];
            int *l_220 = (void*)0;
            int *l_223[1];
            unsigned long long l_226 = 0xB6E1BD89AB3EE1FFLL;
            unsigned short *l_263 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_223[i] = &l_107[6];
            l_226--;
            for (l_201 = 0; (l_201 >= 0); l_201 -= 1)
            {
                int i;
                for (l_224 = 0; (l_224 <= 0); l_224 += 1)
                {
                    if (g_166.f1)
                        goto lbl_229;
                }
                if (g_77[g_153])
                    break;
            }
            for (l_201 = 0; (l_201 >= 0); l_201 -= 1)
            {
                int l_238 = (-8L);
                long long l_261 = 1L;
                unsigned short **l_264 = &l_263;
                for (l_196 = 0; (l_196 <= 3); l_196 += 1)
                {
                    unsigned short *l_232 = &g_159[3][1];
                    int i, j;
                    if ((safe_rshift_func_int8_t_s_u((((*l_209) = ((((l_225[g_153][g_95] || ((*l_232) = p_47)) | l_214) | (g_233 != (void*)0)) || p_46)) && p_48), 1)))
                    {
                        char *l_239[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_239[i] = &g_3;
                        (*l_219) = ((*l_208) = (p_47 | (p_47 < ((*l_217) = (l_238 != (-5L))))));
                    }
                    else
                    {
                        short l_245 = 1L;
                        unsigned char *l_259 = (void*)0;
                        unsigned char *l_260[8] = {&g_5, &g_5, &g_5, &g_5, &g_5, &g_5, &g_5, &g_5};
                        char *l_262 = &l_150;
                        int i;
                        (*l_216) = (((***g_233) ^ (-2L)) >= (l_225[g_153][g_95] ^ p_47));
                        if (l_240[0][2])
                            continue;
                        l_104 = (func_49((safe_sub_func_uint16_t_u_u(l_245, (safe_sub_func_int64_t_s_s(l_107[6], (safe_mod_func_uint32_t_u_u((((*l_262) |= (+((safe_lshift_func_int8_t_s_s(p_47, 0)) || ((safe_mod_func_int64_t_s_s((((((*l_204) = (((&g_234 != (l_256 = g_254[1])) == l_141) >= l_107[2])) != (-3L)) | (func_49((l_261 = ((safe_lshift_func_uint16_t_u_u(p_47, l_245)) != g_166.f2))) & l_225[g_153][g_95])) <= p_47), p_47)) >= 1UL)))) & l_225[1][1]), g_166.f0))))))) != g_159[3][1]);
                    }
                    if (l_224)
                        goto lbl_229;
                }
                (*l_209) |= (((*l_264) = l_263) != &l_196);
            }
        }
        return &g_53;
    }
    if ((!p_47))
    {
        unsigned long long **l_265[1];
        unsigned long long ***l_266 = &l_178[2];
        unsigned long long ***l_267 = (void*)0;
        unsigned long long ***l_268 = &g_255[0];
        int i;
        for (i = 0; i < 1; i++)
            l_265[i] = &l_179;
        l_107[6] ^= ((p_46 = g_77[1]) > ((*g_233) != ((*l_268) = l_265[0])));
    }
    else
    {
        unsigned short *l_270[9] = {&l_196, &g_159[3][1], &l_196, &g_159[3][1], &l_196, &g_159[3][1], &l_196, &g_159[3][1], &l_196};
        unsigned short **l_269 = &l_270[0];
        int l_273 = 0x8A94D586L;
        unsigned *l_274 = &g_153;
        long long **l_277 = &l_204;
        int i;
        l_273 = ((((*l_269) = &l_196) != &l_196) ^ ((safe_add_func_uint32_t_u_u(((*l_274) &= ((-1L) ^ l_273)), ((~((g_275 != l_277) > ((***g_233) = p_47))) < ((l_150 || 0L) > 0x96L)))) > p_47));
    }
    (*l_278) = &l_107[0];
    return &g_77[3];
}







static long long func_49(unsigned char p_50)
{
    int *l_52 = &g_53;
    const int **l_62 = &g_61[2];
    int **l_63 = (void*)0;
    int **l_64 = (void*)0;
    int *l_66 = &g_9[4];
    int **l_65 = &l_66;
    unsigned long long *l_81 = &g_82[3];
    int l_83 = 0x51BB39D9L;
    unsigned char *l_88 = &g_5;
    unsigned char **l_87[9] = {&l_88, &l_88, &l_88, &l_88, &l_88, &l_88, &l_88, &l_88, &l_88};
    unsigned char ***l_89 = (void*)0;
    unsigned char ***l_90 = (void*)0;
    unsigned char ***l_91 = (void*)0;
    unsigned char ***l_92 = &l_87[1];
    char l_93 = 0xF8L;
    int i;
    (*l_52) |= (&g_5 != &p_50);
    l_83 &= (safe_mod_func_int64_t_s_s(((func_56(g_3, (g_9[4] > (*l_52)), (((*l_62) = g_61[2]) != ((*l_65) = l_52)), (g_67 = &g_53)) | (p_50 | ((*l_81) &= (((safe_rshift_func_uint16_t_u_u(p_50, 0)) ^ g_2) != g_3)))) && (**l_65)), g_3));
    for (p_50 = 0; (p_50 != 27); p_50 = safe_add_func_uint64_t_u_u(p_50, 4))
    {
        int *l_86 = &g_77[4];
        (*l_86) ^= (*g_67);
        (*l_86) = ((*g_67) = (p_50 >= ((void*)0 != &l_66)));
        return g_9[4];
    }
    (*l_92) = l_87[2];
    return l_93;
}







static unsigned func_56(unsigned long long p_57, unsigned long long p_58, unsigned long long p_59, int * p_60)
{
    for (p_59 = (-29); (p_59 < 37); p_59 = safe_add_func_uint16_t_u_u(p_59, 2))
    {
        char l_74[9][5][2] = {{{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}, {{0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}, {0x78L, 0x2DL}}};
        int *l_75 = (void*)0;
        int *l_76 = &g_77[4];
        int **l_78 = &g_67;
        int i, j, k;
        for (g_5 = 8; (g_5 == 15); ++g_5)
        {
            if ((*p_60))
                break;
        }
        (*l_76) = ((*g_67) ^= (safe_rshift_func_uint8_t_u_s(l_74[6][2][0], 3)));
        (*l_78) = p_60;
        if ((**l_78))
            break;
    }
    return g_2;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_159[i][j], "g_159[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_166.f0, "g_166.f0", print_hash_value);
    transparent_crc(g_166.f1, "g_166.f1", print_hash_value);
    transparent_crc(g_166.f2, "g_166.f2", print_hash_value);
    transparent_crc(g_166.f3, "g_166.f3", print_hash_value);
    transparent_crc(g_166.f4, "g_166.f4", print_hash_value);
    transparent_crc(g_166.f5, "g_166.f5", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_331[i], "g_331[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_372[i][j], "g_372[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_786[i], "g_786[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_850, "g_850", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
