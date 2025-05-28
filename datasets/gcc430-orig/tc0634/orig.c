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



static unsigned short g_7[2][3][5] = {{{0x6BAFL, 0UL, 0UL, 0UL, 4UL}, {0x6BAFL, 0UL, 0UL, 0UL, 4UL}, {0x6BAFL, 0UL, 0UL, 0UL, 4UL}}, {{0x6BAFL, 0UL, 0UL, 0UL, 4UL}, {0x6BAFL, 0UL, 0UL, 0UL, 4UL}, {0x6BAFL, 0UL, 0UL, 0UL, 4UL}}};
static int g_9 = 0xB0815898L;
static int g_61 = 3L;
static int *g_69 = &g_61;
static int **g_68 = &g_69;
static unsigned char g_92 = 0x3BL;
static int g_98 = 2L;
static int *g_242 = (void*)0;
static unsigned short g_351 = 0xF261L;
static int g_463 = 1L;
static char g_687 = 0x27L;
static unsigned g_736 = 0x559A8B25L;
static unsigned char g_809 = 4UL;
static unsigned short g_815 = 1UL;
static int g_858 = 0L;
static unsigned short g_927 = 65529UL;
static unsigned g_949 = 0x653E6EFFL;
static int g_1001[10][2][5] = {{{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}, {{0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}, {0x8C82FC3AL, 0x1507957BL, 0L, 0xF963FC11L, (-1L)}}};
static int g_1002 = 0xC660DC77L;
static unsigned char g_1140 = 0x18L;



static unsigned char func_1(void);
static int func_5(short p_6);
static unsigned func_13(unsigned short p_14, int * p_15, int ** p_16);
static int func_17(unsigned short p_18, int * p_19, int * p_20, int ** p_21);
static int * func_23(unsigned p_24, unsigned char p_25, short p_26, unsigned char p_27);
static unsigned char func_29(int p_30, int * p_31, unsigned char p_32, unsigned char p_33, unsigned short p_34);
static unsigned short func_37(int * p_38, int p_39, int ** p_40, int * p_41, int ** p_42);
static int * func_43(int ** p_44, unsigned p_45);
static unsigned short func_46(int * p_47, int p_48, unsigned short p_49);
static int * func_64(int * p_65, int ** p_66, unsigned p_67);
static unsigned char func_1(void)
{
    unsigned l_4 = 0xD59E57ADL;
    int *l_1178 = &g_858;
    int **l_1179 = &l_1178;
    (*l_1178) = ((safe_add_func_int32_t_s_s(l_4, func_5(g_7[1][2][4]))) , (safe_sub_func_uint8_t_u_u(g_1140, 255UL)));



    ;
    (*l_1179) = l_1178;
    return (**l_1179);
}







static int func_5(short p_6)
{
    int *l_8 = &g_9;
    int **l_10 = &l_8;
    int *l_928 = &g_858;
    unsigned l_932 = 1UL;
    int *l_956 = &g_463;
    char l_965[1];
    int l_1013 = (-3L);
    char l_1030[7][5][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}};
    int l_1041[4] = {6L, 1L, 6L, 1L};
    int **l_1057 = &g_69;
    int *l_1059 = &g_1001[8][0][1];
    unsigned char l_1060 = 0x9DL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_965[i] = 0x8AL;
    (*l_10) = l_8;
    (*l_928) = (+((((p_6 < p_6) >= (safe_lshift_func_uint16_t_u_s(g_9, 1))) | func_13(g_7[0][2][1], &g_9, ((*l_8) , &l_8))) | (g_927 != 9L)));




    ;
    if ((0L <= ((*l_928) , (*l_928))))
    {
        int *l_931 = &g_61;
        int *l_937 = &g_9;
        unsigned l_944[3];
        int ***l_988 = &g_68;
        int *l_1010 = (void*)0;
        int l_1034 = 9L;
        int i;
        for (i = 0; i < 3; i++)
            l_944[i] = 0x58018FAFL;
        (*l_10) = ((p_6 , ((+(safe_rshift_func_uint8_t_u_u(g_687, g_815))) != (*l_937))) , l_937);

        ;
        (*l_10) = (void*)0;

        ;
        if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(0x71L, 1)) ^ p_6), ((safe_mod_func_uint16_t_u_u(((((((&g_68 == &l_10) == (*l_931)) , 4294967295UL) , (*l_937)) , &g_69) != &l_928), 1UL)) && g_949))))
        {
            unsigned short l_950 = 1UL;
            int *l_955 = (void*)0;
            (*l_937) = (l_950 | g_9);
            for (g_815 = 0; (g_815 <= 6); g_815++)
            {
                int ***l_953 = &l_10;
                char l_970[4][10][5] = {{{0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}}, {{0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}}, {{0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}}, {{0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}, {0x53L, 0xE9L, (-7L), 0xE9L, 0x53L}}};
                int ***l_985 = (void*)0;
                int i, j, k;
                (*l_10) = &g_9;

                ;
            }

            ;
        }
        else
        {
            unsigned l_999 = 0x74987087L;
            int *l_1005 = (void*)0;
            int *l_1011 = &g_1001[2][0][4];
            int **l_1033 = (void*)0;
            for (g_463 = 0; (g_463 <= (-18)); g_463 = safe_sub_func_int32_t_s_s(g_463, 1))
            {
                int **l_1000 = &l_928;
                for (g_949 = 0; (g_949 >= 45); g_949++)
                {
                    for (g_98 = (-14); (g_98 == 5); g_98++)
                    {
                        (*l_937) = (safe_rshift_func_int8_t_s_s((-2L), 1));
                        (*l_937) = (((safe_lshift_func_int16_t_s_u(0x2E8DL, 11)) , p_6) && g_7[0][0][4]);
                        l_999 = p_6;
                    }
                    (*l_988) = l_1000;

                    ;
                    (*l_10) = (*g_68);

                    ;
                }
            }

            ;

            for (g_927 = 0; (g_927 <= 1); g_927 += 1)
            {
                int *l_1003 = &g_1001[3][1][2];
                int ***l_1004 = &g_68;
                (*l_10) = l_1005;

                ;
                if ((((*l_956) > (*l_928)) > (0UL || (safe_rshift_func_uint16_t_u_s(((((!p_6) , l_1005) == (((safe_add_func_uint16_t_u_u((((((&g_9 == (void*)0) , ((((g_1002 != 1L) < 4L) , &l_10) != &g_68)) | g_61) ^ 0x565EL) || 0xF92CL), 3L)) , p_6) , l_1010)) & g_7[1][2][4]), g_736)))))
                {
                    int *l_1012 = &g_463;
                    l_1012 = l_1011;

                    ;
                }
                else
                {
                    int *l_1014 = &g_463;
                    char l_1028 = 0L;
                    int l_1029 = 0x34204503L;
                    if (l_1013)
                    {
                        int *l_1027 = &g_9;
                        (*l_10) = l_1027;

                        ;
                        (*l_931) = (((((*l_8) & ((safe_add_func_int32_t_s_s((g_7[0][0][1] | ((p_6 <= p_6) && g_1001[8][0][1])), 0x55AA6360L)) & 0xD21FL)) != p_6) & 65532UL) > 65535UL);
                        (*l_956) = p_6;
                    }
                    else
                    {
                        unsigned l_1035 = 0UL;
                        (*l_1014) = p_6;
                        (*l_10) = (l_1035 , (void*)0);
                        (*l_10) = (*l_10);
                    }

                    ;
                }

                ;
                if ((~0x4B3CA398L))
                {
                    for (g_809 = 0; g_809 < 2; g_809 += 1)
                    {
                        for (g_92 = 0; g_92 < 3; g_92 += 1)
                        {
                            for (g_98 = 0; g_98 < 5; g_98 += 1)
                            {
                                g_7[g_809][g_92][g_98] = 0x67CDL;
                            }
                        }
                    }
                }
                else
                {
                    int **l_1036[3][8] = {{&l_937, &l_1003, &l_937, &l_1003, &l_937, &l_1003, &l_937, &l_1003}, {&l_937, &l_1003, &l_937, &l_1003, &l_937, &l_1003, &l_937, &l_1003}, {&l_937, &l_1003, &l_937, &l_1003, &l_937, &l_1003, &l_937, &l_1003}};
                    int l_1048 = 0x857FA1D3L;
                    int i, j;
                    (*l_10) = &g_98;

                    ;
                    (*l_956) = p_6;
                    (*l_10) = l_1005;

                    ;
                    (*l_956) = ((0x2C8EL >= ((safe_rshift_func_int8_t_s_s(g_858, 0)) , (safe_rshift_func_uint16_t_u_u((((65527UL || l_1041[2]) | (safe_add_func_int8_t_s_s((p_6 , p_6), (*l_931)))) , g_858), 2)))) , p_6);
                }
                for (g_949 = 0; (g_949 <= 1); g_949 += 1)
                {
                    int *l_1052 = &l_1034;
                    if ((3L && (*l_931)))
                    {
                        int *l_1051 = (void*)0;
                        l_1051 = func_23(p_6, g_927, g_1001[6][1][1], p_6);

                        ;
                        return (*l_931);


                    }
                    else
                    {
                        int **l_1058 = &l_1052;
                        int l_1061 = 0x9E89B326L;
                        (*l_956) = (((((((l_1052 != (void*)0) > 0x0B90L) > ((safe_sub_func_int16_t_s_s(g_7[1][2][4], 5UL)) > ((safe_sub_func_int16_t_s_s((((p_6 | 0x6A03L) , g_736) | g_815), 5L)) & 0xCE573B74L))) , 0xF7C7A428L) != 0xA11A762FL) ^ p_6) , 0x18565031L);
                        return l_1061;


                    }
                }
            }

            ;
        }

        ;

    }
    else
    {
        unsigned char l_1068[6] = {0x0FL, 0x0FL, 4UL, 0x0FL, 0x0FL, 4UL};
        int *l_1071 = &g_463;
        short l_1072 = 0xC632L;
        int *l_1075 = &l_1013;
        unsigned l_1076[8][6][5] = {{{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}, {{4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}, {4294967290UL, 1UL, 0UL, 0x021E4C61L, 4294967295UL}}};
        int i, j, k;
        (*l_1057) = func_23(((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((void*)0 == &g_242), p_6)) >= (safe_add_func_int16_t_s_s(l_1068[1], ((safe_rshift_func_uint16_t_u_u((g_687 & (-7L)), (*l_956))) < l_1072)))), 0xB919E186L)) , (*l_956)), p_6, p_6, p_6);

        ;
        (**l_1057) = ((safe_add_func_uint8_t_u_u(((l_1076[5][1][4] , p_6) <= 0x7BL), g_858)) , (**l_1057));
        (*l_10) = l_1075;

        ;
    }

    ;

    for (g_98 = 6; (g_98 == (-9)); g_98 = safe_sub_func_uint8_t_u_u(g_98, 1))
    {
        unsigned char l_1079 = 248UL;
        int *l_1081 = &g_9;
        int l_1103 = 0x655B03D0L;
        unsigned short l_1135 = 0x8AF1L;
        char l_1170 = (-10L);
        unsigned char l_1171[10][7][3] = {{{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}, {{254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}, {254UL, 0xECL, 1UL}}};
        int i, j, k;
        if ((l_1079 == (1UL != (0UL ^ (-5L)))))
        {
            int *l_1089 = &g_9;
            unsigned char l_1093 = 7UL;
            short l_1141 = 0xD0AEL;
            for (g_61 = 0; (g_61 <= 0); g_61 += 1)
            {
                int l_1080 = 0x91628112L;
                int *l_1102 = &l_1013;
                for (g_736 = 0; g_736 < 7; g_736 += 1)
                {
                    for (l_1013 = 0; l_1013 < 5; l_1013 += 1)
                    {
                        for (l_932 = 0; l_932 < 1; l_932 += 1)
                        {
                            l_1030[g_736][l_1013][l_932] = 0x74L;
                        }
                    }
                }
                (*l_956) = l_1080;
            }
            for (l_1103 = 0; (l_1103 <= 0); l_1103 += 1)
            {
                int **l_1130 = &l_956;
                for (g_351 = 0; (g_351 <= 0); g_351 += 1)
                {
                    int i, j, k;
                    (*l_1057) = ((safe_unary_minus_func_int16_t_s((((p_6 < (((safe_mod_func_uint16_t_u_u((&g_69 != l_1130), (safe_lshift_func_int16_t_s_s(g_1002, 1)))) <= (g_949 == (safe_rshift_func_int8_t_s_u((9L > p_6), ((0x06L > (p_6 == (*l_1089))) , p_6))))) <= p_6)) || p_6) , g_61))) , &l_1103);

                    ;
                    g_1001[(g_351 + 9)][l_1103][g_351] = (l_1135 < p_6);
                    if (p_6)
                    {
                        (*l_1059) = ((void*)0 != &l_1081);
                        (*l_10) = (void*)0;

                        ;
                        (**l_1130) = (((safe_lshift_func_uint16_t_u_u((g_858 <= (safe_lshift_func_int8_t_s_s((p_6 >= 0x5DL), g_736))), ((((void*)0 != (*l_1057)) , g_61) != p_6))) <= (((g_1001[(g_351 + 9)][l_1103][g_351] || (*l_1081)) != g_1140) , l_1141)) >= 1UL);
                    }
                    else
                    {
                        char l_1149 = (-1L);
                        (*l_956) = p_6;
                        (*l_10) = &l_1103;

                        ;
                        if ((*l_1089))
                            continue;
                        (*l_956) = (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_u(g_1001[(g_351 + 9)][l_1103][g_351], (safe_sub_func_uint8_t_u_u(253UL, (safe_add_func_uint8_t_u_u(l_1149, g_815)))))) ^ (safe_mod_func_int8_t_s_s(g_815, (p_6 && ((p_6 , g_92) || (*l_1089))))))));
                    }

                    ;
                }

                ;

                for (g_809 = 0; (g_809 <= 0); g_809 += 1)
                {
                    int i;
                    if (l_965[l_1103])
                        break;
                    (*l_1059) = (*l_1089);
                    for (l_1079 = 0; (l_1079 <= 0); l_1079 += 1)
                    {
                        int i, j, k;
                        l_1089 = (void*)0;

                        ;
                        g_1001[(l_1103 + 7)][(g_809 + 1)][(g_809 + 1)] = ((safe_rshift_func_int8_t_s_s((g_7[(g_809 + 1)][g_809][g_809] > (l_965[l_1103] == (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((p_6 && (p_6 == 0L)) > ((safe_add_func_int8_t_s_s((p_6 ^ (safe_rshift_func_uint16_t_u_u((g_92 | (safe_mod_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((*l_956) < 0xD4L) <= (-3L)), p_6)), p_6)) & (*l_1081)) , l_1170) | g_9), l_1171[1][5][2]))), 3))), 0x5FL)) >= (*l_1081))) , g_463), 0x1180L)), 0)))), (*l_1081))) >= 3L);
                    }

                    ;
                    return p_6;



                }
                return p_6;



            }
            (*l_10) = (*l_10);
            return p_6;


        }
        else
        {
            (*l_1057) = (void*)0;

            ;
            (*l_1081) = (g_927 & (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(g_7[0][1][0], 0)), p_6)));
        }

        ;
    }
    return p_6;


}







static unsigned func_13(unsigned short p_14, int * p_15, int ** p_16)
{
    unsigned char l_22 = 0x08L;
    int l_28 = 0xA6C65B0BL;
    short l_652 = 1L;
    int l_653[7] = {6L, 0x9E84E471L, 6L, 0x9E84E471L, 6L, 0x9E84E471L, 6L};
    int l_665 = 0x56D6B89FL;
    int *l_678[5];
    unsigned char l_706 = 2UL;
    int *l_712[1];
    unsigned l_795 = 0xDBF79A86L;
    int **l_820 = &l_678[2];
    unsigned l_849[10][10][2] = {{{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}, {{4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}, {4294967288UL, 0UL}}};
    short l_867 = 0x6C8AL;
    unsigned short l_907 = 0x3323L;
    unsigned short l_919 = 0UL;
    unsigned l_921 = 0xFB962701L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_678[i] = &l_653[1];
    for (i = 0; i < 1; i++)
        l_712[i] = (void*)0;
    if (func_17(l_22, func_23(g_7[0][0][4], l_22, l_28, func_29(g_9, (*p_16), l_22, g_7[1][2][4], l_28)), &g_9, &g_242))
    {
        int l_642 = (-8L);
        int **l_649 = &g_69;
        int l_666 = (-1L);
        unsigned l_690 = 0xD489B8CFL;
        int l_705 = 0x8F6EED0CL;
        unsigned char l_707 = 246UL;
        int *l_714 = &g_463;
        int l_715 = (-1L);
        unsigned l_741 = 1UL;
        int **l_744 = &l_678[2];
        char l_773 = 0L;
        unsigned char l_783[4][7] = {{0UL, 9UL, 0UL, 0xD5L, 0x9CL, 2UL, 247UL}, {0UL, 9UL, 0UL, 0xD5L, 0x9CL, 2UL, 247UL}, {0UL, 9UL, 0UL, 0xD5L, 0x9CL, 2UL, 247UL}, {0UL, 9UL, 0UL, 0xD5L, 0x9CL, 2UL, 247UL}};
        unsigned l_784 = 0x423E521EL;
        unsigned char l_806 = 255UL;
        unsigned char l_819 = 0UL;
        int l_854 = 0x233E6AF7L;
        int *l_855[2][2];
        unsigned l_866 = 4UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_855[i][j] = (void*)0;
        }
        for (p_14 = (-25); (p_14 != 16); p_14 = safe_add_func_uint32_t_u_u(p_14, 9))
        {
            (*p_16) = (void*)0;


        }


        for (g_463 = (-1); (g_463 <= (-14)); g_463 = safe_sub_func_int8_t_s_s(g_463, 2))
        {
            short l_658 = 0L;
            int l_673 = (-5L);
            for (g_61 = 0; (g_61 <= 2); ++g_61)
            {
                int *l_643 = (void*)0;
                int *l_644 = &g_98;
                (*l_644) = ((((0x3B77L > l_642) ^ g_9) & l_642) == 0xFDL);
                (*p_16) = (*p_16);
                l_653[0] = (l_642 < (safe_rshift_func_int16_t_s_u((!((safe_sub_func_int32_t_s_s((*p_15), (p_14 != l_642))) , ((!(((p_14 , l_649) == &p_15) < (((((safe_rshift_func_uint8_t_u_s((p_14 < ((&g_68 == (void*)0) == l_652)), p_14)) != g_98) , p_14) , p_14) , g_98))) , g_463))), p_14)));
            }
            (*l_649) = &l_653[0];

            ;
            for (l_652 = 0; (l_652 <= 6); l_652 += 1)
            {
                int i;
                (*g_69) = (*p_15);
                l_653[0] = (l_666 & 0x2E886C4FL);
                for (l_658 = 13; (l_658 >= 13); ++l_658)
                {
                    unsigned short l_669[2];
                    int **l_670 = &g_69;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_669[i] = 65529UL;
                    (*g_69) = (*g_69);
                    (*p_16) = ((((l_653[l_652] , (g_92 | l_669[0])) != l_653[l_652]) , p_14) , &l_653[l_652]);


                    (*l_670) = (*p_16);
                    l_678[2] = (*p_16);
                }
            }
        }



        for (g_351 = 0; (g_351 > 37); g_351 = safe_add_func_uint8_t_u_u(g_351, 6))
        {
            unsigned l_683[2];
            int i;
            for (i = 0; i < 2; i++)
                l_683[i] = 1UL;
            for (g_92 = 0; (g_92 <= 50); ++g_92)
            {
                int *l_684 = &g_9;
                l_678[2] = (l_683[1] , l_684);
                g_463 = (((p_14 >= (~0xFAF8L)) & l_683[1]) , (g_92 >= (~(safe_lshift_func_uint8_t_u_u(((g_98 ^ (1UL && 0UL)) , g_687), 7)))));
                for (l_666 = 1; (l_666 >= 0); l_666 -= 1)
                {
                    int i;
                    return l_683[l_666];



                }
                l_642 = ((safe_rshift_func_uint16_t_u_u(((*p_15) ^ l_690), 0)) , (!(*p_15)));
            }
            (*p_16) = (void*)0;


            l_642 = ((safe_sub_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((*p_16) != ((safe_sub_func_int32_t_s_s((*p_15), l_642)) , func_23(p_14, ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(0L, (((safe_sub_func_uint16_t_u_u(((*p_15) | (((l_683[1] , (*p_16)) == &l_642) != p_14)), p_14)) || l_706) , g_351))) != 0xE208L), 6)) , 0xC9L), g_92, p_14))), (*p_15))), l_683[1])) != p_14) ^ g_7[1][2][4]) == l_707), (-4L))) == 0xB3L);
        }


        if ((+((safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u(p_14, 4294967295UL)) <= 0x8F15L) < 0xF02270E3L) || 0x73L), g_7[1][2][4])) | g_463)))
        {
            int l_713 = (-8L);
            (*p_16) = ((((+l_713) <= 0xAFC3L) < ((((func_17(p_14, l_714, &g_98, &g_242) <= 0x7B15AD78L) >= l_713) | g_7[1][2][4]) | p_14)) , (*p_16));
            (*l_649) = (l_715 , func_23(((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_687, 7)), 6)) , p_14), p_14, (*l_714), g_98));

            ;
        }
        else
        {
            int *l_732 = &l_642;
            unsigned l_733 = 4294967294UL;
            int l_762 = (-1L);
            int *l_769 = (void*)0;
            int ***l_814[1];
            int i;
            for (i = 0; i < 1; i++)
                l_814[i] = (void*)0;
            (*p_16) = (*p_16);
            (*l_732) = (g_98 < 0xA7L);
            if (((safe_mod_func_uint32_t_u_u(p_14, (safe_lshift_func_int16_t_s_s(0x9DCCL, g_9)))) && 0xFDL))
            {
                short l_750 = 0xDD9EL;
                int **l_794 = &g_242;
                for (l_652 = 0; (l_652 >= (-26)); --l_652)
                {
                    int *l_761 = &l_653[4];
                    unsigned l_770 = 0UL;
                    int ***l_790 = &g_68;
                    for (g_687 = 0; (g_687 > (-20)); g_687--)
                    {
                        unsigned short l_749 = 0UL;
                        (*l_744) = (*p_16);
                        (*l_744) = func_23(p_14, l_749, (l_749 != 1UL), (l_750 , (~(p_14 != 0UL))));
                        if ((*p_15))
                            continue;
                    }
                    (*l_761) = (safe_sub_func_uint8_t_u_u(((!(safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((((((+((((((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((*p_15), ((*l_732) | 6UL))), g_736)) , p_14) , p_14) >= 0xD6BCL) & 0xA6E9L) && 0x7632L)) | p_14) ^ g_687) | p_14) , 1L), (*p_15))) >= p_14), p_14))) | (*p_15)), (-4L)));
                    if (((*p_15) != (*p_15)))
                    {
                        (*p_16) = func_23(((&g_69 != ((*l_761) , &p_15)) || (safe_unary_minus_func_uint32_t_u(p_14))), (*l_714), (g_7[1][1][4] , ((*p_16) == (void*)0)), ((-1L) | p_14));


                        (*l_732) = (((safe_mod_func_int32_t_s_s(g_7[1][2][4], (*l_761))) , (g_92 <= ((safe_add_func_uint32_t_u_u(((((g_9 != ((((safe_mod_func_uint16_t_u_u(p_14, (safe_sub_func_uint8_t_u_u(g_463, (l_783[3][3] == (**p_16)))))) || g_61) <= l_750) < g_687)) > (-1L)) & (**p_16)) , 0x85180F43L), p_14)) , 0x3F2C5065L))) , l_784);
                    }
                    else
                    {
                        int *l_789 = &g_9;
                        (*l_732) = ((safe_mod_func_uint8_t_u_u(((((0L && (*p_15)) && g_98) , ((safe_add_func_int16_t_s_s((((p_14 , (*p_16)) != l_789) || (-2L)), (g_9 == (l_790 != (void*)0)))) , p_14)) & 8L), 0x7BL)) & p_14);
                    }
                }



                if ((p_14 & g_7[1][2][4]))
                {
                    int *l_793 = &l_715;
                    for (l_665 = 0; (l_665 <= 3); l_665 += 1)
                    {
                        (*p_16) = (*p_16);
                    }
                    (*l_794) = func_23((safe_add_func_uint8_t_u_u((g_7[0][1][2] , ((*l_714) <= (g_9 != ((l_795 , 0x6BBC7182L) , g_7[0][0][4])))), p_14)), g_98, p_14, g_7[1][2][2]);

                    ;
                }
                else
                {
                    int *l_798 = (void*)0;
                    short l_805 = (-1L);
                    unsigned char l_807 = 0xD9L;
                    int **l_808 = &g_242;
                    int **l_810 = &l_712[0];
                    (*l_744) = ((safe_mod_func_int16_t_s_s(p_14, 0xD48FL)) , l_798);
                    for (l_642 = 0; (l_642 <= 0); l_642 += 1)
                    {
                        int i;
                        (*l_714) = (safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(((l_712[l_642] != l_712[l_642]) , (safe_add_func_uint32_t_u_u(4294967295UL, 0x96F8FB49L))), p_14)) , 0xB494L) < ((l_805 & (+p_14)) >= l_807)) > 0UL), p_14));
                        l_712[l_642] = (*p_16);
                    }


                    return p_14;



                }

                ;
            }
            else
            {
                char l_813 = 0L;
                int l_835 = 0x383ABF2CL;
                for (g_92 = 27; (g_92 <= 14); g_92 = safe_sub_func_int8_t_s_s(g_92, 1))
                {
                    int l_827 = 0x0E982438L;
                    l_813 = (!(*p_15));
                    if ((*p_15))
                        continue;
                    if ((((((*l_714) == (*l_714)) || (l_814[0] == (g_815 , &g_68))) >= (g_61 <= 0xE967L)) , 0x340EA0FBL))
                    {
                        int *l_816 = &l_642;
                        (*p_16) = &l_653[6];


                    }
                    else
                    {
                        unsigned l_828 = 0x4876761EL;
                        l_820 = &p_15;

                        ;
                        (*l_732) = (((void*)0 == &p_15) <= (safe_lshift_func_int16_t_s_u((((p_14 > 0xA587L) , 7L) && (*l_732)), 13)));
                        (*l_649) = (*p_16);

                        ;
                        l_835 = (p_14 | 0L);
                    }
                    for (g_98 = 3; (g_98 < 5); g_98 = safe_add_func_int16_t_s_s(g_98, 4))
                    {
                        char l_838 = 0x22L;
                        g_61 = (g_736 | (0x0CL || (((l_838 != (*p_15)) || 65534UL) > (l_813 & l_827))));
                    }
                }


                ;
                if ((safe_sub_func_int32_t_s_s(g_9, g_687)))
                {
                    unsigned l_859 = 0x679C11A7L;
                    for (l_773 = (-13); (l_773 >= 13); l_773++)
                    {
                        if ((*p_15))
                            break;
                        (*l_714) = (0x4D807AD9L <= 0UL);
                        (*p_16) = func_23(((((void*)0 == &g_69) >= (safe_lshift_func_int8_t_s_u(l_813, 5))) || (safe_mod_func_int8_t_s_s((!p_14), (((((((l_849[9][8][1] < ((((p_14 && p_14) , 0x41107C1EL) , (void*)0) != (*p_16))) , 0x92L) != p_14) >= 0xACL) != g_9) , l_854) | g_7[1][2][4])))), g_9, g_463, p_14);


                    }


                    (*l_714) = ((void*)0 == l_855[1][1]);
                    for (l_819 = 0; (l_819 == 39); ++l_819)
                    {
                        (*p_16) = &l_835;


                        if ((**l_744))
                            break;
                        (*l_714) = l_859;
                    }


                }
                else
                {
                    l_835 = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(0x9312D525L, 0L)) , ((g_7[1][2][4] ^ (g_9 & (!l_866))) < p_14)), ((*p_15) <= 0L)));
                }


            }




            ;
        }




        ;
    }
    else
    {
        int *l_868 = &g_9;
        int *l_886 = &g_9;
        unsigned short l_906[5][4][9] = {{{65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}}, {{65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}}, {{65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}}, {{65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}}, {{65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}, {65535UL, 0xB338L, 65535UL, 0xB338L, 65535UL, 65530UL, 65535UL, 0xB338L, 0xE2C7L}}};
        int i, j, k;
        (*p_16) = (l_867 , l_868);
        g_858 = (**p_16);
        for (g_92 = 13; (g_92 >= 4); g_92 = safe_sub_func_int32_t_s_s(g_92, 1))
        {
            unsigned short l_871 = 0UL;
            unsigned l_910 = 0x5C6F1A99L;
            int l_911 = 0L;
        }
    }




    ;

    ;
    for (g_92 = 0; (g_92 <= 50); g_92 = safe_add_func_uint8_t_u_u(g_92, 8))
    {
        unsigned l_917 = 1UL;
        unsigned short l_918 = 0x1B8FL;
        unsigned l_920 = 4294967295UL;
        l_918 = l_917;
        (*p_16) = func_23(p_14, p_14, (0x4FL && (((l_919 != l_920) , l_921) >= (g_7[0][1][1] , ((safe_mod_func_int16_t_s_s(p_14, func_37(&g_858, l_918, &g_242, &g_9, &g_69))) && g_858)))), g_815);


        if ((**p_16))
            continue;
        for (l_920 = (-14); (l_920 < 60); l_920 = safe_add_func_int16_t_s_s(l_920, 3))
        {
            int *l_926 = (void*)0;
            l_926 = l_926;
            for (g_815 = 0; (g_815 <= 6); g_815 += 1)
            {
                int i;
                return l_653[g_815];


            }
        }
    }
    return p_14;



}







static int func_17(unsigned short p_18, int * p_19, int * p_20, int ** p_21)
{
    short l_560 = 0x9D44L;
    unsigned l_581 = 8UL;
    int l_584 = 1L;
    int **l_630 = &g_69;
    for (p_18 = 16; (p_18 != 13); p_18 = safe_sub_func_int8_t_s_s(p_18, 1))
    {
        int *l_557 = &g_98;
        unsigned char l_561[3][2] = {{0UL, 0xA9L}, {0UL, 0xA9L}, {0UL, 0xA9L}};
        char l_562 = 0x82L;
        int ***l_563 = &g_68;
        char l_564[4] = {(-2L), 1L, (-2L), 1L};
        int l_599 = 0xB0F3C143L;
        int l_631 = 1L;
        int i, j;
        if ((p_18 , ((((safe_add_func_uint16_t_u_u((p_18 , ((((safe_add_func_uint8_t_u_u(246UL, (g_351 | p_18))) || ((safe_sub_func_uint8_t_u_u((&p_21 != ((safe_rshift_func_uint8_t_u_s((g_9 != func_37(l_557, (safe_add_func_uint8_t_u_u((l_560 || l_561[0][0]), p_18)), &g_242, l_557, &g_242)), l_562)) , l_563)), g_7[0][1][2])) == 1L)) && (*p_19)) , l_564[1])), 6L)) , (void*)0) == (void*)0) > g_92)))
        {
            int **l_567 = &l_557;
            int *l_593[6][9] = {{(void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584}, {(void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584}, {(void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584}, {(void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584}, {(void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584}, {(void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584, (void*)0, (void*)0, &l_584}};
            int i, j;
            for (g_463 = 0; (g_463 != 12); g_463 = safe_add_func_uint8_t_u_u(g_463, 9))
            {
                short l_570 = 0x1D82L;
                unsigned char l_579 = 0xD2L;
                int *l_606 = &l_584;
                (*l_567) = (*p_21);

                ;
                if ((p_18 ^ ((void*)0 == &p_19)))
                {
                    unsigned short l_580 = 0x1C5AL;
                    int **l_596 = (void*)0;
                    char l_598 = 0L;
                    for (l_562 = 16; (l_562 != (-16)); l_562 = safe_sub_func_uint32_t_u_u(l_562, 1))
                    {
                        int l_582 = 0x2D52A82CL;
                        int *l_583[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_583[i] = (void*)0;
                        l_584 = ((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((g_7[0][2][2] , (l_570 < 1UL)), (((p_18 > p_18) , (0xFCL & (l_581 & g_7[0][1][2]))) >= p_18))) != g_98), 7)) & 0x937A0E91L) | p_18) <= l_582);
                        l_599 = (l_579 , (safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_18, (safe_sub_func_int8_t_s_s((((l_593[5][1] == (*p_21)) , ((g_351 == ((safe_sub_func_int32_t_s_s((((void*)0 == l_596) , (*p_19)), ((safe_unary_minus_func_uint16_t_u((((+0xCCL) < g_92) == g_351))) & l_570))) || g_7[1][0][2])) == g_61)) && g_351), l_598)))), g_98)), 0)));
                    }
                }
                else
                {
                    unsigned char l_602[10][6] = {{0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}, {0x6BL, 0UL, 0x6BL, 0UL, 0x6BL, 0UL}};
                    int *l_605 = &g_98;
                    int i, j;
                    for (l_581 = 0; (l_581 != 27); ++l_581)
                    {
                        if ((*p_20))
                            break;
                    }
                    if (l_602[7][1])
                        break;
                    for (l_570 = (-7); (l_570 < (-10)); l_570 = safe_sub_func_int16_t_s_s(l_570, 6))
                    {
                        (*l_567) = l_605;

                        ;
                    }

                    ;
                    for (g_61 = 0; (g_61 <= 3); g_61 += 1)
                    {
                        (*l_567) = (*l_567);
                        return (*p_19);
                    }
                }

                ;
                if (g_7[1][2][4])
                    break;
                if (l_560)
                {
                    unsigned short l_607 = 65529UL;
                    (*l_567) = l_606;

                    ;
                    l_607 = (*p_19);
                }
                else
                {
                    int *l_608 = (void*)0;
                    (*l_567) = l_608;

                    ;
                }

                ;
            }

            ;
            (*l_567) = (void*)0;

            ;
        }
        else
        {
            (*p_19) = (*p_19);
        }

        ;
        (*p_19) = g_351;
        for (l_562 = 12; (l_562 <= 20); l_562++)
        {
            short l_624 = 0L;
            int *l_635 = &g_61;
            for (g_351 = 19; (g_351 < 49); g_351++)
            {
                unsigned char l_613 = 0UL;
                int ***l_625 = &g_68;
                if ((l_613 , (((((((((void*)0 == &g_61) && (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(255UL, ((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((p_18 > ((safe_lshift_func_uint8_t_u_s(g_7[1][1][1], 1)) , g_7[1][1][1])), 0x259007E5L)) || g_7[1][2][4]), 9UL)) != p_18))), l_624))) , l_625) == &g_68) >= 0UL) | p_18) < 0xEEL) || g_9)))
                {
                    (*p_21) = &l_584;

                    ;
                }
                else
                {
                    if ((*p_19))
                        break;
                }
            }

            ;
            for (l_581 = (-25); (l_581 <= 37); l_581 = safe_add_func_int16_t_s_s(l_581, 2))
            {
                int l_634 = 0x3D098CDEL;
                if (g_351)
                    break;
                l_634 = (safe_sub_func_uint8_t_u_u((((p_18 || p_18) , (void*)0) != (g_351 , l_630)), ((p_18 & l_631) & ((safe_add_func_int16_t_s_s(0x2F95L, (p_18 > l_624))) && g_61))));
                (*p_21) = &g_61;

                ;
            }
            (*p_21) = l_635;

            ;
            if ((*g_242))
                break;
        }
    }
    return l_560;
}







static int * func_23(unsigned p_24, unsigned char p_25, short p_26, unsigned char p_27)
{
    short l_536[4] = {9L, 0x9C67L, 9L, 0x9C67L};
    int *l_537 = &g_463;
    int **l_546 = &g_69;
    int i;
    (*l_537) = l_536[3];
    (*l_537) = ((p_27 < p_25) < (*l_537));
    return l_537;


}







static unsigned char func_29(int p_30, int * p_31, unsigned char p_32, unsigned char p_33, unsigned short p_34)
{
    int *l_50 = &g_9;
    int l_535 = 0L;
    l_535 = (9UL & ((((void*)0 == &g_9) | (((safe_mod_func_uint16_t_u_u(func_37(func_43((func_46(l_50, ((safe_rshift_func_uint8_t_u_u(g_9, (safe_add_func_uint16_t_u_u((*l_50), (&l_50 != (void*)0))))) && (safe_lshift_func_uint8_t_u_s(p_30, 0))), (*l_50)) , &p_31), (*l_50)), (*l_50), &l_50, &g_9, &l_50), p_30)) > p_34) & 0xDE93L)) & 0x15BBL));


    ;


    return p_32;
}







static unsigned short func_37(int * p_38, int p_39, int ** p_40, int * p_41, int ** p_42)
{
    unsigned char l_509[3];
    unsigned short l_514 = 0UL;
    unsigned l_520 = 0xE051C755L;
    int *l_533 = &g_463;
    unsigned l_534 = 0x0BDF289CL;
    int i;
    for (i = 0; i < 3; i++)
        l_509[i] = 0x8CL;
    if (((*p_40) == ((((g_9 ^ (((safe_add_func_int32_t_s_s((((((l_509[1] , l_509[0]) != (g_98 && (safe_add_func_int32_t_s_s((*p_41), 1L)))) <= 0xD9863270L) ^ (+p_39)) , (-4L)), l_509[1])) ^ g_9) > g_463)) , &p_41) == (void*)0) , &g_98)))
    {
        int *l_512 = (void*)0;
        int l_513 = 0xB86D0D46L;
        int ***l_517 = &g_68;
        (*p_42) = l_512;


        (*p_38) = (*p_41);
    }
    else
    {
        unsigned l_527 = 0UL;
        int *l_528 = &g_463;
        l_527 = (safe_rshift_func_int16_t_s_s(((&p_41 == &g_69) & (&g_9 == (void*)0)), ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(6L, 1L)), 3)) , g_92)));
        (*p_40) = l_528;


    }


    for (g_351 = (-12); (g_351 < 42); g_351++)
    {
        for (g_98 = 0; (g_98 != (-30)); g_98 = safe_sub_func_int32_t_s_s(g_98, 3))
        {
            (*p_42) = &g_463;


            if (l_509[0])
                continue;
        }
    }
    (*l_533) = (l_514 >= p_39);
    (*p_40) = l_533;


    return (*l_533);
}







static int * func_43(int ** p_44, unsigned p_45)
{
    unsigned char l_374 = 9UL;
    int **l_375 = &g_69;
    int l_392 = 0xD1924F3BL;
    int l_397 = 1L;
    unsigned char l_402 = 0xB7L;
    int l_441 = 0xC77CAFCDL;
    unsigned char l_449 = 255UL;
    unsigned char l_454 = 0x9EL;
    if (((l_374 , p_45) || (p_45 != ((l_375 != p_44) , (safe_add_func_int8_t_s_s(p_45, (!g_61)))))))
    {
        int ***l_378 = &g_68;
        int l_391 = 8L;
        int *l_403 = &g_98;
        (*l_378) = (void*)0;

        ;
        l_392 = ((safe_mod_func_int8_t_s_s(g_7[0][2][4], g_7[0][1][1])) >= (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((g_92 & (&g_68 == (void*)0)), 4)), ((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x6D66L, 13)), (&l_375 != &p_44))) , (((**p_44) , (void*)0) == &g_68)), g_7[1][2][3])) >= l_391) || g_351) , g_61))));
        l_392 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_351 , ((l_397 == (g_98 , (safe_lshift_func_int8_t_s_s(g_92, ((safe_rshift_func_int8_t_s_s(((g_7[1][2][4] || g_61) || 255UL), g_9)) , (-1L)))))) > l_402)), g_351)), 0x75D4L)) != 0xAAL);
        (*l_403) = l_374;
    }
    else
    {
        int l_408[10][5] = {{0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}, {0x0192E4D0L, 0x7D277678L, (-1L), 0x7D277678L, 0x0192E4D0L}};
        unsigned l_409[10] = {18446744073709551614UL, 0xC872D799L, 18446744073709551614UL, 0xC872D799L, 18446744073709551614UL, 0xC872D799L, 18446744073709551614UL, 0xC872D799L, 18446744073709551614UL, 0xC872D799L};
        char l_418 = 0xD2L;
        int *l_427 = &g_98;
        unsigned short l_460 = 6UL;
        short l_484 = (-7L);
        char l_490[2][6] = {{0xCEL, 0xD6L, (-4L), 0xD6L, 0xCEL, (-1L)}, {0xCEL, 0xD6L, (-4L), 0xD6L, 0xCEL, (-1L)}};
        int i, j;
        if (((((p_45 , 7L) || ((((safe_sub_func_int8_t_s_s(((!(0xE217L != (safe_rshift_func_int16_t_s_u(l_408[8][4], l_408[0][1])))) <= 0xEC7671CBL), 0xB6L)) , &g_9) == (*p_44)) & 0x4B48L)) || g_92) , l_408[8][4]))
        {
            unsigned l_426[2][1][2] = {{{4UL, 0xB15A4E9FL}}, {{4UL, 0xB15A4E9FL}}};
            int l_440 = 0x08DE04FBL;
            unsigned short l_442[9];
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_442[i] = 65531UL;
            for (l_402 = 0; (l_402 < 40); ++l_402)
            {
                unsigned l_425[5][9];
                int ***l_444 = (void*)0;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_425[i][j] = 1UL;
                }
                l_426[1][0][0] = (((safe_mod_func_int32_t_s_s((**p_44), (safe_lshift_func_uint8_t_u_u(((-1L) ^ (**p_44)), 6)))) , (l_425[3][4] < 0x92L)) <= g_61);
                (*l_375) = l_427;

                ;
                if (((safe_lshift_func_uint16_t_u_u(l_442[0], 8)) , (**p_44)))
                {
                    unsigned short l_443 = 0x89B7L;
                    (*l_427) = (*g_69);
                    for (g_351 = 0; (g_351 <= 4); g_351 += 1)
                    {
                        (**l_375) = (+l_440);
                    }
                    (**l_375) = (**p_44);
                }
                else
                {
                    (*l_427) = (l_444 == &g_68);
                }
            }
            for (p_45 = (-6); (p_45 < 47); p_45 = safe_add_func_uint32_t_u_u(p_45, 9))
            {
                g_61 = ((void*)0 == &g_69);
                if ((**p_44))
                    break;
                for (g_351 = 0; (g_351 <= 4); g_351 += 1)
                {
                    int i, j;
                    (*l_375) = (l_408[(g_351 + 3)][g_351] , (void*)0);

                    ;
                }
            }
            l_441 = (**p_44);
        }
        else
        {
            unsigned short l_459 = 65535UL;
            int *l_469 = &l_392;
            unsigned l_489[4] = {0xAFABD3AEL, 4294967293UL, 0xAFABD3AEL, 4294967293UL};
            int i;
            (*l_427) = (safe_mod_func_int32_t_s_s((l_449 , ((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((g_9 > l_454), p_45)) , (safe_add_func_uint32_t_u_u(4294967295UL, p_45))) == (safe_sub_func_uint32_t_u_u(0xAD6C5ED4L, l_459))), ((l_460 | g_61) == 0UL))) , 0xF8345126L)), 6L));
            for (p_45 = 1; (p_45 <= 4); p_45 += 1)
            {
                int l_468 = (-4L);
                l_469 = &g_463;

                ;
                (*p_44) = (*p_44);
                (*p_44) = l_469;


                for (l_468 = 1; (l_468 <= 4); l_468 += 1)
                {
                    for (l_374 = 0; l_374 < 2; l_374 += 1)
                    {
                        for (g_463 = 0; g_463 < 6; g_463 += 1)
                        {
                            l_490[l_374][g_463] = (-1L);
                        }
                    }
                }
            }


            ;
            (*l_469) = ((*l_469) == ((!(safe_sub_func_int16_t_s_s(p_45, (!(safe_mod_func_int32_t_s_s((*l_427), (safe_add_func_int8_t_s_s(p_45, ((safe_add_func_uint8_t_u_u((*l_427), p_45)) || ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_45, g_61)), ((safe_mod_func_uint16_t_u_u((p_45 ^ (*l_469)), p_45)) , (**p_44)))), p_45)) == p_45)))))))))) >= g_7[0][0][4]));
            (*p_44) = (p_45 , l_469);


        }


    }


    (*p_44) = (*p_44);
    return &g_463;



}







static unsigned short func_46(int * p_47, int p_48, unsigned short p_49)
{
    short l_59 = 0xC79AL;
    int *l_60 = &g_61;
    int ***l_252 = (void*)0;
    int *l_275[5] = {&g_9, &g_98, &g_9, &g_98, &g_9};
    unsigned short l_287 = 0UL;
    unsigned l_317 = 2UL;
    unsigned short l_319 = 0x9AA8L;
    int l_337 = (-7L);
    int l_339 = 0x459D8328L;
    int i;
    (*l_60) = ((safe_mod_func_int32_t_s_s(l_59, 0xBB218AD3L)) != g_9);
    for (l_59 = 22; (l_59 > (-27)); l_59 = safe_sub_func_int16_t_s_s(l_59, 8))
    {
        short l_72 = 0L;
        int l_274 = 0x5ACAF892L;
        int **l_324 = &l_275[1];
        int *l_327[5][1];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_327[i][j] = &g_9;
        }
    }
    if ((*p_47))
    {
        short l_336[7] = {(-8L), (-8L), 8L, (-8L), (-8L), 8L, (-8L)};
        int **l_338 = &l_275[4];
        int i;
        (*g_69) = (safe_rshift_func_int16_t_s_s(((g_7[1][2][1] == p_49) > (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((l_336[1] && ((((((p_48 ^ l_337) , ((void*)0 != l_338)) , &p_48) == (*l_338)) && g_7[1][2][4]) <= (*p_47))) && 0xA77DL), g_7[1][1][4])), g_61))), g_7[1][2][4]));
        return p_48;
    }
    else
    {
        int ***l_342 = &g_68;
        unsigned short l_368[9];
        int i;
        for (i = 0; i < 9; i++)
            l_368[i] = 0xF92BL;
        if ((safe_lshift_func_int16_t_s_s(((p_49 , 0xD011E3BCL) | (((p_48 > 0xCCL) | (p_49 ^ ((l_342 == &g_68) ^ (**g_68)))) > (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((*p_47) || 0x7D9DBFACL) != 0x26L), p_48)), g_9)))), g_7[1][2][1])))
        {
            int **l_356 = &g_242;
            unsigned char l_357 = 1UL;
            if ((safe_add_func_uint8_t_u_u(0x91L, ((((((***l_342) , ((g_7[1][2][4] >= ((*p_47) == ((1UL || (*g_69)) && (((*g_69) , ((safe_rshift_func_int8_t_s_u((*l_60), (g_7[1][2][4] , p_49))) < g_7[1][2][4])) ^ g_9)))) , (***l_342))) < (*g_69)) , (void*)0) == &g_69) , g_98))))
            {
                char l_352 = 0x00L;
                if ((((p_48 != (p_48 , ((void*)0 == &g_68))) > (~(((void*)0 != (*g_68)) > ((g_351 , 0xE83CL) || (l_352 != 0x6CL))))) <= g_61))
                {
                    for (l_59 = 0; (l_59 != (-14)); l_59--)
                    {
                        return g_7[1][0][0];
                    }
                }
                else
                {
                    int **l_358 = (void*)0;
                    if ((3L != g_351))
                    {
                        (*g_68) = &p_48;

                        ;
                        (*g_68) = (**l_342);
                        (**g_68) = (*p_47);
                    }
                    else
                    {
                        int **l_355 = &g_69;
                        l_356 = ((1L && (((void*)0 != (**l_342)) && 65535UL)) , l_355);

                        ;
                        (*l_342) = ((l_357 && (*p_47)) , ((&p_48 == (*g_68)) , &g_69));
                        (*l_355) = func_64((*g_68), &g_69, (safe_rshift_func_uint8_t_u_s(((g_7[1][2][4] >= g_61) & g_7[0][2][3]), 2)));

                        ;

                        (*l_355) = (void*)0;

                        ;
                    }

                    ;

                    ;
                }

                ;

                ;
            }
            else
            {
                for (l_337 = 0; (l_337 <= 4); l_337 += 1)
                {
                    int i;
                    (***l_342) = (p_49 >= ((safe_lshift_func_int16_t_s_s((l_275[l_337] == l_275[l_337]), (+((void*)0 == &p_48)))) >= (((safe_sub_func_uint16_t_u_u((g_351 >= 0xB23BL), ((void*)0 == &p_48))) == (**g_68)) , g_351)));
                }
                (**g_68) = 0x58D190FCL;
                for (g_98 = 0; (g_98 != (-12)); g_98 = safe_sub_func_uint32_t_u_u(g_98, 1))
                {
                    (*g_68) = &p_48;

                    ;
                }

                ;
            }

            ;

            ;
        }
        else
        {
            unsigned char l_373 = 250UL;
            (*l_60) = (l_368[1] || (safe_rshift_func_int16_t_s_u(p_49, (safe_add_func_uint32_t_u_u(((void*)0 != &p_47), g_7[0][1][3])))));
            (*g_68) = (void*)0;

            ;
            (*g_68) = &p_48;

            ;
        }

        ;

    }

    ;

    return g_61;


}







static int * func_64(int * p_65, int ** p_66, unsigned p_67)
{
    unsigned short l_73[8] = {0x4E19L, 8UL, 0x4E19L, 8UL, 0x4E19L, 8UL, 0x4E19L, 8UL};
    int *l_82 = (void*)0;
    char l_83 = (-8L);
    int l_93 = (-1L);
    short l_104[10] = {(-1L), 0x4BD0L, (-1L), 0x4BD0L, (-1L), 0x4BD0L, (-1L), 0x4BD0L, (-1L), 0x4BD0L};
    unsigned short l_110 = 0x6E19L;
    int i;
    (*p_65) = (p_67 & 0x4D75F053L);
    (*g_68) = (*g_68);
    for (p_67 = 0; (p_67 <= 7); p_67 += 1)
    {
        int *l_99 = &g_98;
        int i;
        if ((l_73[p_67] & ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((((g_7[1][2][4] , (safe_mod_func_int8_t_s_s(l_73[p_67], g_9))) , (((p_67 , 0x81L) , (((safe_lshift_func_int16_t_s_s((((!0x4917L) <= l_73[p_67]) , ((p_67 == p_67) <= g_7[1][2][4])), l_73[2])) , 0xE902L) , (*p_66))) != l_82)) , l_83) | p_67), 0x3E62L)), p_67)) | p_67)))
        {
            char l_100[4][7] = {{0L, 0L, 0x1FL, 0L, 0L, 0x1FL, 0L}, {0L, 0L, 0x1FL, 0L, 0L, 0x1FL, 0L}, {0L, 0L, 0x1FL, 0L, 0L, 0x1FL, 0L}, {0L, 0L, 0x1FL, 0L, 0L, 0x1FL, 0L}};
            int l_129 = (-8L);
            int i, j;
            for (l_83 = 7; (l_83 >= 0); l_83 -= 1)
            {
                unsigned l_86 = 0x78474A89L;
                int *l_111 = &g_61;
            }
        }
        else
        {
            return (*g_68);


        }
    }
    if ((*p_65))
    {
        unsigned l_135 = 0UL;
        int *l_141 = &g_98;
        int ***l_148 = &g_68;
        unsigned char l_183 = 1UL;
        unsigned l_212 = 1UL;
        unsigned l_245 = 0x24E1413FL;
        for (g_98 = 6; (g_98 >= 3); g_98 -= 1)
        {
            return (*p_66);


        }
        if ((safe_add_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((&g_69 != ((((g_92 , &g_69) != ((safe_unary_minus_func_int16_t_s(p_67)) , &g_69)) < (((l_135 | 0xA3C8486EL) , ((((65526UL >= ((((**p_66) , 0x91L) || g_98) > (**g_68))) != p_67) || 1UL) ^ 0xA6L)) , 0x1CBC849BL)) , &p_65)), l_135)) <= l_135) != 0xB3L) < 65535UL), p_67)))
        {
            int *l_138 = (void*)0;
            int l_149 = (-1L);
            int ***l_152 = &g_68;
            for (l_110 = (-28); (l_110 >= 35); l_110++)
            {
                (*g_68) = l_138;

                ;
                (*p_66) = (*p_66);
                return l_82;


            }
            (*g_69) = (((safe_mod_func_uint16_t_u_u((l_141 == ((0x75A9E6D6L < g_98) , (void*)0)), (safe_rshift_func_int8_t_s_u((g_61 && (((p_67 != (+((g_7[1][2][4] ^ (((safe_sub_func_int32_t_s_s(((g_9 , ((safe_add_func_int16_t_s_s((((l_148 != &p_66) , g_7[1][2][2]) , g_7[0][0][1]), 0x4882L)) >= p_67)) || 0x74BAL), l_149)) == l_93) < p_67)) < p_67))) == 4L) ^ p_67)), 3)))) || p_67) <= 0xF0L);
            if (((void*)0 != &p_65))
            {
                (*g_68) = (*p_66);

                ;
            }
            else
            {
                unsigned char l_155 = 0xA0L;
                if ((*g_69))
                {
                    unsigned l_158 = 0x1EF60014L;
                    int **l_159 = &l_82;
                    (**g_68) = (**g_68);
                    if ((safe_add_func_uint16_t_u_u((l_152 != &g_68), (((safe_mod_func_int32_t_s_s((l_155 | ((***l_148) || (safe_lshift_func_int8_t_s_u((p_67 == 0UL), 5)))), l_158)) == p_67) , (-1L)))))
                    {
                        (*p_66) = (*g_68);
                        (*g_68) = (*p_66);
                        (***l_148) = (**p_66);
                    }
                    else
                    {
                        (*l_152) = l_159;

                        ;
                        (*p_66) = (p_67 , (*g_68));

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int *l_172 = &g_98;
                    for (g_98 = 0; (g_98 != 21); g_98++)
                    {
                        (**l_152) = (((g_98 < g_7[1][2][4]) & (((safe_lshift_func_int8_t_s_s(p_67, ((**g_68) , (0x58L == ((safe_sub_func_uint8_t_u_u((0xA3CE1FE0L || 0L), (safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_67 == ((((p_67 , (*l_141)) < p_67) ^ p_67) || g_98)), 7)), p_67)) < g_61), l_155)))) | p_67))))) >= p_67) >= g_9)) , l_172);

                        ;
                        (*g_68) = (**l_148);
                        if ((*l_172))
                            continue;
                        if ((*g_69))
                            continue;
                    }

                    ;
                }

                ;
                ;
                (*g_68) = ((((safe_add_func_uint32_t_u_u((((+g_92) , g_92) & (safe_unary_minus_func_uint32_t_u(g_61))), (-9L))) , (*l_141)) != p_67) , (*p_66));

                ;
                ;
                (**l_152) = (*g_68);
                for (l_155 = (-23); (l_155 < 19); ++l_155)
                {
                    for (l_135 = 15; (l_135 <= 21); l_135 = safe_add_func_int16_t_s_s(l_135, 3))
                    {
                        int *l_180 = (void*)0;
                        l_180 = l_82;

                        ;
                        (*p_66) = (void*)0;
                    }
                    (**l_152) = (*p_66);
                    (*g_68) = (*p_66);
                }
            }

            ;
            ;
            ;
            (*g_68) = (*g_68);
        }
        else
        {
            int *l_184 = &g_98;
            (**g_68) = ((g_61 & 0x741FL) >= (p_67 > ((safe_add_func_uint16_t_u_u((((l_183 & (!(g_61 < (***l_148)))) || (((**l_148) != (p_67 , l_184)) , 0UL)) || g_98), g_7[1][1][3])) || g_7[1][0][0])));
            (*g_68) = (void*)0;

            ;
            (*g_68) = l_82;
            for (g_92 = 4; (g_92 == 43); ++g_92)
            {
                unsigned l_193 = 0x987D7C54L;
                unsigned l_199[2][5] = {{0x4C9A174EL, 1UL, 0UL, 0UL, 1UL}, {0x4C9A174EL, 1UL, 0UL, 0UL, 1UL}};
                int l_206 = 0x2784B668L;
                int *l_226 = (void*)0;
                int i, j;
                for (p_67 = 23; (p_67 <= 15); p_67 = safe_sub_func_int8_t_s_s(p_67, 1))
                {
                    (*p_66) = (**l_148);
                    (*p_66) = (*g_68);
                    for (l_135 = 0; (l_135 <= 9); l_135 += 1)
                    {
                        int i;
                        (*l_184) = (l_104[l_135] < l_104[l_135]);
                    }
                }
                if ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((~p_67), l_193)), ((5L || g_61) && (+p_67)))))
                {
                    int *l_194 = (void*)0;
                    (*l_141) = l_193;
                    for (l_110 = 0; (l_110 <= 7); l_110 += 1)
                    {
                        int i;
                        if (l_73[l_110])
                            break;
                        (*g_68) = l_194;

                        ;
                        (*g_68) = (void*)0;
                        (*p_65) = (*p_65);
                    }
                    (*p_65) = ((safe_sub_func_int16_t_s_s((-2L), (*l_184))) ^ l_193);
                }
                else
                {
                    int *l_207[3][2][5] = {{{&l_206, &l_206, (void*)0, &l_206, &l_206}, {&l_206, &l_206, (void*)0, &l_206, &l_206}}, {{&l_206, &l_206, (void*)0, &l_206, &l_206}, {&l_206, &l_206, (void*)0, &l_206, &l_206}}, {{&l_206, &l_206, (void*)0, &l_206, &l_206}, {&l_206, &l_206, (void*)0, &l_206, &l_206}}};
                    unsigned char l_239 = 0x29L;
                    int i, j, k;
                    if ((+((safe_rshift_func_int8_t_s_s((l_199[0][0] , (3UL < (2L ^ (safe_mod_func_uint16_t_u_u(((*l_141) >= p_67), p_67))))), p_67)) , ((p_67 >= p_67) , l_193))))
                    {
                        l_206 = (((((p_67 || (g_7[0][1][0] , ((g_7[1][2][4] , (*p_65)) & (*l_184)))) , &p_66) != &g_68) <= (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_61, ((p_67 , g_7[1][2][4]) ^ 0x1B1E4525L))), p_67))) , 0L);
                    }
                    else
                    {
                        unsigned char l_225[4][6] = {{0x2FL, 255UL, 0x2FL, 1UL, 0x4DL, 0x73L}, {0x2FL, 255UL, 0x2FL, 1UL, 0x4DL, 0x73L}, {0x2FL, 255UL, 0x2FL, 1UL, 0x4DL, 0x73L}, {0x2FL, 255UL, 0x2FL, 1UL, 0x4DL, 0x73L}};
                        int i, j;
                        (*p_65) = (l_207[1][1][1] != (void*)0);
                        (*p_66) = (*g_68);
                        (*l_184) = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((&p_65 != &g_69), l_212)), ((g_61 == ((safe_add_func_int32_t_s_s(((*g_68) == (*g_68)), (safe_add_func_uint32_t_u_u(((((+l_199[0][0]) || (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((((safe_mod_func_int8_t_s_s(((*p_65) != (*p_65)), g_9)) & 0x88L) , 0x54L) < (*l_184)) , (void*)0) == &p_66), 0xD12BL)), l_225[3][5]))) ^ p_67) > g_9), 0x77505CF3L)))) > p_67)) >= g_98)));
                    }
                    for (l_212 = 0; (l_212 <= 1); l_212 += 1)
                    {
                        int i;
                        (*p_65) = l_104[(l_212 + 2)];
                        l_226 = l_82;
                        (*l_141) = 0x2ADD22ACL;
                    }
                    l_239 = (g_98 & (((&g_68 != (void*)0) >= ((safe_mod_func_uint16_t_u_u((((g_92 < p_67) , (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((&g_69 != (void*)0) < ((safe_add_func_uint32_t_u_u((1L == (((*l_141) == p_67) <= g_92)), (*l_141))) || 0xAAB76A27L)), 0xB1L)) , p_67), g_9)), (-9L)))) != g_92), 2UL)) != 65533UL)) , (*l_141)));
                    for (l_239 = 0; (l_239 <= 7); l_239 += 1)
                    {
                        int i;
                        (*p_65) = ((((l_73[l_239] <= l_73[l_239]) > ((g_9 > (safe_rshift_func_int8_t_s_u(g_92, g_9))) == g_7[1][2][1])) , g_7[1][2][4]) > p_67);
                        (*g_68) = g_242;

                        ;
                    }
                }
                (*p_66) = l_184;
                (*p_66) = ((p_67 , (p_67 & p_67)) , (*g_68));
            }

            ;
        }

        ;
        ;
        ;
        (*l_141) = ((0x0B2B29F1L != (*p_65)) < ((((safe_add_func_uint16_t_u_u((((&p_66 == ((*l_141) , &g_68)) == 0xE5L) , l_245), g_7[1][0][3])) , (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((&g_69 != (void*)0) < 65534UL), p_67)), g_7[1][2][4]))) || (*l_141)) ^ p_67));
    }
    else
    {
        return (*g_68);


    }

    ;
    ;
    ;
    return (*p_66);



}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1001[i][j][k], "g_1001[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1140, "g_1140", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
