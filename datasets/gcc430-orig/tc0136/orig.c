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



static char g_15 = 4L;
static short g_19[6] = {0L,0L,0L,0L,0L,0L};
static int g_36 = 7L;
static int *g_35[1] = {&g_36};
static unsigned long long g_54[5][2] = {{0xED863780D7777BABLL,0xC5C2F002739425A3LL},{2UL,2UL},{2UL,0xC5C2F002739425A3LL},{0xED863780D7777BABLL,0xE5685E9D070FEEA3LL},{0xC5C2F002739425A3LL,0xE5685E9D070FEEA3LL}};
static unsigned long long g_56 = 18446744073709551614UL;
static short g_68 = 0x2CEBL;
static int g_71 = 0x7840EF1FL;
static int g_72 = 0x3F8C547FL;
static volatile int g_73 = 0xE1947684L;
static int g_74 = 1L;
static short **g_75 = (void*)0;
static unsigned char g_82 = 0x3FL;
static short g_95[1] = {0x1226L};
static int *g_103 = &g_72;
static int g_115 = 0x1FA6E799L;
static unsigned long long g_129 = 0x88215CFFAB6C5F39LL;
static unsigned g_131 = 4294967289UL;
static char g_149 = 0x41L;
static long long g_151 = 0x60905539D5B4B6D2LL;
static volatile int g_163 = 0x04331347L;
static const short g_192 = (-1L);
static int *g_225 = (void*)0;
static volatile long long **g_250 = (void*)0;
static volatile long long ***g_249 = &g_250;
static unsigned short g_272 = 7UL;
static const int g_322 = 0x5BA0CF04L;
static long long ***g_361 = (void*)0;
static int g_367 = 0xA410E630L;
static unsigned g_390 = 4294967295UL;
static const short g_448 = (-1L);
static const short *g_447 = &g_448;
static volatile unsigned long long g_463 = 0UL;
static volatile unsigned long long *g_462[8] = {&g_463,&g_463,&g_463,&g_463,&g_463,&g_463,&g_463,&g_463};
static unsigned char *g_470 = &g_82;
static unsigned char **g_469 = &g_470;
static unsigned char ***g_468 = &g_469;
static unsigned char ***g_472[6][4][2] = {{{&g_469,&g_469},{&g_469,(void*)0},{&g_469,(void*)0},{&g_469,&g_469}},{{&g_469,&g_469},{&g_469,&g_469},{&g_469,(void*)0},{&g_469,(void*)0}},{{&g_469,&g_469},{&g_469,&g_469},{(void*)0,&g_469},{&g_469,(void*)0}},{{&g_469,(void*)0},{&g_469,&g_469},{(void*)0,(void*)0},{(void*)0,&g_469}},{{&g_469,(void*)0},{&g_469,(void*)0},{&g_469,&g_469},{(void*)0,(void*)0}},{{(void*)0,&g_469},{&g_469,(void*)0},{&g_469,(void*)0},{&g_469,&g_469}}};
static unsigned char g_504[5][9] = {{0xB9L,0x88L,0x27L,0xB9L,255UL,255UL,0xB9L,0x27L,0x88L},{251UL,0UL,4UL,251UL,0xAEL,0xAEL,251UL,4UL,0UL},{0xB9L,0x88L,0x27L,0xB9L,255UL,255UL,0xB9L,0x27L,0x88L},{251UL,0UL,4UL,251UL,0xAEL,0xAEL,251UL,4UL,0UL},{0xB9L,0x88L,0x27L,0xB9L,255UL,255UL,0xB9L,0x27L,0x88L}};
static unsigned long long g_512[2] = {0x5EB47C74CFCB436FLL,0x5EB47C74CFCB436FLL};
static int **g_526 = &g_103;
static long long ****g_575[8] = {&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361};
static unsigned long long *g_650 = &g_54[4][1];
static unsigned long long **g_649 = &g_650;
static unsigned long long ***g_648 = &g_649;
static int *g_662 = &g_74;
static short *g_702 = &g_95[0];
static unsigned g_705 = 0x042B4CBFL;
static volatile unsigned short g_731 = 0x4D24L;
static unsigned long long g_770[1][10][3] = {{{0UL,0x7DD9850256967627LL,0UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0UL,0x7DD9850256967627LL,0UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0UL,0x7DD9850256967627LL,0UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0UL,0x7DD9850256967627LL,0UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0UL,0x7DD9850256967627LL,0UL},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL}}};
static unsigned char **g_785 = &g_470;
static volatile int *g_789 = &g_73;
static unsigned g_825 = 0x7B3F807AL;
static int *g_829[4] = {&g_71,&g_71,&g_71,&g_71};
static const int g_937 = 1L;
static const int *g_936 = &g_937;
static const int **g_935 = &g_936;
static const int ***g_934 = &g_935;
static int g_1000 = (-1L);
static unsigned short g_1014 = 65533UL;
static unsigned short g_1016[4][9][7] = {{{1UL,1UL,0xB9C4L,1UL,1UL,1UL,65535UL},{65535UL,0xB641L,0UL,65532UL,0x44D6L,0x8A27L,1UL},{0xB641L,65527UL,0x44D6L,65535UL,0xF8ECL,65533UL,65535UL},{65535UL,65532UL,0x14A5L,0xF8ECL,0x9114L,1UL,0xA6F7L},{1UL,0xF9F5L,0x8A27L,0x2A5CL,65535UL,0UL,1UL},{0x7259L,65535UL,0UL,0xF9F5L,9UL,0UL,0UL},{1UL,0UL,65535UL,0x0838L,9UL,0xB9C4L,0UL},{65532UL,0xF1C0L,65532UL,0x46A4L,65535UL,0x8A27L,0xF032L},{65535UL,0x9114L,0x7259L,0x7259L,0x9114L,65535UL,0x1D26L}},{{0UL,0xF032L,0UL,9UL,0xF8ECL,65535UL,0x9114L},{0UL,65535UL,65532UL,0x2A5CL,65527UL,1UL,0xF9F5L},{0x96BEL,65535UL,0x422FL,0x96BEL,1UL,0x7037L,0UL},{0xF1C0L,65535UL,65535UL,0x44D6L,0x78A6L,0UL,0UL},{0x1D26L,0x0DD0L,0UL,65533UL,65533UL,0xB9C4L,0x7259L},{65533UL,0x8A27L,0x9AD9L,0x7F73L,0x3BECL,0xB9C4L,65527UL},{0x477DL,0xB641L,9UL,65535UL,0x1D26L,0UL,65535UL},{65533UL,0x7037L,65535UL,0xF9F5L,65535UL,0x7037L,65533UL},{65535UL,65533UL,0x96BEL,65527UL,0x8A27L,1UL,0x422FL}},{{0UL,0UL,0UL,65535UL,0x78A6L,65532UL,0x1D26L},{1UL,0x7F73L,0x96BEL,0x2958L,0x0DD0L,65532UL,0xB641L},{0x9AD9L,0x2958L,65535UL,0xB9C4L,0xF9F5L,0UL,65535UL},{0x2958L,0UL,9UL,0x44D6L,0xF1C0L,1UL,0x44D6L},{0xB641L,0xB9C4L,0x9AD9L,0xF1C0L,1UL,0x14A5L,0x44D6L},{0x0DD0L,65532UL,0UL,65532UL,0x44D6L,0x9AD9L,65535UL},{0UL,0x477DL,0x2A5CL,0UL,0UL,0x2A5CL,0x477DL},{0xF9F5L,65535UL,0x7037L,65533UL,0x7E83L,0x14A5L,1UL},{1UL,0xB641L,65535UL,0x96BEL,0x8A27L,0x5C32L,0x7037L}},{{0x44D6L,65535UL,0xF8ECL,65533UL,65535UL,9UL,0UL},{0x3BECL,0x7037L,0xB9C4L,0UL,0x14A5L,0x0DD0L,65535UL},{0x0DD0L,0x8A27L,65535UL,1UL,0x7259L,0x422FL,0UL},{0UL,65532UL,0UL,0UL,0xB641L,0x46A4L,0x1D26L},{0UL,0x422FL,1UL,0x8A27L,65527UL,0x96BEL,65533UL},{0x0DD0L,0xB641L,0x5C32L,1UL,0x3BECL,1UL,0x5C32L},{0x3BECL,0x3BECL,1UL,0x78A6L,0xF1C0L,65527UL,0x7259L},{0x44D6L,65532UL,0UL,65532UL,0x0DD0L,0x96BEL,65535UL},{1UL,0UL,0x96BEL,0UL,0xF1C0L,0x7E83L,1UL}}};
static unsigned short g_1029 = 65532UL;
static int g_1093 = 0xFBBBE108L;
static int *g_1126 = &g_115;
static unsigned char g_1156[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
static const short **g_1200 = (void*)0;
static const short ***g_1199[4][6][7] = {{{&g_1200,&g_1200,(void*)0,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,(void*)0,(void*)0,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,(void*)0,(void*)0},{&g_1200,&g_1200,(void*)0,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,(void*)0,&g_1200,(void*)0,&g_1200,&g_1200,&g_1200}},{{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,(void*)0,&g_1200,&g_1200},{&g_1200,(void*)0,&g_1200,&g_1200,(void*)0,&g_1200,&g_1200}},{{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{(void*)0,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,(void*)0,&g_1200,&g_1200,&g_1200},{&g_1200,(void*)0,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,(void*)0,&g_1200,&g_1200,&g_1200,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200}},{{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,&g_1200},{(void*)0,&g_1200,&g_1200,&g_1200,&g_1200,(void*)0,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,&g_1200,(void*)0,&g_1200},{&g_1200,&g_1200,&g_1200,&g_1200,(void*)0,(void*)0,(void*)0},{&g_1200,&g_1200,&g_1200,&g_1200,(void*)0,&g_1200,&g_1200},{&g_1200,(void*)0,&g_1200,&g_1200,(void*)0,&g_1200,(void*)0}}};
static short ****g_1213 = (void*)0;
static short *g_1218[4][6] = {{(void*)0,&g_68,(void*)0,&g_68,(void*)0,&g_68},{&g_95[0],&g_68,&g_95[0],&g_68,&g_95[0],&g_68},{(void*)0,&g_68,(void*)0,&g_68,(void*)0,&g_68},{&g_95[0],&g_68,&g_95[0],&g_68,&g_95[0],&g_68}};
static short ** const g_1217 = &g_1218[1][5];
static short ** const *g_1216 = &g_1217;
static short ** const **g_1215 = &g_1216;
static char g_1229[2] = {0x5AL,0x5AL};
static short *g_1249 = (void*)0;
static int *g_1286[8] = {&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115,&g_115};
static int *g_1293 = &g_1000;
static int *g_1294 = &g_1093;
static volatile char g_1326[4] = {0x00L,0x00L,0x00L,0x00L};
static int g_1331 = 9L;
static int ***g_1335[6][1][1] = {{{&g_526}},{{&g_526}},{{&g_526}},{{&g_526}},{{&g_526}},{{&g_526}}};
static int ****g_1334[9][1] = {{&g_1335[3][0][0]},{&g_1335[1][0][0]},{&g_1335[3][0][0]},{&g_1335[1][0][0]},{&g_1335[3][0][0]},{&g_1335[1][0][0]},{&g_1335[3][0][0]},{&g_1335[1][0][0]},{&g_1335[3][0][0]}};
static short g_1340 = 1L;
static unsigned long long ****g_1357 = (void*)0;
static const char g_1362[7][2][4] = {{{1L,0L,0L,1L},{0xD3L,0L,0x9DL,0L}},{{0L,0x6FL,0x9DL,0x9DL},{0xD3L,0xD3L,0L,0x9DL}},{{1L,0x6FL,1L,0L},{1L,0L,0L,1L}},{{0xD3L,0L,0x9DL,0L},{0L,0x6FL,0x9DL,0x9DL}},{{0xD3L,0xD3L,0L,0x9DL},{1L,0x6FL,1L,0L}},{{1L,0L,0L,1L},{0xD3L,0L,0x9DL,0L}},{{0L,0x6FL,0x9DL,0x9DL},{0xD3L,0xD3L,0L,0x9DL}}};
static long long g_1431 = 0x9623387ABFD3E54ELL;



static unsigned long long func_1(void);
static unsigned long long func_4(int p_5, unsigned char p_6, unsigned p_7, unsigned p_8);
static unsigned short func_20(short * const p_21, unsigned long long p_22, short * p_23);
static short * func_24(int p_25, long long p_26, unsigned long long p_27, unsigned p_28);
static int * func_29(int * p_30, const char p_31, unsigned char p_32, short p_33, const unsigned p_34);
static unsigned char func_39(int * p_40, int * p_41, long long p_42);
static int * func_44(int * p_45, int * p_46);
static int * func_47(int * p_48, const unsigned long long p_49, int * p_50, int p_51);
static unsigned long long func_60(short * p_61, unsigned char p_62, short p_63, int p_64);
static short * func_65(short * p_66);
static unsigned long long func_1(void)
{
    unsigned short l_16[10][5][1] = {{{0x9382L},{65531UL},{0x9382L},{9UL},{0x3860L}},{{9UL},{0x9382L},{65531UL},{0x9382L},{9UL}},{{0x3860L},{9UL},{0x9382L},{65531UL},{0x9382L}},{{9UL},{0x3860L},{9UL},{0x9382L},{65531UL}},{{0x9382L},{9UL},{0x3860L},{9UL},{0x9382L}},{{65531UL},{0x9382L},{9UL},{0x3860L},{9UL}},{{0x9382L},{65531UL},{0x9382L},{9UL},{0x3860L}},{{9UL},{0x9382L},{65531UL},{0x9382L},{9UL}},{{0x3860L},{9UL},{0x9382L},{65531UL},{0x9382L}},{{9UL},{0x3860L},{9UL},{0x9382L},{65531UL}}};
    int l_17 = 0x504DBF0CL;
    short *l_18 = &g_19[3];
    short **l_1336 = (void*)0;
    short **l_1337[6][8] = {{&g_1249,&g_1249,&l_18,&g_1249,&g_1249,&l_18,&g_1249,&g_1249},{&l_18,&g_1249,&l_18,(void*)0,&g_1249,&g_1218[1][5],&g_1218[1][5],&g_1249},{&g_1249,&g_1218[1][5],&g_1218[1][5],&g_1249,(void*)0,&l_18,&g_1249,&l_18},{&g_1249,&g_1249,&l_18,&g_1249,&g_1249,&l_18,&g_1249,&g_1249},{&l_18,&g_1249,(void*)0,(void*)0,&g_1249,&l_18,&g_1218[1][5],&g_1249},{&g_1249,&g_1218[1][5],(void*)0,&g_1249,(void*)0,&g_1218[1][5],&g_1249,&l_18}};
    short **l_1338 = (void*)0;
    short *l_1339[2][7][7] = {{{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,(void*)0,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,(void*)0,(void*)0,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,(void*)0,&g_1340},{&g_1340,&g_1340,&g_1340,(void*)0,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340}},{{&g_1340,(void*)0,&g_1340,&g_1340,(void*)0,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,(void*)0,&g_1340,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,(void*)0},{&g_1340,&g_1340,&g_1340,(void*)0,&g_1340,&g_1340,&g_1340},{&g_1340,&g_1340,&g_1340,&g_1340,(void*)0,&g_1340,&g_1340}}};
    int l_1341 = 0x80C659A6L;
    int *l_1576[10][4][3] = {{{(void*)0,&g_367,&g_72},{&g_71,(void*)0,&g_74},{&l_1341,(void*)0,(void*)0},{&g_71,&g_367,&g_74}},{{&g_367,&g_367,&g_115},{(void*)0,&g_74,(void*)0},{(void*)0,(void*)0,&g_72},{&g_74,&g_74,&g_36}},{{&g_367,&g_367,&g_71},{&g_71,&g_367,&l_1341},{&g_115,&g_36,&g_367},{&l_1341,&g_71,&l_1341}},{{&g_36,(void*)0,&g_71},{(void*)0,&g_71,&g_36},{&g_36,&g_367,&g_72},{&g_367,(void*)0,(void*)0}},{{&g_36,&l_1341,&g_115},{(void*)0,&g_115,&g_74},{&g_36,&g_115,&g_36},{&l_1341,&g_36,&l_1341}},{{&g_115,&g_115,(void*)0},{&g_71,&g_115,(void*)0},{&g_367,&l_1341,(void*)0},{&g_74,(void*)0,&g_115}},{{(void*)0,&g_367,(void*)0},{(void*)0,&g_71,(void*)0},{&g_367,(void*)0,(void*)0},{(void*)0,&g_71,&l_1341}},{{(void*)0,&g_36,&g_36},{(void*)0,&g_367,&g_74},{&g_367,&g_367,&g_115},{(void*)0,&g_74,(void*)0}},{{(void*)0,(void*)0,&g_72},{&g_74,&g_74,&g_36},{&g_367,&g_367,&g_71},{&g_71,&g_367,(void*)0}},{{&g_72,&l_1341,(void*)0},{(void*)0,&l_1341,(void*)0},{&g_367,&g_36,&g_115},{&g_71,(void*)0,(void*)0}}};
    unsigned l_1577 = 5UL;
    char l_1578[9][7] = {{0x4EL,0x40L,0L,0xADL,(-6L),1L,1L},{(-6L),0x40L,0xC8L,0x40L,(-6L),0x70L,(-9L)},{(-6L),0xADL,0L,0x40L,0x4EL,1L,(-9L)},{0x4EL,0x40L,0L,0xADL,(-6L),1L,1L},{(-6L),0x40L,0xC8L,0x40L,(-6L),0x70L,(-9L)},{(-6L),0xADL,0L,0x40L,0x4EL,1L,(-9L)},{0x4EL,0x40L,0L,0xADL,(-6L),1L,1L},{(-6L),0x40L,0xC8L,0x40L,(-6L),0x70L,(-9L)},{(-6L),0xADL,0L,0x40L,0x4EL,1L,(-9L)}};
    int i, j, k;
    l_1577 = (safe_div_func_uint64_t_u_u((+func_4((2UL < ((0x9B8BL > (((l_17 = ((**g_469) = (~((safe_mul_func_int16_t_s_s(0xA82AL, ((*l_18) = (safe_div_func_uint64_t_u_u(0x38B6B0E1B1B552BFLL, (safe_mod_func_uint64_t_u_u((l_16[3][4][0] = g_15), l_17))))))) > func_20(((*g_1217) = func_24(l_17, l_17, g_15, g_15)), l_17, l_1339[1][4][5]))))) > l_1341) || 0L)) > g_770[0][4][0])), l_1341, g_1229[1], g_937)), l_1341));
    return l_1578[3][2];
}







static unsigned long long func_4(int p_5, unsigned char p_6, unsigned p_7, unsigned p_8)
{
    int *l_1342 = &g_367;
    int **l_1343 = &g_225;
    unsigned long long ** const **l_1356 = (void*)0;
    short l_1358 = 0x374AL;
    unsigned long long l_1372[4];
    int l_1468[8][2][4] = {{{0x5D2F96FAL,2L,0x5D2F96FAL,0xB28E2CE8L},{0x10E22048L,2L,0x973526BEL,2L}},{{0x10E22048L,0xB28E2CE8L,0x5D2F96FAL,2L},{0x5D2F96FAL,2L,0x5D2F96FAL,0xB28E2CE8L}},{{0x10E22048L,2L,0x973526BEL,2L},{0x10E22048L,0xB28E2CE8L,0x5D2F96FAL,2L}},{{0x5D2F96FAL,2L,0x5D2F96FAL,0xB28E2CE8L},{0x10E22048L,2L,0x973526BEL,2L}},{{0x10E22048L,0xB28E2CE8L,0x5D2F96FAL,2L},{0x5D2F96FAL,2L,0x5D2F96FAL,0xB28E2CE8L}},{{0x10E22048L,2L,0x973526BEL,2L},{0x10E22048L,0xB28E2CE8L,0x5D2F96FAL,2L}},{{0x5D2F96FAL,2L,0x5D2F96FAL,0xB28E2CE8L},{0x10E22048L,2L,0x973526BEL,2L}},{{0x10E22048L,0xB28E2CE8L,0x5D2F96FAL,2L},{0x5D2F96FAL,2L,0x5D2F96FAL,0xB28E2CE8L}}};
    unsigned long long **l_1480 = &g_650;
    char l_1492 = 0xA1L;
    int ***l_1545 = &g_526;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1372[i] = 9UL;
    (*l_1343) = l_1342;
    if ((((**l_1343) = 2UL) | p_7))
    {
        int *l_1344 = (void*)0;
        unsigned *l_1347 = (void*)0;
        char *l_1359 = &g_1229[0];
        const char *l_1361 = &g_1362[6][1][3];
        const char **l_1360 = &l_1361;
        l_1344 = &p_5;
        (*l_1343) = (void*)0;
        (*g_789) = (l_1359 != ((*l_1360) = &g_149));
    }
    else
    {
        int *l_1371 = &g_367;
        short *l_1373 = &g_95[0];
        int l_1394 = (-1L);
        int *l_1396 = (void*)0;
        int l_1467 = 0L;
        unsigned long long **l_1484 = &g_650;
        int ***l_1544 = &g_526;
        for (g_1000 = (-10); (g_1000 > (-1)); g_1000 = safe_add_func_int64_t_s_s(g_1000, 3))
        {
            const unsigned short l_1370[9][7] = {{0x1CA3L,0xE3A5L,4UL,0xE3A5L,0x1CA3L,4UL,1UL},{1UL,0x68C3L,0UL,1UL,0UL,0x68C3L,1UL},{1UL,1UL,0x68C3L,0UL,1UL,0UL,0x68C3L},{1UL,1UL,4UL,0x1CA3L,0xE3A5L,4UL,0xE3A5L},{0x1CA3L,0x68C3L,0x68C3L,0x1CA3L,0UL,1UL,0x1CA3L},{1UL,0xE3A5L,0UL,0UL,0xE3A5L,1UL,0x68C3L},{0xE3A5L,0x1CA3L,4UL,1UL,1UL,4UL,0x1CA3L},{1UL,1UL,4UL,1UL,0xB675L,0xB675L,1UL},{4UL,0UL,4UL,0xB675L,0UL,1UL,1UL}};
            int i, j;
            for (g_151 = 0; (g_151 != 17); g_151 = safe_add_func_int64_t_s_s(g_151, 7))
            {
                int *l_1369[9] = {&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74};
                int i;
                for (l_1358 = 24; (l_1358 == (-22)); l_1358 = safe_sub_func_int64_t_s_s(l_1358, 2))
                {
                    (*l_1343) = l_1369[3];
                    if (l_1370[7][4])
                        continue;
                }
                (*l_1342) = p_8;
            }
        }
        if ((!p_6))
        {
            unsigned l_1376 = 8UL;
            int *l_1380 = (void*)0;
            short *l_1392 = &g_1340;
            long long l_1393 = 0x865480E22CAD0CEDLL;
            int **l_1395 = &g_829[1];
            if (p_8)
            {
                short l_1377 = (-7L);
                return l_1377;
            }
            else
            {
                (*l_1342) = p_8;
            }
            for (g_1014 = 0; (g_1014 < 30); ++g_1014)
            {
                int *l_1381 = &g_367;
                (*l_1342) = (-3L);
                (*l_1343) = l_1381;
            }
            p_5 = (((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((p_8 & (safe_lshift_func_uint16_t_u_u(0UL, (*l_1371)))) <= p_7), g_73)), g_390)), 3)), p_8)) & (*l_1371)) || p_5);
            (*g_789) = ((p_6 >= (((((g_1326[0] >= ((1L && ((*g_650) & ((*l_1342) = p_6))) || (((*l_1343) == ((*l_1395) = (void*)0)) >= (*g_470)))) <= 0xBB59L) || g_731) != (-3L)) == p_6)) > 4294967294UL);
        }
        else
        {
            char *l_1409 = &g_1229[1];
            char **l_1408 = &l_1409;
            const unsigned long long l_1415[9][2] = {{0x4937D3EB0869B066LL,0UL},{18446744073709551615UL,0UL},{0x4937D3EB0869B066LL,18446744073709551615UL},{9UL,9UL},{9UL,18446744073709551615UL},{0x4937D3EB0869B066LL,0UL},{18446744073709551615UL,0UL},{0x4937D3EB0869B066LL,18446744073709551615UL},{9UL,9UL}};
            int *l_1416[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int ****l_1418 = &g_1335[1][0][0];
            int i, j;
            (*l_1343) = l_1396;
            for (g_68 = 3; (g_68 >= 0); g_68 -= 1)
            {
                short *l_1397[7];
                char * const *l_1410 = &l_1409;
                unsigned short *l_1413 = &g_272;
                int l_1414 = 0x811C813FL;
                const int * const l_1422 = &g_367;
                const int * const *l_1421 = &l_1422;
                const int * const **l_1420 = &l_1421;
                const int * const ***l_1419 = &l_1420;
                int i;
                for (i = 0; i < 7; i++)
                    l_1397[i] = (void*)0;
                (*l_1343) = func_47(((*l_1343) = func_47(&p_5, ((*l_1371) ^ 255UL), &l_1394, p_7)), l_1415[8][0], l_1416[7], p_5);
                for (g_390 = 0; (g_390 <= 3); g_390 += 1)
                {
                    int *l_1417 = &g_367;
                    long long *l_1429 = &g_151;
                    long long *l_1430 = &g_1431;
                    int i, j;
                    l_1417 = func_47(l_1417, (((l_1418 = &g_1335[0][0][0]) != l_1419) > ((safe_lshift_func_int8_t_s_u((g_504[(g_390 + 1)][(g_68 + 2)] & ((*l_1430) = ((*l_1429) = (safe_mod_func_uint32_t_u_u(((((safe_add_func_int64_t_s_s(p_8, p_7)) & p_7) >= (0x57L != (((p_5 == (*g_702)) <= (*l_1417)) > (*g_702)))) == 0UL), (***l_1420)))))), 0)) && 0L)), &l_1414, p_8);
                }
            }
        }
        for (g_367 = (-8); (g_367 < 15); g_367++)
        {
            long long l_1442 = 4L;
            char *l_1443[5] = {&g_1229[1],&g_1229[1],&g_1229[1],&g_1229[1],&g_1229[1]};
            short *l_1454[10] = {&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340,&g_1340};
            int l_1455 = 0xB1B5D8F7L;
            unsigned long long l_1456 = 18446744073709551614UL;
            unsigned l_1498 = 4294967295UL;
            int i;
            if ((safe_add_func_int64_t_s_s(p_6, ((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, 4)), (l_1442 = p_7))), ((((((g_1229[0] = 0x8CL) != 0x61L) | 0xF32D2862L) || (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(p_5, (safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((*g_470), g_71)) && 0x4639BF4FL), 0x83L)) >= g_463), g_71)))), l_1456))) < 0x56D7L) <= (*l_1371)))) >= 18446744073709551606UL))))
            {
                short *l_1463 = &g_19[3];
                unsigned short l_1466[4] = {65531UL,65531UL,65531UL,65531UL};
                unsigned short *l_1472[2];
                unsigned short **l_1471 = &l_1472[0];
                unsigned short *l_1474 = (void*)0;
                unsigned short **l_1473 = &l_1474;
                int l_1477 = 0x28808E16L;
                int *l_1485 = &l_1468[2][0][0];
                int i;
                for (i = 0; i < 2; i++)
                    l_1472[i] = &l_1466[1];
                for (g_56 = 0; (g_56 <= 4); g_56 += 1)
                {
                    unsigned l_1461 = 0xE0BC5371L;
                    for (g_1029 = 1; (g_1029 <= 4); g_1029 += 1)
                    {
                        int i;
                        g_1286[(g_1029 + 2)] = &p_5;
                    }
                    for (g_149 = 0; (g_149 <= 4); g_149 += 1)
                    {
                        unsigned *l_1462 = &g_390;
                        int i;
                        (*g_789) = (((6UL < p_6) && ((g_95[0] > (safe_lshift_func_int16_t_s_u(l_1461, 11))) > ((((*l_1462) = 0xCFF06289L) >= g_1362[6][1][3]) == g_115))) || (0x264B643B0D68E1C0LL == p_8));
                    }
                    (*g_789) = 0L;
                    for (l_1358 = 3; (l_1358 >= 0); l_1358 -= 1)
                    {
                        int i;
                        l_1466[2] = p_5;
                        (*g_789) = (l_1468[7][0][0] = l_1467);
                        (*g_789) = p_5;
                        if ((*l_1342))
                            break;
                    }
                }
                l_1477 = (safe_add_func_uint16_t_u_u(((((&l_1466[2] != ((*l_1473) = ((*l_1471) = l_1454[9]))) < ((p_7 != g_19[3]) | (-1L))) && p_7) && p_7), 0x44F0L));
                for (l_1442 = 24; (l_1442 != (-12)); --l_1442)
                {
                    unsigned long long ***l_1481 = &g_649;
                    unsigned long long ***l_1482 = &g_649;
                    unsigned long long ***l_1483 = &l_1480;
                    int l_1486 = (-8L);
                    (*g_789) = (((*l_1483) = l_1480) != l_1484);
                    (*l_1343) = func_47(func_47(l_1485, func_20(l_1463, (((**l_1484) = (*l_1371)) <= l_1442), &l_1358), &l_1394, p_5), p_8, &l_1455, p_8);
                    if (l_1486)
                        continue;
                }
                if (p_8)
                {
                    for (g_129 = 0; (g_129 == 53); g_129++)
                    {
                        (*l_1343) = &p_5;
                        (*l_1343) = (void*)0;
                        if (p_6)
                            continue;
                    }
                    for (g_56 = 0; (g_56 < 54); ++g_56)
                    {
                        if (p_5)
                            break;
                    }
                }
                else
                {
                    if (p_7)
                        break;
                }
            }
            else
            {
                int *l_1491 = (void*)0;
                unsigned long long l_1503 = 18446744073709551615UL;
                short *****l_1518 = &g_1213;
                int ***l_1543 = &l_1343;
                unsigned char l_1550 = 0x82L;
                if ((*l_1342))
                {
                    unsigned short l_1493 = 0xBFBCL;
                    int l_1505 = 0x8A5FB31DL;
                    const int l_1506 = (-4L);
                    int *l_1516 = &g_1331;
                    int *l_1520 = &l_1455;
                    l_1491 = &p_5;
                    if ((((p_6 = (l_1492 >= (**g_469))) & l_1493) || g_1029))
                    {
                        unsigned char l_1494 = 0xFCL;
                        unsigned short *l_1495 = &l_1493;
                        long long *l_1504 = &g_151;
                        int *l_1507 = (void*)0;
                        if (l_1494)
                            break;
                        (*l_1343) = func_47(func_47(&l_1455, (p_8 <= p_6), &l_1394, (l_1505 = (((*l_1495) = 1UL) > ((((*l_1504) = ((!0x0A93D8C0L) >= (safe_rshift_func_uint8_t_u_u((l_1498 >= (safe_mod_func_int64_t_s_s((1UL || (safe_lshift_func_int16_t_s_u((!(0x5A73L >= p_8)), (*l_1371)))), p_5))), l_1503)))) > l_1494) & 0x1858CC4D057D24ADLL)))), l_1506, l_1507, p_6);
                        l_1491 = &p_5;
                    }
                    else
                    {
                        long long *l_1517 = &g_1431;
                        int **l_1519[9] = {&g_662,&l_1371,&g_662,&g_662,&l_1371,&g_662,&g_662,&l_1371,&g_662};
                        int i;
                        (*l_1343) = func_47(&l_1394, p_7, &p_5, (safe_mod_func_int32_t_s_s(((p_6 != p_5) > 0x4168FB15667CCA8FLL), (safe_mul_func_uint8_t_u_u(((**g_469) = (*g_470)), ((p_7 < 6L) < p_5))))));
                        (*l_1343) = func_47(&l_1455, ((safe_rshift_func_int8_t_s_s((+(safe_rshift_func_uint8_t_u_s((l_1516 != l_1342), 1))), 1)) > ((**l_1480) = (((*l_1517) = p_7) || l_1506))), &p_5, ((void*)0 != l_1518));
                        l_1520 = ((*l_1343) = &p_5);
                        if ((*l_1491))
                            break;
                    }
                }
                else
                {
                    int *l_1521 = &l_1394;
                    long long *l_1528 = (void*)0;
                    long long **l_1527 = &l_1528;
                    long long ***l_1526[2];
                    int **l_1529 = &g_1293;
                    int ***l_1530 = &l_1529;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1526[i] = &l_1527;
                    l_1521 = &l_1394;
                    (*l_1343) = &p_5;
                    for (l_1498 = 13; (l_1498 > 57); l_1498 = safe_add_func_uint64_t_u_u(l_1498, 5))
                    {
                        (*g_789) = ((**l_1343) = (**l_1343));
                    }
                    (*g_225) = ((safe_sub_func_uint32_t_u_u(((void*)0 != l_1526[0]), (((*l_1530) = l_1529) == (void*)0))) & p_7);
                }
                for (g_825 = (-2); (g_825 < 55); g_825++)
                {
                    unsigned long long l_1535 = 0xC5DD0F6554C7AC2CLL;
                    int l_1567[7] = {0xD44395E5L,0xD44395E5L,0xD44395E5L,0xD44395E5L,0xD44395E5L,0xD44395E5L,0xD44395E5L};
                    unsigned *l_1575 = &l_1498;
                    int i;
                    for (g_129 = (-11); (g_129 == 49); g_129++)
                    {
                        (*l_1343) = &p_5;
                        (*l_1343) = &p_5;
                        if (l_1535)
                            continue;
                        (*g_225) = (*g_1126);
                    }
                    if ((!(safe_mul_func_int8_t_s_s(p_5, (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(func_20(&l_1358, (((g_1362[2][0][3] == (safe_mod_func_uint64_t_u_u(0UL, ((*g_650) = (+((&l_1343 == (l_1545 = (l_1544 = l_1543))) >= (safe_rshift_func_int16_t_s_s(((g_937 & (0xD3L < 0x22L)) <= g_1229[1]), (***l_1543))))))))) != l_1550) <= g_1093), l_1373))), 0UL))))))
                    {
                        long long l_1563 = 0xCD3A7DD660B1C5CELL;
                        unsigned short *l_1564 = (void*)0;
                        unsigned short *l_1565 = (void*)0;
                        unsigned short *l_1566[3][8][8] = {{{&g_1016[3][3][3],(void*)0,&g_1016[2][8][6],&g_1016[2][8][6],&g_1016[2][8][6],&g_272,&g_1016[2][8][6],&g_1014},{&g_1029,&g_1016[3][1][3],(void*)0,(void*)0,&g_1016[0][0][6],&g_1016[2][8][6],&g_1016[3][4][6],&g_1016[2][8][6]},{&g_272,(void*)0,&g_1016[2][8][6],&g_1029,&g_272,&g_272,&g_1014,&g_1016[2][8][6]},{&g_272,(void*)0,&g_1016[2][8][6],(void*)0,&g_1016[2][2][2],&g_1016[2][8][6],(void*)0,&g_272},{(void*)0,&g_1029,&g_272,&g_1014,&g_1029,&g_272,&g_1016[2][8][6],(void*)0},{&g_1016[2][8][6],&g_1014,&g_1014,&g_1016[2][8][6],&g_1016[0][5][4],&g_1016[2][2][2],&g_1016[0][5][4],&g_1016[2][8][6]},{&g_1016[2][8][6],&g_1016[2][8][6],&g_1016[2][8][6],&g_1014,(void*)0,(void*)0,&g_272,&g_1014},{&g_1016[2][8][6],&g_1014,&g_1016[2][8][6],&g_1029,&g_1014,&g_1016[3][1][3],(void*)0,&g_1016[0][5][4]}},{{&g_1016[2][8][6],&g_1016[3][6][5],(void*)0,&g_272,(void*)0,&g_1016[2][8][6],(void*)0,&g_272},{&g_1016[2][8][6],&g_1014,&g_1016[1][1][5],&g_272,&g_1016[0][5][4],&g_272,&g_1016[2][8][6],&g_272},{&g_1016[2][8][6],&g_1014,&g_1014,&g_1016[2][8][6],&g_1029,&g_1029,&g_272,&g_1014},{(void*)0,&g_1016[2][8][6],(void*)0,&g_272,&g_1016[2][2][2],&g_1016[2][8][6],(void*)0,&g_1016[2][8][6]},{&g_272,&g_272,(void*)0,&g_1016[2][8][6],&g_272,&g_1014,(void*)0,&g_1014},{&g_272,&g_1016[2][8][6],&g_1016[2][8][6],&g_1016[1][1][5],&g_1029,&g_1016[3][3][3],&g_272,&g_1016[2][8][6]},{&g_1016[2][8][6],(void*)0,&g_1029,(void*)0,&g_1016[3][4][6],&g_272,&g_1014,&g_1016[2][8][6]},{(void*)0,&g_1029,&g_272,&g_1029,&g_1029,&g_272,&g_1029,(void*)0}},{{&g_1016[2][8][6],&g_1016[3][1][3],&g_1029,&g_1016[3][7][3],&g_1016[2][8][6],&g_1016[2][8][6],&g_1016[2][8][6],(void*)0},{&g_1016[2][2][2],&g_272,&g_1016[1][1][5],&g_1016[2][8][6],&g_1016[3][7][3],&g_1016[2][8][6],&g_1014,&g_1014},{&g_1016[0][0][6],&g_1016[3][1][3],&g_1016[0][5][5],&g_1029,&g_272,&g_272,&g_1016[2][8][6],&g_272},{&g_1014,&g_1029,&g_1014,&g_1016[3][1][3],&g_1014,&g_272,(void*)0,&g_1016[1][4][5]},{&g_272,(void*)0,&g_272,&g_1016[2][8][6],&g_1014,&g_1016[3][3][3],&g_1016[2][8][6],&g_1016[2][8][6]},{&g_1014,&g_1016[2][8][6],&g_1014,(void*)0,&g_1016[2][8][6],&g_1014,&g_1016[3][3][3],&g_1029},{(void*)0,&g_1016[2][8][6],(void*)0,&g_1016[3][3][3],&g_1029,&g_1016[2][8][6],&g_1014,&g_1014},{&g_272,&g_1029,(void*)0,&g_1016[3][7][3],&g_1016[2][8][6],&g_1016[1][4][5],(void*)0,&g_1014}}};
                        int i, j, k;
                        (**l_1343) = (safe_mul_func_int8_t_s_s(p_8, (safe_sub_func_uint32_t_u_u(g_1362[6][1][3], ((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((g_1016[0][4][2] = (l_1567[5] = (~(safe_sub_func_uint64_t_u_u((***l_1545), l_1563))))), 3)), 0xB6E6L)), p_5)) < p_7)))));
                    }
                    else
                    {
                        unsigned l_1568 = 0x0601AB34L;
                        if (l_1568)
                            break;
                    }
                    (***l_1544) = (p_7 & (0xE78DE4B5L != ((*l_1575) = (((void*)0 == &l_1358) < ((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_192, l_1567[5])), 0x4FL)) == (***l_1543))))));
                }
                if (p_6)
                    break;
            }
            (*l_1343) = &p_5;
        }
    }
    (*l_1343) = &p_5;
    return p_8;
}







static unsigned short func_20(short * const p_21, unsigned long long p_22, short * p_23)
{
    return g_129;
}







static short * func_24(int p_25, long long p_26, unsigned long long p_27, unsigned p_28)
{
    int *l_43[4][6] = {{&g_36,&g_36,(void*)0,&g_36,&g_36,(void*)0},{&g_36,&g_36,(void*)0,&g_36,&g_36,(void*)0},{&g_36,&g_36,(void*)0,&g_36,&g_36,(void*)0},{&g_36,&g_36,(void*)0,&g_36,&g_36,(void*)0}};
    int *l_52 = &g_36;
    unsigned long long *l_53 = &g_54[4][1];
    unsigned long long *l_55[7];
    unsigned long long *l_57[5];
    unsigned long long *l_58[1][10] = {{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56}};
    unsigned long long *l_59 = &g_56;
    short *l_67 = &g_68;
    unsigned char l_168 = 0UL;
    unsigned short l_1037 = 0UL;
    unsigned l_1038 = 0x02D578ACL;
    int **l_1137[1];
    int *l_1138 = &g_115;
    int *l_1188[7][2] = {{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74},{&g_74,&g_74}};
    unsigned long long ***l_1192 = &g_649;
    unsigned short l_1193 = 0UL;
    unsigned short l_1265[3];
    char l_1307[7] = {0x5CL,0x5CL,0x54L,0x5CL,0x5CL,0x54L,0x5CL};
    int i, j;
    for (i = 0; i < 7; i++)
        l_55[i] = &g_56;
    for (i = 0; i < 5; i++)
        l_57[i] = &g_56;
    for (i = 0; i < 1; i++)
        l_1137[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1265[i] = 5UL;
    l_1138 = func_29(g_35[0], p_28, (safe_div_func_uint8_t_u_u(((func_39(l_43[3][5], func_44(func_47(l_52, ((*l_59) = (((*l_53) = g_36) && 0UL)), l_43[3][5], (func_60(func_65(l_67), g_131, l_168, (*l_52)) & 0x02FFE034FB26F9E2LL)), l_43[3][5]), p_25) < l_1037) | p_27), p_27)), l_1038, p_25);
    for (l_1037 = 0; (l_1037 <= 1); l_1037 += 1)
    {
        int *l_1142[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        short *l_1160 = (void*)0;
        unsigned char ***l_1168 = &g_469;
        long long l_1171 = (-10L);
        int *l_1184 = (void*)0;
        char *l_1187 = &g_149;
        int i, j;
        for (l_1038 = 0; (l_1038 <= 7); l_1038 += 1)
        {
            int l_1174 = 0x27BF8444L;
            int * const l_1179 = &g_367;
            int *l_1181 = &g_72;
            for (g_1093 = 0; (g_1093 <= 4); g_1093 += 1)
            {
                const unsigned long long l_1141[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                short *l_1151[10][4][2] = {{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}},{{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68},{&g_95[0],&g_68}}};
                int l_1152 = 0x5C0308FEL;
                int l_1172 = 0L;
                int l_1173 = 0xA2EE18C4L;
                int i, j, k;
                for (l_168 = 0; (l_168 <= 7); l_168 += 1)
                {
                    int *l_1148[3][1][10] = {{{(void*)0,&g_1000,&g_1000,&g_1000,&g_1000,&g_1000,&g_1000,(void*)0,&g_1000,&g_1000}},{{&g_1093,&g_1093,&g_1000,&g_1093,&g_1093,&g_1000,&g_1000,&g_1093,&g_1093,&g_1000}},{{(void*)0,(void*)0,&g_1000,&g_1093,&g_1093,&g_1093,&g_1000,(void*)0,(void*)0,&g_1000}}};
                    int l_1153 = 0x3749487AL;
                    int i, j, k;
                    for (g_56 = 0; (g_56 <= 3); g_56 += 1)
                    {
                        unsigned long long **l_1145[3][9] = {{&l_58[0][3],&l_58[0][3],(void*)0,&l_58[0][3],&l_58[0][3],(void*)0,&l_58[0][3],&l_58[0][3],(void*)0},{(void*)0,(void*)0,&l_58[0][5],(void*)0,(void*)0,&l_58[0][5],(void*)0,(void*)0,&l_58[0][5]},{&l_58[0][3],&l_58[0][3],(void*)0,&l_58[0][3],&l_58[0][3],(void*)0,&l_58[0][3],&l_58[0][3],(void*)0}};
                        int **l_1149 = &l_1148[0][0][2];
                        short *l_1150 = &g_95[0];
                        unsigned short *l_1154 = (void*)0;
                        unsigned short *l_1155 = &g_1029;
                        int i, j;
                        (*l_1138) = (g_512[l_1037] <= (safe_sub_func_int8_t_s_s(g_54[g_56][l_1037], g_512[l_1037])));
                        l_43[g_56][(g_1093 + 1)] = func_47(l_43[g_56][(g_1093 + 1)], l_1141[0], l_1142[3][2], (safe_mul_func_uint16_t_u_u(((*l_1155) = ((((*g_648) = l_1145[1][0]) != (void*)0) && (((safe_sub_func_uint32_t_u_u(p_28, ((*g_935) != ((*l_1149) = l_1148[0][0][7])))) != p_27) != l_1153))), g_1156[2])));
                        return l_67;
                    }
                    for (g_115 = 0; (g_115 <= 1); g_115 += 1)
                    {
                        if ((*g_789))
                            break;
                    }
                    for (g_74 = 0; (g_74 <= 1); g_74 += 1)
                    {
                        short *l_1157 = &g_95[0];
                        return l_1157;
                    }
                }
                if ((&g_649 == &g_649))
                {
                    short *l_1161[7] = {&g_95[0],&g_95[0],&g_95[0],&g_95[0],&g_95[0],&g_95[0],&g_95[0]};
                    short **l_1162[7] = {&l_1161[2],&l_1160,&l_1160,&l_1161[2],&l_1160,&l_1160,&l_1161[2]};
                    long long l_1169 = 0x4DA4FEA684EEEB8ELL;
                    int i, j;
                    if ((safe_mul_func_int16_t_s_s(g_512[l_1037], (g_54[g_1093][l_1037] ^ g_463))))
                    {
                        return l_1151[6][1][0];
                    }
                    else
                    {
                        int i, j, k;
                        (*g_1126) = ((((*g_649) = l_57[g_1093]) != (void*)0) != ((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((l_1168 == &g_785))), l_1169)) >= g_56));
                    }
                }
                else
                {
                    unsigned char l_1170 = 0UL;
                    (*g_789) = 0x261CDC8EL;
                    for (g_72 = 0; g_72 < 4; g_72 += 1)
                    {
                        g_829[g_72] = &g_72;
                    }
                    if (l_1170)
                        continue;
                    l_1172 = l_1171;
                }
                if (((((l_1173 = ((*l_52) = (l_1172 = l_1141[0]))) && (l_1174 = (-1L))) >= (safe_sub_func_int8_t_s_s(g_1093, 1UL))) != l_1141[0]))
                {
                    int *l_1177[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1177[i] = &g_74;
                    for (p_26 = 0; (p_26 <= 7); p_26 += 1)
                    {
                        short *l_1178 = &g_68;
                        int i, j;
                        l_1177[0] = l_1142[(l_1037 + 3)][l_1037];
                        return l_1178;
                    }
                    (*g_1126) = 0x7B23415FL;
                    for (g_1014 = 1; (g_1014 <= 7); g_1014 += 1)
                    {
                        return &g_68;
                    }
                    for (g_68 = 0; (g_68 <= 7); g_68 += 1)
                    {
                        int **l_1180 = &g_35[0];
                        (*l_1180) = l_1179;
                        (**l_1180) = (*g_789);
                        (*l_1180) = func_47(l_1181, ((-4L) | (**g_469)), l_1177[0], p_26);
                    }
                }
                else
                {
                    volatile int **l_1182 = (void*)0;
                    volatile int **l_1183 = &g_789;
                    (*l_1183) = &g_73;
                    (*g_1126) = (-1L);
                }
                if ((*g_789))
                    continue;
            }
        }
        if (g_512[l_1037])
            continue;
        (*l_52) = func_39((l_1142[3][2] = l_1142[3][2]), l_1184, (safe_rshift_func_uint8_t_u_u(p_27, p_25)));
        g_103 = l_1142[3][2];
        for (g_390 = 0; (g_390 <= 4); g_390 += 1)
        {
            int *l_1189 = &g_72;
            g_35[0] = l_1188[3][1];
            l_1189 = &g_72;
        }
    }
    if ((0x5A1670ABL | (safe_mod_func_uint16_t_u_u((((void*)0 != l_1192) ^ l_1193), g_95[0]))))
    {
        int *l_1194 = &g_367;
        g_1126 = l_1194;
    }
    else
    {
        unsigned char l_1198[4];
        int *l_1219[5];
        int *l_1220 = &g_74;
        short *l_1243 = &g_95[0];
        short l_1264 = (-5L);
        unsigned char ***l_1325 = &g_785;
        int i;
        for (i = 0; i < 4; i++)
            l_1198[i] = 255UL;
        for (i = 0; i < 5; i++)
            l_1219[i] = &g_71;
        for (g_390 = 0; (g_390 < 55); g_390 = safe_add_func_int16_t_s_s(g_390, 5))
        {
            short ****l_1212 = (void*)0;
            int l_1226 = 0x03940C2AL;
            int *l_1278 = &g_367;
        }
    }
    return l_67;
}







static int * func_29(int * p_30, const char p_31, unsigned char p_32, short p_33, const unsigned p_34)
{
    int *l_1039 = (void*)0;
    int l_1040 = 0xA6D81153L;
    int ***l_1042 = &g_526;
    int ****l_1041 = &l_1042;
    char *l_1045 = &g_149;
    long long *l_1050 = &g_151;
    long long **l_1049 = &l_1050;
    long long ** const *l_1048[3];
    long long *****l_1062 = &g_575[3];
    unsigned l_1075 = 0x3376161BL;
    short *l_1104 = &g_95[0];
    unsigned char **l_1115 = &g_470;
    int i;
    for (i = 0; i < 3; i++)
        l_1048[i] = &l_1049;
    (*p_30) = (((*l_1045) = (((**g_469) = (func_39(l_1039, l_1039, l_1040) > (&g_526 == ((*l_1041) = &g_526)))) ^ (safe_sub_func_int8_t_s_s(g_95[0], l_1040)))) || p_32);
    g_829[1] = p_30;
    for (g_1014 = 0; (g_1014 <= 51); g_1014 = safe_add_func_uint8_t_u_u(g_1014, 1))
    {
        long long ***l_1051 = &l_1049;
        int *l_1052 = &g_71;
        long long *****l_1063 = &g_575[5];
        short **l_1119 = &l_1104;
        long long l_1124 = 0x2CAE84E121BD7E08LL;
        unsigned l_1125[8] = {18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL};
        int i;
        if (((*l_1052) = ((*p_30) = (l_1048[0] == l_1051))))
        {
            int l_1065 = 0x85F18ADEL;
            short *l_1084[3][5] = {{&g_95[0],(void*)0,(void*)0,&g_95[0],(void*)0},{&g_95[0],&g_95[0],&g_68,&g_95[0],&g_95[0]},{(void*)0,&g_95[0],(void*)0,(void*)0,&g_95[0]}};
            int i, j;
            if ((safe_rshift_func_uint16_t_u_u(p_31, 10)))
            {
                unsigned l_1059 = 0xF1933362L;
                l_1052 = p_30;
                (*l_1052) = (safe_sub_func_uint64_t_u_u(((**g_649) = (safe_add_func_int32_t_s_s((*l_1052), (*l_1052)))), l_1059));
                (*l_1052) = 0x0454685FL;
                for (g_68 = 0; (g_68 <= (-28)); g_68--)
                {
                    (*l_1052) = 0x1856BD73L;
                }
            }
            else
            {
                int *l_1064 = &g_36;
                int **l_1066 = &g_35[0];
                (*l_1066) = func_47((l_1064 = func_47(p_30, (l_1062 == l_1063), p_30, (*p_30))), (l_1065 | 0xBEB7A98CD5E36D48LL), p_30, (*p_30));
                if ((*l_1052))
                    continue;
                if ((*p_30))
                    continue;
                for (g_56 = 0; (g_56 <= 7); g_56 += 1)
                {
                    int l_1069 = 0xCC2A2E29L;
                    unsigned *l_1074 = &g_390;
                    long long **l_1094 = &l_1050;
                    int i;
                    (*p_30) = l_1065;
                    (*l_1066) = p_30;
                    if (((g_770[0][7][0] <= ((*l_1074) = ((((***g_648) | (*g_650)) > ((safe_rshift_func_int8_t_s_u(p_31, 1)) < (***g_648))) ^ p_32))) || l_1075))
                    {
                        int **** const l_1078 = (void*)0;
                        int *l_1079 = &g_74;
                        (*l_1052) = (((-1L) | 0x83DF6A50L) || (safe_lshift_func_int16_t_s_u((((*l_1064) = (-1L)) || (&l_1042 != l_1078)), 0)));
                        p_30 = p_30;
                        return l_1079;
                    }
                    else
                    {
                        unsigned short *l_1089 = &g_272;
                        int l_1092 = 0x5C280511L;
                        (*p_30) = ((safe_mod_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(0x44038F0DL, (*p_30))) <= ((**g_469) = (*l_1064))), (*p_30))) & p_31);
                        if (l_1069)
                            break;
                        (*l_1051) = l_1094;
                    }
                    for (g_131 = 0; (g_131 <= 3); g_131 += 1)
                    {
                        int **l_1103 = &g_829[0];
                        int i, j, k;
                        (*l_1103) = ((*l_1066) = (p_30 = func_47(g_829[g_131], (((safe_rshift_func_uint8_t_u_u(((**g_469) = 1UL), 3)) | (g_1016[g_131][(g_131 + 5)][(g_131 + 1)] < ((safe_mod_func_int8_t_s_s(((*l_1045) = (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(g_1016[g_131][(g_56 + 1)][(g_131 + 2)], (&g_575[5] != l_1063))), p_33))), ((*l_1064) & (((*l_1074) = (**l_1066)) | 0xF4128533L)))) != p_33))) >= (*l_1052)), (*l_1066), (*l_1052))));
                    }
                }
            }
        }
        else
        {
            short *l_1109 = &g_95[0];
            int l_1110 = 5L;
            (*l_1052) = (p_33 != l_1110);
            (*p_30) = 0L;
            (*p_30) = (*g_789);
        }
        for (g_825 = 0; (g_825 <= 1); g_825 += 1)
        {
            int *l_1127 = &g_36;
            int *l_1134 = &g_74;
            for (l_1040 = 0; (l_1040 <= 1); l_1040 += 1)
            {
                short *l_1123 = &g_68;
                int l_1128 = 9L;
                int ***l_1133 = (void*)0;
                int **l_1135 = (void*)0;
                int **l_1136 = &l_1134;
                int i;
                for (g_56 = 0; (g_56 <= 4); g_56 += 1)
                {
                    for (g_705 = 0; (g_705 <= 0); g_705 += 1)
                    {
                        int i, j, k;
                        l_1115 = (void*)0;
                    }
                    for (g_68 = 0; (g_68 <= 0); g_68 += 1)
                    {
                        int i, j;
                        g_35[g_68] = func_47(g_35[g_68], g_512[g_825], &g_74, (((*p_30) = g_504[(g_825 + 3)][(l_1040 + 1)]) > g_504[(g_68 + 4)][g_825]));
                        if (g_504[g_56][(g_68 + 3)])
                            break;
                    }
                }
                for (p_33 = 0; (p_33 <= 0); p_33 += 1)
                {
                    unsigned char * const ***l_1116 = (void*)0;
                    if (((void*)0 == l_1116))
                    {
                        short ***l_1120 = &l_1119;
                        int **l_1121 = &g_103;
                        int i;
                        (*g_789) = 0x65F68C43L;
                        (*p_30) = ((g_512[p_33] || (safe_add_func_uint8_t_u_u(p_33, (&l_1104 != ((*l_1120) = l_1119))))) < (*l_1052));
                        (*l_1121) = g_35[p_33];
                    }
                    else
                    {
                        int **l_1122[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        p_30 = g_35[p_33];
                        return p_30;
                    }
                    if (l_1124)
                    {
                        if (l_1125[6])
                            break;
                        l_1127 = p_30;
                        return l_1052;
                    }
                    else
                    {
                        l_1128 = (*p_30);
                        return p_30;
                    }
                }
            }
            for (p_32 = 0; (p_32 <= 1); p_32 += 1)
            {
                int i;
                (*p_30) = g_512[g_825];
            }
        }
    }
    return p_30;
}







static unsigned char func_39(int * p_40, int * p_41, long long p_42)
{
    char l_830[8][2][9] = {{{0x16L,8L,9L,1L,1L,0L,1L,4L,0x8EL},{0x85L,8L,4L,0x16L,1L,1L,0x16L,4L,8L}},{{1L,8L,0x01L,0x85L,1L,0x42L,0x85L,4L,0x5FL},{0x16L,8L,9L,1L,1L,(-1L),4L,(-1L),1L}},{{0x01L,(-2L),(-1L),9L,0L,0L,9L,(-1L),(-2L)},{4L,(-2L),0L,0x01L,0L,0xF2L,0x01L,(-1L),(-9L)}},{{9L,(-2L),0x2DL,4L,0L,(-1L),4L,(-1L),1L},{0x01L,(-2L),(-1L),9L,0L,0L,9L,(-1L),(-2L)}},{{4L,(-2L),0L,0x01L,0L,0xF2L,0x01L,(-1L),(-9L)},{9L,(-2L),0x2DL,4L,0L,(-1L),4L,(-1L),1L}},{{0x01L,(-2L),(-1L),9L,0L,0L,9L,(-1L),(-2L)},{4L,(-2L),0L,0x01L,0L,0xF2L,0x01L,(-1L),(-9L)}},{{9L,(-2L),0x2DL,4L,0L,(-1L),4L,(-1L),1L},{0x01L,(-2L),(-1L),9L,0L,0L,9L,(-1L),(-2L)}},{{4L,(-2L),0xF2L,0x42L,(-9L),1L,0x42L,0L,0L},{0L,(-1L),(-1L),1L,(-9L),(-2L),1L,0L,0x2DL}}};
    unsigned char ***l_836 = &g_785;
    short *l_848 = &g_68;
    int *l_856 = &g_367;
    int *l_873 = &g_36;
    const int l_889 = 8L;
    const int l_957 = 0L;
    unsigned l_961 = 0xF6342B31L;
    unsigned long long l_965 = 0xA4D3A0914220C9B9LL;
    unsigned l_1026 = 0x01B22BC6L;
    int i, j, k;
    if (l_830[5][0][1])
    {
        int **l_858 = (void*)0;
        for (g_825 = (-26); (g_825 < 41); ++g_825)
        {
            unsigned char ****l_835[7] = {&g_472[1][0][0],&g_468,&g_468,&g_472[1][0][0],&g_468,&g_468,&g_472[1][0][0]};
            const unsigned char *l_839 = &g_504[2][4];
            const unsigned char **l_838 = &l_839;
            const unsigned char ***l_837 = &l_838;
            const unsigned char ****l_840 = &l_837;
            char *l_843 = &l_830[2][0][3];
            int l_853[4][10][3] = {{{0xF71D4DA2L,0x463C8F76L,1L},{(-9L),0xCFF57F4BL,(-9L)},{(-9L),(-4L),0x3BE16989L},{0xF71D4DA2L,8L,(-9L)},{0x3BE16989L,8L,1L},{0xD3DE88DEL,(-4L),0x7354D090L},{0x3BE16989L,0xCFF57F4BL,0x7354D090L},{0xF71D4DA2L,0x463C8F76L,1L},{(-9L),0xCFF57F4BL,(-9L)},{(-9L),(-4L),0x3BE16989L}},{{0xF71D4DA2L,8L,(-9L)},{0x3BE16989L,8L,1L},{0xD3DE88DEL,(-4L),0x7354D090L},{0x3BE16989L,0xCFF57F4BL,0x7354D090L},{0xF71D4DA2L,0x463C8F76L,1L},{(-9L),0xCFF57F4BL,(-9L)},{(-9L),(-4L),0x3BE16989L},{0xF71D4DA2L,8L,(-9L)},{0x3BE16989L,8L,1L},{0xD3DE88DEL,(-4L),0x7354D090L}},{{0x3BE16989L,0xCFF57F4BL,0x7354D090L},{0xF71D4DA2L,0x463C8F76L,1L},{(-9L),0xCFF57F4BL,(-9L)},{(-9L),(-4L),0x3BE16989L},{0xC839C98EL,1L,0x2326F58CL},{1L,1L,0xD235475BL},{(-9L),0xD3DE88DEL,1L},{1L,0xF71D4DA2L,1L},{0xC839C98EL,0x7354D090L,0xD235475BL},{0x2326F58CL,0xF71D4DA2L,0x2326F58CL}},{{0x2326F58CL,0xD3DE88DEL,1L},{0xC839C98EL,1L,0x2326F58CL},{1L,1L,0xD235475BL},{(-9L),0xD3DE88DEL,1L},{1L,0xF71D4DA2L,1L},{0xC839C98EL,0x7354D090L,0xD235475BL},{0x2326F58CL,0xF71D4DA2L,0x2326F58CL},{0x2326F58CL,0xD3DE88DEL,1L},{0xC839C98EL,1L,0x2326F58CL},{1L,1L,0xD235475BL}}};
            int **l_857[8][9][3] = {{{&g_662,&g_225,&g_225},{&g_662,(void*)0,&g_225},{&g_829[3],&l_856,&g_35[0]},{&g_225,&g_662,&g_225},{&g_225,&g_662,&g_225},{&g_225,&g_829[3],&g_829[2]},{&g_829[3],&g_662,(void*)0},{&g_829[3],&g_662,&g_829[1]},{&g_662,&l_856,&g_225}},{{&g_829[3],(void*)0,&l_856},{&g_829[3],&g_225,&g_35[0]},{&g_225,&g_662,&l_856},{&g_225,(void*)0,&g_225},{&g_225,&g_829[3],&g_829[1]},{&g_829[3],(void*)0,(void*)0},{&g_662,&g_662,&g_829[2]},{&g_662,&g_225,&g_225},{&g_662,(void*)0,&g_225}},{{&g_829[3],&l_856,&g_35[0]},{&g_225,&g_662,&g_225},{&g_225,&g_662,&g_225},{&g_225,&g_829[3],&g_829[2]},{&g_829[3],&g_662,(void*)0},{&g_829[3],&g_662,&g_829[1]},{&g_662,&l_856,&g_225},{&g_829[3],(void*)0,&l_856},{&g_829[3],&g_225,&g_35[0]}},{{&g_225,&g_662,&l_856},{&g_225,(void*)0,&g_225},{&g_225,&g_829[3],&g_829[1]},{&g_829[3],(void*)0,(void*)0},{&g_662,&g_662,&g_829[2]},{&g_662,&g_225,&g_225},{&g_662,(void*)0,&g_225},{&g_829[3],&l_856,&g_35[0]},{&g_225,&g_662,&g_225}},{{&g_225,&g_662,&g_225},{&g_225,&g_829[3],&g_829[2]},{&g_829[3],&g_662,(void*)0},{&g_829[3],&g_662,&g_829[1]},{&g_662,&l_856,&g_225},{&g_829[3],(void*)0,&l_856},{&g_829[3],&g_225,&g_35[0]},{&g_225,&g_662,&l_856},{&g_225,(void*)0,&g_225}},{{&g_225,&g_829[3],&g_829[1]},{&g_829[3],(void*)0,(void*)0},{&g_662,&g_662,&g_103},{&g_662,&g_35[0],&g_829[1]},{(void*)0,&g_225,(void*)0},{&g_829[3],&g_829[3],&g_225},{&g_35[0],&g_829[3],(void*)0},{&g_829[1],&g_829[3],&g_829[1]},{(void*)0,&l_856,&g_103}},{{&g_829[3],&g_829[3],&g_225},{&g_225,&g_829[3],&g_829[0]},{&g_662,&g_829[3],&g_829[1]},{&g_225,&g_225,&g_829[3]},{&g_829[3],&g_35[0],&g_225},{(void*)0,&g_829[3],&g_829[3]},{&g_829[1],&g_829[3],&g_829[1]},{&g_35[0],&l_856,&g_829[0]},{&g_829[3],&g_829[3],&g_225}},{{(void*)0,&g_829[3],&g_103},{&g_662,&g_35[0],&g_829[1]},{(void*)0,&g_225,(void*)0},{&g_829[3],&g_829[3],&g_225},{&g_35[0],&g_829[3],(void*)0},{&g_829[1],&g_829[3],&g_829[1]},{(void*)0,&l_856,&g_103},{&g_829[3],&g_829[3],&g_225},{&g_225,&g_829[3],&g_829[0]}}};
            int i, j, k;
            (*g_789) = (safe_mul_func_uint16_t_u_u((((l_836 = &g_785) == ((*l_840) = l_837)) > (safe_rshift_func_uint8_t_u_s(255UL, 0))), (((*l_843) = g_367) || g_56)));
            p_41 = func_47(p_40, (safe_rshift_func_uint16_t_u_s(g_36, ((*g_447) && (l_830[5][0][1] > l_830[5][0][1])))), l_856, p_42);
        }
        g_103 = &g_74;
        for (g_272 = 0; (g_272 != 5); g_272 = safe_add_func_uint64_t_u_u(g_272, 7))
        {
            return (*l_856);
        }
    }
    else
    {
        unsigned char **l_876 = &g_470;
        int l_884 = 0x23E33702L;
        int *l_893[6][10] = {{&g_74,(void*)0,(void*)0,(void*)0,(void*)0,&g_74,&g_367,&g_367,&g_367,(void*)0},{&g_115,(void*)0,&g_115,&g_74,&g_115,&g_71,&g_74,&g_115,&g_36,&g_115},{&g_115,&g_74,&g_367,&g_115,&g_367,(void*)0,&g_367,&g_74,(void*)0,&g_115},{(void*)0,&g_367,&g_74,(void*)0,&g_115,&g_115,&g_367,&g_71,&g_74,&g_74},{&g_115,&g_367,&g_367,&g_74,&g_74,&g_367,&g_367,&g_115,&l_884,(void*)0},{&g_115,(void*)0,(void*)0,&g_71,&g_115,&g_367,(void*)0,&g_115,(void*)0,&g_74}};
        const char l_938 = 0x85L;
        int i, j;
        for (g_82 = 0; (g_82 <= 1); g_82 += 1)
        {
            int *l_861 = &g_36;
            int **l_862 = &g_829[0];
            unsigned char **l_875 = &g_470;
            unsigned long long l_909 = 0xDAFB19952949E65BLL;
            const int l_921 = (-1L);
            short l_966 = (-1L);
            (*l_862) = l_861;
            for (g_72 = 3; (g_72 >= 0); g_72 -= 1)
            {
                int *l_874 = &g_115;
                unsigned char **l_881 = &g_470;
                unsigned short l_940 = 0x8C12L;
                int i;
                if (g_512[g_82])
                {
                    int i;
                    g_829[g_72] = g_829[g_72];
                    if (g_512[g_82])
                        continue;
                }
                else
                {
                    long long *l_866 = &g_151;
                    long long **l_865 = &l_866;
                    int i;
                    if ((*l_856))
                        break;
                    if ((safe_mul_func_uint16_t_u_u(((((*l_865) = &p_42) != (void*)0) == (p_42 == (safe_mul_func_int16_t_s_s((((*l_856) && g_770[0][6][2]) ^ (0L <= ((safe_rshift_func_uint8_t_u_u(p_42, (g_825 || 0xCE7CL))) && 1UL))), g_731)))), 1UL)))
                    {
                        (*l_861) = (safe_rshift_func_int8_t_s_u(p_42, 7));
                        (*l_862) = l_873;
                    }
                    else
                    {
                        (*l_862) = func_47(l_874, p_42, l_856, (*l_861));
                        (*l_873) = (l_875 != ((*l_836) = l_876));
                    }
                    (*l_861) = (p_42 ^ (((*l_848) = (((safe_mul_func_uint8_t_u_u((*l_873), (safe_rshift_func_uint8_t_u_u((**g_785), p_42)))) && (((void*)0 != l_881) & (*l_873))) ^ (p_42 < (safe_div_func_int64_t_s_s((p_42 | (*l_861)), 0x3A6C43F9C1ADB958LL))))) == g_56));
                    if (l_884)
                    {
                        (*g_789) = (safe_rshift_func_uint8_t_u_s(0x9FL, ((safe_sub_func_uint64_t_u_u(((+(l_889 & (&g_829[3] == &p_41))) == l_884), (((safe_div_func_uint32_t_u_u(g_129, (safe_unary_minus_func_int16_t_s((-1L))))) <= ((*l_861) > (p_42 & p_42))) ^ p_42))) == 0x15EEEBC0L)));
                        (*l_874) = 2L;
                    }
                    else
                    {
                        l_893[3][2] = p_41;
                        if ((*g_789))
                            continue;
                    }
                }
                if ((*l_856))
                {
                    int *l_901 = &g_71;
                    unsigned long long *l_902 = (void*)0;
                    unsigned long long *l_903[8][9] = {{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0]},{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0]},{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0]},{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0]},{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0]},{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0]},{&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_512[g_82],&g_770[0][2][0],&g_512[g_82],&g_512[g_82],&g_770[0][2][0],&g_512[g_82]},{&g_512[g_82],&g_770[0][2][0],&g_512[g_82],&g_512[g_82],&g_770[0][2][0],&g_512[g_82],&g_512[g_82],&g_770[0][2][0],&g_512[g_82]}};
                    unsigned long long *l_904 = &g_512[0];
                    int l_922 = 7L;
                    int i, j;
                    for (g_367 = 0; (g_367 <= 1); g_367 += 1)
                    {
                        unsigned long long *l_894 = &g_54[4][1];
                        int i, j, k;
                        (*l_873) = (*l_861);
                        (*l_862) = func_47(&l_884, ((*l_894) = 0x403DCF959F268F0DLL), &g_367, (((~(((void*)0 == l_894) && 1L)) > (safe_lshift_func_uint8_t_u_s((*l_874), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(255UL, (g_73 > p_42))), g_512[1]))))) != p_42));
                        (*l_862) = (void*)0;
                    }
                    (*l_862) = func_47(l_901, ((*l_904) = p_42), ((*l_862) = func_47(p_41, (*g_650), &l_884, (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_909, ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((*g_447) == (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(65533UL, ((((safe_unary_minus_func_uint8_t_u(p_42)) < 0L) <= (**g_649)) & 1L))), 7))), 9L)), (*g_447))) || l_921))), (-1L))))), l_922);
                    if ((*l_861))
                    {
                        (*l_874) = ((*l_861) = (-7L));
                        (*l_874) = (safe_mod_func_uint64_t_u_u(p_42, (p_42 && (**g_649))));
                    }
                    else
                    {
                        int *l_925[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_925[i] = &l_884;
                        l_925[0] = p_40;
                    }
                }
                else
                {
                    (*l_862) = p_41;
                    return (**g_469);
                }
                for (g_705 = 0; (g_705 <= 1); g_705 += 1)
                {
                    int l_926 = 0x70558340L;
                    if (l_926)
                    {
                        int *l_933[3][9] = {{(void*)0,&l_926,&l_926,&l_926,&l_926,&l_926,&l_926,&l_926,&l_926},{(void*)0,&l_926,(void*)0,&l_926,&l_926,&l_926,(void*)0,(void*)0,&l_926},{&l_926,&l_926,(void*)0,&l_926,&l_926,&l_926,&l_926,&l_926,&l_926}};
                        int **l_932[10] = {&l_933[2][1],&l_933[2][0],&l_933[2][0],&l_933[2][0],&l_933[2][1],&l_933[2][1],&l_933[2][0],&l_933[2][0],&l_933[2][0],&l_933[2][1]};
                        int ***l_931 = &l_932[0];
                        int *l_939 = &g_36;
                        int i, j;
                        (*l_873) = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((~((l_931 == g_934) | p_42)), 0)) != (*g_702)), 250UL));
                        (*l_862) = func_47(((*l_862) = func_47(l_873, l_938, ((*l_862) = (l_874 = p_40)), (*g_789))), (***g_648), (l_939 = p_41), l_940);
                    }
                    else
                    {
                        (*g_789) = (safe_rshift_func_int16_t_s_s(((*l_848) = p_42), 0));
                        (*l_861) = (*g_789);
                        return p_42;
                    }
                }
            }
            for (l_884 = 0; (l_884 <= 1); l_884 += 1)
            {
                char l_959 = 0x27L;
                int l_962 = 0x2C729EF9L;
                unsigned char **l_964 = &g_470;
                for (g_149 = 0; (g_149 <= 1); g_149 += 1)
                {
                    short *l_947 = &g_95[0];
                    long long ****l_950[3][3][10] = {{{&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361,&g_361,(void*)0,&g_361,&g_361},{&g_361,&g_361,&g_361,&g_361,(void*)0,&g_361,&g_361,(void*)0,&g_361,&g_361},{&g_361,&g_361,&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361,(void*)0,&g_361}},{{&g_361,&g_361,&g_361,&g_361,&g_361,(void*)0,(void*)0,&g_361,&g_361,&g_361},{&g_361,&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361,(void*)0,(void*)0,&g_361},{&g_361,&g_361,&g_361,&g_361,&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361}},{{&g_361,&g_361,&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,(void*)0,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361},{&g_361,(void*)0,&g_361,&g_361,(void*)0,(void*)0,&g_361,&g_361,(void*)0,&g_361}}};
                    int l_958 = (-10L);
                    unsigned char *l_960 = &g_504[2][4];
                    int i, j, k;
                    (*l_873) = ((safe_sub_func_int64_t_s_s((l_962 = (~(l_961 = (~l_959)))), (*l_856))) && 8UL);
                    (*l_862) = (void*)0;
                    return p_42;
                }
                (*l_862) = (void*)0;
                for (g_705 = 0; (g_705 <= 1); g_705 += 1)
                {
                    short l_963 = 0x9E69L;
                    (*l_862) = p_40;
                    for (l_962 = 1; (l_962 >= 0); l_962 -= 1)
                    {
                        int i, j, k;
                        (*l_862) = l_856;
                        if (l_963)
                            continue;
                        (*l_861) = l_963;
                        l_965 = ((void*)0 != l_964);
                    }
                    (*g_789) = l_966;
                }
            }
        }
    }
    for (g_82 = 16; (g_82 != 14); g_82 = safe_sub_func_uint8_t_u_u(g_82, 1))
    {
        const short l_969[7][5] = {{(-6L),(-6L),(-4L),(-6L),(-6L)},{(-2L),0x3C2DL,(-2L),(-1L),1L},{(-6L),8L,8L,(-6L),8L},{1L,0x3C2DL,(-10L),0x3C2DL,1L},{8L,(-6L),8L,8L,(-6L)},{1L,(-1L),(-2L),0x3C2DL,(-2L)},{(-6L),(-6L),(-4L),(-6L),(-6L)}};
        short *l_970 = &g_68;
        char *l_981 = (void*)0;
        char *l_982[8][3][3] = {{{&l_830[6][0][3],&l_830[0][0][0],&g_149},{&g_149,&l_830[1][0][0],&g_149},{&l_830[5][0][1],(void*)0,(void*)0}},{{&l_830[1][1][5],&l_830[5][0][1],&l_830[5][0][5]},{&l_830[1][1][5],&l_830[5][0][5],&l_830[5][0][1]},{&g_15,&g_15,(void*)0}},{{&l_830[5][0][1],&g_149,&g_149},{&g_149,&g_15,&g_15},{&l_830[5][0][5],&l_830[6][0][3],&l_830[5][0][5]}},{{&g_15,&l_830[1][1][5],&l_830[5][0][5]},{&l_830[5][0][1],&g_149,&g_15},{&g_15,&l_830[5][0][5],&g_149}},{{&l_830[1][1][5],&g_15,(void*)0},{&g_15,&g_149,&l_830[5][0][1]},{&l_830[5][0][1],&l_830[5][0][1],&l_830[6][0][3]}},{{&g_15,&l_830[5][0][1],&g_149},{&l_830[5][0][5],&g_149,&l_830[5][0][1]},{&g_149,&g_15,&l_830[1][0][0]}},{{&l_830[5][0][1],&l_830[5][0][5],&l_830[5][0][1]},{&g_15,&g_149,&g_149},{&g_15,&l_830[1][1][5],&l_830[6][0][3]}},{{&g_15,&l_830[6][0][3],&l_830[5][0][1]},{&g_15,&g_15,(void*)0},{&l_830[5][0][1],&g_149,&g_149}}};
        int i, j, k;
        if (l_969[4][0])
            break;
        (*g_789) = l_969[6][0];
    }
    for (g_825 = 5; (g_825 == 6); g_825 = safe_add_func_int8_t_s_s(g_825, 1))
    {
        const char l_991 = 0x86L;
        short l_996 = 0x2AE1L;
        int *l_999[1][1][3];
        char *l_1001 = (void*)0;
        char *l_1002 = &l_830[5][0][1];
        int l_1007 = 1L;
        int l_1017 = 0L;
        unsigned char l_1020 = 0x9AL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_999[i][j][k] = &g_1000;
            }
        }
        (*l_873) = ((*l_856) = (safe_lshift_func_int8_t_s_s(g_463, 6)));
        (*g_789) = (safe_sub_func_int8_t_s_s((+(7L >= ((l_991 != p_42) == p_42))), ((*l_1002) = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(p_42, 0xE118641CL)), (*l_856))))));
        for (g_272 = 0; (g_272 != 32); ++g_272)
        {
            unsigned *l_1008 = (void*)0;
            unsigned short *l_1013 = &g_1014;
            unsigned short *l_1015 = &g_1016[2][8][6];
            unsigned l_1018 = 18446744073709551615UL;
            unsigned *l_1019[6];
            int *l_1027[6] = {&g_367,&g_367,&g_367,&g_367,&g_367,&g_367};
            int ** const l_1028 = &l_999[0][0][2];
            int **l_1030 = &l_1027[3];
            int **l_1031 = &g_829[2];
            int i;
            for (i = 0; i < 6; i++)
                l_1019[i] = &g_131;
            (*g_789) = (((g_390 = (safe_lshift_func_int8_t_s_u((l_1007 = ((void*)0 != &l_965)), 2))) < (l_1020 = (g_131 = (safe_mul_func_int16_t_s_s((((+((safe_add_func_uint16_t_u_u((l_1017 = ((*l_1015) = ((*l_1013) = ((-6L) == p_42)))), (*g_447))) ^ (*l_856))) & p_42) < (-1L)), l_1018))))) < p_42);
            if ((*l_873))
            {
                return p_42;
            }
            else
            {
                int **l_1021 = &g_829[1];
                (*l_1021) = (void*)0;
                (*g_934) = (*g_934);
                (*l_1021) = func_47(((*l_1021) = func_47(func_47(p_40, (safe_lshift_func_uint8_t_u_u(((**g_785) = ((*l_873) ^ (g_73 > (-9L)))), ((l_1026 = (((!g_95[0]) == (safe_lshift_func_uint8_t_u_s(l_1017, p_42))) <= p_42)) >= (g_95[0] != p_42)))), l_1008, l_1018), (*l_873), p_41, p_42)), (**g_649), l_1019[5], (*l_856));
            }
            (*l_1031) = ((*l_1030) = func_47(l_856, p_42, l_1027[3], g_1029));
            (**l_1030) = (((*l_1002) = (~(safe_unary_minus_func_uint16_t_u(p_42)))) | p_42);
        }
        return p_42;
    }
    return (*l_856);
}







static int * func_44(int * p_45, int * p_46)
{
    short *l_180 = (void*)0;
    int l_183 = 0L;
    const unsigned l_184 = 0x5414BF27L;
    unsigned char *l_185 = &g_82;
    unsigned long long *l_237 = &g_54[4][1];
    char l_254 = 0x49L;
    int l_264 = 0L;
    unsigned short l_273 = 0x3AE4L;
    unsigned long long l_284[5][10] = {{0x9DE121EC47C4DE95LL,0UL,18446744073709551612UL,0UL,0x9DE121EC47C4DE95LL,0UL,0UL,0x9DE121EC47C4DE95LL,0UL,18446744073709551612UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,0x9DE121EC47C4DE95LL,1UL,0x9DE121EC47C4DE95LL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{0UL,0x9DE121EC47C4DE95LL,0UL,0UL,0x9DE121EC47C4DE95LL,0UL,18446744073709551612UL,0UL,0x9DE121EC47C4DE95LL,0UL},{3UL,18446744073709551615UL,0UL,0x9DE121EC47C4DE95LL,0UL,0UL,0x9DE121EC47C4DE95LL,0UL,18446744073709551612UL,0UL},{0UL,1UL,18446744073709551612UL,3UL,18446744073709551612UL,1UL,0UL,0UL,1UL,18446744073709551612UL}};
    int l_327 = (-1L);
    short ***l_337[2];
    short *l_370 = &g_68;
    short *l_418 = &g_68;
    int *l_494[8][10][2] = {{{&g_71,&g_367},{&g_115,&g_36},{&g_115,&g_367},{&g_71,&g_115},{&l_183,&g_74},{(void*)0,&l_183},{&g_115,&g_367},{(void*)0,&l_183},{&g_72,&l_183},{(void*)0,&g_367}},{{&g_115,&l_183},{(void*)0,&g_74},{&l_183,&g_115},{&g_71,&g_367},{&g_115,&g_36},{&g_115,&g_367},{&g_71,&g_115},{&l_183,&g_74},{(void*)0,&l_183},{&g_115,&g_367}},{{(void*)0,&l_183},{&g_72,&l_183},{(void*)0,&g_367},{&g_115,&l_183},{(void*)0,&g_74},{&l_183,&g_115},{&g_71,&g_367},{&g_115,&g_36},{&g_115,&g_367},{&g_71,&g_115}},{{&l_183,&g_74},{(void*)0,&l_183},{&g_115,&g_367},{(void*)0,&l_183},{&g_72,&l_183},{(void*)0,&g_367},{&g_115,&l_183},{(void*)0,&g_74},{&l_183,&g_367},{&g_74,&g_115}},{{&g_115,(void*)0},{&g_115,&g_115},{&g_74,&g_367},{&g_115,&l_183},{&l_183,&l_183},{&g_115,(void*)0},{&g_71,&g_115},{&g_115,&g_115},{&g_71,(void*)0},{&g_115,&l_183}},{{&l_183,&l_183},{&g_115,&g_367},{&g_74,&g_115},{&g_115,(void*)0},{&g_115,&g_115},{&g_74,&g_367},{&g_115,&l_183},{&l_183,&l_183},{&g_115,(void*)0},{&g_71,&g_115}},{{&g_115,&g_115},{&g_71,(void*)0},{&g_115,&l_183},{&l_183,&l_183},{&g_115,&g_367},{&g_74,&g_115},{&g_115,(void*)0},{&g_115,&g_115},{&g_74,&g_367},{&g_115,&l_183}},{{&l_183,&l_183},{&g_115,(void*)0},{&g_71,&g_115},{&g_115,&g_115},{&g_71,(void*)0},{&g_115,&l_183},{&l_183,&l_183},{&g_115,&g_367},{&g_74,&g_115},{&g_115,(void*)0}}};
    unsigned char l_511[7];
    short l_533 = 1L;
    int *l_540 = &l_183;
    int *l_569 = (void*)0;
    long long **l_578 = (void*)0;
    long long ** const *l_577 = &l_578;
    long long ** const **l_576 = &l_577;
    unsigned char * const *l_601[3];
    unsigned char * const **l_600 = &l_601[2];
    int * const l_619 = (void*)0;
    int * const *l_618 = &l_619;
    unsigned l_621 = 4294967288UL;
    char l_683[8] = {(-4L),0xD1L,(-4L),0xD1L,(-4L),0xD1L,(-4L),0xD1L};
    const char l_698 = 0L;
    const int *l_701 = (void*)0;
    unsigned l_720 = 0x90BF114CL;
    char *l_742 = &g_15;
    const unsigned char ****l_760 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_337[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_511[i] = 0xF0L;
    for (i = 0; i < 3; i++)
        l_601[i] = &g_470;
    if ((safe_add_func_int64_t_s_s((g_95[0] != ((((safe_mod_func_uint16_t_u_u((g_131 < g_56), g_54[4][1])) <= l_183) > 0x4038L) == 0x17L)), l_184)))
    {
        unsigned long long l_186 = 18446744073709551614UL;
        short *l_187 = &g_95[0];
        long long *l_239 = &g_151;
        long long **l_238 = &l_239;
        int *l_243[8][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        short *l_244[7] = {&g_68,&g_68,&g_95[0],&g_68,&g_68,&g_95[0],&g_68};
        int **l_274 = &g_35[0];
        char l_289 = 8L;
        short *l_312 = &g_68;
        long long l_366[1];
        long long ** const *l_372[3][10] = {{&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238},{&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238},{&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238,&l_238}};
        long long ** const ** const l_371[9][3] = {{&l_372[1][9],&l_372[1][9],&l_372[1][9]},{(void*)0,(void*)0,(void*)0},{&l_372[1][9],&l_372[1][9],&l_372[1][9]},{(void*)0,(void*)0,(void*)0},{&l_372[1][9],&l_372[1][9],&l_372[1][9]},{(void*)0,(void*)0,(void*)0},{&l_372[1][9],&l_372[1][9],&l_372[1][9]},{(void*)0,(void*)0,(void*)0},{&l_372[1][9],&l_372[1][9],&l_372[1][9]}};
        char l_375 = 0x24L;
        int * const l_453 = &g_36;
        int **l_513 = (void*)0;
        int **l_514 = &l_243[0][2];
        unsigned l_527[8][3][8] = {{{0x052D2F8EL,0x260D4BD9L,0x4ADA7129L,0xBC6A01FFL,4294967295UL,0xA4060EC5L,0x4ADA7129L,0x4AA2C10EL},{0x90578E4BL,0x7425BA78L,4294967295UL,0x260D4BD9L,0x90578E4BL,4294967291UL,0x4ADA7129L,0x7425BA78L},{4294967295UL,0x260D4BD9L,0x1F584E6BL,0xA4060EC5L,0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L}},{{0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L,4294967295UL,0x4AA2C10EL,0x4ADA7129L,0xA4060EC5L},{0x90578E4BL,0x260D4BD9L,4294967295UL,0x7425BA78L,0x90578E4BL,0xBC6A01FFL,0x4ADA7129L,0x260D4BD9L},{4294967295UL,0x7425BA78L,0x1F584E6BL,0x4AA2C10EL,0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L}},{{0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L,4294967295UL,0xA4060EC5L,0x4ADA7129L,0x4AA2C10EL},{0x90578E4BL,0x7425BA78L,4294967295UL,0x260D4BD9L,0x90578E4BL,4294967291UL,0x4ADA7129L,0x7425BA78L},{4294967295UL,0x260D4BD9L,0x1F584E6BL,0xA4060EC5L,0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L}},{{0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L,4294967295UL,0x4AA2C10EL,0x4ADA7129L,0xA4060EC5L},{0x90578E4BL,0x260D4BD9L,4294967295UL,0x7425BA78L,0x90578E4BL,0xBC6A01FFL,0x4ADA7129L,0x260D4BD9L},{4294967295UL,0x7425BA78L,0x1F584E6BL,0x4AA2C10EL,0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L}},{{0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L,4294967295UL,0xA4060EC5L,0x4ADA7129L,0x4AA2C10EL},{0x90578E4BL,0x7425BA78L,4294967295UL,0x260D4BD9L,0x90578E4BL,4294967291UL,0x4ADA7129L,0x7425BA78L},{4294967295UL,0x260D4BD9L,0x1F584E6BL,0xA4060EC5L,0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L}},{{0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L,4294967295UL,0x4AA2C10EL,0x4ADA7129L,0xA4060EC5L},{0x90578E4BL,0x260D4BD9L,4294967295UL,0x7425BA78L,0x90578E4BL,0xBC6A01FFL,0x4ADA7129L,0x260D4BD9L},{4294967295UL,0x7425BA78L,0x1F584E6BL,0x4AA2C10EL,0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L}},{{0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L,4294967295UL,0xA4060EC5L,0x4ADA7129L,0x4AA2C10EL},{0x90578E4BL,0x7425BA78L,4294967295UL,0x260D4BD9L,0x90578E4BL,4294967291UL,0x4ADA7129L,0x7425BA78L},{4294967295UL,0x260D4BD9L,0x1F584E6BL,0xA4060EC5L,0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L}},{{0x90578E4BL,0xA4060EC5L,0x1F584E6BL,0x260D4BD9L,4294967295UL,0x4AA2C10EL,0x4ADA7129L,0xA4060EC5L},{0x90578E4BL,0x260D4BD9L,4294967295UL,0x7425BA78L,0x90578E4BL,0xBC6A01FFL,0x4ADA7129L,0x260D4BD9L},{4294967295UL,0x7425BA78L,0x1F584E6BL,0x4AA2C10EL,0x90578E4BL,0x4AA2C10EL,0x1F584E6BL,0x7425BA78L}}};
        unsigned char **l_567[9] = {&l_185,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_366[i] = 5L;
        if (l_186)
        {
            long long *l_188[9][8] = {{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151}};
            const short *l_191 = &g_192;
            const short **l_190 = &l_191;
            const short ***l_189 = &l_190;
            const int l_202 = (-4L);
            unsigned long long l_224[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_224[i] = 0UL;
            if (((g_151 = g_149) || (((*l_189) = (void*)0) == (g_75 = &l_187))))
            {
                unsigned char l_209[1][5][10] = {{{249UL,1UL,0x97L,0x97L,1UL,249UL,0x1CL,249UL,1UL,0x97L},{0xCFL,0x8BL,0xCFL,0x97L,0x1CL,0x1CL,0x97L,249UL,0x1CL,249UL},{249UL,0xD0L,0x1CL,0xCFL,0x1CL,0xD0L,249UL,249UL,0xD0L,0x1CL},{0xD0L,249UL,249UL,0xD0L,0x1CL,0xCFL,0x1CL,0xD0L,249UL,249UL},{0x1CL,249UL,1UL,0x97L,0x97L,1UL,249UL,0x1CL,249UL,1UL}}};
                int **l_226[4][4][8] = {{{&g_225,&g_225,&g_35[0],&g_225,&g_225,(void*)0,&g_35[0],&g_35[0]},{&g_35[0],&g_225,(void*)0,&g_35[0],(void*)0,&g_225,&g_35[0],&g_35[0]},{&g_35[0],&g_35[0],&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_225,(void*)0},{&g_225,&g_225,&g_225,&g_35[0],&g_35[0],&g_225,&g_35[0],&g_35[0]}},{{&g_35[0],&g_225,&g_35[0],(void*)0,(void*)0,&g_35[0],&g_225,&g_35[0]},{&g_35[0],&g_225,&g_35[0],&g_35[0],&g_225,&g_225,(void*)0,&g_35[0]},{&g_225,&g_225,&g_35[0],&g_225,&g_35[0],&g_225,&g_35[0],&g_225},{&g_35[0],&g_225,&g_225,&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_225}},{{(void*)0,&g_35[0],&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_35[0],(void*)0},{(void*)0,&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_35[0],&g_35[0],&g_225},{&g_225,&g_35[0],&g_35[0],(void*)0,(void*)0,(void*)0,(void*)0,&g_35[0]},{(void*)0,(void*)0,(void*)0,&g_35[0],&g_35[0],&g_225,&g_35[0],&g_225}},{{&g_35[0],(void*)0,&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_225,&g_225},{(void*)0,&g_35[0],&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_35[0],&g_35[0]},{&g_35[0],&g_35[0],&g_35[0],(void*)0,&g_225,&g_225,&g_35[0],&g_225},{&g_225,&g_225,(void*)0,&g_35[0],(void*)0,&g_35[0],&g_225,(void*)0}}};
                int i, j, k;
                for (g_71 = 0; (g_71 <= 13); g_71++)
                {
                    int **l_195 = &g_103;
                    long long *l_216 = &g_151;
                    long long **l_217 = (void*)0;
                    long long **l_218 = (void*)0;
                    long long **l_219 = &l_216;
                    unsigned long long *l_220 = (void*)0;
                    unsigned long long *l_221 = &g_54[4][1];
                    (*l_195) = &g_72;
                    (*p_45) = ((**l_195) > (safe_sub_func_int32_t_s_s((((*l_221) = ((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(l_202, ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(0x89056195L, (safe_sub_func_uint16_t_u_u(l_209[0][2][0], ((safe_mul_func_int16_t_s_s(l_184, l_209[0][0][8])) < (safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((~(&g_151 != ((*l_219) = l_216))), (**l_195))) || g_73), l_202))))))), 0)) <= (*g_103)))) <= 0x8024L) <= (**l_195)), 0)) <= 0x325AL)) || g_82), g_131)));
                    g_225 = func_47((*l_195), g_131, &g_71, (safe_add_func_uint64_t_u_u((**l_195), (g_74 || l_224[3]))));
                }
                (*p_45) = (*p_45);
                g_225 = (g_103 = &g_74);
            }
            else
            {
                int *l_227 = &g_72;
                int **l_228 = &g_103;
                long long ***l_240 = (void*)0;
                long long ***l_241 = (void*)0;
                long long ***l_242 = &l_238;
                (*l_228) = l_227;
                (*p_45) = ((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((*l_227), (safe_lshift_func_int8_t_s_s(((p_45 == ((*l_228) = p_45)) < (g_15 != 9UL)), 2)))), (0x87E5L | l_184))) <= (~((safe_rshift_func_int8_t_s_s(l_183, 1)) >= (l_237 != &g_54[4][1]))));
                (*l_242) = l_238;
                return &g_74;
            }
        }
        else
        {
            short **l_245 = &l_244[0];
            int l_246 = 0x20DF3EF8L;
            long long ***l_252[8];
            long long ****l_251 = &l_252[1];
            short *l_253 = (void*)0;
            unsigned long long *l_257 = &g_129;
            const long long l_265[8] = {0x47AF2A45AC7D6070LL,(-1L),0x47AF2A45AC7D6070LL,0x47AF2A45AC7D6070LL,(-1L),0x47AF2A45AC7D6070LL,0x47AF2A45AC7D6070LL,(-1L)};
            long long l_266 = 0xD5AEAFD40EE2B266LL;
            int **l_267 = &l_243[3][1];
            unsigned short *l_270 = (void*)0;
            unsigned short *l_271[4] = {&g_272,&g_272,&g_272,&g_272};
            int l_275[5];
            unsigned short l_345 = 0x5831L;
            unsigned short l_373 = 4UL;
            int l_402 = 0x14DB46A2L;
            int i;
            for (i = 0; i < 8; i++)
                l_252[i] = &l_238;
            for (i = 0; i < 5; i++)
                l_275[i] = 0x14BA1329L;
            l_254 = (*p_45);
            (*l_267) = func_47(func_47(func_47(&g_71, ((*l_257) = (l_254 < (safe_sub_func_int16_t_s_s((-1L), 0x5A73L)))), &l_183, l_246), (safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(g_131, (safe_add_func_uint64_t_u_u(l_264, 0x96D331418DA4701ELL)))) && g_163) & l_246), l_265[5])), &l_183, l_183), l_265[5], &l_246, l_266);
            if ((*p_45))
            {
                unsigned l_277 = 0xFB5BD740L;
                short *l_279 = &g_95[0];
                long long l_287[2][5][7] = {{{0L,0x171682B19304D937LL,0L,(-2L),0xD98116C57B5C6C94LL,0xA247C74D67DD4783LL,0x7EEBF2CD2CC1E2D7LL},{0xD98116C57B5C6C94LL,(-1L),0xCB58D824AE4D288CLL,1L,(-4L),0x5EB81EC1E3B16488LL,0xF556A7E96D4F4355LL},{0L,0x7EEBF2CD2CC1E2D7LL,(-5L),0xA87D9E4C9B6CBF27LL,0xA247C74D67DD4783LL,0L,1L},{(-2L),0xA87D9E4C9B6CBF27LL,(-2L),0xA247C74D67DD4783LL,(-1L),0xA247C74D67DD4783LL,(-2L)},{0xA87D9E4C9B6CBF27LL,0xA87D9E4C9B6CBF27LL,0L,0x842213CFF432A1F5LL,0xD98116C57B5C6C94LL,0xE2BD186E39A06C5ALL,0x171682B19304D937LL}},{{0L,(-2L),0L,0L,0x7EEBF2CD2CC1E2D7LL,(-5L),0x842213CFF432A1F5LL},{1L,0xD98116C57B5C6C94LL,0x7EEBF2CD2CC1E2D7LL,0xA247C74D67DD4783LL,0xD98116C57B5C6C94LL,(-2L),0L},{0x171682B19304D937LL,0xF556A7E96D4F4355LL,0xE2BD186E39A06C5ALL,(-1L),(-1L),0xE2BD186E39A06C5ALL,0xF556A7E96D4F4355LL},{0x171682B19304D937LL,0L,(-2L),0xD98116C57B5C6C94LL,0xA247C74D67DD4783LL,0x7EEBF2CD2CC1E2D7LL,0xD98116C57B5C6C94LL},{1L,0x842213CFF432A1F5LL,(-5L),0x7EEBF2CD2CC1E2D7LL,0L,0L,(-2L)}}};
                int l_288 = 0x0E26F004L;
                int i, j, k;
                for (l_254 = 0; (l_254 <= 0); l_254 += 1)
                {
                    short *l_276 = &g_95[0];
                    int l_278 = (-1L);
                    long long ** const *l_292 = &l_238;
                    if ((l_277 && l_184))
                    {
                        int i;
                        if (l_289)
                            break;
                        (*l_267) = func_47(&g_74, (safe_rshift_func_int16_t_s_s((g_95[l_254] = (((l_292 == &g_250) | g_36) || l_284[4][3])), (l_277 & l_288))), func_47(&g_72, g_72, (*l_274), l_287[0][4][1]), l_278);
                        if ((*p_45))
                            continue;
                        (*l_267) = p_46;
                    }
                    else
                    {
                        return (*l_274);
                    }
                }
                (*p_45) = (*p_45);
                for (g_36 = 0; (g_36 == (-7)); g_36--)
                {
                    int l_304[5][7][2] = {{{0L,0x7F8684AFL},{(-5L),0x922BE139L},{0xDDF01C2DL,(-7L)},{(-1L),(-7L)},{0xDDF01C2DL,0x922BE139L},{(-5L),0x7F8684AFL},{0L,0x32FED8E1L}},{{5L,1L},{0xE2186725L,5L},{0L,(-5L)},{(-7L),(-1L)},{0xDC830041L,0x077705E5L},{0xA3CC2DD6L,0xA3CC2DD6L},{(-1L),0x78825F05L}},{{0x077705E5L,0L},{0x0A16C710L,0xA596C84EL},{0x995512F6L,0x0A16C710L},{0x922BE139L,1L},{0x922BE139L,0x0A16C710L},{0x995512F6L,0xA596C84EL},{0x0A16C710L,0L}},{{0x077705E5L,5L},{(-7L),0xDDF01C2DL},{0xDDF01C2DL,0x81F4DC90L},{(-1L),0xE2186725L},{1L,1L},{0x78825F05L,0x0A16C710L},{0x32FED8E1L,(-1L)}},{{0xA3CC2DD6L,0x32A05A1AL},{5L,(-5L)},{1L,(-1L)},{0xACA21FA9L,1L},{0L,1L},{0xACA21FA9L,(-1L)},{1L,(-5L)}}};
                    int i, j, k;
                    for (g_131 = 0; (g_131 < 53); g_131 = safe_add_func_uint64_t_u_u(g_131, 8))
                    {
                        return p_45;
                    }
                    for (l_183 = 0; (l_183 <= (-21)); --l_183)
                    {
                        unsigned long long l_301 = 0x7DA2CB06E81FA646LL;
                        int l_305 = (-1L);
                        l_246 = l_288;
                        l_264 = l_284[4][3];
                        l_304[0][2][1] = (*p_45);
                        (*l_267) = (void*)0;
                    }
                }
                for (g_131 = 0; (g_131 <= 39); g_131 = safe_add_func_int64_t_s_s(g_131, 2))
                {
                    unsigned char l_310 = 2UL;
                    if ((4294967290UL & (((safe_lshift_func_int8_t_s_u(g_115, 6)) ^ (**l_274)) & l_310)))
                    {
                        (*p_45) = (1UL >= g_73);
                        (*l_267) = (void*)0;
                        if ((*p_45))
                            break;
                    }
                    else
                    {
                        unsigned short l_311 = 65535UL;
                        l_311 = 0xB177A25CL;
                        return &g_115;
                    }
                }
            }
            else
            {
                int l_313[10] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                int *l_351 = (void*)0;
                int i;
                (**l_274) = l_313[8];
                for (g_149 = 0; (g_149 == 5); g_149++)
                {
                    int l_334 = 0xC84D73ABL;
                    short *l_342 = &g_68;
                    int **l_346[8] = {&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103,&g_103};
                    int i;
                    for (g_272 = 0; (g_272 <= 18); g_272 = safe_add_func_int64_t_s_s(g_272, 9))
                    {
                        volatile int *l_319 = &g_73;
                        volatile int **l_318 = &l_319;
                        const int *l_321[1];
                        const int l_332 = 0x2054FA1BL;
                        int *l_333 = (void*)0;
                        short ***l_338 = &g_75;
                        int **l_339 = &g_103;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_321[i] = &g_322;
                        (*l_318) = &g_73;
                        g_225 = ((*l_267) = func_47(func_47(&g_72, ((((safe_unary_minus_func_uint32_t_u(((l_321[0] = p_45) == (*l_318)))) > (safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((*l_319), l_313[1])) <= 65535UL), l_332))) ^ 0x08D13B49L) | l_332), l_333, l_334), g_56, &l_334, (*p_45)));
                        (*l_339) = ((*l_267) = func_47(((*l_267) = (*l_267)), (safe_add_func_int64_t_s_s(((l_337[0] == l_338) < ((*p_45) < (**l_274))), g_82)), l_333, (*g_225)));
                    }
                    p_46 = ((*l_267) = func_47(&g_71, (safe_sub_func_int32_t_s_s(l_345, (*p_45))), &g_71, l_313[7]));
                    for (g_74 = 6; (g_74 >= 0); g_74 -= 1)
                    {
                        const long long l_347 = (-1L);
                        p_46 = func_47(func_47(func_47(p_46, l_347, (*l_267), (*p_46)), (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(l_183)), 7)), (l_351 = &g_71), (*p_45)), g_74, p_45, (*p_45));
                        g_225 = p_46;
                        if (l_347)
                            break;
                    }
                    l_264 = (*p_45);
                }
            }
            for (g_82 = 0; (g_82 <= 7); g_82++)
            {
                unsigned char **l_355 = &l_185;
                unsigned char ***l_354 = &l_355;
                int l_356 = 0xAED7EF58L;
                long long **l_357 = &l_239;
                unsigned char **l_385 = &l_185;
                int l_389 = 0xF5721435L;
            }
        }
        if (((l_264 != (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((*l_187) = (**l_274)), l_327)), (safe_sub_func_int64_t_s_s(((l_254 || ((l_273 != (l_183 = ((safe_rshift_func_uint16_t_u_s(l_183, l_284[0][4])) & (safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((0x3AL < (**l_274)), 0x618CL)) | g_367), 0x5E3E30E113E8822BLL))))) & l_284[4][3])) < g_36), l_273))))) & g_73))
        {
            const char l_417[4] = {(-1L),(-1L),(-1L),(-1L)};
            const short *l_446 = &g_192;
            short *l_449[3];
            const int *l_454 = (void*)0;
            int *l_491 = &g_115;
            int **l_495 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_449[i] = &g_95[0];
            for (g_272 = 0; (g_272 < 41); ++g_272)
            {
                unsigned l_424 = 4294967287UL;
                int *l_452 = &g_36;
                if (l_417[1])
                    break;
                if (l_254)
                    break;
                for (l_273 = 0; (l_273 <= 0); l_273 += 1)
                {
                    int l_419 = 0x0CFE8411L;
                    long long l_425 = 0xB83365428C100A3ELL;
                    short *l_450 = &g_68;
                    int i;
                    if (((((*l_312) = (((g_272 || l_254) >= 0xA0A0L) >= l_425)) && g_95[l_273]) != g_163))
                    {
                        int **l_426 = &g_225;
                        (*l_426) = p_45;
                        (**l_274) = l_417[1];
                    }
                    else
                    {
                        return p_46;
                    }
                    (*g_225) = l_284[2][9];
                    for (g_56 = 0; (g_56 <= 14); ++g_56)
                    {
                        return p_46;
                    }
                    if ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((**l_274) = (safe_add_func_int32_t_s_s(((((safe_unary_minus_func_uint32_t_u(g_151)) < (safe_add_func_uint16_t_u_u(g_390, l_417[1]))) | (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_115, (safe_lshift_func_uint8_t_u_s((((l_183 = (l_184 | ((((+(**l_274)) && (l_419 = (safe_sub_func_int8_t_s_s(g_82, ((g_447 = l_446) == (l_450 = (l_244[4] = l_449[1]))))))) == l_183) < l_424))) <= g_95[l_273]) != l_424), l_424)))), l_417[1]))) == 0x3C48A451L), l_417[1]))) >= 0L), 1L)), 65535UL)))
                    {
                        int **l_451 = (void*)0;
                        g_225 = func_47((p_46 = (void*)0), g_72, l_452, (1UL < (1UL != g_95[l_273])));
                    }
                    else
                    {
                        p_45 = l_453;
                        if ((*g_225))
                            continue;
                    }
                }
                p_46 = p_45;
            }
            l_454 = &g_322;
            if ((*p_45))
            {
                const int *l_455[4][8] = {{&g_74,&g_72,&g_74,&g_74,&g_72,&g_74,&g_74,&g_72},{&g_72,&g_74,&g_74,&g_72,&g_74,&g_74,&g_72,&g_74},{&g_72,&g_72,(void*)0,&g_72,&g_72,(void*)0,&g_72,&g_72},{&g_74,&g_72,&g_74,&g_74,&g_72,&g_74,&g_74,&g_72}};
                int i, j;
                l_455[3][3] = l_454;
            }
            else
            {
                unsigned char **l_466[3][7] = {{&l_185,&l_185,&l_185,&l_185,&l_185,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,&l_185,(void*)0,&l_185},{&l_185,&l_185,&l_185,&l_185,&l_185,&l_185,&l_185}};
                unsigned char ***l_465[9] = {&l_466[0][2],&l_466[2][3],&l_466[2][3],&l_466[0][2],&l_466[2][3],&l_466[2][3],&l_466[0][2],&l_466[2][3],&l_466[2][3]};
                int l_473 = 0x6DBFC584L;
                int l_484 = 9L;
                int **l_489 = (void*)0;
                int **l_490[9] = {&g_225,&g_225,&g_225,&g_225,&g_225,&g_225,&g_225,&g_225,&g_225};
                int i, j;
                for (l_183 = 0; (l_183 < 13); l_183++)
                {
                    unsigned char l_461 = 0UL;
                    unsigned long long *l_464 = &g_56;
                    unsigned char ***l_471 = &l_466[1][1];
                    for (g_72 = 12; (g_72 != 29); g_72++)
                    {
                        const int **l_460 = &l_454;
                        unsigned char ****l_467[7][2] = {{&l_465[3],&l_465[8]},{&l_465[3],&l_465[8]},{&l_465[3],&l_465[8]},{&l_465[3],&l_465[8]},{&l_465[3],&l_465[8]},{&l_465[3],&l_465[8]},{&l_465[3],&l_465[8]}};
                        int i, j;
                        (*l_460) = &g_322;
                        if ((**l_460))
                            continue;
                        (**l_274) = ((l_461 > ((g_462[3] != l_464) & ((**l_460) > ((g_468 = l_465[8]) == (g_472[0][3][0] = l_471))))) == l_473);
                        (*l_460) = l_454;
                    }
                    if (l_461)
                    {
                        unsigned long long **l_475 = &l_464;
                        unsigned long long ***l_474 = &l_475;
                        (*l_474) = (void*)0;
                        (*p_45) = ((safe_lshift_func_int8_t_s_u(0x96L, 7)) != 0x6AC3L);
                        (*p_45) = l_184;
                        if ((*l_453))
                            continue;
                    }
                    else
                    {
                        unsigned l_487 = 0UL;
                        int **l_488 = &g_103;
                        (**l_274) = (safe_mul_func_int16_t_s_s((((((**g_469) = l_473) ^ (l_273 != ((**l_274) && (safe_mod_func_int16_t_s_s(l_473, l_264))))) != ((l_461 >= ((l_484 || ((safe_mod_func_uint16_t_u_u(((0x77L <= ((void*)0 != p_46)) > l_487), l_327)) && g_131)) == l_461)) == l_264)) > 0x1CAFE624L), l_484));
                        (*l_488) = p_46;
                        (*l_488) = &l_473;
                    }
                    return &g_74;
                }
                (*l_453) = (*p_45);
                p_45 = (void*)0;
                l_494[1][4][0] = func_47(l_491, (+(safe_rshift_func_uint16_t_u_u(((&l_417[1] != &g_149) <= (*l_491)), 15))), func_47(func_47(func_47(func_47((p_45 = (p_46 = p_46)), l_284[4][3], func_47((*l_274), (**l_274), func_47(&g_74, (*l_454), &g_36, (*l_491)), l_284[0][2]), (*l_454)), (*l_491), &l_183, (*l_454)), (*l_454), &l_183, l_327), l_273, &g_71, (*l_454)), (*l_491));
            }
            g_225 = (p_46 = &l_264);
        }
        else
        {
            short *l_502 = &g_95[0];
            unsigned char *l_503 = &g_504[2][4];
            unsigned long long l_507 = 0x122325088D056381LL;
            unsigned char l_510[3][4] = {{0x02L,0x02L,0x02L,0x02L},{0x02L,0x02L,0x02L,0x02L},{0x02L,0x02L,0x02L,0x02L}};
            int i, j;
            g_512[0] = (safe_mod_func_uint8_t_u_u((g_322 == ((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_511[6], l_507)) ^ (*l_453)), 0)) >= 0x9696558AL)), 0x75L));
        }
        (*l_514) = p_46;
        for (g_149 = (-9); (g_149 > (-6)); g_149++)
        {
            unsigned short l_528 = 0UL;
            int l_529 = (-6L);
            int l_530 = 0x05AA8E4DL;
            int l_534 = 0L;
            for (l_375 = 1; (l_375 >= 0); l_375 -= 1)
            {
                long long l_523 = 0x93839A2F2D957EADLL;
                int i, j;
                if (g_54[(l_375 + 2)][l_375])
                {
                    for (g_71 = 0; (g_71 <= 6); g_71 += 1)
                    {
                        int i, j;
                        (*l_514) = p_45;
                        (**l_274) = (safe_mod_func_uint64_t_u_u(1UL, ((g_72 ^ 0L) | (safe_mod_func_uint64_t_u_u((0xE6L | ((void*)0 == &l_372[l_375][(g_71 + 2)])), 0x7667977D003DA39CLL)))));
                        (**l_274) = (safe_mul_func_int16_t_s_s(0xF971L, l_523));
                    }
                }
                else
                {
                    int **l_524[9] = {&l_243[0][1],&l_243[0][1],&l_494[4][2][0],&l_243[0][1],&l_243[0][1],&l_494[4][2][0],&l_243[0][1],&l_243[0][1],&l_494[4][2][0]};
                    int ***l_525[8] = {(void*)0,(void*)0,&l_513,(void*)0,(void*)0,&l_513,(void*)0,(void*)0};
                    int i;
                    g_526 = l_524[4];
                    (*g_526) = &l_264;
                    for (g_151 = 0; (g_151 <= 2); g_151 += 1)
                    {
                        return p_45;
                    }
                }
                (*l_453) = l_527[1][1][0];
            }
            (*l_453) = (**l_274);
        }
    }
    else
    {
        long long ****l_573[10] = {&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361,&g_361};
        long long *****l_574[1][3];
        const long long *l_585 = &g_151;
        int l_586 = 8L;
        int l_587 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_574[i][j] = &l_573[3];
        }
        p_46 = ((*g_526) = p_45);
        (*g_526) = func_47((*g_526), ((g_575[3] = l_573[1]) != (l_576 = l_576)), (*g_526), (safe_rshift_func_int16_t_s_s(((l_586 = (safe_div_func_int64_t_s_s(7L, (((*l_370) = (((*l_237) = ((0xDF8CF99DL < (((*l_540) || ((0L || ((((safe_add_func_int32_t_s_s((&g_151 != l_585), (**g_526))) < g_448) != 0UL) && (-3L))) < g_131)) && l_586)) > 0xEE7B5125L)) ^ (*l_540))) ^ l_586)))) <= l_587), 10)));
    }
    for (g_115 = 0; (g_115 < 1); g_115 = safe_add_func_int8_t_s_s(g_115, 1))
    {
        int * const l_590 = &l_264;
        int **l_591 = &l_540;
        short *l_594 = (void*)0;
        short *l_607 = &g_68;
        int l_614 = 0xD16FD0BAL;
        (*l_591) = l_590;
        for (g_272 = 2; (g_272 <= 45); ++g_272)
        {
            short *l_595 = &g_68;
            int l_596[2];
            unsigned char ***l_602 = &g_469;
            short l_603[10] = {0L,(-1L),(-1L),0L,5L,0L,(-1L),(-1L),0L,5L};
            short *l_608[6][1];
            long long ** const *l_637 = &l_578;
            int l_639 = 6L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_596[i] = 0x89DF6056L;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_608[i][j] = &g_95[0];
            }
        }
    }
    p_46 = &l_264;
    if ((*l_540))
    {
        short *l_671 = &l_533;
        int l_674 = 0xAFA7BB1EL;
        int *l_690 = &g_367;
        unsigned short *l_697 = &g_272;
        char *l_706 = &l_254;
        int **l_707 = (void*)0;
        int *l_709[2];
        int **l_708 = &l_709[0];
        int i;
        for (i = 0; i < 2; i++)
            l_709[i] = (void*)0;
        for (l_533 = 29; (l_533 >= 0); l_533 = safe_sub_func_uint32_t_u_u(l_533, 9))
        {
            unsigned l_672 = 0xD86D5735L;
            for (g_151 = 9; (g_151 >= (-5)); g_151--)
            {
                volatile int *l_668 = &g_73;
                volatile int **l_667 = &l_668;
                int *l_673 = &l_327;
                int **l_675 = &g_662;
                (*l_667) = &g_163;
                (*l_540) = (safe_sub_func_int64_t_s_s((*l_668), (5L > (!l_674))));
                (*l_675) = &l_264;
            }
        }
        if ((safe_rshift_func_int16_t_s_u((l_674 | 0xF1C4L), (safe_rshift_func_int8_t_s_u(0xFFL, 4)))))
        {
            (*l_540) = 0x24B13819L;
        }
        else
        {
            short *l_682 = &g_95[0];
            int *l_689 = &g_367;
            for (g_367 = (-4); (g_367 == 26); g_367 = safe_add_func_int64_t_s_s(g_367, 1))
            {
                unsigned l_688 = 0x240C9EFAL;
                if (l_688)
                {
                    return l_689;
                }
                else
                {
                    return l_690;
                }
            }
        }
        (*g_662) = (((*g_702) = ((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(18446744073709551606UL, ((***g_648) = (safe_mul_func_uint16_t_u_u(((*l_697) = (*l_690)), (l_698 < (*l_690))))))), (safe_add_func_int64_t_s_s(((((l_701 = (void*)0) != ((*l_708) = func_47(p_46, (((*l_706) = (*l_690)) & (*l_690)), &g_115, (*l_690)))) & (*l_690)) ^ 0xB4E672CFL), 0xDD822285682284DBLL)))) < (-6L))) || (*l_690));
        return p_45;
    }
    else
    {
        char l_716 = 1L;
        short *l_719[7] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
        int l_721 = 0xCE1B9C0FL;
        const int l_772 = 0xEAC2D19EL;
        unsigned l_787 = 0UL;
        int *l_792[3];
        unsigned l_813[10][6][2] = {{{0xDFA40CBFL,0xF671A908L},{0x4D7BD106L,6UL},{0x0ED7338EL,0xDB973460L},{0x6294B8C8L,0xDB973460L},{0x0ED7338EL,6UL},{0x4D7BD106L,0xF671A908L}},{{0xDFA40CBFL,0UL},{0x0ED7338EL,0x010FA27AL},{0x44D60D14L,0xDB973460L},{2UL,0UL},{0x4D7BD106L,18446744073709551615UL},{0x4D7BD106L,0UL}},{{2UL,0xDB973460L},{0x44D60D14L,0x010FA27AL},{0x0ED7338EL,0UL},{0xDFA40CBFL,0xF671A908L},{0x4D7BD106L,6UL},{0x0ED7338EL,0xDB973460L}},{{0x6294B8C8L,0xDB973460L},{0x0ED7338EL,6UL},{0x4D7BD106L,0xF671A908L},{0xDFA40CBFL,0UL},{0x0ED7338EL,0x010FA27AL},{0x44D60D14L,0xDB973460L}},{{2UL,0UL},{0x4D7BD106L,18446744073709551615UL},{0x4D7BD106L,0UL},{2UL,0xDB973460L},{0x44D60D14L,0x010FA27AL},{0x0ED7338EL,0UL}},{{0xDFA40CBFL,0xF671A908L},{0x4D7BD106L,6UL},{0x0ED7338EL,0xDB973460L},{0x6294B8C8L,0xDB973460L},{0x0ED7338EL,6UL},{0x4D7BD106L,0xF671A908L}},{{0xDFA40CBFL,0UL},{0x0ED7338EL,0x010FA27AL},{0x44D60D14L,0xDB973460L},{2UL,0UL},{0x4D7BD106L,18446744073709551615UL},{0x4D7BD106L,0UL}},{{2UL,0xDB973460L},{0x44D60D14L,0x010FA27AL},{0x0ED7338EL,0UL},{0xDFA40CBFL,0xF671A908L},{0x4D7BD106L,6UL},{0x0ED7338EL,0xDB973460L}},{{18446744073709551611UL,0UL},{0x81522578L,0x0D9E6337L},{0x0ED7338EL,0UL},{2UL,1UL},{0x81522578L,6UL},{0x0D210BF2L,0UL}},{{5UL,1UL},{0x0ED7338EL,18446744073709551615UL},{0x0ED7338EL,1UL},{5UL,0UL},{0x0D210BF2L,6UL},{0x81522578L,1UL}}};
        int **l_827 = &l_569;
        int **l_828[3][6][9];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_792[i] = &g_115;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 9; k++)
                    l_828[i][j][k] = &l_540;
            }
        }
        (*p_46) = ((safe_lshift_func_int8_t_s_u(((-1L) & (0xD8L && g_322)), ((*l_185) = (safe_div_func_int16_t_s_s((*g_702), (l_721 = (safe_mul_func_int16_t_s_s(l_716, (l_716 | 0L))))))))) & l_716);
        for (l_533 = 0; (l_533 < 6); ++l_533)
        {
            unsigned l_724 = 0x1304C13AL;
            short *l_734 = &g_95[0];
            long long l_743 = (-1L);
            unsigned char ****l_764 = &g_468;
            int l_767 = (-7L);
            int *l_824 = &g_115;
            int **l_826 = &l_824;
        }
        p_45 = ((*l_827) = p_45);
    }
    return g_829[3];
}







static int * func_47(int * p_48, const unsigned long long p_49, int * p_50, int p_51)
{
    g_103 = (void*)0;
    return &g_36;
}







static unsigned long long func_60(short * p_61, unsigned char p_62, short p_63, int p_64)
{
    unsigned l_169 = 0x32FEFF4BL;
    int l_170 = 0L;
    l_170 = (p_64 > l_169);
    for (p_63 = 0; (p_63 <= 0); p_63 += 1)
    {
        unsigned *l_175 = &g_131;
        int i;
        (*g_103) = (safe_add_func_uint32_t_u_u(g_95[p_63], ((*l_175) = (((safe_add_func_uint32_t_u_u(4294967295UL, (&g_75 == &g_75))) == g_95[p_63]) != g_72))));
        return g_95[p_63];
    }
    return p_63;
}







static short * func_65(short * p_66)
{
    int l_69[8] = {0x4DBDF902L,0x4DBDF902L,0x4DBDF902L,0x4DBDF902L,0x4DBDF902L,0x4DBDF902L,0x4DBDF902L,0x4DBDF902L};
    unsigned l_102 = 0xE955DDCFL;
    int l_141 = 0L;
    short *l_147 = &g_68;
    int i;
    for (g_68 = 0; (g_68 <= 7); g_68 += 1)
    {
        int *l_70 = &g_36;
        const short ***l_142 = (void*)0;
        int l_159 = 1L;
        volatile int l_164 = (-8L);
        short *l_166[10] = {&g_95[0],&g_68,&g_68,&g_95[0],&g_68,&g_68,&g_95[0],&g_68,&g_68,&g_95[0]};
        int **l_167 = &l_70;
        int i;
        if (l_69[g_68])
            break;
        if (((void*)0 == l_70))
        {
            for (g_71 = 0; (g_71 <= 7); g_71 += 1)
            {
                short *l_85[9] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
                int i;
                for (g_72 = 1; (g_72 <= 7); g_72 += 1)
                {
                    long long l_77 = 0x41960CC19AB5AA9DLL;
                    int **l_78 = &l_70;
                    unsigned char *l_81 = &g_82;
                    int l_86 = 0xA4CC78B9L;
                    for (g_74 = 7; (g_74 >= 1); g_74 -= 1)
                    {
                        short ***l_76[8][10][3] = {{{&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0},{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0}},{{&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75}},{{&g_75,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75},{&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75}},{{(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75}},{{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75},{&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75}},{{&g_75,&g_75,(void*)0},{&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75},{&g_75,(void*)0,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,&g_75,&g_75}}};
                        int i, j, k;
                        g_75 = g_75;
                        if (l_77)
                            continue;
                    }
                    (*l_78) = &g_71;
                    if (((safe_sub_func_uint16_t_u_u((*l_70), (((*l_81) = 1UL) && (-1L)))) & (1UL & (!(safe_lshift_func_uint8_t_u_u(l_69[3], 0))))))
                    {
                        return l_85[5];
                    }
                    else
                    {
                        l_86 = 0x70526E61L;
                    }
                    for (l_86 = 7; (l_86 >= 0); l_86 -= 1)
                    {
                        int l_87 = 0x0BA59A11L;
                        l_87 = l_69[4];
                    }
                }
            }
        }
        else
        {
            int *l_88 = &g_74;
            (*l_88) = (*l_70);
            for (g_72 = 1; (g_72 <= 7); g_72 += 1)
            {
                unsigned l_93 = 0x0F218D36L;
            }
        }
        for (g_71 = 7; (g_71 >= 0); g_71 -= 1)
        {
            unsigned char l_106 = 1UL;
            const unsigned long long **l_116 = (void*)0;
            int l_133[2][3] = {{0x9135E92AL,0x9135E92AL,0x9135E92AL},{0x90F5299BL,0x90F5299BL,0x90F5299BL}};
            const short *l_145 = &g_95[0];
            const short **l_144[3][8][4] = {{{&l_145,&l_145,(void*)0,&l_145},{&l_145,&l_145,&l_145,&l_145},{(void*)0,&l_145,&l_145,(void*)0},{&l_145,(void*)0,&l_145,&l_145},{(void*)0,(void*)0,&l_145,&l_145},{(void*)0,(void*)0,&l_145,&l_145},{&l_145,&l_145,&l_145,(void*)0},{(void*)0,&l_145,&l_145,(void*)0}},{{&l_145,(void*)0,(void*)0,&l_145},{&l_145,(void*)0,&l_145,&l_145},{&l_145,(void*)0,&l_145,(void*)0},{&l_145,&l_145,(void*)0,(void*)0},{&l_145,(void*)0,(void*)0,&l_145},{(void*)0,(void*)0,&l_145,&l_145},{&l_145,(void*)0,&l_145,(void*)0},{&l_145,&l_145,&l_145,(void*)0}},{{(void*)0,&l_145,&l_145,&l_145},{&l_145,(void*)0,&l_145,&l_145},{&l_145,(void*)0,&l_145,&l_145},{&l_145,(void*)0,&l_145,(void*)0},{(void*)0,&l_145,&l_145,&l_145},{&l_145,&l_145,&l_145,&l_145},{&l_145,&l_145,&l_145,&l_145},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            const short ***l_143[9][6] = {{&l_144[0][6][0],&l_144[0][3][3],&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0],(void*)0,&l_144[0][6][0],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][3][3],(void*)0,(void*)0,&l_144[0][3][3],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][6][0],(void*)0,&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0],&l_144[0][3][3],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][3][3],&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0],(void*)0,&l_144[0][6][0],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][3][3],(void*)0,(void*)0,&l_144[0][3][3],&l_144[0][6][0]},{&l_144[0][6][0],&l_144[0][6][0],(void*)0,&l_144[0][6][0],&l_144[0][6][0],&l_144[0][6][0]}};
            int i, j, k;
            g_103 = &g_71;
        }
        (*l_167) = &g_71;
    }
    return l_147;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_19[i], "g_19[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_54[i][j], "g_54[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_504[i][j], "g_504[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_512[i], "g_512[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_770[i][j][k], "g_770[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1016[i][j][k], "g_1016[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1156[i], "g_1156[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1229[i], "g_1229[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1326[i], "g_1326[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1362[i][j][k], "g_1362[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1431, "g_1431", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
