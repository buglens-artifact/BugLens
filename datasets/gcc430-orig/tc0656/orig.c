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



static unsigned g_36 = 0x6985BA56L;
static int g_49[2][9] = {{0x6AB81D4BL, 0x6AB81D4BL, 0x9AB1B576L, 0x6AB81D4BL, 0x6AB81D4BL, 0x9AB1B576L, 0x6AB81D4BL, 0x6AB81D4BL, 0x9AB1B576L}, {0x6AB81D4BL, 0x6AB81D4BL, 0x9AB1B576L, 0x6AB81D4BL, 0x6AB81D4BL, 0x9AB1B576L, 0x6AB81D4BL, 0x6AB81D4BL, 0x9AB1B576L}};
static int **g_71 = (void*)0;
static unsigned short g_80 = 5UL;
static unsigned short g_82[3] = {0x07B3L, 0x07B3L, 0x07B3L};
static unsigned g_95 = 0xE11E7DC6L;
static int g_123 = 7L;
static int *g_126[8][4][6] = {{{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}, {{&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}, {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123}}};
static unsigned g_169[6] = {0x27C6EF00L, 18446744073709551608UL, 0x27C6EF00L, 18446744073709551608UL, 0x27C6EF00L, 18446744073709551608UL};
static unsigned *g_179 = (void*)0;
static unsigned **g_178 = &g_179;
static short g_183 = 0x13ADL;
static char g_193[10][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
static unsigned g_195 = 0x9053F416L;
static int *g_197 = &g_49[0][7];
static unsigned g_203 = 0x085B5EA0L;
static int *g_210 = &g_49[0][7];
static unsigned char g_226[6][4][4] = {{{254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}}, {{254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}}, {{254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}}, {{254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}}, {{254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}}, {{254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}, {254UL, 0xC9L, 0UL, 0UL}}};
static char g_255[7] = {(-2L), 0xEAL, (-2L), 0xEAL, (-2L), 0xEAL, (-2L)};
static unsigned short **g_265 = (void*)0;
static int g_269 = (-1L);
static int *g_268 = &g_269;
static int **g_267[8][7] = {{&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}, {&g_268, &g_268, &g_268, &g_268, &g_268, (void*)0, &g_268}};
static int g_276 = 0L;
static unsigned char g_279 = 0x3AL;
static char g_316[10] = {(-1L), 0x06L, (-1L), 0x06L, (-1L), 0x06L, (-1L), 0x06L, (-1L), 0x06L};
static int *g_318 = (void*)0;
static unsigned short g_322 = 0UL;
static short *g_337 = &g_183;
static char g_389 = 0xD1L;
static unsigned char g_425[3] = {1UL, 1UL, 1UL};
static unsigned char *g_449 = (void*)0;
static unsigned char **g_448 = &g_449;
static short g_543 = 0x2509L;
static short **g_554 = &g_337;
static int *g_562 = (void*)0;
static unsigned char g_664 = 0xF3L;
static int *g_734 = &g_123;
static int *g_758 = &g_49[0][5];
static char *g_768 = &g_316[7];



static char func_1(void);
static unsigned short func_2(unsigned char p_3);
static unsigned char func_6(char p_7, unsigned char p_8, short p_9);
static char func_10(int p_11, int p_12, char p_13, int p_14);
static char func_20(int p_21, int p_22, unsigned short p_23, unsigned short p_24);
static short func_25(unsigned p_26, unsigned short p_27, unsigned p_28, unsigned short p_29);
static char func_37(char p_38, unsigned char p_39, int p_40, int p_41);
static unsigned short func_42(unsigned p_43, unsigned short p_44, unsigned short p_45);
static int * func_56(char p_57, int * p_58, int * p_59);
static unsigned char func_67(int * p_68, int p_69);
static char func_1(void)
{
    short l_17 = 1L;
    unsigned short l_46 = 0x843CL;
    char *l_319[5][8] = {{&g_193[1][0], &g_193[1][0], &g_255[0], (void*)0, &g_255[6], (void*)0, &g_255[0], &g_193[1][0]}, {&g_193[1][0], &g_193[1][0], &g_255[0], (void*)0, &g_255[6], (void*)0, &g_255[0], &g_193[1][0]}, {&g_193[1][0], &g_193[1][0], &g_255[0], (void*)0, &g_255[6], (void*)0, &g_255[0], &g_193[1][0]}, {&g_193[1][0], &g_193[1][0], &g_255[0], (void*)0, &g_255[6], (void*)0, &g_255[0], &g_193[1][0]}, {&g_193[1][0], &g_193[1][0], &g_255[0], (void*)0, &g_255[6], (void*)0, &g_255[0], &g_193[1][0]}};
    int l_320 = (-10L);
    unsigned l_341 = 0x02BC4801L;
    unsigned short *l_665 = &g_80;
    unsigned short l_666 = 65532UL;
    unsigned *l_667 = &g_36;
    unsigned char *l_668 = &g_425[0];
    int l_684 = (-3L);
    short l_696 = 0xB1B9L;
    unsigned short *l_703[10] = {&g_322, &g_82[2], &g_322, &g_82[2], &g_322, &g_82[2], &g_322, &g_82[2], &g_322, &g_82[2]};
    char l_746[2];
    int l_787 = (-8L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_746[i] = 5L;
    if ((func_2(((*l_668) = (((*l_667) = (((((((*l_665) = (safe_sub_func_uint8_t_u_u((((func_6(func_10((((safe_sub_func_int32_t_s_s((l_17 == (safe_rshift_func_int8_t_s_s(func_20(l_17, ((((-1L) && ((l_17 != (func_25((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_36, ((l_17 == ((g_36 <= func_37((l_320 = (func_42(g_36, (+((l_46 && g_36) >= l_17)), g_36) < 0x603CL)), l_46, l_17, g_269)) || l_17)) | 1UL))), l_46)), g_169[5])), l_17, l_46, g_36) < l_46)) || 0L)) >= 0xE739L) ^ 65533UL), g_322, l_46), 4))), l_46)) >= g_183) && g_203), l_341, l_17, (*g_268)), g_36, g_322) & g_169[2]) != l_341) || g_664), 0xF9L))) || l_320) ^ l_46) ^ l_341) && l_666) ^ 0x8BA787DDL)) != l_46))) >= 0xA6ECL))
    {
        short **l_671 = &g_337;
        short ***l_672[6];
        int *l_673 = &l_320;
        int i;
        for (i = 0; i < 6; i++)
            l_672[i] = &l_671;
        g_554 = l_671;
        for (l_666 = 0; l_666 < 7; l_666 += 1)
        {
            g_255[l_666] = 0x62L;
        }
        g_562 = l_673;

        ;
    }
    else
    {
        short l_676 = 9L;
        int ***l_683 = &g_267[3][5];
        unsigned short *l_702 = &g_82[2];
        int l_731[8][7][4] = {{{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}, {{0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}, {0xC75366BDL, 0L, 0L, (-4L)}}};
        int *l_791 = &g_123;
        int **l_792 = &g_318;
        int i, j, k;
        if ((safe_lshift_func_int8_t_s_u(l_676, (safe_lshift_func_int8_t_s_s(func_42((func_2(l_320) | ((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u(0xC2AAEE95L, l_676)) < (l_676 > 0x5469A8F2L)) ^ ((l_684 = func_25((g_425[2] && (((*l_683) = (void*)0) == &g_268)), l_676, l_341, g_82[2])) || (-9L))), 10)) > g_543)), l_676, g_255[6]), g_425[0])))))
        {
            char l_689[7][2] = {{1L, 0xD0L}, {1L, 0xD0L}, {1L, 0xD0L}, {1L, 0xD0L}, {1L, 0xD0L}, {1L, 0xD0L}, {1L, 0xD0L}};
            unsigned l_697 = 1UL;
            short l_712 = 3L;
            unsigned l_757[3][6] = {{3UL, 3UL, 0xA84C218DL, 3UL, 3UL, 0xA84C218DL}, {3UL, 3UL, 0xA84C218DL, 3UL, 3UL, 0xA84C218DL}, {3UL, 3UL, 0xA84C218DL, 3UL, 3UL, 0xA84C218DL}};
            short l_762 = 0xB3AFL;
            int *l_771[6][2] = {{&g_123, (void*)0}, {&g_123, (void*)0}, {&g_123, (void*)0}, {&g_123, (void*)0}, {&g_123, (void*)0}, {&g_123, (void*)0}};
            unsigned short **l_773[8];
            short *l_788[6][2][4] = {{{(void*)0, (void*)0, &l_17, &l_676}, {(void*)0, (void*)0, &l_17, &l_676}}, {{(void*)0, (void*)0, &l_17, &l_676}, {(void*)0, (void*)0, &l_17, &l_676}}, {{(void*)0, (void*)0, &l_17, &l_676}, {(void*)0, (void*)0, &l_17, &l_676}}, {{(void*)0, (void*)0, &l_17, &l_676}, {(void*)0, (void*)0, &l_17, &l_676}}, {{(void*)0, (void*)0, &l_17, &l_676}, {(void*)0, (void*)0, &l_17, &l_676}}, {{(void*)0, (void*)0, &l_17, &l_676}, {(void*)0, (void*)0, &l_17, &l_676}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_773[i] = &l_703[6];
            for (l_666 = (-25); (l_666 > 2); l_666 = safe_add_func_uint8_t_u_u(l_666, 8))
            {
                (*g_197) = (safe_lshift_func_int8_t_s_s(l_689[2][1], 0));
                return g_664;
            }
            if ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s(l_696, (*g_210))) || func_10(((*g_197) = (-1L)), l_666, g_169[5], l_689[2][1])), l_697)), 4)))
            {
                unsigned short **l_700 = (void*)0;
                unsigned short **l_701 = &l_665;
                unsigned short l_713[7] = {0x1A31L, 0x1A31L, 0x9C3FL, 0x1A31L, 0x1A31L, 0x9C3FL, 0x1A31L};
                int *l_714 = &l_684;
                int **l_715[2][5][1] = {{{&g_318}, {&g_318}, {&g_318}, {&g_318}, {&g_318}}, {{&g_318}, {&g_318}, {&g_318}, {&g_318}, {&g_318}}};
                int i, j, k;
                g_318 = func_56((safe_mod_func_int32_t_s_s(((((*l_701) = &g_82[2]) == (l_703[8] = l_702)) ^ (safe_add_func_int32_t_s_s(1L, (l_46 != (safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((g_226[5][1][3] > (l_697 >= ((!g_425[0]) == (safe_rshift_func_uint16_t_u_s((0xF0F5L == l_712), 2))))), l_676)) == l_341) >= l_713[1]), 9)))))), 0x931C275EL)), l_714, &g_49[1][7]);

                ;
                ;
                g_126[2][3][1] = (g_562 = &l_684);


                ;
                for (g_279 = 16; (g_279 == 27); ++g_279)
                {
                    unsigned char l_720 = 6UL;
                    for (l_712 = 0; (l_712 <= 22); l_712 = safe_add_func_int8_t_s_s(l_712, 8))
                    {
                        unsigned char l_726 = 1UL;
                        short *l_732 = (void*)0;
                        short *l_733 = &g_543;
                        (*g_318) = ((g_255[1] ^ g_193[1][0]) && ((l_720 > (safe_add_func_int16_t_s_s(((*l_733) = ((safe_sub_func_uint16_t_u_u(g_203, ((((safe_unary_minus_func_int8_t_s(g_169[5])) <= l_726) > (safe_lshift_func_int8_t_s_s(g_276, 3))) && ((safe_add_func_uint8_t_u_u(l_731[7][2][1], ((void*)0 != &g_195))) > l_696)))) ^ 0x207EL)), g_316[3]))) <= 0x6EL));
                    }
                    if (l_712)
                        break;
                    if ((*g_562))
                    {
                        int *l_735[6][3] = {{&l_320, &l_320, &g_49[0][5]}, {&l_320, &l_320, &g_49[0][5]}, {&l_320, &l_320, &g_49[0][5]}, {&l_320, &l_320, &g_49[0][5]}, {&l_320, &l_320, &g_49[0][5]}, {&l_320, &l_320, &g_49[0][5]}};
                        int i, j;
                        l_735[1][0] = g_734;


                        if ((*g_210))
                            continue;
                        g_318 = func_56(g_255[1], func_56((((*l_665) = (((*l_668) = func_20(l_696, (safe_add_func_int8_t_s_s(0xB8L, 255UL)), (*l_714), l_689[2][0])) && (g_279 <= (safe_mod_func_int16_t_s_s(l_731[7][2][1], 0x3E49L))))) & (-1L)), &g_123, &l_684), &g_123);

                        ;
                        (*g_734) = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x4632L, ((*l_714) & l_746[0]))), func_37(g_389, ((*g_562) && ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(247UL, 1)), ((g_82[2] & (((safe_sub_func_uint8_t_u_u(func_20(func_37((l_320 = l_720), (((((&g_178 != (void*)0) != 0xC287L) < (*l_714)) >= l_697) && 1L), l_757[0][0], (*g_734)), l_720, l_720, l_689[2][1]), g_226[5][1][3])) | (*g_562)) < (-4L))) == g_316[7]))) <= l_689[6][0]), l_684)) != l_689[2][1])), l_684, l_666))), l_720));
                    }
                    else
                    {
                        g_197 = g_758;
                        if ((*g_197))
                            continue;
                        if ((*g_734))
                            break;
                        (*g_734) = (*l_714);
                    }
                }
                g_758 = &g_123;

                ;
            }
            else
            {
                unsigned char l_761 = 253UL;
                int l_769 = 0L;
                int *l_772 = &l_731[3][5][3];
                int *l_776[4][6] = {{(void*)0, (void*)0, &l_769, &l_769, &l_769, &l_769}, {(void*)0, (void*)0, &l_769, &l_769, &l_769, &l_769}, {(void*)0, (void*)0, &l_769, &l_769, &l_769, &l_769}, {(void*)0, (void*)0, &l_769, &l_769, &l_769, &l_769}};
                int i, j;
                for (l_676 = 0; (l_676 <= 9); l_676 += 1)
                {
                    short l_765 = (-1L);
                    short *l_770 = &g_183;
                    int **l_775[7][1] = {{&g_268}, {&g_268}, {&g_268}, {&g_268}, {&g_268}, {&g_268}, {&g_268}};
                    int *l_779[4][2][9] = {{{&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}, {&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}}, {{&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}, {&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}}, {{&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}, {&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}}, {{&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}, {&g_276, &g_276, &l_769, &g_269, (void*)0, (void*)0, &g_276, &g_276, (void*)0}}};
                    int **l_780 = &l_771[4][1];
                    int i, j, k;
                    g_197 = func_56(g_193[1][0], func_56(((safe_lshift_func_uint16_t_u_u((~l_761), (l_762 < (((((*l_770) = ((safe_rshift_func_int8_t_s_s(l_765, (safe_add_func_uint8_t_u_u((func_25(((void*)0 == &g_268), ((g_768 = &g_255[6]) == &g_255[6]), g_389, g_226[3][3][1]) >= (*g_734)), l_769)))) && 0xF663CA9AL)) < l_761) != l_697) >= l_689[3][1])))) > l_689[4][1]), &l_731[1][5][3], l_771[4][1]), l_772);

                    ;
                    for (l_765 = 0; (l_765 <= 5); l_765 += 1)
                    {
                        unsigned short ***l_774 = &g_265;
                        l_731[7][2][1] = (-9L);
                        (*l_774) = l_773[6];

                        ;
                    }
                    (*l_772) = (func_42(l_46, (((l_776[3][0] = func_56((*l_772), l_772, l_772)) == (l_779[2][0][5] = func_56((g_316[l_676] = ((safe_lshift_func_int16_t_s_s(l_731[7][2][1], 0)) != (*l_772))), &l_731[6][4][3], &l_731[7][2][1]))) < 0xDC02L), l_666) < l_731[5][6][1]);


                    (*l_780) = func_56((*l_772), &l_684, ((*l_780) = &l_684));
                }

                ;
                ;


            }


            ;
            ;
            ;
            ;
            ;

            (*g_197) = ((safe_sub_func_uint16_t_u_u(0x9C02L, l_320)) >= (safe_sub_func_int16_t_s_s((g_183 = (g_543 = (((0xAC03L != ((safe_sub_func_uint16_t_u_u((l_787 <= (9UL >= (&g_768 == (void*)0))), g_226[4][1][1])) > (l_341 && 4294967295UL))) != l_341) && (*g_768)))), l_731[7][2][1])));
        }
        else
        {
            int **l_789 = (void*)0;
            int **l_790 = &g_734;
            (*l_790) = &l_731[1][5][3];

            ;
            l_731[7][2][1] = 0x6361CC89L;
            (**l_790) = (**l_790);
        }


        ;
        ;
        ;
        ;
        ;
        ;
        (*l_792) = func_56(((*g_768) = l_746[1]), (l_791 = &l_731[7][2][1]), &g_123);

        ;
        ;
        (*l_791) = (*l_791);
    }


    ;
    ;
    ;
    ;
    ;
    ;
    ;

    ;
    ;
    return (*g_768);




}







static unsigned short func_2(unsigned char p_3)
{
    unsigned ***l_669 = (void*)0;
    int l_670[2][8] = {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}};
    int i, j;
    (*g_210) = ((l_669 != l_669) >= (((void*)0 != (*g_178)) ^ g_316[2]));
    return l_670[1][2];
}







static unsigned char func_6(char p_7, unsigned char p_8, short p_9)
{
    int *l_352 = (void*)0;
    int **l_353 = &g_126[6][1][3];
    unsigned **l_356 = &g_179;
    int ***l_357[4][10] = {{(void*)0, &g_71, (void*)0, &g_71, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_71}, {(void*)0, &g_71, (void*)0, &g_71, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_71}, {(void*)0, &g_71, (void*)0, &g_71, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_71}, {(void*)0, &g_71, (void*)0, &g_71, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_71}};
    char l_435 = 0x9DL;
    unsigned l_446 = 0UL;
    unsigned l_462 = 0xFC6F4C7AL;
    unsigned short *l_470 = &g_80;
    unsigned short **l_469[10][9][2] = {{{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}, {{(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}, {(void*)0, &l_470}}};
    unsigned char *l_509 = &g_226[5][1][3];
    int *l_519 = &g_49[0][0];
    unsigned l_608 = 0x27450CD9L;
    int i, j, k;
    (*l_353) = l_352;
    for (g_322 = 0; (g_322 == 26); g_322 = safe_add_func_uint8_t_u_u(g_322, 8))
    {
        unsigned l_358 = 0x1D498FD5L;
        (*g_197) = func_37((((l_356 == (void*)0) == (l_357[1][5] == &g_71)) < 0x65246299L), p_9, l_358, ((*g_210) = 3L));
        return p_7;
    }
    if ((safe_lshift_func_uint16_t_u_s(0xF8DFL, 6)))
    {
        unsigned short l_361 = 0xAD5AL;
        int *l_383 = &g_123;
        if (l_361)
        {
            unsigned l_364 = 1UL;
            int *l_384 = (void*)0;
            (*l_353) = &g_49[0][5];
            for (g_36 = (-29); (g_36 != 18); ++g_36)
            {
                unsigned short l_382 = 0xBA8BL;
                int *l_385 = &g_123;
                short **l_412[4] = {&g_337, &g_337, &g_337, &g_337};
                short ***l_411 = &l_412[2];
                int l_415 = 1L;
                short l_430 = 0x8CAAL;
                int i;
                (*g_197) = l_364;
                for (g_269 = 0; (g_269 >= (-2)); g_269--)
                {
                    unsigned char l_367 = 3UL;
                    int ***l_393 = &g_71;
                    int *l_397[10] = {(void*)0, &g_123, &g_49[0][6], &g_49[0][6], &g_123, (void*)0, &g_123, &g_49[0][6], &g_49[0][6], &g_123};
                    int i;
                    (*l_353) = (void*)0;
                    if (l_367)
                        break;
                    for (l_367 = 0; (l_367 <= 27); l_367++)
                    {
                        char *l_386 = &g_255[6];
                        char *l_387 = &g_193[6][0];
                        char *l_388 = &g_389;
                        unsigned short *l_390 = &g_80;
                        unsigned *l_394 = &g_95;
                        (*g_197) = (((*l_390) = (((safe_mod_func_int16_t_s_s(p_8, (safe_lshift_func_uint8_t_u_u(g_316[7], (safe_add_func_int16_t_s_s(((*g_337) = 0x3CA7L), ((((*l_388) = ((*l_387) = ((*l_386) = (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_8, g_316[8])) > func_67(func_56(p_9, func_56(l_382, func_56(l_367, l_383, l_384), (*l_353)), l_385), p_7)), p_7)) || p_7), 5))))) < p_9) < p_7))))))) || 0x258EL) ^ 0UL)) | 65535UL);
                        l_385 = func_56(p_7, func_56(g_276, l_384, &g_49[0][5]), l_385);

                        ;
                        g_126[5][2][3] = func_56((safe_rshift_func_int16_t_s_s((((*l_394) = (p_9 > (l_393 != &g_71))) >= func_25(g_226[5][1][3], p_9, (*l_383), (safe_sub_func_int16_t_s_s((-4L), (+p_7))))), p_9)), l_397[3], l_383);
                    }
                    (*g_210) = p_8;
                }

                ;
                if ((1L == (p_9 ^ (safe_lshift_func_uint8_t_u_u(((*l_385) != (*l_385)), 4)))))
                {
                    int *l_401[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_401[i] = (void*)0;
                    if ((*l_383))
                    {
                        int l_400 = (-5L);
                        if (l_400)
                            break;
                        g_197 = ((*l_353) = (l_401[1] = func_56((*l_383), l_383, func_56(g_316[7], l_385, l_383))));


                    }
                    else
                    {
                        char *l_404 = &g_255[6];
                        char **l_403 = &l_404;
                        char ***l_402 = &l_403;
                        (*l_402) = (void*)0;

                        ;
                    }


                    return g_255[1];
                }
                else
                {
                    short ***l_413 = &l_412[2];
                    char *l_414[1];
                    int l_418 = 1L;
                    unsigned char *l_419 = (void*)0;
                    unsigned char *l_420 = (void*)0;
                    unsigned char *l_421 = &g_279;
                    unsigned char *l_424 = &g_425[2];
                    unsigned *l_426 = &g_195;
                    int **l_441 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_414[i] = &g_193[1][0];
                    (*l_385) = func_25(((*l_426) = (((safe_lshift_func_int8_t_s_s(((((*l_424) = (p_7 && (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((l_411 != l_413) < (l_415 = (-1L))), (safe_rshift_func_uint8_t_u_s(p_8, (*l_383))))), ((p_8 || ((*l_421) = (g_226[5][1][3] = l_418))) > (safe_add_func_uint32_t_u_u(l_418, p_7))))))) >= g_276) ^ p_9), 6)) != 0L) > (-1L))), p_8, l_418, p_7);
                    for (g_389 = 0; (g_389 <= 5); g_389 += 1)
                    {
                        int *l_429 = &g_49[0][4];
                        int i;
                        l_430 = func_10((safe_sub_func_int8_t_s_s(func_42(func_67(l_429, g_169[g_389]), p_8, (*l_385)), g_269)), (((~g_269) != (l_418 = 0x55C419F9L)) || 1L), g_169[g_389], (*g_268));
                    }
                    if ((p_9 >= (p_7 = ((safe_rshift_func_int16_t_s_s(((((*l_383) = func_37((((0x47072663L | p_9) | (p_7 && func_25(p_8, g_389, (l_418 = (func_37(g_183, (safe_add_func_uint8_t_u_u((((*l_383) == (*l_385)) && (*l_385)), p_7)), p_7, (*l_385)) < p_9)), g_226[5][1][3]))) & 4L), g_183, (*g_268), (*l_383))) ^ p_7) || l_435), p_8)) && (*g_337)))))
                    {
                        (*l_353) = l_384;
                        (*g_197) = l_418;
                    }
                    else
                    {
                        unsigned *l_440[2][7][6] = {{{&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}}, {{&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}, {&l_364, (void*)0, &g_95, (void*)0, &l_364, &g_95}}};
                        int l_447 = 0xBE7208F4L;
                        unsigned char **l_450[4][4] = {{&l_421, &l_421, &g_449, &l_421}, {&l_421, &l_421, &g_449, &l_421}, {&l_421, &l_421, &g_449, &l_421}, {&l_421, &l_421, &g_449, &l_421}};
                        int i, j, k;
                        (*l_383) = ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_9 || p_8), (g_226[1][2][3] || (((g_95 = p_9) >= ((l_441 != (void*)0) < (safe_lshift_func_uint8_t_u_u(p_8, 4)))) > ((-5L) < (safe_mod_func_int32_t_s_s(((((*g_210) = (*g_197)) | p_9) ^ 0xF8L), p_9))))))), 0x20L)) && p_9);
                        (*g_210) = p_7;
                        (*l_353) = func_56(l_446, ((*l_353) = &g_123), &g_49[0][5]);
                        (*l_385) = (p_9 != ((6UL | l_447) ^ (func_37((g_255[3] = (*l_385)), (*l_383), ((g_448 == l_450[3][1]) <= ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_418, 0xBFL)), (-1L))) | p_7)), p_7) < 0x486DL)));
                    }
                    if ((*l_385))
                        break;
                }
                (*l_353) = &g_49[1][2];
            }
            (*g_197) = (-1L);
        }
        else
        {
            int *l_455[2];
            int i;
            for (i = 0; i < 2; i++)
                l_455[i] = (void*)0;
            l_455[0] = l_383;


            (*l_353) = &g_123;
        }
        for (g_36 = (-13); (g_36 >= 28); g_36++)
        {
            char l_460 = 0x47L;
            int *l_461[10] = {(void*)0, (void*)0, &g_49[0][3], (void*)0, (void*)0, &g_49[0][3], (void*)0, (void*)0, &g_49[0][3], (void*)0};
            char l_471 = 0L;
            char *l_472 = &g_255[6];
            int i;
            l_461[5] = func_56((*l_383), func_56((safe_sub_func_int16_t_s_s(l_460, (*g_337))), l_461[0], l_383), &g_49[0][5]);
            if (l_462)
                break;
            (*l_383) = (((*l_472) = ((safe_sub_func_int8_t_s_s(0xE2L, (safe_sub_func_int16_t_s_s(0x3DD0L, ((*g_337) = p_8))))) && ((safe_rshift_func_uint8_t_u_s(func_25(p_7, (~((void*)0 != &l_460)), func_42((((*l_383) ^ 0UL) > (((void*)0 != l_469[0][8][0]) & p_9)), p_7, l_471), p_7), 7)) ^ 0x5B76E5E0L))) == p_8);
        }
        (*g_210) = p_7;
    }
    else
    {
        short l_481[4][5][4] = {{{0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}}, {{0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}}, {{0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}}, {{0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}, {0x1D5FL, 0x9837L, 0x0729L, 0x1163L}}};
        int *l_486 = &g_49[1][3];
        unsigned **l_520 = (void*)0;
        int **l_539 = &g_210;
        int l_548 = (-1L);
        short *l_622 = &l_481[1][0][0];
        unsigned short *l_643 = &g_82[2];
        unsigned short *l_644 = &g_322;
        short l_648 = 0L;
        int l_651 = 0x327D160AL;
        int i, j, k;
        for (g_276 = 0; (g_276 > (-6)); g_276 = safe_sub_func_int32_t_s_s(g_276, 6))
        {
            unsigned char *l_479 = &g_279;
            unsigned char *l_480 = &g_226[4][2][3];
            int l_484 = 1L;
            char *l_485 = &g_316[7];
            int *l_492 = &l_484;
            int l_510 = 0xCA3D6DEAL;
            (*l_353) = (l_486 = func_56(((*l_485) = (safe_lshift_func_uint8_t_u_u((0x9804L >= (safe_mod_func_int32_t_s_s((((&p_8 == ((*g_448) = l_479)) != ((*l_480) = ((*l_479) = 0x62L))) < (1L > func_20(l_481[1][4][0], p_7, (1L | ((safe_mod_func_int32_t_s_s(((&g_179 != l_356) | 4294967286UL), l_484)) <= 4294967289UL)), p_7))), l_481[0][3][2]))), 4))), &g_123, &g_123));

            ;
            for (l_435 = 6; (l_435 <= (-17)); l_435--)
            {
                int *l_491 = &g_49[0][5];
                int l_495 = 0xB62D4E12L;
                unsigned short ***l_502 = (void*)0;
                for (g_389 = 10; (g_389 <= 4); g_389 = safe_sub_func_uint8_t_u_u(g_389, 3))
                {
                    unsigned l_496 = 0x8DAB23A5L;
                    int l_497[6];
                    unsigned *l_498[3];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_497[i] = 0x3B8312E7L;
                    for (i = 0; i < 3; i++)
                        l_498[i] = (void*)0;
                    l_492 = (g_318 = l_491);

                    ;
                    ;
                    l_497[5] = (safe_lshift_func_uint16_t_u_s((((0x03L == l_495) <= (*l_486)) == (-4L)), ((l_496 = (*g_197)) > (g_36 = ((*g_337) > l_497[5])))));
                    if (p_8)
                        break;
                }
                (*l_353) = (void*)0;
                for (l_495 = 23; (l_495 > (-10)); l_495--)
                {
                    short l_512 = 0x6942L;
                    if ((&g_71 != (void*)0))
                    {
                        unsigned short ***l_501 = &g_265;
                        int l_507 = 0xDD8622C2L;
                        int l_508 = 0xD420F1EDL;
                        int *l_511 = &g_123;
                        if (p_9)
                            break;
                        (*l_353) = func_56(((l_501 != l_502) < (safe_lshift_func_int16_t_s_u((p_7 != (*l_486)), ((*l_491) < func_25((safe_lshift_func_uint8_t_u_s(l_507, l_508)), (((void*)0 == l_509) <= (*l_486)), l_507, l_510))))), l_511, &l_484);
                        (*l_492) = 0L;
                    }
                    else
                    {
                        l_512 = p_9;
                        return (*g_449);
                    }
                }
            }

            ;
        }

        ;
        if ((safe_sub_func_int16_t_s_s(((void*)0 == &g_318), 0UL)))
        {
            unsigned short l_515 = 7UL;
            int **l_516 = &g_268;
            unsigned ***l_521 = &l_356;
            (*g_197) = (p_9 != ((*l_509) = ((+(!(((*l_516) = func_56(l_515, l_486, &g_123)) != l_486))) != (((safe_rshift_func_uint16_t_u_s((g_36 | 0UL), 11)) ^ p_7) ^ 0UL))));

            ;
            (*l_353) = l_519;
            (*l_521) = l_520;

            ;
        }
        else
        {
            unsigned l_522 = 1UL;
            int *l_536 = &g_123;
            unsigned l_587 = 0UL;
            char **l_614 = (void*)0;
            char ***l_613 = &l_614;
            int l_635[5] = {0xBC3979BAL, 0x64DDCF5EL, 0xBC3979BAL, 0x64DDCF5EL, 0xBC3979BAL};
            int i;
            if (((*l_486) || l_522))
            {
                unsigned *l_526 = &g_169[5];
                int l_530 = 0xA31B7CE9L;
                int **l_540 = (void*)0;
                for (p_8 = 0; (p_8 <= 3); p_8 += 1)
                {
                    unsigned l_529[1];
                    short *l_533 = &l_481[1][4][0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_529[i] = 0UL;
                    (*g_210) = l_522;
                    for (g_203 = 0; (g_203 <= 2); g_203 += 1)
                    {
                        unsigned char l_523 = 0x4EL;
                        l_530 = (l_523 && ((p_9 & 0xA3F1134EL) == (((safe_sub_func_uint32_t_u_u(func_67(&g_49[1][4], p_7), func_25(((void*)0 == l_526), (safe_rshift_func_uint16_t_u_u(((void*)0 != &g_316[8]), l_522)), (*l_486), p_7))) > 1UL) == l_529[0])));
                        return p_9;
                    }
                    (*l_486) = (safe_mod_func_int16_t_s_s(((*l_533) = (l_529[0] || ((*g_337) = p_9))), (*l_486)));
                    for (l_446 = 0; (l_446 <= 3); l_446 += 1)
                    {
                        char l_541 = 0L;
                        char *l_542[6][1];
                        unsigned l_544 = 18446744073709551615UL;
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_542[i][j] = &g_255[6];
                        }
                        if ((*g_210))
                            break;
                        (*g_197) = (((safe_rshift_func_uint8_t_u_s(((*l_509) = 0x9EL), 7)) > func_67(l_536, l_530)) | (((func_25((0x86C57F8FL != func_25(g_183, (p_9 & (func_25((l_529[0] && (g_543 = (safe_lshift_func_int16_t_s_s(((l_539 = (void*)0) != l_540), l_541)))), l_544, p_7, l_541) & 4L)), (*l_519), p_9)), p_9, l_530, g_36) != 3L) ^ (*l_486)) ^ g_169[5]));
                        if (l_529[0])
                            continue;
                        (*g_210) = p_7;
                    }
                }

                ;
            }
            else
            {
                (*l_536) = (*l_536);
            }

            ;
            if ((*g_197))
            {
                int *l_545[8][5][4] = {{{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}, {{(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}, {(void*)0, &g_49[1][3], &g_123, &g_123}}};
                char *l_549 = &g_255[1];
                unsigned l_551 = 0UL;
                int ***l_557 = &l_539;
                short **l_558[10] = {&g_337, &g_337, &g_337, &g_337, &g_337, &g_337, &g_337, &g_337, &g_337, &g_337};
                int i, j, k;
                (*l_353) = func_56(p_8, func_56(((*l_549) = p_9), l_536, l_536), l_545[5][4][3]);
                if ((safe_unary_minus_func_uint8_t_u(l_551)))
                {
                    int *l_552[5][2][4] = {{{&g_123, &g_123, &g_49[0][5], &g_123}, {&g_123, &g_123, &g_49[0][5], &g_123}}, {{&g_123, &g_123, &g_49[0][5], &g_123}, {&g_123, &g_123, &g_49[0][5], &g_123}}, {{&g_123, &g_123, &g_49[0][5], &g_123}, {&g_123, &g_123, &g_49[0][5], &g_123}}, {{&g_123, &g_123, &g_49[0][5], &g_123}, {&g_123, &g_123, &g_49[0][5], &g_123}}, {{&g_123, &g_123, &g_49[0][5], &g_123}, {&g_123, &g_123, &g_49[0][5], &g_123}}};
                    int ***l_556 = &g_71;
                    int i, j, k;
                    for (g_95 = 0; (g_95 <= 3); g_95 += 1)
                    {
                        short ***l_553 = (void*)0;
                        int l_555 = 0x0DE0DE9FL;
                        g_318 = l_552[2][0][2];

                        ;
                        if (p_7)
                            break;
                        g_554 = &g_337;
                        return l_555;
                    }

                    ;
                    if ((l_556 == l_557))
                    {
                        (*l_353) = l_552[2][0][2];
                    }
                    else
                    {
                        short **l_559 = (void*)0;
                        (*g_210) = ((l_558[9] != l_559) != ((*l_509) = g_169[3]));
                        (*l_353) = &g_49[0][6];
                    }
                }
                else
                {
                    return p_9;
                }

                ;
                for (g_95 = 0; (g_95 <= 2); g_95 += 1)
                {
                    int i;
                    return g_82[g_95];
                }
                for (l_435 = (-19); (l_435 < (-2)); l_435++)
                {
                    (*l_353) = func_56(g_193[1][0], &g_49[1][8], l_536);
                    if ((*g_210))
                        break;
                    return p_8;
                }
            }
            else
            {
                for (p_7 = 1; (p_7 >= 0); p_7 -= 1)
                {
                    if ((*g_210))
                        break;
                    for (l_462 = 0; (l_462 <= 1); l_462 += 1)
                    {
                        (*l_353) = l_536;
                    }
                }
                g_562 = (*l_353);

                ;
                return p_7;
            }

            ;
            if ((4UL ^ (((*g_197) >= ((*l_536) >= (safe_add_func_uint8_t_u_u(255UL, ((p_7 < (*l_536)) ^ ((safe_lshift_func_uint16_t_u_s((*l_536), ((safe_unary_minus_func_int8_t_s(p_9)) | ((**g_554) | (-1L))))) || 0x0FA1FFC2L)))))) <= 0L)))
            {
                unsigned l_572 = 4294967294UL;
                int l_607 = 0x00D6A1A6L;
                short *l_621 = (void*)0;
                int l_626 = 0x4D67D747L;
                unsigned short l_630[8];
                int *l_634[7] = {&g_49[0][2], &g_49[0][2], &g_49[1][6], &g_49[0][2], &g_49[0][2], &g_49[1][6], &g_49[0][2]};
                int i;
                for (i = 0; i < 8; i++)
                    l_630[i] = 1UL;
                (*g_197) = 0L;
                if ((safe_sub_func_int16_t_s_s(l_572, g_279)))
                {
                    unsigned l_578 = 4294967295UL;
                    int *l_593[6] = {&g_123, &g_123, &g_49[0][5], &g_123, &g_123, &g_49[0][5]};
                    int i;
                    for (g_95 = 0; (g_95 <= 3); g_95 += 1)
                    {
                        unsigned l_573 = 18446744073709551609UL;
                        int l_579 = 0x3D1E2D26L;
                        (*l_353) = l_486;
                        l_573 = (-8L);
                        (*l_519) = ((safe_add_func_uint8_t_u_u(func_10(p_9, p_8, g_389, p_8), (1L < (l_579 = ((p_8 >= (((safe_rshift_func_int16_t_s_u((l_578 < p_8), 0)) ^ p_9) >= p_7)) != p_8))))) < 0x43L);
                    }
                    for (g_95 = 0; (g_95 <= 2); g_95 += 1)
                    {
                        int *l_580 = &g_123;
                        int i;
                        if (g_82[g_95])
                            break;
                        (*g_197) = l_572;
                        (*l_353) = l_580;
                    }
                    for (g_195 = 0; (g_195 <= 2); g_195 += 1)
                    {
                        unsigned *l_588 = &l_446;
                        int i;
                        (*g_210) = (safe_sub_func_uint8_t_u_u(((*l_509) = 1UL), (1UL & (g_82[g_195] && (safe_mod_func_uint32_t_u_u(((*l_588) = (safe_add_func_uint32_t_u_u((l_587 = g_276), l_578))), 0x9A4E1EBFL))))));
                        (*l_519) = p_8;
                    }
                    for (g_183 = 3; (g_183 >= 0); g_183 -= 1)
                    {
                        unsigned short l_600 = 65529UL;
                        int i;
                        (*l_519) = (safe_lshift_func_int16_t_s_u(func_67(func_56(((((0x09L != ((safe_add_func_int8_t_s_s(func_67(l_593[1], (safe_rshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s((func_20(g_316[(g_183 + 3)], (safe_sub_func_int16_t_s_s(((*l_536) || func_25((((p_8 & func_25(p_9, l_600, p_8, (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((func_25((*l_536), p_7, p_7, l_607) >= 0x2FL) > p_7) || (-9L)), (*l_519))), 15)), g_543)))) > p_9) >= p_7), p_7, p_8, p_8)), (*l_536))), (*l_536), p_9) != (*l_536)), l_608)) & 1L) ^ 0x0AL), (*l_536)))), p_7)) ^ l_607)) >= p_9) == (*l_536)) ^ p_7), l_593[2], &g_123), p_7), 6));
                    }
                }
                else
                {
                    unsigned l_612 = 0UL;
                    (*l_536) = (((*l_486) = (l_607 > ((g_322 > 8L) ^ (p_9 & (safe_rshift_func_uint16_t_u_s((l_572 && (safe_unary_minus_func_uint16_t_u(g_255[6]))), 1)))))) | (g_36 = func_25((l_612 != (l_613 == (void*)0)), p_8, p_7, p_8)));
                }
                (*g_197) = p_8;
                for (p_9 = 9; (p_9 >= 1); p_9 -= 1)
                {
                    int *l_627 = &g_123;
                    unsigned l_633[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_633[i][j] = 4294967295UL;
                    }
                    for (g_195 = 0; (g_195 <= 2); g_195 += 1)
                    {
                        short *l_623 = &l_481[1][1][0];
                        int i;
                        if (g_425[g_195])
                            break;
                        l_626 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((g_255[6] = (g_316[p_9] = (g_425[g_195] | (safe_add_func_int16_t_s_s(g_316[(g_195 + 7)], ((l_622 = ((*g_554) = l_621)) == l_623)))))), (safe_rshift_func_uint16_t_u_u(g_425[g_195], 10)))), g_425[g_195]));

                        ;
                        ;
                    }
                    if (((*g_197) = ((*l_536) = (g_316[p_9] != (func_67(func_56(p_9, l_627, l_536), ((safe_sub_func_int32_t_s_s((255UL < (p_9 == p_7)), g_49[0][5])) == 65534UL)) || l_630[5])))))
                    {
                        (*l_519) = ((*l_627) = p_8);
                    }
                    else
                    {
                        (*g_197) = (safe_sub_func_int8_t_s_s(l_633[0][4], l_572));
                    }
                    l_634[6] = (void*)0;
                }

                ;
                ;

            }
            else
            {
                unsigned short *l_642[1];
                int l_645 = 0xD96489ABL;
                int l_646[4][2] = {{0x818A63BEL, 1L}, {0x818A63BEL, 1L}, {0x818A63BEL, 1L}, {0x818A63BEL, 1L}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_642[i] = &g_82[2];
                if ((l_635[4] && ((((p_9 <= (((p_8 & func_25(p_9, (g_80 = p_7), (l_645 = ((safe_sub_func_int32_t_s_s(((*g_210) = (safe_lshift_func_uint16_t_u_u(0UL, (safe_add_func_int8_t_s_s((*l_519), ((l_643 = l_642[0]) == (l_644 = l_622))))))), p_9)) & p_8)), p_7)) < p_7) != p_9)) > l_646[3][0]) < l_646[3][0]) && (*g_210))))
                {
                    unsigned char l_647 = 6UL;
                    l_648 = l_647;
                    for (g_276 = (-25); (g_276 <= 3); ++g_276)
                    {
                        (*l_353) = (void*)0;
                    }
                }
                else
                {
                    int *l_652[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_652[i] = &l_645;
                    l_651 = ((*l_536) = ((*l_486) = (l_646[2][1] >= 0x38L)));
                    (*l_353) = func_56(p_9, l_536, (l_652[2] = ((*l_353) = &l_651)));



                    for (p_8 = 0; (p_8 <= 49); p_8 = safe_add_func_int32_t_s_s(p_8, 7))
                    {
                        int *l_655 = &l_646[3][0];
                        (*g_210) = ((void*)0 == g_265);
                        l_655 = (void*)0;

                        ;
                        (*g_210) = (safe_lshift_func_int16_t_s_s(func_20(((*l_486) = l_645), p_7, (safe_sub_func_uint8_t_u_u((((*l_536) < p_8) | 0L), func_25(p_7, g_255[3], p_7, (*l_536)))), (*l_536)), 11));
                    }
                }


                ;
                for (l_587 = 0; (l_587 >= 7); l_587++)
                {
                    if (p_8)
                        break;
                }
                (*g_210) = p_7;
                (*l_353) = (void*)0;
            }


            ;
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
    }


    ;
    ;
    ;
    ;
    ;
    for (g_36 = 0; (g_36 >= 8); ++g_36)
    {
        for (p_9 = 0; p_9 < 7; p_9 += 1)
        {
            g_255[p_9] = 0xE6L;
        }
    }
    return p_8;
}







static char func_10(int p_11, int p_12, char p_13, int p_14)
{
    int *l_344 = &g_49[0][5];
    unsigned short *l_347 = &g_80;
    for (g_276 = 16; (g_276 <= (-12)); --g_276)
    {
        int l_345 = (-9L);
        int **l_346[1][6][3] = {{{&g_210, &l_344, &g_210}, {&g_210, &l_344, &g_210}, {&g_210, &l_344, &g_210}, {&g_210, &l_344, &g_210}, {&g_210, &l_344, &g_210}, {&g_210, &l_344, &g_210}}};
        int i, j, k;
        l_344 = l_344;
        (*g_210) = l_345;
        l_344 = func_56((*l_344), func_56((((65534UL & p_13) == p_11) >= p_13), &p_11, &g_49[0][5]), &g_49[0][5]);
    }
    (*l_344) = (func_25(p_11, ((*l_347) = 8UL), p_11, (*l_344)) < ((!(!(safe_sub_func_int16_t_s_s((+(-1L)), (safe_add_func_uint8_t_u_u(0UL, 0x32L)))))) ^ ((*l_344) == p_12)));
    return p_14;
}







static char func_20(int p_21, int p_22, unsigned short p_23, unsigned short p_24)
{
    unsigned char l_323 = 4UL;
    short *l_327 = &g_183;
    short **l_326 = &l_327;
    unsigned char *l_329 = &g_279;
    unsigned char **l_328 = &l_329;
    unsigned char *l_330[4];
    unsigned char l_331[3];
    int *l_336 = &g_49[0][5];
    int *l_340 = &g_49[0][6];
    int i;
    for (i = 0; i < 4; i++)
        l_330[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_331[i] = 251UL;
    (*g_197) = l_323;
    (*g_197) = (safe_lshift_func_uint8_t_u_u((((l_326 == (void*)0) && 0UL) || (l_331[1] = (((*l_328) = &l_323) == &l_323))), 7));

    ;
    (*l_336) = (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_24 < ((*l_326) != (g_337 = (*l_326)))), (p_21 < (safe_lshift_func_int8_t_s_s(func_67(l_340, (g_195 >= 1UL)), g_195))))), (*l_336)));

    ;
    return (*l_340);
}







static short func_25(unsigned p_26, unsigned short p_27, unsigned p_28, unsigned short p_29)
{
    int **l_321 = &g_126[2][3][1];
    (*l_321) = (void*)0;
    return g_269;
}







static char func_37(char p_38, unsigned char p_39, int p_40, int p_41)
{
    (*g_210) = p_41;
    return g_36;
}







static unsigned short func_42(unsigned p_43, unsigned short p_44, unsigned short p_45)
{
    char l_47 = 0L;
    int l_48[9][3] = {{0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}, {0x02CCA7A2L, 2L, 0x60D4E023L}};
    int *l_134 = (void*)0;
    unsigned l_164[9][4][7] = {{{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}, {{7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}, {7UL, 0UL, 0x7577104EL, 18446744073709551606UL, 0x7577104EL, 0UL, 7UL}}};
    unsigned *l_172 = &g_95;
    unsigned **l_171[7][2][10] = {{{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}, {{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}, {{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}, {{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}, {{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}, {{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}, {{&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}, {&l_172, &l_172, &l_172, &l_172, &l_172, (void*)0, &l_172, &l_172, &l_172, &l_172}}};
    unsigned ***l_170[9] = {(void*)0, &l_171[5][1][3], (void*)0, &l_171[5][1][3], (void*)0, &l_171[5][1][3], (void*)0, &l_171[5][1][3], (void*)0};
    short *l_182 = &g_183;
    short **l_181[1][7] = {{&l_182, &l_182, &l_182, &l_182, &l_182, &l_182, &l_182}};
    unsigned l_198 = 0xF275FD97L;
    unsigned l_208 = 4294967288UL;
    unsigned l_215 = 0x52F117B5L;
    unsigned l_227 = 18446744073709551613UL;
    int *l_285 = &g_49[0][5];
    unsigned l_292 = 4294967292UL;
    int i, j, k;
    l_47 = (0UL >= g_36);
    for (l_47 = 2; (l_47 >= 0); l_47 -= 1)
    {
        int *l_70 = &g_49[0][5];
        unsigned short *l_146 = &g_80;
        int *l_147 = &g_123;
        unsigned *l_163 = &g_36;
        unsigned **l_162 = &l_163;
        int l_173 = 1L;
        int l_192[9][5][4] = {{{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}, {{2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}, {2L, 0xE80119DAL, 0x1C73A809L, 0xC13A696DL}}};
        int ***l_214 = &g_71;
        unsigned l_229 = 0xAEEAECE4L;
        int i, j, k;
        for (p_45 = 0; (p_45 <= 2); p_45 += 1)
        {
            int l_96[10][5] = {{0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}, {0x344E0D2CL, (-1L), (-1L), 0x344E0D2CL, (-6L)}};
            int *l_105[3];
            char l_110 = (-3L);
            unsigned l_120 = 4UL;
            int l_133 = (-1L);
            int **l_136[3][7] = {{(void*)0, (void*)0, &g_126[2][3][1], &g_126[2][3][1], (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_126[2][3][1], &g_126[2][3][1], (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_126[2][3][1], &g_126[2][3][1], (void*)0, (void*)0, (void*)0}};
            int ***l_135 = &l_136[1][0];
            int l_140 = (-1L);
            unsigned *l_142 = &g_36;
            unsigned **l_141[5][2][8] = {{{&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}, {&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}}, {{&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}, {&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}}, {{&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}, {&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}}, {{&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}, {&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}}, {{&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}, {&l_142, (void*)0, (void*)0, (void*)0, (void*)0, &l_142, (void*)0, (void*)0}}};
            unsigned ***l_143 = &l_141[2][1][5];
            short ***l_194 = &l_181[0][0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_105[i] = &g_49[1][1];
            for (p_44 = 0; (p_44 <= 2); p_44 += 1)
            {
                int *l_60 = &l_48[8][2];
                int *l_83 = &g_49[0][5];
                int ***l_90 = &g_71;
                for (p_43 = 0; (p_43 <= 2); p_43 += 1)
                {
                    unsigned short *l_79 = &g_80;
                    unsigned short *l_81[3][1];
                    int *l_93 = &l_48[8][1];
                    unsigned *l_94 = &g_95;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_81[i][j] = &g_82[2];
                    }
                    for (g_49[0][5] = 0; (g_49[0][5] <= 2); g_49[0][5] += 1)
                    {
                        int *l_51 = (void*)0;
                        int **l_50 = &l_51;
                        int i, j;
                        (*l_50) = (void*)0;
                        l_48[(p_43 + 1)][l_47] = (safe_rshift_func_int16_t_s_u(l_48[p_44][p_45], 15));
                        l_48[(p_43 + 6)][l_47] = (safe_rshift_func_uint16_t_u_s((0x456CL ^ g_49[0][5]), 15));
                        (*l_50) = func_56(p_45, l_60, ((*l_50) = &l_48[4][1]));

                        ;
                    }
                    if ((safe_add_func_uint16_t_u_u((g_82[2] = (((+(safe_mod_func_uint16_t_u_u(((*l_79) = ((~func_67(func_56(g_49[1][6], l_60, l_70), p_43)) ^ (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((-5L) < p_44), 8UL)), p_44)))), l_47))) & p_43) >= (*l_70))), g_49[0][5])))
                    {
                        l_70 = l_83;
                        return p_45;
                    }
                    else
                    {
                        (*l_60) = (safe_lshift_func_int16_t_s_s(g_49[0][1], 12));
                    }
                    l_96[4][1] = (safe_sub_func_int32_t_s_s((g_80 >= (safe_mod_func_uint8_t_u_u(((void*)0 != l_90), g_80))), (((*l_83) = (safe_add_func_uint32_t_u_u(((*l_94) = func_67(l_93, p_44)), (p_44 & p_43)))) < (*l_93))));
                    (*l_70) = p_45;
                }
                (*l_83) = ((safe_sub_func_int32_t_s_s((((!(2L | (((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(253UL, g_49[1][6])), (safe_sub_func_int8_t_s_s(g_82[1], g_82[2])))) <= (l_48[7][0] = func_67(l_105[2], ((safe_add_func_uint8_t_u_u(0x7FL, ((safe_lshift_func_int16_t_s_s(p_45, g_36)) >= l_110))) & p_45)))) == 1L))) & l_47) | p_45), p_43)) != p_43);
                if (((safe_add_func_uint8_t_u_u(func_67(&g_49[1][2], ((safe_sub_func_uint8_t_u_u(((*l_60) <= 0x99958B7CL), (g_123 = (((safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s(g_80, (safe_sub_func_int32_t_s_s((func_67(&l_48[6][1], l_120) > ((*l_83) || (safe_add_func_int32_t_s_s(((0xF23B65C4L <= p_45) ^ p_44), (-9L))))), 0UL)))))) == (*l_60)) >= g_95)))) | l_47)), 0x6AL)) && 0x7A30E593L))
                {
                    int **l_124 = (void*)0;
                    int **l_125[10] = {&l_83, (void*)0, &l_70, &l_70, (void*)0, &l_83, (void*)0, &l_70, &l_70, (void*)0};
                    int *l_137 = &l_96[4][1];
                    unsigned *l_138 = &g_95;
                    char *l_139 = &l_110;
                    int i;
                    g_126[2][3][1] = &g_49[1][6];
                    (*l_70) = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0xEAL, func_67(func_56(((*l_139) = (((((*l_70) = (((safe_add_func_uint32_t_u_u((g_49[0][5] ^ (g_49[0][7] > l_133)), ((*l_138) = ((p_43 | 9L) > p_44)))) & 0UL) != g_80)) | g_82[2]) & g_82[2]) <= 65530UL)), &g_123, l_70), g_80))), l_140));
                }
                else
                {
                    if (p_43)
                        break;
                }
                (*l_60) = p_43;
            }
            (*l_143) = l_141[4][0][6];
        }
        (*l_70) = 0x6F0D94B2L;
        if (l_198)
            break;
        for (g_80 = 0; (g_80 <= 2); g_80 += 1)
        {
            int **l_232 = &g_197;
            int i, j;
            l_48[(g_80 + 5)][g_80] = (safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((g_203 = func_67(&l_48[1][0], ((l_48[(l_47 + 5)][g_80] < l_48[l_47][l_47]) | g_195))) != ((8UL & (safe_sub_func_int16_t_s_s(g_193[1][0], ((safe_mod_func_int16_t_s_s(((p_43 = (l_48[(l_47 + 5)][g_80] || (((l_48[(l_47 + 5)][g_80] < p_43) < p_44) < 9UL))) <= l_208), p_44)) & p_44)))) < 1UL)), p_45)) || 6L) || (*l_147)), g_82[2]));
            for (g_195 = 0; (g_195 <= 3); g_195 += 1)
            {
                int *l_209[7][7][5] = {{{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}, {{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}, {{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}, {{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}, {{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}, {{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}, {{(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}, {(void*)0, &g_49[0][3], (void*)0, &l_48[(g_80 + 5)][g_80], &g_123}}};
                int **l_211[4][8][2] = {{{&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}}, {{&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}}, {{&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}}, {{&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}, {&l_209[2][4][3], &l_134}}};
                int i, j, k;
                g_126[2][3][1] = (g_197 = (g_210 = func_56(l_192[(g_195 + 5)][(g_80 + 1)][g_195], &l_48[l_47][l_47], l_209[3][4][0])));
                if ((safe_sub_func_uint32_t_u_u(p_43, (*g_197))))
                {
                    (*l_147) = 0x96F3E45BL;
                    (*l_70) = p_45;
                }
                else
                {
                    int *l_216[10][1] = {{&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}, {&g_49[1][2]}};
                    char *l_217 = &g_193[1][0];
                    unsigned short *l_218 = &g_82[2];
                    unsigned char *l_225[3][9] = {{(void*)0, &g_226[5][1][3], (void*)0, (void*)0, &g_226[5][1][3], &g_226[5][3][2], (void*)0, (void*)0, &g_226[5][3][2]}, {(void*)0, &g_226[5][1][3], (void*)0, (void*)0, &g_226[5][1][3], &g_226[5][3][2], (void*)0, (void*)0, &g_226[5][3][2]}, {(void*)0, &g_226[5][1][3], (void*)0, (void*)0, &g_226[5][1][3], &g_226[5][3][2], (void*)0, (void*)0, &g_226[5][3][2]}};
                    int i, j;
                    l_134 = func_56(((*l_217) = ((l_214 != &g_71) < func_67(func_56(p_43, func_56((~(p_45 >= l_215)), &l_173, &g_49[1][6]), l_216[3][0]), p_45))), &l_48[l_47][l_47], l_216[1][0]);

                    ;
                    if ((*g_210))
                        continue;
                    (*g_197) = (*l_134);
                    if (((((*l_218) = p_44) || g_203) & ((((((void*)0 == &g_80) > (*l_134)) >= (safe_sub_func_uint8_t_u_u((0x0D12L > (((*l_147) && (safe_lshift_func_uint8_t_u_s((g_226[1][1][1] = (l_48[l_47][l_47] = (safe_lshift_func_int16_t_s_s(((0x97L && g_49[0][5]) == p_43), g_95)))), 7))) && 0x12D52900L)), 0L))) && l_227) != (*l_134))))
                    {
                        (*l_147) = ((*g_210) = (+(*l_134)));
                    }
                    else
                    {
                        unsigned short **l_228 = &l_218;
                        (*g_210) = (&p_44 == ((*l_228) = &p_45));

                        ;
                        if (p_43)
                            break;
                        return (*l_147);
                    }
                }
                for (l_173 = 1; (l_173 >= 0); l_173 -= 1)
                {
                    int i, j, k;
                    l_48[(g_80 + 5)][g_80] = l_164[(g_80 + 2)][l_47][(l_173 + 4)];
                }
                l_229 = ((*l_70) = (*g_210));
            }
        }
        for (g_276 = 0; (g_276 <= 2); g_276 += 1)
        {
            int *l_291[6];
            unsigned char l_308 = 1UL;
            int *l_309[3];
            int i;
            for (i = 0; i < 6; i++)
                l_291[i] = &g_49[0][2];
            for (i = 0; i < 3; i++)
                l_309[i] = &g_123;
            for (p_45 = 0; (p_45 <= 2); p_45 += 1)
            {
                int *l_287[5][8][4] = {{{&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}}, {{&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}}, {{&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}}, {{&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}}, {{&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}, {&l_173, &g_49[0][5], (void*)0, &l_173}}};
                short **l_294 = &l_182;
                int i, j, k;
                for (g_95 = 0; (g_95 <= 3); g_95 += 1)
                {
                    int i, j, k;
                    l_48[(g_276 + 2)][g_276] = (func_67(func_56(g_82[l_47], l_287[4][3][2], func_56(((safe_mod_func_int8_t_s_s(0x94L, g_82[l_47])) || (safe_unary_minus_func_uint16_t_u(l_164[(g_95 + 3)][p_45][(g_276 + 3)]))), l_291[0], l_287[4][3][2])), l_292) != 7UL);
                }
                for (g_203 = 0; (g_203 <= 3); g_203 += 1)
                {
                    short **l_293 = &l_182;
                    unsigned char *l_301 = &g_279;
                    int l_307 = (-3L);
                    int **l_317[5][1][7] = {{{(void*)0, &g_126[1][0][2], &l_147, &l_285, &g_126[1][0][2], &l_285, &g_126[1][0][2]}}, {{(void*)0, &g_126[1][0][2], &l_147, &l_285, &g_126[1][0][2], &l_285, &g_126[1][0][2]}}, {{(void*)0, &g_126[1][0][2], &l_147, &l_285, &g_126[1][0][2], &l_285, &g_126[1][0][2]}}, {{(void*)0, &g_126[1][0][2], &l_147, &l_285, &g_126[1][0][2], &l_285, &g_126[1][0][2]}}, {{(void*)0, &g_126[1][0][2], &l_147, &l_285, &g_126[1][0][2], &l_285, &g_126[1][0][2]}}};
                    int i, j, k;
                    l_48[(g_203 + 2)][l_47] = ((l_293 == l_294) & l_48[(g_276 + 1)][l_47]);
                    if ((((l_48[(g_276 + 1)][g_276] = ((safe_add_func_uint8_t_u_u(((*l_301) = (safe_lshift_func_uint16_t_u_u(l_48[(g_203 + 2)][l_47], 7))), (safe_lshift_func_uint8_t_u_u(p_45, 3)))) == ((*l_70) <= ((safe_mod_func_uint16_t_u_u(0x0339L, (safe_unary_minus_func_int32_t_s((l_308 = (l_307 = (*g_210))))))) < (p_43 ^ func_67(l_291[2], ((&l_181[0][4] == (void*)0) != p_45))))))) >= 7UL) | 1L))
                    {
                        int **l_310 = &g_126[2][3][1];
                        int i, j, k;
                        g_126[p_45][g_203][(g_276 + 1)] = l_309[2];
                        (*l_310) = (void*)0;
                        return p_44;
                    }
                    else
                    {
                        char *l_313 = &g_255[6];
                        char *l_314 = &g_193[1][0];
                        char *l_315 = &g_316[7];
                        (*l_147) = ((g_49[0][4] | (safe_add_func_int8_t_s_s(p_45, (g_269 == ((*l_315) = ((*l_314) = ((*l_313) = p_45))))))) & p_44);
                    }
                    g_318 = func_56((*l_285), func_56(g_316[5], &l_48[4][0], &l_48[(g_276 + 1)][g_276]), func_56(g_195, &l_48[(g_276 + 1)][g_276], &l_48[(g_276 + 1)][l_47]));

                    ;
                }
            }
        }
    }

    ;
    (*l_285) = (*g_210);
    return p_45;
}







static int * func_56(char p_57, int * p_58, int * p_59)
{
    int *l_62 = &g_49[0][5];
    int **l_61 = &l_62;
    (*l_61) = &g_49[0][5];
    return &g_49[0][6];


}







static unsigned char func_67(int * p_68, int p_69)
{
    int ***l_72 = &g_71;
    int *l_73[4];
    int **l_74 = &l_73[1];
    int i;
    for (i = 0; i < 4; i++)
        l_73[i] = &g_49[0][5];
    (*l_72) = g_71;
    (*l_74) = l_73[0];
    if ((*p_68))
    {
        (*l_74) = p_68;


        return g_49[0][6];
    }
    else
    {
        (*l_74) = (*l_74);
    }
    (*l_74) = &g_49[1][2];
    return p_69;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_193[i][j], "g_193[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_226[i][j][k], "g_226[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_255[i], "g_255[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_316[i], "g_316[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_425[i], "g_425[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
