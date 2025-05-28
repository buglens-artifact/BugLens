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



static const long long g_7 = 0L;
static int g_37 = 0xD7BC3524L;
static int *g_36 = &g_37;
static int ** volatile g_52 = &g_36;
static volatile int g_60 = 0x7557BC77L;
static volatile int *g_59[3] = {&g_60, &g_60, &g_60};
static volatile int * const *g_58[4] = {&g_59[0], &g_59[0], &g_59[0], &g_59[0]};
static unsigned short g_63[9][10] = {{0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}, {0xCD58L, 0x9227L, 0UL, 0xB721L, 7UL, 3UL, 1UL, 65535UL, 1UL, 3UL}};
static unsigned g_68[9][9][3] = {{{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}, {{0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}, {0x77C41863L, 0x5DDA3018L, 9UL}}};
static unsigned char g_85 = 0xA4L;
static short g_90 = 0xFA7FL;
static int * volatile g_106[1] = {&g_37};
static int ** volatile g_142 = &g_36;
static unsigned short *g_160 = (void*)0;
static unsigned short **g_159 = &g_160;
static unsigned short ** volatile *g_158 = &g_159;
static int g_213 = 0L;
static int * const g_212 = &g_213;
static char g_215 = 1L;
static short *g_220 = &g_90;
static short **g_219 = &g_220;
static short *** volatile g_218 = &g_219;
static unsigned long long g_247 = 8UL;
static short g_295 = 1L;
static int ** volatile g_301 = &g_36;
static int *g_327 = &g_37;
static int ** volatile g_326 = &g_327;
static int ** volatile g_342 = &g_327;
static volatile int ** volatile g_343 = (void*)0;
static const int g_348 = 0xA7B21AB2L;
static const int *g_347[3] = {&g_348, &g_348, &g_348};
static char *g_355[10] = {&g_215, &g_215, &g_215, &g_215, &g_215, &g_215, &g_215, &g_215, &g_215, &g_215};
static char **g_354[1] = {&g_355[6]};
static char *** volatile g_353 = &g_354[0];
static unsigned g_375 = 18446744073709551613UL;
static short g_387[4][5] = {{0xFA20L, 0xC126L, 0x479EL, 0xC126L, 0xFA20L}, {0xFA20L, 0xC126L, 0x479EL, 0xC126L, 0xFA20L}, {0xFA20L, 0xC126L, 0x479EL, 0xC126L, 0xFA20L}, {0xFA20L, 0xC126L, 0x479EL, 0xC126L, 0xFA20L}};
static int ** volatile g_391[4][4] = {{&g_36, &g_327, (void*)0, &g_327}, {&g_36, &g_327, (void*)0, &g_327}, {&g_36, &g_327, (void*)0, &g_327}, {&g_36, &g_327, (void*)0, &g_327}};
static int ** volatile g_393[5][8] = {{&g_327, &g_327, &g_36, (void*)0, &g_327, (void*)0, &g_36, &g_327}, {&g_327, &g_327, &g_36, (void*)0, &g_327, (void*)0, &g_36, &g_327}, {&g_327, &g_327, &g_36, (void*)0, &g_327, (void*)0, &g_36, &g_327}, {&g_327, &g_327, &g_36, (void*)0, &g_327, (void*)0, &g_36, &g_327}, {&g_327, &g_327, &g_36, (void*)0, &g_327, (void*)0, &g_36, &g_327}};
static int ** volatile g_394 = &g_36;
static short g_400 = 0x5950L;
static int * volatile g_411 = &g_37;
static int ** volatile g_436[5] = {&g_327, &g_327, &g_327, &g_327, &g_327};
static unsigned *g_508 = &g_68[4][4][0];
static unsigned * volatile *g_507 = &g_508;
static unsigned * volatile **g_506 = &g_507;
static unsigned * volatile *** volatile g_505 = &g_506;
static int ** volatile g_539 = (void*)0;
static long long g_579 = 0x2DEEA46F31271786LL;
static volatile unsigned char g_649 = 255UL;
static const unsigned short g_674 = 65535UL;
static int ** volatile g_684 = &g_36;
static int * volatile *g_687 = (void*)0;
static int * volatile * volatile *g_686 = &g_687;
static int * volatile * volatile **g_685 = &g_686;
static unsigned short **g_787 = &g_160;
static int ** volatile g_822 = &g_327;
static unsigned char g_864 = 255UL;
static unsigned char g_867 = 0UL;
static const unsigned char * const volatile * volatile g_873 = (void*)0;
static const unsigned char * const volatile * volatile * volatile g_874 = &g_873;
static const unsigned g_879 = 0xDA4C8563L;
static int ** volatile g_890 = &g_327;
static int *g_903 = &g_37;
static unsigned char g_904 = 1UL;
static const short g_933[2] = {(-9L), (-9L)};
static int ** volatile g_934 = (void*)0;
static int ** const volatile g_935 = (void*)0;
static int **g_972 = (void*)0;
static int ***g_971 = &g_972;
static long long **g_1019 = (void*)0;
static long long *** volatile g_1018[6][10] = {{&g_1019, &g_1019, &g_1019, &g_1019, &g_1019, &g_1019, (void*)0, &g_1019, &g_1019, &g_1019}, {&g_1019, &g_1019, &g_1019, &g_1019, &g_1019, &g_1019, (void*)0, &g_1019, &g_1019, &g_1019}, {&g_1019, &g_1019, &g_1019, &g_1019, &g_1019, &g_1019, (void*)0, &g_1019, &g_1019, &g_1019}, {&g_1019, &g_1019, &g_1019, &g_1019, &g_1019, &g_1019, (void*)0, &g_1019, &g_1019, &g_1019}, {&g_1019, &g_1019, &g_1019, &g_1019, &g_1019, &g_1019, (void*)0, &g_1019, &g_1019, &g_1019}, {&g_1019, &g_1019, &g_1019, &g_1019, &g_1019, &g_1019, (void*)0, &g_1019, &g_1019, &g_1019}};
static char ***g_1031 = &g_354[0];
static int g_1085 = (-9L);
static const int ** volatile g_1090 = &g_347[1];
static int ** const volatile g_1096 = &g_327;



static unsigned long long func_1(void);
static int func_2(const int p_3, unsigned long long p_4, const unsigned short p_5, char p_6);
static int func_9(int p_10);
static int * func_12(int p_13, unsigned long long p_14, unsigned p_15, unsigned short p_16);
static unsigned long long func_18(unsigned p_19);
static char func_20(int p_21, unsigned p_22, int * p_23, unsigned long long p_24);
static int func_25(short p_26, unsigned short p_27, int * p_28, const long long p_29, int * p_30);
static int func_33(int * p_34, int * const p_35);
static int * func_38(unsigned char p_39, int p_40);
static int func_48(int p_49);
static unsigned long long func_1(void)
{
    unsigned l_8 = 0xBD97A888L;
    int *l_1095 = &g_213;
    int * const l_1100 = (void*)0;
    if (func_2(g_7, l_8, l_8, g_7))
    {
        char l_1099 = 0x60L;
        unsigned l_1101[3][10] = {{18446744073709551614UL, 18446744073709551614UL, 9UL, 5UL, 2UL, 5UL, 9UL, 18446744073709551614UL, 18446744073709551614UL, 9UL}, {18446744073709551614UL, 18446744073709551614UL, 9UL, 5UL, 2UL, 5UL, 9UL, 18446744073709551614UL, 18446744073709551614UL, 9UL}, {18446744073709551614UL, 18446744073709551614UL, 9UL, 5UL, 2UL, 5UL, 9UL, 18446744073709551614UL, 18446744073709551614UL, 9UL}};
        int i, j;
        (*g_1096) = l_1095;
        for (g_375 = (-2); (g_375 > 13); ++g_375)
        {
            if (l_1099)
                break;
        }
        (*g_212) = ((((*l_1095) < (func_33(l_1095, l_1100) && func_33(func_38(l_1101[2][6], (*g_411)), l_1100))) , l_1099) > l_1099);
        for (g_904 = 7; (g_904 <= 11); g_904 = safe_add_func_int64_t_s_s(g_904, 4))
        {
            int l_1104 = 0x09284800L;
            int *l_1105[4] = {(void*)0, &g_213, (void*)0, &g_213};
            int i;
            (*g_327) = ((*l_1095) | (*l_1095));
            l_1105[3] = func_38(l_1104, l_1104);
            return g_933[0];
        }
    }
    else
    {
        char l_1110 = 0xE2L;
        unsigned char *l_1114 = (void*)0;
        unsigned char **l_1113 = &l_1114;
        for (g_400 = 0; (g_400 < 26); g_400 = safe_add_func_int16_t_s_s(g_400, 7))
        {
            unsigned char ***l_1115 = &l_1113;
            int l_1118 = 0xFAB9B972L;
            l_1118 = (((((safe_add_func_uint16_t_u_u(l_1110, (((safe_add_func_int16_t_s_s((*g_220), (*l_1095))) <= (+(((*g_874) == ((*l_1115) = l_1113)) || ((&g_873 == l_1115) , (safe_mod_func_uint16_t_u_u(65533UL, (g_387[2][0] && l_1118))))))) , l_1110))) || (****g_505)) | (*l_1095)) != g_879) >= 0x7BL);
            return l_1110;
        }
    }
    l_1095 = l_1095;
    for (g_90 = 19; (g_90 > 7); --g_90)
    {
        short l_1121 = 0xF42CL;
        int *l_1122 = &g_37;
        l_1122 = (l_1121 , l_1122);
    }
    return (*l_1095);
}







static int func_2(const int p_3, unsigned long long p_4, const unsigned short p_5, char p_6)
{
    unsigned short l_11 = 1UL;
    int ****l_1083 = &g_971;
    if (func_9(l_11))
    {
        unsigned long long l_1079 = 2UL;
        int ****l_1082 = &g_971;
        int *l_1084 = &g_1085;
        unsigned char *l_1086 = &g_867;
        const int **l_1089 = (void*)0;
        const int *l_1091 = &g_213;
        (*g_212) = (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((((p_3 > 0xCA770175L) , &p_5) != (((*l_1086) = (safe_add_func_int32_t_s_s(l_1079, (safe_mul_func_int8_t_s_s((l_11 || 0L), (((*l_1084) = ((l_1082 != (p_3 , l_1083)) | l_1079)) , p_4)))))) , (*g_787))), p_5)), 4294967290UL));
        (*g_1090) = ((0x13CEC1B80A3BC1E4LL > ((safe_sub_func_int16_t_s_s(((0xC5L && 0xFFL) > (***g_218)), (*g_220))) , 1UL)) , &p_3);
        l_1091 = &p_3;
    }
    else
    {
        for (p_6 = (-11); (p_6 < 20); ++p_6)
        {
            int l_1094 = 0x1AC2DBA0L;
            return l_1094;
        }
    }
    return l_11;
}







static int func_9(int p_10)
{
    unsigned char l_17 = 0x09L;
    char l_133 = 0x78L;
    int *l_134 = (void*)0;
    int *l_1070 = (void*)0;
    l_1070 = func_12(l_17, func_18((func_20(func_25((safe_mod_func_int32_t_s_s(p_10, func_33(g_36, &g_37))), (l_133 == l_133), l_134, (safe_lshift_func_int8_t_s_u((~(safe_mul_func_int16_t_s_s(((p_10 || 0L) & 254UL), g_63[6][8]))), 3)), l_134), p_10, l_134, g_7) , p_10)), g_400, l_133);
    for (g_295 = 17; (g_295 >= 0); g_295 = safe_sub_func_uint16_t_u_u(g_295, 4))
    {
        if (p_10)
            break;
    }
    return p_10;
}







static int * func_12(int p_13, unsigned long long p_14, unsigned p_15, unsigned short p_16)
{
    unsigned l_445 = 0xB01CDCFFL;
    int **l_450 = (void*)0;
    long long l_451 = 9L;
    int l_459 = 0xE2D5EA77L;
    int *l_486 = &l_459;
    unsigned short l_509 = 0UL;
    unsigned ***l_530 = (void*)0;
    int *l_541 = &g_213;
    unsigned l_614[2][5][8] = {{{0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}}, {{0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}, {0xE2933A26L, 4294967291UL, 0xB6C20706L, 0xDEABE24BL, 4294967291UL, 0UL, 4294967291UL, 0xDEABE24BL}}};
    int *l_664 = &l_459;
    unsigned long long l_727[2];
    short l_829[1][4];
    long long *l_883 = &l_451;
    unsigned char **l_988 = (void*)0;
    const int **l_995[8][8] = {{&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}, {&g_347[0], &g_347[0], &g_347[2], &g_347[1], &g_347[0], &g_347[1], &g_347[2], &g_347[0]}};
    char ***l_1032 = &g_354[0];
    int *l_1046[9];
    long long l_1063[10][2][7] = {{{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}, {{1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}, {1L, 0x65D742A680A0A928LL, 0x363ED7200E65AD9ALL, 0xC16C5E8EB4D9D204LL, 0xB567C114F376A65ALL, 0L, 0x1357E075FBDD460BLL}}};
    int *l_1069[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_727[i] = 18446744073709551612UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_829[i][j] = (-1L);
    }
    for (i = 0; i < 9; i++)
        l_1046[i] = &l_459;
    for (i = 0; i < 1; i++)
        l_1069[i] = (void*)0;
    for (p_15 = 0; (p_15 >= 46); p_15++)
    {
        int *l_440 = (void*)0;
        return l_440;
    }
    if ((safe_mod_func_int8_t_s_s(((((((safe_div_func_uint8_t_u_u(func_18(l_445), (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(p_14, p_14)), (p_16 > (65534UL ^ l_445)))))) <= (l_450 != (void*)0)) , 0x66CB34F8L) == p_15) || 0xC8FD1A81L) <= l_451), g_400)))
    {
        const short l_458 = 0x2FBBL;
        int l_470 = 0xB695132CL;
        int l_482 = 0x85259C5DL;
        unsigned **l_512 = &g_508;
        unsigned *** const l_511 = &l_512;
        unsigned *** const *l_510 = &l_511;
        unsigned ***l_528 = &l_512;
        if ((l_459 = ((*g_411) = ((safe_add_func_uint16_t_u_u((((~((safe_rshift_func_uint8_t_u_u(((**g_219) , ((((g_215 <= (((safe_div_func_uint16_t_u_u(func_33((*g_326), &g_213), p_15)) == p_13) , g_375)) != p_15) == l_458) , p_15)), g_387[1][2])) != g_387[1][2])) >= p_14) != p_15), 0xCBA1L)) >= p_16))))
        {
            unsigned short l_500 = 0x3BADL;
            int *l_520 = &l_459;
            unsigned ***l_529[4];
            int i;
            for (i = 0; i < 4; i++)
                l_529[i] = &l_512;
            for (p_13 = (-26); (p_13 == 2); p_13 = safe_add_func_uint64_t_u_u(p_13, 1))
            {
                unsigned long long l_475 = 18446744073709551615UL;
                unsigned l_485 = 4294967286UL;
                const int *l_516 = &g_348;
                int l_518 = (-7L);
                int *l_519 = &l_470;
                unsigned short ***l_538 = &g_159;
                unsigned short *** const *l_537 = &l_538;
                for (g_37 = 0; (g_37 <= 3); g_37 += 1)
                {
                    int l_493 = 0x08D41BACL;
                    int i, j;
                    if (((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((&g_391[g_37][g_37] == (((safe_add_func_uint64_t_u_u((!l_470), 18446744073709551615UL)) || ((l_482 = (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_470, ((g_213 < l_475) & (safe_div_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s((**g_219), (safe_rshift_func_int16_t_s_u((**g_219), func_48(p_15))))) & g_375) | g_295) , g_387[3][3]) , 0x3FL), p_15))))), p_15))) <= p_13)) , (void*)0)), 0x21L)), 1L)) | 252UL))
                    {
                        int **l_487 = &l_486;
                        int **l_488 = &g_36;
                        (*g_212) = ((safe_rshift_func_uint16_t_u_u((g_68[4][4][0] || g_348), 4)) & 0L);
                        if (l_485)
                            break;
                        (*l_488) = ((*l_487) = l_486);
                    }
                    else
                    {
                        long long *l_496 = &l_451;
                        const int l_499 = 9L;
                        char *l_515 = &g_215;
                        const int **l_517 = &l_516;
                        (*l_486) = ((safe_lshift_func_int16_t_s_u((func_48(l_475) & l_493), 6)) != (((*l_496) = (safe_add_func_int16_t_s_s(0xC198L, (l_458 & l_482)))) <= (0xC993D68F4F2950D2LL ^ g_387[0][4])));
                        (*l_486) = ((safe_add_func_int64_t_s_s((func_48((l_499 , func_48(((l_470 = (l_500 != 0xF14DL)) > ((0xE8A35CA68B6D3BCDLL == ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((g_505 != ((l_509 >= 6L) , l_510)) != (safe_rshift_func_int8_t_s_u((((*l_515) = l_500) <= 0x3EL), g_295))), 5)), p_16)) , p_15)) , p_13))))) , g_295), 18446744073709551608UL)) > (**g_219));
                        (*l_517) = l_516;
                    }
                    for (l_485 = 0; (l_485 <= 3); l_485 += 1)
                    {
                        l_518 = (*l_486);
                        (*l_486) = p_14;
                    }
                    for (g_295 = 3; (g_295 >= 0); g_295 -= 1)
                    {
                        return (*g_326);
                    }
                    for (l_485 = 0; (l_485 <= 3); l_485 += 1)
                    {
                        int **l_521 = &l_519;
                        unsigned ***l_527 = &l_512;
                        unsigned ****l_526[4] = {&l_527, &l_527, &l_527, &l_527};
                        unsigned char *l_531[6] = {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85};
                        char *l_534 = &g_215;
                        int i;
                        (*l_521) = &p_13;
                        (*l_520) = ((((p_16 = ((safe_lshift_func_uint8_t_u_u((l_482 = (g_85 = (safe_lshift_func_uint16_t_u_u(((l_529[3] = (l_528 = &l_512)) != ((**l_521) , l_530)), 10)))), 7)) , (0x06L <= (safe_lshift_func_int8_t_s_u(((*l_534) = ((void*)0 != &g_354[0])), (p_14 , (g_63[8][6] ^ ((safe_add_func_uint16_t_u_u((l_482 = (((((*l_520) > p_14) , (-4L)) | 0xECL) , 65533UL)), p_14)) || (*l_520))))))))) , p_16) , (void*)0) != l_537);
                    }
                }
                if (p_16)
                    break;
            }
        }
        else
        {
            int **l_540 = &l_486;
            (*l_540) = &p_13;
            (*l_540) = &p_13;
            (*l_540) = &l_459;
        }
        return l_541;
    }
    else
    {
        char **l_548 = &g_355[6];
        int l_557[10][3][5] = {{{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}, {{0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}, {0xE4242618L, 0xE4242618L, 0xD8F6CA63L, 0xE4242618L, 0xE4242618L}}};
        int * const l_558 = &l_557[2][0][3];
        short *l_590[8][3][5] = {{{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}, {{&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}, {&g_387[1][4], &g_400, &g_295, &g_387[3][0], &g_387[0][3]}}};
        int l_608 = (-5L);
        unsigned long long l_627 = 6UL;
        unsigned long long *l_652[9] = {&g_247, &g_247, &g_247, &g_247, &g_247, &g_247, &g_247, &g_247, &g_247};
        unsigned **l_655 = &g_508;
        int *l_703 = (void*)0;
        const unsigned long long *l_712 = (void*)0;
        int *l_755 = &l_557[1][0][4];
        int l_865 = 1L;
        int i, j, k;
        for (l_451 = (-29); (l_451 > (-4)); ++l_451)
        {
            int **l_544 = (void*)0;
            int **l_545 = &g_36;
            char ***l_549 = &g_354[0];
            char **l_550 = (void*)0;
            unsigned * const *l_569 = &g_508;
            unsigned * const ** const l_568 = &l_569;
            short l_609 = 0x98D3L;
            int *l_640 = &l_557[6][1][0];
            unsigned long long *l_650[9] = {&g_247, (void*)0, &g_247, (void*)0, &g_247, (void*)0, &g_247, (void*)0, &g_247};
            unsigned long long **l_651[3][10][7] = {{{&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}}, {{&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}}, {{&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}, {&l_650[8], &l_650[8], &l_650[0], (void*)0, &l_650[0], &l_650[1], (void*)0}}};
            unsigned **l_654 = (void*)0;
            unsigned ***l_653 = &l_654;
            int i, j, k;
            if ((((**l_548) = ((**g_507) != ((*l_541) = ((*l_558) = ((func_33(((*l_545) = &p_13), (((((*l_486) = (*l_541)) , 0x73DD93034E3B226DLL) >= 9UL) , ((((safe_add_func_uint64_t_u_u(g_348, (((*l_549) = l_548) != l_550))) , ((safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((&g_7 == &g_7), g_213)) , l_557[2][0][3]) < (*g_508)), (*l_486))) || (**g_219)) >= p_15), p_16)) >= (**g_219))) || p_14) , l_558))) , p_13) < g_247))))) , 0xBF9300B0L))
            {
                unsigned char l_561 = 7UL;
                unsigned **l_571 = &g_508;
                unsigned ***l_570[5][9] = {{&l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571}, {&l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571}, {&l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571}, {&l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571}, {&l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571, &l_571}};
                unsigned short *l_572[9] = {(void*)0, (void*)0, &l_509, (void*)0, (void*)0, &l_509, (void*)0, (void*)0, &l_509};
                unsigned l_573 = 0xFD576F8DL;
                int l_597 = 2L;
                unsigned char *l_639 = (void*)0;
                int i, j;
                (*g_36) = (safe_mul_func_uint16_t_u_u((((0x4CL && (p_15 | l_561)) & l_561) , ((p_15 | (safe_sub_func_int8_t_s_s((!(safe_add_func_uint64_t_u_u(g_63[4][8], (safe_rshift_func_uint8_t_u_s(((((**g_219) = (***g_218)) >= (((p_16 = (((*g_508) , l_568) != l_570[2][7])) != p_15) == p_13)) <= g_400), 2))))), l_561))) < p_15)), l_573));
                for (p_16 = 0; (p_16 < 15); p_16 = safe_add_func_uint8_t_u_u(p_16, 3))
                {
                    long long *l_578 = &g_579;
                    short *l_589 = &g_90;
                    int l_595 = 0x8EE5F808L;
                    int *l_600 = &g_213;
                    (*l_545) = func_38(p_15, ((((*g_508) = (***g_506)) ^ (safe_mul_func_uint64_t_u_u(g_63[4][2], ((*l_578) = ((void*)0 != &p_13))))) , p_16));
                    for (g_247 = 0; (g_247 >= 24); g_247 = safe_add_func_uint64_t_u_u(g_247, 2))
                    {
                        unsigned char *l_596 = &g_85;
                        l_597 = ((*l_541) = (((*l_596) = ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((-1L), ((**l_545) , l_573))) , (+(safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(p_15)), ((**l_548) = ((((**g_507) = 0x94B65F6DL) , (((*g_219) = l_589) != l_590[5][2][0])) , (safe_div_func_uint64_t_u_u((+(g_215 == (safe_lshift_func_uint16_t_u_s(((*l_558) != g_215), 1)))), l_595)))))))) ^ (*l_558)), 1UL)) , l_595)) <= p_16));
                    }
                    p_13 = p_14;
                    for (g_295 = (-4); (g_295 <= 18); g_295 = safe_add_func_uint32_t_u_u(g_295, 5))
                    {
                        (*g_212) = ((*g_342) != l_600);
                        if (l_573)
                            continue;
                    }
                }
                for (p_13 = 1; (p_13 <= 4); p_13 += 1)
                {
                    unsigned l_610 = 5UL;
                    const unsigned short l_622 = 65535UL;
                    unsigned **l_629 = (void*)0;
                    int i;
                }
                (**l_545) = ((&l_544 != ((5UL ^ (safe_mul_func_uint16_t_u_u((*l_486), (safe_unary_minus_func_uint8_t_u((0xB82B0836L | (p_14 , (*l_640)))))))) , (void*)0)) ^ 0L);
            }
            else
            {
                (*l_545) = &l_557[2][0][3];
            }
            (*l_541) = (p_14 , ((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((safe_sub_func_int64_t_s_s((-1L), (((*g_220) = (g_90 < 9L)) , (p_14 = (safe_mul_func_int16_t_s_s(((**l_545) = 0x5BABL), g_649)))))) , &g_247) == (l_652[8] = &g_247)), (g_247 = ((((*l_653) = &g_508) != l_655) == (**g_507))))), 0xCDC3FA1BL)) , (*g_212)));
            for (g_213 = 0; (g_213 < 27); g_213 = safe_add_func_uint32_t_u_u(g_213, 8))
            {
                for (l_627 = 0; l_627 < 10; l_627 += 1)
                {
                    for (g_85 = 0; g_85 < 3; g_85 += 1)
                    {
                        for (p_14 = 0; p_14 < 5; p_14 += 1)
                        {
                            l_557[l_627][g_85][p_14] = 1L;
                        }
                    }
                }
                (*l_545) = &p_13;
            }
        }
        for (p_14 = 27; (p_14 != 18); p_14 = safe_sub_func_int16_t_s_s(p_14, 2))
        {
            const int l_662 = 0xAF8D1679L;
            int l_700 = 0xAD9C34C9L;
            unsigned char *l_708 = &g_85;
            unsigned short ***l_716 = (void*)0;
            unsigned short ****l_715 = &l_716;
            unsigned short l_761 = 0UL;
            short l_798 = 0x1A1FL;
            unsigned long long l_872[8][1][6] = {{{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}, {{18446744073709551608UL, 0x62F0B4DB5A663DCFLL, 18446744073709551615UL, 0x97BF88DEDF4D43B3LL, 0xC91BF2EDE0765D78LL, 0x97BF88DEDF4D43B3LL}}};
            int i, j, k;
        }
    }
    p_13 = ((*l_486) = ((*l_541) = ((safe_sub_func_int64_t_s_s(((*l_883) = g_215), p_16)) | g_387[1][2])));
    for (p_16 = 8; (p_16 == 46); p_16 = safe_add_func_int8_t_s_s(p_16, 2))
    {
        unsigned char l_895 = 5UL;
        int l_896[9];
        int l_897[2];
        char ***l_913 = &g_354[0];
        unsigned **l_954 = &g_508;
        unsigned ***l_953 = &l_954;
        short l_979 = 6L;
        int *l_985[8] = {&g_37, &g_37, (void*)0, &g_37, &g_37, (void*)0, &g_37, &g_37};
        int *l_1049 = &g_37;
        short l_1067 = 0x381CL;
        int i;
        for (i = 0; i < 9; i++)
            l_896[i] = 0xBCFE06B0L;
        for (i = 0; i < 2; i++)
            l_897[i] = (-1L);
        if (((void*)0 == (*g_506)))
        {
            char l_893 = (-1L);
            unsigned long long l_894[6] = {0xA426ADD889F86644LL, 1UL, 0xA426ADD889F86644LL, 1UL, 0xA426ADD889F86644LL, 1UL};
            int *l_898 = (void*)0;
            char l_902 = 0xC6L;
            unsigned l_921 = 4294967292UL;
            unsigned char *l_948[1][5][4] = {{{&g_85, (void*)0, &g_85, (void*)0}, {&g_85, (void*)0, &g_85, (void*)0}, {&g_85, (void*)0, &g_85, (void*)0}, {&g_85, (void*)0, &g_85, (void*)0}, {&g_85, (void*)0, &g_85, (void*)0}}};
            short l_967 = 0L;
            int *** const l_974[5][7] = {{(void*)0, &l_450, &l_450, &l_450, (void*)0, &l_450, &l_450}, {(void*)0, &l_450, &l_450, &l_450, (void*)0, &l_450, &l_450}, {(void*)0, &l_450, &l_450, &l_450, (void*)0, &l_450, &l_450}, {(void*)0, &l_450, &l_450, &l_450, (void*)0, &l_450, &l_450}, {(void*)0, &l_450, &l_450, &l_450, (void*)0, &l_450, &l_450}};
            int i, j, k;
            for (g_864 = (-1); (g_864 <= 11); g_864 = safe_add_func_uint16_t_u_u(g_864, 7))
            {
                int *l_888 = &l_459;
                int **l_889 = (void*)0;
                (*g_890) = l_888;
                l_898 = func_38(l_897[1], l_897[0]);
                for (p_14 = 1; (p_14 <= 9); p_14 += 1)
                {
                    int *l_900 = &l_459;
                    char ***l_912 = &g_354[0];
                    unsigned long long *l_917 = (void*)0;
                    unsigned long long *l_918[10] = {&l_727[0], &l_894[2], &l_727[1], &l_727[1], &l_894[2], &l_727[0], &l_894[2], &l_727[1], &l_727[1], &l_894[2]};
                    long long l_928[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_928[i] = 1L;
                    for (p_13 = 0; (p_13 <= 9); p_13 += 1)
                    {
                        int *l_899 = &l_459;
                        return l_898;
                    }
                }
            }
            (*g_301) = &p_13;
            (*g_903) = (p_16 != (-1L));
            for (g_864 = (-2); (g_864 < 42); g_864 = safe_add_func_uint32_t_u_u(g_864, 1))
            {
                unsigned long long l_955[7][1] = {{0x6492B3BA1DB6BEF8LL}, {0x6492B3BA1DB6BEF8LL}, {0x6492B3BA1DB6BEF8LL}, {0x6492B3BA1DB6BEF8LL}, {0x6492B3BA1DB6BEF8LL}, {0x6492B3BA1DB6BEF8LL}, {0x6492B3BA1DB6BEF8LL}};
                int ****l_973 = &g_971;
                unsigned long long *l_977 = &l_955[0][0];
                int l_978 = 0x401FA679L;
                unsigned short *l_984 = &l_509;
                int i, j;
                (*l_486) = ((safe_sub_func_uint64_t_u_u(g_864, ((((*g_903) = (~p_14)) != p_15) > 0x00L))) | func_48((((safe_sub_func_int16_t_s_s(((g_247 = 18446744073709551615UL) <= (safe_mod_func_int64_t_s_s((p_14 <= (safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((l_948[0][4][3] != (((*l_883) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_664) | (((void*)0 != l_953) & 0xE64DL)), p_15)), (**g_219)))) , l_948[0][4][3])), p_13)), (*l_486)))), g_933[0]))), l_955[0][0])) && p_16) & 4294967287UL)));
                for (l_893 = 0; (l_893 <= 3); l_893++)
                {
                    unsigned *l_963 = &l_921;
                    int *l_964 = &l_896[6];
                    l_964 = func_38((*l_486), (((safe_rshift_func_int16_t_s_u(l_896[6], 1)) > (safe_mod_func_uint16_t_u_u(func_18(((g_904 = p_14) == (l_897[1] = func_18(((((p_15 ^ func_18(l_895)) != (safe_unary_minus_func_uint32_t_u(((*l_963) = l_895)))) & (p_14 , p_16)) , p_16))))), l_955[0][0]))) >= g_7));
                    for (g_85 = 0; (g_85 <= 0); g_85 += 1)
                    {
                        int i;
                        if (l_894[(g_85 + 1)])
                            break;
                        return l_898;
                    }
                }
                p_13 = (((p_16 , (g_904 = ((*l_486) = ((safe_mod_func_int32_t_s_s(func_18((g_375 , l_967)), p_14)) , (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((((*l_973) = g_971) != (p_14 , l_974[2][4])) != (safe_add_func_int64_t_s_s(((((g_247 = ((*l_977) = g_879)) && g_85) >= p_15) , (-10L)), g_213))))) || 0x861FBD6243AAE4E7LL), (*l_486))))))) < l_978) == (-1L));
                (*l_664) = (((*l_541) = (**g_301)) > (((*l_984) = ((l_979 , ((safe_add_func_uint64_t_u_u((p_14 != (g_68[5][7][0] > (safe_sub_func_int16_t_s_s(((*g_220) = 0x3A33L), l_955[0][0])))), ((*l_664) < 0xE555E2F2L))) | p_13)) <= (*g_508))) | 0L));
            }
        }
        else
        {
            int *l_986 = &l_897[0];
            l_985[1] = ((g_63[4][8] = p_13) , (void*)0);
            l_986 = &p_13;
        }
    }
    return l_1069[0];
}







static unsigned long long func_18(unsigned p_19)
{
    int l_406[10][2] = {{4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}, {4L, 0x241FAAC6L}};
    int l_409[7] = {0x86035EBBL, 0x86035EBBL, 1L, 0x86035EBBL, 0x86035EBBL, 1L, 0x86035EBBL};
    unsigned l_410[2];
    unsigned char *l_418 = &g_85;
    const unsigned long long * const l_425 = &g_247;
    unsigned short *l_426 = &g_63[4][8];
    unsigned *l_430 = &g_68[1][4][1];
    int l_435 = (-8L);
    int *l_437 = &g_37;
    int i, j;
    for (i = 0; i < 2; i++)
        l_410[i] = 0x0A1B0E9AL;
    for (g_213 = 0; (g_213 > (-17)); --g_213)
    {
        short l_401 = 0x2152L;
        (*g_411) = ((p_19 , (func_48((l_409[4] = ((safe_mul_func_uint8_t_u_u(252UL, (((((void*)0 != (*g_158)) || g_400) , l_401) || p_19))) == (safe_mul_func_uint16_t_u_u(func_48(((safe_lshift_func_uint16_t_u_u(l_406[2][1], ((safe_mul_func_int16_t_s_s((***g_218), (*g_220))) > p_19))) && g_215)), 0xD3DCL))))) & l_401)) , l_410[0]);
    }
    (*g_212) = func_33(&l_409[3], func_38(((l_406[3][1] > (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((**g_219) = (***g_218)), l_406[8][1])), 8))) & ((*l_418) = 0UL)), (safe_sub_func_uint32_t_u_u(p_19, (!(safe_sub_func_uint16_t_u_u(((*l_426) = (safe_div_func_uint8_t_u_u(p_19, (g_68[4][8][0] || (l_425 != l_425))))), 65527UL)))))));
    (*g_212) = (p_19 & (safe_unary_minus_func_uint8_t_u(((safe_mul_func_uint8_t_u_u((p_19 <= ((*l_430) = (l_409[4] <= ((**g_219) = 3L)))), g_37)) | (1L && (l_435 = ((~((*l_426) = (l_406[2][1] , p_19))) && ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_19, l_410[1])), l_410[0])) <= l_406[9][1]))))))));
    for (g_90 = 0; (g_90 <= 3); g_90 += 1)
    {
        int i;
        l_437 = &l_409[(g_90 + 3)];
        return l_409[(g_90 + 3)];
    }
    return g_348;
}







static char func_20(int p_21, unsigned p_22, int * p_23, unsigned long long p_24)
{
    int l_323[2];
    unsigned short *l_333 = &g_63[4][8];
    short ***l_370 = &g_219;
    int **l_395 = &g_327;
    int i;
    for (i = 0; i < 2; i++)
        l_323[i] = 0xC964B708L;
    for (g_85 = 0; (g_85 == 25); g_85 = safe_add_func_int32_t_s_s(g_85, 7))
    {
        unsigned l_338 = 1UL;
        if ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(func_48(l_323[1]), p_24)), p_22)))
        {
            unsigned l_328 = 0xE80A53A8L;
            unsigned short *l_334[5] = {(void*)0, &g_63[4][8], (void*)0, &g_63[4][8], (void*)0};
            unsigned *l_335 = (void*)0;
            unsigned *l_336 = (void*)0;
            unsigned *l_337[9] = {&g_68[7][8][1], (void*)0, &g_68[7][8][1], (void*)0, &g_68[7][8][1], (void*)0, &g_68[7][8][1], (void*)0, &g_68[7][8][1]};
            char *l_339 = &g_215;
            int i;
            for (g_295 = 0; (g_295 <= 1); g_295 += 1)
            {
                int **l_324 = (void*)0;
                int **l_325 = &g_36;
                (*g_326) = ((*l_325) = p_23);
                return l_328;
            }
            (*g_327) = (l_323[0] && (((safe_mul_func_int16_t_s_s(((func_48(((*g_327) = l_328)) | (p_22 = ((safe_sub_func_uint32_t_u_u(g_68[4][4][0], (g_68[2][2][0] , l_328))) || (l_333 != l_334[4])))) > ((*l_339) = (((l_338 ^ p_21) || g_295) != l_323[1]))), 0xD980L)) || p_22) >= g_7));
            for (l_328 = (-9); (l_328 <= 22); l_328 = safe_add_func_uint16_t_u_u(l_328, 1))
            {
                (*g_327) = ((*g_212) = l_323[1]);
            }
        }
        else
        {
            const int *l_349[1];
            int l_364 = (-1L);
            unsigned ** const *l_365 = (void*)0;
            unsigned ***l_367 = (void*)0;
            long long l_390 = 0xF3DF780B903BE136LL;
            int i;
            for (i = 0; i < 1; i++)
                l_349[i] = &g_37;
            (*g_342) = p_23;
            for (g_295 = 2; (g_295 >= 0); g_295 -= 1)
            {
                char ** const l_352 = (void*)0;
                short l_363 = 0xB43AL;
                int i;
                for (g_90 = 0; (g_90 <= 2); g_90 += 1)
                {
                    const int *l_345 = (void*)0;
                    int **l_350 = &g_36;
                    int **l_351 = &g_327;
                    for (g_247 = 0; (g_247 <= 2); g_247 += 1)
                    {
                        volatile int **l_344 = &g_59[1];
                        const int **l_346[7][10] = {{&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}, {&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}, {&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}, {&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}, {&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}, {&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}, {&l_345, &l_345, (void*)0, &l_345, &l_345, &l_345, &l_345, &l_345, (void*)0, &l_345}};
                        int i, j;
                        (*l_344) = g_59[g_90];
                        l_349[0] = (g_347[0] = l_345);
                    }
                    (*l_351) = ((*l_350) = (*g_342));
                }
                for (g_90 = 2; (g_90 >= 0); g_90 -= 1)
                {
                    volatile int **l_358 = &g_59[0];
                    int i;
                    for (g_215 = 2; (g_215 >= 0); g_215 -= 1)
                    {
                        (*g_353) = l_352;
                        (*g_212) = (safe_mul_func_int8_t_s_s(p_21, p_21));
                    }
                    (*l_358) = g_59[g_295];
                }
                if (l_338)
                {
                    unsigned short **l_361[1][1];
                    unsigned short ***l_362 = &l_361[0][0];
                    unsigned ** const **l_366 = &l_365;
                    int l_369 = 0L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_361[i][j] = &g_160;
                    }
                    l_363 = (safe_sub_func_uint32_t_u_u((((*l_362) = l_361[0][0]) == (*g_158)), p_24));
                    if ((l_364 || func_48((((*l_366) = l_365) != l_367))))
                    {
                        long long l_368 = 0L;
                        (*g_212) = (g_295 || g_90);
                        if (l_368)
                            break;
                        if (l_338)
                            break;
                    }
                    else
                    {
                        if (l_369)
                            break;
                        if (l_338)
                            continue;
                        (*g_212) = (&g_219 == l_370);
                    }
                    if (l_338)
                        break;
                }
                else
                {
                    short *l_386 = (void*)0;
                    unsigned l_388 = 5UL;
                    unsigned *l_389 = &l_338;
                    int **l_392 = &g_327;
                    l_364 = (safe_sub_func_uint64_t_u_u(2UL, (((void*)0 == l_370) , (func_48(((g_37 ^ (safe_sub_func_int8_t_s_s((g_375 = p_24), ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((func_48(l_323[1]) && (safe_mod_func_uint32_t_u_u(g_215, (safe_mod_func_int8_t_s_s(((((*l_389) = ((safe_lshift_func_int16_t_s_s((g_387[1][2] = ((**g_219) = (***g_218))), l_388)) <= 0L)) | l_323[1]) || l_388), p_24))))), l_323[0])), l_363)) | p_21)))) , p_21)) , g_68[1][0][0]))));
                    (*g_212) = (l_390 | 9UL);
                    (*l_392) = p_23;
                }
            }
            (*g_394) = &l_364;
            return l_338;
        }
        (*g_327) = l_323[0];
    }
    (*l_395) = (void*)0;
    return p_22;
}







static int func_25(short p_26, unsigned short p_27, int * p_28, const long long p_29, int * p_30)
{
    long long l_145 = 0x4486533915DCBD5DLL;
    int l_157 = 0xB6A621C5L;
    const unsigned char * const l_280[7] = {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85};
    unsigned short **l_285 = &g_160;
    int i;
    for (p_27 = (-15); (p_27 < 11); ++p_27)
    {
        unsigned short l_141 = 1UL;
        (*g_142) = func_38(func_48(l_141), g_63[8][5]);
    }
    l_157 = ((safe_mul_func_int8_t_s_s(p_27, l_145)) != ((safe_mod_func_int32_t_s_s((!(safe_lshift_func_int8_t_s_u((((safe_mod_func_uint64_t_u_u(g_68[2][8][1], g_63[4][8])) ^ (((((func_48((**g_52)) != (safe_mul_func_int8_t_s_s(5L, (safe_unary_minus_func_uint64_t_u(((g_68[4][4][0] && (g_63[6][4] & l_145)) >= 0L)))))) & g_63[6][7]) ^ p_27) , 0xFF4B716CAE9C981CLL) || 1L)) >= g_63[6][0]), l_145))), p_29)) != l_145));
    for (p_26 = 2; (p_26 >= 0); p_26 -= 1)
    {
        unsigned short ***l_161[9] = {&g_159, &g_159, &g_159, &g_159, &g_159, &g_159, &g_159, &g_159, &g_159};
        int l_165 = (-1L);
        int *l_221 = &l_165;
        short ***l_252 = &g_219;
        char l_266 = 0xBCL;
        unsigned l_279 = 0xC9719984L;
        int **l_315 = &g_36;
        int **l_316 = &l_221;
        int i;
        for (p_27 = 0; (p_27 <= 2); p_27 += 1)
        {
            unsigned short ***l_162 = &g_159;
            unsigned short ****l_163 = &l_161[1];
            int l_164 = 0xDEA6424EL;
            int l_166[6][4];
            int **l_167 = &g_36;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                    l_166[i][j] = 0L;
            }
            if (g_63[(p_26 + 2)][(p_26 + 4)])
                break;
            l_166[5][0] = ((l_165 = (l_164 = func_33(func_38(((l_157 = g_90) <= (((g_158 == ((*l_163) = (l_162 = l_161[7]))) != g_63[(p_26 + 2)][(p_26 + 4)]) >= l_145)), g_63[(p_26 + 2)][(p_26 + 4)]), p_30))) == g_63[6][5]);
            (*l_167) = (*g_52);
            if (((safe_rshift_func_int16_t_s_s(g_68[6][0][0], 15)) == (p_30 == p_30)))
            {
                long long l_176 = 0xBD5E56AD494AE63FLL;
                int ***l_185 = &l_167;
                short l_230 = (-6L);
                for (l_145 = 7; (l_145 >= 0); l_145 -= 1)
                {
                    unsigned short l_195 = 8UL;
                    short *l_217 = (void*)0;
                    short ** const l_216 = &l_217;
                    unsigned char *l_226 = &g_85;
                    int l_231 = 0xCE7AB66AL;
                    int i, j, k;
                    for (g_37 = 3; (g_37 <= 8); g_37 += 1)
                    {
                        int ***l_184 = &l_167;
                        int ****l_183 = &l_184;
                        unsigned char *l_186 = &g_85;
                    }
                }
            }
            else
            {
                p_28 = func_38(g_60, l_157);
                if ((*p_28))
                    break;
            }
            for (g_215 = 0; (g_215 <= 2); g_215 += 1)
            {
                if (l_157)
                    break;
            }
        }
        for (l_145 = 2; (l_145 >= 0); l_145 -= 1)
        {
            unsigned char *l_234[9][4] = {{&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}, {&g_85, (void*)0, &g_85, &g_85}};
            int l_235[4] = {(-1L), (-4L), (-1L), (-4L)};
            int * volatile l_268 = &l_235[2];
            int i, j;
            (*l_221) = ((safe_add_func_int64_t_s_s(((*l_221) ^ (l_235[2] = l_157)), p_27)) && g_63[3][5]);
            for (g_90 = 0; (g_90 <= 2); g_90 += 1)
            {
                char *l_244 = &g_215;
                unsigned long long *l_245 = (void*)0;
                unsigned long long *l_246 = &g_247;
                unsigned short l_262 = 1UL;
                int i;
                if ((func_48(p_26) , ((*g_212) = (safe_sub_func_uint16_t_u_u((((p_29 && (safe_rshift_func_uint16_t_u_s((p_27 | p_27), p_27))) , ((((*l_246) = (g_68[5][6][0] || ((*l_244) = ((safe_div_func_int8_t_s_s(3L, ((((safe_mul_func_int8_t_s_s((((((((g_59[g_90] != p_28) , (void*)0) != (void*)0) <= (-1L)) , p_27) <= g_68[3][2][1]) == p_29), g_90)) >= g_215) ^ p_26) || 0xEC173A89DF1001EELL))) , 0xF1L)))) , l_235[2]) != l_157)) <= g_90), 8L)))))
                {
                    short l_267 = 0x2BC9L;
                    int ***l_292 = (void*)0;
                    int ****l_291 = &l_292;
                    if ((safe_rshift_func_uint16_t_u_u((+(safe_sub_func_int64_t_s_s((0L && ((void*)0 != l_252)), g_85))), 1)))
                    {
                        int **l_253 = &g_36;
                        unsigned l_265[8] = {0UL, 18446744073709551606UL, 0UL, 18446744073709551606UL, 0UL, 18446744073709551606UL, 0UL, 18446744073709551606UL};
                        int i, j, k;
                        (*l_253) = p_28;
                        (*l_221) = ((g_37 != ((g_68[l_145][(g_90 + 2)][p_26] = ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_262, (safe_sub_func_uint64_t_u_u(((*l_246) = g_85), (+g_37))))), l_265[0])), func_48(l_235[2]))) <= ((((((l_235[2] || (!((l_266 , l_267) , p_29))) & g_215) >= 0xAABE31B9L) , p_29) & g_37) & p_26))) > 0L)) , p_29);
                        (*l_221) = func_48(p_27);
                    }
                    else
                    {
                        return p_27;
                    }
                    for (l_157 = 0; (l_157 <= 0); l_157 += 1)
                    {
                        int i;
                        l_268 = g_106[l_157];
                        (*l_221) = (((0UL == (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((**g_219), ((safe_mod_func_uint8_t_u_u((0xD8E3870AL <= ((l_279 , l_280[1]) != l_280[1])), (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_27 = ((void*)0 == l_285)), p_26)), (*g_220))))) ^ p_29))) & 5UL) && p_29) & g_68[4][4][0]), p_29)), p_29))) , (*g_212)) <= 4294967295UL);
                        (*l_221) = (-1L);
                        (*l_221) = (g_37 & (((*l_246) = ((l_157 < (safe_unary_minus_func_uint8_t_u((*l_268)))) == 0x78A9L)) , (6L & p_27)));
                    }
                    for (l_267 = 0; (l_267 < 4); l_267 = safe_add_func_int64_t_s_s(l_267, 1))
                    {
                        int ****l_293 = &l_292;
                        short *l_294 = &g_295;
                        (*l_268) = (safe_add_func_uint16_t_u_u(l_145, ((*l_294) = (l_291 != l_293))));
                    }
                }
                else
                {
                    char l_300 = 0L;
                    for (l_266 = 24; (l_266 == 23); l_266--)
                    {
                        (*l_221) = ((*l_268) = (((*l_268) | ((p_27 , g_59[g_90]) != (void*)0)) , (safe_sub_func_uint16_t_u_u(p_27, func_48(l_300)))));
                        (*l_268) = 0x301DDF3DL;
                        (*g_301) = p_28;
                    }
                }
                for (g_37 = (-18); (g_37 != 17); ++g_37)
                {
                    unsigned char l_305 = 0x73L;
                    unsigned *l_306 = (void*)0;
                    unsigned *l_307 = (void*)0;
                    unsigned *l_308 = (void*)0;
                    int l_309 = 0xB396C4F8L;
                    (*l_221) = ((g_63[4][8] = p_26) & (g_213 <= (l_309 = (safe_unary_minus_func_int32_t_s((func_48(((*l_221) = l_157)) , (l_305 , l_305)))))));
                    return g_68[4][4][0];
                }
            }
            for (g_215 = 0; (g_215 <= 2); g_215 += 1)
            {
                int l_310 = (-10L);
                int i;
                if (l_310)
                    break;
                (*l_268) = (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((**g_219), 6)), l_157));
                (*l_268) = p_29;
            }
        }
        (*l_316) = ((*l_315) = &l_165);
        for (l_145 = 2; (l_145 >= 0); l_145 -= 1)
        {
        }
    }
    return g_68[6][0][0];
}







static int func_33(int * p_34, int * const p_35)
{
    unsigned char l_41 = 1UL;
    int **l_127 = &g_36;
    unsigned short * const l_131[6][2][4] = {{{&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}, {&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}}, {{&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}, {&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}}, {{&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}, {&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}}, {{&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}, {&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}}, {{&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}, {&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}}, {{&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}, {&g_63[4][0], &g_63[1][4], &g_63[3][6], (void*)0}}};
    unsigned short * const *l_130[5][7] = {{&l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2]}, {&l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2]}, {&l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2]}, {&l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2]}, {&l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2], &l_131[1][0][2], &l_131[4][0][1], &l_131[1][0][2]}};
    unsigned short * const **l_132 = &l_130[1][0];
    int i, j, k;
    (*l_127) = func_38(l_41, l_41);
    (*l_132) = (((**l_127) <= ((void*)0 == p_34)) , l_130[3][0]);
    return (**l_127);
}







static int * func_38(unsigned char p_39, int p_40)
{
    int l_61 = 0x7220B739L;
    unsigned char l_108 = 0xF8L;
    unsigned **l_120 = (void*)0;
    unsigned l_121 = 0x2BFDB46CL;
    int *l_126 = &g_37;
    for (p_39 = 0; (p_39 != 25); ++p_39)
    {
        unsigned short *l_62 = &g_63[4][8];
        int *l_65 = &l_61;
        int **l_64 = &l_65;
        int ***l_66 = &l_64;
        unsigned *l_67 = &g_68[4][4][0];
        int **l_69[10][6][4] = {{{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}, {{&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}, {&l_65, &l_65, &l_65, &g_36}}};
        int i, j, k;
    }
    p_40 = func_48(p_40);
    for (p_40 = (-8); (p_40 == (-14)); p_40 = safe_sub_func_int64_t_s_s(p_40, 1))
    {
        int *l_72 = (void*)0;
        int **l_73 = &g_36;
        if (l_61)
            break;
        (*l_73) = l_72;
    }
    for (p_40 = 7; (p_40 == (-7)); p_40 = safe_sub_func_uint8_t_u_u(p_40, 6))
    {
        unsigned char *l_84 = &g_85;
        int **l_88 = &g_36;
        short *l_89 = &g_90;
        if ((safe_sub_func_uint32_t_u_u((((*l_84) = (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0xC035584DL, ((safe_lshift_func_int8_t_s_u(g_7, 1)) && (g_68[4][4][0] , p_40)))), 0))) >= (func_48((((*l_89) = (((safe_mod_func_uint64_t_u_u(((void*)0 != l_88), p_40)) == g_63[3][2]) || p_39)) != p_40)) , l_61)), g_63[4][8])))
        {
            long long l_105[2];
            int *l_107[9] = {&l_61, &l_61, &l_61, &l_61, &l_61, &l_61, &l_61, &l_61, &l_61};
            int i;
            for (i = 0; i < 2; i++)
                l_105[i] = 3L;
            l_61 = (safe_mul_func_uint8_t_u_u((l_61 <= p_40), (!(g_85 && (p_40 , (((g_68[4][4][0] ^ (((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_63[3][2], l_61)), (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(func_48(p_40), p_40)), p_39)), p_40)) | g_68[4][4][0]), l_105[0])))) <= 0xCBL) || 0x3BL)) , g_63[8][4]) , g_68[4][4][0]))))));
            if (l_108)
                continue;
        }
        else
        {
            for (l_108 = 0; (l_108 <= 0); l_108 += 1)
            {
                int *l_109 = &g_37;
                return l_109;
            }
            return &g_37;
        }
        (*l_88) = (func_48(p_39) , &p_40);
        for (g_90 = 0; (g_90 == 10); ++g_90)
        {
            for (p_39 = 0; (p_39 >= 10); p_39++)
            {
                (*l_88) = &l_61;
                for (g_37 = (-29); (g_37 < (-21)); g_37 = safe_add_func_int16_t_s_s(g_37, 6))
                {
                    unsigned ***l_116 = (void*)0;
                    unsigned *l_119 = &g_68[8][0][1];
                    unsigned **l_118 = &l_119;
                    unsigned ***l_117[8] = {(void*)0, &l_118, (void*)0, &l_118, (void*)0, &l_118, (void*)0, &l_118};
                    int i;
                    l_120 = (void*)0;
                    (**l_88) = l_121;
                }
                (*l_88) = &p_40;
            }
            (*l_88) = &p_40;
            if (p_40)
                continue;
        }
        for (l_61 = 0; (l_61 <= (-14)); --l_61)
        {
            for (g_85 = 0; (g_85 == 34); g_85++)
            {
                if ((**l_88))
                    break;
                if (p_39)
                    break;
            }
        }
    }
    return l_126;
}







static int func_48(int p_49)
{
    (*g_52) = &p_49;
    return p_49;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_63[i][j], "g_63[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_68[i][j][k], "g_68[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_387[i][j], "g_387[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_867, "g_867", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_933[i], "g_933[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1085, "g_1085", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
