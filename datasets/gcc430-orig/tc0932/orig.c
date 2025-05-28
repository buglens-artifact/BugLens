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



static unsigned long long g_2 = 1UL;
static unsigned long long g_17[5] = {0xDFADF62858905B8BLL, 0xDFADF62858905B8BLL, 0xDFADF62858905B8BLL, 0xDFADF62858905B8BLL, 0xDFADF62858905B8BLL};
static char g_108 = 0x42L;
static unsigned g_112 = 0x019D44E4L;
static char g_115 = 0L;
static volatile int g_140 = 0L;
static unsigned short g_142 = 1UL;
static unsigned g_152 = 0xF1EF3A5EL;
static short g_184[4][7][6] = {{{0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}}, {{0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}}, {{0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}}, {{0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}, {0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L, 0x37E4L}}};
static volatile unsigned char g_196 = 0xE7L;
static unsigned char g_204 = 0x55L;
static unsigned short g_239 = 0x8324L;
static unsigned short g_302 = 65535UL;
static unsigned char g_307 = 2UL;
static unsigned long long g_340 = 18446744073709551610UL;
static volatile unsigned char g_349 = 0UL;
static unsigned g_364 = 18446744073709551611UL;
static unsigned long long g_365 = 0x322CA6194124E36CLL;
static char g_375[6][10][4] = {{{0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}}, {{0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}}, {{0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}}, {{0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}}, {{0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}}, {{0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}, {0L, (-1L), 8L, 0xE8L}}};
static int g_376 = 0xD69DFC2EL;
static unsigned short g_377 = 0xFAE1L;
static char g_391[9] = {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)};
static unsigned g_392 = 0xBE13D963L;
static volatile long long g_416 = 0x4EDC627800E5EF0ELL;
static volatile unsigned long long g_417 = 0x12A56E4B4E971136LL;
static short g_505 = 0x71F3L;
static char g_506 = 0x74L;
static char g_507 = 0x75L;
static int g_508 = 0x7E3D8B52L;
static volatile char g_511 = 0xADL;
static int g_520 = 0x50FD7E4CL;
static char g_568 = 0xEDL;
static unsigned long long g_572 = 0x7D41B5A750DB596FLL;
static unsigned g_641 = 0x957EB5A8L;
static unsigned short g_666 = 0xEFA3L;
static short g_695 = (-10L);
static unsigned g_707 = 0xCB7AA84AL;
static unsigned g_754[2][2] = {{4UL, 4UL}, {4UL, 4UL}};
static volatile short g_760 = 5L;
static unsigned short g_763 = 65535UL;
static volatile unsigned g_776 = 0x71DFE25EL;
static int g_804 = (-8L);
static volatile unsigned short g_936[3] = {0UL, 0UL, 0UL};
static volatile long long g_960 = 0x32DEB9C04E9FF846LL;
static int g_962 = 0xDE9731E8L;
static unsigned char g_964[9] = {0xFEL, 0xC0L, 0xFEL, 0xC0L, 0xFEL, 0xC0L, 0xFEL, 0xC0L, 0xFEL};
static unsigned char g_976 = 1UL;
static char g_985 = 0x77L;
static unsigned g_1000 = 0x8DAC438FL;
static short g_1010 = 1L;
static long long g_1013 = 0x54A7DB4D0A48CEA0LL;
static unsigned long long g_1016[3] = {0xA7D1DC54B64E8A14LL, 0xA7D1DC54B64E8A14LL, 0xA7D1DC54B64E8A14LL};
static volatile long long g_1077 = 1L;
static volatile unsigned g_1160 = 0xBBD26792L;
static volatile char g_1202 = 0L;
static volatile char g_1205 = 0xC8L;
static unsigned long long g_1207 = 18446744073709551614UL;
static volatile char g_1211[10] = {1L, 0x4FL, 1L, 0x4FL, 1L, 0x4FL, 1L, 0x4FL, 1L, 0x4FL};
static volatile char g_1212 = 0x87L;
static volatile int g_1216 = 0x33332D56L;
static volatile long long g_1217 = (-1L);
static volatile long long g_1219 = 0xA6ACB8D1862244EBLL;
static volatile unsigned g_1223 = 18446744073709551610UL;
static volatile unsigned long long g_1246 = 0x12B7400A7A354E31LL;
static unsigned g_1257 = 4UL;
static volatile unsigned g_1269 = 0xB66ADD9BL;
static unsigned char g_1674 = 0x5CL;
static long long g_1682 = 0x0EE633897149F7D4LL;
static unsigned long long g_1701 = 18446744073709551613UL;
static volatile int g_1726 = 0L;
static volatile unsigned short g_1869 = 65533UL;
static long long g_1891 = (-9L);
static unsigned short g_1892 = 65533UL;
static unsigned g_1989 = 0x496EEBE1L;
static unsigned short g_2013[6][5] = {{1UL, 0UL, 1UL, 0UL, 1UL}, {1UL, 0UL, 1UL, 0UL, 1UL}, {1UL, 0UL, 1UL, 0UL, 1UL}, {1UL, 0UL, 1UL, 0UL, 1UL}, {1UL, 0UL, 1UL, 0UL, 1UL}, {1UL, 0UL, 1UL, 0UL, 1UL}};
static unsigned long long g_2150 = 1UL;
static volatile unsigned short g_2152 = 0x3105L;
static volatile short g_2155 = 0xAFA0L;
static short g_2160 = (-6L);
static char g_2161[3] = {0x9AL, 0x9AL, 0x9AL};
static volatile int g_2162 = 0L;
static unsigned short g_2163 = 9UL;



static unsigned long long func_1(void);
static long long func_9(unsigned p_10, unsigned long long p_11, unsigned char p_12, short p_13, unsigned char p_14);
static long long func_20(unsigned char p_21, long long p_22, unsigned p_23, short p_24);
static const unsigned char func_28(unsigned p_29, unsigned short p_30, long long p_31);
static unsigned func_32(long long p_33, unsigned long long p_34, short p_35, unsigned p_36);
static unsigned char func_48(unsigned p_49, int p_50, unsigned char p_51);
static unsigned char func_58(unsigned long long p_59, int p_60, unsigned p_61, unsigned char p_62);
static const unsigned long long func_69(char p_70, char p_71, unsigned p_72);
static unsigned short func_78(const char p_79, int p_80);
static const unsigned func_83(long long p_84, unsigned p_85, int p_86, long long p_87);
static unsigned long long func_1(void)
{
    unsigned char l_39 = 248UL;
    int l_1237 = 0xC880161BL;
    char l_1250[9] = {0L, 0x20L, 0L, 0x20L, 0L, 0x20L, 0L, 0x20L, 0L};
    int l_1273 = (-7L);
    short l_1333 = (-3L);
    short l_1390 = 0x7310L;
    unsigned l_1419 = 4294967294UL;
    unsigned short l_1468 = 0xA19EL;
    char l_1601 = 0x2BL;
    int l_1725[7] = {0x3BCEC10DL, 0xCD6E1281L, 0x3BCEC10DL, 0xCD6E1281L, 0x3BCEC10DL, 0xCD6E1281L, 0x3BCEC10DL};
    const unsigned char l_1815 = 4UL;
    char l_1834 = 0x3CL;
    unsigned char l_2022 = 0UL;
    int l_2068 = 0xC290CE54L;
    short l_2156 = 0x10A3L;
    unsigned l_2157 = 0x69D52FA9L;
    int i;
    if ((6UL >= g_2))
    {
        unsigned short l_25 = 1UL;
        int l_1272 = 4L;
        unsigned l_1356 = 1UL;
        unsigned l_1399 = 0x0BA4FB19L;
        unsigned long long l_1418 = 1UL;
        unsigned l_1431 = 4294967295UL;
        unsigned l_1449 = 4294967295UL;
        unsigned l_1563 = 2UL;
        unsigned long long l_1608[1][4][7] = {{{8UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL}, {8UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL}, {8UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL}, {8UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL, 18446744073709551615UL, 0xE0DFD5E2AD6DD0F8LL, 18446744073709551615UL}}};
        int l_1678 = 3L;
        int l_1681[2];
        unsigned short l_1705 = 1UL;
        unsigned l_1755 = 4294967294UL;
        const long long l_1772 = 0L;
        char l_1784 = 0x2CL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1681[i] = 0xA60E0574L;
        if ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((l_1272 = (((g_2 > func_9((safe_mod_func_int32_t_s_s((0x3631E19EL | (g_17[3]--)), (func_20(l_25, ((safe_lshift_func_uint8_t_u_u(func_28(func_32(g_2, (safe_rshift_func_int8_t_s_s(g_2, 4)), l_25, l_39), (l_1237 = g_1013), g_985), g_1010)) >= l_25), l_1250[8], g_2) & g_1010))), g_985, l_1250[5], g_1010, g_985)) | g_985) & g_2)) >= l_1273) & g_985), 0UL)) ^ l_25), l_1250[0])), 0xE8CBL)))
        {
            return g_1211[1];
        }
        else
        {
            const short l_1279 = 1L;
            int l_1287 = 0xBC829861L;
            unsigned l_1430 = 0x0618B32BL;
            const unsigned long long l_1469 = 0xA5F2A55FE3DBBACBLL;
            char l_1470 = 0x0AL;
            int l_1549 = 0L;
            int l_1699 = 0x36022677L;
            int l_1700[10] = {(-4L), 0x7AEA1A99L, (-4L), 0x7AEA1A99L, (-4L), 0x7AEA1A99L, (-4L), 0x7AEA1A99L, (-4L), 0x7AEA1A99L};
            int i;
lbl_1582:
            for (g_666 = 0; (g_666 != 7); g_666++)
            {
                long long l_1286 = 0x0E0B14EAC6EAF2F0LL;
                const char l_1310 = (-8L);
                int l_1338 = (-9L);
                long long l_1451 = 0x393D45A0966B6D2BLL;
                for (g_142 = 11; (g_142 >= 22); g_142 = safe_add_func_int32_t_s_s(g_142, 6))
                {
                    unsigned char l_1278 = 255UL;
                    if (l_1278)
                        break;
                    g_962 &= (g_1211[8] <= l_1279);
                    for (g_976 = 10; (g_976 >= 14); g_976 = safe_add_func_uint32_t_u_u(g_976, 5))
                    {
                        if (l_25)
                            break;
                        g_804 ^= (safe_mul_func_uint8_t_u_u(((g_962 = (safe_rshift_func_uint16_t_u_s(g_204, l_1286))) || (l_1287 |= l_1279)), (((safe_rshift_func_int8_t_s_u((l_1272 &= func_78(g_1016[2], (1UL | (((safe_mod_func_int16_t_s_s(func_78(((((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_505, ((!(safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((g_1013 |= func_20(g_985, (safe_sub_func_int32_t_s_s(func_78((safe_sub_func_uint16_t_u_u(func_20((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_392 > (g_349 & g_763)), 5)), g_307)), g_695, l_1286, l_1279), 0xE15CL)), g_375[4][7][3]), g_520)), l_1286, g_115)) && l_1286), 1UL)) & 0xA4L), g_1207)), g_505))) | 8L))), g_108)) && g_520) != 0xA159DE50L) < l_1279), l_1286), 0x0A07L)) >= 0x2A5BL) == g_964[7])))), 3)) && g_1269) || 0xC716C43A90589C26LL)));
                        if (g_1000)
                            break;
                    }
                    if (l_1310)
                        continue;
                }
                l_1272 = (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((l_1287 = (1L == (+(((safe_rshift_func_uint8_t_u_u(g_1016[2], 7)) != g_763) == (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((g_707 == (safe_mod_func_uint32_t_u_u(l_1286, func_78((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_1272 | 1L), (safe_sub_func_uint32_t_u_u((0xD1BA3184D3C16DB4LL || (safe_lshift_func_int8_t_s_u((g_391[0] = g_1016[2]), 2))), 0xCD0B864BL)))), l_25)), g_1246)))), l_1333)) < g_184[2][0][3]) || g_340), 0)), l_1287)))))) >= g_307), l_1250[2])), g_1010));
                if ((g_417 && (g_505 ^ (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_1333, ((l_1338 = g_1016[1]) >= 0x852033AF75E3265BLL))), (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(g_364, (safe_rshift_func_uint8_t_u_s((l_1273 |= l_1287), 7)))) < (((g_184[2][5][0] = (safe_mod_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((g_365 ^= (l_1272 ^= (g_1257 == g_776))), 1UL)), g_964[0])) > g_505) == l_1287), g_964[7]))) || l_1286) == 0x8006L)), l_1310)))))))
                {
                    if (g_204)
                        break;
                    return g_307;
                }
                else
                {
                    long long l_1351[4][10][6] = {{{0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}}, {{0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}}, {{0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}}, {{0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}, {0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L), 0x0C630588F868572ALL, 0x0C630588F868572ALL, (-1L)}}};
                    int l_1375[1];
                    unsigned char l_1417 = 0x0AL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1375[i] = 0x121C4A7FL;
                    if (l_1351[0][0][0])
                        break;
                    if ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_1219, l_1356)), (func_20(g_707, g_375[4][7][3], g_572, (safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(l_1279, ((safe_add_func_uint8_t_u_u(g_568, (((l_1287 = (safe_sub_func_uint8_t_u_u((g_568 == (1L || g_108)), l_1333))) > g_142) & g_1016[1]))) < g_184[2][1][1]))), g_2))) ^ 0x06C074E1L))))
                    {
                        return l_1338;
                    }
                    else
                    {
                        char l_1371 = 0x30L;
                        int l_1374[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1374[i] = 1L;
                        g_140 = l_1286;
                        g_962 = ((l_1272 <= (safe_rshift_func_uint8_t_u_s((l_1375[0] |= (safe_mul_func_uint16_t_u_u(0xA92CL, ((safe_mul_func_uint8_t_u_u((g_976 = (func_28(g_520, (l_1371 = (g_239 = (g_142 &= 0xFF09L))), func_20((++g_307), (func_20(l_1374[0], g_108, (0UL || (l_1279 > func_20(l_1310, l_25, g_108, g_1269))), l_1338) >= g_976), g_754[0][0], g_152)) == l_1286)), g_375[5][8][2])) <= 0x3B195244L)))), g_392))) >= g_17[3]);
                        l_1273 = (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0x4481L, func_20((safe_add_func_int8_t_s_s(((0x28E4B8C76E57907DLL & (func_83((((1L <= (safe_rshift_func_uint16_t_u_s((g_763 |= ((l_1390 <= (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_83(l_25, l_1287, (safe_sub_func_uint8_t_u_u(g_375[2][6][2], (((!l_1374[0]) | (l_1338 = ((g_142 & g_364) > l_1310))) >= 1UL))), g_641), l_1351[0][0][0])), g_377)) & l_1399) | 0x66CEE591EAC2BB35LL), 0x03BBL))) > g_964[7])), 15))) & (-3L)) || 0xCC2CL), l_1351[0][0][0], l_1310, g_506) != g_695)) || 7UL), 0x64L)), l_1375[0], g_365, l_1374[0]))), g_568)), 0xAC4927A11567ADD8LL)), l_1272));
                        l_1419 = ((safe_add_func_int8_t_s_s((((g_964[0] >= (((safe_unary_minus_func_int32_t_s(((safe_div_func_uint64_t_u_u(l_1371, l_1286)) > 0x7FL))) && (((safe_lshift_func_int16_t_s_u(g_707, 6)) == (0x85093A41L >= ((safe_add_func_uint32_t_u_u((g_1000++), (func_58(g_375[4][7][3], ((safe_sub_func_uint16_t_u_u(func_20(l_1375[0], (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_365, l_1390)), 2L)), g_115, l_1351[0][0][0]), g_1202)) == 1UL), l_1351[0][0][0], g_707) >= g_375[1][8][0]))) & g_1257))) >= g_2)) <= l_1417)) && 0xA9E11B5BAD05F931LL) ^ l_1338), l_1418)) < g_392);
                    }
                    if (l_1399)
                        break;
                }
                if (((safe_sub_func_int16_t_s_s((l_1250[8] & func_78(l_1250[8], (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(((l_25 > func_20(l_1418, g_142, g_1219, (l_1273 ^= (safe_div_func_int64_t_s_s(func_20((g_307--), (g_375[0][5][3] == l_1430), (+9UL), l_1279), l_1431))))) < 0x0A61064E541028A9LL), g_391[4])) <= l_1431), l_1250[5])))), 0UL)) > l_1279))
                {
                    int l_1453[1][7] = {{4L, 0x27435A8EL, 4L, 0x27435A8EL, 4L, 0x27435A8EL, 4L}};
                    int i, j;
                    for (g_1013 = (-26); (g_1013 >= (-24)); g_1013++)
                    {
                        unsigned short l_1450 = 0x3330L;
                        int l_1452 = 0xCEB69B03L;
                        l_1452 = (g_962 = ((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((0x77C2E239L ^ (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(l_1338, l_1338)), (safe_mul_func_uint16_t_u_u(l_1237, (((l_1450 &= (safe_lshift_func_int8_t_s_u(l_1449, l_1279))) > l_1338) & (0UL ^ func_83(l_1390, g_1246, l_1451, g_568))))))))), g_666))) <= 0x1DL), l_1431)), 0xF7C191F5L)) != l_1310));
                        l_1453[0][4] = g_641;
                    }
                    g_962 = (g_307 != (safe_div_func_uint8_t_u_u((g_976 = g_976), g_302)));
                    return g_1207;
                }
                else
                {
                    if (g_1211[0])
                        break;
                }
            }
            if ((((1UL | g_115) || func_28((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_1211[8] & (func_78((safe_mul_func_uint16_t_u_u((4294967295UL && ((safe_add_func_int8_t_s_s(g_392, ((safe_sub_func_int16_t_s_s((4294967295UL != (l_1468 > 0x1251L)), 65530UL)) > l_1469))) <= l_1430)), l_1279)), g_1010) <= 18446744073709551608UL)), l_1237)), l_1470)) ^ g_964[7]), g_1010)), l_1287, l_1468)) & l_1272))
            {
                int l_1489 = 0L;
                unsigned char l_1548 = 251UL;
                int l_1574 = 8L;
                if (((safe_mod_func_uint8_t_u_u(4UL, 1UL)) ^ g_964[7]))
                {
lbl_1620:
                    for (g_2 = (-13); (g_2 != 31); g_2 = safe_add_func_int16_t_s_s(g_2, 6))
                    {
                        l_1489 = (g_962 &= ((func_28((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((g_1216 >= (safe_add_func_uint32_t_u_u(g_142, (g_520 &= (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((0UL || g_508), 0xD98BL)) != ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(254UL, (g_985 = ((0xA1DC25B69BEE2C47LL | 0x634A56A839C8CB1DLL) > func_78((g_1016[2] != 0x0DE62ACE2ACF4120LL), g_364))))), g_568)) > g_364)), 1L)))))), 2)) <= g_2), g_804)), g_763, g_1257) & l_1273) && g_508));
                        l_1287 &= 0x670DD6B1L;
                    }
                    for (g_142 = 0; (g_142 != 16); g_142 = safe_add_func_uint32_t_u_u(g_142, 1))
                    {
                        int l_1492[5] = {8L, 0x892678F3L, 8L, 0x892678F3L, 8L};
                        int i;
                        return l_1492[1];
                    }
                }
                else
                {
                    unsigned l_1493[6] = {0x5866FE1FL, 0x5866FE1FL, 0x9734955AL, 0x5866FE1FL, 0x5866FE1FL, 0x9734955AL};
                    int l_1528 = 0xB001B57FL;
                    unsigned short l_1562 = 0UL;
                    int l_1579 = 0L;
                    int i;
                    for (l_1356 = 0; (l_1356 <= 4); l_1356 += 1)
                    {
                        return l_1493[0];
                    }
                    for (g_508 = (-6); (g_508 > 25); g_508 = safe_add_func_uint8_t_u_u(g_508, 4))
                    {
                        short l_1502 = 0x89FEL;
                        g_520 = (safe_sub_func_int8_t_s_s((0xF7L | (g_392 <= (g_1013 = (((safe_add_func_uint8_t_u_u(0x03L, (g_506 = ((0xF61E649967F8DA82LL != l_1493[4]) & (g_204 && 3UL))))) || (0xDBL != l_1272)) ^ l_1493[0])))), 0x3DL));
                        g_520 = l_1502;
                        if (g_204)
                            goto lbl_1583;
                    }
                    if ((l_1272 != (g_505 < func_69(g_976, g_1205, l_1489))))
                    {
                        unsigned l_1527 = 0xFA8E2CA9L;
                        int l_1547 = 0x15F42AB5L;
                        unsigned long long l_1550 = 2UL;
                        g_962 = (((safe_rshift_func_uint16_t_u_u(1UL, 4)) > (safe_add_func_int8_t_s_s(((l_1527 = func_58(((func_20((safe_rshift_func_int16_t_s_u((g_695 = (safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((g_302 < (((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_1469, g_365)), ((l_1489 >= (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(l_1272, (safe_lshift_func_int8_t_s_s((l_1419 != 4294967295UL), ((safe_add_func_int64_t_s_s((0xA5D7919BL != 4294967286UL), 0xA66B23940474C84DLL)) >= g_391[1]))))) > 5L), 0xF345C4CFL))) ^ 7L))), 0xACD2L)) | g_152) || (-10L))), g_1216)), 5))), 1)), l_1399, l_1418, l_1493[1]) || l_1449) || 65535UL), g_239, g_17[3], l_1449)) <= 0x48L), 0x6CL))) != 0x50L);
                        l_1528 = g_152;
                        g_804 ^= (l_1549 = (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((~(safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((1L ^ 0x644BL), (safe_div_func_uint32_t_u_u((l_1287 = ((safe_div_func_int8_t_s_s(l_1250[8], g_1077)) > (safe_div_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((-8L), func_20((safe_sub_func_uint16_t_u_u(((g_695 & (func_20((0xD6L < 0xCFL), (l_1547 = (l_1430 | 0xACL)), g_695, g_2) | g_507)) || 0x2E158350L), (-1L))), l_1548, g_392, l_1273))) == l_1333), g_152)))), g_505)))), 12))), g_17[3])), l_1469)));
                        g_962 = (l_1287 = l_1550);
                    }
                    else
                    {
                        char l_1555 = 0x07L;
                        g_520 |= (l_1272 = (safe_rshift_func_uint16_t_u_u(func_28((func_69(((safe_mod_func_int8_t_s_s(1L, (g_568 = l_1555))) & (func_58((safe_sub_func_int64_t_s_s(l_1469, (safe_sub_func_uint16_t_u_u(0x215BL, ((safe_rshift_func_int16_t_s_s(0x2B38L, (l_1549 < l_1430))) || g_1217))))), g_572, l_1272, l_1562) || l_1555)), l_1555, l_1356) ^ l_1418), g_964[1], l_1563), 14)));
                        l_1528 &= 1L;
                        l_1272 = 1L;
                        l_1272 = func_9((1L == ((g_1013 = (safe_mod_func_int32_t_s_s(l_1237, l_1548))) & l_1431)), (safe_add_func_uint32_t_u_u((0x0CC0F29AL > (g_204 == (((l_1273 = l_1418) >= g_307) < (((g_184[1][5][4] = ((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((g_1000--), (safe_add_func_int8_t_s_s(l_1449, l_1493[0])))), g_376)), 0xBC757628L)) != l_25)) == g_377) | g_505)))), 1L)), g_375[1][3][0], l_1579, g_142);
                    }
                }
                g_520 = g_985;
                if (l_1250[8])
                {
lbl_1583:
                    for (g_505 = (-2); (g_505 >= (-10)); --g_505)
                    {
                        if (g_239)
                            goto lbl_1582;
                    }
                    return g_695;
                }
                else
                {
                    unsigned l_1598 = 4294967286UL;
                    int l_1609[1][1][3];
                    long long l_1675 = 0xAB21AD62922C7B25LL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1609[i][j][k] = 0x01F0BF5BL;
                        }
                    }
                    g_140 = (l_1287 ^ (safe_mod_func_uint32_t_u_u((!l_1548), (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(g_140, g_1010)) < 1UL), (safe_add_func_uint32_t_u_u((g_112 = ((((g_184[1][5][4] != 9L) && l_1430) | 0x84FEEEEDL) > g_375[4][7][3])), 0UL)))))));
                    if ((safe_mod_func_uint64_t_u_u(l_1237, (safe_mul_func_uint8_t_u_u((g_976 = (safe_add_func_int16_t_s_s((l_1548 | func_20(l_1598, l_1449, (g_152 = (g_568 && (l_1608[0][0][6] ^= ((safe_lshift_func_uint8_t_u_u((l_1601 = g_1016[2]), (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_1489, (g_1160 | (g_695 > l_1431)))), g_754[0][0])), l_1237)) ^ 0L) <= l_1333))) <= g_108)))), g_964[7])), g_985))), l_1418)))))
                    {
                        unsigned l_1610 = 0x27B0E54CL;
                        int l_1619 = 8L;
                        g_520 = g_1212;
                        l_1610--;
                        g_520 ^= (func_78(g_417, l_1598) >= (safe_rshift_func_int16_t_s_u(func_20((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(func_20(l_1273, l_1272, g_376, g_17[4]), (l_1619 |= g_391[7]))), 0x4A269C52L)), l_1287, g_763, g_184[1][5][4]), 7)));
                        if (g_507)
                            goto lbl_1620;
                    }
                    else
                    {
                        return l_1418;
                    }
                    for (l_1273 = 0; (l_1273 != (-25)); l_1273 = safe_sub_func_int8_t_s_s(l_1273, 3))
                    {
                        unsigned short l_1635 = 0x3FB0L;
                        l_1574 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((7L < (g_1223 >= (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(g_184[3][1][5], 4294967295UL)), 4)))), 7)), ((l_1237 |= (safe_div_func_int64_t_s_s(l_1635, ((safe_mul_func_uint8_t_u_u(0x53L, ((g_1016[1]--) & ((safe_mod_func_int32_t_s_s((l_1609[0][0][0] || (g_17[3]--)), (~(safe_add_func_uint32_t_u_u(g_365, (safe_mul_func_int8_t_s_s((l_1287 = (safe_div_func_int32_t_s_s(0xC8B8F291L, l_1333))), l_1470))))))) != l_1574)))) & g_204)))) <= g_365))), g_184[0][6][2]));
                        return l_1598;
                    }
                    g_520 &= (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((+(-1L)), (l_1675 = ((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(6UL, (!g_2))), (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_1598, 15)), func_9(((safe_add_func_int32_t_s_s((((l_1574 ^= g_2) && (safe_rshift_func_int8_t_s_s(l_1489, (((l_1272 = (g_17[3] < l_1449)) <= (g_1013 &= 0xC7292B9EC70E2D98LL)) <= l_1430)))) ^ g_239), l_1489)) <= l_1468), g_976, l_1609[0][0][2], g_184[1][5][4], g_1674))), g_375[4][7][3])), g_754[1][0])))), g_17[3])) < g_505)))), l_25)), g_391[4]));
                }
                for (g_376 = 0; (g_376 <= 19); g_376++)
                {
                    unsigned long long l_1683 = 1UL;
                    int l_1692 = 0x3AED5338L;
                    if (l_1431)
                        break;
                    if (l_1678)
                    {
                        char l_1679 = 0x39L;
                        int l_1680 = (-5L);
                        --l_1683;
                        if (l_1683)
                            break;
                        g_520 = (func_69(func_20((safe_add_func_uint64_t_u_u(g_196, ((safe_div_func_int8_t_s_s((safe_mod_func_int64_t_s_s((((((l_1287 = (l_1549 = (l_1692 = 7L))) != (safe_add_func_uint64_t_u_u((g_507 || (l_1700[3] = ((safe_sub_func_int8_t_s_s(l_1418, (g_985 > l_1470))) == (l_1699 = (g_962 = (l_1683 == (safe_rshift_func_uint8_t_u_s(((g_152 != (-1L)) <= l_1430), l_1468)))))))), g_1013))) && 0x2E8F8AF4352B3426LL) < l_1250[8]) != g_392), 1L)), g_505)) | g_365))), g_1701, l_1679, l_1279), l_1574, l_1683) == 0x18E6CB05L);
                    }
                    else
                    {
                        unsigned l_1702 = 18446744073709551615UL;
                        ++l_1702;
                        ++l_1705;
                        g_962 = g_1219;
                        l_1273 = (g_804 |= g_302);
                        if (l_1702)
                            goto lbl_1773;
                    }
                    g_520 = l_1489;
                }
            }
            else
            {
                short l_1724 = 0x76C8L;
                for (g_804 = 1; (g_804 <= 9); g_804 += 1)
                {
                    unsigned long long l_1732 = 18446744073709551608UL;
                    const int l_1733 = 0L;
                    int l_1734 = (-8L);
                    for (g_365 = 0; (g_365 <= 0); g_365 += 1)
                    {
                        int i;
                        g_520 = 0x2FB5B128L;
                        g_520 = l_1700[g_804];
                        l_1681[1] = ((((-7L) | 9L) >= (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((safe_add_func_uint64_t_u_u((g_17[3] |= l_1700[(g_365 + 4)]), (safe_mul_func_int16_t_s_s(l_1250[2], 0UL)))) | (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_985, ((safe_add_func_int32_t_s_s(l_1724, (((g_1010 = l_1724) & (l_1700[g_804] == 1L)) || l_1725[2]))) != l_1705))), g_1016[2])), 0x53L))) ^ 0xDD25L) | g_1726), 0xFCL)), 0x4AL))) > g_112);
                    }
                    for (l_1273 = 0; (l_1273 <= 0); l_1273 += 1)
                    {
                        unsigned char l_1727 = 0x77L;
                        --l_1727;
                        g_962 = g_507;
                        g_520 = func_20(((safe_lshift_func_int16_t_s_u(9L, l_1399)) & func_28(g_1211[2], (l_1734 = ((((0xF21CF9EF7117000BLL <= ((l_1732 = 1UL) | l_1733)) && (l_1724 < l_1601)) == 0xE20AL) >= 0x73L)), l_1279)), g_1701, g_506, g_976);
                        l_1700[2] ^= ((safe_mul_func_int16_t_s_s(g_349, (safe_mul_func_int8_t_s_s((g_754[0][1] > ((l_1734 = (++g_964[7])) || l_1287)), l_1732)))) < ((safe_lshift_func_int8_t_s_u(1L, 2)) ^ (func_78((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(func_20(g_1010, l_1724, (g_1682 >= g_506), g_1207), l_1724)) == g_302), g_666)), l_1733) <= g_364)));
                    }
                    for (l_1272 = 0; (l_1272 >= 0); l_1272 -= 1)
                    {
                        return g_1016[2];
                    }
                }
            }
            l_1725[2] &= l_1390;
            l_1681[1] = (l_1700[3] = (((safe_mul_func_int16_t_s_s(l_1470, (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((l_1549 = (0x69L || g_1257)) ^ (g_962 ^= (1L < (safe_lshift_func_uint16_t_u_u(l_1755, 5))))), g_1223)), (safe_add_func_int32_t_s_s((g_520 &= (((safe_div_func_uint16_t_u_u(1UL, g_1257)) < (safe_add_func_uint16_t_u_u(g_964[0], g_754[1][0]))) & g_17[3])), 4294967292UL)))))) != l_1449) || g_340));
        }
lbl_1773:
        g_962 |= (l_1681[1] = ((((safe_lshift_func_int8_t_s_u(l_1250[1], g_976)) || ((func_78(g_1016[2], (safe_lshift_func_uint16_t_u_u(g_1219, 13))) <= func_20((safe_lshift_func_uint8_t_u_s(((0x090CB786L == func_20((safe_lshift_func_int8_t_s_u(l_1250[8], (l_1725[3] < g_520))), l_1678, l_1399, l_39)) || l_1755), l_1725[3])), g_239, l_1390, g_964[8])) <= l_1772)) ^ g_1257) && g_936[1]));
        l_1272 = ((safe_mod_func_uint16_t_u_u((0xBE74646EF84DAFFELL || (g_365 = ((safe_sub_func_uint8_t_u_u(g_340, 0x5BL)) || 1L))), ((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((l_1784 ^= g_964[7]) >= (((safe_sub_func_int32_t_s_s(7L, g_1160)) && g_1010) || l_1725[2])) && l_1681[1]), g_1016[2])), l_1681[0])), 0)) ^ 0x51L))) & l_1431);
        for (g_142 = 12; (g_142 > 20); g_142 = safe_add_func_int32_t_s_s(g_142, 1))
        {
            unsigned char l_1803 = 252UL;
            for (g_763 = 0; (g_763 >= 25); g_763 = safe_add_func_int64_t_s_s(g_763, 3))
            {
                char l_1804 = 0x3DL;
                int l_1812 = 0L;
                if ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u((func_78((g_507 = (func_78(g_505, (((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_s(((func_20(g_568, (safe_mul_func_int8_t_s_s((g_375[4][7][3] ^= g_17[2]), (l_1563 && ((safe_mod_func_uint16_t_u_u(65535UL, g_707)) != (-1L))))), ((safe_mul_func_uint16_t_u_u((l_1803 || l_1804), 1L)) < l_1804), l_1803) <= 0xFDL) & g_763), l_1804)))) > l_1237) != g_140)) ^ 18446744073709551611UL)), g_184[3][3][0]) <= g_1682), l_1468)))))
                {
                    unsigned l_1807[6][9][4] = {{{4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}}, {{4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}}, {{4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}}, {{4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}}, {{4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}}, {{4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}, {4294967294UL, 0x154F839CL, 4294967289UL, 4294967290UL}}};
                    int i, j, k;
                    g_962 = (((0x66L != 0x86L) || (g_340 > (safe_add_func_uint64_t_u_u(g_666, l_1807[0][4][2])))) <= (safe_mod_func_uint16_t_u_u(0xC6D1L, (+(safe_add_func_int8_t_s_s(0x60L, (l_1803 | (0xC7L ^ l_1803))))))));
                }
                else
                {
                    unsigned l_1817 = 0UL;
                    l_1812 = (g_520 = g_391[1]);
                    for (g_1013 = 10; (g_1013 < 12); g_1013 = safe_add_func_int64_t_s_s(g_1013, 2))
                    {
                        unsigned char l_1816 = 0xEDL;
                        g_520 = func_78(l_1815, l_1804);
                        l_1816 = l_1390;
                        if (l_1817)
                            break;
                    }
                }
            }
        }
    }
    else
    {
        unsigned long long l_1822 = 2UL;
        short l_1864[6][6][7] = {{{(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}}, {{(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}}, {{(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}}, {{(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}}, {{(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}}, {{(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}, {(-1L), 0x2DBAL, 0L, (-8L), 0x1727L, 9L, 0L}}};
        int l_1895 = (-1L);
        int l_1905 = 0xAF27DAF5L;
        int l_2050[7] = {(-10L), 0x5182786CL, (-10L), 0x5182786CL, (-10L), 0x5182786CL, (-10L)};
        int i, j, k;
        if ((safe_div_func_uint64_t_u_u((0x8DBBL > (l_1390 >= 0UL)), ((~l_1333) | (safe_sub_func_uint64_t_u_u(l_1822, 0xEF36B74C42D7A95FLL))))))
        {
            short l_1833 = 4L;
            int l_1838 = 1L;
            int l_1887 = 0xF7779CCBL;
            int l_1890 = 0L;
            if ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0x506EL, 0x229AL)), ((!((g_695 = (((((safe_rshift_func_uint16_t_u_u(0UL, 13)) >= (safe_add_func_uint64_t_u_u((g_1701 = ((g_707 = (0L && (((-3L) >= func_69(l_1833, (l_1725[2] = g_1682), g_508)) ^ g_754[0][1]))) || g_572)), l_1833))) != 0xE6L) && 0xCC8CE74AL) ^ 5L)) < l_1333)) & g_754[0][1]))), l_1834)))
            {
                g_140 = l_1833;
                if (g_377)
                    goto lbl_1839;
lbl_1839:
                for (g_2 = 0; (g_2 > 10); ++g_2)
                {
                    unsigned short l_1837 = 0xF7E4L;
                    if (l_1822)
                        break;
                    l_1837 = 7L;
                    l_1838 = l_1822;
                    g_804 &= l_1822;
                }
                return l_1822;
            }
            else
            {
                unsigned long long l_1881 = 0xD9FB95AA421B9CB1LL;
                int l_1886 = 0xD1744A04L;
                int l_1888 = (-1L);
                int l_1889 = 0L;
                for (l_1237 = (-13); (l_1237 < 23); l_1237 = safe_add_func_int64_t_s_s(l_1237, 1))
                {
                    unsigned long long l_1879 = 0xF4C1E4D14E226B3DLL;
                    int l_1880 = 0x07AA0885L;
                    for (g_108 = 1; (g_108 <= 4); g_108 += 1)
                    {
                        int i;
                        g_804 |= (+((g_17[g_108] && (safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((l_1273 = g_375[2][4][3]), 0)) | (safe_lshift_func_uint16_t_u_u(l_1237, 15))), (safe_mod_func_uint8_t_u_u((((0UL && func_20(g_1077, (safe_rshift_func_uint16_t_u_s(func_20(((((g_666 & g_391[4]) & g_505) != (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((g_1013 = (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((~(!((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((1L & g_17[g_108]), g_754[0][0])), 4)) ^ l_1822))), g_377)), 5))), g_184[1][2][0])), 9))) || g_17[g_108]), g_365, g_754[1][0], g_641), 13)), g_112, g_1674)) || l_1864[3][2][6]) | g_364), 255UL))))) || g_964[6]));
                        g_804 = (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((((g_1869 ^ (safe_add_func_int16_t_s_s((((g_1010 && (((safe_rshift_func_uint16_t_u_u(((((((l_1838 < (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_1864[2][3][6], 0x35L)), l_1822))))) < (l_1725[1] = (g_505 != g_17[g_108]))) < ((l_1879 = g_1682) & g_1207)) < l_39) >= g_302) <= l_1880), 4)) || g_1000) < g_307)) >= l_1880) & g_152), l_1250[2]))) || l_1880) & 0L), 13)) ^ 0xCD0F93B1L), l_1881));
                        if (g_1212)
                            continue;
                    }
                }
                g_962 = (safe_rshift_func_uint16_t_u_u((g_302 |= (safe_rshift_func_int8_t_s_s(g_985, 0))), 0));
                g_1892++;
                for (g_804 = 0; (g_804 <= 8); g_804 += 1)
                {
                    int l_1898 = 0xD1D9CA25L;
                    int i;
                    l_1895 ^= g_391[g_804];
                    for (l_1237 = 0; (l_1237 <= 8); l_1237 += 1)
                    {
                        int i;
                        g_140 = l_1250[g_804];
                    }
                    for (g_1000 = 1; (g_1000 <= 8); g_1000 += 1)
                    {
                        l_1898 = (safe_rshift_func_uint16_t_u_s(g_391[g_804], 3));
                    }
                }
            }
        }
        else
        {
            long long l_1901 = (-10L);
            int l_1929 = 7L;
            unsigned char l_1965 = 0x19L;
            unsigned long long l_2059 = 0x4B995BDCFD88BB28LL;
            unsigned char l_2085 = 0x74L;
            unsigned l_2101 = 0x3E357636L;
            int l_2151 = 0xEBE809C2L;
lbl_1992:
            for (g_804 = (-5); (g_804 >= 9); g_804 = safe_add_func_uint16_t_u_u(g_804, 8))
            {
                unsigned long long l_1904 = 0xA77AF111D4D8BFF2LL;
                int l_1962 = 0x9B9EADB1L;
                unsigned char l_1963[10] = {0UL, 0x7EL, 0UL, 0x7EL, 0UL, 0x7EL, 0UL, 0x7EL, 0UL, 0x7EL};
                int i;
                l_1905 &= (l_1901 > (l_1895 = ((safe_sub_func_int32_t_s_s((+(g_340 != l_1904)), func_69(((g_307 |= g_1016[2]) | g_204), g_962, g_1211[8]))) < (l_1601 > 0x7601AB5AB6B316FDLL))));
                for (g_572 = 0; (g_572 < 36); g_572 = safe_add_func_uint16_t_u_u(g_572, 9))
                {
                    for (g_152 = (-6); (g_152 == 43); g_152 = safe_add_func_int8_t_s_s(g_152, 7))
                    {
                        int l_1910 = (-10L);
                        return l_1910;
                    }
                }
                if (((0x0939L == func_69((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(func_28(g_375[4][9][0], l_1864[3][2][6], func_9((safe_div_func_int8_t_s_s(g_572, (safe_sub_func_int8_t_s_s(g_1205, (safe_lshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(func_78((safe_lshift_func_int16_t_s_s(0x414BL, g_763)), (l_1725[0] ^= ((+((((safe_mod_func_uint32_t_u_u(((((1L && ((+(g_115 < l_1419)) ^ l_1901)) >= l_1904) >= (-7L)) ^ l_1864[3][2][6]), 0xD1749CC4L)) <= g_364) || 0xC0A8L) & l_1864[2][5][6])) & (-3L)))), g_1016[1])), 1)))))), l_1904, l_1901, l_1904, g_964[8])), g_763)), g_695)) <= g_964[5]) | 0xD0L), l_1864[5][1][6])), l_1901, g_508)) > l_1864[5][4][6]))
                {
                    long long l_1932 = 1L;
                    unsigned l_1938 = 0x9EFB6325L;
                    int l_1964[5][6][6] = {{{0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}}, {{0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}}, {{0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}}, {{0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}}, {{0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}, {0xBD7C977EL, (-1L), 0x438B72F8L, 1L, 1L, 0xFB757CD4L}}};
                    int i, j, k;
                    l_1929 &= (g_1223 > l_1864[3][2][6]);
                    g_376 = (g_1682 & (l_1273 > 0L));
                    for (l_1468 = 11; (l_1468 != 33); l_1468++)
                    {
                        char l_1937 = 0x9AL;
                        if (l_1932)
                            break;
                        l_1937 = (safe_mod_func_int32_t_s_s(l_1932, (safe_mul_func_int16_t_s_s(1L, g_964[6]))));
                        g_520 = (g_962 = (l_1938 >= (safe_lshift_func_int16_t_s_u((l_1964[2][1][0] = (g_1010 &= ((safe_unary_minus_func_int64_t_s(l_1904)) | func_28((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_1929, (safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0x19BFL, ((((g_976 == l_1895) >= (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_1419, (safe_mul_func_int8_t_s_s(func_69(func_28((g_364 = (g_1257--)), (l_1962 |= (safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(func_28((g_641 = g_349), g_1701, l_1250[1]), g_568)), g_506))), g_520), g_1892, l_1895), 6L)))), g_507))) ^ g_375[0][5][2]) | g_763))), l_1333)))), l_1963[3])), g_506, g_754[0][1])))), g_707))));
                        return g_364;
                    }
                }
                else
                {
                    unsigned short l_1981 = 1UL;
                    int l_1984[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1984[i] = 3L;
                    for (g_1701 = 0; (g_1701 <= 6); g_1701 += 1)
                    {
                        int l_1968 = 4L;
                        int i;
                        --l_1965;
                        l_1968 &= l_1725[g_1701];
                    }
                    l_1984[1] = (+(safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((g_375[4][7][3] |= ((-1L) != g_391[4])), (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_140, (safe_lshift_func_int8_t_s_u(l_1905, 5)))), g_508)))) ^ ((((safe_add_func_uint16_t_u_u(((~0x897B6062L) < func_20(l_1901, l_1981, (safe_add_func_int16_t_s_s((g_239 < l_1895), g_307)), g_1016[2])), l_1864[3][2][6])) || l_1390) || (-1L)) | g_184[0][4][5])), g_108)));
                    for (g_1207 = (-19); (g_1207 < 20); g_1207++)
                    {
                        return l_1963[0];
                    }
                }
            }
            for (g_307 = (-28); (g_307 < 55); g_307 = safe_add_func_uint64_t_u_u(g_307, 7))
            {
                ++g_1989;
                if (g_108)
                    goto lbl_1992;
                if (g_508)
                    break;
            }
            if (g_196)
            {
                unsigned short l_1993 = 65531UL;
                l_1895 = ((l_1725[2] = (--l_1993)) == (safe_mul_func_int8_t_s_s(g_204, (safe_add_func_uint8_t_u_u(g_568, (safe_rshift_func_int16_t_s_u((g_2013[3][1] = ((((safe_unary_minus_func_uint32_t_u((func_78(l_1250[8], ((+l_1929) == 65526UL)) == (l_1237 = (safe_add_func_uint64_t_u_u(func_20((!((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_763 = 0xD3E3L), (g_376 | (safe_rshift_func_uint8_t_u_u(0xAEL, 1))))), 0x6A92L)), g_1212)) != 0x3B30521D698493AALL)), l_1822, l_1834, l_1965), l_1250[8])))))) & (-1L)) & 0x3EL) && g_184[0][6][3])), 7)))))));
            }
            else
            {
                long long l_2014 = 0xFD5A47C3FEC0C46FLL;
                int l_2019 = 0x226F3BE5L;
                int l_2020 = 0x817181A5L;
                long long l_2021 = 0xCA6557103FA074EFLL;
                g_962 = (g_349 ^ ((g_520 |= (l_1419 ^ ((g_1682 = l_2014) < (l_2020 = (((safe_lshift_func_int16_t_s_s(((65535UL == ((safe_mod_func_int16_t_s_s(func_20(((g_115 &= g_1989) || l_2014), l_2014, (l_2019 = ((5UL > g_391[1]) | l_1965)), l_1419), g_364)) && g_1010)) & 0xCEL), 9)) > g_1891) | (-1L)))))) | l_1965));
                l_1725[2] = (g_520 &= l_2021);
                --l_2022;
            }
            for (g_568 = (-4); (g_568 < (-21)); --g_568)
            {
                char l_2033 = (-1L);
                if ((~(safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((g_184[1][5][4] = ((safe_mod_func_int16_t_s_s((3L < 0x24L), l_1725[2])) | g_666)), l_1419)), (l_2033 | (l_1905 = g_2))))))
                {
                    unsigned l_2043[4][6] = {{4294967294UL, 4294967294UL, 0UL, 4294967294UL, 4294967294UL, 0UL}, {4294967294UL, 4294967294UL, 0UL, 4294967294UL, 4294967294UL, 0UL}, {4294967294UL, 4294967294UL, 0UL, 4294967294UL, 4294967294UL, 0UL}, {4294967294UL, 4294967294UL, 0UL, 4294967294UL, 4294967294UL, 0UL}};
                    int l_2049 = 0x9410E937L;
                    int i, j;
                    if (l_2033)
                    {
                        unsigned char l_2034 = 0x28L;
                        unsigned l_2048 = 0x12ADF655L;
                        l_2034--;
                        g_804 |= (safe_add_func_uint32_t_u_u(((g_707 = (((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(18446744073709551607UL, l_1965)), l_2033)) < func_69((g_1223 != g_964[6]), l_2043[3][2], ((safe_div_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((l_2048 ^ l_2049) | g_1891), 13)) <= 0x7E31685BL) == g_572), g_505)) > g_239))) != g_1257)) >= g_391[5]), l_1864[5][0][3]));
                        if (l_2050[2])
                            break;
                    }
                    else
                    {
                        int l_2052 = 1L;
                        g_376 = 0x74CD69A3L;
                        g_804 = g_1216;
                        g_376 |= (g_520 = (g_804 = ((safe_unary_minus_func_uint8_t_u(l_2043[2][2])) <= l_2052)));
                    }
                    g_962 = func_20(g_1202, (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_2050[0], (((g_1701 && (!l_2050[2])) > func_20(((g_204--) | 255UL), l_1601, l_2033, (g_376 ^ g_962))) == l_2043[3][1]))), l_1965)), g_364, g_108);
                    ++l_2059;
                }
                else
                {
                    unsigned long long l_2086[8][7][4] = {{{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}, {{0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}, {0x8959A2FD2B2EB2B4LL, 18446744073709551611UL, 0x1A7BA57DFE526C9DLL, 0xE1DE323CF153609CLL}}};
                    long long l_2102 = 0x131714A36E9F6744LL;
                    int l_2105 = (-5L);
                    int l_2114 = 8L;
                    unsigned l_2131 = 1UL;
                    int i, j, k;
                    for (g_507 = 26; (g_507 != 11); g_507 = safe_sub_func_int64_t_s_s(g_507, 4))
                    {
                        char l_2082[5][3];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_2082[i][j] = 0x0CL;
                        }
                        l_1905 = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_2068, ((((safe_sub_func_uint64_t_u_u(func_20((safe_unary_minus_func_int8_t_s(0xBDL)), g_1217, l_1250[8], (g_184[1][5][4] = 0x4730L)), l_2033)) && l_2059) <= (l_1250[0] | g_754[0][1])) >= g_964[8]))), 0x428BL));
                        g_376 = (g_1211[9] && (g_1701 && l_2033));
                        g_140 = ((safe_rshift_func_int16_t_s_s((func_78(g_507, (g_804 &= (safe_div_func_uint16_t_u_u(0x74EFL, (-1L))))) ^ g_964[7]), (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(l_2082[1][2], (((g_365 != 8UL) & (safe_div_func_int8_t_s_s((g_985 |= l_2059), l_2085))) || (-1L)))), g_641)), 1L)) || 1L) < 0xAB4333E670F8BADCLL))) > l_2086[4][1][2]);
                        g_376 = (0x177CL & (safe_add_func_int8_t_s_s(func_20((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_83(l_2086[6][6][2], g_760, g_364, (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(l_2059, 8L)), 5UL)), 5))), (func_20((safe_rshift_func_uint8_t_u_s(func_20(l_2101, g_707, g_976, g_2013[3][1]), g_392)), g_376, l_1901, g_17[3]) | 0x52L))), 0x52L)), l_2102, g_17[3], l_2082[4][1]), l_2082[1][2])));
                    }
                    g_962 = (((l_2086[7][3][0] <= (g_754[1][1] ^ func_78(l_2033, g_307))) && (0L & (safe_mod_func_uint32_t_u_u((0L || (l_1273 = 0x60L)), 0x56E0B817L)))) <= g_505);
                    if ((l_1725[2] = l_2086[6][0][1]))
                    {
                        l_2105 = (-1L);
                        return g_1891;
                    }
                    else
                    {
                        l_2105 = ((((l_2033 ^ (safe_mod_func_uint8_t_u_u(func_20(g_152, (g_1682 = (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((l_1725[2] ^= l_1901) == (g_507 = g_1219)) <= g_962), 0UL)), ((l_1965 >= 0xEEC26A612476BC96LL) != func_20((g_964[0] = l_1965), g_115, l_1905, g_1989)))) & l_2033) && l_2086[4][3][3]), g_508))), g_1207, g_377), 5L))) != l_2033) <= 0L) | l_2114);
                    }
                    l_2105 = (safe_div_func_uint64_t_u_u(g_641, ((l_1822 > ((--g_204) && (safe_lshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((func_20(((l_2050[2] > (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((l_2033 || (0xFEADB5342014835DLL && (((-1L) | (safe_mul_func_uint16_t_u_u(((g_391[4] >= func_78(func_58(g_416, l_2131, g_505, l_2050[2]), g_1000)) != 8UL), g_1000))) == g_1016[2]))) | l_2033) || l_1864[2][2][5]), l_1895)), 0)), 1))) < g_1013), g_17[0], g_695, g_375[2][2][0]) >= l_1419), 247UL)) != (-1L)) && l_1237), 1)))) ^ g_1892)));
                }
                for (l_1929 = 0; (l_1929 <= 8); l_1929 += 1)
                {
                    int i;
                    return g_964[l_1929];
                }
                for (g_520 = 25; (g_520 != 17); --g_520)
                {
                    unsigned l_2149 = 0x8631C72CL;
                    for (g_1013 = 0; (g_1013 > 0); g_1013++)
                    {
                        unsigned char l_2136 = 0UL;
                        l_1895 |= l_1822;
                        if (l_2136)
                            continue;
                        g_2150 |= ((safe_div_func_int32_t_s_s(g_754[1][0], (g_804 = (g_376 = (g_1257 || ((((safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(((g_112 = (g_142 ^ (safe_lshift_func_int16_t_s_s(l_1834, 11)))) < g_1269), g_964[7])) <= l_2136) || (safe_mod_func_uint16_t_u_u(g_936[1], ((safe_lshift_func_int8_t_s_s((-1L), l_2050[3])) && l_2136)))), 0x5445L)) || l_2149) <= l_2050[2]) < 0xD42AF7C7412705E7LL)))))) == g_962);
                        if (g_505)
                            goto lbl_1992;
                    }
                    g_2152--;
                }
                if (g_349)
                    break;
            }
        }
    }
    l_2157++;
    g_2163--;
    return l_1725[2];
}







static long long func_9(unsigned p_10, unsigned long long p_11, unsigned char p_12, short p_13, unsigned char p_14)
{
    short l_1253 = 0x832DL;
    int l_1255 = 0L;
    int l_1267 = 0x1F2FE4BFL;
    int l_1268 = 0L;
    for (g_666 = 25; (g_666 < 31); g_666 = safe_add_func_int16_t_s_s(g_666, 3))
    {
        long long l_1254 = 4L;
        int l_1256[5][8][6] = {{{0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}}, {{0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}}, {{0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}}, {{0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}}, {{0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}, {0x8D2FC97CL, 4L, 0L, 4L, 0x8D2FC97CL, 0x10D97E79L}}};
        unsigned long long l_1264 = 0x1934B6F38B40C9D7LL;
        unsigned short l_1265 = 65535UL;
        int l_1266 = 1L;
        int i, j, k;
        g_1257--;
        l_1256[0][5][0] = func_20(func_28(p_13, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((func_28(l_1255, l_1264, (func_69(p_10, l_1255, l_1265) && 1L)) >= 0xF120L), p_10)) <= 0xC9D2C6F1L), l_1255)), p_11), l_1255, p_10, g_695);
        --g_1269;
    }
    return l_1253;
}







static long long func_20(unsigned char p_21, long long p_22, unsigned p_23, short p_24)
{
    return g_641;
}







static const unsigned char func_28(unsigned p_29, unsigned short p_30, long long p_31)
{
    unsigned short l_1238 = 1UL;
    long long l_1239 = 0xEA8BED8400FA2BFALL;
    int l_1249 = 0xB7B21957L;
    l_1239 = (l_1238 && g_976);
    for (g_365 = 19; (g_365 >= 26); g_365 = safe_add_func_uint32_t_u_u(g_365, 6))
    {
        unsigned long long l_1247[1];
        int l_1248 = 0x9C2C5656L;
        int i;
        for (i = 0; i < 1; i++)
            l_1247[i] = 0UL;
        l_1249 = (((g_1013 = func_69(l_1238, (safe_mul_func_uint8_t_u_u(func_83(((!(l_1247[0] = (g_1000 = (safe_lshift_func_uint16_t_u_u(g_1246, 6))))) >= g_568), g_365, l_1248, (p_31 || ((g_376 = p_30) | (p_29 != p_30)))), p_30)), p_31)) | l_1248) <= 0x4AL);
        return g_508;
    }
    return l_1238;
}







static unsigned func_32(long long p_33, unsigned long long p_34, short p_35, unsigned p_36)
{
    char l_286 = 0x79L;
    int l_308 = 0x02288577L;
    unsigned char l_1103 = 0xB9L;
    int l_1137 = 0xD280648DL;
    int l_1220 = 0x83750897L;
    int l_1222 = 0xA953D0FEL;
    for (p_33 = 0; (p_33 > 0); p_33 = safe_add_func_uint8_t_u_u(p_33, 7))
    {
        unsigned char l_77 = 0x21L;
        int l_1129 = 0x1435C54CL;
        int l_1139 = (-1L);
        int l_1157 = 0x7FFDD788L;
        unsigned long long l_1163[2][7][9] = {{{0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}}, {{0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}, {0UL, 0UL, 0UL, 0x9D30324009C278E6LL, 0x1CBA4C5EF4A0176CLL, 0xBC2C952FF08EA8E7LL, 0xBE6861F46A37A335LL, 0xBE6861F46A37A335LL, 0xBC2C952FF08EA8E7LL}}};
        int l_1210 = 1L;
        int l_1213 = 0x86A07736L;
        int l_1215 = 0xA0E86C19L;
        int i, j, k;
        if (((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(func_48(((safe_add_func_int16_t_s_s(p_33, (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(func_58((((0L | (safe_rshift_func_uint8_t_u_s(p_36, (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((func_69((g_2 < ((((safe_mul_func_int8_t_s_s((safe_mul_func_int64_t_s_s(l_77, 0L)), (func_78((l_286 ^= ((safe_mul_func_uint16_t_u_u((func_83(g_2, (safe_add_func_int64_t_s_s(g_2, (+(0xF8F0B53CF54CEAA9LL >= 1L)))), g_2, g_2) | 0x4EA2EE60L), 0x6FABL)) > 255UL)), p_33) > 0xDB85L))) >= p_36) ^ 0L) && 0UL)), g_2, g_2) < 7UL), l_308)), 0x7681F8F2C4CA5D1ELL))))) | p_33) ^ p_35), l_77, g_2, p_36), p_34)), 2)))) || 0x8671E70E9D857B65LL), p_34, g_375[4][4][2]), l_1103)) < 0xFDL), g_2)), p_33)) & g_2))
        {
            int l_1108 = 0L;
            int l_1117[9][4] = {{0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}, {0xD86746C9L, 0xD5254F62L, 0x3B023796L, 9L}};
            int i, j;
            for (g_115 = 0; (g_115 != 12); ++g_115)
            {
                int l_1128 = (-6L);
                if (g_108)
                    break;
                l_1108 = (p_34 & (safe_mod_func_uint8_t_u_u(l_1108, ((p_34 == 0xF1FF71EECF6DEBE2LL) && ((safe_add_func_uint32_t_u_u(((l_1117[6][2] = (safe_mod_func_uint16_t_u_u(p_33, (safe_rshift_func_uint16_t_u_u((g_392 < (safe_div_func_int8_t_s_s((func_78(l_308, func_78((g_391[4] & 255UL), g_1016[2])) ^ g_507), g_976))), l_1108))))) || p_36), p_33)) | l_1108)))));
                l_1129 = ((safe_sub_func_uint8_t_u_u(1UL, (0xDD9DL || (0xE63FL && (safe_div_func_uint64_t_u_u(g_964[7], (safe_add_func_uint16_t_u_u((((((safe_rshift_func_uint8_t_u_u(((+g_1016[1]) >= ((safe_mul_func_uint8_t_u_u((g_760 == (0x4DL | 1L)), (l_77 | l_1128))) >= g_108)), l_1117[3][1])) <= g_377) != l_77) ^ g_375[4][7][3]) < p_34), l_308)))))))) && 0xD4CBL);
            }
            l_1129 = 1L;
        }
        else
        {
            unsigned l_1134 = 0x048DEA6BL;
            int l_1138 = 0x26A9342AL;
            unsigned l_1201 = 0x819431F2L;
            int l_1204 = (-1L);
            int l_1221 = 0x8D9482BAL;
            g_520 |= (p_34 & (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((l_1134 = 3L) && l_1134), (-9L))), (func_58((safe_rshift_func_int16_t_s_s(l_1137, 11)), (l_1129 = (l_1138 ^= g_239)), ((l_1139 = p_33) || g_391[7]), (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_35, 2L)), p_34))) < g_1010))));
            for (l_1139 = 0; (l_1139 == 15); l_1139 = safe_add_func_int64_t_s_s(l_1139, 3))
            {
                short l_1150 = 0x703EL;
                int l_1153 = 0x45CECD1CL;
                int l_1154 = 3L;
                int l_1159[5] = {1L, 0x1062F943L, 1L, 0x1062F943L, 1L};
                int i;
                for (g_572 = 21; (g_572 >= 40); ++g_572)
                {
                    char l_1151 = 0xC7L;
                    int l_1156 = 0L;
                    for (p_34 = 0; (p_34 != 20); p_34 = safe_add_func_int32_t_s_s(p_34, 8))
                    {
                        short l_1152 = 0x0194L;
                        int l_1155 = 0xA61569F6L;
                        int l_1158 = 0x0157DC1FL;
                        ++g_1160;
                        if (g_572)
                            continue;
                        if (l_1163[1][2][2])
                            continue;
                    }
                    l_1137 = (g_112 == (safe_div_func_uint16_t_u_u(((l_1138 = 0xFDEAA14CC9E827C1LL) < ((safe_div_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((0xED0FFF10AE5542C8LL != (safe_mul_func_int16_t_s_s((!0x6C83L), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u((++p_34), 0x9B8547DB1096E327LL)), (safe_sub_func_uint64_t_u_u(0x266C6321B78B7DEFLL, ((g_1160 >= g_804) || p_33))))) > l_1151), l_1134)), g_375[4][7][3]))))) != 0L), g_302)), g_2)) || g_108)), p_36)));
                    if (l_1154)
                        break;
                }
                l_1157 = l_1159[4];
                if ((func_78(p_34, g_239) | (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_33, 2)), ((-1L) == (0xA1L >= (safe_sub_func_uint8_t_u_u(g_152, l_1137)))))), (++g_112)))))
                {
                    g_520 |= (p_35 & (g_568 ^ 0x1F7106ECBF052AB4LL));
                }
                else
                {
                    const unsigned short l_1200 = 0UL;
                    int l_1203 = 0L;
                    int l_1206 = (-9L);
                    int l_1214 = 0x567EFEF2L;
                    int l_1218 = 0x34588286L;
                    l_1201 = (func_58(l_1103, (((safe_add_func_uint8_t_u_u((8L != g_115), ((safe_div_func_uint8_t_u_u(p_36, l_1157)) & ((l_1138 | (((safe_lshift_func_int8_t_s_u((((func_78(l_1153, (g_376 = p_35)) == l_1129) & 0xBB33D5CBL) == l_1200), g_184[1][5][4])) > 4294967295UL) == g_707)) > g_804)))) || p_34) > l_286), g_754[0][0], g_204) ^ g_568);
                    g_1207++;
                    if (l_1137)
                        continue;
                    g_1223++;
                }
            }
            for (g_239 = 0; (g_239 == 8); g_239 = safe_add_func_uint8_t_u_u(g_239, 3))
            {
                g_804 |= g_349;
            }
        }
        for (g_376 = 0; (g_376 >= 15); g_376 = safe_add_func_uint64_t_u_u(g_376, 8))
        {
            char l_1232 = 0x67L;
            if ((l_1139 = (safe_rshift_func_int8_t_s_u(g_184[1][5][4], 1))))
            {
                return l_1103;
            }
            else
            {
                return l_1232;
            }
        }
        for (l_286 = 0; (l_286 == 17); l_286++)
        {
            for (l_1222 = (-6); (l_1222 <= (-10)); l_1222--)
            {
                if (g_964[7])
                    break;
            }
            if (p_33)
                break;
        }
    }
    return p_36;
}







static unsigned char func_48(unsigned p_49, int p_50, unsigned char p_51)
{
    int l_388 = (-8L);
    int l_389[1][6][8] = {{{9L, 0x37243089L, 0x37243089L, 9L, 0L, 1L, 0x5953B077L, 0xB963346AL}, {9L, 0x37243089L, 0x37243089L, 9L, 0L, 1L, 0x5953B077L, 0xB963346AL}, {9L, 0x37243089L, 0x37243089L, 9L, 0L, 1L, 0x5953B077L, 0xB963346AL}, {9L, 0x37243089L, 0x37243089L, 9L, 0L, 1L, 0x5953B077L, 0xB963346AL}, {9L, 0x37243089L, 0x37243089L, 9L, 0L, 1L, 0x5953B077L, 0xB963346AL}, {9L, 0x37243089L, 0x37243089L, 9L, 0L, 1L, 0x5953B077L, 0xB963346AL}}};
    long long l_390[5][9] = {{0xFD7CC11C1CCE31C6LL, (-1L), (-1L), 0x5019F29C5C5AA924LL, 0x5019F29C5C5AA924LL, (-1L), (-1L), 0xFD7CC11C1CCE31C6LL, (-1L)}, {0xFD7CC11C1CCE31C6LL, (-1L), (-1L), 0x5019F29C5C5AA924LL, 0x5019F29C5C5AA924LL, (-1L), (-1L), 0xFD7CC11C1CCE31C6LL, (-1L)}, {0xFD7CC11C1CCE31C6LL, (-1L), (-1L), 0x5019F29C5C5AA924LL, 0x5019F29C5C5AA924LL, (-1L), (-1L), 0xFD7CC11C1CCE31C6LL, (-1L)}, {0xFD7CC11C1CCE31C6LL, (-1L), (-1L), 0x5019F29C5C5AA924LL, 0x5019F29C5C5AA924LL, (-1L), (-1L), 0xFD7CC11C1CCE31C6LL, (-1L)}, {0xFD7CC11C1CCE31C6LL, (-1L), (-1L), 0x5019F29C5C5AA924LL, 0x5019F29C5C5AA924LL, (-1L), (-1L), 0xFD7CC11C1CCE31C6LL, (-1L)}};
    long long l_463 = (-1L);
    int l_475 = 7L;
    int l_476 = 0xD34D7A43L;
    unsigned long long l_582 = 8UL;
    unsigned short l_866[5][9][2] = {{{0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}}, {{0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}}, {{0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}}, {{0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}}, {{0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}, {0UL, 0x27EDL}}};
    char l_891 = 0x99L;
    int l_934 = 1L;
    int l_995 = 0x87BA3B96L;
    unsigned short l_1078 = 0x4105L;
    unsigned l_1097 = 4UL;
    int i, j, k;
lbl_420:
    g_392++;
lbl_1019:
    for (g_142 = 0; (g_142 <= 4); g_142 += 1)
    {
        int l_398 = 0x0E1961F1L;
        int l_415 = 0xFAF4F5E0L;
        const unsigned short l_441 = 0UL;
        int l_510 = 0xC78C16DEL;
        char l_539[2][2][6] = {{{0x0BL, 0L, 0x69L, 0L, 0x0BL, 4L}, {0x0BL, 0L, 0x69L, 0L, 0x0BL, 4L}}, {{0x0BL, 0L, 0x69L, 0L, 0x0BL, 4L}, {0x0BL, 0L, 0x69L, 0L, 0x0BL, 4L}}};
        unsigned l_551[9] = {4294967295UL, 4294967295UL, 0x63732188L, 4294967295UL, 4294967295UL, 0x63732188L, 4294967295UL, 4294967295UL, 0x63732188L};
        int i, j, k;
        for (p_51 = 0; (p_51 <= 0); p_51 += 1)
        {
            unsigned short l_397 = 0UL;
            if (p_50)
                break;
            for (g_392 = 0; (g_392 <= 0); g_392 += 1)
            {
                int i, j, k;
                l_389[p_51][(g_142 + 1)][(p_51 + 2)] = 0xC95139A6L;
                l_398 &= (p_51 | ((safe_mod_func_int16_t_s_s((g_184[2][6][5] = l_397), p_50)) | (l_389[p_51][(g_142 + 1)][(p_51 + 2)] = p_50)));
            }
        }
        g_140 = ((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_398 & 0x94L), l_388)) && (safe_mul_func_int16_t_s_s((g_115 ^ func_78((((safe_rshift_func_int8_t_s_u((-8L), (func_78(g_377, (g_376 = p_51)) >= (safe_div_func_int16_t_s_s((g_239 && 0x047BL), 0x4BE2L))))) >= 0xFC0D2F5F32CE3211LL) | 0x853B988DL), g_365)), l_398))), l_398)) ^ l_398);
        for (l_398 = 0; (l_398 <= 4); l_398 += 1)
        {
            int l_411 = 0L;
            int l_412[8];
            int i;
            for (i = 0; i < 8; i++)
                l_412[i] = 0L;
            if ((func_78(p_51, (safe_rshift_func_uint16_t_u_u(1UL, 12))) < l_411))
            {
                char l_413[1][10][4] = {{{0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}, {0x05L, 0L, 1L, 0x47L}}};
                int l_414 = 6L;
                int i, j, k;
                g_417--;
            }
            else
            {
                l_412[3] = (-8L);
                if (g_365)
                    goto lbl_420;
                g_140 |= ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_51, (((safe_lshift_func_uint8_t_u_u((func_78((safe_mul_func_int16_t_s_s(g_184[1][0][4], (--g_302))), (safe_mul_func_int8_t_s_s(0xDEL, 0L))) && p_49), (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_388, 15)), 7)))) < ((p_49 <= (safe_mul_func_uint8_t_u_u(0x04L, p_51))) && (-1L))) >= p_50))), g_152)), g_152)) != l_441);
            }
            if (g_340)
                continue;
            for (g_307 = 0; (g_307 <= 4); g_307 += 1)
            {
                p_50 = l_398;
                if ((l_389[0][4][1] < p_51))
                {
                    for (g_239 = 0; (g_239 <= 3); g_239 += 1)
                    {
                        int l_446[8];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_446[i] = 0x8AAE45A4L;
                        p_50 = (safe_div_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((g_184[g_239][(g_307 + 1)][(l_398 + 1)] == 255UL), g_184[g_239][(l_398 + 2)][(g_307 + 1)])) || (l_446[4] = l_411)), (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(g_239, (safe_lshift_func_uint8_t_u_u(g_184[g_239][(l_398 + 2)][(g_307 + 1)], 3)))), (-1L))), func_78((safe_add_func_int64_t_s_s(func_78((safe_lshift_func_int16_t_s_s((func_78(l_415, g_108) <= g_196), p_50)), g_377), g_204)), g_108))), g_152))));
                        l_415 = ((l_412[3] = 1UL) || (g_376 = (safe_sub_func_uint8_t_u_u(g_391[4], g_377))));
                        p_50 = 1L;
                        p_50 = g_152;
                    }
                    for (l_411 = 0; (l_411 <= 4); l_411 += 1)
                    {
                        l_463 ^= 0x35562E8DL;
                    }
                }
                else
                {
                    int l_474 = 0L;
                    l_476 |= func_78((((l_389[0][5][2] ^= 1UL) & ((((safe_mod_func_int32_t_s_s(l_463, (safe_mul_func_int8_t_s_s((l_475 &= (safe_add_func_uint8_t_u_u((func_78((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_375[4][7][3], (func_78(p_51, (((l_412[7] = (l_412[7] < l_474)) && g_184[3][3][5]) >= p_49)) == 250UL))), 8)), g_375[4][7][3]) | l_398), p_50))), l_415)))) < (-10L)) > 0x76DE8D8AB89E95D2LL) || l_475)) <= g_115), l_411);
                }
            }
        }
        for (l_476 = 1; (l_476 <= 4); l_476 += 1)
        {
            short l_483 = 0x49CDL;
            int l_490 = 0x7CF0C5FEL;
            int l_502 = 1L;
            int l_504 = 0xCA39ADC2L;
            int l_509 = 0L;
            int l_554[1][8][6] = {{{0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}, {0xF66E4623L, 0x1A64805DL, (-4L), (-4L), 0x1A64805DL, 0xF66E4623L}}};
            int i, j, k;
            g_376 &= (safe_lshift_func_int16_t_s_u(g_375[4][7][3], (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((p_49 > (0UL <= (((+(l_475 < (l_483 |= p_51))) | ((0x813AL && (safe_lshift_func_int16_t_s_u(((g_204 && p_49) != ((safe_rshift_func_int8_t_s_s((g_108 = ((((safe_add_func_uint32_t_u_u(p_51, g_375[4][7][3])) != 1L) == p_51) < 8L)), g_184[1][5][4])) <= l_441)), 14))) ^ g_239)) == g_416))) < 0x076F051CD8B1141DLL), g_375[4][7][3])), g_115))));
            for (g_364 = 0; (g_364 <= 4); g_364 += 1)
            {
                int l_499[6] = {9L, 9L, (-6L), 9L, 9L, (-6L)};
                int l_500[2];
                int l_501[5][6] = {{0L, 0x4D6FE7FAL, 1L, 0x4D6FE7FAL, 0L, 0L}, {0L, 0x4D6FE7FAL, 1L, 0x4D6FE7FAL, 0L, 0L}, {0L, 0x4D6FE7FAL, 1L, 0x4D6FE7FAL, 0L, 0L}, {0L, 0x4D6FE7FAL, 1L, 0x4D6FE7FAL, 0L, 0L}, {0L, 0x4D6FE7FAL, 1L, 0x4D6FE7FAL, 0L, 0L}};
                unsigned l_512 = 0x8E4C5F02L;
                unsigned short l_548 = 0x3207L;
                int l_555 = 0x6EB96BC2L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_500[i] = 0x9DB1F582L;
                for (g_204 = 0; (g_204 <= 4); g_204 += 1)
                {
                    int i;
                    if (g_391[(g_364 + 2)])
                        break;
                    for (g_108 = 0; (g_108 <= 0); g_108 += 1)
                    {
                        int i, j, k;
                        l_490 = l_389[g_108][g_204][g_142];
                        l_490 &= (safe_mod_func_int64_t_s_s(((g_340--) ^ ((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x1F1BL, (g_184[1][5][4] && g_391[4]))), func_78((+func_78(p_50, l_398)), l_499[0]))) >= l_389[g_108][g_204][g_142])), 0xA5E84BC4E430C84ALL));
                    }
                }
                l_500[0] = func_78(l_490, (l_500[0] = p_51));
                for (l_463 = 3; (l_463 >= 0); l_463 -= 1)
                {
                    for (g_340 = 0; (g_340 <= 3); g_340 += 1)
                    {
                        short l_503[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_503[i] = (-6L);
                        l_512--;
                        return g_375[g_142][(g_364 + 3)][g_340];
                    }
                    for (g_365 = 0; (g_365 <= 1); g_365 += 1)
                    {
                        int l_519 = 0x2CB72008L;
                        int i, j, k;
                        g_140 &= (l_500[g_365] ^ (((func_78(((safe_add_func_int32_t_s_s((g_376 = (l_500[g_365] >= (safe_rshift_func_uint16_t_u_u(g_2, 11)))), g_391[4])) || (g_520 = (l_519 |= (l_389[0][0][3] = l_500[g_365])))), ((g_184[l_463][(g_365 + 5)][l_463] |= l_509) && (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_392, 1L)), ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(l_490, g_340)), p_51)), p_49)) && p_49))))) || 1UL) | l_509) != g_375[4][7][3]));
                        g_520 = ((++g_377) & 0UL);
                        l_500[g_365] = (safe_mod_func_uint32_t_u_u(0xB156C8BDL, g_392));
                    }
                    p_50 |= (safe_rshift_func_int8_t_s_u((l_500[1] = l_501[2][2]), p_51));
                    l_389[0][3][4] |= p_51;
                }
                if ((safe_div_func_uint32_t_u_u((p_51 & (0x2201CC4F86ED9E3CLL && (l_390[g_364][(g_364 + 3)] = (func_78(l_475, g_239) || l_389[0][0][3])))), l_490)))
                {
                    unsigned long long l_546 = 18446744073709551615UL;
                    int l_547 = (-1L);
                    for (l_475 = 0; (l_475 <= 3); l_475 += 1)
                    {
                        int i, j, k;
                        l_539[1][0][2] |= (l_500[1] = g_184[l_475][g_142][(g_142 + 1)]);
                        g_376 = (safe_mod_func_int64_t_s_s(func_78((safe_lshift_func_uint8_t_u_s(g_505, (l_546 = (l_415 = ((g_520 == l_504) ^ 0UL))))), p_51), l_547));
                    }
                    for (l_502 = 0; (l_502 <= 3); l_502 += 1)
                    {
                        int l_552[7] = {0xF7EEAD85L, 0x28FB1EA3L, 0xF7EEAD85L, 0x28FB1EA3L, 0xF7EEAD85L, 0x28FB1EA3L, 0xF7EEAD85L};
                        int i, j, k;
                        g_140 = (250UL || (g_307 = ((g_375[g_142][(l_502 + 6)][l_502] >= (l_548 &= (-9L))) < 0x8DCCL)));
                        l_552[6] = (safe_rshift_func_int16_t_s_u(l_551[5], (l_547 ^= g_375[0][9][3])));
                    }
                    for (g_365 = 0; (g_365 <= 3); g_365 += 1)
                    {
                        int l_553 = 0x8BF53C40L;
                        int i, j, k;
                        l_510 = g_375[(g_142 + 1)][(l_476 + 2)][g_365];
                        l_553 ^= p_51;
                        l_553 = l_504;
                    }
                    l_490 = g_392;
                }
                else
                {
                    unsigned short l_556 = 0xC483L;
                    g_376 = p_51;
                    l_556++;
                }
            }
            for (g_108 = 0; (g_108 >= 7); g_108 = safe_add_func_int8_t_s_s(g_108, 9))
            {
                unsigned char l_561 = 255UL;
                int l_562 = (-5L);
                l_562 = l_561;
            }
        }
    }
    for (g_115 = (-17); (g_115 <= (-2)); g_115++)
    {
        unsigned long long l_567[3][6][7] = {{{5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}}, {{5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}}, {{5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}, {5UL, 5UL, 0UL, 5UL, 5UL, 0UL, 5UL}}};
        int l_588 = 5L;
        unsigned long long l_621[1][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_621[i][j] = 7UL;
        }
        for (g_364 = 0; (g_364 <= 3); g_364 += 1)
        {
            long long l_571 = 0x13223A13F9ECF20ELL;
            int l_587 = 1L;
            for (g_507 = 0; (g_507 <= 3); g_507 += 1)
            {
                int i, j, k;
                g_376 = ((l_390[g_507][g_507] <= g_184[g_507][g_507][(g_364 + 2)]) || func_78((safe_sub_func_int16_t_s_s(((g_568 = (g_112 &= func_78(p_51, l_567[1][5][6]))) | 8UL), (safe_lshift_func_uint8_t_u_s(l_571, l_388)))), g_196));
                l_587 |= (((g_572 = p_51) <= ((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(0L)), ((l_567[1][1][6] && 0x59FAL) & (!(g_142 ^ ((func_78(g_568, l_582) <= (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s(p_50, p_51)) && 0x45AB86F942094BCBLL) != l_567[1][5][6]), 6))) || g_416)))))) >= g_508), p_49)) || g_184[g_507][g_507][(g_364 + 2)]), 4294967287UL)) > l_571)) || 5L);
                for (g_302 = 0; (g_302 <= 3); g_302 += 1)
                {
                    for (g_365 = 1; (g_365 <= 4); g_365 += 1)
                    {
                        int i, j, k;
                        l_588 = g_375[(g_364 + 2)][(g_365 + 4)][g_364];
                    }
                    g_376 ^= (((~g_152) != (+(((safe_add_func_int8_t_s_s((l_588 = (g_375[4][7][3] = (0x0D57D695L | ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(l_389[0][3][3], p_49)) < p_50) > p_51), (l_475 = ((g_184[1][2][2] != (!((safe_mul_func_uint16_t_u_u(l_588, (safe_mul_func_uint8_t_u_u(l_571, p_50)))) == p_51))) < 0x49389C57L)))), g_204)), p_50)) != p_51)))), 8L)) & g_520) | 0x7A2AB3D75D2CDEF5LL))) & p_50);
                    for (g_505 = 3; (g_505 >= 0); g_505 -= 1)
                    {
                        p_50 = ((-6L) & 0x913EL);
                        g_520 = ((p_50 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(1UL, g_2)), 4)), (l_588 |= p_51)))) > ((p_51 || p_51) || ((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((g_112 ^ (g_568 | (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(((l_587 = 1L) || (safe_lshift_func_uint16_t_u_s(p_49, 5))), l_567[1][5][6])) || l_390[g_507][g_507]), 0)))) || 0x4EL) & g_507), 13)), l_567[1][0][3])), 0x300F9F50L)) ^ p_49)));
                        if (g_349)
                            break;
                        l_621[0][0] ^= p_50;
                    }
                    for (g_520 = 0; (g_520 >= 0); g_520 -= 1)
                    {
                        int l_622 = 4L;
                        l_622 &= p_51;
                    }
                }
            }
            if ((g_511 || ((-5L) == g_302)))
            {
                p_50 &= 0x528A8F91L;
                if (p_50)
                    continue;
                if (l_588)
                    continue;
                return p_51;
            }
            else
            {
                int l_623 = 3L;
                int l_624 = 1L;
                g_140 ^= (p_50 = ((l_624 |= (l_623 &= (l_588 ^ 1UL))) ^ l_588));
                p_50 = 0xD170F1E3L;
                l_623 |= ((-6L) ^ ((safe_unary_minus_func_uint32_t_u((l_587 = p_50))) ^ g_507));
            }
            g_520 = (((g_108 = p_50) | g_391[4]) & p_50);
            for (g_505 = 0; (g_505 <= 3); g_505 += 1)
            {
                unsigned char l_626[8] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
                int i;
                for (l_463 = 0; (l_463 <= 3); l_463 += 1)
                {
                    l_626[7]++;
                    return g_142;
                }
            }
        }
    }
    for (l_475 = 0; (l_475 <= 14); l_475++)
    {
        unsigned long long l_635 = 0x2FA8EE71264D085FLL;
        unsigned l_698 = 0xF0240979L;
        int l_703 = 0xF7C65D67L;
        int l_704 = 9L;
        int l_732 = 0x48BCF3B1L;
        char l_756 = 0xA2L;
        unsigned l_791 = 0xED7A5E2CL;
        short l_805[8] = {0xD74CL, (-1L), 0xD74CL, (-1L), 0xD74CL, (-1L), 0xD74CL, (-1L)};
        unsigned l_811 = 0UL;
        int l_821[5][8][3] = {{{0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}}, {{0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}}, {{0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}}, {{0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}}, {{0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}, {0x05F12755L, 0x2BB8DB9CL, 0x3511584DL}}};
        unsigned short l_1049 = 0x3919L;
        int l_1063 = 0x0F2F9C2BL;
        int l_1094[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1094[i] = 0x38A51D38L;
        for (g_364 = 0; (g_364 >= 44); ++g_364)
        {
            unsigned long long l_640 = 0xE617BD3B64AF0836LL;
            int l_646 = 1L;
            int l_694[3];
            long long l_768 = 0x0084F1B78DFE6414LL;
            unsigned l_806 = 0xE1EA08D4L;
            int l_890[6][5][8] = {{{1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}}, {{1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}}, {{1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}}, {{1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}}, {{1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}}, {{1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}, {1L, (-1L), 0x311A9E63L, 0xDD402A01L, 0x7FA7E8A8L, 0x110CB70BL, 0L, 0xDD402A01L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_694[i] = 0x80F617D3L;
            if (((safe_sub_func_uint16_t_u_u((((((0x2E49L > l_635) && ((0x0BBDL >= (((safe_sub_func_int64_t_s_s((7UL & (l_389[0][0][3] = (g_572 ^= (safe_mod_func_int16_t_s_s((g_511 | ((g_641 = (l_640 = g_508)) < l_635)), ((((safe_mul_func_int8_t_s_s((func_78((((+((safe_rshift_func_uint16_t_u_s(g_204, 0)) > 0x1783L)) && g_302) > 0x59L), p_50) > g_204), p_49)) == 0x1CL) <= l_646) && p_50)))))), 0xF9B104380DCB467ALL)) != p_49) != g_391[5])) & 0xA311BCDEL)) == 0x19E9L) || g_204) || 0x1A17L), p_50)) < g_375[4][7][3]))
            {
                for (l_388 = 3; (l_388 <= 8); l_388 += 1)
                {
                    int i;
                    for (g_508 = 0; (g_508 <= 4); g_508 += 1)
                    {
                        int i, j;
                        l_389[0][5][0] = 1L;
                        if (l_390[g_508][l_388])
                            break;
                    }
                    g_376 = g_391[l_388];
                    g_520 = 0x9F0677D0L;
                }
            }
            else
            {
                const unsigned l_657 = 1UL;
                int l_662 = 0L;
                int l_663[10] = {0x0F028455L, 0xBC92716DL, 0x0F028455L, 0xBC92716DL, 0x0F028455L, 0xBC92716DL, 0x0F028455L, 0xBC92716DL, 0x0F028455L, 0xBC92716DL};
                char l_802 = 0x38L;
                int i;
                for (l_582 = 0; (l_582 > 56); ++l_582)
                {
                    unsigned char l_660 = 0x3EL;
                    unsigned l_671 = 1UL;
                    int l_686 = 0xDAF8CF03L;
                    for (g_115 = (-24); (g_115 <= (-23)); g_115 = safe_add_func_uint16_t_u_u(g_115, 3))
                    {
                        char l_661 = 0x0AL;
                        int l_664 = (-1L);
                        int l_665 = 2L;
                        g_376 = ((p_50 && func_78(((l_389[0][0][0] = l_646) || ((safe_div_func_int8_t_s_s((l_646 <= ((1L > ((0x28L == (4294967290UL || (safe_rshift_func_uint16_t_u_s(func_78(func_78(g_375[4][7][3], (safe_rshift_func_uint8_t_u_s(func_78(l_657, (safe_mod_func_int32_t_s_s((p_50 != p_49), l_660))), 6))), p_49), l_635)))) && 0xB3L)) || p_51)), l_661)) <= 0x93L)), g_204)) > g_417);
                        g_666--;
                        if (l_635)
                            break;
                        p_50 |= (safe_lshift_func_uint16_t_u_s(((l_664 = l_671) > (safe_lshift_func_uint16_t_u_u((l_663[8] = ((p_51 || (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(func_78(((g_376 = g_391[4]) || (g_376 &= (-8L))), (0xABL > (((safe_add_func_uint64_t_u_u(g_641, (g_572 = g_666))) == (safe_div_func_uint64_t_u_u(p_49, (safe_lshift_func_int8_t_s_u((g_505 <= 1UL), l_463))))) && 9L))), l_640)), p_49))) || p_49)), 5))), g_364));
                    }
                    for (l_388 = 0; (l_388 < 11); l_388 = safe_add_func_int64_t_s_s(l_388, 1))
                    {
                        l_686 ^= 1L;
                        if (p_49)
                            continue;
                    }
                    g_140 &= 7L;
                    if (((safe_rshift_func_uint8_t_u_u(((7UL && (safe_rshift_func_int16_t_s_s(l_671, (((l_475 & (((l_704 |= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s((g_695 = (l_694[1] > l_389[0][5][3])))), ((safe_add_func_uint64_t_u_u((((l_698 & ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(func_78(((l_694[2] > (++g_666)) & func_83((p_50 && (0xBC4216E40F91F6ECLL < g_392)), p_50, l_640, p_51)), g_641), 5)) && p_49), g_520)) < p_50)) == 0xCB07L) <= l_694[1]), 0xD7D7670A22575DABLL)) & g_2)))) | g_392) || l_703)) ^ g_340) && p_49)))) != g_641), 0)) == l_671))
                    {
                        g_707--;
                        g_376 = 1L;
                        p_50 ^= (safe_unary_minus_func_int32_t_s(0x6479A092L));
                    }
                    else
                    {
                        p_50 = ((safe_rshift_func_int8_t_s_s(l_660, p_51)) >= p_50);
                    }
                }
                if (p_50)
                    continue;
                if ((safe_mul_func_uint16_t_u_u(((l_663[1] &= ((-6L) ^ (0xD52DL > func_69(p_51, l_390[1][3], (safe_lshift_func_int16_t_s_u(0L, g_375[4][7][3])))))) != 0xC11DD32060C5D081LL), g_391[6])))
                {
                    int l_719[2];
                    int l_755 = 7L;
                    int l_757 = (-1L);
                    int l_758 = 0L;
                    int l_759 = 0xA4028D57L;
                    int l_761 = 0x5A55DEDCL;
                    int l_762 = 0x54D59158L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_719[i] = 0x6EBBA300L;
                    if (func_83(l_646, (+((safe_mul_func_uint16_t_u_u(l_719[1], l_703)) == (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((l_662 && p_50) || (func_83(p_51, l_582, func_78((safe_sub_func_int64_t_s_s((l_732 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x36400438L, (p_51 > l_389[0][0][3]))), l_646)) && 0xB4896CBD5ED9EEBBLL)), p_51)), p_50), g_666) || l_476)), g_568)) == 0x61L), g_375[0][4][2])) | g_392), (-5L))))), l_390[0][3], p_49))
                    {
                        p_50 = l_662;
                    }
                    else
                    {
                        unsigned short l_753 = 0xF17DL;
                        l_694[2] ^= (safe_div_func_uint16_t_u_u(((g_391[4] < (0xC7L <= (p_50 < (safe_mul_func_uint8_t_u_u(0x3BL, p_51))))) ^ p_51), g_302));
                        g_376 = (l_663[6] = (safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s(((g_112++) != g_666), (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(18446744073709551607UL, func_78(p_50, g_184[1][5][4]))), ((safe_lshift_func_uint8_t_u_s(0x86L, ((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(l_753, p_49)), (g_754[1][0] = (l_635 | (-2L))))) < l_694[2]))) | 0x3A99L))))), 0x21E24DCDL)));
                        g_763--;
                    }
                }
                else
                {
                    long long l_771 = 0xE5F485ADC1CC4B84LL;
                    int l_782 = 0xD9E9D7CDL;
                    if ((safe_mul_func_uint16_t_u_u(l_768, (g_507 < (p_49 != (func_69(p_49, ((p_50 | ((g_707 == ((l_771 ^ (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(0xF8L, (func_78(p_50, l_663[6]) || l_635))), l_756))) > g_707)) && l_771)) <= l_390[1][3]), p_51) | g_666))))))
                    {
                        int l_803 = (-1L);
                        ++g_776;
                        p_50 = ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int64_t_s((func_69((l_646 = (func_83(l_703, l_782, ((~func_83(g_511, (l_662 = (((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_50, 5)), ((g_754[1][1] >= ((func_78(l_390[2][3], (safe_lshift_func_uint16_t_u_u(l_791, (((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((g_184[2][6][4] || ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(18446744073709551611UL, g_666)) == (-4L)), p_51)), 0x0DL)) || l_802)), (-7L))) | 0xDAL), 18446744073709551611UL)) == 0xF6L) != l_803)))) >= l_802) || g_505)) < l_803))), 0x0CL)) && l_389[0][0][3]) != 0x60L)), g_2, g_804)) != p_51), l_805[2]) ^ 0xF3BEE438L)), g_666, l_782) ^ l_698))), 7)) < l_694[1]);
                        l_806++;
                        g_140 = 9L;
                    }
                    else
                    {
                        g_376 &= ((g_204 = (safe_add_func_uint64_t_u_u(l_811, 0xFF4B106B966C4C95LL))) ^ (l_704 |= 0x11L));
                    }
                    for (l_640 = 0; (l_640 < 36); ++l_640)
                    {
                        unsigned l_814 = 4294967292UL;
                        l_814++;
                        l_389[0][0][3] = (p_50 == (l_821[1][5][2] = (safe_lshift_func_uint16_t_u_u(l_663[6], (l_704 ^= func_83(func_78((safe_lshift_func_uint8_t_u_u(0x33L, func_78((l_732 = g_152), p_50))), (0UL < (-3L))), l_771, l_657, p_50))))));
                    }
                }
            }
            for (l_791 = 0; (l_791 == 6); l_791 = safe_add_func_uint8_t_u_u(l_791, 4))
            {
                unsigned l_840 = 0x385B2115L;
                int l_841 = 0xAB414C2DL;
                int l_852 = 1L;
                int l_898 = 0x5817CEA4L;
                long long l_922 = 0x47A5188A24170D95LL;
                l_852 |= (safe_sub_func_uint8_t_u_u(func_69((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((g_763 == (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x5DECL, (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_391[4], (l_841 = l_840))), ((l_704 | 65535UL) == ((g_376 = (safe_rshift_func_uint8_t_u_s((--g_204), 4))) <= l_694[2])))))), p_49))), (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(p_50, g_804)), g_365)))) ^ g_140), 0x51B2L)), l_805[2])), g_391[6], l_840), l_640));
                if (((-1L) > func_69(((safe_rshift_func_uint8_t_u_s((func_78((safe_rshift_func_int8_t_s_s(p_51, ((p_50 < (((((safe_mod_func_int8_t_s_s(l_694[1], g_392)) || func_69(p_50, (safe_add_func_int8_t_s_s(0x42L, func_69((safe_unary_minus_func_uint32_t_u(g_302)), (g_375[4][3][0] |= func_69(l_694[1], p_51, l_852)), g_695))), p_49)) <= (-1L)) == g_507) & 8UL)) < l_389[0][0][3]))), l_463) & 0xDD69L), 2)) < g_707), l_704, g_508)))
                {
                    unsigned char l_871[7] = {0xC4L, 0UL, 0xC4L, 0UL, 0xC4L, 0UL, 0xC4L};
                    int l_883 = 1L;
                    unsigned short l_917 = 65532UL;
                    unsigned long long l_919 = 0xCCCB5E046DEF2FB3LL;
                    int i;
                    l_871[1] = ((safe_rshift_func_uint8_t_u_u((p_51++), (g_695 & (~((p_49 == p_49) && l_866[1][0][0]))))) ^ (g_511 == (g_307 < (l_476 == (safe_rshift_func_uint16_t_u_u(func_78((safe_sub_func_int32_t_s_s(g_375[5][0][3], p_50)), l_841), 15))))));
                    l_694[1] ^= (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((func_83((l_704 = (+g_142)), (((func_78(g_142, g_204) >= (safe_lshift_func_int16_t_s_u(p_49, 8))) <= 18446744073709551612UL) > ((p_51 > g_695) == (g_763 = 0xC151L))), l_390[1][3], p_51) > l_871[2]), g_754[1][0])), l_389[0][2][3]));
                    for (g_763 = 0; (g_763 > 44); g_763 = safe_add_func_int16_t_s_s(g_763, 1))
                    {
                        unsigned l_880 = 4294967294UL;
                        l_880 |= p_50;
                    }
                    if ((safe_mod_func_uint32_t_u_u(((g_666 & p_51) > (l_694[1] = (l_704 = 1UL))), (l_883 = p_50))))
                    {
                        unsigned l_899 = 0x8845A26EL;
                        if (g_754[1][0])
                            break;
                        l_899 = ((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(func_78((safe_rshift_func_uint16_t_u_s((l_891 = l_890[0][0][1]), p_50)), (safe_mul_func_uint8_t_u_u((p_51 = 0xF3L), (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_898, (l_704 = p_50))), (p_50 && g_377)))))), g_666)), p_49)) | p_50);
                        p_50 ^= (safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((p_51 > g_115), l_899)) < func_78(l_898, l_899)), g_754[0][1]));
                    }
                    else
                    {
                        unsigned l_912 = 8UL;
                        int l_918 = (-5L);
                        p_50 = (l_890[0][0][1] == 4294967293UL);
                        p_50 = ((l_918 = (safe_sub_func_int64_t_s_s((0xC3L ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((((safe_div_func_int32_t_s_s((l_852 = func_78(l_898, l_912)), g_417)) >= (g_520 == (safe_lshift_func_int16_t_s_s(g_520, (((l_841 ^= g_391[0]) || (safe_div_func_uint8_t_u_u(g_507, 0x7AL))) >= g_508))))) != 0xA6A8EA15L) | l_917) > p_51) | l_898), 14)), 255UL))), p_49))) || l_919);
                    }
                }
                else
                {
                    int l_927[3][4] = {{0x2111A08CL, 1L, 0x5E41E54BL, 1L}, {0x2111A08CL, 1L, 0x5E41E54BL, 1L}, {0x2111A08CL, 1L, 0x5E41E54BL, 1L}};
                    int l_935 = 0x230660A0L;
                    unsigned short l_968 = 65532UL;
                    int i, j;
                    if ((0UL ^ func_69(((safe_add_func_int64_t_s_s((g_302 >= (l_694[1] = (p_51 != (l_922 || ((9UL ^ (!0L)) ^ (safe_rshift_func_int16_t_s_s(((g_142 |= ((g_568 &= l_475) || (l_476 &= (g_506 = g_507)))) & (safe_sub_func_int16_t_s_s(8L, g_666))), 14))))))), l_927[2][1])) || l_821[1][1][2]), g_115, l_922)))
                    {
                        int l_928[7][2] = {{0x6F0F1D08L, 0x6F0F1D08L}, {0x6F0F1D08L, 0x6F0F1D08L}, {0x6F0F1D08L, 0x6F0F1D08L}, {0x6F0F1D08L, 0x6F0F1D08L}, {0x6F0F1D08L, 0x6F0F1D08L}, {0x6F0F1D08L, 0x6F0F1D08L}, {0x6F0F1D08L, 0x6F0F1D08L}};
                        int l_929 = 0x389031F3L;
                        int i, j;
                        l_929 = (((((l_928[4][1] = l_756) <= g_377) & ((l_582 | 0UL) & (l_929 != l_694[2]))) & g_417) ^ (safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((l_929 || l_934), 0x61D50BE7L)), 0x71E8BBE87A6C7F9ALL)));
                    }
                    else
                    {
                        --g_936[1];
                        if (g_2)
                            break;
                        p_50 |= (safe_lshift_func_uint8_t_u_s(l_821[1][5][2], 6));
                        g_804 = ((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(3L, l_640)), (g_507 = ((g_572 | (+(safe_sub_func_int8_t_s_s(l_805[2], 0xA7L)))) && (p_50 == l_898))))) < (((-2L) ^ (l_821[1][5][2] = 7UL)) & l_927[2][1]));
                    }
                    l_389[0][0][3] = (g_112 ^ (safe_mod_func_int64_t_s_s(l_935, p_49)));
                    if ((p_51 | p_50))
                    {
                        unsigned l_953 = 4294967295UL;
                        l_898 = (g_804 &= (l_646 = (p_50 = g_391[7])));
                        g_520 &= (18446744073709551615UL & ((p_51 & (safe_add_func_uint16_t_u_u(l_389[0][0][0], ((safe_add_func_int32_t_s_s((p_50 = (l_953 == g_507)), g_376)) & func_78(g_936[1], (((g_505 = func_78((safe_mod_func_int32_t_s_s(((-1L) <= ((safe_rshift_func_uint16_t_u_u(g_375[4][7][3], p_51)) | 0x7E4EL)), g_506)), p_51)) && p_51) != g_508)))))) && p_51));
                    }
                    else
                    {
                        p_50 ^= g_391[6];
                    }
                    if ((safe_rshift_func_int8_t_s_s((((l_935 && 0x2028L) ^ 0UL) || p_49), 1)))
                    {
                        int l_961[10] = {(-5L), 0x3738C6ABL, (-5L), 0x3738C6ABL, (-5L), 0x3738C6ABL, (-5L), 0x3738C6ABL, (-5L), 0x3738C6ABL};
                        char l_963 = 9L;
                        int i;
                        if (g_239)
                            break;
                        g_964[7]--;
                    }
                    else
                    {
                        int l_967 = 0L;
                        ++l_968;
                        if (l_806)
                            break;
                    }
                }
            }
            l_704 |= (p_50 = l_866[1][0][1]);
            for (g_142 = 0; (g_142 > 17); g_142++)
            {
                const unsigned long long l_975[3][8] = {{18446744073709551606UL, 18446744073709551615UL, 0x42F2B91C441F5356LL, 18446744073709551615UL, 18446744073709551606UL, 0x8D22C9B9D7CA3E4BLL, 18446744073709551606UL, 18446744073709551615UL}, {18446744073709551606UL, 18446744073709551615UL, 0x42F2B91C441F5356LL, 18446744073709551615UL, 18446744073709551606UL, 0x8D22C9B9D7CA3E4BLL, 18446744073709551606UL, 18446744073709551615UL}, {18446744073709551606UL, 18446744073709551615UL, 0x42F2B91C441F5356LL, 18446744073709551615UL, 18446744073709551606UL, 0x8D22C9B9D7CA3E4BLL, 18446744073709551606UL, 18446744073709551615UL}};
                int i, j;
                p_50 |= 0xECC6003FL;
                g_976 = (safe_sub_func_uint32_t_u_u(g_392, l_975[2][7]));
                p_50 = p_50;
            }
        }
        for (l_732 = 0; (l_732 != 21); l_732 = safe_add_func_int64_t_s_s(l_732, 8))
        {
            char l_991 = (-1L);
            unsigned l_992 = 3UL;
            int l_1007 = 7L;
            long long l_1076 = (-1L);
            for (g_112 = 0; (g_112 < 26); g_112 = safe_add_func_uint32_t_u_u(g_112, 1))
            {
                unsigned l_988 = 0x9C7E8199L;
                for (g_507 = 1; (g_507 > (-15)); g_507 = safe_sub_func_int32_t_s_s(g_507, 8))
                {
                    l_821[1][5][2] ^= ((p_49 | p_50) && p_50);
                    for (g_641 = 0; g_641 < 5; g_641 += 1)
                    {
                        for (l_698 = 0; l_698 < 9; l_698 += 1)
                        {
                            for (g_152 = 0; g_152 < 2; g_152 += 1)
                            {
                                l_866[g_641][l_698][g_152] = 1UL;
                            }
                        }
                    }
                }
                p_50 = (((g_506 >= (safe_div_func_int64_t_s_s(((g_985 >= (safe_lshift_func_uint8_t_u_s((g_2 != l_732), (((g_239 && (g_760 <= (l_988 = p_51))) || (g_695 |= (safe_mul_func_uint8_t_u_u(l_991, (func_78(p_50, g_239) >= l_992))))) || g_108)))) != g_754[1][0]), l_991))) == l_704) | l_991);
                if (g_707)
                    goto lbl_420;
            }
            if ((safe_mul_func_int16_t_s_s(g_391[4], p_51)))
            {
                unsigned char l_1003 = 4UL;
                int l_1004 = 0xC880D4E3L;
                int l_1005 = 0xCD18E17AL;
                p_50 = ((l_995 | (l_992 != (g_375[4][7][3] < (safe_lshift_func_uint8_t_u_s(func_69(p_49, l_991, (safe_div_func_int8_t_s_s((l_991 == (g_376 = (g_1000 = l_389[0][0][3]))), 0xB0L))), 1))))) | p_51);
                for (g_112 = (-22); (g_112 == 39); g_112 = safe_add_func_uint64_t_u_u(g_112, 5))
                {
                    int l_1006 = (-1L);
                    int l_1009 = 0L;
                    int l_1011 = (-4L);
                    int l_1012 = 0xD04F25E9L;
                    int l_1014 = 6L;
                    int l_1015 = 0x56A60C6FL;
                    g_962 = p_50;
                    if (g_365)
                    {
                        int l_1008 = 8L;
                        g_962 = g_115;
                        if (l_1003)
                            break;
                        --g_1016[2];
                        l_1009 = (+p_51);
                    }
                    else
                    {
                        if (g_641)
                            goto lbl_1019;
                    }
                    l_1009 |= (safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_1007 = (safe_mul_func_uint16_t_u_u(g_776, l_463))), (((((((p_50 = l_821[3][7][2]) > (func_78(l_1005, g_375[3][8][3]) || (safe_lshift_func_uint16_t_u_s(0x0640L, 10)))) & ((g_375[4][7][3] < (safe_div_func_uint64_t_u_u((0UL <= p_51), 18446744073709551606UL))) | p_49)) | p_49) ^ g_239) < 0xA0112864L) & g_964[7]))), l_582)), p_51));
                }
            }
            else
            {
                unsigned long long l_1038 = 3UL;
                l_704 = g_641;
                for (p_49 = 0; (p_49 >= 28); ++p_49)
                {
                    unsigned long long l_1054 = 0xA83A2EC829D57B55LL;
                    int l_1059 = 0xF9DCAFE2L;
                    if (((func_69((safe_add_func_int64_t_s_s((-7L), ((l_934 = 0xBDL) && (l_389[0][0][3] = l_388)))), ((safe_add_func_int8_t_s_s(p_51, g_520)) > g_112), p_51) != p_49) || (-5L)))
                    {
                        l_1038++;
                        g_376 = ((safe_div_func_uint32_t_u_u(func_69((safe_div_func_int16_t_s_s(5L, (safe_mod_func_uint8_t_u_u(g_204, (safe_lshift_func_int8_t_s_u(p_49, 4)))))), (g_507 ^= (g_108 = g_707)), (l_1049 < (safe_mul_func_int8_t_s_s((((safe_add_func_int8_t_s_s(0xBDL, l_1054)) ^ (safe_lshift_func_int8_t_s_s(p_51, 1))) && (((safe_mod_func_int32_t_s_s((+7L), p_49)) | 1L) > g_666)), l_582)))), g_506)) == g_572);
                    }
                    else
                    {
                        unsigned char l_1060 = 0xFDL;
                        l_1059 = (p_50 = 2L);
                        l_1060++;
                        if (g_976)
                            break;
                    }
                }
                if (p_50)
                    break;
                l_1063 |= 0xBFDA7545L;
            }
            l_1076 = (safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_704, 2)) | (safe_lshift_func_int8_t_s_u(func_83(g_376, (safe_lshift_func_int16_t_s_s((((g_108 ^= ((g_112 ^= (g_641 >= p_50)) > (((0L > (g_666 &= p_49)) != ((g_707 = p_49) <= p_49)) < ((safe_sub_func_int64_t_s_s(((p_50 & 0xE6L) || p_49), 4UL)) | g_184[1][5][4])))) || p_50) ^ 0x6824565DA8E943DFLL), 6)), l_756, g_976), 5))), (-6L))), 4));
        }
        --l_1078;
        for (l_704 = 0; (l_704 > (-10)); l_704 = safe_sub_func_uint32_t_u_u(l_704, 1))
        {
            const long long l_1087[7][9][4] = {{{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}, {{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}, {{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}, {{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}, {{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}, {{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}, {{0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}, {0L, (-1L), (-1L), 0L}}};
            int l_1102 = 1L;
            int i, j, k;
            g_376 = (safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(func_83(((func_69(p_50, (l_934 = g_1016[1]), ((l_1087[0][1][3] || (safe_add_func_uint8_t_u_u(l_811, ((g_391[4] &= (safe_mod_func_int16_t_s_s(g_392, (safe_mod_func_int32_t_s_s((p_50 ^ l_791), p_50))))) > func_83((func_78(p_49, l_1087[4][0][2]) != 255UL), g_985, p_49, g_641))))) & g_962)) > p_51) <= 0x26L), g_1016[2], l_1094[3], p_50), 0x1A49L)) < p_50) ^ l_1087[1][5][0]), l_805[2]));
            for (l_756 = 22; (l_756 != (-28)); l_756 = safe_sub_func_int64_t_s_s(l_756, 6))
            {
                for (p_49 = 0; (p_49 <= 3); p_49 += 1)
                {
                    return g_962;
                }
                if (g_140)
                    continue;
            }
            g_520 = func_58((g_962 >= l_389[0][0][3]), l_1097, (safe_mod_func_uint64_t_u_u(g_964[8], (func_78((p_50 < 0x04L), g_754[0][1]) && g_2))), g_962);
            l_1102 |= (((--g_964[7]) & 0x25L) == g_754[1][1]);
        }
    }
    return l_866[1][7][1];
}







static unsigned char func_58(unsigned long long p_59, int p_60, unsigned p_61, unsigned char p_62)
{
    char l_323[5][1][4];
    int l_328 = 0x924E8431L;
    int l_374[4][9][2] = {{{0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}}, {{0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}}, {{0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}}, {{0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}, {0x506C6AABL, 0L}}};
    int l_387 = 0x5AA689BFL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_323[i][j][k] = (-1L);
        }
    }
lbl_311:
    g_140 = p_61;
    for (g_239 = 11; (g_239 >= 13); g_239 = safe_add_func_uint8_t_u_u(g_239, 3))
    {
        if (p_61)
            goto lbl_311;
        g_140 &= (g_112 & 0x858D2371772FEA18LL);
    }
    for (p_61 = 0; (p_61 <= 3); p_61 += 1)
    {
        unsigned short l_312 = 0xE045L;
        int l_324[10] = {0x214296BAL, 0x80F63046L, (-7L), (-7L), 0x80F63046L, 0x214296BAL, 0x80F63046L, (-7L), (-7L), 0x80F63046L};
        long long l_354 = 0x2709D279E9490086LL;
        int l_370 = 9L;
        int i;
        p_60 = g_115;
        for (p_60 = 3; (p_60 >= 0); p_60 -= 1)
        {
            char l_327 = 0x8AL;
            int l_346 = 1L;
            char l_372 = 0xA4L;
            if (func_83((l_312 || func_69(g_108, l_312, ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(func_78((safe_mod_func_uint8_t_u_u(p_62, (--g_307))), p_61), 2)) >= (g_204 < 0x2BL)) != g_115), g_2)), 0xEDF72888F7B402E1LL)) < l_327))), l_323[3][0][1], g_2, l_312))
            {
                char l_336[4];
                int l_343 = 0x78FCAF22L;
                int l_345 = 0xCE4B785AL;
                int l_347 = 0L;
                int i;
                for (i = 0; i < 4; i++)
                    l_336[i] = (-1L);
                for (g_204 = 0; (g_204 <= 3); g_204 += 1)
                {
                    char l_334 = 0x7CL;
                    int l_335 = 0xDE1094D6L;
                    int l_337[2][8][8] = {{{8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}}, {{8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}, {8L, 0xE541012FL, 0x2E55EC79L, (-1L), (-1L), 1L, (-7L), 0x241C6D6DL}}};
                    int i, j, k;
                    for (g_239 = 0; (g_239 <= 3); g_239 += 1)
                    {
                        int l_329 = 0x7A83810AL;
                        unsigned l_330 = 0x7C4E0F4DL;
                        int l_333 = (-7L);
                        int i, j, k;
                        ++l_330;
                        l_333 = (g_184[p_61][(p_60 + 3)][(g_239 + 1)] & ((p_59 = func_78(g_307, g_184[1][5][4])) & (0x5180EF6EL | p_60)));
                        l_328 &= p_62;
                    }
                    for (g_152 = 0; (g_152 <= 3); g_152 += 1)
                    {
                        char l_338[5][6] = {{0xBEL, 9L, 0xBEL, 9L, 0xBEL, 9L}, {0xBEL, 9L, 0xBEL, 9L, 0xBEL, 9L}, {0xBEL, 9L, 0xBEL, 9L, 0xBEL, 9L}, {0xBEL, 9L, 0xBEL, 9L, 0xBEL, 9L}, {0xBEL, 9L, 0xBEL, 9L, 0xBEL, 9L}};
                        int l_339 = 0xE7FB2DB8L;
                        int l_344 = 0x4875687AL;
                        int l_348 = 0x453E12EDL;
                        int i, j;
                        l_324[9] &= (9L & l_334);
                        g_340++;
                        --g_349;
                    }
                    g_365 &= (g_364 = (safe_sub_func_int16_t_s_s(l_354, func_78(((g_196 <= 7L) ^ (safe_unary_minus_func_int64_t_s(((safe_mod_func_uint8_t_u_u(g_152, 0x2EL)) == (0xF2044AD6L < (safe_add_func_int16_t_s_s((-5L), func_78(g_184[1][5][4], (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(p_61, l_334)), p_59)))))))))), p_62))));
                }
                if (p_59)
                    break;
            }
            else
            {
                unsigned short l_369 = 0UL;
                int l_371 = 0xACFC0601L;
                int l_373 = 0x1976BEC0L;
                for (g_152 = 0; (g_152 <= 3); g_152 += 1)
                {
                    unsigned char l_366 = 0UL;
                    for (g_204 = 0; (g_204 <= 3); g_204 += 1)
                    {
                        --l_366;
                        l_346 ^= (l_369 = 0x429E244CL);
                    }
                    for (l_354 = 0; (l_354 <= 3); l_354 += 1)
                    {
                        l_370 = 0x262044E5L;
                        return p_61;
                    }
                    for (p_62 = 0; (p_62 <= 3); p_62 += 1)
                    {
                        g_140 = (l_371 ^= 0xB44326F7L);
                        if (g_365)
                            continue;
                        return g_115;
                    }
                }
                g_377++;
                if ((safe_add_func_int16_t_s_s(p_60, (p_59 <= p_62))))
                {
                    return p_59;
                }
                else
                {
                    return g_140;
                }
            }
            for (g_142 = 0; (g_142 <= 3); g_142 += 1)
            {
                unsigned short l_384 = 5UL;
                g_140 = (safe_add_func_uint64_t_u_u(l_384, 0xAA44A49ADE88CFFDLL));
            }
        }
    }
    l_387 = (g_376 = (safe_mul_func_uint8_t_u_u(g_142, func_78(g_184[3][3][2], l_328))));
    return g_302;
}







static const unsigned long long func_69(char p_70, char p_71, unsigned p_72)
{
    long long l_305 = 0x6D8EFD3A0965E347LL;
    int l_306 = 3L;
    g_307 = func_83((l_306 ^= l_305), l_305, g_115, g_140);
    return l_306;
}







static unsigned short func_78(const char p_79, int p_80)
{
    unsigned l_287[7];
    int l_288 = 0x1611CA19L;
    int l_289[2][7] = {{2L, 3L, 1L, 3L, 2L, 0xC5E7DC01L, 2L}, {2L, 3L, 1L, 3L, 2L, 0xC5E7DC01L, 2L}};
    unsigned short l_290 = 1UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_287[i] = 0xF5D266F9L;
    l_287[2] ^= g_184[1][5][4];
    l_290--;
    l_289[1][2] |= (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(g_152, g_204)) <= (safe_unary_minus_func_int16_t_s(2L))), (l_288 = (safe_lshift_func_int8_t_s_u(g_184[1][5][4], (p_79 >= l_290)))))), 5));
    ++g_302;
    return g_239;
}







static const unsigned func_83(long long p_84, unsigned p_85, int p_86, long long p_87)
{
    char l_94 = 0x18L;
    int l_103[3];
    int l_114 = 0L;
    int l_215 = 4L;
    int i;
    for (i = 0; i < 3; i++)
        l_103[i] = 0xFBD42F90L;
    g_108 = (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_84, ((p_87 == l_94) != ((safe_add_func_uint32_t_u_u((l_103[0] &= ((safe_mod_func_int16_t_s_s(0xA21DL, l_94)) ^ (safe_rshift_func_uint8_t_u_s(g_2, (safe_lshift_func_int16_t_s_s(0x92EDL, p_86)))))), (safe_sub_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(g_2, 3)) > p_87) | 1UL) != g_2) <= p_87), 0L)))) >= l_94)))), g_2));
    for (p_85 = (-28); (p_85 < 27); ++p_85)
    {
        int l_113 = 0xCD947E9EL;
        unsigned l_116 = 0xE233AD2DL;
        unsigned char l_136 = 253UL;
        int l_139 = 0xB313CF36L;
        int l_141 = 0x311C7DC5L;
        unsigned l_194 = 0xEA65F88FL;
        g_112 = ((safe_unary_minus_func_uint64_t_u(g_2)) < p_84);
        if ((g_108 != (p_86 == (l_103[2] > ((++l_116) <= (((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(p_84, 1UL)) || (~(safe_sub_func_uint8_t_u_u(p_85, (((safe_lshift_func_int16_t_s_s(g_2, (safe_sub_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((l_136 = (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(l_113)), ((g_115 ^ l_113) & p_87)))), (-1L))) | 0UL), g_112)))) < g_112) | p_86))))), 0x84L)) && 0x352544EE796224A1LL) <= l_94))))))
        {
            unsigned long long l_150[3][5][3] = {{{18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}}, {{18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}}, {{18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}, {18446744073709551613UL, 0xC7A55566EC8B7CF1LL, 18446744073709551613UL}}};
            long long l_154 = 0L;
            int l_179 = (-4L);
            int i, j, k;
            for (p_86 = 0; (p_86 >= 4); ++p_86)
            {
                unsigned l_147 = 0UL;
                int l_153 = 0L;
                if ((l_103[0] = l_103[0]))
                {
                    long long l_151 = (-1L);
                    int l_167 = 0xD1BEB709L;
                    g_142--;
                    for (l_114 = 0; (l_114 != 25); ++l_114)
                    {
                        l_153 = (((g_112 <= (l_147 = p_85)) & (safe_div_func_int8_t_s_s(g_115, l_94))) <= ((l_150[1][3][1] >= p_87) != (g_152 = (!(l_151 = p_87)))));
                    }
                    l_167 = (l_154 & (((safe_rshift_func_int16_t_s_s((l_103[0] && l_136), (safe_add_func_uint64_t_u_u((((0x1F5D8E54L == (safe_add_func_uint32_t_u_u((((((l_116 && p_85) == ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_86, (l_150[1][3][1] && ((0xC282E8BC9617CC22LL && l_151) > 0UL)))), g_142)) >= 0L)) ^ 18446744073709551615UL) > p_87) >= 0xD07CL), p_87))) & p_87) || g_108), l_116)))) <= 0x4A0CBBBBL) && p_86));
                    l_103[0] ^= (!p_84);
                }
                else
                {
                    unsigned char l_170 = 0x61L;
                    for (l_94 = 0; (l_94 > (-6)); l_94--)
                    {
                        if (l_170)
                            break;
                    }
                    if ((l_170 != p_87))
                    {
                        g_140 = ((safe_mul_func_uint8_t_u_u(((~(g_184[1][5][4] &= (safe_rshift_func_uint8_t_u_u((((0xC1L <= ((0x07L < ((~((l_179 = (safe_add_func_uint64_t_u_u(g_2, (l_147 | (g_142 &= (g_152 >= (safe_lshift_func_uint8_t_u_u(p_86, 4)))))))) != (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(p_86, l_150[0][4][1])), g_152)))) >= g_115)) >= (-2L))) | 0x826083B5L) & 1L), 4)))) <= 0UL), l_114)) > g_108);
                        l_139 = l_179;
                    }
                    else
                    {
                        int l_189 = 0xACF18562L;
                        int l_195 = 0xBF9FC003L;
                        g_140 &= (l_114 &= (safe_div_func_uint16_t_u_u(l_141, (~0x8C8BL))));
                        g_140 = ((l_147 == ((safe_lshift_func_uint16_t_u_u((0xA1BCL & g_152), 4)) & (l_189 &= g_115))) != (safe_mul_func_int16_t_s_s((l_195 = (l_153 && (safe_lshift_func_uint16_t_u_s((l_194 != (l_136 == (0xB449E253L != (p_86 != g_152)))), g_140)))), 0xEBAAL)));
                        g_196--;
                    }
                    return l_147;
                }
            }
            if (g_196)
                continue;
        }
        else
        {
            int l_201 = 0xF318A4EBL;
            for (g_152 = (-5); (g_152 != 56); g_152++)
            {
                p_86 |= l_201;
            }
        }
    }
    for (p_85 = 14; (p_85 < 26); p_85++)
    {
        const long long l_211 = 8L;
        int l_240 = (-7L);
        g_204--;
        for (g_204 = 0; (g_204 <= 2); g_204 += 1)
        {
            unsigned long long l_218 = 0xFB30C423CDDDF838LL;
            int i;
            for (g_152 = 0; (g_152 <= 3); g_152 += 1)
            {
                int l_214 = 0L;
                int i, j, k;
                if ((l_218 = (l_103[g_204] = ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((((l_103[g_204] ^ g_184[g_152][(g_204 + 3)][g_152]) ^ (l_114 = p_84)) < (l_211 > ((safe_lshift_func_int16_t_s_s((l_215 = l_214), 6)) & (g_2 >= (safe_lshift_func_int16_t_s_s((l_211 | p_87), 1)))))), (g_196 == 0L))), 5)) > p_86))))
                {
                    int l_233 = 2L;
                    g_140 = (((safe_mod_func_int64_t_s_s(p_87, g_115)) || ((safe_lshift_func_int16_t_s_s(((0xD107E331L >= ((safe_div_func_uint32_t_u_u((g_152 < 8L), g_142)) == g_2)) < (safe_div_func_int32_t_s_s((g_2 ^ (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(0x9211E982L, (-1L))), 0xB261D9612183A9A7LL))), 0xD6090396L))), l_233)) >= p_84)) | l_211);
                    for (l_233 = 0; (l_233 <= 2); l_233 += 1)
                    {
                        return g_184[1][6][3];
                    }
                }
                else
                {
                    long long l_238 = (-1L);
                    g_239 = (g_140 <= ((((l_103[g_204] < 9UL) ^ l_103[1]) | (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_86, l_238)), p_84))) ^ l_211));
                    return p_87;
                }
            }
            return l_103[g_204];
        }
        p_86 = (p_87 && (p_87 >= g_239));
        if (((l_240 = g_152) && ((-2L) && ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_114)), 7)) > g_204))))
        {
            for (g_142 = 0; (g_142 != 18); g_142 = safe_add_func_uint32_t_u_u(g_142, 2))
            {
                return p_87;
            }
            if (p_87)
                break;
        }
        else
        {
            char l_250 = 0x32L;
            int l_276 = (-9L);
            long long l_284 = (-8L);
            if (g_239)
                break;
            l_103[0] = (safe_add_func_uint16_t_u_u(p_84, p_87));
            for (l_215 = 3; (l_215 >= 0); l_215 -= 1)
            {
                int l_277 = 0xDAF4E41DL;
                int l_285 = 0L;
                g_140 = (l_250 | (1UL & (safe_lshift_func_int8_t_s_s(0x7EL, 4))));
                for (g_142 = 0; (g_142 <= 3); g_142 += 1)
                {
                    int l_265 = 0x155B11B7L;
                    for (g_108 = 3; (g_108 >= 0); g_108 -= 1)
                    {
                        int i, j, k;
                        p_86 = (safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(g_184[g_108][(g_142 + 3)][(g_108 + 1)], (safe_mod_func_int8_t_s_s((g_115 = ((safe_add_func_uint16_t_u_u(g_142, ((safe_sub_func_int32_t_s_s(g_2, (safe_lshift_func_uint16_t_u_u(g_184[g_108][(g_142 + 3)][(g_108 + 1)], (l_265 & (l_276 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(p_85, (safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(p_85, (l_211 <= g_184[1][5][4]))) | g_108), p_85)))), 1)), g_115)))))))) <= g_142))) & 0x03B6C18EB078A46ELL)), g_152)))), g_2));
                        g_140 = ((g_184[g_108][(g_142 + 3)][(g_108 + 1)] || (l_277 == ((safe_rshift_func_int16_t_s_s((-3L), p_85)) != g_140))) | (g_112 = (l_285 = (safe_add_func_int8_t_s_s((g_108 <= (safe_mod_func_int8_t_s_s((l_240 | (((0x2EEF4D9A01408C7FLL && g_115) ^ p_84) > l_284)), p_85))), g_142)))));
                    }
                    p_86 = p_84;
                    for (l_277 = 0; (l_277 <= 2); l_277 += 1)
                    {
                        int i;
                        p_86 &= l_103[l_277];
                        if (g_184[2][0][3])
                            continue;
                        return g_142;
                    }
                }
            }
        }
    }
    return l_103[0];
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
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_184[i][j][k], "g_184[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_375[i][j][k], "g_375[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_391[i], "g_391[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_754[i][j], "g_754[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_936[i], "g_936[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_964[i], "g_964[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1016[i], "g_1016[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1205, "g_1205", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1211[i], "g_1211[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1223, "g_1223", print_hash_value);
    transparent_crc(g_1246, "g_1246", print_hash_value);
    transparent_crc(g_1257, "g_1257", print_hash_value);
    transparent_crc(g_1269, "g_1269", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1682, "g_1682", print_hash_value);
    transparent_crc(g_1701, "g_1701", print_hash_value);
    transparent_crc(g_1726, "g_1726", print_hash_value);
    transparent_crc(g_1869, "g_1869", print_hash_value);
    transparent_crc(g_1891, "g_1891", print_hash_value);
    transparent_crc(g_1892, "g_1892", print_hash_value);
    transparent_crc(g_1989, "g_1989", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2013[i][j], "g_2013[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2150, "g_2150", print_hash_value);
    transparent_crc(g_2152, "g_2152", print_hash_value);
    transparent_crc(g_2155, "g_2155", print_hash_value);
    transparent_crc(g_2160, "g_2160", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2161[i], "g_2161[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2162, "g_2162", print_hash_value);
    transparent_crc(g_2163, "g_2163", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
