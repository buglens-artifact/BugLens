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



static volatile int g_2 = 0xD313DD33L;
static int g_3 = 0x9BDBA76AL;
static int g_6 = 0x888ADAE8L;
static int *g_36 = &g_3;
static short g_47 = 0x25BBL;
static short g_56 = 4L;
static short *g_74[1] = {(void*)0};
static int g_105 = (-5L);
static int ***g_108 = (void*)0;
static int g_111 = 0x61DB4512L;
static char g_141 = 0x71L;
static unsigned short g_156 = 6UL;
static int g_165 = 0x3DC0AD4AL;
static unsigned g_178[3] = {0x94B15D7FL, 0x94B15D7FL, 0x94B15D7FL};
static int g_196 = 2L;
static unsigned short *g_210[10][7] = {{&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}, {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156}};
static unsigned short **g_209 = &g_210[8][4];
static unsigned char g_218 = 1UL;
static int g_221 = 0L;
static unsigned short g_257 = 0x9ADCL;
static char *g_281 = &g_141;
static char **g_280 = &g_281;
static unsigned g_324[1][5][9] = {{{0xF780B903L, 0xE9C75F3BL, 6UL, 0x2B212A1BL, 0xCDF45173L, 0x2B212A1BL, 6UL, 0xE9C75F3BL, 0xF780B903L}, {0xF780B903L, 0xE9C75F3BL, 6UL, 0x2B212A1BL, 0xCDF45173L, 0x2B212A1BL, 6UL, 0xE9C75F3BL, 0xF780B903L}, {0xF780B903L, 0xE9C75F3BL, 6UL, 0x2B212A1BL, 0xCDF45173L, 0x2B212A1BL, 6UL, 0xE9C75F3BL, 0xF780B903L}, {0xF780B903L, 0xE9C75F3BL, 6UL, 0x2B212A1BL, 0xCDF45173L, 0x2B212A1BL, 6UL, 0xE9C75F3BL, 0xF780B903L}, {0xF780B903L, 0xE9C75F3BL, 6UL, 0x2B212A1BL, 0xCDF45173L, 0x2B212A1BL, 6UL, 0xE9C75F3BL, 0xF780B903L}}};
static volatile int *g_328 = &g_2;
static unsigned g_330[8] = {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL};
static int *g_331 = &g_196;
static unsigned *g_371 = &g_330[3];
static unsigned **g_370 = &g_371;
static volatile short g_426 = 0x8FD9L;



static unsigned short func_1(void);
static int * func_9(int p_10, int * p_11);
static short func_12(int * p_13, unsigned p_14, char p_15, unsigned p_16, int * p_17);
static int * func_18(unsigned char p_19, unsigned p_20, short p_21);
static short func_26(unsigned char p_27, int * p_28);
static int * func_30(int * p_31, unsigned p_32, int * p_33, unsigned char p_34, int p_35);
static int * func_41(int p_42, unsigned p_43);
static short func_48(unsigned char p_49, int p_50, unsigned p_51, int p_52, short * p_53);
static int func_66(short p_67, unsigned short p_68);
static unsigned short func_72(short * p_73);
static unsigned short func_1(void)
{
    unsigned l_25 = 0xCA70051EL;
    int *l_202[3];
    int *l_204 = &g_6;
    unsigned l_425 = 3UL;
    int *l_428 = &g_165;
    unsigned char *l_434 = &g_218;
    short *l_441[10][9] = {{(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}, {(void*)0, &g_56, (void*)0, &g_56, &g_47, &g_56, &g_56, &g_56, &g_56}};
    unsigned l_442 = 0xDE2573CCL;
    short *l_444 = &g_56;
    int *l_445 = &g_6;
    int **l_446 = &l_445;
    unsigned char *l_449 = &g_218;
    unsigned l_450 = 0xEAD032E2L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_202[i] = &g_165;
    for (g_3 = 0; (g_3 > 17); g_3++)
    {
        unsigned char l_29 = 0xD8L;
        char l_203 = 0x0DL;
        int *l_206 = &g_196;
        unsigned short l_315 = 2UL;
        short l_325 = (-3L);
        int l_356 = 0x1EE3FF3CL;
        unsigned short ***l_369 = &g_209;
        int **l_429[2][5] = {{&g_36, &l_202[0], &g_36, &l_202[0], &g_36}, {&g_36, &l_202[0], &g_36, &l_202[0], &g_36}};
        int i, j;
        for (g_6 = 15; (g_6 <= 21); ++g_6)
        {
            int l_22 = 0x4F3F7E81L;
            int **l_201[2];
            int l_346 = 0x626B8E0BL;
            int i;
            for (i = 0; i < 2; i++)
                l_201[i] = &g_36;
        }
    }
    (*l_446) = func_30(func_41((safe_lshift_func_int16_t_s_u(((*l_428) = ((*l_444) = (((safe_mod_func_int32_t_s_s((((*l_434) = g_105) <= (*g_281)), ((safe_rshift_func_int16_t_s_u((*l_204), (0x2AAEL && (safe_mod_func_uint8_t_u_u(((*l_428) || (safe_lshift_func_uint16_t_u_s((*l_204), 2))), (*l_204)))))) ^ (l_442 = (*l_428))))) >= (safe_unary_minus_func_int8_t_s(((((l_441[5][1] == l_444) ^ g_165) || (*l_204)) || 0x2B05L)))) || (*l_428)))), 2)), g_156), (*g_371), l_445, g_2, g_156);

    ;
    (**l_446) = ((safe_add_func_int32_t_s_s((l_434 == l_449), l_450)) >= (1UL > 4294967286UL));
    return (**l_446);
}







static int * func_9(int p_10, int * p_11)
{
    int *l_214 = &g_196;
    short l_236 = 8L;
    unsigned *l_274 = (void*)0;
    unsigned **l_273 = &l_274;
    int **l_307[4][10][1] = {{{&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}}, {{&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}}, {{&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}}, {{&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}, {&l_214}}};
    int i, j, k;
    for (g_165 = 0; (g_165 != (-18)); g_165 = safe_sub_func_uint32_t_u_u(g_165, 7))
    {
        unsigned short ***l_211 = &g_209;
        int l_212[6][7] = {{(-10L), 0x18DF6252L, 0x001B9E98L, 0x18DF6252L, (-10L), 0L, 0x001B9E98L}, {(-10L), 0x18DF6252L, 0x001B9E98L, 0x18DF6252L, (-10L), 0L, 0x001B9E98L}, {(-10L), 0x18DF6252L, 0x001B9E98L, 0x18DF6252L, (-10L), 0L, 0x001B9E98L}, {(-10L), 0x18DF6252L, 0x001B9E98L, 0x18DF6252L, (-10L), 0L, 0x001B9E98L}, {(-10L), 0x18DF6252L, 0x001B9E98L, 0x18DF6252L, (-10L), 0L, 0x001B9E98L}, {(-10L), 0x18DF6252L, 0x001B9E98L, 0x18DF6252L, (-10L), 0L, 0x001B9E98L}};
        int i, j;
        (*l_211) = g_209;
        if (l_212[3][3])
            break;
    }
    for (p_10 = 2; (p_10 >= 0); p_10 -= 1)
    {
        int *l_213 = &g_111;
        unsigned char *l_217 = &g_218;
        short *l_222 = (void*)0;
        int *l_243[7][2][9] = {{{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}, {{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}, {{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}, {{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}, {{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}, {{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}, {{&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}, {&g_3, &g_196, (void*)0, (void*)0, &g_3, &g_6, &g_165, &g_105, &g_165}}};
        int i, j, k;
        if ((*p_11))
        {
            unsigned l_223 = 4294967289UL;
            int l_239[9] = {0x004CB647L, 0xDED41DA0L, 0x004CB647L, 0xDED41DA0L, 0x004CB647L, 0xDED41DA0L, 0x004CB647L, 0xDED41DA0L, 0x004CB647L};
            int *l_241 = &l_239[1];
            unsigned short ***l_244 = (void*)0;
            int **l_245 = &l_241;
            int i;
            (*p_11) = (*p_11);
            if ((*p_11))
            {
                char l_240 = 0xD6L;
                l_241 = &g_165;

                ;
            }
            else
            {
                int **l_242[6][3] = {{&l_241, &l_214, &g_36}, {&l_241, &l_214, &g_36}, {&l_241, &l_214, &g_36}, {&l_241, &l_214, &g_36}, {&l_241, &l_214, &g_36}, {&l_241, &l_214, &g_36}};
                int i, j;
                (*l_214) = 0x2FF0CECDL;
                (*l_241) = ((l_243[2][0][3] = p_11) != (void*)0);
                if ((*p_11))
                    break;
            }

            ;
            (*l_245) = &g_6;

            ;
        }
        else
        {
            int *l_262 = &g_196;
            unsigned char l_296 = 255UL;
            unsigned ***l_303 = &l_273;
            if ((~(~0xBDC9AC41L)))
            {
                unsigned l_248[1];
                int l_251[4] = {0x7E851782L, 0xF7B8AB57L, 0x7E851782L, 0xF7B8AB57L};
                unsigned short l_267 = 65531UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_248[i] = 0xCA4C6F49L;
                for (g_156 = 0; (g_156 <= 0); g_156 += 1)
                {
                    unsigned char l_249 = 0xA0L;
                    for (g_218 = 0; (g_218 <= 2); g_218 += 1)
                    {
                        short *l_250[10][2][10] = {{{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}, {{&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}, {&g_47, (void*)0, &g_47, &l_236, &l_236, &g_47, &l_236, (void*)0, (void*)0, (void*)0}}};
                        unsigned short *l_256 = &g_257;
                        char *l_260 = &g_141;
                        int l_261 = 0x64FEF692L;
                        int **l_263 = &l_243[6][1][7];
                        int i, j, k;
                        (*p_11) = (safe_div_func_uint16_t_u_u(((~(l_248[0] = 0xAC21EE26L)) == (-4L)), (l_251[1] = l_249)));
                        (*l_263) = func_30(func_41(l_249, ((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(((((*l_256) = p_10) > (&g_209 == (void*)0)) && ((*l_260) = (+(safe_rshift_func_uint16_t_u_s(l_249, 1))))), l_251[1])) < 0L) <= l_251[3]), l_261)) && p_10)), g_165, l_262, l_248[0], l_261);
                    }
                }
                (*p_11) = g_257;
                if (((safe_sub_func_int16_t_s_s(l_248[0], (*l_214))) == p_10))
                {
                    int **l_266 = &l_262;
                    (*l_266) = p_11;
                    for (g_156 = 0; (g_156 <= 0); g_156 += 1)
                    {
                        unsigned l_268 = 4294967295UL;
                        (*l_266) = func_41((g_111 = g_156), l_267);

                        ;
                        p_11 = l_213;

                        ;
                        (*l_214) = l_268;
                    }

                    ;
                    ;
                }
                else
                {
                    int *l_269[2][3];
                    int **l_270 = &g_36;
                    short *l_271 = (void*)0;
                    short *l_272 = &g_56;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_269[i][j] = &g_6;
                    }
                    (*l_270) = l_269[1][2];

                    ;
                    for (g_111 = 0; (g_111 >= 0); g_111 -= 1)
                    {
                        int i, j;
                        if ((*l_214))
                            break;
                        return l_269[(g_111 + 1)][(g_111 + 2)];


                    }
                    if ((((*l_272) = p_10) < l_267))
                    {
                        unsigned ***l_275 = &l_273;
                        int l_276 = (-4L);
                        (*l_275) = l_273;
                        if ((*g_36))
                            continue;
                        if (l_276)
                            continue;
                    }
                    else
                    {
                        char *l_278 = &g_141;
                        char **l_277[10] = {&l_278, &l_278, (void*)0, (void*)0, &l_278, &l_278, &l_278, (void*)0, (void*)0, &l_278};
                        char ***l_279[4][1];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_279[i][j] = &l_277[1];
                        }
                        (*l_270) = p_11;

                        ;
                        g_280 = l_277[5];

                        ;
                        (*p_11) = (safe_rshift_func_int16_t_s_u((((*l_278) = 0x6EL) != 6UL), 3));
                        if ((*p_11))
                            break;

                    }

                    ;

                    l_214 = ((*l_270) = func_41(p_10, (safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(((*l_262) & (safe_add_func_int32_t_s_s(((((void*)0 != &g_111) || 8UL) > p_10), ((*l_262) | p_10)))), (~g_111))), 1L)), (*l_214))) && (-8L)), p_10))));

                    ;
                    ;
                }

                ;
                ;

                ;
                if (((void*)0 != &g_210[1][5]))
                {
                    short l_294 = 0x1E67L;
                    short *l_295 = &l_236;
                    int *l_297 = (void*)0;
                    int **l_298 = &l_297;
                    (*p_11) = (*p_11);
                    (*p_11) = (((((*l_295) = ((*l_214) <= l_294)) | 0xA1F3L) < 0xE3D0E51CL) != l_294);
                    (*l_298) = l_297;
                }
                else
                {
                    unsigned short *l_304 = &g_156;
                    int l_305[7][4] = {{(-1L), 0xA98145AFL, (-1L), 0L}, {(-1L), 0xA98145AFL, (-1L), 0L}, {(-1L), 0xA98145AFL, (-1L), 0L}, {(-1L), 0xA98145AFL, (-1L), 0L}, {(-1L), 0xA98145AFL, (-1L), 0L}, {(-1L), 0xA98145AFL, (-1L), 0L}, {(-1L), 0xA98145AFL, (-1L), 0L}};
                    int i, j;
                    l_251[1] = ((*p_11) = ((safe_sub_func_int8_t_s_s(0x39L, ((safe_sub_func_uint32_t_u_u(((void*)0 != l_303), l_267)) > 0x85L))) != (~p_10)));
                    l_305[4][0] = (!((*p_11) = (((*l_304) = ((((void*)0 != &g_218) <= (g_178[p_10] = g_165)) && 0xBCE7L)) | p_10)));
                }
            }
            else
            {
                unsigned short ***l_306 = &g_209;
                (*l_306) = (void*)0;

                ;
            }

            ;
            ;
            ;
            ;

        }

        ;
        ;
        ;

        return l_274;


    }



    g_36 = (void*)0;

    ;
    return p_11;


}







static short func_12(int * p_13, unsigned p_14, char p_15, unsigned p_16, int * p_17)
{
    int *l_205 = (void*)0;
    p_13 = l_205;

    ;
    return p_16;
}







static int * func_18(unsigned char p_19, unsigned p_20, short p_21)
{
    int *l_145 = &g_6;
    int l_166 = (-2L);
    short *l_179 = &g_56;
    int **l_188 = &l_145;
    int ***l_187 = &l_188;
    unsigned char l_191 = 0xE7L;
    char l_192 = 0x62L;
    char *l_195 = &l_192;
    unsigned short *l_197 = &g_156;
    int *l_198 = &l_166;
    int *l_199[8][10][3] = {{{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}, {{&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}, {&g_105, &g_6, &g_6}}};
    int *l_200 = &g_196;
    int i, j, k;
    if (p_19)
    {
        char *l_140[4][2][10] = {{{&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}, {&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}}, {{&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}, {&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}}, {{&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}, {&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}}, {{&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}, {&g_141, &g_141, &g_141, (void*)0, &g_141, &g_141, (void*)0, &g_141, &g_141, &g_141}}};
        int l_142 = 0x363805CAL;
        int l_146[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_146[i] = 0L;
        l_146[0] = (safe_div_func_uint32_t_u_u((((l_142 = (1L > 65532UL)) >= (safe_div_func_uint16_t_u_u(func_26(p_19, l_145), p_20))) > p_19), (*g_36)));
    }
    else
    {
        int *l_153 = &g_111;
        unsigned short *l_154 = (void*)0;
        unsigned short *l_155 = &g_156;
        int *l_157 = &g_105;
        int l_158 = 0xB728ABA7L;
        short *l_163 = &g_56;
        int *l_164[1];
        int i;
        for (i = 0; i < 1; i++)
            l_164[i] = &g_165;
        l_166 = ((*l_145) & (p_21 = ((((g_165 = (safe_lshift_func_int16_t_s_u((((l_158 = ((*l_157) = p_21)) < (((*l_163) = ((safe_sub_func_uint16_t_u_u(p_19, (p_21 == (safe_lshift_func_int16_t_s_u(((p_21 <= (*l_145)) ^ (*l_145)), 6))))) != g_141)) == 0xFA1EL)) && 7L), g_6))) & g_156) < p_19) != 9L)));
    }
    for (p_21 = 0; (p_21 >= 14); p_21++)
    {
        short l_171[5][2] = {{1L, 0x7550L}, {1L, 0x7550L}, {1L, 0x7550L}, {1L, 0x7550L}, {1L, 0x7550L}};
        int l_176 = (-1L);
        unsigned *l_177 = &g_178[0];
        int **l_180[8] = {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36, &g_36};
        int i, j;
        l_145 = func_41(((safe_add_func_int32_t_s_s(func_48(g_47, l_171[3][0], ((*l_177) = ((safe_sub_func_int32_t_s_s((p_21 == l_176), p_20)) < (l_171[3][0] == (4294967295UL >= (g_105 = (l_166 = l_171[3][0])))))), p_21, l_179), p_21)) <= g_141), g_165);
        if (p_19)
            break;
    }


    l_166 = (safe_sub_func_int16_t_s_s((*l_145), ((*l_197) = (safe_rshift_func_int8_t_s_u((func_48((safe_rshift_func_int16_t_s_s((*l_145), 11)), (0xA3L <= (((*l_195) = ((l_187 == &l_188) ^ (***l_187))) || (-1L))), g_196, (*l_145), l_179) ^ g_165), g_156)))));
    return l_200;


}







static short func_26(unsigned char p_27, int * p_28)
{
    unsigned short l_40 = 65529UL;
    short *l_55 = &g_56;
    int *l_135 = &g_105;
    int l_136 = 0x17E09DBBL;
    int **l_137 = &g_36;
    for (p_27 = 0; (p_27 < 10); p_27 = safe_add_func_uint32_t_u_u(p_27, 1))
    {
        short *l_46 = &g_47;
        int l_54 = 0L;
        int ***l_107 = (void*)0;
        unsigned l_109[9][4] = {{18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}, {18446744073709551612UL, 0x511E0418L, 18446744073709551615UL, 0x511E0418L}};
        int *l_110 = &g_111;
        int l_132[9][9] = {{1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}, {1L, (-1L), 0xA34F7B72L, 0x5F177B59L, 1L, 0x758D62C3L, (-3L), 0x758D62C3L, 1L}};
        int **l_133 = (void*)0;
        int **l_134[1][6][6] = {{{&g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36, &g_36, &g_36, &g_36}}};
        int i, j, k;
        if (l_40)
            break;
    }
    l_137 = &p_28;

    ;
    (*l_137) = (void*)0;

    ;
    (*l_135) = (*g_36);
    return (*l_135);
}







static int * func_30(int * p_31, unsigned p_32, int * p_33, unsigned char p_34, int p_35)
{
    int *l_37 = &g_3;
    return l_37;


}







static int * func_41(int p_42, unsigned p_43)
{
    int **l_116 = &g_36;
    int **l_117[7][3][3];
    unsigned char l_129 = 0xB7L;
    short *l_130 = &g_56;
    int *l_131 = &g_105;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_117[i][j][k] = &g_36;
        }
    }
    for (g_111 = 0; (g_111 > 1); g_111++)
    {
        int l_118 = 0L;
        short *l_121 = &g_47;
        int **l_126 = (void*)0;
        int ***l_127 = &l_126;
        int **l_128 = &g_36;
        l_118 = (safe_lshift_func_int16_t_s_s((func_48((l_116 != l_117[4][2][1]), l_118, (safe_lshift_func_uint8_t_u_u((l_121 != &g_47), 0)), (((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((*l_127) = l_126) == l_128), p_43)) & g_6), 8L)) <= l_129) | 0xF9L), l_130) & 0x93BAL), 6));
        (*l_128) = func_30(&g_3, p_43, l_131, g_3, p_43);

        ;
        if ((*g_36))
            continue;
    }
    return &g_6;


}







static short func_48(unsigned char p_49, int p_50, unsigned p_51, int p_52, short * p_53)
{
    char l_87 = 0x75L;
    int *l_104[1][8][4] = {{{(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}, {(void*)0, (void*)0, &g_6, &g_105}}};
    unsigned l_106[7] = {18446744073709551612UL, 18446744073709551612UL, 0UL, 18446744073709551612UL, 18446744073709551612UL, 0UL, 18446744073709551612UL};
    int i, j, k;
    for (p_51 = 2; (p_51 >= 47); p_51 = safe_add_func_int8_t_s_s(p_51, 9))
    {
        unsigned l_71[8] = {4UL, 4UL, 0x63978472L, 4UL, 4UL, 0x63978472L, 4UL, 4UL};
        int l_88 = 0L;
        int i;
        for (p_50 = 0; (p_50 == (-23)); p_50 = safe_sub_func_int16_t_s_s(p_50, 6))
        {
            int **l_61 = &g_36;
            unsigned *l_101 = &l_71[3];
            int l_102 = (-5L);
            (*l_61) = &p_52;

            ;
            if ((safe_sub_func_int16_t_s_s((((l_87 = ((safe_add_func_int16_t_s_s((!(g_6 & func_66((safe_mod_func_int16_t_s_s((l_71[3] <= func_72(g_74[0])), l_71[7])), (g_3 && g_3)))), 0UL)) & 0xEBC5L)) >= l_88) != 0x6CL), 65526UL)))
            {
                int *l_89 = &g_3;
                unsigned *l_90 = &l_71[3];
                (*l_61) = func_30(l_89, ((*l_90) = (0xFCL | p_49)), func_30(&p_52, func_66((*p_53), (g_6 == (safe_add_func_uint16_t_u_u(((-1L) != func_72(&g_56)), g_56)))), &g_6, l_87, g_6), g_6, g_3);

                ;
            }
            else
            {
                int l_93[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_93[i] = (-8L);
                return l_93[0];


            }

            ;
            for (g_56 = 0; (g_56 >= 0); g_56 -= 1)
            {
                int ***l_94 = &l_61;
                int *l_103 = &l_88;
                (*l_103) = ((~(g_3 && ((((((((*l_94) = l_61) == (void*)0) < g_6) & (1L && ((((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(g_3, g_56)), (l_101 != (void*)0))) > l_102), l_102)) < g_56) >= 0x19L) & p_51))) | 0x82L) == g_56) & l_87))) < p_50);
            }
        }
    }
    l_106[6] = p_50;
    return (*p_53);
}







static int func_66(short p_67, unsigned short p_68)
{
    char l_81 = 0xBBL;
    short *l_86 = &g_56;
    for (p_68 = 0; (p_68 <= 0); p_68 += 1)
    {
        int *l_76[6] = {&g_6, &g_6, &g_3, &g_6, &g_6, &g_3};
        int **l_77 = &l_76[4];
        int i;
        (*l_77) = l_76[4];
        for (g_56 = 0; (g_56 >= 0); g_56 -= 1)
        {
            unsigned char l_78 = 0x58L;
            if ((*g_36))
                break;
            (*g_36) = l_78;
            if ((*g_36))
                break;
        }
        (*g_36) = (safe_add_func_int16_t_s_s(p_68, l_81));
    }
    (*g_36) = l_81;
    (*g_36) = (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_86 != &p_67), 8)), l_81));
    return p_68;
}







static unsigned short func_72(short * p_73)
{
    unsigned l_75 = 0xA6219FF4L;
    return l_75;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_178[i], "g_178[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_324[i][j][k], "g_324[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_330[i], "g_330[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_426, "g_426", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
