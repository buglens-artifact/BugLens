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
   unsigned f0 : 26;
   signed f1 : 9;
   int f2;
   unsigned f3 : 25;
   signed f4 : 28;
   unsigned f5 : 26;
   unsigned f6 : 21;
   signed f7 : 27;
   unsigned f8 : 30;
};

union U1 {
   unsigned f0;
   unsigned char f1;
};


static union U1 g_7 = {6UL};
static struct S0 g_32 = {3400,13,0xD925D3C0L,761,1013,6470,71,2213,6413};
static unsigned long long g_106 = 18446744073709551615UL;
static unsigned long long g_121 = 18446744073709551615UL;
static unsigned g_145 = 4294967288UL;
static int g_146 = (-1L);
static short g_161 = 0x2F86L;
static unsigned short g_181 = 0x9B7BL;
static union U1 g_210 = {18446744073709551609UL};
static int g_274 = 0xF2710355L;
static union U1 g_275 = {8UL};
static long long g_310 = (-10L);
static unsigned long long g_378[9][8][2] = {{{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}, {{0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}, {0UL, 0x79522852FF65BF82LL}}};
static unsigned long long g_399 = 4UL;
static unsigned char g_414 = 0x98L;
static unsigned long long g_462 = 0x07EE5A397BB07082LL;
static union U1 g_587 = {18446744073709551607UL};
static unsigned long long g_629[2][6] = {{0xF589E81C148C86CELL, 0xB918032C116E2E01LL, 18446744073709551608UL, 18446744073709551608UL, 0xB918032C116E2E01LL, 0xF589E81C148C86CELL}, {0xF589E81C148C86CELL, 0xB918032C116E2E01LL, 18446744073709551608UL, 18446744073709551608UL, 0xB918032C116E2E01LL, 0xF589E81C148C86CELL}};
static unsigned g_720 = 1UL;
static union U1 g_729[10][2] = {{{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}, {{0xD7810000L}, {0xD7810000L}}};
static struct S0 g_746 = {4564,17,0x7F23A8B8L,4269,-2702,2082,1197,8915,21162};
static unsigned g_751 = 0xD38569DFL;
static unsigned short g_846[9] = {0x9AB0L, 0x9AB0L, 0x9AB0L, 0x9AB0L, 0x9AB0L, 0x9AB0L, 0x9AB0L, 0x9AB0L, 0x9AB0L};
static struct S0 g_877 = {1981,13,-7L,908,-2107,7738,1321,-5999,7964};



static unsigned func_1(void);
static struct S0 func_2(union U1 p_3, union U1 p_4, union U1 p_5, unsigned char p_6);
static union U1 func_8(unsigned char p_9);
static long long func_20(union U1 p_21, union U1 p_22, unsigned short p_23);
static union U1 func_24(union U1 p_25, unsigned p_26);
static union U1 func_27(unsigned p_28, long long p_29, struct S0 p_30, long long p_31);
static long long func_35(unsigned p_36);
static struct S0 func_43(long long p_44, union U1 p_45);
static int func_48(unsigned long long p_49, unsigned p_50, unsigned char p_51, long long p_52);
static int func_55(unsigned long long p_56, int p_57, int p_58, unsigned p_59, short p_60);
static unsigned func_1(void)
{
    unsigned short l_33 = 0x3E62L;
    int l_34 = 0xCE6C1CC4L;
    union U1 l_192[6] = {{18446744073709551614UL}, {0x9767DC16L}, {18446744073709551614UL}, {0x9767DC16L}, {18446744073709551614UL}, {0x9767DC16L}};
    struct S0 l_407 = {3006,-10,0x54DAAFC8L,898,-9377,1946,490,-4154,30170};
    union U1 l_409[3][2] = {{{0x16431136L}, {0x16431136L}}, {{0x16431136L}, {0x16431136L}}, {{0x16431136L}, {0x16431136L}}};
    unsigned l_801[6];
    unsigned l_802 = 0UL;
    struct S0 l_820 = {6512,-3,1L,3229,-3075,5464,955,-376,18835};
    int i, j;
    for (i = 0; i < 6; i++)
        l_801[i] = 0x70CF13D8L;
    g_746 = func_2(g_7, (l_192[0] = (g_275 = func_8((((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_7.f0, (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s((l_407.f1 = ((((safe_rshift_func_int8_t_s_u(((g_7.f0 > ((((((g_414 = func_20(func_24(func_27((g_32 , ((l_34 = l_33) & func_35((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((0xA91EL >= (safe_sub_func_int8_t_s_s(((func_43(((safe_div_func_int8_t_s_s((func_48(l_33, g_32.f4, l_33, l_33) , l_33), l_33)) < 4L), l_192[3]) , 1L) , 0L), g_274))), 0x4FL)), g_7.f1))))), l_192[3].f0, l_407, l_407.f4), g_7.f1), l_409[0][0], l_192[3].f1)) < g_274) ^ l_192[3].f1) , g_210.f0) ^ g_274) == 0x6AAD5CEFL)) , 0L), g_7.f0)) > 0xDEB0L) > 0xB90EBDDD4BDC216DLL) == g_274)), g_274)) & 0x0193L) <= g_274) == l_407.f2), g_7.f0)))), g_274)) < g_7.f1) , 0x85L)))), l_409[0][0], l_407.f7);
    for (l_33 = (-21); (l_33 > 12); ++l_33)
    {
        union U1 l_756 = {0x70F7BB4EL};
        struct S0 l_775[8][4] = {{{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}, {{5861,18,0L,2732,-3450,5433,818,-7395,19916}, {7204,15,0xDB871420L,2835,6583,359,1018,4789,13350}, {4699,16,8L,5660,1090,5888,885,-11461,30302}, {1556,-17,0L,3911,-8822,305,80,-6993,19325}}};
        unsigned long long l_874 = 0x5AED91A6C17187B9LL;
        struct S0 l_878[1][5] = {{{2501,-20,0x3E6DC556L,5012,-665,599,839,-694,24696}, {2501,-20,0x3E6DC556L,5012,-665,599,839,-694,24696}, {2501,-20,0x3E6DC556L,5012,-665,599,839,-694,24696}, {2501,-20,0x3E6DC556L,5012,-665,599,839,-694,24696}, {2501,-20,0x3E6DC556L,5012,-665,599,839,-694,24696}}};
        int i, j;
        l_407.f4 = g_746.f0;
        if ((func_35((!(((g_7.f0 & (g_161 ^ (((safe_mod_func_int8_t_s_s(func_35(g_7.f0), g_275.f1)) == ((g_751 = (l_407.f1 = 65535UL)) ^ 0x274CL)) ^ (safe_mod_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((func_24(l_756, (l_407.f2 <= l_192[3].f0)) , g_378[4][3][1]) , 0x78DEL), l_756.f1)) && l_756.f0), l_34))))) , g_32.f3) < l_756.f1))) > 0x7619B85DBB858AD6LL))
        {
            unsigned l_763 = 6UL;
            struct S0 l_768 = {5792,-0,0xDBD32EC7L,1620,-2158,4924,21,-11417,10429};
            union U1 l_771 = {0UL};
            union U1 l_772 = {0UL};
            unsigned char l_832 = 0x50L;
            long long l_856[4] = {0L, 0xC65472D686E53B21LL, 0L, 0xC65472D686E53B21LL};
            unsigned l_859 = 0x1546F4BFL;
            int i;
            l_763 = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_32.f3, 6)) > (4UL < (g_310 = (safe_div_func_int32_t_s_s(((l_756.f1 != g_106) >= l_756.f0), (g_587.f1 && l_756.f1)))))), 3));
            for (l_407.f2 = (-24); (l_407.f2 <= 27); l_407.f2++)
            {
                unsigned short l_773 = 0xD91AL;
                struct S0 l_778[8] = {{3539,-17,1L,4216,14536,520,790,-4986,22005}, {7265,-5,0x985A9837L,1306,-10942,1427,798,-6304,3653}, {3539,-17,1L,4216,14536,520,790,-4986,22005}, {7265,-5,0x985A9837L,1306,-10942,1427,798,-6304,3653}, {3539,-17,1L,4216,14536,520,790,-4986,22005}, {7265,-5,0x985A9837L,1306,-10942,1427,798,-6304,3653}, {3539,-17,1L,4216,14536,520,790,-4986,22005}, {7265,-5,0x985A9837L,1306,-10942,1427,798,-6304,3653}};
                unsigned l_803 = 0UL;
                unsigned long long l_804 = 0x834C03A364F5C6AFLL;
                unsigned long long l_849 = 0x0A8D37EA2F19213ALL;
                union U1 l_871 = {1UL};
                int i;
                if ((safe_mod_func_uint32_t_u_u((l_773 = (g_275.f0 ^ ((((((l_768 , (g_414 = (g_746.f5 <= g_145))) > (-7L)) && ((((+0x25350BE3L) , l_756.f1) > g_32.f4) < (g_587.f1 = (safe_mul_func_uint8_t_u_u(func_20(l_771, l_772, l_768.f5), g_32.f4))))) && g_106) || g_729[3][0].f1) < 0x374DCD0BBD49D17FLL))), g_751)))
                {
                    for (g_414 = 0; (g_414 <= 5); g_414 += 1)
                    {
                        return l_768.f3;
                    }
                }
                else
                {
                    struct S0 l_774[2][9][8] = {{{{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}}, {{{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}, {{2693,-20,0xFEF5510DL,600,-15850,5966,73,-5486,5886}, {2849,14,0xACA14492L,4193,-4699,4148,871,-3151,4176}, {6134,7,-1L,2700,-4798,5763,319,-9105,29854}, {4819,-14,-1L,3252,9128,2886,670,-3493,8959}, {5686,10,-1L,1174,-4235,6633,915,1380,15037}, {6949,15,1L,3933,-9249,6663,580,-11338,19261}, {7079,0,0L,4666,-348,2947,198,-2724,29344}, {7079,0,0L,4666,-348,2947,198,-2724,29344}}}};
                    int i, j, k;
                    l_775[6][3] = l_774[0][8][2];
                    for (l_756.f0 = (-18); (l_756.f0 > 9); l_756.f0++)
                    {
                        return g_32.f1;
                    }
                    g_746 = l_778[4];
                }
                if ((safe_lshift_func_uint16_t_u_u(((func_24(((safe_mul_func_uint8_t_u_u(func_35(g_32.f1), ((((18446744073709551610UL || 0UL) | (((safe_rshift_func_int8_t_s_u((((l_803 = (0xCCL && (safe_sub_func_int64_t_s_s(((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s(((l_771.f0 <= ((safe_mod_func_int16_t_s_s((((~(safe_mod_func_int64_t_s_s((((l_768.f7 = (safe_lshift_func_int16_t_s_s((l_768.f3 || (g_310 & l_778[4].f4)), l_768.f7))) > g_310) , 6L), 9L))) & g_746.f5) <= l_768.f4), g_161)) && l_801[3])) >= l_802), g_378[4][3][1])), g_746.f1)), 0x22F852B84763CBF6LL)) == g_275.f1), l_778[4].f5)))) > l_778[4].f0) , 0x2FL), g_751)) || l_778[4].f3) <= l_804)) & l_804) <= l_778[4].f5))) , g_729[4][0]), g_145) , g_746.f4) | 0xFD2EE9BEL), l_763)))
                {
                    long long l_819 = 0x27708A196695BED1LL;
                    int l_833[6] = {0xB866903FL, 0xB866903FL, 0L, 0xB866903FL, 0xB866903FL, 0L};
                    union U1 l_845 = {3UL};
                    int i;
                    for (l_773 = 0; (l_773 != 30); l_773 = safe_add_func_uint32_t_u_u(l_773, 4))
                    {
                        struct S0 l_807[8] = {{3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}, {3850,-21,-5L,639,15233,6249,438,9540,15420}};
                        unsigned long long l_818 = 18446744073709551615UL;
                        int i;
                        l_807[1] = g_746;
                        l_819 = (((safe_mul_func_int16_t_s_s((0x276DL || ((g_32.f0 <= g_210.f0) >= 0x0BF8L)), ((g_746.f1 , (safe_sub_func_uint32_t_u_u((g_210 , (safe_mul_func_uint8_t_u_u(((((3L != 1L) != (safe_div_func_int16_t_s_s((g_161 = (safe_sub_func_int32_t_s_s(0x13A2F589L, g_210.f0))), 0x6CC8L))) <= 0L) == 1L), 0x7CL))), g_720))) == 0x73D314B9L))) != l_818) <= l_192[3].f0);
                        l_820 = g_746;
                        return l_778[4].f6;
                    }
                    for (l_771.f1 = 11; (l_771.f1 == 5); --l_771.f1)
                    {
                        int l_827 = 0L;
                        union U1 l_844 = {1UL};
                        g_746.f7 = g_32.f7;
                        g_746.f4 = (g_146 = 0xAF00BE5AL);
                        g_746.f1 = (l_833[5] = (safe_lshift_func_int16_t_s_u((l_775[6][3].f1 >= (safe_add_func_uint64_t_u_u((g_378[4][3][1] = (((l_827 && 0x3D13L) ^ l_778[4].f8) && ((func_55(g_378[7][0][1], (65535UL == l_756.f1), (l_778[4].f8 < ((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(l_832, l_819)) < g_32.f0), 7)) == l_775[6][3].f3)), g_146, g_751) ^ g_462) <= l_819))), l_827))), l_819)));
                        g_746.f4 = (g_746.f1 , (safe_lshift_func_int16_t_s_u((g_846[7] = (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(0x3ED0L, 0x53F5L)), (safe_mod_func_uint8_t_u_u(((l_775[6][3].f7 = (((g_210.f0 > g_746.f3) && (g_32.f7 ^ (g_746.f4 , (safe_add_func_uint64_t_u_u(((g_310 = ((+(g_181 ^ func_20(l_844, l_845, g_746.f1))) > g_414)) , 2UL), g_275.f0))))) == 2UL)) <= g_32.f2), 0xEFL))))), 5)));
                    }
                }
                else
                {
                    char l_866[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_866[i] = 1L;
                    for (g_310 = 0; (g_310 < (-30)); g_310 = safe_sub_func_uint32_t_u_u(g_310, 3))
                    {
                        g_746.f4 = (l_775[6][3].f4 , func_35((l_849 = l_778[4].f5)));
                    }
                    for (l_771.f1 = (-23); (l_771.f1 > 1); l_771.f1 = safe_add_func_int32_t_s_s(l_771.f1, 3))
                    {
                        unsigned short l_862 = 8UL;
                        struct S0 l_863[2] = {{1553,14,6L,1235,-11825,7092,531,-6013,5012}, {1553,14,6L,1235,-11825,7092,531,-6013,5012}};
                        int i;
                        l_820.f7 = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((l_775[6][3].f4 = ((l_856[2] ^ (g_310 = (safe_rshift_func_int8_t_s_s(0xACL, l_859)))) > func_55(l_778[4].f1, g_746.f4, g_746.f0, g_145, (l_775[6][3].f6 ^ (((~((safe_add_func_uint16_t_u_u(0x8F2CL, g_629[0][3])) & l_775[6][3].f1)) | 18446744073709551615UL) > g_751))))), g_146)), 5));
                        l_775[6][3].f4 = l_862;
                        l_863[0] = func_43(g_32.f8, g_210);
                        l_863[0].f7 = (l_778[4].f1 = func_35((g_414 == (((safe_mod_func_uint16_t_u_u((248UL ^ l_866[0]), (safe_sub_func_int8_t_s_s(func_55((safe_sub_func_int64_t_s_s((func_2(g_7, ((!g_746.f4) , l_871), func_8(((safe_div_func_int32_t_s_s(g_32.f3, g_414)) && (g_378[8][1][1] ^ l_778[4].f3))), l_768.f6) , 8L), g_729[3][0].f0)), g_746.f1, l_775[6][3].f0, g_746.f0, g_629[1][4]), g_746.f6)))) != l_832) & l_768.f6))));
                    }
                }
                return g_274;
            }
            g_746.f1 = l_874;
        }
        else
        {
            g_32 = g_32;
        }
        for (g_32.f2 = 1; (g_32.f2 != (-12)); g_32.f2 = safe_sub_func_uint8_t_u_u(g_32.f2, 9))
        {
            struct S0 l_879 = {1325,-13,0x973E43B7L,2481,643,3903,518,7480,14397};
            l_879 = (l_878[0][3] = g_877);
            return l_879.f4;
        }
    }
    return l_407.f4;
}







static struct S0 func_2(union U1 p_3, union U1 p_4, union U1 p_5, unsigned char p_6)
{
    unsigned long long l_718 = 0x35FE336F4E950757LL;
    union U1 l_719 = {18446744073709551613UL};
    struct S0 l_721 = {4589,11,0L,5207,-10104,4868,631,-1125,841};
    unsigned l_722[3];
    struct S0 l_744 = {3536,-17,8L,2357,-9716,8026,1094,2747,15081};
    int l_745 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_722[i] = 0UL;
    l_721.f1 = (((safe_mul_func_int8_t_s_s(g_629[0][0], func_20(p_4, p_5, (((safe_rshift_func_uint16_t_u_s(g_32.f0, ((((safe_sub_func_int32_t_s_s(func_20(func_27((g_720 = (safe_mul_func_uint16_t_u_u(func_20((p_3 = p_5), g_275, ((g_629[1][4] , (l_719 = func_24((g_629[1][4] , p_5), l_718))) , l_719.f1)), p_4.f0))), p_6, l_721, l_718), g_210, l_722[2]), p_6)) , 0xA5L) && g_462) > 0x45E3C3C4L))) > 0x53L) && p_3.f0)))) >= l_721.f2) != p_4.f0);
    l_721.f4 = (safe_sub_func_uint64_t_u_u((((l_721.f7 = (((safe_add_func_int8_t_s_s((p_3.f1 == l_722[1]), p_5.f0)) & 0UL) <= l_719.f1)) ^ (p_3.f1 && func_20(l_719, g_729[3][0], l_719.f1))) != p_5.f1), p_4.f0));
    l_721.f1 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(p_6, 8)), (((((l_721.f4 = (0x0805L || (g_414 >= 0x7E589DBBL))) && (safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(g_462, l_721.f3)), ((safe_sub_func_int32_t_s_s(((((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(g_32.f7, (l_744.f7 = (((func_20(func_27((l_721.f7 = (g_32.f8 < p_4.f0)), g_210.f0, l_744, g_729[3][0].f0), l_719, p_4.f0) & 0x93D6L) && p_5.f0) & p_6)))), g_32.f5)) & p_4.f0) == l_744.f4) & (-8L)), g_729[3][0].f1)) | l_745)))) ^ 6UL) || (-1L)) | g_210.f1)));
    return l_744;
}







static union U1 func_8(unsigned char p_9)
{
    struct S0 l_415 = {4176,3,0x4939C1E3L,4670,9827,2629,810,9244,14609};
    union U1 l_431[2] = {{6UL}, {6UL}};
    struct S0 l_511 = {4404,-13,-5L,5748,-11400,6737,951,1520,31993};
    int l_530 = 0L;
    unsigned l_571[10] = {0x4F6126A0L, 0x4F6126A0L, 0x0AA2A5F4L, 0x4F6126A0L, 0x4F6126A0L, 0x0AA2A5F4L, 0x4F6126A0L, 0x4F6126A0L, 0x0AA2A5F4L, 0x4F6126A0L};
    long long l_588 = (-1L);
    int i;
    l_415 = l_415;
    for (g_145 = 0; (g_145 > 21); g_145 = safe_add_func_uint16_t_u_u(g_145, 9))
    {
        union U1 l_430 = {0x7EDD22ECL};
        int l_432 = 0x7DF791E5L;
        struct S0 l_437 = {7448,15,-1L,2940,-3779,2305,1399,-9688,30078};
        int l_478 = 0x92436443L;
        int l_501 = 1L;
        short l_570 = 1L;
        char l_618 = (-4L);
        union U1 l_630 = {0x5A9A916CL};
    }
    l_511 = func_43(l_415.f5, l_431[0]);
    if ((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((~g_32.f5) && ((l_511.f1 = (safe_mod_func_uint8_t_u_u(((func_43(l_511.f0, l_431[0]) , (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_588, l_431[0].f0)), 1))) & ((l_511.f7 = (p_9 | (1UL != ((((safe_div_func_int8_t_s_s(l_511.f7, 0x1CL)) | g_414) <= g_629[1][5]) && p_9)))) , l_415.f7)), 0x3AL))) , g_32.f2)), 1)), l_571[8])), 0x62D0FC036BF5A64FLL)))
    {
        union U1 l_676[7] = {{0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {1UL}, {0UL}};
        struct S0 l_681 = {7111,-4,5L,2960,4957,5285,905,684,408};
        unsigned long long l_692 = 0xD89A8003DF082DD7LL;
        int i;
        l_415.f4 = ((safe_lshift_func_int8_t_s_u((l_511.f1 = (safe_mod_func_uint16_t_u_u(((((((func_24(l_676[4], (safe_mod_func_int16_t_s_s((((l_511.f4 , ((safe_mod_func_uint32_t_u_u(g_161, (l_681 , (safe_mod_func_uint16_t_u_u((l_681.f1 < p_9), (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_9, g_210.f0)), (7L > 4L))), l_571[3]))))))) ^ g_378[0][0][1])) | p_9) && g_414), g_32.f3))) , 0x70L) < g_32.f1) , 1UL) <= 18446744073709551615UL) , 1UL) | p_9), 0x7549L))), 2)) <= l_676[4].f0);
        g_146 = ((g_32.f7 >= func_20(l_431[1], func_27(p_9, (safe_rshift_func_int8_t_s_s((p_9 , (0x7DE2L & ((g_378[4][3][1] >= 65535UL) , ((~l_431[0].f1) == ((1UL > g_399) & 0x0F5AA87ACAB73D9CLL))))), l_692)), l_681, p_9), p_9)) ^ l_511.f7);
        for (g_121 = 0; (g_121 <= 21); g_121 = safe_add_func_uint64_t_u_u(g_121, 1))
        {
            unsigned long long l_697 = 18446744073709551612UL;
            int l_698[6] = {0L, 0L, (-1L), 0L, 0L, (-1L)};
            struct S0 l_699 = {5719,5,-6L,5104,-7585,4548,1446,-6597,22633};
            int l_708 = 0x1AF72A84L;
            int i;
            l_698[3] = (0x13C3L < (safe_lshift_func_int8_t_s_s(((l_697 = func_35((l_681.f4 = 18446744073709551615UL))) <= g_210.f1), 6)));
            l_699 = l_699;
            g_32.f7 = (safe_add_func_int64_t_s_s((g_7.f1 | (safe_rshift_func_int8_t_s_s((p_9 & l_511.f2), (safe_div_func_uint64_t_u_u(((p_9 >= (g_32 , (safe_add_func_int64_t_s_s((0x3FL < (((g_32.f5 = g_462) ^ (g_462 < l_530)) ^ l_708)), 0x58A046CD1FD748F7LL)))) != p_9), p_9))))), l_571[8]));
        }
    }
    else
    {
        unsigned l_709 = 4294967288UL;
        l_511.f1 = l_709;
        l_511.f4 = g_210.f1;
    }
    return l_431[0];
}







static long long func_20(union U1 p_21, union U1 p_22, unsigned short p_23)
{
    short l_413 = 0x2ACAL;
    for (g_161 = (-17); (g_161 <= (-5)); g_161++)
    {
        unsigned short l_412 = 0x12C9L;
        if (l_412)
            break;
        l_413 = g_378[4][3][1];
        if (l_413)
            continue;
    }
    return p_22.f0;
}







static union U1 func_24(union U1 p_25, unsigned p_26)
{
    union U1 l_408[2] = {{0x76AB0597L}, {0x76AB0597L}};
    int i;
    return l_408[1];
}







static union U1 func_27(unsigned p_28, long long p_29, struct S0 p_30, long long p_31)
{
    for (p_28 = 0; p_28 < 9; p_28 += 1)
    {
        for (g_161 = 0; g_161 < 8; g_161 += 1)
        {
            for (g_275.f0 = 0; g_275.f0 < 2; g_275.f0 += 1)
            {
                g_378[p_28][g_161][g_275.f0] = 0xC26D841ADF634814LL;
            }
        }
    }
    return g_210;
}







static long long func_35(unsigned p_36)
{
    int l_404 = 0xAC9980CBL;
    union U1 l_405 = {2UL};
    struct S0 l_406[1][7] = {{{5879,-4,-10L,4448,14594,5808,1331,8242,5293}, {5879,-4,-10L,4448,14594,5808,1331,8242,5293}, {5879,-4,-10L,4448,14594,5808,1331,8242,5293}, {5879,-4,-10L,4448,14594,5808,1331,8242,5293}, {5879,-4,-10L,4448,14594,5808,1331,8242,5293}, {5879,-4,-10L,4448,14594,5808,1331,8242,5293}, {5879,-4,-10L,4448,14594,5808,1331,8242,5293}}};
    int i, j;
    g_32 = l_406[0][3];
    return g_181;
}







static struct S0 func_43(long long p_44, union U1 p_45)
{
    unsigned char l_193 = 8UL;
    short l_194 = (-4L);
    int l_195 = (-6L);
    int l_198[10] = {0x01544EF6L, 0x01544EF6L, 0xF596B8FCL, 0x01544EF6L, 0x01544EF6L, 0xF596B8FCL, 0x01544EF6L, 0x01544EF6L, 0xF596B8FCL, 0x01544EF6L};
    int l_199[8] = {0xBB71FC3FL, 1L, 0xBB71FC3FL, 1L, 0xBB71FC3FL, 1L, 0xBB71FC3FL, 1L};
    int l_212 = 0x70F1B27EL;
    short l_239 = 0x5181L;
    struct S0 l_255 = {6315,-13,0x3D949717L,4055,7063,4890,1291,2617,4408};
    union U1 l_343 = {0x22C845DCL};
    long long l_353 = 1L;
    int i;
    l_199[6] = func_48(g_32.f3, l_193, ((l_198[9] = (((l_195 = (!(((p_45.f1 & l_193) | p_45.f0) > ((l_193 || l_194) & l_193)))) && ((safe_sub_func_uint16_t_u_u(l_194, p_45.f0)) & 0x0AL)) || l_195)) > 0x07F01652FCFA51E4LL), l_193);
    for (g_145 = (-7); (g_145 < 25); ++g_145)
    {
        unsigned char l_213[3][10][8] = {{{0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}}, {{0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}}, {{0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}, {0xFFL, 0UL, 7UL, 0x5CL, 255UL, 0UL, 0UL, 0x21L}}};
        int l_217 = 0x1609B5F3L;
        int l_240 = (-8L);
        struct S0 l_283 = {1107,-12,0x70230D1EL,5435,-10229,1555,479,-10631,17603};
        unsigned short l_300 = 0x9D47L;
        int i, j, k;
        for (g_146 = (-20); (g_146 >= (-7)); g_146 = safe_add_func_uint8_t_u_u(g_146, 2))
        {
            long long l_211 = (-1L);
            g_32.f4 = (g_32.f1 = ((0x9A5DB996L ^ (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((g_7.f0 ^ g_32.f6), ((safe_mul_func_int8_t_s_s(p_45.f1, 4UL)) , (((g_210 = g_7) , ((p_44 != (((g_32.f4 | p_45.f1) & 0x8384601AF36540E6LL) ^ p_44)) == g_161)) , g_32.f2)))) || l_211), p_45.f1))) | p_45.f1));
            g_32.f1 = l_211;
        }
        if (l_212)
        {
            short l_216 = 0xD257L;
            int l_251[7] = {0L, 0x1066C912L, 0L, 0x1066C912L, 0L, 0x1066C912L, 0L};
            short l_260 = (-1L);
            int l_281 = 6L;
            int i;
            l_213[2][1][3] = (g_181 | l_194);
            l_195 = (safe_div_func_int8_t_s_s(((l_217 = l_216) && (((safe_add_func_uint16_t_u_u((!p_45.f0), (p_45.f0 <= (g_181 <= ((safe_mul_func_uint16_t_u_u(l_195, g_32.f0)) >= ((safe_mul_func_uint8_t_u_u(g_121, ((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_198[9] = (safe_div_func_int8_t_s_s((((0x6ADDL ^ g_32.f2) >= l_216) != 1L), 0x5CL))) <= (-1L)), 1L)), g_32.f7)) , l_216))) , p_45.f1)))))) == 0xC1L) , 0UL)), l_216));
            g_32.f1 = (safe_add_func_uint32_t_u_u((p_45.f0 != 0L), ((g_210.f0 == (safe_div_func_int64_t_s_s(p_45.f1, g_161))) | (g_121 = (((p_45.f0 > (l_217 = p_45.f0)) & ((l_240 = (safe_unary_minus_func_int64_t_s(((safe_div_func_uint64_t_u_u(0UL, (((((safe_mul_func_int16_t_s_s((l_198[9] = l_216), l_216)) <= p_45.f1) >= l_239) || 0x6BB902BFL) & l_216))) >= g_106)))) | g_145)) | l_213[2][8][5])))));
            for (g_161 = 1; (g_161 < (-1)); g_161 = safe_sub_func_uint32_t_u_u(g_161, 3))
            {
                int l_245[2];
                int l_250 = 1L;
                int l_254[1];
                union U1 l_276 = {8UL};
                int i;
                for (i = 0; i < 2; i++)
                    l_245[i] = (-1L);
                for (i = 0; i < 1; i++)
                    l_254[i] = 0x788FA9ADL;
                g_32 = g_32;
            }
        }
        else
        {
            short l_288[9][2][1] = {{{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}, {{3L}, {3L}}};
            int l_293 = 3L;
            int l_307 = 1L;
            int i, j, k;
            l_283 = g_32;
            l_198[2] = (((safe_lshift_func_int16_t_s_u(((p_45.f0 > (safe_mod_func_int8_t_s_s((l_288[2][0][0] , ((((safe_lshift_func_int16_t_s_u((l_293 = (((safe_sub_func_int32_t_s_s(g_32.f8, l_283.f8)) != (!p_45.f1)) | p_45.f1)), ((safe_add_func_int32_t_s_s(p_44, (l_255.f6 & ((((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((0x42A97216L && l_283.f0), p_45.f0)), l_199[2])) , 2L) , p_45.f0) , 1UL)))) != 0L))) , p_44) | 7UL) || p_45.f0)), g_32.f4))) < p_45.f0), l_212)) <= l_255.f3) == l_300);
            l_307 = (((g_32.f5 = g_146) != g_106) , (((g_32.f8 = g_32.f5) | ((((l_199[6] & ((safe_rshift_func_int8_t_s_s((l_255.f1 = 5L), 5)) | g_32.f3)) & g_161) == p_44) < ((safe_lshift_func_uint16_t_u_u((l_293 = (safe_rshift_func_uint16_t_u_s(0UL, l_293))), g_106)) ^ l_255.f5))) & p_45.f1));
            g_32.f1 = (((safe_lshift_func_int16_t_s_s((l_283.f4 | l_283.f8), 1)) , g_310) & (p_44 || (4294967295UL >= g_106)));
        }
    }
    for (g_146 = 0; (g_146 > 29); g_146 = safe_add_func_uint16_t_u_u(g_146, 9))
    {
        char l_319 = 0xDFL;
        struct S0 l_344 = {4940,-21,0x704F95B0L,3619,7908,7025,898,2620,25684};
        unsigned l_400[3];
        int i;
        for (i = 0; i < 3; i++)
            l_400[i] = 1UL;
        for (g_275.f0 = 16; (g_275.f0 != 20); ++g_275.f0)
        {
            int l_340 = 1L;
            unsigned char l_377 = 1UL;
            int l_385 = 0x0F1E17E1L;
            struct S0 l_403 = {6317,5,5L,4115,15016,7855,889,9909,16727};
            for (g_121 = 0; (g_121 == 14); g_121 = safe_add_func_uint64_t_u_u(g_121, 2))
            {
                char l_321 = 2L;
                struct S0 l_324 = {1205,4,0x9659DCB3L,5743,-6787,1667,432,-1038,8116};
                for (l_193 = 0; (l_193 != 34); l_193++)
                {
                    short l_320 = 0xC49AL;
                }
                for (l_319 = 0; (l_319 == (-9)); l_319 = safe_sub_func_uint64_t_u_u(l_319, 4))
                {
                    struct S0 l_351 = {6523,1,-9L,636,-6763,2127,119,6267,4290};
                    for (p_44 = 0; (p_44 != (-20)); p_44--)
                    {
                        unsigned l_352 = 0x6F2B2D53L;
                        l_344.f4 = ((safe_sub_func_uint16_t_u_u((l_255.f7 = g_7.f1), p_44)) ^ ((l_340 , (g_32 , (l_351 , l_340))) || l_352));
                        l_351.f4 = l_352;
                    }
                    if (g_275.f0)
                    {
                        struct S0 l_356 = {4563,16,0x6FEA44CAL,4081,5057,3869,150,-7761,7036};
                        int l_369[9][6][4] = {{{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}, {{0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}, {0xF6DA724AL, 0xE60B38DCL, (-1L), 0x4702C88FL}}};
                        int l_370 = 0xE438D2EDL;
                        int i, j, k;
                        l_353 = ((l_324.f7 = p_45.f1) , g_161);
                        g_32.f1 = (~(safe_lshift_func_int16_t_s_s((l_356 , g_32.f2), (l_370 = (l_369[5][2][3] = (g_161 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(0xA9L, ((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(l_351.f3, p_45.f0)), p_44)) < (0UL | (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_344.f0, (l_356.f7 | 0UL))), l_356.f5)))))), g_7.f0))))))));
                        l_255.f4 = 0xD239EF29L;
                        l_344.f1 = (safe_mod_func_int64_t_s_s(((g_32.f7 = (((l_340 = (safe_rshift_func_uint16_t_u_u((p_45.f1 , l_356.f2), ((p_45.f1 , (safe_add_func_int16_t_s_s((-2L), ((18446744073709551615UL & (g_32.f5 | ((g_378[4][3][1] = (l_377 = l_340)) == (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((((!l_343.f1) , (0xB16BC2C9L != 1L)) < g_274) | g_32.f6), p_45.f1)), 0)) < 0x5C24L) && l_344.f3) >= g_32.f8), 7))))) < g_7.f0)))) , l_356.f8)))) ^ 6L) != l_385)) ^ 9L), l_255.f1));
                    }
                    else
                    {
                        l_198[9] = l_255.f7;
                        return l_344;
                    }
                    for (g_145 = 0; (g_145 <= 16); g_145 = safe_add_func_int64_t_s_s(g_145, 2))
                    {
                        int l_388 = 7L;
                        g_32.f1 = 0x6FC1CBABL;
                        g_32.f1 = (l_388 , (l_324.f7 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((0x1083L > l_388), (safe_rshift_func_int16_t_s_u((p_44 | (((safe_lshift_func_uint8_t_u_u((~p_45.f0), 4)) , p_45.f1) != (l_344.f7 = (p_44 | (g_310 = g_210.f0))))), 12)))), g_32.f0))));
                    }
                }
                g_32.f1 = ((g_210.f0 , (l_400[2] = ((g_399 = (safe_lshift_func_uint8_t_u_u(0xF3L, (p_45.f0 < 65535UL)))) ^ 0xA4L))) != ((safe_div_func_int8_t_s_s((0x13L ^ g_106), g_32.f3)) && ((+9UL) || p_45.f1)));
            }
            l_344.f4 = p_45.f0;
            l_403 = g_32;
            if (l_255.f4)
                continue;
        }
    }
    return l_255;
}







static int func_48(unsigned long long p_49, unsigned p_50, unsigned char p_51, long long p_52)
{
    unsigned l_61 = 0x884BB868L;
    unsigned short l_67 = 8UL;
    int l_68 = (-4L);
    union U1 l_169 = {18446744073709551608UL};
    unsigned l_170 = 0xFDC2BF5EL;
    if ((safe_sub_func_int32_t_s_s(p_51, (g_7.f0 , g_7.f0))))
    {
        union U1 l_66 = {0xA1E05BF5L};
        int l_69 = 0xC91E8449L;
        int l_184 = 3L;
        g_146 = (((func_55(l_61, (safe_add_func_uint8_t_u_u(0xA8L, (safe_mul_func_uint8_t_u_u(p_52, p_49)))), p_50, g_32.f2, (l_69 = (l_68 = (l_66 , (l_61 != l_67))))) , l_66.f0) || 0L) & 4294967293UL);
        l_69 = func_55((func_55((l_67 == (p_51 = p_52)), ((((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((g_145 = (safe_unary_minus_func_int32_t_s(((((g_146 = (p_49 , (~(-8L)))) ^ (g_161 <= (l_68 = (((0x908CA6926699BEB6LL & (p_52 , l_68)) , ((l_169 = g_7) , 0x548FL)) | g_32.f0)))) != 0xB54F28CAL) ^ 65535UL)))), l_67)), l_67)) <= 4L) > 0x2EB4F3A6L) && p_49), l_66.f0, g_32.f2, l_66.f1) && 0x90L), p_52, g_7.f0, l_170, g_7.f0);
        l_184 = func_55(((safe_mul_func_uint16_t_u_u(((l_66.f0 <= ((safe_add_func_uint16_t_u_u((l_68 = (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(p_51, g_121)), (safe_sub_func_int32_t_s_s(((g_181 = 0x0953L) < l_66.f0), (((p_52 = (safe_mod_func_uint16_t_u_u(((0xE2L | (l_69 = g_32.f1)) < p_51), p_51))) <= p_49) < g_32.f4)))))), 0x2B4FL)) < l_61)) || g_32.f0), 65527UL)) >= p_50), l_66.f1, p_50, g_32.f8, l_169.f0);
        l_68 = 9L;
    }
    else
    {
        union U1 l_185 = {0x9AD04334L};
        struct S0 l_186 = {5066,9,0x7CAC03C0L,4207,-14734,5200,309,-8837,24654};
        l_186 = (l_185 , g_32);
        for (p_52 = (-17); (p_52 > (-3)); p_52 = safe_add_func_int8_t_s_s(p_52, 7))
        {
            if (g_7.f1)
                break;
            for (l_61 = 0; (l_61 == 51); l_61++)
            {
                unsigned long long l_191[8][2] = {{0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}, {0x4A8696E9BF4C0AB2LL, 0UL}};
                int i, j;
                l_191[1][1] = g_161;
                return p_52;
            }
        }
        l_68 = 0L;
        return p_49;
    }
    return g_32.f5;
}







static int func_55(unsigned long long p_56, int p_57, int p_58, unsigned p_59, short p_60)
{
    int l_70 = (-4L);
    int l_83[2];
    unsigned short l_93 = 0xE0AFL;
    struct S0 l_94 = {583,16,0L,5221,-15173,7401,272,11562,5653};
    struct S0 l_95 = {8175,-2,0xE62ED8E9L,4955,14512,1037,785,-1285,13354};
    unsigned long long l_120 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 2; i++)
        l_83[i] = 5L;
    p_57 = ((((l_70 = (!g_7.f0)) , (safe_lshift_func_uint8_t_u_u(((((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(0x89D4L, 8)) , (l_70 > (safe_lshift_func_int8_t_s_u(0xF0L, (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_70, (l_83[1] = 8L))), (safe_div_func_int32_t_s_s((g_32.f4 = ((g_7.f1 == (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s((((safe_sub_func_int16_t_s_s((18446744073709551611UL && (safe_mul_func_uint8_t_u_u(g_32.f8, p_57))), 1L)) >= p_56) == l_70))) != 0xB874B34BL) , l_70), 9UL))) != p_58)), 4294967292UL)))))))), 0)) ^ g_7.f1) , p_58) & g_32.f5) == p_57) || 255UL), 1))) == p_59) < l_93);
    if (l_93)
    {
        struct S0 l_101 = {4870,-0,-9L,837,-3442,2720,670,528,25487};
        l_95 = (l_94 = g_32);
        if ((safe_lshift_func_int16_t_s_u(p_56, 0)))
        {
            unsigned char l_103 = 0x72L;
            int l_124[6] = {0L, 0L, 0x60D964AFL, 0L, 0L, 0x60D964AFL};
            int i;
            for (l_93 = 0; (l_93 >= 18); l_93++)
            {
                struct S0 l_100 = {5368,2,-1L,2770,12721,2510,1359,-9999,1454};
                struct S0 l_102 = {6644,-13,4L,4643,9062,295,902,1350,20874};
                l_102 = (g_32.f5 , (l_101 = (l_100 = g_32)));
            }
            if ((((((g_32.f8 >= g_32.f3) < ((l_103 & p_57) ^ ((l_101.f1 >= (g_32.f3 < ((g_106 = (l_95.f7 = l_101.f7)) != (!(safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((0x7EB3ECD4BAD59095LL == ((l_103 ^ g_32.f8) >= l_101.f6)), l_94.f2)), 5)))))) ^ g_32.f7))) == g_32.f5) ^ p_59) > (-1L)))
            {
                return l_95.f1;
            }
            else
            {
                union U1 l_127 = {0x0A4D05B2L};
                l_124[5] = ((l_95.f7 = g_32.f8) > (safe_unary_minus_func_int16_t_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0xE15CL, g_7.f0)) && (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_95.f1 && 0xA9D47723E4D7B1BALL), ((((p_56 = (g_106 = l_120)) || ((g_121 = 8UL) == (safe_mod_func_uint64_t_u_u((g_32.f6 , g_7.f0), g_32.f7)))) >= g_32.f1) & p_58))), p_60))), p_57)))));
                for (p_58 = 0; (p_58 <= (-1)); p_58 = safe_sub_func_uint32_t_u_u(p_58, 7))
                {
                    g_32.f1 = (((l_127 , (l_103 , (safe_sub_func_uint8_t_u_u((g_106 > p_57), (p_60 | l_101.f5))))) , (safe_rshift_func_uint16_t_u_u(p_56, (((l_83[0] = (safe_mod_func_uint32_t_u_u(l_101.f1, (p_56 ^ (-1L))))) ^ 1L) , p_60)))) > p_59);
                }
            }
            g_32 = g_32;
        }
        else
        {
            g_32 = l_101;
        }
        l_94 = l_101;
        g_32.f7 = ((-1L) || (safe_rshift_func_int8_t_s_s(g_32.f6, (p_60 <= (safe_add_func_int16_t_s_s(l_120, (safe_div_func_int64_t_s_s((!((l_101.f8 != (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((l_95.f4 = g_32.f2))) & (g_145 = 0x38483835E1D1A91CLL)), g_32.f7)), p_60))) == 0L)), g_146))))))));
    }
    else
    {
        short l_147 = 0x436BL;
        int l_156 = 0L;
        int l_162 = 0x8E87DE45L;
        struct S0 l_163 = {183,-18,0x52F85193L,1103,-6907,6922,122,8792,15312};
        g_32 = ((((l_147 = p_60) & (0L == l_94.f1)) > (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((p_56 != ((l_156 = (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((p_56 | (g_32.f3 >= (l_162 = (l_156 && ((g_161 = ((((safe_sub_func_uint16_t_u_u((((((safe_mul_func_int16_t_s_s(1L, (g_32.f0 > 1UL))) > l_95.f0) | l_156) , 0x0BA8L) >= l_83[1]), l_156)) || p_60) > l_156) && 0x428FE1C85B538FEDLL)) , g_32.f6))))), (-1L))), p_56))) ^ 0x14FDFC62104B165BLL)), 1UL)), g_7.f0))) , l_163);
        l_95 = l_95;
        l_163 = g_32;
    }
    return p_58;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_32.f4, "g_32.f4", print_hash_value);
    transparent_crc(g_32.f5, "g_32.f5", print_hash_value);
    transparent_crc(g_32.f6, "g_32.f6", print_hash_value);
    transparent_crc(g_32.f7, "g_32.f7", print_hash_value);
    transparent_crc(g_32.f8, "g_32.f8", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_378[i][j][k], "g_378[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_587.f1, "g_587.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_629[i][j], "g_629[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_720, "g_720", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_729[i][j].f0, "g_729[i][j].f0", print_hash_value);
            transparent_crc(g_729[i][j].f1, "g_729[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_746.f0, "g_746.f0", print_hash_value);
    transparent_crc(g_746.f1, "g_746.f1", print_hash_value);
    transparent_crc(g_746.f2, "g_746.f2", print_hash_value);
    transparent_crc(g_746.f3, "g_746.f3", print_hash_value);
    transparent_crc(g_746.f4, "g_746.f4", print_hash_value);
    transparent_crc(g_746.f5, "g_746.f5", print_hash_value);
    transparent_crc(g_746.f6, "g_746.f6", print_hash_value);
    transparent_crc(g_746.f7, "g_746.f7", print_hash_value);
    transparent_crc(g_746.f8, "g_746.f8", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_846[i], "g_846[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_877.f0, "g_877.f0", print_hash_value);
    transparent_crc(g_877.f1, "g_877.f1", print_hash_value);
    transparent_crc(g_877.f2, "g_877.f2", print_hash_value);
    transparent_crc(g_877.f3, "g_877.f3", print_hash_value);
    transparent_crc(g_877.f4, "g_877.f4", print_hash_value);
    transparent_crc(g_877.f5, "g_877.f5", print_hash_value);
    transparent_crc(g_877.f6, "g_877.f6", print_hash_value);
    transparent_crc(g_877.f7, "g_877.f7", print_hash_value);
    transparent_crc(g_877.f8, "g_877.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
