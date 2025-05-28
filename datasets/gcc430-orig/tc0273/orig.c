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


union U0 {
   char f0;
};

union U1 {
   char * f0;
   long long f1;
   unsigned short f2;
};

union U2 {
   char * f0;
   char f1;
   unsigned char f2;
   unsigned f3;
   unsigned f4;
};

union U3 {
   unsigned long long f0;
};

union U4 {
   unsigned long long f0;
   unsigned char f1;
   unsigned f2;
};


static char g_26 = 0x49L;
static char *g_25 = &g_26;
static char **g_24 = &g_25;
static int g_37 = 0L;
static int g_39[8] = {0xEB2D3650L, (-10L), 0xEB2D3650L, (-10L), 0xEB2D3650L, (-10L), 0xEB2D3650L, (-10L)};
static unsigned long long g_56 = 0x5C6F0D602FF7A2D4LL;
static unsigned char g_75 = 4UL;
static long long g_77 = 0L;
static unsigned short g_84 = 0xAFF6L;
static unsigned char *g_88 = &g_75;
static unsigned g_89 = 7UL;
static unsigned short *g_101 = &g_84;
static unsigned short **g_100 = &g_101;
static union U2 g_109 = {0};
static int *g_122 = &g_39[4];
static union U3 g_131[10][8][3] = {{{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}, {{{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}, {{0xD56307DCF4CFC3FELL}, {18446744073709551611UL}, {0x47904A2F46FD7906LL}}}};
static union U3 *g_130 = &g_131[8][4][0];
static union U1 g_159 = {0};
static union U4 g_168 = {0x9D0CB17AFCDE767DLL};
static union U0 g_191[1] = {{0x6CL}};
static int **g_194[7][8][4] = {{{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}, {{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}, {{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}, {{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}, {{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}, {{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}, {{&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}, {&g_122, &g_122, (void*)0, (void*)0}}};
static short g_202 = 0x2CD6L;
static unsigned char *g_248[7] = {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75};
static unsigned char **g_247 = &g_248[3];
static unsigned char ***g_246 = &g_247;
static int g_250 = 0xED122D10L;
static union U3 **g_259[3][8][4] = {{{&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}}};
static union U4 *g_293[7] = {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168};
static union U4 **g_292 = &g_293[3];
static union U4 ***g_291 = &g_292;
static union U2 g_388 = {0};
static unsigned long long g_443 = 18446744073709551615UL;
static int g_468[6] = {7L, 7L, 0xA65204F1L, 7L, 7L, 0xA65204F1L};
static union U2 *g_497 = &g_109;
static unsigned g_607[5][7][7] = {{{0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}}, {{0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}}, {{0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}}, {{0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}}, {{0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}, {0xB6F4A71EL, 0xF94BF4B3L, 0xEF57CB46L, 4UL, 0xEF57CB46L, 0xF94BF4B3L, 0xB6F4A71EL}}};
static union U2 *g_620 = &g_109;
static unsigned short g_634 = 0x4EFDL;
static unsigned long long g_685 = 1UL;
static int ***g_688 = &g_194[2][3][0];
static short g_714 = 0L;
static unsigned char g_741 = 252UL;
static unsigned g_753 = 1UL;
static long long g_784 = 0x56064F229F02D381LL;
static union U1 *g_808 = &g_159;
static union U1 **g_807 = &g_808;
static unsigned long long *g_818 = &g_443;
static unsigned long long **g_817[7][10][2] = {{{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}, {{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}, {{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}, {{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}, {{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}, {{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}, {{&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}, {&g_818, &g_818}}};
static union U4 g_828 = {18446744073709551615UL};
static union U4 *g_827[3][9][7] = {{{&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}}, {{&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}}, {{&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}, {&g_828, &g_828, &g_828, (void*)0, &g_828, &g_168, &g_828}}};
static unsigned long long g_889 = 0x626E1224BE8E31A2LL;
static union U2 **g_1027 = &g_620;
static union U2 ***g_1026 = &g_1027;
static short *g_1034[4][8] = {{&g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202}, {&g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202}, {&g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202}, {&g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202}};
static unsigned long long g_1042 = 0xFBC8AA3145A2836ALL;
static long long g_1117 = 0x6995B18FF02B0A06LL;
static unsigned *g_1151 = &g_828.f2;
static unsigned **g_1150 = &g_1151;



static union U2 func_1(void);
static char ** func_2(union U0 p_3, char p_4, char ** p_5, union U0 p_6, union U0 p_7);
static char func_9(unsigned short p_10, char * p_11, long long p_12, union U2 p_13);
static char * func_14(union U0 p_15, unsigned short p_16, char p_17, short p_18);
static union U0 func_19(char ** p_20);
static char ** func_21(union U2 p_22);
static int func_28(char ** p_29);
static union U2 func_30(char * p_31);
static int * func_33(long long p_34);
static int func_40(char ** p_41);
static union U2 func_1(void)
{
    union U0 l_8 = {0L};
    union U2 l_23 = {0};
    char *l_392 = (void*)0;
    char **l_391 = &l_392;
    char ***l_656 = (void*)0;
    char ***l_657 = (void*)0;
    char ***l_658 = &l_391;
    union U3 *l_661 = (void*)0;
    int *l_669 = &g_39[5];
    short l_712 = 0x3E95L;
    int l_743 = 0x506BDA3BL;
    char l_802 = 0x2FL;
    union U1 *l_806[1][6][4] = {{{&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}, {&g_159, &g_159, &g_159, &g_159}}};
    union U1 **l_805 = &l_806[0][3][0];
    int *l_813 = &g_37;
    int *l_892 = &g_37;
    unsigned short *l_926 = &g_634;
    unsigned short *l_928[6][4][5] = {{{&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}}, {{&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}}, {{&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}}, {{&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}}, {{&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}}, {{&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}, {&g_634, &g_634, &g_634, &g_634, (void*)0}}};
    union U4 **l_966 = (void*)0;
    int *l_973 = (void*)0;
    char **l_976 = (void*)0;
    unsigned long long l_986 = 6UL;
    union U2 l_987[7][1] = {{{0}}, {{0}}, {{0}}, {{0}}, {{0}}, {{0}}, {{0}}};
    unsigned short l_1063 = 4UL;
    unsigned l_1080 = 1UL;
    unsigned *l_1149[8] = {&g_828.f2, (void*)0, &g_828.f2, (void*)0, &g_828.f2, (void*)0, &g_828.f2, (void*)0};
    unsigned **l_1148 = &l_1149[4];
    char l_1154[9][9] = {{1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}, {1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L, 0x08L, 1L}};
    int i, j, k;
    (*l_658) = func_2(l_8, func_9(l_8.f0, ((*g_24) = func_14(func_19(func_21(l_23)), l_8.f0, l_8.f0, ((l_8.f0 < g_131[8][4][0].f0) | 0x37L))), g_191[0].f0, g_388), l_391, g_191[0], l_8);
    for (g_634 = 0; (g_634 <= 2); g_634 = safe_add_func_uint32_t_u_u(g_634, 9))
    {
        unsigned char l_666 = 251UL;
        union U0 *l_672[7][4] = {{&g_191[0], &g_191[0], &g_191[0], &g_191[0]}, {&g_191[0], &g_191[0], &g_191[0], &g_191[0]}, {&g_191[0], &g_191[0], &g_191[0], &g_191[0]}, {&g_191[0], &g_191[0], &g_191[0], &g_191[0]}, {&g_191[0], &g_191[0], &g_191[0], &g_191[0]}, {&g_191[0], &g_191[0], &g_191[0], &g_191[0]}, {&g_191[0], &g_191[0], &g_191[0], &g_191[0]}};
        int *l_701 = &g_39[2];
        char l_710[3];
        union U2 l_711 = {0};
        int *l_742[10][8][3] = {{{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}, {{&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}, {&g_468[0], &g_468[1], &g_468[1]}}};
        unsigned l_746 = 18446744073709551608UL;
        unsigned long long l_766[8][7][1] = {{{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}, {{0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}, {0xDB0659C10B1027D8LL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_710[i] = 0L;
        for (g_443 = 0; (g_443 <= 0); g_443 += 1)
        {
            union U3 **l_662[2];
            int l_665[10][4] = {{(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}, {(-1L), (-10L), 0L, 0L}};
            int *l_667 = &g_39[5];
            union U2 l_674 = {0};
            int ***l_687 = &g_194[2][3][0];
            int ****l_686[8][2][10] = {{{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}, {{&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}, {&l_687, &l_687, &l_687, (void*)0, &l_687, &l_687, &l_687, (void*)0, &l_687, &l_687}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_662[i] = &l_661;
            l_661 = l_661;
            if ((safe_mod_func_uint8_t_u_u((l_666 = l_665[5][2]), 3L)))
            {
                int **l_668[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_668[i][j] = &l_667;
                }
                l_667 = l_667;
                l_669 = &l_665[8][0];
            }
            else
            {
                unsigned char l_673 = 6UL;
                for (g_168.f1 = 0; (g_168.f1 <= 0); g_168.f1 += 1)
                {
                    union U0 *l_671 = &l_8;
                    union U0 **l_670 = &l_671;
                    int l_675 = (-10L);
                    int **l_676 = (void*)0;
                    int **l_677[4][6] = {{(void*)0, &l_667, (void*)0, &l_667, &g_122, &l_669}, {(void*)0, &l_667, (void*)0, &l_667, &g_122, &l_669}, {(void*)0, &l_667, (void*)0, &l_667, &g_122, &l_669}, {(void*)0, &l_667, (void*)0, &l_667, &g_122, &l_669}};
                    int i, j;
                    l_672[1][0] = ((*l_670) = &g_191[0]);
                    (*l_667) = l_673;
                    l_669 = func_33(l_675);
                }
            }
        }
        for (g_84 = 0; (g_84 <= 2); g_84 += 1)
        {
            int *l_689 = &g_468[(g_84 + 2)];
            int **l_690 = &g_122;
            union U1 *l_693 = &g_159;
            union U2 l_704 = {0};
            int *l_717 = &g_468[1];
            unsigned long long l_730 = 18446744073709551611UL;
            long long l_764 = 0x30989C779059D3B6LL;
            int i;
            (*l_689) = g_468[(g_84 + 2)];
            (*l_690) = func_33(g_443);
            (*g_122) = 0x3CB3CFCBL;
            for (g_168.f0 = 0; (g_168.f0 <= 6); g_168.f0 += 1)
            {
                int l_699 = 0xE3FD62F6L;
                int *l_716 = &g_39[5];
                for (g_685 = 0; (g_685 <= 2); g_685 += 1)
                {
                    int *l_691[2];
                    union U1 **l_694 = (void*)0;
                    union U1 **l_695 = (void*)0;
                    union U1 **l_696 = &l_693;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_691[i] = &g_468[(g_84 + 2)];
                    for (g_250 = 6; (g_250 >= 1); g_250 -= 1)
                    {
                        int *l_692 = (void*)0;
                        l_692 = l_691[0];
                    }
                    (*l_696) = l_693;
                }
                for (g_56 = 0; (g_56 <= 0); g_56 += 1)
                {
                    if ((safe_mul_func_uint8_t_u_u(l_666, (l_699 == 1L))))
                    {
                        union U1 **l_700 = &l_693;
                        (*l_700) = (void*)0;
                    }
                    else
                    {
                        int i, j, k;
                        (*l_690) = (void*)0;
                    }
                }
                for (g_250 = 0; g_250 < 5; g_250 += 1)
                {
                    for (g_202 = 0; g_202 < 7; g_202 += 1)
                    {
                        for (g_37 = 0; g_37 < 7; g_37 += 1)
                        {
                            g_607[g_250][g_202][g_37] = 1UL;
                        }
                    }
                }
                (*l_689) = (7UL >= 0L);
                for (l_699 = 5; (l_699 >= 2); l_699 -= 1)
                {
                    unsigned char l_709[8] = {9UL, 255UL, 9UL, 255UL, 9UL, 255UL, 9UL, 255UL};
                    int i;
                    for (g_56 = 0; (g_56 <= 6); g_56 += 1)
                    {
                        short *l_713[4][1][10] = {{{&l_712, &g_202, &g_202, &g_202, (void*)0, &l_712, (void*)0, &l_712, &g_202, &l_712}}, {{&l_712, &g_202, &g_202, &g_202, (void*)0, &l_712, (void*)0, &l_712, &g_202, &l_712}}, {{&l_712, &g_202, &g_202, &g_202, (void*)0, &l_712, (void*)0, &l_712, &g_202, &l_712}}, {{&l_712, &g_202, &g_202, &g_202, (void*)0, &l_712, (void*)0, &l_712, &g_202, &l_712}}};
                        int l_715[5] = {0L, (-1L), 0L, (-1L), 0L};
                        int i, j, k;
                        (*l_690) = l_701;
                        (*l_701) = (safe_mul_func_uint16_t_u_u((((*g_88) = ((*l_689) & (safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(l_709[2], (g_250 || l_710[0]))), (((g_714 = (g_202 = (l_712 || 1L))) || l_715[1]) <= l_715[1]))))) & (**l_690)), 0x5869L));
                        if (l_699)
                            break;
                        l_717 = l_716;
                    }
                    for (g_75 = 0; (g_75 <= 2); g_75 += 1)
                    {
                        short l_718[8] = {0x352EL, (-1L), 0x352EL, (-1L), 0x352EL, (-1L), 0x352EL, (-1L)};
                        int i;
                        l_718[2] = (((*l_701) & g_685) || (*l_701));
                        if ((*l_701))
                            break;
                        g_100 = &g_101;
                    }
                    (*l_701) = (safe_mod_func_int64_t_s_s((g_39[5] >= 0x90B15A27L), g_168.f0));
                }
            }
            for (g_56 = 0; (g_56 <= 6); g_56 += 1)
            {
                short l_735 = 0xBAC2L;
                int l_737 = 0x387F82ABL;
                int l_740 = 0L;
                union U2 l_765 = {0};
                for (g_168.f1 = 0; (g_168.f1 <= 5); g_168.f1 += 1)
                {
                    int l_739 = 0xBD90A14DL;
                    int i;
                    if ((g_468[g_168.f1] >= (g_714 = g_714)))
                    {
                        return l_711;
                    }
                    else
                    {
                        long long *l_723 = (void*)0;
                        long long *l_736[10] = {&g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77, &g_77};
                        char l_738 = (-5L);
                        int i;
                        (*l_701) = 0x77923EB4L;
                        (*l_689) = ((((g_159.f1 = (safe_mod_func_int64_t_s_s(0xF1F2A0A3BDE1D984LL, 0xEE608186BF5439B2LL))) >= (((safe_lshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(g_468[g_168.f1], ((*g_88) = (*g_88)))) & g_468[1]), g_39[6])) != ((+l_730) & ((l_739 = (safe_mod_func_int64_t_s_s((l_737 = (safe_lshift_func_uint16_t_u_s((l_735 = (*l_701)), ((*g_246) == (void*)0)))), l_738))) < 0xF7L))) ^ g_468[g_168.f1])) | 0x25L) & l_740);
                        (*l_701) = ((g_741 > (*l_701)) ^ l_740);
                    }
                    for (g_89 = 0; (g_89 <= 2); g_89 += 1)
                    {
                        (*l_690) = l_742[2][0][2];
                        return l_704;
                    }
                    (*l_701) = ((l_743 > ((safe_mul_func_uint8_t_u_u(l_735, l_746)) || (-7L))) ^ 0x9AL);
                }
                if (l_740)
                    continue;
                if ((*l_701))
                {
                    unsigned short l_747 = 0xA532L;
                    if (l_747)
                        break;
                }
                else
                {
                    unsigned l_748[10] = {4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL};
                    int l_763[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_763[i] = (-1L);
                    for (g_685 = 0; (g_685 <= 6); g_685 += 1)
                    {
                        char l_760[8] = {0L, 0xC0L, 0L, 0xC0L, 0L, 0xC0L, 0L, 0xC0L};
                        unsigned short l_761 = 2UL;
                        unsigned short *l_762[7] = {&g_634, &g_634, (void*)0, &g_634, &g_634, (void*)0, &g_634};
                        int i;
                        if (l_748[8])
                            break;
                        (*l_689) = 8L;
                        (*l_701) = ((safe_sub_func_int64_t_s_s(g_634, l_748[8])) != func_9(l_748[8], (*g_24), ((l_763[6] = ((g_443 | ((safe_mod_func_uint8_t_u_u(g_753, (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(l_760[6], ((((*g_88) = l_760[4]) == (l_761 | (*l_717))) != l_760[6]))), g_56)), l_748[8])))) < 1L)) != l_760[6])) & l_764), l_765));
                    }
                    if ((*l_689))
                        break;
                }
            }
        }
        (*l_701) = l_766[7][3][0];
        return g_388;
    }
    for (g_634 = 0; (g_634 < 25); g_634++)
    {
        unsigned l_771[4] = {0xD98B5E75L, 4294967295UL, 0xD98B5E75L, 4294967295UL};
        union U2 l_779 = {0};
        unsigned char *l_803[5][6][6] = {{{&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}}, {{&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}}, {{&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}}, {{&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}}, {{&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}, {&g_75, &g_168.f1, &g_168.f1, &g_75, (void*)0, &g_75}}};
        int *l_812 = &g_39[5];
        union U3 *l_820 = &g_131[2][3][2];
        union U4 *l_826 = &g_168;
        unsigned short l_873 = 0x7342L;
        char **l_879 = (void*)0;
        unsigned long long ***l_909 = &g_817[5][8][1];
        char l_988 = 0x15L;
        int l_1004 = 0xDAB5D2C0L;
        short *l_1032[3][10] = {{&g_202, &g_202, &l_712, &g_202, &g_202, &l_712, &g_202, &g_202, &l_712, &g_202}, {&g_202, &g_202, &l_712, &g_202, &g_202, &l_712, &g_202, &g_202, &l_712, &g_202}, {&g_202, &g_202, &l_712, &g_202, &g_202, &l_712, &g_202, &g_202, &l_712, &g_202}};
        union U0 *l_1041 = &g_191[0];
        int l_1091 = 0xC6129E51L;
        unsigned long long l_1155 = 0x618F340F206B4946LL;
        int i, j, k;
        for (g_168.f1 = 0; (g_168.f1 <= 4); g_168.f1 += 1)
        {
            long long l_770 = 0x4B9723DFE8CC8E04LL;
            int l_774 = 0xAAFC7899L;
            unsigned long long *l_785 = &g_131[8][4][0].f0;
            char **l_793 = &l_392;
            union U3 *l_819 = (void*)0;
            long long l_845 = (-6L);
            union U2 l_856 = {0};
            short *l_874 = (void*)0;
            for (g_753 = 0; (g_753 <= 4); g_753 += 1)
            {
                return l_23;
            }
            for (g_250 = 0; (g_250 <= 4); g_250 += 1)
            {
                int i, j, k;
                l_774 = ((func_9(((-4L) | (safe_unary_minus_func_int32_t_s((g_607[g_168.f1][g_250][(g_250 + 2)] != l_770)))), (*g_24), l_771[0], l_23) != g_634) || (safe_add_func_int64_t_s_s((g_39[3] ^ 0L), 0UL)));
            }
        }
    }
    return l_23;
}







static char ** func_2(union U0 p_3, char p_4, char ** p_5, union U0 p_6, union U0 p_7)
{
    int l_395[10] = {(-3L), 0x404C0DA5L, 0x7AB0E018L, 0x7AB0E018L, 0x404C0DA5L, (-3L), 0x404C0DA5L, 0x7AB0E018L, 0x7AB0E018L, 0x404C0DA5L};
    int l_399[7][1][8] = {{{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}, {{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}, {{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}, {{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}, {{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}, {{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}, {{(-1L), 1L, 1L, 0xD4CD90FEL, 0x46121AF7L, (-1L), 0x46121AF7L, 0xD4CD90FEL}}};
    union U2 l_402 = {0};
    int l_405 = 0xF7501433L;
    int l_406[2];
    unsigned char l_421 = 0xF3L;
    union U3 *l_445 = &g_131[8][6][0];
    unsigned short l_447 = 65535UL;
    unsigned l_450[8] = {0x374708CEL, 0x374708CEL, 0x64675EDDL, 0x374708CEL, 0x374708CEL, 0x64675EDDL, 0x374708CEL, 0x374708CEL};
    int *l_459 = &l_406[1];
    unsigned long long *l_460[8];
    char **l_467 = &g_25;
    unsigned l_499[3];
    union U1 *l_514[8][10][3] = {{{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}, {{(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}, {(void*)0, &g_159, &g_159}}};
    union U4 *l_561 = &g_168;
    unsigned short ***l_652 = &g_100;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_406[i] = 0xC96C9EC0L;
    for (i = 0; i < 8; i++)
        l_460[i] = &g_56;
    for (i = 0; i < 3; i++)
        l_499[i] = 1UL;
    if (p_3.f0)
    {
        short *l_398[9];
        unsigned short *l_400 = &g_159.f2;
        union U2 l_401 = {0};
        unsigned *l_403[10] = {&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89};
        int *l_404[2][10][1] = {{{&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}}, {{&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}, {&l_399[5][0][3]}}};
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_398[i] = &g_202;
        l_406[1] = (l_405 = (l_399[5][0][3] = (safe_add_func_int32_t_s_s(((g_168.f2 = func_9(p_7.f0, (*p_5), p_6.f0, (l_402 = l_401))) <= g_131[8][4][0].f0), (-1L)))));
    }
    else
    {
        unsigned l_411 = 0x66E13537L;
        int *l_430 = &l_406[0];
        for (l_405 = 0; (l_405 >= 27); l_405 = safe_add_func_int64_t_s_s(l_405, 1))
        {
            int *l_409 = (void*)0;
            int *l_410 = (void*)0;
            int **l_431 = &g_122;
            l_411 = (p_7.f0 <= func_28(func_21(l_402)));
            for (p_3.f0 = 0; (p_3.f0 <= (-18)); --p_3.f0)
            {
                unsigned long long *l_418[3][10][1] = {{{&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}}, {{&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}}, {{&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}, {&g_131[8][4][0].f0}}};
                char *l_419 = &g_191[0].f0;
                int *l_420 = &g_39[4];
                int i, j, k;
                if (l_399[0][0][2])
                    break;
                (*l_420) = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((*l_419) = ((((g_56 = 0xBAA1FF9B607816A1LL) > p_4) ^ l_411) & l_395[4])), 5)), (((((-2L) <= p_6.f0) & (*g_101)) | (*g_101)) < 1UL)));
                if (p_3.f0)
                    continue;
                if (l_421)
                    break;
            }
            for (g_250 = (-10); (g_250 == 14); g_250 = safe_add_func_uint64_t_u_u(g_250, 8))
            {
                int l_428 = 0x9E3BD0E4L;
                unsigned short *l_429 = &g_159.f2;
                l_428 = (safe_mul_func_int8_t_s_s(func_28(&g_25), (((*l_429) = (l_405 >= (safe_add_func_uint16_t_u_u(p_6.f0, (l_399[0][0][2] && l_428))))) || p_4)));
            }
            (*l_431) = l_430;
        }
        (*l_430) = p_7.f0;
        for (l_411 = (-3); (l_411 >= 2); l_411 = safe_add_func_int16_t_s_s(l_411, 3))
        {
            unsigned long long *l_436 = &g_56;
            char ***l_437[3];
            int l_438 = 0xA8BD7C63L;
            int *l_441 = (void*)0;
            union U3 *l_444[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int i;
            for (i = 0; i < 3; i++)
                l_437[i] = &g_24;
            if ((safe_add_func_int64_t_s_s((((*g_101) = p_6.f0) | (0xC1C3FA0F31A7FE26LL && ((*l_436) = ((g_250 | p_6.f0) == g_168.f1)))), (((***g_246) < (l_438 ^ p_4)) ^ (-1L)))))
            {
                int **l_439 = &g_122;
                int **l_440[3][8] = {{&l_430, &l_430, &l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430, &l_430, &l_430}, {&l_430, &l_430, &l_430, &l_430, &l_430, &l_430, &l_430, &l_430}};
                int i, j;
                l_441 = ((*l_439) = (void*)0);
                if ((*l_430))
                    break;
                (*l_439) = &l_438;
                (*g_122) = p_6.f0;
            }
            else
            {
                int l_442 = 0xD0D20FDDL;
                (*l_430) = (l_442 | l_442);
                if (g_443)
                {
                    int **l_446 = &l_430;
                    l_445 = l_444[3];
                    (*l_446) = func_33(g_443);
                }
                else
                {
                    (*l_430) = p_3.f0;
                }
                if (p_3.f0)
                    break;
                (*l_430) = l_447;
            }
            for (g_443 = 0; (g_443 >= 56); ++g_443)
            {
                (*l_430) = 0x7EE48934L;
            }
        }
    }
    if ((l_447 <= (l_450[3] <= (safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((((safe_add_func_uint64_t_u_u((l_399[0][0][2] = (safe_unary_minus_func_int32_t_s((((*l_459) = ((g_168.f1 >= p_6.f0) & func_28(&g_25))) >= 1L)))), ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_77 > (&g_25 == p_5)), g_168.f1)), p_7.f0)) >= 0x8F7FE99326B4D6FELL) | 0L) > 0xEF39997598967C22LL))) <= (-4L)) >= l_405) | g_89), g_77)), p_7.f0)))))))
    {
        union U2 l_470 = {0};
        int l_487 = (-1L);
        unsigned char l_488 = 254UL;
        union U2 *l_495 = &l_402;
        char l_505 = 6L;
        unsigned short **l_510[6][1][5] = {{{&g_101, &g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101, &g_101}}};
        char **l_532 = &g_25;
        union U4 *l_545[10] = {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168};
        int **l_552[7][1] = {{&g_122}, {&g_122}, {&g_122}, {&g_122}, {&g_122}, {&g_122}, {&g_122}};
        int *l_553 = &l_405;
        int i, j, k;
        for (g_75 = 0; (g_75 <= 7); g_75 += 1)
        {
            int *l_483[2][4] = {{&g_468[4], &g_468[4], &l_406[1], &g_468[4]}, {&g_468[4], &g_468[4], &l_406[1], &g_468[4]}};
            unsigned short **l_513[9][1][4] = {{{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}, {{&g_101, &g_101, &g_101, &g_101}}};
            union U1 *l_515 = &g_159;
            union U2 l_517[8] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
            int i, j, k;
            for (g_26 = 1; (g_26 >= 0); g_26 -= 1)
            {
                return p_5;
            }
            for (g_250 = 0; (g_250 <= 7); g_250 += 1)
            {
                unsigned short l_482 = 1UL;
                for (l_405 = 7; (l_405 >= 2); l_405 -= 1)
                {
                    long long *l_469[1][4][2] = {{{&g_77, &g_77}, {&g_77, &g_77}, {&g_77, &g_77}, {&g_77, &g_77}}};
                    int l_472 = 8L;
                    char **l_481 = &g_25;
                    int **l_484 = &g_122;
                    int i, j, k;
                    if (((func_9((safe_lshift_func_uint8_t_u_u(p_4, (&l_402 == (void*)0))), (*p_5), ((*l_459) = func_9((0xEA09L != g_131[8][4][0].f0), (*g_24), (g_159.f1 = (((p_7.f0 <= p_6.f0) || 0x4A17665FL) < g_468[1])), l_402)), l_470) | p_6.f0) | p_6.f0))
                    {
                        unsigned char *l_471[3];
                        int l_473 = 0x0FC3FA49L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_471[i] = &l_402.f2;
                        (*l_459) = (((l_472 = ((*l_459) >= g_468[5])) ^ func_28(p_5)) ^ l_473);
                        if (p_6.f0)
                            break;
                        return p_5;
                    }
                    else
                    {
                        union U2 *l_474 = &g_109;
                        (*l_459) = (((func_28(func_21(((*l_474) = g_388))) | g_191[0].f0) != 0x0AL) && (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(func_28(l_481), l_482)), (1L ^ l_482))), p_6.f0)));
                    }
                    (*l_484) = l_483[0][3];
                }
                for (l_405 = 1; (l_405 >= 0); l_405 -= 1)
                {
                    int i;
                    l_488 = (l_406[l_405] = ((safe_rshift_func_int8_t_s_u(l_406[l_405], 3)) != (((*l_459) <= (p_6.f0 ^ l_487)) & (*g_88))));
                    (*g_246) = (void*)0;
                    (*l_459) = (*l_459);
                }
            }
            for (g_84 = 0; (g_84 <= 7); g_84 += 1)
            {
                unsigned char l_490[3];
                union U2 *l_498 = &l_402;
                int l_506 = 0x750284F3L;
                int i;
                for (i = 0; i < 3; i++)
                    l_490[i] = 0UL;
                if (p_3.f0)
                    break;
                if (p_7.f0)
                {
                    if (p_6.f0)
                        break;
                }
                else
                {
                    unsigned long long l_489 = 0x9EEF9FDC281F0DA4LL;
                    unsigned short *l_491[8][8] = {{&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}, {&g_84, (void*)0, &g_84, &l_447, &l_447, (void*)0, (void*)0, &g_84}};
                    int l_492 = 0x5377C3C4L;
                    union U0 *l_509 = &g_191[0];
                    unsigned short ***l_511 = (void*)0;
                    unsigned short ***l_512[9][9][3] = {{{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}, {{(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}, {(void*)0, (void*)0, &g_100}}};
                    char l_516 = (-1L);
                    char *l_518 = &g_109.f1;
                    int i, j, k;
                    l_492 = ((l_489 = p_6.f0) | ((*l_459) = (l_490[0] > (g_159.f2 = p_6.f0))));
                    if (p_6.f0)
                    {
                        union U1 *l_493[7][3][2] = {{{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}, {{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}, {{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}, {{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}, {{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}, {{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}, {{&g_159, &g_159}, {&g_159, &g_159}, {&g_159, &g_159}}};
                        union U1 **l_494 = &l_493[2][1][0];
                        union U2 **l_496 = (void*)0;
                        int i, j, k;
                        (*l_494) = l_493[2][1][0];
                        l_499[0] = ((*l_459) = ((g_497 = l_495) == (l_498 = &g_109)));
                    }
                    else
                    {
                        char l_500[9][1][3] = {{{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}, {{6L, 0xF9L, (-6L)}}};
                        int i, j, k;
                        l_500[5][0][2] = ((*l_459) = 0L);
                    }
                    l_506 = (safe_mod_func_uint64_t_u_u(p_6.f0, (safe_add_func_int16_t_s_s(l_505, l_487))));
                    if ((safe_rshift_func_int8_t_s_s((+((*l_518) = ((l_487 = ((~(g_443 = func_9(p_7.f0, func_14(((*l_509) = g_191[0]), (((l_510[4][0][2] = &g_101) != (l_513[1][0][2] = &l_491[4][6])) ^ func_9(((func_9(((*l_459) = (~func_9(((((l_515 = l_514[7][4][1]) == (void*)0) ^ g_250) < l_516), (*g_24), g_84, l_517[3]))), (*p_5), l_490[0], (*g_497)) & p_3.f0) > 0L), (*g_24), p_7.f0, (*l_498))), l_516, l_489), p_7.f0, (*l_495)))) <= 0L)) == g_75))), p_6.f0)))
                    {
                        long long l_519 = 0xB14471E7D03FE365LL;
                        if (l_519)
                            break;
                    }
                    else
                    {
                        (*l_459) = (*l_459);
                    }
                }
            }
        }
        for (g_89 = (-22); (g_89 != 56); ++g_89)
        {
            char **l_522[4][5][7] = {{{(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}}, {{(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}}, {{(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}}, {{(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}, {(void*)0, &g_25, (void*)0, &g_25, (void*)0, &g_25, &g_25}}};
            char ***l_523 = (void*)0;
            char ***l_524 = &g_24;
            int l_529 = (-1L);
            int i, j, k;
        }
        l_553 = func_33(p_7.f0);
    }
    else
    {
        char **l_564 = &g_25;
        int l_579 = 0xCE2C9171L;
        unsigned *l_614 = (void*)0;
        unsigned long long l_617 = 1UL;
        char l_633 = 0x84L;
        for (p_3.f0 = 24; (p_3.f0 >= (-25)); p_3.f0--)
        {
            for (g_168.f1 = 0; (g_168.f1 == 26); g_168.f1 = safe_add_func_uint32_t_u_u(g_168.f1, 7))
            {
                int *l_558 = &g_37;
                union U1 **l_560 = &l_514[5][2][0];
                union U1 ***l_559 = &l_560;
                l_558 = func_33(g_131[8][4][0].f0);
                (*l_559) = (void*)0;
            }
            return l_467;
        }
        (**g_291) = l_561;
        for (g_250 = 3; (g_250 <= 14); ++g_250)
        {
            for (p_7.f0 = 0; (p_7.f0 <= 3); p_7.f0 += 1)
            {
                return &g_25;
            }
            return l_564;
        }
        if ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((*l_459) != g_75), 7)), (*l_459))))
        {
            unsigned l_569 = 0x55E0D183L;
            union U3 **l_589 = &g_130;
            int l_615 = 0xFAFFA96BL;
            l_569 = 0xC281CBDBL;
            if ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(255UL, (safe_sub_func_int16_t_s_s(0x2022L, p_6.f0)))), g_56)))
            {
                unsigned l_584 = 0x962AACFCL;
                int l_595 = 0x3AD44C0EL;
                int *l_622 = &l_406[1];
                char **l_625 = &g_25;
                unsigned short *l_626 = (void*)0;
                for (p_6.f0 = 1; (p_6.f0 <= 6); p_6.f0 += 1)
                {
                    union U1 **l_576 = &l_514[7][4][1];
                    union U1 *l_578 = (void*)0;
                    union U1 **l_577 = &l_578;
                    int l_580 = 0xBB35694BL;
                    char **l_583 = &g_25;
                    (*l_577) = ((*l_576) = &g_159);
                    l_580 = l_579;
                    (*l_459) = (0xDDL && (safe_mod_func_int16_t_s_s(func_28(l_583), l_584)));
                }
                for (p_7.f0 = 0; (p_7.f0 == (-27)); p_7.f0 = safe_sub_func_uint8_t_u_u(p_7.f0, 5))
                {
                    int *l_592[5][10][5] = {{{&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}}, {{&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}}, {{&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}}, {{&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}}, {{&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}, {&g_39[5], &l_399[0][0][2], &l_406[1], &g_39[0], &g_39[5]}}};
                    int i, j, k;
                    l_595 = ((*l_459) = ((safe_sub_func_int8_t_s_s((!0x1DL), (&g_130 != l_589))) >= (safe_add_func_uint64_t_u_u((~(l_592[0][9][2] == l_592[0][9][2])), (safe_lshift_func_uint8_t_u_u(p_7.f0, 5))))));
                }
                if (l_579)
                {
                    for (l_447 = (-22); (l_447 <= 51); l_447 = safe_add_func_uint8_t_u_u(l_447, 1))
                    {
                        char ***l_600 = &g_24;
                        int l_610 = (-2L);
                        int **l_611 = &g_122;
                        (*l_611) = func_33(((((safe_sub_func_int8_t_s_s(((((*l_459) >= ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_607[4][5][3], l_584)), (safe_add_func_int32_t_s_s((-9L), p_3.f0)))), 6)) < 0xFC1DL)) | p_4) && 4L), p_7.f0)) && (*g_101)) == 0xBCL) <= l_610));
                        (*l_459) = (safe_mul_func_int8_t_s_s(l_579, ((*g_88) = ((void*)0 == l_614))));
                        l_615 = (l_569 <= func_28(&g_25));
                        (**l_611) = (*l_459);
                    }
                    (*l_459) = (safe_unary_minus_func_int16_t_s(l_595));
                    l_617 = p_4;
                    if (((void*)0 != &g_202))
                    {
                        union U2 *l_618 = &l_402;
                        union U2 **l_619[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_619[i] = &g_497;
                        (*l_459) = p_4;
                        g_620 = (g_497 = l_618);
                    }
                    else
                    {
                        int **l_621 = (void*)0;
                        short *l_623 = (void*)0;
                        short *l_624 = &g_202;
                        (*l_459) = ((0xA1D40090L < l_615) | (-3L));
                        l_622 = &l_579;
                        (*l_459) = func_9((**g_100), func_14(g_191[0], (**g_100), ((***g_246) <= ((p_3.f0 == (((*l_624) = (-5L)) ^ (+p_4))) & g_607[4][5][3])), p_4), p_7.f0, l_402);
                    }
                }
                else
                {
                    unsigned short **l_627 = &l_626;
                    (*l_459) = (((*g_88) = (**g_247)) <= (((*l_627) = ((*g_100) = l_626)) != &g_84));
                }
            }
            else
            {
                int *l_628 = &l_579;
                if (p_6.f0)
                {
                    int **l_629 = &l_628;
                    short *l_632 = &g_202;
                    (*l_629) = l_628;
                    (*l_459) = ((safe_add_func_int16_t_s_s((((*g_101) | ((*l_632) = (((((*l_628) = p_4) | p_4) <= ((p_3.f0 >= p_6.f0) < l_569)) < 0x646BL))) >= 0x5532L), (18446744073709551610UL && 0L))) ^ l_633);
                    l_579 = 0xECD8D165L;
                }
                else
                {
                    union U0 *l_637 = &g_191[0];
                    int **l_639[8] = {&l_459, &g_122, &l_459, &g_122, &l_459, &g_122, &l_459, &g_122};
                    int i;
                    for (g_443 = 0; (g_443 <= 0); g_443 += 1)
                    {
                        int **l_635 = &l_459;
                        (*l_635) = func_33(g_634);
                    }
                    for (p_6.f0 = 5; (p_6.f0 >= 2); p_6.f0 -= 1)
                    {
                        union U2 **l_636 = &g_620;
                        union U0 *l_638 = &g_191[0];
                        int i;
                        (*l_636) = &g_388;
                        l_638 = l_637;
                        if (l_395[(p_6.f0 + 2)])
                            break;
                        (*l_459) = (*l_459);
                    }
                    l_459 = l_628;
                }
            }
        }
        else
        {
            int l_655 = 0x3EFC7A70L;
            (*l_459) = (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((**g_100) = (g_443 > (func_28(p_5) && (safe_rshift_func_int16_t_s_u((((((l_579 = (safe_rshift_func_int8_t_s_s((0x1F4DL | ((safe_sub_func_uint64_t_u_u((*l_459), (((void*)0 != l_652) | (0xA1L > (safe_rshift_func_uint8_t_u_s(l_655, 4)))))) <= l_655)), 5))) != g_56) ^ 1L) & (*l_459)) >= p_6.f0), 0))))), 65528UL)), l_633));
        }
    }
    return p_5;
}







static char func_9(unsigned short p_10, char * p_11, long long p_12, union U2 p_13)
{
    unsigned long long l_389 = 0x18A35B81303411C7LL;
    int *l_390 = &g_39[5];
    (*l_390) = l_389;
    return (*l_390);
}







static char * func_14(union U0 p_15, unsigned short p_16, char p_17, short p_18)
{
    union U2 *l_375[9][5][5] = {{{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}, {{(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}, {(void*)0, (void*)0, &g_109, &g_109, &g_109}}};
    union U2 **l_376 = (void*)0;
    union U2 **l_377 = &l_375[4][3][0];
    unsigned char ****l_382 = &g_246;
    unsigned char ***l_383 = &g_247;
    int l_384[9] = {0L, 0x797A1178L, 0L, 0x797A1178L, 0L, 0x797A1178L, 0L, 0x797A1178L, 0L};
    int *l_385 = (void*)0;
    int *l_386 = &g_39[0];
    char *l_387 = (void*)0;
    int i, j, k;
    (*l_377) = l_375[1][1][0];
    (*l_386) = (~((0UL || (safe_lshift_func_int8_t_s_u((g_250 < (safe_sub_func_int64_t_s_s(((*g_24) != (*g_24)), g_191[0].f0))), 2))) ^ ((((*l_382) = &g_247) == l_383) ^ l_384[5])));
    return l_387;
}







static union U0 func_19(char ** p_20)
{
    char *l_32 = &g_26;
    union U2 *l_110 = &g_109;
    int l_119[6] = {0L, 0L, (-1L), 0L, 0L, (-1L)};
    unsigned char **l_164 = &g_88;
    union U4 **l_165 = (void*)0;
    union U3 *l_184 = (void*)0;
    union U0 l_204 = {-8L};
    int **l_237 = &g_122;
    int i;
    if (func_28(func_21(((*l_110) = func_30(((*p_20) = l_32))))))
    {
        short l_117 = (-3L);
        unsigned long long *l_118 = (void*)0;
        int *l_120 = &l_119[5];
        union U3 *l_133 = &g_131[9][5][0];
        union U4 *l_167 = &g_168;
        union U4 **l_166 = &l_167;
        unsigned char l_211[1];
        int l_227 = 0xF58AA48EL;
        char **l_230 = &l_32;
        int i;
        for (i = 0; i < 1; i++)
            l_211[i] = 5UL;
        if (((l_119[4] = l_117) ^ l_117))
        {
            int **l_121[8] = {&l_120, &l_120, &l_120, &l_120, &l_120, &l_120, &l_120, &l_120};
            char **l_129 = &l_32;
            int i;
            g_122 = l_120;
            (*g_122) = ((safe_rshift_func_int16_t_s_s(((*l_120) | ((safe_rshift_func_int8_t_s_u((l_119[4] || 0x27E98E59L), ((*g_88) = (*g_88)))) && ((**g_100) = (*l_120)))), 7)) <= 0x15C5L);
            for (g_37 = 0; (g_37 >= (-4)); g_37 = safe_sub_func_uint16_t_u_u(g_37, 7))
            {
                union U3 **l_132[5][4] = {{&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130}};
                int i, j;
            }
            for (g_84 = 0; g_84 < 8; g_84 += 1)
            {
                g_39[g_84] = 0xFE971D65L;
            }
        }
        else
        {
            union U2 *l_142 = &g_109;
            long long *l_157 = (void*)0;
            char **l_171 = &g_25;
            int l_179 = 0xAC453239L;
            long long *l_231 = &g_159.f1;
            if ((!(safe_rshift_func_uint8_t_u_s(((*g_88) = ((safe_lshift_func_int16_t_s_u(((*l_120) <= (*g_88)), (safe_lshift_func_int8_t_s_s((l_119[1] > g_26), 7)))) | (safe_lshift_func_int16_t_s_u(g_131[8][4][0].f0, (l_142 == l_142))))), 7))))
            {
                unsigned char *l_145 = &g_75;
                for (l_117 = (-4); (l_117 >= (-5)); l_117 = safe_sub_func_uint16_t_u_u(l_117, 3))
                {
                    unsigned char **l_146[2];
                    int l_147 = 0x837069AAL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_146[i] = &l_145;
                    (*l_120) = (-1L);
                    (*g_122) = ((*l_120) = (&g_75 != (g_88 = l_145)));
                    if (l_147)
                        break;
                }
            }
            else
            {
                union U1 *l_158 = &g_159;
                int l_178 = 0xE6E4037CL;
                union U3 *l_189 = &g_131[1][4][1];
                int **l_193 = &g_122;
                int ***l_192[5] = {&l_193, &l_193, &l_193, &l_193, &l_193};
                int i;
                for (g_26 = (-26); (g_26 != (-21)); g_26 = safe_add_func_uint32_t_u_u(g_26, 1))
                {
                    long long l_162[6] = {0xEF55B7FEDFDEEC52LL, 0xEF55B7FEDFDEEC52LL, (-1L), 0xEF55B7FEDFDEEC52LL, 0xEF55B7FEDFDEEC52LL, (-1L)};
                    int *l_173 = (void*)0;
                    int i;
                }
                if ((*g_122))
                {
                    short *l_180 = &l_117;
                    unsigned short *l_181 = (void*)0;
                    (*g_122) = ((safe_mod_func_int16_t_s_s(((0x3A2BD303A7F8146CLL >= ((~((safe_mod_func_int32_t_s_s((*g_122), (*l_120))) > l_178)) != (*g_101))) | ((*l_180) = ((l_179 | (g_77 = (-10L))) || g_89))), ((g_159.f2 = l_119[4]) & l_179))) && (*l_120));
                }
                else
                {
                    unsigned l_187 = 0x93DCF5DEL;
                    for (g_89 = 0; (g_89 < 24); g_89 = safe_add_func_uint16_t_u_u(g_89, 8))
                    {
                        l_184 = &g_131[1][6][2];
                    }
                    for (l_117 = 0; (l_117 != (-28)); l_117 = safe_sub_func_int64_t_s_s(l_117, 5))
                    {
                        union U3 *l_188 = &g_131[8][4][0];
                        union U3 **l_190 = &l_133;
                        if (l_187)
                            break;
                        (*g_122) = ((l_188 = &g_131[1][0][1]) == ((*l_190) = l_189));
                        if ((*g_122))
                            continue;
                    }
                    return g_191[0];
                }
                if ((&g_122 == (g_194[2][3][0] = &l_120)))
                {
                    int *l_195[2];
                    char **l_196[9][4][1] = {{{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {&l_32}}};
                    union U2 l_199[10] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
                    unsigned short l_218 = 0x211DL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_195[i] = &l_179;
                    l_195[1] = l_195[1];
                    if (func_40(l_196[2][2][0]))
                    {
                        short *l_200 = &l_117;
                        short *l_201[6] = {&g_202, &g_202, &g_202, &g_202, &g_202, &g_202};
                        int l_203 = 2L;
                        int i;
                        l_179 = (safe_mul_func_int8_t_s_s(((((g_202 = (((func_40(func_21(l_199[0])) <= (*g_88)) & (&g_194[1][5][2] == &g_194[6][3][0])) != (((*l_200) = g_168.f1) == (**g_100)))) | l_203) == l_119[4]) != (-1L)), 253UL));
                        return l_204;
                    }
                    else
                    {
                        union U0 *l_206[10][6][3] = {{{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}, {{&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}, {&g_191[0], &g_191[0], &l_204}}};
                        union U0 **l_205 = &l_206[7][4][1];
                        int i, j, k;
                        (*l_205) = &l_204;
                        (*l_193) = &l_119[5];
                        (**l_193) = (*g_122);
                        (*l_193) = func_33(g_168.f0);
                    }
                    (*g_122) = (safe_lshift_func_uint16_t_u_s(((**g_100) = (safe_sub_func_uint16_t_u_u((**g_100), (g_168.f2 < l_211[0])))), (((**g_24) > (safe_rshift_func_uint16_t_u_u(((func_40(&g_25) || ((**l_193) ^ g_26)) > (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_218, 0x8AL)), (*l_120)))), (*l_120)))) < (*g_88))));
                }
                else
                {
                    return g_191[0];
                }
            }
            (*g_122) = (l_179 > ((safe_add_func_uint16_t_u_u(((((**g_24) = (safe_add_func_int64_t_s_s(((*l_231) = ((safe_rshift_func_uint16_t_u_s(((*g_101) = (l_179 || (((**l_164) = ((safe_mod_func_uint32_t_u_u(g_39[5], ((*l_120) = (l_227 | (safe_lshift_func_int8_t_s_u(func_28(l_230), l_179)))))) < (l_157 == l_118))) | (-6L)))), l_179)) || l_179)), 0xF62D8175E35A37F9LL))) > l_204.f0) || g_77), l_179)) < l_179));
            (*g_122) = l_179;
        }
    }
    else
    {
        int **l_235 = &g_122;
        unsigned char ***l_249[6] = {&g_247, &g_247, &g_247, &g_247, &g_247, &g_247};
        union U3 **l_257 = &l_184;
        union U4 *l_273 = (void*)0;
        int l_295 = (-6L);
        unsigned long long *l_335 = &g_56;
        unsigned long long **l_334 = &l_335;
        union U0 *l_359 = &g_191[0];
        int i;
        for (g_168.f1 = 0; (g_168.f1 <= 3); g_168.f1 += 1)
        {
            int ***l_234 = &g_194[2][3][0];
            int ***l_236[10][10] = {{&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}, {&l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, &l_235, (void*)0, (void*)0}};
            unsigned char *l_244 = &g_75;
            unsigned long long *l_245 = &g_131[8][4][0].f0;
            char **l_301[10][4][4] = {{{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}, {{&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}, {&l_32, &l_32, &g_25, &l_32}}};
            union U0 *l_360 = &g_191[0];
            int i, j, k;
        }
        (**l_235) = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((**l_237) | 0xC54B809A07D6F0E8LL), (safe_mul_func_uint16_t_u_u((((**l_237) > func_28(&l_32)) <= (**l_237)), g_75)))), ((!((**l_237) != (**l_237))) || g_191[0].f0)));
    }
    (**l_237) = (**l_237);
    return g_191[0];
}







static char ** func_21(union U2 p_22)
{
    char **l_27 = &g_25;
    l_27 = g_24;
    return l_27;
}







static int func_28(char ** p_29)
{
    unsigned char l_113 = 6UL;
    int *l_115[2];
    unsigned long long l_116 = 0x2728FC8EE3FDE749LL;
    int i;
    for (i = 0; i < 2; i++)
        l_115[i] = &g_37;
    for (g_84 = (-16); (g_84 <= 56); g_84 = safe_add_func_int32_t_s_s(g_84, 1))
    {
        int *l_114 = &g_37;
        (*l_114) = l_113;
    }
    l_116 = 0xE6EF1F7FL;
    return g_89;
}







static union U2 func_30(char * p_31)
{
    int *l_59 = &g_39[0];
    int **l_58 = &l_59;
    char ***l_91 = &g_24;
    (*l_58) = func_33(g_26);
    for (g_56 = 0; (g_56 <= 7); g_56 += 1)
    {
        char *l_72 = &g_26;
        int l_73 = 0L;
        unsigned char *l_74 = &g_75;
        long long *l_76 = &g_77;
        int i;
        if (g_39[g_56])
            break;
        (*l_58) = &g_37;
        g_39[g_56] = (safe_lshift_func_int8_t_s_u(((func_40(&g_25) | (+(safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((((!((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(0x24270207789B64D4LL, ((*l_76) = ((l_72 == (void*)0) > ((*l_74) = (l_73 != (+g_26))))))), 6L)) < g_26)) != (*l_59)) & 0x686206571F67B260LL), l_73)) & l_73) | g_37), 6)))) > 0xC9L), l_73));
        for (g_26 = 0; (g_26 <= 7); g_26 += 1)
        {
            char ***l_82 = &g_24;
            unsigned short *l_83 = &g_84;
            unsigned char *l_87[3][2] = {{&g_75, &g_75}, {&g_75, &g_75}, {&g_75, &g_75}};
            union U2 l_104 = {0};
            int i, j;
        }
    }
    for (g_75 = 0; (g_75 > 15); g_75 = safe_add_func_uint32_t_u_u(g_75, 6))
    {
        (*l_58) = (*l_58);
    }
    return g_109;
}







static int * func_33(long long p_34)
{
    char *l_35 = &g_26;
    int *l_36 = &g_37;
    int *l_38 = &g_39[5];
    char **l_42 = &l_35;
    unsigned long long *l_54 = (void*)0;
    unsigned long long *l_55 = &g_56;
    char l_57[3];
    int i;
    for (i = 0; i < 3; i++)
        l_57[i] = 1L;
    (*l_38) = ((*l_36) = (l_35 == (*g_24)));
    (*l_38) = (func_40(l_42) < (((*l_55) = p_34) & l_57[0]));
    (*l_36) = (*l_36);
    return &g_39[5];
}







static int func_40(char ** p_41)
{
    char *l_45 = &g_26;
    int l_48 = 0x0BA43090L;
    int *l_53 = &g_39[5];
    (*l_53) = ((safe_sub_func_uint16_t_u_u((((((((((void*)0 == l_45) >= (safe_lshift_func_int8_t_s_s((((*g_24) != l_45) & l_48), 3))) ^ ((p_41 == (void*)0) ^ l_48)) ^ (!(safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_48, (**p_41))), 0xD004L)))) || g_26) <= g_37) || g_39[0]) < 7UL), g_26)) == 9L);
    (*l_53) = (*l_53);
    return (*l_53);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_131[i][j][k].f0, "g_131[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_168.f1, "g_168.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_191[i].f0, "g_191[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_468[i], "g_468[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_607[i][j][k], "g_607[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_828.f0, "g_828.f0", print_hash_value);
    transparent_crc(g_828.f1, "g_828.f1", print_hash_value);
    transparent_crc(g_828.f2, "g_828.f2", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1117, "g_1117", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
