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



static volatile unsigned char g_5 = 249UL;
static volatile unsigned short g_6 = 65535UL;
static volatile char g_7[4] = {0xC5L, 0xC5L, 0xC5L, 0xC5L};
static unsigned short g_51 = 0x6702L;
static int g_65[5] = {0L, 0L, 0L, 0L, 0L};
static int g_74 = (-4L);
static int g_99 = 0xB50BB117L;
static char g_140 = 0xFCL;
static unsigned short g_141 = 65528UL;
static unsigned short g_178[6][5][6] = {{{0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}}, {{0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}}, {{0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}}, {{0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}}, {{0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}}, {{0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}, {0UL, 0x83FBL, 0x1EA6L, 0x6024L, 1UL, 1UL}}};
static unsigned char g_201 = 1UL;
static char g_235 = 0xD2L;
static unsigned char g_264 = 255UL;
static short g_317 = (-1L);
static unsigned g_321[2][10] = {{0xDDAF78F5L, 18446744073709551610UL, 0UL, 0xB566F395L, 0xB566F395L, 0UL, 18446744073709551610UL, 0xDDAF78F5L, 0UL, 0xDDAF78F5L}, {0xDDAF78F5L, 18446744073709551610UL, 0UL, 0xB566F395L, 0xB566F395L, 0UL, 18446744073709551610UL, 0xDDAF78F5L, 0UL, 0xDDAF78F5L}};
static unsigned g_355 = 0x8472449FL;
static unsigned g_374[9] = {0xDC035A22L, 0UL, 0xDC035A22L, 0UL, 0xDC035A22L, 0UL, 0xDC035A22L, 0UL, 0xDC035A22L};
static int g_396 = 0x8323D87DL;
static unsigned g_559 = 0x2855899EL;
static char g_575 = 0x41L;
static unsigned char g_737[9][8][3] = {{{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}, {{0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}, {0xCBL, 0UL, 8UL}}};
static int g_899 = 0x2E3CD754L;
static unsigned short g_960 = 0UL;
static unsigned char g_978 = 0xF1L;
static char g_985 = 3L;
static short g_986 = (-1L);
static unsigned g_1002 = 1UL;
static unsigned char g_1008 = 255UL;
static int g_1020 = 0L;
static unsigned short g_1021 = 5UL;
static unsigned g_1032 = 4294967291UL;
static int g_1070 = 0xEBC9BACFL;
static char g_1085 = 0x3BL;
static char g_1131 = 0xB5L;
static char g_1135 = 0x04L;
static unsigned char g_1136 = 0xBEL;
static unsigned g_1145 = 0xC98882A6L;
static unsigned char g_1155 = 0xDAL;
static unsigned short g_1156 = 0UL;
static unsigned char g_1167 = 0x6FL;
static short g_1187 = 0x7C2DL;
static unsigned g_1394 = 0xFE750095L;
static unsigned g_1407 = 0UL;
static short g_1578 = 1L;
static unsigned g_1656 = 4294967295UL;
static unsigned g_1714 = 18446744073709551615UL;
static unsigned char g_1827[5][3][7] = {{{0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}}, {{0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}}, {{0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}}, {{0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}}, {{0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}, {0x5CL, 0x09L, 255UL, 2UL, 0xF2L, 246UL, 0x80L}}};
static volatile short g_1879[5] = {0x3B72L, 0x3B72L, 0x3B72L, 0x3B72L, 0x3B72L};
static short g_1915 = 0x42D6L;
static unsigned short g_1916 = 0x137FL;
static int g_1919 = 0x34169DBEL;
static short g_1933 = 1L;
static int g_2039[9] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
static unsigned char g_2089 = 0xBAL;
static short g_2133 = 1L;
static short g_2136 = (-6L);
static unsigned char g_2137 = 255UL;
static char g_2152 = 1L;
static unsigned short g_2187 = 0x1ACDL;
static short g_2211 = 0x630EL;
static unsigned short g_2291 = 4UL;
static unsigned short g_2306 = 1UL;
static int g_2322 = 7L;
static unsigned short g_2351 = 0x8251L;
static unsigned char g_2493 = 0x67L;



static unsigned func_1(void);
static int func_8(unsigned p_9, unsigned p_10, int p_11, short p_12);
static short func_15(unsigned p_16, unsigned p_17);
static unsigned func_20(unsigned p_21, unsigned p_22, int p_23);
static unsigned func_27(int p_28);
static int func_29(unsigned p_30, char p_31, short p_32, char p_33, unsigned p_34);
static char func_35(short p_36, unsigned char p_37, short p_38, unsigned char p_39, unsigned char p_40);
static short func_41(int p_42, short p_43, int p_44);
static int func_45(short p_46, unsigned p_47, unsigned short p_48, unsigned p_49, unsigned p_50);
static short func_57(unsigned p_58, unsigned char p_59, unsigned char p_60, unsigned p_61, char p_62);
static unsigned func_1(void)
{
    int l_4[10] = {(-10L), 0x915A1369L, (-10L), 0x915A1369L, (-10L), 0x915A1369L, (-10L), 0x915A1369L, (-10L), 0x915A1369L};
    char l_2015 = 7L;
    int l_2072 = 0L;
    unsigned short l_2073[4];
    int l_2114 = (-1L);
    int l_2177 = (-5L);
    unsigned char l_2196 = 8UL;
    int l_2206 = 0xB210031AL;
    unsigned l_2216 = 0UL;
    unsigned short l_2404 = 8UL;
    short l_2486 = 0x2667L;
    unsigned char l_2514 = 0x00L;
    int i;
    for (i = 0; i < 4; i++)
        l_2073[i] = 0x7864L;
    l_4[4] = (safe_rshift_func_uint8_t_u_u(0xE9L, 1));
    if (g_5)
    {
        unsigned l_24 = 0xDACD7D39L;
        short l_2009[6] = {0L, 0L, 0L, 0L, 0L, 0L};
        unsigned char l_2010 = 249UL;
        unsigned char l_2016[1][2][2] = {{{0xE4L, 3UL}, {0xE4L, 3UL}}};
        int l_2017 = 7L;
        unsigned l_2018 = 1UL;
        unsigned short l_2043 = 0UL;
        int i, j, k;
        g_7[1] = g_6;
        l_4[3] = func_8((0x57L ^ (safe_mod_func_int16_t_s_s(func_15(g_5, ((safe_mod_func_uint32_t_u_u(func_20((l_4[4] , l_24), l_24, (safe_sub_func_uint32_t_u_u(func_27((func_29((((func_35(((func_41(((func_45(g_51, g_51, l_24, (g_51 && g_51), g_51) < 0x0E639B5CL) , l_4[4]), l_4[4], g_65[0]) , 0xFDL) | l_4[4]), g_559, g_559, g_65[1], g_559) || g_140) ^ 0UL) >= l_4[4]), g_575, l_24, g_559, l_24) || 4294967286UL)), l_24))), (-6L))) < l_4[1])), 0x13E2L))), g_1407, l_24, g_1407);
        for (g_140 = (-23); (g_140 < 10); g_140 = safe_add_func_int8_t_s_s(g_140, 7))
        {
            unsigned char l_2008 = 0x12L;
            int l_2026 = (-3L);
            l_2010 = (((((safe_add_func_uint16_t_u_u(g_1407, ((safe_sub_func_int16_t_s_s(((l_24 , (0x5FD6L == (((((safe_sub_func_int16_t_s_s(((g_737[6][3][1] && (g_1187 ^ (safe_rshift_func_int8_t_s_s((0UL | (l_24 < func_57((func_57(l_24, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(5UL, l_24)), 0xDE798349L)), l_4[3], g_396, l_24) != 0x48D3L), g_1394, g_1131, g_899, l_2008))), l_24)))) | g_374[4]), (-1L))) >= 0x33341DA4L) == g_1578) < g_6) >= l_2009[2]))) > l_24), (-1L))) , g_317))) == g_178[1][4][3]) & g_1167) , 0x4ACEL) < g_1915);
            if ((l_2008 == (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((!g_1008), 3)), func_35(g_1187, l_2009[2], (func_57((((((((func_41(l_4[4], (func_57(g_575, g_986, (~(((g_1879[4] ^ 0xDBE9L) | g_1656) < g_559)), g_1827[3][1][1], l_2008) ^ l_2015), l_2016[0][0][1]) == 7UL) == g_1915) >= l_4[4]) , g_374[8]) , 1UL) != g_374[8]) != 0xCD8BB247L), g_575, l_2008, g_321[0][3], l_2015) , g_1879[4]), g_1933, g_1933)))))
            {
                l_2018 = (l_2008 > (func_15(l_2017, (g_1020 , 0x515F12F9L)) , g_1070));
            }
            else
            {
                int l_2035 = (-1L);
                for (g_986 = (-23); (g_986 < (-19)); g_986 = safe_add_func_int16_t_s_s(g_986, 8))
                {
                    unsigned short l_2025 = 0x4C26L;
                    for (g_1187 = 0; (g_1187 >= 0); g_1187 -= 1)
                    {
                        int i, j, k;
                        l_4[(g_1187 + 6)] = ((safe_rshift_func_int8_t_s_s((0x1EA9865AL >= (l_2016[g_1187][g_1187][g_1187] ^ (func_27(l_4[(g_1187 + 2)]) , ((safe_lshift_func_uint16_t_u_s((l_2008 , (65535UL != 65535UL)), l_2025)) | g_1020)))), 5)) >= l_2015);
                    }
                    for (g_899 = 0; (g_899 <= 3); g_899 += 1)
                    {
                        g_396 = 5L;
                    }
                    if (g_1915)
                        continue;
                }
                if (g_51)
                {
                    return l_2026;
                }
                else
                {
                    char l_2032 = 1L;
                    int l_2036 = (-2L);
                    l_2036 = func_15((((safe_rshift_func_uint16_t_u_s(g_985, 5)) & ((g_321[1][3] == (((safe_unary_minus_func_uint16_t_u((safe_add_func_int8_t_s_s(7L, ((l_2032 && ((g_65[1] > ((((g_235 ^ ((((((((safe_mod_func_uint16_t_u_u(6UL, 0x137AL)) || g_65[1]) > g_7[1]) , g_1131) != l_4[4]) , g_1394) || l_2035) <= g_1085)) < l_2016[0][1][0]) & 0x8DL) == l_2035)) == 3L)) , l_2017))))) , l_2032) >= g_74)) ^ l_2032)) != 65535UL), g_899);
                    l_2035 = 0x17EB8CDEL;
                }
            }
        }
        if (((func_45((g_1156 || 0xF9L), l_4[3], g_355, ((safe_add_func_uint8_t_u_u(((l_2015 ^ func_35(g_178[1][4][3], g_1167, g_2039[3], l_2015, g_2039[3])) , 0x3BL), l_2009[3])) != l_2016[0][1][0]), g_1916) >= g_1879[1]) ^ l_4[4]))
        {
            short l_2040[4][6][7] = {{{0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}}, {{0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}}, {{0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}}, {{0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}, {0xD8A2L, (-5L), (-1L), 0L, 0x726FL, 0xD1F2L, 0x726FL}}};
            int i, j, k;
            l_2040[3][3][4] = 0xD94CDDE1L;
            for (g_51 = 0; (g_51 <= 8); g_51 += 1)
            {
                int i;
                return g_2039[g_51];
            }
            l_4[4] = g_7[2];
            g_396 = func_41(g_74, ((safe_rshift_func_uint16_t_u_u(((0UL < 0xD3L) , (0xD947L && func_15((((g_1714 , (+((+(l_2043 < g_1827[0][2][6])) , l_2018))) , (g_737[5][1][1] , g_1656)) , 1UL), g_1879[4]))), g_1156)) == 0xBE7BL), g_355);
        }
        else
        {
            char l_2048 = 1L;
            l_2017 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(g_1135, g_978)), ((l_2048 & g_1008) > ((((g_1131 ^ (-1L)) && l_2048) , (((((g_201 >= (g_978 >= l_2048)) == l_4[4]) != 4294967295UL) > g_978) != g_396)) , 3UL))));
            l_4[4] = (g_1187 <= ((func_41(l_4[3], ((-4L) && 0xE7L), g_1827[3][1][1]) != (safe_add_func_uint16_t_u_u(1UL, g_575))) <= (l_2043 ^ g_1919)));
            g_396 = (safe_lshift_func_uint8_t_u_s((l_4[2] | l_2048), g_99));
        }
    }
    else
    {
        unsigned l_2055 = 18446744073709551612UL;
        int l_2101[9][1];
        unsigned char l_2104 = 0x9DL;
        unsigned l_2186 = 0x01891DCBL;
        unsigned l_2203 = 0x9E4ED504L;
        char l_2226[3];
        unsigned short l_2232 = 0UL;
        char l_2270 = 0x86L;
        unsigned l_2305 = 4294967295UL;
        int l_2335 = 0xFD98A669L;
        unsigned l_2473 = 4294967292UL;
        char l_2485 = 1L;
        unsigned char l_2494 = 255UL;
        unsigned short l_2526 = 0x4ECEL;
        unsigned short l_2611[2][1][6] = {{{0UL, 0x3BE4L, 0UL, 0x3BE4L, 0UL, 0x3BE4L}}, {{0UL, 0x3BE4L, 0UL, 0x3BE4L, 0UL, 0x3BE4L}}};
        int l_2641[4];
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_2101[i][j] = 0xCBF41751L;
        }
        for (i = 0; i < 3; i++)
            l_2226[i] = 0xAAL;
        for (i = 0; i < 4; i++)
            l_2641[i] = 0xBEED8101L;
        l_2055 = (+g_178[3][3][1]);
        if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(0xE71FL, 14)) , (safe_sub_func_int32_t_s_s(g_396, (g_1135 , (((safe_mod_func_uint16_t_u_u(func_41(l_4[8], (safe_sub_func_int8_t_s_s(((func_57((g_1187 , g_559), (((safe_sub_func_int32_t_s_s((g_960 != (((safe_mod_func_int16_t_s_s((l_2015 >= ((g_1021 & l_2055) != (-7L))), g_1919)) & 0x4B46CD3AL) >= g_1002)), g_140)) <= g_396) <= 0x53L), g_899, g_51, l_2055) > 0xEA3FL) ^ l_2055), l_2072)), g_6), g_1032)) > l_2055) || g_1407))))), g_1085)), 4)))
        {
            unsigned char l_2086 = 0xF5L;
            g_396 = (+l_2073[3]);
            g_2089 = (0x1351L || ((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((~g_1070), g_985)) || (g_1394 <= ((func_29((safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((0x76B1L | l_2086), (l_2015 , ((0xF9L != ((safe_add_func_int32_t_s_s(((g_559 >= 4294967289UL) < 0xF9D3ADCEL), 4294967295UL)) , l_2055)) , g_5)))) && l_2055), g_1136)), g_141, g_1020, l_4[4], l_2073[3]) < 0xF73EL) | 1UL))) >= l_4[3]), l_2086)) < g_978) & g_1145), l_2055)) | g_1916) , g_65[0]), l_2055)) <= 0UL));
        }
        else
        {
            int l_2094 = 0x132D1117L;
            unsigned l_2100 = 0xCEEA5AEEL;
            for (g_140 = 26; (g_140 >= 1); g_140 = safe_sub_func_int8_t_s_s(g_140, 1))
            {
                unsigned short l_2095 = 4UL;
                for (g_355 = 25; (g_355 < 14); g_355 = safe_sub_func_uint8_t_u_u(g_355, 3))
                {
                    return g_1155;
                }
                l_2101[4][0] = (l_2094 | (g_99 , ((l_4[4] || l_2095) , (!(g_51 && (g_737[7][6][0] , (l_2095 , ((((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_264, g_1915)), l_2100)) ^ l_2095) | l_2073[3]) , g_1002))))))));
                l_2104 = (safe_lshift_func_int8_t_s_u(0x27L, g_985));
                if (l_2101[6][0])
                {
                    g_396 = 6L;
                }
                else
                {
                    short l_2109 = 0xCD79L;
                    if (((-1L) ^ ((safe_sub_func_int16_t_s_s((((l_4[4] , (func_35(g_1032, ((0x4F14L >= (safe_mod_func_uint8_t_u_u(g_1008, l_2109))) >= (((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((4294967290UL || g_178[1][4][3]) != (g_1714 , g_321[1][3])), 0xB13FL)), l_2109)) == g_74) >= 0x656A3A35L) && 0x4528L) >= 1L)), g_1136, g_559, g_6) , l_2095)) <= l_2072) == l_2100), g_1656)) >= 0xF151968AL)))
                    {
                        l_4[4] = g_1827[3][1][1];
                        l_2094 = 0x1BB1482AL;
                    }
                    else
                    {
                        l_2114 = (-2L);
                        return g_1919;
                    }
                }
            }
            return l_2104;
        }
        if (l_2104)
        {
            unsigned short l_2132 = 0x3748L;
            short l_2170 = 0x7B77L;
            int l_2195 = 0L;
            for (g_1916 = 0; (g_1916 > 26); g_1916 = safe_add_func_int16_t_s_s(g_1916, 2))
            {
                unsigned short l_2123 = 0x6D10L;
                unsigned l_2144 = 0x99400832L;
                int l_2159 = 7L;
                char l_2171 = (-8L);
                char l_2172 = (-1L);
                for (g_396 = 18; (g_396 < (-14)); g_396--)
                {
                    unsigned char l_2120 = 0x58L;
                    g_2133 = ((((safe_unary_minus_func_int8_t_s((l_2120 <= 0UL))) & (g_374[1] || (0xDEDDL ^ ((((((safe_mod_func_int16_t_s_s(((l_2123 || g_1021) >= (((safe_rshift_func_uint16_t_u_u(l_2072, ((safe_rshift_func_uint8_t_u_u(func_57(l_2120, (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_2120, g_2039[8])), 0x0D5B2FB5L)), l_2120, g_1167, l_2120), l_2120)) >= 255UL))) | g_1032) < g_2039[2])), l_2123)) , 4294967295UL) , (-1L)) || g_1827[3][1][1]) == g_1032) | 0x9FEAL)))) & l_2101[3][0]) > l_2132);
                    g_2137 = ((l_2120 >= (((g_1002 < g_2039[3]) & (!g_1578)) && ((l_2120 < 0xD9D8L) <= func_15(func_41(((l_2120 , (safe_rshift_func_int16_t_s_u(((l_2120 , (g_1002 | 0x20CEL)) == l_2132), l_2120))) && g_559), g_1394, l_2123), g_2136)))) , 0x8D2E95E0L);
                }
                for (g_559 = 0; (g_559 != 31); g_559++)
                {
                    unsigned char l_2154 = 0xE7L;
                    short l_2182 = 0xAB4CL;
                    unsigned l_2185 = 4294967291UL;
                    int l_2198 = (-10L);
                    for (g_355 = 0; (g_355 == 44); g_355 = safe_add_func_int8_t_s_s(g_355, 9))
                    {
                        unsigned l_2147 = 0x6A0E4A92L;
                        int l_2153 = 0x8C07FA76L;
                        g_396 = l_2055;
                        g_396 = ((((((func_15(func_41(g_1032, (safe_rshift_func_uint16_t_u_s(g_178[1][4][3], func_27(l_2144))), l_2123), (((0x270DL > (safe_mod_func_int16_t_s_s(2L, ((g_978 , g_178[4][1][4]) , g_374[8])))) < 0L) , l_2132)) | l_2073[2]) >= 0x60E2L) , g_1155) ^ (-1L)) && l_4[4]) | 0xF0L);
                        l_2153 = (g_321[1][8] , func_41((!(((l_2147 , (((safe_add_func_uint32_t_u_u(0xB75DDAC1L, l_2123)) , (((0x6B9002E1L > (((-1L) >= (func_57(((g_1919 , (l_2147 >= (g_2152 , 0x3AE24E64L))) , 18446744073709551606UL), l_2147, l_2153, l_2123, g_575) <= 0x226DL)) > 255UL)) != 0x525DL) == l_4[7])) , g_1085)) , 0x3006L) , 0x3D0D7250L)), l_2154, l_2147));
                        g_396 = 4L;
                    }
                    l_2159 = (((safe_mod_func_uint8_t_u_u(g_6, func_41((safe_lshift_func_uint16_t_u_s(1UL, 13)), g_2039[8], g_140))) | g_1155) || (func_15(l_2154, ((l_2015 >= l_2132) && g_1714)) != l_2072));
                    if (g_374[5])
                        break;
                    if ((safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(g_1394, (func_35(l_2072, ((func_57((g_1714 < ((g_1131 ^ l_2154) < func_45((l_2132 <= ((((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_2154, g_65[0])), g_355)), 0xEDL)) , g_1021) , l_2154) >= g_201)), l_4[2], l_2170, g_321[1][5], l_2055))), l_2055, l_4[7], g_1879[1], g_737[7][6][0]) , l_4[7]) > (-4L)), l_2123, g_1020, l_2159) | l_2171))) && g_1032) , g_1916), l_2172)))
                    {
                        int l_2192 = 2L;
                        g_2187 = ((((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_2177, (1L & ((safe_sub_func_uint16_t_u_u((l_2072 <= ((safe_lshift_func_uint8_t_u_s(g_2137, 1)) ^ (g_1879[0] , l_2101[4][0]))), func_45(func_27((((l_2154 | l_2182) || (safe_add_func_int8_t_s_s((g_1915 < g_1578), g_1085))) && 0x324DL)), l_2185, g_1187, l_2186, g_1919))) != g_2136)))), l_2114)) & 9L) != l_2154) , g_1136);
                        g_396 = l_2144;
                        l_2195 = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s((func_27(l_2170) <= ((g_65[2] , (func_35((((l_2192 == ((safe_rshift_func_int16_t_s_s(l_2192, 5)) <= (func_41(((l_2195 ^ (+(g_1008 | (l_4[4] >= l_2192)))) , l_2101[4][0]), l_4[4], g_321[1][6]) < g_7[1]))) && l_2196) >= l_4[2]), l_2154, g_201, l_2072, g_2137) <= g_51)) == 0x71L)), 5)) >= l_2170) , g_1827[3][1][1]), g_1020));
                    }
                    else
                    {
                        unsigned l_2197 = 9UL;
                        unsigned l_2201 = 0x27AADD56L;
                        int l_2202 = 0x1E946056L;
                        l_2198 = l_2197;
                        l_2203 = (((l_2132 , g_1714) < ((safe_add_func_uint8_t_u_u(0x74L, (func_35(g_235, (((l_2144 > func_15(l_2201, g_140)) != g_1131) , 1UL), g_1085, g_321[1][5], g_1020) ^ l_2202))) <= g_2152)) ^ l_2055);
                    }
                }
            }
            return l_2015;
        }
        else
        {
            int l_2215 = 0xC85D2ACBL;
            int l_2248 = (-4L);
            unsigned l_2320 = 8UL;
            char l_2341 = 0x76L;
            unsigned l_2419[8];
            int l_2515 = 1L;
            int i;
            for (i = 0; i < 8; i++)
                l_2419[i] = 0UL;
            g_2211 = (safe_mod_func_int16_t_s_s(func_35(g_1085, (l_2206 & (-1L)), (((g_1879[4] != 65535UL) >= (safe_rshift_func_uint8_t_u_s(g_960, ((safe_lshift_func_uint8_t_u_s(0UL, 6)) ^ (g_2039[3] , g_1714))))) | g_317), l_2055, l_2114), g_235));
            l_2206 = ((safe_unary_minus_func_int32_t_s((g_321[1][5] ^ (safe_mod_func_int32_t_s_s(l_2203, l_2101[4][0]))))) == l_2215);
            if (g_178[3][2][4])
            {
                unsigned l_2225 = 3UL;
                unsigned l_2269 = 4294967295UL;
                unsigned short l_2290[10] = {0xB573L, 0xB573L, 0x7DAEL, 0xB573L, 0xB573L, 0x7DAEL, 0xB573L, 0xB573L, 0x7DAEL, 0xB573L};
                int l_2317 = 0x50D0964FL;
                char l_2342[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_2342[i] = 0xF4L;
                if ((func_41(g_960, l_2216, (safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(6L, (((g_2187 , 0x0407L) >= ((l_2186 & ((safe_lshift_func_int16_t_s_u(func_8(g_264, ((g_1394 == (safe_add_func_int32_t_s_s(((g_74 & l_2215) , l_2177), g_986))) < g_899), g_559, l_2215), l_2225)) > g_1002)) , l_2226[1])) == g_2136))) && 65535UL), 0x3DL))) ^ g_1032))
                {
                    unsigned l_2231 = 1UL;
                    int l_2236 = (-1L);
                    unsigned l_2253 = 0x8F7FEAFEL;
                    int l_2275 = 0L;
                    char l_2279[1];
                    int l_2316 = 0xA6FA1DFFL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2279[i] = 0x2DL;
                    if (((((safe_add_func_int32_t_s_s(func_41(((safe_lshift_func_int16_t_s_u(l_2231, func_15(l_2225, l_2232))) , (g_960 < g_1002)), l_2231, g_1131), g_1070)) < 0x1D52L) || 0x73L) || g_1131))
                    {
                        unsigned l_2233[2][8] = {{0xB7BBE0D4L, 0x83ACAA86L, 0UL, 0UL, 0x83ACAA86L, 0xB7BBE0D4L, 0x83ACAA86L, 0UL}, {0xB7BBE0D4L, 0x83ACAA86L, 0UL, 0UL, 0x83ACAA86L, 0xB7BBE0D4L, 0x83ACAA86L, 0UL}};
                        int i, j;
                        g_396 = g_2039[3];
                        l_2233[1][7] = (1UL < (-1L));
                        l_2236 = (safe_rshift_func_uint8_t_u_s(0UL, 1));
                        g_396 = (((((safe_add_func_uint16_t_u_u(((func_41(l_2215, l_2231, g_575) >= 0UL) ^ l_2233[0][3]), g_374[8])) || ((g_1578 , (l_2114 || 1UL)) | g_178[3][3][4])) , 0L) <= 0x692ADFE5L) && g_1827[0][1][6]);
                    }
                    else
                    {
                        unsigned char l_2243 = 252UL;
                        l_2248 = (0x7FCC9999L == (l_2231 <= ((safe_mod_func_uint16_t_u_u((g_1933 | l_2243), ((((g_235 | (g_1714 <= l_2215)) < (safe_rshift_func_uint8_t_u_s((func_27(((safe_sub_func_uint32_t_u_u(((0x5507A742L >= (-10L)) >= g_5), l_2236)) , l_2203)) <= g_1578), 1))) && g_1145) , 0x2BF2L))) >= l_2231)));
                        g_396 = (((-10L) < (safe_sub_func_int8_t_s_s((0x77L < (safe_rshift_func_int8_t_s_s(l_2253, 7))), g_1135))) >= (safe_rshift_func_uint16_t_u_s((0x058F8130L | 0xF697B99AL), l_2225)));
                        g_396 = g_1020;
                        l_2270 = ((safe_lshift_func_uint16_t_u_s(2UL, l_2225)) & ((-1L) >= ((safe_add_func_int16_t_s_s(g_1167, (0x26177A67L <= (l_2226[1] , (!((((safe_unary_minus_func_int32_t_s((l_2226[2] == (func_8(g_317, (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_2101[4][0] < (-1L)), 2)), 0xBA78L)) && l_2243), g_1879[2])), l_2225, l_2055) > 8UL)))) != g_2211) & g_1167) & l_2269)))))) , 0x231BL)));
                    }
                    l_2236 = (((((func_8(g_1131, g_899, (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((((g_960 < (((!l_2269) < (func_35(l_2225, l_2275, func_41(g_264, (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(func_27(g_51))), 5)), l_2226[2]), l_2269, l_2248) ^ 65535UL)) != g_899)) , l_2279[0]) , 0x5B3B795DL) != 0x7B19E141L) > g_1915), 0xF1F4L)), 0L)), l_2269) >= l_2279[0]) | g_2187) & l_2215) < 4UL) > l_2231);
                    g_2291 = (safe_mul_func_uint32_t_u_u(((l_2186 , l_2279[0]) >= l_2215), (0x8190F41BL == (((((safe_add_func_int8_t_s_s(((func_29(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((func_35(((l_2269 != ((safe_mod_func_uint32_t_u_u(((func_35(g_7[1], l_2101[0][0], l_2231, g_264, l_2055) ^ g_1131) , l_2072), 0x4B990AC3L)) ^ 4294967286UL)) , g_737[6][6][0]), l_2225, l_2275, g_1136, g_235) == l_2215) > 0x935B5FBFL), g_899)), 1)) <= g_2152), l_2279[0], g_1136, g_1136, l_2290[1]) , l_2216) < l_2279[0]), l_2215)) , l_2226[0]) < 0xF7L) != 0xF5DAB169L) ^ 0xE8L))));
                    if (((safe_rshift_func_int16_t_s_s(g_264, g_2152)) == l_2215))
                    {
                        unsigned char l_2304 = 0x47L;
                        char l_2315 = 0x7AL;
                        g_2306 = (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(func_35(((safe_lshift_func_int16_t_s_s(((func_41(g_178[0][1][5], l_2226[0], l_2072) | (safe_lshift_func_int16_t_s_s((g_1155 != ((l_2104 , 1L) , (g_737[7][6][0] || (((((0x87AA13E0L != 4294967295UL) > 1UL) ^ l_2304) <= g_99) > g_1394)))), l_2073[3]))) & g_1916), 3)) , g_1167), l_2215, l_2072, l_2226[1], g_51), l_2248)) , g_2187), l_2305)), 6L));
                        l_2316 = ((g_317 < l_2015) ^ func_57((g_1167 , (((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_2315, 0)), g_355)) >= 1L) <= 1L) > (l_2315 & (g_99 != 0x50L))), 0x2F062F9EL)), 0x9398L)) , 1UL) >= g_1155)), g_1915, l_2305, l_2316, l_2317));
                        g_396 = g_6;
                    }
                    else
                    {
                        unsigned l_2321 = 0xCA23E0A3L;
                        l_2317 = (func_57(l_2275, l_2226[1], (func_8((((l_2215 ^ (((g_141 >= ((l_2073[3] & (g_575 || g_1656)) | l_2072)) < (safe_rshift_func_int16_t_s_s(g_2306, g_1187))) >= l_2320)) <= l_2321) <= 0x267AL), g_737[7][6][0], g_1916, g_575) , g_99), l_4[3], l_2226[1]) , g_7[1]);
                        g_2322 = g_960;
                        g_396 = (-7L);
                    }
                }
                else
                {
                    int l_2325[1];
                    unsigned short l_2326[4] = {0xB9ADL, 0xEF2EL, 0xB9ADL, 0xEF2EL};
                    unsigned char l_2333 = 0x87L;
                    unsigned l_2334 = 4294967287UL;
                    int l_2354 = (-10L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2325[i] = 1L;
                    l_2101[6][0] = g_1085;
                    if (((((((l_2290[0] && (((((func_45((l_2269 | func_29(func_20(g_1916, l_2072, g_960), (((l_2225 > (safe_rshift_func_int8_t_s_u(g_899, 4))) != (1UL < g_6)) | g_1919), g_1915, g_2039[3], g_1827[3][1][1])), g_2152, g_2039[8], g_1933, g_65[1]) , l_2225) , 0xC7C8L) , l_2325[0]) , l_2055) || 8L)) & l_2326[2]) > 0UL) > l_2326[3]) >= l_2325[0]) > 4294967291UL))
                    {
                        short l_2340[7][1];
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_2340[i][j] = 0x8321L;
                        }
                        g_2322 = ((safe_lshift_func_int16_t_s_s(g_1394, 4)) , (((safe_rshift_func_uint16_t_u_s((((((l_2104 == (((safe_lshift_func_uint16_t_u_s((l_2333 | l_2334), l_2114)) , l_2335) ^ l_2320)) , (safe_sub_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(g_2039[3], ((((((l_2305 != l_2340[4][0]) < (-1L)) , g_2039[3]) >= l_2101[4][0]) != 2L) >= l_2340[4][0]))) , l_2269) , l_2341), l_2317))) || l_2101[5][0]) < l_2114) & l_2325[0]), 3)) | l_2340[0][0]) & l_2225));
                        l_2248 = l_2270;
                        g_2322 = l_2342[3];
                        l_2354 = (l_2326[0] != (g_986 && (+(((-5L) || ((safe_rshift_func_int16_t_s_u((l_2340[4][0] & (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(0xF5B1L, g_2351)) , (safe_add_func_uint8_t_u_u(((g_5 >= func_27(l_2270)) == g_2187), g_374[6]))), 5)) | g_2211), 2))), g_2351)) <= l_2334)) , 4UL))));
                    }
                    else
                    {
                        unsigned l_2363 = 0xDF7E625BL;
                        l_2317 = (!(safe_lshift_func_uint16_t_u_s(((g_374[8] & l_2317) && ((safe_sub_func_int16_t_s_s(g_321[0][3], (safe_lshift_func_uint16_t_u_u(g_1135, (l_2269 || l_2305))))) != (((safe_add_func_uint32_t_u_u(g_1919, func_41(l_2226[2], l_2363, l_2325[0]))) | 0x4D245886L) < g_1032))), l_2334)));
                    }
                }
                for (g_2306 = (-16); (g_2306 <= 52); ++g_2306)
                {
                    unsigned l_2370 = 0x5FFFAE6CL;
                    for (l_2270 = 0; (l_2270 < (-1)); l_2270 = safe_sub_func_int16_t_s_s(l_2270, 1))
                    {
                        unsigned l_2368 = 0xEEF9E1F3L;
                        int l_2369 = 0x55E18227L;
                        l_2368 = (~0xE6FCC1D1L);
                        l_2369 = 1L;
                        l_2101[4][0] = g_201;
                        l_2370 = l_2248;
                    }
                    for (l_2370 = 0; (l_2370 <= 8); l_2370 += 1)
                    {
                        int i;
                        l_2101[4][0] = 0x276F57A0L;
                        if (g_2039[l_2370])
                            continue;
                    }
                    if (g_99)
                        break;
                    return l_2206;
                }
            }
            else
            {
                short l_2379 = 1L;
                short l_2417 = (-1L);
                short l_2418[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_2418[i] = 0x4867L;
                l_2248 = (safe_add_func_uint16_t_u_u(0x97ABL, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_2351 , (((safe_lshift_func_int8_t_s_u(0xB7L, 3)) <= func_15(g_201, l_2379)) >= func_35(g_321[1][5], l_4[0], l_2320, g_1714, g_737[6][2][0]))), l_4[2])), 0x92L))));
                for (g_235 = 0; (g_235 == (-14)); g_235 = safe_sub_func_uint32_t_u_u(g_235, 1))
                {
                    int l_2396 = (-9L);
                    int l_2397 = 0xB6C411E6L;
                    l_2397 = (((((g_6 ^ (((g_1919 , (safe_mod_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(func_27(((safe_add_func_uint32_t_u_u((0x43L >= (safe_rshift_func_uint8_t_u_s(1UL, 0))), g_1656)) , (((((((safe_rshift_func_int16_t_s_u(func_15(l_2320, g_2039[7]), (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((l_2335 < 0x35L) < 0L), 0x3624L)) , 0x49EFL), l_2206)))) > l_2379) || g_1578) <= g_1827[1][2][3]) , 0x72L) <= l_2104) && 0xD538L))), g_1070)) , 0x64L), g_1032))) == g_65[2]) != l_2379)) , g_1879[4]) && 0x32E0L) == l_2396) > l_2226[1]);
                    if (g_1578)
                        continue;
                }
                for (g_355 = 0; (g_355 <= 2); g_355 += 1)
                {
                    short l_2405 = (-8L);
                    unsigned short l_2420 = 65535UL;
                    short l_2433 = 2L;
                    int l_2434 = 0xC3742197L;
                    l_2248 = (1UL && (l_2341 , func_15((l_2186 , (g_141 == ((safe_sub_func_int16_t_s_s(g_1578, ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((((253UL < (~0x8BL)) , l_2404) | (((7UL <= l_2405) , 4294967292UL) < 0x9E96C9F9L)) < l_2055), g_1135)), g_317)) & g_1933))) && g_1070))), l_2405)));
                    if (g_264)
                        break;
                    for (g_317 = 0; (g_317 <= 0); g_317 += 1)
                    {
                        unsigned l_2408 = 0UL;
                        int i, j;
                        l_2101[(g_355 + 3)][g_317] = (l_2379 < ((9L & ((safe_rshift_func_int8_t_s_s((func_15((g_321[1][5] < g_374[0]), g_51) , g_2351), 1)) >= func_35(g_235, (l_2408 >= l_2341), g_1879[4], g_178[1][4][3], l_2305))) >= g_1915));
                        l_2248 = (safe_mod_func_uint8_t_u_u((l_2408 <= 0x87A7CF83L), func_41((safe_mod_func_int16_t_s_s(((l_2177 , (safe_rshift_func_int16_t_s_s(((((((l_2232 == (((func_27(g_1156) <= (safe_lshift_func_int8_t_s_u((l_2073[3] , ((func_35((l_2405 ^ ((((func_27((l_2072 <= g_1578)) == l_2405) | l_2417) , l_2055) , g_737[1][5][0])), l_2418[3], l_2196, l_2215, l_2101[(g_355 + 3)][g_317]) <= l_2404) , g_355)), g_1136))) >= g_74) || g_1135)) >= l_2408) || l_4[4]) >= l_2408) , (-1L)) >= l_2408), 0))) & l_2419[7]), 0x6847L)), l_2420, l_2408)));
                        l_2434 = (0xBF21L | (g_559 == (((safe_lshift_func_int16_t_s_s(((func_15(l_2335, ((safe_rshift_func_int8_t_s_u((((func_57((l_2177 <= l_2405), g_5, ((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((func_57(l_2101[(g_355 + 3)][g_317], g_1933, g_2133, l_2433, g_2306) , 0xBF61A385L) , 0xC4L), l_2248)) || l_2203), 0x24D9L)), 5)) , l_2405), g_1933, l_2055) & 0xCAF2BF2FL) ^ l_2420) != g_178[2][3][2]), 3)) , g_1879[3])) , g_1002) != g_1002), l_2226[0])) > 0xF6L) == 0x18C8L)));
                        g_396 = l_2379;
                    }
                    for (g_1070 = 2; (g_1070 >= 0); g_1070 -= 1)
                    {
                        g_2322 = g_321[0][9];
                    }
                }
                g_2322 = (safe_rshift_func_uint8_t_u_u(8UL, (safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_1131, 0)), (g_1714 & (safe_lshift_func_uint16_t_u_u(g_978, 9))))) < l_2073[1]), (((func_29((safe_lshift_func_uint8_t_u_s(((~(safe_lshift_func_uint8_t_u_s((l_2379 ^ l_4[4]), (((l_2418[0] ^ l_2248) , l_2379) , g_5)))) <= (-7L)), 1)), l_2270, l_2073[3], l_2215, g_1167) ^ l_2419[0]) && l_2404) , 0x3D72L)))));
            }
            if ((safe_add_func_uint32_t_u_u(0xFDD6AA84L, l_2073[3])))
            {
                unsigned char l_2451 = 0x6AL;
                int l_2488 = (-8L);
                if (((((l_2451 >= ((((safe_lshift_func_uint16_t_u_s(((l_4[7] , ((!func_35(l_2419[7], (+(safe_rshift_func_int8_t_s_s(((l_2101[4][0] && (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((0xA0D747CDL == ((safe_mod_func_uint32_t_u_u(func_45(g_201, l_2451, (safe_rshift_func_uint16_t_u_s((func_27(g_2039[3]) ^ 1L), 4)), l_2451, g_2133), g_737[3][3][0])) < l_2216)) >= 0xC3L), l_2451)), 6))) > g_2211), 7))), g_1919, l_2203, g_1135)) | l_2186)) <= g_2291), 8)) == l_2320) <= g_2152) && l_2055)) < (-10L)) , g_321[1][5]) , l_2196))
                {
                    int l_2489 = 0x77E2D952L;
                    for (g_2306 = (-8); (g_2306 != 12); g_2306 = safe_add_func_int32_t_s_s(g_2306, 5))
                    {
                        int l_2466 = 0x67A3060EL;
                        unsigned l_2476 = 0xD2CB2754L;
                        short l_2487 = 0x78ADL;
                        l_2476 = func_29(l_2101[4][0], l_2466, (safe_add_func_int32_t_s_s(((func_8((g_1156 , ((~0x8CCFL) <= func_8(l_2305, func_27((g_178[1][3][5] | (safe_mod_func_uint16_t_u_u((func_41(((((safe_mod_func_uint16_t_u_u(l_2473, ((l_2473 < ((safe_sub_func_uint32_t_u_u((l_2215 && 0x71C975FBL), l_2341)) , 4294967293UL)) | g_986))) >= l_2341) != l_2015) , 0L), l_2232, l_2073[3]) == g_201), g_986)))), g_1656, g_1070))), l_2466, l_2215, l_2451) ^ 0xE6C4L) >= g_1002), l_2451)), g_2187, g_2136);
                        g_2322 = (((-3L) | (+((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint16_t_u_u(l_2305, ((g_2152 , g_374[1]) ^ ((g_2322 >= 0x0AL) , (safe_unary_minus_func_int16_t_s((((((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_2451, g_1085)), 0x2A49L)) ^ l_2485) , g_986) , g_74) && l_2486))))))) >= g_65[4]))) , l_2487))) >= g_7[1]);
                        l_2488 = 0x1F488438L;
                    }
                    if (g_2322)
                    {
                        int l_2490 = 0x1C1E56C3L;
                        l_2072 = l_2489;
                        l_2490 = (g_74 == 0xB337L);
                    }
                    else
                    {
                        l_2494 = (safe_rshift_func_uint16_t_u_s(l_2305, g_2493));
                        g_2322 = l_2488;
                        l_2488 = (safe_rshift_func_uint16_t_u_s(func_29((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((g_2493 >= g_140), 0)) | l_2489) != l_2320), g_178[4][1][3])), ((g_1070 | (-5L)) , ((g_235 && (((safe_rshift_func_int16_t_s_s((g_2322 || l_2451), 5)) > g_737[7][6][0]) != 0xEBAA7D4BL)) | g_141)))), l_2494, g_74, g_1933, g_1714), l_2341));
                        return l_2489;
                    }
                }
                else
                {
                    g_2322 = g_559;
                }
            }
            else
            {
                int l_2509[7][7] = {{0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}, {0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}, {0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}, {0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}, {0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}, {0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}, {0xF74ECC6DL, 1L, 0x4CE2B894L, 1L, 0xF74ECC6DL, 0xDE4FE5DEL, 0xF74ECC6DL}};
                unsigned l_2569 = 0UL;
                int i, j;
                if (((65528UL != (l_2419[7] < l_2114)) == func_35(((safe_sub_func_uint8_t_u_u(((1UL & (safe_sub_func_int16_t_s_s(l_2509[2][2], ((safe_lshift_func_int16_t_s_u((((safe_mod_func_int16_t_s_s((l_2514 | l_2320), g_2351)) , 7L) , g_141), 9)) ^ g_2211)))) , l_2515), g_2136)) , g_374[8]), l_2226[0], l_2419[7], g_1131, g_374[8])))
                {
                    unsigned char l_2537 = 0xCAL;
                    for (g_1131 = 20; (g_1131 != (-13)); --g_1131)
                    {
                        char l_2525[7][1][2] = {{{(-9L), (-6L)}}, {{(-9L), (-6L)}}, {{(-9L), (-6L)}}, {{(-9L), (-6L)}}, {{(-9L), (-6L)}}, {{(-9L), (-6L)}}, {{(-9L), (-6L)}}};
                        int i, j, k;
                        g_2322 = (func_15(l_2206, g_1002) , (safe_add_func_int32_t_s_s(((g_737[7][6][0] , (safe_unary_minus_func_uint32_t_u((func_8(l_2419[7], ((safe_mod_func_int16_t_s_s(g_7[1], (safe_rshift_func_uint16_t_u_s((1L & (g_2351 == (l_2525[2][0][0] == l_2215))), g_1136)))) , g_1933), l_2526, g_65[0]) , g_235)))) < 1UL), 0xCBE0EAABL)));
                        g_2322 = (func_29(((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((+(l_2537 , (l_2216 <= (l_2186 <= (safe_lshift_func_uint8_t_u_u(func_27((((safe_mod_func_uint32_t_u_u(g_6, 0x523A43FDL)) || (safe_mod_func_uint8_t_u_u((func_15((l_2509[2][2] , (safe_mod_func_int16_t_s_s(g_1714, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_2187 != 4L) , 0x9D2CL), 2)), l_2186)) == l_2404), l_2525[2][0][0])), g_1916)) || (-3L))))), l_2509[2][2]) <= l_2473), 0x55L))) , l_2073[0])), g_396)))))), l_2494)), g_374[8])))), g_2039[6])), 0)))) , l_2537), g_575, g_321[1][5], l_2419[4], l_2494) , (-7L));
                    }
                }
                else
                {
                    unsigned l_2554 = 0x4DC75B22L;
                    g_2322 = (func_8(l_2509[2][2], (((g_2089 || l_2554) >= func_41(l_2515, (((((safe_sub_func_uint16_t_u_u(65535UL, ((0xC5A0L < (((g_985 < (l_2509[2][2] > ((g_737[3][4][1] || 7L) != g_317))) ^ g_1394) , l_2509[5][3])) == g_2187))) && g_396) || l_2101[4][0]) ^ 0xBAL) | 0x1BFD6407L), l_2554)) ^ l_2419[7]), l_2015, g_1187) ^ 0xA3D07ED4L);
                }
                if ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(func_41((g_2136 ^ (0UL < (safe_mod_func_uint16_t_u_u(g_986, func_35(((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_2215, (g_396 <= func_41(g_321[0][4], g_559, func_57(l_2015, g_1394, l_2569, g_5, g_178[1][4][3]))))), l_2419[7])), g_1131)) , g_960), g_737[7][6][0], g_960, g_1919, g_1714))))), g_1916, g_2152), l_2341)), g_2211)))
                {
                    unsigned short l_2570 = 5UL;
                    int l_2592 = 1L;
                    unsigned short l_2610 = 0UL;
                    l_2248 = (-8L);
                    l_2515 = ((l_2570 < (0x76A63E40L & (((safe_mod_func_int32_t_s_s(0x7EBE3635L, g_985)) | func_29((safe_lshift_func_int16_t_s_u(l_2114, 3)), (safe_rshift_func_int8_t_s_u(l_2341, 5)), func_45(l_2570, l_2215, g_99, g_2039[3], g_141), g_2089, g_1827[0][0][3])) <= 0xBDL))) , l_2305);
                    l_2509[0][2] = func_8(l_2072, g_2322, ((safe_sub_func_uint8_t_u_u((0x60L | g_317), (safe_mod_func_int8_t_s_s((func_35(g_7[1], ((((safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0x63L, l_2570)), l_2570)))) >= ((safe_mod_func_int8_t_s_s(((~((g_1002 <= 0x0A6FL) != 0xA0734164L)) == 0xFCL), l_2509[1][2])) & g_978)) && g_74) > g_985), g_1916, l_2073[3], l_2570) <= l_2320), l_2515)))) || 1L), g_2152);
                    if ((g_1879[4] < 0x9FB85598L))
                    {
                        int l_2590 = (-3L);
                        char l_2591 = 0x8FL;
                        int l_2599 = 4L;
                        l_2515 = ((safe_mod_func_uint16_t_u_u(((((((0x0539L != (l_2590 , g_140)) < l_2419[4]) > l_2591) != (g_2137 , g_396)) < g_1136) & g_1827[3][1][1]), l_2216)) && g_1578);
                        g_396 = (((l_2592 & (((((safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((!l_2599), 4)) == (!(safe_add_func_int32_t_s_s((g_2133 != g_1933), (l_2590 && ((safe_rshift_func_uint8_t_u_s((func_57((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((~(((g_737[5][2][1] == g_1131) != 0xDEE1C282L) , (safe_lshift_func_int16_t_s_s((l_2569 > g_1394), 9)))), l_2509[2][2])), g_1656)) , l_2404) ^ g_2291), l_2216, g_1008, g_1085, l_2569) < l_2610), 4)) > g_6)))))), l_2515)) > g_1919), 6)) <= 0x0545L) & l_2610) & g_99) || l_2509[0][6])) > l_2611[1][0][0]) > g_1156);
                    }
                    else
                    {
                        unsigned l_2614[5] = {4294967288UL, 0x86A4F332L, 4294967288UL, 0x86A4F332L, 4294967288UL};
                        int i;
                        l_2248 = ((safe_lshift_func_uint8_t_u_s(l_2570, 0)) < (0UL < (l_2614[0] <= (g_1002 , l_2494))));
                    }
                }
                else
                {
                    return l_2419[3];
                }
                l_2248 = 0x7563AC0AL;
            }
        }
        for (g_2322 = 0; (g_2322 > (-24)); g_2322 = safe_sub_func_uint8_t_u_u(g_2322, 5))
        {
            unsigned char l_2625 = 0xE8L;
            int l_2642 = 0xF740049AL;
            l_2101[0][0] = (((((l_2015 >= l_2206) , (7L >= (safe_sub_func_uint16_t_u_u(((((func_45(g_317, func_27(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_1879[1], 4)), (l_2305 >= (safe_add_func_uint8_t_u_u(0x56L, func_27((l_2625 , ((g_140 && 0x5382L) || 0xD10439C1L)))))))) || g_960)), l_2625, g_1827[3][1][0], l_2072) >= g_2039[3]) || g_1020) , g_140) == 0UL), l_2226[1])))) , l_2625) || l_2055) && g_1070);
            for (g_2089 = 0; (g_2089 == 37); g_2089 = safe_add_func_int16_t_s_s(g_2089, 5))
            {
                int l_2634 = (-3L);
                l_2642 = func_8(((safe_lshift_func_int16_t_s_u(l_2611[1][0][0], 7)) < func_57((g_51 <= (((safe_lshift_func_uint8_t_u_u((func_41((1L >= g_1407), (g_2039[0] | (safe_lshift_func_int8_t_s_s(l_2634, 4))), (g_396 ^ ((~((g_321[1][5] != (((((safe_sub_func_uint8_t_u_u(func_15((safe_lshift_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_u((g_2187 || l_2114), l_2634)) <= 0L) , g_1131) , 249UL) != 0x6EL), l_2196)), g_1394), g_2187)) != l_2226[1]) , l_2625) >= l_2073[1]) > l_2641[3])) ^ g_201)) >= g_65[2]))) || l_2514), 3)) > g_2291) >= l_2634)), l_2625, g_985, l_2177, g_1187)), g_1827[4][2][1], g_2089, g_51);
            }
        }
    }
    return g_141;
}







static int func_8(unsigned p_9, unsigned p_10, int p_11, short p_12)
{
    unsigned char l_1715 = 0xAAL;
    int l_1781 = 0L;
    unsigned l_1832 = 0UL;
    unsigned l_1846 = 0UL;
    unsigned short l_1885 = 0xFFBCL;
    char l_1963 = 0xE5L;
    if (g_1135)
    {
        int l_1730[8][1] = {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}};
        int i, j;
        for (g_575 = 6; (g_575 < (-21)); g_575 = safe_sub_func_uint16_t_u_u(g_575, 5))
        {
            short l_1729 = 0x52CAL;
            int l_1731[4][8];
            unsigned char l_1793 = 0xE8L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 8; j++)
                    l_1731[i][j] = (-1L);
            }
            if ((safe_add_func_int16_t_s_s((((((0UL != (safe_lshift_func_uint8_t_u_s(((((safe_add_func_int32_t_s_s(2L, (safe_rshift_func_int8_t_s_s((func_27((((safe_rshift_func_uint16_t_u_u(func_45(((safe_mod_func_int32_t_s_s(p_12, (+((255UL || (((safe_sub_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(((g_5 <= (safe_lshift_func_int16_t_s_u((((g_1167 , 2L) , (g_986 && g_1135)) == g_374[4]), g_321[1][5]))) < p_9), 0L)) == g_1714) & 0UL), g_1135)) & p_10) , l_1715)) , p_10)))) , 0x0BA0L), p_9, g_1167, g_235, g_374[8]), l_1715)) ^ p_10) || 0xA46AEF8CL)) > 0x83C04921L), 3)))) < p_10) , p_9) & g_1145), g_1167))) <= p_9) != 0xDC60L) | l_1715) ^ l_1715), g_1167)))
            {
                unsigned short l_1718 = 65532UL;
                int l_1754 = (-3L);
                l_1731[0][1] = (((((safe_sub_func_int32_t_s_s(l_1718, (safe_sub_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s(0L, 10)) & ((l_1715 , func_15((safe_mod_func_uint32_t_u_u((l_1718 & ((l_1715 != (safe_rshift_func_int16_t_s_u((((g_141 < (safe_sub_func_int16_t_s_s(func_15(l_1729, l_1730[7][0]), p_9))) , p_10) , (-10L)), 7))) & 0x3BL)), l_1715)), p_11)) < g_321[0][5])) ^ (-1L)) < 1L), 0xAF44L)))) <= g_321[1][5]) <= (-1L)) < g_1131) <= g_140);
                for (g_1070 = (-6); (g_1070 == (-22)); --g_1070)
                {
                    int l_1734 = 0xAF6F2FEEL;
                    char l_1753 = 0xADL;
                    if (l_1729)
                    {
                        return l_1715;
                    }
                    else
                    {
                        int l_1752 = 0L;
                        g_396 = g_7[1];
                        l_1731[0][1] = ((((+l_1734) <= ((safe_rshift_func_uint8_t_u_u((0UL | (safe_add_func_uint16_t_u_u((l_1715 <= (((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_uint8_t_u(1UL)) < g_7[1]) >= 0x5BE3A7A6L), (65526UL | ((((safe_mod_func_uint32_t_u_u((g_575 == (((((p_9 & p_10) , 0x07L) , g_1187) > l_1730[7][0]) == g_1021)), l_1734)) < g_1085) , g_51) , l_1752)))), 0x48L)), p_12)) | l_1734) <= g_1155), 5)) & 0xD1L), 0x1FBD12EEL)) >= l_1734) < l_1718) <= p_10) < p_9)), l_1730[7][0]))), 3)) < g_51)) , (-1L)) <= l_1731[0][0]);
                        l_1754 = l_1753;
                    }
                    if (l_1729)
                        continue;
                    l_1730[7][0] = ((safe_add_func_int8_t_s_s(((func_57((safe_sub_func_uint16_t_u_u(((((((3UL || (((l_1753 || (g_559 > l_1730[7][0])) || func_27(((l_1734 >= (((g_1145 == p_9) , (safe_rshift_func_int16_t_s_s(g_1032, 1))) < (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((func_35((p_9 && g_1085), p_9, g_264, l_1715, p_10) > 0x4955E645L), 0x10D5F17DL)) , p_9), 8)) != g_1578), l_1715)), 8)) == p_9) | (-1L)) && 3L) , 0x07L), g_355)) , p_12), g_1085)))) > g_178[4][1][5]))) < p_12)) < g_235) | p_9) , l_1730[0][0]) , 0x2DL) , p_10), l_1715)), g_1145, p_11, g_559, l_1754) & 255UL) || p_10), g_1167)) != p_10);
                }
                l_1781 = (((safe_lshift_func_uint8_t_u_u((g_737[7][6][0] && g_201), 4)) | func_15(l_1730[7][0], ((safe_mod_func_uint8_t_u_u((func_15(g_1145, p_11) >= (((((safe_sub_func_uint16_t_u_u((g_1155 | ((safe_lshift_func_int8_t_s_u(0x1BL, 5)) > (func_35(g_201, l_1715, g_74, l_1730[7][0], p_10) , p_10))), 1UL)) < 1UL) >= 0x81L) && 2L) >= 1UL)), (-6L))) , g_141))) , g_978);
                g_396 = (g_7[1] && 5L);
            }
            else
            {
                short l_1797 = 0x3B11L;
                int l_1803 = 1L;
                short l_1813 = 7L;
                if (g_737[7][6][0])
                {
                    l_1731[0][1] = 0xA78CFB98L;
                    for (l_1729 = 0; (l_1729 <= (-9)); l_1729 = safe_sub_func_uint16_t_u_u(l_1729, 3))
                    {
                        return p_11;
                    }
                }
                else
                {
                    l_1730[7][0] = 0x1F3E242AL;
                }
                for (g_1187 = 0; (g_1187 <= 20); g_1187 = safe_add_func_uint8_t_u_u(g_1187, 4))
                {
                    unsigned char l_1786 = 0x0AL;
                    int l_1796[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1796[i] = 0x256802F1L;
                    l_1786 = p_11;
                    if ((((func_41(g_1394, p_12, func_35((safe_lshift_func_uint8_t_u_s(p_12, (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((((l_1793 ^ ((func_45((((safe_sub_func_uint32_t_u_u(0xCAF4E76CL, l_1796[0])) , l_1797) | g_235), g_7[2], g_1656, l_1731[3][4], l_1796[0]) || 0xB5A41800L) , g_99)) , 0x4AL) && g_140) == g_1021), l_1731[0][1])), 2)))), g_960, p_9, g_1021, l_1730[7][0])) && g_1167) <= g_978) ^ l_1730[7][0]))
                    {
                        l_1730[7][0] = (func_35(p_12, (safe_add_func_int32_t_s_s((1L > (l_1715 , (safe_mod_func_uint32_t_u_u(func_57((0xA4357DBDL | g_985), ((g_575 | l_1730[1][0]) , (g_559 && (l_1796[0] , (-10L)))), p_10, g_1187, g_5), 0x05E64D34L)))), 0x2AFC5BFDL)), p_9, p_10, p_12) > p_12);
                        return p_12;
                    }
                    else
                    {
                        unsigned l_1802 = 0UL;
                        l_1802 = g_986;
                        return p_9;
                    }
                }
                l_1803 = g_986;
                for (g_985 = 0; (g_985 <= 3); g_985 += 1)
                {
                    int l_1812 = 5L;
                    for (g_1135 = 3; (g_1135 >= 0); g_1135 -= 1)
                    {
                        l_1803 = 0xD4D3FBBFL;
                    }
                    if (((((~((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((((-2L) != (0x69E5B282L && (((((((safe_add_func_int32_t_s_s((-1L), (safe_lshift_func_uint16_t_u_u((l_1812 > (l_1813 , (l_1730[7][0] , l_1812))), l_1812)))) , p_12) & 65535UL) | 4294967293UL) <= p_9) , g_321[0][5]) & 0xD1L))) <= p_9) == p_12) < l_1793), g_737[2][4][0])), p_9)) , l_1729)) ^ g_559) <= 0xF3E6L) & p_11))
                    {
                        int l_1822 = 0x05966E19L;
                        int l_1826 = 0x6EBEEF4FL;
                        if (p_10)
                            break;
                        if (g_201)
                            continue;
                        l_1730[3][0] = func_27((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_15(((safe_lshift_func_int8_t_s_s((l_1781 , (safe_add_func_uint8_t_u_u(g_1656, g_1136))), 3)) , func_35(func_15(l_1730[7][0], p_9), l_1781, l_1822, g_1085, l_1797)), p_11), p_10)), 8L)));
                        g_1827[3][1][1] = (((((((!(g_355 && (((func_27(g_985) ^ (p_11 == (safe_unary_minus_func_int8_t_s((((0x32ADA0AAL == ((safe_rshift_func_uint8_t_u_u(func_27((func_45(((l_1793 || p_12) || ((l_1731[0][1] && (l_1826 , g_899)) == 0xA0L)), l_1730[4][0], p_12, p_12, l_1715) && (-3L))), g_65[1])) == l_1812)) ^ 1L) | p_10))))) || g_355) ^ g_65[1]))) == l_1812) , l_1812) , 0x47642DE7L) | 0x89516725L) , l_1731[1][1]) > 9L);
                    }
                    else
                    {
                        return g_6;
                    }
                }
            }
        }
        l_1781 = (((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_1730[3][0], l_1832)), p_9)) > func_15((func_35(p_10, g_140, p_9, func_27(p_11), l_1730[4][0]) , g_374[7]), p_9)) < g_74);
        for (g_1407 = 28; (g_1407 != 17); g_1407--)
        {
            unsigned short l_1847 = 6UL;
            int l_1848 = 0x92956A97L;
            l_1847 = (safe_add_func_uint8_t_u_u(func_57(p_10, ((g_355 && ((((safe_rshift_func_uint16_t_u_s(l_1832, 2)) < ((safe_unary_minus_func_uint32_t_u(g_5)) >= (((((safe_add_func_uint32_t_u_u((((((func_35(func_35((safe_rshift_func_uint16_t_u_s(g_1656, (safe_add_func_uint32_t_u_u((((g_1827[4][2][1] | 65529UL) , 0x82L) || 0x86L), 4294967295UL)))), g_1578, l_1846, l_1730[7][0], p_9), p_12, g_1656, g_321[1][5], p_9) < p_11) > p_12) != l_1781) , 1UL) || 2L), p_9)) , 0x5BA1L) && 0x6B37L) , g_178[1][4][3]) || l_1715))) > p_10) && 0x85FD8675L)) , g_6), p_11, p_12, p_12), l_1730[7][0]));
            if (g_1155)
                break;
            for (g_575 = 8; (g_575 >= 1); g_575 -= 1)
            {
                for (g_559 = 1; (g_559 <= 4); g_559 += 1)
                {
                    int i;
                    l_1848 = g_374[(g_559 + 4)];
                    for (g_317 = 0; g_317 < 2; g_317 += 1)
                    {
                        for (g_355 = 0; g_355 < 10; g_355 += 1)
                        {
                            g_321[g_317][g_355] = 18446744073709551607UL;
                        }
                    }
                    if (g_374[g_575])
                        continue;
                }
            }
            g_396 = g_1827[0][2][2];
        }
    }
    else
    {
        char l_1882[5];
        int l_1886 = 0x416B7D37L;
        int l_1978 = 0xEB5820B8L;
        int i;
        for (i = 0; i < 5; i++)
            l_1882[i] = 0xA5L;
        if ((safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_s(g_321[1][5], 6)) & ((-3L) && (safe_lshift_func_uint16_t_u_s(p_10, 8)))) != p_11) , (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((!0x96FEL), ((((p_10 ^ (((safe_mod_func_int16_t_s_s(p_9, p_12)) , (p_9 & l_1715)) == g_201)) , 0xF2A27B65L) , 0UL) ^ 7UL))), l_1846))), 6)))
        {
            unsigned l_1861 = 0xF44CBC96L;
            return l_1861;
        }
        else
        {
            unsigned short l_1883 = 65535UL;
            for (g_317 = (-28); (g_317 <= (-20)); g_317++)
            {
                short l_1884 = 1L;
                if (g_1008)
                    break;
                for (g_235 = 23; (g_235 == 18); g_235 = safe_sub_func_int8_t_s_s(g_235, 1))
                {
                    short l_1868 = (-1L);
                    for (g_1008 = 0; (g_1008 != 56); ++g_1008)
                    {
                        char l_1887 = 0L;
                        g_396 = (l_1868 | g_1135);
                        l_1886 = ((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(((((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_1879[4], ((+((p_10 <= (g_559 == (safe_rshift_func_uint16_t_u_u(g_178[5][0][4], l_1882[1])))) , ((func_35(((1L == func_57((9L > 0x0B67F8E7L), p_12, p_11, p_11, l_1883)) < g_1008), g_1135, p_11, l_1884, l_1882[1]) >= 0x322DB86FL) != g_978))) & p_11))) >= g_575), l_1885)), 0L)) | g_317) != 1UL) >= l_1882[1]), p_11)) ^ l_1883) , 0x87A55C48L), 4294967289UL)) | g_1827[1][0][6]);
                        if (g_264)
                            break;
                        l_1887 = l_1883;
                    }
                }
            }
            l_1781 = func_35((((safe_mod_func_int32_t_s_s((((((safe_lshift_func_uint8_t_u_s(0x4AL, l_1882[1])) | ((0x87C19073L && (func_15((safe_rshift_func_uint8_t_u_s(0UL, 7)), ((safe_add_func_uint16_t_u_u((p_9 < p_11), l_1715)) != 0x185BL)) ^ 1UL)) & g_1167)) > p_9) ^ p_9) <= 7L), 3UL)) , l_1883) && 2L), p_12, g_1021, l_1882[0], l_1883);
            g_396 = g_317;
        }
        for (g_1136 = 3; (g_1136 != 31); g_1136++)
        {
            unsigned l_1904 = 0x7083FCB1L;
            int l_1914 = 0xEF2D09EFL;
            short l_1926 = 4L;
            if (g_355)
                break;
            for (g_396 = 0; (g_396 <= (-23)); g_396 = safe_sub_func_int32_t_s_s(g_396, 6))
            {
                unsigned char l_1907[1][5][3] = {{{0xCFL, 0xCFL, 249UL}, {0xCFL, 0xCFL, 249UL}, {0xCFL, 0xCFL, 249UL}, {0xCFL, 0xCFL, 249UL}, {0xCFL, 0xCFL, 249UL}}};
                int l_1929 = 0x17B7EEAAL;
                int i, j, k;
                for (g_355 = 0; (g_355 <= 4); g_355 += 1)
                {
                    int i;
                    l_1886 = (~func_15((safe_add_func_int8_t_s_s((0x30D579AAL == ((g_65[g_355] <= ((((safe_mod_func_int32_t_s_s(g_1879[g_355], l_1904)) >= ((safe_mod_func_int16_t_s_s((func_57(l_1907[0][3][0], ((safe_rshift_func_int8_t_s_s(func_41(g_374[4], l_1907[0][3][0], ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_15((p_9 >= 4294967295UL), l_1886), l_1904)), l_1904)) , g_201)), p_12)) , p_11), p_9, g_65[g_355], g_65[g_355]) <= p_10), g_1167)) , 0xCE3AL)) , g_51) & l_1885)) , 0x27195F84L)), p_10)), g_1145));
                    l_1914 = p_10;
                    if (p_11)
                    {
                        g_1916 = ((g_1879[g_355] , l_1914) >= g_1915);
                        if (p_11)
                            break;
                        g_1919 = (safe_mod_func_int16_t_s_s((l_1885 & (+(p_10 , (g_99 & 0x6211L)))), g_1085));
                    }
                    else
                    {
                        int l_1932 = 0xEA89E8EAL;
                        l_1929 = ((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(g_1131, 0xB853L)) <= (((safe_mod_func_uint8_t_u_u(((p_10 | ((p_11 | (l_1926 , ((safe_lshift_func_int8_t_s_u(1L, (l_1832 , (((func_27(g_235) == 0xA2L) >= g_1879[g_355]) >= l_1907[0][2][1])))) , 1L))) , l_1914)) && g_321[1][4]), p_10)) | g_1394) , p_12)), g_374[8])) & g_65[g_355]);
                        l_1932 = (safe_add_func_uint16_t_u_u((!(g_1002 != (p_12 , ((((p_10 || (l_1926 < ((g_1879[2] && p_10) == l_1904))) & ((g_355 == 0xA1L) || l_1904)) > l_1929) ^ 65533UL)))), 0x8748L));
                        g_1933 = g_178[1][4][3];
                    }
                }
            }
            g_396 = (func_41((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_1904 < 0x9482L), (l_1886 > 1UL))), 0x17L)), p_9)), (safe_sub_func_int32_t_s_s((((safe_unary_minus_func_int16_t_s(func_41((!((safe_add_func_uint8_t_u_u(g_986, (((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(p_11, (0xFD904754L < l_1882[1]))) , l_1882[1]), 1L)) >= p_11) , (-1L)))) & 0xD480L)), p_9, p_12))) >= g_1827[3][1][1]) > l_1882[1]), 1UL)), l_1886) && p_12);
            for (g_1915 = (-5); (g_1915 > (-14)); g_1915--)
            {
                unsigned short l_1956 = 0xDA7EL;
                int l_1979 = 0L;
                if (((255UL == (safe_mod_func_uint8_t_u_u((func_45(((p_10 == l_1886) ^ 0x3AL), (safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s(p_10, ((func_27(l_1832) > func_45(func_15(g_317, p_11), g_1656, l_1882[1], g_1916, p_9)) && p_10))))), g_7[1], p_12, p_11) >= 0x8AF8D3C2L), l_1882[1]))) >= 0L))
                {
                    if (l_1956)
                        break;
                    for (p_9 = 0; (p_9 <= 4); p_9 += 1)
                    {
                        int i, j, k;
                        g_396 = (+(safe_add_func_int8_t_s_s(g_178[p_9][p_9][(p_9 + 1)], p_10)));
                    }
                }
                else
                {
                    unsigned short l_1964 = 0x340EL;
                    unsigned l_1965 = 18446744073709551615UL;
                    if (((8L >= p_10) > ((safe_lshift_func_uint16_t_u_s(func_57(func_29((p_11 >= p_12), (func_35(l_1832, (safe_add_func_int16_t_s_s(((0xCBL && (-4L)) , 0x4C38L), (l_1886 | l_1963))), l_1964, g_985, g_960) & 8UL), l_1956, l_1965, g_317), l_1882[3], l_1965, p_11, l_1965), g_1578)) && 0xE686EB61L)))
                    {
                        l_1781 = (safe_sub_func_int32_t_s_s(p_10, g_1008));
                        l_1914 = (safe_sub_func_int16_t_s_s((-6L), func_57(p_12, l_1904, (safe_rshift_func_uint8_t_u_s(((l_1882[0] < (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((-10L), (~(5L || (g_1155 >= (+func_41(l_1846, (((g_201 > p_12) && 0L) <= 0xB269L), g_985))))))), l_1978)) < p_10), l_1956))) >= g_1167), p_11)), p_10, p_11)));
                        l_1979 = p_11;
                    }
                    else
                    {
                        short l_1980 = (-5L);
                        l_1980 = (l_1926 > (l_1885 , (g_6 | g_1915)));
                        return l_1926;
                    }
                    g_396 = p_11;
                }
                l_1886 = (safe_lshift_func_uint16_t_u_u(func_41((p_10 , func_29((safe_mod_func_int32_t_s_s(func_29((p_10 , (0x1999B372L > (safe_rshift_func_uint16_t_u_s((g_1915 >= ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(0xEAD7888FL)), (((+(safe_add_func_int8_t_s_s(l_1914, func_41((func_27(g_985) , 0xE27E0B83L), g_1145, g_1827[3][1][1])))) , 0x07BC2EDAL) ^ p_10))) >= 0x6C81L)), 13)))), p_11, l_1956, g_1135, l_1904), p_9)), p_9, p_12, g_1085, p_11)), l_1979, p_11), l_1926));
                for (g_559 = 0; (g_559 <= 1); g_559 += 1)
                {
                    int i, j;
                    l_1979 = (safe_mod_func_int32_t_s_s(((~g_321[g_559][(g_559 + 1)]) | g_321[g_559][(g_559 + 3)]), 0x9C64B871L));
                }
            }
        }
    }
    l_1781 = p_9;
    return p_12;
}







static short func_15(unsigned p_16, unsigned p_17)
{
    unsigned char l_1693 = 0x29L;
    l_1693 = p_17;
    return g_51;
}







static unsigned func_20(unsigned p_21, unsigned p_22, int p_23)
{
    short l_905[1];
    int l_906 = 0x14165CD6L;
    unsigned short l_942 = 0x9A7BL;
    unsigned l_972 = 1UL;
    int l_1112 = 0xC496A1B1L;
    unsigned short l_1128[3][1][9] = {{{0x6DC3L, 0UL, 1UL, 0x6AA1L, 0x6AA1L, 1UL, 0UL, 0x6DC3L, 1UL}}, {{0x6DC3L, 0UL, 1UL, 0x6AA1L, 0x6AA1L, 1UL, 0UL, 0x6DC3L, 1UL}}, {{0x6DC3L, 0UL, 1UL, 0x6AA1L, 0x6AA1L, 1UL, 0UL, 0x6DC3L, 1UL}}};
    int l_1166[7][4][3] = {{{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}, {{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}, {{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}, {{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}, {{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}, {{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}, {{(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}, {(-1L), 0x7D29308AL, 8L}}};
    unsigned char l_1273[1][10];
    char l_1358 = (-1L);
    short l_1384 = 0xD6A0L;
    unsigned l_1408 = 6UL;
    int l_1629 = 0x665C06DAL;
    char l_1630 = 1L;
    unsigned l_1689 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_905[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_1273[i][j] = 0xC2L;
    }
    for (g_74 = 0; (g_74 <= 2); g_74 += 1)
    {
        int l_911 = 0xB458F342L;
        l_906 = (0x03D8L && l_905[0]);
        p_23 = (g_321[1][5] < (safe_add_func_uint32_t_u_u(((g_321[0][2] , (65535UL >= (((safe_rshift_func_uint16_t_u_u(((func_41(g_321[1][5], l_911, p_23) >= 0UL) == ((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x8FEE66A6L, g_355)), 0x5AL)) <= (-1L))), g_264)) || g_140) || 5UL))) | g_140), p_21)));
        for (g_51 = 0; (g_51 <= 2); g_51 += 1)
        {
            return p_22;
        }
    }
    l_906 = (safe_unary_minus_func_uint16_t_u(((l_905[0] | (safe_lshift_func_int8_t_s_u(((func_41((~((((((p_22 != (safe_sub_func_int32_t_s_s((p_22 != ((((l_905[0] ^ 65535UL) && (((g_575 > ((safe_sub_func_int8_t_s_s(((((!((g_178[1][4][3] > (safe_add_func_int16_t_s_s(0x8656L, (-2L)))) <= 255UL)) == 0x40C48165L) , 0x83B491D6L) && 0xB46D0CAAL), (-1L))) , 0L)) || g_51) , l_905[0])) && l_905[0]) || p_22)), g_140))) & g_65[4]) , l_906) , p_21) == g_737[7][6][0]) , 0x007DFF26L)), l_905[0], p_21) == 0xA6A7L) && l_905[0]), l_905[0]))) != (-2L))));
    for (g_396 = 1; (g_396 >= 0); g_396 -= 1)
    {
        char l_941 = 0x9FL;
        unsigned l_981 = 6UL;
        short l_984 = 7L;
        int l_1031 = (-3L);
        int l_1043 = (-3L);
        char l_1079[3];
        unsigned char l_1130 = 0x83L;
        int i;
        for (i = 0; i < 3; i++)
            l_1079[i] = 0x65L;
        if ((safe_sub_func_int8_t_s_s(func_57(p_22, p_22, (func_57(p_22, l_905[0], (((((safe_lshift_func_uint16_t_u_u(func_41(g_737[4][1][1], p_21, (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(l_905[0], g_396)) > (((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_941 , 0xF5L), l_906)), 1)) ^ l_905[0]) <= 65535UL)) , l_941) == l_905[0]), 8L)) , g_178[0][1][3]), l_941))), l_941)) == g_396) || g_317) <= p_23) != 0UL), g_355, p_22) , l_941), p_21, g_321[1][5]), g_140)))
        {
            int l_955 = 1L;
            int l_987 = 0x7C60384EL;
            if ((p_23 >= ((((l_941 | l_942) | l_941) < (safe_mod_func_int32_t_s_s((g_321[1][9] || ((safe_rshift_func_int16_t_s_s(g_355, 14)) | (safe_rshift_func_int8_t_s_u(0xF5L, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((g_899 > (((safe_mod_func_uint32_t_u_u((p_21 < g_65[4]), p_23)) != l_955) , 65535UL)) , g_396), l_955)), p_21)))))), 1UL))) > l_941)))
            {
                int l_971 = (-7L);
                g_960 = (p_21 && ((((safe_add_func_int16_t_s_s((0xCA7FL && g_235), func_57(g_178[1][4][3], ((safe_sub_func_int16_t_s_s(p_21, (func_27(p_21) && ((l_905[0] , (0x47L == (-8L))) | 1L)))) && p_22), l_942, p_21, l_905[0]))) ^ 0L) > 4294967286UL) , 0xEBL));
                l_906 = (((((safe_add_func_int8_t_s_s(((l_906 & (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(l_942, 4)) , p_23) || ((((g_317 < l_942) || func_27(((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_22, ((g_141 ^ (p_23 && func_27((((l_971 , g_374[8]) | p_21) < g_201)))) & g_178[1][4][3]))) , l_971), g_737[7][6][0])) > p_23))) , l_905[0]) >= 1L)), 1))) , l_941), l_941)) & 0x4273L) & p_22) == l_971) <= g_264);
            }
            else
            {
                short l_977 = 0xECCDL;
                unsigned l_983[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_983[i] = 9UL;
                g_978 = func_57(l_972, ((g_396 == g_559) | (((safe_rshift_func_uint16_t_u_s(0UL, p_23)) || g_737[5][3][1]) , (safe_add_func_int16_t_s_s(l_941, (g_737[4][3][1] , (p_21 , 0xDF10L)))))), l_977, l_906, l_977);
                for (g_201 = 0; (g_201 <= 1); g_201 += 1)
                {
                    int l_982[8][6] = {{(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}, {(-1L), 7L, (-1L), 0x934107CFL, 0xC27FB012L, (-8L)}};
                    int i, j;
                    for (g_960 = 0; (g_960 <= 0); g_960 += 1)
                    {
                        int i;
                        l_984 = func_41(g_65[(g_201 + 3)], ((safe_lshift_func_int8_t_s_u((l_981 <= 0x37E4L), 5)) == 0x70L), (func_41(l_982[1][3], (g_355 , func_41(p_22, (func_57(p_21, ((func_57((p_23 | p_21), g_396, p_22, p_22, g_178[1][4][3]) == 0x02L) != 0x22L), g_374[8], g_235, g_960) == p_21), l_955)), l_983[2]) & g_264));
                        g_985 = ((0x08L <= (-7L)) > ((g_737[5][3][2] || p_22) ^ p_22));
                        g_986 = 0x564BFA94L;
                    }
                    if (g_65[(g_396 + 2)])
                    {
                        unsigned l_1007[7] = {0x43C52CF2L, 0x9A015DB5L, 0x43C52CF2L, 0x9A015DB5L, 0x43C52CF2L, 0x9A015DB5L, 0x43C52CF2L};
                        int l_1017[7][7][2] = {{{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}, {{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}, {{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}, {{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}, {{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}, {{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}, {{(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}, {(-1L), 0xE4CC7CBBL}}};
                        int i, j, k;
                        l_987 = func_57(g_51, g_355, p_22, g_396, g_575);
                        g_1008 = (safe_mod_func_int32_t_s_s(func_57(((l_905[0] < (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(p_22, ((safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u(g_985, (g_1002 && (safe_mod_func_uint8_t_u_u(((+(g_559 , ((safe_mod_func_uint32_t_u_u(g_960, (l_1007[6] , func_57((p_22 , (8L && g_899)), g_960, p_21, g_264, p_22)))) || 1UL))) < 0xF1L), l_1007[5]))))) < (-6L)) == g_264) , 0x5FL), 7)) <= g_899))) || p_21) < 2UL), g_374[8])), p_22)) && 6L), g_374[8]))) >= p_21), l_981, g_321[1][5], g_737[7][2][1], p_23), p_23));
                        l_1017[2][0][1] = ((func_57(((l_987 != 0xEEF3L) == 0x22E0L), (safe_add_func_int16_t_s_s(7L, (safe_sub_func_uint16_t_u_u((0x30L < (safe_add_func_int32_t_s_s((p_23 != (p_21 , ((func_57((safe_rshift_func_int8_t_s_s(p_22, g_141)), p_22, g_235, l_984, p_22) & g_978) , g_141))), l_984))), l_941)))), l_987, p_21, l_955) != 1UL) || p_22);
                        g_1020 = (safe_add_func_int16_t_s_s((-4L), 65529UL));
                    }
                    else
                    {
                        g_1021 = p_21;
                    }
                    l_982[5][3] = (safe_sub_func_int8_t_s_s(0x64L, 4UL));
                    l_982[1][3] = ((((g_737[7][6][0] ^ (((func_57((((safe_lshift_func_uint16_t_u_s((l_941 && 1L), 9)) <= (~0xFDL)) ^ g_396), g_51, l_987, func_27((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0xC6L, g_65[(g_396 + 2)])), l_977))), l_972) , 0x13B6L) && g_355) & 0UL)) || l_983[1]) || g_374[5]) , g_1002);
                }
            }
        }
        else
        {
            char l_1030[5][10][5] = {{{0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}}, {{0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}}, {{0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}}, {{0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}}, {{0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}, {0x12L, 0L, 0L, 0x99L, (-1L)}}};
            int i, j, k;
            for (g_235 = 0; (g_235 <= 1); g_235 += 1)
            {
                l_1031 = (g_1008 && (l_1030[2][9][4] == p_22));
                g_1032 = 0x89E34739L;
            }
        }
        if (g_575)
            break;
        l_1031 = ((safe_sub_func_int16_t_s_s(((p_21 | l_972) <= g_321[1][5]), (safe_sub_func_uint8_t_u_u(249UL, g_1021)))) | ((((((safe_add_func_int8_t_s_s(l_906, 0xFBL)) , g_1021) ^ (func_57((safe_sub_func_int8_t_s_s(l_905[0], l_1031)), g_978, l_1043, p_23, p_22) > g_737[1][3][2])) >= l_941) ^ p_22) < g_1020));
        for (g_235 = 1; (g_235 >= 0); g_235 -= 1)
        {
            unsigned short l_1044 = 65526UL;
            return l_1044;
        }
        for (g_317 = 0; (g_317 <= 1); g_317 += 1)
        {
            int l_1055 = (-1L);
            if (((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(g_737[2][0][1], p_23)) , (!(safe_sub_func_int8_t_s_s((0x0EL < func_57(p_21, (safe_sub_func_uint32_t_u_u(((((g_575 || p_21) > g_178[1][4][3]) != ((p_23 & (safe_lshift_func_int16_t_s_u(func_27(p_23), 8))) && p_22)) > p_21), 5UL)), l_1055, p_23, l_1043)), l_942)))), g_99)) & 0UL) , g_317) < p_22))
            {
                unsigned short l_1113 = 0xE793L;
                int l_1122 = 0x225254DBL;
                int l_1129 = (-1L);
                l_1031 = g_317;
                if (((func_27(l_942) <= (safe_add_func_int32_t_s_s(((0x82FE5A75L > g_264) , (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(func_41(l_905[0], p_21, l_1055), 4)), ((((g_899 , 0L) , p_21) ^ 0x1897L) , g_986))) < l_1031), g_374[5]))), l_1031))) < 0xBC09808CL))
                {
                    g_1070 = func_27(((safe_mod_func_int32_t_s_s(0xE75A5249L, l_1031)) && (p_23 | (((65528UL > (safe_rshift_func_int8_t_s_s((p_21 >= g_1002), p_21))) > g_1008) < (safe_mod_func_int16_t_s_s(p_23, (-1L)))))));
                    if (g_1032)
                        continue;
                    p_23 = ((safe_sub_func_uint16_t_u_u(g_1020, (func_27(p_21) , (safe_sub_func_int8_t_s_s(((g_737[1][6][2] , func_27(l_1055)) , (~((safe_rshift_func_uint16_t_u_u(g_374[8], 6)) & ((safe_sub_func_int32_t_s_s(p_23, (l_1079[2] < p_22))) & 0xE6L)))), p_22))))) & g_737[7][6][0]);
                }
                else
                {
                    short l_1080 = 0x9A75L;
                    int l_1083[6][2][1] = {{{9L}, {9L}}, {{9L}, {9L}}, {{9L}, {9L}}, {{9L}, {9L}}, {{9L}, {9L}}, {{9L}, {9L}}};
                    char l_1111 = 0xE0L;
                    int i, j, k;
                    p_23 = l_1080;
                    l_1083[5][1][0] = (safe_lshift_func_uint8_t_u_u((l_1055 == 0L), 7));
                    if (g_355)
                    {
                        short l_1084 = (-7L);
                        l_1084 = (g_51 , g_575);
                        if (g_1020)
                            continue;
                    }
                    else
                    {
                        short l_1096[10];
                        char l_1118[3];
                        short l_1121 = 1L;
                        unsigned l_1123 = 0xBA231488L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1096[i] = 0x1986L;
                        for (i = 0; i < 3; i++)
                            l_1118[i] = 0x4FL;
                        g_1085 = p_22;
                        p_23 = ((((((((func_27(p_23) == (4294967295UL != l_984)) != g_1020) , p_21) | (safe_add_func_uint16_t_u_u(p_23, ((safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(g_737[3][0][0], (((safe_lshift_func_uint16_t_u_u(((~(l_972 && g_986)) == l_1055), l_1083[1][1][0])) != g_74) || g_374[4]))), p_22)) > p_23), g_559)) || 1L)))) , g_264) && p_21) > l_1096[8]) <= l_905[0]);
                        l_1113 = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((((((l_1096[8] <= (-10L)) > p_22) ^ func_27(g_737[7][6][0])) , p_23) ^ ((safe_mod_func_uint32_t_u_u(l_1083[3][1][0], ((g_899 >= (safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((~l_1111) == 0UL), p_22)) ^ g_1032) , 0x4CL), 6)) == p_23) <= l_1080) ^ g_65[2]) < l_1083[5][0][0]), l_942))) , l_1112))) < 0xF9ACL)) >= 0x1B22L), p_23)), g_1032)), g_1032));
                        p_23 = (((((((((g_264 || ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(g_178[1][4][3], p_21)), (l_1118[0] , ((safe_lshift_func_uint8_t_u_s((+(5UL && (p_23 > (1L < ((g_1021 >= (g_899 <= g_1032)) , l_1121))))), l_984)) == 0xE3L)))) ^ p_22)) & g_1070) || 1L) , l_1122) ^ p_23) , l_1123) , 0x01L) && p_21) != 1UL);
                    }
                    return p_22;
                }
                g_1131 = (((safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((~g_140) > func_41(l_1128[1][0][0], l_1129, g_140)) ^ ((l_1113 != g_1032) , l_1130)), (g_141 & l_905[0]))) ^ l_905[0]), l_1055)) , 4294967295UL) , g_960);
                g_1135 = (safe_add_func_uint8_t_u_u(func_57((l_981 < (l_1055 , func_27(g_1002))), (l_1130 , ((((((((0x8FL != 0x82L) || 0x81L) & (safe_unary_minus_func_uint32_t_u((0x9C2BL && p_21)))) >= 3L) , 0xC74DL) > 1UL) > 0x23L) & 1L)), l_942, p_22, g_575), 0UL));
            }
            else
            {
                g_1136 = g_99;
            }
            l_1055 = l_1055;
            for (l_1031 = 2; (l_1031 >= 0); l_1031 -= 1)
            {
                short l_1148 = (-3L);
                int l_1170 = 1L;
                int l_1181 = (-8L);
                int l_1186 = (-4L);
                for (l_906 = 0; (l_906 <= 1); l_906 += 1)
                {
                    int i, j;
                    g_1145 = ((-1L) != (safe_rshift_func_uint16_t_u_u(g_321[g_317][l_906], (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((-5L) | p_23) == ((safe_rshift_func_uint16_t_u_s(((((((g_1020 , (((l_1128[1][0][0] ^ (((4L ^ 0xD8969D48L) & (-8L)) > g_178[5][4][4])) | p_21) || l_1055)) < l_972) | g_374[0]) <= 0xCC0514DCL) >= l_905[0]) < 0xEFDC02CDL), 8)) != p_23)), g_1020)) != p_23), g_1002)))));
                    if ((func_27(p_23) , ((func_41((((0L < (((((safe_rshift_func_int16_t_s_u(((0xC4998114L && 4294967290UL) & g_986), 5)) ^ 1L) > g_396) == g_986) != 1UL)) & p_22) , 0x721D810AL), g_978, g_317) & g_1020) & l_1148)))
                    {
                        unsigned short l_1154[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1154[i] = 0xAAC5L;
                        g_1155 = ((l_1055 ^ 0x1FL) , (safe_lshift_func_int16_t_s_u((((g_201 >= g_1032) == (((safe_rshift_func_int16_t_s_u((-6L), func_41(g_321[g_317][l_906], ((safe_unary_minus_func_int8_t_s(g_1135)) , (func_27((func_27(l_1154[5]) , 0x42BD39B9L)) <= p_21)), g_1020))) || l_981) , l_1055)) | g_1136), 13)));
                        p_23 = p_21;
                        g_1156 = p_22;
                    }
                    else
                    {
                        unsigned l_1165 = 0xEB7E4C17L;
                        p_23 = (p_21 || ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_s((((p_23 || 0x5BL) , (func_57(l_1148, g_99, (safe_lshift_func_uint8_t_u_u(l_1165, (((+(-4L)) & ((g_1155 == ((l_1165 ^ p_23) > 1L)) , 1L)) == p_23))), l_1166[2][1][2], g_1021) < 65533UL)) && l_972), 5)) && g_1020) || p_22) & g_737[2][4][0]), 7)) , l_1148), 0)) <= g_178[4][3][1]));
                        p_23 = 1L;
                    }
                    g_1167 = l_1148;
                    l_1170 = ((g_321[g_317][l_906] >= p_22) && (l_905[0] == (((((p_23 | (((((((((safe_add_func_int16_t_s_s(l_1148, func_27(l_942))) && l_942) ^ (p_22 ^ 0xEEFAB324L)) <= l_1166[3][3][0]) != 255UL) <= 0x4D64L) >= 0x99L) | p_23) , 0x1BD265E5L)) , 0xD3L) >= (-8L)) < p_22) > p_21)));
                }
                for (g_74 = 1; (g_74 >= 0); g_74 -= 1)
                {
                    int i;
                    return l_1079[(g_396 + 1)];
                }
                p_23 = p_22;
                g_1187 = func_57((safe_mod_func_uint16_t_u_u(func_57((safe_add_func_int16_t_s_s((p_22 | ((safe_sub_func_int32_t_s_s(l_1079[2], (safe_add_func_int8_t_s_s(g_985, (((func_57(p_23, ((((safe_rshift_func_int8_t_s_u(0L, 4)) < (l_1181 ^ (safe_mod_func_uint16_t_u_u((g_178[1][0][0] | (-1L)), (safe_add_func_uint8_t_u_u(((l_1055 >= l_981) <= l_1166[0][2][2]), 255UL)))))) , g_1156) > l_1170), p_21, g_1070, p_22) > l_1186) , g_737[3][1][1]) && p_22))))) < g_986)), g_355)), g_264, p_21, p_21, l_1055), p_21)), l_1055, g_178[1][4][4], l_1170, g_1021);
            }
        }
    }
    for (g_1021 = 0; (g_1021 >= 28); g_1021 = safe_add_func_uint16_t_u_u(g_1021, 8))
    {
        short l_1200 = 0x85DFL;
        int l_1212 = 0x60E613A1L;
        int l_1249[5] = {0x277D2C9CL, 0x7F91867CL, 0x277D2C9CL, 0x7F91867CL, 0x277D2C9CL};
        int l_1266 = 0x94BBC5A7L;
        int l_1377[1][2][9] = {{{0x379564ADL, 0x379564ADL, 0x23901F5EL, (-2L), 4L, (-2L), 0x23901F5EL, 0x379564ADL, 0x379564ADL}, {0x379564ADL, 0x379564ADL, 0x23901F5EL, (-2L), 4L, (-2L), 0x23901F5EL, 0x379564ADL, 0x379564ADL}}};
        int l_1445 = 0xD00A0FA5L;
        unsigned l_1473 = 0x910C2B74L;
        int l_1589 = 0L;
        char l_1617 = (-1L);
        int l_1634 = 0L;
        int l_1684 = 0x4DDFF489L;
        int i, j, k;
        for (g_1002 = 0; (g_1002 <= 2); g_1002 += 1)
        {
            unsigned short l_1210 = 1UL;
            unsigned l_1214 = 4294967293UL;
            int l_1215 = 0x64F78A33L;
            int l_1274 = 0x814FCC5DL;
            l_1200 = (func_41(((safe_add_func_int8_t_s_s(g_235, (0xBCL && (!(+(safe_rshift_func_uint16_t_u_u(p_22, 6))))))) >= g_140), (safe_sub_func_uint32_t_u_u((p_23 , ((p_23 <= (safe_lshift_func_uint8_t_u_s(252UL, 2))) & (p_23 || ((safe_mod_func_int32_t_s_s(p_21, 0xB149C8FAL)) >= 2L)))), p_21)), g_201) < 0x0BL);
            if (g_264)
            {
                unsigned short l_1211 = 0x6E45L;
                int l_1224[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1224[i] = 0x932EF1F3L;
                if ((8L >= l_1128[1][0][0]))
                {
                    unsigned char l_1209 = 5UL;
                    for (g_575 = 3; (g_575 >= 0); g_575 -= 1)
                    {
                        int l_1213 = 1L;
                        int i, j, k;
                        p_23 = (g_737[(g_1002 + 2)][(g_575 + 2)][g_1002] , ((g_737[(g_1002 + 4)][(g_1002 + 5)][g_1002] , (safe_rshift_func_int8_t_s_s((!((!(!func_57(g_737[(g_1002 + 6)][(g_575 + 1)][g_1002], func_57((((safe_add_func_int32_t_s_s(g_737[g_1002][(g_1002 + 3)][g_1002], func_57((((+(safe_add_func_uint8_t_u_u((((func_45(g_178[g_575][g_575][(g_575 + 1)], (5UL == l_1166[(g_1002 + 1)][g_575][g_1002]), ((func_41(g_65[(g_575 + 1)], ((((((((safe_mod_func_uint8_t_u_u(func_57(g_737[(g_1002 + 4)][(g_1002 + 5)][g_1002], g_65[(g_575 + 1)], l_1166[(g_1002 + 1)][g_575][g_1002], p_22, l_1209), 0x1EL)) && g_737[(g_1002 + 6)][(g_575 + 1)][g_1002]) > g_1156) > 0x40D7L) , g_74) & l_1210) != 1L) , g_264), g_899) , l_1211) , l_1210), p_23, l_1212) , p_21) ^ g_1187) & p_22), l_1200))) <= 0xD36E9369L) | l_1209), l_1213, g_985, g_559, p_23))) < l_1214) , 0xDA1E6258L), p_23, p_23, l_1212, l_1166[(g_1002 + 1)][g_575][g_1002]), g_737[8][5][2], g_737[g_1002][(g_1002 + 3)][g_1002], g_1135))) || 1UL)), 6))) != l_1210));
                        l_1215 = (p_21 >= 1UL);
                        if (g_235)
                            continue;
                    }
                }
                else
                {
                    int l_1222 = 0x0B37AC5DL;
                    for (l_1215 = 0; (l_1215 <= 4); l_1215 += 1)
                    {
                        unsigned short l_1223[5] = {0x4550L, 0xB6A5L, 0x4550L, 0xB6A5L, 0x4550L};
                        int i, j, k;
                        p_23 = 0x635B549AL;
                        p_23 = func_45(g_737[(g_1002 + 3)][(g_1002 + 1)][g_1002], (0L > g_178[l_1215][l_1215][l_1215]), g_986, g_559, (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((+(((((p_23 && p_22) , ((safe_sub_func_uint16_t_u_u(l_1222, g_1187)) , l_1211)) & l_1215) ^ l_1212) & 0x133B35CBL)), 0x51L)) == 0x431E3D6DL), l_1223[1])));
                    }
                    for (l_1210 = 0; (l_1210 <= 0); l_1210 += 1)
                    {
                        p_23 = g_1032;
                    }
                    l_1224[1] = func_27(l_1215);
                }
                p_23 = ((func_45((g_1085 | ((safe_rshift_func_int8_t_s_u(l_1200, (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_1008, 3)), p_23)))) > g_321[1][9])), p_23, g_317, l_1200, (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_57(g_1156, p_21, l_1215, g_986, p_22), p_22)), 0xA7C4L)), g_374[8]))) , g_899) & 0x6DF4L);
            }
            else
            {
                char l_1252 = (-1L);
                l_1215 = l_1210;
                l_1249[1] = ((!g_1032) < (p_21 <= func_35((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_559, (l_1212 ^ ((p_21 , (safe_lshift_func_int16_t_s_u((-1L), 7))) ^ (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_1249[0], (safe_mod_func_int16_t_s_s((0xDEL ^ (-1L)), l_1252)))), p_22)))))), g_1021)), 6UL)), p_22, p_22, g_201, g_201)));
            }
            for (g_1135 = 0; (g_1135 <= 2); g_1135 += 1)
            {
                unsigned char l_1275[6] = {255UL, 255UL, 248UL, 255UL, 255UL, 248UL};
                char l_1293 = 0xB7L;
                int l_1307 = 1L;
                int i;
                l_1215 = (~(safe_add_func_int8_t_s_s(g_178[1][4][3], g_1135)));
                if (((g_960 > (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(l_1128[1][0][0], (safe_add_func_uint16_t_u_u((((l_1166[3][0][2] >= ((+func_45(((g_986 >= ((((+(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u(((((-1L) | 0xA91FL) , l_1266) == (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u(l_1210, 9)) || l_1166[0][2][0]) > 0xD101L) ^ 1L), p_22)) && g_1020) == 7L), p_21))), g_1156)))), 0x6981L)) , l_1249[1]) > g_264)) | l_905[0]) >= g_264) != p_23)) , g_99), l_972, g_321[1][5], g_1131, l_1273[0][0])) >= 0xB1BBACC8L)) < 0x0CADL) >= l_1274), g_1187)))) | g_1032), p_23))) , p_23))
                {
                    return l_1275[2];
                }
                else
                {
                    int l_1288 = 0x330C2289L;
                    g_396 = 0xAF4D6101L;
                    if ((safe_rshift_func_uint8_t_u_u(((l_1200 , (safe_mod_func_int32_t_s_s(p_22, (safe_add_func_int8_t_s_s(((!p_23) ^ (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0x80L, (safe_mod_func_int32_t_s_s(l_1288, (g_178[1][4][3] & (((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_178[2][2][4], l_1266)), p_23)) == l_1293) | g_235) < l_1166[2][1][2]) >= 0x8A98L)))))), 3UL))), p_23))))) | 0x95L), 4)))
                    {
                        unsigned char l_1300 = 0x41L;
                        p_23 = (safe_sub_func_uint16_t_u_u(((l_1249[1] ^ (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0UL, ((g_960 & ((+(g_1070 & l_1300)) > (((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(0x581EA2BBL, ((func_27(p_23) <= ((safe_add_func_int16_t_s_s(((func_35(((g_1135 <= l_1307) != 0UL), p_23, l_1307, g_264, l_1300) , g_1187) , 0x09A0L), 0x013FL)) != g_321[1][5])) | 6L))) , g_201) >= l_1307), p_23)) == g_51) > g_1020))) , (-3L)))), l_1300))) > l_1273[0][0]), g_201));
                    }
                    else
                    {
                        g_396 = (safe_sub_func_int16_t_s_s(func_27((safe_mod_func_int16_t_s_s(0x1169L, (safe_sub_func_uint16_t_u_u((func_27(((l_1288 | 0x10DB8426L) != p_22)) , (safe_unary_minus_func_int16_t_s(func_41(g_201, (l_1273[0][1] == 0x358EL), g_264)))), g_321[0][9]))))), l_1293));
                        g_396 = g_737[7][6][0];
                    }
                    return l_1249[0];
                }
            }
        }
        if (g_1008)
        {
            unsigned char l_1317 = 9UL;
            unsigned char l_1372 = 0x15L;
            if ((safe_mod_func_int16_t_s_s(func_29(l_1128[2][0][8], g_1167, (((l_1249[1] && (((~l_1317) , (safe_mod_func_uint8_t_u_u((p_22 & (func_57(p_23, p_23, ((((((safe_lshift_func_int16_t_s_s((g_74 ^ l_1128[1][0][0]), g_65[0])) == l_1317) >= p_23) == 0x42L) != g_321[0][3]) , p_23), p_21, p_22) , l_1200)), p_21))) > p_23)) , p_23) <= p_22), p_21, p_23), g_899)))
            {
                int l_1324 = 0x6C635070L;
                int l_1359 = 0x8610F39DL;
                unsigned short l_1385 = 0x20D9L;
                if ((g_737[7][6][0] == (((safe_lshift_func_uint8_t_u_s((p_23 ^ g_1167), 4)) >= (4UL > (l_1324 && (-6L)))) , p_23)))
                {
                    short l_1341 = 0x42BBL;
                    p_23 = (safe_sub_func_uint16_t_u_u((p_21 , (safe_mod_func_int32_t_s_s(((l_905[0] >= l_1266) | ((safe_mod_func_int32_t_s_s(l_972, g_1131)) , 0x648A48B1L)), l_1324))), ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((0x25L <= (((((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_22, g_978)), g_1085)) & g_1135) > 0x31L) < l_1317) < l_1341)) & 1UL), 2)), l_1324)), (-1L))) , 0x1E3EL)));
                }
                else
                {
                    unsigned l_1347 = 9UL;
                    g_396 = (safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_int32_t_s((((l_1128[1][0][0] > p_22) != (safe_sub_func_int32_t_s_s(p_22, ((l_1324 > (((g_321[1][5] > (func_27(g_201) && l_1324)) , p_23) , p_23)) <= 0x9BL)))) != 0xE6L))) | 0x1AL) ^ l_1347), 4));
                }
                for (l_1266 = 0; (l_1266 <= 4); l_1266 += 1)
                {
                    unsigned short l_1386 = 0x1A14L;
                    int l_1418[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1418[i] = (-5L);
                    l_1359 = ((safe_lshift_func_int16_t_s_u(((g_65[l_1266] <= (safe_sub_func_uint8_t_u_u(g_65[l_1266], ((l_1324 > ((+0xB0F33A0BL) <= (g_899 | ((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_65[l_1266], (g_396 == (p_21 ^ l_1324)))), g_978)) != l_1166[4][3][0]) , l_1358), p_23)) >= 0x99L)))) | p_21)))) , p_23), g_1135)) ^ p_23);
                    if (g_1070)
                    {
                        g_396 = 1L;
                    }
                    else
                    {
                        unsigned char l_1373 = 0xDFL;
                        p_23 = ((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_65[l_1266] < (safe_lshift_func_int8_t_s_u(func_57((safe_mod_func_int8_t_s_s(((func_29(((p_23 && (safe_rshift_func_uint16_t_u_u((((((safe_mod_func_uint32_t_u_u(p_21, (l_1372 && ((l_1373 | (safe_mod_func_int32_t_s_s(g_1145, (safe_unary_minus_func_uint32_t_u(func_57(((((func_45(l_1377[0][0][0], (((safe_sub_func_uint32_t_u_u(((func_27((((safe_mod_func_uint32_t_u_u((p_22 , (safe_mod_func_uint8_t_u_u(((g_51 <= l_1384) , g_960), p_21))), g_374[0])) , p_22) | p_21)) && g_1008) , 1UL), p_22)) || g_178[2][0][4]) > 0x20CDL), l_1324, p_22, g_1008) , l_1373) >= l_1359) & l_1249[0]) , 1UL), l_1324, l_1358, p_22, l_972)))))) , (-6L))))) , 0xB9A9L) , l_1200) != p_23) ^ g_737[4][2][2]), 15))) , p_22), p_21, g_1167, p_21, g_1008) && g_737[8][0][2]) | l_1385), p_22)), p_21, l_905[0], l_1372, g_1021), p_22))), 248UL)), g_1070)) <= 0xC5L);
                    }
                    if (l_1386)
                        continue;
                    if (((p_21 | p_22) & (p_21 | 0x27L)))
                    {
                        int l_1409 = (-1L);
                        g_1394 = (safe_add_func_uint8_t_u_u(((p_23 ^ (safe_rshift_func_uint8_t_u_u(0UL, func_45(l_1386, (0xC0L <= ((g_960 <= (safe_unary_minus_func_int16_t_s((((((safe_mod_func_uint8_t_u_u(0x1AL, func_29(g_65[l_1266], g_1002, ((func_45(l_1324, p_21, l_1372, g_1135, l_1359) && 254UL) > 0UL), p_23, g_1032))) > p_22) & 3L) ^ 0x8634F329L) && g_1155)))) != p_21)), g_1085, g_1167, l_1317)))) >= 4294967292UL), 0xD7L));
                        p_23 = (0x10L | (safe_add_func_uint32_t_u_u(((func_57(((g_178[2][4][4] | (safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((-1L), p_23)) <= (((((safe_lshift_func_int8_t_s_s(l_1358, (p_21 & (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_22, 4)), g_1407))))) < (func_41(p_21, g_1070, l_1408) <= 0xFAL)) , g_178[1][4][3]) && g_374[4]) < g_178[5][1][1])), g_1131))) ^ l_906), l_1359, p_21, l_1377[0][1][8], p_22) && l_1409) | g_374[8]), (-1L))));
                        l_906 = g_899;
                    }
                    else
                    {
                        p_23 = (g_985 , g_1136);
                        l_1249[0] = (((safe_add_func_uint8_t_u_u(g_317, g_65[l_1266])) <= p_23) <= (safe_add_func_uint8_t_u_u((l_1377[0][0][0] != ((l_905[0] < l_1317) == g_1156)), ((safe_mod_func_int8_t_s_s((((g_141 ^ (safe_mod_func_uint16_t_u_u(g_985, 0xD926L))) || g_1407) && p_22), p_23)) , l_1418[0]))));
                    }
                }
            }
            else
            {
                char l_1429 = 4L;
                int l_1452 = 1L;
                l_1166[2][1][2] = (((2L != (safe_lshift_func_uint16_t_u_s(func_45((safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(p_21, l_1166[3][0][0])) | (~(g_355 , func_45((safe_sub_func_int16_t_s_s(p_22, p_23)), (g_1156 , ((safe_mod_func_int32_t_s_s(func_35(l_1429, (safe_sub_func_uint16_t_u_u(g_1394, g_374[6])), p_23, g_1407, p_21), g_1145)) > g_178[5][3][0])), p_22, l_1212, p_23)))) & (-6L)), p_21)), p_23, l_1377[0][1][6], l_1429, p_21), 0))) != 0x8CL) | g_1135);
                l_1452 = (((safe_rshift_func_int8_t_s_s(((((g_1020 ^ (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((p_23 & (-3L)), (((~((!(safe_add_func_uint16_t_u_u((func_27(func_57(((g_899 && ((safe_unary_minus_func_uint32_t_u(((safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((func_45(((l_1445 || l_1377[0][1][5]) == ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(p_22, p_21)), ((0L != g_51) & 0x5D41L))), 7)) & 0x8C98L)), l_1372, g_978, g_986, g_1131) <= 0x7885L), p_23)) | l_1429), l_1200)) , g_575))) == p_23)) < p_21), l_1429, g_978, p_22, g_1002)) || 0x0E794C35L), p_21))) ^ p_23)) < l_1372) ^ g_1394))), p_23))) & l_1166[2][1][2]) , 0x1BL) == l_1317), 7)) >= l_1429) <= l_1249[0]);
                if (g_74)
                    break;
            }
            for (l_1384 = 3; (l_1384 > 28); l_1384 = safe_add_func_uint8_t_u_u(l_1384, 2))
            {
                if (l_1249[0])
                    break;
            }
        }
        else
        {
            int l_1472 = 0xA14D7F4AL;
            unsigned short l_1486 = 0x42F7L;
            short l_1487 = 7L;
            char l_1577 = 0xA7L;
            for (l_942 = (-1); (l_942 <= 39); ++l_942)
            {
                int l_1457 = 0x43FF1AC2L;
                int l_1488[8][2][10] = {{{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}, {{0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}, {0x5B95412DL, 5L, 0x11E46662L, 0x8BC893FDL, 0L, (-5L), 0x967DC23AL, (-6L), 0x312E63AAL, 0xFC1CCB03L}}};
                int i, j, k;
                if (((g_321[1][5] , (p_23 <= (~0x93L))) , ((l_1457 != (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_23, 13)), 5))) <= (((safe_sub_func_int8_t_s_s(l_905[0], ((((safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((func_35(((0x704FL | ((safe_rshift_func_int8_t_s_s(((l_1472 , ((g_1070 > 0x1AEECD26L) > g_140)) || 0xDC39L), l_905[0])) == l_1472)) < l_1377[0][0][0]), l_1266, g_978, p_22, p_21) , 255UL) == 0x59L), 6)), 1UL)) || g_1021), p_23)) >= g_65[0]) == 0x09589026L) | l_1473))) != 8L) ^ p_23))))
                {
                    int l_1476 = 0xF6B107B0L;
                    unsigned char l_1477[1][2][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1477[i][j][k] = 8UL;
                        }
                    }
                    p_23 = (p_23 , (((safe_rshift_func_int16_t_s_s(g_396, 14)) < (-6L)) >= g_1070));
                    g_396 = p_21;
                    l_1488[3][0][4] = ((l_1476 | (l_1477[0][0][0] | (((safe_rshift_func_uint16_t_u_u(65535UL, (safe_lshift_func_uint16_t_u_u(g_321[1][5], 3)))) > p_23) && (safe_lshift_func_uint16_t_u_u(65535UL, 8))))) != ((func_35(p_22, (safe_rshift_func_uint16_t_u_u(65535UL, (g_374[6] | 4UL))), l_1486, l_1487, l_1477[0][0][0]) ^ 0x19L) != l_1445));
                }
                else
                {
                    short l_1501 = 0x1083L;
                    int l_1509 = (-1L);
                    unsigned l_1524 = 18446744073709551615UL;
                    for (g_1032 = 0; (g_1032 < 23); g_1032 = safe_add_func_int32_t_s_s(g_1032, 3))
                    {
                        return g_1002;
                    }
                    if ((func_27(g_737[7][6][0]) != g_51))
                    {
                        int l_1496 = 0L;
                        l_1166[2][1][2] = ((safe_unary_minus_func_uint8_t_u(0xCCL)) != (safe_sub_func_uint32_t_u_u((g_355 == (safe_mod_func_int32_t_s_s(l_1496, (safe_add_func_int16_t_s_s(0xB185L, ((safe_mod_func_uint32_t_u_u(g_978, (g_575 ^ g_65[4]))) , func_57((((l_1166[2][1][2] == ((l_942 && l_1488[3][0][4]) || 0xDC03L)) != l_1501) | p_23), p_21, g_978, g_1085, p_23))))))), p_22)));
                        l_1212 = func_41(g_986, (((((l_1496 ^ 0L) < (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(func_41(l_1472, ((p_21 >= 0UL) > (g_65[1] | (+(0x05L < 0xADL)))), g_978))), p_21))) != 0x7995CEB8L) >= 0xD55437F6L) < (-4L)), p_21);
                    }
                    else
                    {
                        short l_1507 = 0L;
                        l_1509 = (safe_lshift_func_int8_t_s_u((l_1507 ^ (safe_unary_minus_func_uint16_t_u(g_140))), g_737[5][1][0]));
                        p_23 = ((((safe_add_func_int16_t_s_s(0x5234L, (((safe_mod_func_int32_t_s_s(0L, 7L)) < 0UL) | (((g_1032 , (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((4294967293UL <= (!(safe_lshift_func_uint16_t_u_u(g_559, 11)))), ((l_1166[2][1][2] != (safe_add_func_uint32_t_u_u((((-8L) && g_74) , 4294967293UL), l_1524))) , l_1507))) , p_23), g_1085)), p_21))) <= 0x3133B648L) != g_1145)))) == p_21) , 0x73F2953DL) ^ l_1445);
                        p_23 = (p_22 && l_905[0]);
                        l_1166[2][1][2] = g_1021;
                    }
                }
            }
            if ((safe_mod_func_int16_t_s_s(l_1166[2][1][2], func_27(l_1487))))
            {
                unsigned l_1527 = 4294967288UL;
                int l_1566 = 0xE5003F93L;
                p_23 = (p_21 || (func_35(p_23, g_986, l_942, g_140, l_1527) < ((p_23 , ((p_21 != g_51) == p_23)) == 1UL)));
                l_1166[2][1][2] = func_41((safe_lshift_func_int8_t_s_u((func_41((+l_1445), p_22, p_23) , ((p_22 < (safe_sub_func_uint16_t_u_u((((g_1070 | func_27(g_235)) || g_1032) & g_1394), g_321[0][1]))) , g_396)), 1)), l_1472, l_1384);
                for (g_201 = 26; (g_201 >= 30); ++g_201)
                {
                    unsigned char l_1536 = 0xE7L;
                    for (g_140 = 0; (g_140 <= 0); g_140 += 1)
                    {
                        p_23 = (~(p_23 > (safe_lshift_func_int8_t_s_s(l_905[0], 4))));
                        g_396 = (l_1536 >= (((p_22 , 0xD8562380L) && (l_1487 <= ((((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_1536 == (((safe_lshift_func_uint16_t_u_u(p_22, 5)) , (l_942 , (p_23 & (safe_sub_func_uint32_t_u_u(l_906, g_986))))) || p_23)) && 0xB0L), l_1536)), l_1536)) < 1UL) && 248UL) && p_22))) < l_1266));
                    }
                    for (l_1200 = 2; (l_1200 >= 0); l_1200 -= 1)
                    {
                        int i, j, k;
                        l_1166[(l_1200 + 2)][(l_1200 + 1)][l_1200] = g_737[(l_1200 + 2)][(l_1200 + 2)][l_1200];
                        p_23 = ((((g_737[(l_1200 + 6)][(l_1200 + 1)][l_1200] , ((g_737[(l_1200 + 6)][(l_1200 + 2)][l_1200] , (g_737[(l_1200 + 4)][(l_1200 + 2)][l_1200] || (safe_add_func_uint8_t_u_u(func_27(p_23), ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_21, (g_74 & (((p_23 == (((l_1249[3] != 4294967295UL) | p_23) ^ p_22)) ^ g_65[0]) | 0x0F3BL)))), 4)) || g_1167))))) , 0xB2L)) >= p_22) , g_264) && 0L);
                        g_396 = l_1166[(l_1200 + 2)][(l_1200 + 1)][l_1200];
                    }
                }
                for (p_22 = 0; (p_22 <= 0); p_22 += 1)
                {
                    unsigned char l_1559 = 0UL;
                    for (l_972 = 0; (l_972 <= 4); l_972 += 1)
                    {
                        int i, j;
                        g_396 = ((safe_lshift_func_int8_t_s_s(l_1249[(p_22 + 2)], 5)) ^ l_1273[p_22][(p_22 + 6)]);
                        p_23 = ((((safe_lshift_func_uint8_t_u_u(func_57(g_1394, l_1527, (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(2UL, 1)), ((p_22 | ((+(5UL && ((g_1135 , l_1559) && ((((safe_rshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(1L, p_23)) , p_22), 0x9A34L)) , 1UL) , p_21), 3)) || 0xCBL) <= 1L) < l_1559)))) , l_1559)) >= 255UL))), l_1527, g_141), g_1156)) && 1L) , l_1273[p_22][(p_22 + 6)]) > 0xE3006188L);
                        l_1566 = ((+(g_1136 && l_1166[2][1][2])) ^ l_1487);
                        if (g_1145)
                            break;
                    }
                    p_23 = (p_21 < p_22);
                    return p_21;
                }
            }
            else
            {
                unsigned char l_1571 = 0x8DL;
                unsigned short l_1574 = 0x51E7L;
                p_23 = (+(safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(g_960, 12)) >= l_1571) , (p_21 && 0x05L)), (safe_lshift_func_uint8_t_u_s((l_1266 ^ 0xBCED5A7EL), 1)))));
                l_1574 = (g_1085 >= 0UL);
                g_1578 = (safe_lshift_func_int8_t_s_s(l_1577, 6));
            }
            for (g_317 = 0; (g_317 >= (-17)); g_317--)
            {
                unsigned l_1581 = 18446744073709551615UL;
                int l_1584 = (-1L);
                g_396 = (((0x3168886CL > g_1156) && l_1581) | 0x0E70BAA7L);
                for (g_51 = 25; (g_51 <= 17); --g_51)
                {
                    if (p_23)
                        break;
                }
                l_1584 = 8L;
            }
            for (g_355 = 0; (g_355 <= 4); g_355 += 1)
            {
                int i;
                g_396 = (l_1249[g_355] <= l_1358);
                for (l_1358 = 0; (l_1358 <= 2); l_1358 += 1)
                {
                    int i, j, k;
                    l_1249[2] = (func_27(l_1166[(g_355 + 1)][(l_1358 + 1)][l_1358]) < l_1472);
                    if (g_1032)
                        break;
                    if (l_1249[g_355])
                    {
                        char l_1590 = 4L;
                        l_1590 = (safe_mod_func_int32_t_s_s(((-7L) <= (((safe_mod_func_int8_t_s_s(func_57(g_178[2][0][0], l_1166[(g_355 + 1)][(l_1358 + 1)][l_1358], l_1249[g_355], l_1487, l_1589), p_21)) ^ 0xCF9935EBL) , 65527UL)), 0x134064D6L));
                        return g_178[1][4][3];
                    }
                    else
                    {
                        return g_178[1][4][3];
                    }
                }
                if (p_23)
                    continue;
            }
        }
        for (g_1156 = 0; (g_1156 != 36); ++g_1156)
        {
            int l_1608 = 6L;
            p_23 = g_1407;
            for (p_22 = 0; (p_22 == 42); ++p_22)
            {
                unsigned l_1603 = 5UL;
                l_1166[5][1][1] = (l_1266 , ((((((func_29((!g_960), func_27(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(g_1155, 13)) , (safe_mod_func_uint8_t_u_u((248UL || ((safe_sub_func_int32_t_s_s(((1UL ^ p_22) || (0x7E5DL < 0xF948L)), p_21)) ^ 1UL)), 248UL))), l_1212)) , l_1166[4][2][2])), g_264, g_1032, p_21) || l_1603) & 0x42L) , 4UL) ^ p_23) > l_1166[2][1][2]) >= g_899));
                if (p_23)
                    break;
                return p_22;
            }
            if (p_23)
            {
                char l_1616 = (-1L);
                for (g_1020 = 0; (g_1020 <= 0); g_1020 += 1)
                {
                    unsigned l_1613 = 18446744073709551615UL;
                    if (((safe_sub_func_uint32_t_u_u(l_1273[0][0], ((((safe_rshift_func_int16_t_s_s((l_1608 & l_905[0]), (((((safe_rshift_func_uint16_t_u_u(p_22, (g_1136 , p_23))) > (p_22 > (safe_rshift_func_uint16_t_u_u(func_35(l_1613, (((((safe_sub_func_uint8_t_u_u(l_1616, p_22)) && 0x58L) < p_22) , g_321[0][8]) && l_1617), l_1608, g_1407, l_1608), 1)))) >= p_23) & g_1032) || 0xBCL))) & 0xE8L) || 4294967292UL) > 1UL))) , g_559))
                    {
                        g_396 = (func_57(g_374[8], p_22, (l_1589 > (safe_mod_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(p_23, func_57(((g_1020 , (!g_1167)) , g_264), (((l_1613 ^ (safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_1616 , l_1212), g_99)), p_22)), (-4L)))))) & g_321[1][5]) != l_1608), g_737[0][1][0], l_1629, g_1085))) < p_22) , 8UL) , l_1630), 0xA1L))), p_23, p_23) | 0UL);
                        l_1608 = 1L;
                    }
                    else
                    {
                        unsigned l_1631 = 0xDE72A154L;
                        if (p_23)
                            break;
                        if (l_1631)
                            continue;
                        l_1608 = g_1135;
                        l_1608 = func_27((func_45(l_1631, (safe_sub_func_uint16_t_u_u(func_41(p_21, l_1617, p_22), func_27((((func_57(l_1613, g_1578, g_1135, (65530UL != l_1616), l_1608) , 3UL) , l_1631) && 0x9C95F87AL)))), g_317, p_22, l_942) , 3L));
                    }
                    l_1634 = (((~0x3918D9F1L) <= l_1616) < g_264);
                    if (p_23)
                        continue;
                }
            }
            else
            {
                unsigned char l_1651 = 0x7FL;
                if ((safe_sub_func_uint16_t_u_u(l_1166[2][1][2], g_1394)))
                {
                    unsigned l_1650[9][10];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_1650[i][j] = 4294967295UL;
                    }
                    g_396 = func_27((+(safe_rshift_func_int16_t_s_s((-1L), 7))));
                    for (l_942 = (-11); (l_942 == 42); l_942++)
                    {
                        unsigned char l_1641[5] = {0xA7L, 0x0FL, 0xA7L, 0x0FL, 0xA7L};
                        int i;
                        p_23 = (((p_23 >= (p_22 , ((func_29(l_1641[0], (((safe_rshift_func_int8_t_s_u((0x5CL == 0x23L), (g_1187 > ((((((safe_lshift_func_uint16_t_u_s(((!((((safe_mod_func_uint16_t_u_u((func_45((safe_sub_func_int32_t_s_s(0x2C78A0D0L, 1UL)), (((l_1641[0] < p_23) , 0x2DA1L) | p_22), p_23, p_23, p_22) , l_1608), l_1650[1][4])) , (-6L)) <= l_1651) <= p_21)) != l_1651), l_1641[3])) , l_1608) >= 9UL) ^ g_559) , p_22) < l_1608)))) != 0xC9D1L) , l_1128[0][0][2]), g_1032, l_1629, p_21) | g_1131) || g_321[1][5]))) == l_1608) ^ l_1650[2][5]);
                        g_1656 = (p_22 || (safe_add_func_uint16_t_u_u(65535UL, ((safe_add_func_int8_t_s_s(0L, 246UL)) >= l_905[0]))));
                    }
                }
                else
                {
                    unsigned l_1661 = 0x6F23C771L;
                    int l_1670 = 0x8CB231C1L;
                    for (l_1358 = 3; (l_1358 >= 0); l_1358 -= 1)
                    {
                        return g_1008;
                    }
                    p_23 = ((safe_mod_func_uint8_t_u_u(g_201, (safe_add_func_uint32_t_u_u((((-2L) < (p_23 , 0UL)) != (l_1651 , g_396)), (g_178[5][0][3] == (l_1661 , ((((g_178[1][4][4] > p_22) >= g_737[7][6][0]) ^ 0x1208L) & p_22))))))) | 0x4FL);
                    l_1670 = (((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(p_23, 5)) == (func_29(g_321[0][0], ((0x95L & ((((l_1651 , ((1L <= g_99) & (l_1608 , 0xCF90L))) <= (((safe_lshift_func_uint16_t_u_u(l_1651, g_355)) , 0x0174D3E2L) == p_21)) > 0L) || g_1085)) , 0x2CL), g_1131, p_23, g_1020) | (-1L))) , p_22), l_1634)) & 3UL) < g_1135) ^ g_960) >= l_1651), 4)) | g_1008) , l_906);
                    g_396 = (p_22 | l_1128[1][0][0]);
                }
                for (l_1617 = 27; (l_1617 <= 15); l_1617--)
                {
                    short l_1677 = 0L;
                    unsigned short l_1683 = 65529UL;
                    if ((safe_rshift_func_uint16_t_u_s(p_23, (safe_sub_func_int32_t_s_s(1L, g_374[8])))))
                    {
                        unsigned short l_1682 = 4UL;
                        int l_1692 = 0xF492DDF6L;
                        g_396 = func_57(l_1677, (((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_1394, g_559)) && ((l_1677 && func_41((((6UL <= (l_1682 | 0xC0L)) ^ l_1473) ^ (g_899 && g_65[0])), l_1212, g_201)) , l_1683)), l_1684)) , g_99) > 0x7DL), p_23, g_374[4], g_960);
                        l_1608 = (g_1145 | ((l_1682 | (func_57(func_29(((!g_201) < (func_41(l_1682, (((((((~(safe_add_func_int8_t_s_s((func_57(l_1683, (safe_lshift_func_uint16_t_u_u(func_27(l_1689), p_23)), l_1608, g_140, l_1682) , 0L), g_396))) & 65535UL) == l_905[0]) <= p_23) | p_22) < 0xD505FCBEL) > g_317), p_21) ^ p_23)), g_74, g_1407, l_1629, l_1630), p_21, p_22, p_22, l_1651) , 0x1644L)) ^ p_22));
                        l_1692 = (safe_rshift_func_int16_t_s_s(g_178[5][1][5], 13));
                    }
                    else
                    {
                        p_23 = p_23;
                    }
                }
            }
            p_23 = l_1200;
        }
        l_1249[0] = (-3L);
    }
    return g_321[1][5];
}







static unsigned func_27(int p_28)
{
    int l_904 = 7L;
    return l_904;
}







static int func_29(unsigned p_30, char p_31, short p_32, char p_33, unsigned p_34)
{
    unsigned l_694 = 18446744073709551607UL;
    char l_703[7];
    int l_704[8];
    unsigned short l_719 = 65535UL;
    int l_769 = 1L;
    int l_813 = 0L;
    short l_855[4];
    unsigned short l_856 = 8UL;
    unsigned l_903 = 0x31D05970L;
    int i;
    for (i = 0; i < 7; i++)
        l_703[i] = (-6L);
    for (i = 0; i < 8; i++)
        l_704[i] = 0xDED0BDEEL;
    for (i = 0; i < 4; i++)
        l_855[i] = 0L;
    l_704[0] = (p_31 | (safe_add_func_int32_t_s_s(p_34, func_45((4294967286UL >= ((l_694 , (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_355, 2)), p_33)) != l_694), (g_140 > (0xA98D74EBL != p_31)))) != p_34), l_703[1]))) ^ p_32)), p_30, g_51, l_703[1], l_703[1]))));
    l_704[0] = (l_703[1] <= func_35(((-1L) == (!g_65[4])), l_694, l_703[1], g_321[0][1], (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0UL, ((safe_add_func_int8_t_s_s((-1L), (l_703[1] && (-1L)))) | g_141))), l_694))));
    if (g_321[0][7])
    {
        int l_711 = 0x4EA58A97L;
        g_396 = (l_711 | l_711);
    }
    else
    {
        unsigned l_738 = 0x46C2FFE9L;
        int l_812 = 1L;
        unsigned char l_848 = 0xB8L;
        char l_872 = (-3L);
        l_704[0] = l_703[1];
        for (g_201 = 0; (g_201 == 1); g_201 = safe_add_func_int16_t_s_s(g_201, 6))
        {
            unsigned char l_720 = 0xDBL;
            char l_735 = 0x99L;
            if (g_140)
            {
                unsigned l_714 = 0x1A1D6763L;
                int l_765[7][7] = {{1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}, {1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}, {1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}, {1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}, {1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}, {1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}, {1L, 7L, 0x591DAFA0L, (-1L), 7L, 0xAAFC3B5BL, 7L}};
                int i, j;
                g_396 = g_264;
                l_720 = func_35(g_178[2][2][2], (g_321[1][5] | ((p_33 && (g_396 > ((g_355 >= ((l_714 & (p_31 ^ (safe_lshift_func_int8_t_s_s(((+(((safe_sub_func_uint8_t_u_u(p_34, 0xE3L)) >= 0x9439L) == p_34)) != p_33), p_33)))) , 0x49EEL)) <= l_719))) != g_374[8])), g_235, g_355, g_178[2][4][5]);
                if (g_99)
                    break;
                if (p_34)
                {
                    char l_732 = (-6L);
                    int l_758 = 0xBEC30432L;
                    for (g_396 = 3; (g_396 < (-29)); g_396 = safe_sub_func_int16_t_s_s(g_396, 5))
                    {
                        int l_723 = 1L;
                        unsigned l_736 = 0x8D3B5897L;
                        g_737[7][6][0] = ((l_723 ^ (safe_mod_func_uint16_t_u_u(l_723, (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((!((((safe_add_func_uint8_t_u_u(func_57((g_65[4] >= ((func_41(((p_34 > ((p_34 & ((g_321[1][5] != ((l_732 != (safe_mod_func_uint16_t_u_u(func_41(l_735, p_31, g_559), g_374[8]))) , p_34)) , 0xC5DCL)) <= g_65[2])) , l_736), p_30, g_264) , 0UL) | 9UL)), l_720, g_178[1][4][3], g_140, p_32), g_264)) < g_51) != g_65[0]) == 0x51L)) < (-2L)), g_355)) || 0x7FFDL) || p_32), g_355))))) > 0x6463L);
                        l_738 = ((0x6358D426L >= 0xE5980211L) || p_33);
                    }
                    g_396 = (((safe_mod_func_int16_t_s_s(g_140, g_317)) <= ((safe_sub_func_int32_t_s_s(p_31, p_33)) > ((g_65[4] || 4294967295UL) & l_714))) ^ ((safe_rshift_func_uint16_t_u_s(0UL, 12)) && g_321[1][5]));
                    for (l_732 = 25; (l_732 == (-12)); l_732 = safe_sub_func_int16_t_s_s(l_732, 3))
                    {
                        unsigned l_757 = 18446744073709551615UL;
                        short l_763 = 0xE634L;
                        unsigned l_764 = 0x3204C93CL;
                        l_758 = (((safe_mod_func_int32_t_s_s(((((safe_mod_func_uint16_t_u_u(65530UL, g_99)) , (((l_735 , (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_735 , ((p_34 != (+(g_575 | 65534UL))) >= g_559)) == g_74) | 1UL), 7UL)), l_757))) ^ l_738) > p_31)) && 0UL) , 0xE14352E1L), p_34)) < g_737[7][6][0]) >= p_31);
                        g_396 = (((g_374[8] >= 65533UL) , 0xF9L) && (0x835BL | (-10L)));
                        l_765[0][5] = (safe_lshift_func_int8_t_s_u(func_41(l_714, func_35((((6UL && func_35(((0UL || func_35(((safe_add_func_int16_t_s_s((func_57(g_264, g_65[0], g_201, p_32, l_714) <= 4UL), g_178[3][3][3])) > l_763), p_33, p_33, l_764, l_720)) > 65535UL), g_65[3], l_763, l_732, l_763)) <= g_321[0][7]) , l_735), p_31, g_178[1][4][3], l_703[1], l_738), p_30), 5));
                        if (p_30)
                            break;
                    }
                }
                else
                {
                    for (p_32 = 0; (p_32 != 16); p_32 = safe_add_func_uint32_t_u_u(p_32, 1))
                    {
                        return g_559;
                    }
                    return l_714;
                }
            }
            else
            {
                int l_768 = 1L;
                int l_772 = 4L;
                char l_791 = 0x27L;
                l_772 = (l_768 , (l_769 == (safe_add_func_uint16_t_u_u(l_735, (-6L)))));
                for (g_74 = 16; (g_74 >= (-16)); g_74 = safe_sub_func_int16_t_s_s(g_74, 6))
                {
                    int l_789 = 0x2BDA7F94L;
                    short l_790 = 0xD62AL;
                    if (((((func_41(((safe_lshift_func_uint8_t_u_s((((((l_704[2] ^ g_201) , ((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_575, g_141)), (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(0x90DBF127L, func_57(p_33, p_33, (func_35(g_355, g_99, l_703[0], p_31, l_768) <= p_34), p_31, g_235))), l_789)))), p_32)), g_235)) >= g_374[8])) && 0x4E9FL) & l_738) != 65526UL), p_32)) > l_790), l_738, l_790) & p_32) , 9UL) , l_768) & l_735))
                    {
                        l_772 = g_575;
                        l_704[0] = g_235;
                        l_791 = (p_34 , g_396);
                    }
                    else
                    {
                        short l_809 = 0x4221L;
                        l_704[7] = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((func_41(g_321[1][4], g_235, g_374[8]) >= p_30), 9)), (safe_sub_func_int8_t_s_s(func_57(func_57(g_575, (func_35((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(8L)), (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_791 <= l_703[1]), 0xB356L)), 0x1CL)))), l_738)) != 1UL) && g_575), p_32, p_31, l_772, l_704[6]) , l_768), l_790, p_30, p_34), g_374[4], l_738, g_737[7][3][0], l_768), p_30))));
                        g_396 = (safe_add_func_uint32_t_u_u(l_789, (g_559 , ((l_809 || (l_738 != l_738)) >= l_738))));
                        l_789 = 0xD6346660L;
                    }
                    for (g_575 = (-13); (g_575 == 22); g_575++)
                    {
                        l_812 = 0xED65FDE9L;
                        g_396 = g_140;
                    }
                    l_813 = 0x45601273L;
                }
                g_396 = g_321[0][7];
            }
        }
        for (g_559 = (-10); (g_559 == 37); g_559 = safe_add_func_uint16_t_u_u(g_559, 2))
        {
            short l_816 = 0L;
            if (((0L >= 0x5700L) & l_816))
            {
                int l_827 = 0xDF79C097L;
                unsigned char l_828 = 0x22L;
                l_828 = (safe_rshift_func_int8_t_s_s(g_264, (((p_33 , (safe_rshift_func_uint16_t_u_u(0xEB1CL, 8))) , g_178[3][4][5]) == (((l_816 != func_41((safe_sub_func_int8_t_s_s((p_33 <= (g_374[4] > (((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0L, (l_827 >= g_374[8]))), 1)) & 0UL) == l_827))), 0x6CL)), p_33, p_33)) , p_30) >= p_32))));
            }
            else
            {
                unsigned short l_829 = 2UL;
                int l_901[10] = {0L, 0L, (-4L), 0L, 0L, (-4L), 0L, 0L, (-4L), 0L};
                int l_902 = (-1L);
                int i;
                l_812 = func_57(l_829, (0x4BL >= ((safe_lshift_func_uint8_t_u_u(1UL, (func_57((safe_sub_func_int16_t_s_s(l_829, g_99)), func_35(l_812, (p_34 , 249UL), (p_31 && p_34), g_355, l_816), l_816, p_34, p_33) < 7UL))) ^ l_812)), l_816, g_178[3][1][5], l_738);
                if (p_33)
                    continue;
                if (((safe_sub_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((+(((safe_sub_func_int16_t_s_s((l_848 == (l_829 <= g_575)), p_34)) >= ((safe_mod_func_int32_t_s_s(p_33, (((((func_57((safe_lshift_func_uint16_t_u_u((((func_57(p_32, g_140, g_737[7][6][0], (~(safe_mod_func_int32_t_s_s((g_201 , l_855[1]), 4294967295UL))), p_32) != g_317) & 0x8D2B48FEL) == p_34), p_31)), l_813, l_812, l_829, g_178[1][4][3]) != g_178[1][4][3]) ^ 0x0EEAL) >= 65535UL) || g_178[1][4][3]) & g_321[1][5]))) || p_32)) , p_30)) & g_374[8]) ^ g_99), g_201)), g_140)), g_51)) && g_374[8]) , l_694), l_703[3])), 0x65L)) , l_856) != p_33), l_704[3])) , g_178[1][4][3]))
                {
                    char l_869[10] = {0xF3L, 0xF3L, 0xBFL, 0xF3L, 0xF3L, 0xBFL, 0xF3L, 0xF3L, 0xBFL, 0xF3L};
                    int l_900 = 1L;
                    int i;
                    g_396 = ((safe_sub_func_uint32_t_u_u(func_57(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_33, (l_816 , 0L))), p_33)) > (safe_rshift_func_uint16_t_u_u(65535UL, 9))), g_141, (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((l_869[0] <= ((((0x3570930DL & (safe_add_func_uint16_t_u_u(func_57(l_829, g_140, l_872, l_869[0], g_201), 0L))) , g_141) == 0L) == 4294967287UL)), p_31)) || p_34), l_816)), g_235, g_140), g_737[7][6][0])) && l_816);
                    g_396 = ((-1L) != (safe_lshift_func_int8_t_s_s(p_32, ((safe_sub_func_uint16_t_u_u(((g_374[8] && func_57(p_32, l_816, (safe_add_func_int32_t_s_s(((4294967293UL <= (1UL != ((safe_rshift_func_uint8_t_u_s(g_141, p_31)) , p_33))) != l_812), p_32)), p_33, g_140)) > 0x08743DE2L), 9UL)) || p_30))));
                    for (p_31 = 9; (p_31 >= 0); p_31 -= 1)
                    {
                        int i;
                        l_900 = func_45((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(0xACL, func_35((((l_869[p_31] || (func_45((safe_add_func_uint16_t_u_u(g_374[1], ((g_74 >= ((safe_add_func_uint16_t_u_u((p_31 <= g_355), (g_264 , ((65535UL ^ (safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_33, l_869[0])), 0x41641CCCL)), g_235)) , (-1L)), g_264))) > 0xD198L)))) , 0xD6L)) || g_74))), g_899, g_321[1][0], l_703[1], g_374[4]) && p_32)) ^ g_575) , l_829), l_869[p_31], g_737[5][1][2], l_812, g_899))), g_559)) && 0x22A449A3L), 0x3E31DB61L)), l_829, p_33, p_31, l_869[p_31]);
                        l_901[8] = 0xB5B97620L;
                        if (l_901[8])
                            break;
                        if (g_264)
                            continue;
                    }
                    l_812 = (l_856 != l_901[8]);
                }
                else
                {
                    l_813 = (((((((((((p_33 != p_32) <= (p_32 || l_902)) >= (g_74 , (p_33 > l_829))) == (((l_704[7] , 0x42L) & p_30) || p_34)) >= 0x92FCL) >= l_816) ^ g_140) || l_903) && 0UL) , p_30) != 0xF781L);
                    if (g_317)
                        break;
                }
            }
        }
    }
    return g_374[8];
}







static char func_35(short p_36, unsigned char p_37, short p_38, unsigned char p_39, unsigned char p_40)
{
    g_396 = g_374[4];
    return p_36;
}







static short func_41(int p_42, short p_43, int p_44)
{
    unsigned short l_690 = 0x952DL;
    int l_691 = 1L;
    for (g_235 = 19; (g_235 < (-20)); g_235 = safe_sub_func_uint32_t_u_u(g_235, 1))
    {
        p_42 = g_264;
        return l_690;
    }
    l_691 = g_575;
    return g_99;
}







static int func_45(short p_46, unsigned p_47, unsigned short p_48, unsigned p_49, unsigned p_50)
{
    unsigned l_54 = 4294967294UL;
    unsigned short l_73 = 6UL;
    char l_174[5] = {(-1L), 0x4BL, (-1L), 0x4BL, (-1L)};
    int l_175 = 0x2493EC21L;
    unsigned char l_196 = 255UL;
    int l_583 = 0x90F1E63DL;
    unsigned l_611 = 0x73F015CEL;
    char l_620 = (-8L);
    char l_679 = 0xE8L;
    unsigned short l_687 = 0xF639L;
    int i;
    if (((safe_add_func_uint8_t_u_u((((-1L) | (l_54 , (g_51 && (safe_lshift_func_int16_t_s_s(func_57(l_54, (((((safe_rshift_func_uint8_t_u_u(p_46, 6)) != 249UL) || 3L) <= (7L & l_54)) , 1UL), g_51, l_54, g_51), p_49))))) < g_65[2]), 0x41L)) <= l_54))
    {
        char l_68 = 0xA4L;
        int l_79 = (-1L);
        g_74 = func_57(g_51, l_54, g_51, ((func_57((safe_add_func_int8_t_s_s((0x1494L < l_68), func_57((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((g_51 >= l_73) || l_68), (l_68 != p_50))), 65535UL)), g_65[1], g_65[3], g_65[1], g_51))), p_49, p_46, l_68, p_50) == 0x9CL) || l_68), l_68);
        l_79 = (safe_sub_func_int8_t_s_s(p_46, (p_48 | (safe_rshift_func_int16_t_s_u(0x434BL, 1)))));
    }
    else
    {
        int l_82 = 0x7F559297L;
        int l_83[3][1];
        unsigned l_98 = 0x146E0633L;
        short l_121 = (-2L);
        short l_223 = 0L;
        short l_267 = 0xA1C1L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_83[i][j] = 0L;
        }
        l_83[0][0] = ((1L >= 1L) < ((p_48 >= (0x8AL != (l_54 , (0xF6L <= l_82)))) == p_46));
        l_83[2][0] = (safe_sub_func_uint8_t_u_u(0x99L, func_57((safe_rshift_func_uint16_t_u_s(g_65[3], (65535UL != g_51))), ((0x207CCB15L | g_51) , (0x6636L <= ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(0x904CL, (p_46 > 0x4C2AL))), 3)) , l_83[0][0]))), l_83[0][0], g_65[3], g_51)));
        g_99 = ((safe_sub_func_uint8_t_u_u(((((func_57(((func_57(((func_57((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_74, l_83[2][0])), (l_54 ^ (g_51 | func_57((255UL | (g_74 <= (((l_73 > g_51) || g_65[3]) || 9UL))), g_74, g_74, l_82, p_47))))), g_74, p_46, p_50, l_98) , l_73) ^ p_50), g_65[2], g_51, p_46, l_54) , 0x45D781F8L) , g_65[2]), p_50, l_83[1][0], g_51, g_74) && p_50) && 0x1337FB34L) & g_74) == (-1L)), g_65[4])) ^ g_65[2]);
        for (p_48 = 0; (p_48 <= 4); p_48 += 1)
        {
            unsigned short l_112 = 0x1534L;
            unsigned l_126 = 4294967295UL;
            int l_176 = 0xF8ADBACCL;
            if (((safe_lshift_func_int8_t_s_u((((0x38L & (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((!(-1L)) , ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_112 || (safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(func_57(p_46, (0x099F59CAL != ((safe_lshift_func_int8_t_s_u((g_74 < ((l_98 <= ((safe_rshift_func_uint8_t_u_s(l_121, 4)) , ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((g_51 == l_112) >= g_74) > 0x9C7313B5L), 2)), g_65[1])) , g_99))) != p_46)), 4)) & l_112)), p_47, l_83[0][0], l_126), l_112)) || l_126), 14))), p_47)), g_99)) & 0xB1L)), l_73)), 11)) ^ l_112) >= g_51), g_51))) >= g_65[4]) , p_46), p_48)) < g_65[0]))
            {
                int l_139 = (-1L);
                int l_163 = 0x50615D4CL;
                for (p_49 = 0; (p_49 <= 4); p_49 += 1)
                {
                    int l_138 = 0x3620CEADL;
                    for (l_54 = 0; (l_54 <= 4); l_54 += 1)
                    {
                        if (g_74)
                            break;
                        g_140 = ((safe_lshift_func_uint16_t_u_s(l_83[1][0], 5)) , (((safe_add_func_int16_t_s_s((func_57((((!func_57(p_50, p_46, g_99, (safe_unary_minus_func_uint32_t_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(g_99, p_46)) == (((safe_lshift_func_int16_t_s_s(l_138, 4)) && g_74) != (p_49 , g_65[2]))), 1UL)))), l_138)) && g_51) , g_65[1]), p_48, g_51, g_65[4], g_99) < l_139), 0x75C0L)) , l_139) && l_121));
                    }
                }
                g_141 = g_140;
                for (l_54 = 0; (l_54 <= 4); l_54 += 1)
                {
                    char l_146[10][4][3] = {{{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}, {{0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}, {0xC1L, 7L, 0xDFL}}};
                    int i, j, k;
                    for (l_73 = 0; (l_73 <= 0); l_73 += 1)
                    {
                        int i, j;
                        if (g_65[p_48])
                            break;
                        l_83[l_73][l_73] = 0xE4E9FC46L;
                        l_83[(l_73 + 2)][l_73] = ((((((safe_mod_func_uint16_t_u_u(g_65[(l_73 + 1)], ((0xCA4AAA59L || ((+g_51) || ((func_57(g_99, ((((safe_rshift_func_int8_t_s_u((l_146[0][2][1] , (safe_add_func_int8_t_s_s((p_50 & ((l_112 , g_99) | (p_49 == g_141))), (-1L)))), g_99)) & g_141) != p_46) || p_47), g_141, l_139, l_146[0][2][1]) , l_139) > p_48))) ^ g_74))) <= p_46) & p_47) | 9UL) >= p_49) || g_65[1]);
                    }
                    l_163 = (+(p_48 != ((((-1L) & g_141) <= (safe_rshift_func_uint16_t_u_u((((g_65[0] > (g_65[0] == p_46)) != l_112) , (p_49 == (safe_lshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(g_141, l_139)) && g_51), g_74)) > 0x2218209FL), p_49)) > 255UL), g_51)) == g_65[0]), g_74)) | l_139) != l_83[2][0]), 0)))), 5))) > 0x3C71L)));
                    if ((((safe_sub_func_uint32_t_u_u(g_51, l_146[2][0][2])) != (l_146[1][3][2] || (safe_lshift_func_int8_t_s_s((((((g_140 || ((l_146[9][1][0] == (p_50 || (((safe_lshift_func_int8_t_s_s(((~g_140) || (safe_mod_func_int16_t_s_s(((-9L) || (((((safe_rshift_func_uint8_t_u_u(l_139, 7)) , 0xAB0F4296L) != 4294967295UL) , g_140) <= p_49)), l_174[0]))), p_48)) > 0xFB52L) <= p_48))) >= p_50)) < (-2L)) , p_47) ^ g_51) , l_121), 4)))) >= l_174[0]))
                    {
                        l_175 = (p_47 , l_146[0][2][1]);
                        l_176 = 0x8239DE1BL;
                        if (l_174[4])
                            break;
                        l_83[2][0] = g_140;
                    }
                    else
                    {
                        if (g_51)
                            break;
                        if (p_48)
                            continue;
                        return g_51;
                    }
                }
            }
            else
            {
                char l_177 = 0x7DL;
                unsigned char l_187 = 0x01L;
                l_177 = 0x7D6B70E4L;
                l_187 = (((((g_51 && (func_57(p_47, g_74, g_178[1][4][3], (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((func_57(g_140, (l_83[0][0] ^ (safe_add_func_int32_t_s_s(func_57(g_178[5][3][3], g_51, l_177, g_178[1][4][3], p_48), 0x52F76F32L))), g_74, p_46, p_46) == 0x30DB6F47L) && p_46) != 1UL), 1)) , 7L), p_47)), 4)), g_178[1][4][3]) <= l_176)) > p_48) , 0x98A6DB2CL) , 0x76L) <= p_50);
            }
            for (l_98 = 0; (l_98 <= 4); l_98 += 1)
            {
                unsigned char l_215 = 255UL;
                unsigned l_263[8][7][2] = {{{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}, {{0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}, {0x2EDE8C01L, 0x37CADD65L}}};
                int i, j, k;
                l_83[2][0] = (((((func_57(g_65[l_98], ((g_65[p_48] != (((p_46 > ((((safe_mod_func_uint16_t_u_u((func_57((safe_sub_func_int16_t_s_s(0x0AA5L, (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((0xA7A2L != (((l_176 & p_49) == l_112) >= ((((0UL && p_46) | 6UL) || p_50) , l_176))), g_141)), p_50)))), l_174[0], g_65[3], g_140, l_176) , 0x07E6L), g_65[4])) >= g_178[1][4][3]) ^ 0UL) < 0L)) | l_196) , p_49)) , g_140), p_47, p_46, l_176) & 0L) || l_82) , 0L) , g_178[0][2][4]) == 9UL);
                for (g_140 = 0; (g_140 >= 0); g_140 -= 1)
                {
                    unsigned l_220 = 0UL;
                    char l_234 = 0x18L;
                    int l_254[9][6] = {{0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}, {0L, (-10L), 0L, (-10L), 0L, (-1L)}};
                    int i, j;
                    if (l_83[(g_140 + 2)][g_140])
                    {
                        short l_200 = 0xCCB6L;
                        g_201 = func_57(g_74, (0xA14FL ^ ((3UL < (p_46 && 0x7855L)) && func_57(g_74, (safe_unary_minus_func_uint32_t_u(g_65[1])), (safe_sub_func_uint16_t_u_u((l_200 < p_46), g_140)), g_65[l_98], p_50))), p_49, g_178[5][2][4], l_112);
                        if (l_200)
                            break;
                    }
                    else
                    {
                        unsigned char l_210 = 246UL;
                        l_210 = (((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((0x6BC6E75EL <= (((func_57(g_65[3], l_83[(g_140 + 2)][g_140], g_178[1][4][3], g_65[1], ((p_50 , (((safe_lshift_func_uint16_t_u_s(((!((4294967291UL & (safe_rshift_func_uint8_t_u_u(0x32L, 3))) , g_99)) , l_83[(g_140 + 2)][g_140]), g_74)) <= p_46) >= g_99)) && l_73)) , (-1L)) , 0xCBF0L) != l_196)), l_83[0][0])) , 0x90L) & l_83[1][0]), 3)) || 8L) || l_83[(g_140 + 2)][g_140]);
                        l_83[0][0] = p_46;
                        l_176 = ((p_50 | (+0x41L)) && (l_83[(g_140 + 2)][g_140] < g_65[0]));
                        l_83[(g_140 + 2)][g_140] = (safe_lshift_func_uint8_t_u_u(func_57((0x0D82L <= (func_57(g_74, ((func_57(((((safe_sub_func_int8_t_s_s((l_215 | (((p_47 < ((safe_sub_func_uint8_t_u_u((g_140 , (((func_57((safe_mod_func_int8_t_s_s((func_57((6L || (g_51 <= func_57((((g_51 | func_57(p_46, g_140, l_83[(g_140 + 2)][g_140], p_46, g_201)) >= p_50) | l_210), g_201, p_48, p_50, g_201))), g_140, l_196, g_140, l_176) , p_50), l_220)), l_220, l_98, g_178[1][4][3], p_48) ^ 2UL) , p_48) >= 0xA19EL)), l_176)) | g_178[1][4][3])) != 65532UL) != p_47)), g_51)) & 9UL) >= g_99) >= g_178[0][0][5]), g_74, g_99, g_74, p_50) || (-1L)) , 0x67L), g_99, p_47, g_140) > p_47)), l_174[0], p_49, g_65[p_48], g_201), p_49));
                    }
                    g_235 = func_57((safe_mod_func_uint8_t_u_u(((-2L) <= (l_223 >= (p_48 && (safe_sub_func_uint8_t_u_u(func_57((p_46 , (((safe_add_func_uint16_t_u_u(g_140, 0xBB25L)) ^ ((((safe_add_func_int16_t_s_s(((((safe_add_func_int16_t_s_s(((p_49 <= (((g_99 , ((g_65[l_98] >= 0x7EL) | p_46)) , l_196) <= 7UL)) , l_196), g_99)) , g_178[1][4][3]) , 0L) == 0xC7F051BEL), l_83[0][0])) <= p_46) , 65529UL) != l_220)) != g_65[2])), l_126, l_112, p_48, g_178[4][3][5]), 250UL))))), l_126)), g_140, g_141, l_234, p_50);
                    l_175 = (p_46 & 7UL);
                    for (l_121 = 4; (l_121 >= 1); l_121 -= 1)
                    {
                        int l_240 = 0xA77CAAD7L;
                        int l_255 = 0xA6F5BC02L;
                        l_255 = (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_47, func_57(func_57(l_240, ((safe_rshift_func_int8_t_s_s(func_57((safe_sub_func_int16_t_s_s((((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_215, (((safe_mod_func_int16_t_s_s(((9L || ((l_220 > (safe_lshift_func_uint16_t_u_s((+1UL), 6))) <= 0xF4A4L)) > (((func_57((g_65[2] >= (safe_unary_minus_func_uint32_t_u(p_48))), l_126, g_51, g_201, g_74) < l_240) | 0L) <= (-10L))), 0x6846L)) == g_51) || l_174[0]))), l_126)) >= g_51) , 0L), p_49)), g_65[4], p_47, l_54, p_49), p_47)) | l_240), l_240, g_65[l_98], p_49), g_141, l_176, l_54, l_254[3][0]))), p_47));
                        l_175 = 0x70DA48EDL;
                        g_264 = (((g_65[p_48] && p_46) > (safe_rshift_func_int8_t_s_u((func_57(((((l_240 , l_240) ^ p_50) <= ((((safe_lshift_func_uint8_t_u_u(g_201, 6)) >= (g_99 || (((p_49 ^ ((safe_unary_minus_func_int8_t_s((safe_mod_func_uint16_t_u_u(65529UL, l_263[7][1][0])))) , 0xB4L)) | g_178[1][3][5]) && l_126))) != p_47) , p_46)) | g_235), l_112, g_178[1][4][3], p_48, g_99) & l_83[0][0]), g_140))) == g_140);
                        l_175 = p_49;
                    }
                }
            }
            l_175 = (safe_rshift_func_uint8_t_u_s(func_57((p_46 != (func_57(l_267, (safe_add_func_uint32_t_u_u((!(safe_rshift_func_int8_t_s_s((l_175 && p_46), (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_50, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((((((func_57(p_48, g_141, p_47, p_47, p_50) , p_47) >= 0x5A8B14A2L) , (-8L)) && l_112) & l_112) , p_49), p_50)), p_50)))), (-4L)))))), p_49)), p_50, p_49, p_49) , 0xB05F36B1L)), l_73, p_47, p_47, p_49), 5));
        }
    }
    for (g_74 = 0; (g_74 == (-20)); g_74 = safe_sub_func_uint16_t_u_u(g_74, 6))
    {
        int l_288 = 0L;
        unsigned l_372 = 7UL;
        unsigned short l_421[8] = {0x1D6AL, 0x8855L, 0x1D6AL, 0x8855L, 0x1D6AL, 0x8855L, 0x1D6AL, 0x8855L};
        unsigned char l_466 = 0xE5L;
        char l_493 = 0xCEL;
        unsigned short l_621 = 65535UL;
        unsigned l_631 = 9UL;
        unsigned short l_678 = 0x37C6L;
        unsigned l_686 = 0x66D389AAL;
        int i;
        for (g_99 = 27; (g_99 < 9); g_99--)
        {
            unsigned l_291 = 0x617C2733L;
            int l_320 = 0x7308639DL;
            char l_334 = (-1L);
            char l_439[4];
            int l_442 = 0x30F0EEB7L;
            char l_452 = 1L;
            unsigned l_489[9][9][3] = {{{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}, {{0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}, {0x3352C83DL, 18446744073709551610UL, 7UL}}};
            unsigned l_598[3][1][10] = {{{0xCCEF956CL, 1UL, 0xCCEF956CL, 0xED4C4C61L, 0x92745B71L, 0x4876D5A0L, 0x0AC12939L, 0x0AC12939L, 0x4876D5A0L, 0x92745B71L}}, {{0xCCEF956CL, 1UL, 0xCCEF956CL, 0xED4C4C61L, 0x92745B71L, 0x4876D5A0L, 0x0AC12939L, 0x0AC12939L, 0x4876D5A0L, 0x92745B71L}}, {{0xCCEF956CL, 1UL, 0xCCEF956CL, 0xED4C4C61L, 0x92745B71L, 0x4876D5A0L, 0x0AC12939L, 0x0AC12939L, 0x4876D5A0L, 0x92745B71L}}};
            short l_610 = 0x9561L;
            int l_634 = 0x200D79BFL;
            short l_662 = (-1L);
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_439[i] = 0xC0L;
            for (l_196 = 0; (l_196 <= 4); l_196 += 1)
            {
                for (g_264 = 0; (g_264 <= 4); g_264 += 1)
                {
                    int i, j, k;
                    if (g_178[(g_264 + 1)][l_196][(g_264 + 1)])
                        break;
                    if (g_65[g_264])
                        continue;
                    for (p_49 = 0; p_49 < 6; p_49 += 1)
                    {
                        for (p_46 = 0; p_46 < 5; p_46 += 1)
                        {
                            for (p_47 = 0; p_47 < 6; p_47 += 1)
                            {
                                g_178[p_49][p_46][p_47] = 1UL;
                            }
                        }
                    }
                    for (g_51 = 1; (g_51 <= 4); g_51 += 1)
                    {
                        int l_289 = 0x15B97896L;
                        int l_290[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_290[i] = 0xAA0ECB53L;
                        l_290[0] = ((g_178[(g_264 + 1)][l_196][(g_264 + 1)] < (safe_lshift_func_uint16_t_u_u(0x3AB0L, ((((g_140 & (((g_141 > (p_46 || (safe_rshift_func_int16_t_s_s((l_174[1] <= p_50), 0)))) <= g_74) ^ 9UL)) >= l_288) <= 0xE122L) <= l_289)))) == g_201);
                        return g_235;
                    }
                }
            }
            if ((p_49 >= (p_46 && p_49)))
            {
                unsigned short l_298 = 65534UL;
                int l_299[9] = {0x18E68985L, 0x4582FF35L, 0x18E68985L, 0x4582FF35L, 0x18E68985L, 0x4582FF35L, 0x18E68985L, 0x4582FF35L, 0x18E68985L};
                char l_312 = 0xA4L;
                short l_395 = 6L;
                unsigned short l_402[3][7][4] = {{{0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}}, {{0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}}, {{0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}, {0x60A5L, 8UL, 65533UL, 65533UL}}};
                int l_424 = (-4L);
                int i, j, k;
                l_291 = p_50;
                l_299[0] = (0xFCL >= ((safe_mod_func_uint8_t_u_u((((func_57((l_73 , l_174[3]), ((func_57((safe_add_func_int32_t_s_s(func_57(p_49, (l_291 & p_47), p_50, ((safe_sub_func_uint8_t_u_u((((l_54 || (g_178[1][4][3] && l_298)) < p_47) <= g_99), 0xB9L)) != l_298), g_140), l_298)), l_73, p_47, p_46, g_99) , l_298) , 0x8DL), p_48, l_288, g_74) >= 0x90D6L) > p_49) , g_235), g_74)) , l_288));
                if ((l_299[0] <= (((safe_lshift_func_uint16_t_u_u(l_174[3], func_57((((safe_sub_func_int8_t_s_s(func_57(l_288, p_48, (((safe_mod_func_int16_t_s_s((!6L), (((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((((func_57(l_299[5], func_57(g_74, p_46, p_50, p_49, p_50), p_46, g_65[0], g_141) < 0x53L) <= 0x44FF9101L) && l_312) ^ g_264) != g_178[1][4][3]), g_74)), p_49)), g_264)) | 0x0CL) | 0xE7L))) || g_264) > l_196), l_291, g_264), (-1L))) , g_141) , 1UL), g_140, p_47, g_201, g_51))) <= p_46) && g_51)))
                {
                    unsigned char l_313 = 0xEAL;
                    l_313 = g_264;
                    for (p_50 = (-1); (p_50 != 6); p_50 = safe_add_func_int32_t_s_s(p_50, 7))
                    {
                        short l_316 = 0x0CE5L;
                        g_317 = l_316;
                    }
                    l_320 = (safe_rshift_func_int16_t_s_u(l_54, 15));
                    g_321[1][5] = p_49;
                }
                else
                {
                    unsigned short l_341 = 3UL;
                    short l_346 = 0x0BD0L;
                    if ((~(safe_sub_func_uint8_t_u_u(func_57(l_288, g_178[1][4][3], ((safe_mod_func_uint32_t_u_u(l_298, 0x2B50DF7FL)) ^ (func_57(((g_235 != (safe_add_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((-1L), ((((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(func_57(l_174[0], p_49, p_47, p_48, l_174[0]), 2)) || (-1L)), g_74)) <= (-1L)) , 0xA92F456AL) | p_48))) >= l_334) , (-2L)), p_47))) , l_288), p_46, g_235, p_48, p_49) , g_99)), g_321[1][8], g_321[1][1]), l_288))))
                    {
                        l_320 = l_299[0];
                    }
                    else
                    {
                        unsigned l_353 = 0x66958D51L;
                        int l_354 = 1L;
                        l_354 = ((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((((1L == ((l_288 , (g_99 <= p_47)) >= (((((safe_rshift_func_uint16_t_u_s(func_57(l_341, (safe_lshift_func_int8_t_s_u(0x49L, 5)), ((safe_rshift_func_uint16_t_u_u(((l_346 < (func_57((safe_add_func_uint8_t_u_u(0UL, ((((func_57(((((((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_74, g_317)), 0)) != l_288) | p_46) | p_50) >= p_50) , g_264) <= p_48) == p_46), l_320, l_320, g_321[1][5], l_291) >= 65532UL) > l_341) , l_353) >= 5UL))), l_353, l_299[0], g_65[3], l_353) & g_178[0][0][3])) < l_298), p_49)) & p_46), g_321[1][5], p_48), 4)) , 0x0FL) | 1L) == 0xAAL) , l_196))) && g_65[4]) <= p_47), 3)) > g_264), p_50)) & l_334);
                        g_355 = l_341;
                    }
                    for (l_346 = 0; (l_346 < 29); l_346 = safe_add_func_int8_t_s_s(l_346, 4))
                    {
                        unsigned short l_373[5] = {0UL, 65528UL, 0UL, 65528UL, 0UL};
                        int i;
                        g_374[8] = ((func_57((0xB7EF76FAL > (((safe_rshift_func_int16_t_s_u(l_299[0], 13)) >= 0L) < func_57(((((safe_lshift_func_uint8_t_u_s(g_317, (safe_add_func_int8_t_s_s((((+(g_51 == ((l_288 && ((((((func_57(((((!(~((((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(func_57(l_341, l_320, (safe_lshift_func_int8_t_s_s(l_341, 1)), l_298, p_47), g_201)) < 3UL) , p_47), g_317)) & (-4L)) & l_334) != g_235))) ^ g_321[0][1]) > 0x8EF1L) , g_178[1][4][3]), l_288, p_47, p_47, g_74) | p_50) || (-1L)) < p_48) == 0x909DA0BEL) != p_46) | p_46)) , l_372))) != 0x462EL) , l_196), l_373[0])))) < g_264) > l_346) <= g_321[1][1]), g_201, g_201, g_74, g_99))), l_174[0], g_51, g_178[1][4][3], g_355) ^ p_48) > (-6L));
                    }
                    l_299[0] = func_57(g_374[8], g_65[2], g_51, ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_334, ((((p_47 , (g_99 & 248UL)) , ((safe_mod_func_uint8_t_u_u((l_299[7] , l_312), g_74)) ^ g_65[4])) , 0x139AF61BL) ^ 1UL))), g_374[6])) ^ l_341), l_341);
                }
                for (g_317 = 28; (g_317 > (-14)); --g_317)
                {
                    unsigned short l_429 = 1UL;
                    if ((g_178[1][4][3] != g_51))
                    {
                        int l_393[3][2] = {{0xE0B9DB81L, 1L}, {0xE0B9DB81L, 1L}, {0xE0B9DB81L, 1L}};
                        short l_394 = (-2L);
                        unsigned l_397 = 0xCAA57AA3L;
                        int i, j;
                        if (l_334)
                            break;
                        g_396 = (safe_add_func_uint32_t_u_u((p_48 < ((safe_sub_func_uint8_t_u_u((p_48 ^ func_57((safe_lshift_func_int8_t_s_u((g_140 , g_321[1][5]), ((safe_rshift_func_uint16_t_u_s((g_321[1][2] && (func_57((l_288 != (((((safe_lshift_func_uint8_t_u_u((g_74 <= l_393[2][0]), func_57((~(func_57(l_394, p_50, p_47, l_372, g_178[1][4][3]) , g_355)), g_65[3], l_299[0], l_395, g_235))) | p_48) && 0x1CL) && (-1L)) >= 0x206EL)), l_291, l_174[3], g_201, p_48) , 1L)), g_178[1][4][3])) & (-3L)))), g_99, g_74, g_396, l_288)), l_397)) , (-1L))), g_396));
                    }
                    else
                    {
                        g_396 = g_374[8];
                    }
                    l_175 = (g_235 & 0xD3L);
                    l_175 = ((g_355 != (safe_rshift_func_int8_t_s_u(func_57(l_288, p_46, g_321[1][5], ((safe_rshift_func_uint8_t_u_s(0xF2L, ((l_402[1][6][1] == ((safe_add_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s(g_396, ((safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(g_264, 0UL)) || g_178[1][4][3]) || p_47), l_288)) , l_402[1][6][1]))) || l_402[0][0][0]) & p_46) >= p_48), p_49)) != 1L)) ^ 1UL))) || 0x86256CEDL), l_73), l_372))) < 254UL);
                    for (l_312 = (-30); (l_312 < 8); l_312 = safe_add_func_int16_t_s_s(l_312, 9))
                    {
                        g_396 = ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(p_50, (((l_421[7] ^ (p_50 | (((+(safe_mod_func_uint32_t_u_u(l_424, (safe_mod_func_uint16_t_u_u(l_402[1][6][1], p_46))))) <= p_48) | g_140))) & (((((safe_lshift_func_int8_t_s_s(((0x73F8L == l_429) != 5UL), l_429)) < l_421[5]) && l_320) , g_141) , 0x84D41BEAL)) && p_49))) != 1UL), 0x85L)), 11)) < g_140), 1L)) < p_46);
                    }
                }
            }
            else
            {
                unsigned char l_440 = 1UL;
                short l_441[6][8][5] = {{{4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}}, {{4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}}, {{4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}}, {{4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}}, {{4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}}, {{4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}, {4L, (-1L), 0xCDF3L, 0x7EBEL, 0L}}};
                int l_447 = 0xAC4478B5L;
                int i, j, k;
                for (l_320 = 0; (l_320 != (-25)); l_320--)
                {
                    char l_434[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_434[i] = 0L;
                    l_442 = func_57((0x5F43L < (((((0x58L >= ((safe_mod_func_uint8_t_u_u(l_434[7], func_57((((0xA5L >= ((safe_add_func_uint32_t_u_u((g_264 & ((((func_57(g_178[1][4][3], l_174[0], ((func_57((p_47 , func_57(((safe_add_func_int16_t_s_s(g_99, 65529UL)) == l_174[4]), p_46, p_48, p_48, l_439[3])), g_374[1], l_439[3], g_374[8], g_140) | g_235) , p_48), g_141, l_288) , 2UL) >= g_141) , l_434[7]) < p_47)), l_174[4])) == 0x08L)) , g_178[1][4][3]) & p_49), g_396, p_50, l_440, g_396))) , l_421[2])) , l_434[7]) != l_434[7]) ^ (-10L)) , p_46)), p_49, l_441[4][0][2], l_434[8], p_50);
                    l_447 = ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(6UL, 4)), ((((func_57((!(func_57(l_174[2], l_434[7], g_201, p_46, l_434[0]) , ((p_48 | ((0x58L == 0xA5L) ^ 0xFA7BL)) <= g_317))), g_140, g_321[1][5], p_47, l_441[4][0][2]) && 0UL) > l_434[7]) | l_334) | (-1L)))) , 0xC434F8EBL);
                    return p_48;
                }
                l_320 = ((((safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((func_57(p_48, g_178[0][3][1], p_47, l_452, p_46) == l_421[7]), ((safe_sub_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(0L, (safe_sub_func_uint8_t_u_u(0UL, p_47)))) > l_174[0]) || g_264) <= 2L), g_321[1][7])) , l_440))) , g_317) | p_46) , l_196), 6)) || l_452) | p_49) < p_46);
                return g_321[1][5];
            }
            if (l_320)
            {
                unsigned short l_463 = 0x1DEDL;
                unsigned l_490[1];
                int l_492 = 0x34FF0196L;
                unsigned l_523 = 0x7119ADA5L;
                int l_526 = (-9L);
                unsigned char l_540 = 0x35L;
                int l_551 = 1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_490[i] = 1UL;
                if (((0xB1BFL && ((safe_lshift_func_int16_t_s_u((l_196 > (safe_add_func_uint32_t_u_u(p_48, func_57(l_463, (((0xC15EL & (p_47 && ((+l_73) < (safe_rshift_func_uint16_t_u_s(l_463, 10))))) > g_51) <= l_452), g_140, l_73, l_466)))), g_74)) || p_47)) || 3UL))
                {
                    unsigned char l_496 = 255UL;
                    l_320 = (-1L);
                    l_288 = (g_264 , (func_57(p_46, l_463, p_49, (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(func_57(l_463, l_452, p_46, (((safe_mod_func_int16_t_s_s(g_396, (safe_mod_func_int16_t_s_s((func_57(g_178[1][4][3], p_47, l_196, g_355, g_99) > g_74), 0x9F31L)))) != 0x28L) || 0UL), g_264), p_47)), g_235)), l_372) , g_321[1][5]));
                    for (l_372 = 4; (l_372 == 45); l_372++)
                    {
                        int l_491 = 0L;
                        l_492 = (safe_sub_func_int16_t_s_s(g_99, ((safe_add_func_int8_t_s_s(l_196, ((p_50 && (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((~g_51) != 0xB2L) ^ (((0x8902L ^ ((safe_mod_func_int16_t_s_s((func_57(p_48, (0xDDDEL && (~(safe_lshift_func_int16_t_s_s(l_489[4][7][2], g_374[8])))), g_178[1][4][3], g_99, g_140) >= g_317), 0x98A8L)) || p_47)) <= l_463) < 0x7212L)), l_490[0])), g_321[1][5]))) != p_49))) , l_491)));
                        g_396 = ((g_74 > ((((func_57((p_50 & l_54), func_57(p_49, l_491, l_493, func_57((safe_add_func_int8_t_s_s(2L, (((l_493 || p_47) && (-4L)) , g_74))), l_491, l_490[0], g_201, l_466), g_99), l_73, g_141, p_50) != 0UL) & 0UL) != g_374[1]) , p_47)) || p_50);
                        if (g_264)
                            continue;
                    }
                    l_288 = (l_490[0] > l_496);
                }
                else
                {
                    int l_505 = 1L;
                    if ((safe_lshift_func_int16_t_s_s(g_264, 4)))
                    {
                        unsigned char l_522[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_522[i] = 0x6EL;
                        l_492 = ((safe_mod_func_uint8_t_u_u(g_321[1][5], p_46)) , ((g_321[1][5] || ((p_48 == ((safe_lshift_func_uint16_t_u_s((+((g_178[2][2][3] <= ((p_48 ^ ((((safe_sub_func_int32_t_s_s(g_178[1][4][3], (l_490[0] , ((g_74 != p_50) >= 65535UL)))) >= g_396) != (-6L)) | l_174[4])) , p_47)) && 255UL)), p_48)) , l_505)) , l_505)) , l_505));
                        g_396 = func_57((((g_141 | (g_99 , ((safe_add_func_int16_t_s_s(p_48, (safe_rshift_func_uint8_t_u_s((func_57(l_73, l_489[2][0][2], (func_57((1L ^ ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((func_57(((g_235 , ((safe_rshift_func_int8_t_s_s(p_49, (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((g_235 && p_46), g_374[3])) == l_442) <= l_463) ^ g_141), 0xBF4DL)) & g_178[4][4][3]), g_141)))) , 0x0FC3A581L)) , g_178[5][0][0]), g_235, g_321[0][5], p_47, p_46) & p_46), 12)) < p_49), 2)) & g_321[1][5])), g_355, l_174[4], l_505, p_50) || 0x94L), g_99, g_178[1][4][3]) , g_374[7]), g_321[1][2])))) , p_46))) == l_522[2]) > 0xADL), l_523, l_174[0], g_396, p_46);
                        g_396 = (l_196 , (p_46 || func_57(func_57(((safe_lshift_func_int8_t_s_u(p_47, 0)) <= l_452), (4L == 4294967289UL), p_48, ((p_46 || p_48) ^ 251UL), g_321[0][5]), p_46, g_317, g_99, l_196)));
                        if (l_526)
                            continue;
                    }
                    else
                    {
                        int l_527 = (-5L);
                        l_288 = g_74;
                        return l_527;
                    }
                    if (func_57(l_493, g_374[8], (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_396, func_57((safe_lshift_func_uint8_t_u_s(((p_48 == ((safe_add_func_int16_t_s_s(g_65[3], g_321[1][5])) | (safe_mod_func_int16_t_s_s(g_140, (safe_rshift_func_int16_t_s_s((g_51 && (l_505 <= g_140)), p_47)))))) || g_321[1][5]), 6)), g_321[1][6], l_540, l_174[0], p_46))), 0x1CA2L)), g_99, g_178[1][4][3]))
                    {
                        l_492 = (p_50 <= p_48);
                    }
                    else
                    {
                        return p_50;
                    }
                }
                for (g_201 = 0; (g_201 > 2); g_201 = safe_add_func_int32_t_s_s(g_201, 7))
                {
                    char l_550[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_550[i] = 3L;
                    l_492 = (((((func_57(g_51, p_48, (safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int16_t_s_u(g_374[8], 1)) >= (safe_lshift_func_uint8_t_u_u((0x93L & (safe_unary_minus_func_int16_t_s(g_140))), 0))) , l_540) <= (-1L)), ((g_140 < (((g_264 ^ l_288) , 0x3933338DL) <= l_550[2])) | (-2L)))), g_74, l_540) != p_50) || g_317) > g_321[0][4]) , 1L) == l_551);
                    return g_74;
                }
            }
            else
            {
                unsigned short l_558 = 0xB30EL;
                unsigned l_609 = 0xA884E199L;
                int l_623[8] = {0x244B6496L, 0x244B6496L, 0xB77D62F1L, 0x244B6496L, 0x244B6496L, 0xB77D62F1L, 0x244B6496L, 0x244B6496L};
                int i;
                if ((+0x5F4EB896L))
                {
                    int l_560 = 0x57AEF369L;
                    g_396 = (((0xEAL ^ (func_57((((g_140 , (-1L)) & (safe_add_func_int16_t_s_s(0x021EL, func_57(func_57(l_489[7][0][2], ((0xFBL | (safe_add_func_uint32_t_u_u(0x59C3EB73L, (safe_lshift_func_uint8_t_u_u((~func_57(p_48, l_489[2][3][1], g_321[1][5], l_334, p_48)), g_74))))) , l_489[4][7][2]), g_74, g_264, g_355), l_558, g_99, l_174[4], g_559)))) >= 1L), p_47, l_560, g_51, p_49) , p_46)) < g_374[8]) , g_235);
                    if (l_489[4][7][2])
                        break;
                    if (((((0xBF0AD8FDL == (safe_lshift_func_uint8_t_u_s(p_47, ((+((!(l_558 > (safe_mod_func_int8_t_s_s((l_560 , ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((g_559 || p_49) && ((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(253UL, 1)), (l_466 ^ (safe_add_func_int16_t_s_s((func_57(p_49, p_49, l_174[4], l_452, g_51) < 5L), 0x295FL))))) != p_47) > g_575) , g_559)), g_74)), 13)) , l_372)), 0x4DL)))) ^ p_48)) < g_178[1][4][3])))) < g_99) ^ p_46) == p_46))
                    {
                        char l_580[6] = {1L, 0x16L, 1L, 0x16L, 1L, 0x16L};
                        int i;
                        l_288 = ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(l_560, 3)) <= func_57(l_580[2], ((p_46 , (((((l_54 , g_178[4][4][0]) < p_48) == g_99) , (l_583 < (0x8C7BL >= g_140))) >= 0x588EL)) && g_374[4]), g_374[3], l_560, g_99)), g_321[1][3])) < p_50);
                    }
                    else
                    {
                        unsigned l_599 = 0x65CDD981L;
                        if (p_47)
                            break;
                        l_175 = (safe_rshift_func_int8_t_s_s((((252UL | func_57((func_57(((safe_rshift_func_int16_t_s_u(p_46, (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0x9252L, (p_46 , (((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u(l_560, (safe_sub_func_int8_t_s_s(0x5FL, 0x28L)))) > g_178[0][4][4]) != g_178[1][4][3]), 5)) >= g_355) , 1UL)))), p_47)))) , p_47), g_178[1][4][3], g_201, p_48, p_50) < l_558), g_178[3][4][1], l_598[1][0][1], l_73, l_599)) , g_51) , p_50), 4));
                    }
                }
                else
                {
                    unsigned short l_600 = 65528UL;
                    int l_680 = (-6L);
                    l_320 = (((l_600 || ((safe_rshift_func_int16_t_s_u(((((func_57((safe_rshift_func_uint8_t_u_u(0xF3L, (safe_lshift_func_int16_t_s_s((l_442 || (g_374[8] , func_57(p_50, (safe_rshift_func_uint16_t_u_s((1L != g_396), 9)), (((p_48 , (~(0x293EL && g_99))) < l_452) , p_48), p_50, l_598[1][0][1]))), g_374[8])))), l_372, g_396, l_609, g_317) && g_321[0][3]) >= l_372) , p_46) , l_334), p_47)) , l_600)) , l_610) | p_46);
                    if (l_439[3])
                    {
                        unsigned char l_622[4] = {1UL, 0x1FL, 1UL, 0x1FL};
                        int i;
                        l_623[2] = (((((func_57(func_57(l_611, (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(0x281AL, 7)) , (safe_sub_func_uint8_t_u_u((g_575 && func_57(g_264, (((0UL | p_46) ^ (g_321[1][9] == g_141)) > 0x929F91BAL), l_598[2][0][0], p_46, g_51)), l_620))) & g_355), l_621)), l_609)) & p_47) , 0x17L), l_622[1], l_620, g_321[1][3]), p_48, p_46, l_600, p_49) != 1UL) ^ 0xE6L) > l_288) , 1L) <= p_49);
                    }
                    else
                    {
                        g_396 = ((((safe_rshift_func_uint16_t_u_s(l_598[1][0][0], 10)) < (!g_99)) <= (g_65[4] == (func_57(p_50, ((((l_54 > (p_49 , (safe_unary_minus_func_int32_t_s((((((g_65[2] , (((((255UL < (0x8C47F756L < l_452)) || g_51) == (-2L)) ^ 0x59L) & l_175)) || 0x29F899CCL) && 0x6408L) ^ p_48) , l_600))))) , l_291) != l_452) | 65535UL), p_48, g_74, g_140) | g_321[1][5]))) && 0L);
                        g_396 = ((g_396 , ((p_46 == 0x31L) , (safe_rshift_func_uint16_t_u_s((g_140 | l_621), (safe_add_func_int32_t_s_s(l_558, func_57((l_631 , func_57((((g_141 >= p_46) , 0xA2L) , g_74), g_201, l_623[7], g_201, p_46)), l_623[2], p_48, l_288, l_600))))))) < g_201);
                        l_442 = ((l_600 || (safe_mod_func_int32_t_s_s(1L, 6L))) | l_634);
                    }
                    if (g_178[1][4][3])
                    {
                        short l_647 = (-10L);
                        unsigned char l_653 = 0xDFL;
                        l_623[1] = (((p_49 >= p_46) > (safe_add_func_int8_t_s_s(g_374[8], (g_140 | (0xF396E553L != (p_50 > ((2UL ^ l_600) && (((((((((p_50 , 0x1A75B791L) >= 8UL) , 65535UL) || p_46) >= p_48) | l_421[7]) | g_140) ^ p_49) ^ 0L)))))))) >= g_559);
                        g_396 = ((safe_sub_func_int16_t_s_s(((0UL >= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(func_57(l_174[0], ((func_57((((safe_lshift_func_uint8_t_u_s(p_46, g_374[6])) > (((((safe_add_func_uint32_t_u_u(((+(g_321[1][5] , 0x76L)) < l_647), (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x7952E01AL, (((safe_unary_minus_func_uint32_t_u(l_653)) | 0x0CL) < p_46))), l_174[0])))) & l_611) > (-2L)) >= p_49) , l_609)) <= (-1L)), p_49, p_49, p_49, l_610) < l_372) & l_623[4]), l_174[0], g_559, g_317), g_264)), 4)) > l_493)) || g_264), (-1L))) != p_46);
                        l_288 = (((p_47 , g_99) , ((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((l_662 != (g_575 < l_288)), g_396)), 5)), 1)), ((g_321[1][5] , l_631) < g_51))) && g_74)) > 247UL);
                        l_175 = p_49;
                    }
                    else
                    {
                        unsigned short l_677 = 1UL;
                        g_396 = ((g_317 && ((safe_sub_func_uint16_t_u_u(p_50, 0x7973L)) >= ((safe_lshift_func_int16_t_s_s(((l_610 , l_174[0]) < func_57(g_99, ((safe_rshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_583 , 0x2FL), func_57((safe_add_func_int8_t_s_s(((func_57(l_609, g_321[1][2], l_677, p_49, g_178[5][0][4]) > g_374[5]) | p_47), l_439[3])), g_264, p_46, l_452, l_600))), p_48)) <= g_201) | g_396), l_623[6])) , l_73), l_678, p_46, g_396)), p_48)) < l_677))) , l_679);
                        l_175 = 8L;
                        l_680 = p_46;
                    }
                }
                l_623[1] = ((l_288 == ((safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s(l_609, 7)) ^ (safe_unary_minus_func_uint32_t_u((((l_598[1][0][1] & ((p_47 , (func_57((func_57((((g_374[8] , 0x4DL) || func_57((((p_50 || ((0x9AL > (g_374[8] || 0xE74FL)) < 1L)) == p_46) < p_47), l_686, p_49, g_355, g_178[1][4][3])) <= p_47), l_334, p_48, l_687, p_48) , 18446744073709551615UL), l_442, g_74, l_598[2][0][3], g_141) == l_678)) >= p_49)) , 0UL) >= 0x1EL)))) | 0x2FFBL), 0xFB406998L)) & g_317)) == l_609);
                g_396 = (-3L);
            }
        }
        return g_575;
    }
    return p_50;
}







static short func_57(unsigned p_58, unsigned char p_59, unsigned char p_60, unsigned p_61, char p_62)
{
    for (p_60 = 1; (p_60 <= 4); p_60 += 1)
    {
        int i;
        return g_65[p_60];
    }
    return p_62;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_178[i][j][k], "g_178[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_321[i][j], "g_321[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_355, "g_355", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_374[i], "g_374[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_737[i][j][k], "g_737[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1156, "g_1156", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1407, "g_1407", print_hash_value);
    transparent_crc(g_1578, "g_1578", print_hash_value);
    transparent_crc(g_1656, "g_1656", print_hash_value);
    transparent_crc(g_1714, "g_1714", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1827[i][j][k], "g_1827[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1879[i], "g_1879[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1915, "g_1915", print_hash_value);
    transparent_crc(g_1916, "g_1916", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_1933, "g_1933", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2039[i], "g_2039[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2089, "g_2089", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    transparent_crc(g_2136, "g_2136", print_hash_value);
    transparent_crc(g_2137, "g_2137", print_hash_value);
    transparent_crc(g_2152, "g_2152", print_hash_value);
    transparent_crc(g_2187, "g_2187", print_hash_value);
    transparent_crc(g_2211, "g_2211", print_hash_value);
    transparent_crc(g_2291, "g_2291", print_hash_value);
    transparent_crc(g_2306, "g_2306", print_hash_value);
    transparent_crc(g_2322, "g_2322", print_hash_value);
    transparent_crc(g_2351, "g_2351", print_hash_value);
    transparent_crc(g_2493, "g_2493", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
