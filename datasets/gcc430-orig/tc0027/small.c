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



static volatile unsigned g_2 = 0x5AB3E90AL;
static unsigned g_13 = 0UL;
static unsigned short g_37 = 0xE974L;
static unsigned char g_48 = 0xBBL;
static unsigned short g_50 = 0UL;
static unsigned short *g_49 = &g_50;
static int g_58[10][6][2] = {{{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}, {{1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}, {1L, 0x15ED761EL}}};
static int g_72 = 9L;
static char g_75 = 0xDDL;
static unsigned char g_76[1] = {0x8CL};
static unsigned g_77 = 0x13236C21L;
static int **g_81[1] = {(void*)0};
static short g_89 = 5L;
static unsigned short g_100 = 0x2354L;
static unsigned g_116[6][2][6] = {{{0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}, {0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}}, {{0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}, {0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}}, {{0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}, {0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}}, {{0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}, {0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}}, {{0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}, {0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}}, {{0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}, {0x19055545L, 0x29F9B9B7L, 0x29F9B9B7L, 0x19055545L, 4294967294UL, 4294967293UL}}};
static unsigned short **g_124 = &g_49;
static unsigned char *g_167 = &g_76[0];
static unsigned char **g_166 = &g_167;
static unsigned g_197[4][10] = {{1UL, 4294967295UL, 0x05659454L, 0UL, 2UL, 0x219EB458L, 2UL, 0UL, 0x05659454L, 4294967295UL}, {1UL, 4294967295UL, 0x05659454L, 0UL, 2UL, 0x219EB458L, 2UL, 0UL, 0x05659454L, 4294967295UL}, {1UL, 4294967295UL, 0x05659454L, 0UL, 2UL, 0x219EB458L, 2UL, 0UL, 0x05659454L, 4294967295UL}, {1UL, 4294967295UL, 0x05659454L, 0UL, 2UL, 0x219EB458L, 2UL, 0UL, 0x05659454L, 4294967295UL}};
static unsigned short g_200[2] = {65532UL, 65532UL};
static int g_246 = 6L;
static unsigned * volatile *g_254 = (void*)0;
static unsigned *g_292 = &g_197[3][8];
static unsigned **g_291 = &g_292;
static unsigned ***g_290 = &g_291;
static unsigned char *g_301 = (void*)0;
static unsigned char g_314 = 254UL;
static int g_347 = 0xD93545C0L;
static unsigned short g_363 = 0x21E6L;
static int g_440 = 0x15E4BD26L;
static unsigned g_499 = 0xBD1D86D9L;
static int **g_534 = (void*)0;
static unsigned g_562 = 0x9C57D891L;
static unsigned short ** volatile *g_578 = &g_124;
static unsigned short ** volatile **g_577 = &g_578;
static char g_645 = (-5L);
static unsigned g_682 = 18446744073709551609UL;
static volatile char g_742[6] = {0x2CL, 0x2CL, (-1L), 0x2CL, 0x2CL, (-1L)};
static volatile char * volatile g_741 = &g_742[0];
static volatile char * volatile * volatile g_740 = &g_741;
static volatile char * volatile * volatile *g_739 = &g_740;
static char g_772 = 0x38L;
static unsigned ****g_803 = &g_290;
static int *g_874 = &g_58[6][3][1];
static unsigned short g_882 = 65531UL;
static unsigned char g_884 = 0x7CL;
static unsigned char **g_972 = &g_301;
static unsigned g_1013 = 0xA5316440L;
static unsigned short g_1073 = 0x57A8L;
static short *g_1078 = &g_89;
static unsigned short *g_1110 = (void*)0;
static unsigned short **g_1109 = &g_1110;
static unsigned char g_1170 = 0UL;
static short **g_1266 = &g_1078;
static unsigned short ***g_1315 = (void*)0;
static unsigned short ****g_1314[5] = {&g_1315, &g_1315, &g_1315, &g_1315, &g_1315};
static int g_1333[2][9][8] = {{{0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}}, {{0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}, {0x24E2678FL, (-1L), 0x09BF383EL, 2L, 0x43E07EC9L, 2L, 0x09BF383EL, (-1L)}}};
static int g_1416 = 0x6AC7A222L;
static int g_1493 = (-3L);
static unsigned char g_1605 = 0x86L;
static int ** volatile g_1620 = &g_874;
static volatile unsigned g_1652 = 0x6E4263DDL;
static short g_1743 = 0x937EL;
static int ** volatile g_1755 = &g_874;
static char *g_1782[9][4] = {{&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}, {&g_772, &g_645, (void*)0, &g_645}};
static char **g_1781 = &g_1782[3][3];
static unsigned char g_1805 = 0x4CL;
static unsigned char * volatile * volatile * volatile g_1815 = (void*)0;
static unsigned char * volatile * volatile * volatile *g_1814 = &g_1815;
static char ***g_1819 = (void*)0;
static char ****g_1818 = &g_1819;
static char *****g_1817 = &g_1818;



static char func_1(void);
static short func_5(int p_6, int p_7, char p_8);
static int func_9(int p_10, int p_11, short p_12);
static char func_20(int p_21, short p_22, unsigned short p_23, int p_24, unsigned p_25);
static char func_28(unsigned p_29, unsigned p_30, short p_31, int p_32);
static unsigned func_33(unsigned short p_34, unsigned char p_35);
static short func_40(unsigned short * p_41, unsigned char p_42, unsigned short * p_43);
static int func_59(unsigned char p_60, int p_61);
static int func_62(unsigned p_63, unsigned short * p_64, unsigned char * p_65, char p_66);
static int * func_68(int p_69);
static char func_1(void)
{
    unsigned short *l_36[1];
    int l_46 = 0x27E80A7CL;
    unsigned char *l_47 = &g_48;
    unsigned l_1194 = 4294967295UL;
    int l_1334 = 4L;
    int *l_1499 = &g_58[0][0][1];
    int *l_1500 = &g_347;
    short *l_1604 = &g_89;
    char *l_1619 = &g_75;
    char **l_1618 = &l_1619;
    char ***l_1617 = &l_1618;
    char ****l_1616 = &l_1617;
    char *****l_1615 = &l_1616;
    char l_1627 = (-1L);
    unsigned l_1660 = 0xCCF5D6CDL;
    char l_1800 = (-10L);
    unsigned char l_1801 = 5UL;
    char l_1839 = 0xA0L;
    short l_1867 = 0x4D1CL;
    int i;
    for (i = 0; i < 1; i++)
        l_36[i] = (void*)0;
    if (((*l_1499) = ((((*l_1604) = (g_2 < (safe_lshift_func_int16_t_s_u(func_5(func_9(g_13, ((*l_1500) = ((*l_1499) = ((safe_sub_func_uint16_t_u_u(0x3358L, (safe_rshift_func_int16_t_s_s(g_13, ((safe_add_func_int8_t_s_s(func_20((~((safe_add_func_int8_t_s_s(func_28(func_33((g_37 ^= 0x2D7AL), ((0xFAL && (((0x6B37L <= func_40((l_36[0] = (void*)0), ((*l_47) = (safe_add_func_int32_t_s_s(((g_13 != l_46) <= 1L), (-1L)))), g_49)) && l_46) > l_46)) ^ 0x7492L)), l_46, l_1194, l_1194), g_1333[1][2][4])) | l_46)), l_1194, l_1194, l_1334, g_1333[1][2][4]), 0x67L)) & g_1493))))) <= l_1194))), l_1334), g_499, g_499), 14)))) > l_1194) != g_1605)))
    {
        unsigned short l_1606 = 0x3107L;
        int *l_1632 = &l_1334;
        int l_1634 = (-6L);
        unsigned char ***l_1659[5][2][2] = {{{&g_972, &g_166}, {&g_972, &g_166}}, {{&g_972, &g_166}, {&g_972, &g_166}}, {{&g_972, &g_166}, {&g_972, &g_166}}, {{&g_972, &g_166}, {&g_972, &g_166}}, {{&g_972, &g_166}, {&g_972, &g_166}}};
        char ****l_1677 = &l_1617;
        unsigned ****l_1695 = &g_290;
        unsigned *****l_1694 = &l_1695;
        unsigned l_1724 = 0x20912112L;
        int l_1725 = 0x8ACD61BCL;
        int l_1732 = 0x8F79FBB7L;
        int i, j, k;
        if (l_1606)
        {
            char l_1609 = (-1L);
            int l_1625[5];
            unsigned char l_1641 = 0xEDL;
            unsigned short l_1678 = 0x4D9DL;
            unsigned l_1686 = 18446744073709551607UL;
            unsigned *****l_1696[1];
            int i;
            for (i = 0; i < 5; i++)
                l_1625[i] = 0L;
            for (i = 0; i < 1; i++)
                l_1696[i] = &l_1695;
            if ((safe_sub_func_int8_t_s_s(((l_1606 > func_9(g_76[0], (*l_1500), l_1606)) == l_1609), (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(0x48L, 3)))) ^ (l_1615 != (void*)0)), 0xABL)))))
            {
                unsigned l_1637 = 4294967295UL;
                int **l_1644 = &l_1500;
                int **l_1645 = &l_1499;
                (*g_1620) = &l_46;

                ;
                for (g_440 = (-26); (g_440 <= (-21)); g_440 = safe_add_func_uint16_t_u_u(g_440, 3))
                {
                    unsigned short l_1642 = 7UL;
                    l_1625[0] &= (safe_lshift_func_uint8_t_u_u(0xFCL, 3));
                    (*l_1499) &= l_1625[0];
                }
                (*l_1645) = ((*l_1644) = (*g_1620));

                ;
                ;
                for (l_1194 = 0; (l_1194 <= 3); l_1194 += 1)
                {
                    for (g_100 = 0; (g_100 <= 3); g_100 += 1)
                    {
                        int ***l_1646 = &g_81[0];
                        int **l_1647 = &l_1499;
                        int i, j;
                        (*l_1500) = g_197[l_1194][(g_100 + 1)];
                        (*l_1632) &= ((&g_874 != (l_1647 = &g_874)) <= ((**l_1644) = ((*g_1078) = (**g_1266))));

                        ;
                    }
                    (*l_1644) = (*g_1620);
                    for (l_46 = 0; (l_46 >= 0); l_46 -= 1)
                    {
                        int i;
                        (*l_1632) &= (-4L);
                        (*l_1632) ^= ((*g_1078) == ((****g_577) = l_1625[0]));
                        (*l_1632) = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0UL, (****g_803))), g_1652));
                    }
                }
            }
            else
            {
                unsigned char ***l_1667[3];
                int l_1672 = 0xDC6819E6L;
                char l_1736 = (-1L);
                int l_1737[6][6] = {{0x99AF2EA5L, (-6L), 1L, (-1L), 0x0A58DCCDL, 0x6BC79A6DL}, {0x99AF2EA5L, (-6L), 1L, (-1L), 0x0A58DCCDL, 0x6BC79A6DL}, {0x99AF2EA5L, (-6L), 1L, (-1L), 0x0A58DCCDL, 0x6BC79A6DL}, {0x99AF2EA5L, (-6L), 1L, (-1L), 0x0A58DCCDL, 0x6BC79A6DL}, {0x99AF2EA5L, (-6L), 1L, (-1L), 0x0A58DCCDL, 0x6BC79A6DL}, {0x99AF2EA5L, (-6L), 1L, (-1L), 0x0A58DCCDL, 0x6BC79A6DL}};
                unsigned char l_1748 = 0xBBL;
                unsigned char l_1752 = 0x3CL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1667[i] = &g_166;
                (*l_1500) = (**g_1620);
                if (((*l_1632) = (safe_sub_func_uint16_t_u_u((~((+l_1609) >= (safe_add_func_uint8_t_u_u((safe_mul_func_int32_t_s_s(((void*)0 == l_1659[4][0][0]), (l_1660 = 0L))), (-1L))))), ((****g_577) = (((*l_1499) = (-8L)) >= ((**g_291) = (****g_803))))))))
                {
                    unsigned char l_1663 = 0x57L;
                    for (g_1493 = 1; (g_1493 >= 0); g_1493 -= 1)
                    {
                        int l_1661[6][6][6] = {{{0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}}, {{0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}}, {{0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}}, {{0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}}, {{0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}}, {{0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}, {0xFE6F121AL, 0x38A3370DL, (-1L), 0x2466813FL, 0L, 0x97CCDE6EL}}};
                        int **l_1662 = &l_1499;
                        int i, j, k;
                        l_1661[2][3][0] = (*g_874);
                        (*l_1662) = (*g_1620);

                        ;
                        return l_1663;
                    }
                    (*l_1499) = l_1663;
                    for (g_363 = 2; (g_363 > 14); g_363 = safe_add_func_int16_t_s_s(g_363, 3))
                    {
                        int **l_1666 = &l_1500;
                        unsigned *l_1670 = (void*)0;
                        unsigned *l_1671 = &g_499;
                        (*l_1666) = func_68(l_1625[4]);

                        ;
                        (*g_874) = (**g_1620);
                        (*l_1499) = (((l_1667[1] != (void*)0) < ((***g_290) = (***g_290))) > (safe_add_func_int8_t_s_s(l_1663, (((*l_1671) ^= ((*l_1500) = (*l_1632))) == ((l_1672 == ((l_1625[0] ^= 0xB9CD3CC2L) > ((safe_div_func_int8_t_s_s(((void*)0 != &g_803), (***g_739))) || l_1609))) >= 0x445C22F5L)))));
                    }

                    ;
                }
                else
                {
                    short l_1685 = (-6L);
                    short **l_1687 = &l_1604;
                    int l_1735 = 0x20AB2AB1L;
                    char *l_1740 = (void*)0;
                    unsigned short *l_1746 = &g_882;
                    char l_1747 = 0x5BL;
lbl_1709:
                    (*l_1632) = ((safe_rshift_func_int16_t_s_s((((***l_1617) = ((void*)0 != l_1677)) | l_1678), func_9((safe_add_func_int32_t_s_s(((*g_874) = (*l_1500)), (*l_1632))), ((*g_49) == ((((((safe_rshift_func_int8_t_s_u((*g_741), 1)) && (safe_rshift_func_int16_t_s_s(0x96CCL, 9))) < (((*g_167) &= (*l_1632)) != 255UL)) >= l_1685) == l_1625[0]) ^ 0UL)), l_1686))) >= 0x1C7D8B54L);
                    if (((*g_1266) == ((*l_1687) = l_36[0])))
                    {
                        unsigned ******l_1693 = (void*)0;
                        int l_1707[6] = {0xA2F8DF51L, (-4L), 0xA2F8DF51L, (-4L), 0xA2F8DF51L, (-4L)};
                        int **l_1708 = &l_1499;
                        int i;
                        (*l_1708) = func_68((func_59((safe_div_func_uint16_t_u_u(((+(((safe_add_func_uint32_t_u_u((****g_803), (safe_unary_minus_func_uint8_t_u(((249UL && (l_1672 && (((****l_1677) |= ((l_1694 = &g_803) == l_1696[0])) <= (0x86L != 1L)))) <= func_59((g_1605 ^= (func_59((func_59((safe_div_func_int16_t_s_s((((*g_167) = ((*l_47) = (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(((*l_1632) > (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((g_772 &= (l_1678 || l_1678)), 7)), (***g_739)))), (*g_874))), l_1685)))) ^ g_347), l_1672)), (*l_1632)) != l_1707[1]), l_1685) ^ g_246)), (*l_1499))))))) | l_1707[1]) && l_1678)) || (***g_290)), l_1685)), (*g_874)) >= 255UL));

                        ;
                        ;
                        (*l_1708) = func_68(l_1672);
                    }
                    else
                    {
                        unsigned short **l_1720[3][10] = {{&l_36[0], &l_36[0], (void*)0, &l_36[0], &l_36[0], &l_36[0], &l_36[0], &l_36[0], (void*)0, &l_36[0]}, {&l_36[0], &l_36[0], (void*)0, &l_36[0], &l_36[0], &l_36[0], &l_36[0], &l_36[0], (void*)0, &l_36[0]}, {&l_36[0], &l_36[0], (void*)0, &l_36[0], &l_36[0], &l_36[0], &l_36[0], &l_36[0], (void*)0, &l_36[0]}};
                        unsigned short **l_1721 = &l_36[0];
                        int i, j;
                        if (g_13)
                            goto lbl_1709;
                        (*l_1632) = ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(func_5((safe_add_func_uint16_t_u_u((*g_49), (safe_rshift_func_uint8_t_u_u(((l_1721 = l_1720[2][2]) != (void*)0), (*l_1500))))), (0xCFL > (safe_sub_func_int32_t_s_s(0x6AC94959L, 0xC9C1A935L))), (**g_740)), 4)), l_1641)), 0xB9601915L)) < l_1724);

                        ;
                        (*l_1500) = l_1725;
                    }

                    ;
                    ;
                    ;
                    l_1737[4][3] &= ((*l_1500) | (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_1672, func_9((safe_rshift_func_int16_t_s_u(0L, func_62(l_1685, ((**g_578) = (*g_124)), (*g_972), l_1732))), ((l_1735 |= (safe_mod_func_uint32_t_u_u((**g_291), (*g_292)))) < 0xF1L), l_1736))), (*g_292))));
                    if ((((safe_div_func_int8_t_s_s((**g_740), (*l_1632))) <= (((*l_1632) < ((((*g_167) || (l_1740 != &g_75)) ^ (safe_mod_func_int8_t_s_s(0x1AL, ((*l_47) = (*l_1632))))) & g_200[0])) >= g_499)) ^ 0x39L))
                    {
                        unsigned *l_1749[10] = {&g_562, &g_13, (void*)0, (void*)0, &g_13, &g_562, &g_13, (void*)0, (void*)0, &g_13};
                        int **l_1750 = &g_874;
                        int i;
                        (*l_1500) |= (-1L);
                        l_1735 = g_1743;
                        (*l_1750) = func_68(func_28((l_1747 >= (*g_874)), (*l_1499), func_28((**g_291), (g_562 = func_9(l_1735, l_1748, l_1748)), (**g_1266), l_1737[4][4]), (*l_1500)));

                        ;
                    }
                    else
                    {
                        int **l_1751 = &l_1499;
                        (*l_1751) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                ;
                (*l_1632) = (*l_1500);
                (*l_1632) = 0x8EDB6926L;
            }

            ;
            ;
            ;
            ;
            ;
            (*g_874) = l_1625[0];
            (*g_1755) = func_68(((((**g_124) = (safe_lshift_func_int8_t_s_u((***g_739), 4))) | (*l_1632)) >= (*l_1500)));

            ;
            (*g_874) &= l_1625[3];
        }
        else
        {
            unsigned l_1756 = 0xEDD677E5L;
            int *l_1759 = &g_58[1][3][1];
            short l_1765 = (-5L);
            char **l_1783 = &g_1782[3][3];
            int l_1785 = 0x1220F4E8L;
            (*l_1500) ^= l_1756;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        unsigned char l_1789 = 1UL;
        int *l_1797 = &l_1334;
        int l_1802 = 0x7FAD5D80L;
        int *l_1803 = (void*)0;
        int *l_1804[2][5];
        unsigned char **l_1842 = (void*)0;
        unsigned l_1845 = 1UL;
        unsigned l_1846 = 0UL;
        char ****l_1850 = &g_1819;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_1804[i][j] = &l_46;
        }
        for (g_347 = 19; (g_347 > (-19)); g_347 = safe_sub_func_uint8_t_u_u(g_347, 2))
        {
            (*l_1499) &= l_1789;
        }
        g_1805 |= ((safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_uint32_t_u(l_1789)) < ((*g_167) = (~(safe_div_func_int16_t_s_s(func_5(func_20((*g_874), (*g_1078), (0x3AB7L & (safe_lshift_func_uint16_t_u_u((((*l_1797) &= ((*l_1500) |= l_1789)) && (safe_lshift_func_uint8_t_u_s((*l_1499), (***g_739)))), ((l_1800 ^ ((***g_290) >= l_1789)) & 0UL)))), (*l_1499), g_58[5][5][1]), g_1493, l_1789), l_1801))))) >= g_1073) >= l_1802), 10)) != 0xCEA9552BL);
lbl_1826:
        for (g_884 = 0; (g_884 <= 37); g_884++)
        {
            for (g_75 = (-11); (g_75 >= (-16)); g_75 = safe_sub_func_int32_t_s_s(g_75, 6))
            {
                for (g_1073 = 0; (g_1073 != 28); g_1073++)
                {
                    int l_1825[8][9][3] = {{{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}, {{1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}, {1L, 8L, 9L}}};
                    int i, j, k;
                    for (g_246 = 0; (g_246 <= 1); g_246 += 1)
                    {
                        char *****l_1816 = &l_1616;
                        char ******l_1820 = &g_1817;
                        int i, j;
                        (*l_1797) = (((safe_rshift_func_int8_t_s_u(0L, ((void*)0 == g_1814))) || g_197[(g_246 + 2)][g_246]) == ((l_1816 != ((*l_1820) = g_1817)) < (((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x396264CBL, g_200[g_246])), 4)) == (**g_1266)) > 255UL)));
                        if ((*g_874))
                            break;
                        (*l_1797) = l_1825[5][6][2];
                    }
                    (*g_1620) = (*g_1755);
                }
            }
            if (g_1170)
                goto lbl_1826;
        }
        if ((~(safe_rshift_func_uint16_t_u_s((((**g_1266) != (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((*g_167) = ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(l_1839, ((1L | (safe_lshift_func_int16_t_s_s((l_1842 != l_1842), ((safe_add_func_int16_t_s_s(func_59((func_59((*l_1797), l_1845) <= (**g_291)), (*l_1499)), (*l_1797))) == 0xBB7F7C62L)))) != 2L))) != (**g_1755)), (*l_1500))) || l_1846)), (*l_1797))), 3)), 0x6EL))) || 0x8FFEL), (*g_1078)))))
        {
            int **l_1847 = &g_874;
            (*l_1847) = &l_46;

            ;
        }
        else
        {
            char *****l_1858 = &g_1818;
            int l_1865[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1865[i] = 0x7F2B9CA9L;
            for (l_1789 = (-24); (l_1789 == 36); l_1789 = safe_add_func_int8_t_s_s(l_1789, 3))
            {
                short l_1864[5][1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1864[i][j] = (-1L);
                }
                (*l_1797) = (((*l_1499) = (**g_1620)) >= (~(((*l_1615) = l_1850) != (void*)0)));

                ;
                for (l_46 = 0; (l_46 >= 0); l_46 -= 1)
                {
                    int i, j;
                    for (g_314 = 0; (g_314 <= 0); g_314 += 1)
                    {
                        int i, j;
                        if (g_76[l_46])
                            break;
                    }
                    if (g_76[l_46])
                        continue;
                    for (g_1605 = 0; (g_1605 <= 1); g_1605 += 1)
                    {
                        int i, j, k;
                        return g_116[(l_46 + 3)][(l_46 + 1)][(l_46 + 2)];
                    }
                    for (g_314 = 0; (g_314 <= 3); g_314 += 1)
                    {
                        char ******l_1859 = &l_1858;
                        int *l_1866 = &g_246;
                        int i, j;
                        l_1804[l_46][g_314] = func_68(((*l_1866) = (safe_add_func_int32_t_s_s(func_9((!g_197[g_314][(g_314 + 3)]), ((g_197[g_314][(l_46 + 3)] <= (safe_mod_func_uint8_t_u_u((g_197[g_314][(l_46 + 3)] || ((!(safe_unary_minus_func_uint16_t_u((safe_div_func_int8_t_s_s(func_9((((**g_124) ^ 0x6B79L) == (&g_1818 == ((*l_1859) = l_1858))), ((safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_1864[2][0], (**g_1266))) < 0xC31AL), (*l_1500))) >= 0xA1L), (**g_1266)), 0xADL))))) != l_1865[5])), g_197[g_314][(g_314 + 3)]))) & 0L), (*g_1078)), (-8L)))));
                        (*g_874) = l_1867;
                    }
                }
            }

            ;

            (*l_1500) &= (**g_1755);
            (*l_1500) = 0L;
            (*g_1620) = (*g_1620);
        }

        ;
        ;

    }



    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return (*g_741);


}







static short func_5(int p_6, int p_7, char p_8)
{
    int *l_1503 = &g_347;
    unsigned short ***l_1507 = &g_124;
    short **l_1511 = &g_1078;
    unsigned l_1523 = 0xD47C8B93L;
    int ****l_1567 = (void*)0;
lbl_1568:
    for (g_75 = 0; (g_75 <= 3); g_75 += 1)
    {
        int **l_1502[9] = {&g_874, &g_874, &g_874, &g_874, &g_874, &g_874, &g_874, &g_874, &g_874};
        unsigned short ***l_1504[3];
        unsigned short ****l_1505 = &g_1315;
        unsigned short ****l_1506[4];
        short l_1542[1];
        int i;
        for (i = 0; i < 3; i++)
            l_1504[i] = &g_124;
        for (i = 0; i < 4; i++)
            l_1506[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1542[i] = 0L;
        l_1503 = &p_7;

        ;
        (*l_1503) ^= (((l_1507 = ((*l_1505) = l_1504[2])) != (*g_577)) != 5L);

        ;
        (*g_874) |= (*l_1503);
        l_1503 = l_1503;
        for (g_772 = 0; (g_772 <= 3); g_772 += 1)
        {
            short l_1510 = (-9L);
            short ***l_1512 = &g_1266;
            short **l_1514 = &g_1078;
            short ***l_1513 = &l_1514;
            unsigned char l_1524 = 0UL;
            unsigned char *l_1525 = (void*)0;
            unsigned char *l_1526 = (void*)0;
            unsigned char *l_1527[10][1];
            int l_1539 = 0x02610C4BL;
            int *l_1564 = (void*)0;
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1527[i][j] = &g_1170;
            }
            if (((g_197[g_772][g_75] == (*g_167)) & (p_7 || (safe_sub_func_int16_t_s_s((l_1510 > ((((*l_1512) = l_1511) != ((*l_1513) = &g_1078)) || (safe_sub_func_uint8_t_u_u(p_8, ((*g_1078) <= ((safe_add_func_uint8_t_u_u((g_884 |= (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(func_28(l_1523, l_1510, p_6, l_1524), p_8)), p_6))), 246UL)) | (*l_1503))))))), 2L)))))
            {
                unsigned l_1528 = 0xB92B1FE9L;
                if (((l_1528 >= func_28((***g_290), func_28((!(safe_sub_func_int16_t_s_s((l_1528 & (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((*g_49), (safe_sub_func_int32_t_s_s((+(safe_lshift_func_int16_t_s_u((!((&l_1511 == &l_1514) && (l_1539 < func_59((safe_add_func_uint8_t_u_u((p_6 == (((***g_1315) & 0xC86BL) ^ p_8)), l_1539)), p_7)))), 11))), (*g_874))))), l_1528))), l_1528))), p_8, l_1542[0], l_1528), p_7, g_197[g_772][g_75])) ^ p_6))
                {
                    unsigned short l_1546 = 0x5C20L;
                    unsigned ***l_1547 = &g_291;
                    unsigned char ***l_1555[4][8][8] = {{{&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}}, {{&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}}, {{&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}}, {{&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}, {&g_972, &g_166, (void*)0, &g_972, &g_166, &g_972, (void*)0, &g_166}}};
                    int i, j, k;
                    for (g_884 = 0; (g_884 <= 3); g_884 += 1)
                    {
                        char *l_1554[3][8][1] = {{{&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}}, {{&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}}, {{&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}, {&g_645}}};
                        int l_1562 = 0x8E992776L;
                        int i, j, k;
                        (*l_1503) = (safe_unary_minus_func_int8_t_s((g_645 ^= (~((((safe_mod_func_uint16_t_u_u(l_1546, func_9(((g_197[g_772][g_884] = ((l_1546 || ((***l_1507) = (&l_1514 == &g_1266))) | ((void*)0 != l_1547))) > l_1524), p_8, ((((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(0xD9L, p_7)), 9)), 0x67L)) & p_8) ^ l_1528) && 1L)))) == 255UL) | (*l_1503)) != 0x83096559L)))));
                        if (p_6)
                            continue;
                        (*l_1503) &= func_59(func_59(l_1539, ((void*)0 == l_1555[1][1][5])), p_8);
                        (*g_874) = (((((*l_1503) &= (p_8 = p_8)) <= (safe_add_func_int16_t_s_s((-8L), (255UL > (g_645 = ((func_59(func_9(g_116[2][0][5], ((-4L) == ((p_6 < p_6) >= (safe_lshift_func_uint16_t_u_s(65526UL, 6)))), (l_1562 = (safe_lshift_func_int16_t_s_u((1L <= (****g_803)), 2)))), p_6) ^ (-9L)) & (-10L))))))) && 0xE9C3L) == 0UL);
                    }
                }
                else
                {
                    int *l_1563[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1563[i] = (void*)0;
                    if ((*g_874))
                        break;
                    (*l_1503) = (*l_1503);
                    l_1564 = (l_1563[9] = &p_7);


                    ;
                }

                ;
                (*g_874) = (*g_874);
                (*g_874) ^= (0xCB1DADAAL < ((*l_1503) ^= (safe_rshift_func_uint8_t_u_u(((void*)0 != l_1567), 7))));
            }
            else
            {
                return p_6;
            }

            ;
            return p_8;
        }
    }
    if ((*l_1503))
    {
        unsigned char l_1581 = 0xFEL;
        int l_1595[6][1][2] = {{{0x1C0B489CL, 0xFCAF17E1L}}, {{0x1C0B489CL, 0xFCAF17E1L}}, {{0x1C0B489CL, 0xFCAF17E1L}}, {{0x1C0B489CL, 0xFCAF17E1L}}, {{0x1C0B489CL, 0xFCAF17E1L}}, {{0x1C0B489CL, 0xFCAF17E1L}}};
        int i, j, k;
        if (g_72)
            goto lbl_1568;
        for (g_13 = (-1); (g_13 <= 43); ++g_13)
        {
            char *l_1571 = &g_645;
            int l_1572 = 0x2F067D48L;
            int *l_1576 = (void*)0;
            if ((((*l_1571) = (*l_1503)) || (((0xC9950F27L ^ p_7) && p_6) ^ (l_1572 || (safe_rshift_func_int8_t_s_u((!(255UL <= (!(0x4EB2B5B1L ^ p_7)))), 7))))))
            {
                int **l_1575[7][7][5] = {{{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}, {{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}, {{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}, {{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}, {{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}, {{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}, {{&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}, {&g_874, (void*)0, &l_1503, &l_1503, &g_874}}};
                int i, j, k;
                l_1576 = &p_7;

                ;
                if ((*g_874))
                {
                    int l_1584 = 0xB3EC3F9DL;
                    char **l_1593[7];
                    char ***l_1592[8] = {&l_1593[2], &l_1593[2], &l_1593[2], &l_1593[2], &l_1593[2], &l_1593[2], &l_1593[2], &l_1593[2]};
                    char ****l_1591 = &l_1592[7];
                    char *****l_1594 = &l_1591;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1593[i] = &l_1571;
                    (*g_874) = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((*l_1503) = p_6), ((*g_49) &= (1L || ((l_1572 <= l_1581) & p_8))))), ((safe_add_func_int32_t_s_s((!(l_1584 >= (l_1595[3][0][1] &= (safe_div_func_int32_t_s_s(0x85309DDFL, (safe_mod_func_uint32_t_u_u(p_6, (safe_rshift_func_uint8_t_u_s((((*l_1594) = l_1591) != &g_739), 6))))))))), (*g_874))) == p_6)));
                }
                else
                {
                    if (p_8)
                    {
                        (*g_874) = (*g_874);
                        if (p_8)
                            break;
                    }
                    else
                    {
                        if (p_8)
                            break;
                    }
                }
            }
            else
            {
                unsigned l_1600 = 0x7D8B7FE4L;
                int *l_1601 = &g_58[5][2][1];
                int **l_1602 = &l_1576;
                for (g_1170 = 0; (g_1170 == 34); g_1170 = safe_add_func_int8_t_s_s(g_1170, 5))
                {
                    for (g_246 = 0; (g_246 != (-29)); g_246 = safe_sub_func_int16_t_s_s(g_246, 5))
                    {
                        return l_1600;
                    }
                    for (g_77 = 0; (g_77 <= 1); g_77 += 1)
                    {
                        int i, j, k;
                        return g_1333[g_77][(g_77 + 4)][(g_77 + 3)];
                    }
                }
                (*l_1602) = l_1601;

                ;
            }

            ;
            if (p_6)
                continue;
            if ((*l_1576))
                continue;
        }
    }
    else
    {
        int l_1603 = 0x93903B5CL;
        (*g_874) &= ((l_1603 >= (*l_1503)) ^ (*g_292));
    }
    (*g_874) = (p_8 && ((*l_1503) ^= p_6));
    return p_7;
}







static int func_9(int p_10, int p_11, short p_12)
{
    short l_1501 = 0xC289L;
    return l_1501;
}







static char func_20(int p_21, short p_22, unsigned short p_23, int p_24, unsigned p_25)
{
    char l_1339 = (-7L);
    unsigned short *l_1341 = &g_200[1];
    int **l_1351 = (void*)0;
    unsigned char l_1361 = 0xAAL;
    short l_1390 = 0xD7D0L;
    int ***l_1406 = &g_534;
    int l_1454[8] = {(-9L), (-9L), 0x9B88A710L, (-9L), (-9L), 0x9B88A710L, (-9L), (-9L)};
    short l_1485 = (-1L);
    unsigned l_1487[5];
    int *l_1489 = &g_58[2][3][0];
    int l_1490 = (-1L);
    int *l_1496 = (void*)0;
    int *l_1497 = &g_72;
    unsigned *l_1498 = &g_116[5][0][0];
    int i;
    for (i = 0; i < 5; i++)
        l_1487[i] = 0x5507053CL;
    (*g_874) = 0L;
    for (g_1013 = (-23); (g_1013 == 31); g_1013++)
    {
        unsigned l_1348 = 0x064A7972L;
        for (p_22 = (-29); (p_22 >= (-10)); ++p_22)
        {
            unsigned short *l_1340[2];
            unsigned char *l_1342 = &g_884;
            int l_1347 = 8L;
            int *l_1349 = &g_440;
            unsigned short l_1357 = 0x33FBL;
            int i;
            for (i = 0; i < 2; i++)
                l_1340[i] = &g_37;
            (*l_1349) |= ((l_1348 = func_62((l_1339 | ((*g_874) = p_24)), (l_1341 = l_1340[0]), l_1342, (0xAD9A3724L || ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_1347, p_25)), 1)) && p_22)))) & (**g_291));


            ;
            for (g_363 = 0; (g_363 <= 1); g_363 += 1)
            {
                short *l_1350 = &g_89;
                unsigned l_1359 = 1UL;
                int **l_1364 = &l_1349;
                int i, j, k;
                for (g_882 = 0; (g_882 <= 1); g_882 += 1)
                {
                    char *l_1355 = (void*)0;
                    char *l_1356 = &g_645;
                    int i, j, k;
                    if (((l_1350 == (*g_1266)) > (((l_1351 != (void*)0) || (((*l_1356) = (1UL != ((safe_div_func_uint32_t_u_u(g_1333[g_363][(g_882 + 4)][(g_363 + 1)], (*l_1349))) != (safe_unary_minus_func_uint16_t_u(((**g_124) = g_1333[g_363][(g_882 + 4)][(g_363 + 1)])))))) < l_1357)) > 0L)))
                    {
                        int i, j, k;
                        g_58[(g_882 + 6)][(g_882 + 4)][g_363] = 8L;
                        if (p_23)
                            continue;
                    }
                    else
                    {
                        int **l_1358 = &l_1349;
                        int l_1360 = 0xEF77FC8AL;
                        int i, j, k;
                        (*l_1358) = &p_21;

                        ;
                        if (l_1359)
                            continue;
                        (*g_874) = (((l_1360 ^ l_1361) != (!func_59(((*l_1342) = func_59((*g_167), (safe_rshift_func_int16_t_s_u(0L, 15)))), (g_1333[g_882][(g_882 + 1)][(g_363 + 1)] = 0xB4C89EEFL)))) <= (-10L));
                    }
                }

                ;
                (*l_1364) = &g_1333[g_363][(g_363 + 1)][(g_363 + 6)];

                ;
            }

            ;
        }
        for (l_1348 = 6; (l_1348 >= 13); l_1348 = safe_add_func_int8_t_s_s(l_1348, 9))
        {
            if ((*g_874))
                break;
        }
    }

    ;
    for (g_363 = 0; (g_363 <= 1); g_363 += 1)
    {
        int *l_1385 = &g_246;
        int **l_1384 = &l_1385;
        int l_1394 = (-1L);
        char l_1426 = 0x83L;
        unsigned char *l_1434 = &l_1361;
        int ****l_1447[1][5][1];
        int l_1469[6][8][2] = {{{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}, {{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}, {{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}, {{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}, {{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}, {{(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}, {(-6L), 0L}}};
        int l_1475 = (-9L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1447[i][j][k] = &l_1406;
            }
        }
        for (g_100 = 0; (g_100 <= 0); g_100 += 1)
        {
            int l_1369 = (-1L);
            unsigned short *l_1374 = (void*)0;
            unsigned char l_1395 = 1UL;
            int l_1476 = 7L;
            unsigned *l_1486 = &g_77;
            for (g_347 = 0; (g_347 <= 1); g_347 += 1)
            {
                unsigned char l_1379 = 1UL;
                char l_1380 = 1L;
                unsigned short *l_1393 = &g_50;
                int ****l_1448 = &l_1406;
                int *l_1470 = &l_1469[2][3][1];
                int i, j, k;
            }
            (*g_874) = l_1485;
            (*g_874) = (((*l_1341) = (****g_577)) != (((void*)0 == l_1351) || (((p_25 > ((*l_1486) = ((***g_290) = func_59((*g_167), p_21)))) || ((**g_1266) |= (l_1476 == ((***g_290) |= p_23)))) == l_1487[4])));
            for (g_1170 = 0; (g_1170 <= 1); g_1170 += 1)
            {
                int i, j, k;
                for (g_246 = 0; (g_246 <= 4); g_246 += 1)
                {
                    int **l_1488 = &g_874;
                    int i, j, k;
                    (*l_1488) = func_68(g_58[(g_1170 + 6)][g_363][g_1170]);

                    ;
                    (*g_874) |= (((*g_167) = (g_58[(g_1170 + 1)][(g_1170 + 3)][g_100] | g_58[(g_246 + 5)][g_363][g_363])) <= g_1333[(g_100 + 1)][(g_100 + 1)][(g_246 + 2)]);
                }
                l_1489 = &g_58[(g_100 + 5)][(g_363 + 2)][g_1170];
            }
        }
    }
    (*l_1489) = ((((*l_1498) &= (func_28((****g_803), func_59(l_1490, func_62(((*g_167) && ((65534UL <= ((*g_1078) |= 0L)) == g_1493)), (*g_124), (*g_972), ((safe_lshift_func_uint8_t_u_u((((*l_1497) = ((*l_1489) = p_25)) == 0L), (*g_167))) <= 255UL))), p_22, p_22) != p_24)) ^ p_22) >= p_24);


    return (*l_1497);
}







static char func_28(unsigned p_29, unsigned p_30, short p_31, int p_32)
{
    char *l_1198 = &g_75;
    char **l_1197 = &l_1198;
    int l_1199 = 0xCE19DC65L;
    short *l_1200 = &g_89;
    int *l_1201 = (void*)0;
    int *l_1202 = &g_72;
    int *l_1260 = &g_246;
    int **l_1259[9][9] = {{&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}, {&l_1260, (void*)0, (void*)0, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260, &l_1260}};
    int i, j;
    return g_75;
}







static unsigned func_33(unsigned short p_34, unsigned char p_35)
{
    int l_1042 = 0xA684612CL;
    unsigned short ***l_1043 = (void*)0;
    unsigned short ***l_1044 = &g_124;
    unsigned short ****l_1045 = &l_1044;
    short *l_1076 = &g_89;
    int *l_1081 = &g_58[2][3][0];
    unsigned char *l_1122 = &g_76[0];
    unsigned short *l_1128 = &g_882;
    unsigned char l_1164[3];
    int l_1193 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_1164[i] = 1UL;
    (*g_874) ^= l_1042;
    (*g_874) = (*g_874);
    if (((*g_874) = (l_1043 != ((*l_1045) = l_1044))))
    {
        unsigned ****l_1052 = &g_290;
        char *l_1057 = &g_772;
        int l_1071 = 1L;
        short *l_1077 = &g_89;
        int *l_1098 = &g_72;
        int *l_1099 = &l_1071;
        int *l_1124[9][5] = {{&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}, {&g_246, &l_1042, &l_1042, &l_1042, &g_246}};
        int **l_1123[4] = {&l_1124[6][1], &l_1124[6][2], &l_1124[6][1], &l_1124[6][2]};
        unsigned l_1133 = 0UL;
        unsigned short *l_1171 = (void*)0;
        int i, j;
        for (g_562 = 0; (g_562 >= 3); g_562 = safe_add_func_uint16_t_u_u(g_562, 1))
        {
            unsigned char l_1058 = 0UL;
            int *l_1072[10][8] = {{&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}, {&g_72, &l_1071, &l_1071, &g_72, (void*)0, &g_72, &l_1071, &l_1071}};
            int i, j;
            (*g_874) |= ((void*)0 == (*g_803));
            (*g_874) &= (((*g_803) != (*g_803)) == func_59((safe_lshift_func_int16_t_s_s((0x7EL == (((void*)0 == l_1052) <= p_35)), 15)), ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_1042 > (l_1057 != &g_75)), l_1058)), 0x190AL)) <= p_34)));
            g_1073 = ((*g_874) = (((((p_35 >= (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((p_34 < l_1058), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(0x6B59L, (((safe_rshift_func_int16_t_s_u(0L, (**g_124))) != ((!(safe_div_func_int16_t_s_s((func_59((!(0xEFD4L == g_77)), l_1058) | (**g_291)), p_35))) ^ g_89)) && l_1042))), 13)))), p_35))) ^ l_1071) & p_35) | 0x87L) != g_76[0]));
        }
        if ((0x4DL <= (safe_add_func_uint16_t_u_u(0x9C45L, ((l_1076 = &g_89) == (g_1078 = l_1077))))))
        {
            int *l_1079 = &g_58[2][3][0];
            int **l_1080[7][10][3] = {{{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}, {{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}, {{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}, {{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}, {{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}, {{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}, {{&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}, {&l_1079, (void*)0, &g_874}}};
            unsigned short **l_1108 = &g_49;
            unsigned short l_1115[5][10][5] = {{{1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}}, {{1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}}, {{1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}}, {{1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}}, {{1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}, {1UL, 0xEF6FL, 0xA065L, 0xEF6FL, 1UL}}};
            int i, j, k;
            l_1081 = l_1079;
            for (g_50 = 21; (g_50 <= 26); ++g_50)
            {
                unsigned char l_1088 = 249UL;
                int *l_1090 = &g_347;
                unsigned *****l_1104[6][7][5] = {{{&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}}, {{&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}}, {{&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}}, {{&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}}, {{&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}}, {{&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}, {&l_1052, &g_803, (void*)0, &l_1052, &l_1052}}};
                int i, j, k;
                for (p_35 = 20; (p_35 != 11); --p_35)
                {
                    int *l_1089 = &g_72;
                    for (g_246 = 0; (g_246 <= 1); g_246 += 1)
                    {
                        int i, j, k;
                        g_58[(g_246 + 1)][(g_246 + 4)][g_246] = g_58[(g_246 + 8)][g_246][g_246];
                    }
                    if ((safe_div_func_int32_t_s_s(p_34, l_1088)))
                    {
                        char l_1095 = 1L;
                        l_1089 = &l_1071;

                        ;
                        l_1090 = l_1090;
                        l_1089 = (void*)0;

                        ;
                        (*l_1081) = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((***g_578), func_59(p_34, ((-1L) & 0xAEL)))), ((0xCB4CL == (((*l_1081) || (0x6E2A9062L <= (l_1095 & p_34))) && p_35)) & (*g_1078))));
                    }
                    else
                    {
                        (*l_1090) ^= (*g_874);
                        (*l_1079) |= 0x1F042353L;
                    }

                    ;
                    for (g_37 = 14; (g_37 != 53); g_37++)
                    {
                        l_1099 = (l_1098 = l_1081);

                        ;
                        ;
                    }
                }
                for (p_35 = 27; (p_35 != 57); ++p_35)
                {
                    unsigned short *l_1105 = &g_882;
                    int l_1113[3];
                    unsigned l_1116 = 4294967295UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1113[i] = 0xAC2DB96CL;
                    if (((((*l_1099) || (safe_div_func_uint16_t_u_u(((**g_124) >= ((*l_1105) ^= (l_1104[0][5][0] != (void*)0))), p_34))) != (safe_div_func_uint16_t_u_u((***g_578), ((l_1108 != (g_1109 = &g_49)) | ((safe_div_func_int16_t_s_s(1L, p_34)) > p_34))))) != l_1113[2]))
                    {
                        (*l_1099) &= p_35;
                    }
                    else
                    {
                        int l_1114 = 0L;
                        l_1115[0][7][2] ^= ((*l_1090) |= func_59(p_35, (l_1114 & (~(*l_1098)))));
                    }

                    ;
                    return l_1116;
                }
            }

            ;
            ;
        }
        else
        {
            int *l_1127 = &g_440;
            if (p_35)
            {
                unsigned *l_1121[9] = {&g_682, &g_682, &g_682, &g_682, &g_682, &g_682, &g_682, &g_682, &g_682};
                int *l_1144 = &g_440;
                unsigned short *l_1145 = (void*)0;
                int i;
                (*g_874) = ((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((func_62(((*l_1098) ^= p_35), &p_34, l_1122, g_1073) | (l_1123[3] != g_534)) || ((*g_1078) & func_59(((((safe_rshift_func_int8_t_s_u((p_34 <= (*l_1081)), p_34)) || 0L) == (*l_1098)) || p_35), p_35))), 0x9BL)), (*g_874))) < p_35);


                if (((*g_874) = p_34))
                {
                    unsigned char **l_1132 = &g_301;
                    int l_1138 = 0L;
                    l_1127 = l_1081;

                    ;
                    (*l_1098) ^= (*l_1127);
                    if (((***g_577) == (l_1128 = (***l_1045))))
                    {
                        (*l_1099) = (func_59((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((&l_1122 == l_1132))), p_34)), l_1133) == ((*l_1098) = (safe_div_func_uint32_t_u_u(((*g_292) = (*l_1098)), ((safe_mod_func_uint8_t_u_u((*g_167), p_34)) ^ 0L)))));
                        (*l_1127) = (p_35 != (****g_577));
                    }
                    else
                    {
                        return (*g_292);
                    }

                    ;
                    (*l_1098) = l_1138;
                }
                else
                {
                    int *l_1141 = &g_440;
                    for (g_562 = 0; (g_562 == 31); ++g_562)
                    {
                        int **l_1142 = (void*)0;
                        int **l_1143[8][1];
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1143[i][j] = &l_1141;
                        }
                        l_1098 = l_1141;

                        ;
                        l_1144 = l_1121[3];

                        ;
                        return (****g_803);
                    }
                    (*g_874) = (((*g_124) = (**g_578)) == l_1145);
                }

                ;
                ;
            }
            else
            {
                (*l_1081) &= (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0xF652B54EL | 0UL), (**g_291))), 0x5BC1L));
                return p_35;
            }


            ;
            ;
            return p_34;
        }

        ;
        ;
        (*l_1098) = (*l_1098);
        for (g_363 = (-11); (g_363 != 20); g_363++)
        {
            char l_1172[6][3][1] = {{{(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}}, {{(-2L)}, {(-2L)}, {(-2L)}}};
            short l_1175 = 1L;
            int l_1185[7][1];
            unsigned short *l_1192 = &g_37;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1185[i][j] = 0x4CAF3659L;
            }
            (*l_1081) ^= p_35;
            if ((*g_874))
            {
                return p_34;
            }
            else
            {
                int l_1169 = 0x63972E1DL;
                for (l_1133 = (-17); (l_1133 >= 59); l_1133++)
                {
                    int *l_1184 = &g_72;
                    g_440 |= ((*g_874) = (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((****g_803) ^= (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_34, (p_35 || func_40(((*g_1109) = (*g_1109)), (safe_lshift_func_uint16_t_u_s(((****l_1045) &= l_1164[2]), ((safe_lshift_func_int16_t_s_s(func_59(((safe_add_func_int8_t_s_s(func_59(l_1169, p_34), ((*g_167) |= func_59(p_35, p_35)))) == 0xF773A330L), p_35), (*l_1099))) || g_1170))), l_1171)))), l_1172[4][0][0]))) ^ p_35), 13)), p_35)));
                    if ((*l_1081))
                        continue;
                    (*l_1099) = (safe_rshift_func_int16_t_s_s((*l_1099), ((((*l_1057) = 0xBFL) >= ((l_1175 < p_34) | (safe_div_func_int8_t_s_s((p_35 && func_62((safe_rshift_func_int8_t_s_s((((safe_div_func_int16_t_s_s(func_59(func_59(l_1172[4][0][0], ((*l_1184) = ((safe_div_func_int8_t_s_s(p_34, p_34)) >= ((func_59((g_884 == g_882), (*l_1081)) <= 0L) > p_34)))), l_1185[0][0]), p_35)) == (-10L)) < 0x3EEBL), 6)), (*g_124), (*g_972), p_35)), (*l_1081))))) > 0x86C84A9AL)));
                }
                (*l_1081) = ((safe_div_func_int8_t_s_s(func_40((**g_578), ((*g_167) = (((*l_1081) = (g_1073 ^ ((((safe_lshift_func_uint16_t_u_s(p_34, 13)) & p_35) > l_1169) && p_34))) <= (p_34 == ((p_34 > 4294967295UL) < (****g_803))))), l_1192), l_1172[4][0][0])) < p_34);
                if (l_1185[0][0])
                    break;
            }
        }
    }
    else
    {
        l_1193 |= (*g_874);
    }
    return (*l_1081);
}







static short func_40(unsigned short * p_41, unsigned char p_42, unsigned short * p_43)
{
    unsigned char l_51 = 0xDAL;
    int l_52 = 0x8CBDB62BL;
    char l_53[4] = {(-1L), 0L, (-1L), 0L};
    int *l_799 = &g_347;
    int *l_800[10] = {(void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72};
    unsigned ***l_845 = &g_291;
    unsigned char l_881[5][6][1] = {{{0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}}, {{0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}}, {{0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}}, {{0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}}, {{0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}, {0xC2L}}};
    unsigned char l_883 = 0x80L;
    unsigned l_904 = 0UL;
    unsigned l_912 = 0UL;
    char l_946 = (-5L);
    unsigned char l_973[7][9][4] = {{{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}, {{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}, {{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}, {{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}, {{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}, {{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}, {{0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}, {0x69L, 0UL, 0UL, 0x07L}}};
    int **l_1040[7][4][4] = {{{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}, {{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}, {{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}, {{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}, {{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}, {{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}, {{&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}, {&g_874, &g_874, &g_874, &g_874}}};
    int *l_1041 = &g_58[2][3][0];
    int i, j, k;
    l_52 = l_51;
    for (p_42 = 0; (p_42 <= 3); p_42 += 1)
    {
        int *l_56 = &l_52;
        int *l_57 = &g_58[2][3][0];
        unsigned short *l_67[4][2];
        int *l_780 = &g_347;
        int **l_798[1];
        unsigned *****l_832 = (void*)0;
        unsigned ***l_847[6] = {&g_291, (void*)0, &g_291, (void*)0, &g_291, (void*)0};
        unsigned l_913[6] = {0x0BBDA926L, 4294967295UL, 0x0BBDA926L, 4294967295UL, 0x0BBDA926L, 4294967295UL};
        unsigned char l_947 = 1UL;
        short l_981 = 6L;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_67[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
            l_798[i] = &l_56;
        (*l_780) |= (((safe_rshift_func_int16_t_s_s(l_53[p_42], 8)) >= (((*l_57) ^= ((*l_56) = ((&g_48 == &p_42) ^ (l_53[p_42] ^ l_53[p_42])))) ^ func_59(p_42, func_62(g_13, l_67[0][1], &g_48, p_42)))) | l_51);


    }
    l_1041 = &l_52;

    ;
    return g_50;
}







static int func_59(unsigned char p_60, int p_61)
{
    unsigned short *l_180 = &g_50;
    unsigned char *l_181 = &g_76[0];
    short l_182 = 0L;
    unsigned *l_185 = &g_116[2][0][5];
    int l_186 = 0x2175B47AL;
    char *l_187[4] = {&g_75, &g_75, &g_75, &g_75};
    int l_188 = 0xF836BFB3L;
    int *l_251 = &l_188;
    int l_304 = 0xE85BEE4BL;
    unsigned char l_330[3][4][4] = {{{0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}}, {{0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}}, {{0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}, {0x62L, 255UL, 0x5CL, 0UL}}};
    unsigned char *l_342 = &l_330[0][2][2];
    int *l_345 = &g_72;
    int *l_399 = &g_246;
    int **l_398 = &l_399;
    int l_487 = 1L;
    short l_558[1];
    unsigned char ***l_572 = &g_166;
    unsigned short ***l_660 = &g_124;
    unsigned short ****l_659 = &l_660;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_558[i] = (-1L);
    return p_60;
}







static int func_62(unsigned p_63, unsigned short * p_64, unsigned char * p_65, char p_66)
{
    unsigned l_70 = 0x9C1D55E0L;
    int *l_173[1];
    int **l_172[8] = {&l_173[0], &l_173[0], &l_173[0], &l_173[0], &l_173[0], &l_173[0], &l_173[0], &l_173[0]};
    int *l_174 = (void*)0;
    int l_177[8];
    unsigned char ***l_178 = &g_166;
    unsigned char **l_179 = &g_167;
    int i;
    for (i = 0; i < 1; i++)
        l_173[i] = &g_72;
    for (i = 0; i < 8; i++)
        l_177[i] = 1L;
    l_174 = func_68(l_70);

    ;
    l_177[1] = ((*l_174) = ((safe_lshift_func_uint8_t_u_s((~5UL), 1)) != 0x767BL));
    l_179 = ((*l_178) = &p_65);

    ;
    ;
    return p_66;


}







static int * func_68(int p_69)
{
    int *l_71 = &g_72;
    int **l_73 = &l_71;
    int *l_74[4] = {&g_72, &g_72, &g_72, &g_72};
    int ***l_80[10][3][2] = {{{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}, {{&l_73, &l_73}, {&l_73, &l_73}, {&l_73, &l_73}}};
    int *l_171 = &g_72;
    int i, j, k;
    g_77 |= (g_76[0] = (g_75 ^= (g_72 &= (((*l_73) = l_71) != l_74[1]))));
    (**l_73) = (p_69 | (g_13 <= ((&l_74[3] != (g_81[0] = &l_71)) <= 1L)));


    for (g_50 = 0; (g_50 > 34); g_50 = safe_add_func_int32_t_s_s(g_50, 9))
    {
        int l_90 = 0xC3C1A33FL;
        int l_114 = 1L;
        unsigned short **l_140 = &g_49;
        unsigned short **l_141 = &g_49;
        unsigned char *l_168[10] = {&g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48, &g_48};
        int i;
        for (p_69 = 0; (p_69 == 18); ++p_69)
        {
            short *l_88 = &g_89;
            int l_113 = 0x7A8BFC02L;
            int l_131 = 0L;
            unsigned char *l_169[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
            int i;
            l_90 = (safe_add_func_int16_t_s_s(((*l_88) = 0x2C66L), (&g_76[0] == (void*)0)));
        }
    }
    return l_171;



}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_58[i][j][k], "g_58[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_116[i][j][k], "g_116[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_197[i][j], "g_197[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_200[i], "g_200[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_742[i], "g_742[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1073, "g_1073", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1333[i][j][k], "g_1333[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1416, "g_1416", print_hash_value);
    transparent_crc(g_1493, "g_1493", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    transparent_crc(g_1652, "g_1652", print_hash_value);
    transparent_crc(g_1743, "g_1743", print_hash_value);
    transparent_crc(g_1805, "g_1805", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
