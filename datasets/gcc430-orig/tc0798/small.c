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



static unsigned short g_11 = 0x3072L;
static char g_13 = (-4L);
static int g_24 = (-5L);
static int *g_23 = &g_24;
static short g_49[4][9] = {{0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L}, {0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L}, {0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L}, {0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L, 0x2772L}};
static unsigned short g_61 = 3UL;
static int **g_92 = &g_23;
static int ***g_91[4][3][4] = {{{&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}}, {{&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}}, {{&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}}, {{&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92, &g_92}}};
static int *g_110 = (void*)0;
static short g_121[5][5][7] = {{{0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}}, {{0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}}, {{0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}}, {{0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}}, {{0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}, {0x7538L, 0x90BBL, 0x2C7FL, (-7L), 7L, 0xA35DL, 0L}}};
static short g_124 = 0x18DFL;
static char g_138 = 5L;
static unsigned g_140 = 0x48CD50E3L;
static unsigned short g_142[4][1] = {{0x5E79L}, {0x5E79L}, {0x5E79L}, {0x5E79L}};
static unsigned g_143 = 0x82750ABAL;
static unsigned short g_158[3] = {8UL, 8UL, 8UL};
static unsigned short g_201[2] = {1UL, 1UL};
static unsigned **g_247 = (void*)0;
static unsigned char *g_276 = (void*)0;
static unsigned g_278[6] = {0xCA8C21EBL, 0xCA8C21EBL, 4294967286UL, 0xCA8C21EBL, 0xCA8C21EBL, 4294967286UL};
static int g_333 = 0x40933524L;
static unsigned char g_358 = 1UL;
static unsigned short *g_418 = &g_158[1];
static unsigned short **g_417 = &g_418;
static short **g_433 = (void*)0;
static short g_447 = 7L;
static unsigned short ***g_557 = (void*)0;
static int g_616 = (-4L);
static unsigned short g_716 = 0x4FDAL;
static short g_729 = 0xF3DBL;
static int g_730 = (-10L);
static int g_753 = (-1L);
static unsigned short *g_767 = &g_716;
static unsigned g_806 = 0x31949A7FL;
static unsigned short g_820 = 0x1619L;
static char g_974[8][3] = {{0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}, {0xA2L, 0xA2L, 0x85L}};
static int *g_975 = &g_730;
static unsigned g_1056 = 4294967295UL;
static unsigned char **g_1093 = (void*)0;
static unsigned char ***g_1092[4][1] = {{&g_1093}, {&g_1093}, {&g_1093}, {&g_1093}};
static unsigned g_1168 = 0x12869893L;
static int ****g_1281 = &g_91[3][1][0];
static int *****g_1280[1][1][8] = {{{&g_1281, &g_1281, &g_1281, &g_1281, &g_1281, &g_1281, &g_1281, &g_1281}}};
static unsigned char g_1331 = 1UL;
static unsigned *g_1336 = &g_143;
static unsigned **g_1335 = &g_1336;
static unsigned short g_1389[10] = {65532UL, 0xF464L, 65535UL, 65535UL, 0xF464L, 65532UL, 0xF464L, 65535UL, 65535UL, 0xF464L};
static unsigned short g_1443 = 65535UL;
static char *g_1496 = &g_138;
static char **g_1495 = &g_1496;
static int *g_1513 = (void*)0;
static char *g_1661 = &g_138;
static char **g_1660 = &g_1661;
static char **g_1662 = &g_1661;
static char g_1714 = 0x86L;
static short g_1835[4] = {0L, 0L, 0L, 0L};
static int *g_1837[2][1] = {{&g_333}, {&g_333}};



static short func_1(void);
static int * func_2(int * p_3, char p_4, unsigned char p_5, int * p_6, unsigned p_7);
static int * func_8(int p_9, unsigned p_10);
static int * func_16(unsigned p_17, unsigned char p_18, int * p_19);
static unsigned func_38(short p_39, unsigned char p_40, char p_41);
static unsigned func_44(int * p_45, unsigned short * p_46);
static int * func_47(unsigned p_48);
static int func_50(short p_51, unsigned short * p_52, unsigned char p_53, unsigned char p_54);
static unsigned short * func_56(int * p_57, unsigned short * p_58, char p_59);
static unsigned func_62(char p_63);
static short func_1(void)
{
    int *l_12[6];
    int l_14 = (-1L);
    int **l_1836[3][1];
    int i, j;
    for (i = 0; i < 6; i++)
        l_12[i] = (void*)0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1836[i][j] = &g_975;
    }
    g_1837[1][0] = func_2(func_8((g_13 = g_11), l_14), l_14, (g_1331 , l_14), g_1336, (l_14 < l_14));
    return g_278[5];
}







static int * func_2(int * p_3, char p_4, unsigned char p_5, int * p_6, unsigned p_7)
{
    int *l_1581 = &g_616;
    int **l_1582 = (void*)0;
    int **l_1583 = &l_1581;
    int l_1586 = (-1L);
    unsigned char *l_1587[1];
    int l_1588 = 0x2B7EB771L;
    unsigned short *l_1591 = &g_201[0];
    unsigned *l_1592 = &g_278[5];
    unsigned short **l_1596[1][1];
    int l_1602 = 0xEBA80299L;
    unsigned **l_1629 = &g_1336;
    char **l_1632 = &g_1496;
    unsigned short *l_1656 = &g_1389[2];
    int l_1704[8] = {(-10L), 0x8B93D374L, (-10L), 0x8B93D374L, (-10L), 0x8B93D374L, (-10L), 0x8B93D374L};
    int *l_1705 = &g_753;
    int ******l_1706 = (void*)0;
    int l_1775[4][6][2] = {{{0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}}, {{0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}}, {{0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}}, {{0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}, {0x504846BCL, 0xFCA80E37L}}};
    unsigned short l_1792[1][2][9] = {{{8UL, 0x364CL, 8UL, 0x364CL, 8UL, 0x364CL, 8UL, 0x364CL, 8UL}, {8UL, 0x364CL, 8UL, 0x364CL, 8UL, 0x364CL, 8UL, 0x364CL, 8UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1587[i] = &g_358;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1596[i][j] = (void*)0;
    }
    (*p_3) = ((safe_sub_func_int8_t_s_s(((*g_1496) = func_38(p_5, (l_1586 = (p_4 < ((+p_4) <= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_4, (0x420FE436L < ((g_121[1][2][4] = (-5L)) != ((*g_92) != ((*l_1583) = l_1581)))))), (safe_sub_func_uint8_t_u_u(l_1586, p_4)))) < p_7)))), (*g_1496))), l_1588)) ^ 0x2FEDEF5EL);
    if (((*g_975) = (((safe_sub_func_uint8_t_u_u(((l_1586 , (p_7 || (l_1586 = ((*l_1592) = (((*p_6) = func_50(p_4, l_1591, ((g_24 , (void*)0) == (void*)0), l_1586)) <= (*g_975)))))) , 4UL), 253UL)) , p_4) , (*p_3))))
    {
        unsigned short **l_1593 = (void*)0;
        unsigned short ***l_1594 = (void*)0;
        unsigned short ***l_1595[4] = {&l_1593, &l_1593, &l_1593, &l_1593};
        unsigned *l_1597 = (void*)0;
        unsigned *l_1598 = (void*)0;
        short *l_1599 = (void*)0;
        int l_1600[4] = {1L, 0x9A9E7E43L, 1L, 0x9A9E7E43L};
        int l_1601 = 0x1C1F941BL;
        int *l_1603[8] = {&g_616, &g_616, &g_616, &g_616, &g_616, &g_616, &g_616, &g_616};
        int **l_1604 = &g_975;
        unsigned short ****l_1630 = &l_1594;
        unsigned char l_1658 = 1UL;
        unsigned l_1674 = 1UL;
        int l_1686 = 0xF81B483BL;
        int *****l_1708 = (void*)0;
        char l_1757[10];
        unsigned char l_1758 = 0UL;
        char **l_1777 = &g_1496;
        int i;
        for (i = 0; i < 10; i++)
            l_1757[i] = (-4L);
        (*g_975) = (*p_6);
        p_3 = ((*l_1604) = &g_730);
        for (l_1586 = 0; (l_1586 <= (-28)); l_1586 = safe_sub_func_int16_t_s_s(l_1586, 3))
        {
            unsigned l_1613 = 0xA2D76BA0L;
            unsigned short *l_1616 = &g_61;
            unsigned short l_1617[6] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
            int i;
            if ((p_4 , (*p_6)))
            {
                if ((*p_6))
                {
                    (**l_1604) = (*g_975);
                }
                else
                {
                    (*g_975) = 0x99BCE3B7L;
                    (*g_975) = ((*g_417) != (void*)0);
                }
            }
            else
            {
                (*p_3) = (0x84BCL != p_5);
                (*l_1604) = &l_1588;
            }
            return p_3;
        }
        if (((*p_3) = (safe_mul_func_uint8_t_u_u((l_1586 >= ((((((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(func_44(((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((void*)0 != l_1629), ((*g_767) , p_7))), (((*l_1630) = &g_417) == &g_417))) , l_1603[0]), func_56((((((**g_1495) = (((**l_1604) > (**g_417)) != (**l_1604))) , p_7) <= 0x6AL) , (void*)0), (*g_417), p_5)), p_4)) < (**l_1604)), p_5)))) , (*p_3)) || 0x0FA1F94BL) , p_7) != p_5) , p_4)), p_4))))
        {
            unsigned char l_1631[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1631[i] = 1UL;
            (*g_975) = (((((l_1631[0] , l_1632) == (void*)0) | (safe_mul_func_uint16_t_u_u(((*g_767) = (**g_417)), 1L))) && (safe_add_func_int32_t_s_s((((void*)0 != &g_1093) , (*g_975)), l_1631[0]))) != l_1588);
        }
        else
        {
            short *l_1643 = (void*)0;
            short *l_1644[8][6] = {{&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}, {&g_121[1][4][6], &g_49[1][0], (void*)0, (void*)0, &g_49[1][4], (void*)0}};
            int l_1651 = 0xAFFE7D89L;
            char *l_1657 = (void*)0;
            char ***l_1659[3];
            int *l_1677[9] = {&l_1600[0], (void*)0, &l_1600[0], (void*)0, &l_1600[0], (void*)0, &l_1600[0], (void*)0, &l_1600[0]};
            int l_1737 = 5L;
            unsigned char l_1741 = 0xE7L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1659[i] = &l_1632;
            (*p_3) = ((0xAFF0L == (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(0UL, 1UL)), 1))) , (*p_6));
            if (((**g_1495) | ((safe_mod_func_uint16_t_u_u((((l_1588 = ((**l_1604) = 5L)) , 1UL) != (safe_lshift_func_int8_t_s_s(0L, (safe_lshift_func_uint8_t_u_u(0x8BL, (((g_1662 = (g_1660 = ((safe_rshift_func_int8_t_s_s(((!l_1651) && ((-1L) <= (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((l_1658 = (((~(p_4 = (func_44(p_3, l_1656) ^ 0x30L))) >= p_7) < g_142[2][0])) ^ 8UL), p_7)), 11)))), 3)) , &g_1496))) != (void*)0) ^ g_201[0])))))), p_5)) <= l_1586)))
            {
                (*p_6) = ((((&g_1662 == &l_1632) <= (**l_1604)) <= (0UL != l_1651)) && 1L);
            }
            else
            {
                unsigned l_1663 = 1UL;
                unsigned short *l_1664[8][1] = {{&g_820}, {&g_820}, {&g_820}, {&g_820}, {&g_820}, {&g_820}, {&g_820}, {&g_820}};
                int ****l_1665 = (void*)0;
                int ****l_1667 = &g_91[3][1][0];
                int *****l_1666 = &l_1667;
                int i, j;
                (*l_1604) = ((((p_7 | l_1663) , ((p_4 <= (((((**g_1495) = 0x21L) > func_44((***g_1281), l_1664[5][0])) , l_1665) == ((*l_1666) = l_1665))) , p_7)) != p_4) , &g_753);
                (*g_975) = ((safe_rshift_func_uint8_t_u_u((g_24 == ((**l_1604) | (((0xD867L != ((l_1602 = ((**l_1583) = 1L)) , p_4)) > (p_7 , ((**g_1660) = (+((((safe_add_func_int8_t_s_s(func_44(((1UL != (safe_sub_func_uint16_t_u_u(p_5, func_44((*g_92), l_1644[0][2])))) , p_6), l_1664[5][0]), l_1674)) | 2L) <= p_5) < g_716))))) <= 0x1AF1L))), p_7)) , (*p_6));
                (*g_975) = (*p_3);
            }
            for (g_140 = (-30); (g_140 != 22); g_140 = safe_add_func_uint32_t_u_u(g_140, 2))
            {
                char l_1685 = 4L;
                int l_1739 = 0xEECB0CBDL;
                int l_1756 = 0xFB422406L;
                int *l_1767 = &g_616;
                unsigned short *l_1768 = &g_61;
                char **l_1776 = &g_1496;
                unsigned **l_1780 = &g_1336;
            }
        }
    }
    else
    {
        unsigned short l_1799 = 0x59B1L;
        int l_1834 = 0xC4FC82FBL;
        for (g_1168 = 0; (g_1168 <= 1); g_1168 += 1)
        {
            char l_1797[5] = {1L, 0xCFL, 1L, 0xCFL, 1L};
            int *l_1812 = &g_616;
            int i;
            if (l_1792[0][1][1])
                break;
            for (g_11 = 0; (g_11 <= 1); g_11 += 1)
            {
                int l_1798 = 0x628E241CL;
                int l_1831 = 0x67020B8AL;
                (*p_6) = (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_1797[0], (-1L))), (l_1799 , (p_7 & (((l_1799 & (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((p_7 & (*l_1705)) , (safe_add_func_int32_t_s_s((*p_3), l_1798))) , 0xD3L), (*g_1496))), (*l_1705)))) , p_3) != (void*)0)))));
                (*l_1705) = (p_7 ^ 0x3C07L);
                if (l_1799)
                    continue;
                if (l_1798)
                    continue;
                for (g_616 = 1; (g_616 >= 0); g_616 -= 1)
                {
                    unsigned char **l_1826 = &l_1587[0];
                    short *l_1832 = (void*)0;
                    short *l_1833 = (void*)0;
                    int i, j, k;
                    (*g_975) = (-1L);
                    (*g_975) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((*p_3) = ((*p_6) = func_44(l_1812, &l_1799))), ((safe_rshift_func_int16_t_s_s((l_1775[(g_616 + 2)][(g_616 + 2)][g_11] , ((((safe_mul_func_uint8_t_u_u(0x08L, (safe_rshift_func_int16_t_s_u((l_1834 = ((safe_rshift_func_uint16_t_u_u(((**g_417) = (*g_767)), (((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_add_func_int16_t_s_s(((((void*)0 == l_1826) == (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((p_5 & l_1831) <= g_138), 0x29L)) ^ l_1797[1]), 4))) == (*g_1496)), 0x96FCL)))), 0xDD711CCEL)) && p_7) > (-3L)))) & p_7)), (*l_1705))))) == p_5) != 0xA78EL) , 1L)), g_13)) ^ l_1799))), g_1835[3]));
                }
            }
        }
        (*p_6) = l_1834;
    }
    return &g_753;
}







static int * func_8(int p_9, unsigned p_10)
{
    unsigned char l_15 = 1UL;
    int *l_1293 = (void*)0;
    int *l_1342 = &g_730;
    int *l_1345 = (void*)0;
    int *l_1346[9] = {&g_730, (void*)0, &g_730, (void*)0, &g_730, (void*)0, &g_730, (void*)0, &g_730};
    unsigned char ***l_1350 = &g_1093;
    unsigned short *l_1354 = &g_142[1][0];
    unsigned l_1373 = 18446744073709551612UL;
    unsigned l_1378 = 0xC95E8BC4L;
    unsigned l_1413 = 18446744073709551608UL;
    int l_1416 = 0x94AA8FDEL;
    unsigned l_1444 = 0xA3712390L;
    int ***l_1447 = &g_92;
    int l_1476 = 2L;
    unsigned short l_1518 = 65529UL;
    int l_1544 = (-1L);
    short **l_1570 = (void*)0;
    int i;
    if ((g_11 | l_15))
    {
        int l_20 = (-1L);
        unsigned short *l_25 = &g_11;
        int **l_1334 = &g_975;
        (*l_1334) = func_16((l_20 , (safe_mul_func_uint16_t_u_u(1UL, ((((((*l_25) = (g_13 ^ ((void*)0 != g_23))) ^ (((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(l_20, func_38((safe_add_func_uint32_t_u_u(func_44(func_47(l_20), (*g_417)), 0xCABDBE42L)), l_20, p_10))) && l_20) & 0L), 1UL)), 2)), 0x1882L)), 0xEA64969EL)) > 0x2DC7L) != (-1L))) == l_15) ^ l_20) ^ 0x0AL)))), l_15, l_1293);
    }
    else
    {
        int *l_1339 = &g_616;
        int **l_1340 = (void*)0;
        int **l_1341[9] = {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110, &g_110, &g_110, &g_110};
        int i;
        l_1342 = func_16(((g_1335 == (void*)0) == p_9), (safe_rshift_func_uint16_t_u_s((*g_767), 9)), l_1339);
    }
    g_333 = (safe_add_func_int16_t_s_s(p_9, p_10));
    if (p_9)
    {
        int *l_1353 = &g_333;
        char l_1417 = 0xEAL;
        int **l_1418 = &g_975;
        unsigned short *l_1425[4][9][4] = {{{&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}}, {{&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}}, {{&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}}, {{&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}, {&g_142[2][0], &g_61, &g_142[2][0], &g_61}}};
        unsigned *l_1426 = &g_278[3];
        unsigned *l_1427[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        int l_1428 = 1L;
        int i, j, k;
        if (func_44(l_1346[7], func_56(l_1353, l_1354, p_10)))
        {
            unsigned *l_1361[2];
            char *l_1362 = &g_974[5][0];
            int l_1363 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_1361[i] = &g_1056;
            if ((safe_lshift_func_int8_t_s_u(((*l_1362) = ((0x275BL ^ ((safe_lshift_func_uint8_t_u_s(((*l_1353) , (g_201[0] ^ p_9)), 2)) == ((safe_add_func_int32_t_s_s(((void*)0 == &l_1346[3]), g_201[1])) | (g_1056 = p_10)))) , p_10)), l_1363)))
            {
                short *l_1370 = &g_121[1][0][1];
                short *l_1371 = (void*)0;
                int l_1372 = 0x9ED3D954L;
                g_730 = (safe_add_func_uint8_t_u_u((((*l_1353) > (((g_447 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((*l_1370) = (0xF2L <= p_9)), p_9)), 5)) , ((void*)0 != &l_1345))) == (g_1056 , p_10)) , l_1372)) > g_13), l_1373));
            }
            else
            {
                unsigned char *l_1374 = &g_358;
                int **l_1375 = &l_1345;
                (*l_1375) = l_1342;
                (*l_1353) = ((((func_38(((&p_9 == &p_9) , 0x4437L), p_9, p_10) >= (safe_add_func_uint8_t_u_u((l_1378 = (l_1363 , p_10)), (2L & g_278[1])))) & 4294967288UL) < 4L) == l_1363);
                for (g_447 = 0; (g_447 >= 0); g_447 = safe_add_func_int16_t_s_s(g_447, 3))
                {
                    l_1346[0] = (*l_1375);
                    if ((*g_975))
                        continue;
                    return l_1353;
                }
            }
        }
        else
        {
            int *l_1381 = &g_753;
            g_110 = l_1381;
            for (p_9 = 0; (p_9 > 9); p_9++)
            {
                int *l_1398 = &g_753;
                for (g_447 = 6; (g_447 > (-6)); g_447--)
                {
                    int l_1392 = (-10L);
                    unsigned char *l_1393 = &g_358;
                    unsigned short *l_1396 = &g_158[0];
                    int *l_1400 = &g_730;
                    for (g_716 = 0; (g_716 > 27); g_716++)
                    {
                        int **l_1388 = &l_1346[1];
                        (*l_1388) = l_1353;
                    }
                    if ((p_9 , (g_1389[6] <= (safe_mul_func_uint8_t_u_u(((*l_1393) = l_1392), func_44(l_1353, ((safe_mod_func_int16_t_s_s(7L, ((0L || ((func_44(&p_9, l_1354) , g_143) | 0UL)) && 0x3934L))) , l_1396)))))))
                    {
                        short l_1397 = (-1L);
                        l_1397 = p_9;
                    }
                    else
                    {
                        int **l_1399 = &l_1345;
                        (*l_1353) = ((*l_1381) = 0x48C2CCF4L);
                        (*l_1399) = l_1398;
                        (*l_1399) = l_1400;
                        (*l_1399) = &g_333;
                    }
                }
                for (g_124 = (-25); (g_124 < (-20)); g_124 = safe_add_func_int16_t_s_s(g_124, 1))
                {
                    if ((*g_110))
                    {
                        int **l_1403 = &l_1398;
                        (*l_1403) = l_1353;
                    }
                    else
                    {
                        short *l_1406 = (void*)0;
                        short *l_1407 = (void*)0;
                        short *l_1408 = &g_121[1][0][1];
                        (*l_1398) = (safe_sub_func_int16_t_s_s(0x644DL, ((*l_1408) = p_9)));
                    }
                    (*l_1398) = p_10;
                }
            }
        }
        (*l_1418) = func_16((0x53L ^ (0L < func_38((safe_sub_func_uint16_t_u_u((*g_418), (((g_729 = (p_9 || 0x373F32A2L)) , (((safe_mul_func_uint8_t_u_u(((((void*)0 == (***g_1281)) > ((l_1413 , (safe_sub_func_uint16_t_u_u((**g_417), 65530UL))) != p_9)) | p_10), l_1416)) ^ 7L) , (*l_1353))) >= g_201[0]))), p_10, l_1417))), p_10, l_1353);
        g_730 = (safe_add_func_uint16_t_u_u((((-4L) <= (((g_140 = (safe_mul_func_uint16_t_u_u((0x4E245D92L >= p_9), (p_9 >= (safe_sub_func_uint32_t_u_u(((*l_1426) = (((*g_418) = (p_9 , 9UL)) != 65535UL)), 0xD3CCEE54L)))))) && p_10) > g_730)) < p_10), l_1428));
    }
    else
    {
        int l_1429 = 0xE725C617L;
        short *l_1445 = &g_729;
        int l_1446 = 0x16CDE2ECL;
        int *l_1461 = &g_24;
        unsigned **l_1490 = (void*)0;
        char l_1497[3];
        int ****l_1528 = &l_1447;
        char l_1529 = 0x23L;
        int **l_1530 = &l_1345;
        short l_1542 = (-1L);
        unsigned short l_1543 = 1UL;
        char l_1566 = 0x95L;
        int *l_1572[4];
        int i;
        for (i = 0; i < 3; i++)
            l_1497[i] = (-1L);
        for (i = 0; i < 4; i++)
            l_1572[i] = &g_333;
        l_1429 = p_9;
        for (g_1056 = 0; (g_1056 < 31); g_1056 = safe_add_func_uint32_t_u_u(g_1056, 6))
        {
            int *l_1432 = (void*)0;
            int ***l_1460 = (void*)0;
            int l_1466 = 0x6CC16FC1L;
            unsigned char *l_1467 = &g_358;
            unsigned short *l_1474 = &g_1443;
            int *l_1478 = (void*)0;
            short l_1488 = 0x3389L;
            unsigned short *l_1498 = &g_158[0];
            l_1432 = l_1432;
            if (l_1429)
                break;
            if ((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((((safe_mod_func_uint8_t_u_u(l_1429, p_9)) , (safe_rshift_func_int8_t_s_s(0x11L, 4))) , p_9) | (~p_10)) & (safe_mul_func_uint8_t_u_u(g_1443, (l_1444 , p_9)))), (((l_1445 == l_1445) > 5UL) > l_1446))), p_10)) , p_9) , g_278[3]))
            {
                int *****l_1454 = &g_1281;
                int *l_1473 = (void*)0;
                int l_1479 = 0xB5D692A5L;
                char *l_1494 = &g_138;
                char **l_1493[2];
                int **l_1503 = (void*)0;
                int **l_1504[7];
                int i;
                for (i = 0; i < 2; i++)
                    l_1493[i] = &l_1494;
                for (i = 0; i < 7; i++)
                    l_1504[i] = &l_1478;
                if (((void*)0 != l_1447))
                {
                    char *l_1457 = &g_13;
                    unsigned *l_1472 = &g_143;
                    int l_1475 = 0L;
                    g_730 = (safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((-1L) | p_10), ((*g_418) >= ((void*)0 != l_1454)))) != (p_9 == 0xC95C23ADL)), 3));
                    if ((safe_rshift_func_int8_t_s_u(((*l_1457) = p_10), p_9)))
                    {
                        int **l_1458 = &g_110;
                        (*l_1458) = l_1432;
                        if (g_1056)
                            break;
                    }
                    else
                    {
                        short l_1459 = (-1L);
                        g_753 = l_1459;
                    }
                    if ((((l_1460 != (func_44(l_1461, func_56((((~0L) , ((func_62(((*l_1457) = (safe_sub_func_uint8_t_u_u(p_9, ((safe_rshift_func_uint8_t_u_u(((l_1466 , ((void*)0 == l_1467)) , ((l_1466 = l_1446) , (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_10 || l_1446), 5)), p_9)))), p_10)) | p_9))))) , l_1472) == &p_10)) , l_1473), l_1474, p_9)) , (void*)0)) == p_9) , p_10))
                    {
                        int l_1477 = (-6L);
                        l_1475 = 0x08D4EE90L;
                        g_975 = &g_333;
                        l_1478 = (void*)0;
                        if ((*g_975))
                            break;
                    }
                    else
                    {
                        (***l_1454) = (*l_1447);
                    }
                    if ((l_1429 = (l_1479 = p_10)))
                    {
                        int **l_1480 = &l_1478;
                        int **l_1481 = &l_1432;
                        (*l_1481) = ((*l_1480) = &l_1475);
                        if (p_10)
                            break;
                        g_333 = ((**l_1481) = p_10);
                        (*l_1480) = &g_730;
                    }
                    else
                    {
                        l_1475 = p_10;
                    }
                }
                else
                {
                    unsigned short l_1486 = 0x1568L;
                    short **l_1487 = &l_1445;
                    int *l_1491 = &g_24;
                    if (((((safe_mod_func_uint8_t_u_u(p_10, g_1331)) && (func_44((***g_1281), (*g_417)) , (safe_add_func_uint16_t_u_u((~(((((*l_1467) = l_1486) >= (p_9 != (-8L))) && 0L) > l_1446)), l_1486)))) , l_1487) == (void*)0))
                    {
                        unsigned *l_1489 = &g_140;
                        int **l_1492 = &g_975;
                        (*l_1492) = &l_1429;
                    }
                    else
                    {
                        unsigned short l_1499 = 1UL;
                        int *l_1500 = &l_1446;
                        int **l_1501 = &l_1346[1];
                        unsigned short ***l_1502 = &g_417;
                        (*l_1501) = l_1500;
                        (*l_1502) = &g_418;
                        (*l_1500) = l_1486;
                        g_333 = ((*l_1500) = (g_1389[6] , (func_44(l_1461, (*g_417)) & g_158[2])));
                    }
                }
                if (p_9)
                    break;
                g_110 = (g_975 = &l_1416);
                for (l_1446 = 2; (l_1446 >= 0); l_1446 -= 1)
                {
                    int *l_1514 = &l_1416;
                    int i;
                    if (g_1389[(l_1446 + 4)])
                        break;
                }
            }
            else
            {
                for (g_730 = (-24); (g_730 < (-9)); g_730 = safe_add_func_int32_t_s_s(g_730, 4))
                {
                    int *l_1523[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1523[i] = &g_24;
                    g_333 = ((~((((*g_1496) = ((safe_lshift_func_uint8_t_u_u(func_44(l_1523[0], &l_1518), (safe_add_func_int8_t_s_s(p_10, 0x4FL)))) != ((((*l_1467) = 0x17L) && ((void*)0 == l_1528)) & 0xE8L))) != p_9) | (-6L))) > l_1529);
                }
            }
        }
        (*l_1530) = &l_1416;
        if (p_9)
        {
            short l_1531[5] = {0x5769L, 8L, 0x5769L, 8L, 0x5769L};
            int *l_1532 = &g_730;
            int i;
            l_1531[0] = ((**l_1530) = p_9);
            l_1532 = &l_1416;
        }
        else
        {
            unsigned short l_1535 = 0xDF0DL;
            int l_1558[6][4] = {{0xA845B06BL, 0L, (-1L), 0x621AA70DL}, {0xA845B06BL, 0L, (-1L), 0x621AA70DL}, {0xA845B06BL, 0L, (-1L), 0x621AA70DL}, {0xA845B06BL, 0L, (-1L), 0x621AA70DL}, {0xA845B06BL, 0L, (-1L), 0x621AA70DL}, {0xA845B06BL, 0L, (-1L), 0x621AA70DL}};
            int ****l_1561[8] = {&g_91[1][1][1], &g_91[1][1][1], &g_91[3][1][0], &g_91[1][1][1], &g_91[1][1][1], &g_91[3][1][0], &g_91[1][1][1], &g_91[1][1][1]};
            short **l_1569 = &l_1445;
            unsigned char *l_1571[9][10][2] = {{{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}, {{&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}, {&l_15, &l_15}}};
            int i, j, k;
            if (((p_9 | (*g_767)) , func_50((l_1544 & (**l_1530)), &l_1543, (**l_1530), (*l_1345))))
            {
                short l_1559[3][8] = {{0xCB71L, 0x24BEL, (-5L), 0x24BEL, 0xCB71L, (-10L), 0xCB71L, 0x24BEL}, {0xCB71L, 0x24BEL, (-5L), 0x24BEL, 0xCB71L, (-10L), 0xCB71L, 0x24BEL}, {0xCB71L, 0x24BEL, (-5L), 0x24BEL, 0xCB71L, (-10L), 0xCB71L, 0x24BEL}};
                int l_1560 = 0x44EB2FDFL;
                int i, j;
                (*l_1345) = (safe_add_func_uint8_t_u_u((l_1560 = (safe_add_func_uint32_t_u_u(func_38(((safe_unary_minus_func_uint32_t_u((0UL != l_1535))) == (**g_417)), (safe_mod_func_int8_t_s_s(((**g_1495) = ((((**l_1530) = p_9) >= (safe_lshift_func_uint16_t_u_s(func_38(p_9, (l_1558[3][0] = (p_9 != (~(safe_add_func_int16_t_s_s(((**g_1495) <= ((((0xC7719372L < (safe_mod_func_int16_t_s_s(g_201[0], l_1542))) != 6L) , l_1535) , l_1535)), p_10))))), p_10), 12))) || p_9)), p_9)), p_10), l_1559[0][1]))), p_9));
                (*l_1530) = (*l_1530);
                (**l_1530) = l_1558[4][0];
                (*g_975) = (l_1561[2] == (void*)0);
            }
            else
            {
                g_730 = (safe_lshift_func_uint8_t_u_u((func_44(((***g_1281) = (***l_1528)), func_56(&g_333, (*g_417), (**g_1495))) < l_1558[3][2]), 7));
                (*l_1345) = l_1558[3][0];
                (*l_1530) = &l_1416;
                for (g_1443 = 7; (g_1443 > 49); ++g_1443)
                {
                    if (l_1535)
                        break;
                    if (l_1558[3][0])
                        continue;
                }
            }
            (**l_1530) = (0x50L && (l_1558[3][0] = (l_1566 , (((((safe_mul_func_uint8_t_u_u(p_10, (*g_1496))) ^ func_44(((!250UL) , &p_9), func_56(&l_1416, (*g_417), func_44((**l_1447), &l_1543)))) >= (**l_1530)) , l_1569) == l_1570))));
            return l_1572[1];
        }
    }
    g_333 = p_10;
    return &g_333;
}







static int * func_16(unsigned p_17, unsigned char p_18, int * p_19)
{
    unsigned short *l_1304 = &g_11;
    int l_1305 = (-1L);
    char l_1314 = 0x7BL;
    int **l_1317 = &g_110;
    int ***l_1316 = &l_1317;
    int **l_1318 = &g_110;
    int *l_1319 = &g_730;
    short l_1326[9] = {0xFE58L, 0xDB3CL, 0xFE58L, 0xDB3CL, 0xFE58L, 0xDB3CL, 0xFE58L, 0xDB3CL, 0xFE58L};
    int l_1327[4] = {0x1F955DACL, 0x08305A28L, 0x1F955DACL, 0x08305A28L};
    unsigned char *l_1330 = &g_1331;
    short *l_1332[3][4][6] = {{{&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}}, {{&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}}, {{&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}, {&g_49[0][1], (void*)0, &g_49[0][1], (void*)0, &g_49[0][1], (void*)0}}};
    int l_1333 = 0xC38AC4E9L;
    int i, j, k;
    for (p_17 = 0; (p_17 > 36); p_17 = safe_add_func_uint16_t_u_u(p_17, 4))
    {
        unsigned l_1307 = 4294967293UL;
        for (g_729 = 2; (g_729 >= 28); g_729++)
        {
            unsigned l_1302 = 4294967289UL;
            int l_1303 = 7L;
            unsigned char *l_1306[5] = {&g_358, &g_358, &g_358, &g_358, &g_358};
            char *l_1308 = &g_13;
            int **l_1309 = &g_110;
            int i;
            (*g_975) = l_1307;
            (*l_1309) = p_19;
        }
    }
    (*l_1319) = (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(func_44(l_1319, l_1304), p_17)), (-6L)));
    (*l_1318) = (p_17 , (((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(4UL, (l_1326[6] && l_1327[0]))), 11)) && g_358), (g_358 <= ((*g_975) = (p_17 || (l_1333 = p_18)))))) >= p_17) > 0L) == 4294967290UL) , (void*)0));
    return (**l_1316);
}







static unsigned func_38(short p_39, unsigned char p_40, char p_41)
{
    int **l_1208[5];
    unsigned char *l_1221 = &g_358;
    int *l_1235 = &g_24;
    unsigned short *l_1236[10][7] = {{(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}, {(void*)0, &g_158[0], &g_142[0][0], &g_61, &g_158[1], &g_158[1], &g_61}};
    int ****l_1278[7][5][7] = {{{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}, {{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}, {{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}, {{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}, {{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}, {{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}, {{&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}, {&g_91[1][0][1], &g_91[0][2][2], &g_91[3][2][3], &g_91[0][2][0], &g_91[2][2][3], &g_91[1][1][0], (void*)0}}};
    int *****l_1277[4] = {&l_1278[1][3][4], (void*)0, &l_1278[1][3][4], (void*)0};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1208[i] = (void*)0;
    g_975 = (p_39 , (p_40 , &g_753));
    for (g_729 = (-27); (g_729 > (-3)); ++g_729)
    {
        unsigned short l_1220 = 9UL;
        unsigned char *l_1222 = &g_358;
        int *l_1225 = &g_730;
        unsigned l_1237[5][7] = {{0x1ABE4DF9L, 0x717C1F16L, 5UL, 0x74575402L, 18446744073709551615UL, 0x74575402L, 5UL}, {0x1ABE4DF9L, 0x717C1F16L, 5UL, 0x74575402L, 18446744073709551615UL, 0x74575402L, 5UL}, {0x1ABE4DF9L, 0x717C1F16L, 5UL, 0x74575402L, 18446744073709551615UL, 0x74575402L, 5UL}, {0x1ABE4DF9L, 0x717C1F16L, 5UL, 0x74575402L, 18446744073709551615UL, 0x74575402L, 5UL}, {0x1ABE4DF9L, 0x717C1F16L, 5UL, 0x74575402L, 18446744073709551615UL, 0x74575402L, 5UL}};
        char l_1256[4][5] = {{(-1L), 1L, (-1L), 0x89L, 0x43L}, {(-1L), 1L, (-1L), 0x89L, 0x43L}, {(-1L), 1L, (-1L), 0x89L, 0x43L}, {(-1L), 1L, (-1L), 0x89L, 0x43L}};
        unsigned short ***l_1265 = &g_417;
        char *l_1286 = &l_1256[2][3];
        int *l_1289[7] = {(void*)0, &g_753, (void*)0, &g_753, (void*)0, &g_753, (void*)0};
        int i, j;
        for (g_806 = (-10); (g_806 >= 29); g_806 = safe_add_func_uint8_t_u_u(g_806, 9))
        {
            unsigned char *l_1217 = &g_358;
            short *l_1218 = &g_121[3][0][6];
            int l_1219[2];
            int *l_1227 = &g_753;
            int i;
            for (i = 0; i < 2; i++)
                l_1219[i] = (-1L);
            (*g_975) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((((*l_1217) = p_40) , ((p_40 = (((*l_1218) = g_974[0][0]) || l_1220)) ^ p_41)) < l_1220), p_41)), p_41));
            for (g_333 = 0; (g_333 > (-11)); g_333 = safe_sub_func_uint32_t_u_u(g_333, 5))
            {
                short l_1226[6][2][9] = {{{0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}, {0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}}, {{0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}, {0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}}, {{0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}, {0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}}, {{0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}, {0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}}, {{0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}, {0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}}, {{0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}, {0L, 1L, 0xBDA2L, 0x7D7DL, (-1L), 0L, 0xDAB9L, 1L, (-10L)}}};
                int i, j, k;
                l_1225 = &g_753;
                (*g_975) = 0x68E09AFCL;
                if (l_1226[2][0][8])
                    break;
            }
            l_1227 = &l_1219[0];
        }
        for (g_1056 = 9; (g_1056 < 22); g_1056++)
        {
            int *l_1232 = &g_730;
            int ******l_1279 = &l_1277[0];
            int ******l_1282 = &g_1280[0][0][5];
            char **l_1285 = (void*)0;
            unsigned *l_1287 = &g_278[5];
            int l_1288 = (-1L);
        }
    }
    for (g_138 = (-29); (g_138 < (-23)); g_138 = safe_add_func_uint16_t_u_u(g_138, 4))
    {
        int *l_1292 = &g_730;
        g_110 = l_1292;
    }
    return p_39;
}







static unsigned func_44(int * p_45, unsigned short * p_46)
{
    int l_1206 = 0x16CF7553L;
    int *l_1207 = &g_730;
    l_1207 = p_45;
    return l_1206;
}







static int * func_47(unsigned p_48)
{
    short l_55[2][5] = {{0x183AL, 0x183AL, 0L, 0x183AL, 0x183AL}, {0x183AL, 0x183AL, 0L, 0x183AL, 0x183AL}};
    unsigned short *l_60 = &g_61;
    int *l_700 = &g_333;
    int ***l_773 = &g_92;
    short *l_791 = &g_729;
    short **l_790 = &l_791;
    int l_815 = (-1L);
    unsigned short l_816 = 0x85DDL;
    int ****l_830 = &g_91[3][1][0];
    unsigned char l_831 = 9UL;
    unsigned l_858 = 0x3587F842L;
    unsigned *l_867 = &g_806;
    unsigned **l_866[2];
    unsigned short l_897 = 0xD0C4L;
    int l_914 = (-9L);
    short l_955 = 0x16D9L;
    short l_977 = 0x36DFL;
    int l_991 = (-1L);
    int l_1001 = 0xB4448CF4L;
    int *l_1015 = (void*)0;
    int l_1041 = (-9L);
    unsigned char l_1103[4][6][3] = {{{0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}}, {{0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}}, {{0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}}, {{0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}, {0xE8L, 255UL, 255UL}}};
    unsigned short ***l_1125[5][1][4] = {{{&g_417, &g_417, &g_417, &g_417}}, {{&g_417, &g_417, &g_417, &g_417}}, {{&g_417, &g_417, &g_417, &g_417}}, {{&g_417, &g_417, &g_417, &g_417}}, {{&g_417, &g_417, &g_417, &g_417}}};
    unsigned char *l_1138 = &l_1103[3][1][1];
    char l_1151 = 8L;
    int *l_1156 = &g_333;
    char l_1158 = 0x7AL;
    short l_1169 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_866[i] = &l_867;
    for (p_48 = 0; (p_48 <= 3); p_48 += 1)
    {
        int *l_695 = &g_333;
        int **l_705[2];
        int *l_710 = &g_333;
        int *l_718 = &g_24;
        int l_719[3][9][2] = {{{0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}}, {{0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}}, {{0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}, {0L, 0x0951DD43L}}};
        int l_727[3][6];
        unsigned char l_728 = 249UL;
        unsigned char **l_734 = &g_276;
        unsigned char l_768 = 0UL;
        int ***l_771 = &g_92;
        int *l_774 = &g_730;
        unsigned short *l_775 = &g_158[0];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_705[i] = &g_110;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_727[i][j] = 1L;
        }
    }
    if (((*l_700) = ((safe_mul_func_uint16_t_u_u(0x1C32L, func_50(p_48, (*g_417), g_138, g_61))) != ((safe_rshift_func_int16_t_s_u(((**l_790) = (safe_add_func_uint16_t_u_u(((((*g_767) = p_48) || (g_806 || ((safe_add_func_uint16_t_u_u(((*g_767) = (g_13 , p_48)), l_55[1][2])) < 0xEEL))) && l_815), 65527UL))), l_816)) && p_48))))
    {
        int *l_817[10][1] = {{&g_730}, {&g_730}, {&g_730}, {&g_730}, {&g_730}, {&g_730}, {&g_730}, {&g_730}, {&g_730}, {&g_730}};
        int **l_818 = (void*)0;
        unsigned char *l_819[10] = {&g_358, (void*)0, &g_358, &g_358, (void*)0, &g_358, (void*)0, &g_358, &g_358, (void*)0};
        int ****l_827 = (void*)0;
        int *****l_828 = (void*)0;
        int *****l_829[9] = {&l_827, &l_827, &l_827, &l_827, &l_827, &l_827, &l_827, &l_827, &l_827};
        unsigned short *l_872[5][8][2] = {{{&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}}, {{&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}}, {{&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}}, {{&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}}, {{&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}, {&g_201[0], (void*)0}}};
        unsigned l_958 = 7UL;
        int ****l_985 = &g_91[3][1][3];
        int i, j, k;
        g_110 = l_817[7][0];
        g_753 = (p_48 <= (safe_lshift_func_uint8_t_u_u(((*l_700) = (safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(func_50(((**l_790) = g_278[5]), &l_816, ((*l_700) = ((l_830 = l_827) == &l_773)), p_48), l_831)) > p_48), 0xB4L))), 5)));
        if (p_48)
        {
            char *l_834 = (void*)0;
            int l_855 = (-5L);
            short *l_856 = (void*)0;
            short *l_857 = &l_55[0][4];
            int *l_871[10][2] = {{&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}};
            int i, j;
            (*l_700) = func_50(((func_50((((l_855 = (((safe_mul_func_int8_t_s_s((g_138 = p_48), g_158[0])) , (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((*l_857) = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((*l_791) = (0x07AD8809L && (safe_add_func_uint16_t_u_u(((&g_140 != ((safe_rshift_func_int16_t_s_u(0x79A8L, 7)) , (void*)0)) == g_158[0]), (safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_48 < p_48), 2)), g_24)) != l_855), 0UL)) <= (-10L)), 0xC7L)))))), 4)), (*l_700))) > 2UL)), l_858)), 2))) , g_820)) ^ 0xB32DL) != p_48), &l_816, p_48, p_48) , 6UL) , 0xF37FL), (*g_417), p_48, p_48);
            for (g_716 = 0; (g_716 != 3); ++g_716)
            {
                unsigned l_861 = 18446744073709551612UL;
                int *l_870 = &g_753;
                unsigned *l_873 = &g_278[5];
                unsigned char l_880[9] = {0UL, 0xAEL, 0UL, 0xAEL, 0UL, 0xAEL, 0UL, 0xAEL, 0UL};
                unsigned l_881 = 0UL;
                int i;
                l_861 = p_48;
                for (g_143 = 1; (g_143 <= 9); g_143 += 1)
                {
                    unsigned *l_865 = &l_858;
                    unsigned **l_864[9] = {&l_865, &l_865, &l_865, &l_865, &l_865, &l_865, &l_865, &l_865, &l_865};
                    unsigned **l_868 = (void*)0;
                    int **l_869[1][1][8];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_869[i][j][k] = (void*)0;
                        }
                    }
                    (*l_700) = (safe_add_func_int8_t_s_s((0x620EL < (l_864[3] != (l_868 = l_866[0]))), p_48));
                    l_870 = &l_815;
                    for (g_730 = 1; (g_730 <= 4); g_730 += 1)
                    {
                        int i, j, k;
                        l_870 = &l_815;
                        (*l_870) = (!g_121[g_730][g_730][(g_730 + 1)]);
                        return l_871[3][0];
                    }
                }
                if ((((l_855 , 0xF0L) == p_48) | g_138))
                {
                    int **l_876 = &l_700;
                    (*l_876) = &g_333;
                    for (l_815 = 0; (l_815 <= (-8)); l_815 = safe_sub_func_int32_t_s_s(l_815, 3))
                    {
                        unsigned char l_879 = 255UL;
                        (*l_700) = (((l_879 = 0x04935766L) , l_880[3]) > p_48);
                        if ((**l_876))
                            break;
                        (*l_876) = l_817[7][0];
                        return l_871[3][0];
                    }
                    if (l_881)
                        continue;
                }
                else
                {
                    if (p_48)
                    {
                        if (p_48)
                            break;
                    }
                    else
                    {
                        int l_882 = 0xBCFA97EEL;
                        l_882 = p_48;
                        g_110 = (void*)0;
                    }
                }
            }
            (*l_700) = 0xF2E29313L;
        }
        else
        {
            int l_904 = 3L;
            unsigned short *l_911 = (void*)0;
            int l_943 = 1L;
            int **l_972 = (void*)0;
            unsigned char **l_979[10][5] = {{&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}, {&l_819[9], (void*)0, &l_819[9], (void*)0, &g_276}};
            char *l_992 = &g_974[7][2];
            unsigned short l_993 = 0xD71EL;
            unsigned *l_994 = &g_140;
            int i, j;
            if (p_48)
            {
                int **l_883 = &l_817[7][0];
                int **l_884 = &l_700;
                (*l_884) = ((*l_883) = &l_815);
            }
            else
            {
                int *l_887 = &g_730;
                int **l_892[2];
                short **l_946 = &l_791;
                unsigned short *l_948 = &g_158[1];
                char *l_988[5][3] = {{&g_974[7][2], &g_13, &g_974[7][2]}, {&g_974[7][2], &g_13, &g_974[7][2]}, {&g_974[7][2], &g_13, &g_974[7][2]}, {&g_974[7][2], &g_13, &g_974[7][2]}, {&g_974[7][2], &g_13, &g_974[7][2]}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_892[i] = &l_700;
                for (l_815 = 0; (l_815 == 17); l_815 = safe_add_func_int16_t_s_s(l_815, 9))
                {
                    int *l_890 = &g_753;
                    int **l_891[4][6][3] = {{{&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}}, {{&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}}, {{&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}}, {{&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}, {&l_700, &l_817[5][0], &g_110}}};
                    int i, j, k;
                    g_110 = &g_753;
                    g_110 = l_887;
                    for (g_140 = 0; (g_140 <= 33); ++g_140)
                    {
                        (*g_110) = p_48;
                    }
                    l_887 = l_890;
                }
                g_110 = &g_730;
                if ((!(safe_rshift_func_uint16_t_u_u(((0L < (l_897 >= g_806)) != (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((*l_700) = (safe_lshift_func_uint8_t_u_u(0xACL, 4))) , ((l_904 , (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((*g_767), (*g_418))) , 0x50L) | 0x51L), p_48)), p_48))) > (*l_700))) && l_904), 0xA828L)), 0x2B2EL))), l_904))))
                {
                    unsigned l_924 = 0xF0FF08DEL;
                    int l_927 = 7L;
                    unsigned **l_947 = (void*)0;
                    unsigned short l_978 = 1UL;
                    short **l_981[6][4];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_981[i][j] = &l_791;
                    }
                    if ((safe_lshift_func_uint8_t_u_u((l_914 , 0xA3L), 6)))
                    {
                        (*l_700) = l_904;
                    }
                    else
                    {
                        int *l_915 = (void*)0;
                        char *l_925 = &g_138;
                        int ***l_926 = &g_92;
                        l_915 = &g_333;
                        (*l_700) = (*g_110);
                        (*l_887) = ((safe_add_func_int16_t_s_s((*l_700), (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((*l_915), ((safe_mul_func_int8_t_s_s((((*l_925) = l_924) >= p_48), (l_927 = (&g_92 != (g_91[3][1][0] = l_926))))) , (safe_mod_func_int8_t_s_s((((((l_904 && ((p_48 & 0L) <= (*l_700))) > (*l_700)) != 0x8A4183D7L) , p_48) | (-1L)), l_924))))), g_278[1])))) < 0xBD8AL);
                    }
                    (*l_887) = ((+(safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(0xB6L, p_48)), 6))) <= p_48);
                    if ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, (p_48 == (4294967288UL || (safe_lshift_func_uint16_t_u_u(65535UL, 7)))))) , ((l_955 != (safe_lshift_func_uint8_t_u_s(0UL, l_958))) <= p_48)), (safe_mod_func_int16_t_s_s((g_358 && (*l_700)), 1UL)))))
                    {
                        int l_961 = 1L;
                        (*l_700) = (l_904 = ((*g_110) = l_961));
                    }
                    else
                    {
                        unsigned char l_968 = 0xB1L;
                        int **l_971 = &g_23;
                        char *l_973[5];
                        int *l_976 = &l_815;
                        unsigned char ***l_980 = &l_979[2][0];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_973[i] = &g_974[0][0];
                        g_975 = ((safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s(func_62(((((g_278[1] = (safe_rshift_func_uint16_t_u_u(((*l_948) = (**g_417)), (*l_700)))) || l_968) , (**g_417)) >= g_121[1][0][1])), 6)) , (+g_121[0][2][0])) <= (safe_lshift_func_uint16_t_u_s(l_927, (((g_974[6][2] = (((l_971 != l_972) == 0UL) & g_616)) == g_616) == (*l_700))))) < l_904), 65529UL)) , (void*)0);
                        l_817[2][0] = l_976;
                        (*l_887) = l_978;
                        (*l_980) = l_979[3][3];
                    }
                    (*l_700) = (l_981[1][1] != g_433);
                }
                else
                {
                    int ****l_984 = &g_91[3][1][0];
                    (*l_700) = (safe_mul_func_uint8_t_u_u((&g_91[2][1][1] == (l_985 = l_984)), g_201[0]));
                }
                (*l_887) = ((*g_767) != 0L);
            }
            l_904 = ((*l_700) = (l_943 = (((safe_sub_func_uint8_t_u_u(0UL, (((0L | (4L & (l_991 > (((*l_994) = (((*g_767) = 0x34D1L) , p_48)) , 0x32L)))) & 0xAAB3L) , l_943))) , &l_815) != (void*)0)));
            (*l_700) = ((p_48 <= ((**l_790) = (-10L))) , (((safe_mul_func_uint8_t_u_u((p_48 | ((*l_992) = (safe_sub_func_uint32_t_u_u((((*l_700) <= p_48) , (*l_700)), p_48)))), (*l_700))) ^ p_48) , l_1001));
        }
    }
    else
    {
        unsigned *l_1004 = &g_278[5];
        unsigned short **l_1005 = &g_418;
        int **l_1012 = (void*)0;
        int **l_1013 = (void*)0;
        int **l_1014 = &l_700;
        char l_1028[8][9] = {{0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}, {0x21L, 6L, 5L, (-6L), 0L, 0xE4L, 0xE4L, 0L, (-6L)}};
        int i, j;
        (*l_700) = (((*g_975) = 0L) , (((safe_lshift_func_uint16_t_u_s(((l_700 == l_1004) < ((void*)0 != l_1005)), ((*l_700) > (((safe_lshift_func_int16_t_s_s(0xED35L, (((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((~p_48), (*g_975))), p_48)) && 2L) < p_48))) && 65535UL) , (*g_418))))) != 1L) , 0xB2117CD2L));
        (*l_700) = 0xA2BF4E05L;
        l_1015 = ((*l_1014) = &g_753);
        for (l_897 = 0; (l_897 <= 2); l_897 += 1)
        {
            int *l_1016 = &g_333;
            int **l_1057 = (void*)0;
            int i;
            for (l_955 = 0; (l_955 <= 2); l_955 += 1)
            {
                int *l_1052[2][6][6] = {{{(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}}, {{(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}, {(void*)0, &g_730, &l_815, &l_914, (void*)0, (void*)0}}};
                int i, j, k;
                (*g_975) = ((*l_1015) = (g_158[l_955] >= g_158[2]));
                for (g_820 = 0; (g_820 <= 2); g_820 += 1)
                {
                    unsigned char l_1017 = 1UL;
                    char *l_1029 = (void*)0;
                    char *l_1030 = (void*)0;
                    char *l_1031 = (void*)0;
                    char *l_1032 = &g_138;
                    int l_1033 = (-10L);
                    for (g_124 = 1; (g_124 >= 0); g_124 -= 1)
                    {
                        g_975 = l_1016;
                        if ((*g_975))
                            continue;
                        return l_1004;
                    }
                    (*l_700) = (((l_1017 , ((~((((*g_418) ^ l_1017) < (safe_add_func_uint32_t_u_u(g_121[1][0][1], (safe_mod_func_uint8_t_u_u(((g_358 = 0x22L) || (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((**l_1014) && 0xA4L) ^ ((*l_1016) == ((*l_1032) = ((safe_lshift_func_uint8_t_u_s(((1UL == p_48) , l_1028[7][3]), 3)) != (*g_975))))) , (*l_700)), p_48)), l_1033))), p_48))))) > l_1017)) | g_158[l_955])) | (*l_1016)) , 0xD8A2EEC2L);
                    for (l_1001 = 0; (l_1001 <= 1); l_1001 += 1)
                    {
                        int l_1040 = 0x65CDBF51L;
                        int i, j;
                        (*l_1016) = (safe_mul_func_uint16_t_u_u(((!(~0x57L)) && ((*g_975) < (((((safe_sub_func_uint16_t_u_u((p_48 || ((*l_1015) = p_48)), p_48)) , 0xA5FB1A74L) < p_48) & p_48) ^ p_48))), (*l_1016)));
                    }
                    l_1052[0][1][0] = &g_753;
                }
            }
            if (g_158[l_897])
                continue;
            (*l_1014) = l_1016;
            for (g_138 = 0; (g_138 <= 2); g_138 += 1)
            {
                short l_1053 = (-3L);
                int l_1065 = 5L;
                l_1053 = p_48;
                for (g_61 = 0; (g_61 <= 2); g_61 += 1)
                {
                    unsigned short l_1060 = 0x90C8L;
                    short l_1063 = (-1L);
                    int *l_1064 = &g_333;
                    g_1056 = ((*l_1015) = ((*l_1016) = ((*l_700) | (safe_lshift_func_uint16_t_u_s(p_48, 0)))));
                    (*l_1015) = ((*l_700) = ((p_48 | (l_1065 = ((*g_975) < (&l_1053 != ((*l_790) = func_56((((void*)0 != l_1057) , ((safe_lshift_func_int16_t_s_s((p_48 > (*g_975)), (l_1060 || (safe_sub_func_int16_t_s_s((g_121[3][0][2] = l_1063), l_1063))))) , l_1064)), (*g_417), p_48)))))) >= (**l_1014)));
                }
            }
        }
    }
    for (g_143 = 0; (g_143 <= 2); g_143 += 1)
    {
        short l_1066 = 0xCE6EL;
        int l_1077 = 0xD27B1766L;
        unsigned char l_1136[5];
        int *l_1182 = &l_1041;
        int i;
        for (i = 0; i < 5; i++)
            l_1136[i] = 0UL;
        (*l_700) = l_1066;
        for (l_914 = 0; (l_914 <= 1); l_914 += 1)
        {
            int l_1078 = 0L;
            int l_1085 = 0xC34368C7L;
            unsigned l_1202 = 0x7C322C6BL;
            int **l_1203 = &l_1015;
            int i, j;
        }
    }
    (*l_700) = ((safe_rshift_func_int8_t_s_s((*l_700), 6)) && 0x18EAL);
    return (**l_773);
}







static int func_50(short p_51, unsigned short * p_52, unsigned char p_53, unsigned char p_54)
{
    char l_316 = (-1L);
    int l_319[8][3] = {{3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}};
    char *l_324 = (void*)0;
    int *l_325 = &l_319[2][1];
    int ***l_341 = (void*)0;
    unsigned short **l_449 = &g_418;
    int **l_523 = (void*)0;
    unsigned char l_571 = 0x65L;
    unsigned char **l_592 = &g_276;
    unsigned char l_614 = 7UL;
    int i, j;
    l_316 = (0L >= (g_140 , (~(safe_mul_func_int16_t_s_s(g_278[5], (+65529UL))))));
    l_319[7][1] = (safe_mul_func_uint8_t_u_u(p_53, (p_53 , (((248UL & g_278[3]) < p_54) == p_51))));
    l_319[7][1] = p_51;
    if ((((((safe_add_func_uint8_t_u_u(((((p_54 , p_53) | (+((safe_rshift_func_int16_t_s_s(g_201[0], (&l_316 == (l_324 = (void*)0)))) & ((*l_325) = 0xADB1AD04L)))) , (*g_92)) == ((safe_sub_func_int16_t_s_s(g_49[3][7], l_316)) , l_325)), 0x04L)) , (*l_325)) < 0x85CBB0EDL) , 8L) & p_51))
    {
        unsigned l_360 = 1UL;
        int l_446 = 0xE29903CBL;
        unsigned char *l_450 = &g_358;
        char *l_451 = &g_138;
        int l_452[7] = {0L, 0L, 0x5C6A7C08L, 0L, 0L, 0x5C6A7C08L, 0L};
        int i;
        for (p_51 = 1; (p_51 == 12); p_51 = safe_add_func_int16_t_s_s(p_51, 3))
        {
            char l_348 = 1L;
            char l_376 = 3L;
            int **l_410 = &g_110;
            for (p_53 = 0; (p_53 <= 0); p_53 += 1)
            {
                unsigned l_334 = 0x8A8C29DDL;
                int l_345 = 0xE836181AL;
                int *l_363 = &l_319[7][1];
                short l_388 = 1L;
                for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                {
                    int i, j;
                    if ((g_142[(p_53 + 1)][p_53] >= (g_142[p_54][p_53] , (safe_lshift_func_int16_t_s_s((0x7BF04F6DL && g_201[(p_53 + 1)]), 1)))))
                    {
                        int *l_332 = &g_333;
                        int ****l_342 = &l_341;
                        unsigned char *l_357 = &g_358;
                        int l_359[9][4][4] = {{{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}, {{0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}, {0x205C9C4CL, 0x205C9C4CL, (-5L), 0x205C9C4CL}}};
                        int **l_361 = &l_332;
                        int i, j, k;
                        (*l_332) = ((*l_325) = p_54);
                        (*l_332) = (p_53 > (((g_142[(p_53 + 1)][p_53] = ((void*)0 != &g_333)) || l_334) , ((*p_52) && g_158[0])));
                        (*l_361) = (((safe_rshift_func_int16_t_s_s(g_121[3][3][3], ((safe_rshift_func_uint8_t_u_s(g_140, ((p_53 != (((((*l_342) = l_341) != ((safe_mul_func_uint16_t_u_u((l_345 = g_201[0]), ((~((safe_add_func_uint8_t_u_u(l_348, (safe_add_func_int8_t_s_s((*l_325), ((*l_357) = ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((*l_325), ((((((safe_mod_func_uint16_t_u_u(g_158[0], 0x7C8AL)) & p_51) , 0xF5L) >= 255UL) , &g_91[3][1][0]) == l_342))), p_53)) , p_53)))))) & l_359[5][0][2])) && g_201[(p_53 + 1)]))) , &g_92)) , l_360) > p_51)) >= p_51))) , g_121[1][0][1]))) | p_51) , l_332);
                        (*l_361) = (*l_361);
                    }
                    else
                    {
                        int **l_362[2][10][5] = {{{&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}}, {{&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}, {&l_325, (void*)0, &g_110, (void*)0, &g_110}}};
                        int i, j, k;
                        l_363 = (void*)0;
                        return p_51;
                    }
                }
                for (l_360 = 28; (l_360 > 6); l_360 = safe_sub_func_int8_t_s_s(l_360, 7))
                {
                    unsigned short *l_377 = &g_61;
                    short *l_382 = &g_124;
                    short *l_383 = (void*)0;
                    unsigned *l_386 = &g_278[1];
                    int l_387 = (-9L);
                    short *l_389 = &g_121[1][3][2];
                    int l_390[1][9][6] = {{{7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}, {7L, 5L, 0x4F0F0427L, 5L, 7L, 0x0615C79EL}}};
                    int *l_391 = &l_345;
                    int **l_392[8] = {(void*)0, (void*)0, &l_391, (void*)0, (void*)0, &l_391, (void*)0, (void*)0};
                    short **l_394 = &l_383;
                    short ***l_393 = &l_394;
                    unsigned char *l_407[2][2][5] = {{{&g_358, &g_358, &g_358, &g_358, &g_358}, {&g_358, &g_358, &g_358, &g_358, &g_358}}, {{&g_358, &g_358, &g_358, &g_358, &g_358}, {&g_358, &g_358, &g_358, &g_358, &g_358}}};
                    int i, j, k;
                }
                (*l_363) = p_51;
            }
            (*l_325) = (safe_rshift_func_int8_t_s_s(g_121[2][1][2], l_348));
            (*l_410) = &g_333;
            for (p_53 = 16; (p_53 <= 56); ++p_53)
            {
                unsigned char *l_423 = &g_358;
                char *l_428 = &l_376;
                (*l_410) = &g_333;
                (**l_410) = (0x78L > (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(1UL, (g_138 | (g_417 != (void*)0)))), (safe_lshift_func_int16_t_s_u(p_51, (((*l_325) = l_360) , (((*l_423) = (safe_sub_func_int32_t_s_s(((**l_410) != 0xACL), l_360))) < l_360)))))));
                if (((((safe_mul_func_uint8_t_u_u(0x1DL, (-3L))) > ((-1L) && ((safe_rshift_func_int16_t_s_u((g_13 | (((*l_428) = p_53) , g_49[2][3])), 2)) & (safe_sub_func_int16_t_s_s(g_201[0], (safe_lshift_func_uint16_t_u_u(((**g_417) = ((g_433 != g_433) , (**g_417))), 5))))))) > (*g_110)) , l_360))
                {
                    char l_434[10][3][3] = {{{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}, {{4L, 1L, 0x35L}, {4L, 1L, 0x35L}, {4L, 1L, 0x35L}}};
                    int i, j, k;
                    return l_434[1][2][0];
                }
                else
                {
                    (*l_410) = &l_319[1][0];
                    if (p_53)
                        break;
                    if ((&g_124 != (void*)0))
                    {
                        short l_443[9][4] = {{(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}, {(-1L), 5L, (-1L), 5L}};
                        unsigned *l_444 = (void*)0;
                        unsigned *l_445 = &g_278[5];
                        int *l_448 = &l_446;
                        int i, j;
                        l_446 = ((*l_325) = ((p_51 == (safe_sub_func_uint8_t_u_u(p_51, (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_51 , ((*l_428) = (func_62(((*l_428) = (((safe_rshift_func_uint8_t_u_s((l_443[0][1] >= (5UL ^ ((((void*)0 != &g_358) == p_51) > (((*l_445) = 0xC5EBACD0L) && p_54)))), g_201[0])) & 3L) ^ 0x05BE12F4L))) ^ p_54))), g_333)), p_51))))) && g_158[1]));
                        (*l_448) = ((*l_325) = g_447);
                    }
                    else
                    {
                        return (*g_23);
                    }
                    (*l_410) = (p_53 , &l_446);
                }
            }
        }
        if (((*l_325) = ((((*p_52) = (l_446 , (((*l_450) = (p_53 > (((l_446 , &g_418) == l_449) | l_446))) | ((((*p_52) < 0UL) == 1UL) < l_452[4])))) || p_54) , 0xA2042FC1L)))
        {
            int l_465 = 0x642CE6C2L;
            int l_468 = 0xEBA5869DL;
            int **l_471 = &l_325;
            (*l_325) = ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((*l_325), (((l_465 = ((safe_mul_func_uint8_t_u_u(l_452[4], (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(p_53, l_465)) <= p_54) , (safe_add_func_uint16_t_u_u(((((g_447 <= l_468) <= (((void*)0 != &g_433) , l_468)) , l_452[4]) , 65529UL), (*g_418)))), 0x6E6EL)), 0x71F5L)))) >= 0x5FL)) && 1UL) , 1L))), (*l_325))) ^ l_468);
            (*l_325) = (safe_lshift_func_uint16_t_u_u((*l_325), 1));
            (*l_471) = &l_468;
            for (g_124 = 0; g_124 < 5; g_124 += 1)
            {
                for (g_61 = 0; g_61 < 5; g_61 += 1)
                {
                    for (p_53 = 0; p_53 < 7; p_53 += 1)
                    {
                        g_121[g_124][g_61][p_53] = 0xD8B4L;
                    }
                }
            }
        }
        else
        {
            unsigned l_474 = 0x664DF6DFL;
            int l_477 = 1L;
            int *l_490 = (void*)0;
            int l_494 = (-1L);
            for (l_360 = 0; (l_360 <= 56); l_360 = safe_add_func_uint32_t_u_u(l_360, 1))
            {
                unsigned short l_484 = 0x49A5L;
                int *l_492 = &l_319[7][1];
                int **l_493 = &g_110;
                if (p_51)
                {
                    for (g_333 = 0; (g_333 <= (-28)); g_333 = safe_sub_func_uint16_t_u_u(g_333, 1))
                    {
                        int **l_491[2][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_491[i][j] = &l_325;
                        }
                        g_110 = l_490;
                        (*l_325) = ((0x4794L != l_484) | p_51);
                        g_110 = &l_319[3][1];
                    }
                }
                else
                {
                    return p_53;
                }
                l_325 = ((*l_493) = l_492);
                (*l_325) = ((g_278[5] , l_494) , p_54);
            }
            (*l_325) = 0x5E88D1CBL;
        }
        for (g_24 = 0; (g_24 >= 14); g_24 = safe_add_func_uint32_t_u_u(g_24, 1))
        {
            int **l_497[2];
            unsigned *l_508 = &l_360;
            unsigned short ***l_509 = &l_449;
            int i;
            for (i = 0; i < 2; i++)
                l_497[i] = &l_325;
            g_110 = (l_325 = (void*)0);
            g_110 = &g_333;
            (*g_110) = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((**g_417), 2)), (g_447 = (((safe_mod_func_int32_t_s_s((!(safe_add_func_uint16_t_u_u((*p_52), (safe_lshift_func_uint8_t_u_s((g_49[2][5] < (!p_54)), ((l_446 = ((*l_508) = g_138)) < l_452[4])))))), p_54)) | g_143) < ((*l_450) = l_452[0])))));
            (*g_110) = ((((*l_509) = &g_418) != (void*)0) >= (l_446 = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((5UL == ((safe_sub_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u((*g_418), (*p_52))) ^ (*g_110)) & 0x014085F8L), (0x4100DE2BL || l_452[2]))) | p_51)), p_53)), g_49[0][5]))));
        }
    }
    else
    {
        int l_529 = 0xC46A3FA1L;
        int ***l_536 = &l_523;
        int *l_540 = &l_529;
        int *l_580 = &l_319[7][1];
        int **l_693[7][4] = {{&g_110, &l_580, &l_580, &l_580}, {&g_110, &l_580, &l_580, &l_580}, {&g_110, &l_580, &l_580, &l_580}, {&g_110, &l_580, &l_580, &l_580}, {&g_110, &l_580, &l_580, &l_580}, {&g_110, &l_580, &l_580, &l_580}, {&g_110, &l_580, &l_580, &l_580}};
        int i, j;
        for (g_447 = 2; (g_447 >= 0); g_447 -= 1)
        {
            int l_531 = 0xE7A89DF4L;
            int i;
        }
        if (((void*)0 == l_536))
        {
            int *l_539 = &l_319[7][1];
            int *l_574 = &l_529;
            int *l_667 = (void*)0;
            for (g_61 = 0; (g_61 < 50); ++g_61)
            {
                short l_550 = 0L;
                unsigned char l_553 = 246UL;
                int l_558 = (-1L);
                l_540 = l_539;
                for (g_138 = 0; (g_138 <= 1); g_138 += 1)
                {
                    int *l_551 = (void*)0;
                    int *l_552[8] = {&g_333, &g_333, &g_333, &g_333, &g_333, &g_333, &g_333, &g_333};
                    int **l_554 = &l_552[4];
                    int i;
                    (*l_539) = p_54;
                    l_553 = ((*l_540) = (((((safe_add_func_int8_t_s_s((p_53 <= ((((**g_417) , (((-1L) | (65535UL | 0x73D4L)) , g_121[1][0][1])) == (((*l_539) != (safe_unary_minus_func_uint8_t_u(p_53))) < ((safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*p_52), 3L)), g_201[0])) , (-1L)), p_54)) <= 0x17L))) != 0L)), p_53)) ^ l_550) , (-1L)) == 0x1BL) , 0x373F0FC6L));
                    (*l_554) = &g_333;
                }
                if ((*l_325))
                    break;
                l_558 = (safe_lshift_func_uint8_t_u_u(((g_557 = &l_449) == (void*)0), 1));
            }
            g_110 = &l_529;
            if (((*l_539) && (*l_539)))
            {
                unsigned char l_569[5] = {0x46L, 0x06L, 0x46L, 0x06L, 0x46L};
                unsigned *l_570 = &g_143;
                int l_591 = 0x1080B7E3L;
                char l_621 = 0x79L;
                int *l_675 = (void*)0;
                int i;
                if ((safe_mul_func_uint16_t_u_u(((**l_449) = (safe_unary_minus_func_int8_t_s(((8UL != (safe_mul_func_uint16_t_u_u(((*l_539) != ((safe_sub_func_uint8_t_u_u((((((*g_110) && ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((l_569[2] , ((*l_570) = ((((*p_52) & (**g_417)) < g_201[1]) == (*p_52)))) , ((((func_62(p_53) || l_571) && (*l_325)) || 0xCFL) ^ l_569[2])))), 65535UL)) <= p_53)) != 0x9AL) || 4294967290UL) , (*l_539)), 0xD5L)) , p_51)), g_447))) < 0xBA7BL)))), l_569[4])))
                {
                    (*l_325) = (9L < 0xD77CL);
                    g_110 = &g_333;
                    for (l_316 = (-8); (l_316 <= 23); l_316++)
                    {
                        int **l_575[7][1][10] = {{{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}, {{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}, {{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}, {{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}, {{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}, {{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}, {{&l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574, &l_574, (void*)0, &l_574}}};
                        int i, j, k;
                        g_110 = l_574;
                        g_110 = &g_333;
                        l_580 = (((safe_sub_func_int8_t_s_s(g_121[1][0][1], (safe_mul_func_uint16_t_u_u((*p_52), (((g_142[2][0] <= 0xB4L) != 0L) > 0x5244L))))) || p_54) , &l_529);
                    }
                }
                else
                {
                    unsigned short l_583 = 65530UL;
                    unsigned char *l_588[9];
                    short *l_589 = (void*)0;
                    short *l_590[8];
                    unsigned char **l_593 = &l_588[3];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_588[i] = (void*)0;
                    for (i = 0; i < 8; i++)
                        l_590[i] = &g_447;
                    l_591 = (((*l_539) , ((safe_sub_func_int16_t_s_s(((*l_574) = ((((p_51 = l_583) , p_53) > ((*l_539) = (((!p_54) != l_583) ^ 0UL))) , p_53)), p_54)) , (*l_325))) , 0x436BAE00L);
                    for (g_447 = 0; (g_447 <= 1); g_447 += 1)
                    {
                        l_593 = l_592;
                    }
                    (*l_580) = p_53;
                    return p_53;
                }
                for (l_591 = 0; (l_591 == (-11)); --l_591)
                {
                    int *l_615 = &g_616;
                    int l_617 = 0x1105FF6AL;
                    unsigned *l_618 = &g_140;
                    short *l_619 = &g_49[0][2];
                    char *l_620 = (void*)0;
                    short l_622 = 0x8711L;
                    if ((((safe_sub_func_int8_t_s_s((!(g_138 = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_13, (!(((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((*l_539) = (p_51 , ((**l_449) = (safe_lshift_func_int8_t_s_s(p_51, 1))))), (((*l_618) = ((g_49[3][1] , ((+((*l_615) = ((**g_92) = l_614))) , 0L)) > l_617)) , g_61))), 9)) , ((*l_619) = p_53)), p_54)), p_54)) , p_51) || p_53)))), 2UL)), p_51)))), l_621)) | 0x552F21D3L) , p_51))
                    {
                        unsigned short *l_637 = &g_201[1];
                        unsigned short *l_638[6] = {&g_61, &g_142[1][0], &g_61, &g_142[1][0], &g_61, &g_142[1][0]};
                        int i;
                        (*g_110) = l_569[4];
                        (*g_110) = (((*l_574) = (l_622 , (((*l_325) >= (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(65527UL, (g_158[0] < g_358))) , p_53), 65528UL)), (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((g_142[2][0] = ((*l_637) = ((p_54 < (safe_add_func_uint32_t_u_u((p_53 < (*g_110)), p_51))) != (*g_110)))) >= 0x9A16L) != 0x6F48L), (-2L))), 248UL)))), g_278[5]))) == l_569[2]))) == p_54);
                    }
                    else
                    {
                        unsigned **l_641 = (void*)0;
                        unsigned **l_642 = &l_570;
                        (*l_539) = (safe_rshift_func_int16_t_s_s((l_574 == ((*l_642) = l_574)), 9));
                        l_540 = l_539;
                    }
                    for (g_616 = 11; (g_616 < (-1)); g_616--)
                    {
                        unsigned short l_651 = 0xA37DL;
                        (*l_540) = (((g_142[2][0] ^ (p_51 > ((p_54 && ((safe_add_func_uint8_t_u_u((((*l_618) = l_622) , (+((p_54 ^ ((safe_add_func_int8_t_s_s((*l_325), (((l_651 < (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((p_51 == (safe_mod_func_int8_t_s_s((l_580 != (void*)0), p_51))) ^ 4294967290UL), (*g_418))) | p_51), 3)) & p_51), g_140))) & (*l_325)) == p_54))) ^ 0UL)) | l_651))), g_201[0])) != (*p_52))) && l_617))) < 0x26L) , (*g_110));
                        if ((*g_110))
                            continue;
                        if (l_651)
                            continue;
                    }
                }
                for (g_61 = 0; (g_61 <= 4); g_61 += 1)
                {
                    int *l_661 = &l_591;
                    for (p_51 = 0; (p_51 <= 0); p_51 += 1)
                    {
                        int **l_660 = &l_539;
                        (*l_660) = &l_529;
                        (*l_660) = l_661;
                    }
                    for (g_24 = 0; (g_24 <= 4); g_24 += 1)
                    {
                        (*l_539) = (*l_325);
                        return (*g_23);
                    }
                    for (p_51 = 0; (p_51 <= 3); p_51 += 1)
                    {
                        int l_666 = 0xE7FE8F58L;
                        int **l_668 = (void*)0;
                        int **l_669 = (void*)0;
                        int **l_670 = (void*)0;
                        int **l_671 = &l_580;
                        int i, j;
                        if (g_49[p_51][(g_61 + 3)])
                            break;
                        (*l_574) = (l_666 = (g_24 , (safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((*l_539) = p_53), (~((l_621 < (0UL ^ (!0L))) != (p_53 != g_49[p_51][(g_61 + 3)]))))) , p_53), (l_569[2] <= 1L)))));
                        (*l_671) = l_667;
                        if ((*l_539))
                            continue;
                    }
                    for (g_24 = 4; (g_24 >= 0); g_24 -= 1)
                    {
                        int **l_672 = (void*)0;
                        int **l_673 = (void*)0;
                        int **l_674 = &l_580;
                        unsigned short *l_686 = &g_142[2][0];
                        (*l_674) = &g_333;
                        l_675 = &g_333;
                        (*l_580) = (((((((safe_mod_func_uint16_t_u_u((*p_52), ((*l_686) = (p_54 || (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((*l_580) == (((*l_539) = (((+(((*l_661) >= (((g_201[1] >= 0xF9L) , (*p_52)) , ((g_49[0][0] , p_52) != (void*)0))) , (-1L))) , (*g_418)) >= 0L)) , (*l_661))), p_53)), 5)), (*l_574))), (*l_675))))))) <= (*g_110)) , &g_333) != l_325) <= (*g_110)) ^ (*l_675)) | p_54);
                    }
                }
            }
            else
            {
                return p_53;
            }
        }
        else
        {
            short ***l_687 = &g_433;
            l_325 = &l_319[7][1];
            (*l_687) = g_433;
        }
        for (g_138 = 18; (g_138 > (-24)); g_138 = safe_sub_func_int8_t_s_s(g_138, 8))
        {
            for (g_24 = 13; (g_24 == (-6)); g_24--)
            {
                int **l_692 = &l_540;
                (*l_692) = &l_529;
                (*l_692) = (p_53 , (void*)0);
            }
        }
        g_110 = &l_529;
    }
    return p_51;
}







static unsigned short * func_56(int * p_57, unsigned short * p_58, char p_59)
{
    int *l_312 = (void*)0;
    int **l_313 = &l_312;
    (*l_313) = l_312;
    return &g_158[0];
}







static unsigned func_62(char p_63)
{
    short *l_66 = (void*)0;
    short *l_67 = &g_49[1][6];
    unsigned short *l_68 = (void*)0;
    int l_69 = 0xF54C3DC4L;
    int *l_80 = &g_24;
    int **l_79 = &l_80;
    unsigned l_127 = 0x22A4178BL;
    short l_130 = 0x8CB2L;
    unsigned char l_131[9] = {0UL, 0UL, 0x59L, 0UL, 0UL, 0x59L, 0UL, 0UL, 0x59L};
    unsigned *l_163 = &g_140;
    unsigned l_197 = 1UL;
    unsigned short l_208 = 0UL;
    int l_221[5] = {(-9L), (-2L), (-9L), (-2L), (-9L)};
    unsigned char l_246 = 0x85L;
    int *l_308 = (void*)0;
    int *l_309 = &l_69;
    int i;
    if ((safe_sub_func_int16_t_s_s(((*l_67) = g_49[1][5]), ((l_69 = 2UL) ^ 0xE3C2L))))
    {
        int l_75 = 0x12CD0AB8L;
        int *l_83 = &l_69;
        int *l_160 = &l_69;
        unsigned *l_164[4][4] = {{&g_140, &g_140, &g_140, &g_140}, {&g_140, &g_140, &g_140, &g_140}, {&g_140, &g_140, &g_140, &g_140}, {&g_140, &g_140, &g_140, &g_140}};
        int **l_167 = &l_160;
        unsigned *l_168 = &g_143;
        int l_178 = (-8L);
        int ***l_183 = &g_92;
        int l_229 = 0x1E0E9AD6L;
        unsigned short **l_292 = &l_68;
        int i, j;
        if ((g_24 >= l_69))
        {
            int ***l_76 = (void*)0;
            int **l_78 = (void*)0;
            int ***l_77[8];
            int i;
            for (i = 0; i < 8; i++)
                l_77[i] = &l_78;
            for (g_24 = (-5); (g_24 != (-26)); g_24 = safe_sub_func_int16_t_s_s(g_24, 1))
            {
                int *l_74[6] = {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69};
                int i;
                l_75 = (safe_lshift_func_uint16_t_u_s(p_63, 6));
            }
            l_79 = (void*)0;
            for (p_63 = 16; (p_63 < (-8)); --p_63)
            {
                return l_69;
            }
        }
        else
        {
            int *l_84 = &l_69;
            int l_112 = 0xD5B9AADFL;
            int *l_116[2];
            short l_155 = (-1L);
            unsigned **l_161 = (void*)0;
            unsigned **l_162 = (void*)0;
            int **l_165 = (void*)0;
            int **l_166[2];
            int i;
            for (i = 0; i < 2; i++)
                l_116[i] = &l_69;
            for (i = 0; i < 2; i++)
                l_166[i] = &g_110;
            l_84 = l_83;
            for (g_61 = 0; (g_61 > 9); g_61++)
            {
                int ***l_90 = &l_79;
                int ****l_89[7];
                int l_95 = (-1L);
                int *l_111[3][3][5] = {{{&l_95, &l_95, &l_69, &l_95, &l_95}, {&l_95, &l_95, &l_69, &l_95, &l_95}, {&l_95, &l_95, &l_69, &l_95, &l_95}}, {{&l_95, &l_95, &l_69, &l_95, &l_95}, {&l_95, &l_95, &l_69, &l_95, &l_95}, {&l_95, &l_95, &l_69, &l_95, &l_95}}, {{&l_95, &l_95, &l_69, &l_95, &l_95}, {&l_95, &l_95, &l_69, &l_95, &l_95}, {&l_95, &l_95, &l_69, &l_95, &l_95}}};
                unsigned char l_156 = 249UL;
                int **l_159[4][4] = {{&l_111[0][0][1], &l_84, &l_111[0][0][1], &l_84}, {&l_111[0][0][1], &l_84, &l_111[0][0][1], &l_84}, {&l_111[0][0][1], &l_84, &l_111[0][0][1], &l_84}, {&l_111[0][0][1], &l_84, &l_111[0][0][1], &l_84}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_89[i] = &l_90;
            }
            (*l_160) = (-1L);
            g_110 = (((g_142[2][0] <= g_24) ^ ((l_164[0][2] = (l_163 = l_80)) != &g_140)) , &l_69);
        }
        (*l_167) = (void*)0;
        if (((p_63 , ((*l_168) = l_130)) , (safe_add_func_uint32_t_u_u(p_63, p_63))))
        {
            char l_173 = 1L;
            int ***l_174 = (void*)0;
            int **l_175 = &l_80;
            int l_224 = 0x62014B1BL;
            short l_243 = (-1L);
            if ((((g_121[2][1][2] = (safe_add_func_int32_t_s_s(l_173, p_63))) <= p_63) == (((l_175 = &l_80) == (void*)0) | ((g_158[0] && (l_173 | ((safe_lshift_func_uint16_t_u_u((p_63 || (l_178 > p_63)), g_140)) < p_63))) , p_63))))
            {
                unsigned l_196 = 9UL;
                int ****l_198[8] = {&g_91[3][1][0], &g_91[3][1][0], (void*)0, &g_91[3][1][0], &g_91[3][1][0], (void*)0, &g_91[3][1][0], &g_91[3][1][0]};
                int *****l_199 = &l_198[3];
                unsigned short *l_200 = &g_158[0];
                int i;
                g_201[0] = ((p_63 , (safe_rshift_func_uint16_t_u_s(((p_63 >= (safe_mul_func_uint16_t_u_u(((*l_200) = ((((l_183 != (((((*l_163) = (safe_mul_func_uint16_t_u_u(((p_63 && ((0xA2L ^ p_63) < p_63)) || ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((*l_199) = (((((safe_mod_func_int8_t_s_s(p_63, (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(p_63, 9)) , l_196), 8)))) >= 0L) , l_197) != g_24) , l_198[3])) != (void*)0), l_196)), 11)) , g_158[2])), g_158[0]))) && (*l_83)) == g_142[2][0]) , &l_175)) | g_13) > 0L) , g_158[0])), 0x5F00L))) > (*l_83)), p_63))) <= 1UL);
                (*l_83) = (((l_127 || 65535UL) <= p_63) == (p_63 && ((((~(g_142[0][0] > p_63)) > 0x69L) ^ p_63) < (253UL && l_173))));
                (*l_167) = &l_69;
                for (l_178 = 0; (l_178 > 27); ++l_178)
                {
                    unsigned *l_204 = &g_140;
                    (**l_167) = ((((0xA53668A9L == (g_121[0][0][4] < 0UL)) && (+0x98CBD84FL)) | l_196) == ((void*)0 == l_204));
                }
            }
            else
            {
                int l_207 = (-1L);
                int ***l_211 = &l_175;
                int ****l_212 = &g_91[2][0][0];
                int *l_222 = &l_221[2];
                unsigned short **l_223[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_223[i] = &l_68;
                for (g_124 = 29; (g_124 <= (-8)); --g_124)
                {
                    (*l_83) = (p_63 && g_158[0]);
                }
                l_221[0] = (~((l_207 , ((l_130 == l_208) != (safe_mul_func_int8_t_s_s((((g_138 = (((p_63 , l_211) != ((*l_212) = l_183)) ^ (((safe_sub_func_uint32_t_u_u(p_63, ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_131[7], (safe_rshift_func_int8_t_s_s((l_69 = ((p_63 || l_207) ^ (-1L))), 6)))), 4294967293UL)) | p_63))) != 1L) || p_63))) != g_158[1]) ^ g_143), 0UL)))) == 246UL));
                l_222 = ((*l_167) = (*l_167));
                if ((l_224 = ((((l_68 = &g_142[1][0]) == &g_158[2]) | (1UL & 8UL)) , p_63)))
                {
                    unsigned l_230 = 0x24FC960DL;
                    (*l_167) = ((((*l_67) = ((safe_add_func_int16_t_s_s(l_197, (g_24 | l_224))) , (p_63 != ((l_224 = (safe_mul_func_uint8_t_u_u(g_201[1], g_201[0]))) == ((l_229 , 0x6FL) ^ (l_230 & 0xC28862E0L)))))) <= g_121[1][0][1]) , (void*)0);
                    for (l_69 = 0; l_69 < 5; l_69 += 1)
                    {
                        l_221[l_69] = 0x14006B9AL;
                    }
                    for (l_208 = 0; (l_208 > 6); l_208 = safe_add_func_uint16_t_u_u(l_208, 1))
                    {
                        (*l_167) = (*l_167);
                        (*l_167) = g_110;
                        if (p_63)
                            break;
                    }
                    (*l_83) = (safe_mod_func_int16_t_s_s(p_63, (safe_add_func_uint16_t_u_u(((*l_68) = ((safe_mul_func_uint8_t_u_u((((g_201[0] ^ ((g_158[0] != (safe_lshift_func_int8_t_s_u((l_230 , (safe_mul_func_int16_t_s_s(l_243, p_63))), 3))) < g_201[0])) | l_127) , (0x2F24C6D4L == p_63)), g_142[2][0])) , p_63)), 65535UL))));
                }
                else
                {
                    for (g_140 = 9; (g_140 > 36); g_140 = safe_add_func_int8_t_s_s(g_140, 5))
                    {
                        (*l_83) = ((l_243 , (**l_211)) != (**l_211));
                        if ((*l_83))
                            continue;
                        (*l_167) = g_110;
                    }
                }
            }
        }
        else
        {
            unsigned l_248 = 1UL;
            (*l_83) = l_246;
            l_248 = ((void*)0 == g_247);
        }
        for (l_127 = 0; (l_127 < 53); l_127++)
        {
            char l_257[10][5] = {{(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}, {(-5L), (-5L), 0L, (-5L), (-5L)}};
            char l_258 = (-7L);
            int ****l_284 = &g_91[3][1][0];
            unsigned l_286 = 0x27778E15L;
            int *l_291 = &l_229;
            int i, j;
            (*l_167) = ((((void*)0 != g_247) | p_63) , g_23);
            if (((p_63 || (safe_mod_func_int8_t_s_s((((*l_160) >= (((p_63 , (safe_mul_func_int16_t_s_s(l_257[6][4], (l_258 = ((**l_183) == (void*)0))))) != (p_63 & (g_121[4][2][6] > ((((g_143 , p_63) == l_246) && g_121[1][0][1]) <= l_130)))) >= 0UL)) == 0UL), p_63))) , (*l_160)))
            {
                int *l_271 = &l_229;
                int l_285 = 0x977F8B95L;
                for (g_61 = 15; (g_61 < 11); g_61--)
                {
                    short l_277 = (-1L);
                    int ****l_283 = &l_183;
                    (**l_167) = ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_49[3][7] == (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_271 = g_110) == (void*)0), (((safe_sub_func_uint16_t_u_u((((((~(((**l_167) != (p_63 <= (g_276 != (void*)0))) & (g_278[5] = l_277))) != (((safe_rshift_func_uint8_t_u_s(((g_121[1][3][1] = (safe_mod_func_int32_t_s_s(((((l_284 = l_283) == (void*)0) , 8UL) , p_63), l_285))) != p_63), g_142[2][0])) , p_63) <= p_63)) == (**l_167)) > 4L) ^ (-10L)), 0x334FL)) && l_285) && p_63))), 6)), g_143))), p_63)), p_63)) || 4L);
                    if (l_286)
                        break;
                    if (p_63)
                        continue;
                }
                (*l_167) = (*l_167);
            }
            else
            {
                for (g_143 = 13; (g_143 > 58); ++g_143)
                {
                    for (l_69 = 0; (l_69 < 27); l_69 = safe_add_func_int32_t_s_s(l_69, 7))
                    {
                        (*l_167) = g_23;
                        (*l_160) = (-1L);
                    }
                }
                (*l_167) = (void*)0;
                (*l_167) = l_291;
            }
            (*l_160) = (p_63 == 1L);
            (*l_83) = (((void*)0 == l_292) && (p_63 , ((**l_167) < g_140)));
        }
    }
    else
    {
        char l_298 = (-1L);
        int *l_299[5][9] = {{&l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2]}, {&l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2]}, {&l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2]}, {&l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2]}, {&l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2], (void*)0, (void*)0, (void*)0, &l_221[2]}};
        int **l_300 = (void*)0;
        int **l_301 = &l_299[1][5];
        int i, j;
        l_221[1] = (l_131[8] <= (safe_lshift_func_uint16_t_u_s(l_131[4], (!(safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_s(p_63, (l_298 = p_63)))))))));
        (*l_301) = l_299[0][1];
    }
    (*l_309) = ((((((1UL != ((l_208 == (g_201[0] < (0x3597BFAFL != (((+((p_63 <= (((l_221[0] = p_63) && (l_208 , (safe_sub_func_uint8_t_u_u(l_221[0], (p_63 ^ l_197))))) , 0x2BL)) & g_49[0][4])) , 0UL) != l_69)))) ^ g_13)) | p_63) > p_63) | (-6L)) < (-1L)) ^ p_63);
    (*l_309) = (p_63 , ((void*)0 == &l_127));
    return p_63;
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
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_121[i][j][k], "g_121[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_142[i][j], "g_142[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_158[i], "g_158[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_201[i], "g_201[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_278[i], "g_278[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_974[i][j], "g_974[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1331, "g_1331", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1389[i], "g_1389[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1443, "g_1443", print_hash_value);
    transparent_crc(g_1714, "g_1714", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1835[i], "g_1835[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
