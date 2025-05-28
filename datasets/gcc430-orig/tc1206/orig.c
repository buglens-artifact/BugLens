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


struct S0 {
   signed f0 : 27;
   signed f1 : 6;
   signed f2 : 17;
   signed f3 : 24;
   signed f4 : 9;
   unsigned f5 : 30;
};


static int g_3 = 0x5B7D8CF4L;
static int g_4 = (-9L);
static unsigned short g_5 = 0x145CL;
static short g_50[3][10][2] = {{{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}};
static struct S0 g_73 = {-5073,6,-94,-1796,0,771};
static int g_78 = 0x2BF7FA13L;
static int g_158 = 0x58D32165L;
static unsigned long long g_177[9][9][3] = {{{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}, {{18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}, {18446744073709551615UL, 0x3791001A1CCD3B4FLL, 8UL}}};
static int g_178 = 0xCC1243A7L;
static char g_185 = 0x0CL;
static int g_191 = 0x8A563623L;
static short g_224 = 0x3592L;
static unsigned long long g_268 = 18446744073709551613UL;
static unsigned g_334 = 18446744073709551615UL;
static unsigned short g_347 = 0x51B8L;
static struct S0 g_435 = {9550,-3,169,1452,7,7025};
static char g_531 = 0x05L;
static unsigned g_567 = 0x3EAFB20BL;
static unsigned g_593 = 18446744073709551606UL;
static long long g_599 = 0x0D14F69BF7ECF0ACLL;
static unsigned short g_651 = 0x5CEEL;
static unsigned g_661[8] = {18446744073709551615UL, 0x65BB1992L, 18446744073709551615UL, 0x65BB1992L, 18446744073709551615UL, 0x65BB1992L, 18446744073709551615UL, 0x65BB1992L};
static unsigned char g_683 = 255UL;
static long long g_761 = 0x3AB6A24361F3BDECLL;
static struct S0 g_779[5][4][10] = {{{{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}}, {{{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}}, {{{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}}, {{{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}}, {{{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}, {{9498,6,-183,-261,4,24761}, {5135,2,-161,-2713,-4,24145}, {-8600,0,-149,3676,-16,32306}, {3538,4,354,-383,-17,29759}, {10475,0,118,974,-16,6480}, {-2335,-4,-305,-3073,8,22320}, {5135,2,-161,-2713,-4,24145}, {-9035,-2,-255,750,10,11787}, {-8600,0,-149,3676,-16,32306}, {-8045,6,146,940,-6,17779}}}};
static struct S0 g_781 = {-7987,0,-207,3129,-3,15452};
static long long g_799 = 0x95D8C617591CA881LL;
static long long g_862 = 0xCD07BCA11B507D62LL;
static struct S0 g_1124 = {685,-6,309,-3454,17,23043};
static unsigned short g_1190[5] = {0x3AFEL, 0x3AFEL, 0x3AFEL, 0x3AFEL, 0x3AFEL};
static unsigned short g_1259[8] = {0x70ABL, 0x70ABL, 0xF00DL, 0x70ABL, 0x70ABL, 0xF00DL, 0x70ABL, 0x70ABL};
static int g_1330 = 1L;



static unsigned char func_1(void);
static short func_8(unsigned char p_9);
static int func_13(int p_14, unsigned long long p_15, struct S0 p_16, struct S0 p_17, long long p_18);
static struct S0 func_20(unsigned long long p_21);
static short func_25(struct S0 p_26, int p_27, char p_28, char p_29);
static struct S0 func_30(int p_31);
static int func_37(int p_38, long long p_39, short p_40);
static long long func_47(unsigned long long p_48);
static int func_53(unsigned p_54);
static int func_58(unsigned short p_59, int p_60, unsigned p_61, int p_62);
static unsigned char func_1(void)
{
    long long l_2[9][4][1] = {{{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}, {{0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}, {0xFE30F5872D9EE1C9LL}}};
    int l_1075 = (-9L);
    struct S0 l_1088 = {7928,0,-286,177,-15,11869};
    unsigned l_1109 = 0x99F9DCB9L;
    unsigned short l_1114 = 0xF5F6L;
    char l_1193 = 9L;
    struct S0 l_1236 = {3100,-6,132,3659,5,29177};
    struct S0 l_1237 = {-8725,-2,-330,-1008,16,26480};
    unsigned short l_1238 = 0x14ECL;
    unsigned l_1288 = 0UL;
    unsigned l_1297[10][6] = {{18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}, {18446744073709551615UL, 0x31DC9A58L, 0xEF7F348BL, 0xEAF39C53L, 0x31DC9A58L, 0xB44CF6FDL}};
    long long l_1329[5] = {0L, 7L, 0L, 7L, 0L};
    int l_1367 = 0x9A7E054FL;
    int i, j, k;
lbl_1372:
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    {
        unsigned short l_1035[1];
        struct S0 l_1045 = {719,4,-27,1989,-5,7986};
        struct S0 l_1089 = {-736,-0,2,546,7,30080};
        unsigned l_1123 = 3UL;
        unsigned l_1126 = 4UL;
        unsigned char l_1148 = 0x45L;
        unsigned long long l_1149 = 0x756461F102103804LL;
        unsigned short l_1189 = 0x2E53L;
        char l_1216 = (-2L);
        int i;
        for (i = 0; i < 1; i++)
            l_1035[i] = 0x098AL;
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        {
            int l_10 = 0xFF12F3CCL;
            struct S0 l_1049 = {8511,-5,-208,1772,3,26905};
            g_5 = 0x646B8D96L;
            if ((safe_sub_func_int16_t_s_s(0L, func_8(l_10))))
            {
                short l_1044 = 0xE059L;
                struct S0 l_1046[9][8][3] = {{{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}, {{{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}, {{5050,-1,246,1689,-20,29436}, {-9005,-0,-83,-132,4,3745}, {-11210,3,-135,-1149,10,306}}}};
                struct S0 l_1087 = {104,4,99,-2250,-0,27748};
                int i, j, k;
                l_1035[0] = (g_799 && (l_10 || g_185));
                g_781.f4 = (g_435.f1 = ((safe_mod_func_uint32_t_u_u(3UL, ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_25(g_779[0][1][3], (g_191 = (g_224 | g_178)), g_435.f5, g_50[0][2][1]), 8UL)), (((l_1046[0][6][1].f4 = ((safe_mod_func_uint8_t_u_u(func_13((~func_13((l_10 || l_1044), l_1035[0], l_1045, g_779[2][3][2], g_781.f0)), g_779[0][1][3].f4, l_1046[0][6][1], g_779[1][0][7], l_1046[0][6][1].f0), l_1045.f0)) < g_334)) < g_779[0][1][3].f1) | l_1035[0]))) | 18446744073709551606UL))) || 0x7A9F729CL));
                if (l_1045.f2)
                {
                    l_1049 = func_20(func_13(g_683, (safe_rshift_func_uint8_t_u_u(g_781.f4, l_1045.f0)), func_30(g_177[3][3][1]), g_781, g_781.f5));
                }
                else
                {
                    unsigned char l_1067 = 1UL;
                    int l_1068[2][5] = {{(-5L), 0x3101E2B4L, (-5L), 0x3101E2B4L, (-5L)}, {(-5L), 0x3101E2B4L, (-5L), 0x3101E2B4L, (-5L)}};
                    int i, j;
                    g_781 = l_1049;
                    for (g_862 = 0; (g_862 <= 0); g_862 += 1)
                    {
                        int i, j, k;
                        g_779[4][3][8] = func_20((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(((l_1068[1][3] = (safe_mul_func_uint8_t_u_u((~(safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_2[(g_4 + 5)][(g_862 + 3)][g_3] & ((safe_mul_func_uint8_t_u_u(l_2[(g_4 + 5)][(g_862 + 3)][g_3], g_781.f3)) == func_53(g_73.f5))), g_3)) ^ (safe_lshift_func_int16_t_s_s(((l_1067 || g_781.f4) != ((l_1067 || l_1046[0][6][1].f4) <= g_799)), l_1035[0]))), g_799))), 0L))) | g_435.f0), g_781.f3)) ^ g_651) >= l_2[(g_4 + 5)][(g_862 + 3)][g_3]), l_1035[0])))), l_1046[0][6][1].f1)));
                        l_1045.f0 = ((l_1075 = ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_779[0][1][3].f2, (safe_add_func_int64_t_s_s((g_651 <= func_58(l_1049.f0, g_567, (((g_435.f5 ^ g_781.f1) < l_2[4][2][0]) < g_779[0][1][3].f3), g_191)), g_781.f4)))), l_1044)) ^ 0x160FE84BE4C9719ALL)) && 0L);
                    }
                    for (g_191 = 0; (g_191 <= 0); g_191 += 1)
                    {
                        int l_1080 = (-1L);
                        g_779[0][1][3].f4 = (g_73.f5 ^ (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((1UL ^ (l_1080 < l_1068[1][3])), 5)) | (l_1045.f1 = (safe_add_func_int64_t_s_s((((~((7L == (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((!g_862) != (func_25(g_73, g_779[0][1][3].f0, l_1075, l_1046[0][6][1].f5) > 0x4E2FC1455C4A45C4LL)), l_1080)), 0xF5F68811L))) >= 0xF4L)) & g_268) >= l_1045.f3), 0x05BD72459E1C2CE6LL)))), g_781.f0)));
                        if (g_799)
                            break;
                    }
                }
                for (g_185 = 1; (g_185 >= 0); g_185 -= 1)
                {
                    int i, j, k;
                    for (g_178 = 1; (g_178 >= 0); g_178 -= 1)
                    {
                        l_1087 = (l_1046[0][6][1] = g_779[0][1][3]);
                    }
                    for (g_761 = 0; (g_761 <= 0); g_761 += 1)
                    {
                        int i, j, k;
                        l_1088 = g_779[0][1][3];
                        l_1089 = l_1088;
                        if (g_177[g_3][(g_761 + 2)][g_3])
                            break;
                    }
                    return g_50[(g_3 + 1)][(g_3 + 9)][g_3];
                }
            }
            else
            {
                unsigned l_1100 = 0x6BE9D9ADL;
                struct S0 l_1108[5][7] = {{{-4097,0,-268,3412,14,941}, {8795,0,150,1275,-10,22435}, {7965,7,-117,2357,-10,10147}, {4007,5,-318,-1612,-19,12380}, {3463,1,110,-31,20,32189}, {4007,5,-318,-1612,-19,12380}, {7965,7,-117,2357,-10,10147}}, {{-4097,0,-268,3412,14,941}, {8795,0,150,1275,-10,22435}, {7965,7,-117,2357,-10,10147}, {4007,5,-318,-1612,-19,12380}, {3463,1,110,-31,20,32189}, {4007,5,-318,-1612,-19,12380}, {7965,7,-117,2357,-10,10147}}, {{-4097,0,-268,3412,14,941}, {8795,0,150,1275,-10,22435}, {7965,7,-117,2357,-10,10147}, {4007,5,-318,-1612,-19,12380}, {3463,1,110,-31,20,32189}, {4007,5,-318,-1612,-19,12380}, {7965,7,-117,2357,-10,10147}}, {{-4097,0,-268,3412,14,941}, {8795,0,150,1275,-10,22435}, {7965,7,-117,2357,-10,10147}, {4007,5,-318,-1612,-19,12380}, {3463,1,110,-31,20,32189}, {4007,5,-318,-1612,-19,12380}, {7965,7,-117,2357,-10,10147}}, {{-4097,0,-268,3412,14,941}, {8795,0,150,1275,-10,22435}, {7965,7,-117,2357,-10,10147}, {4007,5,-318,-1612,-19,12380}, {3463,1,110,-31,20,32189}, {4007,5,-318,-1612,-19,12380}, {7965,7,-117,2357,-10,10147}}};
                struct S0 l_1150 = {-2665,1,262,1194,3,29245};
                int i, j;
                for (l_1075 = 0; (l_1075 >= 0); l_1075 -= 1)
                {
                    unsigned l_1090 = 4294967295UL;
                    int l_1093 = 0L;
                    for (g_761 = 0; (g_761 <= 0); g_761 += 1)
                    {
                        struct S0 l_1103 = {5927,6,104,-1204,14,23410};
                        int i, j, k;
                        g_779[1][1][4] = g_73;
                        l_1090 = (0xA0476DCF753EDD35LL ^ 0x858382A7F7E8B4C5LL);
                        l_1103 = (g_781 = func_20(((((safe_sub_func_int64_t_s_s((g_73.f4 <= l_1045.f0), ((l_1093 = l_1049.f1) > (~(l_1088.f4 = (l_1088.f2 = (safe_lshift_func_uint16_t_u_u(g_191, 9)))))))) || 65527UL) | (l_2[(g_761 + 3)][(l_1075 + 2)][g_4] = ((safe_mod_func_int8_t_s_s(g_177[3][3][1], (safe_add_func_int8_t_s_s(l_1100, (l_1049.f1 & (safe_sub_func_int32_t_s_s(7L, l_1090))))))) & 4L))) != g_761)));
                    }
                    g_779[0][1][3].f4 = (l_1049.f3 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((1L == l_1045.f4), l_1090)), (l_1093 = g_779[0][1][3].f1))));
                    g_73 = l_1108[2][1];
                }
                if ((l_1109 == (((g_177[3][3][1] = (safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((0xDBA95CC54BF7A2BALL != g_531) || l_1089.f1), (((0xD301866DL != ((0xFCL & func_47((((g_599 = g_50[1][5][1]) >= (l_1114 >= (g_781.f1 ^ g_651))) & 1UL))) || 1UL)) == 0x745468767889EDE9LL) | 0x6AAF52F4C4E0AA0DLL))) >= g_799), 3L))) | l_1049.f1) && 0x454CB569L)))
                {
                    unsigned char l_1122[10][4] = {{0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}, {0x01L, 255UL, 0x89L, 0x62L}};
                    int i, j;
                    for (g_191 = 0; (g_191 <= 0); g_191 += 1)
                    {
                        int l_1119 = (-10L);
                        struct S0 l_1125 = {7320,6,343,-2886,-12,15896};
                        if (l_1049.f2)
                            break;
                        if (g_661[7])
                            break;
                        l_1125.f2 = ((safe_lshift_func_uint16_t_u_s((g_5 = ((l_1108[2][1].f5 | g_50[0][5][0]) <= (0xA913278FC61688ECLL == ((safe_add_func_int16_t_s_s(0xF719L, (l_1108[2][1].f3 = func_13(((g_683 = (l_1119 & g_651)) > (l_1088.f4 > func_13(g_779[0][1][3].f3, (((safe_rshift_func_uint16_t_u_s((g_661[0] || l_1122[1][2]), l_1100)) & g_178) != g_781.f4), g_781, g_435, l_1075))), l_1123, g_1124, l_1125, l_1122[8][3])))) ^ l_1075)))), 11)) || l_1126);
                    }
                    for (g_347 = 0; (g_347 <= 0); g_347 += 1)
                    {
                        return g_661[3];
                    }
                }
                else
                {
                    unsigned char l_1139 = 0x34L;
                    struct S0 l_1188 = {10038,7,-57,3964,0,13960};
                    for (l_1109 = 0; (l_1109 <= 4); l_1109 += 1)
                    {
                        int i, j, k;
                        if (l_2[(g_3 + 7)][(g_4 + 3)][g_3])
                            break;
                        g_1124.f1 = func_25(l_1049, l_2[(g_3 + 5)][(g_4 + 3)][g_4], g_177[g_4][(g_3 + 6)][(g_4 + 1)], (safe_rshift_func_uint8_t_u_s((func_25(g_779[0][1][3], (safe_add_func_int8_t_s_s(1L, (safe_mul_func_int8_t_s_s((l_1108[2][1].f4 = ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_73.f0, l_1108[2][1].f4)), l_1088.f1)), ((0L & g_567) != 251UL))) || l_1139)), g_73.f2)))), g_1124.f4, g_779[0][1][3].f4) ^ 7UL), 0)));
                        l_1045.f0 = (g_779[0][1][3].f2 = (safe_add_func_int32_t_s_s((func_13(g_1124.f4, ((g_661[7] == (safe_mul_func_int16_t_s_s(g_435.f4, (l_1114 < (((((l_1088.f3 || g_73.f5) || (safe_add_func_uint32_t_u_u(func_53(g_779[0][1][3].f1), ((l_1088.f4 = (safe_lshift_func_uint8_t_u_s(0x94L, g_779[0][1][3].f4))) | l_1049.f5)))) ^ 4294967288UL) == l_1148) > l_2[(g_3 + 5)][(g_4 + 3)][g_4]))))) >= l_1149), l_1150, l_1108[4][3], l_1049.f3) < 0UL), 0x9EB3A319L)));
                    }
                    for (g_178 = 0; (g_178 <= 0); g_178 += 1)
                    {
                        struct S0 l_1151 = {1790,3,-99,687,9,21805};
                        int i, j, k;
                        l_1088 = l_1151;
                        g_779[0][1][3].f1 = (((safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(0x6657L, 0x7B52L)) <= ((l_2[(g_178 + 7)][g_4][g_178] = ((safe_sub_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((((g_50[1][3][1] <= g_779[0][1][3].f5) == (g_73.f2 >= func_25(l_1089, ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((g_683 = (0x297C3094C99E156ELL < ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_1148, ((g_435.f1 & l_1139) || 0L))), l_1150.f2)) | l_10))), g_435.f1)), l_1109)), 12)) ^ 0L), l_1089.f3, g_779[0][1][3].f3))) & 0L), g_862)) != 0x4EL) & l_10), (-1L))) <= l_1151.f5)) | 2UL)) ^ g_761), l_1139)) | 0xCA61L) <= g_177[4][5][2]);
                        g_435.f4 = func_13((g_78 = ((l_2[(g_178 + 3)][(g_178 + 3)][g_3] = (0x043CL == func_13((((safe_sub_func_int64_t_s_s((l_2[(g_3 + 3)][(g_178 + 3)][g_4] = (((g_78 | func_13((safe_rshift_func_uint8_t_u_s((g_1124.f5 ^ g_5), 0)), (g_177[3][3][1] = 0x8973DC18396010B0LL), l_1108[3][3], g_1124, l_2[(g_178 + 7)][g_4][g_178])) | l_1150.f2) & 0x718499A7L)), 0xF6793B6B95A54CC9LL)) > 0x0BEFL) | 3L), l_1089.f1, g_779[0][1][3], l_1108[1][0], g_781.f0))) || g_779[0][1][3].f5)), l_1151.f2, g_779[2][0][8], g_1124, g_779[0][1][3].f2);
                        l_1188.f2 = (((safe_sub_func_int64_t_s_s(((l_2[(g_178 + 6)][(g_4 + 3)][g_4] = (func_25(l_1049, g_1124.f2, l_1088.f3, (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_683 = l_10), l_1139)), 0xCCCAL)), ((g_779[0][1][3].f5 = (g_435.f5 >= ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((func_13(g_435.f5, ((safe_mod_func_int32_t_s_s((-2L), 4294967288UL)) | 0x3FL), g_1124, l_1188, l_1089.f5) > l_1049.f4), l_1088.f1)), g_781.f1)) && l_1139))) | 0xEE96EB38L)))) || l_1088.f5)) != l_1151.f2), l_1109)) & g_1124.f0) < 0x27CFL);
                    }
                }
            }
            return g_268;
        }
        for (l_1075 = 0; (l_1075 <= 0); l_1075 += 1)
        {
            struct S0 l_1218 = {1009,-3,-296,-570,6,30341};
            for (g_862 = 0; (g_862 <= 0); g_862 += 1)
            {
                int i, j, k;
                if (l_2[(g_862 + 7)][g_862][g_862])
                {
                    l_1189 = g_73.f3;
                    if (g_1190[3])
                        continue;
                    for (g_593 = 1; (g_593 <= 7); g_593 += 1)
                    {
                        int l_1198 = 6L;
                        int i, j, k;
                        l_1193 = ((safe_lshift_func_int16_t_s_s(((g_50[(g_862 + 1)][(g_3 + 9)][(g_3 + 1)] = g_661[(g_3 + 4)]) ^ g_781.f2), 12)) ^ 0xD773L);
                        g_435.f1 = g_73.f1;
                        g_779[0][1][3].f2 = (safe_mul_func_uint16_t_u_u(func_25(g_779[l_1075][(g_3 + 2)][(g_862 + 4)], g_781.f1, func_37(g_435.f2, func_25(g_779[(g_3 + 1)][g_3][(l_1075 + 1)], (safe_rshift_func_int8_t_s_s((g_73.f1 < (func_25(g_779[2][2][2], g_599, (g_531 = (l_1198 = g_779[(g_3 + 1)][g_3][(l_1075 + 1)].f2)), g_781.f1) | 251UL)), g_761)), g_3, l_2[(g_862 + 7)][g_862][g_862]), g_73.f5), g_779[0][1][3].f4), 0L));
                    }
                }
                else
                {
                    char l_1204 = 0x33L;
                    int l_1217[7][6][1] = {{{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}, {{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}, {{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}, {{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}, {{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}, {{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}, {{0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}, {0x29C41C19L}}};
                    int i, j, k;
                    for (l_1109 = 1; (l_1109 <= 4); l_1109 += 1)
                    {
                        struct S0 l_1199 = {-9778,-5,-276,2197,9,8580};
                        l_1089 = l_1089;
                        g_781.f2 = (l_2[(g_862 + 7)][g_862][g_862] & (g_177[3][7][1] > func_25(l_1199, g_73.f2, g_781.f0, ((func_25(l_1199, (safe_rshift_func_int8_t_s_s(l_1199.f1, (safe_mul_func_uint8_t_u_u(g_1124.f3, (l_1204 != l_1075))))), l_1088.f5, g_73.f5) == l_1088.f1) || l_1114))));
                    }
                    g_779[0][1][3].f0 = (l_1217[6][3][0] = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((0x26DDL == l_1089.f5) > (0x94L != (+func_25(g_781, (0x89A6452165FD1EF2LL < (safe_sub_func_uint16_t_u_u(1UL, (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_u((g_73.f3 || l_1216), (0x31L == (-7L))))))))), g_73.f3, l_1123)))), g_435.f0)), 0xA0AAL)), 8)));
                    l_1218 = g_1124;
                    if (g_1124.f1)
                        continue;
                }
                for (g_761 = 3; (g_761 >= 0); g_761 -= 1)
                {
                    for (g_78 = 0; (g_78 <= 7); g_78 += 1)
                    {
                        int i;
                        g_781.f1 = 0xECEB2E56L;
                        if (g_661[(l_1075 + 1)])
                            continue;
                    }
                    if (l_1088.f5)
                        break;
                    g_781.f1 = l_1088.f5;
                }
                if (g_435.f5)
                    continue;
            }
            for (l_1109 = 0; (l_1109 <= 2); l_1109 += 1)
            {
                int i, j, k;
                for (g_531 = 0; (g_531 >= 0); g_531 -= 1)
                {
                    int i, j, k;
                    for (l_1126 = 0; (l_1126 <= 2); l_1126 += 1)
                    {
                        int i, j, k;
                        l_1045.f4 = l_2[(g_3 + 3)][(g_531 + 1)][l_1075];
                        g_781.f2 = l_2[(g_3 + 8)][g_531][l_1075];
                        g_435 = g_779[l_1075][l_1075][(l_1109 + 4)];
                    }
                    return g_177[(g_531 + 6)][(l_1075 + 5)][(g_3 + 1)];
                }
                for (l_1114 = 0; (l_1114 <= 1); l_1114 += 1)
                {
                    struct S0 l_1219 = {-10055,3,276,3948,-17,16164};
                    int i, j, k;
                    l_1219 = func_20((l_2[l_1075][(l_1075 + 1)][g_3] && g_177[(g_3 + 5)][(l_1075 + 7)][g_3]));
                }
                return g_50[l_1075][(l_1109 + 5)][l_1075];
            }
            for (l_1148 = 0; (l_1148 <= 0); l_1148 += 1)
            {
                unsigned long long l_1232 = 0x7092BF6D268979F3LL;
                unsigned long long l_1235 = 6UL;
                int i, j, k;
                g_435.f2 = (l_2[(l_1075 + 2)][l_1075][l_1075] && (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1232 = (safe_mul_func_int8_t_s_s(g_50[0][2][0], (((~5UL) & (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(0x8C49L, 13)), 0))) || (func_13(g_593, g_435.f2, l_1045, g_779[0][1][3], g_1190[2]) ^ 1UL))))), 0x658EL)), l_1088.f3)), 4)));
                l_1218.f2 = (g_593 || ((func_13(g_779[0][1][3].f0, l_1123, g_1124, l_1089, l_1035[0]) | g_683) >= func_47(g_224)));
                g_1124.f1 = (safe_mul_func_int16_t_s_s((func_25(func_20(((g_683 = 0x3CL) | ((-7L) != g_50[1][5][1]))), (g_799 == (l_1232 <= g_781.f3)), (g_781.f3 & (func_13(func_13((g_1124.f2 = (l_1045.f1 = l_1235)), g_781.f5, g_779[0][1][3], l_1236, g_779[0][1][3].f1), g_779[0][1][3].f4, l_1237, g_779[0][1][3], l_1237.f1) > l_2[(l_1075 + 2)][l_1075][l_1075])), l_1238) <= l_1232), 65535UL));
            }
        }
    }
    if ((((safe_sub_func_uint32_t_u_u(l_1088.f1, func_37((safe_mod_func_uint32_t_u_u(g_50[2][8][0], (0x35L || (safe_sub_func_uint64_t_u_u(g_191, (l_1075 == g_191)))))), g_268, g_178))) < l_1236.f4) >= g_683))
    {
        struct S0 l_1247 = {-6556,-7,-189,1370,-5,17006};
        for (g_268 = (-25); (g_268 >= 12); g_268 = safe_add_func_uint32_t_u_u(g_268, 1))
        {
            char l_1254 = (-1L);
            struct S0 l_1277 = {-6490,2,-287,2681,18,26395};
            g_779[3][3][9] = l_1247;
            for (g_334 = 10; (g_334 <= 59); g_334 = safe_add_func_uint16_t_u_u(g_334, 8))
            {
                int l_1258 = 0L;
                int l_1281[6] = {(-1L), 0L, (-1L), 0L, (-1L), 0L};
                int i;
                if ((safe_lshift_func_uint16_t_u_s((g_347 = (safe_mul_func_int16_t_s_s(g_799, l_1254))), 10)))
                {
                    for (g_5 = 1; (g_5 <= 4); g_5 += 1)
                    {
                        struct S0 l_1255 = {5238,-0,88,-611,5,29220};
                        int i;
                        if (g_1190[g_5])
                            break;
                        l_1255 = g_779[0][1][3];
                        g_1259[1] = (g_3 = (g_78 = (0UL ^ ((safe_mul_func_uint16_t_u_u(g_1190[g_5], g_50[0][8][0])) == l_1258))));
                    }
                    if (g_435.f4)
                        continue;
                }
                else
                {
                    unsigned char l_1270 = 0x24L;
                    struct S0 l_1280[3] = {{-9682,-7,-145,-3105,6,7997}, {-9682,-7,-145,-3105,6,7997}, {-9682,-7,-145,-3105,6,7997}};
                    int i;
                    if (l_1254)
                    {
                        unsigned long long l_1269 = 0xBEF6136D6AF10088LL;
                        int l_1271 = 0xE983162BL;
                        if (l_1258)
                            break;
                        l_1247.f3 = g_435.f1;
                        l_1271 = (g_779[0][1][3].f1 = (g_779[0][1][3].f0 = ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_1247.f1 <= (g_268 < (g_177[8][0][1] || ((safe_sub_func_int32_t_s_s(0x212BB5A6L, (safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((g_862 = ((l_1247.f0 = ((((l_1269 | l_1247.f4) || l_1270) < g_224) | l_1269)) | l_1247.f5)))), 0x1780L)))) | 0x8A29C073A428027FLL)))), g_779[0][1][3].f0)) && 5L), g_185)) | 1UL)));
                    }
                    else
                    {
                        unsigned l_1276[3][8] = {{0x5F7C2DE4L, 0x4D4EE392L, 0x2F2A8288L, 0x8E767F52L, 0x8E767F52L, 0x2F2A8288L, 0x4D4EE392L, 0x5F7C2DE4L}, {0x5F7C2DE4L, 0x4D4EE392L, 0x2F2A8288L, 0x8E767F52L, 0x8E767F52L, 0x2F2A8288L, 0x4D4EE392L, 0x5F7C2DE4L}, {0x5F7C2DE4L, 0x4D4EE392L, 0x2F2A8288L, 0x8E767F52L, 0x8E767F52L, 0x2F2A8288L, 0x4D4EE392L, 0x5F7C2DE4L}};
                        int i, j;
                        g_779[0][1][3].f1 = ((safe_sub_func_uint32_t_u_u(l_1258, (safe_add_func_int16_t_s_s(func_58(l_1247.f1, l_1276[1][6], (func_13(g_599, (65535UL || 0x7AE5L), g_73, l_1277, (safe_mul_func_int8_t_s_s((g_185 = func_13((g_781.f3 = g_779[0][1][3].f3), g_1124.f3, g_435, l_1280[0], l_1276[1][6])), 1L))) == g_178), g_191), 65532UL)))) <= l_1280[0].f0);
                        l_1277.f4 = func_58(g_78, l_1109, l_1276[1][2], (l_1281[2] = g_73.f3));
                    }
                    l_1277.f1 = g_73.f0;
                }
                g_1124.f4 = func_58(l_1109, l_1277.f0, l_1237.f0, (l_1277.f4 != (l_1088.f5 < ((l_1088.f0 = l_1277.f0) && (+(-9L))))));
                l_1237.f3 = (func_58(((safe_lshift_func_uint16_t_u_u(0x50A1L, ((1UL <= (g_781.f3 == (safe_lshift_func_uint8_t_u_s(l_1247.f0, 1)))) <= func_58(((safe_rshift_func_uint8_t_u_u((l_1281[2] != g_567), 1)) != g_651), (func_25(g_779[0][3][4], ((func_13(g_661[2], l_1281[1], g_779[0][1][3], l_1088, g_73.f4) || g_224) <= g_781.f5), g_73.f4, g_268) != g_779[0][1][3].f1), l_1247.f4, l_1277.f0)))) != g_661[5]), l_1288, l_1277.f5, l_1237.f4) & 8UL);
            }
        }
    }
    else
    {
        unsigned long long l_1289 = 0xE49FB456CD1806C1LL;
        int l_1308 = 1L;
        struct S0 l_1309 = {6390,-2,-290,-1814,17,4232};
        unsigned l_1320 = 4294967288UL;
        short l_1321 = (-1L);
        struct S0 l_1324[2] = {{-8643,1,111,550,14,14437}, {-8643,1,111,550,14,14437}};
        char l_1355 = 0xA6L;
        int i;
        l_1289 = 0xFC4F0079L;
        for (l_1109 = (-6); (l_1109 <= 48); l_1109++)
        {
            unsigned l_1296 = 18446744073709551610UL;
            l_1308 = (func_8((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u(0x8E9EL, (func_58(l_1296, l_1297[4][0], func_47(func_53((safe_mul_func_int16_t_s_s(((g_599 = (g_862 = (((safe_rshift_func_uint16_t_u_u(((l_1238 == (safe_mod_func_uint16_t_u_u((l_1289 >= (l_1289 | (!(((l_1193 < (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_1288, 12)), g_1259[1]))) >= l_1289) <= 0xFEFE21026E5A4CF4LL)))), g_661[5]))) > 0UL), 3)) || l_1288) && l_1288))) || l_1236.f0), 0xE24BL)))), g_435.f0) | 0x08L))) | g_779[0][1][3].f2) > g_1124.f1) != 18446744073709551610UL), g_779[0][1][3].f5))) != g_1124.f5);
        }
        g_73 = l_1309;
        for (g_5 = 0; (g_5 > 16); g_5++)
        {
            struct S0 l_1312[3] = {{-2868,5,100,-268,-10,4032}, {-2868,5,100,-268,-10,4032}, {-2868,5,100,-268,-10,4032}};
            int l_1345 = 0x165E9435L;
            int i;
            g_435 = g_779[0][1][3];
            l_1312[0] = l_1309;
            if (g_779[0][1][3].f3)
            {
                struct S0 l_1319 = {8903,-1,44,2829,3,29832};
                for (g_531 = (-1); (g_531 >= (-9)); g_531--)
                {
                    int l_1326 = 1L;
                    for (g_268 = 0; (g_268 < 53); g_268 = safe_add_func_int8_t_s_s(g_268, 9))
                    {
                        unsigned l_1325 = 0x71FB0EDEL;
                        g_4 = (safe_rshift_func_int8_t_s_s(func_25((l_1309 = l_1319), (l_1320 <= (g_50[2][1][0] = l_1321)), (((safe_mod_func_uint32_t_u_u(l_1321, (func_13(l_1088.f3, g_651, l_1324[1], g_1124, l_1325) && l_1319.f4))) >= 1UL) & 7L), l_1326), g_73.f1));
                    }
                }
                if (g_779[0][1][3].f5)
                    break;
                g_779[0][1][3].f4 = g_1190[3];
                g_1330 = (((l_1324[1].f2 = (l_1312[0].f4 = (func_25(l_1319, l_1309.f1, func_58(g_1259[0], ((((l_1237.f4 < (safe_sub_func_uint16_t_u_u(l_1237.f0, g_781.f1))) <= (g_683 = 0xFFL)) != g_73.f0) == g_1259[6]), l_1329[2], l_1324[1].f4), g_651) <= g_435.f2))) != g_1259[1]) ^ g_651);
            }
            else
            {
                unsigned char l_1331 = 249UL;
                int l_1340 = 0x33977E93L;
                struct S0 l_1346 = {4396,5,-63,-2514,-21,5351};
                l_1309.f1 = l_1331;
                if ((((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x930DL, l_1331)), (l_1236.f1 = func_58((g_779[0][1][3].f1 | (safe_add_func_uint16_t_u_u(g_1190[3], ((g_862 != func_25(l_1088, (((l_1075 = ((3L & (l_1340 = l_1331)) <= 0x83L)) <= 0x25L) && 18446744073709551608UL), g_683, g_1190[3])) ^ 0xF452F5144A25D75BLL)))), g_1190[3], g_593, l_1331)))), g_781.f2)) ^ 9UL) <= 0x00C7L))
                {
                    unsigned char l_1354 = 0x84L;
                    struct S0 l_1366 = {-464,3,154,3903,16,3542};
                    long long l_1369 = 0L;
                    g_1124.f4 = (safe_mod_func_uint32_t_u_u((g_779[0][1][3].f2 != l_1312[0].f0), g_158));
                    if ((safe_rshift_func_int8_t_s_s((g_779[0][1][3].f2 != l_1345), g_4)))
                    {
                        long long l_1353 = 0x858DC5877D1437D9LL;
                        unsigned l_1368 = 2UL;
                        l_1346 = (g_779[0][2][7] = func_30(g_50[0][8][0]));
                        l_1353 = func_58((l_1324[1].f0 = g_5), (l_1236.f4 = (l_1237.f3 = (safe_sub_func_uint64_t_u_u((func_53((g_1124.f1 != (l_1237.f0 & (g_50[2][8][0] = (((safe_lshift_func_int8_t_s_u((-1L), 3)) <= l_1345) && (g_1190[3] & (safe_mul_func_uint8_t_u_u(0x1BL, l_1312[0].f3)))))))) >= l_1088.f2), g_4)))), g_1259[1], g_435.f5);
                        if (l_1353)
                            break;
                        g_435.f0 = func_58(((l_1354 == g_781.f3) | (g_1259[0] = l_1355)), (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((func_47((((safe_rshift_func_uint16_t_u_s(l_1309.f1, 9)) != l_1354) && ((+((g_781.f5 == (safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((l_1309.f3 = 0xFA2137CBEB3F12BCLL), func_13(g_1190[4], (((~(g_779[0][1][3].f1 & l_1354)) >= g_779[0][1][3].f3) | 0x9C6EL), l_1366, l_1324[1], g_1124.f2))) | 0x8CF19F6DL), l_1367))) != g_178)) || g_185))) > l_1346.f2) == 0xCC98C3C1L), 6)), g_779[0][1][3].f1)), l_1345, l_1368);
                    }
                    else
                    {
                        g_435 = l_1366;
                        l_1309.f3 = (g_73.f2 = g_779[0][1][3].f0);
                        if (g_191)
                            continue;
                        l_1369 = g_779[0][1][3].f3;
                    }
                    l_1236.f0 = (safe_lshift_func_int16_t_s_u((l_1366.f3 = func_53(g_781.f3)), 13));
                }
                else
                {
                    g_1124.f0 = l_1237.f5;
                    if (l_1309.f3)
                        goto lbl_1372;
                }
            }
        }
    }
    return g_779[0][1][3].f3;
}







static short func_8(unsigned char p_9)
{
    char l_780 = 0x1BL;
    int l_782[8][8][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
    int l_796 = 0x8D7F3334L;
    int l_798 = 1L;
    struct S0 l_811 = {-9253,1,223,-1314,17,27408};
    struct S0 l_832[9][4] = {{{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}, {{6666,6,-139,2737,1,18105}, {-6234,2,-331,-1163,1,10772}, {10155,-0,20,1284,9,25567}, {-5456,5,-312,1907,-8,12295}}};
    int l_934 = 0x71707B43L;
    char l_958[7] = {0xC6L, 0xC6L, 0xACL, 0xC6L, 0xC6L, 0xACL, 0xC6L};
    struct S0 l_1029 = {5413,4,343,-1349,-7,1607};
    int i, j, k;
lbl_950:
    for (g_5 = 28; (g_5 >= 23); --g_5)
    {
        long long l_19 = 0x2737AE9F9034E105LL;
        int l_22 = 0x6A0122D8L;
        struct S0 l_783 = {-2780,-6,-360,3261,-15,6834};
        unsigned l_812 = 18446744073709551615UL;
        unsigned long long l_823[9];
        struct S0 l_829[6][7][5] = {{{{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}}, {{{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}}, {{{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}}, {{{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}}, {{{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}}, {{{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}, {{11429,3,349,-1120,-21,2226}, {8818,-5,12,-1732,16,19282}, {7672,-5,-306,-494,10,15230}, {11260,1,345,-3574,-5,8876}, {-7167,-4,214,-704,-1,3611}}}};
        char l_833 = 5L;
        long long l_863[4][2][3] = {{{0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}, {0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}}, {{0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}, {0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}}, {{0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}, {0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}}, {{0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}, {0x02657E797BC3BEDFLL, 0xB7A21853398A7848LL, 0x02657E797BC3BEDFLL}}};
        unsigned l_876[7][3] = {{0x485E8582L, 0x485E8582L, 18446744073709551615UL}, {0x485E8582L, 0x485E8582L, 18446744073709551615UL}, {0x485E8582L, 0x485E8582L, 18446744073709551615UL}, {0x485E8582L, 0x485E8582L, 18446744073709551615UL}, {0x485E8582L, 0x485E8582L, 18446744073709551615UL}, {0x485E8582L, 0x485E8582L, 18446744073709551615UL}, {0x485E8582L, 0x485E8582L, 18446744073709551615UL}};
        struct S0 l_933[6][2][9] = {{{{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}, {{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}}, {{{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}, {{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}}, {{{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}, {{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}}, {{{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}, {{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}}, {{{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}, {{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}}, {{{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}, {{-11350,0,-302,-1127,-18,267}, {-613,-6,-329,-733,11,23507}, {-1361,7,-85,3551,-4,11155}, {6057,5,-326,2688,10,13842}, {3316,3,-44,180,-6,4527}, {10480,-5,-338,-3388,-10,25250}, {3316,3,-44,180,-6,4527}, {6057,5,-326,2688,10,13842}, {-1361,7,-85,3551,-4,11155}}}};
        int l_939 = 0x84DD98D4L;
        struct S0 l_944 = {-1507,-0,23,-3229,0,31545};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_823[i] = 18446744073709551615UL;
        l_782[5][6][0] = func_13(l_19, p_9, func_20((l_22 = l_19)), g_779[0][1][3], l_780);
        g_779[0][1][3] = l_783;
        for (g_599 = 1; (g_599 >= 0); g_599 -= 1)
        {
            struct S0 l_784 = {-4908,3,-212,594,0,10211};
            struct S0 l_822 = {-2038,7,-237,1522,17,13018};
            int l_931 = 4L;
            if ((g_779[0][1][3].f0 = (l_783.f3 = g_661[1])))
            {
                int l_787 = 0x8837E9EAL;
                int l_797[1][3][10];
                struct S0 l_800 = {-9161,0,283,-3439,-14,6154};
                int l_824 = 8L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 10; k++)
                            l_797[i][j][k] = 1L;
                    }
                }
                l_784 = l_783;
                g_779[0][1][3] = l_784;
                g_781.f1 = (((!(p_9 = (4294967293UL && (l_782[2][6][0] = p_9)))) ^ (((g_799 = (safe_mod_func_uint16_t_u_u((~l_780), (l_787 ^ (l_798 = ((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_783.f2, (l_787 < g_185))), (((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((g_683 = (l_797[0][1][2] = (l_796 = 0xA1L))) | l_784.f0) != l_780), g_3)), l_787)) && l_19) && 0x352F71C0L))) == l_784.f4)))))) && 0xBDL) || 1L)) || l_784.f4);
                for (l_780 = 0; (l_780 <= 0); l_780 += 1)
                {
                    unsigned l_805 = 0x51F02AB6L;
                    g_781 = l_800;
                    if ((safe_mod_func_uint32_t_u_u(func_25(l_784, p_9, (0L >= (g_347 = ((safe_add_func_uint64_t_u_u(0xE00FCB17A757537FLL, g_185)) | l_805))), (+p_9)), p_9)))
                    {
                        struct S0 l_810[5] = {{-193,2,130,-1500,19,14731}, {-193,2,130,-1500,19,14731}, {-193,2,130,-1500,19,14731}, {-193,2,130,-1500,19,14731}, {-193,2,130,-1500,19,14731}};
                        int i, j, k;
                        l_797[l_780][g_599][(l_780 + 3)] = (safe_rshift_func_int16_t_s_u(func_58(g_781.f4, (l_784.f4 = 0x0AEFCAF8L), p_9, g_779[0][1][3].f0), (safe_mod_func_uint16_t_u_u((+func_13(l_784.f3, ((((-6L) ^ p_9) && func_13(l_800.f4, g_683, l_800, l_810[0], p_9)) ^ l_784.f2), l_811, g_779[3][2][3], g_334)), g_761))));
                    }
                    else
                    {
                        unsigned char l_813 = 0xE4L;
                        l_813 = l_812;
                    }
                    l_824 = (+(safe_mul_func_uint8_t_u_u((p_9 || ((func_25(g_73, (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_9, 5)), l_800.f4)) & (g_4 & g_651)) && func_13(l_805, (safe_rshift_func_int8_t_s_s((((((-1L) || (g_191 ^ p_9)) != g_268) | p_9) | g_78), l_811.f0)), g_73, l_822, p_9)), g_435.f0, l_823[2]) < l_805) < 0xDF7CDE79L)), p_9)));
                }
            }
            else
            {
                g_779[0][1][3].f3 = p_9;
                l_822.f0 = l_811.f0;
                l_783.f3 = g_779[0][1][3].f4;
            }
            if (((safe_add_func_uint16_t_u_u((l_783.f4 = l_811.f1), (l_784.f1 = (safe_lshift_func_uint16_t_u_s(func_25(l_829[1][2][0], ((((safe_add_func_int32_t_s_s(((l_784.f0 = func_25((l_832[3][3] = g_779[2][3][5]), p_9, (1L | p_9), (g_531 = ((l_784.f5 == (g_781.f0 != ((g_531 >= l_822.f4) | (-9L)))) & g_73.f5)))) < g_781.f3), l_823[2])) | g_779[0][1][3].f3) <= p_9) > 6L), g_73.f1, l_829[1][2][0].f2), l_833))))) & g_73.f1))
            {
                int l_839 = 0L;
                for (g_185 = 1; (g_185 >= 0); g_185 -= 1)
                {
                    struct S0 l_838 = {6326,5,-296,3880,9,15542};
                    unsigned l_852 = 0x68DD32E1L;
                    g_779[0][1][3].f2 = (g_779[0][1][3].f3 ^ (safe_lshift_func_uint8_t_u_s(g_334, (l_784.f5 != (((safe_sub_func_int8_t_s_s(g_567, func_13(g_593, g_4, l_838, g_779[0][1][3], l_19))) ^ l_839) && l_829[1][2][0].f5)))));
                    l_783 = g_781;
                    if (l_782[5][6][0])
                    {
                        l_839 = (safe_mul_func_int8_t_s_s(p_9, (l_829[1][2][0].f2 = p_9)));
                        l_784.f4 = (l_838.f0 = 1L);
                        l_839 = l_838.f5;
                        if (l_784.f0)
                            continue;
                    }
                    else
                    {
                        char l_859 = 0xD0L;
                        char l_860 = (-1L);
                        int l_861[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_861[i] = 0x2D74019DL;
                        l_829[1][2][0].f0 = (l_863[3][1][1] = (((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_25(l_832[3][3], p_9, (l_838.f0 = 0x1FL), p_9), l_838.f2)), ((l_852 ^ (l_829[1][2][0].f5 || ((l_839 = (l_861[1] = ((func_13((safe_mul_func_int16_t_s_s((((g_862 = ((l_861[1] = (safe_sub_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(l_859, l_860)) & p_9), l_784.f5))) || 0x34L)) <= p_9) | p_9), p_9)), l_839, l_829[5][1][0], l_811, g_3) > g_158) | 0UL))) && l_861[1]))) < 0UL))), 0x69L)) > 0x15DCL), 4294967288UL)), (-1L))) <= p_9) & p_9));
                        g_435.f1 = g_781.f0;
                    }
                    l_838.f2 = 0x6DEF8948L;
                }
                if (g_4)
                    break;
                for (g_567 = 0; (g_567 <= 1); g_567 += 1)
                {
                    char l_872 = 0x95L;
                    struct S0 l_873 = {-5750,-3,301,3808,5,1084};
                    g_435.f2 = ((safe_sub_func_uint16_t_u_u(p_9, ((g_347 = 0x122AL) || ((safe_mul_func_int16_t_s_s(g_779[0][1][3].f5, (func_58(((g_268 = (((g_78 >= (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((l_872 = 0x4CL), func_25((l_822 = l_873), g_334, (safe_sub_func_int16_t_s_s(g_781.f3, g_347)), l_876[0][1]))) || 0x91CFD7AC9402C683LL), 0x081CL))) > 0xCF8A5E4387F381D9LL) == p_9)) >= 0x63164F5A97567E8ELL), l_784.f2, g_73.f2, g_761) ^ 0UL))) & 0xC93B0FB83B4C52DBLL)))) & l_839);
                    if (g_779[0][1][3].f3)
                        break;
                    g_781 = g_73;
                }
            }
            else
            {
                struct S0 l_878 = {3095,4,-225,-2994,11,13903};
                long long l_932 = (-5L);
                for (p_9 = 0; (p_9 <= 7); p_9 += 1)
                {
                    int l_895[3];
                    struct S0 l_920 = {-2039,6,197,1765,7,28079};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_895[i] = 1L;
                    l_811.f0 = l_876[(g_599 + 5)][g_599];
                    for (g_268 = 0; (g_268 <= 3); g_268 += 1)
                    {
                        struct S0 l_877 = {-3248,-5,-342,257,-11,3496};
                        int i, j, k;
                        g_779[(g_268 + 1)][g_268][(g_268 + 4)] = l_877;
                        l_832[(g_599 + 7)][(g_599 + 2)] = l_878;
                        g_779[0][1][3] = g_435;
                        if (l_823[(g_268 + 5)])
                            break;
                    }
                    for (g_799 = 5; (g_799 >= 0); g_799 -= 1)
                    {
                        char l_879 = (-10L);
                        if (l_879)
                            break;
                        l_782[5][6][0] = (+((((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_779[0][1][3].f1, ((g_435.f0 = (((safe_lshift_func_uint8_t_u_s(p_9, func_47((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_9, (((0x1B44F96E519818E6LL || p_9) ^ 9UL) == l_829[1][2][0].f4))) || (-3L)), (g_683 = (safe_sub_func_uint16_t_u_u(p_9, l_878.f2))))), p_9))))) & g_781.f5) | l_784.f0)) | g_593))) < g_781.f1), g_781.f2)) | p_9) < l_783.f4) & g_781.f4));
                        l_895[2] = func_53((safe_unary_minus_func_int8_t_s((g_531 = (-2L)))));
                        return p_9;
                    }
                    if (((safe_unary_minus_func_uint32_t_u((g_435.f3 == func_53((9UL != (safe_rshift_func_uint8_t_u_u(g_599, (((safe_sub_func_uint32_t_u_u((((l_876[(g_599 + 5)][g_599] >= 0x689AACBAB2445EF2LL) > g_779[0][1][3].f4) & ((l_876[(g_599 + 5)][g_599] != (safe_unary_minus_func_uint8_t_u((((safe_sub_func_uint32_t_u_u((l_878.f1 || (p_9 < p_9)), 0x5EF126CCL)) & p_9) <= l_811.f5)))) != g_3)), 1L)) || 1L) || p_9)))))))) | 0x26E0D8788AEEE2FFLL))
                    {
                        int i, j, k;
                        g_779[(g_599 + 3)][(g_599 + 1)][p_9] = g_73;
                        g_779[(g_599 + 2)][(g_599 + 2)][(p_9 + 1)] = l_829[1][2][0];
                    }
                    else
                    {
                        g_779[0][1][3].f4 = 0x295884CFL;
                        g_781.f1 = ((1L ^ (safe_sub_func_uint32_t_u_u(l_829[1][2][0].f5, (safe_rshift_func_uint16_t_u_s((l_822.f4 = g_435.f0), (func_13((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_9, (safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(func_53(g_779[0][1][3].f4), (safe_mul_func_uint8_t_u_u(l_829[1][2][0].f3, l_829[1][2][0].f3)))) == (safe_lshift_func_uint8_t_u_s(p_9, g_435.f3))), l_784.f3)))), p_9)), p_9, l_920, l_783, p_9) & 1L)))))) < 18446744073709551611UL);
                    }
                }
                g_781.f0 = (safe_rshift_func_int16_t_s_u((((g_347 = l_822.f3) & (safe_mod_func_int32_t_s_s((((((safe_add_func_int64_t_s_s(g_435.f2, g_50[2][8][0])) != l_783.f1) >= ((~((safe_mul_func_uint16_t_u_u(func_25(g_435, ((safe_mul_func_int8_t_s_s(7L, 0xFCL)) <= l_784.f1), p_9, l_931), p_9)) >= l_878.f5)) ^ l_878.f2)) & g_178) && l_932), 1UL))) != l_878.f1), g_799));
                if (g_435.f1)
                    continue;
                l_878 = l_933[2][0][1];
            }
            g_779[0][1][3] = g_779[0][1][3];
            if (l_934)
                break;
            for (g_683 = 0; (g_683 <= 1); g_683 += 1)
            {
                int l_945 = 0L;
                char l_946 = 1L;
                g_435.f1 = (l_822.f4 < (safe_sub_func_uint64_t_u_u((l_822.f1 & ((safe_lshift_func_int16_t_s_s((l_784.f3 < ((l_946 = ((p_9 <= (l_939 & ((l_811.f0 > (safe_mod_func_int32_t_s_s((g_781.f2 && (((l_783.f1 = p_9) >= (safe_mod_func_uint32_t_u_u(func_13(p_9, p_9, l_944, g_73, g_781.f3), l_945))) ^ g_435.f2)), l_945))) && 0x3EL))) >= 0x599CL)) != p_9)), g_862)) | 253UL)), l_829[1][2][0].f3)));
            }
        }
    }
    for (g_158 = 0; (g_158 > 20); g_158 = safe_add_func_int16_t_s_s(g_158, 3))
    {
        unsigned long long l_981 = 2UL;
        struct S0 l_997 = {-2217,5,129,3661,-14,11383};
        struct S0 l_1034 = {-6253,-4,-2,-2274,14,17849};
        for (g_334 = 0; (g_334 <= 0); g_334 += 1)
        {
            unsigned char l_949[8][9][3] = {{{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}, {{255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}, {255UL, 0x01L, 0x25L}}};
            struct S0 l_975 = {303,-3,-40,2562,3,22970};
            unsigned short l_1028 = 0xA38DL;
            int i, j, k;
            if (l_949[4][2][0])
            {
                struct S0 l_959 = {847,0,42,-3671,-1,8964};
                for (g_862 = 0; (g_862 <= 3); g_862 += 1)
                {
                    unsigned l_955 = 0x036919F7L;
                    int i, j, k;
                    if (g_347)
                        goto lbl_950;
                    l_782[(g_334 + 1)][g_862][g_334] = ((safe_mul_func_uint16_t_u_u(func_13((((safe_add_func_uint64_t_u_u((((l_955 = (l_832[3][3].f1 = (-5L))) != (func_13(((safe_sub_func_int8_t_s_s(g_177[(g_862 + 3)][g_862][(g_334 + 1)], 247UL)) && (0xABC33084L == 4294967295UL)), g_73.f3, g_779[g_862][(g_334 + 2)][(g_862 + 6)], g_73, l_958[1]) >= 0xA1L)) != 0x3EBCL), p_9)) ^ g_435.f2) ^ 0x60L), p_9, l_959, g_779[0][1][3], g_862), 1UL)) == g_73.f3);
                    return g_347;
                }
                l_811.f2 = (l_811.f1 = 0L);
            }
            else
            {
                unsigned char l_974 = 1UL;
                struct S0 l_977 = {2231,-6,-329,-630,-13,24828};
                unsigned l_992 = 3UL;
                if ((safe_lshift_func_int16_t_s_u(func_13(p_9, ((safe_sub_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((p_9 && (~5UL)), ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_73.f2, (l_811.f0 <= p_9))), 14)) ^ g_435.f1))) >= (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_779[0][1][3].f2, (0UL != l_974))), g_651))) <= l_949[4][2][0]), p_9)) | 0x02109CCCL), l_975, g_779[0][1][3], g_185), 11)))
                {
                    struct S0 l_976 = {9145,3,-309,-1274,6,8806};
                    l_977 = l_976;
                    if (p_9)
                    {
                        g_73.f4 = (safe_mod_func_int64_t_s_s(p_9, g_593));
                        g_781 = g_779[0][1][3];
                        if (l_975.f3)
                            goto lbl_950;
                        g_781.f2 = g_567;
                    }
                    else
                    {
                        l_811.f4 = (g_593 == g_268);
                        return p_9;
                    }
                }
                else
                {
                    int l_980 = 0x6EB46E01L;
                    l_980 = p_9;
                    return g_73.f3;
                }
                g_779[0][1][3] = g_73;
                l_981 = l_975.f3;
                g_779[0][1][3].f2 = ((((safe_mul_func_uint16_t_u_u(65528UL, ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_975.f0 = g_781.f5), ((0x3B91L >= (l_992 = (g_224 = g_779[0][1][3].f2))) | (p_9 == g_862)))), p_9)), func_13(((safe_sub_func_uint64_t_u_u((g_177[1][2][0] = l_977.f5), (safe_sub_func_uint64_t_u_u(((g_268 = l_981) | p_9), p_9)))) != l_949[6][4][0]), p_9, l_997, l_977, p_9))) == g_4) & p_9), g_781.f0)) >= 0x1ECA64F08DC98EE8LL))) & 65531UL) ^ 0x489FB64E3EC5CE6BLL) != l_975.f5);
            }
            for (g_593 = 0; (g_593 <= 0); g_593 += 1)
            {
                int l_1008 = 0x5166582CL;
                struct S0 l_1009 = {2527,-4,-312,488,-16,24202};
                char l_1010 = 0xEBL;
                if (l_997.f2)
                {
                    int i, j, k;
                    l_782[(g_334 + 6)][(g_334 + 5)][g_334] = (g_661[7] < 4UL);
                    l_782[(g_334 + 6)][(g_334 + 5)][g_334] = func_25(g_781, l_949[4][2][0], ((((0x041AFB61L > (p_9 ^ (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((p_9 != ((g_651 ^ (safe_lshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((func_13((g_73.f4 ^ 0x8966L), (l_1008 >= l_832[3][3].f2), l_1009, l_1009, p_9) | 7L) == g_178), l_811.f1)), 0x84L)) < p_9) == g_779[0][1][3].f3), 3))) != l_782[(g_334 + 6)][(g_334 + 5)][g_334])), p_9)) == 0xA6F3496EAF3151B5LL), 1)))) & g_334) & p_9) == l_782[(g_334 + 6)][(g_334 + 5)][g_334]), g_435.f5);
                    l_997.f4 = (0x9C0083A5L | 0L);
                }
                else
                {
                    struct S0 l_1011 = {8905,-6,-352,-1534,10,9654};
                    l_1009.f4 = g_531;
                    if (p_9)
                        break;
                    if (p_9)
                    {
                        l_997.f3 = g_651;
                        g_779[0][1][3].f2 = g_73.f0;
                        g_435.f4 = l_1010;
                        l_1011 = g_779[0][1][3];
                    }
                    else
                    {
                        int l_1020 = (-1L);
                        int l_1025 = 5L;
                        l_975 = l_832[3][3];
                        l_997 = l_997;
                        l_975.f0 = ((l_1011.f2 && p_9) | (func_13(g_73.f5, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_435.f4 = (safe_add_func_int32_t_s_s(p_9, (safe_sub_func_uint64_t_u_u((g_177[3][3][1] = l_1020), ((l_1028 = (safe_rshift_func_int8_t_s_u(((l_1025 = (safe_rshift_func_int16_t_s_s(l_832[3][3].f3, 9))) > (safe_rshift_func_int16_t_s_s(p_9, 9))), 2))) < (l_1011.f1 < func_13(p_9, g_4, g_435, g_779[2][2][6], p_9)))))))), g_567)), 0x2FL)), g_779[4][1][6], g_779[0][1][3], g_593) & 1L));
                        l_1029 = g_73;
                    }
                    l_975.f2 = p_9;
                }
                l_997.f3 = l_1028;
                for (g_683 = 0; (g_683 <= 2); g_683 += 1)
                {
                    struct S0 l_1032[5] = {{-2541,-1,-108,2627,-3,27297}, {-4202,-7,296,-2188,-2,5521}, {-2541,-1,-108,2627,-3,27297}, {-4202,-7,296,-2188,-2,5521}, {-2541,-1,-108,2627,-3,27297}};
                    int i, j, k;
                    l_832[3][3].f0 = (((g_177[(g_683 + 6)][(g_683 + 2)][g_683] != (g_224 = g_651)) <= (g_435.f2 = (l_811.f3 = l_811.f4))) <= ((safe_rshift_func_uint16_t_u_u(g_185, 1)) & l_997.f3));
                    for (l_796 = 2; (l_796 <= 7); l_796 += 1)
                    {
                        struct S0 l_1033 = {8150,6,267,-1159,12,10897};
                        int i, j, k;
                        l_975 = l_1032[0];
                        g_73.f4 = g_177[(g_593 + 7)][(g_334 + 6)][(g_593 + 2)];
                        l_1033 = l_1033;
                    }
                    g_779[0][1][3].f3 = (l_1029.f4 == 4294967286UL);
                    g_779[4][3][6] = g_779[0][1][3];
                }
            }
        }
        if (g_799)
            goto lbl_950;
        l_1029 = l_997;
        g_779[0][1][3].f2 = (func_13(g_661[4], func_13(p_9, l_997.f5, l_832[3][3], l_997, l_997.f3), g_435, (l_1034 = l_997), g_78) != 0x21B2L);
    }
    return p_9;
}







static int func_13(int p_14, unsigned long long p_15, struct S0 p_16, struct S0 p_17, long long p_18)
{
    p_17 = g_781;
    return p_17.f1;
}







static struct S0 func_20(unsigned long long p_21)
{
    unsigned short l_633 = 0UL;
    int l_663 = (-10L);
    struct S0 l_692 = {-4579,6,262,3446,18,9716};
    if ((safe_mod_func_int16_t_s_s(func_25(func_30(p_21), (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_21, (p_21 != (l_633 != g_4)))), 0)), ((safe_add_func_int16_t_s_s(l_633, 65535UL)) | ((4294967290UL <= 0x5776673DL) == g_4)), p_21), 0x83C1L)))
    {
        unsigned l_662 = 0x1E6DDBA0L;
        for (g_158 = 0; (g_158 != (-13)); g_158 = safe_sub_func_int8_t_s_s(g_158, 1))
        {
            g_651 = g_334;
        }
        for (g_185 = 0; (g_185 > (-11)); g_185 = safe_sub_func_int64_t_s_s(g_185, 3))
        {
            unsigned l_656 = 0xA4F72AE5L;
            if ((safe_lshift_func_int16_t_s_s((+((p_21 >= (l_656 != (safe_unary_minus_func_uint32_t_u((((safe_unary_minus_func_uint32_t_u(0xEEAD9430L)) > (((-2L) || (0xE913FFBF59E1BCCELL || (safe_sub_func_int8_t_s_s(((p_21 | (g_661[7] = p_21)) ^ (+p_21)), (p_21 >= g_567))))) & p_21)) <= 0x7336L))))) > 65535UL)), l_662)))
            {
                if (p_21)
                    break;
                g_178 = 0x24DB87E6L;
            }
            else
            {
                unsigned l_664[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_664[i] = 0x083135D1L;
                l_664[0] = (l_663 = p_21);
            }
        }
    }
    else
    {
        char l_669 = 6L;
        int l_673 = 5L;
        int l_691 = 1L;
        struct S0 l_697 = {-5912,-5,290,-2177,18,11715};
        unsigned short l_760 = 0xEC85L;
        char l_778 = 5L;
        for (g_334 = 0; (g_334 <= 7); g_334 += 1)
        {
            char l_682 = 0x81L;
            int l_684 = 0xB797DB21L;
            struct S0 l_710 = {10331,-5,88,2891,0,3863};
            unsigned char l_749 = 0xFFL;
            if ((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((l_633 | ((l_669 = (-1L)) ^ p_21)) != (0x1AL == (((p_21 ^ ((safe_add_func_uint32_t_u_u((!(safe_unary_minus_func_uint8_t_u(g_73.f5))), l_633)) | g_593)) && func_58(func_25(g_73, g_661[3], p_21, l_633), l_673, l_673, l_633)) > 4294967295UL))), g_435.f0)) >= p_21) >= 2UL), 1)))
            {
                unsigned char l_705 = 1UL;
                int l_726[1][6] = {{(-1L), (-1L), 0xCB8E8C6CL, (-1L), (-1L), 0xCB8E8C6CL}};
                struct S0 l_748 = {554,-5,-162,-2133,1,15973};
                int i, j;
                for (g_567 = 0; (g_567 <= 1); g_567 += 1)
                {
                    int i;
                    l_663 = func_25(g_435, g_661[g_334], (safe_rshift_func_uint8_t_u_u((l_673 = (p_21 != (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((g_651 = 0xC023L) != ((g_5 || (p_21 < (p_21 < g_185))) && (((l_682 = func_58((p_21 && 0L), g_347, l_673, p_21)) <= 0x7BL) <= g_683))) > 0x424E7759L), p_21)) < 0L), 0)))), 2)), l_684);
                    for (g_651 = 0; (g_651 <= 7); g_651 += 1)
                    {
                        unsigned char l_689 = 0x9FL;
                        int l_690[5] = {0L, 0L, 0L, 0L, 0L};
                        int i;
                        g_435.f2 = (g_661[g_334] || (g_435.f1 = (safe_add_func_uint8_t_u_u((g_683 = (safe_mul_func_int8_t_s_s((l_673 == func_58((g_347 = l_682), l_689, (l_690[0] = (0xADE3L & (l_663 = g_224))), p_21)), l_633))), p_21))));
                        l_691 = g_73.f4;
                    }
                }
                for (g_224 = 7; (g_224 >= 0); g_224 -= 1)
                {
                    if (g_435.f0)
                        break;
                    return l_692;
                }
                if (g_531)
                    break;
                if ((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0xF06AL, (l_691 = g_435.f1))), (-10L))))
                {
                    int l_704 = 0x3C968471L;
                    char l_711 = (-1L);
                    for (g_651 = 0; (g_651 <= 7); g_651 += 1)
                    {
                        return g_73;
                    }
                    for (l_669 = 0; (l_669 <= 7); l_669 += 1)
                    {
                        l_697 = g_73;
                    }
                    if ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_u((l_684 = p_21), 7)))))
                    {
                        g_73 = l_692;
                        if (g_347)
                            break;
                    }
                    else
                    {
                        unsigned long long l_703[5] = {0xA9C9087BE189F12ALL, 0UL, 0xA9C9087BE189F12ALL, 0UL, 0xA9C9087BE189F12ALL};
                        int l_712[3];
                        struct S0 l_719[3] = {{-11219,-4,73,2593,8,14472}, {-11219,-4,73,2593,8,14472}, {-11219,-4,73,2593,8,14472}};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_712[i] = 0L;
                        l_705 = (safe_mod_func_int32_t_s_s(func_58(l_703[2], l_673, l_704, g_73.f4), 1UL));
                        l_712[1] = (+(func_58(p_21, p_21, ((safe_add_func_uint8_t_u_u(((g_651 = ((safe_mul_func_int8_t_s_s(l_703[2], ((func_25((l_710 = g_435), g_73.f0, (l_692.f0 = g_191), g_177[3][3][1]) == g_177[3][3][1]) & g_177[3][5][0]))) <= l_705)) > (-4L)), l_711)) & g_73.f4), p_21) > 0xEE5B0122L));
                        if (p_21)
                            break;
                        l_710.f2 = (g_178 = (((!(func_25(g_73, g_3, (l_726[0][0] = (safe_sub_func_int16_t_s_s(((g_683 | ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_25((g_435 = l_719[1]), (safe_mod_func_int16_t_s_s(g_177[3][3][1], l_692.f1)), (safe_rshift_func_int16_t_s_s((l_697.f3 <= (safe_add_func_int8_t_s_s((l_691 = g_599), p_21))), 15)), p_21), 5)), l_705)) | 0x75L)) || l_719[1].f4), 1L))), l_710.f4) == p_21)) > p_21) & (-1L)));
                    }
                }
                else
                {
                    unsigned long long l_735 = 7UL;
                    int l_747 = 0L;
                    if (func_25(g_435, l_663, (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(l_692.f2, 0)) & (l_735 = (l_726[0][0] = (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x9AL, 0)), p_21))))), p_21)), (1L | func_58(g_347, l_697.f4, l_692.f3, l_710.f2))))
                    {
                        short l_746 = (-5L);
                        l_726[0][0] = (((safe_mul_func_int8_t_s_s(l_735, ((l_710.f1 = (safe_sub_func_int8_t_s_s(0x66L, ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((g_73.f5 = l_746), ((l_747 = (g_50[1][4][1] = (((((0x21767971L >= l_735) || 0x65L) >= (0xB9E0F150A325ABCFLL != (func_25((g_435 = l_710), g_347, p_21, g_185) != 0x1E92F6AFL))) >= 0xB4L) || 0x9BED7005L))) && 7UL))), l_735)), p_21)) && g_158)))) && g_435.f0))) >= p_21) || l_746);
                        if (g_3)
                            continue;
                        g_435 = l_748;
                    }
                    else
                    {
                        l_749 = p_21;
                    }
                    l_710.f1 = func_58(p_21, (safe_mul_func_uint8_t_u_u(((p_21 <= ((p_21 <= (safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_73.f4, (safe_sub_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((l_692.f1 = ((p_21 & 1L) < ((!l_692.f0) > g_73.f0))), func_25(g_435, l_710.f2, g_661[0], l_760))) <= g_761) > 0x33FAFF0BL), p_21)))), l_697.f3))) || g_435.f5)) | 0x7DC764D9L), p_21)), l_735, l_692.f2);
                    if (l_747)
                    {
                        struct S0 l_762 = {-9358,3,258,4083,-3,15804};
                        return l_762;
                    }
                    else
                    {
                        int l_765 = 0L;
                        l_765 = func_25(g_73, (g_191 = (g_683 || (1UL || (func_25(l_710, g_593, p_21, (l_747 = p_21)) >= ((g_651 = g_78) == l_765))))), l_710.f5, g_531);
                        l_697 = l_692;
                        g_435 = l_748;
                    }
                    for (l_735 = 0; (l_735 <= 1); l_735 += 1)
                    {
                        long long l_766 = 0x758FE24823B7ECBDLL;
                        g_73.f0 = l_697.f5;
                        g_435.f3 = (l_766 <= l_766);
                        g_435 = l_748;
                        g_73.f2 = p_21;
                    }
                }
            }
            else
            {
                unsigned long long l_769 = 1UL;
                int l_770 = 0L;
                struct S0 l_772 = {10984,2,104,3447,11,27571};
                for (l_669 = 2; (l_669 <= 7); l_669 += 1)
                {
                    unsigned long long l_771 = 0x77DB8056D0F04F42LL;
                    long long l_777[10] = {0xDE6748BC6336FE9DLL, 0L, 0xDE6748BC6336FE9DLL, 0L, 0xDE6748BC6336FE9DLL, 0L, 0xDE6748BC6336FE9DLL, 0L, 0xDE6748BC6336FE9DLL, 0L};
                    int i;
                    l_770 = ((p_21 && (p_21 & (safe_mul_func_int16_t_s_s(l_697.f1, (-1L))))) >= (l_769 = 65533UL));
                    l_778 = func_58(l_770, (~func_58(l_771, g_191, l_771, func_25(l_772, p_21, func_25(g_73, (g_158 = (safe_mod_func_uint64_t_u_u(0xA90055F8D67872DALL, (safe_mod_func_int32_t_s_s(l_777[8], 6UL))))), p_21, g_73.f0), p_21))), g_683, g_599);
                    for (l_770 = 5; (l_770 >= 0); l_770 -= 1)
                    {
                        return g_435;
                    }
                }
            }
            return l_692;
        }
    }
    return l_692;
}







static short func_25(struct S0 p_26, int p_27, char p_28, char p_29)
{
    char l_638 = (-2L);
    g_435.f4 = ((((safe_lshift_func_uint16_t_u_u(p_29, l_638)) == ((((safe_rshift_func_uint16_t_u_s((((+(safe_add_func_uint8_t_u_u(0x34L, g_50[2][8][0]))) != ((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(0x9CL, p_26.f4)), g_435.f5)) <= ((safe_sub_func_uint64_t_u_u(p_28, 0xD1A170114457EC80LL)) != g_224))) <= 0x9CECL), 2)) | g_435.f4) & g_78) < g_567)) && 0xCC6D0255L) & g_191);
    return g_177[1][8][0];
}







static struct S0 func_30(int p_31)
{
    char l_32 = 0xC7L;
    int l_43 = 2L;
    int l_404 = 0L;
    int l_627[6] = {(-7L), (-7L), 0xDE413944L, (-7L), (-7L), 0xDE413944L};
    unsigned long long l_628 = 1UL;
    int i;
    l_32 = (p_31 && g_4);
    for (l_32 = (-12); (l_32 <= 5); l_32 = safe_add_func_uint64_t_u_u(l_32, 1))
    {
        int l_41 = 0xB40437E1L;
        for (p_31 = 0; (p_31 >= 9); p_31 = safe_add_func_int64_t_s_s(p_31, 1))
        {
            unsigned char l_42 = 0xC2L;
            l_41 = func_37((l_43 = (l_41 | (l_42 = 0xBAL))), p_31, (l_404 = (0xEA1E1734L || (safe_add_func_int16_t_s_s(0x9C1CL, (safe_unary_minus_func_int64_t_s(func_47(p_31))))))));
            if ((!(safe_mod_func_int8_t_s_s(p_31, (safe_unary_minus_func_int64_t_s(p_31))))))
            {
                g_73.f4 = p_31;
            }
            else
            {
                for (g_593 = (-30); (g_593 == 33); g_593++)
                {
                    l_404 = (p_31 >= (0xC023L | func_53(g_593)));
                }
            }
            g_435.f3 = (l_42 > g_73.f4);
        }
    }
    l_627[2] = func_58((!l_32), (0xF867AF04BF912FF2LL == l_404), g_435.f4, ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((0x1A17L && (func_53((l_627[2] = (g_567 | (safe_add_func_uint8_t_u_u((((l_43 = (g_531 = (2L | func_47(p_31)))) && g_531) == l_404), l_32))))) ^ 0UL)) == l_628), 0x9786E709L)), g_5)) | 0xB5L));
    return g_73;
}







static int func_37(int p_38, long long p_39, short p_40)
{
    unsigned short l_405[5][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
    int l_406 = 0x6C95099FL;
    struct S0 l_411 = {-9210,2,105,-3075,3,18795};
    unsigned short l_442 = 0xCC96L;
    int l_467[9][10] = {{0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}, {0L, 0L, 0x89E9E98AL, 0L, 0L, 1L, 0L, 0L, 0x89E9E98AL, 0L}};
    long long l_608 = 0xB2789D47FD82C257LL;
    int i, j;
    if (((l_406 = (l_405[4][0] = 1UL)) || ((-6L) || g_73.f5)))
    {
        return g_4;
    }
    else
    {
        int l_414 = (-1L);
        int l_418 = (-1L);
        int l_419 = 0L;
        struct S0 l_434[1] = {{10041,-5,-245,3538,4,18793}};
        unsigned short l_510 = 65533UL;
        struct S0 l_559 = {-291,-4,87,-2927,-14,18592};
        int i;
        for (g_268 = 0; (g_268 == 16); g_268 = safe_add_func_int32_t_s_s(g_268, 3))
        {
            int l_409[7][2][5] = {{{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}, {{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}, {{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}, {{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}, {{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}, {{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}, {{0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}, {0x69E232B5L, 0xBC8717C1L, (-1L), 0L, (-1L)}}};
            int l_415 = 0L;
            unsigned l_425 = 1UL;
            int i, j, k;
            l_406 = (func_58(g_73.f5, l_409[5][0][1], l_405[4][0], g_73.f3) && (p_40 != (((0UL && g_50[2][8][0]) == (g_78 = 0x84443CD0L)) | l_409[0][1][1])));
            for (p_39 = 0; (p_39 <= 0); p_39 += 1)
            {
                struct S0 l_410[3][4][8] = {{{{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}}, {{{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}}, {{{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}, {{-2103,-5,-139,534,2,451}, {-1575,7,-164,-1739,-8,26405}, {-10748,2,103,-2242,2,20290}, {-2263,-1,-190,-369,11,5510}, {-2263,-1,-190,-369,11,5510}, {-10748,2,103,-2242,2,20290}, {-1575,7,-164,-1739,-8,26405}, {-2103,-5,-139,534,2,451}}}};
                int i, j, k;
                l_411 = l_410[0][2][7];
                for (g_347 = 0; (g_347 <= 2); g_347 += 1)
                {
                    int i, j;
                    return l_405[(p_39 + 4)][p_39];
                }
            }
            if ((safe_rshift_func_uint8_t_u_s((l_415 = ((l_414 = 4L) && 0x9BD8FBE61E8B4579LL)), ((safe_mul_func_uint8_t_u_u(g_224, (p_40 >= 0L))) >= (l_419 = l_418)))))
            {
                int l_422 = 0xD059F32DL;
                int l_430[5][6][4] = {{{(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}}, {{(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}}, {{(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}}, {{(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}}, {{(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}, {(-1L), (-3L), (-1L), (-3L)}}};
                int i, j, k;
                l_411.f3 = (safe_sub_func_uint64_t_u_u(l_422, (l_422 == ((-9L) | ((safe_mod_func_uint8_t_u_u((l_425 >= g_5), (safe_mod_func_uint64_t_u_u((p_40 <= (safe_mod_func_uint64_t_u_u(p_38, func_58((l_430[1][1][1] = ((l_422 >= p_39) != (-1L))), g_268, l_411.f3, p_38)))), g_334)))) == g_5)))));
                if ((!(l_430[1][1][1] = (safe_mod_func_int8_t_s_s(l_430[3][1][0], p_40)))))
                {
                    struct S0 l_433 = {3124,5,210,960,21,8310};
                    g_435 = (l_434[0] = (g_73 = l_433));
                }
                else
                {
                    return p_40;
                }
            }
            else
            {
                for (g_224 = (-29); (g_224 != (-14)); g_224 = safe_add_func_uint16_t_u_u(g_224, 4))
                {
                    if (p_39)
                    {
                        g_73.f0 = (p_40 >= (0x1A8B6355B149D69ELL ^ (safe_rshift_func_uint8_t_u_s((((g_435.f3 == (safe_rshift_func_int8_t_s_s(g_158, 1))) >= l_442) > ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((p_38 && (safe_add_func_int8_t_s_s((l_425 || p_38), (safe_mul_func_int8_t_s_s(g_334, 0x41L))))))), l_411.f5)) && 3L)), 3))));
                    }
                    else
                    {
                        return g_73.f4;
                    }
                }
                for (g_178 = 0; (g_178 <= 2); g_178 += 1)
                {
                    for (l_419 = 0; (l_419 <= 1); l_419 += 1)
                    {
                        int i, j, k;
                        l_409[(g_178 + 2)][l_419][l_419] = (safe_rshift_func_int8_t_s_u(l_409[(l_419 + 1)][l_419][(l_419 + 2)], l_409[l_419][l_419][(g_178 + 2)]));
                        l_409[(g_178 + 4)][l_419][(l_419 + 3)] = g_177[(g_178 + 6)][l_419][l_419];
                    }
                    l_409[5][0][1] = 0xB945A0D4L;
                    for (g_334 = 0; (g_334 <= 1); g_334 += 1)
                    {
                        unsigned l_452 = 0x86A6AA8DL;
                        int l_453 = 9L;
                        int i, j, k;
                        g_73 = l_434[0];
                        l_453 = (l_409[(g_334 + 3)][g_334][(g_178 + 2)] = (+l_452));
                    }
                }
            }
        }
        g_435.f3 = (safe_mod_func_int16_t_s_s(p_38, l_414));
        if ((safe_add_func_uint64_t_u_u((((safe_unary_minus_func_uint16_t_u(func_58(g_177[3][3][1], ((safe_mul_func_uint16_t_u_u(g_435.f0, (l_411.f2 = (l_434[0].f3 = l_411.f2)))) == g_73.f5), (safe_add_func_uint64_t_u_u((l_411.f3 = (p_38 ^ (g_224 = 1L))), (l_418 = (safe_sub_func_uint16_t_u_u(p_38, (safe_lshift_func_int16_t_s_s(g_177[3][3][1], 3))))))), g_435.f5))) >= p_38) != l_467[3][7]), l_411.f1)))
        {
            short l_480 = 0xD36EL;
            int l_509 = (-1L);
            for (l_442 = (-21); (l_442 != 30); l_442 = safe_add_func_int8_t_s_s(l_442, 6))
            {
                int l_470 = 1L;
                int l_471 = 0xE8B507C8L;
                if (func_58(g_435.f0, (((((func_58((p_40 ^ p_39), g_50[1][5][0], (l_470 = l_405[4][0]), l_471) ^ (l_471 > ((safe_sub_func_uint64_t_u_u(l_471, p_39)) || g_268))) <= g_4) & l_471) || 0xEBC6L) > 4294967295UL), p_39, g_4))
                {
                    unsigned long long l_484 = 0x8394F8458BC244D7LL;
                    struct S0 l_493 = {2138,-6,95,3966,-8,526};
                    if (p_38)
                        break;
                    g_73 = l_434[0];
                    for (l_414 = 0; (l_414 != 16); ++l_414)
                    {
                        if (l_471)
                            break;
                    }
                    if ((~(g_5 && (l_406 && ((safe_sub_func_uint16_t_u_u((!(p_40 | 8UL)), (l_470 = (l_480 = (safe_mul_func_int16_t_s_s(g_435.f5, g_73.f2)))))) && (safe_unary_minus_func_uint64_t_u(((safe_lshift_func_int8_t_s_u(0x49L, 3)) >= (l_484 != (0x88929ECEL > p_38))))))))))
                    {
                        unsigned l_485 = 0xAF96384FL;
                        l_485 = p_40;
                    }
                    else
                    {
                        short l_492[8][4][7] = {{{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}, {{0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}, {0x7C38L, 0x9268L, 9L, 0x9A84L, 0xC8ECL, 0L, (-8L)}}};
                        struct S0 l_494 = {1880,7,-279,2672,-3,4823};
                        int i, j, k;
                        l_411.f2 = 0L;
                        l_470 = (l_411.f2 = (g_50[2][8][0] && (safe_mod_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(0L, (safe_sub_func_uint16_t_u_u(l_492[0][1][4], l_411.f4)))) != 2UL), g_78))));
                        l_494 = l_493;
                        l_493.f2 = ((safe_lshift_func_int16_t_s_s(p_38, ((safe_lshift_func_uint8_t_u_u(p_40, 7)) > ((safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(0L, 18446744073709551615UL)) <= (safe_mul_func_int8_t_s_s(((((l_494.f1 = g_3) <= func_47(((p_38 && 0x90A57B4C5D0B16ABLL) == p_40))) && p_40) ^ 0xA282L), p_40))), 18446744073709551615UL)) & l_480)))) <= l_434[0].f1);
                    }
                }
                else
                {
                    for (g_78 = (-29); (g_78 != 15); g_78++)
                    {
                        if (p_39)
                            break;
                        if (p_40)
                            continue;
                        return l_480;
                    }
                    g_73.f2 = g_268;
                    for (l_414 = (-25); (l_414 >= 14); l_414 = safe_add_func_int8_t_s_s(l_414, 1))
                    {
                        l_509 = (-1L);
                    }
                    l_510 = ((p_40 && p_40) ^ 0xA191L);
                }
            }
        }
        else
        {
            int l_515 = (-1L);
            long long l_521 = 0x9E580237C54F13C0LL;
            int l_540 = (-7L);
            int l_555 = 9L;
            struct S0 l_580 = {-9967,-6,-259,-946,7,31039};
            unsigned long long l_615 = 0xBE59D48200C6911ELL;
            g_435.f4 = (-1L);
            if ((l_411.f5 & (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(l_515, ((safe_add_func_uint64_t_u_u(0x26946EF3BAEC6196LL, (safe_mod_func_int64_t_s_s(l_411.f0, l_411.f0)))) <= 0xC1F3L))), 7))))
            {
                unsigned short l_520 = 65526UL;
                l_521 = (l_520 | p_39);
            }
            else
            {
                struct S0 l_522 = {-5520,-4,119,-1230,-10,16042};
                unsigned long long l_549 = 0x74FA4154E9C152D6LL;
                int l_573 = 0xBFA35C97L;
                unsigned short l_614 = 0x424CL;
                for (g_158 = 0; (g_158 <= 0); g_158 += 1)
                {
                    unsigned short l_526 = 9UL;
                    int l_550 = 0x85A82397L;
                    for (g_191 = 0; (g_191 <= 0); g_191 += 1)
                    {
                        unsigned long long l_525[5] = {0xE543EDD1927D9846LL, 0x3880A179FD71AAF2LL, 0xE543EDD1927D9846LL, 0x3880A179FD71AAF2LL, 0xE543EDD1927D9846LL};
                        int i;
                        l_434[g_191] = l_522;
                        l_418 = (safe_rshift_func_uint8_t_u_u(((l_411.f2 && l_525[2]) == (g_177[6][4][0] <= 0xA958A16C0D08B354LL)), (l_526 >= (((+(g_73.f1 == (l_522.f5 || ((g_531 = (safe_sub_func_int64_t_s_s(0L, (safe_add_func_uint8_t_u_u(p_40, g_191))))) ^ g_73.f5)))) < 0x90C2D174L) ^ g_435.f4))));
                        g_73.f3 = p_39;
                        g_435.f4 = (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((l_540 = p_38) <= (l_555 = ((252UL <= l_515) >= (safe_mod_func_int64_t_s_s((((l_411.f1 = ((l_522.f4 = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(l_549, (l_550 = g_73.f0))), (safe_add_func_int32_t_s_s(0x10394931L, ((((+g_435.f1) < (safe_lshift_func_int8_t_s_u(g_50[2][8][0], 0))) != (0x3055E7B11C59B1BBLL & g_185)) && p_39))))) & l_434[g_191].f2), 0x15L)) | p_39)) >= p_38)) ^ g_73.f2) > 0x2442L), p_38))))) & 0x10L), 0UL)), g_435.f4)), g_224)) ^ g_178) != g_185), 7));
                    }
                    if (g_435.f3)
                        break;
                }
                l_434[0] = g_73;
                if ((6L ^ p_40))
                {
                    struct S0 l_556[6][2] = {{{-11518,3,85,-3142,-5,7374}, {-7117,6,87,3427,18,821}}, {{-11518,3,85,-3142,-5,7374}, {-7117,6,87,3427,18,821}}, {{-11518,3,85,-3142,-5,7374}, {-7117,6,87,3427,18,821}}, {{-11518,3,85,-3142,-5,7374}, {-7117,6,87,3427,18,821}}, {{-11518,3,85,-3142,-5,7374}, {-7117,6,87,3427,18,821}}, {{-11518,3,85,-3142,-5,7374}, {-7117,6,87,3427,18,821}}};
                    unsigned short l_572 = 0x6A1DL;
                    unsigned long long l_578 = 0UL;
                    int i, j;
                    l_556[3][1] = g_435;
                    for (l_515 = (-11); (l_515 <= (-20)); l_515 = safe_sub_func_int8_t_s_s(l_515, 2))
                    {
                        unsigned l_560 = 1UL;
                        l_559 = g_435;
                        if (g_3)
                            goto lbl_579;
                        return l_560;
                    }
                    l_573 = ((l_555 = l_405[3][0]) & (safe_lshift_func_int8_t_s_u(p_39, ((65535UL < (((g_435.f5 = (~func_53(p_39))) > ((l_434[0].f2 = (safe_mul_func_uint16_t_u_u(((g_567 = (safe_rshift_func_uint16_t_u_u(g_435.f2, 15))) >= p_39), (((safe_lshift_func_int16_t_s_u((p_40 = g_435.f4), 9)) && (safe_add_func_int64_t_s_s(l_559.f5, l_572))) && 0L)))) & 0x0FC9L)) < g_3)) == g_5))));
                    if ((l_555 = (safe_mul_func_int8_t_s_s(0xFAL, l_522.f0))))
                    {
lbl_579:
                        l_573 = (safe_add_func_uint32_t_u_u(l_578, g_5));
                        return p_38;
                    }
                    else
                    {
                        l_580 = l_580;
                        return p_40;
                    }
                }
                else
                {
                    short l_590 = 0xD80BL;
                    unsigned l_598[1];
                    unsigned char l_609 = 250UL;
                    struct S0 l_610 = {5581,-1,-206,3264,4,31714};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_598[i] = 0xDD325661L;
                    for (l_521 = 14; (l_521 < 19); l_521 = safe_add_func_uint32_t_u_u(l_521, 1))
                    {
                        unsigned char l_583 = 0x2CL;
                        l_434[0].f2 = (g_50[1][0][1] || ((l_583 | l_406) | (safe_mul_func_uint8_t_u_u((g_599 = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_590, 14)), ((l_411.f1 = func_58(l_590, (safe_sub_func_int64_t_s_s(l_411.f1, (((l_559.f1 = g_5) ^ ((g_73.f5 = g_593) >= ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_50[2][6][1], (-1L))), l_522.f3)) >= l_590))) != l_540))), p_39, l_598[0])) | 0UL))) <= l_598[0])), 0xEAL))));
                        if (g_73.f3)
                            continue;
                        l_609 = ((+0x81B718C0L) > (safe_mod_func_uint64_t_u_u(((p_40 = (safe_rshift_func_uint16_t_u_s(65535UL, ((safe_lshift_func_int16_t_s_u(l_580.f3, ((l_549 | p_39) >= (safe_mod_func_int8_t_s_s((g_185 = (0x61D0L == l_583)), l_580.f4))))) < l_608)))) != l_580.f5), l_521)));
                    }
lbl_613:
                    l_559 = (l_411 = l_610);
                    for (g_185 = 29; (g_185 < 11); --g_185)
                    {
                        if (l_522.f4)
                            goto lbl_613;
                        l_411.f1 = 0xC5D3A1B6L;
                        l_580.f2 = (l_411.f1 = (g_435.f0 = (p_39 >= ((l_609 && l_614) == l_615))));
                    }
                }
            }
        }
        l_434[0] = g_73;
    }
    l_411 = g_435;
    for (l_608 = 0; l_608 < 3; l_608 += 1)
    {
        for (g_599 = 0; g_599 < 10; g_599 += 1)
        {
            for (g_191 = 0; g_191 < 2; g_191 += 1)
            {
                g_50[l_608][g_599][g_191] = 0xFDC1L;
            }
        }
    }
    return p_40;
}







static long long func_47(unsigned long long p_48)
{
    unsigned short l_49 = 0x4DBCL;
    int l_393 = 0L;
    g_50[2][8][0] = l_49;
    l_393 = (safe_mod_func_int32_t_s_s(((l_49 || 0x668F781BL) & func_53(g_3)), (l_393 || (l_49 ^ ((safe_mod_func_int8_t_s_s((0UL | (safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((-1L), (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_49, p_48)), 0x4EL)))), l_49))), g_4)) > g_3)))));
    return g_177[3][3][1];
}







static int func_53(unsigned p_54)
{
    unsigned short l_57 = 65535UL;
    int l_313[3][8] = {{2L, (-1L), 0x1E27FDB5L, 0xE0DB1E4FL, 0xE0DB1E4FL, 0x1E27FDB5L, (-1L), 2L}, {2L, (-1L), 0x1E27FDB5L, 0xE0DB1E4FL, 0xE0DB1E4FL, 0x1E27FDB5L, (-1L), 2L}, {2L, (-1L), 0x1E27FDB5L, 0xE0DB1E4FL, 0xE0DB1E4FL, 0x1E27FDB5L, (-1L), 2L}};
    struct S0 l_319[10] = {{8165,-1,-361,790,-14,29095}, {8165,-1,-361,790,-14,29095}, {7688,-7,22,-322,5,11526}, {8165,-1,-361,790,-14,29095}, {8165,-1,-361,790,-14,29095}, {7688,-7,22,-322,5,11526}, {8165,-1,-361,790,-14,29095}, {8165,-1,-361,790,-14,29095}, {7688,-7,22,-322,5,11526}, {8165,-1,-361,790,-14,29095}};
    struct S0 l_341[9] = {{-1279,-0,165,1409,3,6425}, {-9148,0,293,-136,-1,20796}, {-1279,-0,165,1409,3,6425}, {-9148,0,293,-136,-1,20796}, {-1279,-0,165,1409,3,6425}, {-9148,0,293,-136,-1,20796}, {-1279,-0,165,1409,3,6425}, {-9148,0,293,-136,-1,20796}, {-1279,-0,165,1409,3,6425}};
    unsigned l_352 = 0x5B07062BL;
    int i, j;
    for (p_54 = (-6); (p_54 <= 30); p_54++)
    {
        unsigned char l_71 = 0xD5L;
        int l_312[9] = {0xA690D6E4L, 0x48DD55F3L, 0xA690D6E4L, 0x48DD55F3L, 0xA690D6E4L, 0x48DD55F3L, 0xA690D6E4L, 0x48DD55F3L, 0xA690D6E4L};
        struct S0 l_337[4] = {{-2128,-7,-285,601,-11,26088}, {-6838,2,153,-3547,14,16795}, {-2128,-7,-285,601,-11,26088}, {-6838,2,153,-3547,14,16795}};
        int i;
        l_57 = g_4;
        l_313[0][3] = (l_312[5] = func_58(g_50[2][0][0], (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_50[1][9][1], 15)), ((((g_3 && l_57) || 0UL) != (safe_mul_func_uint8_t_u_u(l_57, 2UL))) ^ p_54))), (((safe_mul_func_uint16_t_u_u(65535UL, 65531UL)) == l_71) == 65532UL), l_71));
        for (l_57 = 6; (l_57 <= 10); ++l_57)
        {
            unsigned l_353[2];
            int l_365 = 0xD613F7E5L;
            unsigned short l_376 = 1UL;
            int l_387 = 0x2142D83BL;
            long long l_392 = 0xB2E4FF05AF4F6EB7LL;
            int i;
            for (i = 0; i < 2; i++)
                l_353[i] = 0x8426D6A8L;
            for (g_191 = 0; (g_191 > 17); g_191 = safe_add_func_uint16_t_u_u(g_191, 7))
            {
                l_312[5] = 0x3FEF63F6L;
            }
            if ((g_73.f1 = 1L))
            {
                struct S0 l_318 = {1199,2,109,-2191,-16,12975};
                unsigned long long l_335[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_335[i] = 18446744073709551610UL;
                l_319[0] = l_318;
                if (p_54)
                    break;
                l_312[1] = (p_54 != l_318.f2);
                l_335[1] = (((g_50[2][8][0] = (safe_rshift_func_int8_t_s_s((l_318.f2 = (safe_lshift_func_int16_t_s_s((func_58(l_318.f1, (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(l_312[5], (safe_mod_func_uint64_t_u_u(18446744073709551609UL, p_54)))) & p_54), func_58(g_177[3][3][1], ((safe_rshift_func_uint16_t_u_u((g_334 = (l_318.f2 >= (safe_rshift_func_uint8_t_u_s(g_177[3][3][1], 2)))), 12)) == (l_318.f3 = p_54)), g_268, p_54))), g_3, l_312[5]) && p_54), p_54))), 6))) & p_54) != 1L);
            }
            else
            {
                struct S0 l_336[8] = {{9588,1,-18,3073,4,13281}, {1081,7,312,682,12,5615}, {9588,1,-18,3073,4,13281}, {1081,7,312,682,12,5615}, {9588,1,-18,3073,4,13281}, {1081,7,312,682,12,5615}, {9588,1,-18,3073,4,13281}, {1081,7,312,682,12,5615}};
                int i;
                g_73 = g_73;
                l_337[0] = l_336[4];
                if (p_54)
                    break;
                for (g_191 = 0; (g_191 == (-12)); --g_191)
                {
                    unsigned l_340[7];
                    struct S0 l_342 = {8927,-2,292,155,-16,22011};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_340[i] = 0x278F0932L;
                    g_73.f3 = l_340[2];
                    l_342 = l_341[1];
                    if (((safe_add_func_uint64_t_u_u((g_268 = (+((safe_rshift_func_int16_t_s_u((g_347 < ((l_336[4].f1 != (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((!((g_73.f4 >= (((l_337[0].f0 = 0xD628149473950678LL) < g_5) || (l_352 ^ (g_50[2][8][0] <= p_54)))) == (l_337[0].f3 = p_54))), l_340[2])), (-1L)))) & l_353[1])), p_54)) || (-1L)))), p_54)) == 0x27E4L))
                    {
                        unsigned short l_364 = 65535UL;
                        g_73.f0 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_54, (0xAB50F5A8L != (((+(g_73.f1 = p_54)) < (safe_lshift_func_uint16_t_u_s(p_54, 14))) != ((safe_rshift_func_uint16_t_u_u(l_71, 11)) >= (g_347 = g_73.f2)))))), p_54)) == (0L < (safe_lshift_func_int8_t_s_s(l_364, p_54))));
                        l_365 = (p_54 || g_50[2][6][0]);
                    }
                    else
                    {
                        g_73.f4 = (-1L);
                        g_178 = (safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_5, ((safe_add_func_uint64_t_u_u(g_3, g_191)) ^ 0xC8E1EB45L))), ((safe_mod_func_int32_t_s_s(p_54, (-1L))) | l_342.f3))) < 0x3F11E41DL) != g_3), g_347));
                        l_336[4].f0 = 1L;
                        g_73.f0 = ((-1L) || l_376);
                    }
                }
            }
            l_337[0].f1 = (0x31090EADL ^ (safe_add_func_uint64_t_u_u(p_54, (((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_312[6] = ((!(safe_sub_func_int16_t_s_s((g_224 = (l_376 != (((l_387 = 0xC56CL) != (((l_365 = (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((0xF600L ^ g_185), ((l_337[0].f0 = (l_341[1].f1 = (p_54 < ((!(l_352 == l_312[8])) && l_392)))) || p_54))), p_54))) < p_54) > l_312[1])) && 1L))), p_54))) == p_54)), 249UL)), 0x51L)) ^ 0UL) != g_178))));
            if (g_73.f2)
                break;
        }
    }
    l_319[5] = l_341[3];
    return l_319[0].f1;
}







static int func_58(unsigned short p_59, int p_60, unsigned p_61, int p_62)
{
    struct S0 l_74 = {10471,-2,233,2888,12,29067};
    struct S0 l_225 = {-1246,-7,-288,-1751,-20,32155};
    unsigned char l_241 = 0UL;
    unsigned long long l_300 = 5UL;
lbl_183:
    if (p_62)
    {
        struct S0 l_72 = {3744,6,-238,-2328,-2,22099};
        unsigned char l_99 = 6UL;
        for (p_60 = 1; (p_60 >= 0); p_60 -= 1)
        {
            struct S0 l_75 = {-2009,0,-158,-3672,19,30568};
            g_73 = l_72;
            g_73 = l_72;
            l_75 = l_74;
            for (p_61 = 0; (p_61 <= 1); p_61 += 1)
            {
                for (p_59 = 0; (p_59 <= 1); p_59 += 1)
                {
                    unsigned l_91 = 4294967295UL;
                    int l_92 = (-4L);
                    int i, j, k;
                    if ((safe_mul_func_int16_t_s_s((~g_50[p_61][p_59][p_60]), (g_50[(p_60 + 1)][(p_61 + 7)][p_61] && p_59))))
                    {
                        l_74.f4 = g_73.f3;
                    }
                    else
                    {
                        int i, j, k;
                        g_73.f1 = (0UL > (g_78 <= (safe_mul_func_int8_t_s_s((p_59 != ((safe_lshift_func_uint8_t_u_u(p_62, p_59)) < (l_75.f3 & g_50[2][8][0]))), (safe_rshift_func_uint8_t_u_s((l_92 = (safe_rshift_func_uint8_t_u_u(((l_75.f4 = (((l_75.f0 == (g_73.f5 = (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((p_61 >= 0x916079B8L), 4)), g_73.f3)))) == l_74.f5) && l_91)) == g_78), g_78))), 5))))));
                    }
                    l_75.f0 = l_74.f5;
                    l_74 = g_73;
                }
                g_73.f3 = (safe_mul_func_int16_t_s_s((l_75.f3 <= (g_73.f5 = p_62)), p_62));
                l_72 = l_74;
                l_74.f3 = g_5;
            }
        }
        for (p_62 = 0; (p_62 < (-5)); --p_62)
        {
            l_72 = l_74;
            for (p_60 = 16; (p_60 == 18); p_60 = safe_add_func_uint16_t_u_u(p_60, 2))
            {
                return l_72.f5;
            }
            g_73.f1 = l_99;
        }
        return g_50[0][0][0];
    }
    else
    {
        int l_102 = 0L;
        int l_144 = 0xD7C78B5DL;
        struct S0 l_161[8][5] = {{{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}, {{-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}, {-9567,1,60,-2060,13,14611}, {-7208,-4,-210,-895,4,14830}, {-7208,-4,-210,-895,4,14830}}};
        int i, j;
lbl_146:
        g_73.f2 = (l_74.f5 & (l_102 = (safe_mod_func_uint16_t_u_u((p_59 = g_73.f1), (8UL & g_50[2][8][0])))));
        for (p_61 = 0; (p_61 <= 1); p_61 += 1)
        {
            struct S0 l_103 = {2931,6,-247,-1686,-10,4004};
            l_103 = l_103;
            for (g_78 = 1; (g_78 >= 0); g_78 -= 1)
            {
                unsigned short l_114[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_114[i] = 0xB942L;
                g_73.f3 = (safe_mul_func_uint8_t_u_u(0x9BL, (1L > (safe_sub_func_int32_t_s_s(p_59, 0xA0C8E20BL)))));
                if ((((g_73.f5 = g_78) || (safe_add_func_uint32_t_u_u(g_73.f3, g_50[2][8][0]))) | (l_103.f2 = g_73.f4)))
                {
                    g_73.f2 = ((g_78 && g_4) >= (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((g_50[2][8][0] && (l_114[0] & (p_62 >= (+((safe_mul_func_int8_t_s_s(0x17L, (safe_mul_func_int8_t_s_s((((l_103.f4 = (l_103.f0 = (+(safe_sub_func_int64_t_s_s(p_61, (4294967295UL && (safe_rshift_func_int16_t_s_u(g_50[1][4][1], g_4)))))))) || (-1L)) < 0L), 0xA4L)))) == g_4))))), p_59)), 0x0CL)));
                    g_73 = g_73;
                }
                else
                {
                    int l_123 = (-1L);
                    l_123 = (p_61 & g_73.f4);
                }
                for (p_59 = 0; (p_59 <= 1); p_59 += 1)
                {
                    int l_125 = (-9L);
                    int i, j, k;
                    if (((g_50[p_61][(p_61 + 7)][p_61] >= (l_125 = (safe_unary_minus_func_int32_t_s(p_62)))) | (safe_sub_func_uint8_t_u_u((l_74.f3 = ((g_73.f5 | (~((~(l_74.f4 = 65535UL)) && ((safe_mul_func_uint16_t_u_u((g_50[p_61][(p_61 + 7)][p_61] || p_61), l_103.f5)) & 0x557B4538L)))) | l_74.f2)), 1L))))
                    {
                        unsigned l_132 = 6UL;
                        int l_135 = 0xCF39239EL;
                        int l_145 = 6L;
                        l_135 = ((+(safe_add_func_uint32_t_u_u(l_132, (safe_mul_func_uint8_t_u_u(g_50[1][1][1], 0UL))))) > g_73.f0);
                        g_73.f4 = (g_73.f1 = (((1L < (safe_mod_func_uint32_t_u_u(g_73.f0, (l_145 = (safe_mod_func_uint8_t_u_u(p_59, ((safe_rshift_func_uint16_t_u_u((g_73.f1 >= (0xFC450F0CL ^ (l_135 = l_102))), (safe_lshift_func_uint8_t_u_u((l_144 = g_73.f5), 3)))) ^ (((l_102 && p_61) | p_61) <= g_73.f2)))))))) == 0xCAL) == g_73.f0));
                    }
                    else
                    {
                        struct S0 l_147[1][6] = {{{2076,6,-101,3069,20,29805}, {8587,-5,283,1238,5,493}, {2076,6,-101,3069,20,29805}, {8587,-5,283,1238,5,493}, {2076,6,-101,3069,20,29805}, {8587,-5,283,1238,5,493}}};
                        int i, j;
                        if (l_74.f3)
                            goto lbl_146;
                        l_102 = l_144;
                        if (l_103.f3)
                            goto lbl_146;
                        l_147[0][4] = g_73;
                    }
                }
            }
        }
        for (p_59 = 21; (p_59 != 43); p_59 = safe_add_func_uint64_t_u_u(p_59, 7))
        {
            int l_159 = 0xC57956B0L;
            int l_160 = (-1L);
            g_73.f0 = l_102;
            l_160 = (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((g_50[2][8][0] & (safe_rshift_func_uint16_t_u_s(p_61, l_144))), g_3)), (safe_mod_func_int16_t_s_s((((l_102 = g_5) || (((((l_102 | (p_59 > (0x20DCL > (g_158 = p_61)))) != l_159) ^ 0xAD39L) < l_102) ^ p_62)) >= p_59), g_73.f1))));
        }
        g_73 = l_161[2][4];
    }
    for (p_61 = 0; (p_61 <= 55); p_61 = safe_add_func_uint8_t_u_u(p_61, 8))
    {
        short l_184 = (-1L);
        int l_197[2];
        struct S0 l_242 = {-1727,-7,200,-797,2,19114};
        unsigned l_288[5][8][6] = {{{0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}}, {{0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}}, {{0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}}, {{0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}}, {{0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}, {0UL, 0x6C7C8E04L, 1UL, 1UL, 4294967295UL, 0xA6F53CE4L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_197[i] = 0L;
        for (g_78 = (-28); (g_78 > (-26)); g_78 = safe_add_func_int64_t_s_s(g_78, 8))
        {
            unsigned char l_179 = 0xE0L;
            unsigned short l_181 = 0xC641L;
            int l_182 = 4L;
            struct S0 l_194 = {6392,-6,-142,-1778,10,20085};
            unsigned l_209 = 0x34B0F5AFL;
            long long l_257 = 0x4EE2C13680D2039CLL;
            for (p_60 = 22; (p_60 < (-15)); p_60--)
            {
                unsigned l_168[5][9] = {{0x64A91896L, 4294967293UL, 7UL, 3UL, 0xAC2D4355L, 0xFDC908BBL, 0x677B63B4L, 4294967294UL, 7UL}, {0x64A91896L, 4294967293UL, 7UL, 3UL, 0xAC2D4355L, 0xFDC908BBL, 0x677B63B4L, 4294967294UL, 7UL}, {0x64A91896L, 4294967293UL, 7UL, 3UL, 0xAC2D4355L, 0xFDC908BBL, 0x677B63B4L, 4294967294UL, 7UL}, {0x64A91896L, 4294967293UL, 7UL, 3UL, 0xAC2D4355L, 0xFDC908BBL, 0x677B63B4L, 4294967294UL, 7UL}, {0x64A91896L, 4294967293UL, 7UL, 3UL, 0xAC2D4355L, 0xFDC908BBL, 0x677B63B4L, 4294967294UL, 7UL}};
                int l_180 = 0x6FD65F52L;
                int i, j;
                l_168[2][8] = 0xDAFFA73DL;
                for (p_59 = 0; (p_59 <= 4); p_59 += 1)
                {
                    long long l_176 = 2L;
                    for (p_62 = 0; (p_62 <= 1); p_62 += 1)
                    {
                        int l_169 = (-1L);
                        int i, j, k;
                        l_169 = l_168[p_59][(p_62 + 3)];
                        l_181 = ((l_180 = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((0x01L == g_50[p_62][(p_59 + 4)][p_62]), g_50[(p_62 + 1)][(p_62 + 8)][p_62])), (0x9E7C7BD3L && (safe_mul_func_uint16_t_u_u(g_3, ((1L > (g_178 = (g_177[3][3][1] = l_176))) == l_179))))))) >= (((l_74.f4 = l_168[p_59][(p_62 + 3)]) < p_60) && g_73.f1));
                    }
                }
                if (((l_180 = l_168[2][8]) < ((l_182 = p_62) && ((-1L) != p_61))))
                {
                    unsigned short l_186 = 65535UL;
                    int l_192 = (-1L);
                    if ((l_168[2][8] == (l_180 = p_62)))
                    {
                        if (l_74.f5)
                            goto lbl_183;
                        if (g_78)
                            goto lbl_183;
                        l_186 = ((l_182 = (p_62 > (-7L))) | ((((l_184 = 0x1E06L) >= (!(g_5 < g_73.f2))) == (g_185 = g_50[2][8][0])) >= g_178));
                    }
                    else
                    {
                        struct S0 l_193[3] = {{5847,1,93,-1948,-15,28956}, {5847,1,93,-1948,-15,28956}, {5847,1,93,-1948,-15,28956}};
                        int i;
                        l_192 = ((246UL == (safe_add_func_uint64_t_u_u((g_73.f3 >= l_74.f0), 0UL))) & (g_191 = (safe_rshift_func_int16_t_s_s(p_60, l_184))));
                        l_194 = l_193[0];
                        g_73.f0 = (l_197[0] = (l_180 = ((safe_sub_func_uint32_t_u_u(4294967292UL, g_178)) & 2UL)));
                    }
                    g_73 = l_74;
                }
                else
                {
                    if (g_158)
                        break;
                }
            }
            for (p_59 = 0; (p_59 <= 1); p_59 += 1)
            {
                unsigned l_211[6] = {0UL, 0x66F58312L, 0UL, 0x66F58312L, 0UL, 0x66F58312L};
                struct S0 l_212 = {-8045,-5,113,3775,3,3822};
                unsigned l_221 = 4294967291UL;
                int i;
                for (l_184 = 1; (l_184 >= 0); l_184 -= 1)
                {
                    short l_219 = (-1L);
                    int l_220[4] = {2L, 0x4AB9F46AL, 2L, 0x4AB9F46AL};
                    int i;
                    for (g_158 = 0; (g_158 <= 1); g_158 += 1)
                    {
                        int l_198[10] = {6L, 0x8D032AA6L, 6L, 0x8D032AA6L, 6L, 0x8D032AA6L, 6L, 0x8D032AA6L, 6L, 0x8D032AA6L};
                        int l_210 = 8L;
                        int i;
                        if (g_4)
                            goto lbl_183;
                        g_178 = ((l_198[9] = (-8L)) == (safe_mod_func_int16_t_s_s(l_197[p_59], ((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(p_60, ((~((g_3 > (g_185 = (0x49995AE5L > (l_210 = (l_209 = ((safe_lshift_func_uint8_t_u_u(0xE7L, p_59)) && (9L == ((safe_rshift_func_int16_t_s_s(l_74.f2, l_194.f3)) && l_197[p_59])))))))) <= g_178)) < p_61))) != g_191), 5)) | p_61))));
                        return l_211[5];
                    }
                    l_212 = l_212;
                    g_73.f3 = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((l_212.f1 = ((0UL != (safe_add_func_uint64_t_u_u(p_60, (p_59 > (!((l_197[1] = g_73.f4) <= (l_219 = p_60))))))) <= l_220[0])), 4)) && l_211[0]), (l_221 = (p_61 == ((g_158 | g_5) != p_62)))));
                    l_197[0] = ((safe_sub_func_uint16_t_u_u((g_224 = p_61), 0x9443L)) | g_3);
                }
            }
            l_225 = l_194;
            if (((l_225.f0 && p_62) > (0xBB3FEC30L && (safe_rshift_func_int8_t_s_u((g_4 && 0x0DL), (g_177[2][7][0] | l_197[0]))))))
            {
                l_182 = g_73.f0;
                if (l_225.f5)
                    continue;
            }
            else
            {
                int l_238[8] = {1L, 0xEA7F4345L, 1L, 0xEA7F4345L, 1L, 0xEA7F4345L, 1L, 0xEA7F4345L};
                unsigned short l_256 = 65535UL;
                int i;
                for (g_158 = 0; (g_158 >= 1); g_158 = safe_add_func_uint8_t_u_u(g_158, 7))
                {
                    long long l_232 = 0xCD88943AF5254290LL;
                    int l_235 = (-1L);
                    for (l_181 = (-12); (l_181 < 38); l_181++)
                    {
                        l_235 = (l_232 && (p_62 | (safe_add_func_int8_t_s_s(g_177[3][3][1], p_59))));
                    }
                    for (l_182 = 0; (l_182 != 15); l_182 = safe_add_func_int32_t_s_s(l_182, 1))
                    {
                        l_238[4] = g_73.f1;
                        if (l_238[1])
                            continue;
                        l_225 = l_225;
                    }
                    if ((safe_lshift_func_uint8_t_u_u(p_59, (l_241 && l_225.f4))))
                    {
                        g_73.f2 = g_224;
                        if (l_232)
                            break;
                        g_73 = g_73;
                        g_73 = l_242;
                    }
                    else
                    {
                        unsigned l_253[7][5][4] = {{{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}, {{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}, {{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}, {{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}, {{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}, {{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}, {{0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}, {0UL, 0xD4D99217L, 0UL, 0x4FA13225L}}};
                        int i, j, k;
                        l_238[5] = (safe_mul_func_int16_t_s_s(((((+(safe_lshift_func_uint16_t_u_s(((0xEE2F2DD5L & (safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((g_50[0][1][1] = (g_73.f2 & 6L)), (((2L & p_62) & (0x53L ^ (250UL <= p_59))) | (safe_add_func_int64_t_s_s((-7L), g_158))))) || 0L), l_238[0]))) < p_60), 3))) && 0x0BF1236BC38D9B2ELL) | 0L) != g_5), 0L));
                        l_235 = l_253[6][3][3];
                        l_194.f4 = (g_73.f0 = (safe_lshift_func_uint16_t_u_s(g_185, 13)));
                        if (p_60)
                            continue;
                    }
                    g_73.f2 = l_256;
                }
                l_225.f1 = l_257;
                g_73.f3 = 1L;
            }
        }
        for (g_224 = 0; (g_224 == (-8)); g_224 = safe_sub_func_int32_t_s_s(g_224, 6))
        {
            unsigned l_267 = 0x5ECA742BL;
            int l_277 = (-1L);
            unsigned char l_289 = 1UL;
            struct S0 l_310[7][8] = {{{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}, {{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}, {{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}, {{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}, {{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}, {{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}, {{8767,3,-121,-2936,-10,13041}, {469,6,149,1039,-12,19312}, {-4790,-6,51,-3062,-6,24567}, {4260,7,151,-1301,-1,19096}, {4260,7,151,-1301,-1,19096}, {-4790,-6,51,-3062,-6,24567}, {469,6,149,1039,-12,19312}, {8767,3,-121,-2936,-10,13041}}};
            int i, j;
            for (g_158 = 0; (g_158 != 0); g_158 = safe_add_func_uint16_t_u_u(g_158, 4))
            {
                unsigned l_264[2];
                int l_285 = 7L;
                struct S0 l_290[10] = {{-3208,-3,204,3387,-20,2093}, {-3208,-3,204,3387,-20,2093}, {-10503,3,-199,-775,-10,5452}, {-3208,-3,204,3387,-20,2093}, {-3208,-3,204,3387,-20,2093}, {-10503,3,-199,-775,-10,5452}, {-3208,-3,204,3387,-20,2093}, {-3208,-3,204,3387,-20,2093}, {-10503,3,-199,-775,-10,5452}, {-3208,-3,204,3387,-20,2093}};
                int i;
                for (i = 0; i < 2; i++)
                    l_264[i] = 0x0DBA3BF4L;
                if ((+g_177[3][3][1]))
                {
                    unsigned short l_278 = 1UL;
                    int l_279[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_279[i] = 2L;
                    l_279[0] = (((safe_mod_func_uint64_t_u_u(g_73.f3, l_264[1])) == ((safe_add_func_uint8_t_u_u((l_267 | g_268), l_74.f2)) || 5L)) | ((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_78, (((l_277 = (safe_lshift_func_int8_t_s_u((p_62 || p_61), 1))) & l_278) >= p_59))), l_225.f1)), l_241)) || 0x6BL));
                    for (p_62 = 0; (p_62 <= 19); p_62 = safe_add_func_uint16_t_u_u(p_62, 8))
                    {
                        unsigned long long l_284 = 0UL;
                        if (p_62)
                            break;
                        l_279[0] = p_59;
                        l_285 = (safe_add_func_uint8_t_u_u(g_268, (((p_59 ^ l_242.f3) != (l_284 | p_62)) == l_264[1])));
                        return g_177[3][7][0];
                    }
                }
                else
                {
                    int l_299 = 0x21451006L;
                    if ((l_267 && ((safe_rshift_func_int8_t_s_u(p_62, ((((~(-3L)) > g_73.f3) && ((p_59 & l_288[1][4][5]) || l_289)) >= (g_177[3][3][1] && 0x3BAD0AA7L)))) | 0x8D0AE299L)))
                    {
                        if (p_60)
                            break;
                        return p_59;
                    }
                    else
                    {
                        g_73 = g_73;
                        l_290[6] = g_73;
                        if (g_73.f1)
                            continue;
                        if (p_61)
                            continue;
                    }
                    l_299 = (safe_mul_func_uint16_t_u_u(p_60, (safe_mul_func_int16_t_s_s(l_288[1][4][5], (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_242.f5, (p_61 || l_299))), 10))))));
                    g_73.f0 = g_73.f0;
                    l_300 = 0x7671AC5DL;
                }
                if (l_290[6].f1)
                {
                    if ((safe_mul_func_int8_t_s_s((l_290[6].f2 > (safe_sub_func_int64_t_s_s((l_264[1] || p_62), p_61))), (-5L))))
                    {
                        int l_305 = 0L;
                        l_74.f2 = (g_78 <= 0UL);
                        if (l_305)
                            break;
                    }
                    else
                    {
                        return g_158;
                    }
                    l_290[6].f3 = (~l_288[1][7][5]);
                }
                else
                {
                    l_290[8] = g_73;
                }
                l_277 = 1L;
            }
            for (p_60 = 1; (p_60 >= 0); p_60 -= 1)
            {
                short l_306 = 0xB4B9L;
                for (g_158 = 0; (g_158 <= 1); g_158 += 1)
                {
                    l_306 = (-1L);
                }
                for (g_78 = 0; (g_78 <= 1); g_78 += 1)
                {
                    if (g_5)
                        goto lbl_183;
                }
                for (p_62 = 0; (p_62 <= 2); p_62 += 1)
                {
                    int i, j, k;
                    l_74.f3 = (((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int8_t_s_s(g_177[(p_62 + 6)][(p_62 + 1)][p_62], (g_185 = 0xDCL))) && (g_177[p_62][(p_60 + 2)][p_62] == 5UL)))) < 0x36L) < g_73.f3);
                    l_225.f3 = (l_242.f0 = g_73.f2);
                }
                l_310[4][3] = l_225;
                for (l_277 = 1; (l_277 >= 0); l_277 -= 1)
                {
                    long long l_311 = 1L;
                    if (l_242.f3)
                        break;
                    if (l_311)
                        break;
                }
            }
        }
    }
    return l_225.f1;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_50[i][j][k], "g_50[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_73.f4, "g_73.f4", print_hash_value);
    transparent_crc(g_73.f5, "g_73.f5", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_177[i][j][k], "g_177[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_435.f1, "g_435.f1", print_hash_value);
    transparent_crc(g_435.f2, "g_435.f2", print_hash_value);
    transparent_crc(g_435.f3, "g_435.f3", print_hash_value);
    transparent_crc(g_435.f4, "g_435.f4", print_hash_value);
    transparent_crc(g_435.f5, "g_435.f5", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_661[i], "g_661[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_779[i][j][k].f0, "g_779[i][j][k].f0", print_hash_value);
                transparent_crc(g_779[i][j][k].f1, "g_779[i][j][k].f1", print_hash_value);
                transparent_crc(g_779[i][j][k].f2, "g_779[i][j][k].f2", print_hash_value);
                transparent_crc(g_779[i][j][k].f3, "g_779[i][j][k].f3", print_hash_value);
                transparent_crc(g_779[i][j][k].f4, "g_779[i][j][k].f4", print_hash_value);
                transparent_crc(g_779[i][j][k].f5, "g_779[i][j][k].f5", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_781.f0, "g_781.f0", print_hash_value);
    transparent_crc(g_781.f1, "g_781.f1", print_hash_value);
    transparent_crc(g_781.f2, "g_781.f2", print_hash_value);
    transparent_crc(g_781.f3, "g_781.f3", print_hash_value);
    transparent_crc(g_781.f4, "g_781.f4", print_hash_value);
    transparent_crc(g_781.f5, "g_781.f5", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_1124.f0, "g_1124.f0", print_hash_value);
    transparent_crc(g_1124.f1, "g_1124.f1", print_hash_value);
    transparent_crc(g_1124.f2, "g_1124.f2", print_hash_value);
    transparent_crc(g_1124.f3, "g_1124.f3", print_hash_value);
    transparent_crc(g_1124.f4, "g_1124.f4", print_hash_value);
    transparent_crc(g_1124.f5, "g_1124.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1190[i], "g_1190[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1259[i], "g_1259[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1330, "g_1330", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
