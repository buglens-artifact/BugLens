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



static unsigned char g_3 = 255UL;
static int g_54 = 1L;
static volatile unsigned g_72[7][10][3] = {{{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}, {{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}, {{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}, {{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}, {{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}, {{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}, {{0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}, {0xD1843AD3L, 18446744073709551614UL, 0UL}}};
static int g_83 = 1L;
static volatile unsigned long long g_84 = 1UL;
static volatile short g_95[8][3][7] = {{{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}, {{0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}, {0xE9B2L, 0xD392L, 3L, 0xE9B2L, (-1L), (-2L), 0x2AF0L}}};
static volatile int g_96 = (-4L);
static volatile unsigned g_97[4] = {0x8633724DL, 0x8633724DL, 0x8633724DL, 0x8633724DL};
static unsigned g_106 = 0x9B1E0FC0L;
static unsigned g_112 = 0x2127F58FL;
static volatile unsigned short g_146 = 65531UL;
static unsigned g_161 = 0x8DB3A87BL;
static volatile unsigned short g_238 = 0x144AL;
static unsigned short g_330 = 65535UL;
static char g_356[2][5] = {{6L, 6L, 0x15L, 6L, 6L}, {6L, 6L, 0x15L, 6L, 6L}};
static short g_360 = 0x70F4L;
static volatile unsigned g_364[1][4] = {{0xFA761878L, 18446744073709551606UL, 0xFA761878L, 18446744073709551606UL}};
static volatile long long g_403[1][4] = {{0x418A6E41CB402384LL, 1L, 0x418A6E41CB402384LL, 1L}};
static volatile int g_405 = 0x98AD0A17L;
static unsigned char g_406 = 255UL;
static volatile unsigned g_469[1][10] = {{0UL, 0x582A755DL, 0UL, 0x582A755DL, 0UL, 0x582A755DL, 0UL, 0x582A755DL, 0UL, 0x582A755DL}};
static int g_578 = 8L;
static volatile int g_579 = 0xE7AFD318L;
static short g_582 = 7L;
static volatile short g_583 = 0L;
static unsigned short g_604 = 3UL;
static unsigned long long g_640 = 0x901FCE30A9C5CDFFLL;
static unsigned char g_665 = 0x6CL;
static volatile int g_690 = 0xA67E3D05L;
static volatile unsigned short g_692 = 0x3578L;
static volatile int g_817[5][1] = {{0x9A0DDC9DL}, {0x9A0DDC9DL}, {0x9A0DDC9DL}, {0x9A0DDC9DL}, {0x9A0DDC9DL}};
static unsigned g_829 = 1UL;
static volatile unsigned g_882 = 0x15725617L;
static int g_1050 = 0xA65CCC77L;
static unsigned char g_1138 = 0x64L;
static long long g_1244 = 0x03F26602E32ABCE8LL;
static int g_1329 = 0x7F33EBD4L;
static char g_1378 = 0x0AL;
static unsigned g_1413 = 4294967292UL;
static int g_1523 = 0L;
static volatile int g_1832[1][2] = {{(-2L), (-2L)}};
static volatile unsigned short g_1894[7][7] = {{1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}, {1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}, {1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}, {1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}, {1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}, {1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}, {1UL, 0xA557L, 1UL, 0x8125L, 0xA557L, 0x190CL, 0xA557L}};
static long long g_1899[2] = {0L, 0L};



static long long func_1(void);
static unsigned char func_4(unsigned long long p_5);
static unsigned func_13(long long p_14, unsigned long long p_15, unsigned p_16);
static unsigned long long func_18(int p_19, char p_20);
static unsigned short func_23(int p_24, short p_25);
static int func_30(unsigned p_31, int p_32);
static unsigned func_33(unsigned p_34, char p_35, short p_36, long long p_37);
static char func_39(int p_40, unsigned char p_41, char p_42, unsigned p_43, unsigned long long p_44);
static short func_47(long long p_48, short p_49, char p_50);
static long long func_51(unsigned p_52, unsigned p_53);
static long long func_1(void)
{
    long long l_2 = 1L;
    unsigned short l_1141 = 0UL;
    unsigned l_1164 = 7UL;
    short l_1173 = 0xD909L;
    int l_1233 = 0L;
    unsigned long long l_1242 = 0x4DB38A6FC92D1F98LL;
    int l_1330 = 0L;
    int l_1347[8][7] = {{7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}, {7L, (-9L), 0xE8647AC9L, 0x85CBA8CFL, 0x6656E92EL, 0x16C7E21CL, 5L}};
    int l_1418 = 1L;
    char l_1456 = 0x93L;
    unsigned l_1457 = 4294967293UL;
    unsigned l_1466 = 0xB731BFD8L;
    unsigned l_1479 = 0x6EC2C99BL;
    long long l_1480 = 5L;
    int l_1595 = (-9L);
    int l_1596 = 4L;
    unsigned char l_1597 = 247UL;
    int l_1609 = 2L;
    char l_1642[10] = {1L, 1L, 0x5DL, 1L, 1L, 0x5DL, 1L, 1L, 0x5DL, 1L};
    int l_1694 = 6L;
    int l_1739 = (-7L);
    int l_1747 = 0x1F73AC7BL;
    unsigned l_1875 = 0x136DCAFEL;
    int l_1910 = 0x02FB14D3L;
    int i, j;
    if ((~l_2))
    {
        unsigned long long l_6[6] = {5UL, 0x443250E6DA5043C4LL, 5UL, 0x443250E6DA5043C4LL, 5UL, 0x443250E6DA5043C4LL};
        unsigned short l_1145 = 8UL;
        int l_1154 = 0xFC9B377AL;
        short l_1155[2][7][10] = {{{0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}}, {{0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}, {0x3C99L, 0x3166L, 0x84C2L, 0x2530L, 1L, (-10L), 0x3291L, (-7L), 0x5968L, 0x6764L}}};
        short l_1170 = 0x5B7BL;
        int l_1171[5] = {0x6E7D8833L, 0L, 0x6E7D8833L, 0L, 0x6E7D8833L};
        long long l_1192 = (-2L);
        short l_1288 = (-7L);
        int l_1302 = 0L;
        short l_1332 = 0x57C0L;
        char l_1339[1];
        unsigned l_1422 = 8UL;
        char l_1443[9] = {0L, 0x7CL, 0L, 0x7CL, 0L, 0x7CL, 0L, 0x7CL, 0L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1339[i] = 0xAFL;
        g_1138 ^= (g_3 == func_4(l_6[3]));
        g_817[1][0] = (safe_rshift_func_uint16_t_u_u(l_6[3], 15));
        if (func_23(l_1141, ((func_18(l_1141, ((l_6[1] <= (((l_6[5] != (safe_unary_minus_func_int8_t_s(g_1050))) > func_33(l_1141, ((safe_sub_func_int32_t_s_s(g_72[1][1][2], (l_1145 >= l_1141))) | 0L), g_829, g_582)) != 0x00L)) != g_582)) < g_1138) & l_1141)))
        {
            long long l_1151 = 0xD7E5B1A29AAAA609LL;
            unsigned short l_1211 = 9UL;
            int l_1212 = (-7L);
            int l_1243[1][6][8] = {{{0x45BE41F5L, 0x87E32CD0L, 6L, (-1L), 0xBA477679L, 0xC3810BF1L, (-8L), 1L}, {0x45BE41F5L, 0x87E32CD0L, 6L, (-1L), 0xBA477679L, 0xC3810BF1L, (-8L), 1L}, {0x45BE41F5L, 0x87E32CD0L, 6L, (-1L), 0xBA477679L, 0xC3810BF1L, (-8L), 1L}, {0x45BE41F5L, 0x87E32CD0L, 6L, (-1L), 0xBA477679L, 0xC3810BF1L, (-8L), 1L}, {0x45BE41F5L, 0x87E32CD0L, 6L, (-1L), 0xBA477679L, 0xC3810BF1L, (-8L), 1L}, {0x45BE41F5L, 0x87E32CD0L, 6L, (-1L), 0xBA477679L, 0xC3810BF1L, (-8L), 1L}}};
            int l_1287 = 0x05B19B40L;
            unsigned l_1342 = 1UL;
            int l_1352[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1352[i] = 0xCA8C4AA0L;
            for (g_604 = 0; (g_604 <= 1); g_604 += 1)
            {
                short l_1146[7] = {0x26C1L, 0x26C1L, 1L, 0x26C1L, 0x26C1L, 1L, 0x26C1L};
                unsigned l_1174 = 0UL;
                int l_1180 = 8L;
                int l_1181 = 0xF558EDCBL;
                int l_1182 = 1L;
                unsigned l_1183[5] = {0xF8A4600EL, 6UL, 0xF8A4600EL, 6UL, 0xF8A4600EL};
                unsigned char l_1193 = 0x46L;
                int i;
                if (l_6[3])
                    break;
                l_1154 = (((l_1146[3] >= g_406) & (safe_sub_func_int8_t_s_s(l_1146[3], (safe_sub_func_int32_t_s_s(l_1151, g_364[0][0]))))) & ((safe_lshift_func_uint16_t_u_u(func_51((func_51(g_3, l_1151) < 0x6B9AL), g_604), g_356[0][2])) && g_1138));
                if ((l_1155[0][3][1] == func_23(g_583, (((1UL != (!(safe_sub_func_int64_t_s_s((l_2 | ((safe_add_func_int16_t_s_s(((~l_1155[0][3][1]) < (func_51(l_1145, l_1146[3]) > (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((0x04A4L >= l_1141), g_360)), 0xFB79L)))), l_1151)) || l_1164)), 1L)))) < l_1151) == l_1151))))
                {
                    unsigned char l_1169 = 0xDFL;
                    int l_1172 = 0xB0444F67L;
                    g_817[4][0] = func_33(l_1151, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((func_47((l_1146[3] != 0UL), ((g_161 >= func_23(func_23(l_1141, (((l_6[3] > func_39(l_1169, (func_23(l_6[5], l_1170) <= 0x1CL), g_161, g_360, g_356[1][4])) & l_1169) <= 0UL)), g_640)) < g_665), l_1171[2]) || 6L), g_1138)), g_829)), g_829, l_1169);
                    for (g_330 = 0; (g_330 <= 1); g_330 += 1)
                    {
                        int i, j;
                        l_1172 = g_356[g_330][(g_604 + 2)];
                        g_1050 = l_1173;
                    }
                    g_690 = 0xB34148A7L;
                    for (l_1164 = 0; l_1164 < 8; l_1164 += 1)
                    {
                        for (g_146 = 0; g_146 < 3; g_146 += 1)
                        {
                            for (g_829 = 0; g_829 < 7; g_829 += 1)
                            {
                                g_95[l_1164][g_146][g_829] = (-1L);
                            }
                        }
                    }
                }
                else
                {
                    char l_1179 = 0x61L;
                    for (g_106 = 0; (g_106 <= 1); g_106 += 1)
                    {
                        g_817[3][0] = (func_39(l_1174, (safe_mod_func_int8_t_s_s((((((safe_sub_func_int8_t_s_s((l_1164 ^ g_829), 0L)) | l_1155[0][6][6]) && (~l_1171[2])) ^ ((g_106 <= g_360) >= g_829)) > 0xD991CDEAL), g_356[0][0])), g_96, g_406, g_582) && g_403[0][1]);
                        return g_1138;
                    }
                    if (l_1173)
                        break;
                    for (g_83 = 1; (g_83 >= 0); g_83 -= 1)
                    {
                        g_817[3][0] = (-6L);
                        if (g_364[0][0])
                            continue;
                        l_1179 = (((func_51(g_360, g_146) <= l_1151) ^ (!g_406)) < func_47(g_106, g_1138, g_83));
                    }
                    if (func_39(g_829, l_1141, (func_30(func_39((g_364[0][2] & func_51(g_1050, (l_1146[4] & (l_1179 != l_1151)))), (l_1151 == 0L), g_582, g_356[1][4], l_1179), l_1174) == g_3), l_2, g_665))
                    {
                        l_1183[3]++;
                        g_579 = 0xAF652DCAL;
                        g_54 = (g_405 <= ((((!(safe_mul_func_uint8_t_u_u(((((func_47(((safe_lshift_func_int16_t_s_s(0x2361L, g_1138)) & (((+func_47(l_1164, g_640, l_6[3])) ^ (safe_sub_func_int32_t_s_s(l_1171[2], 0x12C0EE27L))) > l_1171[4])), l_1192, l_1154) >= 0x80CEF46BL) && l_1182) | g_161) <= l_1141), 0xBCL))) & g_578) <= g_330) && l_1171[1]));
                    }
                    else
                    {
                        return l_1193;
                    }
                }
                if ((safe_lshift_func_int8_t_s_u(func_33(l_1173, l_1154, ((0x33L && (l_1182 > func_30(g_403[0][1], g_1050))) <= l_1151), (g_330 & g_604)), 6)))
                {
                    unsigned long long l_1210 = 0x9AB02D8C37039C0FLL;
                    if (func_51(func_39(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((~(safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((g_579 && 0x81ECL) < (safe_rshift_func_uint16_t_u_s((l_6[3] <= ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_1145, func_47(g_161, l_1210, ((-10L) ^ g_161)))), 3L)) & 0x00D17DDDL)), 4))), l_1164)), l_1146[4]))) == g_106), g_3)), g_1050)) == g_83), l_1193, g_54, l_1210, g_83), l_1211))
                    {
                        unsigned char l_1213 = 0xF1L;
                        l_1213++;
                        g_83 = (((safe_mod_func_uint64_t_u_u(l_1213, g_690)) <= ((l_6[3] > (safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(g_161, ((func_47((func_47(g_665, (g_3 > g_1138), l_1211) && (-9L)), l_1192, l_1170) & l_1210) && 0xFCL)))))) && g_604)) ^ l_1155[1][5][4]);
                        g_690 = (l_1212 != ((4294967295UL > (l_6[4] < l_1146[3])) && ((safe_rshift_func_uint16_t_u_u(l_6[3], 15)) > l_1146[3])));
                    }
                    else
                    {
                        unsigned char l_1223[8] = {0xCAL, 0xB2L, 0xCAL, 0xB2L, 0xCAL, 0xB2L, 0xCAL, 0xB2L};
                        int i;
                        --l_1223[4];
                        g_83 = g_72[2][5][1];
                        g_83 |= l_1223[0];
                        return l_2;
                    }
                }
                else
                {
                    l_1180 &= g_665;
                    return g_604;
                }
                for (g_112 = 0; (g_112 <= 3); g_112 += 1)
                {
                    unsigned short l_1226[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1226[i] = 0xDD5EL;
                    for (l_1154 = 3; (l_1154 >= 0); l_1154 -= 1)
                    {
                        g_54 = (l_1211 | g_96);
                        g_817[1][0] = (func_47((l_1226[0] != ((l_1212 <= ((safe_rshift_func_uint8_t_u_u(l_1193, 3)) <= ((g_405 || (0L == l_1193)) != (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((g_360 && l_1226[0]), (g_360 ^ 1UL))), 8))))) != 0UL)), g_582, l_1145) || 0x59B1L);
                        l_1233 = l_1180;
                    }
                    l_1233 ^= (safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(g_403[0][1], l_1226[0])) > (((0x35EFBF2FDC828E66LL & (l_1192 ^ (((0L ^ (safe_rshift_func_int16_t_s_s((((l_1155[1][4][8] == (safe_add_func_uint64_t_u_u(l_1242, l_1226[0]))) >= l_1193) >= 7L), g_112))) <= l_1243[0][1][7]) != 65535UL))) && l_1164) == l_1151)), 3L));
                    if (g_72[0][6][2])
                    {
                        l_1181 = g_146;
                    }
                    else
                    {
                        return g_1244;
                    }
                }
            }
            if ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(func_51((l_1151 | ((((g_54 < (safe_mod_func_uint32_t_u_u(func_39(g_583, (safe_mul_func_uint16_t_u_u(((!(safe_lshift_func_uint8_t_u_s(((l_1211 == 0UL) < (((l_1170 != (g_3 || 9L)) || func_47(l_1243[0][1][7], g_356[1][1], l_1233)) ^ 0x7EA121CDL)), 7))) <= g_161), 0xA44EL)), g_1050, l_1243[0][4][5], g_604), g_356[1][4]))) <= 1UL) == (-1L)) < l_1173)), g_1138), l_1155[0][3][1])), 0x71F3L)))
            {
                int l_1267 = 0xEEA09F19L;
                l_1171[3] = l_1141;
                l_1171[0] ^= (safe_rshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(func_47(((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_1138 >= (safe_mul_func_int8_t_s_s(g_665, 2L))), (safe_rshift_func_int16_t_s_s(((0x5DB7L > l_1192) <= (l_1267 && g_3)), 15)))), (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_403[0][1], 2)), 7)), func_51((l_1267 == 0x2FE3L), g_161))))) > g_330), l_1170, l_1233), g_356[1][4])) | 0UL) == 0x3ACFD3AE67AA35F9LL), g_360));
                l_1171[0] &= 0x2D0BE28FL;
            }
            else
            {
                int l_1284 = (-1L);
                short l_1351 = 1L;
                int l_1353 = 0L;
                int l_1354 = (-8L);
                unsigned long long l_1355[1][6];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1355[i][j] = 1UL;
                }
                if ((safe_lshift_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_1155[0][3][1], (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((l_1284 & (safe_mul_func_uint8_t_u_u(g_106, (func_51(l_1164, l_1212) <= 0xCCBCL)))), (l_1287 <= l_1288))) && g_1050), g_146)))), g_330)) > 0x35L) != (-1L)) || 0xBB7EL), g_356[1][4])))
                {
                    int l_1291 = 0x6E990A7AL;
                    if ((safe_mod_func_uint64_t_u_u((l_1291 < (func_33((safe_mul_func_int16_t_s_s((!g_604), (safe_sub_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(g_1244, 1UL)) >= func_30((((safe_rshift_func_uint8_t_u_s(l_1284, 2)) ^ g_578) != (safe_mod_func_uint32_t_u_u(4UL, func_33(l_1291, g_882, g_406, l_1302)))), g_161)) < l_1211), 0x48E7BBEAL)))), l_1284, g_1050, g_360) || 1L)), l_1291)))
                    {
                        unsigned l_1331 = 2UL;
                        long long l_1333 = 1L;
                        int l_1334 = 9L;
                        l_1334 = ((safe_mul_func_int8_t_s_s(l_1284, ((safe_sub_func_uint16_t_u_u((((l_1291 || ((safe_lshift_func_uint16_t_u_s(l_1284, (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_1233, (safe_lshift_func_int8_t_s_u(g_579, ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((((g_54 ^ (6UL <= 0L)) != (((((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(9L, g_83)), l_6[5])) && l_6[3]) >= 4UL) ^ g_1329), 2)), g_330)) == l_1291) == (-1L)) == l_1330) && g_1329)) | g_112), g_83)) >= l_1291) >= l_1331), 3)) || g_665) <= g_829), l_1154)) ^ g_356[1][2]))))), l_1284)))) & g_1050)) & g_640) | l_1332), l_1333)) < l_1334))) == 18446744073709551615UL);
                    }
                    else
                    {
                        g_54 = l_1151;
                    }
                    if (((g_72[3][6][0] != (l_1291 != g_604)) & (((g_640 < l_1291) >= (g_54 >= g_330)) && (((((0x50D5L || ((((l_1243[0][4][5] <= l_1243[0][4][1]) <= g_161) | 255UL) < 1L)) & 0xF23188F7E3CBAD9ELL) >= 0L) < g_406) && 0UL))))
                    {
                        int l_1343 = 0xDEFC5675L;
                        int l_1344 = 0xFBC8C19AL;
                        g_817[3][0] = func_33((65535UL & (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((0UL | l_1330) ^ (l_1339[0] != func_47(g_1138, ((safe_sub_func_int64_t_s_s((l_1287 | 0xDA78CD0CA625A847LL), (l_1332 > func_39(l_1342, l_1242, l_1164, l_1291, g_364[0][0])))) ^ 0x5C964842L), l_1343))), 0x29928FC9B2CBBB51LL)), g_1050))), l_1155[0][3][1], g_406, l_1344);
                    }
                    else
                    {
                        return g_72[3][6][2];
                    }
                    for (l_1287 = (-9); (l_1287 > (-15)); l_1287 = safe_sub_func_int64_t_s_s(l_1287, 6))
                    {
                        unsigned l_1348[2][7][3] = {{{3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}}, {{3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}, {3UL, 0UL, 18446744073709551615UL}}};
                        int i, j, k;
                        l_1348[1][3][0]++;
                    }
                    l_1243[0][1][7] = g_238;
                }
                else
                {
                    l_1352[0] = l_1351;
                }
                l_1355[0][0]--;
            }
            g_1329 ^= g_817[3][0];
        }
        else
        {
            unsigned char l_1376 = 0x81L;
            short l_1379 = 0xB21CL;
            int l_1394 = 6L;
            int l_1397 = 4L;
            long long l_1399[9] = {0xA34CE3421BAB5684LL, 0xD953B822654DCBFFLL, 0xA34CE3421BAB5684LL, 0xD953B822654DCBFFLL, 0xA34CE3421BAB5684LL, 0xD953B822654DCBFFLL, 0xA34CE3421BAB5684LL, 0xD953B822654DCBFFLL, 0xA34CE3421BAB5684LL};
            int l_1403 = 0L;
            int l_1419 = (-1L);
            int l_1439 = 0x0F0BFEEBL;
            int l_1440 = (-5L);
            int l_1441 = 0xA5DBD4F9L;
            int l_1442 = 5L;
            int l_1444 = (-1L);
            unsigned long long l_1445[10][2][8] = {{{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}, {{0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}, {0xB079CCB168BE9178LL, 1UL, 0x3599F7EC0A251259LL, 0xB92D1A1A81998F2ELL, 1UL, 1UL, 1UL, 0xB92D1A1A81998F2ELL}}};
            int i, j, k;
            for (g_360 = 1; (g_360 < 29); g_360 = safe_add_func_int16_t_s_s(g_360, 2))
            {
                unsigned char l_1377[6][4] = {{255UL, 255UL, 0UL, 0x2AL}, {255UL, 255UL, 0UL, 0x2AL}, {255UL, 255UL, 0UL, 0x2AL}, {255UL, 255UL, 0UL, 0x2AL}, {255UL, 255UL, 0UL, 0x2AL}, {255UL, 255UL, 0UL, 0x2AL}};
                int l_1385 = (-4L);
                int l_1393 = 0x2F30CD19L;
                int l_1395 = 0x81B5C620L;
                long long l_1435 = (-2L);
                int i, j;
                if ((func_51(g_146, (safe_mod_func_int16_t_s_s(((l_1192 == (safe_lshift_func_uint8_t_u_s((g_406 <= g_829), 0))) < (safe_add_func_uint64_t_u_u(func_51(g_54, (safe_mul_func_uint16_t_u_u(func_47((0x854DC990L ^ ((safe_mul_func_uint8_t_u_u(0x16L, (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((((((g_665 && (g_1329 <= g_604)) && l_2) || l_1376) & l_1377[4][3]) & l_1377[4][3]) == g_83), 65533UL)) == 0x3CL), g_1378)), l_1379)))) != g_1050)), g_829, l_1141), l_1377[1][2]))), g_360))), l_1379))) || l_1377[4][3]))
                {
                    char l_1384 = 0xD9L;
                    int l_1398 = (-1L);
                    int l_1400 = 0x56321AF6L;
                    int l_1401 = (-4L);
                    unsigned short l_1405 = 0UL;
                    for (l_1164 = 10; (l_1164 >= 4); l_1164 = safe_sub_func_uint8_t_u_u(l_1164, 5))
                    {
                        if (l_1376)
                            break;
                        if (g_97[0])
                            break;
                    }
                    for (l_1145 = 0; (l_1145 < 13); l_1145++)
                    {
                        g_579 = l_1376;
                        l_1385 = l_1384;
                        if (l_1377[2][1])
                            break;
                    }
                    g_83 = (g_106 || (safe_lshift_func_int16_t_s_s(0xEB15L, (l_1347[0][1] < (safe_lshift_func_uint16_t_u_u(l_1242, 4))))));
                    for (g_406 = 0; (g_406 > 58); g_406 = safe_add_func_uint8_t_u_u(g_406, 8))
                    {
                        int l_1392[2][8] = {{0x970D6CC9L, 0x15422FD3L, 0xDF8E3D6CL, 0xDF8E3D6CL, 0x15422FD3L, 0x970D6CC9L, 0x15422FD3L, 0xDF8E3D6CL}, {0x970D6CC9L, 0x15422FD3L, 0xDF8E3D6CL, 0xDF8E3D6CL, 0x15422FD3L, 0x970D6CC9L, 0x15422FD3L, 0xDF8E3D6CL}};
                        int l_1396 = 0x2BC731A4L;
                        int l_1402 = 0xC4675710L;
                        int l_1404 = 1L;
                        int i, j;
                        if (g_1050)
                            break;
                        g_690 &= l_1384;
                        ++l_1405;
                        l_1385 = g_882;
                    }
                }
                else
                {
                    long long l_1412 = 1L;
                    int l_1417 = 0xD2F67B89L;
                    int l_1420 = 0x8D5D5F17L;
                    unsigned short l_1430 = 0x9E72L;
                    if (g_665)
                    {
                        if (l_1385)
                            break;
                        g_690 = (func_51(l_1302, (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((((g_817[3][0] || l_1412) > l_1412) == l_1288) > 7L) ^ func_47(((g_83 > g_665) < func_51((func_47(l_1242, l_1395, g_1378) <= 0x1B94E71EA09CE1FDLL), g_112)), l_1399[1], g_640)), g_106)), g_1413))) | g_1244);
                    }
                    else
                    {
                        unsigned l_1416 = 0x4594DF4CL;
                        int l_1421 = (-1L);
                        l_1417 = func_51(((l_1412 != 0xC8331A03L) <= func_47(g_1413, (((safe_mul_func_int8_t_s_s(g_1329, (2L & func_39(g_817[4][0], (l_1403 && 0x9AA5A52B9485D5CELL), (l_1416 < (-1L)), g_3, l_1403)))) < g_640) == l_1416), l_1347[0][1])), l_1377[5][0]);
                        --l_1422;
                        g_1329 ^= g_72[3][6][2];
                        if (g_692)
                            continue;
                    }
                    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
                    {
                        unsigned long long l_1425 = 0xA44ECF26B7E4D00ALL;
                        long long l_1428 = (-1L);
                        int l_1429 = 0x9F4A8C92L;
                        ++l_1425;
                        l_1430++;
                        if (g_360)
                            break;
                        return l_1417;
                    }
                }
                for (l_1141 = 0; (l_1141 == 25); l_1141++)
                {
                    unsigned char l_1436 = 255UL;
                    l_1436--;
                }
                l_1347[2][6] = 0xB5F239FCL;
            }
            ++l_1445[5][1][4];
            l_1347[0][1] &= (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((!0L) ^ g_97[2]) || (safe_lshift_func_uint16_t_u_u(l_1192, 12))) > (((-1L) > g_604) <= l_1242)), 10)) || (l_1456 <= g_360)), 1L));
            l_1457--;
        }
        l_1466 = (safe_add_func_int64_t_s_s(l_1154, (((l_1456 >= (safe_lshift_func_int16_t_s_s(1L, ((l_1141 <= g_665) >= l_1171[4])))) & func_30(l_1443[4], (((safe_lshift_func_uint8_t_u_s(g_54, (4294967288UL ^ 1L))) >= 1L) >= 0L))) > 65530UL)));
    }
    else
    {
        unsigned char l_1481 = 0x49L;
        int l_1498[2][5][1] = {{{0x217738BAL}, {0x217738BAL}, {0x217738BAL}, {0x217738BAL}, {0x217738BAL}}, {{0x217738BAL}, {0x217738BAL}, {0x217738BAL}, {0x217738BAL}, {0x217738BAL}}};
        unsigned short l_1499 = 0xE228L;
        int l_1500 = 0xEF89E3FAL;
        unsigned l_1533 = 18446744073709551608UL;
        volatile int l_1563 = 0x657A6F0DL;
        int i, j, k;
        for (g_1329 = 4; (g_1329 != (-24)); g_1329 = safe_sub_func_uint8_t_u_u(g_1329, 6))
        {
            int l_1501 = 0x0B616F1FL;
            int l_1522[4][3] = {{(-1L), 0xBEB31672L, (-1L)}, {(-1L), 0xBEB31672L, (-1L)}, {(-1L), 0xBEB31672L, (-1L)}, {(-1L), 0xBEB31672L, (-1L)}};
            char l_1531 = 0x43L;
            int i, j;
            l_1233 |= (safe_add_func_int8_t_s_s(func_39(g_469[0][1], (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(((1L == (safe_lshift_func_uint8_t_u_u(g_1378, l_1479))) < func_47(l_1347[6][6], (((l_1480 || (func_47(l_1481, (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((~((g_1378 | (safe_mod_func_int64_t_s_s(g_1138, g_330))) || 0xB091L)), l_1141)) != l_1173), l_1498[0][1][0])), g_1050)), g_1329)), (-1L))), g_604)), l_1466)), g_356[1][4]) ^ g_83)) && l_1499) >= 18446744073709551615UL), g_829)), 8)) >= l_1500), 10)), 0xA14FBA91EDE013F1LL)), l_1500, g_112, g_106), l_1501));
            for (l_1456 = (-1); (l_1456 == (-4)); l_1456 = safe_sub_func_uint16_t_u_u(l_1456, 1))
            {
                int l_1525 = 0L;
                int l_1555 = 0xA9B79DCAL;
                unsigned l_1571 = 0xF52E9E0AL;
                for (g_161 = 0; (g_161 != 19); g_161 = safe_add_func_int8_t_s_s(g_161, 2))
                {
                    char l_1519 = (-7L);
                    int l_1526 = 0xAADDEC47L;
                    int l_1528 = (-6L);
                    int l_1529 = 8L;
                    int l_1530 = 0xB8182976L;
                    int l_1532 = 0x76D320D7L;
                    unsigned short l_1549 = 0x061CL;
                    unsigned long long l_1564 = 18446744073709551615UL;
                    for (l_1141 = 0; (l_1141 <= 39); l_1141 = safe_add_func_int64_t_s_s(l_1141, 1))
                    {
                        int l_1514 = 0L;
                        g_1050 = (safe_mul_func_uint8_t_u_u((((-5L) > g_1413) && (safe_sub_func_int32_t_s_s((func_47(func_23(g_665, l_1498[0][3][0]), func_47(l_1481, ((safe_rshift_func_int8_t_s_s(l_1514, 0)) > (safe_rshift_func_int8_t_s_u(0x7BL, 2))), (safe_mod_func_int64_t_s_s(g_578, 0x74F087633F7EE283LL))), g_330) && 0xCD2EFAD2ABBCDA97LL), l_1501))), l_1347[0][1]));
                        l_1498[0][0][0] |= l_1519;
                        if (g_829)
                            break;
                    }
                    for (g_604 = 0; (g_604 > 15); g_604 = safe_add_func_int8_t_s_s(g_604, 1))
                    {
                        int l_1524[3];
                        int l_1527[10] = {(-1L), 1L, 0x147AF03EL, 0x147AF03EL, 1L, (-1L), 1L, 0x147AF03EL, 0x147AF03EL, 1L};
                        int l_1536[3][9][7] = {{{(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}}, {{(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}}, {{(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}, {(-8L), 7L, 0x7BF5FCDAL, 7L, (-8L), 0x1CDE4CEAL, (-1L)}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1524[i] = 0x06C3CA50L;
                        l_1533++;
                        g_817[2][0] = ((0xAAL & l_1536[0][7][2]) >= g_364[0][0]);
                        return g_54;
                    }
                    if ((safe_sub_func_int16_t_s_s(l_1528, l_1330)))
                    {
                        unsigned l_1554 = 1UL;
                        g_690 = ((((safe_mod_func_int8_t_s_s((-5L), ((func_23(((safe_mod_func_uint32_t_u_u(0x817ECB1BL, ((func_23(((safe_rshift_func_uint8_t_u_u((0UL && g_238), (((safe_sub_func_int64_t_s_s(l_1549, (0x21CFD472L && (g_665 < (((((safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((((g_640 > (0xCE7E1E2FL && g_1050)) == 0x50B9B3898DA5A871LL) & l_1554), l_1525)) > g_1378), l_1531)) || l_1347[7][1]) | g_1523) == (-1L)) != 1L))))) != g_356[1][4]) && g_356[1][3]))) != g_1523), l_1531) || g_112) && l_1555))) != 0UL), l_1525) >= 0x77C0L) && g_364[0][3]))) & g_582) <= g_1329) ^ g_1378);
                        g_1523 = g_817[3][0];
                        l_1530 |= g_95[1][1][0];
                    }
                    else
                    {
                        unsigned short l_1556 = 1UL;
                        g_817[3][0] = ((func_47(l_1556, g_1050, l_1556) && (g_72[1][3][1] <= func_47(g_578, g_106, ((((safe_sub_func_int64_t_s_s(g_1413, ((((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_1050 <= l_1556), 11)), (-2L))) == g_356[1][4]) == l_1498[0][1][0]) > (-1L)) && 0xA54DCA638DFE240ELL) >= 0xB85BAFCE64267846LL))) ^ 1L) && l_1466) < 0x6B55L)))) < 0UL);
                        l_1563 = g_583;
                        g_817[3][0] = func_47(l_1555, l_1528, l_1522[2][1]);
                        g_83 = (l_1564 && l_1525);
                    }
                    g_817[4][0] = (safe_lshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x7E35D6C2L, l_1571)), (safe_sub_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(func_47(g_692, (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((l_1522[1][2] < g_112))), 13)), l_1526), (func_51(g_578, (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(g_356[1][4], g_1050)) | l_1498[1][1][0]) >= l_1500), 2)) && l_1571), 2))) < (-1L)))) < 0xD630L) <= l_1532), 4294967293UL)))) < g_1138) == l_1571), 5));
                }
            }
        }
        g_1050 &= (g_582 > (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(func_13(l_1499, g_330, (safe_sub_func_uint16_t_u_u((((((g_83 < ((g_817[3][0] > (safe_sub_func_int32_t_s_s((4294967287UL | (safe_mul_func_int8_t_s_s((-1L), ((func_51(g_1413, (0x718147B5DC2F90B8LL != 18446744073709551611UL)) | 0x1C5D58697E94DA3ELL) >= g_1378)))), g_406))) == g_112)) == l_1481) > g_1378) | g_83) >= l_1418), 0UL))), l_1347[0][1])), 0x99B1D7B4A8341D5CLL)));
        l_1498[0][1][0] = (l_1242 | (g_238 & l_1499));
        for (l_1480 = 0; l_1480 < 1; l_1480 += 1)
        {
            for (g_1378 = 0; g_1378 < 4; g_1378 += 1)
            {
                g_403[l_1480][g_1378] = 0x562BA67522688DC5LL;
            }
        }
    }
    l_1597++;
    if (l_1466)
    {
        unsigned l_1602 = 5UL;
        int l_1606 = 0x06823AA1L;
        int l_1611 = 7L;
        unsigned short l_1613[6][5];
        char l_1628 = 0x02L;
        short l_1635 = 0x59A6L;
        short l_1640 = 0xD311L;
        int l_1710 = (-8L);
        unsigned char l_1793 = 0x6AL;
        unsigned short l_1813[4][10] = {{0xF446L, 65535UL, 65535UL, 65535UL, 65535UL, 0xF446L, 65535UL, 65535UL, 65535UL, 65535UL}, {0xF446L, 65535UL, 65535UL, 65535UL, 65535UL, 0xF446L, 65535UL, 65535UL, 65535UL, 65535UL}, {0xF446L, 65535UL, 65535UL, 65535UL, 65535UL, 0xF446L, 65535UL, 65535UL, 65535UL, 65535UL}, {0xF446L, 65535UL, 65535UL, 65535UL, 65535UL, 0xF446L, 65535UL, 65535UL, 65535UL, 65535UL}};
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
                l_1613[i][j] = 65535UL;
        }
        g_1050 = ((safe_lshift_func_uint8_t_u_u(0x45L, 0)) && l_1602);
        if ((g_96 & (safe_rshift_func_uint16_t_u_u((1L >= g_330), (0L > 0UL)))))
        {
            long long l_1605 = 4L;
            int l_1607 = (-3L);
            int l_1608 = 0x628AF0FAL;
            int l_1610 = (-9L);
            short l_1612[8][5][6] = {{{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}, {{(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}, {(-1L), (-1L), 7L, (-2L), 0x4F60L, 0L}}};
            unsigned char l_1744 = 6UL;
            int l_1752[4] = {0x7246BAD3L, 0xA3CB4640L, 0x7246BAD3L, 0xA3CB4640L};
            unsigned l_1833[7][2] = {{0x4057466AL, 0x4EE0BEF8L}, {0x4057466AL, 0x4EE0BEF8L}, {0x4057466AL, 0x4EE0BEF8L}, {0x4057466AL, 0x4EE0BEF8L}, {0x4057466AL, 0x4EE0BEF8L}, {0x4057466AL, 0x4EE0BEF8L}, {0x4057466AL, 0x4EE0BEF8L}};
            int i, j, k;
            g_83 = l_1605;
            ++l_1613[3][0];
            if ((1UL | ((!((safe_add_func_uint64_t_u_u((func_18((g_406 | l_1611), g_405) >= (((safe_lshift_func_uint8_t_u_s((g_1244 < (l_1605 ^ l_1141)), 1)) < (safe_lshift_func_int8_t_s_u(g_330, 0))) < g_1050)), 7UL)) & g_1523)) >= 0L)))
            {
                int l_1622[8] = {0x596157BDL, 0x977A8DBFL, 0x596157BDL, 0x977A8DBFL, 0x596157BDL, 0x977A8DBFL, 0x596157BDL, 0x977A8DBFL};
                int l_1629 = (-1L);
                int l_1637 = 0x0978099CL;
                int l_1641 = 0x2F30F0F4L;
                int l_1643[2][10] = {{9L, 0x874F5DB7L, 6L, (-1L), 0x34A491E8L, 0L, 0x34A491E8L, (-1L), 6L, 0x874F5DB7L}, {9L, 0x874F5DB7L, 6L, (-1L), 0x34A491E8L, 0L, 0x34A491E8L, (-1L), 6L, 0x874F5DB7L}};
                unsigned l_1755 = 0xC1FDA2ECL;
                int l_1762 = 0xA5A3CE10L;
                int i, j;
                if (func_39(g_817[3][0], (1L > g_1050), l_1622[6], (safe_mod_func_int8_t_s_s((((3UL ^ g_3) && (((g_1138 ^ (g_330 && 0UL)) ^ l_1622[7]) != g_640)) && 0xCEL), 255UL)), g_406))
                {
                    int l_1632 = 0L;
                    int l_1633[3];
                    short l_1644 = 0L;
                    unsigned l_1645 = 0x6A23DEFDL;
                    int l_1677 = (-5L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1633[i] = 0x3925E7D1L;
                    g_1050 = l_1622[6];
                    g_1329 &= 1L;
                    if (g_95[7][1][2])
                    {
                        char l_1627[6];
                        int l_1630 = 1L;
                        int l_1631 = 1L;
                        int l_1634 = 1L;
                        int l_1636 = 0xEE1C7DEEL;
                        int l_1638 = 0x80302AFAL;
                        int l_1639 = 0x976333A0L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1627[i] = (-1L);
                        g_817[3][0] = (safe_mod_func_uint16_t_u_u((((g_356[0][2] && (l_1622[4] >= (g_112 & l_1627[0]))) <= 0x7E21B8A1L) ^ g_405), ((func_51(((g_3 < (-8L)) && g_360), l_1628) > g_330) | l_1627[0])));
                        l_1606 = 0xA766ADBFL;
                        g_817[3][0] = (~g_364[0][1]);
                        ++l_1645;
                    }
                    else
                    {
                        int l_1661 = 0x18AF53BAL;
                        int l_1662[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1662[i] = 7L;
                        l_1233 ^= ((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(8L, (func_33(func_47((l_1612[4][2][4] == ((safe_rshift_func_uint16_t_u_s(func_39(g_95[7][1][2], l_1612[4][2][4], func_51(g_640, (((safe_lshift_func_int16_t_s_u((g_406 && (safe_unary_minus_func_uint16_t_u(((func_47(l_1605, l_1347[0][1], g_330) && l_1661) < g_578)))), 15)) | 0x4D07L) == g_112)), g_360, l_1661), g_330)) & l_1661)), l_1622[7], l_1613[3][0]), g_1413, g_582, l_1635) | g_330))), g_578)), 2)) == l_1662[0]), 18446744073709551608UL)) < g_665);
                        l_1633[0] = ((((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0L, g_1378)), func_39(l_1662[0], (g_330 | ((safe_mod_func_uint64_t_u_u(func_18((safe_rshift_func_int16_t_s_s(((((g_469[0][1] == (g_1138 <= (l_1612[4][0][2] == (l_1662[1] >= l_1643[1][0])))) < g_83) <= g_665) != 1UL), l_1605)), g_83), l_1662[0])) | (-1L))), l_1611, g_1244, l_1612[4][2][4]))) || l_1602) || 1L) | l_1661) != 0x2200L) < 0x3409L);
                    }
                    l_1677 = (safe_add_func_uint16_t_u_u(g_829, ((safe_mod_func_int32_t_s_s((g_356[1][4] == g_469[0][1]), 5UL)) != (safe_rshift_func_int8_t_s_s(l_1637, (g_1378 == l_1632))))));
                }
                else
                {
                    int l_1689 = 0L;
                    int l_1709[4] = {3L, 0xA8AE1285L, 3L, 0xA8AE1285L};
                    unsigned l_1711 = 18446744073709551615UL;
                    int i;
                    if (l_1479)
                    {
                        unsigned short l_1680 = 0xC3F2L;
                        g_817[3][0] = l_1596;
                        g_1050 &= 0L;
                        g_1329 = func_18(func_51(l_1613[1][4], (safe_rshift_func_int8_t_s_u(g_364[0][3], 1))), l_1680);
                        g_1329 ^= (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((!l_1689), (((!g_72[4][7][0]) >= (((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((l_1694 < 0xC3E1L) & l_1680), 0x9EEB9E2461F0D702LL)), g_360)) != ((g_1244 == (safe_rshift_func_uint16_t_u_s(((((l_1680 < l_1611) < g_640) != l_1612[0][1][1]) | (-1L)), l_1456))) != l_1642[4])) <= l_1607)) & l_1680))) && l_1612[4][2][4]), g_578)), l_1605)), g_330));
                    }
                    else
                    {
                        unsigned char l_1697 = 0x40L;
                        l_1697 = g_1138;
                    }
                    if (l_1418)
                    {
                        int l_1708 = 0xFC2D3C8CL;
                        l_1689 ^= (((g_112 >= (safe_add_func_int16_t_s_s((((l_1602 == (((l_1466 && (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(g_1138, (g_604 >= l_1330))), (safe_sub_func_int16_t_s_s(g_364[0][0], g_1523)))), 248UL))) | 0xC617L) ^ 0x10L)) || g_665) > l_1708), 0UL))) < g_356[1][4]) > l_1708);
                        --l_1711;
                        g_1329 |= ((0xCDL < (safe_mod_func_uint32_t_u_u(((0x38C9FE3EBF6D9A22LL ^ (safe_lshift_func_int16_t_s_s(((((~(safe_mul_func_int16_t_s_s(func_51((~18446744073709551615UL), ((((safe_lshift_func_uint16_t_u_s(g_817[3][0], 12)) == (l_1708 ^ 0x0783L)) || ((safe_mul_func_int16_t_s_s(((func_30((g_1523 >= (-7L)), l_1708) > l_1608) < g_1378), g_1378)) ^ l_1605)) && g_583)), g_1050))) < l_1711) | g_356[0][4]) ^ 0xE333L), 8))) != 0UL), 0x88F6A041L))) || g_817[3][0]);
                    }
                    else
                    {
                        int l_1728 = 0xF3FAD7B2L;
                        short l_1745 = 0x7BBBL;
                        g_1050 = (((safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(l_1728, ((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(func_51((func_30(g_640, (safe_sub_func_int8_t_s_s(l_1641, g_665))) <= (((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(g_829, l_1739)), ((safe_mul_func_uint8_t_u_u(l_1728, (safe_sub_func_uint64_t_u_u((((func_47((((l_1709[0] & l_1744) <= l_1643[0][0]) > l_1744), l_1745, g_330) <= 0x835DL) | g_406) || g_829), l_1689)))) | g_1050))) | g_1050) > l_1643[1][5])), l_1745), l_1173)), 1UL)) != l_1689))) == l_1642[8]) > g_3), l_1711)) > l_1242) == l_1173);
                    }
                }
                g_817[3][0] = ((safe_unary_minus_func_int16_t_s(l_1643[0][2])) > ((l_1640 | l_1747) || (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_1752[0], (((safe_mul_func_uint8_t_u_u((l_1755 ^ (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((g_583 < func_51(((safe_rshift_func_int8_t_s_u(g_1050, (func_51(l_1762, (l_1607 >= 0x37D242D0L)) | 65535UL))) && l_1607), g_83)), 4)) > 8L), 0xCF57FE58L))), g_665)) & 0xE9E327B74519FC50LL) == g_356[0][1]))), l_1622[6]))));
            }
            else
            {
                short l_1772 = 0xB51EL;
                unsigned l_1785[5][5][6] = {{{0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}}, {{0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}}, {{0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}}, {{0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}}, {{0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}, {0xD34B02F0L, 4294967293UL, 0x51611629L, 5UL, 4294967295UL, 0x46BFE3B4L}}};
                unsigned l_1806[8][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
                int i, j, k;
                for (l_1640 = 0; (l_1640 <= 1); l_1640 += 1)
                {
                    unsigned short l_1765[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1765[i] = 0x803DL;
                    for (l_1602 = 0; (l_1602 <= 1); l_1602 += 1)
                    {
                        int i, j;
                        g_1523 = g_356[l_1602][(l_1640 + 1)];
                        l_1233 = (safe_sub_func_int16_t_s_s((g_356[l_1602][(l_1640 + 1)] ^ l_1613[3][0]), ((((l_1765[1] != (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(func_39(l_1613[3][0], l_1640, func_51((~(((((func_39(g_1244, l_1752[0], (safe_add_func_int8_t_s_s(0x16L, g_356[l_1602][(l_1640 + 1)])), l_1242, g_604) < 0xF886CC9E9FA6DDB4LL) != 0xD497L) & 4L) && g_690) && l_1772)), g_1138), g_1523, g_640), 0L)), 0x421596C7L))) <= 0x47A1L) & g_112) >= 5UL)));
                        l_1607 = ((((safe_mul_func_int16_t_s_s((0x94L != (safe_mul_func_uint16_t_u_u((!0xB02FL), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_4(func_18(l_1765[1], ((g_1378 < (safe_mod_func_int16_t_s_s(g_829, (safe_sub_func_int8_t_s_s((l_1765[1] ^ (g_364[0][3] | (0L != (-1L)))), (-1L)))))) > 0x1029L))), 13)), g_1523))))), 0xF916L)) | 0x11L) <= g_330) | l_1772);
                    }
                    g_1329 = l_1785[3][2][0];
                    g_1523 ^= (1L < (safe_mod_func_int64_t_s_s((safe_unary_minus_func_int16_t_s(l_1597)), func_13((safe_mod_func_int8_t_s_s(g_817[4][0], (safe_rshift_func_uint8_t_u_s(g_83, 7)))), g_1329, g_360))));
                    l_1611 = func_30(g_817[3][0], (l_1785[3][2][0] >= g_578));
                    for (g_330 = 0; (g_330 <= 1); g_330 += 1)
                    {
                        --l_1793;
                    }
                }
                for (g_83 = 0; (g_83 > 29); g_83 = safe_add_func_uint16_t_u_u(g_83, 5))
                {
                    short l_1798 = (-1L);
                    int l_1816 = 0L;
                    long long l_1831 = 1L;
                    if ((g_690 <= ((func_51(l_1798, l_1798) == l_1141) != func_47(g_112, ((g_406 <= (((g_1413 < g_83) > l_1785[3][2][0]) <= g_356[1][4])) & g_330), g_161))))
                    {
                        g_690 = l_1233;
                    }
                    else
                    {
                        int l_1803 = 0x8BA93A3EL;
                        g_1329 = 2L;
                        g_1329 = (g_1413 || 0xD0L);
                        l_1611 = (safe_lshift_func_uint8_t_u_s(((!((safe_rshift_func_int8_t_s_s(l_1798, ((l_1803 | func_47(((l_1612[5][2][0] <= ((0x083FD331L >= (safe_rshift_func_int16_t_s_u((-1L), ((func_39(l_1597, (((g_578 != (g_238 <= g_330)) && g_84) > g_1413), g_356[1][2], g_1523, l_1806[0][0]) == l_1798) < 0UL)))) | g_1378)) || 65535UL), l_1606, g_1050)) >= 0xD4AFL))) & g_1138)) || 0x8D5CL), 7));
                        l_1816 ^= ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((-1L), func_51(((safe_lshift_func_int16_t_s_s(0x9739L, 8)) & (-1L)), l_1813[3][9]))), (safe_lshift_func_int16_t_s_s(g_97[2], 6)))) & 0x8555495BL);
                    }
                    for (l_2 = 0; (l_2 == (-18)); l_2 = safe_sub_func_int32_t_s_s(l_2, 7))
                    {
                        int l_1823 = 0xE1CC25FDL;
                        int l_1824 = (-1L);
                        l_1824 &= ((1L > (safe_sub_func_int32_t_s_s(g_112, func_33(l_1785[3][1][2], g_1523, (safe_rshift_func_int8_t_s_u((g_1329 & 0x20E5522FA8433970LL), 6)), ((~(l_1612[4][2][4] <= l_1823)) | (l_1772 != l_1612[4][2][4])))))) <= g_83);
                    }
                    if ((g_817[3][0] & ((g_1378 && ((g_330 || 9L) >= (safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s(g_1523, (l_1602 >= 3UL))), g_604)))) >= g_161)))
                    {
                        g_817[3][0] = l_1831;
                    }
                    else
                    {
                        g_1832[0][1] = g_817[3][0];
                        if (g_1050)
                            break;
                    }
                    l_1816 = g_690;
                }
                return l_1833[3][1];
            }
            l_1710 ^= (0x9B0B60773C538A04LL & func_47(l_1640, (l_1744 | g_95[7][1][2]), g_578));
        }
        else
        {
            unsigned l_1834 = 0xAD62F798L;
            g_1832[0][0] = (((l_1418 <= (g_95[3][2][5] & func_51(g_54, l_1834))) && (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0UL, ((safe_mod_func_uint32_t_u_u(l_1834, (l_1793 | (l_1456 | g_604)))) != l_1834))), g_146))) && 0x8D962DFD82E9B1A2LL);
        }
    }
    else
    {
        long long l_1868 = 3L;
        int l_1922 = (-7L);
        for (g_106 = 0; (g_106 <= 9); g_106 += 1)
        {
            unsigned char l_1841 = 0UL;
            int l_1854 = 0xE5B07EB5L;
            int l_1869 = 0x3CDBE6B7L;
            int l_1876 = 0L;
            --l_1841;
            l_1854 = (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(l_1841, (safe_add_func_uint16_t_u_u(0xC732L, 0L)))) != 0UL), 1)), (safe_rshift_func_uint16_t_u_u(g_406, g_364[0][0]))));
            for (g_1244 = 0; (g_1244 >= 0); g_1244 -= 1)
            {
                int l_1865 = 0xE9270102L;
                int i, j;
                g_817[(g_1244 + 4)][g_1244] = g_1832[g_1244][g_1244];
                g_1832[g_1244][g_1244] = (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((~g_1832[g_1244][(g_1244 + 1)]) <= ((safe_sub_func_uint16_t_u_u(0x8E2DL, ((g_330 ^ (+(g_582 | (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(l_1865, (safe_sub_func_int32_t_s_s((g_161 > ((0x1FFEL || ((0x495702B4L || ((((!(func_51((!(~func_47((g_582 || l_1868), l_1869, l_1868))), l_1694) < l_1869)) && 1L) != g_112) == g_1413)) && 1L)) >= g_604)), l_1841)))), 4294967288UL))))) == (-10L)))) <= 5L)), 5)) <= g_604), g_330));
            }
            for (g_330 = 0; (g_330 <= 0); g_330 += 1)
            {
                unsigned short l_1874 = 8UL;
                int l_1927 = 0x52D02A60L;
                unsigned l_1951 = 0x143BDB46L;
                if ((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(func_33(l_1869, l_1874, l_1875, g_405), (func_47(l_1876, l_1868, l_1874) && g_106))), g_578)))
                {
                    short l_1890 = 0x8A50L;
                    unsigned l_1891 = 2UL;
                    int i, j;
                    l_1854 ^= (safe_mul_func_uint16_t_u_u(l_1874, (safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(l_1869, (safe_lshift_func_uint8_t_u_s((!(!((!(((+func_39(((safe_unary_minus_func_uint8_t_u(func_51(g_356[1][4], g_96))) & (safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(g_83, g_161)) | ((l_1874 & g_1244) || l_1890)), l_1876))), g_161, g_161, g_106, g_1138)) <= 0x87277135L) && l_1874)) == l_1890))), l_1891)))), 0xB7112173L))));
                    for (l_1739 = 3; (l_1739 <= 9); l_1739 += 1)
                    {
                        char l_1911 = 0x9BL;
                        g_1899[0] &= (safe_mul_func_int8_t_s_s(func_39((~l_1868), (g_1894[3][1] != g_161), g_665, g_330, (l_1868 | (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(func_47(g_106, g_83, g_83), l_1874)), g_640)))), g_1413));
                        g_1329 ^= (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_uint16_t_u_u(((+func_47(g_1832[0][1], l_1868, g_829)) | func_51(l_1890, g_356[1][4])), 0L)) != (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_578, g_106)), l_1910))) >= g_360) != l_1911), g_360)) == l_1874), g_112));
                    }
                }
                else
                {
                    l_1922 &= ((safe_unary_minus_func_uint8_t_u(8UL)) && ((safe_unary_minus_func_int32_t_s(func_47(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_1868, 13)), (!0xA310L))) >= 0x1FB3434FL), (safe_add_func_int32_t_s_s((0x37L | (safe_rshift_func_uint16_t_u_u(l_1868, (g_1378 != 0xE3BCL)))), (((g_161 & l_1874) || (-1L)) && 1UL))), l_1868))) >= g_95[7][1][2]));
                }
                for (l_1922 = 9; (l_1922 >= 0); l_1922 -= 1)
                {
                    l_1927 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(248UL, 3)), g_582));
                }
                l_1609 = g_84;
                for (g_1138 = 0; (g_1138 <= 9); g_1138 += 1)
                {
                    for (l_1595 = 0; (l_1595 <= 9); l_1595 += 1)
                    {
                        int l_1934 = 0x923B5DA6L;
                        int i, j, k;
                        g_83 ^= ((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(g_72[(g_330 + 3)][(g_330 + 7)][g_330], (((!((safe_mod_func_int32_t_s_s((l_1934 && (safe_mod_func_int16_t_s_s(((~g_1050) | l_1922), (safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int8_t_s_u((func_51(g_1138, (safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s(func_51((0xC96A5959L & (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(func_51(g_1523, l_1694), 7)), 7))), g_1413), 0xDA41A058D4CFAA66LL)), 1UL))) > g_665), l_1642[8])) != g_106) ^ g_1378) > l_1927) > 0x3B8EB526L), 6))))), g_829)) > 0x17F4L)) > g_356[1][1]) <= 0x94DBCA1CA93597A2LL))) != g_1138), l_1874)) >= l_1868);
                        g_1832[0][1] = (l_1747 == (safe_add_func_uint64_t_u_u((!l_1951), l_1934)));
                    }
                    if (g_330)
                        break;
                }
            }
        }
    }
    for (g_1138 = 0; (g_1138 <= 52); g_1138 = safe_add_func_uint16_t_u_u(g_1138, 9))
    {
        g_54 ^= g_106;
        g_690 = 0xE926A40CL;
    }
    return g_364[0][0];
}







static unsigned char func_4(unsigned long long p_5)
{
    short l_17 = (-1L);
    unsigned short l_1094 = 1UL;
    int l_1101 = (-10L);
    int l_1133 = 0x883A08BDL;
    for (p_5 = (-9); (p_5 == 13); p_5 = safe_add_func_int8_t_s_s(p_5, 8))
    {
        int l_38 = 0xAE4F9DBCL;
        g_1050 ^= ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((!(func_13(l_17, (func_18(g_3, (safe_sub_func_uint16_t_u_u(func_23((((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(func_30(func_33(l_38, func_39(g_3, ((g_3 != (safe_rshift_func_uint16_t_u_s(g_3, func_47(func_51(g_3, p_5), p_5, g_3)))) < g_3), p_5, l_17, g_3), p_5, p_5), l_38), 1UL)) < p_5), g_3)) <= 0x93L) >= l_38), l_38), 0xF66CL))) != g_582), g_665) && g_882)) != g_3), p_5)), 18446744073709551612UL)) > p_5);
        for (g_54 = (-6); (g_54 > 23); g_54 = safe_add_func_int32_t_s_s(g_54, 7))
        {
            unsigned l_1063 = 4294967292UL;
            unsigned l_1070 = 0x085E4B3CL;
            int l_1106[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1106[i] = (-9L);
            g_690 = ((1UL == p_5) && p_5);
            if ((l_38 >= (safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((func_47(l_17, l_1063, (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(p_5, (safe_add_func_uint16_t_u_u(l_1070, l_17)))), g_112))) != func_39(((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0xD4185FADL, 4294967290UL)), 0L)) >= l_17), g_582, l_17, g_360, g_817[2][0])), 0xB0L)), 6)), 0x351BL)) < l_1063) > p_5), 0x6A56731AAD3954B0LL)), 0UL))))
            {
                unsigned short l_1085[10][7] = {{65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}, {65535UL, 0x37F8L, 0x55B3L, 1UL, 1UL, 0x55B3L, 0x37F8L}};
                int l_1121 = (-7L);
                int i, j;
                if ((func_47((((l_38 > 0L) > (safe_rshift_func_uint8_t_u_s(func_47(l_17, l_38, (g_364[0][2] | (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_604, 10)), g_54)))), 4))) && (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_1085[5][5] && p_5) < l_38) | g_72[3][6][2]), 6UL)), 254UL))), p_5, p_5) ^ g_578))
                {
                    for (g_640 = 0; (g_640 < 2); g_640 = safe_add_func_uint32_t_u_u(g_640, 5))
                    {
                        unsigned short l_1099 = 65530UL;
                        int l_1100 = 0x21BEB54CL;
                        l_1100 = func_39(p_5, (p_5 != 0UL), (safe_lshift_func_uint16_t_u_s((((((g_403[0][2] || (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(p_5, g_469[0][1])) >= func_47(l_1094, p_5, (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_47(l_17, l_1099, g_3), 14)), g_54)) == l_1099) && (-8L)))), g_360))) || 4L) > p_5) & 7L) >= g_356[0][3]), 9)), g_54, p_5);
                        l_1101 = (!l_1070);
                        g_690 = (l_1094 == 65526UL);
                        if (p_5)
                            continue;
                    }
                }
                else
                {
                    char l_1110 = (-9L);
                    for (g_112 = 0; (g_112 < 52); g_112++)
                    {
                        long long l_1107 = 0xFAEAEC41358316D0LL;
                        l_1106[2] = (p_5 < (safe_sub_func_uint16_t_u_u(p_5, g_579)));
                        return l_1107;
                    }
                    l_38 = ((p_5 <= ((safe_mod_func_uint8_t_u_u(l_38, (g_829 || 0xD61C6DB14763FBBFLL))) == 9UL)) == l_1110);
                    for (g_829 = 1; (g_829 <= 6); g_829 += 1)
                    {
                        int i, j;
                        l_1121 = ((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((l_1085[(g_829 + 2)][g_829] ^ (l_1085[(g_829 + 3)][g_829] <= 7L)), l_1085[(g_829 + 1)][g_829])) > ((p_5 == p_5) ^ (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(((((((safe_lshift_func_int8_t_s_u(g_72[5][2][1], (func_47(func_47(p_5, g_161, l_1106[2]), p_5, p_5) >= 0L))) != p_5) == p_5) <= g_578) < 1L) && l_38), 9)), 18446744073709551609UL)))), 0x3CD86282L)) >= g_3);
                    }
                }
            }
            else
            {
                for (g_360 = 0; g_360 < 1; g_360 += 1)
                {
                    for (g_106 = 0; g_106 < 4; g_106 += 1)
                    {
                        g_403[g_360][g_106] = 0L;
                    }
                }
                if (g_83)
                    break;
            }
            for (g_161 = 26; (g_161 >= 15); --g_161)
            {
                unsigned l_1124[10] = {9UL, 0UL, 9UL, 0UL, 9UL, 0UL, 9UL, 0UL, 9UL, 0UL};
                int i;
                l_1106[0] = p_5;
                ++l_1124[0];
                l_1101 = 0x7955F4F9L;
            }
        }
    }
    l_1101 = (((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((l_17 || 4294967286UL) == (safe_add_func_int16_t_s_s(l_1133, func_51((safe_lshift_func_uint16_t_u_u(p_5, 10)), g_690)))), 7)), g_578)) < (((0xB8063A29L < ((safe_rshift_func_int8_t_s_u(l_1094, 6)) | 2UL)) >= 0x1027L) | g_356[1][4])) && 0x2AL);
    return l_1133;
}







static unsigned func_13(long long p_14, unsigned long long p_15, unsigned p_16)
{
    char l_842[1][3];
    unsigned long long l_850 = 0xC3E78AA0588A8AB3LL;
    int l_873[6] = {0x7342BA4BL, 0L, 0x7342BA4BL, 0L, 0x7342BA4BL, 0L};
    int l_881 = 0xB72E5A32L;
    unsigned short l_893 = 5UL;
    char l_902 = 0x65L;
    unsigned short l_924 = 0UL;
    int l_977 = (-1L);
    unsigned l_1049 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_842[i][j] = 0L;
    }
    g_83 = l_842[0][1];
    if ((func_39(p_14, g_406, (g_72[3][6][2] > p_16), l_842[0][2], p_15) >= l_842[0][2]))
    {
        unsigned l_847 = 9UL;
        int l_874[2][7][5] = {{{1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}}, {{1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}, {1L, (-5L), 0x8C9AF322L, (-5L), 1L}}};
        unsigned l_879[3][9][5];
        long long l_880[4];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (k = 0; k < 5; k++)
                    l_879[i][j][k] = 4294967286UL;
            }
        }
        for (i = 0; i < 4; i++)
            l_880[i] = 1L;
        if (func_33((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((!0xBBL), (func_47(l_847, l_842[0][0], ((safe_mod_func_int16_t_s_s(((l_847 & ((l_850 != g_72[2][4][2]) <= ((safe_rshift_func_uint8_t_u_s(((!(((safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_665, g_3)), ((g_665 <= l_842[0][1]) & 0xCF4BL))) && g_83) ^ 7L), g_83)) >= g_640) < p_15)) > g_54), 1)) >= 0xB5L))) > 0xC3L), l_847)) == 0x841823FC946F9C4BLL)) & p_15))), 3)), l_842[0][1], p_16, l_842[0][0]))
        {
            return p_15;
        }
        else
        {
            unsigned l_859[9][7][4] = {{{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}, {{18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}, {18446744073709551615UL, 0xD2DCE3C5L, 6UL, 2UL}}};
            int i, j, k;
            g_817[3][0] = l_859[3][0][3];
            l_873[1] = ((g_238 ^ l_842[0][1]) | ((l_859[8][0][2] != ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((l_847 >= (safe_unary_minus_func_int32_t_s((0L && 0x2BD991874E82B0F3LL)))), 12)) ^ (((func_51((safe_rshift_func_uint8_t_u_s(l_850, 0)), ((safe_mul_func_int8_t_s_s(func_47(((safe_add_func_uint8_t_u_u((g_360 ^ ((safe_mod_func_int64_t_s_s((g_640 < p_16), l_859[3][0][3])) > l_859[3][0][3])), g_54)) & p_15), l_842[0][1], g_640), p_16)) <= (-1L))) <= p_14) >= 0x3FL) == p_15)), 0x91L)) >= l_847)) >= l_859[3][0][3]));
            l_874[0][0][4] = (p_16 > 9UL);
        }
        l_873[1] = p_16;
        l_873[1] = (safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(func_47((l_842[0][1] == ((((((((0xC85CBCF712F44AA6LL ^ ((~0xED3D5484L) < 0xF09CFE6DL)) > (((-2L) || 65532UL) != l_874[1][3][4])) < func_51(l_847, g_96)) < l_842[0][1]) <= 1L) != l_879[0][8][1]) ^ 1UL) | g_83)), g_112, g_3), l_874[1][3][3])) | 0UL), 1UL));
        ++g_882;
    }
    else
    {
        return p_15;
    }
    if (((((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((0x7E4A875AL != 7L) > g_106), func_33(g_882, (safe_lshift_func_int8_t_s_u(l_893, 2)), g_578, (p_15 & ((0xA947L || ((!5L) & p_15)) | 9L))))), (-2L))), l_873[4])) ^ 0UL) == 9L) ^ l_842[0][1]))
    {
        unsigned long long l_900 = 8UL;
        unsigned long long l_901 = 0xCD71E622FB6D8106LL;
        for (g_54 = 2; (g_54 > (-3)); g_54 = safe_sub_func_uint16_t_u_u(g_54, 2))
        {
            for (g_161 = (-3); (g_161 > 51); g_161 = safe_add_func_int8_t_s_s(g_161, 1))
            {
                g_817[3][0] = (g_406 ^ ((safe_add_func_int8_t_s_s(l_842[0][1], g_112)) & l_873[2]));
                return l_900;
            }
        }
        g_690 = l_901;
    }
    else
    {
        unsigned l_917 = 18446744073709551607UL;
        int l_923 = 0x0B93683AL;
        int l_966 = 0x13FFE708L;
        int l_967 = 0x89F5806AL;
        l_873[1] = ((0xC4L && (l_902 || p_16)) != (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_406, ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(l_842[0][1], 7)), p_16)) ^ (g_360 & p_15)))), (~l_917))), 3)) < 0x8B0978D6A0429D61LL), l_881)), 0L)));
        for (l_850 = 23; (l_850 >= 57); ++l_850)
        {
            unsigned short l_922 = 3UL;
            l_923 = ((safe_lshift_func_uint16_t_u_u(65535UL, (l_873[1] >= (func_39(g_817[3][0], (g_161 | 0x887C3500DA9A31A4LL), p_16, p_14, (p_14 || (-1L))) == l_922)))) != l_922);
        }
        if (((((l_924 > (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(0x4CAFL, 5)) >= l_923), (safe_add_func_int64_t_s_s(g_469[0][9], (safe_lshift_func_int8_t_s_u(p_14, 2))))))) > 4294967295UL) >= l_924) >= (safe_mod_func_int64_t_s_s(func_51(g_829, ((g_330 || l_923) < g_582)), p_15))))
        {
            int l_935 = 6L;
            unsigned short l_970 = 0x7497L;
            for (p_14 = 2; (p_14 >= 0); p_14 -= 1)
            {
                unsigned l_992[10][4] = {{0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}, {0x227CD945L, 0x1B50581BL, 0x010CF293L, 0x1B50581BL}};
                unsigned l_1003 = 0xCE69E0C8L;
                int i, j;
                if (l_935)
                {
                    unsigned l_952 = 0xB9AA2809L;
                    int l_962 = 6L;
                    int l_963 = 0x3FF38586L;
                    int l_965 = 0x16F5BB28L;
                    int l_968 = 0L;
                    int l_969 = 0x3C6E9956L;
                    if (((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(func_51(((((safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((p_16 >= (safe_lshift_func_int8_t_s_s(g_405, 6))), (0x66L != 0x7CL))), ((safe_lshift_func_uint16_t_u_u(g_604, 12)) & (l_952 > (~(safe_rshift_func_int16_t_s_u(((~(safe_mod_func_int8_t_s_s(func_47((safe_sub_func_int32_t_s_s(((3UL > (0xA9L == 0xB9L)) == 0x60CF277DDFA6DA34LL), p_15)), p_14, g_640), l_873[2]))) || (-1L)), 7))))))), p_15)) & 0x56C3L) > l_923) <= 0x4DL), g_330), g_330)), 1UL)) < p_16))
                    {
                        short l_961 = 0x010EL;
                        int l_964 = 6L;
                        g_690 = 0L;
                        g_579 = (safe_lshift_func_int16_t_s_s(g_882, g_665));
                        if (p_15)
                            continue;
                        l_970--;
                    }
                    else
                    {
                        if (p_16)
                            break;
                        g_579 = (safe_add_func_int32_t_s_s(func_23(p_14, g_579), l_902));
                    }
                }
                else
                {
                    l_992[0][3] ^= (safe_mul_func_int8_t_s_s(l_977, (safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((((((g_829 & (p_14 == g_469[0][1])) ^ (safe_rshift_func_int8_t_s_s((p_14 >= l_970), 5))) < 0xD909L) & func_51((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((g_406 | (safe_mul_func_int16_t_s_s(l_966, p_16))), l_977)) ^ 0x4BL), l_917)), g_582)) & l_935), (-6L))) >= p_14), g_360)) >= p_14) != l_970), p_15))));
                }
                l_935 = p_15;
                g_579 = l_923;
                if (g_882)
                    continue;
                for (l_966 = 0; (l_966 <= 2); l_966 += 1)
                {
                    unsigned l_1004 = 8UL;
                    for (g_829 = 0; (g_829 <= 2); g_829 += 1)
                    {
                        int i, j, k;
                        l_935 &= (safe_mul_func_uint16_t_u_u((g_72[(l_966 + 4)][(p_14 + 5)][p_14] <= (func_47(l_992[0][3], g_360, (((((safe_mul_func_int16_t_s_s(func_47(p_16, (safe_rshift_func_uint16_t_u_u(3UL, 4)), (g_578 ^ (safe_mul_func_uint16_t_u_u((((p_15 <= (safe_add_func_uint64_t_u_u(0x59B7235F3250185ALL, g_3))) | 0xCAL) != g_665), g_829)))), p_15)) && 4294967295UL) == 8L) ^ 0xC44204DAL) != 0x978C0E27L)) == l_842[0][1])), l_992[0][3]));
                        g_83 = g_360;
                        if (p_15)
                            continue;
                    }
                    for (g_83 = 2; (g_83 >= 0); g_83 -= 1)
                    {
                        return l_1003;
                    }
                    for (l_881 = 2; (l_881 >= 0); l_881 -= 1)
                    {
                        short l_1016[4][4] = {{1L, 0L, 0x3C87L, 0L}, {1L, 0L, 0x3C87L, 0L}, {1L, 0L, 0x3C87L, 0L}, {1L, 0L, 0x3C87L, 0L}};
                        int i, j;
                        --l_1004;
                        l_1016[1][2] = (safe_lshift_func_int16_t_s_u(func_39(func_18((!(safe_mod_func_int32_t_s_s((+((safe_unary_minus_func_int8_t_s(func_23(g_579, (safe_mul_func_int16_t_s_s(l_842[0][1], func_47(func_51(p_16, g_54), (safe_mul_func_uint16_t_u_u(func_47(p_15, (l_842[0][1] <= func_47(g_578, l_935, g_106)), g_829), 0xECD3L)), g_356[1][4])))))) > p_16)), 0x8AF05F1CL))), g_829), g_330, g_356[1][4], p_14, l_1003), p_16));
                    }
                }
            }
            l_935 = (l_842[0][1] == func_30((safe_rshift_func_uint16_t_u_u(p_16, 12)), ((safe_mul_func_int8_t_s_s((l_935 || (safe_sub_func_int64_t_s_s(((((g_364[0][0] != (func_47((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_935 < 1UL), 5)), 1UL)), 0UL)), func_47(l_970, p_14, g_83))) != 0x0053F42C0CEC6EDCLL), 11)), p_15, g_54) > 0x936FL)) > p_15) || l_935) <= g_829), l_966))), 0xA6L)) == l_967)));
        }
        else
        {
            l_873[5] = ((g_583 < func_51((g_604 && (+4294967294UL)), (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((g_83 >= (safe_sub_func_uint16_t_u_u(65528UL, ((l_917 == 0x2CC0FAE4L) || g_829)))), (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_582, l_966)), 0xA722080AL)))), 14)), 9)), g_360)) < p_15), p_16)))) < l_1049);
        }
    }
    l_873[1] = g_817[3][0];
    return l_881;
}







static unsigned long long func_18(int p_19, char p_20)
{
    unsigned l_543 = 0xA4B45ED6L;
    int l_544 = 0xCCFF8FB4L;
    int l_581[9] = {(-8L), (-8L), 0x03789988L, (-8L), (-8L), 0x03789988L, (-8L), (-8L), 0x03789988L};
    unsigned l_662 = 18446744073709551606UL;
    char l_705 = 4L;
    char l_748 = 0x87L;
    long long l_755[5] = {(-10L), 2L, (-10L), 2L, (-10L)};
    unsigned l_768[6] = {0x4DF3CAC4L, 0xBAB8AAADL, 0x4DF3CAC4L, 0xBAB8AAADL, 0x4DF3CAC4L, 0xBAB8AAADL};
    int i;
    l_544 &= l_543;
    for (g_161 = 0; (g_161 == 2); g_161 = safe_add_func_int32_t_s_s(g_161, 1))
    {
        short l_555[5];
        int l_561 = (-10L);
        char l_625 = 0x51L;
        unsigned long long l_643 = 1UL;
        int l_685 = 8L;
        int l_687 = (-1L);
        int l_691 = 1L;
        unsigned l_743[8][7][4] = {{{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}, {{0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}, {0xD8724A5DL, 0UL, 4294967295UL, 0xA1608C68L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_555[i] = 0x1531L;
        g_54 = p_19;
        if (g_364[0][0])
        {
            unsigned char l_556[10][2][8] = {{{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}, {{1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}, {1UL, 2UL, 1UL, 2UL, 1UL, 2UL, 1UL, 2UL}}};
            unsigned l_600 = 6UL;
            unsigned l_618 = 0xA573B120L;
            int i, j, k;
            for (l_544 = 7; (l_544 > (-4)); l_544 = safe_sub_func_int8_t_s_s(l_544, 5))
            {
                unsigned long long l_551 = 18446744073709551614UL;
                unsigned char l_597 = 0xEFL;
                for (g_83 = 0; (g_83 > 16); g_83++)
                {
                    unsigned long long l_552[4] = {0x73EF340546E25032LL, 0x25CFA69691E416F6LL, 0x73EF340546E25032LL, 0x25CFA69691E416F6LL};
                    int i;
                    l_552[0] = (g_95[6][0][0] >= (func_47(g_330, l_551, g_330) && (-1L)));
                    l_561 = (safe_sub_func_int32_t_s_s(func_47(((((func_51(((l_555[2] & g_469[0][0]) | g_3), (((l_556[2][0][1] ^ g_3) | (safe_rshift_func_int8_t_s_s(p_20, 3))) > ((l_552[2] != 1L) | ((safe_add_func_uint8_t_u_u((p_20 == g_3), g_112)) & l_555[1])))) || g_469[0][1]) ^ p_19) <= p_20) || l_551), p_19, l_552[0]), 7UL));
                    g_54 = func_47(((safe_rshift_func_uint16_t_u_s(1UL, ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((p_19 != g_72[4][6][2]))), 3L)) >= (safe_rshift_func_int8_t_s_s((g_356[0][1] <= 0x7678E578L), func_47(l_552[0], (p_19 == (safe_rshift_func_uint16_t_u_s(l_556[8][1][0], 13))), p_19)))))) & (-1L)), p_20, g_3);
                }
                for (g_54 = (-10); (g_54 < 8); g_54++)
                {
                    int l_575 = 0x6FA6692DL;
                    int l_580 = 0x3A926DFDL;
                    for (g_83 = 0; (g_83 == 4); ++g_83)
                    {
                        unsigned long long l_584 = 0UL;
                        l_575 = l_551;
                        g_578 &= (safe_add_func_uint32_t_u_u(3UL, func_47(g_97[3], g_406, l_551)));
                        l_575 = (g_469[0][6] & 0x92L);
                        --l_584;
                    }
                    if (g_95[1][2][2])
                        continue;
                    l_575 = (safe_lshift_func_uint16_t_u_u((func_47((0x5EL <= p_20), func_39(g_403[0][1], (p_19 ^ (((((safe_mod_func_int16_t_s_s(p_20, l_556[2][0][1])) > (safe_mod_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((l_551 < (l_580 <= (+(0xD4L > 0x9CL)))), g_161)) > l_551), g_161))) | 1L) > p_20) & 0UL)), g_356[1][3], l_597, g_406), p_20) < p_20), l_544));
                }
                l_581[5] = (safe_mul_func_uint16_t_u_u(0xE345L, (0xC433ED1DL < p_20)));
            }
            if ((g_238 | (g_3 == l_600)))
            {
                long long l_603 = (-10L);
                int l_639 = 0x01E8F669L;
                if (func_51(p_20, (safe_mod_func_int32_t_s_s(((((func_39((g_84 > (+p_20)), p_20, l_561, p_19, (func_51(((g_406 <= 0xC7D9L) != ((g_161 != g_83) == 65535UL)), l_561) <= 0x4BF5L)) > l_581[5]) || p_19) | (-2L)) & 0L), 0x1B9E822AL))))
                {
                    unsigned long long l_609 = 0xA33E39AC6AFAC502LL;
                    --g_604;
                    for (l_603 = 0; (l_603 <= 3); l_603 += 1)
                    {
                        int l_617[4] = {(-1L), 0xC4EB826DL, (-1L), 0xC4EB826DL};
                        int i;
                        l_609 = (safe_rshift_func_uint8_t_u_u(g_97[l_603], ((!0x7ADB3B678F5A3A1ELL) >= 18446744073709551615UL)));
                        l_581[5] = (((safe_lshift_func_uint8_t_u_u(((l_556[2][0][1] > (p_19 > (safe_add_func_uint64_t_u_u((p_19 != func_23(((0xD97CE08067BE0837LL & ((safe_unary_minus_func_uint64_t_u(g_403[0][1])) | ((((5L | l_543) && ((safe_rshift_func_uint8_t_u_u(l_617[0], func_51((p_20 >= g_106), l_603))) | p_20)) || l_555[2]) > p_20))) < l_618), l_603)), p_19)))) ^ 255UL), g_582)) != g_604) <= l_609);
                        l_561 = (5L == (safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s(l_625, 9)) | func_33((p_20 || p_19), l_625, (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(g_54, ((safe_unary_minus_func_int8_t_s((p_20 <= (safe_mul_func_int8_t_s_s(p_19, l_609))))) ^ g_356[1][4]))), 0xA3L)), p_20)) && g_97[l_603]), p_20)) < p_19), g_106)));
                    }
                }
                else
                {
                    for (g_406 = 0; (g_406 <= 0); g_406 += 1)
                    {
                        int i, j;
                        l_639 = (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(g_469[g_406][(g_406 + 9)], 14)) < (safe_mul_func_int16_t_s_s(p_19, 0L))), p_19));
                        g_579 &= p_20;
                    }
                }
                if ((l_625 <= l_581[5]))
                {
                    g_54 = p_20;
                }
                else
                {
                    if (g_54)
                    {
                        g_640++;
                    }
                    else
                    {
                        l_581[5] = p_20;
                        if (g_364[0][0])
                            continue;
                    }
                }
                l_639 = ((p_19 && p_19) >= (((((((g_3 >= l_643) >= (0UL == (safe_unary_minus_func_uint32_t_u(0xF681C85FL)))) == l_603) | (safe_unary_minus_func_uint8_t_u(((l_639 >= (l_603 >= l_555[2])) | p_19)))) || l_603) || p_20) > g_161));
                l_544 = 0xEEDF2718L;
            }
            else
            {
                l_544 &= g_161;
            }
        }
        else
        {
            short l_656 = 0x274FL;
            unsigned short l_663 = 0x18A4L;
            int l_686 = 0xA36E057FL;
            int l_688[5];
            int i;
            for (i = 0; i < 5; i++)
                l_688[i] = 0xAAEB57BCL;
            if (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(l_581[5], 0xEBB5L)) != l_581[5]) < 0x2B6EL), func_51(g_95[7][0][1], p_20))), 9)), 5)), l_656)) <= g_406))
            {
                unsigned l_657 = 0x1CC472CEL;
                int l_664 = 0xF31CF7DCL;
                int l_695 = 4L;
                if (((0x3FD5L && func_47(l_657, g_579, l_656)) >= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((l_656 | (g_161 > (0x2CL <= l_662))) == g_356[0][1]), l_662)) >= 0x255DL), l_663))))
                {
                    l_664 = (+p_19);
                    l_664 |= g_665;
                    g_83 = (-1L);
                }
                else
                {
                    long long l_674 = 0xE8B7AC933F3A96EBLL;
                    int l_689 = 8L;
                    for (l_643 = 4; (l_643 >= 31); l_643 = safe_add_func_int64_t_s_s(l_643, 6))
                    {
                        l_561 &= g_364[0][0];
                        l_664 = 0x8CD43B90L;
                        g_579 = 0x34AA4521L;
                        l_674 = func_33(((p_19 != g_403[0][1]) == (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_665, l_581[2])), (18446744073709551609UL == (safe_mod_func_int32_t_s_s(g_640, g_330)))))), l_544, p_19, p_20);
                    }
                    l_581[5] = ((safe_mul_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(l_674, 0xD87BF4A09B96BEECLL)) >= p_20) == (g_330 && p_19)), l_656)) <= (safe_rshift_func_uint8_t_u_s(l_656, ((g_83 | func_33((safe_rshift_func_uint8_t_u_u((g_665 < p_19), g_469[0][7])), g_106, g_161, p_19)) && 4L))));
                    for (p_20 = 0; (p_20 <= 0); p_20 += 1)
                    {
                        int i, j;
                        return g_469[p_20][(p_20 + 2)];
                    }
                    for (p_20 = 1; (p_20 <= 4); p_20 += 1)
                    {
                        int l_683 = (-1L);
                        int l_684[10][5][5] = {{{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}, {{1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}, {1L, 0L, 0x7D9FDAAFL, (-5L), 0xE984719CL}}};
                        int i, j, k;
                        g_692--;
                        l_684[3][1][3] &= func_39(p_19, ((l_695 && 0x7B60FCA6L) || ((safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(((g_96 && g_692) & (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(p_19)), (l_705 & (g_578 == (~(g_356[1][1] < l_686)))))) < 0UL) >= g_356[0][3]), 3))), 1UL)) & p_19), p_19)) > p_20)), g_356[1][4], g_604, p_19);
                        l_688[2] ^= ((safe_lshift_func_uint16_t_u_s(0xD20DL, ((0xCDL ^ (safe_mod_func_int32_t_s_s(g_84, (((safe_lshift_func_int8_t_s_u(func_51(p_20, g_356[1][4]), 5)) > 0x2DF9C2B1125A9EFFLL) && 0xC6212ABFE3EE249DLL)))) > ((safe_mul_func_int16_t_s_s(func_47(l_543, p_20, p_19), (-1L))) < l_689)))) < 0UL);
                    }
                }
                return g_95[6][0][5];
            }
            else
            {
                int l_718 = 0x44FBA210L;
                int l_742[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_742[i] = (-10L);
                l_581[0] |= ((0x133274B58AFECFACLL == p_19) & (((l_663 | func_51(g_403[0][1], ((g_356[1][2] >= func_51((safe_mod_func_uint8_t_u_u(l_543, 0x71L)), p_19)) | l_718))) <= p_20) & p_20));
                if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_97[2], (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(l_718, (+(safe_rshift_func_int16_t_s_u(g_604, 8))))) && g_406), l_663)), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(g_604, p_19)), ((l_688[2] == 4L) > g_161))))))), 11)), 0x9CL)))
                {
                    for (g_112 = 21; (g_112 != 47); ++g_112)
                    {
                        l_688[4] = g_640;
                        return g_406;
                    }
                    if (l_685)
                        break;
                }
                else
                {
                    unsigned l_739 = 0x7815F7C0L;
                    l_739--;
                    if (p_20)
                        continue;
                    return g_403[0][1];
                }
                l_691 = (func_23(g_330, l_718) || g_405);
                for (g_604 = 0; (g_604 <= 0); g_604 += 1)
                {
                    int i, j;
                    for (l_687 = 0; (l_687 <= 0); l_687 += 1)
                    {
                        int i, j;
                        l_743[2][3][0]--;
                        l_686 |= ((((safe_lshift_func_uint8_t_u_s(g_469[l_687][(l_687 + 2)], 5)) && g_469[l_687][(g_604 + 1)]) > (p_20 == p_19)) ^ l_748);
                    }
                    return g_469[g_604][g_604];
                }
            }
            l_581[0] = ((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((p_20 >= (safe_mod_func_int8_t_s_s(g_95[5][1][2], p_19))) & ((0x2D06116E7E57B274LL < l_581[5]) != (-5L))), (l_755[2] && (l_686 <= ((((safe_mul_func_int16_t_s_s(0x4DDFL, 0xF449L)) && l_705) | 0xBB8EL) <= 65535UL))))), 7)) || l_543) | l_643) | p_19);
        }
        l_544 = ((18446744073709551614UL ^ ((g_579 != p_20) <= 1UL)) & (l_581[4] < (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((p_19 & p_20) <= ((g_406 == p_19) || l_743[2][3][0])), 7UL)), g_578)), 0xEB1BL)), l_643))));
    }
    for (g_604 = 0; (g_604 <= 2); g_604 += 1)
    {
        char l_766 = 6L;
        int l_767 = 3L;
        int l_790 = 8L;
        int l_821 = 0xBDA6DE7AL;
        int l_823 = 0xC14DCBA5L;
        int l_824 = 7L;
        int l_825 = (-1L);
        int l_826 = 1L;
        int l_827 = 0x3B832A04L;
        short l_828[5][4];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_828[i][j] = 0x75A2L;
        }
        --l_768[1];
        if (l_755[2])
            continue;
        for (l_766 = 0; (l_766 >= 0); l_766 -= 1)
        {
            int l_783[5][6] = {{1L, 0xAF2C2822L, 0xE201F3A3L, (-4L), (-4L), 0xE201F3A3L}, {1L, 0xAF2C2822L, 0xE201F3A3L, (-4L), (-4L), 0xE201F3A3L}, {1L, 0xAF2C2822L, 0xE201F3A3L, (-4L), (-4L), 0xE201F3A3L}, {1L, 0xAF2C2822L, 0xE201F3A3L, (-4L), (-4L), 0xE201F3A3L}, {1L, 0xAF2C2822L, 0xE201F3A3L, (-4L), (-4L), 0xE201F3A3L}};
            int i, j;
            if (g_403[l_766][(g_604 + 1)])
                break;
            l_544 = l_543;
            for (p_19 = 0; (p_19 <= 2); p_19 += 1)
            {
                int l_784 = 1L;
                int l_819[6][8][5] = {{{0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}}, {{0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}}, {{0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}}, {{0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}}, {{0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}}, {{0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}, {0xBF29E369L, 0x91FF780DL, 4L, 0xE4165638L, 0xE4165638L}}};
                int i, j, k;
                if (((safe_lshift_func_int8_t_s_s(g_95[p_19][(l_766 + 1)][(l_766 + 1)], 4)) & g_582))
                {
                    int l_787 = 1L;
                    for (g_360 = 0; (g_360 != 8); g_360 = safe_add_func_uint8_t_u_u(g_360, 8))
                    {
                        return g_95[5][1][3];
                    }
                    if (((0x5FL > 250UL) | (((0x59L & (18446744073709551615UL <= g_364[0][0])) >= ((safe_rshift_func_uint16_t_u_u((g_83 || (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((l_783[0][2] || l_784) != p_20), g_330)), l_581[7])) == 7L), 5))), p_19)) <= l_784)) || p_19)))
                    {
                        return l_755[1];
                    }
                    else
                    {
                        g_579 = 0x91228EA4L;
                    }
                    for (g_360 = 0; (g_360 > 21); g_360++)
                    {
                        l_790 |= func_39(l_787, g_96, p_19, func_47(l_787, (!(safe_add_func_int32_t_s_s((p_20 | (1L ^ func_47((g_330 != ((g_161 | (((((g_604 != g_665) && l_787) > 4L) ^ l_766) == p_20)) ^ 0xFC4BF825L)), g_330, g_54))), (-1L)))), l_787), l_767);
                        l_767 = (func_39(((safe_add_func_uint8_t_u_u((p_19 ^ (((func_39((0xA33100FEE4AB4271LL == l_784), func_51(p_19, func_30(p_20, ((-1L) & 0x93E7L))), g_356[0][3], l_787, l_790) >= p_19) == 8L) < l_784)), g_360)) || p_20), g_604, p_20, p_19, p_20) <= g_356[1][1]);
                        g_54 &= (+l_783[0][2]);
                    }
                    for (g_54 = 0; (g_54 < (-23)); --g_54)
                    {
                        if (p_19)
                            break;
                        g_690 |= 0xDFB5200BL;
                    }
                }
                else
                {
                    unsigned long long l_795 = 0xD138121FA8FCEA98LL;
                    int l_816 = (-1L);
                    int l_818[1][4] = {{0x2EC443FBL, 0x00255884L, 0x2EC443FBL, 0x00255884L}};
                    int i, j;
                    l_795++;
                    if (p_19)
                        continue;
                    if (func_23((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_544, 11)), p_19)) || (safe_lshift_func_uint8_t_u_s(((l_783[0][2] >= l_767) >= 8L), 0))), 1)) != (((g_692 >= (safe_add_func_int32_t_s_s(g_112, (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_784, (safe_lshift_func_uint8_t_u_u(func_47((safe_rshift_func_int8_t_s_s(0xD5L, 0)), p_19, g_54), 2)))) >= l_748), 0xA69CL))))) != g_640) & 0x5D2BL)) || p_20), g_665))
                    {
                        short l_820[7] = {0x40E7L, 0x40E7L, (-3L), 0x40E7L, 0x40E7L, (-3L), 0x40E7L};
                        int l_822 = 0x375C0FD1L;
                        int i;
                        g_83 ^= p_20;
                        --g_829;
                        g_579 = (safe_mul_func_uint8_t_u_u(g_469[0][6], p_19));
                    }
                    else
                    {
                        return l_544;
                    }
                }
            }
        }
    }
    g_83 ^= ((safe_rshift_func_uint8_t_u_s(((0xC2DC727CCB5E452ELL < p_20) & 18446744073709551610UL), (1UL == p_20))) < ((((p_19 ^ (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(func_33(p_19, (l_768[4] & (-7L)), g_817[4][0], l_755[4]), 0L)), 0x19C3L)), p_19))) >= (-5L)) || 0xB107L) & (-1L)));
    return g_97[2];
}







static unsigned short func_23(int p_24, short p_25)
{
    unsigned short l_213 = 0xCF31L;
    unsigned short l_314[6] = {0x3205L, 9UL, 0x3205L, 9UL, 0x3205L, 9UL};
    int l_355 = 8L;
    int l_357 = (-2L);
    int l_363 = 9L;
    short l_416 = 0xE734L;
    short l_511[2];
    int l_542 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_511[i] = 0L;
    for (g_106 = 0; (g_106 > 32); g_106 = safe_add_func_int8_t_s_s(g_106, 1))
    {
        unsigned long long l_214 = 0UL;
        unsigned long long l_215 = 18446744073709551607UL;
        int l_236 = 4L;
        int l_237 = 0x7F159341L;
        unsigned l_245 = 9UL;
        unsigned long long l_257 = 18446744073709551610UL;
        if (((safe_sub_func_int64_t_s_s(((g_72[3][6][2] && func_47(l_213, l_213, func_39(g_106, p_25, l_213, g_72[1][2][0], (func_51(g_54, (p_24 | p_24)) & l_214)))) == l_215), 0x6F5DFC3470E8C40FLL)) || (-1L)))
        {
            short l_235 = 0x88BDL;
            short l_246 = 1L;
            int l_249 = 6L;
            for (l_215 = 0; (l_215 < 35); ++l_215)
            {
                short l_233[3][7];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_233[i][j] = 0xE65AL;
                }
                for (g_112 = 0; (g_112 <= 2); g_112 += 1)
                {
                    int l_224 = 0xFEA347EEL;
                    int i, j, k;
                    if (((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((4294967292UL >= g_72[(g_112 + 4)][g_112][g_112]), l_224)), g_112)), (safe_mod_func_int16_t_s_s(((l_213 <= (l_214 & (func_47((~(safe_mul_func_uint8_t_u_u(func_51(p_24, (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(0L, l_214)), g_106))), 247UL))), l_215, l_233[0][4]) >= (-1L)))) != p_25), g_3)))) ^ 0L))
                    {
                        return g_72[(g_112 + 4)][g_112][g_112];
                    }
                    else
                    {
                        short l_234 = 0xF11EL;
                        ++g_238;
                        return g_95[3][2][1];
                    }
                }
            }
            if (l_213)
                break;
            l_249 = (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((l_245 == l_246), (0L && 65535UL))) || 1UL), ((safe_mul_func_int16_t_s_s(4L, l_246)) & p_24)));
        }
        else
        {
            unsigned char l_276[9][2][1] = {{{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}, {{247UL}, {247UL}}};
            unsigned l_328 = 4294967291UL;
            long long l_352 = (-1L);
            int i, j, k;
            l_276[0][0][0] = (((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_add_func_uint8_t_u_u(g_238, func_47(l_257, g_3, p_24))))), (safe_add_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((~(+(safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(((!((((-5L) && (0x78DDL >= (safe_sub_func_uint32_t_u_u(((((func_51(l_213, ((((l_236 ^ p_24) >= 0x872CB4935A8E8F59LL) ^ g_83) <= g_54)) >= 2L) >= g_83) == g_106) & l_214), l_213)))) < 7L) & g_83)) > 0L), 0xB8684484BAB3622FLL)), p_25)), 0)))), p_25)), p_24)) ^ 0x7BL), 4L)), p_25)) != g_83), g_161)))), g_161)) | 0UL) ^ 0x7492L);
            if ((safe_add_func_int32_t_s_s(l_276[0][0][0], (l_213 & (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((l_276[8][0][0] > l_213) || (((safe_mod_func_int32_t_s_s(0x4E26B6B8L, ((safe_lshift_func_uint8_t_u_u(((g_84 < (g_83 | (((safe_mod_func_uint32_t_u_u((func_51(l_236, p_24) <= l_213), l_213)) != g_106) > 0xDA28L))) <= 0UL), 4)) && 0x82F1L))) == 0xDB8598D3L) | 65535UL)), 7)), 1))))))
            {
                unsigned l_295[4];
                int l_300 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_295[i] = 4294967290UL;
                if (((safe_add_func_int16_t_s_s(0x37EFL, l_213)) ^ l_276[0][0][0]))
                {
                    unsigned char l_305 = 0UL;
                    unsigned l_312 = 0xC216B368L;
                    long long l_313 = (-1L);
                    int l_329 = 0xEC37B445L;
                    l_300 = ((safe_add_func_int32_t_s_s(func_33((65535UL > ((safe_mul_func_uint8_t_u_u(l_213, (l_295[2] || (p_24 ^ (((safe_sub_func_uint8_t_u_u(((l_295[0] ^ (3L || (safe_mod_func_uint8_t_u_u(l_245, 0x76L)))) == (+g_72[3][6][2])), g_54)) >= g_112) ^ p_25))))) < g_161)), g_83, p_24, p_25), (-10L))) == 8UL);
                    for (g_54 = (-6); (g_54 > 28); g_54++)
                    {
                        unsigned short l_315 = 65535UL;
                        int l_331 = 0L;
                        l_315 = ((safe_lshift_func_int8_t_s_s(((l_237 & ((l_276[0][0][0] > (l_305 ^ (safe_sub_func_int16_t_s_s((p_25 || (safe_rshift_func_uint16_t_u_u((func_39(p_25, (g_238 <= (func_47((g_3 < (safe_rshift_func_uint8_t_u_s(l_312, 0))), p_25, g_106) != l_295[1])), g_112, l_300, l_313) >= g_83), l_314[2]))), 1UL)))) < 0xA1AC6A4DF166B595LL)) < l_305), l_276[0][0][0])) != g_112);
                        l_331 = (safe_lshift_func_int16_t_s_u((~((safe_rshift_func_int8_t_s_u((func_39(p_24, g_83, (l_312 <= (func_47((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_295[2], (l_314[2] < (l_314[2] && ((safe_sub_func_uint64_t_u_u(((!0xE3B36A9DL) >= (p_25 == 65531UL)), l_328)) ^ g_146))))), g_54)), l_329, l_276[5][0][0]) && l_300)), l_236, p_25) <= g_330), 4)) > 0x3471L)), l_313));
                    }
                    l_237 = 4L;
                    g_83 ^= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(250UL, (safe_sub_func_int64_t_s_s(g_95[7][1][2], (p_24 >= func_47(g_161, func_51((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((((0L | p_25) && g_330) <= ((safe_lshift_func_uint16_t_u_u(p_24, (safe_lshift_func_int16_t_s_s((+(safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_24, 7)), 0xA79FL))), l_329)))) | 0L)) && l_328), p_24)), g_112)), g_3), l_236)))))), 0x6FC0L));
                }
                else
                {
                    g_83 = g_3;
                }
            }
            else
            {
                unsigned short l_353 = 65527UL;
                for (l_328 = 1; (l_328 > 59); l_328 = safe_add_func_uint8_t_u_u(l_328, 9))
                {
                    l_236 = l_276[4][0][0];
                    l_353 = l_352;
                }
            }
        }
        if (g_146)
            continue;
        for (l_213 = 0; (l_213 <= 2); l_213 += 1)
        {
            char l_354 = 0x12L;
            int l_358 = 0L;
            int l_359 = 6L;
            int l_361 = 0x7194E90CL;
            int l_362 = 0x85BA4B47L;
            unsigned l_523[2][6][2] = {{{0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}}, {{0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}, {0xC6677179L, 0xE29CF1B3L}}};
            int i, j, k;
            g_364[0][0]--;
            for (l_358 = 0; (l_358 <= 2); l_358 += 1)
            {
                unsigned short l_378 = 0xA68AL;
                unsigned long long l_383 = 18446744073709551615UL;
                int l_404[1];
                int l_426 = 1L;
                unsigned long long l_447 = 18446744073709551613UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_404[i] = 0xC69828AEL;
                for (l_245 = 0; (l_245 <= 2); l_245 += 1)
                {
                    int l_376 = (-1L);
                    int i, j, k;
                    g_83 = ((safe_add_func_int32_t_s_s(func_47(((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(0x9807EF00L, g_72[(l_213 + 2)][(l_213 + 4)][l_213])) != (safe_add_func_int8_t_s_s(4L, l_314[1]))) == l_245), func_51((p_25 == g_112), ((5UL == (safe_unary_minus_func_uint16_t_u(g_112))) == g_161)))) >= (-2L)), l_257, l_376), l_357)) || 0UL);
                    for (l_357 = 0; (l_357 <= 2); l_357 += 1)
                    {
                        int l_377 = 0x1673F8D6L;
                        l_363 = g_106;
                        if (l_213)
                            continue;
                        ++l_378;
                    }
                    for (l_363 = 0; (l_363 <= 2); l_363 += 1)
                    {
                        return l_314[2];
                    }
                    for (l_215 = 0; (l_215 <= 2); l_215 += 1)
                    {
                        unsigned l_402 = 0x3E05D938L;
                        l_362 = ((l_236 || 0xE0C722BEL) <= (safe_mod_func_int64_t_s_s(6L, ((func_47(l_383, p_25, ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(p_25, (safe_mod_func_uint64_t_u_u((l_378 > (l_358 & ((((((g_97[1] < p_25) ^ p_25) | l_245) < 0x9F2893A7L) || 0UL) | g_161))), g_106)))), l_354)) != g_161)) & l_237) ^ 255UL))));
                        if (p_25)
                            break;
                        l_402 ^= func_47(((safe_mul_func_uint8_t_u_u(g_106, g_356[1][2])) ^ ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_314[2], (p_24 ^ (+(0x9777L <= (safe_mul_func_uint8_t_u_u(func_47((safe_mod_func_int32_t_s_s(g_97[0], func_51(g_112, p_25))), g_330, l_355), g_112))))))), 0xE063696015333847LL)) <= g_356[1][4]), g_356[1][3])) & l_236)), g_360, p_25);
                        g_54 ^= l_358;
                    }
                }
                g_83 &= g_72[(l_358 + 3)][(l_213 + 4)][l_213];
                for (g_54 = 0; (g_54 <= 2); g_54 += 1)
                {
                    char l_413 = 1L;
                    long long l_417 = (-1L);
                    for (l_383 = 0; (l_383 <= 2); l_383 += 1)
                    {
                        int l_418 = 0x11F3F1C0L;
                        int i, j, k;
                        g_406++;
                        l_418 = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((((g_95[(g_54 + 5)][l_213][(l_213 + 2)] & g_330) > (func_47(l_237, func_47(l_413, g_330, func_47((safe_sub_func_uint8_t_u_u((l_416 >= g_356[1][1]), 255UL)), (l_413 <= 0UL), l_413)), g_330) >= 0x04L)) != 1UL) >= l_417), p_24)), g_3));
                    }
                    g_83 = p_25;
                }
                for (l_362 = 2; (l_362 >= 0); l_362 -= 1)
                {
                    unsigned l_425 = 4294967290UL;
                    int l_446 = (-3L);
                    int l_524[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_524[i] = (-4L);
                    g_54 &= ((l_378 & ((((safe_add_func_uint8_t_u_u(p_24, (0x8EL == ((safe_lshift_func_int16_t_s_s((l_383 == g_161), 4)) | l_404[0])))) >= (g_360 < ((((g_405 && ((safe_mul_func_uint8_t_u_u(l_425, l_355)) ^ l_362)) || l_426) | (-1L)) && 0x1CL))) && 0xB2B4A36AL) != p_25)) >= g_406);
                    if ((safe_sub_func_int32_t_s_s(0xA6D074E6L, (safe_lshift_func_uint16_t_u_s(func_47((255UL == l_214), g_403[0][3], (!(((0xE28CE12BB00D93FBLL > (safe_mod_func_int8_t_s_s(func_47((1L > (safe_add_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((0xE91399ABDCF0E7D6LL < 5UL))), func_47(((18446744073709551612UL && 0x9B70552E89469D5ALL) > l_314[2]), g_161, l_425))) ^ p_24), g_3))), g_406, g_54), g_356[1][4]))) && 0x80L) ^ 0xB3D1C557F46E1EE8LL))), 14)))))
                    {
                        g_83 = 0L;
                        l_446 &= (safe_sub_func_int32_t_s_s(func_47(g_364[0][1], l_237, g_406), ((((safe_rshift_func_int8_t_s_s(p_25, (!((~g_106) > g_360)))) < (safe_lshift_func_uint16_t_u_s(65535UL, (((safe_rshift_func_int8_t_s_s((g_112 && 0xB7L), 6)) >= l_362) != g_406)))) == 0x0FA44438L) == 0UL)));
                        g_83 = func_51(l_404[0], l_245);
                        ++l_447;
                    }
                    else
                    {
                        g_83 = (safe_mul_func_int16_t_s_s(l_447, l_354));
                        l_236 |= (safe_lshift_func_int16_t_s_s((!(safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(l_213, 13)) && (p_24 & (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_24, (0xC7B6337EL ^ (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_378, 4)), (safe_mod_func_uint64_t_u_u((l_446 && ((safe_unary_minus_func_int64_t_s(l_354)) == (g_97[0] ^ (g_356[0][2] && p_25)))), l_358))))))), p_25)))), l_215))), g_356[0][0]));
                        if (l_237)
                            continue;
                        g_469[0][1]--;
                    }
                    if ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(65535UL, 0x5799L)), 12)))
                    {
                        unsigned long long l_512[6][5] = {{18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 1UL, 0x840CEC92609108EALL}, {18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 1UL, 0x840CEC92609108EALL}, {18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 1UL, 0x840CEC92609108EALL}, {18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 1UL, 0x840CEC92609108EALL}, {18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 1UL, 0x840CEC92609108EALL}, {18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 1UL, 0x840CEC92609108EALL}};
                        unsigned long long l_525 = 0x115D76EC6D6B9109LL;
                        int i, j;
                        l_355 = (safe_lshift_func_uint16_t_u_s(p_25, ((safe_rshift_func_int8_t_s_u((((safe_unary_minus_func_int64_t_s(((safe_mod_func_uint64_t_u_u(((l_215 ^ ((!(safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(0L, (~(safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(func_39((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(0x91L, ((safe_sub_func_uint16_t_u_u(0x933EL, ((!(safe_mul_func_uint8_t_u_u(1UL, ((safe_mul_func_int8_t_s_s(((((+(func_47((safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((((+g_95[7][1][2]) >= g_83) > (((l_511[0] ^ g_54) && (-2L)) > l_511[0])), p_24)) <= l_416), l_404[0])), g_106, p_24) & p_24)) < g_3) < 0x3DF85345F09B3966LL) == p_25), p_24)) >= l_314[5])))) || 0xCB5F9788EBA344D7LL))) != 0x1DD4L))), g_106)), p_25)) <= p_25) < (-8L)), g_3, p_24, p_24, p_25), g_356[0][2])) < g_356[1][1]), 0UL))))) >= 0x7BF78665L), p_24)), 0x5EF18C21F315237DLL)), 15))) || g_356[1][4])) < g_112), 18446744073709551613UL)) & p_24))) ^ l_512[2][1]) < (-1L)), g_330)) == g_3)));
                        g_54 = (0x56L > ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(l_363, 12)), 1)) < ((safe_lshift_func_int8_t_s_u(((g_84 <= g_330) | ((safe_lshift_func_int8_t_s_s((func_47(l_511[0], l_523[0][4][0], l_511[0]) & l_425), 0)) ^ 0xEE2843406ED8BB31LL)), g_54)) < 0x3EEDL)), l_404[0])) ^ p_24));
                        l_525--;
                        if (p_24)
                            continue;
                    }
                    else
                    {
                        unsigned long long l_536 = 3UL;
                        int l_537 = 1L;
                        l_361 = l_314[4];
                        l_537 = (l_358 == (safe_mod_func_uint16_t_u_u(g_364[0][0], ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_406, (safe_rshift_func_int8_t_s_s(func_51(l_213, (func_47(p_24, func_47((((func_51(l_511[0], g_54) > g_3) || l_383) <= l_404[0]), p_24, l_536), p_24) <= g_360)), p_25)))), p_25)) & p_24))));
                    }
                    g_83 = g_95[7][1][2];
                }
            }
        }
        l_355 ^= func_39((0xEE7056886CA49282LL ^ func_33((p_24 & p_25), ((safe_add_func_int64_t_s_s(g_97[3], (safe_lshift_func_int16_t_s_s(l_542, 12)))) || g_469[0][1]), l_257, g_356[1][4])), g_406, g_330, g_161, l_236);
    }
    return g_72[3][6][2];
}







static int func_30(unsigned p_31, int p_32)
{
    int l_92[4][1][5];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_92[i][j][k] = 0x8FD7CB4EL;
        }
    }
    if (((p_31 > (g_3 ^ func_51(p_31, p_31))) == (g_72[3][6][2] & (safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(g_83, g_3)) && ((p_32 & l_92[2][0][3]) <= 7L)) != (-1L)), 5)))))
    {
        int l_93 = 1L;
        int l_94 = 0x38C14FD4L;
        --g_97[0];
    }
    else
    {
        unsigned char l_109[6][5][3] = {{{0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}}, {{0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}}, {{0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}}, {{0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}}, {{0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}}, {{0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}, {0UL, 4UL, 0x44L}}};
        int l_200[7][6] = {{0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}, {0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}, {0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}, {0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}, {0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}, {0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}, {0xBB8D3784L, (-1L), 0x54E90A01L, (-1L), 0xBB8D3784L, (-1L)}};
        int i, j, k;
        for (g_83 = 0; (g_83 == (-15)); g_83 = safe_sub_func_int16_t_s_s(g_83, 7))
        {
            unsigned char l_113 = 0UL;
            if (func_39(p_31, (((18446744073709551613UL | (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(func_39(((l_92[2][0][3] | ((g_83 != func_51(p_32, func_47(g_106, (safe_sub_func_uint64_t_u_u((g_84 && ((func_39(l_109[1][4][1], (safe_lshift_func_uint8_t_u_s(l_92[2][0][3], 1)), g_3, g_97[0], g_3) <= 0xD302D723L) == 0x10L)), p_31)), g_3))) ^ p_32)) <= g_83), g_112, g_106, g_83, g_112), g_106)), l_113))) == 0xAFFFL) < 0xE1B5AB6CL), l_113, p_31, p_32))
            {
                char l_128[8] = {0L, 0L, 0x0BL, 0L, 0L, 0x0BL, 0L, 0L};
                int l_174 = 0xEC0A8828L;
                unsigned l_195 = 5UL;
                int l_197 = 0L;
                int i;
                g_54 ^= (safe_mul_func_int8_t_s_s(0x86L, l_92[2][0][3]));
                for (g_112 = 6; (g_112 == 59); g_112++)
                {
                    int l_144 = 0xBBF80E55L;
                    int l_149 = 0x811774B4L;
                    int l_168 = 0x5C270F0CL;
                    if ((func_33((safe_mul_func_int8_t_s_s(0xD8L, ((p_32 != p_31) >= (g_72[2][2][1] < (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, g_106)), g_3)))))), (((safe_add_func_int32_t_s_s(0x3C46DEB7L, (safe_lshift_func_uint16_t_u_u(g_54, 10)))) ^ g_106) & g_106), p_32, p_32) >= g_106))
                    {
                        unsigned short l_143 = 1UL;
                        unsigned short l_145 = 0xD7D1L;
                        l_145 = (l_128[0] ^ ((safe_lshift_func_uint8_t_u_u((1UL || (((g_96 < g_112) | func_47((((safe_rshift_func_uint16_t_u_u((0xD75BC1B5E43CA2BCLL < (safe_rshift_func_uint8_t_u_s(l_113, func_47(((((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((p_32 <= (func_47(((safe_rshift_func_uint8_t_u_s((((g_106 | p_31) == 7L) || l_143), 7)) <= 4294967294UL), g_3, l_144) < 0xF154L)), (-1L))) & 0xC0D22BE5L), 2)) & l_143) == p_32), p_32)) <= g_83) ^ g_54) & g_83), p_32, p_31)))), 1)) < 1UL) <= g_106), l_92[2][0][3], g_54)) & (-4L))), g_106)) >= l_92[2][0][0]));
                        if (g_95[7][1][2])
                            continue;
                    }
                    else
                    {
                        int l_160 = 0xC2ECEAEFL;
                        unsigned l_169 = 0x3EB5BA54L;
                        g_146++;
                        g_161 = (l_149 | (9L ^ (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((p_32 != (((((safe_mod_func_uint16_t_u_u(g_83, (p_32 & (safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(l_160, (0x095EF769B8DE4F0ELL && (func_47(func_33(g_112, g_97[0], p_32, l_144), p_32, p_32) || g_106)))), p_32))))) == l_144) <= p_31) | l_92[2][0][3]) <= g_106)) || 0UL) == l_128[0]), p_32)), g_3))));
                        l_168 = func_47(g_146, ((p_32 || (g_54 != (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_83, (p_31 > 0x98B4B1B4L))), (((safe_lshift_func_int16_t_s_s(func_47(l_113, g_54, g_83), g_112)) | l_109[4][4][0]) || l_168))))) != p_32), l_169);
                    }
                    for (l_113 = 0; (l_113 <= 2); l_113 += 1)
                    {
                        l_174 = ((((~(safe_mod_func_uint64_t_u_u(((18446744073709551615UL >= (((((g_54 && (safe_mul_func_int8_t_s_s(l_92[1][0][1], g_106))) & func_47(p_32, p_31, g_95[4][2][3])) >= 1UL) && g_83) < p_31)) > 0x74L), 0x182F14A8FFE7CC68LL))) & g_106) != 0xC804560B182A6E03LL) | 0x2CL);
                        g_54 = p_32;
                    }
                    for (g_106 = 0; (g_106 >= 22); g_106 = safe_add_func_int32_t_s_s(g_106, 8))
                    {
                        unsigned short l_196[4][7] = {{0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL}, {0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL}, {0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL}, {0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL, 65528UL, 0x7E9AL}};
                        int i, j;
                        l_168 = (0x957ECFBF858BC3E6LL <= (safe_lshift_func_int16_t_s_u(((l_149 != func_51(g_112, p_32)) >= l_168), 4)));
                        l_197 |= (func_47((255UL && (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((g_97[0] && g_72[3][6][2]), 12)) != (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((((p_31 && (safe_add_func_int64_t_s_s(((0xB4A18077L != g_83) < (func_47((safe_mod_func_int8_t_s_s((g_106 >= g_3), (safe_lshift_func_int16_t_s_s(p_31, l_174)))), p_32, g_161) == 4294967295UL)), l_92[2][0][3]))) <= p_32) || g_106) == p_32), p_32)) | 3UL), p_31)), l_195))), 0xF645L))), l_196[0][4], p_31) & g_83);
                    }
                }
            }
            else
            {
                return p_32;
            }
        }
        l_92[2][0][2] ^= l_109[4][3][1];
        for (p_32 = 0; (p_32 <= 23); p_32 = safe_add_func_uint64_t_u_u(p_32, 6))
        {
            l_200[3][1] = p_32;
            return p_31;
        }
        l_92[2][0][3] |= (safe_lshift_func_uint16_t_u_u(g_97[1], 9));
    }
    g_54 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(g_146, func_47(g_83, g_112, g_112))), (safe_lshift_func_int8_t_s_s(g_3, 3))));
    return g_112;
}







static unsigned func_33(unsigned p_34, char p_35, short p_36, long long p_37)
{
    int l_78[10][6] = {{0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}, {0xB35B2DFFL, 1L, 0x0EAE3254L, 1L, 0xB35B2DFFL, (-7L)}};
    int l_79 = 0L;
    int l_82 = (-9L);
    short l_87[6] = {0x691DL, (-3L), 0x691DL, (-3L), 0x691DL, (-3L)};
    int i, j;
    g_54 = g_72[3][6][2];
    l_79 = (safe_add_func_uint16_t_u_u(l_78[7][1], p_34));
    for (p_37 = (-26); (p_37 != (-30)); p_37 = safe_sub_func_int32_t_s_s(p_37, 1))
    {
        g_54 = l_79;
        g_84++;
    }
    l_87[5] = p_37;
    return g_72[3][6][2];
}







static char func_39(int p_40, unsigned char p_41, char p_42, unsigned p_43, unsigned long long p_44)
{
    unsigned char l_73 = 7UL;
    int l_74 = 1L;
    int l_75[2];
    int i;
    for (i = 0; i < 2; i++)
        l_75[i] = 0x0604811EL;
    for (p_40 = 6; (p_40 == 6); p_40++)
    {
        unsigned short l_57 = 0xD25EL;
        return l_57;
    }
    l_75[0] |= (((p_40 ^ g_3) == ((((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_40, (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((((0L && g_54) ^ p_40) | 0UL), ((safe_rshift_func_int8_t_s_u(func_47((func_47((safe_rshift_func_uint16_t_u_s((~(safe_lshift_func_uint8_t_u_u(g_3, 0))), 3)), p_40, g_3) || g_3), p_41, g_3), 0)) && 0x816E149F7FAE0CD5LL))), g_72[3][6][2])))), l_73)) == l_73) ^ l_74) == 3L)) == l_73);
    return l_74;
}







static short func_47(long long p_48, short p_49, char p_50)
{
    return g_3;
}







static long long func_51(unsigned p_52, unsigned p_53)
{
    g_54 = g_3;
    return p_53;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_95[i][j][k], "g_95[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_356[i][j], "g_356[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_360, "g_360", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_364[i][j], "g_364[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_403[i][j], "g_403[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_469[i][j], "g_469[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_817[i][j], "g_817[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1244, "g_1244", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    transparent_crc(g_1378, "g_1378", print_hash_value);
    transparent_crc(g_1413, "g_1413", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1832[i][j], "g_1832[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1894[i][j], "g_1894[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1899[i], "g_1899[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
