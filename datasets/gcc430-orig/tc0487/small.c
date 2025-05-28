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



static unsigned short g_10 = 65535UL;
static int g_15[1][6] = {{2L, 2L, 0x7E6AA165L, 2L, 2L, 0x7E6AA165L}};
static int g_44 = (-7L);
static unsigned g_50 = 0xA3A1BBDBL;
static int **g_94 = (void*)0;
static int *g_118 = (void*)0;
static int g_170[9][3] = {{1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}, {1L, 0x1B309466L, (-7L)}};
static unsigned char g_240[2] = {0UL, 0UL};
static unsigned g_262 = 7UL;
static int *g_341 = (void*)0;
static int g_352[9][6] = {{0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}, {0xC484FBF1L, (-7L), 0x6BD690EFL, 1L, 1L, (-8L)}};
static int g_385 = (-2L);
static int *g_390 = &g_44;
static int *g_460 = (void*)0;
static int *g_657 = &g_44;
static int *g_679[1] = {&g_170[5][0]};
static int **g_710 = (void*)0;
static unsigned g_814[1][7][9] = {{{1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}, {1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}, {1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}, {1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}, {1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}, {1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}, {1UL, 0xEEAA5F6CL, 0xEEAA5F6CL, 1UL, 0x1508CA08L, 0UL, 0x73AE3F42L, 0x5A960991L, 4UL}}};
static unsigned g_828 = 0x4AAC54FDL;
static unsigned g_839 = 4294967293UL;
static int *g_952 = &g_170[1][1];



static unsigned func_1(void);
static int * func_2(short p_3);
static short func_4(int * p_5, char p_6, short p_7);
static int * func_8(unsigned char p_9);
static unsigned char func_16(int p_17, int p_18);
static unsigned char func_25(int * p_26, int * p_27, char p_28, unsigned p_29, int * p_30);
static int * func_31(unsigned short p_32, unsigned p_33);
static short func_34(unsigned char p_35);
static int func_37(int * p_38, int p_39, int p_40, int * p_41);
static int * func_51(unsigned p_52, unsigned char p_53, int * p_54);
static unsigned func_1(void)
{
    const unsigned short l_13 = 9UL;
    int *l_14[6] = {&g_15[0][0], &g_15[0][0], (void*)0, &g_15[0][0], &g_15[0][0], (void*)0};
    char l_306 = 0x7EL;
    unsigned char l_360 = 0x16L;
    int **l_1002 = &g_118;
    int *l_1009 = &g_385;
    unsigned short l_1014 = 0x000AL;
    unsigned l_1015 = 18446744073709551615UL;
    unsigned l_1020 = 18446744073709551613UL;
    unsigned short l_1043 = 0xF854L;
    short l_1064 = 9L;
    int i;
    (*l_1002) = func_2(func_4(func_8((g_10 , ((safe_lshift_func_int8_t_s_u((((l_13 && (l_14[3] == &g_15[0][0])) >= func_16((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(0L, g_15[0][0])), (7L != (safe_sub_func_int8_t_s_s((func_25(func_31(((g_15[0][0] > (((func_34(g_15[0][0]) & g_15[0][0]) ^ g_262) > l_306)) , 65530UL), g_262), l_14[5], g_240[0], g_240[1], &g_15[0][2]) > g_15[0][0]), g_15[0][0]))))), l_360)) <= 0L), 6)) | g_240[0]))), g_828, g_839));
    (**l_1002) = 0L;
    for (g_10 = (-16); (g_10 <= 54); g_10++)
    {
        int l_1010 = 0xC6E987D8L;
        int *l_1011 = (void*)0;
        int *l_1039 = (void*)0;
        int *l_1040 = &g_15[0][4];
        int *l_1041 = &g_15[0][0];
        unsigned l_1042 = 0x343AE426L;
        int *l_1044 = &g_385;
        unsigned l_1061 = 0UL;
        (*l_1002) = l_1011;
        (*l_1002) = (g_15[0][0] , (*l_1002));
        (*l_1041) = func_37(l_1011, (*l_1040), (*g_657), l_1039);
        for (g_828 = 0; (g_828 <= 2); g_828 += 1)
        {
            int l_1047 = 0xD57F782FL;
            int i, j;
            l_1011 = l_1044;
            g_170[g_828][g_828] = ((safe_mod_func_int32_t_s_s(((g_170[5][0] && l_1047) & (safe_mod_func_int32_t_s_s((g_814[0][3][5] > func_37((*l_1002), (*l_1011), (*g_952), &l_1047)), (safe_lshift_func_uint8_t_u_s(g_170[5][0], g_839))))), 0x22C773ACL)) & 0x76L);
            (*l_1002) = &g_385;
            for (g_385 = 0; (g_385 <= 0); g_385 += 1)
            {
                int l_1060 = (-5L);
                char l_1070 = (-1L);
                int i, j;
                for (l_1043 = 0; (l_1043 <= 0); l_1043 += 1)
                {
                    int i, j;
                    if ((g_15[l_1043][(g_828 + 3)] && (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*g_657), (safe_add_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u(((*l_1009) ^ 0x977BL), ((l_1060 ^ ((*l_1040) >= ((g_170[5][0] >= (*l_1011)) ^ g_262))) || 0x93L))) <= l_1061) , g_385) | 1UL), (*g_952))))), g_170[5][0]))))
                    {
                        int i;
                        g_679[g_385] = (*l_1002);
                        (*g_952) = (*g_657);
                        (*g_952) = (safe_mul_func_int16_t_s_s((*l_1009), (!func_37(&g_15[l_1043][(g_828 + 3)], g_170[g_828][g_828], (*g_118), &g_170[5][0]))));
                    }
                    else
                    {
                        l_1064 = l_1047;
                        (*g_952) = g_170[g_828][g_828];
                    }
                    for (g_262 = 0; (g_262 < 29); ++g_262)
                    {
                        int ***l_1067 = &g_94;
                        (*l_1067) = &g_679[0];
                        if ((*g_657))
                            continue;
                    }
                }
                (*l_1041) = (((!g_15[g_385][(g_385 + 2)]) || (&g_170[g_828][g_828] != (*l_1002))) == ((*l_1041) , func_37((((safe_add_func_int32_t_s_s(((g_44 && (*g_657)) , (l_1070 , (safe_sub_func_uint32_t_u_u(g_352[0][5], 0xEB843FCDL)))), 0xB1013BCAL)) , 0L) , (void*)0), l_1047, (*g_952), (*l_1002))));
            }
        }
    }
    return g_828;
}







static int * func_2(short p_3)
{
    int *l_878 = &g_44;
    int l_907 = 0x91CB6D3FL;
    int *l_915 = &g_15[0][0];
    const int *l_972 = &g_15[0][0];
    int l_986[5][9] = {{0xCD07BD0CL, 0xCD07BD0CL, 0xA4934D44L, 0x446A1A71L, 1L, 0x446A1A71L, 0xA4934D44L, 0xCD07BD0CL, 0xCD07BD0CL}, {0xCD07BD0CL, 0xCD07BD0CL, 0xA4934D44L, 0x446A1A71L, 1L, 0x446A1A71L, 0xA4934D44L, 0xCD07BD0CL, 0xCD07BD0CL}, {0xCD07BD0CL, 0xCD07BD0CL, 0xA4934D44L, 0x446A1A71L, 1L, 0x446A1A71L, 0xA4934D44L, 0xCD07BD0CL, 0xCD07BD0CL}, {0xCD07BD0CL, 0xCD07BD0CL, 0xA4934D44L, 0x446A1A71L, 1L, 0x446A1A71L, 0xA4934D44L, 0xCD07BD0CL, 0xCD07BD0CL}, {0xCD07BD0CL, 0xCD07BD0CL, 0xA4934D44L, 0x446A1A71L, 1L, 0x446A1A71L, 0xA4934D44L, 0xCD07BD0CL, 0xCD07BD0CL}};
    int ***l_988 = &g_94;
    int l_998[9] = {(-6L), 0L, (-6L), 0L, (-6L), 0L, (-6L), 0L, (-6L)};
    char l_1001 = 0x31L;
    int i, j;
    for (g_839 = 0; (g_839 >= 50); g_839 = safe_add_func_uint32_t_u_u(g_839, 6))
    {
        int **l_877[5];
        const unsigned l_902 = 0xDEDA9BBAL;
        int i;
        for (i = 0; i < 5; i++)
            l_877[i] = &g_390;
        l_878 = (void*)0;
        for (p_3 = 0; (p_3 != (-7)); --p_3)
        {
            const unsigned l_886 = 18446744073709551615UL;
            for (g_828 = 0; (g_828 <= 0); g_828 += 1)
            {
                int *l_882[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_882[i] = &g_15[0][0];
                for (g_44 = 2; (g_44 >= 0); g_44 -= 1)
                {
                    int *l_883 = &g_170[5][0];
                    for (g_262 = 0; (g_262 <= 0); g_262 += 1)
                    {
                        int *l_881 = &g_385;
                        return l_881;
                    }
                    l_883 = l_882[0];
                    if ((*l_883))
                    {
                        int i, j;
                        g_15[g_828][(g_828 + 2)] = (*g_118);
                        g_170[g_44][g_44] = (safe_rshift_func_uint8_t_u_s(((!(l_886 ^ (safe_mod_func_int16_t_s_s((((g_352[3][1] || 0x1A9AL) ^ ((safe_mod_func_uint8_t_u_u((((void*)0 != &g_710) , p_3), g_10)) && p_3)) && ((g_15[g_828][(g_828 + 2)] == p_3) && (*l_883))), g_15[g_828][(g_828 + 2)])))) || p_3), 1));
                    }
                    else
                    {
                        int l_895 = 0xD4279B5DL;
                        unsigned l_898 = 0x9EE9397DL;
                        unsigned short l_899[6] = {0x11BFL, 0x11BFL, 0x82A6L, 0x11BFL, 0x11BFL, 0x82A6L};
                        int i;
                        (*g_118) = (-7L);
                        l_899[0] = ((1UL || (((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_3, l_895)), p_3)) , ((safe_rshift_func_uint16_t_u_u((g_50 != p_3), 13)) && g_10)) < (*g_118))) , l_898);
                    }
                    if (p_3)
                        break;
                }
                l_878 = &g_385;
                if (p_3)
                    break;
            }
            (*g_118) = (p_3 > (!(safe_rshift_func_int8_t_s_s(l_902, (safe_lshift_func_uint8_t_u_s(p_3, 5))))));
            l_907 = ((safe_add_func_int16_t_s_s(g_385, (l_886 != g_814[0][6][3]))) >= 0x59D9DB06L);
        }
        if (p_3)
            break;
    }
    for (g_385 = 0; (g_385 <= (-2)); --g_385)
    {
        const int *l_912 = &g_170[4][1];
        char l_913 = 0x4BL;
        int *l_914 = &g_170[7][2];
        unsigned short l_941 = 0x8CC1L;
        int *l_987 = &l_907;
        unsigned char l_991 = 0x91L;
        int ***l_995[8][7] = {{&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}, {&g_94, &g_710, &g_94, &g_710, &g_94, &g_94, &g_710}};
        int i, j;
        if ((((g_15[0][0] , (void*)0) != l_915) < g_262))
        {
            int *l_920 = (void*)0;
            int *l_938 = &l_907;
            char l_954 = 0L;
            unsigned l_968 = 0UL;
            int ** const * const l_971 = &g_94;
            for (g_262 = 0; (g_262 <= 53); g_262++)
            {
                int *l_921[4][10][3] = {{{&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}}, {{&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}}, {{&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}}, {{&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}, {&g_385, &g_170[5][0], &g_170[5][0]}}};
                const int *l_923 = &l_907;
                int ***l_932 = &g_94;
                int i, j, k;
            }
        }
        else
        {
            unsigned l_992 = 0UL;
            if (((func_4(&l_907, (*l_987), (&g_94 == l_988)) < (&l_987 == ((((*l_915) || (safe_rshift_func_int8_t_s_u(l_991, 3))) & g_240[1]) , (void*)0))) != l_992))
            {
                if (p_3)
                    break;
                for (l_913 = 0; (l_913 >= 0); l_913 -= 1)
                {
                    (*g_657) = (safe_div_func_int32_t_s_s(0x52F5FC75L, (~0xD87A3FAAL)));
                }
            }
            else
            {
                return l_914;
            }
        }
        (*g_952) = (p_3 || (0x8EL | (l_995[0][2] == ((safe_mod_func_uint8_t_u_u((p_3 , ((((*g_952) || func_4((l_998[2] , &l_907), (safe_rshift_func_uint8_t_u_s(l_1001, (g_50 < (*l_915)))), p_3)) , 0x69F3E26FL) == p_3)), p_3)) , (void*)0))));
    }
    return &g_15[0][0];
}







static short func_4(int * p_5, char p_6, short p_7)
{
    unsigned char l_861 = 1UL;
    int l_862[7][6][6] = {{{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}, {{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}, {{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}, {{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}, {{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}, {{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}, {{0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}, {0x12F8E67BL, (-8L), 0L, 1L, (-3L), 0x65BD2EE3L}}};
    int **l_871 = (void*)0;
    int *l_874 = &g_44;
    int i, j, k;
    for (g_50 = 8; (g_50 == 3); g_50--)
    {
        for (p_7 = 0; (p_7 >= 0); p_7 -= 1)
        {
            int **l_858 = (void*)0;
            int **l_859[7][2][1] = {{{&g_657}, {&g_657}}, {{&g_657}, {&g_657}}, {{&g_657}, {&g_657}}, {{&g_657}, {&g_657}}, {{&g_657}, {&g_657}}, {{&g_657}, {&g_657}}, {{&g_657}, {&g_657}}};
            int i, j, k;
            p_5 = (((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_u((((void*)0 != &p_5) | (g_240[p_7] <= 0xA747L)), g_240[p_7])))) == (safe_sub_func_int16_t_s_s(g_240[p_7], p_6))) , p_5);
            for (g_828 = 0; (g_828 <= 0); g_828 += 1)
            {
                int *l_860[6][10][4] = {{{(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}}, {{(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}}, {{(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}}, {{(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}}, {{(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}}, {{(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}, {(void*)0, &g_44, (void*)0, (void*)0}}};
                int i, j, k;
                g_679[p_7] = l_860[1][7][0];
                return g_814[g_828][(g_828 + 1)][(p_7 + 4)];
            }
            for (g_839 = 0; (g_839 <= 1); g_839 += 1)
            {
                int i, j, k;
                p_5 = func_31(g_814[p_7][(g_839 + 5)][(g_839 + 4)], g_814[p_7][(g_839 + 5)][(g_839 + 4)]);
            }
        }
    }
    l_862[6][1][5] = l_861;
    (*l_874) = ((((safe_mod_func_int16_t_s_s((0xC931L < ((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(251UL, (safe_lshift_func_int16_t_s_s((((+(l_871 != (void*)0)) , l_874) != (void*)0), 11)))), p_7)) , g_170[3][2])), (-6L))) | (*l_874)) > 0x82L) , 0x5E870BD0L);
    return (*l_874);
}







static int * func_8(unsigned char p_9)
{
    int *l_546[9][10] = {{(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}, {(void*)0, &g_385, &g_44, &g_170[2][2], &g_170[6][0], &g_170[5][0], &g_170[5][0], &g_385, &g_385, &g_170[5][0]}};
    int ***l_547 = &g_94;
    char l_548 = 0x37L;
    const unsigned short l_573 = 0xFBE0L;
    unsigned l_591 = 18446744073709551611UL;
    unsigned l_592 = 0x9025A241L;
    int l_605 = 0xAADA7C75L;
    char l_705[7][3] = {{0xBAL, 3L, 0xBAL}, {0xBAL, 3L, 0xBAL}, {0xBAL, 3L, 0xBAL}, {0xBAL, 3L, 0xBAL}, {0xBAL, 3L, 0xBAL}, {0xBAL, 3L, 0xBAL}, {0xBAL, 3L, 0xBAL}};
    int l_751[5][4][5] = {{{0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}}, {{0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}}, {{0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}}, {{0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}}, {{0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}, {0x4512847CL, 0xAB09CA75L, 0x535677E8L, (-1L), (-1L)}}};
    int *l_768 = &g_170[7][2];
    char l_829 = 0x34L;
    int *l_850[6][4] = {{&g_385, &g_385, &g_15[0][0], &g_385}, {&g_385, &g_385, &g_15[0][0], &g_385}, {&g_385, &g_385, &g_15[0][0], &g_385}, {&g_385, &g_385, &g_15[0][0], &g_385}, {&g_385, &g_385, &g_15[0][0], &g_385}, {&g_385, &g_385, &g_15[0][0], &g_385}};
    int i, j, k;
    (*g_118) = (safe_add_func_int32_t_s_s(p_9, 0xA4EDE9A0L));
    if ((safe_add_func_int32_t_s_s(0L, (safe_div_func_uint32_t_u_u((0UL & (p_9 <= g_15[0][0])), func_37(l_546[3][1], (((((p_9 , (((void*)0 != l_546[7][2]) , l_547)) != &g_94) >= g_10) , g_15[0][0]) > g_385), l_548, l_546[4][5]))))))
    {
        int *l_549 = &g_15[0][0];
        int l_580 = (-1L);
        l_549 = (void*)0;
        for (g_262 = (-8); (g_262 <= 38); g_262++)
        {
            unsigned l_554 = 0x867232F6L;
            int *l_555 = (void*)0;
            int **l_581 = &l_555;
            if ((func_37(&g_170[5][0], (func_34((safe_mod_func_int8_t_s_s(g_240[0], (-3L)))) >= p_9), ((l_554 != (p_9 < l_554)) ^ ((((((void*)0 == &g_341) , (-5L)) ^ 0xE9EFB069L) , p_9) && 0xAD38EBAAL)), l_555) | g_262))
            {
                int *l_556 = &g_170[7][0];
                int **l_557 = &g_390;
                (*l_557) = l_556;
                for (p_9 = 0; p_9 < 1; p_9 += 1)
                {
                    for (g_385 = 0; g_385 < 6; g_385 += 1)
                    {
                        g_15[p_9][g_385] = (-3L);
                    }
                }
            }
            else
            {
                int *l_567 = &g_15[0][0];
                for (g_50 = 0; (g_50 <= 23); ++g_50)
                {
                    int *l_564 = &g_170[5][0];
                    int **l_568 = &l_567;
                    for (g_10 = 0; (g_10 != 55); g_10++)
                    {
                        int *l_562[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int **l_563 = &l_555;
                        int i;
                        (*l_563) = l_562[2];
                        (*l_547) = &g_390;
                        (*g_94) = l_564;
                        (**g_94) = (!(g_15[0][0] <= (safe_lshift_func_int8_t_s_s(p_9, 3))));
                    }
                    (*l_568) = func_51(p_9, p_9, l_567);
                    for (g_44 = 8; (g_44 >= 0); g_44 -= 1)
                    {
                        int i, j;
                        l_546[g_44][g_44] = l_546[g_44][(g_44 + 1)];
                        g_460 = &g_170[5][0];
                    }
                    (*l_564) = 0xBA1A1864L;
                }
                return &g_15[0][0];
            }
            (*g_118) = ((safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_573 == (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((&l_555 == (g_15[0][0] , &l_555)), (((p_9 >= g_385) ^ (safe_mod_func_uint8_t_u_u((((void*)0 == l_555) == (g_44 | g_240[1])), g_262))) < l_580))) && (*g_118)), 0x916667ECL))), p_9)), p_9)) , p_9);
            (*l_581) = (void*)0;
        }
        (*g_118) = (g_352[1][0] > (g_170[5][0] , g_44));
    }
    else
    {
        int *l_590[1][10][5] = {{{&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}, {&g_170[5][0], &g_170[5][0], &g_15[0][0], &g_170[5][0], &g_170[5][0]}}};
        int **l_593 = &g_341;
        unsigned char l_647 = 0UL;
        int *l_649 = &g_385;
        unsigned short l_688 = 0x2874L;
        int l_689 = 0xAE4C70BFL;
        char l_706 = 0x01L;
        int *l_712 = (void*)0;
        int *l_718 = &g_15[0][0];
        int *l_743 = &g_170[5][0];
        unsigned char l_749 = 9UL;
        int i, j, k;
        (*l_593) = l_590[0][5][2];
        for (g_50 = 0; (g_50 != 36); g_50++)
        {
            int *l_600 = &g_44;
            (*g_118) = (safe_add_func_int32_t_s_s(p_9, ((safe_rshift_func_uint16_t_u_u((l_600 == (void*)0), p_9)) | g_50)));
            if ((*l_600))
                continue;
            (*l_593) = (*l_593);
        }
        if (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((p_9 , (void*)0) == l_547), ((0xA53CL == (p_9 < (((((g_15[0][0] != (((((*l_547) == ((((&g_118 != (void*)0) != 0xEBL) ^ l_605) , &g_118)) == g_15[0][3]) , g_44) && 0x8B44D43DL)) , p_9) || 0xB3L) , g_240[1]) , g_352[3][1]))) != g_170[8][1]))), g_44)) != p_9))
        {
            const short l_611 = 7L;
            int *l_612 = &g_44;
            int *l_656 = &g_44;
            (*l_612) = (safe_unary_minus_func_uint32_t_u((((safe_rshift_func_int16_t_s_s(l_611, 8)) && (func_25(l_612, l_612, ((((p_9 | ((func_34(func_34(g_262)) == g_352[4][2]) | g_352[3][1])) || 0x4C92L) ^ p_9) , (*l_612)), p_9, &g_15[0][0]) >= g_15[0][0])) >= 0xDFL)));
            for (l_548 = 0; (l_548 < (-8)); l_548--)
            {
                (*l_612) = p_9;
            }
            if (p_9)
            {
                short l_628 = 0x6F69L;
                int l_629 = 0x4B922404L;
                l_629 = (2L | (safe_lshift_func_int8_t_s_u(1L, (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_9, (g_170[5][0] & (safe_sub_func_int32_t_s_s(p_9, (safe_rshift_func_int8_t_s_u((*l_612), ((*l_612) > ((g_385 | ((((0xAE8A7FCEL != (*g_341)) , l_628) >= 0x3B1CL) & 0x0AL)) , g_15[0][0]))))))))), g_240[1])))), g_170[5][0])))));
                (*l_593) = func_31((safe_div_func_uint32_t_u_u((0xA3984394L | 0xD48EB54AL), (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xA3E0L, g_352[3][1])), (safe_rshift_func_int16_t_s_s(1L, 4)))), p_9)))), ((((safe_div_func_int16_t_s_s(((((void*)0 != &l_612) >= (func_37((*l_593), p_9, (**l_593), &l_629) , g_10)) <= (-1L)), 0x830FL)) , p_9) | 0x91L) >= g_170[5][0]));
            }
            else
            {
                int *l_642[9] = {&g_44, &g_44, &g_15[0][0], &g_44, &g_44, &g_15[0][0], &g_44, &g_44, &g_15[0][0]};
                unsigned char l_648 = 0xEFL;
                int i;
                if ((l_642[5] != ((0x66DDL != ((safe_add_func_uint32_t_u_u(g_10, p_9)) < (safe_rshift_func_int8_t_s_s(func_37(func_31(p_9, (*l_612)), l_647, ((l_648 | p_9) & g_15[0][0]), l_649), 4)))) , &g_15[0][0])))
                {
                    int *l_650 = &g_15[0][0];
                    (*l_649) = func_37(&l_605, p_9, p_9, (((7UL >= func_37(l_650, p_9, (safe_lshift_func_uint8_t_u_u(((g_50 != (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_s(p_9, 15))))) < (p_9 , g_240[1])), 7)), l_656)) > p_9) , &g_170[5][2]));
                    (*l_593) = g_657;
                }
                else
                {
                    unsigned char l_670 = 0xFDL;
                    for (l_648 = 0; (l_648 < 7); l_648 = safe_add_func_uint16_t_u_u(l_648, 9))
                    {
                        short l_668 = 0x4E0FL;
                        int *l_669 = &g_170[5][0];
                        (*g_657) = (0x0393L ^ (((l_642[8] != l_642[5]) == (safe_sub_func_uint32_t_u_u(((((!(safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(p_9, 0xC771L)), (((safe_sub_func_int32_t_s_s((func_25(l_642[5], &g_170[3][1], ((&g_170[5][0] != (void*)0) , p_9), l_668, l_669) , p_9), p_9)) ^ 4294967295UL) != l_670)))) , g_262) ^ (-2L)) , 0xDAAC7AD5L), l_670))) , 0x995FL));
                        return (*l_593);
                    }
                }
            }
            return l_612;
        }
        else
        {
            int *l_675 = &g_44;
            unsigned short l_690 = 65533UL;
            int ** const *l_704[1];
            int **l_717 = &l_546[2][8];
            unsigned l_733[2][10] = {{7UL, 7UL, 0xD0516DBFL, 0x580E12E6L, 0x9F3DE442L, 0x580E12E6L, 0xD0516DBFL, 7UL, 7UL, 0xD0516DBFL}, {7UL, 7UL, 0xD0516DBFL, 0x580E12E6L, 0x9F3DE442L, 0x580E12E6L, 0xD0516DBFL, 7UL, 7UL, 0xD0516DBFL}};
            unsigned short l_752[5] = {0xA03BL, 65535UL, 0xA03BL, 65535UL, 0xA03BL};
            int i, j;
            for (i = 0; i < 1; i++)
                l_704[i] = &g_94;
            (*l_649) = p_9;
            if ((((g_15[0][4] || 0x01L) , &l_675) == &g_118))
            {
                int *l_691[8] = {(void*)0, &g_385, (void*)0, &g_385, (void*)0, &g_385, (void*)0, &g_385};
                int i;
                if (p_9)
                {
                    (**l_593) = (0x3AL ^ (safe_sub_func_uint16_t_u_u((&g_679[0] != ((safe_add_func_int8_t_s_s((0x587CL < (p_9 < (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_15[0][0] , ((void*)0 != l_704[0])), func_34(g_15[0][0]))), g_352[0][0])) & 0x15E1L), 0x5B46L)), 4)))), (-3L))) , &g_341)), 65533UL)));
                }
                else
                {
                    (*g_341) = p_9;
                    (*l_649) = (*g_657);
                }
                (*l_593) = (*l_593);
            }
            else
            {
                (*l_547) = &g_657;
            }
            if (l_705[1][2])
            {
                int *l_711[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_711[i] = &g_170[5][0];
                if (l_706)
                {
                    int *l_707[1][4][5] = {{{(void*)0, (void*)0, &g_170[5][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_170[5][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_170[5][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_170[5][0], (void*)0, (void*)0}}};
                    int i, j, k;
                    l_707[0][0][3] = l_707[0][1][0];
                    (*g_341) = ((0xC5F4L <= p_9) && (safe_lshift_func_int16_t_s_s(0x58E4L, 12)));
                }
                else
                {
                    (*l_547) = g_710;
                    return l_711[2];
                }
                (*l_593) = func_51((*l_675), (p_9 & (4294967289UL > (0x08BB703FL < ((void*)0 == &l_593)))), &l_605);
                (*l_593) = l_712;
            }
            else
            {
                for (l_592 = (-20); (l_592 >= 47); ++l_592)
                {
                    for (l_548 = 0; (l_548 < 17); l_548 = safe_add_func_int32_t_s_s(l_548, 5))
                    {
                        (*l_547) = l_717;
                    }
                }
            }
            if (((p_9 ^ 1L) & 0x95A0L))
            {
                int ***l_725 = (void*)0;
                (*l_649) = ((0x0BL & (p_9 >= ((g_170[5][0] >= 0UL) , ((safe_add_func_uint16_t_u_u((p_9 ^ (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(1L, (g_44 ^ ((l_725 != (void*)0) , 1UL)))), p_9))), 65528UL)) <= (-3L))))) > (-3L));
            }
            else
            {
                int *l_734 = &g_44;
                char l_735 = 0x5CL;
                int ***l_736 = (void*)0;
                unsigned l_744 = 0xEA85677CL;
                unsigned l_750 = 0xC723CC68L;
                for (g_50 = 0; (g_50 > 38); ++g_50)
                {
                    int *l_737[4][6] = {{&g_170[5][0], &g_15[0][2], &g_44, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[5][0], &g_15[0][2], &g_44, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[5][0], &g_15[0][2], &g_44, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[5][0], &g_15[0][2], &g_44, &g_170[5][0], &g_170[5][0], &g_44}};
                    int i, j;
                    for (g_385 = 0; (g_385 <= (-22)); g_385 = safe_sub_func_int8_t_s_s(g_385, 1))
                    {
                        unsigned l_732 = 4294967290UL;
                        l_732 = (safe_add_func_int16_t_s_s(0x0D63L, p_9));
                    }
                    (*l_717) = ((g_352[3][1] & l_733[0][0]) , func_51(((p_9 == g_50) >= 65530UL), g_352[2][4], l_734));
                    if (l_735)
                    {
                        (*l_649) = (*l_734);
                        (*l_734) = (*g_118);
                        (*g_657) = ((p_9 , l_736) != &g_710);
                        (*l_593) = l_737[1][0];
                    }
                    else
                    {
                        int l_738 = 0L;
                        if (p_9)
                            break;
                        l_738 = (*g_118);
                    }
                    (*l_734) = ((0x7878L && 1L) , p_9);
                }
                (*l_734) = ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((g_240[1] == 5L) == (func_37((((((func_37(l_743, l_744, p_9, ((p_9 < (safe_rshift_func_int16_t_s_s(g_240[1], (0x33E6C9DCL || 0L)))) , (void*)0)) , p_9) | l_749) && p_9) <= l_750) , &l_605), l_751[3][3][3], l_752[4], (*l_593)) , p_9)), g_15[0][0])), 0x29F4D792L)) & 0x9CEAL);
            }
        }
    }
    for (g_262 = 0; (g_262 <= 3); g_262 += 1)
    {
        unsigned short l_757 = 5UL;
        int l_761 = 3L;
        int ***l_769[6];
        int l_815 = 0xCC92E72AL;
        int i;
        for (i = 0; i < 6; i++)
            l_769[i] = &g_94;
        if ((safe_rshift_func_int16_t_s_u((l_757 < (g_385 == 0xE219L)), 11)))
        {
            int *l_758 = &g_385;
            l_758 = l_758;
            for (l_591 = 0; (l_591 <= 3); l_591 += 1)
            {
                return l_758;
            }
        }
        else
        {
            if (p_9)
                break;
            if (p_9)
                continue;
        }
        l_761 = (safe_rshift_func_uint16_t_u_u((func_34(g_170[4][2]) > (g_240[1] < p_9)), p_9));
        if (l_761)
            continue;
        for (l_548 = 3; (l_548 >= 0); l_548 -= 1)
        {
            int *l_765 = &l_761;
            int *l_767 = &g_170[5][0];
            int l_837 = (-1L);
            int *l_838 = &g_385;
            if (p_9)
            {
                unsigned char l_762 = 1UL;
                if (l_762)
                    break;
                if ((*g_118))
                    continue;
            }
            else
            {
                int *l_764 = &g_385;
                for (p_9 = 0; (p_9 <= 1); p_9 += 1)
                {
                    int *l_766 = &g_385;
                    for (g_10 = 0; (g_10 <= 0); g_10 += 1)
                    {
                        int **l_763 = &g_657;
                        int i, j;
                        (*g_657) = 0xC517E267L;
                        (*l_763) = &g_15[g_10][g_262];
                        l_764 = (*l_763);
                    }
                    l_766 = l_765;
                }
                return l_767;
            }
            l_768 = &l_761;
            (*l_765) = ((void*)0 != l_769[3]);
            for (g_44 = 3; (g_44 >= 0); g_44 -= 1)
            {
                unsigned l_786 = 1UL;
                int **l_797 = &g_118;
            }
        }
    }
    return l_850[3][1];
}







static unsigned char func_16(int p_17, int p_18)
{
    int *l_361 = &g_170[5][0];
    char l_371 = (-7L);
    int *l_372[9][9][3] = {{{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}, {{&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}, {&g_15[0][0], &g_44, (void*)0}}};
    int **l_394 = &g_390;
    int *l_422 = &g_170[5][0];
    unsigned char l_424[1];
    int *l_436 = &g_170[7][0];
    int l_442 = 0xA0BAE5B2L;
    int *l_443 = &g_15[0][0];
    int *l_448 = (void*)0;
    char l_458[5][7] = {{0xD7L, 0x2BL, 0x6AL, 0x2BL, 0xD7L, 0x53L, 0xD7L}, {0xD7L, 0x2BL, 0x6AL, 0x2BL, 0xD7L, 0x53L, 0xD7L}, {0xD7L, 0x2BL, 0x6AL, 0x2BL, 0xD7L, 0x53L, 0xD7L}, {0xD7L, 0x2BL, 0x6AL, 0x2BL, 0xD7L, 0x53L, 0xD7L}, {0xD7L, 0x2BL, 0x6AL, 0x2BL, 0xD7L, 0x53L, 0xD7L}};
    short l_463 = 0L;
    char l_466[8] = {0L, 3L, 0L, 3L, 0L, 3L, 0L, 3L};
    int ***l_493[6][2];
    int **l_494 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_424[i] = 0xB0L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_493[i][j] = (void*)0;
    }
    if ((((&g_341 == (void*)0) , ((g_352[3][1] || ((((~func_25(l_361, l_361, (p_18 >= ((safe_mod_func_uint8_t_u_u((*l_361), (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_u((*l_361), g_15[0][0])) && g_262))) , 1UL), p_18)))) > 0x4429L)), l_371, l_372[8][6][2])) == g_15[0][3]) , (-1L)) , 0L)) == 0UL)) <= 255UL))
    {
        int *l_373 = &g_170[0][1];
        l_373 = (void*)0;
        for (g_10 = 0; (g_10 <= 0); g_10 += 1)
        {
            int *l_374 = &g_170[5][0];
            unsigned char l_378 = 253UL;
            int *l_383 = &g_44;
            for (g_262 = 0; (g_262 <= 0); g_262 += 1)
            {
                int **l_402 = &l_374;
                int i, j;
                (*l_361) = g_15[g_10][(g_10 + 4)];
                for (g_44 = 0; (g_44 <= 5); g_44 += 1)
                {
                    int **l_375 = &g_341;
                    int l_384 = 0xB8AE00F6L;
                    (*l_375) = l_374;
                    (*l_375) = l_373;
                    (*g_118) = p_18;
                    (*g_118) = (safe_rshift_func_int8_t_s_u(((l_378 == (g_170[5][0] & (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(((p_17 <= (((p_17 , 65534UL) == ((((*l_375) == ((g_240[1] & p_17) , l_383)) == g_170[5][0]) <= l_384)) != g_385)) || p_18), 0)) || p_17) | 0UL), 1)))) <= 7UL), 3));
                }
                if ((safe_sub_func_uint8_t_u_u(((((((p_17 , (p_17 <= (((safe_sub_func_uint16_t_u_u((+g_352[0][0]), g_44)) < g_15[0][5]) || (func_37(l_373, p_17, p_17, &g_15[g_10][(g_10 + 4)]) , (*l_374))))) >= g_385) >= g_352[8][0]) || g_15[g_10][(g_10 + 4)]) , l_373) != (void*)0), 3UL)))
                {
                    int **l_391 = &l_372[6][7][1];
                    g_390 = l_383;
                    (*l_391) = l_374;
                }
                else
                {
                    l_373 = &g_15[g_10][(g_10 + 4)];
                }
                for (l_378 = 0; (l_378 <= 5); l_378 += 1)
                {
                    int *l_401 = &g_15[g_10][(g_10 + 4)];
                    if (g_15[g_10][(g_10 + 4)])
                    {
                        (*l_361) = ((&l_383 != &l_383) > 255UL);
                        (*l_361) = (-1L);
                    }
                    else
                    {
                        int **l_392 = (void*)0;
                        int **l_393 = &l_372[6][6][1];
                        (*l_393) = &p_18;
                        l_394 = &g_390;
                    }
                    (*l_374) = (safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((g_170[5][0] , p_18), 246UL)) < ((safe_mod_func_uint32_t_u_u((((p_18 , (((((func_37(l_373, p_18, g_15[g_10][(g_10 + 4)], l_401) , &p_18) == (void*)0) , 2L) , &l_372[8][6][2]) == l_402)) && p_17) != g_50), p_17)) , 0UL)), g_352[6][2]));
                }
            }
            if (p_18)
                break;
            (*l_394) = &g_44;
            for (g_385 = 0; (g_385 <= 5); g_385 += 1)
            {
                int l_405 = 1L;
                int *l_412 = &g_170[5][0];
                if (p_17)
                    break;
                (*g_118) = ((safe_lshift_func_uint16_t_u_s(l_405, 7)) , (g_50 && func_37((func_37(&g_15[0][0], ((safe_add_func_int8_t_s_s(g_15[0][4], (g_170[7][2] <= ((((safe_lshift_func_int16_t_s_s((((void*)0 == &g_94) == (((&g_94 == ((safe_rshift_func_int16_t_s_u((((void*)0 != &p_18) & p_18), 15)) , (void*)0)) & g_170[7][1]) && (*g_118))), 4)) > (*l_383)) <= (*l_374)) , l_405)))) | p_17), (*g_118), l_373) , (void*)0), (*g_118), p_18, l_412)));
            }
        }
        (*l_394) = l_373;
    }
    else
    {
        unsigned char l_417 = 255UL;
        unsigned l_423 = 18446744073709551615UL;
        int ***l_441[5][4];
        short l_471 = 0xA2AEL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_441[i][j] = &l_394;
        }
        (*g_341) = (safe_add_func_uint8_t_u_u((!(safe_sub_func_int16_t_s_s((((void*)0 == (*l_394)) > (((g_352[8][5] && (g_352[7][1] > l_417)) != (((((safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(func_37((*l_394), ((g_352[3][1] || (~(*l_361))) | func_37(l_422, p_17, l_417, (*l_394))), p_17, (*l_394)), l_423)) == l_424[0]) <= 0x6A9D2491L), l_423)) >= g_240[1]) <= 0x80L) , g_240[1]) <= 65527UL)) | 0UL)), l_423))), 0x28L));
        if (((p_17 & ((&g_170[2][0] == ((*l_361) , ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((*l_361))), (((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(func_37(l_436, (safe_add_func_uint8_t_u_u(((((((safe_sub_func_int16_t_s_s(p_17, (((&l_394 == l_441[2][2]) , 5UL) || p_18))) <= 0L) , l_442) & (*l_422)) != p_18) >= g_240[0]), p_18)), p_17, (*l_394)), p_17)), p_17)) & 0x11L) , g_170[1][0]))) | (-5L)), (*l_436))) , p_17), (*l_361))) , (void*)0))) , p_17)) , p_18))
        {
            if ((*g_341))
            {
                char l_447 = (-8L);
                (*l_394) = l_443;
                for (p_17 = 12; (p_17 != (-27)); --p_17)
                {
                    int l_446 = 0x5949661BL;
                }
                for (g_262 = 0; (g_262 <= 22); g_262 = safe_add_func_uint32_t_u_u(g_262, 7))
                {
                    unsigned l_459 = 0x48542CEAL;
                    int *l_461 = (void*)0;
                    const short l_462 = 1L;
                    l_461 = (func_37(&g_170[1][0], ((((~((g_352[3][1] ^ (safe_unary_minus_func_uint8_t_u((0x6AL > (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((((l_458[4][1] >= (0x63L || func_37(&g_385, l_447, l_447, l_461))) <= g_15[0][3]) != l_462), 5)), g_10)), p_17)) || (*l_436)) , p_18))))) > 0xC0A3L)) , g_240[1]) != (-2L)) || p_17), l_447, &g_15[0][0]) , &p_18);
                }
            }
            else
            {
                return g_10;
            }
        }
        else
        {
            unsigned l_464 = 0x489D9351L;
            int *l_469 = &g_385;
            if (l_463)
            {
                int *l_465[3][8][7] = {{{&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}}, {{&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}}, {{&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}, {&g_15[0][0], &g_170[5][0], &g_170[5][2], &g_15[0][0], &l_442, &g_170[5][2], &l_442}}};
                int i, j, k;
                (**l_394) = func_37(&g_44, l_464, p_17, func_31(((l_465[0][7][4] != l_465[0][7][4]) & (p_18 , (l_466[6] || (((safe_lshift_func_int8_t_s_s(((0x7BL && ((((void*)0 == l_469) , (-3L)) , g_44)) > g_352[1][1]), p_17)) & g_240[1]) <= g_352[3][1])))), p_18));
                l_465[1][0][0] = l_465[2][2][6];
            }
            else
            {
                int *l_470 = &g_170[5][0];
                g_118 = l_470;
            }
            (*l_443) = ((((0xF9L || func_37(l_469, p_18, (*l_469), l_469)) <= l_471) , (((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x6BL, (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_170[5][0], p_17)), (*l_469))))), p_18)), p_18)))), 0)) ^ 1UL) > g_10)) , p_18);
            (*l_443) = (-3L);
            (*l_469) = (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((((*l_436) , p_18) ^ ((safe_sub_func_int32_t_s_s(func_37(func_51((((p_17 ^ (*g_390)) , 4294967286UL) , ((safe_mod_func_int32_t_s_s(func_37(&p_18, (*g_390), (*g_341), l_469), (*g_118))) && (*l_469))), (*l_443), &g_15[0][1]), (*l_469), (*l_469), l_469), 0xCE00FCC7L)) == p_17)), p_18)), p_18));
        }
    }
    (*l_394) = &p_18;
    l_494 = &g_341;
    for (g_44 = (-25); (g_44 >= 5); g_44 = safe_add_func_int8_t_s_s(g_44, 4))
    {
        short l_499 = 0x6280L;
        int *l_530[3][1][10] = {{{&g_170[5][0], (void*)0, &g_15[0][0], (void*)0, &g_170[5][0], &g_15[0][0], &g_170[5][0], (void*)0, &g_15[0][0], (void*)0}}, {{&g_170[5][0], (void*)0, &g_15[0][0], (void*)0, &g_170[5][0], &g_15[0][0], &g_170[5][0], (void*)0, &g_15[0][0], (void*)0}}, {{&g_170[5][0], (void*)0, &g_15[0][0], (void*)0, &g_170[5][0], &g_15[0][0], &g_170[5][0], (void*)0, &g_15[0][0], (void*)0}}};
        int i, j, k;
        for (g_50 = 0; (g_50 > 24); g_50++)
        {
            int *l_501 = (void*)0;
            unsigned char l_515 = 0xCFL;
            if (l_499)
            {
                unsigned l_500 = 0x723A6A72L;
                (*g_390) = l_500;
                (*l_494) = l_501;
            }
            else
            {
                unsigned char l_502 = 0x4BL;
                (**l_394) = ((0x5D4280DEL || ((0x5EEF7783L < 0x3AD6EFB7L) , 1L)) < l_502);
                (*l_422) = ((((safe_div_func_uint8_t_u_u(((**l_394) , (0xE453L == ((g_170[3][1] | (safe_sub_func_uint16_t_u_u(g_15[0][0], (((safe_lshift_func_uint8_t_u_s(p_18, 6)) >= (safe_sub_func_uint16_t_u_u(g_15[0][1], (safe_div_func_int32_t_s_s((((safe_add_func_int32_t_s_s(l_502, 1UL)) != (((l_499 > l_515) , 0xAC66E3EDL) && l_499)) || g_44), p_18))))) , g_44)))) > 249UL))), g_15[0][0])) >= p_18) || 255UL) & 0x04CAEC73L);
                (*g_390) = l_502;
                (*g_118) = p_18;
            }
            (*l_494) = &p_18;
            (*l_361) = p_17;
        }
        (*g_390) = p_17;
        for (l_499 = 2; (l_499 <= (-23)); l_499 = safe_sub_func_int16_t_s_s(l_499, 8))
        {
            unsigned char l_527[2][7];
            int **l_531 = &g_390;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_527[i][j] = 0x87L;
            }
            for (g_10 = 27; (g_10 < 37); g_10++)
            {
                unsigned short l_522[3][9] = {{0x4CA3L, 0x4CA3L, 0x8E1AL, 1UL, 65535UL, 1UL, 0x8E1AL, 0x4CA3L, 0x4CA3L}, {0x4CA3L, 0x4CA3L, 0x8E1AL, 1UL, 65535UL, 1UL, 0x8E1AL, 0x4CA3L, 0x4CA3L}, {0x4CA3L, 0x4CA3L, 0x8E1AL, 1UL, 65535UL, 1UL, 0x8E1AL, 0x4CA3L, 0x4CA3L}};
                int *l_537 = &g_15[0][0];
                int i, j;
                if ((((g_50 || (((&g_460 == (void*)0) ^ (safe_mod_func_int16_t_s_s(((4294967287UL >= l_522[2][2]) , (safe_lshift_func_uint8_t_u_s(((l_499 > p_17) != (safe_lshift_func_uint8_t_u_s(l_522[2][2], (((!l_499) | g_385) , p_18)))), 0))), 0xD6E1L))) && g_44)) , l_527[1][2]) && l_522[0][1]))
                {
                    for (p_18 = (-12); (p_18 > (-17)); p_18 = safe_sub_func_int16_t_s_s(p_18, 9))
                    {
                        l_530[1][0][2] = &p_18;
                    }
                }
                else
                {
                    const char l_534[1][4] = {{(-3L), 0L, (-3L), 0L}};
                    int i, j;
                    (*g_118) = (&g_390 == l_531);
                    if ((safe_sub_func_int32_t_s_s(3L, (l_534[0][1] == l_522[2][2]))))
                    {
                        unsigned l_538[10] = {0xE4B19618L, 0xE4B19618L, 4294967293UL, 0xE4B19618L, 0xE4B19618L, 4294967293UL, 0xE4B19618L, 0xE4B19618L, 4294967293UL, 0xE4B19618L};
                        int i;
                        (*l_531) = &p_18;
                        (*g_118) = (safe_div_func_int16_t_s_s((((((g_170[2][1] , (g_170[5][2] >= (g_15[0][1] & p_18))) , (*l_494)) == l_537) , (g_15[0][0] | 0xB0L)) , l_538[0]), g_170[5][0]));
                    }
                    else
                    {
                        int * const *l_539 = &l_361;
                        (*l_422) = (l_539 != l_531);
                        if (p_18)
                            continue;
                    }
                }
            }
        }
        (*l_494) = &p_18;
    }
    return p_18;
}







static unsigned char func_25(int * p_26, int * p_27, char p_28, unsigned p_29, int * p_30)
{
    unsigned char l_349 = 0x25L;
    short l_350 = 1L;
    int *l_351[10][9][2] = {{{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}, {{&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}, {&g_44, &g_170[0][0]}}};
    int **l_358 = (void*)0;
    int **l_359[1][9][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
                l_359[i][j][k] = (void*)0;
        }
    }
    g_352[3][1] = func_34((l_349 != l_350));
    p_26 = l_351[4][5][1];
    p_27 = func_31(((func_37(p_30, (*g_341), (*g_341), &g_170[3][1]) < g_170[6][1]) , 65535UL), p_28);
    return g_10;
}







static int * func_31(unsigned short p_32, unsigned p_33)
{
    int **l_321[3];
    int *l_348[7] = {(void*)0, (void*)0, &g_44, (void*)0, (void*)0, &g_44, (void*)0};
    int i;
    for (i = 0; i < 3; i++)
        l_321[i] = &g_118;
    if (p_33)
    {
        (*g_118) = (*g_118);
    }
    else
    {
        int l_322 = 0x8BD92167L;
        int *l_325 = &l_322;
        unsigned l_331 = 1UL;
        for (g_44 = 0; (g_44 <= 2); g_44 += 1)
        {
            int *l_307 = &g_15[0][0];
            unsigned l_328 = 9UL;
            (*g_118) = p_33;
            for (g_262 = 0; (g_262 <= 2); g_262 += 1)
            {
                int **l_320 = &g_118;
                int i, j;
                g_170[(g_44 + 2)][g_262] = g_170[(g_44 + 4)][g_262];
            }
        }
    }
    g_341 = &g_15[0][0];
    return l_348[2];
}







static short func_34(unsigned char p_35)
{
    char l_36[1];
    int *l_42[3];
    int * const l_49 = &g_15[0][0];
    int **l_231 = &g_118;
    int *l_266 = &g_44;
    unsigned char l_273 = 0xEDL;
    unsigned l_281 = 0xEB2E8148L;
    unsigned char l_295[6] = {0x3CL, 0x3CL, 0xA7L, 0x3CL, 0x3CL, 0xA7L};
    int i;
    for (i = 0; i < 1; i++)
        l_36[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_42[i] = &g_15[0][0];
    g_50 = ((+((l_36[0] || (((((func_37(l_42[2], g_15[0][0], p_35, l_42[2]) , (p_35 && (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_49 == (void*)0), (*l_49))), 3)))) , g_44) < p_35) && 0xB7518DB0L) , g_15[0][0])) && g_15[0][0])) , g_15[0][5]);
    g_118 = func_51(((-1L) > func_37(&g_15[0][0], (((((((p_35 , g_15[0][0]) , p_35) , p_35) , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(func_37(l_42[2], (safe_div_func_int16_t_s_s((g_44 && 1UL), p_35)), p_35, l_42[0]), p_35)), p_35))) , 1L) , p_35) , (-1L)), p_35, l_42[0])), p_35, l_42[0]);
    for (p_35 = 0; (p_35 <= 2); p_35 += 1)
    {
        short l_181 = 0x34ABL;
        unsigned char l_182 = 0xD1L;
        int *l_189 = (void*)0;
        unsigned char l_215[6][9][4] = {{{0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}}, {{0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}}, {{0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}}, {{0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}}, {{0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}}, {{0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}, {0UL, 255UL, 0xFBL, 255UL}}};
        unsigned short l_219[5] = {0UL, 1UL, 0UL, 1UL, 0UL};
        unsigned l_220 = 1UL;
        unsigned l_249 = 0x0C6BC6A4L;
        int ***l_253 = &l_231;
        int *l_272 = &g_15[0][0];
        int i, j, k;
        for (g_10 = 0; (g_10 <= 2); g_10 += 1)
        {
            int **l_200 = &l_189;
            unsigned l_218[7][9][4] = {{{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}, {{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}, {{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}, {{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}, {{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}, {{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}, {{1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}, {1UL, 0x5D53B164L, 1UL, 4294967286UL}}};
            int l_234 = (-1L);
            unsigned l_246 = 0xC099E89FL;
            short l_271 = 1L;
            int i, j, k;
            if ((safe_div_func_int32_t_s_s(((void*)0 == &g_170[(p_35 + 4)][p_35]), p_35)))
            {
                unsigned short l_185 = 9UL;
                int *l_199[3][9][9] = {{{&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}}, {{&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}}, {{&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}, {&g_170[(p_35 + 4)][p_35], (void*)0, (void*)0, &g_15[0][0], &g_170[5][0], (void*)0, &g_170[5][0], &g_170[5][0], &g_44}}};
                int ***l_230[4][1] = {{&l_200}, {&l_200}, {&l_200}, {&l_200}};
                int i, j, k;
                for (g_44 = 0; (g_44 <= 2); g_44 += 1)
                {
                    int **l_188[9][7] = {{&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}, {&g_118, &l_42[2], &l_42[2], &l_42[2], &g_118, &l_42[2], &l_42[2]}};
                    int i, j;
                    l_42[g_10] = l_42[g_44];
                    g_170[g_10][p_35] = ((safe_add_func_uint16_t_u_u(g_15[0][0], (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_181, ((p_35 , g_170[0][2]) || ((g_170[1][2] > l_182) & (~(*g_118)))))), ((safe_add_func_uint16_t_u_u((l_185 >= (safe_div_func_uint8_t_u_u(l_185, 0x93L))), g_10)) >= g_10))))) & (-1L));
                    l_189 = l_42[2];
                    (*g_118) = ((g_10 <= l_185) , l_185);
                }
                for (l_185 = 0; (l_185 <= 2); l_185 += 1)
                {
                    int *l_201 = (void*)0;
                    unsigned short l_211 = 0x1503L;
                    int i;
                    l_42[g_10] = ((~(safe_div_func_uint8_t_u_u((0x222FE821L || ((g_170[(p_35 + 4)][p_35] <= g_170[4][0]) <= func_37(l_42[g_10], (((safe_mod_func_uint16_t_u_u(func_37(l_189, (safe_add_func_int32_t_s_s((*g_118), g_170[3][1])), (((safe_unary_minus_func_int32_t_s(p_35)) < (g_44 <= g_50)) , 5L), l_199[0][3][4]), g_170[5][0])) , &g_118) == l_200), (*g_118), &g_170[5][0]))), g_10))) , l_201);
                }
                for (l_181 = 0; (l_181 <= 0); l_181 += 1)
                {
                    int *l_235 = &g_170[8][1];
                    int i;
                    (*g_118) = l_36[l_181];
                    if ((g_50 == ((((safe_rshift_func_int8_t_s_s(l_234, func_37(l_235, ((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_s(g_10, ((void*)0 != (*l_231)))) , 0x8AL) || (0xA812L && g_170[5][0])) >= g_50), 0x55BDL)) , g_240[1]), (*g_118), l_235))) < g_15[0][0]) , g_170[5][0]) & 2UL)))
                    {
                        (*l_200) = (*l_200);
                        return p_35;
                    }
                    else
                    {
                        return g_170[3][0];
                    }
                }
            }
            else
            {
                return p_35;
            }
            for (l_181 = (-15); (l_181 < 22); ++l_181)
            {
                unsigned short l_243 = 7UL;
                int l_252 = (-10L);
                int * const *l_255 = &l_42[2];
                int l_288 = 0L;
                short l_290 = 9L;
            }
        }
        (*g_118) = 0L;
        return p_35;
    }
    return (*l_49);
}







static int func_37(int * p_38, int p_39, int p_40, int * p_41)
{
    int *l_43 = &g_44;
    (*l_43) = 0x94484F75L;
    return g_15[0][0];
}







static int * func_51(unsigned p_52, unsigned char p_53, int * p_54)
{
    unsigned char l_63 = 255UL;
    int *l_68 = &g_44;
    unsigned char l_132 = 0x61L;
    int *l_172 = &g_170[5][0];
    (*l_68) = (9L < ((((safe_div_func_uint16_t_u_u(((l_63 , ((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_63, g_15[0][2])) <= (!(p_52 | (((((*p_54) , ((*p_54) > 0xBED3A9A7L)) , (void*)0) != p_54) >= 0x330CFEF6L)))), l_63)) | g_10)) >= g_50), g_15[0][0])) == g_15[0][0]) , (-5L)) >= g_50));
    for (g_10 = 0; (g_10 >= 44); g_10 = safe_add_func_uint8_t_u_u(g_10, 3))
    {
        unsigned l_82[5][5] = {{0x49BFE1A8L, 0UL, 0xA0B358DDL, 0xA0B358DDL, 0UL}, {0x49BFE1A8L, 0UL, 0xA0B358DDL, 0xA0B358DDL, 0UL}, {0x49BFE1A8L, 0UL, 0xA0B358DDL, 0xA0B358DDL, 0UL}, {0x49BFE1A8L, 0UL, 0xA0B358DDL, 0xA0B358DDL, 0UL}, {0x49BFE1A8L, 0UL, 0xA0B358DDL, 0xA0B358DDL, 0UL}};
        int *l_83 = &g_15[0][4];
        int *l_113 = &g_15[0][5];
        unsigned l_127[6];
        int l_135[7] = {(-8L), (-8L), 0x11E324BCL, (-8L), (-8L), 0x11E324BCL, (-8L)};
        int i, j;
        for (i = 0; i < 6; i++)
            l_127[i] = 18446744073709551615UL;
    }
    return &g_170[5][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_170[i][j], "g_170[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_240[i], "g_240[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_262, "g_262", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_352[i][j], "g_352[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_385, "g_385", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_814[i][j][k], "g_814[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
