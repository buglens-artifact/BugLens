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



static const unsigned char g_5 = 4UL;
static int g_48 = (-1L);
static int g_64[6] = {0xA684085EL, 0xA684085EL, 0xA684085EL, 0xA684085EL, 0xA684085EL, 0xA684085EL};
static const int *g_132 = &g_64[4];
static volatile int g_173 = 0x9DE42899L;
static unsigned char g_183 = 0x15L;
static int g_234 = 9L;
static int **g_266 = (void*)0;
static int ***g_265 = &g_266;
static volatile short g_348 = 0xB8DEL;
static int *g_373 = &g_64[4];
static int g_442 = (-1L);
static volatile unsigned char g_445 = 1UL;
static volatile int *g_534 = &g_173;
static unsigned char g_758 = 0x6BL;
static volatile unsigned g_777 = 2UL;
static unsigned char g_853 = 0x94L;
static short g_1118 = (-1L);
static volatile unsigned g_1136 = 0x52C0B92DL;
static volatile int g_1224[5] = {0x67AAF74FL, 0x67AAF74FL, 0x67AAF74FL, 0x67AAF74FL, 0x67AAF74FL};
static volatile int *g_1223 = &g_1224[3];
static int g_1341 = 0xB38A767BL;
static unsigned char g_1377[9] = {0x06L, 0x06L, 0x06L, 0x06L, 0x06L, 0x06L, 0x06L, 0x06L, 0x06L};
static unsigned short g_1488[2][8][9] = {{{0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}}, {{0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}, {0xE2D1L, 0x3714L, 0x66B8L, 0x7759L, 3UL, 0x26D8L, 0x1250L, 1UL, 65535UL}}};



static unsigned short func_1(void);
static int func_2(char p_3, unsigned short p_4);
static const unsigned short func_7(int p_8, const short p_9, unsigned char p_10);
static int func_15(unsigned p_16, unsigned p_17);
static unsigned func_18(int p_19, short p_20, const short p_21);
static short func_22(int p_23, char p_24);
static int func_25(unsigned p_26);
static short func_30(int p_31, unsigned short p_32, unsigned p_33, unsigned short p_34, unsigned p_35);
static int func_36(unsigned char p_37);
static int * func_38(unsigned char p_39, unsigned char p_40, unsigned short p_41);
static unsigned short func_1(void)
{
    int l_6 = (-1L);
    short l_1353 = 0xE4E4L;
    int l_1354 = 0xA4C3EC3BL;
    int *l_1363 = &g_64[5];
    short l_1370 = (-1L);
    unsigned char l_1434[7] = {5UL, 5UL, 0x4EL, 5UL, 5UL, 0x4EL, 5UL};
    int l_1437 = (-4L);
    int l_1441 = 1L;
    int l_1443[10][10][2] = {{{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}, {{0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}, {0x94A7E752L, 0x7987BBBCL}}};
    int l_1481 = 0xE9405746L;
    int ***l_1512 = &g_266;
    int i, j, k;
    (*g_1223) = func_2((g_5 > (((l_6 & func_7((safe_sub_func_uint16_t_u_u(l_6, g_5)), (safe_add_func_uint16_t_u_u(l_6, (func_15((0xF17E2F9DL < l_6), func_18(g_5, func_22((0xB288586FL < 9UL), g_5), g_348)) == l_6))), g_5)) >= (-1L)) | 0x0002L)), l_6);
    if ((0L ^ g_173))
    {
        int l_1337 = 0xEF3FE73FL;
        int l_1402 = (-9L);
        if (l_1337)
        {
            int *l_1340 = &g_1341;
            for (g_48 = 0; (g_48 < (-11)); g_48 = safe_sub_func_int16_t_s_s(g_48, 6))
            {
                if ((*g_1223))
                    break;
            }
            (*l_1340) &= func_22(l_1337, func_15(g_1136, l_1337));
            l_1354 |= ((safe_lshift_func_uint16_t_u_u(((((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_6, 8UL)), (g_234 && (((g_48 != (-1L)) | (func_2((safe_unary_minus_func_int32_t_s(0x7E468766L)), (&g_266 == (void*)0)) || g_173)) < 0UL)))), 0x8B4A8977L)) ^ l_1353) && (*l_1340)) || l_6), 13)) >= 0x7BDEL);
        }
        else
        {
            char l_1371[3];
            int l_1375 = (-5L);
            int l_1376 = (-1L);
            const int *l_1386 = &l_1354;
            const int **l_1387 = (void*)0;
            const int **l_1388 = &g_132;
            unsigned char l_1410 = 5UL;
            int i;
            for (i = 0; i < 3; i++)
                l_1371[i] = (-7L);
            for (g_234 = 13; (g_234 >= (-9)); g_234 = safe_sub_func_uint8_t_u_u(g_234, 8))
            {
                int *l_1374[3][3] = {{&g_64[1], &g_64[1], &g_64[1]}, {&g_64[1], &g_64[1], &g_64[1]}, {&g_64[1], &g_64[1], &g_64[1]}};
                int **l_1385[2][1][3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1385[i][j][k] = &l_1374[1][1];
                    }
                }
                if (((g_1341 >= (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((l_1363 != &l_1337) >= 0x74L) >= ((safe_sub_func_uint16_t_u_u((g_64[1] & ((*g_265) != (void*)0)), func_22((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x917AC313L, (g_64[1] & (*g_1223)))), g_64[4])), g_48))) <= 0xA1BED8C5L)), 0L)), 0xC4L)), l_1337))) && l_1370))
                {
                    if (l_1371[1])
                        break;
                    for (g_442 = 8; (g_442 == 1); g_442 = safe_sub_func_uint16_t_u_u(g_442, 1))
                    {
                        l_1374[1][2] = &l_1337;
                    }
                    ++g_1377[3];
                }
                else
                {
                    if ((*g_1223))
                        break;
                    for (l_1376 = 8; (l_1376 >= 0); l_1376 -= 1)
                    {
                        int i;
                        return g_1377[l_1376];
                    }
                    for (l_1337 = 0; (l_1337 <= 5); l_1337 += 1)
                    {
                        int i;
                        (*l_1363) = g_1377[(l_1337 + 2)];
                        (*l_1363) = (safe_unary_minus_func_int8_t_s(g_64[l_1337]));
                    }
                }
                for (g_758 = 0; (g_758 > 36); ++g_758)
                {
                    for (g_442 = 0; (g_442 <= (-10)); g_442--)
                    {
                        (*g_534) = (g_1136 == l_1375);
                    }
                    (*g_534) = ((void*)0 == &g_266);
                }
                g_373 = l_1374[1][2];
            }
            (*l_1388) = l_1386;
            for (g_758 = 3; (g_758 > 57); g_758++)
            {
                unsigned l_1391 = 0UL;
                const int *l_1403 = &g_1341;
                unsigned l_1407 = 0xE978066EL;
                if (((g_348 | l_1391) <= (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*g_265) == (*g_265)), 0xD1L)), (((l_1337 < (g_1118 & (safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_442, (-1L))), 0x19B8CEEFL)))) & (*l_1363)) >= g_853)))))
                {
                    for (l_1337 = 0; (l_1337 <= (-7)); l_1337 = safe_sub_func_uint32_t_u_u(l_1337, 9))
                    {
                        l_1402 = (-1L);
                        return l_1391;
                    }
                    (*l_1388) = l_1403;
                }
                else
                {
                    (*g_1223) = (*g_1223);
                    if ((*g_534))
                        continue;
                    if ((*g_1223))
                    {
                        return g_1224[4];
                    }
                    else
                    {
                        int *l_1404 = &l_1376;
                        int *l_1405 = (void*)0;
                        int *l_1406[8] = {&g_64[1], &l_1402, &g_64[1], &l_1402, &g_64[1], &l_1402, &g_64[1], &l_1402};
                        int i;
                        --l_1407;
                        if (l_1410)
                            break;
                    }
                }
                l_1337 = (4UL > (*g_1223));
                (*l_1388) = (*l_1388);
            }
        }
        return g_48;
    }
    else
    {
        int l_1420[2];
        int *l_1435[5][4][10] = {{{&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}}, {{&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}}, {{&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}}, {{&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}}, {{&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}, {&g_1341, &g_1341, &g_1341, (void*)0, &g_1341, &l_1354, &g_64[1], &l_1354, &g_1341, (void*)0}}};
        unsigned l_1452 = 0xD0B2B536L;
        int *l_1499 = (void*)0;
        char l_1510 = 0x1FL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1420[i] = 0xA977B5D8L;
        if ((safe_add_func_uint32_t_u_u(g_64[2], (*l_1363))))
        {
            unsigned l_1415 = 0x9F7AC488L;
            int l_1436 = 0x10FE5C7BL;
            int l_1438 = (-1L);
            int l_1439 = 0x6EABAE9EL;
            int l_1440 = 0xAB237153L;
            int l_1442 = 0xAF47614DL;
            int l_1444 = 0x7957BD64L;
            int l_1445 = 0x6BAD342AL;
            int l_1446 = 0xB12FC04FL;
            int l_1447 = 0xB5AAE65FL;
            int l_1448 = 0x5772DC98L;
            int l_1449 = 0xAD497C0EL;
            int l_1450 = (-1L);
            int l_1451[6] = {0xBE6B154DL, 0xBE6B154DL, 0x2E68204DL, 0xBE6B154DL, 0xBE6B154DL, 0x2E68204DL};
            int i;
            for (l_1370 = 23; (l_1370 <= 11); --l_1370)
            {
                (*g_534) = l_1415;
            }
            l_1363 = l_1435[0][2][6];
            l_1452--;
        }
        else
        {
            int *l_1455 = &l_1443[8][5][0];
            int l_1463 = 1L;
            unsigned l_1464 = 4294967295UL;
            int *l_1468 = &g_64[3];
            int l_1486 = (-1L);
            int *l_1491[8][3] = {{&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}, {&l_1443[1][9][0], &l_1354, &l_1443[1][9][0]}};
            int i, j;
            if ((*g_534))
            {
                unsigned l_1457 = 1UL;
                int *l_1460 = &l_1437;
                int l_1461 = 0x56390BA9L;
                int l_1462[10] = {(-9L), 0xCEFD10DEL, (-9L), 0xCEFD10DEL, (-9L), 0xCEFD10DEL, (-9L), 0xCEFD10DEL, (-9L), 0xCEFD10DEL};
                short l_1480[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_1480[i] = 1L;
                for (l_1437 = 3; (l_1437 >= 0); l_1437 -= 1)
                {
                    short l_1456[1][5] = {{7L, (-1L), 7L, (-1L), 7L}};
                    int i, j;
                    for (g_234 = 0; (g_234 <= 3); g_234 += 1)
                    {
                        l_1455 = l_1455;
                        (*g_1223) ^= 7L;
                        if ((*g_1223))
                            continue;
                    }
                    if ((*l_1455))
                    {
                        if (l_1456[0][0])
                            break;
                        if (l_1457)
                            break;
                    }
                    else
                    {
                        return g_1341;
                    }
                    for (l_1354 = 3; (l_1354 >= 0); l_1354 -= 1)
                    {
                        (*g_534) = (safe_add_func_uint16_t_u_u((*l_1363), g_853));
                    }
                    for (g_758 = 0; (g_758 <= 3); g_758 += 1)
                    {
                        (*g_1223) &= ((*l_1455) | g_183);
                        return g_64[0];
                    }
                }
                l_1435[0][1][8] = l_1460;
                l_1464--;
                for (g_1341 = 0; (g_1341 <= 1); g_1341 += 1)
                {
                    int **l_1467[5][10] = {{&l_1460, &l_1460, &l_1455, &l_1460, &l_1460, &g_373, &l_1435[4][0][5], &l_1460, &l_1455, &l_1460}, {&l_1460, &l_1460, &l_1455, &l_1460, &l_1460, &g_373, &l_1435[4][0][5], &l_1460, &l_1455, &l_1460}, {&l_1460, &l_1460, &l_1455, &l_1460, &l_1460, &g_373, &l_1435[4][0][5], &l_1460, &l_1455, &l_1460}, {&l_1460, &l_1460, &l_1455, &l_1460, &l_1460, &g_373, &l_1435[4][0][5], &l_1460, &l_1455, &l_1460}, {&l_1460, &l_1460, &l_1455, &l_1460, &l_1460, &g_373, &l_1435[4][0][5], &l_1460, &l_1455, &l_1460}};
                    int i, j;
                    l_1468 = &l_1443[6][3][0];
                    (*l_1468) = (*l_1468);
                    (*l_1363) = 0x5CEFD7D6L;
                    (*l_1460) = (*g_1223);
                    for (l_6 = 0; (l_6 <= 1); l_6 += 1)
                    {
                        unsigned char l_1469 = 250UL;
                        unsigned l_1473 = 4294967295UL;
                        int l_1482 = 0x506FA8F7L;
                        int l_1483 = 0xB401C23BL;
                        int l_1484 = 0x63A40C92L;
                        int l_1485 = 0L;
                        int l_1487 = (-10L);
                        int *l_1492 = &l_1461;
                        g_373 = &g_1341;
                        g_1488[1][5][1]++;
                        g_373 = l_1491[4][1];
                        l_1492 = (void*)0;
                    }
                }
            }
            else
            {
                unsigned short l_1500 = 0x54EAL;
                int l_1505 = (-1L);
                int *l_1519 = &g_1341;
                for (l_1354 = 0; (l_1354 != (-5)); l_1354 = safe_sub_func_int8_t_s_s(l_1354, 4))
                {
                    for (l_1464 = 20; (l_1464 >= 26); ++l_1464)
                    {
                        return g_1118;
                    }
                }
                for (l_1353 = 27; (l_1353 < 27); l_1353 = safe_add_func_int8_t_s_s(l_1353, 8))
                {
                    (*g_534) = (*l_1363);
                    (*l_1468) = 4L;
                }
                if ((l_1435[0][2][6] == l_1499))
                {
                    ++l_1500;
                    for (l_1441 = (-6); (l_1441 <= 7); l_1441 = safe_add_func_int32_t_s_s(l_1441, 7))
                    {
                        unsigned char l_1511[8][5][4] = {{{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}, {{0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}, {0x53L, 0xA7L, 246UL, 248UL}}};
                        int * const l_1513 = (void*)0;
                        int **l_1514 = &l_1499;
                        int i, j, k;
                        if ((*g_1223))
                            break;
                        (*l_1363) ^= (-2L);
                        l_1505 = 2L;
                        (*l_1514) = l_1513;
                    }
                    for (l_1452 = 1; (l_1452 <= 6); l_1452 += 1)
                    {
                        int **l_1520 = &l_1455;
                        int i;
                        (*l_1520) = l_1519;
                    }
                }
                else
                {
                    const int **l_1529[3][3][10] = {{{&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}}, {{&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}}, {{&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, (void*)0, &g_132, (void*)0, &g_132, &g_132}}};
                    int i, j, k;
                    for (l_1452 = 0; (l_1452 <= 6); l_1452 += 1)
                    {
                        int i;
                        (*l_1455) = (*g_534);
                        if ((*g_534))
                            break;
                        (*l_1455) = (safe_sub_func_int8_t_s_s(((func_15(g_1136, g_1377[1]) < ((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_mul_func_int32_t_s_s((-5L), (l_1434[l_1452] == (l_1529[1][1][0] == (*g_265))))) != ((void*)0 == &l_1529[1][2][5])), g_1377[3])), g_1341)) | 0x7FF8L)) > g_1377[6]), (-10L)));
                    }
                }
            }
        }
        for (l_1481 = 0; (l_1481 != 28); ++l_1481)
        {
            for (g_183 = 0; g_183 < 5; g_183 += 1)
            {
                g_1224[g_183] = 0x778A13D1L;
            }
        }
    }
    return g_1377[3];
}







static int func_2(char p_3, unsigned short p_4)
{
    int *l_1290 = &g_64[1];
    const short l_1305[2][8] = {{(-1L), 0xC48DL, 1L, 0xC48DL, (-1L), 0xC48DL, 1L, 0xC48DL}, {(-1L), 0xC48DL, 1L, 0xC48DL, (-1L), 0xC48DL, 1L, 0xC48DL}};
    int l_1313 = 1L;
    int l_1315 = 0L;
    int l_1318[7] = {0x3E67B1D1L, 0x3E67B1D1L, 0x9A48680AL, 0x3E67B1D1L, 0x3E67B1D1L, 0x9A48680AL, 0x3E67B1D1L};
    int *l_1322[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_1322[i] = (void*)0;
    (*g_1223) = (safe_add_func_int32_t_s_s((l_1290 != &g_1224[3]), (*l_1290)));
    for (g_1118 = 26; (g_1118 == (-23)); --g_1118)
    {
        unsigned l_1293 = 0x1F0FC59EL;
        int l_1294 = 0xBACE4B93L;
        (*l_1290) |= 0x8AFD210FL;
        l_1294 |= ((l_1293 <= (g_758 && g_48)) || 255UL);
        l_1294 &= (((p_3 ^ 7L) != l_1293) ^ g_48);
    }
    for (p_3 = 5; (p_3 >= 0); p_3 -= 1)
    {
        int l_1309 = 0x80182EECL;
        int l_1317[1][7] = {{8L, 8L, 1L, 8L, 8L, 1L, 8L}};
        unsigned l_1319 = 0xA469AFD9L;
        int **l_1336 = (void*)0;
        int i, j;
        (*l_1290) = ((g_64[p_3] ^ (!(*l_1290))) >= (func_22(p_4, (*l_1290)) || p_3));
    }
    return (*l_1290);
}







static const unsigned short func_7(int p_8, const short p_9, unsigned char p_10)
{
    short l_1263 = (-9L);
    int l_1274 = 0L;
    int l_1275 = 0x19B657A6L;
    int ***l_1284 = (void*)0;
    unsigned l_1285 = 0xB9DBA992L;
    (*g_1223) = func_30((safe_div_func_uint8_t_u_u(g_853, (safe_div_func_int8_t_s_s((g_445 ^ 0x93E1L), 0xAAL)))), (l_1263 >= g_48), l_1263, p_9, l_1263);
    l_1275 = p_10;
    (*g_1223) = (p_9 ^ ((!((l_1274 < ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_9, (safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((l_1263 && g_5), l_1263)) & ((((&g_266 == l_1284) & g_64[3]) > p_8) & p_8)), 0xEAL)))), 2)) || g_1224[3])) & l_1285)) < 0UL));
    for (l_1275 = (-9); (l_1275 <= 13); l_1275++)
    {
        return g_758;
    }
    return g_853;
}







static int func_15(unsigned p_16, unsigned p_17)
{
    int *l_1038 = &g_64[1];
    int l_1104[7][4][1];
    unsigned l_1107 = 4294967295UL;
    unsigned l_1121[7][4][2] = {{{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}, {{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}, {{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}, {{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}, {{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}, {{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}, {{0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}, {0x429A32ABL, 0x429A32ABL}}};
    int ** const * const l_1143[6] = {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266};
    unsigned short l_1215 = 6UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_1104[i][j][k] = 3L;
        }
    }
    for (g_853 = (-20); (g_853 <= 29); g_853 = safe_add_func_int16_t_s_s(g_853, 3))
    {
        short l_1034 = 0xBEC2L;
        for (g_758 = 0; (g_758 <= 5); g_758 += 1)
        {
            int ***l_1031[3][6] = {{&g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266}, {&g_266, &g_266, &g_266, &g_266, &g_266, &g_266}};
            int i, j;
            l_1034 &= (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_1031[0][4] == (void*)0), 15)), (safe_mod_func_uint16_t_u_u((0xEFC5L < g_64[g_758]), g_445))));
        }
        for (g_48 = 0; (g_48 <= (-14)); --g_48)
        {
            return (*g_534);
        }
    }
    for (p_17 = 1; (p_17 <= 5); p_17 += 1)
    {
        const int *l_1037 = &g_64[1];
        int i;
        for (g_853 = 0; (g_853 <= 5); g_853 += 1)
        {
            int **l_1042 = &l_1038;
            const int *l_1044 = (void*)0;
            int i;
        }
        if ((0xA08AL <= g_64[p_17]))
        {
            int *l_1095 = &g_64[p_17];
            int *l_1096 = &g_64[p_17];
            int *l_1097 = (void*)0;
            int *l_1098 = &g_64[p_17];
            int *l_1099 = (void*)0;
            int *l_1100 = &g_64[p_17];
            int *l_1101 = &g_48;
            int *l_1102 = (void*)0;
            int *l_1103[2][5][8] = {{{&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}}, {{&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[0], &g_48, &g_64[1], &g_64[1], &g_64[p_17], &g_64[1], &g_64[1], &g_64[1]}}};
            short l_1105 = 0L;
            char l_1106[5];
            int l_1110 = 0xA3220810L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1106[i] = 0x45L;
            for (g_48 = 0; (g_48 <= 5); g_48 += 1)
            {
                int i;
                (*g_534) ^= g_64[g_48];
                for (p_16 = 0; (p_16 < 37); ++p_16)
                {
                    int *l_1068 = (void*)0;
                    char l_1085 = (-1L);
                }
                if (g_64[g_48])
                    break;
            }
            l_1107--;
            if ((*g_534))
            {
                int *l_1115 = &g_64[1];
                g_1118 &= (func_30((*l_1037), (l_1115 != &g_64[p_17]), (*l_1037), g_234, p_16) | (p_16 == (safe_lshift_func_uint8_t_u_u(0xD6L, 2))));
                if ((*l_1038))
                    continue;
            }
            else
            {
                (*g_534) &= (safe_lshift_func_int8_t_s_u((*l_1095), (&g_266 == (void*)0)));
            }
            if (p_17)
                continue;
        }
        else
        {
            if ((*l_1038))
                break;
            if (p_16)
                continue;
            (*l_1038) = (l_1121[2][3][1] >= g_777);
        }
        return p_17;
    }
    for (p_16 = 0; (p_16 != 4); p_16++)
    {
        int **l_1130 = &g_373;
        const int l_1152 = 0x3F66D571L;
        unsigned short l_1162 = 65533UL;
        int l_1196 = (-1L);
        int l_1197 = (-1L);
        l_1038 = &l_1104[2][3][0];
        for (l_1107 = (-24); (l_1107 == 31); ++l_1107)
        {
            const unsigned short l_1135 = 5UL;
            int l_1194 = 0x48EF89E3L;
            const int *l_1202 = &l_1104[4][0][0];
            if ((safe_mul_func_int16_t_s_s(((((*g_265) != (void*)0) != (safe_mul_func_uint8_t_u_u(g_1118, (p_17 != (p_17 < ((void*)0 == l_1130)))))) >= 0x88L), (safe_mul_func_int8_t_s_s(g_853, 0xFCL)))))
            {
                unsigned l_1151 = 0UL;
                (*l_1038) = (+(safe_lshift_func_int8_t_s_u((l_1135 ^ g_1136), 2)));
                (*l_1038) = ((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(l_1135, l_1135)) != p_16), g_173)) == 0xB0L) < 0x483E873AL) >= l_1135);
                (*l_1038) &= (safe_mod_func_int8_t_s_s((0x33L == ((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(p_16, p_17)) != ((+g_758) <= g_183)), (safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((g_777 >= (l_1151 | (l_1162 > ((safe_lshift_func_uint8_t_u_s(((((safe_mul_func_uint16_t_u_u(65535UL, l_1135)) == 0x941E11D8L) & p_17) == g_442), 7)) >= p_16)))))), 5L)))) & p_17)), g_1118));
            }
            else
            {
                short l_1175 = 0L;
                int l_1182 = 0x8FF90D65L;
                int l_1195[10] = {(-6L), (-6L), 1L, (-6L), (-6L), 1L, (-6L), (-6L), 1L, (-6L)};
                int l_1201 = 0x2832FBABL;
                int i;
                if ((g_234 <= ((safe_lshift_func_uint8_t_u_s(func_22((p_17 == l_1135), g_173), func_22(g_48, g_64[1]))) ^ func_22(l_1135, l_1135))))
                {
                    int l_1181 = 0x8944395BL;
                    if ((l_1162 != ((l_1135 > 0x0B93L) || (safe_sub_func_uint32_t_u_u(((8L | (safe_mod_func_int16_t_s_s(g_64[1], l_1135))) < (!(safe_sub_func_uint8_t_u_u((65532UL != l_1175), (safe_sub_func_uint16_t_u_u(func_22(p_17, l_1175), l_1135)))))), p_16)))))
                    {
                        int l_1185 = 0xE68C253FL;
                        unsigned short l_1190 = 65535UL;
                        (*g_534) = (((*g_265) != (void*)0) >= (((safe_unary_minus_func_int8_t_s((254UL || ((g_445 | l_1175) | (safe_add_func_uint8_t_u_u((p_16 >= p_16), p_16)))))) < 0xA7E0L) == l_1181));
                        (*g_534) ^= (+((l_1182 == (p_17 & (9UL <= (((!p_16) ^ (safe_add_func_uint8_t_u_u(p_17, ((l_1185 >= (safe_sub_func_uint8_t_u_u(l_1135, (safe_mod_func_uint32_t_u_u(l_1135, l_1190))))) < p_16)))) == l_1175)))) || (-1L)));
                    }
                    else
                    {
                        unsigned l_1193 = 4294967288UL;
                        (*g_534) = (l_1130 != (*g_265));
                        l_1194 |= ((~((((0UL | p_17) ^ ((g_348 != (safe_mul_func_int16_t_s_s(p_17, l_1193))) < l_1193)) >= p_16) | (*g_132))) | ((*g_132) == 0x8AD172A4L));
                    }
                    if (l_1181)
                        continue;
                    (*l_1130) = (void*)0;
                }
                else
                {
                    unsigned l_1198 = 0x82AE9574L;
                    ++l_1198;
                    if (l_1201)
                        break;
                }
                if (p_16)
                {
                    unsigned l_1203 = 0x4BEB3167L;
                    for (l_1194 = 1; (l_1194 >= 0); l_1194 -= 1)
                    {
                        int l_1204[1][10] = {{0L, 0xD3A3C67EL, 0L, 0xD3A3C67EL, 0L, 0xD3A3C67EL, 0L, 0xD3A3C67EL, 0L, 0xD3A3C67EL}};
                        int i, j;
                        l_1202 = &l_1152;
                        (*g_534) &= (*g_132);
                        if (l_1203)
                            continue;
                        return l_1204[0][5];
                    }
                    for (g_234 = 5; (g_234 >= 0); g_234 -= 1)
                    {
                        unsigned l_1205 = 4294967292UL;
                        int i;
                        l_1195[9] |= func_22(g_64[g_234], l_1175);
                        (*g_534) &= l_1205;
                    }
                }
                else
                {
                    unsigned l_1216 = 0xE8D92748L;
                    for (l_1196 = 0; (l_1196 != (-22)); l_1196--)
                    {
                        int ***l_1210[10] = {&l_1130, &g_266, &g_266, &g_266, &g_266, &l_1130, &g_266, &g_266, &g_266, &g_266};
                        int i;
                        (*l_1038) = (p_17 && p_16);
                        if (l_1216)
                            continue;
                    }
                }
                if (((func_30(p_16, g_1136, (g_48 == l_1175), func_22(((0xC771L != (func_22((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((&g_64[4] != &l_1194), ((((l_1182 || ((((void*)0 != g_1223) & p_16) > p_17)) <= p_16) < g_1118) || 0x7E39E284L))), 0x97L)), g_442) <= g_853)) == (-9L)), g_64[1]), g_183) | p_16) < 0xD63D4457L))
                {
                    (*l_1130) = &l_1194;
                }
                else
                {
                    unsigned l_1235[1][9] = {{0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL}};
                    const int **l_1248 = &l_1202;
                    int i, j;
                    (*l_1248) = &l_1152;
                    (*l_1248) = &l_1194;
                    for (l_1196 = 6; (l_1196 >= (-5)); l_1196--)
                    {
                        (*l_1248) = &l_1195[3];
                        return (*g_132);
                    }
                }
            }
        }
    }
    return p_16;
}







static unsigned func_18(int p_19, short p_20, const short p_21)
{
    unsigned l_1010 = 4294967286UL;
    const int **l_1024 = &g_132;
    for (p_20 = (-11); (p_20 != (-28)); --p_20)
    {
        int *l_1006 = (void*)0;
        int *l_1007 = &g_48;
        int *l_1008 = (void*)0;
        int *l_1009[3][9][7] = {{{&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}}, {{&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}}, {{&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}, {&g_64[1], &g_64[1], &g_48, (void*)0, &g_64[1], &g_48, &g_64[4]}}};
        int ** const *l_1015 = &g_266;
        int *l_1016 = &g_64[0];
        int i, j, k;
        (*g_373) = p_21;
        l_1010++;
        if (((safe_add_func_int32_t_s_s((l_1015 == &g_266), 4294967288UL)) >= ((((void*)0 != l_1016) >= 8UL) <= ((safe_add_func_int16_t_s_s(g_348, 0x8817L)) == 1UL))))
        {
            unsigned l_1019 = 0x23188F7EL;
            (*g_534) = l_1019;
            for (g_234 = 0; (g_234 > 1); g_234 = safe_add_func_int16_t_s_s(g_234, 5))
            {
                (*l_1016) = (*g_132);
                return g_758;
            }
            (*g_534) ^= 0xC78C3F93L;
        }
        else
        {
            p_19 = ((safe_lshift_func_uint8_t_u_s(p_19, 6)) < (((void*)0 == l_1024) == (0xEE0AL > g_777)));
        }
    }
    return (**l_1024);
}







static short func_22(int p_23, char p_24)
{
    unsigned short l_719 = 0x2FF9L;
    int l_757 = 0xEDC3BEECL;
    int *l_774[1];
    int ***l_828 = &g_266;
    unsigned l_859 = 4294967295UL;
    unsigned short l_899 = 0x303AL;
    unsigned short l_900 = 0x2016L;
    int *l_1002 = &g_48;
    int i;
    for (i = 0; i < 1; i++)
        l_774[i] = (void*)0;
    return (*l_1002);
}







static int func_25(unsigned p_26)
{
    unsigned char l_27 = 0xC0L;
    const short l_549 = 0L;
    int l_562[6][4][2] = {{{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}}, {{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}}, {{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}}, {{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}}, {{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}}, {{3L, 3L}, {3L, 3L}, {3L, 3L}, {3L, 3L}}};
    const int * const *l_575 = &g_132;
    unsigned l_636 = 1UL;
    int l_641[8] = {0L, 0x57256176L, 0L, 0x57256176L, 0L, 0x57256176L, 0L, 0x57256176L};
    unsigned l_686 = 0xA5534925L;
    int l_703 = 1L;
    int *l_704 = &l_562[5][0][1];
    const int **l_705 = &g_132;
    int i, j, k;
    if ((((g_5 && l_27) <= (~(safe_mul_func_int16_t_s_s(func_30(func_36(g_5), g_173, p_26, ((l_27 < p_26) == (2L | 0x566A1B3AL)), l_27), l_27)))) <= l_549))
    {
        int l_550[4];
        int l_566 = 0x6DC46069L;
        int **l_576[4][1];
        int i, j;
        for (i = 0; i < 4; i++)
            l_550[i] = 0x776C771DL;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_576[i][j] = &g_373;
        }
        (*g_534) = l_550[0];
        for (g_48 = 0; (g_48 >= 18); g_48++)
        {
            unsigned short l_563 = 65535UL;
            for (p_26 = 0; (p_26 == 2); p_26++)
            {
                short l_559 = 0x294BL;
                int *l_560 = &l_550[0];
                int *l_561[5] = {&g_64[1], &g_64[1], &g_64[1], &g_64[1], &g_64[1]};
                int i;
                for (g_234 = 4; (g_234 >= 0); g_234 -= 1)
                {
                    int * const l_555[3] = {&l_550[2], &l_550[2], &l_550[2]};
                    int **l_556 = (void*)0;
                    int **l_557 = (void*)0;
                    int *l_558 = &l_550[0];
                    int i;
                    l_558 = l_555[0];
                }
                l_563++;
                if (l_566)
                    continue;
            }
        }
        g_373 = &l_550[0];
        return (*g_534);
    }
    else
    {
        int *l_577 = &g_64[1];
        int *l_578 = &g_64[1];
        int *l_579 = &l_562[3][2][0];
        int *l_580 = &g_64[1];
        int *l_581[7];
        int l_582 = (-1L);
        int l_583 = 1L;
        unsigned char l_584 = 255UL;
        unsigned l_651 = 0x3D848273L;
        int i;
        for (i = 0; i < 7; i++)
            l_581[i] = &g_48;
        l_584++;
        (*g_534) &= (g_234 | (&g_266 == &g_266));
        (*g_534) &= (*l_577);
        if ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s(0x3364L, g_348)), p_26)))), p_26)))
        {
            int l_596 = 2L;
            int ** const l_608 = &l_579;
            int l_628 = 0xFD4D7DF2L;
            int l_630 = (-2L);
            char l_632 = 0x13L;
            int l_635 = 3L;
            int l_642[5] = {0L, (-7L), 0L, (-7L), 0L};
            unsigned char l_649 = 0xC5L;
            int i;
            if ((*l_578))
            {
                char l_615 = 0x0FL;
                int **l_625 = &l_579;
                int l_627 = (-4L);
                int l_631 = 0x3232FED3L;
                if (l_596)
                {
                    unsigned char l_607 = 0UL;
                    (*g_534) |= p_26;
                    (*l_579) = ((func_30(p_26, (safe_lshift_func_int8_t_s_s((+(safe_add_func_int8_t_s_s((0x64F7L && func_30(p_26, (safe_mod_func_uint16_t_u_u(p_26, (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(l_596, (l_596 <= l_607))), 7)))), p_26, ((l_608 == (*g_265)) != g_348), p_26)), (-3L)))), g_5)), p_26, p_26, (**l_608)) ^ g_5) >= p_26);
                }
                else
                {
                    int l_612 = (-2L);
                    int l_633 = 0L;
                    for (l_584 = 0; (l_584 <= 1); l_584 += 1)
                    {
                        unsigned short l_611 = 0x2992L;
                        (*l_579) = p_26;
                        (*l_580) = (((safe_add_func_int8_t_s_s(l_611, l_612)) < (((safe_lshift_func_int16_t_s_u(func_30(p_26, l_615, p_26, ((1UL == ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(g_183)), l_615)) >= (((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((&l_579 == l_625), (-1L))) || l_611), p_26)) < l_612) == p_26))) & l_611), l_612), (**l_608))) <= g_5) != 0x88L)) <= 253UL);
                    }
                    if ((**l_608))
                    {
                        char l_626 = 0x2CL;
                        int l_629 = 0x890B81A5L;
                        int l_634[3];
                        unsigned l_639 = 1UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_634[i] = 0L;
                        --l_636;
                        (*l_625) = &l_633;
                        return p_26;
                    }
                    else
                    {
                        (*l_580) = (g_442 < 0xC5L);
                    }
                    return (*g_534);
                }
                (*g_534) |= (-1L);
            }
            else
            {
                int l_640 = 0x2E5A3298L;
                int l_643 = 1L;
                if ((g_48 < p_26))
                {
                    unsigned char l_644 = 0x61L;
                    int l_650[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_650[i] = (-3L);
                    --l_644;
                    if (func_30((0x09L != (*l_577)), l_643, (g_183 != p_26), (safe_mod_func_uint16_t_u_u(p_26, l_649)), g_442))
                    {
                        l_651++;
                        (*l_578) = p_26;
                    }
                    else
                    {
                        return l_643;
                    }
                    return p_26;
                }
                else
                {
                    const int **l_654 = &g_132;
                    (*l_654) = (*l_575);
                }
            }
            (**l_608) = (((&g_266 == (void*)0) < (((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((g_48 ^ ((-6L) ^ (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xA4341AA8L, (*g_534))), (*l_580))))), (g_442 != 0x6AL))), g_183)) && p_26) != (*l_579))) && 0xA14CL);
            (*l_608) = (*l_608);
        }
        else
        {
            (*l_577) ^= (((+g_234) < p_26) >= g_442);
        }
    }
    for (g_183 = 0; (g_183 <= 14); g_183 = safe_add_func_int8_t_s_s(g_183, 4))
    {
        short l_676 = 1L;
        int l_677 = (-1L);
        int *l_678 = &l_562[4][2][1];
        int *l_679 = &l_562[4][2][1];
        int *l_680 = (void*)0;
        int *l_681 = (void*)0;
        int *l_682 = (void*)0;
        int *l_683 = &g_64[1];
        int *l_684 = (void*)0;
        int *l_685[6];
        int i;
        for (i = 0; i < 6; i++)
            l_685[i] = &l_562[4][2][1];
        l_677 = ((p_26 != (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_562[2][0][0], (safe_mul_func_int16_t_s_s(0x3208L, p_26)))), 0UL))) != (0x03L < (((safe_rshift_func_int8_t_s_u((l_27 > l_676), 7)) && g_183) < l_676)));
        ++l_686;
    }
    (*l_704) |= func_30((safe_add_func_int16_t_s_s(p_26, ((((void*)0 != &g_266) < ((safe_add_func_uint16_t_u_u(l_641[0], (&l_575 == (void*)0))) != (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((((p_26 <= (safe_mod_func_int8_t_s_s(g_64[1], g_173))) || g_183) < g_64[0]), p_26)) & 0UL), p_26)), g_5)) && 0xB2213C16L), g_442)))) & g_5))), p_26, p_26, l_703, g_48);
    (*l_705) = (*l_575);
    return (*g_534);
}







static short func_30(int p_31, unsigned short p_32, unsigned p_33, unsigned short p_34, unsigned p_35)
{
    unsigned short l_410 = 0x1E30L;
    const int *l_413[8];
    short l_430 = (-7L);
    int l_431 = (-4L);
    int l_433 = 0xDA1DEB6DL;
    int l_434 = 8L;
    int l_440 = 6L;
    int l_441 = 0x46191668L;
    int l_443[6] = {1L, 0x72544FBAL, 1L, 0x72544FBAL, 1L, 0x72544FBAL};
    int l_444 = (-6L);
    int ***l_455 = &g_266;
    int l_513 = 0x5C32B37EL;
    int i;
    for (i = 0; i < 8; i++)
        l_413[i] = &g_64[3];
    for (p_34 = 0; (p_34 <= 5); p_34 += 1)
    {
        unsigned l_421 = 0UL;
        int l_435 = 0x74F62859L;
        int l_436 = 0x8D687686L;
        int l_438 = 0x7F62FD21L;
        int l_439[9][4] = {{0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}, {0x20D88337L, 0xAC75EFC5L, 1L, (-1L)}};
        int i, j;
        if ((+g_64[p_34]))
        {
            short l_409 = (-5L);
            const int **l_414 = &l_413[6];
            int i;
            for (g_234 = 5; (g_234 >= 1); g_234 -= 1)
            {
                int *l_405 = &g_64[1];
                int *l_406 = &g_64[3];
                int *l_407 = &g_64[1];
                int *l_408[9][4];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_408[i][j] = &g_48;
                }
                ++l_410;
                return g_64[g_234];
            }
            if (g_64[p_34])
                continue;
            if (g_64[p_34])
                break;
            (*l_414) = l_413[6];
            if (g_234)
                goto lbl_486;
        }
        else
        {
            int ***l_418 = (void*)0;
            int i;
            g_64[p_34] = ((((1L ^ ((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint8_t_u_u((p_35 ^ p_32), g_348)) == p_33) | p_35))) && g_48)) || p_31) || p_35) || g_48);
            if (p_34)
                continue;
            for (l_410 = 0; (l_410 <= 5); l_410 += 1)
            {
                int i;
                if (g_64[p_34])
                    break;
                l_413[(p_34 + 1)] = &g_64[p_34];
                l_413[p_34] = &g_64[p_34];
            }
        }
        l_421 |= (safe_rshift_func_uint8_t_u_u(p_35, 1));
        if (p_31)
            continue;
        for (p_32 = 0; (p_32 <= 7); p_32 += 1)
        {
            char l_432 = 0x65L;
            int l_437[8] = {0x804271C0L, 0x804271C0L, 0x7569644AL, 0x804271C0L, 0x804271C0L, 0x7569644AL, 0x804271C0L, 0x804271C0L};
            int i;
            for (g_48 = 0; (g_48 <= 5); g_48 += 1)
            {
                int l_422 = 1L;
                int l_423 = 0xB57BC166L;
                int *l_424 = &g_64[p_34];
                int *l_425 = (void*)0;
                int *l_426 = &g_64[p_34];
                int *l_427 = &l_422;
                int *l_428 = &g_64[1];
                int *l_429[4] = {&g_64[p_34], &l_422, &g_64[p_34], &l_422};
                int i;
                g_445--;
            }
        }
    }
lbl_486:
    for (p_34 = (-11); (p_34 > 48); p_34 = safe_add_func_uint32_t_u_u(p_34, 3))
    {
        unsigned short l_452 = 1UL;
        int *l_458 = &l_440;
        short l_461 = 1L;
        unsigned char l_468 = 0x12L;
        unsigned short l_477 = 0xC088L;
        unsigned short l_478 = 0xA218L;
        int **l_485 = &g_373;
        (*l_458) &= (safe_sub_func_uint32_t_u_u((g_445 & l_461), (-10L)));
        (*l_485) = &l_440;
    }
    for (l_410 = (-30); (l_410 <= 12); l_410 = safe_add_func_uint32_t_u_u(l_410, 3))
    {
        int *l_489 = &g_64[2];
        l_489 = &l_431;
        for (l_433 = 0; (l_433 >= (-15)); --l_433)
        {
            int *l_515 = &l_443[3];
            if ((safe_rshift_func_uint8_t_u_s(g_234, 2)))
            {
                int *l_514 = &l_431;
                for (l_434 = 21; (l_434 >= (-10)); --l_434)
                {
                    l_515 = l_514;
                    return g_442;
                }
                for (g_442 = 0; (g_442 == 17); g_442++)
                {
                    (*l_514) &= p_34;
                    (*l_489) |= 0x99B32ACFL;
                }
            }
            else
            {
                return g_234;
            }
            l_515 = l_489;
        }
        if ((safe_sub_func_uint32_t_u_u(((*g_265) == (*g_265)), p_31)))
        {
            unsigned char l_522[7] = {0x5AL, 0xFFL, 0x5AL, 0xFFL, 0x5AL, 0xFFL, 0x5AL};
            int i;
            for (g_183 = (-14); (g_183 > 1); g_183 = safe_add_func_int16_t_s_s(g_183, 3))
            {
                (*l_489) &= l_522[0];
            }
        }
        else
        {
            char l_523 = 0xF2L;
            l_523 = (g_445 == (p_31 <= (p_32 || 0xF4F3CF18L)));
        }
    }
    for (p_35 = 0; (p_35 == 48); p_35 = safe_add_func_uint16_t_u_u(p_35, 3))
    {
        int *l_526 = (void*)0;
        for (g_442 = 0; (g_442 <= 5); g_442 += 1)
        {
            int *l_527 = &l_440;
            int **l_544 = &g_373;
            int i;
            l_527 = l_526;
            for (g_48 = 4; (g_48 >= 0); g_48 -= 1)
            {
                int *l_541 = &l_441;
                for (p_33 = 0; (p_33 <= 5); p_33 += 1)
                {
                    int *l_529 = (void*)0;
                    int l_530[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_530[i] = 0xA33100FEL;
                    for (l_410 = 1; (l_410 <= 5); l_410 += 1)
                    {
                        int *l_528[10][8][3] = {{{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}, {{&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}, {&l_431, (void*)0, (void*)0}}};
                        unsigned char l_531 = 255UL;
                        int i, j, k;
                        l_529 = l_528[7][4][0];
                        l_531--;
                        g_534 = &g_173;
                        l_443[g_442] = (-3L);
                    }
                    l_443[p_33] = (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(6UL, ((((((p_31 >= p_35) <= (p_35 >= (g_48 != p_35))) | p_33) & (l_541 != l_541)) & (*g_534)) != 0x77C7FFA9L))), p_34)), 0x04B7L));
                }
                if (p_33)
                {
                    int **l_542 = (void*)0;
                    int **l_543 = &l_541;
                    for (p_34 = 1; (p_34 <= 5); p_34 += 1)
                    {
                        int i;
                        l_443[p_34] ^= p_31;
                        if (p_33)
                            continue;
                        if ((*g_534))
                            break;
                        if (p_32)
                            break;
                    }
                    (*l_543) = &g_64[1];
                    return g_64[4];
                }
                else
                {
                    return g_348;
                }
            }
            (*l_544) = &l_441;
        }
        for (l_434 = 0; (l_434 >= (-10)); --l_434)
        {
            for (l_444 = 1; (l_444 > (-27)); l_444 = safe_sub_func_int8_t_s_s(l_444, 2))
            {
                (*g_534) = p_31;
            }
        }
        if (p_32)
            break;
    }
    return g_48;
}







static int func_36(unsigned char p_37)
{
    int l_42 = 0x924F63ABL;
    int **l_404[4][5] = {{&g_373, &g_373, &g_373, &g_373, &g_373}, {&g_373, &g_373, &g_373, &g_373, &g_373}, {&g_373, &g_373, &g_373, &g_373, &g_373}, {&g_373, &g_373, &g_373, &g_373, &g_373}};
    int i, j;
    g_373 = func_38(l_42, p_37, (0x491D0B6BL <= ((((0xE6L != g_5) == 0xEF34L) | l_42) & ((safe_mul_func_uint8_t_u_u(l_42, (l_42 >= g_5))) > g_5))));
    return g_64[5];
}







static int * func_38(unsigned char p_39, unsigned char p_40, unsigned short p_41)
{
    unsigned char l_45[8] = {0xE1L, 0x91L, 0xE1L, 0x91L, 0xE1L, 0x91L, 0xE1L, 0x91L};
    int l_66 = 0x05F459CAL;
    int l_72 = (-1L);
    int l_77 = 0L;
    int l_78 = 0x9B762B02L;
    int l_79 = 0x0476F2A9L;
    int l_81 = 0xCF258FD7L;
    int l_127 = 1L;
    const short l_139 = 0xF02EL;
    int *l_163 = (void*)0;
    int ** const l_162 = &l_163;
    int l_191 = 4L;
    int l_204 = 0xFD4E0F7FL;
    int l_206 = (-1L);
    unsigned l_207 = 0xA78DD741L;
    short l_229 = (-1L);
    int l_361 = 0x58DC1C85L;
    int l_363[4][10][6] = {{{2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}}, {{2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}}, {{2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}}, {{2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}, {2L, 0L, 2L, 0L, 2L, 0L}}};
    int i, j, k;
    for (p_41 = 0; (p_41 <= 7); p_41 += 1)
    {
        int l_65 = (-8L);
        int l_71 = (-5L);
        int l_73 = 0xC085588CL;
        int l_74 = 0xBA9E7339L;
        char l_75 = 0x4AL;
        int l_82 = 0xFC6D38C1L;
        unsigned char l_129[8][9][3] = {{{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}, {{255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}, {255UL, 2UL, 250UL}}};
        unsigned l_135 = 0x01620824L;
        int l_174 = 0x6D4CF9D2L;
        int l_177 = 0x161A44FBL;
        int l_181[1];
        int ** const *l_261[7][10] = {{(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}, {(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}, {(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}, {(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}, {(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}, {(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}, {(void*)0, (void*)0, (void*)0, &l_162, (void*)0, (void*)0, (void*)0, &l_162, &l_162, &l_162}};
        unsigned l_326 = 4294967295UL;
        unsigned l_366 = 0x45AD9B93L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_181[i] = 0x6AA3D206L;
        if ((safe_unary_minus_func_int32_t_s(l_45[p_41])))
        {
            int *l_47 = &g_48;
            int l_91 = 6L;
            int i;
            for (p_40 = 0; (p_40 <= 7); p_40 += 1)
            {
                return l_47;
            }
            if ((safe_sub_func_int8_t_s_s((l_45[p_41] && 0x5313L), (safe_rshift_func_int16_t_s_s(p_39, 6)))))
            {
                int l_69 = 0x79AABF66L;
                int l_70 = (-7L);
                int l_76 = 7L;
                int **l_92 = (void*)0;
                int **l_93 = &l_47;
                for (g_48 = 0; (g_48 >= (-18)); --g_48)
                {
                    int l_67 = (-5L);
                    int l_68 = 0L;
                    int l_80 = 0xB22F2C88L;
                    unsigned l_83[6] = {1UL, 1UL, 4294967288UL, 1UL, 1UL, 4294967288UL};
                    int *l_87 = &l_73;
                    int i;
                    if (((safe_div_func_uint32_t_u_u(g_48, p_41)) == (safe_mod_func_int16_t_s_s(g_5, (safe_rshift_func_int8_t_s_s(l_45[p_41], 3))))))
                    {
                        int *l_61 = (void*)0;
                        int *l_62 = (void*)0;
                        int *l_63[4][5] = {{&g_64[1], &g_64[1], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[1], &g_64[1], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[1], &g_64[1], &g_64[1], &g_64[1], &g_64[1]}, {&g_64[1], &g_64[1], &g_64[1], &g_64[1], &g_64[1]}};
                        int i, j;
                        --l_83[1];
                        return &g_48;
                    }
                    else
                    {
                        int **l_86[4];
                        unsigned char l_88 = 0x4DL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_86[i] = &l_47;
                        l_87 = &l_65;
                        l_88--;
                        return &g_64[0];
                    }
                }
                l_91 |= (*l_47);
                (*l_93) = &l_73;
            }
            else
            {
                unsigned l_113 = 0x8D97F969L;
                if ((((safe_add_func_uint32_t_u_u(p_41, l_66)) < (-7L)) && (~g_48)))
                {
                    short l_104[2][1][7] = {{{0x46CBL, 0L, 0x46CBL, 0L, 0x46CBL, 0L, 0x46CBL}}, {{0x46CBL, 0L, 0x46CBL, 0L, 0x46CBL, 0L, 0x46CBL}}};
                    int **l_118 = &l_47;
                    int i, j, k;
                    for (p_40 = 0; (p_40 > 17); ++p_40)
                    {
                        int *l_105 = &l_65;
                        int *l_106 = &l_79;
                        int *l_107 = (void*)0;
                        int *l_108 = &l_71;
                        int *l_109 = &l_71;
                        int *l_110 = &l_77;
                        int *l_111 = &l_72;
                        int *l_112 = &g_48;
                        (*l_47) |= ((((safe_rshift_func_uint8_t_u_u(0x11L, 5)) & p_39) >= ((safe_mul_func_uint16_t_u_u((l_72 >= (safe_sub_func_int32_t_s_s(p_40, l_65))), (2L > (g_5 ^ l_104[1][0][0])))) || 4294967295UL)) || 0UL);
                        if (l_104[0][0][4])
                            break;
                        l_113++;
                    }
                    (*l_47) &= p_40;
                    for (l_81 = 6; (l_81 > 27); l_81 = safe_add_func_int8_t_s_s(l_81, 8))
                    {
                        if (g_5)
                            break;
                    }
                    (*l_118) = &g_64[1];
                }
                else
                {
                    int **l_119 = &l_47;
                    (*l_119) = &l_73;
                    for (l_71 = 1; (l_71 <= 5); l_71 += 1)
                    {
                        int *l_120 = (void*)0;
                        return l_120;
                    }
                }
                for (l_71 = 0; (l_71 <= 5); l_71 += 1)
                {
                    int i;
                    g_64[l_71] |= 8L;
                    if ((&g_64[l_71] != (void*)0))
                    {
                        int i;
                        g_64[l_71] = g_64[1];
                    }
                    else
                    {
                        unsigned char l_125 = 0x4AL;
                        (*l_47) = ((0xAFL > ((&l_91 != &g_64[1]) | (safe_lshift_func_uint8_t_u_s(1UL, 4)))) || (safe_lshift_func_uint8_t_u_u(l_125, 1)));
                        (*l_47) = p_41;
                        g_64[3] |= 0xFA81E3AFL;
                    }
                }
                for (l_73 = 7; (l_73 >= 0); l_73 -= 1)
                {
                    int i;
                    if (l_45[l_73])
                        break;
                }
            }
        }
        else
        {
            int *l_126[7] = {&l_73, &l_73, &l_66, &l_73, &l_73, &l_66, &l_73};
            char l_128 = 0L;
            int i;
            l_129[6][5][0]--;
            if ((l_73 > ((void*)0 != l_126[4])))
            {
                int l_133 = 0x874D0840L;
                int l_134 = 0x754C0D22L;
                g_132 = (void*)0;
                l_135--;
            }
            else
            {
                int **l_138 = &l_126[5];
                (*l_138) = &l_79;
            }
            g_48 = l_139;
        }
        if (p_40)
            break;
    }
lbl_403:
    (*g_373) = p_39;
    if (p_41)
    {
        int *l_401 = &l_191;
        (*l_401) = ((safe_mod_func_int32_t_s_s((((0x21E7C357L == ((p_40 <= 0xA9L) && (safe_add_func_uint16_t_u_u(0xFD93L, ((safe_div_func_uint32_t_u_u(((((((((0x8957D17FL > (g_234 == (!(safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((void*)0 != l_401))), p_40))))) == (*l_401)) || (-1L)) ^ g_64[1]) <= g_5) != p_40) == (*l_401)) ^ 0x10L), 4294967287UL)) | 0x786727EAL))))) ^ p_40) != (*l_401)), 1UL)) >= p_40);
        return &g_48;
    }
    else
    {
        int *l_402[3];
        int i;
        for (i = 0; i < 3; i++)
            l_402[i] = &g_48;
        for (l_77 = 0; (l_77 <= 3); l_77 += 1)
        {
            return l_402[0];
        }
        (*g_373) &= p_39;
    }
    if (l_139)
        goto lbl_403;
    return &g_64[2];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1224[i], "g_1224[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1341, "g_1341", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1377[i], "g_1377[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1488[i][j][k], "g_1488[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
