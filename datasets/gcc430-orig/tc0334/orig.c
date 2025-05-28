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



static volatile int g_3 = 0xF2C29A3DL;
static int g_4 = 1L;
static char g_19 = 0x8DL;
static short g_24[5] = {3L, 3L, 3L, 3L, 3L};
static short g_26 = 0x3268L;
static short g_28 = 0x38E4L;
static int g_33 = (-7L);
static volatile char g_40 = 0xB8L;
static volatile unsigned short g_43 = 0x2B8FL;
static unsigned short g_75 = 2UL;
static int g_86 = 0xD23E821DL;
static int *g_85 = &g_86;
static unsigned char g_91 = 0xE4L;
static char g_123 = 0x07L;
static unsigned g_131 = 4UL;
static char *g_157 = &g_123;
static volatile unsigned g_188 = 0x225C9EAEL;
static volatile unsigned g_245[6][5] = {{0xDF408480L, 0xC52B6956L, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL}, {0xDF408480L, 0xC52B6956L, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL}, {0xDF408480L, 0xC52B6956L, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL}, {0xDF408480L, 0xC52B6956L, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL}, {0xDF408480L, 0xC52B6956L, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL}, {0xDF408480L, 0xC52B6956L, 18446744073709551612UL, 18446744073709551615UL, 18446744073709551612UL}};
static int g_256 = 0L;
static short g_257 = (-3L);
static char g_259 = (-10L);
static volatile int g_260 = (-7L);
static unsigned short g_262 = 0UL;
static short g_278[1][9] = {{0x1D5EL, 9L, 0x1D5EL, 9L, 0x1D5EL, 9L, 0x1D5EL, 9L, 0x1D5EL}};
static char g_336[10] = {0xBCL, 1L, 0xBCL, 1L, 0xBCL, 1L, 0xBCL, 1L, 0xBCL, 1L};
static short **g_343 = (void*)0;
static unsigned char g_352 = 7UL;
static int *g_371[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned g_437 = 2UL;
static char g_438[8] = {0x36L, 0x36L, 7L, 0x36L, 0x36L, 7L, 0x36L, 0x36L};
static unsigned short **g_528 = (void*)0;
static unsigned *g_553 = &g_437;
static int *g_612 = &g_256;
static short g_628 = 0x1D25L;
static unsigned char g_636 = 0x90L;
static unsigned char *g_635 = &g_636;
static volatile unsigned short *g_653 = &g_43;
static volatile int **g_659 = (void*)0;
static volatile int ***g_658[4][8][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
static unsigned g_674 = 0x2723120AL;
static int **g_729 = (void*)0;
static int ***g_728 = &g_729;
static int ****g_727 = &g_728;
static char g_857 = 1L;
static unsigned g_922[3][9][8] = {{{0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}}, {{0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}}, {{0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}, {0x8AF8F6BEL, 0xAE8C6DB5L, 0x3C82BBEAL, 0xE83D5705L, 3UL, 1UL, 18446744073709551615UL, 0xBF4CADDDL}}};
static unsigned char g_928[8][5] = {{1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}, {1UL, 1UL, 0x91L, 1UL, 1UL}};
static volatile unsigned g_997 = 1UL;
static volatile int *g_1001 = &g_3;
static volatile char g_1016 = (-1L);
static unsigned short g_1025 = 0xC55DL;
static int g_1075[7][5] = {{0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}, {0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}, {0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}, {0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}, {0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}, {0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}, {0x89B693CFL, 0x89B693CFL, 0x49B0AC7FL, 0x89B693CFL, 0x89B693CFL}};
static volatile unsigned g_1076 = 0x05B0E382L;
static int g_1090[3][8] = {{0x0986407DL, 0x3370DF09L, 0x0F54D1F8L, 0x3370DF09L, 0x0986407DL, 6L, 0x0986407DL, 0x3370DF09L}, {0x0986407DL, 0x3370DF09L, 0x0F54D1F8L, 0x3370DF09L, 0x0986407DL, 6L, 0x0986407DL, 0x3370DF09L}, {0x0986407DL, 0x3370DF09L, 0x0F54D1F8L, 0x3370DF09L, 0x0986407DL, 6L, 0x0986407DL, 0x3370DF09L}};
static int *g_1101 = (void*)0;



static int func_1(void);
static unsigned func_9(int p_10, unsigned short p_11, unsigned p_12, int p_13, unsigned short p_14);
static unsigned short func_15(unsigned char p_16, int p_17, unsigned p_18);
static unsigned func_20(char p_21, short p_22);
static int * func_46(unsigned p_47, short p_48, short * p_49, char p_50, short * p_51);
static int func_52(int * p_53, int * p_54, int * p_55);
static int * func_56(int p_57, unsigned p_58, short * p_59);
static int * func_62(unsigned p_63, int p_64, int * p_65, unsigned p_66, short p_67);
static int * func_68(unsigned short p_69, unsigned p_70, int * p_71);
static unsigned short func_72(short p_73, int p_74);
static int func_1(void)
{
    int l_2[5];
    short *l_627 = &g_628;
    short **l_626 = &l_627;
    int l_861 = 0xB3C8F35EL;
    int l_886 = 0L;
    int l_888 = 1L;
    int l_891 = 0xB2B1C417L;
    int l_893 = 0x0AA640D5L;
    int l_894 = (-7L);
    unsigned char l_965 = 0x4EL;
    short l_980 = (-3L);
    int l_981 = 0L;
    int *l_993[8] = {&l_893, (void*)0, &l_893, (void*)0, &l_893, (void*)0, &l_893, (void*)0};
    char l_1033 = 0xF2L;
    unsigned l_1039 = 8UL;
    int l_1057 = 0x5216FC85L;
    unsigned l_1063[9][1] = {{0x67117182L}, {0x67117182L}, {0x67117182L}, {0x67117182L}, {0x67117182L}, {0x67117182L}, {0x67117182L}, {0x67117182L}, {0x67117182L}};
    int l_1067 = 0x1923D1BDL;
    unsigned l_1097 = 0x5F880F44L;
    int l_1106 = (-10L);
    int i, j;
    for (i = 0; i < 5; i++)
        l_2[i] = 0xAF1124F0L;
    for (g_4 = 0; (g_4 <= 4); g_4 += 1)
    {
        short *l_23 = &g_24[4];
        short *l_25 = &g_26;
        short *l_27 = &g_28;
        int l_29 = 0L;
        short ***l_629 = (void*)0;
        short ***l_630[8] = {&l_626, &l_626, &l_626, &l_626, &l_626, &l_626, &l_626, &l_626};
        unsigned char *l_633 = (void*)0;
        unsigned char **l_634[1];
        int l_856 = 0xD5CEF299L;
        int l_889 = (-8L);
        int l_890 = 0x93DCA8D8L;
        int l_892 = 0x8F2278EFL;
        int ****l_912 = &g_728;
        int ****l_913[7][3][5] = {{{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}, {{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}, {{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}, {{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}, {{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}, {{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}, {{&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}, {&g_728, &g_728, &g_728, &g_728, &g_728}}};
        char l_923[10][8] = {{0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}, {0xE2L, 0x52L, 0x0CL, 0x64L, 0x52L, (-5L), 0x52L, 0x64L}};
        unsigned l_959[10] = {18446744073709551610UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL};
        int l_974 = 0x7919AE23L;
        int l_1008 = 0xBC7072CFL;
        unsigned char l_1026[5] = {0x0DL, 250UL, 0x0DL, 250UL, 0x0DL};
        volatile int l_1036[6];
        short *l_1049 = &g_628;
        int *l_1070 = (void*)0;
        int l_1089[3][2] = {{0x170EDD8AL, 0x170EDD8AL}, {0x170EDD8AL, 0x170EDD8AL}, {0x170EDD8AL, 0x170EDD8AL}};
        int l_1140[5][7][6] = {{{0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}}, {{0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}}, {{0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}}, {{0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}}, {{0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}, {0L, 0x77FDA489L, 0xACB2A172L, (-1L), 0xE2EFF520L, 0x7C1F8BB3L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_634[i] = &l_633;
        for (i = 0; i < 6; i++)
            l_1036[i] = 1L;
        if ((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((g_857 = (l_856 = (0xC25FCC58L != func_9(l_2[g_4], func_15((g_19 &= l_2[g_4]), (func_20(g_4, (l_29 = ((*l_27) = ((*l_25) &= ((*l_23) |= g_3))))) & ((l_626 = l_626) != &l_627)), (safe_div_func_uint16_t_u_u(((g_635 = l_633) == (void*)0), l_2[3]))), g_256, g_256, l_2[4])))) != g_4), g_4)), 9)))
        {
            for (g_91 = 0; (g_91 <= 1); g_91 += 1)
            {
                return (*g_612);
            }
        }
        else
        {
            int *l_858 = &l_29;
            (*l_858) = l_2[3];
            for (g_674 = 0; (g_674 <= 0); g_674 += 1)
            {
                int i, j;
                return g_278[g_674][(g_4 + 2)];
            }
        }
    }
    return (*g_612);
}







static unsigned func_9(int p_10, unsigned short p_11, unsigned p_12, int p_13, unsigned short p_14)
{
    int *l_675 = (void*)0;
    int **l_676[9][1][10];
    int l_681 = 0xC043D0FBL;
    short *l_682[3][6] = {{&g_628, &g_628, &g_28, &g_628, &g_28, &g_628}, {&g_628, &g_628, &g_28, &g_628, &g_28, &g_628}, {&g_628, &g_628, &g_28, &g_628, &g_28, &g_628}};
    int *l_683 = &g_33;
    unsigned short l_698[6][4][1];
    int l_749 = 4L;
    int l_751 = 4L;
    int l_753[6][5] = {{1L, 0L, 1L, 0x6619CC58L, 1L}, {1L, 0L, 1L, 0x6619CC58L, 1L}, {1L, 0L, 1L, 0x6619CC58L, 1L}, {1L, 0L, 1L, 0x6619CC58L, 1L}, {1L, 0L, 1L, 0x6619CC58L, 1L}, {1L, 0L, 1L, 0x6619CC58L, 1L}};
    unsigned l_778 = 0x227D9FA7L;
    int *l_802 = &l_749;
    unsigned l_814 = 6UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
                l_676[i][j][k] = &l_675;
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_698[i][j][k] = 65527UL;
        }
    }
    l_683 = &l_681;
    for (g_262 = 0; (g_262 >= 42); g_262++)
    {
        unsigned char *l_686 = (void*)0;
        unsigned char *l_687 = (void*)0;
        unsigned char *l_688 = &g_636;
        unsigned l_693 = 0UL;
        unsigned short *l_699 = &l_698[5][1][0];
        int *l_708 = &g_86;
        int *l_709 = &g_86;
        int **l_724 = (void*)0;
        int ***l_723 = &l_724;
        int ****l_722 = &l_723;
        int l_745 = 0L;
        int l_747 = 0xCC79172FL;
        int l_748 = 0xBE59D801L;
        int l_750[7] = {(-1L), 0x0ABB2BC4L, (-1L), 0x0ABB2BC4L, (-1L), 0x0ABB2BC4L, (-1L)};
        unsigned char l_781 = 255UL;
        short **l_782[2];
        char **l_839 = (void*)0;
        unsigned char l_855 = 0xB4L;
        int i;
        for (i = 0; i < 2; i++)
            l_782[i] = &l_682[1][3];
        (*l_683) = (*l_683);
        if (((g_262 > ((((*l_709) &= (((*l_688)--) || func_15((safe_lshift_func_int8_t_s_u(l_693, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_699) = l_698[5][1][0]), 11)), 4)) == ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((*g_553) &= func_72(p_12, (((*l_683) >= func_72(p_14, (0L >= ((safe_rshift_func_int8_t_s_u(g_19, 7)) ^ ((l_708 = &l_681) == (void*)0))))) ^ 1UL))), p_10)), l_693)) != 1L)))), (*l_683), (*l_683)))) && (*g_553)) == p_13)) >= 0x23AB8013L))
        {
            short *l_716[9][1][3] = {{{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}, {{&g_26, (void*)0, &g_26}}};
            int ****l_726 = (void*)0;
            int l_734 = 0xBD197740L;
            int l_746[4][5][1] = {{{0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}}, {{0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}}, {{0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}}, {{0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}, {0xADEC3DEAL}}};
            int l_752[5][10] = {{3L, (-8L), 0xBDB30839L, 0x79EFCD8CL, (-1L), 0x81442D90L, 0x5AA15809L, 0x6D676203L, 0xBDB30839L, 0x6D676203L}, {3L, (-8L), 0xBDB30839L, 0x79EFCD8CL, (-1L), 0x81442D90L, 0x5AA15809L, 0x6D676203L, 0xBDB30839L, 0x6D676203L}, {3L, (-8L), 0xBDB30839L, 0x79EFCD8CL, (-1L), 0x81442D90L, 0x5AA15809L, 0x6D676203L, 0xBDB30839L, 0x6D676203L}, {3L, (-8L), 0xBDB30839L, 0x79EFCD8CL, (-1L), 0x81442D90L, 0x5AA15809L, 0x6D676203L, 0xBDB30839L, 0x6D676203L}, {3L, (-8L), 0xBDB30839L, 0x79EFCD8CL, (-1L), 0x81442D90L, 0x5AA15809L, 0x6D676203L, 0xBDB30839L, 0x6D676203L}};
            char l_836[4][2];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_836[i][j] = 1L;
            }
            for (g_636 = 0; (g_636 >= 5); g_636++)
            {
                unsigned char *l_712 = &g_352;
                int l_715 = 0xB4125F09L;
                int **l_717 = &l_708;
                int *****l_725 = &l_722;
                int *l_735 = (void*)0;
                int *l_736 = &l_681;
                int *l_737 = (void*)0;
                int *l_738 = &g_86;
                int *l_739 = &g_33;
                int *l_740 = (void*)0;
                int *l_741 = (void*)0;
                int *l_742 = &l_715;
                int *l_743 = &g_33;
                int *l_744[6];
                unsigned short l_754 = 65534UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_744[i] = &l_681;
            }
            for (l_745 = 0; (l_745 <= (-10)); l_745--)
            {
                int l_777 = 0L;
                int l_788[6][2];
                int *l_799 = &l_752[2][8];
                int **l_803[2];
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_788[i][j] = 2L;
                }
                for (i = 0; i < 2; i++)
                    l_803[i] = &l_799;
                for (g_257 = 24; (g_257 >= 10); g_257--)
                {
                    int *l_761 = &l_750[1];
                    int **l_762 = &l_709;
                    short l_764 = (-9L);
                    char *l_779 = &g_123;
                    char *l_780 = &g_19;
                    int l_789 = 1L;
                    int l_790 = (-1L);
                    int l_791 = 0xACCBDF06L;
                    int l_792 = 0xE3B84CB1L;
                    int l_793 = 1L;
                    unsigned short l_794 = 0x61E5L;
                    (*l_762) = l_761;
                    for (l_749 = 0; (l_749 <= 0); l_749 += 1)
                    {
                        int *l_763 = (void*)0;
                        if (p_14)
                            break;
                        (*l_762) = l_763;
                        return l_764;
                    }
                    if (((*l_683) == ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(func_15((safe_sub_func_int8_t_s_s(p_11, (0xEDL > (safe_rshift_func_uint8_t_u_s((*l_761), 1))))), ((void*)0 != l_699), ((((*l_780) = ((*l_779) = ((safe_lshift_func_uint16_t_u_u(l_777, (l_778 < ((&g_343 == (void*)0) || 0x7E2ED2C7L)))) || p_13))) <= (*l_761)) && p_14)), p_11)), 13)), l_781)) | 0x5611L)))
                    {
                        return p_10;
                    }
                    else
                    {
                        short ***l_783 = &l_782[1];
                        int *l_784 = &l_734;
                        int *l_785 = (void*)0;
                        int *l_786 = &g_86;
                        int *l_787[10][1] = {{&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}, {&l_752[2][8]}};
                        int i, j;
                        (*l_783) = l_782[1];
                        (*l_762) = l_784;
                        l_794++;
                    }
                    for (g_28 = (-20); (g_28 <= 26); g_28 = safe_add_func_int16_t_s_s(g_28, 2))
                    {
                        (*l_762) = l_799;
                    }
                }
                g_371[6] = func_68(((func_72(g_245[0][0], ((*g_612) |= (p_12 || p_12))) >= ((*l_699)++)) < (*l_799)), (*l_709), l_802);
            }
            for (l_693 = 0; (l_693 <= 4); l_693 += 1)
            {
                unsigned char **l_812 = (void*)0;
                unsigned char ***l_811 = &l_812;
                int l_813 = (-1L);
                int l_815 = 8L;
                char *l_849 = &l_836[3][0];
                for (p_13 = 3; (p_13 >= 1); p_13 -= 1)
                {
                    int l_808 = 0xC362FF19L;
                    char **l_840 = &g_157;
                    char *l_850 = &g_438[3];
                    char *l_851 = &l_836[3][0];
                    int i;
                }
            }
        }
        else
        {
            return p_14;
        }
        (*l_802) = (~(safe_mod_func_int32_t_s_s(p_10, l_855)));
    }
    return p_11;
}







static unsigned short func_15(unsigned char p_16, int p_17, unsigned p_18)
{
    int *l_637 = (void*)0;
    int *l_638 = (void*)0;
    int *l_639 = &g_33;
    unsigned l_648[10][7][3] = {{{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}, {{0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}, {0xD6D43D10L, 0x8AEA2C40L, 0x65AEB7DCL}}};
    int **l_655 = &l_637;
    int ***l_654 = &l_655;
    int ****l_656 = (void*)0;
    int ****l_657 = &l_654;
    unsigned short *l_662 = &g_75;
    short *l_667 = &g_278[0][0];
    int *l_668[3];
    unsigned char l_669 = 0xE6L;
    unsigned char **l_670 = &g_635;
    unsigned char ***l_671 = &l_670;
    unsigned char **l_673 = &g_635;
    unsigned char ***l_672 = &l_673;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_668[i] = &g_86;
    (*l_639) &= 2L;
    l_669 ^= (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((*l_667) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_648[3][2][2], (safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(((void*)0 == g_653), ((((*l_639) != ((p_18 < (*l_639)) & (((*l_657) = l_654) == g_658[2][6][0]))) < (((safe_add_func_uint16_t_u_u((++(*l_662)), (safe_mul_func_int8_t_s_s(g_19, g_245[5][1])))) <= 65535UL) || g_28)) < p_17))) > p_17), 7)))), p_16))) < g_336[4]) >= 0xC0DBL), 0x2181L)), 0xDF20L));
    (*l_639) = (&g_635 == ((*l_672) = ((*l_671) = l_670)));
    g_674 = ((*l_639) |= 0x4881BB6FL);
    return p_17;
}







static unsigned func_20(char p_21, short p_22)
{
    char l_35[6][1][10] = {{{0xE6L, 0xF6L, 0x9FL, 0L, 0L, 0x9FL, 0xF6L, 0xE6L, 0L, (-7L)}}, {{0xE6L, 0xF6L, 0x9FL, 0L, 0L, 0x9FL, 0xF6L, 0xE6L, 0L, (-7L)}}, {{0xE6L, 0xF6L, 0x9FL, 0L, 0L, 0x9FL, 0xF6L, 0xE6L, 0L, (-7L)}}, {{0xE6L, 0xF6L, 0x9FL, 0L, 0L, 0x9FL, 0xF6L, 0xE6L, 0L, (-7L)}}, {{0xE6L, 0xF6L, 0x9FL, 0L, 0L, 0x9FL, 0xF6L, 0xE6L, 0L, (-7L)}}, {{0xE6L, 0xF6L, 0x9FL, 0L, 0L, 0x9FL, 0xF6L, 0xE6L, 0L, (-7L)}}};
    int l_36 = 0x3DD61FB9L;
    int l_37 = (-2L);
    int l_38 = 0x342BB1E5L;
    int l_39 = 1L;
    char l_41 = 0x41L;
    int l_42 = (-2L);
    short *l_584 = &g_26;
    int *l_623 = (void*)0;
    int *l_624 = &l_39;
    int **l_625 = &l_624;
    int i, j, k;
    for (g_26 = 0; (g_26 > 2); ++g_26)
    {
        int *l_32 = &g_33;
        int *l_34[3];
        int **l_369[8] = {&g_85, (void*)0, &g_85, (void*)0, &g_85, (void*)0, &g_85, (void*)0};
        int *l_370 = &g_33;
        int i;
        for (i = 0; i < 3; i++)
            l_34[i] = &g_33;
        g_43--;
        g_371[2] = func_46(l_35[4][0][3], ((7L < ((func_52(func_56((safe_mod_func_int32_t_s_s(((g_371[6] = (l_370 = func_62((~1UL), l_37, func_68(func_72(p_22, g_28), (safe_lshift_func_int16_t_s_u(0x2AB1L, 14)), l_34[2]), l_38, p_22))) != (void*)0), g_256)), g_4, &g_28), &g_4, &g_4) != 0xC1D66C30L) < (-6L))) > 0xDDL), l_584, p_21, &g_26);
    }
    (*l_624) &= (l_35[3][0][8] == g_131);
    (*l_625) = (l_623 = (void*)0);
    return p_22;
}







static int * func_46(unsigned p_47, short p_48, short * p_49, char p_50, short * p_51)
{
    unsigned char l_585 = 0xE5L;
    unsigned char *l_586 = &g_352;
    unsigned *l_595 = &g_437;
    unsigned l_613 = 0xDA3B1420L;
    int l_615 = 7L;
    int l_621 = 0x9F104311L;
    if ((((*g_553) = 4294967295UL) >= (((l_585 == l_585) | (g_278[0][5] |= ((((*l_586) = g_245[0][1]) > p_48) < (0xE5L > ((g_86 < ((void*)0 != &g_91)) <= l_585))))) >= 0L)))
    {
        unsigned short l_610 = 0x65ACL;
        short *l_611 = &g_257;
        int *l_614[3];
        int i;
        for (i = 0; i < 3; i++)
            l_614[i] = &g_33;
        l_615 ^= (p_47 != (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((((((l_595 != l_595) ^ (((safe_mul_func_uint8_t_u_u(((g_612 = l_595) != (void*)0), 4UL)) != l_610) > p_47)) > 0xD8L) | l_613) < 65532UL) <= 1L), p_47)), (*p_51))) || l_613), g_91)));
        return l_614[0];
    }
    else
    {
        unsigned short *l_616 = &g_262;
        int l_617 = 0xF6E73FE1L;
        unsigned l_618 = 4294967295UL;
        int *l_622 = &g_86;
        l_621 |= (((((*l_616) = p_48) >= func_72(l_617, l_617)) <= l_615) | (l_618 | (~(safe_rshift_func_int8_t_s_s(l_618, 2)))));
        l_615 &= ((*l_622) = (&p_50 != (void*)0));
        return &g_86;
    }
}







static int func_52(int * p_53, int * p_54, int * p_55)
{
    short l_421 = 1L;
    char *l_426 = (void*)0;
    char *l_427 = &g_123;
    unsigned *l_436 = &g_437;
    int *l_448 = &g_33;
    int l_466 = (-1L);
    int l_467[8][9][2] = {{{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}, {{4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}, {4L, 0x78336A11L}}};
    unsigned short l_491 = 4UL;
    int l_499 = (-1L);
    int l_500 = (-1L);
    unsigned char l_538 = 0UL;
    int l_549[3];
    unsigned char l_583 = 0x1FL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_549[i] = 1L;
    if ((g_131 & ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_427) = (((((safe_add_func_int32_t_s_s(0xA3F03289L, g_75)) | (g_438[3] = (l_421 > (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((l_426 = &g_336[2]) != l_427) >= (safe_mul_func_int16_t_s_s(l_421, (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xDEL, (((*l_436) = l_421) <= 0x946895FFL))), l_421)), (-6L)))))), l_421)), l_421))))) == l_421) || 0x31BCL) | g_75)), 4)) || (-9L)), l_421)) ^ g_257)))
    {
        unsigned l_439 = 18446744073709551608UL;
        l_448 = func_62((4294967295UL < (*p_55)), (*p_54), &g_86, l_439, (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(l_439, (safe_sub_func_int16_t_s_s((g_257 == l_439), (g_262 | l_439))))), l_421)) <= l_421), l_439)));
    }
    else
    {
        int l_451 = (-1L);
        int l_494 = (-1L);
        int l_496 = 8L;
        int l_498[4][7] = {{0xA7E1DFB3L, 1L, 0xBA3C33D0L, 1L, 0xA7E1DFB3L, 1L, 0xBA3C33D0L}, {0xA7E1DFB3L, 1L, 0xBA3C33D0L, 1L, 0xA7E1DFB3L, 1L, 0xBA3C33D0L}, {0xA7E1DFB3L, 1L, 0xBA3C33D0L, 1L, 0xA7E1DFB3L, 1L, 0xBA3C33D0L}, {0xA7E1DFB3L, 1L, 0xBA3C33D0L, 1L, 0xA7E1DFB3L, 1L, 0xBA3C33D0L}};
        unsigned short l_505 = 1UL;
        unsigned short *l_527 = &l_505;
        unsigned short **l_526[2];
        char l_537[10][6] = {{0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}, {0xAFL, 0xEEL, (-2L), 0xEEL, 0xAFL, 0x6DL}};
        char l_545 = 1L;
        int *l_581[5][8][5] = {{{&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}}, {{&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}}, {{&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}}, {{&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}}, {{&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}, {&l_498[2][4], &l_498[2][4], &g_4, &l_498[2][4], &l_466}}};
        int *l_582[10][3];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_526[i] = &l_527;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 3; j++)
                l_582[i][j] = &l_549[2];
        }
        for (g_28 = 0; (g_28 == (-17)); --g_28)
        {
            int l_465[10][10][2] = {{{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}, {{0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}, {0L, 0x22A9634CL}}};
            int i, j, k;
            if (l_451)
            {
                unsigned char *l_454 = &g_352;
                unsigned char *l_459 = &g_91;
                int l_460[8];
                int **l_463[6][6][4] = {{{&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}}, {{&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}}, {{&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}}, {{&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}}, {{&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}}, {{&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}, {&g_371[4], (void*)0, &g_371[6], &g_371[6]}}};
                int ***l_462 = &l_463[5][2][2];
                unsigned short *l_464[2];
                int l_501 = (-1L);
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_460[i] = 0x8A4C39CEL;
                for (i = 0; i < 2; i++)
                    l_464[i] = &g_262;
                (*l_448) = (l_451 = (*p_54));
                if ((((safe_lshift_func_uint8_t_u_s((--(*l_454)), 0)) | ((*p_54) < (func_72((safe_lshift_func_uint8_t_u_s(((*l_459) = 0x39L), (*l_448))), l_460[3]) < ((safe_unary_minus_func_uint8_t_u(l_421)) != (g_262 = (((*l_462) = &g_371[6]) != &g_371[2])))))) & l_465[1][1][0]))
                {
                    unsigned char l_468 = 0xF6L;
                    l_468++;
                    g_371[6] = p_54;
                }
                else
                {
                    unsigned char l_471[4];
                    int l_490 = (-3L);
                    int l_497 = 1L;
                    unsigned char l_502 = 0x3BL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_471[i] = 3UL;
                    if (((l_471[2] | (g_4 < (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((*l_436)--) < (safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(func_72((safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((((((*l_454)--) < g_131) < g_131) || ((*l_448) = l_465[0][3][1])), l_465[8][8][1])) & (g_257 || (l_490 |= 65534UL))), ((*l_459) ^= (l_465[1][1][0] | l_465[0][6][1])))), l_471[2]), l_491)), 1UL))) || (*p_55)), 7)), 255UL)), 14)))) <= l_451))
                    {
                        return (*p_55);
                    }
                    else
                    {
                        char l_492 = 0L;
                        int l_493 = 0L;
                        int l_495 = 0L;
                        l_502++;
                        return l_505;
                    }
                }
            }
            else
            {
                unsigned char l_512[1][4] = {{0UL, 1UL, 0UL, 1UL}};
                unsigned short *l_513[4][1][2];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_513[i][j][k] = (void*)0;
                    }
                }
                if ((g_438[3] >= ((safe_add_func_int32_t_s_s((0x30L < (l_494 != (l_465[1][1][0] = (func_72((safe_rshift_func_int16_t_s_u(g_259, 13)), (safe_mul_func_int16_t_s_s(l_465[3][4][1], l_465[1][1][0]))) < l_512[0][2])))), (((*l_436) ^= (&p_54 != (void*)0)) ^ g_352))) || 0x8C539F0AL)))
                {
                    unsigned l_516 = 18446744073709551612UL;
                    if ((safe_mod_func_int16_t_s_s(g_28, func_72(l_516, func_72(l_465[1][1][0], l_512[0][2])))))
                    {
                        short l_519[8] = {0xCEB2L, 0x3C30L, 0xCEB2L, 0x3C30L, 0xCEB2L, 0x3C30L, 0xCEB2L, 0x3C30L};
                        int i;
                        (*l_448) ^= (safe_sub_func_int8_t_s_s(l_519[5], g_91));
                    }
                    else
                    {
                        unsigned char *l_520 = &g_91;
                        int *l_521 = (void*)0;
                        int *l_522 = (void*)0;
                        l_465[3][5][0] |= (*l_448);
                        l_494 &= (((*l_520) = func_72((+(-1L)), l_512[0][2])) > ((*l_426) = (~l_512[0][2])));
                        if (l_512[0][2])
                            continue;
                        l_496 = (*p_55);
                    }
                    if ((*p_55))
                        break;
                }
                else
                {
                    for (g_259 = 4; (g_259 >= 0); g_259 -= 1)
                    {
                        int **l_523[5] = {(void*)0, &g_371[1], (void*)0, &g_371[1], (void*)0};
                        int i;
                        p_53 = p_53;
                    }
                }
                l_545 |= (((*l_448) = (safe_lshift_func_int8_t_s_u((((l_526[1] != g_528) & (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(l_465[1][1][0], l_512[0][2])), 4))) || g_278[0][8]), 4))) & (g_24[3] | (safe_rshift_func_uint8_t_u_s(0x1CL, (safe_sub_func_int32_t_s_s((l_538 = l_537[7][3]), (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(l_512[0][2], 12)), 1)), l_505))))))));
            }
        }
        if ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((l_498[2][4] && l_549[2]))), 1)))
        {
            g_85 = &l_499;
        }
        else
        {
            unsigned **l_552[3];
            unsigned char *l_554 = &l_538;
            int l_557 = 0x80163501L;
            int l_558 = 0L;
            unsigned ***l_565 = &l_552[1];
            int *l_566 = &g_86;
            int i;
            for (i = 0; i < 3; i++)
                l_552[i] = (void*)0;
            l_558 &= (safe_lshift_func_uint16_t_u_s((*l_448), (l_545 & ((((*l_448) > (*l_448)) <= (1L > ((g_553 = &g_131) == p_54))) & (((0x05783A19L ^ (((++(*l_554)) || ((*l_427) = g_336[0])) && l_505)) & 0x87L) ^ l_557)))));
            (*l_566) |= (safe_mod_func_uint32_t_u_u((((*l_554)--) && (((*l_565) = &g_553) != &l_436)), (*l_448)));
            for (g_257 = 25; (g_257 != (-22)); g_257 = safe_sub_func_uint8_t_u_u(g_257, 9))
            {
                int l_569 = 0x32B7E755L;
                int *l_570 = (void*)0;
                int **l_571[1][3];
                short l_580 = 1L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_571[i][j] = (void*)0;
                }
                g_371[6] = (void*)0;
                if (l_451)
                    break;
                p_54 = &l_557;
                for (l_545 = 0; (l_545 <= 9); ++l_545)
                {
                    unsigned l_574 = 0x98E97FD2L;
                    (*p_54) = (*p_54);
                    (*p_54) ^= func_72((*l_566), l_574);
                    for (l_499 = 0; (l_499 <= 1); l_499 += 1)
                    {
                        unsigned l_576[4][8] = {{1UL, 0x2E75B3DFL, 0x6F412E92L, 4294967295UL, 0x6F412E92L, 0x2E75B3DFL, 1UL, 1UL}, {1UL, 0x2E75B3DFL, 0x6F412E92L, 4294967295UL, 0x6F412E92L, 0x2E75B3DFL, 1UL, 1UL}, {1UL, 0x2E75B3DFL, 0x6F412E92L, 4294967295UL, 0x6F412E92L, 0x2E75B3DFL, 1UL, 1UL}, {1UL, 0x2E75B3DFL, 0x6F412E92L, 4294967295UL, 0x6F412E92L, 0x2E75B3DFL, 1UL, 1UL}};
                        unsigned short *l_579 = &l_491;
                        int i, j;
                        (*l_566) &= ((*p_54) = func_72((safe_unary_minus_func_uint32_t_u(((((*p_54) = l_576[3][1]) < (safe_mul_func_int16_t_s_s(l_574, (l_579 != &g_43)))) && (*l_448)))), (l_545 < (l_494 | (!((*l_448) ^ g_437))))));
                        return (*p_55);
                    }
                    l_496 &= l_580;
                }
            }
        }
        l_581[0][2][3] = p_53;
        (*l_448) = func_72((*l_448), (l_583 = (*l_448)));
    }
    return (*l_448);
}







static int * func_56(int p_57, unsigned p_58, short * p_59)
{
    int l_396 = (-4L);
    int l_397 = 0xF5C1E7DBL;
    int l_399 = 0L;
    unsigned l_400 = 5UL;
    char l_412 = 0xF2L;
    if (((g_123 > (-6L)) > p_57))
    {
        unsigned char l_376 = 255UL;
        int *l_385 = (void*)0;
        for (p_57 = (-19); (p_57 != (-28)); p_57 = safe_sub_func_int32_t_s_s(p_57, 8))
        {
            int *l_374 = (void*)0;
            int *l_375 = &g_33;
            int *l_379 = (void*)0;
            int l_380 = 0x87AD862CL;
            unsigned char *l_394 = &g_352;
            unsigned *l_395 = &g_131;
            l_376--;
            l_380 &= (*l_375);
            for (g_131 = 0; (g_131 <= 6); g_131 = safe_add_func_int8_t_s_s(g_131, 1))
            {
                for (p_58 = (-11); (p_58 != 22); p_58 = safe_add_func_int16_t_s_s(p_58, 6))
                {
                    return l_385;
                }
                if (p_57)
                    break;
                (*l_375) |= p_58;
            }
            (*l_375) ^= (((0xA82D6B21L <= (safe_add_func_uint16_t_u_u(0UL, (((*p_59) <= (p_58 < ((l_376 < ((*p_59) <= ((safe_mod_func_uint32_t_u_u(((*l_395) = (0x02L <= ((*l_394) |= (safe_mod_func_uint8_t_u_u(g_75, (safe_lshift_func_int8_t_s_u((p_59 != p_59), p_57))))))), g_24[2])) > 1L))) > p_58))) == 0x8811L)))) ^ g_91) ^ l_396);
        }
    }
    else
    {
        int *l_398[7] = {&g_86, &g_33, &g_86, &g_33, &g_86, &g_33, &g_86};
        int **l_403 = &g_85;
        char **l_409 = &g_157;
        int i;
        l_400--;
        (*l_403) = &g_86;
        (**l_403) &= (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u((!(func_72(((void*)0 != l_409), g_257) & l_399)))) < l_399), 13)), (g_336[0] || ((safe_mod_func_uint32_t_u_u(p_57, l_412)) | g_24[4]))));
    }
    return &g_86;
}







static int * func_62(unsigned p_63, int p_64, int * p_65, unsigned p_66, short p_67)
{
    char l_204 = (-9L);
    int l_226[6][8][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
    int l_244 = 0x6E526A48L;
    unsigned l_333[7];
    short *l_340 = &g_257;
    short **l_339 = &l_340;
    int **l_362 = (void*)0;
    int ***l_361 = &l_362;
    char l_366[1][5];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_333[i] = 0x82E7542EL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_366[i][j] = (-2L);
    }
    for (g_131 = (-6); (g_131 <= 28); g_131 = safe_add_func_uint16_t_u_u(g_131, 5))
    {
        short *l_194 = &g_26;
        int l_201 = (-7L);
        char *l_266 = &g_259;
        short l_365 = 1L;
        if (((void*)0 == l_194))
        {
            unsigned l_200 = 4UL;
            char *l_234 = &l_204;
            int l_242[9][10] = {{0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}, {0xAEC3AFA7L, 1L, (-10L), (-5L), 0x334A1C84L, 7L, 2L, 0xD9B91490L, 2L, 7L}};
            unsigned char l_276[9];
            int i, j;
            for (i = 0; i < 9; i++)
                l_276[i] = 0x7FL;
            for (p_64 = 0; (p_64 <= (-15)); p_64--)
            {
                int *l_237 = (void*)0;
                int l_254 = (-1L);
                int l_261 = 1L;
                short l_269 = 0xAE06L;
                unsigned char *l_277[7][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                short *l_281 = (void*)0;
                short *l_282 = (void*)0;
                short *l_283 = (void*)0;
                short *l_284 = &g_24[1];
                int ***l_291 = (void*)0;
                int ***l_292 = (void*)0;
                int **l_294 = &l_237;
                int ***l_293 = &l_294;
                int *l_295[5][8][6] = {{{&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}}, {{&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}}, {{&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}}, {{&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}}, {{&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}, {&g_4, &g_4, (void*)0, (void*)0, &l_226[1][6][0], &l_242[6][9]}}};
                int i, j, k;
                for (g_33 = 0; g_33 < 5; g_33 += 1)
                {
                    g_24[g_33] = 0x960CL;
                }
                if (g_123)
                {
                    char *l_199[5][9] = {{&g_123, (void*)0, &g_123, &g_123, &g_123, (void*)0, &g_123, &g_123, (void*)0}, {&g_123, (void*)0, &g_123, &g_123, &g_123, (void*)0, &g_123, &g_123, (void*)0}, {&g_123, (void*)0, &g_123, &g_123, &g_123, (void*)0, &g_123, &g_123, (void*)0}, {&g_123, (void*)0, &g_123, &g_123, &g_123, (void*)0, &g_123, &g_123, (void*)0}, {&g_123, (void*)0, &g_123, &g_123, &g_123, (void*)0, &g_123, &g_123, (void*)0}};
                    int l_233 = (-5L);
                    int **l_239 = &l_237;
                    int l_243 = 6L;
                    int *l_248 = &l_233;
                    int i, j;
                    g_33 ^= (*p_65);
                    if ((safe_lshift_func_uint8_t_u_u(((l_201 = (l_200 = (-2L))) & (safe_div_func_uint32_t_u_u(func_72(l_204, p_63), 0x36CA140FL))), (safe_rshift_func_uint8_t_u_s(g_3, 6)))))
                    {
                        unsigned short *l_211 = &g_75;
                        int l_224 = 0L;
                        unsigned char *l_225 = &g_91;
                        int *l_238[1][10][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_238[i][j][k] = &g_86;
                            }
                        }
                        l_226[1][6][0] = ((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_66, (++(*l_211)))), 15)) ^ (0x43L < ((p_63 = (p_67 < ((*l_225) = (p_64 != (g_123 = (safe_add_func_uint32_t_u_u((3UL == (safe_div_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u(g_131, 1L)) != (g_188 != g_24[4])) > 0x3B5C28C5L) == 65535UL), l_224)) > 4294967295UL), 0x62B8E9E0L))), 0x83AE85CDL))))))) > 0xC1073954L)));
                        l_201 = (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_72(l_233, l_233), p_67)), 4)) <= p_64) >= (l_199[4][7] == l_234)), (safe_rshift_func_int8_t_s_u(((l_237 == &g_4) & 7L), 5))));
                        if (g_26)
                            break;
                        g_86 = (*p_65);
                    }
                    else
                    {
                        l_233 &= (*p_65);
                    }
                    (*l_239) = &g_86;
                    if ((*p_65))
                    {
                        int *l_240 = &g_86;
                        int *l_241[4][10][6] = {{{&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}}, {{&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}}, {{&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}}, {{&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}, {&l_226[1][6][0], &l_201, &l_233, &g_86, &g_86, (void*)0}}};
                        int i, j, k;
                        --g_245[4][2];
                        return &g_33;
                    }
                    else
                    {
                        int *l_249 = &g_33;
                        int l_250[5] = {0x989C7748L, 0xF97C4F4EL, 0x989C7748L, 0xF97C4F4EL, 0x989C7748L};
                        int *l_251 = &g_33;
                        int *l_252 = &l_226[1][6][0];
                        int *l_253[5];
                        short l_255 = 0L;
                        int l_258 = 0xE3CE139AL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_253[i] = &l_243;
                        g_262++;
                    }
                }
                else
                {
                    char *l_265 = &g_259;
                    char **l_267 = &l_266;
                    int *l_268[6][10] = {{&g_4, &l_226[1][6][0], &l_254, &l_254, &l_261, &g_4, &l_261, &l_254, &l_254, &l_226[1][6][0]}, {&g_4, &l_226[1][6][0], &l_254, &l_254, &l_261, &g_4, &l_261, &l_254, &l_254, &l_226[1][6][0]}, {&g_4, &l_226[1][6][0], &l_254, &l_254, &l_261, &g_4, &l_261, &l_254, &l_254, &l_226[1][6][0]}, {&g_4, &l_226[1][6][0], &l_254, &l_254, &l_261, &g_4, &l_261, &l_254, &l_254, &l_226[1][6][0]}, {&g_4, &l_226[1][6][0], &l_254, &l_254, &l_261, &g_4, &l_261, &l_254, &l_254, &l_226[1][6][0]}, {&g_4, &l_226[1][6][0], &l_254, &l_254, &l_261, &g_4, &l_261, &l_254, &l_254, &l_226[1][6][0]}};
                    int i, j;
                    l_201 = (l_265 == ((*l_267) = l_266));
                }
                l_242[0][7] = (l_269 | func_72(func_72(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((g_278[0][8] = (g_91 |= l_276[7])) && (safe_add_func_int8_t_s_s((((*l_284) = p_67) != (p_63 & (safe_add_func_int32_t_s_s((((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((&p_65 != ((*l_293) = &g_85)) || (l_242[5][1] = (l_242[6][5] <= (0x84C55312L ^ func_72(g_260, g_123))))), 0x3210L)), p_63)) && 255UL) | l_201), l_201)))), 0x08L))) < l_226[1][6][0]), (*p_65))), g_4)), 3)) <= 0x16275ACEL), p_64), p_66));
            }
        }
        else
        {
            char *l_313 = &l_204;
            int l_317 = (-1L);
            int *l_321 = &l_317;
            unsigned char l_345[7] = {0xDDL, 0x57L, 0xDDL, 0x57L, 0xDDL, 0x57L, 0xDDL};
            int i;
            for (g_75 = 0; (g_75 <= 0); g_75 += 1)
            {
                unsigned short *l_308 = &g_262;
                int *l_314 = &l_201;
                unsigned char *l_315 = (void*)0;
                unsigned char *l_316 = &g_91;
                int *l_318 = &l_226[5][3][0];
                int **l_322 = &l_321;
                int l_351 = (-1L);
                (*l_318) &= ((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((-1L), (((*l_316) = (((*l_314) = (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*l_308) = (safe_rshift_func_uint16_t_u_u(0UL, p_63))), ((safe_add_func_int32_t_s_s((g_33 = (*p_65)), ((safe_sub_func_int32_t_s_s((*p_65), g_278[0][6])) | 1L))) == (l_313 == &g_123)))), (-1L)))) >= (-1L))) & 253UL))), l_317)) | g_26), l_317)) || p_63);
                (*l_318) &= (*l_314);
                for (g_259 = 0; (g_259 <= 4); g_259 += 1)
                {
                    int i, j, k;
                    l_226[g_259][(g_259 + 2)][g_75] = 0xC77BECD9L;
                    for (g_33 = 0; (g_33 <= 0); g_33 += 1)
                    {
                        int **l_319 = &l_318;
                        int **l_320 = &g_85;
                        (*l_320) = ((*l_319) = &p_64);
                        return &g_4;
                    }
                }
                (*l_322) = l_318;
                for (p_63 = 0; (p_63 <= 0); p_63 += 1)
                {
                    unsigned short *l_327 = &g_75;
                    unsigned short **l_328 = &l_327;
                    short *l_334 = &g_24[3];
                    short *l_335 = &g_257;
                    unsigned l_344 = 1UL;
                    int *l_348 = &g_86;
                    int *l_349 = &l_317;
                    int *l_350[1][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_350[i][j] = (void*)0;
                    }
                    g_336[0] &= ((safe_lshift_func_int8_t_s_u((l_226[(g_75 + 3)][(g_75 + 5)][g_75] && (((safe_rshift_func_uint8_t_u_s((*l_321), 7)) == (((&g_43 != ((*l_328) = l_327)) < p_63) || func_72(((*l_334) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_66, l_333[3])), 0xAEL))), ((((*l_335) = 0x049FL) & 65529UL) <= (*p_65))))) < (*p_65))), g_40)) < 0UL);
                    for (l_201 = (-20); (l_201 >= (-24)); l_201--)
                    {
                        short ***l_341 = (void*)0;
                        short ***l_342[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_342[i] = &l_339;
                        g_343 = l_339;
                        l_344 = l_226[(g_75 + 3)][(g_75 + 5)][g_75];
                        l_345[1]--;
                        if ((*p_65))
                            break;
                    }
                    g_352++;
                }
            }
            for (g_33 = (-7); (g_33 == 23); g_33 = safe_add_func_int32_t_s_s(g_33, 8))
            {
                unsigned char l_359[5] = {252UL, 7UL, 252UL, 7UL, 252UL};
                unsigned char *l_367 = &l_359[0];
                int *l_368[3][5] = {{&l_201, &g_4, &l_201, &g_4, &l_201}, {&l_201, &g_4, &l_201, &g_4, &l_201}, {&l_201, &g_4, &l_201, &g_4, &l_201}};
                int i, j;
                for (g_75 = 0; (g_75 == 8); g_75 = safe_add_func_uint8_t_u_u(g_75, 1))
                {
                    int **l_360 = &g_85;
                    (*l_321) ^= l_359[2];
                    (*l_360) = &p_64;
                }
                p_64 = ((((*l_321) = (g_43 <= (l_361 != (void*)0))) > ((safe_div_func_int8_t_s_s((l_365 < l_366[0][0]), ((*l_367) = (g_24[4] || p_67)))) ^ 0xA28F760DL)) > ((void*)0 != &g_157));
            }
        }
    }
    return &g_86;
}







static int * func_68(unsigned short p_69, unsigned p_70, int * p_71)
{
    int **l_89 = &g_85;
    short *l_118 = &g_24[4];
    unsigned char *l_119 = (void*)0;
    unsigned char *l_120 = &g_91;
    unsigned *l_151[8];
    int *l_181 = (void*)0;
    int l_182[1];
    int *l_183 = &g_86;
    int *l_184 = &l_182[0];
    int *l_185 = &l_182[0];
    int *l_186 = &l_182[0];
    int *l_187[6] = {&l_182[0], &l_182[0], &l_182[0], &l_182[0], &l_182[0], &l_182[0]};
    int *l_191[10];
    int i;
    for (i = 0; i < 8; i++)
        l_151[i] = &g_131;
    for (i = 0; i < 1; i++)
        l_182[i] = 5L;
    for (i = 0; i < 10; i++)
        l_191[i] = &g_4;
    for (p_70 = 0; (p_70 != 24); ++p_70)
    {
        short l_94 = 0xB0F6L;
        for (g_33 = 0; (g_33 == (-9)); g_33 = safe_sub_func_int16_t_s_s(g_33, 6))
        {
            int *l_84 = &g_33;
            int **l_83[2][3];
            unsigned char *l_90 = &g_91;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_83[i][j] = &l_84;
            }
            g_85 = p_71;
            g_3 = ((*p_71) >= (((*l_90) = (safe_add_func_int32_t_s_s((*g_85), (l_89 != (void*)0)))) <= (safe_mul_func_uint16_t_u_u((*l_84), (l_94 <= (*p_71))))));
            for (g_75 = 0; (g_75 < 31); ++g_75)
            {
                int *l_97[1][1][7] = {{{(void*)0, &g_86, (void*)0, &g_86, (void*)0, &g_86, (void*)0}}};
                int i, j, k;
                g_85 = p_71;
                (*l_89) = l_97[0][0][2];
            }
        }
    }
    g_86 &= (safe_div_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(p_69, (((~(safe_mod_func_int8_t_s_s(func_72((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((-6L), 0)) || g_3) || ((*l_120) |= ((&p_71 != l_89) & ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((&g_24[4] == l_118) || g_28) < (&p_71 != &g_85)), (*p_71))), p_69)), g_28)) <= (-8L))))), p_70)), p_69), g_4))) > 0x04L) == p_70))) & 0xC6L) & g_24[4]), 0x03L));
    for (g_86 = 0; (g_86 <= 4); g_86 += 1)
    {
        char l_126 = 1L;
        int *l_134 = &g_86;
        int l_150[6][3][7] = {{{3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}}, {{3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}}, {{3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}}, {{3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}}, {{3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}}, {{3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}, {3L, 0xAE5966A8L, 0xAE5966A8L, 3L, (-1L), 1L, 0x8B8653E9L}}};
        int *l_160[1][3][2] = {{{&l_150[4][2][6], &l_150[5][2][3]}, {&l_150[4][2][6], &l_150[5][2][3]}, {&l_150[4][2][6], &l_150[5][2][3]}}};
        int i, j, k;
        for (g_91 = 0; (g_91 <= 4); g_91 += 1)
        {
            char l_147 = 0x09L;
            for (g_33 = 0; (g_33 <= 4); g_33 += 1)
            {
                char *l_121 = (void*)0;
                char *l_122[1];
                int l_124 = 0x0FE05587L;
                int l_149 = 0x5219C01FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_122[i] = &g_123;
                if (g_24[g_86])
                    break;
                if (((l_124 = g_43) == 0xFEL))
                {
                    unsigned char l_125[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_125[i] = 4UL;
                    g_3 ^= l_125[1];
                }
                else
                {
                    int *l_127 = (void*)0;
                    int *l_128 = &l_124;
                    int *l_129 = &l_124;
                    int *l_130[4][8] = {{&g_86, &g_86, (void*)0, &g_86, &g_86, &l_124, &g_86, &g_86}, {&g_86, &g_86, (void*)0, &g_86, &g_86, &l_124, &g_86, &g_86}, {&g_86, &g_86, (void*)0, &g_86, &g_86, &l_124, &g_86, &g_86}, {&g_86, &g_86, (void*)0, &g_86, &g_86, &l_124, &g_86, &g_86}};
                    unsigned short *l_139 = (void*)0;
                    unsigned short *l_140[9][10] = {{&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}, {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, (void*)0, &g_75}};
                    unsigned *l_148[10][8][3] = {{{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}, {{(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}, {(void*)0, &g_131, &g_131}}};
                    int i, j, k;
                    g_131++;
                    (*l_128) |= (*p_71);
                    for (g_131 = 0; (g_131 <= 4); g_131 += 1)
                    {
                        (*l_89) = &g_86;
                        return l_134;
                    }
                    l_149 |= (+(safe_div_func_uint32_t_u_u((((0x20F6L != ((safe_div_func_uint16_t_u_u(p_69, (g_75 = (*l_128)))) || ((safe_div_func_int32_t_s_s(((*l_134) == (((safe_div_func_int8_t_s_s(g_86, (safe_div_func_int16_t_s_s(((g_4 && (g_43 | l_147)) < (g_131 = (*l_134))), 0xD89BL)))) <= 4L) == g_24[4])), 0xC885B340L)) <= (*p_71)))) < (*p_71)) < (-1L)), 0xEC7F2D8AL)));
                }
                if (l_147)
                    continue;
                g_3 &= (l_150[4][2][6] && g_131);
            }
            (*p_71) = (*p_71);
        }
        if (((*p_71) = (l_151[6] == l_151[6])))
        {
            volatile int *l_153 = &g_3;
            volatile int **l_152 = &l_153;
            char **l_154 = (void*)0;
            char *l_156[2][2] = {{&l_126, &l_126}, {&l_126, &l_126}};
            char **l_155[3][10][2] = {{{&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}}, {{&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}}, {{&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}, {&l_156[1][1], &l_156[1][1]}}};
            unsigned l_171 = 0x80240E7FL;
            int i, j, k;
            (*l_152) = &g_3;
            if (((((g_157 = &l_126) != &g_40) < (p_70 || ((&g_85 != &p_71) > (l_160[0][0][1] != &g_4)))) < ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_26 & (safe_div_func_int32_t_s_s(((*p_71) = (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((g_123 = func_72(((g_91 ^= (0xA679L | (*l_153))) ^ 0xEAL), p_70)), 0)) >= (*l_134)), p_69))), l_171))), g_28)), 0xE878L)) & l_171)))
            {
                char *l_179 = &g_123;
                if (g_75)
                    break;
                (**l_152) = (safe_div_func_int8_t_s_s((0x0083L & 0xA23DL), ((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s(g_4)) & (func_72(g_91, g_43) == p_70)) > (&g_123 == (l_179 = l_179))), g_24[4])) & p_70)));
            }
            else
            {
                short l_180 = 0xA92FL;
                (*p_71) ^= l_180;
                (*l_153) = (*p_71);
                (*l_89) = &g_4;
                (*l_89) = l_181;
            }
        }
        else
        {
            l_160[0][0][1] = &g_33;
        }
    }
    g_188--;
    return l_191[4];
}







static unsigned short func_72(short p_73, int p_74)
{
    int *l_76 = &g_33;
    (*l_76) = g_75;
    return p_73;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_245[i][j], "g_245[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_278[i][j], "g_278[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_336[i], "g_336[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_438[i], "g_438[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_922[i][j][k], "g_922[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_928[i][j], "g_928[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1075[i][j], "g_1075[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1076, "g_1076", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1090[i][j], "g_1090[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
