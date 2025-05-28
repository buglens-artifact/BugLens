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



static int g_5 = (-1L);
static int *g_19 = (void*)0;
static int **g_18[1] = {&g_19};
static int g_22 = 8L;
static int g_23 = 0x628217C7L;
static unsigned char g_58 = 249UL;
static long long g_64[2][2] = {{9L, 2L}, {9L, 2L}};
static unsigned long long g_67 = 8UL;
static unsigned long long g_98 = 18446744073709551606UL;
static long long g_107 = (-4L);
static long long *g_106 = &g_107;
static unsigned short g_114 = 65534UL;
static short g_121[9] = {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L};
static unsigned char g_126 = 0UL;
static unsigned long long g_128 = 0UL;
static int g_136 = 0x31241CAEL;
static unsigned char g_141 = 2UL;
static unsigned g_152 = 0xF6D39C23L;
static int g_163 = 0x2DFFA464L;
static unsigned long long g_173[10][5][5] = {{{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}, {{0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}, {0xF7CBC24AECF75C71LL, 0xB5A70E1A0D32EC22LL, 0x4062DC60C70B8458LL, 2UL, 18446744073709551614UL}}};
static unsigned *g_179 = &g_152;
static unsigned **g_178 = &g_179;
static int *g_181[1] = {(void*)0};
static char g_222 = 0x7DL;
static unsigned long long g_270 = 0x62A6EB47831BFA4BLL;
static int ***g_288 = (void*)0;
static int ****g_287 = &g_288;
static int *****g_286[2][6][5] = {{{&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}}, {{&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}, {&g_287, &g_287, &g_287, &g_287, &g_287}}};
static long long **g_315 = &g_106;
static int *g_347 = &g_22;
static short *g_393 = (void*)0;
static short **g_392 = &g_393;
static short ***g_391 = &g_392;
static unsigned long long *g_407 = (void*)0;
static unsigned long long **g_406[2][10][2] = {{{&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}}, {{&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}, {&g_407, &g_407}}};
static short g_456 = 0x3111L;
static unsigned short *g_493 = &g_114;
static int g_524 = 8L;
static unsigned short g_529 = 1UL;
static short g_541 = 0x0FCEL;
static int *g_559 = (void*)0;
static char *g_576 = &g_222;
static char **g_575 = &g_576;
static int g_583[1][5][4] = {{{0x147AAE7EL, (-10L), 0xF4A255A9L, (-8L)}, {0x147AAE7EL, (-10L), 0xF4A255A9L, (-8L)}, {0x147AAE7EL, (-10L), 0xF4A255A9L, (-8L)}, {0x147AAE7EL, (-10L), 0xF4A255A9L, (-8L)}, {0x147AAE7EL, (-10L), 0xF4A255A9L, (-8L)}}};
static short g_594[6] = {0x7FA2L, 0x7FA2L, 0x7FA2L, 0x7FA2L, 0x7FA2L, 0x7FA2L};
static unsigned g_659 = 0x3A9D2673L;
static unsigned short **g_671 = (void*)0;
static unsigned short ***g_670 = &g_671;
static unsigned char *g_711 = &g_58;
static unsigned char **g_710 = &g_711;
static unsigned *g_717[2][9] = {{(void*)0, &g_659, (void*)0, &g_659, (void*)0, &g_659, (void*)0, &g_659, (void*)0}, {(void*)0, &g_659, (void*)0, &g_659, (void*)0, &g_659, (void*)0, &g_659, (void*)0}};
static unsigned **g_716 = &g_717[0][0];
static unsigned short g_746 = 9UL;
static short g_776[5] = {0xCECEL, 0xCECEL, 0xCECEL, 0xCECEL, 0xCECEL};
static char g_794 = (-4L);
static unsigned long long g_827 = 18446744073709551615UL;



static int func_1(void);
static int ** func_6(unsigned char p_7, int p_8);
static long long func_9(unsigned char p_10, unsigned long long p_11);
static char func_12(unsigned long long p_13, unsigned char p_14, int ** p_15, unsigned p_16, long long p_17);
static int func_47(long long p_48, unsigned long long p_49, unsigned p_50, char p_51, int ** p_52);
static int ** func_70(int p_71, unsigned p_72);
static unsigned long long * func_77(char p_78, unsigned char * p_79, unsigned long long p_80, unsigned p_81, int p_82);
static int func_83(int * p_84, int * p_85, int ** p_86);
static int * func_88(unsigned long long p_89, unsigned p_90, int p_91, unsigned p_92);
static int func_93(unsigned short p_94, int p_95, unsigned long long * p_96);
static int func_1(void)
{
    int **l_2 = (void*)0;
    int *l_4 = &g_5;
    int **l_3 = &l_4;
    long long l_44 = 0x98BA832A49E864ADLL;
    int ***l_748 = (void*)0;
    int ***l_749 = &l_3;
    unsigned long long **l_758 = &g_407;
    char l_763 = (-4L);
    unsigned l_764[9] = {0x6B579C0BL, 0x6B579C0BL, 0xFB08160BL, 0x6B579C0BL, 0x6B579C0BL, 0xFB08160BL, 0x6B579C0BL, 0x6B579C0BL, 0xFB08160BL};
    unsigned **l_769 = &g_717[0][0];
    unsigned l_786 = 18446744073709551610UL;
    char l_799[4];
    unsigned char l_802 = 0x96L;
    long long l_809 = (-1L);
    int *l_828 = (void*)0;
    int l_831 = (-3L);
    int l_876[5] = {9L, 0x786C47ACL, 9L, 0x786C47ACL, 9L};
    unsigned l_877 = 4294967292UL;
    int i;
    for (i = 0; i < 4; i++)
        l_799[i] = 0x70L;
    (*l_3) = (void*)0;

    ;
    (*l_749) = func_6(g_5, ((((func_9(g_5, (0xBF2D3F5047C4D145LL && (func_12(g_5, (((void*)0 != &g_5) > g_5), g_18[0], g_5, g_5) < 1UL))) <= g_5) | g_5) || g_23) < l_44));

    ;


    ;
    if ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((*g_493) == (safe_mod_func_uint64_t_u_u((((+(**g_315)) | (((void*)0 != l_758) & (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((l_763 = ((**g_315) == 0xE1CC66BA965B5C37LL)) && l_764[7]), 6)) || 0xC66EL), 2)))) || (**g_178)), (*g_106)))), (**g_575))), 4)), (*g_711))))
    {
        unsigned long long **l_765 = &g_407;
        int l_773 = 0x857704CFL;
        unsigned char l_785 = 0x3EL;
        int *l_803 = &g_23;
        unsigned short l_820 = 0x337EL;
        short l_821 = 0L;
        long long ***l_834 = &g_315;
        char l_856 = (-10L);
        unsigned l_863 = 0UL;
        unsigned long long l_865 = 5UL;
        for (g_128 = 2; (g_128 <= 8); g_128 += 1)
        {
            unsigned **l_768 = &g_717[1][7];
            int **l_781 = &l_4;
            int l_784 = 0xE2C8429EL;
            unsigned long long **l_788 = &g_407;
            int l_810 = 1L;
            short l_819 = (-1L);
            long long l_835 = 0x427EC55F781F75BFLL;
            int l_864[7] = {(-6L), 0x408B8094L, (-6L), 0x408B8094L, (-6L), 0x408B8094L, (-6L)};
            int *l_866[10][10] = {{&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}, {&g_23, &g_163, (void*)0, &g_163, &g_23, &l_864[0], &g_524, &g_163, (void*)0, &g_22}};
            int i, j;
            if (g_121[g_128])
            {
                unsigned ***l_770 = (void*)0;
                unsigned ***l_771 = (void*)0;
                unsigned ***l_772 = &g_716;
                int l_777 = 0x1EFD3988L;
                (**l_749) = func_88(((((void*)0 == l_765) | (**g_575)) < (safe_lshift_func_uint8_t_u_s((l_768 == ((*l_772) = l_769)), 3))), (l_773 >= (safe_add_func_int16_t_s_s(g_121[g_128], g_776[0]))), ((-4L) >= g_121[g_128]), l_777);

                ;
            }
            else
            {
                long long l_780 = (-1L);
                int l_782 = 0x6F13E546L;
                unsigned char l_783 = 253UL;
                int *l_790 = &g_583[0][3][0];
                (*l_3) = func_88((l_782 = func_9(((**g_710) = g_121[g_128]), func_12((safe_add_func_int64_t_s_s(l_773, ((g_121[g_128] > (**g_178)) && g_23))), l_780, l_781, l_773, g_121[g_128]))), l_783, l_784, l_785);
                for (g_114 = 1; (g_114 <= 4); g_114 += 1)
                {
                    int **l_800[9] = {(void*)0, &l_4, (void*)0, &l_4, (void*)0, &l_4, (void*)0, &l_4, (void*)0};
                    short **l_818 = &g_393;
                    short ***l_817 = &l_818;
                    long long l_829[5] = {0L, 1L, 0L, 1L, 0L};
                    unsigned short *l_830 = &l_820;
                    int i;
                    l_786 = g_776[g_114];
                    if (l_782)
                    {
                        unsigned long long ***l_787[6] = {&l_765, &l_765, &l_765, &l_765, &l_765, &l_765};
                        int *l_789 = &l_782;
                        int i;
                        l_788 = (void*)0;

                        ;
                        (*l_3) = l_789;
                        (*l_3) = l_790;
                    }
                    else
                    {
                        char l_791[9] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
                        unsigned char *l_801 = &g_141;
                        char l_804 = (-2L);
                        int i;
                        if (l_785)
                            break;
                        l_803 = func_88(l_791[8], ((**g_178) = (((+(((*l_801) = (((*g_711) = (safe_mod_func_int64_t_s_s(((**g_315) = 0x74D5C50720212C91LL), g_794))) && func_12((0x0CL && (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(255UL, 5)), (*l_790)))), (((*g_711) = l_799[3]) <= ((**g_575) = (**g_575))), l_800[7], (*l_790), (**g_315)))) ^ g_173[8][1][3])) > (*l_790)) <= 0xBCL)), l_802, l_791[8]);

                        ;
                        l_810 = ((((l_804 & 0x00A1L) & (!(safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((*g_576) = (0x65L || (*g_576))) & ((0xD7EAEA88L | (*g_179)) == ((*g_711) || (l_791[8] | (*l_790))))), 6)) >= l_809), g_107)))) <= 0xC6L) == (*g_711));
                        if (l_791[0])
                            break;
                    }
                    if ((((g_583[0][4][3] & (((void*)0 == &l_790) > (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((func_9(((**g_710) = ((safe_rshift_func_int16_t_s_u((((*g_391) == ((*l_817) = (*g_391))) || ((0x90L >= (0xD99AL < 0xF697L)) ^ (func_47((*g_106), (*l_790), (**g_178), (*g_576), &l_790) & l_819))), (*l_790))) == (*l_790))), l_820) > (*l_790)), 0x8EBAL)), 6UL)))) || 0xCB78L) ^ 0x2702L))
                    {
                        int l_822 = 8L;
                        char *l_825 = &g_222;
                        int l_826 = 0xCAB752E3L;
                        (**l_749) = func_88((l_821 >= l_822), ((~(*l_790)) ^ ((0x84L != ((safe_sub_func_uint16_t_u_u(65535UL, l_822)) && l_822)) & (l_782 = (l_826 = ((**g_575) & (l_825 == (void*)0)))))), g_827, l_822);
                    }
                    else
                    {
                        (*l_3) = l_828;
                    }
                    if ((((-1L) == (l_829[1] && ((*l_830) = (*g_493)))) || ((l_831 > (**g_575)) != 0x02L)))
                    {
                        (**l_749) = (void*)0;
                    }
                    else
                    {
                        unsigned char l_836 = 1UL;
                        (**l_749) = func_88((safe_lshift_func_uint16_t_u_u(func_9((*g_711), (*l_790)), 0)), (&g_315 == l_834), l_835, l_836);
                        (*l_790) = l_836;
                        (*l_781) = (void*)0;
                    }
                    for (g_141 = 0; (g_141 <= 1); g_141 += 1)
                    {
                        int *l_837 = &l_773;
                        int i, j, k;
                        (*l_790) = l_835;
                        (*l_3) = &l_773;
                        (*l_3) = l_837;
                    }
                }





                ;
                (*l_790) = ((1UL <= 0xCF5DD8EBL) >= ((*g_493) = (*g_493)));
            }

            ;
            (**l_749) = (*l_781);
            l_831 = (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((void*)0 == (*g_710)), (safe_rshift_func_uint8_t_u_u(((((((safe_rshift_func_int16_t_s_u(g_128, 14)) || (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((**g_710) = (((safe_rshift_func_int16_t_s_u((((~(g_121[g_128] < l_856)) && (l_810 <= (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(6UL, l_821)), func_9(func_9(((void*)0 == l_765), l_863), l_820))), g_121[g_128])))) != 0x55L), 9)) && l_864[0]) && (**g_575))), 1)), l_865)), l_821))) >= 0L) >= 0L) >= (-1L)) < 0L), 7)))), g_746));
            (*l_781) = (*l_781);
        }





        ;
    }
    else
    {
        unsigned short l_873[8] = {1UL, 1UL, 0x55FCL, 1UL, 1UL, 0x55FCL, 1UL, 1UL};
        unsigned short l_874 = 1UL;
        int i;
        for (g_128 = 0; (g_128 >= 20); g_128 = safe_add_func_uint16_t_u_u(g_128, 3))
        {
            for (l_44 = 14; (l_44 <= 16); l_44++)
            {
                for (g_98 = (-30); (g_98 > 17); ++g_98)
                {
                    if (l_873[1])
                        break;
                }
            }
        }
        return l_874;
    }




    for (g_126 = 0; (g_126 <= 4); g_126 += 1)
    {
        int *l_875[1][3][6] = {{{&g_583[0][1][0], &g_163, &g_583[0][4][3], &g_163, &g_583[0][1][0], &g_163}, {&g_583[0][1][0], &g_163, &g_583[0][4][3], &g_163, &g_583[0][1][0], &g_163}, {&g_583[0][1][0], &g_163, &g_583[0][4][3], &g_163, &g_583[0][1][0], &g_163}}};
        int i, j, k;
        l_876[4] = (l_831 = g_121[(g_126 + 2)]);
    }
    return l_877;
}







static int ** func_6(unsigned char p_7, int p_8)
{
    short l_45 = 0x1140L;
    int l_46 = (-1L);
    unsigned char *l_57 = &g_58;
    int **l_59 = &g_19;
    unsigned **l_679 = &g_179;
    int ****l_686 = (void*)0;
    unsigned long long **l_705 = &g_407;
    unsigned char ***l_721 = &g_710;
    unsigned ***l_733 = &g_716;
    char l_734 = 0x60L;
    unsigned long long *l_737 = &g_67;
    unsigned long long *l_738 = &g_173[5][3][1];
    long long **l_745[4];
    int i;
    for (i = 0; i < 4; i++)
        l_745[i] = &g_106;
    l_46 = l_45;
    if (func_47(func_9((safe_lshift_func_int8_t_s_s(g_23, 1)), l_46), func_9(g_23, l_46), (((g_23 < func_9(((*l_57) = ((safe_rshift_func_int16_t_s_s(p_8, 14)) >= (p_8 > l_45))), l_46)) != p_7) < 0x69L), p_8, l_59))
    {
        char **l_610[10][8][3] = {{{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}, {{&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}, {&g_576, &g_576, &g_576}}};
        char ***l_611 = &l_610[9][2][2];
        int l_617 = 1L;
        int l_620 = (-1L);
        unsigned short *l_621 = &g_529;
        int i, j, k;
        (*l_611) = l_610[9][2][2];
        (*l_59) = func_88((p_8 == func_12(((p_8 || (((safe_sub_func_uint16_t_u_u(((*l_621) = ((*g_493) = (((*g_179) = (safe_unary_minus_func_uint64_t_u(((*g_493) || 65533UL)))) & (safe_add_func_int32_t_s_s((((l_617 = p_7) >= (safe_rshift_func_uint16_t_u_u(65535UL, ((l_46 = ((*g_576) = l_620)) || (func_9(g_5, ((*g_576) <= 0xACL)) ^ l_620))))) ^ p_7), l_620))))), p_7)) || p_7) != 2L)) & 0x3B27L), p_8, l_59, g_136, (**g_315))), p_7, p_7, g_594[1]);
    }
    else
    {
        long long l_634 = 1L;
        int l_649 = 0x639B5CB7L;
        unsigned char *l_666 = (void*)0;
        int **l_676[7] = {&g_181[0], &g_181[0], &g_559, &g_181[0], &g_181[0], &g_559, &g_181[0]};
        int **l_682[2];
        unsigned long long **l_704[10][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
        unsigned char ***l_722 = &g_710;
        unsigned long long l_723 = 0xDCCE4D5D3B2BA91ALL;
        unsigned short *l_728 = &g_529;
        int i, j;
        for (i = 0; i < 2; i++)
            l_682[i] = &g_19;
        for (g_23 = 0; (g_23 == 14); g_23++)
        {
            unsigned long long *l_629 = &g_173[9][0][1];
            int *l_641 = &g_163;
            unsigned short **l_660[4] = {&g_493, &g_493, &g_493, &g_493};
            unsigned char **l_672 = &l_57;
            int *l_707[6];
            int i;
            for (i = 0; i < 6; i++)
                l_707[i] = &g_163;
            if (p_7)
                break;
            (*g_347) = func_9(p_8, (&p_7 != (void*)0));
            for (g_5 = (-27); (g_5 <= (-7)); g_5++)
            {
                unsigned long long *l_626 = &g_128;
                unsigned long long **l_627 = (void*)0;
                unsigned long long **l_628 = &g_407;
                unsigned long long **l_630 = &l_629;
                int l_633 = (-1L);
                unsigned char *l_667 = &g_126;
            }
            if (((*l_641) = (*l_641)))
            {
                int *l_685[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_685[i] = &l_46;
                (*l_59) = l_685[1];

                ;
                (*l_641) = ((*g_347) = (p_7 == 0x806C713CL));
                return l_676[3];



            }
            else
            {
                short *l_687 = (void*)0;
                short *l_688 = &g_541;
                int l_691 = 1L;
                char *l_699 = &g_222;
                int **l_708[3][7][10] = {{{&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}}, {{&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}}, {{&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}, {&g_559, (void*)0, &g_181[0], (void*)0, &l_641, (void*)0, (void*)0, &l_707[1], &g_181[0], &g_19}}};
                int **l_720 = &g_347;
                int i, j, k;
                if ((((*l_688) = (((void*)0 != l_686) >= (-5L))) == (safe_rshift_func_uint8_t_u_s(l_691, ((safe_lshift_func_uint16_t_u_u(func_9(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_u(p_8, ((*g_493) = ((void*)0 == l_629)))) != (l_699 == (void*)0)))), 1UL)) & (-2L)), p_8), p_7)) & 4UL)))))
                {
                    unsigned short l_706 = 65535UL;
                    int l_709 = 0xD10CEC01L;
                    (*g_347) = (*g_347);
                    (*l_59) = func_88((((safe_mod_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s((l_704[3][0] != (g_406[1][1][0] = (l_705 = &l_629))), l_706)) > l_706) ^ (**g_178)), 18446744073709551611UL)) <= 0x0BF0A138461F341DLL) < 65526UL), (*g_179), p_7, (*l_641));


                    ;
                    l_709 = l_706;
                }
                else
                {
                    unsigned char l_712 = 0UL;
                    int *l_718 = &l_649;
                    if ((p_8 || (((*g_576) = (g_710 != &g_711)) > l_712)))
                    {
                        unsigned *l_715 = (void*)0;
                        unsigned **l_714 = &l_715;
                        unsigned ***l_713[1][6][1] = {{{&l_714}, {&l_714}, {&l_714}, {&l_714}, {&l_714}, {&l_714}}};
                        int i, j, k;
                        (*l_641) = ((*g_106) != 18446744073709551613UL);
                        g_716 = (void*)0;

                        ;
                        l_641 = l_718;

                        ;
                    }
                    else
                    {
                        int *l_719 = &g_583[0][1][1];
                        (*l_59) = l_719;

                        ;
                        (*l_59) = l_719;
                        return l_720;


                    }

                    ;
                    ;
                }



                ;
            }



            ;
        }



        ;
        (*g_347) = (((l_722 = l_721) == l_721) && ((((l_666 == l_57) <= l_723) >= p_7) > (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((p_7 & p_7), ((*l_728) = ((*g_493) = (((**g_315) != p_7) | 0x8CA3L))))) & p_8), p_7))));
    }



    ;
    (*l_59) = func_88(((*l_738) = ((l_46 = (safe_lshift_func_uint8_t_u_s(0xA0L, 2))) >= ((p_7 || (l_733 == l_733)) > (l_734 <= (safe_lshift_func_uint16_t_u_u(((0x20L || p_7) && ((**g_575) = ((**g_710) || (((*l_737) = ((*g_106) ^ p_8)) && l_734)))), (*g_493))))))), (*g_179), p_8, p_7);
    for (g_541 = 1; (g_541 >= 1); g_541++)
    {
        short l_747[9] = {0xC98BL, 0xC98BL, 0L, 0xC98BL, 0xC98BL, 0L, 0xC98BL, 0xC98BL, 0L};
        int i;
        if (((*g_106) | ((*l_737) = (safe_rshift_func_int8_t_s_u(((**g_575) = (-1L)), 1)))))
        {
            long long **l_744 = &g_106;
            long long ***l_743[3][6];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                    l_743[i][j] = &l_744;
            }
            l_745[1] = (g_315 = &g_106);
        }
        else
        {
            (*l_59) = (*l_59);
            l_747[4] = g_746;
        }
        if (p_7)
            break;
    }
    return l_59;


}







static long long func_9(unsigned char p_10, unsigned long long p_11)
{
    unsigned short l_26 = 0xDC50L;
    int l_42 = 0xBEC767DBL;
    int l_43[9];
    int i;
    for (i = 0; i < 9; i++)
        l_43[i] = 0x726F2C0EL;
    l_43[4] = (safe_lshift_func_int16_t_s_u((l_26 | l_26), (safe_mod_func_int32_t_s_s(l_26, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((l_42 = ((safe_add_func_int32_t_s_s(l_26, ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint64_t_u_u(p_10, ((-3L) <= ((-7L) >= 1L)))) < (safe_unary_minus_func_uint16_t_u(l_26))), g_23)) == 0x407293CCL))) || g_22)), 0xAF2C67A9L)) > g_22), p_11)), g_5))))));
    return l_43[4];
}







static char func_12(unsigned long long p_13, unsigned char p_14, int ** p_15, unsigned p_16, long long p_17)
{
    unsigned l_20[2][5] = {{1UL, 1UL, 0x20F2D627L, 1UL, 1UL}, {1UL, 1UL, 0x20F2D627L, 1UL, 1UL}};
    int *l_21 = &g_22;
    int i, j;
    (*l_21) = l_20[1][3];
    (*l_21) = (+(3L ^ (g_23 = g_22)));
    return g_23;
}







static int func_47(long long p_48, unsigned long long p_49, unsigned p_50, char p_51, int ** p_52)
{
    long long *l_62 = (void*)0;
    long long *l_63 = &g_64[0][0];
    unsigned long long *l_65 = (void*)0;
    unsigned long long *l_66 = &g_67;
    int l_73 = (-1L);
    int ***l_174[3];
    unsigned char l_175 = 0xDEL;
    unsigned *l_177 = &g_152;
    unsigned **l_176 = &l_177;
    unsigned long long l_226 = 18446744073709551614UL;
    char l_250 = (-8L);
    int *l_296 = &l_73;
    short l_306 = 4L;
    char l_360 = 0xDDL;
    int **l_369 = &l_296;
    int *l_381 = &g_5;
    long long **l_433 = &l_62;
    unsigned short *l_491 = &g_114;
    unsigned char l_548 = 0UL;
    int l_560 = 1L;
    unsigned short **l_574 = (void*)0;
    int *****l_601 = (void*)0;
    int l_609 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_174[i] = (void*)0;
    return l_609;
}







static int ** func_70(int p_71, unsigned p_72)
{
    int *l_74 = &g_23;
    unsigned long long *l_97 = &g_98;
    unsigned long long *l_172 = &g_173[5][3][1];
    (*l_74) = p_72;
    for (p_72 = 0; (p_72 <= 22); p_72 = safe_add_func_uint32_t_u_u(p_72, 5))
    {
        int *l_87 = &g_5;
        unsigned char *l_140 = &g_141;
        unsigned long long **l_171 = &l_97;
        (*l_74) = ((g_22 == (g_23 & ((((*l_171) = func_77((((func_83(l_87, func_88(p_71, p_72, func_93(p_71, p_72, l_97), g_23), &l_87) <= g_107) <= (-9L)) == p_71), l_140, p_71, (*l_74), (*l_74))) == l_172) == p_72))) || p_71);

        ;
        ;
    }

    ;
    return &g_19;


}







static unsigned long long * func_77(char p_78, unsigned char * p_79, unsigned long long p_80, unsigned p_81, int p_82)
{
    int l_144 = (-4L);
    int l_145 = 0x61B5B55CL;
    int **l_150[5][3][5] = {{{&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}}, {{&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}}, {{&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}}, {{&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}}, {{&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}, {&g_19, &g_19, &g_19, (void*)0, (void*)0}}};
    unsigned *l_151 = &g_152;
    unsigned long long l_159 = 18446744073709551611UL;
    long long **l_165[10];
    long long ***l_166 = &l_165[2];
    unsigned **l_168[1][2];
    unsigned ***l_167 = &l_168[0][1];
    unsigned **l_170 = &l_151;
    unsigned ***l_169 = &l_170;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_165[i] = &g_106;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_168[i][j] = &l_151;
    }
    if ((0xB0BE5235L || ((*l_151) = (((safe_sub_func_int32_t_s_s(((l_144 = (l_144 | 1L)) == g_58), l_145)) <= (g_128 | 0xB411FA98L)) && (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_150[0][1][3] != (void*)0), p_82)), p_80))))))
    {
        int *l_155 = &l_145;
        int *l_156 = &g_136;
        l_155 = func_88(g_22, (safe_lshift_func_uint8_t_u_u((l_155 == (l_156 = (void*)0)), 4)), ((*l_155) = p_80), ((safe_lshift_func_int8_t_s_s(l_159, 7)) == (*p_79)));

        ;
        ;
    }
    else
    {
        unsigned short l_160 = 0xDF3CL;
        unsigned long long *l_161 = &l_159;
        unsigned long long l_162[8];
        int *l_164 = &g_163;
        int i;
        for (i = 0; i < 8; i++)
            l_162[i] = 0x0BD878CC6E09C6F5LL;
        l_160 = p_78;
        l_164 = func_88(((*l_161) = p_82), g_23, l_162[4], (g_163 = g_136));

        ;
    }
    (*l_166) = l_165[2];
    (*l_169) = ((*l_167) = &l_151);
    return &g_128;


}







static int func_83(int * p_84, int * p_85, int ** p_86)
{
    long long l_138 = 9L;
    int *l_139 = &g_136;
    l_138 = (**p_86);
    (*p_86) = l_139;


    return (*p_84);
}







static int * func_88(unsigned long long p_89, unsigned p_90, int p_91, unsigned p_92)
{
    char l_131[3];
    int ***l_132 = &g_18[0];
    int ***l_134 = (void*)0;
    int ****l_133 = &l_134;
    int *l_135 = &g_136;
    int *l_137 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_131[i] = 0x48L;
    (*l_135) = (~(l_131[2] <= (((*l_133) = (l_132 = &g_18[0])) == &g_18[0])));

    ;
    return l_137;


}







static int func_93(unsigned short p_94, int p_95, unsigned long long * p_96)
{
    int *l_100 = (void*)0;
    int **l_99 = &l_100;
    int *l_101 = (void*)0;
    int ***l_102 = &l_99;
    int ***l_103 = &g_18[0];
    (*l_99) = &p_95;

    ;
    l_101 = &p_95;

    ;
    (*l_101) = ((((*l_102) = &g_19) != ((*l_103) = &g_19)) >= (g_114 = (p_94 >= (safe_add_func_uint64_t_u_u((p_96 != g_106), (safe_sub_func_uint8_t_u_u(g_22, (((*p_96) = func_9(((safe_mod_func_int8_t_s_s((*l_101), 6UL)) & (safe_lshift_func_int8_t_s_s(p_95, 4))), (*p_96))) && (*p_96)))))))));

    ;
    for (g_98 = 0; (g_98 <= 0); g_98 += 1)
    {
        char l_115 = 0xDAL;
        short *l_120 = &g_121[2];
        unsigned char *l_122 = &g_58;
        unsigned char *l_125 = &g_126;
        unsigned long long *l_127 = &g_128;
        int l_130 = 1L;
        (*l_101) = (l_115 != ((*l_120) = (func_9(((*l_125) = (safe_mod_func_uint8_t_u_u((0UL | ((*l_122) = (safe_rshift_func_int16_t_s_u(((*l_120) = p_95), 1)))), (safe_sub_func_int64_t_s_s((*l_101), (*g_106)))))), g_5) < func_9(p_95, ((*l_127) = g_98)))));
        for (g_114 = 0; (g_114 <= 0); g_114 += 1)
        {
            char l_129 = (-10L);
            return l_129;
        }
        l_130 = ((*l_101) = 0x8DDEC24AL);
        (*l_101) = p_94;
    }
    return p_94;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_64[i][j], "g_64[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_173[i][j][k], "g_173[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_583[i][j][k], "g_583[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_594[i], "g_594[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_776[i], "g_776[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
