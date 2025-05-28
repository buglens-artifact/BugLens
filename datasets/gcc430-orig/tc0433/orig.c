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



static unsigned g_2 = 0xC7894801L;
static unsigned long long g_24 = 0xC36FE5AB06C0E263LL;
static short g_44 = 0x5142L;
static volatile int g_45 = 0L;
static int g_105 = 0x97626F05L;
static int g_106 = 7L;
static unsigned char g_107 = 0x52L;
static short g_110 = (-1L);
static unsigned long long g_112 = 1UL;
static unsigned g_114 = 0x9DF947B4L;
static unsigned char g_118[6][6] = {{0x04L, 0x7FL, 0xEEL, 1UL, 0x7FL, 248UL}, {0x04L, 0x7FL, 0xEEL, 1UL, 0x7FL, 248UL}, {0x04L, 0x7FL, 0xEEL, 1UL, 0x7FL, 248UL}, {0x04L, 0x7FL, 0xEEL, 1UL, 0x7FL, 248UL}, {0x04L, 0x7FL, 0xEEL, 1UL, 0x7FL, 248UL}, {0x04L, 0x7FL, 0xEEL, 1UL, 0x7FL, 248UL}};
static int g_126 = 0x4D6026B9L;
static long long g_131[9][4][6] = {{{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}, {{(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}, {(-1L), 1L, (-1L), (-1L), 0x1F52E6A1E35D45CBLL, (-4L)}}};
static long long g_181 = (-8L);
static volatile int g_183 = (-6L);
static volatile int g_186 = 0x0EC7795BL;
static int g_189 = 0x93889B65L;
static volatile unsigned char g_190 = 0x16L;
static int g_199[10][4][6] = {{{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}, {{0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}, {0xD4049CAEL, (-1L), 0x47CCC286L, (-1L), 0xD4049CAEL, 0xEC3D7BDDL}}};
static char g_242 = (-1L);
static short g_251[5][2][6] = {{{8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}, {8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}}, {{8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}, {8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}}, {{8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}, {8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}}, {{8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}, {8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}}, {{8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}, {8L, 1L, 0x520DL, 0xF513L, 0x0942L, 0xC783L}}};
static int g_268 = 4L;
static unsigned g_280[5][10] = {{18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL}, {18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL}, {18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL}, {18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL}, {18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL, 0x49722A27L, 0UL, 18446744073709551613UL, 0UL}};
static volatile unsigned g_310 = 0x5AB74BA3L;
static short g_372 = 0xB96BL;
static long long g_377 = 0xFE1E8777BC7D45C3LL;
static volatile unsigned short g_414 = 1UL;
static volatile long long g_451[2][7][5] = {{{6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}}, {{6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}, {6L, 6L, 6L, 6L, 6L}}};
static unsigned g_453 = 0x9BB5F4D9L;
static volatile unsigned g_527 = 0xD87DCFB7L;
static int g_566 = (-3L);
static char g_626 = 0x42L;
static unsigned char g_628 = 0UL;
static short g_676 = 0xEBD4L;
static unsigned char g_678 = 0x7BL;
static int g_679 = (-9L);
static short g_692 = 5L;
static long long g_693 = (-9L);
static long long g_694 = 0x8953C8732588F8D0LL;
static int g_695[6] = {0xDBA68786L, 0xDBA68786L, 0xDBA68786L, 0xDBA68786L, 0xDBA68786L, 0xDBA68786L};
static unsigned long long g_696[3] = {0x5C98F52B23430C52LL, 0x5C98F52B23430C52LL, 0x5C98F52B23430C52LL};
static char g_818 = 4L;
static volatile char g_831 = (-1L);
static unsigned g_876 = 0x477BE79DL;
static long long g_914 = 0xA0F57E7E7015E183LL;
static int g_997 = (-10L);
static long long g_999 = (-3L);
static int g_1000 = 0x23EF83B8L;
static char g_1001 = 1L;
static short g_1002 = (-4L);
static unsigned g_1092 = 0xC1D0CAEFL;
static unsigned g_1095[6] = {0x9D533225L, 0UL, 0x9D533225L, 0UL, 0x9D533225L, 0UL};
static long long g_1124 = (-1L);
static unsigned g_1126 = 0x3C4562ECL;
static unsigned char g_1164[6][1][6] = {{{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}}, {{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}}, {{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}}, {{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}}, {{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}}, {{0UL, 0UL, 0UL, 0UL, 0UL, 0UL}}};
static unsigned long long g_1210 = 0x92234E81AD4210AFLL;
static unsigned char g_1211 = 253UL;
static volatile unsigned short g_1254 = 0x5030L;
static unsigned g_1255 = 0x6F950C9EL;
static long long g_1272 = 0xCF790DF5D4E50214LL;
static unsigned short g_1274[6] = {0xC8ADL, 0xC8ADL, 0xC8ADL, 0xC8ADL, 0xC8ADL, 0xC8ADL};
static int g_1380 = 1L;
static volatile unsigned g_1390 = 0xF3ACB1BAL;
static short g_1401 = 1L;
static short g_1464 = 8L;
static unsigned char g_1611 = 1UL;
static volatile unsigned g_1820[7][4][7] = {{{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}, {{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}, {{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}, {{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}, {{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}, {{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}, {{0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}, {0x0D51D4CEL, 6UL, 0x35A5F8EBL, 0x79AEE59AL, 0x15BDA3E1L, 0xFCDD5B11L, 18446744073709551610UL}}};
static int g_1854 = 8L;
static unsigned char g_1864 = 1UL;
static unsigned short g_1890 = 1UL;
static int g_2150 = (-1L);
static int g_2217 = 3L;
static short g_2261 = (-4L);
static unsigned g_2347[1][1] = {{0xCD3B5DABL}};
static unsigned g_2351 = 0x01AE3F35L;
static int g_2503 = 0xE9FC8A49L;
static unsigned short g_2593 = 0xA78CL;
static unsigned g_2634 = 0UL;
static int g_2638 = 8L;
static char g_2698 = (-1L);



static int func_1(void);
static unsigned func_11(int p_12, long long p_13);
static unsigned long long func_18(unsigned p_19, unsigned long long p_20, unsigned short p_21, unsigned long long p_22);
static unsigned short func_27(unsigned long long p_28, unsigned p_29, unsigned long long p_30, int p_31, long long p_32);
static char func_38(unsigned p_39, int p_40, int p_41);
static unsigned char func_53(char p_54, unsigned p_55, unsigned long long p_56);
static char func_57(unsigned p_58);
static unsigned char func_59(char p_60, unsigned p_61, unsigned p_62, unsigned char p_63, unsigned p_64);
static unsigned char func_75(short p_76, unsigned short p_77, unsigned char p_78, int p_79, unsigned short p_80);
static short func_83(unsigned long long p_84);
static int func_1(void)
{
    unsigned char l_17 = 1UL;
    unsigned l_42 = 4294967295UL;
    int l_1430 = (-1L);
    int l_2516 = 0xBCC0429EL;
    int l_2623 = 1L;
    unsigned char l_2663 = 247UL;
    unsigned long long l_2668 = 0xDABF0B4D9EF3E2C3LL;
    unsigned short l_2674 = 65528UL;
lbl_2680:
    if (g_2)
    {
        unsigned short l_33 = 0xCF45L;
        int l_43[3][9][2] = {{{(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}}, {{(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}}, {{(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}, {(-1L), 0x164E62B5L}}};
        unsigned l_2534 = 0x0AEDC9FFL;
        unsigned l_2564 = 0UL;
        short l_2588 = 0x272FL;
        long long l_2640 = 0L;
        int l_2647[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2647[i] = 1L;
        for (g_2 = (-8); (g_2 > 33); g_2++)
        {
            unsigned long long l_14 = 2UL;
            int l_23[9] = {0xF0D3ECF0L, 0x6EED1E12L, 0xF0D3ECF0L, 0x6EED1E12L, 0xF0D3ECF0L, 0x6EED1E12L, 0xF0D3ECF0L, 0x6EED1E12L, 0xF0D3ECF0L};
            int l_1871 = 0L;
            unsigned char l_2569 = 255UL;
            int i;
            l_2516 |= (safe_sub_func_int16_t_s_s((g_2 & g_2), (0xC1L > ((+(safe_add_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(func_11(l_14, (safe_rshift_func_uint8_t_u_s((l_17 >= func_18((g_24++), (l_1871 ^= (func_27((l_33--), g_2, l_17, (safe_mod_func_uint8_t_u_u((l_1430 = (func_38((255UL >= l_42), l_42, l_43[1][4][0]) == 0x37L)), g_997)), l_23[3]) < (-1L))), g_1864, l_43[1][4][0])), 7))), l_17)), 0x97B00A51862076DDLL))) | 0x98L))));
            if (((0x57L != g_190) && (safe_mul_func_uint16_t_u_u(l_2516, g_114))))
            {
                short l_2529 = 0x6B4EL;
                int l_2557 = (-7L);
                unsigned short l_2562[3][1];
                int l_2591 = 0xB1D07105L;
                int l_2592 = 0x7AD78B8BL;
                unsigned short l_2618 = 0xB71CL;
                unsigned long long l_2650 = 1UL;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2562[i][j] = 65535UL;
                }
                if ((safe_mod_func_uint8_t_u_u((g_118[2][1]--), g_1002)))
                {
                    unsigned long long l_2531[4];
                    unsigned l_2540 = 18446744073709551606UL;
                    long long l_2545 = 0L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2531[i] = 2UL;
                    for (g_679 = 3; (g_679 > 10); g_679 = safe_add_func_uint16_t_u_u(g_679, 5))
                    {
                        unsigned long long l_2530 = 18446744073709551610UL;
                        unsigned short l_2537 = 0xEEF7L;
                        l_2516 = (func_59((safe_rshift_func_int8_t_s_u(g_45, (g_199[6][0][1] || 0xFEAC1DB7L))), l_43[1][4][0], (((g_114 = ((1L ^ l_17) <= func_75((safe_mod_func_uint8_t_u_u(func_75(l_43[1][4][0], g_181, (g_678 = (l_2529 == g_695[2])), l_2530, l_2531[2]), g_1854)), l_2531[2], l_2531[2], g_692, l_2529))) | 0L) != l_2530), g_280[1][6], l_2531[0]) >= 2UL);
                        l_2540 = (l_1430 || (~((g_696[0] = func_59(g_199[1][2][2], g_131[8][3][1], (safe_mul_func_uint8_t_u_u((l_1430 = l_2534), (safe_lshift_func_int8_t_s_u(3L, g_106)))), ((l_2537 < (safe_add_func_uint32_t_u_u(func_83(g_1890), l_14))) <= g_1211), l_2529)) <= l_2529)));
                        if (g_310)
                            break;
                    }
                    for (g_626 = 0; (g_626 != 8); g_626 = safe_add_func_uint16_t_u_u(g_626, 3))
                    {
                        long long l_2546 = 0x507E7048CCD32420LL;
                        int l_2547 = 8L;
                        l_2546 = ((safe_add_func_uint8_t_u_u(g_999, (g_1611 = l_2545))) < 0x4498L);
                        l_2547 = 1L;
                    }
                }
                else
                {
                    unsigned long long l_2548 = 5UL;
                    char l_2551 = (-8L);
                    if (l_2534)
                    {
                        --l_2548;
                        if (l_17)
                            continue;
                        return g_695[1];
                    }
                    else
                    {
                        g_45 |= g_818;
                    }
                    g_126 = l_2529;
                    return l_2551;
                }
                for (l_2516 = 21; (l_2516 != (-22)); --l_2516)
                {
                    int l_2563 = 0xA981F3FAL;
                    int l_2585[7] = {0x96D04147L, 0x96D04147L, 0xF8186251L, 0x96D04147L, 0x96D04147L, 0xF8186251L, 0x96D04147L};
                    int i;
                    for (g_24 = 0; (g_24 <= 3); g_24 += 1)
                    {
                        char l_2554 = 0xEBL;
                        g_695[4] = l_2554;
                        if (g_2351)
                            continue;
                    }
                    g_1854 = ((safe_rshift_func_uint8_t_u_s(g_1464, l_43[1][4][0])) > func_38(func_75(g_1211, g_189, l_2529, (l_2557 = 0xD9016B8FL), (safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((l_2563 = (((g_372 || l_2529) != (0x0A0BA0A09DC1B2FFLL < l_2529)) || l_2562[0][0])) != l_2564), l_1871)) | (-9L)), 7))), l_23[3], l_43[1][4][0]));
                    for (g_1890 = (-11); (g_1890 != 49); g_1890++)
                    {
                        unsigned char l_2584 = 255UL;
                        int l_2589 = 9L;
                        int l_2590[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2590[i] = 0xC8BDA53EL;
                        l_2585[5] |= ((g_679 & g_1254) | ((((safe_lshift_func_int16_t_s_u(func_75(l_2569, g_24, (g_1211 = (safe_mul_func_uint16_t_u_u((g_1274[5] = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_566, 9)), ((~(g_242 = l_2563)) > ((!(safe_rshift_func_int16_t_s_u(g_280[1][3], ((safe_rshift_func_int8_t_s_u(g_118[2][1], (safe_lshift_func_int16_t_s_s(((g_2261 == g_914) < 0xA1BEA3C7L), l_2562[1][0])))) != 0UL)))) <= l_2564))))), 6UL))), g_1164[4][0][0], l_2584), 10)) != l_2584) != 0x9EL) < 0xADL));
                        l_1871 = (safe_add_func_uint16_t_u_u((func_59(g_1820[6][0][0], (l_23[3] <= 0xA6L), l_2562[0][0], l_2584, l_2562[0][0]) || ((g_106 && (l_2584 > l_2588)) < l_2562[0][0])), 0x8698L));
                        g_2593++;
                        return g_106;
                    }
                    return g_694;
                }
                if (l_2557)
                    break;
                for (g_1854 = 0; (g_1854 <= 5); g_1854 += 1)
                {
                    short l_2608[4];
                    int l_2641 = (-3L);
                    int l_2643 = 0x92DE994EL;
                    int l_2648 = 9L;
                    int l_2649[9] = {0xB174E1C8L, 0x43BDF72BL, 0xB174E1C8L, 0x43BDF72BL, 0xB174E1C8L, 0x43BDF72BL, 0xB174E1C8L, 0x43BDF72BL, 0xB174E1C8L};
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2608[i] = 1L;
                    for (g_1272 = 4; (g_1272 >= 0); g_1272 -= 1)
                    {
                        unsigned long long l_2609 = 18446744073709551615UL;
                        l_1871 = (g_280[1][3] | ((g_24 = ((safe_mul_func_uint16_t_u_u(((-1L) != 65529UL), ((2UL == (safe_mod_func_uint8_t_u_u((g_1864 = ((g_566 && g_678) ^ func_59((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_831, g_1002)), (l_43[1][4][1] = (g_1864 > 0x1AL)))), l_2608[0])), g_106)), g_131[5][2][2], l_2609, g_44, l_2534))), l_2534))) < g_1164[4][0][0]))) == 0xE7CBL)) == l_33));
                    }
                    for (l_2534 = 0; (l_2534 <= 3); l_2534 += 1)
                    {
                        int i, j, k;
                        l_2623 = (safe_sub_func_uint8_t_u_u(func_59(g_131[(l_2534 + 1)][l_2534][g_1854], g_2261, ((safe_mul_func_uint8_t_u_u((l_2591 && (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((!((l_2618 == (g_626 = func_83((g_696[0] = (g_1274[1] ^ 0xDBFB0F65L))))) ^ ((0x1C31L | ((((safe_rshift_func_uint16_t_u_u(g_24, l_2592)) ^ g_131[(l_2534 + 1)][l_2534][g_1854]) != 0xAA741D9EL) > 0x5AL)) != g_131[(l_2534 + 1)][l_2534][g_1854]))), g_131[6][0][1])), g_2))), 0xA6L)) ^ g_1164[4][0][0]), l_42, l_2608[0]), g_676));
                    }
                    for (g_105 = 0; (g_105 <= 3); g_105 += 1)
                    {
                        g_183 = (-7L);
                    }
                    g_2634 ^= (safe_mul_func_int8_t_s_s((func_11(l_23[3], g_1272) ^ (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(8L, (safe_sub_func_uint32_t_u_u(func_75(l_33, (((18446744073709551614UL || (safe_lshift_func_int16_t_s_s(g_1002, l_2618))) & (!g_999)) && l_2618), l_1871, g_1255, g_1255), 4294967295UL)))), 4))), l_2608[0]));
                    for (g_1000 = 5; (g_1000 >= 0); g_1000 -= 1)
                    {
                        unsigned short l_2635 = 0xDC94L;
                        int l_2639 = 0x862FC679L;
                        int l_2642 = 0x3096F28FL;
                        int l_2644 = 0x3AF6A36CL;
                        int l_2645 = (-9L);
                        int l_2646 = 8L;
                        if (l_2635)
                            break;
                        g_126 |= (safe_rshift_func_int16_t_s_u((l_17 | 0x64D65BDDF82BEDA0LL), g_2261));
                        --l_2650;
                    }
                }
            }
            else
            {
                return l_17;
            }
            g_105 = g_1401;
        }
    }
    else
    {
        unsigned l_2653 = 18446744073709551606UL;
        long long l_2654 = (-4L);
        unsigned short l_2673 = 6UL;
        int l_2675 = 0x87D5994EL;
        int l_2676 = 1L;
        l_2654 = l_2653;
        l_2676 ^= (l_2675 = func_38((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((+(l_2653 || ((safe_sub_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s(l_2663, 1)) == l_2653) <= (func_27((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((((func_59(g_1126, (((l_2668 = (l_2653 == g_695[3])) == ((l_2673 = (safe_mod_func_int16_t_s_s((g_1095[3] || ((safe_rshift_func_uint8_t_u_u(l_2516, 2)) <= g_997)), g_189))) == 0x0DF50B4FB95FDF62LL)) == g_1274[5]), l_17, l_2623, g_2351) == 65530UL) | 0x00L) > g_2503), 1)) || l_2653), g_1095[3])), l_2674, g_566, g_1164[4][0][0], l_2623) | 1UL)) ^ l_42), l_2674)) & g_1890))), 3UL)), g_2347[0][0])), l_2653, l_2674));
        l_2676 = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(g_1124)), 0x6EL));
    }
    for (g_1126 = 0; (g_1126 <= 3); g_1126 += 1)
    {
        char l_2683 = 0x9DL;
        int l_2691 = 0x2359186CL;
        unsigned short l_2697 = 0xE315L;
        for (g_626 = 0; (g_626 <= 3); g_626 += 1)
        {
            unsigned char l_2690 = 0xD1L;
            int l_2692[7];
            int i;
            for (i = 0; i < 7; i++)
                l_2692[i] = (-1L);
            if (g_1211)
                goto lbl_2680;
            l_2692[0] = (safe_lshift_func_int8_t_s_u(g_181, (func_59(g_2, ((g_1820[6][0][0] && ((!func_75(l_2683, g_24, (g_628 > 0L), g_251[1][0][3], (safe_mod_func_uint64_t_u_u(((g_242 = (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((l_2690 & l_2663), 8L)) && l_2690) != g_999), 2))) ^ 0xFFL), (-6L))))) && g_1124)) >= l_2516), g_676, l_2691, g_696[1]) < l_2690)));
            l_1430 = ((func_59(g_1255, (func_57(g_2347[0][0]) >= ((safe_mul_func_int16_t_s_s(func_75(l_2516, (((l_2683 && (((((+0x13CFL) || (0xDB6B83FF8DFF8C77LL != (safe_mod_func_uint16_t_u_u(((g_876 = 0xE0671BFDL) != (0xA7DA30CBL < l_2690)), g_2634)))) | 1UL) & l_2692[0]) > l_2697)) < l_2690) ^ g_2698), l_2516, g_692, g_2261), 1L)) > 1L)), g_1272, l_2623, l_2623) & 0xCCD14F4F4C011366LL) != l_2663);
            for (l_2683 = 3; (l_2683 >= 0); l_2683 -= 1)
            {
                int i, j, k;
                return g_1820[(g_1126 + 3)][l_2683][(g_1126 + 1)];
            }
        }
    }
    return l_2663;
}







static unsigned func_11(int p_12, long long p_13)
{
    char l_2158[8] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
    long long l_2173[3];
    int l_2175 = 0x04DACAA5L;
    char l_2176 = (-1L);
    int l_2179 = 0x5CC80B90L;
    int l_2188 = 4L;
    int l_2190 = 0xA0F850E4L;
    int l_2195 = 0xEC9E4F2FL;
    int l_2196 = (-1L);
    int l_2197 = 0x55366279L;
    int l_2199[4] = {0xF6109FADL, 0xF1341C76L, 0xF6109FADL, 0xF1341C76L};
    long long l_2219 = 0xCA5DCE335CB3AF6ALL;
    unsigned long long l_2307[9][8] = {{0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}, {0x0A22CE555F27B0E0LL, 18446744073709551613UL, 0xC99A2B3CFDB88F65LL, 6UL, 1UL, 0x907D69D8C991A56CLL, 1UL, 6UL}};
    short l_2479 = 1L;
    unsigned l_2488 = 1UL;
    short l_2515 = 0x678EL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2173[i] = (-1L);
    if ((((safe_lshift_func_int8_t_s_u((l_2173[1] = ((l_2158[1] || (safe_mul_func_int16_t_s_s(func_38((p_12 != ((1UL > (((p_12 >= (g_695[4] |= (!(((g_1274[3] = 8UL) < p_13) < 0x98983B5141C19F58LL)))) != (g_876 = (g_131[8][3][1] >= (((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(func_75((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((func_83((!l_2158[1])) && (-2L)), p_12)) <= 4L), 0xD75892BFL)), g_997)), p_12, l_2158[1], p_12, l_2158[1]), l_2158[0])) >= p_12), g_1092)) || p_13) | l_2158[1])))) || l_2158[1])) == l_2158[1])), l_2158[1], p_12), 0xC40EL))) < p_13)), l_2158[5])) | g_1611) == g_2150))
    {
        int l_2174 = 0x704C1233L;
        int l_2177 = 0L;
        int l_2178 = 0x6C3ABD98L;
        unsigned char l_2180 = 255UL;
        int l_2189 = 0x498556DEL;
        int l_2191 = 0x9C080C73L;
        int l_2192 = 0x2DCABBE6L;
        int l_2193 = 0x0DF52346L;
        int l_2194[4] = {(-8L), 1L, (-8L), 1L};
        char l_2198 = 0x70L;
        unsigned l_2200 = 1UL;
        unsigned char l_2234[5][2] = {{0x81L, 0x81L}, {0x81L, 0x81L}, {0x81L, 0x81L}, {0x81L, 0x81L}, {0x81L, 0x81L}};
        unsigned char l_2239 = 255UL;
        unsigned char l_2263[8][4] = {{0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}, {0UL, 249UL, 0UL, 249UL}};
        unsigned l_2328 = 18446744073709551608UL;
        int i, j;
        ++l_2180;
        g_2150 ^= (((safe_unary_minus_func_uint32_t_u(1UL)) >= (g_131[8][3][1] &= ((l_2179 = ((func_83(l_2176) && g_414) <= p_13)) == (l_2174 = (safe_mul_func_uint16_t_u_u((l_2175 = (safe_add_func_int32_t_s_s(g_372, 0UL))), p_12)))))) ^ l_2158[1]);
        l_2200--;
        for (l_2180 = 23; (l_2180 == 20); l_2180 = safe_sub_func_uint16_t_u_u(l_2180, 5))
        {
            unsigned l_2216[5][1];
            int l_2218 = 0xF45F357AL;
            unsigned char l_2228 = 0xA6L;
            unsigned l_2229 = 5UL;
            unsigned short l_2332[9];
            unsigned long long l_2360 = 1UL;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2216[i][j] = 0x658E4D0AL;
            }
            for (i = 0; i < 9; i++)
                l_2332[i] = 1UL;
            for (g_110 = (-22); (g_110 >= (-16)); ++g_110)
            {
                unsigned char l_2215 = 0UL;
                int l_2237 = 0xDFEEC3E3L;
                if ((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_1000, p_13)), (+((l_2195 = (safe_rshift_func_uint16_t_u_u((((((+g_24) < (0x210A467DEA995E8FLL == l_2189)) & (l_2216[4][0] = (g_1274[3] = (+l_2215)))) != (l_2194[3] &= (l_2199[0] &= (l_2218 = func_59((g_1001 &= (((0L == g_696[1]) && (0x378C2E02L || p_13)) != g_183)), l_2191, l_2173[1], g_2217, l_2218))))) >= 0xAC260AD1L), l_2215))) >= l_2219)))) ^ p_12) & l_2178), 7)))
                {
                    unsigned l_2230 = 0UL;
                    int l_2231 = 0L;
                    g_105 ^= func_59(((p_13 == (l_2194[2] & (l_2231 = (safe_mul_func_uint8_t_u_u((0x4F4CL >= func_59(g_914, p_13, ((((g_696[0] = l_2158[1]) <= (func_75((safe_sub_func_int16_t_s_s((func_75(l_2216[4][0], (safe_sub_func_uint32_t_u_u(l_2228, g_190)), p_12, l_2229, l_2215) < (-1L)), 0L)), l_2190, p_12, p_13, p_12) > l_2230)) & l_2190) | l_2178), p_12, p_12)), 2UL))))) ^ 0UL), g_377, g_1890, p_13, g_1164[4][0][0]);
                    if ((safe_mul_func_uint8_t_u_u(((+l_2216[4][0]) < (-7L)), (l_2234[0][0] = (254UL == 0x8BL)))))
                    {
                        long long l_2235 = 0x6C1A56C89A11058DLL;
                        int l_2236 = 0x45E1CDBFL;
                        int l_2238 = (-1L);
                        l_2239++;
                        g_105 = (safe_mul_func_int8_t_s_s((-5L), ((-5L) > g_377)));
                    }
                    else
                    {
                        unsigned short l_2260 = 1UL;
                        unsigned l_2262 = 0x1DA0CAE6L;
                        g_2217 = (safe_sub_func_uint64_t_u_u(p_13, g_696[2]));
                        l_2197 = 1L;
                        g_2217 = (safe_rshift_func_uint8_t_u_s((0xC7629377BA9C87A6LL >= (+(safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_2218 &= p_12), (l_2189 |= (func_75(((((safe_mod_func_uint64_t_u_u(((p_13 ^= l_2197) < (((((((safe_lshift_func_int16_t_s_u(l_2230, 4)) >= l_2229) >= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(func_59(g_451[0][6][0], g_818, g_242, (~(func_75(g_1002, l_2228, g_1000, l_2237, l_2260) & 0x25L)), g_1464), 15)) != 1UL), l_2260))) != 0x22L) ^ 0x0FDB2943A5CA4E7ALL) <= g_696[0]) >= 0x88L)), g_2150)) || l_2179) < g_2261) == p_12), p_12, g_2, l_2216[0][0], g_377) && l_2262)))), g_1210)))), 1));
                    }
                }
                else
                {
                    l_2263[2][3]++;
                    l_2237 = (0xF5BC635FC36D38C2LL || l_2196);
                    g_45 &= p_13;
                    if (g_1820[5][0][3])
                        break;
                }
            }
            for (g_2150 = 0; (g_2150 > 24); g_2150 = safe_add_func_int32_t_s_s(g_2150, 1))
            {
                int l_2275 = 0L;
                int l_2283 = (-9L);
                int l_2314 = 6L;
                if (l_2173[1])
                {
                    short l_2270[3][10][3] = {{{(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}}, {{(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}}, {{(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}, {(-1L), 0x403BL, 1L}}};
                    int l_2282[10][2] = {{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}};
                    int l_2308 = 0xD468D853L;
                    int l_2313 = 0xFB029A6CL;
                    int i, j, k;
                    if (func_57((safe_mod_func_int8_t_s_s(l_2270[1][0][1], (safe_rshift_func_int16_t_s_s((g_1464 = ((6UL ^ (((g_189 == (safe_mod_func_uint32_t_u_u(func_75(((func_75((l_2275 ^= g_2), ((g_1274[5] |= (p_13 == func_75((safe_mod_func_int64_t_s_s((((func_59(g_1001, l_2270[1][0][1], (((p_13 >= ((safe_mul_func_uint8_t_u_u((l_2282[0][0] &= (safe_sub_func_int16_t_s_s((g_181 == l_2234[3][1]), p_12))), p_13)) < p_13)) == p_12) ^ l_2283), l_2263[2][3], l_2283) < 0UL) || g_1211) || l_2197), g_693)), p_13, g_695[2], l_2283, p_13))) || (-3L)), l_2219, g_676, p_13) < 0xAFL) == 0x35079851D1AA9E03LL), l_2283, l_2228, l_2270[1][0][1], g_453), g_1464))) ^ l_2200) | (-1L))) != l_2283)), 8))))))
                    {
                        char l_2284 = 7L;
                        if (l_2284)
                            break;
                        if (p_12)
                            break;
                        l_2189 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_1390, (l_2284 && (safe_sub_func_int32_t_s_s((0xDA8637E533DE3993LL < (((safe_lshift_func_uint8_t_u_s(g_997, 4)) && p_13) & p_13)), (p_13 && (((~(func_75(((safe_lshift_func_int8_t_s_u(g_694, ((safe_lshift_func_uint16_t_u_u((l_2270[2][0][1] ^ g_126), g_1272)) & 0L))) < (-7L)), g_377, l_2194[3], g_112, p_13) ^ l_2284)) && 7UL) | p_12))))))), p_13));
                        l_2308 ^= (!(l_2282[8][0] = ((p_13 = (safe_sub_func_uint64_t_u_u(((250UL != (safe_mul_func_int16_t_s_s(0L, 65535UL))) == ((l_2275 = (safe_sub_func_uint8_t_u_u(g_451[0][6][1], ((l_2282[0][0] || l_2282[0][0]) & l_2307[3][3])))) < p_13)), ((!0x53L) & g_372)))) > p_12)));
                    }
                    else
                    {
                        g_105 = p_12;
                        l_2199[3] = (0x68F84CB5L ^ (safe_mod_func_uint32_t_u_u(g_118[2][1], p_13)));
                    }
                    for (l_2197 = (-4); (l_2197 <= (-12)); l_2197--)
                    {
                        return g_1854;
                    }
                    l_2313 ^= l_2282[0][0];
                    l_2275 ^= ((g_1274[1] = l_2314) <= p_12);
                }
                else
                {
                    char l_2331 = 9L;
                    unsigned l_2335[1][2];
                    int l_2350 = 0x0E54171BL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2335[i][j] = 0UL;
                    }
                    if ((safe_add_func_int8_t_s_s(l_2307[4][0], l_2176)))
                    {
                        int l_2321 = 1L;
                        l_2188 = ((((1L & (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((l_2321 = l_2275) || func_83((l_2192 &= (g_112 ^= (safe_mod_func_uint32_t_u_u((+(p_13 || (safe_sub_func_int32_t_s_s(((-2L) <= (safe_mod_func_int8_t_s_s((((l_2328 & 4294967287UL) < 1UL) <= g_1390), ((safe_lshift_func_int8_t_s_s(((func_75(((l_2331 | l_2321) != 0xBE26L), g_1401, p_13, p_13, l_2331) != 7L) != 0x3B8B11CC2CF6D055LL), g_566)) | l_2189)))), g_372)))), l_2228)))))), p_12)), 0x05L))) <= g_876) <= g_181) | 251UL);
                        l_2218 |= l_2332[5];
                        l_2350 = ((safe_rshift_func_int16_t_s_s(l_2275, 3)) ^ (((g_1124 |= l_2335[0][1]) <= (safe_lshift_func_int8_t_s_u((l_2198 && (safe_rshift_func_int16_t_s_u((g_1401 = (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0xA314497111699E45LL, 5L)), (safe_unary_minus_func_uint8_t_u(((((safe_mod_func_uint32_t_u_u(((l_2218 = p_13) >= func_57(g_2347[0][0])), (safe_sub_func_int32_t_s_s(g_1002, p_12)))) == g_1126) < g_1164[5][0][0]) || (-10L))))))), p_13))), 4))) >= p_13));
                        --g_2351;
                    }
                    else
                    {
                        g_1380 = (g_527 == ((p_12 != 0x34E9L) > (safe_mod_func_uint16_t_u_u(((0UL != g_1255) != ((l_2350 & l_2331) != (safe_add_func_int16_t_s_s((0x814E9B4EL & ((safe_mod_func_uint64_t_u_u((g_112 = (((255UL ^ 0x28L) <= 9UL) == l_2218)), 0x635DD503B5184967LL)) != 0x14L)), (-5L))))), 2L))));
                        return l_2360;
                    }
                    for (g_453 = 1; (g_453 <= 5); g_453 += 1)
                    {
                        return p_13;
                    }
                }
                l_2189 &= g_1126;
                g_1380 = p_13;
            }
        }
    }
    else
    {
        int l_2363 = (-1L);
        int l_2381 = (-6L);
        l_2381 = (((8UL & (safe_sub_func_uint64_t_u_u((l_2363 ^ (safe_sub_func_uint16_t_u_u(((g_1274[4] |= (((safe_sub_func_int16_t_s_s((g_696[0] == ((p_13 | ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(p_13)), 6)) & g_190)) & (g_1164[4][0][0] ^= (safe_add_func_uint32_t_u_u(g_679, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_2195, 15)) || (safe_sub_func_uint64_t_u_u(0xF85C07BA82935E1ALL, p_13))), 13)), 11)) != g_106)))))), p_13)) > p_13) < 65526UL)) || l_2199[3]), p_12))), 0x30E3BA031DB7D803LL))) >= l_2199[1]) || g_876);
    }
    for (g_1401 = 9; (g_1401 <= (-11)); g_1401 = safe_sub_func_int64_t_s_s(g_1401, 1))
    {
        unsigned l_2384[9][5][5] = {{{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}, {{0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}, {0xEDAFCF44L, 4UL, 18446744073709551615UL, 0x08242F0EL, 0xF0A30550L}}};
        int l_2408 = (-4L);
        int l_2409 = 0x3F9D18CEL;
        int l_2411 = 3L;
        int l_2413 = 0x426290BCL;
        int l_2415 = 0xF53340FDL;
        int l_2416 = 0x02DD2C48L;
        int l_2417 = 0xFD574923L;
        int l_2418 = 0L;
        int l_2419[6] = {0x4C0C1288L, 0x4C0C1288L, 0x4CC044E3L, 0x4C0C1288L, 0x4C0C1288L, 0x4CC044E3L};
        unsigned char l_2420 = 248UL;
        int i, j, k;
        for (g_914 = 0; (g_914 <= 0); g_914 += 1)
        {
            int i, j;
            --l_2384[6][2][3];
            g_695[2] = (g_2347[g_914][g_914] >= ((safe_rshift_func_uint16_t_u_u(0xD518L, p_13)) <= ((65528UL < g_2347[g_914][g_914]) >= func_75(p_12, l_2384[6][2][3], g_251[0][1][5], (g_189 = (safe_mod_func_uint64_t_u_u((+(g_1864 > (-1L))), p_12))), p_12))));
            for (g_2261 = 0; (g_2261 >= 0); g_2261 -= 1)
            {
                return l_2384[7][0][2];
            }
        }
        for (g_818 = 0; (g_818 == 24); g_818 = safe_add_func_int32_t_s_s(g_818, 9))
        {
            int l_2402 = 0xB4D260EEL;
            int l_2404 = (-7L);
            int l_2410 = 0x718791CFL;
            int l_2412 = 0x493C4158L;
            int l_2414[6] = {0xADA5C14CL, 0xADA5C14CL, 0L, 0xADA5C14CL, 0xADA5C14CL, 0L};
            unsigned l_2439 = 0x972FC539L;
            unsigned short l_2452 = 0x2219L;
            int i;
            for (g_1001 = 0; (g_1001 > (-4)); --g_1001)
            {
                short l_2400 = 0xF03DL;
                int l_2403[9][8][1] = {{{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}, {{8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}, {8L}}};
                int i, j, k;
                if (p_13)
                {
                    short l_2399[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2399[i] = 1L;
                    if (p_12)
                        break;
                    l_2175 = ((g_626 = (((safe_add_func_int32_t_s_s(((func_59(((g_2351 >= (safe_sub_func_int64_t_s_s(p_12, l_2175))) < l_2399[0]), g_1820[0][1][1], p_13, g_1274[5], (g_818 != ((l_2190 = l_2384[8][4][1]) & 0x28L))) && 0x415ACB3835A327D4LL) & g_695[2]), l_2175)) & l_2400) | 247UL)) >= l_2400);
                }
                else
                {
                    short l_2401 = 0x9CD8L;
                    unsigned l_2405[5][9] = {{0xFF4EE91CL, 4294967286UL, 0xFF4EE91CL, 0UL, 0x74353430L, 0x7DF6CCEEL, 4UL, 0x6788D006L, 0x2DBDEAAAL}, {0xFF4EE91CL, 4294967286UL, 0xFF4EE91CL, 0UL, 0x74353430L, 0x7DF6CCEEL, 4UL, 0x6788D006L, 0x2DBDEAAAL}, {0xFF4EE91CL, 4294967286UL, 0xFF4EE91CL, 0UL, 0x74353430L, 0x7DF6CCEEL, 4UL, 0x6788D006L, 0x2DBDEAAAL}, {0xFF4EE91CL, 4294967286UL, 0xFF4EE91CL, 0UL, 0x74353430L, 0x7DF6CCEEL, 4UL, 0x6788D006L, 0x2DBDEAAAL}, {0xFF4EE91CL, 4294967286UL, 0xFF4EE91CL, 0UL, 0x74353430L, 0x7DF6CCEEL, 4UL, 0x6788D006L, 0x2DBDEAAAL}};
                    int i, j;
                    ++l_2405[4][4];
                }
                if (g_112)
                    break;
                g_2217 = (-5L);
                --l_2420;
            }
            l_2416 = ((safe_rshift_func_uint8_t_u_u(func_57((l_2404 = l_2414[2])), 7)) > (~((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(p_13, 8)) && g_1854), 2)) < (++g_1164[4][0][0]))));
            g_126 = ((safe_rshift_func_int8_t_s_u((g_679 <= 1UL), 3)) & (7UL ^ 0L));
            for (g_694 = 12; (g_694 < (-24)); g_694 = safe_sub_func_int32_t_s_s(g_694, 8))
            {
                int l_2440 = 0x3C87EE91L;
                unsigned char l_2445 = 0xFDL;
                char l_2453 = 1L;
                int l_2454 = 0L;
                l_2414[2] = func_59(p_12, p_13, l_2413, p_12, func_57(((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((func_75(l_2439, p_13, g_628, p_12, func_83((((!g_107) | l_2199[2]) && g_199[1][2][0]))) ^ p_13), l_2440)), p_13)) & p_13)));
                l_2454 = (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((l_2445 != (safe_add_func_int64_t_s_s(func_59((l_2175 = ((l_2197 = func_59(l_2179, g_1401, ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((g_251[0][0][5] == l_2419[3]) && p_13), ((l_2414[2] || (((l_2452 <= p_12) & g_997) == l_2196)) != l_2195))), 0xBF645058L)) >= 65527UL), g_1274[1], p_12)) > g_999)), p_13, l_2445, p_12, l_2445), l_2453))), 65535UL)) & 8UL), 8L));
                l_2196 = (g_112 | l_2420);
            }
        }
    }
    if ((p_12 | (g_414 & (safe_sub_func_uint64_t_u_u((func_75(((safe_add_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((8L != 65535UL), p_12)), g_1095[3])) >= (l_2179 &= 4294967290UL)) | (safe_mul_func_int16_t_s_s(((g_692 = func_75((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_12, func_75(((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((l_2199[3] <= 1UL), 1)) != g_2347[0][0]) & 5UL), g_1001)) != (-7L)), g_131[8][3][3])), l_2479)) >= 0L), l_2175, p_12, p_12, l_2176))), p_12)), p_12, g_189, g_1274[1], l_2479)) && (-8L)), l_2158[1]))), l_2197)) <= 0xAB52L) <= p_12), 0xA1F6CB5B949B62F3LL)) <= l_2176), l_2190, g_268, l_2199[3], l_2188) && p_12), g_1464)))))
    {
        unsigned short l_2481 = 0x1AEAL;
        g_45 = ((!p_12) != (safe_unary_minus_func_uint32_t_u((((0xFFL <= ((l_2197 = 0xDF7FCE73L) > 0L)) || 0L) == (g_1611 <= (-6L))))));
        l_2481 = (g_1864 != l_2196);
        return p_13;
    }
    else
    {
        for (l_2188 = 0; (l_2188 > (-14)); --l_2188)
        {
            long long l_2491 = 0xE175FED61C7B561ELL;
            if (p_13)
                break;
            g_2217 &= (safe_rshift_func_int8_t_s_u(p_12, (safe_mod_func_int32_t_s_s(l_2488, (safe_lshift_func_int16_t_s_u(g_914, l_2158[5]))))));
            return l_2491;
        }
    }
    for (g_1126 = (-18); (g_1126 <= 11); g_1126++)
    {
        int l_2502 = 0x94069653L;
        char l_2505 = 0x60L;
        int l_2506 = 8L;
        for (l_2488 = 8; (l_2488 != 50); l_2488 = safe_add_func_int64_t_s_s(l_2488, 2))
        {
            unsigned long long l_2504 = 0UL;
            l_2506 &= (safe_mul_func_uint8_t_u_u((g_1611 = ((func_57((safe_mul_func_int16_t_s_s((-3L), 1UL))) | (safe_rshift_func_int16_t_s_s((p_13 && (l_2502 && p_13)), (g_2503 >= func_75(l_2502, p_13, l_2504, l_2199[3], p_12))))) > l_2505)), 0x9EL));
        }
        g_2503 = (0x1076DA16L > 0xB0352CCDL);
        l_2197 = l_2506;
        l_2506 = ((+(safe_mod_func_uint64_t_u_u(g_372, func_59(p_12, (safe_add_func_int8_t_s_s((g_696[0] | (((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(func_83(l_2505), ((l_2199[3] = ((((g_1001 = l_2515) == (l_2179 |= (9UL || p_13))) > p_12) != 0x1CFDC4E5L)) <= p_12))), 1UL)) != g_676) | p_12)), p_12)), p_12, l_2219, p_13)))) > g_268);
    }
    return p_12;
}







static unsigned long long func_18(unsigned p_19, unsigned long long p_20, unsigned short p_21, unsigned long long p_22)
{
    unsigned short l_1881 = 0UL;
    int l_1910 = 0xD0E6E8BDL;
    int l_1923[5][5] = {{1L, (-1L), 0xDCBB5945L, 0x692361E5L, 0x692361E5L}, {1L, (-1L), 0xDCBB5945L, 0x692361E5L, 0x692361E5L}, {1L, (-1L), 0xDCBB5945L, 0x692361E5L, 0x692361E5L}, {1L, (-1L), 0xDCBB5945L, 0x692361E5L, 0x692361E5L}, {1L, (-1L), 0xDCBB5945L, 0x692361E5L, 0x692361E5L}};
    int l_1967[1];
    unsigned short l_1968 = 65535UL;
    unsigned char l_2038 = 0x25L;
    unsigned long long l_2039 = 1UL;
    long long l_2151[3][9] = {{1L, (-1L), 0xE4C683FBFF4703F5LL, 0xE4C683FBFF4703F5LL, (-1L), 1L, (-1L), 0xE4C683FBFF4703F5LL, 0xE4C683FBFF4703F5LL}, {1L, (-1L), 0xE4C683FBFF4703F5LL, 0xE4C683FBFF4703F5LL, (-1L), 1L, (-1L), 0xE4C683FBFF4703F5LL, 0xE4C683FBFF4703F5LL}, {1L, (-1L), 0xE4C683FBFF4703F5LL, 0xE4C683FBFF4703F5LL, (-1L), 1L, (-1L), 0xE4C683FBFF4703F5LL, 0xE4C683FBFF4703F5LL}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_1967[i] = (-4L);
    for (g_189 = 3; (g_189 >= 0); g_189 -= 1)
    {
        int l_1875[8][7] = {{0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}, {0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L, (-4L), 0x764C2BF9L}};
        unsigned char l_2047 = 0UL;
        short l_2122 = 0x740CL;
        int i, j;
        if (p_21)
            break;
        for (g_997 = 0; (g_997 <= 3); g_997 += 1)
        {
            unsigned char l_1872[9] = {0UL, 0UL, 0x8EL, 0UL, 0UL, 0x8EL, 0UL, 0UL, 0x8EL};
            int l_1904 = 5L;
            int i;
            l_1875[7][3] = func_75(l_1872[8], ((safe_rshift_func_uint8_t_u_s(0x07L, 3)) < (((l_1875[7][3] < 0L) && (safe_mod_func_int64_t_s_s(((safe_unary_minus_func_uint16_t_u(65535UL)) && l_1875[7][3]), p_22))) && ((l_1875[5][1] > (--g_1611)) ^ (((g_695[2] | 0xAFL) < 7UL) != l_1881)))), p_19, p_21, l_1881);
            for (g_1272 = 3; (g_1272 >= 0); g_1272 -= 1)
            {
                unsigned long long l_1909 = 0x1C9461CAFF36E427LL;
                unsigned char l_1921 = 0x8DL;
                int l_1922 = 1L;
                int l_1927 = 0x7FB579DFL;
                for (p_19 = 0; (p_19 <= 3); p_19 += 1)
                {
                    int l_1885 = 0x3BC3C9CAL;
                    for (g_693 = 0; (g_693 <= 3); g_693 += 1)
                    {
                        l_1885 = (g_1274[0] <= (safe_sub_func_int32_t_s_s((g_1890 = (((g_199[1][2][2] == p_22) <= ((safe_unary_minus_func_int32_t_s((p_20 <= l_1885))) | (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_22 <= 0x9C31829B849C05F2LL), func_75(g_251[0][0][5], l_1872[8], g_1464, p_20, g_189))), 1UL)))) & l_1881)), (-9L))));
                        if (p_21)
                            continue;
                    }
                    if (g_876)
                    {
                        unsigned l_1895 = 18446744073709551615UL;
                        l_1885 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(0xC1L, 0)), 8));
                        g_1854 |= g_626;
                        if (g_695[2])
                            continue;
                        --l_1895;
                    }
                    else
                    {
                        l_1910 = ((((+g_1255) != 1UL) || ((func_59((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(p_19, func_83((g_24 | (safe_mul_func_uint16_t_u_u(g_1210, 1L)))))) >= (l_1904 &= l_1872[8])), (safe_lshift_func_uint8_t_u_s((g_628++), g_695[2])))), p_21, l_1909, p_19, g_105) && 1L) <= g_1095[3])) <= 1UL);
                    }
                    l_1904 = (safe_add_func_uint8_t_u_u(p_20, g_1272));
                }
                for (g_107 = 0; (g_107 <= 3); g_107 += 1)
                {
                    unsigned l_1915 = 0UL;
                    l_1923[3][3] |= func_75(p_19, ((safe_mod_func_uint64_t_u_u(((l_1922 = (l_1915 == (7UL && (safe_add_func_uint64_t_u_u((p_21 & ((safe_unary_minus_func_int32_t_s(((safe_mod_func_int8_t_s_s((l_1910 = (((g_1124 = 0x1FFBCAB1EDF08B73LL) > g_1464) | (((0xCBL == p_22) == l_1915) ^ l_1921))), (-1L))) | 0UL))) >= 0x5F6625A5L)), p_19))))) > l_1915), p_19)) != 0x1C914FFE54EF6144LL), g_112, p_21, l_1881);
                    if (l_1923[3][3])
                        break;
                }
                for (g_1890 = 0; (g_1890 <= 3); g_1890 += 1)
                {
                    int l_1934 = 5L;
                    int l_1939[2];
                    long long l_1952 = 0x42103584FE11C8CBLL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1939[i] = 0x35B01E6BL;
                    for (g_694 = 0; (g_694 <= 3); g_694 += 1)
                    {
                        unsigned char l_1926 = 248UL;
                        int l_1953 = 0x02F79365L;
                        g_183 = l_1904;
                        g_45 = ((safe_rshift_func_uint8_t_u_u((((p_21 & g_1002) | (p_19 != l_1926)) | (g_914 && g_377)), 1)) != g_24);
                        if (l_1927)
                            continue;
                        g_45 ^= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((l_1934 = (safe_sub_func_int16_t_s_s(g_1002, p_21))), (((safe_mul_func_int8_t_s_s(func_75((l_1953 = func_75(p_21, ((safe_mul_func_uint8_t_u_u(l_1926, l_1939[1])) < ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(4294967293UL, l_1952)), g_1210)), (p_20 > g_1854))), 1L)), 1)) | l_1881), 7)) | p_21)), p_21, p_22, l_1904)), g_676, p_20, g_199[8][3][0], l_1926), 246UL)) <= p_21) & 6L))), g_1464));
                    }
                    l_1904 = p_20;
                    return g_1254;
                }
                if (l_1872[0])
                    continue;
            }
        }
        if ((safe_sub_func_int16_t_s_s(0L, 0xDE1EL)))
        {
            int l_1958 = 8L;
            unsigned l_2011 = 0xD54ED41CL;
            int l_2025 = 0xAD8E0FC0L;
            long long l_2055[7] = {0L, 0L, 0x97FA5FFCD6274364LL, 0L, 0L, 0x97FA5FFCD6274364LL, 0L};
            int i;
            g_1854 &= (safe_lshift_func_int8_t_s_u(func_75((l_1958 == (-4L)), p_21, ((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((func_59(l_1910, (g_1095[4] ^= ((g_695[2] |= g_1401) < ((safe_lshift_func_uint16_t_u_u(g_628, (1L != (g_414 >= (g_1211 = (+255UL)))))) <= p_21))), l_1875[7][3], l_1910, l_1967[0]) >= l_1958), 0L)), l_1968)), g_44)) || 0x8FL), l_1875[4][3], p_20), 1));
            if ((safe_add_func_int16_t_s_s(l_1958, ((safe_mul_func_uint16_t_u_u(0xA95EL, (safe_mod_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(g_186, l_1923[4][1])), (g_2 && 0x01A7L))), (p_21 & p_21))) != (l_1967[0] |= l_1958)) >= p_19), 0x0CC4BE49L)))) > 0xA3989A718BD43DA3LL))))
            {
                long long l_1981 = (-10L);
                int l_1993 = 1L;
                long long l_2014 = 0xC9FD97992BBC2554LL;
                unsigned short l_2040 = 0xC59BL;
                for (g_24 = 0; (g_24 <= 3); g_24 += 1)
                {
                    unsigned long long l_1990 = 0xDB34977207A21494LL;
                    int l_2000 = 0x810999BAL;
                    unsigned char l_2003[2];
                    int l_2022 = 0L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2003[i] = 255UL;
                    g_1854 = ((l_1981 && g_1274[1]) <= ((((safe_mul_func_uint16_t_u_u(p_22, ((((safe_lshift_func_uint16_t_u_s(g_1092, g_1095[3])) < (~func_59((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_21, (g_1211 = p_21))), ((l_1981 < (l_1923[4][4] = (((p_19 = l_1958) != 0x450CCBBFL) && 0x77L))) < l_1990))), l_1958, g_190, g_280[1][3], l_1990))) || l_1875[7][3]) ^ p_22))) < 0x642CL) && l_1981) | p_20));
                    if ((safe_mod_func_int32_t_s_s(func_59((l_1993 |= g_2), p_22, l_1958, g_831, g_676), ((safe_lshift_func_uint8_t_u_s(p_21, 6)) ^ 0x66E6534EC451F894LL))))
                    {
                        unsigned short l_2004 = 0xADA4L;
                        l_2011 = ((safe_rshift_func_int16_t_s_u(g_242, 5)) == ((safe_rshift_func_uint16_t_u_u((p_21--), func_75((g_251[0][0][5] &= (l_2000 = l_2003[1])), l_2004, g_280[2][0], (safe_lshift_func_uint16_t_u_u((+(safe_mod_func_uint8_t_u_u(g_126, (safe_sub_func_uint64_t_u_u(0xEA9632830CB81883LL, l_2003[1]))))), 1)), func_83(l_1910)))) < g_1274[1]));
                        l_1875[7][3] ^= (safe_mul_func_uint16_t_u_u(p_20, ((g_453 = func_59(l_2004, func_83(p_22), func_75((1UL <= 0L), (!((g_251[0][1][3] >= ((((l_2014 = (g_131[0][0][5] && 18446744073709551615UL)) > g_1092) | 7L) <= p_21)) != p_20)), p_19, p_20, l_1958), p_22, g_1000)) ^ g_1464)));
                        l_1967[0] = g_628;
                        l_1967[0] |= (-7L);
                    }
                    else
                    {
                        char l_2017 = 0xF2L;
                        g_1854 = (safe_mod_func_int32_t_s_s(((l_2017 = 0xD1L) <= ((l_2025 = ((safe_add_func_int8_t_s_s(((func_75(((safe_sub_func_int8_t_s_s(1L, g_1000)) ^ (((func_59(((!((l_2022 ^= g_414) > (p_19 | (safe_rshift_func_int8_t_s_u(g_696[0], 3))))) & 0L), g_678, p_19, l_1968, p_22) != 0xD0AEABEE4928DF73LL) ^ l_1981) ^ g_1854)), p_22, p_20, g_110, l_2003[1]) || p_19) != p_19), 0x2AL)) && g_1820[6][0][0])) > g_1095[4])), p_21));
                        l_1875[7][3] = func_83((p_22 | l_2014));
                    }
                    for (g_1890 = 0; (g_1890 <= 3); g_1890 += 1)
                    {
                        int l_2041[6] = {(-1L), (-6L), (-1L), (-6L), (-1L), (-6L)};
                        long long l_2042[5] = {0x65367737FC37DA03LL, 0xB51D11A23E25BFD5LL, 0x65367737FC37DA03LL, 0xB51D11A23E25BFD5LL, 0x65367737FC37DA03LL};
                        int i;
                        g_695[2] = (safe_rshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(0L, p_20)) <= (g_114 = g_694)) <= (p_22 || g_818)), 0));
                        l_1993 = (safe_sub_func_int16_t_s_s((l_1967[0] = ((((safe_mod_func_int64_t_s_s(((l_2000 ^= ((0x4539104B07B66F1FLL | 7UL) <= (safe_sub_func_uint32_t_u_u(p_19, (g_1854 = (((safe_add_func_uint16_t_u_u(p_22, (l_2038 <= (((g_110 ^= l_2039) & 0x4285L) == ((l_2040 = l_2022) < l_2041[2]))))) == g_1820[1][0][5]) >= 0x7B70L)))))) < 1UL), 7UL)) > g_105) ^ g_189) == p_19)), l_2014));
                        g_186 |= 5L;
                        g_186 = (+l_2042[2]);
                    }
                }
                if (p_19)
                {
                    for (g_181 = 4; (g_181 >= 1); g_181 -= 1)
                    {
                        int i;
                        return g_1274[g_181];
                    }
                }
                else
                {
                    unsigned l_2056 = 1UL;
                    int l_2057 = (-1L);
                    for (g_628 = 0; (g_628 <= 3); g_628 += 1)
                    {
                        int l_2054 = 0xE5891C7AL;
                        int i, j;
                        g_105 ^= (l_1923[(g_628 + 1)][(g_628 + 1)] && (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(func_75(g_997, (((p_21 = (g_453 & l_2047)) <= g_527) || g_566), (g_1864 = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_add_func_uint16_t_u_u(((l_2054 = (l_1923[(g_628 + 1)][(g_628 + 1)] &= l_2047)) & (g_107 = ((p_19 > l_2055[6]) & 0x74L))), g_1211)) | l_2056) & 0x3B3AE72A530D8E75LL) < g_1255), 9)) < g_1274[1]), p_22))), g_695[2], l_1875[7][3]), 6)), g_1272)));
                        l_2057 = g_628;
                        l_1967[0] &= p_20;
                    }
                }
                for (l_2014 = 3; (l_2014 >= 0); l_2014 -= 1)
                {
                    for (g_679 = 0; (g_679 <= 3); g_679 += 1)
                    {
                        unsigned short l_2058 = 65535UL;
                        g_183 = g_1092;
                        l_2025 = (g_268 &= l_2058);
                    }
                    for (g_1611 = 0; (g_1611 <= 3); g_1611 += 1)
                    {
                        unsigned l_2059 = 4294967286UL;
                        l_1875[5][1] |= 8L;
                        l_2059 = g_1124;
                    }
                }
                return g_1274[0];
            }
            else
            {
                unsigned short l_2067 = 0x7514L;
                int l_2080[5][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
                int i, j;
                for (g_999 = 0; (g_999 <= 3); g_999 += 1)
                {
                    long long l_2066 = 0xEB8DC6D99FEBB168LL;
                    l_2025 = (safe_lshift_func_uint8_t_u_s(0x89L, (safe_mul_func_uint8_t_u_u((l_1967[0] = l_2055[3]), (safe_mod_func_uint32_t_u_u(7UL, l_1958))))));
                    for (l_2025 = 0; (l_2025 <= 3); l_2025 += 1)
                    {
                        g_186 = (((l_1958 == 1L) | l_2066) && p_22);
                        if (g_242)
                            continue;
                        if (p_20)
                            continue;
                    }
                    if ((~g_126))
                    {
                        g_268 = (l_2025 |= p_22);
                        g_186 = g_280[1][3];
                    }
                    else
                    {
                        g_268 = g_114;
                        return g_414;
                    }
                    l_2067 = p_19;
                    for (g_105 = 0; (g_105 <= 3); g_105 += 1)
                    {
                        unsigned long long l_2081 = 0xFF7CB5D9D51D24CBLL;
                        g_45 = (safe_lshift_func_int8_t_s_u(p_19, ((safe_sub_func_uint16_t_u_u(p_22, (p_21 && (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_75(g_818, (safe_sub_func_int16_t_s_s(l_1875[7][3], (safe_mod_func_uint64_t_u_u(p_20, func_83((l_2055[2] && ((l_2081++) > (g_1002 >= ((+(0x6D023EEEL ^ g_818)) < l_2047))))))))), g_696[0], p_19, p_19), 1L)), p_19))))) || l_2080[3][0])));
                    }
                }
            }
        }
        else
        {
            return p_22;
        }
        for (g_1854 = 0; (g_1854 <= 3); g_1854 += 1)
        {
            unsigned short l_2087 = 0xF48CL;
            int l_2100 = 0x80F1B70CL;
            long long l_2118 = (-1L);
            unsigned char l_2121[6][3][4] = {{{0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}}, {{0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}}, {{0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}}, {{0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}}, {{0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}}, {{0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}, {0xDFL, 0xDFL, 3UL, 247UL}}};
            unsigned l_2132 = 0UL;
            int l_2140 = 0x9D79A6A1L;
            int l_2141 = 3L;
            int l_2142 = 1L;
            int l_2143 = 0x89287747L;
            int l_2144[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2144[i] = (-1L);
            for (l_2039 = 1; (l_2039 <= 4); l_2039 += 1)
            {
                int l_2107[9] = {0x0996568DL, 0x1EC78B1FL, 0x0996568DL, 0x1EC78B1FL, 0x0996568DL, 0x1EC78B1FL, 0x0996568DL, 0x1EC78B1FL, 0x0996568DL};
                unsigned short l_2147 = 65532UL;
                unsigned l_2153 = 1UL;
                int i, j, k;
                if ((g_1380 = (safe_unary_minus_func_int64_t_s(g_199[l_2039][g_1854][(g_189 + 1)]))))
                {
                    unsigned l_2101 = 0x3DCB757AL;
                    int l_2102 = (-1L);
                    if ((((l_1967[0] ^= (safe_mul_func_uint8_t_u_u((g_1164[4][0][0] < 255UL), (l_2087 = g_1210)))) || (safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_114, (func_75(g_199[l_2039][g_1854][(g_189 + 1)], ((safe_mod_func_int8_t_s_s(g_453, (l_2038 || p_21))) || (g_1272 = (l_2102 = (g_914 = ((g_692 = ((safe_lshift_func_uint16_t_u_u((g_1274[1] = (safe_mul_func_int16_t_s_s(((g_696[0] |= (+(((l_2100 = ((-4L) < 5L)) <= 255UL) <= 8L))) == l_2101), g_199[l_2039][g_1854][(g_189 + 1)]))), g_251[0][0][5])) != p_19)) >= g_527))))), p_20, l_1875[6][6], g_997) && 0x21A9BDEDEF4278A8LL))), 0x6FL)), g_1890))) & g_1002))
                    {
                        unsigned char l_2114 = 1UL;
                        int l_2115 = (-8L);
                        g_105 &= (safe_mod_func_uint16_t_u_u(4UL, ((g_1164[5][0][3] = (safe_sub_func_int64_t_s_s((p_21 || (l_2107[2] = p_19)), (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(((l_2115 = (0xFB3EL == (l_2047 | (func_75((g_414 || (g_110 >= (5UL == 8UL))), l_2101, p_22, g_1274[4], l_2114) <= 0xDDL)))) || g_1274[1]), l_1875[7][3])) || 0xD4FDL), p_22))))) | g_199[l_2039][g_1854][(g_189 + 1)])));
                        l_2102 = (safe_add_func_int8_t_s_s((l_1875[7][3] || l_2118), l_2100));
                        l_2115 &= (6L > 9UL);
                    }
                    else
                    {
                        long long l_2123 = 0x3511A7AEF1BCF431LL;
                        int l_2133 = 0xDA5B01C1L;
                        l_2133 ^= (((((safe_add_func_uint16_t_u_u(l_2102, l_2121[2][2][1])) < (l_2122 = p_21)) | (~l_2123)) <= l_1923[3][3]) ^ (g_118[5][5] | (safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((l_2132 = (!((((g_126 = g_199[l_2039][g_1854][(g_189 + 1)]) < (3UL && ((safe_mul_func_int8_t_s_s((l_2100 = (safe_sub_func_int64_t_s_s(0xDC57815916B83980LL, l_2100))), g_199[1][2][2])) <= 0xEF93L))) ^ 0xA457137DFD7297F1LL) ^ g_679))) < g_1124) && l_2121[2][2][1]), g_190)), 0x7D68506C2ADE1501LL))));
                    }
                }
                else
                {
                    unsigned short l_2134 = 0xC313L;
                    int l_2137 = 4L;
                    int l_2138 = 3L;
                    int l_2139 = 0xCECBFEB1L;
                    int l_2145 = (-1L);
                    int l_2146[6];
                    short l_2152 = 0L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2146[i] = 0x9462C12EL;
                    ++l_2134;
                    --l_2147;
                    --l_2153;
                }
            }
            if (p_19)
                continue;
            for (l_2118 = 0; (l_2118 <= 3); l_2118 += 1)
            {
                g_1380 ^= func_83(g_107);
            }
        }
    }
    return g_1274[2];
}







static unsigned short func_27(unsigned long long p_28, unsigned p_29, unsigned long long p_30, int p_31, long long p_32)
{
    unsigned l_1433 = 18446744073709551613UL;
    int l_1452 = 0L;
    int l_1453 = (-1L);
    unsigned l_1454 = 0xC471FC5EL;
    int l_1455 = (-4L);
    int l_1456 = 0x86A14E66L;
    unsigned l_1457 = 4294967286UL;
    unsigned long long l_1488 = 18446744073709551606UL;
    unsigned l_1774[1][10] = {{4294967286UL, 1UL, 0xA4B7DE5BL, 0xA4B7DE5BL, 1UL, 4294967286UL, 1UL, 0xA4B7DE5BL, 0xA4B7DE5BL, 1UL}};
    int l_1816[1];
    unsigned l_1837 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1816[i] = (-5L);
lbl_1826:
    g_695[2] &= (safe_add_func_uint16_t_u_u((l_1454 = (g_1274[0] = ((l_1433 & ((safe_lshift_func_uint16_t_u_u(p_28, ((l_1453 = (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((p_28 | ((safe_sub_func_int32_t_s_s(((g_251[4][0][1] & ((((safe_lshift_func_int16_t_s_u((func_75(p_31, (safe_rshift_func_int16_t_s_s((-9L), ((safe_sub_func_uint8_t_u_u(g_105, (safe_mod_func_uint64_t_u_u(((p_29 >= (l_1452 |= func_83(p_32))) > 0x4979EC637D1CF992LL), p_29)))) | p_31))), l_1433, l_1433, p_29) || g_692), l_1433)) || g_199[1][2][2]) || 0x86L) != p_31)) ^ p_30), l_1433)) && l_1452)), p_32)), 0x07978E36BDB1ED4FLL)), g_1210))) < (-9L)))) && p_30)) == l_1433))), 0xC697L));
    if (func_59(((l_1457++) && func_59(g_999, p_28, ((safe_add_func_uint16_t_u_u((g_1464 = (0x19L | (safe_sub_func_uint16_t_u_u(65532UL, (g_1274[1] &= 0xFB84L))))), func_59(((g_280[1][3] & (safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((g_695[2] >= ((safe_sub_func_int8_t_s_s((((l_1454 < func_83((safe_unary_minus_func_int16_t_s(p_30)))) ^ g_118[2][1]) & l_1457), p_29)) > 2L)), 0x83L)) != 0x4B87E321ECD222EALL), g_453)) < p_30), g_1164[4][0][0]))) & 0x8495L), l_1456, p_28, l_1453, l_1433))) || l_1456), g_1255, g_280[1][3])), g_999, g_999, g_1002, l_1453))
    {
        return g_1092;
    }
    else
    {
        unsigned short l_1490 = 9UL;
        int l_1501 = 6L;
        int l_1601 = (-3L);
        int l_1646 = (-9L);
        int l_1734 = 0L;
        unsigned char l_1754 = 0x74L;
        int l_1805 = 0x79A742F7L;
        int l_1809[8][8][4] = {{{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}, {{(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}, {(-1L), 0x4F833E50L, (-10L), 0L}}};
        int i, j, k;
lbl_1753:
        if ((7L != (l_1453 |= (safe_mod_func_int8_t_s_s(g_695[3], g_693)))))
        {
            unsigned char l_1489[1][10][3] = {{{252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}, {252UL, 0x47L, 0x17L}}};
            int i, j, k;
            g_186 |= 0x89649681L;
            g_695[2] = ((safe_mul_func_int8_t_s_s((p_32 | (l_1490 = (func_59((!0x1AL), g_876, l_1454, (safe_lshift_func_uint16_t_u_s(p_29, ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((-1L) && g_1274[1]), ((safe_mod_func_int64_t_s_s((l_1457 < (((safe_sub_func_int16_t_s_s((l_1488 != l_1489[0][4][0]), g_831)) | 0x2ACCL) ^ g_695[2])), (-1L))) || (-9L)))), g_1164[4][0][0])) && l_1454))), g_1092) >= p_29))), g_693)) <= 0x35B6L);
        }
        else
        {
            short l_1500 = 0x542DL;
            int l_1502 = 0xF752C01CL;
            int l_1522 = 0L;
            for (g_678 = 0; (g_678 <= 3); g_678 += 1)
            {
                int l_1495 = 0x8E5A918DL;
                int l_1503 = 0x6A677DA8L;
                l_1502 = (safe_add_func_int64_t_s_s(l_1454, ((l_1495 ^= g_695[3]) != (p_28 > (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(65535UL, p_32)), (l_1501 = (func_59(g_1274[3], l_1500, p_28, g_251[2][1][4], g_199[1][2][2]) < 5UL))))))));
                l_1503 = l_1433;
                l_1501 &= g_695[0];
                for (g_1001 = 0; (g_1001 <= 3); g_1001 += 1)
                {
                    int l_1516 = 1L;
                    for (g_693 = 3; (g_693 >= 0); g_693 -= 1)
                    {
                        int l_1517 = (-1L);
                        int i, j, k;
                        if (g_131[(g_678 + 4)][g_678][(g_678 + 1)])
                            break;
                        l_1452 |= ((g_1002 == (p_32 = (g_131[(g_678 + 4)][g_678][(g_678 + 1)] <= ((g_696[0] <= ((l_1503 = g_280[1][3]) | l_1495)) <= (++g_1095[3]))))) >= (safe_sub_func_int64_t_s_s((func_75((safe_mul_func_uint8_t_u_u((((g_1274[1] = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((0x750C42F756422473LL < p_31), func_83(l_1490))), g_1002))) || g_1272) | 255UL), g_131[(g_678 + 4)][g_678][(g_678 + 1)])), p_28, g_44, l_1516, p_28) && 0xBCL), 0x3D657D127EB6DBC5LL)));
                        l_1517 = g_118[2][1];
                        l_1517 = g_1124;
                    }
                }
            }
            l_1452 = (l_1502 = (g_105 |= p_29));
            g_126 = (g_695[2] |= (safe_lshift_func_uint8_t_u_u(0xBCL, (l_1522 &= (((l_1500 | g_107) == p_28) || (0x391EL < (l_1502 = (((l_1456 = g_107) >= l_1502) < (((safe_mul_func_uint8_t_u_u((((p_30 | p_32) && p_31) | g_1390), g_1272)) | g_997) && g_1095[3])))))))));
        }
        if ((safe_add_func_int32_t_s_s((-4L), l_1454)))
        {
            unsigned long long l_1530 = 0xFF11D8FD3C893307LL;
            int l_1532 = (-1L);
            unsigned short l_1535 = 65535UL;
            int l_1572 = 5L;
            int l_1604 = 1L;
            int l_1612 = 8L;
            if ((safe_rshift_func_int8_t_s_s((g_1001 = (safe_lshift_func_uint16_t_u_s((g_695[2] <= (safe_unary_minus_func_uint32_t_u(4294967295UL))), 0))), 6)))
            {
                int l_1531 = 0x2DC6871CL;
                int l_1533 = 0x7A559F9AL;
                int l_1534[6][3][1];
                unsigned l_1642 = 4294967293UL;
                int l_1645[1];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1534[i][j][k] = (-1L);
                    }
                }
                for (i = 0; i < 1; i++)
                    l_1645[i] = (-9L);
                if (func_53(p_30, (g_280[1][3] = func_75(p_29, p_32, l_1530, p_32, (l_1531 = 4UL))), p_28))
                {
                    int l_1538 = 0x825ACF96L;
                    int l_1573 = 6L;
                    unsigned char l_1613 = 0x7EL;
                    if (l_1455)
                    {
                        l_1535--;
                        g_183 = (!l_1538);
                    }
                    else
                    {
                        return g_451[0][6][1];
                    }
                    if ((l_1452 = 0L))
                    {
                        unsigned char l_1551 = 6UL;
                        g_45 = (safe_mul_func_int8_t_s_s((g_818 = (safe_rshift_func_int16_t_s_s(p_32, 7))), ((7UL <= (safe_rshift_func_int8_t_s_s((l_1532 = ((g_377 | (l_1454 < (((l_1453 = (253UL ^ (p_29 != (++g_1210)))) || (0xD18872AE6643B293LL && (((p_32 < (g_280[2][6] < 0x746A7D50L)) < l_1551) == p_31))) != g_189))) < l_1490)), p_30))) >= l_1551)));
                        g_268 &= func_75(g_1464, (safe_rshift_func_uint8_t_u_u((~(g_118[2][1] = (l_1533 && (l_1534[3][2][0] ^= (0xC2L | (l_1573 = (l_1532 |= ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(g_695[4], (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_75(g_1164[4][0][0], (safe_mod_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u(p_29, g_118[4][3])) || (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(l_1501, func_59(l_1433, p_29, l_1551, l_1538, g_1401))), g_1274[5]))) >= 253UL) > l_1535), p_30)), l_1551, p_29, g_1255), 0xB1C047AEL)), l_1488)))), 6)), g_1255)) < g_1274[2]) | l_1572) & g_696[0])))))))), 4)), g_1001, l_1490, l_1452);
                        l_1533 ^= (g_693 > (g_818 = g_110));
                    }
                    else
                    {
                        unsigned short l_1582 = 0UL;
                        unsigned long long l_1605 = 1UL;
                        l_1532 = (func_38((l_1534[3][2][0] = (safe_mul_func_uint16_t_u_u((g_310 & 0x9BE0E143L), ((l_1456 = func_75(p_32, g_131[8][3][1], (((safe_lshift_func_uint8_t_u_u(0UL, (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_1582 | (((safe_rshift_func_uint16_t_u_s((p_32 & 9L), (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((l_1532 ^ 0x0414L), g_242)) | p_31) & 0x96L), 0xAAL)), 2)))) & l_1538) & g_251[0][0][5])), l_1530)), g_628)))) && 0xDC3B8B2EAD000690LL) < p_29), p_28, p_29)) && 250UL)))), p_30, l_1530) && l_1535);
                        l_1604 ^= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(l_1454, (safe_add_func_uint64_t_u_u(((l_1532 |= (~g_199[1][0][3])) == p_31), (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0L, p_32)), l_1601)))))), 4)) && (l_1456 = (((safe_mod_func_int32_t_s_s(g_1164[4][0][0], (((g_453 = p_31) & p_32) | l_1582))) <= 0x979EL) <= p_30)));
                        return l_1605;
                    }
                    for (l_1490 = (-18); (l_1490 < 5); l_1490++)
                    {
                        char l_1610 = 4L;
                        int l_1614 = 5L;
                        l_1614 = (safe_lshift_func_uint16_t_u_s((l_1610 <= (l_1613 = ((p_29 >= g_1611) <= func_75(func_83(p_28), g_696[0], (l_1532 &= g_694), (~((g_189 && ((p_28 == 1UL) != p_32)) || (-6L))), l_1612)))), p_32));
                        l_1614 = func_38(g_695[2], p_32, l_1533);
                        g_126 &= l_1614;
                        g_695[5] = 0L;
                    }
                    for (l_1457 = 2; (l_1457 < 39); l_1457 = safe_add_func_int8_t_s_s(l_1457, 5))
                    {
                        unsigned l_1618 = 1UL;
                        g_126 = l_1533;
                        l_1612 = (g_695[1] = (safe_unary_minus_func_uint32_t_u(g_566)));
                        ++l_1618;
                        l_1501 = (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(4294967292UL, ((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(l_1534[3][2][0], p_31)) <= (p_30 || (!l_1501))), (((safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(0x340D6F2AEB9D20A0LL, 0UL)) || func_83(p_30)), p_30)) & g_1380) & l_1530))) == p_30))) < l_1433), g_251[3][1][3])), l_1604));
                    }
                }
                else
                {
                    for (l_1601 = 0; (l_1601 > (-19)); l_1601--)
                    {
                        return g_110;
                    }
                    l_1646 = ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s(0L, ((safe_add_func_int64_t_s_s(0xD0D12F0866236FDFLL, l_1642)) != (l_1490 <= ((safe_rshift_func_uint16_t_u_s((l_1501 = (l_1453 = (g_696[0] || l_1645[0]))), 7)) < 0xD374CE4BD3E534EFLL))))))) | l_1531);
                }
                for (g_1210 = 0; (g_1210 <= 0); g_1210 += 1)
                {
                    unsigned l_1649 = 0xAC1145A4L;
                    for (p_30 = 0; (p_30 <= 5); p_30 += 1)
                    {
                        int i;
                        l_1604 = (safe_rshift_func_int8_t_s_s(l_1645[g_1210], 0));
                        l_1649++;
                    }
                    for (g_189 = 0; (g_189 <= 0); g_189 += 1)
                    {
                        int i;
                        l_1501 &= func_75(l_1645[g_1210], (((func_59(((safe_rshift_func_uint8_t_u_s(246UL, ((safe_sub_func_uint8_t_u_u(func_75(l_1645[g_1210], (l_1646 >= (safe_lshift_func_uint8_t_u_u(0xBBL, 0))), g_190, p_29, g_1001), p_30)) > p_29))) < g_1164[1][0][5]), p_31, p_29, l_1649, g_1255) >= 0x28DF370739F236ACLL) < l_1645[g_1210]) | 0L), g_1211, l_1645[g_1210], l_1646);
                    }
                    return g_251[0][0][5];
                }
            }
            else
            {
                short l_1675[3][7] = {{1L, 3L, 0xE3A3L, 0xE3A3L, 3L, 1L, 3L}, {1L, 3L, 0xE3A3L, 0xE3A3L, 3L, 1L, 3L}, {1L, 3L, 0xE3A3L, 0xE3A3L, 3L, 1L, 3L}};
                int i, j;
                for (l_1453 = 0; (l_1453 >= 10); l_1453++)
                {
                    return l_1501;
                }
                g_183 = (safe_mod_func_uint16_t_u_u((((l_1675[1][6] = ((func_83((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_1501 &= (4294967291UL || (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(((safe_mul_func_uint16_t_u_u(g_118[1][1], p_30)) >= g_999))) | (g_453 = (g_2 >= l_1455))), (g_414 && (safe_mul_func_uint16_t_u_u(p_31, g_251[0][0][5]))))), g_1211)))), g_679)), 1))) | g_280[1][3]) == 1L)) ^ 1L) && l_1456), 0xE6C3L));
            }
            l_1532 &= (g_695[4] = (safe_lshift_func_int16_t_s_u(1L, (safe_mod_func_uint32_t_u_u(l_1646, l_1604)))));
            if ((l_1501 = 2L))
            {
                unsigned char l_1680 = 0x99L;
                l_1680++;
                g_695[1] = (-10L);
                return p_32;
            }
            else
            {
                int l_1687[5][2] = {{0x79BAB2C5L, (-3L)}, {0x79BAB2C5L, (-3L)}, {0x79BAB2C5L, (-3L)}, {0x79BAB2C5L, (-3L)}, {0x79BAB2C5L, (-3L)}};
                unsigned l_1717 = 5UL;
                int i, j;
                if ((l_1532 = (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(l_1601, 4)), g_1124))))
                {
                    unsigned short l_1696 = 0xFA6CL;
                    unsigned l_1697 = 0xE8AF112AL;
                    for (g_1255 = 0; (g_1255 <= 5); g_1255 += 1)
                    {
                        unsigned l_1698 = 0xC1DE7BF0L;
                        if (p_29)
                            break;
                        l_1698 = (l_1687[4][0] == (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(p_32, 10)), (safe_mod_func_uint16_t_u_u((1L != (g_1401 != func_83(p_31))), (safe_lshift_func_int8_t_s_s(l_1696, ((l_1697 == g_1092) >= 253UL))))))));
                        if (g_1274[1])
                            continue;
                    }
                    for (g_1000 = (-18); (g_1000 <= (-12)); ++g_1000)
                    {
                        unsigned l_1701 = 18446744073709551611UL;
                        int l_1702 = 0x69426F29L;
                        l_1701 = p_31;
                        l_1702 = g_1095[5];
                    }
                }
                else
                {
                    l_1646 = (safe_mul_func_uint8_t_u_u(l_1687[4][0], 0x1BL));
                }
                l_1717 = ((safe_sub_func_uint64_t_u_u(((g_310 ^ (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((1UL & ((safe_lshift_func_uint16_t_u_u((8UL <= (((g_1164[4][0][0] = p_31) ^ func_75((((safe_mod_func_int64_t_s_s(l_1532, (-1L))) | (safe_mod_func_uint16_t_u_u(g_626, p_31))) || l_1455), l_1532, g_1095[4], l_1646, p_29)) & g_695[2])), l_1490)) <= g_1401)), p_29)) < p_31), 2))) || g_696[0]), g_1000)) == 1L);
                return l_1488;
            }
        }
        else
        {
            unsigned l_1722[4][10][6] = {{{18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}, {18446744073709551615UL, 18446744073709551615UL, 0x9A652346L, 3UL, 18446744073709551606UL, 7UL}}};
            int l_1773 = 0x4D809132L;
            int l_1795[10][8] = {{1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}, {1L, 0x14EB07F9L, (-1L), 0x14EB07F9L, 1L, 8L, 1L, 0x14EB07F9L}};
            int i, j, k;
            if (((safe_lshift_func_uint16_t_u_s(l_1433, 3)) || (safe_lshift_func_uint16_t_u_u((1UL >= p_32), g_189))))
            {
                long long l_1733[7][3][5] = {{{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}, {{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}, {{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}, {{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}, {{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}, {{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}, {{(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}, {(-3L), 1L, 0xF442E0FE9E106D41LL, (-1L), 0xF442E0FE9E106D41LL}}};
                int l_1752 = (-1L);
                int i, j, k;
                l_1722[0][4][2]++;
                l_1455 = ((safe_mul_func_int16_t_s_s(((l_1734 &= (l_1646 = (l_1452 = (l_1733[5][0][3] = (((p_30 && (safe_sub_func_int8_t_s_s(8L, g_692))) & func_57(g_1274[4])) & (safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_1453, ((g_1164[1][0][0] = ((g_876 | (-1L)) == (l_1501 == 255UL))) ^ g_626))), l_1722[0][4][2]))))))) & l_1722[0][4][2]), p_28)) <= g_694);
                for (p_31 = 0; (p_31 <= 3); p_31 += 1)
                {
                    short l_1735[10] = {7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L};
                    int l_1736 = 0xE27BDD76L;
                    int i;
                    if ((l_1735[3] ^= 0L))
                    {
                        unsigned char l_1751[10][1][3] = {{{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}, {{0x0FL, 0xB2L, 1UL}}};
                        int i, j, k;
                        g_45 = (g_1390 < 65534UL);
                        l_1736 &= p_29;
                        l_1456 &= (safe_rshift_func_int16_t_s_s((func_38(g_695[5], ((g_451[0][6][1] != 0x76049D6EL) > (safe_sub_func_int64_t_s_s(g_692, g_1274[4]))), p_31) | (l_1752 = func_75(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((g_1255 <= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_2, g_1002)), 0x67L))), p_28)) != l_1722[2][2][4]) & 0UL), l_1736)), 0xC9L)) > g_999), g_692, g_1002, g_1611, l_1751[7][0][1]))), 13));
                    }
                    else
                    {
                        if (l_1734)
                            goto lbl_1753;
                        l_1646 = 4L;
                        if (l_1754)
                            continue;
                    }
                    return p_32;
                }
                for (g_679 = (-12); (g_679 == (-8)); ++g_679)
                {
                    for (g_242 = 2; (g_242 >= 0); g_242 -= 1)
                    {
                        int l_1761 = 0x425AE398L;
                        int l_1762[2][3] = {{0L, 0L, 0L}, {0L, 0L, 0L}};
                        int i, j;
                        l_1762[1][0] ^= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(g_696[g_242], (l_1501 = p_32))), (l_1761 = g_876)));
                        if (p_31)
                            continue;
                    }
                    g_105 = l_1457;
                    l_1452 = p_32;
                    if (l_1722[0][8][1])
                        continue;
                }
            }
            else
            {
                long long l_1771 = 0x52318B60A574440FLL;
                int l_1772 = 1L;
                for (g_44 = (-2); (g_44 != 19); ++g_44)
                {
                    g_268 = (func_59((safe_rshift_func_int16_t_s_s((l_1773 ^= func_83((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_696[0], ((8UL || (func_75(l_1457, l_1722[0][4][2], (l_1722[1][6][2] == g_1254), l_1771, l_1772) > g_1255)) <= g_118[1][3]))), 0x2EF4L)))), p_32)), l_1722[0][4][2], g_251[1][0][3], g_131[6][0][0], g_1001) || l_1772);
                }
                ++l_1774[0][2];
            }
            if ((g_268 != g_1210))
            {
                unsigned long long l_1791[6] = {0x98EDBD1406DCB728LL, 0UL, 0x98EDBD1406DCB728LL, 0UL, 0x98EDBD1406DCB728LL, 0UL};
                int l_1800 = (-1L);
                int l_1801 = 0x2568FA2CL;
                int l_1807 = 0L;
                int l_1813[2][4][3] = {{{0xE4E58767L, 0xE4E58767L, 0x55ACC253L}, {0xE4E58767L, 0xE4E58767L, 0x55ACC253L}, {0xE4E58767L, 0xE4E58767L, 0x55ACC253L}, {0xE4E58767L, 0xE4E58767L, 0x55ACC253L}}, {{0xE4E58767L, 0xE4E58767L, 0x55ACC253L}, {0xE4E58767L, 0xE4E58767L, 0x55ACC253L}, {0xE4E58767L, 0xE4E58767L, 0x55ACC253L}, {0xE4E58767L, 0xE4E58767L, 0x55ACC253L}}};
                long long l_1819 = 0xBF80CFADFCF5A8C7LL;
                int i, j, k;
                if ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_1274[4] = (!(6L < g_696[0]))), (4L < (p_30 <= (safe_lshift_func_int16_t_s_u((g_1464 = func_83((l_1455 == p_28))), 12)))))), l_1452)))
                {
                    l_1773 = ((g_626 ^= g_1274[1]) && p_31);
                    g_1380 = 0x757D4033L;
lbl_1797:
                    for (g_105 = 26; (g_105 >= 29); g_105++)
                    {
                        if (g_451[0][6][1])
                            break;
                    }
                    return l_1490;
                }
                else
                {
                    int l_1787 = 0x6B40B804L;
                    int l_1811 = 0xFF0DC62CL;
                    int l_1812 = 0xC7E58016L;
                    int l_1814 = 0x4FC78420L;
                    char l_1815[4][7][2] = {{{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}};
                    int l_1817 = 0x545680A3L;
                    int l_1818 = 0x535A835EL;
                    int i, j, k;
lbl_1796:
                    for (g_914 = (-30); (g_914 != (-29)); g_914++)
                    {
                        unsigned long long l_1788 = 0x0B133F3241A0E8AALL;
                        --l_1788;
                        if (g_1401)
                            goto lbl_1794;
                    }
                    if (g_566)
                    {
lbl_1794:
                        l_1791[5]--;
                        l_1795[1][0] = (l_1773 |= p_32);
                    }
                    else
                    {
                        int l_1798 = 0x806EFC4FL;
                        short l_1799 = 0x3F45L;
                        int l_1802 = 0L;
                        int l_1803 = 1L;
                        int l_1804 = (-9L);
                        int l_1806 = 1L;
                        int l_1808 = 0x643260F6L;
                        int l_1810[3][8] = {{0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L}, {0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L}, {0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L, 0x198C9858L, 0xA780D523L}};
                        int i, j;
                        if (g_1124)
                            goto lbl_1796;
                        if (g_679)
                            goto lbl_1797;
                        --g_1820[6][0][0];
                    }
                    g_695[4] ^= l_1813[0][2][1];
                    for (p_32 = 0; (p_32 != 21); ++p_32)
                    {
                        long long l_1825 = 0x1B0BE904130B2A98LL;
                        l_1734 = p_30;
                        l_1825 ^= (l_1815[0][6][0] | g_110);
                        if (l_1807)
                            continue;
                    }
                }
            }
            else
            {
                long long l_1859 = (-6L);
                unsigned long long l_1865[5];
                int l_1870 = 0xC844ACD2L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1865[i] = 18446744073709551613UL;
                if (g_999)
                    goto lbl_1826;
                l_1501 = p_32;
                for (g_453 = 0; (g_453 <= 1); g_453 += 1)
                {
                    int l_1834 = 0x6B91E4B9L;
                    int l_1839 = 0x40F6FC78L;
                    unsigned l_1840[2][6] = {{0x7DD3986BL, 0x7DD3986BL, 4294967286UL, 0x7DD3986BL, 0x7DD3986BL, 4294967286UL}, {0x7DD3986BL, 0x7DD3986BL, 4294967286UL, 0x7DD3986BL, 0x7DD3986BL, 4294967286UL}};
                    unsigned long long l_1862[10] = {18446744073709551613UL, 18446744073709551613UL, 0x4F76F778AAFD7BFELL, 0x4F76F778AAFD7BFELL, 18446744073709551613UL, 18446744073709551613UL, 18446744073709551613UL, 0x4F76F778AAFD7BFELL, 0x4F76F778AAFD7BFELL, 18446744073709551613UL};
                    int i, j;
                    for (g_676 = 1; (g_676 >= 0); g_676 -= 1)
                    {
                        unsigned l_1829 = 0xC076F526L;
                        int l_1838 = 0x18D8F03CL;
                        int i;
                        g_695[(g_676 + 3)] = ((safe_mul_func_int8_t_s_s((func_83((l_1829 = g_695[(g_676 + 3)])) || (safe_add_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(0xD331L, func_59(l_1834, p_28, g_106, (safe_sub_func_int8_t_s_s(l_1837, (0x0889L ^ ((g_695[g_676] &= l_1774[0][7]) || 0x9A197904L)))), p_32))) > 1UL) | (-1L)), g_1000))), 0L)) ^ l_1838);
                        g_183 = p_29;
                        ++l_1840[1][1];
                        if (l_1816[0])
                            continue;
                    }
                    for (p_32 = 0; (p_32 >= 0); p_32 -= 1)
                    {
                        unsigned l_1845[8][5] = {{18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}, {18446744073709551615UL, 0xD8765358L, 1UL, 0x4B0A7B5BL, 0x3962EE77L}};
                        int l_1866 = (-3L);
                        int i, j;
                        if (l_1809[6][4][1])
                            break;
                        l_1839 = func_59(g_1274[1], p_32, func_83((((((((g_678 > (g_1854 = ((safe_add_func_uint8_t_u_u((l_1845[2][3] > (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_1774[p_32][p_32] = ((safe_add_func_int32_t_s_s(0x1CEC15A0L, func_75(g_1820[6][0][0], (safe_lshift_func_uint16_t_u_u(((g_1124 = func_75(g_372, g_280[1][3], (l_1834 = p_32), l_1840[1][1], l_1722[0][4][2])) & g_1255), g_676)), p_31, l_1840[0][1], l_1773))) || 0xAEL)), p_30)), 0x86L))), l_1773)) < l_1805))) < g_242) | p_29) == l_1839) > l_1490) <= g_199[1][2][2]) <= 0UL)), p_32, g_1274[0]);
                        l_1834 = (safe_mul_func_int16_t_s_s(((safe_mod_func_int64_t_s_s((g_186 != (!p_31)), p_29)) | l_1773), (l_1859 = g_696[1])));
                        l_1866 = (((l_1773 = (safe_lshift_func_int8_t_s_u(func_83(l_1862[2]), l_1453))) <= p_29) ^ (p_30 && (safe_unary_minus_func_uint8_t_u((((l_1865[2] &= (func_75(l_1722[2][0][4], p_32, g_1864, g_999, g_251[0][0][5]) & l_1488)) >= 0UL) | (-8L))))));
                    }
                    for (l_1501 = 0; (l_1501 <= 1); l_1501 += 1)
                    {
                        long long l_1867 = 0x20C60F7FF5E39613LL;
                        l_1795[9][0] |= (0x5735L >= (l_1805 |= g_242));
                        g_695[1] = (~((l_1867 = 5UL) ^ g_695[5]));
                        l_1870 = (safe_mod_func_int8_t_s_s(g_1000, (0xB00DFCD9F0E3D742LL & (0x0C57L == p_32))));
                        return l_1456;
                    }
                }
            }
            return g_696[0];
        }
    }
}







static char func_38(unsigned p_39, int p_40, int p_41)
{
    unsigned l_46 = 0x80008586L;
    char l_49[5] = {0x72L, (-10L), 0x72L, (-10L), 0x72L};
    int l_68[9][6][4] = {{{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}, {{(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}, {(-1L), 1L, 0x835292FDL, (-8L)}}};
    unsigned long long l_119[3][3] = {{0x1F9CA1EE17268510LL, 0x1F9CA1EE17268510LL, 18446744073709551611UL}, {0x1F9CA1EE17268510LL, 0x1F9CA1EE17268510LL, 18446744073709551611UL}, {0x1F9CA1EE17268510LL, 0x1F9CA1EE17268510LL, 18446744073709551611UL}};
    char l_120 = 8L;
    int i, j, k;
lbl_50:
    ++l_46;
    for (p_39 = 0; (p_39 <= 4); p_39 += 1)
    {
        long long l_67[9][9] = {{0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}, {0x4E288A3D85AA7F79LL, 0xA6C9C6C2CF37692ALL, 0xB55E8A086CC6B0C4LL, (-8L), 0xB387E8D9F6C85063LL, 0xB387E8D9F6C85063LL, (-8L), 0xB55E8A086CC6B0C4LL, 0xA6C9C6C2CF37692ALL}};
        int l_115 = 0L;
        int i, j;
        if (p_39)
            goto lbl_50;
        for (l_46 = 1; (l_46 <= 4); l_46 += 1)
        {
            unsigned char l_117[7][10] = {{0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}, {0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}, {0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}, {0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}, {0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}, {0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}, {0xAAL, 0xC5L, 0xC5L, 0xAAL, 0x70L, 0UL, 0x9CL, 0xA9L, 255UL, 1UL}};
            int i, j;
            for (p_41 = 3; (p_41 >= 1); p_41 -= 1)
            {
                int i;
                return l_49[l_46];
            }
            if (p_40)
                continue;
            g_1380 |= (safe_lshift_func_uint8_t_u_u(func_53(func_57((65535UL || (func_59(g_2, (safe_mod_func_uint32_t_u_u(((0L >= ((((+(l_68[5][0][0] = (~((l_67[2][7] &= p_41) == 0x4738L)))) != (safe_rshift_func_int8_t_s_u(l_46, (g_118[2][1] &= (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_75(l_49[4], ((safe_lshift_func_int16_t_s_u(func_83(g_44), g_2)) | l_46), l_115, g_105, l_49[0]), 1UL)), l_117[3][1])))))) || l_119[2][1]) > l_119[2][1])) & g_44), l_120)), l_115, g_106, g_105) > l_119[2][1]))), p_41, l_115), 3));
        }
    }
    return g_1092;
}







static unsigned char func_53(char p_54, unsigned p_55, unsigned long long p_56)
{
    int l_711[7][8] = {{0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}, {0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}, {0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}, {0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}, {0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}, {0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}, {0x7AD22136L, (-3L), 4L, (-2L), (-1L), 0L, (-1L), (-2L)}};
    int l_712 = (-1L);
    char l_742 = (-3L);
    unsigned l_775 = 4294967292UL;
    short l_898 = 1L;
    long long l_990 = 0xF55753D93920B73BLL;
    int l_1088[2][7];
    unsigned l_1089 = 0x65141234L;
    unsigned l_1100 = 4294967295UL;
    unsigned short l_1182[4] = {0xBCAAL, 4UL, 0xBCAAL, 4UL};
    long long l_1213 = 0xA55DF36E09DE139FLL;
    int l_1256 = 0x2B53576FL;
    short l_1306 = 6L;
    unsigned short l_1308 = 0xD799L;
    long long l_1315[7] = {0L, (-8L), 0L, (-8L), 0L, (-8L), 0L};
    unsigned long long l_1402 = 18446744073709551613UL;
    unsigned short l_1429 = 0xDA87L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_1088[i][j] = 0x8A90C60DL;
    }
    for (g_694 = 0; (g_694 <= 3); g_694 += 1)
    {
        unsigned short l_704[6] = {0xB548L, 0xB548L, 0x61F3L, 0xB548L, 0xB548L, 0x61F3L};
        unsigned short l_728 = 0UL;
        int l_729 = 0x6269CC05L;
        unsigned short l_755 = 0xAEC9L;
        int l_827 = 0xFA4ACD14L;
        int l_829[10][5] = {{0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}, {0x70E86D3EL, 0x70E86D3EL, (-4L), 0L, 0xF7D95AE7L}};
        long long l_868 = (-6L);
        int i, j;
        g_105 = g_566;
        g_126 = l_704[1];
        for (g_372 = 0; (g_372 <= 3); g_372 += 1)
        {
            unsigned long long l_727 = 0x15089FF922532A27LL;
            int l_748 = 0xA76F7029L;
            int l_806 = 4L;
            int l_828 = 0x3364017EL;
            int l_830 = 0x9BB266CFL;
            int l_832 = 0xF35E9DBAL;
            int l_834 = (-4L);
            int l_835 = 0xF480FE4BL;
            int l_837 = 0L;
            int l_838[6] = {1L, 0L, 1L, 0L, 1L, 0L};
            int i;
            g_268 &= (l_729 |= (safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((!(g_112 ^ ((l_711[6][0] = (g_453 = p_56)) != l_712))) != (safe_mul_func_uint8_t_u_u((g_189 > ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((0x1906L ^ ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(p_55, (safe_mul_func_int8_t_s_s((0x4F19L > func_75(g_118[2][0], l_727, p_55, l_704[1], l_728)), 0xD4L)))), p_56)) == g_118[2][4])), l_712)) <= p_56), p_54)), 1L)) ^ 0x3AL)), g_199[1][2][2]))), 0x47L)), 0L)) && 0xDFL), g_242)));
            if ((l_729 = (l_712 = func_83(p_55))))
            {
                unsigned short l_749 = 1UL;
                l_711[1][0] = (~(4L && (func_59(g_105, func_59(((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((p_56 == (safe_lshift_func_int16_t_s_u(3L, 7))), (safe_sub_func_uint8_t_u_u((((l_712 = 0x2C689F35L) <= (safe_add_func_uint16_t_u_u(g_692, (safe_lshift_func_uint8_t_u_u((l_749 = (l_729 = func_75(l_742, (safe_sub_func_uint64_t_u_u(g_693, (l_748 = (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s((p_55 & p_56))), 15))))), g_692, l_704[0], p_55))), l_727))))) >= g_414), p_56)))), l_704[3])) || g_566), g_126, g_695[4], p_55, g_679), g_676, g_628, l_727) == 1UL)));
                for (l_727 = 0; (l_727 <= 3); l_727 += 1)
                {
                    char l_754[2];
                    int l_756 = 0x9AF378B9L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_754[i] = 0x8AL;
                    l_754[1] |= (0x4EF98D92F7C8D6BDLL && (((safe_sub_func_int32_t_s_s(((l_711[4][0] = (l_748 |= (g_626 &= (p_54 = func_83((0UL >= 0x53L)))))) && (safe_sub_func_uint8_t_u_u(l_749, g_199[7][2][5]))), func_75(g_676, p_56, (((g_692 > l_742) && 0x32L) < 0xEAB38A06E6DF0A60LL), g_181, l_704[1]))) | 0x42017CC83FDD2CD8LL) ^ p_56));
                    g_105 = ((l_748 &= (l_755 < g_628)) && (l_756 ^= 65528UL));
                }
            }
            else
            {
                unsigned l_773 = 0xC0B4C452L;
                int l_774 = 0L;
                l_748 = (((((g_377 |= (safe_sub_func_int64_t_s_s(func_59(p_54, p_55, (safe_add_func_int32_t_s_s(l_727, (safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((g_118[3][4]--) ^ (safe_mod_func_int16_t_s_s(p_54, (safe_add_func_uint8_t_u_u(func_83(l_742), (safe_lshift_func_uint16_t_u_u(p_55, ((l_773 = l_727) >= (l_727 && 3L))))))))), l_774)), 0x47L)))), p_55, g_693), p_55))) & l_775) | g_628) & l_774) && 3UL);
            }
            if ((safe_add_func_uint32_t_u_u((l_748 = (func_83((safe_rshift_func_uint8_t_u_s((~((+(l_729 ^= ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(0xDF66DE99L, ((g_118[2][4] >= g_414) < func_75(l_711[6][0], func_75(func_75(p_54, (safe_sub_func_uint32_t_u_u(p_54, (safe_rshift_func_int16_t_s_s(((-1L) || func_75(g_678, g_280[4][4], g_695[2], l_728, l_775)), 12)))), g_105, p_55, g_280[2][3]), p_55, p_55, g_199[1][2][2], p_55), g_280[2][8], p_54, g_114)))), l_748)), g_377)) || g_242))) <= 0x76D8C12FL)), g_626))) | g_695[5])), p_54)))
            {
                int l_798 = 0x0BFBEAF8L;
                int l_803 = 0x238C6389L;
                int l_824 = 0x2E6C3C1FL;
                int l_833 = 0L;
                int l_836 = 0x3830EB65L;
                char l_839 = 0x3FL;
                long long l_851[9];
                long long l_866 = 0L;
                int i;
                for (i = 0; i < 9; i++)
                    l_851[i] = 0L;
                if ((safe_mul_func_uint16_t_u_u(func_59(g_112, p_56, (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(0x3115L, 1)), (safe_lshift_func_int8_t_s_s(func_75(g_183, l_798, (safe_lshift_func_uint8_t_u_s(p_55, (safe_add_func_uint64_t_u_u((l_803 = p_56), p_55)))), ((((safe_lshift_func_uint8_t_u_s((p_56 == g_377), l_727)) > p_55) && g_692) < g_372), g_693), 1)))), g_118[1][1], p_56), l_806)))
                {
                    unsigned l_814[9];
                    int l_817 = 1L;
                    int l_819 = (-1L);
                    int l_823 = 6L;
                    int l_826[1][8][10] = {{{0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}, {0xEDE6279FL, 0x2CA2F52FL, (-3L), 0L, 0x4B7E9EE2L, 4L, 0x16F0C509L, 0x16F0C509L, 4L, 0x4B7E9EE2L}}};
                    unsigned char l_840[3][4] = {{0x8DL, 0x8DL, 5UL, 0x8DL}, {0x8DL, 0x8DL, 5UL, 0x8DL}, {0x8DL, 0x8DL, 5UL, 0x8DL}};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_814[i] = 0UL;
                    for (p_56 = 0; (p_56 <= 3); p_56 += 1)
                    {
                        short l_822 = 0x4F40L;
                        int l_825[5][6] = {{(-6L), 0x55CF535AL, 0x1E0CE11FL, 0x55CF535AL, (-6L), (-1L)}, {(-6L), 0x55CF535AL, 0x1E0CE11FL, 0x55CF535AL, (-6L), (-1L)}, {(-6L), 0x55CF535AL, 0x1E0CE11FL, 0x55CF535AL, (-6L), (-1L)}, {(-6L), 0x55CF535AL, 0x1E0CE11FL, 0x55CF535AL, (-6L), (-1L)}, {(-6L), 0x55CF535AL, 0x1E0CE11FL, 0x55CF535AL, (-6L), (-1L)}};
                        int i, j;
                        g_695[4] = ((safe_unary_minus_func_uint16_t_u((l_803 <= ((safe_rshift_func_uint16_t_u_s(func_83((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((func_59(l_814[5], l_728, ((l_814[0] && ((safe_lshift_func_int8_t_s_u(((l_806 <= l_711[6][0]) != (l_775 <= (l_819 = (g_818 = (l_817 = g_44))))), 6)) >= ((func_75(((safe_lshift_func_int8_t_s_s((0x63AAL || g_118[2][1]), p_54)) >= p_56), l_814[4], p_54, g_453, l_814[3]) >= l_814[5]) < l_748))) && g_190), p_56, g_199[3][1][4]) | g_199[1][2][2]), g_695[2])), g_453))), 13)) | p_54)))) != g_679);
                        l_840[1][1]--;
                    }
                    l_851[6] = (g_268 = ((((1L != g_45) > ((g_199[1][2][2] > 0UL) > 0x40CCB57C9D7B12CDLL)) > (p_56--)) | func_75(((l_711[6][0] || (18446744073709551609UL != (g_693 = (l_711[6][0] = (g_131[8][3][1] = (((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_75((safe_add_func_int8_t_s_s(1L, (p_54 | 0x61CA07539E42C29ALL))), p_54, g_105, p_54, l_840[2][3]), g_678)), g_131[8][3][1])) <= l_704[1]) != 1UL) <= (-4L)) & p_54)))))) & 1UL), g_692, p_55, g_818, g_107)));
                    g_105 ^= (-2L);
                }
                else
                {
                    l_803 ^= (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((p_54 = 1L), (l_712 = (3UL == l_836)))), (g_242 = func_83(l_748))));
                    if (g_186)
                        break;
                }
                l_830 = ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(func_75(func_59((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((p_55 != (func_59(p_54, l_829[2][2], g_280[1][3], func_83(l_727), (func_75(g_131[7][0][1], ((0x7AL > (safe_mod_func_int16_t_s_s((((0x56538BF7L < g_242) <= g_105) >= p_55), l_775))) > p_54), l_712, l_829[2][2], p_56) <= 1L)) != l_830)), l_866)) ^ 6L), p_56)), g_280[3][7], g_181, g_453, g_694), l_830, g_106, l_851[6], g_679), g_695[1])), g_105)) == g_251[1][0][1]);
                for (g_377 = 0; (g_377 <= 2); g_377 += 1)
                {
                    long long l_870 = (-10L);
                    for (p_54 = 2; (p_54 >= 0); p_54 -= 1)
                    {
                        short l_869 = 0x045EL;
                        l_827 |= g_414;
                        g_268 = ((l_869 &= (safe_unary_minus_func_int32_t_s((p_56 ^ (6UL != func_83(l_868)))))) | g_693);
                        l_870 = 1L;
                        if (p_56)
                            break;
                    }
                    if (g_118[2][1])
                        break;
                    for (g_818 = 0; (g_818 <= 1); g_818 += 1)
                    {
                        return l_866;
                    }
                }
                for (p_55 = 0; (p_55 <= 3); p_55 += 1)
                {
                    unsigned long long l_871 = 0UL;
                    for (g_678 = 0; (g_678 <= 3); g_678 += 1)
                    {
                        unsigned short l_879 = 65535UL;
                        int l_899 = 8L;
                        l_871--;
                        l_899 = (l_898 &= (safe_mul_func_uint16_t_u_u((g_876 |= g_189), func_75(((!g_372) > ((safe_mul_func_uint16_t_u_u((++l_879), (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_827 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(func_59(g_626, (safe_sub_func_int8_t_s_s(1L, (g_676 < ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(func_83((safe_rshift_func_int8_t_s_s((p_55 > 0xC6E81CA4F6A6AFC0LL), 4))), ((g_126 = (g_695[4] ^= ((((g_676 < p_56) < l_832) >= 0x39EA18F2FE4C62D9LL) > p_56))) || p_56))), 0UL)) <= p_54)))), l_866, g_199[1][2][2], p_55), 0)), 4))), l_851[6])), 14)))) | p_54)), g_280[1][3], l_829[2][2], g_372, g_251[0][0][5]))));
                    }
                }
            }
            else
            {
                g_105 = (-1L);
                l_829[2][2] = g_696[0];
                l_838[1] = p_54;
            }
            g_268 ^= ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(g_189, ((g_310 < (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(1UL, (func_75(g_2, (safe_rshift_func_int8_t_s_u(0x70L, 5)), p_56, (safe_sub_func_uint64_t_u_u(g_914, (l_775 > func_75(((p_54 = p_55) <= g_131[8][3][1]), p_56, p_55, g_696[0], p_56)))), g_199[7][0][4]) > g_914))), 0)), g_126))) > p_56))) <= g_695[2]), l_838[1])) > g_131[2][1][1]);
            for (l_868 = 0; (l_868 <= 3); l_868 += 1)
            {
                unsigned l_923 = 0x7ECCBD3BL;
                l_837 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((func_83((l_832 | (l_923 = (safe_lshift_func_uint16_t_u_u(g_692, l_828))))) == p_55), 2)), 3)), 6));
            }
        }
    }
    for (g_112 = (-4); (g_112 >= 26); ++g_112)
    {
        int l_930 = (-10L);
        int l_944 = 0x9FCE6EF1L;
        int l_946 = 0xF329EA1FL;
        long long l_953 = (-1L);
        int l_1003[6][8] = {{0xE7606FBEL, 1L, 0x0237C425L, 3L, (-2L), 1L, 0xA58C6F4DL, (-5L)}, {0xE7606FBEL, 1L, 0x0237C425L, 3L, (-2L), 1L, 0xA58C6F4DL, (-5L)}, {0xE7606FBEL, 1L, 0x0237C425L, 3L, (-2L), 1L, 0xA58C6F4DL, (-5L)}, {0xE7606FBEL, 1L, 0x0237C425L, 3L, (-2L), 1L, 0xA58C6F4DL, (-5L)}, {0xE7606FBEL, 1L, 0x0237C425L, 3L, (-2L), 1L, 0xA58C6F4DL, (-5L)}, {0xE7606FBEL, 1L, 0x0237C425L, 3L, (-2L), 1L, 0xA58C6F4DL, (-5L)}};
        unsigned l_1044 = 4UL;
        long long l_1064 = (-2L);
        unsigned char l_1085 = 255UL;
        int i, j;
        for (g_268 = 0; (g_268 >= 11); g_268++)
        {
            unsigned char l_943[4][5] = {{246UL, 0x59L, 246UL, 0x59L, 246UL}, {246UL, 0x59L, 246UL, 0x59L, 246UL}, {246UL, 0x59L, 246UL, 0x59L, 246UL}, {246UL, 0x59L, 246UL, 0x59L, 246UL}};
            int l_945 = 5L;
            unsigned l_957[2];
            unsigned long long l_958 = 0x5885D7161B797867LL;
            int l_977 = 9L;
            unsigned l_1004 = 18446744073709551609UL;
            short l_1051 = 1L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_957[i] = 0xEBCEBD07L;
            if (func_59(g_110, g_242, (safe_mul_func_int16_t_s_s(l_930, g_679)), (l_946 = (p_54 == (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_310, (((safe_rshift_func_int16_t_s_s((l_945 = (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0xFCL, (l_775 < (safe_sub_func_uint64_t_u_u((l_944 = (((g_696[2] = (l_943[3][2] ^= ((g_372 = (0x6CE78ED1L >= g_566)) <= 0xA188L))) | g_118[2][1]) || l_712)), 0x00708CD4D4C971E3LL))))), 9))), g_876)) ^ l_711[4][6]) && 1L))) && g_695[1]), (-4L))))), g_679))
            {
                unsigned l_965[1];
                unsigned l_975 = 0x5B649391L;
                int i;
                for (i = 0; i < 1; i++)
                    l_965[i] = 0xF5BF4939L;
                g_695[1] &= (!l_943[0][1]);
                if (p_56)
                {
                    long long l_956[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_956[i] = 2L;
                    g_126 = g_199[7][2][1];
                    l_958 = (func_59((g_626 &= (safe_add_func_uint16_t_u_u(p_54, (safe_add_func_int8_t_s_s((func_75(p_55, p_55, ((((safe_sub_func_int8_t_s_s(g_251[0][0][5], l_953)) > (safe_add_func_uint64_t_u_u((p_55 == (g_186 ^ (p_55 != func_75(func_75(g_696[0], g_453, p_56, g_242, l_945), p_54, p_54, l_956[1], g_114)))), 0L))) != g_118[1][3]) & 0UL), l_957[0], l_957[0]) < l_946), g_692))))), g_693, p_55, g_696[0], p_54) == 0xE604EA29L);
                }
                else
                {
                    unsigned short l_974 = 65532UL;
                    int l_976[8] = {(-10L), (-10L), (-1L), (-10L), (-10L), (-1L), (-10L), (-10L)};
                    int i;
                    for (l_898 = 0; (l_898 >= 12); ++l_898)
                    {
                        g_695[2] |= ((l_957[0] || ((safe_add_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u(((l_945 = g_914) < (0x38169016L != (g_453 = (p_56 ^ l_965[0])))), (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(p_55, l_898)), p_55)), (safe_add_func_int16_t_s_s(func_59(l_711[6][0], l_974, l_975, l_775, g_676), 0x1F60L)))))) ^ g_44) & p_54), p_54)) & p_55)) | g_626);
                        l_976[0] = 1L;
                    }
                    for (p_54 = 0; (p_54 <= 3); p_54 += 1)
                    {
                        int i, j;
                        return l_943[p_54][(p_54 + 1)];
                    }
                    l_977 |= l_945;
                }
                l_946 &= (+g_377);
            }
            else
            {
                int l_989 = 0x242E6372L;
                int l_991 = 1L;
                int l_1018 = 0x6CE22DAEL;
                short l_1027 = 0x5115L;
                for (g_110 = 0; (g_110 > 21); g_110 = safe_add_func_int16_t_s_s(g_110, 4))
                {
                    int l_984 = 0x85140BEAL;
                    int l_996 = 0L;
                    for (g_676 = 0; (g_676 <= 3); g_676 += 1)
                    {
                        int l_998[5][6][8] = {{{7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}}, {{7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}}, {{7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}}, {{7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}}, {{7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}, {7L, 0L, 1L, 0x72AD868EL, 0xC594E6E8L, (-4L), (-4L), 0xC594E6E8L}}};
                        int i, j, k;
                        if (g_280[(g_676 + 1)][(g_676 + 5)])
                            break;
                        g_695[5] = (((g_199[(g_676 + 6)][g_676][g_676] > ((6UL == g_199[4][1][5]) == (g_696[0] |= l_712))) && (g_126 = 0x213CFD30L)) && l_945);
                        l_998[2][0][6] = (((l_945 &= (0xF06F7B73L | (g_377 < p_54))) || (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(func_59(l_984, (((safe_sub_func_uint16_t_u_u((p_56 >= (safe_lshift_func_int16_t_s_u((l_990 = (l_989 = p_56)), ((l_991 | (safe_sub_func_uint32_t_u_u(l_742, (safe_lshift_func_uint16_t_u_s((l_1004++), 7))))) >= (p_54 == g_696[0]))))), p_56)) <= g_527) >= g_1001), l_1003[3][6], g_280[1][3], g_199[1][2][2]), l_984)), p_55))) | 1L);
                        l_944 = (l_991 = p_54);
                    }
                }
                for (l_953 = 0; (l_953 != (-23)); --l_953)
                {
                    unsigned char l_1011[3];
                    int l_1028 = 9L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1011[i] = 1UL;
                    for (g_1000 = 0; (g_1000 >= (-8)); --g_1000)
                    {
                        l_945 |= (p_54 < 0x192204A8L);
                        l_1011[1] = p_54;
                        l_945 = (-10L);
                    }
                    for (l_742 = (-28); (l_742 != (-24)); l_742++)
                    {
                        int l_1029 = 0x26C2D9CFL;
                        int l_1030 = 0x6593C181L;
                        g_695[5] = func_75(l_946, (func_75((p_55 < p_54), ((((-1L) == ((((l_1030 ^= (((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_1018, (safe_mod_func_int64_t_s_s((p_55 && ((((l_1028 = ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(p_56, (l_977 = g_696[1]))) == l_958) && g_876) && g_45), 0x97L)) > 0x751983C3L), p_55)) < l_1027)) == l_1029) | l_991) == g_126)), p_54)))), p_56)) | p_54) | g_1001)) | l_958) == 0xBE9A1B7DL) > 1L)) != 0x69A8L) > g_126), l_991, l_711[0][6], g_2) | p_55), p_54, l_742, l_1018);
                        if (g_251[4][1][4])
                            continue;
                    }
                }
                for (g_693 = 1; (g_693 >= 0); g_693 -= 1)
                {
                    int l_1037 = 0xB4B64885L;
                    for (l_990 = 0; (l_990 <= 3); l_990 += 1)
                    {
                        char l_1038[7] = {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L)};
                        unsigned l_1039[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1039[i] = 9UL;
                        g_45 = (l_1003[(l_990 + 1)][l_990] ^= (safe_mod_func_uint32_t_u_u(((g_118[(g_693 + 4)][l_990] < (((safe_add_func_uint64_t_u_u((func_75(g_118[(g_693 + 4)][l_990], (((safe_add_func_int16_t_s_s(g_186, (g_114 <= (func_75((l_1018 = (g_251[(l_990 + 1)][g_693][(g_693 + 2)] |= 0xD55DL)), func_75(l_898, l_1037, ((g_372 <= (g_377 >= 4294967295UL)) & l_945), l_1038[2], p_56), g_280[4][6], g_118[2][1], g_696[1]) & l_977)))) || 0xE57A99392904FFEFLL) & p_54), l_930, l_712, l_943[0][1]) == l_991), g_268)) ^ p_55) > g_118[(g_693 + 4)][l_990])) || p_54), 0x318F20CDL)));
                        --l_1039[1];
                        g_695[4] = ((p_54 & ((p_54 >= (g_126 ^= 0x363B9065L)) > (safe_lshift_func_uint8_t_u_u(l_1044, (safe_mul_func_int8_t_s_s(((!((((safe_rshift_func_int16_t_s_u((p_56 & (l_945 = p_54)), 15)) && (safe_mod_func_uint32_t_u_u((p_54 || p_54), ((((l_957[1] & g_1001) >= l_1037) != (-5L)) && g_190)))) > p_56) ^ 4294967286UL)) < g_268), g_251[0][0][5])))))) < l_1051);
                    }
                    if (g_695[2])
                        break;
                    if (p_55)
                        continue;
                }
            }
        }
        for (g_876 = (-23); (g_876 == 37); g_876++)
        {
            unsigned l_1065 = 9UL;
            int l_1074 = 0x29FA6F19L;
            int l_1077 = 0xCC6CC199L;
            l_1003[3][6] = func_75(l_1003[4][6], l_1003[0][3], ((safe_mod_func_uint8_t_u_u(func_75(((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x9CL, ((g_693 &= 0L) | (safe_rshift_func_int16_t_s_u(((g_114 = (p_55 | (!l_1064))) | p_54), 15))))), 0UL)), g_126)) > 0x4BL), p_56, g_628, g_268, g_372), 0xC9L)) == p_54), l_775, l_1065);
            l_1077 = (g_126 = (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(func_75(((safe_rshift_func_int8_t_s_u(l_1065, (p_54 || l_1065))) & (safe_lshift_func_int8_t_s_u(((~((l_1003[5][0] = ((p_56 || (65535UL | (((g_676 | (l_1074 |= g_695[2])) || (safe_mul_func_uint8_t_u_u(p_54, (0UL != 5L)))) & g_1001))) && g_1001)) == g_280[1][3])) < 0xA7C09250CA7B57D5LL), 5))), l_1065, l_944, g_676, g_696[1]), p_56)), 0x39FF73BEL)));
        }
        g_105 &= (l_946 = (safe_sub_func_int32_t_s_s((+p_55), (g_1001 > (safe_mul_func_uint8_t_u_u(((((0x1D346BAEEB4F92DALL != p_55) && (safe_unary_minus_func_uint32_t_u(func_75(p_56, (((safe_rshift_func_int16_t_s_u(((g_199[3][1][1] > ((l_712 = l_1085) < (safe_mul_func_uint8_t_u_u(((l_1088[1][6] & l_930) && g_451[0][6][1]), l_1064)))) | g_118[3][4]), 10)) & 0L) <= p_55), g_199[3][1][4], l_1089, p_54)))) | g_679) & g_44), p_56))))));
        l_712 &= func_75(g_280[1][3], (safe_add_func_int64_t_s_s(((g_1095[3] = (--g_1092)) && ((0xFB8BA912L <= g_694) && (safe_add_func_uint16_t_u_u(p_55, (safe_mod_func_int64_t_s_s((0x2E18L & g_268), l_946)))))), l_898)), p_56, l_1088[1][6], g_695[2]);
    }
    g_268 = 0x04A81792L;
    if (g_112)
    {
        int l_1107 = 0L;
        unsigned long long l_1183 = 9UL;
        int l_1218 = 0x3BB14E09L;
        int l_1221 = 0L;
        int l_1225 = 7L;
        int l_1307 = 0x2291AB59L;
        int l_1318 = 0x2D94C069L;
        int l_1321 = 0x8FE25ED5L;
        int l_1323 = 0xCB7CD02BL;
        unsigned short l_1324 = 0xFF4AL;
        long long l_1355 = 0x30B34C8DEC24FA39LL;
        int l_1387 = 0x8B84FBE3L;
        int l_1388 = 8L;
        int l_1389 = 0x07773A16L;
        ++l_1100;
lbl_1425:
        for (g_676 = 0; (g_676 <= 4); g_676++)
        {
            unsigned l_1123 = 0x80B55BA4L;
            int l_1125 = 0x9B48EBF5L;
            int l_1148 = 0x139F6275L;
            int l_1215[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1215[i] = 0x39C4EEBCL;
            l_1088[0][3] = func_83(g_44);
            for (g_112 = 0; (g_112 == 12); ++g_112)
            {
                short l_1140 = 0x6DC3L;
                int l_1155 = (-1L);
                if (func_75(l_1107, g_676, (safe_sub_func_int8_t_s_s((g_818 = (((l_1125 = (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((g_110 >= ((((safe_unary_minus_func_int8_t_s((g_626 = (g_1001 = ((p_54 > g_181) != (safe_mul_func_int8_t_s_s((p_56 ^ (l_712 | (safe_mul_func_uint16_t_u_u((g_1126 &= (func_59((safe_add_func_uint16_t_u_u((g_1124 = (safe_lshift_func_int16_t_s_s(g_268, ((l_1123 = 0xB8C6L) || 0x6BACL)))), 65531UL)), g_628, g_1000, g_181, l_1125) && 0x5C64L)), 0xDFF1L)))), 0x8BL))))))) ^ g_110) > (-9L)) != l_775)), g_110)) <= 18446744073709551615UL), 5))) && l_1125) != g_189)), l_1107)), g_112, g_118[2][1]))
                {
                    if (g_999)
                        break;
                    for (g_242 = (-16); (g_242 < (-7)); g_242 = safe_add_func_uint16_t_u_u(g_242, 5))
                    {
                        return g_999;
                    }
                }
                else
                {
                    unsigned l_1133[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1133[i] = 0x343FB70FL;
                    for (g_377 = 0; (g_377 == 1); g_377 = safe_add_func_int64_t_s_s(g_377, 5))
                    {
                        int l_1147 = 0xB2E75D82L;
                        l_1148 = (p_56 <= ((safe_add_func_int32_t_s_s(0x7F1A5462L, l_898)) & (l_1133[5] == (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_1125 |= (safe_lshift_func_int8_t_s_u(l_1140, 7))) >= ((safe_sub_func_int8_t_s_s(func_75(g_1002, g_451[0][0][3], (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((func_75(p_56, p_55, p_54, p_54, g_999) || p_54), g_1124)), g_999)), p_56, l_1147), g_876)) == l_1147)), l_1147)), p_55)))));
                        g_268 &= (safe_lshift_func_int16_t_s_u(l_1148, 13));
                        if (p_56)
                            break;
                        g_183 = (safe_lshift_func_int8_t_s_s((g_110 != (safe_mul_func_uint16_t_u_u((l_1155 = l_1147), (func_75(p_56, func_59(l_1125, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(p_55, p_56)), (safe_sub_func_int16_t_s_s(g_190, (+p_54))))), (g_1126--), (~((g_696[0] = (!func_75(g_696[0], p_56, g_694, l_1123, g_818))) != p_55)), g_694), l_1107, l_1089, g_1164[4][0][0]) >= g_110)))), 6));
                    }
                }
            }
            for (g_107 = 0; (g_107 <= 2); g_107 += 1)
            {
                int l_1212 = (-6L);
                int l_1217 = (-9L);
                int l_1219 = 0x276AA6A0L;
                int l_1220 = (-1L);
                int l_1222 = 0x8C627ABDL;
                int l_1223 = (-1L);
                int l_1224[9][2] = {{0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}, {0x316DBC36L, (-1L)}};
                unsigned short l_1226 = 0UL;
                int i, j;
                g_268 ^= (g_696[g_107] == (((l_1125 = (safe_mod_func_int16_t_s_s((func_59(g_696[g_107], (safe_lshift_func_int16_t_s_u((0x8CCFL && l_1107), 6)), ((p_56 >= (l_711[6][0] = (((func_59((safe_mod_func_int64_t_s_s(g_110, (l_1148 ^= p_55))), g_44, g_696[g_107], g_696[g_107], g_696[0]) <= g_181) > p_55) == g_189))) > l_1107), l_1088[1][6], p_56) && l_1123), 0x5745L))) <= p_56) | 0xC0F9L));
                if ((l_1125 || l_1148))
                {
                    unsigned l_1177[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1177[i] = 4294967295UL;
                    g_126 |= (g_1164[1][0][0] <= ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_451[0][6][1], ((func_75((l_1177[2] |= l_1148), (safe_rshift_func_int16_t_s_s(p_54, 12)), (l_1107 || (8UL | 18446744073709551615UL)), (safe_sub_func_int16_t_s_s(p_55, func_75((l_1107 <= p_55), p_55, p_56, l_1125, g_44))), g_280[0][2]) && l_1182[0]) != 247UL))), 1UL)) > l_1183), g_268)) || g_1095[4]));
                    l_1213 = ((0UL & (l_1212 = ((g_118[5][5] != (g_1164[4][0][0]--)) >= (safe_sub_func_int32_t_s_s(((g_1095[3] = ((((safe_add_func_int64_t_s_s(((18446744073709551615UL <= (p_56--)) && (0x4175263E5D5FB12ELL <= 0xACE11DEFB2817FF8LL)), ((safe_mul_func_uint16_t_u_u((g_1211 = func_59((g_1000 | ((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(func_59(p_54, ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((g_1210 = (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((((l_1107 = (safe_rshift_func_int8_t_s_u(((0UL & 1UL) & p_54), 5))) && p_54) != l_742) == 1L), (-9L))), l_1183)) < g_1095[3]), g_818))) != 65535UL) > l_1123), (-1L))), 1L)) || 0x2819L), g_914, g_414, p_54), l_1088[1][6])) || p_55), 0UL)) && p_55)), p_55, g_818, l_1177[1], g_1124)), g_696[g_107])) != g_1002))) & l_1183) == g_693) <= 0x6370L)) <= p_55), p_55))))) & 0x8CL);
                }
                else
                {
                    long long l_1214 = 0x6AAE3CB4DB049FAELL;
                    int l_1216[7] = {0x4E690341L, (-1L), 0x4E690341L, (-1L), 0x4E690341L, (-1L), 0x4E690341L};
                    int l_1231 = (-1L);
                    unsigned short l_1238 = 0xA597L;
                    int i;
                    l_1226++;
                    l_1216[5] = 0x63D8629AL;
                    for (g_818 = (-19); (g_818 >= (-13)); ++g_818)
                    {
                        unsigned char l_1239[8] = {7UL, 0x82L, 7UL, 0x82L, 7UL, 0x82L, 7UL, 0x82L};
                        int i;
                        l_1239[1] = (func_75(g_676, (0UL & (l_1216[5] ^= 0L)), l_1214, (l_1231 = p_54), func_59(g_1164[4][0][0], g_107, ((g_1092 > (safe_lshift_func_int16_t_s_u(((((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(252UL, p_55)), g_694)) != l_1107) != g_114) && g_694), 13))) && g_242), l_1215[2], p_55)) >= l_1238);
                        l_1231 = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((-1L) & (((safe_add_func_int16_t_s_s(((g_199[1][2][2] < (g_1211 | ((l_1256 = ((l_1216[0] ^= (((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(func_75((safe_sub_func_uint16_t_u_u(p_56, (safe_mod_func_int32_t_s_s(l_1123, (((6L & p_54) <= func_75((((0xCD79L != g_118[1][3]) | g_1254) && p_55), l_1239[0], g_1124, g_678, l_1214)) ^ l_1219))))), g_44, g_1255, p_55, p_55), p_56)) < 0UL), l_1239[2])) & p_56) ^ g_1211)) >= l_1217)) != g_1124))) | l_1239[0]), 0xD0C7L)) >= 0x8910L) > p_55)), g_131[0][1][3])) || (-9L)), p_56));
                        if (l_1123)
                            break;
                    }
                }
                l_1221 = p_55;
                for (g_679 = (-2); (g_679 >= (-1)); g_679++)
                {
                    short l_1273[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1273[i] = (-1L);
                    g_186 = func_75(p_56, (safe_lshift_func_int8_t_s_s((l_1215[1] = (l_1125 &= 0xE1L)), 7)), (l_1225 >= g_1254), g_1210, (safe_mul_func_uint16_t_u_u(0xEE50L, (safe_sub_func_uint64_t_u_u(g_181, ((((g_1095[0] && (safe_lshift_func_int8_t_s_s(p_54, g_914))) & l_1218) != g_914) > 248UL))))));
                    l_1148 = (((g_114 && g_566) || 0xE4L) && (safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u(p_55, ((g_112 ^= func_75(g_199[1][2][2], (g_1274[1] &= (safe_lshift_func_int16_t_s_s(func_75(g_1272, p_55, (((g_1095[1] & l_1273[3]) ^ l_1220) != l_1273[3]), g_280[0][0], l_1183), 10))), l_1219, g_692, p_56)) >= g_106))))));
                }
            }
        }
        g_695[2] = (safe_mod_func_uint32_t_u_u((g_1211 | (safe_add_func_int8_t_s_s(p_55, (safe_add_func_uint8_t_u_u(func_83(g_310), (safe_add_func_uint8_t_u_u(p_54, (l_1221 = ((g_696[1] = 18446744073709551615UL) > (safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((l_711[6][0] = (g_280[1][1] <= ((g_280[1][3] <= ((0L & p_54) ^ 18446744073709551615UL)) < p_54))) <= p_55) <= 0x99D05ECF84ADB6A6LL), g_199[2][0][5])), l_1183))))))))))), g_189));
        if ((safe_mod_func_uint32_t_u_u(func_75((g_1255 || ((safe_sub_func_uint32_t_u_u(0x587CC5F7L, ((g_999 >= (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_1211, p_54)), 0)))) >= ((g_914 ^= (g_694 ^= 0x9500DCF0DC08E9C2LL)) | p_54)), ((p_55 ^ (l_1218 == 8L)) || (-8L))))) <= l_1221))) > l_1225)), p_55, g_1092, l_1182[0], l_990), 0x0D766AD9L)))
        {
            int l_1304 = (-1L);
            int l_1305[10][8][3] = {{{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}, {{3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}, {3L, 0x8A89CDBBL, 0L}}};
            long long l_1350 = (-1L);
            int l_1394 = 0xA446B067L;
            int i, j, k;
            g_186 = (safe_mul_func_int16_t_s_s(func_83(g_189), (1UL || func_75(p_56, (safe_rshift_func_uint16_t_u_s(1UL, 6)), l_1107, (l_1218 &= g_2), p_55))));
            ++l_1308;
            if ((p_55 <= l_1221))
            {
                short l_1312 = 8L;
                int l_1314 = 3L;
                int l_1316 = 1L;
                int l_1317 = 0L;
                int l_1319 = (-1L);
                int l_1320 = 0x2C883451L;
                int l_1322 = (-2L);
                for (g_876 = 0; (g_876 <= 5); g_876 += 1)
                {
                    int l_1311[5];
                    int l_1313[10];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1311[i] = 0x1DCE4CECL;
                    for (i = 0; i < 10; i++)
                        l_1313[i] = 2L;
                    ++l_1324;
                    if (p_56)
                    {
                        l_1320 = ((func_75((safe_sub_func_uint8_t_u_u((7UL == ((safe_unary_minus_func_int64_t_s((g_131[3][2][5] = g_110))) < (p_55 && (((!(func_75(g_626, p_56, (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((g_268 & l_1304) < (l_712 | p_54)), l_1225)), l_1322)), g_377, g_696[2]) | p_54)) > g_183) & g_199[9][3][1])))), g_692)), p_56, l_1315[1], l_1306, g_1092) >= p_55) >= p_54);
                        return p_54;
                    }
                    else
                    {
                        int i;
                        g_268 = (safe_mod_func_uint16_t_u_u((g_1274[g_876] = g_696[1]), ((g_268 <= (!l_1315[1])) ^ (l_1320 ^ ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_59((safe_rshift_func_uint8_t_u_s(func_59(g_696[0], (g_1095[3] = (((safe_mod_func_int64_t_s_s(((g_114 < (g_1272 = (safe_rshift_func_uint8_t_u_u(g_1092, 5)))) <= (safe_add_func_uint32_t_u_u(4294967288UL, ((safe_mul_func_uint16_t_u_u(p_55, p_54)) != p_54)))), 0x00A3020040177524LL)) < l_1350) >= g_451[0][6][1])), l_1306, g_377, p_54), g_268)), l_1350, g_1092, g_2, l_1225), 0x5E41L)), g_696[1])) & 0UL)))));
                        return g_1211;
                    }
                }
                for (g_1210 = 0; (g_1210 >= 21); g_1210 = safe_add_func_int32_t_s_s(g_1210, 1))
                {
                    unsigned l_1357 = 0UL;
                    if ((l_1305[4][3][2] = g_451[0][2][4]))
                    {
                        l_1355 |= (safe_rshift_func_uint8_t_u_s(0x70L, 3));
                        return p_56;
                    }
                    else
                    {
                        unsigned long long l_1356 = 0x808F1D739DE00680LL;
                        l_1357 = l_1356;
                    }
                    l_712 &= ((0x74ECEC92L || (p_54 | (safe_unary_minus_func_int64_t_s(((safe_sub_func_uint8_t_u_u((func_57(p_56) | (safe_lshift_func_uint8_t_u_u((((g_1164[5][0][1] = func_75(l_1316, g_693, l_1350, (4294967295UL ^ g_1095[3]), p_54)) < g_1211) >= l_1107), 0))), 0UL)) | 4294967295UL))))) && 0x18AD6B4AL);
                }
            }
            else
            {
                int l_1371 = 0x76A737DAL;
                int l_1376 = 4L;
                int l_1379 = 0xD7DC2159L;
                int l_1381 = 0L;
                int l_1383 = (-1L);
                int l_1385 = 0x041075FDL;
                int l_1386[1][8][10] = {{{0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}, {0xC7207ADFL, 2L, 9L, (-1L), 0x08C2955FL, (-1L), (-1L), 0x08C2955FL, (-1L), 9L}}};
                int i, j, k;
                if ((l_711[6][0] & ((func_59(g_112, ((0x50EBBFC8DB083308LL != (func_75((g_110 = (g_566 >= (((safe_lshift_func_uint16_t_u_s(func_75(p_54, (((p_55 == l_1307) && (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_1304, (safe_sub_func_uint64_t_u_u(g_1255, l_1318)))), l_1305[4][3][2]))) <= l_1371), p_54, g_1274[1], l_1371), 4)) > 0x4FF8633CL) ^ g_44))), g_1001, p_55, p_55, l_898) ^ 0xA6L)) >= p_55), g_105, p_56, g_1095[3]) & 0x72L) <= 0x2128L)))
                {
                    long long l_1378 = 0x385EBD68583813BDLL;
                    int l_1382 = 1L;
                    int l_1384[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1384[i] = 1L;
                    for (g_189 = (-22); (g_189 > 5); g_189 = safe_add_func_uint64_t_u_u(g_189, 5))
                    {
                        volatile unsigned char l_1377 = 0xBBL;
                        l_1376 = (func_83(g_2) ^ (safe_rshift_func_int8_t_s_u((g_1274[4] >= l_1371), 6)));
                        l_1377 = g_451[0][6][1];
                    }
                    g_1390++;
                }
                else
                {
                    long long l_1393 = 0xF0434CE1DC703790LL;
                    unsigned l_1411 = 0x1F6A4470L;
                    int l_1421 = 0xF91EB073L;
                    int l_1422 = 0xBA886DA7L;
                    l_1088[1][3] = ((g_118[2][1] = (((func_75((g_110 = (l_1107 | l_1305[3][4][0])), (++g_1274[2]), func_75(l_1393, (g_1002 == (l_1304 = (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_1385, ((g_831 >= 0x02L) < (g_1401 ^= func_75(g_999, g_112, g_1210, p_54, g_280[2][7]))))), p_56)))), g_118[1][4], l_1393, p_56), g_1272, g_251[0][0][5]) == 0xF4L) <= p_54) ^ l_1402)) != p_55);
                    if (((func_57((safe_add_func_uint32_t_u_u((l_1318 >= (((~g_1164[2][0][3]) || g_1000) && (safe_add_func_int64_t_s_s(g_199[1][2][2], func_83(g_1002))))), (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(l_1411, g_280[1][3])), (safe_sub_func_uint16_t_u_u((g_914 & g_126), p_54))))))) <= g_1092) || 0x5B8636A002DBC0B4LL))
                    {
                        unsigned char l_1414 = 0xA2L;
                        l_1414 ^= p_54;
                    }
                    else
                    {
                        unsigned short l_1415[1][5] = {{3UL, 0x3BC7L, 3UL, 0x3BC7L, 3UL}};
                        unsigned long long l_1420 = 18446744073709551615UL;
                        int i, j;
                        l_1415[0][2]--;
                        l_1420 = ((safe_rshift_func_uint16_t_u_u(l_1088[1][6], 13)) ^ (l_711[1][5] ^= g_414));
                        g_126 = l_1355;
                        l_1422 = (l_1421 = 0L);
                    }
                    for (g_676 = (-21); (g_676 <= 10); g_676 = safe_add_func_uint64_t_u_u(g_676, 3))
                    {
                        int l_1426 = 0L;
                        if (l_712)
                            goto lbl_1425;
                        g_45 = (l_1426 == g_310);
                    }
                }
            }
        }
        else
        {
            char l_1427 = 7L;
            l_712 &= l_1427;
        }
    }
    else
    {
        unsigned char l_1428[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1428[i] = 0x1CL;
        l_1428[1] = func_57((l_711[1][5] > p_54));
    }
    return l_1429;
}







static char func_57(unsigned p_58)
{
    char l_135[5] = {0x04L, 0x9AL, 0x04L, 0x9AL, 0x04L};
    short l_136 = 1L;
    int l_139 = 0x25CBB4F5L;
    long long l_140 = 0xA63EE4706FC58967LL;
    int l_141 = 1L;
    int l_142 = 0L;
    long long l_175 = (-1L);
    int l_184 = 0x71FBBC29L;
    int l_187 = 0x7159119CL;
    unsigned short l_198 = 0UL;
    short l_269[9] = {(-1L), (-1L), (-3L), (-1L), (-1L), (-3L), (-1L), (-1L), (-3L)};
    long long l_281 = 0x43141E1F0A15FA0BLL;
    int l_305 = (-1L);
    int l_307 = 0x6CBAA162L;
    int l_308[4][4][2] = {{{0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}}, {{0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}}, {{0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}}, {{0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}, {0xC09D9CE9L, 1L}}};
    int l_321 = 0xEED544C4L;
    char l_412 = 0x17L;
    int l_532[8] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
    int i, j, k;
lbl_152:
    l_141 = ((p_58 || (safe_add_func_uint64_t_u_u(l_135[0], func_59((p_58 || func_59(p_58, l_136, ((safe_sub_func_int8_t_s_s(g_110, func_75(p_58, (l_139 &= func_75(l_135[0], g_114, l_136, g_105, g_110)), l_135[0], p_58, l_135[0]))) <= g_107), l_136, p_58)), g_44, l_140, p_58, g_106)))) < g_2);
lbl_270:
    for (l_139 = 4; (l_139 >= 1); l_139 -= 1)
    {
        unsigned long long l_171[10][4][2] = {{{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}, {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}}};
        int l_174 = (-1L);
        unsigned long long l_207 = 0x4F0286FB30011547LL;
        unsigned short l_216[8] = {6UL, 0UL, 6UL, 0UL, 6UL, 0UL, 6UL, 0UL};
        short l_228[8];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_228[i] = (-6L);
        l_142 = (l_141 ^= func_83(l_135[l_139]));
        if (l_135[l_139])
        {
            unsigned l_176 = 4UL;
            int l_185 = (-1L);
            unsigned l_202 = 5UL;
            long long l_218 = 3L;
            for (p_58 = 1; (p_58 <= 5); p_58 += 1)
            {
                int l_148 = 1L;
                int l_166 = 0x4C63FC51L;
                int l_217[9] = {4L, 0xEA2D98C8L, 4L, 0xEA2D98C8L, 4L, 0xEA2D98C8L, 4L, 0xEA2D98C8L, 4L};
                unsigned long long l_257 = 0x978E774DD7B4E7EDLL;
                int i, j;
                if (g_118[p_58][l_139])
                {
                    unsigned char l_143 = 0x2AL;
                    for (l_140 = 0; (l_140 <= 4); l_140 += 1)
                    {
                        g_45 = (p_58 == 1UL);
                        l_143++;
                    }
                }
                else
                {
                    unsigned l_172[2];
                    unsigned long long l_173 = 0x9113732750AFB25ALL;
                    int l_177 = 0x121CEEE4L;
                    int l_182 = 2L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_172[i] = 0x01576608L;
                    for (g_106 = 15; (g_106 > 11); g_106--)
                    {
                        return p_58;
                    }
                    l_148 = 0xA91B6E25L;
                    for (l_141 = (-3); (l_141 > (-26)); l_141--)
                    {
                        unsigned l_151 = 4UL;
                        if (l_151)
                            break;
                        if (g_107)
                            goto lbl_152;
                    }
                    if (p_58)
                    {
                        short l_161 = 0xA699L;
                        int l_180[1][2][5] = {{{0xFC51319CL, (-1L), 0xFC51319CL, (-1L), 0xFC51319CL}, {0xFC51319CL, (-1L), 0xFC51319CL, (-1L), 0xFC51319CL}}};
                        int l_188 = 0L;
                        int i, j, k;
                        l_174 = (((l_172[1] = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(g_44, p_58)), ((safe_rshift_func_uint16_t_u_u((!(l_166 |= ((l_148 == (l_161 <= p_58)) >= (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(0x5824L, 0x29F0L)), 0))))), (safe_add_func_uint32_t_u_u(g_118[p_58][l_139], (safe_sub_func_int8_t_s_s(g_2, 0x63L)))))) | p_58))), l_171[6][1][0]))) != l_173) || 0x806D6E3AF0B7D57CLL);
                        if (g_110)
                            goto lbl_270;
                        g_45 = ((g_131[0][2][4] = (func_75(l_175, g_131[8][3][1], p_58, p_58, p_58) != (l_176 | (p_58 & p_58)))) | p_58);
                        g_126 = (((g_112 ^= g_114) & (l_177 = 0x088CC242C42AF917LL)) && ((safe_lshift_func_int8_t_s_u((p_58 || func_83(p_58)), 7)) || 0x008DDBD3AB86DC19LL));
                        ++g_190;
                    }
                    else
                    {
                        long long l_197 = 0x080C64B01C82AA6FLL;
                        g_126 = ((safe_mod_func_int8_t_s_s(((g_105 = g_131[3][1][3]) <= (safe_mul_func_int8_t_s_s((p_58 || (l_176 ^ (l_197 = 1L))), func_75(l_148, (g_199[1][2][2] = l_198), (safe_mul_func_int16_t_s_s(((l_174 ^ l_135[l_139]) < l_174), 0x0894L)), p_58, l_202)))), p_58)) & p_58);
                        l_185 = ((g_189 | g_199[2][0][4]) < (g_199[7][0][2] || (((~l_135[l_139]) >= p_58) >= (safe_sub_func_int32_t_s_s(l_166, ((g_105 = l_172[0]) | p_58))))));
                        l_182 = func_59(((safe_sub_func_int16_t_s_s(((1L >= (g_118[p_58][l_139] ^ func_75(p_58, l_207, (safe_add_func_int32_t_s_s((-2L), ((p_58 == (((g_114 |= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((0xC077L ^ (l_216[1] >= g_118[p_58][l_139])), p_58)) < g_189), g_190)), (-9L)))) > 0x67B546B6L) ^ 0x38E5F94DL)) >= 0xCA2CL))), p_58, l_207))) | l_187), 0x8F2EL)) >= l_148), g_199[0][2][3], l_217[1], p_58, g_181);
                        l_185 ^= (!(l_218 <= 0x042DFD0D3D268E0CLL));
                    }
                }
                if ((safe_rshift_func_int8_t_s_s(p_58, 3)))
                {
                    if (l_139)
                        break;
                    g_186 = (g_107 & ((p_58 >= func_59((g_45 < (p_58 | ((((((safe_sub_func_int8_t_s_s(g_118[2][1], g_2)) && ((((0x06D749BBL != g_107) < (0UL | g_118[1][4])) == p_58) && 0x3D012A6A001F2724LL)) || g_44) & 65535UL) | g_181) && p_58))), l_202, g_112, g_107, g_189)) != 0xF0L));
                }
                else
                {
                    unsigned l_225 = 4294967295UL;
                    for (l_198 = 0; (l_198 >= 8); l_198++)
                    {
                        g_186 ^= 0xF20E0C4DL;
                        return l_225;
                    }
                }
                for (l_202 = 0; (l_202 < 18); ++l_202)
                {
                    unsigned char l_229 = 246UL;
                    int l_253 = (-5L);
                    int l_254 = 0xFC23E28EL;
                    --l_229;
                    if ((g_105 = (safe_add_func_uint32_t_u_u((l_217[1] | g_181), g_2))))
                    {
                        int l_252 = 0xF0D3394FL;
                        l_252 |= (((safe_mod_func_uint64_t_u_u((g_2 | (-1L)), ((((-5L) & ((l_229 != (safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((g_242 = p_58) < (safe_lshift_func_uint16_t_u_u(((g_131[2][2][2] >= (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_58, (g_44 = (l_148 = (safe_lshift_func_int8_t_s_u((g_251[0][0][5] |= (func_83(g_199[3][3][5]) | p_58)), l_217[6])))))), 0xAF3AL))) == l_217[1]), 9))), p_58)), g_2)) | 0x04281389L) == 0xF271D079F7F76048LL), g_118[2][1]))) != 1UL)) > p_58) & 0x954FF364L))) == l_171[6][1][0]) <= g_105);
                    }
                    else
                    {
                        l_253 = 0x37C5671BL;
                    }
                    for (l_174 = 1; (l_174 >= 0); l_174 -= 1)
                    {
                        int i, j, k;
                        return l_171[(p_58 + 2)][(l_174 + 1)][l_174];
                    }
                    g_105 |= (l_254 && (((-1L) && ((safe_mod_func_int8_t_s_s((l_257 < (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(l_216[4], (+(((l_257 & (l_254 = (safe_mul_func_int16_t_s_s(0x66A5L, p_58)))) | (g_190 != l_171[6][1][0])) != p_58)))), p_58)) > p_58) | l_253)), l_166)) ^ g_110)) <= l_175));
                }
            }
            return g_186;
        }
        else
        {
            l_142 |= l_171[6][1][0];
            if (p_58)
                continue;
            for (g_242 = 0; (g_242 != 4); g_242 = safe_add_func_int32_t_s_s(g_242, 3))
            {
                return p_58;
            }
        }
        l_269[0] = ((0x7B53C0D5L == ((func_75(g_107, l_216[1], g_118[2][1], (safe_lshift_func_int16_t_s_s(func_59((l_141 &= p_58), g_199[3][2][0], l_135[l_139], ((g_114 = (+(g_268 < (l_184 = l_174)))) && l_139), p_58), l_228[3])), p_58) && p_58) >= 1L)) ^ g_189);
    }
    for (g_110 = 8; (g_110 >= (-2)); g_110 = safe_sub_func_uint8_t_u_u(g_110, 6))
    {
        int l_277 = (-1L);
        int l_282 = 0x54735E3EL;
        unsigned char l_283 = 255UL;
        int l_296 = 2L;
        int l_298 = (-1L);
        int l_299 = (-1L);
        int l_302 = 6L;
        int l_303 = 0x516A57F7L;
        int l_304[5];
        unsigned l_328 = 5UL;
        unsigned char l_533 = 0x09L;
        long long l_703 = 1L;
        int i;
        for (i = 0; i < 5; i++)
            l_304[i] = 0x125F3557L;
        if ((func_59((0x21F7L ^ (func_75((l_282 = ((((0x9FL & ((((safe_rshift_func_uint8_t_u_u(p_58, (safe_rshift_func_uint8_t_u_s(((l_277 = 0L) == g_251[0][0][5]), 7)))) < (p_58 == (func_59(g_126, ((safe_sub_func_uint64_t_u_u(p_58, func_75(p_58, g_126, p_58, g_186, g_280[1][3]))) ^ p_58), l_281, l_184, l_187) < 9UL))) >= 0xF886568BL) ^ 0UL)) & l_136) > p_58) == l_184)), l_269[0], p_58, g_251[1][0][3], l_283) && g_118[2][1])), p_58, g_242, l_283, p_58) ^ g_112))
        {
            unsigned l_292 = 0x329830DEL;
            int l_293 = 0x6C3AE12CL;
            int l_306 = 1L;
            int l_309 = (-3L);
            unsigned long long l_338 = 3UL;
            int l_452 = 2L;
            unsigned short l_504[5][4][4] = {{{65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}}, {{65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}}, {{65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}}, {{65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}}, {{65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}, {65531UL, 0UL, 0UL, 65531UL}}};
            unsigned long long l_557 = 0x37FD4A8AEFFAAB6FLL;
            int i, j, k;
            if ((l_282 = ((0x89546E23L >= (safe_sub_func_int16_t_s_s(g_44, func_75((l_282 && func_59(func_59(p_58, l_175, (safe_mod_func_int64_t_s_s(g_118[4][4], p_58)), (safe_mul_func_int8_t_s_s((0L && func_75((safe_lshift_func_uint16_t_u_s((l_292 = g_186), p_58)), l_198, p_58, g_242, p_58)), 0xAEL)), l_283), g_189, g_242, p_58, g_107)), l_283, p_58, g_189, p_58)))) & p_58)))
            {
                unsigned short l_294 = 65527UL;
                for (g_114 = 1; (g_114 <= 5); g_114 += 1)
                {
                    for (l_292 = 1; (l_292 <= 5); l_292 += 1)
                    {
                        int i, j;
                        l_293 &= g_118[l_292][g_114];
                        l_294 = 0x20A5E3A9L;
                        if (g_118[g_114][l_292])
                            break;
                    }
                    return p_58;
                }
            }
            else
            {
                int l_295 = (-10L);
                int l_297 = 0x3EA55186L;
                int l_300 = 0xCBB8548AL;
                int l_301[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_301[i] = 0x04D749C5L;
                g_310++;
                l_308[3][1][1] = g_189;
                if (g_106)
                    break;
            }
            l_308[2][0][0] ^= (safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_58, l_303)), ((~l_321) && p_58))), g_189)) & ((safe_lshift_func_uint8_t_u_u((g_268 > (safe_add_func_uint32_t_u_u((g_45 > (safe_mul_func_int8_t_s_s(g_131[0][0][3], func_75(p_58, p_58, g_106, g_280[1][3], p_58)))), g_106))), g_131[8][3][1])) <= g_112)), (-10L)));
            if (((+(l_328 & ((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0xB6F22AA5L, ((safe_lshift_func_uint16_t_u_s((g_112 || ((((safe_unary_minus_func_int32_t_s(g_118[2][1])) & (safe_sub_func_int8_t_s_s(0x1EL, ((l_142 ^= (p_58 ^ func_75(l_293, l_293, (0x670EDC74L != 4294967292UL), l_309, p_58))) <= g_242)))) >= g_2) != 0x901A7BE7L)), 5)) & 0xB1E9L))), l_175)) & l_338) < l_303) >= 5L))) | 4294967295UL))
            {
                unsigned l_350[1];
                int l_378 = 6L;
                short l_390 = 0x9EB8L;
                unsigned l_397[10][7][3] = {{{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}, {{0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}, {0xE727C3F0L, 18446744073709551615UL, 18446744073709551613UL}}};
                int l_413 = 0x4E30D80CL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_350[i] = 4294967295UL;
                for (l_328 = 0; (l_328 <= 20); ++l_328)
                {
                    unsigned char l_347[10] = {0xD0L, 0x98L, 0x23L, 0x23L, 0x98L, 0xD0L, 0x98L, 0x23L, 0x23L, 0x98L};
                    int l_351 = 0xC4E4B309L;
                    unsigned long long l_406 = 0UL;
                    int i;
                    g_126 |= g_107;
                    if ((0x9267L <= (safe_mul_func_uint8_t_u_u(253UL, ((safe_add_func_int16_t_s_s((l_293 = ((safe_add_func_int8_t_s_s(l_347[8], (g_118[5][1] = ((g_242 >= p_58) > ((safe_lshift_func_int8_t_s_u(func_59(p_58, (g_114 ^= l_350[0]), (l_351 = g_112), g_131[8][3][1], g_118[2][1]), 3)) & (-1L)))))) ^ l_347[8])), g_251[4][1][4])) & l_282)))))
                    {
                        g_183 = l_282;
                        if (p_58)
                            continue;
                    }
                    else
                    {
                        unsigned long long l_379 = 0xB21D4D259A4CE5BELL;
                        l_141 = func_75((safe_mod_func_uint16_t_u_u((0x4F2756B1A0AE1EF4LL != (safe_lshift_func_uint8_t_u_s((g_199[4][2][3] & (safe_mul_func_int8_t_s_s((l_378 = ((g_377 |= (safe_add_func_int64_t_s_s((g_181 = (l_293 = (((g_107 > (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((g_131[8][3][1] = (safe_lshift_func_int16_t_s_u(((l_136 == (safe_lshift_func_int8_t_s_s((l_184 &= ((safe_mul_func_int16_t_s_s(0x0EEFL, (safe_rshift_func_int8_t_s_u((g_372 = (g_242 = (l_282 <= l_309))), ((safe_lshift_func_uint16_t_u_s(0x4344L, func_59((((safe_add_func_int8_t_s_s(p_58, (-10L))) || 0x26L) && 0L), p_58, g_118[2][1], g_199[0][0][5], p_58))) || p_58))))) == 0xA2L)), 1))) <= 0x98669F6CL), l_292))), p_58)), 4294967295UL))) ^ 0x92531F7F4E34CD74LL) == l_309))), 0UL))) && 0xFEL)), p_58))), 3))), g_112)), l_379, g_107, l_379, g_280[4][6]);
                        g_186 = (safe_lshift_func_uint8_t_u_s(255UL, 3));
                        l_351 = ((func_59((safe_mul_func_uint8_t_u_u((g_118[1][5]--), p_58)), p_58, ((l_309 = ((safe_rshift_func_int8_t_s_u(g_189, 2)) || l_378)) < (l_306 = 0x288F30DEL)), g_199[2][3][3], (((g_112 = g_199[8][1][2]) | 0x6BFCB977FF7BD514LL) != (-4L))) <= p_58) != p_58);
                        l_309 = ((safe_lshift_func_uint16_t_u_u((((l_390 = (g_310 > g_242)) >= (safe_sub_func_int64_t_s_s(0xB883A2F60B708250LL, ((--g_112) & 0x893C05EEF4D79DD5LL)))) != (safe_mod_func_int32_t_s_s(l_397[9][4][1], (safe_rshift_func_int8_t_s_u(p_58, p_58))))), 9)) < (safe_mul_func_int16_t_s_s(p_58, (safe_rshift_func_uint16_t_u_u(0x5A58L, g_118[2][1])))));
                    }
                    for (l_187 = 0; (l_187 <= 4); l_187 += 1)
                    {
                        return l_347[8];
                    }
                    l_406 = (safe_lshift_func_int8_t_s_u(g_181, p_58));
                }
                for (l_139 = 4; (l_139 >= 0); l_139 -= 1)
                {
                    int l_411[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_411[i] = 0x17B3A5BAL;
                    l_304[l_139] = l_304[l_139];
                    for (l_283 = 0; (l_283 <= 4); l_283 += 1)
                    {
                        unsigned char l_407 = 1UL;
                        int l_410[6][6] = {{5L, 0xA6CF48EFL, 0xB498FA7BL, 0x1380FC15L, 0x0DBD608AL, 0xD2D93F7CL}, {5L, 0xA6CF48EFL, 0xB498FA7BL, 0x1380FC15L, 0x0DBD608AL, 0xD2D93F7CL}, {5L, 0xA6CF48EFL, 0xB498FA7BL, 0x1380FC15L, 0x0DBD608AL, 0xD2D93F7CL}, {5L, 0xA6CF48EFL, 0xB498FA7BL, 0x1380FC15L, 0x0DBD608AL, 0xD2D93F7CL}, {5L, 0xA6CF48EFL, 0xB498FA7BL, 0x1380FC15L, 0x0DBD608AL, 0xD2D93F7CL}, {5L, 0xA6CF48EFL, 0xB498FA7BL, 0x1380FC15L, 0x0DBD608AL, 0xD2D93F7CL}};
                        int i, j;
                        --l_407;
                        ++g_414;
                        l_304[l_139] = (safe_lshift_func_int16_t_s_s((l_296 |= (func_75((safe_rshift_func_int8_t_s_u(l_304[l_139], (safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((0xE89D6E7DEB9FCCEELL < ((safe_lshift_func_int8_t_s_u(0L, 6)) != g_242)) <= func_59((safe_mul_func_uint16_t_u_u(p_58, (safe_mod_func_int8_t_s_s(0x9FL, p_58)))), g_114, p_58, l_407, g_242)) != l_293), l_411[5])), g_112)) >= p_58) != p_58) > 255UL), 11)))), l_304[2], g_189, g_199[1][2][2], p_58) != 0UL)), 0));
                        if (l_413)
                            continue;
                    }
                    for (g_105 = 0; (g_105 <= 4); g_105 += 1)
                    {
                        int l_433 = 0x70267675L;
                        int i;
                        l_187 &= (0UL != l_304[l_139]);
                        l_433 &= l_304[l_139];
                        l_304[l_139] = g_280[4][9];
                    }
                    l_141 ^= func_59((safe_sub_func_uint16_t_u_u((g_310 & ((safe_add_func_uint32_t_u_u(g_251[0][0][5], ((l_350[0] || ((safe_lshift_func_uint8_t_u_s((p_58 & ((-3L) <= (~p_58))), l_411[6])) || (safe_mod_func_int8_t_s_s(0L, (((l_304[l_139] &= (g_251[0][0][5] != l_292)) <= p_58) && p_58))))) & 0x4EF2B106L))) == 0xEFA7L)), g_2)), g_280[4][4], g_131[0][1][2], p_58, l_296);
                }
                for (l_141 = 0; (l_141 <= 4); l_141 += 1)
                {
                    int l_444 = 0x57CEAE08L;
                    int l_445 = 0xD038F0C9L;
                    int l_449 = (-1L);
                    int l_486 = 1L;
                    for (l_142 = 0; (l_142 <= 4); l_142 += 1)
                    {
                        int l_442 = 0x4BCFB077L;
                        int l_443 = 0xA659DBCFL;
                        int l_446 = 9L;
                        int l_447 = 0L;
                        int l_448 = 0xF651F1FFL;
                        int l_450 = 0x18E61EBAL;
                        int i;
                        if (l_269[(l_141 + 1)])
                            break;
                        --g_453;
                        l_296 |= (((l_413 &= func_75(l_135[l_142], p_58, (g_377 || l_444), g_105, (l_378 = func_59(p_58, g_189, (g_280[1][3] = (safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(p_58, g_414)), 0UL))), p_58, g_453)))) & l_269[(l_141 + 1)]) & g_112);
                        return l_184;
                    }
                    if (p_58)
                        continue;
                    if (p_58)
                    {
                        l_304[2] = p_58;
                        return l_444;
                    }
                    else
                    {
                        long long l_487[1][2];
                        int l_488 = 0x4A9BF095L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_487[i][j] = 0x48B7A5742FB8A222LL;
                        }
                        g_126 = g_242;
                        g_126 = (g_105 ^= ((safe_add_func_uint64_t_u_u(((g_131[8][3][1] = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((0xA5L != ((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((l_307 = g_199[1][2][2]), (l_445 | ((safe_mod_func_int16_t_s_s(((l_378 >= (g_118[2][1] != (safe_mod_func_int8_t_s_s((0UL == ((safe_add_func_int8_t_s_s(g_112, (safe_rshift_func_uint16_t_u_u((0xCFEBL < (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_298, l_277)) && g_107), g_451[0][6][1]))), g_126)))) >= l_135[2])), g_181)))) ^ 0x0DD2896B2F598860LL), g_199[5][2][0])) == l_486)))) || 0x11L) && p_58), l_487[0][1])), 6UL)) < l_304[2])) && 0UL), 0xA6F66E02A547C621LL)), l_486)), 1L))) < 0L), 0UL)) || l_282));
                        l_488 = (g_126 = (p_58 < p_58));
                    }
                }
            }
            else
            {
                unsigned long long l_502[8][9][3] = {{{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}, {{1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}, {1UL, 0xD905ACEAB802EFADLL, 3UL}}};
                unsigned l_503 = 0xCAE7F235L;
                int l_524 = 0xD08D5090L;
                int l_525 = 1L;
                int l_526 = (-5L);
                int i, j, k;
                for (g_114 = 0; (g_114 <= 1); g_114 += 1)
                {
                    unsigned long long l_492 = 0x5E78A6643504A857LL;
                    int l_497 = (-8L);
                    if (g_189)
                        break;
                    for (l_321 = 1; (l_321 <= 4); l_321 += 1)
                    {
                        int l_491[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_491[i] = 0x8983E9A7L;
                        g_105 = l_308[g_114][g_114][g_114];
                        l_492 = ((p_58 || (l_308[0][3][1] <= p_58)) >= (safe_sub_func_uint64_t_u_u(1UL, (l_491[0] = g_190))));
                        g_126 = (safe_mod_func_uint32_t_u_u(g_44, (p_58 && (safe_lshift_func_int8_t_s_u(g_44, (l_497 &= 254UL))))));
                        l_141 = 0xD573CE48L;
                    }
                }
                g_268 ^= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((func_59(l_502[0][7][2], ((l_308[0][3][1] || p_58) ^ (l_305 = ((func_75(g_451[0][6][1], p_58, (l_277 &= ((g_126 |= l_338) <= l_503)), l_293, g_377) ^ g_189) > 0x41CF3A59868FD6B3LL))), p_58, g_280[1][3], l_502[0][7][2]) < 0x36L), 11)), 4));
                if (l_504[3][3][3])
                {
                    long long l_522 = 0L;
                    int l_523[1][9];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_523[i][j] = 0L;
                    }
                    l_524 |= (safe_lshift_func_int16_t_s_s((-9L), (safe_lshift_func_uint16_t_u_s((((l_523[0][5] = (safe_lshift_func_int16_t_s_s(((l_504[3][3][3] >= (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(0x88BCEA79L)), (safe_mod_func_uint8_t_u_u((g_118[1][0]--), ((p_58 | l_283) & (((safe_sub_func_int16_t_s_s(7L, g_451[0][6][1])) <= l_522) || g_189)))))), g_280[1][3]))) | 0L), p_58))) <= 0xD1352B8DL) >= (-2L)), g_44))));
                    --g_527;
                    for (l_338 = 0; (l_338 <= 47); l_338++)
                    {
                        unsigned short l_544 = 0x38B3L;
                        int l_545 = 1L;
                        --l_533;
                        g_45 &= ((l_299 >= p_58) < 0x55BF5256D16D8549LL);
                        if (l_292)
                            break;
                        l_296 ^= (l_523[0][8] = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(l_282, ((func_75(g_242, (((safe_mod_func_uint8_t_u_u(l_504[2][1][2], (l_544 & (((-3L) >= (l_545 = 0x31A8787CL)) == (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_557 = ((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((l_303 = (g_251[0][0][5] ^= p_58)) > (safe_lshift_func_int8_t_s_u(0L, 5))))), l_269[8])) > g_126), g_2)) || l_142)) | 0L), p_58)), g_2)))))) == g_414) >= g_372), l_523[0][4], g_377, g_2) < 3UL) == 18446744073709551613UL))) <= g_114) == 0x0DL), g_106)), l_503)));
                    }
                }
                else
                {
                    unsigned char l_592[10][4][1] = {{{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}};
                    int l_593 = 1L;
                    int i, j, k;
                    g_105 |= (safe_lshift_func_int8_t_s_u((g_242 = (l_306 = (safe_lshift_func_uint8_t_u_u((255UL ^ func_59(g_183, (~(safe_lshift_func_uint16_t_u_s((g_566 = (p_58 > (safe_lshift_func_int8_t_s_u(l_525, 6)))), 4))), g_280[1][3], p_58, (+func_75((safe_mul_func_uint8_t_u_u(g_44, (safe_rshift_func_uint16_t_u_s(g_251[4][0][4], 14)))), ((((safe_rshift_func_uint16_t_u_u(p_58, 9)) ^ p_58) & 0xA260L) > g_280[1][3]), g_131[8][3][1], l_503, g_242)))), 3)))), 7));
                    for (l_526 = (-13); (l_526 <= 9); l_526++)
                    {
                        unsigned l_577 = 0x09A490E3L;
                        l_577 = (safe_rshift_func_uint16_t_u_u(g_131[5][1][2], 1));
                        g_183 = func_59(p_58, ((l_525 = (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(0xC0D6L, func_75(g_310, (l_304[2] > p_58), l_307, p_58, p_58))), l_303))) != p_58), p_58, p_58, g_2);
                    }
                    for (l_412 = 0; (l_412 >= 12); l_412++)
                    {
                        g_126 = (safe_mod_func_int64_t_s_s(((l_526 <= (((l_593 = (p_58 | (l_302 <= (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0UL, g_44)), (safe_sub_func_int8_t_s_s((0xD81305CCDD8EBC84LL ^ l_592[5][2][0]), p_58))))))) == p_58) && g_310)) ^ g_372), p_58));
                        return p_58;
                    }
                }
            }
        }
        else
        {
            int l_596 = 0L;
            int l_599 = 0xFBE3AFB8L;
            unsigned l_600 = 0x808B5DA3L;
            for (l_198 = (-6); (l_198 > 2); l_198++)
            {
                return g_107;
            }
            for (g_189 = 0; (g_189 <= 1); g_189 += 1)
            {
                char l_597 = 0x07L;
                int l_627 = 0x097A1252L;
                unsigned l_672 = 4294967291UL;
                for (g_566 = 3; (g_566 >= 0); g_566 -= 1)
                {
                    int l_598 = (-1L);
                    unsigned l_638 = 0x0B6B4CECL;
                    unsigned l_644 = 3UL;
                    int i, j, k;
                    l_600++;
                    for (g_106 = 0; (g_106 <= 1); g_106 += 1)
                    {
                        int l_625[4][7] = {{1L, 1L, 8L, 1L, 1L, 0x2BBEA516L, 1L}, {1L, 1L, 8L, 1L, 1L, 0x2BBEA516L, 1L}, {1L, 1L, 8L, 1L, 1L, 0x2BBEA516L, 1L}, {1L, 1L, 8L, 1L, 1L, 0x2BBEA516L, 1L}};
                        unsigned l_637 = 0UL;
                        unsigned char l_639 = 0UL;
                        int i, j, k;
                        l_625[0][3] ^= (l_308[g_106][g_106][g_189] ^ (safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((func_59((safe_sub_func_uint64_t_u_u((l_139 = ((safe_sub_func_uint16_t_u_u((4294967287UL & func_75(l_308[(g_189 + 2)][g_566][g_189], func_75((safe_mul_func_uint8_t_u_u(l_308[(g_106 + 1)][g_566][g_106], (safe_sub_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u((g_112--), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((~(g_628--)), g_251[(g_106 + 2)][g_189][g_189])), g_251[(g_189 + 1)][g_189][(g_566 + 1)])))) || l_135[(g_189 + 2)]) >= (safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_135[g_566], l_135[g_566])), l_135[0])) <= p_58), 1))), l_637)))), g_251[0][0][5], l_598, g_186, p_58), l_308[(g_106 + 1)][g_566][g_106], p_58, l_597)), l_596)) > g_126)), p_58)), l_308[(g_106 + 1)][g_566][g_106], p_58, p_58, l_304[2]) & l_638), g_44)), 0xC8695234L)) & l_600), 7)));
                        if (l_308[g_566][g_566][g_189])
                            break;
                        l_639 &= p_58;
                        l_308[0][3][1] = 0x7A909276L;
                    }
                    l_627 = ((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_199[1][2][2], func_75((g_251[(g_566 + 1)][g_189][(g_189 + 4)] = (p_58 && g_566)), l_596, g_110, (0xDAL == (-1L)), g_242))) <= l_644), l_627)) <= l_304[2]);
                }
                if (g_190)
                    continue;
                for (g_106 = 0; (g_106 <= 1); g_106 += 1)
                {
                    unsigned short l_675 = 0xE16DL;
                    unsigned l_677 = 0x52754B3FL;
                    int i, j, k;
                    g_183 = ((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_308[(g_189 + 2)][(g_189 + 2)][g_106] < 0L), 0x9A82DE8E09D25492LL)), (((l_596 = (safe_add_func_int32_t_s_s((~(func_75(l_308[(g_189 + 2)][(g_189 + 2)][g_106], func_59((g_242 = ((((func_75(p_58, ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(func_59(g_377, (~((safe_mul_func_uint16_t_u_u(func_75(((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u((g_678 = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_add_func_int32_t_s_s((+(l_141 = (((l_305 = (safe_sub_func_int32_t_s_s((func_75(((((l_672 <= (safe_mul_func_uint16_t_u_u(1UL, (g_676 = l_675)))) | p_58) || p_58) ^ 0xF1L), l_599, p_58, p_58, p_58) >= p_58), l_677))) > l_672) > g_118[2][2]))), l_675)) == p_58) < p_58), p_58)), p_58))))), l_277)), 0)) & p_58), l_597, p_58, g_377, p_58), l_672)) >= g_118[4][4])), l_298, p_58, p_58), g_372)) <= 0xF3L), 1L)) & g_679), p_58, l_184, g_112) < p_58) && g_106) > 0UL) < p_58)), g_280[1][3], p_58, l_308[(g_189 + 2)][(g_189 + 2)][g_106], l_675), g_181, l_533, g_199[1][2][2]) || 0L)), p_58))) != l_600) >= 0x18L))) & 0x4923B36EL);
                }
            }
        }
        g_695[1] = (safe_rshift_func_int8_t_s_u((func_59((((l_308[0][3][1] = (g_251[0][0][5] &= (safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(g_183, 255UL)) || (g_628 ^= 0x67L)), (g_118[2][1]++))))) ^ func_75(p_58, (safe_sub_func_int64_t_s_s(p_58, g_114)), (5L && (((g_696[0]--) >= (+(safe_lshift_func_uint16_t_u_u(l_305, 5)))) > (safe_mul_func_int8_t_s_s((0x95L & p_58), 0x2DL)))), p_58, p_58)) >= l_304[2]), p_58, l_703, g_676, g_280[2][4]) | p_58), p_58));
    }
    l_142 |= l_308[2][2][0];
    return g_131[1][2][5];
}







static unsigned char func_59(char p_60, unsigned p_61, unsigned p_62, unsigned char p_63, unsigned p_64)
{
    short l_125 = 4L;
    int l_132 = 1L;
    l_132 = (safe_mod_func_uint64_t_u_u(18446744073709551615UL, (safe_sub_func_int64_t_s_s((g_2 == p_64), ((g_126 = (g_114 = l_125)) <= (g_131[8][3][1] = (((safe_rshift_func_int16_t_s_s(func_75(p_62, (p_62 | g_118[2][1]), (safe_sub_func_uint32_t_u_u(7UL, 3UL)), p_62, g_118[2][1]), 11)) ^ 0xCD10D83277048F12LL) | 18446744073709551615UL)))))));
    g_45 = (p_64 & 0x8CL);
    return l_125;
}







static unsigned char func_75(short p_76, unsigned short p_77, unsigned char p_78, int p_79, unsigned short p_80)
{
    char l_116 = 3L;
    return l_116;
}







static short func_83(unsigned long long p_84)
{
    unsigned char l_87 = 0x60L;
    int l_104 = (-1L);
    int l_111[2][7];
    int l_113 = (-9L);
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_111[i][j] = 0x100029D1L;
    }
    g_114 &= (((p_84 >= (l_113 = (safe_add_func_int32_t_s_s((l_87 ^ (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((p_84 >= (g_112 = ((((!(safe_mod_func_int32_t_s_s(((p_84 < (+(l_111[1][0] = (0xE11B1975C8F0ABFALL < (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((g_110 = (safe_sub_func_int64_t_s_s((((0xDCAA3977L <= ((--g_107) >= g_105)) & ((l_104 = p_84) >= (((+1L) >= 0xAFF43A56L) > p_84))) & 1UL), l_87))) >= 0UL), 15)), 0L)))))) & 0x0D6EL), 0xE4501C69L))) < 0xABL) == 0xB16196426D5D5E43LL) || p_84))) > 0x123FB112L), l_87)), 6)), 0L)), g_45))), 4294967293UL)))) < g_44) != 2UL);
    return g_105;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_118[i][j], "g_118[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_131[i][j][k], "g_131[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_199[i][j][k], "g_199[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_251[i][j][k], "g_251[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_268, "g_268", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_280[i][j], "g_280[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_451[i][j][k], "g_451[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_695[i], "g_695[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_696[i], "g_696[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1001, "g_1001", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1095[i], "g_1095[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1126, "g_1126", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1164[i][j][k], "g_1164[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    transparent_crc(g_1255, "g_1255", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1274[i], "g_1274[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1380, "g_1380", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    transparent_crc(g_1401, "g_1401", print_hash_value);
    transparent_crc(g_1464, "g_1464", print_hash_value);
    transparent_crc(g_1611, "g_1611", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1820[i][j][k], "g_1820[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_1864, "g_1864", print_hash_value);
    transparent_crc(g_1890, "g_1890", print_hash_value);
    transparent_crc(g_2150, "g_2150", print_hash_value);
    transparent_crc(g_2217, "g_2217", print_hash_value);
    transparent_crc(g_2261, "g_2261", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2347[i][j], "g_2347[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2351, "g_2351", print_hash_value);
    transparent_crc(g_2503, "g_2503", print_hash_value);
    transparent_crc(g_2593, "g_2593", print_hash_value);
    transparent_crc(g_2634, "g_2634", print_hash_value);
    transparent_crc(g_2638, "g_2638", print_hash_value);
    transparent_crc(g_2698, "g_2698", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
