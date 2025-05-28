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



static char g_11 = 0L;
static unsigned g_60 = 4294967292UL;
static char g_70 = 0xE3L;
static unsigned g_71[4] = {0x69673C82L, 0x69673C82L, 0x69673C82L, 0x69673C82L};
static unsigned char g_86[3] = {0x29L, 0x29L, 0x29L};
static unsigned char g_115 = 0x30L;
static short g_116 = 0x2595L;
static unsigned g_123 = 0UL;
static short g_126 = 0x75E4L;
static unsigned char g_128 = 251UL;
static unsigned g_155 = 4294967295UL;
static unsigned char g_156 = 0x33L;
static unsigned g_157[4] = {1UL, 4294967295UL, 1UL, 4294967295UL};
static short g_165 = 4L;
static unsigned g_167 = 4UL;
static int g_168 = 0xA98C39EDL;
static unsigned short g_179 = 0x9E7AL;
static unsigned short g_180 = 1UL;
static int g_211 = 0x62854562L;
static unsigned g_213 = 0x0E1E6137L;
static char g_255 = 0x58L;
static int g_400 = 0L;
static short g_540[7] = {(-2L), (-2L), (-2L), (-2L), (-2L), (-2L), (-2L)};
static unsigned g_545[2] = {4294967295UL, 4294967295UL};
static const int g_581[9] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
static short g_673 = 0x12C0L;
static unsigned g_708 = 0xB0CFC8DAL;
static char g_770 = 0L;
static char g_921 = 1L;
static int g_927 = 0x33D7183DL;
static unsigned char g_965 = 255UL;
static unsigned short g_1021 = 0x3981L;
static unsigned g_1025 = 4294967290UL;
static int g_1193 = 0x441920E3L;
static char g_1312 = 0L;
static short g_1339[4] = {8L, 8L, 8L, 8L};
static int g_1374 = (-1L);
static int g_1401 = 0x255A02A0L;
static unsigned g_1476 = 0x380AA6B2L;
static char g_1540 = 0xEBL;
static short g_1551 = (-2L);
static int g_1649 = 0x88BE6373L;
static short g_1652 = 0L;
static short g_1746 = 8L;
static unsigned g_1819[3][2] = {{0UL, 1UL}, {0UL, 1UL}, {0UL, 1UL}};
static unsigned g_1991[2][7] = {{0xDE07B438L, 0xCE30F091L, 1UL, 1UL, 0xCE30F091L, 0xDE07B438L, 0xCE30F091L}, {0xDE07B438L, 0xCE30F091L, 1UL, 1UL, 0xCE30F091L, 0xDE07B438L, 0xCE30F091L}};
static short g_2095[8] = {0x0467L, 0x0467L, 0x66FDL, 0x0467L, 0x0467L, 0x66FDL, 0x0467L, 0x0467L};
static char g_2202[1] = {0x55L};
static int g_2224 = (-1L);
static char g_2226 = 1L;
static int g_2278 = 1L;
static unsigned g_2310 = 0x09656C55L;
static char g_2449 = 1L;
static char g_2471 = 0L;
static int g_2505[1][3][4] = {{{0x1FEF4754L, 0xC05CDE69L, 0x1FEF4754L, 0xC05CDE69L}, {0x1FEF4754L, 0xC05CDE69L, 0x1FEF4754L, 0xC05CDE69L}, {0x1FEF4754L, 0xC05CDE69L, 0x1FEF4754L, 0xC05CDE69L}}};
static unsigned g_2557 = 0x1647EFAAL;
static int g_2631[1][2][10] = {{{3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L}, {3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L}}};
static unsigned char g_2682[3] = {6UL, 6UL, 6UL};
static int g_2806 = 0x39A44DA6L;



static short func_1(void);
static char func_8(char p_9, unsigned short p_10);
static int func_17(unsigned char p_18, unsigned p_19);
static int func_20(unsigned p_21, short p_22);
static unsigned char func_25(unsigned char p_26, unsigned short p_27, const char p_28, unsigned p_29, unsigned short p_30);
static unsigned func_37(const unsigned char p_38, char p_39, char p_40);
static short func_46(unsigned p_47, unsigned p_48);
static int func_52(unsigned short p_53, unsigned p_54);
static int func_88(int p_89, int p_90);
static short func_97(unsigned short p_98, int p_99, unsigned char p_100, int p_101, unsigned char p_102);
static short func_1(void)
{
    unsigned short l_2[3][1][6] = {{{65528UL, 0x4081L, 0UL, 0x4081L, 65528UL, 0x4081L}}, {{65528UL, 0x4081L, 0UL, 0x4081L, 65528UL, 0x4081L}}, {{65528UL, 0x4081L, 0UL, 0x4081L, 65528UL, 0x4081L}}};
    int l_3 = 0x751C76D7L;
    int l_12 = 0xE1B1B552L;
    int l_2866[4][2][7] = {{{0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}, {0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}}, {{0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}, {0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}}, {{0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}, {0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}}, {{0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}, {0x2FDAFAECL, (-4L), 0L, (-5L), (-5L), 0xCF452AD3L, (-5L)}}};
    int i, j, k;
    l_3 = l_2[0][0][0];
    g_2631[0][1][0] = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((l_3 = func_8(g_11, (l_12 = (l_2[0][0][0] & 0x2B74L)))), 6)) || (((safe_sub_func_uint8_t_u_u(g_165, g_2682[0])) && g_60) == g_2449)), 0x22L));
    l_2866[2][1][0] = 0x3FD0BA7AL;
    return l_2866[3][1][5];
}







static char func_8(char p_9, unsigned short p_10)
{
    short l_13[7][2] = {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}};
    int l_2832 = 0xCA624054L;
    int l_2835 = 2L;
    char l_2845 = 0x51L;
    char l_2850 = 0x3EL;
    int l_2861 = 0L;
    int i, j;
    for (p_10 = 0; (p_10 <= 1); p_10 += 1)
    {
        unsigned l_14 = 0x26A056EBL;
        int l_15 = 0xD9827359L;
        short l_49 = 0x24ACL;
        int l_2819 = (-1L);
        int l_2836[1][10] = {{(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}};
        int i, j;
        l_15 = (l_14 = 2L);
        for (l_15 = 1; (l_15 >= 0); l_15 -= 1)
        {
            const unsigned l_41 = 8UL;
            int l_51 = 0x36E903ADL;
            for (p_9 = 1; (p_9 >= 0); p_9 -= 1)
            {
                int l_16[10][8][3] = {{{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}, {{0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}, {0x4B748ABBL, 0x4B748ABBL, 0x20859495L}}};
                unsigned short l_2818 = 65535UL;
                int i, j, k;
                l_16[2][0][0] = l_13[(p_9 + 4)][l_15];
                if (func_17((func_20((((((safe_sub_func_int16_t_s_s(((func_25((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(0xB6A69EEDL, (safe_lshift_func_uint16_t_u_s(g_11, 0)))), (0xAE56L == p_9))), ((func_37(l_41, g_11, ((l_51 = ((safe_lshift_func_uint16_t_u_u(8UL, (l_16[2][0][0] = (safe_rshift_func_int16_t_s_s(func_46(p_9, (l_49 , 7UL)), 6))))) , 0x0B182BC9L)) , p_10)) , g_540[3]) , p_9), l_13[2][0], p_9, g_545[0]) != l_41) < (-10L)), g_1339[2])) || 0x0CL) | g_581[6]) || 9UL) || l_41), g_581[3]) >= l_14), g_1339[2]))
                {
                    unsigned l_2813 = 0x4A44F27AL;
                    int i, j;
                    l_2819 = (l_2813 == ((((((g_1339[1] || (((safe_lshift_func_int16_t_s_s(1L, (3L >= l_13[1][0]))) , ((g_156 , 0xDAL) ^ (l_2818 = (~((g_128 = (((safe_add_func_uint32_t_u_u((0x3EL | l_15), 1L)) & 9UL) <= 0x0709L)) < l_2813))))) ^ 0L)) != p_9) ^ g_1819[1][1]) > g_2471) != p_10) <= g_1746));
                    l_16[7][0][0] = (((safe_div_func_uint32_t_u_u(g_156, g_1819[1][1])) ^ ((safe_mod_func_uint32_t_u_u(0xCAEAABA6L, ((l_2819 = (7L < l_51)) ^ func_97((l_16[3][5][0] = ((p_9 == ((l_13[(p_9 + 5)][p_9] = ((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_16[1][5][1], (safe_rshift_func_int8_t_s_s(g_921, g_1339[1])))), p_10)) | g_708), 0x18L)) >= (-1L))) & l_2832)) < l_49)), g_2226, p_10, l_2832, p_9)))) || g_2505[0][2][3])) < p_10);
                }
                else
                {
                    l_16[2][0][0] = g_2682[2];
                    for (l_2832 = 0; (l_2832 != (-27)); l_2832--)
                    {
                        l_2835 = g_86[1];
                    }
                }
                for (l_2819 = 1; (l_2819 >= 0); l_2819 -= 1)
                {
                    int l_2848[9][4][1] = {{{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}};
                    int i, j, k;
                    l_2836[0][2] = 0x4839B6CCL;
                    if ((((g_545[l_15] ^ (safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((g_545[l_2819] && ((safe_mod_func_uint16_t_u_u(((g_540[1] = (((g_2095[5] < p_9) , (g_1339[2] = (safe_lshift_func_uint16_t_u_s(l_49, (p_10 || l_2845))))) >= g_2095[4])) > (g_673 = (func_46((safe_add_func_uint16_t_u_u((func_46((((g_2631[0][1][0] , 0x97L) && l_41) <= (-1L)), p_9) != l_41), l_2845)), g_2631[0][1][0]) <= g_2471))), p_10)) || l_13[3][1])), (-1L))) > l_2836[0][2]), l_2848[2][2][0]))) && 0x13BAL) > g_1312))
                    {
                        g_2806 = p_9;
                        if (l_2845)
                            break;
                    }
                    else
                    {
                        unsigned l_2849 = 0xDF5F3997L;
                        l_2849 = (g_2631[0][1][0] = p_9);
                    }
                }
            }
            l_51 = 1L;
        }
    }
    l_2861 = ((l_2832 = ((l_2850 != func_37((g_540[4] , (((safe_add_func_uint8_t_u_u(l_2850, func_52(((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(l_2832, func_46(((safe_rshift_func_int8_t_s_s((g_2226 = (safe_lshift_func_uint8_t_u_u(((p_9 = p_10) ^ g_1374), 5))), 3)) && (-4L)), (l_2835 = g_167)))), 5)) , p_10), l_2832))) >= 4294967293UL) && l_2835)), g_1312, g_2682[0])) , p_9)) , 0x59B29B80L);
    l_2835 = (g_255 > l_2850);
    g_2631[0][1][0] = (l_2845 & (safe_div_func_uint16_t_u_u(l_13[6][0], ((g_70 , (((l_2835 = l_2835) & (-8L)) || p_9)) || ((((p_10 == l_13[3][0]) > (p_10 ^ 4294967295UL)) != l_2850) == 4294967295UL)))));
    return l_13[0][1];
}







static int func_17(unsigned char p_18, unsigned p_19)
{
    unsigned l_1768 = 0x6B6D28A4L;
    int l_1775[1];
    unsigned l_1776 = 0UL;
    unsigned l_1848[3];
    short l_1920 = 8L;
    unsigned char l_1980 = 0xF4L;
    char l_2020 = 0x6CL;
    int l_2021 = 0xBD899321L;
    unsigned l_2204 = 4294967294UL;
    unsigned char l_2233 = 0x6FL;
    unsigned short l_2265 = 0UL;
    unsigned l_2329 = 1UL;
    short l_2382 = 8L;
    int l_2558 = 1L;
    int l_2567 = 0x46472F27L;
    unsigned l_2642 = 0x69606D76L;
    short l_2653 = 0x505DL;
    unsigned char l_2669[9] = {253UL, 253UL, 0xA0L, 253UL, 253UL, 0xA0L, 253UL, 253UL, 0xA0L};
    unsigned l_2751[10] = {1UL, 0x59496D93L, 4294967295UL, 4294967295UL, 0x59496D93L, 1UL, 0x59496D93L, 4294967295UL, 4294967295UL, 0x59496D93L};
    short l_2811[4][9] = {{(-1L), (-1L), 1L, 0L, (-7L), 0L, 1L, (-1L), (-1L)}, {(-1L), (-1L), 1L, 0L, (-7L), 0L, 1L, (-1L), (-1L)}, {(-1L), (-1L), 1L, 0L, (-7L), 0L, 1L, (-1L), (-1L)}, {(-1L), (-1L), 1L, 0L, (-7L), 0L, 1L, (-1L), (-1L)}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_1775[i] = (-5L);
    for (i = 0; i < 3; i++)
        l_1848[i] = 4294967295UL;
    l_1768 = g_1339[3];
    for (g_123 = (-12); (g_123 != 10); g_123 = safe_add_func_uint16_t_u_u(g_123, 6))
    {
        int l_1771 = 0x225F684EL;
        int l_1801 = 0x98DB7388L;
        if (p_19)
        {
            int l_1772 = 0xFB71C5DAL;
            int l_1779 = (-5L);
            l_1771 = (!(g_71[3] >= 0x0FL));
            g_211 = ((0x8B12DFDDL != (func_46((l_1772 , ((l_1775[0] = p_18) >= (!l_1771))), func_46(g_927, (l_1776 > g_168))) , p_19)) != p_18);
            l_1779 = (safe_div_func_int32_t_s_s(p_18, p_19));
        }
        else
        {
            unsigned l_1780 = 4UL;
            int l_1783 = 1L;
            int l_1784[7];
            int l_1845 = 0x236E7483L;
            int l_1927[7] = {5L, 5L, (-8L), 5L, 5L, (-8L), 5L};
            int i;
            for (i = 0; i < 7; i++)
                l_1784[i] = 0x4C9573FFL;
            if ((((l_1780 || func_46((safe_mod_func_uint8_t_u_u(func_46(l_1775[0], func_46((g_1025 = ((func_46(l_1780, g_1374) & (l_1783 = func_46((p_19 & (g_126 & (p_18 > p_18))), g_116))) , p_19)), g_770)), 0x41L)), l_1784[3])) , l_1784[3]) | g_581[6]))
            {
                int l_1800 = 1L;
                for (g_1551 = (-1); (g_1551 < 5); ++g_1551)
                {
                    g_211 = g_213;
                }
                for (p_19 = 6; (p_19 < 45); p_19 = safe_add_func_uint32_t_u_u(p_19, 6))
                {
                    char l_1799 = 0xC2L;
                    l_1801 = (safe_rshift_func_int8_t_s_u(g_400, ((safe_lshift_func_int8_t_s_u(p_19, (g_1025 <= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_1771 = ((func_46(l_1771, (p_19 < ((g_180 = ((safe_mod_func_uint16_t_u_u((((p_18 , ((l_1800 = l_1799) || p_18)) >= p_19) && 0x8F2691E5L), 0x6A84L)) && g_965)) || l_1780))) >= 0xF1L) & l_1784[3])), p_18)), p_19)) > p_18)))) || 1L)));
                    if (p_19)
                        continue;
                }
            }
            else
            {
                short l_1802 = (-4L);
                int l_1834 = 0L;
                g_211 = l_1802;
                for (g_11 = 0; (g_11 <= 2); g_11 += 1)
                {
                    char l_1803 = (-6L);
                    short l_1818 = 0xD078L;
                    int l_1875[6] = {0xFDB37FE3L, 0xFDB37FE3L, 6L, 0xFDB37FE3L, 0xFDB37FE3L, 6L};
                    int i;
                    if (((l_1784[g_11] = l_1803) && func_46((g_213 = (safe_mod_func_int32_t_s_s((g_1819[1][0] = (safe_sub_func_int16_t_s_s(((g_1649 = ((g_545[0] , 0x7FEFL) < (l_1775[0] >= ((g_211 = 9L) ^ ((((safe_add_func_uint8_t_u_u(g_1652, (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((func_46(((!((+g_11) || ((((l_1771 = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((-1L), l_1818)) != l_1802), 0))) < g_168) , p_18) && 0UL))) == g_1540), p_18) == g_155), 0x20L)) > 0xD98AL), l_1783)))) == p_18) >= (-1L)) & g_540[0]))))) , 6L), p_19))), l_1802))), p_19)))
                    {
                        unsigned l_1828[5] = {0xFB4E4097L, 4294967295UL, 0xFB4E4097L, 4294967295UL, 0xFB4E4097L};
                        int i;
                        g_211 = (((safe_add_func_uint32_t_u_u(g_400, (p_19 = p_18))) , (safe_lshift_func_uint8_t_u_u(5UL, 5))) | g_1339[1]);
                        g_211 = (((((p_19 <= (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_1828[1], (g_86[g_11] = 0xCEL))), (p_18 = (safe_unary_minus_func_uint8_t_u((0xB9B5L > (safe_mod_func_int8_t_s_s((l_1783 = p_18), (l_1784[g_11] = 0x11L)))))))))) && 1L) , (+(p_18 , (l_1775[0] = ((((l_1784[g_11] = p_18) , g_60) <= g_965) , 65530UL))))) > g_168) || 3L);
                        l_1834 = (safe_add_func_int16_t_s_s(g_156, p_18));
                        l_1784[g_11] = func_46((l_1784[3] && (0x7BD2L | (g_179 = (l_1803 >= (p_18 >= (0x97B1L >= p_19)))))), p_19);
                    }
                    else
                    {
                        g_211 = l_1803;
                    }
                    if ((((((l_1784[g_11] = ((g_540[5] = (p_18 , (((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(func_46((((((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_1312, ((((p_18 & ((p_19 , (((((l_1802 && 4UL) , (p_19 == l_1803)) == p_18) == p_18) || l_1803)) , p_18)) , 0UL) != 0L) , l_1768))), p_18)) != g_1401) || p_19) && g_1746) , l_1775[0]), p_19), p_18)) , p_19), 6)) | g_157[0]) , l_1775[0]))) , 1L)) == l_1771) <= 0UL) && 0x2DL) != 0x67L))
                    {
                        l_1784[g_11] = (func_46(g_770, ((safe_rshift_func_uint16_t_u_s((g_1339[2] < ((l_1845 = l_1784[3]) , g_156)), 11)) , ((safe_div_func_uint16_t_u_u((g_400 < ((g_921 = (0x927AF5E5L ^ l_1848[1])) | 0UL)), (((safe_sub_func_uint32_t_u_u(4294967291UL, p_18)) , p_19) , p_19))) < 0x8C802D8FL))) > g_157[2]);
                        g_211 = (((g_157[2] = l_1780) > l_1775[0]) > 0xE6L);
                        g_211 = (g_157[1] , (safe_lshift_func_uint8_t_u_u(l_1834, (l_1780 , (safe_mod_func_uint16_t_u_u(func_46(g_155, ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(p_19, ((~((p_18 , ((((l_1775[0] = (+(l_1845 <= (safe_sub_func_int32_t_s_s(l_1784[g_11], (((safe_mod_func_uint16_t_u_u(g_1339[2], p_19)) , l_1775[0]) >= g_1649)))))) >= g_1025) > g_156) >= 0xEC25L)) || 0UL)) != g_1649))) , 0x1F1CC94EL), l_1768)), p_19)) == p_18)), p_19))))));
                        l_1775[0] = 0L;
                    }
                    else
                    {
                        l_1834 = (safe_mod_func_int8_t_s_s(func_46(p_19, p_19), ((safe_lshift_func_int8_t_s_u(g_927, 1)) , (safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(p_18, g_708)) , (l_1771 > (func_46(p_19, (((l_1875[3] = (l_1784[g_11] = (((func_46(p_18, g_1339[2]) == p_19) >= 8UL) || g_180))) >= p_19) || g_400)) & 0x72L))), p_18)), g_708)))));
                        g_211 = p_18;
                        return p_19;
                    }
                }
                l_1801 = 0x9D9F8E7CL;
                g_211 = 8L;
            }
            for (g_1312 = 0; (g_1312 >= (-22)); g_1312--)
            {
                short l_1888 = 0xEF4CL;
                int l_1913 = 0L;
                l_1888 = (g_211 = (func_46(g_180, l_1845) <= (safe_add_func_int32_t_s_s(p_19, ((safe_rshift_func_int8_t_s_s(0x51L, (safe_lshift_func_int16_t_s_u((l_1775[0] = (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_1848[0], l_1775[0])), func_46(g_708, l_1771)))), p_18)))) > 0xBF9623E9L)))));
                if ((safe_div_func_uint32_t_u_u((func_46(g_927, ((((safe_add_func_uint32_t_u_u(func_46((l_1784[3] = g_581[3]), g_1476), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, (+p_19))), ((g_156 & 0xA1L) , ((safe_rshift_func_int16_t_s_u(func_46((p_18 , 0xA473C649L), p_19), p_18)) == g_128)))))) != g_1339[2]) , 65529UL) & g_1021)) > (-7L)), 0x51513383L)))
                {
                    l_1775[0] = (g_71[0] ^ ((((safe_lshift_func_uint8_t_u_u(l_1845, 2)) == (g_167 | func_46(((safe_sub_func_uint32_t_u_u(0x075C686EL, ((0xBBL && 1UL) & l_1771))) == ((0x827FB6F6L >= l_1888) , g_11)), p_19))) != p_18) < g_255));
                }
                else
                {
                    unsigned char l_1907 = 0x30L;
                    int l_1908 = 1L;
                    if (l_1848[2])
                        break;
                    g_211 = g_1551;
                    if ((l_1913 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_126, func_46((func_46((func_46(g_927, l_1907) <= (l_1908 = (p_18 = g_156))), l_1783) && (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((func_46(((g_545[0] , (p_18 | p_19)) > l_1908), l_1908) , 1UL), 3)), 6))), p_19))), 8))))
                    {
                        char l_1921 = (-3L);
                        l_1775[0] = l_1888;
                        g_211 = l_1908;
                        l_1913 = (safe_lshift_func_uint8_t_u_u(255UL, ((g_540[1] ^ 5L) >= (safe_rshift_func_uint8_t_u_s(0UL, ((safe_lshift_func_uint8_t_u_u(0UL, ((g_70 == (l_1921 = ((p_19 , g_921) & (((+l_1920) , p_18) == g_1374)))) , l_1784[4]))) | l_1888))))));
                    }
                    else
                    {
                        return l_1888;
                    }
                }
                for (g_180 = (-8); (g_180 >= 33); ++g_180)
                {
                    const char l_1926 = 0x8EL;
                    if (l_1780)
                        break;
                    g_211 = l_1848[1];
                    l_1775[0] = ((safe_lshift_func_uint8_t_u_s(g_1025, (func_46(g_1551, p_19) || (l_1926 , (((-5L) != l_1775[0]) >= ((l_1926 || (func_46(g_60, l_1771) <= l_1780)) ^ l_1927[4])))))) != p_19);
                }
            }
            g_211 = g_157[3];
        }
        if (l_1801)
            break;
        g_211 = (l_1775[0] = (l_1801 = ((~1UL) >= (8UL > (func_46(((safe_sub_func_int32_t_s_s((p_18 || func_46((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_1848[1] > (safe_mod_func_int8_t_s_s((((g_179 = func_46(((safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((func_46((safe_lshift_func_uint8_t_u_s(250UL, p_18)), (safe_div_func_uint16_t_u_u((p_19 || (l_1848[1] > g_1819[1][1])), p_19))) , g_400), 0x04L)) || 2L) < g_1312), 0x20614E98L)) , 4294967295UL), l_1848[1])) && l_1801) | g_545[0]), g_1819[1][0]))) >= g_1339[1]), (-1L))), p_18)), g_1374)), p_19)), l_1848[0])) , g_60), l_1768) < g_211)))));
        for (g_126 = 0; (g_126 < 29); ++g_126)
        {
            unsigned l_1957 = 0x4A329396L;
            int l_1958 = (-9L);
            for (g_1476 = 0; (g_1476 >= 21); g_1476++)
            {
                short l_1956[4][2] = {{0x2791L, (-1L)}, {0x2791L, (-1L)}, {0x2791L, (-1L)}, {0x2791L, (-1L)}};
                int i, j;
                if (((l_1920 | (((p_18 != func_46(g_1649, (0x0A73D155L == (safe_sub_func_uint32_t_u_u((p_19 = (((p_19 & (((safe_div_func_int32_t_s_s((g_126 <= ((5UL < (safe_mul_func_int8_t_s_s(l_1956[2][0], ((l_1775[0] = 1UL) != 0x23L)))) < 0L)), 0xF2BC7616L)) < l_1957) < l_1956[1][1])) != l_1848[0]) ^ l_1957)), g_126))))) > 1UL) == g_1649)) >= l_1848[1]))
                {
                    l_1958 = g_211;
                }
                else
                {
                    char l_1963 = 5L;
                    int l_1972 = 1L;
                    if (((l_1958 = (safe_sub_func_uint8_t_u_u(p_19, (safe_add_func_int32_t_s_s(l_1963, ((0L >= (1UL != (l_1958 && (g_255 , (safe_rshift_func_uint16_t_u_u((p_19 ^ (safe_lshift_func_uint16_t_u_u(0x281EL, 13))), (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((0xC291L | l_1956[2][0]) | 5UL), g_70)), 0x8F12EDF3L)))))))) <= p_18)))))) , 0L))
                    {
                        l_1972 = 3L;
                    }
                    else
                    {
                        unsigned l_1973[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1973[i] = 0x60D663F7L;
                        l_1972 = p_19;
                        g_211 = p_18;
                        l_1973[2] = l_1956[2][0];
                        g_211 = 0xBC0C5E49L;
                    }
                    l_1958 = (l_1956[2][0] & g_1312);
                }
            }
            return l_1957;
        }
    }
    if (((((safe_rshift_func_uint8_t_u_s(func_97((safe_rshift_func_int8_t_s_s(l_1848[1], g_1476)), (+p_18), (p_18 > p_19), (l_1920 && ((l_1980 = (g_86[1] || p_18)) , (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((l_1920 <= g_1991[0][2]) , g_86[2]), g_255)), p_18)) , g_115), l_1776)) || 0x8AC5L), 12)) != l_1848[1]), p_19)))), g_1746), 7)) > 4294967295UL) < 0L) , p_18))
    {
        char l_1992[6][2][3] = {{{1L, 0xD0L, 1L}, {1L, 0xD0L, 1L}}, {{1L, 0xD0L, 1L}, {1L, 0xD0L, 1L}}, {{1L, 0xD0L, 1L}, {1L, 0xD0L, 1L}}, {{1L, 0xD0L, 1L}, {1L, 0xD0L, 1L}}, {{1L, 0xD0L, 1L}, {1L, 0xD0L, 1L}}, {{1L, 0xD0L, 1L}, {1L, 0xD0L, 1L}}};
        int l_2005 = 2L;
        const unsigned l_2082 = 2UL;
        unsigned char l_2141 = 0xC4L;
        unsigned char l_2331 = 249UL;
        int l_2454 = 1L;
        const unsigned l_2673 = 4294967287UL;
        short l_2705 = (-1L);
        int l_2725 = (-10L);
        int l_2726[1];
        int l_2793 = 0x2AC07F36L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2726[i] = 0L;
        l_1775[0] = (g_1025 , (-1L));
        if (g_540[1])
        {
            unsigned char l_2006 = 0xF8L;
            int l_2007 = (-1L);
            unsigned short l_2022 = 0xA232L;
            l_2005 = (func_37((p_18 = (g_123 < l_1992[3][1][1])), p_19, (safe_lshift_func_uint16_t_u_u(p_19, ((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_19, (g_673 || (p_19 , ((l_1775[0] = func_46(((l_1980 >= (l_2006 = func_46(((p_19 > g_128) > l_2005), p_19))) , 7UL), l_2007)) , g_11))))), l_1776)), l_1768)), 0x03D14D63L)), p_19)) & l_2005)))) , g_921);
            l_1775[0] = (l_2007 = g_70);
            l_1775[0] = (0xF97D30BAL != ((func_97(p_19, (l_2007 = (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_2006 | (l_2022 = ((g_255 == ((safe_add_func_uint16_t_u_u(func_97((g_540[1] , (safe_sub_func_uint16_t_u_u(((g_156 < 1UL) , func_97((g_179 = func_97(l_2006, l_2006, g_1991[0][2], g_540[0], p_18)), l_1776, p_19, g_60, l_2020)), p_19))), l_2021, l_1920, g_71[0], g_540[1]), 0L)) < l_2005)) || 0L))), 15)), 7UL)), 2)), l_1980))), g_1025, p_19, p_18) == g_86[0]) , 0x6C78F1D8L));
            l_2005 = p_18;
        }
        else
        {
            int l_2057[9] = {0xCB4089E9L, 0xCB4089E9L, (-5L), 0xCB4089E9L, 0xCB4089E9L, (-5L), 0xCB4089E9L, 0xCB4089E9L, (-5L)};
            int l_2068 = (-1L);
            short l_2169 = 0x0AFFL;
            unsigned char l_2277 = 7UL;
            const short l_2371 = 1L;
            unsigned char l_2406 = 248UL;
            int i;
            l_2005 = p_19;
            for (g_123 = 0; (g_123 > 24); g_123++)
            {
                int l_2064 = 0x371DB4EAL;
                unsigned short l_2069 = 0UL;
                int l_2149[6] = {0x568F62A3L, (-10L), 0x568F62A3L, (-10L), 0x568F62A3L, (-10L)};
                short l_2171 = (-1L);
                unsigned char l_2172 = 255UL;
                short l_2191 = (-10L);
                short l_2225 = 0x66C3L;
                int i;
                for (g_1401 = 0; (g_1401 == 13); g_1401++)
                {
                    short l_2042 = 0x5713L;
                    unsigned short l_2070 = 0x4380L;
                    int l_2071 = 0xEF04D7E9L;
                    if ((func_46(func_46((4UL && (g_1746 = 0xFED1L)), (safe_sub_func_int32_t_s_s((g_211 = g_126), (p_19 = (safe_unary_minus_func_uint16_t_u(((g_60 = (safe_add_func_int16_t_s_s(((l_2005 = 0xBB570165L) >= (safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((8L || ((safe_div_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s(p_18, func_46(g_540[1], g_70))) & (-8L)) && 1UL) != 0xCD7F37DDL), (-5L))) < 0x148C9452L)), p_18)), p_18)) && 65535UL), l_2042))), g_540[2]))) & g_708))))))), g_1551) && p_19))
                    {
                        char l_2067 = 0x14L;
                        g_211 = (safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(func_46((+func_46((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(g_115, 7)), l_2057[1])), (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((g_126 = func_46((g_545[0] = (g_128 , ((((g_1339[2] = ((safe_div_func_uint16_t_u_u((((l_2064 ^ p_19) , ((safe_div_func_int8_t_s_s((l_2068 = func_46((p_18 ^ (func_46(l_1992[5][0][0], l_1992[3][1][1]) || p_19)), l_2067)), l_1768)) <= p_19)) <= (-3L)), l_2042)) > g_1476)) > l_2069) , g_86[1]) || p_19))), p_19)), (-7L))), p_19)))), l_2070), (-4L))), g_673)), 0x95209727L)), 0x09C3L)) < 0xB45FL) && g_165), g_1193));
                        l_2071 = 0x99B3C341L;
                        l_2071 = l_2070;
                        l_2071 = ((((((safe_rshift_func_uint16_t_u_s((l_1775[0] = (l_2068 = (l_2067 | l_1992[3][0][2]))), 7)) <= g_540[6]) || l_2057[4]) ^ (g_581[3] != (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((((-1L) && (safe_add_func_uint16_t_u_u((((g_179 = g_179) && ((((safe_rshift_func_uint16_t_u_s(l_2082, 0)) , (0x67L == l_2067)) <= g_128) ^ 0L)) || l_2021), p_19))) , 0x58L) & l_2067) && g_770) , l_1768), l_2021)), p_18)))) || 0x4DE01567L) ^ 9UL);
                    }
                    else
                    {
                        unsigned short l_2089[5];
                        int l_2094 = 0x39ADE7B9L;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2089[i] = 0x2264L;
                        l_2094 = (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_1339[2] = (l_2089[3] > (l_1775[0] >= l_1768))), (safe_div_func_uint32_t_u_u(l_2071, (safe_rshift_func_uint8_t_u_s(0x9CL, 3)))))), (-1L))) , (g_211 = 0xF354D26EL)) >= g_1819[1][0]), l_2068));
                        g_211 = g_1476;
                    }
                    l_2057[1] = l_2069;
                    g_211 = func_46(g_2095[6], ((safe_add_func_int16_t_s_s((l_2071 = p_19), (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(g_400, ((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_540[6], 7)) && func_46((l_1775[0] = ((((safe_mod_func_int16_t_s_s(p_19, p_19)) == l_2064) || p_18) , l_2070)), l_1992[3][1][1])), 0xFE8676F4L)) <= 0x92L))), l_2082)))) & l_2070));
                }
                if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_46(((((safe_rshift_func_int8_t_s_s(p_19, func_46(((safe_rshift_func_int8_t_s_u(g_1193, 2)) , (((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(1UL, (p_18 ^ (g_1746 | (safe_add_func_int16_t_s_s(l_2005, 1UL)))))) > ((safe_lshift_func_uint16_t_u_u(g_60, 5)) >= (g_155 = ((l_2068 = g_540[6]) || g_179)))), 1UL)) , p_19) ^ (-1L))), g_1339[1]))) > p_19) , p_18) , g_71[0]), p_18), l_1775[0])), 4)))
                {
                    short l_2130 = 2L;
                    int l_2148 = 0x46883B24L;
                    int l_2150 = 4L;
                    unsigned char l_2153 = 0UL;
                    char l_2167 = 0L;
                    g_211 = (safe_sub_func_uint32_t_u_u(l_1992[3][1][1], ((l_2005 = (safe_mod_func_int32_t_s_s((~((((1L | (safe_div_func_uint16_t_u_u(l_2130, l_2069))) | (l_1992[3][0][0] >= ((safe_lshift_func_uint16_t_u_u((((l_1775[0] = l_2064) , ((((((0L > l_1775[0]) && g_1021) ^ p_19) == (-1L)) , p_19) , g_581[7])) == g_179), g_60)) == l_2082))) , g_116) && g_540[0])), 0xCA59E9C4L))) > l_1992[2][0][0])));
                    for (g_1652 = (-17); (g_1652 >= 26); g_1652 = safe_add_func_uint32_t_u_u(g_1652, 9))
                    {
                        g_211 = (l_2150 = ((safe_sub_func_uint8_t_u_u((g_86[0] = (safe_div_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(func_46(g_1025, ((g_115 = g_1819[2][0]) <= l_2141)), ((((safe_sub_func_uint16_t_u_u(0xC5C6L, (l_2148 = ((+l_2130) && ((g_1540 = 1L) , (safe_add_func_uint8_t_u_u(0xBDL, ((safe_sub_func_uint8_t_u_u(((g_708 || 0xCC03F6F2L) == 4294967293UL), 1L)) , 0x59L)))))))) && p_19) <= g_1652) , l_2149[0]))) | 0x04L) , p_19), l_2130))), 0L)) & g_1025));
                        g_211 = (p_18 != (func_46(g_1401, l_2082) ^ ((l_2057[1] = (l_2069 | (p_19 >= func_46((l_2148 , l_2020), g_708)))) >= p_18)));
                        if (l_2153)
                            break;
                        if (p_18)
                            break;
                    }
                    if (p_19)
                    {
                        const int l_2168 = 0x9BC6B14AL;
                        int l_2170 = 1L;
                        l_1775[0] = (safe_mod_func_uint8_t_u_u(g_581[3], g_1025));
                        l_2064 = ((l_2057[1] = ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_213 , func_46((p_18 , (((l_2148 = p_18) == l_1768) ^ (((g_60 = (safe_sub_func_int16_t_s_s(g_179, func_46(l_2068, (safe_rshift_func_int8_t_s_u((~l_1848[1]), 1)))))) < ((((((safe_unary_minus_func_int16_t_s(((func_46((l_2170 = (l_2169 = ((safe_sub_func_int16_t_s_s((((g_115 = 0x44L) <= p_19) > l_2167), l_2168)) > 0x43DBL))), p_19) , 0xBDL) & p_18))) , 0x5015F8DEL) , p_18) , l_2082) , l_1775[0]) , l_2171)) , l_2082))), l_2172)) , 1UL), g_770)), 0xD3L)) < l_2168)) || 0x4D303B68L);
                        g_211 = (safe_add_func_uint32_t_u_u(0x871A2DB8L, ((+(((((((((safe_add_func_int32_t_s_s(p_19, p_18)) >= (func_46(((((g_1021 == func_46(g_540[1], ((l_1768 ^ (0x34C6L & (safe_add_func_uint32_t_u_u(p_19, p_18)))) > 0x5C18DCCBL))) != g_179) | 0UL) , g_581[3]), p_19) , 1L)) < 0xDA2C2676L) > p_19) <= p_18) >= p_19) != 0UL) && g_1312) ^ g_60)) , l_1920)));
                    }
                    else
                    {
                        g_211 = l_1776;
                    }
                    l_2068 = p_19;
                }
                else
                {
                    int l_2203 = 5L;
                    g_211 = ((safe_add_func_int32_t_s_s((l_1992[0][0][2] <= (safe_lshift_func_int8_t_s_s((l_2068 = (g_545[0] ^ g_71[3])), (safe_rshift_func_uint8_t_u_u((p_18 || l_2149[3]), p_19))))), ((safe_div_func_int32_t_s_s((l_1775[0] = (safe_mod_func_int16_t_s_s(p_19, ((l_1768 , func_46((safe_lshift_func_int16_t_s_u((l_1775[0] = l_2171), g_1476)), l_2191)) | p_18)))), g_1819[0][1])) ^ g_581[6]))) <= g_540[1]);
                    for (g_965 = 17; (g_965 >= 9); --g_965)
                    {
                        short l_2223 = 0L;
                        l_2005 = p_18;
                        l_2068 = ((g_1312 = p_19) , ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(func_46(g_168, (l_2204 = ((l_2203 = ((g_1021 , l_2169) , (((safe_sub_func_uint32_t_u_u(p_19, (l_1992[3][1][1] > (safe_add_func_uint8_t_u_u(0xF1L, (~((((65530UL & p_19) != g_1025) , 0x57A7L) , 0xD1L))))))) || g_2202[0]) , l_2057[1]))) || g_581[3]))), 2)), 11)) >= 1L));
                        g_211 = (safe_lshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s(0xC2B5L, (safe_div_func_uint32_t_u_u(func_46((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(func_46((g_2095[6] && ((p_19 , p_19) > p_18)), ((((l_2005 = (((safe_lshift_func_uint8_t_u_u(((-3L) < (((safe_sub_func_uint8_t_u_u((((((g_155 = (safe_sub_func_uint32_t_u_u(0UL, ((((safe_div_func_uint32_t_u_u((((g_86[1] && g_179) , l_2223) >= p_19), g_2224)) & g_60) == g_1021) && (-4L))))) || l_2057[4]) | g_1312) >= g_2095[2]) >= l_1848[2]), l_2149[0])) == 0xF4L) != g_921)), g_545[0])) == l_2223) == l_2223)) >= p_18) , g_1991[0][1]) , p_18)), 10)), l_2225)), l_1992[3][1][1]), l_2223)))) >= 0xA6L) == 0xB5L), p_18));
                        g_2226 = 0xD6EC8EA5L;
                    }
                }
                for (l_1920 = 0; (l_1920 < 25); ++l_1920)
                {
                    if (((safe_rshift_func_uint16_t_u_s((l_1775[0] & (g_1339[0] < ((((p_19 ^ ((g_400 & ((g_116 >= (safe_lshift_func_int8_t_s_u((l_2172 ^ l_1848[1]), 1))) && (p_18 , g_2202[0]))) , g_1551)) , 0x7938FCCBL) < g_581[3]) , 7UL))), p_19)) == l_2233))
                    {
                        unsigned char l_2236 = 6UL;
                        l_2005 = (safe_sub_func_int32_t_s_s((0x73L < l_2236), func_46((((l_2236 && (safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((l_1992[2][1][1] , (p_18 == g_673)) | (safe_lshift_func_uint16_t_u_s((((3L ^ ((g_165 != p_18) & p_18)) && 0xAF33L) > 0xB624CD61L), 7))), p_18)), l_2191))) != l_1768) == g_545[0]), p_18)));
                    }
                    else
                    {
                        unsigned l_2256 = 4294967291UL;
                        l_2057[8] = (((safe_lshift_func_int8_t_s_u(p_18, (((g_581[3] & (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((func_46(g_116, g_1339[2]) <= (func_46((1L < (((safe_rshift_func_uint16_t_u_u(g_1193, p_18)) || (l_2057[1] = (g_115 = (safe_lshift_func_int8_t_s_u(l_1980, 7))))) || 0x0D6DL)), p_19) > l_2141)) , 0x849FL), 8)), l_1848[1])), p_19))) & g_581[3]) <= g_86[0]))) , 0x548AL) , l_2171);
                        g_211 = (~(l_2256 = ((p_18 >= ((safe_unary_minus_func_int32_t_s((l_2005 = 0L))) , p_19)) < p_18)));
                    }
                    for (g_708 = 0; (g_708 <= 6); g_708 += 1)
                    {
                        return l_1992[1][0][0];
                    }
                    l_1775[0] = (-1L);
                    l_2057[1] = 0x4F8AF2AEL;
                }
                if (l_1992[2][1][2])
                {
                    char l_2266 = 3L;
                    const unsigned short l_2267 = 0xA05AL;
                    l_2005 = (-1L);
                    l_2057[1] = (safe_sub_func_int8_t_s_s(8L, (((((safe_lshift_func_int16_t_s_u(((p_19 & p_19) != 0x76L), 0)) == ((g_2202[0] = (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(l_2005, (l_2265 = p_18))), 0xF6ACCB7CL))) > (l_1775[0] = (-8L)))) | (l_2266 , l_2057[1])) , p_18) , p_18)));
                    if ((255UL <= l_2267))
                    {
                        g_211 = g_156;
                    }
                    else
                    {
                        unsigned l_2274 = 0xFC1FB89FL;
                        unsigned short l_2281[8][7] = {{0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}, {0x30B3L, 65535UL, 0UL, 0x326DL, 0x9D49L, 0x9BE0L, 8UL}};
                        int i, j;
                        g_2278 = (g_211 = (((safe_div_func_int16_t_s_s((~(safe_div_func_uint32_t_u_u((0x888DFB72L || p_18), (l_2277 = (safe_add_func_uint16_t_u_u((((g_1540 == ((((func_46(l_2274, (l_2005 = ((safe_lshift_func_int8_t_s_s(g_1819[1][0], 7)) ^ 0x8AL))) >= func_46((g_211 , (l_2267 , g_2202[0])), l_2267)) ^ (-10L)) != 0x9713L) , g_1193)) ^ p_18) || g_1819[1][0]), l_2267)))))), 0x43ACL)) == g_180) < g_581[3]));
                        l_2281[4][6] = (safe_rshift_func_int16_t_s_u(l_2274, 10));
                    }
                }
                else
                {
                    char l_2282 = 0x38L;
                    int l_2311 = (-1L);
                    if (p_19)
                    {
                        l_2282 = p_19;
                    }
                    else
                    {
                        int l_2291 = 1L;
                        l_1775[0] = func_46((((p_19 = ((g_157[2] = (g_2095[7] | func_46(((safe_sub_func_int32_t_s_s((-8L), (((((safe_add_func_uint8_t_u_u((4294967295UL || ((l_1775[0] = l_2169) < l_2282)), (l_2005 = g_157[2]))) || ((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_708, l_2291)), (-1L))) , 0xD824A369L)) != 0x301EL) == l_2282) | p_18))) , p_19), l_2191))) , p_19)) | l_2172) >= p_18), g_1819[1][0]);
                        if (p_19)
                            break;
                    }
                    for (g_965 = 13; (g_965 >= 58); g_965 = safe_add_func_uint16_t_u_u(g_965, 7))
                    {
                        char l_2314[8][10][3] = {{{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}, {{(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}, {(-1L), 0x79L, 6L}}};
                        int i, j, k;
                        l_2068 = ((safe_mod_func_uint32_t_u_u((((((safe_rshift_func_uint16_t_u_s(65529UL, 9)) & (l_1848[0] == ((safe_sub_func_int8_t_s_s(p_19, (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((!(safe_add_func_int16_t_s_s(g_965, 0x6F75L))) , (~0xE7B7L)) ^ (func_46(l_2282, (safe_div_func_uint32_t_u_u((l_2064 = l_1768), (l_2057[1] = (g_921 , 0xE141019EL))))) != p_18)), 11)), 0UL)))) >= 0x13L))) ^ 0x44L) <= g_673) >= 4294967295UL), p_19)) & g_2310);
                        l_2311 = p_18;
                        l_1775[0] = (safe_mod_func_uint32_t_u_u(l_2314[7][8][2], l_2314[0][7][0]));
                        l_2005 = g_2202[0];
                    }
                    l_2064 = (((g_1339[1] != l_2064) , (((p_18 && (l_2057[1] = l_2277)) , (safe_add_func_uint8_t_u_u(0xC3L, ((safe_add_func_uint8_t_u_u(func_46(p_19, (((safe_sub_func_uint32_t_u_u(((p_19 , 0xD756L) <= (safe_mod_func_uint32_t_u_u((g_2310 = (safe_lshift_func_int16_t_s_s(p_19, l_2277))), p_18))), p_18)) > 3L) > 0x07BA1A20L)), g_1401)) && 0x931A4DB3L)))) , 0x02B3L)) == g_545[1]);
                    if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_2329, l_2082)), 0)))
                    {
                        unsigned l_2330 = 0xF020218CL;
                        return l_2330;
                    }
                    else
                    {
                        l_2064 = p_19;
                        if (l_2331)
                            break;
                        l_2005 = ((safe_add_func_uint8_t_u_u(0xC8L, p_19)) | ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((func_46(g_213, g_60) , (safe_rshift_func_int8_t_s_s(g_540[1], (safe_div_func_int8_t_s_s((+((p_19 == g_965) <= ((l_2311 = (p_18 < 0x96L)) , g_1991[0][2]))), (-9L)))))), 2)), (-9L))) != l_1768));
                        l_2311 = 0xB25FF221L;
                    }
                }
            }
            for (g_155 = 0; (g_155 <= 8); g_155 += 1)
            {
                int l_2369 = 0x638A6176L;
                unsigned l_2370 = 0xF71D7FDAL;
                int l_2379 = 1L;
                int i;
                if ((safe_sub_func_int16_t_s_s((-8L), (safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s((((l_2068 = (((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((0x8C0B50C0L || (safe_div_func_int8_t_s_s(func_97((safe_add_func_uint8_t_u_u((4294967295UL >= l_2057[g_155]), (l_2005 = ((!(safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((0UL >= (safe_mod_func_int32_t_s_s((l_1775[0] = ((safe_rshift_func_uint8_t_u_u((func_97(g_168, p_19, (safe_sub_func_uint8_t_u_u(((l_2370 = (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((+(((l_2369 = (0x883B7275L | (g_1819[1][0] & p_18))) != p_18) | p_18)), l_2082)), g_255))) < l_2371), 0L)), l_2005, g_581[7]) , l_2369), p_19)) | 0x7FL)), p_18))), 1L)), 5))) >= g_2226)))), g_1540, g_1401, g_2278, g_255), l_1920))), p_19)) >= p_18), 7)) , 4L) != 4UL)) >= 0x53791B9AL) && g_2224), 0x34BC9E62L)))))))
                {
                    l_1775[0] = p_18;
                    if (l_2057[g_155])
                        break;
                    for (l_2021 = 1; (l_2021 >= 0); l_2021 -= 1)
                    {
                        int i, j;
                        g_211 = (+g_1819[l_2021][l_2021]);
                    }
                }
                else
                {
                    l_2057[1] = ((((65535UL >= g_1339[0]) , (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_2329, g_1339[2])), 5))) >= func_46(g_1021, (p_19 , g_71[1]))) & l_2369);
                    for (g_770 = 1; (g_770 >= 0); g_770 -= 1)
                    {
                        l_2057[4] = (-4L);
                    }
                }
                l_2057[g_155] = (l_1980 > l_1980);
                for (l_1980 = 0; (l_1980 <= 1); l_1980 += 1)
                {
                    int l_2376 = 0xCAFB5BEEL;
                    int i, j;
                    if (g_1819[(l_1980 + 1)][l_1980])
                        break;
                    if (g_165)
                        break;
                    l_2057[g_155] = l_2233;
                    l_2382 = ((l_2376 = ((g_1991[0][4] && 0x3613L) && 4294967289UL)) | (g_128 < ((g_60 = (l_2005 = (p_19 , (g_157[2] = (safe_sub_func_int16_t_s_s(g_157[2], ((0UL | l_2379) & (safe_add_func_int8_t_s_s((+(g_1374 >= (-1L))), l_2369))))))))) == 1UL)));
                }
            }
            if ((!((safe_sub_func_int32_t_s_s(p_18, g_2202[0])) == p_19)))
            {
                int l_2394 = 0xF0618EB2L;
                l_2057[2] = l_2082;
                for (l_2329 = 8; (l_2329 > 52); l_2329 = safe_add_func_uint16_t_u_u(l_2329, 4))
                {
                    unsigned l_2389[5] = {0UL, 1UL, 0UL, 1UL, 0UL};
                    int i;
                    g_211 = p_19;
                    for (g_156 = 0; (g_156 >= 59); ++g_156)
                    {
                        l_1775[0] = l_2389[3];
                        l_2057[7] = p_18;
                        g_211 = func_97(p_18, (safe_div_func_int16_t_s_s(l_2371, ((((p_19 | (l_1992[5][1][0] > g_1540)) & (l_2277 , (safe_mod_func_int32_t_s_s(p_19, 6L)))) >= (p_19 <= 0xC0L)) , g_770))), g_126, g_123, g_921);
                    }
                    l_2068 = (g_211 = (l_2394 = g_156));
                    for (g_1540 = 0; (g_1540 < (-22)); g_1540 = safe_sub_func_uint16_t_u_u(g_1540, 1))
                    {
                        unsigned l_2404 = 0xC7B118D5L;
                        int l_2405 = (-1L);
                        l_2005 = (l_2406 = func_88((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s(1L)) ^ g_545[0]) != ((l_1775[0] ^ (((l_2405 = (safe_mod_func_uint16_t_u_u(((g_921 || (((safe_sub_func_uint8_t_u_u(func_37(((func_37((p_18 = (func_97(l_2404, g_673, p_19, l_2404, g_1746) && (-3L))), l_2057[1], l_2404) , l_2404) > g_1652), g_2095[6], p_19), p_19)) != l_2329) == 4UL)) , l_2169), l_2394))) , g_1193) == 0x7722L)) | l_2394)), p_19)), l_1992[5][1][0]));
                        g_211 = (safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_19, g_2310)), (((l_2394 = l_2169) , p_18) , ((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((!g_11), (safe_add_func_uint16_t_u_u((l_2389[3] > 1UL), (0xF8L != p_19))))) || p_19), g_86[1])) || p_18) , l_2405), g_2224)), p_18)) && l_2405)))), g_581[3]));
                    }
                }
            }
            else
            {
                short l_2431[4][6][7] = {{{0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}}, {{0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}}, {{0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}}, {{0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}, {0x6917L, 0x6917L, 0x22B8L, 0x3FA7L, (-7L), 0x3FA7L, 0x22B8L}}};
                int i, j, k;
                for (g_1551 = 0; (g_1551 <= 18); ++g_1551)
                {
                    unsigned short l_2430 = 0x8B63L;
                    int l_2444 = 0x9EBC54DFL;
                    for (g_123 = 0; (g_123 > 31); ++g_123)
                    {
                        l_2431[0][0][3] = (safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u(l_1992[3][1][1], l_2430))));
                    }
                    for (g_2224 = 0; (g_2224 <= 3); g_2224 += 1)
                    {
                        int l_2445 = 0xCAED9EB9L;
                        int l_2448 = 0x4BC93CFAL;
                        int i;
                        g_211 = ((safe_div_func_int32_t_s_s((((0x7CB0L <= g_1339[g_2224]) && ((safe_lshift_func_int8_t_s_s(0xFAL, g_1339[g_2224])) < g_115)) > (g_1540 = ((func_46(g_11, ((safe_div_func_int32_t_s_s((-5L), ((safe_lshift_func_uint16_t_u_s(l_1920, (l_1848[1] || g_60))) , g_1339[g_2224]))) & p_18)) , g_1819[1][0]) != p_18))), 0xF4B214ECL)) > g_156);
                        g_2449 = ((((((g_86[1] | (safe_div_func_uint16_t_u_u((func_97((l_1775[0] = (safe_lshift_func_uint8_t_u_s(func_88((l_2444 = 0x770CA6FFL), p_18), 4))), (l_2445 = (-2L)), l_2082, (l_2431[0][0][3] || p_19), (((safe_mod_func_uint8_t_u_u(p_19, l_1776)) == l_2021) & 0L)) ^ p_18), 8UL))) , p_18) <= p_18) & p_18) , 2L) != l_2448);
                        return l_2169;
                    }
                }
                for (l_2382 = 16; (l_2382 > (-24)); l_2382--)
                {
                    return l_2068;
                }
                for (l_1920 = 2; (l_1920 < 12); l_1920 = safe_add_func_uint32_t_u_u(l_1920, 3))
                {
                    g_211 = l_2454;
                    return p_18;
                }
            }
        }
        if (((safe_rshift_func_int16_t_s_s(l_1775[0], 2)) < (safe_add_func_uint8_t_u_u(l_2265, ((0UL || 0L) != (~(l_1768 && g_157[0])))))))
        {
            int l_2469 = 1L;
            char l_2470 = 3L;
            g_2471 = (~((l_2005 = func_52(((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((1L < ((p_18 = ((((l_2469 = (g_211 = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_18, ((l_1775[0] = ((safe_mod_func_uint16_t_u_u(func_97(p_19, ((0L < (((l_2329 <= (g_11 & (-8L))) < 0x1BL) , (((g_213 | g_1652) , p_19) != 0UL))) , g_708), l_1920, l_2469, g_2226), l_1848[1])) ^ l_1980)) ^ g_71[0]))), 1)) , p_19))) > p_18) || l_2470) > (-1L))) <= 0x49L)), p_19)), (-7L))) > 4L), l_2265)) | 0UL));
            g_211 = (safe_lshift_func_int16_t_s_s((l_2469 = p_18), l_1992[5][1][0]));
            g_211 = g_71[0];
            for (l_2021 = (-9); (l_2021 <= 9); l_2021 = safe_add_func_int8_t_s_s(l_2021, 7))
            {
                for (g_673 = 0; (g_673 > (-8)); g_673 = safe_sub_func_uint16_t_u_u(g_673, 9))
                {
                    unsigned l_2478 = 8UL;
                    l_2478 = p_18;
                }
                for (l_2329 = 14; (l_2329 <= 48); ++l_2329)
                {
                    return p_19;
                }
            }
        }
        else
        {
            const unsigned char l_2481 = 6UL;
            int l_2482 = (-1L);
            int l_2493 = (-9L);
            int l_2656 = 0xC6C04840L;
            short l_2743 = 0xA799L;
            l_2482 = l_2481;
            if (((p_18 & (0x57A2L > ((safe_sub_func_int8_t_s_s(l_1992[4][0][2], (safe_mod_func_int32_t_s_s((0UL == (g_1991[0][2] = (safe_div_func_uint8_t_u_u((l_1775[0] = (+(((((p_19 | (((safe_rshift_func_int8_t_s_u(l_2141, 2)) == (((l_2481 , ((l_2493 = (l_2482 = func_20(p_19, l_2454))) & l_1920)) >= (-6L)) != p_18)) && 0x22920E17L)) <= g_11) , l_1775[0]) > p_19) > 1L))), 246UL)))), l_2481)))) || l_1776))) ^ l_2331))
            {
                char l_2496 = 2L;
                int l_2497 = 0L;
                g_211 = (l_2497 = (safe_div_func_uint32_t_u_u(l_2496, g_2449)));
                return l_1992[3][1][1];
            }
            else
            {
                short l_2500 = 0x950BL;
                int l_2503 = 0x4D55E5D7L;
                int l_2504 = (-1L);
                int l_2543 = 0xAD46CB18L;
                for (l_2020 = 0; (l_2020 <= 1); l_2020 += 1)
                {
                    for (g_1746 = 1; (g_1746 >= 0); g_1746 -= 1)
                    {
                        int i, j;
                        l_2482 = g_1991[l_2020][(g_1746 + 5)];
                        l_1775[0] = (g_2505[0][2][3] = func_25((safe_lshift_func_uint8_t_u_s(((1L && l_2500) || p_19), ((l_1775[0] = g_128) , (safe_rshift_func_uint16_t_u_u(l_2503, 6))))), (g_1021 = (l_2500 > l_2005)), g_1652, (l_2504 , 4294967295UL), g_540[4]));
                    }
                }
                g_211 = (safe_sub_func_uint32_t_u_u(g_116, (safe_lshift_func_int16_t_s_s((0x7FL > (g_1312 , g_2202[0])), 10))));
                for (l_1980 = 6; (l_1980 != 53); l_1980++)
                {
                    l_2005 = (func_46(((safe_rshift_func_int16_t_s_s((+0xF341L), 9)) , (g_2224 , ((9UL | g_921) == (safe_unary_minus_func_uint16_t_u(((-8L) || ((0x67BCL ^ (g_540[1] > ((-1L) >= g_1193))) & p_19))))))), p_18) , g_1746);
                    for (g_2471 = 0; g_2471 < 3; g_2471 += 1)
                    {
                        l_1848[g_2471] = 1UL;
                    }
                    g_211 = (l_2503 < ((safe_div_func_int16_t_s_s(0x8F51L, l_1775[0])) , p_19));
                }
                for (g_167 = 0; (g_167 <= 2); g_167 += 1)
                {
                    int l_2523 = 0x2668BED7L;
                    unsigned l_2538 = 4294967295UL;
                    int l_2540 = 2L;
                    for (g_1374 = 0; (g_1374 <= 2); g_1374 += 1)
                    {
                        int i;
                        l_1775[0] = (safe_add_func_int16_t_s_s(((g_1746 = g_86[g_1374]) , ((((g_86[g_1374] | l_2204) < p_18) < (((safe_rshift_func_int16_t_s_s(g_86[g_1374], 12)) < (safe_rshift_func_int8_t_s_s((g_2505[0][2][3] | (l_2523 = g_2505[0][2][3])), 5))) , (((safe_add_func_uint32_t_u_u(g_921, (((0x5EC0L ^ g_71[0]) , 0x2D46E049L) , l_2141))) , l_2005) >= l_1775[0]))) >= l_2503)), 0x84C8L));
                    }
                    for (g_2449 = 1; (g_2449 >= 0); g_2449 -= 1)
                    {
                        int l_2533 = 0xE737F83AL;
                        char l_2539 = 0x7EL;
                        int i;
                        l_2503 = (l_2540 = ((func_97((0x6DD2L <= ((((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(g_545[g_2449])), (p_19 >= ((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_18, l_2523)), ((l_2533 = g_60) , (safe_sub_func_uint8_t_u_u((((-1L) ^ (l_2538 = (g_211 = p_19))) >= (((0x68L < p_19) , l_2523) < p_19)), 7L))))) , p_19)))) & g_1312) & 8UL) | g_673)), g_540[4], l_2539, g_1312, p_19) , g_211) <= 3UL));
                        l_2540 = (0xB8AAL <= (g_126 = (safe_sub_func_uint32_t_u_u(l_2482, l_2543))));
                    }
                }
            }
            if (((safe_div_func_int8_t_s_s((4294967295UL < ((g_1746 >= 0x0BL) < (((((g_211 >= ((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((l_2493 = ((l_2493 != l_2005) , (1UL <= g_927))), ((safe_sub_func_uint32_t_u_u(l_2233, 0xA04C9198L)) == p_19))) & 0x0081B1BDL), l_2265)) < p_18)) , 65529UL) < 0x6009L) && g_1476) , 4294967295UL))), g_708)) < 0x904EL))
            {
                short l_2552 = (-3L);
                int l_2565 = (-2L);
                int l_2566 = 0xF3068E96L;
                g_2557 = (l_2552 | (((safe_sub_func_uint8_t_u_u((l_2552 , l_2552), func_20((((safe_lshift_func_uint8_t_u_u((g_156 = ((l_2482 = (func_46(g_211, p_18) , l_2265)) == 0xF0L)), 6)) & p_19) , 1UL), p_18))) ^ g_11) < (-10L)));
                l_2005 = ((g_1991[1][4] == l_2558) && ((safe_rshift_func_int8_t_s_s(((p_18 >= l_2481) , (safe_add_func_int16_t_s_s((+p_18), ((l_2566 = (g_2505[0][2][3] , ((((l_2565 = ((8L || 1L) , (safe_rshift_func_int8_t_s_s((l_1775[0] = func_25((l_2493 = p_18), p_19, p_19, l_2481, g_1021)), l_2204)))) < g_2224) | p_18) < g_1551))) == g_545[1])))), 4)) ^ 0x6DDF2BF8L));
                for (g_115 = 0; (g_115 <= 3); g_115 += 1)
                {
                    int l_2568 = (-7L);
                    int i;
                    if (g_71[g_115])
                        break;
                    l_2568 = (~l_2567);
                    g_211 = 0xDE3C2763L;
                }
            }
            else
            {
                int l_2582 = 1L;
                int l_2597 = 0x67646447L;
                int l_2629[7];
                int l_2630[5][10][5] = {{{0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}}, {{0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}}, {{0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}}, {{0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}}, {{0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}, {0x198CAF0BL, 0L, 0x3DDF0671L, (-1L), 0x1570F373L}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_2629[i] = (-1L);
                for (p_19 = 24; (p_19 > 23); p_19--)
                {
                    unsigned l_2573 = 4294967295UL;
                    int l_2574 = 0L;
                    for (l_2329 = 0; (l_2329 < 20); l_2329 = safe_add_func_uint8_t_u_u(l_2329, 9))
                    {
                        char l_2577 = (-4L);
                        l_2577 = func_97(g_770, ((l_2573 == 0x5889L) != (p_18 || g_1991[0][2])), l_2574, ((g_2226 <= (l_2493 = (safe_lshift_func_uint16_t_u_u(g_673, 14)))) > 255UL), p_19);
                        if (l_2493)
                            continue;
                    }
                    for (l_2382 = 0; (l_2382 >= (-28)); --l_2382)
                    {
                        g_211 = g_2557;
                        l_2005 = 1L;
                    }
                    for (g_128 = 11; (g_128 <= 4); g_128 = safe_sub_func_int32_t_s_s(g_128, 6))
                    {
                        unsigned l_2595 = 0x9DB22C2EL;
                        int l_2596 = 3L;
                        l_2582 = p_19;
                        l_2597 = func_46((g_1649 , (g_1819[1][0] = (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((l_2482 >= (safe_mod_func_uint32_t_u_u(((+(l_2574 = 0xC1B281A3L)) || (+g_770)), 0xF4B59461L))) ^ ((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((g_2449 = (((l_2595 = ((4L || (0x87L < 0x56L)) == (((((safe_lshift_func_int16_t_s_u(((l_2558 = (func_46(((p_18 = (((((((g_673 <= l_2573) , p_19) <= (-1L)) > l_2454) | g_540[1]) | p_19) > l_2582)) > p_19), g_156) || 0xFBL)) , 0xC100L), 2)) && p_19) & g_1193) < g_1649) & l_2233))) >= p_19) | p_19)), g_581[3])), 6)) & p_19)) & p_19), g_1312)), l_2596)))), l_2567);
                        l_2574 = 0xB8A42C30L;
                        l_2574 = p_19;
                    }
                }
                g_211 = (((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((p_18 >= (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_97(g_708, l_2481, p_19, l_2597, (safe_add_func_int8_t_s_s((l_2482 = (0x6EL == (l_2493 = (safe_lshift_func_int16_t_s_s(func_97(g_115, (~(safe_add_func_int8_t_s_s(func_46((g_1819[1][1] = 4294967295UL), (((safe_mod_func_int16_t_s_s(l_1992[1][1][0], 0xB463L)) & p_18) | g_540[1])), g_540[1]))), l_2597, g_2471, p_19), 4))))), l_2481))), l_2597)), 0xD65CC433L))), 11)) , 0UL) > g_180), g_1476)) < l_2582) <= 0x3CL);
                for (l_2597 = (-5); (l_2597 >= (-1)); ++l_2597)
                {
                    char l_2635[10] = {2L, 2L, 0L, 2L, 2L, 0L, 2L, 2L, 0L, 2L};
                    int l_2652[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2652[i] = 0x85F402BEL;
                    g_211 = (l_2493 , ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s(l_2493, 14)))) | ((g_157[3] = p_18) ^ l_1992[5][1][1])));
                    if ((safe_add_func_uint16_t_u_u(l_2481, g_540[1])))
                    {
                        unsigned l_2621 = 0x9599843EL;
                        int l_2625 = 0x58109A2CL;
                        l_2621 = p_18;
                        g_211 = (!(safe_unary_minus_func_int8_t_s(p_19)));
                        l_2630[0][6][1] = (((p_18 ^ ((g_128 = p_19) > (safe_sub_func_uint8_t_u_u(((g_770 , (l_2625 = g_1551)) != (p_18 ^ l_2481)), (safe_unary_minus_func_uint8_t_u((((safe_sub_func_uint8_t_u_u(func_97(((g_581[3] || (1L == 0xA3FBL)) , l_2629[2]), g_71[0], g_2202[0], g_1021, g_126), 0x4FL)) < 0xDFE1L) | p_18))))))) <= 65526UL) ^ g_179);
                    }
                    else
                    {
                        g_211 = 0xEC12FE14L;
                        g_211 = g_1374;
                    }
                    if ((l_2582 == (p_18 > g_2631[0][1][0])))
                    {
                        unsigned l_2632 = 0xAF701E4BL;
                        l_2632 = g_1746;
                    }
                    else
                    {
                        unsigned l_2643 = 2UL;
                        l_2005 = (g_2631[0][1][9] = func_52(((((((l_2635[7] = (safe_sub_func_uint8_t_u_u(p_19, p_18))) , (g_86[2] = ((func_37((safe_mod_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(func_88((safe_div_func_uint32_t_u_u(4294967287UL, p_18)), ((func_88(l_2642, (func_88(l_2643, (((g_123 = (p_19 = (l_2482 = ((p_19 && g_673) , (g_155 = p_19))))) ^ g_157[2]) , p_19)) , g_1540)) < l_2005) , l_2629[2])), p_18)) , 0xED9AL) || p_18), l_1992[4][1][2])), l_2635[3], g_2095[7]) || 0x0B95AE64L) <= p_18))) >= 0x38L) != p_18) != p_18) < p_18), p_18));
                    }
                    l_2493 = (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((func_52(p_18, (~(((p_19 != (l_2629[6] | ((p_18 > ((!(0L < (((safe_add_func_uint16_t_u_u((g_545[1] <= p_19), 0x7867L)) == (((safe_sub_func_int8_t_s_s((func_37(p_19, l_2582, p_19) ^ 0x9EBEF9F3L), l_2454)) <= 4294967295UL) && g_213)) , l_2652[1]))) > p_18)) || 0xD2L))) <= g_1746) && 0x0525L))) > 0xB7A2L), l_2482)), p_19));
                }
                l_1775[0] = 0x3A21B78CL;
            }
            if ((l_2482 = ((func_97(l_2493, g_213, l_2653, l_2382, l_2082) >= (l_2656 & ((safe_rshift_func_int8_t_s_u(l_1775[0], 4)) != ((g_1021 = g_1991[0][2]) == l_1980)))) , l_1980)))
            {
                int l_2696 = 0x3286B001L;
                const int l_2706 = 0xE825D0D3L;
                int l_2707 = 0x8113439BL;
                unsigned l_2724 = 0x1A10FB8DL;
                int l_2750 = (-10L);
                if ((l_2005 = (g_2631[0][0][3] = 0xA50EB6BAL)))
                {
                    for (g_2449 = 26; (g_2449 == 3); g_2449--)
                    {
                        g_2631[0][1][0] = (g_1819[2][0] , ((-1L) & g_1540));
                        l_1775[0] = g_2202[0];
                    }
                    l_2493 = (((safe_rshift_func_uint8_t_u_s((((p_18 , (safe_mod_func_uint32_t_u_u(0x9EFCF395L, g_2310))) , p_19) || 0x51L), 4)) >= (safe_lshift_func_int8_t_s_s(((g_1819[1][0] && p_18) < func_20((5UL || (p_19 >= l_2020)), g_116)), l_2669[8]))) < p_18);
                }
                else
                {
                    unsigned char l_2670 = 255UL;
                    l_2670 = g_1819[1][0];
                    l_2558 = func_46((safe_lshift_func_uint8_t_u_u(p_18, 1)), g_1649);
                    g_2631[0][1][8] = l_2673;
                    for (g_2226 = 20; (g_2226 >= 6); g_2226 = safe_sub_func_int8_t_s_s(g_2226, 6))
                    {
                        char l_2693 = 0L;
                        l_2693 = (g_211 = (safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_2682[0], 15)) || g_2449), (safe_lshift_func_uint16_t_u_u(1UL, 13)))) | g_2226), (safe_add_func_int16_t_s_s((((g_123 = (g_2505[0][0][3] & (safe_div_func_int8_t_s_s(((((p_19 = (((safe_div_func_uint16_t_u_u((4294967291UL & (safe_lshift_func_int16_t_s_u(l_2653, 15))), l_2493)) ^ g_180) > 0x4E0D3BD2L)) ^ p_18) < g_2202[0]) ^ 0x746A6ECCL), 0x26L)))) || 0x13218558L) , g_1312), g_86[0])))));
                    }
                }
                l_2005 = ((g_545[0] , (safe_lshift_func_int8_t_s_u((p_19 ^ ((g_2631[0][0][3] , (l_2696 = (g_673 >= l_2567))) | (safe_mod_func_uint32_t_u_u(l_1775[0], func_97((((l_2707 = (safe_lshift_func_int16_t_s_u(((l_2705 = ((safe_add_func_uint32_t_u_u(((-10L) >= (~1L)), ((((safe_sub_func_uint8_t_u_u((((l_2656 , 9UL) == g_1551) < 1L), 255UL)) == g_540[2]) > 0x15FBE5B5L) == 0xA1CDL))) | g_213)) & g_2224), l_2706))) < g_2202[0]) || 65532UL), p_18, p_18, g_2202[0], l_2493))))), p_19))) , 9L);
                l_2726[0] = (safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((func_52((l_2567 = (g_180 = (g_1021 = p_19))), (g_179 != 0x02L)) != (l_2725 = (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((l_2005 = (l_2696 | ((!((g_2682[0] = p_19) > ((((safe_div_func_uint32_t_u_u(func_46((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((func_46(((l_2493 = g_2471) && (safe_mod_func_int8_t_s_s(((l_2020 == l_2493) & l_2696), l_2493))), l_2233) == 0x21L), 0xB6B7L)) && l_2724), 5)), l_2656), g_2557)) || 1L) >= 0x1296L) & 0UL))) != p_18))) == (-1L)), 0UL)) != 1L), l_2482)))), 8UL)) , g_2202[0]), l_2656));
                g_2631[0][1][2] = ((((func_46((safe_sub_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((0xA3L & (safe_mod_func_uint8_t_u_u(func_46(((g_2682[0] = ((safe_add_func_uint32_t_u_u((l_1775[0] = ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((g_1551 || p_19), l_2743)) && ((g_1476 < ((((p_18 = (l_2725 = (safe_lshift_func_int16_t_s_u((-8L), (l_2750 = func_52(((((safe_sub_func_uint8_t_u_u(0xACL, (safe_div_func_uint16_t_u_u((7L == (((l_2707 = ((p_18 == 0x177FL) < 0x1F08L)) > p_19) <= g_1819[1][1])), g_2202[0])))) , 0xB8F9AD1EL) || p_19) != l_2726[0]), l_1776)))))) , l_2750) == 0xAF5B9146L) >= p_19)) , p_19)), g_2095[6])) , p_19), l_1768)) , p_18)), l_2482)) , l_2724)) , p_19), p_19), p_19))) | 1UL) ^ 0x43468661L), p_19)) , p_18), 0x21L)) , l_2331) == l_2141) , g_1652), 0xF268L)), l_2481) > l_2751[2]) != 65535UL) && (-9L)) || p_19);
            }
            else
            {
                unsigned short l_2760 = 0x1019L;
                int l_2777 = 0L;
                l_2726[0] = p_19;
                l_2005 = (g_2631[0][1][0] = 0L);
                g_2631[0][1][0] = (safe_add_func_uint16_t_u_u((l_2726[0] = ((safe_rshift_func_uint8_t_u_s((!(safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((((l_2760 || (safe_rshift_func_uint16_t_u_s((8L | (l_2705 , (((safe_mod_func_uint16_t_u_u(4UL, func_88((safe_lshift_func_int16_t_s_u(((g_1021 < (safe_lshift_func_uint16_t_u_u((func_97(((safe_rshift_func_int8_t_s_s(l_2493, 7)) || ((safe_mod_func_uint32_t_u_u(g_1991[1][1], (safe_lshift_func_uint16_t_u_s(((((safe_div_func_uint32_t_u_u((((l_1992[1][1][2] , 0xC2A9L) , l_2021) || 0xB86692AAL), g_211)) < 8UL) || p_18) > 0x0EC6L), 10)))) , g_1819[1][0])), p_19, l_2481, g_1819[1][0], l_2656) || 0x11L), 3))) ^ 0xCD55F75CL), g_1540)), g_1312))) <= l_2777) <= 1UL))), 1))) , 0x7FE557E6L) > g_581[8]), 2)), 4))), 0)) , 0x6D1AL)), g_545[0]));
                for (g_116 = 0; (g_116 <= 3); g_116++)
                {
                    char l_2792 = 0x62L;
                    l_2567 = ((l_2642 | (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(0x2D125292L, ((p_18 ^ (safe_sub_func_int8_t_s_s((func_46((0UL <= ((safe_lshift_func_uint16_t_u_s(1UL, (safe_lshift_func_int16_t_s_u(p_18, 11)))) == 8UL)), (((!((l_2792 = ((g_1374 <= (p_19 = 0UL)) < l_1992[3][1][1])) , l_2792)) != l_2793) , p_19)) && g_11), 0x0BL))) ^ l_2726[0]))) , 0xFC68L) <= 0x3B8FL), p_18)), 0x7B00L))) && 5UL);
                }
            }
        }
    }
    else
    {
        short l_2798[2][1][9] = {{{1L, (-7L), (-1L), 0xD696L, 0xD696L, (-1L), (-7L), 1L, (-1L)}}, {{1L, (-7L), (-1L), 0xD696L, 0xD696L, (-1L), (-7L), 1L, (-1L)}}};
        int l_2805 = 0xE83F6A43L;
        int l_2809 = 0x6011ED2FL;
        int l_2810 = (-8L);
        char l_2812 = 0x2DL;
        int i, j, k;
        g_2631[0][0][6] = g_2505[0][2][3];
        g_2631[0][1][0] = (l_2567 = ((l_2812 = ((l_1775[0] = (safe_rshift_func_uint16_t_u_u((l_2558 = (+((safe_rshift_func_uint16_t_u_u(((g_2505[0][2][3] < func_52(l_2798[1][0][8], (safe_sub_func_uint32_t_u_u(((l_1775[0] = (((func_88((((func_20(func_25((safe_rshift_func_uint16_t_u_u((func_52(g_1312, g_126) >= ((safe_div_func_int8_t_s_s((l_2805 = p_18), g_2806)) , (((safe_mod_func_uint8_t_u_u(func_46(((((l_2382 > func_46(func_46(((p_19 , g_1746) , l_2805), g_2631[0][1][0]), g_1991[0][5])) < l_1776) == l_2233) > l_2809), g_11), g_2224)) ^ l_1848[1]) && 0L))), g_927)), p_18, p_18, g_1551, g_1312), l_2810) & g_2631[0][0][2]) >= l_2809) < g_2505[0][0][3]), l_2809) < (-4L)) , l_2810) , l_2811[2][1])) < 0x36A6L), 0x829F08BAL)))) <= g_1339[2]), p_19)) & p_18))), l_1848[1]))) ^ p_18)) | p_18));
    }
    return p_18;
}







static int func_20(unsigned p_21, short p_22)
{
    unsigned char l_1507 = 0xC4L;
    char l_1514 = 1L;
    int l_1527 = 0x5D8C1859L;
    int l_1528 = 0xE55C8A44L;
    unsigned short l_1565 = 0UL;
    short l_1571[10][8][3] = {{{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}, {{0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}, {0x04F9L, (-8L), 0L}}};
    unsigned l_1598 = 4294967294UL;
    char l_1602[9] = {0L, 0x66L, 0L, 0x66L, 0L, 0x66L, 0L, 0x66L, 0L};
    unsigned short l_1670 = 65530UL;
    int l_1672[4];
    int l_1689 = 0x47CB22D6L;
    unsigned short l_1712 = 0x5BECL;
    unsigned l_1725 = 4294967288UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1672[i] = 5L;
    if ((safe_rshift_func_int8_t_s_u((9L > (g_1021 = (((0L ^ 65532UL) , ((safe_add_func_uint8_t_u_u(l_1507, p_21)) , (safe_sub_func_int16_t_s_s((g_165 = (l_1507 <= (((((g_60 = (g_400 >= (safe_mod_func_int16_t_s_s(((((l_1507 <= (p_21 , 0xE340L)) > l_1514) >= g_540[1]) || (-1L)), l_1514)))) ^ p_22) && l_1507) || (-7L)) > g_770))), p_22)))) == p_22))), 0)))
    {
        unsigned l_1521 = 4294967286UL;
        int l_1526 = (-2L);
        l_1528 = ((safe_mod_func_uint8_t_u_u(func_52((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(func_37(p_22, p_21, p_21), ((l_1521 == (((1UL ^ (l_1527 = (l_1526 = (((func_46(p_22, (safe_rshift_func_int8_t_s_u(((0xA02F7C7FL < (safe_sub_func_int32_t_s_s(((-1L) >= 1UL), p_22))) | g_927), g_545[0]))) & g_545[1]) , 0x2AL) & 0L)))) & l_1521) <= l_1521)) ^ p_22))) < p_22), 3)), p_21), p_22)) || 0L);
    }
    else
    {
        unsigned l_1532 = 3UL;
        int l_1537 = (-1L);
        char l_1538 = 0x98L;
        unsigned l_1539 = 0x1C921C54L;
        int l_1568 = 1L;
        short l_1613 = 0x2E89L;
        unsigned l_1743[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1743[i][j] = 4294967295UL;
        }
        g_1540 = (func_25(g_540[1], g_1193, (((safe_add_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(0xB5L)) > (l_1532 = (g_1401 || g_1193))), (safe_div_func_uint16_t_u_u(func_46((safe_mod_func_int32_t_s_s((l_1537 = (g_70 > func_46(g_71[2], (l_1537 , l_1538)))), l_1539)), g_156), 0x1CEAL)))) & l_1539) , l_1532), l_1538, l_1528) , l_1532);
        if ((+(((l_1528 = (safe_rshift_func_int16_t_s_u(func_88(g_11, (g_167 || (safe_mod_func_uint8_t_u_u(l_1527, l_1539)))), l_1539))) , (safe_lshift_func_int16_t_s_u((!(p_22 = func_46((func_37((g_86[1] = func_25((g_115 = (!(+l_1538))), g_168, p_21, l_1537, g_128)), l_1537, p_22) != g_581[3]), g_11))), g_545[0]))) , (-10L))))
        {
            char l_1567[7];
            int l_1569 = 0x93E8BDB2L;
            char l_1599[8] = {1L, 0xC0L, 1L, 0xC0L, 1L, 0xC0L, 1L, 0xC0L};
            char l_1632 = 0xD8L;
            int l_1633 = 0L;
            int l_1651 = 0xE2DC74ABL;
            int i;
            for (i = 0; i < 7; i++)
                l_1567[i] = 0L;
            if ((safe_mul_func_uint32_t_u_u((p_21 && g_116), (g_708 <= func_46(func_46(g_213, g_168), ((((p_22 = (l_1527 = (g_1551 = (safe_sub_func_uint32_t_u_u(func_46(p_21, g_167), p_22))))) > l_1539) >= g_1312) , l_1527))))))
            {
                int l_1566 = 0L;
                int l_1570 = 0x593BBB82L;
                l_1571[6][2][0] = func_88(((((l_1570 = (((g_168 = 0xE0A4DC4FL) , func_52(((g_179 <= ((safe_add_func_int32_t_s_s(((safe_div_func_int32_t_s_s((l_1569 = (l_1568 = (l_1537 = (((safe_lshift_func_uint16_t_u_u(0x0712L, g_708)) | (safe_lshift_func_uint16_t_u_u((g_86[0] & p_21), 6))) < (safe_unary_minus_func_uint32_t_u((safe_div_func_uint32_t_u_u(((g_115 = (((((((p_21 , l_1565) | (0xEC630105L != (-10L))) , l_1566) | l_1567[2]) , p_22) , 65528UL) && 0x9C0FL)) | (-2L)), 0x37A3413EL)))))))), p_22)) ^ p_21), (-1L))) > p_21)) ^ 0L), l_1566)) > l_1566)) == p_22) != l_1566) , (-1L)), l_1566);
                l_1569 = ((p_21 , (-1L)) && (safe_sub_func_int32_t_s_s((-1L), ((g_965 = (safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s(2L, g_179)), p_21)) || 0L), l_1571[6][2][0]))) ^ l_1527))));
                for (l_1537 = 3; (l_1537 >= 0); l_1537 -= 1)
                {
                    unsigned l_1584 = 0xC9DC3244L;
                    int l_1587[8] = {(-5L), (-5L), (-1L), (-5L), (-5L), (-1L), (-5L), (-5L)};
                    int i;
                    l_1587[2] = (safe_lshift_func_uint8_t_u_u(func_52((safe_rshift_func_int8_t_s_s(l_1584, p_21)), (safe_div_func_uint16_t_u_u(g_581[3], g_770))), 3));
                    g_211 = (safe_div_func_uint16_t_u_u((((~g_1551) > (safe_mod_func_uint8_t_u_u((g_965 >= (l_1599[5] = (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(g_540[1], 5)), 1)) , 0x26DA9401L) == ((safe_div_func_int8_t_s_s((((p_22 < ((((((l_1528 = func_97(g_116, (l_1569 = g_70), p_21, p_21, p_22)) , l_1532) && l_1598) & 251UL) != l_1598) > 0L)) || p_21) , p_22), l_1587[3])) | g_213)))), 0x3FL))) && 0x1AB3L), p_21));
                    l_1569 = (safe_rshift_func_uint16_t_u_s((g_156 <= (l_1568 = (func_97(p_21, func_46(((g_540[1] = g_1312) | l_1539), l_1602[8]), (safe_mod_func_int8_t_s_s(func_46(g_581[3], func_46((p_22 | (((safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(p_22, p_21)) <= g_156), l_1528)), 0x2343L)) , p_22), g_60)) < 255UL) && 0UL)), g_1312)), p_21)), g_123, l_1613) >= 5UL))), l_1537));
                }
                l_1527 = ((safe_div_func_int16_t_s_s(0x7028L, (l_1570 = p_22))) , p_21);
            }
            else
            {
                char l_1634 = 0xD7L;
                unsigned char l_1639 = 0x6CL;
                int l_1640 = 0L;
                g_211 = g_157[2];
                l_1527 = (l_1568 = (l_1528 = ((l_1634 = func_52((func_97(g_965, (l_1633 = (l_1569 = (safe_lshift_func_uint16_t_u_s(func_52((g_179 = (safe_rshift_func_uint8_t_u_u(((p_22 = g_71[0]) | (safe_lshift_func_uint8_t_u_u(l_1571[7][5][2], 2))), (255UL <= l_1567[0])))), ((((((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(l_1538, ((g_400 = (safe_mod_func_int16_t_s_s((func_46(g_673, (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_167 < (func_97(l_1565, p_21, l_1568, g_540[1], l_1632) >= 0xDE772DEEL)), g_60)), 0x5AL))) <= g_11), p_21))) , g_770))) <= 1L), 12)) == 0x73C67753L) || 255UL) == g_71[0]) != l_1568) || 255UL) && 65533UL) || 0L)), p_21)))), g_1312, g_11, l_1602[8]) != 0xA4L), g_965)) && 0x3068L)));
                l_1640 = func_46(((((l_1639 = (((func_88(func_52(p_22, l_1634), g_1374) , g_927) , func_37((0x1C61L != g_927), ((((safe_div_func_uint16_t_u_u((~(safe_rshift_func_int8_t_s_u(0L, g_1551))), (-10L))) && l_1571[6][2][0]) != 0xBE7EL) && p_21), g_156)) || 0xD725682DL)) ^ p_21) | 0xF443C01BL) || p_22), g_1193);
            }
            for (g_921 = 7; (g_921 >= 0); g_921 -= 1)
            {
                short l_1645 = 0L;
                int l_1663 = 0L;
                int l_1673 = 0x0319C8F8L;
                int l_1691[1][10] = {{0x9754DA7AL, 0xE58E3575L, 1L, 1L, 0xE58E3575L, 0x9754DA7AL, 0xE58E3575L, 1L, 1L, 0xE58E3575L}};
                int i, j;
                for (l_1613 = 0; (l_1613 <= 1); l_1613 += 1)
                {
                    const int l_1688 = 1L;
                    int l_1690[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1690[i] = 1L;
                    if (g_1339[l_1613])
                    {
                        char l_1650 = 0x05L;
                        int l_1664[5][4][4] = {{{(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}}, {{(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}}, {{(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}}, {{(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}}, {{(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}, {(-1L), 6L, 0xA439BA94L, 1L}}};
                        int i, j, k;
                        g_1652 = (safe_add_func_uint16_t_u_u(p_22, (+((g_1339[l_1613] && 0x0EE054E9L) && ((l_1527 = (safe_lshift_func_uint16_t_u_u((((g_211 = (l_1507 < l_1645)) <= p_21) && 0x8DC330A7L), func_97((((l_1568 = (((safe_unary_minus_func_int32_t_s(p_21)) >= (safe_sub_func_uint16_t_u_u(((g_1649 = p_22) && g_1540), 65535UL))) <= l_1613)) , 0UL) || 1UL), l_1645, l_1650, g_213, g_128)))) > l_1651)))));
                        g_211 = g_770;
                        if (p_21)
                            continue;
                        l_1664[2][2][2] = ((4L > (((l_1599[g_921] = g_1551) | func_46(((l_1568 = (safe_mod_func_int8_t_s_s((g_1540 = (func_97(((p_21 , (func_46((((l_1651 = g_545[0]) & l_1645) > p_21), ((l_1663 = func_46((((safe_rshift_func_uint8_t_u_s(func_46((func_46((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(0x9DL, 255UL)) != p_21), p_22)) < g_1401), g_115)), g_581[3]) & 0xEFL), g_1339[l_1613]), g_86[1])) > p_22) > 0x5691L), g_115)) && p_22)) >= p_22)) , 0x0C46L), p_21, g_167, g_115, g_1339[l_1613]) ^ p_22)), l_1645))) >= l_1645), g_545[1])) != g_128)) && g_965);
                    }
                    else
                    {
                        unsigned char l_1669 = 0xDCL;
                        g_211 = g_157[2];
                        g_211 = (safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_1540 = (l_1663 = l_1613)), p_22)), (((l_1528 = (+0xE7E3L)) || l_1669) && l_1539)));
                    }
                    l_1663 = l_1670;
                    for (g_1021 = 0; (g_1021 <= 3); g_1021 += 1)
                    {
                        int i;
                        l_1527 = g_1339[g_1021];
                        return g_157[g_1021];
                    }
                    if (p_21)
                    {
                        unsigned l_1671 = 0UL;
                        l_1672[1] = (l_1671 && (~l_1663));
                        if (l_1673)
                            break;
                        l_1691[0][5] = (safe_rshift_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u((g_60 = (((safe_mod_func_int32_t_s_s(func_97(((p_22 = func_46(p_22, (g_708 = (safe_mul_func_uint8_t_u_u(g_1339[0], (g_965 = ((safe_div_func_int8_t_s_s((l_1663 = (safe_div_func_int8_t_s_s(3L, p_22))), (p_22 | (l_1569 = func_97(g_1652, (p_22 <= g_1025), ((((l_1651 = (safe_rshift_func_int16_t_s_u(((func_97(((((0L <= p_22) | l_1688) && 1UL) > g_1193), l_1673, l_1567[1], l_1571[9][5][1], l_1599[3]) & l_1689) | p_21), 4))) == p_22) , g_1193) >= g_927), p_21, p_21))))) != p_21))))))) , 65530UL), p_21, l_1567[4], l_1672[1], l_1645), l_1671)) || g_179) > l_1690[1])), g_545[1])) , l_1673) && p_22), p_21));
                    }
                    else
                    {
                        g_211 = g_167;
                        if (g_1401)
                            continue;
                    }
                }
                for (g_180 = 2; (g_180 <= 7); g_180 += 1)
                {
                    return g_1540;
                }
            }
            for (g_1401 = 3; (g_1401 >= 0); g_1401 -= 1)
            {
                int l_1713 = (-8L);
                int i;
                g_211 = l_1602[(g_1401 + 3)];
                for (l_1651 = 3; (l_1651 >= 0); l_1651 -= 1)
                {
                    int l_1724 = 0x2F32F60AL;
                    int l_1738 = 0x4F7EC0E4L;
                    int i;
                    l_1713 = (safe_rshift_func_uint8_t_u_s(((g_71[g_1401] > (safe_add_func_int8_t_s_s(func_46(g_168, (l_1514 && (g_211 = g_400))), (safe_sub_func_uint32_t_u_u(((((g_1649 != (g_213 == (safe_lshift_func_uint8_t_u_u(((~((((safe_add_func_uint32_t_u_u((func_97((safe_mod_func_int16_t_s_s((g_540[0] = ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((func_97(((g_1652 = (safe_add_func_uint8_t_u_u((g_86[2] <= (p_21 >= g_71[g_1401])), (-1L)))) <= 0UL), p_22, g_545[0], l_1602[(g_1401 + 3)], g_180) == 0x9CEB6F28L), 1)) , l_1602[(g_1401 + 3)]), p_21)), 6)) > g_213)), p_22)), g_86[1], g_179, p_22, g_71[g_1401]) , 0UL), p_22)) != 4294967292UL) | g_157[2]) , l_1602[8])) == g_1476), 4)))) , l_1712) ^ g_545[0]) > 0x86ED9C2AL), p_21))))) ^ g_1193), l_1568));
                    if ((p_21 || ((l_1602[(g_1401 + 3)] , 248UL) , (safe_div_func_uint8_t_u_u((l_1713 = (l_1537 & l_1571[2][7][0])), g_11)))))
                    {
                        l_1713 = (((safe_rshift_func_uint16_t_u_u((((g_770 || ((((!(g_165 != func_46(g_157[1], (+(safe_add_func_uint16_t_u_u(func_97(((g_213 & 0L) == (l_1724 = (g_86[1] = (g_165 , (((7UL || ((((safe_rshift_func_uint16_t_u_s(0x9AB0L, 5)) | (((-1L) <= l_1602[(g_1401 + 3)]) , g_70)) && 8UL) & g_180)) && 1UL) == l_1713))))), g_156, l_1725, l_1651, p_22), p_21)))))) > l_1713) , 0xC33BA656L) , p_21)) && p_22) & g_71[g_1401]), g_157[2])) , g_71[g_1401]) || 0x0C1FL);
                        l_1713 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((func_52((g_255 > ((l_1613 | (((g_1021 ^ (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((l_1567[2] , (func_46((l_1724 , l_1724), (g_60 = (l_1633 = 0xDFD77A30L))) == (safe_rshift_func_uint8_t_u_u((l_1738 = (l_1568 = l_1713)), 2)))), 9L)) , 0x18B4A658L), 0xA6D95125L)), g_927))) < 2L) ^ 0x4AL)) ^ g_1374)), l_1599[5]) , 5L), l_1632)), 5));
                        l_1527 = g_157[2];
                        g_1746 = (safe_div_func_int16_t_s_s(((g_540[1] | g_167) , func_37((safe_sub_func_uint32_t_u_u(l_1743[0][2], (((func_88(((((safe_rshift_func_int16_t_s_s((l_1713 == ((g_540[1] < l_1599[5]) | p_22)), 4)) & l_1569) <= ((p_22 < g_157[2]) , g_157[0])) <= 1L), p_22) ^ p_22) || 4294967288UL) || 65531UL))), l_1602[(g_1401 + 3)], g_581[3])), l_1713));
                    }
                    else
                    {
                        short l_1751 = (-9L);
                        g_211 = (0UL != (safe_rshift_func_int8_t_s_u(1L, (l_1713 = (safe_sub_func_uint32_t_u_u(1UL, (((((l_1569 = g_180) && p_21) , ((((l_1751 , ((safe_add_func_int32_t_s_s(g_157[2], (l_1568 = (7L > 1L)))) < p_21)) <= (-1L)) , g_1312) < (-2L))) ^ g_156) == g_60)))))));
                    }
                    for (g_1312 = 0; (g_1312 <= 3); g_1312 += 1)
                    {
                        unsigned l_1754 = 0x04CBBDA4L;
                        int l_1764 = 3L;
                        l_1569 = (l_1568 >= ((l_1633 = ((~(l_1764 = func_37(func_37((l_1743[0][2] >= l_1754), (safe_mod_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(func_88(p_21, (g_400 = p_21)), (l_1713 = ((safe_rshift_func_uint8_t_u_s(((l_1738 = (safe_rshift_func_int16_t_s_u(p_22, ((safe_unary_minus_func_uint16_t_u(p_21)) && l_1670)))) <= l_1539), g_71[g_1401])) & g_965)))) & 9UL) | 65534UL), p_22)), l_1602[(g_1401 + 3)]), g_545[1], l_1754))) , 1UL)) > g_1551));
                        if (g_965)
                            continue;
                    }
                }
            }
        }
        else
        {
            char l_1767[7][8][4] = {{{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}, {{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}, {{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}, {{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}, {{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}, {{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}, {{0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}, {0x64L, 0xDFL, 3L, 0L}}};
            int i, j, k;
            l_1767[6][7][0] = (safe_sub_func_int32_t_s_s(p_22, (!(p_22 , 0x6BA84A59L))));
        }
    }
    return l_1527;
}







static unsigned char func_25(unsigned char p_26, unsigned short p_27, const char p_28, unsigned p_29, unsigned short p_30)
{
    char l_1089[9] = {0xE4L, 1L, 0xE4L, 1L, 0xE4L, 1L, 0xE4L, 1L, 0xE4L};
    int l_1111 = 0x362E87DBL;
    unsigned char l_1112 = 0x02L;
    int l_1113 = (-3L);
    int l_1125 = 1L;
    short l_1247 = 0x834EL;
    short l_1283 = (-1L);
    int l_1297 = 0x46FE1ECDL;
    int l_1311 = 0L;
    unsigned l_1500 = 4UL;
    int i;
    l_1089[7] = (!g_155);
    l_1113 = ((safe_lshift_func_int8_t_s_u((func_88(g_165, ((l_1089[1] ^ 0xF6L) > ((safe_lshift_func_int16_t_s_u((-10L), 11)) , ((((safe_lshift_func_int8_t_s_s(((((func_97((safe_add_func_int32_t_s_s((((l_1111 = (safe_sub_func_int8_t_s_s(((g_927 > (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0xA91668C3L, (safe_lshift_func_uint16_t_u_s(((p_26 = ((func_97(p_29, (safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u((func_97((((safe_div_func_int32_t_s_s(((p_29 > ((+((l_1089[7] < p_28) != 0x70C9L)) , l_1089[6])) , p_26), 0xAADD019EL)) & g_400) | g_180), g_123, p_29, g_545[0], g_1025) >= 1L), l_1089[6])))), g_71[0], g_211, g_540[1]) && 1L) != 0L)) && 0x78L), 8)))), p_27))) <= 65535UL), l_1089[7]))) < (-10L)) && 0x8DL), g_167)), g_86[2], g_11, p_28, g_581[3]) != p_30) && p_28) && 0xFED702F2L) , 1L), 7)) , l_1112) == l_1089[7]) , l_1113)))) , l_1112), 7)) , g_540[1]);
    for (p_29 = 0; (p_29 <= 3); p_29 += 1)
    {
        char l_1116 = 0L;
        int l_1117 = 0x7672B564L;
        short l_1124[6] = {0x9D65L, 0x9D65L, (-1L), 0x9D65L, 0x9D65L, (-1L)};
        int l_1187 = 0x2E7575CAL;
        short l_1274 = 0x164EL;
        int l_1304 = (-1L);
        unsigned l_1338 = 0x3D4AB48DL;
        unsigned char l_1362 = 255UL;
        unsigned char l_1389 = 5UL;
        unsigned l_1420 = 0x20865480L;
        char l_1430 = 0xEDL;
        unsigned short l_1434 = 0xD95BL;
        int i;
        if (((l_1111 = ((l_1116 = p_27) >= ((g_157[p_29] = (l_1089[7] > ((l_1117 & g_540[1]) & ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((((0L > g_965) || (l_1111 < func_46((((g_71[0] ^ (((l_1117 && g_540[1]) , 1L) == 0xD5C82803L)) & l_1124[3]) , 1UL), l_1125))) != p_28), g_168)), g_400)), 3)) == l_1117)))) != 0xB1AD7EFEL))) ^ l_1113))
        {
            int l_1136[2][10][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
            unsigned l_1141 = 4294967295UL;
            int l_1282[3];
            char l_1284 = 0xC0L;
            int l_1361 = 0x10B9123CL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1282[i] = 0xD23F0647L;
            if ((p_29 , (l_1117 = p_26)))
            {
                unsigned char l_1135 = 0x6CL;
                int l_1140 = (-1L);
                if (p_27)
                {
                    unsigned l_1126[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1126[i] = 1UL;
                    l_1126[0] = p_27;
                    for (p_26 = 0; (p_26 <= 3); p_26 += 1)
                    {
                        int l_1139 = 0xAA4B1E2BL;
                        l_1136[1][8][0] = (((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(p_26, ((g_86[2] != ((g_1021 = l_1126[0]) | ((((((g_581[3] , g_581[6]) , l_1089[7]) && (l_1111 = func_46(p_28, p_30))) ^ p_27) , g_770) != p_29))) , 3L))) == g_11) <= 0x070CF0BCL), 0x9BL)) , 1L) && l_1111) | 0x10L), l_1135)), l_1126[0])) & g_165) < l_1126[0]);
                        l_1140 = (l_1126[0] || ((((((safe_add_func_int16_t_s_s(func_52(p_29, func_97((l_1117 = (!l_1135)), g_965, (!1UL), ((l_1124[3] >= (((l_1112 <= (((p_26 | (p_28 & 255UL)) >= g_545[0]) , l_1112)) <= 0L) & g_1025)) , g_11), l_1139)), g_545[0])) ^ p_26) && 0x6FL) || l_1136[1][3][0]) , g_927) < (-6L)));
                    }
                }
                else
                {
                    l_1117 = (func_88(g_581[8], (1UL ^ p_29)) > l_1124[3]);
                    g_211 = (p_30 ^ ((g_71[0] , func_97(g_156, g_157[p_29], g_70, l_1141, p_30)) | (+g_540[1])));
                }
            }
            else
            {
                unsigned l_1150 = 0x479408ECL;
                int l_1151 = 0xA3A3A512L;
                for (g_123 = 0; (g_123 <= 3); g_123 += 1)
                {
                    int l_1144 = 1L;
                    int l_1147[10] = {(-1L), 0x9E440AD7L, (-1L), 0x9E440AD7L, (-1L), 0x9E440AD7L, (-1L), 0x9E440AD7L, (-1L), 0x9E440AD7L};
                    int i;
                    if ((l_1151 = (func_46(l_1113, (g_157[p_29] = g_71[2])) >= (g_673 , (safe_add_func_int16_t_s_s((func_46((l_1144 = p_28), (l_1117 = (((+p_30) < (safe_add_func_int32_t_s_s(l_1147[8], (l_1111 = (safe_sub_func_int8_t_s_s(((p_28 <= ((l_1150 = 0x09D2ACC5L) > g_213)) , p_30), 255UL)))))) >= g_965))) == g_156), l_1151))))))
                    {
                        unsigned l_1170 = 2UL;
                        l_1136[1][8][0] = func_46((l_1170 = (l_1136[0][9][0] = ((safe_lshift_func_uint8_t_u_s((g_1021 <= (l_1147[8] = (safe_div_func_uint32_t_u_u((((l_1147[8] < 0xCC165F68L) , (((((func_46((g_71[2] = (g_1025 = l_1112)), (g_157[2] = (safe_sub_func_uint8_t_u_u((p_26 = (safe_lshift_func_uint16_t_u_s((g_921 == (l_1151 = (((safe_sub_func_int8_t_s_s((l_1147[5] = (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((~0xF4EDL), (0x4635L || g_927))) || (safe_lshift_func_int16_t_s_s(1L, l_1136[1][8][0]))), g_11))), (-10L))) || p_26) < p_28))), 14))), 1UL)))) , (-1L)) && l_1150) | (-9L)) & p_29) , 1L)) , 0xE76C3D07L), p_29)))), g_86[1])) <= g_70))), g_965);
                    }
                    else
                    {
                        char l_1188 = 2L;
                        l_1147[8] = l_1113;
                        l_1188 = (((p_26 == (safe_add_func_uint8_t_u_u((~(l_1113 = (l_1117 = l_1136[1][8][0]))), (((l_1187 = (+(safe_div_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(p_28, 3)) != (((~((((~((safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(((1L ^ ((l_1111 = 0L) | g_708)) & (((l_1151 = (safe_rshift_func_int16_t_s_s(0x09BDL, 0))) && 0x48L) && g_116)), g_157[2])), 0xD1196515L)) <= p_27) > l_1089[7]) && 0x24L), 0xE8AFL)) , 1UL) & l_1089[7]), p_26)) & 0L)) , g_155) && 65535UL) >= 0xCDE6L)) , p_30) != p_28)) > p_30), g_545[0])))) ^ g_116) >= 0x78D2L)))) < 0x5C684C90L) != g_540[1]);
                        l_1117 = ((l_1151 = (-1L)) == g_540[1]);
                    }
                    if (p_28)
                        break;
                    if (l_1089[7])
                        break;
                    l_1136[1][1][0] = (l_1147[8] < (l_1136[1][8][0] == (g_180 = g_400)));
                }
            }
            if (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_1193, 5)), (((((safe_rshift_func_int16_t_s_s((1UL && (0xE8D5L < ((g_179 = 0UL) <= (g_1025 || l_1116)))), (g_581[3] == (((g_180 = (l_1111 = ((safe_rshift_func_uint8_t_u_s(0xE0L, p_29)) != 0xE2DD9011L))) >= 0x74D8L) , p_26)))) , l_1112) >= p_26) , 1L) | 0x91731EC5L))) && 0xFDL))
            {
                short l_1200 = 0x4660L;
                int l_1205[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1205[i] = 1L;
                l_1113 = (((l_1111 = (0x5F0746C2L == p_30)) > (l_1200 <= ((safe_add_func_uint8_t_u_u(((l_1116 == g_965) || (l_1205[1] = l_1136[0][1][0])), 0x10L)) || (g_128 <= p_26)))) != l_1200);
            }
            else
            {
                unsigned l_1225 = 0x6C061772L;
                char l_1281 = 0L;
                int l_1310 = 0x118FFB77L;
                char l_1313[7][8][4] = {{{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}, {{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}, {{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}, {{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}, {{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}, {{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}, {{(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}, {(-9L), (-1L), 0x9DL, 0x0DL}}};
                int i, j, k;
                for (g_708 = (-22); (g_708 < 43); g_708++)
                {
                    char l_1212[1];
                    unsigned char l_1246 = 254UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1212[i] = 4L;
                    for (l_1116 = (-2); (l_1116 > 2); l_1116++)
                    {
                        short l_1226 = (-1L);
                        int l_1227 = 1L;
                        l_1227 = ((5L == (func_46((((safe_add_func_int8_t_s_s((((l_1212[0] & (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(g_179, ((safe_rshift_func_uint16_t_u_u(((l_1212[0] ^ ((safe_add_func_uint32_t_u_u(((func_46(p_28, (func_97(g_86[1], (safe_add_func_uint32_t_u_u(p_29, ((g_545[0] || (func_46(((safe_add_func_int16_t_s_s(l_1212[0], p_29)) , 0xEFA26E84L), l_1111) > 0L)) , 0L))), g_921, l_1225, p_26) ^ p_27)) && 0UL) > l_1136[0][3][0]), l_1136[1][3][0])) != l_1111)) , g_545[0]), l_1226)) >= p_27))) ^ g_155), g_540[1]))) | g_1021) && 0x19F5L), p_29)) || p_27) , p_30), p_27) , g_128)) > 6L);
                        l_1187 = (((~(safe_rshift_func_uint16_t_u_u((g_165 , (safe_mod_func_int32_t_s_s(0x154EE808L, (safe_sub_func_uint32_t_u_u(l_1227, p_30))))), 4))) ^ (safe_mod_func_int16_t_s_s(0xF3EEL, ((g_1021 = ((safe_div_func_int16_t_s_s(func_97((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((l_1246 = (safe_mod_func_int32_t_s_s((8UL & (-1L)), (safe_add_func_uint16_t_u_u(((g_180 && func_97((p_27 && 0x839F7A50L), p_29, g_400, p_29, l_1225)) || l_1212[0]), 2UL))))), l_1225)) < l_1225), p_26)), g_965, l_1124[1], g_1193, g_770), 0xEDB0L)) < p_29)) ^ 1UL)))) , p_28);
                        return l_1247;
                    }
                    l_1136[0][7][0] = func_97(p_29, (p_26 | (safe_lshift_func_int8_t_s_u(((0x01L < (safe_sub_func_uint32_t_u_u((((l_1112 != func_46(g_165, l_1116)) >= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_28, ((((safe_lshift_func_uint8_t_u_u((g_86[1] = (g_128 = (g_156 = (l_1111 = p_28)))), 6)) || p_28) > 0xEA085E99L) == l_1089[2]))), g_921))) , g_1021), p_29))) >= l_1124[3]), 5))), p_30, l_1124[3], p_26);
                    return g_1025;
                }
                for (g_1193 = 0; (g_1193 == (-30)); --g_1193)
                {
                    int l_1285[8][1];
                    int l_1294 = 1L;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1285[i][j] = 0xB207A6BDL;
                    }
                    for (g_673 = 1; (g_673 >= 0); g_673 -= 1)
                    {
                        int i;
                        g_211 = func_97(g_86[g_673], (l_1282[1] = (safe_rshift_func_uint8_t_u_u((((g_165 , (0x07B5L < ((safe_lshift_func_int16_t_s_s(func_46(((l_1136[1][0][0] = (safe_div_func_int8_t_s_s(0xBCL, p_26))) > ((safe_sub_func_int16_t_s_s(func_97(p_26, (((l_1282[1] = ((safe_add_func_uint8_t_u_u(g_86[g_673], (g_965 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_1274, ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_927, g_581[3])) < l_1281), l_1112)), l_1111)) , g_921))), 11))))) & 0L)) == l_1283) | g_157[2]), l_1247, g_581[2], l_1284), l_1281)) == l_1284)), g_155), p_26)) == l_1284))) & 0xF5B8L) & (-1L)), l_1285[3][0]))), l_1281, p_29, g_400);
                        l_1187 = l_1124[4];
                    }
                    l_1187 = ((g_126 , (safe_add_func_uint8_t_u_u(((((func_52(p_30, ((func_97(((safe_lshift_func_uint8_t_u_s(func_52(g_71[3], l_1285[4][0]), 2)) | (((l_1297 = (p_26 , (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((1L & (l_1294 = g_11)), (safe_sub_func_uint32_t_u_u(g_545[0], l_1225)))), p_29)) <= g_545[0]) & g_581[3]))) == l_1285[6][0]) , 0x638DD356L)), g_927, l_1285[3][0], p_30, p_27) > 0L) | 1UL)) <= g_581[3]) && 0xCFL) || 0L) > p_28), g_1193))) <= g_545[1]);
                }
                for (g_60 = 0; (g_60 == 46); g_60 = safe_add_func_int16_t_s_s(g_60, 1))
                {
                    int l_1307[10][4] = {{0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}, {0x50EA5547L, 0xEBBC9390L, (-6L), 0xEBBC9390L}};
                    int i, j;
                    if ((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(((g_1312 = ((l_1304 = l_1136[0][4][0]) >= (((safe_sub_func_int16_t_s_s(((l_1310 = (p_30 && (((4294967292UL ^ l_1307[4][2]) > func_88((0L == (func_88(((((l_1307[4][2] ^ ((p_26 , p_26) , ((safe_sub_func_int16_t_s_s(((g_165 , p_30) >= 0UL), g_211)) >= p_28))) == 0UL) > 0x53E8AD24L) , p_26), g_673) , 0x0BD2A07CL)), g_965)) , 0UL))) , l_1311), 0L)) , p_29) & 1L))) < p_29), p_27)), 0xE4L)))
                    {
                        return g_540[4];
                    }
                    else
                    {
                        return l_1313[0][5][3];
                    }
                }
            }
            if ((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((g_70 , (safe_lshift_func_uint16_t_u_s((g_11 > (g_213 && l_1141)), 2))) ^ ((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0xAA15L, l_1282[0])), (safe_lshift_func_int16_t_s_s(g_581[6], g_157[p_29])))) || ((safe_div_func_uint16_t_u_u(0xCBB3L, p_28)) > (-1L)))), l_1124[3])) != 0x37F4L), g_673)))
            {
                unsigned char l_1360[6][5] = {{0x0EL, 0xB5L, 3UL, 0xD9L, 3UL}, {0x0EL, 0xB5L, 3UL, 0xD9L, 3UL}, {0x0EL, 0xB5L, 3UL, 0xD9L, 3UL}, {0x0EL, 0xB5L, 3UL, 0xD9L, 3UL}, {0x0EL, 0xB5L, 3UL, 0xD9L, 3UL}, {0x0EL, 0xB5L, 3UL, 0xD9L, 3UL}};
                int i, j;
                l_1282[0] = ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(((((g_157[0] > (g_116 == ((l_1187 == 1UL) || g_157[2]))) == l_1124[3]) || ((0xE2758AD3L != func_88((safe_lshift_func_uint8_t_u_u(((g_11 , (0x92L | 0x27L)) & (-4L)), 4)), g_211)) == l_1136[1][2][0])) | l_1338), p_28)) <= 0x74L) | 0x3AL) , 5UL), g_1312)) >= p_30) == g_1339[2]), p_27)) , g_126);
                l_1282[1] = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_26 != ((((((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((!((safe_rshift_func_int16_t_s_s(l_1117, 15)) ^ p_26)), 1)), (+0x54DEL))) & (safe_lshift_func_uint8_t_u_u((0x95C4DBE1L >= g_11), p_26))), ((l_1361 = (safe_rshift_func_uint16_t_u_u(((g_211 = (-1L)) | ((l_1136[1][6][0] = ((safe_mod_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((l_1187 = (0xC454L != 0xDA08L)), p_26)) | 0x3CL) || g_540[1]) > l_1360[0][1]), l_1360[0][3])) == 1L)) <= 0UL)), 15))) && 1L))) , 0xB715L) | g_115) > g_581[4]) ^ 1L) == p_30)), 6)), 4294967286UL)) ^ g_165);
            }
            else
            {
                unsigned char l_1368 = 0x74L;
                int l_1375 = 0xA9716599L;
                unsigned char l_1380 = 251UL;
                if (p_27)
                    break;
                l_1362 = (l_1111 = l_1187);
                for (g_155 = 0; (g_155 <= 1); g_155 += 1)
                {
                    int l_1367 = 0x019B3C89L;
                    unsigned l_1399 = 0xC2B044F4L;
                    int i;
                    if ((safe_lshift_func_int8_t_s_s(func_97(g_545[g_155], (l_1367 = (safe_lshift_func_uint8_t_u_s((0x8EF4B349L | g_545[g_155]), 3))), (((l_1368 = g_545[g_155]) || (p_30 == (0x8E43L >= (safe_rshift_func_uint8_t_u_s((p_28 <= g_60), 4))))) , l_1112), p_28, l_1113), 7)))
                    {
                        short l_1371 = (-6L);
                        int l_1372 = 1L;
                        l_1367 = (l_1371 ^ (g_545[0] | ((p_28 | (+((((g_211 = g_921) & (l_1372 = l_1362)) & ((safe_unary_minus_func_uint16_t_u(func_97(((p_26 = (g_157[2] >= ((l_1282[1] = (l_1375 = (g_1374 = p_29))) || (safe_div_func_int16_t_s_s((0xD1L < func_46(((safe_rshift_func_uint16_t_u_s((1L || l_1380), p_30)) < 0x535A1FA6L), g_1021)), l_1089[0]))))) & (-2L)), g_540[1], l_1367, p_27, g_581[3]))) ^ l_1136[0][6][0])) != p_29))) , l_1338)));
                        l_1311 = ((safe_rshift_func_int8_t_s_u(((((l_1368 < 0x8EL) ^ (l_1117 = (safe_lshift_func_uint8_t_u_u(g_673, (0x45E5L | (((l_1375 || (safe_div_func_uint8_t_u_u((l_1389 = (safe_lshift_func_uint16_t_u_u(1UL, 14))), (p_26 , (g_115 = ((~(255UL != (g_921 = ((p_26 <= p_26) || l_1089[7])))) || g_1193)))))) >= p_27) <= 0x0C58L)))))) || p_27) , 1L), 2)) & p_29);
                    }
                    else
                    {
                        unsigned short l_1396 = 0UL;
                        int l_1400 = (-1L);
                        int i;
                        g_1401 = ((g_60 >= (func_46(g_71[0], (0L >= (safe_rshift_func_int16_t_s_u((((l_1124[p_29] = (safe_rshift_func_int8_t_s_u(((l_1112 < (g_211 = (((safe_mod_func_int16_t_s_s((((l_1396 = 246UL) <= (func_97(g_168, (((safe_div_func_uint32_t_u_u(func_97(l_1368, l_1399, l_1400, l_1247, l_1375), 0xDDABFD65L)) , p_30) , 7L), l_1297, g_155, p_28) || l_1141)) , p_30), 8UL)) , 0x4DL) && g_157[0]))) , g_116), p_27))) >= p_28) >= l_1111), 9)))) & p_30)) & g_11);
                        if (p_28)
                            break;
                        l_1282[1] = g_1374;
                    }
                    return l_1362;
                }
                g_211 = g_165;
            }
        }
        else
        {
            unsigned l_1418[3][3][6] = {{{4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}, {4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}, {4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}}, {{4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}, {4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}, {4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}}, {{4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}, {4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}, {4294967288UL, 0x2ACB2403L, 0xBFBE3979L, 0UL, 0xBFBE3979L, 0x2ACB2403L}}};
            int l_1437 = 6L;
            int l_1448 = 1L;
            int i, j, k;
            for (l_1304 = 0; (l_1304 <= 2); l_1304 += 1)
            {
                int l_1419 = 0x87FE6E1EL;
                int i;
                l_1297 = g_86[l_1304];
                for (g_400 = 2; (g_400 >= 0); g_400 -= 1)
                {
                    int l_1421[1][4][5] = {{{3L, 1L, 0x07EF42C3L, 1L, 3L}, {3L, 1L, 0x07EF42C3L, 1L, 3L}, {3L, 1L, 0x07EF42C3L, 1L, 3L}, {3L, 1L, 0x07EF42C3L, 1L, 3L}}};
                    int i, j, k;
                    l_1421[0][0][1] = (((safe_add_func_uint32_t_u_u(((func_97((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(func_46(g_86[g_400], (g_155 = ((((safe_add_func_uint16_t_u_u(((l_1419 = (0xB4L == (((((l_1117 = p_26) >= g_1312) | ((g_921 = g_167) , ((p_26 >= (safe_rshift_func_uint16_t_u_u((l_1304 , g_540[5]), 8))) , func_97((safe_lshift_func_uint8_t_u_u((l_1418[1][2][1] && 2UL), l_1362)), g_123, p_28, p_29, g_86[l_1304])))) == l_1418[1][1][3]) , l_1297))) , l_1125), p_28)) == 0x4EF1L) && p_27) , p_30))), g_86[l_1304])) ^ g_157[2]), l_1089[1])) != 0x87C3L) ^ 0xAD547E36L), l_1311)), g_60)), p_29, g_86[l_1304], l_1089[7], g_86[2]) <= g_60) < 0x077FL), p_28)) > l_1420) != 0x0CED95C4L);
                    g_211 = g_86[1];
                }
                if ((safe_div_func_int8_t_s_s((g_770 = (((((g_155 = ((safe_mod_func_int32_t_s_s((l_1419 = (-2L)), g_86[l_1304])) , ((g_1021 != (func_97((l_1418[1][2][1] | (((l_1362 , func_46((safe_rshift_func_int8_t_s_u(0x9FL, 3)), l_1112)) ^ ((safe_sub_func_uint8_t_u_u((g_1312 , l_1297), g_115)) && g_123)) != (-1L))), p_27, l_1418[1][2][1], l_1112, p_28) || g_708)) && p_29))) , 0x04L) & p_29) ^ 0xE038L) , g_545[1])), g_673)))
                {
                    char l_1431 = 0xD7L;
                    l_1431 = (((g_770 = (g_126 || 0xF5AFBB76L)) , (l_1113 < 0xB5L)) , l_1430);
                    l_1117 = p_26;
                }
                else
                {
                    l_1117 = ((safe_lshift_func_uint8_t_u_u(g_921, 5)) & (p_28 | 0x135736DAL));
                    l_1434 = l_1419;
                    return p_29;
                }
            }
            l_1437 = (safe_sub_func_int32_t_s_s(g_126, 0x0AB04870L));
            if ((safe_lshift_func_uint16_t_u_u((g_581[0] & (safe_div_func_uint32_t_u_u(((l_1297 = (safe_rshift_func_uint8_t_u_u(((p_26 , 4L) != (-10L)), p_28))) , (safe_div_func_int8_t_s_s(((l_1437 = g_1339[2]) & p_26), ((safe_rshift_func_uint16_t_u_s((p_29 , g_165), l_1448)) , g_116)))), p_30))), 11)))
            {
                g_211 = (safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_1187 = g_708), 6)) && 0xB39B65D9L), (l_1338 <= ((safe_div_func_uint16_t_u_u((func_97((l_1448 = p_30), ((g_1021 = (p_27 = l_1418[1][2][1])) , func_46(p_28, ((((((p_30 != g_157[p_29]) == l_1430) == 0x85534446L) | g_673) >= g_156) <= 0xA3EFCB78L))), p_26, g_581[8], p_29) == l_1418[1][0][5]), (-1L))) <= 0x78L)))) , p_27), 11));
            }
            else
            {
                unsigned short l_1463[8][4][2] = {{{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}, {{0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}, {0UL, 0xBC47L}}};
                int l_1474[1];
                unsigned char l_1475 = 0x2FL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1474[i] = (-8L);
                l_1437 = (safe_rshift_func_int16_t_s_s(p_29, 8));
                g_211 = (safe_lshift_func_uint8_t_u_u(((l_1463[1][3][1] >= (safe_sub_func_uint32_t_u_u(((((p_27 = (g_581[6] >= (((safe_mod_func_uint8_t_u_u(0xCBL, 0x70L)) == 0x00L) , (l_1117 = (-1L))))) , p_29) ^ l_1420) <= 0x5EL), l_1113))) <= 0L), 3));
                g_1476 = (l_1474[0] = func_52(func_52(((l_1117 = ((safe_sub_func_uint32_t_u_u((l_1437 = 0xA4538BA3L), (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_1113 = ((((l_1474[0] = (l_1448 != 0x61L)) <= l_1430) || func_52(l_1474[0], p_27)) != ((l_1475 = 2UL) & ((g_1312 >= g_581[3]) , p_30)))), l_1463[3][0][1])), g_965)) || g_86[2]) , 1L))) > g_545[0])) , 0xB021L), l_1434), p_29));
            }
            l_1437 = (l_1448 = (g_211 = 0x539FF016L));
        }
        if (g_167)
            break;
        for (g_179 = 0; (g_179 <= 3); g_179 += 1)
        {
            int i;
            return g_71[g_179];
        }
        g_211 = (safe_add_func_uint32_t_u_u((((l_1187 || (func_46(p_27, (safe_div_func_uint16_t_u_u((l_1304 | func_46((l_1117 = 0xD11BEA44L), (l_1113 = (safe_div_func_uint32_t_u_u((l_1112 , (safe_mod_func_uint16_t_u_u((+(safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((l_1500 = ((g_1021 = (((safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_add_func_int32_t_s_s(g_157[0], (safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_s(0x17L, 1)) , (safe_div_func_uint8_t_u_u((g_1021 == g_157[2]), g_60))))))) || 9UL), (-1L))), 6)) > 0xBE652761L) && l_1311)) , p_26)), l_1187)) ^ g_116), g_157[1]))), 2L))), p_30))))), 1UL))) == g_545[0])) ^ l_1247) == l_1389), g_157[2]));
    }
    for (g_673 = 0; (g_673 == (-28)); g_673 = safe_sub_func_uint16_t_u_u(g_673, 5))
    {
        return g_965;
    }
    return g_673;
}







static unsigned func_37(const unsigned char p_38, char p_39, char p_40)
{
    unsigned l_55[7] = {5UL, 0UL, 5UL, 0UL, 5UL, 0UL, 5UL};
    int l_1068 = 0xDE33BEC0L;
    int i;
    if ((func_52(g_11, l_55[0]) , g_115))
    {
        unsigned short l_1057 = 1UL;
        int l_1058[8][8] = {{(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}, {(-4L), 7L, 0xA79BCB8DL, 0x118641CBL, (-4L), (-1L), 1L, (-1L)}};
        int i, j;
        g_211 = ((l_55[4] == (l_1058[0][0] = (safe_add_func_uint16_t_u_u((g_180 = 0UL), func_46(((safe_lshift_func_uint16_t_u_s(p_40, ((g_168 <= func_97(((safe_sub_func_int32_t_s_s(g_157[2], ((safe_add_func_int32_t_s_s(g_70, func_46((l_1057 = (safe_add_func_uint16_t_u_u(g_1025, g_540[1]))), p_39))) , p_39))) | 3L), l_1058[4][4], l_55[3], g_123, l_55[4])) < 0L))) , l_1058[7][2]), g_156))))) & l_55[0]);
    }
    else
    {
        unsigned char l_1063 = 251UL;
        int l_1069 = (-9L);
        g_211 = (safe_mod_func_int32_t_s_s((l_1069 = (func_46((g_71[0] = ((((l_1063 <= g_540[1]) & ((p_40 & (l_55[4] && ((g_673 = g_180) && (safe_mod_func_int8_t_s_s(func_97(func_46(p_39, l_55[0]), (((l_1068 = ((safe_mod_func_int32_t_s_s(g_540[4], g_545[0])) , p_40)) < g_126) , l_1063), l_55[0], p_39, g_155), 1L))))) >= 0xE7L)) | 249UL) , g_116)), l_1063) <= 0x01EAL)), p_39));
        l_1068 = (safe_add_func_uint16_t_u_u((~(safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_mod_func_uint16_t_u_u((p_39 , (g_770 , func_97(g_213, p_39, func_97(g_965, p_40, (g_86[0] = g_581[3]), (((p_38 != (safe_lshift_func_int16_t_s_s(((((((safe_rshift_func_uint8_t_u_s(((l_1069 = l_1069) > 65535UL), g_770)) & 0xCBB1L) , 5L) ^ 0L) | 4UL) , l_1068), p_40))) & 0UL) , 0L), l_55[5]), l_1063, g_255))), 0x42E7L)))), p_39)), 0xDCL)), l_1068)), 1)), 6L))), l_1063));
    }
    return p_39;
}







static short func_46(unsigned p_47, unsigned p_48)
{
    short l_50[2];
    int i;
    for (i = 0; i < 2; i++)
        l_50[i] = 5L;
    l_50[1] = p_47;
    return p_47;
}







static int func_52(unsigned short p_53, unsigned p_54)
{
    unsigned l_56 = 2UL;
    int l_59 = 0x7684A579L;
    int l_61 = 0xA15B6274L;
    int l_62 = 0x2DF500C3L;
    unsigned l_65 = 6UL;
    unsigned short l_72 = 65526UL;
    int l_73 = 3L;
    const short l_1043[2] = {0xA412L, 0xA412L};
    unsigned l_1044 = 0xA8B18622L;
    int i;
    if ((func_46((l_56 & (safe_add_func_uint8_t_u_u(g_11, (((l_59 = l_56) >= (l_62 = (~((l_61 = (g_60 = 0xBA827CF5L)) <= 0UL)))) <= ((l_73 = (func_46((safe_mod_func_int8_t_s_s((l_65 <= (g_71[0] = (((l_65 || (safe_add_func_uint32_t_u_u((g_70 = (safe_mod_func_uint32_t_u_u((0x1960CC19L ^ (((l_56 , 0UL) < p_54) || 0x865D4863L)), p_53))), 0x80C5262CL))) & g_11) , l_56))), p_54)), l_72) > g_11)) , g_11))))), l_72) , p_53))
    {
        char l_74 = 8L;
        return l_74;
    }
    else
    {
        char l_1026 = 7L;
        int l_1027 = 6L;
        int l_1029 = 0x78B2F360L;
        unsigned l_1040[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1040[i] = 4UL;
        for (l_65 = 10; (l_65 > 35); l_65++)
        {
            short l_83 = 0xD362L;
            for (g_60 = (-5); (g_60 > 18); g_60 = safe_add_func_int32_t_s_s(g_60, 5))
            {
                unsigned l_87 = 0UL;
                int l_1028 = 0xA7EB0A77L;
                l_1028 = ((l_73 > (l_1027 = (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(func_46((l_83 == 0x1E67L), l_62), (func_46((g_86[1] = (g_71[1] = 0xF45EA776L)), l_87) <= (l_1026 = ((l_61 = (func_46(((func_88(g_11, g_70) || g_540[1]) ^ 255UL), p_53) ^ g_545[0])) == 5UL))))) >= l_72), 5)))) < p_54);
            }
            l_1029 = ((g_921 = l_1026) < p_54);
        }
        g_211 = ((l_73 = l_1029) == ((safe_sub_func_uint8_t_u_u(g_921, l_1027)) <= g_157[2]));
        g_211 = ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((~p_53) && g_168), (l_1027 = ((g_540[6] = ((g_155 = (l_59 <= g_673)) >= 4L)) , (safe_div_func_int16_t_s_s((g_673 = (((l_1027 != ((l_1040[1] & (safe_mod_func_uint8_t_u_u(func_97(g_581[3], ((l_1027 , g_86[1]) < l_61), p_54, p_53, l_72), g_60))) && p_54)) || l_1040[1]) && l_59)), l_1043[1])))))), 6)) ^ g_581[7]);
        l_1044 = l_72;
    }
    g_211 = (safe_div_func_uint16_t_u_u((p_54 | 0L), p_53));
    return l_73;
}







static int func_88(int p_89, int p_90)
{
    unsigned l_113 = 1UL;
    int l_129[8] = {9L, 0x197733A1L, 9L, 0x197733A1L, 9L, 0x197733A1L, 9L, 0x197733A1L};
    int l_209 = 0x66D58AA3L;
    char l_243 = 0x00L;
    char l_266 = 3L;
    unsigned short l_319[2];
    unsigned char l_398 = 5UL;
    short l_605 = 0xD808L;
    unsigned char l_647 = 1UL;
    char l_786[9][5][5] = {{{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}, {{(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}, {(-1L), 0x57L, (-1L), 0x8DL, 0xCEL}}};
    int l_787[7];
    short l_816 = (-1L);
    short l_879 = 6L;
    char l_1000[4][3] = {{0x66L, 0x66L, 0x60L}, {0x66L, 0x66L, 0x60L}, {0x66L, 0x66L, 0x60L}, {0x66L, 0x66L, 0x60L}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_319[i] = 0UL;
    for (i = 0; i < 7; i++)
        l_787[i] = 1L;
    for (p_90 = 0; (p_90 != 29); ++p_90)
    {
        unsigned l_93 = 3UL;
        int l_96 = 6L;
        int l_127[3];
        int i;
        for (i = 0; i < 3; i++)
            l_127[i] = (-1L);
        if ((l_129[2] = (func_46(((p_89 ^ ((l_93 = 0x6B75L) , (g_70 , ((g_128 = ((safe_lshift_func_int16_t_s_u(((l_127[1] = (g_11 < (((l_96 = (p_89 & 4294967295UL)) >= func_97((safe_sub_func_int32_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((!(func_46((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(p_89, ((l_113 , 0xAB27A36CL) , p_90))) & 0x9DB6L), 0x148BL)), p_90) < 0UL)) ^ p_89), g_11)), p_90)) , l_93))), l_93, l_93, l_93, l_93)) , 255UL))) != l_93), 13)) , l_113)) | 0x735F4C61L)))) <= p_90), p_89) == 0x0B5F8E08L)))
        {
            unsigned char l_140 = 0xA9L;
            for (g_70 = 0; (g_70 == (-26)); g_70 = safe_sub_func_int32_t_s_s(g_70, 6))
            {
                int l_141 = 0x59D1E7CDL;
                for (g_115 = 0; (g_115 == 60); g_115++)
                {
                    for (g_123 = 0; (g_123 <= 7); g_123 += 1)
                    {
                        int i;
                        l_129[g_123] = ((safe_div_func_uint8_t_u_u((0xC3L != ((l_129[g_123] | (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((func_46(p_90, ((g_115 < (l_140 == (g_126 = 0x0CFAL))) > func_46((l_129[g_123] | g_116), p_89))) >= l_141), 0xE851EC27L)) == p_89), l_129[g_123]))) , p_90)), g_11)) == g_123);
                        return p_89;
                    }
                }
            }
        }
        else
        {
            char l_144 = 0x7EL;
            int l_182 = 0x4D10B9EBL;
            for (l_113 = 0; (l_113 >= 21); l_113 = safe_add_func_int16_t_s_s(l_113, 8))
            {
                unsigned short l_145 = 3UL;
                int l_181 = (-7L);
                int l_225[9] = {(-1L), (-8L), (-1L), (-8L), (-1L), (-8L), (-1L), (-8L), (-1L)};
                int i;
                if (((((l_144 > (l_144 == p_89)) <= (func_97(p_90, p_90, g_70, p_89, ((l_145 <= (+l_113)) != p_89)) >= p_90)) , l_144) >= p_89))
                {
                    short l_150[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_150[i] = 0L;
                    l_96 = ((safe_mod_func_uint16_t_u_u((l_144 || ((safe_lshift_func_uint8_t_u_s((((l_150[2] , (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(p_89, 13)), 4))) , p_90) < ((0xAEL <= ((g_155 = p_89) | (g_123 <= ((-1L) < ((p_90 , l_96) != p_90))))) ^ l_150[1])), 7)) , g_70)), p_90)) & p_89);
                    if (g_115)
                        break;
                    g_156 = 0xACC82D11L;
                }
                else
                {
                    char l_164 = 0x68L;
                    int l_166[8][9];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_166[i][j] = (-8L);
                    }
                    if (func_97((func_97((g_70 , g_70), ((l_129[2] & (g_126 = l_129[2])) < g_157[2]), (l_127[0] = (((safe_lshift_func_int16_t_s_u((-1L), 7)) , (safe_add_func_int32_t_s_s((func_46((+(((0x50DCL > (safe_mod_func_uint16_t_u_u(l_129[2], p_89))) == 0xFA29L) , 5UL)), p_90) ^ (-10L)), 0xAF9F913AL))) & g_157[0])), l_144, g_116) || 0x78L), p_89, g_157[0], l_164, l_129[2]))
                    {
                        g_165 = g_157[2];
                        return p_89;
                    }
                    else
                    {
                        l_166[1][4] = func_46(p_90, l_127[1]);
                        g_167 = l_129[2];
                        g_168 = (-1L);
                        g_180 = (safe_add_func_int8_t_s_s(l_144, (safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0xECL, p_89)) | (l_127[1] > (+func_46(p_90, (g_157[2] = g_155))))), ((safe_sub_func_int16_t_s_s(((l_166[1][4] = ((func_97((safe_sub_func_int16_t_s_s(((l_96 = g_123) >= ((((l_113 & 0L) > p_89) >= g_165) >= g_115)), l_145)), p_89, p_90, p_89, p_89) & 0x7989E97BL) && l_144)) | p_89), g_168)) || g_179)))));
                    }
                    l_182 = (func_97(p_89, g_60, g_155, (l_181 ^ 0xE45E2122L), l_113) | 1L);
                    for (g_179 = 19; (g_179 <= 52); g_179++)
                    {
                        char l_210 = (-3L);
                        int l_212 = 6L;
                        g_213 = ((((~p_89) || (safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s((g_165 , ((safe_lshift_func_int16_t_s_s((~(safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((l_212 = (((g_211 = ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_129[3], (3L != (((~l_181) <= (safe_lshift_func_uint8_t_u_s((~(l_166[1][7] || 1L)), 6))) , func_97((l_210 = (l_209 = func_46(((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(g_155, (safe_lshift_func_int16_t_s_s((g_180 != l_144), l_164)))) , g_168), p_90)) & g_168), p_90))), g_168, g_60, l_145, g_60))))), p_90)) >= 0xA3L), 1L)) > g_179)) > g_157[2]) || l_210)) == l_181), g_60)), g_157[2]))), 3)) || l_164)), p_90)) <= g_156), g_155))) > g_128) == 0x1FL);
                        l_212 = (-8L);
                        l_209 = l_166[2][7];
                        l_209 = l_212;
                    }
                    l_225[3] = (safe_add_func_int32_t_s_s((g_213 , (((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((-9L) >= func_46(l_113, ((safe_div_func_uint16_t_u_u(p_90, (safe_add_func_int16_t_s_s(((l_129[0] > (p_89 , ((l_225[3] = ((p_90 < 0xC228L) >= ((safe_add_func_uint8_t_u_u(p_89, l_166[5][5])) ^ p_89))) , p_90))) > 65528UL), 0L)))) | l_113))))), 5)) & (-10L)) & g_167)), g_167));
                }
            }
            return p_89;
        }
        if (l_129[2])
            break;
        l_127[0] = func_97(p_89, g_167, p_90, p_90, g_128);
    }
    if (((safe_div_func_int8_t_s_s((1UL != l_129[2]), g_11)) > (l_209 = (g_70 = p_89))))
    {
        char l_238 = 1L;
        int l_252 = 0x0343139DL;
        int l_274 = 1L;
        unsigned short l_308 = 0x8C80L;
        short l_352 = (-10L);
        unsigned l_387[8][1] = {{0xA1E7A3A5L}, {0xA1E7A3A5L}, {0xA1E7A3A5L}, {0xA1E7A3A5L}, {0xA1E7A3A5L}, {0xA1E7A3A5L}, {0xA1E7A3A5L}, {0xA1E7A3A5L}};
        short l_403 = 1L;
        int i, j;
        for (g_180 = 0; (g_180 >= 30); g_180++)
        {
            unsigned short l_230 = 0x6BC0L;
            char l_237 = 0xD4L;
            int l_253 = (-7L);
            for (g_115 = 0; (g_115 <= 7); g_115 += 1)
            {
                int l_233 = 0x81C9F17BL;
                int l_251 = (-1L);
                unsigned char l_269 = 0UL;
                for (g_168 = 5; (g_168 >= 2); g_168 -= 1)
                {
                    char l_236 = (-1L);
                    int l_254[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_254[i] = 0xAF7A4CD5L;
                    for (p_90 = 0; (p_90 <= 7); p_90 += 1)
                    {
                        int i;
                        l_129[(g_168 + 1)] = l_129[p_90];
                        g_211 = (((func_46(((l_129[g_115] > (l_230 & (g_70 , ((p_90 ^ (safe_rshift_func_uint8_t_u_u(((l_233 != p_90) , ((((0x564CL >= ((safe_lshift_func_int16_t_s_s(((p_89 == ((l_236 ^ p_90) ^ p_90)) == g_156), 7)) , g_179)) != g_156) < p_90) & l_233)), 2))) & l_237)))) < 6UL), l_238) != g_70) , p_89) , p_90);
                        return l_238;
                    }
                    g_255 = (func_46(p_89, p_89) < (safe_mod_func_uint32_t_u_u(((l_129[2] = (l_254[4] = (l_253 = ((((g_211 = g_213) >= 0xEE9E9492L) && (safe_div_func_uint16_t_u_u((l_243 = p_90), ((safe_sub_func_int8_t_s_s(func_46(((g_128 = (safe_unary_minus_func_int16_t_s((l_238 >= (((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(func_46((l_252 = (l_251 = l_238)), (l_209 ^ g_157[2])), g_60)), l_230)) && 255UL) | 65531UL))))) , 2UL), p_89), g_165)) | l_113)))) && g_155)))) < l_238), 0x977F159EL)));
                }
                for (l_237 = 0; (l_237 <= 3); l_237 += 1)
                {
                    int l_267 = 2L;
                    int i;
                    l_129[g_115] = (0x62BE1D48L != l_129[(l_237 + 2)]);
                    if (l_129[(l_237 + 2)])
                        break;
                    for (g_128 = 0; (g_128 <= 3); g_128 += 1)
                    {
                        unsigned short l_263 = 65529UL;
                        const unsigned l_268[7] = {0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL};
                        int i;
                        l_129[(l_237 + 4)] = func_46(l_129[g_115], l_129[g_115]);
                        g_211 = (((+(safe_div_func_int8_t_s_s((+func_46((safe_unary_minus_func_uint8_t_u((((func_46((func_46((safe_rshift_func_int16_t_s_u((l_129[(g_128 + 1)] ^ ((safe_div_func_int32_t_s_s((8L & (l_263 | (safe_lshift_func_int16_t_s_u((func_46(p_90, ((p_89 && ((((l_129[2] , ((l_267 = l_266) | l_268[2])) , 0x09L) > l_129[6]) , 7UL)) != g_155)) , 0x1DF0L), p_89)))), 0xAC22E554L)) > 0x0A1E72E5L)), l_253)), g_157[2]) , 0UL), p_89) > l_269) != p_89) <= g_179))), l_243)), l_268[5]))) | l_269) == l_230);
                    }
                    l_129[(l_237 + 3)] = (l_129[(l_237 + 2)] > (g_70 = (-5L)));
                }
                l_251 = (247UL != 0x02L);
                for (g_128 = 0; (g_128 <= 3); g_128 += 1)
                {
                    for (g_213 = 0; (g_213 <= 3); g_213 += 1)
                    {
                        l_252 = l_251;
                    }
                }
            }
            l_129[2] = l_252;
            g_211 = func_46((g_213 = (safe_mod_func_int32_t_s_s((l_230 == (safe_lshift_func_int16_t_s_s((1UL && (((func_46(g_123, g_70) != (l_274 , (p_89 != ((l_209 >= 65535UL) , 0UL)))) ^ g_211) & g_155)), p_90))), g_123))), p_89);
            l_252 = l_274;
        }
        for (g_70 = (-6); (g_70 == (-19)); g_70--)
        {
            unsigned l_304 = 4294967286UL;
            const unsigned l_305 = 0x348CBB66L;
            int l_332[7];
            int l_347 = 0xB60831A3L;
            const int l_348 = 0xE3384BBFL;
            unsigned char l_349 = 0xA3L;
            int l_450 = (-7L);
            int i;
            for (i = 0; i < 7; i++)
                l_332[i] = 1L;
            for (p_90 = (-9); (p_90 <= 19); p_90 = safe_add_func_int32_t_s_s(p_90, 3))
            {
                unsigned char l_299 = 0xA9L;
                unsigned l_306 = 0xEBCDB3D0L;
                int l_307 = 0xD00403DCL;
                g_211 = func_46(((((!((func_46(g_116, p_89) <= func_46(l_252, g_155)) > g_116)) , g_123) <= ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(g_128, g_128)), p_90)) > p_89)) == 4294967295UL), p_89);
                l_308 = (((l_307 = (((safe_div_func_uint8_t_u_u((g_115 ^ (safe_div_func_uint32_t_u_u(p_90, ((((safe_add_func_uint32_t_u_u(((l_306 = ((((safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(p_89, (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(func_46(func_46(p_90, g_180), (g_126 != (safe_rshift_func_int8_t_s_u((((l_299 , (safe_mod_func_int32_t_s_s((l_304 = (safe_add_func_int32_t_s_s((g_165 | 0xD4L), g_115))), g_126))) != g_60) != g_157[2]), 1)))), g_211)), 3)))) , l_305) , p_89) | 9UL), 3)) <= p_90) >= p_90) > l_113)) | g_115), l_299)) < 0xF0L) ^ 0x4BL) && 1UL)))), (-1L))) <= g_60) , g_60)) , 2UL) >= p_89);
                l_307 = (((p_90 <= (safe_mod_func_int8_t_s_s((g_116 & 1UL), g_167))) & (safe_div_func_int16_t_s_s(l_299, (safe_div_func_uint32_t_u_u((g_157[2] = func_46(((safe_div_func_uint32_t_u_u(func_46(((((safe_add_func_uint16_t_u_u(l_319[0], func_46(g_155, p_90))) != 6UL) || p_90) == g_167), g_128), p_90)) || p_89), p_89)), l_299))))) == g_211);
                if ((p_89 != (l_332[1] = (func_46(p_90, l_307) , (safe_mod_func_int32_t_s_s((0x0AL > ((g_255 = (p_89 != ((safe_lshift_func_int16_t_s_u(l_306, (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_add_func_int16_t_s_s((p_90 || 1UL), g_60)) , g_156) < 0x9F691A5FL), p_89)) && (-9L)), 0L)), 1UL)))) || 0L))) | g_11)), p_90))))))
                {
                    unsigned char l_350[2][7] = {{0xB9L, 0xB9L, 0x1AL, 0x3BL, 0UL, 0x3BL, 0x1AL}, {0xB9L, 0xB9L, 0x1AL, 0x3BL, 0UL, 0x3BL, 0x1AL}};
                    int i, j;
                    l_350[0][1] = (func_46(((g_70 == (safe_sub_func_int32_t_s_s(0x2340BFB9L, (safe_lshift_func_uint16_t_u_u(l_332[5], ((safe_rshift_func_uint16_t_u_u((g_180 = (((safe_sub_func_int8_t_s_s((((g_211 = (safe_lshift_func_uint16_t_u_s((p_90 , 0x0A98L), ((((safe_add_func_int8_t_s_s((p_90 , p_89), 0L)) , (safe_add_func_int32_t_s_s(0xC8D7FFE0L, l_347))) | l_348) || l_304)))) > p_89) > p_90), g_165)) > 0x71L) == g_167)), g_126)) || p_90)))))) , 0x1051A699L), l_349) , (-2L));
                }
                else
                {
                    unsigned char l_351 = 0xB6L;
                    unsigned l_357 = 0x2847CA50L;
                    int l_370 = (-1L);
                    unsigned short l_379 = 0x6499L;
                    l_352 = (65535UL >= (l_266 & func_46(g_213, l_351)));
                    l_307 = (safe_rshift_func_int16_t_s_s(func_46(l_238, (p_90 == l_113)), 11));
                    g_211 = (p_90 & (g_156 < ((g_126 = l_357) , l_243)));
                    for (g_128 = 0; (g_128 > 43); g_128 = safe_add_func_uint32_t_u_u(g_128, 5))
                    {
                        char l_382 = 1L;
                        l_347 = g_116;
                        g_211 = (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_213, (((-5L) & func_46(((safe_div_func_uint32_t_u_u(((l_305 || (((g_126 = 0xE561L) && p_90) >= p_89)) && (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x8A7E2C84L, (l_370 = (-8L)))), g_168))), g_116)) || p_89), g_60)) & (-1L)))), g_11));
                        l_382 = func_46(((safe_unary_minus_func_int32_t_s(p_89)) , (safe_add_func_int8_t_s_s(l_306, ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(0x6CDDL, (g_165 = 0x35E4L))) ^ ((safe_unary_minus_func_uint8_t_u(((l_379 <= func_46((l_238 , (g_157[1] >= (safe_lshift_func_uint8_t_u_u(((p_90 == g_128) <= 0xC92A5321L), p_89)))), l_308)) && 6L))) | 8L)), g_155)) ^ g_70)))), p_90);
                        if (g_70)
                            continue;
                    }
                }
            }
            for (g_116 = 0; (g_116 > 10); g_116++)
            {
                char l_390[2][3][2] = {{{8L, 0x2EL}, {8L, 0x2EL}, {8L, 0x2EL}}, {{8L, 0x2EL}, {8L, 0x2EL}, {8L, 0x2EL}}};
                int l_420 = 0x9CF8A400L;
                unsigned l_439 = 1UL;
                char l_449[4] = {0xB5L, 0xF3L, 0xB5L, 0xF3L};
                int i, j, k;
                g_211 = 0x2A9D8A6DL;
                if (func_46(((safe_rshift_func_int16_t_s_u(((g_167 != ((func_46(l_387[1][0], g_60) != (!(((safe_sub_func_int16_t_s_s(l_390[0][2][0], func_46(((((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_mod_func_int16_t_s_s(p_90, g_128)) , (safe_rshift_func_uint16_t_u_s(0xD015L, (l_129[2] = ((l_390[0][2][0] >= 0UL) , p_90))))))), l_387[1][0])) && p_89) , l_347) , l_319[0]), g_157[2]))) , l_252) && l_398))) < 255UL)) | 0xCB22L), 11)) && l_304), l_387[3][0]))
                {
                    short l_399 = 0xB531L;
                    if (func_46(l_399, g_60))
                    {
                        l_332[3] = p_90;
                    }
                    else
                    {
                        l_332[1] = ((g_179 = g_400) , func_46(g_115, p_90));
                        return p_90;
                    }
                    l_274 = (((safe_rshift_func_uint16_t_u_s(p_90, 1)) & func_46(g_165, ((l_332[0] = l_349) < p_89))) > l_403);
                    for (l_349 = 0; (l_349 != 27); l_349++)
                    {
                        unsigned short l_406 = 0xB0CDL;
                        g_211 = l_406;
                    }
                }
                else
                {
                    char l_419[9] = {0xECL, (-1L), 0xECL, (-1L), 0xECL, (-1L), 0xECL, (-1L), 0xECL};
                    int l_429 = 0L;
                    unsigned l_432 = 1UL;
                    int i;
                    l_420 = func_46(((safe_mod_func_int32_t_s_s(func_46((l_332[1] = g_180), (l_129[2] = 0xC2651EECL)), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(p_89, ((safe_sub_func_uint16_t_u_u(p_89, func_46((((((((safe_mod_func_uint8_t_u_u(l_209, ((safe_rshift_func_uint8_t_u_s(255UL, l_419[8])) | g_128))) == 0L) >= p_90) , 0L) == l_349) < 0xE2L) ^ p_90), l_209))) || l_304))), l_305)))) >= 0xCAL), g_60);
                    for (l_403 = 2; (l_403 <= 8); l_403 += 1)
                    {
                        int i;
                        g_211 = l_419[l_403];
                        return l_419[l_403];
                    }
                    g_211 = (safe_sub_func_uint32_t_u_u(g_128, (p_90 , ((l_308 , (((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((l_347 & (l_429 = 0x94B1D945L)), (l_266 <= (g_400 != (safe_mod_func_int32_t_s_s(func_46((4294967291UL && ((func_46(l_387[1][0], g_123) , l_209) != g_126)), l_419[4]), l_432)))))), p_90)), 13)) , l_243) , l_390[0][2][0])) , l_419[8]))));
                }
                for (l_347 = (-9); (l_347 >= (-17)); l_347--)
                {
                    short l_448 = (-1L);
                    l_420 = g_116;
                    g_211 = (func_46((l_349 == (safe_div_func_int8_t_s_s(((~(safe_sub_func_uint16_t_u_u((l_420 = ((l_439 = g_180) , 65528UL)), (l_332[1] = g_123)))) > ((((l_274 = (l_450 = (safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_156, l_390[0][2][0])) <= (l_129[2] = (safe_sub_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((p_89 < ((l_448 || func_46(l_449[3], p_90)) && 65535UL)) && p_89), p_90)) & 0L), 0UL)))), 251UL)))) > g_400) , l_403) == g_179)), (-1L)))), l_266) <= l_113);
                }
                for (g_255 = 0; (g_255 < (-5)); g_255--)
                {
                    l_332[1] = p_90;
                }
            }
        }
    }
    else
    {
        unsigned char l_463 = 3UL;
        int l_479 = 1L;
        int l_504[3][6][1] = {{{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}, {{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}, {{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}};
        int l_554 = (-1L);
        unsigned short l_624[10][1][3] = {{{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}, {{1UL, 0xFC19L, 65533UL}}};
        int i, j, k;
        if (p_90)
        {
            short l_457 = 2L;
            int l_467 = 1L;
            int l_478 = 0L;
            unsigned char l_480 = 0x95L;
            l_457 = (safe_sub_func_int32_t_s_s(0x625645CFL, ((safe_rshift_func_uint16_t_u_u(0UL, 15)) == p_89)));
            for (g_167 = 5; (g_167 < 30); g_167++)
            {
                unsigned l_460[10] = {1UL, 1UL, 4294967289UL, 1UL, 1UL, 4294967289UL, 1UL, 1UL, 4294967289UL, 1UL};
                int l_464[2];
                char l_491[2][2][2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_464[i] = 0x415D4BBCL;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_491[i][j][k] = 0xEAL;
                    }
                }
                if ((0x716CD58FL != ((p_89 == (l_460[2] , (((g_400 != p_89) , (g_213 < (func_97(g_180, (p_89 == (safe_mod_func_int16_t_s_s(p_90, 0xD829L))), l_460[0], g_165, g_157[2]) , 0UL))) <= 0x2E8FL))) >= l_463)))
                {
                    l_464[1] = (p_90 >= p_90);
                    l_464[1] = (-1L);
                }
                else
                {
                    for (l_398 = 0; (l_398 <= 7); l_398 += 1)
                    {
                        int i;
                        l_129[l_398] = (-8L);
                    }
                    for (l_266 = 0; (l_266 <= 9); l_266 += 1)
                    {
                        int i;
                        g_211 = l_460[l_266];
                        g_211 = 0x4937BE94L;
                        return p_90;
                    }
                    l_478 = ((g_70 = p_89) == ((safe_mod_func_uint16_t_u_u((((((l_467 = g_11) | (g_168 == 1L)) && (p_90 , (!(((safe_div_func_uint32_t_u_u(g_116, func_46(((((func_46((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((l_479 = (+((l_129[5] = ((g_213 = ((l_460[2] > (g_255 = ((l_467 = (safe_lshift_func_int16_t_s_u(l_464[1], p_89))) > p_90))) < l_457)) , l_478)) || l_467))) || l_463), g_157[3])), 8)), 13)), g_126) < g_155) , g_168) > 0xDD20L) , l_480), p_89))) <= 0x19EDL) <= g_157[2])))) >= l_209) , l_464[1]), 0x3CB2L)) > 0xCBL));
                }
                l_491[1][1][0] = (l_457 & ((((safe_rshift_func_int8_t_s_s((g_167 ^ (((p_90 , p_90) > ((0x68D8L == 1UL) == ((safe_add_func_int16_t_s_s(g_156, ((safe_add_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(0xF0AEL, ((safe_lshift_func_uint16_t_u_u(l_464[1], 9)) >= 0x598E5964L))) || 0x7F8FA098L) >= 0x85DC4AE5L) | l_464[1]), 5L)) == p_90))) >= (-7L)))) & l_398)), 6)) | g_156) > p_90) == (-1L)));
                l_504[1][1][0] = ((l_491[1][1][0] >= (func_97(g_115, (p_90 || (l_479 >= (l_464[1] = (func_46(p_90, (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((5UL && (((((((((g_179 = ((((safe_rshift_func_uint16_t_u_s(1UL, (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((func_46(l_243, (l_504[1][1][0] = l_463)) == g_167), l_467)), 0xE310L)), p_90)))) != l_480) ^ p_89) & g_11)) , p_89) , 0x4FL) , p_90) == (-5L)) == p_90) ^ l_209) <= 1UL) >= p_89)), l_319[1])) < p_89), p_90))) , p_90)))), g_11, g_400, l_491[1][0][1]) | p_90)) == 3UL);
            }
            g_211 = func_46((251UL != (l_209 = ((l_504[1][1][0] = ((safe_lshift_func_uint8_t_u_u(l_480, 5)) , g_116)) <= g_157[2]))), (safe_rshift_func_int16_t_s_u((func_46(g_157[2], p_89) , 1L), (safe_rshift_func_uint8_t_u_s(p_90, 2)))));
        }
        else
        {
            const unsigned l_520[2] = {4294967295UL, 4294967295UL};
            int l_530 = 0xCB8FB605L;
            int i;
            if (g_167)
            {
                unsigned l_511 = 0x7F196D99L;
                l_209 = g_180;
                l_209 = ((g_157[1] ^ g_400) < func_97(l_511, (((p_89 >= (((safe_mod_func_uint32_t_u_u(p_90, ((safe_lshift_func_int8_t_s_u(p_89, 7)) && 1L))) != func_46((g_167 = (safe_sub_func_uint8_t_u_u(l_129[2], (l_520[1] > p_90)))), l_520[1])) <= (-1L))) , 0x4303L) , (-8L)), l_209, l_463, p_90));
            }
            else
            {
                short l_529 = 0L;
                int l_541 = 0x33C0940AL;
                int l_542 = 5L;
                for (p_89 = 0; (p_89 >= (-4)); p_89--)
                {
                    l_209 = p_89;
                }
                g_211 = (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0L, 10)), ((func_97(g_60, (safe_lshift_func_int16_t_s_s((l_529 = 4L), 1)), ((0xB7L < (l_542 = func_97(func_46((l_530 = g_211), (l_541 = (0UL != (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((~1L) <= (safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_155, p_89)) < p_90), g_165)) & p_90) , g_540[1])))), 3)) | g_211), p_90))))), g_400, g_255, g_180, p_89))) | l_479), g_157[2], l_266) > p_89) >= g_180)));
                l_129[2] = ((0x7AL | p_90) & ((~g_180) ^ ((((((1UL | g_60) , 0UL) | l_463) < ((safe_add_func_uint16_t_u_u(0x247EL, (!g_70))) <= g_213)) , p_90) , 0x7469EA82L)));
                return g_545[0];
            }
            return g_400;
        }
        g_211 = g_213;
        for (g_165 = 0; (g_165 >= (-3)); g_165--)
        {
            unsigned l_564[1][2];
            int l_565 = 1L;
            unsigned l_567 = 0x25088D05L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_564[i][j] = 0x00F0AE0BL;
            }
            if ((safe_lshift_func_int16_t_s_s(0xC3EEL, (safe_rshift_func_uint16_t_u_s(((((p_89 > l_129[2]) <= p_90) < (safe_rshift_func_uint8_t_u_u((func_97((p_90 == p_89), l_554, g_155, ((g_165 && l_319[0]) || l_319[0]), p_90) || g_60), g_11))) > g_156), l_129[0])))))
            {
                short l_561[4][8] = {{1L, 0x2BA0L, (-1L), 0x2BA0L, 1L, 0x88D3L, (-1L), 0x88D3L}, {1L, 0x2BA0L, (-1L), 0x2BA0L, 1L, 0x88D3L, (-1L), 0x88D3L}, {1L, 0x2BA0L, (-1L), 0x2BA0L, 1L, 0x88D3L, (-1L), 0x88D3L}, {1L, 0x2BA0L, (-1L), 0x2BA0L, 1L, 0x88D3L, (-1L), 0x88D3L}};
                int l_582 = 0xA43B761CL;
                int i, j;
                for (l_554 = 19; (l_554 <= (-14)); l_554 = safe_sub_func_int16_t_s_s(l_554, 6))
                {
                    unsigned char l_566 = 249UL;
                    int l_578[6] = {0xC429AF80L, 0xC429AF80L, 0xCFCB436FL, 0xC429AF80L, 0xC429AF80L, 0xCFCB436FL};
                    int i;
                    for (g_115 = (-14); (g_115 < 25); g_115 = safe_add_func_uint8_t_u_u(g_115, 5))
                    {
                        l_504[1][1][0] = 5L;
                    }
                    g_211 = ((safe_div_func_uint32_t_u_u(func_46(l_561[2][7], (l_504[0][5][0] = ((g_165 < (((0x63L < (safe_div_func_int16_t_s_s((((g_400 , (p_90 , p_89)) ^ ((-1L) >= ((l_565 = (p_90 & (((l_561[2][7] > g_128) || p_90) <= l_564[0][0]))) && l_504[1][1][0]))) , g_540[2]), 0x8352L))) & g_116) && l_566)) , l_567))), l_561[2][7])) && g_168);
                    l_578[5] = (0x239EL ^ ((g_157[3] = (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(g_11, p_90)), (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((0x6024L && l_129[6]) || func_46(g_115, l_561[2][7])), (safe_lshift_func_uint8_t_u_s((0xCDL != l_561[3][1]), p_89)))), p_90))))) > 0xCCF125EBL));
                }
                l_582 = (((g_540[1] >= p_90) >= ((!(g_540[1] ^ l_266)) || (func_46(g_157[2], l_564[0][0]) != ((g_11 || ((safe_div_func_int32_t_s_s(((l_243 & p_89) && p_90), 1L)) > p_90)) , g_581[3])))) >= p_89);
                for (g_126 = (-15); (g_126 > (-21)); --g_126)
                {
                    g_211 = (safe_lshift_func_int16_t_s_u(0L, 9));
                    for (l_266 = 0; (l_266 <= 3); l_266 += 1)
                    {
                        int i;
                        g_211 = ((g_157[l_266] >= (l_564[0][0] | (safe_rshift_func_uint8_t_u_u((0L < (((p_90 | (safe_div_func_int16_t_s_s((-7L), (g_540[1] = (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_504[1][0][0] = ((p_90 ^ ((g_581[3] <= p_89) >= l_319[1])) || l_582)), 0x41E0B60EL)), l_319[0])))))) ^ 0xE5L) > g_168)), 4)))) || g_157[l_266]);
                        if (g_126)
                            continue;
                    }
                }
            }
            else
            {
                const char l_609 = 0L;
                int l_623 = 0L;
                int l_625[5][1] = {{0L}, {0L}, {0L}, {0L}, {0L}};
                int i, j;
                for (g_115 = (-8); (g_115 == 45); ++g_115)
                {
                    unsigned short l_608 = 0xE5D8L;
                    int l_610 = 7L;
                    for (g_116 = 0; (g_116 > (-5)); --g_116)
                    {
                        char l_617 = 0x47L;
                        l_479 = ((safe_div_func_int32_t_s_s((func_46((g_167 = g_167), g_11) , func_46((((((safe_rshift_func_uint16_t_u_u(p_89, ((l_565 = (safe_rshift_func_uint8_t_u_s(l_605, 6))) , ((safe_rshift_func_int8_t_s_s(((l_608 = p_89) != (l_610 = (p_89 == ((g_540[1] = (((p_90 != func_46((func_46(p_89, g_540[1]) != l_609), p_89)) & (-1L)) >= l_609)) <= g_168)))), g_168)) & l_609)))) , p_90) ^ p_90) , g_180) == 0L), g_157[2])), g_157[0])) < l_554);
                        l_625[4][0] = (p_90 ^ ((l_554 = (((l_608 , 5UL) , (g_211 = p_90)) , ((((g_156 = ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((g_11 ^ (l_623 = (g_213 | (safe_div_func_int8_t_s_s((g_255 = l_617), (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u((l_617 >= p_89), 5)))) || l_609) , g_70), 11))))))), l_266)) , g_213), 2)) , l_266)) <= l_624[7][0][1]) ^ p_90) , g_123))) != g_128));
                    }
                    l_565 = ((-9L) | p_90);
                    if (g_115)
                        break;
                }
            }
        }
        g_211 = ((safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(func_97(l_209, p_90, ((((g_60 == (g_155 = ((0L < (func_46((p_89 > 0x581FA7C7L), p_89) , g_165)) != l_624[2][0][1]))) , g_545[0]) , l_209) & l_209), g_540[6], l_113), p_89)) >= g_581[3]), g_128)) , g_128), 0xE381L)) & p_89);
    }
    if ((((0x3363FF28L == p_89) <= (!(p_90 , g_540[3]))) < (safe_rshift_func_int8_t_s_s(l_319[1], ((safe_unary_minus_func_int32_t_s((safe_div_func_uint16_t_u_u((func_46(p_89, p_90) != (((func_97((l_209 = (safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((g_400 & g_168), 65526UL)), p_89)), 0)), l_647)), l_398))), p_89, p_89, l_319[0], p_89) <= 0x0207L) , g_167) && 0x4B0D9AD8L)), g_180)))) == l_398)))))
    {
        const int l_661 = 9L;
        int l_672 = 1L;
        int l_785 = 0x6D09B6B3L;
        for (g_116 = 0; (g_116 >= 11); ++g_116)
        {
            char l_660 = 0xEBL;
            unsigned l_664 = 0xC18AA77CL;
            for (l_605 = (-17); (l_605 <= 12); ++l_605)
            {
                short l_665 = 0x57D9L;
                g_211 = (safe_sub_func_uint16_t_u_u((func_46(((((safe_div_func_int16_t_s_s(((g_179 = (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_660, l_661)), (safe_rshift_func_uint16_t_u_u(func_46(l_266, func_46((0x30L || (l_664 && (g_115 & p_89))), (l_665 = (func_46(g_157[2], (p_89 , 0xF0CB5AAAL)) , g_540[2])))), g_70)))) > p_89) >= 4L)) <= p_90), 0xC551L)) < g_157[3]) & l_660) < p_90), g_115) >= 0xFFL), 8L));
            }
            return l_266;
        }
        for (g_156 = 0; (g_156 <= 3); g_156 += 1)
        {
            unsigned char l_688 = 0x8EL;
            const unsigned short l_755 = 65535UL;
            int l_771[4][5][5] = {{{0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}}, {{0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}}, {{0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}}, {{0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}, {0L, 0L, 0x3802D5ADL, 0x10AA9EFCL, 0xF1863253L}}};
            int i, j, k;
            if (p_89)
                break;
            for (g_165 = 3; (g_165 >= 0); g_165 -= 1)
            {
                unsigned l_666 = 0x7A9C0841L;
                int l_668 = (-2L);
                int l_709 = 0xD43E08B0L;
                unsigned char l_754 = 0x93L;
                unsigned short l_756 = 0x3E79L;
                if ((l_666 = 0x0ACA8592L))
                {
                    int l_671 = 0x97DC0550L;
                    int l_710 = 0xE84503CEL;
                    int i;
                    for (g_168 = 0; (g_168 <= 3); g_168 += 1)
                    {
                        short l_667 = (-1L);
                        l_668 = l_667;
                        l_671 = (safe_add_func_int8_t_s_s(func_46(g_168, g_126), p_89));
                        if (g_128)
                            break;
                        g_673 = (g_211 = (l_672 = l_671));
                    }
                    if ((((l_672 = l_666) , (g_157[g_165] = (safe_lshift_func_int16_t_s_s(((0x4FF9L == ((safe_add_func_uint32_t_u_u((((((9L && ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_168, g_60)), (safe_add_func_int8_t_s_s(((l_666 >= (l_209 == p_89)) , ((p_90 == l_209) || g_255)), p_90)))) ^ p_89)) || g_180) == l_671) , p_89) , 0xF0733122L), p_89)) , p_90)) < l_672), p_90)))) <= g_165))
                    {
                        unsigned short l_699 = 0x6094L;
                        l_710 = (safe_lshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((((((p_90 ^ (-2L)) > (l_688 = g_116)) , ((safe_add_func_uint16_t_u_u((l_129[6] = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((l_668 = (safe_sub_func_uint8_t_u_u((func_97(((((safe_lshift_func_int8_t_s_s((((func_97(func_97(g_155, p_89, g_581[3], ((((l_699 >= ((g_211 = (((g_128 = (safe_sub_func_int8_t_s_s((g_165 != ((safe_lshift_func_uint16_t_u_u((func_97((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_90, g_545[0])), p_90)), l_666, g_400, g_155, l_266) > l_699), 1)) | 7UL)), g_180))) < p_89) == 65528UL)) < g_708)) ^ p_89) && g_213) & 0x0275B6B0L), p_89), l_672, g_581[0], l_688, l_709) && g_168) < p_90) | 0UL), 0)) && 0x6D50L) != l_668) == g_11), p_89, p_90, g_179, g_213) | p_90), p_89))), g_540[0])), p_89))), (-1L))) & g_167)) ^ l_666) ^ l_209), 0xFAB8L)) ^ g_157[1]) < p_90), 14));
                    }
                    else
                    {
                        int l_711 = 1L;
                        l_129[2] = ((((((l_711 < (func_97(p_90, g_673, p_90, (func_46((safe_mod_func_int8_t_s_s(9L, 0xFCL)), l_688) , (safe_sub_func_int32_t_s_s(((l_709 , l_672) && (-6L)), p_90))), g_167) <= p_90)) != 0UL) == 1L) >= 0x823E21C9L) & l_666) <= 0x22L);
                        g_211 = 0xCC5331B2L;
                        g_211 = (((l_209 = p_90) , (func_97(g_708, g_211, (safe_lshift_func_uint8_t_u_s((g_115 = l_710), 2)), p_89, g_708) | ((safe_div_func_uint8_t_u_u((g_128 = (g_581[2] || p_89)), g_400)) >= 0x72L))) < g_545[0]);
                        g_211 = (safe_lshift_func_uint8_t_u_u(g_211, (safe_mod_func_int8_t_s_s(8L, ((((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((l_688 < (g_128 && (safe_mod_func_uint8_t_u_u((p_89 == (g_70 < (safe_rshift_func_uint16_t_u_u(func_46(g_180, (safe_add_func_uint32_t_u_u(func_46((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((~func_46(p_90, (safe_lshift_func_uint8_t_u_s((~250UL), g_179)))) & 0x9AL), l_709)), l_668)), g_180)), g_11), 8UL))), l_666)))), 246UL)))), g_70)) <= p_90), 3)) >= 3L) != p_89) || 0xD9L)))));
                    }
                    l_672 = p_90;
                }
                else
                {
                    int l_757[4][7] = {{(-1L), 0x45975FC0L, 0xEBD2927FL, 0x20C126D0L, 1L, 0x20C126D0L, 0xEBD2927FL}, {(-1L), 0x45975FC0L, 0xEBD2927FL, 0x20C126D0L, 1L, 0x20C126D0L, 0xEBD2927FL}, {(-1L), 0x45975FC0L, 0xEBD2927FL, 0x20C126D0L, 1L, 0x20C126D0L, 0xEBD2927FL}, {(-1L), 0x45975FC0L, 0xEBD2927FL, 0x20C126D0L, 1L, 0x20C126D0L, 0xEBD2927FL}};
                    int l_758 = 0x30D683B0L;
                    int i, j;
                    g_211 = (((safe_rshift_func_int16_t_s_s(0xEE5BL, 8)) < (((p_90 , ((p_90 | (g_255 = l_661)) == (0x78L <= ((g_123 = (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((l_709 = 1L) < (safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((((l_688 > (-7L)) > l_661) >= 65535UL) , g_156), 0x1007L)) != 0x6AL) > 0xCCL), 1UL))) & g_179), p_89)) || p_90), l_754))) , 5UL)))) | l_605) ^ l_755)) <= l_756);
                    l_672 = (g_211 = l_757[3][5]);
                    l_758 = (l_129[1] = 0x7B44341CL);
                }
                if (l_755)
                {
                    return p_89;
                }
                else
                {
                    char l_769 = 0x46L;
                    l_771[0][1][2] = (g_123 == ((p_89 & (l_661 , (safe_div_func_uint32_t_u_u(((p_89 != ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(0UL, ((safe_mod_func_uint8_t_u_u(0UL, (safe_sub_func_uint16_t_u_u((0xDCL && ((l_769 == (~((g_540[1] < l_755) >= l_755))) & p_89)), g_545[1])))) ^ 0x964C2B51L))), l_672)) && g_770)) < 0x5A72L), g_545[1])))) <= 0x38EAL));
                    for (g_400 = 0; (g_400 <= 1); g_400 += 1)
                    {
                        unsigned short l_772 = 5UL;
                        l_772 = (l_243 >= l_672);
                        g_211 = func_97(l_755, l_129[4], g_157[2], ((p_90 >= (l_672 && ((((l_709 = (func_46(g_770, l_772) != ((g_540[5] = (((g_115 > l_771[0][1][2]) <= l_756) > (-1L))) != 0x928BL))) < l_769) ^ g_128) < g_167))) , l_319[0]), p_89);
                        g_211 = l_129[4];
                    }
                }
                l_668 = (safe_mod_func_uint8_t_u_u(g_179, ((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(g_157[2], 3)) < l_668), 1UL)) , 0xA6L)));
                l_709 = l_756;
            }
        }
        l_787[4] = (0x4E2C8C9DL && ((l_672 = (((safe_rshift_func_int8_t_s_u(0x63L, 0)) < 0xD72DC826L) && (l_129[5] = (((((g_157[2] = (g_708 && p_90)) ^ (safe_div_func_uint32_t_u_u(((l_209 = l_319[0]) && (l_661 && (p_89 > func_97(func_46((g_213 = p_89), l_113), l_647, l_243, l_785, l_786[7][1][4])))), g_540[1]))) != p_90) ^ 0xC68DL) , g_540[5])))) , g_255));
    }
    else
    {
        short l_804 = 0x8440L;
        unsigned l_805 = 0UL;
        int l_806 = (-4L);
        int l_807 = 1L;
        short l_844 = 1L;
        const int l_898 = (-1L);
        unsigned l_1022 = 0UL;
        if (((p_89 != l_319[0]) != ((((g_708 = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(func_46((safe_lshift_func_int8_t_s_u(((l_787[0] = func_97(g_540[5], p_89, g_168, (l_129[2] = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_11, func_97((((g_213 != (p_89 <= (g_116 != 0xCD40C905L))) , l_804) < g_168), g_126, g_673, l_243, g_673))), p_89)), 10))), l_804)) & l_319[0]), 7)), p_89), g_545[0])), g_540[1])), 3)) >= l_805), 0L))) < 1L) == 2UL) ^ g_211)))
        {
            char l_817 = 9L;
            int l_818 = 0x4E6234DCL;
            l_807 = (l_806 = 0x9FD74F36L);
            l_818 = (safe_mod_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s((0x6A5FF566L <= (~(((l_129[2] = (l_806 = (l_787[1] = (0xFC545833L <= func_97((l_129[7] = (p_90 | ((p_89 || p_90) < (((l_817 = (func_97(g_167, (safe_add_func_int16_t_s_s(g_60, (((safe_rshift_func_int8_t_s_s((g_157[0] , ((g_211 = (((+(l_129[2] = (l_266 < 1UL))) == 0x3CFFB83EL) < p_90)) , 3L)), l_816)) && p_90) | 65535UL))), g_400, p_90, p_89) | l_804)) > p_89) < 0xEB538BBBL)))), l_818, p_89, p_90, p_90))))) , g_156) , 0x0B66B834L))), g_60)) <= 251UL) != p_90) & l_807) || 65534UL), g_545[1]));
        }
        else
        {
            char l_821 = 0xDFL;
            int l_822[1][1][2];
            int l_842 = (-2L);
            char l_942[8];
            char l_944 = 0xB1L;
            unsigned l_1006 = 0x6D019FE6L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_822[i][j][k] = (-1L);
                }
            }
            for (i = 0; i < 8; i++)
                l_942[i] = 0x5AL;
            for (l_113 = 0; (l_113 <= 1); l_113 += 1)
            {
                char l_828 = (-5L);
                int i;
                l_806 = 0xE321BE75L;
                if (func_46(l_319[l_113], l_129[(l_113 + 2)]))
                {
                    int i;
                    l_129[(l_113 + 2)] = (+p_89);
                    l_129[(l_113 + 2)] = (0x9AEEL != (p_90 != (l_787[3] = ((safe_mod_func_int32_t_s_s(p_89, p_89)) != (l_319[l_113] = g_255)))));
                    if (l_319[l_113])
                        break;
                }
                else
                {
                    l_821 = l_806;
                    l_822[0][0][1] = g_157[2];
                    g_211 = ((p_89 ^ func_46(g_128, p_89)) | p_89);
                }
                for (g_168 = 0; (g_168 <= 4); g_168 += 1)
                {
                    l_822[0][0][1] = p_90;
                    for (l_821 = 0; (l_821 <= 4); l_821 += 1)
                    {
                        int i, j, k;
                        return l_786[(g_168 + 1)][l_821][g_168];
                    }
                }
                for (l_266 = 4; (l_266 >= 0); l_266 -= 1)
                {
                    char l_827 = (-1L);
                    int l_829 = 0xEDA658B4L;
                    l_829 = (l_129[(l_113 + 2)] || (((((p_89 >= l_129[4]) | (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((l_806 = l_807), ((l_827 = l_822[0][0][1]) , (l_828 , 0x8EEBL)))) , 7L), p_89))) & g_60) <= 0xF3L) ^ 4UL));
                    l_807 = g_126;
                    for (p_89 = 4; (p_89 >= 0); p_89 -= 1)
                    {
                        int l_843 = 0x289E94E9L;
                        int i, j, k;
                        l_844 = ((((safe_add_func_int8_t_s_s(l_822[0][0][1], (((p_90 > l_805) != g_116) <= ((((l_842 = (l_829 ^ ((safe_div_func_uint16_t_u_u(0xBF8FL, g_60)) ^ ((safe_rshift_func_uint8_t_u_u((g_115 = (safe_mul_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_786[(l_113 + 4)][p_89][(l_113 + 2)] = (((safe_sub_func_int32_t_s_s((((((g_155 != g_157[2]) , l_827) & l_822[0][0][1]) <= 0x83C7L) && 0x210BF26DL), 0x52AEFF73L)) >= l_786[3][1][1]) , g_11)), g_157[0])), 0L))), 2)) >= g_123)))) || 0L) || g_540[1]) != 0xA2L)))) & l_843) , 0x5FL) | g_545[1]);
                        l_843 = l_806;
                    }
                }
            }
            for (g_708 = (-27); (g_708 != 35); ++g_708)
            {
                unsigned l_857 = 0x48FE92F5L;
                int l_858 = (-4L);
                g_211 = (l_129[2] = (l_807 = func_46((safe_sub_func_uint8_t_u_u(((+((p_89 < g_673) , ((l_858 = (l_647 == func_97(((l_209 = (4L > l_804)) , (0x48L || ((((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((g_581[5] && (l_816 || (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(g_60, 5)), p_90)))), l_857)), g_165)) | p_89) | l_209) && 0x96L))), p_90, g_157[2], p_89, p_89))) , p_90))) <= 0x97B78548L), g_165)), p_89)));
            }
            if (((l_822[0][0][1] = (p_89 != (safe_div_func_int16_t_s_s(g_540[1], 65535UL)))) , (safe_rshift_func_uint8_t_u_s((l_822[0][0][0] = (p_89 & (0xC3L ^ (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_129[2], ((g_400 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((func_97((l_806 ^ (((((0x9E2BL == (((((safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s((g_581[3] | 0x825BEDB8L), g_157[3])) || g_708) || 1UL), g_60)) && 0x33F2C999L), p_90)) && l_879) > 0x18A72D48L) , l_822[0][0][1]) && g_211)) & 0xE3355F22L) == l_786[8][2][4]) , g_211) >= l_807)), l_807, l_821, g_155, l_243) || 4UL) < g_156), 0xA8L)) > g_167), 2)), 7))) , g_540[1]))), g_708))))), 1))))
            {
                int l_922 = 8L;
                if ((p_90 , (l_806 = 0x41AFB5B9L)))
                {
                    char l_886 = (-1L);
                    int l_889[6][5][8] = {{{0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}}, {{0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}}, {{0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}}, {{0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}}, {{0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}}, {{0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}, {0xDC839C98L, 0x0EF48B12L, (-1L), 0x27B7C6FFL, 0xBE7C956BL, 0x40E4CB65L, 0x1B7EA412L, 0L}}};
                    int i, j, k;
                    for (g_167 = 1; (g_167 <= 7); g_167 += 1)
                    {
                        int i;
                        l_889[1][2][3] = ((safe_sub_func_uint16_t_u_u(0xC6CBL, ((safe_add_func_uint8_t_u_u((l_129[g_167] , ((l_822[0][0][1] = ((g_179 = (((safe_lshift_func_uint16_t_u_s(65535UL, 12)) | l_786[7][1][4]) > func_46(l_886, (safe_lshift_func_uint16_t_u_u((~p_89), (l_209 < (1L <= func_46(p_89, g_179)))))))) <= 1L)) < 0x2AL)), 0L)) && p_90))) < p_89);
                        l_129[g_167] = ((safe_mod_func_uint32_t_u_u((l_842 , p_90), g_116)) || (g_70 = (g_770 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(g_128, (safe_mod_func_uint8_t_u_u((g_115 = p_90), ((l_786[7][1][4] ^ g_180) ^ ((l_898 & g_155) > g_673)))))) <= g_545[1]), p_90)))));
                        l_842 = (l_889[1][1][3] = 0x5923EA82L);
                    }
                    l_922 = (g_211 = ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(g_545[0], l_816)), (safe_lshift_func_int16_t_s_s(p_89, 2)))), 12)), g_179)), (0xE6DBL || (+(g_921 = (g_180 = ((safe_add_func_int16_t_s_s((~l_889[1][2][3]), (safe_lshift_func_int16_t_s_u(g_179, func_97((safe_lshift_func_int16_t_s_s((p_90 , ((g_126 < g_157[0]) , 9L)), 12)), l_889[1][2][3], p_89, l_879, g_70))))) == l_804))))))), 1)), g_545[0])) <= p_90));
                }
                else
                {
                    for (p_90 = 0; (p_90 <= 6); p_90 += 1)
                    {
                        g_211 = 0x5B76AB42L;
                    }
                }
                for (g_128 = 1; (g_128 <= 7); g_128 += 1)
                {
                    int i;
                    if (l_129[g_128])
                        break;
                    return g_115;
                }
            }
            else
            {
                unsigned l_943 = 0x7BAFA885L;
                int l_945 = (-1L);
                int l_964 = 0L;
                l_945 = (l_129[2] = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_927 < (safe_mod_func_uint16_t_u_u(func_46((((safe_mod_func_int32_t_s_s((l_807 = 8L), (safe_lshift_func_uint16_t_u_u((l_943 = ((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_u(0x3A6CL, p_89)) <= (l_842 = 1L)) ^ (safe_rshift_func_int8_t_s_u((g_168 == p_90), 3))) == g_115) , g_165), 7)), 0xA4L)) > l_822[0][0][0]) , l_806) < l_942[5])), p_89)))) ^ 0xBFL) , g_128), g_179), g_116))), l_944)), 1)));
                l_945 = ((((((safe_mod_func_uint32_t_u_u((l_787[4] <= (g_70 = ((safe_sub_func_uint32_t_u_u(l_787[5], (g_157[2] = (((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_int8_t_s_u((-1L), 3)) , (0x6EL > (g_156 = ((l_842 = (safe_sub_func_int32_t_s_s(g_126, (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((l_945 && l_822[0][0][0]) & (safe_rshift_func_int8_t_s_u((l_964 = (g_179 | (safe_lshift_func_int16_t_s_s((func_46((l_807 = l_807), p_89) == l_943), 9)))), l_816))), g_165)), 0x3F06A7FBL))))) | (-1L))))) || 3L) <= 3L) , l_943), l_898)) | l_398) && g_673)))) <= 0x84L))), g_179)) , 0x91L) == g_115) , g_965) & p_90) || 4294967288UL);
                if (((((((safe_div_func_int16_t_s_s(0x7DAFL, (g_965 ^ l_786[7][1][4]))) , (safe_mod_func_int8_t_s_s(l_842, l_942[5]))) <= ((safe_add_func_uint16_t_u_u(((l_787[3] = ((p_89 < (safe_rshift_func_int16_t_s_u(g_770, 1))) , (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0UL, (safe_rshift_func_int8_t_s_s(5L, 7)))), p_89)), (-6L))), 4)))) > l_398), 0L)) >= 0x3EL)) < p_90) != l_964) , 0L))
                {
                    unsigned l_1005 = 0UL;
                    int l_1007 = (-6L);
                    g_211 = (safe_div_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s(g_157[2], 9)))) || (safe_div_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((l_1000[3][0] = ((l_945 = l_898) || (~l_964))), ((safe_lshift_func_uint16_t_u_u(((((1L || (0x8C66L != g_179)) && (4294967295UL && func_97((l_1005 = (safe_sub_func_uint8_t_u_u(p_89, 5L))), l_1006, p_89, p_89, l_1007))) != p_89) == 0xC3FEA7FFL), 15)) , l_879))) < 0L), 0x113CL)) , 0xF7L) < 5L) >= g_211), g_180))), 0xFC7CDD5FL)) <= l_821) == l_822[0][0][1]), g_581[2]));
                    for (l_1005 = 0; (l_1005 > 58); l_1005++)
                    {
                        g_211 = g_155;
                    }
                }
                else
                {
                    for (l_806 = 0; l_806 < 9; l_806 += 1)
                    {
                        for (g_673 = 0; g_673 < 5; g_673 += 1)
                        {
                            for (g_155 = 0; g_155 < 5; g_155 += 1)
                            {
                                l_786[l_806][g_673][g_155] = 0xEAL;
                            }
                        }
                    }
                }
                l_1022 = (+((((safe_sub_func_int16_t_s_s(g_167, (safe_sub_func_uint16_t_u_u((l_807 = p_90), (0L == func_46(func_97(l_945, (l_822[0][0][1] = (g_1021 = (g_211 = ((((p_89 && (func_46((func_97(g_540[6], l_822[0][0][1], (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((l_842 = (safe_unary_minus_func_uint32_t_u((0x3300E6CDL < (safe_div_func_int16_t_s_s(0L, 0x6B76L)))))) > p_90), 0x521DL)), 0xBE52L)), g_116, g_545[0]) ^ g_255), g_157[0]) , l_243)) == 0L) , 0xB8EAL) > 65534UL)))), p_89, g_165, g_180), l_805)))))) & 5L) != 0x5FL) > l_844));
            }
        }
        g_1025 = ((((((g_211 = p_89) <= (safe_div_func_uint32_t_u_u(g_965, 0x89004967L))) < 0L) & (l_807 = l_1022)) > 3L) , g_770);
    }
    return g_921;
}







static short func_97(unsigned short p_98, int p_99, unsigned char p_100, int p_101, unsigned char p_102)
{
    unsigned l_114[2];
    int l_122 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_114[i] = 0x6012C46BL;
    for (g_70 = 0; (g_70 <= 1); g_70 += 1)
    {
        int i;
        g_115 = l_114[g_70];
    }
    g_116 = l_114[0];
    for (p_101 = 0; (p_101 <= (-6)); p_101 = safe_sub_func_int16_t_s_s(p_101, 2))
    {
        short l_121 = 0x1570L;
        p_99 = ((safe_lshift_func_int8_t_s_u(((l_121 = p_100) || (l_122 = g_116)), 7)) && (g_123 = (func_46(g_60, (l_121 < g_115)) , 0xAE40L)));
        for (g_116 = 0; (g_116 < 1); g_116++)
        {
            g_126 = l_121;
        }
        p_99 = (-1L);
    }
    return p_98;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_540[i], "g_540[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_545[i], "g_545[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_581[i], "g_581[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1312, "g_1312", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1339[i], "g_1339[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1401, "g_1401", print_hash_value);
    transparent_crc(g_1476, "g_1476", print_hash_value);
    transparent_crc(g_1540, "g_1540", print_hash_value);
    transparent_crc(g_1551, "g_1551", print_hash_value);
    transparent_crc(g_1649, "g_1649", print_hash_value);
    transparent_crc(g_1652, "g_1652", print_hash_value);
    transparent_crc(g_1746, "g_1746", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1819[i][j], "g_1819[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1991[i][j], "g_1991[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2095[i], "g_2095[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2202[i], "g_2202[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2224, "g_2224", print_hash_value);
    transparent_crc(g_2226, "g_2226", print_hash_value);
    transparent_crc(g_2278, "g_2278", print_hash_value);
    transparent_crc(g_2310, "g_2310", print_hash_value);
    transparent_crc(g_2449, "g_2449", print_hash_value);
    transparent_crc(g_2471, "g_2471", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2505[i][j][k], "g_2505[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2557, "g_2557", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_2631[i][j][k], "g_2631[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2682[i], "g_2682[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2806, "g_2806", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
