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



static unsigned char g_3 = 250UL;
static unsigned g_35 = 0x2BB2C593L;
static unsigned g_68 = 0xF74462D1L;
static unsigned short g_72 = 0x7AD2L;
static int g_96 = 0L;
static unsigned g_102[10][6][4] = {{{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}, {{0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}, {0xF31AB994L, 0x7D506DC7L, 18446744073709551613UL, 1UL}}};
static int g_103[7][6] = {{0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}, {0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}, {0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}, {0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}, {0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}, {0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}, {0x46CE8F17L, 0x862FE7C9L, 1L, 0x1209EFF9L, 0x1209EFF9L, 1L}};
static unsigned short g_106 = 0xEFB5L;
static int g_112 = (-10L);
static short g_131 = 0xB346L;
static unsigned short g_134 = 0xAD26L;
static volatile unsigned char g_167 = 1UL;
static unsigned g_168 = 0xCE499BA8L;
static int g_202 = (-1L);
static int g_229 = 0x64F156DCL;
static int g_277 = 0xDC0F58D2L;
static int g_321 = 0x06A25049L;
static int g_395[1] = {0L};
static char g_431 = 0xE9L;
static unsigned g_432 = 0xF6C4FDCAL;
static short g_439 = (-10L);
static char g_527 = (-4L);
static int g_570 = 5L;
static short g_585 = (-1L);
static unsigned short g_781 = 0x8763L;
static unsigned g_823 = 6UL;
static int g_945 = 0xEC5C1A42L;
static unsigned short g_970 = 0xDE08L;



static unsigned func_1(void);
static unsigned short func_6(int p_7, int p_8, int p_9, unsigned char p_10);
static int func_11(short p_12, int p_13, char p_14, int p_15, unsigned short p_16);
static short func_19(short p_20, unsigned p_21, short p_22, int p_23);
static unsigned func_24(int p_25, int p_26, int p_27);
static int func_28(char p_29, unsigned short p_30);
static unsigned short func_41(unsigned short p_42, short p_43, unsigned short p_44, unsigned p_45, unsigned p_46);
static char func_51(char p_52, short p_53, unsigned p_54);
static int func_69(int p_70, unsigned p_71);
static char func_76(unsigned p_77, unsigned p_78, short p_79, unsigned p_80);
static unsigned func_1(void)
{
    int l_2[8];
    int l_36[3];
    int l_558 = 0xEBB0C670L;
    int l_672[6];
    unsigned char l_872 = 249UL;
    char l_873 = 0xCCL;
    unsigned char l_881[9] = {0x11L, 0x11L, 0xBEL, 0x11L, 0x11L, 0xBEL, 0x11L, 0x11L, 0xBEL};
    unsigned short l_882[9][2][10];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_2[i] = 0x66FE7D8AL;
    for (i = 0; i < 3; i++)
        l_36[i] = (-4L);
    for (i = 0; i < 6; i++)
        l_672[i] = (-1L);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
                l_882[i][j][k] = 0xB2A6L;
        }
    }
    g_3 = (+l_2[1]);
    g_970 = (g_395[0] = (safe_rshift_func_uint16_t_u_s(func_6(func_11(((((safe_mod_func_int32_t_s_s((func_19(g_3, func_24(l_2[3], l_2[4], func_28(((safe_add_func_int16_t_s_s((l_36[2] = (g_3 || (safe_mod_func_int16_t_s_s((g_3 <= (g_35 = g_3)), g_3)))), (safe_div_func_uint16_t_u_u(65530UL, (safe_rshift_func_uint16_t_u_s(func_41((l_558 = (safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((func_51(((((l_2[7] && 65526UL) > l_2[5]) || 1L) < g_3), g_3, l_2[2]) && l_2[1]) < g_3) < l_2[4]), g_3)) || 0x7B39L), 3))), g_3, l_2[5], g_3, l_2[1]), l_672[0])))))) == g_3), g_3)), l_672[0], l_672[3]) ^ l_872), 3UL)) > g_781) != l_872) || l_36[2]), l_672[0], l_672[0], g_781, l_873), l_881[1], g_781, l_882[6][0][0]), 2)));
    for (g_112 = 0; (g_112 != (-11)); --g_112)
    {
        return g_781;
    }
    return l_672[0];
}







static unsigned short func_6(int p_7, int p_8, int p_9, unsigned char p_10)
{
    unsigned short l_885 = 0x8433L;
    unsigned char l_886 = 6UL;
    short l_891[3];
    int l_894 = 0x22549134L;
    int l_895 = 0x91525504L;
    unsigned l_896 = 7UL;
    int i;
    for (i = 0; i < 3; i++)
        l_891[i] = (-5L);
    g_395[0] = ((safe_sub_func_uint16_t_u_u(func_41(l_885, l_886, (g_781 = (((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(func_41(l_891[2], g_570, p_9, (safe_div_func_int8_t_s_s(((0x2132F595L < l_885) <= func_69(g_102[6][2][1], (l_895 = (l_894 = (((g_321 ^ 0UL) > 0UL) || g_277))))), p_8)), l_891[0]), 0x92F4L)), p_7)) <= 0xE9L) < l_896)), p_9, l_885), 0xFAC1L)) >= p_10);
    for (l_886 = 0; (l_886 <= 5); l_886 += 1)
    {
        int l_919[2][1];
        int l_931 = 0L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_919[i][j] = 9L;
        }
        for (g_823 = 0; (g_823 <= 2); g_823 += 1)
        {
            char l_897[8] = {4L, 0x8CL, 4L, 0x8CL, 4L, 0x8CL, 4L, 0x8CL};
            int l_908 = 0x44D7FA12L;
            int i;
            for (g_112 = 0; g_112 < 3; g_112 += 1)
            {
                l_891[g_112] = 0x10E2L;
            }
            if (g_96)
                break;
            p_7 = (l_897[3] && (p_10 = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_886, (func_11((((l_908 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_103[5][0], (l_894 ^ (l_891[g_823] = 0x07A2L)))), ((g_102[0][2][1] <= (safe_sub_func_int8_t_s_s(g_72, l_896))) | (g_3 = g_102[8][0][1]))))) || 4294967286UL) <= g_68), g_103[2][4], g_167, p_7, l_886) & 4294967290UL))), p_9))));
            for (p_9 = 4; (p_9 >= 0); p_9 -= 1)
            {
                int l_925 = (-6L);
                l_894 = (safe_sub_func_int32_t_s_s(l_897[4], (p_7 = g_229)));
                for (g_439 = 5; (g_439 >= 0); g_439 -= 1)
                {
                    unsigned char l_911[9][1][5] = {{{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}, {{0xD6L, 255UL, 0xEBL, 0x3BL, 0xE0L}}};
                    int l_927 = 0L;
                    int l_928 = 8L;
                    int i, j, k;
                    p_7 = (l_911[3][0][1] = (g_395[0] = 5L));
                    for (g_68 = 0; (g_68 <= 5); g_68 += 1)
                    {
                        unsigned l_924 = 4294967293UL;
                        int l_926 = 0x817CF786L;
                        g_321 = (g_395[0] = (p_9 != func_69((g_96 ^ p_7), g_823)));
                        l_926 = (((safe_add_func_uint8_t_u_u((!(safe_lshift_func_uint16_t_u_u(7UL, g_134))), p_9)) && (g_439 && ((safe_add_func_int16_t_s_s((g_395[0] != func_11((func_76((safe_unary_minus_func_int16_t_s(((l_919[1][0] = g_431) > ((safe_div_func_uint32_t_u_u(g_585, (safe_sub_func_int8_t_s_s((l_894 = (p_7 & l_886)), 0L)))) == g_781)))), p_10, l_924, l_925) || p_7), g_781, g_68, p_8, g_585)), 0x92E3L)) | 0L))) >= g_781);
                    }
                    l_908 = l_891[g_823];
                    p_7 = (func_11(p_7, (255UL || (l_927 = (l_908 = g_103[4][2]))), (l_928 = l_911[3][0][1]), g_431, (safe_mod_func_int8_t_s_s((l_911[5][0][4] & g_431), (p_7 | (l_925 = (l_931 = 0x4342E0ACL)))))) < 1UL);
                }
                for (g_168 = 0; (g_168 <= 5); g_168 += 1)
                {
                    unsigned l_948 = 1UL;
                    int l_959 = 0xDCA453FEL;
                    if (g_432)
                    {
                        p_7 = l_897[3];
                        g_321 = (l_925 = (safe_rshift_func_uint8_t_u_s(0x9FL, 1)));
                    }
                    else
                    {
                        int l_942 = 0x6128D7EAL;
                        int l_946 = 0xA444FCE2L;
                        int l_947 = (-6L);
                        l_947 = ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_897[4], (l_946 = (g_945 = (safe_mod_func_uint16_t_u_u(((l_925 && (safe_add_func_uint32_t_u_u(((-8L) | ((p_8 | (((l_908 = p_9) && (g_431 = ((((g_96 | l_942) ^ 0x48L) && (safe_mod_func_int16_t_s_s(g_321, g_781))) & 6L))) | g_35)) >= g_321)), 0xEBEC6F1CL))) >= p_7), p_10)))))), g_35)) < g_72);
                    }
                    if (l_925)
                    {
                        g_395[0] = (p_7 = l_925);
                    }
                    else
                    {
                        g_277 = (l_948 = g_823);
                        p_7 = g_945;
                        p_7 = (p_7 != ((safe_mod_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(func_69(p_8, (l_908 = ((g_945 < (g_431 | func_28((l_959 = (g_102[2][5][3] & func_69((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_945, 7)), (safe_sub_func_uint16_t_u_u(0x1508L, (l_925 < (l_931 = (g_781 == p_7))))))), p_10))), l_925))) > p_8))), 0x6DL)) || g_202) | 0x8092L), 0xE8476AC4L)) ^ l_925));
                        p_7 = p_9;
                    }
                    g_395[0] = p_8;
                }
                g_202 = ((0x7FC7L == p_9) >= l_897[3]);
            }
        }
        return l_891[2];
    }
    l_894 = ((l_895 = (((safe_div_func_int16_t_s_s((l_891[2] < (-1L)), p_10)) >= p_9) < (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(p_7, p_9)) | p_9), 1)))) | func_24((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(4UL, func_11(p_8, g_72, p_8, p_8, p_8))), g_103[4][2])), l_894, p_10));
    return p_8;
}







static int func_11(short p_12, int p_13, char p_14, int p_15, unsigned short p_16)
{
    unsigned l_880[8][8];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            l_880[i][j] = 5UL;
    }
    for (p_13 = 12; (p_13 == 5); p_13 = safe_sub_func_int8_t_s_s(p_13, 1))
    {
        int l_878 = 0L;
        int l_879 = 0xFB6E4555L;
        for (g_3 = (-23); (g_3 <= 41); ++g_3)
        {
            l_879 = (l_878 <= (p_12 = 6L));
        }
        return p_13;
    }
    return l_880[6][5];
}







static short func_19(short p_20, unsigned p_21, short p_22, int p_23)
{
    short l_749 = 0L;
    int l_789 = (-7L);
    short l_842 = 5L;
    int l_870 = 0xCB526C16L;
    int l_871 = 0xA40CE281L;
    g_321 = p_20;
    for (g_585 = 0; (g_585 >= 14); g_585 = safe_add_func_uint32_t_u_u(g_585, 6))
    {
        unsigned l_745 = 4294967286UL;
        int l_754 = 1L;
        int l_798[4][6] = {{0x59A77149L, 0x9580DBFDL, (-10L), 0x9580DBFDL, 0x59A77149L, 0x5DDE7981L}, {0x59A77149L, 0x9580DBFDL, (-10L), 0x9580DBFDL, 0x59A77149L, 0x5DDE7981L}, {0x59A77149L, 0x9580DBFDL, (-10L), 0x9580DBFDL, 0x59A77149L, 0x5DDE7981L}, {0x59A77149L, 0x9580DBFDL, (-10L), 0x9580DBFDL, 0x59A77149L, 0x5DDE7981L}};
        int i, j;
        for (p_20 = 12; (p_20 == 20); ++p_20)
        {
            short l_748 = (-8L);
            int l_753 = 0x24E751B1L;
            unsigned short l_797 = 0UL;
            g_395[0] = func_51((g_431 = ((0UL || func_69(l_745, (safe_div_func_uint16_t_u_u((l_748 <= (l_749 ^ p_21)), g_439)))) != ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((l_754 = (l_753 = l_749)))), g_134)) && 0L))), l_748, l_748);
            if (func_28(g_395[0], l_749))
            {
                unsigned short l_761 = 65527UL;
                int l_762 = 0x412E4CFFL;
                for (g_432 = 0; (g_432 <= 8); g_432 = safe_add_func_uint8_t_u_u(g_432, 1))
                {
                    for (g_72 = 0; (g_72 <= 0); g_72 += 1)
                    {
                        int i;
                        g_202 = (safe_add_func_int16_t_s_s(g_395[g_72], (g_395[g_72] || (safe_mod_func_int32_t_s_s(l_754, (g_277 = l_761))))));
                        l_762 = 0x41DF0044L;
                    }
                }
            }
            else
            {
                short l_790 = 0L;
                unsigned l_805 = 0x721D0B79L;
                int l_806 = 2L;
                int l_807 = 0L;
                if (p_22)
                    break;
                for (g_131 = (-21); (g_131 <= (-1)); g_131 = safe_add_func_uint8_t_u_u(g_131, 5))
                {
                    unsigned l_791 = 18446744073709551613UL;
                    int l_792 = 1L;
                    if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(((g_134 = l_754) && (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_527, (l_791 = (248UL || ((l_754 = ((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(0x5CL, g_781)), (safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u((g_3 >= (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_789 = 0x443DL), (l_790 ^ 0xA3L))), 1))), p_20)) ^ p_20))))) > p_21)) > g_72))))) | p_20), l_753))), g_781)) >= l_792) >= g_321), l_749)), p_23)))
                    {
                        int l_795 = 0xE54417ECL;
                        int l_796 = 0x9AAA38EEL;
                        l_795 = (safe_lshift_func_int16_t_s_s((g_106 && g_35), 7));
                        l_796 = func_28((0x1425L && ((l_791 >= ((((l_789 = g_168) == g_106) >= g_134) >= 0x8D6DL)) | (g_103[4][2] ^ p_20))), g_277);
                        l_792 = ((l_753 = l_797) != 0xA5L);
                        l_798[3][1] = p_20;
                    }
                    else
                    {
                        short l_808[9] = {0x7714L, 0x2828L, 0x7714L, 0x2828L, 0x7714L, 0x2828L, 0x7714L, 0x2828L, 0x7714L};
                        int i;
                        g_395[0] = 0xF54ED5E0L;
                        l_808[7] = (g_202 = (l_789 = (func_28(g_202, func_28(l_748, p_20)) > (l_754 != (l_807 = (p_23 < (l_806 = (safe_lshift_func_uint8_t_u_u(248UL, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_131, g_106)), l_805)))))))))));
                    }
                    if (l_806)
                        break;
                    if ((l_754 = ((safe_rshift_func_int16_t_s_s(l_749, 14)) <= ((p_21 != p_22) ^ ((g_585 != (safe_lshift_func_int16_t_s_u(func_28(p_20, p_20), 7))) < (1UL < l_748))))))
                    {
                        g_202 = p_23;
                        l_807 = g_134;
                        l_792 = func_69(l_748, g_103[4][2]);
                        l_754 = (l_792 = (0xB79EL != ((safe_lshift_func_uint8_t_u_u(l_806, 1)) | (((l_797 || (+func_28(l_798[2][0], (safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_797, (safe_lshift_func_int8_t_s_s(p_21, func_28(g_431, (safe_sub_func_int8_t_s_s((g_823 = func_28((g_527 = g_72), p_21)), l_745))))))), 1UL))))) && g_570) & 4294967295UL))));
                    }
                    else
                    {
                        short l_841 = (-1L);
                        l_807 = (g_395[0] = g_103[3][0]);
                        l_792 = (l_753 = (((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(func_69((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((p_23 >= func_28(p_23, g_823)), (safe_lshift_func_int8_t_s_u((g_431 = g_585), (safe_unary_minus_func_int32_t_s((l_754 = (func_69((l_753 != func_69((p_23 != (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_807 = func_69((l_841 = p_21), l_798[0][0])), 6)), 3))), p_20)), l_749) || g_131)))))))) & g_585), l_842)) >= g_131), g_103[4][2])), p_22), g_68)), g_102[2][4][1])) > 0x4888L) && 7UL));
                        l_792 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(0x5DL, (+func_28((g_431 = ((safe_rshift_func_int8_t_s_s((l_806 = (l_790 && ((((p_22 == ((p_21 & (((func_69(p_20, g_395[0]) || (((g_3 = (l_754 = 246UL)) == (safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_20, p_21)), 1))) && 0x4FL)) >= g_112) < g_168)) || 0xC3CC0D75L)) && g_134) >= 2UL) != 0xF1L))), 5)) <= 0x47L)), l_789)))), l_805));
                    }
                }
                g_202 = (safe_sub_func_uint16_t_u_u(l_842, 0x43A9L));
            }
            g_202 = g_395[0];
        }
    }
    l_871 = (safe_sub_func_int32_t_s_s((!(g_395[0] = func_51((l_870 = ((safe_lshift_func_int8_t_s_u((l_789 = (((65535UL < (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((l_842 ^ g_72), 3)) & ((safe_rshift_func_int8_t_s_u(func_41(p_21, (safe_unary_minus_func_int32_t_s(l_789)), p_22, g_35, ((g_106 = (safe_sub_func_int16_t_s_s(l_749, ((func_69(l_749, g_35) | p_21) > g_321)))) != 0xDBFDL)), 3)) >= l_842)), g_3))) == (-10L)) >= l_842)), 5)) & p_22)), p_22, p_21))), g_823));
    return p_23;
}







static unsigned func_24(int p_25, int p_26, int p_27)
{
    unsigned l_681 = 7UL;
    int l_686 = 9L;
    int l_687 = (-2L);
    unsigned l_706[2];
    int l_707 = (-10L);
    int i;
    for (i = 0; i < 2; i++)
        l_706[i] = 18446744073709551612UL;
    g_395[0] = (safe_rshift_func_uint8_t_u_s((l_681 = 1UL), 2));
    if ((l_681 < (((safe_lshift_func_int8_t_s_s((l_707 = func_28(l_681, ((safe_mod_func_int32_t_s_s(((l_687 = (l_686 = 0x1CL)) || (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((func_76(((safe_div_func_uint32_t_u_u(g_134, l_686)) | (g_527 = (g_431 = func_69((g_395[0] = ((safe_lshift_func_uint16_t_u_u(p_25, (safe_rshift_func_int16_t_s_s(((l_681 >= (safe_div_func_uint32_t_u_u((l_687 <= (((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_706[1], 13)), g_570)), l_687)) <= l_687) > g_103[6][5])), 0x981A16ABL))) >= p_25), p_25)))) < 255UL)), p_26)))), g_168, p_26, l_687) == 0xF38EL), p_25)), l_706[1]))), g_439)) <= g_585))), l_706[1])) < g_3) == l_706[0])))
    {
        unsigned l_708 = 0xC2B951FCL;
        g_321 = 0L;
        p_26 = func_41((g_103[6][2] ^ l_708), l_706[1], (l_686 = p_27), p_26, p_27);
        return l_708;
    }
    else
    {
        int l_716 = 0x39D8F10FL;
        int l_726 = 0x98F65F08L;
        for (g_229 = 0; (g_229 > (-10)); g_229--)
        {
            short l_727 = 0x216CL;
            unsigned l_730 = 0xA2F1D54BL;
            int l_735 = 0x99843F83L;
            unsigned l_736 = 18446744073709551615UL;
            for (g_321 = 0; (g_321 == (-5)); --g_321)
            {
                p_27 = 0x62197281L;
                for (g_68 = 0; (g_68 < 57); g_68 = safe_add_func_int8_t_s_s(g_68, 9))
                {
                    unsigned char l_715 = 251UL;
                    char l_717 = 2L;
                    if (l_715)
                    {
                        g_395[0] = l_715;
                    }
                    else
                    {
                        if (p_27)
                            break;
                        l_717 = l_716;
                        if (g_68)
                            break;
                        return p_25;
                    }
                    g_395[0] = (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((g_202 = (safe_rshift_func_int8_t_s_s(g_103[5][3], (safe_sub_func_uint32_t_u_u(l_726, l_727))))), (-2L))), 0x4019C9E3L));
                    g_395[0] = (safe_rshift_func_uint8_t_u_s((l_730 >= ((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(g_134, (l_735 = p_25))), l_736)) & 0UL)), (g_395[0] <= (p_25 | (g_527 = func_69((g_277 = l_681), g_321))))));
                }
                for (p_25 = 0; (p_25 != 22); p_25++)
                {
                    l_707 = (safe_div_func_uint32_t_u_u(g_585, g_134));
                    if (p_26)
                        continue;
                    l_687 = (+(p_25 ^ 0L));
                }
            }
        }
    }
    return p_26;
}







static int func_28(char p_29, unsigned short p_30)
{
    int l_673 = 0L;
    g_395[0] = (l_673 <= p_29);
    for (g_96 = 4; (g_96 <= 21); ++g_96)
    {
        int l_678 = 0x25B79478L;
        l_673 = (((g_439 = (safe_mod_func_int32_t_s_s((g_229 ^ 0x9752A23DL), l_678))) | 0x51EEL) & g_570);
    }
    return g_432;
}







static unsigned short func_41(unsigned short p_42, short p_43, unsigned short p_44, unsigned p_45, unsigned p_46)
{
    unsigned char l_559 = 1UL;
    int l_567 = 0L;
lbl_614:
    l_559 = p_43;
    for (g_432 = 0; (g_432 <= 0); g_432 += 1)
    {
        unsigned short l_560 = 0x3BE0L;
        int l_599[4][3][9] = {{{0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}}, {{0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}}, {{0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}}, {{0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}, {0x0C7E112AL, 0xD186D5F5L, 0x0C7E112AL, 0x56CEA97AL, 0x79F5BF23L, 0x02ECA2E8L, 1L, 0x663B5B55L, 0x329BCB21L}}};
        short l_651 = 0xB37FL;
        int i, j, k;
        for (g_68 = 0; (g_68 <= 0); g_68 += 1)
        {
            int l_590 = 0x4611BECEL;
            int l_634[10] = {(-9L), 0L, (-1L), (-1L), 0L, (-9L), 0L, (-1L), (-1L), 0L};
            int l_667[5] = {(-1L), 0xBD99D0C5L, (-1L), 0xBD99D0C5L, (-1L)};
            int i, j;
            l_560 = (g_395[g_432] = g_103[(g_68 + 6)][(g_432 + 2)]);
            for (g_202 = 3; (g_202 >= 0); g_202 -= 1)
            {
                int i, j, k;
                g_277 = g_102[(g_68 + 6)][(g_202 + 1)][g_202];
                if ((+((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(((l_567 = (((g_395[g_68] > (g_395[g_68] && g_395[g_68])) <= g_96) | (safe_div_func_int16_t_s_s(l_559, (p_43 = 0x436BL))))) ^ (safe_div_func_uint32_t_u_u((p_45 = (g_570 = g_102[7][1][3])), ((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((g_131 = (safe_mod_func_int32_t_s_s((p_44 || (p_42 == p_44)), p_44))) || g_167), 1UL)), g_432)) | l_560)))), g_72)) > g_96), 12)) & 7L)))
                {
                    unsigned l_595 = 0xE6A82CC0L;
                    int l_598 = 0L;
                    g_395[g_432] = ((g_585 = (safe_add_func_uint8_t_u_u(g_102[7][2][0], ((!(safe_lshift_func_int8_t_s_u((g_527 = g_134), 7))) < (g_395[g_68] <= g_103[4][2]))))) || (safe_lshift_func_int16_t_s_u((g_395[0] < ((g_277 > g_103[5][5]) != (l_590 = ((safe_div_func_int8_t_s_s((g_432 >= 0L), p_43)) >= g_131)))), l_559)));
                    for (p_46 = 1; (p_46 <= 5); p_46 += 1)
                    {
                        int i, j;
                        l_599[2][1][8] = (((g_106 = g_103[(g_432 + 2)][(g_432 + 2)]) & (safe_div_func_int16_t_s_s(l_567, (g_431 && ((0xE1L >= (l_598 = ((0x5DA4L == (safe_div_func_uint32_t_u_u(4294967290UL, 4294967295UL))) || ((((l_595 ^ ((safe_sub_func_int32_t_s_s(p_44, 0xB968F138L)) | l_559)) != g_96) | 5UL) < g_96)))) > p_43))))) == p_46);
                        return g_277;
                    }
                    g_321 = (safe_add_func_int8_t_s_s(l_559, g_432));
                }
                else
                {
                    unsigned l_608 = 0x19D0CDD3L;
                    g_395[g_432] = p_42;
                    for (l_560 = 0; (l_560 <= 3); l_560 += 1)
                    {
                        short l_613 = 1L;
                        l_613 = (l_560 || ((p_44 | (safe_div_func_uint16_t_u_u(p_46, (safe_add_func_int16_t_s_s((l_608 && (safe_lshift_func_int8_t_s_u(g_202, 0))), (g_395[g_432] > (safe_rshift_func_uint8_t_u_u((((g_395[g_432] >= 1L) & p_43) != g_68), g_3)))))))) <= l_608));
                    }
                }
            }
            g_277 = (l_590 = 0xE899EDF3L);
            for (g_585 = 0; (g_585 <= 3); g_585 += 1)
            {
                unsigned char l_633 = 255UL;
                for (l_590 = 3; (l_590 >= 0); l_590 -= 1)
                {
                    int i, j, k;
                    if (g_102[(g_585 + 2)][(g_585 + 1)][g_432])
                    {
                        if (g_68)
                            goto lbl_614;
                    }
                    else
                    {
                        int i, j, k;
                        l_634[1] = ((safe_div_func_uint8_t_u_u(g_102[(g_585 + 3)][(g_432 + 3)][(g_68 + 3)], p_42)) == (l_599[2][1][8] = ((safe_mod_func_uint16_t_u_u(p_43, ((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((p_45 <= ((g_395[0] = (safe_rshift_func_int16_t_s_s(g_439, g_102[(g_585 + 2)][(g_585 + 1)][g_432]))) > (safe_lshift_func_int8_t_s_u((((((safe_lshift_func_int16_t_s_u(0x5458L, 8)) != func_69((safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(g_432, p_44)) | g_202), g_102[(g_585 + 2)][(g_585 + 1)][g_432])), p_44)) | g_167) | 0xF8L) | p_43), l_633)))), g_432)), g_102[0][3][0])) && 0x31D0L))) < g_68)));
                        g_395[g_432] = (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_68, 5)), (((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_45, 7)), 0x2ED956DCL)) | ((l_599[0][1][2] = ((0x18L & g_431) != (safe_rshift_func_uint8_t_u_s(5UL, 6)))) > (g_112 == (safe_lshift_func_uint16_t_u_s((p_42 = g_102[7][0][3]), 4))))) != g_102[(g_585 + 2)][(g_585 + 1)][g_432]))), 3));
                    }
                }
                for (p_46 = 0; (p_46 <= 5); p_46 += 1)
                {
                    int i, j, k;
                    for (p_44 = 0; (p_44 <= 3); p_44 += 1)
                    {
                        int i, j;
                        l_651 = g_103[(g_585 + 2)][(g_68 + 1)];
                    }
                    g_395[0] = ((g_102[g_585][(g_68 + 3)][(g_432 + 1)] != (g_102[(g_68 + 8)][(g_68 + 1)][(g_68 + 1)] > g_585)) < (safe_add_func_uint16_t_u_u((1L <= (p_44 & ((safe_lshift_func_int16_t_s_s(0xC79DL, ((safe_rshift_func_uint8_t_u_s((l_599[2][0][7] = (func_69(g_167, g_102[(g_68 + 8)][(g_68 + 1)][(g_68 + 1)]) && p_46)), 6)) & 0x41L))) <= g_131))), p_46)));
                }
                if (p_46)
                    break;
                g_395[0] = ((safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((p_42 ^ 0x8FA3EC8EL) || (((l_590 >= ((safe_sub_func_uint8_t_u_u(g_229, ((+func_69(((safe_lshift_func_int8_t_s_s(((p_42 < ((safe_sub_func_uint16_t_u_u(((l_667[0] <= l_633) == 0x3149L), (safe_mod_func_uint16_t_u_u(((func_69((3L != g_439), l_560) & 0x5232L) ^ g_395[g_432]), l_667[0])))) < l_633)) ^ (-3L)), l_667[0])) > g_439), p_42)) && (-8L)))) > l_633)) && p_45) || 0x5646EE90L)))), l_567)) & 0xB139F3F8L);
            }
        }
    }
    g_321 = g_168;
    for (g_570 = 0; (g_570 <= 22); g_570++)
    {
        l_567 = g_131;
        if (g_106)
            continue;
    }
    return l_567;
}







static char func_51(char p_52, short p_53, unsigned p_54)
{
    unsigned l_55[7];
    unsigned l_59 = 0xD67A3D58L;
    int l_67 = 0x68D9A65CL;
    unsigned l_75 = 4UL;
    int l_372 = 0xBF352B2FL;
    int l_546 = 6L;
    int l_548 = 0xABDFB6E7L;
    int i;
    for (i = 0; i < 7; i++)
        l_55[i] = 0xDE769035L;
    if ((l_55[1] == (((safe_unary_minus_func_uint16_t_u(((((safe_lshift_func_uint8_t_u_s(l_59, (safe_unary_minus_func_uint16_t_u((safe_add_func_int32_t_s_s((g_3 > ((safe_div_func_uint16_t_u_u(((l_67 = 9L) != l_59), l_55[1])) > (g_68 = ((0xB38AL & p_53) <= (((g_3 != 0x26CEL) > l_55[1]) || p_54))))), 0x26A67225L)))))) | p_53) & l_55[1]) & p_52))) == 0x90CB933DL) >= g_3)))
    {
        unsigned char l_81[2];
        int l_373 = (-1L);
        unsigned l_416 = 8UL;
        int l_493 = 0x9ED79E98L;
        int l_500[2];
        int l_501 = 0xE8F8F004L;
        unsigned short l_528[8][10][3] = {{{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}, {{65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}, {65527UL, 0x6D09L, 0UL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_81[i] = 248UL;
        for (i = 0; i < 2; i++)
            l_500[i] = (-10L);
lbl_556:
        l_67 = func_69((0xC86EL > (g_72 = g_68)), ((-1L) > (safe_sub_func_int8_t_s_s(l_75, func_76(l_81[1], l_81[1], (l_59 | (p_53 = (0x3F78CAFAL | 4UL))), p_54)))));
        for (l_59 = (-28); (l_59 > 18); l_59 = safe_add_func_uint8_t_u_u(l_59, 4))
        {
            unsigned short l_330 = 65529UL;
            g_202 = (~(safe_lshift_func_uint16_t_u_s(l_330, 13)));
            if (l_330)
                break;
        }
        g_277 = (-1L);
        for (g_72 = 0; (g_72 > 58); g_72++)
        {
            unsigned short l_369[6];
            short l_376 = (-1L);
            int l_404 = 0xA25CA217L;
            unsigned short l_417 = 65527UL;
            unsigned l_526 = 0xA215559AL;
            int i;
            for (i = 0; i < 6; i++)
                l_369[i] = 0xEABDL;
            for (l_67 = (-28); (l_67 <= (-1)); l_67 = safe_add_func_int8_t_s_s(l_67, 4))
            {
                int l_342[8] = {0x6CE06D04L, 0x87326208L, 0x6CE06D04L, 0x87326208L, 0x6CE06D04L, 0x87326208L, 0x6CE06D04L, 0x87326208L};
                int l_357 = 0x57FC2DDFL;
                unsigned l_371 = 9UL;
                int l_440[5][10][4] = {{{1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}}, {{1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}}, {{1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}}, {{1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}}, {{1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}, {1L, (-1L), (-5L), 0x70EA9EC9L}}};
                int i, j, k;
                for (p_54 = 0; (p_54 != 24); p_54++)
                {
                    unsigned char l_360 = 0xF8L;
                    int l_370 = 0x3C63E277L;
                    for (g_321 = 0; (g_321 == (-2)); g_321 = safe_sub_func_int16_t_s_s(g_321, 1))
                    {
                        unsigned l_341 = 4294967289UL;
                        int l_358 = (-3L);
                        int l_359 = 0L;
                        l_359 = (safe_add_func_int8_t_s_s(l_341, (l_358 = func_69(l_81[1], (l_342[1] ^ (safe_lshift_func_uint16_t_u_u(l_341, (g_106 = (safe_lshift_func_uint8_t_u_s(p_52, (l_342[1] || ((safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(65533UL, 8)) ^ g_103[4][2]) & func_69(((l_357 = (((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((1UL && 0x0DL) < (-3L)), 1)), p_52)) < g_277) && 1UL)) | l_341), l_55[3])), g_112)) < l_81[0]))))))))))));
                        l_360 = (l_342[2] & g_277);
                        l_373 = ((safe_lshift_func_uint8_t_u_s(p_54, ((g_321 > (safe_sub_func_uint32_t_u_u(g_68, (l_372 = func_69(((!((p_54 < 1L) < (l_371 = (l_370 = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0x82A1L, l_360)), l_369[5])))))) && func_69(g_321, l_81[1])), g_112))))) >= 9UL))) <= g_102[5][2][2]);
                        return g_167;
                    }
                }
                l_376 = (safe_lshift_func_uint8_t_u_s(l_369[5], 5));
                for (g_134 = 20; (g_134 < 33); ++g_134)
                {
                    unsigned l_387 = 0xF0C4BB2AL;
                    int l_394 = 0L;
                    l_357 = ((safe_rshift_func_uint8_t_u_u(p_54, 1)) | ((((safe_add_func_uint32_t_u_u((l_373 = ((l_373 == (g_106 = func_69(l_376, l_59))) | (l_372 = ((safe_sub_func_int32_t_s_s(((-4L) ^ (safe_div_func_uint8_t_u_u((((p_53 = p_53) ^ p_54) <= (l_387 = g_72)), l_357))), l_371)) > l_59)))), g_167)) ^ 0x8CL) & l_55[1]) == p_52));
                    for (g_106 = 0; (g_106 <= 37); g_106 = safe_add_func_int16_t_s_s(g_106, 8))
                    {
                        int l_405 = (-3L);
                        g_395[0] = ((func_69((+((l_372 = ((g_3 <= (p_52 == (safe_rshift_func_uint8_t_u_u((g_395[0] = (p_54 ^ (safe_sub_func_int8_t_s_s(p_52, l_394)))), 2)))) < l_369[3])) <= (l_404 = (((((safe_mod_func_int32_t_s_s(p_52, ((safe_div_func_uint32_t_u_u((g_68 = (safe_lshift_func_int8_t_s_s((0x494B6A79L != (safe_lshift_func_uint16_t_u_u((g_229 > g_102[8][0][1]), l_369[2]))), g_134))), 0xA033A2BEL)) || l_369[5]))) && p_53) <= 0x50L) != p_54) & 251UL)))), l_369[1]) >= l_371) ^ 65535UL);
                        l_405 = l_357;
                        g_321 = ((0x4DL & l_404) < (l_404 || p_53));
                        g_202 = (+p_53);
                    }
                    for (g_202 = 0; g_202 < 8; g_202 += 1)
                    {
                        l_342[g_202] = (-1L);
                    }
                }
                for (g_134 = (-10); (g_134 > 34); g_134++)
                {
                    unsigned short l_420 = 0xCC5EL;
                    int l_421 = 0xC5ECDDEFL;
                    int l_430 = 0x2D3EC666L;
                    l_417 = (safe_mod_func_int32_t_s_s((g_168 & (safe_add_func_uint16_t_u_u((p_52 && (p_52 & (func_69(g_102[8][5][0], l_67) && ((g_168 > g_106) != (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((p_53 = g_96), p_54)), g_395[0])))))), p_52))), l_416));
                    l_421 = (func_69(l_404, (l_372 = (safe_div_func_uint32_t_u_u((g_68 = l_420), 0x2BF05E44L)))) == 0x70BE18EFL);
                    if ((g_131 > (((g_432 = (g_431 = (g_96 < (0xB0EAL != ((((p_53 < (safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(1UL, (l_357 = (p_52 = g_68)))), (safe_lshift_func_int8_t_s_u((-10L), 7))))) | ((g_106 = func_69((safe_mod_func_uint8_t_u_u(((l_430 = (l_421 = l_417)) ^ g_131), p_54)), l_371)) < g_102[8][0][1])) && l_357) <= 0xA5B41A43L))))) & g_102[8][0][1]) >= 0xBEBCL)))
                    {
                        unsigned short l_453 = 0xB82AL;
                        l_440[1][4][3] = (safe_mod_func_int8_t_s_s(((g_168 | 7UL) ^ (l_357 = (safe_add_func_int16_t_s_s(func_69(((safe_lshift_func_uint16_t_u_u(0UL, (g_106 = p_52))) <= func_69((g_277 = l_75), (g_68 = 1UL))), (g_439 = l_342[7])), 0x5419L)))), 0x84L));
                        g_395[0] = (safe_div_func_int16_t_s_s((p_53 = p_53), ((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(l_369[5], (((safe_rshift_func_int16_t_s_s((!(((l_372 = p_54) >= (l_440[0][7][0] | (safe_div_func_int16_t_s_s(((g_431 = (g_395[0] || (g_68 != (-2L)))) <= (l_453 || g_103[4][2])), 0x7BF0L)))) > g_439)), 9)) > l_342[1]) && l_342[3]))) == l_430), g_432)) ^ g_168)));
                    }
                    else
                    {
                        unsigned char l_458 = 0x9DL;
                        l_440[4][2][3] = l_357;
                        l_458 = ((p_53 || (((safe_mod_func_int32_t_s_s(p_52, (g_395[0] ^ ((1L < (((func_69(g_431, g_277) < ((g_103[4][2] && l_55[1]) != 1L)) >= l_369[5]) <= l_421)) && l_55[2])))) > l_67) >= g_439)) >= 0x997EL);
                    }
                    if ((p_54 | 0x5A731D52L))
                    {
                        g_321 = g_321;
                    }
                    else
                    {
                        return g_102[5][4][3];
                    }
                }
            }
            l_372 = (0xDAL >= (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(func_69(l_81[1], p_54), p_52)) >= (g_431 = p_52)), (0xE366A0CDL != (!((l_404 = g_106) <= (l_373 = l_373)))))));
            l_373 = ((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((l_55[4] == (safe_div_func_int16_t_s_s((l_67 != (p_53 && func_69(l_417, (safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((4294967287UL || (safe_mod_func_int16_t_s_s((p_53 = 0xB4E6L), (((g_134 = (g_106 = (l_372 = (safe_add_func_uint32_t_u_u(g_112, p_54))))) | (safe_lshift_func_uint8_t_u_s(246UL, l_404))) || 0L)))), p_52)), 5))))), 8UL))), l_417)) && g_432) ^ 1UL), 6L)) | l_416);
            if ((!(((l_373 = (p_53 = (((((-1L) >= (((safe_mod_func_uint32_t_u_u(l_373, (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_404, (+(safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(0x3DL, (l_493 != (safe_div_func_uint32_t_u_u(4294967286UL, (g_68 = (l_501 = (safe_mod_func_int16_t_s_s((~(safe_mod_func_int8_t_s_s((l_81[1] && p_52), ((l_500[1] = ((l_416 | p_54) ^ g_106)) | p_53)))), 65535UL))))))))) > 0x3420L), 0x1177L))))), g_431)), p_53)), g_103[4][2])))) | l_493) < g_103[0][4])) < l_369[5]) > g_167) | 9L))) > 1UL) > p_54)))
            {
                l_501 = l_55[0];
            }
            else
            {
                unsigned short l_514[9] = {0x35B7L, 0x8151L, 0x35B7L, 0x8151L, 0x35B7L, 0x8151L, 0x35B7L, 0x8151L, 0x35B7L};
                int l_521 = 0xE5A3345FL;
                int i;
                l_521 = ((safe_sub_func_uint16_t_u_u((l_67 < (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(l_81[1], (g_395[0] == l_67))) && (l_500[1] = (l_493 = (safe_lshift_func_int16_t_s_u(l_514[8], 1))))) == ((safe_add_func_int32_t_s_s((7UL | g_103[4][2]), (((safe_rshift_func_uint16_t_u_s((g_106 = (safe_mod_func_int32_t_s_s(((p_54 | 250UL) == p_54), p_54))), 10)) || l_75) <= 4294967295UL))) && 0UL)), p_54)), l_416)), 13))), 0xDA2CL)) > p_53);
                for (p_54 = 0; (p_54 <= 6); p_54 += 1)
                {
                    unsigned l_522 = 4294967292UL;
                    int l_533 = 0xFEBB59A4L;
                    for (l_493 = 4; (l_493 >= 0); l_493 -= 1)
                    {
                        int l_523 = 0L;
                        int i;
                        l_523 = (l_522 = l_55[p_54]);
                        l_526 = ((safe_mod_func_int16_t_s_s(l_55[(l_493 + 1)], (l_55[p_54] ^ p_53))) > l_81[1]);
                        l_500[1] = (0x2BL > ((g_527 = g_439) != func_76(l_528[6][7][0], (((p_54 && (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(l_522, p_54)), (l_533 = (-1L))))) > (-2L)) & (4294967295UL & 0xCBB90941L)), p_54, l_522)));
                    }
                    g_395[0] = l_514[0];
                }
                l_67 = 0x663D6987L;
                if ((1L ^ (p_53 == (-1L))))
                {
                    unsigned l_534[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_534[i] = 0UL;
                    l_501 = (g_395[0] = l_526);
                    l_534[2] = g_432;
                    if (l_534[1])
                    {
                        g_395[0] = (-3L);
                        l_67 = (-1L);
                    }
                    else
                    {
                        l_404 = g_432;
                    }
                    for (l_493 = 27; (l_493 >= (-6)); l_493 = safe_sub_func_int32_t_s_s(l_493, 9))
                    {
                        int l_547 = 0x11F1D0EDL;
                        l_548 = ((l_67 = (l_372 = (g_134 = (+(safe_lshift_func_int8_t_s_s(((-10L) != g_112), 6)))))) >= ((g_96 == ((g_431 = 0x90L) >= (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(g_72)), (l_546 = 0x44L))), g_106)))) != (l_521 = ((l_547 || (l_528[2][7][2] | p_52)) && p_52))));
                    }
                }
                else
                {
                    unsigned l_555 = 18446744073709551615UL;
                    int l_557[9][8][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
                    int i, j, k;
                    for (p_54 = 0; (p_54 >= 32); p_54 = safe_add_func_int8_t_s_s(p_54, 4))
                    {
                        l_548 = (l_493 = (safe_add_func_int16_t_s_s(p_53, (safe_lshift_func_uint8_t_u_u(l_555, 5)))));
                    }
                    if (g_277)
                        goto lbl_556;
                    l_557[6][1][0] = (l_493 = l_555);
                }
            }
        }
    }
    else
    {
        return g_96;
    }
    return p_54;
}







static int func_69(int p_70, unsigned p_71)
{
    unsigned char l_325 = 7UL;
    g_202 = (p_70 = (l_325 = (g_103[3][1] <= 0xDEL)));
    return g_103[3][3];
}







static char func_76(unsigned p_77, unsigned p_78, short p_79, unsigned p_80)
{
    char l_84[5][4] = {{0xEEL, 0xEEL, (-8L), 0xEEL}, {0xEEL, 0xEEL, (-8L), 0xEEL}, {0xEEL, 0xEEL, (-8L), 0xEEL}, {0xEEL, 0xEEL, (-8L), 0xEEL}, {0xEEL, 0xEEL, (-8L), 0xEEL}};
    int l_101 = 0x6F1EAAC2L;
    int l_127 = 0xB455570BL;
    int l_212 = 0L;
    int i, j;
    for (p_78 = 0; (p_78 != 56); p_78 = safe_add_func_int8_t_s_s(p_78, 1))
    {
        unsigned l_94 = 18446744073709551611UL;
        int l_97 = (-9L);
        int l_100 = 0x60D0C570L;
        int l_270 = 0x1FC0D30AL;
        unsigned l_312 = 0xD976BACEL;
        int l_324 = 1L;
        if (l_84[4][0])
        {
            unsigned l_91 = 18446744073709551615UL;
            int l_95 = 0x6467BE22L;
            int l_98 = 0xCE175E04L;
            int l_99[5][5] = {{1L, 0xFF52682FL, 5L, 0xFF52682FL, 1L}, {1L, 0xFF52682FL, 5L, 0xFF52682FL, 1L}, {1L, 0xFF52682FL, 5L, 0xFF52682FL, 1L}, {1L, 0xFF52682FL, 5L, 0xFF52682FL, 1L}, {1L, 0xFF52682FL, 5L, 0xFF52682FL, 1L}};
            int i, j;
            l_100 = (l_99[3][1] = ((safe_sub_func_int8_t_s_s(p_77, (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(g_3, l_91)), 7)))) <= (l_98 = (l_97 = (g_96 = (((((p_79 >= p_78) > g_68) <= ((safe_rshift_func_int8_t_s_s((((l_95 = l_94) ^ (l_84[4][0] || g_3)) == 0xBE2D7E08L), g_68)) != p_79)) <= 0xD88FL) ^ 1L))))));
            g_102[8][0][1] = (l_101 = p_78);
            l_101 = p_80;
        }
        else
        {
            l_101 = l_84[3][3];
            g_103[4][2] = p_79;
        }
        if ((safe_rshift_func_uint16_t_u_u((l_101 = l_84[2][2]), 14)))
        {
            unsigned char l_119 = 0x81L;
            int l_120 = 0x0B3DF572L;
            unsigned l_126[10][8][3] = {{{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}, {{0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}, {0xCAE63CD3L, 18446744073709551614UL, 0x0B1F5703L}}};
            int l_130[4] = {(-8L), 0L, (-8L), 0L};
            char l_147 = 0x5AL;
            int i, j, k;
            g_106 = p_77;
            for (l_101 = (-5); (l_101 >= 4); ++l_101)
            {
                unsigned char l_111 = 1UL;
                int l_125 = 0xF983824FL;
                unsigned short l_137 = 0x35E8L;
                g_112 = (safe_add_func_int8_t_s_s(l_111, g_3));
                l_127 = (((p_79 || (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0UL, (((1UL == ((safe_mul_func_uint16_t_u_u((+l_100), 0UL)) == 0x5A8C8944L)) & ((((l_97 = ((l_120 = l_119) && p_77)) < (((l_125 = (safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(0xAEAA53E6L, 0x93C2DF58L)) == p_77), 0x7E0A5EFAL))) == l_111) > p_77)) <= l_126[8][3][2]) && 0xECL)) > p_78))), l_84[4][0]))) | 0x28L) > p_80);
                for (l_97 = 3; (l_97 >= (-16)); l_97--)
                {
                    for (l_120 = 3; (l_120 >= 0); l_120 -= 1)
                    {
                        int i, j;
                        l_125 = (l_130[3] = (l_84[l_120][l_120] && 65527UL));
                        if (p_80)
                            break;
                    }
                }
                if ((~(!(0xE6E22366L | (g_131 = p_77)))))
                {
                    for (l_125 = 0; (l_125 != (-13)); l_125--)
                    {
                        g_134 = g_68;
                    }
                    if (g_131)
                        continue;
                }
                else
                {
                    char l_142 = 0xD4L;
                    for (p_79 = 0; (p_79 == 2); ++p_79)
                    {
                        l_137 = p_78;
                        l_125 = g_106;
                    }
                    l_120 = ((l_130[3] = (safe_add_func_int32_t_s_s(4L, (safe_lshift_func_uint16_t_u_s(0x8E09L, ((((l_142 == (g_131 = l_100)) < ((((l_127 == (safe_add_func_uint16_t_u_u((((l_142 || (((safe_div_func_int8_t_s_s(6L, (p_78 ^ g_3))) | l_101) == g_103[5][4])) & p_78) & l_101), 0x159CL))) == l_130[0]) != p_80) & p_79)) && l_147) == g_103[2][5])))))) ^ l_97);
                }
            }
        }
        else
        {
            int l_165 = 2L;
            int l_242 = 0xAF815AF1L;
            unsigned l_266 = 0UL;
            short l_293 = (-2L);
            for (p_79 = 0; (p_79 > (-20)); p_79--)
            {
                int l_164 = 0x558CCBDEL;
                l_165 = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_131, (safe_rshift_func_uint8_t_u_u(g_68, (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_102[0][4][2], p_77)), (g_102[8][0][1] && (p_78 | (p_79 >= p_79))))))))), 8)), (safe_rshift_func_int8_t_s_u(l_164, 3))));
                l_97 = g_103[4][2];
            }
            if (p_80)
                break;
            if ((l_101 = l_94))
            {
                int l_166 = 1L;
                int l_170 = (-1L);
                unsigned char l_186[7];
                int l_213 = 0x2FE3C27CL;
                int i;
                for (i = 0; i < 7; i++)
                    l_186[i] = 1UL;
                if ((g_3 & (l_166 ^ g_102[8][0][1])))
                {
                    if ((l_97 = p_79))
                    {
                        unsigned l_180 = 0UL;
                        g_167 = 1L;
                        g_168 = g_102[5][4][3];
                        if (g_102[4][1][1])
                            continue;
                        l_165 = ((l_170 = (safe_unary_minus_func_int32_t_s(0xCFF77550L))) < (safe_add_func_uint8_t_u_u(p_79, (!(((p_80 = 0UL) != (0x7B28512AL > (g_167 || (((0UL != (safe_mod_func_int16_t_s_s(p_79, 0xAD83L))) > ((((safe_unary_minus_func_uint16_t_u((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((p_77 <= l_180), 0x7D9E7F87L)), g_3)))) <= g_134) >= p_78) == 0xF9L)) >= l_166)))) && 0x4BL)))));
                    }
                    else
                    {
                        return p_80;
                    }
                }
                else
                {
                    unsigned l_207 = 0x9E2DF591L;
                    int l_226 = (-9L);
                    int l_228 = 0xA14F6FADL;
                    if (p_78)
                    {
                        char l_181 = (-10L);
                        l_181 = (g_102[8][0][1] & p_77);
                        l_170 = (safe_add_func_uint16_t_u_u((g_106 = ((safe_rshift_func_uint16_t_u_u((g_68 == (((9L >= (g_3 & l_181)) ^ l_165) || (l_181 || l_170))), g_168)) > g_103[6][2])), 0xCBF7L));
                        if (l_186[5])
                            break;
                    }
                    else
                    {
                        int l_189 = (-1L);
                        int l_203[1];
                        int l_204 = 0xE663B1B9L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_203[i] = (-6L);
                        if (l_84[1][1])
                            break;
                        l_170 = (safe_div_func_int32_t_s_s((l_127 && (g_131 = (252UL > p_79))), ((l_189 ^ 0x59L) | (safe_sub_func_uint16_t_u_u(((p_79 || (1UL >= g_102[7][5][2])) && (((safe_add_func_int16_t_s_s(g_96, p_79)) ^ g_68) <= l_166)), g_68)))));
                        g_202 = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((0x51E27098L < (safe_add_func_uint32_t_u_u(p_77, ((safe_lshift_func_int8_t_s_s(p_79, 5)) && l_97)))) >= g_3) > (l_204 = (l_203[0] = g_202))), 1)), 4)) & ((g_106 = p_78) >= 0xE43FL));
                        l_213 = (7UL <= (safe_rshift_func_int8_t_s_s((l_101 = (l_203[0] && (((l_207 = p_79) != 0x7AL) < l_127))), (l_170 = ((l_212 = (p_80 | (g_202 = (safe_mod_func_int32_t_s_s((~((safe_rshift_func_uint16_t_u_s((((g_68 <= 0xF5FBB262L) > (g_96 < 0x017AF087L)) || g_96), l_189)) ^ 0L)), l_100))))) == g_103[4][2])))));
                    }
                    for (p_80 = 0; (p_80 != 50); p_80++)
                    {
                        int l_227 = (-10L);
                        int l_230 = 0L;
                        l_228 = (safe_mod_func_int32_t_s_s((p_80 || (safe_sub_func_uint32_t_u_u((l_170 = (g_229 = ((~((0UL & (safe_lshift_func_int8_t_s_u((0x98L ^ (((g_112 || (((g_202 = (((safe_add_func_uint16_t_u_u((g_106 <= (-1L)), g_102[8][0][1])) & (safe_mod_func_int16_t_s_s((g_131 = g_112), (l_127 = (l_226 = g_103[1][3]))))) <= g_134)) == l_227) ^ 0L)) || l_170) > g_106)), p_79))) <= l_227)) && l_228))), 0x20AB2C1CL))), p_79));
                        l_226 = p_79;
                        l_228 = (((l_230 = 0x85B639F8L) == p_78) <= (l_165 = (l_97 = l_84[4][0])));
                    }
                }
            }
            else
            {
                unsigned char l_246 = 1UL;
                int l_295 = 0xF8C37268L;
                int l_296 = 0x69B51EB5L;
                for (p_80 = (-21); (p_80 != 14); p_80 = safe_add_func_int32_t_s_s(p_80, 8))
                {
                    int l_239 = 0xA65D6504L;
                    int l_243[7][2][9] = {{{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}, {{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}, {{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}, {{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}, {{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}, {{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}, {{0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}, {0x6071FA67L, (-4L), 1L, 0xC791ECBDL, 0xC791ECBDL, 1L, (-4L), 0x6071FA67L, 1L}}};
                    int i, j, k;
                    for (l_94 = 0; (l_94 <= 3); l_94 += 1)
                    {
                        int i, j, k;
                        return g_102[(l_94 + 1)][(l_94 + 2)][l_94];
                    }
                    l_165 = (safe_lshift_func_uint8_t_u_u((p_79 || p_78), (safe_div_func_int32_t_s_s((!((safe_lshift_func_uint16_t_u_u(l_165, 7)) && l_239)), ((l_242 = (safe_lshift_func_uint16_t_u_u(p_77, 6))) || (l_242 = p_77))))));
                    l_243[1][1][6] = (l_94 & 0UL);
                    for (l_97 = (-1); (l_97 < 15); l_97 = safe_add_func_uint8_t_u_u(l_97, 5))
                    {
                        int l_253 = 0xEDDAC260L;
                        g_202 = ((l_246 = g_134) ^ ((safe_lshift_func_uint16_t_u_u((g_167 < (((safe_add_func_uint8_t_u_u((((((safe_div_func_uint32_t_u_u(g_96, l_253)) || 0xAEL) < (1UL == ((l_239 & p_79) != (l_165 = (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_103[4][2], g_103[4][2])), l_97)))))) & 1L) >= p_77), l_84[4][0])) == (-4L)) && 255UL)), 5)) == p_78));
                        l_243[1][0][1] = 0x6FDD7113L;
                        g_202 = ((p_80 || ((l_242 = (p_79 = (safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((l_253 < l_165), (g_131 && l_246))) <= g_102[8][0][1]), l_165)))) > 0x1F3DL)) == (safe_add_func_int8_t_s_s(p_80, l_243[1][1][7])));
                        l_100 = g_3;
                    }
                }
                for (l_212 = (-15); (l_212 <= (-28)); l_212 = safe_sub_func_int8_t_s_s(l_212, 1))
                {
                    unsigned l_267[10] = {0x718F66F7L, 0UL, 0x718F66F7L, 0UL, 0x718F66F7L, 0UL, 0x718F66F7L, 0UL, 0x718F66F7L, 0UL};
                    int i;
                    g_202 = (~p_78);
                    l_165 = (l_267[0] = (l_100 = (l_266 < (-5L))));
                    g_202 = (safe_add_func_int16_t_s_s((l_270 = (g_131 = (p_77 < g_106))), ((safe_add_func_uint32_t_u_u((p_77 && l_266), (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((+l_84[4][0]), (g_102[8][0][1] | (l_97 = (g_3 & (l_100 = (g_134 = p_79))))))), 4)) & ((((p_80 | p_79) && g_167) != 3UL) | l_267[0])) != l_246))) <= p_77)));
                }
                for (l_97 = 0; (l_97 <= 3); l_97 += 1)
                {
                    unsigned short l_294 = 2UL;
                    if (p_78)
                    {
                        unsigned short l_292 = 0x7D21L;
                        if (g_112)
                            break;
                        l_242 = (g_68 && p_77);
                        l_294 = (((g_96 | ((g_277 = l_270) == (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((0xB2EA24C7L | ((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(0xA4L, (l_292 & ((l_293 | p_78) || l_84[1][0])))), 6)) | (((-4L) > p_78) >= g_168)), 5)) || g_131) >= 8L) > g_102[8][0][1])), p_77)) >= 0xD4D2L), (-10L))), p_78)), 253UL)))) < 0xCDA4L) ^ g_68);
                        l_296 = (255UL & (((l_295 = p_79) && 0xEA758C6BL) <= (g_277 = p_78)));
                    }
                    else
                    {
                        unsigned l_311 = 18446744073709551612UL;
                        l_312 = (((safe_sub_func_int16_t_s_s(l_165, ((p_77 > p_80) && p_79))) > l_127) < (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_294 || (safe_add_func_uint16_t_u_u(65535UL, (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_311, p_80)), 2L))))), 6UL)), 5)) | 1L), 1)));
                    }
                    for (l_165 = 0; (l_165 <= 3); l_165 += 1)
                    {
                        g_202 = ((safe_add_func_int8_t_s_s(g_96, (-1L))) <= g_106);
                        g_202 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_312, (g_134 = l_296))), ((p_80 | (safe_mod_func_uint8_t_u_u(g_131, l_100))) > (((g_321 = p_78) == (l_295 = g_277)) > l_94))));
                        g_321 = (g_202 = ((0x9FD0L & (g_96 != 1L)) ^ (-1L)));
                        if (g_96)
                            break;
                    }
                }
            }
            if (l_324)
                break;
        }
    }
    return l_127;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_102[i][j][k], "g_102[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_103[i][j], "g_103[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_395[i], "g_395[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
