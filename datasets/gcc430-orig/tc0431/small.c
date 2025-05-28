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



static long long g_41 = (-8L);
static int g_47 = 0xC9B6CD04L;
static int g_52 = 0xEA1325A4L;
static volatile char g_53 = 0xA4L;
static volatile unsigned long long g_54[7][6][3] = {{{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}, {{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}, {{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}, {{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}, {{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}, {{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}, {{4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}, {4UL, 4UL, 0UL}}};
static volatile long long g_57[1][5] = {{0xB31915E3087C3CB8LL, 0xB31915E3087C3CB8LL, 0xB31915E3087C3CB8LL, 0xB31915E3087C3CB8LL, 0xB31915E3087C3CB8LL}};
static int g_58 = 0x0D6813F8L;
static volatile unsigned g_60 = 1UL;
static int g_80 = 0x5D9662A5L;
static int *g_89[1][5][7] = {{{&g_80, &g_80, &g_80, &g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80, &g_80, &g_80, &g_80}}};
static int **g_88 = &g_89[0][3][0];
static int g_174 = 0x23961558L;
static volatile unsigned g_197 = 0x752DD46FL;
static volatile int *g_301 = (void*)0;
static long long g_316 = 0x56F491FD312C2651LL;
static unsigned char g_340 = 255UL;
static unsigned char g_681[7] = {0xB1L, 3UL, 0xB1L, 3UL, 0xB1L, 3UL, 0xB1L};
static volatile unsigned g_777 = 0UL;
static int g_779 = 1L;
static char g_809 = 0x94L;
static unsigned long long g_810 = 3UL;
static volatile int g_878 = 0x2D9D640AL;
static unsigned g_953 = 0x74670618L;
static unsigned g_1013 = 4294967291UL;



static unsigned long long func_1(void);
static const long long func_2(int p_3, char p_4, unsigned p_5);
static unsigned long long func_8(unsigned long long p_9, unsigned p_10);
static unsigned short func_15(int p_16, int p_17);
static char func_21(unsigned char p_22, char p_23, int p_24, long long p_25);
static int func_31(int p_32, unsigned short p_33, unsigned long long p_34);
static int func_35(char p_36, const int p_37, unsigned p_38, unsigned p_39);
static int func_44(unsigned char p_45);
static unsigned long long func_65(int * p_66, int * p_67);
static int * func_68(int * p_69, unsigned p_70, unsigned p_71);
static unsigned long long func_1(void)
{
    int l_6 = 0x38462751L;
    unsigned long long l_7 = 18446744073709551615UL;
    char l_20 = (-1L);
    unsigned l_28 = 18446744073709551612UL;
    unsigned short l_40 = 65535UL;
    char l_1153 = 0x7AL;
    l_1153 = (func_2((l_6 & ((l_7 , func_8((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(func_15((safe_lshift_func_int16_t_s_s((l_20 == func_21(l_6, ((safe_add_func_int8_t_s_s(l_28, (safe_lshift_func_uint16_t_u_s(((func_31((func_35((l_40 , g_41), (safe_add_func_uint16_t_u_u((g_41 < func_44(g_41)), 0xE452L)), l_6, g_58) , g_57[0][3]), g_174, l_20) , l_7) , g_53), 4)))) >= 0x17L), l_20, g_174)), l_40)), l_20), 6)) != l_20), g_779)), g_779)) | g_809)), l_7, g_779) >= l_28);



    return g_57[0][3];
}







static const long long func_2(int p_3, char p_4, unsigned p_5)
{
    unsigned char l_877[8][6][3] = {{{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}, {{4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}, {4UL, 0xCFL, 0x16L}}};
    int *l_879 = &g_80;
    long long l_880[2][9] = {{9L, 0L, 0x68DC3DC5B131412FLL, 0L, 9L, 0xC643EC57E05DDE23LL, 9L, 0L, 0x68DC3DC5B131412FLL}, {9L, 0L, 0x68DC3DC5B131412FLL, 0L, 9L, 0xC643EC57E05DDE23LL, 9L, 0L, 0x68DC3DC5B131412FLL}};
    int **l_881[9] = {&l_879, &l_879, &g_89[0][3][0], &l_879, &l_879, &g_89[0][3][0], &l_879, &l_879, &g_89[0][3][0]};
    unsigned short l_1150 = 0x7CC4L;
    int i, j, k;
    (*l_879) = ((p_4 , func_8((((g_41 , (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((p_3 , (l_877[2][3][2] , (g_316 == g_878))), l_877[2][1][0])), 6))) && ((((void*)0 != l_879) != (*l_879)) & (*l_879))) > 0x65B2437030BA0DF5LL), l_880[0][2])) , (*l_879));
    g_89[0][2][2] = l_879;
    if ((safe_sub_func_uint16_t_u_u(func_44(((((safe_add_func_uint8_t_u_u(g_809, (((&g_89[0][1][4] == (((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((p_3 , (((0x83439A105DB0D511LL < p_5) , (void*)0) == (g_197 , ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(g_340, (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_mod_func_uint64_t_u_u((g_41 && g_80), 0x151E4D0DD57C98CCLL)) <= 8UL))), p_4)))), 1)) , (void*)0)))))), 0x42E78408L)) , g_80) , &g_88) != &l_881[7]) , (void*)0)) && g_41) , g_60))) >= g_809) <= 0xA315L) ^ g_779)), p_4)))
    {
        unsigned l_898 = 0x4225008FL;
        int *l_902 = &g_80;
        int l_917 = 0L;
        int l_983 = 0L;
        int l_987 = 0L;
        int l_989 = 0x6A40D224L;
        int l_990 = 0L;
        int l_991 = 2L;
        int l_992 = 0x832CD27FL;
        int l_993 = (-5L);
        int l_994 = 1L;
        int l_995 = (-7L);
        int l_996 = (-1L);
        int l_997 = 0L;
        int l_998 = (-1L);
        int l_999 = 0x78CF0A4CL;
        int l_1000 = 0xC1048C75L;
        int l_1001 = 0x06D175EAL;
        int l_1003 = 1L;
        int l_1004 = 1L;
        int l_1005 = 0x9F2980A5L;
        int l_1006 = 0x7C2988B0L;
        int l_1007 = 0xF4F81416L;
        int l_1008 = 0x5D658C7AL;
        const char l_1028[3][10] = {{0x95L, 0x95L, 0L, 0xEAL, 0x9BL, 0xEAL, 0L, 0x95L, 0x95L, 0L}, {0x95L, 0x95L, 0L, 0xEAL, 0x9BL, 0xEAL, 0L, 0x95L, 0x95L, 0L}, {0x95L, 0x95L, 0L, 0xEAL, 0x9BL, 0xEAL, 0L, 0x95L, 0x95L, 0L}};
        unsigned long long l_1053 = 18446744073709551615UL;
        int l_1064 = 0xFE381E77L;
        int i, j;
        if (l_898)
        {
            int **l_899 = &g_89[0][3][0];
            int l_908[9];
            unsigned l_918 = 4294967292UL;
            long long l_935 = 0x815702C2D0D9229ELL;
            const char l_978 = 1L;
            int i;
            for (i = 0; i < 9; i++)
                l_908[i] = 1L;
            if (((((void*)0 == l_899) , ((safe_mod_func_int16_t_s_s(g_47, 1L)) && (l_902 == (void*)0))) && ((g_681[1] == p_5) != (p_5 <= 1UL))))
            {
                int *l_903 = &g_80;
                (*l_899) = l_903;
                for (g_41 = (-5); (g_41 > 3); ++g_41)
                {
                    return (*l_879);
                }
                (*l_902) ^= p_4;
            }
            else
            {
                unsigned short l_928 = 0x5757L;
                int l_936 = 1L;
                int **l_961 = &g_89[0][3][6];
                int l_986[9];
                char l_1002 = 0x46L;
                int i;
                for (i = 0; i < 9; i++)
                    l_986[i] = 0x8E7DF6DBL;
                if ((safe_lshift_func_uint8_t_u_s(0x77L, (((g_41 , (l_908[1] , &g_89[0][2][2])) == l_899) , p_3))))
                {
                    unsigned char l_913[8][9][3] = {{{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}, {{0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}, {0xAEL, 0x47L, 5UL}}};
                    int i, j, k;
                    (*l_902) = p_3;
                }
                else
                {
                    short l_915 = (-10L);
                    int l_916 = 0x21CABC81L;
                    --l_918;
                    for (g_810 = 0; (g_810 <= 0); g_810 += 1)
                    {
                        unsigned long long l_921 = 18446744073709551610UL;
                        (*l_899) = (void*)0;
                        (*l_902) = (g_53 , (*l_879));
                        l_921--;
                    }
                }
                (*l_899) = func_68(&g_47, ((((((safe_mod_func_uint16_t_u_u(p_3, (func_31(((safe_lshift_func_uint16_t_u_u(1UL, p_4)) >= func_21(p_5, (l_928 , p_3), p_4, g_810)), l_935, g_52) ^ l_928))) < l_928) <= l_928) && (-1L)) , 0UL) ^ g_681[0]), g_779);
                if (p_5)
                {
                    unsigned long long l_943 = 18446744073709551615UL;
                    int * const l_952[8][1] = {{&l_908[1]}, {&l_908[1]}, {&l_908[1]}, {&l_908[1]}, {&l_908[1]}, {&l_908[1]}, {&l_908[1]}, {&l_908[1]}};
                    int *l_954 = &l_908[4];
                    int l_955[4] = {0xC33BA656L, 0xBCE09F37L, 0xC33BA656L, 0xBCE09F37L};
                    int i, j;
                    for (l_898 = 0; (l_898 <= 1); l_898 += 1)
                    {
                        int i;
                        l_936 |= ((*l_902) != 0xA8600D2BF05411E8LL);
                        l_908[1] ^= (func_31((((p_4 , (safe_mod_func_uint16_t_u_u((l_881[(l_898 + 6)] != &g_301), (p_4 , 7L)))) & (((void*)0 == &l_879) ^ ((((safe_rshift_func_int8_t_s_s(((*l_902) && ((safe_mod_func_uint16_t_u_u(g_777, l_943)) && p_5)), (*l_902))) , l_936) , 0x0D01L) == g_681[0]))) | p_5), p_5, g_681[0]) < p_4);
                        if (p_5)
                            continue;
                    }
                    (*l_879) = ((g_197 > p_4) , func_8((g_47 != p_3), (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_3, ((*l_902) <= (((safe_mod_func_int8_t_s_s(((func_31((safe_rshift_func_uint16_t_u_u((func_31((l_952[0][0] != (void*)0), g_52, g_54[5][2][2]) < 0x290ED24A6666118BLL), 2)), g_953, p_5) <= p_5) >= 0x23C59653L), g_953)) != (*l_902)) < 18446744073709551615UL)))) , g_54[5][2][2]), 2))));
                    if ((func_44(g_52) || (18446744073709551610UL && func_31((((p_5 , ((l_955[1] >= (p_5 <= p_5)) == p_3)) , p_4) , 0x53FDB161L), l_936, p_3))))
                    {
                        (*l_954) |= p_3;
                    }
                    else
                    {
                        int l_956 = 0xD69DBAF6L;
                        (*l_954) &= ((p_3 ^ l_956) > (safe_sub_func_int32_t_s_s(0x6D312B4DL, (p_5 == ((safe_mod_func_uint64_t_u_u((((((!(l_956 && func_44((&l_952[4][0] != (void*)0)))) != 0xB5DFB82BL) , g_57[0][3]) ^ 6L) , (*l_902)), p_4)) ^ 1UL)))));
                        (*l_902) &= (p_3 || p_3);
                    }
                }
                else
                {
                    int l_979 = (-1L);
                    int l_980 = 0L;
                    int l_981 = 2L;
                    int l_982 = 0x1067FFBEL;
                    int l_984 = 0xCAD19525L;
                    int l_985 = 1L;
                    int l_988[7];
                    unsigned long long l_1009 = 5UL;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_988[i] = 0x65A43F09L;
                    for (l_918 = 0; (l_918 != 22); l_918 = safe_add_func_int8_t_s_s(l_918, 6))
                    {
                        l_936 &= (((((p_4 <= 0xE64E2AAE23FE5132LL) || func_44(((safe_sub_func_uint16_t_u_u(p_5, (*l_902))) ^ (p_5 == (safe_add_func_uint32_t_u_u((((((safe_add_func_uint16_t_u_u((((&g_878 == (void*)0) & ((safe_rshift_func_int16_t_s_s((((l_978 , 0xA929833480935330LL) <= p_4) || p_5), 8)) , (*l_879))) & p_3), 0L)) , 0L) <= p_3) , g_340) | 0x4F71L), g_777)))))) , p_4) & g_953) <= (-5L));
                        return g_878;
                    }
                    (*l_902) = ((0x2ACFL || (*l_902)) >= (p_5 , (((void*)0 == &l_902) ^ (func_44((0x17A5L <= (&g_88 == (void*)0))) >= 1UL))));
                    l_1009--;
                }
                (*l_961) = func_68(&g_47, g_57[0][0], p_5);
            }
            return g_52;
        }
        else
        {
            unsigned long long l_1012 = 18446744073709551615UL;
            g_1013 |= ((4L | func_8(((((func_8((((+((*l_902) != ((~l_1012) || ((p_4 < func_31(g_809, ((&l_879 == &g_301) , (0xFBF76557L > ((p_4 & 0L) == g_54[3][3][2]))), g_681[0])) > (*l_902))))) & 0x5042L) > 0xA3C9L), g_779) <= g_316) < l_1012) , l_1012) <= p_5), l_1012)) > 0x6469L);
        }
        l_987 &= (*l_902);
        for (l_991 = 0; (l_991 > (-16)); l_991 = safe_sub_func_uint32_t_u_u(l_991, 9))
        {
            unsigned l_1018 = 0x01841769L;
            long long l_1029 = 0L;
            int *l_1030 = &l_1005;
            unsigned l_1031 = 0x437D36F4L;
            int l_1043 = 0xBB515133L;
            int l_1045 = 0xA4962725L;
            unsigned l_1065 = 0xEB7FAEC1L;
            (*l_902) = ((g_57[0][4] & l_1018) != (p_3 <= (4294967289UL || (safe_mod_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u((g_47 == (-1L)))) ^ ((safe_add_func_int32_t_s_s((((safe_mod_func_int16_t_s_s(l_1028[1][1], (*l_902))) != g_58) <= g_681[3]), p_5)) && g_41)) , (*l_902)), g_681[2])) != g_80) , p_4) , (-10L)) , l_1029), p_3)))));
            l_1030 = &l_993;

            ;
            for (l_994 = 2; (l_994 >= 0); l_994 -= 1)
            {
                unsigned short l_1032 = 0x17D3L;
                int **l_1033 = &l_902;
                int l_1040 = 0xF8E7C865L;
                int l_1044 = 0xF6B7319EL;
                int l_1046 = 0x7FB6F648L;
                int l_1047 = 0xDB1D944AL;
                int l_1048 = 8L;
                unsigned short l_1068[4][9][7] = {{{0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}}, {{0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}}, {{0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}}, {{0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}, {0x0713L, 65527UL, 0xB398L, 65527UL, 0x0713L, 65527UL, 0xB398L}}};
                int *l_1075 = &l_1000;
                int i, j, k;
                for (p_4 = 2; (p_4 >= 0); p_4 -= 1)
                {
                    int l_1037 = 5L;
                    int l_1038 = 2L;
                    int l_1042[6][2][5] = {{{(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}, {(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}}, {{(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}, {(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}}, {{(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}, {(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}}, {{(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}, {(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}}, {{(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}, {(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}}, {{(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}, {(-1L), 0x8F489188L, 0x9623E919L, 0x8F489188L, (-1L)}}};
                    int i, j, k;
                    if (l_877[p_4][p_4][l_994])
                    {
                        unsigned long long l_1034[2][7] = {{0UL, 0x2AB3F88110164224LL, 2UL, 0x2AB3F88110164224LL, 0UL, 18446744073709551615UL, 0UL}, {0UL, 0x2AB3F88110164224LL, 2UL, 0x2AB3F88110164224LL, 0UL, 18446744073709551615UL, 0UL}};
                        int l_1035 = 0x7FE572B5L;
                        int i, j;
                        (*l_902) = l_1031;
                        (*l_902) ^= p_3;
                        if (l_1032)
                            break;
                        l_1035 &= ((((((0xDD734CE8D4DE288BLL ^ p_4) != l_1034[0][1]) && p_3) < 0x0352L) | (*l_902)) >= g_340);
                    }
                    else
                    {
                        int *l_1036 = &l_1008;
                        int l_1039 = 1L;
                        long long l_1041[3][6][2] = {{{0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}}, {{0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}}, {{0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}, {0x46AB837BEBB52F1ELL, 0x46AB837BEBB52F1ELL}}};
                        int l_1049 = 0xE374AF72L;
                        int l_1050 = 1L;
                        int l_1051 = (-1L);
                        int l_1052 = 1L;
                        unsigned long long l_1056 = 0x8B471EB02F6274CCLL;
                        int i, j, k;
                        g_89[0][3][0] = l_1036;
                        ++l_1053;
                        (*l_902) = func_31(p_5, (((0x8BL ^ ((l_1056 , ((*l_1030) || (*l_1036))) & p_5)) , &l_881[1]) == (void*)0), p_5);
                    }
                    l_1065++;
                }
                ++l_1068[3][1][0];
                (*l_1075) &= (safe_rshift_func_uint8_t_u_u((((((p_4 >= (func_44(((*l_879) , (safe_lshift_func_int8_t_s_s(((l_1075 == (void*)0) ^ (safe_mod_func_uint64_t_u_u((((safe_add_func_int32_t_s_s(((p_4 == (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_4, 0)), 1))) || func_31(p_3, ((((*l_1030) , p_4) , &g_47) != (void*)0), (*l_1030))), 0x7DE08370L)) , 7UL) > (-1L)), g_41))), g_197)))) || 0x9CF6D1D7L)) && 0x7EL) <= 1UL) ^ g_174) , g_47), (*l_1030)));
                for (l_898 = 0; (l_898 <= 2); l_898 += 1)
                {
                    long long l_1088 = 0x3C9646131281EFD1LL;
                    (*l_902) = ((p_5 & (safe_lshift_func_int16_t_s_s(p_4, 10))) < func_31(g_41, ((0x47L == g_316) == func_8((p_5 ^ ((p_5 != p_5) && (((func_31(g_47, g_809, g_57[0][2]) & p_5) <= l_1088) > 0xC4B6967BL))), g_52)), (*l_1030)));
                    for (l_1029 = 0; l_1029 < 1; l_1029 += 1)
                    {
                        for (l_1040 = 0; l_1040 < 5; l_1040 += 1)
                        {
                            for (l_1007 = 0; l_1007 < 7; l_1007 += 1)
                            {
                                g_89[l_1029][l_1040][l_1007] = &g_779;
                            }
                        }
                    }
                    for (l_1064 = 0; (l_1064 <= 2); l_1064 += 1)
                    {
                        if (l_1088)
                            break;
                    }
                }
            }
        }


    }
    else
    {
        unsigned short l_1091 = 0xFC60L;
        char l_1103[1];
        int l_1104[1];
        short l_1148[5][6] = {{(-8L), 0xED02L, 0L, (-8L), 0xED02L, 0L}, {(-8L), 0xED02L, 0L, (-8L), 0xED02L, 0L}, {(-8L), 0xED02L, 0L, (-8L), 0xED02L, 0L}, {(-8L), 0xED02L, 0L, (-8L), 0xED02L, 0L}, {(-8L), 0xED02L, 0L, (-8L), 0xED02L, 0L}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1103[i] = 1L;
        for (i = 0; i < 1; i++)
            l_1104[i] = 0x601D7FB7L;
        for (g_779 = (-19); (g_779 == 16); ++g_779)
        {
            (*l_879) = 0x9EABE7A9L;
            if (p_3)
                break;
        }
        l_1091 = (~(*l_879));
        l_1104[0] = (safe_rshift_func_int16_t_s_s(p_3, (0xDA21L ^ (((safe_add_func_uint8_t_u_u(g_53, ((((safe_sub_func_int32_t_s_s((g_58 , (((((safe_lshift_func_uint16_t_u_u(l_1091, ((safe_sub_func_int16_t_s_s(g_681[0], ((safe_unary_minus_func_int8_t_s(g_80)) || (p_5 < g_41)))) && g_80))) , (void*)0) != &g_88) >= l_1103[0]) != (*l_879))), p_3)) , l_1103[0]) , 0x0B07L) , 0xCEL))) && 3L) | 0UL))));
        for (g_340 = (-25); (g_340 > 48); g_340 = safe_add_func_int8_t_s_s(g_340, 3))
        {
            unsigned long long l_1107 = 0x7D5FE6D6EB6442CALL;
            int *l_1114 = (void*)0;
            if (l_1107)
                break;
            for (g_47 = 29; (g_47 >= 17); --g_47)
            {
                unsigned short l_1110 = 0xAAD0L;
                int *l_1113[10][8][3] = {{{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}, {{(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0}}};
                int ***l_1115 = &g_88;
                const unsigned long long l_1132[3] = {18446744073709551606UL, 18446744073709551606UL, 18446744073709551606UL};
                int i, j, k;
                l_1110--;
                if (((void*)0 == l_1113[5][7][1]))
                {
                    int **l_1116 = &l_1113[1][0][0];
                    (*l_879) = (((&g_47 != l_1114) != g_681[0]) | ((l_1103[0] , (&l_881[7] == l_1115)) >= (~(p_4 <= (((l_1116 == &g_301) , p_5) <= p_5)))));
                    for (p_5 = 21; (p_5 >= 28); p_5 = safe_add_func_uint64_t_u_u(p_5, 4))
                    {
                        return g_60;


                    }
                    for (l_1110 = (-25); (l_1110 != 21); l_1110 = safe_add_func_uint32_t_u_u(l_1110, 5))
                    {
                        int l_1129 = (-7L);
                        int *l_1133 = &g_779;
                        (*l_879) &= ((safe_add_func_int64_t_s_s(g_57[0][3], (((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((((p_3 , ((safe_mod_func_int32_t_s_s((((l_1129 <= l_1103[0]) < p_3) , ((((safe_lshift_func_uint8_t_u_u(p_5, 1)) == 1L) != (0x21L || g_810)) == p_5)), g_953)) < 0x5E79CC6EL)) , g_58) == (-1L)) , g_47), 5)), 0xC78F1D8BBB9A2184LL)) && l_1132[2]) && (-1L)))) || 0x1FL);
                        l_1133 = l_1114;

                        ;
                    }
                }
                else
                {
                    int * const l_1139 = &l_1104[0];
                    int l_1145 = 1L;
                    volatile int **l_1147 = &g_301;
                    volatile int ***l_1146 = &l_1147;
                    for (g_80 = 4; (g_80 < 0); g_80 = safe_sub_func_uint16_t_u_u(g_80, 7))
                    {
                        unsigned l_1138 = 0x558760C4L;
                        int **l_1140 = &g_89[0][3][0];
                        l_1138 = ((safe_lshift_func_uint8_t_u_u(g_54[5][2][2], (18446744073709551611UL != (!g_41)))) != g_681[0]);
                        (*l_1140) = l_1139;
                        l_1145 |= (((*l_1139) , ((safe_rshift_func_int8_t_s_u((l_1103[0] <= (p_3 | func_44(((*l_1139) , (safe_sub_func_uint32_t_u_u((p_5 >= g_57[0][3]), ((void*)0 == &l_1114))))))), g_810)) > g_681[1])) , p_3);
                    }
                    (*l_879) |= 0xA6B053B2L;
                    (*l_1146) = &g_301;
                    if (l_1148[1][3])
                        continue;
                }
                (*l_879) = (p_3 , (func_44((((g_60 >= ((&l_881[8] == ((g_953 <= ((((safe_unary_minus_func_uint16_t_u(p_4)) , (p_5 , l_1107)) != (p_5 , g_316)) , l_1148[1][3])) , &g_88)) , g_779)) >= l_1148[1][3]) <= g_80)) , (-1L)));
                l_1114 = &g_779;

                ;
            }

            ;
        }


    }
    l_1150++;
    return g_779;
}







static unsigned long long func_8(unsigned long long p_9, unsigned p_10)
{
    unsigned l_791 = 0x4B349789L;
    int l_792 = 0x9474D2AFL;
    long long l_800 = 0xF7E1CF624658C6C4LL;
    int **l_801 = &g_89[0][3][0];
    int l_807 = 0x6980C659L;
    int l_808[1];
    int i;
    for (i = 0; i < 1; i++)
        l_808[i] = 0x0F2C6F2FL;
    for (g_174 = 0; (g_174 != (-10)); --g_174)
    {
        unsigned char l_793 = 0x21L;
        l_792 = (safe_rshift_func_uint16_t_u_s(l_791, (!l_791)));
        return l_793;
    }
    if ((((safe_rshift_func_uint8_t_u_s((0x49L ^ ((((((p_9 , (((safe_mod_func_int64_t_s_s(0x638374A326FF30EBLL, 0x242068A381BBCC29LL)) ^ ((((0xEEBAEBD0L & ((func_31(l_792, (l_792 > ((safe_sub_func_int8_t_s_s(6L, p_10)) , g_197)), l_792) && p_9) ^ l_791)) , p_10) || l_800) > 4UL)) != 0x56L)) , l_801) == (void*)0) || 0xD2C535A1L) > p_9) > p_10)), g_52)) , 65526UL) && 0x6220L))
    {
        int *l_802 = &g_47;
        int *l_803 = &l_792;
        int *l_804 = &l_792;
        int *l_805[8][1][9] = {{{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}, {{&g_80, &g_779, &l_792, &l_792, &g_779, &g_80, (void*)0, (void*)0, &l_792}}};
        short l_806 = 0xC691L;
        unsigned short l_821 = 0x2FE5L;
        unsigned short l_837 = 65534UL;
        unsigned l_869 = 0xD603E6F1L;
        int ***l_872[8] = {&g_88, &g_88, (void*)0, &g_88, &g_88, (void*)0, &g_88, &g_88};
        int i, j, k;
        g_810--;
        if ((((((((safe_lshift_func_uint16_t_u_s((g_58 , g_777), ((p_9 && g_809) , (safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s(p_10, (((safe_lshift_func_uint8_t_u_s(((((0xBDL && func_31(p_10, g_47, p_9)) & 0x3B106661AA4887A3LL) || (-1L)) >= p_9), g_779)) ^ g_41) | p_9))), g_810))))) , g_60) != g_41) && p_10) > l_821) > 0x42L) ^ g_681[4]))
        {
            short l_822[5][5] = {{0x7E52L, 0x4C74L, (-6L), (-6L), 0x4C74L}, {0x7E52L, 0x4C74L, (-6L), (-6L), 0x4C74L}, {0x7E52L, 0x4C74L, (-6L), (-6L), 0x4C74L}, {0x7E52L, 0x4C74L, (-6L), (-6L), 0x4C74L}, {0x7E52L, 0x4C74L, (-6L), (-6L), 0x4C74L}};
            int i, j;
            return l_822[2][1];
        }
        else
        {
            long long l_828 = 0x6FC98B0992481DFELL;
            int l_831 = 3L;
            int l_832 = 3L;
            int l_833 = 0x959C2B6EL;
            int l_834 = 0x69B066B2L;
            int l_836[1][2][8] = {{{(-1L), (-7L), (-2L), (-2L), (-7L), (-1L), (-7L), (-2L)}, {(-1L), (-7L), (-2L), (-2L), (-7L), (-1L), (-7L), (-2L)}}};
            unsigned long long l_862[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_862[i] = 0UL;
            for (g_58 = 0; (g_58 == 19); g_58 = safe_add_func_int8_t_s_s(g_58, 4))
            {
                char l_829 = 0x81L;
                int l_830 = 0L;
                int l_835[8][4][3] = {{{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}, {{(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}, {(-1L), (-6L), 0x39940E45L}}};
                int i, j, k;
                for (l_791 = (-13); (l_791 == 21); l_791 = safe_add_func_int32_t_s_s(l_791, 5))
                {
                    int *l_827 = &g_80;
                    (*l_801) = func_68(l_827, l_828, g_41);
                }
                l_837--;
                if (p_9)
                    break;
                if (p_10)
                {
                    for (l_833 = 0; (l_833 < 29); l_833++)
                    {
                        if (p_9)
                            break;
                    }
                    (*l_803) = 0x6B8ECC2EL;
                }
                else
                {
                    const int l_854[2][4] = {{1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L}};
                    int l_857 = 3L;
                    int l_858 = 5L;
                    int l_859 = 0x39A55057L;
                    int l_860[9] = {0x852A5091L, 0x44435BDFL, 0x852A5091L, 0x44435BDFL, 0x852A5091L, 0x44435BDFL, 0x852A5091L, 0x44435BDFL, 0x852A5091L};
                    int l_861 = 1L;
                    int i, j;
                    (*l_804) |= (safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((p_10 != func_31((p_10 == (safe_rshift_func_int8_t_s_s(((((void*)0 == &l_830) >= (safe_lshift_func_int16_t_s_s(l_854[1][1], (0xE0CF499B014D0E08LL < p_9)))) , (safe_lshift_func_int16_t_s_u((-4L), 15))), 5))), g_80, g_340)) & g_809), p_9)), 3)), g_174)) < p_10), p_9));
                    ++l_862[2];
                    if (l_834)
                        break;
                    if (p_10)
                        continue;
                }
            }
            (*l_803) |= (safe_lshift_func_uint8_t_u_u(p_10, g_41));
            (*l_802) = func_31((safe_add_func_int16_t_s_s(p_9, (!p_9))), p_9, (((void*)0 != l_801) , (p_9 && (func_31(l_869, ((safe_mod_func_uint64_t_u_u(((((g_810 , (p_9 && 4294967295UL)) || g_57[0][3]) && l_836[0][1][7]) , 4UL), p_10)) & p_10), p_9) < 0xB52FL))));
            (*l_801) = l_805[1][0][4];


        }


        l_801 = l_801;
        g_88 = &g_89[0][0][4];

        ;
    }
    else
    {
        return p_10;
    }


    ;
    l_807 &= 0x0688B630L;
    return g_52;


}







static unsigned short func_15(int p_16, int p_17)
{
    int *l_634[1];
    unsigned long long l_655[9][3][7] = {{{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}, {{0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}, {0UL, 0x09CEA0AB7FAAC0EELL, 0UL, 0xDEC83C397AE45CC2LL, 0xAFE55E48D492E440LL, 0xDEC83C397AE45CC2LL, 0UL}}};
    short l_738[1][4];
    const unsigned char l_767 = 0x6DL;
    int l_769[6] = {0L, 0x2CD1A046L, 0L, 0x2CD1A046L, 0L, 0x2CD1A046L};
    unsigned l_776 = 0x44F6F855L;
    long long l_780 = 1L;
    int l_781 = 0x25ED6224L;
    long long l_782 = (-9L);
    int l_783 = 0xD7501360L;
    unsigned l_784 = 18446744073709551612UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_634[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_738[i][j] = (-8L);
    }
    for (g_58 = 7; (g_58 == (-3)); --g_58)
    {
        char l_635 = 0x87L;
        int *l_646 = &g_47;
        int l_651 = 0L;
        int l_652 = 0x341DBF8FL;
        int l_654 = 0xA0368AF3L;
        int l_663 = 0xF8D37CE5L;
        int l_664 = 0x17A30926L;
        int l_665 = (-5L);
        int l_666 = 0xAE69EE04L;
        short l_741 = 1L;
        int l_750 = 1L;
        if (p_16)
        {
            char l_625 = 0xCDL;
            int l_649 = (-1L);
            int l_650[3];
            int **l_658 = (void*)0;
            int *l_685 = &g_47;
            int i;
            for (i = 0; i < 3; i++)
                l_650[i] = 0x350272A5L;
            if (l_625)
                break;
            if ((p_17 != ((safe_rshift_func_uint8_t_u_s(l_625, (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((((void*)0 == l_634[0]) < ((l_625 ^ l_635) && (safe_lshift_func_uint8_t_u_s(0x2DL, 3)))), 3)) > (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_17, 9)), ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_80 > l_625), p_16)), l_625)) && p_16)))), 6)), g_52)))) , p_17)))
            {
                int l_647 = 1L;
                int l_648[8][5][3] = {{{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}, {{0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}, {0L, 0L, 0x1DC48DE4L}}};
                char l_653 = 0L;
                unsigned short l_667 = 65531UL;
                int i, j, k;
                ++l_655[5][0][1];
                p_17 = (l_658 == (void*)0);
                p_17 = ((g_54[5][2][2] && (l_648[4][4][1] , (g_53 , (~(((g_57[0][0] == p_17) <= (safe_lshift_func_uint8_t_u_u(g_340, 4))) ^ (((g_340 | ((safe_add_func_uint16_t_u_u(g_58, g_41)) || g_41)) <= p_17) , l_648[7][3][1])))))) && p_16);
                --l_667;
            }
            else
            {
                for (l_654 = 2; (l_654 >= 0); l_654 -= 1)
                {
                    return g_57[0][3];
                }
            }
            for (l_666 = 0; (l_666 <= 27); l_666 = safe_add_func_int64_t_s_s(l_666, 3))
            {
                int ***l_674[2][8] = {{&l_658, &g_88, &g_88, &g_88, &l_658, &g_88, &l_658, &g_88}, {&l_658, &g_88, &g_88, &g_88, &l_658, &g_88, &l_658, &g_88}};
                int i, j;
                p_16 ^= (safe_add_func_int64_t_s_s(g_53, g_340));
                l_658 = &g_89[0][3][0];

                ;
                g_681[0] &= (safe_add_func_int16_t_s_s((&g_89[0][2][4] == l_658), (p_16 & (safe_rshift_func_int8_t_s_s(func_21((g_52 <= ((*l_646) >= (safe_mod_func_uint64_t_u_u(p_17, (*l_646))))), p_17, p_16, g_58), 0)))));
                for (l_649 = 0; (l_649 <= 2); l_649 += 1)
                {
                    unsigned l_682 = 0x9078A39BL;
                    int *l_688 = (void*)0;
                    int l_700 = 0L;
                    l_682++;
                    for (l_654 = 0; (l_654 <= 2); l_654 += 1)
                    {
                        int *l_691 = &l_650[l_649];
                        int i, j, k;
                        (*l_658) = ((((l_655[(l_649 + 6)][l_654][(l_654 + 2)] , l_650[l_649]) , func_68(func_68(l_685, (safe_lshift_func_uint16_t_u_s(g_80, g_41)), p_17), g_174, p_16)) == &p_16) , &g_80);
                        (*l_658) = l_691;
                        l_700 ^= ((0UL == (*l_646)) ^ (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((0x2A8D7C40L <= func_44(p_17)), 3)) == (safe_lshift_func_int8_t_s_u(1L, 0))), ((safe_sub_func_uint16_t_u_u((((g_80 ^ ((p_17 , &g_80) == (void*)0)) < (*l_691)) ^ 0x4B2942BBL), p_17)) || p_16))));
                    }
                    if (p_17)
                        continue;
                    (*l_685) = 0x14716F4EL;
                }
            }


            ;
        }
        else
        {
            unsigned l_709 = 0UL;
            int * const *l_729 = &l_634[0];
            int * const **l_728 = &l_729;
            int *l_740 = &g_47;
            int l_753 = 0x586C0C36L;
            if (((g_53 < ((safe_sub_func_uint32_t_u_u(g_47, p_16)) , (*l_646))) ^ (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((g_41 | (((p_16 == ((void*)0 != &l_646)) > ((g_681[0] , (void*)0) != &l_646)) & l_709)), g_80)), 5)) < p_17) >= p_17)))
            {
                unsigned l_730 = 0x2F2AB61BL;
                int l_739 = 0xC1677034L;
                if ((l_709 || (g_41 || (+(safe_rshift_func_int16_t_s_s((-4L), 10))))))
                {
                    return g_52;
                }
                else
                {
                    unsigned l_712 = 0x0F5D06F8L;
                    l_712 = l_709;
                    for (g_41 = 4; (g_41 <= (-13)); --g_41)
                    {
                        char l_727 = 0x95L;
                        p_17 = ((safe_add_func_uint64_t_u_u(((p_16 , (safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(g_681[4], 0)) && (((func_21(g_58, g_80, p_16, (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_31(((l_727 <= (*l_646)) < ((func_44(l_709) , l_728) == (void*)0)), g_52, p_16), g_47)), g_58)), 1))) , g_316) < l_730) >= g_58)) > l_730), g_316))) , g_57[0][0]), p_17)) || 0xE6L);
                    }
                    if (p_16)
                        break;
                }
                g_80 |= func_31(((((l_730 , (-2L)) > p_17) < p_16) == (((g_54[3][2][1] && (((safe_lshift_func_int16_t_s_s(g_41, (((g_60 , g_47) , (l_730 < 0UL)) | (*l_646)))) , g_174) & p_17)) <= p_16) , 0x87E0F441920E3C57LL)), p_17, l_730);
                l_739 |= (func_31((func_31(g_57[0][0], g_80, (safe_unary_minus_func_uint8_t_u((((func_31((((void*)0 == &l_634[0]) || ((g_80 ^ ((((safe_sub_func_uint8_t_u_u(((((g_58 <= (safe_mod_func_int16_t_s_s(g_681[0], (p_16 | (0x85F0746C2168594BLL < g_681[0]))))) != l_738[0][0]) == p_16) <= p_16), g_47)) <= g_316) != l_730) >= 0x61CDL)) & p_16)), p_16, l_730) < g_80) <= p_16) ^ g_174)))) == p_16), g_316, l_730) ^ g_52);
            }
            else
            {
                char l_751 = (-1L);
                int l_754 = 1L;
                if ((0xF57EL > (*l_646)))
                {
                    int l_746[8][4][1] = {{{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}, {(-2L)}}};
                    unsigned long long l_755 = 1UL;
                    int i, j, k;
                    if (l_741)
                    {
                        return p_17;
                    }
                    else
                    {
                        unsigned short l_747 = 0x6985L;
                        int **l_748 = &l_634[0];
                        (*l_748) = ((g_197 == (((safe_rshift_func_int8_t_s_u(p_16, 6)) == (((g_47 >= ((func_31(p_17, (safe_sub_func_uint64_t_u_u((0x8BB7L < g_58), l_746[1][1][0])), g_47) != g_41) != g_47)) | p_17) || 0x16642A5CC51B86C0LL)) < l_747)) , l_634[0]);
                    }
                    for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
                    {
                        int **l_749 = &l_634[g_52];
                        int l_752 = 1L;
                        int i;
                        (*l_749) = l_634[g_52];
                        if (p_17)
                            break;
                        if (p_17)
                            continue;
                        ++l_755;
                    }
                }
                else
                {
                    if ((*l_740))
                        break;
                }
                for (g_316 = 0; (g_316 > 7); g_316++)
                {
                    const int *l_766 = &l_666;
                    p_16 |= ((safe_rshift_func_uint8_t_u_u(g_681[5], (safe_lshift_func_int8_t_s_u(((*l_646) , ((safe_lshift_func_uint16_t_u_u(((&l_665 == l_766) | (l_751 ^ (g_681[0] != func_44(p_17)))), ((&p_16 == l_766) > 0x86L))) , (-8L))), 4)))) | g_80);
                }
            }
            l_664 |= (((((g_54[5][2][1] == (func_31((g_52 > p_16), (*l_646), func_31((0x01L != l_767), (*l_646), (func_31(p_17, (((safe_unary_minus_func_uint8_t_u(((p_16 >= g_316) && g_681[3]))) , 0xFA550F09L) , g_80), g_316) | p_16))) | 0xCDDFL)) || g_52) | 0x26F504BC631229CDLL) != g_47) , l_769[1]);
        }
        l_634[0] = (void*)0;
        (*l_646) = (-1L);
    }
    for (p_16 = 9; (p_16 != 8); p_16 = safe_sub_func_uint8_t_u_u(p_16, 3))
    {
        unsigned l_772 = 0xC682E9A9L;
        int *l_775 = &l_769[1];
        int l_778 = 0x34DB62FBL;
        --l_772;
        l_775 = &g_80;

        ;
        l_778 &= (p_16 || ((l_776 | (*l_775)) , ((((p_17 ^ 1UL) <= g_316) ^ g_777) && 0x8CL)));
    }
    l_784--;
    return g_57[0][3];
}







static char func_21(unsigned char p_22, char p_23, int p_24, long long p_25)
{
    int *l_532 = &g_80;
    int *l_533 = &g_80;
    int *l_534 = (void*)0;
    int *l_535 = &g_47;
    int *l_536 = &g_80;
    int *l_537[2][3][7] = {{{&g_47, &g_80, &g_80, &g_80, &g_80, &g_80, &g_47}, {&g_47, &g_80, &g_80, &g_80, &g_80, &g_80, &g_47}, {&g_47, &g_80, &g_80, &g_80, &g_80, &g_80, &g_47}}, {{&g_47, &g_80, &g_80, &g_80, &g_80, &g_80, &g_47}, {&g_47, &g_80, &g_80, &g_80, &g_80, &g_80, &g_47}, {&g_47, &g_80, &g_80, &g_80, &g_80, &g_80, &g_47}}};
    unsigned l_538 = 0x78D56F81L;
    int ***l_566[10][3] = {{&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}, {&g_88, (void*)0, &g_88}};
    long long l_621 = (-1L);
    int i, j, k;
    l_538++;
    for (p_24 = 0; (p_24 <= 2); p_24 += 1)
    {
        unsigned short l_559 = 0xA039L;
        int **l_572 = &l_534;
        int *l_574 = &g_80;
        int l_598 = 0L;
        int l_610[7];
        int i;
        for (i = 0; i < 7; i++)
            l_610[i] = 7L;
        for (g_340 = 0; (g_340 <= 2); g_340 += 1)
        {
            unsigned short l_550 = 0xC32FL;
            unsigned l_554 = 1UL;
            int l_558 = 0x164508B7L;
            int *l_580 = (void*)0;
            int ***l_581 = &l_572;
            int l_601 = (-1L);
            int l_604 = 9L;
            int l_607 = (-4L);
            int l_611 = 0L;
            int l_615 = 0x8F20CF8FL;
            unsigned short l_617[5][8] = {{0UL, 0x0270L, 0xBC11L, 0x254BL, 3UL, 0x4D3AL, 0xFDFAL, 0x56FDL}, {0UL, 0x0270L, 0xBC11L, 0x254BL, 3UL, 0x4D3AL, 0xFDFAL, 0x56FDL}, {0UL, 0x0270L, 0xBC11L, 0x254BL, 3UL, 0x4D3AL, 0xFDFAL, 0x56FDL}, {0UL, 0x0270L, 0xBC11L, 0x254BL, 3UL, 0x4D3AL, 0xFDFAL, 0x56FDL}, {0UL, 0x0270L, 0xBC11L, 0x254BL, 3UL, 0x4D3AL, 0xFDFAL, 0x56FDL}};
            long long l_620 = 4L;
            int i, j;
            for (p_23 = 0; (p_23 <= 0); p_23 += 1)
            {
                int l_545 = 0x91D36DCEL;
                int l_557 = 1L;
                int ***l_567[2];
                unsigned short l_575 = 65535UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_567[i] = &g_88;
                if (g_54[(g_340 + 3)][(g_340 + 1)][g_340])
                {
                    const int *l_547[10][2] = {{&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}, {&l_545, &g_80}};
                    const int **l_546 = &l_547[9][1];
                    int i, j, k;
                    (*l_535) |= (safe_add_func_int8_t_s_s(g_54[(p_23 + 3)][(p_23 + 3)][p_24], (((safe_lshift_func_int16_t_s_u(((p_24 , l_545) , (*l_536)), 1)) & (&l_537[0][2][1] != l_546)) || (safe_add_func_uint64_t_u_u(((void*)0 != (*l_546)), l_550)))));
                    for (g_174 = 0; (g_174 >= 0); g_174 -= 1)
                    {
                        short l_551 = 0xDAC3L;
                        int i, j, k;
                        if (g_54[(p_23 + 5)][(p_23 + 2)][p_24])
                            break;
                        if (p_25)
                            continue;
                        g_89[g_174][(g_174 + 2)][(g_340 + 3)] = &p_24;
                        g_89[0][3][0] = ((g_52 <= func_44((0xE3L == (18446744073709551608UL && ((~(l_550 , (g_52 ^ 0x4A78L))) <= (p_22 , ((p_25 != (((l_551 , &g_47) == (void*)0) >= 6UL)) && (*l_536)))))))) , (void*)0);
                    }
                    for (l_550 = 0; (l_550 <= 2); l_550 += 1)
                    {
                        return g_80;


                    }
                    l_557 |= (safe_sub_func_int8_t_s_s(l_554, ((3L & (func_44(p_22) == p_25)) , (((((!g_52) == (p_23 , ((safe_add_func_int8_t_s_s(g_57[0][4], (((p_25 ^ g_47) & 0x72D4L) & 0xCD58L))) | 1UL))) , l_550) || p_22) != l_545))));
                }
                else
                {
                    int l_573 = 0x162326F5L;
                    int i, j, k;
                    l_559++;
                    if (((safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((((((l_566[5][1] == l_567[0]) > func_44(g_197)) , g_47) , p_23) ^ p_24) & g_58), g_340)) ^ p_23) , l_575), g_340)) , (-1L)))
                    {
                        unsigned l_578 = 18446744073709551612UL;
                        int l_579[5][6] = {{0xC8645FEBL, 0x9C1B7EA4L, 0x3E0D5A9BL, (-9L), 0x9C1B7EA4L, 0x02EC3BE7L}, {0xC8645FEBL, 0x9C1B7EA4L, 0x3E0D5A9BL, (-9L), 0x9C1B7EA4L, 0x02EC3BE7L}, {0xC8645FEBL, 0x9C1B7EA4L, 0x3E0D5A9BL, (-9L), 0x9C1B7EA4L, 0x02EC3BE7L}, {0xC8645FEBL, 0x9C1B7EA4L, 0x3E0D5A9BL, (-9L), 0x9C1B7EA4L, 0x02EC3BE7L}, {0xC8645FEBL, 0x9C1B7EA4L, 0x3E0D5A9BL, (-9L), 0x9C1B7EA4L, 0x02EC3BE7L}};
                        int i, j;
                        l_579[3][3] ^= ((g_41 , ((l_554 == ((safe_rshift_func_uint16_t_u_u((l_578 , (p_24 | p_25)), g_57[0][3])) || g_57[0][2])) > l_550)) , p_24);
                        (*l_532) = 0xCD6CC3A9L;
                    }
                    else
                    {
                        int *l_586 = &l_573;
                        l_580 = func_68(&g_80, g_57[0][3], g_58);

                        ;
                        (*l_532) ^= ((l_581 != l_566[5][1]) && (safe_add_func_int8_t_s_s(((((g_53 <= (*l_586)) | g_316) , (*l_580)) , p_25), (*l_586))));
                        (*l_572) = &g_47;
                        (*l_581) = &l_574;

                        ;
                    }
                }
                (*l_572) = &p_24;
                for (l_575 = 0; (l_575 <= 1); l_575 += 1)
                {
                    int *l_595 = &l_545;
                    int l_596 = 0x307EF05BL;
                    int l_606 = 0x4CEEC416L;
                    int l_609 = (-2L);
                    int l_612 = 0x783EE909L;
                    int l_613 = 0xBCA8BFF7L;
                    int l_614 = 0x4726740BL;
                    int i, j, k;
                    if ((safe_sub_func_uint16_t_u_u(0xE577L, (p_23 , g_340))))
                    {
                        int l_597 = 0x6F3A842FL;
                        int l_599 = (-5L);
                        int l_600 = 0x349A7D28L;
                        int l_602 = 7L;
                        int l_603 = 0xB2B45B80L;
                        long long l_605 = 0x0DE4291BCD4F6F84LL;
                        int l_608 = 0L;
                        int l_616[7][9][4] = {{{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}, {{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}, {{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}, {{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}, {{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}, {{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}, {{0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}, {0x156A6E6BL, (-8L), 0x9671B54EL, 0x3593BA46L}}};
                        int i, j, k;
                        (*l_532) = p_24;
                        (*l_595) ^= (p_23 , (safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((((&g_88 == &g_88) == g_316) >= 0UL), p_22)), g_58)), p_23)));
                        if (p_25)
                            continue;
                        l_617[4][2]--;
                    }
                    else
                    {
                        return l_620;


                    }
                    g_89[0][2][4] = (void*)0;
                }
            }

            ;
            if (p_24)
                continue;
            if ((*l_536))
                continue;
            return g_41;


        }

        ;
        ;
        (*l_572) = func_68(func_68(func_68(&g_47, ((~(*l_574)) | ((func_44(g_54[5][2][2]) , (*l_574)) , (((*l_533) ^ (((((l_566[5][1] != &g_88) , &l_572) != &l_572) != g_340) & g_57[0][3])) , 0x4077FF9DL))), g_47), p_25, g_58), (*l_536), l_621);
        for (g_47 = 2; (g_47 >= 0); g_47 -= 1)
        {
            unsigned l_622 = 0x6AF6D360L;
            return l_622;


        }
    }


    ;
    return g_53;


}







static int func_31(int p_32, unsigned short p_33, unsigned long long p_34)
{
    unsigned char l_518 = 252UL;
    int l_521 = 0x6FBBD799L;
    int l_522 = 2L;
    int l_523 = (-4L);
    int l_524 = 0xF606B2D0L;
    int l_525 = 0x8910146CL;
    int l_526 = 0xD75325AEL;
    int l_527 = 0x75978933L;
    unsigned l_528 = 4UL;
    int **l_531[7];
    int i;
    for (i = 0; i < 7; i++)
        l_531[i] = &g_89[0][3][0];
    for (g_340 = (-17); (g_340 < 49); g_340 = safe_add_func_int64_t_s_s(g_340, 5))
    {
        int *l_514 = &g_80;
        int *l_515 = &g_47;
        int *l_516 = &g_80;
        int *l_517[3];
        int i;
        for (i = 0; i < 3; i++)
            l_517[i] = (void*)0;
        --l_518;
        --l_528;
    }
    g_89[0][1][5] = &l_521;


    return p_32;


}







static int func_35(char p_36, const int p_37, unsigned p_38, unsigned p_39)
{
    int l_63 = 0x0E4B4611L;
    int *l_79 = &g_80;
    int **l_291[8] = {&g_89[0][3][0], (void*)0, &g_89[0][3][0], (void*)0, &g_89[0][3][0], (void*)0, &g_89[0][3][0], (void*)0};
    int *l_378[7][5] = {{(void*)0, &g_47, (void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0, &g_47, (void*)0}, {(void*)0, &g_47, (void*)0, &g_47, (void*)0}};
    unsigned l_389 = 4294967293UL;
    unsigned short l_457 = 0x8405L;
    unsigned short l_485 = 65535UL;
    int *l_497 = &g_47;
    unsigned short l_510 = 1UL;
    unsigned l_511[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_511[i] = 0xE44F20BCL;
    if (p_38)
    {
        const unsigned long long l_64 = 18446744073709551615UL;
        int *l_72[1][5];
        int l_334 = 8L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_72[i][j] = &g_47;
        }
        if ((((((+((l_63 | l_64) & func_65(func_68(((g_57[0][4] , ((l_63 || l_64) >= g_57[0][1])) , l_72[0][1]), ((((l_63 & (((((9L != p_38) , g_52) == (-1L)) & p_36) > g_52)) != p_36) & 0x78B9L) , p_36), p_37), l_79))) ^ p_39) , g_52) , g_60) != p_37))
        {
            (*l_79) ^= (func_44(g_57[0][3]) != g_47);
        }
        else
        {
            unsigned short l_283[8] = {0x830FL, 65534UL, 0x830FL, 65534UL, 0x830FL, 65534UL, 0x830FL, 65534UL};
            int i;
            for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
            {
                int *l_284 = (void*)0;
                int l_289 = 0xBE4F0D6DL;
                (**g_88) = ((-9L) != (safe_rshift_func_int8_t_s_u((l_283[4] | p_38), 4)));
                (**g_88) = (((l_284 == (*g_88)) | func_44(((0xEE1A7CE52054FA1BLL != (safe_lshift_func_int16_t_s_s(((p_36 || g_54[5][2][2]) == 0L), g_174))) ^ (safe_lshift_func_int8_t_s_u((1L | (p_36 && l_283[1])), 6))))) | l_283[7]);
                for (g_58 = 0; (g_58 >= 0); g_58 -= 1)
                {
                    char l_300 = (-1L);
                    int l_303 = 6L;
                    if (l_289)
                        break;
                    for (l_63 = 0; (l_63 >= 0); l_63 -= 1)
                    {
                        int ***l_290[5][6][2] = {{{&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}}, {{&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}}, {{&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}}, {{&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}}, {{&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}}};
                        short l_302[3][6] = {{0x091DL, 0x091DL, (-1L), 1L, 0x1972L, 1L}, {0x091DL, 0x091DL, (-1L), 1L, 0x1972L, 1L}, {0x091DL, 0x091DL, (-1L), 1L, 0x1972L, 1L}};
                        unsigned l_304 = 18446744073709551615UL;
                        int i, j, k;
                        l_291[0] = &g_89[g_58][(l_63 + 1)][(g_58 + 1)];
                        g_89[g_58][(g_58 + 4)][(g_58 + 1)] = (*g_88);
                        (**g_88) |= ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((l_283[4] , (safe_add_func_uint64_t_u_u(p_38, (((*g_88) != (func_44(l_300) , g_301)) != g_174)))) <= g_47) , ((p_36 | 1UL) == l_302[1][3])), 0L)), g_174)), 6)) < 1UL);
                        ++l_304;
                    }
                }
            }
            for (g_41 = 0; (g_41 <= 7); g_41 += 1)
            {
                int *l_313 = (void*)0;
                (*g_88) = (((safe_sub_func_int64_t_s_s(l_283[0], ((safe_rshift_func_int8_t_s_u(func_44(g_197), (((~0xDBL) , g_52) >= ((0xF447B531321CA8D1LL ^ (safe_sub_func_int8_t_s_s(0x9EL, 250UL))) == p_39)))) , g_60))) , (*l_79)) , l_313);
            }


        }


        for (p_36 = 0; (p_36 <= 7); p_36 += 1)
        {
            unsigned long long l_317 = 18446744073709551613UL;
            int l_323 = 0x55E7189BL;
            int l_325[9][9][1] = {{{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}, {{0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}, {0x5198DD5FL}}};
            long long l_330 = 0xF8FA0988A3880585LL;
            int *l_363[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_363[i] = &g_80;
            for (g_58 = 0; (g_58 <= 7); g_58 += 1)
            {
                unsigned long long l_319 = 3UL;
                int l_326 = 1L;
                int l_327 = 1L;
                int l_329 = 0xB6BA929CL;
                int l_331 = (-1L);
                int l_332[6][3][5] = {{{8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}}, {{8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}}, {{8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}}, {{8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}}, {{8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}}, {{8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}, {8L, 0L, 0xE0860072L, 0x036FA629L, 0xAA045F00L}}};
                int i, j, k;
                for (g_80 = 7; (g_80 >= 2); g_80 -= 1)
                {
                    int l_318[7][7][5] = {{{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}, {{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}, {{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}, {{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}, {{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}, {{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}, {{(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}, {(-5L), 0x495DBE78L, (-3L), 1L, (-1L)}}};
                    int i, j, k;
                    g_316 &= (safe_lshift_func_int8_t_s_u(((void*)0 == &g_88), 1));
                    l_317 |= p_36;
                    l_319++;
                }
                for (g_316 = 0; (g_316 >= 0); g_316 -= 1)
                {
                    int l_322 = 0L;
                    int l_324 = 0x92105E2EL;
                    int l_328 = 0x24EC9519L;
                    int l_333 = 7L;
                    int l_335[7] = {0x17DDCD90L, 0x17DDCD90L, 0xDB3FBB83L, 0x17DDCD90L, 0x17DDCD90L, 0xDB3FBB83L, 0x17DDCD90L};
                    unsigned l_336[6] = {4UL, 1UL, 4UL, 1UL, 4UL, 1UL};
                    unsigned long long l_339 = 18446744073709551615UL;
                    int i, j;
                    l_336[4]++;
                    (*l_79) &= l_339;
                    (*l_79) = (p_37 , l_331);
                    --g_340;
                }
                (*l_79) ^= l_332[2][2][4];
            }
            l_363[0] = (((((((((l_325[3][1][0] , (p_36 <= ((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((g_52 & (safe_add_func_uint8_t_u_u(0xDDL, (safe_rshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(p_38, (safe_mod_func_uint32_t_u_u(g_57[0][1], p_39)))) > ((((p_36 ^ (safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(g_52, p_36)), g_80))) , p_39) <= g_316) > g_58)) == (*l_79)), g_340))))) , (-1L)), 0x59CFC3D3L)), (*l_79))) < g_174))) < p_36) < 0x5CL) | g_340) >= g_340) , p_39) , 0x70L) == p_39) , (*g_88));


            (*g_88) = (void*)0;
        }
        if ((((g_52 >= 0L) & (!((safe_sub_func_int8_t_s_s((((((g_57[0][3] == (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((l_72[0][1] == (*g_88)) < (((safe_lshift_func_uint8_t_u_s(g_340, (safe_add_func_uint64_t_u_u((*l_79), (((void*)0 == &l_79) || 0x01EB2A39L))))) , (*l_79)) != p_36)), 0x6B741E0B60ECD9EELL)), (*l_79))), p_37)) && p_36) ^ (*l_79)) & g_52), 2))) >= p_38) && g_52) | p_36) & (*l_79)), p_36)) >= g_80))) ^ p_39))
        {
            l_72[0][4] = l_378[6][4];


        }
        else
        {
            int *l_379 = &g_47;
            (*g_88) = l_379;


            for (g_47 = 0; (g_47 >= (-20)); --g_47)
            {
                (*g_88) = (*g_88);
            }
        }



    }
    else
    {
        int l_384 = 0xAF38509BL;
        int *l_390 = &g_47;
        int l_428 = 0xFD7D7B45L;
        int l_437 = 0x519A1389L;
        int l_440 = (-1L);
        int l_445 = 0x6E1BC07CL;
        int l_446 = 0x6E587A1CL;
        int l_449 = 0x1823E21CL;
        int l_452 = 0x32680FABL;
        int l_453 = 1L;
        short l_454 = (-6L);
        int l_456[4][6][1] = {{{0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}}, {{0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}}, {{0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}}, {{0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}, {0x067F61F0L}}};
        int i, j, k;
        (*g_88) = func_68((*g_88), p_39, (p_36 , (((**g_88) || (~(safe_lshift_func_int8_t_s_s((func_44(l_384) >= 0x0E5EDA3BL), (((+g_58) , ((g_52 && l_384) <= g_174)) , 0xF5L))))) <= p_36)));


        if ((p_37 , (func_65(func_68((*g_88), ((l_384 , ((safe_rshift_func_uint8_t_u_s(g_316, p_37)) < (((safe_mod_func_uint8_t_u_u(g_174, l_389)) , (&l_384 != l_390)) || g_58))) , (*l_390)), g_52), (*g_88)) , (**g_88))))
        {
            short l_413 = 0xEF99L;
            int l_430 = (-2L);
            int l_436 = 0x8F8010D7L;
            int l_443 = 0x4C3EDEEEL;
            int l_448 = 0x2E6BB467L;
            int l_450[4] = {1L, 3L, 1L, 3L};
            int * const **l_469 = (void*)0;
            int i;
            for (g_52 = 0; (g_52 < 4); ++g_52)
            {
                int ***l_393 = &g_88;
                int l_429 = 0xADFC9EE7L;
                int l_447[9][6][4] = {{{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}, {{0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}, {0xF2AFD43EL, (-9L), 0x35ABDB09L, 0xB9D4B7FFL}}};
                int i, j, k;
                (*l_393) = &l_390;

                ;
                for (l_63 = 0; (l_63 <= 12); ++l_63)
                {
                    short l_400 = 1L;
                    unsigned short l_404[8] = {65535UL, 0x27C4L, 65535UL, 0x27C4L, 65535UL, 0x27C4L, 65535UL, 0x27C4L};
                    long long l_423 = 2L;
                    int l_426 = 0x9124AB13L;
                    int l_427 = 0x77E3347BL;
                    int l_431 = 0x3BD66808L;
                    int l_432 = 0x52712750L;
                    int l_433 = 0xAB629235L;
                    int l_434 = 0L;
                    int l_439 = 0xE2B4E36EL;
                    int l_442[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_442[i] = 1L;
                    for (g_58 = 0; (g_58 <= (-6)); g_58--)
                    {
                        const short l_401 = 0x84F1L;
                        l_384 &= (g_197 <= ((((safe_mod_func_int8_t_s_s(((*g_88) != (*g_88)), (***l_393))) ^ l_400) & (p_37 , ((g_174 , (g_340 , (0x93L || (***l_393)))) >= g_58))) <= 0xDFL));
                        if (l_401)
                            break;
                    }
                    if ((((((!(safe_mod_func_uint64_t_u_u(func_44(p_39), ((g_58 <= l_404[2]) ^ (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint64_t_u_u(g_47, p_37)) , ((safe_rshift_func_uint8_t_u_u(((**g_88) >= (**g_88)), (safe_sub_func_uint8_t_u_u(((((**g_88) > l_413) < g_174) <= p_37), l_400)))) , p_36)) || g_174) && 0UL), 9)))))) | l_413) == g_41) , 0x9A13L) || 65535UL))
                    {
                        (*l_79) |= 1L;
                    }
                    else
                    {
                        int l_414 = 0x8E79BAF4L;
                        (*l_390) = (l_414 , p_36);
                        (*g_88) = func_68(func_68(&l_414, ((safe_add_func_int8_t_s_s(g_60, (0x461FL > (((g_58 || (p_39 != (safe_rshift_func_int8_t_s_u((g_174 , (((*l_390) || (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((((**g_88) & p_38) | g_41), 4)) , 1L), l_413))) >= l_404[2])), p_37)))) < 1UL) <= l_423)))) , 18446744073709551606UL), g_52), p_37, p_36);
                    }
                    for (p_38 = (-18); (p_38 <= 32); p_38 = safe_add_func_int8_t_s_s(p_38, 1))
                    {
                        char l_435 = 0x20L;
                        int l_438 = 0x71F820E6L;
                        int l_441 = 0x330EF4B3L;
                        int l_444 = 0xCB985AA0L;
                        int l_451 = 1L;
                        int l_455[5][7] = {{0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL}, {0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL}, {0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL}, {0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL}, {0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL, 1L, 0x41176A0AL}};
                        int i, j;
                        ++l_457;
                    }
                }
                for (p_38 = (-2); (p_38 > 55); p_38 = safe_add_func_uint8_t_u_u(p_38, 4))
                {
                    int ***l_464 = (void*)0;
                    (***l_393) = (1UL == (safe_add_func_int8_t_s_s(p_39, func_44(((g_52 | g_41) , (((&g_88 == l_464) <= func_44((***l_393))) & g_58))))));
                    return (*l_390);


                }
            }

            ;
            (*g_88) = (*g_88);

            ;
            (*l_79) |= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((0x6645A72CL == p_39) < (l_469 != &l_291[5])), p_36)), (8UL && ((func_44(p_39) | ((*g_88) != (*g_88))) < g_47))));
        }
        else
        {
            short l_470 = 1L;
            for (l_445 = 0; (l_445 >= 0); l_445 -= 1)
            {
                return p_37;
            }
            return l_470;
        }

        ;
        ;
    }



    for (l_63 = 0; (l_63 >= 0); l_63 -= 1)
    {
        int l_471 = 0xB624B138L;
        int l_472 = 0xF5C03BA9L;
        unsigned l_473 = 0xBA70C790L;
        unsigned long long l_484 = 0xD0A5F6AB13AEBDBELL;
        int l_486 = 0xCEE83863L;
        if (p_37)
            break;
        --l_473;
        l_486 &= (l_471 ^ (g_174 ^ ((g_197 == ((*l_79) == ((safe_add_func_uint32_t_u_u((4294967292UL ^ ((safe_rshift_func_int16_t_s_u((((((safe_rshift_func_int16_t_s_u(l_472, l_484)) <= (g_80 > g_52)) , 0xD427B10F57E9432ALL) <= l_485) , (-1L)), p_36)) > p_38)), p_36)) , p_36))) , g_60)));
        for (l_457 = 0; (l_457 <= 2); l_457 += 1)
        {
            unsigned short l_487 = 0xA6DEL;
            (*l_79) &= l_484;
            return l_487;
        }
    }
    for (g_80 = 0; (g_80 <= 10); g_80 = safe_add_func_uint8_t_u_u(g_80, 1))
    {
        long long l_490 = (-8L);
        int *l_491 = &g_47;
        int l_498 = 0x4ED4BBD6L;
        int l_500 = 0xDB53040CL;
        if ((l_490 != (((-1L) ^ ((((g_80 , (((0x672CF5800ADD8222LL && (*l_79)) , g_53) , l_491)) == (void*)0) != (((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_s((-8L), 7)))) < 2L) , g_174)) , p_36)) | g_174)))
        {
            unsigned char l_495 = 0x01L;
            int l_496 = 0xA3D54E31L;
            int l_499 = 0xD178DA16L;
            unsigned long long l_501 = 0x2840B36E756C4A24LL;
            l_496 |= (0x4F639156DDF9413DLL >= (func_44(g_174) < l_495));
            l_497 = &g_80;

            ;
            --l_501;
        }
        else
        {
            int l_506 = 3L;
            unsigned long long l_509 = 0UL;
            for (g_41 = 0; (g_41 >= 3); ++g_41)
            {
                (*l_491) ^= (l_506 , (safe_rshift_func_int8_t_s_s(l_509, 0)));
            }
        }
        (*l_491) |= 0x968F6345L;
        if (p_36)
            break;
        l_510 = 0xA5C641E4L;
    }

    ;
    g_89[0][4][4] = (l_511[0] , (g_52 , func_68(&g_47, p_39, (*l_79))));
    return p_37;
}







static int func_44(unsigned char p_45)
{
    int *l_46 = &g_47;
    int l_48 = 0L;
    int *l_49 = &g_47;
    int *l_50 = (void*)0;
    int *l_51[9][4][4] = {{{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}, {{&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}, {&g_47, (void*)0, (void*)0, &l_48}}};
    char l_59[5] = {(-6L), 0L, (-6L), 0L, (-6L)};
    int i, j, k;
    g_54[5][2][2]--;
    ++g_60;
    return g_60;
}







static unsigned long long func_65(int * p_66, int * p_67)
{
    unsigned l_82 = 18446744073709551615UL;
    int *l_83 = &g_47;
    int l_84 = 1L;
    char l_85 = 0x1CL;
    int l_185 = 0x36CE900BL;
    int l_189 = (-7L);
    int l_190[5] = {(-4L), 0L, (-4L), 0L, (-4L)};
    int i;
    (*l_83) = ((g_58 != ((((((safe_unary_minus_func_uint32_t_u(g_60)) , func_44(l_82)) != (l_82 == g_52)) , func_68(l_83, (*l_83), (255UL & l_84))) != &g_80) | 0xA71A37F4EAFE12C2LL)) <= l_85);
    for (g_41 = 0; (g_41 < (-24)); g_41 = safe_sub_func_int8_t_s_s(g_41, 4))
    {
        int **l_90 = &g_89[0][1][6];
        int l_125 = (-2L);
        unsigned char l_158 = 0xD6L;
        int l_188 = 0x1B115D80L;
        int l_192[1];
        int i;
        for (i = 0; i < 1; i++)
            l_192[i] = (-1L);
        l_90 = g_88;
        (**g_88) = ((**l_90) > ((safe_add_func_int8_t_s_s(((*l_83) != (safe_lshift_func_int16_t_s_u((((*l_83) , (*p_66)) ^ (*p_66)), 1))), (!((safe_add_func_int64_t_s_s(0xABDB3BF0D081C379LL, (~(safe_lshift_func_int8_t_s_s(((void*)0 != p_66), ((safe_lshift_func_int16_t_s_s(((**g_88) , g_41), 14)) < (*l_83))))))) < (**l_90))))) || g_53));
        for (l_84 = (-24); (l_84 < (-24)); l_84 = safe_add_func_int8_t_s_s(l_84, 3))
        {
            short l_103 = 0x6FFEL;
            const int **l_120 = (void*)0;
            int l_183 = 0xB409ACC9L;
            int l_184 = 0x7598E73DL;
            int l_187 = 0xA78F789EL;
            int l_191 = 0x5F8E45F1L;
            int l_193 = (-1L);
            int l_194 = 0xCF6C5B2CL;
            int l_195 = 0xA1E86DC7L;
            int l_196 = 1L;
        }
        if ((**l_90))
            continue;
    }
    for (g_52 = 20; (g_52 == (-29)); g_52 = safe_sub_func_uint64_t_u_u(g_52, 4))
    {
        long long l_275 = 0xCF0B41B177A25CE2LL;
        for (l_185 = (-21); (l_185 <= 19); ++l_185)
        {
            if (l_275)
                break;
            (*g_88) = (*g_88);
        }
    }
    (*l_83) = ((*l_83) || (((*l_83) <= ((safe_lshift_func_int16_t_s_u((&l_83 == ((safe_sub_func_uint16_t_u_u((*l_83), (g_41 , (((safe_unary_minus_func_uint8_t_u((func_44(g_47) , ((*l_83) > ((*l_83) && 0xFB0FL))))) && (*l_83)) ^ (*l_83))))) , &g_89[0][2][6])), g_174)) & (*l_83))) <= 0x6BL));
    return g_54[5][2][2];
}







static int * func_68(int * p_69, unsigned p_70, unsigned p_71)
{
    int *l_73[5] = {&g_47, &g_47, &g_47, &g_47, &g_47};
    int *l_74 = &g_47;
    unsigned char l_77[3];
    unsigned l_78 = 0xAA37C3ACL;
    int i;
    for (i = 0; i < 3; i++)
        l_77[i] = 246UL;
    (*p_69) = (((p_70 , l_73[1]) == l_74) < ((~(safe_sub_func_uint8_t_u_u(((l_77[1] == (0xE28F630BL || g_57[0][4])) & (((((l_78 && (+p_71)) || p_70) , 3L) == p_71) && 1L)), 246UL))) & 0x28L));
    return l_73[1];


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_54[i][j][k], "g_54[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_57[i][j], "g_57[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_681[i], "g_681[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
