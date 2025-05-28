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



static unsigned char g_2[10] = {0x6AL, 0x6AL, 0x6AL, 0x6AL, 0x6AL, 0x6AL, 0x6AL, 0x6AL, 0x6AL, 0x6AL};
static int g_3 = 2L;
static unsigned g_26 = 0x68CD5467L;
static int g_28 = 6L;
static unsigned short g_34[3][10][6] = {{{65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}}, {{65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}}, {{65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}, {65532UL, 65532UL, 1UL, 65532UL, 65532UL, 1UL}}};
static unsigned short g_100 = 65535UL;
static short g_106 = (-5L);
static unsigned g_113 = 0x093197C8L;
static unsigned g_118 = 0x31B7303FL;
static unsigned char g_155[4] = {1UL, 1UL, 1UL, 1UL};
static unsigned g_186[8] = {0x229225C9L, 4294967295UL, 0x229225C9L, 4294967295UL, 0x229225C9L, 4294967295UL, 0x229225C9L, 4294967295UL};
static unsigned char g_191 = 0UL;
static unsigned char g_213 = 255UL;
static unsigned char g_234[10][3] = {{0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}, {0xAAL, 0xFBL, 0xAAL}};
static short g_250[9][5][5] = {{{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}, {{0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}, {0xA995L, 0x78DBL, 0x29AAL, 0xBD55L, 0x78DBL}}};
static int g_259[1][1] = {{0x24DCEBE0L}};
static unsigned short g_264 = 1UL;
static char g_281 = 8L;
static unsigned g_282 = 0x897AFACDL;
static int g_342 = 0x2AF761C2L;
static int g_418 = 1L;
static const int g_607 = (-1L);
static char g_611 = 0xACL;
static short g_713 = 0xF6F7L;
static unsigned char g_791 = 0xA0L;
static unsigned g_829 = 1UL;
static short g_974 = 0x9EB4L;
static char g_1072 = 8L;
static int g_1235[2][3][4] = {{{0x649CADB0L, 6L, (-1L), (-1L)}, {0x649CADB0L, 6L, (-1L), (-1L)}, {0x649CADB0L, 6L, (-1L), (-1L)}}, {{0x649CADB0L, 6L, (-1L), (-1L)}, {0x649CADB0L, 6L, (-1L), (-1L)}, {0x649CADB0L, 6L, (-1L), (-1L)}}};
static const int g_1291 = 0x6FE67086L;
static int g_1454 = 0x5A8289DBL;
static int g_1706 = 0x7551C5BAL;
static unsigned g_1776 = 0x2CC70E10L;
static unsigned g_1890[7] = {0xE5C473B6L, 18446744073709551612UL, 0xE5C473B6L, 18446744073709551612UL, 0xE5C473B6L, 18446744073709551612UL, 0xE5C473B6L};
static unsigned g_2001 = 0x3BC40409L;
static int g_2117[10] = {0x0A1BD692L, 6L, 0x0A1BD692L, 6L, 0x0A1BD692L, 6L, 0x0A1BD692L, 6L, 0x0A1BD692L, 6L};



static unsigned short func_1(void);
static short func_4(unsigned short p_5);
static unsigned char func_13(int p_14, short p_15, int p_16, int p_17);
static unsigned func_21(int p_22, int p_23, char p_24, unsigned p_25);
static int func_37(unsigned p_38, char p_39, int p_40, int p_41, unsigned p_42);
static unsigned func_45(unsigned p_46, unsigned p_47, char p_48, char p_49, unsigned p_50);
static char func_53(unsigned short p_54, int p_55, char p_56, int p_57);
static char func_66(unsigned p_67, int p_68, unsigned p_69, short p_70);
static char func_78(int p_79, unsigned short p_80, char p_81, const unsigned p_82);
static char func_85(int p_86, int p_87, short p_88, unsigned short p_89, const unsigned p_90);
static unsigned short func_1(void)
{
    char l_20 = 1L;
    int l_27 = (-1L);
    for (g_3 = 9; (g_3 >= 3); g_3 -= 1)
    {
        int l_12 = (-1L);
        int l_867 = 0xB32AF807L;
        int i;
        g_2117[8] = (g_2[2] && func_4((safe_lshift_func_uint8_t_u_u(g_2[2], ((safe_lshift_func_int8_t_s_s((2UL != (safe_add_func_uint32_t_u_u(((l_12 = 0xD83DL) & (g_34[2][7][0] = (func_13((safe_sub_func_int8_t_s_s(0x8CL, (l_20 != (l_867 = func_21(((((l_27 = (g_26 = 7UL)) >= g_2[g_3]) || (g_28 = g_2[9])) & g_3), g_3, g_3, g_2[8]))))), g_607, g_607, g_607) | 4UL))), 0x999631DEL))), 5)) != 0xF6L)))));
        if (g_1072)
            break;
        l_867 = l_20;
        l_27 = (safe_mod_func_int16_t_s_s((2L >= ((g_791 | l_20) | 0x416CL)), g_1776));
    }
    return g_250[7][2][3];
}







static short func_4(unsigned short p_5)
{
    char l_2003 = (-10L);
    int l_2015[2][4] = {{0x0BB83BBAL, 0x1D688F77L, 0x0BB83BBAL, 0x1D688F77L}, {0x0BB83BBAL, 0x1D688F77L, 0x0BB83BBAL, 0x1D688F77L}};
    char l_2042 = 0x78L;
    short l_2098 = 0xA925L;
    int l_2134 = (-1L);
    int l_2144[1];
    unsigned char l_2161 = 0UL;
    unsigned l_2176[2][2] = {{4294967295UL, 1UL}, {4294967295UL, 1UL}};
    unsigned char l_2186 = 0xBFL;
    char l_2190 = 7L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_2144[i] = 0xF895F07EL;
    g_259[0][0] = l_2003;
    for (g_713 = (-27); (g_713 <= 23); g_713 = safe_add_func_uint16_t_u_u(g_713, 2))
    {
        unsigned char l_2014 = 255UL;
        int l_2016 = 0x7CC339D4L;
        char l_2017 = (-1L);
        int l_2060 = 0L;
        if (((func_45((func_45((((g_418 ^ g_1235[0][2][3]) != (safe_mod_func_uint16_t_u_u(g_34[1][3][1], (safe_rshift_func_uint8_t_u_s(p_5, (l_2014 = (safe_add_func_int16_t_s_s(g_1235[0][2][3], (safe_sub_func_uint16_t_u_u(p_5, (~l_2003))))))))))) && (l_2015[0][1] = (((-9L) || (l_2016 = func_78((l_2015[0][2] = p_5), g_213, p_5, g_607))) <= 1L))), l_2003, l_2003, l_2017, p_5) <= p_5), p_5, p_5, g_1890[5], l_2003) <= p_5) == 0xBF6DL))
        {
            int l_2021 = 1L;
            for (g_28 = 27; (g_28 <= (-18)); g_28 = safe_sub_func_int16_t_s_s(g_28, 2))
            {
                unsigned char l_2020 = 5UL;
                return l_2020;
            }
            g_1235[1][0][3] = ((!func_85((g_28 = g_155[0]), g_1235[1][1][3], g_250[2][2][3], g_1890[5], p_5)) > ((l_2021 ^ (l_2015[0][2] = (l_2017 != 0xA5L))) > (-8L)));
        }
        else
        {
            unsigned l_2043[5][1][9] = {{{18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL, 18446744073709551615UL, 18446744073709551615UL, 0x66B7B38AL}}};
            int l_2046 = 0x3A9A1FB7L;
            unsigned short l_2063 = 0UL;
            const int l_2103 = (-1L);
            int i, j, k;
            for (g_2001 = 5; (g_2001 > 19); ++g_2001)
            {
                unsigned char l_2038 = 0x48L;
                int l_2064[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2064[i] = 0xE47F2D0FL;
                for (p_5 = (-13); (p_5 < 37); p_5++)
                {
                    char l_2041 = 0L;
                    for (g_264 = (-19); (g_264 != 15); g_264 = safe_add_func_int16_t_s_s(g_264, 4))
                    {
                        g_342 = (l_2043[3][0][8] = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(func_85(p_5, g_3, (((safe_sub_func_uint8_t_u_u(p_5, (safe_lshift_func_uint16_t_u_s((!((+(g_34[0][6][5] = l_2017)) == g_106)), ((((safe_mul_func_uint16_t_u_u(((l_2038 != p_5) && g_113), (((safe_add_func_int32_t_s_s(p_5, g_3)) | p_5) < l_2041))) ^ 0L) && p_5) != 2L))))) && g_113) < l_2038), p_5, p_5), 1)), l_2042)));
                    }
                    l_2046 = ((l_2016 | g_1235[0][2][3]) ^ (safe_lshift_func_uint16_t_u_s(g_418, 7)));
                }
                for (g_264 = 22; (g_264 < 30); ++g_264)
                {
                    int l_2057[6];
                    unsigned l_2061 = 5UL;
                    const int l_2062 = 0L;
                    int l_2065 = 0L;
                    unsigned l_2116 = 0UL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2057[i] = 0xCEEAC861L;
                    if ((l_2065 = (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_2057[4] = (l_2064[1] = (p_5 ^ ((safe_rshift_func_uint16_t_u_u(((p_5 < (g_974 = (((((g_418 == g_282) | ((((safe_sub_func_int32_t_s_s((0xD969L || ((l_2016 = g_155[0]) != p_5)), func_85(l_2057[5], (l_2060 = func_85((safe_sub_func_uint32_t_u_u((p_5 >= l_2003), 0x1F85C8C0L)), p_5, g_1890[5], p_5, l_2014)), p_5, l_2017, g_342))) & l_2061) | l_2062) > p_5)) < l_2063) > l_2015[0][2]) > 2UL))) | p_5), 7)) >= l_2063)))), 1UL)), g_281))))
                    {
                        l_2057[2] = (safe_add_func_int8_t_s_s((-7L), 0L));
                        g_1454 = (safe_lshift_func_int8_t_s_u(g_3, 4));
                    }
                    else
                    {
                        char l_2076 = (-1L);
                        int l_2077 = 0x51F298E6L;
                        g_1235[1][0][1] = ((safe_mod_func_uint32_t_u_u(4294967292UL, l_2057[5])) && (l_2076 = ((safe_sub_func_uint16_t_u_u(func_85((func_85(p_5, (g_155[0] || p_5), p_5, p_5, func_85(((safe_add_func_int32_t_s_s(0x140DF0D4L, p_5)) & l_2057[3]), l_2017, l_2062, l_2014, p_5)) < g_26), g_118, p_5, l_2003, l_2017), g_1072)) > 0x7CA6L)));
                        l_2077 = l_2003;
                        g_259[0][0] = func_85((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(func_85((safe_add_func_uint16_t_u_u((l_2057[5] > (safe_lshift_func_int8_t_s_s((p_5 || (safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int32_t_s((p_5 <= ((safe_add_func_int8_t_s_s((l_2015[1][3] = func_85((func_85((safe_mod_func_int32_t_s_s((func_85(((l_2065 = func_85((g_259[0][0] = (g_186[5] < (l_2077 = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_2098 ^ func_85((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_418, (((l_2014 >= g_186[2]) && (g_607 <= g_28)) | p_5))), 0xA6L)), p_5, p_5, l_2043[3][0][8], g_155[3])), g_213)) || 0x345BL), 13))))), g_1890[5], p_5, g_1706, l_2061)) > l_2076), p_5, g_34[2][7][2], l_2057[2], l_2103) < 8L), 0xDD119677L)), l_2076, p_5, l_2064[1], g_155[3]) & 0x11L), g_3, g_34[2][7][0], g_1235[1][0][3], l_2064[1])), l_2076)) > 0xBA54L))))))), g_2[4]))), p_5)), g_213, g_2001, l_2016, p_5), 0xB74CL)) != l_2057[5]), 5)) == l_2046), (-1L))), l_2014, l_2016, g_34[2][7][0], p_5);
                    }
                    g_2117[8] = (safe_lshift_func_int16_t_s_s((p_5 | ((((g_829 = (safe_mod_func_int32_t_s_s((func_85(((((func_85(g_34[1][1][5], (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(0xE407L, g_213)) ^ (safe_rshift_func_uint8_t_u_u(((p_5 && (safe_mod_func_uint8_t_u_u(p_5, g_1454))) || ((g_974 = l_2116) < ((!0xF8D96679L) > l_2017))), 6))), g_259[0][0])) >= g_28) != l_2043[3][0][6]), p_5, l_2017, l_2003) != 0xBC52L) > p_5) >= 3L) == p_5), p_5, g_829, g_250[7][2][3], p_5) > g_1890[5]), p_5))) < p_5) > g_1454) > p_5)), p_5));
                    l_2046 = p_5;
                    for (l_2098 = 0; (l_2098 >= (-19)); --l_2098)
                    {
                        const char l_2122[2][2][6] = {{{0x34L, 0x88L, 5L, 0x7BL, 0x8BL, 0x04L}, {0x34L, 0x88L, 5L, 0x7BL, 0x8BL, 0x04L}}, {{0x34L, 0x88L, 5L, 0x7BL, 0x8BL, 0x04L}, {0x34L, 0x88L, 5L, 0x7BL, 0x8BL, 0x04L}}};
                        int i, j, k;
                        g_1235[0][1][1] = (l_2057[5] = (safe_mod_func_int8_t_s_s(p_5, l_2003)));
                        if (l_2122[0][1][4])
                            continue;
                        return l_2122[0][1][4];
                    }
                }
            }
        }
    }
    if (l_2042)
    {
        int l_2123 = 0xB4D91229L;
        unsigned char l_2135 = 0x10L;
        int l_2145 = 0x7339CFDFL;
        unsigned l_2146 = 0xD0ABFE00L;
        g_342 = l_2123;
        l_2146 = func_13((g_191 >= (g_106 = (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_2117[0] = ((g_1072 | (safe_sub_func_uint16_t_u_u(g_3, (l_2015[0][1] = g_155[1])))) != (((l_2134 = (safe_lshift_func_uint8_t_u_s(255UL, 6))) && l_2135) > l_2123))), ((((((safe_rshift_func_uint8_t_u_s(0x67L, (safe_mod_func_uint16_t_u_u((l_2144[0] = ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((l_2145 = l_2144[0]), g_281)), 1)) ^ 1UL)), g_250[6][1][0])))) <= 0x37L) & l_2135) <= 0x35L) | l_2123) ^ g_113))), 0)) && 1UL), l_2042)))), g_1890[0], l_2135, l_2042);
        for (g_1706 = 0; (g_1706 != 12); g_1706 = safe_add_func_uint32_t_u_u(g_1706, 9))
        {
            return p_5;
        }
        l_2145 = (l_2134 = ((safe_rshift_func_uint8_t_u_u((((l_2015[0][2] = ((safe_rshift_func_int8_t_s_u(((l_2144[0] = (-2L)) <= p_5), 0)) != (safe_sub_func_uint16_t_u_u(p_5, (g_1072 != ((g_28 = (-4L)) <= (0x34C5L >= p_5))))))) != p_5) >= g_607), 7)) >= l_2135));
    }
    else
    {
        unsigned l_2159 = 0x3194BEC6L;
        int l_2160 = 0xF756AD6DL;
        int l_2177 = (-2L);
        unsigned l_2178 = 0xAB75995FL;
        int l_2179[10] = {0x62CBEA21L, 0x4849A005L, 0x62CBEA21L, 0x4849A005L, 0x62CBEA21L, 0x4849A005L, 0x62CBEA21L, 0x4849A005L, 0x62CBEA21L, 0x4849A005L};
        short l_2189[9][6] = {{0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}, {0x9A4DL, 4L, 0xBFB0L, 4L, 0x9A4DL, (-3L)}};
        int i, j;
        l_2161 = (g_3 || (g_2001 && (g_34[2][1][4] = func_78(p_5, ((safe_add_func_uint16_t_u_u((g_342 & (((((safe_sub_func_uint16_t_u_u(func_78((((l_2144[0] <= ((l_2159 = (g_106 || 1UL)) & (g_611 = ((((((l_2160 = p_5) <= l_2144[0]) < p_5) != g_1235[0][2][3]) != p_5) <= g_1890[3])))) && p_5) | g_1235[0][2][3]), p_5, p_5, g_186[6]), 0x0BDAL)) > 1L) || 0x94503314L) & (-7L)) <= g_1291)), l_2144[0])) >= 0x6364A4CEL), l_2042, g_1454))));
        l_2015[1][0] = (((l_2160 < (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(func_13(l_2144[0], (g_1235[0][1][2] >= g_100), (l_2179[3] = ((((l_2015[0][3] = (g_281 = (g_113 || (g_264 = (l_2178 = (safe_sub_func_int16_t_s_s((l_2177 = (safe_sub_func_uint16_t_u_u((l_2159 || (safe_rshift_func_int16_t_s_s(func_85((g_1890[5] != (safe_add_func_int32_t_s_s((l_2134 = (l_2015[0][2] = p_5)), (func_85(p_5, l_2144[0], g_1454, g_1890[0], g_264) == 0UL)))), p_5, l_2160, g_1776, l_2144[0]), l_2176[1][0]))), l_2160))), g_2[0]))))))) == l_2144[0]) < g_34[2][7][0]) >= g_2117[5])), l_2159), g_1291)), p_5)), 4))) > p_5) > g_2[9]);
        l_2015[0][0] = (safe_lshift_func_int16_t_s_u(l_2177, ((g_250[7][3][4] = l_2160) > (func_85(l_2098, func_85(g_34[1][7][2], p_5, (safe_lshift_func_int8_t_s_u(func_85(p_5, (safe_mod_func_int16_t_s_s(l_2186, g_155[0])), ((safe_rshift_func_int16_t_s_s((-3L), 11)) < l_2189[5][2]), l_2190, l_2176[1][0]), 1)), p_5, p_5), p_5, g_34[2][7][0], g_234[3][2]) < l_2179[3]))));
    }
    return p_5;
}







static unsigned char func_13(int p_14, short p_15, int p_16, int p_17)
{
    unsigned short l_868 = 0xDB51L;
    int l_869 = (-3L);
    int l_881 = 0xA6594D1CL;
    char l_900 = 1L;
    unsigned char l_901 = 0x38L;
    short l_942 = 1L;
    const short l_975 = 0xE3BCL;
    unsigned char l_1063 = 1UL;
    unsigned char l_1085 = 0UL;
    const int l_1095 = 0L;
    unsigned short l_1102 = 0xC371L;
    const unsigned char l_1113 = 0x7EL;
    const char l_1114 = 0xF0L;
    int l_1158 = 2L;
    unsigned l_1197[1][3][1];
    unsigned l_1236 = 7UL;
    unsigned l_1257 = 0x9F05FB83L;
    short l_1475 = 0x8E9AL;
    int l_1618 = 0x3E2679E3L;
    int l_1730[1];
    unsigned char l_1789 = 1UL;
    int l_1823[9][2] = {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}};
    unsigned l_1826[9][6] = {{0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}, {0x7512662EL, 4294967295UL, 3UL, 3UL, 4294967295UL, 0x7512662EL}};
    char l_1891 = (-9L);
    unsigned char l_1911 = 254UL;
    unsigned l_1977[2];
    unsigned l_1996 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_1197[i][j][k] = 0xD50FCD41L;
        }
    }
    for (i = 0; i < 1; i++)
        l_1730[i] = 6L;
    for (i = 0; i < 2; i++)
        l_1977[i] = 4294967293UL;
    p_14 = (l_869 = l_868);
    if (l_869)
    {
        unsigned short l_872 = 0xC3F2L;
        int l_873 = 1L;
        int l_876[5];
        int l_943 = (-3L);
        int i;
        for (i = 0; i < 5; i++)
            l_876[i] = 2L;
        p_14 = (l_881 = (l_876[0] = ((safe_rshift_func_uint8_t_u_u(func_78((l_873 = l_872), (l_876[4] = (safe_add_func_int16_t_s_s((8L == (g_234[0][0] || ((l_869 = g_418) < 0x69E50F78L))), 0x1C22L))), g_281, ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_14, 0)), (l_868 != l_868))) <= 8L)), g_418)) < 0UL)));
        p_14 = 0xF0FCB6ECL;
        if ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_15, (func_21((safe_sub_func_int16_t_s_s(((func_45(g_259[0][0], p_15, (g_611 = g_191), g_234[9][1], (safe_rshift_func_uint16_t_u_s((l_869 = ((g_342 < (~(safe_lshift_func_int16_t_s_s(l_876[3], (safe_sub_func_int8_t_s_s(0x7EL, (-6L))))))) < l_876[4])), 8))) && g_155[0]) >= 65529UL), 0x5044L)), g_2[6], g_791, l_881) || g_155[0]))), l_872)), 14)) & l_876[4]), p_14)))
        {
            unsigned l_904 = 0x704CB66EL;
            int l_917 = 0x99D256E7L;
            int l_918 = 0x19C2BDC9L;
            unsigned l_945 = 0x1270297FL;
            g_342 = (((p_16 < p_17) <= g_342) > (safe_rshift_func_int16_t_s_s(p_14, (l_881 <= l_900))));
            l_881 = (((l_868 ^ (l_901 > (safe_rshift_func_uint16_t_u_s((l_904 | p_16), 1)))) != (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((~g_611), p_15)), (p_16 | ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(func_53(p_17, ((l_918 = (safe_lshift_func_uint8_t_u_s(((l_917 = (safe_sub_func_uint16_t_u_u(g_3, 1L))) ^ g_281), p_17))) && 0x80E05C35L), g_186[6], p_14), l_904)), 0x2E9C0204L)) ^ p_14))))) <= 0x8F24L);
            g_259[0][0] = g_418;
            if ((safe_sub_func_uint16_t_u_u(((func_21(l_904, g_829, l_918, l_904) >= l_873) <= (safe_lshift_func_uint8_t_u_u(g_829, 6))), g_3)))
            {
                unsigned l_925[10][7] = {{18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}, {18446744073709551607UL, 18446744073709551606UL, 0x896D694EL, 18446744073709551606UL, 18446744073709551607UL, 1UL, 18446744073709551615UL}};
                int l_944 = (-6L);
                int i, j;
                g_28 = l_876[4];
                l_873 = ((((l_925[5][1] >= (((((0x7001L != (p_15 ^ (l_873 < (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((g_155[0] ^ (l_918 = ((l_869 = ((255UL || l_904) < (g_155[0] || (l_872 < 0x70L)))) ^ 0xB2L))) != g_34[2][7][1]), g_34[2][7][0])), p_16))))) >= g_100) || 0x211B1A18L) & g_281) > p_17)) != p_16) < g_791) ^ 1L);
                g_342 = ((l_876[4] = (l_876[1] | (safe_sub_func_int32_t_s_s(g_155[0], 4294967295UL)))) | ((l_944 = (0x5FL < (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(g_34[0][1][3], 0)) & (safe_add_func_int8_t_s_s((l_943 = (((l_873 = 4294967295UL) < (l_918 >= 8L)) >= (((safe_add_func_uint32_t_u_u((65532UL || l_942), g_259[0][0])) || g_26) >= g_155[1]))), 0xBCL))), 13)))) & l_945));
            }
            else
            {
                char l_953[5][9][5] = {{{5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}}, {{5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}}, {{5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}}, {{5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}}, {{5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}, {5L, (-1L), 0L, 0x79L, 1L}}};
                int i, j, k;
                g_259[0][0] = g_191;
                p_14 = (safe_lshift_func_uint8_t_u_s((((((g_34[2][7][0] != (g_26 > p_16)) & (p_17 ^ (safe_mod_func_int16_t_s_s(l_917, g_282)))) > ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((l_953[0][4][0] != 0xBDL))), p_15)) ^ l_881)) <= 0UL) != p_17), g_191));
            }
        }
        else
        {
            unsigned l_957[8][7] = {{4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}, {4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL, 0x8C0E2970L, 4294967289UL}};
            int i, j;
            for (g_611 = 0; (g_611 <= (-29)); g_611--)
            {
                char l_956 = 0x51L;
                g_342 = g_155[0];
                g_28 = ((l_876[2] && g_418) > ((0x78B64670L ^ p_14) != p_16));
                p_17 = p_15;
                l_957[0][6] = (l_956 = g_234[0][0]);
            }
        }
        for (p_15 = 0; (p_15 >= (-29)); p_15 = safe_sub_func_int16_t_s_s(p_15, 2))
        {
            return p_17;
        }
    }
    else
    {
        short l_973 = 0x4491L;
        unsigned l_976[10][7] = {{0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}, {0xF230A62FL, 0UL, 1UL, 0x919AE234L, 4294967295UL, 0xC9ABCBEBL, 4294967295UL}};
        unsigned char l_977 = 253UL;
        int l_988 = (-10L);
        int i, j;
        g_28 = g_213;
        p_14 = ((safe_rshift_func_uint8_t_u_u((((func_85((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((+func_85(func_78((safe_sub_func_int16_t_s_s(((g_155[0] | (func_85((p_17 = 0L), func_85((safe_unary_minus_func_int8_t_s(p_15)), ((l_869 = ((safe_lshift_func_int16_t_s_u(func_85((!(safe_lshift_func_int8_t_s_s((g_259[0][0] == (g_342 = (-7L))), l_973))), func_85(((-1L) ^ (func_85(((g_250[0][4][4] = l_881) >= (g_713 = (g_106 = l_900))), l_973, p_15, l_901, p_14) || l_869)), g_791, l_942, g_974, p_15), l_901, p_16, g_264), l_900)) <= g_282)) || 250UL), g_282, p_15, l_975), p_14, g_418, l_881) && g_28)) && l_976[8][2]), p_16)), p_14, l_881, p_15), l_881, g_34[2][1][3], l_977, l_977)), l_975)), l_975)), g_34[1][1][2], l_977, g_34[1][0][1], g_34[2][7][0]) != g_34[0][1][1]) > g_34[2][7][0]) || l_976[4][1]), l_976[1][5])) >= l_976[5][5]);
        for (g_26 = 0; (g_26 <= 2); g_26 += 1)
        {
            unsigned short l_984 = 0x5740L;
            int l_985 = 0L;
            g_259[0][0] = ((func_85(g_34[2][7][0], g_791, g_259[0][0], (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_985 = (safe_rshift_func_uint8_t_u_u(((4UL == (g_186[3] = 4294967295UL)) & (+l_984)), 3))), 5)), (safe_mod_func_uint16_t_u_u(p_17, p_14)))), g_2[7]) || 0x4D54L) && l_985);
            for (g_418 = 2; (g_418 >= 0); g_418 -= 1)
            {
                int i, j;
                return g_234[(g_26 + 1)][g_26];
            }
            g_259[0][0] = g_34[2][7][0];
            for (p_15 = 2; (p_15 >= 0); p_15 -= 1)
            {
                if (g_155[1])
                    break;
                for (l_901 = 0; (l_901 <= 2); l_901 += 1)
                {
                    return g_100;
                }
            }
        }
        if ((l_988 = p_16))
        {
            l_988 = l_976[1][5];
        }
        else
        {
            unsigned l_1001[1];
            int l_1003 = 2L;
            unsigned char l_1043 = 1UL;
            unsigned l_1062 = 0x505713E1L;
            int l_1097 = 7L;
            int i;
            for (i = 0; i < 1; i++)
                l_1001[i] = 0xA5AD7864L;
            for (l_881 = 0; (l_881 == (-24)); l_881--)
            {
                return p_16;
            }
            for (l_881 = 0; (l_881 >= 0); l_881 -= 1)
            {
                const int l_1002 = 0L;
                int l_1024 = 1L;
                if (p_14)
                    break;
                l_1003 = (((l_869 = p_15) && (safe_mod_func_int8_t_s_s(g_34[1][8][1], ((g_264 = (g_26 < (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(l_1001[0], p_17)) || 0x697CL), 2)), 1L)), 7)))) & l_1002)))) && p_15);
                g_28 = g_118;
                for (g_106 = 0; (g_106 >= 0); g_106 -= 1)
                {
                    int i, j;
                    g_259[l_881][g_106] = ((g_259[l_881][l_881] ^ g_342) == (safe_sub_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(g_28, (!g_234[0][0]))) || (p_15 | (l_1002 == (1UL <= ((0xECL || g_186[4]) > 0x96F8L))))) ^ g_259[0][0]), 65535UL)));
                }
                for (g_264 = 0; (g_264 <= 2); g_264 += 1)
                {
                    int i, j;
                    g_259[l_881][l_881] = g_234[0][0];
                    p_17 = (func_85((4L | (l_976[4][1] <= (g_155[0] & (g_100 = (p_15 >= (safe_lshift_func_uint16_t_u_u(func_85((safe_sub_func_int32_t_s_s(p_16, (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((5L | (p_15 <= (~l_1001[0]))) == (safe_sub_func_uint32_t_u_u(p_16, g_259[l_881][l_881]))), g_259[l_881][l_881])), p_15)))), p_14, p_17, g_234[0][0], p_17), 13))))))), p_14, p_16, g_26, g_259[l_881][l_881]) && g_155[0]);
                    l_869 = (g_106 < ((safe_mod_func_uint32_t_u_u((l_1024 = (l_1002 & ((0x5AL ^ (l_988 == (g_342 >= ((safe_mod_func_int32_t_s_s(l_1003, g_259[0][0])) != l_976[9][1])))) != (p_14 == p_14)))), p_15)) || p_16));
                }
            }
            for (g_191 = (-11); (g_191 <= 39); g_191++)
            {
                char l_1029[9];
                int l_1045[1][1];
                int i, j;
                for (i = 0; i < 9; i++)
                    l_1029[i] = 1L;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1045[i][j] = 0x6D5D739AL;
                }
                p_14 = p_14;
                g_28 = 0x94EB4279L;
                p_17 = ((safe_sub_func_uint32_t_u_u(((g_791 > ((g_259[0][0] = g_264) < l_1001[0])) || g_281), 0L)) != ((l_1029[1] && g_106) == (safe_sub_func_int8_t_s_s(l_942, l_1001[0]))));
                if (p_16)
                {
                    unsigned char l_1038 = 0x95L;
                    int l_1044[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1044[i] = (-4L);
                    l_1045[0][0] = func_85(p_14, (((((((func_85((((p_17 = g_106) && ((g_155[0] <= (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_282, func_85((safe_rshift_func_uint16_t_u_u(((g_713 != g_155[0]) || 0x079CL), 6)), l_1038, (g_250[7][2][3] = (((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(func_85(g_281, p_16, g_100, g_155[1], l_1029[7]), g_34[1][4][3])), 1UL)) <= p_16) == 65528UL) || p_16) >= l_1029[1])), l_881, l_976[8][2]))) || 4294967295UL), 8UL))) <= p_17)) <= p_15), g_282, l_1003, l_1043, p_15) & g_791) & p_15) != 0xACL) == 4UL) <= l_1044[0]) ^ 4L) && g_281), l_976[8][2], p_15, l_1029[0]);
                    if (g_106)
                    {
                        int l_1046 = (-4L);
                        int l_1059 = 0L;
                        if (p_16)
                            break;
                        p_14 = p_17;
                        g_342 = ((l_881 = (l_1046 & func_85(p_17, l_1038, func_85((safe_mod_func_int8_t_s_s((l_1044[0] = (l_1044[0] || p_14)), ((safe_mod_func_uint32_t_u_u(((((((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((-7L), (safe_add_func_int32_t_s_s(p_16, (((l_1059 = g_28) == (+(l_1062 = ((((safe_rshift_func_int16_t_s_u(g_213, l_1038)) | g_282) != 0xBCL) >= p_15)))) <= 0x773F7660L))))), g_213)), p_17)) | 4L) ^ g_974) != g_713) != 65535UL) | p_14), l_1046)) | g_282))), p_14, g_281, l_1063, l_1038), g_342, g_342))) > 0x0EL);
                    }
                    else
                    {
                        g_259[0][0] = (0xD57BE681L > (func_85(g_974, (p_16 = (0x72L & (g_106 & g_186[6]))), (((p_14 == p_15) && l_1038) ^ g_3), p_15, l_1003) > 65535UL));
                        if (l_976[8][2])
                            break;
                        if (p_17)
                            break;
                        l_988 = (p_17 >= l_988);
                    }
                    l_881 = (safe_mod_func_int32_t_s_s((((p_15 & p_17) <= (((((((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(g_1072, p_17)), ((safe_add_func_uint32_t_u_u((((l_869 = 0x6DE8L) && (g_34[0][7][0] = (l_1044[0] = func_85(((safe_mod_func_uint16_t_u_u(g_611, g_607)) && func_85(p_17, g_106, g_282, p_15, g_264)), p_14, l_1001[0], l_1045[0][0], p_15)))) ^ g_155[1]), p_16)) | p_16))) <= p_17) || l_1044[0]) & 0UL) == l_1063) > p_17) == p_17)) && g_713), 0x356D7A07L));
                }
                else
                {
                    char l_1094 = 0x0AL;
                    int l_1096 = 0xDD8B83F5L;
                    l_1097 = (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((l_1001[0] ^ (((l_1003 = 1UL) || (safe_lshift_func_int8_t_s_s(p_16, 4))) < (func_85((p_14 = l_1085), (safe_sub_func_uint32_t_u_u((((g_342 = (l_1094 = (((safe_lshift_func_int8_t_s_s((l_1045[0][0] < g_100), (safe_rshift_func_uint8_t_u_s((g_713 < (safe_lshift_func_uint8_t_u_s((1UL >= (0L != 0xDBD0L)), p_16))), 2)))) ^ 1L) | (-7L)))) && 0x4CA91EC0L) <= g_2[4]), (-5L))), l_869, g_113, l_1095) || 0x5F1529B9L))) <= p_16) > l_1096), 4)), 6)), 0x154FL)) != 0xC0679D6AL) ^ p_16);
                }
            }
        }
    }
    l_1102 = (func_53((safe_lshift_func_uint8_t_u_s(g_106, ((safe_mod_func_uint8_t_u_u(1UL, (g_106 & p_15))) <= l_901))), l_975, p_17, g_713) >= 65535UL);
    if (((((safe_sub_func_int32_t_s_s(0x6612E93AL, ((0xD05DL <= (safe_mod_func_uint8_t_u_u(g_259[0][0], (safe_add_func_uint32_t_u_u(((p_16 || func_85((((safe_add_func_uint32_t_u_u(((p_15 >= ((l_869 = l_900) && ((safe_lshift_func_int8_t_s_s((g_1072 = 0xFFL), l_868)) || (g_34[1][3][0] = g_100)))) >= 1L), g_282)) & p_16) ^ l_868), p_16, p_16, g_611, l_1113)) || g_186[6]), l_1114))))) ^ (-1L)))) == 8L) <= l_975) <= p_14))
    {
        unsigned short l_1117[9][2] = {{0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}, {0xA9C0L, 0xA9C0L}};
        unsigned short l_1240[5][9];
        const unsigned char l_1292 = 1UL;
        int l_1304 = 0x6406E20FL;
        int l_1351[9] = {0xBD3CE67AL, (-3L), 0xBD3CE67AL, (-3L), 0xBD3CE67AL, (-3L), 0xBD3CE67AL, (-3L), 0xBD3CE67AL};
        char l_1457 = 0x70L;
        unsigned short l_1509 = 1UL;
        int l_1587[7][5] = {{1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}, {1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}, {1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}, {1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}, {1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}, {1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}, {1L, 0xEA95E78AL, 0x085B9EC5L, 0x65359C8EL, 0x65359C8EL}};
        short l_1623 = 6L;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 9; j++)
                l_1240[i][j] = 0x82B8L;
        }
        g_259[0][0] = (-2L);
        if ((safe_add_func_int32_t_s_s(l_1117[7][0], ((g_106 <= (0UL == l_1117[7][0])) < (~(((l_881 = g_155[2]) || l_975) != (+((p_15 && (safe_add_func_uint32_t_u_u((((6L > g_213) ^ l_900) | l_1095), 9L))) & g_1072))))))))
        {
            return p_16;
        }
        else
        {
            short l_1130 = (-1L);
            const int l_1141 = 0x844E96B4L;
            int l_1155 = 0L;
            const char l_1293 = (-1L);
            unsigned l_1312[8];
            int l_1415 = 0xB786E255L;
            char l_1445 = 0L;
            const int l_1508 = 0L;
            int i;
            for (i = 0; i < 8; i++)
                l_1312[i] = 0xA6FAB20CL;
            if ((func_37(g_26, (g_281 = ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_15 = (safe_lshift_func_int8_t_s_u(0xB0L, (p_16 >= l_1130)))), ((-7L) | g_2[3]))), l_1130)), (safe_mod_func_int16_t_s_s(6L, (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((g_791 = (safe_lshift_func_int8_t_s_u(l_1141, g_100))), p_17)), 14)), g_191)))))) == p_16)), l_1130, p_16, l_1117[7][0]) <= l_1117[7][0]))
            {
                unsigned char l_1152 = 255UL;
                unsigned char l_1154 = 0x60L;
                int l_1174 = 0x9A16E16CL;
                unsigned char l_1217[9][8][3] = {{{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}, {{0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}, {0xB6L, 0xE9L, 255UL}}};
                short l_1256[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1256[i] = 1L;
                p_17 = p_16;
                for (g_191 = 0; (g_191 <= 21); ++g_191)
                {
                    if (g_34[2][7][0])
                        break;
                }
                if ((safe_mod_func_int32_t_s_s(l_1117[7][0], (safe_sub_func_int8_t_s_s((p_16 || ((safe_mod_func_int32_t_s_s(((+l_900) <= (l_1152 > ((p_14 = (((safe_unary_minus_func_uint16_t_u(l_1154)) <= ((l_1155 = (l_869 = p_16)) < p_15)) == ((safe_mod_func_int32_t_s_s(0xEF57E88FL, (g_342 = 0xC2E665CBL))) | p_16))) | g_155[2]))), p_17)) ^ g_974)), l_1158)))))
                {
                    unsigned l_1167 = 0x2BAFFBFEL;
                    int l_1168 = 0x6E57A828L;
                    const short l_1198 = (-1L);
                    g_259[0][0] = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_15 > 0UL), (l_1152 || ((safe_mod_func_uint16_t_u_u((0x11L == (safe_add_func_uint8_t_u_u(((l_1167 && (l_1168 = (+g_3))) >= (0L > ((safe_mod_func_uint16_t_u_u(((0x5DL <= (((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(((l_1174 = g_791) <= g_118))), g_106)) | p_14) < l_1154)) >= g_186[6]), 0x8AC7L)) != p_15))), 255UL))), l_900)) ^ l_1117[7][0])))), 0xC1B7L));
                    p_17 = (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_611, (safe_lshift_func_int16_t_s_u(l_1117[0][1], 3)))), func_53(((safe_mod_func_uint16_t_u_u(func_78((g_418 = ((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_14, ((safe_lshift_func_uint8_t_u_u((l_1174 = (safe_lshift_func_int16_t_s_s((l_1168 = g_113), ((g_713 != (safe_rshift_func_int8_t_s_u(l_1197[0][0][0], p_14))) >= (((g_250[7][2][3] || 248UL) || p_17) != g_186[6]))))), 6)) == p_15))), 5)) == 0UL)), l_1152, g_113, l_1198), g_791)) != g_713), g_2[9], p_14, p_17))), p_17));
                }
                else
                {
                    unsigned char l_1207[3];
                    int l_1210 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1207[i] = 249UL;
                    l_1210 = (safe_add_func_int16_t_s_s((((0x93L || (((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(func_53(p_14, l_1117[0][1], p_17, (g_28 = (safe_sub_func_int32_t_s_s(0x627DEC82L, (l_1207[1] = g_2[5]))))), 6)) == g_3), (safe_sub_func_int32_t_s_s(g_1072, g_607)))) | g_34[2][6][1]) > l_868)) & 0x8599L) & p_14), 0x4E21L));
                    g_28 = (l_1130 & (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_1217[1][6][0], 0x53L)), (~(l_1154 && (safe_sub_func_uint8_t_u_u(((g_28 > (safe_lshift_func_int16_t_s_s(l_1141, ((!0L) && g_213)))) >= p_16), 0xAEL)))))), g_3)));
                    for (l_942 = 18; (l_942 >= (-13)); l_942 = safe_sub_func_int16_t_s_s(l_942, 5))
                    {
                        unsigned char l_1224 = 0x86L;
                        int l_1237 = 2L;
                        short l_1255[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1255[i] = 1L;
                        l_1237 = (func_66(g_974, l_1207[1], ((0xBA2FL ^ l_1224) < (safe_add_func_int16_t_s_s(0x205BL, (safe_rshift_func_uint16_t_u_s((l_1236 = (l_1210 = ((g_281 != (9UL & (func_85((p_14 = (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((-1L), 1UL)), g_113)), 0xF780L))), g_250[7][2][3], p_17, l_1224, p_15) ^ g_1235[0][2][3]))) >= g_264))), 0))))), g_34[2][7][0]) == 1UL);
                        p_17 = p_17;
                        p_14 = ((safe_rshift_func_int8_t_s_u(g_2[1], (!(func_53(l_1240[0][6], (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u(l_1240[0][4], (g_213 == (safe_lshift_func_int16_t_s_u((p_15 = (((l_1141 | g_713) || (func_85(func_85((safe_add_func_uint8_t_u_u((p_17 == ((p_15 > func_85(l_1255[0], g_100, g_234[0][2], g_1072, l_1117[7][0])) <= g_974)), l_1237)), p_14, g_829, l_881, l_1141), p_14, l_1152, l_1130, g_282) != g_974)) | p_17)), g_234[9][0]))))) < p_17) | 1UL), g_234[0][0])), 0)), l_1256[0])), l_1207[1], p_17) | 0x45132510L)))) == g_791);
                    }
                    g_1235[0][2][3] = (l_1257 = l_1117[7][0]);
                }
            }
            else
            {
                unsigned short l_1266 = 65535UL;
                int l_1280 = 0xAE6AC42FL;
                unsigned char l_1294 = 0x00L;
                char l_1317 = 0x81L;
                int l_1350[9][6][4] = {{{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}, {{1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}, {1L, 1L, 0xDA4894BBL, (-1L)}}};
                int i, j, k;
                for (g_791 = 1; (g_791 <= 4); g_791 += 1)
                {
                    unsigned l_1261 = 0x4DE869BDL;
                    int l_1275 = 0x9533EE8AL;
                    char l_1290 = 0x83L;
                    int l_1311 = 0xDB2B8BD2L;
                    const unsigned l_1333[9][8] = {{1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}, {1UL, 7UL, 0xB5DA0183L, 0xB5DA0183L, 7UL, 1UL, 7UL, 0xB5DA0183L}};
                    int i, j;
                    if ((safe_unary_minus_func_int8_t_s((g_186[3] >= (safe_sub_func_uint8_t_u_u(l_1261, func_85(p_16, (l_1155 && g_607), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_17, 9)), (l_1266 >= l_1240[1][8]))), l_1141, l_1240[4][0])))))))
                    {
                        p_14 = ((g_713 = (!((l_881 = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((p_17 = 0L), func_85((l_1155 < (g_191 = ((l_1280 = ((safe_sub_func_int16_t_s_s((g_250[7][2][3] = (p_15 = (safe_sub_func_uint8_t_u_u(((l_1275 = g_186[6]) && (+(safe_rshift_func_uint8_t_u_s((p_16 == p_15), ((p_16 ^ ((safe_add_func_int16_t_s_s(g_713, g_713)) || p_14)) <= l_1130))))), l_1261)))), g_974)) > p_14)) < l_901))), p_14, p_16, l_1155, p_14))), 2))) || l_1130))) != p_14);
                        return g_118;
                    }
                    else
                    {
                        int l_1289 = 0xECF54E4FL;
                        int l_1299 = 0L;
                        l_1294 = (func_45((safe_lshift_func_int16_t_s_u(l_1261, (g_186[6] ^ p_16))), (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(func_85(g_3, ((safe_add_func_uint32_t_u_u(func_85(g_234[3][2], p_14, p_16, ((p_17 = func_85(l_1289, (((l_1290 || 0x6D2098C6L) ^ 0xA0L) >= (-1L)), g_186[6], l_1155, l_1280)) != 0x0E4398FDL), g_1291), g_3)) > p_14), g_418, l_881, l_1289), l_1155)) >= l_1292), l_1240[0][6])), l_1275, p_14, g_1235[0][2][3]) & l_1293);
                        l_1280 = (safe_mod_func_uint16_t_u_u(((249UL | ((safe_rshift_func_uint16_t_u_s((l_1275 = (l_1299 = ((g_1235[0][2][3] = ((g_250[3][1][1] && l_1290) || (!l_1266))) || (l_1275 || (l_881 = ((l_869 = p_16) | p_15)))))), 3)) & (g_607 == p_14))) == g_281), 65535UL));
                        p_17 = ((p_14 = (safe_sub_func_int16_t_s_s((1L != 0x2C9F2B13L), func_66(((l_1275 ^ (safe_lshift_func_uint16_t_u_s((7L & ((l_1280 = (l_1311 = ((g_34[0][0][4] = func_66((l_1304 = 9UL), (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((p_15 ^ 0x7C4EL), (g_34[2][3][2] ^ (l_1117[1][1] == 0x77L)))), g_1072)), p_16)), p_14, p_14)) > 65532UL))) | l_1312[0])), 15))) == p_16), g_713, g_829, g_611)))) && 4294967287UL);
                    }
                    g_1235[0][1][1] = ((l_1280 = (func_78(l_1257, (safe_lshift_func_int16_t_s_s(l_1292, p_15)), (safe_sub_func_uint32_t_u_u((+0xA97C96D3L), (func_45(l_1317, (g_118 = p_15), l_1130, (safe_sub_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x848AL, func_85((((!(((((g_191 && g_3) <= 1UL) > p_15) >= (-1L)) & 0x65A099AAL)) > g_213) && l_1280), l_1141, l_1240[4][3], l_1117[7][0], g_611))) || l_1275), p_15)) < p_17) == 65535UL), p_15)), p_15) != g_34[2][7][0]))), l_1240[0][6]) || p_17)) && p_15);
                    l_1280 = 0xB86520F0L;
                    l_1280 = (safe_lshift_func_int8_t_s_s(g_34[2][7][0], 3));
                    for (l_1261 = 0; (l_1261 <= 2); l_1261 += 1)
                    {
                        int l_1340 = 0xF0A36DD3L;
                        int l_1341[7][5][7] = {{{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}, {{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}, {{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}, {{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}, {{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}, {{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}, {{2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}, {2L, 4L, 7L, (-1L), 0x5D04D609L, 1L, 0x68E07C1BL}}};
                        int i, j, k;
                        g_1235[1][0][1] = ((((safe_lshift_func_uint8_t_u_s((g_234[(l_1261 + 1)][l_1261] < ((func_85((safe_sub_func_uint8_t_u_u(0x0CL, (l_1155 = (l_1304 = p_16)))), p_16, ((safe_mod_func_int32_t_s_s((((safe_unary_minus_func_int16_t_s((l_1333[3][7] || (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_118, (l_1340 = (safe_rshift_func_int8_t_s_u(l_1240[4][4], p_16))))), (~((g_250[7][2][3] = l_1341[3][2][0]) >= (-5L)))))))) <= g_155[1]) ^ g_213), g_155[0])) < g_28), g_34[1][0][5], p_16) < g_2[8]) > 0xF2734A36L)), 7)) & l_1292) | p_17) | 0xF483L);
                        g_1235[0][0][2] = (safe_mod_func_uint32_t_u_u(l_1341[3][2][0], g_186[3]));
                        g_259[0][0] = (((0xE54FC844L | func_66((l_1117[8][0] && (p_17 <= ((g_186[4] = (safe_add_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u((l_1311 = (((l_869 = ((safe_add_func_uint16_t_u_u(l_869, ((g_1235[0][2][3] != g_713) ^ l_1158))) == p_15)) || g_282) < 0L)), g_791)) ^ 0UL) <= l_1312[0]) == 0xD0CCL), 0x5200D85EL))) != l_1117[0][0]))), g_34[2][7][0], p_15, l_1350[2][5][3])) & 0x6284L) > p_17);
                        p_14 = (p_17 = l_1117[2][0]);
                    }
                }
                if ((l_1280 = func_37((l_1304 = 0x59477B88L), (g_611 = l_869), (l_1351[8] = p_15), func_53(l_1197[0][2][0], g_259[0][0], (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_342, (safe_rshift_func_int16_t_s_u(func_85((l_1155 = (p_14 = g_106)), (p_16 & ((safe_rshift_func_int8_t_s_u(p_17, 4)) <= g_118)), l_1293, l_1312[0], g_106), l_1266)))), l_942)), l_901)), g_234[7][2]), p_16)))
                {
                    unsigned short l_1399 = 65528UL;
                    int l_1410 = (-2L);
                    if ((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_234[0][0] & func_85(g_281, g_28, l_1155, g_186[6], (((p_16 & p_14) != (0x1962L || ((0x3345236BL ^ p_15) | g_281))) && 0x96L))), g_791)) | p_14), g_118)), p_17)))
                    {
                        g_342 = (p_17 = ((((-4L) != (g_34[2][7][0] = p_14)) > ((l_1117[4][0] & (safe_add_func_uint32_t_u_u(g_611, (safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((func_78(p_17, (safe_lshift_func_uint8_t_u_s(l_900, l_1158)), g_191, (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_1280 = (safe_add_func_uint32_t_u_u(((p_14 > g_1072) && 0x68L), p_15))), l_1266)), 0x29L)) | g_191), g_611)), (-1L)))) & p_16) && 0xCB92E983L), (-9L))) > 0x05A26A79L), g_791))))) | g_1072)) && 0xD2L));
                        g_259[0][0] = (l_1155 = ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u((((g_2[5] ^ l_1240[2][2]) ^ 0xA6L) < g_282))), g_191)) > func_85(p_16, p_17, p_15, (~(l_1141 <= (-1L))), g_186[6])));
                        g_259[0][0] = ((((g_342 = l_1280) != (p_17 = l_1293)) > (g_791 != ((safe_sub_func_int8_t_s_s((l_869 = (((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((g_1235[0][2][3] = (safe_sub_func_uint16_t_u_u(0x550FL, l_1293))) && (safe_mod_func_int16_t_s_s(func_78(p_15, (l_1155 = func_85((func_85(l_1240[0][6], g_118, (g_1235[0][2][3] | 0UL), g_264, l_1280) || g_113), p_16, p_14, g_974, g_607)), l_1399, l_1399), (-5L)))), p_14)), 7)) <= 0xFCL) | l_1197[0][1][0])), p_15)) != 4294967295UL))) == p_16);
                        g_1235[0][2][3] = (safe_lshift_func_int16_t_s_u(func_85(l_1155, (safe_add_func_int16_t_s_s((((p_17 < (safe_lshift_func_uint8_t_u_u(l_975, (l_881 = 253UL)))) | (!(safe_rshift_func_int16_t_s_u(0L, 6)))) || (((!(-1L)) | ((l_1410 = ((p_17 <= g_234[0][0]) | (safe_add_func_int8_t_s_s(((g_259[0][0] > p_15) & g_3), g_281)))) == l_1117[7][0])) == 0x9986L)), 0L)), l_1240[0][6], l_1317, l_1117[7][0]), p_16));
                    }
                    else
                    {
                        short l_1418 = (-1L);
                        g_259[0][0] = (0x441ADA1CL ^ (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_16, l_1415)), (safe_lshift_func_uint16_t_u_s((l_1410 = (l_1418 | ((safe_mod_func_int16_t_s_s(g_3, (safe_lshift_func_uint8_t_u_s(func_66((l_1155 = p_16), ((255UL < (l_1304 = ((safe_sub_func_int16_t_s_s(l_1415, (p_16 != 9UL))) >= 0UL))) >= p_17), g_611, p_14), p_15)))) != l_1293))), 8)))));
                    }
                    for (g_26 = 26; (g_26 == 19); g_26 = safe_sub_func_int32_t_s_s(g_26, 3))
                    {
                        char l_1446 = 0xD4L;
                        p_14 = (+(safe_mod_func_uint8_t_u_u((((((l_1351[8] = g_250[5][4][1]) != l_1410) && ((func_85(p_16, func_85((2L | (g_281 = (((safe_sub_func_uint32_t_u_u(p_17, g_34[0][5][2])) == func_85(g_1235[0][2][3], (safe_add_func_uint32_t_u_u(((l_1410 = ((((((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((250UL || (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((g_829 = (((g_281 != p_17) == g_418) & p_14)) ^ 0xD57026CCL), l_1292)) > p_17), p_15))), 0x9F04C120L)), g_234[5][2])) & p_15) | l_1117[7][1]) == 0x22L) > 0xFBL) & 0xEECE5B96L)) >= g_974), p_15)), l_1293, p_16, l_1399)) <= g_250[1][0][2]))), g_1291, l_1351[5], p_17, g_974), l_1445, p_16, g_418) | l_1446) && l_1415)) > l_1350[1][3][3]) & p_16), 1UL)));
                    }
                    if (func_21((safe_rshift_func_int16_t_s_u(0L, 8)), g_28, p_15, ((l_869 = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(p_15)), 1))) == ((l_942 < ((g_611 = p_14) ^ (p_14 != (-4L)))) < 0x98L))))
                    {
                        short l_1458 = (-1L);
                        l_1458 = (p_17 & (((safe_mod_func_int8_t_s_s(0x12L, p_15)) <= func_45((l_1410 = (func_85((((g_106 <= (g_34[0][2][1] <= g_1072)) | 0x7D337DBCL) > (g_155[0] = g_1454)), (safe_mod_func_int32_t_s_s(g_418, 7UL)), l_901, l_1350[8][2][0], l_1350[2][5][3]) & g_791)), g_607, l_1457, g_418, l_1351[8])) <= g_2[8]));
                        p_14 = ((safe_lshift_func_uint8_t_u_u(l_1292, 4)) >= (g_155[0] > (p_15 = ((l_881 = ((((+(65530UL | (0x1BL > p_15))) >= (safe_rshift_func_int16_t_s_u((3UL | (l_1350[2][5][3] || ((~(g_234[0][0] < (((safe_sub_func_uint16_t_u_u((0L >= p_14), 0x9AD0L)) > 0xC578L) == p_14))) && p_17))), p_14))) > p_16) != g_607)) & g_26))));
                        p_14 = l_1102;
                        l_1155 = (safe_mod_func_int16_t_s_s(g_34[2][7][0], func_37(p_15, (safe_mod_func_uint8_t_u_u((g_234[3][1] = (l_1415 = (p_15 > 0x1D08922FL))), 0x3BL)), g_3, l_1240[0][2], (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_1257, (safe_mod_func_int8_t_s_s(0x3FL, p_14)))), 4294967289UL)))));
                    }
                    else
                    {
                        g_259[0][0] = p_14;
                    }
                }
                else
                {
                    return l_1475;
                }
                return p_14;
            }
            for (p_15 = 0; (p_15 <= 17); ++p_15)
            {
                unsigned char l_1480 = 0xFBL;
                unsigned l_1491 = 4294967295UL;
                l_1480 = (safe_rshift_func_int8_t_s_s((l_1155 > 0xE4L), 2));
                if (((((safe_mod_func_uint32_t_u_u((p_16 || (((((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((l_901 > 1L) >= ((g_791 | (safe_lshift_func_int8_t_s_u(func_45((l_1491 = l_1480), g_259[0][0], p_15, g_186[6], (l_881 = (g_791 <= g_34[2][7][0]))), p_15))) >= l_1130)), p_16)) != p_14), l_1293)), g_34[2][7][0])) < l_1480) & p_17) > 0xF31B6569L) != 1L)), p_16)) | 0x92L) && 0UL) < 5L))
                {
                    char l_1498 = (-1L);
                    for (l_1457 = 28; (l_1457 == (-29)); l_1457 = safe_sub_func_int32_t_s_s(l_1457, 7))
                    {
                        p_14 = 1L;
                    }
                    p_17 = (safe_lshift_func_int16_t_s_u(g_234[1][0], (func_85(((l_1491 && p_17) && (l_1304 = ((p_14 ^ 0xBECBBF80L) < ((p_16 >= l_1240[0][6]) && (l_1498 = (((0xD784692BL && (func_85((safe_add_func_uint32_t_u_u((g_829 = (func_85((g_418 ^ 3L), g_281, l_1480, g_282, p_17) ^ 0x1D6969C5L)), l_1240[3][3])), p_17, l_1491, l_1480, p_17) != g_1235[0][2][2])) != g_213) < (-5L))))))), l_1491, p_15, g_259[0][0], g_186[6]) >= p_14)));
                    for (g_282 = 26; (g_282 <= 54); ++g_282)
                    {
                        g_1235[1][0][3] = g_829;
                        return l_1312[0];
                    }
                }
                else
                {
                    short l_1505 = 0xDAD3L;
                    l_1509 = ((l_1304 = ((((safe_sub_func_int16_t_s_s(g_34[2][7][0], 65533UL)) != 0xF7L) <= g_234[0][0]) && 1L)) < func_85((g_1235[0][2][3] = (l_1415 = (func_85(l_1117[7][0], l_1197[0][0][0], ((safe_sub_func_uint8_t_u_u(l_1505, (safe_add_func_uint8_t_u_u(((l_1351[7] = ((p_14 && 0xA931L) | 65535UL)) > p_16), g_259[0][0])))) || l_1113), p_15, l_1491) & l_1457))), g_1072, p_17, p_16, l_1508));
                }
                if (p_14)
                    break;
                g_342 = (func_85((g_607 <= ((((g_113 | g_106) < l_1351[8]) || func_85(g_264, g_264, g_1235[0][2][3], g_264, p_14)) > g_829)), g_118, g_250[8][1][4], l_1480, g_250[7][2][3]) <= p_15);
            }
            for (g_28 = (-17); (g_28 != 22); g_28 = safe_add_func_uint8_t_u_u(g_28, 6))
            {
                char l_1516 = 0x69L;
                g_1235[0][2][3] = ((g_186[1] || (((((0xCDL || (l_1240[0][6] <= 0UL)) && g_259[0][0]) <= (g_264 < p_14)) >= l_901) | ((((safe_mod_func_uint8_t_u_u(l_1516, l_1415)) ^ 1L) != 0UL) > 7UL))) > g_118);
                if ((!(safe_lshift_func_int8_t_s_u((l_1351[0] = l_1155), 5))))
                {
                    short l_1528[9][7][3] = {{{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}, {{0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}, {0x0CC2L, 2L, 0xF3C9L}}};
                    int i, j, k;
                    l_1351[6] = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(p_15, ((p_14 & g_191) != (-4L)))), p_15)) > (((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_15, p_15)), (g_234[0][0] ^ (safe_unary_minus_func_uint16_t_u((((((g_1072 || p_14) != p_14) ^ g_418) ^ l_1528[4][0][1]) <= 0x09L)))))) || 0x3D1BL) < 0xFB0CL)) < p_17);
                    g_1235[0][2][3] = (0x68L == g_213);
                }
                else
                {
                    unsigned l_1539[5][4] = {{18446744073709551613UL, 18446744073709551606UL, 0xB26DB278L, 18446744073709551606UL}, {18446744073709551613UL, 18446744073709551606UL, 0xB26DB278L, 18446744073709551606UL}, {18446744073709551613UL, 18446744073709551606UL, 0xB26DB278L, 18446744073709551606UL}, {18446744073709551613UL, 18446744073709551606UL, 0xB26DB278L, 18446744073709551606UL}, {18446744073709551613UL, 18446744073709551606UL, 0xB26DB278L, 18446744073709551606UL}};
                    unsigned l_1544 = 4294967289UL;
                    int i, j;
                    for (p_16 = 5; (p_16 >= 0); p_16 -= 1)
                    {
                        int i;
                        if (l_1351[(p_16 + 3)])
                            break;
                    }
                    g_259[0][0] = ((safe_rshift_func_int16_t_s_u((g_250[1][4][4] = (p_15 < ((safe_rshift_func_uint8_t_u_u(g_34[2][7][0], 2)) >= (safe_mod_func_uint8_t_u_u(((((l_1415 = (l_1516 < (safe_rshift_func_int8_t_s_u(((-7L) & ((9L || g_26) && (safe_sub_func_uint8_t_u_u(((g_1072 = (l_1539[4][1] = p_16)) || 0x65L), ((((safe_add_func_int8_t_s_s((~(l_881 = (safe_add_func_uint32_t_u_u((l_1155 = p_16), 0xAF355FE2L)))), 0x69L)) & p_17) != p_14) | p_14))))), g_282)))) || p_17) <= g_213) <= l_1117[6][1]), 0x1EL))))), g_259[0][0])) ^ g_713);
                    l_1544 = 0x6CB1481BL;
                }
            }
        }
        if (g_418)
        {
            l_1351[8] = 0x2B0C34FCL;
        }
        else
        {
            return p_14;
        }
        for (g_282 = 19; (g_282 == 55); ++g_282)
        {
            short l_1551 = 0x7197L;
            int l_1575 = 0x56088504L;
            unsigned char l_1588 = 0x5EL;
            int l_1622 = 0x0D0881D3L;
            if ((func_85((0x2CFBL ^ (((!(((safe_mod_func_uint16_t_u_u((1L == g_1235[1][2][3]), 0x41AEL)) < ((safe_mod_func_uint32_t_u_u((l_1351[7] = (l_868 != (l_1551 != (-1L)))), (safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(1UL, p_17)), 0)) > 0L) || p_17), p_14)))) != g_234[0][0])) != g_28)) != 0x38AAL) ^ l_1551)), g_118, g_829, l_975, g_791) < 8UL))
            {
                if (g_1072)
                    break;
                g_1454 = 6L;
            }
            else
            {
                int l_1563[10] = {0x62E6AB8DL, 0x2B6A4034L, 0x62E6AB8DL, 0x2B6A4034L, 0x62E6AB8DL, 0x2B6A4034L, 0x62E6AB8DL, 0x2B6A4034L, 0x62E6AB8DL, 0x2B6A4034L};
                int l_1603 = (-1L);
                int i;
                if ((0xD0L && (l_1117[7][0] != ((g_186[6] = func_85((g_259[0][0] = func_85((g_213 ^ (safe_add_func_int16_t_s_s((p_15 = (safe_lshift_func_uint8_t_u_u((l_1551 ^ l_1197[0][0][0]), 6))), (safe_unary_minus_func_int8_t_s(((g_28 = (-4L)) == g_3)))))), p_14, l_1563[2], g_259[0][0], p_16)), g_1072, p_17, p_16, p_17)) ^ p_14))))
                {
                    return p_15;
                }
                else
                {
                    unsigned short l_1579 = 3UL;
                    int l_1580 = 0x465BC563L;
                    for (l_869 = 0; (l_869 < (-11)); --l_869)
                    {
                        char l_1568 = 0xDCL;
                        int l_1578 = (-4L);
                        p_17 = (safe_add_func_uint16_t_u_u(l_1568, ((safe_rshift_func_int16_t_s_u(func_85(g_974, (l_1580 = ((+((func_85(((g_281 = (0xAA68L >= ((l_1575 = (safe_mod_func_int16_t_s_s(l_1563[2], (safe_rshift_func_int8_t_s_s(p_16, 3))))) <= (l_1568 > p_16)))) | func_85(((safe_mod_func_int16_t_s_s((-1L), (g_791 & p_16))) ^ 0x543CCADAL), g_1235[1][1][3], g_259[0][0], g_1291, l_1085)), l_1578, p_15, l_1579, g_3) == l_1579) >= g_26)) != l_1351[8])), p_17, g_264, p_15), l_1563[2])) || g_113)));
                        return l_1579;
                    }
                    g_259[0][0] = (safe_mod_func_uint16_t_u_u((0x2AL > p_17), p_14));
                    g_342 = (safe_sub_func_int32_t_s_s(l_1197[0][1][0], ((func_85((g_1235[0][2][3] = 1L), g_28, l_1563[2], g_100, p_14) ^ (safe_rshift_func_int16_t_s_s(l_1587[3][4], 4))) | (l_1588 < (-1L)))));
                    p_17 = (g_259[0][0] = (safe_lshift_func_uint8_t_u_s(0x8DL, (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(p_14, 2)), 3)) == (safe_lshift_func_uint8_t_u_u((g_234[0][0] = (((l_1563[2] = 0xADE072A4L) || l_1240[0][6]) || (safe_lshift_func_uint8_t_u_s(0x38L, 0)))), 3))) != ((0xBF12L <= ((safe_lshift_func_uint8_t_u_u(((g_2[1] & (-2L)) || (safe_add_func_int32_t_s_s(0x7EEAD7FEL, g_34[0][3][0]))), 6)) < l_1603)) == (-6L))))));
                }
                p_17 = ((l_1587[5][0] = func_85((p_15 == l_1240[0][6]), ((safe_lshift_func_uint8_t_u_s(g_791, l_1587[4][4])) <= (p_15 <= ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((g_34[2][7][0] = 65532UL), (safe_sub_func_int8_t_s_s(((g_100 ^ (((l_1563[9] = ((func_85(l_1563[1], (safe_add_func_uint32_t_u_u(((6L != l_1603) == p_14), 0x5C8784F8L)), p_14, p_14, g_1235[1][0][1]) >= p_15) & p_14)) ^ l_1588) & g_100)) != 1L), l_1587[6][0])))) ^ 0xC40FL), g_1454)) ^ l_1603))), p_17, g_234[0][0], g_1235[0][2][3])) & l_1292);
                for (l_901 = (-30); (l_901 < 43); ++l_901)
                {
                    unsigned char l_1621 = 0xE9L;
                    for (g_1072 = 0; (g_1072 == (-27)); g_1072 = safe_sub_func_int16_t_s_s(g_1072, 1))
                    {
                        l_1621 = ((l_1618 == (safe_sub_func_uint16_t_u_u(g_281, (0xF5F0L != l_1603)))) != p_14);
                    }
                    if (g_1235[0][2][3])
                        continue;
                    if (l_1563[3])
                    {
                        l_869 = 9L;
                    }
                    else
                    {
                        l_1622 = (~(l_1102 || (l_1575 = p_17)));
                        p_14 = g_118;
                    }
                    l_1351[8] = ((l_1509 == 65535UL) != func_85((p_14 = (0x38L >= 0xAAL)), l_1240[3][4], l_1117[7][0], g_259[0][0], l_1622));
                }
                g_28 = l_1623;
            }
            if (l_1351[8])
                break;
            for (l_869 = 0; (l_869 > 1); l_869 = safe_add_func_uint16_t_u_u(l_869, 3))
            {
                unsigned l_1626[3][6][8] = {{{0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}}, {{0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}}, {{0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}, {0xA490A201L, 0xA23ED55AL, 0x49A66244L, 0xCDE082B3L, 1UL, 4UL, 0xA490A201L, 0x107B0C74L}}};
                int i, j, k;
                return l_1626[1][4][4];
            }
            return l_1197[0][0][0];
        }
    }
    else
    {
        unsigned l_1635[2][8];
        short l_1643 = 0L;
        int l_1645 = (-10L);
        unsigned char l_1702 = 255UL;
        int l_1821[2];
        unsigned l_1850 = 0UL;
        int l_1995[10][8] = {{6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}, {6L, 0xF34A4E74L, 0x3674F483L, 0x476DAA2EL, 5L, 0xCA57AB00L, 0L, (-4L)}};
        int l_2002 = 0xB8B72D3EL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
                l_1635[i][j] = 0xA6CBDF87L;
        }
        for (i = 0; i < 2; i++)
            l_1821[i] = 0xD7D4ADFEL;
        for (g_791 = 0; (g_791 <= 0); g_791 += 1)
        {
            int l_1642 = 0x02503640L;
            int l_1644 = (-1L);
            int l_1646 = 0xB3133C4EL;
            unsigned l_1723 = 0xEEB3EBFAL;
            int l_1738 = (-5L);
            int l_1771 = (-4L);
            short l_1962 = (-2L);
            g_1235[0][2][3] = p_17;
            if (((safe_sub_func_uint8_t_u_u((l_869 = func_45(((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_1197[0][0][0], func_78((p_16 = (l_1635[0][2] >= p_15)), p_14, (~p_15), (l_1645 = (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_17, 0)), (safe_add_func_uint8_t_u_u(((((l_1644 = (0L < func_45((l_1642 = func_66(g_259[0][0], g_259[0][0], l_1642, g_3)), l_1257, l_1643, l_1644, g_1235[0][2][1]))) == 0xD6L) && l_1642) && 0x86AEL), p_14)))))))), l_1102)) || l_1642), p_17)) && 0L), l_1646, l_1646, g_3, g_3)), g_2[7])) | 0x1670406AL))
            {
                int l_1655 = (-3L);
                int l_1672 = 0xC6C79464L;
                int l_1686[4][9] = {{8L, 0L, 0xE08C7FE7L, (-6L), 0xA5BC5DEEL, (-6L), 0xE08C7FE7L, 0L, 8L}, {8L, 0L, 0xE08C7FE7L, (-6L), 0xA5BC5DEEL, (-6L), 0xE08C7FE7L, 0L, 8L}, {8L, 0L, 0xE08C7FE7L, (-6L), 0xA5BC5DEEL, (-6L), 0xE08C7FE7L, 0L, 8L}, {8L, 0L, 0xE08C7FE7L, (-6L), 0xA5BC5DEEL, (-6L), 0xE08C7FE7L, 0L, 8L}};
                unsigned short l_1731 = 0xA682L;
                char l_1751[3][9][1] = {{{0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}}, {{0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}}, {{0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}, {0x22L}}};
                int i, j, k;
                if ((((safe_add_func_int32_t_s_s((0x6832L & (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_191, p_14)), g_234[5][1]))), (l_881 = ((+func_85(p_15, g_234[5][2], (safe_add_func_uint32_t_u_u(0UL, func_85(p_14, g_100, l_1655, p_17, g_259[0][0]))), l_901, g_974)) > p_16)))) <= (-7L)) != g_191))
                {
                    char l_1664 = 7L;
                    int l_1667 = (-1L);
                    p_14 = (func_45((safe_add_func_uint16_t_u_u(func_78((safe_add_func_int32_t_s_s((0UL & (safe_lshift_func_int8_t_s_s(l_1236, 6))), p_17)), g_34[0][0][5], l_1257, p_14), (g_2[3] && (p_15 || p_15)))), g_342, p_15, l_975, g_974) > 0xFF70L);
                    l_1642 = 1L;
                    g_259[0][0] = (p_14 = ((func_45((((g_1072 = (l_1664 = (g_713 == (safe_rshift_func_uint8_t_u_u(254UL, p_17))))) ^ (0L | ((g_791 == (g_106 = ((safe_add_func_uint32_t_u_u(l_1667, (safe_rshift_func_uint16_t_u_s((p_15 ^ (safe_sub_func_int32_t_s_s(1L, (65534UL || p_16)))), 4)))) > 0x2ACFL))) >= 4294967295UL))) != 0xA73CL), p_14, l_1667, g_186[3], l_1667) ^ l_1645) || g_28));
                }
                else
                {
                    for (l_1618 = 0; (l_1618 >= 0); l_1618 -= 1)
                    {
                        int i, j;
                        g_259[l_1618][l_1618] = 5L;
                        p_14 = g_259[l_1618][g_791];
                        g_1454 = l_1655;
                    }
                }
                p_14 = l_1642;
                if (p_14)
                    break;
                if ((l_1646 = p_17))
                {
                    char l_1685 = 0xDBL;
                    if (((8L && (l_1672 = 0x0DL)) == (+(func_78(p_17, l_869, (func_85((safe_add_func_uint32_t_u_u((g_607 != ((safe_rshift_func_uint8_t_u_u((l_1686[3][5] = (l_1646 = (g_234[9][2] = ((safe_mod_func_uint8_t_u_u(((5L > func_78(g_106, ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((0xC1L <= ((safe_rshift_func_uint16_t_u_s(g_100, 1)) != g_791)), l_1642)), 3)) | 4294967295UL), l_1685, l_1197[0][0][0])) || p_17), l_1655)) <= 0xB500L)))), 2)) <= g_34[2][7][0])), l_901)), p_14, l_1655, g_607, g_418) && p_15), l_975) || 6UL))))
                    {
                        unsigned short l_1701 = 0UL;
                        p_14 = g_264;
                        p_17 = (safe_mod_func_int8_t_s_s(((l_1642 || p_15) < (safe_mod_func_uint8_t_u_u(func_78((safe_add_func_int16_t_s_s((1UL == (((g_186[4] < func_85(((g_113 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_2[0] >= ((p_16 && (safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(0xEBL, 0x07L)), g_259[0][0]))) | l_1701)), l_1685)), g_118))) >= g_26), p_16, l_1701, l_1644, p_14)) | g_1072) > g_3)), l_1702)), p_17, l_1685, p_14), 0x2AL))), g_34[1][9][2]));
                        if (p_14)
                            continue;
                    }
                    else
                    {
                        short l_1703 = 6L;
                        l_1644 = g_106;
                        l_1703 = (p_17 = l_1158);
                    }
                    for (g_26 = 0; (g_26 <= 0); g_26 += 1)
                    {
                        int i, j;
                        g_1235[0][2][3] = (g_259[g_26][g_791] = (g_259[g_26][g_26] < l_1102));
                        return p_15;
                    }
                    if ((+(safe_mod_func_uint8_t_u_u((p_17 != func_66(l_1672, p_17, (g_829 = g_342), ((0x7275CDE4L > (func_78(g_1706, g_713, func_78(l_1685, (0x7F6E7CA3L && g_191), g_155[0], p_17), p_17) >= g_418)) == l_1646))), 0xE3L))))
                    {
                        g_1454 = (-9L);
                    }
                    else
                    {
                        l_1645 = (-3L);
                    }
                }
                else
                {
                    unsigned l_1709 = 18446744073709551615UL;
                    int l_1720 = 0xEB4B059EL;
                    unsigned l_1732 = 18446744073709551615UL;
                    int l_1752 = 1L;
                    l_881 = g_281;
                    p_17 = ((safe_lshift_func_int16_t_s_u((g_106 = 7L), 7)) < g_191);
                    if (func_85(p_16, ((l_1709 = (l_869 = l_1702)) & ((((safe_rshift_func_uint8_t_u_u(0UL, (((safe_mod_func_uint16_t_u_u(func_66(((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_14, (0xAAL <= ((safe_sub_func_uint32_t_u_u((l_1720 = g_213), 4294967295UL)) && l_1720)))), (safe_rshift_func_int8_t_s_u(g_1235[0][2][3], g_342)))) > g_34[2][7][0]), p_15, g_1454, l_1723), 65528UL)) ^ g_34[2][2][5]) | (-7L)))) != l_942) <= 7L) <= l_1644)), g_1235[0][2][3], p_15, l_1644))
                    {
                        g_1454 = (g_1235[0][1][0] = (p_17 < l_1643));
                        g_259[0][0] = (p_17 = (l_1644 < (safe_rshift_func_int8_t_s_s(((l_1618 > l_1723) ^ (safe_mod_func_uint8_t_u_u(((func_45(g_281, ((safe_sub_func_int8_t_s_s(0x41L, (l_1732 = (p_14 > ((l_1730[0] = g_611) == (4294967295UL > (l_1731 = l_1645))))))) != l_1158), g_34[2][7][0], g_250[6][4][1], l_1257) >= 0x9BL) >= l_1645), p_16))), 3))));
                        l_869 = 0xDFEF5DEBL;
                        l_1730[0] = p_15;
                    }
                    else
                    {
                        unsigned l_1737 = 0xD2D39240L;
                        g_1235[0][1][1] = (((l_1702 != ((((l_1645 = 0xE8L) && (-7L)) & (safe_mod_func_int32_t_s_s((0xC134F1C9L != 0xFDE3D5ADL), (func_45((safe_add_func_int16_t_s_s(func_85(p_15, p_16, (65530UL == l_1737), l_1686[3][4], p_17), l_1732)), l_1738, l_1643, l_1737, p_17) ^ g_974)))) != 0xE2L)) >= g_1706) == g_1454);
                        g_259[0][0] = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_17, 7)), func_78(l_1737, g_974, p_17, (l_1752 = func_78((l_869 = (func_45(g_34[0][3][0], func_45(g_2[2], p_16, (l_1720 = (~(safe_mod_func_uint8_t_u_u(((-3L) && ((safe_sub_func_uint16_t_u_u(p_15, g_1706)) > g_281)), l_901)))), p_16, l_1635[0][2]), l_1751[0][4][0], l_1731, g_1291) ^ 0x51L)), l_1686[3][5], l_1643, g_3))))), (-8L))), g_1235[1][0][3])) >= l_1642);
                        g_1235[1][2][0] = (0xC2L >= (safe_lshift_func_int16_t_s_u((l_1645 = (g_713 = func_85(p_14, ((p_17 & (l_1720 = ((p_15 <= (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((safe_add_func_int32_t_s_s(l_1752, (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0x8BL, 0)) < (safe_lshift_func_uint8_t_u_s((0x10CCL != ((l_1771 = (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((l_1730[0] = p_16), p_14)) & 65535UL), 0x7F1BL))) > l_1737)), 2))), p_16)))) == g_3) || p_16), p_14)), 0x5AL))) ^ 0x567AL))) != g_791), p_14, l_1672, p_14))), 15)));
                        l_1645 = g_155[0];
                    }
                    p_14 = 0L;
                }
            }
            else
            {
                unsigned l_1777 = 1UL;
                if ((p_15 || ((p_17 = (l_1644 & (safe_add_func_int8_t_s_s(((p_15 = p_16) == p_17), ((l_881 = (((l_1777 = func_45(p_17, g_1072, p_16, p_14, func_78(((((safe_rshift_func_int8_t_s_s(g_3, g_259[0][0])) || p_16) < 1L) == g_829), p_16, g_1776, g_418))) & 0x91EEL) || g_974)) ^ p_14))))) | l_868)))
                {
                    int l_1782[10][3] = {{0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}, {0x5108FD2BL, 0x9F93D893L, 0L}};
                    int i, j;
                    p_17 = 0xA3258FF1L;
                    p_17 = g_418;
                    if (((((0xFCL >= ((safe_lshift_func_int8_t_s_u((g_611 = l_1645), (safe_rshift_func_uint8_t_u_u(((g_155[0] = ((p_17 == g_1454) < l_1782[7][1])) > ((safe_lshift_func_uint16_t_u_s(((func_85(l_1646, l_1771, l_1777, (safe_lshift_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s((l_1645 >= p_16), 255UL)) >= 0L) == g_213) <= p_17), 2)), l_1644) && 0x1FL) > l_1197[0][0][0]), l_1789)) > 0x2259L)), l_1730[0])))) || l_1635[1][3])) == l_1782[6][1]) | p_15) || l_1645))
                    {
                        return g_282;
                    }
                    else
                    {
                        if (p_15)
                            break;
                        l_1645 = g_155[0];
                        p_14 = l_1777;
                        g_259[0][0] = (~(g_1454 = 1L));
                    }
                    l_1645 = func_53(g_191, func_85((g_100 && 1L), p_17, (g_713 = ((((g_611 = (g_186[6] < (((((g_1072 < g_1776) >= (l_1646 = (safe_sub_func_uint8_t_u_u(p_14, (1L && l_1618))))) <= 0xF1L) >= p_16) & g_1235[0][1][0]))) | l_1782[7][1]) && l_1095) & 0xAE9EA7E6L)), g_1235[1][1][0], p_14), l_1789, g_34[2][3][3]);
                }
                else
                {
                    if (l_1777)
                        break;
                    p_17 = (g_28 = g_250[7][2][3]);
                }
                g_342 = 1L;
                for (l_1643 = 0; (l_1643 >= 0); l_1643 -= 1)
                {
                    int l_1822 = 8L;
                    int i, j;
                    if ((safe_lshift_func_uint16_t_u_s((g_34[2][7][0] = g_259[l_1643][l_1643]), 11)))
                    {
                        int l_1804 = 0x92A844E3L;
                        int i, j;
                        g_259[l_1643][l_1643] = (safe_add_func_uint8_t_u_u((l_1771 = (safe_rshift_func_int16_t_s_s((l_1645 = (((safe_rshift_func_int8_t_s_s(g_259[l_1643][g_791], 4)) >= ((p_17 & (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_1158 || 250UL) | ((g_213 || ((func_85((((l_1804 = 255UL) & l_1777) ^ (6L || (safe_sub_func_uint32_t_u_u(g_234[1][2], g_186[6])))), p_15, p_17, g_259[l_1643][g_791], p_16) ^ p_14) >= p_15)) ^ g_259[l_1643][g_791])), g_281)), 0xC4L))) > l_1095)) ^ g_259[l_1643][g_791])), g_155[3]))), 0xC1L));
                        g_259[l_1643][l_1643] = ((!(l_881 = p_14)) || l_1085);
                        l_1821[1] = (((((((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((func_66(l_1643, g_1776, (safe_sub_func_int32_t_s_s((g_259[l_1643][l_1643] = (safe_mod_func_int32_t_s_s(g_611, (safe_add_func_uint32_t_u_u(func_66(g_418, p_15, l_1777, l_900), ((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_14, l_1475)), l_1804)) >= p_15)))))), l_1821[1])), p_16) <= p_15), l_1822)), p_15)) == l_1804) > l_1822) == l_1723) | l_1635[0][2]) < 0x2CL) <= p_15);
                    }
                    else
                    {
                        return g_974;
                    }
                    l_1771 = (g_1454 = (l_1635[0][2] | (g_1235[1][0][3] = (l_1822 = func_53(p_15, l_1823[4][1], (l_1730[0] != ((l_1723 || (safe_lshift_func_uint8_t_u_u(p_14, l_901))) || ((+(p_16 | (p_16 || g_213))) > g_250[7][2][3]))), g_26)))));
                    for (l_1475 = 0; (l_1475 <= 0); l_1475 += 1)
                    {
                        int i, j, k;
                        return g_250[g_791][l_1475][(l_1475 + 4)];
                    }
                    if (l_1826[6][2])
                    {
                        p_14 = ((l_1644 = (p_17 & (safe_add_func_uint8_t_u_u(255UL, g_118)))) > (!p_17));
                        return l_1777;
                    }
                    else
                    {
                        unsigned l_1831 = 9UL;
                        if (l_1644)
                            break;
                        p_17 = p_15;
                        p_17 = (safe_lshift_func_uint16_t_u_s(g_829, l_1831));
                    }
                    for (l_1723 = 0; (l_1723 <= 4); l_1723 += 1)
                    {
                        int l_1851 = 0x2F46C938L;
                        int i, j, k;
                        p_14 = (~((((safe_add_func_int8_t_s_s((g_1072 = (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s((1UL >= (g_259[0][0] = (safe_mod_func_int8_t_s_s(func_45(l_1197[l_1643][(l_1643 + 1)][l_1643], (l_869 = (safe_sub_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u((l_1197[l_1643][(l_1643 + 1)][l_1643] != p_16), 1L)) >= l_1645) < (safe_sub_func_uint32_t_u_u(l_1197[l_1643][(l_1643 + 1)][l_1643], func_53((l_881 = l_1257), (l_1851 = l_1850), p_15, g_342)))) & 0x45EAL), 0x41L))), l_1197[0][1][0], p_14, l_1777), l_1789)))), l_1822)) != g_1235[1][2][0]), g_34[1][3][2])), 0xDFL)) < 0L), l_1197[g_791][(l_1643 + 2)][l_1643]))), p_14)) != p_14) >= l_1822) >= (-1L)));
                        if (g_250[1][0][0])
                            break;
                        g_1235[0][2][3] = 0x97CB7AFDL;
                    }
                }
            }
            if ((g_1235[0][2][3] = 0xB6F89D3EL))
            {
                unsigned char l_1856 = 0x52L;
                int l_1859 = 0x824913A2L;
                int l_1862[7][9][4] = {{{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}, {{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}, {{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}, {{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}, {{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}, {{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}, {{(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}, {(-6L), 0xE4BDB90FL, 0xCB9F7EDDL, 0x550A34F0L}}};
                int l_1899 = 0L;
                int i, j, k;
                if ((safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(g_281, l_1856)) >= p_16), (safe_lshift_func_uint16_t_u_u(((g_829 = ((l_1859 = g_34[0][3][5]) || (l_1859 >= func_85(p_15, (p_15 & func_85(g_282, (l_1862[4][7][0] = (((safe_rshift_func_uint8_t_u_u(3UL, g_1706)) | l_1642) <= p_17)), g_791, p_17, p_17)), p_17, l_1859, l_1085)))) >= l_1856), 0)))))
                {
                    unsigned l_1867[10][4] = {{0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}, {0xC089C85FL, 0UL, 6UL, 6UL}};
                    int l_1868 = 0x3A2BE3ABL;
                    int i, j;
                    p_17 = p_16;
                    for (g_974 = 1; (g_974 <= 4); g_974 += 1)
                    {
                        p_17 = g_607;
                        l_1868 = (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((-1L) < (l_1867[8][2] = p_16)), p_14)), g_250[7][2][3]));
                        return g_250[7][4][2];
                    }
                }
                else
                {
                    int l_1875 = 0x78BAB543L;
                    g_1235[0][2][3] = (safe_mod_func_uint16_t_u_u(l_1859, (p_15 = 6L)));
                    if (((safe_lshift_func_int16_t_s_s(p_16, (p_15 = 0x5B2CL))) || l_1635[0][2]))
                    {
                        const unsigned l_1889 = 0xF5FF8B90L;
                        p_14 = g_2[9];
                        p_17 = p_16;
                        p_17 = (l_1821[1] = ((l_1645 || (safe_add_func_int32_t_s_s(func_66(p_15, l_1875, func_45(l_1723, (((safe_sub_func_int32_t_s_s(l_1085, (safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_26 = l_975), (l_1646 & (safe_mod_func_uint16_t_u_u(l_1875, func_85((safe_rshift_func_int8_t_s_u((((func_85((l_1644 < p_14), g_607, p_14, g_974, p_16) <= g_234[0][0]) == 0x96L) > 0UL), 5)), p_15, l_1823[5][1], l_1859, l_1889)))))), g_1072)))))) >= g_1890[5]) ^ 65535UL), l_1891, g_100, l_1646), l_1063), 0xCB6F4310L))) & l_1889));
                    }
                    else
                    {
                        p_14 = ((((((p_17 > 0x17C39E03L) < (safe_add_func_uint16_t_u_u(65535UL, (!((p_17 < ((safe_unary_minus_func_int8_t_s(p_14)) | (p_16 < (l_1856 != (0L ^ (g_264 & 2UL)))))) == 9L))))) != g_791) == 0L) && g_713) ^ 4UL);
                        p_17 = (l_1875 == l_1859);
                    }
                    g_28 = 0xE15CC3FAL;
                }
                l_1859 = (safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_881 = l_1645) | (l_1899 <= (l_1862[0][5][3] = ((p_17 = (func_45((l_1644 = func_85(l_1856, (g_791 || func_85((g_118 || g_3), g_713, p_17, g_234[6][0], p_15)), g_1706, p_17, g_250[7][2][3])), g_611, g_100, l_1642, p_15) && g_418)) >= p_16)))), g_1890[4])), 7));
                if (g_974)
                    break;
            }
            else
            {
                int l_1900 = (-6L);
                p_17 = p_17;
                if (p_16)
                    break;
                if (l_1900)
                    break;
            }
            for (p_16 = 0; (p_16 <= 0); p_16 += 1)
            {
                unsigned l_1918 = 0x0E36E4DFL;
                unsigned char l_1935 = 248UL;
                unsigned char l_1936 = 1UL;
                int l_1943 = (-1L);
                if ((safe_lshift_func_uint8_t_u_u(func_53(func_66(p_16, (safe_sub_func_int16_t_s_s(l_1197[0][0][0], (((((((g_829 = g_213) == (g_234[0][0] & g_1291)) >= (p_14 == ((safe_add_func_int8_t_s_s(0x7AL, (p_16 < p_16))) & g_186[6]))) ^ g_213) > l_1771) >= 0xE2964238L) & l_868))), l_1635[0][1], g_106), p_17, g_1890[1], p_16), g_418)))
                {
                    short l_1919 = 0x03F5L;
                    unsigned char l_1920 = 255UL;
                    int l_1945 = 7L;
                    l_1920 = ((!(g_1072 = (p_17 || ((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(func_85(l_1911, (p_15 < p_14), g_100, (l_1919 = func_85(((func_85(((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_1102, ((safe_mod_func_int32_t_s_s((9L && ((-6L) ^ 0UL)), 4294967295UL)) == 0L))), 1)) && 1L), p_14, p_16, g_118, p_14) > l_1918) && g_186[6]), p_17, g_342, l_1918, g_611)), l_1826[6][2]), l_1918)), 3)) == 0x303D7B1DL) && 0xBD85516AL) != p_16)))) || g_342);
                    if ((safe_add_func_uint16_t_u_u((g_34[2][7][0] = ((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((0UL != (l_1918 >= (p_15 > (g_2[7] & (l_1936 = ((p_16 & func_45(((safe_add_func_uint8_t_u_u(p_17, (!func_53(g_191, (safe_sub_func_uint16_t_u_u(((g_1072 = l_1920) < (safe_mod_func_uint16_t_u_u(l_1935, (-1L)))), p_16)), l_1920, g_791)))) <= g_34[2][7][0]), g_1454, l_1918, p_17, g_1776)) < 0xA864F02EL)))))), l_1821[1])) <= p_14), l_1257)) | p_16)), 0x9A94L)))
                    {
                        int l_1944 = 0L;
                        p_14 = (g_28 = l_1935);
                        if (l_1919)
                            continue;
                        p_14 = (safe_mod_func_uint16_t_u_u((g_264 = (!(safe_sub_func_int16_t_s_s((p_15 = (8UL && ((((p_17 || (safe_add_func_int16_t_s_s((p_15 > p_14), (g_213 < p_15)))) >= (p_15 <= p_15)) ^ (l_1943 = p_17)) >= 0xE8L))), l_1095)))), l_1935));
                        l_1944 = l_1644;
                    }
                    else
                    {
                        g_28 = ((!l_1642) ^ ((l_1945 = (p_16 >= l_1113)) && g_342));
                    }
                }
                else
                {
                    g_28 = 0x72A7AA9AL;
                    if (l_1102)
                        break;
                }
                l_1823[4][1] = p_16;
                p_14 = (p_16 && func_85(l_1936, p_17, ((safe_add_func_uint8_t_u_u(l_1918, (g_1235[0][2][3] | 0x4A98L))) > g_155[2]), g_34[1][5][4], l_1936));
                for (l_942 = 4; (l_942 >= 0); l_942 -= 1)
                {
                    int l_1957[10][2][5] = {{{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}, {{0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}, {0xCE857354L, 0x2F4857DAL, (-8L), (-3L), (-3L)}}};
                    int i, j, k;
                    for (l_1063 = 0; (l_1063 <= 1); l_1063 += 1)
                    {
                        int i, j, k;
                        g_28 = (g_250[p_16][(g_791 + 2)][(l_1063 + 2)] == g_250[(p_16 + 8)][l_1063][(g_791 + 1)]);
                    }
                    if (g_250[l_942][l_942][l_942])
                        break;
                    if (((safe_unary_minus_func_int32_t_s((l_1197[g_791][(g_791 + 2)][g_791] || (safe_add_func_int16_t_s_s(((l_1197[p_16][(g_791 + 2)][p_16] || (func_45((safe_add_func_int8_t_s_s((l_1957[9][0][3] = ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(l_1197[g_791][p_16][g_791], 15)) <= l_1823[7][0]) < func_66((g_791 >= p_17), g_282, g_234[0][0], (g_250[(l_942 + 4)][(g_791 + 2)][(p_16 + 1)] = g_418))), 6)) ^ 0xE587L)), p_15)), p_16, l_1646, l_1771, g_2[3]) | g_829)) == g_1706), p_14))))) >= p_17))
                    {
                        l_1957[8][0][0] = (1L > p_15);
                        l_1962 = (safe_sub_func_int8_t_s_s(func_85(p_15, (0x4588L > g_829), p_15, g_155[2], g_100), (safe_add_func_int32_t_s_s(l_1635[0][2], 1UL))));
                    }
                    else
                    {
                        int l_1971 = 0xC6B2C8B5L;
                        int i, j, k;
                        g_1235[0][2][3] = (p_17 != (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((func_53((l_1957[8][0][3] = (safe_rshift_func_int16_t_s_u(p_17, (g_213 ^ (safe_mod_func_int32_t_s_s(func_85(l_1971, p_14, (g_250[p_16][l_942][p_16] = g_234[0][0]), ((safe_lshift_func_uint8_t_u_u((l_1957[7][0][3] = (0x8AL == (p_17 & 0L))), 7)) >= 0UL), p_16), g_155[0])))))), l_1971, l_1644, p_15) && p_17), g_607)), 6)));
                    }
                    for (g_191 = 0; (g_191 <= 0); g_191 += 1)
                    {
                        const unsigned short l_1976 = 0x02EBL;
                        int l_1978[8][7] = {{0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}, {0xF686A5E6L, 0xF686A5E6L, 0xB2902A68L, 0x59EA5576L, (-2L), 0x59EA5576L, 0xB2902A68L}};
                        int i, j;
                        g_259[0][0] = ((((((func_85(func_85(g_418, l_1114, func_85((l_1978[6][1] = (((g_713 <= g_259[0][0]) != (safe_sub_func_uint32_t_u_u(func_85(((((p_15 && (func_85(p_14, p_16, g_418, l_1197[g_791][p_16][g_791], l_1976) <= 0xD6BCAA1CL)) ^ l_1977[1]) != 1UL) && p_16), p_15, g_191, g_250[7][2][3], p_17), p_17))) >= p_15)), p_16, l_1943, g_607, l_1644), p_14, l_1976), l_1850, l_1976, l_1197[0][0][0], l_1197[0][0][0]) && 0xE7D6093CL) > l_1976) || l_1978[6][1]) <= p_15) | p_16) ^ l_1738);
                    }
                    for (g_106 = 0; (g_106 >= 0); g_106 -= 1)
                    {
                        return l_1113;
                    }
                }
            }
        }
        p_14 = func_78(((safe_lshift_func_uint16_t_u_s((0x5A1D26EEL <= ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((l_1730[0] = (safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(((g_250[7][2][3] = ((l_1821[1] = p_14) | func_45((0x0F2EF088L | (safe_rshift_func_uint16_t_u_s((~g_342), (p_15 = g_191)))), l_1995[5][5], (l_1645 = (1UL < (l_1996 = 0x1CB2D42CL))), (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((g_34[2][7][0] = ((0x0DL == p_16) && 0xFFL)), 1L)), p_17)), p_14))) == g_1776), p_14)))), l_1475))))), l_1977[1])) && 0xB32F92E8L), p_17)), 0x3FFC6B34L)) && 0xBDL)), 4)) == l_1635[0][6]), g_2001, l_2002, p_16);
        if (p_17)
        {
            l_1823[4][1] = p_16;
            p_17 = 0x91DF2549L;
        }
        else
        {
            return l_1475;
        }
        p_17 = (p_17 || (g_1235[0][2][3] = g_259[0][0]));
    }
    return g_155[0];
}







static unsigned func_21(int p_22, int p_23, char p_24, unsigned p_25)
{
    short l_33[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_33[i][j] = 0L;
    }
    p_22 = ((((p_23 >= ((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((g_34[2][7][0] = l_33[1][0]), p_24)) ^ ((!p_24) != (safe_sub_func_uint16_t_u_u((func_37(l_33[0][0], g_3, (safe_add_func_uint32_t_u_u((0xFFD02046L < func_45(((safe_rshift_func_int8_t_s_s(((~g_26) && func_53((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((!(0x4125L >= 65535UL)), 0)), 9L)), p_22)), g_28, l_33[1][0], l_33[1][0])), l_33[1][0])) & p_25), p_22, l_33[1][0], g_2[7], g_3)), l_33[1][0])), p_25, p_23) || 0x6D9CFE90L), l_33[1][0])))), g_829)) != p_25)) != l_33[1][0]) || l_33[1][0]) & 0x0141L);
    return g_155[0];
}







static int func_37(unsigned p_38, char p_39, int p_40, int p_41, unsigned p_42)
{
    short l_710 = 0xC78DL;
    int l_711 = (-10L);
    int l_712[10][4][4] = {{{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}, {{(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}, {(-7L), (-2L), 0x008B8EFDL, 0x72D260B0L}}};
    int l_716 = (-1L);
    char l_722 = (-1L);
    unsigned l_785 = 0x9D58987EL;
    unsigned l_823 = 0x20C5776BL;
    short l_824 = 2L;
    const char l_851[7] = {0xA4L, 0L, 0xA4L, 0L, 0xA4L, 0L, 0xA4L};
    unsigned short l_866 = 4UL;
    int i, j, k;
    l_712[5][0][3] = (!((l_711 = ((safe_mod_func_uint32_t_u_u(4294967290UL, ((l_710 = p_41) | p_39))) & p_42)) == (((l_712[6][1][3] | 0x59B4L) > (func_45(p_41, g_607, g_713, g_155[3], l_712[1][0][1]) < 1L)) ^ p_39)));
    for (g_264 = 0; (g_264 == 27); g_264 = safe_add_func_uint8_t_u_u(g_264, 2))
    {
        l_712[6][1][3] = (p_39 != g_607);
        g_259[0][0] = (g_28 = g_713);
    }
    if (((g_607 || (func_85(p_38, g_28, g_28, l_716, p_41) > 65529UL)) != ((safe_rshift_func_int8_t_s_u(l_711, p_40)) > l_712[6][1][3])))
    {
        unsigned l_721 = 0x008601FCL;
        g_28 = ((-5L) >= ((safe_rshift_func_uint16_t_u_s(l_721, 11)) >= (l_721 >= (l_722 = 7UL))));
        l_711 = ((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(func_78(p_38, p_38, (((-9L) && ((p_38 <= g_155[0]) > g_342)) || l_721), p_41), l_721)) & g_418) == l_721), g_611)) != 0x417460DCL);
    }
    else
    {
        int l_745[10][1][1] = {{{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}, {{0x1377F51DL}}};
        int l_746 = (-9L);
        int l_792 = 4L;
        unsigned l_813 = 0UL;
        unsigned l_822 = 0x407938CEL;
        const unsigned char l_865 = 0xC8L;
        int i, j, k;
        for (l_716 = 0; (l_716 < (-12)); l_716 = safe_sub_func_uint32_t_u_u(l_716, 2))
        {
            unsigned char l_731 = 3UL;
            short l_742 = 6L;
            int l_744 = (-2L);
            int l_853 = 0x7906164FL;
            if ((safe_rshift_func_int16_t_s_u(l_731, 3)))
            {
                int l_738 = 0x58656EAFL;
                int l_739 = (-1L);
                l_739 = (g_250[7][2][3] && ((p_42 <= ((((g_186[6] = g_250[7][2][3]) <= ((l_712[1][3][2] = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(l_731, 6)) & (p_41 == (g_282 = 1UL))), 0))) ^ ((1L & ((func_85((func_85(func_85((func_85((p_41 && 0x74L), p_39, l_731, p_42, g_250[7][2][3]) <= 1L), p_39, g_155[0], p_41, l_716), l_738, g_213, g_3, p_40) & p_40), g_250[7][2][3], l_716, l_711, l_722) < p_42) || p_38)) <= g_26))) > 251UL) != l_731)) > l_731));
            }
            else
            {
                char l_743 = (-7L);
                unsigned l_747 = 6UL;
                int l_773 = 0x462E8CA5L;
                short l_790[8] = {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L};
                int i;
                for (g_282 = (-16); (g_282 < 42); ++g_282)
                {
                    g_259[0][0] = p_38;
                    for (g_418 = 7; (g_418 >= 0); g_418 -= 1)
                    {
                        int i;
                        l_742 = g_186[g_418];
                        if (g_186[g_418])
                            continue;
                        l_744 = l_743;
                    }
                    l_746 = (g_28 = (l_745[6][0][0] = 0x60E5B62DL));
                }
                if (l_747)
                {
                    unsigned l_750 = 0UL;
                    if (g_234[0][0])
                        break;
                    g_259[0][0] = l_712[6][1][3];
                    g_259[0][0] = ((l_747 <= (((0x4214L ^ (g_100 = 65535UL)) | (safe_sub_func_uint32_t_u_u(g_281, p_41))) >= (l_750 == ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_712[4][1][3], (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_38, (0x6AE8423AL > l_746))), 0UL)))), l_750)) || g_713)))) < 65535UL);
                }
                else
                {
                    unsigned l_769 = 0UL;
                    int l_770 = 0xC8443DF4L;
                    char l_784 = 1L;
                    if ((p_40 | (l_773 = (((-8L) & g_2[6]) || ((((safe_lshift_func_int16_t_s_s(p_42, 5)) ^ l_710) > ((safe_sub_func_uint8_t_u_u(p_39, 255UL)) != (((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((l_770 = (safe_lshift_func_int8_t_s_s(l_769, 5))), (safe_mod_func_int32_t_s_s((g_186[6] && 0x3E17ED84L), g_282)))), l_746)) >= (-3L)) < 4294967295UL) >= p_40) < l_747))) & g_250[7][2][3])))))
                    {
                        l_785 = (((l_747 <= ((((g_100 = ((((safe_rshift_func_uint16_t_u_s(p_40, (p_41 < (((l_773 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-1L), 11)), ((func_85(g_155[0], (g_418 = (0x01L > (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_155[1], (p_39 & p_40))), g_264)))), l_784, p_42, p_39) != l_716) & l_742)))) > 1L) >= 0x91L)))) != l_770) & g_213) < g_100)) <= p_40) != 0xB3CAL) != g_713)) & 0x2CL) <= 8UL);
                    }
                    else
                    {
                        l_744 = g_191;
                        g_342 = (p_40 & ((safe_add_func_int8_t_s_s((p_41 <= (-10L)), (0UL != (((g_791 = (g_713 = ((safe_sub_func_uint8_t_u_u((l_790[4] = p_40), (4294967287UL & (g_26 = 0x186AAD64L)))) | 0x3ABA294FL))) <= 7UL) <= l_747)))) >= l_773));
                        g_259[0][0] = (g_342 = p_38);
                        return g_250[7][2][3];
                    }
                    l_711 = p_42;
                    l_773 = func_78(l_792, p_42, p_41, l_716);
                    if ((safe_add_func_uint32_t_u_u(l_790[4], (safe_lshift_func_uint16_t_u_u(((l_773 = ((l_712[8][3][3] = (safe_mod_func_int8_t_s_s(((((((l_711 = func_45((safe_unary_minus_func_int32_t_s(g_611)), (l_722 <= ((((l_747 < (0L == 6UL)) != ((safe_rshift_func_int16_t_s_u(((-2L) < (g_281 >= (p_38 >= 4UL))), g_26)) > 0x1422L)) && l_769) <= 0x8DC38168L)), g_282, g_186[4], l_711)) && l_746) == g_607) <= l_770) & g_713) < p_38), g_2[5]))) > p_39)) == l_770), l_790[4])))))
                    {
                        unsigned char l_810[1][1];
                        int l_811[6][9] = {{1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}};
                        int l_812 = 0x720B0BD7L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_810[i][j] = 0xA2L;
                        }
                        l_812 = ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((0x2EL ^ l_790[5]), (g_234[0][0] | (4294967293UL != ((l_811[3][6] = (l_712[0][1][3] = (((l_712[6][1][3] ^ (((-6L) < 0xC6L) == (safe_mod_func_int32_t_s_s((65527UL > ((1L != 5UL) > (-6L))), g_234[0][0])))) & l_810[0][0]) | 0xC761L))) <= p_39))))), 0)) && p_39);
                    }
                    else
                    {
                        l_773 = 8L;
                    }
                }
                l_813 = 0L;
            }
            l_824 = (func_66((l_744 > (((l_711 = (safe_sub_func_uint32_t_u_u(((!(safe_lshift_func_int8_t_s_s(g_113, l_722))) >= p_38), p_42))) && (safe_add_func_uint16_t_u_u(0xF6F8L, l_710))) && ((safe_add_func_uint32_t_u_u(l_746, func_85(((0x48L < g_259[0][0]) == p_41), l_716, l_822, p_39, p_40))) && l_745[6][0][0]))), g_234[0][0], l_742, l_823) != 4294967295UL);
            if (func_66(((safe_sub_func_int32_t_s_s(0xA5436E7CL, (safe_add_func_uint32_t_u_u((g_250[7][2][3] < (0UL & 3L)), (func_85((!(l_742 == g_155[1])), (g_829 == (((safe_rshift_func_int16_t_s_u((l_742 < (g_191 = ((safe_mod_func_int32_t_s_s((l_746 = p_41), l_722)) && (-4L)))), 4)) > 4294967291UL) ^ l_785)), p_40, g_791, l_742) == p_42))))) & g_607), g_259[0][0], l_710, l_822))
            {
                int l_834 = 0x3214220AL;
                g_259[0][0] = l_711;
                l_744 = func_66((l_711 = (0xBB89L >= func_45(g_2[4], p_38, (p_39 = g_28), l_710, p_38))), (l_834 < p_42), l_745[6][0][0], g_607);
                g_342 = 0L;
                l_744 = (func_78((g_418 = ((-7L) == (safe_rshift_func_uint8_t_u_s(p_41, (safe_add_func_uint32_t_u_u((l_744 > (safe_sub_func_int16_t_s_s(l_745[6][0][0], l_823))), (safe_add_func_int32_t_s_s(func_53((l_792 = (4L | (0x55L ^ (((l_712[6][1][3] & (255UL != p_41)) <= 0xF7407BA2L) >= 0xC3D678F5L)))), p_40, g_3, g_259[0][0]), g_829)))))))), l_824, l_834, l_834) == p_42);
            }
            else
            {
                const int l_852 = 0xF22A51C4L;
                int l_854 = 0x481E8985L;
                if ((g_264 ^ ((func_85(p_40, p_41, g_3, func_85((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((func_85((p_41 != (g_3 < (0x58L || (((func_85((l_712[6][1][3] = g_342), (((((p_40 >= 0xF9DE9E4CL) >= g_259[0][0]) || (-4L)) != 0xF7E8L) && p_39), g_2[9], g_113, l_851[3]) <= p_38) > l_852) | l_852)))), g_259[0][0], p_42, l_853, g_191) && g_2[1]), 1)), 5)), g_118, p_38, g_191, g_186[2]), g_3) >= g_791) > p_40)))
                {
                    l_854 = (p_42 || l_852);
                }
                else
                {
                    l_792 = (0x7623L > g_607);
                    l_711 = g_250[7][2][3];
                }
            }
        }
        l_746 = (p_38 <= (g_282 <= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(l_712[6][1][3], 4)), 6))));
        l_712[6][1][2] = ((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(((l_746 = (func_66((0x4663L | func_85(l_813, (g_281 && p_38), l_710, func_85(p_42, (((g_213 > l_865) == p_42) == p_41), p_39, p_39, g_281), p_38)), l_722, p_42, g_250[1][3][3]) ^ p_40)) != 0L), g_791)) > p_39) < g_829), p_41)), l_865)) | g_2[8]);
    }
    l_866 = p_38;
    return p_39;
}







static unsigned func_45(unsigned p_46, unsigned p_47, char p_48, char p_49, unsigned p_50)
{
    int l_363 = (-1L);
    int l_368 = (-1L);
    int l_371 = 0x1F648EDCL;
    int l_372 = 0xEC811DE7L;
    unsigned l_373[9];
    unsigned l_393 = 0UL;
    int l_656 = 0x496B2935L;
    int l_675 = 0xBECA7DCAL;
    int i;
    for (i = 0; i < 9; i++)
        l_373[i] = 1UL;
    if ((0UL >= ((~l_363) >= (p_49 || (+((l_372 = (safe_lshift_func_int8_t_s_u(((l_368 = g_118) < (l_363 < (p_50 = (l_363 > (l_363 <= (((0x3147L || (safe_rshift_func_int16_t_s_u((l_371 = p_46), g_186[0]))) ^ p_49) == g_234[0][0])))))), p_49))) <= l_373[1]))))))
    {
        return l_372;
    }
    else
    {
        short l_378[2][3] = {{8L, 8L, (-1L)}, {8L, 8L, (-1L)}};
        int l_388[10][4][6] = {{{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}, {{0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}, {0xFC7AFDE3L, 0L, 0x2CC644FEL, (-1L), 0L, 0xCC7CD23BL}}};
        unsigned l_473 = 0xCFF001DEL;
        int l_511 = 0xE8C53431L;
        unsigned l_530[2];
        short l_562 = 0xA22EL;
        int l_704 = (-1L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_530[i] = 4294967290UL;
        g_259[0][0] = (safe_rshift_func_uint16_t_u_u((l_372 = g_259[0][0]), 12));
        if ((safe_rshift_func_int16_t_s_u(p_48, g_213)))
        {
            unsigned short l_381 = 0x0C1BL;
            l_378[0][0] = g_281;
            for (g_100 = 0; (g_100 > 50); g_100++)
            {
                int l_394 = 3L;
                if (l_381)
                    break;
                if (g_26)
                    continue;
                if (p_47)
                {
                    unsigned l_392[5];
                    int l_421[7] = {(-3L), (-3L), 0xCDDC6669L, (-3L), (-3L), 0xCDDC6669L, (-3L)};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_392[i] = 0x05EBF11CL;
                    for (l_371 = 0; (l_371 != (-6)); l_371 = safe_sub_func_int16_t_s_s(l_371, 4))
                    {
                        unsigned l_391 = 4294967286UL;
                        g_342 = func_85((safe_rshift_func_int8_t_s_s(p_48, 1)), (l_391 = (safe_mod_func_uint8_t_u_u((l_388[2][2][0] = 255UL), (safe_sub_func_int32_t_s_s(l_381, p_46))))), l_392[2], (p_48 >= p_46), l_381);
                        if (g_155[0])
                            break;
                        g_342 = (l_368 != g_250[7][2][3]);
                        g_342 = l_373[1];
                    }
                    l_393 = (g_28 = g_213);
                    l_394 = (-1L);
                    for (g_342 = 0; (g_342 < 28); g_342 = safe_add_func_uint16_t_u_u(g_342, 2))
                    {
                        unsigned char l_417 = 0x51L;
                        l_372 = (l_371 = ((safe_lshift_func_uint8_t_u_u(g_186[6], 5)) && 0x0E2D7CA3L));
                        g_259[0][0] = (safe_add_func_uint8_t_u_u((0x74B79373L | (safe_lshift_func_uint16_t_u_u((l_388[2][2][0] = (((safe_rshift_func_uint16_t_u_s(((((func_85((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_49, p_50)), 14)), p_48, g_234[0][0], l_388[2][2][0], l_394) && (safe_add_func_uint32_t_u_u(1UL, p_49))) != g_250[4][2][2]) & (-1L)) > g_259[0][0]), 15)) >= p_46) | p_48)), 4))), p_47));
                        l_421[6] = (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_342, (l_394 = ((safe_rshift_func_uint8_t_u_s(((p_48 = func_85((g_259[0][0] = func_85((0xCAA1L == l_388[2][0][4]), (g_418 = (((l_417 != 0x9FBFL) == g_113) ^ l_372)), ((g_281 = (safe_add_func_uint32_t_u_u(4294967289UL, 0x58CAC2ADL))) >= p_48), p_47, g_155[0])), p_50, l_378[0][0], g_250[8][3][4], g_213)) | l_417), 0)) >= g_250[7][2][3])))), p_50));
                        g_259[0][0] = 0L;
                    }
                }
                else
                {
                    l_394 = (safe_rshift_func_int16_t_s_u((p_47 < (func_85(p_46, p_48, l_394, p_48, g_106) | 6UL)), (((p_49 < p_50) != 0x5B0D6498L) != g_191)));
                }
                for (l_394 = (-9); (l_394 <= (-9)); l_394 = safe_add_func_int32_t_s_s(l_394, 5))
                {
                    const int l_432 = (-1L);
                    int l_442[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_442[i] = 0x805AE64BL;
                    if ((safe_rshift_func_uint16_t_u_u(((g_264 = (safe_sub_func_int8_t_s_s(l_388[2][2][0], p_46))) != ((g_28 = (p_49 <= (safe_mod_func_int16_t_s_s(((0L == g_234[6][0]) == (~(l_432 < 0x8B2871B6L))), p_48)))) < p_48)), 6)))
                    {
                        unsigned char l_441 = 0x54L;
                        l_442[3] = (+(safe_sub_func_int16_t_s_s(p_46, ((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(p_49, 0)) && (safe_add_func_uint8_t_u_u(g_259[0][0], (l_388[6][3][3] = l_441)))), ((l_368 = ((g_186[5] && (((9L >= 0xE35749F2L) <= 1UL) || p_50)) || p_48)) & l_373[1]))) != g_28))));
                        return g_118;
                    }
                    else
                    {
                        unsigned short l_445[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_445[i] = 0x01CCL;
                        g_342 = func_85(p_49, p_47, g_281, g_281, (safe_mod_func_uint16_t_u_u((p_46 != func_85(l_381, l_373[4], ((!p_49) <= (1L < l_445[0])), g_3, p_48)), 0x126CL)));
                        if (l_371)
                            break;
                    }
                }
            }
            l_388[2][2][0] = ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_372 = (safe_mod_func_int32_t_s_s((g_282 | (safe_sub_func_uint8_t_u_u(func_85(((safe_rshift_func_uint16_t_u_s(1UL, (((l_381 && ((p_50 = (safe_sub_func_int8_t_s_s((p_48 = (((l_372 > ((((safe_mod_func_uint32_t_u_u(l_381, (safe_lshift_func_uint8_t_u_u(l_388[4][0][2], 4)))) <= (g_28 = 0x7A3259C2L)) <= p_50) == ((g_418 < p_46) >= 0x33L))) >= p_47) && p_48)), 2UL))) != p_49)) < 0x4549L) < l_381))) <= 0xB3087533L), g_3, g_234[0][1], g_282, l_378[1][0]), l_393))), l_373[0]))), p_46)), g_213)) <= l_368);
            return g_155[3];
        }
        else
        {
            int l_472 = (-4L);
            int l_557 = 0x7815DFC9L;
            char l_575 = 0x17L;
            if (g_259[0][0])
            {
                unsigned char l_474 = 0x12L;
                unsigned l_503[7][1][4] = {{{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}, {{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}, {{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}, {{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}, {{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}, {{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}, {{0x1D7558ECL, 0x1D7558ECL, 0x74AFD102L, 0x1D7558ECL}}};
                int l_505 = 1L;
                int i, j, k;
                for (g_213 = 0; (g_213 >= 41); g_213++)
                {
                    return g_118;
                }
                if ((safe_add_func_uint32_t_u_u(func_78((g_418 = g_106), p_50, p_50, (safe_rshift_func_int16_t_s_s(g_213, 8))), ((safe_sub_func_uint8_t_u_u(l_472, (l_474 = (((g_342 = (l_378[0][0] ^ l_473)) && ((g_2[7] || l_472) <= (-1L))) != 0x24E06F0FL)))) && l_363))))
                {
                    char l_498 = 0x87L;
                    int l_501 = 0x449C2089L;
                    g_342 = (g_28 = (safe_unary_minus_func_int32_t_s(p_49)));
                    if (((p_48 == (((((safe_rshift_func_uint16_t_u_u(p_50, 11)) | ((~(0xBBC5L <= l_378[0][0])) < (g_250[4][0][3] = (((1L >= (safe_lshift_func_int16_t_s_u(g_342, 0))) < (0x6323452DL >= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((l_388[5][1][0] | (safe_lshift_func_uint16_t_u_s((l_474 == g_106), p_50))), 1UL)) >= g_3) < g_264), 5)), p_46)))) ^ g_281)))) <= p_47) <= l_472) != p_48)) & l_388[6][0][2]))
                    {
                        short l_502 = 1L;
                        int l_504 = 0x55A01E3AL;
                        l_505 = (l_504 = (0xB2L || (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((g_281 = ((-10L) ^ (((safe_lshift_func_int16_t_s_u((l_473 > (safe_mod_func_uint32_t_u_u(l_498, 1UL))), (((safe_rshift_func_int8_t_s_u(func_85(((g_155[2] = 0xFBL) == (l_501 = 0x39L)), ((g_264 < p_49) > g_250[0][0][0]), g_28, l_502, g_250[7][2][3]), 4)) != g_281) || p_46))) >= l_373[8]) == 65533UL))), p_50)) | p_47) <= p_46), l_503[3][0][1])), p_50))));
                        l_363 = g_113;
                    }
                    else
                    {
                        short l_506 = (-6L);
                        return l_506;
                    }
                    g_342 = (safe_mod_func_int32_t_s_s(l_378[0][0], l_378[1][1]));
                }
                else
                {
                    if ((safe_rshift_func_uint16_t_u_u((p_50 & (l_388[2][2][0] = 0L)), 11)))
                    {
                        g_28 = 0L;
                        g_259[0][0] = 0x4EA9184FL;
                        l_511 = (p_49 > (l_388[3][2][3] = ((-6L) == g_281)));
                    }
                    else
                    {
                        char l_514 = 0xD6L;
                        int l_515 = 0xAC7C5AB8L;
                        l_514 = (safe_rshift_func_uint16_t_u_u(0x20BDL, 12));
                        l_515 = l_474;
                        l_371 = l_472;
                    }
                }
            }
            else
            {
                short l_524[2][8] = {{0xDDC4L, 0xF7E9L, 0xF6E0L, 0xF6E0L, 0xF7E9L, 0xDDC4L, 0xF7E9L, 0xF6E0L}, {0xDDC4L, 0xF7E9L, 0xF6E0L, 0xF6E0L, 0xF7E9L, 0xDDC4L, 0xF7E9L, 0xF6E0L}};
                unsigned l_543 = 4294967287UL;
                int l_544 = 1L;
                unsigned l_574 = 0xF471FC3DL;
                int i, j;
                for (g_191 = 0; (g_191 <= 37); g_191++)
                {
                    unsigned short l_529 = 0xE6E5L;
                    int l_542 = 3L;
                    int l_556 = 0xF0201BE4L;
                    g_342 = l_472;
                    if (((0xDDEF2D6EL ^ (l_472 | ((safe_sub_func_int8_t_s_s(g_26, (g_281 = (((safe_rshift_func_uint8_t_u_u((func_85((safe_sub_func_int16_t_s_s(l_524[0][5], p_50)), (g_418 = ((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((g_418 >= p_47), l_524[1][0])), func_85(p_46, p_49, l_472, p_48, l_473))) < 0x2581L) > g_234[0][0]) || g_2[9])), g_259[0][0], p_48, g_186[3]) <= (-1L)), p_47)) <= p_50) | l_529)))) ^ 0x0FL))) >= g_250[7][2][3]))
                    {
                        l_511 = g_155[1];
                        g_342 = p_47;
                        l_511 = func_85(g_282, p_50, (0xC947B2D1L ^ 0x075E3B09L), g_100, (g_191 > (p_46 | func_85(p_47, l_388[7][2][4], p_48, l_524[0][5], g_259[0][0]))));
                        return g_155[0];
                    }
                    else
                    {
                        l_368 = (l_530[0] = l_529);
                    }
                    if (((safe_add_func_uint8_t_u_u(p_49, ((((l_544 = (((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s(l_524[1][0], 9)))) | (safe_rshift_func_uint8_t_u_u((p_48 < p_47), 4))) | (p_50 == (safe_rshift_func_uint16_t_u_u(((-1L) < ((safe_sub_func_uint16_t_u_u((g_264 = (l_473 < (l_542 = ((p_46 < p_46) & l_472)))), l_371)) & 1UL)), l_543))))) | 0x85B1L) == 0x6E0BL) || g_234[0][0]))) > p_48))
                    {
                        unsigned l_555 = 0x3A155E93L;
                        l_511 = ((0x09L && func_85((l_557 = (safe_lshift_func_int16_t_s_s((g_186[6] >= (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_191, g_259[0][0])) == (safe_add_func_int16_t_s_s((l_372 = (l_472 = (((0x1AL > g_100) <= l_529) > ((l_372 || l_555) >= l_556)))), g_186[3]))), 0)), g_3))), 4))), g_155[0], g_155[0], l_555, g_281)) && l_555);
                        if (p_48)
                            continue;
                        if (l_368)
                            break;
                        l_388[2][2][0] = func_85(func_85(g_28, (safe_sub_func_int16_t_s_s(1L, p_49)), (l_542 = (safe_add_func_uint16_t_u_u(((+l_562) == (p_47 && (safe_unary_minus_func_int16_t_s(0x244CL)))), 0x77C5L))), p_47, ((g_234[7][1] = (l_544 = (safe_rshift_func_uint8_t_u_u((g_155[1] = g_259[0][0]), l_524[0][1])))) && l_472)), p_46, g_418, p_48, p_46);
                    }
                    else
                    {
                        return g_113;
                    }
                }
                g_259[0][0] = (safe_sub_func_uint8_t_u_u((func_78(p_49, (safe_sub_func_int32_t_s_s((g_28 = ((safe_add_func_int32_t_s_s((g_259[0][0] = ((-1L) & l_562)), (safe_add_func_int32_t_s_s((l_574 = g_264), p_47)))) | p_47)), (l_472 < ((p_50 && (g_282 = l_575)) & g_418)))), g_155[1], g_106) != l_371), l_557));
                l_511 = (safe_unary_minus_func_int32_t_s(1L));
                for (g_118 = 0; (g_118 <= 1); g_118 += 1)
                {
                    unsigned short l_591 = 0x672EL;
                    l_472 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((g_186[6] | (((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((0UL & 0UL), (func_85(p_48, (safe_add_func_int8_t_s_s((l_472 != g_418), p_46)), g_28, (g_26 == 1L), g_118) | g_155[3]))) <= 0x93L), 5UL)), p_48)), g_155[2])) > 0x38L) > g_259[0][0])) != g_213), g_26)), 11));
                    g_259[0][0] = 1L;
                    g_259[0][0] = l_530[1];
                    for (l_574 = 0; (l_574 <= 4); l_574 += 1)
                    {
                        l_544 = l_591;
                        if (g_155[0])
                            break;
                    }
                }
            }
            for (l_511 = 0; (l_511 >= 7); l_511++)
            {
                unsigned l_608 = 0xCF7707E0L;
                int l_609[7][7][1] = {{{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}, {{4L}, {4L}, {4L}, {4L}, {4L}, {4L}, {4L}}};
                int l_610 = 1L;
                unsigned char l_658 = 0xA9L;
                unsigned char l_701 = 0xBDL;
                int i, j, k;
                if (l_373[1])
                {
                    char l_606 = 1L;
                    int l_614 = 9L;
                    unsigned l_647 = 0UL;
                    if (((((safe_sub_func_int32_t_s_s((p_48 & (l_610 = (p_49 = (g_281 = (l_609[1][2][0] = (((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((l_388[2][2][0] = g_100), (l_608 = func_85(p_48, (l_557 ^ ((safe_sub_func_uint8_t_u_u(5UL, (((l_368 = (safe_lshift_func_int8_t_s_s(g_234[4][2], 7))) || ((l_606 = (p_49 < ((p_50 < (safe_mod_func_int16_t_s_s(l_472, 0xFCCBL))) > 4294967288UL))) && (-1L))) <= 1UL))) == p_50)), p_49, l_373[2], g_607)))), 0x4EL)) ^ p_50) == g_186[7])))))), g_259[0][0])) && g_26) >= l_530[0]) < g_611))
                    {
                        char l_615[6] = {1L, (-1L), 1L, (-1L), 1L, (-1L)};
                        int i;
                        l_615[0] = func_66(p_46, ((g_191 | (l_609[1][2][0] == ((g_259[0][0] && (l_610 = p_46)) || (l_614 == ((l_363 = l_606) || g_282))))) != g_607), p_47, p_50);
                    }
                    else
                    {
                        char l_620 = (-9L);
                        int l_629 = 0x72EB7F0DL;
                        l_472 = func_78(func_53((g_234[4][2] > ((0x11L || g_100) > (l_620 = (((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(((func_85((l_373[5] | 0xAD372BBFL), g_250[6][0][1], (0x6D39L ^ p_50), g_234[8][0], g_234[0][0]) > p_46) && p_46), 0UL)) <= p_46), 2)) | p_46) >= 0xA2L)))), g_259[0][0], p_48, p_47), p_49, p_47, p_48);
                        l_629 = (safe_sub_func_uint32_t_u_u(0xF370F6D0L, (((safe_mod_func_uint16_t_u_u(0UL, ((safe_lshift_func_int8_t_s_s(g_281, ((~((safe_lshift_func_int8_t_s_s(((g_118 < l_373[3]) & (l_557 = (65530UL <= ((255UL > 0xE6L) || ((p_49 >= l_530[0]) || l_473))))), g_234[7][0])) ^ l_378[0][0])) | g_213))) & 0x4881L))) || l_557) != 0UL)));
                        l_472 = ((g_234[8][2] | ((0x02723120L ^ ((l_388[2][2][0] = (p_50 = (func_85(((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((-1L), (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_608, 2)) > (l_629 = (safe_sub_func_int8_t_s_s(l_606, (p_46 < ((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_48, (((p_46 <= (safe_unary_minus_func_int32_t_s(((((((g_213 >= l_608) < 65526UL) < 0x15F3L) == 0xB7FCD5A7L) ^ 1UL) ^ 0xFDL)))) | l_647) & l_575))), 0x4EB0L)) | 4L)))))), 0xE0L)))), g_118)), l_606)) >= (-8L)), g_259[0][0], g_186[6], p_47, p_46) >= l_620))) < l_609[1][2][0])) > 0L)) & l_609[2][0][0]);
                        g_28 = ((p_46 & (g_118 < g_106)) ^ 0xB1795F35L);
                    }
                    l_656 = (((p_49 = ((p_49 != (safe_sub_func_uint32_t_u_u(g_3, g_234[0][0]))) ^ ((safe_sub_func_int16_t_s_s((p_49 & g_281), (!func_85(g_155[3], p_49, ((p_50 = (func_85(((((safe_rshift_func_int8_t_s_u(func_85(l_647, (((safe_lshift_func_uint16_t_u_u(l_371, 7)) | p_47) > l_610), l_393, p_47, l_647), g_234[0][0])) >= p_49) <= (-1L)) >= p_46), p_47, g_282, l_614, g_234[9][1]) == p_47)) ^ l_371), p_47, l_557)))) & l_610))) ^ l_608) != p_47);
                    if (l_614)
                    {
                        int l_657[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_657[i] = 0x38B4125FL;
                        l_372 = (g_342 = l_530[1]);
                        l_657[3] = p_48;
                        if (l_658)
                            continue;
                    }
                    else
                    {
                        unsigned l_663 = 0UL;
                        g_259[0][0] = ((l_472 = (safe_mod_func_int32_t_s_s(g_418, (safe_add_func_uint32_t_u_u(g_155[1], 0x01DB40FBL))))) && (p_48 & ((((((-1L) != ((0x242DL < (func_53(g_264, l_575, p_48, g_234[7][2]) ^ p_48)) != 0xF27AL)) >= g_607) < 1L) | 0xA0L) == g_3)));
                        l_609[1][2][0] = (l_608 || 3L);
                        if (l_663)
                            continue;
                        l_609[1][2][0] = g_113;
                    }
                    l_557 = (((l_606 ^ ((safe_rshift_func_int8_t_s_u(1L, func_78(l_608, l_530[1], g_213, ((g_250[6][1][3] = ((((p_48 & (l_609[1][2][0] = l_608)) > (p_50 >= 4UL)) == p_46) && p_47)) == g_28)))) < 0L)) != l_388[2][2][0]) | p_46);
                }
                else
                {
                    unsigned l_674 = 0x4A651F40L;
                    int l_683 = (-9L);
                    for (l_472 = 0; (l_472 <= 0); l_472 += 1)
                    {
                        int l_676 = 5L;
                        int i;
                        g_28 = (l_609[1][2][0] = ((((safe_rshift_func_int16_t_s_u(g_155[(l_472 + 3)], 4)) > g_155[(l_472 + 2)]) && g_264) > 6L));
                        l_372 = ((func_66((func_85(p_50, (l_658 > (((!(((l_610 = p_46) && p_47) < (g_3 | 1L))) == (((g_155[(l_472 + 3)] = (safe_add_func_int32_t_s_s((g_100 > ((safe_rshift_func_int8_t_s_u(0x7FL, ((safe_lshift_func_uint16_t_u_u(p_47, l_674)) == l_472))) && g_282)), 0UL))) ^ g_186[6]) != p_47)) | 0x8DFF5A29L)), l_608, g_264, p_46) > p_49), p_47, l_675, p_48) & 0x25FE5228L) && 0xF6L);
                        l_683 = (g_250[6][2][1] && ((p_48 <= (func_53((l_609[1][2][0] = ((l_378[0][2] < g_213) != (l_676 = (g_186[6] = g_607)))), ((safe_lshift_func_int8_t_s_s((g_282 ^ (safe_add_func_int16_t_s_s(p_46, (g_118 >= (safe_mod_func_uint32_t_u_u(p_48, 0xD8A9F2FEL)))))), l_674)) <= p_49), g_28, p_48) & 0x29L)) > 0xB721L));
                    }
                    for (l_368 = 0; (l_368 <= 2); l_368 = safe_add_func_uint32_t_u_u(l_368, 6))
                    {
                        int l_690 = 0x1113B003L;
                        l_372 = (g_28 = (safe_add_func_int32_t_s_s((p_50 | (((safe_rshift_func_int8_t_s_s((l_690 = 0x52L), ((g_100 = (safe_rshift_func_int16_t_s_u((4294967295UL == g_118), (safe_rshift_func_uint8_t_u_s((g_250[2][4][0] > (6L && 255UL)), (g_281 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((p_49 = g_106) < (((safe_sub_func_uint8_t_u_u((((((+(((g_611 = (-9L)) & p_47) | (-1L))) | 1UL) <= p_47) && p_48) >= 0xB2AD4C22L), g_28)) >= l_656) >= 0x641AL)), 4)), p_50)))))))) == g_28))) ^ 1L) >= 1L)), l_701)));
                        l_704 = (0xB3916D3EL != (safe_add_func_uint16_t_u_u(((l_388[2][2][0] = func_78(l_530[1], l_557, (g_611 = ((g_100 = (p_49 || (l_609[6][3][0] = p_49))) | p_48)), g_342)) >= (g_418 & 0xF0L)), g_607)));
                        g_28 = (safe_unary_minus_func_uint8_t_u(p_50));
                    }
                }
                l_472 = (safe_mod_func_uint16_t_u_u(((0UL | p_50) || p_46), 4L));
            }
        }
        return l_675;
    }
}







static char func_53(unsigned short p_54, int p_55, char p_56, int p_57)
{
    int l_73 = 0x814C7C74L;
    unsigned l_97[9] = {18446744073709551615UL, 18446744073709551615UL, 0xD5E8E059L, 18446744073709551615UL, 18446744073709551615UL, 0xD5E8E059L, 18446744073709551615UL, 18446744073709551615UL, 0xD5E8E059L};
    int l_101 = 0x1F28F681L;
    int l_353 = 0x1CD71164L;
    const char l_361 = (-1L);
    unsigned l_362 = 0x78477942L;
    int i;
    l_353 = (safe_rshift_func_int8_t_s_u(func_66((safe_lshift_func_int16_t_s_s(0L, l_73)), (safe_lshift_func_uint16_t_u_u(((p_54 = ((safe_mod_func_int8_t_s_s(func_78((l_73 != ((safe_lshift_func_uint8_t_u_s(255UL, (func_85((l_101 = (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((g_28 = (l_97[3] | l_97[3])), (l_97[3] > (g_100 = ((safe_add_func_uint16_t_u_u(65526UL, g_26)) ^ l_97[3]))))), 0x9FAAL)), 0xB7L))), l_97[0], p_57, l_97[8], p_57) == 8L))) <= g_2[5])), g_26, l_97[7], l_97[7]), g_3)) && g_3)) >= g_3), 12)), l_73, p_56), 7));
    for (g_213 = (-24); (g_213 >= 32); g_213 = safe_add_func_int16_t_s_s(g_213, 1))
    {
        int l_360[9][3][2] = {{{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}, {{0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}, {0x9EE888D9L, 0x44330DC0L}}};
        int i, j, k;
        l_362 = ((g_264 < ((safe_lshift_func_uint16_t_u_s(g_191, (safe_add_func_uint32_t_u_u(g_186[4], (0x21FFL || (!0x99C5L)))))) <= func_85(((g_213 > (l_101 = (g_259[0][0] == p_57))) != (func_85((g_342 = (((-1L) > p_55) <= l_360[5][2][0])), l_97[4], p_56, p_56, l_361) ^ p_56)), g_259[0][0], p_55, l_97[3], g_186[6]))) < p_56);
        l_360[2][1][0] = g_28;
    }
    return l_361;
}







static char func_66(unsigned p_67, int p_68, unsigned p_69, short p_70)
{
    char l_310 = 0x9CL;
    int l_321 = 0L;
    int l_324[5];
    short l_352[3];
    int i;
    for (i = 0; i < 5; i++)
        l_324[i] = 1L;
    for (i = 0; i < 3; i++)
        l_352[i] = 0x9BE3L;
    if (func_78((((safe_sub_func_uint16_t_u_u(0x939CL, 9L)) | 0x21L) == (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_234[0][1], 3)), 0x74BF9248L))), (safe_rshift_func_uint8_t_u_s((0xE63DL != (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_310 = g_118), ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((g_100 = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_321, func_85((safe_add_func_int8_t_s_s((l_324[2] = ((l_321 || 0x2EE2L) | 0x81AE1F2AL)), g_234[0][0])), l_321, g_155[1], p_70, p_67))), p_67))) && l_324[2]), p_67)) <= g_155[1]), g_250[5][0][3])), l_321)) && p_67))), l_321))), 3)), g_234[8][0], g_213))
    {
        char l_327[9];
        int l_330 = 2L;
        int i;
        for (i = 0; i < 9; i++)
            l_327[i] = 0x2AL;
        p_68 = (safe_sub_func_int16_t_s_s(7L, ((func_85(l_327[2], g_155[2], g_155[0], l_324[2], l_327[8]) < (250UL || (((l_321 = (l_330 = (((safe_rshift_func_int16_t_s_u(((((-1L) <= 1L) < g_213) <= l_321), 6)) ^ 0xB49774D5L) < 3L))) ^ l_327[2]) > p_70))) | l_327[2])));
    }
    else
    {
        unsigned l_341 = 0xD94905E8L;
        char l_348 = 1L;
        int l_349 = (-1L);
        if ((((safe_rshift_func_uint16_t_u_u(((l_324[2] != (safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_259[0][0] == ((((g_342 = (safe_lshift_func_uint8_t_u_u((l_341 & g_28), (((g_100 != l_324[2]) > g_234[0][0]) && p_69)))) > g_250[4][3][4]) && 0x07AAL) != 255UL)), 5)), g_264)) || g_118), 1UL))) ^ p_70), p_68)) == l_324[2]) | g_281))
        {
            unsigned char l_345[6] = {0xB6L, 0xB6L, 3UL, 0xB6L, 0xB6L, 3UL};
            int i;
            g_342 = (p_68 = (safe_mod_func_int16_t_s_s((func_85((((((g_100 || (!(p_70 != g_28))) & (l_345[0] >= (p_69 <= g_234[0][0]))) ^ (0x46E2L && (safe_add_func_uint32_t_u_u(1UL, l_345[0])))) <= l_345[0]) & g_234[1][2]), l_324[2], l_345[0], l_348, g_264) | p_67), g_234[0][0])));
            p_68 = (g_259[0][0] = (p_70 >= l_310));
        }
        else
        {
            l_349 = p_69;
            p_68 = g_191;
            g_342 = (safe_rshift_func_int16_t_s_u(g_281, 8));
        }
    }
    g_259[0][0] = l_310;
    p_68 = p_68;
    return l_352[2];
}







static char func_78(int p_79, unsigned short p_80, char p_81, const unsigned p_82)
{
    const unsigned short l_117 = 65530UL;
    int l_129 = (-1L);
    int l_130 = (-3L);
    unsigned l_153[6][7][4] = {{{1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}}, {{1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}}, {{1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}}, {{1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}}, {{1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}}, {{1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}, {1UL, 0xDA6A5298L, 1UL, 4294967295UL}}};
    int l_156 = 0L;
    char l_184 = 2L;
    int l_223 = 0xFE5E6621L;
    unsigned l_297 = 4294967289UL;
    int i, j, k;
    if ((func_85(g_106, p_81, (((safe_sub_func_int16_t_s_s(l_117, (((g_118 = 4294967295UL) ^ (~(safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(1L, (((p_80 || (g_26 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_106 > l_117), (l_130 = (l_129 = p_80)))), g_26)))) ^ g_28) | l_117))), l_117)), 1)))) > p_79))) && g_28) < l_117), l_117, g_2[1]) == l_117))
    {
        unsigned short l_137 = 0xC948L;
        int l_144 = 0xF246F767L;
        unsigned char l_154 = 0xF5L;
        int l_187[3];
        int l_200 = 1L;
        int i;
        for (i = 0; i < 3; i++)
            l_187[i] = 4L;
        l_156 = (((safe_add_func_uint8_t_u_u(0UL, (g_155[0] = (safe_lshift_func_int8_t_s_s((g_118 <= ((g_2[5] < (safe_sub_func_int32_t_s_s((l_137 = (-1L)), (+(safe_sub_func_uint16_t_u_u(((g_100 = (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(func_85((l_129 = l_144), (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((p_81 = (((safe_lshift_func_int8_t_s_s((((p_79 || (safe_sub_func_int32_t_s_s((g_28 = ((l_130 = p_81) >= (g_3 < p_80))), p_80))) > g_100) < p_81), 5)) | p_79) < 1L)), 0x50L)), 9)), l_153[2][0][0], l_144, p_80), l_154)), 4))) && p_80), g_3)))))) <= (-9L))), l_144))))) >= g_118) || l_154);
        for (l_154 = 17; (l_154 == 34); ++l_154)
        {
            int l_173 = 0x79C3978FL;
            unsigned short l_185 = 0xFDE9L;
            char l_188 = 0xF3L;
            unsigned char l_189 = 0xAFL;
            int l_211 = (-4L);
            if (g_113)
            {
                short l_163 = 0L;
                int l_190 = 0x936DA785L;
                g_28 = (safe_sub_func_int32_t_s_s(g_106, (safe_mod_func_int16_t_s_s((-1L), 0xD013L))));
                for (g_118 = 0; (g_118 <= 3); g_118 += 1)
                {
                    short l_164 = 0xD103L;
                    int l_212[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_212[i] = 0x4C0183FCL;
                    g_28 = (g_2[9] <= ((l_164 = l_163) || l_153[5][2][1]));
                    l_173 = (safe_rshift_func_uint8_t_u_u(((l_164 && ((p_81 > ((safe_rshift_func_int8_t_s_u(func_85(p_79, (p_81 <= (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((g_26 ^ (g_155[2] || p_82)) & p_80), ((l_164 & g_155[0]) >= g_26))), 0x2515L))), l_154, g_118, g_26), l_164)) | l_154)) & p_79)) | 1L), 0));
                    for (p_81 = 0; (p_81 <= 3); p_81 += 1)
                    {
                        int l_218 = (-1L);
                        int i, j, k;
                        l_190 = (((safe_lshift_func_uint8_t_u_s(l_153[(p_81 + 1)][(g_118 + 2)][p_81], 3)) & (g_155[0] || (0UL ^ l_117))) | (0xD97DL >= func_85(func_85((safe_sub_func_int8_t_s_s((l_187[2] = (safe_add_func_uint8_t_u_u(l_153[2][0][0], ((g_186[6] = (((l_144 = l_164) ^ (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_85(p_80, (l_184 = (g_113 ^ g_2[8])), l_185, l_163, p_80), p_82)), 10))) && p_79)) && g_100)))), l_153[2][0][0])), l_188, p_80, g_3, p_79), l_189, g_155[2], g_3, g_100)));
                        g_213 = (((l_212[1] = ((g_100 = 0xFB63L) & (((g_191 = l_190) < (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(255UL, (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_200, g_26)) && ((g_28 = (safe_add_func_int32_t_s_s((p_80 < g_113), ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_164 == (safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(p_81, p_79)) | l_153[(p_81 + 1)][(g_118 + 2)][p_81]) < (-6L)), p_80))), l_211)), 0x68E44B7FL)) > (-9L))))) | g_3)), l_153[(p_81 + 1)][(g_118 + 2)][p_81])))), 6))) & g_3))) & 4294967287UL) && 0xA5L);
                        l_129 = ((4294967295UL >= p_82) & (p_80 = ((g_191 & ((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(func_85(l_164, (l_153[(p_81 + 1)][(g_118 + 2)][p_81] >= func_85((4294967294UL || p_82), g_26, g_155[0], g_2[1], p_80)), l_218, p_81, p_81), l_190)) ^ g_213), p_79)) <= 0x7EFD3BFDL)) <= l_154)));
                        l_156 = 0x4A45322DL;
                    }
                }
                l_130 = (safe_add_func_uint16_t_u_u(g_186[1], (((safe_sub_func_uint16_t_u_u(p_82, func_85((g_28 = ((p_79 != l_153[2][0][0]) <= p_82)), l_223, g_118, l_163, ((+((safe_sub_func_uint32_t_u_u((g_186[6] & g_186[6]), 4294967290UL)) & g_155[0])) ^ l_154)))) <= 0x45396977L) & p_79)));
            }
            else
            {
                return p_80;
            }
        }
    }
    else
    {
        unsigned short l_241 = 1UL;
        unsigned l_272[2][4][8] = {{{1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}, {1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}, {1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}, {1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}}, {{1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}, {1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}, {1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}, {1UL, 0x98B2B731L, 0xA21F3B63L, 0x1C5E754AL, 0x73B462A5L, 0x73B462A5L, 0x1C5E754AL, 0xA21F3B63L}}};
        int l_284 = 0x62EE10B6L;
        int i, j, k;
        l_156 = (l_129 = ((g_3 <= (safe_rshift_func_uint8_t_u_u(func_85(((p_82 == (((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((g_234[0][0] = p_81) & (safe_rshift_func_uint16_t_u_s(g_26, 8))), l_130)), ((safe_lshift_func_int8_t_s_s(g_155[0], 7)) < p_81))), (p_80 = (((safe_mod_func_int32_t_s_s((0x754238F0L > p_80), 0x928FB194L)) >= p_80) < g_118)))) && g_234[4][0]) || 0x7BL)) || 0UL), l_153[2][0][0], l_153[2][0][0], g_118, p_82), 2))) < g_155[1]));
        if ((((((((0xBAL && l_241) & (safe_sub_func_uint32_t_u_u((g_186[6] ^ 0x49L), (g_113 = 0xEA9840A5L)))) > (0x40L == (255UL > (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_241, (g_250[7][2][3] = (p_81 = g_28)))), l_130)), p_79))))) && l_130) < l_241) | 1UL) & p_79))
        {
            return p_79;
        }
        else
        {
            int l_258[8][10][3] = {{{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}, {{(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}, {(-2L), (-10L), 0x6989C774L}}};
            int l_283[7] = {0x32C0FE8FL, 0L, 0x32C0FE8FL, 0L, 0x32C0FE8FL, 0L, 0x32C0FE8FL};
            int i, j, k;
            for (g_113 = 0; (g_113 >= 58); g_113 = safe_add_func_uint16_t_u_u(g_113, 3))
            {
                unsigned char l_255[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_255[i] = 0xF3L;
                for (l_130 = 0; (l_130 < (-4)); l_130 = safe_sub_func_uint16_t_u_u(l_130, 7))
                {
                    l_255[0] = p_80;
                }
            }
            if (g_26)
            {
                l_258[7][6][1] = ((safe_lshift_func_int8_t_s_s(0x3AL, 6)) || (p_80 ^ g_186[6]));
                return g_259[0][0];
            }
            else
            {
                unsigned l_269 = 18446744073709551614UL;
                for (l_241 = 20; (l_241 != 2); l_241 = safe_sub_func_int8_t_s_s(l_241, 1))
                {
                    int l_266 = 1L;
                    unsigned l_273 = 0x6FC8C2E6L;
                    for (g_100 = (-5); (g_100 >= 9); g_100 = safe_add_func_int16_t_s_s(g_100, 3))
                    {
                        return p_79;
                    }
                    if ((g_28 != (g_264 = g_155[0])))
                    {
                        short l_265 = (-5L);
                        int l_274 = 6L;
                        l_265 = (-1L);
                        l_274 = func_85(func_85(g_234[3][0], l_265, p_79, l_266, (p_81 && (safe_mod_func_uint32_t_u_u(func_85(l_241, l_269, (l_272[1][0][0] = (func_85((((safe_rshift_func_uint8_t_u_s(p_81, 7)) ^ (0xDD12B358L != 0L)) > p_80), g_28, g_259[0][0], l_258[7][6][1], l_241) > 0xC4L)), g_155[0], g_234[0][0]), 0x33C14A6CL)))), g_250[7][2][3], l_266, l_273, p_82);
                        g_259[0][0] = (func_85(g_186[6], l_274, (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((g_281 = g_26) < l_273) < (l_269 > (g_282 = 0x89L))) >= 0x5332L), 11)), l_273)) & ((l_266 = (65535UL <= 0x3CF8L)) && 0x8A2B4C7AL)), g_234[0][0])), p_81, g_155[0]) <= p_81);
                        l_283[4] = g_234[1][2];
                    }
                    else
                    {
                        if (p_81)
                            break;
                    }
                }
                l_284 = (l_156 = (-4L));
                return l_258[7][4][0];
            }
        }
    }
    l_129 = ((safe_sub_func_uint8_t_u_u((p_82 != (p_82 | func_85((safe_lshift_func_uint16_t_u_s(0x1089L, ((func_85(p_79, (func_85((func_85(((l_129 >= g_186[6]) && 0x8B3AE402L), (((g_26 == (safe_lshift_func_int8_t_s_u((((((safe_sub_func_int8_t_s_s(((func_85((safe_sub_func_int16_t_s_s(l_153[2][0][0], l_297)), l_117, p_80, g_26, p_81) > 4294967289UL) | 0L), 0xA8L)) >= g_259[0][0]) < g_250[7][2][3]) && g_28) < l_297), 7))) >= l_156) < 0UL), p_81, l_184, p_81) <= g_234[0][0]), l_153[2][0][0], p_82, l_129, p_81) != g_155[0]), l_297, g_250[6][0][0], l_153[2][0][0]) | g_155[0]) > p_82))), p_81, g_281, g_234[8][0], p_82))), l_130)) == p_80);
    return p_79;
}







static char func_85(int p_86, int p_87, short p_88, unsigned short p_89, const unsigned p_90)
{
    unsigned l_102[8] = {4294967295UL, 4294967295UL, 9UL, 4294967295UL, 4294967295UL, 9UL, 4294967295UL, 4294967295UL};
    int l_105 = 6L;
    char l_114 = 0x19L;
    int i;
    g_28 = l_102[2];
    g_28 = (((~(g_113 = (l_102[2] & ((safe_lshift_func_int16_t_s_u((g_106 = ((l_105 = (p_88 = p_89)) || (g_2[9] == p_86))), 0)) == (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((g_100 <= (l_102[3] != p_89)), (safe_sub_func_uint16_t_u_u(l_102[2], g_3)))), 11)))))) <= p_87) <= l_102[4]);
    return l_114;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_186[i], "g_186[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_234[i][j], "g_234[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_250[i][j][k], "g_250[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_259[i][j], "g_259[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1235[i][j][k], "g_1235[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1291, "g_1291", print_hash_value);
    transparent_crc(g_1454, "g_1454", print_hash_value);
    transparent_crc(g_1706, "g_1706", print_hash_value);
    transparent_crc(g_1776, "g_1776", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1890[i], "g_1890[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2001, "g_2001", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2117[i], "g_2117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
