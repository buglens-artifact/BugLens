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



static int g_4 = 0xCE53D8DAL;
static int g_9[1] = {0x6B65720BL};
static int *g_8 = &g_9[0];
static short g_20 = 0x4137L;
static short g_22 = 0xC1E0L;
static char g_24 = 0xC5L;
static char g_44 = 7L;
static long long g_46[9] = {0x546153B72B46FAC5LL, 0x546153B72B46FAC5LL, 0xC01F903A798BE49CLL, 0x546153B72B46FAC5LL, 0x546153B72B46FAC5LL, 0xC01F903A798BE49CLL, 0x546153B72B46FAC5LL, 0x546153B72B46FAC5LL, 0xC01F903A798BE49CLL};
static int g_66[10][8][3] = {{{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}, {{0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}, {0L, 0xDC6606A8L, 5L}}};
static char g_91 = 0x4EL;
static short g_93 = 0x24B6L;
static unsigned long long g_96[3][6][6] = {{{18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}}, {{18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}}, {{18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}, {18446744073709551612UL, 0x10CB638BEBE6BB75LL, 0xE39E102BB1848449LL, 0x04C19E56F2F1483ALL, 18446744073709551615UL, 4UL}}};
static short *g_102 = &g_93;
static short **g_101[3][1] = {{&g_102}, {&g_102}, {&g_102}};
static long long g_123 = 0x317561C6BE33A23ELL;
static unsigned g_133 = 0x07BA8037L;
static const int g_148[6] = {1L, 1L, 1L, 1L, 1L, 1L};
static const int *g_149[6][1][2] = {{{(void*)0, (void*)0}}, {{(void*)0, (void*)0}}, {{(void*)0, (void*)0}}, {{(void*)0, (void*)0}}, {{(void*)0, (void*)0}}, {{(void*)0, (void*)0}}};
static short g_157 = 2L;
static long long * const g_163[7] = {&g_46[0], &g_46[0], &g_46[0], &g_46[0], &g_46[0], &g_46[0], &g_46[0]};
static long long * const *g_162 = &g_163[5];
static int **g_188 = &g_8;
static int ***g_187[7][8] = {{&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}, {&g_188, &g_188, &g_188, &g_188, (void*)0, &g_188, &g_188, &g_188}};
static char g_194 = 0x66L;
static unsigned short g_203 = 0x3112L;
static unsigned long long g_254 = 1UL;
static int g_256 = (-1L);
static char g_299 = (-7L);
static unsigned char g_341 = 0UL;
static unsigned char g_366 = 0x82L;
static short g_370[8][6][1] = {{{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}, {{0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}, {0x3A8FL}}};
static unsigned g_467 = 1UL;
static char *g_492 = &g_194;
static short g_538 = 0x952BL;
static int g_539 = 0xE0DC2B89L;
static short *g_742[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static char g_874 = 1L;
static short g_952 = 1L;
static short g_957 = (-4L);
static unsigned *g_979 = &g_133;
static unsigned **g_978 = &g_979;



static short func_1(void);
static unsigned long long func_11(unsigned p_12, unsigned p_13, unsigned short p_14, int p_15);
static unsigned func_26(int p_27);
static unsigned func_31(unsigned long long p_32, unsigned short p_33, char p_34, int p_35);
static int func_36(short * p_37, const char * p_38);
static unsigned long long func_39(short p_40, short * p_41, unsigned p_42, unsigned p_43);
static char func_55(unsigned short p_56);
static unsigned func_57(char p_58, unsigned p_59, char p_60, const unsigned long long p_61);
static unsigned func_62(int * const * p_63, int p_64);
static int func_76(char p_77, long long * p_78, unsigned p_79, unsigned long long p_80, long long p_81);
static short func_1(void)
{
    int *l_2 = (void*)0;
    int *l_3 = &g_4;
    unsigned l_5[7] = {18446744073709551610UL, 0xE0B4074DL, 18446744073709551610UL, 0xE0B4074DL, 18446744073709551610UL, 0xE0B4074DL, 18446744073709551610UL};
    int l_953 = 1L;
    unsigned l_962[8];
    int l_963 = 0xFF935FA5L;
    long long l_966 = 1L;
    short *l_971 = &g_538;
    int *l_972[1][1];
    unsigned short l_973 = 3UL;
    char l_980 = 3L;
    unsigned l_981[8];
    short **l_984 = &l_971;
    unsigned l_985 = 0x606D0C6AL;
    long long l_986[8][6][5] = {{{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}, {{0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}, {0xD416DCD82B855E77LL, 0xC068DF79B36E8301LL, 0xC068DF79B36E8301LL, 0xD416DCD82B855E77LL, 0x1A45B078A6CA5990LL}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_962[i] = 0x805760C6L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_972[i][j] = (void*)0;
    }
    for (i = 0; i < 8; i++)
        l_981[i] = 1UL;
    (*l_3) = (-1L);
    for (g_4 = 2; (g_4 <= 6); g_4 += 1)
    {
        int **l_6 = &l_3;
        int **l_7[2];
        short l_10 = 0xB5CFL;
        int l_954 = 6L;
        int i;
        for (i = 0; i < 2; i++)
            l_7[i] = (void*)0;
        g_8 = ((*l_6) = (void*)0);

        ;
        ;
        l_10 = (g_9[0] = g_9[0]);
        for (l_10 = 0; (l_10 <= 6); l_10 += 1)
        {
            unsigned char l_18 = 0x06L;
            short *l_19 = &g_20;
            short *l_21 = &g_22;
            char *l_23[8];
            int l_25[7][4] = {{0L, 6L, 1L, 6L}, {0L, 6L, 1L, 6L}, {0L, 6L, 1L, 6L}, {0L, 6L, 1L, 6L}, {0L, 6L, 1L, 6L}, {0L, 6L, 1L, 6L}, {0L, 6L, 1L, 6L}};
            int l_959 = 0x3C34B7B0L;
            int i, j;
            for (i = 0; i < 8; i++)
                l_23[i] = &g_24;
        }
    }

    ;
    ;
    l_973 = (((safe_mul_func_uint16_t_u_u((((l_963 = (g_123 <= (0x66BB9CD3L || g_203))) | (safe_add_func_int32_t_s_s((!l_953), l_966))) | ((g_299 &= (((safe_add_func_uint8_t_u_u(((func_76(func_57((safe_rshift_func_int16_t_s_u((-2L), g_370[6][2][0])), (func_36(l_971, &g_44) == 4L), g_46[1], g_366), &l_966, g_203, g_133, (**g_162)) & g_370[7][3][0]) >= 0L), 0xE7L)) & g_66[9][2][1]) || g_91)) , 0xCD9D9221L)), g_957)) & (*g_102)) & g_148[4]);


    l_986[0][5][4] = (l_985 = (safe_mod_func_int16_t_s_s((*g_102), (((*g_102) >= (((safe_add_func_int64_t_s_s((g_978 == &g_979), l_980)) <= l_981[6]) || func_57((*g_492), ((**g_978) &= ((safe_sub_func_int32_t_s_s(7L, (((*l_984) = l_971) != (void*)0))) > (-1L))), (*g_492), g_539))) , (*g_102)))));
    return (*g_102);
}







static unsigned long long func_11(unsigned p_12, unsigned p_13, unsigned short p_14, int p_15)
{
    unsigned short l_955 = 65535UL;
    int l_956 = 6L;
    l_956 |= l_955;
    return g_957;
}







static unsigned func_26(int p_27)
{
    int *l_28 = &g_9[0];
    long long *l_45[3];
    unsigned l_47 = 4294967288UL;
    int l_48 = 7L;
    short *l_369 = &g_370[3][3][0];
    char *l_371[8][1] = {{&g_24}, {&g_24}, {&g_24}, {&g_24}, {&g_24}, {&g_24}, {&g_24}, {&g_24}};
    char l_378 = 0xCFL;
    int *l_767 = &g_66[5][5][0];
    unsigned short l_768 = 0x5F86L;
    int ** const l_783[4][2][8] = {{{&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}, {&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}}, {{&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}, {&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}}, {{&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}, {&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}}, {{&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}, {&l_28, &g_8, &l_28, &g_8, &l_28, (void*)0, &l_28, (void*)0}}};
    long long l_784 = 0x3F1600C81F808469LL;
    long long l_798 = 1L;
    unsigned l_815[4] = {3UL, 0xFEDBBAFDL, 3UL, 0xFEDBBAFDL};
    short **l_843 = &g_742[5];
    int l_868 = 0x5342AC4EL;
    short l_869 = 0x8F4DL;
    long long l_936 = 0x96D2B1D21404D2D8LL;
    unsigned *l_943 = &g_133;
    unsigned ** const l_942 = &l_943;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_45[i] = &g_46[7];
    g_8 = l_28;

    ;
    (*l_767) = ((safe_mod_func_uint64_t_u_u(g_9[0], ((*l_28) ^ ((*l_28) >= func_31((*l_28), (g_24 != func_36((func_39((g_44 |= p_27), ((((((l_48 = (l_47 = (*l_28))) == (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_369) &= (safe_add_func_int16_t_s_s((func_55((func_57(g_24, func_62(&g_8, (*l_28)), (*l_28), g_148[4]) , 65534UL)) & g_4), p_27))) & (*l_28)), g_9[0])), (*l_28)))) | (*l_28)) , &g_299) == l_371[5][0]) , l_369), g_148[4], g_9[0]) , (void*)0), l_371[5][0])), l_378, g_148[4]))))) , 0x73E66A29L);




    ;
    (*g_188) = &l_48;

    ;
    if ((l_768 != p_27))
    {
        int l_771 = 0x64DD0F74L;
        unsigned short *l_772[2][1];
        int l_773 = 9L;
        int l_786 = 0x625411F5L;
        int l_787 = 0x2D15611BL;
        int l_788 = 0x4694BC05L;
        int l_789 = 1L;
        int l_790 = 0x141535EEL;
        int l_791 = 6L;
        int l_792 = 0xF690305AL;
        int l_793 = 0xEE6513DEL;
        int l_794 = 0x68A2C3EDL;
        int l_795 = (-6L);
        int l_796 = 4L;
        int l_797 = 0L;
        int l_799[3];
        unsigned char l_801 = 0xCCL;
        int ***l_806[8] = {(void*)0, &g_188, (void*)0, &g_188, (void*)0, &g_188, (void*)0, &g_188};
        unsigned * const l_807 = &l_47;
        int * const *l_820 = &g_8;
        int * const **l_819 = &l_820;
        unsigned char l_857 = 0x26L;
        long long l_875 = 0x41E305F3E1681061LL;
        int l_899 = 0x60DBEEADL;
        unsigned long long l_900 = 0xA829EAB33595CFFFLL;
        unsigned l_903 = 0x74107404L;
        unsigned l_906 = 0UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_772[i][j] = &l_768;
        }
        for (i = 0; i < 3; i++)
            l_799[i] = 0x1F9D8A3CL;
        (*g_8) = (g_366 , p_27);
        if (((l_773 = (safe_lshift_func_int16_t_s_u((p_27 == (l_771 >= ((**g_162) = (*l_28)))), 7))) <= l_771))
        {
            unsigned l_780[8][3] = {{0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}, {0x53257DB3L, 0xC96ED868L, 0x34470639L}};
            int l_785[9][6] = {{0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}, {0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL, 0xA8B50BB3L, 0xA8B50BB3L, 0x0F638C1FL}};
            char l_800 = 0x22L;
            int i, j;
            (*l_767) = (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((p_27 , (-4L)), p_27)), 8)), (l_785[4][0] = (g_256 != ((0L >= (safe_rshift_func_uint8_t_u_s(((l_783[3][1][6] != (p_27 , (void*)0)) | l_784), 7))) || p_27)))));
            --l_801;
            for (l_798 = 22; (l_798 < (-8)); --l_798)
            {
                int l_808 = 0xEA5286AFL;
            }
            for (l_800 = 0; (l_800 > 15); l_800 = safe_add_func_uint8_t_u_u(l_800, 8))
            {
                for (l_794 = (-29); (l_794 <= 9); l_794 = safe_add_func_uint32_t_u_u(l_794, 1))
                {
                    int *l_814 = &l_785[4][0];
                    l_814 = ((*g_188) = &l_785[4][0]);

                    ;
                }
                l_815[3]--;
            }

            ;
        }
        else
        {
            unsigned l_838[4];
            short ** const l_844 = (void*)0;
            int l_851 = 0x8EDF995AL;
            int l_854 = (-5L);
            int l_855 = 0x90CC599FL;
            int l_856[2][2][2];
            char l_905 = 0x67L;
            int *l_911 = &g_256;
            const int l_924 = 0xEF797C4BL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_838[i] = 5UL;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_856[i][j][k] = (-1L);
                }
            }
            (*g_188) = (void*)0;

            ;
            (*l_767) ^= p_27;
            (*g_188) = (*g_188);
            for (l_797 = 0; (l_797 <= 6); l_797 += 1)
            {
                unsigned long long l_818 = 18446744073709551615UL;
                short *l_829[7];
                int l_848 = 0x31C99599L;
                int l_852 = 0xFE956F82L;
                int l_863[7] = {0x0646B95BL, 0x0646B95BL, 0xEE75B65FL, 0x0646B95BL, 0x0646B95BL, 0xEE75B65FL, 0x0646B95BL};
                char l_873 = 0L;
                long long *l_904 = &g_46[7];
                int **l_910 = &l_28;
                int l_915 = 0x37960363L;
                unsigned l_919 = 0x54270AAEL;
                unsigned char l_937 = 0x66L;
                int i;
                for (i = 0; i < 7; i++)
                    l_829[i] = &g_157;
                for (l_47 = 0; (l_47 <= 6); l_47 += 1)
                {
                    int * const ***l_821 = &l_819;
                    unsigned long long *l_828[3];
                    const char *l_841 = &l_378;
                    short ***l_842[4];
                    unsigned *l_845 = (void*)0;
                    unsigned *l_846[6];
                    unsigned char l_847 = 0x85L;
                    int l_861 = 0xED03EE00L;
                    int l_862 = 0x38E02A87L;
                    int l_864 = 0x7B4E6C99L;
                    int l_870 = 1L;
                    int l_871 = 0xF1619F60L;
                    int l_872[7] = {0x576B7190L, 0L, 0x576B7190L, 0L, 0x576B7190L, 0L, 0x576B7190L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_828[i] = &g_254;
                    for (i = 0; i < 4; i++)
                        l_842[i] = &g_101[2][0];
                    for (i = 0; i < 6; i++)
                        l_846[i] = &l_815[3];
                    (*l_767) = (l_818 == p_27);
                    if ((safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((func_39(((void*)0 == l_828[1]), l_829[2], g_341, ((((g_467 &= ((((g_203 = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_s((*l_28), (p_27 | l_838[3]))))) == (safe_mod_func_uint32_t_u_u(((l_843 = (func_36((g_742[l_47] = l_369), l_841) , (void*)0)) == l_844), 0xE6030E60L))), 0x663690F243B180B6LL)), 5))) , p_27) & 0x98L) ^ g_93)) && l_838[3]) > p_27) == 5L)) || l_847), g_46[7])) , l_848), p_27)))
                    {
                        short l_849[8] = {0x1F13L, 0x1F13L, 0x519EL, 0x1F13L, 0x1F13L, 0x519EL, 0x1F13L, 0x1F13L};
                        int l_850 = (-1L);
                        int l_853 = 0x10B84736L;
                        int i;
                        l_857++;
                    }
                    else
                    {
                        short *l_860 = &g_157;
                        int l_865 = 1L;
                        int l_866 = 0x90C64396L;
                        int l_867[4][1] = {{0xF67F8A90L}, {0xF67F8A90L}, {0xF67F8A90L}, {0xF67F8A90L}};
                        unsigned l_876 = 0x522D1413L;
                        int i, j;
                        l_854 = (p_27 | l_838[1]);
                        l_861 = (252UL >= func_36(l_860, &g_299));
                        l_876++;
                        l_867[0][0] &= (p_27 ^ func_76(l_818, &g_46[7], (safe_mul_func_uint8_t_u_u(((~(!((g_9[0] != func_57(((safe_sub_func_uint32_t_u_u(((((func_57(((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u(0UL, (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(248UL, 3)) || (*g_102)), 1L)))) >= ((func_57((func_76(p_27, l_828[1], l_876, p_27, p_27) , p_27), p_27, g_194, p_27) < g_44) & l_854)) | (-6L)), p_27)), p_27)) , (-10L)), g_366, p_27, (*l_28)) > 6L) != (-3L)) , p_27) != l_876), (-1L))) && 0xE725214749AEF554LL), g_66[2][7][0], g_299, g_366)) | g_254))) > p_27), (-1L))), g_148[4], p_27));
                    }

                    ;
                }
                (*l_767) = (((safe_rshift_func_uint8_t_u_u((((((((&g_163[5] != (((l_900 = (safe_rshift_func_int16_t_s_s(((*g_102) ^= (safe_add_func_int64_t_s_s((**g_162), (l_856[1][1][0] = l_899)))), p_27))) , ((g_148[1] && (((0x507732B9D96FFAFELL <= (safe_rshift_func_int8_t_s_s(p_27, ((func_76((~(func_57(l_856[1][1][0], p_27, l_903, g_256) > 255UL)), l_904, l_863[1], g_194, (*l_767)) | l_905) <= 2UL)))) , p_27) , l_863[5])) <= l_906)) , &g_163[6])) >= p_27) , (**g_162)) <= p_27) , p_27) > p_27) , l_838[0]), 2)) | 0xB14C33A0L) , p_27);
                l_852 ^= ((*l_767) &= p_27);
                for (l_796 = 3; (l_796 >= 0); l_796 -= 1)
                {
                    char l_909 = 0x5AL;
                    int l_918 = 0x0CF1E6C1L;
                    for (l_855 = 0; (l_855 <= 6); l_855 += 1)
                    {
                        unsigned l_912 = 1UL;
                        int l_916 = 0xAB7FDC40L;
                        int l_917[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_917[i] = 0x56058AD3L;
                        l_911 = ((*l_910) = ((safe_mod_func_uint8_t_u_u(p_27, (l_909 , 0x01L))) , ((*g_188) = ((p_27 == (g_96[2][0][2] & ((p_27 == ((p_27 , l_910) == ((*l_819) = l_910))) && g_203))) , &l_856[1][1][0]))));

                        ;
                        ;
                        ;
                        ;
                        if ((*g_8))
                            continue;
                        ++l_912;
                        ++l_919;
                    }
                    for (l_47 = 0; (l_47 <= 3); l_47 += 1)
                    {
                        int l_935 = 1L;
                        (*l_910) = ((safe_sub_func_int16_t_s_s(0x165FL, (g_366 || (l_924 , (g_24 |= (safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((*g_102) = ((func_57(g_194, (((safe_lshift_func_uint16_t_u_s((((0x4BE1L && g_366) < (safe_mul_func_uint16_t_u_u(g_44, (func_39(p_27, l_772[1][0], l_935, g_256) != p_27)))) >= l_918), (*g_102))) >= 4294967295UL) != 0UL), p_27, p_27) || (-6L)) && g_874)), l_936)) <= 0x1324C8B5L), 1)), l_918))))))) , &l_856[0][1][1]);

                        ;
                    }
                    for (g_467 = 0; (g_467 <= 0); g_467 += 1)
                    {
                        int i, j;
                        l_863[5] = l_937;
                    }
                    (*l_767) = p_27;
                }
            }

            ;
            ;

            ;
            ;
            ;
        }




        ;
        ;
    }
    else
    {
        unsigned short l_941[1];
        int l_950 = (-4L);
        int l_951 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_941[i] = 1UL;
        l_941[0] = (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(p_27, p_27))));
        (*g_188) = (*g_188);
        l_951 |= (((((void*)0 != l_942) && (((0x66L > (safe_sub_func_int8_t_s_s(p_27, (0xB6L & l_941[0])))) && (safe_add_func_int16_t_s_s((p_27 , ((*g_102) = ((**g_162) == (safe_sub_func_int64_t_s_s(((l_941[0] < p_27) , p_27), p_27))))), l_950))) ^ g_46[8])) < l_941[0]) | g_91);
    }




    ;
    return p_27;


}







static unsigned func_31(unsigned long long p_32, unsigned short p_33, char p_34, int p_35)
{
    unsigned short l_379 = 0x284EL;
    long long *l_389[9];
    long long **l_388 = &l_389[8];
    long long ***l_387 = &l_388;
    long long ****l_386 = &l_387;
    int * const *l_390[1];
    int * const **l_391 = (void*)0;
    int * const **l_392 = &l_390[0];
    short *l_435 = &g_93;
    unsigned l_440 = 0UL;
    unsigned char *l_468 = &g_366;
    short l_519 = 0L;
    short **l_578 = &g_102;
    unsigned short l_587[10][4][4] = {{{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}, {{0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}, {0x91D2L, 0x1800L, 1UL, 2UL}}};
    char * const *l_611[2];
    unsigned long long *l_645 = &g_96[1][4][0];
    unsigned long long **l_644 = &l_645;
    unsigned long long ***l_643[8][8] = {{&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}, {&l_644, &l_644, (void*)0, &l_644, &l_644, (void*)0, (void*)0, (void*)0}};
    int l_670 = 7L;
    int l_714 = 0x163DF698L;
    long long l_757[8][3][7] = {{{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}, {{0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}, {0L, 3L, 0L, 1L, (-4L), 0x5EC8E52DBA126530LL, 0L}}};
    unsigned l_760 = 0xFAC79C59L;
    char l_764 = 0x7AL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_389[i] = &g_46[7];
    for (i = 0; i < 1; i++)
        l_390[i] = &g_8;
    for (i = 0; i < 2; i++)
        l_611[i] = &g_492;
    l_379++;
    if ((l_379 > (0x5CE1D921L | ((safe_add_func_uint64_t_u_u((p_34 , ((((safe_add_func_int64_t_s_s(((((*l_386) = (void*)0) == &g_162) | p_35), func_76(g_9[0], &g_123, g_9[0], g_366, p_35))) >= 1L) , 65535UL) && 0L)), p_32)) , p_34))))
    {
        long long l_395 = 0x8D402E766FCFF188LL;
        int * const *l_409[10][10][2] = {{{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}, {{&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}, {&g_8, (void*)0}}};
        int i, j, k;
        for (p_32 = 1; (p_32 <= 8); p_32 += 1)
        {
            unsigned l_404 = 0x11A78C62L;
            unsigned char *l_407 = (void*)0;
            unsigned char *l_408[8] = {(void*)0, &g_341, (void*)0, &g_341, (void*)0, &g_341, (void*)0, &g_341};
            int l_410 = (-10L);
            int l_439[9] = {0x90605673L, 0xA6B9DA72L, 0x90605673L, 0xA6B9DA72L, 0x90605673L, 0xA6B9DA72L, 0x90605673L, 0xA6B9DA72L, 0x90605673L};
            int i;
            (*g_188) = (((((+(safe_mod_func_int64_t_s_s(((**g_162) = (((((((((l_395 == (safe_rshift_func_uint16_t_u_u(l_395, 6))) , ((((g_254 < 0x84BFL) <= ((safe_add_func_uint8_t_u_u(4UL, l_395)) < ((((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(0L, (g_341 = (l_404 || ((((g_366 = (safe_sub_func_int16_t_s_s((((g_96[0][2][0] > (-10L)) || g_203) >= p_34), p_32))) >= l_395) , 0xDAC76223L) | 1UL))))) , 4294967286UL) != p_33), g_46[7])) , p_33) < 1L) || l_395))) , (void*)0) != (void*)0)) || g_24) >= p_33) != 18446744073709551606UL) & p_33) , l_404) <= g_148[4]) == g_133)), 0xE96AA4F085E7E288LL))) >= g_24) | l_395) == p_35) , (void*)0);

            ;
            l_410 |= (((p_34 | (((*g_102) , &g_102) != (void*)0)) , l_404) , l_404);
            for (g_299 = 0; (g_299 <= 8); g_299 += 1)
            {
                unsigned l_411 = 0UL;
                int l_416 = 3L;
                int l_419 = 3L;
                int l_434[10] = {(-1L), (-1L), 0x3E912BB9L, (-1L), (-1L), 0x3E912BB9L, (-1L), (-1L), 0x3E912BB9L, (-1L)};
                int i;
                l_411++;
                for (g_203 = 3; (g_203 <= 8); g_203 += 1)
                {
                    short l_417 = (-1L);
                    int l_418 = (-1L);
                    unsigned short l_421 = 7UL;
                    for (g_44 = 8; (g_44 >= 0); g_44 -= 1)
                    {
                        int l_414 = 0xDA808235L;
                        int l_415 = 0x0F4AC224L;
                        int l_420 = 0x54BB79E5L;
                        unsigned *l_426 = &l_404;
                        short *l_433 = &g_370[3][3][0];
                        unsigned *l_436 = (void*)0;
                        unsigned short *l_437 = &l_379;
                        unsigned short *l_438 = &l_421;
                        l_421--;
                        l_439[1] &= ((((p_33 = ((*l_438) = (safe_add_func_int64_t_s_s(((l_410 = ((l_419 = (((((((*l_426)--) ^ p_34) && g_93) == g_341) >= (safe_sub_func_int64_t_s_s((0x362DF50C12553DBCLL > ((safe_lshift_func_uint8_t_u_s(p_33, 2)) & ((*l_437) = (~func_36(l_433, ((func_57(l_434[7], (l_420 ^= func_39((p_33 , (((g_299 == g_341) , l_416) , 0xF7B0L)), l_435, l_418, p_33)), l_434[5], g_91) , 0x0A999F68L) , &g_299)))))), (**g_162)))) > p_33)) != g_9[0])) , 0xC4EE64D32BBDD196LL), l_414)))) && l_414) > (-5L)) < p_35);
                        l_440++;
                        (*g_188) = &l_420;

                        ;
                    }


                    (*g_188) = (void*)0;

                    ;
                }
            }
        }


    }
    else
    {
        short l_443 = 0x2C9BL;
        unsigned char l_446 = 0x70L;
        int l_447 = 0x20DECBB2L;
        int l_448 = (-9L);
        const char *l_455 = (void*)0;
        unsigned long long *l_456 = &g_96[0][0][3];
        unsigned l_499[4][4][9] = {{{2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}}, {{2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}}, {{2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}}, {{2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}, {2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL, 4294967292UL, 2UL}}};
        int l_554 = 0x84CE8A35L;
        int l_556 = (-4L);
        int l_558 = 0xFA814D8DL;
        int l_584 = 1L;
        unsigned long long l_597[7][8] = {{0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}, {0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}, {0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}, {0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}, {0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}, {0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}, {0x89DFFBBA76EF4558LL, 1UL, 18446744073709551611UL, 18446744073709551610UL, 18446744073709551611UL, 1UL, 0x89DFFBBA76EF4558LL, 0xF9DFC0C5A582CD08LL}};
        unsigned l_603 = 0UL;
        int l_669 = 0L;
        int l_671 = 0L;
        int l_672 = 4L;
        int l_673 = (-1L);
        int l_674 = 0x0611E0CBL;
        int l_675 = (-1L);
        int l_676 = 1L;
        int l_678[3];
        unsigned long long l_679 = 0x00CA440C7A7659B7LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_678[i] = 1L;
        if ((l_443 && ((*l_456) = (func_36(l_435, &p_34) , ((+func_36(((g_96[2][1][3] = (safe_mod_func_uint8_t_u_u(((~g_256) == ((l_448 &= (l_447 = (p_34 , l_446))) | func_57((safe_mul_func_uint16_t_u_u(1UL, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_57(((l_446 <= p_33) == p_32), p_34, l_443, g_370[1][1][0]), (*g_102))), g_9[0])))), g_46[7], g_24, p_32))), p_35))) , l_435), l_455)) & p_35)))))
        {
            short l_463 = 1L;
            unsigned *l_466 = &g_467;
            short **l_490 = (void*)0;
            short *l_509 = &g_93;
            long long ** const *l_515 = &l_388;
            int l_517 = (-10L);
            int l_518[8];
            unsigned l_520 = 1UL;
            unsigned char *l_531 = &l_446;
            int **l_547 = &g_8;
            char l_549 = 0L;
            unsigned l_574 = 0x69020A15L;
            unsigned long long l_608[7];
            int i;
            for (i = 0; i < 8; i++)
                l_518[i] = 0x027F49AAL;
            for (i = 0; i < 7; i++)
                l_608[i] = 18446744073709551612UL;
            if (((0xFCL <= (safe_add_func_uint64_t_u_u(g_370[3][3][0], ((safe_mod_func_int8_t_s_s(func_39((0L <= (safe_rshift_func_uint8_t_u_u(p_35, 7))), l_435, l_463, ((*l_466) ^= (safe_lshift_func_uint16_t_u_u((func_36(l_435, &g_91) <= g_370[1][5][0]), p_35)))), 0x87L)) == 0L)))) <= 8L))
            {
                unsigned char *l_469[3][6] = {{&g_341, &g_366, &l_446, &l_446, &g_366, &g_341}, {&g_341, &g_366, &l_446, &l_446, &g_366, &g_341}, {&g_341, &g_366, &l_446, &l_446, &g_366, &g_341}};
                short **l_491 = &l_435;
                int l_506 = 1L;
                int l_551 = 0L;
                int l_552[6];
                short l_560[5][4] = {{1L, 0x73A9L, 1L, 0x73A9L}, {1L, 0x73A9L, 1L, 0x73A9L}, {1L, 0x73A9L, 1L, 0x73A9L}, {1L, 0x73A9L, 1L, 0x73A9L}, {1L, 0x73A9L, 1L, 0x73A9L}};
                unsigned long long l_575 = 0xC2C21D435B5C50F2LL;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_552[i] = 0x15AABD7EL;
                if ((l_468 == l_469[0][2]))
                {
                    long long l_477 = 0L;
                    int l_507 = 0x01EADB4AL;
                    int l_508[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_508[i] = (-1L);
                    for (g_44 = 0; (g_44 < 25); ++g_44)
                    {
                        short ***l_486 = &g_101[2][0];
                        short ***l_487 = &g_101[0][0];
                        short ***l_488 = &g_101[2][0];
                        short ***l_489[5] = {&g_101[2][0], &g_101[1][0], &g_101[2][0], &g_101[1][0], &g_101[2][0]};
                        int i;
                        (*g_188) = l_466;

                        ;
                        (*g_188) = (((**g_188) = ((((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_467, (safe_unary_minus_func_uint32_t_u(((l_477 , (safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((&g_194 != (g_492 = (((((((safe_mul_func_uint8_t_u_u(l_477, 0x14L)) > 0x0BCFFFE9L) & ((**g_188) != ((p_32 & (((l_490 = (void*)0) != l_491) ^ 0x8200L)) , 0xFD290143L))) ^ p_32) <= p_34) >= 1UL) , (void*)0))), l_448)), 0UL)) < 0x6C7915C9BBB1012DLL), 5L))) , g_299))))), l_447)) & 0x27L) < 0UL) <= (***l_392))) , &l_448);

                        ;
                        ;
                    }


                    ;
                    for (g_254 = 0; (g_254 <= 2); g_254 += 1)
                    {
                        char *l_504[3];
                        int l_505 = 0xE1D69197L;
                        unsigned long long ***l_510 = (void*)0;
                        unsigned long long **l_512 = &l_456;
                        unsigned long long ***l_511 = &l_512;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_504[i] = &g_44;
                        if (g_46[(g_254 + 5)])
                            break;
                        l_447 = g_46[(g_254 + 4)];
                        if (p_32)
                            continue;
                        (*l_511) = ((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((g_370[7][0][0] == ((0UL <= (func_36(((l_508[1] &= ((((safe_rshift_func_uint8_t_u_u(l_499[1][1][4], 5)) ^ (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((g_91 = l_446), 2)), (l_505 = (p_33 <= 1L))))) > ((g_24 &= (((g_341 = ((*l_468) = l_506)) >= g_9[0]) == (p_33 > l_507))) > (-6L))) ^ 0xDAL)) , l_509), l_504[2]) , p_32)) == (-5L))), g_157)), l_506)) , (void*)0);

                        ;
                    }
                    for (g_256 = 8; (g_256 != 28); g_256 = safe_add_func_int64_t_s_s(g_256, 5))
                    {
                        long long l_516[7] = {0L, 0L, (-1L), 0L, 0L, (-1L), 0L};
                        int i;
                        (*g_188) = ((~(l_515 == &g_162)) , (void*)0);

                        ;
                        l_520++;
                        return l_517;
                    }
                    for (g_93 = (-26); (g_93 <= 29); g_93 = safe_add_func_uint8_t_u_u(g_93, 9))
                    {
                        unsigned *l_537 = &l_499[1][1][4];
                        int l_540 = 0xA8E0F82DL;
                        unsigned char l_548 = 0x56L;
                        l_540 = (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((p_34 == (safe_rshift_func_int16_t_s_u((+(((*l_466) ^= (l_508[1] = p_33)) | (l_531 == (l_468 = l_468)))), 1))) & (g_538 = ((*l_537) = (0x2B395181FF16E151LL ^ (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_sub_func_int64_t_s_s((**g_162), (-1L))))), func_39((*g_102), ((*l_491) = (*l_491)), l_517, p_32))))))) && 255UL), l_507)), g_539));
                        l_508[0] = func_57(((safe_rshift_func_uint16_t_u_u(((p_32 || ((safe_lshift_func_int16_t_s_s((l_499[1][1][4] <= p_32), (((((p_32 || (safe_sub_func_int16_t_s_s(l_520, g_46[7]))) , p_34) == ((void*)0 == l_547)) , g_370[1][2][0]) > 0x98EE325EF9D275C7LL))) > l_540)) | l_548), p_32)) | (*g_102)), l_549, l_540, g_157);
                        return l_508[1];


                    }
                }
                else
                {
                    int l_550 = 0x7193DD45L;
                    int l_553 = 0x5981EB3EL;
                    int l_555 = 0xBE5F3350L;
                    int l_557 = 1L;
                    int l_559 = 0x72E97548L;
                    unsigned char l_561 = 0x76L;
                    --l_561;
                    for (p_34 = 0; (p_34 <= 0); p_34 += 1)
                    {
                        unsigned short l_566[8][3][8] = {{{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}, {{65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}, {65535UL, 1UL, 65535UL, 0x0363L, 65535UL, 1UL, 65527UL, 0x8A53L}}};
                        char *l_569 = (void*)0;
                        char *l_570[2];
                        int l_571 = (-5L);
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_570[i] = &g_44;
                        l_551 |= p_34;
                        (*l_547) = ((safe_rshift_func_uint16_t_u_u(((l_566[6][1][3] , ((*g_492) ^ (((((*l_466)++) == l_557) & p_32) == (((func_57((l_571 = (l_559 &= (+0xC3L))), g_9[0], (l_575 = (safe_sub_func_int64_t_s_s((~((((((l_574 , &l_553) != &l_448) ^ 0xE83FL) && 0xB0EA1D1FL) >= p_33) ^ p_33)), p_35))), g_148[4]) , p_34) > p_35) , p_34)))) | (*g_492)), 9)) , &l_550);

                        ;
                    }


                }


                ;
            }
            else
            {
                unsigned short l_579 = 1UL;
                int l_599 = 0xDEB657F3L;
                int l_600 = 0xFEB57696L;
                int l_602 = 0xB242D7B9L;
                unsigned l_612 = 0UL;
                if ((safe_add_func_uint32_t_u_u(((*l_466) = ((((l_578 = &g_102) != (void*)0) < 0xA7L) ^ l_579)), (((*l_435) = (l_579 , 0x06BEL)) >= (!g_148[1])))))
                {
                    unsigned short *l_591 = &g_203;
                    int l_596 = (-1L);
                    int l_598 = 8L;
                    int l_601 = 0x325D0F95L;
                    l_447 ^= (l_598 &= ((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_int8_t_s_s((l_584 , (safe_mul_func_int8_t_s_s((p_33 < (l_587[2][2][0] ^ (safe_unary_minus_func_int32_t_s((l_518[2] = ((safe_mod_func_uint16_t_u_u(((*l_591) |= g_194), ((l_499[1][1][4] >= 0xE669L) , (g_66[5][5][0] ^ 0x5FL)))) ^ (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((l_596 == 0x22092DCE8A5A3783LL) , 0xA034D433L), 0x4108A74EL)), p_33)))))))), (*g_492)))), p_35)) != p_35) ^ l_597[5][4]) < p_35), p_35)) >= p_33));
                    ++l_603;
                    (*l_547) = (g_539 , &l_601);

                    ;
                    if (p_33)
                    {
                        l_584 &= l_601;
                        (***l_392) = (**l_547);
                        (*g_188) = &l_558;

                        ;
                        (***l_392) &= (((safe_add_func_int64_t_s_s((l_556 = (**g_162)), ((l_599 <= l_602) && ((l_608[2] = (&g_96[1][4][0] == (void*)0)) == ((((void*)0 != l_611[1]) | (0x2EBBF027L > (65534UL <= l_598))) >= l_599))))) < l_602) , 4L);
                    }
                    else
                    {
                        (*l_547) = &l_601;
                        (***l_392) = (!((***l_392) , p_33));
                        return l_612;


                    }

                    ;
                }
                else
                {
                    (*g_188) = &l_600;

                    ;
                    for (l_517 = (-11); (l_517 < (-9)); l_517++)
                    {
                        return p_33;


                    }
                }

                ;
                return l_499[1][0][7];


            }


            ;
        }
        else
        {
            unsigned short l_624 = 0x63F4L;
            int l_625 = 0xE6F02001L;
            short *l_639 = &g_93;
            for (g_539 = 0; (g_539 <= (-22)); g_539--)
            {
                unsigned short l_617 = 0x1782L;
                int l_627 = 0xFDD6581CL;
                const unsigned long long l_636[3] = {0x3DD0DCCDD030F35FLL, 0x3DD0DCCDD030F35FLL, 0x3DD0DCCDD030F35FLL};
                int l_647 = (-1L);
                unsigned long long **l_663 = &l_456;
                long long **l_664 = (void*)0;
                int i;
                ++l_617;
                for (g_256 = 0; (g_256 < 15); g_256++)
                {
                    unsigned l_626 = 3UL;
                    int l_631[7] = {7L, 0xCD77BDA4L, 7L, 0xCD77BDA4L, 7L, 0xCD77BDA4L, 7L};
                    int i;
                    if ((l_625 = (((p_34 == (l_617 , 0xCAL)) == (**g_162)) | (safe_mod_func_uint64_t_u_u(l_624, (+0x5741DB9088B6A20BLL))))))
                    {
                        int *l_628 = &l_447;
                        l_627 |= l_626;
                        (*g_188) = &l_447;

                        ;
                        l_628 = (void*)0;

                        ;
                        l_625 ^= ((**g_188) = (safe_mod_func_uint32_t_u_u((l_617 , p_32), 0x4A70B06DL)));
                    }
                    else
                    {
                        char l_646 = 0xC9L;
                        l_631[6] |= l_627;
                        l_625 ^= (((safe_mod_func_uint64_t_u_u(p_32, (safe_sub_func_int64_t_s_s((l_647 &= ((l_636[1] && p_35) <= ((safe_mul_func_int16_t_s_s(0L, func_36(l_639, (((safe_lshift_func_int8_t_s_s(((!((void*)0 == &l_626)) , (safe_unary_minus_func_int32_t_s((l_643[5][7] == (void*)0)))), 5)) < 0UL) , &p_34)))) , l_646))), l_584)))) , &p_34) != &l_646);
                    }


                    for (l_624 = 0; (l_624 != 23); l_624 = safe_add_func_int64_t_s_s(l_624, 5))
                    {
                        unsigned short *l_656 = &l_617;
                        unsigned short *l_659 = (void*)0;
                        unsigned short *l_660 = &l_587[2][2][0];
                        l_631[6] = (((safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(0UL, l_624)), func_57((((*g_492) || ((*g_492) &= p_34)) , 0x47L), (safe_mod_func_int32_t_s_s((g_133 <= (((*l_660) &= (++(*l_656))) , 0x70L)), (safe_lshift_func_int8_t_s_u((p_34 , (((void*)0 != l_663) && p_32)), 1)))), l_597[0][4], l_631[5]))) , l_664) != &g_163[5]);
                    }
                    return g_66[5][5][0];


                }
            }
        }


        ;
        for (g_341 = 11; (g_341 != 24); g_341 = safe_add_func_int32_t_s_s(g_341, 7))
        {
            long long l_667 = (-1L);
            int l_668[10][3] = {{0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}, {0x33CC4723L, (-1L), 1L}};
            long long l_677 = 4L;
            int i, j;
            --l_679;
        }
    }


    ;
    ;
    if ((safe_add_func_uint8_t_u_u(p_33, (safe_add_func_uint64_t_u_u(0xF4E37FC38352C680LL, g_539)))))
    {
        int *l_686 = &l_670;
        int l_688 = 0x1090CCF9L;
        char l_690 = (-1L);
        int l_700 = 2L;
        int l_702 = (-1L);
        int l_703 = (-5L);
        int l_706 = (-5L);
        short l_710 = 0x3254L;
        unsigned l_723 = 0xB54A6174L;
        int l_729 = 0x167B7268L;
        for (g_44 = 0; (g_44 <= 6); g_44 += 1)
        {
            int * const **l_687 = &l_390[0];
            int l_691 = 0x97317D48L;
            int l_693 = 0L;
            int l_698[10][2][6] = {{{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}, {{0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}, {0x766C3E98L, 7L, 0xDB85C79CL, 0x3F1FBEE2L, 0x8226BC4EL, 0x21C1C634L}}};
            short l_717 = (-10L);
            char l_726 = 0xCCL;
            int l_749 = 0x18BD6EA9L;
            int i, j, k;
            if (g_46[(g_44 + 2)])
                break;
            (*g_188) = l_686;

            ;
            for (g_157 = 8; (g_157 >= 1); g_157 -= 1)
            {
                char l_694 = 0xA8L;
                int l_696 = 0xA4E6E042L;
                int l_697 = (-10L);
                int l_699 = (-6L);
                int l_715 = 0L;
                int l_716 = 0x1AF85CFDL;
                int l_718 = 0xEA654E5BL;
                int l_720 = (-1L);
                int l_721 = 0x7A1EBA27L;
                int l_722[8] = {0L, 0L, (-5L), 0L, 0L, (-5L), 0L, 0L};
                int i;
            }
            for (l_702 = 7; (l_702 >= 2); l_702 -= 1)
            {
                int l_753[6][5] = {{0x185847FAL, 0x185847FAL, (-4L), 0x185847FAL, 0x185847FAL}, {0x185847FAL, 0x185847FAL, (-4L), 0x185847FAL, 0x185847FAL}, {0x185847FAL, 0x185847FAL, (-4L), 0x185847FAL, 0x185847FAL}, {0x185847FAL, 0x185847FAL, (-4L), 0x185847FAL, 0x185847FAL}, {0x185847FAL, 0x185847FAL, (-4L), 0x185847FAL, 0x185847FAL}, {0x185847FAL, 0x185847FAL, (-4L), 0x185847FAL, 0x185847FAL}};
                int i, j;
                return l_753[5][2];


            }
        }


        (*g_188) = (((*l_686) , ((*l_468) = ((3L == p_35) != ((**g_162) < ((*l_686) = p_32))))) , &l_700);

        ;
        (*g_8) ^= p_32;
    }
    else
    {
        int * const *l_756[3][8][4] = {{{(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}}, {{(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}}, {{(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}, {(void*)0, (void*)0, &g_8, &g_8}}};
        short *l_761 = &l_519;
        int l_762 = 0xB54E7A7FL;
        short l_763 = 0xBFDAL;
        unsigned char l_765 = 0x2DL;
        unsigned char l_766[8] = {0UL, 0UL, 0xCDL, 0UL, 0UL, 0xCDL, 0UL, 0UL};
        int i, j, k;
        l_766[4] = (l_765 = (((safe_mul_func_uint16_t_u_u(p_34, (p_33 , 4UL))) , l_757[4][0][4]) != (18446744073709551615UL <= (l_764 = (g_538 >= (((**l_388) = (func_39(((safe_lshift_func_uint8_t_u_u(l_760, 2)) , p_32), l_761, l_762, g_538) <= 0x04BC0418L)) , l_763))))));
    }
    return g_91;
}







static int func_36(short * p_37, const char * p_38)
{
    int l_377 = 0x91C49057L;
    for (g_194 = (-3); (g_194 < (-13)); --g_194)
    {
        int l_376 = 0x2C0C714BL;
        if (l_376)
            break;
    }
    return l_377;
}







static unsigned long long func_39(short p_40, short * p_41, unsigned p_42, unsigned p_43)
{
    int *l_372 = (void*)0;
    int *l_373 = &g_256;
    (*l_373) = p_40;
    return p_40;
}







static char func_55(unsigned short p_56)
{
    short **l_190[7][7][5] = {{{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}, {{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}, {{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}, {{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}, {{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}, {{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}, {{&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102}}};
    int l_211 = (-1L);
    int l_228 = 0x7F73C634L;
    const char * const l_258 = &g_91;
    int l_284 = 0xF68F9FB7L;
    int l_286[4][3][1];
    short l_303 = 1L;
    char l_304 = (-1L);
    long long *l_310 = &g_46[1];
    int *l_358 = &l_286[1][0][0];
    int *l_359 = &l_286[0][1][0];
    int *l_360 = &l_286[0][1][0];
    int *l_361 = &g_66[1][5][1];
    int *l_362 = &l_284;
    int *l_363 = &g_66[5][5][0];
    int *l_364 = (void*)0;
    int *l_365[8] = {&g_66[5][4][2], &l_286[0][1][0], &g_66[5][4][2], &l_286[0][1][0], &g_66[5][4][2], &l_286[0][1][0], &g_66[5][4][2], &l_286[0][1][0]};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_286[i][j][k] = 0xF3736187L;
        }
    }
    for (g_157 = 6; (g_157 >= 0); g_157 -= 1)
    {
        int *** const l_189 = &g_188;
        int l_191 = 0xF30D5CE5L;
        short *l_197 = &g_93;
        long long l_234 = 3L;
        int *l_257 = &l_191;
        unsigned long long l_272 = 0xE0CDC916C79C3087LL;
        unsigned short l_274 = 1UL;
        int l_283 = 1L;
        int l_287 = 0x9F2D00B8L;
        int l_295 = 0x894E57A8L;
        int l_296 = 3L;
        int l_297 = 0xA6FA6C3FL;
        int l_298[10] = {0xEEABC623L, 0x66BF4AEDL, 0xEEABC623L, 0x66BF4AEDL, 0xEEABC623L, 0x66BF4AEDL, 0xEEABC623L, 0x66BF4AEDL, 0xEEABC623L, 0x66BF4AEDL};
        unsigned long long l_317[4][5][10] = {{{18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}}, {{18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}}, {{18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}}, {{18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}, {18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL, 18446744073709551615UL, 0x7562A683DF5D2659LL, 18446744073709551607UL, 18446744073709551607UL, 0x7562A683DF5D2659LL}}};
        long long l_325[8] = {0L, 0L, 0x190E2B769E396BB4LL, 0L, 0L, 0x190E2B769E396BB4LL, 0L, 0L};
        int i, j, k;
        for (g_91 = 0; (g_91 >= 0); g_91 -= 1)
        {
            short *l_195[8];
            int l_221 = (-1L);
            unsigned l_253 = 4294967295UL;
            int i;
            for (i = 0; i < 8; i++)
                l_195[i] = &g_93;
            if (((g_187[6][4] != l_189) , (-1L)))
            {
                int i, j;
                l_191 ^= (((*g_102) = g_46[(g_91 + 2)]) , ((void*)0 == l_190[3][3][1]));
            }
            else
            {
                short *l_196 = &g_93;
                int l_226 = 0xC4721F4FL;
                for (p_56 = 0; (p_56 <= 8); p_56 += 1)
                {
                    unsigned long long l_201 = 0xB2A4F0B97A479240LL;
                    for (l_191 = 2; (l_191 >= 0); l_191 -= 1)
                    {
                        long long *l_198[1][2];
                        unsigned short *l_202 = &g_203;
                        unsigned long long *l_210 = &g_96[2][0][2];
                        unsigned *l_224[6];
                        char *l_225 = &g_194;
                        int *l_227 = &l_211;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_198[i][j] = &g_46[7];
                        }
                        for (i = 0; i < 6; i++)
                            l_224[i] = &g_133;
                        g_66[(g_91 + 6)][g_157][l_191] &= ((safe_sub_func_int64_t_s_s((g_96[l_191][(l_191 + 3)][l_191] >= 0xD4D4L), ((***l_189) < ((g_194 , (l_196 = l_195[0])) != (l_197 = l_197))))) , func_57(((l_198[0][0] != ((((safe_lshift_func_uint16_t_u_u(l_201, (--(*l_202)))) ^ (safe_sub_func_int8_t_s_s(((((((safe_mod_func_uint64_t_u_u(((*l_210) = p_56), l_211)) != g_148[1]) , 0x0CL) < 0x9CL) >= g_91) >= 1L), l_201))) , p_56) , l_198[0][0])) <= p_56), p_56, g_133, g_46[7]));
                        (*l_227) = ((g_66[(l_191 + 1)][(l_191 + 2)][(g_91 + 2)] = ((safe_add_func_int32_t_s_s((((((+((*l_225) = ((safe_sub_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((p_56 , (**g_162)) | (safe_rshift_func_int16_t_s_s(((0x71A9B2B1L && (**g_188)) && (g_203 | ((func_57((safe_unary_minus_func_uint8_t_u(l_221)), (g_66[(g_91 + 6)][g_157][l_191] = (safe_mod_func_int32_t_s_s((((l_221 , 0xD7AFC93EL) , p_56) || g_91), (*g_8)))), p_56, g_96[l_191][(l_191 + 3)][l_191]) , p_56) , l_221))), 13))), (**g_162))) , p_56), p_56)) < p_56))) >= p_56) > (-1L)) , 0x02E2CF94L) != l_226), p_56)) == 0x9757L)) <= 0UL);
                    }
                    for (l_211 = 0; (l_211 <= 2); l_211 += 1)
                    {
                        l_228 &= 0xA9614340L;
                    }
                }
                for (g_93 = 0; (g_93 <= 0); g_93 += 1)
                {
                    long long l_233 = 1L;
                    int *l_238 = &g_9[0];
                    int **l_237 = &l_238;
                    int i, j, k;
                    g_149[g_93][g_93][(g_93 + 1)] = g_149[(g_93 + 1)][g_93][g_91];
                    for (l_191 = 8; (l_191 >= 0); l_191 -= 1)
                    {
                        int i, j, k;
                        return g_96[(g_93 + 2)][(g_93 + 3)][(g_93 + 2)];



                    }
                    l_228 = (((p_56 <= l_226) == (func_76((safe_mul_func_int16_t_s_s((0xD3D5L && ((safe_mod_func_uint64_t_u_u(((func_57((0xB7L == func_76(g_46[7], &g_46[7], l_228, l_233, ((l_234 , l_221) , (***l_189)))), p_56, p_56, p_56) || p_56) <= g_157), g_148[4])) == l_221)), 0x55E0L)), &l_234, p_56, l_226, p_56) , 0xBC65725EL)) || l_221);
                    g_149[(g_91 + 4)][g_91][(g_91 + 1)] = ((*l_237) = ((safe_lshift_func_int8_t_s_s(p_56, 7)) , (g_91 , ((**l_189) = &l_211))));

                    ;
                    ;
                    for (g_203 = 0; (g_203 <= 8); g_203 += 1)
                    {
                        (*l_238) = 0L;
                        l_221 = 0xBFA641BEL;
                        return g_148[0];



                    }
                }
            }
            for (l_191 = 7; (l_191 >= 0); l_191 -= 1)
            {
                unsigned char l_252 = 1UL;
                for (g_203 = 1; (g_203 <= 8); g_203 += 1)
                {
                    int *l_255 = &g_256;
                    (*l_255) &= (func_57(((***l_189) , (safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*g_102), 0xE435L)), (g_254 |= (safe_add_func_uint16_t_u_u(l_221, func_76(g_148[3], &g_46[2], ((safe_add_func_int32_t_s_s((((0L >= (((safe_mod_func_uint32_t_u_u(0x1E351419L, l_252)) , 0x12L) || g_96[1][4][2])) != 0UL) < p_56), l_228)) & l_253), g_148[4], p_56)))))) > l_252))) & 0x86AC3AD8L) ^ p_56), g_66[5][5][0]))), p_56, l_211, g_9[0]) > g_91);
                    for (g_123 = 0; (g_123 >= 0); g_123 -= 1)
                    {
                        (*l_255) ^= (-1L);
                    }
                }
            }
        }

        ;
        (**l_189) = &l_228;

        ;
        l_257 = ((*g_188) = (**l_189));

        ;
        for (l_228 = 2; (l_228 <= 8); l_228 += 1)
        {
            char *l_260 = &g_194;
            char **l_259 = &l_260;
            unsigned short *l_273 = &g_203;
            int l_279 = 0x7C3B781DL;
            int l_288 = 0x50A1A2D6L;
            int l_290[7] = {0xA835BAE9L, 0xA835BAE9L, 0x5A57E23EL, 0xA835BAE9L, 0xA835BAE9L, 0x5A57E23EL, 0xA835BAE9L};
            unsigned l_305 = 0x735536F5L;
            int * const *l_309 = &l_257;
            unsigned l_315[9][2] = {{2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}, {2UL, 18446744073709551615UL}};
            unsigned l_355 = 0x080417E1L;
            int i, j;
            if (g_46[l_228])
                break;
            l_274 |= func_57(((g_46[l_228] == ((l_258 == ((*l_259) = (void*)0)) , (safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_133, (safe_lshift_func_uint16_t_u_u(((g_9[0] && (l_211 && (((safe_unary_minus_func_uint8_t_u(((((*l_273) = (safe_mul_func_uint16_t_u_u(0xDF32L, ((0x6BB1ACD2L & (((p_56 ^ g_46[l_228]) , l_272) == 1L)) != l_211)))) <= 0x358EL) != p_56))) , p_56) , (***l_189)))) , g_24), l_211)))) < 0L), (*l_257))))) , g_148[4]), (*l_257), p_56, g_148[3]);

            ;
            for (l_272 = 0; (l_272 <= 2); l_272 += 1)
            {
                long long l_285[3][4][2] = {{{(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}}, {{(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}}, {{(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}, {(-2L), 0x2531EACA357E05E3LL}}};
                int l_289 = 0x9639F522L;
                int l_291 = 0L;
                int l_292 = 9L;
                int l_293 = 0xA3EE318FL;
                int l_294 = 1L;
                int l_300 = 0L;
                int l_301[9] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L, (-1L), (-1L), 0L};
                unsigned l_326 = 0xDAB1A9E0L;
                char l_342[1];
                const long long *l_353 = (void*)0;
                char *l_354[2][9][4] = {{{(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}}, {{(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}, {(void*)0, &g_194, &g_91, &l_342[0]}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_342[i] = 0L;
                for (l_211 = 7; (l_211 >= 1); l_211 -= 1)
                {
                    int l_281 = 1L;
                    int l_282[2];
                    char l_302 = 0xCCL;
                    int *l_320 = (void*)0;
                    int *l_321 = &l_298[1];
                    int *l_322 = &l_295;
                    int *l_323 = &l_286[1][1][0];
                    int *l_324[6] = {&l_298[1], (void*)0, &l_298[1], (void*)0, &l_298[1], (void*)0};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_282[i] = 0xDF15A0DBL;
                    if ((safe_mul_func_uint8_t_u_u(((4294967295UL <= (g_96[l_272][l_272][l_272] <= g_46[8])) && (-1L)), p_56)))
                    {
                        int *l_280[6][7] = {{&l_279, (void*)0, (void*)0, (void*)0, &l_279, &g_66[5][5][0], &l_279}, {&l_279, (void*)0, (void*)0, (void*)0, &l_279, &g_66[5][5][0], &l_279}, {&l_279, (void*)0, (void*)0, (void*)0, &l_279, &g_66[5][5][0], &l_279}, {&l_279, (void*)0, (void*)0, (void*)0, &l_279, &g_66[5][5][0], &l_279}, {&l_279, (void*)0, (void*)0, (void*)0, &l_279, &g_66[5][5][0], &l_279}, {&l_279, (void*)0, (void*)0, (void*)0, &l_279, &g_66[5][5][0], &l_279}};
                        int i, j;
                        l_279 = (safe_sub_func_int64_t_s_s(g_46[l_228], 2L));
                        --l_305;
                        l_191 = ((safe_unary_minus_func_int32_t_s(0x91D92DE4L)) != (func_62(l_309, g_96[1][4][0]) != 0xDDE4A3F8L));
                    }
                    else
                    {
                        char l_314 = 0x7DL;
                        int *l_316[7][1][8] = {{{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}, {{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}, {{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}, {{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}, {{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}, {{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}, {{&l_294, &g_4, &l_294, &g_4, &l_294, &g_4, &l_294, &g_4}}};
                        int i, j, k;
                        l_301[0] = (func_76(func_76(g_4, l_310, (safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(p_56)), l_314)), (p_56 , func_57((((p_56 , l_315[4][1]) < p_56) & (((&g_203 != &g_203) <= p_56) == l_284)), (**l_309), g_4, g_203)), l_314), &g_46[l_228], p_56, g_148[3], l_314) == 0L);
                        ++l_317[3][4][6];
                        (*g_188) = &l_284;

                        ;
                        if (l_292)
                            break;
                    }
                    l_326--;
                }
                for (l_191 = 8; (l_191 >= 0); l_191 -= 1)
                {
                    for (g_133 = 0; (g_133 <= 8); g_133 += 1)
                    {
                        unsigned *l_329[8][5][6] = {{{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}, {{(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}, {(void*)0, &l_315[1][0], &g_133, &l_315[4][1], &l_315[4][1], &l_315[4][1]}}};
                        unsigned *l_331 = &g_133;
                        unsigned **l_330 = &l_331;
                        int l_332 = 0x1CA5F23EL;
                        long long *l_333[10][3][8] = {{{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}, {{&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}, {&l_285[1][3][0], &g_46[l_228], &l_285[1][2][0], (void*)0, &g_46[8], &l_325[3], (void*)0, &g_46[l_228]}}};
                        unsigned char *l_340 = &g_341;
                        int i, j, k;
                        l_342[0] = (((l_211 ^= (((l_329[7][2][5] = l_329[7][2][5]) != ((*l_330) = &g_133)) ^ (func_76(l_332, l_333[2][1][6], g_299, (((g_46[l_191] &= l_228) & l_286[3][0][0]) , (safe_sub_func_uint16_t_u_u((((((safe_rshift_func_uint8_t_u_u(((*l_340) = ((-3L) | ((safe_rshift_func_uint8_t_u_u((((p_56 != g_96[2][4][3]) != (**l_309)) < g_194), 1)) , g_24))), g_203)) , g_66[5][1][2]) , 0x74L) , (***l_189)) , 65531UL), 1UL))), l_332) | (-1L)))) < 0xA53B729DBD1B4162LL) , (**g_188));
                    }
                    for (l_297 = 26; (l_297 <= (-12)); l_297--)
                    {
                        if ((***l_189))
                            break;
                        l_294 &= (-2L);
                    }
                }
                l_298[1] ^= (safe_mod_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u(p_56, 1L)) & 0xEFF5A6BAL) & (safe_add_func_int32_t_s_s(8L, ((safe_mul_func_int8_t_s_s(((void*)0 == l_353), (g_341 |= ((void*)0 == &l_260)))) != (func_76((g_299 = l_304), &l_285[1][3][0], g_256, g_133, (**g_162)) , l_211))))), l_355));
                for (g_91 = (-21); (g_91 <= (-21)); g_91 = safe_add_func_int16_t_s_s(g_91, 8))
                {
                    return g_157;



                }
            }
        }

        ;
    }

    ;

    g_366++;
    return p_56;



}







static unsigned func_57(char p_58, unsigned p_59, char p_60, const unsigned long long p_61)
{
    char l_186 = 1L;
    return l_186;
}







static unsigned func_62(int * const * p_63, int p_64)
{
    int *l_65[10][6] = {{&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}, {&g_9[0], &g_9[0], &g_66[9][7][1], &g_9[0], (void*)0, &g_9[0]}};
    unsigned short l_67 = 0x24D4L;
    long long *l_138 = &g_123;
    long long l_185 = 0x3ED47F7B9D4476A2LL;
    int i, j;
    l_67++;
    for (p_64 = (-5); (p_64 == (-3)); ++p_64)
    {
        unsigned short l_82 = 0xA4F7L;
        short *l_92[2];
        unsigned long long *l_94 = (void*)0;
        unsigned long long *l_95[1][10][1] = {{{&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}, {&g_96[1][4][0]}}};
        int l_97 = 0x415C7811L;
        int l_98 = 0L;
        const int *l_150 = (void*)0;
        unsigned char l_155 = 0xD3L;
        long long **l_158 = &l_138;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_92[i] = &g_93;
        g_66[6][0][2] = (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_64, (0x451B912C0205F722LL >= (func_76(l_82, ((p_64 , (l_97 |= (safe_mul_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(l_82, (safe_mul_func_int8_t_s_s(g_46[8], p_64)))) < (safe_lshift_func_uint8_t_u_u(g_9[0], 1))) <= (g_93 = (g_91 ^= g_46[8]))) >= p_64), 0xA7CBL)))) , (void*)0), l_98, l_98, p_64) , 0x3928CDBBAE03F525LL)))), (-1L)));
        if (((*g_8) <= l_98))
        {
            char l_113[8][5][4] = {{{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}, {{(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}, {(-1L), (-1L), 0x3AL, 0L}}};
            const long long *l_114[7][1] = {{&g_46[0]}, {&g_46[0]}, {&g_46[0]}, {&g_46[0]}, {&g_46[0]}, {&g_46[0]}, {&g_46[0]}};
            short *l_119 = &g_93;
            const long long *l_122 = &g_123;
            long long **l_159 = &l_138;
            unsigned l_175[10] = {6UL, 0x2E5EF055L, 0UL, 0UL, 0x2E5EF055L, 6UL, 0x2E5EF055L, 0UL, 0UL, 0x2E5EF055L};
            int **l_176 = &l_65[8][2];
            int i, j, k;
            if ((*g_8))
            {
                unsigned l_108 = 1UL;
                const long long **l_115 = &l_114[3][0];
                long long *l_117 = (void*)0;
                long long **l_116 = &l_117;
                short **l_118[6][2][9] = {{{&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}, {&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}}, {{&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}, {&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}}, {{&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}, {&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}}, {{&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}, {&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}}, {{&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}, {&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}}, {{&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}, {&g_102, &l_92[1], &g_102, &g_102, &l_92[1], &l_92[1], &l_92[1], &g_102, &g_102}}};
                const unsigned short l_121 = 0x745AL;
                unsigned short l_134[8][2] = {{0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}, {0x5A5CL, 0x5A5CL}};
                int l_164[7][7][5] = {{{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}, {{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}, {{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}, {{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}, {{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}, {{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}, {{8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}, {8L, 0L, (-3L), 0xD9AC3D86L, 7L}}};
                int i, j, k;
                if (((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_108, 8)), ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((func_76(l_108, l_95[0][7][0], l_113[1][1][1], (l_113[1][1][1] & (g_9[0] | (((*l_115) = l_114[3][0]) != ((*l_116) = &g_46[7])))), l_98) , 0x0AL), g_46[5])), 0x81L)) & p_64))) ^ l_108) < (-5L)) == g_96[0][5][3]))
                {
                    short *l_120 = &g_93;
                    long long *l_125 = &g_123;
                    long long **l_124 = &l_125;
                    const int l_137 = 0x6B292E38L;
                    unsigned short l_139 = 0x5ADAL;
                    if ((((((*l_117) = 0x0F6C1F0966B1C7B1LL) , g_96[1][4][0]) , l_118[2][1][7]) != (((l_120 = l_119) != (l_121 , (void*)0)) , (((l_122 == ((*l_124) = (void*)0)) > (safe_lshift_func_int8_t_s_u(g_4, p_64))) , &l_120))))
                    {
                        return p_64;
                    }
                    else
                    {
                        char *l_132 = &g_91;
                        g_66[5][5][0] = (g_133 ^= ((safe_sub_func_uint64_t_u_u(((((p_64 & (((p_64 && 0x77L) , ((safe_add_func_int64_t_s_s((((((void*)0 != l_92[0]) != (l_113[2][0][0] && func_76(((*l_132) = p_64), ((!0L) , &g_123), l_121, g_9[0], g_46[7]))) <= p_64) != p_64), g_66[5][5][0])) >= g_96[1][4][0])) , 0x4ED1C8C2AAD6875ELL)) < 0x912EL) && p_64) < 1L), 9L)) , 0L));
                        if (l_113[1][1][1])
                            continue;
                        g_66[5][5][0] = (0x6BC9L || (0x34840841L >= l_134[4][0]));
                        g_66[2][3][0] |= ((safe_mod_func_int64_t_s_s(func_76((l_137 , g_93), l_138, (l_139 >= (safe_lshift_func_int16_t_s_s(l_113[1][1][1], 13))), func_76(g_123, &g_123, (g_24 && (((safe_mod_func_uint8_t_u_u(l_97, 255UL)) < p_64) && 1UL)), p_64, p_64), g_46[8]), l_121)) >= g_9[0]);
                    }

                    ;
                }
                else
                {
                    int **l_145 = &l_65[5][3];
                    int ***l_144 = &l_145;
                    const int *l_147 = &g_148[4];
                    const int **l_146[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_146[i] = &l_147;
                    (*l_144) = &g_8;

                    ;
                    l_150 = (g_149[3][0][0] = (g_46[7] , l_65[2][3]));

                    ;
                }

                ;
                ;
                for (g_91 = 0; (g_91 <= 15); g_91 = safe_add_func_uint32_t_u_u(g_91, 7))
                {
                    long long ***l_160 = (void*)0;
                    long long ***l_161 = &l_159;
                    l_164[4][0][1] &= (((((safe_add_func_uint32_t_u_u(((g_91 , g_162) != l_158), 0UL)) & g_4) ^ l_121) && 0xFB12L) != l_108);
                }
            }
            else
            {
                return g_93;
            }

            ;
            g_66[5][5][0] &= (safe_lshift_func_uint16_t_u_s(func_76(p_64, ((safe_sub_func_uint64_t_u_u(((((func_76((safe_add_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(g_24, 4)) <= 0x6B199A5BL) | g_24), ((safe_sub_func_uint16_t_u_u((((*g_102) = ((func_76(p_64, (*l_159), (((l_113[2][0][0] & p_64) < p_64) <= (*g_8)), g_4, (**g_162)) && l_175[1]) >= 0xBE3AL)) & g_9[0]), l_175[1])) && p_64))), &g_46[7], p_64, p_64, (**g_162)) | 0xF104CF704929BF38LL) & 0xEEF1BC82A2EA79D7LL) & (**p_63)) <= 6L), p_64)) , (*l_159)), g_157, g_148[4], p_64), l_113[1][1][1]));
            (*l_176) = l_65[8][3];
        }
        else
        {
            int **l_182 = &l_65[9][3];
            for (l_98 = 0; (l_98 == (-21)); l_98 = safe_sub_func_int8_t_s_s(l_98, 1))
            {
                unsigned long long l_181[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_181[i] = 18446744073709551606UL;
                for (g_123 = (-5); (g_123 > (-19)); g_123 = safe_sub_func_uint16_t_u_u(g_123, 3))
                {
                    for (g_93 = 5; (g_93 >= 1); g_93 -= 1)
                    {
                        return p_64;
                    }
                    if (l_181[4])
                        continue;
                }
            }
            (*l_182) = (((*p_63) == (void*)0) , l_65[4][2]);
            for (l_82 = 0; (l_82 < 13); ++l_82)
            {
                l_185 &= (**p_63);
            }
        }

        ;
    }
    return g_148[5];
}







static int func_76(char p_77, long long * p_78, unsigned p_79, unsigned long long p_80, long long p_81)
{
    short *l_100 = &g_93;
    short **l_99[9] = {&l_100, (void*)0, &l_100, (void*)0, &l_100, (void*)0, &l_100, (void*)0, &l_100};
    int l_103 = 0x9F34FACAL;
    int i;
    g_101[2][0] = l_99[1];


    return l_103;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_66[i][j][k], "g_66[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_370[i][j][k], "g_370[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_957, "g_957", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
