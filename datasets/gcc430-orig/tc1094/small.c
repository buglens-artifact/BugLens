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



static unsigned short g_2 = 1UL;
static int g_95 = 0x606BDE5EL;
static int *g_98 = &g_95;
static int **g_97 = &g_98;
static int *g_127[7][3] = {{&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}, {&g_95, &g_95, &g_95}};
static int g_185 = 0x087CFFACL;
static int g_209 = 0L;
static int *g_324 = &g_209;
static char g_350 = 1L;
static unsigned g_444 = 0x67ADDD29L;
static short g_452 = 0x9C08L;
static char g_512 = 0xCDL;
static char g_569 = (-2L);
static char g_759 = 5L;
static unsigned g_778 = 0xA57A9537L;
static unsigned g_993[7] = {1UL, 0x2FCEEA2EL, 1UL, 0x2FCEEA2EL, 1UL, 0x2FCEEA2EL, 1UL};
static unsigned g_1232 = 18446744073709551615UL;
static unsigned short g_1323 = 0xA6EDL;
static unsigned char g_1339 = 0xADL;
static int g_1349 = 1L;
static unsigned char g_1594[6][2][9] = {{{6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}, {6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}}, {{6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}, {6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}}, {{6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}, {6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}}, {{6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}, {6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}}, {{6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}, {6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}}, {{6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}, {6UL, 0x2AL, 2UL, 255UL, 2UL, 0x2AL, 6UL, 8UL, 0xC9L}}};
static unsigned char g_1618 = 255UL;
static unsigned long long g_1639 = 0UL;
static int **g_1693 = &g_127[4][2];
static int g_1696 = 0x50B1FDF6L;
static int g_1765 = 1L;
static int *g_1829[5] = {&g_185, &g_185, &g_185, &g_185, &g_185};
static int g_1889 = 0x344B1F34L;
static int ***g_1920 = &g_97;
static unsigned g_1929 = 0UL;



static unsigned char func_1(void);
static int func_3(unsigned char p_4, unsigned p_5, int p_6, int p_7, unsigned char p_8);
static int func_10(unsigned short p_11, unsigned long long p_12);
static unsigned short func_15(int p_16, unsigned p_17, unsigned char p_18, short p_19, long long p_20);
static unsigned short func_32(unsigned long long p_33, unsigned p_34, unsigned p_35, long long p_36, char p_37);
static char func_48(int p_49);
static char func_53(char p_54, int p_55, int p_56, long long p_57);
static unsigned short func_59(unsigned p_60);
static unsigned short func_65(unsigned p_66, unsigned long long p_67, unsigned long long p_68);
static char func_75(int * p_76, long long p_77, unsigned p_78, long long p_79, unsigned p_80);
static unsigned char func_1(void)
{
    unsigned short l_31 = 65526UL;
    unsigned short l_880[1];
    unsigned short l_881 = 65535UL;
    unsigned l_882[8][6] = {{0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}, {0x55D658B1L, 0x4AE973E0L, 1UL, 18446744073709551612UL, 18446744073709551612UL, 1UL}};
    int l_1672 = (-9L);
    int l_1674 = 0xA2F45142L;
    int l_1675 = 0xD225D925L;
    int l_1676 = 0x6DC5E032L;
    unsigned char l_1695 = 0xAFL;
    int l_1752[9] = {0xC45B6543L, 0x3DA2C7F4L, 0xC45B6543L, 0x3DA2C7F4L, 0xC45B6543L, 0x3DA2C7F4L, 0xC45B6543L, 0x3DA2C7F4L, 0xC45B6543L};
    int **l_1769 = &g_98;
    int *l_1773 = &g_209;
    int l_1780[8];
    unsigned char l_1846 = 255UL;
    unsigned char l_1847 = 248UL;
    unsigned l_1940[10][1][10] = {{{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}, {{0UL, 0xEADCC382L, 0x788755FEL, 18446744073709551606UL, 0xEADCC382L, 0x7336C030L, 0xEADCC382L, 18446744073709551606UL, 0x788755FEL, 0xEADCC382L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_880[i] = 0x2E68L;
    for (i = 0; i < 8; i++)
        l_1780[i] = 0xF7501433L;
    if (g_2)
    {
        char l_9 = (-7L);
        int l_883 = 0x98FB9FAFL;
        unsigned short l_884[7][8][4] = {{{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}, {{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}, {{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}, {{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}, {{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}, {{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}, {{0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}, {0xAD70L, 1UL, 65527UL, 0x35CDL}}};
        int *l_1669 = &g_209;
        int i, j, k;
        (*l_1669) = func_3(l_9, g_2, func_10(((((safe_add_func_uint64_t_u_u(g_2, (func_15((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u(g_2, (safe_rshift_func_uint16_t_u_s(0UL, (~0xFA8BL))))) , ((((((l_31 > l_31) == (((func_32(l_9, g_2, l_31, l_31, l_31) , l_9) <= g_569) | g_778)) , l_31) , l_880[0]) != l_881) || g_569)) <= l_882[3][1]), g_569)) && 1L), l_883)) , 0x742AL), 0xB389L)), g_2, g_512, l_884[4][3][3], l_9) && l_882[4][4]))) | 0UL) <= g_1232) , 65531UL), g_1232), g_2, l_884[1][1][3]);
        (*l_1669) ^= l_880[0];
    }
    else
    {
        int l_1670[9][2];
        int l_1692[8] = {(-7L), 1L, (-7L), 1L, (-7L), 1L, (-7L), 1L};
        int ***l_1739 = &g_97;
        unsigned short l_1751 = 1UL;
        unsigned short l_1845 = 0x9D89L;
        unsigned l_1914[7];
        int *l_1936 = (void*)0;
        int l_1939 = (-1L);
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 2; j++)
                l_1670[i][j] = 0L;
        }
        for (i = 0; i < 7; i++)
            l_1914[i] = 0x418F1D3EL;
        if (func_48((l_1670[5][0] , g_512)))
        {
            int *l_1671 = &g_95;
            int *l_1673[10][3];
            unsigned char l_1677 = 251UL;
            unsigned char l_1711[10] = {1UL, 1UL, 255UL, 1UL, 1UL, 255UL, 1UL, 1UL, 255UL, 1UL};
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1673[i][j] = &g_185;
            }
            (*g_97) = (void*)0;
            l_1677--;
            for (g_444 = 1; (g_444 <= 6); g_444 += 1)
            {
                int **l_1694[5] = {&g_127[0][0], &l_1673[7][0], &g_127[0][0], &l_1673[7][0], &g_127[0][0]};
                int i;
                (*g_97) = &l_1670[2][0];
            }
        }
        else
        {
            for (g_759 = (-6); (g_759 <= 14); g_759 = safe_add_func_int32_t_s_s(g_759, 1))
            {
                return l_1692[6];
            }
        }
        for (l_1695 = 0; (l_1695 < 3); l_1695++)
        {
            unsigned long long l_1729[7][3][4] = {{{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}, {{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}, {{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}, {{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}, {{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}, {{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}, {{0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}, {0xFB29A5B24819A5C9LL, 0x7F8D76FF9F7760C5LL, 0xFB29A5B24819A5C9LL, 18446744073709551609UL}}};
            int ***l_1732[10][3] = {{&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}, {&g_97, (void*)0, &g_97}};
            int l_1740 = 0x5BBB6ED1L;
            int **l_1741 = (void*)0;
            int l_1742 = 0xD7362E18L;
            short l_1828 = 1L;
            long long l_1838 = 0x1D4662B7983B8630LL;
            unsigned short l_1876 = 0xE2F7L;
            unsigned l_1878[7][3][9] = {{{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}, {{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}, {{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}, {{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}, {{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}, {{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}, {{0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}, {0xE6ABA6C3L, 18446744073709551615UL, 0x71A1981EL, 0xDE6164F1L, 18446744073709551615UL, 0UL, 0x712F9ACDL, 0x7A954403L, 0UL}}};
            int l_1896 = 0x582D03FFL;
            unsigned long long l_1913 = 6UL;
            int i, j, k;
            l_1676 &= ((((safe_lshift_func_int16_t_s_u((((l_1674 , (*l_1739)) == l_1741) < 0x51FFL), 13)) ^ l_1742) & g_993[1]) , 1L);
            if ((g_1594[5][1][4] == (safe_add_func_uint64_t_u_u(g_185, ((safe_lshift_func_uint16_t_u_s((4L || (0xA1L ^ g_444)), (safe_mod_func_int8_t_s_s((((g_2 && (((((safe_lshift_func_uint8_t_u_u((func_10(g_1696, l_880[0]) && g_569), 2)) != g_1696) && 0x0CFF04916E8AA623LL) || l_1751) > g_1339)) , l_1751) && g_350), l_1752[3])))) & (-10L))))))
            {
                unsigned char l_1768 = 1UL;
                int *l_1770 = (void*)0;
                for (g_95 = 0; (g_95 >= (-25)); g_95 = safe_sub_func_int16_t_s_s(g_95, 7))
                {
                    int l_1761 = 0xC0E7D80BL;
                    int l_1764[1][9] = {{0x4FB677E2L, 0xB809A07DL, 0x4FB677E2L, 0xB809A07DL, 0x4FB677E2L, 0xB809A07DL, 0x4FB677E2L, 0xB809A07DL, 0x4FB677E2L}};
                    int i, j;
                    g_1765 = (safe_sub_func_int16_t_s_s((g_2 , (((l_880[0] == (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_1761, (g_512 , (g_512 , (0xF2BCL | g_185))))), 12))) <= (((safe_add_func_int32_t_s_s(l_1764[0][2], l_1764[0][2])) > g_1594[2][1][6]) || l_882[3][1])) && g_209)), g_759));
                    (**l_1739) = &l_1676;
                }
                l_1675 = ((0UL && ((((safe_lshift_func_int16_t_s_u(g_2, 3)) | g_452) < g_1765) || g_1339)) , (-8L));
            }
            else
            {
                return g_759;
            }
            for (g_1618 = 0; (g_1618 <= 45); g_1618 = safe_add_func_int64_t_s_s(g_1618, 8))
            {
                int l_1774 = 0L;
                unsigned long long l_1813[10] = {18446744073709551613UL, 0xC1C3FA0F31A7FE26LL, 0x859915F8ECFF0529LL, 0x859915F8ECFF0529LL, 0xC1C3FA0F31A7FE26LL, 18446744073709551613UL, 0xC1C3FA0F31A7FE26LL, 0x859915F8ECFF0529LL, 0x859915F8ECFF0529LL, 0xC1C3FA0F31A7FE26LL};
                int *l_1824 = &l_1670[5][0];
                int **l_1858 = &l_1773;
                long long l_1888 = 9L;
                short l_1923 = 0x82A0L;
                unsigned l_1937[7] = {2UL, 2UL, 18446744073709551606UL, 2UL, 2UL, 18446744073709551606UL, 2UL};
                int l_1938 = 1L;
                int i;
                (*g_1693) = l_1773;
            }
        }
    }
    return g_1618;
}







static int func_3(unsigned char p_4, unsigned p_5, int p_6, int p_7, unsigned char p_8)
{
    char l_1243 = 0x7CL;
    int *l_1244 = &g_95;
    int l_1258 = 0x86B7660BL;
    int l_1277 = 0xB3358DA1L;
    int l_1281[10][4] = {{0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}, {0L, 6L, 0L, 0xC21C89D6L}};
    unsigned l_1296 = 0x1E56157AL;
    int l_1307 = 0x1C995AE3L;
    unsigned short l_1336 = 0x8548L;
    unsigned l_1360 = 0xCA237695L;
    int ***l_1378[5][3] = {{(void*)0, (void*)0, &g_97}, {(void*)0, (void*)0, &g_97}, {(void*)0, (void*)0, &g_97}, {(void*)0, (void*)0, &g_97}, {(void*)0, (void*)0, &g_97}};
    unsigned long long l_1522 = 0xBECD550F79B3E7C4LL;
    unsigned l_1525 = 0x0D08CDD6L;
    short l_1536 = 0xF7FEL;
    int l_1537 = 0L;
    char l_1538 = 1L;
    int l_1539 = 0x7BC7095AL;
    long long l_1551 = 0xDF564DC3A7D9AC61LL;
    unsigned l_1581 = 1UL;
    int *l_1633 = &g_209;
    unsigned l_1647 = 0x0DA124CAL;
    int l_1668 = 8L;
    int i, j;
    if ((g_185 < (l_1243 >= ((255UL > func_10(l_1243, ((((l_1243 , l_1244) != (void*)0) , (p_8 & p_8)) | g_444))) , (*l_1244)))))
    {
        int *l_1245[3][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
        int ***l_1257 = (void*)0;
        int **l_1269 = &l_1245[1][2][0];
        unsigned l_1295 = 4294967286UL;
        int l_1297 = 1L;
        unsigned long long l_1322 = 0UL;
        int l_1326 = (-9L);
        int i, j, k;
        (*g_97) = l_1245[1][2][0];
        l_1258 |= ((p_4 ^ ((((-5L) ^ (safe_sub_func_int64_t_s_s(((safe_add_func_int64_t_s_s((~(((func_10((safe_unary_minus_func_int32_t_s(((safe_add_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((p_6 , 1UL), (((p_7 , ((g_1232 <= p_8) & p_6)) , g_185) | (-1L)))) || (*l_1244)), p_8)) , (void*)0) != l_1257), 0x4F22B459L)) , p_6))), p_6) > (-3L)) >= p_5) , 1L)), (*l_1244))) > g_452), p_8))) == (*l_1244)) , g_993[6])) , (-1L));
        if ((0x6DCBD9F2L && (safe_sub_func_uint32_t_u_u((((&g_98 == (void*)0) , g_452) <= g_95), p_7))))
        {
            unsigned char l_1261 = 0x2EL;
            int l_1275 = (-6L);
            int l_1276 = 1L;
            int l_1278 = 0L;
            int l_1279 = 0L;
            int l_1283[6][6] = {{0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L)}, {0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L)}, {0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L)}, {0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L)}, {0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L)}, {0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L), 0xA5132F1BL, (-6L)}};
            int i, j;
            if ((0x4EL || (*l_1244)))
            {
                unsigned char l_1262 = 0x1BL;
                int **l_1263 = (void*)0;
                int l_1280 = 0L;
                int l_1282[3][2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1282[i][j] = 5L;
                }
                if (((+(l_1262 , p_6)) , p_8))
                {
                    int *l_1264 = (void*)0;
                    (*g_97) = l_1264;
                }
                else
                {
                    short l_1272 = (-3L);
                    int l_1273[10][4] = {{0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}, {0x1330F431L, 0x1743321FL, (-4L), 0x1743321FL}};
                    int *l_1274 = &l_1273[6][0];
                    unsigned short l_1284[8][2][6] = {{{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}, {{0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}, {0x245FL, 65535UL, 1UL, 0UL, 3UL, 0xE2B2L}}};
                    int i, j, k;
                    l_1273[3][0] |= (safe_mod_func_uint16_t_u_u((~g_2), p_6));
                    l_1274 = &l_1258;
                    ++l_1284[2][0][0];
                }
                (*g_97) = ((((((safe_sub_func_uint16_t_u_u((&l_1269 != (void*)0), (safe_sub_func_int8_t_s_s((!7L), ((g_512 , ((*l_1244) > g_759)) >= (g_350 >= func_10((p_7 , g_2), (*l_1244)))))))) <= p_6) || 0xE5C873AA2583F4E9LL) >= g_569) , p_7) , (*g_97));
            }
            else
            {
                (*g_97) = (*g_97);
            }
            (*l_1244) = p_8;
            l_1296 = (((p_5 , (-6L)) | ((p_5 > (&l_1269 == (p_7 , &g_97))) > (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((l_1279 && g_1232), l_1295)) & l_1275), 15)))) && 65533UL);
            return l_1297;
        }
        else
        {
            unsigned long long l_1298 = 0x5EAF637A69FBB152LL;
            int l_1319 = (-1L);
            int l_1327[7] = {(-1L), (-1L), 0x3DDE35E8L, (-1L), (-1L), 0x3DDE35E8L, (-1L)};
            int i;
            --l_1298;
            for (p_6 = 0; (p_6 < (-10)); p_6 = safe_sub_func_uint16_t_u_u(p_6, 1))
            {
                (*l_1244) &= (p_4 && 0x328BF37F8D180596LL);
                l_1307 ^= (p_5 && p_4);
            }
            for (p_6 = 0; (p_6 <= 2); p_6 += 1)
            {
                int l_1310[6];
                int l_1311[9][3][8] = {{{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}, {{(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}, {(-10L), 0xE94C2898L, 0x44CC41CDL, 0L, 7L, (-1L), 9L, 0x2864114CL}}};
                int **l_1318 = &g_127[0][1];
                unsigned long long l_1325[1][5][10] = {{{0x5231E2EF5A85A0BELL, 0xB798063FD756F36BLL, 0xDF19339EA0541129LL, 0xDF19339EA0541129LL, 0xB798063FD756F36BLL, 0x5231E2EF5A85A0BELL, 18446744073709551614UL, 18446744073709551615UL, 0xFDF167727ECAECBDLL, 0x4F3345CCEC5E912DLL}, {0x5231E2EF5A85A0BELL, 0xB798063FD756F36BLL, 0xDF19339EA0541129LL, 0xDF19339EA0541129LL, 0xB798063FD756F36BLL, 0x5231E2EF5A85A0BELL, 18446744073709551614UL, 18446744073709551615UL, 0xFDF167727ECAECBDLL, 0x4F3345CCEC5E912DLL}, {0x5231E2EF5A85A0BELL, 0xB798063FD756F36BLL, 0xDF19339EA0541129LL, 0xDF19339EA0541129LL, 0xB798063FD756F36BLL, 0x5231E2EF5A85A0BELL, 18446744073709551614UL, 18446744073709551615UL, 0xFDF167727ECAECBDLL, 0x4F3345CCEC5E912DLL}, {0x5231E2EF5A85A0BELL, 0xB798063FD756F36BLL, 0xDF19339EA0541129LL, 0xDF19339EA0541129LL, 0xB798063FD756F36BLL, 0x5231E2EF5A85A0BELL, 18446744073709551614UL, 18446744073709551615UL, 0xFDF167727ECAECBDLL, 0x4F3345CCEC5E912DLL}, {0x5231E2EF5A85A0BELL, 0xB798063FD756F36BLL, 0xDF19339EA0541129LL, 0xDF19339EA0541129LL, 0xB798063FD756F36BLL, 0x5231E2EF5A85A0BELL, 18446744073709551614UL, 18446744073709551615UL, 0xFDF167727ECAECBDLL, 0x4F3345CCEC5E912DLL}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1310[i] = 0x1B9E7486L;
                for (g_209 = 0; (g_209 <= 2); g_209 += 1)
                {
                    int ***l_1308 = (void*)0;
                    int *l_1309 = &g_95;
                    unsigned l_1317 = 0x3D50D95BL;
                    int l_1328 = (-9L);
                    int l_1330 = (-1L);
                    int l_1331 = 0xC7492313L;
                    int l_1332 = 0x7C28360AL;
                    int l_1333 = 5L;
                    int l_1334[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1334[i] = 0xD3CF9C8FL;
                    g_97 = &g_127[(g_209 + 4)][p_6];
                    for (p_7 = 0; p_7 < 10; p_7 += 1)
                    {
                        for (g_350 = 0; g_350 < 4; g_350 += 1)
                        {
                            l_1281[p_7][g_350] = 1L;
                        }
                    }
                    if ((l_1308 == (void*)0))
                    {
                        (*g_97) = l_1309;
                    }
                    else
                    {
                        char l_1312 = 0xBCL;
                        int *l_1324 = &l_1277;
                        int l_1329 = 9L;
                        int l_1335[6][7][4] = {{{0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}}, {{0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}}, {{0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}}, {{0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}}, {{0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}}, {{0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}, {0x6F114E2BL, 1L, (-2L), (-1L)}}};
                        int i, j, k;
                        l_1311[4][1][2] ^= l_1310[2];
                        l_1319 = ((l_1312 , (((p_4 < (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((+(p_6 , g_759)), g_778)), p_4))) & p_7) || 0xCF2CL)) <= g_350);
                        (*l_1244) = (safe_lshift_func_uint8_t_u_s(((l_1322 > (l_1298 != ((((~g_993[1]) , g_512) >= p_5) || g_512))) , g_95), g_1323));
                        l_1336--;
                    }
                    --g_1339;
                }
                l_1327[3] |= (*l_1244);
            }
            for (g_452 = 0; (g_452 == (-10)); g_452--)
            {
                short l_1344 = (-1L);
                int l_1345 = 0L;
                int l_1346 = 0x7726C139L;
                int l_1347 = 0xEBC1844DL;
                int l_1348 = 0xD03A8122L;
                int l_1350 = (-3L);
                int l_1351 = (-3L);
                unsigned char l_1352 = 0UL;
                l_1352--;
            }
        }
    }
    else
    {
        int *l_1355 = &l_1258;
        int *l_1356 = &g_95;
        int *l_1357 = &l_1281[1][2];
        int *l_1358 = (void*)0;
        int *l_1359[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1359[i] = (void*)0;
        ++l_1360;
        for (g_1349 = (-20); (g_1349 > (-6)); g_1349 = safe_add_func_uint8_t_u_u(g_1349, 5))
        {
            int l_1367[5][8] = {{0xB976FC16L, (-6L), (-5L), (-1L), (-1L), (-1L), (-5L), (-6L)}, {0xB976FC16L, (-6L), (-5L), (-1L), (-1L), (-1L), (-5L), (-6L)}, {0xB976FC16L, (-6L), (-5L), (-1L), (-1L), (-1L), (-5L), (-6L)}, {0xB976FC16L, (-6L), (-5L), (-1L), (-1L), (-1L), (-5L), (-6L)}, {0xB976FC16L, (-6L), (-5L), (-1L), (-1L), (-1L), (-5L), (-6L)}};
            int l_1368 = 0xB1C1A12FL;
            int i, j;
            for (g_1323 = 0; (g_1323 != 16); g_1323 = safe_add_func_uint32_t_u_u(g_1323, 3))
            {
                int ***l_1373 = &g_97;
                (*g_97) = &l_1281[0][2];
                l_1368 ^= ((((**g_97) & 0x33B88914L) ^ p_4) | func_10(l_1367[3][2], (g_1323 , 5UL)));
                (***l_1373) = ((safe_sub_func_uint64_t_u_u((*l_1244), (!((void*)0 == &g_97)))) > func_10((safe_lshift_func_int8_t_s_u((&g_97 == l_1373), 6)), (func_10(((1L != (*l_1244)) , (p_5 | (((0UL != p_5) <= g_444) & p_8))), (***l_1373)) , 0x72BF3AD2C7B57E1FLL)));
                (*g_98) = p_5;
            }
            for (g_350 = 20; (g_350 < (-24)); g_350 = safe_sub_func_int64_t_s_s(g_350, 8))
            {
                return (*l_1244);
            }
            if ((*l_1244))
                break;
        }
    }
    for (p_6 = (-30); (p_6 >= 11); p_6 = safe_add_func_uint64_t_u_u(p_6, 1))
    {
        int ***l_1379 = &g_97;
        int l_1381[1];
        unsigned long long l_1382 = 1UL;
        unsigned short l_1405 = 5UL;
        unsigned short l_1445 = 0UL;
        int l_1480 = (-10L);
        unsigned long long l_1483 = 0x9087496B04FE8148LL;
        int i;
        for (i = 0; i < 1; i++)
            l_1381[i] = 0x834AB306L;
        for (l_1243 = 0; (l_1243 <= 3); l_1243 += 1)
        {
            int i, j;
            l_1281[(l_1243 + 3)][l_1243] &= p_7;
        }
        if ((l_1378[4][2] != l_1379))
        {
            long long l_1380 = 0x1D75F641BC682031LL;
            int l_1388 = 1L;
            int l_1389[10] = {0x43975FCAL, 1L, 0x43975FCAL, 1L, 0x43975FCAL, 1L, 0x43975FCAL, 1L, 0x43975FCAL, 1L};
            int l_1399 = (-5L);
            int *l_1427 = (void*)0;
            unsigned char l_1448 = 0x85L;
            int i;
            l_1382++;
            for (g_185 = 3; (g_185 >= 0); g_185 -= 1)
            {
                int l_1390 = 5L;
                int l_1391 = 0x89CD0740L;
                int l_1394 = 0xB7F44E34L;
                unsigned long long l_1395 = 18446744073709551615UL;
                int l_1401 = 4L;
                int l_1402 = 0L;
                int l_1403 = 7L;
                int l_1404 = 0L;
                int **l_1474[7][3][5] = {{{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}, {{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}, {{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}, {{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}, {{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}, {{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}, {{(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}, {(void*)0, (void*)0, &g_98, &g_324, (void*)0}}};
                int i, j, k;
            }
            l_1427 = (void*)0;
            (*l_1244) = (safe_unary_minus_func_int32_t_s(1L));
        }
        else
        {
            int **l_1503 = &l_1244;
            int l_1504 = (-1L);
            (*l_1244) = ((void*)0 != l_1503);
            l_1504 |= (*l_1244);
        }
        for (l_1405 = (-26); (l_1405 < 57); l_1405++)
        {
            char l_1507 = 0xF8L;
            unsigned short l_1514 = 8UL;
            (*l_1244) = l_1507;
            for (p_8 = 0; (p_8 <= 2); p_8 += 1)
            {
                int i, j;
                l_1381[0] &= (6UL || ((((((l_1507 , 0UL) < (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(p_5, (-1L))), 0))) & g_1232) != p_8) || l_1514) == g_95));
            }
            (**l_1379) = (void*)0;
        }
        (*l_1244) = (safe_unary_minus_func_int8_t_s(((((safe_mod_func_uint32_t_u_u(g_95, 0x2E07F44CL)) , g_95) > 0x30B0DF6BL) , (*l_1244))));
    }
    (*l_1244) ^= (safe_sub_func_int8_t_s_s(((p_6 , (((p_5 , 253UL) , l_1378[4][2]) != &g_97)) ^ p_6), g_569));
    for (g_452 = (-21); (g_452 != (-4)); ++g_452)
    {
        short l_1543 = 0L;
        int l_1545 = 0xB4614116L;
        int l_1548 = (-1L);
        int l_1549 = 0x0C5ACBBBL;
        int l_1550 = (-4L);
        int l_1552[3][1][7] = {{{0L, 0L, 1L, 0x9B5B19E6L, (-1L), 0x9B5B19E6L, 1L}}, {{0L, 0L, 1L, 0x9B5B19E6L, (-1L), 0x9B5B19E6L, 1L}}, {{0L, 0L, 1L, 0x9B5B19E6L, (-1L), 0x9B5B19E6L, 1L}}};
        unsigned short l_1553 = 65528UL;
        long long l_1570 = (-8L);
        unsigned char l_1574 = 0x4FL;
        unsigned long long l_1646 = 0xA4EC380C8DFE3D15LL;
        int i, j, k;
        if (p_5)
        {
            short l_1542 = 0xCF68L;
            int l_1544 = 1L;
            int l_1546 = 1L;
            int l_1547[6] = {9L, 9L, 1L, 9L, 9L, 1L};
            int **l_1562 = &g_324;
            int l_1565[2][9] = {{0x33196ADDL, 0xF75D5927L, 0x33196ADDL, 0xF75D5927L, 0x33196ADDL, 0xF75D5927L, 0x33196ADDL, 0xF75D5927L, 0x33196ADDL}, {0x33196ADDL, 0xF75D5927L, 0x33196ADDL, 0xF75D5927L, 0x33196ADDL, 0xF75D5927L, 0x33196ADDL, 0xF75D5927L, 0x33196ADDL}};
            unsigned long long l_1568 = 0x2AD5889E59FA6B86LL;
            int l_1569 = 0x8612730CL;
            unsigned char l_1571 = 0x21L;
            int i, j;
            --l_1553;
            l_1569 = ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((((((safe_mod_func_int64_t_s_s((((l_1562 == &g_127[0][0]) | l_1546) > 0xAFAE861EL), 6UL)) < p_6) < p_5) == 4294967290UL) <= p_5), p_7)) >= p_8), (-1L))) != p_8);
            if (p_4)
                continue;
            l_1571--;
        }
        else
        {
            unsigned l_1577[4][10][5] = {{{18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}}, {{18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}}, {{18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}}, {{18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}, {18446744073709551611UL, 0x3EDD1FAEL, 2UL, 0x7A05E82EL, 0x328DBD82L}}};
            int l_1580 = 0x1A87E759L;
            int i, j, k;
            (*l_1244) |= 0x7EA10281L;
            ++l_1574;
            l_1577[1][7][3]--;
            l_1580 = ((((0x0F12L & l_1570) , &l_1552[0][0][4]) == (void*)0) , (p_5 < g_209));
        }
        l_1545 &= func_10(p_6, g_1323);
        if ((p_4 , 6L))
        {
            unsigned long long l_1586[9] = {0x7D55596E0544DDA6LL, 0x7D55596E0544DDA6LL, 0x38E84D41463B2593LL, 0x7D55596E0544DDA6LL, 0x7D55596E0544DDA6LL, 0x38E84D41463B2593LL, 0x7D55596E0544DDA6LL, 0x7D55596E0544DDA6LL, 0x38E84D41463B2593LL};
            int *l_1591[10] = {&l_1548, (void*)0, &l_1548, (void*)0, &l_1548, (void*)0, &l_1548, (void*)0, &l_1548, (void*)0};
            int l_1609 = 9L;
            int i;
            for (g_1232 = 0; (g_1232 <= 6); g_1232 += 1)
            {
                int ***l_1587 = &g_97;
                for (g_512 = 4; (g_512 >= 0); g_512 -= 1)
                {
                    int *l_1582 = &g_185;
                    int ***l_1588 = &g_97;
                    if (((void*)0 != &g_95))
                    {
                        int i;
                        (*g_97) = (l_1586[7] , (void*)0);
                        (*l_1244) = (((p_8 , l_1587) != l_1588) , (((g_444 > l_1586[5]) >= (safe_sub_func_int64_t_s_s(g_993[g_1232], 0x58FB2D7326E48389LL))) < (p_6 ^ 1L)));
                    }
                    else
                    {
                        long long l_1592 = (-5L);
                        int l_1593 = 0x16B15256L;
                        l_1591[4] = l_1591[2];
                        g_1594[5][1][4]++;
                        (*g_97) = l_1591[0];
                        l_1593 = (safe_add_func_uint64_t_u_u(g_512, p_5));
                    }
                    l_1545 |= l_1543;
                }
            }
            l_1552[0][0][6] &= (l_1549 ^ (safe_rshift_func_uint16_t_u_u(func_10(g_185, p_5), g_95)));
        }
        else
        {
            long long l_1612 = 0L;
            int l_1616 = 5L;
            int l_1617 = 0L;
            int ***l_1628 = &g_97;
            for (g_1339 = (-20); (g_1339 == 23); g_1339 = safe_add_func_uint64_t_u_u(g_1339, 2))
            {
                int l_1613 = 0xF81079E1L;
                int l_1614 = (-1L);
                int l_1615 = (-1L);
                int **l_1627 = (void*)0;
                g_1618--;
                if ((g_993[3] < p_4))
                {
                    unsigned short l_1640 = 0xBD7EL;
                    (*l_1244) = p_8;
                    (*g_97) = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((((((l_1633 != ((((((0UL && 8UL) > ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(g_759)), (*l_1633))) , p_7)) >= g_185) & p_7) , g_1618) , &l_1550)) < 0x440106B7L) || 0x53L) < g_1639) < l_1640) ^ l_1640) > p_8), 0UL)), 0)) , (void*)0);
                }
                else
                {
                    int l_1665 = 0x63AFEA6FL;
                    if ((safe_add_func_int16_t_s_s((((safe_unary_minus_func_int64_t_s(l_1646)) > p_7) < g_759), l_1647)))
                    {
                        unsigned long long l_1656 = 0xDE211D2C571BFB59LL;
                        l_1617 ^= ((safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((((*l_1633) , ((safe_add_func_int64_t_s_s(g_209, g_209)) , l_1628)) != (void*)0) <= (safe_sub_func_uint8_t_u_u((g_993[6] & (-1L)), (-8L)))) , (p_8 >= g_1323)), l_1656)), g_512)) && p_4);
                    }
                    else
                    {
                        (*l_1633) &= p_7;
                        (**l_1628) = &l_1550;
                        (*l_1633) = 0x0B1A4B41L;
                    }
                    (*l_1633) = l_1665;
                    return l_1668;
                }
            }
        }
        if (p_8)
            break;
    }
    return p_5;
}







static int func_10(unsigned short p_11, unsigned long long p_12)
{
    unsigned char l_1236 = 1UL;
    int *l_1241[6];
    int l_1242 = 0L;
    int i;
    for (i = 0; i < 6; i++)
        l_1241[i] = &g_209;
    l_1242 = (((!((!(p_12 != l_1236)) , 0x4254A2AFL)) >= (~(((safe_add_func_int64_t_s_s((7L < (safe_sub_func_int8_t_s_s(l_1236, ((g_778 == (p_11 >= l_1236)) | p_12)))), p_12)) , 0UL) ^ 1L))) != l_1236);
    return p_12;
}







static unsigned short func_15(int p_16, unsigned p_17, unsigned char p_18, short p_19, long long p_20)
{
    short l_893 = 0x0146L;
    int l_898[10][4][6] = {{{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}, {{(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}, {(-1L), (-1L), 0L, (-1L), (-1L), 0L}}};
    int **l_905 = &g_127[0][0];
    unsigned l_936 = 18446744073709551615UL;
    unsigned char l_976[8][2][2] = {{{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}, {{253UL, 0UL}, {253UL, 0UL}}};
    long long l_985[7];
    int **l_986 = &g_98;
    int **l_1022[9];
    long long l_1027 = 0x354DA8BDCD243678LL;
    unsigned short l_1103 = 0xEEB3L;
    long long l_1127[4] = {0L, 0x77A445CD1345A04BLL, 0L, 0x77A445CD1345A04BLL};
    unsigned long long l_1185[9] = {0x0DFC7E654A221823LL, 0xCC4379EA0D6F773ALL, 0x0DFC7E654A221823LL, 0xCC4379EA0D6F773ALL, 0x0DFC7E654A221823LL, 0xCC4379EA0D6F773ALL, 0x0DFC7E654A221823LL, 0xCC4379EA0D6F773ALL, 0x0DFC7E654A221823LL};
    char l_1234[9][6][4] = {{{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}, {{0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}, {0xC7L, (-8L), 0x34L, 0x34L}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_985[i] = 0x9BC77DBDF00B5A5CLL;
    for (i = 0; i < 9; i++)
        l_1022[i] = &g_324;
    for (p_20 = 5; (p_20 <= 3); p_20--)
    {
        unsigned short l_897 = 0x9D9BL;
        int l_900 = (-5L);
        unsigned char l_941 = 0x1FL;
        int l_958 = (-1L);
        int l_959 = (-1L);
        unsigned short l_973 = 0xFAA1L;
        int l_1006 = 1L;
        int l_1007 = 1L;
        int ***l_1011[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1011[i] = &g_97;
        if ((*g_98))
        {
            unsigned l_896 = 1UL;
            int l_914 = 0x95769543L;
            for (g_512 = 0; (g_512 != (-1)); g_512 = safe_sub_func_int8_t_s_s(g_512, 4))
            {
                unsigned l_910 = 1UL;
                l_898[9][2][0] = (0x98F44FC2L != ((g_444 ^ (safe_mod_func_int8_t_s_s(g_209, ((g_209 , (p_19 , l_893)) | (g_185 > (safe_mul_func_int64_t_s_s(l_893, (((((g_759 != g_444) <= l_896) < g_759) == l_897) >= 0L)))))))) != 1L));
                for (g_185 = 0; (g_185 <= 2); g_185 += 1)
                {
                    long long l_913 = (-5L);
                    if (p_17)
                        break;
                    l_900 = (safe_unary_minus_func_int16_t_s(g_444));
                    p_16 = ((void*)0 != (*g_97));
                    l_914 = (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((void*)0 == l_905), l_896)), ((~g_452) || (safe_rshift_func_int8_t_s_u(((l_896 >= (p_19 , (+(((safe_rshift_func_uint16_t_u_s((p_18 == (l_910 , (safe_add_func_uint64_t_u_u((l_913 , p_19), l_913)))), l_896)) , 0x754032EBL) == l_893)))) , 6L), l_897)))));
                }
                (*g_97) = ((((safe_rshift_func_int8_t_s_s(l_910, p_16)) ^ p_16) | (((((&g_98 == &g_324) , (g_452 , p_19)) >= (-1L)) && g_209) >= l_914)) , (*g_97));
            }
        }
        else
        {
            unsigned char l_923[7] = {0x93L, 0x93L, 0x73L, 0x93L, 0x93L, 0x73L, 0x93L};
            int l_935 = 0x57609ADDL;
            int i;
            for (g_569 = 0; (g_569 <= 2); g_569 += 1)
            {
                long long l_929[6][10] = {{(-10L), (-1L), 1L, 0x6109C644477FF1F4LL, 0xB44B1AE9ED87789ELL, 0x6109C644477FF1F4LL, 1L, (-1L), (-10L), (-1L)}, {(-10L), (-1L), 1L, 0x6109C644477FF1F4LL, 0xB44B1AE9ED87789ELL, 0x6109C644477FF1F4LL, 1L, (-1L), (-10L), (-1L)}, {(-10L), (-1L), 1L, 0x6109C644477FF1F4LL, 0xB44B1AE9ED87789ELL, 0x6109C644477FF1F4LL, 1L, (-1L), (-10L), (-1L)}, {(-10L), (-1L), 1L, 0x6109C644477FF1F4LL, 0xB44B1AE9ED87789ELL, 0x6109C644477FF1F4LL, 1L, (-1L), (-10L), (-1L)}, {(-10L), (-1L), 1L, 0x6109C644477FF1F4LL, 0xB44B1AE9ED87789ELL, 0x6109C644477FF1F4LL, 1L, (-1L), (-10L), (-1L)}, {(-10L), (-1L), 1L, 0x6109C644477FF1F4LL, 0xB44B1AE9ED87789ELL, 0x6109C644477FF1F4LL, 1L, (-1L), (-10L), (-1L)}};
                int *l_932 = &g_95;
                unsigned char l_960 = 255UL;
                int i, j;
                if ((*g_98))
                    break;
                if ((safe_sub_func_int8_t_s_s(((void*)0 != (*g_97)), (g_759 && (l_923[6] < p_17)))))
                {
                    unsigned short l_924 = 0x84D1L;
                    (*g_98) = (l_924 & 0L);
                    for (p_18 = 0; (p_18 <= 2); p_18 += 1)
                    {
                        (**g_97) = (*g_98);
                    }
                }
                else
                {
                    int *l_933 = &l_898[9][2][0];
                    int *l_934[1][4] = {{&g_185, &g_209, &g_185, &g_209}};
                    int i, j;
                    for (g_185 = 0; g_185 < 7; g_185 += 1)
                    {
                        l_923[g_185] = 0x9AL;
                    }
                    for (l_893 = 6; (l_893 >= 0); l_893 -= 1)
                    {
                        int i;
                        (*l_932) |= (!((((-6L) == (((safe_sub_func_int8_t_s_s(((0L && l_923[(g_569 + 2)]) <= l_929[0][2]), (p_17 & p_18))) , l_932) != (void*)0)) , 4294967291UL) == 0x09A642E8L));
                    }
                    l_936++;
                    for (l_936 = 0; (l_936 != 50); l_936 = safe_add_func_int32_t_s_s(l_936, 4))
                    {
                        (**g_97) = p_16;
                        l_941++;
                    }
                }
                if ((((((-4L) <= (safe_lshift_func_int8_t_s_u(0L, 7))) == l_935) , &g_127[0][0]) != (void*)0))
                {
                    int l_953 = 0x1346C9BEL;
                    int l_955 = (-1L);
                    int l_956 = 6L;
                    int l_957 = 0x0376CB59L;
                    for (l_941 = (-30); (l_941 >= 53); l_941 = safe_add_func_int16_t_s_s(l_941, 9))
                    {
                        int *l_950 = &l_900;
                        int *l_951 = &l_900;
                        int *l_952[8][3] = {{&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}, {&g_185, (void*)0, &l_898[9][2][0]}};
                        short l_954[3][9][4] = {{{(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}}, {{(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}}, {{(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}, {(-9L), 0x4A76L, 0x1F39L, 4L}}};
                        int i, j, k;
                        (*g_98) |= l_923[4];
                        p_16 |= l_935;
                        --l_960;
                    }
                }
                else
                {
                    if (l_935)
                        break;
                }
            }
            for (g_185 = (-21); (g_185 >= 10); g_185++)
            {
                int *l_967 = &g_95;
                for (g_95 = 2; (g_95 >= 0); g_95 -= 1)
                {
                    if ((((safe_lshift_func_uint16_t_u_u(p_18, 12)) , l_923[4]) >= (l_967 == l_967)))
                    {
                        return g_512;
                    }
                    else
                    {
                        p_16 ^= (*g_98);
                    }
                    return g_778;
                }
            }
            for (l_900 = 6; (l_900 >= 0); l_900 -= 1)
            {
                int ***l_974 = &g_97;
                int i;
                if (l_923[l_900])
                    break;
                for (l_959 = 2; (l_959 >= 0); l_959 -= 1)
                {
                    return p_18;
                }
                (*l_905) = (void*)0;
                for (g_452 = 0; (g_452 <= 3); g_452 += 1)
                {
                    for (p_17 = 0; (p_17 <= 2); p_17 += 1)
                    {
                        unsigned l_975[5][1][6] = {{{0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL}}, {{0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL}}, {{0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL}}, {{0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL}}, {{0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL, 0x8C38DF09L, 3UL}}};
                        int i, j, k;
                        if (l_923[6])
                            break;
                        l_898[(g_452 + 5)][g_452][(p_17 + 1)] = p_20;
                        if (p_19)
                            break;
                    }
                    for (p_19 = 0; (p_19 == (-10)); p_19 = safe_sub_func_int32_t_s_s(p_19, 5))
                    {
                        return p_18;
                    }
                    return l_958;
                }
            }
        }
        for (g_95 = (-3); (g_95 < 19); ++g_95)
        {
            unsigned char l_987[8];
            int l_992 = 0xEAFF475FL;
            unsigned char l_1008 = 1UL;
            int i;
            for (i = 0; i < 8; i++)
                l_987[i] = 0x29L;
            (**l_986) ^= ((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(g_759, (p_20 ^ l_985[4]))) | l_973) , ((p_18 ^ (((((p_19 , l_986) == (((l_987[0] <= g_95) & 0x692BL) , l_905)) < 1L) & p_18) < l_973)) & l_987[5])), p_19)) , p_18);
            if ((*g_98))
                break;
            for (p_19 = 0; (p_19 <= 1); p_19 += 1)
            {
                int l_990 = 0x8224C5C2L;
                int l_991 = 0xB06EA641L;
                int *l_997 = &l_898[5][3][5];
                int *l_998 = &g_209;
                int *l_999 = &l_900;
                int *l_1000 = &l_991;
                int *l_1001 = &l_991;
                int *l_1002 = &g_209;
                int *l_1003 = &l_991;
                int *l_1004 = (void*)0;
                int *l_1005[4][9][7] = {{{&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}}, {{&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}}, {{&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}}, {{&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}, {&l_958, &l_990, &l_992, &l_990, (void*)0, &g_185, &g_95}}};
                int i, j, k;
            }
        }
        l_986 = l_905;
        return g_95;
    }
    if ((g_452 == (**l_986)))
    {
        int l_1013[3];
        unsigned long long l_1016 = 6UL;
        int *l_1017 = &l_898[6][3][2];
        long long l_1028 = 1L;
        int l_1037 = 0x6F00BAB1L;
        int i;
        for (i = 0; i < 3; i++)
            l_1013[i] = (-1L);
        (*l_1017) |= ((p_16 && ((g_95 <= g_759) && l_1016)) > (**l_986));
        (*l_1017) = ((safe_add_func_int8_t_s_s((((g_993[2] != (func_75(&p_16, (*l_1017), ((safe_rshift_func_int16_t_s_s((l_1028 , p_16), p_17)) || g_185), p_17, (*l_1017)) != 0x57L)) > g_759) <= p_20), g_2)) && p_18);
        (*l_1017) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((1UL || ((p_19 == (safe_mod_func_uint8_t_u_u(p_18, g_185))) , ((safe_mod_func_uint8_t_u_u(l_1037, (((p_18 != (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((&g_127[2][2] == &g_324) < p_18), p_19)), g_778))) <= 0x713BAE3BL) || (*l_1017)))) , g_778))), 13)), p_19));
        for (g_778 = 0; (g_778 == 52); g_778++)
        {
            if (p_17)
                break;
            (*l_1017) = ((void*)0 == (*g_97));
        }
    }
    else
    {
        unsigned long long l_1054[4];
        int l_1055 = (-9L);
        char l_1063[7][10][3] = {{{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}, {{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}, {{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}, {{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}, {{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}, {{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}, {{(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}, {(-1L), 0xE1L, (-1L)}}};
        unsigned l_1088 = 0x3D8A3609L;
        int l_1114[2];
        char l_1122 = 9L;
        long long l_1123[5];
        int **l_1153 = &g_324;
        unsigned l_1164 = 0xC8FDAF6EL;
        char l_1168 = 4L;
        unsigned short l_1174 = 65529UL;
        int l_1235 = 0x4ACB3161L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1054[i] = 3UL;
        for (i = 0; i < 2; i++)
            l_1114[i] = (-5L);
        for (i = 0; i < 5; i++)
            l_1123[i] = 0xCD994389126B3EF7LL;
        l_1055 = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_16 == ((g_2 != (((!func_75((*g_97), ((p_17 , g_95) > p_19), p_18, (safe_rshift_func_int8_t_s_u((p_17 == (safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_16, p_20)) , 65528UL), l_1054[3]))), l_1054[3])), p_18)) <= p_19) <= p_17)) & g_444)), g_759)), g_452)) , p_20);
        if ((safe_rshift_func_int8_t_s_u((g_778 || g_185), 1)))
        {
            return p_18;
        }
        else
        {
            unsigned char l_1060 = 251UL;
            unsigned short l_1061 = 65534UL;
            int l_1066 = (-1L);
            int ***l_1083 = &l_986;
            int *l_1093[10][1][9] = {{{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}, {{&g_185, &l_898[1][0][4], &l_898[9][2][0], (void*)0, &g_185, (void*)0, (void*)0, (void*)0, &g_185}}};
            int l_1119[9] = {0x46AC06B1L, (-7L), 0x46AC06B1L, (-7L), 0x46AC06B1L, (-7L), 0x46AC06B1L, (-7L), 0x46AC06B1L};
            unsigned short l_1124 = 1UL;
            int l_1169 = (-6L);
            char l_1183 = 0L;
            unsigned char l_1200 = 0UL;
            long long l_1201 = 6L;
            int i, j, k;
            for (l_936 = 0; (l_936 < 20); l_936 = safe_add_func_int32_t_s_s(l_936, 1))
            {
                int l_1062[10] = {0x2F517EBCL, 1L, 0x2F517EBCL, 1L, 0x2F517EBCL, 1L, 0x2F517EBCL, 1L, 0x2F517EBCL, 1L};
                int i;
                if ((p_19 > l_1060))
                {
                    unsigned char l_1064 = 0UL;
                    int l_1065 = 0xA2AE9647L;
                    if (l_1064)
                    {
                        unsigned char l_1067 = 9UL;
                        ++l_1067;
                    }
                    else
                    {
                        char l_1070[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1070[i] = 0xA0L;
                        p_16 = (l_1055 && (safe_sub_func_uint8_t_u_u(p_16, (((safe_add_func_int64_t_s_s((p_16 || p_19), (safe_lshift_func_uint16_t_u_s(p_17, ((safe_unary_minus_func_int32_t_s(((&g_127[6][0] == (void*)0) , (g_2 >= 0x2BL)))) != l_1060))))) < g_452) && p_20))));
                        p_16 |= 0xE5FE691BL;
                    }
                    return p_18;
                }
                else
                {
                    unsigned l_1078 = 18446744073709551613UL;
                    --l_1078;
                }
            }
            (*g_97) = (((((safe_mul_func_uint16_t_u_u((l_1083 != &l_986), ((g_759 >= g_350) != (safe_mod_func_uint8_t_u_u((~g_95), 0xBEL))))) || g_350) , &g_97) != (void*)0) , (void*)0);
            if (l_1055)
            {
                unsigned l_1095 = 0xC09BCC70L;
                int *l_1100[3][5] = {{&g_185, (void*)0, &g_185, (void*)0, &g_185}, {&g_185, (void*)0, &g_185, (void*)0, &g_185}, {&g_185, (void*)0, &g_185, (void*)0, &g_185}};
                unsigned char l_1116[2][7];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1116[i][j] = 0xABL;
                }
                for (l_893 = 0; (l_893 != (-10)); l_893 = safe_sub_func_int64_t_s_s(l_893, 6))
                {
                    unsigned long long l_1104 = 6UL;
                    for (p_18 = (-2); (p_18 != 57); p_18 = safe_add_func_uint32_t_u_u(p_18, 5))
                    {
                        long long l_1094 = 0x6ADA45E05296D537LL;
                        p_16 = p_16;
                        l_1093[3][0][3] = (*g_97);
                        p_16 &= ((p_20 , l_1094) | g_452);
                        if (l_1095)
                            break;
                    }
                    (*l_905) = &p_16;
                    (*l_905) = (((((!l_1063[2][3][1]) && (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(7UL, 65531UL)), 0))) <= p_17) , p_17) , l_1100[1][4]);
                    for (l_1066 = 29; (l_1066 < (-20)); l_1066--)
                    {
                        long long l_1105[2][7][10] = {{{0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}}, {{0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}, {0xD049E395F8BEA814LL, 6L, 0xEFF2BA2E99D2E5F6LL, 0L, (-1L), (-3L), 0x4E68A35EDF8C32C9LL, 0x61261355CE781309LL, (-9L), 0xF1A0A365070B61A7LL}}};
                        int i, j, k;
                        l_1022[3] = (void*)0;
                        p_16 = p_16;
                        p_16 &= (l_1104 > p_17);
                        if (l_1105[1][4][2])
                            break;
                    }
                }
                for (p_18 = 2; (p_18 <= 6); p_18 += 1)
                {
                    unsigned short l_1106 = 65532UL;
                    int l_1107 = 1L;
                    int l_1108 = 8L;
                    int l_1109 = 7L;
                    short l_1110 = 0x46BDL;
                    int l_1111 = 0x202EDE14L;
                    int l_1112[8] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
                    int l_1115 = 0x2AA475EAL;
                    int i;
                    l_1106 = 0x3C23E637L;
                    (*l_1083) = (void*)0;
                    if (l_985[p_18])
                        continue;
                    l_1100[2][0] = (*g_97);
                    for (l_936 = 0; (l_936 <= 6); l_936 += 1)
                    {
                        int l_1113 = 0x7F76A484L;
                        --l_1116[0][2];
                        p_16 = l_1113;
                        l_1119[4] = ((l_1055 , p_16) | 0xF344C431922F604CLL);
                        (*l_905) = &p_16;
                    }
                }
            }
            else
            {
                long long l_1120[6] = {(-9L), (-9L), 3L, (-9L), (-9L), 3L};
                int l_1121[1];
                int *l_1139 = &l_1055;
                unsigned long long l_1158[8];
                int ***l_1165 = &g_97;
                unsigned long long l_1197 = 0x3A52C5BE7F4CCE23LL;
                int *l_1231[8] = {&l_1066, &l_898[1][1][1], &l_1066, &l_898[1][1][1], &l_1066, &l_898[1][1][1], &l_1066, &l_898[1][1][1]};
                int i;
                for (i = 0; i < 1; i++)
                    l_1121[i] = 0xC59940F1L;
                for (i = 0; i < 8; i++)
                    l_1158[i] = 0x4C6FC09A19144DE5LL;
                l_1124++;
                if (l_1127[0])
                {
                    unsigned l_1138 = 0UL;
                    int **l_1150 = &g_324;
                    int l_1154 = 1L;
                    if ((safe_rshift_func_int8_t_s_s((g_569 || 0L), 1)))
                    {
                        p_16 ^= p_19;
                        (**l_1083) = (void*)0;
                        l_1138 = p_17;
                        (*g_97) = l_1139;
                    }
                    else
                    {
                        (*g_97) = (void*)0;
                        (*l_1139) ^= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(1UL, 3)), 8));
                        p_16 = 0L;
                        (*l_1139) = (((safe_rshift_func_int8_t_s_s(g_993[3], 0)) < p_19) > p_18);
                    }
                    if (((safe_add_func_int16_t_s_s((p_16 , p_18), g_209)) & g_512))
                    {
                        (*l_1083) = &g_127[0][0];
                        (*l_1139) = (*l_1139);
                        (*l_905) = &p_16;
                    }
                    else
                    {
                        int l_1155[1][4];
                        int l_1156 = 0x85C631D5L;
                        char l_1157[5];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1155[i][j] = 0x35630EB3L;
                        }
                        for (i = 0; i < 5; i++)
                            l_1157[i] = 0xF4L;
                        --l_1158[3];
                        (*l_1139) = p_16;
                        (*l_1139) &= (0xB318B85FCEC4CD5BLL & (safe_unary_minus_func_uint16_t_u(l_1156)));
                    }
                    l_1139 = (void*)0;
                }
                else
                {
                    unsigned short l_1170 = 0xDEAAL;
                    char l_1184 = (-7L);
                    for (l_1061 = 0; (l_1061 >= 53); ++l_1061)
                    {
                        (*l_1139) = (((((((!p_20) && l_1164) != ((g_350 != g_778) > p_20)) , &g_97) != &l_1153) , &p_16) != (void*)0);
                        (*l_1139) = (((void*)0 != l_1165) == p_17);
                    }
                    l_1169 &= (p_19 > ((((((((0UL || (safe_mod_func_uint64_t_u_u(l_1168, (g_185 || g_444)))) || g_185) , 65529UL) < p_20) == 0x73L) , g_778) || g_759) >= p_16));
                    if (((((*g_97) != (*l_905)) <= (((+0UL) & ((l_1170 , (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_1174)), ((safe_mod_func_uint16_t_u_u(((((((g_95 , (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(g_95, g_2)), l_1183)), p_17))) <= 65535UL) && 8UL) != l_1184) & g_512) & g_350), p_16)) != 0L)))) && 255UL)) , g_444)) ^ p_19))
                    {
                        (*l_1139) |= 0xFBDF101DL;
                    }
                    else
                    {
                        unsigned l_1188 = 0xA550DA52L;
                        --l_1185[0];
                        --l_1188;
                        p_16 = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_20, 9)) & (&g_127[0][0] != &g_98)), (g_512 , g_569)));
                    }
                }
                if (p_16)
                {
                    short l_1195 = 0x22E1L;
                    int l_1196[4] = {0xBC4AD8ADL, 1L, 0xBC4AD8ADL, 1L};
                    int i;
                    l_1197++;
                    (*l_1153) = (*g_97);
                    l_1200 &= (g_512 < g_2);
                    p_16 = (p_17 , p_19);
                }
                else
                {
                    unsigned l_1212 = 5UL;
                    int l_1224 = 0x5EE39689L;
                    int l_1225 = 1L;
                    int l_1226[2];
                    long long l_1230 = 0xA384C22671308B96LL;
                    int l_1233 = 9L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1226[i] = 0x5EAF4030L;
                    for (g_512 = 0; (g_512 >= 8); g_512++)
                    {
                        long long l_1213 = 0x638AF56E9EA1D2D4LL;
                        l_1213 ^= (((p_16 , 0x6A97F690C437DEC5LL) | p_19) , ((((p_18 ^ (((safe_mod_func_uint8_t_u_u((1UL < ((0xA1C7L >= ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(1L, (&g_97 != (void*)0))) && p_18), p_18)) <= g_95)) | p_20)), 0x81L)) || p_20) && l_1212)) <= p_16) , (void*)0) != (void*)0));
                        p_16 = (((p_16 & (p_19 | ((**l_1165) != &p_16))) < ((((safe_add_func_int64_t_s_s(l_1212, g_350)) != ((((l_1153 != (void*)0) == ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_1212, p_16)), (-3L))), p_16)) , g_209)) > g_759) >= l_1212)) | g_993[1]) < p_16)) <= l_1212);
                    }
                    for (p_20 = 0; (p_20 <= 7); p_20 += 1)
                    {
                        int l_1222 = 1L;
                        int l_1223[2];
                        unsigned short l_1227 = 65535UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1223[i] = 0xA81672F3L;
                        ++l_1227;
                    }
                    l_1233 = (p_16 ^ 0x09L);
                }
                return g_452;
            }
            l_1235 &= p_20;
        }
        p_16 ^= ((&l_1022[6] == &l_1153) || ((0xFC85L & g_759) >= l_1054[2]));
    }
    (*g_97) = (void*)0;
    return p_19;
}







static unsigned short func_32(unsigned long long p_33, unsigned p_34, unsigned p_35, long long p_36, char p_37)
{
    long long l_50 = 0L;
    int *l_849 = &g_209;
    short l_863 = 0x5D29L;
    (*l_849) = ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(1L, func_48((l_50 ^ l_50)))), (safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u((g_569 , ((0x2587F003L >= (-5L)) & (~(1L | ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(1UL, 0x9EFA2566796AA645LL)), g_444)) , (-7L)) & g_778) > g_569))))), 0xF01DDA29BEC6CADCLL)), g_512)))) , 4UL), g_2)) || g_569), l_50)), p_35)) , l_50);
    (*g_97) = l_849;
    for (p_36 = (-5); (p_36 > (-24)); --p_36)
    {
        char l_860[5];
        int **l_862 = &g_127[0][0];
        unsigned char l_870 = 0UL;
        int i;
        for (i = 0; i < 5; i++)
            l_860[i] = 0x2DL;
        if ((safe_lshift_func_int16_t_s_s((g_759 > p_36), g_185)))
        {
            int **l_861 = (void*)0;
            int *l_864 = (void*)0;
            int *l_865 = &g_185;
            (*l_865) |= (*l_849);
        }
        else
        {
            unsigned l_875 = 0xEA579944L;
            int ***l_877 = &l_862;
            unsigned char l_878 = 0UL;
            for (g_209 = 0; (g_209 <= 23); g_209++)
            {
                int ***l_876 = &g_97;
                int *l_879 = &g_95;
                (*l_879) |= (((safe_mod_func_uint16_t_u_u(g_452, p_33)) && (g_512 > l_870)) ^ ((safe_sub_func_int64_t_s_s((p_37 != (safe_rshift_func_uint16_t_u_s((l_875 & (p_33 < ((((0x44L | ((g_512 || g_569) >= 0UL)) , l_876) != l_877) != (***l_876)))), p_35))), g_444)) & l_878));
                return p_35;
            }
            (**l_877) = (*g_97);
        }
    }
    return g_569;
}







static char func_48(int p_49)
{
    int l_58 = 0x291260E2L;
    int **l_644 = &g_324;
    unsigned char l_645[5][8][6] = {{{9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}}, {{9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}}, {{9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}}, {{9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}}, {{9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}, {9UL, 8UL, 0x1AL, 0xC0L, 0x41L, 253UL}}};
    int l_738 = 0x808E18BFL;
    int l_743 = 0x74EA634CL;
    int l_744 = 1L;
    int l_745 = 0xA9CD9612L;
    int l_754 = 0L;
    int l_755 = 0xF9C5F235L;
    int l_757[9][8][3] = {{{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}, {{0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}, {0xB7ED56DAL, 0x38AAB231L, 0x4F734B9AL}}};
    long long l_760 = 0x0C60054B5B5AB860LL;
    long long l_806 = 0x5DE34E14AC40EA0DLL;
    int *l_827 = &l_745;
    int i, j, k;
    if ((((safe_rshift_func_int8_t_s_s(func_53(l_58, g_2, l_58, p_49), (l_58 && ((((safe_mod_func_uint32_t_u_u((((g_569 , (0L > l_58)) , l_644) != (void*)0), 0x8C3AF183L)) , l_58) , l_645[2][5][3]) <= 18446744073709551612UL)))) , g_569) & g_350))
    {
        int l_646 = 0x9F7DF123L;
        unsigned long long l_647 = 0x8A6BFD7E7EF57992LL;
        int **l_671 = &g_98;
        long long l_717 = (-1L);
        int l_740 = 0L;
        int l_741 = 0x1EA981CCL;
        int l_746 = (-1L);
        int l_753[4] = {0x7A9043CCL, 0x6E4E5704L, 0x7A9043CCL, 0x6E4E5704L};
        unsigned short l_773 = 0x9B0CL;
        int *l_780 = &l_753[3];
        unsigned short l_789 = 0x4B8FL;
        int i;
        if (((((&g_97 != &l_644) , l_646) >= (g_95 , p_49)) < (l_647 , (((void*)0 == &g_97) & g_350))))
        {
            int *l_650 = (void*)0;
            unsigned l_714[8][10] = {{0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}, {0x22C9AB32L, 0xE1406FDEL, 0x22C9AB32L, 0xE33BB7D1L, 0UL, 0xC0BBAB8CL, 0xAB44F8ECL, 0x632FAA4CL, 4294967295UL, 1UL}};
            int i, j;
            if ((*g_324))
            {
                (**l_644) |= 0x41148AA7L;
                (*l_644) = (*l_644);
                l_646 &= (4294967287UL ^ ((*g_97) == (void*)0));
            }
            else
            {
                int *l_652 = (void*)0;
                int l_697[3];
                unsigned char l_698 = 0x18L;
                int ***l_722 = &l_644;
                int i;
                for (i = 0; i < 3; i++)
                    l_697[i] = 0x7A56D739L;
                if ((**l_644))
                {
                    for (g_350 = 0; (g_350 < 29); g_350++)
                    {
                        l_646 ^= p_49;
                    }
                    (*l_644) = (*g_97);
                    (*g_97) = &l_646;
                    (*g_97) = l_650;
                }
                else
                {
                    unsigned l_657 = 4294967295UL;
                    int l_682 = 0x4269D7C4L;
                    for (g_209 = 2; (g_209 >= 0); g_209 -= 1)
                    {
                        int *l_651 = &g_185;
                        (*g_97) = (*g_97);
                    }
                    if ((l_657 < 2L))
                    {
                        unsigned long long l_658[3][3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_658[i][j] = 1UL;
                        }
                        l_658[0][1]--;
                    }
                    else
                    {
                        int *l_665 = &g_185;
                        (*l_644) = l_650;
                        (*l_665) = ((((safe_mod_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u((p_49 != g_209), g_2)) & p_49) , p_49) , 1L) , 255UL), 1UL)) , l_671) != (void*)0) && g_2);
                        (*l_665) |= ((p_49 == p_49) & 1L);
                    }
                }
                if (p_49)
                {
                    int *l_683 = &g_185;
                    int *l_684 = &g_185;
                    int *l_685 = &l_646;
                    int *l_686 = (void*)0;
                    int *l_687 = &g_185;
                    int *l_688 = &g_95;
                    int *l_689 = (void*)0;
                    int l_690 = 0x262B1187L;
                    int *l_691 = (void*)0;
                    int l_692 = 0L;
                    int *l_693 = &l_646;
                    int *l_694 = &g_185;
                    int *l_695 = &g_185;
                    int *l_696[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_696[i] = (void*)0;
                    (*l_644) = l_650;
                    ++l_698;
                    (*l_671) = l_650;
                }
                else
                {
                    unsigned l_705[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_705[i] = 18446744073709551615UL;
                    for (g_95 = 0; (g_95 != (-24)); g_95 = safe_sub_func_int16_t_s_s(g_95, 4))
                    {
                        if (p_49)
                            break;
                    }
                    l_646 = (((safe_mod_func_int16_t_s_s(l_705[0], p_49)) , 3L) , p_49);
                }
                for (l_698 = 0; (l_698 <= 13); l_698 = safe_add_func_uint16_t_u_u(l_698, 4))
                {
                    return p_49;
                }
                (*l_722) = l_644;
            }
            l_646 = (g_444 , ((((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((l_644 == (void*)0) > ((*g_97) == (((1L >= ((l_671 == &l_650) & (safe_unary_minus_func_uint32_t_u((&l_644 != (void*)0))))) & g_209) , (*g_97)))), g_209)), 0)) | 0xF290BD98L) , g_209) > p_49));
            return g_2;
        }
        else
        {
            int *l_732[5][8] = {{&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}, {&g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185, &g_185}};
            short l_761 = 0x4A13L;
            unsigned long long l_814 = 3UL;
            int **l_839[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_839[i][j] = &l_827;
            }
            for (g_95 = 15; (g_95 != (-4)); g_95--)
            {
                for (g_452 = 2; (g_452 >= 0); g_452 -= 1)
                {
                    for (l_717 = 0; (l_717 <= 2); l_717 += 1)
                    {
                        int i, j;
                        (**l_644) = p_49;
                        (*g_324) = p_49;
                    }
                }
                for (g_185 = 0; (g_185 <= 4); g_185 += 1)
                {
                    return (**l_644);
                }
            }
            for (g_350 = 12; (g_350 != 22); g_350 = safe_add_func_uint64_t_u_u(g_350, 8))
            {
                int l_735 = 0x53D96C0CL;
                int l_739 = 3L;
                int l_747 = 0x890A591FL;
                int l_748 = (-2L);
                int l_752 = 0x83468F8FL;
                int l_758 = 0x50981648L;
                unsigned char l_762[2][10][9] = {{{0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}}, {{0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}, {0UL, 0UL, 0UL, 0xB3L, 8UL, 1UL, 1UL, 0UL, 8UL}}};
                int i, j, k;
                if (p_49)
                    break;
                (*l_671) = l_732[2][1];
                if ((safe_lshift_func_int8_t_s_s(((0x92A4L >= g_2) & ((g_209 && g_350) | l_735)), (safe_lshift_func_int8_t_s_s(g_185, g_95)))))
                {
                    char l_742 = 0x96L;
                    int l_749 = (-1L);
                    int l_750 = 0xEA9117D9L;
                    int l_751 = 6L;
                    int l_756[10][9][2] = {{{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}, {{(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}, {(-6L), 0x9FAEC201L}}};
                    int i, j, k;
                    l_762[1][2][6]--;
                    (*l_644) = &l_751;
                    (*l_671) = (void*)0;
                }
                else
                {
                    int *l_770[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_770[i] = &l_753[1];
                    for (l_744 = 0; (l_744 >= (-14)); l_744--)
                    {
                        unsigned short l_767[8] = {0x8201L, 1UL, 0x8201L, 1UL, 0x8201L, 1UL, 0x8201L, 1UL};
                        int i;
                        if (l_747)
                            break;
                        l_767[1]++;
                        (*g_97) = (void*)0;
                    }
                    (*l_671) = l_770[0];
                }
            }
            if ((safe_sub_func_int64_t_s_s(l_773, (l_644 == &l_732[2][1]))))
            {
                int *l_779[4] = {(void*)0, &l_743, (void*)0, &l_743};
                unsigned long long l_811 = 0UL;
                int i;
                if ((safe_lshift_func_int8_t_s_s((g_452 == (safe_lshift_func_uint16_t_u_s((!(g_778 , (((p_49 >= (p_49 , 0UL)) , l_779[1]) == l_780))), 4))), 1)))
                {
                    unsigned short l_792 = 0x9CDCL;
                    int *l_797 = &l_738;
                    int ***l_812 = &l_671;
                    (*l_644) = (*l_671);
                    if ((((safe_add_func_int32_t_s_s(0x6798AF79L, p_49)) || (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((g_452 , ((safe_add_func_int8_t_s_s(g_185, g_350)) || ((l_789 != (safe_rshift_func_int16_t_s_u(l_792, (safe_rshift_func_uint16_t_u_s(((g_569 , p_49) , l_792), l_792))))) , g_512))) || 0L) || 0x0036L), (*l_780))), g_350))) & p_49))
                    {
                        (*l_780) &= l_792;
                        (*l_644) = ((safe_lshift_func_uint16_t_u_u(g_452, 3)) , l_797);
                    }
                    else
                    {
                        int ***l_813 = &l_671;
                        (*l_780) = (safe_add_func_uint64_t_u_u(4UL, (safe_sub_func_uint32_t_u_u(g_512, p_49))));
                    }
                }
                else
                {
                    unsigned long long l_815 = 0x3BAC371C8D54C8FALL;
                    --l_815;
                    (*l_644) = (*g_97);
                    for (l_789 = 0; (l_789 != 45); l_789++)
                    {
                        unsigned l_820 = 0x4C18C27FL;
                        (*g_97) = (l_820 , l_779[1]);
                        (*l_780) |= p_49;
                        (*l_780) = p_49;
                        return l_815;
                    }
                }
                for (l_789 = 0; (l_789 != 44); l_789 = safe_add_func_int16_t_s_s(l_789, 9))
                {
                    int *l_828[5][6] = {{&l_743, &l_745, (void*)0, (void*)0, &l_745, &l_743}, {&l_743, &l_745, (void*)0, (void*)0, &l_745, &l_743}, {&l_743, &l_745, (void*)0, (void*)0, &l_745, &l_743}, {&l_743, &l_745, (void*)0, (void*)0, &l_745, &l_743}, {&l_743, &l_745, (void*)0, (void*)0, &l_745, &l_743}};
                    int i, j;
                    for (l_741 = 0; (l_741 >= 3); l_741 = safe_add_func_uint16_t_u_u(l_741, 4))
                    {
                        (*l_671) = (*g_97);
                        (*l_644) = (void*)0;
                    }
                    for (g_759 = 0; (g_759 < (-30)); g_759--)
                    {
                        unsigned long long l_829 = 0xDA85D1CCF6CC4470LL;
                        int *l_832[4] = {(void*)0, &l_755, (void*)0, &l_755};
                        int i;
                        (*l_827) &= (g_512 , l_829);
                        (*l_644) = l_832[2];
                        (*l_827) = (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((*l_827) , p_49), p_49)) & p_49), 0)) > g_185), 4L));
                        (*l_644) = l_832[1];
                    }
                    return p_49;
                }
                (*l_671) = (*g_97);
                (*l_644) = (*l_671);
            }
            else
            {
                int ***l_840 = &l_839[0][1];
                (*l_840) = &l_780;
            }
            (*l_780) ^= p_49;
        }
    }
    else
    {
        (**l_644) = (*l_827);
    }
    (*l_827) = (0UL == 0x5062AA90L);
    (*l_644) = &g_209;
    return p_49;
}







static char func_53(char p_54, int p_55, int p_56, long long p_57)
{
    unsigned short l_448 = 2UL;
    int ***l_449 = &g_97;
    int l_456 = 1L;
    int l_505 = 8L;
    int l_513 = 0xC2FC2D0BL;
    int l_514 = 0x51CCAF7EL;
    int l_515 = 0L;
    int l_589 = 0x6D5F5459L;
    int l_595 = 0x70E4AD16L;
    g_452 |= (((((func_59(p_54) <= (((l_448 , 0UL) , (p_55 , ((((void*)0 == l_449) != (-1L)) | ((safe_lshift_func_int16_t_s_s((p_54 & 0xBB6672B9D6EF85B4LL), g_2)) >= p_56)))) && 0xE3L)) & g_444) , 4294967295UL) , 0xA449L) <= g_444);
    for (g_209 = 0; (g_209 <= 15); g_209 = safe_add_func_uint16_t_u_u(g_209, 7))
    {
        int *l_455[8][5][6] = {{{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}, {{&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}, {&g_209, (void*)0, (void*)0, &g_209, &g_185, (void*)0}}};
        int i, j, k;
        l_456 |= p_56;
    }
    for (g_209 = 0; (g_209 < (-29)); g_209--)
    {
        unsigned l_461 = 1UL;
        char l_480 = 2L;
        int l_496[5];
        int ***l_522 = &g_97;
        unsigned char l_539 = 0xB4L;
        int i;
        for (i = 0; i < 5; i++)
            l_496[i] = 0x11DD32BDL;
        for (p_54 = 0; (p_54 > 8); p_54++)
        {
            ++l_461;
        }
    }
    return g_569;
}







static unsigned short func_59(unsigned p_60)
{
    long long l_61[4][2];
    int *l_256 = &g_95;
    unsigned l_314 = 0xF6ADE833L;
    int l_373 = 0x3643DDD8L;
    int l_374 = 0x6C14887EL;
    int l_375 = 0L;
    int l_376 = 0x09D37F61L;
    int l_378 = 1L;
    int l_379 = 0x80D1481EL;
    long long l_404 = (-5L);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_61[i][j] = (-10L);
    }
    for (p_60 = 0; (p_60 <= 1); p_60 += 1)
    {
        unsigned l_64 = 4294967287UL;
        char l_255 = 0x9CL;
        int l_258[6][2] = {{(-1L), 0x68399CC1L}, {(-1L), 0x68399CC1L}, {(-1L), 0x68399CC1L}, {(-1L), 0x68399CC1L}, {(-1L), 0x68399CC1L}, {(-1L), 0x68399CC1L}};
        int **l_265[5];
        int **l_280 = &l_256;
        int i, j;
        for (i = 0; i < 5; i++)
            l_265[i] = &g_98;
    }
    (*g_98) &= ((void*)0 == &g_98);
    for (g_185 = 28; (g_185 == 1); g_185 = safe_sub_func_int16_t_s_s(g_185, 8))
    {
        int *l_305 = &g_209;
        short l_315 = 0L;
        int l_347 = 0x9DB58FC8L;
        int l_348 = 0x15469C46L;
        int l_354 = 0xA8B9AF02L;
        int l_357[7];
        unsigned long long l_436 = 0x91C5C265BF0EB845LL;
        int i;
        for (i = 0; i < 7; i++)
            l_357[i] = 1L;
    }
    for (g_209 = 2; (g_209 >= 0); g_209 -= 1)
    {
        int *l_443 = &g_185;
        int l_447[9][4] = {{0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L)}};
        int i, j;
        (*l_256) = 0x2AABB515L;
        l_447[1][0] ^= func_65((p_60 | (*l_256)), p_60, p_60);
        return p_60;
    }
    return g_185;
}







static unsigned short func_65(unsigned p_66, unsigned long long p_67, unsigned long long p_68)
{
    int *l_81 = (void*)0;
    unsigned char l_82 = 0UL;
    unsigned long long l_188 = 1UL;
    unsigned short l_194 = 1UL;
    int l_200 = (-1L);
    int l_232 = 1L;
    int l_234 = 1L;
    int l_235 = 0xC0E9B9C9L;
    long long l_249 = 0x070C9ECBAF703C2CLL;
    unsigned char l_254 = 255UL;
    if (((~(((func_75(l_81, p_68, (l_82 , (safe_sub_func_int64_t_s_s(p_68, 0xE61188795192C249LL))), p_68, ((p_66 < (((((((p_67 || (safe_add_func_int64_t_s_s((((l_81 != (void*)0) , 0x6BL) , g_2), 0x59DFF04C396C7BFBLL))) & 0xBF2DL) != p_68) >= g_2) , g_2) & 0xADL) <= p_67)) , 4294967295UL)) || p_66) & 0xDD49A4E4L) , p_67)) == p_68))
    {
        unsigned l_165[9][6][2] = {{{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}, {{1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}, {1UL, 0x6E6FC7E2L}}};
        int *l_171 = &g_95;
        unsigned l_195 = 0x0C8BBCD9L;
        int i, j, k;
        if ((((((((((void*)0 != &g_98) & p_67) , ((0x2BL > (safe_rshift_func_uint8_t_u_s((p_67 && p_67), 6))) , l_165[1][5][1])) >= 0xCDL) | 0xE7266255L) ^ p_68) > p_68) < 0x69F214E0A7E5BCBCLL))
        {
            int *l_166 = &g_95;
            (*l_166) = p_66;
        }
        else
        {
            unsigned l_172 = 0xFD8CB9ADL;
            (*l_171) = (safe_sub_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(0xFC4B7379L, (!(((void*)0 == l_171) <= 0xF4DCE59FL)))) & g_2) || g_95), l_172));
            for (l_172 = 0; (l_172 >= 42); l_172 = safe_add_func_int8_t_s_s(l_172, 4))
            {
                (*g_97) = l_81;
                (*g_97) = (*g_97);
                for (l_82 = 0; (l_82 <= 44); ++l_82)
                {
                    short l_179 = 0x5E2EL;
                    int *l_184 = &g_185;
                    (*l_184) |= (((safe_sub_func_int16_t_s_s(l_179, (g_95 >= ((void*)0 != &l_81)))) == (-1L)) ^ (~((safe_lshift_func_int8_t_s_s(g_2, l_179)) & (0x5CL > ((*l_171) , 0x44L)))));
                }
            }
        }
        for (p_66 = 0; (p_66 > 28); p_66 = safe_add_func_int32_t_s_s(p_66, 5))
        {
            short l_189 = (-1L);
            (*l_171) = (p_67 , l_188);
            (*l_171) ^= l_189;
        }
        (*l_171) &= (g_185 ^ ((g_185 , l_81) == (void*)0));
        l_200 &= (safe_lshift_func_int16_t_s_u((p_66 | ((safe_add_func_uint16_t_u_u(p_67, 1L)) < p_67)), g_95));
    }
    else
    {
        int l_201 = 1L;
        int **l_208[2][5] = {{&g_98, (void*)0, &g_98, (void*)0, &g_98}, {&g_98, (void*)0, &g_98, (void*)0, &g_98}};
        int i, j;
        l_201 ^= ((void*)0 == &l_81);
        l_200 = ((l_201 & (g_209 , g_95)) >= 0x430DL);
    }
    for (l_194 = 9; (l_194 != 40); l_194++)
    {
        unsigned l_244 = 0UL;
        int *l_246 = &g_95;
        for (l_188 = 0; (l_188 > 34); ++l_188)
        {
            unsigned l_236 = 0x8F66FD27L;
            for (l_82 = 8; (l_82 >= 4); l_82 = safe_sub_func_int16_t_s_s(l_82, 8))
            {
                int *l_216 = &l_200;
                int l_233 = 0x18D7ED8BL;
                int *l_241 = &g_209;
                (*l_216) |= (!0xACF7F055L);
                for (p_68 = (-8); (p_68 >= 55); p_68 = safe_add_func_int8_t_s_s(p_68, 6))
                {
                    int *l_219 = &g_95;
                    int *l_220 = &l_200;
                    int *l_221 = &g_209;
                    int *l_222 = &l_200;
                    int *l_223 = &l_200;
                    int *l_224 = &g_185;
                    int *l_225 = &g_95;
                    int *l_226 = &l_200;
                    int *l_227 = &g_209;
                    int *l_228 = &g_95;
                    int *l_229 = &g_209;
                    int *l_230 = &g_95;
                    int *l_231[10] = {(void*)0, (void*)0, &l_200, (void*)0, (void*)0, &l_200, (void*)0, (void*)0, &l_200, (void*)0};
                    int i;
                    l_236++;
                    for (l_235 = 0; (l_235 != 27); l_235 = safe_add_func_uint64_t_u_u(l_235, 9))
                    {
                        unsigned l_245 = 0xE790BFC1L;
                        (*l_228) = (g_95 , (-4L));
                    }
                }
                (*g_97) = (*g_97);
            }
        }
        l_246 = (*g_97);
    }
    l_234 = (safe_add_func_int8_t_s_s((((((l_249 != (((-9L) <= p_67) || (safe_mod_func_uint16_t_u_u((9L || ((!6L) >= ((safe_rshift_func_uint16_t_u_s((&l_232 != (*g_97)), 2)) < p_66))), g_185)))) , 0xDE560F2390746226LL) == l_254) , l_82) == p_66), 255UL));
    return p_67;
}







static char func_75(int * p_76, long long p_77, unsigned p_78, long long p_79, unsigned p_80)
{
    long long l_91 = (-1L);
    int *l_94 = &g_95;
    int **l_99 = &g_98;
    unsigned long long l_112[6];
    int l_151 = 0x734C7933L;
    char l_153 = 0x2CL;
    int l_154 = 0x54DB97AAL;
    int l_157[3][4][8] = {{{0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}}, {{0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}}, {{0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}, {0L, 0L, 0L, 0L, 0L, 0x7C8AD55DL, (-6L), (-1L)}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_112[i] = 0x42294EC24AAD4D87LL;
    if ((safe_lshift_func_uint8_t_u_s((((((safe_mod_func_int64_t_s_s((((g_2 & g_2) ^ p_78) < l_91), (safe_sub_func_int32_t_s_s(((void*)0 == l_94), g_95)))) , (!(g_95 | ((*l_94) <= 4294967288UL)))) | g_2) == g_2) >= g_95), g_95)))
    {
        long long l_96 = 1L;
        (*l_94) = l_96;
    }
    else
    {
        int l_104 = 1L;
        long long l_156 = 0x9674BCF40E15510CLL;
        int l_159 = 0xC4901C99L;
        if ((*l_94))
        {
            unsigned long long l_105 = 0x9A8832714BD48656LL;
            short l_110 = (-9L);
            int l_143 = (-1L);
            int l_152 = 0x483DF3A3L;
            int l_158 = 0xC25DAE8DL;
            l_99 = g_97;
            for (g_95 = 0; (g_95 >= (-13)); g_95 = safe_sub_func_int32_t_s_s(g_95, 2))
            {
                (*g_97) = (*g_97);
            }
            if (((((void*)0 == &g_98) || ((p_77 | (l_104 == ((+(l_105 | p_79)) , (p_78 , g_2)))) ^ g_95)) <= g_95))
            {
                int l_124 = 9L;
                for (p_80 = 0; (p_80 > 29); p_80++)
                {
                    for (l_104 = 18; (l_104 == (-9)); l_104--)
                    {
                        unsigned char l_111 = 0UL;
                        if (l_110)
                            break;
                        l_111 &= (*g_98);
                    }
                }
                (*g_97) = (*g_97);
                for (p_78 = 0; (p_78 <= 5); p_78 += 1)
                {
                    int l_115 = 0L;
                    int i;
                    (*l_94) = (safe_add_func_uint32_t_u_u(0UL, 0x7D53184BL));
                    l_115 ^= (l_112[p_78] <= p_77);
                    (*g_98) = (safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(g_2, 5)), 3)), (**g_97))) == (p_77 ^ 0xE3L)), (((l_104 || l_124) == ((-1L) > l_104)) >= (safe_sub_func_uint32_t_u_u((p_80 != l_104), 0x3E15E87FL)))));
                }
                g_127[0][0] = p_76;
            }
            else
            {
                int l_137[4][6][3] = {{{1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}}, {{1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}}, {{1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}}, {{1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}, {1L, 1L, 3L}}};
                int l_155[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_155[i] = 0x81EAFD68L;
                (**l_99) = (safe_mod_func_int32_t_s_s(((**l_99) | g_95), g_95));
                (**g_97) = (**l_99);
                if ((!p_77))
                {
                    for (l_110 = (-9); (l_110 > 24); ++l_110)
                    {
                        int *l_132[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_132[i] = &g_95;
                        if (p_80)
                            break;
                        (*l_99) = l_132[2];
                    }
                    for (p_79 = (-3); (p_79 < (-16)); p_79--)
                    {
                        return p_79;
                    }
                    p_76 = p_76;
                    for (p_80 = 0; (p_80 != 33); p_80 = safe_add_func_uint32_t_u_u(p_80, 1))
                    {
                        if ((*g_98))
                            break;
                    }
                }
                else
                {
                    unsigned long long l_160 = 18446744073709551615UL;
                    (**l_99) = l_137[3][2][1];
                    if ((g_2 , (((-7L) != (0xEFDE0CEE113DB586LL <= (((!((((p_77 , ((*g_97) == (*g_97))) || p_78) && (safe_add_func_int16_t_s_s(l_137[3][2][1], (((g_2 & g_95) | 0xFC22L) == 0UL)))) > (*l_94))) > 0L) && g_2))) | g_2)))
                    {
                        (*g_97) = (void*)0;
                        return g_95;
                    }
                    else
                    {
                        char l_142[7][5][1] = {{{3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}}, {{3L}, {3L}, {3L}, {3L}, {3L}}};
                        int *l_144 = &l_143;
                        int *l_145 = &l_143;
                        int *l_146 = &g_95;
                        int *l_147 = &g_95;
                        int *l_148 = &g_95;
                        int *l_149 = (void*)0;
                        int *l_150[4][4][2] = {{{&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}}, {{&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}}, {{&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}}, {{&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}, {&l_104, &l_104}}};
                        int i, j, k;
                        (*g_97) = (*g_97);
                        (*l_94) = l_142[6][0][0];
                        ++l_160;
                        (*g_97) = l_149;
                    }
                }
                (*l_94) = 0x55B41805L;
            }
        }
        else
        {
            return (*l_94);
        }
    }
    return (*l_94);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_993[i], "g_993[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1232, "g_1232", print_hash_value);
    transparent_crc(g_1323, "g_1323", print_hash_value);
    transparent_crc(g_1339, "g_1339", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1594[i][j][k], "g_1594[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1618, "g_1618", print_hash_value);
    transparent_crc(g_1639, "g_1639", print_hash_value);
    transparent_crc(g_1696, "g_1696", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    transparent_crc(g_1889, "g_1889", print_hash_value);
    transparent_crc(g_1929, "g_1929", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
