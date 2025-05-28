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



static unsigned g_39 = 0x1C097BC8L;
static int g_79 = (-1L);
static unsigned g_107 = 0xE864EA5FL;
static int g_113 = (-7L);
static char g_116[9] = {(-9L), (-9L), 1L, (-9L), (-9L), 1L, (-9L), (-9L), 1L};
static int *g_124 = &g_79;
static int g_134 = (-6L);
static int *g_138 = (void*)0;
static short *g_164 = (void*)0;
static unsigned g_169 = 0x60C5C9CEL;
static char *g_188 = (void*)0;
static char **g_187[10] = {&g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188};
static unsigned g_283 = 18446744073709551606UL;
static unsigned char g_317[5][10][5] = {{{5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}}, {{5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}}, {{5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}}, {{5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}}, {{5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}, {5UL, 0x37L, 1UL, 249UL, 1UL}}};
static char g_324[3] = {0x8BL, 0x8BL, 0x8BL};
static char g_327[8] = {0x44L, 0x37L, 0x44L, 0x37L, 0x44L, 0x37L, 0x44L, 0x37L};
static char g_328 = 0x2AL;
static short **g_335 = &g_164;
static unsigned short g_349 = 3UL;
static unsigned *g_366 = &g_107;
static unsigned *g_386 = &g_169;
static char g_393 = 1L;
static unsigned g_400 = 0x58C229EAL;
static unsigned short g_430 = 5UL;
static short g_434 = 0xE021L;
static unsigned short g_511 = 0x591DL;
static unsigned char g_512 = 0x0BL;
static unsigned short g_544 = 0x4431L;
static unsigned char *g_699 = &g_512;
static unsigned char **g_698 = &g_699;
static int **g_718 = &g_138;
static int ***g_717 = &g_718;
static unsigned g_720 = 4294967287UL;
static short g_779 = 0xA831L;
static unsigned g_803[4][8][1] = {{{0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}}, {{0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}}, {{0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}}, {{0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}, {0x5DFF4559L}}};
static short g_811 = 0x77ADL;
static int *g_817 = &g_134;
static int g_828[2][1][2] = {{{0xE5CA81DDL, (-5L)}}, {{0xE5CA81DDL, (-5L)}}};
static int *g_847 = &g_79;
static int g_889 = (-5L);
static int *g_888 = &g_889;
static int **g_887 = &g_888;
static int *g_973 = (void*)0;
static unsigned g_1069 = 0xBB7EFB87L;
static unsigned **g_1087 = &g_386;
static unsigned ***g_1086 = &g_1087;
static unsigned g_1201 = 0x824085C8L;
static char ***g_1207[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static char ****g_1206 = &g_1207[2];
static int g_1246 = (-1L);
static int g_1427 = (-1L);
static unsigned **g_1504 = &g_366;
static unsigned ***g_1503 = &g_1504;
static int g_1511 = (-8L);



static short func_1(void);
static unsigned short func_6(unsigned p_7, short p_8, int p_9, unsigned p_10);
static short func_17(unsigned p_18, unsigned p_19, unsigned p_20, char p_21);
static unsigned char func_34(short p_35, unsigned char p_36, unsigned char p_37, int p_38);
static char func_42(char p_43, unsigned short p_44, int p_45);
static int func_65(int p_66, unsigned short p_67, int p_68, unsigned char p_69, unsigned short p_70);
static unsigned char func_71(int p_72, unsigned p_73, unsigned p_74, char p_75, unsigned char p_76);
static int * func_80(int p_81, int * p_82, short p_83);
static int * func_84(int * p_85, int * p_86, unsigned p_87, unsigned short p_88);
static int * func_89(int p_90, int * p_91, int p_92, char p_93, short p_94);
static short func_1(void)
{
    int l_46 = 0x196E86FFL;
    unsigned *l_330 = &g_107;
    int l_513 = 0L;
    int l_514 = 1L;
    unsigned l_1320 = 18446744073709551615UL;
    unsigned char l_1482 = 0x3FL;
    char l_1483 = 1L;
    char **l_1500 = &g_188;
    int *l_1505 = &l_513;
    char *l_1508 = &g_393;
    short *l_1512[7] = {&g_434, &g_434, &g_779, &g_434, &g_434, &g_779, &g_434};
    int l_1513 = 0x6AB323C7L;
    int i;
    (*g_847) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_6((safe_add_func_uint16_t_u_u(((l_514 = ((!((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_17((((safe_sub_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(func_34(g_39, g_39, (safe_mul_func_int8_t_s_s(((func_42(g_39, l_46, ((safe_add_func_int16_t_s_s((((g_39 && (((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(0xE6E836EAL, g_39)) , (safe_sub_func_int8_t_s_s(((func_65(((((((*l_330) = (func_71(g_39, g_39, l_46, g_39, g_39) > l_46)) > g_39) || l_46) >= g_39) || l_46), g_169, g_39, l_46, l_46) , g_317[2][8][3]) ^ 0x90L), l_46))), l_46)), l_46)), 6)), 0UL)), g_169)) & l_513) & l_513)) , (-10L)) != 0x458EL), l_46)) , l_514)) , 0xA275L) , 6L), (-2L))), l_46), l_46)), l_1320)), g_803[1][7][0])), 0x91L)), (-10L))) ^ 0UL) && l_514), l_513)) & g_803[1][3][0]) ^ 0L), l_514, l_46, g_1069), 1)), l_1320)) , 8L) , l_513) , l_1320)) && l_46)) > l_1482), 65535UL)), l_1483, l_513, l_46), 6)), 0x5B49L));


    ;
    ;
    ;
    (*l_1505) = ((*g_847) = (((safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((l_513 , (safe_lshift_func_int8_t_s_u((-10L), (safe_add_func_int16_t_s_s((l_1500 == (void*)0), ((*g_1086) == (void*)0)))))), l_513)) ^ (((safe_sub_func_int16_t_s_s(((void*)0 != g_1503), g_720)) , l_1483) || 0x2AL)), 0x61A1EC2EL)) , (-3L)) & l_514));
    (**g_717) = func_89(((*l_1505) >= g_803[3][3][0]), ((**g_717) = (*g_718)), (*l_1505), (safe_add_func_int8_t_s_s(((*l_1508) = (*l_1505)), (safe_mul_func_uint16_t_u_u((*l_1505), (g_434 = ((+(g_1511 = ((**g_698) || (-7L)))) | (***g_1503))))))), (*l_1505));

    ;
    return l_1513;
}







static unsigned short func_6(unsigned p_7, short p_8, int p_9, unsigned p_10)
{
    int *l_1484[1];
    int **l_1487 = &g_973;
    int ***l_1488 = &g_887;
    unsigned l_1489[4][5][3] = {{{18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}}, {{18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}}, {{18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}}, {{18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}, {18446744073709551615UL, 18446744073709551615UL, 1UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1484[i] = (void*)0;
    (**g_717) = l_1484[0];

    ;
    for (g_511 = 0; (g_511 <= 2); g_511 += 1)
    {
        int *l_1490 = &g_828[0][0][0];
        char ***l_1491 = &g_187[1];
        int i;
        (*g_718) = l_1484[0];

        ;
        (**g_717) = l_1490;

        ;
    }

    ;
    return g_400;
}







static short func_17(unsigned p_18, unsigned p_19, unsigned p_20, char p_21)
{
    unsigned char l_1328 = 254UL;
    int l_1337 = 1L;
    unsigned char l_1354 = 0xD7L;
    unsigned l_1369 = 3UL;
    unsigned l_1373 = 0x640BDB31L;
    int l_1385 = 0x2CDB5D56L;
    int *l_1392 = &g_889;
    unsigned char ***l_1398 = &g_698;
    int *l_1431 = &g_828[1][0][0];
    unsigned l_1477 = 1UL;
    unsigned l_1480 = 2UL;
    for (g_134 = 4; (g_134 >= 1); g_134 -= 1)
    {
        unsigned l_1322[10] = {18446744073709551615UL, 7UL, 18446744073709551615UL, 7UL, 18446744073709551615UL, 7UL, 18446744073709551615UL, 7UL, 18446744073709551615UL, 7UL};
        char *l_1325 = &g_324[2];
        unsigned *l_1345 = (void*)0;
        char l_1346 = 0xE3L;
        int *l_1374[2];
        int *l_1375 = &g_1246;
        unsigned ***l_1394 = &g_1087;
        unsigned l_1420 = 1UL;
        char ***l_1432 = &g_187[7];
        short l_1457[9][4] = {{0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}, {0x0CDDL, 0xDA5DL, 0x6D78L, 0x4CAAL}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_1374[i] = &g_113;
        for (g_1069 = 0; (g_1069 <= 4); g_1069 += 1)
        {
            int *l_1321 = (void*)0;
            unsigned char *l_1339 = (void*)0;
            (*g_718) = l_1321;

            ;
            if (l_1322[1])
            {
                unsigned l_1326 = 18446744073709551610UL;
                int l_1327 = (-2L);
                int **l_1336 = &g_888;
                (*g_718) = func_89((p_20 , (0x2BEFL == (safe_mod_func_int16_t_s_s((&p_21 == l_1325), (l_1326 , (((*g_847) = 3L) , (0x2E17L || (p_20 | l_1327)))))))), l_1321, p_18, p_18, l_1328);

                ;
                if ((*g_138))
                    continue;
                l_1337 = (safe_unary_minus_func_int8_t_s((func_65(((safe_rshift_func_int16_t_s_u(l_1322[5], 9)) , (*g_847)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(0x39L, ((void*)0 == &p_21))), (((l_1328 > (((***g_717) , l_1336) == (void*)0)) , p_21) || g_1201))), l_1322[8], p_21, g_169) <= 0x697EF5CBL)));


            }
            else
            {
                unsigned short l_1338[10][8] = {{4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}, {4UL, 1UL, 4UL, 0xE369L, 1UL, 65535UL, 65527UL, 65527UL}};
                unsigned l_1340 = 0x61C0C573L;
                int i, j;
                (*g_718) = (**g_717);
                (*g_847) = (((((void*)0 != &g_366) && ((*g_699) || p_18)) != func_65(((l_1338[5][2] , (l_1339 != (l_1338[5][2] , (*g_698)))) <= (p_18 , p_19)), p_21, l_1340, p_18, p_19)) && p_18);


                l_1337 = p_19;
            }


            for (l_1337 = 1; (l_1337 <= 4); l_1337 += 1)
            {
                int *l_1353 = &g_1246;
                int i, j, k;
                if (g_317[l_1337][(g_1069 + 4)][g_1069])
                {
                    int i, j, k;
                    return g_317[g_134][(g_1069 + 3)][g_1069];
                }
                else
                {
                    int i, j, k;
                    (*g_718) = func_89((((safe_mod_func_uint32_t_u_u(((*g_366) = (safe_mod_func_int8_t_s_s((+((g_317[g_1069][(g_134 + 3)][l_1337] >= ((*g_1087) == (l_1345 = (*g_1087)))) , p_21)), (*g_699)))), l_1322[1])) < ((((l_1346 & (safe_rshift_func_uint8_t_u_u(p_20, 1))) != ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(g_317[g_1069][(g_134 + 3)][l_1337], p_18)) != (-7L)), l_1322[1])) , p_21)) , 0x0719L) != 0x883FL)) , l_1337), l_1353, p_18, l_1337, l_1354);

                    ;
                    ;
                }

                ;
                ;
                (***g_717) = (-8L);
                for (g_811 = 0; (g_811 <= 4); g_811 += 1)
                {
                    int **l_1355 = &l_1353;
                    (*l_1353) = 0L;
                }
            }
        }

        ;
        for (g_39 = 0; (g_39 <= 4); g_39 += 1)
        {
            unsigned char l_1372 = 1UL;
            unsigned ***l_1393 = &g_1087;
            int l_1435[3];
            int *l_1467 = &g_113;
            int i;
            for (i = 0; i < 3; i++)
                l_1435[i] = 0x58E72A20L;
            l_1375 = ((**g_717) = (l_1374[1] = func_89(((safe_div_func_int16_t_s_s(((((8L & l_1322[1]) , func_89((*g_888), func_89((**g_887), func_89((**g_887), l_1345, l_1346, ((l_1328 , l_1372) == 4294967287UL), p_20), p_18, p_21, l_1322[4]), l_1373, l_1369, l_1328)) == (void*)0) , 0L), g_283)) < (*g_699)), &g_113, (*g_817), l_1337, l_1354)));

            ;
            ;
            (**g_717) = l_1374[1];

            ;
            for (l_1369 = 1; (l_1369 <= 9); l_1369 += 1)
            {
                int l_1379 = (-8L);
                int i;
                for (l_1354 = 0; (l_1354 <= 0); l_1354 += 1)
                {
                    unsigned **l_1376 = &g_366;
                    int i, j, k;
                }
                if (((safe_lshift_func_uint16_t_u_s(l_1322[l_1369], p_21)) != (((*l_1375) = l_1322[l_1369]) >= p_21)))
                {
                    char *l_1397 = &g_116[6];
                    int l_1421 = 0x679F87FCL;
                    unsigned short l_1430 = 0x83ECL;
                    for (g_511 = 0; (g_511 <= 4); g_511 += 1)
                    {
                        unsigned ****l_1395 = (void*)0;
                        unsigned ****l_1396[1][7] = {{&l_1394, &l_1393, &l_1394, &l_1393, &l_1394, &l_1393, &l_1394}};
                        int i, j;
                        (**g_718) = ((~((safe_mod_func_int32_t_s_s(0x6938BFF6L, (safe_rshift_func_uint8_t_u_s(((l_1392 = ((*g_887) = (*g_887))) == (void*)0), 2)))) , p_20)) ^ (((l_1393 != (l_1394 = l_1394)) == 246UL) , ((((((~l_1372) ^ (l_1397 != (void*)0)) != p_21) , 0x057A9083L) > 3UL) > g_828[0][0][0])));
                        return p_20;
                    }
                    if ((+(l_1398 != (void*)0)))
                    {
                        int l_1399 = 0x543660DBL;
                        unsigned short *l_1400 = (void*)0;
                        unsigned short *l_1401 = (void*)0;
                        unsigned short *l_1402 = &g_544;
                        int l_1403 = 0xA286A6F7L;
                        unsigned ****l_1406 = &l_1393;
                        int l_1407 = 0xC5C9D83CL;
                        (*l_1375) = ((((*g_366) = func_65((l_1373 , l_1399), (l_1403 = ((*l_1402) = 65535UL)), (safe_mod_func_uint32_t_u_u((0xAB1818B8L < func_65(((l_1406 = l_1406) == ((((l_1407 = (p_19 || 1L)) , (safe_sub_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((p_19 | (safe_rshift_func_int16_t_s_s((l_1407 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(p_21, g_328)), 3))), p_18))), 1UL)), (*g_366))) & p_19) || p_19), l_1399))) < l_1420) , &g_1086)), l_1379, (*g_138), p_19, g_116[1])), 1UL)), p_18, l_1421)) ^ 7UL) & l_1379);


                    }
                    else
                    {
                        unsigned short l_1422 = 2UL;
                        (*g_718) = func_89(l_1422, (*g_718), l_1421, ((*l_1325) = (safe_mod_func_int16_t_s_s(((g_779 = p_19) , ((g_349 , (safe_sub_func_uint16_t_u_u(l_1372, g_1427))) , 1L)), (safe_sub_func_int32_t_s_s(((void*)0 != (*g_887)), (**g_718)))))), p_19);

                        ;
                        l_1430 = (-3L);
                    }


                    if (p_18)
                        break;
                    (**g_717) = l_1431;

                    ;
                }
                else
                {
                    return p_21;
                }

                ;
            }


            for (g_1201 = 0; (g_1201 <= 4); g_1201 += 1)
            {
                int l_1440 = 0x3305F39FL;
                short l_1441[5][2] = {{0x11FBL, 0x11FBL}, {0x11FBL, 0x11FBL}, {0x11FBL, 0x11FBL}, {0x11FBL, 0x11FBL}, {0x11FBL, 0x11FBL}};
                int l_1449[5][1][7] = {{{0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L}}, {{0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L}}, {{0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L}}, {{0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L}}, {{0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L, 0x0D2711FCL, 0L}}};
                int i, j, k;
            }
        }


        ;
    }
    return p_18;
}







static unsigned char func_34(short p_35, unsigned char p_36, unsigned char p_37, int p_38)
{
    unsigned *l_886 = &g_803[3][3][0];
    int **l_890 = &g_888;
    int l_891 = 0x21E1D300L;
    unsigned char ***l_929 = &g_698;
    short l_1089 = (-1L);
    unsigned l_1092 = 1UL;
    unsigned char l_1167 = 3UL;
    unsigned l_1267 = 0xEE5E2B1CL;
    char **l_1286[8];
    int l_1315[3][7][2] = {{{0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}}, {{0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}}, {{0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}, {0xD3C8CF23L, (-8L)}}};
    char *****l_1316 = &g_1206;
    int *l_1317 = &g_113;
    unsigned l_1318 = 1UL;
    char l_1319 = 6L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1286[i] = &g_188;
    if ((0x80L < (**g_698)))
    {
        unsigned char l_882 = 0xB1L;
        unsigned short *l_885 = &g_430;
        int *l_892[1][2];
        unsigned **l_893 = &g_386;
        unsigned char l_915 = 255UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_892[i][j] = &g_828[0][0][0];
        }
        (*g_847) = (p_38 > (((*g_699) = (p_38 == p_38)) | 5L));
        for (g_400 = (-1); (g_400 >= 32); g_400 = safe_add_func_int32_t_s_s(g_400, 3))
        {
            unsigned char l_900 = 1UL;
            int *l_911 = (void*)0;
            for (g_889 = (-28); (g_889 >= 21); ++g_889)
            {
                char l_924 = 0xE6L;
                unsigned *l_931[7][2] = {{(void*)0, &g_803[2][4][0]}, {(void*)0, &g_803[2][4][0]}, {(void*)0, &g_803[2][4][0]}, {(void*)0, &g_803[2][4][0]}, {(void*)0, &g_803[2][4][0]}, {(void*)0, &g_803[2][4][0]}, {(void*)0, &g_803[2][4][0]}};
                int i, j;
                if ((*g_847))
                {
                    short *l_908 = (void*)0;
                    short *l_909 = &g_779;
                    int *l_910 = &g_828[0][0][1];
                    int **l_912 = &g_124;
                    (*l_912) = ((**g_717) = l_911);

                    ;
                    ;
                    l_924 = (safe_add_func_int16_t_s_s(((*l_909) = l_915), (p_36 == (((safe_rshift_func_uint16_t_u_s(p_38, ((safe_lshift_func_uint16_t_u_s(l_891, p_38)) > 0UL))) | p_36) != (*g_366)))));
                    (*g_817) = (safe_lshift_func_int16_t_s_u(((*l_910) && (safe_div_func_int16_t_s_s((((l_891 , (*g_717)) == (*g_717)) && ((((&g_698 == l_929) && (*g_366)) , (((p_38 , (0x85L && p_37)) || p_37) || (*l_910))) == l_891)), g_116[6]))), 0));
                    return (*g_699);
                }
                else
                {
                    if (((*g_817) = p_38))
                    {
                        (*g_847) = p_37;
                    }
                    else
                    {
                        unsigned *l_930 = &g_39;
                        (*g_847) = (l_930 != (l_931[4][0] = l_930));
                    }
                    return p_35;
                }
            }
            if (p_38)
                continue;
            if (l_891)
                continue;
            if ((*g_847))
                break;
        }
        (*g_817) = l_891;
    }
    else
    {
        int *l_940 = &g_828[1][0][0];
        short l_957[10][5] = {{0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}, {0xDA06L, 0x5912L, 0xCECEL, 0L, 0L}};
        unsigned l_1005 = 18446744073709551615UL;
        short l_1045 = (-1L);
        unsigned **l_1140 = &g_366;
        short **l_1193[1];
        unsigned l_1282 = 4294967291UL;
        char *l_1293 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1193[i] = &g_164;
        if (l_891)
        {
            char ***l_932 = &g_187[6];
            unsigned short l_941[9] = {0xE24BL, 0x18CAL, 0xE24BL, 0x18CAL, 0xE24BL, 0x18CAL, 0xE24BL, 0x18CAL, 0xE24BL};
            int *l_1013[2][6] = {{&g_113, &g_79, &g_113, &g_79, &g_113, &g_79}, {&g_113, &g_79, &g_113, &g_79, &g_113, &g_79}};
            int i, j;
            (*l_932) = &g_188;
            if (p_35)
            {
                unsigned l_937 = 0x359C8E0CL;
                int *l_972 = &g_889;
                int l_976[8] = {0xD7BFA746L, 0xD7BFA746L, 0x7159FEB1L, 0xD7BFA746L, 0xD7BFA746L, 0x7159FEB1L, 0xD7BFA746L, 0xD7BFA746L};
                int i;
                for (g_107 = (-16); (g_107 >= 35); g_107++)
                {
                    for (g_811 = (-23); (g_811 <= (-13)); g_811 = safe_add_func_int32_t_s_s(g_811, 1))
                    {
                        unsigned short l_944 = 0x14FFL;
                        l_940 = ((l_937 , (safe_sub_func_int32_t_s_s((*g_817), p_35))) , func_84(l_940, &l_891, ((l_941[3] , 0xC1L) >= (safe_add_func_uint32_t_u_u((*g_366), ((*g_366) , (*g_366))))), (*l_940)));

                        ;
                        return l_944;
                    }
                    for (g_393 = (-10); (g_393 < 29); ++g_393)
                    {
                        (*g_817) = (*g_817);
                    }
                    return p_38;
                }
                if (p_36)
                {
                    unsigned **l_960 = &l_886;
                    int *l_988 = &l_976[2];
                    for (g_720 = (-28); (g_720 >= 48); g_720 = safe_add_func_uint16_t_u_u(g_720, 8))
                    {
                        unsigned l_949[8] = {0xDFD779D4L, 0xDFD779D4L, 1UL, 0xDFD779D4L, 0xDFD779D4L, 1UL, 0xDFD779D4L, 0xDFD779D4L};
                        int i;
                        (*g_817) = l_949[7];
                        if (l_937)
                            break;
                        (*g_718) = &l_891;

                        ;
                    }


                    for (g_720 = 26; (g_720 <= 13); g_720 = safe_sub_func_int8_t_s_s(g_720, 3))
                    {
                        unsigned l_954[1];
                        short *l_965 = &g_434;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_954[i] = 0UL;
                        (*l_940) = ((((*g_366) & (((*g_366) , (safe_rshift_func_int16_t_s_u(l_954[0], 2))) & ((safe_sub_func_int32_t_s_s(((*g_366) & l_957[3][3]), (safe_mul_func_uint8_t_u_u(1UL, ((void*)0 == l_960))))) & ((*l_965) = ((((+(((((safe_sub_func_int16_t_s_s((!(-7L)), p_38)) || 0L) , (-1L)) < (*g_817)) <= 0xBFL)) || 0x8CL) ^ 0x1E1BD0CEL) ^ (**g_698)))))) , 0x8647BB3DL) <= (*g_366));
                    }
                    if (((void*)0 != (*g_335)))
                    {
                        short *l_970 = &l_957[3][3];
                        int l_971 = 1L;
                        (*l_940) = func_42(p_35, (*l_940), ((l_976[2] = (safe_rshift_func_int8_t_s_s((func_65(p_36, (safe_rshift_func_int16_t_s_s((l_971 = ((*l_970) = (-1L))), l_941[3])), ((((*l_890) == (g_973 = l_972)) | (safe_lshift_func_uint16_t_u_s(65535UL, func_42(p_35, g_434, l_891)))) != p_38), p_37, p_36) , 0x44L), 6))) < g_828[0][0][0]));

                        ;
                        (*g_718) = (void*)0;

                        ;
                        return p_37;
                    }
                    else
                    {
                        unsigned l_985 = 0x75D37505L;
                        int **l_986 = &l_940;
                        int **l_987[8][5] = {{&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}, {&g_847, &g_847, &g_847, &g_847, &g_847}};
                        int i, j;
                        l_988 = ((*l_986) = ((**g_717) = func_89(p_38, &l_891, p_38, (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_941[3], p_36)), 1L)), func_65((*l_940), ((safe_mod_func_uint32_t_u_u(0x6ADE00F1L, (*g_847))) , (*l_940)), (*g_817), p_35, p_37))), l_985)));

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }
                else
                {
                    unsigned l_1006 = 0UL;
                    for (g_393 = 0; (g_393 >= 0); g_393 -= 1)
                    {
                        unsigned short l_989 = 65535UL;
                        (*l_940) = l_989;
                        return (*g_699);
                    }
                    for (p_35 = 0; (p_35 <= 2); p_35 += 1)
                    {
                        char ****l_996 = (void*)0;
                        char ****l_997 = (void*)0;
                        char ****l_998 = (void*)0;
                        char ****l_999 = &l_932;
                        unsigned short *l_1004 = &l_941[5];
                        int i;
                        (*g_817) = ((0x948BL >= (l_891 ^ (*l_940))) , p_36);
                    }
                    return p_37;
                }

                ;
                ;
                (*g_847) = ((***g_717) || (((*l_940) && l_941[1]) < ((safe_mul_func_uint16_t_u_u(p_38, (((safe_add_func_int8_t_s_s((p_37 ^ ((p_35 || (-8L)) , p_36)), ((void*)0 == &p_35))) || 0xF2C0L) > (*g_138)))) <= (*g_847))));
            }
            else
            {
                int **l_1014 = (void*)0;
                int **l_1015 = (void*)0;
                int **l_1016 = &g_817;
                (*g_817) = (safe_sub_func_int16_t_s_s((*l_940), g_116[6]));
                (*l_1016) = ((**g_717) = func_84(l_1013[1][1], l_940, p_37, g_720));

                ;
                ;
                return (*g_699);
            }

            ;
            ;
        }
        else
        {
            int l_1023 = 0xF8E9DC1FL;
            unsigned **l_1051[5] = {&g_366, &g_366, &g_366, &g_366, &g_366};
            unsigned char l_1091 = 1UL;
            unsigned ***l_1148 = &g_1087;
            short **l_1217 = &g_164;
            int i;
lbl_1149:
            for (g_811 = 0; (g_811 <= 15); g_811 = safe_add_func_uint8_t_u_u(g_811, 9))
            {
                unsigned l_1050 = 1UL;
                int *l_1066 = &g_828[1][0][0];
                unsigned ***l_1088 = &g_1087;
                short **l_1103[6][9][4] = {{{&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}}, {{&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}}, {{&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}}, {{&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}}, {{&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}}, {{&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}, {&g_164, (void*)0, &g_164, &g_164}}};
                unsigned short *l_1139 = &g_511;
                int i, j, k;
                if (((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_1023, ((void*)0 != &g_544))), (**g_698))) , (p_38 <= (0xF37FL >= p_35))))
                {
                    unsigned short l_1032 = 65535UL;
                    char l_1048[2][6] = {{0L, 0L, 5L, 5L, 0L, 0L}, {0L, 0L, 5L, 5L, 0L, 0L}};
                    unsigned short *l_1060 = &l_1032;
                    int i, j;
                    for (g_544 = 9; (g_544 == 6); g_544--)
                    {
                        short l_1040 = 0x2BEEL;
                        unsigned short *l_1041 = &g_349;
                        unsigned short *l_1042[4][5] = {{&g_430, &g_430, &l_1032, &g_430, &g_430}, {&g_430, &g_430, &l_1032, &g_430, &g_430}, {&g_430, &g_430, &l_1032, &g_430, &g_430}, {&g_430, &g_430, &l_1032, &g_430, &g_430}};
                        unsigned *l_1043 = &g_720;
                        short l_1044 = 1L;
                        int **l_1046 = &l_940;
                        char *l_1047 = &g_328;
                        char *l_1049 = &g_116[3];
                        int i, j;
                        (*l_1046) = ((**g_717) = ((((((((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((*l_1043) = ((*g_366) = (safe_mod_func_int8_t_s_s(l_1032, (safe_unary_minus_func_uint8_t_u(((safe_add_func_uint8_t_u_u(((**g_698) = (safe_add_func_int16_t_s_s((g_779 = func_65((*g_817), ((safe_mul_func_uint16_t_u_u(func_65(l_891, l_1040, ((func_65(p_37, (g_511 = ((*l_1041) = l_891)), (*g_847), p_35, l_1023) != 0x3CL) & p_38), (*g_699), g_512), 0L)) ^ p_36), (*g_817), p_35, l_891)), l_1032))), 0xD7L)) & 4294967295UL))))))), p_35)), (*l_940))) || p_37) , l_1044) != l_1023) , p_38) ^ l_1045) , 0x5787L) , l_940));

                        ;
                        (*l_940) = p_36;
                        (*g_847) = ((*l_940) <= ((**g_698) == ((*l_1049) = (((*l_1047) = 0L) > l_1048[1][1]))));
                        return (*g_699);
                    }
                    (*l_940) = (((((((l_1050 = p_38) <= ((void*)0 != l_1051[3])) , (*l_940)) , (safe_mod_func_int8_t_s_s(((l_1048[1][1] | ((***l_929) = ((l_891 , (((((func_65((l_1023 = ((safe_mul_func_uint16_t_u_u(0xCE39L, (safe_add_func_uint16_t_u_u(((*l_1060) = (safe_sub_func_int16_t_s_s(l_1032, (((((void*)0 != &g_386) , &p_38) == (void*)0) | (-2L))))), 0x1CC1L)))) == 0x46L)), p_38, p_37, (*l_940), p_38) < (*l_940)) > p_36) , 1UL) , 0x7F1AL) ^ p_38)) , 0xCFL))) , (-9L)), (*l_940)))) != l_891) , 8UL) && p_35);
                }
                else
                {
                    unsigned l_1080[3][9][2] = {{{4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}}, {{4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}}, {{4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}}};
                    int l_1118 = 0xD6AC069BL;
                    int i, j, k;
                    for (g_328 = 4; (g_328 >= 1); g_328 -= 1)
                    {
                        int *l_1061 = &g_828[0][0][0];
                        int **l_1062 = (void*)0;
                        int **l_1063 = &l_1061;
                        unsigned char **l_1074 = &g_699;
                        short *l_1081[8] = {&g_434, &l_957[8][0], &g_434, &l_957[8][0], &g_434, &l_957[8][0], &g_434, &l_957[8][0]};
                        int i;
                        (*g_817) = (*l_940);
                        (*g_817) = (((*l_1063) = l_1061) != (((*l_940) = ((safe_lshift_func_uint8_t_u_s((*l_940), 2)) && (&g_164 != &g_164))) , l_1066));
                        (*l_940) = ((((safe_lshift_func_int16_t_s_u(g_1069, ((((l_1023 = (safe_sub_func_int16_t_s_s((((*g_699) = (safe_sub_func_uint8_t_u_u(((p_35 ^ ((void*)0 == l_1074)) && 1L), ((safe_unary_minus_func_uint32_t_u((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((**l_1063), p_37)), (*g_366))))) , (*g_699))))) <= l_1080[2][6][1]), 0x464BL))) , l_1080[0][3][0]) && 0xFFEAF6FAL) ^ l_1080[1][8][1]))) < 0x66294DD1L) >= (-6L)) < p_38);
                        (**l_1063) = p_36;
                    }
                    (*l_940) = (p_37 <= func_65(l_1023, ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((((*l_929) = &g_699) == (((((((*g_699) && ((g_1086 != l_1088) < ((l_1089 && (safe_unary_minus_func_int32_t_s(((*l_940) == p_35)))) & p_37))) ^ (*g_366)) , (void*)0) != (void*)0) < l_1091) , (void*)0)) & 1L), l_1089)), 0x7C010241L)) , g_39), (*g_847), (*g_699), g_512));
                    if (l_1092)
                        break;
                    for (g_283 = (-7); (g_283 >= 3); g_283++)
                    {
                        char *l_1097 = &g_327[0];
                        short ***l_1102[7][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                        unsigned char *l_1117 = &l_1091;
                        int i, j, k;
                        l_891 = (safe_sub_func_int8_t_s_s(((*l_1097) = p_37), ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0xC02FL, p_37)) < (((l_1103[4][0][1] = &g_164) == &g_164) == p_35)), g_430)) , (*g_699))));
                        (*g_817) = (safe_add_func_int8_t_s_s(func_65((safe_lshift_func_int16_t_s_s(p_37, l_1089)), (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((*l_940), (*g_366))), ((((((p_38 >= (safe_div_func_int32_t_s_s(((p_38 , p_37) <= (l_1118 = (((((safe_unary_minus_func_int8_t_s((p_38 ^ ((*l_1117) = ((***l_929) = (((safe_sub_func_uint8_t_u_u(p_35, 0L)) <= l_1091) < p_35)))))) , (*l_940)) > p_35) != 0UL) > p_37))), 0x5E6404C2L))) & (*l_940)) , p_38) , 0x6D95F291L) , 0xA4L) > p_35))), p_36, l_891, g_803[3][3][0]), 254UL));
                        if ((*l_1066))
                            break;
                    }
                }
                if ((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*g_847) = (safe_div_func_uint8_t_u_u(((1UL < l_1023) & ((*l_940) = ((*l_940) && (safe_mul_func_uint8_t_u_u((*l_1066), (((*l_1139) = ((p_36 , ((safe_rshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((*l_1066) && ((safe_add_func_uint8_t_u_u(p_36, (safe_mul_func_uint8_t_u_u((l_891 = 0x87L), 0x6FL)))) == l_1091)), 8UL)) > p_38), 12)) , 0xFCL)) || 0xE3L)) != 65531UL)))))), (**g_698)))), p_38)), l_1089)), 1UL)) ^ (**g_698)), 7)))
                {
                    for (g_39 = 0; (g_39 <= 8); g_39 += 1)
                    {
                        unsigned **l_1141[7] = {&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366};
                        int i;
                        (*g_847) = p_37;
                        l_1141[2] = l_1140;
                        if ((*l_1066))
                            continue;
                        (*g_718) = &l_891;

                        ;
                    }
                }
                else
                {
                    (*l_1066) = (p_36 ^ ((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_36, 5)), (((void*)0 == (*g_1087)) , ((*l_1139) = ((safe_div_func_int32_t_s_s((*l_1066), 0x3E6C0D46L)) & ((**l_1140) = (l_1148 == &g_1087))))))) , (*g_847)));
                    if (l_1045)
                        goto lbl_1149;
                }
            }
lbl_1183:
            for (g_779 = 4; (g_779 >= 0); g_779 -= 1)
            {
                int l_1152 = 0x211C4526L;
                int l_1168 = 0xC26F6F61L;
                for (g_400 = 0; (g_400 <= 4); g_400 += 1)
                {
                    char *l_1157[1];
                    int l_1166 = (-1L);
                    unsigned short *l_1169 = &g_511;
                    short *l_1182 = &l_1045;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1157[i] = &g_327[2];
                    for (g_393 = 1; (g_393 <= 4); g_393 += 1)
                    {
                        int i, j, k;
                        return g_317[g_393][(g_779 + 1)][g_779];


                    }
                    (*g_817) = (p_38 <= ((*l_1169) = ((func_65((safe_div_func_int32_t_s_s(l_1152, ((safe_sub_func_uint16_t_u_u((((*l_940) = (!(safe_add_func_uint32_t_u_u((*g_366), 0xC179BBC0L)))) <= ((l_891 >= 0xE7L) > (safe_lshift_func_uint16_t_u_u(65535UL, (l_1168 = (safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((g_1069 == ((safe_div_func_int32_t_s_s(((l_1166 ^ 0x10L) || p_35), 1UL)) | (*g_699))) , l_1167), 7)) ^ p_37), 0xBDL))))))), g_113)) || 65532UL))), p_36, p_38, l_1167, p_38) >= l_1092) > l_1092)));
                    for (l_1092 = (-27); (l_1092 > 51); l_1092 = safe_add_func_uint32_t_u_u(l_1092, 6))
                    {
                        char *l_1176 = (void*)0;
                        int l_1177 = 1L;
                        l_1177 = (l_1168 = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(l_1152, (l_1166 = (!(((+p_38) , l_1176) == l_1157[0]))))) && p_36), 1)));
                        if (p_37)
                            goto lbl_1183;
                    }
                    (*g_817) = ((*g_366) || ((func_65(((*g_817) = l_1023), func_65((l_1152 = ((1UL == 0L) ^ ((p_35 > 1L) , func_65(func_65((safe_lshift_func_int8_t_s_s((((*l_940) = (((((*l_1182) = (((*g_847) = (safe_add_func_int8_t_s_s((((((p_36 = ((*g_699) = (p_36 , func_65((4294967295UL || func_65(l_891, p_35, l_1168, (**g_698), g_511)), l_1166, l_1168, p_38, (*l_940))))) && 1L) , p_38) && p_37) , l_1168), (*l_940)))) , g_889)) <= p_35) | 1L) , (*l_940))) , p_35), 0)), g_283, p_38, p_37, p_37), l_1091, l_1089, p_38, l_1023)))), g_779, l_1167, l_1166, g_116[7]), l_1005, g_1069, p_35) , &g_1087) != &g_1087));
                }
            }
            for (g_400 = (-5); (g_400 < 46); g_400++)
            {
                unsigned l_1203 = 18446744073709551612UL;
                short ***l_1226[1][2];
                int l_1227 = (-1L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1226[i][j] = &l_1193[0];
                }
                if (p_38)
                {
                    unsigned char *l_1198 = &l_1167;
                    int l_1202 = 0x74E52BC2L;
                    char *****l_1208 = &g_1206;
                    short ***l_1215 = (void*)0;
                    short ***l_1216[9][10][2] = {{{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}, {{(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}, {(void*)0, &g_335}}};
                    unsigned l_1219 = 1UL;
                    int i, j, k;
                    (*g_817) = (safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*l_940) >= (safe_rshift_func_int16_t_s_s((*l_940), 7))), (~(&p_38 == (void*)0)))) >= (safe_unary_minus_func_int16_t_s(((l_1193[0] != &g_164) == (+(0x66BAC7DCL < (((p_37 = (safe_mul_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((*l_1198) = ((**g_698) = p_36)), func_65((safe_sub_func_uint32_t_u_u(l_1091, (*l_940))), g_1201, (*g_817), p_38, p_38))) < l_1202) , (-1L)) , l_1203), p_38))) < l_1202) && p_38))))))), 0x50L));
                    (*g_817) = (65533UL == ((safe_mul_func_uint16_t_u_u(g_317[3][5][4], (((((*l_1208) = g_1206) != &g_1207[2]) && (l_1202 & (l_1089 | (safe_mod_func_uint16_t_u_u((0UL == 1L), (l_891 = 7L)))))) & 0UL))) & 0UL));
                    if (((*l_940) = ((safe_mul_func_uint8_t_u_u(((p_37 | (p_37 , ((safe_sub_func_int16_t_s_s((((l_1217 = &g_164) != &g_164) & (func_65(((*g_817) = ((p_38 != (*g_366)) != l_1091)), p_37, p_37, (**g_698), p_35) == 0x2782L)), p_38)) | l_1203))) ^ p_38), p_38)) | 0L)))
                    {
                        unsigned short *l_1218 = &g_544;
                        (*l_940) = func_42(p_35, ((*l_1218) = 0xDFF5L), (p_38 != l_1219));
                        if (p_38)
                            break;
                        (*g_817) = (safe_lshift_func_uint8_t_u_u((**g_698), 5));
                        (*g_847) = (p_36 != 1L);
                    }
                    else
                    {
                        short l_1228 = 1L;
                        l_1023 = (safe_mod_func_uint8_t_u_u((p_37 , 254UL), 7UL));
                        if (p_38)
                            break;
                    }
                    for (l_1202 = 0; (l_1202 <= 0); l_1202 += 1)
                    {
                        (*g_817) = l_1227;
                        if (g_400)
                            goto lbl_1149;
                    }
                }
                else
                {
                    if (g_511)
                        goto lbl_1149;
                    for (l_1005 = (-21); (l_1005 != 46); l_1005++)
                    {
                        return p_37;


                    }
                }
            }
        }


        ;
        (**g_717) = &l_891;

        ;
        if ((*l_940))
        {
            unsigned l_1252 = 0x80788615L;
            int *l_1254 = (void*)0;
            (**g_717) = (*g_718);
            for (g_283 = 0; (g_283 == 36); g_283++)
            {
                short l_1239 = 2L;
                unsigned short l_1251 = 0x6229L;
                int *l_1253 = &g_79;
                unsigned short l_1255 = 0x79AAL;
            }
            (*g_718) = func_89(l_891, &l_891, (*l_940), (*l_940), (*l_940));

            ;
            (*g_847) = p_36;
        }
        else
        {
            char *****l_1258 = &g_1206;
            int l_1283[7] = {0xF72A7708L, (-5L), 0xF72A7708L, (-5L), 0xF72A7708L, (-5L), 0xF72A7708L};
            int i;
            (*g_718) = func_84((*g_718), ((safe_add_func_int32_t_s_s(((*l_940) && (l_1258 != (void*)0)), (*l_940))) , (**g_717)), l_1089, g_327[1]);

            ;
            for (g_1246 = 0; (g_1246 != (-2)); --g_1246)
            {
                short l_1272 = 1L;
                unsigned char *l_1273 = (void*)0;
                int l_1274 = 0x4EA56550L;
                char **l_1281 = &g_188;
                if (((p_36 <= (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_1267, (*g_699))) , (((safe_lshift_func_uint8_t_u_s(((((*g_366) = l_1267) , g_811) >= g_349), 0)) , ((g_434 = p_38) >= (safe_rshift_func_uint8_t_u_u((*g_699), (l_1274 = l_1272))))) || 4UL)), (*g_699))), g_283))) && (**g_698)))
                {
                    unsigned *l_1287 = &l_1092;
                    int l_1288 = 0xB5C6BE73L;
                    if ((*l_940))
                        break;
                    if (((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((func_42((safe_mul_func_uint8_t_u_u(func_42(p_38, (*l_940), ((void*)0 != l_1281)), l_1282)), l_1167, (((*l_1287) = (((l_1283[2] == ((safe_mod_func_uint8_t_u_u(g_317[3][5][4], l_1272)) ^ 4294967290UL)) , (void*)0) != l_1286[1])) == 5UL)) ^ 4294967295UL), 7)) | l_1288) < l_1288), 11)) <= l_1167))
                    {
                        unsigned l_1294 = 4294967293UL;
                        (*g_847) = (safe_add_func_int32_t_s_s(p_37, ((safe_div_func_int16_t_s_s(1L, p_38)) , ((*g_366) = ((((p_38 | (((l_1288 = (((!l_1092) && l_1272) <= ((void*)0 == l_1293))) <= 7UL) != l_891)) | l_1294) > (*l_940)) || p_37)))));
                    }
                    else
                    {
                        (*g_718) = &g_113;

                        ;
                        l_1274 = p_35;
                        if (l_1274)
                            continue;
                    }
                }
                else
                {
                    unsigned short l_1304 = 1UL;
                    for (g_1201 = (-25); (g_1201 > 50); g_1201 = safe_add_func_int8_t_s_s(g_1201, 9))
                    {
                        unsigned short *l_1300 = (void*)0;
                        unsigned short **l_1299 = &l_1300;
                        int l_1303[8] = {0xDEED17B1L, 0xEF58199EL, 0xDEED17B1L, 0xEF58199EL, 0xDEED17B1L, 0xEF58199EL, 0xDEED17B1L, 0xEF58199EL};
                        int i;
                        l_1304 = ((((p_38 , ((safe_sub_func_uint32_t_u_u(((((*g_699) = 0UL) , func_65(func_42(((((*g_888) , (*g_335)) == (void*)0) & l_1303[3]), g_317[4][2][1], l_1283[0]), g_1201, p_37, p_35, g_828[1][0][1])) , 0xAFC6E9FDL), 0x733DE503L)) < p_36)) , (*l_940)) > (-6L)) > 0UL);
                    }
                }
            }


        }


        (*g_817) = l_1267;
    }
    (*g_847) = (l_891 && (safe_sub_func_int8_t_s_s(func_65(((*g_817) = (safe_div_func_int8_t_s_s(1L, l_1167))), (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(p_35, l_1092)) >= ((((p_35 & g_828[0][0][0]) != p_36) <= l_891) <= (**g_698))), p_35)), p_38, l_891, g_107), l_1089)));
    (*g_817) = ((safe_rshift_func_int8_t_s_u(l_1315[0][3][0], (~(248UL >= 0x7BL)))) , (l_929 != (void*)0));
    (**g_717) = (((*g_386) = (l_1316 != (void*)0)) , func_89(p_37, func_84(&l_891, ((**g_717) = (g_113 , l_1317)), (((**l_1316) = (p_38 , (*g_1206))) != &g_187[7]), l_1318), (*g_817), (*l_1317), l_1319));

    ;
    return p_35;
}







static char func_42(char p_43, unsigned short p_44, int p_45)
{
    int *l_515[7] = {&g_134, &g_79, &g_134, &g_79, &g_134, &g_79, &g_134};
    char **l_517 = &g_188;
    int **l_527 = (void*)0;
    int ***l_526 = &l_527;
    char *l_530 = &g_324[0];
    unsigned l_558[3];
    char ***l_609 = (void*)0;
    char ****l_608 = &l_609;
    short ***l_640 = &g_335;
    short l_673 = (-7L);
    unsigned short l_721 = 3UL;
    int *l_737 = &g_134;
    unsigned l_742 = 4294967294UL;
    int l_755 = 2L;
    char l_763 = 0x6DL;
    unsigned short *l_804[1];
    unsigned **l_832[9] = {&g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366, &g_366};
    unsigned l_842 = 1UL;
    unsigned l_862[9] = {4UL, 18446744073709551610UL, 4UL, 18446744073709551610UL, 4UL, 18446744073709551610UL, 4UL, 18446744073709551610UL, 4UL};
    int *l_865 = &l_755;
    int *l_881 = &g_828[0][0][1];
    int i;
    for (i = 0; i < 3; i++)
        l_558[i] = 18446744073709551613UL;
    for (i = 0; i < 1; i++)
        l_804[i] = &g_349;
    g_79 = (g_134 = p_44);
    if ((g_79 = p_45))
    {
        char **l_516 = &g_188;
        l_517 = l_516;
    }
    else
    {
        int **l_518 = (void*)0;
        int **l_519 = &g_138;
        (*l_519) = &g_79;

        ;
        for (g_79 = 0; (g_79 < (-2)); g_79--)
        {
            (*l_519) = (*l_519);
        }
        (*l_519) = l_515[0];

        ;
    }
    if ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((p_44 , p_44), (&l_515[1] != ((*l_526) = &l_515[1])))) > (p_43 < (safe_rshift_func_int8_t_s_s(((*l_530) = (+0xF7L)), (p_43 , p_44))))), 15)))
    {
        unsigned short l_540[1];
        unsigned *l_546 = &g_107;
        int l_600[8] = {0xC8C9CDA7L, 0xC8C9CDA7L, 0xFF710316L, 0xC8C9CDA7L, 0xC8C9CDA7L, 0xFF710316L, 0xC8C9CDA7L, 0xC8C9CDA7L};
        int l_602 = (-1L);
        char ****l_610[3][7] = {{&l_609, &l_609, &l_609, &l_609, &l_609, &l_609, &l_609}, {&l_609, &l_609, &l_609, &l_609, &l_609, &l_609, &l_609}, {&l_609, &l_609, &l_609, &l_609, &l_609, &l_609, &l_609}};
        int ***l_614 = &l_527;
        int l_643 = 0x2AFA5541L;
        unsigned char **l_701 = &g_699;
        unsigned char l_708 = 0x40L;
        unsigned *l_719 = &g_720;
        unsigned short l_732 = 1UL;
        char l_753 = 7L;
        int l_754 = 1L;
        unsigned **l_790 = (void*)0;
        int *l_838 = &g_79;
        int i, j;
        for (i = 0; i < 1; i++)
            l_540[i] = 65535UL;
        for (g_328 = 0; (g_328 >= (-20)); g_328--)
        {
            unsigned *l_533 = &g_107;
            int l_543 = 0x9D0402BAL;
            unsigned char l_545 = 0xF1L;
            unsigned **l_547 = &g_366;
            int l_599 = (-9L);
        }
        for (p_44 = 0; (p_44 > 29); p_44 = safe_add_func_int32_t_s_s(p_44, 2))
        {
            unsigned l_605 = 4294967295UL;
            int l_631 = (-5L);
            int *l_658 = &g_134;
            char ****l_689 = &l_609;
            (**l_526) = (void*)0;
        }


        if (((((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((l_708 ^ (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(g_349, p_44)) , 3UL), 65535UL))), p_44)) & p_44), 0x13B8C2D8L)) >= 0x408BL) && p_43) , p_44))
        {
            int *l_722 = &g_113;
            short l_725 = 6L;
            unsigned char *l_727 = &g_317[3][5][4];
            unsigned char **l_726 = &l_727;
            unsigned short *l_733 = (void*)0;
            unsigned short *l_734 = &g_430;
            (*g_718) = l_722;

            ;
            if ((p_44 > ((l_725 ^ (func_65((!(!p_45)), ((*l_734) = ((((((*l_722) = ((*l_701) == ((*l_726) = (*g_698)))) ^ (safe_sub_func_int16_t_s_s(((*g_366) == ((*l_719) = 4294967294UL)), ((p_44 | ((safe_rshift_func_uint16_t_u_s(p_44, p_43)) || g_79)) , l_732)))) && 0x7455L) , p_44) != 0UL)), p_43, (**g_698), l_600[7]) < p_45)) < 0xD6653F61L)))
            {
                unsigned short l_743 = 0x409FL;
                for (g_434 = (-16); (g_434 != 6); ++g_434)
                {
                    unsigned short l_744[10][10][2] = {{{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}, {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}}};
                    int i, j, k;
                    (*l_527) = func_89((*l_722), (p_44 , (*l_527)), l_743, p_45, l_743);
                }
            }
            else
            {
                unsigned l_745 = 0UL;
                return l_745;
            }


            ;
        }
        else
        {
            int *l_746[10] = {&l_602, &l_602, &l_602, &l_602, &l_602, &l_602, &l_602, &l_602, &l_602, &l_602};
            unsigned **l_759 = &l_719;
            unsigned ***l_758 = &l_759;
            unsigned l_788 = 0xDC366223L;
            unsigned ***l_807[9] = {&l_790, &l_790, &l_790, &l_790, &l_790, &l_790, &l_790, &l_790, &l_790};
            char l_829 = (-1L);
            short *l_836 = &g_779;
            int l_837 = 0xCA93FF4AL;
            int i;
lbl_789:
            l_746[7] = (void*)0;
            if ((func_65(p_44, p_43, (((((safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((func_65(((safe_sub_func_uint32_t_u_u(l_753, p_44)) , ((*l_737) = (*l_737))), p_44, p_44, (l_754 < 0x5CL), p_44) || (*g_699)), 0x5B65L)) ^ p_45), p_45)) >= p_43) < 0x3CL) ^ p_44) ^ l_755), (*g_699), g_400) || p_43))
            {
                unsigned ***l_760 = &l_759;
                int l_764 = 0xAC5208E7L;
                unsigned l_780 = 0UL;
                l_754 = ((p_43 ^ (safe_mul_func_uint8_t_u_u((*g_699), ((**g_698) , p_45)))) >= 0x81FABD42L);
                for (g_544 = 0; (g_544 != 1); ++g_544)
                {
                    return p_43;
                }
                if ((safe_rshift_func_int16_t_s_s(p_43, 11)))
                {
                    int *l_769 = &g_134;
                    unsigned char *l_774 = &l_708;
                    (*g_718) = (p_45 , l_746[5]);

                    ;
                    (*l_769) = (-1L);
                }
                else
                {
                    int *l_787[5] = {(void*)0, &g_113, (void*)0, &g_113, (void*)0};
                    unsigned **l_802 = &g_366;
                    int l_822[10][2][6] = {{{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}, {{3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}, {3L, 0x278F7362L, 0x65983FFDL, 0x5939155BL, 0xDC1B845DL, 0xD8809E68L}}};
                    int i, j, k;
                    if (g_324[1])
                    {
                        l_780 = ((void*)0 != &g_366);
                        (*l_737) = (((safe_mul_func_uint8_t_u_u((*g_699), (((-8L) >= (((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(p_45, 0x2C793779L)), 0xF2D93D87L)) , p_43) , 1L)) || 1L))) , p_44) , 0xD71A5D7CL);
                        l_787[4] = (void*)0;
                        l_788 = ((*l_737) = l_600[2]);
                    }
                    else
                    {
                        unsigned short *l_791 = &l_721;
                        int l_800[9][8] = {{0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}, {0x2977C228L, 0x01D9AED0L, 1L, 0x01D9AED0L, 0x2977C228L, (-2L), (-6L), 0x01D9AED0L}};
                        unsigned short *l_801 = &g_544;
                        int *l_808[6][7] = {{&g_79, &g_79, &g_134, &g_79, (void*)0, &g_79, &g_134}, {&g_79, &g_79, &g_134, &g_79, (void*)0, &g_79, &g_134}, {&g_79, &g_79, &g_134, &g_79, (void*)0, &g_79, &g_134}, {&g_79, &g_79, &g_134, &g_79, (void*)0, &g_79, &g_134}, {&g_79, &g_79, &g_134, &g_79, (void*)0, &g_79, &g_134}, {&g_79, &g_79, &g_134, &g_79, (void*)0, &g_79, &g_134}};
                        int i, j;
                        if (g_544)
                            goto lbl_789;
                        (*l_737) = (func_65(((*l_737) = ((((*l_791) = (p_44 = (((*g_386) = p_43) , ((void*)0 == l_790)))) & ((((p_43 || p_45) & ((((safe_lshift_func_int16_t_s_u(0xEB28L, ((((safe_lshift_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((((p_43 > ((((*l_801) = (safe_rshift_func_uint16_t_u_u(((l_800[1][3] , (void*)0) == (void*)0), p_43))) >= l_800[5][6]) > 0x8D70L)) , (void*)0) != l_802), p_45)) && 0L) || p_43), p_45)) , (-1L)) | 0x141DE4AEL) && g_324[1]))) , &g_400) != &l_558[2]) < g_803[3][3][0])) , l_804[0]) == &g_430)) , 0xB930BF27L)), g_113, p_45, (*g_699), l_800[1][6]) && p_45);
                        (*l_737) = ((((p_45 == (safe_lshift_func_int8_t_s_s((((*g_366) , l_807[6]) == (void*)0), (p_43 = p_43)))) || (**g_698)) && l_764) == g_328);
                        l_808[4][2] = &l_800[2][2];


                    }
                    if (((safe_add_func_uint32_t_u_u((*g_366), g_811)) , (safe_lshift_func_int8_t_s_u((((void*)0 != l_790) & 0xC4L), 2))))
                    {
                        unsigned l_816 = 1UL;
                        l_764 = p_44;
                        (*l_737) = (safe_div_func_uint16_t_u_u(p_43, l_816));
                    }
                    else
                    {
                        l_787[4] = (g_817 = (*l_527));


                        ;
                    }


                    ;
                    (**g_717) = &l_764;

                    ;
                    if ((((*l_737) = 0L) < (safe_rshift_func_uint8_t_u_u(((**g_698) = (~(((**l_640) != (void*)0) <= ((void*)0 == &g_699)))), 5))))
                    {
                        short *l_827 = &g_434;
                        int l_830 = (-3L);
                        (**g_718) = (safe_sub_func_int32_t_s_s((&l_755 != (l_829 , &l_600[3])), l_830));
                    }
                    else
                    {
                        unsigned **l_831 = &l_719;
                        int l_833 = 2L;
                        (*l_527) = (*g_718);


                        (***g_717) = (***g_717);
                        (*g_138) = 0L;
                    }


                }

                ;

                ;
            }
            else
            {
                return p_45;
            }



            ;
            l_837 = ((*l_737) = (safe_div_func_int16_t_s_s(((*l_836) = (~p_43)), g_434)));
        }



        ;
        g_817 = (l_838 = ((**g_717) = ((*l_527) = &g_134)));

        ;
        ;
        ;
    }
    else
    {
        int l_841 = 0x2FF307F3L;
        int *l_846[3];
        unsigned l_861 = 0UL;
        int i;
        for (i = 0; i < 3; i++)
            l_846[i] = &g_828[0][0][1];
        for (g_283 = 0; (g_283 <= 0); g_283 += 1)
        {
            int *l_843 = &g_79;
            int **l_844 = (void*)0;
            int **l_845[2][8][6] = {{{&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}}, {{&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}, {&l_737, &l_843, &g_817, &g_817, &g_817, &l_843}}};
            char ***l_854 = &g_187[6];
            int *l_864 = &l_755;
            int **l_863[6][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
            int *l_866 = &l_841;
            int i, j, k;
            (*g_847) = ((safe_div_func_uint8_t_u_u((((p_44 , (l_846[2] = ((*l_527) = (p_45 , l_843)))) != g_847) & (*g_847)), (*l_737))) > (*g_699));
            l_846[2] = (*l_527);
            if (p_44)
                continue;
        }


        (*g_718) = l_881;

        ;
    }

    ;

    ;
    return p_43;
}







static int func_65(int p_66, unsigned short p_67, int p_68, unsigned char p_69, unsigned short p_70)
{
    int l_336[2][7][6] = {{{(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}}, {{(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}, {(-1L), 3L, (-5L), 6L, (-4L), 0xF0102901L}}};
    unsigned l_357 = 0x12A8300FL;
    int *l_361 = &g_79;
    int l_397[1][5] = {{0x2EB8610DL, 1L, 0x2EB8610DL, 1L, 0x2EB8610DL}};
    unsigned **l_403 = &g_386;
    unsigned **l_471[2][9] = {{&g_386, &g_386, &g_386, &g_386, &g_386, &g_386, &g_386, &g_386, &g_386}, {&g_386, &g_386, &g_386, &g_386, &g_386, &g_386, &g_386, &g_386, &g_386}};
    char *l_479 = &g_116[6];
    int i, j, k;
    for (g_328 = 22; (g_328 > 6); g_328 = safe_sub_func_int8_t_s_s(g_328, 7))
    {
        short **l_334[3];
        short ***l_333[1];
        int i;
        for (i = 0; i < 3; i++)
            l_334[i] = &g_164;
        for (i = 0; i < 1; i++)
            l_333[i] = &l_334[1];
        g_335 = &g_164;
    }
    if ((l_336[1][5][0] , l_336[1][5][0]))
    {
        unsigned short *l_347 = (void*)0;
        unsigned short *l_348 = &g_349;
        int l_352 = (-1L);
        int *l_355 = (void*)0;
        int l_356 = 0x0D7D336EL;
        unsigned *l_358 = &l_357;
        int **l_359 = (void*)0;
        int **l_360 = &g_138;
        l_361 = ((*l_360) = ((safe_rshift_func_int16_t_s_u(p_66, 8)) , func_89((~(((((safe_div_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((*l_348) = 0xD53CL) >= (safe_add_func_int32_t_s_s(1L, ((*l_358) = ((l_357 , (void*)0) == (void*)0))))), p_69)), 0L)), g_107)) && 0L) , p_68), p_69)) , l_355) != (void*)0) | 0x37A74D58L) , l_357)), &g_113, l_352, p_67, p_70)));

        ;
        (*l_360) = &g_113;

        ;
        (**l_360) = (1UL >= p_70);
        (*l_361) = ((*g_138) = (safe_unary_minus_func_uint16_t_u((p_66 ^ 8L))));
    }
    else
    {
        unsigned *l_365[5] = {&g_107, &g_107, &g_107, &g_107, &g_107};
        unsigned short *l_370 = (void*)0;
        unsigned short *l_371 = &g_349;
        int l_376 = 0L;
        char *l_377[9][9][3] = {{{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}, {{(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}, {(void*)0, (void*)0, &g_116[4]}}};
        int l_378[4][2][1];
        unsigned l_379 = 0xB09E32A8L;
        unsigned **l_387 = &g_386;
        unsigned ***l_401 = &l_387;
        unsigned **l_402 = &g_386;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_378[i][j][k] = 0x1FCD54F0L;
            }
        }
        (*l_361) = p_66;
        (*l_361) = (l_378[2][1][0] < 65531UL);
        for (l_376 = 8; (l_376 >= 2); l_376 -= 1)
        {
            short l_388 = 1L;
            l_388 = p_68;
            if (l_378[2][1][0])
                continue;
            p_66 = (p_70 , (((*l_361) = l_388) , ((((&l_336[1][5][0] == &l_336[1][5][0]) & (g_393 = ((*g_366) = ((safe_add_func_uint8_t_u_u(p_68, p_69)) || (safe_lshift_func_uint8_t_u_s(0UL, 3)))))) < ((*l_361) = ((safe_lshift_func_uint8_t_u_u(g_324[1], 7)) , ((&g_349 != &p_70) != l_388)))) | 65534UL)));
            for (g_393 = 8; (g_393 >= 0); g_393 -= 1)
            {
                int **l_396 = (void*)0;
                g_138 = &p_66;

                ;
                return l_379;


            }
        }
        (*l_361) = (0L > ((7UL >= l_397[0][3]) , (safe_mul_func_int8_t_s_s((-8L), (0x398A8056L != ((((0x354CL < ((g_400 <= (p_68 > ((((l_402 = ((*l_401) = &g_386)) == l_403) || (*l_361)) || (*g_366)))) ^ (-1L))) ^ p_69) , &l_397[0][0]) == &l_397[0][3]))))));
    }
    for (g_349 = 0; (g_349 <= 4); g_349 += 1)
    {
        unsigned l_406 = 0x501DDF95L;
        char *l_420 = &g_393;
        unsigned *l_435[7] = {&g_283, &g_283, &g_39, &g_283, &g_283, &g_39, &g_283};
        char l_444 = 0xC2L;
        int l_493[8] = {0L, 0xCADD5DA0L, 0L, 0xCADD5DA0L, 0L, 0xCADD5DA0L, 0L, 0xCADD5DA0L};
        int **l_499[3];
        int i;
        for (i = 0; i < 3; i++)
            l_499[i] = (void*)0;
        if (p_67)
            break;
        for (p_67 = 0; (p_67 <= 1); p_67 += 1)
        {
            int l_409 = (-4L);
            unsigned char *l_410 = (void*)0;
            unsigned char *l_411[3];
            int l_421 = 5L;
            unsigned l_422 = 0UL;
            int *l_451[8] = {&g_134, &g_79, &g_134, &g_79, &g_134, &g_79, &g_134, &g_79};
            unsigned short *l_507 = &g_430;
            unsigned short *l_510 = &g_511;
            int i;
            for (i = 0; i < 3; i++)
                l_411[i] = &g_317[0][7][1];
        }
    }
    return (*l_361);
}







static unsigned char func_71(int p_72, unsigned p_73, unsigned p_74, char p_75, unsigned char p_76)
{
    unsigned char l_77[7][1] = {{0xD6L}, {0xD6L}, {0xD6L}, {0xD6L}, {0xD6L}, {0xD6L}, {0xD6L}};
    int l_103 = 0x49F3923BL;
    short l_281 = 0xDE64L;
    int l_295 = (-1L);
    int *l_303 = (void*)0;
    char *l_325 = &g_116[6];
    char *l_326 = &g_327[6];
    unsigned *l_329 = &g_107;
    int i, j;
    for (p_72 = 0; (p_72 >= 0); p_72 -= 1)
    {
        int *l_78 = &g_79;
        int **l_101 = &l_78;
        int *l_102[8][3] = {{&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}, {&g_79, &g_79, (void*)0}};
        short l_104 = 0xD5A1L;
        char ***l_284 = &g_187[6];
        int i, j;
        (*l_78) = 7L;
        (*l_101) = func_80(p_76, func_84(func_89(g_39, &g_79, ((((l_103 = (safe_mod_func_uint8_t_u_u((g_79 && (g_39 , 0xFB48103BL)), ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((+(((*l_101) = &p_72) != (void*)0)), g_79)), g_79)) || (*l_78))))) == g_39) , l_103) >= 0xE8EEL), l_104, g_39), &g_79, g_39, p_74), g_39);

        ;
        for (l_103 = 0; (l_103 <= 0); l_103 += 1)
        {
            short *l_282[8];
            char ****l_285 = &l_284;
            int i, j;
            for (i = 0; i < 8; i++)
                l_282[i] = &l_104;
            (*l_101) = (((safe_add_func_uint32_t_u_u(((0x4DE35C32L && l_77[(l_103 + 5)][p_72]) ^ ((g_79 ^ ((((l_281 ^ (-5L)) & (((g_283 = g_116[6]) & ((((*l_285) = l_284) != (void*)0) && p_73)) && (-4L))) & g_107) , l_77[(l_103 + 5)][p_72])) & 6UL)), (*g_124))) , p_73) , (void*)0);

            ;
        }
    }

    ;
    if (((((safe_lshift_func_int16_t_s_s(l_77[1][0], 15)) , g_116[6]) == l_103) , l_77[2][0]))
    {
        int **l_288 = &g_124;
        unsigned l_300 = 0xBBBAEF6CL;
        char *l_301 = &g_116[6];
        int *l_302[1];
        int i;
        for (i = 0; i < 1; i++)
            l_302[i] = &l_103;
        (*l_288) = &p_72;

        ;
        g_113 = ((p_72 = ((safe_add_func_uint32_t_u_u((g_39 || (**l_288)), (((((+p_72) && (safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s(0x13FC4F8BL, (l_295 , (safe_lshift_func_uint16_t_u_u(((((*l_301) = (safe_mod_func_uint16_t_u_u(l_300, 0x75CBL))) , p_76) > p_75), l_77[5][0]))))) >= g_283), p_74))) & p_73) >= l_103) , 4294967293UL))) == (**l_288))) < p_73);
    }
    else
    {
        l_303 = &g_79;

        ;
        (*g_124) = (*l_303);
        g_138 = &l_103;

        ;
        for (g_134 = 0; (g_134 <= (-26)); g_134 = safe_sub_func_int32_t_s_s(g_134, 1))
        {
            short l_306 = 0x7B51L;
            (*g_138) = l_306;
        }
    }

    ;
    ;
    ;
    (*g_124) = (safe_add_func_uint8_t_u_u(g_79, (((*l_329) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_77[2][0], (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((((g_328 = ((g_317[3][5][4] = g_283) & ((safe_mul_func_int16_t_s_s(p_72, p_76)) != (p_74 >= (safe_sub_func_uint32_t_u_u((g_116[6] , (((*l_326) = ((*l_325) = (p_72 , ((g_324[1] = (safe_mul_func_int16_t_s_s(l_103, g_107))) || 0xE5L)))) , g_283)), 0x48145E0EL)))))) , (void*)0) != (void*)0) , p_73), p_73)) != p_74), g_169)))), p_72))) == p_74)));
    return l_295;



}







static int * func_80(int p_81, int * p_82, short p_83)
{
    int *l_133 = &g_134;
    int l_207[1];
    int ***l_252 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_207[i] = (-4L);
    if ((g_79 , 0x0B1E1499L))
    {
        int *l_112 = &g_113;
        int **l_114 = &l_112;
        char *l_115 = &g_116[6];
        (*l_112) = ((*p_82) = g_79);
        (*p_82) = (((*l_115) = ((((*l_114) = p_82) != &g_79) , (+g_39))) , g_113);

        ;
        (*l_114) = (void*)0;

        ;
        (*l_114) = p_82;

        ;
    }
    else
    {
        short l_119 = 4L;
        int *l_122 = &g_113;
        unsigned l_132 = 4UL;
        unsigned short l_175 = 0x5919L;
        unsigned **l_234 = (void*)0;
        if ((safe_mul_func_int16_t_s_s((0x7DF8BB41L <= l_119), (safe_mul_func_uint16_t_u_u(0x2DE5L, g_39)))))
        {
            int **l_123[4] = {&l_122, &l_122, &l_122, &l_122};
            int l_135 = (-3L);
            int i;
            g_124 = l_122;

            ;
lbl_149:
            if ((g_113 & g_39))
            {
                unsigned short l_129 = 1UL;
                for (g_107 = 0; (g_107 <= 48); ++g_107)
                {
                }
                for (l_132 = 0; (l_132 < 24); l_132 = safe_add_func_int32_t_s_s(l_132, 2))
                {
                    return &g_113;


                }
                if (g_113)
                    goto lbl_149;
                p_82 = g_138;

                ;
            }
            else
            {
                short l_147[1][5][10] = {{{0x2F9EL, 0x8234L, 0x8234L, 0x2F9EL, 0xAC2EL, (-2L), 0xA476L, (-1L), (-1L), 0xCFD0L}, {0x2F9EL, 0x8234L, 0x8234L, 0x2F9EL, 0xAC2EL, (-2L), 0xA476L, (-1L), (-1L), 0xCFD0L}, {0x2F9EL, 0x8234L, 0x8234L, 0x2F9EL, 0xAC2EL, (-2L), 0xA476L, (-1L), (-1L), 0xCFD0L}, {0x2F9EL, 0x8234L, 0x8234L, 0x2F9EL, 0xAC2EL, (-2L), 0xA476L, (-1L), (-1L), 0xCFD0L}, {0x2F9EL, 0x8234L, 0x8234L, 0x2F9EL, 0xAC2EL, (-2L), 0xA476L, (-1L), (-1L), 0xCFD0L}}};
                short *l_148 = &l_147[0][0][8];
                int i, j, k;
                (*l_133) = ((((!((*l_148) = ((safe_div_func_uint16_t_u_u(p_81, 0xDAFAL)) <= ((*l_133) & (g_107 > (safe_div_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((p_83 & p_83), (3UL & ((((safe_mod_func_int8_t_s_s(p_83, l_147[0][0][8])) == (*l_122)) != p_81) || 0x9EL)))) , g_39), 6UL))))))) , g_107) , g_116[1]) & g_107);
                return &g_79;


            }

            ;
            for (l_119 = 0; (l_119 < 20); l_119 = safe_add_func_int32_t_s_s(l_119, 1))
            {
                return &g_79;


            }
        }
        else
        {
            char *l_156 = &g_116[6];
            char **l_155[8] = {&l_156, &l_156, &l_156, &l_156, &l_156, &l_156, &l_156, &l_156};
            int **l_157 = &l_133;
            int i;
            for (p_81 = 0; (p_81 > (-14)); p_81 = safe_sub_func_int16_t_s_s(p_81, 6))
            {
                char **l_154[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_154[i] = (void*)0;
                l_155[0] = l_154[0];
                if ((*p_82))
                    break;
            }


            (*l_157) = (void*)0;

            ;
            (*l_157) = (*l_157);
            (*l_157) = func_89(((safe_sub_func_uint32_t_u_u(g_116[6], (*p_82))) && (p_81 == (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((void*)0 == g_164), (*l_122))) >= g_134), ((*l_122) , p_83))))), &g_79, (*g_124), g_79, p_83);

            ;
        }

        ;
        ;
        for (p_81 = 3; (p_81 <= 8); p_81 += 1)
        {
            unsigned short l_212 = 0xB18AL;
            unsigned *l_233 = &g_107;
            unsigned **l_232[8][6] = {{&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}, {&l_233, (void*)0, &l_233, (void*)0, &l_233, &l_233}};
            int l_248 = 1L;
            unsigned short l_274 = 0xE7ADL;
            int i, j;
        }
    }

    ;
    ;
    return p_82;


}







static int * func_84(int * p_85, int * p_86, unsigned p_87, unsigned short p_88)
{
    int *l_110 = &g_79;
    int *l_111 = &g_79;
    (*p_85) = (safe_sub_func_uint32_t_u_u((l_110 != l_111), (*p_86)));
    return l_110;


}







static int * func_89(int p_90, int * p_91, int p_92, char p_93, short p_94)
{
    int l_105 = 3L;
    unsigned *l_106 = &g_107;
    l_105 = ((((*l_106) = l_105) , p_94) , (0x90L && g_79));
    return &g_79;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_116[i], "g_116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_317[i][j][k], "g_317[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_324[i], "g_324[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_327[i], "g_327[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_803[i][j][k], "g_803[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_811, "g_811", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_828[i][j][k], "g_828[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1201, "g_1201", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1427, "g_1427", print_hash_value);
    transparent_crc(g_1511, "g_1511", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
