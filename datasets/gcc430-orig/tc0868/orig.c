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



static char g_14 = 0x49L;
static int g_24[7] = {0x2BAEF6E2L, 0x2BAEF6E2L, 0L, 0x2BAEF6E2L, 0x2BAEF6E2L, 0L, 0x2BAEF6E2L};
static int g_34 = (-1L);
static int *g_33 = &g_34;
static int g_35 = (-1L);
static char *g_37[3][5] = {{&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}};
static volatile unsigned g_63 = 0xDB602708L;
static unsigned g_67 = 4294967295UL;
static int g_88[2][6][6] = {{{(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}}, {{(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}, {(-1L), 0x6174ED7BL, 1L, (-1L), 0x2121A659L, 9L}}};
static unsigned char g_90 = 0UL;
static unsigned char g_94 = 1UL;
static unsigned short g_104[7][8] = {{0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}, {0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}, {0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}, {0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}, {0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}, {0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}, {0x436FL, 65526UL, 1UL, 65526UL, 0x436FL, 65526UL, 1UL, 65526UL}};
static unsigned short g_127 = 0UL;
static char g_134 = 0x7AL;
static unsigned char *g_155 = &g_94;
static short g_175 = 0x834DL;
static unsigned char *g_195 = (void*)0;
static unsigned g_244 = 8UL;
static unsigned char **g_359[2] = {&g_155, &g_155};
static unsigned char ***g_358[5] = {&g_359[0], &g_359[0], &g_359[0], &g_359[0], &g_359[0]};
static int *g_364 = &g_88[1][3][4];
static short ***g_389 = (void*)0;
static short *g_392 = &g_175;
static short **g_391[10][4] = {{&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}, {&g_392, (void*)0, &g_392, &g_392}};
static short ***g_390[6][6] = {{&g_391[1][1], &g_391[1][2], &g_391[1][1], &g_391[5][1], &g_391[5][2], &g_391[1][2]}, {&g_391[1][1], &g_391[1][2], &g_391[1][1], &g_391[5][1], &g_391[5][2], &g_391[1][2]}, {&g_391[1][1], &g_391[1][2], &g_391[1][1], &g_391[5][1], &g_391[5][2], &g_391[1][2]}, {&g_391[1][1], &g_391[1][2], &g_391[1][1], &g_391[5][1], &g_391[5][2], &g_391[1][2]}, {&g_391[1][1], &g_391[1][2], &g_391[1][1], &g_391[5][1], &g_391[5][2], &g_391[1][2]}, {&g_391[1][1], &g_391[1][2], &g_391[1][1], &g_391[5][1], &g_391[5][2], &g_391[1][2]}};
static unsigned short g_396 = 0x624DL;
static long long g_399 = (-1L);
static unsigned long long g_401 = 0xE8D195F2398405B0LL;
static unsigned g_407 = 0xB88F1BC9L;
static short g_425 = 0xE1EBL;
static long long *g_448 = &g_399;
static long long **g_447[2][2][3] = {{{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}};
static volatile unsigned short g_479 = 65535UL;
static volatile unsigned short *g_478[7] = {&g_479, &g_479, &g_479, &g_479, &g_479, &g_479, &g_479};
static volatile unsigned short **g_477 = &g_478[2];
static volatile unsigned short ***g_476 = &g_477;
static unsigned short g_509 = 0x46F4L;
static int g_524 = 1L;
static unsigned long long **g_539 = (void*)0;
static volatile int g_560 = 0x53D30818L;
static char **g_583 = (void*)0;
static char ***g_582 = &g_583;
static unsigned char g_593 = 1UL;
static unsigned short g_605 = 0x5D80L;
static unsigned *g_647 = &g_244;
static unsigned **g_646 = &g_647;
static unsigned ***g_645[8][2][5] = {{{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}, {{&g_646, &g_646, &g_646, &g_646, (void*)0}, {&g_646, &g_646, &g_646, &g_646, (void*)0}}};
static unsigned short g_654[10] = {1UL, 0xC12AL, 1UL, 0xC12AL, 1UL, 0xC12AL, 1UL, 0xC12AL, 1UL, 0xC12AL};
static unsigned g_684[9] = {0x1B7D9162L, 0x1B7D9162L, 4294967295UL, 0x1B7D9162L, 0x1B7D9162L, 4294967295UL, 0x1B7D9162L, 0x1B7D9162L, 4294967295UL};
static int g_719 = 0x4C97D073L;
static volatile unsigned g_788 = 18446744073709551615UL;
static volatile unsigned char g_985 = 0xD9L;
static volatile unsigned char *g_984 = &g_985;
static volatile unsigned char **g_983[5] = {&g_984, &g_984, &g_984, &g_984, &g_984};
static volatile unsigned char ***g_982 = &g_983[2];
static volatile unsigned char ****g_981 = &g_982;
static unsigned short *g_1024 = &g_396;
static unsigned short **g_1023 = &g_1024;
static int *g_1053 = &g_35;
static int *g_1092 = &g_24[2];
static volatile int **g_1116 = (void*)0;
static volatile int ***g_1115 = &g_1116;
static short g_1117 = 0L;
static volatile unsigned g_1139 = 0UL;
static volatile unsigned long long g_1187 = 1UL;
static unsigned g_1212 = 0xEE5BE8CFL;
static unsigned ***g_1217 = &g_646;
static volatile char g_1220 = 4L;
static char g_1355 = 0x23L;
static unsigned long long **g_1368 = (void*)0;
static long long g_1412[6] = {2L, 2L, 0x9146402A4BCD454ELL, 2L, 2L, 0x9146402A4BCD454ELL};
static long long g_1416 = 0x2998393840FC0116LL;
static unsigned short g_1433[7][9] = {{0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}, {0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}, {0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}, {0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}, {0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}, {0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}, {0x3203L, 0x6C14L, 65529UL, 0UL, 0x0C86L, 0UL, 65529UL, 0x6C14L, 0x3203L}};
static unsigned g_1457 = 0x50C0A019L;
static volatile int g_1459 = (-1L);
static unsigned *g_1482 = &g_407;
static unsigned **g_1481 = &g_1482;
static long long g_1496[10] = {0x2FCAC4A1E29322B0LL, 0xDB8E95DB9FC8CCA0LL, 0x2FCAC4A1E29322B0LL, 0xDB8E95DB9FC8CCA0LL, 0x2FCAC4A1E29322B0LL, 0xDB8E95DB9FC8CCA0LL, 0x2FCAC4A1E29322B0LL, 0xDB8E95DB9FC8CCA0LL, 0x2FCAC4A1E29322B0LL, 0xDB8E95DB9FC8CCA0LL};
static volatile long long g_1691 = 0x4E12609F3ADDE815LL;
static unsigned long long **g_1751 = (void*)0;
static char *g_1754 = &g_1355;



static unsigned func_1(void);
static int func_2(char p_3, unsigned long long p_4, int p_5, unsigned char p_6, unsigned long long p_7);
static char func_8(int p_9, unsigned p_10, long long p_11, int p_12);
static long long func_20(int p_21, int p_22);
static char func_30(char * p_31, char * p_32);
static char * func_40(char * p_41, char * p_42);
static unsigned short func_44(int * p_45, int * p_46, char p_47, unsigned short p_48);
static char ** func_52(char * p_53);
static int * func_68(int p_69, char p_70, int p_71);
static unsigned func_76(char *** p_77, unsigned long long p_78, unsigned p_79);
static unsigned func_1(void)
{
    char *l_13 = &g_14;
    int l_17 = (-1L);
    int *l_23 = &g_24[2];
    char **l_36[3];
    int l_1064 = 0xA82B15B6L;
    char ***l_1398 = &g_583;
    unsigned *l_1407 = &g_407;
    unsigned long long *l_1413[3];
    unsigned short *l_1414 = &g_104[0][5];
    unsigned char l_1415[3];
    short **l_1436[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    unsigned l_1439 = 4294967288UL;
    int l_1458 = 0L;
    unsigned l_1474[8] = {0xA19D9AB0L, 18446744073709551615UL, 0xA19D9AB0L, 18446744073709551615UL, 0xA19D9AB0L, 18446744073709551615UL, 0xA19D9AB0L, 18446744073709551615UL};
    unsigned long long l_1514[4] = {3UL, 0x77440F3316CC4AC1LL, 3UL, 0x77440F3316CC4AC1LL};
    unsigned long long l_1525 = 18446744073709551614UL;
    short l_1530 = 5L;
    char *l_1536[4] = {&g_1355, (void*)0, &g_1355, (void*)0};
    char *l_1537[9][3][9] = {{{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}, {{&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}, {&g_14, &g_134, &g_134, &g_134, &g_14, (void*)0, &g_134, &g_134, (void*)0}}};
    int l_1550 = 0x965ED683L;
    unsigned short l_1683 = 0xE063L;
    int l_1697 = 0x44E7F18DL;
    char *l_1725 = (void*)0;
    short l_1746 = (-1L);
    unsigned short l_1747 = 0xEE60L;
    unsigned long long **l_1748 = &l_1413[2];
    int **l_1757 = &g_1053;
    short l_1767 = 6L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_36[i] = &l_13;
    for (i = 0; i < 3; i++)
        l_1413[i] = &g_401;
    for (i = 0; i < 3; i++)
        l_1415[i] = 0xB8L;
    (*l_23) = func_2(func_8((((*l_13) = 0xB1L) , (safe_sub_func_uint16_t_u_u(((*g_1024) = (l_17 || (+((safe_rshift_func_int16_t_s_u(((func_20(((*l_23) = l_17), ((*g_364) = (((safe_unary_minus_func_uint16_t_u(((void*)0 == &g_14))) && ((*g_155) = ((safe_rshift_func_uint16_t_u_u(((g_14 , (safe_mod_func_int8_t_s_s(func_30((g_14 , (g_37[2][4] = ((g_35 = (g_33 != (void*)0)) , l_13))), &g_14), l_17))) > g_719), g_104[0][5])) <= (-4L)))) & l_17))) >= 18446744073709551610UL) & l_17), 1)) , l_1064)))), 0x5B29L))), (**g_646), l_17, g_654[8]), l_17, g_654[8], l_17, g_524);

    ;
    ;
    (*g_1092) = (*g_33);
lbl_1759:
    if ((((*g_1092) = (safe_rshift_func_uint8_t_u_s((*l_23), 3))) > (l_17 , (!((((safe_sub_func_int16_t_s_s(((*g_392) = 0xF145L), 1UL)) == (l_1415[2] && (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((0x258B1425478945D8LL ^ ((safe_rshift_func_uint16_t_u_s(1UL, 0)) >= l_1415[2])), (safe_mod_func_int16_t_s_s(l_1415[2], l_1415[2])))), 6)))) != 249UL) , 0x1BC8EF97L)))))
    {
        unsigned char l_1440 = 252UL;
        unsigned ***l_1467[8][4][8] = {{{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}, {{&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}, {&g_646, (void*)0, &g_646, &g_646, &g_646, &g_646, &g_646, &g_646}}};
        int l_1524 = 7L;
        char *l_1538 = &g_1355;
        unsigned char l_1554 = 0x59L;
        int l_1612 = 0xB681E27AL;
        unsigned l_1627[5][7][1] = {{{0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}}, {{0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}}, {{0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}}, {{0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}}, {{0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}, {0xEE7E5C50L}}};
        unsigned short **l_1642 = (void*)0;
        short l_1646 = (-3L);
        int i, j, k;
        if ((safe_rshift_func_int8_t_s_s((((*g_392) = (safe_lshift_func_int16_t_s_s((*l_23), 11))) , 0x21L), 4)))
        {
            unsigned short l_1441 = 1UL;
            int l_1450 = 1L;
            unsigned l_1451 = 18446744073709551615UL;
            int *l_1501 = &g_88[1][3][4];
            unsigned char l_1505 = 0x4AL;
            int **l_1527 = &g_33;
            int l_1535 = 0x72339F72L;
            char *l_1539[9] = {&g_1355, &g_1355, (void*)0, &g_1355, &g_1355, (void*)0, &g_1355, &g_1355, (void*)0};
            short l_1540 = 0x0BB8L;
            int i;
            (*g_1092) = func_8((*g_1053), ((*l_23) = ((g_1433[2][0] , ((safe_add_func_int16_t_s_s(func_8((~(*g_1053)), ((~((void*)0 == l_1436[0])) & ((safe_add_func_uint8_t_u_u(1UL, l_1439)) > 0x33L)), (0x65L | 2L), (*g_1053)), 0xC96BL)) & 1UL)) , l_1440)), l_1440, l_1441);
            if (g_14)
                goto lbl_1526;
lbl_1526:
            for (l_1439 = (-15); (l_1439 != 41); l_1439++)
            {
                long long l_1468 = 0x281DEECAAF291232LL;
                unsigned **l_1479 = &l_1407;
                int l_1523 = 0L;
            }
            (*l_1527) = &l_1524;

            ;
            (*g_364) = (safe_rshift_func_uint8_t_u_s(((l_1530 > (*l_1501)) , ((0x3613A0CD4CC34117LL & (((*l_23) ^ l_1524) , ((safe_add_func_int32_t_s_s(func_2((l_1524 != (*g_155)), (**l_1527), (*g_1053), (*l_23), g_1212), (*g_364))) > (*g_364)))) , l_1540)), (*l_23)));
        }
        else
        {
            int *l_1543 = &g_719;
            unsigned short l_1555[7] = {0xF041L, 0x2204L, 0xF041L, 0x2204L, 0xF041L, 0x2204L, 0xF041L};
            unsigned long long *l_1559 = &l_1514[2];
            int *l_1635 = &l_1612;
            unsigned short ***l_1643 = &g_1023;
            int i;
            for (g_509 = 0; (g_509 >= 3); ++g_509)
            {
                int **l_1544 = &g_1092;
                int l_1553 = 0xFC69420CL;
                unsigned l_1569 = 0UL;
                unsigned long long *l_1582 = &l_1514[2];
                unsigned l_1585 = 8UL;
                unsigned l_1613 = 0xCD8A77B0L;
                int *l_1641 = &l_1064;
                (*l_1544) = l_1543;

                ;
            }
            if (g_34)
                goto lbl_1759;
            (*l_1643) = l_1642;

            ;
            for (g_605 = 0; (g_605 <= 6); g_605 += 1)
            {
                int **l_1644 = (void*)0;
                char ***l_1647[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1647[i] = &g_583;
                g_24[g_605] = g_24[g_605];
                g_1092 = &g_88[0][3][2];

                ;
                for (g_127 = 0; (g_127 <= 2); g_127 += 1)
                {
                    int **l_1645 = &l_1543;
                    (*l_1645) = &l_1550;

                    ;
                }
                for (l_1524 = 0; (l_1524 <= 6); l_1524 += 1)
                {
                    int **l_1648 = &g_1092;
                    g_1092 = func_68(l_1646, (*l_23), (&g_583 == l_1647[0]));

                    ;
                    (*l_1648) = &g_88[0][5][2];

                    ;
                }
            }

            ;
            ;
        }

        ;
        ;
        ;
    }
    else
    {
        long long l_1653 = 0xF7EB86EF57A86A91LL;
        int l_1660 = (-4L);
        short l_1693 = (-1L);
        char *l_1707 = (void*)0;
        int **l_1756 = &g_1053;
        int ***l_1755 = &l_1756;
        unsigned l_1758 = 0UL;
        (*g_1092) = (*l_23);
        for (g_1212 = (-6); (g_1212 <= 60); g_1212 = safe_add_func_int16_t_s_s(g_1212, 2))
        {
            int l_1663 = 0xE5ADF924L;
            int *l_1668[10][3][8] = {{{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0, &g_88[1][3][4], (void*)0, (void*)0}}};
            char *l_1688 = &g_134;
            char *l_1706 = &g_1355;
            unsigned l_1738 = 0xD1D4BAA3L;
            unsigned short *l_1742 = &g_127;
            unsigned long long ***l_1749 = &g_1368;
            unsigned long long ***l_1750[9] = {&l_1748, &l_1748, &l_1748, &l_1748, &l_1748, &l_1748, &l_1748, &l_1748, &l_1748};
            int i, j, k;
            for (g_244 = (-10); (g_244 <= 34); g_244 = safe_add_func_int64_t_s_s(g_244, 9))
            {
                long long l_1654[9] = {0x793885CB74EADE60LL, 0x4C94E020C4FE1572LL, 0x793885CB74EADE60LL, 0x4C94E020C4FE1572LL, 0x793885CB74EADE60LL, 0x4C94E020C4FE1572LL, 0x793885CB74EADE60LL, 0x4C94E020C4FE1572LL, 0x793885CB74EADE60LL};
                unsigned short l_1684 = 65535UL;
                unsigned l_1727[10][2] = {{18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}, {18446744073709551614UL, 0x2CBCADFEL}};
                int l_1728 = 0x82921270L;
                int *l_1736 = &g_24[5];
                int i, j;
            }
            (*g_364) = (((*l_23) >= (g_539 != (g_1751 = ((l_1746 >= l_1747) , ((*l_1749) = l_1748))))) || ((*g_1092) = ((((*g_981) != (*g_981)) <= ((**g_646) , 0xF91FL)) < 0xF1L)));

            ;
            ;
        }

        ;
        ;
        (*g_364) = (safe_mod_func_uint64_t_u_u(((l_1660 = (*l_23)) != func_2((l_1653 & ((void*)0 == g_1754)), (((((*g_448) , &g_1053) == ((*l_1755) = &g_1053)) , l_1757) != &g_1053), (*l_23), l_1758, l_1693)), l_1693));
    }


    ;
    ;
    ;
    ;
    for (g_605 = (-9); (g_605 < 49); ++g_605)
    {
        unsigned short l_1766 = 0UL;
        int l_1770 = (-7L);
        (*g_364) = ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_23) && (*l_23)), l_1770)), 3)) , (*l_23));
    }
    return (***g_1217);



}







static int func_2(char p_3, unsigned long long p_4, int p_5, unsigned char p_6, unsigned long long p_7)
{
    char *l_1076 = &g_134;
    char ***l_1079[4][10] = {{&g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583}, {&g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583}, {&g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583}, {&g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583, &g_583}};
    int l_1080 = 0xE5B19A7DL;
    unsigned long long l_1085 = 18446744073709551612UL;
    int l_1087 = 1L;
    unsigned ***l_1215 = &g_646;
    int **l_1219 = &g_364;
    int ***l_1218 = &l_1219;
    char ***l_1233 = &g_583;
    unsigned long long l_1283 = 18446744073709551608UL;
    unsigned long long *l_1366[7];
    unsigned long long **l_1365 = &l_1366[1];
    int *l_1397 = (void*)0;
    int i, j;
    for (i = 0; i < 7; i++)
        l_1366[i] = &g_401;
    (*g_33) = p_5;
    return (**l_1219);
}







static char func_8(int p_9, unsigned p_10, long long p_11, int p_12)
{
    int *l_1068 = &g_24[2];
    int **l_1069 = (void*)0;
    char ***l_1070 = &g_583;
    char ***l_1073 = &g_583;
    unsigned long long *l_1074 = &g_401;
    int **l_1075 = &g_364;
    for (p_12 = 0; (p_12 != (-18)); p_12 = safe_sub_func_uint8_t_u_u(p_12, 3))
    {
        unsigned l_1067 = 0x9E90EBB5L;
        if (l_1067)
            break;
    }
    for (g_399 = 0; g_399 < 7; g_399 += 1)
    {
        g_24[g_399] = 3L;
    }
    g_33 = l_1068;

    ;
    (*l_1075) = func_68((*g_33), (((*g_647) = ((func_76(&g_583, func_76(l_1070, g_24[2], ((((*l_1074) = ((((((((*l_1068) && ((*g_155) = func_76(l_1070, (p_10 ^ (**g_1023)), ((safe_rshift_func_int8_t_s_s((*l_1068), 3)) , (*l_1068))))) <= 65529UL) , l_1073) == &g_583) , &l_1073) != &l_1070) < g_605)) && p_9) , p_10)), (*l_1068)) || 0xC204D8BA6076E076LL) | 0x66C52F6AL)) == (*l_1068)), p_9);

    ;
    ;
    return p_10;
}







static long long func_20(int p_21, int p_22)
{
    int *l_976[7][7] = {{(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}, {(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}, {(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}, {(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}, {(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}, {(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}, {(void*)0, &g_719, (void*)0, &g_24[6], &g_24[2], &g_34, &g_88[1][2][2]}};
    unsigned char ***l_979 = (void*)0;
    unsigned char ****l_980[5];
    int **l_991 = &g_33;
    char ***l_998 = &g_583;
    long long *l_1011 = &g_399;
    short **l_1062[7] = {&g_392, &g_392, &g_392, &g_392, &g_392, &g_392, &g_392};
    int i, j;
    for (i = 0; i < 5; i++)
        l_980[i] = &l_979;
    (*l_991) = func_68((*g_364), p_22, g_425);

    ;
    for (g_605 = 0; (g_605 == 39); ++g_605)
    {
        int l_1002 = 0x5172A622L;
        int *l_1005 = &g_88[1][3][4];
        unsigned short **l_1025 = &g_1024;
        short ***l_1063 = &g_391[1][2];
        for (g_719 = 0; (g_719 <= 6); g_719 += 1)
        {
            unsigned char **l_1006 = &g_195;
            long long l_1008[7][8] = {{(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}, {(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}, {(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}, {(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}, {(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}, {(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}, {(-5L), 0x9679E734BEF4A621LL, 0x8AC8DEF9ECCE292FLL, 0x8AC8DEF9ECCE292FLL, 0x9679E734BEF4A621LL, (-5L), (-6L), 0x480325B8597F9E4CLL}};
            int i, j;
        }
        for (g_175 = 0; (g_175 == 13); g_175 = safe_add_func_uint32_t_u_u(g_175, 5))
        {
            unsigned long long l_1014[1];
            unsigned l_1026 = 18446744073709551611UL;
            int *l_1054 = (void*)0;
            int *l_1059 = &g_24[2];
            int i;
            for (i = 0; i < 1; i++)
                l_1014[i] = 6UL;
            if (((*g_33) = ((-4L) <= ((*l_1005) , l_1014[0]))))
            {
                unsigned short l_1017 = 0x6E37L;
                unsigned short *l_1022[10][5][3] = {{{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}, {{&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}, {&g_654[8], &l_1017, &g_127}}};
                unsigned short **l_1021 = &l_1022[3][1][1];
                unsigned short ***l_1020 = &l_1021;
                short **l_1041 = &g_392;
                int i, j, k;
                if (((((~((*g_448) && (safe_rshift_func_uint8_t_u_s(255UL, l_1017)))) > l_1017) , (safe_lshift_func_int8_t_s_s((~(l_1014[0] > ((p_21 , ((*l_1020) = (void*)0)) != (l_1025 = g_1023)))), ((l_1017 <= p_22) >= p_22)))) , l_1026))
                {
                    short **l_1043 = &g_392;
                    short **l_1044 = &g_392;
                    int l_1045 = (-1L);
                    for (g_14 = 0; (g_14 <= (-27)); g_14 = safe_sub_func_int16_t_s_s(g_14, 3))
                    {
                        (*l_991) = &p_21;

                        ;
                    }
                    (*l_1005) = 0xF9A10335L;
                    for (g_94 = 15; (g_94 <= 56); ++g_94)
                    {
                        int l_1033 = 0xAD4624E6L;
                        char *l_1038 = (void*)0;
                        short ***l_1042[1];
                        int l_1046 = 1L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1042[i] = &l_1041;
                    }
                    if ((*l_1005))
                        continue;
                }
                else
                {
                    int *l_1052 = &g_524;
                    int **l_1051[4][9] = {{(void*)0, &l_1052, &l_1052, &l_1052, (void*)0, &l_1052, &l_1052, &l_1052, (void*)0}, {(void*)0, &l_1052, &l_1052, &l_1052, (void*)0, &l_1052, &l_1052, &l_1052, (void*)0}, {(void*)0, &l_1052, &l_1052, &l_1052, (void*)0, &l_1052, &l_1052, &l_1052, (void*)0}, {(void*)0, &l_1052, &l_1052, &l_1052, (void*)0, &l_1052, &l_1052, &l_1052, (void*)0}};
                    int i, j;
                    l_1059 = ((*l_991) = func_68((*g_364), (safe_sub_func_int64_t_s_s(l_1017, ((safe_lshift_func_int8_t_s_u(0x13L, 4)) && ((l_1017 , (g_1053 = &g_35)) == l_1054)))), (((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((*l_1005) & (l_1014[0] > ((p_21 > (*g_364)) != l_1017))) && p_22) , l_1014[0]), (***g_476))), l_1026)) , p_21) | 0xD6L)));

                    ;
                    ;
                    (*l_991) = &g_719;

                    ;
                }

                ;
                ;
            }
            else
            {
                for (g_396 = 0; (g_396 >= 19); g_396 = safe_add_func_uint16_t_u_u(g_396, 2))
                {
                    if (p_22)
                        break;
                    if (p_21)
                        break;
                }
            }

            ;
        }
        (*l_1063) = l_1062[0];
    }

    ;
    return p_21;


}







static char func_30(char * p_31, char * p_32)
{
    char l_844 = 0xCCL;
    int *l_848 = &g_88[1][5][2];
    char ***l_874 = &g_583;
    int *l_934[8][10][2] = {{{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}, {{&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}, {&g_34, &g_719}}};
    char l_954 = 0xF7L;
    int i, j, k;
    for (g_34 = 0; (g_34 == 17); g_34 = safe_add_func_uint8_t_u_u(g_34, 9))
    {
        char *l_43 = &g_14;
        int l_845[5] = {2L, 2L, 2L, 2L, 2L};
        char ****l_856 = &g_582;
        int *l_876[3][4][3] = {{{&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}}, {{&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}}, {{&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}, {&g_34, &g_88[1][3][4], &g_88[1][0][5]}}};
        short ****l_929 = &g_390[3][0];
        int i, j, k;
        (*g_364) = (((((((l_43 = func_40(p_31, l_43)) == (((*g_448) & (safe_add_func_int64_t_s_s(((safe_unary_minus_func_int32_t_s(l_844)) <= l_844), (0xF0B5L < g_524)))) , (void*)0)) , p_31) != (void*)0) <= 0x9009L) , l_845[2]) && 0x35978D2E11AFE19CLL);

        ;
        if (l_844)
            break;
        for (g_605 = 0; (g_605 < 55); g_605 = safe_add_func_uint64_t_u_u(g_605, 8))
        {
            char ***l_857 = &g_583;
            int l_860 = 0x84DB6E8EL;
            unsigned l_869 = 0xD6A3BA31L;
            int *l_921 = &g_88[1][3][4];
            unsigned **l_930[7];
            short l_959[1][7] = {{0x66C0L, 0x66C0L, 0x0CE0L, 0x66C0L, 0x66C0L, 0x0CE0L, 0x66C0L}};
            char l_962 = 1L;
            int i, j;
            for (i = 0; i < 7; i++)
                l_930[i] = &g_647;
            l_848 = &g_88[1][3][4];
            for (g_479 = 0; g_479 < 9; g_479 += 1)
            {
                g_684[g_479] = 0xE15BDB17L;
            }
            for (g_593 = (-22); (g_593 > 40); g_593++)
            {
                long long l_853 = 0xD38E0B6DFF4C2C33LL;
                int l_862[8] = {(-1L), (-1L), 0x3891599FL, (-1L), (-1L), 0x3891599FL, (-1L), (-1L)};
                int l_888[7][5] = {{0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}, {0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}, {0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}, {0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}, {0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}, {0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}, {0x7C0794FBL, 0x7C0794FBL, (-8L), 0x7C0794FBL, 0x7C0794FBL}};
                unsigned char *l_920[7][10][3] = {{{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}, {{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}, {{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}, {{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}, {{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}, {{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}, {{&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}, {&g_593, (void*)0, &g_593}}};
                unsigned char l_922 = 0UL;
                int l_946 = 0x3F0AC419L;
                int i, j, k;
            }
            (*l_921) = ((*l_921) , (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((0xA0AFAF584E55C5FFLL > (((*l_921) && (safe_add_func_uint64_t_u_u((((*l_921) ^ ((*p_32) = (*p_31))) , (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((*l_921), (*l_921))), (((*p_32) , 18446744073709551608UL) , 0x3F7B2B28L))) & (*g_364)) < (*g_364))), (*l_848)))) == (*l_921))), 1)), 0L)));
        }
    }

    ;
    return (*p_31);
}







static char * func_40(char * p_41, char * p_42)
{
    int *l_49 = &g_34;
    char ***l_58 = (void*)0;
    char **l_60[5][8] = {{&g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], (void*)0, &g_37[2][4], (void*)0}, {&g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], (void*)0, &g_37[2][4], (void*)0}, {&g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], (void*)0, &g_37[2][4], (void*)0}, {&g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], (void*)0, &g_37[2][4], (void*)0}, {&g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], &g_37[2][4], (void*)0, &g_37[2][4], (void*)0}};
    char ***l_59 = &l_60[2][2];
    char **l_62 = &g_37[0][3];
    char ***l_61 = &l_62;
    unsigned *l_66 = &g_67;
    int i, j;
    (*g_364) = (func_44(l_49, &g_34, (safe_lshift_func_int8_t_s_u(((((*l_59) = func_52(p_42)) == ((*l_61) = (void*)0)) , ((((*l_49) & g_63) , (safe_add_func_int64_t_s_s(((((*l_66) = ((void*)0 == l_49)) , (*l_49)) , g_14), g_34))) | (*l_49))), (*l_49))), g_14) ^ (*l_49));

    ;
    ;
    return p_41;


}







static unsigned short func_44(int * p_45, int * p_46, char p_47, unsigned short p_48)
{
    char ***l_80 = (void*)0;
    unsigned *l_580[6][3][4] = {{{&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}}, {{&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}}, {{&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}}, {{&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}}, {{&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}}, {{&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}, {&g_67, &g_244, &g_67, &g_244}}};
    int l_581 = 0xA10C1215L;
    unsigned l_584 = 0x8ADD36BDL;
    int **l_586[8][4][5] = {{{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}, {{&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}, {&g_33, &g_364, &g_33, &g_364, &g_364}}};
    unsigned long long ***l_592 = (void*)0;
    unsigned long long *l_604 = &g_401;
    unsigned long long **l_603 = &l_604;
    short ***l_612[10];
    unsigned char l_639 = 0x3FL;
    short l_688[3];
    int l_689 = 1L;
    unsigned char **l_707 = &g_155;
    unsigned short l_771[10] = {1UL, 0x4C25L, 1UL, 0x4C25L, 1UL, 0x4C25L, 1UL, 0x4C25L, 1UL, 0x4C25L};
    unsigned char ***l_796 = &g_359[1];
    char l_805 = 0xF2L;
    unsigned short l_808 = 65534UL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_612[i] = &g_391[1][2];
    for (i = 0; i < 3; i++)
        l_688[i] = 9L;
    p_46 = func_68((((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((!(*p_46)), (l_581 = func_76(l_80, ((*p_45) , (p_45 == (void*)0)), p_48)))), p_48)) , func_76(g_582, l_581, g_94)) <= p_47), p_47, l_584);

    ;
    ;
    if (((*g_364) = ((safe_mod_func_int16_t_s_s((&p_48 != (*g_477)), func_76(&g_583, ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((void*)0 == l_592))), 0)) , g_593), (((((((*g_392) , (**g_477)) <= g_127) >= (*p_46)) != (-9L)) , p_48) , p_47)))) | p_47)))
    {
        unsigned long long *l_595[8][1][3] = {{{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}, {{&g_401, (void*)0, &g_401}}};
        unsigned long long **l_594 = &l_595[5][0][1];
        unsigned **l_598 = &l_580[2][0][0];
        unsigned ***l_599[6][1] = {{&l_598}, {&l_598}, {&l_598}, {&l_598}, {&l_598}, {&l_598}};
        unsigned **l_600 = &l_580[2][0][0];
        int *l_606 = (void*)0;
        short ***l_609 = &g_391[5][1];
        short ****l_610 = &g_389;
        short ****l_611 = &l_609;
        unsigned short *l_619 = (void*)0;
        unsigned short *l_620[4] = {&g_127, &g_605, &g_127, &g_605};
        int l_621 = 5L;
        char l_669 = 0x97L;
        unsigned char l_686 = 0x82L;
        unsigned char **l_709 = (void*)0;
        char ***l_730 = &g_583;
        unsigned l_741[9][9] = {{18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}, {18446744073709551608UL, 0x3FDDCCDBL, 1UL, 1UL, 1UL, 0x3FDDCCDBL, 18446744073709551608UL, 0x898C9353L, 18446744073709551611UL}};
        unsigned short l_789 = 7UL;
        unsigned l_815 = 4294967289UL;
        int i, j, k;
        l_606 = func_68((l_594 != (((p_47 < p_48) , ((safe_add_func_uint16_t_u_u((***g_476), ((*g_392) = (0x5C59L != ((l_600 = l_598) == (void*)0))))) , ((p_47 ^ (safe_sub_func_int64_t_s_s((p_48 && p_47), 0UL))) , p_47))) , l_603)), g_605, p_48);

        ;
    }
    else
    {
        unsigned short *l_825[1];
        int l_826 = 0x4AA7C863L;
        unsigned char *l_827 = &l_639;
        int l_836 = 1L;
        int i;
        for (i = 0; i < 1; i++)
            l_825[i] = &g_104[0][5];
        (*g_33) = (0xC8L || ((*l_827) = ((*g_155) = func_76(&g_583, ((p_48 = 0x7280L) , (p_48 ^ (l_826 = (p_48 != p_48)))), p_47))));
        (*g_33) = (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((p_47 , p_47) & (((l_826 = 0x298DL) , (+(**g_646))) < (*g_364))), (~p_47))), (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(l_836, ((l_836 ^ ((safe_lshift_func_uint16_t_u_u(l_836, 11)) <= 0L)) ^ 0x0114CC793B042600LL))) , 246UL), 2))));
        for (l_689 = (-16); (l_689 <= (-12)); ++l_689)
        {
            return p_47;
        }
    }
    return (**g_477);
}







static char ** func_52(char * p_53)
{
    int *l_54 = (void*)0;
    int *l_55 = (void*)0;
    int l_56 = (-1L);
    char **l_57 = &g_37[2][4];
    l_56 = (*g_33);
    return l_57;


}







static int * func_68(int p_69, char p_70, int p_71)
{
    int **l_585 = &g_33;
    (*l_585) = &g_88[1][3][4];

    ;
    return &g_34;


}







static unsigned func_76(char *** p_77, unsigned long long p_78, unsigned p_79)
{
    unsigned long long l_109 = 8UL;
    int l_129 = 0x199CEA19L;
    unsigned long long l_237 = 0x281D226D04433F09LL;
    char *l_261[7][10] = {{&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}, {&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}, {&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}, {&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}, {&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}, {&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}, {&g_14, &g_134, &g_134, &g_14, &g_14, &g_134, &g_134, &g_134, &g_134, &g_134}};
    int *l_294 = &g_88[1][3][4];
    unsigned char l_304 = 0x88L;
    int *l_400[1][2];
    unsigned long long *l_411[6] = {&l_109, &l_109, &l_109, &l_109, &l_109, &l_109};
    unsigned long long **l_410 = &l_411[2];
    unsigned long long **l_412 = &l_411[2];
    unsigned l_417 = 0x0568237DL;
    int l_440 = 0xFEC71DCDL;
    unsigned short **l_481 = (void*)0;
    unsigned short ***l_480 = &l_481;
    int l_511 = 0xDC0C66CEL;
    int l_525 = 0xD9985448L;
    char l_550 = (-3L);
    short *l_578 = &g_425;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_400[i][j] = &g_34;
    }
    for (p_79 = 0; (p_79 > 37); p_79 = safe_add_func_int64_t_s_s(p_79, 4))
    {
        unsigned l_83 = 2UL;
        int l_96 = (-1L);
        int l_97 = 0x330C13F5L;
        int *l_132 = &l_97;
        int *l_209[6][9][4] = {{{&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}}, {{&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}}, {{&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}}, {{&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}}, {{&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}}, {{&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}, {&g_88[1][5][1], &g_88[1][3][4], &g_88[1][3][4], &g_34}}};
        int l_223[2][5][8] = {{{0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}}, {{0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}, {0xFFD9DDA3L, 0L, 0xBDFA936FL, 0xD48E721FL, 1L, (-1L), 1L, 0xD48E721FL}}};
        int i, j, k;
    }
    for (g_127 = (-23); (g_127 <= 17); g_127 = safe_add_func_uint64_t_u_u(g_127, 4))
    {
        short l_336 = 0x3096L;
        int l_341 = 1L;
        unsigned *l_369[3][3] = {{&g_244, &g_244, &g_244}, {&g_244, &g_244, &g_244}, {&g_244, &g_244, &g_244}};
        unsigned **l_368 = &l_369[0][1];
        int i, j;
        for (g_94 = 0; (g_94 > 9); g_94 = safe_add_func_int8_t_s_s(g_94, 1))
        {
            int *l_344 = &l_129;
            unsigned long long *l_360[1][1];
            unsigned **l_372 = &l_369[1][0];
            int l_402 = 0xD242C8DAL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_360[i][j] = &l_237;
            }
        }
        (*g_364) = (safe_add_func_int64_t_s_s(g_67, g_407));
    }
    for (g_175 = 0; (g_175 <= 2); g_175 += 1)
    {
        unsigned long long ***l_413 = &l_410;
        int l_414[8][6] = {{0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}, {0x16D8A703L, 0x02C5EA47L, 0x16D8A703L, 8L, 0x593FC4E6L, 8L}};
        int l_423 = (-7L);
        int *l_446 = &l_129;
        unsigned char l_482 = 0x08L;
        unsigned l_496 = 4294967295UL;
        short **l_532 = &g_392;
        int **l_574 = &g_364;
        int i, j;
        (*l_413) = (l_412 = l_410);
    }
    return (*l_294);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_88[i][j][k], "g_88[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_654[i], "g_654[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_684[i], "g_684[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    transparent_crc(g_1117, "g_1117", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1412[i], "g_1412[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1416, "g_1416", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1433[i][j], "g_1433[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1496[i], "g_1496[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1691, "g_1691", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
