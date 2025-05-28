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



static int g_13[8] = {0x416DB6D0L,0x416DB6D0L,0x416DB6D0L,0x416DB6D0L,0x416DB6D0L,0x416DB6D0L,0x416DB6D0L,0x416DB6D0L};
static int *g_12 = &g_13[4];
static volatile short g_43 = 6L;
static unsigned char g_51 = 0x61L;
static unsigned char g_53 = 0x25L;
static int g_60 = 0x2954F618L;
static int *g_61[2] = {&g_60,&g_60};
static unsigned char g_75 = 251UL;
static unsigned char g_77 = 253UL;
static short g_79 = 0xE8C0L;
static unsigned short g_104 = 0xDEF5L;
static unsigned g_144 = 4294967295UL;
static const int g_172 = 0x26304C60L;
static const int *g_171 = &g_172;
static const int **g_170 = &g_171;
static char g_183 = 0L;
static char *g_182 = &g_183;
static int g_214 = 0xA9EDD480L;
static unsigned g_216 = 18446744073709551615UL;
static int g_245 = 5L;
static char *g_277 = &g_183;
static char **g_276[1] = {&g_277};
static unsigned g_331 = 0xBBB9A0ADL;
static int *g_360 = (void*)0;
static const unsigned g_364 = 18446744073709551610UL;
static const unsigned g_366 = 9UL;
static const unsigned g_368 = 0UL;
static const unsigned *g_367[3] = {&g_368,&g_368,&g_368};
static unsigned short g_411 = 0x6966L;
static short g_478 = 0x28D1L;
static const char g_539[3][1] = {{0x65L},{0x65L},{0x65L}};
static volatile char g_541 = 0x09L;
static volatile char *g_540[2][8][7] = {{{&g_541,(void*)0,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,&g_541,(void*)0,&g_541,&g_541,(void*)0,&g_541},{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,&g_541,(void*)0,&g_541,&g_541,(void*)0,&g_541},{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,(void*)0,&g_541,(void*)0,(void*)0,&g_541,(void*)0},{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_541}},{{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,&g_541,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,(void*)0,&g_541,(void*)0,(void*)0,&g_541,(void*)0},{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_541},{&g_541,&g_541,&g_541,&g_541,&g_541,&g_541,&g_541},{&g_541,&g_541,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static char g_603 = (-1L);
static const unsigned char *g_647 = (void*)0;
static const unsigned char **g_646 = &g_647;
static const unsigned char ** const *g_645 = &g_646;



static int func_1(void);
static int * func_2(unsigned short p_3);
static unsigned char func_4(int * p_5);
static int * func_6(int p_7, unsigned short p_8, short p_9, int * p_10, int * p_11);
static int * func_14(const int * p_15, int * p_16, int * p_17);
static const int * func_18(int * p_19, unsigned p_20, int * p_21, int * p_22, unsigned p_23);
static int * func_24(int * p_25, int * const p_26);
static int * func_27(int * p_28, int * p_29, int * p_30);
static unsigned func_32(unsigned p_33, unsigned short p_34, int * p_35);
static unsigned char func_36(unsigned char p_37, short p_38, int * p_39, short p_40);
static int func_1(void)
{
    int *l_31 = &g_13[4];
    unsigned *l_215 = &g_216;
    unsigned char *l_217 = (void*)0;
    unsigned char *l_218[7];
    int l_219[6][8] = {{1L,(-1L),0x8AB8816BL,1L,1L,0x8AB8816BL,(-1L),1L},{1L,0xECF76F22L,1L,0x8D925811L,(-10L),(-10L),1L,(-10L)},{1L,(-1L),0x8444E196L,(-1L),1L,(-10L),0x8D925811L,(-10L)},{0xD1907D0AL,0x8AB8816BL,(-1L),1L,1L,1L,1L,(-1L)},{(-10L),(-10L),(-1L),1L,(-1L),0xECF76F22L,0x8D925811L,0xD1907D0AL},{1L,0x8D925811L,0x8444E196L,(-10L),0x8444E196L,0x8D925811L,1L,0xD1907D0AL}};
    int l_264[7][7] = {{(-1L),(-8L),(-8L),(-1L),0xE7E368E8L,(-1L),(-8L)},{5L,5L,(-1L),0xCA2208B1L,(-1L),5L,5L},{0xCD8268F0L,(-8L),5L,(-8L),0xCD8268F0L,0xCD8268F0L,(-8L)},{(-1L),9L,(-1L),(-1L),(-1L),(-1L),9L},{(-8L),0xE7E368E8L,5L,5L,0xE7E368E8L,(-8L),0xE7E368E8L},{(-1L),(-1L),(-1L),(-1L),9L,(-1L),(-1L)},{0xCD8268F0L,0xCD8268F0L,(-8L),5L,(-8L),0xCD8268F0L,0xCD8268F0L}};
    const int **l_292 = &g_171;
    int **l_544 = &g_360;
    int l_545[6][3][4] = {{{8L,8L,0L,8L},{8L,1L,1L,8L},{1L,8L,1L,0L}},{{1L,1L,8L,1L},{1L,0L,0L,1L},{0L,1L,0L,0L}},{{1L,1L,8L,1L},{1L,0L,0L,1L},{0L,1L,0L,0L}},{{1L,1L,8L,1L},{1L,0L,0L,1L},{0L,1L,0L,0L}},{{1L,1L,8L,1L},{1L,0L,0L,1L},{0L,1L,0L,0L}},{{1L,1L,8L,1L},{1L,0L,0L,1L},{0L,1L,0L,0L}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_218[i] = &g_51;
    (*l_544) = func_2((func_4(func_6((g_12 != ((*l_544) = func_14(((*l_292) = func_18(func_24(&g_13[3], func_27(&g_13[4], l_31, (((0x46L & (*l_31)) & (l_219[5][4] = (((*l_215) = func_32((g_13[3] ^ func_36((safe_lshift_func_uint8_t_u_s(g_43, 5)), g_13[1], l_31, g_13[4])), g_13[4], &g_13[7])) , (*l_31)))) , &g_60))), g_172, g_12, l_31, l_264[1][3])), g_12, g_12))), g_331, l_545[0][1][0], g_12, g_12)) | g_539[2][0]));


    ;


    ;

    (*l_544) = &g_13[4];

    ;
    return g_13[4];
}







static int * func_2(unsigned short p_3)
{
    int *l_559 = &g_214;
    unsigned char *l_562 = (void*)0;
    unsigned char *l_563 = &g_77;
    unsigned char l_573 = 0x30L;
    short *l_577 = (void*)0;
    unsigned **l_609 = (void*)0;
    unsigned l_670 = 0xE632F2E8L;
    const int **l_671 = &g_171;
    (*g_12) = p_3;
    if ((0x55L & ((safe_sub_func_uint8_t_u_u((0L >= (safe_mod_func_int8_t_s_s((p_3 ^ (safe_sub_func_int16_t_s_s(0xEBEFL, (func_4(l_559) || (0x6F48L != (((((((*l_563) &= (safe_lshift_func_uint8_t_u_s(func_4(l_559), 0))) | 0xBEL) | 0UL) == 0x3EL) || g_43) ^ g_51)))))), 0xFBL))), g_539[0][0])) , 0xF7L)))
    {
        const int **l_564 = &g_171;
        char *l_567 = &g_183;
        (*l_564) = &g_172;

        ;
        (*g_12) = (p_3 == (safe_sub_func_uint8_t_u_u(((l_567 == (void*)0) == ((*l_559) && 4294967293UL)), p_3)));
    }
    else
    {
        short l_570 = 0x83E8L;
        char *l_588 = &g_183;
        unsigned char ** const l_612 = &l_563;
        int **l_614[4];
        short **l_624 = &l_577;
        int *l_628 = &g_214;
        unsigned short *l_638 = &g_411;
        int l_652[3];
        int i;
        for (i = 0; i < 4; i++)
            l_614[i] = &g_61[1];
        for (i = 0; i < 3; i++)
            l_652[i] = 0x3FF2185FL;
        for (g_77 = 0; (g_77 >= 30); g_77++)
        {
            unsigned short *l_571 = (void*)0;
            unsigned short *l_572[6][7] = {{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_411,(void*)0,&g_411,(void*)0,&g_411,(void*)0,&g_411},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_411,(void*)0,&g_411,(void*)0,&g_411,(void*)0,&g_411},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_411,(void*)0,&g_411,(void*)0,&g_411,(void*)0,&g_411}};
            short **l_574 = (void*)0;
            short *l_576 = &g_478;
            short **l_575[1];
            int l_580[6][2][6] = {{{0xBB7B21E6L,0x5FD0709DL,1L,0x7179703EL,1L,0x5FD0709DL},{1L,0xBB7B21E6L,0x80BAD65AL,0x6349C9A9L,0x6349C9A9L,0x80BAD65AL}},{{1L,1L,0x6349C9A9L,0x7179703EL,9L,0x7179703EL},{0xBB7B21E6L,1L,0xBB7B21E6L,0x80BAD65AL,0x6349C9A9L,0x6349C9A9L}},{{0x5FD0709DL,0xBB7B21E6L,0xBB7B21E6L,0x5FD0709DL,1L,0x7179703EL},{0x7179703EL,0x5FD0709DL,0x6349C9A9L,0x5FD0709DL,0x7179703EL,0x80BAD65AL}},{{0x5FD0709DL,0x7179703EL,0x80BAD65AL,0x80BAD65AL,0x7179703EL,0x5FD0709DL},{0xBB7B21E6L,0x5FD0709DL,1L,0x7179703EL,1L,0x5FD0709DL}},{{1L,0xBB7B21E6L,0x80BAD65AL,0x6349C9A9L,0x6349C9A9L,0x80BAD65AL},{1L,1L,0x6349C9A9L,0x7179703EL,9L,0x7179703EL}},{{0xBB7B21E6L,1L,0xBB7B21E6L,0x80BAD65AL,0x6349C9A9L,0x6349C9A9L},{0x5FD0709DL,0xBB7B21E6L,0xBB7B21E6L,0x5FD0709DL,1L,0x7179703EL}}};
            int *l_582[8] = {&g_13[0],&g_13[0],&l_580[3][1][4],&g_13[0],&g_13[0],&l_580[3][1][4],&g_13[0],&g_13[0]};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_575[i] = &l_576;
            (*g_12) = (((func_4(&g_13[7]) , (l_570 > (g_331 && (l_573 ^= g_77)))) , (l_577 = &g_478)) != (((safe_rshift_func_uint8_t_u_u(0x26L, p_3)) & l_580[3][1][4]) , &g_79));

            ;
            for (g_478 = 0; (g_478 <= 2); g_478 += 1)
            {
                int l_587[2];
                const int **l_597 = &g_171;
                int l_598 = 0x74C183AEL;
                int i;
                for (i = 0; i < 2; i++)
                    l_587[i] = 0xE39B54B4L;
                for (g_53 = 0; (g_53 <= 1); g_53 += 1)
                {
                    int **l_581 = (void*)0;
                    int **l_583 = &g_61[1];
                    int l_586[4][2][5] = {{{(-2L),0x995EEF35L,4L,0L,0xFFDEED25L},{0xFFDEED25L,0L,(-1L),0x4BAD4861L,0L}},{{0L,0xFE658592L,0xFE658592L,0L,(-1L)},{0L,0xFE658592L,1L,0xC30212BAL,0L}},{{0x4BAD4861L,(-1L),0L,0xFFDEED25L,4L},{1L,(-5L),0x995EEF35L,0xC30212BAL,0xC30212BAL}},{{(-5L),0x4BAD4861L,(-5L),0L,(-2L)},{(-5L),(-2L),0xFFDEED25L,0x4BAD4861L,0L}}};
                    unsigned short l_613 = 65535UL;
                    int ***l_615 = &l_581;
                    int l_618 = 0x2F4B9943L;
                    unsigned l_633[2][10][1] = {{{0xDAC16F4CL},{0x224C7071L},{0x0183A16CL},{0x224C7071L},{0xDAC16F4CL},{1UL},{0xDAC16F4CL},{0x224C7071L},{0x0183A16CL},{0x224C7071L}},{{0xDAC16F4CL},{1UL},{0xDAC16F4CL},{0x224C7071L},{0x0183A16CL},{0x224C7071L},{0xDAC16F4CL},{1UL},{0xDAC16F4CL},{0x224C7071L}}};
                    int i, j, k;
                    (*l_583) = (l_582[2] = (void*)0);
                }
                if (p_3)
                    break;
                for (g_144 = 0; (g_144 <= 2); g_144 += 1)
                {
                    int *l_663 = (void*)0;
                    if ((*g_12))
                    {
                        return &g_214;


                    }
                    else
                    {
                        short * const *l_644 = &l_576;
                        unsigned char *l_650 = &g_75;
                        char **l_651 = &g_277;
                        unsigned *l_654 = &g_216;
                        unsigned **l_653 = &l_654;
                        (*g_12) = ((p_3 != ((p_3 == p_3) , (((*l_653) = func_6(((safe_mod_func_int32_t_s_s((l_644 == (void*)0), (l_652[0] |= (((p_3 == ((g_645 == (void*)0) , (((safe_mod_func_uint8_t_u_u((g_51 = ((*l_650) |= p_3)), 0x85L)) != 4294967291UL) , (*l_559)))) , l_651) == (void*)0)))) || p_3), g_603, g_77, &g_60, &g_13[4])) != &g_366))) == 2UL);

                        ;
                        (*l_559) = (safe_add_func_uint16_t_u_u(p_3, (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_uint32_t_u_u((0xE6F6DF3AL || ((((void*)0 != l_582[7]) , p_3) >= 0x3A1AL)), 0xCF4F4B33L)) && 0L) || 0xC339L) , p_3), p_3)), (*g_277)))));
                    }
                    for (g_75 = 0; (g_75 <= 2); g_75 += 1)
                    {
                        short l_664[8] = {0xE920L,(-3L),0xE920L,0xE920L,(-3L),0xE920L,0xE920L,(-3L)};
                        int *l_665 = &l_587[0];
                        int *l_666 = &l_580[2][0][0];
                        int i;
                        (*g_12) = (func_4((g_539[0][0] , func_6(g_364, p_3, (0xE351L || ((func_32((l_612 == (*g_645)), l_664[2], (l_666 = func_27(func_6(((*l_665) |= g_183), g_539[2][0], g_77, &g_13[4], &g_13[4]), &g_214, &g_214))) > g_172) || (**l_597))), l_663, g_61[0]))) == g_411);

                        ;
                        (*l_597) = &g_214;

                        ;
                        (*l_559) = (safe_unary_minus_func_int16_t_s(p_3));
                        if ((*l_666))
                            break;
                    }
                    for (g_104 = 0; (g_104 <= 2); g_104 += 1)
                    {
                        int *l_668[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_668[i] = &g_13[4];
                        return l_668[3];


                    }
                }
            }


        }

        ;
        ;
        (*g_12) = (safe_unary_minus_func_int32_t_s(func_32((((**l_612) ^= ((*l_559) < ((*g_277) |= ((((*l_638) = (*l_628)) >= p_3) , l_670)))) != (l_577 != (((l_628 != &l_670) < (*g_12)) , &g_478))), p_3, &g_60)));
    }

    ;
    ;
    (*l_671) = &g_172;

    ;
    return &g_214;


}







static unsigned char func_4(int * p_5)
{
    unsigned char l_552 = 255UL;
    for (g_216 = 0; (g_216 >= 40); g_216 = safe_add_func_uint16_t_u_u(g_216, 7))
    {
        int *l_551 = &g_60;
        g_171 = l_551;

        ;
    }
    return l_552;
}







static int * func_6(int p_7, unsigned short p_8, short p_9, int * p_10, int * p_11)
{
    int *l_546 = &g_60;
    int **l_547 = &l_546;
    int *l_548 = &g_60;
    (*l_547) = func_27(&g_214, ((*l_547) = l_546), (((*g_12) ^ 0x40EF2A0DL) , &g_13[4]));

    ;
    return p_10;


}







static int * func_14(const int * p_15, int * p_16, int * p_17)
{
    unsigned char l_293 = 0UL;
    int *l_294 = &g_13[4];
    int l_296[10] = {0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL,0x75B5D74DL};
    const char **l_304 = (void*)0;
    short l_338 = 0x061FL;
    int *l_353 = &g_60;
    unsigned *l_417 = (void*)0;
    unsigned ** const l_416[3] = {&l_417,&l_417,&l_417};
    unsigned char *l_474 = &g_75;
    unsigned char **l_473 = &l_474;
    unsigned l_503[2][8];
    unsigned short l_509 = 65529UL;
    int **l_528 = &g_360;
    const char *l_538 = &g_539[1][0];
    const char **l_537 = &l_538;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_503[i][j] = 9UL;
    }
    (*p_17) = 1L;
    if ((l_293 | l_293))
    {
        int **l_295 = &g_61[1];
        unsigned short l_316 = 65526UL;
        short l_332 = 0x9067L;
        char *l_334 = &g_183;
        (*l_295) = l_294;
        l_296[0] |= ((**l_295) || (*l_294));
        if (((((void*)0 != &g_216) , (~(**l_295))) == (safe_mul_func_uint8_t_u_u((*l_294), (**l_295)))))
        {
            unsigned l_301 = 0UL;
            for (g_51 = 0; (g_51 > 43); g_51 = safe_add_func_int8_t_s_s(g_51, 5))
            {
                unsigned char l_306 = 0xD5L;
                int *l_307 = &g_60;
                for (g_183 = 0; (g_183 <= 1); g_183 += 1)
                {
                    unsigned char *l_302 = &g_75;
                    int l_303[1];
                    const char ***l_305 = &l_304;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_303[i] = 0xEBB68224L;
                    g_61[g_183] = (void*)0;
                    for (g_245 = 1; (g_245 >= 0); g_245 -= 1)
                    {
                        int i;
                        return g_61[g_183];


                    }
                    g_13[(g_183 + 3)] = (((*l_302) = l_301) && (~l_303[0]));
                    (*l_305) = l_304;
                }
                (*l_307) = (l_306 = ((*l_294) = 0x924E2C57L));
            }


            (*l_294) = (*p_17);
        }
        else
        {
            unsigned short *l_314 = (void*)0;
            unsigned short *l_315[5][5] = {{&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0,&g_104,(void*)0},{&g_104,&g_104,(void*)0,&g_104,&g_104},{(void*)0,&g_104,(void*)0,(void*)0,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104}};
            int l_319 = 0x898BB38EL;
            char *l_333 = &g_183;
            short l_352 = (-4L);
            const unsigned *l_365 = &g_366;
            int i, j;
            (*g_12) ^= (safe_rshift_func_int8_t_s_s(0x29L, 1));
            if (((safe_rshift_func_uint16_t_u_u((g_43 < ((((g_172 , ((func_32(g_60, (*l_294), p_17) || ((safe_mul_func_uint16_t_u_u(((*l_294) = ((*l_294) , g_245)), (1L == (*g_277)))) != l_316)) , 0xA627L)) == l_296[4]) && 4294967295UL) != (-10L))), 11)) , (*p_17)))
            {
                unsigned l_324 = 1UL;
                unsigned *l_329 = &g_144;
                unsigned *l_330 = &g_331;
                short *l_335 = &l_332;
                int *l_336 = &g_214;
                int l_361 = 8L;
                if (((*l_336) &= (safe_sub_func_int16_t_s_s(((*l_335) &= (((((void*)0 != &g_276[0]) | l_319) < (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((l_324 && (*l_294)), g_216)), g_183)) , l_333) != l_334)) != (**l_295))), g_183))))
                {
                    unsigned char l_337[9][6][3] = {{{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL}},{{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL}},{{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL}},{{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL}},{{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL},{0UL,0UL,1UL}},{{0UL,0UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL}},{{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL}},{{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL}},{{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL},{1UL,1UL,0UL}}};
                    int i, j, k;
                    (*l_336) = (l_337[3][5][1] <= (g_51 >= (*l_294)));
                    (*l_336) = ((*g_12) = l_338);
                }
                else
                {
                    int *l_339 = (void*)0;
                    (*l_295) = l_339;


                    for (g_216 = 0; (g_216 <= 4); g_216 += 1)
                    {
                        return l_329;


                    }
                    for (g_53 = 0; (g_53 != 35); g_53 = safe_add_func_uint32_t_u_u(g_53, 9))
                    {
                        const int **l_342[8][8] = {{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171},{(void*)0,(void*)0,&g_171,(void*)0,(void*)0,&g_171,&g_171,&g_171},{&g_171,(void*)0,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,(void*)0,(void*)0,&g_171},{&g_171,(void*)0,(void*)0,&g_171,(void*)0,(void*)0,&g_171,&g_171},{(void*)0,(void*)0,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171},{&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171,&g_171}};
                        int *l_347 = &g_245;
                        int **l_354[7][4][2] = {{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}},{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}},{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}},{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}},{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}},{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}},{{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294},{&l_294,&l_294}}};
                        char ***l_355 = &g_276[0];
                        int i, j, k;
                        g_171 = p_15;
                        (*p_17) = ((((void*)0 == l_339) <= ((*l_329) |= ((&g_104 == &l_316) == (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((*l_347) = func_32(g_183, g_60, &g_60)) , func_32(func_32((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_336), (*l_336))), 0xBAL)), l_352, l_353), (*l_294), &g_13[4])), g_13[4])), 0L))))) , (-5L));
                        p_16 = (p_17 = ((*l_295) = func_27(l_330, func_24(p_17, l_336), &g_13[3])));
                        (*l_355) = &g_182;
                    }


                }



                l_361 &= ((safe_mod_func_uint32_t_u_u(((l_352 , func_32(l_319, ((g_331 , (safe_sub_func_uint16_t_u_u((g_104 = l_319), (!1L)))) <= (*l_336)), func_27(g_360, ((*l_295) = &g_13[4]), p_16))) & 0x77L), l_319)) > (-1L));
            }
            else
            {
                short l_373 = 1L;
                for (l_332 = 0; (l_332 <= 1); l_332 += 1)
                {
                    const unsigned *l_363 = &g_364;
                    const unsigned **l_362 = &l_363;
                    int i;
                    (**l_295) = (g_61[l_332] == (g_367[1] = (l_365 = ((*l_362) = (void*)0))));

                    ;
                    ;
                    for (g_77 = 0; (g_77 <= 1); g_77 += 1)
                    {
                        int i, j;
                        l_296[0] ^= (safe_lshift_func_int8_t_s_u(((((g_43 ^ (g_75 | func_32(l_319, ((safe_mod_func_int16_t_s_s(l_319, ((*l_294) = (*l_294)))) < g_216), g_61[l_332]))) , g_214) , g_183) != 0xFC073423L), l_373));
                    }
                    l_319 |= (safe_rshift_func_int16_t_s_s((g_79 |= (*l_294)), g_183));
                }

                ;

            }



            ;

        }




    }
    else
    {
        char l_378[1];
        int **l_401[10] = {&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360,&g_360};
        unsigned l_424[3][3] = {{0x964D2C5AL,0x964D2C5AL,0x964D2C5AL},{0x0573BD24L,0x5EA06B9CL,0x0573BD24L},{0x964D2C5AL,0x964D2C5AL,0x964D2C5AL}};
        unsigned char **l_476 = &l_474;
        unsigned l_511 = 6UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_378[i] = 0xCDL;
        for (g_60 = (-21); (g_60 >= (-1)); g_60++)
        {
            int l_397 = 0x05D0E9E8L;
            int l_398[6] = {9L,9L,9L,9L,9L,9L};
            int **l_402 = &l_353;
            unsigned l_409 = 4294967294UL;
            unsigned l_450 = 0xD4CD9717L;
            int l_468 = 1L;
            unsigned char ** const l_496 = &l_474;
            unsigned char l_501 = 0x7FL;
            int i;
        }
        (*p_16) = ((*l_353) >= ((l_353 == p_15) >= ((*l_294) >= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((((*l_294) , (safe_lshift_func_uint8_t_u_u(((**l_476) = (safe_lshift_func_uint16_t_u_s(g_60, (safe_sub_func_uint16_t_u_u((((*g_277) = ((*l_294) ^ (safe_rshift_func_uint8_t_u_u(((((((safe_rshift_func_int8_t_s_s(((g_144 ^ ((((*l_353) != 0x81L) >= (*l_353)) & (*l_294))) , (-4L)), (*g_277))) , &g_60) == p_17) , g_368) <= g_183) ^ g_172), 4)))) > 253UL), (*l_294)))))), (*l_353)))) , 5L), 9)) ^ 2UL), 3)))));
    }




    (*l_528) = ((*l_353) , (g_61[1] = p_17));

    ;
    (*l_353) = (safe_lshift_func_int16_t_s_s(((**l_528) = ((g_366 >= ((4294967290UL || (safe_lshift_func_int16_t_s_s(((~(*l_353)) , (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((((((*l_537) = l_474) != g_540[0][7][5]) || ((*l_294) == (safe_mul_func_int8_t_s_s((*l_353), 1UL)))) , (*l_294)), (*l_353))), (*l_294)))), g_79))) >= (*g_12))) <= g_539[1][0])), 7));

    ;
    return (*l_528);


}







static const int * func_18(int * p_19, unsigned p_20, int * p_21, int * p_22, unsigned p_23)
{
    char *l_265[9] = {&g_183,&g_183,&g_183,&g_183,&g_183,&g_183,&g_183,&g_183,&g_183};
    char **l_266[4] = {&l_265[6],&l_265[6],&l_265[6],&l_265[6]};
    int l_269 = (-1L);
    short l_272 = 0xD7D2L;
    char ***l_275[8][7][3] = {{{&l_266[1],&l_266[3],&l_266[0]},{&l_266[0],(void*)0,(void*)0},{&l_266[0],&l_266[3],(void*)0},{(void*)0,&l_266[0],&l_266[3]},{&l_266[0],&l_266[1],&l_266[0]},{&l_266[0],&l_266[1],&l_266[3]},{&l_266[1],&l_266[0],(void*)0}},{{&l_266[0],&l_266[1],(void*)0},{(void*)0,&l_266[1],&l_266[0]},{&l_266[0],&l_266[0],&l_266[0]},{&l_266[1],&l_266[3],&l_266[0]},{&l_266[0],(void*)0,(void*)0},{&l_266[0],&l_266[3],(void*)0},{(void*)0,&l_266[0],&l_266[3]}},{{&l_266[0],&l_266[1],&l_266[0]},{&l_266[0],&l_266[1],&l_266[3]},{&l_266[1],&l_266[0],(void*)0},{&l_266[0],&l_266[1],(void*)0},{(void*)0,&l_266[1],&l_266[0]},{&l_266[0],&l_266[1],&l_266[2]},{&l_266[0],&l_266[0],&l_266[1]}},{{&l_266[0],(void*)0,&l_266[3]},{&l_266[1],&l_266[0],&l_266[0]},{&l_266[3],&l_266[1],&l_266[0]},{&l_266[1],&l_266[3],&l_266[1]},{&l_266[0],&l_266[0],&l_266[0]},{&l_266[0],(void*)0,&l_266[0]},{&l_266[2],&l_266[0],&l_266[3]}},{{&l_266[0],&l_266[3],&l_266[1]},{&l_266[2],&l_266[1],&l_266[2]},{&l_266[0],&l_266[0],&l_266[1]},{&l_266[0],(void*)0,&l_266[3]},{&l_266[1],&l_266[0],&l_266[0]},{&l_266[3],&l_266[1],&l_266[0]},{&l_266[1],&l_266[3],&l_266[1]}},{{&l_266[0],&l_266[0],&l_266[0]},{&l_266[0],(void*)0,&l_266[0]},{&l_266[2],&l_266[0],&l_266[3]},{&l_266[0],&l_266[3],&l_266[1]},{&l_266[2],&l_266[1],&l_266[2]},{&l_266[0],&l_266[0],&l_266[1]},{&l_266[0],(void*)0,&l_266[3]}},{{&l_266[1],&l_266[0],&l_266[0]},{&l_266[3],&l_266[1],&l_266[0]},{&l_266[1],&l_266[3],&l_266[1]},{&l_266[0],&l_266[0],&l_266[0]},{&l_266[0],(void*)0,&l_266[0]},{&l_266[2],&l_266[0],&l_266[3]},{&l_266[0],&l_266[3],&l_266[1]}},{{&l_266[2],&l_266[1],&l_266[2]},{&l_266[0],&l_266[0],&l_266[1]},{&l_266[0],&l_266[0],&l_266[0]},{(void*)0,&l_266[0],&l_266[0]},{&l_266[0],(void*)0,(void*)0},{(void*)0,&l_266[1],(void*)0},{&l_266[0],(void*)0,(void*)0}}};
    short *l_286 = &g_79;
    int **l_291 = &g_61[1];
    int i, j, k;
    (*p_19) |= (((*l_286) = ((g_182 = l_265[6]) == ((((((safe_add_func_int8_t_s_s((((p_20 < ((p_20 && ((g_51 && 0x7095L) != l_269)) ^ (*g_12))) > p_20) || p_20), l_269)) && g_13[4]) || g_183) <= 0xE6L) ^ p_20) , (void*)0))) , 0xA066732FL);
    for (g_214 = 0; (g_214 == (-25)); g_214--)
    {
        int *l_289 = &g_13[4];
        int **l_290 = &g_61[0];
        (*l_290) = l_289;
    }
    (*l_291) = func_24(&l_269, ((*p_22) , &l_269));
    (*p_19) ^= (*g_12);
    return p_21;


}







static int * func_24(int * p_25, int * const p_26)
{
    int l_257 = (-1L);
    unsigned *l_258 = &g_144;
    unsigned short l_259 = 0xF7C0L;
    unsigned char *l_262 = &g_75;
    int *l_263 = &g_214;
    (*l_263) |= (l_257 == ((*l_262) = ((((*p_25) == (((*l_258) = g_104) != l_257)) | l_259) , (safe_rshift_func_int16_t_s_u(l_259, 2)))));
    return &g_60;


}







static int * func_27(int * p_28, int * p_29, int * p_30)
{
    int l_226[2][4][4] = {{{(-9L),(-4L),(-9L),(-9L)},{(-4L),(-4L),7L,(-4L)},{(-4L),(-9L),(-9L),(-4L)},{(-9L),(-4L),(-9L),(-9L)}},{{(-4L),(-4L),7L,(-4L)},{(-4L),(-9L),(-9L),(-4L)},{(-9L),(-4L),(-9L),(-9L)},{(-4L),(-4L),7L,(-4L)}}};
    short *l_240[5] = {&g_79,&g_79,&g_79,&g_79,&g_79};
    int *l_241 = &g_13[4];
    int *l_253[10][6];
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
            l_253[i][j] = &g_60;
    }
    if ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(g_60, 8UL)), ((((safe_rshift_func_int16_t_s_s(l_226[0][1][2], (((((safe_rshift_func_int16_t_s_s((g_79 ^= ((l_226[0][2][2] ^ ((safe_lshift_func_int8_t_s_u((l_226[0][2][0] | ((((safe_unary_minus_func_uint32_t_u(g_13[0])) , (~((safe_rshift_func_int8_t_s_s(l_226[0][1][2], ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_226[1][3][1] && (safe_rshift_func_uint16_t_u_s(0xCFF9L, l_226[0][1][2]))) , l_226[0][1][2]), l_226[0][1][1])), l_226[0][3][1])) && l_226[0][2][0]))) && 0x37E6L))) == l_226[0][1][2]) == (*g_182))), l_226[0][2][3])) < 0xF860L)) <= 9L)), 1)) > 0UL) && g_60) <= 0x159466B4L) < (*g_182)))) & 0x0C50820BL) > l_226[0][1][2]) && 0x670FL))))
    {
        int **l_242 = &l_241;
        (*l_242) = l_241;
        return &g_13[0];


    }
    else
    {
        int *l_243 = (void*)0;
        int *l_244 = &g_245;
        unsigned l_246 = 0xF1D98662L;
        int l_256[1][8][9] = {{{0x921B15B0L,(-5L),0x74A6890BL,0x2B777069L,0xE080C69CL,0L,0L,0xE080C69CL,0x2B777069L},{0x921B15B0L,0x57646124L,0x921B15B0L,0L,0x2A3724DFL,0x74A6890BL,0x87E30889L,0x87E30889L,0x74A6890BL},{0x74A6890BL,(-5L),0x921B15B0L,(-5L),0x74A6890BL,0x2B777069L,0xE080C69CL,0L,0L},{(-5L),0xE5F2F444L,0x74A6890BL,0L,0x74A6890BL,0xE5F2F444L,(-5L),0x2A3724DFL,0x0802794FL},{0x87E30889L,0x0802794FL,(-5L),0x2B777069L,0x2A3724DFL,0x2B777069L,(-5L),0x0802794FL,0xE5F2F444L},{(-5L),0L,0xE5F2F444L,0x87E30889L,0x57646124L,0x2B777069L,0x57646124L,0x87E30889L,0xE5F2F444L},{0x57646124L,0x57646124L,(-5L),0xE080C69CL,0x921B15B0L,0x2A3724DFL,0xE5F2F444L,0x2A3724DFL,0x921B15B0L},{(-5L),0x57646124L,0x57646124L,(-5L),0xE080C69CL,0x921B15B0L,0x2A3724DFL,0xE5F2F444L,0x2A3724DFL}}};
        int i, j, k;
        l_256[0][7][0] &= ((((*l_244) = 0x0E40B48EL) , (l_246 <= (((g_43 || (safe_sub_func_int32_t_s_s(0x74614B01L, 0xF83CC13FL))) & (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((void*)0 != l_253[5][5]), (safe_mul_func_int16_t_s_s(g_214, l_246)))), (*l_241)))) ^ 1UL))) >= 0xAF79L);
        (*g_12) = (*p_30);
    }
    return &g_13[3];


}







static unsigned func_32(unsigned p_33, unsigned short p_34, int * p_35)
{
    const char *l_184 = &g_183;
    char l_185 = (-1L);
    short *l_188 = &g_79;
    unsigned l_189[5] = {0x17B851E1L,0x17B851E1L,0x17B851E1L,0x17B851E1L,0x17B851E1L};
    int *l_190 = &g_60;
    unsigned l_205 = 0x95AA9AF5L;
    unsigned char *l_206 = (void*)0;
    unsigned char *l_207[10][10][2] = {{{&g_53,&g_75},{&g_77,&g_53},{&g_75,&g_75},{&g_75,&g_53},{&g_77,&g_75},{&g_53,&g_75},{&g_75,&g_75},{&g_53,&g_77},{&g_77,&g_51},{&g_75,&g_75}},{{&g_75,&g_51},{&g_77,&g_77},{&g_53,&g_75},{&g_75,&g_75},{&g_53,&g_75},{&g_77,&g_53},{&g_75,&g_75},{&g_75,&g_53},{&g_77,&g_75},{&g_53,&g_75}},{{&g_75,&g_75},{&g_53,&g_77},{&g_77,&g_51},{&g_75,&g_75},{&g_75,&g_51},{&g_77,&g_77},{&g_53,&g_75},{&g_75,&g_75},{&g_53,&g_75},{&g_77,&g_53}},{{&g_75,&g_75},{&g_75,(void*)0},{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_75},{(void*)0,&g_75},{&g_75,&g_53},{&g_75,&g_53},{&g_75,&g_53},{&g_75,&g_75}},{{(void*)0,&g_75},{&g_53,&g_75},{(void*)0,&g_75},{&g_75,(void*)0},{&g_75,&g_75},{&g_75,(void*)0},{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_75},{(void*)0,&g_75}},{{&g_75,&g_53},{&g_75,&g_53},{&g_75,&g_53},{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_75},{(void*)0,&g_75},{&g_75,(void*)0},{&g_75,&g_75},{&g_75,(void*)0}},{{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_75},{(void*)0,&g_75},{&g_75,&g_53},{&g_75,&g_53},{&g_75,&g_53},{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_75}},{{(void*)0,&g_75},{&g_75,(void*)0},{&g_75,&g_75},{&g_75,(void*)0},{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_75},{(void*)0,&g_75},{&g_75,&g_53},{&g_53,(void*)0}},{{&g_53,&g_75},{(void*)0,(void*)0},{&g_75,&g_51},{(void*)0,&g_53},{&g_75,&g_75},{(void*)0,&g_75},{&g_53,&g_53},{&g_53,&g_75},{(void*)0,&g_75},{&g_75,&g_53}},{{(void*)0,&g_51},{&g_75,(void*)0},{(void*)0,&g_75},{&g_53,(void*)0},{&g_53,&g_75},{(void*)0,(void*)0},{&g_75,&g_51},{(void*)0,&g_53},{&g_75,&g_75},{(void*)0,&g_75}}};
    int l_208 = (-1L);
    unsigned l_209 = 1UL;
    char *l_210 = (void*)0;
    char *l_211 = &l_185;
    int *l_212 = (void*)0;
    int *l_213 = &g_214;
    int i, j, k;
    (*l_190) ^= (safe_add_func_uint16_t_u_u((p_33 , (safe_mod_func_int16_t_s_s(((*l_188) = g_13[3]), (-6L)))), l_189[2]));
    (*l_213) |= (p_33 ^ (safe_mul_func_int8_t_s_s((+(((p_33 > g_172) != (((safe_rshift_func_int8_t_s_s(((*l_211) ^= ((*g_182) = (safe_mod_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((*p_35) , (((((l_209 = (((*l_188) = ((7UL == ((safe_mul_func_int8_t_s_s(((l_208 &= (p_34 , (safe_sub_func_uint8_t_u_u((*l_190), p_34)))) && (*l_190)), 7UL)) & (*l_190))) < 0xFCL)) && 0x22A3L)) & (*p_35)) || (*l_190)) & 0x2EL) == (*l_190))), 5)), p_33)) || 0x3F918541L) || p_34) | 0xACL), p_33)))), (*l_190))) != (*p_35)) , (*p_35))) > p_33)), 254UL)));
    return p_34;
}







static unsigned char func_36(unsigned char p_37, short p_38, int * p_39, short p_40)
{
    int l_58 = 0x460D54BAL;
    short l_84 = (-1L);
    int l_101 = (-1L);
    unsigned char l_102 = 0xD9L;
    for (p_40 = 0; (p_40 >= (-18)); p_40--)
    {
        unsigned l_72[4];
        int l_106 = 0x99277861L;
        short l_108 = 0x5B1AL;
        int l_126 = (-1L);
        int **l_134 = &g_61[1];
        short l_173 = (-6L);
        int i;
        for (i = 0; i < 4; i++)
            l_72[i] = 9UL;
        for (p_38 = (-2); (p_38 > (-19)); p_38 = safe_sub_func_int16_t_s_s(p_38, 1))
        {
            unsigned l_48 = 0xE3585CA2L;
            unsigned char *l_66 = &g_53;
            unsigned char *l_67 = &g_51;
            unsigned char *l_73 = (void*)0;
            unsigned char *l_74 = &g_75;
            int *l_76 = &g_13[2];
            short *l_78 = &g_79;
            int *l_80 = (void*)0;
            int l_81 = 0x3F0F592BL;
            unsigned l_97 = 0x408DBE58L;
            int l_107 = 0x9E9296D7L;
            int **l_125 = (void*)0;
            if (l_48)
            {
                char l_49[7] = {0xADL,0xADL,0xADL,0xADL,0xADL,0xADL,0xADL};
                unsigned char *l_50 = &g_51;
                unsigned char *l_52 = &g_53;
                int *l_57 = &g_13[4];
                int **l_56 = &l_57;
                int *l_59 = &g_60;
                int i;
                (*l_59) = (((((l_49[0] & ((((*l_50) ^= g_13[4]) ^ (((*l_52) = p_37) != (((((safe_rshift_func_uint16_t_u_s((p_40 , g_13[4]), 3)) , ((*l_56) = (p_38 , (void*)0))) != (void*)0) , p_39) != p_39))) | g_13[4])) == p_40) < l_48) == p_38) == l_58);

                ;
                if (l_58)
                    break;
            }
            else
            {
                g_61[1] = p_39;
            }
            l_81 ^= (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s((l_48 , (p_38 <= (l_58 , ((*l_67) = ((*l_66) = g_43))))), ((*l_78) &= (((safe_rshift_func_int8_t_s_u(p_38, ((g_77 = ((safe_rshift_func_uint8_t_u_u(((l_72[3] >= ((((((*l_74) = l_72[2]) , (void*)0) != (void*)0) , l_76) != l_76)) <= (-1L)), g_60)) >= 7UL)) & p_37))) == 65535UL) & 0UL)))) ^ (*p_39)) > 4UL), 3));
            for (g_75 = 0; (g_75 <= 3); g_75 += 1)
            {
                char *l_100[7];
                int *l_103 = &l_81;
                int *l_105[1];
                int i;
                for (i = 0; i < 7; i++)
                    l_100[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_105[i] = &g_60;
                l_81 = ((safe_lshift_func_int8_t_s_s(l_72[g_75], g_51)) >= l_84);
                l_107 ^= (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_106 = ((safe_sub_func_uint8_t_u_u((l_97 || (((4294967287UL & (g_13[4] <= (g_104 = (1UL < (((((safe_mul_func_int8_t_s_s((l_101 &= g_77), (0x99C48247L & ((l_102 , g_51) , ((*l_103) = (!(*p_39))))))) , p_37) > 0UL) , (void*)0) == &g_61[1]))))) && g_77) ^ g_53)), 1L)) != g_43)) & p_40) , 0UL), p_38)) ^ g_77), p_38)), l_58)), g_13[4])) , 1UL), l_58));
                l_108 = (*p_39);
                l_126 ^= ((((safe_sub_func_int8_t_s_s(g_60, (l_101 == (p_38 > (p_37 && (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((~(((p_38 , ((((((+((safe_add_func_uint16_t_u_u((g_53 | (safe_mul_func_uint8_t_u_u(g_13[4], ((safe_add_func_int32_t_s_s(l_106, (safe_sub_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((*p_39), 0x748FAD17L)) , l_125) == &p_39) & g_51), g_104)))) , 0xB6L)))), p_37)) < (*l_103))) <= (*g_12)) , 0x2D9A1771L) , 0x9FL) < (*l_76)) == p_40)) >= (*l_76)) != p_38)), 0)), l_106))))))) , g_13[4]) & 5L) == p_40);
            }
        }
        for (l_101 = (-30); (l_101 < 5); l_101 = safe_add_func_uint16_t_u_u(l_101, 2))
        {
            unsigned short l_131 = 0x3758L;
            int *l_133 = &g_60;
            (*l_133) = ((safe_rshift_func_uint8_t_u_u(l_131, (safe_unary_minus_func_int16_t_s(l_101)))) <= p_37);
        }
        (*l_134) = &g_13[4];
        for (l_106 = 0; (l_106 == (-11)); l_106 = safe_sub_func_uint16_t_u_u(l_106, 9))
        {
            unsigned *l_143 = &g_144;
            const int l_163 = 0x7A7769A1L;
            const int *l_169 = &g_13[2];
            const int **l_168 = &l_169;
            for (g_53 = 0; (g_53 == 19); g_53 = safe_add_func_uint16_t_u_u(g_53, 9))
            {
                l_126 = 0x7ED616DDL;
            }
            l_101 = (safe_add_func_int8_t_s_s(0x2CL, ((((safe_mul_func_int16_t_s_s((g_43 <= 0x71AFL), (((*l_143) = (g_13[0] , 4294967295UL)) ^ (((p_37 != (safe_lshift_func_uint16_t_u_s(1UL, 4))) , p_37) , (safe_mod_func_int16_t_s_s((p_38 ^= (g_79 = 0xA584L)), g_77)))))) != (*p_39)) , g_75) , p_37)));
            if ((*g_12))
            {
                int l_152 = (-3L);
                for (g_77 = 10; (g_77 <= 34); g_77 = safe_add_func_uint16_t_u_u(g_77, 4))
                {
                    int *l_151 = &g_60;
                    (*l_151) &= 9L;
                    l_152 |= ((*l_151) && (*p_39));
                    for (g_75 = (-25); (g_75 > 31); g_75 = safe_add_func_uint32_t_u_u(g_75, 8))
                    {
                        if ((*p_39))
                            break;
                    }
                }
                for (l_101 = 0; (l_101 <= 1); l_101 += 1)
                {
                    for (g_104 = 0; (g_104 <= 1); g_104 += 1)
                    {
                        int *l_164 = &l_126;
                        short *l_165[9] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
                        int i;
                        l_173 = (((-9L) != (+(((*l_143) = (safe_sub_func_int16_t_s_s(((g_61[g_104] == (void*)0) != (((((safe_sub_func_int32_t_s_s(l_72[l_101], ((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(l_163, (((l_152 != (p_38 ^= (((*l_164) &= 0xF69CA31EL) | l_163))) == (safe_mul_func_int8_t_s_s(((g_170 = l_168) == (void*)0), g_51))) < (**l_134)))) <= p_37), g_13[4])) , (-2L)))) >= p_37) || 0xAB705B54L) , p_38) & g_53)), p_40))) < 4294967295UL))) | (**l_134));

                        ;
                        return g_13[2];


                    }
                }
                (*l_168) = (*g_170);

                ;
            }
            else
            {
                return g_172;
            }

            ;
        }
    }


    return g_172;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_539[i][j], "g_539[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
