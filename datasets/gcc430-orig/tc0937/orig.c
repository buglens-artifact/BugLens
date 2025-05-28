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



static short g_2 = (-1L);
static int g_4[5] = {0x8F69F7FDL, 0x8F69F7FDL, 0x8F69F7FDL, 0x8F69F7FDL, 0x8F69F7FDL};
static unsigned char g_108 = 0xAFL;
static int g_110[7] = {0xEA524B17L, 0xEA524B17L, (-1L), 0xEA524B17L, 0xEA524B17L, (-1L), 0xEA524B17L};
static volatile unsigned g_156 = 0xB2A3AAEDL;
static char g_177 = 3L;
static int g_225 = 0x5DD2DD86L;
static unsigned short g_313 = 0x8266L;
static unsigned short g_390 = 0x6AA9L;
static int g_554 = 0x669B84B6L;
static unsigned char g_562 = 0xDBL;
static unsigned short g_896[2][8][3] = {{{0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}}, {{0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}, {0UL, 5UL, 0UL}}};
static int g_1048[4][1] = {{7L}, {7L}, {7L}, {7L}};
static int g_1488[10] = {(-1L), 0xB9CF925DL, (-1L), 0xB9CF925DL, (-1L), 0xB9CF925DL, (-1L), 0xB9CF925DL, (-1L), 0xB9CF925DL};
static int g_1527 = 0x5E67B7B0L;
static unsigned g_1651 = 4294967288UL;
static volatile unsigned char g_1745 = 247UL;
static volatile unsigned short g_1749 = 65526UL;
static unsigned g_1938 = 0x85774F6FL;



static unsigned short func_1(void);
static unsigned short func_9(short p_10, unsigned p_11, int p_12, unsigned p_13, const unsigned char p_14);
static char func_21(unsigned p_22);
static int func_24(unsigned p_25, short p_26, unsigned p_27, unsigned p_28, int p_29);
static int func_30(unsigned char p_31);
static unsigned short func_34(unsigned char p_35, unsigned p_36, const unsigned short p_37, unsigned short p_38, unsigned char p_39);
static unsigned short func_50(char p_51, char p_52, char p_53, unsigned p_54, char p_55);
static char func_59(short p_60);
static short func_70(int p_71, char p_72, unsigned short p_73, unsigned short p_74);
static unsigned char func_79(unsigned char p_80, short p_81);
static unsigned short func_1(void)
{
    unsigned l_3 = 9UL;
    short l_1286[6][10][4] = {{{0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}}, {{0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}}, {{0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}}, {{0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}}, {{0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}}, {{0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}, {0x98E1L, 0x09FDL, 4L, 0x6D6FL}}};
    unsigned l_1495 = 4294967295UL;
    int l_1551 = 0xC1C2A84EL;
    unsigned l_1587 = 0x38CE51DCL;
    unsigned l_1600 = 0x3A15B553L;
    unsigned l_1644[5][9][4] = {{{0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}}, {{0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}}, {{0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}}, {{0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}}, {{0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}, {0x49936DA1L, 0x7FD2B99DL, 4294967295UL, 1UL}}};
    int l_1704[6][1][10] = {{{1L, (-1L), (-2L), (-2L), (-1L), 1L, (-1L), (-2L), (-2L), (-1L)}}, {{1L, (-1L), (-2L), (-2L), (-1L), 1L, (-1L), (-2L), (-2L), (-1L)}}, {{1L, (-1L), (-2L), (-2L), (-1L), 1L, (-1L), (-2L), (-2L), (-1L)}}, {{1L, (-1L), (-2L), (-2L), (-1L), 1L, (-1L), (-2L), (-2L), (-1L)}}, {{1L, (-1L), (-2L), (-2L), (-1L), 1L, (-1L), (-2L), (-2L), (-1L)}}, {{1L, (-1L), (-2L), (-2L), (-1L), 1L, (-1L), (-2L), (-2L), (-1L)}}};
    int l_1716 = (-1L);
    unsigned char l_1936 = 0xFBL;
    unsigned char l_1986 = 4UL;
    int i, j, k;
    if (((-1L) >= (-8L)))
    {
        unsigned l_1289[8][4][1] = {{{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}, {{4294967292UL}, {4294967292UL}, {4294967292UL}, {4294967292UL}}};
        unsigned l_1512 = 0xC0174848L;
        int l_1533 = 0xD5A9675AL;
        char l_1879 = 0x10L;
        unsigned short l_1895 = 0x84D3L;
        const unsigned l_1962 = 0x7D91F50CL;
        int i, j, k;
        l_3 = g_2;
        for (l_3 = 0; (l_3 <= 4); l_3 += 1)
        {
            int l_1290 = (-6L);
            short l_1563 = 0L;
            char l_1564 = (-8L);
            unsigned char l_1586 = 252UL;
            char l_1611[7] = {8L, 8L, 1L, 8L, 8L, 1L, 8L};
            int i;
            if ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((g_4[l_3] || 0x82L), (!((func_9(((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(func_21(l_3), 7)) ^ (+g_4[3])), (~l_1286[1][5][2]))) ^ ((0UL && (!(safe_lshift_func_uint16_t_u_u(g_4[l_3], ((func_24(l_3, g_896[0][0][0], g_4[l_3], g_896[0][0][0], l_1286[3][2][3]) || 0UL) <= 0L))))) != g_4[l_3])), 0xEFFDL)) != l_1289[6][0][0]), l_1290, l_1290, g_4[0], g_896[1][7][0]) & g_896[1][3][2]) ^ l_1286[1][5][2])))) < l_1286[1][9][2]), 65535UL)))
            {
                int l_1496 = 0x34EA87E1L;
                short l_1497[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_1497[i] = 0x80AAL;
                l_1497[4] = (((safe_rshift_func_int8_t_s_u(((g_896[0][5][2] <= g_390) < (g_554 & g_4[l_3])), (0x77D8L < (((func_70(g_1048[3][0], (safe_rshift_func_int16_t_s_u(l_1286[1][5][2], 14)), (safe_add_func_uint8_t_u_u(0UL, (((func_79(g_562, g_225) != 3UL) < l_1495) && 0x70E8L))), l_1496) | 1L) <= l_1289[6][2][0]) <= g_2)))) && l_1496) || g_313);
                g_1488[6] = g_225;
                g_110[0] = (((-2L) != (((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_896[0][0][0], 3)), func_70((!((safe_lshift_func_uint8_t_u_s(1UL, 3)) ^ l_1286[1][5][2])), g_108, (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((func_24(g_1488[8], ((safe_mul_func_uint8_t_u_u((((1L | l_1495) < l_1286[1][5][2]) & l_1495), l_1512)) || g_110[6]), g_1048[3][0], l_1286[3][9][0], l_1290) < 0xA5L) && g_896[1][7][2]), l_1512)) <= l_1289[2][0][0]), 0UL)), l_1289[5][1][0]))), 7)) && 0x426B6F56L) ^ g_1488[6])) != g_1488[6]);
                g_1048[3][0] = ((safe_sub_func_uint32_t_u_u(l_1496, ((g_4[2] || g_1488[6]) < (safe_add_func_uint16_t_u_u(((g_110[6] != ((((1UL || 0xE6D3B17AL) | ((safe_sub_func_uint16_t_u_u(g_156, (safe_rshift_func_uint16_t_u_s(g_313, 1)))) && (-5L))) <= g_1488[9]) >= g_896[0][0][0])) | g_1048[3][0]), (-1L)))))) ^ g_896[0][0][0]);
            }
            else
            {
                short l_1532 = 0x165BL;
                int l_1627 = 2L;
                for (l_1495 = 0; (l_1495 <= 4); l_1495 += 1)
                {
                    unsigned l_1521 = 0xFDD0BA4CL;
                    unsigned char l_1552 = 0x8AL;
                    if (((l_1521 ^ l_3) != (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_u((func_30(((l_1495 > ((((safe_mul_func_int8_t_s_s(((((func_70(g_110[6], g_1527, (((+(safe_sub_func_int16_t_s_s(g_1048[2][0], g_2))) < (g_4[l_3] > (g_2 || g_313))) & g_896[1][2][1]), g_562) || g_4[2]) ^ 0L) <= 65528UL) <= g_4[l_3]), g_1527)) || (-1L)) || l_1521) & 255UL)) > g_896[0][0][0])) && g_1048[0][0]), 7))))))
                    {
                        g_1048[3][0] = (safe_sub_func_uint32_t_u_u(g_225, l_1532));
                    }
                    else
                    {
                        l_1533 = (-4L);
                        return g_554;
                    }
                    if (g_313)
                    {
                        short l_1536[2][8][8] = {{{0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}}, {{0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}, {0xF04AL, 0xC5D0L, (-1L), (-8L), 0xB8C5L, 1L, (-1L), 0L}}};
                        int i, j, k;
                        l_1290 = (safe_mul_func_int16_t_s_s(0x51F4L, func_70(g_108, l_1536[0][4][2], g_562, g_390)));
                        l_1290 = ((l_1289[3][1][0] || l_1495) >= func_50(func_79(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(l_1512, 6)) == g_390) & func_24((l_1495 > (safe_lshift_func_uint16_t_u_s((g_2 ^ 0UL), (safe_add_func_uint16_t_u_u(3UL, (g_225 | g_4[l_3])))))), l_1533, l_1551, g_108, l_1289[7][3][0])) >= 4L), l_1552)), 0xF328L)), g_2)), l_1290)) == 0x38L), g_1527), l_1495, l_1552, l_1290, g_1488[0]));
                        g_1048[3][0] = (safe_add_func_uint16_t_u_u(func_59((4294967295UL > (g_1488[6] ^ l_1536[0][4][2]))), (((safe_lshift_func_uint16_t_u_s((!l_1286[1][5][2]), 12)) != ((safe_rshift_func_uint16_t_u_u(func_59(g_177), g_2)) & ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(l_1532, l_1290)), l_1563)) && l_1533))) >= l_1564)));
                        g_110[6] = 1L;
                    }
                    else
                    {
                        const short l_1566 = 0xE531L;
                        g_1488[6] = (safe_unary_minus_func_uint16_t_u(l_1566));
                    }
                }
                if ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x5193L, l_1286[0][9][0])), ((safe_add_func_uint32_t_u_u(((((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(g_1488[4])), (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_1488[6], g_110[6])), l_1564)))) < g_390), (-6L))) == g_1488[9]) > 0x0648L) ^ 0x22L), 1L)) < l_1586))) != l_1495), 0L)), 3L)))
                {
                    char l_1588[6] = {1L, 0x25L, 1L, 0x25L, 1L, 0x25L};
                    unsigned short l_1603 = 0x38D1L;
                    int i;
                    if (l_1587)
                    {
                        l_1588[1] = (!(7L >= ((g_1488[4] & 3UL) != g_1488[6])));
                    }
                    else
                    {
                        char l_1591 = 0xC5L;
                        unsigned l_1612 = 0x97B4BA3DL;
                        g_1048[3][0] = 0x06038CF2L;
                        g_1488[8] = (g_1048[0][0] < (safe_mod_func_int8_t_s_s((func_24(l_1588[1], l_1591, l_1532, g_2, (safe_add_func_uint8_t_u_u((func_70(l_1591, func_24((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_313, g_177)) > (safe_rshift_func_int8_t_s_u(l_1587, l_1591))), g_4[4])), l_1588[1], l_1600, g_156, g_313), l_1495, g_313) | l_1588[3]), 0x32L))) <= 0xB4FC8F4BL), g_4[1])));
                        g_1488[3] = ((((safe_lshift_func_uint16_t_u_s(0x63C2L, 14)) > g_4[3]) && ((l_1603 & (func_30((safe_rshift_func_int16_t_s_u(3L, 3))) == (((0xED8AL | ((safe_unary_minus_func_uint32_t_u(0xC9641A64L)) ^ ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_4[0], 11)), 4)) >= l_1588[1]))) > g_1488[3]) && 0x7639L))) > l_1611[5])) == l_1612);
                    }
                    g_1488[4] = l_1564;
                }
                else
                {
                    unsigned short l_1613 = 0x8829L;
                    int l_1614[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1614[i] = 0xD08A7B21L;
                    for (g_390 = 0; (g_390 <= 4); g_390 += 1)
                    {
                        unsigned short l_1618 = 65535UL;
                        l_1614[0] = l_1613;
                        l_1290 = ((!(safe_unary_minus_func_uint16_t_u(func_70((g_156 | (safe_mul_func_uint16_t_u_u(l_1618, l_1614[0]))), (safe_lshift_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((func_59(g_1048[3][0]) | g_177), g_1527)), 0)), g_554)) != 1UL) <= l_1618) > 4294967295UL), l_1532)), l_1614[0], l_1587)))) | 0x8331L);
                        if (l_1532)
                            continue;
                    }
                    l_1627 = l_1289[6][0][0];
                }
                l_1627 = (func_70((safe_sub_func_int8_t_s_s(((+g_2) != (g_1527 & ((65529UL && (7L || g_177)) && g_225))), (safe_rshift_func_uint16_t_u_u(0xEF8EL, 10)))), l_3, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(g_4[l_3], l_1587)), 15)), l_1586) & 0x7AL);
            }
        }
        if ((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((func_79((safe_add_func_uint8_t_u_u((g_108 == (safe_mul_func_uint16_t_u_u(l_1644[3][5][2], 0x6B1CL))), g_562)), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((6L | (g_1048[3][0] > (+((l_1600 >= 0xBD8DL) >= (((safe_rshift_func_int8_t_s_s(l_1289[6][0][0], g_1048[3][0])) > g_1488[6]) == l_1495))))), 6)), g_1651))) | g_1488[6]), g_1651)) >= g_1048[3][0]), 1)))
        {
            int l_1652 = 1L;
            unsigned char l_1661 = 255UL;
            int l_1676 = 0x43275EC7L;
            unsigned short l_1744 = 65529UL;
            char l_1760[10][6][4] = {{{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}, {{8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}, {8L, 1L, 0x52L, 0x4EL}}};
            short l_1779 = 0L;
            const unsigned l_1780 = 1UL;
            char l_1783 = 0x63L;
            int l_1826 = (-9L);
            int l_1864 = 0x97426DA6L;
            unsigned short l_1886 = 65535UL;
            unsigned l_1937[2][4][10] = {{{0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}, {0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}, {0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}, {0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}}, {{0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}, {0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}, {0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}, {0UL, 4294967286UL, 0x4D05129AL, 1UL, 0xE51FEF49L, 8UL, 0xE51FEF49L, 1UL, 0x4D05129AL, 4294967286UL}}};
            int i, j, k;
            if ((l_1652 || (1L >= ((safe_mul_func_uint8_t_u_u(g_1048[3][0], ((!(safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_1048[3][0], func_79(l_1661, (safe_rshift_func_int8_t_s_s(func_59(func_70((l_1512 != l_1600), (g_177 || g_156), l_1533, g_110[3])), g_2))))), g_1527))) || l_1661))) < l_1652))))
            {
                char l_1669[10] = {(-1L), 0x15L, (-1L), 0x15L, (-1L), 0x15L, (-1L), 0x15L, (-1L), 0x15L};
                int l_1677[8] = {8L, 1L, 8L, 1L, 8L, 1L, 8L, 1L};
                int i;
                for (l_1661 = 0; (l_1661 < 38); l_1661++)
                {
                    const char l_1668 = 0L;
                    int l_1689 = (-1L);
                    if (((((safe_mod_func_uint16_t_u_u((((l_1512 != ((0x0FL ^ ((((func_50((l_1668 > l_1669[3]), g_1488[6], l_1669[3], g_896[1][3][1], (safe_sub_func_uint16_t_u_u(l_1600, (safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((-1L), 0UL)) >= g_110[4]), 0))))) == 0xC3L) && g_562) && 0x9BL) && l_1676)) & l_1668)) > l_1661) && l_1644[1][2][3]), 0xC997L)) < 1UL) > l_1669[7]) > l_1668))
                    {
                        if (g_1527)
                            break;
                        l_1677[2] = g_896[0][5][2];
                        g_110[6] = (l_1676 && l_1668);
                        g_1488[4] = l_1289[6][0][0];
                    }
                    else
                    {
                        char l_1688 = (-4L);
                        l_1689 = ((g_562 ^ (+g_225)) == (l_1669[3] <= (l_1661 ^ (safe_sub_func_int16_t_s_s((func_79(func_79(g_4[1], ((g_1048[3][0] == (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_1677[6], (l_1669[4] < (safe_mul_func_uint16_t_u_u(l_1533, 0x9673L))))), (-4L))), g_108))) <= l_1652)), l_1688) != 5L), 0xE9EDL)))));
                        g_1488[5] = (safe_lshift_func_uint8_t_u_u(l_1652, ((-1L) == ((+(safe_mul_func_uint16_t_u_u(func_79((safe_sub_func_int32_t_s_s((((((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_1669[8], 6)), func_50(g_1048[3][0], (safe_rshift_func_uint8_t_u_u((0xA6L != ((0L < ((l_1704[3][0][0] || 0x5BL) | g_1488[4])) >= l_1689)), 4)), l_1704[3][0][2], g_108, g_562))) ^ g_896[0][7][2]), g_1651)) > g_1488[8]) & l_1676) || 0UL) != g_1488[2]), 9UL)), g_2), l_1677[0]))) | l_1668))));
                    }
                    if (l_1286[3][5][2])
                    {
                        g_1488[3] = ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((g_390 >= l_1644[3][5][2]), ((g_1527 != l_1677[2]) == func_59(l_1652)))), func_79(g_1488[6], l_1600))) < l_1644[3][5][2]);
                        l_1677[2] = 1L;
                    }
                    else
                    {
                        unsigned l_1713 = 3UL;
                        l_1716 = (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((g_2 <= l_1652) | (l_1676 == (func_30(l_1713) ^ func_24(l_1669[3], (g_1527 >= (safe_mod_func_uint16_t_u_u((l_1716 ^ g_896[0][0][0]), g_1527))), l_1689, l_1286[1][5][2], g_1527)))), g_1651)), g_1527));
                        if (l_1661)
                            break;
                        l_1533 = (0x78735E9FL ^ l_3);
                        g_1527 = ((g_1048[2][0] | (safe_mod_func_int16_t_s_s(func_50(l_1289[6][0][0], g_1527, l_1676, g_177, l_1713), (0x1CDDL ^ l_1713)))) < l_1289[1][2][0]);
                    }
                }
            }
            else
            {
                unsigned l_1734 = 0xC57B8464L;
                int l_1765 = 3L;
                const int l_1839 = 0xE9CBD637L;
                for (l_1551 = 8; (l_1551 < 25); ++l_1551)
                {
                    char l_1729 = 0x01L;
                    char l_1735 = (-5L);
                    for (g_313 = (-12); (g_313 > 42); g_313 = safe_add_func_int32_t_s_s(g_313, 8))
                    {
                        int l_1746 = 0x26C44F6AL;
                        g_110[6] = ((safe_mul_func_uint16_t_u_u(func_79((safe_mod_func_int8_t_s_s(((func_24((safe_mul_func_uint8_t_u_u(g_225, (l_1644[3][5][2] != (l_1661 <= (l_1729 != (safe_mod_func_int32_t_s_s((func_59(((safe_add_func_int8_t_s_s(func_24(l_1734, l_1735, g_390, ((((l_1704[3][0][0] > ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_59(l_1729), l_1744)), l_1587)), 3)), 2)) == 0x683B66D4L)) <= g_1745) > l_1286[1][5][2]) || g_1527), l_1735), l_1746)) < g_896[0][1][1])) & 0x7EL), 0xAC86DB62L))))))), g_1527, g_110[3], g_896[0][0][0], l_1644[3][5][2]) <= 1UL) && g_110[6]), g_562)), l_1744), 0UL)) < l_1746);
                        return l_1735;
                    }
                    for (g_225 = 13; (g_225 > 28); g_225 = safe_add_func_uint8_t_u_u(g_225, 8))
                    {
                        g_1749 = g_1745;
                        g_1048[1][0] = (safe_add_func_uint8_t_u_u(l_1744, (func_59(g_177) | g_1527)));
                        g_1048[2][0] = g_1488[6];
                    }
                    g_1488[4] = (!((safe_lshift_func_uint8_t_u_u(((1L && 8L) & (safe_sub_func_int32_t_s_s(((l_1744 >= l_1512) > ((safe_sub_func_int16_t_s_s((l_1729 <= ((safe_rshift_func_int16_t_s_s(g_1048[3][0], 12)) == l_1760[8][1][2])), g_110[1])) || l_1289[6][2][0])), g_390))), 1)) < l_1734));
                }
                l_1765 = ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((func_50(g_554, g_110[2], l_1760[8][1][2], func_24(l_1512, g_313, (l_1734 >= 2UL), l_1644[1][1][2], (l_1551 != 0xBA58ACF9L)), l_1676) != g_1488[2]), l_1744)), g_1048[3][0])) >= g_896[1][6][1]);
                if ((l_1676 >= (((safe_sub_func_int8_t_s_s(l_1765, ((safe_rshift_func_uint8_t_u_u((0xC3B4L > 65528UL), (safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s((func_34(g_4[2], ((safe_lshift_func_int8_t_s_s((-9L), (safe_mod_func_int32_t_s_s(g_108, ((safe_rshift_func_int16_t_s_u(l_1587, g_1651)) & l_1652))))) | g_110[1]), l_1652, l_1676, l_1734) ^ l_1779), 0x51L)))))) != 0xECL))) != l_1551) >= l_1533)))
                {
                    unsigned l_1793 = 8UL;
                    if ((func_59(l_1765) != (!func_59((l_1734 > (l_1780 <= ((l_1286[1][5][2] & ((((l_1780 | (((((safe_mod_func_uint8_t_u_u(l_1783, g_225)) > g_390) > 0x242DL) == g_1651) <= 0UL)) < g_562) ^ 0x948FL) ^ g_1527)) <= l_1533)))))))
                    {
                        char l_1792 = 1L;
                        l_1765 = func_34(func_79(l_1760[8][1][2], g_562), (g_225 == 0x90L), (((((safe_mul_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(((~func_59(g_1651)) | l_1792), l_1793)) || l_1792), 9)) > g_896[0][0][0]) ^ 8L), l_1793)) && 0L) && 1L), 0x6FL)) | g_562) != l_1704[3][0][0]) | 0x8A108C79L) ^ 0UL), l_1587, g_896[1][1][2]);
                        g_1048[0][0] = g_177;
                        return g_1488[6];
                    }
                    else
                    {
                        l_1765 = func_79(g_896[0][0][0], ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_1533, ((safe_rshift_func_uint8_t_u_s((((safe_add_func_int8_t_s_s((g_554 == (l_1289[5][2][0] | (((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s(0x98C5927CL, (((((safe_mul_func_uint8_t_u_u(g_1048[0][0], (l_1512 ^ (safe_sub_func_int32_t_s_s((!g_896[0][7][2]), (g_313 >= g_562)))))) != l_1779) & 0xD66BL) >= g_4[4]) || l_1793))) | g_1488[6]), l_1765)), l_1765)) || g_177) | g_4[1]))), g_554)) < g_1488[6]) ^ l_1286[4][4][0]), 5)) || 246UL))), 1)) | g_1488[2]));
                        l_1826 = (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((7L >= l_1551), (safe_lshift_func_int16_t_s_s(g_225, 13)))), (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((g_110[3] && (safe_lshift_func_uint16_t_u_u(((4294967295UL >= g_896[0][0][0]) <= g_156), 2))) < g_4[1]), g_1651)), g_313)), g_1488[4])) & g_4[2]) > l_1793)));
                        g_1488[6] = func_70(g_390, ((func_79(g_554, ((safe_lshift_func_uint16_t_u_s(0x4E64L, (g_2 | l_1286[1][5][2]))) && (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u(g_110[6], 1)))))) <= 0xA1L) != (7L == l_1704[2][0][0])), l_1289[6][0][0], l_1289[5][1][0]);
                    }
                    for (l_1661 = 0; (l_1661 <= 0); l_1661 += 1)
                    {
                        unsigned char l_1832 = 1UL;
                        g_110[6] = (func_21(l_1765) ^ 1UL);
                        l_1832 = 5L;
                        g_1527 = (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((5UL < l_1676), (safe_add_func_uint16_t_u_u((l_1744 | (g_2 == ((g_1651 & g_1488[8]) != (255UL ^ func_50(func_34(l_1289[6][0][0], g_156, l_1839, l_1832, l_1832), g_2, g_1527, l_1783, g_4[4]))))), g_1527)))), 0xDB27L));
                        l_1826 = func_79(func_59(((func_34(g_225, ((g_110[6] && (g_554 & ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_s(g_896[1][4][1], 3)) | func_59(g_110[1])) < g_1488[6]) >= ((((safe_lshift_func_int8_t_s_u((g_1048[3][0] | 0xCA33L), l_1704[3][0][0])) & g_156) > (-2L)) <= g_1527)), 0)), 0x6A538006L)) <= g_1048[3][0]))) ^ l_1793), l_1793, g_562, g_225) & 1UL) && l_1704[3][0][0])), l_1832);
                    }
                }
                else
                {
                    unsigned l_1850 = 2UL;
                    for (l_1765 = (-26); (l_1765 == (-9)); ++l_1765)
                    {
                        l_1533 = l_1850;
                        g_1488[6] = (g_1745 ^ g_2);
                    }
                }
                if ((g_1048[3][0] > ((+(safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(g_390, g_177)), 2))) || func_50((l_1512 ^ g_562), l_1289[4][3][0], l_1716, g_177, ((safe_lshift_func_uint8_t_u_s(g_1048[3][0], 4)) < 0x708B8BB8L)))))
                {
                    unsigned short l_1861[1];
                    unsigned l_1889 = 0x8D33C337L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1861[i] = 65535UL;
                    if ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((g_390 ^ l_1861[0]), 1)) == 0xD350C634L), ((0xF1L < g_2) != 4UL))))
                    {
                        unsigned short l_1880 = 0xACFBL;
                        g_554 = ((+(((safe_mod_func_uint32_t_u_u(l_1864, (((l_3 && 0x8952F37DL) != (((safe_lshift_func_int16_t_s_u(0x1121L, (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((func_24((safe_mul_func_uint16_t_u_u(((l_1861[0] | (func_59(((l_1861[0] && (safe_add_func_uint16_t_u_u(g_1527, (safe_lshift_func_uint8_t_u_u((((g_156 != (safe_mod_func_int8_t_s_s(0xEDL, 0x4DL))) <= l_1861[0]) && g_1048[3][0]), l_1861[0]))))) || l_1879)) || l_1880)) >= g_1651), g_1048[3][0])), g_562, l_1734, g_1048[3][0], l_1839) ^ g_1527), 5)), g_110[6])))) | 4294967295UL) & 0x4DL)) && 0xD5L))) <= l_1861[0]) > l_1286[1][5][2])) > g_1048[1][0]);
                    }
                    else
                    {
                        int l_1894[6][7][4] = {{{(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}}, {{(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}}, {{(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}}, {{(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}}, {{(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}}, {{(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}, {(-1L), 0xB4710FEEL, 0x55592EF0L, (-1L)}}};
                        int i, j, k;
                        g_1488[4] = (g_313 ^ (0L < (safe_sub_func_uint8_t_u_u(func_24(g_4[2], ((safe_rshift_func_int16_t_s_u(l_1744, (safe_unary_minus_func_int8_t_s((l_1886 | (safe_add_func_int32_t_s_s((l_1889 > (g_1488[5] == (((safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s(g_108, (g_110[6] && 0x41L))) && g_110[0]) | g_4[0]), l_1861[0])) ^ 2L) && g_1527))), 0xA506E495L))))))) == 0x38EC92BDL), g_313, l_1894[4][3][1], l_3), l_1879))));
                        l_1895 = l_1894[1][3][1];
                        g_110[0] = 0xBAEF90ACL;
                        g_110[6] = 9L;
                    }
                    for (g_562 = (-5); (g_562 == 7); ++g_562)
                    {
                        if (g_156)
                            break;
                        l_1826 = g_1527;
                        l_1533 = l_1495;
                        g_110[6] = g_108;
                    }
                }
                else
                {
                    int l_1906 = 8L;
                    l_1765 = 0x939EE48AL;
                    for (g_1651 = 0; (g_1651 != 10); g_1651 = safe_add_func_uint8_t_u_u(g_1651, 2))
                    {
                        int l_1909 = 0xC8EA3D3CL;
                        g_554 = (~(0xE40EL >= (l_1760[8][1][2] || (safe_add_func_uint16_t_u_u((((0x51333A5CL || ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(func_59(l_1906), (0x43CEL >= 65535UL))), l_1289[7][1][0])) >= (g_177 & l_1839))) == 2L) & l_1734), 0xFD83L)))));
                        l_1765 = (safe_add_func_int8_t_s_s((l_1909 >= 0x875AB8BDL), ((safe_lshift_func_int8_t_s_s((l_1734 || g_4[1]), (safe_mul_func_uint8_t_u_u(g_110[5], (safe_mul_func_int16_t_s_s((g_1488[6] <= g_108), (g_110[6] != (l_1906 & 0x85L)))))))) ^ l_1512)));
                    }
                }
            }
            l_1704[0][0][8] = l_1289[6][0][0];
            if (((func_34((safe_mod_func_uint8_t_u_u((func_34(g_896[0][3][0], ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((0x24L & (func_30(((safe_lshift_func_uint8_t_u_s(l_1879, (safe_mod_func_uint8_t_u_u((g_1048[0][0] != (safe_add_func_uint32_t_u_u((((((safe_lshift_func_uint8_t_u_u((g_1749 == (g_313 != ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(0x4AL, g_225)), g_4[3])) > g_108))), g_177)) >= g_108) >= g_1488[5]) >= g_1048[0][0]) && (-1L)), 0xBCB3B28BL))), 1L)))) | (-2L))) <= l_1864)) | 0x1DL), g_4[3])) && g_562), 0xE2L)) != g_896[0][0][0]), l_1744, g_896[0][6][1], l_1936) && l_1937[1][2][5]), g_1938)), l_1879, g_2, g_1488[6], g_1488[1]) <= g_1488[2]) != 0x49L))
            {
                short l_1947 = 0x1511L;
                const unsigned char l_1948 = 248UL;
                int l_1949 = 0xF64BB788L;
                l_1949 = ((0x75L == func_70(l_1886, l_1512, (0x8BE33E19L < func_9((safe_mod_func_int16_t_s_s(g_390, (safe_add_func_uint8_t_u_u(l_1760[2][1][0], (safe_mul_func_uint8_t_u_u(g_4[1], (g_1048[1][0] == (g_108 < g_110[6])))))))), l_1947, l_1947, l_1289[6][0][0], l_1948)), g_4[2])) & 0UL);
            }
            else
            {
                const int l_1950[1][1] = {{(-6L)}};
                int l_1957 = 0xF65DFFAFL;
                int i, j;
                l_1533 = l_1950[0][0];
                g_1488[6] = (((((safe_mul_func_int8_t_s_s(((!(safe_add_func_uint8_t_u_u((l_1950[0][0] | (g_390 == (func_79(l_1957, g_1527) ^ l_1760[8][1][2]))), (((g_1938 < (safe_mod_func_int16_t_s_s(func_59((g_1048[2][0] != ((safe_rshift_func_int16_t_s_u((g_1488[9] >= l_1937[1][2][5]), 14)) && g_1048[0][0]))), 1UL))) & g_1488[8]) || l_1780)))) || 7UL), l_1895)) != g_896[0][0][0]) != g_313) != l_1962) && g_1651);
            }
        }
        else
        {
            unsigned l_1963 = 0x2E5E2543L;
            l_1963 = 3L;
        }
    }
    else
    {
        unsigned l_1968 = 1UL;
        for (g_390 = (-4); (g_390 > 11); g_390 = safe_add_func_int8_t_s_s(g_390, 9))
        {
            char l_1966 = 2L;
            volatile unsigned short l_1967[6] = {0UL, 0x946DL, 0UL, 0x946DL, 0UL, 0x946DL};
            int i;
            g_110[6] = l_1966;
            l_1967[0] = g_1749;
            g_1527 = l_1968;
            if (l_1968)
            {
                return l_1644[3][5][2];
            }
            else
            {
                return g_1048[2][0];
            }
        }
        g_110[6] = g_313;
    }
    for (l_3 = 0; (l_3 >= 44); l_3 = safe_add_func_int8_t_s_s(l_3, 1))
    {
        if (g_554)
            break;
    }
    g_1048[3][0] = (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_390, (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(g_156)), 0xA1L)))), (safe_mod_func_int32_t_s_s((g_1488[6] || l_1286[1][5][2]), (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_1986, 65528UL)), ((safe_mod_func_int8_t_s_s(g_554, 0xDAL)) | g_1527))), g_562))))));
    return l_1286[5][5][0];
}







static unsigned short func_9(short p_10, unsigned p_11, int p_12, unsigned p_13, const unsigned char p_14)
{
    unsigned l_1293 = 4294967294UL;
    char l_1294[2];
    int l_1367 = (-5L);
    int l_1465 = (-10L);
    int i;
    for (i = 0; i < 2; i++)
        l_1294[i] = 0x2BL;
    p_12 = ((safe_add_func_uint32_t_u_u(g_1048[3][0], ((((((l_1293 < g_313) && l_1294[0]) || (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_2, (0x4EL ^ l_1294[0]))), (l_1294[1] | l_1294[0]))), 6))) == 0x9FB4L) & p_10) >= g_177))) <= 251UL);
    if ((((((0x15L >= (((l_1293 >= (0xE9L > p_10)) != (g_156 & ((p_11 <= g_896[1][3][2]) >= (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(g_2, 255UL)), 5))))) != g_1048[2][0])) ^ l_1294[0]) >= p_12) != g_554) == l_1294[0]))
    {
        unsigned l_1307[7] = {4294967288UL, 0x65BDFA50L, 4294967288UL, 0x65BDFA50L, 4294967288UL, 0x65BDFA50L, 4294967288UL};
        int l_1312 = 1L;
        unsigned l_1377 = 0x9FCCE08FL;
        unsigned l_1378 = 4294967289UL;
        unsigned char l_1448 = 1UL;
        int l_1449 = 1L;
        int i;
        if (((((func_70((~(l_1307[3] >= l_1293)), g_562, ((safe_lshift_func_uint8_t_u_s((g_225 && l_1307[3]), (safe_sub_func_uint32_t_u_u((func_24(l_1307[3], g_1048[3][0], l_1307[3], l_1312, p_12) | (-8L)), g_110[3])))) | 0x66L), l_1294[0]) > g_1048[1][0]) > l_1307[3]) > l_1294[0]) | 0x2ACA793CL))
        {
            p_12 = 0x41DD078EL;
            return l_1293;
        }
        else
        {
            int l_1347 = 0L;
            if (((safe_sub_func_uint32_t_u_u(g_313, p_10)) ^ g_2))
            {
                g_554 = 0L;
            }
            else
            {
                unsigned l_1338 = 1UL;
                int l_1340 = 0xE7ED1758L;
                unsigned char l_1360 = 0xF7L;
                g_1048[3][0] = p_11;
                for (p_12 = 13; (p_12 == 19); p_12 = safe_add_func_uint8_t_u_u(p_12, 4))
                {
                    char l_1339 = 0x97L;
                    int l_1348[8][5] = {{0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}, {0L, 0xD6DD3DEEL, 8L, 0xD6DD3DEEL, 0L}};
                    int i, j;
                    for (g_554 = 12; (g_554 != 18); ++g_554)
                    {
                        unsigned l_1319 = 0x51EA1EADL;
                        l_1319 = g_554;
                        l_1340 = (safe_rshift_func_int8_t_s_u((l_1312 == (safe_sub_func_int8_t_s_s(p_10, (g_562 <= (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_4[1], g_110[6])), ((safe_mul_func_uint16_t_u_u(func_59(g_896[0][0][0]), 65535UL)) & (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_1338, 14)), 7))))) & g_313), l_1339)) || p_12) || l_1307[1]), 2)))))), l_1339));
                        l_1340 = (((-5L) | (g_1048[2][0] == l_1294[1])) <= g_225);
                        l_1348[4][2] = (safe_add_func_uint32_t_u_u((((l_1319 >= p_14) == ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((g_562 < g_2) == p_14), 1UL)), 14)) >= l_1347)) < p_13), l_1307[2]));
                    }
                    for (g_390 = 0; (g_390 >= 36); g_390 = safe_add_func_uint32_t_u_u(g_390, 1))
                    {
                        g_1048[2][0] = ((safe_mul_func_int8_t_s_s(p_10, 247UL)) || ((safe_mul_func_uint8_t_u_u(0UL, ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(g_390)), (safe_rshift_func_uint16_t_u_u(func_70(l_1360, (~(1L <= (safe_add_func_uint8_t_u_u(p_10, g_390)))), g_313, l_1294[0]), p_13)))) <= g_390))) < (-8L)));
                        if (p_11)
                            break;
                        l_1312 = func_79(p_10, g_554);
                    }
                    if (l_1294[0])
                        continue;
                }
                for (l_1312 = 24; (l_1312 >= 24); l_1312++)
                {
                    char l_1376 = 0L;
                    for (p_13 = 0; (p_13 == 52); p_13++)
                    {
                        g_1048[0][0] = l_1367;
                    }
                    p_12 = (safe_lshift_func_int8_t_s_s(func_21((p_12 || func_79(l_1347, (safe_mod_func_uint8_t_u_u(func_34(g_110[6], (safe_add_func_uint8_t_u_u((((((l_1347 > (((0x0AL ^ (((p_13 >= g_1048[0][0]) >= func_24(g_110[6], (safe_add_func_int16_t_s_s(((!(func_24(l_1347, p_12, l_1312, p_12, l_1360) ^ l_1376)) > 0xC69AL), l_1312)), p_12, l_1377, p_12)) && 65530UL)) <= l_1378) > 4294967295UL)) >= g_390) || g_554) > g_110[5]) ^ p_14), 7L)), l_1347, p_12, p_14), p_13))))), g_896[0][5][2]));
                    return l_1338;
                }
                if (((0L == g_554) && (0x1AE6L < l_1378)))
                {
                    unsigned short l_1387 = 1UL;
                    p_12 = ((-5L) < ((0x1BL ^ (safe_add_func_uint8_t_u_u(p_11, 255UL))) <= ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((-5L), g_177)), (safe_lshift_func_int16_t_s_s(l_1307[2], (l_1387 && l_1387))))) == p_11)));
                }
                else
                {
                    char l_1419 = 0x09L;
                    p_12 = 0L;
                    g_1048[3][0] = func_79(g_108, ((l_1377 > p_12) || (!(safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint32_t_u_u(p_14, l_1347)) >= 0x58L) && (((safe_add_func_uint8_t_u_u(g_313, l_1347)) >= (func_59(func_59(((safe_mod_func_uint8_t_u_u(p_10, g_4[0])) >= l_1293))) < g_313)) != l_1294[0])), 4)))));
                    for (g_108 = (-26); (g_108 >= 28); g_108 = safe_add_func_uint8_t_u_u(g_108, 6))
                    {
                        int l_1400 = (-7L);
                        l_1400 = ((l_1347 && l_1347) > (0xADL < l_1312));
                        l_1419 = ((safe_rshift_func_uint8_t_u_u(g_896[1][2][1], 5)) == (safe_lshift_func_int8_t_s_u((g_1048[3][0] | (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_110[6], 5)), 8))), (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0xF061L, func_59((g_313 | 5UL)))), (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((g_177 != (((g_156 >= 0xEFACL) < (-5L)) != l_1347)), g_390)) ^ g_562), l_1312)))), 0)))));
                        if (g_562)
                            continue;
                        g_110[4] = (safe_mod_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_s(g_313, 0)) ^ (safe_add_func_uint32_t_u_u(g_562, l_1338))) ^ 0x9B20FE2EL) & (safe_lshift_func_int16_t_s_u(g_896[0][0][0], l_1419))), (safe_lshift_func_int8_t_s_s(func_24((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(func_24((+func_59(l_1347)), l_1307[3], p_10, l_1347, g_110[6]), g_554)) ^ p_12), (-7L))), g_896[0][6][2], l_1400, p_10, g_896[0][0][0]), 6))));
                    }
                    for (p_10 = 2; (p_10 <= 6); p_10 += 1)
                    {
                        int i;
                        l_1312 = l_1307[p_10];
                    }
                }
            }
            for (p_13 = 0; (p_13 <= 1); p_13 += 1)
            {
                unsigned char l_1454 = 0xECL;
                int l_1456 = 1L;
                p_12 = (+(!(safe_mod_func_uint16_t_u_u(((p_10 < (((-1L) || (0xBD3DL | (safe_mul_func_int16_t_s_s(func_24((safe_rshift_func_uint8_t_u_u(l_1377, (l_1347 && (safe_mul_func_uint8_t_u_u((func_24(g_313, (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_1293, (g_896[0][0][0] <= ((safe_sub_func_uint8_t_u_u(((((((l_1448 <= 0UL) >= g_896[0][7][0]) == l_1378) ^ l_1347) && (-2L)) >= 0UL), 252UL)) || 0x44L)))), g_1048[3][0])), l_1294[1], l_1367, g_156) <= 0xE4ED1FCAL), g_177))))), g_1048[2][0], p_12, p_12, l_1449), g_562)))) <= 0x45795017L)) > p_14), l_1347))));
                for (g_2 = 0; (g_2 <= 1); g_2 += 1)
                {
                    for (l_1293 = 0; (l_1293 <= 0); l_1293 += 1)
                    {
                        int i, j;
                        if (g_1048[g_2][l_1293])
                            break;
                    }
                    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
                    {
                        int i, j, k;
                        g_1048[(g_2 + 1)][p_11] = g_1048[(g_2 + 2)][p_11];
                        g_1048[(p_13 + 2)][p_11] = (safe_sub_func_int32_t_s_s(g_896[g_2][(p_13 + 6)][(p_13 + 1)], ((-7L) | (safe_mod_func_uint8_t_u_u(((g_896[(p_11 + 1)][(p_11 + 5)][(p_11 + 2)] >= l_1454) <= func_34(g_562, (safe_unary_minus_func_uint16_t_u(func_24(p_10, p_10, g_225, p_10, g_110[6]))), l_1448, g_562, p_13)), g_896[0][0][0])))));
                        l_1449 = 0L;
                    }
                }
                for (l_1293 = 0; (l_1293 <= 6); l_1293 += 1)
                {
                    int i;
                    for (g_225 = 0; (g_225 >= 0); g_225 -= 1)
                    {
                        int i, j;
                        if (g_1048[(g_225 + 3)][g_225])
                            break;
                    }
                    if ((l_1307[l_1293] >= ((((func_70(g_156, g_110[0], p_10, func_24(((0xB8F5L <= (((((g_2 && 253UL) && (func_59(p_12) >= g_4[2])) | g_1048[3][0]) < p_13) & 0xC7L)) || g_110[2]), g_4[1], g_4[3], g_110[6], l_1347)) >= p_12) >= g_896[0][4][1]) ^ p_10) && l_1456)))
                    {
                        if (g_554)
                            break;
                        g_110[1] = (safe_rshift_func_uint8_t_u_u(0x95L, 5));
                        g_1048[3][0] = g_4[0];
                        g_110[3] = (0xC98D41DFL && (safe_mod_func_int16_t_s_s(func_30((safe_rshift_func_int8_t_s_s(g_156, 5))), l_1307[l_1293])));
                    }
                    else
                    {
                        g_110[2] = (0UL & (safe_rshift_func_int16_t_s_s(g_1048[3][0], 12)));
                    }
                    for (g_554 = 1; (g_554 >= 0); g_554 -= 1)
                    {
                        int i, j, k;
                        p_12 = (1L > 0xB9L);
                        l_1465 = g_896[p_13][(l_1293 + 1)][p_13];
                        g_1048[3][0] = p_11;
                    }
                }
                for (g_2 = 0; (g_2 >= 0); g_2 -= 1)
                {
                    int i, j;
                    if (g_1048[(p_13 + 2)][g_2])
                        break;
                    return p_12;
                }
            }
        }
        l_1465 = (((safe_mod_func_int32_t_s_s(l_1377, (-1L))) && func_70((0L != (func_34(((p_14 >= ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((g_896[0][0][0] != l_1449), 0x0BL)))), 1)) | (g_1048[3][0] > 0L))) < p_11), g_313, g_896[0][2][0], p_10, g_562) & 0x398AL)), g_4[4], g_4[0], g_896[0][0][0])) >= l_1449);
    }
    else
    {
        unsigned l_1473 = 0UL;
        l_1473 = l_1294[1];
        p_12 = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(250UL, (safe_mul_func_uint16_t_u_u(((0UL != (safe_rshift_func_int16_t_s_u(g_1048[0][0], p_11))) >= g_108), (safe_sub_func_uint16_t_u_u(p_10, ((0x474578C0L >= (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(l_1294[1], 0L)), l_1367))) ^ g_1488[6]))))))), g_1488[7]));
    }
    return l_1294[1];
}







static char func_21(unsigned p_22)
{
    int l_23[7];
    char l_1263 = 1L;
    unsigned l_1285[2][3][3] = {{{0xF2A542AAL, 0xA8D8B26CL, 0xA7E3D7DBL}, {0xF2A542AAL, 0xA8D8B26CL, 0xA7E3D7DBL}, {0xF2A542AAL, 0xA8D8B26CL, 0xA7E3D7DBL}}, {{0xF2A542AAL, 0xA8D8B26CL, 0xA7E3D7DBL}, {0xF2A542AAL, 0xA8D8B26CL, 0xA7E3D7DBL}, {0xF2A542AAL, 0xA8D8B26CL, 0xA7E3D7DBL}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_23[i] = 0x6758E356L;
    for (p_22 = 2; (p_22 <= 6); p_22 += 1)
    {
        int l_40 = (-1L);
        unsigned char l_1260[3][3][6] = {{{0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}, {0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}, {0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}}, {{0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}, {0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}, {0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}}, {{0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}, {0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}, {0x84L, 4UL, 9UL, 4UL, 0x84L, 5UL}}};
        int i, j, k;
        for (g_2 = 1; (g_2 <= 6); g_2 += 1)
        {
            int i;
            l_23[p_22] = func_24((l_23[p_22] == func_30((safe_rshift_func_uint16_t_u_u((((-9L) != func_34(g_4[3], l_40, g_2, g_2, g_4[0])) || p_22), l_23[p_22])))), l_23[p_22], g_896[1][1][1], l_1260[1][2][2], p_22);
            if (g_110[0])
                break;
        }
        l_23[p_22] = (((safe_add_func_int8_t_s_s(0x9DL, (p_22 <= l_1263))) & 1L) == (func_70(p_22, p_22, g_896[0][0][0], (safe_mod_func_int32_t_s_s((g_554 || (safe_lshift_func_uint16_t_u_u(((p_22 | 0xC8L) >= p_22), 7))), 0x6BB0F5B7L))) <= l_1260[1][2][2]));
        if (p_22)
            break;
    }
    for (g_2 = (-29); (g_2 > (-20)); g_2++)
    {
        int l_1281 = 0x6ED5DA73L;
        g_1048[0][0] = p_22;
        l_23[5] = ((safe_add_func_int8_t_s_s((func_79(l_23[0], (safe_unary_minus_func_int32_t_s((((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((func_30(func_34(g_108, (safe_sub_func_uint32_t_u_u(0x45773E8DL, (((safe_add_func_uint16_t_u_u(func_59(l_1263), (((0x1AA2L < (g_225 || 0xBEL)) != (l_23[0] | 0xB446945FL)) || g_1048[2][0]))) == g_313) & g_110[6]))), g_108, g_896[0][0][0], l_1263)) >= g_896[1][6][2]), 5)) == p_22), 65533UL)) | l_1281) & p_22)))) <= p_22), g_2)) == p_22);
    }
    for (g_2 = 26; (g_2 == (-4)); --g_2)
    {
        int l_1284 = (-1L);
        return l_1284;
    }
    return l_1285[0][0][1];
}







static int func_24(unsigned p_25, short p_26, unsigned p_27, unsigned p_28, int p_29)
{
    return p_25;
}







static int func_30(unsigned char p_31)
{
    unsigned l_1229[8] = {0x2A2E041CL, 0xF235482EL, 0x2A2E041CL, 0xF235482EL, 0x2A2E041CL, 0xF235482EL, 0x2A2E041CL, 0xF235482EL};
    int l_1246 = 0xFCFB1C62L;
    const int l_1254 = 0x4876FC62L;
    unsigned l_1259 = 0xB072A077L;
    int i;
    g_1048[3][0] = (((((((safe_add_func_int32_t_s_s(p_31, 4294967295UL)) && (-5L)) ^ ((0x1E57C61EL | g_562) > (~(g_390 || (((p_31 <= func_59((safe_mod_func_int16_t_s_s(0xA434L, ((safe_lshift_func_uint16_t_u_u((func_59(((l_1229[5] <= p_31) > g_225)) == p_31), l_1229[5])) || l_1229[5]))))) | p_31) ^ 65535UL))))) != l_1229[5]) == p_31) != l_1229[5]) & p_31);
    if ((((safe_rshift_func_uint16_t_u_s((func_34((!g_225), (p_31 != (((safe_rshift_func_int8_t_s_u(l_1229[4], 7)) ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_1229[5], (safe_mul_func_int16_t_s_s(3L, l_1229[5])))), (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(func_59((+p_31)), 0)), p_31)))), p_31))) < p_31)), p_31, g_4[2], l_1229[2]) >= g_896[1][3][1]), 11)) >= 0xE8EEL) >= (-10L)))
    {
        g_554 = g_554;
    }
    else
    {
        int l_1247 = 0L;
        l_1246 = p_31;
        l_1247 = func_79(l_1229[5], l_1246);
    }
    l_1246 = (safe_mod_func_int8_t_s_s((0x1EL == (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((p_31 ^ ((!(l_1254 ^ p_31)) != (0x5E5F9DDDL <= (l_1229[6] >= (g_225 ^ (safe_mod_func_int32_t_s_s((func_59((p_31 >= (safe_mul_func_uint8_t_u_u(0UL, 1UL)))) & 0xBCL), 0xAC92D2A6L))))))), 4)), g_4[2]))), g_554));
    l_1259 = (l_1229[0] ^ 0xB2C6L);
    return g_225;
}







static unsigned short func_34(unsigned char p_35, unsigned p_36, const unsigned short p_37, unsigned short p_38, unsigned char p_39)
{
    int l_47[4][2][3] = {{{(-8L), (-6L), (-2L)}, {(-8L), (-6L), (-2L)}}, {{(-8L), (-6L), (-2L)}, {(-8L), (-6L), (-2L)}}, {{(-8L), (-6L), (-2L)}, {(-8L), (-6L), (-2L)}}, {{(-8L), (-6L), (-2L)}, {(-8L), (-6L), (-2L)}}};
    int l_748[4][9][3];
    unsigned char l_749 = 4UL;
    unsigned char l_778 = 250UL;
    unsigned char l_787 = 0x3FL;
    unsigned l_854 = 1UL;
    char l_961 = 0x0FL;
    char l_1112 = 0x86L;
    const short l_1113 = 0x453EL;
    int l_1141 = 0xBC715B1DL;
    int l_1158[5];
    int l_1195[4][8][6] = {{{0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}}, {{0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}}, {{0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}}, {{0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}, {0x097D8BADL, (-1L), 1L, 6L, (-1L), 0L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
                l_748[i][j][k] = 0x474C8E57L;
        }
    }
    for (i = 0; i < 5; i++)
        l_1158[i] = 5L;
    for (p_36 = 0; (p_36 < 54); ++p_36)
    {
        unsigned l_701 = 0x4909D220L;
        int l_716 = 0x10E9B71CL;
        short l_933 = 0x1B3EL;
        unsigned l_1049 = 0UL;
        for (p_39 = 6; (p_39 <= 13); p_39 = safe_add_func_uint16_t_u_u(p_39, 4))
        {
            unsigned short l_58[7][8][4] = {{{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}, {{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}, {{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}, {{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}, {{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}, {{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}, {{0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}, {0xF93BL, 0xD024L, 0x911BL, 65535UL}}};
            int l_741 = 1L;
            int i, j, k;
            for (p_38 = (-12); (p_38 <= 21); p_38 = safe_add_func_uint8_t_u_u(p_38, 6))
            {
                unsigned short l_65 = 0x4CD5L;
                int l_690 = 0x6ACA1CE4L;
                char l_709 = (-7L);
                for (p_35 = 0; (p_35 <= 1); p_35 += 1)
                {
                    int i, j, k;
                    return l_47[p_35][p_35][(p_35 + 1)];
                }
                if ((safe_mod_func_uint16_t_u_u(func_50((l_47[3][1][0] ^ (safe_lshift_func_int8_t_s_u(l_58[4][1][0], 4))), func_59(((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_65, (safe_add_func_int8_t_s_s(l_58[4][1][0], (l_47[2][0][0] <= 4294967295UL))))), g_4[4])) & (safe_mod_func_int16_t_s_s(g_2, func_70(g_4[0], g_2, l_47[2][1][1], p_38)))) | l_65) < 1UL)), p_39, l_47[2][1][0], l_58[4][1][0]), g_4[0])))
                {
                    int l_689 = 0x968FFE32L;
                    int l_717[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_717[i] = 0x4F225368L;
                    for (g_225 = 0; (g_225 <= 1); g_225 += 1)
                    {
                        int i, j, k;
                        l_689 = 0L;
                        l_690 = l_47[(g_225 + 1)][g_225][(g_225 + 1)];
                        return l_47[g_225][g_225][g_225];
                    }
                    l_690 = (g_108 | ((safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((l_47[1][0][2] | func_59(l_47[1][0][0])) | (safe_sub_func_uint32_t_u_u(func_59(p_37), ((l_47[3][1][1] && ((p_37 <= (~p_37)) && 0UL)) | l_47[0][1][2])))), (-1L))) < 0L), g_2)) >= (-1L)));
                    if (g_110[6])
                    {
                        int l_710 = (-4L);
                        int l_711 = 0xBC3D8321L;
                        l_711 = func_50((safe_lshift_func_uint16_t_u_s((g_313 != (l_65 | (((l_58[0][5][3] && l_701) | (safe_unary_minus_func_int16_t_s((((((safe_mul_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_701 <= l_689), 0)), ((func_59(l_689) < ((l_709 | g_562) >= 0xF629EF7AL)) && 0x89830475L))) >= 0xF0L) ^ p_38), p_36)) == l_65) != g_225) != p_36) <= l_690)))) | g_110[6]))), 15)), p_37, l_47[1][1][1], l_47[3][1][2], l_710);
                        g_110[3] = (g_4[3] && (7L == (safe_sub_func_uint8_t_u_u(l_711, l_710))));
                        l_716 = (safe_add_func_int16_t_s_s(0xA96DL, 0x6031L));
                        l_717[0] = func_59(g_110[0]);
                    }
                    else
                    {
                        int l_728 = 0L;
                        l_690 = (((0xD211L >= p_37) != (func_70((((p_37 ^ (safe_sub_func_uint8_t_u_u((p_36 >= (g_156 ^ ((!(l_47[1][0][1] >= (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((func_59((safe_rshift_func_int8_t_s_u(0xE6L, 3))) && (safe_rshift_func_uint16_t_u_s((p_39 >= 1L), 4))), 14)) != g_225), l_728)))) ^ p_38))), l_716))) & g_2) == 0x2FABL), p_35, l_58[4][1][0], g_562) != g_177)) ^ p_35);
                    }
                    l_717[0] = (safe_rshift_func_uint8_t_u_u((g_108 && (l_717[0] != 0xCD7FL)), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_58[0][6][0], func_59(g_110[6]))), (safe_mul_func_int16_t_s_s((-9L), (safe_mod_func_int8_t_s_s(0x82L, l_741)))))), 7))));
                }
                else
                {
                    if (l_716)
                    {
                        if (l_716)
                            break;
                        if (p_38)
                            continue;
                    }
                    else
                    {
                        short l_747 = 3L;
                        l_748[2][2][1] = (safe_unary_minus_func_int16_t_s((l_58[4][1][0] & (p_37 > (0xD8B8L | func_70(l_65, ((!0L) > (p_35 || ((safe_lshift_func_int16_t_s_s((func_79(g_225, ((p_37 < func_79(((safe_mul_func_uint8_t_u_u((!g_562), g_562)) <= p_38), l_741)) > g_554)) ^ l_741), 14)) >= 0xBB68L))), l_709, l_747))))));
                    }
                }
            }
            l_716 = (p_39 >= (((l_749 ^ (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_313, l_58[4][0][1])), l_749))) > (safe_rshift_func_int16_t_s_s(0xB70AL, 13))) ^ ((func_79((4294967287UL ^ g_156), (safe_mod_func_int32_t_s_s(p_35, g_225))) < 7L) || p_36)));
            l_716 = ((l_58[0][6][0] ^ p_38) > ((!(g_156 ^ (safe_rshift_func_uint16_t_u_u((~p_37), 5)))) & ((0xB8L != l_58[3][5][3]) == ((safe_mod_func_int16_t_s_s(((-1L) < ((0xA4L > (l_701 != 0L)) == 0x65L)), g_225)) && 6UL))));
        }
        l_716 = (-7L);
        for (l_749 = 0; (l_749 == 16); l_749 = safe_add_func_int32_t_s_s(l_749, 2))
        {
            unsigned short l_772 = 0UL;
            unsigned short l_780 = 0UL;
            int l_792 = 0x43290A87L;
            char l_793 = 8L;
            if ((p_35 <= (0x05A8B696L | ((((g_110[0] ^ (safe_sub_func_int32_t_s_s(0xA945D926L, 0x9531716EL))) == g_110[1]) == (safe_add_func_uint8_t_u_u((~0xFBL), ((safe_mul_func_int8_t_s_s(l_772, (safe_rshift_func_int8_t_s_s(0x8CL, l_701)))) > l_716)))) ^ 1UL))))
            {
                short l_777[10] = {0xC6A2L, 0xC6A2L, 0xF841L, 0xC6A2L, 0xC6A2L, 0xF841L, 0xC6A2L, 0xC6A2L, 0xF841L, 0xC6A2L};
                int l_779 = 0x4224D6D7L;
                int i;
                for (g_554 = (-26); (g_554 != (-21)); g_554 = safe_add_func_uint16_t_u_u(g_554, 1))
                {
                    l_777[2] = 0xC07B1E21L;
                    l_779 = func_59((((-1L) > func_79(g_177, l_778)) && (p_38 || l_772)));
                }
                l_780 = g_313;
                l_748[1][3][1] = (func_50((safe_lshift_func_uint8_t_u_u((func_50(g_110[6], p_35, ((safe_mod_func_int8_t_s_s((0x2BL >= (((p_37 > l_701) < 0x44016E2AL) > p_35)), (safe_lshift_func_int16_t_s_u(g_110[6], (g_110[6] >= 1UL))))) & g_2), g_4[0], l_748[2][6][1]) ^ 0L), l_787)), g_4[1], p_36, p_38, g_4[1]) < 0xB89AD34FL);
            }
            else
            {
                int l_841 = 0xCDB4AB0BL;
                int l_863 = 0L;
                for (p_39 = 0; (p_39 != 34); ++p_39)
                {
                    for (g_554 = 6; (g_554 >= 22); g_554 = safe_add_func_uint32_t_u_u(g_554, 8))
                    {
                        l_792 = 0xFB4E5CC1L;
                        l_792 = (p_37 | (func_59((func_70(g_156, p_39, l_793, (4294967295UL & ((((-10L) || (((0x4A6D1CBAL == (safe_add_func_uint32_t_u_u((+(((g_177 >= ((+(safe_mod_func_uint8_t_u_u(g_110[2], g_177))) | g_562)) >= g_177) | p_36)), g_225))) != g_177) <= g_110[6])) != p_38) != 0x75B8L))) == g_2)) ^ l_772));
                    }
                }
                if (g_225)
                    continue;
                for (g_390 = 0; (g_390 == 35); g_390 = safe_add_func_int8_t_s_s(g_390, 6))
                {
                    short l_808 = 0x7F9BL;
                    int l_851 = 1L;
                    if ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s(p_37, p_37)) >= l_701) || (func_79(l_808, p_36) == p_35)) ^ ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u(g_390, 7)))) | func_59(p_36))), p_38)), 2)), 9)))
                    {
                        unsigned l_812 = 0UL;
                        l_716 = g_562;
                        l_812 = (g_4[3] || (l_778 ^ func_79((((p_37 & g_390) || func_79(p_38, (p_39 == 0x07L))) | ((p_39 >= l_808) | (-6L))), p_37)));
                        l_716 = (safe_mul_func_int8_t_s_s((g_2 == (((func_59((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(5L, 5)), l_716))) ^ (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((g_110[3] <= (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0x56L, (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_793, (safe_sub_func_int16_t_s_s(func_59(((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((0x2AC52DB7L && (safe_rshift_func_uint16_t_u_u(1UL, 2))), 2L)) <= p_39), 7)) >= l_808)), 0x0F2EL)))), l_841)))) ^ (-5L)), g_177)), 3UL))) && 0x8CL), g_225)), g_2))) & p_36) & p_35)), p_38));
                        g_554 = ((p_37 && l_808) | g_390);
                    }
                    else
                    {
                        int l_848[4][3];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_848[i][j] = 1L;
                        }
                        l_848[2][0] = func_59(((((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((g_156 >= func_59(p_37)), 4294967295UL)), 6)) ^ (safe_rshift_func_int8_t_s_s(l_848[2][0], 0))) || (p_35 != (l_716 & g_2))) >= (0xC273L & l_808)));
                        l_792 = g_390;
                        l_851 = (safe_add_func_int16_t_s_s(0x028CL, l_793));
                    }
                    l_716 = (p_39 != ((0UL && l_716) | (((safe_mod_func_uint16_t_u_u(func_59(g_108), l_854)) < ((((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_37, func_59(((4294967291UL ^ (func_59(l_778) & l_772)) > p_35)))), g_562)) <= g_110[6]) & g_4[0]) >= p_35)) > p_37)));
                }
                l_863 = ((((safe_add_func_int8_t_s_s((p_38 <= g_108), func_59(l_841))) && p_39) & (safe_rshift_func_int16_t_s_s(g_562, 3))) < func_59(l_841));
            }
            if (l_780)
                break;
            if (g_2)
            {
                for (l_793 = (-22); (l_793 >= (-15)); l_793 = safe_add_func_int8_t_s_s(l_793, 6))
                {
                    return p_37;
                }
            }
            else
            {
                for (g_225 = 6; (g_225 >= 0); g_225 -= 1)
                {
                    int i;
                    g_110[g_225] = 0x2DC6C25BL;
                }
                g_554 = g_108;
            }
            for (l_793 = 0; (l_793 < (-24)); l_793--)
            {
                unsigned l_892 = 4294967295UL;
                int l_893 = (-1L);
                if ((l_748[2][2][1] | (safe_add_func_int32_t_s_s(p_38, g_108))))
                {
                    for (p_39 = (-15); (p_39 == 26); p_39++)
                    {
                        if (p_36)
                            break;
                        l_893 = (safe_mul_func_uint8_t_u_u(func_79((((safe_mod_func_int16_t_s_s(p_36, (safe_rshift_func_uint8_t_u_u((255UL & ((safe_sub_func_int8_t_s_s(((l_772 != (safe_lshift_func_uint8_t_u_u(0x04L, ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(l_716, (func_79((safe_mul_func_uint16_t_u_u(0x3340L, 1UL)), g_156) != g_225))), 5)), p_38)), g_4[1])) | p_39)))) & p_38), l_701)) && g_313)), 4)))) <= p_35) | g_554), l_892), g_177));
                    }
                }
                else
                {
                    int l_911 = (-1L);
                    if (l_716)
                    {
                        g_554 = (safe_sub_func_int32_t_s_s(g_896[0][0][0], (-9L)));
                        if (g_896[0][3][1])
                            break;
                    }
                    else
                    {
                        l_748[2][6][1] = p_35;
                        l_792 = (safe_sub_func_uint32_t_u_u((1L ^ l_893), l_772));
                        l_748[2][5][2] = 0x142C5BB5L;
                        l_792 = func_50(p_39, (safe_lshift_func_uint16_t_u_s(0xB7D4L, 5)), p_36, (safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(2L, p_38)) <= p_39), g_177)), (p_35 != l_892));
                    }
                    g_110[6] = (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u(g_177, ((0xA3L ^ ((!g_110[6]) > 0x42C2A725L)) ^ (((l_772 >= func_59((0x8F6BL <= (l_716 == (l_911 ^ (p_36 | 0xF5L)))))) && g_4[4]) || g_4[4])))) <= g_390) && p_39) == p_35), g_2)), l_893));
                }
                g_110[6] = p_36;
                if (p_37)
                    continue;
            }
        }
        if (((safe_add_func_int16_t_s_s(p_35, ((safe_rshift_func_uint8_t_u_u(0xE7L, 7)) <= (safe_rshift_func_int8_t_s_u(((g_313 ^ (p_37 & (p_36 || (func_79(g_110[4], ((func_59(l_748[0][4][2]) || (((p_36 > p_37) && l_701) > p_38)) & g_313)) || p_38)))) >= l_778), l_716))))) < p_37))
        {
            const unsigned l_932 = 0x6293FAFBL;
            unsigned l_934 = 0xE3CA9387L;
            l_716 = (((((((safe_mul_func_int8_t_s_s(((((-9L) | p_37) || (safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(func_70((safe_add_func_int32_t_s_s(1L, l_749)), (((safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s(((func_70(g_896[0][3][1], (safe_lshift_func_uint8_t_u_u(((l_932 < g_313) | 3UL), g_2)), g_225, l_932) && l_932) != g_896[0][0][0]), p_37)) | 0x44B8L), p_39)) <= g_554) | 0xFA47L), g_562, p_38), g_896[1][0][2])) > l_933), g_390))) ^ g_2), p_37)) && p_37) || p_39) & l_934) & 0xDB92L) || g_390) >= p_38);
        }
        else
        {
            unsigned short l_955 = 8UL;
            int l_960 = 0xCDD463D3L;
            short l_1018[9] = {(-3L), (-3L), 0x593EL, (-3L), (-3L), 0x593EL, (-3L), (-3L), 0x593EL};
            int i;
            l_716 = (!(safe_lshift_func_int16_t_s_s(1L, ((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(g_156, (l_701 | (((safe_rshift_func_int16_t_s_s(p_38, 10)) > 0x465E764FL) == (((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_955, (g_896[1][0][1] <= func_59(g_554)))), p_35)), g_108)), 0x14E64937L)) >= g_110[2]) <= p_38))))) || g_108), p_35)), (-1L))), p_39)) == l_933))));
            if (func_50(((safe_sub_func_int32_t_s_s(l_955, (g_562 || func_79((func_50(p_39, g_2, g_562, g_554, g_896[1][1][1]) && (safe_add_func_uint16_t_u_u(((0x94456D61L < 0xE6A655C0L) ^ l_748[2][2][1]), l_960))), p_36)))) ^ g_177), l_933, l_961, g_4[3], g_2))
            {
                char l_986 = (-4L);
                if (g_896[0][5][1])
                {
                    unsigned char l_968 = 0x21L;
                    unsigned l_987 = 0x001E7F57L;
                    if (((+0x1341458FL) != p_35))
                    {
                        l_716 = 4L;
                    }
                    else
                    {
                        unsigned char l_985[2][9][4] = {{{1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}}, {{1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}, {1UL, 0x1BL, 0UL, 0x8DL}}};
                        int i, j, k;
                        g_110[4] = ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_110[6], p_38)), (safe_mul_func_int8_t_s_s(l_968, ((((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(((0x03CF0C4FL | 1UL) && (safe_lshift_func_uint16_t_u_u((+((safe_rshift_func_uint16_t_u_u((~((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((func_59(g_2) != 0x9FL), l_985[0][5][2])), p_39)) != g_110[3])), p_37)) != p_35)), g_896[1][5][1]))), p_36)), g_390)), l_933)) < 0xA9L), 1UL)) && 0x04B5L) ^ p_37) > g_110[0]))))) & l_986);
                        l_748[2][2][1] = (g_110[5] & (-9L));
                        l_716 = (-1L);
                    }
                    l_987 = g_390;
                    for (p_38 = 7; (p_38 != 29); p_38 = safe_add_func_int8_t_s_s(p_38, 4))
                    {
                        int l_996[4] = {0x03F18B59L, 0x9FE58BA5L, 0x03F18B59L, 0x9FE58BA5L};
                        int i;
                        g_110[6] = (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((((p_35 != (g_4[2] | l_996[0])) == (safe_rshift_func_int8_t_s_s(((l_986 ^ g_896[0][3][2]) <= ((((g_225 | (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((0x37L | (+(safe_lshift_func_int8_t_s_u(((l_986 != (l_748[2][2][1] != g_896[0][2][1])) && 0xE1L), 2)))) && g_896[0][0][0]) >= 0x10L), 1)), 1L))) != 1UL) ^ g_896[0][2][2]) <= 0x22E7L)), 7))) ^ 3UL), 0x7BL)) ^ l_960) != 0x64L), 0x0B07L)), 1UL));
                        return p_39;
                    }
                    if ((safe_mul_func_int16_t_s_s((-1L), p_35)))
                    {
                        unsigned l_1007 = 0xAAD0C221L;
                        if (l_1007)
                            break;
                        g_110[3] = (safe_rshift_func_uint16_t_u_s(5UL, ((((g_4[2] < (g_896[1][3][1] | (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(func_79((safe_lshift_func_int16_t_s_u(0L, (safe_mod_func_int16_t_s_s(func_70(p_38, g_108, func_59(func_59(g_108)), g_4[3]), 0x088AL)))), l_701), g_2)) == g_2), g_177)))) & g_4[0]) >= g_562) || p_35)));
                    }
                    else
                    {
                        l_748[0][4][2] = (g_896[1][5][2] | 0L);
                        return l_1018[5];
                    }
                }
                else
                {
                    int l_1021 = 0xDC538013L;
                    for (g_108 = 1; (g_108 <= 6); g_108 += 1)
                    {
                        int i;
                        g_110[g_108] = ((l_986 || 5UL) > g_177);
                        l_1021 = (safe_rshift_func_uint16_t_u_s(((~0x1729DFA2L) || ((-6L) != g_390)), 3));
                    }
                }
                l_748[2][2][1] = (l_986 == g_156);
            }
            else
            {
                unsigned l_1027 = 0x6D3B13FEL;
                for (p_39 = 3; (p_39 <= 8); p_39 += 1)
                {
                    unsigned l_1022[7][6] = {{6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}, {6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}, {6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}, {6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}, {6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}, {6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}, {6UL, 4294967295UL, 0xC2FDDB5FL, 4294967292UL, 4294967292UL, 0xC2FDDB5FL}};
                    unsigned char l_1047 = 0xBCL;
                    int l_1051 = 0xEFBE0002L;
                    int i, j;
                    for (p_35 = 3; (p_35 <= 8); p_35 += 1)
                    {
                        l_716 = (g_108 || 0xE799L);
                        g_110[3] = ((246UL || g_390) != 6UL);
                    }
                    g_110[6] = (func_70((l_955 != 255UL), func_59(((((func_79(g_110[6], (~p_37)) & (func_59(l_1022[1][1]) ^ 0xAD75L)) ^ p_39) <= 0x12726041L) > g_896[0][0][0])), g_313, l_955) & 65532UL);
                    if ((safe_lshift_func_int16_t_s_u((((g_896[0][0][0] != (safe_sub_func_int16_t_s_s((l_1027 == 0xF7L), ((safe_mul_func_uint16_t_u_u(((!g_390) == (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((~p_36))), 0UL))), (((((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((p_38 | func_70((safe_add_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(g_896[1][6][2], 11)) != ((safe_rshift_func_uint16_t_u_u(l_716, l_1047)) | g_1048[3][0])) != l_1022[4][2]), g_896[0][1][2])), g_896[0][0][0])) <= p_38) >= 1UL), g_4[2])), p_38, p_35, l_1049)) >= 4294967295UL), p_35)), g_896[0][4][1])) <= 0x78L) == 0x76L) > 0xB6DAL) || 6L))) > p_36)))) ^ (-1L)) && p_36), 5)))
                    {
                        unsigned short l_1050 = 0xFA41L;
                        l_1050 = (l_955 | (l_748[2][8][2] ^ l_960));
                        l_716 = l_960;
                        l_748[2][2][1] = p_37;
                        return p_37;
                    }
                    else
                    {
                        char l_1052 = 0x4BL;
                        l_1051 = (p_36 <= ((1UL || p_37) == 1UL));
                        g_1048[0][0] = 0L;
                        l_1052 = p_38;
                    }
                    for (l_778 = 0; (l_778 <= 1); l_778 += 1)
                    {
                        if (g_390)
                            break;
                    }
                }
                return g_313;
            }
            for (g_108 = (-23); (g_108 >= 45); g_108++)
            {
                unsigned char l_1055 = 9UL;
                int l_1056 = 0xCFA68967L;
                l_1055 = g_225;
                g_1048[3][0] = p_38;
                l_1056 = g_1048[3][0];
            }
        }
    }
    if (func_70(l_854, ((safe_mul_func_int16_t_s_s(func_50(l_47[2][1][1], ((func_70(l_778, g_562, ((~1UL) | l_47[2][0][2]), l_748[3][8][1]) | p_39) || g_554), p_37, l_787, p_37), g_896[1][5][2])) | g_1048[1][0]), g_896[0][0][0], g_177))
    {
        const short l_1059[10] = {(-1L), 0xFF9AL, (-1L), 0xFF9AL, (-1L), 0xFF9AL, (-1L), 0xFF9AL, (-1L), 0xFF9AL};
        int l_1060 = 1L;
        int i;
        l_1060 = (g_110[1] == l_1059[0]);
        for (l_778 = 0; (l_778 != 34); l_778 = safe_add_func_int32_t_s_s(l_778, 6))
        {
            int l_1071 = 1L;
            if (g_110[5])
                break;
            for (g_313 = 0; (g_313 <= 0); g_313 += 1)
            {
                int i, j;
                if (g_1048[(g_313 + 3)][g_313])
                    break;
                g_110[6] = func_59(g_896[0][0][0]);
                for (p_36 = 0; (p_36 <= 2); p_36 += 1)
                {
                    int i, j, k;
                    l_748[(g_313 + 1)][(g_313 + 7)][g_313] = l_47[(p_36 + 1)][(g_313 + 1)][p_36];
                    g_110[4] = p_35;
                    g_1048[1][0] = g_110[6];
                    g_110[6] = (safe_rshift_func_uint16_t_u_s(65529UL, ((safe_add_func_uint16_t_u_u(p_37, (g_390 == g_110[6]))) < func_59(g_156))));
                }
            }
            for (l_1060 = (-7); (l_1060 != (-7)); ++l_1060)
            {
                g_554 = (safe_add_func_int16_t_s_s(l_1071, (0x461FL == ((safe_lshift_func_uint8_t_u_s(((65535UL >= 0xDCD2L) <= p_36), (0x4103L > l_1059[9]))) == func_70(l_787, ((g_390 | p_36) ^ g_896[1][0][1]), l_47[3][0][2], g_1048[3][0])))));
            }
        }
        if ((~(safe_mul_func_int16_t_s_s(g_108, (safe_mul_func_uint8_t_u_u(0xC5L, (safe_lshift_func_uint16_t_u_s((+p_35), p_35))))))))
        {
            int l_1086 = 0xB0735632L;
            g_110[6] = l_1059[0];
            l_1060 = ((~(((safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_1086, p_38)), (g_390 & func_59(p_35)))) ^ l_1059[0]), 13)) == ((~0xCB0EB87DL) || (3L < 1UL))) >= p_38)) >= g_554);
            g_110[6] = (func_70(l_47[2][1][0], p_38, ((safe_rshift_func_uint8_t_u_u(g_177, 4)) & ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(func_79(g_1048[0][0], ((safe_add_func_uint16_t_u_u(0x10A9L, ((0L == (l_1060 || (p_38 != ((0xEE14L <= p_37) ^ (-1L))))) && g_225))) == g_110[6])), g_177)), g_177)) || 2L)), l_748[2][2][1]) != g_896[0][0][0]);
        }
        else
        {
            unsigned l_1097 = 0xC7B28027L;
            l_1060 = (safe_sub_func_int8_t_s_s((!p_37), p_35));
            l_1097 = l_1060;
        }
        g_554 = p_39;
    }
    else
    {
        int l_1106[6] = {2L, 2L, (-1L), 2L, 2L, (-1L)};
        unsigned char l_1109 = 0xFEL;
        int i;
        l_748[2][2][1] = (((~(safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(0xFAL, (safe_mod_func_int8_t_s_s((((0x26FB53E2L < (-6L)) || (func_59(g_313) >= l_1106[2])) < (~(safe_mul_func_int16_t_s_s((g_2 < (l_1109 != ((safe_sub_func_int16_t_s_s(g_1048[3][0], l_1112)) != l_787))), p_37)))), l_778)))) <= g_156), l_1113)) <= l_748[2][2][1]), 9L))) || l_1106[2]) <= 0xBA77L);
    }
    g_1048[3][0] = ((g_896[0][6][0] & ((0x0433L >= p_36) | ((0x88E8L > (l_748[0][5][1] | (safe_mod_func_uint16_t_u_u(((0xA1L > g_554) < p_36), ((((p_38 ^ 4294967295UL) >= g_896[0][0][0]) && 4294967295UL) && 1L))))) <= g_156))) > g_225);
    if (g_554)
    {
        int l_1139 = 0xD35FB4EFL;
        for (g_313 = (-6); (g_313 == 4); g_313++)
        {
            char l_1120 = 0xE0L;
            int l_1140 = 0x39149683L;
            if (p_39)
                break;
            if (((func_79(g_562, l_1120) & g_2) | g_1048[3][0]))
            {
                const int l_1138 = 0x9CDEA494L;
                for (g_554 = (-11); (g_554 <= (-10)); ++g_554)
                {
                    unsigned l_1133 = 0x8A628439L;
                    g_1048[3][0] = (l_1120 && (g_2 || (safe_mod_func_int8_t_s_s(p_38, (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0UL, ((safe_mul_func_uint8_t_u_u(p_37, (l_1133 && func_59(l_961)))) & (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_177, l_1120)), 2))))), g_562)), p_37))))));
                    l_1139 = l_1138;
                    if (l_748[2][4][1])
                    {
                        l_1140 = 0xB9C01BB3L;
                    }
                    else
                    {
                        return l_1133;
                    }
                }
                if (l_1120)
                    break;
                l_1141 = p_39;
            }
            else
            {
                unsigned char l_1149[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1149[i] = 246UL;
                l_1149[0] = (func_59(p_35) <= (safe_mod_func_uint8_t_u_u((func_79((safe_sub_func_uint16_t_u_u(((((safe_unary_minus_func_int16_t_s(p_37)) < g_108) < p_38) | g_177), p_35)), ((safe_sub_func_uint8_t_u_u(g_1048[3][0], 1UL)) <= g_1048[3][0])) > g_4[0]), g_1048[3][0])));
                for (g_390 = (-19); (g_390 > 8); ++g_390)
                {
                    for (l_778 = 0; (l_778 <= 1); l_778 += 1)
                    {
                        int i, j, k;
                        g_554 = ((65526UL == g_896[l_778][(l_778 + 3)][l_778]) ^ ((safe_sub_func_int8_t_s_s(((g_896[l_778][(l_778 + 4)][(l_778 + 1)] <= ((g_1048[2][0] != ((safe_mod_func_uint8_t_u_u(l_1140, l_1149[0])) || ((p_35 & p_39) | (6UL | p_36)))) == g_896[0][0][0])) || 0xC1L), g_2)) == g_1048[3][0]));
                        return p_37;
                    }
                }
                l_1140 = p_35;
            }
            if (g_2)
                continue;
            l_1139 = (g_2 < g_110[6]);
        }
        l_748[0][1][1] = func_50(p_37, g_1048[3][0], g_562, (safe_sub_func_uint32_t_u_u(((6L | l_1139) == ((l_1158[1] ^ (safe_mod_func_uint16_t_u_u(g_896[1][3][1], 65535UL))) >= (0xCFD15A5CL <= g_390))), 0xB5C52BA4L)), g_110[6]);
    }
    else
    {
        char l_1170 = 3L;
        int l_1207[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1207[i] = 0x53C5A45FL;
        for (l_854 = 0; (l_854 <= 0); l_854 += 1)
        {
            const unsigned l_1167 = 4294967295UL;
            short l_1176[2][3] = {{0xCE93L, 0xCE93L, 0x8D84L}, {0xCE93L, 0xCE93L, 0x8D84L}};
            int i, j;
            g_110[2] = 1L;
            l_748[2][2][1] = (1UL < (safe_sub_func_int32_t_s_s(g_108, (l_748[2][2][1] <= (safe_lshift_func_uint8_t_u_s(g_177, (((safe_sub_func_int32_t_s_s(((l_1167 != (g_1048[3][0] || (g_1048[1][0] == (((safe_mod_func_uint8_t_u_u(g_313, func_59(g_313))) & g_2) < p_38)))) <= l_1170), 0xF8104DEFL)) > g_1048[3][0]) || 0L)))))));
            for (g_562 = 1; (g_562 <= 4); g_562 += 1)
            {
                unsigned l_1171 = 0xB02D3CD2L;
                for (p_36 = 0; (p_36 <= 0); p_36 += 1)
                {
                    int i, j;
                    g_1048[(l_854 + 3)][p_36] = g_177;
                    g_1048[l_854][l_854] = func_59(g_108);
                    g_110[6] = ((func_79((g_110[3] ^ g_554), l_1171) | (safe_add_func_uint8_t_u_u((0x558ED0D4L >= (safe_mod_func_int16_t_s_s(p_37, p_39))), (l_1167 ^ 251UL)))) ^ 0x29L);
                    l_748[3][2][0] = l_1171;
                }
            }
            for (p_38 = 0; (p_38 <= 0); p_38 += 1)
            {
                unsigned char l_1192 = 0x2BL;
                int l_1198[7][2][5] = {{{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}, {{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}, {{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}, {{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}, {{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}, {{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}, {{6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}, {6L, 0x726CCF65L, 0x42413E6AL, 0xC6EA434AL, 0x886716F6L}}};
                int i, j, k;
                for (p_36 = 0; (p_36 <= 4); p_36 += 1)
                {
                    const int l_1177 = 1L;
                    for (p_35 = 0; (p_35 <= 4); p_35 += 1)
                    {
                        int i, j;
                        if (g_108)
                            break;
                        g_1048[(l_854 + 2)][l_854] = ((l_1170 <= p_37) & ((l_1176[1][2] >= 2L) != func_79(g_313, l_1170)));
                        g_1048[2][0] = g_390;
                        if (g_108)
                            continue;
                    }
                    l_1195[3][0][3] = (l_1177 < (safe_rshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((0xF3ED500EL >= p_37), (safe_sub_func_uint32_t_u_u(((-7L) == l_1170), (((safe_sub_func_int32_t_s_s((l_1167 & g_110[6]), (safe_mul_func_uint8_t_u_u(l_1192, (safe_lshift_func_int8_t_s_s(p_36, g_225)))))) || p_35) != g_4[4]))))) || 1UL) && 0x8111L) >= l_748[2][2][1]), g_562)) < p_36), p_39)) > p_39) | l_1176[0][1]), 5)));
                    l_1198[6][1][3] = (safe_add_func_uint16_t_u_u(p_38, (p_39 >= l_1195[3][0][3])));
                    if (p_38)
                        break;
                }
                l_1207[1] = ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((p_39 | (safe_lshift_func_int16_t_s_u((((l_1198[6][1][3] == l_748[3][6][2]) >= l_1170) == p_39), 14))) != (p_36 == (g_1048[3][0] >= (~((0xEB213130L ^ l_961) < 4294967293UL))))) < 0x296BL), 12)), l_748[3][8][1])), 65535UL)) ^ 0xB20F9380L);
            }
        }
        for (l_1170 = 0; (l_1170 <= 1); l_1170 += 1)
        {
            unsigned l_1213 = 0xCA8AE800L;
            int l_1214 = 0x7AE7763FL;
            l_1207[1] = (func_59(((~g_156) == (safe_add_func_uint8_t_u_u(p_38, (l_961 > p_39))))) > l_1207[1]);
            for (l_854 = 0; (l_854 <= 1); l_854 += 1)
            {
                const short l_1212 = 0xBBC1L;
                l_1207[0] = g_110[6];
                g_554 = ((g_110[3] > (safe_rshift_func_int8_t_s_u(g_313, 3))) ^ p_36);
                for (l_749 = 0; (l_749 <= 0); l_749 += 1)
                {
                    for (g_177 = 1; (g_177 >= 0); g_177 -= 1)
                    {
                        int i, j;
                        g_1048[(l_749 + 1)][l_749] = g_1048[(l_749 + 3)][l_749];
                        l_1214 = (g_110[6] | (l_1212 > l_1213));
                        g_110[6] = (((p_38 != ((safe_mul_func_int16_t_s_s((0xBC82L == func_79(g_896[0][0][0], g_554)), l_1212)) && ((((p_36 || (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(p_37, (safe_rshift_func_uint16_t_u_u((g_1048[0][0] >= g_1048[0][0]), p_36)))), p_38))) != p_36) || g_156) != l_1214))) != p_35) == g_177);
                        l_1195[3][0][3] = l_1170;
                    }
                }
            }
        }
    }
    return g_4[2];
}







static unsigned short func_50(char p_51, char p_52, char p_53, unsigned p_54, char p_55)
{
    unsigned l_330 = 4294967288UL;
    int l_331 = 0L;
    char l_344 = 1L;
    int l_345 = 0x80B86B93L;
    unsigned char l_462 = 2UL;
    unsigned l_583 = 4294967287UL;
    unsigned char l_602 = 0xE3L;
    l_331 = l_330;
    if ((safe_add_func_int16_t_s_s((((0x457B24ACL && ((((p_55 || func_79(((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(l_331, func_59((g_108 ^ g_110[6])))) != ((safe_add_func_uint8_t_u_u(0x75L, (safe_rshift_func_int16_t_s_u((p_53 == p_52), g_108)))) >= g_108)), g_110[6])), 0xA89AL)) <= g_110[6]), p_53)) <= 0x0049L) != g_177) || l_330)) != l_344) | 0L), g_225)))
    {
        unsigned l_365 = 0xE46B9D08L;
        int l_385 = 1L;
        int l_460 = 0x0616CA4FL;
        unsigned short l_524 = 0xB9A4L;
        int l_563 = (-1L);
        int l_625 = 0xFF90DFD8L;
        unsigned l_682[10] = {0x40597E97L, 0x1698D880L, 0UL, 0UL, 0x1698D880L, 0x40597E97L, 0x1698D880L, 0UL, 0UL, 0x1698D880L};
        int i;
        if ((func_59(func_59((0xBEL == (p_51 > (8UL < p_54))))) > l_345))
        {
            int l_367 = 0x7E30253AL;
            for (l_344 = 14; (l_344 == (-30)); l_344 = safe_sub_func_int32_t_s_s(l_344, 3))
            {
                short l_366 = 2L;
                g_110[6] = (safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0xB6L, (safe_add_func_int16_t_s_s(g_2, ((safe_add_func_uint32_t_u_u(p_54, func_70((safe_add_func_uint32_t_u_u(1UL, ((p_54 > (safe_sub_func_int16_t_s_s(g_177, func_59(((safe_unary_minus_func_uint16_t_u((func_70((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(5UL, func_59(l_365))), l_366)) == p_51) && p_54), p_51, p_54, p_52) | g_4[3]))) || p_55))))) >= g_4[2]))), l_367, g_177, l_367))) || 0xE3F7L))))) & g_4[3]), 0L));
            }
        }
        else
        {
            short l_401[10][7][3] = {{{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}, {{0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}, {0x2EF1L, 0xCD53L, 0L}}};
            int l_426[8][3] = {{(-1L), 4L, 1L}, {(-1L), 4L, 1L}, {(-1L), 4L, 1L}, {(-1L), 4L, 1L}, {(-1L), 4L, 1L}, {(-1L), 4L, 1L}, {(-1L), 4L, 1L}, {(-1L), 4L, 1L}};
            int i, j, k;
            for (p_54 = 27; (p_54 == 58); p_54 = safe_add_func_int16_t_s_s(p_54, 5))
            {
                unsigned short l_374 = 0xEDD3L;
                int l_375 = 8L;
                for (l_365 = (-8); (l_365 == 50); l_365 = safe_add_func_int32_t_s_s(l_365, 7))
                {
                    unsigned l_384[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_384[i] = 0x070A53DDL;
                    for (g_108 = 0; (g_108 >= 28); ++g_108)
                    {
                        l_375 = (func_59(l_374) || l_331);
                        g_110[6] = 0xD82F6D4AL;
                        if (g_177)
                            break;
                    }
                    l_385 = (safe_rshift_func_int16_t_s_u(((func_59((65533UL < ((0xF7L & (func_79(p_54, l_365) >= (func_59(g_2) | 0x6725A7C1L))) || (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((func_70(((safe_mod_func_int8_t_s_s((((~(0x5B6BL == g_4[4])) ^ 0x0AL) == 0xE34CL), g_2)) ^ l_365), l_384[0], p_55, g_108) < g_2), p_54)), 9UL))))) <= 0UL) >= l_365), 9));
                }
                for (l_374 = 0; (l_374 == 50); l_374 = safe_add_func_int16_t_s_s(l_374, 9))
                {
                    l_385 = p_52;
                    g_110[5] = l_374;
                }
            }
            g_390 = (safe_rshift_func_int8_t_s_s(p_52, g_110[6]));
            for (l_345 = 6; (l_345 >= 0); l_345 -= 1)
            {
                int l_430 = 2L;
                int i;
                if (((safe_mod_func_uint16_t_u_u(g_110[l_345], ((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((((func_59(((g_225 ^ p_51) != (safe_mul_func_uint16_t_u_u((g_110[6] || 255UL), func_59(g_156))))) != (~0x54L)) | g_110[5]) || p_53) ^ 5L), 4294967291UL)), p_54)), (-1L))) || g_177))) < l_331))
                {
                    l_401[1][2][1] = g_4[1];
                    g_110[l_345] = ((-9L) >= l_331);
                    if (p_52)
                        continue;
                    if (p_52)
                    {
                        char l_416 = 0x07L;
                        if (p_52)
                            break;
                        l_331 = ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((l_365 & (safe_mod_func_uint8_t_u_u(0x40L, 0xF6L))) == (((((safe_rshift_func_int16_t_s_u(p_55, p_55)) ^ 0x9EFCL) | ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_51, (0xD7ED5DD3L ^ (func_70(l_401[1][1][1], l_416, g_313, p_54) != 0x36AA9CF4L)))), 6)) != p_54)) ^ 0xADL) & p_51)), g_390)), 0x56L)), 65531UL)) <= l_416);
                        g_110[6] = g_313;
                    }
                    else
                    {
                        l_331 = p_55;
                    }
                }
                else
                {
                    short l_421 = (-9L);
                    short l_425 = 0x32BCL;
                    g_110[4] = 0xDF6A90D4L;
                    for (l_344 = 0; l_344 < 7; l_344 += 1)
                    {
                        g_110[l_344] = 0x261428B2L;
                    }
                    if (g_110[3])
                    {
                        unsigned l_422 = 4294967292UL;
                        unsigned l_427[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_427[i] = 4294967288UL;
                        l_426[3][1] = ((safe_sub_func_int32_t_s_s(func_79(g_110[6], ((safe_add_func_uint8_t_u_u(0x15L, (g_4[0] < l_421))) || (0xF69EL >= func_59(l_422)))), (safe_sub_func_uint32_t_u_u(4UL, l_421)))) >= l_425);
                        g_110[0] = ((p_55 < func_70(p_52, l_427[1], l_344, g_110[l_345])) != (g_2 ^ g_177));
                    }
                    else
                    {
                        l_426[3][1] = (l_344 || (safe_rshift_func_int16_t_s_u((func_79(l_385, p_51) == (g_225 < (p_55 >= p_51))), l_430)));
                        if (p_52)
                            break;
                        return p_54;
                    }
                }
            }
            if ((g_156 ^ p_52))
            {
                if ((safe_sub_func_int16_t_s_s((p_54 & p_53), p_53)))
                {
                    g_110[6] = func_59(func_70(l_401[1][6][2], p_55, g_390, g_2));
                }
                else
                {
                    l_426[7][0] = p_54;
                }
                l_385 = func_79(l_365, ((safe_add_func_int16_t_s_s(g_4[3], p_52)) & (p_52 <= (safe_rshift_func_uint8_t_u_s(((0x86092011L < (+(safe_rshift_func_int16_t_s_s((p_53 > 0x1E66L), l_401[3][1][0])))) > (g_390 != 0x2E3AF947L)), g_177)))));
            }
            else
            {
                short l_449 = (-2L);
                volatile int l_466 = 0x43B03578L;
                if (g_313)
                {
                    int l_439 = 2L;
                    int l_443 = 0xC670B72BL;
                    if (func_79(g_4[2], l_439))
                    {
                        unsigned short l_442 = 65534UL;
                        g_110[6] = ((safe_mul_func_int16_t_s_s(l_344, (l_439 && 0xA6AD0565L))) || (l_426[3][1] ^ g_110[6]));
                        g_110[4] = func_59(l_442);
                    }
                    else
                    {
                        l_443 = p_53;
                        g_110[6] = (safe_sub_func_int32_t_s_s(((g_110[1] ^ (safe_lshift_func_uint16_t_u_s(0x5E87L, g_390))) && (g_156 > ((g_313 < l_365) > l_365))), (l_345 >= g_110[6])));
                    }
                    for (l_385 = 0; (l_385 <= 2); l_385 += 1)
                    {
                        int i;
                        g_110[(l_385 + 2)] = g_110[(l_385 + 3)];
                        l_460 = ((safe_unary_minus_func_int16_t_s(l_449)) == (((safe_mul_func_uint16_t_u_u(func_59(l_449), (safe_rshift_func_int8_t_s_u(p_54, 2)))) | g_177) <= (p_54 == (safe_mul_func_int8_t_s_s(l_426[3][1], ((func_59((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(g_390, l_449)) ^ p_51) | p_52) < (-5L)), p_51))) == l_426[7][0]) || g_156))))));
                        return l_345;
                    }
                }
                else
                {
                    const short l_461 = 0x9911L;
                    int l_469[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_469[i] = 0x4498AD12L;
                    l_462 = l_461;
                    for (l_462 = 0; (l_462 > 4); ++l_462)
                    {
                        volatile int l_465 = (-1L);
                        l_465 = g_156;
                        l_466 = g_156;
                        l_469[0] = ((safe_rshift_func_uint16_t_u_u(l_330, 5)) || 0UL);
                        g_110[0] = func_59(p_55);
                    }
                    for (l_365 = 0; (l_365 <= 2); l_365 += 1)
                    {
                        l_331 = 9L;
                        l_460 = (safe_rshift_func_uint16_t_u_u(p_55, (p_55 < (g_108 >= p_51))));
                    }
                }
                l_345 = p_53;
                g_110[6] = (safe_sub_func_uint16_t_u_u((((func_70(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_70(l_466, l_462, p_51, ((0x94168BD1L == 0xD33CDD11L) > (!g_4[2]))), ((-5L) >= p_51))), g_177)), l_449)) <= g_390), l_344, p_52, l_426[3][1]) | g_2) | 0x09F1L) < 0xC7L), 0xFE9FL));
                if (((((((safe_mul_func_uint16_t_u_u((1UL | (p_53 | (((~l_466) <= (safe_sub_func_uint8_t_u_u((((p_51 ^ (safe_mod_func_uint8_t_u_u(l_401[3][0][2], (safe_rshift_func_uint8_t_u_s((g_108 && (((safe_lshift_func_uint16_t_u_s(l_460, g_177)) > g_225) > g_2)), p_53))))) >= 0x37F6B411L) & 0L), l_401[7][3][2]))) >= p_54))), 0xA6E5L)) & g_108) > g_108) < 0xFBBBDF6CL) | l_426[5][2]) == g_177))
                {
                    unsigned short l_496[3][4] = {{65535UL, 0UL, 0UL, 0UL}, {65535UL, 0UL, 0UL, 0UL}, {65535UL, 0UL, 0UL, 0UL}};
                    int l_499 = 0x7E0D27AAL;
                    int i, j;
                    g_110[6] = 0x5A8BECAAL;
                    for (l_462 = 0; (l_462 <= 2); l_462 += 1)
                    {
                        g_110[6] = ((safe_mul_func_int16_t_s_s(func_79(g_4[2], (safe_mul_func_uint16_t_u_u(l_466, func_59(l_330)))), ((-10L) >= (safe_rshift_func_uint16_t_u_u(g_225, g_2))))) | p_53);
                    }
                    l_499 = (func_70(l_496[2][2], l_496[0][1], func_59(g_110[5]), l_401[4][2][0]) > (0xEFL != (p_51 <= (safe_mod_func_uint16_t_u_u((p_53 < g_177), p_53)))));
                    if ((safe_add_func_int16_t_s_s((0L || (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(0x22ABL, (((safe_add_func_int16_t_s_s(g_390, (((safe_lshift_func_int16_t_s_s((g_108 & ((l_449 && (safe_add_func_uint8_t_u_u(func_59(((l_401[1][2][1] || func_59((g_177 ^ (safe_mul_func_int8_t_s_s(l_449, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((func_59(g_313) >= g_225) == p_55), p_55)), 13)), p_55))))))) <= g_108)), 1UL))) && 0x36BEL)), 14)) < 0L) ^ g_110[6]))) != l_499) != p_54))), (-1L)))), 0x8942L)))
                    {
                        unsigned short l_525 = 0x585FL;
                        l_525 = (func_79((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_524, p_51)), (65535UL >= g_110[0]))), (func_59(l_524) || g_2)) || (p_54 ^ g_156));
                        g_110[3] = func_70(g_110[6], (safe_add_func_uint16_t_u_u(((l_365 ^ func_59(l_449)) > (1UL != (safe_sub_func_int32_t_s_s(p_53, ((safe_mod_func_int32_t_s_s((p_52 | l_525), g_110[6])) <= 0xC6BBL))))), p_54)), l_401[1][2][1], l_524);
                    }
                    else
                    {
                        unsigned l_553 = 4294967291UL;
                        l_499 = (safe_mul_func_uint16_t_u_u(g_4[3], (safe_mul_func_uint8_t_u_u((p_54 >= (((((safe_mod_func_int8_t_s_s((0xAE1A66F6L < 1L), (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(0xB7L, 6)) > l_496[1][0]), (safe_lshift_func_uint8_t_u_u((l_499 ^ (safe_lshift_func_int8_t_s_s((0x8D9BL > (0x12AFL & g_156)), 2))), g_313)))))) >= g_2) >= g_225) >= p_55) != 0xB0L)), l_365))));
                        g_110[6] = (g_2 > (+(safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(3L, l_499)), (safe_rshift_func_int16_t_s_u(p_54, (safe_unary_minus_func_int8_t_s(l_401[1][2][1]))))))));
                        g_110[2] = (-1L);
                        l_466 = l_553;
                    }
                }
                else
                {
                    g_554 = g_390;
                    l_466 = ((p_51 > (((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(g_4[1], l_365)), (((l_462 & ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((func_70((((5L < (func_59(g_108) > (2UL ^ (0x27EEA4D0L != 0x395DEFACL)))) <= g_313) ^ (-1L)), g_562, g_177, l_563) ^ p_52))), g_554)) != l_460)) < p_52) || 0L))) && p_52) > (-1L))) > l_426[3][1]);
                    l_460 = (0xB8239E3EL ^ p_54);
                    if ((safe_add_func_int32_t_s_s(p_54, 0x05A303A2L)))
                    {
                        unsigned l_568 = 1UL;
                        int l_584[5] = {1L, 0x72799BA1L, 1L, 0x72799BA1L, 1L};
                        int l_587 = 0xB23EF851L;
                        int i;
                        l_584[1] = ((safe_lshift_func_uint8_t_u_s((l_344 >= ((((func_70(p_53, ((g_177 <= l_568) ^ ((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_54, (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((((p_52 | p_55) & 3L) || g_110[6]) < l_568), g_562)), g_225)), g_554)), g_177)))), p_51)), l_583)) && p_52)), l_460, g_225) < 0x60DBL) != 0UL) < l_568) ^ 1UL)), 3)) > g_4[0]);
                        l_426[3][1] = (safe_lshift_func_int8_t_s_u(l_587, (safe_rshift_func_uint16_t_u_u((g_313 >= (safe_add_func_int32_t_s_s(1L, ((l_460 ^ l_466) > (((p_51 < 0x7E5432FFL) < func_59(g_110[6])) < p_52))))), 14))));
                    }
                    else
                    {
                        l_426[3][0] = (p_51 && 0x3F53L);
                        g_110[2] = p_52;
                        l_426[3][1] = (g_110[0] < (safe_lshift_func_uint8_t_u_u(g_110[6], 2)));
                    }
                }
            }
        }
        if ((((safe_add_func_uint8_t_u_u(0xF5L, (safe_unary_minus_func_int16_t_s((g_313 == l_345))))) && func_79(l_344, l_524)) && ((safe_mul_func_int16_t_s_s((g_313 >= ((safe_add_func_int8_t_s_s(func_59(g_390), 0x17L)) == g_2)), g_390)) < p_55)))
        {
            int l_601 = 0x22BDB292L;
            int l_610 = (-1L);
            int l_626 = 1L;
            if ((func_79(l_601, g_177) ^ l_602))
            {
                g_110[3] = (-10L);
            }
            else
            {
                unsigned l_603 = 1UL;
                l_603 = l_524;
            }
            l_626 = (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(p_53, (func_79((((((safe_rshift_func_int8_t_s_s(l_610, 3)) == (0x3FA2BA1AL && func_59(((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_390, (((g_562 && g_110[6]) & (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(func_59(l_563), func_59(((!(g_225 == p_53)) >= g_156)))), l_625)), g_562)), l_460)) == 0x0BL), p_51))) && l_345))), l_610)) & 0x2FF4L)))) ^ 0x2366L) || (-4L)) >= p_52), l_330) & l_365))) < 0xAB9A75A4L), l_602));
            for (p_55 = 0; (p_55 >= (-27)); p_55 = safe_sub_func_int8_t_s_s(p_55, 8))
            {
                g_554 = ((func_70(p_52, (safe_mul_func_int16_t_s_s(g_110[4], 1UL)), p_52, (p_54 >= p_51)) & p_53) >= (l_385 ^ p_54));
            }
        }
        else
        {
            int l_661 = 0x1CBB3539L;
            for (l_524 = (-19); (l_524 < 28); ++l_524)
            {
                unsigned short l_640 = 65535UL;
                if (p_54)
                {
                    for (p_53 = 4; (p_53 >= 0); p_53 -= 1)
                    {
                        char l_633 = 0xAFL;
                        int i;
                        g_110[p_53] = g_110[(p_53 + 1)];
                        l_345 = (((l_633 || (((p_55 == p_55) ^ g_108) != g_2)) | ((+func_59((safe_add_func_uint8_t_u_u(((((g_390 && (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(func_59(l_625), 13)) < p_53), 0))) <= 0x66L) < g_390) == l_640), 0x35L)))) && 0x5EL)) <= g_313);
                        if (p_52)
                            continue;
                        g_110[6] = 0L;
                    }
                    return g_110[6];
                }
                else
                {
                    const int l_654[1][1] = {{(-2L)}};
                    int l_662[10] = {(-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L)};
                    int i, j;
                    for (g_562 = 1; (g_562 <= 6); g_562 += 1)
                    {
                        int i;
                        g_110[g_562] = (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((g_110[g_562] && l_625), 5)) ^ (l_640 & ((!(p_51 < g_110[6])) ^ (0L <= func_59(l_602))))), g_177));
                        l_662[4] = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((7L <= ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((g_110[g_562] != (0UL == ((safe_lshift_func_int8_t_s_s((func_59(((l_654[0][0] | (safe_rshift_func_int8_t_s_s(((-6L) >= 4294967295UL), 6))) | g_313)) < (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(0x2EL, 7)) || g_225), 13)) >= l_654[0][0]) != 255UL)), l_654[0][0])) < l_661))))), l_661)) == g_110[g_562])) < p_52), 0xE3F5EADFL)) & 6L), (-1L))) < p_54);
                        if (p_53)
                            break;
                        return p_55;
                    }
                }
                for (g_390 = 0; (g_390 < 51); g_390 = safe_add_func_uint8_t_u_u(g_390, 1))
                {
                    for (p_53 = 6; (p_53 >= 1); p_53 -= 1)
                    {
                        int l_667 = 1L;
                        int i;
                        g_110[p_53] = g_110[p_53];
                        l_331 = ((((func_70(g_177, ((func_79(l_460, p_51) | l_667) < (((g_562 && (g_554 != p_53)) >= g_390) < 0x05A21D2BL)), g_177, g_225) <= p_52) | p_52) >= p_55) >= 7L);
                    }
                    if (g_177)
                        continue;
                }
            }
            g_110[4] = g_108;
            l_385 = ((safe_sub_func_int16_t_s_s((p_51 && (0x08A87DFBL || 0x7D3280BEL)), p_55)) & 0x8BL);
            if ((((safe_rshift_func_int16_t_s_u((p_51 | (safe_sub_func_int16_t_s_s((-1L), (safe_rshift_func_uint16_t_u_u(l_563, 10))))), 4)) == (((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_108, l_661)), (safe_sub_func_int32_t_s_s((p_51 || ((g_562 | func_59(p_55)) & 0UL)), 0x5DFC9776L)))) == l_682[2]) == l_602)) > 1UL))
            {
                for (g_554 = 0; (g_554 == 9); g_554 = safe_add_func_uint8_t_u_u(g_554, 3))
                {
                    l_661 = l_661;
                }
            }
            else
            {
                g_110[6] = 0x8CD2DE1CL;
                if (g_4[0])
                {
                    l_661 = 0x3DDF9D1AL;
                }
                else
                {
                    return p_51;
                }
            }
        }
    }
    else
    {
        short l_685 = 0x45ECL;
        int l_686[4][6][7] = {{{0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}}, {{0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}}, {{0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}}, {{0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}, {0L, 1L, 0xA3AB3B1AL, (-1L), 0xA3AB3B1AL, 1L, 0L}}};
        int i, j, k;
        l_331 = l_685;
        l_686[2][5][6] = p_53;
        g_110[1] = (safe_lshift_func_uint8_t_u_u((+((+(p_51 && p_55)) < ((p_51 > 0x5CL) || (p_55 | p_54)))), 5));
        l_686[1][5][2] = p_52;
    }
    return p_55;
}







static char func_59(short p_60)
{
    unsigned l_329 = 0x34C236C3L;
    l_329 = g_225;
    return p_60;
}







static short func_70(int p_71, char p_72, unsigned short p_73, unsigned short p_74)
{
    short l_82 = 0x0C59L;
    int l_182 = 0xD3FA259DL;
    int l_208[9][1] = {{0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}, {0x206E1C7FL}};
    int i, j;
    g_110[6] = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((func_79(g_2, l_82) == l_82), p_72)) > (p_74 | p_73)), 0xB4L)) & 3L);
    l_182 = (func_79((((func_79(g_177, p_72) <= ((safe_mod_func_uint8_t_u_u((g_2 & p_71), p_71)) != g_177)) || (safe_mul_func_int8_t_s_s((((!8L) > (g_4[1] && 0x2AL)) ^ 0xF4L), 1UL))) & g_2), l_82) | p_74);
    for (g_108 = 2; (g_108 <= 6); g_108 += 1)
    {
        unsigned short l_314 = 65528UL;
        int i;
        if (g_110[g_108])
        {
            short l_187[1];
            const int l_202 = 0L;
            int l_204 = 1L;
            unsigned short l_265 = 0x7EBEL;
            int i;
            for (i = 0; i < 1; i++)
                l_187[i] = 0xDCBBL;
            l_187[0] = (safe_add_func_int32_t_s_s((p_74 > (safe_mul_func_int16_t_s_s(g_110[g_108], p_74))), 0x8DD124E3L));
            if (((g_156 || ((safe_sub_func_int8_t_s_s(p_71, l_187[0])) & ((safe_add_func_int32_t_s_s(g_108, 0UL)) | ((0UL && (safe_rshift_func_uint16_t_u_s(p_71, (safe_add_func_uint8_t_u_u(g_110[6], ((safe_add_func_int8_t_s_s((-3L), g_110[g_108])) >= p_73)))))) || 1L)))) | g_108))
            {
                char l_224 = (-5L);
                g_110[4] = (0xD91CL && (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(1L, 12)), g_4[4])));
                if ((0xEA3259E9L == (l_202 <= g_110[g_108])))
                {
                    const char l_203 = (-1L);
                    l_204 = l_203;
                    g_110[0] = 0xEFB1311AL;
                    if ((p_73 < (safe_mod_func_uint16_t_u_u(0x4027L, (g_110[g_108] ^ (g_110[2] || p_74))))))
                    {
                        return p_74;
                    }
                    else
                    {
                        int l_207 = 0x9A7A5F8AL;
                        l_207 = p_73;
                        l_182 = l_204;
                        if (l_208[4][0])
                            continue;
                    }
                }
                else
                {
                    short l_223 = 1L;
                    int l_240 = 0x21AF0394L;
                    if (((safe_add_func_int8_t_s_s(p_72, (p_74 | (((!(safe_lshift_func_int8_t_s_u(g_177, 0))) ^ p_73) & p_72)))) <= ((safe_sub_func_int8_t_s_s(g_4[4], ((safe_add_func_uint32_t_u_u(p_72, ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_2, (l_223 != p_72))), p_74)), g_177)) | l_82))) <= g_110[g_108]))) && 1UL)))
                    {
                        unsigned char l_238 = 0x3CL;
                        int l_239 = (-7L);
                        l_204 = l_224;
                        g_110[g_108] = (p_74 ^ (g_225 & ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_71 | (g_108 != ((safe_sub_func_uint32_t_u_u((p_74 >= 0xA9D2L), (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((l_187[0] > ((0x4220L >= (safe_add_func_uint16_t_u_u(p_74, l_238))) > 0L)), g_225)) && g_108), p_74)))) | 0UL))), 7UL)), 0xEBL)) == p_72)));
                        l_239 = (-10L);
                    }
                    else
                    {
                        l_240 = l_204;
                    }
                    l_204 = p_72;
                    return l_224;
                }
            }
            else
            {
                char l_250[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_250[i] = 0xD3L;
                for (p_74 = 0; (p_74 != 9); ++p_74)
                {
                    unsigned short l_249 = 0UL;
                    int l_253 = 0x26139D5EL;
                    for (g_225 = 0; (g_225 <= 0); g_225 += 1)
                    {
                        int i;
                        l_253 = ((g_110[g_108] | (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((g_110[(g_225 + 5)] >= 0xA7L) <= ((safe_lshift_func_int16_t_s_u(l_187[g_225], l_249)) || p_73)), (l_250[0] & (safe_add_func_int32_t_s_s((0xD3E4L || (+0L)), l_249))))), 2UL))) > p_73);
                        return p_73;
                    }
                    if (p_72)
                    {
                        unsigned char l_254 = 0xCEL;
                        l_254 = 0x019A0691L;
                        if (p_74)
                            break;
                        if (p_72)
                            continue;
                    }
                    else
                    {
                        const unsigned char l_268[6][1] = {{250UL}, {250UL}, {250UL}, {250UL}, {250UL}, {250UL}};
                        int i, j;
                        g_110[5] = (g_156 <= (0xE4B8L || (p_72 || (0x00E7A821L == (((p_71 < g_110[6]) == (safe_sub_func_uint32_t_u_u(p_73, ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(0x6E75L, g_177)), 0x9B3E444BL)) > l_208[3][0])))) | 0L)))));
                        g_110[6] = l_250[0];
                        if (g_156)
                            break;
                        g_110[2] = (g_110[4] >= (g_108 <= ((((g_2 > (((g_177 & (4294967295UL >= (safe_rshift_func_int8_t_s_s(0x0CL, (g_225 > l_265))))) || (safe_rshift_func_int8_t_s_s(((l_250[0] >= l_187[0]) && g_2), l_82))) <= g_2)) & g_110[4]) <= 0xADC50922L) < l_268[0][0])));
                    }
                }
                for (l_82 = 0; (l_82 >= 0); l_82 -= 1)
                {
                    int i;
                    g_110[6] = (safe_rshift_func_uint16_t_u_s((0xF6050ABAL != (254UL <= ((l_250[l_82] <= (p_74 != (p_72 | (l_208[4][0] && (safe_lshift_func_uint8_t_u_u(p_72, (l_250[l_82] == 0x3C81L))))))) < g_108))), 13));
                    l_182 = ((safe_mul_func_int16_t_s_s(0x4312L, (safe_mul_func_uint16_t_u_u(g_108, (-2L))))) & p_71);
                }
                if (g_156)
                    continue;
                if ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(l_208[7][0], ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(g_110[g_108], g_2)) | p_72), 0)) ^ 0x3678L))) ^ (((safe_add_func_uint32_t_u_u((g_108 ^ (((safe_mod_func_int32_t_s_s(p_74, (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_177, l_187[0])), p_72)))) < 65526UL) > 0xB4L)), 4294967293UL)) | l_250[0]) <= p_73)) || 0L), 0xFFD3L)), 0)), p_73)))
                {
                    if (((safe_add_func_int32_t_s_s(g_110[4], g_110[5])) || g_177))
                    {
                        l_182 = g_177;
                        l_182 = g_2;
                        if (p_71)
                            break;
                    }
                    else
                    {
                        char l_305 = 0x60L;
                        l_305 = (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((g_225 != 0xFE2BL), (safe_rshift_func_int8_t_s_s((p_73 <= l_250[0]), 7)))), 0UL));
                    }
                    for (p_73 = 26; (p_73 >= 50); p_73 = safe_add_func_uint32_t_u_u(p_73, 2))
                    {
                        int l_308 = 0xBBE95A31L;
                        l_308 = p_72;
                        g_110[6] = (safe_lshift_func_uint8_t_u_u(0xA3L, (1L && g_108)));
                        l_308 = 0x546EA2C2L;
                        g_313 = (g_4[0] & (safe_rshift_func_int8_t_s_s(p_73, 4)));
                    }
                }
                else
                {
                    int l_317 = 0x0E80A90BL;
                    if (p_71)
                    {
                        l_314 = (p_74 < 0x8BL);
                        if (l_182)
                            break;
                    }
                    else
                    {
                        l_317 = ((safe_mod_func_uint8_t_u_u(l_187[0], l_208[3][0])) < p_71);
                    }
                    l_317 = g_313;
                    if (g_177)
                    {
                        g_110[6] = (safe_lshift_func_int8_t_s_u(g_110[g_108], 7));
                    }
                    else
                    {
                        int l_320 = 0x4BB5C3AAL;
                        l_204 = l_320;
                    }
                    l_317 = (safe_add_func_uint16_t_u_u(0x2F56L, p_71));
                }
            }
            l_204 = ((0x86530417L < ((g_2 != (0x4FL == (l_208[4][0] & (safe_sub_func_uint8_t_u_u(p_72, (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((0x70D8E6E7L || ((((p_74 <= 1UL) & l_202) && 0x96L) | 0x5A496925L)), p_73)), 5))))))) > l_182)) || 0x6AL);
            if (g_2)
                break;
        }
        else
        {
            g_110[6] = g_110[g_108];
            g_110[g_108] = p_74;
        }
    }
    return p_74;
}







static unsigned char func_79(unsigned char p_80, short p_81)
{
    unsigned l_83[3];
    int l_116[4];
    int i;
    for (i = 0; i < 3; i++)
        l_83[i] = 4294967295UL;
    for (i = 0; i < 4; i++)
        l_116[i] = 0x4C91E547L;
    for (p_81 = 2; (p_81 >= 0); p_81 -= 1)
    {
        int l_143 = 8L;
        unsigned l_155 = 0x814A766FL;
        int i;
        if (((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(l_83[p_81])), (((g_4[2] & ((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_4[4], ((safe_lshift_func_int8_t_s_u(g_4[2], 5)) == 253UL))), (safe_mod_func_int16_t_s_s(g_2, (l_83[p_81] && (((safe_mod_func_int8_t_s_s(l_83[p_81], (g_2 && 0xF216L))) & p_80) <= l_83[p_81])))))) >= g_4[3]) >= p_81) && 0x33L)) == g_2) == g_4[4]))) ^ p_81))
        {
            unsigned l_107 = 0xC4FF8C8FL;
            if ((safe_add_func_int32_t_s_s((1L <= (((l_83[p_81] & ((safe_lshift_func_uint8_t_u_u(0x23L, 0)) & (safe_mul_func_int16_t_s_s(8L, g_2)))) < g_4[3]) <= ((safe_mul_func_int8_t_s_s(g_4[0], (safe_sub_func_uint16_t_u_u((0xA7AA087AL == (p_81 || p_80)), l_107)))) ^ 0x3BDBB176L))), g_2)))
            {
                if (g_4[1])
                {
                    g_108 = (p_81 <= g_4[4]);
                    return p_81;
                }
                else
                {
                    short l_109 = (-2L);
                    g_110[6] = l_109;
                    if (g_108)
                    {
                        g_110[6] = p_81;
                        if (p_80)
                            continue;
                        if (g_110[6])
                            continue;
                        if (p_81)
                            break;
                    }
                    else
                    {
                        unsigned l_115 = 0xDD5005B5L;
                        l_116[1] = (safe_sub_func_int16_t_s_s((l_83[1] != (safe_lshift_func_uint8_t_u_s(l_115, 1))), l_109));
                        g_110[6] = l_115;
                    }
                    for (g_108 = 0; (g_108 <= 2); g_108 += 1)
                    {
                        unsigned l_127 = 0xBE94C56FL;
                        if (l_107)
                            break;
                        g_110[6] = ((1L && ((((0L ^ ((safe_lshift_func_int16_t_s_u(p_80, 8)) | (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(g_110[1], 1)) < g_4[0]), p_80)), 3)))) < p_80) >= (safe_mod_func_int8_t_s_s(l_127, (g_2 && p_81)))) > 0xD7248D74L)) || g_108);
                        return g_2;
                    }
                }
            }
            else
            {
                short l_142[6] = {(-3L), (-1L), (-3L), (-1L), (-3L), (-1L)};
                int i;
                g_110[5] = (l_116[1] > ((((((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(p_81, l_83[p_81])), 12)) || (safe_unary_minus_func_uint8_t_u((l_83[p_81] || ((safe_mul_func_int8_t_s_s(p_81, (safe_unary_minus_func_int8_t_s(g_108)))) ^ (safe_lshift_func_int16_t_s_s(l_116[3], (((g_110[1] == (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(g_110[6], p_81)), 3))) | 8UL) ^ l_142[1])))))))) == g_4[4]) | 0x4E92L) > p_81) & (-1L)));
            }
            l_143 = g_4[2];
        }
        else
        {
            char l_150 = 0xA0L;
            int l_157 = 0x4424053BL;
            l_157 = (l_83[p_81] ^ ((safe_rshift_func_int16_t_s_u(p_81, ((p_81 > g_110[6]) != (((safe_mod_func_int16_t_s_s((-1L), (safe_mod_func_uint16_t_u_u((l_150 | (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_83[1] | (-5L)), g_4[1])), g_110[0]))), 0xBC82L)))) > 9UL) | l_155)))) & g_156));
            l_143 = (((0UL ^ l_116[1]) & (0x630FA3D1L != l_83[0])) >= 0xD4L);
            for (p_80 = 0; p_80 < 7; p_80 += 1)
            {
                g_110[p_80] = 0L;
            }
        }
    }
    if (g_2)
    {
        unsigned char l_164 = 0x98L;
        int l_165 = (-1L);
        l_116[2] = (l_83[1] ^ p_80);
        l_165 = (((((!0x13L) == (65535UL & ((safe_mul_func_uint16_t_u_u((g_4[1] & ((safe_mod_func_uint32_t_u_u(((((+g_156) > (safe_sub_func_int32_t_s_s(g_110[6], (g_2 != 0x69A9L)))) || g_4[3]) && (l_164 & l_83[1])), g_110[3])) <= p_81)), p_80)) ^ 0x99B4L))) < l_164) < g_110[6]) || p_80);
    }
    else
    {
        return g_108;
    }
    l_116[1] = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(l_83[2], (0xF3L >= ((safe_lshift_func_int8_t_s_u((-4L), 7)) && g_4[1])))) == (safe_sub_func_uint16_t_u_u((!(p_81 >= p_80)), (p_80 == g_110[6])))) || 0xEDL), 10)), 4));
    if (g_108)
    {
        int l_176[5] = {0xF5260BB3L, 0L, 0xF5260BB3L, 0L, 0xF5260BB3L};
        int i;
        l_176[0] = p_80;
        l_176[2] = l_176[0];
    }
    else
    {
        return p_80;
    }
    return l_83[1];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_896[i][j][k], "g_896[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1048[i][j], "g_1048[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1488[i], "g_1488[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1527, "g_1527", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    transparent_crc(g_1745, "g_1745", print_hash_value);
    transparent_crc(g_1749, "g_1749", print_hash_value);
    transparent_crc(g_1938, "g_1938", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
