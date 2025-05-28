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



static volatile int g_2 = 0xE8CFF0EAL;
static int g_3[4] = {0x2F4A8B10L, 0x96DD1E1EL, 0x2F4A8B10L, 0x96DD1E1EL};
static int g_8 = 1L;
static const int g_46 = 0x2C4EB0A1L;
static int *g_48 = &g_8;
static int **g_47[1][6][6] = {{{&g_48, &g_48, &g_48, &g_48, &g_48, &g_48}, {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48}, {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48}, {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48}, {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48}, {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48}}};
static short g_52 = 0L;
static int g_83 = 0x421A0E57L;
static unsigned g_134 = 0x04891CAFL;
static unsigned long long g_223 = 0x37710792D11FC3DFLL;
static long long g_225 = 0xA9B5964913073420LL;
static unsigned short g_304 = 7UL;
static unsigned short *g_303 = &g_304;
static unsigned g_330 = 0xA71856C4L;
static unsigned g_360 = 4UL;
static unsigned short g_372 = 1UL;
static short g_374[1][4][3] = {{{0xAA12L, 0xF98EL, 0xAA12L}, {0xAA12L, 0xF98EL, 0xAA12L}, {0xAA12L, 0xF98EL, 0xAA12L}, {0xAA12L, 0xF98EL, 0xAA12L}}};
static const unsigned g_383 = 0x9222E310L;
static int g_428 = 0xA2EB5741L;
static long long g_452 = (-1L);
static volatile unsigned char g_459 = 0x9DL;
static volatile unsigned char *g_458 = &g_459;
static volatile unsigned char **g_457[6] = {&g_458, &g_458, &g_458, &g_458, &g_458, &g_458};
static unsigned short g_501 = 65530UL;
static volatile int ***g_561 = (void*)0;
static volatile int ****g_560 = &g_561;
static unsigned *g_593[8][2][5] = {{{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}, {{&g_134, &g_134, &g_134, &g_134, &g_360}, {&g_134, &g_134, &g_134, &g_134, &g_360}}};
static unsigned **g_592 = &g_593[1][1][2];
static long long g_618 = (-1L);
static unsigned g_659 = 0UL;
static volatile unsigned char *g_763 = &g_459;
static unsigned short g_765 = 0x12C6L;
static int g_788[10][10] = {{0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}, {0x198DF0C1L, 0xD72B07A8L, (-1L), 9L, 0x4B2ED663L, (-9L), 0x4B2ED663L, 9L, (-1L), 0xD72B07A8L}};
static int g_790 = (-1L);
static unsigned char g_826 = 252UL;
static unsigned g_872[8][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
static volatile unsigned g_1002 = 3UL;
static unsigned char g_1102 = 9UL;
static unsigned long long g_1213 = 0x2B37565F56BB2096LL;
static volatile unsigned short g_1293 = 0xE6C7L;
static volatile unsigned short *g_1292[6][7] = {{&g_1293, &g_1293, &g_1293, &g_1293, &g_1293, &g_1293, (void*)0}, {&g_1293, &g_1293, &g_1293, &g_1293, &g_1293, &g_1293, (void*)0}, {&g_1293, &g_1293, &g_1293, &g_1293, &g_1293, &g_1293, (void*)0}, {&g_1293, &g_1293, &g_1293, &g_1293, &g_1293, &g_1293, (void*)0}, {&g_1293, &g_1293, &g_1293, &g_1293, &g_1293, &g_1293, (void*)0}, {&g_1293, &g_1293, &g_1293, &g_1293, &g_1293, &g_1293, (void*)0}};
static volatile unsigned short **g_1291 = &g_1292[1][5];
static volatile unsigned short ***g_1290 = &g_1291;
static int *g_1314 = (void*)0;
static unsigned g_1351 = 1UL;
static char g_1493 = 0x51L;
static volatile unsigned long long g_1495 = 6UL;
static volatile unsigned short g_1621 = 0x74BCL;
static int g_1627 = 0xF53CE427L;
static short *g_1748 = &g_374[0][0][0];
static short **g_1747[7] = {&g_1748, &g_1748, &g_1748, &g_1748, &g_1748, &g_1748, &g_1748};
static unsigned char ** const **g_1772 = (void*)0;
static volatile unsigned char ***g_1774 = &g_457[2];
static volatile unsigned char *** const *g_1773 = &g_1774;
static unsigned char g_1839[8] = {247UL, 5UL, 247UL, 5UL, 247UL, 5UL, 247UL, 5UL};
static unsigned long long g_1840 = 0x91C23FB7F2EA35F2LL;



static char func_1(void);
static int * const * func_9(int * const * const p_10, int ** p_11);
static int * const * func_12(int * const p_13, const char p_14, int ** p_15, int ** p_16);
static int ** func_19(long long p_20, int * p_21);
static short func_22(unsigned char p_23, int ** p_24);
static int ** func_29(int ** p_30, unsigned long long p_31, unsigned short p_32, int p_33, short p_34);
static char func_37(const int * p_38, unsigned long long p_39, long long p_40, int ** p_41, const int p_42);
static unsigned func_58(const unsigned short p_59, unsigned p_60, int p_61, int p_62, short p_63);
static int func_65(unsigned p_66, unsigned short p_67, short * p_68, const unsigned p_69);
static unsigned func_72(unsigned short p_73);
static char func_1(void)
{
    const int l_18 = 0x27D373EEL;
    int *l_36 = (void*)0;
    int **l_35 = &l_36;
    const int *l_45 = &g_46;
    unsigned short *l_1828 = &g_304;
    unsigned char *l_1837 = (void*)0;
    unsigned char *l_1838[10][6] = {{(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}, {(void*)0, &g_1102, &g_1839[7], &g_826, &g_1102, &g_826}};
    char *l_1841[6] = {&g_1493, &g_1493, &g_1493, &g_1493, &g_1493, &g_1493};
    int l_1842 = 0x5A2CE99AL;
    short l_1843[6] = {0xAC34L, 0xAC34L, (-6L), 0xAC34L, 0xAC34L, (-6L)};
    int *l_1844 = &g_790;
    int i, j;
    for (g_3[0] = 26; (g_3[0] != 0); g_3[0]--)
    {
        short l_6 = (-8L);
        int *l_7[8] = {&g_3[0], &g_3[0], &g_8, &g_3[0], &g_3[0], &g_8, &g_3[0], &g_3[0]};
        int * const l_17 = &g_3[0];
        const int *l_44 = &l_18;
        const int **l_43 = &l_44;
        unsigned long long *l_655 = &g_223;
        int * const **l_1824 = (void*)0;
        int * const *l_1826 = &l_7[0];
        int * const **l_1825 = &l_1826;
        int i;
        g_8 &= l_6;
        (*l_1825) = (g_3[0] , func_9(func_12(l_17, l_18, &l_7[1], func_19((func_22((safe_mod_func_uint64_t_u_u(g_8, (safe_rshift_func_int8_t_s_u(g_3[1], 2)))), func_29(l_35, ((*l_655) = (((((*l_17) >= func_37((l_45 = ((*l_43) = (*l_35))), g_2, (*l_17), g_47[0][2][2], (*l_17))) > g_3[1]) <= (*l_17)) , g_360)), (*l_17), (*l_17), g_3[0])) >= 0xAE8BL), l_7[1])), g_47[0][2][2]));
        return g_330;
    }
    (*l_1844) ^= func_58(((*l_1828) = (safe_unary_minus_func_int8_t_s(g_826))), (((g_1102 >= (l_1842 = (4294967287UL <= ((safe_lshift_func_uint16_t_u_s(((func_72((*l_45)) , (*l_45)) || ((safe_mul_func_int16_t_s_s((func_72((g_372 = ((func_72(((*l_45) && ((g_1493 = (safe_lshift_func_uint8_t_u_s((((((safe_add_func_uint8_t_u_u(((g_1839[4] = (*l_45)) != (g_1840 = 1UL)), (*g_763))) ^ g_374[0][2][2]) && 0xE4DFB08FB3DC5E62LL) | (*l_45)) <= (*g_1748)), 7))) , (*l_45)))) == g_1627) | (*g_48)))) , (*g_1748)), 1UL)) || (*l_45))), 12)) < g_1627)))) < g_501) , 18446744073709551615UL), g_788[2][2], (*l_45), l_1843[5]);
    return g_1621;
}







static int * const * func_9(int * const * const p_10, int ** p_11)
{
    int *l_1821 = (void*)0;
    int *l_1822 = (void*)0;
    int *l_1823 = &g_83;
    (*l_1823) = 0xB4C5D0B1L;
    return p_11;
}







static int * const * func_12(int * const p_13, const char p_14, int ** p_15, int ** p_16)
{
    int *l_1491 = &g_790;
    char *l_1492 = &g_1493;
    short *l_1494[5];
    unsigned long long *l_1496[6][9][4] = {{{&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}}, {{&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}}, {{&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}}, {{&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}}, {{&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}}, {{&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}, {&g_223, (void*)0, &g_1213, &g_1213}}};
    int ***l_1498[7] = {&g_47[0][0][0], (void*)0, &g_47[0][0][0], (void*)0, &g_47[0][0][0], (void*)0, &g_47[0][0][0]};
    int *** const *l_1497 = &l_1498[6];
    long long *l_1499 = &g_452;
    short *l_1605 = &g_52;
    long long l_1664[4][7] = {{0L, (-5L), 0x813479EB4A091661LL, 2L, 0xC25200B472400CC4LL, 0x8C272DE33B3EC210LL, 0xC25200B472400CC4LL}, {0L, (-5L), 0x813479EB4A091661LL, 2L, 0xC25200B472400CC4LL, 0x8C272DE33B3EC210LL, 0xC25200B472400CC4LL}, {0L, (-5L), 0x813479EB4A091661LL, 2L, 0xC25200B472400CC4LL, 0x8C272DE33B3EC210LL, 0xC25200B472400CC4LL}, {0L, (-5L), 0x813479EB4A091661LL, 2L, 0xC25200B472400CC4LL, 0x8C272DE33B3EC210LL, 0xC25200B472400CC4LL}};
    int l_1665 = 0L;
    int * const l_1681 = &g_83;
    int ****l_1688[5][2][2] = {{{&l_1498[2], &l_1498[6]}, {&l_1498[2], &l_1498[6]}}, {{&l_1498[2], &l_1498[6]}, {&l_1498[2], &l_1498[6]}}, {{&l_1498[2], &l_1498[6]}, {&l_1498[2], &l_1498[6]}}, {{&l_1498[2], &l_1498[6]}, {&l_1498[2], &l_1498[6]}}, {{&l_1498[2], &l_1498[6]}, {&l_1498[2], &l_1498[6]}}};
    int ****l_1689 = &l_1498[0];
    unsigned ***l_1721 = &g_592;
    unsigned l_1783 = 0x0264FF5EL;
    unsigned char * const **l_1802 = (void*)0;
    int * const *l_1820[9][8][3] = {{{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}, {{&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}, {&l_1681, (void*)0, &l_1681}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1494[i] = &g_374[0][0][0];
    l_1491 = ((*p_15) = l_1491);
    (*l_1491) = (*l_1491);
    if (((((*l_1492) = p_14) , ((-1L) || ((*l_1491) = (l_1491 != p_13)))) , ((((*l_1499) = (g_1495 > (((((*p_13) != (0xC91A03DC57991EE5LL && (g_618 ^ ((*l_1491) = (6L > p_14))))) > p_14) , l_1497) == &l_1498[6]))) != g_501) == g_304)))
    {
        char l_1502 = 0x43L;
        unsigned l_1527[6][4][9] = {{{2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}}, {{2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}}, {{2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}}, {{2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}}, {{2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}}, {{2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}, {2UL, 0x841C190BL, 5UL, 0x983E45B0L, 0UL, 2UL, 2UL, 0x4E7D6D0CL, 0x4AAC6DB2L}}};
        int l_1528 = 8L;
        int l_1530[10][9] = {{1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}, {1L, 0xE26F8D6EL, (-1L), 0x11C820DCL, 0xBD19BEECL, (-1L), 0xE26F8D6EL, 0xB68CB1B8L, (-1L)}};
        int **l_1561 = &g_1314;
        char l_1602[1];
        unsigned long long *l_1614 = &g_223;
        int l_1616 = 3L;
        unsigned short l_1631 = 0x7F99L;
        unsigned long long l_1677 = 0x5CD6EF15D6837FE7LL;
        int * const *l_1742 = &g_48;
        unsigned *l_1759 = (void*)0;
        unsigned *l_1760 = &g_134;
        short *l_1761[8][10] = {{&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}, {&g_52, (void*)0, &g_52, &g_52, &g_52, &g_52, &g_52, (void*)0, &g_52, (void*)0}};
        unsigned char *l_1762[8][10] = {{&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}, {&g_1102, (void*)0, &g_1102, &g_826, &g_826, &g_1102, (void*)0, &g_1102, &g_1102, &g_1102}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1602[i] = 0x34L;
        for (g_8 = 5; (g_8 <= (-5)); g_8 = safe_sub_func_int32_t_s_s(g_8, 2))
        {
            unsigned short l_1513[6];
            long long l_1514[1][1];
            int l_1533[2][6][1] = {{{0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}}, {{0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}, {0x2ACA09A6L}}};
            long long l_1556[8] = {0xFBE80DE5B8234502LL, 0L, 0xFBE80DE5B8234502LL, 0L, 0xFBE80DE5B8234502LL, 0L, 0xFBE80DE5B8234502LL, 0L};
            unsigned char * const *l_1655 = (void*)0;
            unsigned char * const **l_1654 = &l_1655;
            unsigned char * const ***l_1653 = &l_1654;
            unsigned l_1659[8];
            int *l_1678 = &g_788[7][3];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1513[i] = 0xDC8FL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1514[i][j] = 1L;
            }
            for (i = 0; i < 8; i++)
                l_1659[i] = 0x7EC7FEB5L;
            l_1502 &= (*l_1491);
        }
        if ((safe_add_func_int32_t_s_s((~((safe_sub_func_int8_t_s_s(p_14, 255UL)) != func_72(func_72((safe_add_func_uint16_t_u_u(65535UL, (l_1528 = (-1L)))))))), (p_14 || ((g_3[3] >= (safe_sub_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(0x7AL, p_14)) <= l_1616), p_14))) <= g_1493)))))
        {
            int *l_1706[10][10];
            short *l_1730 = &g_374[0][3][2];
            int l_1736[10] = {1L, 1L, 0xB061CAD5L, 1L, 1L, 0xB061CAD5L, 1L, 1L, 0xB061CAD5L, 1L};
            unsigned l_1737 = 0x8302F1D8L;
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1706[i][j] = &g_3[0];
            }
            for (g_134 = 2; (g_134 >= 43); g_134 = safe_add_func_uint16_t_u_u(g_134, 9))
            {
                int *l_1707 = &g_428;
                (*p_15) = (*p_15);
                l_1707 = l_1706[1][0];
            }
            for (g_659 = 0; (g_659 < 37); g_659++)
            {
                const unsigned *l_1729[4][3] = {{&g_383, &g_383, &g_383}, {&g_383, &g_383, &g_383}, {&g_383, &g_383, &g_383}, {&g_383, &g_383, &g_383}};
                const unsigned **l_1728 = &l_1729[3][0];
                const unsigned ***l_1727 = &l_1728;
                const unsigned ****l_1726 = &l_1727;
                int i, j;
                for (g_134 = 6; (g_134 < 57); g_134 = safe_add_func_uint32_t_u_u(g_134, 4))
                {
                    int l_1731[10][8] = {{(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}, {(-1L), 0xC4B8A8CAL, 0x268A61E6L, 0xC4B8A8CAL, (-1L), 4L, (-1L), 0xC4B8A8CAL}};
                    const int *l_1733 = &g_8;
                    const int **l_1734 = (void*)0;
                    const int **l_1735 = &l_1733;
                    int i, j;
                    for (l_1616 = (-16); (l_1616 <= (-16)); l_1616++)
                    {
                        unsigned *l_1718 = &g_360;
                        unsigned ****l_1722 = &l_1721;
                        unsigned ***l_1724 = &g_592;
                        unsigned ****l_1723 = &l_1724;
                        unsigned *l_1725[10][9][1] = {{{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}, {{&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}, {&g_872[7][0]}}};
                        int l_1732 = 1L;
                        int i, j, k;
                        (*l_1491) = ((((safe_mod_func_int16_t_s_s((((((*l_1605) = (safe_add_func_uint32_t_u_u(((*l_1718) = (*l_1491)), ((0xE619A9DE96272A1CLL || g_428) , ((65535UL != (safe_mod_func_uint8_t_u_u(1UL, (func_65((g_872[7][0] = (((*l_1723) = ((*l_1722) = l_1721)) != (void*)0)), ((*g_303) = ((l_1726 != (p_14 , l_1723)) >= g_459)), l_1730, g_374[0][3][2]) & g_428)))) | g_8))))) | 0xB58FL) == l_1731[3][7]) >= l_1732), g_765)) | (*p_13)) <= p_14) | 65534UL);
                    }
                    (*l_1735) = l_1733;
                }
                return &g_48;
            }
            --l_1737;
        }
        else
        {
            int *l_1740 = &l_1616;
            l_1740 = &l_1616;
            if ((*p_13))
            {
                return &g_48;
            }
            else
            {
                int * const *l_1741 = &l_1740;
                return l_1742;
            }
        }
        (*l_1491) = (safe_add_func_int16_t_s_s((((((0x63L <= (((safe_mul_func_int8_t_s_s(p_14, ((*l_1681) = (g_1747[6] != (((safe_mul_func_int16_t_s_s(l_1631, (safe_mul_func_uint16_t_u_u(p_14, (safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_14, ((*l_1605) = (((void*)0 != (*p_15)) <= func_65(((((safe_mul_func_int16_t_s_s(((*g_1748) = ((((*l_1760) ^= 1UL) , l_1530[6][3]) , p_14)), p_14)) , 18446744073709551615UL) != (-1L)) , g_790), p_14, l_1761[2][4], g_3[0]))))), p_14)))))) ^ 0xD2EE05AC8703F7E1LL) , (void*)0))))) == 0xFB19L) & 5L)) & 0x53L) > l_1502) ^ p_14) & 0xE0084CC8L), (*l_1491)));
    }
    else
    {
        int *l_1763 = (void*)0;
        unsigned short *l_1775[4];
        int l_1776 = 0xC083A121L;
        int l_1784 = 0L;
        int l_1785 = 0x169A8579L;
        unsigned l_1786 = 0x8DD8D36EL;
        int i;
        for (i = 0; i < 4; i++)
            l_1775[i] = (void*)0;
        (*p_15) = l_1763;
        l_1776 &= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((func_37(l_1763, ((safe_lshift_func_uint16_t_u_u(((*g_303) &= (g_1772 != g_1773)), 5)) >= (++g_372)), g_374[0][0][0], &g_48, ((~(safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(func_72(p_14), p_14)), (l_1783 = (*l_1491))))) || p_14)) || p_14), p_14)), p_14)), l_1784));
        ++l_1786;
        for (l_1776 = 7; (l_1776 <= (-9)); l_1776--)
        {
            unsigned l_1791[10] = {0x8929ECE9L, 4UL, 0x8929ECE9L, 4UL, 0x8929ECE9L, 4UL, 0x8929ECE9L, 4UL, 0x8929ECE9L, 4UL};
            int i;
            l_1791[9]--;
            l_1763 = (*p_15);
            (*l_1491) &= l_1786;
            if (l_1791[0])
                continue;
        }
    }
    for (g_1102 = 0; (g_1102 == 53); ++g_1102)
    {
        int *l_1796 = &g_8;
        int *l_1803 = &g_1627;
        unsigned *l_1814 = &g_330;
        unsigned *l_1817 = &g_659;
        unsigned *l_1818 = &g_360;
        int l_1819 = 0x7BC3A61AL;
        for (g_1627 = 0; (g_1627 <= 6); g_1627 += 1)
        {
            int l_1797 = 0L;
            (*p_15) = l_1796;
            l_1797 = (*l_1796);
            return &g_48;
        }
        (*l_1796) = ((func_58((p_14 , (safe_rshift_func_uint16_t_u_s(9UL, ((safe_lshift_func_uint16_t_u_u(0UL, 7)) == ((void*)0 == l_1802))))), g_374[0][0][0], (*l_1796), ((*l_1803) = ((*g_763) < g_134)), p_14) , p_14) ^ 3L);
        l_1819 &= (safe_rshift_func_int8_t_s_u(((*l_1681) > (safe_mul_func_int8_t_s_s((((*g_763) <= (safe_rshift_func_uint16_t_u_u((0x0FBAL > ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((g_374[0][0][0] == g_1351), (*l_1491))), (((*l_1817) |= ((*l_1814)++)) , ((*l_1818) = func_72((*g_303)))))) > (g_1102 == p_14))), p_14))) , g_374[0][3][1]), 1L))), (*l_1796)));
    }
    return &g_48;
}







static int ** func_19(long long p_20, int * p_21)
{
    int * const *l_772 = &g_48;
    int * const ** const l_771 = &l_772;
    int * const ** const *l_770 = &l_771;
    unsigned l_785 = 0x1DBAE06DL;
    short *l_786 = &g_52;
    int *l_787 = &g_788[9][6];
    char l_789 = (-10L);
    unsigned l_791 = 0x4876099BL;
    int *l_792 = &g_428;
    unsigned long long * const l_795 = &g_223;
    int l_848 = (-1L);
    int l_851 = 0x10711112L;
    int l_868 = 5L;
    int l_871 = 0x3A5C65E1L;
    unsigned char l_876 = 0xB8L;
    int l_899 = 0x35D0A347L;
    int l_900 = (-7L);
    int l_901 = (-1L);
    int l_903 = (-6L);
    const int *l_935[6][9][3] = {{{&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}}, {{&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}}, {{&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}}, {{&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}}, {{&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}}, {{&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}, {&g_790, &l_899, &g_3[2]}}};
    unsigned l_963 = 0xE9FCF651L;
    unsigned short *l_970 = &g_304;
    char l_1041 = 1L;
    int l_1118 = 0L;
    int l_1119 = 0xBA201744L;
    int l_1120 = 0xEB6BDDA6L;
    int l_1121 = 8L;
    int l_1122[9] = {0xF422420BL, 1L, 0xF422420BL, 1L, 0xF422420BL, 1L, 0xF422420BL, 1L, 0xF422420BL};
    int *l_1131 = &l_1119;
    unsigned l_1134 = 0x162943AAL;
    int l_1138[3][3] = {{1L, (-9L), 1L}, {1L, (-9L), 1L}, {1L, (-9L), 1L}};
    unsigned **l_1197 = (void*)0;
    unsigned char * const **l_1260 = (void*)0;
    unsigned short l_1294 = 8UL;
    const unsigned long long l_1334 = 0x30C88666AC47AA30LL;
    unsigned long long *l_1335 = (void*)0;
    unsigned long long *l_1336 = &g_1213;
    unsigned char l_1355 = 255UL;
    const int *l_1367 = &l_901;
    unsigned short l_1393[7] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
    unsigned char l_1432[5][3] = {{1UL, 1UL, 0x98L}, {1UL, 1UL, 0x98L}, {1UL, 1UL, 0x98L}, {1UL, 1UL, 0x98L}, {1UL, 1UL, 0x98L}};
    long long l_1486 = (-1L);
    int i, j, k;
    (*l_792) = (((*g_303) = ((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s((func_58((l_770 != (((*l_787) = (((*l_786) = (((((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_20, ((safe_mul_func_uint8_t_u_u((0x1FB1971D2D0FD843LL <= g_223), (safe_mul_func_uint16_t_u_u(((*g_458) <= ((safe_rshift_func_int16_t_s_s(p_20, (safe_mul_func_uint16_t_u_u(l_785, (*g_303))))) , p_20)), (*g_303))))) , g_372))), g_46)) , p_20) | g_374[0][0][0]) != p_20) < 0xD231L)) || p_20)) , &g_561)), p_20, l_789, p_20, p_20) , p_20), 4)) == p_20) >= g_3[0]) , 0UL), g_790)) | l_791)) , 0L);
    if ((safe_add_func_uint64_t_u_u(((p_20 , l_795) != (void*)0), p_20)))
    {
        int *l_803 = &g_428;
        short *l_819 = &g_52;
        int l_842[4];
        char l_888[2];
        unsigned char *l_911 = &g_826;
        unsigned char **l_910 = &l_911;
        unsigned char ***l_909 = &l_910;
        unsigned char l_924[3];
        int i;
        for (i = 0; i < 4; i++)
            l_842[i] = 0L;
        for (i = 0; i < 2; i++)
            l_888[i] = 1L;
        for (i = 0; i < 3; i++)
            l_924[i] = 0xD2L;
        for (g_83 = (-9); (g_83 <= 27); g_83 = safe_add_func_uint64_t_u_u(g_83, 9))
        {
            char l_802 = (-1L);
            long long l_823 = 0x6CBE6231E0806292LL;
            short *l_824 = &g_52;
            int l_850 = 0xF40CC506L;
            int l_852[8][1] = {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}};
            char l_898 = 0x35L;
            int l_902 = 0xCC15DC32L;
            int l_915 = 0xB4BA1E54L;
            int i, j;
            for (g_428 = 0; (g_428 >= 1); g_428 = safe_add_func_uint16_t_u_u(g_428, 3))
            {
                for (g_304 = 0; (g_304 <= 29); g_304 = safe_add_func_int64_t_s_s(g_304, 4))
                {
                    l_802 = (&g_763 == (void*)0);
                }
            }
            for (g_360 = 1; (g_360 <= 9); g_360 += 1)
            {
                short l_818[1];
                int l_839 = 0xE0DFEDF0L;
                int l_866 = (-1L);
                int l_867 = 0xC7FC1E50L;
                int l_869 = (-8L);
                int l_870[10][6][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_818[i] = 0xE850L;
            }
            for (g_501 = (-5); (g_501 >= 2); g_501 = safe_add_func_uint32_t_u_u(g_501, 2))
            {
                int *l_892 = &l_871;
                int *l_893 = &l_850;
                int *l_894 = &l_852[7][0];
                int *l_895 = (void*)0;
                int *l_896[5][9] = {{&l_852[7][0], &l_850, &l_852[7][0], &g_790, &l_850, &l_850, &l_850, &g_790, &l_852[7][0]}, {&l_852[7][0], &l_850, &l_852[7][0], &g_790, &l_850, &l_850, &l_850, &g_790, &l_852[7][0]}, {&l_852[7][0], &l_850, &l_852[7][0], &g_790, &l_850, &l_850, &l_850, &g_790, &l_852[7][0]}, {&l_852[7][0], &l_850, &l_852[7][0], &g_790, &l_850, &l_850, &l_850, &g_790, &l_852[7][0]}, {&l_852[7][0], &l_850, &l_852[7][0], &g_790, &l_850, &l_850, &l_850, &g_790, &l_852[7][0]}};
                long long l_897 = 0x47F90E4BD7E784CCLL;
                unsigned short l_904 = 0x14C9L;
                const int **l_936 = &l_935[2][3][0];
                int i, j;
                --l_904;
                for (l_899 = 0; (l_899 < 7); l_899++)
                {
                    unsigned char ****l_912 = &l_909;
                    int l_916 = 2L;
                    int l_917 = 0x69EB2802L;
                    int l_920 = 0x818BFA57L;
                    int l_921 = 3L;
                    int l_923 = 0xD2AE519FL;
                    (*l_894) = (((*l_912) = l_909) == (void*)0);
                    for (l_871 = (-27); (l_871 == 27); l_871 = safe_add_func_int32_t_s_s(l_871, 7))
                    {
                        short l_918 = 0x1E5DL;
                        int l_919 = 0xB1647BB1L;
                        int l_922[3];
                        unsigned *l_933[3];
                        unsigned char ***l_934[3][1][10] = {{{&l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910}}, {{&l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910}}, {{&l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910, &l_910}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_922[i] = 0x513FCDE9L;
                        for (i = 0; i < 3; i++)
                            l_933[i] = &g_134;
                        l_924[2]--;
                        (*l_803) = (safe_sub_func_int16_t_s_s(((*l_786) = (((0x7872L >= (l_922[1] , (*g_303))) | ((4L != p_20) == (safe_add_func_int32_t_s_s((*l_803), (l_916 = p_20))))) , ((g_223 | ((((*l_894) |= 0x04769150L) < p_20) > 0x9288A7F1L)) ^ l_919))), 0x5BC2L));
                        (*l_893) &= ((*l_803) = ((*l_894) &= (l_934[2][0][1] == &g_457[1])));
                    }
                }
                (*l_936) = l_935[1][6][2];
            }
            (*l_803) = (7UL && (0xACL || (*g_458)));
        }
    }
    else
    {
        int *l_937 = &l_901;
        long long *l_938 = &g_225;
        short *l_941 = (void*)0;
        char *l_942 = &l_789;
        char l_943 = 1L;
        char l_944 = (-1L);
        int *l_945 = &l_871;
        int l_956 = 4L;
        int l_957 = (-1L);
        int l_958 = 0x986EA91FL;
        int l_959 = 0L;
        int l_960 = 0xD2B4B3D2L;
        int l_961 = 0x84EB70D7L;
        int l_962[1][7];
        int ***l_976 = &g_47[0][3][1];
        int ****l_975 = &l_976;
        int l_997 = (-1L);
        unsigned long long l_1072[2][3];
        unsigned l_1099 = 0xBB86C989L;
        char l_1137[5][3][1] = {{{0xD8L}, {0xD8L}, {0xD8L}}, {{0xD8L}, {0xD8L}, {0xD8L}}, {{0xD8L}, {0xD8L}, {0xD8L}}, {{0xD8L}, {0xD8L}, {0xD8L}}, {{0xD8L}, {0xD8L}, {0xD8L}}};
        short l_1170 = 0xB2DDL;
        short l_1177 = (-1L);
        unsigned short **l_1289 = &l_970;
        unsigned short ***l_1288 = &l_1289;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_962[i][j] = 0L;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_1072[i][j] = 0xB9A6F2D4CDBC6EEELL;
        }
        l_937 = l_937;
        if ((((((((*l_792) = ((*l_937) >= (-1L))) , ((((((*l_942) &= ((g_618 = ((*l_938) = ((+(65535UL < 1L)) < p_20))) != ((safe_mul_func_int16_t_s_s(p_20, ((g_83 , l_941) == (void*)0))) == p_20))) == (*l_792)) >= (-4L)) ^ p_20) , p_20)) , 0x0D8DL) ^ (*l_937)) > l_943) == l_944))
        {
            l_945 = l_937;
        }
        else
        {
            int *l_946 = &g_83;
            int *l_947 = &l_903;
            int *l_948 = &l_871;
            int *l_949 = &l_900;
            int *l_950 = &l_899;
            int *l_951 = (void*)0;
            int *l_952 = &l_900;
            int *l_953 = &g_790;
            int *l_954[8] = {&l_851, &g_8, &l_851, &g_8, &l_851, &g_8, &l_851, &g_8};
            short l_955 = 0xDED5L;
            int i;
            l_963++;
            (*l_937) = (((*l_786) &= g_765) , (*l_953));
        }
        (*l_945) ^= (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(p_20, 1)), 0xE8D5D1E9L));
        if (((*l_792) = ((*l_945) = ((p_20 < (((g_330 , l_970) != &g_501) && 1UL)) , (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((*l_975) = (void*)0) == (void*)0), ((*l_945) && (safe_sub_func_int32_t_s_s((*l_792), 0UL))))), 1))))))
        {
            unsigned *l_979 = &l_791;
            unsigned **l_980 = &g_593[1][1][2];
            short *l_995[4][7][6] = {{{(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}}, {{(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}}, {{(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}}, {{(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}, {(void*)0, (void*)0, (void*)0, &g_52, (void*)0, &g_374[0][0][0]}}};
            unsigned l_996 = 0x1A36747BL;
            int *l_998 = &l_962[0][1];
            unsigned char *l_1001 = &g_826;
            int l_1008[6] = {(-9L), 0x9DB5F5CFL, (-9L), 0x9DB5F5CFL, (-9L), 0x9DB5F5CFL};
            int *l_1019[10][5] = {{&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}, {&l_960, &l_1008[3], &l_956, &l_1008[3], &l_960}};
            long long *l_1030[9][6] = {{&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}, {&g_452, &g_225, &g_452, &g_225, &g_452, &g_225}};
            unsigned l_1050 = 0UL;
            char l_1060 = 0L;
            unsigned short **l_1069 = &l_970;
            int l_1071 = 0xB33E9DCCL;
            int **l_1104[10][2][9] = {{{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}, {{&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}, {&l_1019[1][1], &l_1019[4][4], &l_792, &l_1019[4][4], &l_1019[1][1], &l_998, &l_1019[1][1], &l_1019[4][4], &l_945}}};
            unsigned long long l_1123 = 6UL;
            unsigned l_1128 = 0x5CF37506L;
            unsigned char l_1143 = 1UL;
            int i, j, k;
            (*l_937) ^= (p_20 , ((p_20 ^ p_20) < (l_979 != ((*l_980) = &g_134))));
            (*l_998) &= (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(func_58(func_58((((g_134 , func_37((((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0xFAL, ((safe_sub_func_int8_t_s_s(((*l_942) = g_223), (((*l_937) == (safe_rshift_func_uint8_t_u_u((*g_763), 4))) ^ (safe_rshift_func_uint8_t_u_s((&g_374[0][0][0] == l_995[3][5][1]), 4))))) , (((func_58((*g_303), p_20, l_996, g_330, l_996) ^ p_20) < g_872[7][0]) <= p_20)))), 0x5AL)) <= 0xB36AL) , p_21), p_20, (*l_945), g_47[0][2][1], p_20)) , l_997) , l_996), g_501, l_996, g_872[4][0], g_223), g_872[7][0], g_765, l_996, g_788[1][9]), p_20)) , (*g_303)), (*l_937)));
            if ((p_20 < (safe_rshift_func_int8_t_s_s(((void*)0 == l_1001), 2))))
            {
                unsigned char l_1009 = 255UL;
                short *l_1031 = &g_374[0][0][0];
                (*l_998) = ((0x8C1CDA8126FBBF7DLL == (((((0xCBBD38FE5BB6E33BLL < (g_3[0] != (p_20 , 1UL))) < g_1002) || (g_872[6][0] < 0xCFL)) & (safe_add_func_uint16_t_u_u((&g_225 == &g_452), 1UL))) || 1L)) == g_872[7][0]);
                for (l_997 = 0; (l_997 <= 9); l_997 += 1)
                {
                    char l_1006 = 0L;
                    int l_1007 = (-1L);
                    (*l_945) = (p_20 > (*l_998));
                    for (g_83 = 0; (g_83 <= 0); g_83 += 1)
                    {
                        int *l_1005[8][10][3] = {{{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}, {{&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}, {&g_8, &g_8, &l_903}}};
                        unsigned short l_1012 = 65535UL;
                        int i, j, k;
                        l_1009++;
                        (*l_998) = p_20;
                        (*l_792) = (func_72((*g_303)) >= l_1012);
                    }
                }
                for (l_868 = 0; (l_868 != 22); ++l_868)
                {
                    int *l_1017 = (void*)0;
                    (*l_945) = l_1009;
                    if (((l_1009 <= ((safe_unary_minus_func_uint8_t_u((*g_458))) >= 6UL)) >= p_20))
                    {
                        short l_1016[4] = {0L, 0x9321L, 0L, 0x9321L};
                        int **l_1018[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1018[i] = &l_945;
                        if (l_1016[2])
                            break;
                        l_1019[1][1] = l_1017;
                    }
                    else
                    {
                        (*l_998) ^= (func_65((safe_mul_func_uint16_t_u_u(((--(*g_303)) > (safe_lshift_func_int16_t_s_u((+(((*g_763) , (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((1UL & (l_1030[3][4] != &g_452)), 0)) >= (0x0F64L || l_1009)) , p_20), g_225))) ^ 0UL)), p_20))), p_20)), g_372, l_1031, p_20) && g_134);
                        return &g_48;
                    }
                }
            }
            else
            {
                short *l_1049 = &g_374[0][0][0];
                int l_1052 = 0x4A9C935EL;
                unsigned long long l_1055[2];
                char l_1059 = 0x94L;
                int l_1061 = 9L;
                int l_1114 = 0x56FA1A37L;
                int l_1115 = (-1L);
                int l_1116 = 0x60FB3427L;
                int l_1117[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1055[i] = 0UL;
                for (i = 0; i < 2; i++)
                    l_1117[i] = 0x340F747BL;
                l_935[1][6][2] = (void*)0;
                for (g_372 = 0; (g_372 < 55); g_372 = safe_add_func_uint32_t_u_u(g_372, 2))
                {
                    short l_1038 = 0L;
                    int l_1051 = (-1L);
                    int l_1053[1][5][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
                    int i, j, k;
                }
                for (l_1061 = 0; (l_1061 <= 2); l_1061 += 1)
                {
                    unsigned short ***l_1070 = &l_1069;
                    int l_1078 = 0xB1058645L;
                    int **l_1103 = &l_998;
                    int l_1113[6] = {0x738FD305L, 0x738FD305L, 0xE11D749EL, 0x738FD305L, 0x738FD305L, 0xE11D749EL};
                    int i;
                    (*l_1070) = l_1069;
                }
            }
            for (g_765 = (-10); (g_765 != 37); ++g_765)
            {
                int l_1139[5] = {1L, 0xA69B072EL, 1L, 0xA69B072EL, 1L};
                int l_1140 = 9L;
                int l_1141 = 0x03483F48L;
                int l_1142 = 0x04492A34L;
                int i;
                if ((*l_937))
                {
                    short *l_1129[6][5] = {{(void*)0, &g_374[0][0][0], (void*)0, &g_374[0][0][0], (void*)0}, {(void*)0, &g_374[0][0][0], (void*)0, &g_374[0][0][0], (void*)0}, {(void*)0, &g_374[0][0][0], (void*)0, &g_374[0][0][0], (void*)0}, {(void*)0, &g_374[0][0][0], (void*)0, &g_374[0][0][0], (void*)0}, {(void*)0, &g_374[0][0][0], (void*)0, &g_374[0][0][0], (void*)0}, {(void*)0, &g_374[0][0][0], (void*)0, &g_374[0][0][0], (void*)0}};
                    int l_1130 = 0xB493A874L;
                    int i, j;
                    (*l_792) = ((l_1128 , l_970) == l_1129[3][0]);
                    if (l_1130)
                        break;
                }
                else
                {
                    char l_1132 = (-1L);
                    int l_1133 = 0xEF682C94L;
                    l_1131 = p_21;
                    l_1134--;
                }
                --l_1143;
                l_935[4][3][1] = p_21;
            }
        }
        else
        {
            int l_1146 = 0x8232278DL;
            unsigned long long *l_1147 = &g_223;
            int l_1155 = 0xD58CB6F9L;
            int l_1178 = 0x98BEDEA6L;
            int l_1182 = 0xA5D62067L;
            int l_1185 = (-6L);
            unsigned l_1186[2][1][3];
            unsigned **l_1192 = &g_593[6][1][2];
            unsigned **l_1196 = &g_593[4][1][0];
            int l_1221 = (-2L);
            int l_1230 = 0L;
            unsigned char *l_1241 = &g_826;
            unsigned char * const *l_1240 = &l_1241;
            char *l_1247 = &l_944;
            int **l_1282 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_1186[i][j][k] = 0x03239006L;
                }
            }
            if ((l_1146 >= ((l_1147 = (void*)0) == (void*)0)))
            {
                unsigned long long *l_1148 = (void*)0;
                unsigned long long *l_1149 = (void*)0;
                unsigned long long *l_1150 = &l_1072[1][1];
                unsigned short l_1165 = 0x891BL;
                short *l_1172 = &g_374[0][0][1];
                int l_1175 = 0x7A57B1D9L;
                int l_1183 = 4L;
                int l_1184 = 0L;
                unsigned *l_1198[10] = {&g_134, &g_134, &g_360, &g_134, &g_134, &g_360, &g_134, &g_134, &g_360, &g_134};
                int *l_1203 = (void*)0;
                int *l_1204 = &g_790;
                int *l_1205 = &l_900;
                int *l_1206 = &l_1121;
                int *l_1207 = &l_960;
                int *l_1208 = (void*)0;
                int *l_1209 = &l_1118;
                int *l_1210 = &l_1122[1];
                int *l_1211 = (void*)0;
                int *l_1212[2][10] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                int i, j;
                if (((l_1155 = (p_20 & (((((((*l_795) = 0x1BDB43243C3CE038LL) & ((*l_1150) = 0x5D767FDF9A97FD98LL)) < 4294967294UL) | (9L & (safe_rshift_func_int8_t_s_s(1L, (safe_sub_func_uint16_t_u_u((p_20 , (*g_303)), ((((*l_942) = 0x6DL) && 7UL) != p_20))))))) > g_459) < 0xB8L))) ^ g_360))
                {
                    char l_1160 = (-1L);
                    int l_1163 = (-1L);
                    int l_1164 = 0L;
                    int *l_1169 = (void*)0;
                    int *l_1176 = &l_961;
                    int *l_1179 = (void*)0;
                    int *l_1180 = &g_8;
                    int *l_1181[8] = {(void*)0, &l_901, (void*)0, &l_901, (void*)0, &l_901, (void*)0, &l_901};
                    int i;
                    for (g_790 = 26; (g_790 >= (-20)); g_790 = safe_sub_func_uint32_t_u_u(g_790, 1))
                    {
                        int *l_1161 = (void*)0;
                        int *l_1162[6][6] = {{&l_900, &g_8, &l_901, &g_8, &l_900, &g_3[2]}, {&l_900, &g_8, &l_901, &g_8, &l_900, &g_3[2]}, {&l_900, &g_8, &l_901, &g_8, &l_900, &g_3[2]}, {&l_900, &g_8, &l_901, &g_8, &l_900, &g_3[2]}, {&l_900, &g_8, &l_901, &g_8, &l_900, &g_3[2]}, {&l_900, &g_8, &l_901, &g_8, &l_900, &g_3[2]}};
                        int **l_1168 = &l_1131;
                        int i, j;
                        (*l_1131) = (safe_sub_func_uint16_t_u_u(l_1160, (p_20 >= ((*l_786) |= g_223))));
                        l_1165++;
                        (*l_1168) = &l_1163;
                        l_1169 = &l_1164;
                    }
                    (*l_937) = (l_1170 , (*l_945));
                    if (l_1165)
                    {
                        int **l_1171 = &l_1169;
                        const unsigned short l_1173 = 0xB893L;
                        (*l_1171) = p_21;
                        (*l_792) |= p_20;
                    }
                    else
                    {
                        int **l_1174 = &l_792;
                        return &g_48;
                    }
                    --l_1186[1][0][0];
                }
                else
                {
                    unsigned ***l_1193 = &g_592;
                    unsigned ***l_1194 = &g_592;
                    unsigned ***l_1195[7];
                    char l_1199 = 0xE2L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1195[i] = &l_1192;
                    (*l_945) ^= ((safe_add_func_uint16_t_u_u((((*l_786) ^= (safe_unary_minus_func_uint64_t_u(((l_1196 = l_1192) != l_1197)))) && (0x19E4L ^ (p_20 | (+(((void*)0 != l_1198[7]) > ((*l_942) = (l_1199 || g_428))))))), l_1186[0][0][0])) , l_1183);
                    for (g_659 = 0; (g_659 < 2); g_659++)
                    {
                        int **l_1202 = &g_48;
                        (*l_937) ^= 0x85C9B8C5L;
                        if (p_20)
                            break;
                        (*l_1202) = &l_1182;
                        (*l_945) |= (**l_1202);
                    }
                }
                g_1213++;
            }
            else
            {
                int l_1220 = 0x0C8BBA6EL;
                int l_1227 = 0x79E12020L;
                int l_1228 = (-3L);
                int l_1229[9][3][3] = {{{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}, {{0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}, {0x0D8C6332L, 0xA265BCCFL, (-1L)}}};
                unsigned short l_1251 = 2UL;
                int **l_1255 = &l_1131;
                unsigned char **l_1259 = &l_1241;
                unsigned char ***l_1258 = &l_1259;
                const int l_1296 = 0xA5BB37AEL;
                int i, j, k;
                p_21 = &l_1182;
                for (g_501 = 17; (g_501 <= 11); g_501 = safe_sub_func_int16_t_s_s(g_501, 9))
                {
                    int l_1224 = (-1L);
                    int l_1225 = 0x6F972BC5L;
                    int l_1226[9][8] = {{0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}, {0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L, 0x8BDA59FDL, 0x72E79C04L}};
                    char *l_1245[8][9][3] = {{{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}, {{&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}, {&l_1041, &l_944, &l_789}}};
                    int **l_1254 = &l_945;
                    int i, j, k;
                    for (l_789 = (-14); (l_789 == 5); l_789 = safe_add_func_int32_t_s_s(l_789, 1))
                    {
                        int *l_1222 = &l_1121;
                        int *l_1223[7][9];
                        unsigned short l_1231 = 0x971EL;
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_1223[i][j] = (void*)0;
                        }
                        ++l_1231;
                        (*l_937) = (*l_1222);
                        if ((*p_21))
                            continue;
                    }
                    if (((((safe_mul_func_uint8_t_u_u(func_58((g_3[0] || (safe_rshift_func_uint16_t_u_u((l_1229[7][2][1] = (safe_sub_func_int16_t_s_s(func_72(((l_1240 != (void*)0) >= (*l_937))), p_20))), (*l_937)))), g_360, g_826, g_83, l_1226[6][6]), p_20)) >= p_20) >= 5L) , 1L))
                    {
                        int l_1244 = 0L;
                        (*l_792) ^= (*p_21);
                        (*l_945) = l_1244;
                    }
                    else
                    {
                        char **l_1246[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1246[i] = &l_942;
                        p_21 = &l_1228;
                        (*l_1131) = func_22(func_72(((*l_970) = 65531UL)), &g_48);
                        (*l_945) &= ((l_1247 = l_1245[7][7][1]) == (l_942 = (void*)0));
                    }
                    for (g_225 = 0; (g_225 <= 1); g_225 += 1)
                    {
                        int *l_1248 = &l_1120;
                        int *l_1249 = &l_1120;
                        int *l_1250[6][1][3] = {{{&l_1120, (void*)0, (void*)0}}, {{&l_1120, (void*)0, (void*)0}}, {{&l_1120, (void*)0, (void*)0}}, {{&l_1120, (void*)0, (void*)0}}, {{&l_1120, (void*)0, (void*)0}}, {{&l_1120, (void*)0, (void*)0}}};
                        int i, j, k;
                        l_1251++;
                        return &g_48;
                    }
                    return &g_48;
                }
                for (l_789 = (-2); (l_789 >= 15); l_789 = safe_add_func_uint8_t_u_u(l_789, 8))
                {
                    return &g_48;
                }
                if ((l_1258 != l_1260))
                {
                    unsigned char *l_1283 = &g_826;
                    unsigned *l_1284 = (void*)0;
                    unsigned *l_1285[1];
                    unsigned short *l_1295[9][7] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                    long long l_1301 = 7L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1285[i] = &g_330;
                    for (l_961 = 0; (l_961 < 0); ++l_961)
                    {
                        unsigned *l_1265 = &g_360;
                        long long **l_1270 = &l_938;
                        long long *l_1272 = &g_618;
                        long long **l_1271 = &l_1272;
                        unsigned short **l_1278[10];
                        unsigned short ***l_1277 = &l_1278[7];
                        int l_1279 = 0xB9B5BB07L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1278[i] = &g_303;
                        l_1182 ^= (func_65((p_20 , (l_1230 > ((safe_rshift_func_uint8_t_u_u(((**l_1259) = (*g_458)), 1)) != (((*l_1265)--) == (safe_add_func_uint64_t_u_u(((((*l_1271) = ((*l_1270) = &g_618)) != (p_20 , (((((0UL && (safe_mod_func_uint32_t_u_u(p_20, (**l_1255)))) > ((*l_795) = ((safe_sub_func_uint32_t_u_u(((((*l_1277) = (func_72((*g_303)) , (void*)0)) != (void*)0) , 0x615AB507L), 0xDF8A0A8CL)) != 0L))) ^ l_1279) > 0x9D36L) , (void*)0))) , g_134), p_20)))))), p_20, &g_374[0][3][0], p_20) > p_20);
                        (*l_1131) = (safe_mul_func_uint8_t_u_u((*g_458), (g_3[2] < g_452)));
                        return l_1282;
                    }
                    if ((func_65(((*l_937) = (((*l_1259) = &l_876) == l_1283)), (g_765 &= ((**l_1289) = (((*l_938) = (safe_add_func_uint32_t_u_u(p_20, (0x3EA40193L != (l_1288 != g_1290))))) , l_1294))), &g_52, l_1296) == 0xFCCA89EC230D3B90LL))
                    {
                        const int *l_1297 = &l_848;
                        const int **l_1298 = &l_1297;
                        (*l_1298) = l_1297;
                    }
                    else
                    {
                        return &g_48;
                    }
                    for (l_1182 = 0; (l_1182 <= 0); l_1182 += 1)
                    {
                    }
                    (*l_945) &= (((safe_add_func_uint8_t_u_u((((*l_792) < func_65((**l_1255), l_1301, l_1295[8][5], p_20)) != 0xBD901FB09BC2D654LL), l_1301)) , p_21) != p_21);
                }
                else
                {
                    int *l_1315 = &l_1220;
                    unsigned l_1323[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1323[i] = 0x4A1F7732L;
                    for (l_1220 = 0; (l_1220 == (-6)); l_1220 = safe_sub_func_int64_t_s_s(l_1220, 6))
                    {
                        (*l_937) = ((safe_lshift_func_uint16_t_u_s((0xA1L == 0L), 1)) <= (*l_945));
                    }
                    for (l_789 = 0; (l_789 >= (-9)); l_789 = safe_sub_func_uint16_t_u_u(l_789, 1))
                    {
                        int **l_1313[1];
                        unsigned short *l_1316[9];
                        int l_1317 = 0xB4D441BCL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1313[i] = &l_787;
                        for (i = 0; i < 9; i++)
                            l_1316[i] = (void*)0;
                        (*l_937) = (safe_rshift_func_uint16_t_u_s((*g_303), (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s(func_72((l_1317 ^= (((g_1314 = &g_788[9][7]) != l_1315) && p_20))), (p_20 == (*p_21))))))));
                    }
                    for (l_899 = 0; (l_899 <= 0); l_899 += 1)
                    {
                        char l_1318 = 0x30L;
                        int *l_1319 = &l_959;
                        int *l_1320 = &l_1119;
                        int *l_1321 = (void*)0;
                        int *l_1322[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1322[i] = &l_997;
                        l_1323[5]--;
                    }
                    (*p_21) &= ((*l_1131) = (safe_lshift_func_uint16_t_u_u((((*l_786) = 0L) , p_20), (safe_add_func_uint16_t_u_u(p_20, p_20)))));
                }
            }
        }
    }
    if (((((*l_1336) ^= (safe_mul_func_int16_t_s_s(p_20, ((*l_792) && (((~func_37(&l_851, ((*l_795)++), ((func_65((p_20 != p_20), p_20, l_970, g_1002) || g_134) == p_20), &g_48, l_1334)) || 255UL) > 65535UL))))) & p_20) , p_20))
    {
        int ***l_1339 = &g_47[0][2][2];
        int ****l_1338 = &l_1339;
        int *****l_1337 = &l_1338;
        unsigned short *l_1344[1];
        unsigned *l_1347[6][5] = {{&g_134, (void*)0, &l_791, (void*)0, &g_134}, {&g_134, (void*)0, &l_791, (void*)0, &g_134}, {&g_134, (void*)0, &l_791, (void*)0, &g_134}, {&g_134, (void*)0, &l_791, (void*)0, &g_134}, {&g_134, (void*)0, &l_791, (void*)0, &g_134}, {&g_134, (void*)0, &l_791, (void*)0, &g_134}};
        int l_1348 = 0x2BD95954L;
        int l_1349 = 0x077EAEA8L;
        int l_1350 = 0xEF9EAFB9L;
        unsigned char *l_1354[8][6] = {{&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}, {&g_826, &l_876, &g_826, &l_876, (void*)0, &g_1102}};
        int *l_1356[8] = {&l_1122[2], (void*)0, &l_1122[2], (void*)0, &l_1122[2], (void*)0, &l_1122[2], (void*)0};
        char *l_1359 = &l_1041;
        short **l_1363 = &l_786;
        unsigned *l_1366 = &g_330;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1344[i] = &l_1294;
        l_1119 &= (((p_20 , (l_1118 = (((p_20 , ((*l_787) = ((((((*l_1337) = (void*)0) != ((safe_add_func_int32_t_s_s(p_20, (((*l_792) = ((p_20 < (&l_1294 == l_1344[0])) , (safe_mod_func_int16_t_s_s(((--g_1351) < ((((((((g_1102 &= (&g_872[7][0] != &g_872[0][0])) & p_20) ^ (-1L)) , p_20) , (*l_792)) , (void*)0) != (void*)0) , l_1355)), 0xF10BL)))) != 1L))) , (void*)0)) < p_20) <= 0x6F129C63L) && 1L))) , (void*)0) == (void*)0))) == p_20) , (-3L));
        (**l_1339) = &l_1349;
        (*l_792) = (((*g_458) == ((*l_1359) = (safe_sub_func_int64_t_s_s(g_360, 0x538D75BEDAD37591LL)))) <= func_22((safe_rshift_func_uint16_t_u_u(func_22((func_65(p_20, (safe_unary_minus_func_uint64_t_u(7UL)), ((*l_1363) = l_786), ((*l_1366) = (safe_sub_func_uint16_t_u_u((g_372 = ((*g_303) = (p_20 > p_20))), g_383)))) && p_20), &g_48), g_383)), g_47[0][2][2]));
    }
    else
    {
        const int **l_1368 = &l_935[1][6][2];
        long long *l_1372 = &g_618;
        long long **l_1371 = &l_1372;
        short ***l_1373 = (void*)0;
        short **l_1375[4][1][8];
        short ***l_1374 = &l_1375[3][0][7];
        int l_1426 = 1L;
        int l_1427 = 0x21BC65F1L;
        int l_1429[5];
        unsigned char l_1488 = 1UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 8; k++)
                    l_1375[i][j][k] = &l_786;
            }
        }
        for (i = 0; i < 5; i++)
            l_1429[i] = 0L;
        (*l_1368) = l_1367;
        (*l_792) = (safe_add_func_int32_t_s_s((l_1371 != &l_1372), (((*l_1374) = &l_786) != (g_3[0] , &l_786))));
        for (l_963 = 0; (l_963 > 8); l_963 = safe_add_func_int8_t_s_s(l_963, 1))
        {
            long long l_1378[8][6] = {{0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}, {0x17474C763AAD871ELL, (-1L), 1L, (-1L), 1L, (-1L)}};
            int l_1397 = 0x6765DAECL;
            int l_1425 = 0x766F8DD9L;
            int l_1428 = 0x7D3B3A01L;
            int l_1430 = 0x0EE25F1AL;
            int l_1431 = 0x6B29CB22L;
            int **l_1435[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_1435[i] = &l_792;
            (*l_792) = l_1378[5][0];
            for (g_1351 = 0; (g_1351 < 22); ++g_1351)
            {
                int * const l_1383 = &g_3[0];
                int *l_1442 = (void*)0;
                int l_1460 = 0xE055DA22L;
                int l_1464 = 0L;
                int l_1465 = 1L;
                int l_1466 = (-7L);
                int l_1469[9] = {0x8695C9C5L, 0x40F5D387L, 0x8695C9C5L, 0x40F5D387L, 0x8695C9C5L, 0x40F5D387L, 0x8695C9C5L, 0x40F5D387L, 0x8695C9C5L};
                unsigned long long l_1483 = 0xE519C81B93497140LL;
                int i;
                for (l_900 = 0; (l_900 != (-29)); l_900--)
                {
                    int **l_1384[10] = {&l_1131, &g_48, &l_1131, &l_1131, &g_48, &l_1131, &g_48, &l_1131, &l_1131, &g_48};
                    int **l_1385 = &g_48;
                    int i;
                    (*l_1385) = l_1383;
                    for (l_785 = 0; l_785 < 1; l_785 += 1)
                    {
                        for (l_1120 = 0; l_1120 < 4; l_1120 += 1)
                        {
                            for (g_428 = 0; g_428 < 3; g_428 += 1)
                            {
                                g_374[l_785][l_1120][g_428] = 0x552EL;
                            }
                        }
                    }
                }
                (*l_792) = l_1378[1][0];
                for (g_372 = 0; (g_372 > 37); ++g_372)
                {
                    unsigned short l_1388[8][8][4] = {{{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}, {{0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}, {0UL, 0x2ADEL, 2UL, 0x06E7L}}};
                    int * const l_1389 = &l_899;
                    int **l_1390 = &g_48;
                    int l_1416 = (-1L);
                    int l_1424[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1424[i] = 0xAE7DFCCAL;
                    (*l_792) &= l_1388[5][0][3];
                    (*l_1390) = l_1389;
                    for (l_868 = 4; (l_868 < 7); ++l_868)
                    {
                        unsigned ** const *l_1396 = &l_1197;
                        int *l_1398 = &l_900;
                        int *l_1399 = &l_1120;
                        int *l_1400 = &g_8;
                        int *l_1401 = (void*)0;
                        int *l_1402 = &g_790;
                        int *l_1403 = &l_1120;
                        int *l_1404 = &l_901;
                        int *l_1405 = (void*)0;
                        int *l_1406 = (void*)0;
                        int *l_1407 = &l_900;
                        int *l_1408 = (void*)0;
                        int *l_1409 = &l_899;
                        int *l_1410 = &g_428;
                        int *l_1411 = &l_1122[2];
                        int *l_1412 = (void*)0;
                        int *l_1413 = &l_1118;
                        int *l_1414 = &g_83;
                        int *l_1415 = (void*)0;
                        int *l_1417 = &l_1122[7];
                        int *l_1418 = &l_900;
                        int *l_1419 = &g_8;
                        int *l_1420 = (void*)0;
                        int *l_1421 = &l_1397;
                        int *l_1422 = &l_903;
                        int *l_1423[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1423[i] = &l_1119;
                        l_1393[5]++;
                        (*l_792) &= (p_20 == (((l_1396 != l_1396) > (*g_48)) || 0x661CBF6BL));
                        --l_1432[3][2];
                        return &g_48;
                    }
                }
                if (((*l_792) = p_20))
                {
                    if (((*l_792) = ((p_20 ^ ((safe_rshift_func_int8_t_s_u(((*l_1383) == (((*l_970) |= p_20) || ((p_20 == (p_20 > (safe_mod_func_int32_t_s_s((func_72(p_20) ^ (((safe_sub_func_uint16_t_u_u((*l_1383), ((1UL && p_20) <= p_20))) & 1UL) && p_20)), p_20)))) || g_383))), 0)) && (*l_792))) >= 2UL)))
                    {
                        (*l_1368) = l_1442;
                    }
                    else
                    {
                        return &g_48;
                    }
                    (*l_1368) = (void*)0;
                }
                else
                {
                    unsigned l_1453 = 1UL;
                    int l_1458 = (-1L);
                    int l_1459 = 0L;
                    int l_1462 = 0L;
                    int l_1463 = 0x012342B1L;
                    int l_1476 = 0xC78EF8A6L;
                    int l_1478 = 0x1DDBC75BL;
                    int l_1480 = 0x0EC253D5L;
                    int l_1482 = 3L;
                    int l_1487 = 0x3B5251BBL;
                    (*l_792) = (p_20 ^ ((((void*)0 != l_1435[0]) >= (safe_mul_func_int16_t_s_s(func_72((+(p_20 || (safe_sub_func_int16_t_s_s((-8L), p_20))))), (safe_sub_func_int16_t_s_s((((p_20 | (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_20, 0xBBL)), p_20))) < p_20) || 0xD9B8B18A45603936LL), g_330))))) , l_1453));
                    (*l_1368) = ((safe_lshift_func_uint16_t_u_u((!(p_20 > p_20)), p_20)) , (*l_1368));
                    if ((*l_1367))
                        continue;
                    for (g_618 = 21; (g_618 == (-19)); --g_618)
                    {
                        int l_1461 = 0xD8A35883L;
                        int l_1467 = 8L;
                        int l_1468 = 0x5D00ED7EL;
                        int l_1470 = 0xD959CDB0L;
                        int l_1471 = (-1L);
                        int l_1472 = (-7L);
                        int l_1473 = 0x78555145L;
                        int l_1474 = 1L;
                        int l_1475 = (-3L);
                        int l_1477 = 1L;
                        int l_1479 = 0x757520C2L;
                        int l_1481 = 1L;
                        l_1483++;
                        l_1488++;
                        (*l_792) &= l_1475;
                    }
                }
            }
            (*l_1368) = (*l_1368);
        }
    }
    return &g_48;
}







static short func_22(unsigned char p_23, int ** p_24)
{
    short l_755 = 0L;
    int ***l_762[4] = {&g_47[0][2][2], &g_47[0][1][3], &g_47[0][2][2], &g_47[0][1][3]};
    unsigned short l_764[9] = {65534UL, 65534UL, 65534UL, 65534UL, 65534UL, 65534UL, 65534UL, 65534UL, 65534UL};
    int i;
    (*p_24) = (void*)0;
    l_764[1] = ((func_72(((*g_303) >= p_23)) <= (safe_sub_func_int64_t_s_s(l_755, (safe_add_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(func_72((p_23 >= func_72(func_72(((void*)0 == l_762[1]))))), 251UL)) >= p_23) > (*g_303)), g_3[0])) , (void*)0) == g_763), 0x3E9F9FB2L))))) , (-1L));
    g_765 = p_23;
    return g_83;
}







static int ** func_29(int ** p_30, unsigned long long p_31, unsigned short p_32, int p_33, short p_34)
{
    short l_658 = 4L;
    int l_670 = 4L;
    int l_676 = 0L;
    int l_688[9][8] = {{(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}, {(-1L), 1L, 0x990B2EF0L, 1L, (-1L), 1L, 0x381A0E7DL, 1L}};
    int *l_703 = &l_676;
    unsigned ***l_709 = &g_592;
    char l_710 = 0x05L;
    int l_723 = 2L;
    unsigned long long l_727 = 18446744073709551615UL;
    int ** const *l_752[2];
    int ** const **l_751 = &l_752[0];
    int i, j;
    for (i = 0; i < 2; i++)
        l_752[i] = &g_47[0][2][2];
    for (g_223 = 0; (g_223 <= 1); g_223 += 1)
    {
        int *l_660 = &g_428;
        int l_672[4][9] = {{3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L}, {3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L}, {3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L}, {3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L, 3L, 3L, 0x3A96F982L}};
        unsigned l_689 = 0x181E13AEL;
        unsigned **l_696 = &g_593[1][1][2];
        long long l_712[9][8][3] = {{{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}, {{(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}, {(-8L), (-8L), 0xFADB82734F3C31A0LL}}};
        long long l_730 = 0x195527DA3D92927DLL;
        unsigned long long l_740 = 0xB646634707A416EELL;
        int i, j, k;
        (*p_30) = (*p_30);
        (*l_660) |= (((p_31 || (safe_add_func_uint16_t_u_u((l_658 <= p_32), p_34))) , &g_374[0][0][0]) != ((((+((&g_374[0][0][0] == ((&g_561 != ((g_659 = p_33) , &g_561)) , &g_52)) && 0L)) && g_3[0]) ^ p_34) , (void*)0));
        if (l_658)
            break;
        for (g_428 = 0; (g_428 >= 0); g_428 -= 1)
        {
            int *l_661 = (void*)0;
            int *l_662 = &g_83;
            int *l_663 = (void*)0;
            int *l_664 = &g_83;
            int *l_665 = &g_83;
            int *l_666 = (void*)0;
            int *l_667 = (void*)0;
            int *l_668 = &g_83;
            int *l_669 = &g_83;
            int *l_671 = &g_83;
            int *l_673 = &g_83;
            int *l_674 = &l_672[1][8];
            int *l_675 = &l_670;
            int *l_677 = &l_676;
            int *l_678 = &g_83;
            int *l_679 = &l_672[3][4];
            int *l_680 = &l_672[2][4];
            int *l_681 = &l_672[0][8];
            int *l_682 = &g_83;
            int *l_683 = &l_670;
            int *l_684 = (void*)0;
            int *l_685 = &l_676;
            int *l_686 = &l_672[0][0];
            int *l_687[9][10] = {{&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}, {&l_672[2][5], &g_3[0], &g_3[0], &l_672[2][5], &l_670, &l_670, (void*)0, &l_672[0][8], (void*)0, (void*)0}};
            unsigned l_701[8][9][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
            unsigned char l_706 = 0x2AL;
            int l_726 = (-10L);
            int l_750[2][2];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_750[i][j] = 1L;
            }
            --l_689;
            for (l_658 = 1; (l_658 >= 0); l_658 -= 1)
            {
                unsigned ***l_694 = &g_592;
                unsigned ***l_695[4] = {&g_592, &g_592, &g_592, &g_592};
                long long *l_700[2][4] = {{&g_225, (void*)0, &g_225, (void*)0}, {&g_225, (void*)0, &g_225, (void*)0}};
                short *l_702 = &g_52;
                unsigned long long l_711 = 18446744073709551615UL;
                int l_718 = 0L;
                int l_719 = 8L;
                int l_720 = 1L;
                int l_721[3][9][9] = {{{0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}}, {{0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}}, {{0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}, {0xFB0C7739L, (-1L), 0xE17D9789L, (-8L), 0x52EB15C2L, 0x47911D44L, (-5L), 0x47AB3EB3L, 0xF53A599EL}}};
                int **l_738 = &l_687[4][2];
                int i, j, k;
                l_703 = (func_65((safe_mul_func_uint16_t_u_u((~(*g_303)), ((l_696 = &g_593[7][1][3]) != &g_593[g_428][(g_428 + 1)][g_428]))), (0UL != (g_83 != ((safe_unary_minus_func_int16_t_s(g_659)) < (+(safe_sub_func_int64_t_s_s((l_701[1][5][0] = 0xF8DB5EEA62E54065LL), func_72((1L == g_3[0])))))))), l_702, g_659) , &l_676);
            }
        }
    }
    return p_30;
}







static char func_37(const int * p_38, unsigned long long p_39, long long p_40, int ** p_41, const int p_42)
{
    short *l_51[10] = {&g_52, &g_52, &g_52, &g_52, &g_52, &g_52, &g_52, &g_52, &g_52, &g_52};
    int l_53 = 0x938140A9L;
    const int l_64 = 0x4E7FB108L;
    unsigned char l_78 = 0UL;
    int l_347 = 0xE428ACA2L;
    long long *l_424[5];
    int l_425 = (-1L);
    int *l_426 = &g_83;
    int *l_427 = &g_428;
    int l_434 = (-6L);
    int l_483[5];
    char l_485[8][5] = {{7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}, {7L, 0x46L, (-7L), (-10L), 0x37L}};
    unsigned l_557 = 0x137F8764L;
    unsigned short l_576 = 65531UL;
    long long l_589 = 0xB7D6304F785C7729LL;
    int *l_615 = &l_483[1];
    int i, j;
    for (i = 0; i < 5; i++)
        l_424[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_483[i] = 0x406BDD8AL;
    if (((*l_427) = ((*l_426) = (((((((safe_rshift_func_int8_t_s_s(((l_53 = 1L) <= (((safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((g_374[0][0][0] = (((l_425 = ((func_58(l_64, ((0xD3CC114FL & func_65((safe_mul_func_uint16_t_u_u(((func_72((p_40 & (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_46 > (0x1810L && p_40)), 0xE1L)), (l_78 == 0xA8E43404L))))) && l_78) > 1L), 0xC5CCL)), p_39, l_51[9], l_64)) , g_134), l_347, l_78, l_64) , p_42) >= 0x20L)) , 0xA557454F8E0997A3LL) , l_64)), 0L)) == 18446744073709551615UL), l_64)) ^ l_78) <= 0UL)), l_64)) && (*g_303)) && 0x76DA54AA897E297ALL) , g_374[0][2][2]) || p_40) == 1UL) | 0x4413L))))
    {
        unsigned l_430 = 0x99A700AFL;
        short *l_453 = &g_374[0][0][2];
        unsigned *l_463[4][10];
        unsigned l_473 = 18446744073709551615UL;
        unsigned char *l_479 = &l_78;
        int l_484[3];
        int l_508 = 0L;
        int *l_580[4][6];
        unsigned **l_590 = &l_463[1][7];
        long long l_610 = 0xEF1752D074A6F42ELL;
        unsigned long long l_631[9][1] = {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}, {6UL}};
        unsigned short l_637[7][10] = {{0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}, {0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}, {0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}, {0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}, {0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}, {0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}, {0x6E67L, 0x7617L, 1UL, 65532UL, 0x45DCL, 7UL, 0xFF06L, 0UL, 65535UL, 7UL}};
        int * const *l_642 = (void*)0;
        int * const **l_641 = &l_642;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 10; j++)
                l_463[i][j] = &l_430;
        }
        for (i = 0; i < 3; i++)
            l_484[i] = 0x9ED3C136L;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_580[i][j] = &l_483[1];
        }
        for (g_428 = 0; (g_428 >= 0); g_428 -= 1)
        {
            unsigned l_429 = 0UL;
            unsigned char *l_451[7][3][8] = {{{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}, {{&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78, &l_78}}};
            int *l_454[4] = {(void*)0, &l_53, (void*)0, &l_53};
            int i, j, k;
            (*l_426) |= l_429;
            for (p_40 = 0; (p_40 >= 0); p_40 -= 1)
            {
                short l_431[7] = {0x16D7L, 0x16D7L, (-4L), 0x16D7L, 0x16D7L, (-4L), 0x16D7L};
                long long l_444 = 0x9D47070B95939609LL;
                int i;
                if ((l_430 |= 7L))
                {
                    const unsigned long long l_432 = 4UL;
                    int *l_433 = &l_425;
                    if (((*l_426) = l_431[1]))
                    {
                        if (l_432)
                            break;
                        (*p_41) = l_433;
                        (*p_41) = (*p_41);
                        (*l_433) ^= (-7L);
                    }
                    else
                    {
                        if (l_434)
                            break;
                    }
                    for (g_372 = 0; (g_372 <= 0); g_372 += 1)
                    {
                        int i, j, k;
                        (*l_426) = 0x3CDA1487L;
                        return g_374[p_40][g_428][g_372];
                    }
                }
                else
                {
                    unsigned l_445 = 18446744073709551609UL;
                    for (g_304 = 1; (g_304 <= 4); g_304 += 1)
                    {
                        int *l_435 = &l_53;
                        int *l_436 = &l_425;
                        int *l_437 = (void*)0;
                        int *l_438 = &l_425;
                        int *l_439 = &l_425;
                        int *l_440 = &l_425;
                        int *l_441 = &l_53;
                        int *l_442 = &l_425;
                        int *l_443[6][2] = {{&l_53, &l_53}, {&l_53, &l_53}, {&l_53, &l_53}, {&l_53, &l_53}, {&l_53, &l_53}, {&l_53, &l_53}};
                        int i, j;
                        (*l_426) |= 7L;
                        --l_445;
                    }
                }
                if ((*l_427))
                    continue;
                for (p_39 = 0; (p_39 <= 0); p_39 += 1)
                {
                    int i, j, k;
                    return g_374[p_40][(p_40 + 2)][(p_39 + 2)];
                }
            }
            l_425 &= ((*l_426) = (((safe_unary_minus_func_int64_t_s(func_58((((safe_lshift_func_int8_t_s_s((g_374[0][0][0] || (g_452 = (*l_427))), 5)) == (p_40 , (((*l_426) = p_39) , ((func_65(g_83, (*l_427), l_453, (l_429 <= (g_134 | p_39))) && 1UL) != 8L)))) , 6UL), p_40, g_134, g_8, l_430))) , (void*)0) != (void*)0));
        }
        if (func_72((*g_303)))
        {
            int l_461[1][5][6] = {{{(-1L), 0x37F0E04FL, 1L, 0xB116CA6AL, 0xB116CA6AL, 1L}, {(-1L), 0x37F0E04FL, 1L, 0xB116CA6AL, 0xB116CA6AL, 1L}, {(-1L), 0x37F0E04FL, 1L, 0xB116CA6AL, 0xB116CA6AL, 1L}, {(-1L), 0x37F0E04FL, 1L, 0xB116CA6AL, 0xB116CA6AL, 1L}, {(-1L), 0x37F0E04FL, 1L, 0xB116CA6AL, 0xB116CA6AL, 1L}}};
            unsigned l_486 = 0x792BDC86L;
            unsigned l_530 = 0xAE8B029DL;
            short *l_548 = &g_52;
            int l_556 = 9L;
            unsigned ***l_591[9][9][3] = {{{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}, {{&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}, {&l_590, &l_590, &l_590}}};
            int *l_594 = &l_484[1];
            char l_601 = 0x16L;
            long long l_635 = 0xB9CE15AE13C86F8CLL;
            short l_636 = (-3L);
            int i, j, k;
            for (l_347 = (-20); (l_347 >= (-5)); l_347 = safe_add_func_int32_t_s_s(l_347, 6))
            {
                volatile unsigned char ***l_460 = &g_457[2];
                int l_462 = 1L;
                (*l_460) = g_457[2];
                if (l_430)
                    continue;
                (*p_41) = (*p_41);
                l_462 = ((*l_427) = (l_461[0][0][1] , 0xD7A8BE28L));
            }
            for (l_425 = 0; (l_425 >= 0); l_425 -= 1)
            {
                short l_464 = 0x2FC8L;
                int l_469[7];
                unsigned *l_470 = &l_430;
                unsigned short *l_471 = (void*)0;
                unsigned short *l_472[4][7][8] = {{{&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}}, {{&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}}, {{&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}}, {{&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}, {&g_372, (void*)0, &g_372, &g_372, &g_304, &g_304, &g_372, &g_304}}};
                unsigned char *l_476[6][3] = {{&l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78}, {&l_78, &l_78, &l_78}};
                int * const l_496 = &l_483[1];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_469[i] = 0x0F640AE3L;
                l_469[3] = func_58((*g_303), l_461[0][0][1], (p_38 != (l_463[3][3] = (void*)0)), p_39, ((l_464 ^= p_42) || (func_72((l_473 = (safe_rshift_func_int16_t_s_u((((*l_470) |= (safe_add_func_int32_t_s_s(((l_469[2] = (9UL <= func_72((*g_303)))) || l_461[0][0][5]), p_42))) == 0UL), p_40)))) & g_46)));
                if (((&g_458 != (void*)0) >= func_72((func_72((*g_303)) & (safe_rshift_func_uint16_t_u_u(((((0xE5L >= ((*l_427) = p_39)) != (safe_rshift_func_int8_t_s_s(g_383, 3))) >= 0UL) & ((0x2918BD7BL != p_42) ^ p_39)), 9))))))
                {
                    int *l_480 = &g_83;
                    int *l_481 = (void*)0;
                    int *l_482[4] = {&g_8, (void*)0, &g_8, (void*)0};
                    int i;
                    for (l_473 = 0; (l_473 <= 0); l_473 += 1)
                    {
                        if (l_461[0][0][1])
                            break;
                        (*p_41) = (*p_41);
                    }
                    (*l_426) = (l_461[0][0][1] = ((void*)0 != l_479));
                    l_486++;
                }
                else
                {
                    int *l_495 = &g_3[2];
                    int **l_497 = (void*)0;
                    int **l_498[9];
                    int **l_499 = (void*)0;
                    int **l_500 = &g_48;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_498[i] = &l_426;
                    l_484[1] = (safe_mod_func_int32_t_s_s(((*l_426) = (l_469[1] = (*l_426))), (safe_mod_func_int8_t_s_s((~p_39), ((*l_479) = (*g_458))))));
                    (*l_427) = func_72((p_42 , (((g_459 < g_223) | (safe_mul_func_int8_t_s_s(0L, (((*l_479) = g_330) <= l_461[0][4][3])))) ^ p_42)));
                    (*p_41) = l_495;
                    (*l_500) = l_496;
                }
                if (g_501)
                    break;
                for (g_452 = 0; (g_452 >= 0); g_452 -= 1)
                {
                    long long l_509[5][3] = {{(-1L), (-1L), 1L}, {(-1L), (-1L), 1L}, {(-1L), (-1L), 1L}, {(-1L), (-1L), 1L}, {(-1L), (-1L), 1L}};
                    int i, j;
                    for (g_428 = 0; (g_428 >= 0); g_428 -= 1)
                    {
                        int i, j, k;
                        l_461[g_428][(g_428 + 3)][(g_452 + 1)] = 0L;
                        (*l_426) = ((((*p_41) == (void*)0) , (((((((*g_303) != ((safe_mod_func_uint32_t_u_u(((func_72(l_430) >= ((p_42 <= (((-3L) != p_40) , ((*l_479)++))) > (safe_mul_func_int16_t_s_s((((l_473 & 1L) <= (*l_426)) , 1L), (*g_303))))) , g_3[0]), l_486)) | l_508)) , &p_38) != (void*)0) >= (*l_496)) , (*g_303)) | 65529UL)) < 1UL);
                        (*p_41) = (*p_41);
                        if (l_509[2][0])
                            continue;
                    }
                    if (l_461[0][0][1])
                        continue;
                }
            }
            for (g_360 = (-5); (g_360 < 18); g_360 = safe_add_func_uint64_t_u_u(g_360, 3))
            {
                int *l_512[8] = {&l_483[1], &g_83, &l_483[1], &g_83, &l_483[1], &g_83, &l_483[1], &g_83};
                unsigned char l_513 = 255UL;
                unsigned char l_520[8][4][1] = {{{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}};
                unsigned l_539 = 0x2BC8329DL;
                int i, j, k;
                ++l_513;
                for (g_330 = (-10); (g_330 < 7); g_330 = safe_add_func_int8_t_s_s(g_330, 8))
                {
                    unsigned l_533 = 0x98EFA594L;
                    int l_549 = (-3L);
                    int l_550 = 0x4B99555AL;
                    int l_551 = 0x8CA86324L;
                    int l_552 = 0x58302CF5L;
                    int l_553 = 0x74737974L;
                    int l_554 = (-4L);
                    int l_555 = 0xA64E8E6CL;
                    for (l_53 = 0; (l_53 <= 0); l_53 += 1)
                    {
                        unsigned short *l_534 = (void*)0;
                        int i, j, k;
                        l_426 = &l_461[l_53][(l_53 + 3)][(l_53 + 3)];
                        l_533 = (l_461[l_53][(l_53 + 2)][(l_53 + 4)] = ((l_485[(l_53 + 7)][(l_53 + 3)] = (0x6FL <= l_485[(l_53 + 4)][(l_53 + 1)])) ^ (safe_mul_func_int16_t_s_s((l_520[2][2][0] == func_72(func_72((safe_mul_func_uint8_t_u_u((+(p_40 != (safe_unary_minus_func_uint16_t_u((p_40 , 0x69D6L))))), (safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(func_72(l_530), (safe_mul_func_uint8_t_u_u((l_473 , p_40), 6L)))), 1UL)), 1L))))))), l_461[l_53][(l_53 + 3)][(l_53 + 3)]))));
                        (*l_426) |= ((func_72((p_40 < (g_372 = ((*g_303) |= p_42)))) ^ (safe_rshift_func_uint16_t_u_s(func_72(l_530), 2))) != (safe_mod_func_int16_t_s_s(l_430, (-1L))));
                        l_539++;
                    }
                    if (l_461[0][0][1])
                        continue;
                    l_549 = ((safe_sub_func_uint64_t_u_u(l_484[1], p_40)) > (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((((l_548 == l_51[9]) <= p_40) , l_530) & ((void*)0 != &g_374[0][0][0])) | (((g_46 != g_134) < 1UL) != 1L)), (*l_426))), (*g_458))));
                    --l_557;
                }
                if (((l_461[0][2][5] & (g_560 == (void*)0)) , (safe_add_func_int16_t_s_s((p_40 ^ 0L), ((((l_556 = (-3L)) | 8L) , (l_556 >= g_374[0][0][0])) <= l_461[0][0][1])))))
                {
                    long long l_565[6][3][9] = {{{0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}}, {{0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}}, {{0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}}, {{0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}}, {{0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}}, {{0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}, {0x52A1E287F9024C27LL, 0x566E4BF8322A8536LL, 1L, 1L, (-5L), 1L, 0x8F1FB75C4A520D68LL, 1L, 0x2DB83D849FAC2251LL}}};
                    int l_568 = 0xAED52A00L;
                    int l_573[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_573[i] = 0xC306682AL;
                    l_461[0][4][3] &= (p_39 && (*l_427));
                    (*l_426) = ((safe_unary_minus_func_int64_t_s(p_40)) < l_565[4][1][5]);
                    if (l_508)
                        break;
                    for (g_225 = (-7); (g_225 >= (-30)); g_225 = safe_sub_func_uint64_t_u_u(g_225, 4))
                    {
                        unsigned char l_569[9][2] = {{255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}, {255UL, 246UL}};
                        int l_572 = 0x2D676D59L;
                        int l_574 = 0x51E16265L;
                        int l_575 = 0L;
                        int i, j;
                        ++l_569[8][0];
                        l_572 = (l_461[0][0][1] = func_72(l_569[4][0]));
                        --l_576;
                        if (p_42)
                            break;
                    }
                }
                else
                {
                    int *l_579[10] = {(void*)0, &g_3[0], (void*)0, &g_3[0], (void*)0, &g_3[0], (void*)0, &g_3[0], (void*)0, &g_3[0]};
                    int i;
                    (*l_427) = l_461[0][0][2];
                    (*p_41) = l_579[3];
                    for (g_428 = 2; (g_428 >= 0); g_428 -= 1)
                    {
                        int i;
                        l_580[3][1] = (void*)0;
                        l_484[g_428] = l_484[g_428];
                    }
                }
            }
            if (func_58((*l_426), g_134, (*l_426), (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((+(l_556 = (safe_lshift_func_int16_t_s_u(((l_589 < ((g_330 ^ ((g_428 , ((g_592 = l_590) == (l_530 , &g_593[6][0][2]))) , 0xAFE68738A91026D7LL)) && g_3[0])) > 0L), (*l_427))))), 1UL)) ^ g_2) >= (*g_303)), p_42)), p_40)), p_39))
            {
                int l_604 = (-1L);
                l_594 = &l_461[0][0][2];
                (*l_427) |= (func_65(p_40, func_58((*g_303), (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((p_39 != (*g_303)) | 65535UL) == g_8) , (safe_rshift_func_int16_t_s_s(l_601, ((*l_453) &= (((safe_lshift_func_uint16_t_u_u(func_72(p_39), (*g_303))) ^ p_40) == p_40))))), g_459)), (*l_594))), p_42, p_42, (*l_594)), l_51[5], p_40) , p_42);
                (*p_41) = &l_508;
                (*l_426) |= (((l_604 == ((((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(5UL, (g_2 && (g_223 , (g_459 == g_304))))), g_428)) & 0xA036DF649ADA8770LL) , (~(p_40 & l_604))) , p_39)) == l_604) , l_604);
            }
            else
            {
                unsigned l_612 = 0x525B2260L;
                int l_617 = 6L;
                int l_620 = 1L;
                int l_621 = 0xE406AAA0L;
                int l_622 = 0L;
                int l_623 = 9L;
                int l_625 = 8L;
                int l_627 = 0x277A1431L;
                int l_629 = 1L;
                int l_630[10] = {0xBE83157FL, 0x786A4197L, 0xB8266673L, 0xB8266673L, 0x786A4197L, 0xBE83157FL, 0x786A4197L, 0xB8266673L, 0xB8266673L, 0x786A4197L};
                int **l_634 = &l_615;
                int i;
                for (l_434 = 1; (l_434 >= 0); l_434 -= 1)
                {
                    short l_609 = 0L;
                    int l_611[6] = {8L, 0L, 8L, 0L, 8L, 0L};
                    int i;
                    --l_612;
                    for (g_372 = 0; (g_372 <= 1); g_372 += 1)
                    {
                        char l_616 = 0x09L;
                        int l_619 = 0xDAA2BB35L;
                        int l_624 = 1L;
                        int l_626 = (-1L);
                        int l_628[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_628[i] = 0xD682277FL;
                        (*p_41) = l_615;
                        l_631[4][0]++;
                    }
                }
                (*l_634) = ((*p_41) = &l_53);
                l_637[5][3]--;
            }
        }
        else
        {
            unsigned char l_640 = 252UL;
            return l_640;
        }
        if (((p_42 , l_641) != (((**p_41) != p_39) , (*g_560))))
        {
            int *l_643[5][7][6] = {{{&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}}, {{&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}}, {{&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}}, {{&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}}, {{&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}, {&g_83, &l_508, &l_484[1], &l_484[1], &l_508, &g_83}}};
            int i, j, k;
            (*l_615) = 0L;
            (*p_41) = l_643[4][3][0];
        }
        else
        {
            int **l_644[6];
            unsigned short *l_645 = (void*)0;
            unsigned short *l_646 = &g_372;
            int i;
            for (i = 0; i < 6; i++)
                l_644[i] = &l_580[3][1];
            (*l_641) = l_644[1];
            (*l_427) |= (((((*l_646) ^= (*g_303)) , ((**p_41) ^ ((*g_48) ^ (safe_lshift_func_uint8_t_u_s(((func_72((*g_303)) , l_645) == ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((*l_453) = p_42), ((*l_646) = ((p_42 , (safe_mod_func_int8_t_s_s(0x65L, (*g_458)))) , 0x0139L)))), p_39)) , (void*)0)), 6))))) == 0xED7ED2A3L) , (**p_41));
        }
    }
    else
    {
        for (l_347 = 0; l_347 < 5; l_347 += 1)
        {
            l_483[l_347] = 1L;
        }
    }
    return p_39;
}







static unsigned func_58(const unsigned short p_59, unsigned p_60, int p_61, int p_62, short p_63)
{
    int **l_348 = (void*)0;
    int **l_349 = (void*)0;
    int **l_350 = &g_48;
    int l_376 = 0xED9C1219L;
    int l_397 = 6L;
    int l_400 = 0xB70134C7L;
    unsigned char l_402 = 0x77L;
    short l_406 = 0x2371L;
    (*l_350) = (void*)0;
    for (g_304 = 0; (g_304 > 47); g_304++)
    {
        unsigned l_370 = 0xCDD1B2DEL;
        unsigned *l_385[5];
        unsigned **l_384 = &l_385[0];
        int l_391[10][8][3] = {{{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}, {{0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}, {0xEDB6E51BL, 0xB94CF11DL, 1L}}};
        int l_393 = (-9L);
        int *l_409[6][7][6] = {{{&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}}, {{&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}}, {{&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}}, {{&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}}, {{&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}}, {{&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}, {&g_83, &g_83, &l_400, &g_3[0], (void*)0, &l_400}}};
        int ***l_414 = (void*)0;
        unsigned char l_415 = 254UL;
        const short *l_420 = &g_52;
        long long *l_423 = &g_225;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_385[i] = &g_360;
        for (g_52 = 0; (g_52 != 19); g_52++)
        {
            int l_357 = 0x584459BCL;
            unsigned *l_358 = &g_134;
            unsigned *l_359 = &g_360;
            unsigned short *l_371 = &g_372;
            short *l_373 = &g_374[0][0][0];
            const unsigned *l_382 = &g_383;
            const unsigned **l_381 = &l_382;
            const unsigned ***l_380 = &l_381;
            int l_392 = (-10L);
            int l_401 = 0xDB6870B0L;
            int *l_408 = &l_401;
            if (((safe_mod_func_uint8_t_u_u(0x97L, (g_304 & ((*l_373) = (l_357 < (((p_63 , ((*l_359) = ((*l_358) = 0xFF961A59L))) , (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((func_72(((*l_371) = (safe_add_func_uint32_t_u_u(g_3[0], (safe_add_func_int64_t_s_s(p_63, ((!(0xF6535E73F7474D1ELL >= (safe_unary_minus_func_int16_t_s((((g_2 , g_52) && l_370) || p_59))))) <= p_60))))))) == p_61), 7)), g_52))) != g_225)))))) < p_63))
            {
                int *l_375 = &g_83;
                (*l_375) &= 0x5BC51D99L;
                (*l_375) = l_357;
            }
            else
            {
                int *l_377 = &g_83;
                (*l_377) &= l_376;
                for (l_357 = 0; (l_357 <= 0); l_357 += 1)
                {
                    int i, j, k;
                    return g_374[l_357][(l_357 + 3)][(l_357 + 1)];
                }
                if (p_59)
                    continue;
            }
            if ((l_357 == (func_72((safe_mul_func_uint16_t_u_u(l_370, (((*l_380) = (void*)0) != l_384)))) && p_63)))
            {
                unsigned *l_390 = &l_370;
                int l_394 = 0xAEE287AAL;
                int *l_395 = (void*)0;
                int *l_396[1][10];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_396[i][j] = &g_83;
                }
                l_397 = ((l_391[5][2][2] = (((((safe_mul_func_uint16_t_u_u(((*l_371) = (*g_303)), ((((~func_72((*g_303))) ^ (l_394 = func_72((p_60 <= (((((void*)0 == l_390) >= func_72(((func_72((((!p_61) != (l_393 = (l_392 = (l_391[5][2][2] = p_63)))) , (+p_60))) || p_62) > 0xD426L))) && l_394) != p_59))))) < p_59) < 0x34B68D74AC8410E4LL))) > g_223) <= 0x51626306L) & g_374[0][1][1]) <= 0xA8L)) , p_61);
                for (g_225 = 0; (g_225 != (-29)); g_225 = safe_sub_func_int32_t_s_s(g_225, 1))
                {
                    unsigned short *l_405 = (void*)0;
                    --l_402;
                    if (l_401)
                        continue;
                    l_391[5][2][2] ^= (&p_59 != l_405);
                    if (p_60)
                        break;
                }
                if (l_391[5][2][2])
                    break;
                if (l_406)
                    continue;
            }
            else
            {
                int *l_407 = &l_400;
                (*l_407) |= l_392;
            }
            (*l_408) ^= (0xD623L < 65528UL);
        }
        l_409[4][6][0] = &l_393;
        l_400 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_414 != (void*)0), (l_415 > ((safe_add_func_uint32_t_u_u(((void*)0 != &g_52), (safe_rshift_func_uint16_t_u_u((l_420 != &g_52), (safe_add_func_uint16_t_u_u((p_62 ^ ((*l_423) = (+((*l_350) == (*l_350))))), (*g_303))))))) , (*g_303))))), g_52));
    }
    return p_62;
}







static int func_65(unsigned p_66, unsigned short p_67, short * p_68, const unsigned p_69)
{
    unsigned char l_99 = 1UL;
    int l_115 = (-4L);
    int l_117 = (-1L);
    int l_118 = 0x9E610DA3L;
    int l_119 = 1L;
    int l_141 = 0x0E445E5FL;
    int l_144 = 1L;
    int l_148[9][1][1] = {{{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}, {{0x275AA4ACL}}};
    int ** const l_179[10] = {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48};
    unsigned short l_197 = 65526UL;
    unsigned *l_308 = &g_134;
    unsigned ** const l_307 = &l_308;
    unsigned ** const *l_306[6][5][3] = {{{(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}}, {{(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}}, {{(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}}, {{(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}}, {{(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}}, {{(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}, {(void*)0, &l_307, &l_307}}};
    int *l_318[3];
    int *l_319 = (void*)0;
    unsigned short *l_324 = (void*)0;
    unsigned short *l_325 = (void*)0;
    unsigned short *l_326 = &l_197;
    unsigned char *l_329[1][9][3] = {{{&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}, {&l_99, &l_99, &l_99}}};
    unsigned l_341 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_318[i] = &l_117;
    for (p_67 = 0; (p_67 < 39); p_67 = safe_add_func_int64_t_s_s(p_67, 4))
    {
        int *l_82 = &g_83;
        int *l_84 = (void*)0;
        int *l_85 = &g_83;
        int *l_86 = &g_83;
        int *l_87 = &g_83;
        int *l_88 = (void*)0;
        int *l_89 = &g_83;
        int *l_90 = &g_83;
        int *l_91 = &g_83;
        int *l_92 = &g_83;
        int *l_93 = &g_83;
        int *l_94 = &g_83;
        int *l_95 = &g_83;
        int *l_96 = &g_83;
        int *l_97 = &g_83;
        int *l_98 = &g_83;
        int l_113 = 0xB8EBACA8L;
        int l_120 = (-1L);
        int l_121 = (-1L);
        int l_123[3][8] = {{0x5AA8E544L, 0x5AA8E544L, 0x3E3F5A7AL, 0x5AA8E544L, 0x5AA8E544L, 0x3E3F5A7AL, 0x5AA8E544L, 0x5AA8E544L}, {0x5AA8E544L, 0x5AA8E544L, 0x3E3F5A7AL, 0x5AA8E544L, 0x5AA8E544L, 0x3E3F5A7AL, 0x5AA8E544L, 0x5AA8E544L}, {0x5AA8E544L, 0x5AA8E544L, 0x3E3F5A7AL, 0x5AA8E544L, 0x5AA8E544L, 0x3E3F5A7AL, 0x5AA8E544L, 0x5AA8E544L}};
        short l_156[4];
        int l_159 = 0x2E726D7FL;
        int * const *l_184 = &l_89;
        int * const **l_183 = &l_184;
        unsigned l_294 = 0xF1D85A6FL;
        long long *l_305[10] = {&g_225, &g_225, &g_225, &g_225, &g_225, &g_225, &g_225, &g_225, &g_225, &g_225};
        int i, j;
        for (i = 0; i < 4; i++)
            l_156[i] = (-10L);
        l_99++;
    }
    l_319 = l_318[0];
    if ((safe_mod_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((((*g_303) |= 65535UL) >= func_72(func_72((g_83 , ((*l_326) = 65532UL))))), func_72(g_225))) | (safe_mul_func_uint8_t_u_u(((g_330 = 0x1BL) != p_67), 7UL))) ^ 7UL), 0x37L)))
    {
        int *l_331 = &g_8;
        int l_332[6][8] = {{0x070690EFL, 0x783233DEL, 0x5046C3E8L, 7L, 1L, 0x871033A2L, 0x364F09B6L, 0x1A4B0FADL}, {0x070690EFL, 0x783233DEL, 0x5046C3E8L, 7L, 1L, 0x871033A2L, 0x364F09B6L, 0x1A4B0FADL}, {0x070690EFL, 0x783233DEL, 0x5046C3E8L, 7L, 1L, 0x871033A2L, 0x364F09B6L, 0x1A4B0FADL}, {0x070690EFL, 0x783233DEL, 0x5046C3E8L, 7L, 1L, 0x871033A2L, 0x364F09B6L, 0x1A4B0FADL}, {0x070690EFL, 0x783233DEL, 0x5046C3E8L, 7L, 1L, 0x871033A2L, 0x364F09B6L, 0x1A4B0FADL}, {0x070690EFL, 0x783233DEL, 0x5046C3E8L, 7L, 1L, 0x871033A2L, 0x364F09B6L, 0x1A4B0FADL}};
        int i, j;
        l_331 = l_331;
        l_332[1][5] &= (*l_319);
    }
    else
    {
        char l_335 = 0x5DL;
        int *l_337[1];
        int * const l_344 = &g_3[2];
        int **l_345[9] = {&l_319, &l_337[0], &l_319, &l_337[0], &l_319, &l_337[0], &l_319, &l_337[0], &l_319};
        int **l_346 = &l_337[0];
        int i;
        for (i = 0; i < 1; i++)
            l_337[i] = (void*)0;
        for (g_52 = (-30); (g_52 <= (-12)); g_52++)
        {
            int *l_336[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
            unsigned long long l_340 = 1UL;
            int i;
            l_337[0] = (l_335 , l_336[3]);
            for (p_66 = 0; (p_66 <= 40); ++p_66)
            {
                l_340 |= p_69;
            }
        }
        l_341++;
        (*l_346) = l_344;
    }
    return p_69;
}







static unsigned func_72(unsigned short p_73)
{
    int l_79 = 0x7B1D0057L;
    return l_79;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_374[i][j][k], "g_374[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_788[i][j], "g_788[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_872[i][j], "g_872[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1102, "g_1102", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1493, "g_1493", print_hash_value);
    transparent_crc(g_1495, "g_1495", print_hash_value);
    transparent_crc(g_1621, "g_1621", print_hash_value);
    transparent_crc(g_1627, "g_1627", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1839[i], "g_1839[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1840, "g_1840", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
