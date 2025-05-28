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



static int g_15 = 0L;
static int *g_17 = &g_15;
static unsigned long long g_38[6] = {18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL};
static int *g_63 = &g_15;
static int **g_62 = &g_63;
static unsigned long long g_71 = 0x9E48991CD3C6E85ALL;
static int g_74 = 0x219E2060L;
static unsigned g_92 = 2UL;
static unsigned char g_97 = 248UL;
static unsigned g_107 = 18446744073709551615UL;
static unsigned char g_113 = 0UL;
static unsigned g_120 = 0xF76FE418L;
static unsigned g_122 = 0xE874D084L;
static unsigned *g_129 = &g_92;
static unsigned **g_128[7] = {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129};
static char g_148 = 0L;
static unsigned short g_150 = 65532UL;
static unsigned char g_175[4][8][7] = {{{0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}}, {{0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}}, {{0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}}, {{0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}, {0x7DL, 247UL, 249UL, 0x9AL, 2UL, 7UL, 246UL}}};
static short g_188 = 8L;
static int g_189 = 7L;
static const int *g_192 = (void*)0;
static const int **g_191 = &g_192;
static long long g_203[5] = {(-5L), (-5L), (-5L), (-5L), (-5L)};
static unsigned char g_258 = 0UL;
static unsigned char g_269 = 1UL;
static int *g_289[7] = {&g_74, &g_74, &g_74, &g_74, &g_74, &g_74, &g_74};
static int g_310 = 0x28B7BCCEL;
static int *g_309 = &g_310;



static int func_1(void);
static int * func_2(unsigned short p_3, int * p_4, const unsigned char p_5, short p_6, int * p_7);
static int * func_18(unsigned p_19, unsigned p_20, const int * p_21, long long p_22);
static unsigned func_23(unsigned long long p_24, int p_25, int p_26);
static int func_29(int p_30);
static long long func_31(short p_32, long long p_33, int * p_34, const int * p_35, char p_36);
static int ** func_43(int * p_44, unsigned char p_45, short p_46, const int ** p_47, int ** p_48);
static unsigned func_49(unsigned char p_50);
static unsigned short func_53(long long p_54, int p_55);
static int func_57(int ** p_58, int ** p_59, unsigned p_60);
static int func_1(void)
{
    int *l_14[4][5] = {{&g_15, &g_15, (void*)0, &g_15, &g_15}, {&g_15, &g_15, (void*)0, &g_15, &g_15}, {&g_15, &g_15, (void*)0, &g_15, &g_15}, {&g_15, &g_15, (void*)0, &g_15, &g_15}};
    int **l_16[10][5] = {{&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}, {&l_14[2][3], &l_14[2][3], &l_14[2][3], &l_14[1][0], &l_14[2][3]}};
    unsigned long long *l_37 = &g_38[1];
    int *l_39[1][9][2] = {{{(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}, {(void*)0, &g_15}}};
    const int *l_40 = &g_15;
    char l_317 = 0x44L;
    int i, j, k;
    (*g_191) = ((*g_62) = func_2((((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((g_17 = l_14[2][3]) == ((*g_191) = func_18(g_15, func_23((((65535UL >= ((safe_rshift_func_int16_t_s_u(((-1L) < 0x0F88L), 11)) || (g_15 || 0xDF860956L))) == (func_29((func_31((((*l_37) = g_15) , ((!g_15) | g_38[1])), g_15, l_39[0][8][1], l_40, g_15) & 0xB775D0AAF9E480F2LL)) <= 1L)) , 1UL), g_107, g_175[2][4][1]), &g_310, g_189))) || 18446744073709551614UL), g_97)), l_317)), 8)) | g_310) ^ g_71), &g_310, g_189, g_175[2][1][0], &g_310));
    for (g_122 = 2; (g_122 <= 6); g_122 += 1)
    {
        return g_269;
    }
    return g_74;
}







static int * func_2(unsigned short p_3, int * p_4, const unsigned char p_5, short p_6, int * p_7)
{
    const int l_326[6][2] = {{0x37ED4D81L, (-8L)}, {0x37ED4D81L, (-8L)}, {0x37ED4D81L, (-8L)}, {0x37ED4D81L, (-8L)}, {0x37ED4D81L, (-8L)}, {0x37ED4D81L, (-8L)}};
    const unsigned long long *l_333 = &g_38[1];
    const unsigned long long **l_334 = &l_333;
    unsigned *l_339 = &g_120;
    int l_340[5];
    char l_341 = 0xBFL;
    int l_342 = 0L;
    int *l_343[2][9][9] = {{{&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}}, {{&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}, {&g_15, &g_15, &g_15, &g_74, &g_74, &g_15, &g_74, &g_74, (void*)0}}};
    long long l_344[9] = {1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_340[i] = 0L;
    l_344[8] = (l_342 = (((safe_lshift_func_int16_t_s_s(((+((safe_rshift_func_uint16_t_u_s((((l_340[1] = ((*p_7) = (safe_rshift_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(l_326[0][1], (safe_sub_func_uint64_t_u_u((((*l_339) = (safe_mod_func_uint64_t_u_u(func_53((safe_mod_func_int16_t_s_s((l_326[0][1] == ((*l_339) = (((&g_38[1] != ((*l_334) = l_333)) , (safe_rshift_func_int8_t_s_u(((0xDC15L & l_326[4][0]) & ((*g_129) = p_3)), l_326[0][1]))) <= (safe_lshift_func_int8_t_s_s((((l_326[0][1] < l_326[1][1]) || g_175[3][0][4]) == 65534UL), 1))))), 65535UL)), (*p_7)), g_38[1]))) , 18446744073709551615UL), l_326[0][1])))) | p_3) && 0xAEL), l_326[0][1])))) < l_341) == 0L), l_341)) , 2UL)) , (-8L)), 13)) <= 1L) != 0x199AL));
    return p_7;
}







static int * func_18(unsigned p_19, unsigned p_20, const int * p_21, long long p_22)
{
    int *l_315 = &g_15;
    short l_316 = 0L;
    l_316 = ((*l_315) = 1L);
    return l_315;
}







static unsigned func_23(unsigned long long p_24, int p_25, int p_26)
{
    int **l_305 = &g_289[3];
    int *l_306[10][7] = {{&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}, {&g_74, &g_15, &g_15, &g_74, &g_74, &g_74, &g_15}};
    int i, j;
    p_26 = (safe_add_func_uint64_t_u_u((p_26 & p_24), (1L || p_24)));
    for (g_74 = 0; (g_74 <= 18); ++g_74)
    {
        const int l_313 = 0L;
        unsigned long long *l_314 = &g_38[1];
        g_309 = (*l_305);
        (*l_305) = ((*g_62) = ((safe_sub_func_uint8_t_u_u((((void*)0 == l_306[2][3]) ^ (l_313 , ((*l_314) = 0xA9E2D56DB8B67305LL))), 1UL)) , (void*)0));
    }
    return g_310;
}







static int func_29(int p_30)
{
    unsigned long long l_301[9][2] = {{0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}, {0x6F4178D8C225B8D5LL, 0x6F4178D8C225B8D5LL}};
    long long l_302 = 0xFA89BE3DDDF1C7ABLL;
    int i, j;
    p_30 = ((safe_lshift_func_int8_t_s_s(g_203[4], 4)) , (0x7D202A44L & (safe_sub_func_int32_t_s_s((0xDF3B5059EE497319LL >= 0x713E002D6E056E40LL), (l_301[6][0] > p_30)))));
    return l_302;
}







static long long func_31(short p_32, long long p_33, int * p_34, const int * p_35, char p_36)
{
    unsigned char l_56[6] = {0x85L, 0x85L, 0UL, 0x85L, 0x85L, 0UL};
    int **l_61 = (void*)0;
    unsigned long long *l_70 = &g_71;
    char l_210 = 0xB4L;
    int l_211[5];
    int l_226[7] = {(-1L), (-4L), (-1L), (-4L), (-1L), (-4L), (-1L)};
    unsigned l_277 = 0xADD1EA78L;
    unsigned **l_281[5][2][8] = {{{&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}, {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}}, {{&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}, {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}}, {{&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}, {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}}, {{&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}, {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}}, {{&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}, {&g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129, &g_129}}};
    int *l_284 = &l_211[1];
    short l_285[9][7] = {{0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}, {0x2F76L, 0x2F76L, (-5L), 0x2F76L, 0x2F76L, (-5L), 0x2F76L}};
    unsigned short l_292 = 0xD9C4L;
    char *l_293 = (void*)0;
    char *l_294[2];
    int *l_295[1];
    int l_296[2][3] = {{0x40F77E53L, 0xF3F1C0D4L, 0x40F77E53L}, {0x40F77E53L, 0xF3F1C0D4L, 0x40F77E53L}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_211[i] = 0L;
    for (i = 0; i < 2; i++)
        l_294[i] = &g_148;
    for (i = 0; i < 1; i++)
        l_295[i] = &g_74;
    for (p_33 = (-9); (p_33 <= (-12)); p_33 = safe_sub_func_uint8_t_u_u(p_33, 2))
    {
        int l_66[4][10] = {{0L, 0x94C655EFL, (-9L), 1L, 0xBF2FEA27L, 0xC8D21259L, 0xE18E6F96L, 0xA41D407BL, 0xE18E6F96L, 0xC8D21259L}, {0L, 0x94C655EFL, (-9L), 1L, 0xBF2FEA27L, 0xC8D21259L, 0xE18E6F96L, 0xA41D407BL, 0xE18E6F96L, 0xC8D21259L}, {0L, 0x94C655EFL, (-9L), 1L, 0xBF2FEA27L, 0xC8D21259L, 0xE18E6F96L, 0xA41D407BL, 0xE18E6F96L, 0xC8D21259L}, {0L, 0x94C655EFL, (-9L), 1L, 0xBF2FEA27L, 0xC8D21259L, 0xE18E6F96L, 0xA41D407BL, 0xE18E6F96L, 0xC8D21259L}};
        unsigned long long *l_67 = &g_38[1];
        unsigned short *l_190 = &g_150;
        int **l_195 = (void*)0;
        long long *l_202 = &g_203[4];
        int l_208 = 0x1A808AF1L;
        int *l_209 = &l_208;
        int i, j;
    }
    if ((l_211[1] = l_210))
    {
        unsigned char l_216 = 0x17L;
        unsigned char *l_217 = &g_113;
        char *l_218 = &l_210;
        int l_224 = (-1L);
        int l_232 = 3L;
        int l_244 = 9L;
        char l_247 = 0x4FL;
        int *l_286 = &l_244;
        if (((safe_add_func_uint64_t_u_u((((*l_218) = (safe_lshift_func_int8_t_s_u(p_32, g_150))) >= p_36), p_36)) > (*p_35)))
        {
            unsigned short l_219[6] = {0xEA1FL, 0x728DL, 0xEA1FL, 0x728DL, 0xEA1FL, 0x728DL};
            int *l_225[2];
            short l_229 = 0x84C5L;
            unsigned short *l_233 = &l_219[5];
            char l_243 = (-1L);
            short l_275 = 0xA4E4L;
            int i;
            for (i = 0; i < 2; i++)
                l_225[i] = (void*)0;
            l_226[1] = ((l_211[3] = l_219[5]) >= (safe_rshift_func_int8_t_s_u((-9L), (l_216 > (l_224 = ((0xD44FL > ((safe_add_func_uint8_t_u_u((4294967295UL && (p_33 ^ l_216)), g_71)) , (g_148 , 0x0385L))) <= p_33))))));
            for (l_224 = 0; (l_224 >= (-19)); l_224--)
            {
                (*g_62) = l_225[0];
            }
            if (((((*l_233) = (((((g_150 = p_33) > ((p_36 > p_36) && p_36)) <= p_36) , (safe_add_func_int64_t_s_s((0UL ^ l_232), 0x111986F86244AF00LL))) , g_203[4])) , (void*)0) != (void*)0))
            {
                long long l_242 = 9L;
                int l_251 = 0x910EDCCFL;
                if ((~(safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((void*)0 == p_35) ^ ((safe_lshift_func_uint8_t_u_u(l_224, l_224)) != 0L)), l_242)) == 0x9C49DC47L), g_148))))
                {
                    unsigned short *l_245[6][9] = {{&l_219[5], &l_219[5], &g_150, &l_219[5], (void*)0, &l_219[5], &l_219[5], &l_219[1], &l_219[3]}, {&l_219[5], &l_219[5], &g_150, &l_219[5], (void*)0, &l_219[5], &l_219[5], &l_219[1], &l_219[3]}, {&l_219[5], &l_219[5], &g_150, &l_219[5], (void*)0, &l_219[5], &l_219[5], &l_219[1], &l_219[3]}, {&l_219[5], &l_219[5], &g_150, &l_219[5], (void*)0, &l_219[5], &l_219[5], &l_219[1], &l_219[3]}, {&l_219[5], &l_219[5], &g_150, &l_219[5], (void*)0, &l_219[5], &l_219[5], &l_219[1], &l_219[3]}, {&l_219[5], &l_219[5], &g_150, &l_219[5], (void*)0, &l_219[5], &l_219[5], &l_219[1], &l_219[3]}};
                    int l_246 = 0x6AF2070FL;
                    unsigned *l_250[5][1];
                    unsigned char l_257 = 7UL;
                    int l_270[5][7][7] = {{{0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}}, {{0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}}, {{0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}}, {{0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}}, {{0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}, {0x0941A963L, 5L, 0x2B726A70L, 2L, 1L, 0x8A3034F4L, 0x7194E90CL}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_250[i][j] = &g_107;
                    }
                    g_74 = (p_36 | func_49((((void*)0 != l_245[4][8]) ^ g_203[0])));
                    if ((((((l_246 >= (func_49(l_247) > (((((l_226[3] = (safe_sub_func_int16_t_s_s(((l_251 = p_33) , (safe_add_func_int8_t_s_s(((+((void*)0 != &g_128[0])) , (((*p_35) && (g_74 = (l_251 = (((((((*g_129) = ((*g_129) & (safe_add_func_uint8_t_u_u(func_49((safe_unary_minus_func_uint32_t_u(p_33))), g_15)))) > l_244) | 0xE5D4L) >= l_257) & l_242) , l_251)))) && g_38[1])), 251UL))), l_247))) != (*p_35)) > g_71) && 0L) >= l_246))) & 0x96CBE47265DA1E0ELL) & l_246) , g_258) && (*p_35)))
                    {
                        long long *l_268 = (void*)0;
                        char *l_271 = &l_243;
                        g_74 = (((*l_271) = ((*l_218) = (((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(l_257)), ((safe_sub_func_uint8_t_u_u(p_33, (((((*g_62) = p_34) == p_34) , ((safe_sub_func_int8_t_s_s(((g_269 = (g_203[4] = g_175[0][3][5])) | ((&p_36 == (void*)0) <= ((*l_217) = (func_49((&g_191 == ((g_120 , l_270[4][3][3]) , &g_191))) , g_122)))), 0xB6L)) , g_203[1])) , 0L))) != l_226[1]))) || 0x41L), (-1L))) , g_175[2][6][4]) && 8UL))) == p_33);
                    }
                    else
                    {
                        l_246 = (*p_35);
                    }
                    for (l_242 = 0; (l_242 >= 26); ++l_242)
                    {
                        return g_74;
                    }
                }
                else
                {
                    unsigned **l_274 = &g_129;
                    l_226[6] = (&g_129 == l_274);
                    for (p_32 = 4; (p_32 >= 0); p_32 -= 1)
                    {
                        short *l_276 = &g_188;
                        unsigned short l_278 = 0UL;
                        int i;
                        l_275 = (l_211[p_32] = (*p_35));
                        g_74 = (l_244 = ((0L && (((*l_276) = (func_49(g_15) || (!0xC9A88411L))) || (l_247 || l_277))) ^ (l_211[p_32] > g_189)));
                        l_278 = l_211[p_32];
                    }
                }
            }
            else
            {
                for (l_247 = 4; (l_247 >= 0); l_247 -= 1)
                {
                    int l_280 = 0L;
                    for (g_150 = 1; (g_150 <= 6); g_150 += 1)
                    {
                        int *l_279 = &g_74;
                        (*g_191) = l_279;
                    }
                    if ((*p_35))
                        continue;
                    return l_280;
                }
                return p_36;
            }
        }
        else
        {
            int *l_282 = (void*)0;
            int *l_283 = &l_211[1];
            (*l_283) = ((void*)0 != l_281[0][1][5]);
            l_284 = (g_113 , (g_203[4] , (p_34 = p_34)));
            (*l_283) = (l_216 >= g_269);
        }
        l_285[7][1] = l_224;
        (*l_286) = func_49(g_107);
        for (g_269 = 3; (g_269 < 35); ++g_269)
        {
            (*g_62) = (g_289[4] = (void*)0);
        }
    }
    else
    {
        return g_38[2];
    }
    l_296[1][0] = (p_36 & (((((((void*)0 == &l_210) & (-5L)) , (safe_rshift_func_uint8_t_u_s(p_33, (g_148 = p_32)))) >= p_33) , 0xC4A7L) | p_32));
    return g_113;
}







static int ** func_43(int * p_44, unsigned char p_45, short p_46, const int ** p_47, int ** p_48)
{
    int l_193 = 0x78E42A5BL;
    int **l_194 = &g_63;
    l_193 = 0x5E3B42F9L;
    return l_194;
}







static unsigned func_49(unsigned char p_50)
{
    return g_150;
}







static unsigned short func_53(long long p_54, int p_55)
{
    int **l_105 = &g_63;
    int **l_106[7] = {&g_63, &g_63, &g_63, &g_63, &g_63, &g_63, &g_63};
    int l_123 = 0x65CC1FFDL;
    unsigned long long l_163 = 6UL;
    int i;
    (*g_62) = &p_55;
    (*g_63) = (p_55 ^ p_54);
    g_107 = (g_74 = ((*g_63) = (safe_sub_func_uint8_t_u_u((l_105 == l_106[4]), 0x3AL))));
    for (g_107 = 0; (g_107 < 25); g_107++)
    {
        long long l_110 = 0x390277B54E5BA692LL;
        unsigned long long *l_111[5][2] = {{&g_38[1], &g_38[1]}, {&g_38[1], &g_38[1]}, {&g_38[1], &g_38[1]}, {&g_38[1], &g_38[1]}, {&g_38[1], &g_38[1]}};
        unsigned char *l_112 = &g_113;
        int l_114 = 0xB8CDD756L;
        unsigned *l_126 = (void*)0;
        unsigned **l_125 = &l_126;
        int **l_170 = &g_63;
        int *l_174 = &g_74;
        int i, j;
        l_114 = (func_57(l_106[4], &g_63, (l_110 & ((void*)0 != l_111[0][0]))) ^ ((*l_112) = 255UL));
        if (p_55)
        {
            int **l_115 = (void*)0;
            long long *l_116 = &l_110;
            unsigned *l_119 = &g_120;
            unsigned *l_121 = &g_122;
            int *l_124 = &l_114;
            p_55 = (((p_54 != (((g_38[0] || (((((1L || ((*l_116) = func_57(l_115, l_106[4], g_15))) <= (~(safe_sub_func_int32_t_s_s((p_54 <= (((*l_121) = (((*l_119) = ((l_114 >= p_54) || l_114)) && p_54)) || p_54)), 9UL)))) < p_55) , (void*)0) != (void*)0)) | l_123) < p_55)) <= g_15) == p_54);
            (*g_62) = l_124;
        }
        else
        {
            unsigned ***l_127[6] = {&l_125, &l_125, (void*)0, &l_125, &l_125, (void*)0};
            int l_144 = 0L;
            int **l_145 = &g_63;
            int ***l_178[7] = {&l_105, &l_105, &l_170, &l_105, &l_105, &l_170, &l_105};
            short *l_187 = &g_188;
            int i;
            g_128[0] = l_125;
            for (l_114 = (-8); (l_114 < 24); ++l_114)
            {
                unsigned * const *l_132 = (void*)0;
                int **l_168 = &g_63;
                if ((*g_63))
                    break;
                for (g_122 = 0; (g_122 <= 1); g_122 += 1)
                {
                    unsigned * const **l_133 = &l_132;
                    (*l_133) = l_132;
                }
                (*g_62) = &p_55;
                for (g_113 = (-6); (g_113 <= 50); g_113 = safe_add_func_int8_t_s_s(g_113, 8))
                {
                    long long *l_157 = &l_110;
                    unsigned short *l_160 = &g_150;
                }
            }
            if (g_175[3][0][4])
                continue;
            g_189 = ((*g_63) = (((*l_187) = ((safe_add_func_int16_t_s_s(p_55, (safe_sub_func_uint8_t_u_u(g_71, (safe_sub_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(((p_54 && (**g_62)) | ((safe_rshift_func_int16_t_s_s(g_38[1], p_54)) && (**l_170))), g_74)) | p_54), 18446744073709551612UL)))))) & 0xBBF6L)) ^ g_175[3][0][4]));
        }
        (*g_62) = &p_55;
        return p_54;
    }
    return p_54;
}







static int func_57(int ** p_58, int ** p_59, unsigned p_60)
{
    char l_78[5] = {(-9L), 8L, (-9L), 8L, (-9L)};
    unsigned *l_91 = &g_92;
    int l_93 = (-1L);
    unsigned char *l_96[1];
    int l_98 = 0xB947F03FL;
    const int *l_100[5][1][10] = {{{&g_15, &g_74, (void*)0, &g_74, &g_15, &g_74, &g_74, &g_74, &g_15, &g_74}}, {{&g_15, &g_74, (void*)0, &g_74, &g_15, &g_74, &g_74, &g_74, &g_15, &g_74}}, {{&g_15, &g_74, (void*)0, &g_74, &g_15, &g_74, &g_74, &g_74, &g_15, &g_74}}, {{&g_15, &g_74, (void*)0, &g_74, &g_15, &g_74, &g_74, &g_74, &g_15, &g_74}}, {{&g_15, &g_74, (void*)0, &g_74, &g_15, &g_74, &g_74, &g_74, &g_15, &g_74}}};
    const int **l_99 = &l_100[1][0][0];
    int l_101 = 1L;
    unsigned l_102 = 0xF2DAC479L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_96[i] = &g_97;
    for (p_60 = (-18); (p_60 >= 10); p_60 = safe_add_func_uint16_t_u_u(p_60, 8))
    {
        long long l_75 = 0x3FFCD553B787D1A3LL;
        if (((void*)0 == &g_63))
        {
            (*g_62) = (*g_62);
            if ((**p_59))
                continue;
            (*p_59) = (*g_62);
            if (g_74)
            {
                l_75 = (**g_62);
            }
            else
            {
                int *l_77[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_77[i] = &g_74;
                for (g_71 = 0; (g_71 <= 5); g_71 += 1)
                {
                    int *l_76 = &g_74;
                    int i;
                    (*g_62) = l_76;
                    if (g_38[g_71])
                        break;
                    for (l_75 = 5; (l_75 >= 1); l_75 -= 1)
                    {
                        (*p_59) = (*g_62);
                        (*g_62) = l_77[1];
                    }
                    (**g_62) = (((g_38[g_71] || g_38[1]) | (p_60 <= l_78[2])) , 7L);
                }
            }
        }
        else
        {
            short l_82[5][10][3] = {{{(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}}, {{(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}}, {{(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}}, {{(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}}, {{(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}, {(-3L), 1L, (-5L)}}};
            int i, j, k;
            for (l_75 = 5; (l_75 >= 0); l_75 -= 1)
            {
                int *l_81[6][5] = {{(void*)0, &g_74, (void*)0, &g_74, (void*)0}, {(void*)0, &g_74, (void*)0, &g_74, (void*)0}, {(void*)0, &g_74, (void*)0, &g_74, (void*)0}, {(void*)0, &g_74, (void*)0, &g_74, (void*)0}, {(void*)0, &g_74, (void*)0, &g_74, (void*)0}, {(void*)0, &g_74, (void*)0, &g_74, (void*)0}};
                int i, j;
                (*g_62) = (*p_59);
                l_82[3][0][2] = (safe_sub_func_uint16_t_u_u(g_38[l_75], ((*g_63) & 0x302A6F41L)));
            }
        }
        if (l_78[1])
            continue;
    }
    l_101 = ((safe_lshift_func_uint8_t_u_s(g_71, p_60)) ^ ((safe_lshift_func_uint8_t_u_s(((l_78[2] <= (safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u(((l_78[4] | l_78[0]) , (l_93 = ((*l_91) = (p_60 < g_38[1])))), (((safe_mod_func_int32_t_s_s((((l_98 = (g_97 = l_78[2])) >= ((((l_78[2] == 0x37L) <= 0x18L) <= 4294967292UL) , l_78[2])) != 0x2509B59B1E0FC072LL), 0xF99B685FL)) | p_60) || l_78[4]))) , l_99) == (void*)0), p_60))) , g_97), 1)) & g_38[1]));
    return l_102;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_175[i][j][k], "g_175[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
