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



static int g_6 = (-1L);
static int g_26[4] = {0x4A87FCE6L, 0x4A87FCE6L, 0x4A87FCE6L, 0x4A87FCE6L};
static unsigned g_153 = 0UL;
static unsigned g_154[5][10][1] = {{{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}};
static unsigned g_167 = 0x6F512514L;
static short g_192 = 0L;
static unsigned short g_193 = 1UL;
static int g_195 = (-1L);
static short g_221 = (-6L);
static int g_224 = 9L;
static char g_225 = (-9L);
static const unsigned g_231[7] = {0xB4AA2B9EL, 0xB4AA2B9EL, 0xB4AA2B9EL, 0xB4AA2B9EL, 0xB4AA2B9EL, 0xB4AA2B9EL, 0xB4AA2B9EL};
static int g_532 = 0xB7FE280AL;
static unsigned g_921[3] = {0x061EC8B9L, 0x061EC8B9L, 0x061EC8B9L};
static int g_945 = 1L;
static char g_1105 = 0x3DL;
static const unsigned short g_1345 = 4UL;
static int g_1363 = 0x392FE39FL;
static const int g_1377 = (-4L);
static short g_1424 = 0L;
static unsigned short g_1441 = 1UL;
static unsigned char g_1468 = 0xF8L;
static char g_1507 = 0x14L;
static short g_1608 = 0xCE7CL;
static const short g_1616 = 1L;
static int g_1617 = 1L;
static unsigned char g_1760 = 0x72L;
static short g_1765 = (-8L);



static short func_1(void);
static int func_2(short p_3, const int p_4, short p_5);
static unsigned short func_9(unsigned short p_10, int p_11, short p_12, unsigned p_13, unsigned p_14);
static char func_18(unsigned char p_19, int p_20, int p_21, const char p_22);
static int func_23(const int p_24);
static int func_56(short p_57, unsigned short p_58, int p_59);
static char func_102(int p_103, unsigned char p_104, int p_105, int p_106, unsigned char p_107);
static short func_113(int p_114);
static unsigned func_116(int p_117, unsigned p_118, char p_119, unsigned short p_120, unsigned p_121);
static unsigned func_128(short p_129, unsigned p_130, const int p_131, unsigned char p_132);
static short func_1(void)
{
    unsigned l_15 = 0xAB274BF9L;
    int l_1323 = 0x59B1A132L;
    int l_1370 = (-1L);
    const unsigned short l_1502 = 0UL;
    int l_1504 = 0x71F29030L;
    int l_1746 = 0xE5098C1DL;
    short l_1827 = 0L;
    const unsigned l_1831 = 0xBF6D9A22L;
    int l_1837[6] = {(-1L), (-1L), (-2L), (-1L), (-1L), (-2L)};
    int i;
    if (func_2(g_6, (safe_lshift_func_uint16_t_u_u(func_9(l_15, (safe_add_func_int8_t_s_s(((g_6 & func_18((g_6 > l_15), (((248UL & (1L | g_6)) && g_6) | l_15), l_15, g_6)) <= l_15), g_6)), g_6, g_6, g_6), 7)), l_15))
    {
        int l_1324[7][2][4] = {{{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}, {{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}, {{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}, {{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}, {{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}, {{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}, {{1L, 9L, 0L, 4L}, {1L, 9L, 0L, 4L}}};
        int i, j, k;
        l_1324[0][0][3] = l_1323;
    }
    else
    {
        short l_1332 = 0x6BBEL;
        int l_1340 = 7L;
        int l_1350 = (-4L);
        short l_1462 = 0xB859L;
        const short l_1543[5][5] = {{0x0546L, 0x0546L, 0x7C79L, 0x0546L, 0x0546L}, {0x0546L, 0x0546L, 0x7C79L, 0x0546L, 0x0546L}, {0x0546L, 0x0546L, 0x7C79L, 0x0546L, 0x0546L}, {0x0546L, 0x0546L, 0x7C79L, 0x0546L, 0x0546L}, {0x0546L, 0x0546L, 0x7C79L, 0x0546L, 0x0546L}};
        char l_1723 = 0xC7L;
        const short l_1753 = (-6L);
        unsigned l_1788 = 4294967289UL;
        int l_1826[9] = {0x2B76642FL, 0xBD225E65L, 0x2B76642FL, 0xBD225E65L, 0x2B76642FL, 0xBD225E65L, 0x2B76642FL, 0xBD225E65L, 0x2B76642FL};
        int i, j;
        for (g_167 = 0; (g_167 <= 2); g_167 += 1)
        {
            unsigned char l_1398 = 1UL;
            const unsigned char l_1404 = 0x83L;
            unsigned short l_1475 = 1UL;
            short l_1501[5][3][7] = {{{0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}}, {{0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}}, {{0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}}, {{0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}}, {{0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}, {0xBB07L, 1L, 0x3CE3L, 2L, 0x7440L, 0xDBDCL, (-1L)}}};
            int i, j, k;
            g_26[2] = g_921[g_167];
            if (g_26[(g_167 + 1)])
            {
                short l_1327 = 0xF5B5L;
                int l_1333 = (-1L);
                unsigned l_1376 = 0xC59BD983L;
                unsigned l_1380 = 0UL;
                l_1333 = (0x66L && (func_23(l_15) == (safe_add_func_uint32_t_u_u(l_1327, (+(safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((-5L), func_116(l_15, g_195, g_532, l_1332, l_1332))), g_154[4][3][0])))))));
                for (g_225 = 0; (g_225 >= 0); g_225 -= 1)
                {
                    int l_1341 = 1L;
                    int l_1342 = 0xAC2F0D67L;
                    for (g_1105 = 0; (g_1105 >= 0); g_1105 -= 1)
                    {
                        int i, j, k;
                        l_1342 = func_56(((((safe_rshift_func_int8_t_s_s((((g_154[(g_167 + 1)][g_225][g_225] != g_154[(g_167 + 1)][g_225][g_225]) & ((safe_sub_func_int32_t_s_s((func_23(g_193) < ((((g_1105 != 0xD852L) >= (((safe_div_func_int8_t_s_s((g_921[g_167] > (g_26[3] || (l_1332 > g_231[1]))), l_1332)) == g_154[3][5][0]) < g_532)) <= g_195) <= 1L)), 0xDD16EF87L)) <= (-10L))) > 0L), 4)) == g_153) ^ l_1340) < l_1341), g_26[3], g_921[2]);
                        if (l_1327)
                            continue;
                        l_1350 = (safe_mod_func_int16_t_s_s(1L, (((g_224 >= (g_1345 && g_153)) ^ 0x2DL) & (safe_add_func_uint32_t_u_u(g_26[(g_167 + 1)], (safe_add_func_int8_t_s_s(g_154[(g_167 + 1)][g_225][g_225], (l_1333 >= g_1105))))))));
                        l_1323 = ((g_6 || (0xF3L != (g_221 & (7L >= 0L)))) | 1UL);
                    }
                    g_26[(g_167 + 1)] = ((safe_div_func_int8_t_s_s((!g_224), (safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((g_921[2] == (+((safe_mod_func_int16_t_s_s(func_18(l_1342, (g_167 ^ ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(func_23(l_1327), g_154[0][9][0])), 3)) && (l_1342 | (0L >= g_1363)))), l_1323, l_1327), l_15)) >= g_225))), l_15)) == 1UL), 0x383AL)))) < 0x67AAL);
                    g_1363 = l_1327;
                    for (l_1340 = 0; (l_1340 >= 0); l_1340 -= 1)
                    {
                        unsigned l_1375 = 0UL;
                        l_1333 = 0x75A3E955L;
                        l_1350 = ((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((-10L), (safe_rshift_func_int8_t_s_s(g_921[g_167], 7)))) < g_1363), l_1370)) != (g_192 != ((-1L) & (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((0x1B19371EL < 9UL) == (func_56((!g_167), g_153, l_1375) && g_921[0])), g_1345)), 5)))));
                        g_26[3] = l_1376;
                    }
                    for (g_193 = 0; (g_193 <= 0); g_193 += 1)
                    {
                        if (g_224)
                            break;
                        l_1370 = g_153;
                    }
                }
                for (g_195 = 0; (g_195 <= 3); g_195 += 1)
                {
                    int l_1397[4][3] = {{(-1L), 3L, (-1L)}, {(-1L), 3L, (-1L)}, {(-1L), 3L, (-1L)}, {(-1L), 3L, (-1L)}};
                    int i, j;
                    g_26[g_167] = g_26[g_195];
                    if (g_1377)
                        break;
                    for (l_1323 = 0; (l_1323 <= 0); l_1323 += 1)
                    {
                        l_1350 = ((safe_add_func_uint8_t_u_u(g_921[0], l_1380)) <= g_921[g_167]);
                        g_26[3] = (safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s((((safe_div_func_uint8_t_u_u((+g_193), g_231[1])) != g_1345) ^ ((safe_div_func_uint8_t_u_u(l_1370, (safe_mod_func_int8_t_s_s(((g_1377 != ((safe_div_func_uint16_t_u_u(65535UL, (safe_mod_func_int32_t_s_s(g_221, (safe_mod_func_int8_t_s_s((g_26[1] && func_113(func_18(l_1323, g_231[1], g_231[1], g_26[g_167]))), g_1345)))))) == g_921[g_167])) > 251UL), l_1397[0][1])))) | g_921[g_167])), 7)) ^ 0xA6L) < l_1398) & l_1397[0][1]), 0xCFL));
                        g_945 = g_26[g_167];
                        g_945 = l_1327;
                    }
                }
                l_1333 = (safe_mod_func_uint8_t_u_u(l_1333, func_18((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(l_1380)), (l_1404 && ((((g_1363 && ((g_154[3][6][0] > g_26[(g_167 + 1)]) ^ ((-5L) || g_921[g_167]))) && (safe_unary_minus_func_int8_t_s(1L))) ^ g_945) < g_6)))), g_231[1], g_221, g_26[3])));
            }
            else
            {
                unsigned char l_1415[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1415[i] = 0xD8L;
                for (l_1350 = 0; (l_1350 >= 0); l_1350 -= 1)
                {
                    int l_1410[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1410[i] = 8L;
                    for (g_532 = 0; (g_532 >= 0); g_532 -= 1)
                    {
                        int i;
                        g_26[(g_167 + 1)] = (-1L);
                        g_6 = (safe_rshift_func_int16_t_s_u(func_56(g_921[g_167], (l_1398 | ((safe_div_func_uint32_t_u_u((g_26[(g_167 + 1)] | (func_23(g_224) & (g_167 & 1L))), l_1350)) > 0x33L)), g_167), l_1410[0]));
                    }
                    if (g_167)
                        break;
                    if (l_1323)
                        break;
                    g_1363 = (g_231[5] == (((safe_lshift_func_int16_t_s_s(0xBEDCL, 15)) | (0xDFD486C1L < ((+g_192) == func_116(l_1410[0], (0x34A1L == (l_1415[0] || (safe_mod_func_int32_t_s_s(((-6L) > l_1350), g_224)))), l_1332, l_1398, l_1350)))) | l_1350));
                    for (l_1340 = 0; (l_1340 >= 0); l_1340 -= 1)
                    {
                        return g_945;
                    }
                }
                return l_1370;
            }
            if ((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((((g_154[3][3][0] == (safe_mod_func_uint16_t_u_u(g_1424, 0x9B39L))) && ((+(func_113(l_1350) ^ (~func_23(g_921[0])))) <= (g_945 && 1UL))) != 0UL) < g_1345), l_1370)), 0xCEE64B65L)))
            {
                unsigned char l_1425 = 1UL;
                l_1425 = g_231[1];
                for (g_1424 = 0; (g_1424 >= 0); g_1424 -= 1)
                {
                    return g_1105;
                }
                for (l_1350 = 0; (l_1350 >= 0); l_1350 -= 1)
                {
                    int l_1426 = (-10L);
                    unsigned l_1429[1][2][5] = {{{0x63508FEBL, 0xC85CBA8CL, 0x63508FEBL, 0xC85CBA8CL, 0x63508FEBL}, {0x63508FEBL, 0xC85CBA8CL, 0x63508FEBL, 0xC85CBA8CL, 0x63508FEBL}}};
                    int i, j, k;
                    for (g_192 = 0; (g_192 >= 0); g_192 -= 1)
                    {
                        g_6 = g_231[6];
                    }
                    if (l_1340)
                    {
                        return l_1425;
                    }
                    else
                    {
                        g_945 = l_1323;
                    }
                    for (g_195 = 0; (g_195 <= 0); g_195 += 1)
                    {
                        unsigned l_1438[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1438[i] = 2UL;
                        l_1370 = 0x932D9681L;
                        l_1426 = (-1L);
                        if (l_1332)
                            break;
                        l_1323 = (0xE307L ^ (safe_div_func_int32_t_s_s((func_56(l_1429[0][1][0], l_1404, func_18((1L > (((safe_div_func_uint32_t_u_u((!g_167), (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(l_1425, (safe_mod_func_uint32_t_u_u(((((((65526UL ^ l_1438[4]) <= (safe_rshift_func_uint8_t_u_u(g_193, g_224))) >= l_1425) != 0x20L) ^ g_26[3]) | g_167), l_1438[4])))) < (-1L)), 0x606AL)))) >= (-5L)) > 0x0195L)), g_1441, l_1425, l_1438[4])) && g_26[(g_167 + 1)]), g_225)));
                    }
                }
            }
            else
            {
                unsigned char l_1442 = 0x7FL;
                for (g_6 = 0; (g_6 <= 0); g_6 += 1)
                {
                    unsigned l_1443 = 0x2156AF0EL;
                    l_1442 = l_1404;
                    g_195 = l_1443;
                    return g_921[0];
                }
            }
            for (g_1424 = 0; (g_1424 >= 0); g_1424 -= 1)
            {
                unsigned l_1451 = 1UL;
                int l_1500 = 0x17AB198DL;
                for (g_195 = 0; (g_195 <= 2); g_195 += 1)
                {
                    int i;
                    g_945 = g_921[(g_1424 + 2)];
                    if ((safe_unary_minus_func_int8_t_s((g_26[g_1424] != g_26[(g_1424 + 1)]))))
                    {
                        if (l_1370)
                            break;
                        g_26[(g_1424 + 1)] = func_113(g_26[g_1424]);
                    }
                    else
                    {
                        return g_1363;
                    }
                    if (((safe_sub_func_uint32_t_u_u((func_56(((safe_add_func_int8_t_s_s(l_1370, (0x9BL < (0x02L < (((safe_add_func_uint16_t_u_u(0x076CL, l_1451)) & (safe_sub_func_int32_t_s_s((((~g_231[1]) != l_1323) ^ (safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s(func_23((safe_add_func_int8_t_s_s(g_1105, ((g_1363 <= 0x77ECC8E7L) < 65529UL)))), g_231[5])) > (-1L)) < 0xAA34BB41L), l_1332)) || g_26[1]), g_1377))), g_195))) > g_921[(g_1424 + 2)]))))) & l_1462), g_921[0], l_15) | 65533UL), 1UL)) != 65527UL))
                    {
                        unsigned l_1467[6] = {0x4865C154L, 0x4865C154L, 8UL, 0x4865C154L, 0x4865C154L, 8UL};
                        int l_1476 = (-1L);
                        int i;
                        g_26[0] = func_18((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((0x55L > func_56(l_1467[3], l_1462, g_1468)), 0xD6C31E9DL)), ((g_1363 || (246UL != (g_231[3] & g_921[(g_1424 + 2)]))) != 4294967294UL))), g_1105, l_1323, l_1340);
                        l_1476 = (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(g_6, (((safe_sub_func_int8_t_s_s((l_1404 & ((func_18((g_231[1] == g_193), g_154[2][0][0], l_1340, ((l_15 | (-6L)) & (g_1468 == g_224))) && 0x421BAB56L) < g_167)), 0x24L)) | 0x1AF6DC3CL) && (-4L)))), l_1475));
                    }
                    else
                    {
                        if (l_1451)
                            break;
                    }
                    if (l_1404)
                        break;
                }
                for (g_1468 = 0; (g_1468 <= 2); g_1468 += 1)
                {
                    int l_1499 = 1L;
                    for (l_1340 = 0; (l_1340 <= 0); l_1340 += 1)
                    {
                        int l_1498 = 4L;
                        int i, j, k;
                        g_6 = (g_921[g_1468] && (func_116((safe_sub_func_uint32_t_u_u((((-3L) >= (safe_unary_minus_func_int8_t_s(g_154[g_1468][(g_1468 + 6)][l_1340]))) & g_154[(l_1340 + 4)][(g_167 + 7)][l_1340]), func_116(g_6, l_1475, (safe_div_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((0x94B1L >= (g_1441 <= (g_1377 <= g_192))), g_224)) <= 0x4A20L) == 0L), g_921[g_1468])), g_225, g_167))), g_1363, l_1323, g_1345, l_1340) == g_1105));
                        g_26[1] = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(g_1105, (g_193 > (safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(0xA3L, 2)) & 0x2AL) & l_1451), ((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_15, 65530UL)), g_221)) >= (0L & g_1441))))))) > g_1377), 7));
                        l_1498 = l_1340;
                        l_1500 = (func_23(func_113(g_1424)) | ((l_1451 > 0x76B84B8FL) && func_23((l_1398 <= (!((l_1499 >= func_23(((l_15 != l_1398) & l_1499))) && 0xC2L))))));
                    }
                    if (g_231[4])
                        break;
                    l_1370 = (func_23(l_1370) ^ 4294967290UL);
                }
                l_1501[2][0][5] = g_225;
                for (g_945 = 0; (g_945 <= 0); g_945 += 1)
                {
                    int i;
                    g_26[(g_167 + 1)] = func_23(func_23(func_18(g_921[(g_945 + 2)], g_921[g_1424], func_113((0x3BL < (0xED024163L >= g_231[1]))), l_1502)));
                    for (l_1323 = 0; (l_1323 >= 0); l_1323 -= 1)
                    {
                        unsigned l_1512 = 0xE71AEDF6L;
                        g_1363 = g_1441;
                        g_26[3] = (safe_unary_minus_func_uint16_t_u((65527UL ^ l_1504)));
                        l_1504 = g_1468;
                        g_26[(g_167 + 1)] = (safe_lshift_func_int16_t_s_s((func_116(g_1441, g_231[1], (((func_113(((g_921[g_1424] <= (((l_1501[2][0][5] == (func_116(g_1507, (safe_sub_func_uint32_t_u_u((g_193 == (safe_rshift_func_int8_t_s_u(((g_195 & g_195) != (g_221 | 1UL)), 4))), g_193)), l_1451, g_167, g_26[3]) <= l_1398)) != g_193) <= g_231[1])) ^ 0x6157AF4AL)) < g_921[g_1424]) < 0x6019CBB6L) >= g_921[0]), l_1350, l_1512) == g_1363), 11));
                    }
                }
                for (g_192 = 0; (g_192 <= 0); g_192 += 1)
                {
                    unsigned short l_1530 = 0UL;
                    g_26[3] = ((safe_unary_minus_func_uint8_t_u((safe_div_func_int32_t_s_s(func_116((((g_532 ^ ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_1345, (g_26[3] ^ (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_921[g_167], (func_23(g_26[(g_167 + 1)]) & func_23((safe_sub_func_uint16_t_u_u((4L ^ ((-10L) != func_23((safe_rshift_func_int16_t_s_s(((func_23((func_23(g_26[3]) <= 4294967291UL)) <= 0xAE79FA28L) | (-6L)), l_1530))))), g_1424)))))), 7))))), 1)), 1L)) || 65535UL)) || l_1340) & 1UL), g_1468, l_1451, l_15, l_1323), (-1L))))) <= l_1530);
                }
            }
        }
        if (((0x78D66D16L || l_1332) || 0UL))
        {
            char l_1545 = 6L;
            l_1350 = 7L;
            for (g_167 = 0; (g_167 <= 2); g_167 += 1)
            {
                unsigned short l_1558[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1558[i] = 7UL;
                if (((-1L) != (safe_mod_func_int8_t_s_s(func_116(g_26[g_167], g_26[g_167], g_26[1], (safe_rshift_func_uint8_t_u_s(func_23(g_26[g_167]), (safe_div_func_int32_t_s_s((g_221 ^ (g_153 ^ ((safe_div_func_int16_t_s_s((l_1350 >= 1UL), 0xB21DL)) && l_1332))), g_231[5])))), g_231[1]), 0xC7L))))
                {
                    l_1350 = (safe_lshift_func_uint16_t_u_u(g_26[3], 2));
                }
                else
                {
                    unsigned l_1559 = 4294967295UL;
                    if (((safe_lshift_func_int16_t_s_s(l_1502, g_1441)) != l_1543[1][2]))
                    {
                        short l_1544 = 0x2B2CL;
                        g_1363 = func_23((0xDC89C57EL > (g_1424 && l_1340)));
                        if (l_1544)
                            continue;
                        l_1370 = g_153;
                    }
                    else
                    {
                        l_1545 = (-7L);
                    }
                    g_26[g_167] = ((func_116(l_1543[1][2], ((safe_div_func_uint32_t_u_u(g_154[3][2][0], ((((safe_lshift_func_uint8_t_u_u(((0x13L ^ ((((safe_div_func_int16_t_s_s(((+g_225) < ((safe_sub_func_int32_t_s_s(((func_18((safe_add_func_int16_t_s_s(((l_1545 || (safe_sub_func_uint8_t_u_u(0x6EL, 250UL))) && g_26[g_167]), ((((g_26[g_167] > 1UL) < l_1545) ^ l_1558[1]) >= g_1441))), g_945, g_921[0], g_1105) | g_1345) & l_1559), l_1545)) ^ g_167)), 0xD3F7L)) <= l_1558[1]) > 0L) | g_231[1])) | l_1559), 6)) && g_921[0]) & g_192) || g_154[2][4][0]))) < (-1L)), l_15, l_1558[1], g_192) && 0x77L) != 0x07E228ADL);
                    g_945 = ((-1L) <= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((((func_23(g_532) != (safe_sub_func_int32_t_s_s(l_1545, ((safe_lshift_func_int8_t_s_u(g_921[2], (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(7L, g_921[0])), 8)))) > ((safe_unary_minus_func_uint16_t_u(l_1559)) <= (safe_sub_func_int32_t_s_s(func_116(((func_116(l_1545, g_167, g_1468, l_1545, l_1558[1]) & l_1545) <= l_1543[1][1]), l_1502, l_1559, l_1545, g_192), g_167))))))) > g_1424) || l_1350) && g_1441), 15)), 0x61CDL)), 14)), g_6)), g_6)));
                    for (g_224 = 2; (g_224 >= 0); g_224 -= 1)
                    {
                        int i;
                        g_26[g_167] = g_26[(g_224 + 1)];
                        g_195 = (-8L);
                        g_945 = g_231[1];
                    }
                }
                return g_1363;
            }
            l_1350 = (g_532 >= (safe_rshift_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(g_921[2], ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(func_102((l_1545 | 0x1438B49FL), func_18(func_128(l_1350, (~(safe_sub_func_uint8_t_u_u(func_56(((safe_div_func_int8_t_s_s(func_113((safe_mod_func_uint16_t_u_u(0x092DL, (l_1543[1][2] && ((safe_unary_minus_func_uint32_t_u((((safe_rshift_func_int8_t_s_s(l_1340, ((safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((g_193 && g_26[0]), g_192)), l_1462)) ^ g_224) != l_1462), 5)) > 0x70L))) > l_1332) & 247UL))) & g_1441))))), 0x23L)) || 0x0FL), l_1545, g_921[1]), g_195))), g_1345, g_231[1]), g_532, g_1608, g_532), g_1507, g_1345, g_921[1]), 0x4AAAL)) >= 0x6CL), 4)), l_1323)), 2)) > g_945))), 8)));
        }
        else
        {
            unsigned l_1609 = 6UL;
            unsigned l_1615 = 0xF67A235DL;
            unsigned l_1657 = 4294967292UL;
            unsigned char l_1672 = 0UL;
            int l_1683 = 0xB40D8138L;
            int l_1787 = 1L;
            const unsigned l_1806[4][9][3] = {{{1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}}, {{1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}}, {{1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}}, {{1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}, {1UL, 0xE96E95A8L, 8UL}}};
            short l_1828 = 0x53ACL;
            int i, j, k;
            g_26[3] = l_1504;
            if (func_128(((-7L) ^ (l_1609 <= (safe_unary_minus_func_uint32_t_u(l_1609)))), l_1609, (func_2(((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_1502, 7UL)), func_116(g_231[1], l_1615, l_1370, g_945, l_1609))) | l_15), g_1616, g_1424) <= g_1608), g_231[4]))
            {
                unsigned short l_1630 = 0x834EL;
                unsigned char l_1669 = 0x48L;
                char l_1684 = 0x6EL;
                l_1350 = g_1617;
                if ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((func_128((0xB6L < (safe_lshift_func_uint16_t_u_u((l_1350 & (((safe_div_func_int16_t_s_s(g_1617, 0xE3F6L)) & l_1630) && (func_18(l_1630, l_1462, (safe_rshift_func_uint8_t_u_s(0xCAL, g_1617)), l_1340) < g_225))), l_1504))), l_1615, l_1504, g_154[2][2][0]) & g_1377), g_231[1])) || 65533UL), 4)), l_1630)), (-1L))))
                {
                    unsigned l_1646 = 7UL;
                    int l_1668 = 0xD59B3BA0L;
                    if ((g_1616 >= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((func_9(g_1441, g_195, (g_221 != 0xE7E1L), ((safe_rshift_func_uint8_t_u_s(((g_26[3] >= (safe_lshift_func_uint16_t_u_s((l_1615 >= g_1608), 15))) & func_23(g_1424)), l_1630)) > g_26[3]), l_1323) == g_1507), g_1617)), 0x79DCAC1BL))))
                    {
                        int l_1645 = 0x3EA1FA39L;
                        g_1363 = (func_102(g_921[2], (+(~(safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((0x66L >= 2L), 6)), l_1645)))), (+l_1645), l_1646, g_195) != (l_1645 == 0UL));
                        g_1617 = (l_1609 <= (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((l_1645 > (safe_sub_func_int16_t_s_s(g_532, l_1646))) | (4294967295UL <= g_1468)), l_1615)), (safe_mod_func_uint16_t_u_u(l_1462, 0x7C9CL)))) != g_1363), l_1630)));
                        g_1363 = (((func_128(((l_1657 && 0x55F4L) <= ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((l_1615 | 0xF0L), l_1630)) > ((safe_div_func_uint16_t_u_u(0xCF44L, (~(0x04E5L || func_23(g_231[1]))))) <= l_1646)), g_1617)) ^ l_1615)), l_1645, g_1363, l_1615) < (-8L)) && l_1504) >= g_532);
                    }
                    else
                    {
                        g_26[3] = func_23((func_2(l_1615, ((safe_lshift_func_int16_t_s_s((-1L), (((g_153 <= (0x74L >= l_1630)) == g_532) ^ (safe_add_func_uint32_t_u_u(l_1668, l_1323))))) != (~g_26[3])), l_1669) | 0xFDCDL));
                        g_26[3] = g_224;
                    }
                }
                else
                {
                    unsigned l_1681 = 0UL;
                    int l_1716 = 4L;
                    if ((safe_sub_func_uint8_t_u_u((g_153 < l_1672), g_1507)))
                    {
                        l_1683 = ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((0L > (safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((l_1681 >= (safe_unary_minus_func_int32_t_s(l_1462))) || (-2L)) >= 5UL) >= l_1609), g_26[1])), 4294967288UL))), l_1370)), g_193)) > 1UL);
                        return l_1543[0][4];
                    }
                    else
                    {
                        short l_1695 = 2L;
                        l_1684 = l_1669;
                        l_1683 = func_56((safe_add_func_uint16_t_u_u(l_1657, func_2((safe_unary_minus_func_uint16_t_u((g_26[3] != 0xEC50C15DL))), (((-1L) > l_1669) & ((safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_921[0], func_128(l_1695, (g_195 || (((l_1672 >= l_1681) && l_1370) > g_231[1])), l_1695, g_1345))), 5)) < l_1350), g_921[0])))) <= 0xDDL)), g_26[3]))), g_231[6], g_1363);
                    }
                    for (g_945 = 24; (g_945 != (-17)); g_945--)
                    {
                        l_1716 = ((safe_rshift_func_uint16_t_u_s(g_231[1], ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x53L, (0xCDL <= ((safe_add_func_int8_t_s_s(1L, ((safe_lshift_func_uint8_t_u_s(g_221, 2)) >= l_1462))) | ((safe_lshift_func_int8_t_s_s((1UL <= (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((246UL | l_1684), g_6)), 0x6DL)), g_1377))), 2)) > l_1323))))), l_1681)) >= l_1681))) || 4294967295UL);
                    }
                }
                l_1350 = func_128((!((g_1616 || (0x69AFL < l_1323)) & (func_2(l_1615, ((l_1543[1][2] == (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(0xEC58L, (-1L))), l_1350)) > ((((safe_sub_func_int32_t_s_s(g_154[2][6][0], g_1377)) >= g_532) >= g_945) > (-1L))) < 0xC9398662L)) && l_1543[2][3]), g_192) == l_1723))), l_1543[1][2], g_1507, l_1669);
            }
            else
            {
                int l_1726 = 0xABB9C34DL;
                unsigned l_1744 = 0x6157BDEFL;
                for (l_1350 = 0; (l_1350 != (-5)); --l_1350)
                {
                    unsigned l_1745[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1745[i] = 4294967295UL;
                    g_195 = g_193;
                    l_1726 = l_1723;
                    if ((l_1350 > 0x95CDL))
                    {
                        unsigned l_1737 = 4294967295UL;
                        l_1683 = g_231[2];
                        g_945 = (safe_mod_func_int8_t_s_s(l_1609, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_1462, 3)), 2)), (safe_lshift_func_int8_t_s_s(l_1737, (((g_1377 && (0xDCA2L <= l_1370)) == g_6) < ((safe_lshift_func_int8_t_s_u((func_102((safe_sub_func_int8_t_s_s(((func_102((safe_lshift_func_int8_t_s_u(func_102(func_23(g_1468), l_1726, g_532, g_26[3], l_1737), g_231[1])), g_1617, g_1617, g_1345, g_1608) == l_15) < l_1504), g_1377)), l_1744, l_1745[0], g_1105, l_1745[0]) <= g_231[0]), l_1746)) < g_1616))))))));
                        l_1504 = (func_2(l_1744, g_231[1], (safe_div_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_1745[0] && (0L ^ (l_1737 <= (func_2(func_128(l_1745[0], g_1608, l_1753, ((((0x53L >= l_1726) == 6L) & 0xB155L) <= g_921[0])), g_1616, l_1726) || l_1657)))), l_1745[0])), 1L)) > 0xA0A0255FL) || g_1105) || 1L), 0xD24D3890L))) && l_1502);
                        if (g_1468)
                            break;
                    }
                    else
                    {
                        g_945 = g_1105;
                    }
                    if (((func_18(l_1657, g_193, (func_113(((0xF052859BL | (255UL && (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((g_225 == ((-1L) > ((safe_lshift_func_int16_t_s_s(g_1760, 9)) <= 4294967289UL))) && (safe_lshift_func_int16_t_s_u((+g_921[1]), 9))), 13)), g_224)))) >= g_6)) || 0x5A12L), l_1723) > g_224) < 251UL))
                    {
                        short l_1776 = 7L;
                        g_1617 = ((g_1765 <= 65535UL) == ((0x69L | (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u((func_56(g_1377, g_193, ((safe_lshift_func_uint8_t_u_u(l_1340, 3)) > g_1345)) & (g_1377 == l_1776)), 0x4EL)) ^ 0x53L) != 65535UL) ^ 1UL), 15)) < l_1745[0]), 0)), g_1616))) == 4UL));
                        g_26[3] = g_153;
                        g_26[3] = g_193;
                        if (l_1657)
                            break;
                    }
                    else
                    {
                        g_26[3] = l_1672;
                    }
                }
                l_1788 = (safe_add_func_int16_t_s_s(g_1468, func_116((safe_add_func_int8_t_s_s(g_921[0], g_1507)), l_1323, g_225, (!(safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u((((1L > (4294967295UL <= func_18((func_18(g_225, (safe_div_func_uint16_t_u_u(l_1723, l_1543[1][2])), l_1744, l_1462) != l_1787), g_1377, l_1543[1][2], l_1543[2][4]))) > 4294967295UL) & g_225), 3)) >= g_225) && l_1609) & (-1L)), 0x9DL))), l_1504)));
                if ((safe_lshift_func_uint16_t_u_s((g_1345 >= ((safe_sub_func_uint8_t_u_u(l_1683, (safe_mod_func_uint8_t_u_u((l_1543[1][2] < (g_195 == func_56(l_1370, l_1787, l_1726))), (safe_lshift_func_uint8_t_u_s(g_1105, g_532)))))) || g_532)), l_1672)))
                {
                    short l_1800 = 0x4220L;
                    if (g_532)
                    {
                        unsigned char l_1799 = 0UL;
                        g_26[2] = (((safe_lshift_func_int16_t_s_s(2L, 5)) < ((g_945 < (+0x38D88E0EL)) == func_56(l_1799, l_1672, l_1787))) | (func_23(l_1723) == l_1800));
                        g_1617 = ((((safe_lshift_func_int8_t_s_s(g_225, g_1377)) != l_1726) | l_1672) | ((!g_224) || l_1800));
                    }
                    else
                    {
                        g_1363 = g_231[5];
                        l_1683 = g_225;
                    }
                    g_195 = g_224;
                }
                else
                {
                    for (l_1609 = 0; (l_1609 <= 0); l_1609 += 1)
                    {
                        unsigned short l_1803 = 0UL;
                        return l_1803;
                    }
                }
            }
            if ((g_225 ^ (safe_div_func_uint16_t_u_u((l_1806[2][3][0] <= (safe_add_func_int32_t_s_s(func_23(func_23((g_193 || (safe_rshift_func_uint16_t_u_s(g_921[1], 11))))), (!g_231[1])))), 0x5407L))))
            {
                unsigned char l_1821 = 0xDFL;
                l_1828 = (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_153, (g_1363 || l_1504))), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-8L), ((250UL > (safe_sub_func_int16_t_s_s(l_1821, func_56(g_231[1], ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(l_1826[0], (g_1441 && l_1827))) != l_1502), l_1787)) <= l_1827), g_945)))) | l_1746))), g_921[1]))));
                for (g_1105 = 0; (g_1105 <= 2); g_1105 += 1)
                {
                    if (g_1424)
                        break;
                    return g_1617;
                }
                g_945 = (g_154[1][6][0] < (func_116(l_1323, l_1787, (safe_add_func_uint32_t_u_u(l_1350, (g_225 & g_6))), (l_1831 || ((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(g_221, l_1826[0])), 6UL)) >= l_1821)), g_1760) | 0x60503C8AL));
            }
            else
            {
                unsigned short l_1836 = 0xF9B7L;
                return l_1836;
            }
        }
    }
    l_1504 = 3L;
    return l_1837[3];
}







static int func_2(short p_3, const int p_4, short p_5)
{
    short l_944 = 0x43CEL;
    int l_946 = 0x77AA3415L;
    char l_1007 = 0xB5L;
    int l_1318 = 1L;
    unsigned short l_1321 = 0x72B7L;
    unsigned l_1322[6][2][2] = {{{0x3558FEF6L, 4294967295UL}, {0x3558FEF6L, 4294967295UL}}, {{0x3558FEF6L, 4294967295UL}, {0x3558FEF6L, 4294967295UL}}, {{0x3558FEF6L, 4294967295UL}, {0x3558FEF6L, 4294967295UL}}, {{0x3558FEF6L, 4294967295UL}, {0x3558FEF6L, 4294967295UL}}, {{0x3558FEF6L, 4294967295UL}, {0x3558FEF6L, 4294967295UL}}, {{0x3558FEF6L, 4294967295UL}, {0x3558FEF6L, 4294967295UL}}};
    int i, j, k;
    l_946 = (((0x72L || (safe_add_func_int16_t_s_s(l_944, g_945))) ^ g_921[0]) <= ((+(g_167 > (p_4 != ((~l_944) | 0xA55B54C8L)))) < (l_944 >= g_231[4])));
    if (((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(((((safe_div_func_uint32_t_u_u((p_3 & func_23(p_4)), (((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((func_113(p_3) | l_944) != (safe_add_func_uint16_t_u_u(l_946, ((g_6 | func_23(((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((p_4 & 0xD6L) != 0x29L), p_3)), p_3)) > 0UL))) < g_154[2][5][0])))) && l_944), 0)), 0x66L)) || p_4) & g_192))) >= l_944) >= g_231[0]) < g_154[1][4][0]), 6)) || l_946), 1)) < 0xBFD0L))
    {
        char l_967 = 0x6EL;
        int l_971 = 0xC38F840AL;
        unsigned char l_1026 = 0x86L;
        if (((safe_lshift_func_int16_t_s_s((+(safe_mod_func_uint8_t_u_u(func_116(p_3, l_967, l_967, ((l_946 ^ (safe_unary_minus_func_int8_t_s(((l_944 == ((p_4 ^ 1L) ^ l_946)) || (safe_lshift_func_int8_t_s_s(l_967, p_5)))))) == 7L), p_4), p_4))), 15)) <= p_5))
        {
            unsigned l_983 = 0xCD18E3E5L;
            int l_984[5][10][1] = {{{0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}}, {{0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}}, {{0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}}, {{0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}}, {{0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}, {0xEC26B5B7L}}};
            unsigned l_1014 = 0x1C7BCBCAL;
            int i, j, k;
            for (g_195 = 3; (g_195 >= 0); g_195 -= 1)
            {
                unsigned short l_987 = 65532UL;
                int l_988 = (-1L);
                unsigned l_1027 = 4294967295UL;
                int i;
                g_26[g_195] = (-1L);
                l_971 = g_26[g_195];
                if (p_5)
                {
                    unsigned l_992 = 2UL;
                    g_26[1] = (0x8EL ^ (((-1L) && ((g_225 && (+(g_154[1][5][0] && p_4))) != 0x1581L)) ^ 1L));
                    if (((safe_sub_func_int16_t_s_s(p_3, (0UL & (g_167 <= l_967)))) && (g_26[g_195] >= func_23(func_23(func_23(l_967))))))
                    {
                        const unsigned short l_978 = 0xE6C4L;
                        l_971 = (safe_lshift_func_uint8_t_u_s(((((g_192 >= l_978) >= (l_946 != g_221)) && func_56(p_3, (safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(g_231[1], func_56((l_971 >= 7L), (p_3 ^ l_967), p_4))) & g_231[4]), l_983)), l_983)) ^ p_4), g_921[0]));
                        l_984[0][5][0] = g_945;
                        l_971 = g_224;
                        l_987 = (((g_195 <= (0x9EAC7FADL >= (p_3 < (func_23(g_26[2]) ^ 0x3A01L)))) > (safe_rshift_func_int8_t_s_u(func_23((p_3 & 0L)), p_3))) >= l_971);
                    }
                    else
                    {
                        l_988 = p_4;
                    }
                    if (p_4)
                    {
                        g_26[g_195] = l_946;
                        l_984[0][5][0] = g_231[1];
                    }
                    else
                    {
                        unsigned l_989 = 9UL;
                        if (p_5)
                            break;
                        l_946 = func_56(l_989, (safe_lshift_func_uint16_t_u_s(func_113(p_3), g_192)), l_992);
                        if (g_154[2][6][0])
                            continue;
                        l_984[0][5][0] = (l_971 >= l_992);
                    }
                }
                else
                {
                    g_26[3] = (-1L);
                    for (g_192 = 0; (g_192 <= 3); g_192 += 1)
                    {
                        int i;
                        g_26[g_192] = p_3;
                        l_946 = (safe_rshift_func_uint8_t_u_u((+p_5), (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(g_6, g_221)), (safe_sub_func_int16_t_s_s((g_231[1] || g_193), 1L))))));
                    }
                    for (g_225 = 0; (g_225 <= 2); g_225 += 1)
                    {
                        l_1007 = ((safe_div_func_int8_t_s_s((g_224 >= (((safe_sub_func_int16_t_s_s(g_26[g_195], l_971)) != l_971) > (safe_add_func_uint32_t_u_u(l_946, ((func_23((g_153 > 0xC33FL)) && p_3) < g_193))))), 0x27L)) || p_3);
                        g_6 = ((func_23(p_3) == 7UL) | 0UL);
                        return p_3;
                    }
                    for (g_224 = 0; (g_224 <= 0); g_224 += 1)
                    {
                        int i;
                        g_26[g_195] = g_26[(g_224 + 2)];
                        g_26[g_195] = g_921[(g_224 + 1)];
                        g_26[g_195] = 0xA8D5CF58L;
                        if (g_6)
                            break;
                    }
                }
                if ((safe_rshift_func_int16_t_s_s(g_231[1], 7)))
                {
                    unsigned l_1015 = 4294967295UL;
                    l_971 = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_18(l_1014, l_1015, ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s(0x8D7DF8EEL, g_231[1])) || (((255UL != (safe_mod_func_int8_t_s_s(func_56((((g_6 || ((4UL != p_4) == (safe_rshift_func_int8_t_s_s(0xB6L, 4)))) && l_1026) & l_1027), p_4, g_153), (-7L)))) | g_154[4][0][0]) | g_532)) <= 0xFAL), 1)), 9)) != g_6), l_1007), 1UL)), 0L));
                }
                else
                {
                    g_945 = (l_1007 ^ p_3);
                }
            }
            return p_4;
        }
        else
        {
            int l_1056 = 0x5C15B6DBL;
            for (g_221 = 0; (g_221 <= 3); g_221 += 1)
            {
                int i;
                g_26[g_221] = (safe_mod_func_int8_t_s_s((g_26[g_221] < ((safe_lshift_func_uint16_t_u_u((l_1026 <= ((func_23(func_23((((g_26[g_221] < 0x52FFL) >= (func_23((+((l_944 || ((func_23((~l_967)) != (g_26[g_221] ^ 4294967287UL)) == g_532)) && l_971))) ^ g_193)) == g_26[g_221]))) != g_193) < g_6)), 2)) > g_26[3])), p_3));
                for (l_946 = 3; (l_946 >= 0); l_946 -= 1)
                {
                    int i;
                    g_26[g_221] = (((0x9077L < (((safe_rshift_func_int8_t_s_s((g_26[l_946] && func_23(g_195)), 4)) & (safe_lshift_func_int16_t_s_s(l_946, 12))) < l_967)) < (p_3 > g_231[2])) && 9L);
                    if (g_221)
                        break;
                }
                l_971 = (g_945 <= p_5);
            }
            l_946 = (-7L);
            for (l_946 = 0; (l_946 <= 3); l_946 += 1)
            {
                int i;
                l_971 = 1L;
                l_971 = (safe_rshift_func_uint8_t_u_u((g_26[l_946] != (safe_add_func_uint16_t_u_u((!0x21C7L), func_23((safe_rshift_func_uint16_t_u_s(func_23(((((((g_225 == g_195) || (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_167 != (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_193, 0xECL)), g_231[5]))), ((safe_mod_func_uint8_t_u_u(func_23(p_4), l_1056)) < l_1026))), 0xFB78L))) ^ p_5) || l_1056) == g_221) & g_921[0])), l_944)))))), p_5));
                if (p_3)
                    break;
            }
            l_1056 = 0xAE650D87L;
        }
        g_195 = (g_221 > 253UL);
    }
    else
    {
        return g_153;
    }
    for (g_6 = (-4); (g_6 == 1); ++g_6)
    {
        short l_1067 = 1L;
        unsigned char l_1142 = 0xEBL;
        int l_1226 = (-4L);
        const int l_1287 = 0x1F680C33L;
        for (l_946 = 0; (l_946 <= 0); l_946 += 1)
        {
            unsigned l_1069 = 0xAE639CBCL;
            for (g_167 = 0; (g_167 <= 0); g_167 += 1)
            {
                int l_1074 = 5L;
                int l_1092[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_1092[i] = (-1L);
                for (g_225 = 0; (g_225 <= 0); g_225 += 1)
                {
                    int l_1085[10][10][2] = {{{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}, {{0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}, {0x0F22423CL, 0xF02B46F8L}}};
                    int i, j, k;
                    l_1067 = (safe_sub_func_uint16_t_u_u(((0x2F3AL >= func_23(g_154[g_225][(g_225 + 4)][l_946])) | (safe_mod_func_uint32_t_u_u(0xDCD5AF89L, g_154[g_225][(g_167 + 9)][l_946]))), (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_154[(l_946 + 1)][(l_946 + 1)][g_167], 4)), g_221))));
                    l_1085[2][0][0] = ((safe_unary_minus_func_int8_t_s((p_3 > l_1069))) & (!((safe_rshift_func_uint8_t_u_s((l_944 | func_113((safe_sub_func_int32_t_s_s((-1L), ((((l_1074 == ((p_4 ^ (safe_sub_func_uint8_t_u_u(p_4, (safe_sub_func_uint8_t_u_u((p_3 < (((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((g_153 > l_1074) <= 0L), 0x204DL)), g_154[g_225][(g_167 + 9)][l_946])) == 0x560932EDL), 7UL)) ^ 0x8FF9L) ^ p_3)), p_4))))) <= l_1069)) & p_5) & l_1007) >= 4L))))), 4)) ^ g_193)));
                    l_1092[9] = ((((((safe_mod_func_int8_t_s_s(((g_192 <= ((((g_26[3] >= p_4) | g_193) || l_1067) >= (((safe_rshift_func_uint16_t_u_s(func_23(p_4), (((safe_add_func_uint32_t_u_u(l_1069, 1UL)) != 7L) != 0xF6L))) >= g_154[2][1][0]) | l_1067))) == p_5), l_1067)) > g_192) || l_1067) > 1L) >= 5UL) ^ (-4L));
                    if ((p_3 != (safe_add_func_int16_t_s_s(p_4, 65527UL))))
                    {
                        g_195 = (safe_rshift_func_int8_t_s_s((~((safe_rshift_func_int8_t_s_s(p_4, 0)) == ((p_4 == (0L && func_113(g_26[3]))) <= (safe_rshift_func_uint16_t_u_s(((func_23(func_23(func_23((0L == 0x080AL)))) & 4294967295UL) < 3UL), 7))))), g_221));
                        g_26[3] = (safe_sub_func_uint8_t_u_u(p_4, g_154[g_225][(g_167 + 9)][l_946]));
                    }
                    else
                    {
                        unsigned char l_1106 = 0x01L;
                        g_26[2] = g_195;
                        g_26[3] = (safe_mod_func_int8_t_s_s(g_1105, (func_113(l_1106) ^ (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(0x95F3EFE6L, 0xCFACCC64L)), p_3)) | p_3), ((safe_mod_func_int32_t_s_s(((l_1069 <= (safe_rshift_func_int16_t_s_s(l_946, l_946))) != g_193), g_231[1])) && 0x4CL))) <= g_221) < 0UL), p_5)) | 65535UL) != p_4), g_921[1])), p_3)))));
                        g_26[3] = p_3;
                        g_26[1] = (safe_mod_func_uint8_t_u_u(((g_195 || (safe_add_func_int8_t_s_s(g_154[g_225][(g_225 + 4)][l_946], ((safe_div_func_int16_t_s_s((g_921[0] || ((func_116(l_1085[2][0][0], p_4, l_1092[9], (p_5 ^ (safe_mod_func_int16_t_s_s((g_231[2] < (safe_rshift_func_int8_t_s_s((((((8UL >= g_231[1]) == 0x52C8L) || 0x8A65L) | 8UL) & g_224), l_1106))), p_5))), l_1106) <= g_945) && 0UL)), l_1067)) | l_1092[9])))) > l_1106), 246UL));
                    }
                }
                g_195 = (safe_unary_minus_func_int32_t_s(l_944));
                g_26[3] = ((((safe_add_func_uint8_t_u_u(p_4, 1L)) <= (((65528UL < p_3) | (safe_lshift_func_int16_t_s_u(p_4, (g_26[3] > ((safe_div_func_uint16_t_u_u((l_1092[9] | (l_1067 == ((g_26[0] ^ l_946) & 0x7DL))), l_1069)) & l_1007))))) ^ 9L)) != 0x954C8D1FL) != g_1105);
                if (p_3)
                    continue;
            }
        }
        for (g_167 = 0; (g_167 <= 0); g_167 += 1)
        {
            int l_1175 = 0xFB79DE12L;
            int l_1176[5];
            unsigned short l_1244 = 65535UL;
            short l_1250 = 0xD991L;
            short l_1286 = 0x4FC4L;
            char l_1296 = 1L;
            int i;
            for (i = 0; i < 5; i++)
                l_1176[i] = 0L;
            for (p_3 = 0; (p_3 <= 0); p_3 += 1)
            {
                const unsigned l_1148[1] = {2UL};
                int l_1182 = 0xAE8D01E0L;
                int l_1241 = (-1L);
                int i;
                if ((safe_div_func_uint16_t_u_u(0xB753L, l_1142)))
                {
                    if (g_6)
                        break;
                    if (g_1105)
                        break;
                }
                else
                {
                    short l_1149 = 0x17D4L;
                    const short l_1172 = 0x5A94L;
                    int l_1173 = (-3L);
                    for (l_1007 = 0; (l_1007 <= 0); l_1007 += 1)
                    {
                        char l_1143 = 0x97L;
                        g_26[3] = (((p_5 != ((l_1143 > ((g_26[3] == g_231[3]) >= (p_4 ^ (safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(((func_23(func_23(l_1148[0])) || 0x9CFBL) && g_26[3]), l_1143)), 0UL))))) & l_1149)) || g_193) ^ g_193);
                    }
                    l_1173 = (safe_add_func_uint16_t_u_u((((((p_4 | l_1149) > (p_4 < (p_3 > ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((+(l_1142 != (g_225 | (((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((g_1105 < 0xE97BL), 1)), (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((!(g_921[2] & g_532)) & p_3) & g_921[0]) & p_3), 5)), p_3)), g_154[0][9][0])))) > g_167) < g_921[0]) || 0L) < g_26[3])))), p_5)), p_5)), p_5)) < p_5)))) && 3L) || p_3) == p_5), l_1172));
                    g_945 = g_167;
                    if (func_56((safe_unary_minus_func_uint32_t_u((g_26[3] == p_3))), g_231[1], p_5))
                    {
                        l_1175 = g_192;
                    }
                    else
                    {
                        char l_1181 = 0xC7L;
                        l_1176[3] = p_4;
                        if (l_1142)
                            break;
                        g_195 = g_231[1];
                        l_1182 = (safe_div_func_int32_t_s_s(p_4, func_56(p_5, (safe_lshift_func_int16_t_s_u(((l_1175 | g_192) > g_532), (1L <= (0L & p_5)))), l_1181)));
                    }
                }
                for (l_944 = 2; (l_944 >= 0); l_944 -= 1)
                {
                    int i, j, k;
                    g_945 = ((-1L) != (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((g_921[(p_3 + 2)] ^ (g_154[(l_944 + 2)][(l_944 + 3)][p_3] == (((((safe_rshift_func_uint8_t_u_s(0xD4L, 7)) <= (p_5 ^ g_231[0])) && (safe_add_func_uint16_t_u_u(l_946, ((safe_add_func_int16_t_s_s(p_5, g_26[3])) == p_4)))) == p_4) != l_1182))) | p_5), 9)), g_921[(p_3 + 2)])));
                    if (l_1142)
                    {
                        unsigned l_1203 = 4294967294UL;
                        l_1203 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(func_116(p_3, g_6, (0x5B1AL || (safe_rshift_func_int8_t_s_u((-1L), 0))), func_113(((l_944 != ((-1L) >= (p_4 <= (safe_add_func_uint8_t_u_u(g_921[0], 0xB6L))))) < 7UL)), p_3), 3)), g_921[0])), 13));
                    }
                    else
                    {
                        short l_1225 = 0x7A05L;
                        g_26[3] = (safe_div_func_uint8_t_u_u(l_1007, p_4));
                        l_1226 = ((-1L) >= (safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(((-9L) < func_116((!(safe_div_func_uint8_t_u_u((l_1175 < (safe_rshift_func_uint16_t_u_u(p_4, 9))), (safe_sub_func_uint32_t_u_u(g_6, ((((safe_rshift_func_uint16_t_u_u(0x8F4DL, g_195)) > (((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u((0x53BE9C69L != func_56((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(g_154[(l_944 + 2)][(l_944 + 3)][p_3], (-7L))), g_6)), g_193, p_3)), 11)))) > l_1182) != 0xD4L)) == l_944) >= l_1176[0])))))), l_1225, l_1148[0], l_1225, l_1142)), p_4)) ^ 0x28AD990FL) == (-1L)), l_1225)));
                        l_946 = (func_56((safe_div_func_int16_t_s_s(func_23(p_5), ((safe_sub_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(p_4, p_4)) ^ l_1225) != p_4), g_153)) || ((safe_add_func_uint32_t_u_u((g_225 >= ((func_18(l_1148[0], g_921[2], g_26[3], g_6) == p_5) > g_154[3][5][0])), l_1007)) <= 7UL)))), p_5, p_3) & g_225);
                    }
                }
                if (g_224)
                    break;
                l_1176[3] = 0xAE19B13FL;
                for (l_946 = 0; (l_946 <= 0); l_946 += 1)
                {
                    unsigned l_1247[4];
                    int l_1253 = 0xD73AFAC7L;
                    unsigned char l_1267[5];
                    const char l_1268[2][8][4] = {{{(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}}, {{(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}, {(-1L), 0xE8L, 0x86L, 0xE8L}}};
                    unsigned l_1271 = 0x10B5FB44L;
                    short l_1288 = 0x3711L;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1247[i] = 4294967295UL;
                    for (i = 0; i < 5; i++)
                        l_1267[i] = 246UL;
                    g_26[3] = func_23((((((safe_mod_func_uint16_t_u_u((((func_56(func_113(((safe_div_func_int8_t_s_s((func_113((!(((safe_mod_func_int32_t_s_s(p_3, g_921[0])) && (func_116(l_944, g_532, g_192, l_1241, ((l_1244 ^ p_5) < ((safe_rshift_func_uint16_t_u_s(func_56(g_193, g_921[0], p_5), 10)) <= g_193))) >= p_5)) > l_1007))) & 9UL), 0xA1L)) >= (-7L))), l_1182, g_231[1]) != g_193) >= p_3) < l_1182), g_192)) < p_4) > l_1247[1]) ^ 4L) & 0xB3B4A673L));
                    for (l_1142 = 0; (l_1142 <= 0); l_1142 += 1)
                    {
                        l_1250 = (safe_mod_func_uint32_t_u_u((p_5 | 0xEDCAF75FL), 4294967295UL));
                        l_1253 = ((0x4C8D533CL < p_5) != (safe_add_func_uint32_t_u_u(p_4, 0x23AF69AEL)));
                    }
                    for (g_225 = 0; (g_225 <= 0); g_225 += 1)
                    {
                        l_1241 = (safe_add_func_uint16_t_u_u(g_921[0], (safe_unary_minus_func_int16_t_s((l_1182 ^ (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(0x0423L, (safe_sub_func_int16_t_s_s(l_1267[3], 0x2BB1L)))), (p_4 | ((2L >= (!l_1148[0])) != p_3)))), 0x6DL)), g_231[1])))))));
                        if (l_1268[1][6][3])
                            continue;
                        g_945 = p_4;
                        g_26[3] = p_3;
                    }
                    if (p_4)
                    {
                        l_1226 = (safe_lshift_func_int8_t_s_u(p_5, (!(0xCA85L != p_3))));
                        g_945 = l_1271;
                        if (l_1176[3])
                            break;
                        l_1288 = (safe_sub_func_int8_t_s_s(p_3, ((~p_5) ^ ((((((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(p_5, ((safe_lshift_func_uint8_t_u_u((0xA2L < (p_4 | func_56((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((func_113((safe_mod_func_uint32_t_u_u((((!l_1241) <= (((((-1L) > func_23(l_1182)) && g_193) | 0x24L) == l_1286)) && l_1287), l_1226))) && p_3), 6)), 11)), p_5, l_1007))), 6)) ^ 0xEA45L))), p_4)) || g_192) & g_153) < l_1007) || 0x15L) > p_5))));
                    }
                    else
                    {
                        l_1176[4] = p_5;
                        g_945 = func_56(l_1148[0], func_18(l_944, p_5, p_3, (safe_add_func_uint8_t_u_u(1UL, g_193))), p_3);
                    }
                }
            }
            for (g_193 = 0; (g_193 <= 0); g_193 += 1)
            {
                unsigned short l_1295[10][4] = {{0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}, {0x9660L, 0xDFD4L, 3UL, 0x828EL}};
                const short l_1301 = 0xFB57L;
                int i, j;
                if (func_18(g_195, (g_532 && (((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(func_18((((l_1295[0][0] <= (func_23(p_4) < p_5)) || ((func_18(func_113(l_1296), (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_1067, 8L)), p_4)), p_3, g_192) == g_945) >= p_3)) == p_3), p_5, l_1007, l_1301), p_4)) <= l_1295[0][0]), 65532UL)) == g_154[3][1][0]) | l_1142)), g_224, p_3))
                {
                    if (l_1250)
                        break;
                }
                else
                {
                    g_945 = (l_1142 | l_1296);
                    if (g_945)
                        break;
                }
            }
        }
        l_1318 = (safe_add_func_int16_t_s_s((1L && 0x4CL), (safe_lshift_func_uint16_t_u_u(func_9(p_3, l_1287, (safe_div_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u((!((safe_add_func_uint32_t_u_u(((((((safe_lshift_func_int8_t_s_u((p_3 | func_23((p_3 > ((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((func_23(p_3) == (0x7AE72572L == l_1142)) == (-1L)), g_231[1])), 252UL)) >= l_946)))), l_1007)) || p_5) | 1L) <= 0xB46AL) >= 1L) < p_5), p_3)) < p_4)), p_3)) >= 0xDF9BL) && l_1287) == l_1007) || l_1007), 0xF5L)), l_1067, p_4), l_1007))));
        l_1322[2][0][1] = ((safe_lshift_func_uint16_t_u_u(0xC5E7L, p_3)) && l_1321);
    }
    return p_3;
}







static unsigned short func_9(unsigned short p_10, int p_11, short p_12, unsigned p_13, unsigned p_14)
{
    int l_55 = 0x32C75278L;
    const unsigned char l_70 = 0xFAL;
    unsigned l_95[8] = {2UL, 0x2A6F4112L, 2UL, 0x2A6F4112L, 2UL, 0x2A6F4112L, 2UL, 0x2A6F4112L};
    unsigned l_115 = 4294967295UL;
    int l_830 = 0x0AAD8C09L;
    unsigned char l_892 = 0x25L;
    unsigned char l_894 = 0x8FL;
    int i;
    for (p_11 = 3; (p_11 >= 0); p_11 -= 1)
    {
        int i;
        g_26[p_11] = (safe_unary_minus_func_int8_t_s(((safe_mod_func_int8_t_s_s((65530UL | (4294967288UL && g_26[p_11])), (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0L, (safe_add_func_uint8_t_u_u(p_10, (safe_rshift_func_uint8_t_u_s(func_23((safe_add_func_uint32_t_u_u((func_23((((safe_sub_func_int8_t_s_s(g_6, (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((g_26[p_11] > g_26[3]) ^ g_26[2]), 6)), p_14)))) < g_6) < g_26[p_11])) && p_10), 4294967295UL))), p_12)))))), 0L)), g_6)) || p_13), g_26[p_11])), 6)))) & 0L)));
    }
    p_11 = 0x7C525AC8L;
    if (l_55)
    {
        unsigned l_112 = 0UL;
        unsigned char l_806 = 0xEAL;
        int l_831 = 0x2A4DF3CAL;
        p_11 = func_56(p_14, ((safe_div_func_int32_t_s_s((p_12 || (safe_mod_func_int32_t_s_s(1L, (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_10, (((safe_sub_func_int16_t_s_s(g_26[0], func_23(((!0x55505F45L) <= l_55)))) > l_70) & g_26[3]))), 0UL))))), 4294967295UL)) & 0x772679F1L), p_10);
        for (p_11 = 9; (p_11 < (-16)); --p_11)
        {
            char l_133[2];
            unsigned l_807[2];
            int l_873 = 1L;
            const char l_893 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_133[i] = 0x3DL;
            for (i = 0; i < 2; i++)
                l_807[i] = 0x4BADC43CL;
            if ((0xDEL <= (safe_mod_func_uint8_t_u_u(((func_18((safe_rshift_func_uint16_t_u_s(func_18(p_14, l_95[5], (((safe_rshift_func_int16_t_s_s((func_56(((safe_lshift_func_uint8_t_u_s(0x4AL, ((safe_div_func_int8_t_s_s(func_102((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(l_112, func_113(((1L ^ ((l_115 == func_116((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_26[3] <= (safe_sub_func_uint32_t_u_u(func_128(l_133[0], p_10, l_115, p_11), l_112))), 12)), 0x102AL)), p_10, g_26[0], l_55, p_12)) != 9UL)) >= 0x45L)))) ^ l_95[5]), g_231[3])), p_14, g_231[3], l_133[1], g_6), l_806)) ^ g_532))) == g_231[1]), l_133[0], p_13) & 1UL), 9)) && 0x04EE360FL) || l_112), g_532), 13)), l_807[1], p_12, g_231[6]) & g_231[6]) != p_14), p_14))))
            {
                const unsigned l_810 = 1UL;
                if (((safe_rshift_func_uint8_t_u_s((7L >= func_56((func_23(l_810) || (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((g_26[3] && (safe_add_func_int32_t_s_s((func_18(l_70, (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_11, func_23(p_12))), g_167)), g_231[1], p_12) && g_195), p_12))), 0x91L)), 7))), g_224, l_810)), 6)) != l_810))
                {
                    unsigned short l_821 = 65530UL;
                    int l_825[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_825[i] = 0x86B2B067L;
                    g_26[3] = l_821;
                    l_825[0] = ((safe_div_func_int16_t_s_s(func_102((p_12 >= l_821), (l_806 | p_14), g_224, p_11, (safe_unary_minus_func_uint32_t_u(g_26[1]))), 0x6BD9L)) <= g_154[3][0][0]);
                    l_830 = (safe_add_func_int8_t_s_s(func_128(g_154[4][8][0], ((p_14 < (l_112 || 0x1B59EB1BL)) >= func_23(p_11)), (safe_mod_func_int16_t_s_s(((0x41L ^ g_153) ^ p_14), p_14)), p_13), g_532));
                    l_831 = l_55;
                }
                else
                {
                    l_830 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(1UL, 1)), 6));
                }
            }
            else
            {
                unsigned l_842 = 4294967288UL;
                unsigned l_872 = 0x2CA83BCCL;
                for (g_193 = 0; (g_193 == 43); g_193++)
                {
                    short l_851 = 0x3310L;
                    if (((safe_lshift_func_uint8_t_u_s((p_12 | l_112), (safe_sub_func_uint8_t_u_u(l_842, g_231[1])))) == ((safe_mul_func_uint16_t_u_u(65535UL, 0L)) || (((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((l_807[1] || (p_14 < p_10)), 4)), 15)) & p_11), 4294967291UL)) || p_12) != 0UL) & l_851) >= 0xEE7BL))))
                    {
                        const char l_852[9][9] = {{(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}, {(-4L), 0xF7L, 0x91L, 0xA4L, 0xB8L, 1L, 1L, 0xB8L, 0xA4L}};
                        int i, j;
                        if (p_10)
                            break;
                        g_26[3] = p_11;
                        if (l_852[7][5])
                            break;
                        if (l_852[2][5])
                            continue;
                    }
                    else
                    {
                        const short l_867[5] = {0x23CFL, 0xF72EL, 0x23CFL, 0xF72EL, 0x23CFL};
                        int i;
                        l_873 = (((safe_lshift_func_int8_t_s_u(func_18((g_26[3] || (p_13 & (safe_div_func_int32_t_s_s(p_10, (safe_lshift_func_uint8_t_u_s(func_116(g_167, g_532, (safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(l_842, ((l_867[0] >= (safe_sub_func_int32_t_s_s(g_153, ((safe_sub_func_uint8_t_u_u((0UL >= p_14), p_13)) > l_872)))) == l_867[3]))), 5)), g_225)) != g_6), p_10)), p_11, g_195), 7)))))), l_807[1], g_6, l_872), l_115)) && p_14) && p_14);
                    }
                    g_26[3] = l_851;
                    for (g_225 = 11; (g_225 != (-14)); g_225 = safe_sub_func_int8_t_s_s(g_225, 5))
                    {
                        int l_895 = 1L;
                        l_830 = (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((g_221 ^ p_11) | ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_851, g_231[0])), 0xBB8DL)), ((safe_div_func_int32_t_s_s((l_851 < ((((safe_mod_func_int8_t_s_s(func_23(p_12), l_892)) | p_11) > 0xC7L) < 0xA9E1F704L)), g_231[1])) & p_13))), 6)) <= l_893)), 3)), l_872));
                        l_895 = ((0x49L | l_894) ^ p_14);
                        return p_11;
                    }
                }
            }
        }
    }
    else
    {
        char l_904 = (-2L);
        unsigned l_911 = 4294967294UL;
        int l_922 = 0L;
        for (l_894 = 0; (l_894 <= 0); l_894 += 1)
        {
            int i;
            if ((g_26[(l_894 + 3)] == 0xE7L))
            {
                short l_909 = (-10L);
                int l_910 = 0L;
                if ((g_167 <= ((safe_rshift_func_uint8_t_u_u(1UL, ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((1UL & (p_12 < p_11)) < p_14), l_904)), (g_195 && (safe_add_func_int16_t_s_s(func_56(((safe_mod_func_int8_t_s_s(func_113(((-1L) > g_6)), 0x8DL)) == l_909), p_11, p_10), l_910))))), 13)) != l_911))) != 0x15L)))
                {
                    int i;
                    g_26[(l_894 + 1)] = 0L;
                    p_11 = 0xC2DCBE1DL;
                }
                else
                {
                    const unsigned char l_912 = 253UL;
                    int l_920[6][8][5] = {{{0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}}, {{0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}}, {{0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}}, {{0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}}, {{0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}}, {{0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}, {0xA92E54A1L, 1L, 0x9D2E6527L, 8L, 0xD15F05B9L}}};
                    int i, j, k;
                    for (g_167 = 0; (g_167 <= 0); g_167 += 1)
                    {
                        p_11 = l_912;
                        return g_193;
                    }
                    for (p_13 = 0; (p_13 <= 0); p_13 += 1)
                    {
                        unsigned char l_913 = 0xB1L;
                        p_11 = (-1L);
                        g_195 = g_26[(l_894 + 3)];
                        g_26[3] = p_14;
                        l_920[3][4][4] = ((l_913 != (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0xA26DC460L, (safe_rshift_func_int16_t_s_s(func_128(g_221, l_911, g_224, l_892), l_909)))) > g_26[2]), 7))) && g_26[1]);
                    }
                }
                g_26[(l_894 + 3)] = p_14;
                for (l_910 = 0; (l_910 <= 0); l_910 += 1)
                {
                    g_921[0] = g_231[1];
                    for (p_14 = 0; (p_14 <= 0); p_14 += 1)
                    {
                        int i, j, k;
                        return g_154[(l_910 + 3)][l_894][p_14];
                    }
                }
                g_26[3] = 0x5EEA7F1EL;
            }
            else
            {
                const int l_923 = 0x05026F9DL;
                for (p_10 = 0; (p_10 <= 0); p_10 += 1)
                {
                    for (g_195 = 0; (g_195 <= 2); g_195 += 1)
                    {
                        int i, j, k;
                        p_11 = (((g_154[(l_894 + 2)][(g_195 + 6)][l_894] ^ (-1L)) > (func_56((g_921[(l_894 + 1)] || (g_195 == ((((g_26[(l_894 + 3)] == (g_26[(l_894 + 3)] > (((4UL ^ p_13) <= (l_904 >= g_153)) > 0x7017L))) <= g_225) | p_11) ^ p_13))), l_911, g_195) || g_192)) >= 0x47893A0AL);
                        l_922 = g_921[(l_894 + 1)];
                    }
                    g_26[1] = l_923;
                    for (g_532 = 0; (g_532 >= 0); g_532 -= 1)
                    {
                        int i, j, k;
                        if (g_154[(g_532 + 4)][(p_10 + 2)][l_894])
                            break;
                        if (l_55)
                            break;
                    }
                }
                p_11 = l_904;
                for (l_55 = 0; (l_55 <= 3); l_55 += 1)
                {
                    int i;
                    g_26[(l_894 + 2)] = (safe_lshift_func_int8_t_s_u(1L, 7));
                    for (l_911 = 0; (l_911 <= 0); l_911 += 1)
                    {
                        int i;
                        p_11 = 0L;
                        if (l_95[l_911])
                            continue;
                    }
                    if (l_95[(l_55 + 2)])
                        continue;
                    if (g_231[1])
                    {
                        l_922 = p_11;
                        if (p_14)
                            break;
                        p_11 = (((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_892, (func_128(g_26[(l_894 + 2)], g_26[(l_894 + 3)], (safe_sub_func_int8_t_s_s(func_23((p_11 != ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(func_128(g_26[0], g_221, p_14, p_10), p_13)), g_26[3])) != 1UL))), g_26[(l_894 + 3)])), g_154[2][4][0]) >= p_14))), 0x10D2L)) && p_10) || p_12);
                        g_26[3] = g_26[(l_894 + 3)];
                    }
                    else
                    {
                        g_26[3] = (0x6EFCF4BAL && ((func_116(p_11, g_193, g_26[(l_894 + 3)], p_12, p_12) > p_10) <= p_12));
                    }
                }
                for (g_167 = 3; (g_167 <= 40); g_167 = safe_add_func_uint16_t_u_u(g_167, 9))
                {
                    p_11 = (g_193 <= (l_95[4] >= (safe_sub_func_int32_t_s_s(g_153, p_11))));
                    p_11 = (((0xE4E5L & (safe_rshift_func_uint8_t_u_s(func_23(p_14), 5))) == (g_6 == g_231[1])) ^ (4294967293UL < g_26[(l_894 + 3)]));
                }
            }
            g_26[1] = ((g_153 & (g_26[3] || 0L)) && g_231[5]);
        }
        p_11 = p_13;
        return g_167;
    }
    g_26[0] = (l_95[5] != 9L);
    return g_921[0];
}







static char func_18(unsigned char p_19, int p_20, int p_21, const char p_22)
{
    g_26[3] = func_23(p_20);
    for (p_20 = 22; (p_20 >= (-17)); p_20 = safe_sub_func_uint8_t_u_u(p_20, 3))
    {
        unsigned l_29 = 4294967291UL;
        return l_29;
    }
    return g_26[0];
}







static int func_23(const int p_24)
{
    unsigned l_25 = 4294967295UL;
    return l_25;
}







static int func_56(short p_57, unsigned short p_58, int p_59)
{
    const unsigned l_71 = 0x0F1B6398L;
    int l_88[1];
    int i;
    for (i = 0; i < 1; i++)
        l_88[i] = 0x41EDF2CFL;
    g_26[3] = func_23(l_71);
    for (p_58 = 18; (p_58 <= 20); p_58 = safe_add_func_int16_t_s_s(p_58, 9))
    {
        unsigned short l_74 = 0x1979L;
        unsigned char l_75 = 0UL;
        g_26[1] = p_58;
        l_75 = l_74;
    }
    l_88[0] = ((0x20L || ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(p_59, 1)) > (((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_71, (safe_add_func_uint8_t_u_u((0x3CL < l_71), (safe_div_func_int16_t_s_s((-1L), l_71)))))), (l_71 && g_26[3]))) ^ 0L) > l_71) || p_59) || l_71)), p_58)) == p_57)) | g_6);
    return g_6;
}







static char func_102(int p_103, unsigned char p_104, int p_105, int p_106, unsigned char p_107)
{
    unsigned short l_249[2];
    int l_254 = (-10L);
    const int l_319 = (-1L);
    unsigned short l_717 = 0xBA33L;
    unsigned short l_740 = 65528UL;
    int i;
    for (i = 0; i < 2; i++)
        l_249[i] = 65535UL;
    g_195 = 0x6D95FF6EL;
    if (((safe_rshift_func_uint8_t_u_u(l_249[1], 2)) || ((~(safe_add_func_int32_t_s_s((p_105 && (l_249[1] != func_56(l_249[1], p_104, p_105))), (safe_div_func_uint32_t_u_u((l_249[1] <= l_249[0]), l_249[0]))))) < p_107)))
    {
        char l_255 = (-9L);
        g_195 = (!l_254);
        l_255 = g_221;
    }
    else
    {
        unsigned short l_258 = 7UL;
        int l_265[10] = {0xE6F1A905L, 0xE6F1A905L, (-9L), 0xE6F1A905L, 0xE6F1A905L, (-9L), 0xE6F1A905L, 0xE6F1A905L, (-9L), 0xE6F1A905L};
        const unsigned l_388 = 4294967295UL;
        unsigned short l_490 = 0x838EL;
        char l_503 = 0x45L;
        int l_531[10];
        unsigned char l_569 = 0x31L;
        int l_607 = (-1L);
        char l_783 = 2L;
        int i;
        for (i = 0; i < 10; i++)
            l_531[i] = (-1L);
        for (g_167 = 5; (g_167 == 12); g_167++)
        {
            unsigned short l_270 = 0x83E0L;
            int l_303 = (-9L);
            short l_318 = 0x12B3L;
            if (l_258)
            {
                char l_259[4];
                short l_276 = (-1L);
                int l_294 = 0x5B5EA1FBL;
                short l_301 = 1L;
                int l_366 = 0x041986C0L;
                int i;
                for (i = 0; i < 4; i++)
                    l_259[i] = (-1L);
                if ((1L | ((p_107 & g_221) < 0UL)))
                {
                    if (l_259[1])
                        break;
                    return p_107;
                }
                else
                {
                    short l_281[4];
                    short l_302 = 0xED3EL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_281[i] = 6L;
                    if ((safe_div_func_int8_t_s_s((-1L), (safe_unary_minus_func_uint32_t_u((safe_div_func_int32_t_s_s((-1L), (g_224 | func_113(func_113(g_225))))))))))
                    {
                        const short l_271 = 0x3C06L;
                        p_103 = (5UL > g_221);
                        l_265[6] = g_221;
                        g_26[1] = g_192;
                        p_103 = (safe_rshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s(l_259[3], (~l_270))) ^ 7UL) > (4294967294UL != ((p_104 <= l_271) < g_195))), 4));
                    }
                    else
                    {
                        g_26[3] = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_167, ((func_56(l_276, g_154[0][9][0], func_56(l_259[2], g_26[0], (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_281[1], (safe_sub_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((~(safe_add_func_uint32_t_u_u(func_23((+g_195)), (l_270 & 1L)))) > g_193), p_107)) | 0xB8L), l_259[1])))), l_249[0])))) & 0x01L) == p_103))), g_221));
                        l_265[6] = l_270;
                    }
                    for (p_103 = (-2); (p_103 < (-20)); p_103 = safe_sub_func_uint32_t_u_u(p_103, 8))
                    {
                        l_265[2] = (((((func_23(l_259[1]) == (func_56((safe_rshift_func_uint8_t_u_u(p_107, 0)), g_193, ((g_224 | (safe_add_func_int8_t_s_s(g_167, ((p_106 != (+(-1L))) > ((g_224 && 0x58L) || p_107))))) != p_106)) <= p_105)) != (-1L)) ^ g_221) >= g_221) > p_103);
                        l_303 = func_18(((((l_265[1] || func_116(p_104, ((l_294 >= (g_224 > p_107)) != (safe_add_func_uint8_t_u_u(func_116(l_259[0], (((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_105, (((p_104 != l_301) | p_107) <= p_105))), 0xDBB86844L)) & p_104) || p_105), l_276, p_103, g_26[3]), p_107))), p_107, g_231[1], l_281[2])) <= 5UL) >= l_265[6]) | p_105), g_221, l_302, p_106);
                        g_26[3] = (0xFAL >= func_23((p_106 <= (safe_rshift_func_int16_t_s_s(p_104, 2)))));
                    }
                    for (g_221 = 0; (g_221 >= (-7)); g_221 = safe_sub_func_int32_t_s_s(g_221, 2))
                    {
                        const unsigned char l_324[8] = {0UL, 247UL, 0UL, 247UL, 0UL, 247UL, 0UL, 247UL};
                        int i;
                        g_26[3] = (safe_sub_func_int32_t_s_s((0x90L != (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(p_105, (func_23(func_18(l_294, g_26[3], ((g_224 >= (safe_rshift_func_int8_t_s_s(p_105, 2))) ^ ((safe_lshift_func_int8_t_s_u((g_231[5] ^ func_23(l_270)), l_318)) >= l_270)), l_319)) ^ l_318))), g_195))), l_319));
                        if (p_106)
                            break;
                        l_303 = ((((-1L) < (p_107 ^ (l_265[8] && (g_167 >= 0x69D0L)))) | (l_276 ^ (((safe_rshift_func_uint8_t_u_u(254UL, 6)) != func_23(l_324[7])) & 1UL))) == g_153);
                        g_26[3] = ((0xB6L || ((0x3CEC6AE1L != (safe_sub_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(0xEF7442A2L, l_281[2])) | func_18((safe_add_func_uint32_t_u_u((p_107 <= (-1L)), l_259[3])), func_18((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_107, ((g_167 < 0x81L) >= 0L))) && g_193), 0x36L)), p_105, g_221, g_195), g_231[1], p_103)) | 0x0EL) | 0x306EC75FL), 7)) && p_106) ^ g_192), p_107))) && 0x4F39L)) ^ 2UL);
                    }
                    p_103 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_104, p_103)), (((safe_mod_func_int8_t_s_s((func_113(p_107) < 0x0BA1AC6AL), (safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_107, (safe_rshift_func_uint16_t_u_u(65532UL, g_192)))), (g_192 | g_153))))))) > 0xD300AAB4L) != 0xCFAFCF1FL))) ^ p_103);
                }
                if ((func_18(g_193, func_23(g_26[3]), (p_103 != l_254), (g_154[2][0][0] <= (l_259[1] | (g_225 != ((safe_mod_func_int16_t_s_s(p_103, 65531UL)) < p_106))))) > l_270))
                {
                    const unsigned char l_364 = 0xA9L;
                    p_103 = l_265[6];
                    p_103 = (((0x37B44586L < (((safe_rshift_func_int16_t_s_s((+func_113(p_107)), (p_104 | (safe_div_func_int8_t_s_s((((l_259[1] | (0x10EBL >= (safe_lshift_func_int8_t_s_u(0x27L, 1)))) < ((safe_div_func_int16_t_s_s(g_221, (safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(p_105, p_105)) <= l_364), 4294967290UL)))) != p_104)) >= 0x6940AC3FL), l_259[1]))))) >= l_364) < 0x20L)) & l_319) >= 0xB5L);
                    g_26[3] = g_192;
                }
                else
                {
                    unsigned char l_367 = 2UL;
                    l_366 = (safe_unary_minus_func_int8_t_s(0L));
                    for (l_318 = 0; (l_318 <= 3); l_318 += 1)
                    {
                        int i;
                        g_195 = func_18(l_259[l_318], g_26[l_318], ((l_259[l_318] && (-1L)) != (l_367 <= (((((p_106 <= (!(g_6 >= (p_105 > (safe_add_func_uint8_t_u_u(l_259[l_318], g_224)))))) >= p_104) != g_193) > g_192) <= g_153))), p_107);
                    }
                    for (l_276 = 0; (l_276 != 26); l_276 = safe_add_func_int16_t_s_s(l_276, 3))
                    {
                        p_103 = l_319;
                    }
                    g_195 = (~l_254);
                }
                if (l_366)
                    continue;
                for (g_193 = 0; (g_193 < 40); g_193 = safe_add_func_uint16_t_u_u(g_193, 8))
                {
                    unsigned l_382[6][5] = {{1UL, 0UL, 0UL, 4294967295UL, 0xAB646AEDL}, {1UL, 0UL, 0UL, 4294967295UL, 0xAB646AEDL}, {1UL, 0UL, 0UL, 4294967295UL, 0xAB646AEDL}, {1UL, 0UL, 0UL, 4294967295UL, 0xAB646AEDL}, {1UL, 0UL, 0UL, 4294967295UL, 0xAB646AEDL}, {1UL, 0UL, 0UL, 4294967295UL, 0xAB646AEDL}};
                    int i, j;
                    p_103 = (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(l_270, l_276)), l_301));
                    for (l_318 = 11; (l_318 >= 15); l_318 = safe_add_func_uint32_t_u_u(l_318, 8))
                    {
                        int l_383 = 0x45E12521L;
                        l_382[2][2] = (safe_rshift_func_int8_t_s_s(l_259[2], g_26[2]));
                        return l_383;
                    }
                }
            }
            else
            {
                g_26[3] = (func_23((+p_107)) | (safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(65535UL, func_113(p_107))) || (p_104 <= (p_103 | func_113((0x26E67078L && p_103))))), g_195)));
                if (l_265[7])
                    break;
                p_103 = func_56((p_105 || l_388), (((p_107 == p_105) || p_105) & ((safe_add_func_int8_t_s_s(((p_105 || p_104) ^ (((-1L) ^ ((safe_mod_func_int16_t_s_s((func_23(g_221) && 0xD4F80912L), p_106)) < g_192)) || 0UL)), 1L)) & l_303)), g_225);
                p_103 = 0x1091E149L;
            }
            g_26[1] = g_6;
            p_103 = 1L;
            for (g_225 = 0; (g_225 != (-19)); g_225--)
            {
                short l_425 = 0L;
                for (l_254 = 16; (l_254 != (-18)); l_254--)
                {
                    unsigned l_405 = 7UL;
                    int l_406 = 9L;
                    for (g_195 = 0; (g_195 != (-13)); g_195 = safe_sub_func_uint16_t_u_u(g_195, 3))
                    {
                        return g_221;
                    }
                    for (l_303 = 11; (l_303 != (-21)); l_303 = safe_sub_func_int16_t_s_s(l_303, 7))
                    {
                        p_103 = l_303;
                        return l_318;
                    }
                    if ((p_107 | p_104))
                    {
                        l_406 = (safe_rshift_func_uint8_t_u_u((~(safe_div_func_int8_t_s_s(l_405, l_265[6]))), 5));
                    }
                    else
                    {
                        p_103 = (g_231[1] > (safe_rshift_func_int8_t_s_s(g_6, 7)));
                    }
                    for (g_224 = 0; (g_224 <= 9); g_224 += 1)
                    {
                        const unsigned char l_418[7] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
                        int i;
                        l_265[g_224] = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(func_23((g_225 && (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((l_249[1] || ((safe_unary_minus_func_uint16_t_u((5UL && ((g_26[2] == l_418[0]) && 255UL)))) ^ g_224)) != ((g_195 & g_224) || g_231[5])) & g_225), 11)), g_153)))), l_418[0])), p_105));
                        g_26[3] = (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_221, ((safe_lshift_func_uint16_t_u_u(1UL, 2)) && l_425))), 3));
                    }
                }
                for (g_192 = 0; (g_192 == (-28)); g_192 = safe_sub_func_int16_t_s_s(g_192, 7))
                {
                    short l_428[6][10] = {{0x7238L, (-1L), 8L, 0xFB1FL, 1L, 1L, 0xFB1FL, 8L, (-1L), 0x7238L}, {0x7238L, (-1L), 8L, 0xFB1FL, 1L, 1L, 0xFB1FL, 8L, (-1L), 0x7238L}, {0x7238L, (-1L), 8L, 0xFB1FL, 1L, 1L, 0xFB1FL, 8L, (-1L), 0x7238L}, {0x7238L, (-1L), 8L, 0xFB1FL, 1L, 1L, 0xFB1FL, 8L, (-1L), 0x7238L}, {0x7238L, (-1L), 8L, 0xFB1FL, 1L, 1L, 0xFB1FL, 8L, (-1L), 0x7238L}, {0x7238L, (-1L), 8L, 0xFB1FL, 1L, 1L, 0xFB1FL, 8L, (-1L), 0x7238L}};
                    const unsigned short l_439 = 65529UL;
                    int i, j;
                    l_428[0][4] = g_221;
                    g_195 = (safe_add_func_uint32_t_u_u(3UL, (((((((safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(func_18((g_192 == 0L), g_225, g_192, g_153), (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_303, 3)), g_153)))) & 0x49B4L) > g_153), (-6L))) < g_192) ^ g_225) && 0xFA3BL) | 0x546FL) < p_104) >= p_103)));
                    if (l_439)
                        break;
                }
            }
        }
        if ((safe_lshift_func_int16_t_s_s(g_192, p_107)))
        {
            short l_442 = 0xBAFAL;
            int l_476 = 1L;
            if (g_6)
            {
                return l_442;
            }
            else
            {
                unsigned char l_452 = 0xCEL;
                int l_453[8][6] = {{1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}, {1L, (-9L), 1L, (-9L), 1L, (-9L)}};
                int l_465 = 0xA9044905L;
                int i, j;
                for (p_106 = (-19); (p_106 >= (-13)); p_106 = safe_add_func_int8_t_s_s(p_106, 3))
                {
                    unsigned char l_456 = 0x39L;
                    for (p_103 = 12; (p_103 != 10); p_103 = safe_sub_func_int16_t_s_s(p_103, 9))
                    {
                        short l_449[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_449[i] = (-1L);
                        l_453[7][2] = ((safe_rshift_func_uint8_t_u_u((p_103 <= l_449[0]), 3)) <= (safe_div_func_int32_t_s_s((l_249[0] > 0UL), l_452)));
                        g_26[3] = func_116(((safe_mod_func_int16_t_s_s(func_113(p_103), 0xD267L)) & (l_456 && l_319)), (func_23(g_195) < (~(g_167 < 0x9603L))), p_107, l_442, l_449[0]);
                    }
                    l_453[7][2] = (l_265[6] >= ((0x53CCL < (safe_lshift_func_uint16_t_u_s((l_442 >= (g_167 <= ((safe_mod_func_uint16_t_u_u((((0x41E3L && (safe_sub_func_uint8_t_u_u(p_105, (0xC5A5978BL ^ ((safe_lshift_func_uint16_t_u_s(l_258, 5)) & (l_258 != l_265[2])))))) >= g_231[1]) & 0L), l_465)) && 0x73E2L))), l_456))) >= p_107));
                    l_265[5] = ((safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(l_442, func_116(p_104, l_465, (func_128((((((l_442 <= func_116(((-7L) <= (safe_lshift_func_uint8_t_u_u(func_113(p_105), 6))), p_107, (g_224 < g_193), p_103, p_106)) >= 0xFEL) == 65533UL) != 0x7ED4L) <= 4294967295UL), g_225, l_456, l_265[7]) < g_6), g_231[0], l_249[1]))) ^ l_319), g_231[4])) <= p_104);
                }
            }
            l_476 = (((safe_add_func_uint16_t_u_u((+(((func_113(p_107) >= l_265[7]) | ((l_265[6] | (l_249[0] && 0x1C56L)) ^ (g_195 > l_265[6]))) | g_153)), l_319)) | (-1L)) != p_107);
            l_476 = (safe_sub_func_int32_t_s_s((!g_195), g_6));
        }
        else
        {
            char l_479 = 2L;
            l_479 = 0xBA16F17CL;
            return g_221;
        }
        if ((safe_lshift_func_uint8_t_u_u(0x07L, 0)))
        {
            unsigned short l_498 = 0UL;
            l_254 = (func_56(g_224, l_249[0], (l_249[1] >= ((-2L) == (safe_add_func_int8_t_s_s(l_319, l_254))))) < ((-2L) & 0x44F254ADL));
            for (g_167 = 0; (g_167 < 31); ++g_167)
            {
                int l_497[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_497[i] = (-1L);
                l_497[0] = (((~(g_231[5] & (0xAE933EC5L >= (safe_add_func_int32_t_s_s((~l_490), p_106))))) && (safe_mod_func_int8_t_s_s(func_23((((((safe_mod_func_uint32_t_u_u(0UL, (safe_add_func_int32_t_s_s(p_104, 0xF5D9F585L)))) != 0xA606L) >= (g_167 | p_106)) < l_258) != 4294967294UL)), g_6))) & p_103);
                g_195 = (p_104 || g_221);
                if (l_498)
                {
                    int l_504 = (-9L);
                    if (p_106)
                    {
                        if (g_26[3])
                            break;
                    }
                    else
                    {
                        g_26[2] = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_503, 0)), (l_498 & ((g_221 == ((p_106 ^ (p_107 | ((l_504 ^ (safe_sub_func_int8_t_s_s(1L, g_231[3]))) <= (safe_sub_func_int32_t_s_s(p_104, 0x21F31523L))))) ^ l_497[1])) > 0x474E0BC6L))));
                        l_254 = (safe_lshift_func_int16_t_s_s(l_254, 10));
                        if (l_497[0])
                            break;
                        g_26[3] = (l_504 == (safe_div_func_uint32_t_u_u(4294967295UL, g_26[3])));
                    }
                }
                else
                {
                    p_103 = (g_26[1] ^ g_224);
                    if (g_153)
                        continue;
                }
                if (func_113(l_497[0]))
                {
                    unsigned l_535 = 0x50663E61L;
                    for (l_490 = 0; (l_490 <= 9); l_490 += 1)
                    {
                        int i;
                        l_265[1] = func_116(l_265[l_490], l_498, p_107, (safe_lshift_func_int8_t_s_s((1L | (safe_div_func_uint32_t_u_u(((((p_105 >= ((safe_lshift_func_int16_t_s_u((((func_113((p_107 & ((safe_div_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u(g_153, (((safe_div_func_uint32_t_u_u((p_105 > g_231[1]), l_497[4])) > g_224) | l_531[0]))) | p_103) > l_497[3]), p_104)) != l_531[2]), 4294967295UL)), g_532)) ^ 0x05L), g_224)) > g_167))) >= p_103) && l_503) == g_195), l_498)) <= g_153)) > p_106) != 6L) ^ l_498), 0xEDEA721BL))), 3)), g_195);
                        p_103 = 0x19433418L;
                        return l_265[l_490];
                    }
                    for (g_192 = 0; (g_192 != (-14)); g_192--)
                    {
                        l_535 = (((g_231[6] & g_221) | g_154[4][8][0]) < g_193);
                        p_103 = 1L;
                    }
                    p_103 = 0xDCB58361L;
                    p_103 = (safe_rshift_func_uint16_t_u_s(g_231[1], 9));
                }
                else
                {
                    const unsigned char l_546[2] = {0x7EL, 0x7EL};
                    int l_586 = 0L;
                    int i;
                    for (l_490 = 0; (l_490 < 54); l_490++)
                    {
                        l_497[1] = (safe_rshift_func_int8_t_s_s((g_167 | 65535UL), (safe_sub_func_uint16_t_u_u((1UL || g_192), (safe_lshift_func_int16_t_s_u((l_546[0] > p_104), 9))))));
                        l_497[0] = 0xEDF6DA99L;
                        g_26[3] = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((p_104 | func_116(g_153, (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(0x00L, 2)), 0xCAL)), (+l_497[0]))) || func_18(p_103, p_105, (p_105 == func_56(((l_249[1] || (-1L)) <= 0x679AB423L), g_192, g_225)), p_104)) ^ l_388), g_154[0][0][0], g_192, l_546[0])), g_224)), g_192));
                        g_26[2] = g_154[3][6][0];
                    }
                    if ((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_103, func_116((safe_add_func_int8_t_s_s(l_546[0], (safe_div_func_int16_t_s_s(p_104, p_105)))), ((safe_mod_func_int16_t_s_s(l_569, (((p_106 & g_154[0][3][0]) < 0x059DL) & (safe_rshift_func_uint16_t_u_u((g_192 > 0x92E2E9E0L), l_265[4]))))) ^ 0x64502EEEL), p_104, p_107, l_254))), g_154[0][6][0])), g_221)))
                    {
                        g_26[3] = p_105;
                    }
                    else
                    {
                        p_103 = g_167;
                        g_26[1] = ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((p_104 || l_497[0]) < ((safe_add_func_int32_t_s_s(func_113(g_195), g_221)) && func_18(l_546[1], (g_6 <= (9L < l_254)), p_103, g_6))), p_104)), l_498)) != 0xEFC33BFAL), p_107)) <= l_497[0]);
                    }
                    for (p_103 = (-30); (p_103 == 18); p_103 = safe_add_func_uint32_t_u_u(p_103, 6))
                    {
                        l_497[0] = g_26[0];
                        l_254 = (safe_mod_func_uint32_t_u_u(p_105, g_532));
                        l_586 = (safe_rshift_func_uint8_t_u_u((func_23(p_105) >= p_103), 6));
                        l_497[3] = l_586;
                    }
                }
            }
            p_103 = p_107;
            g_195 = g_153;
        }
        else
        {
            unsigned l_587 = 4294967295UL;
            const unsigned l_616 = 3UL;
            unsigned char l_629 = 0xC8L;
            int l_641 = 0L;
            unsigned char l_716 = 0xD1L;
            unsigned short l_771 = 0xC2B1L;
            if (l_587)
            {
                short l_606 = 2L;
                l_254 = ((safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(p_106, 0)) != l_249[1]) && func_23((~(((g_225 > (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_105, l_587)), p_104))) == (safe_sub_func_int32_t_s_s((((g_193 & ((((safe_div_func_int32_t_s_s((l_265[5] >= (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(l_587, g_192)) | p_106), l_569)), (-7L)))), l_606)) && l_531[0]) < g_26[1]) || 0L)) >= p_105) && 248UL), (-9L)))) || g_221)))) | l_607), l_249[1])) == l_249[1]);
            }
            else
            {
                unsigned l_613 = 0x2F4E0655L;
                int l_663 = 5L;
                g_26[1] = ((safe_unary_minus_func_uint16_t_u(0xF283L)) == (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_104, (l_587 >= (p_106 >= (func_56(l_613, (safe_sub_func_uint32_t_u_u((((65532UL != l_388) | l_616) && (p_104 == g_192)), p_107)), l_531[6]) != g_193))))), l_616)));
                for (l_569 = 0; l_569 < 2; l_569 += 1)
                {
                    l_249[l_569] = 0x594DL;
                }
                if (g_192)
                {
                    short l_634 = 0x46D7L;
                    g_26[3] = ((safe_div_func_uint32_t_u_u(1UL, (l_616 && func_128((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(65533UL, (safe_lshift_func_uint8_t_u_u(0x40L, ((p_106 | (4L >= func_56(p_103, ((safe_sub_func_uint16_t_u_u(((l_319 & (safe_sub_func_int16_t_s_s(func_128((func_56((func_23((g_153 | p_106)) >= (-1L)), l_254, g_231[1]) | p_105), p_106, p_105, g_167), l_613))) | g_231[1]), p_107)) > l_613), l_629))) & g_154[2][1][0]))))), g_6)), l_503, g_231[5], g_231[1])))) & g_532);
                    l_641 = (safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(l_634, g_225)) > (safe_add_func_int32_t_s_s(p_107, (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_103, (l_587 || l_249[1]))) != (((l_634 > p_104) || 249UL) > l_319)), 3UL))))), 0xC1B31FA7L));
                    g_195 = l_503;
                }
                else
                {
                    unsigned char l_662 = 0x72L;
                    if ((safe_sub_func_uint32_t_u_u((l_613 || (p_104 > func_128(g_153, (safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(l_613, ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(g_231[1], 14)), (g_193 == p_106))) | ((safe_lshift_func_uint8_t_u_s(0x02L, (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((0x9FCAC310L <= 4294967292UL) > p_104), g_231[1])), p_103)), l_607)), 0x1FL)))) < g_167)))) || g_154[3][0][0]), l_662)), l_613, p_104))), g_532)))
                    {
                        l_663 = l_254;
                        g_26[3] = 0L;
                        l_663 = (0L || l_254);
                        return p_106;
                    }
                    else
                    {
                        short l_664 = (-1L);
                        g_195 = p_103;
                        g_195 = l_664;
                    }
                    for (l_613 = 0; (l_613 >= 17); l_613++)
                    {
                        unsigned char l_669[2][6] = {{0x52L, 0x52L, 0x59L, 0x52L, 0x52L, 0x59L}, {0x52L, 0x52L, 0x59L, 0x52L, 0x52L, 0x59L}};
                        int i, j;
                        g_26[2] = (-1L);
                        g_26[3] = func_128((safe_add_func_int8_t_s_s((+g_167), (l_662 < (func_23(((g_224 ^ l_669[1][5]) & ((0x82F3L ^ ((!g_532) | ((func_23(g_224) >= g_154[0][6][0]) == p_105))) & g_225))) != l_669[1][5])))), l_662, g_6, p_107);
                        g_26[3] = l_669[1][5];
                        if (l_258)
                            break;
                    }
                    for (p_106 = (-29); (p_106 == (-24)); p_106++)
                    {
                        unsigned short l_682 = 0xCBECL;
                        int l_683 = (-1L);
                        l_683 = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_319 <= 0xFEDBL), ((~(func_113(g_6) & ((func_23(p_105) ^ p_105) < (safe_sub_func_int32_t_s_s(p_103, (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_682 >= p_104), p_104)), g_231[2]))))))) && g_153))), 0xF7CBCCC8L)) && l_254);
                        if (l_683)
                            break;
                        l_641 = (((1L && g_153) && 0x7B31L) == l_662);
                        p_103 = (p_106 >= l_662);
                    }
                }
            }
            for (l_587 = 0; (l_587 <= 20); l_587++)
            {
                unsigned short l_707 = 65535UL;
                unsigned char l_768 = 8UL;
                unsigned char l_769 = 255UL;
                for (g_195 = (-18); (g_195 > (-19)); g_195 = safe_sub_func_uint32_t_u_u(g_195, 4))
                {
                    unsigned char l_690 = 0x92L;
                    g_26[3] = ((-3L) == ((safe_div_func_int32_t_s_s(g_195, l_690)) >= (safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_106, (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_532 && (-1L)), (-5L))), 0)), 1L)))), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_503 == g_221), p_107)), g_231[2]))))));
                    p_103 = (0xC916FF94L <= ((safe_rshift_func_uint8_t_u_s(0x90L, l_707)) & p_104));
                    if (l_641)
                        break;
                    l_641 = (l_249[0] <= p_104);
                }
                p_103 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((+((p_104 && 246UL) <= g_221)), 12)), (safe_add_func_uint16_t_u_u(func_113(g_154[1][2][0]), (1UL == (+p_103)))))) & p_103);
                l_641 = ((p_107 == p_107) <= 0xAB40D87BL);
                if (func_116(l_587, ((safe_mod_func_uint16_t_u_u(func_56(l_629, l_319, func_56(func_18(l_707, p_105, (1UL | l_531[0]), l_707), l_716, l_716)), g_231[1])) >= l_716), g_6, l_717, l_641))
                {
                    short l_737[8] = {0L, 0L, 0x90B2L, 0L, 0L, 0x90B2L, 0L, 0L};
                    int i;
                    for (g_225 = 0; (g_225 <= 3); g_225 += 1)
                    {
                        int i;
                        if (g_26[g_225])
                            break;
                    }
                    if ((safe_lshift_func_uint8_t_u_u(l_265[6], ((safe_add_func_uint32_t_u_u((p_103 >= (safe_sub_func_uint32_t_u_u(l_707, g_532))), p_103)) || p_103))))
                    {
                        unsigned char l_736 = 0x3CL;
                        p_103 = (l_258 && p_105);
                        g_26[2] = ((safe_sub_func_uint32_t_u_u((func_23((func_23(((safe_add_func_uint32_t_u_u(p_103, func_116(((((func_18((safe_div_func_int16_t_s_s(((((((g_6 >= 0x361F96C2L) && ((((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((func_18(l_569, g_532, p_104, l_531[0]) || (0x4EL <= g_154[4][0][0])), 9)), 0xEBFAL)), p_106)) <= 1L) >= 250UL) < l_736)) <= 1L) > g_195) ^ 0x7DFAAF6EL) != g_231[1]), l_707)), l_707, g_153, p_103) && p_104) || p_105) >= l_531[6]) == g_167), l_737[1], p_107, g_224, g_6))) > g_221)) ^ p_105)) != p_106), g_221)) | g_167);
                    }
                    else
                    {
                        g_26[3] = func_23(l_641);
                    }
                }
                else
                {
                    unsigned short l_753 = 0x5780L;
                    char l_770[2][9] = {{5L, 0x2BL, 1L, 1L, 0x2BL, 5L, 0x2BL, 1L, 1L}, {5L, 0x2BL, 1L, 1L, 0x2BL, 5L, 0x2BL, 1L, 1L}};
                    int l_784 = 0L;
                    int i, j;
                    for (l_641 = (-28); (l_641 <= (-15)); l_641 = safe_add_func_uint16_t_u_u(l_641, 3))
                    {
                        g_26[3] = l_740;
                        g_26[3] = (g_6 & (p_103 < (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(g_193, (p_105 != p_106))), 0)) != (((g_26[3] && (safe_mod_func_int16_t_s_s(func_56(p_105, (func_23(g_167) <= l_629), p_103), p_106))) > l_707) < p_106)), p_103))));
                        p_103 = l_740;
                        p_103 = l_319;
                    }
                    if ((safe_mod_func_int32_t_s_s(0L, ((((((safe_rshift_func_int16_t_s_s(l_753, 8)) & (((((((safe_mod_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_113(l_707), ((safe_lshift_func_int8_t_s_u((-3L), 4)) | ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_629, (g_231[2] == (l_753 && ((g_231[2] || l_768) <= 0xDA86BB1AL))))), l_716)), p_107)) >= l_753)))), g_192)) >= l_769) ^ l_753), g_193)) < 0UL) ^ 0x6DL) | l_770[0][5]) & g_154[4][9][0]) == l_771) & 3L)) != p_104) ^ l_503) >= p_103) ^ p_106))))
                    {
                        unsigned l_772 = 0x9DA2005CL;
                        if (l_772)
                            break;
                        l_784 = ((((g_6 && (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_192, 1)), (func_113(func_56(p_106, g_231[1], g_26[0])) >= (func_23((((safe_mod_func_int16_t_s_s((g_193 >= (safe_lshift_func_int16_t_s_u(func_23(((((safe_add_func_uint32_t_u_u(p_103, l_783)) <= g_153) || 7L) & 0xBEL)), 4))), g_154[3][8][0])) <= l_772) && p_107)) != p_104))))) | 0x88L) <= g_231[2]) < g_224);
                        g_26[2] = ((safe_mod_func_int8_t_s_s(p_106, (-8L))) || g_26[0]);
                    }
                    else
                    {
                        char l_789 = 0L;
                        p_103 = (safe_add_func_int8_t_s_s((l_789 < (safe_lshift_func_uint8_t_u_s(p_106, 4))), (p_107 && (safe_lshift_func_uint8_t_u_s(p_103, 0)))));
                        l_641 = (((1L ^ (safe_div_func_int32_t_s_s(l_629, (safe_sub_func_int16_t_s_s(l_771, ((l_789 | (safe_sub_func_int32_t_s_s(func_18(g_26[3], p_105, func_23(l_769), func_128(g_26[3], p_107, g_6, p_107)), 0x01C2ABE5L))) || l_265[6])))))) & g_231[1]) < g_231[1]);
                    }
                    g_26[2] = ((safe_add_func_uint32_t_u_u(func_116(l_784, p_103, ((l_607 <= 0UL) != ((((5L != g_192) == 0xD367A1B6L) <= (p_105 <= (((safe_lshift_func_uint16_t_u_u(g_192, g_225)) == 1L) && (-10L)))) >= l_768)), p_104, p_105), g_167)) & 255UL);
                }
            }
        }
    }
    l_254 = 4L;
    return p_107;
}







static short func_113(int p_114)
{
    short l_243 = 3L;
    int l_246[8][5][2] = {{{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}, {{0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}, {0x3C10CCC6L, 0x3C10CCC6L}}};
    int i, j, k;
    g_26[3] = (safe_sub_func_uint16_t_u_u(l_243, p_114));
    l_246[6][3][0] = (safe_sub_func_int32_t_s_s(l_243, g_6));
    return g_221;
}







static unsigned func_116(int p_117, unsigned p_118, char p_119, unsigned short p_120, unsigned p_121)
{
    int l_228[9][10] = {{2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}, {2L, 8L, 6L, 8L, 2L, (-1L), 4L, 8L, (-9L), 8L}};
    int i, j;
    g_195 = ((safe_add_func_int32_t_s_s((0UL ^ (p_120 < g_154[3][2][0])), 0UL)) <= (255UL ^ 3UL));
    l_228[1][2] = ((func_18(l_228[1][2], g_154[4][5][0], func_18((safe_add_func_int32_t_s_s((func_18(g_167, g_26[3], ((-7L) >= 0x858BL), g_26[2]) >= ((func_23(g_224) == g_221) & p_117)), p_121)), g_225, l_228[2][8], g_231[1]), p_118) && p_118) | 0x096AL);
    for (g_153 = 21; (g_153 != 41); g_153 = safe_add_func_uint16_t_u_u(g_153, 5))
    {
        g_195 = (safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u((1UL | l_228[3][9]), (p_117 & (func_23(p_117) & (0L || ((g_26[2] && ((0L != g_26[3]) > 4294967295UL)) < p_117))))))));
        if (g_224)
            continue;
        for (p_119 = 0; (p_119 != (-15)); p_119 = safe_sub_func_int16_t_s_s(p_119, 1))
        {
            return g_192;
        }
    }
    return p_121;
}







static unsigned func_128(short p_129, unsigned p_130, const int p_131, unsigned char p_132)
{
    int l_148 = (-5L);
    for (p_130 = 0; (p_130 < 37); p_130 = safe_add_func_uint32_t_u_u(p_130, 1))
    {
        return g_6;
    }
    g_153 = (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((p_132 || g_6), ((safe_mod_func_int32_t_s_s(g_6, (((safe_sub_func_int16_t_s_s(g_26[3], 0x3B2AL)) ^ (((safe_sub_func_uint16_t_u_u(g_26[3], (l_148 <= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x2496L, 0)), (g_26[3] && p_132))) > l_148)))) == 0xD4C26E52L) < g_26[0])) & (-7L)))) != 9L))), l_148));
    for (p_132 = 0; (p_132 <= 0); p_132 += 1)
    {
        char l_157 = 0L;
        int l_158 = 0xA5129FF9L;
        for (p_129 = 0; (p_129 >= 0); p_129 -= 1)
        {
            unsigned l_161 = 0xE1B5AB6CL;
            unsigned l_164 = 4294967295UL;
            int l_196 = 0L;
            int l_219 = 5L;
            l_158 = ((!(safe_sub_func_int32_t_s_s(func_23(p_129), func_23(p_129)))) < (l_157 | g_6));
            for (l_157 = 0; (l_157 <= 0); l_157 += 1)
            {
                for (l_158 = 0; (l_158 <= 0); l_158 += 1)
                {
                    int i, j, k;
                    for (p_130 = 0; (p_130 <= 0); p_130 += 1)
                    {
                        int i, j, k;
                        l_161 = (safe_div_func_int8_t_s_s(((g_154[p_130][(l_158 + 5)][p_132] != (0x3AL && 5UL)) & 1L), p_132));
                        g_167 = (safe_add_func_int8_t_s_s(l_164, (safe_add_func_uint8_t_u_u(0xCDL, p_132))));
                    }
                    if ((safe_div_func_uint8_t_u_u((func_23(g_154[(p_129 + 2)][(p_129 + 5)][p_129]) == p_132), (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(func_23((+(g_154[(p_129 + 2)][(p_129 + 5)][p_129] != (+func_23((safe_lshift_func_uint16_t_u_u(5UL, 8))))))), (safe_rshift_func_uint8_t_u_u(0x27L, (func_23((0x5BA6L || g_26[3])) & g_6))))), p_130)) ^ p_131), g_153)))))
                    {
                        short l_191[4][1] = {{0L}, {0L}, {0L}, {0L}};
                        int i, j;
                        g_192 = ((safe_sub_func_int32_t_s_s(0x6C2D0C8DL, (g_154[3][8][0] >= ((safe_mod_func_uint8_t_u_u(g_167, ((safe_mod_func_int16_t_s_s(((p_129 != (-1L)) != 0xE73AB669L), (safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(l_191[1][0], func_23(func_23(((func_23(g_6) <= 255UL) && l_161))))) || g_154[(p_129 + 2)][(p_129 + 5)][p_129]), 7)))))) || 0x0156L))) < 0xACL)))) <= 0x3EL);
                        if (g_192)
                            break;
                    }
                    else
                    {
                        int l_194 = 0x6AEA00BFL;
                        g_193 = g_6;
                        g_195 = l_194;
                    }
                }
            }
            for (l_148 = 0; (l_148 >= 0); l_148 -= 1)
            {
                int i, j, k;
                for (g_193 = 0; (g_193 <= 0); g_193 += 1)
                {
                    int i, j, k;
                    l_196 = g_154[(p_129 + 4)][(p_129 + 4)][p_129];
                    return p_132;
                }
                g_195 = func_23(g_154[(l_148 + 3)][(p_129 + 7)][p_129]);
                if (g_26[3])
                    continue;
                for (g_192 = 0; (g_192 <= 0); g_192 += 1)
                {
                    int i, j, k;
                    if (g_154[(l_148 + 1)][(p_129 + 7)][l_148])
                    {
                        short l_211 = 6L;
                        g_195 = (safe_lshift_func_int16_t_s_s(g_167, ((((safe_sub_func_uint32_t_u_u(g_193, p_131)) | (safe_div_func_int16_t_s_s((((((!p_132) != 0xBF86L) || (((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(g_26[3], p_130)), 5)) < g_193) > (((safe_mod_func_int16_t_s_s(0L, l_161)) || l_211) || 65535UL))) <= g_153) || p_132), l_161))) || p_129) > 0xE6ADL)));
                        return g_154[(l_148 + 3)][(p_129 + 7)][p_129];
                    }
                    else
                    {
                        return g_153;
                    }
                }
                for (g_192 = 0; (g_192 <= 0); g_192 += 1)
                {
                    for (l_196 = 0; (l_196 >= 0); l_196 -= 1)
                    {
                        const short l_214 = 0x2979L;
                        l_219 = (g_154[(l_148 + 3)][(p_129 + 7)][p_129] > ((safe_mod_func_uint8_t_u_u((l_214 <= p_132), (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((l_164 <= (-7L)), 2)), func_23(g_154[(l_148 + 3)][(p_129 + 7)][p_129]))))) >= 0xFBL));
                    }
                }
            }
        }
        l_158 = p_132;
        for (l_157 = 0; (l_157 <= 0); l_157 += 1)
        {
            char l_220 = 0xBEL;
            l_220 = l_158;
            if (p_131)
                continue;
            for (g_195 = 0; (g_195 >= 0); g_195 -= 1)
            {
                char l_222 = 5L;
                if (g_6)
                    break;
                for (l_220 = 0; (l_220 >= 0); l_220 -= 1)
                {
                    int l_223[2][7][3] = {{{0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}}, {{0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}, {0x2E7BA114L, 1L, 0x2E7BA114L}}};
                    int i, j, k;
                    g_221 = 0L;
                    for (p_129 = 0; (p_129 <= 0); p_129 += 1)
                    {
                        l_222 = (-1L);
                        g_224 = l_223[1][5][2];
                        if (g_6)
                            break;
                    }
                    g_225 = (-1L);
                }
            }
        }
    }
    return g_221;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_154[i][j][k], "g_154[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_231[i], "g_231[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_532, "g_532", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_921[i], "g_921[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_945, "g_945", print_hash_value);
    transparent_crc(g_1105, "g_1105", print_hash_value);
    transparent_crc(g_1345, "g_1345", print_hash_value);
    transparent_crc(g_1363, "g_1363", print_hash_value);
    transparent_crc(g_1377, "g_1377", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1468, "g_1468", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1608, "g_1608", print_hash_value);
    transparent_crc(g_1616, "g_1616", print_hash_value);
    transparent_crc(g_1617, "g_1617", print_hash_value);
    transparent_crc(g_1760, "g_1760", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
