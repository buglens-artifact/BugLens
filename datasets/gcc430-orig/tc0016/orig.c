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



static const int g_7 = (-6L);
static int g_57[8][7][4] = {{{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}, {{9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}, {9L, 1L, 6L, 9L}}};
static int *g_66 = &g_57[2][0][0];
static unsigned g_75 = 0xBE0E570CL;
static const int *g_81 = &g_57[2][0][0];
static unsigned g_87 = 0xF9A7C971L;
static unsigned short g_90 = 0x4306L;
static long long g_104 = 1L;
static const long long g_109 = (-1L);
static unsigned long long g_129 = 18446744073709551615UL;
static unsigned g_149[10] = {0xDD8A0995L, 0x04B2EDB8L, 0xAD4AB493L, 0xAD4AB493L, 0x04B2EDB8L, 0xDD8A0995L, 0x04B2EDB8L, 0xAD4AB493L, 0xAD4AB493L, 0x04B2EDB8L};
static short g_175 = 5L;
static short *g_174 = &g_175;
static unsigned char g_177[10] = {1UL, 0xEBL, 1UL, 0xEBL, 1UL, 0xEBL, 1UL, 0xEBL, 1UL, 0xEBL};
static int g_196[6] = {1L, 1L, 0x61389889L, 1L, 1L, 0x61389889L};
static unsigned g_227 = 1UL;
static char g_239 = 5L;
static int g_241 = 0x71923A1AL;
static int g_268 = (-1L);
static const unsigned g_313 = 4294967291UL;
static const char g_361 = 0x78L;
static short g_374[3][10] = {{0L, 0xE43BL, 0x9046L, 0xE43BL, 0L, (-7L), 0L, 0xE43BL, 0x9046L, 0xE43BL}, {0L, 0xE43BL, 0x9046L, 0xE43BL, 0L, (-7L), 0L, 0xE43BL, 0x9046L, 0xE43BL}, {0L, 0xE43BL, 0x9046L, 0xE43BL, 0L, (-7L), 0L, 0xE43BL, 0x9046L, 0xE43BL}};
static unsigned **g_400 = (void*)0;
static int g_417 = (-1L);
static int g_418 = 0x95036420L;
static int *g_424 = (void*)0;
static unsigned char **g_438 = (void*)0;
static unsigned g_586 = 0xCA61124DL;
static unsigned * const g_585 = &g_586;
static unsigned * const *g_584[7][4] = {{&g_585, &g_585, &g_585, &g_585}, {&g_585, &g_585, &g_585, &g_585}, {&g_585, &g_585, &g_585, &g_585}, {&g_585, &g_585, &g_585, &g_585}, {&g_585, &g_585, &g_585, &g_585}, {&g_585, &g_585, &g_585, &g_585}, {&g_585, &g_585, &g_585, &g_585}};
static volatile int g_607 = 6L;
static const unsigned short *g_666[8] = {&g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90};
static const unsigned short **g_665 = &g_666[1];
static int **g_688[6] = {&g_66, &g_66, &g_66, &g_66, &g_66, &g_66};
static unsigned long long g_691 = 18446744073709551615UL;
static const int g_704 = 0xACFEBCB1L;
static int *g_713 = &g_57[2][5][2];
static int **g_730[8][4] = {{&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}, {&g_424, &g_713, &g_713, &g_713}};
static unsigned char *g_732 = (void*)0;
static unsigned char **g_731 = &g_732;
static unsigned long long g_733 = 18446744073709551613UL;
static unsigned g_765 = 0x1CE3B33CL;
static int g_842 = (-1L);
static unsigned short g_874 = 0x5904L;
static long long g_921 = 8L;
static unsigned *g_938 = &g_227;
static unsigned **g_937 = &g_938;
static unsigned ***g_936 = &g_937;
static unsigned ****g_935 = &g_936;
static char g_952 = 0x25L;
static volatile long long g_1098 = (-6L);
static volatile long long *g_1097 = &g_1098;
static volatile long long * const *g_1096[6][3][5] = {{{&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}}, {{&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}}, {{&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}}, {{&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}}, {{&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}}, {{&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}, {&g_1097, (void*)0, &g_1097, (void*)0, &g_1097}}};
static volatile long long * const **g_1095 = &g_1096[4][2][2];
static volatile long long * const ***g_1094 = &g_1095;
static char *g_1196 = (void*)0;
static const char g_1200 = 7L;
static short g_1220 = 0x946BL;
static int g_1252 = (-1L);



static int func_1(void);
static int func_2(unsigned long long p_3, unsigned p_4, unsigned char p_5, long long p_6);
static unsigned func_11(unsigned char p_12, unsigned p_13, long long p_14, long long p_15);
static int func_17(const unsigned p_18);
static unsigned long long func_19(const long long p_20, const unsigned short p_21);
static int func_25(unsigned char p_26, unsigned char p_27, unsigned p_28, int p_29);
static char func_30(char p_31);
static unsigned char func_32(unsigned short p_33, char p_34);
static unsigned func_35(unsigned short p_36, unsigned p_37, const int p_38);
static unsigned short func_39(const long long p_40, unsigned char p_41, const long long p_42);
static int func_1(void)
{
    unsigned short l_10[1][6][4] = {{{0x52D0L, 8UL, 0xA0BDL, 0xA0BDL}, {0x52D0L, 8UL, 0xA0BDL, 0xA0BDL}, {0x52D0L, 8UL, 0xA0BDL, 0xA0BDL}, {0x52D0L, 8UL, 0xA0BDL, 0xA0BDL}, {0x52D0L, 8UL, 0xA0BDL, 0xA0BDL}, {0x52D0L, 8UL, 0xA0BDL, 0xA0BDL}}};
    long long l_16 = 0x6753F3AC9D73DF2ELL;
    int i, j, k;
    if (func_2((g_7 < ((g_7 != (safe_sub_func_uint16_t_u_u((((1L | ((l_10[0][5][1] != ((((g_7 && func_11(((l_10[0][5][1] < l_16) , l_10[0][5][1]), g_7, l_10[0][0][3], g_7)) | 0xDDB8L) == l_10[0][5][1]) , l_16)) , l_16)) | l_10[0][5][1]) & l_10[0][3][0]), l_10[0][4][0]))) < l_10[0][5][1])), (*g_585), l_10[0][1][3], (*g_1097)))
    {
        long long *l_1326 = &g_104;
        int l_1341 = 0xF7600D7BL;
        (*g_713) = (safe_mod_func_uint64_t_u_u(func_19(((*l_1326) |= ((*g_174) < (**g_665))), func_19(((l_16 & (safe_mod_func_uint64_t_u_u((((func_35((safe_div_func_uint64_t_u_u(g_57[2][0][0], (safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(0xBFL, ((safe_rshift_func_int16_t_s_s(l_10[0][5][1], (*g_174))) <= 255UL))) , (*g_174)), l_1341)), 0x9DL)), l_10[0][0][1])))), l_16, g_1220) , l_1341) ^ 1L) | 5UL), l_16))) , 0xD96B5594E3AEDD1FLL), l_10[0][1][2])), 0x9336043B11B1AF21LL));

        ;
    }
    else
    {
        char l_1342 = 0x86L;
        return l_1342;
    }

    ;
    ;
    (*g_713) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_16, l_10[0][2][0])), (safe_sub_func_uint64_t_u_u(0x2D273FA0259A96C8LL, l_16))));
    (*g_66) |= (safe_lshift_func_int16_t_s_s(1L, 1));
    return l_10[0][5][1];
}







static int func_2(unsigned long long p_3, unsigned p_4, unsigned char p_5, long long p_6)
{
    unsigned char l_1322[9][2] = {{0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}, {0xADL, 0xBAL}};
    char l_1323[10][4][6] = {{{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}, {{0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}, {0xD2L, 0xF5L, 0xE1L, (-10L), 0x69L, (-6L)}}};
    int i, j, k;
    (*g_66) ^= (safe_sub_func_int8_t_s_s(l_1322[5][1], (l_1323[4][1][4] , p_4)));
    return p_4;
}







static unsigned func_11(unsigned char p_12, unsigned p_13, long long p_14, long long p_15)
{
    short l_24[2][4][5];
    unsigned l_269 = 0UL;
    unsigned long long *l_278 = &g_129;
    int *l_646[2];
    unsigned short * const l_647 = (void*)0;
    unsigned short *l_663 = &g_90;
    unsigned short **l_662 = &l_663;
    char *l_670 = &g_239;
    unsigned char **l_683 = (void*)0;
    const int l_699 = (-9L);
    long long * const **l_793 = (void*)0;
    int *l_852[4][2][1] = {{{&g_268}, {&g_268}}, {{&g_268}, {&g_268}}, {{&g_268}, {&g_268}}, {{&g_268}, {&g_268}}};
    int l_954 = 0x6D539FD4L;
    long long l_978[1][8][2] = {{{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}};
    unsigned l_1015 = 4294967288UL;
    unsigned l_1016 = 0xDC9B36B6L;
    unsigned long long l_1048 = 2UL;
    unsigned *l_1055 = &g_586;
    unsigned ** const l_1054 = &l_1055;
    short **l_1074 = &g_174;
    unsigned char l_1117[2][5][3] = {{{0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}}, {{0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}, {0x88L, 0UL, 7UL}}};
    short ***l_1132 = &l_1074;
    long long l_1160 = 0x6FB8B0F26F52B161LL;
    const char *l_1199[8][7] = {{&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}, {&g_1200, &g_1200, &g_361, (void*)0, &g_361, (void*)0, &g_361}};
    unsigned *l_1214 = &l_1016;
    short l_1258[4] = {0xEB53L, 0x2807L, 0xEB53L, 0x2807L};
    unsigned long long l_1274 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
                l_24[i][j][k] = (-6L);
        }
    }
    for (i = 0; i < 2; i++)
        l_646[i] = &g_57[7][0][3];
    g_417 = func_17(((p_14 , (((((*l_278) = func_19(g_7, (((safe_div_func_uint32_t_u_u(l_24[0][1][3], func_25((func_30((func_32(((((((func_35(func_39(((((safe_lshift_func_uint8_t_u_s((l_24[0][1][3] < p_13), 4)) == (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((p_12 ^ p_12), (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_7 || ((((safe_lshift_func_uint16_t_u_s(g_7, g_7)) >= 1L) > 0x4AL) , g_7)), p_12)), p_14)))), 0x177C83BE7680DD33LL))) <= 0x656DL) , l_24[0][1][4]), g_7, l_24[1][3][2]), p_13, p_12) <= l_24[0][2][2]) < 0xB10AL) , p_15) <= p_15) > l_24[0][1][3]) > 9UL), g_7) & (-10L))) <= 6UL), g_175, p_12, g_149[9]))) < g_177[4]) || l_269))) < 0x03C6AD3B70B4B066LL) <= 0L) , p_15)) , g_227));

    ;
    ;
    (*g_66) = (*g_81);
    return p_13;
}







static int func_17(const unsigned p_18)
{
    unsigned *l_281 = &g_149[9];
    unsigned *l_284 = (void*)0;
    int l_285 = 0L;
    const int **l_288 = &g_81;
    unsigned long long *l_289 = (void*)0;
    unsigned *l_290 = &g_75;
    char *l_327 = &g_239;
    unsigned char l_398 = 0x67L;
    int *l_425 = &g_57[2][0][0];
    int *l_426 = &g_417;
    long long l_432 = 0x11B6CACAE9031822LL;
    char l_470[6][7][3] = {{{0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}}, {{0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}}, {{0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}}, {{0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}}, {{0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}}, {{0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}, {0x17L, (-1L), 0x68L}}};
    int *l_616 = &g_196[0];
    const unsigned short *l_643 = &g_90;
    const unsigned short **l_642 = &l_643;
    const unsigned short ***l_644 = (void*)0;
    const unsigned short ***l_645 = &l_642;
    int i, j, k;
    (*g_66) = (((*l_281) = (safe_mod_func_uint8_t_u_u(g_57[2][0][0], g_177[6]))) <= (safe_sub_func_int32_t_s_s(((l_284 = l_281) == &g_227), func_35(g_227, ((*l_290) &= (l_285 | (g_129 ^= ((safe_mod_func_int32_t_s_s((p_18 == ((0xB9FED64C8054E464LL < (((((+p_18) , l_288) == l_288) | (-4L)) & 8UL)) , g_109)), p_18)) >= (**l_288))))), p_18))));

    ;
    for (g_175 = 3; (g_175 >= 0); g_175 -= 1)
    {
        int *l_291[1];
        short *l_370 = (void*)0;
        int l_385 = 0x62B1D459L;
        int **l_423[9];
        unsigned long long l_427 = 18446744073709551606UL;
        unsigned long long *l_433 = &g_129;
        int l_465 = 0xBB97F6F3L;
        long long l_527[3][5][10] = {{{0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}}, {{0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}}, {{0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}, {0xBCE99A57191B84EDLL, 0xE247480E45A62FA6LL, 0x6DCDBC2BC29312A1LL, 0xFED7B9C64B106D01LL, 0xA5032999D6D1886ALL, (-3L), 0x29B417A8A7A892EFLL, (-9L), 0x615C94B2C221E806LL, 0x6FA69E1B1DAA9273LL}}};
        unsigned char *l_548 = &g_177[3];
        long long *l_553 = &g_104;
        long long **l_552 = &l_553;
        unsigned short l_631[8] = {0xC3F5L, 0xC3F5L, 65530UL, 0xC3F5L, 0xC3F5L, 65530UL, 0xC3F5L, 0xC3F5L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_291[i] = (void*)0;
        for (i = 0; i < 9; i++)
            l_423[i] = (void*)0;
    }
    (*l_645) = l_642;
    return (*g_66);
}







static unsigned long long func_19(const long long p_20, const unsigned short p_21)
{
    unsigned l_272[3];
    int *l_275 = &g_268;
    int **l_276 = &g_66;
    unsigned l_277 = 18446744073709551607UL;
    int i;
    for (i = 0; i < 3; i++)
        l_272[i] = 1UL;
    (*l_275) ^= (safe_div_func_uint64_t_u_u(l_272[2], (safe_add_func_uint16_t_u_u(g_57[2][0][0], l_272[2]))));
    (*l_276) = l_275;

    ;
    return l_277;
}







static int func_25(unsigned char p_26, unsigned char p_27, unsigned p_28, int p_29)
{
    unsigned char l_250 = 0xC6L;
    unsigned *l_251 = (void*)0;
    unsigned *l_252 = &g_75;
    long long *l_259 = &g_104;
    unsigned long long l_260 = 18446744073709551615UL;
    unsigned *l_263 = &g_87;
    unsigned long long l_264 = 1UL;
    unsigned short l_265 = 0x8A2FL;
    int *l_266 = &g_57[0][6][0];
    int *l_267 = &g_268;
    (*l_266) = (((*l_252) &= (safe_add_func_uint8_t_u_u(l_250, p_27))) , (safe_mod_func_uint16_t_u_u((func_32(((((((safe_add_func_uint8_t_u_u((0x9C365363CA09B53ELL >= g_227), func_35((((((*l_259) = (g_109 > g_149[9])) | l_250) > ((((l_260 ^ func_32((safe_sub_func_int32_t_s_s((((*l_263) ^= l_250) != 0xE14EDE75L), p_29)), p_29)) , l_252) != (void*)0) == 0x3ED43D43504BE094LL)) > g_129), l_260, p_26))) <= l_260) , l_264) | 0xCC21D277L) ^ l_265) ^ p_29), l_250) , 0x451DL), (*g_174))));

    ;
    (*g_66) = (-1L);
    (*l_267) |= (*l_266);
    (*g_66) = (*g_81);
    return p_28;
}







static char func_30(char p_31)
{
    int l_233 = (-9L);
    char *l_238 = &g_239;
    int *l_240[2][5] = {{&g_241, &g_241, &g_196[3], &g_241, &g_241}, {&g_241, &g_241, &g_196[3], &g_241, &g_241}};
    int *l_242[2][3][2] = {{{(void*)0, &g_241}, {(void*)0, &g_241}, {(void*)0, &g_241}}, {{(void*)0, &g_241}, {(void*)0, &g_241}, {(void*)0, &g_241}}};
    int *l_243 = &g_241;
    int **l_244 = &g_66;
    const unsigned *l_246 = (void*)0;
    const unsigned ** const l_245 = &l_246;
    const unsigned **l_247 = (void*)0;
    int i, j, k;
    (*l_244) = (((safe_add_func_int64_t_s_s((l_233 <= (safe_add_func_uint16_t_u_u(l_233, (safe_sub_func_uint16_t_u_u(l_233, func_35(g_7, p_31, ((*l_243) &= (func_32(g_177[4], ((*l_238) = g_196[0])) , ((l_233 & l_233) , g_109))))))))), 0x6D3DB75E829FDF18LL)) | p_31) , l_240[1][1]);

    ;
    l_247 = l_245;

    ;
    return (**l_244);
}







static unsigned char func_32(unsigned short p_33, char p_34)
{
    short l_62[9][10][2] = {{{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}, {{0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}, {0xB290L, 0xEB36L}}};
    int *l_65 = &g_57[2][0][0];
    unsigned *l_73 = (void*)0;
    unsigned *l_74 = &g_75;
    const unsigned char l_76 = 0x0AL;
    unsigned short l_106 = 65529UL;
    unsigned short l_150 = 65535UL;
    long long l_155[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_155[i] = 1L;
    (*l_65) = ((!l_62[4][9][1]) != (safe_lshift_func_int16_t_s_u((&g_57[7][2][3] == (g_66 = l_65)), (safe_lshift_func_uint8_t_u_s((l_65 != (void*)0), (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(func_35(p_34, ((*l_74) = 0x444D7DDDL), p_34), p_34)), l_76)))))));

    ;
    if ((*g_66))
    {
        unsigned long long l_91 = 1UL;
        int *l_93 = &g_57[2][0][0];
        int *l_168 = (void*)0;
        for (p_34 = (-19); (p_34 == (-7)); p_34++)
        {
            const int *l_80 = (void*)0;
            const int **l_79[1];
            int i;
            for (i = 0; i < 1; i++)
                l_79[i] = &l_80;
            g_81 = &g_7;

            ;
        }
        for (p_34 = (-4); (p_34 > 0); p_34 = safe_add_func_int16_t_s_s(p_34, 8))
        {
            unsigned *l_86 = &g_87;
            unsigned long long l_88 = 0UL;
            unsigned long long *l_89[3];
            short *l_92 = &l_62[8][3][1];
            int **l_94 = &l_93;
            int i;
            for (i = 0; i < 3; i++)
                l_89[i] = (void*)0;
            (*g_66) = (safe_mod_func_uint16_t_u_u(g_7, ((*l_92) = (((((*l_86) = (*l_65)) < (func_35(g_7, l_88, ((+(g_90 = l_88)) , g_57[3][3][3])) || (*l_65))) & (l_91 , l_91)) ^ p_33))));
            (*l_94) = l_93;
        }
        for (g_90 = 0; (g_90 != 8); ++g_90)
        {
            int *l_97[9][3][3] = {{{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}, {{&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}, {&g_57[2][0][0], &g_57[2][6][3], &g_57[2][0][0]}}};
            int **l_98 = &l_97[0][2][0];
            int l_108 = 0x527EC929L;
            int i, j, k;
            (*l_98) = l_97[0][2][0];
            for (p_34 = 0; (p_34 != 15); p_34 = safe_add_func_uint64_t_u_u(p_34, 3))
            {
                long long *l_103[2];
                int l_105 = (-1L);
                int l_107 = 0x916D73FBL;
                unsigned char *l_148[1];
                unsigned *l_151 = (void*)0;
                unsigned *l_152 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_103[i] = &g_104;
                for (i = 0; i < 1; i++)
                    l_148[i] = (void*)0;
            }
        }
    }
    else
    {
        int **l_170 = (void*)0;
        int **l_171 = &g_66;
        (*l_171) = &g_57[2][0][0];
    }
    for (l_150 = 21; (l_150 >= 34); ++l_150)
    {
        unsigned char *l_176[7] = {&g_177[4], &g_177[4], &g_177[4], &g_177[4], &g_177[4], &g_177[4], &g_177[4]};
        int l_182 = 7L;
        int **l_193[6][2][10] = {{{&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}, {&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}}, {{&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}, {&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}}, {{&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}, {&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}}, {{&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}, {&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}}, {{&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}, {&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}}, {{&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}, {&g_66, &g_66, &l_65, &l_65, &l_65, &l_65, &g_66, &g_66, &g_66, &l_65}}};
        const int l_197 = 0L;
        unsigned long long l_225 = 0x634F4FC1ADAE8A34LL;
        int i, j, k;
    }
    return g_177[0];
}







static unsigned func_35(unsigned short p_36, unsigned p_37, const int p_38)
{
    return p_37;
}







static unsigned short func_39(const long long p_40, unsigned char p_41, const long long p_42)
{
    long long l_55[6] = {0x826471B2A12551ADLL, 0x826471B2A12551ADLL, 0xE855C71DA89A0308LL, 0x826471B2A12551ADLL, 0x826471B2A12551ADLL, 0xE855C71DA89A0308LL};
    int *l_56 = &g_57[2][0][0];
    int i;
    l_55[5] &= (-9L);
    (*l_56) = l_55[5];
    (*l_56) = (safe_sub_func_int64_t_s_s((0x90L > 5L), (safe_add_func_uint64_t_u_u((*l_56), 3UL))));
    return (*l_56);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_57[i][j][k], "g_57[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_196[i], "g_196[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_374[i][j], "g_374[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1252, "g_1252", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
