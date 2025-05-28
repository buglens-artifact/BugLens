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



static volatile char g_7 = 0xA0L;
static unsigned long long g_10 = 0UL;
static unsigned short g_14 = 4UL;
static short g_35 = 0x14C5L;
static const unsigned long long g_43[10] = {9UL, 0x54D8142C78EF8A6ELL, 0UL, 0UL, 0x54D8142C78EF8A6ELL, 9UL, 0x54D8142C78EF8A6ELL, 0UL, 0UL, 0x54D8142C78EF8A6ELL};
static int g_47 = 0L;
static short g_70 = 0x4FC6L;
static unsigned short g_83 = 0x089CL;
static long long g_86 = 1L;
static unsigned long long g_102[9][10][2] = {{{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}, {{1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}, {1UL, 0x10857B2633072FE8LL}}};
static unsigned long long g_104 = 18446744073709551615UL;
static unsigned short g_116 = 0UL;
static unsigned char g_121 = 1UL;
static long long g_142 = 1L;
static char g_144 = 0xC7L;
static char g_149 = 0x41L;
static short g_151[8][4] = {{0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}, {0x304AL, 0xC6DBL, (-8L), 0xBCEEL}};
static short g_158 = 0xE676L;
static unsigned g_179 = 0UL;
static unsigned short g_182 = 0x35A4L;
static unsigned g_183 = 0x52563AE6L;
static short * volatile g_187 = &g_151[7][2];
static short * volatile * const g_186 = &g_187;
static int g_192 = 0xC10CF0FCL;
static int *g_191 = &g_192;
static const int g_195 = 0xA8022D0BL;
static long long g_211 = (-8L);
static int g_254[8] = {0xAE5765BEL, 2L, 0xAE5765BEL, 2L, 0xAE5765BEL, 2L, 0xAE5765BEL, 2L};
static int *g_253[10] = {&g_254[7], &g_254[7], &g_254[7], &g_254[7], &g_254[7], &g_254[7], &g_254[7], &g_254[7], &g_254[7], &g_254[7]};
static unsigned char g_273 = 0x95L;
static int **g_334 = &g_253[6];
static int **g_337[7] = {&g_253[5], &g_253[1], &g_253[5], &g_253[1], &g_253[5], &g_253[1], &g_253[5]};
static int ***g_362[10][6][3] = {{{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}, {{&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}, {&g_334, &g_337[4], &g_334}}};
static volatile short *g_364 = (void*)0;
static long long g_366 = 0xEF8D0AE29910F593LL;
static const unsigned short g_383 = 9UL;
static const int *g_404 = (void*)0;
static int g_448 = 0L;
static short g_472 = 3L;
static char g_493 = 3L;
static char *g_500[6] = {&g_493, &g_493, &g_149, &g_493, &g_493, &g_149};
static char **g_499 = &g_500[4];
static int g_528 = 0x01926C84L;
static const unsigned long long g_590 = 0x1046994A4AE2C1A5LL;
static unsigned short g_596 = 0x4680L;
static long long g_636 = (-1L);
static unsigned g_681 = 0x456E84E1L;
static unsigned g_683 = 4294967295UL;
static unsigned g_779 = 0x1DD2FAC4L;
static unsigned long long g_865[6][5] = {{1UL, 1UL, 18446744073709551615UL, 1UL, 1UL}, {1UL, 1UL, 18446744073709551615UL, 1UL, 1UL}, {1UL, 1UL, 18446744073709551615UL, 1UL, 1UL}, {1UL, 1UL, 18446744073709551615UL, 1UL, 1UL}, {1UL, 1UL, 18446744073709551615UL, 1UL, 1UL}, {1UL, 1UL, 18446744073709551615UL, 1UL, 1UL}};
static unsigned long long *g_864 = &g_865[0][1];
static volatile unsigned short g_883 = 65530UL;
static volatile unsigned short g_884 = 0UL;
static volatile unsigned short g_885 = 65526UL;
static volatile unsigned short g_886 = 0UL;
static volatile unsigned short g_887 = 0x9CBDL;
static volatile unsigned short g_888 = 0x88E9L;
static volatile unsigned short g_889 = 0x2DF7L;
static volatile unsigned short g_890 = 0x7364L;
static volatile unsigned short g_891 = 0UL;
static volatile unsigned short g_892 = 65527UL;
static volatile unsigned short g_893[7][4][9] = {{{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}, {{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}, {{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}, {{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}, {{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}, {{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}, {{65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}, {65535UL, 4UL, 0xC48EL, 0xE4CFL, 0UL, 65535UL, 65535UL, 4UL, 65534UL}}};
static volatile unsigned short g_894 = 65526UL;
static volatile unsigned short * volatile g_882[8][5][1] = {{{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}, {{&g_892}, {&g_892}, {&g_892}, {&g_892}, {&g_892}}};
static volatile unsigned short g_896 = 0x3074L;
static volatile unsigned short * const g_895[1][4] = {{&g_896, &g_896, &g_896, &g_896}};
static volatile unsigned short * const volatile *g_881[6][8] = {{&g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][0], &g_895[0][3], &g_895[0][3]}, {&g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][0], &g_895[0][3], &g_895[0][3]}, {&g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][0], &g_895[0][3], &g_895[0][3]}, {&g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][0], &g_895[0][3], &g_895[0][3]}, {&g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][0], &g_895[0][3], &g_895[0][3]}, {&g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][3], &g_895[0][0], &g_895[0][3], &g_895[0][3]}};
static unsigned long long *g_920 = (void*)0;
static unsigned * volatile g_923 = (void*)0;
static unsigned * volatile *g_922 = &g_923;
static unsigned * volatile ** const g_921 = &g_922;
static volatile int g_1037[2][10][9] = {{{0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}}, {{0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}, {0xB00951F9L, 9L, 1L, 0x3B4C52DBL, 0xA8531475L, 0L, 0L, 0x66540817L, 0xE23FDD05L}}};
static volatile int *g_1036 = &g_1037[0][1][2];
static volatile int * volatile *g_1035 = &g_1036;
static volatile int * volatile * volatile * const g_1034 = &g_1035;
static int g_1047 = 1L;
static unsigned g_1067 = 0xC98F47E4L;
static short g_1096 = 0x3F92L;
static short **g_1110 = (void*)0;
static short ***g_1109 = &g_1110;
static unsigned long long g_1123 = 0xCFA3CF5C9A947501LL;
static unsigned g_1153 = 0UL;
static int g_1175 = 0xE3A68B24L;
static unsigned long long *g_1181[2] = {&g_865[1][2], &g_865[1][2]};
static int **g_1185[7] = {&g_191, &g_191, &g_191, &g_191, &g_191, &g_191, &g_191};
static volatile int *g_1204 = (void*)0;
static const int ** volatile g_1241 = &g_404;
static const int ** volatile *g_1240 = &g_1241;
static const int ** volatile **g_1239 = &g_1240;
static const int ** volatile ***g_1238[9] = {&g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239, &g_1239};
static unsigned *g_1276[2][1] = {{&g_179}, {&g_179}};
static unsigned **g_1275[9][9] = {{&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}, {&g_1276[1][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[0][0], &g_1276[1][0], (void*)0, &g_1276[0][0]}};
static volatile unsigned ****g_1305 = (void*)0;
static volatile unsigned *****g_1304 = &g_1305;
static short ****g_1319 = &g_1109;



static int func_1(void);
static unsigned char func_11(unsigned short p_12, long long p_13);
static unsigned long long * func_17(unsigned long long p_18, short p_19, unsigned long long * p_20);
static unsigned long long func_21(const unsigned short p_22, long long p_23, unsigned long long * p_24, long long p_25);
static const unsigned short func_26(unsigned long long * p_27, long long p_28, unsigned long long * p_29, long long p_30, long long p_31);
static short func_36(char p_37, int p_38, unsigned short p_39);
static unsigned char func_50(unsigned p_51, int * p_52);
static unsigned func_53(unsigned long long p_54, unsigned p_55, unsigned short p_56, const unsigned p_57, long long p_58);
static unsigned long long func_59(short p_60, const unsigned long long * p_61, short p_62, unsigned p_63, unsigned short p_64);
static short * func_71(int * p_72, short * p_73);
static int func_1(void)
{
    unsigned short l_4 = 0UL;
    unsigned long long *l_8 = (void*)0;
    unsigned long long *l_9 = &g_10;
    short *l_34 = &g_35;
    long long *l_507 = &g_86;
    unsigned char l_842 = 0x81L;
    unsigned long long **l_1180[9] = {&l_8, &g_920, &l_8, &g_920, &l_8, &g_920, &l_8, &g_920, &l_8};
    int l_1312 = 0xE6657C37L;
    unsigned short l_1316[5];
    unsigned l_1320 = 4294967286UL;
    int * const l_1324 = &g_47;
    int i;
    for (i = 0; i < 5; i++)
        l_1316[i] = 0x74B7L;
    if ((safe_mul_func_uint8_t_u_u((0xE1L >= l_4), (((*l_34) = ((safe_add_func_uint64_t_u_u(((*l_9) = (!g_7)), (func_11(g_14, ((*l_507) = (((-1L) || (safe_rshift_func_uint8_t_u_u(l_4, 1))) , ((g_1181[0] = func_17(func_21(func_26(l_8, ((*l_507) = ((safe_mul_func_uint8_t_u_u((((*l_34) = l_4) < func_36(g_14, g_14, g_14)), g_254[7])) == 2UL)), l_8, l_4, g_43[9]), l_842, l_9, g_596), l_4, g_864)) != (void*)0)))) < 0xCEL))) | l_4)) & 0L))))
    {
        l_1312 ^= l_842;
    }
    else
    {
        int l_1313 = 0x2732FE19L;
        int *l_1314 = &g_528;
        if (((*l_1314) = (+l_1313)))
        {
            unsigned short *l_1315[2];
            short ****l_1318 = &g_1109;
            short *****l_1317[2][7] = {{(void*)0, &l_1318, &l_1318, &l_1318, (void*)0, &l_1318, (void*)0}, {(void*)0, &l_1318, &l_1318, &l_1318, (void*)0, &l_1318, (void*)0}};
            const unsigned l_1321 = 0xDBDDE13DL;
            int *l_1325 = &l_1312;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1315[i] = &g_116;
            if (((*l_1314) == ((-5L) ^ (((g_590 != (((l_1316[4] = (g_596 = func_50((*l_1314), &l_1313))) && ((g_1319 = (void*)0) == &g_1109)) != ((((*l_1314) , l_1320) | l_1321) == l_1321))) , &g_366) == (void*)0))))
            {
                (*l_1314) = (safe_rshift_func_uint8_t_u_s((*l_1314), 5));
                return (*l_1314);
            }
            else
            {
                (***g_1239) = &l_1312;
                (***g_1239) = &l_1313;
                (*l_1314) = 0xFC894300L;
                (*l_1314) = (*l_1314);
            }
            (*l_1314) = (&l_1313 != l_1324);
            l_1325 = &l_1312;
            return (*l_1324);
        }
        else
        {
            volatile int * volatile l_1326 = &g_1037[1][4][5];
            (*l_1314) = (-9L);
            l_1326 = (**g_1034);
            (*l_1324) |= 0L;
        }
        (***g_1239) = &l_1313;
        (**g_1240) = &l_1312;
        (*l_1324) &= ((*l_1314) ^ (*l_1314));
    }
    return (*l_1324);
}







static unsigned char func_11(unsigned short p_12, long long p_13)
{
    unsigned char l_1186[10][8] = {{250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}, {250UL, 0xDBL, 0x3AL, 255UL, 255UL, 0x3AL, 0xDBL, 250UL}};
    const long long l_1197 = 0L;
    int *l_1202 = &g_47;
    const unsigned long long *l_1222 = (void*)0;
    int l_1235 = 0x55B64032L;
    char l_1237 = 0x71L;
    unsigned short l_1247[2];
    int l_1257 = 2L;
    unsigned l_1299[9][1] = {{0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}, {0x32CD5872L}};
    int *l_1310[3];
    int l_1311[6][4] = {{3L, 3L, 0xD1663E89L, 4L}, {3L, 3L, 0xD1663E89L, 4L}, {3L, 3L, 0xD1663E89L, 4L}, {3L, 3L, 0xD1663E89L, 4L}, {3L, 3L, 0xD1663E89L, 4L}, {3L, 3L, 0xD1663E89L, 4L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1247[i] = 0x67B4L;
    for (i = 0; i < 3; i++)
        l_1310[i] = &l_1257;
    for (g_493 = 0; (g_493 <= 1); g_493 += 1)
    {
        int **l_1184 = (void*)0;
        int l_1198[1][8][9] = {{{0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}, {0L, 0x531C25BCL, 0x085A949DL, 1L, 0x0C36F112L, 0xFE5C2E9BL, 0x1ECB5A77L, (-1L), 0x085A949DL}}};
        unsigned long long *l_1199 = &g_102[6][8][0];
        char *l_1200 = &g_144;
        int *l_1201 = &g_47;
        int **l_1203[2][9] = {{&l_1202, &g_191, &l_1202, &l_1201, &l_1201, &l_1202, &g_191, &l_1202, &l_1202}, {&l_1202, &g_191, &l_1202, &l_1201, &l_1201, &l_1202, &g_191, &l_1202, &l_1202}};
        int *****l_1244 = (void*)0;
        int i, j, k;
        (*l_1201) ^= (((((safe_mul_func_int8_t_s_s(p_13, ((g_1185[5] = l_1184) == &g_404))) | (l_1186[0][7] | 0L)) , ((*l_1200) = ((safe_sub_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s((p_12 == ((*l_1199) |= ((safe_lshift_func_uint8_t_u_u((l_1186[0][7] , ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((((((((g_1067 = p_12) && (func_53((*g_864), g_865[4][2], p_13, l_1197, l_1186[6][2]) >= l_1198[0][7][1])) && l_1186[6][6]) , l_1186[0][7]) <= p_12) | l_1186[0][7]) , l_1186[1][4]), 6)), l_1186[0][7])) && p_12)), g_121)) != g_865[2][1]))), p_13)) , &g_1034) == (void*)0), l_1186[6][3])) != l_1198[0][7][1]))) , (void*)0) != &g_83);
        l_1202 = l_1202;
        for (g_14 = 0; (g_14 <= 1); g_14 += 1)
        {
            volatile int **l_1205 = &g_1036;
            const int l_1213 = 0x11099CA6L;
            int *l_1214[8] = {&l_1198[0][7][1], &l_1198[0][7][1], &g_192, &l_1198[0][7][1], &l_1198[0][7][1], &g_192, &l_1198[0][7][1], &l_1198[0][7][1]};
            unsigned long long l_1290 = 0xF5A4142482823EDALL;
            int i;
            (*l_1205) = g_1204;
            if (p_13)
                continue;
            if ((safe_rshift_func_int8_t_s_s(func_59(p_12, &g_1123, (*l_1202), p_12, g_179), (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((l_1213 && p_12))), 2)), 0x0927L)))))
            {
                int *l_1215 = &g_47;
                int l_1243 = 0L;
                l_1214[1] = (l_1215 = l_1214[1]);
                if ((p_12 != p_12))
                {
                    short *l_1220 = (void*)0;
                    short *l_1221 = &g_151[2][0];
                    int l_1236 = 0xE2E86D4BL;
                    unsigned short *l_1242[2];
                    unsigned char l_1245 = 0xEFL;
                    int l_1246 = 0xCE6AFDFAL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1242[i] = &g_182;
                    l_1246 &= ((p_13 , (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(func_59(((*l_1221) = p_13), (l_1222 = &g_43[0]), (p_13 | (!(((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(p_12, (((safe_lshift_func_uint16_t_u_u((!(+65535UL)), (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_1243 = (((((l_1235 & (l_1236 , (((l_1237 , &g_121) != &g_121) | (-9L)))) > g_865[0][1]) ^ 65527UL) , g_1238[3]) == &g_1239)) , 4294967295UL), p_13)), p_12)))) , l_1244) == (void*)0))) == p_13) <= 0x562878DAF245DF5ALL), 11)), 0xE108L)) >= p_13) != (*l_1202)) == p_13) != l_1245))), p_12, p_13), p_13)), 3UL))) && p_12);
                }
                else
                {
                    for (g_1153 = 0; (g_1153 <= 1); g_1153 += 1)
                    {
                        int i, j, k;
                        l_1247[1] = ((*l_1202) = g_102[(g_14 + 5)][(g_493 + 7)][g_14]);
                    }
                    return g_83;
                }
                (*l_1201) = (safe_add_func_uint32_t_u_u((*l_1201), p_12));
                for (g_211 = 1; (g_211 >= 0); g_211 -= 1)
                {
                    int l_1250 = 0L;
                    int i, j, k;
                    if (g_102[(g_14 + 7)][(g_211 + 1)][g_14])
                        break;
                    l_1250 = (g_102[(g_211 + 5)][(g_493 + 1)][g_211] < func_59(g_102[(g_14 + 6)][(g_211 + 2)][g_14], &g_43[0], g_102[6][8][1], g_195, g_779));
                }
            }
            else
            {
                int l_1251 = (-8L);
                int ***l_1256 = &l_1203[0][4];
                unsigned short *l_1260 = (void*)0;
                unsigned long long l_1274[3][7][8] = {{{0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}}, {{0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}}, {{0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}, {0UL, 3UL, 18446744073709551608UL, 0xCB36AAB14B16E9A0LL, 0UL, 1UL, 0x2A7A434A8B71C964LL, 1UL}}};
                int l_1298[2];
                unsigned ***l_1308[10];
                unsigned **** const l_1307 = &l_1308[0];
                unsigned **** const *l_1306 = &l_1307;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1298[i] = 0x6BA0C233L;
                for (i = 0; i < 10; i++)
                    l_1308[i] = &g_1275[6][4];
                if ((l_1251 == ((safe_mod_func_int8_t_s_s(((*l_1200) = ((g_83 = (((((safe_mod_func_int16_t_s_s((((*l_1256) = (void*)0) != &g_404), 1UL)) != l_1257) < g_192) || (0xE9L ^ (g_273 = 0UL))) > (safe_mul_func_uint16_t_u_u((p_13 == p_13), (*l_1202))))) , p_13)), 0xCFL)) < p_13)))
                {
                    unsigned char l_1267[4][6][6] = {{{0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}}, {{0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}}, {{0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}}, {{0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}, {0xD6L, 0xE2L, 0x4FL, 0xA2L, 0xB0L, 254UL}}};
                    unsigned char *l_1268[6];
                    int l_1273 = 0x5180562DL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1268[i] = (void*)0;
                    l_1274[1][5][0] |= ((safe_mul_func_uint16_t_u_u((1L <= (func_50(p_13, &l_1235) && ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_1202) = (l_1267[3][4][3] != (249UL < p_12))), 4)), (safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((l_1273 = ((g_1175 & g_83) > p_13)), p_13)) < 0x81L), p_12)))) , 0UL))), g_1096)) ^ g_254[7]);
                }
                else
                {
                    unsigned ***l_1277 = &g_1275[0][6];
                    int *l_1278 = &g_528;
                    (*l_1201) = ((*g_921) != ((*l_1277) = g_1275[0][6]));
                    l_1214[5] = l_1278;
                    for (g_636 = 0; (g_636 <= (-29)); g_636 = safe_sub_func_uint8_t_u_u(g_636, 7))
                    {
                        int *l_1281[6][4][8] = {{{&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}}, {{&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}}, {{&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}}, {{&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}}, {{&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}}, {{&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}, {&l_1198[0][0][4], &l_1198[0][1][5], &l_1235, &l_1198[0][0][4], &l_1235, &g_192, (void*)0, &g_47}}};
                        int **l_1294 = &g_253[1];
                        int *** const l_1293 = &l_1294;
                        int *** const *l_1292 = &l_1293;
                        int *** const **l_1291 = &l_1292;
                        int *** const *l_1296 = (void*)0;
                        int *** const **l_1295 = &l_1296;
                        char *l_1297 = &l_1237;
                        int i, j, k;
                        l_1281[3][1][3] = &l_1257;
                        l_1278 = l_1278;
                        (*l_1202) = ((((*l_1202) >= (*l_1278)) >= p_13) , (func_50(p_12, l_1214[7]) , (g_383 , (*l_1202))));
                        l_1299[3][0] = (l_1298[0] ^= ((*l_1202) , ((*l_1278) = (((*l_1278) ^ ((*l_1297) ^= ((*l_1200) ^= (((*l_1201) = (safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(p_12, func_59((((safe_rshift_func_uint8_t_u_s(p_12, (safe_lshift_func_uint16_t_u_s((p_13 | l_1290), 6)))) , p_13) , (((*l_1295) = ((*l_1291) = &g_362[0][3][2])) != (void*)0)), &g_1123, p_13, (*l_1278), g_1123))), p_13))) , p_12)))) , (-1L)))));
                    }
                }
                for (g_681 = 0; (g_681 < 30); g_681 = safe_add_func_int8_t_s_s(g_681, 7))
                {
                    char l_1309 = 0x2AL;
                    for (l_1235 = 5; (l_1235 >= 1); l_1235 -= 1)
                    {
                        int i, j, k;
                        l_1257 ^= (func_50(((l_1274[g_14][(l_1235 + 1)][(g_14 + 6)] > ((g_1304 != l_1306) >= ((void*)0 != l_1214[1]))) != ((l_1274[(g_493 + 1)][(l_1235 + 1)][(l_1235 + 2)] , (l_1309 , (g_86 & func_21(g_865[1][3], p_13, &g_102[7][7][1], g_102[6][9][0])))) , 1L)), l_1214[7]) >= 4294967287UL);
                    }
                    if ((*l_1202))
                        break;
                }
            }
        }
        return (*l_1202);
    }
    l_1202 = &l_1235;
    l_1311[4][2] &= (*l_1202);
    return p_13;
}







static unsigned long long * func_17(unsigned long long p_18, short p_19, unsigned long long * p_20)
{
    unsigned ** const l_870 = (void*)0;
    int *l_901 = (void*)0;
    int * const * const l_915 = &g_191;
    int * const * const *l_914 = &l_915;
    unsigned short *l_944[2][1];
    unsigned l_961 = 2UL;
    const int l_996 = 0x2BF3566BL;
    unsigned *l_999 = (void*)0;
    unsigned * const *l_998 = &l_999;
    int l_1011 = (-1L);
    int **l_1033 = &l_901;
    int ***l_1032 = &l_1033;
    unsigned ****l_1041 = (void*)0;
    unsigned *****l_1040 = &l_1041;
    int l_1046[5][5] = {{1L, 0x364B36DDL, 1L, 0xFE4038B3L, (-1L)}, {1L, 0x364B36DDL, 1L, 0xFE4038B3L, (-1L)}, {1L, 0x364B36DDL, 1L, 0xFE4038B3L, (-1L)}, {1L, 0x364B36DDL, 1L, 0xFE4038B3L, (-1L)}, {1L, 0x364B36DDL, 1L, 0xFE4038B3L, (-1L)}};
    unsigned long long *l_1049 = &g_102[7][8][0];
    int *l_1078 = &l_1046[0][0];
    int l_1097 = (-1L);
    unsigned long long *l_1155 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_944[i][j] = &g_182;
    }
    for (g_681 = 0; (g_681 <= 2); g_681 += 1)
    {
        return &g_865[4][4];
    }
    for (g_182 = 0; (g_182 > 11); g_182++)
    {
        int *l_880 = (void*)0;
        int l_916[8];
        unsigned *l_926 = &g_179;
        unsigned **l_925 = &l_926;
        unsigned ***l_924 = &l_925;
        unsigned short *l_946 = &g_182;
        const unsigned long long *l_978 = &g_865[1][4];
        unsigned long long *l_997 = &g_865[3][3];
        unsigned ****l_1007 = &l_924;
        short l_1052 = 0x043DL;
        const unsigned short *l_1061 = &g_182;
        const unsigned short **l_1060 = &l_1061;
        int **l_1094[6][9][2] = {{{(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}}, {{(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}}, {{(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}}, {{(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}}, {{(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}}, {{(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}, {(void*)0, &g_253[1]}}};
        int l_1115[6][10] = {{0x27011CE5L, 0xA22985CEL, (-3L), (-3L), 0xA22985CEL, 0x27011CE5L, (-8L), 0x07E631F1L, 0x64CFB26DL, 1L}, {0x27011CE5L, 0xA22985CEL, (-3L), (-3L), 0xA22985CEL, 0x27011CE5L, (-8L), 0x07E631F1L, 0x64CFB26DL, 1L}, {0x27011CE5L, 0xA22985CEL, (-3L), (-3L), 0xA22985CEL, 0x27011CE5L, (-8L), 0x07E631F1L, 0x64CFB26DL, 1L}, {0x27011CE5L, 0xA22985CEL, (-3L), (-3L), 0xA22985CEL, 0x27011CE5L, (-8L), 0x07E631F1L, 0x64CFB26DL, 1L}, {0x27011CE5L, 0xA22985CEL, (-3L), (-3L), 0xA22985CEL, 0x27011CE5L, (-8L), 0x07E631F1L, 0x64CFB26DL, 1L}, {0x27011CE5L, 0xA22985CEL, (-3L), (-3L), 0xA22985CEL, 0x27011CE5L, (-8L), 0x07E631F1L, 0x64CFB26DL, 1L}};
        int l_1120[4];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_916[i] = 0x416FF77CL;
        for (i = 0; i < 4; i++)
            l_1120[i] = 1L;
        for (g_472 = (-26); (g_472 != 9); ++g_472)
        {
            unsigned *l_873 = &g_681;
            unsigned **l_872[6][4] = {{(void*)0, &l_873, &l_873, &l_873}, {(void*)0, &l_873, &l_873, &l_873}, {(void*)0, &l_873, &l_873, &l_873}, {(void*)0, &l_873, &l_873, &l_873}, {(void*)0, &l_873, &l_873, &l_873}, {(void*)0, &l_873, &l_873, &l_873}};
            unsigned ***l_871[3];
            unsigned ***l_874 = &l_872[5][3];
            char l_904 = (-2L);
            int i, j;
            for (i = 0; i < 3; i++)
                l_871[i] = &l_872[0][1];
            (*l_874) = l_870;
            for (g_142 = 0; (g_142 <= 7); ++g_142)
            {
                for (p_18 = 26; (p_18 != 9); p_18 = safe_sub_func_uint32_t_u_u(p_18, 1))
                {
                    int **l_879 = &g_191;
                    volatile unsigned short * const volatile **l_897 = &g_881[2][7];
                    (*l_879) = l_873;
                    (*l_879) = (*l_879);
                    (*l_879) = l_880;
                    (*l_897) = g_881[0][6];
                }
                return &g_102[6][9][0];
            }
            for (g_149 = 0; (g_149 <= 10); g_149 = safe_add_func_uint64_t_u_u(g_149, 9))
            {
                int **l_900[10] = {&g_191, &g_191, &l_880, &g_191, &g_191, &l_880, &g_191, &g_191, &l_880, &g_191};
                int i;
                l_901 = l_873;
                g_191 = l_880;
                (*l_901) = ((safe_mod_func_uint16_t_u_u(g_144, 65528UL)) & l_904);
            }
        }
        for (g_158 = 0; (g_158 < (-6)); --g_158)
        {
            unsigned char l_911 = 255UL;
            int *l_917 = &g_254[6];
            int **l_950 = &g_191;
            int ***l_949 = &l_950;
            int **** const l_948 = &l_949;
            int **** const *l_947 = &l_948;
            int l_968[2][3][7] = {{{0x306C2D3EL, 0x626200AAL, 0x83976F05L, 0x3E46FA7CL, 0x4F04664EL, 0x22910943L, 0xFE3279C7L}, {0x306C2D3EL, 0x626200AAL, 0x83976F05L, 0x3E46FA7CL, 0x4F04664EL, 0x22910943L, 0xFE3279C7L}, {0x306C2D3EL, 0x626200AAL, 0x83976F05L, 0x3E46FA7CL, 0x4F04664EL, 0x22910943L, 0xFE3279C7L}}, {{0x306C2D3EL, 0x626200AAL, 0x83976F05L, 0x3E46FA7CL, 0x4F04664EL, 0x22910943L, 0xFE3279C7L}, {0x306C2D3EL, 0x626200AAL, 0x83976F05L, 0x3E46FA7CL, 0x4F04664EL, 0x22910943L, 0xFE3279C7L}, {0x306C2D3EL, 0x626200AAL, 0x83976F05L, 0x3E46FA7CL, 0x4F04664EL, 0x22910943L, 0xFE3279C7L}}};
            unsigned short l_1009 = 0UL;
            short *l_1030[5] = {&g_70, &g_151[4][0], &g_70, &g_151[4][0], &g_70};
            const unsigned long long **l_1031 = &l_978;
            unsigned char *l_1042 = (void*)0;
            unsigned char *l_1043[3][5] = {{&g_121, &g_273, &g_121, &g_273, &g_121}, {&g_121, &g_273, &g_121, &g_273, &g_121}, {&g_121, &g_273, &g_121, &g_273, &g_121}};
            int l_1044 = 3L;
            char *l_1045[5][8][6] = {{{&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}}, {{&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}}, {{&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}}, {{&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}}, {{&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}, {&g_493, &g_149, &g_144, &g_149, &g_149, &g_144}}};
            int *l_1048[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1048[i] = &l_1044;
            if ((((*l_917) |= (((((0x9CE6L != ((!(safe_mul_func_uint16_t_u_u(g_636, ((0L <= (*g_864)) <= ((l_916[7] = (safe_lshift_func_uint16_t_u_s((func_59(g_195, &g_865[0][1], ((p_18 != (func_59(l_911, ((safe_mul_func_int16_t_s_s(((void*)0 != l_914), g_273)) , &g_102[6][9][0]), p_18, l_911, p_18) , 255UL)) | (-5L)), p_18, g_144) || p_19), p_19))) < (-1L)))))) , l_911)) & p_19) && p_19) , 0xC96F36F0L) , 0xFA8F0847L)) , g_47))
            {
                int l_918[4][4] = {{1L, (-1L), 0x53E5E00FL, (-1L)}, {1L, (-1L), 0x53E5E00FL, (-1L)}, {1L, (-1L), 0x53E5E00FL, (-1L)}, {1L, (-1L), 0x53E5E00FL, (-1L)}};
                unsigned long long **l_919 = &g_864;
                unsigned ****l_927 = &l_924;
                short *l_928 = (void*)0;
                short *l_929 = &g_35;
                long long *l_930 = &g_366;
                long long *l_931 = &g_636;
                int *l_932 = &g_528;
                int i, j;
                (*l_932) = (((*l_930) = ((((*l_931) |= func_53(l_918[0][0], (1L > func_59((((*l_919) = &g_104) == (g_920 = &p_18)), &g_104, (p_18 , (g_144 > (((*l_930) = (((*l_929) = (!(g_921 != ((*l_927) = l_924)))) || g_83)) != p_19))), g_865[0][2], p_18)), l_918[2][0], l_911, g_448)) , l_918[1][2]) < g_273)) | 0xAEF271FB478DB4ABLL);
                if ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_19, g_142)), p_18)))
                {
                    (*l_932) |= (safe_sub_func_uint16_t_u_u(65535UL, (~2L)));
                    (*l_932) = (*l_932);
                }
                else
                {
                    for (g_35 = (-30); (g_35 == 26); g_35 = safe_add_func_int32_t_s_s(g_35, 4))
                    {
                        unsigned char l_941 = 1UL;
                        l_941 = p_19;
                    }
                }
                (*l_932) = p_19;
            }
            else
            {
                unsigned short **l_945 = &l_944[0][0];
                int l_951 = 0x7BEB5829L;
                short ** const *l_960 = (void*)0;
                unsigned ** const ** const l_986 = (void*)0;
                short l_988 = (-7L);
                unsigned * const *l_1000 = (void*)0;
                long long *l_1021 = (void*)0;
                if ((((((func_50(((void*)0 != &g_337[4]), &g_47) || (safe_lshift_func_uint16_t_u_s(p_18, 12))) , (((*l_945) = l_944[0][0]) != l_946)) > ((((void*)0 == l_947) || l_951) > p_19)) , (void*)0) == (void*)0))
                {
                    g_191 = (**l_949);
                }
                else
                {
                    for (g_779 = 3; (g_779 <= 9); g_779 += 1)
                    {
                        unsigned short l_952[3];
                        short *l_955 = &g_151[7][2];
                        short **l_963 = (void*)0;
                        short ***l_962[1][8][3] = {{{(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}, {(void*)0, &l_963, (void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_952[i] = 65526UL;
                        l_952[0] = p_19;
                        g_47 |= ((safe_mod_func_uint16_t_u_u(l_951, (((-9L) <= ((*l_955) |= l_951)) ^ ((((*p_20) = l_951) && (((*p_20) | (&l_914 != ((((p_19 ^ g_211) , l_952[0]) < 3L) , &l_914))) || g_83)) == p_19)))) & p_19);
                        l_968[1][1][5] = (g_596 == (((safe_rshift_func_int8_t_s_u(p_18, (safe_mod_func_int64_t_s_s(((func_59(((func_53(((((l_960 != (l_961 , l_962[0][2][0])) && (*g_864)) || (safe_lshift_func_int8_t_s_u((p_18 < (safe_add_func_uint32_t_u_u(0x24F394F9L, ((p_19 , &g_186) != (void*)0)))), g_183))) < l_952[0]), g_273, p_18, p_19, p_18) , (-4L)) < 4294967294UL), &g_104, g_83, p_18, g_383) , p_18) , p_19), g_151[7][2])))) && (-2L)) , g_151[1][2]));
                    }
                    return &g_865[2][3];
                }
                if (((func_50(((***l_924) = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_18, 0xE84709D3L)), (safe_unary_minus_func_int64_t_s(g_43[0]))))), &l_951) | ((0x4BBDF81BL == (safe_mod_func_int8_t_s_s((~((safe_rshift_func_int8_t_s_s(p_18, p_18)) , (func_59((p_19 = p_19), l_978, g_779, p_18, p_18) >= g_151[7][2]))), p_18))) || l_951)) , 0xF1F77F58L))
                {
                    unsigned char *l_983 = &g_121;
                    int l_987 = 0xB1128967L;
                    int *l_989[10][1][5] = {{{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}, {{&l_916[0], &l_968[0][1][3], &l_916[0], &l_968[1][0][3], &l_968[1][0][3]}}};
                    unsigned char *l_995 = (void*)0;
                    unsigned * const **l_1001 = (void*)0;
                    unsigned * const **l_1002 = &l_998;
                    int i, j, k;
                    g_192 = (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_158, (l_951 , (((l_983 == (void*)0) , &g_472) != (void*)0)))), ((safe_mod_func_int16_t_s_s((l_988 = (p_19 = (((~(l_986 == &g_921)) ^ p_19) , l_987))), l_987)) , p_18))) , (void*)0) != (void*)0);
                    if (p_19)
                        break;
                    l_968[1][1][5] ^= ((func_50(g_493, (*l_950)) & ((((g_47 &= (safe_mul_func_int16_t_s_s((func_53(((g_151[3][0] = ((safe_unary_minus_func_uint8_t_u((g_273 = (safe_sub_func_int8_t_s_s((p_19 > 3UL), ((*l_983) = func_50(((*p_20) , ((***l_924) = p_19)), &g_528))))))) == 0xC8L)) , (*p_20)), p_18, p_19, l_996, l_916[0]) ^ 4294967287UL), p_19))) , (void*)0) != l_997) ^ l_988)) , p_19);
                    (*l_1002) = (l_1000 = l_998);
                }
                else
                {
                    char *l_1003 = &g_493;
                    int l_1006[8];
                    unsigned *****l_1008 = &l_1007;
                    const int l_1026 = 0L;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1006[i] = (-1L);
                    if (((p_18 ^ (((void*)0 != l_1003) , (((safe_sub_func_uint16_t_u_u(p_18, (l_951 = l_1006[7]))) , &g_921) != ((*l_1008) = l_1007)))) & ((((((l_988 ^ (g_35 = (func_53(func_59(p_18, &g_43[0], g_102[6][9][0], l_1006[7], l_1006[1]), p_18, p_18, p_19, p_18) != 0x2EL))) , l_1009) < p_18) , (void*)0) == &l_916[2]) >= 0x74L)))
                    {
                        int *l_1010[10][4] = {{(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}, {(void*)0, &g_528, (void*)0, &g_528}};
                        int i, j;
                        l_1011 = 0L;
                    }
                    else
                    {
                        short l_1020 = 0x78A0L;
                        const unsigned long long *l_1022 = &g_43[7];
                        short *l_1025[1][6][6] = {{{&g_158, &l_1020, &g_35, &l_1020, &g_158, &g_472}, {&g_158, &l_1020, &g_35, &l_1020, &g_158, &g_472}, {&g_158, &l_1020, &g_35, &l_1020, &g_158, &g_472}, {&g_158, &l_1020, &g_35, &l_1020, &g_158, &g_472}, {&g_158, &l_1020, &g_35, &l_1020, &g_158, &g_472}, {&g_158, &l_1020, &g_35, &l_1020, &g_158, &g_472}}};
                        int l_1027 = (-1L);
                        int i, j, k;
                        l_1027 = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_1020, 0)), ((func_53((((l_1021 = p_20) != (void*)0) <= (func_53((*g_864), ((void*)0 == (*g_921)), (func_59((p_19 ^= 1L), l_1022, (l_1006[1] = (safe_mul_func_uint8_t_u_u(p_18, p_18))), g_142, g_151[5][0]) >= (-7L)), l_1026, g_35) | 0x0D6E88D0D71A3319LL)), g_70, p_18, l_988, p_18) == g_383) ^ p_18))), 0x5EL)) < 0UL);
                        if (p_18)
                            continue;
                    }
                }
            }
            if ((g_192 &= ((safe_mod_func_int32_t_s_s((l_1011 |= (l_916[3] = (func_59(((g_116 = (g_596 ^= p_18)) , (p_19 = (-7L))), ((*l_1031) = &p_18), p_18, (((**l_947) = l_1032) != g_1034), p_18) < ((g_1047 ^= (safe_rshift_func_int8_t_s_u((l_1046[0][0] &= ((g_121 = (l_1040 != &l_1041)) , l_1044)), 2))) > p_18)))), p_18)) , p_18)))
            {
                return l_1049;
            }
            else
            {
                (**l_1032) = &g_47;
            }
        }
    }
    for (g_1175 = 0; (g_1175 <= 6); g_1175 += 1)
    {
        unsigned char l_1176[4][4];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_1176[i][j] = 250UL;
        }
        (*l_1078) |= l_1176[1][0];
    }
    for (g_1153 = 19; (g_1153 <= 26); g_1153 = safe_add_func_uint64_t_u_u(g_1153, 4))
    {
        unsigned short l_1179 = 65535UL;
        l_1179 ^= ((*l_1078) ^= p_18);
    }
    return &g_1123;
}







static unsigned long long func_21(const unsigned short p_22, long long p_23, unsigned long long * p_24, long long p_25)
{
    int l_843 = 0xBAB608E4L;
    int *** const *l_849 = (void*)0;
    int *** const **l_848[3];
    short *l_860 = &g_158;
    long long *l_861 = &g_636;
    unsigned char l_862[5][10] = {{0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L}, {0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L}, {0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L}, {0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L}, {0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L, 0xDEL, 0xA0L}};
    unsigned l_863 = 0x6971E8DFL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_848[i] = &l_849;
    l_843 = 0L;
    g_528 = (safe_add_func_uint8_t_u_u(l_843, (((((safe_add_func_int16_t_s_s(((l_848[0] == &l_849) , (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((g_47 = p_22) & (safe_mod_func_int16_t_s_s(((*l_860) |= p_23), 0xFDDDL))), p_23)), p_25)) || (((!((((((*l_861) = ((g_366 && p_23) | p_23)) | l_862[2][3]) > l_863) , g_70) , p_23)) || p_23) < p_22)) & 0UL), p_23))), 0L)) , (-8L)) & p_25) , p_22) , 0x6DL)));
    g_191 = &g_192;
    return g_448;
}







static const unsigned short func_26(unsigned long long * p_27, long long p_28, unsigned long long * p_29, long long p_30, long long p_31)
{
    const unsigned *l_511 = &g_183;
    const int l_518 = 2L;
    char *l_521 = &g_493;
    int **l_532 = (void*)0;
    int *l_542 = &g_528;
    int l_558 = 9L;
    int ***l_575 = &l_532;
    int ****l_574 = &l_575;
    int ** const *l_577 = &l_532;
    int ** const **l_576 = &l_577;
    unsigned long long *l_587 = (void*)0;
    int l_657 = 0L;
    const unsigned char l_678 = 0x48L;
    unsigned *l_759 = &g_179;
    unsigned **l_758 = &l_759;
    unsigned ***l_757 = &l_758;
    short *l_765 = (void*)0;
    short **l_764[6][1][9];
    short ***l_763 = &l_764[2][0][0];
    const unsigned long long *l_773 = &g_590;
    const int * const *l_796 = (void*)0;
    unsigned l_826 = 0UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
                l_764[i][j][k] = &l_765;
        }
    }
    for (g_121 = 0; (g_121 >= 8); ++g_121)
    {
        int **l_510 = &g_191;
        int ***l_514[4] = {&g_334, &g_337[4], &g_334, &g_337[4]};
        int ****l_515 = (void*)0;
        int ****l_516 = (void*)0;
        int ****l_517 = &g_362[5][0][1];
        char **l_522 = (void*)0;
        char **l_523 = &l_521;
        int *l_524 = &g_47;
        int *l_525 = (void*)0;
        int *l_526 = (void*)0;
        int *l_527[5][6][3] = {{{&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}}, {{&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}}, {{&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}}, {{&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}}, {{&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}, {&g_528, &g_192, &g_192}}};
        int i, j, k;
        (*l_510) = &g_192;
        g_528 ^= (((void*)0 != l_511) , (2UL <= (((safe_mul_func_uint16_t_u_u(((g_70 , (**l_510)) && (((*l_517) = l_514[1]) != (void*)0)), (l_518 < (safe_add_func_int32_t_s_s(((*l_524) = (((*l_523) = l_521) == (void*)0)), 0x21117067L))))) & (*g_191)) || g_211)));
    }
    for (g_86 = 7; (g_86 >= 2); g_86 -= 1)
    {
        int **l_529 = &g_191;
        int ***l_530 = (void*)0;
        int ***l_531[7] = {&l_529, &l_529, &l_529, &l_529, &l_529, &l_529, &l_529};
        const unsigned **l_535 = &l_511;
        unsigned char l_570 = 0x19L;
        unsigned short l_634 = 65530UL;
        short *l_706 = &g_158;
        unsigned long long *l_731 = (void*)0;
        int i;
        l_532 = l_529;
        (*l_532) = &g_192;
        if (g_254[g_86])
            continue;
        for (g_158 = 0; (g_158 <= 3); g_158 += 1)
        {
            int ***l_547 = &g_337[0];
            int l_549 = 0xBB063C2FL;
            const unsigned long long *l_561 = &g_104;
            int **l_582 = &g_191;
            unsigned char l_583 = 255UL;
            const unsigned long long *l_589[3][4] = {{&g_590, &g_43[2], &g_590, &g_43[2]}, {&g_590, &g_43[2], &g_590, &g_43[2]}, {&g_590, &g_43[2], &g_590, &g_43[2]}};
            const int *l_626 = &g_528;
            int ****l_641[7][6][6] = {{{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}, {{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}, {{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}, {{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}, {{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}, {{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}, {{&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}, {&l_575, &l_531[5], &l_531[5], &l_531[5], &l_531[5], &l_531[5]}}};
            unsigned char l_652[9] = {255UL, 0UL, 255UL, 0UL, 255UL, 0UL, 255UL, 0UL, 255UL};
            unsigned l_664 = 4294967289UL;
            char l_696 = 1L;
            const long long l_703[4][9] = {{0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL, 0L, 5L, 0x655D204F3379B82CLL, 5L, 0L, 0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL}, {0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL, 0L, 5L, 0x655D204F3379B82CLL, 5L, 0L, 0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL}, {0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL, 0L, 5L, 0x655D204F3379B82CLL, 5L, 0L, 0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL}, {0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL, 0L, 5L, 0x655D204F3379B82CLL, 5L, 0L, 0x4DDCBCCEF718796ELL, 0x4DDCBCCEF718796ELL}};
            unsigned long long l_729 = 0xEA79CF21ACC3EC1ELL;
            const int l_730 = 0xDF460F26L;
            const int *l_740 = &l_558;
            const unsigned short *l_755 = &g_83;
            unsigned ***l_760 = &l_758;
            int i, j, k;
            for (g_47 = 1; (g_47 >= 0); g_47 -= 1)
            {
                int *l_538 = &g_192;
                int *l_539 = (void*)0;
                for (g_116 = 0; (g_116 <= 3); g_116 += 1)
                {
                    const unsigned **l_534 = &l_511;
                    const unsigned ***l_533[10][3] = {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}};
                    short *l_537 = (void*)0;
                    short **l_536 = &l_537;
                    int i, j;
                    l_535 = &l_511;
                    (*g_191) = func_50((&g_151[g_86][g_47] != ((*l_536) = &g_151[7][2])), l_538);
                }
                l_539 = (l_538 = ((*l_532) = &g_192));
                for (g_144 = 5; (g_144 >= 1); g_144 -= 1)
                {
                    int *l_540[6][6] = {{&g_192, &g_192, (void*)0, &g_47, &g_192, &g_528}, {&g_192, &g_192, (void*)0, &g_47, &g_192, &g_528}, {&g_192, &g_192, (void*)0, &g_47, &g_192, &g_528}, {&g_192, &g_192, (void*)0, &g_47, &g_192, &g_528}, {&g_192, &g_192, (void*)0, &g_47, &g_192, &g_528}, {&g_192, &g_192, (void*)0, &g_47, &g_192, &g_528}};
                    int *l_541 = (void*)0;
                    int ** const l_543 = &g_253[0];
                    int ***l_544 = &g_334;
                    int i, j;
                    l_541 = (l_540[3][1] = &g_47);
                    (*l_529) = l_542;
                    (*l_544) = l_543;
                }
            }
            if ((*g_191))
                break;
            if (((9L && (safe_mul_func_int8_t_s_s(p_30, (&g_337[4] != l_547)))) & (safe_unary_minus_func_uint64_t_u((((*l_521) = p_30) , ((g_47 = ((*g_191) |= l_549)) != (safe_lshift_func_int8_t_s_u(p_31, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_53(g_116, ((l_558 = 0x5D951B21L) , 0UL), p_28, g_211, g_182), g_254[7])), 13)), 7))))))))))
            {
                int **l_559 = &g_191;
                unsigned short *l_564 = &g_182;
                (**l_532) = ((func_50(p_31, &g_528) < 0xB1C7FE4CL) & ((l_559 = (void*)0) == &g_191));
                (*g_191) = 1L;
                (**l_529) = (-10L);
                for (g_472 = 0; (g_472 <= 1); g_472 += 1)
                {
                    int l_560 = (-1L);
                    unsigned short **l_565 = &l_564;
                    int l_571 = (-8L);
                    int ** const ***l_578 = &l_576;
                    unsigned char *l_579 = &l_570;
                    unsigned l_584 = 4294967286UL;
                    short *l_595 = &g_151[7][2];
                    int *l_598 = &g_47;
                    int i, j, k;
                    l_560 = func_50(g_102[g_86][(g_158 + 5)][g_472], &g_528);
                }
            }
            else
            {
                int *l_624 = (void*)0;
                int l_627 = 0L;
                for (g_448 = 6; (g_448 >= 1); g_448 -= 1)
                {
                    int l_606[9][10][2] = {{{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}, {{(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}, {(-1L), 0x5F272B04L}}};
                    int l_623[10] = {0L, 0xD4F3BF08L, 0x72E0D1BBL, 0x72E0D1BBL, 0xD4F3BF08L, 0L, 0xD4F3BF08L, 0x72E0D1BBL, 0x72E0D1BBL, 0xD4F3BF08L};
                    int i, j, k;
                }
                return p_28;
            }
            for (g_493 = 0; (g_493 <= 1); g_493 += 1)
            {
                unsigned short *l_648 = &g_182;
                unsigned long long *l_651 = &g_104;
                char *l_665 = (void*)0;
                char *l_666[9] = {&g_144, &g_144, &g_144, &g_144, &g_144, &g_144, &g_144, &g_144, &g_144};
                int l_667 = 0L;
                int l_668 = 0L;
                int l_669[6] = {4L, 0x260605B5L, 4L, 0x260605B5L, 4L, 0x260605B5L};
                int l_670 = (-1L);
                short *l_677 = &g_151[1][1];
                unsigned char *l_682 = &l_652[6];
                int l_695 = (-8L);
                const int **l_738 = &l_626;
                const int **l_739 = &g_404;
                const int l_751 = 0x418F8445L;
                int i, j, k;
            }
        }
        for (g_158 = 0; (g_158 <= 3); g_158 += 1)
        {
            unsigned char *l_768 = (void*)0;
            unsigned char *l_769 = (void*)0;
            unsigned char *l_770[9][4][5] = {{{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}, {{&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}, {&g_121, &g_273, &g_121, &g_121, &l_570}}};
            unsigned *l_778 = &g_779;
            int l_780 = 0x380F5434L;
            unsigned ****l_794[8][6] = {{(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}, {(void*)0, &l_757, &l_757, &l_757, (void*)0, &l_757}};
            int * const *l_795 = &g_253[2];
            short l_810 = 1L;
            int i, j, k;
            l_780 |= func_50(((void*)0 == l_763), (((g_151[g_86][g_158] & (g_590 > (g_121 = g_151[g_86][g_158]))) < (((safe_mod_func_uint64_t_u_u(func_59(g_43[0], l_773, (safe_rshift_func_uint16_t_u_s(g_151[g_86][g_158], 3)), ((*l_778) = (safe_mul_func_uint8_t_u_u(g_151[g_86][g_158], 252UL))), g_151[g_86][g_158]), 0x24E77596E633ED7CLL)) , g_151[g_86][g_158]) > g_472)) , &g_528));
            for (g_104 = 24; (g_104 <= 49); g_104 = safe_add_func_int32_t_s_s(g_104, 1))
            {
                int *l_786[2][10][8] = {{{&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}}, {{&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}, {&g_528, &g_47, &l_558, (void*)0, (void*)0, &l_558, &g_47, &g_528}}};
                int i, j, k;
                for (g_681 = 0; (g_681 < 59); ++g_681)
                {
                }
                (**l_532) = 0x136B9873L;
                (*g_191) ^= (g_681 , (9UL == func_50((g_211 == (g_151[g_86][g_158] , func_50(((safe_mul_func_int16_t_s_s(g_254[7], g_151[6][3])) || (((((void*)0 != l_794[4][1]) <= ((*l_521) &= (l_795 == l_796))) >= l_780) && g_14)), &g_528))), &l_780)));
                for (g_192 = 0; (g_192 == (-5)); g_192--)
                {
                    unsigned short l_805 = 0x0902L;
                    int l_818 = 0x92F6AFE5L;
                    unsigned short *l_822 = &g_83;
                    for (g_149 = 0; (g_149 > 18); g_149 = safe_add_func_uint16_t_u_u(g_149, 1))
                    {
                        char l_803 = 4L;
                        short l_804 = 0xC636L;
                        char l_815[4][5][9] = {{{0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}}, {{0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}}, {{0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}}, {{0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}, {0L, 0L, (-10L), (-3L), 0L, (-3L), (-10L), 0L, 0L}}};
                        unsigned char l_819[10][1][6] = {{{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}, {{0xD6L, 0UL, 0x0FL, 0UL, 0xD6L, 255UL}}};
                        int i, j, k;
                        (*l_542) = (safe_rshift_func_uint8_t_u_s(((l_804 = (l_803 = 255UL)) >= (((l_805 = 0x53L) >= ((func_59(((safe_sub_func_int16_t_s_s(((g_43[0] || (safe_lshift_func_int8_t_s_u(l_810, 2))) | (p_28 >= (~(safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_59((**l_532), &g_590, l_815[1][1][0], ((*l_778) &= (((((safe_mod_func_uint64_t_u_u((**l_529), 0x13FABE22C3BBFA3CLL)) , l_818) , p_30) || l_819[1][0][1]) ^ g_151[g_86][g_158])), p_28), l_780)), 1L))))), 9UL)) , 0xD9B3L), p_29, l_819[6][0][3], p_31, p_28) && 0x95EFL) , (**l_529))) , l_810)), (*l_542)));
                        if ((*g_191))
                            break;
                    }
                    g_404 = ((*l_529) = &g_528);
                    if ((safe_mul_func_int16_t_s_s(p_30, ((*l_822) = g_102[4][4][1]))))
                    {
                        char l_823 = (-3L);
                        if (p_31)
                            break;
                        (****l_576) &= l_823;
                    }
                    else
                    {
                        (**l_532) ^= l_810;
                        return l_818;
                    }
                }
            }
            (****l_574) ^= (l_796 != ((safe_lshift_func_uint8_t_u_s(((18446744073709551606UL >= (l_826 , p_28)) , 0xCDL), 3)) , l_796));
            (****l_576) = ((*l_542) , (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(p_28, p_31)) == (safe_add_func_int16_t_s_s(func_53(g_149, (safe_sub_func_int64_t_s_s(g_47, (func_50(g_121, ((safe_sub_func_uint16_t_u_u(g_43[7], g_121)) , &g_192)) < 0UL))), p_30, g_14, p_28), g_14))), (**l_529))), 7)));
        }
    }
    for (g_47 = 0; (g_47 == 20); g_47 = safe_add_func_uint16_t_u_u(g_47, 1))
    {
        int *l_841 = &l_558;
        l_841 = &g_528;
    }
    return g_151[0][3];
}







static short func_36(char p_37, int p_38, unsigned short p_39)
{
    const unsigned long long *l_42 = &g_43[0];
    int *l_46 = &g_47;
    short *l_69 = &g_70;
    long long *l_365 = &g_366;
    unsigned char l_367 = 0UL;
    char *l_498 = (void*)0;
    char **l_497[3];
    int i;
    for (i = 0; i < 3; i++)
        l_497[i] = &l_498;
    (*l_46) = (safe_add_func_uint32_t_u_u((l_42 != &g_43[0]), (safe_rshift_func_uint16_t_u_s(0xF390L, 3))));
    if ((g_43[0] , (((*l_46) , (safe_mul_func_int8_t_s_s((*l_46), func_50(func_53(func_59((p_38 , ((safe_add_func_uint32_t_u_u((l_46 == ((safe_add_func_uint64_t_u_u(g_47, ((((*l_365) ^= (!(((((void*)0 != l_69) , func_71(&g_47, l_69)) == g_364) || g_211))) | l_367) && 0x7DD0A568L))) , &g_192)), 0x4C9B8622L)) > 4294967292UL)), l_365, p_37, (*l_46), (*l_46)), g_254[7], (*l_46), g_254[7], g_43[0]), l_46)))) == 248UL)))
    {
        int *l_372 = &g_192;
        (*l_372) |= (*l_46);
        return g_70;
    }
    else
    {
        int l_376[2];
        int l_431 = 4L;
        const unsigned long long *l_447 = &g_102[6][9][0];
        unsigned long long l_470 = 0xD45D628149473950LL;
        int i;
        for (i = 0; i < 2; i++)
            l_376[i] = 0xC6046515L;
        for (g_83 = 0; (g_83 == 46); g_83 = safe_add_func_int64_t_s_s(g_83, 9))
        {
            int **l_375 = &g_191;
            (*l_375) = l_46;
            (*l_375) = (void*)0;
        }
        for (g_121 = 0; (g_121 <= 6); g_121 += 1)
        {
            unsigned char l_380 = 1UL;
            int *l_406 = &g_192;
            unsigned *l_436 = &g_179;
            long long l_492 = 0xD9BE98BEF974E3EALL;
            for (g_273 = 0; (g_273 <= 2); g_273 += 1)
            {
                unsigned l_385 = 8UL;
                (*l_46) |= l_376[0];
                if ((safe_sub_func_int64_t_s_s((-2L), 0xA9E0024463F7B032LL)))
                {
                    p_38 = 0xF3E0EEA0L;
                }
                else
                {
                    unsigned long long l_379 = 18446744073709551606UL;
                    return l_379;
                }
                for (g_144 = 2; (g_144 <= 6); g_144 += 1)
                {
                    unsigned long long *l_384 = &g_102[6][9][0];
                    int *****l_396 = (void*)0;
                    int ****l_398 = &g_362[2][3][0];
                    int *****l_397 = &l_398;
                    const int l_401 = 0L;
                    int *l_430[10] = {&g_192, &g_47, &g_192, &g_47, &g_192, &g_47, &g_192, &g_47, &g_192, &g_47};
                    int i, j, k;
                    if (((l_380 < (safe_mod_func_uint32_t_u_u((g_383 || ((((((*l_384) = l_376[0]) ^ l_385) , (safe_mul_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((((*l_46) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0xB1L, (((*l_397) = &g_362[0][3][2]) == &g_362[(g_144 + 1)][(g_273 + 3)][g_273]))), (safe_rshift_func_uint8_t_u_u(func_50(p_39, (((p_39 ^ 0x30CFF87D2D09D2F1LL) ^ 0xDDL) , (void*)0)), 4))))) != p_37) || 0x2D7B4DC1F5D44BDALL), l_380)), l_401)) ^ p_37) , l_401) , l_376[0]), 1L))) , (-1L)) , l_401)), p_37))) , p_38))
                    {
                        const int *l_403[7] = {(void*)0, &g_195, (void*)0, &g_195, (void*)0, &g_195, (void*)0};
                        const int **l_402[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_402[i] = &l_403[1];
                        g_404 = &g_195;
                        return p_38;
                    }
                    else
                    {
                        const int **l_405 = &g_404;
                        (*l_405) = &g_195;
                    }
                    for (g_158 = 0; (g_158 <= 2); g_158 += 1)
                    {
                        int **l_407 = &l_406;
                        unsigned short *l_418 = &g_83;
                        unsigned *l_429 = &g_179;
                        short **l_433 = &l_69;
                        short ***l_432 = &l_433;
                        g_191 = &g_47;
                        l_406 = &p_38;
                        (*l_407) = &g_47;
                        (*l_406) = ((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u(l_376[1], (safe_mul_func_int16_t_s_s(((0UL && (((*l_418) = (safe_add_func_int64_t_s_s((-1L), g_43[8]))) >= p_37)) && func_50((((safe_mod_func_uint64_t_u_u(g_144, (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((!(func_53(p_37, (l_431 = ((safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_mod_func_uint32_t_u_u(func_50(((*l_429) = g_14), l_430[8]), (-2L))))) , g_47)), g_383, g_102[6][9][0], p_39) || 0xFEL)), p_37)) >= (-1L)) , p_37) != (*l_46)), (*l_46))))) , 0x4DE6L) , g_183), &g_192)), 0x9562L)))) , (void*)0) == l_432), p_39)) != l_376[0]), g_142)) || (-1L));
                    }
                    if ((*g_404))
                        continue;
                }
            }
            g_448 ^= (safe_sub_func_uint64_t_u_u(((*l_46) & ((*l_436) = 4294967294UL)), (((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(0xD9L, (((safe_add_func_uint64_t_u_u((func_50(g_366, &p_38) | ((safe_mul_func_uint8_t_u_u(p_38, (func_59(p_38, l_447, (*l_406), p_38, g_70) | g_149))) ^ l_376[0])), 1L)) != p_37) | p_37))), (*l_406))), (*l_406))) , (*l_406)) >= 0x48FED2C1FF31FAF5LL) , p_39) != 0x0D0DF29FL)));
            for (g_86 = 0; (g_86 <= 2); g_86 += 1)
            {
                int **l_458[3];
                int l_469 = (-1L);
                unsigned short l_473 = 0xE459L;
                int i;
                for (i = 0; i < 3; i++)
                    l_458[i] = &g_253[6];
                if (p_37)
                    break;
                if (l_431)
                    continue;
                for (g_448 = 2; (g_448 >= 0); g_448 -= 1)
                {
                    int l_453 = 0xD55209EAL;
                    short *l_459 = (void*)0;
                    short *l_460 = &g_158;
                    int l_491 = 0x0E9B67A1L;
                    const unsigned long long *l_494 = &g_104;
                    int i;
                    for (g_158 = 0; g_158 < 10; g_158 += 1)
                    {
                        for (g_47 = 0; g_47 < 6; g_47 += 1)
                        {
                            for (g_273 = 0; g_273 < 3; g_273 += 1)
                            {
                                g_362[g_158][g_47][g_273] = &g_337[4];
                            }
                        }
                    }
                    if ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((g_192 ^ (p_39 != ((l_453 > ((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((-7L), ((*l_69) = p_37))), 3)) & g_43[3])) | ((*l_460) = (g_337[(g_448 + 2)] != (l_458[1] = g_337[g_86])))))) <= (func_53(g_144, g_183, p_37, l_376[0], g_254[1]) || p_38)), 0L)), l_376[0])))
                    {
                        unsigned char *l_471 = &l_367;
                        unsigned short *l_476[6] = {&g_182, &g_83, &g_182, &g_83, &g_182, &g_83};
                        int i;
                        g_191 = &p_38;
                        g_472 &= (safe_mul_func_uint8_t_u_u(((((p_38 || ((((((safe_mul_func_int16_t_s_s(((*l_69) = ((((&g_183 != ((~func_50(g_158, &g_192)) , (void*)0)) , (0xA36CL ^ (func_50(((*l_436) &= (p_38 == ((*l_471) |= (safe_add_func_int32_t_s_s(func_53(((safe_add_func_int16_t_s_s(p_38, l_469)) ^ (*l_406)), l_470, g_254[1], p_38, g_116), l_470))))), &g_192) & p_37))) == (*l_406)) && l_470)), g_195)) & g_254[2]) < g_211) | g_366) == (*l_46)) > l_453)) && g_151[5][1]) || (*l_46)) ^ l_431), l_453));
                        (*l_406) = (func_53(l_473, (safe_rshift_func_uint8_t_u_u(((!((p_39 ^= (~g_47)) && (func_59(func_50((0xF8C1L < ((safe_lshift_func_int16_t_s_s((6UL ^ ((safe_mul_func_int16_t_s_s((+(~(safe_rshift_func_uint8_t_u_s((g_448 || ((safe_add_func_int8_t_s_s(l_473, (+(((((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(0xFD76L, p_38)), (((((((l_469 >= g_211) , &l_380) != &g_273) == l_491) & p_39) , l_376[0]) & (-5L)))) & p_37) , 0UL) , g_116) && l_492) & g_70) < g_493)))) || p_39)), l_376[1])))), p_37)) , p_39)), 8)) > l_376[0])), l_46), l_494, p_37, l_469, g_102[6][9][0]) | l_473))) , p_39), l_453)), l_376[0], (*l_46), p_37) , l_491);
                    }
                    else
                    {
                        int **l_495 = &g_191;
                        int *l_496 = &l_431;
                        (*l_495) = (void*)0;
                        if (l_376[1])
                            break;
                        (*l_496) ^= (*l_46);
                        (*l_406) = p_39;
                    }
                }
            }
        }
        g_499 = l_497[0];
        (*l_46) = (((((*l_69) = l_376[0]) >= (safe_sub_func_int8_t_s_s(0xB2L, g_192))) | ((safe_sub_func_int8_t_s_s((-6L), (g_158 == g_383))) | (*l_46))) != (((((((g_144 <= (safe_rshift_func_int16_t_s_u((p_39 < p_37), g_211))) , 0x8CL) < 0x2EL) | l_431) ^ 8UL) ^ 0xA112L) , l_431));
    }
    return p_37;
}







static unsigned char func_50(unsigned p_51, int * p_52)
{
    return p_51;
}







static unsigned func_53(unsigned long long p_54, unsigned p_55, unsigned short p_56, const unsigned p_57, long long p_58)
{
    return p_56;
}







static unsigned long long func_59(short p_60, const unsigned long long * p_61, short p_62, unsigned p_63, unsigned short p_64)
{
    int *l_370 = &g_47;
    for (g_83 = 0; (g_83 > 11); ++g_83)
    {
        int **l_371 = &g_191;
        (*l_371) = l_370;
        return g_83;
    }
    return g_182;
}







static short * func_71(int * p_72, short * p_73)
{
    int *l_74 = &g_47;
    int **l_75 = (void*)0;
    int **l_76 = &l_74;
    int l_114 = 1L;
    short *l_152 = &g_151[4][2];
    int l_178[10][9] = {{0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}, {0xB0C0B734L, 0x003B356DL, 0xB0C0B734L, 0L, 0x0E07B2ACL, 0x99A93F5EL, (-8L), 0x0AD17BF9L, 1L}};
    short **l_188 = &l_152;
    long long l_209 = 0x62001A86CCFD89AFLL;
    int **l_332 = &g_253[2];
    int ***l_333[6][1][1] = {{{&l_332}}, {{&l_332}}, {{&l_332}}, {{&l_332}}, {{&l_332}}, {{&l_332}}};
    int l_335 = 0xBA51722BL;
    int **l_336 = (void*)0;
    int i, j, k;
    (*l_76) = l_74;
    if (((*l_74) , 0L))
    {
        int l_81[4][4][4] = {{{0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}}, {{0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}}, {{0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}}, {{0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}, {0xD9490441L, 0xD9490441L, (-4L), 0xD9490441L}}};
        unsigned short *l_82[6];
        int l_84 = 0x0DA8F9E1L;
        long long *l_85[5] = {&g_86, &g_86, &g_86, &g_86, &g_86};
        int l_87 = 0x688AFC00L;
        int l_88 = 0x9D8E7DFBL;
        unsigned char l_101 = 0x71L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_82[i] = &g_83;
        l_88 ^= ((safe_add_func_uint32_t_u_u(((*l_74) , 1UL), 0x5D742CC3L)) , ((((**l_76) , (g_83 ^= (safe_rshift_func_uint16_t_u_u((l_81[2][0][3] = l_81[0][3][1]), (((void*)0 == &g_47) != (l_84 = l_84)))))) <= l_87) < 9L));
        for (g_83 = 0; (g_83 == 55); g_83 = safe_add_func_uint32_t_u_u(g_83, 4))
        {
            unsigned l_93 = 1UL;
            int l_103 = 0x86B95FE7L;
            short *l_107[7] = {(void*)0, (void*)0, &g_70, (void*)0, (void*)0, &g_70, (void*)0};
            int l_147 = 1L;
            int *l_153 = &l_81[0][3][1];
            int i;
            p_72 = p_72;
            if (g_47)
            {
                unsigned char l_94[4] = {0x99L, 0x8DL, 0x99L, 0x8DL};
                int i;
                l_88 = ((safe_mul_func_uint8_t_u_u(l_93, (g_47 , ((*l_74) & (l_103 = (g_43[6] | (((*p_73) = l_94[1]) , ((g_14 == (safe_lshift_func_uint16_t_u_u(l_94[1], (g_102[6][9][0] = (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((+(~(l_101 || g_43[0]))) > 18446744073709551615UL) || 0x5CL), (**l_76))), l_93)))))) || 0x39DBL)))))))) | (-3L));
                g_104 = 1L;
                (*l_76) = p_72;
                for (l_103 = 0; (l_103 == 20); l_103 = safe_add_func_uint8_t_u_u(l_103, 6))
                {
                    return l_107[1];
                }
            }
            else
            {
                unsigned long long *l_112 = &g_102[4][0][0];
                int l_113 = 0xD4AC9C96L;
                int *l_115 = &l_81[0][3][1];
                int l_150 = 0x917EEAFCL;
                g_116 ^= (0x1F8E40AA8DE78A8BLL >= (((((*l_115) = ((9L ^ ((((((*l_74) | (+(l_114 = ((g_70 || ((safe_add_func_uint64_t_u_u(g_104, ((l_113 = (l_103 , (g_14 >= (l_87 = (2UL > ((safe_rshift_func_uint16_t_u_u((l_84 = (((*l_112) = (**l_76)) >= l_93)), l_113)) , 0x6EED5AC3L)))))) > 0xC1FAE94CL))) , l_84)) , g_104)))) , g_102[6][9][0]) ^ g_43[0]) < l_103) | g_47)) , (-2L))) , l_82[5]) == l_82[4]) != 18446744073709551607UL));
                if ((safe_mod_func_int16_t_s_s((*p_73), (safe_rshift_func_int8_t_s_u((((g_121 = (-8L)) || (*p_72)) , (safe_mul_func_uint16_t_u_u(65530UL, 0x0B1AL))), 3)))))
                {
                    const unsigned short *l_124 = &g_14;
                    unsigned char *l_138 = &l_101;
                    int *l_141[3][4];
                    char *l_143 = &g_144;
                    unsigned char *l_145 = (void*)0;
                    unsigned char *l_146[8] = {&g_121, &g_121, &g_121, &g_121, &g_121, &g_121, &g_121, &g_121};
                    char *l_148 = &g_149;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_141[i][j] = &l_84;
                    }
                    g_151[7][2] = (l_150 = (((g_43[5] , (*l_74)) , l_124) != ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_148) = (0x6AL ^ (((safe_sub_func_uint64_t_u_u((l_147 = (((*l_115) = (safe_lshift_func_uint16_t_u_s((((*l_143) ^= (safe_mod_func_uint32_t_u_u((*l_115), (safe_unary_minus_func_int32_t_s((g_142 = ((safe_mul_func_uint8_t_u_u(((*l_138) &= l_93), (safe_sub_func_uint8_t_u_u(0x6CL, g_86)))) < ((l_113 ^= (l_103 = (l_88 = (-3L)))) & (**l_76))))))))) ^ 0xC8L), 10))) != g_47)), g_102[6][9][0])) <= (*p_73)) , 0xE2L))), 1)), 0)) > (*l_74)) && l_93) , (void*)0)));
                    (*l_76) = &l_103;
                }
                else
                {
                    return l_152;
                }
                (*l_76) = &g_47;
            }
            (*l_153) = (l_84 <= l_103);
            for (g_104 = 0; (g_104 <= 3); g_104 += 1)
            {
                (*l_153) = g_142;
                if (g_104)
                    continue;
                return &g_70;
            }
        }
        for (l_101 = 0; (l_101 != 29); l_101++)
        {
            short **l_161 = &l_152;
            int l_172[9][9] = {{1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}, {1L, 7L, (-4L), 0x3BE2858DL, 9L, 0xBAC48D8FL, 0x3A4458DFL, 0x3A4458DFL, 0xBAC48D8FL}};
            char *l_173 = &g_149;
            int l_174 = 0xA643C376L;
            int l_175[4];
            int *l_176 = (void*)0;
            int *l_177[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_175[i] = 1L;
            for (i = 0; i < 4; i++)
                l_177[i] = &l_81[3][1][2];
            g_179 = (safe_add_func_int32_t_s_s((g_158 ^= 0x7FD4F96FL), (l_88 = (l_81[1][2][2] = ((l_178[0][7] &= (l_175[3] &= ((0L != (safe_lshift_func_int16_t_s_s((((*l_161) = p_73) == &g_151[7][2]), (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(g_43[0], (&p_72 == (void*)0))) == (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((g_102[6][9][0] | ((*l_173) = (l_172[2][1] != (*p_72)))) > 4294967288UL) > l_84), l_172[4][7])), g_102[6][3][0]))), l_172[2][1]))))) , l_174))) == 0x60AC40AFL)))));
            g_182 = (safe_add_func_int64_t_s_s((~g_14), (g_86 ^= (g_142 = ((((*l_173) ^= (**l_76)) , (void*)0) != &g_142)))));
            g_183 = (~1L);
            if (g_70)
                continue;
        }
    }
    else
    {
        unsigned l_184 = 0x098B48D2L;
        int *l_242 = &g_192;
        const int *l_291 = &l_178[0][7];
        const short *l_295 = &g_70;
        const short **l_294 = &l_295;
        int ***l_320 = &l_75;
        short **l_327[1];
        int i;
        for (i = 0; i < 1; i++)
            l_327[i] = &l_152;
        l_184 = (*p_72);
        for (g_149 = 6; (g_149 >= 0); g_149 -= 1)
        {
            unsigned short l_185 = 6UL;
            int *l_190 = &g_47;
            short **l_236 = (void*)0;
            int l_269 = 0x99E6CCCAL;
        }
        for (g_149 = 0; (g_149 >= 4); g_149++)
        {
            unsigned long long l_324 = 1UL;
            int *l_329[9][6] = {{&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}, {&g_47, (void*)0, &g_47, &g_47, &l_178[0][7], (void*)0}};
            int **l_330[7] = {&l_329[8][3], &l_329[0][0], &l_329[8][3], &l_329[0][0], &l_329[8][3], &l_329[0][0], &l_329[8][3]};
            int *l_331 = &l_178[0][7];
            int i, j;
        }
        (*l_76) = p_72;
    }
    (*g_191) = ((g_334 = l_332) == (g_337[4] = ((**l_76) , (l_335 , l_336))));
    if ((*p_72))
    {
        unsigned l_340 = 0UL;
        const unsigned l_347 = 0x54A731A3L;
        char *l_348 = (void*)0;
        char *l_349 = &g_144;
        (*g_191) = ((safe_add_func_uint32_t_u_u(l_340, (((l_340 > (safe_lshift_func_int16_t_s_s((l_340 , ((l_340 , (safe_sub_func_int8_t_s_s(l_340, g_151[7][2]))) , (*l_74))), 5))) <= ((**l_76) <= g_144)) | (*p_72)))) && g_144);
        if (((l_340 | ((*l_74) > l_340)) != ((*l_349) = ((safe_add_func_int64_t_s_s(g_254[0], ((l_347 , &g_179) == (void*)0))) || 0xBDL))))
        {
            (*g_191) = (*p_72);
        }
        else
        {
            long long *l_354 = &l_209;
            unsigned char l_357 = 249UL;
            unsigned *l_358 = &l_340;
            (*g_191) = (safe_lshift_func_int16_t_s_s((g_43[0] ^ ((0x1B4FF7CDL <= ((safe_add_func_int64_t_s_s(0x7049906E010D127DLL, ((*l_354) = g_273))) == (safe_rshift_func_uint8_t_u_u(0UL, 4)))) <= ((*l_358) = (l_357 != (+l_357))))), 2));
        }
    }
    else
    {
        int l_359 = 0xD6C51247L;
        char *l_360 = &g_144;
        int ****l_361 = (void*)0;
        int l_363 = 7L;
        l_363 ^= ((255UL & ((*l_360) &= (l_359 <= (l_359 < 0x83L)))) >= ((&g_337[4] != (g_362[0][3][2] = (void*)0)) | ((((void*)0 == &g_253[3]) , (*l_74)) && g_192)));
    }
    return p_73;
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
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_102[i][j][k], "g_102[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_151[i][j], "g_151[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_254[i], "g_254[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_865[i][j], "g_865[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_893[i][j][k], "g_893[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1037[i][j][k], "g_1037[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1153, "g_1153", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
