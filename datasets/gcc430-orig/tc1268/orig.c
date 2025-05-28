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
   volatile char f0;
};

union U1 {
   unsigned f0;
   volatile unsigned f1;
   volatile int f2;
};


static volatile int g_3 = 0x2FDE2BBEL;
static int g_4 = 0x65121AC4L;
static volatile int g_17 = (-1L);
static int g_18 = 1L;
static int g_22[4] = {0x1BE360DEL, 0x7D24B5E4L, 0x1BE360DEL, 0x7D24B5E4L};
static union U1 g_52[6] = {{0x4DB2A93FL}, {0x38140A97L}, {0x4DB2A93FL}, {0x38140A97L}, {0x4DB2A93FL}, {0x38140A97L}};
static unsigned char g_60 = 255UL;
static unsigned char g_62 = 255UL;
static char g_64[5][7] = {{0x2AL, 0x2AL, 0xC2L, 0x2AL, 0x2AL, 0xC2L, 0x2AL}, {0x2AL, 0x2AL, 0xC2L, 0x2AL, 0x2AL, 0xC2L, 0x2AL}, {0x2AL, 0x2AL, 0xC2L, 0x2AL, 0x2AL, 0xC2L, 0x2AL}, {0x2AL, 0x2AL, 0xC2L, 0x2AL, 0x2AL, 0xC2L, 0x2AL}, {0x2AL, 0x2AL, 0xC2L, 0x2AL, 0x2AL, 0xC2L, 0x2AL}};
static union U1 g_67[5][10][5] = {{{{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}}, {{{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}}, {{{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}}, {{{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}}, {{{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}, {{0x9888327BL}, {0x1F20CF68L}, {0x2B5195E1L}, {0x24791A13L}, {18446744073709551615UL}}}};
static union U1 g_68[8][10] = {{{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}, {{0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}, {0x4C54CFDDL}}};
static union U1 g_69 = {6UL};
static union U1 g_70 = {18446744073709551611UL};
static union U1 g_71 = {0x3BBBF133L};
static union U1 g_72 = {1UL};
static union U1 g_73 = {5UL};
static union U1 g_74 = {0x0DEC7D61L};
static union U1 g_75[4][5][4] = {{{{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}}, {{{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}}, {{{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}}, {{{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}, {{0xBCB13712L}, {0UL}, {4UL}, {0x16D3FBECL}}}};
static union U1 g_76 = {0UL};
static union U1 g_77[4][4] = {{{0UL}, {0UL}, {18446744073709551615UL}, {18446744073709551606UL}}, {{0UL}, {0UL}, {18446744073709551615UL}, {18446744073709551606UL}}, {{0UL}, {0UL}, {18446744073709551615UL}, {18446744073709551606UL}}, {{0UL}, {0UL}, {18446744073709551615UL}, {18446744073709551606UL}}};
static union U1 g_78 = {18446744073709551610UL};
static union U1 g_79[7] = {{0UL}, {0x55DFC961L}, {0UL}, {0x55DFC961L}, {0UL}, {0x55DFC961L}, {0UL}};
static union U1 g_80[1] = {{0x0DECA30EL}};
static union U1 g_85 = {0UL};
static union U1 *g_84 = &g_85;
static short g_93 = 0x282FL;
static unsigned g_95 = 0x630802EBL;
static union U0 g_97 = {0L};
static union U0 *g_96 = &g_97;
static union U1 g_101[10][7] = {{{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}, {{0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}, {0xA64327D2L}, {1UL}, {0xA64327D2L}}};
static volatile int *g_105[9] = {(void*)0, &g_17, (void*)0, &g_17, (void*)0, &g_17, (void*)0, &g_17, (void*)0};
static unsigned g_125 = 0xD33CEA4AL;
static int *g_166[10][3][8] = {{{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}, {{&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}, {&g_22[0], &g_18, &g_22[1], &g_18, &g_18, &g_18, &g_22[0], &g_22[1]}}};
static unsigned short g_190[2] = {4UL, 4UL};
static unsigned short g_192 = 0xEE36L;
static union U1 g_236 = {0UL};
static const unsigned char *g_266 = &g_62;
static const unsigned char **g_265[3][7][10] = {{{&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}}, {{&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}}, {{&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266, &g_266}}};
static char g_292 = 0xA3L;
static const int *g_300 = &g_22[0];
static int g_344 = 0xF7C64EC2L;
static short g_347 = (-6L);
static int g_425 = 4L;



static const unsigned char func_1(void);
static int * func_5(int * p_6, int * p_7);
static int * func_9(int * p_10);
static int * func_11(int * p_12, unsigned p_13);
static int * func_14(int * p_15);
static const union U1 * func_23(int p_24, const int * p_25, union U1 * p_26);
static int * func_28(int * p_29, const short p_30);
static union U0 * func_32(int * p_33, int * p_34, union U1 * p_35, short p_36, unsigned p_37);
static int * func_38(int p_39, const int * p_40, unsigned p_41, char p_42, union U1 * p_43);
static unsigned char func_48(union U1 * p_49, union U1 * p_50);
static const unsigned char func_1(void)
{
    short l_2[7][8] = {{0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}, {0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}, {0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}, {0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}, {0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}, {0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}, {0xEA68L, 0xF72DL, (-1L), (-1L), 0xF72DL, 0xEA68L, 0xF72DL, (-1L)}};
    union U1 *l_473 = (void*)0;
    int i, j;
    for (g_4 = 6; (g_4 >= 2); g_4 -= 1)
    {
        int *l_8[9] = {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4};
        int **l_469 = &l_8[2];
        int i;
        (*l_469) = func_5(l_8[2], func_9(&g_4));


        for (g_69.f0 = 0; (g_69.f0 <= 6); g_69.f0 += 1)
        {
            for (g_18 = 6; (g_18 >= 0); g_18 -= 1)
            {
                union U1 **l_470 = (void*)0;
                int l_474[2][5][8] = {{{0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}}, {{0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}, {0xBAD5C99DL, 0x97CFA197L, 0x6EF26CA4L, (-3L), 0x41FC4297L, 0x41FC4297L, (-3L), 0x6EF26CA4L}}};
                int i, j, k;
                g_84 = &g_77[3][3];

                ;
                l_474[0][4][2] = (((safe_add_func_int16_t_s_s(((l_2[g_4][(g_4 + 1)] = l_2[g_4][g_69.f0]) >= func_48(&g_67[4][0][1], l_473)), (g_18 ^ g_80[0].f0))) < l_474[0][4][2]) & ((&g_166[8][2][0] == (void*)0) < g_85.f0));
                return (*g_266);
            }
        }
    }

    ;

    ;
    return l_2[4][5];
}







static int * func_5(int * p_6, int * p_7)
{
    union U1 *l_407 = &g_68[5][1];
    int l_410 = 0xFCF984D0L;
    int l_414 = (-10L);
    union U0 **l_420[4][10] = {{&g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96}, {&g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96}, {&g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96}, {&g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96, &g_96}};
    char *l_464 = &g_292;
    short *l_465 = &g_347;
    int **l_466 = (void*)0;
    int **l_467 = &g_166[9][2][7];
    int l_468 = 0xD2F6CF41L;
    int i, j;
    for (g_236.f0 = 0; (g_236.f0 <= 4); g_236.f0 += 1)
    {
        unsigned char *l_411 = (void*)0;
        unsigned char *l_412[5];
        int l_413 = 1L;
        int **l_415 = &g_166[6][2][4];
        unsigned short l_448 = 0xC49EL;
        union U1 *l_456 = &g_85;
        int i;
        for (i = 0; i < 5; i++)
            l_412[i] = &g_62;
        (*l_415) = func_38(func_48(l_407, &g_69), func_38(((l_410 = (safe_mod_func_uint16_t_u_u(0xBDE5L, l_410))) != g_64[0][3]), &g_344, g_67[0][5][0].f0, g_125, g_84), l_413, l_414, l_407);
        for (g_85.f0 = 0; (g_85.f0 <= 4); g_85.f0 += 1)
        {
            int l_437 = 0L;
            int l_439[8];
            const union U1 *l_460 = &g_52[4];
            const union U1 **l_459[3];
            int i, j;
            for (i = 0; i < 8; i++)
                l_439[i] = 0x68EF656FL;
            for (i = 0; i < 3; i++)
                l_459[i] = &l_460;
            (*p_7) = g_64[g_236.f0][(g_236.f0 + 1)];
            for (g_95 = 0; (g_95 <= 2); g_95 += 1)
            {
                union U1 *l_421 = &g_52[0];
                char *l_422 = (void*)0;
                char *l_423 = &g_292;
                int l_432 = 4L;
                int l_443 = 0x2E1B9E65L;
                unsigned l_457 = 0xA7793DC5L;
                (*p_7) = (g_64[g_236.f0][(g_236.f0 + 1)] <= (0xDDL < (l_414 = (((*l_423) = ((safe_sub_func_uint8_t_u_u((&g_96 == l_420[3][6]), func_48(l_421, l_421))) & l_414)) < (safe_unary_minus_func_uint8_t_u(g_425))))));
                for (g_344 = 2; (g_344 >= 0); g_344 -= 1)
                {
                    unsigned l_426 = 0x177BA799L;
                    union U1 *l_430 = &g_101[5][0];
                    for (g_192 = 0; (g_192 <= 2); g_192 += 1)
                    {
                        return &g_22[3];


                    }
                    if ((*p_7))
                        continue;
                    if (l_413)
                    {
                        int *l_427 = &g_18;
                        (*l_427) = l_426;
                        if (l_426)
                            continue;
                        if ((*p_6))
                            break;
                        return &g_22[1];


                    }
                    else
                    {
                        union U1 *l_428 = (void*)0;
                        union U1 **l_429[1][9][1] = {{{&l_421}, {&l_421}, {&l_421}, {&l_421}, {&l_421}, {&l_421}, {&l_421}, {&l_421}, {&l_421}}};
                        int l_431 = 0x1EB68D2CL;
                        short *l_438[3];
                        int *l_440 = (void*)0;
                        int *l_441 = (void*)0;
                        int *l_442[9][10] = {{&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}, {&g_4, (void*)0, &g_4, (void*)0, (void*)0, &g_22[3], (void*)0, (void*)0, &g_22[3], (void*)0}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_438[i] = &g_93;
                        l_430 = l_428;

                        ;
                        if (l_431)
                            continue;
                        l_410 = ((l_432 ^ (*p_7)) <= (l_443 = ((l_439[7] = (safe_rshift_func_uint16_t_u_u((((0x8927L && (safe_rshift_func_int8_t_s_s(func_48(l_407, &g_236), g_64[0][1]))) >= (l_410 && l_437)) && l_414), g_18))) >= g_101[5][0].f0)));
                        if ((*p_7))
                            break;
                    }

                    ;
                    if ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(func_48(&g_77[2][1], l_430), g_60)), l_448)))
                    {
                        (*l_415) = p_6;
                    }
                    else
                    {
                        volatile int *l_449 = &g_3;
                        l_449 = &g_3;
                    }
                }
                for (g_62 = 0; (g_62 <= 2); g_62 += 1)
                {
                    unsigned l_452 = 18446744073709551612UL;
                    short *l_453 = &g_347;
                    int l_458[2][3];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_458[i][j] = 1L;
                    }
                    l_458[0][1] = ((*p_7) = ((safe_add_func_uint16_t_u_u(l_414, ((*l_453) = l_452))) < (safe_lshift_func_uint8_t_u_u((g_60 = (func_48(l_456, l_407) >= l_443)), (l_437 >= l_457)))));
                }
            }
            (*l_415) = func_28(&g_4, (l_459[0] == &g_84));
        }
    }
    if (l_414)
    {
        (*p_7) = (safe_mod_func_uint32_t_u_u((l_414 < 1L), 0xA86E8A56L));
    }
    else
    {
        int l_463 = 0xB1EE37CEL;
        l_463 = 0x9A9E5803L;
        (*p_7) = (*p_7);
    }
    (*l_467) = func_28(&g_18, ((*l_465) = (0x2EL ^ ((*l_464) = l_410))));
    l_468 = ((*p_7) = (func_48(&g_101[5][4], l_407) != l_414));
    return p_6;


}







static int * func_9(int * p_10)
{
    int *l_16 = (void*)0;
    int l_340 = 0L;
    int *l_343 = &g_344;
    const int l_345 = 0x07732DF8L;
    short *l_346[6][9] = {{&g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347}, {&g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347}, {&g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347}, {&g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347}, {&g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347}, {&g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347, &g_347}};
    int l_348 = 0x757702AAL;
    unsigned *l_349 = (void*)0;
    unsigned *l_350 = &g_101[5][0].f0;
    int **l_379[1][8][2];
    union U0 **l_389[2][9];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
                l_379[i][j][k] = &l_16;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
            l_389[i][j] = (void*)0;
    }
    p_10 = func_11(func_14(l_16), ((*l_350) = (safe_mod_func_uint32_t_u_u(0UL, (safe_sub_func_int16_t_s_s((l_348 = ((l_340 = ((safe_mod_func_int8_t_s_s((g_4 > ((safe_mod_func_uint32_t_u_u((l_340 == ((((*p_10) <= (*p_10)) <= (g_80[0].f0 != ((*l_343) = (((safe_sub_func_int32_t_s_s((~(-1L)), g_75[3][0][2].f0)) || 3L) < l_340)))) >= l_340)), g_101[5][0].f0)) <= g_72.f0)), g_80[0].f0)) ^ l_340)) > l_345)), l_345))))));

    ;
    for (g_236.f0 = 0; (g_236.f0 > 9); g_236.f0 = safe_add_func_uint8_t_u_u(g_236.f0, 4))
    {
        union U0 **l_387 = &g_96;
        union U0 ***l_388[9][6][3] = {{{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}, {{&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}, {&l_387, &l_387, &l_387}}};
        unsigned char l_393 = 0xCEL;
        int i, j, k;
        for (g_74.f0 = 0; (g_74.f0 <= 37); g_74.f0 = safe_add_func_uint8_t_u_u(g_74.f0, 3))
        {
            unsigned char l_384 = 0xE6L;
            (*p_10) = 0x522DBA9DL;
            if (l_384)
                break;
            for (g_93 = 0; (g_93 <= 2); g_93 += 1)
            {
                for (g_69.f0 = 0; (g_69.f0 <= 2); g_69.f0 += 1)
                {
                    for (g_70.f0 = 0; (g_70.f0 <= 3); g_70.f0 += 1)
                    {
                        union U1 **l_385[2][7] = {{&g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84}, {&g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84}};
                        union U1 ***l_386 = &l_385[0][6];
                        int i, j;
                        (*l_386) = l_385[0][6];
                        return p_10;


                    }
                }
            }
        }
        l_389[1][5] = l_387;
        for (g_93 = 0; (g_93 >= 1); g_93++)
        {
            union U0 **l_392 = &g_96;
            int *l_398 = &g_22[0];
            l_393 = ((*l_343) = ((&g_96 == l_392) > g_64[3][6]));
            for (l_393 = 0; (l_393 != 53); l_393 = safe_add_func_uint16_t_u_u(l_393, 1))
            {
                unsigned short l_396 = 6UL;
                int *l_397 = &l_340;
                (*p_10) = ((g_80[0].f2 >= g_64[0][2]) ^ l_396);
                return &g_344;


            }
            return l_398;


        }
    }


    for (g_78.f0 = 0; (g_78.f0 > 46); g_78.f0++)
    {
        short l_405 = 0L;
        char *l_406 = &g_64[1][5];
        l_405 = (safe_sub_func_uint16_t_u_u((((65535UL | 0xB614L) != (*p_10)) && (safe_sub_func_int32_t_s_s(9L, ((*l_343) = ((void*)0 != &g_4))))), 0xFBACL));
        (*l_343) = (((*l_406) = ((*p_10) < ((*l_343) | 0x7FBDF4B2L))) ^ l_405);
    }
    return p_10;


}







static int * func_11(int * p_12, unsigned p_13)
{
    char l_353 = 9L;
    int l_354 = 1L;
    union U1 *l_363[7];
    int l_364 = 8L;
    short l_369 = 0xF225L;
    int *l_370[3];
    unsigned char l_371[7];
    short l_374 = 0x9DD3L;
    short *l_377[8] = {&g_93, &g_347, &g_93, &g_347, &g_93, &g_347, &g_93, &g_347};
    char l_378 = 0x0AL;
    int i;
    for (i = 0; i < 7; i++)
        l_363[i] = &g_68[0][7];
    for (i = 0; i < 3; i++)
        l_370[i] = &g_344;
    for (i = 0; i < 7; i++)
        l_371[i] = 1UL;
    for (g_72.f0 = 1; (g_72.f0 <= 8); g_72.f0 += 1)
    {
        int *l_351[6] = {&g_18, &g_18, &g_18, &g_18, &g_18, &g_18};
        char l_352[3];
        union U0 * const l_359 = &g_97;
        int **l_365 = (void*)0;
        int **l_366[8][9] = {{&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}, {&g_166[6][2][4], &g_166[6][2][4], &g_166[6][2][4], &l_351[4], &g_166[6][2][4], (void*)0, &l_351[4], (void*)0, &l_351[4]}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_352[i] = 0x70L;
        l_354 = (l_353 = (l_352[2] = p_13));
        l_364 = (!(safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(p_13, ((l_354 = ((void*)0 != l_359)) <= ((safe_unary_minus_func_uint16_t_u(g_60)) >= g_69.f0)))), (safe_sub_func_int8_t_s_s(func_48(&g_79[1], l_363[6]), (~p_13))))));
        p_12 = p_12;
        return &g_18;


    }
    l_371[2] = ((safe_add_func_int8_t_s_s(l_354, l_369)) || 0xC950F7E0L);
    l_378 = (((p_13 != p_13) != (g_347 = (g_93 = (safe_lshift_func_uint8_t_u_s(l_374, (safe_lshift_func_uint8_t_u_s((*g_266), 7))))))) < 6UL);
    return &g_344;


}







static int * func_14(int * p_15)
{
    unsigned short l_27 = 0x5537L;
    const char l_31 = 0x48L;
    union U1 *l_100 = &g_101[5][0];
    const union U1 *l_330[5] = {&g_76, &g_79[1], &g_76, &g_79[1], &g_76};
    const union U1 **l_329 = &l_330[1];
    int *l_331[9][7] = {{&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}, {&g_18, &g_4, (void*)0, &g_4, &g_22[1], &g_22[2], &g_22[2]}};
    int i, j;
    p_15 = (void*)0;
    for (g_18 = 1; (g_18 == 27); ++g_18)
    {
        int *l_21 = &g_22[1];
        (*l_21) = (-8L);
    }
    (*l_329) = func_23(l_27, func_28(p_15, l_31), l_100);


    return l_331[6][6];


}







static const union U1 * func_23(int p_24, const int * p_25, union U1 * p_26)
{
    unsigned char l_102 = 0xA4L;
    int l_109 = 0x0B5FE46EL;
    int l_119 = (-1L);
    int l_120 = 0xD8A0C824L;
    unsigned l_127[9];
    unsigned l_158[3][9] = {{0x626EB52EL, 0x626EB52EL, 1UL, 7UL, 0UL, 7UL, 1UL, 0x626EB52EL, 0x626EB52EL}, {0x626EB52EL, 0x626EB52EL, 1UL, 7UL, 0UL, 7UL, 1UL, 0x626EB52EL, 0x626EB52EL}, {0x626EB52EL, 0x626EB52EL, 1UL, 7UL, 0UL, 7UL, 1UL, 0x626EB52EL, 0x626EB52EL}};
    union U1 *l_269[1][6][8] = {{{&g_67[2][1][1], &g_74, &g_79[1], (void*)0, &g_79[1], &g_74, &g_67[2][1][1], &g_101[0][1]}, {&g_67[2][1][1], &g_74, &g_79[1], (void*)0, &g_79[1], &g_74, &g_67[2][1][1], &g_101[0][1]}, {&g_67[2][1][1], &g_74, &g_79[1], (void*)0, &g_79[1], &g_74, &g_67[2][1][1], &g_101[0][1]}, {&g_67[2][1][1], &g_74, &g_79[1], (void*)0, &g_79[1], &g_74, &g_67[2][1][1], &g_101[0][1]}, {&g_67[2][1][1], &g_74, &g_79[1], (void*)0, &g_79[1], &g_74, &g_67[2][1][1], &g_101[0][1]}, {&g_67[2][1][1], &g_74, &g_79[1], (void*)0, &g_79[1], &g_74, &g_67[2][1][1], &g_101[0][1]}}};
    const int **l_285 = (void*)0;
    short *l_327 = &g_93;
    short **l_326[9] = {&l_327, &l_327, &l_327, &l_327, &l_327, &l_327, &l_327, &l_327, &l_327};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_127[i] = 7UL;
    if (((l_102 = func_48(&g_101[5][2], p_26)) || (safe_lshift_func_int8_t_s_s(p_24, 6))))
    {
        unsigned char *l_106[9] = {&g_60, &g_62, &g_60, &g_62, &g_60, &g_62, &g_60, &g_62, &g_60};
        unsigned l_114 = 0xB985A9A9L;
        unsigned l_121 = 1UL;
        int l_122 = (-1L);
        unsigned *l_123 = &l_114;
        unsigned char *l_124[7][1][7] = {{{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}, {{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}, {{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}, {{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}, {{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}, {{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}, {{&g_62, &g_60, &l_102, &g_62, &g_60, &g_60, &g_60}}};
        int l_126 = 0x0DF3FCB1L;
        int l_149 = (-1L);
        int i, j, k;
        g_105[6] = (void*)0;
        l_126 = (~(((l_106[8] = l_106[7]) != &l_102) ^ (g_125 = ((((safe_lshift_func_uint8_t_u_s(((l_109 = (g_52[4].f2 >= 0x3DC1L)) <= (safe_sub_func_int8_t_s_s(p_24, (safe_rshift_func_uint16_t_u_u((l_114 && ((*l_123) = (((safe_sub_func_int32_t_s_s((*p_25), (l_122 = (safe_sub_func_uint32_t_u_u((l_120 = (l_119 = ((g_68[2][1].f0 == (g_71.f0 & 0xE7L)) > p_24))), l_121))))) < g_22[2]) ^ l_121))), 8))))), 4)) <= g_80[0].f0) == l_121) >= 0x11E3L))));
        l_127[7] = (-1L);
        if ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(65531UL, (-6L))), (safe_mod_func_int32_t_s_s(l_126, l_121)))))
        {
            short l_136[5][6][5] = {{{(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}}, {{(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}}, {{(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}}, {{(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}}, {{(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}, {(-9L), 0xDB1CL, (-9L), 0x54EDL, 9L}}};
            int l_147 = 0L;
            int *l_148 = &l_120;
            int *l_150 = (void*)0;
            int *l_151 = (void*)0;
            int *l_152 = &l_109;
            int i, j, k;
            (*l_152) = ((safe_rshift_func_int8_t_s_s((l_136[3][4][1] && l_122), 0)) > (((g_62 = l_126) || p_24) == (l_149 = (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(func_48(&g_79[4], &g_85), l_136[3][4][1])) & (((*l_148) = (safe_rshift_func_int16_t_s_u(p_24, l_147))) || 0x3C472D6AL)), g_78.f0)) || l_121) == l_102), p_24)), g_75[3][0][2].f0)))));
            for (l_114 = 9; (l_114 >= 23); ++l_114)
            {
                (*l_148) = (safe_rshift_func_int16_t_s_u((+(safe_unary_minus_func_int8_t_s(l_158[2][7]))), 0));
            }
            l_122 = l_114;
        }
        else
        {
            int *l_160 = &l_122;
            int **l_159 = &l_160;
            (*l_159) = func_28(((*l_159) = &g_22[2]), g_85.f1);

            ;
            p_25 = p_25;
            if ((l_160 != l_160))
            {
                short l_181 = 0xE727L;
                if ((*p_25))
                {
                    unsigned short l_171 = 0x4936L;
                    if ((l_109 & p_24))
                    {
                        union U1 **l_161[6];
                        int *l_163 = &g_4;
                        int **l_162 = &l_163;
                        int **l_164 = (void*)0;
                        int **l_165[6];
                        const int *l_168[2][9][10] = {{{&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}}, {{&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}, {&l_122, &g_18, &l_120, &g_18, &l_122, &g_18, &l_120, &g_18, &l_122, &g_18}}};
                        const int **l_167 = &l_168[1][7][5];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_161[i] = &g_84;
                        for (i = 0; i < 6; i++)
                            l_165[i] = (void*)0;
                        g_84 = &g_101[1][6];

                        ;
                        g_166[6][2][4] = ((*l_162) = ((*l_159) = &g_4));

                        ;
                        (*l_167) = p_25;
                    }
                    else
                    {
                        const int *l_170 = &l_122;
                        const int **l_169 = &l_170;
                        const union U1 *l_172 = &g_77[3][1];
                        (*l_169) = p_25;

                        ;
                        (**l_159) = l_171;
                        (*l_169) = p_25;
                        return l_172;


                    }

                    ;
                    ;
                }
                else
                {
                    for (g_74.f0 = 0; (g_74.f0 <= 6); g_74.f0 += 1)
                    {
                        volatile int **l_173 = &g_105[6];
                        (*l_173) = &g_3;
                    }
                }

                ;
                for (l_121 = (-4); (l_121 <= 8); l_121++)
                {
                    int l_179 = 0x02B33B09L;
                    for (g_73.f0 = 0; (g_73.f0 <= 8); g_73.f0 += 1)
                    {
                        int l_176 = 0xADF1167AL;
                        l_176 = func_48(p_26, p_26);
                        return p_26;


                    }
                    for (l_149 = (-24); (l_149 != 18); ++l_149)
                    {
                        int *l_180 = &g_22[1];
                        l_181 = ((*l_180) = l_179);
                    }
                }
            }
            else
            {
                union U1 **l_184 = &g_84;
                union U1 *l_186 = &g_70;
                union U1 **l_185 = &l_186;
                for (g_93 = (-13); (g_93 <= 25); g_93 = safe_add_func_uint8_t_u_u(g_93, 1))
                {
                    (*l_160) = (p_25 != p_25);
                }
                (*l_185) = ((*l_184) = &g_101[0][2]);

                ;
                ;
            }

            ;
        }
    }
    else
    {
        const int *l_187[1][2][9];
        unsigned short *l_191 = &g_192;
        int **l_193 = (void*)0;
        int l_194 = 0xA7D26944L;
        int l_211 = 0x47682D1DL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 9; k++)
                    l_187[i][j][k] = (void*)0;
            }
        }
        g_166[2][1][4] = func_38(func_48(p_26, p_26), l_187[0][0][1], (safe_mod_func_int16_t_s_s((((-8L) & 0L) >= (((((((*l_191) = (g_190[0] = l_109)) >= ((-5L) >= (*p_25))) <= g_93) < g_70.f0) == (*p_25)) >= (*p_25))), 0x5079L)), p_24, g_84);
        l_194 = 0xF0B09D08L;
        for (g_76.f0 = 0; (g_76.f0 > 27); g_76.f0 = safe_add_func_int32_t_s_s(g_76.f0, 8))
        {
            unsigned char l_200 = 255UL;
            int l_202 = (-1L);
            short *l_207[4];
            short **l_206 = &l_207[1];
            union U0 * const l_208 = &g_97;
            unsigned *l_212 = &g_95;
            int *l_213 = &g_22[1];
            int i;
            for (i = 0; i < 4; i++)
                l_207[i] = &g_93;
            for (g_78.f0 = 0; (g_78.f0 <= 7); g_78.f0 += 1)
            {
                short *l_198[4];
                short **l_197 = &l_198[2];
                short ***l_199 = &l_197;
                unsigned char *l_201[1];
                unsigned short l_203[1];
                int i;
                for (i = 0; i < 4; i++)
                    l_198[i] = &g_93;
                for (i = 0; i < 1; i++)
                    l_201[i] = &l_102;
                for (i = 0; i < 1; i++)
                    l_203[i] = 0x4968L;
                (*l_199) = l_197;
                l_203[0] = (((l_202 = (l_200 != l_200)) <= p_24) | p_24);
                if (l_158[2][7])
                    break;
                for (l_200 = 0; (l_200 <= 2); l_200 += 1)
                {
                    return p_26;


                }
            }
            (*l_213) = (((p_24 <= (safe_sub_func_int32_t_s_s((((*l_206) = (void*)0) == &g_93), ((((l_208 != (void*)0) || (safe_sub_func_int8_t_s_s(1L, (l_211 = (l_109 = g_85.f2))))) & ((*l_212) = p_24)) < (g_73.f0 ^ g_73.f0))))) < l_200) | 1L);


        }
    }
    for (g_18 = 0; (g_18 <= (-22)); g_18--)
    {
        unsigned char l_225[3][5][6] = {{{0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}}, {{0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}}, {{0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}, {0x2BL, 0x5FL, 0x2BL, 0x23L, 254UL, 0x21L}}};
        union U1 *l_235 = &g_236;
        int * const l_243 = &l_109;
        union U0 *l_260 = &g_97;
        int l_314 = 0L;
        short **l_328 = &l_327;
        int i, j, k;
        if (l_119)
        {
            union U0 **l_216 = &g_96;
            (*l_216) = &g_97;
        }
        else
        {
            unsigned char **l_232 = (void*)0;
            unsigned char *l_233[3][8] = {{&g_62, &g_62, &l_225[2][2][2], &g_62, &g_62, &l_225[2][2][2], &g_62, &g_62}, {&g_62, &g_62, &l_225[2][2][2], &g_62, &g_62, &l_225[2][2][2], &g_62, &g_62}, {&g_62, &g_62, &l_225[2][2][2], &g_62, &g_62, &l_225[2][2][2], &g_62, &g_62}};
            unsigned short *l_234[1][4];
            int **l_237[6][1][2] = {{{&g_166[8][0][3], &g_166[8][0][3]}}, {{&g_166[8][0][3], &g_166[8][0][3]}}, {{&g_166[8][0][3], &g_166[8][0][3]}}, {{&g_166[8][0][3], &g_166[8][0][3]}}, {{&g_166[8][0][3], &g_166[8][0][3]}}, {{&g_166[8][0][3], &g_166[8][0][3]}}};
            const union U1 *l_238[8][8][4] = {{{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}, {{&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}, {&g_67[0][3][4], &g_236, &g_68[7][6], &g_78}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_234[i][j] = &g_190[0];
            }
            g_166[7][1][6] = func_38(((safe_add_func_uint16_t_u_u(0x8F81L, p_24)) == (p_24 <= (safe_sub_func_uint16_t_u_u(p_24, (((safe_sub_func_int32_t_s_s((*p_25), ((safe_lshift_func_int16_t_s_u((l_225[2][0][3] > g_78.f1), 1)) == (g_190[0] = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((p_24 == (g_192 = ((l_233[0][2] = &g_62) != (void*)0))), 2)), 2)), 8)) != g_4))))) >= p_24) && (-1L)))))), &g_22[1], p_24, l_225[0][1][5], l_235);
            return l_238[3][7][2];



        }
        for (g_60 = 4; (g_60 > 1); --g_60)
        {
            unsigned short l_247 = 0xEEF0L;
            union U1 *l_254 = (void*)0;
            const union U0 *l_258 = &g_97;
            const union U0 **l_257[4] = {(void*)0, &l_258, (void*)0, &l_258};
            unsigned char **l_288 = (void*)0;
            int i;
            for (g_73.f0 = 11; (g_73.f0 != 49); g_73.f0 = safe_add_func_uint32_t_u_u(g_73.f0, 3))
            {
                union U1 *l_264 = &g_77[3][1];
                int l_272 = (-1L);
                union U1 **l_277[7][9][3] = {{{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}, {{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}, {{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}, {{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}, {{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}, {{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}, {{&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}, {&l_235, &l_254, &g_84}}};
                int i, j, k;
                p_25 = l_243;

                ;
                for (g_78.f0 = 0; (g_78.f0 < 21); g_78.f0++)
                {
                    char *l_246 = &g_64[3][5];
                    unsigned l_261 = 0x00E5BF45L;
                    unsigned char *l_268 = &l_225[2][0][3];
                    unsigned char **l_267 = &l_268;
                    unsigned short *l_275 = &g_190[0];
                    unsigned short *l_276[4][10][6] = {{{(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}}, {{(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}}, {{(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}}, {{(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}, {(void*)0, &l_247, &g_192, &g_192, &g_192, &l_247}}};
                    int i, j, k;
                    l_247 = ((*l_243) = (l_246 == (void*)0));
                    for (g_125 = 0; (g_125 >= 33); g_125 = safe_add_func_uint16_t_u_u(g_125, 2))
                    {
                        short *l_255 = (void*)0;
                        short *l_256 = &g_93;
                        int *l_259 = &g_22[1];
                        (*l_243) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(func_48(&g_67[0][5][0], l_254), g_125)), ((*l_256) = (-4L)))) > p_24);
                        (*l_259) = ((*l_243) = ((void*)0 == l_257[2]));
                        l_260 = l_260;
                        if (l_261)
                            break;
                    }
                    (*l_243) = (safe_rshift_func_int8_t_s_s((((p_24 > ((-1L) | func_48(l_264, &g_74))) <= g_64[1][5]) | (g_265[1][3][0] != l_267)), 1));
                    (*l_243) = ((func_48(p_26, l_269[0][3][3]) > l_261) != (safe_sub_func_int16_t_s_s(l_272, (l_119 = ((*l_275) = (safe_lshift_func_int16_t_s_u((-2L), p_24)))))));
                }
                g_84 = p_26;

                ;
            }
            for (l_120 = (-4); (l_120 <= 12); l_120++)
            {
                (*l_243) = l_120;
            }
            for (g_73.f0 = 0; (g_73.f0 > 52); ++g_73.f0)
            {
                int l_284[3];
                int **l_286 = &g_166[1][2][1];
                int ***l_287 = &l_286;
                char *l_289 = (void*)0;
                char *l_290 = &g_64[1][4];
                char *l_291 = &g_292;
                int i;
                for (i = 0; i < 3; i++)
                    l_284[i] = 0L;
                (*l_243) = ((((safe_add_func_uint8_t_u_u(0UL, ((*l_291) = ((*l_290) = (~(l_284[1] <= (((l_285 != ((*l_287) = l_286)) > (l_288 == l_288)) > (g_52[4].f1 != ((*l_243) || 0xB3L))))))))) | g_72.f0) == 4L) > g_60);
            }
        }
        for (l_109 = 22; (l_109 < (-13)); --l_109)
        {
            int l_295 = 0x11CA84DBL;
            const int *l_304 = &g_18;
            int **l_313[7][6] = {{&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}, {&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}, {&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}, {&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}, {&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}, {&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}, {&g_166[6][2][4], &g_166[8][2][6], &g_166[4][1][3], &g_166[8][1][6], &g_166[1][2][3], &g_166[0][2][0]}};
            union U1 **l_318 = &l_235;
            union U1 ***l_317 = &l_318;
            union U1 **l_319[1][9][8] = {{{(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}, {(void*)0, &l_269[0][3][3], (void*)0, (void*)0, (void*)0, &g_84, (void*)0, &l_269[0][3][3]}}};
            short *l_325 = (void*)0;
            short **l_324 = &l_325;
            int i, j, k;
            if ((*l_243))
            {
                if (l_295)
                    break;
            }
            else
            {
                return &g_67[0][5][0];



            }
            for (g_78.f0 = (-12); (g_78.f0 >= 37); ++g_78.f0)
            {
                int *l_312[4][3][2] = {{{(void*)0, &l_109}, {(void*)0, &l_109}, {(void*)0, &l_109}}, {{(void*)0, &l_109}, {(void*)0, &l_109}, {(void*)0, &l_109}}, {{(void*)0, &l_109}, {(void*)0, &l_109}, {(void*)0, &l_109}}, {{(void*)0, &l_109}, {(void*)0, &l_109}, {(void*)0, &l_109}}};
                int i, j, k;
                for (g_62 = 0; (g_62 < 20); g_62 = safe_add_func_uint16_t_u_u(g_62, 6))
                {
                    unsigned short l_307 = 0UL;
                    g_300 = p_25;

                    ;
                    for (g_85.f0 = 0; (g_85.f0 <= 6); g_85.f0 += 1)
                    {
                        union U1 **l_301 = &l_269[0][3][3];
                        union U1 **l_302 = &l_235;
                        int *l_303 = &g_22[0];
                        const int **l_305[6];
                        unsigned *l_306[3];
                        unsigned char *l_308 = &l_225[2][0][3];
                        unsigned short *l_311[10][5][5] = {{{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}, {{&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}, {&g_192, &g_190[0], &g_192, &g_190[1], &g_190[0]}}};
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_305[i] = (void*)0;
                        for (i = 0; i < 3; i++)
                            l_306[i] = &g_236.f0;
                        g_105[g_85.f0] = (void*)0;
                        (*l_303) = func_48(((*l_301) = p_26), ((*l_302) = p_26));

                        ;
                        l_312[3][1][1] = func_38(l_127[g_85.f0], (g_300 = l_304), (l_307 = g_76.f0), (0xE999L < (g_192 = (((*l_243) == (((*l_308) = (g_60 = func_48(&g_72, p_26))) != (safe_mod_func_uint32_t_u_u(g_93, (*p_25))))) < p_24))), g_84);

                        ;
                    }

                    ;
                }


            }

            ;
            l_314 = (p_24 >= ((g_166[6][2][4] = &l_119) == &g_17));
            g_300 = (g_166[3][1][2] = func_38((g_95 > (safe_rshift_func_int16_t_s_u((((((*l_317) = &g_84) == l_319[0][0][2]) < (*l_304)) < ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_324 == (l_328 = l_326[4])), (*g_266))), (func_48(p_26, &g_85) && 252UL))) != 0xA9F10854L)), g_85.f0))), &g_22[2], (*l_243), g_64[4][4], g_84));

            ;
            ;
        }

        ;
    }

    ;

    return &g_67[0][5][0];



}







static int * func_28(int * p_29, const short p_30)
{
    for (g_18 = 3; (g_18 >= 0); g_18 -= 1)
    {
        union U1 *l_51 = &g_52[4];
        unsigned char *l_61 = &g_62;
        char *l_63[9] = {&g_64[1][5], &g_64[1][5], &g_64[1][5], &g_64[1][5], &g_64[1][5], &g_64[1][5], &g_64[1][5], &g_64[1][5], &g_64[1][5]};
        int l_65 = 1L;
        union U1 *l_66[5][10] = {{&g_77[3][1], &g_80[0], &g_79[1], &g_74, (void*)0, &g_71, &g_72, &g_69, &g_79[1], &g_69}, {&g_77[3][1], &g_80[0], &g_79[1], &g_74, (void*)0, &g_71, &g_72, &g_69, &g_79[1], &g_69}, {&g_77[3][1], &g_80[0], &g_79[1], &g_74, (void*)0, &g_71, &g_72, &g_69, &g_79[1], &g_69}, {&g_77[3][1], &g_80[0], &g_79[1], &g_74, (void*)0, &g_71, &g_72, &g_69, &g_79[1], &g_69}, {&g_77[3][1], &g_80[0], &g_79[1], &g_74, (void*)0, &g_71, &g_72, &g_69, &g_79[1], &g_69}};
        union U0 **l_98 = (void*)0;
        union U0 **l_99 = &g_96;
        int i, j;
        (*l_99) = func_32(func_38(((((safe_add_func_uint8_t_u_u(g_22[g_18], (255UL || (safe_lshift_func_int8_t_s_u((l_65 = (p_30 ^ ((+func_48(l_51, l_51)) & (((safe_mod_func_uint16_t_u_u((((*l_61) = (safe_rshift_func_uint8_t_u_u((g_18 == (g_60 = (g_22[g_18] || (!g_4)))), p_30))) > (-7L)), p_30)) & g_4) & g_22[g_18])))), p_30))))) > g_64[3][3]) == g_22[g_18]) == 0xF48BL), p_29, g_22[g_18], p_30, l_66[4][1]), &g_22[g_18], g_84, g_71.f0, g_69.f0);
    }
    return &g_22[1];


}







static union U0 * func_32(int * p_33, int * p_34, union U1 * p_35, short p_36, unsigned p_37)
{
    union U1 **l_90 = &g_84;
    unsigned short l_91 = 0x36AEL;
    short *l_92 = &g_93;
    unsigned *l_94 = &g_95;
    (*p_34) = (((safe_sub_func_int32_t_s_s(((((*l_94) = (((safe_mod_func_int32_t_s_s(((void*)0 == l_90), l_91)) || l_91) & ((*l_92) = l_91))) >= l_91) <= ((void*)0 != g_96)), ((l_91 >= g_72.f1) > l_91))) > (*p_34)) >= 0x9AL);
    return &g_97;


}







static int * func_38(int p_39, const int * p_40, unsigned p_41, char p_42, union U1 * p_43)
{
    union U1 *l_82[9][2] = {{&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}, {&g_68[2][6], &g_67[1][9][4]}};
    union U1 **l_81 = &l_82[1][0];
    int *l_83 = &g_4;
    int i, j;
    (*l_81) = &g_78;
    return l_83;


}







static unsigned char func_48(union U1 * p_49, union U1 * p_50)
{
    volatile int *l_53 = (void*)0;
    volatile int *l_54[2][3][10] = {{{&g_17, &g_17, &g_17, &g_17, &g_17, (void*)0, (void*)0, &g_17, (void*)0, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, (void*)0, (void*)0, &g_17, (void*)0, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, (void*)0, (void*)0, &g_17, (void*)0, &g_17}}, {{&g_17, &g_17, &g_17, &g_17, &g_17, (void*)0, (void*)0, &g_17, (void*)0, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, (void*)0, (void*)0, &g_17, (void*)0, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17, (void*)0, (void*)0, &g_17, (void*)0, &g_17}}};
    int l_55 = 8L;
    int i, j, k;
    g_3 = g_52[4].f2;
    return l_55;
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
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_52[i].f0, "g_52[i].f0", print_hash_value);
        transparent_crc(g_52[i].f1, "g_52[i].f1", print_hash_value);
        transparent_crc(g_52[i].f2, "g_52[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_64[i][j], "g_64[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_67[i][j][k].f0, "g_67[i][j][k].f0", print_hash_value);
                transparent_crc(g_67[i][j][k].f1, "g_67[i][j][k].f1", print_hash_value);
                transparent_crc(g_67[i][j][k].f2, "g_67[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_68[i][j].f0, "g_68[i][j].f0", print_hash_value);
            transparent_crc(g_68[i][j].f1, "g_68[i][j].f1", print_hash_value);
            transparent_crc(g_68[i][j].f2, "g_68[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_75[i][j][k].f0, "g_75[i][j][k].f0", print_hash_value);
                transparent_crc(g_75[i][j][k].f1, "g_75[i][j][k].f1", print_hash_value);
                transparent_crc(g_75[i][j][k].f2, "g_75[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_77[i][j].f0, "g_77[i][j].f0", print_hash_value);
            transparent_crc(g_77[i][j].f1, "g_77[i][j].f1", print_hash_value);
            transparent_crc(g_77[i][j].f2, "g_77[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_79[i].f0, "g_79[i].f0", print_hash_value);
        transparent_crc(g_79[i].f1, "g_79[i].f1", print_hash_value);
        transparent_crc(g_79[i].f2, "g_79[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_80[i].f0, "g_80[i].f0", print_hash_value);
        transparent_crc(g_80[i].f1, "g_80[i].f1", print_hash_value);
        transparent_crc(g_80[i].f2, "g_80[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_101[i][j].f0, "g_101[i][j].f0", print_hash_value);
            transparent_crc(g_101[i][j].f1, "g_101[i][j].f1", print_hash_value);
            transparent_crc(g_101[i][j].f2, "g_101[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_190[i], "g_190[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    transparent_crc(g_236.f2, "g_236.f2", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
