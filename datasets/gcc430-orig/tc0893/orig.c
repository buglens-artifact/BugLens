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
   int f0;
   unsigned long long f1;
   unsigned char f2;
   unsigned f3;
};


static int g_2 = 1L;
static int **g_67 = (void*)0;
static long long g_69 = 0L;
static unsigned char g_91 = 249UL;
static int g_93 = 0x3FE74C19L;
static struct S0 g_117 = {0x05585C01L,0x29742485FC01934DLL,248UL,0x4489F783L};
static long long g_119 = 0x04EDDC8DEE7960B9LL;
static char g_125 = (-1L);
static short g_132 = 0x12BCL;
static unsigned g_134[10][4] = {{1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL}};
static const int *g_138 = &g_93;
static unsigned short g_146[4][6][9] = {{{0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}}, {{0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}}, {{0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}}, {{0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}, {0x1342L, 0x14C7L, 0UL, 1UL, 0UL, 5UL, 0x14C7L, 1UL, 0UL}}};
static int g_150 = 0x5D4F8719L;
static short g_174 = 0x298EL;
static char g_185 = (-6L);
static unsigned char * const g_245 = &g_91;
static unsigned char * const *g_244[2] = {&g_245, &g_245};
static long long g_284 = 0x5CFE5E803BC4A1ADLL;
static struct S0 *g_288[1] = {&g_117};
static struct S0 **g_287 = &g_288[0];
static int g_320 = 6L;
static int *g_349 = &g_2;
static int **g_348 = &g_349;
static unsigned char *g_375 = &g_117.f2;
static unsigned char **g_374 = &g_375;
static unsigned g_396 = 18446744073709551611UL;
static short g_405 = (-9L);
static long long *g_431 = &g_284;
static long long **g_430 = &g_431;
static long long *** const g_429[4][4][7] = {{{(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}}, {{(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}}, {{(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}}, {{(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}, {(void*)0, &g_430, &g_430, &g_430, &g_430, &g_430, (void*)0}}};
static struct S0 g_441 = {-1L,0x24EC3B35B350D0E3LL,0xE3L,0xED429DF1L};
static unsigned *g_468 = &g_134[1][3];
static int ** const g_525 = (void*)0;
static int ** const *g_524 = &g_525;
static unsigned char g_550[10] = {255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL};
static unsigned long long ***g_578[1] = {(void*)0};
static int g_594 = 0x1F1BEBE4L;
static unsigned short g_623 = 0x614DL;
static int g_639 = 0xF377CEADL;
static int g_659[7][3] = {{0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}, {0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}, {0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}, {0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}, {0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}, {0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}, {0x2A1149FAL, 0x2A1149FAL, 0x9FDEA378L}};
static unsigned char ***g_681 = &g_374;



static unsigned long long func_1(void);
static int * func_7(int * p_8, unsigned p_9, long long p_10, int * p_11);
static unsigned short func_15(short p_16, long long p_17, const short p_18);
static int * func_21(const int * const p_22);
static unsigned long long func_28(const char p_29, unsigned char p_30, int ** p_31, struct S0 p_32, int ** p_33);
static unsigned char func_34(long long p_35, int ** p_36, int * p_37);
static unsigned char func_40(unsigned short p_41, char p_42, unsigned long long p_43, long long p_44, int * p_45);
static unsigned short func_46(const char p_47, int * p_48, unsigned long long p_49);
static int * func_51(unsigned short p_52, int * p_53, int ** p_54, int * p_55);
static int ** func_57(int * p_58, const int ** p_59, const int ** const p_60, int ** p_61);
static unsigned long long func_1(void)
{
    int *l_12[3][10] = {{&g_2, &g_2, (void*)0, &g_2, &g_2, &g_2, (void*)0, &g_2, &g_2, &g_2}, {&g_2, &g_2, (void*)0, &g_2, &g_2, &g_2, (void*)0, &g_2, &g_2, &g_2}, {&g_2, &g_2, (void*)0, &g_2, &g_2, &g_2, (void*)0, &g_2, &g_2, &g_2}};
    unsigned long long *l_664[4];
    unsigned long long **l_663 = &l_664[2];
    unsigned long long *** const l_662[5] = {(void*)0, &l_663, (void*)0, &l_663, (void*)0};
    short *l_665 = (void*)0;
    short *l_666 = (void*)0;
    short *l_667[9][2][5] = {{{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}, {{(void*)0, &g_132, (void*)0, &g_174, &g_405}, {(void*)0, &g_132, (void*)0, &g_174, &g_405}}};
    short l_670 = 0xC7EBL;
    unsigned *l_671 = &g_441.f3;
    int *l_672[1];
    int l_769 = (-8L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_664[i] = &g_117.f1;
    for (i = 0; i < 1; i++)
        l_672[i] = &g_93;
    for (g_2 = (-13); (g_2 < (-13)); g_2++)
    {
        int *l_6 = &g_2;
        int **l_5 = &l_6;
        (*l_5) = &g_2;
    }
    l_12[1][5] = func_7(l_12[0][4], ((*l_671) = (safe_add_func_int64_t_s_s((func_15(((((safe_rshift_func_uint16_t_u_s(((&g_2 == ((*g_348) = func_21(&g_2))) || 8UL), 10)) != ((safe_rshift_func_uint16_t_u_u(g_659[1][1], ((g_174 = ((*g_245) >= (l_662[2] != &l_663))) < g_150))) > (-4L))) < (*g_431)) <= g_441.f1), (*g_431), g_320) && 0UL), l_670))), (**g_430), l_672[0]);
    return l_769;
}







static int * func_7(int * p_8, unsigned p_9, long long p_10, int * p_11)
{
    unsigned char l_675 = 0xC3L;
    unsigned char ***l_678 = &g_374;
    unsigned char ****l_679 = (void*)0;
    unsigned char ****l_680[2][10][1] = {{{&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}}, {{&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}, {&l_678}}};
    int *l_682 = &g_594;
    unsigned long long *l_692 = &g_441.f1;
    unsigned long long **l_691 = &l_692;
    unsigned long long ***l_690[4];
    unsigned l_698 = 18446744073709551612UL;
    short *l_713 = &g_174;
    struct S0 l_716[9][3] = {{{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}, {{0x07D5D885L,18446744073709551615UL,0x9AL,18446744073709551610UL}, {0x9232F7B4L,0x5C54F07967E5B233LL,0UL,1UL}, {-6L,18446744073709551615UL,1UL,0xB36D0991L}}};
    struct S0 l_745 = {1L,18446744073709551615UL,0xF0L,0UL};
    int **l_746[2];
    long long l_758 = 0xEFE96A4512CCFA2ALL;
    unsigned short *l_763 = &g_623;
    int l_764[9];
    int *l_765 = &g_93;
    unsigned l_766 = 0x3B1A783CL;
    struct S0 l_767 = {-3L,0x435D71E4F8FA99F2LL,8UL,18446744073709551610UL};
    int *l_768 = &g_2;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_690[i] = &l_691;
    for (i = 0; i < 2; i++)
        l_746[i] = (void*)0;
    for (i = 0; i < 9; i++)
        l_764[i] = 0L;
lbl_736:
    (*p_11) &= ((safe_rshift_func_uint8_t_u_u(func_40((&g_405 != (void*)0), g_2, p_9, l_675, p_11), 1)) > (safe_lshift_func_int16_t_s_u(((g_681 = l_678) != &g_374), l_675)));
    for (p_10 = 0; (p_10 >= 0); p_10 -= 1)
    {
        unsigned long long *l_689[10] = {&g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1, &g_441.f1};
        unsigned long long **l_688 = &l_689[4];
        unsigned long long ***l_687[4];
        unsigned long long l_697 = 0x6088937FFE5ACE01LL;
        int *l_724[1][10][2] = {{{&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}, {&g_594, &g_93}}};
        int *l_725 = &g_93;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_687[i] = &l_688;
        for (g_91 = 0; (g_91 <= 9); g_91 += 1)
        {
            unsigned char l_699 = 0x56L;
            struct S0 l_714 = {-4L,0x26607FF3E70A6146LL,0UL,18446744073709551615UL};
            struct S0 ** const l_719[6] = {&g_288[0], &g_288[0], &g_288[0], &g_288[0], &g_288[0], &g_288[0]};
            int **l_720 = &l_682;
            int l_723[5] = {0x1CCF0451L, 0x73C1A381L, 0x1CCF0451L, 0x73C1A381L, 0x1CCF0451L};
            int i;
            (*p_11) |= g_550[g_91];
            for (g_117.f0 = 0; (g_117.f0 <= 0); g_117.f0 += 1)
            {
                unsigned long long ****l_693 = &l_690[3];
                unsigned short *l_696[6];
                int l_722 = 0x825E55A8L;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_696[i] = (void*)0;
                (*p_11) |= (-6L);
                (*g_348) = l_682;
                if (((*p_11) = (safe_mod_func_int16_t_s_s(func_46((((((18446744073709551613UL > (!(safe_add_func_int64_t_s_s((l_687[2] != ((*l_693) = l_690[2])), 0xB74D84F5370890B3LL)))) ^ (g_550[(p_10 + 5)] ^= ((((**g_430) &= p_9) < (safe_add_func_uint64_t_u_u(func_40((l_697 = func_46(func_15(p_10, g_134[(g_117.f0 + 5)][(g_117.f0 + 1)], p_10), p_11, p_10)), g_150, p_9, p_10, p_8), 6L))) != p_10))) <= p_9) < p_10) >= 1L), l_682, l_698), g_117.f0))))
                {
                    short l_702 = (-10L);
                    int l_718 = 0L;
                    int i, j, k;
                    (*g_348) = l_682;
                    (**g_348) &= l_699;
                    if (((safe_mod_func_uint16_t_u_u(p_10, g_146[1][3][3])) == (l_702 != (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_9, 3)), 255UL)), g_550[g_91])))))
                    {
                        struct S0 l_711 = {0x9D78F1EAL,0xB138555B313E9A9CLL,0x9AL,0x2F44FF25L};
                        struct S0 *l_712 = &l_711;
                        (**g_348) &= (safe_rshift_func_uint8_t_u_u(l_697, 2));
                        (*l_712) = l_711;
                    }
                    else
                    {
                        struct S0 *l_715[6] = {&g_117, &g_441, &g_117, &g_441, &g_117, &g_441};
                        int l_717[9] = {1L, (-6L), 1L, (-6L), 1L, (-6L), 1L, (-6L), 1L};
                        int i;
                        (*g_349) = ((*p_11) = ((void*)0 != l_713));
                        if (l_702)
                            break;
                        l_718 |= ((p_10 < (l_717[6] ^ 0x90L)) <= 0UL);
                    }
                    if (((void*)0 == l_719[2]))
                    {
                        return p_8;
                    }
                    else
                    {
                        struct S0 l_721 = {0x5765C689L,18446744073709551610UL,0x4CL,0xDF90FAC7L};
                        l_722 &= func_28(func_34(p_9, l_720, p_11), (*l_682), &g_349, l_721, &g_349);
                    }
                }
                else
                {
                    unsigned short l_733 = 1UL;
                    char *l_742 = &g_185;
                    if ((**l_720))
                        break;
                    if (l_723[2])
                    {
                        l_725 = l_724[0][2][0];
                        l_722 &= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(6UL, (*l_682))), ((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u(func_40(l_733, func_34(((safe_lshift_func_uint8_t_u_s(((**l_693) == (void*)0), func_40(p_9, l_733, (p_10 && (*g_375)), p_10, p_8))) == p_9), &g_349, (*g_348)), p_10, p_9, (*g_348)))) <= 0L), 0xD64424E0E4BBC19FLL)) >= 0xBB1FC49A14348386LL)));
                        if (g_117.f0)
                            goto lbl_736;
                    }
                    else
                    {
                        int l_737 = (-10L);
                        l_737 ^= (*p_11);
                        (**l_720) ^= l_733;
                    }
                    (*l_682) |= ((p_9 || p_9) >= (safe_lshift_func_int8_t_s_s(((*l_742) |= (safe_sub_func_int64_t_s_s(((**g_430) = p_10), p_10))), 2)));
                    (*l_682) = (*p_11);
                }
            }
        }
    }
    (*p_11) ^= ((*l_682) == (func_28(g_174, ((*g_245) &= (safe_lshift_func_int16_t_s_u(1L, func_28(g_659[1][1], p_10, &g_349, l_716[8][2], &p_8)))), &g_349, l_745, l_746[0]) ^ (*l_682)));
    (*l_765) = (safe_sub_func_int32_t_s_s(func_28((safe_lshift_func_uint8_t_u_s(((***g_681) |= (safe_mul_func_int8_t_s_s(0xF4L, p_10))), (((func_46((((!(g_134[2][2] || (+(safe_unary_minus_func_int32_t_s((*p_11)))))) != ((*l_682) ^= ((void*)0 != l_713))) != (safe_rshift_func_int16_t_s_u(((l_758 = (safe_sub_func_uint16_t_u_u(g_125, p_10))) != (safe_rshift_func_int16_t_s_u(func_40(((*l_763) = (safe_add_func_uint32_t_u_u((*g_468), 0x4F173CF8L))), l_764[8], p_9, (*g_431), p_11), 12))), p_9))), l_765, p_10) | 4294967295UL) && 0L) != l_766))), (*g_245), &g_349, l_767, &g_349), 0xB6FEC085L));
    return l_768;
}







static unsigned short func_15(short p_16, long long p_17, const short p_18)
{
    int *l_669 = (void*)0;
    int **l_668 = &l_669;
    (*l_668) = ((*g_348) = (void*)0);
    return g_405;
}







static int * func_21(const int * const p_22)
{
    unsigned long long l_23[4] = {0xD72A67F8B4DFECBELL, 0x8AA2D34CAA8E55A4LL, 0xD72A67F8B4DFECBELL, 0x8AA2D34CAA8E55A4LL};
    int *l_56[9][9];
    const int *l_66 = &g_2;
    const int ** const l_65 = &l_66;
    char *l_305 = &g_185;
    struct S0 *l_336 = &g_117;
    struct S0 l_379 = {0L,0xD16AB611BE9C3BF5LL,0xFFL,0xF0D657B7L};
    unsigned l_461 = 4UL;
    long long **l_475 = &g_431;
    short l_510[2][9] = {{2L, 0xA7A4L, 2L, 0xA7A4L, 2L, 0xA7A4L, 2L, 0xA7A4L, 2L}, {2L, 0xA7A4L, 2L, 0xA7A4L, 2L, 0xA7A4L, 2L, 0xA7A4L, 2L}};
    int ** const *l_523[2];
    unsigned long long *l_575 = &l_379.f1;
    unsigned long long **l_574 = &l_575;
    unsigned long long ***l_573 = &l_574;
    int *l_595 = &g_93;
    struct S0 l_624 = {1L,1UL,255UL,18446744073709551610UL};
    int l_645 = 0x18E9DF4DL;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            l_56[i][j] = &g_2;
    }
    for (i = 0; i < 2; i++)
        l_523[i] = &g_348;
    return (*g_348);
}







static unsigned long long func_28(const char p_29, unsigned char p_30, int ** p_31, struct S0 p_32, int ** p_33)
{
    return p_29;
}







static unsigned char func_34(long long p_35, int ** p_36, int * p_37)
{
    int l_223 = 0xFE7324F2L;
    unsigned l_224[9][1][9] = {{{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}, {{18446744073709551609UL, 0UL, 0xA225A8C6L, 0xF89D8E52L, 0x1A32E478L, 1UL, 18446744073709551615UL, 0x935479E0L, 18446744073709551615UL}}};
    int *l_227 = &g_150;
    unsigned char l_228 = 0x23L;
    int l_279 = (-9L);
    int i, j, k;
    for (g_117.f2 = (-4); (g_117.f2 > 20); g_117.f2 = safe_add_func_uint32_t_u_u(g_117.f2, 4))
    {
        int l_214 = 0x9A98EA97L;
        char *l_222[7][10][3] = {{{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}, {{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}, {{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}, {{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}, {{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}, {{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}, {{&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125}}};
        unsigned char *l_225 = (void*)0;
        int l_226 = 0L;
        unsigned l_254 = 0x71CE679DL;
        long long l_274 = 0x0723701584056BE7LL;
        unsigned short *l_275 = &g_146[1][4][0];
        unsigned *l_278 = &g_134[6][0];
        int i, j, k;
    }
    return (*g_245);
}







static unsigned char func_40(unsigned short p_41, char p_42, unsigned long long p_43, long long p_44, int * p_45)
{
    int l_206 = (-8L);
    return l_206;
}







static unsigned short func_46(const char p_47, int * p_48, unsigned long long p_49)
{
    (*p_48) |= 0x1866F3FEL;
    (*p_48) = (+(*g_138));
    return p_47;
}







static int * func_51(unsigned short p_52, int * p_53, int ** p_54, int * p_55)
{
    int *l_189 = &g_93;
    char *l_196 = &g_125;
    struct S0 *l_204 = &g_117;
    struct S0 **l_203 = &l_204;
    (*l_189) ^= 0L;
    (*l_189) |= (*p_53);
    (*l_189) = (((safe_lshift_func_uint8_t_u_s((((*l_189) | (*l_189)) | 255UL), ((*l_196) = (g_185 ^= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_134[2][2], p_52)), g_134[5][0])))))) >= (safe_mod_func_uint16_t_u_u(p_52, (*l_189)))) <= 1UL);
    for (g_117.f2 = 0; (g_117.f2 > 51); g_117.f2 = safe_add_func_uint8_t_u_u(g_117.f2, 1))
    {
        struct S0 **l_201 = (void*)0;
        struct S0 ***l_202[5][2] = {{&l_201, &l_201}, {&l_201, &l_201}, {&l_201, &l_201}, {&l_201, &l_201}, {&l_201, &l_201}};
        int i, j;
        l_203 = l_201;
    }
    return &g_93;
}







static int ** func_57(int * p_58, const int ** p_59, const int ** const p_60, int ** p_61)
{
    unsigned long long l_68 = 18446744073709551607UL;
    int l_74 = 0x5A8055A5L;
    int *l_102 = &g_93;
    struct S0 l_144 = {1L,18446744073709551610UL,253UL,0x883CA8B6L};
    int **l_188 = &l_102;
    g_69 = l_68;
    for (l_68 = (-3); (l_68 <= 14); ++l_68)
    {
        return g_67;
    }
    for (l_68 = 0; (l_68 == 33); l_68 = safe_add_func_uint16_t_u_u(l_68, 6))
    {
        return g_67;
    }
    if ((l_74 = l_68))
    {
        int *l_76[4][6];
        int **l_75 = &l_76[1][5];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_76[i][j] = &g_2;
        }
        return g_67;
    }
    else
    {
        unsigned short l_85 = 0UL;
        int *l_89 = &g_2;
        int **l_88 = &l_89;
        unsigned *l_141 = &g_134[6][1];
        unsigned **l_140 = &l_141;
        char *l_149 = &g_125;
        for (l_74 = 0; (l_74 == 27); l_74 = safe_add_func_int16_t_s_s(l_74, 5))
        {
            unsigned char l_80 = 0xD3L;
            int l_98 = 0L;
            int l_135 = (-1L);
            int l_136 = 7L;
        }
        (*l_102) ^= (((*l_149) = (safe_lshift_func_uint16_t_u_u((**l_88), 13))) & g_117.f3);
        g_150 |= (*g_138);
        for (g_93 = 22; (g_93 >= 13); g_93--)
        {
            const unsigned l_157[3] = {0xA466AC14L, 0xA466AC14L, 0xA466AC14L};
            int i;
        }
    }
    return g_67;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_134[i][j], "g_134[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_146[i][j][k], "g_146[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_441.f0, "g_441.f0", print_hash_value);
    transparent_crc(g_441.f1, "g_441.f1", print_hash_value);
    transparent_crc(g_441.f2, "g_441.f2", print_hash_value);
    transparent_crc(g_441.f3, "g_441.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_550[i], "g_550[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_659[i][j], "g_659[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
