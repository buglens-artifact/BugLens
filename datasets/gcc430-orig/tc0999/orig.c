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



static int g_9 = 0xA924C000L;
static int *g_8[2][10][8] = {{{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9}},{{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9}}};
static unsigned g_18 = 4294967288UL;
static unsigned char g_47 = 0x93L;
static unsigned g_54 = 0x3BB1D441L;
static unsigned short g_57 = 0x1263L;
static unsigned long long g_59 = 3UL;
static int g_78 = (-9L);
static int *g_100 = &g_78;
static unsigned long long g_114 = 18446744073709551612UL;
static long long g_116 = 0x28AE825D0D300741LL;
static int g_118 = (-1L);
static volatile unsigned long long g_140 = 18446744073709551609UL;
static volatile unsigned long long *g_139 = &g_140;
static volatile unsigned long long **g_138 = &g_139;
static unsigned long long g_165 = 0xB1117FE557E69CC3LL;
static char g_169 = (-1L);
static int g_170[8][5][1] = {{{0L},{0xD6C77FDBL},{0x7DC2514DL},{0xC44576A3L},{(-10L)}},{{0xA6F5D40AL},{(-4L)},{(-7L)},{(-4L)},{0xA6F5D40AL}},{{(-10L)},{0xC44576A3L},{0x7DC2514DL},{0xD6C77FDBL},{0L}},{{0xA41B15C3L},{0xA41B15C3L},{0L},{0xD6C77FDBL},{0x7DC2514DL}},{{0xC44576A3L},{(-10L)},{0xA6F5D40AL},{(-4L)},{(-7L)}},{{(-4L)},{0xA6F5D40AL},{(-10L)},{0xC44576A3L},{0x7DC2514DL}},{{0xD6C77FDBL},{0L},{0xA41B15C3L},{0xA41B15C3L},{0L}},{{0xD6C77FDBL},{0x7DC2514DL},{0xC44576A3L},{(-10L)},{0xA6F5D40AL}}};
static int g_172 = 0x9FD6B0DCL;
static int g_243 = 4L;
static unsigned long long **g_285 = (void*)0;
static unsigned long long *g_287 = &g_165;
static unsigned long long **g_286 = &g_287;
static long long g_298 = 0L;
static unsigned char g_322 = 0xF0L;
static unsigned long long ***g_334 = &g_285;
static volatile int g_360 = (-6L);
static volatile int *g_359 = &g_360;
static unsigned char *g_393 = &g_47;
static unsigned char **g_392 = &g_393;
static char g_394 = (-1L);
static int *g_408 = &g_172;
static int **g_407[3] = {&g_408,&g_408,&g_408};
static unsigned short g_423 = 0x8582L;
static int **g_467 = &g_100;
static int g_472 = 0xC5F02047L;
static short g_520 = 6L;
static unsigned short *g_535[4] = {&g_423,&g_423,&g_423,&g_423};
static unsigned short **g_534 = &g_535[0];
static unsigned short ***g_533 = &g_534;
static unsigned short ***g_536[8][6] = {{(void*)0,&g_534,&g_534,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_534,&g_534,(void*)0},{&g_534,&g_534,&g_534,&g_534,&g_534,&g_534},{&g_534,(void*)0,&g_534,&g_534,(void*)0,&g_534},{&g_534,&g_534,&g_534,&g_534,&g_534,&g_534},{&g_534,&g_534,&g_534,&g_534,&g_534,&g_534},{&g_534,&g_534,&g_534,&g_534,&g_534,&g_534},{(void*)0,(void*)0,&g_534,(void*)0,&g_534,(void*)0}};
static unsigned char **g_544 = &g_393;
static unsigned long long ****g_590[9] = {&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334};
static char *g_620[6] = {&g_394,&g_394,&g_394,&g_394,&g_394,&g_394};



static unsigned func_1(void);
static int * func_3(int * p_4, int * p_5, unsigned p_6, int * p_7);
static int * func_11(int p_12);
static int func_13(int * p_14, unsigned long long p_15, int * p_16, int p_17);
static int * func_19(int * p_20, long long p_21, unsigned p_22, short p_23, short p_24);
static int * func_25(unsigned short p_26, int p_27, int p_28, unsigned long long p_29, int * p_30);
static int func_31(int p_32);
static int ** func_33(unsigned long long p_34);
static int func_40(int ** p_41, int p_42, long long p_43, unsigned char p_44);
static int ** func_65(char p_66);
static unsigned func_1(void)
{
    long long l_2 = 0x96960F57A7C20398LL;
    int *l_10[8][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    unsigned l_481 = 0x3A6AC42CL;
    int *l_482 = &g_170[4][4][0];
    int i, j, k;
    l_2 = 0x60477862L;
    g_8[1][6][3] = func_3(g_8[1][6][3], l_10[0][3][1], g_9, func_11(func_13(&g_9, (g_18 = 0x4DCC80FC3A065C2DLL), func_19(func_25(g_9, func_31(((g_9 & g_9) >= (l_10[3][2][2] != (void*)0))), l_481, (*g_287), l_482), g_243, (*l_482), g_243, g_394), (*l_482))));
    return g_114;
}







static int * func_3(int * p_4, int * p_5, unsigned p_6, int * p_7)
{
    unsigned l_602 = 0x0B027EAAL;
    unsigned long long **l_628[3];
    unsigned short l_631 = 0x1CDDL;
    int *l_653 = &g_78;
    short l_666[2];
    int i;
    for (i = 0; i < 3; i++)
        l_628[i] = &g_287;
    for (i = 0; i < 2; i++)
        l_666[i] = 0x224AL;
    (*p_7) = l_602;
    for (g_116 = 0; (g_116 <= 3); g_116 += 1)
    {
        int *l_605[7][9] = {{&g_243,(void*)0,&g_78,(void*)0,&g_243,&g_243,(void*)0,&g_78,(void*)0},{(void*)0,&g_243,&g_78,&g_78,&g_243,(void*)0,&g_243,&g_78,&g_78},{&g_243,&g_243,(void*)0,&g_78,(void*)0,&g_243,&g_243,(void*)0,&g_78},{&g_118,&g_243,&g_118,(void*)0,(void*)0,&g_118,&g_243,&g_118,(void*)0},{&g_118,(void*)0,(void*)0,&g_118,&g_243,&g_118,(void*)0,(void*)0,&g_118},{&g_243,(void*)0,&g_78,(void*)0,&g_243,&g_243,(void*)0,&g_78,(void*)0},{(void*)0,&g_243,&g_78,&g_78,&g_243,(void*)0,&g_243,&g_78,&g_78}};
        int **l_606 = (void*)0;
        long long *l_608 = &g_116;
        long long **l_607[8] = {&l_608,&l_608,&l_608,&l_608,&l_608,&l_608,&l_608,&l_608};
        char *l_616 = &g_394;
        char *l_618 = &g_394;
        unsigned long long **l_627 = &g_287;
        unsigned l_637 = 0UL;
        short *l_669[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_669[i] = &g_520;
    }
    return &g_243;
}







static int * func_11(int p_12)
{
    int *l_599 = &g_170[6][3][0];
    int **l_600 = &g_100;
    unsigned char **l_601[4] = {&g_393,&g_393,&g_393,&g_393};
    int i;
    (*l_600) = l_599;
    (*g_100) = ((*l_599) || (l_601[3] != (void*)0));
    return (*l_600);
}







static int func_13(int * p_14, unsigned long long p_15, int * p_16, int p_17)
{
    unsigned short l_564 = 0xB7C5L;
    for (g_423 = 0; (g_423 <= 3); g_423 += 1)
    {
        char *l_565 = &g_169;
        int l_573 = 1L;
        int l_575 = 0x32AFA876L;
        unsigned long long ****l_587 = &g_334;
        unsigned long long ****l_588 = &g_334;
        long long l_596 = (-8L);
        int i;
        (*g_359) = ((*g_100) = ((safe_mul_func_uint8_t_u_u((p_17 >= (0x30L <= ((*l_565) = (g_116 && l_564)))), ((**g_392) = 9UL))) || 0xEFE9AF76L));
        for (g_298 = 0; (g_298 > 27); g_298++)
        {
            unsigned l_570 = 0x1794D8F8L;
            unsigned *l_574 = &g_18;
            int ***l_576 = &g_467;
            long long *l_577 = &g_116;
            int *l_578 = &g_170[5][4][0];
            int *l_579 = &g_243;
            for (g_78 = 23; (g_78 < 2); g_78--)
            {
                return (*p_14);
            }
        }
        (*g_359) = (0x2BE4794D042BC16CLL != (p_17 >= (p_15 != g_57)));
        for (l_575 = 0; (l_575 > (-26)); l_575 = safe_sub_func_int64_t_s_s(l_575, 6))
        {
            unsigned long long *****l_589[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned l_591[10][4][2] = {{{0xE01D9ECEL,4294967286UL},{4294967286UL,0xE01D9ECEL},{4294967286UL,4294967286UL},{0xE01D9ECEL,4294967286UL}},{{4294967286UL,0xE01D9ECEL},{4294967286UL,4294967286UL},{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL}},{{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL}},{{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL}},{{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL}},{{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL}},{{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL}},{{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL}},{{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL}},{{1UL,0xE01D9ECEL},{0xE01D9ECEL,1UL},{0xE01D9ECEL,0xE01D9ECEL},{1UL,0xE01D9ECEL}}};
            int i, j, k;
            (*p_16) = (safe_rshift_func_uint16_t_u_s((l_591[0][2][1] = (safe_unary_minus_func_uint8_t_u((l_587 == (g_590[3] = l_588))))), func_40(func_65(g_54), (safe_mod_func_int8_t_s_s(g_165, (safe_lshift_func_uint8_t_u_s(4UL, ((void*)0 == &g_534))))), p_15, l_596)));
            for (g_118 = 0; (g_118 < (-9)); g_118--)
            {
                return (*p_14);
            }
        }
    }
    return l_564;
}







static int * func_19(int * p_20, long long p_21, unsigned p_22, short p_23, short p_24)
{
    unsigned short l_493 = 0xF949L;
    int l_503[4][6][8] = {{{0xC2464C98L,(-10L),0xE20C95DFL,1L,(-4L),(-4L),1L,0xE20C95DFL},{0L,0L,(-4L),7L,0xC2464C98L,1L,0xB01BE40DL,0x78B8946FL},{0xE20C95DFL,7L,(-1L),(-8L),0x78B8946FL,(-10L),1L,0x78B8946FL},{7L,1L,0L,7L,1L,(-4L),0x9BBF7A33L,(-4L)},{0x9BBF7A33L,0x78B8946FL,(-9L),0x78B8946FL,0x9BBF7A33L,0x8401FAB9L,0xB01BE40DL,0xC2464C98L},{(-4L),0xB0EFBBA0L,(-10L),0L,0xB0EFBBA0L,0x882C8D39L,0xE20C95DFL,0x78B8946FL}},{{0xB01BE40DL,(-1L),(-10L),1L,0L,(-4L),0xB01BE40DL,(-8L)},{0xB0EFBBA0L,0x9BBF7A33L,(-9L),0xC2464C98L,0xC2464C98L,(-9L),0x9BBF7A33L,0xB0EFBBA0L},{(-8L),0xB01BE40DL,(-4L),0L,1L,(-10L),(-1L),0xB01BE40DL},{0x78B8946FL,0xE20C95DFL,0x882C8D39L,0xB0EFBBA0L,0L,(-10L),0xB0EFBBA0L,(-4L)},{0xC2464C98L,0xB01BE40DL,0x8401FAB9L,0x9BBF7A33L,0x78B8946FL,(-9L),0x78B8946FL,0x9BBF7A33L},{(-4L),0x9BBF7A33L,(-4L),1L,0L,(-4L),(-1L),0L}},{{0xBF7E3A2EL,(-1L),0xE20C95DFL,0xBF7E3A2EL,1L,0x882C8D39L,0L,(-4L)},{0xBF7E3A2EL,0xB0EFBBA0L,(-9L),7L,0L,0x8401FAB9L,1L,1L},{(-4L),0x78B8946FL,0L,0L,0x78B8946FL,(-4L),0xE20C95DFL,7L},{0xC2464C98L,(-1L),1L,0xE20C95DFL,0xD1830DB0L,1L,(-4L),0x8401FAB9L},{0x882C8D39L,1L,0xBF7E3A2EL,0xE20C95DFL,(-1L),0xBF7E3A2EL,(-10L),(-8L)},{0x8401FAB9L,(-1L),0xDF5DAF9AL,0xD1830DB0L,(-4L),0xD1830DB0L,0xDF5DAF9AL,(-1L)}},{{(-4L),1L,0x8401FAB9L,(-8L),0xD1830DB0L,0x4C66FAF0L,(-8L),(-9L)},{0xE20C95DFL,(-4L),0x9BBF7A33L,(-10L),(-4L),0xBF7E3A2EL,(-8L),1L},{(-9L),(-10L),0x8401FAB9L,0x4C66FAF0L,0L,0xDF5DAF9AL,0xDF5DAF9AL,0L},{0L,0xDF5DAF9AL,0xDF5DAF9AL,0L,0x4C66FAF0L,0x8401FAB9L,(-10L),(-9L)},{1L,(-8L),0xBF7E3A2EL,(-4L),(-10L),0x9BBF7A33L,(-4L),0xE20C95DFL},{(-9L),(-8L),0x4C66FAF0L,0xD1830DB0L,(-8L),0x8401FAB9L,1L,(-4L)}}};
    int l_504 = 0xD29E98DEL;
    int *l_522 = &g_9;
    unsigned char **l_551 = &g_393;
    int *l_561 = &g_78;
    int i, j, k;
    for (g_47 = 0; (g_47 <= 2); g_47 += 1)
    {
        unsigned l_495 = 4294967295UL;
        int l_496 = (-10L);
        int **l_517 = &g_100;
        unsigned l_541[3][1];
        unsigned char **l_542 = &g_393;
        unsigned char ***l_543[5] = {&g_392,&g_392,&g_392,&g_392,&g_392};
        short *l_558[2][1][2];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_541[i][j] = 0x2AB127ADL;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_558[i][j][k] = &g_520;
            }
        }
    }
    return l_561;
}







static int * func_25(unsigned short p_26, int p_27, int p_28, unsigned long long p_29, int * p_30)
{
    for (g_423 = 15; (g_423 >= 59); ++g_423)
    {
        int l_485 = (-1L);
        int *l_486[9][1] = {{&g_9},{&g_9},{&g_118},{&g_9},{&g_9},{&g_118},{&g_9},{&g_9},{&g_118}};
        int i, j;
        if (l_485)
            break;
        return l_486[2][0];
    }
    (*g_100) = 0x00A7374CL;
    return p_30;
}







static int func_31(int p_32)
{
    unsigned l_39 = 4294967288UL;
    int **l_45 = (void*)0;
    unsigned char *l_46[10][8] = {{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}};
    int l_48 = 0x4F57B17BL;
    unsigned *l_53 = &g_54;
    unsigned short *l_55 = (void*)0;
    unsigned short *l_56 = &g_57;
    unsigned long long *l_58[7] = {&g_59,&g_59,&g_59,&g_59,&g_59,&g_59,&g_59};
    int l_60 = 1L;
    int ***l_480 = &l_45;
    int i, j;
    (*l_480) = func_33((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((l_39 <= ((l_60 = ((func_40(l_45, g_9, g_9, (l_48 = (g_9 | g_9))) <= (((*l_56) = (((*l_53) = func_40(l_45, g_47, p_32, g_9)) == p_32)) & p_32)) >= l_39)) & 18446744073709551611UL)), 4)), g_59)));
    return p_32;
}







static int ** func_33(unsigned long long p_34)
{
    int *l_62[10][5][4] = {{{&g_9,(void*)0,(void*)0,(void*)0},{&g_9,(void*)0,(void*)0,&g_9},{&g_9,&g_9,(void*)0,&g_9},{&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,(void*)0}},{{(void*)0,(void*)0,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9},{&g_9,(void*)0,&g_9,&g_9},{&g_9,&g_9,(void*)0,&g_9},{(void*)0,&g_9,(void*)0,(void*)0}},{{(void*)0,&g_9,&g_9,&g_9},{(void*)0,(void*)0,&g_9,&g_9},{&g_9,(void*)0,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,(void*)0}},{{&g_9,(void*)0,&g_9,&g_9},{&g_9,(void*)0,(void*)0,&g_9},{&g_9,&g_9,&g_9,(void*)0},{(void*)0,&g_9,&g_9,&g_9},{&g_9,&g_9,(void*)0,&g_9}},{{&g_9,(void*)0,&g_9,&g_9},{&g_9,&g_9,&g_9,(void*)0},{&g_9,(void*)0,&g_9,&g_9},{&g_9,(void*)0,(void*)0,(void*)0},{&g_9,&g_9,&g_9,&g_9}},{{(void*)0,&g_9,&g_9,&g_9},{&g_9,(void*)0,(void*)0,&g_9},{&g_9,(void*)0,&g_9,&g_9},{&g_9,(void*)0,&g_9,&g_9},{&g_9,&g_9,(void*)0,&g_9}},{{&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,(void*)0},{&g_9,(void*)0,(void*)0,&g_9},{&g_9,(void*)0,&g_9,&g_9},{(void*)0,(void*)0,(void*)0,&g_9}},{{&g_9,&g_9,(void*)0,&g_9},{(void*)0,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,(void*)0},{(void*)0,&g_9,(void*)0,&g_9},{&g_9,&g_9,(void*)0,&g_9}},{{(void*)0,&g_9,&g_9,&g_9},{&g_9,(void*)0,(void*)0,(void*)0},{&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,&g_9},{&g_9,&g_9,(void*)0,&g_9}},{{&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,(void*)0,&g_9},{&g_9,&g_9,(void*)0,(void*)0},{(void*)0,(void*)0,&g_9,&g_9},{(void*)0,&g_9,&g_9,&g_9}}};
    int **l_61 = &l_62[5][4][1];
    unsigned long long l_426 = 0x983C523A51829DB3LL;
    int i, j, k;
    (*l_61) = &g_9;
    (*g_100) = (safe_mod_func_int8_t_s_s(func_40(func_65(((p_34 || g_57) > func_40(&g_8[1][7][0], g_59, p_34, (g_47 & g_47)))), g_243, p_34, g_169), p_34));
    for (g_59 = 0; (g_59 != 29); g_59++)
    {
        short l_402 = 0xCD2AL;
        int *l_442[7][9] = {{&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243},{&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0]},{&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243},{&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0]},{&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243},{&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0],&g_170[5][4][0]},{&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243,(void*)0,&g_243}};
        int *l_479 = (void*)0;
        int i, j;
        for (g_116 = 0; (g_116 == (-14)); --g_116)
        {
            long long *l_403 = &g_298;
            int **l_406 = &l_62[5][4][1];
            unsigned char *l_409 = &g_322;
            unsigned long long ***l_412 = &g_285;
            int l_439 = 0x3565D500L;
            int l_476[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            if ((((((*l_403) = (0xBEL != (l_402 & (*g_393)))) > (((safe_mul_func_uint8_t_u_u(((*l_409) = func_40(l_406, (g_407[2] == &g_408), ((*g_393) != p_34), (p_34 == 0x6608AE73E58A54B1LL))), p_34)) ^ p_34) >= 253UL)) == p_34) && g_165))
            {
                unsigned long long ****l_413 = &l_412;
                int l_416 = 0x5CDBFF98L;
                unsigned short *l_420 = &g_57;
                unsigned short *l_421 = (void*)0;
                unsigned short *l_422 = &g_423;
                (*g_359) = 0x8AC9FAC7L;
                if ((safe_add_func_int8_t_s_s((&g_285 == ((*l_413) = l_412)), 0x4BL)))
                {
                    l_416 = (safe_lshift_func_uint16_t_u_s(p_34, 3));
                }
                else
                {
                    int **l_417 = &g_100;
                    return l_417;
                }
                (*l_61) = &g_9;
                (*g_100) = (safe_mul_func_uint16_t_u_u((((((*l_403) = (((*l_422) = ((~((*l_420) = g_243)) > g_140)) | g_170[1][0][0])) != (safe_rshift_func_uint16_t_u_u(g_118, 8))) ^ func_40(l_406, l_426, g_116, l_402)) != 0x2EDF927329EC49B4LL), p_34));
            }
            else
            {
                unsigned short *l_428 = (void*)0;
                unsigned short **l_427 = &l_428;
                unsigned short ***l_429 = &l_427;
                long long l_440 = 4L;
                char l_474 = 0xAFL;
                (*l_429) = l_427;
                (*l_61) = &g_170[2][1][0];
                for (g_47 = 0; (g_47 >= 55); g_47++)
                {
                    unsigned char l_436 = 0xC2L;
                    int *l_441 = &g_78;
                    unsigned short l_447[9][7] = {{65527UL,0x2DB3L,0x2293L,0x9371L,0x2293L,0x2DB3L,65527UL},{65528UL,0x121BL,0x2293L,8UL,0x5036L,0x2DB3L,65528UL},{65527UL,0x121BL,0xCF31L,0x9371L,0x5036L,1UL,65527UL},{65527UL,0x2DB3L,0x2293L,0x9371L,0x2293L,0x2DB3L,65527UL},{65528UL,0x121BL,0x2293L,8UL,0x5036L,0x2DB3L,65528UL},{65527UL,65532UL,0xAEC4L,65527UL,65527UL,0x186DL,0x121BL},{0x121BL,65535UL,9UL,65527UL,9UL,65535UL,0x121BL},{0x2DB3L,65532UL,9UL,65528UL,65527UL,65535UL,0x2DB3L},{0x121BL,65532UL,0xAEC4L,65527UL,65527UL,0x186DL,0x121BL}};
                    unsigned short l_455 = 8UL;
                    unsigned l_473[10];
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_473[i] = 0x12D26980L;
                    if ((safe_lshift_func_uint8_t_u_u(func_40((l_61 = &l_62[5][4][1]), p_34, (safe_lshift_func_uint16_t_u_s(func_40(&g_8[1][6][3], (0UL ^ l_436), ((l_436 == ((0x30L != ((safe_mod_func_uint16_t_u_u(p_34, l_402)) & g_170[5][4][0])) ^ l_439)) ^ 18446744073709551615UL), l_440), g_394)), p_34), p_34)))
                    {
                        unsigned short l_448 = 0xCEECL;
                        l_442[1][6] = l_441;
                        (*l_441) = (safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((l_440 == (l_448 = ((*l_409) = l_447[3][4]))) <= (p_34 ^ 9L)), p_34)) && (p_34 != (**g_138))), ((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_243, ((**g_392) ^ (-1L)))), g_170[6][0][0])) == 0xCEL)));
                    }
                    else
                    {
                        int **l_458[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int ***l_466[3];
                        int *l_470 = (void*)0;
                        int *l_471[10] = {&g_472,&g_472,(void*)0,&g_472,&g_472,(void*)0,&g_472,&g_472,(void*)0,&g_472};
                        unsigned l_475 = 0x8ECBAB5EL;
                        short *l_477 = (void*)0;
                        short *l_478 = &l_402;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_466[i] = (void*)0;
                        (*g_100) = (safe_add_func_int64_t_s_s((l_455 || ((*l_478) = (safe_mul_func_int16_t_s_s(func_40(l_458[0], ((((safe_div_func_uint64_t_u_u(l_440, (0x0DL && ((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(func_40(l_406, (0L || (safe_add_func_int16_t_s_s((func_40(&g_8[1][0][4], func_40((g_467 = (void*)0), (l_439 = ((*g_408) = (((safe_add_func_int16_t_s_s(p_34, l_440)) != (**g_286)) != (-1L)))), p_34, l_473[2]), g_78, (*g_393)) && (*l_441)), l_474))), l_475, (**g_392)))) || l_476[6]), 2)) <= 0x52L)))) > (*l_441)) & 0xD198E18C88A2468CLL) ^ g_140), g_114, p_34), g_170[5][4][0])))), p_34));
                        if ((*l_441))
                            continue;
                        if ((*g_359))
                            break;
                    }
                }
            }
            for (g_169 = 7; (g_169 >= 1); g_169 -= 1)
            {
                l_479 = (*l_406);
            }
            (*l_61) = &g_78;
        }
    }
    return &g_8[1][6][3];
}







static int func_40(int ** p_41, int p_42, long long p_43, unsigned char p_44)
{
    int *l_49 = &g_9;
    int *l_51 = (void*)0;
    int **l_50 = &l_51;
    unsigned long long l_52 = 2UL;
    (*l_50) = (l_49 = l_49);
    return l_52;
}







static int ** func_65(char p_66)
{
    int **l_71 = &g_8[0][6][4];
    int **l_75 = &g_8[1][8][0];
    int *l_90 = (void*)0;
    int **l_89 = &l_90;
    int *l_101 = &g_9;
    short l_109 = 0x4F5EL;
    unsigned long long *l_110 = &g_59;
    unsigned long long *l_113 = &g_114;
    long long *l_115 = &g_116;
    int *l_117 = &g_118;
    long long l_119[3][5][1] = {{{9L},{0xDD5741E9346F960BLL},{9L},{0x385642B86B6EF140LL},{2L}},{{2L},{0x385642B86B6EF140LL},{9L},{0xDD5741E9346F960BLL},{9L}},{{0x385642B86B6EF140LL},{2L},{2L},{0x385642B86B6EF140LL},{9L}}};
    int l_137[2];
    int *l_190 = &l_137[0];
    long long **l_277 = &l_115;
    unsigned long long **l_288 = &l_113;
    int l_337[4][7][9] = {{{1L,(-10L),0x9C4C5CBCL,0L,1L,0x657B7ADCL,0x0F645FABL,0xB9400A60L,0x579D358CL},{(-1L),2L,0x70D7B47DL,0x4B49C6F0L,0L,0x0F645FABL,0L,0L,0L},{0x2EA7C460L,2L,(-1L),0xF1FC9B04L,0L,0L,0x563290B5L,0x76B8AEEBL,(-2L)},{0L,(-10L),0L,1L,0x627ED3F3L,0x242BAB7DL,0x59AB813EL,0x6A1B6D9EL,(-1L)},{(-8L),0x2EA7C460L,1L,1L,0x346BD332L,0x627ED3F3L,2L,(-1L),0L},{0x627ED3F3L,0xB9400A60L,0L,0xC9501C37L,(-1L),1L,1L,(-1L),0xC9501C37L},{0xC214D5FAL,0xE28B10FAL,0xC214D5FAL,0xF70949F3L,0x4B684BF2L,0x7F307CFAL,(-4L),0x34A355E9L,0x5B826F6BL}},{{0xB9400A60L,7L,0x4B49C6F0L,1L,0L,0x70D7B47DL,0xDE98533EL,1L,0x8253E9C7L},{0x31596316L,(-10L),0xE8C24F1BL,0xF70949F3L,(-8L),(-1L),0x62375A83L,0xF1E8D471L,0x34A355E9L},{0L,0x7F307CFAL,0x6A1B6D9EL,0xC9501C37L,0x4B49C6F0L,0x563290B5L,0x657B7ADCL,0x6E641367L,(-1L)},{7L,5L,1L,1L,0x59AB813EL,0xE28B10FAL,0x70D7B47DL,(-2L),0xACD96559L},{0xE533699DL,(-1L),0x9AA2DC8AL,0x70D7B47DL,0L,0x6A1B6D9EL,0x627ED3F3L,0xDB5C1104L,0x346BD332L},{0x70D12220L,0xAE3DAA53L,0L,0x5B826F6BL,0xF1E8D471L,0L,4L,(-1L),0xFD7ABBBBL},{0x70D7B47DL,0xF70949F3L,1L,0xC8738472L,0L,0L,(-1L),0x346BD332L,(-1L)}},{{0x710A7853L,0x5B826F6BL,1L,(-1L),1L,0x6A1B6D9EL,0L,(-1L),0x62375A83L},{6L,0L,0xD7D93E56L,9L,0xB24D9D22L,0L,(-1L),0x82908A86L,(-5L)},{0x62375A83L,1L,(-1L),0xD7D93E56L,(-1L),0L,(-4L),0x2EA7C460L,0x2EA7C460L},{0x5B826F6BL,0x6A1B6D9EL,0L,0xAE3DAA53L,0L,0x6A1B6D9EL,0x5B826F6BL,(-9L),1L},{0x9AA2DC8AL,0xC214D5FAL,0xB24D9D22L,1L,(-4L),0x563290B5L,0xDB5C1104L,(-10L),0xD021F345L},{4L,0L,(-1L),0x82908A86L,0x70D12220L,0x6E641367L,0xC8738472L,(-9L),1L},{8L,0xFD7ABBBBL,0x62375A83L,0x8253E9C7L,(-1L),0x59AB813EL,(-2L),0x2EA7C460L,0x6D71B742L}},{{0x3E4CD29AL,0x5B826F6BL,(-1L),0x9C4C5CBCL,0xDB5C1104L,0x70D12220L,0x0F645FABL,0x82908A86L,(-2L)},{(-10L),0xF1FC9B04L,0xDE98533EL,0xF70949F3L,0x31596316L,0x627ED3F3L,0x70D7B47DL,(-1L),(-1L)},{(-4L),0xC9501C37L,0L,0L,(-8L),(-10L),0xAE3DAA53L,0x89AA0642L,0L},{0x579D358CL,0x8253E9C7L,(-5L),0xF1FC9B04L,0xD021F345L,(-1L),(-2L),1L,(-1L)},{0x579D358CL,7L,0L,(-1L),5L,0x3E4CD29AL,0L,0x82908A86L,0x5B826F6BL},{(-1L),4L,0xC214D5FAL,0x710A7853L,0x59AB813EL,0L,9L,0x4B684BF2L,0L},{0x4B684BF2L,(-1L),0x242BAB7DL,0L,(-1L),(-8L),1L,0x0F645FABL,9L}}};
    char *l_358 = &g_169;
    char l_381[6][9][4] = {{{(-4L),(-9L),1L,6L},{0L,0xA5L,0xE9L,(-4L)},{1L,0L,0x9EL,(-9L)},{(-1L),1L,(-4L),1L},{0L,(-9L),0L,0xE9L},{0xA5L,0x8CL,0x18L,(-1L)},{0x8CL,1L,(-9L),0x8CL},{0x59L,1L,(-9L),(-4L)},{0x8CL,6L,0x18L,0xA5L}},{{0xA5L,(-9L),0L,(-4L)},{0L,(-4L),(-4L),(-4L)},{(-1L),(-1L),0x9EL,0xB5L},{1L,1L,0xE9L,0L},{0L,0xB5L,1L,0xE9L},{(-4L),0xB5L,0x18L,0L},{0xB5L,1L,0x1EL,0xB5L},{0x59L,(-1L),1L,(-4L)},{(-9L),(-4L),0x18L,(-4L)}},{{(-9L),0L,0xE9L,0xB5L},{(-4L),(-9L),(-9L),0x1EL},{6L,0xA5L,0L,0L},{6L,1L,(-9L),(-4L)},{(-4L),0L,0xE9L,1L},{(-9L),1L,0x51L,0xA5L},{1L,1L,1L,1L},{0xE9L,6L,0x59L,0x1EL},{(-1L),0xB5L,0x51L,(-9L)}},{{0x8CL,0L,0x9EL,(-9L)},{(-4L),0xB5L,1L,0x1EL},{0xA5L,6L,0L,1L},{(-4L),1L,0x1EL,0xA5L},{(-4L),1L,(-4L),1L},{0xB5L,0L,0x51L,(-4L)},{0L,1L,0L,0L},{0xE9L,0xA5L,0L,0x1EL},{0L,(-9L),0x51L,0xB5L}},{{0xB5L,0L,(-4L),0x8CL},{(-4L),0x8CL,0x1EL,0x1EL},{(-4L),(-4L),0L,(-1L)},{0xA5L,1L,1L,6L},{(-4L),(-1L),0x9EL,1L},{0x8CL,(-1L),0x51L,0L},{1L,0L,0x9EL,1L},{0L,1L,0L,0xCBL},{0x1EL,0x9EL,0L,0x9EL}},{{(-4L),0x18L,0L,0xE9L},{0x51L,(-4L),(-1L),0xCBL},{0L,0x59L,1L,(-9L)},{0L,0L,(-1L),1L},{0x51L,(-9L),0L,0xD9L},{(-4L),0x1EL,0L,0x59L},{0x1EL,0L,0L,0x1EL},{0L,0L,0x9EL,0xCBL},{1L,0xE9L,0L,(-4L)}}};
    unsigned long long *l_382 = &g_114;
    int *l_397[4][2][4] = {{{&l_337[0][1][7],(void*)0,(void*)0,&g_172},{(void*)0,&l_337[1][4][3],(void*)0,(void*)0}},{{&l_337[0][1][7],&l_337[0][1][7],&g_172,(void*)0},{(void*)0,(void*)0,&g_172,&g_172}},{{&g_172,&g_172,(void*)0,&g_172},{&l_337[0][1][7],&g_172,&l_337[0][1][7],&g_172}},{{&g_172,(void*)0,(void*)0,(void*)0},{&g_172,&l_337[0][1][7],(void*)0,(void*)0}}};
    int **l_396[10][7] = {{(void*)0,&l_397[3][1][3],(void*)0,&l_397[3][1][3],(void*)0,&l_397[3][1][3],(void*)0},{&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3]},{&l_397[3][1][2],&l_397[3][1][3],&l_397[3][1][2],&l_397[3][1][3],&l_397[3][1][2],&l_397[3][1][3],&l_397[3][1][2]},{&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3]},{(void*)0,&l_397[3][1][3],(void*)0,&l_397[3][1][3],(void*)0,&l_397[3][1][3],(void*)0},{&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3]},{&l_397[3][1][2],&l_397[3][1][3],&l_397[3][1][2],&l_397[3][1][3],&l_397[3][1][2],&l_397[3][1][3],&l_397[3][1][2]},{&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3]},{(void*)0,&l_397[3][1][3],(void*)0,&l_397[3][1][3],(void*)0,&l_397[3][1][3],(void*)0},{&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3],&l_397[3][1][3]}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_137[i] = 0xA79916B1L;
    for (g_47 = 0; (g_47 > 5); g_47++)
    {
        int *l_70 = &g_9;
        int **l_69 = &l_70;
        int ***l_72 = &l_71;
        unsigned char *l_76 = &g_47;
        char l_85 = 0x12L;
        (*l_69) = &g_9;
    }
    (*l_117) = ((*g_100) = ((65530UL | (0UL >= (safe_div_func_uint64_t_u_u(p_66, ((*l_115) = (((*l_110) = (safe_add_func_uint8_t_u_u(g_57, l_109))) & (safe_sub_func_uint64_t_u_u(((*l_113) = (((*g_100) <= func_40(&l_101, g_47, func_40(&l_101, g_54, g_78, g_47), g_47)) > 0UL)), 0xBC53350B76A7FFA3LL)))))))) < 0L));
    (*l_89) = (*l_71);
    for (g_59 = 0; (g_59 <= 0); g_59 += 1)
    {
        int **l_120[6];
        unsigned *l_154 = &g_54;
        char l_177 = 5L;
        unsigned long long *l_199 = &g_114;
        unsigned long long **l_198 = &l_199;
        unsigned short l_208[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
        short *l_268 = &l_109;
        unsigned l_304[8][7][4] = {{{0xEBC1DC1DL,0x0D553A08L,0x23DC06B8L,0UL},{0UL,0x99B786E6L,4294967295UL,4294967295UL},{0xB702C7A5L,0x8B992737L,0UL,0UL},{0xC7D19381L,0xC7D19381L,0x94548FFBL,0xFCF75B37L},{0x99B786E6L,3UL,0x8B992737L,0xEBC1DC1DL},{0x471E1CBAL,0UL,1UL,0x8B992737L},{0UL,0UL,5UL,0xEBC1DC1DL}},{{0UL,3UL,0xCC9911B0L,4294967295UL},{0xFCF75B37L,0UL,0x8B992737L,0x1F6875FBL},{1UL,0xC7D19381L,0UL,0x1A939F94L},{1UL,0UL,0x4747B00DL,0xB702C7A5L},{0x99B786E6L,0xE97BB8A4L,0x802C0CE9L,4294967295UL},{0xEBC1DC1DL,0x471E1CBAL,0xEBC1DC1DL,0xF07905F4L},{4294967295UL,0xEBC1DC1DL,0x84D77968L,0x73F36A34L}},{{4294967295UL,1UL,0x76390C7CL,0xEBC1DC1DL},{8UL,4294967295UL,0x76390C7CL,0xCC9911B0L},{4294967295UL,0x0D553A08L,0x84D77968L,0xFCF75B37L},{4294967295UL,0x1F6875FBL,0xEBC1DC1DL,3UL},{0xEBC1DC1DL,3UL,0x802C0CE9L,0x4747B00DL},{0x99B786E6L,4294967295UL,0x4747B00DL,0UL},{1UL,0x802C0CE9L,0UL,0x84D77968L}},{{1UL,0x8B992737L,0x8B992737L,1UL},{0xFCF75B37L,0x76390C7CL,0x60B0DC34L,0x471E1CBAL},{0xB702C7A5L,8UL,4294967295UL,0x94548FFBL},{5UL,1UL,1UL,0x94548FFBL},{0x0D553A08L,8UL,0xC7D19381L,0x471E1CBAL},{0UL,0x76390C7CL,4294967295UL,1UL},{0UL,0x8B992737L,0x1F6875FBL,0x84D77968L}},{{0x2EEEA668L,0x802C0CE9L,8UL,0UL},{0x1F6875FBL,4294967295UL,0xCC9911B0L,0x4747B00DL},{0x76390C7CL,3UL,0x2EEEA668L,3UL},{0x23DC06B8L,0x1F6875FBL,0UL,4294967295UL},{4294967295UL,0xE97BB8A4L,5UL,0x60B0DC34L},{0x60B0DC34L,8UL,4294967295UL,0x76390C7CL},{0x60B0DC34L,1UL,5UL,0x4747B00DL}},{{4294967295UL,0x76390C7CL,0UL,0x8B992737L},{0xCC9911B0L,0x0D553A08L,0x802C0CE9L,0x471E1CBAL},{0x23DC06B8L,0xF07905F4L,0x60B0DC34L,0x2EEEA668L},{0x84D77968L,4294967295UL,0x3FEF301AL,0xFCF75B37L},{0x802C0CE9L,0UL,0x84D77968L,0x84D77968L},{0xB702C7A5L,0xB702C7A5L,0x1A939F94L,8UL},{4294967295UL,0x4747B00DL,0UL,0x23DC06B8L}},{{0xE97BB8A4L,0x2EEEA668L,0UL,0UL},{4294967295UL,0x2EEEA668L,0x471E1CBAL,0x23DC06B8L},{0x2EEEA668L,0x4747B00DL,0x99B786E6L,8UL},{4294967295UL,0xB702C7A5L,0xC7D19381L,0x84D77968L},{0x94548FFBL,0UL,0xB702C7A5L,0xFCF75B37L},{1UL,4294967295UL,0UL,0x2EEEA668L},{0UL,0xF07905F4L,0xEBC1DC1DL,0x471E1CBAL}},{{0x76390C7CL,0x0D553A08L,0x76390C7CL,0x8B992737L},{3UL,0x76390C7CL,1UL,0x4747B00DL},{0x471E1CBAL,1UL,0x23DC06B8L,0x76390C7CL},{0x3FEF301AL,8UL,0x23DC06B8L,0x60B0DC34L},{0x471E1CBAL,0xE97BB8A4L,1UL,4294967295UL},{3UL,0x84D77968L,0x76390C7CL,0x73F36A34L},{0x76390C7CL,0x73F36A34L,0x76390C7CL,0x1F6875FBL}}};
        int **l_317 = (void*)0;
        int *l_319 = &g_172;
        int **l_318 = &l_319;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_120[i] = (void*)0;
        for (g_114 = 0; (g_114 <= 0); g_114 += 1)
        {
            unsigned char *l_123[8] = {&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47};
            int *l_143 = &g_78;
            int l_156 = (-6L);
            unsigned long long l_174[10] = {0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL,0xED5062BB3BD2D337LL};
            unsigned short *l_176[10] = {&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57};
            int ***l_205 = &l_120[4];
            unsigned l_222[8][4] = {{0xCDFA4226L,7UL,0x24B1641BL,0x894A6382L},{0xCDFA4226L,0x24B1641BL,0xCDFA4226L,0x8ED05F35L},{7UL,0x894A6382L,0x8ED05F35L,0x8ED05F35L},{0x24B1641BL,0x24B1641BL,18446744073709551608UL,0x894A6382L},{0x894A6382L,7UL,18446744073709551608UL,7UL},{0x24B1641BL,0xCDFA4226L,0x8ED05F35L,18446744073709551608UL},{7UL,0xCDFA4226L,0xCDFA4226L,7UL},{0xCDFA4226L,7UL,0x24B1641BL,0x894A6382L}};
            int l_253[7] = {0x79B97212L,0x79B97212L,0x79B97212L,0x79B97212L,0x79B97212L,0x79B97212L,0x79B97212L};
            int i, j;
        }
    }
    return &g_8[0][0][5];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
