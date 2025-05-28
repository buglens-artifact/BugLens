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


struct S0 {
   int f0;
   int f1;
};

union U1 {
   unsigned f0;
   short f1;
   volatile unsigned f2;
   volatile int f3;
};

union U2 {
   int f0;
   volatile unsigned f1;
   unsigned f2;
};


static volatile unsigned short g_2 = 65535UL;
static volatile short g_3 = 0x63E3L;
static char g_23 = 0x18L;
static unsigned short g_50[10] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL,3UL};
static short g_51 = (-3L);
static struct S0 g_87 = {0xDA668E54L,0x06CD8FDAL};
static unsigned g_88 = 0x7A9E2142L;
static short g_315 = 0L;
static unsigned short g_319 = 65532UL;
static const struct S0 g_324 = {-1L,-2L};
static union U1 g_327 = {3UL};
static volatile union U2 g_370[10][10][2] = {{{{-3L},{-1L}},{{-1L},{1L}},{{0xDA14404AL},{0x36C28093L}},{{0x902455BDL},{0x9A611628L}},{{0x3A50FD07L},{-1L}},{{-1L},{-3L}},{{0x9A611628L},{-3L}},{{-1L},{-1L}},{{0x3A50FD07L},{0x9A611628L}},{{0x902455BDL},{0x36C28093L}}},{{{0xDA14404AL},{1L}},{{-1L},{-1L}},{{-3L},{-3L}},{{2L},{0x3A50FD07L}},{{0xDBB70BC0L},{-1L}},{{0x44F5741FL},{5L}},{{0xF757C66EL},{0x44F5741FL}},{{0x36C28093L},{3L}},{{-1L},{0x857CA6B2L}},{{2L},{0x8222B4EFL}}},{{{0x857CA6B2L},{5L}},{{-3L},{0xEB73DFDAL}},{{1L},{0xF757C66EL}},{{0xF757C66EL},{-1L}},{{-1L},{0x902455BDL}},{{3L},{-1L}},{{0x3A50FD07L},{0xDBB70BC0L}},{{0xEB73DFDAL},{1L}},{{-1L},{0x44F5741FL}},{{0xDBB70BC0L},{0x44F5741FL}}},{{{-1L},{1L}},{{0xEB73DFDAL},{0xDBB70BC0L}},{{0x3A50FD07L},{-1L}},{{3L},{0x902455BDL}},{{-1L},{-1L}},{{0xF757C66EL},{0xF757C66EL}},{{1L},{0xEB73DFDAL}},{{-3L},{5L}},{{0x857CA6B2L},{0x8222B4EFL}},{{2L},{0x857CA6B2L}}},{{{-1L},{0x36C28093L}},{{-1L},{0x857CA6B2L}},{{2L},{0x8222B4EFL}},{{0x857CA6B2L},{5L}},{{-3L},{0xEB73DFDAL}},{{1L},{0xF757C66EL}},{{0xF757C66EL},{-1L}},{{-1L},{0x902455BDL}},{{3L},{-1L}},{{0x3A50FD07L},{0xDBB70BC0L}}},{{{0xEB73DFDAL},{1L}},{{-1L},{0x44F5741FL}},{{0xDBB70BC0L},{0x44F5741FL}},{{-1L},{1L}},{{0xEB73DFDAL},{0xDBB70BC0L}},{{0x3A50FD07L},{-1L}},{{3L},{0x902455BDL}},{{-1L},{-1L}},{{0xF757C66EL},{0xF757C66EL}},{{1L},{0xEB73DFDAL}}},{{{-3L},{5L}},{{0x857CA6B2L},{0x8222B4EFL}},{{2L},{0x857CA6B2L}},{{-1L},{0x36C28093L}},{{-1L},{0x857CA6B2L}},{{2L},{0x44F5741FL}},{{0x902455BDL},{-3L}},{{5L},{-1L}},{{0x9A611628L},{0x8222B4EFL}},{{0x8222B4EFL},{1L}}},{{{0xEB73DFDAL},{3L}},{{-3L},{2L}},{{0x36C28093L},{-1L}},{{-1L},{0xDA14404AL}},{{1L},{1L}},{{-1L},{1L}},{{1L},{0xDA14404AL}},{{-1L},{-1L}},{{0x36C28093L},{2L}},{{-3L},{3L}}},{{{0xEB73DFDAL},{1L}},{{0x8222B4EFL},{0x8222B4EFL}},{{0x9A611628L},{-1L}},{{5L},{-3L}},{{0x902455BDL},{0x44F5741FL}},{{0x3BCFAC44L},{0x902455BDL}},{{2L},{0xF757C66EL}},{{2L},{0x902455BDL}},{{0x3BCFAC44L},{0x44F5741FL}},{{0x902455BDL},{-3L}}},{{{5L},{-1L}},{{0x9A611628L},{0x8222B4EFL}},{{0x8222B4EFL},{1L}},{{0xEB73DFDAL},{3L}},{{-3L},{2L}},{{0x36C28093L},{-1L}},{{-1L},{0xDA14404AL}},{{1L},{1L}},{{-1L},{1L}},{{1L},{0xDA14404AL}}}};
static union U2 g_378[1][7][4] = {{{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}}}};
static union U2 g_466 = {0L};
static volatile union U2 g_480 = {0x43AD8196L};
static volatile union U2 g_484 = {-9L};
static volatile union U2 g_489 = {0x9CA976F1L};
static union U2 g_524 = {7L};
static unsigned g_555 = 1UL;
static volatile union U2 g_586 = {-10L};
static short g_595 = (-1L);
static unsigned short g_610 = 0x0529L;
static volatile char g_636 = 0L;
static unsigned short g_770[8][2][8] = {{{65531UL,4UL,65531UL,65530UL,0x5A54L,0x864AL,4UL,65534UL},{0x7982L,4UL,65533UL,0UL,1UL,0UL,0x5A54L,65533UL}},{{0x7982L,1UL,4UL,1UL,0x5A54L,0UL,0UL,0x5A54L},{65531UL,0UL,0UL,65531UL,65529UL,65534UL,4UL,65530UL}},{{65530UL,0x0EA1L,0xC597L,65533UL,0UL,65530UL,65529UL,1UL},{9UL,0x0EA1L,65531UL,4UL,0UL,65534UL,0x0EA1L,65534UL}},{{1UL,0UL,0xDBB4L,0UL,1UL,0UL,0UL,0xDBB4L},{0xF5EBL,1UL,0x5A54L,0xC597L,65530UL,0UL,0UL,0UL}},{{65534UL,4UL,0x5A54L,65531UL,65529UL,0x864AL,0UL,0UL},{65530UL,4UL,0xDBB4L,0xDBB4L,4UL,65530UL,0x0EA1L,0xC597L}},{{0x864AL,65529UL,65531UL,0x5A54L,4UL,65534UL,65529UL,65534UL},{0UL,65530UL,0xC597L,0x5A54L,1UL,0xF5EBL,65533UL,1UL}},{{0x864AL,65534UL,65532UL,0UL,65532UL,65534UL,0x864AL,0xDBB4L},{65529UL,0xDBB4L,65533UL,0x0EA1L,4UL,65529UL,0xC597L,65532UL}},{{1UL,0UL,0x7982L,1UL,4UL,1UL,0x5A54L,0UL},{65529UL,0UL,0x0EA1L,65532UL,65532UL,0x0EA1L,0UL,65529UL}}};
static struct S0 g_801 = {1L,4L};



static unsigned func_1(void);
static const short func_10(unsigned p_11);
static unsigned func_12(unsigned short p_13, unsigned p_14, unsigned p_15, const struct S0 p_16, unsigned p_17);
static unsigned short func_20(int p_21, int p_22);
static struct S0 func_28(const unsigned p_29, unsigned p_30, const unsigned p_31, unsigned short p_32);
static short func_35(unsigned p_36);
static unsigned func_38(struct S0 p_39, unsigned p_40);
static short func_61(const struct S0 p_62, const char p_63);
static unsigned short func_67(short p_68, const unsigned p_69, int p_70);
static struct S0 func_75(unsigned p_76, short p_77, unsigned char p_78, unsigned short p_79, unsigned p_80);
static unsigned func_1(void)
{
    int l_322 = 8L;
    const short l_323 = 1L;
    unsigned l_669 = 4294967289UL;
    int l_670 = (-9L);
    struct S0 l_677 = {9L,0x1D92D36BL};
    short l_744 = 0x98ACL;
    g_3 = g_2;
    l_670 &= (((0xC0L >= (safe_mod_func_int16_t_s_s(0L, ((safe_mod_func_int16_t_s_s(func_10(func_12(g_2, (((((-9L) & (safe_lshift_func_uint8_t_u_u((((0xA81AL >= func_20(g_23, g_23)) && func_67(((!1L) , 0xBCDFL), g_87.f1, l_322)) <= l_323), g_315))) , 0x077EL) && (-2L)) > (-2L)), l_323, g_324, g_50[4])), g_50[3])) && 0x4FL)))) | g_610) , l_669);
    if ((((safe_lshift_func_int16_t_s_u(0x08BBL, 14)) || g_87.f0) , func_12(g_480.f2, (safe_rshift_func_uint8_t_u_s((l_322 , g_595), 2)), ((l_669 , (((0x51L <= l_670) && l_670) | l_323)) > l_322), g_324, l_323)))
    {
        const short l_675 = 0L;
        int l_682 = 1L;
        unsigned short l_691 = 65533UL;
        unsigned char l_705 = 255UL;
        struct S0 l_721[9] = {{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L},{0xDAF91CADL,0x53F23169L}};
        unsigned l_745 = 0xCF917786L;
        unsigned l_756 = 0xAC23A748L;
        int l_760 = 0x1ACF14ABL;
        unsigned char l_790 = 1UL;
        int i;
        if ((g_466.f2 >= g_23))
        {
            unsigned l_676[1][10][7] = {{{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967292UL,1UL,0xC2C25BFDL,0x2DF50BB7L},{0x2DF50BB7L,0xC2C25BFDL,1UL,4294967294UL,0xC2C25BFDL,4294967292UL,0xB96E259FL},{0xB96E259FL,4294967292UL,0xC2C25BFDL,4294967294UL,0xC2C25BFDL,4294967292UL,0xB96E259FL},{0xB96E259FL,4294967292UL,0xC2C25BFDL,4294967294UL,0xC2C25BFDL,4294967292UL,0xB96E259FL}}};
            int l_692 = 1L;
            int i, j, k;
            l_677 = func_75(((g_319 & l_675) & (0x19L > (func_35(l_675) ^ 0xBB124CD3L))), (func_67((func_38(g_87, l_676[0][4][2]) != 2L), l_323, l_669) , g_480.f1), l_669, g_610, g_466.f2);
            for (g_315 = (-13); (g_315 >= (-5)); ++g_315)
            {
                g_489.f0 |= l_675;
                for (l_677.f1 = (-18); (l_677.f1 < (-16)); l_677.f1 = safe_add_func_int32_t_s_s(l_677.f1, 5))
                {
                    int l_700 = 0x7B3C2092L;
                    for (g_87.f0 = 0; (g_87.f0 >= 0); g_87.f0 -= 1)
                    {
                        int i, j, k;
                        l_682 = (l_676[g_87.f0][(g_87.f0 + 7)][(g_87.f0 + 3)] , l_676[0][3][1]);
                        g_87.f1 = func_35((func_67(g_489.f0, (g_315 <= ((safe_rshift_func_uint8_t_u_s(1UL, 2)) >= (g_50[4] != (safe_add_func_uint32_t_u_u(g_23, (0xF3L && (l_323 , ((safe_lshift_func_int16_t_s_u(((func_38(g_324, (safe_sub_func_uint16_t_u_u(l_677.f0, 0x33D0L))) < l_691) <= g_319), 9)) <= l_692)))))))), l_675) && l_669));
                        g_524.f0 &= (safe_unary_minus_func_uint32_t_u((g_378[0][2][2].f2 | (((safe_rshift_func_uint16_t_u_s(65530UL, (safe_mod_func_int32_t_s_s(((0UL < l_676[g_87.f0][(g_87.f0 + 7)][(g_87.f0 + 3)]) == (65535UL >= ((g_324.f0 , (-1L)) | g_480.f0))), l_700)))) , g_489.f1) ^ l_676[0][8][0]))));
                        g_370[8][3][0].f0 = g_88;
                    }
                }
            }
            g_484.f0 = (-3L);
        }
        else
        {
            unsigned l_701 = 1UL;
            int l_715[9];
            int i;
            for (i = 0; i < 9; i++)
                l_715[i] = 0xEE1D9DC8L;
            if (func_20(g_586.f1, l_701))
            {
                short l_706 = 0x01DFL;
                g_378[0][2][2].f0 = 8L;
                g_370[8][3][0].f0 = g_484.f0;
                for (l_691 = 0; (l_691 != 35); ++l_691)
                {
                    char l_716[1];
                    struct S0 l_724 = {-7L,0x0482D33CL};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_716[i] = 0x6CL;
                    l_716[0] |= (((safe_unary_minus_func_int16_t_s(((+(l_705 & 0x127CL)) ^ g_319))) > 0x99899160L) , (l_706 != ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(l_706, 9)) & g_555), ((0UL | ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((l_677.f0 && l_701), l_701)), l_701)) ^ l_677.f0)) && l_715[8]))) == 0x40EFD758L)));
                    l_724 = func_28((((((l_669 >= (safe_add_func_uint32_t_u_u(g_524.f0, (g_466.f2 || l_682)))) >= (safe_add_func_int32_t_s_s((l_721[5] , l_715[8]), (((safe_rshift_func_uint16_t_u_s(65535UL, 14)) > l_706) && func_38((g_327 , l_677), g_466.f2))))) > 0xFEL) < g_324.f1) <= g_88), l_716[0], g_315, l_706);
                    return g_484.f0;
                }
                g_87 = l_677;
            }
            else
            {
                for (g_555 = 0; (g_555 <= 1); g_555 += 1)
                {
                    g_87.f0 = l_670;
                    return l_691;
                }
                for (g_466.f0 = 0; (g_466.f0 <= 0); g_466.f0 += 1)
                {
                    unsigned char l_731 = 0xC1L;
                    g_489.f0 = ((((safe_rshift_func_int8_t_s_s(l_701, 0)) == (((((safe_add_func_uint16_t_u_u((g_370[8][3][0].f1 & (safe_sub_func_uint8_t_u_u(l_731, l_669))), (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, (((func_61(g_87, ((l_715[3] , (safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s(l_715[8], ((((((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((-7L), g_87.f1)), g_50[1])) < l_715[4]) || l_701) != 0xE0L) , l_744) ^ 0x02F87CB3L))) >= 0x95L) >= g_466.f2), (-1L)))) <= 65533UL)) > 0x22L) == 0x19L) , l_715[8]))), 0xE2L)))) == l_745) | g_324.f0) & g_324.f0) | (-1L))) , g_466.f1) < g_378[0][2][2].f0);
                    return l_744;
                }
            }
        }
        if (g_319)
        {
            short l_757[4] = {0L,0L,0L,0L};
            int i;
            return l_757[0];
        }
        else
        {
            l_677.f1 ^= 0xD47CF4BDL;
        }
        if (l_745)
        {
            const struct S0 l_769 = {0xA329FEDFL,0L};
            int l_775 = 0x4464EF92L;
            if ((func_20((((safe_add_func_int32_t_s_s(l_760, (((((func_67(l_721[5].f0, (g_586.f1 || (safe_sub_func_uint16_t_u_u(g_378[0][2][2].f0, (safe_mod_func_int8_t_s_s((~(g_324 , (((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((func_61(func_28(l_705, g_595, g_466.f1, func_12(l_760, g_319, l_677.f0, l_769, g_595)), g_324.f1) , l_721[5].f1) != l_769.f0), l_721[5].f1)), 7)) , 0x5F0FL) > g_50[4]))), l_744))))), g_770[5][1][4]) > 0xFE45L) , 0xCA83L) ^ g_327.f1) ^ 0xE043E052L) > 65526UL))) , l_322) && l_744), g_555) < l_760))
            {
                l_775 = (safe_sub_func_uint8_t_u_u(((((g_327 , (safe_add_func_uint16_t_u_u((g_324 , l_682), (((((((l_721[5].f1 || (g_87.f1 & 0x78E2L)) >= 0x38DCL) ^ func_38(func_75(g_524.f2, g_327.f1, l_705, l_669, g_324.f0), g_23)) & l_677.f0) != l_769.f1) , g_489.f0) != g_324.f1)))) && g_50[9]) , g_636) == 1L), l_323));
            }
            else
            {
                short l_794 = 0L;
                struct S0 l_807 = {-8L,0x5CE49E2DL};
                if ((g_50[9] & ((safe_rshift_func_int8_t_s_s((-9L), 5)) , ((safe_rshift_func_uint16_t_u_s(0xDAF1L, 11)) == (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(1UL, ((safe_lshift_func_uint8_t_u_s((l_322 & (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_745, ((l_744 & 0x589AL) == g_595))), l_769.f0))), l_790)) ^ 65535UL))), 6))))))
                {
                    unsigned short l_795 = 1UL;
                    int l_800 = 1L;
                    unsigned l_806 = 1UL;
                    g_801 = func_75((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((func_35(l_794) == g_480.f0))), g_50[8])), ((2L && ((l_795 != 0x7E86F757L) >= ((((safe_lshift_func_uint8_t_u_u(g_324.f1, func_12(((safe_sub_func_int16_t_s_s((func_12(g_610, g_524.f0, g_50[7], g_87, l_795) , 6L), g_324.f1)) <= g_324.f1), g_770[5][1][4], g_88, g_324, g_319))) && (-1L)) , g_327.f1) < l_800))) | l_794), l_794, g_315, l_800);
                    g_484.f0 = g_555;
                    g_87.f0 &= g_466.f0;
                    l_807 = func_75((g_23 || l_794), l_323, g_770[1][1][3], (func_67(l_794, ((safe_rshift_func_uint8_t_u_u(g_324.f0, 4)) <= (func_12(g_801.f1, l_323, ((safe_sub_func_int8_t_s_s((~((g_524.f2 , 0x5FL) <= 1L)), g_480.f2)) , l_800), g_324, l_769.f1) > g_555)), l_323) & g_524.f2), l_806);
                }
                else
                {
                    unsigned l_808[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_808[i][j] = 4294967294UL;
                    }
                    l_808[1][0] &= g_50[7];
                    return g_480.f0;
                }
            }
            for (g_87.f1 = 0; (g_87.f1 <= 18); g_87.f1++)
            {
                unsigned l_823 = 7UL;
                g_87.f0 ^= (safe_add_func_int16_t_s_s(((l_744 , ((g_489.f2 > (safe_mod_func_int16_t_s_s((+l_769.f0), ((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(g_319, g_801.f0)) <= (safe_add_func_int8_t_s_s((0UL ^ 0x3048C31EL), (safe_rshift_func_int8_t_s_s(func_67((((l_823 != l_677.f1) | l_760) , (-1L)), l_823, g_378[0][2][2].f0), l_823))))), g_315)) , g_319)))) >= l_756)) != l_705), g_524.f0));
            }
            for (g_801.f0 = 0; (g_801.f0 < 16); g_801.f0 = safe_add_func_uint16_t_u_u(g_801.f0, 2))
            {
                l_721[5].f0 &= g_524.f1;
            }
        }
        else
        {
            int l_830 = (-1L);
            struct S0 l_839[3][10][3] = {{{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}}},{{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}}},{{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}},{{7L,0xA68A8D66L},{0x30439DD9L,0xE22584AAL},{0x30439DD9L,0xE22584AAL}},{{0xC245A998L,8L},{0xDF3FD1C7L,0x9EC86483L},{0xDF3FD1C7L,0x9EC86483L}}}};
            int i, j, k;
            for (l_682 = 0; (l_682 < 10); l_682 = safe_add_func_int32_t_s_s(l_682, 9))
            {
                g_480.f0 = l_677.f1;
                l_721[5].f0 = ((g_524.f0 == ((safe_sub_func_int8_t_s_s(l_830, ((safe_add_func_uint8_t_u_u(l_744, 1L)) >= (safe_add_func_int8_t_s_s(0L, (g_480.f1 , (0x40L != (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_323, l_790)), g_610))))))))) , g_489.f0)) <= 0x60L);
            }
            g_801.f0 = (g_466.f0 >= g_370[8][3][0].f0);
            l_721[7] = l_839[1][0][0];
        }
        return l_323;
    }
    else
    {
        g_378[0][2][2].f0 ^= g_50[4];
        l_677 = l_677;
        l_670 = func_35((!g_610));
    }
    return g_489.f1;
}







static const short func_10(unsigned p_11)
{
    unsigned l_329[10][1] = {{0xA96AABE2L},{9UL},{0xA96AABE2L},{9UL},{0xA96AABE2L},{9UL},{0xA96AABE2L},{9UL},{0xA96AABE2L},{9UL}};
    char l_354 = 0x1BL;
    int l_357 = 0xE194CD54L;
    unsigned char l_447[7] = {250UL,0xF4L,250UL,250UL,0xF4L,250UL,250UL};
    struct S0 l_451 = {0L,-5L};
    struct S0 l_517 = {0x0F27EBF0L,3L};
    struct S0 l_605 = {-5L,2L};
    struct S0 l_623 = {0L,0xF288E209L};
    unsigned char l_637 = 0xB4L;
    int l_641 = 0x3E4DE13EL;
    char l_650 = 0x7DL;
    int i, j;
    g_87.f0 = func_38(g_324, p_11);
    if ((safe_sub_func_int32_t_s_s((g_327 , p_11), (((safe_unary_minus_func_int32_t_s((l_329[8][0] , p_11))) > 0x84L) , (((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(l_329[8][0], 1)), (g_50[2] <= (p_11 | ((safe_sub_func_int32_t_s_s((0xA03AC845L ^ 0x1BC2BF2AL), g_327.f0)) > l_329[3][0]))))) >= (-2L)) , 1L)))))
    {
        int l_338[1][4];
        unsigned l_339 = 4294967289UL;
        struct S0 l_375 = {-8L,0xE42C7A6FL};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_338[i][j] = 0x072635CBL;
        }
        for (g_87.f1 = 0; (g_87.f1 >= (-30)); --g_87.f1)
        {
            unsigned char l_340 = 0x44L;
            l_339 &= l_338[0][1];
            for (g_23 = 0; (g_23 >= 0); g_23 -= 1)
            {
                int l_341 = 1L;
                int i, j;
                if ((l_329[(g_23 + 4)][g_23] , l_340))
                {
                    for (g_319 = 0; (g_319 <= 9); g_319 += 1)
                    {
                        if (p_11)
                            break;
                        l_341 = l_329[(g_23 + 4)][g_23];
                    }
                    for (g_319 = 0; (g_319 <= 9); g_319 += 1)
                    {
                        g_87.f0 = (safe_sub_func_uint32_t_u_u(0x5B09196AL, g_51));
                        if (p_11)
                            break;
                        return g_327.f2;
                    }
                    if (l_329[8][0])
                        continue;
                    l_338[0][1] |= p_11;
                }
                else
                {
                    g_87.f0 = g_23;
                }
            }
            l_357 = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((g_50[4] <= (safe_lshift_func_int8_t_s_u((g_315 , (safe_add_func_uint32_t_u_u(0x22C54A04L, 1L))), g_50[4]))), ((safe_lshift_func_uint8_t_u_u((g_3 ^ l_354), 2)) == (safe_rshift_func_int8_t_s_u(g_50[3], 0))))), 0)) >= g_327.f1) == 0UL);
            g_87.f0 |= (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(l_340, (g_23 ^ p_11))), g_324.f1));
        }
        l_357 = (0x0A744752L || ((safe_add_func_int16_t_s_s(func_38(func_75(l_329[7][0], l_339, ((safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(((g_2 , ((safe_add_func_int32_t_s_s(p_11, (g_370[8][3][0] , l_338[0][1]))) && l_329[9][0])) ^ 0xD3999685L), l_338[0][0])) == g_324.f0) && g_370[8][3][0].f0), p_11)) , 0x61L), g_324.f1, l_329[8][0]), l_339), g_87.f0)) != g_50[0]));
        l_375 = func_75((5L || 0x60FD8510L), (safe_sub_func_uint16_t_u_u((l_354 | ((safe_mod_func_uint16_t_u_u((((((g_370[8][3][0].f0 | 0UL) , (g_370[8][3][0].f2 == (p_11 >= (p_11 & p_11)))) & p_11) || p_11) & g_23), 0xD270L)) | (-1L))), g_51)), l_357, g_87.f1, g_23);
        l_357 = (func_67(l_339, (safe_sub_func_int16_t_s_s((((l_329[8][0] == 0UL) , 0x50CBL) > 0xBDF0L), (p_11 ^ (g_378[0][2][2] , (((g_327.f2 < (3L ^ 0xEE6C4334L)) >= 0UL) == 65535UL))))), p_11) , (-2L));
    }
    else
    {
        const unsigned l_384 = 0x5993346FL;
        int l_403 = 0xFEB35889L;
        short l_448 = 0xFA66L;
        struct S0 l_512 = {0x9DCB7F03L,7L};
        short l_519[1][6] = {{0xAB4EL,0xAB4EL,0xAB4EL,0xAB4EL,0xAB4EL,0xAB4EL}};
        short l_590 = 0x3B90L;
        int i, j;
        g_378[0][2][2].f0 = ((0x9D98AC88L && ((g_370[8][3][0].f1 & ((0xC72EL < 0UL) > l_329[7][0])) , (safe_rshift_func_int16_t_s_u(0x06E6L, 12)))) > (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(0UL)), func_20(p_11, (p_11 == l_384)))));
        if (p_11)
        {
            unsigned char l_385 = 8UL;
            char l_392 = (-4L);
            g_378[0][2][2].f0 &= ((l_385 & (safe_rshift_func_int8_t_s_u(g_87.f0, 4))) && ((g_50[4] != (safe_lshift_func_int8_t_s_s(1L, 1))) != ((safe_add_func_int8_t_s_s((!g_327.f2), (l_392 != (safe_rshift_func_uint16_t_u_s((p_11 ^ (p_11 < ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((p_11 < 0xBE5E4DD8L), 0xEFL)), 14)) <= (-1L)))), g_324.f1))))) > p_11)));
        }
        else
        {
            short l_407 = 1L;
            int l_408 = 1L;
            struct S0 l_452 = {1L,0xA30AB16BL};
            const struct S0 l_525 = {-10L,0xDD7A8A2FL};
            if (p_11)
            {
                struct S0 l_405 = {0xC2729B18L,-9L};
                for (g_327.f0 = 0; (g_327.f0 <= 18); ++g_327.f0)
                {
                    unsigned l_404 = 0xA0E34CA7L;
                    char l_406 = 0x65L;
                    for (l_354 = 0; (l_354 == 16); ++l_354)
                    {
                        l_403 = 0xA5429BD0L;
                        l_405 = func_75(g_378[0][2][2].f1, func_38(g_324, p_11), ((l_404 >= g_378[0][2][2].f2) , ((1UL ^ (0xD5A57667L & (g_378[0][2][2].f0 ^ 0xEFD1B7BAL))) == l_354)), g_324.f0, l_357);
                        g_87.f1 |= (l_406 & 0x17DBL);
                        if (g_370[8][3][0].f2)
                            break;
                    }
                    l_407 = 0x99655FAAL;
                }
                for (l_405.f0 = 0; (l_405.f0 >= 0); l_405.f0 -= 1)
                {
                    int l_415 = 0x196880F5L;
                    l_405.f1 = 7L;
                    for (g_327.f1 = 1; (g_327.f1 >= 0); g_327.f1 -= 1)
                    {
                        int i, j;
                        l_408 = l_329[g_327.f1][l_405.f0];
                        if (g_51)
                            break;
                    }
                    l_403 = (g_327.f1 <= (l_357 < l_403));
                    for (l_405.f1 = 0; (l_405.f1 <= 1); l_405.f1 += 1)
                    {
                        int i, j;
                        g_378[0][2][2].f0 = (func_35(((func_61((g_378[0][2][2] , func_75(l_329[(l_405.f1 + 3)][l_405.f0], ((safe_add_func_int32_t_s_s(l_329[(l_405.f1 + 3)][l_405.f0], (g_87.f1 ^ ((((safe_lshift_func_uint8_t_u_u(((!g_370[8][3][0].f2) != func_67(l_407, (g_50[4] , 0x3E41802BL), (l_329[(l_405.f1 + 3)][l_405.f0] == l_405.f1))), g_51)) || l_407) <= p_11) && 0x3DE0L)))) && 8UL), l_329[9][0], l_403, g_23)), l_329[(l_405.f1 + 3)][l_405.f0]) <= g_378[0][2][2].f2) , g_378[0][2][2].f1)) > (-3L));
                        g_378[0][2][2].f0 = (((safe_add_func_int16_t_s_s((((l_415 == l_357) , (safe_lshift_func_int16_t_s_s((((!(safe_mod_func_int32_t_s_s(((func_38(g_324, (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((+((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_370[8][3][0].f2, (((((safe_sub_func_uint32_t_u_u(l_407, (p_11 ^ (g_88 <= 0L)))) , l_329[2][0]) && p_11) || p_11) != l_403))) ^ p_11), 7)) , 0xDC4EL))), 10)) , 0x50L)), 5)) == l_405.f0) | p_11), g_327.f1))) | 1L) <= g_327.f1), g_324.f1))) < 0xD064L) | 0x26L), g_378[0][2][2].f2))) | l_329[(l_405.f1 + 3)][l_405.f0]), g_378[0][2][2].f0)) & 0xA915L) != p_11);
                        return l_357;
                    }
                }
                for (g_319 = 16; (g_319 <= 50); g_319 = safe_add_func_uint16_t_u_u(g_319, 5))
                {
                    if (g_370[8][3][0].f2)
                        break;
                    for (l_354 = 0; (l_354 >= 0); l_354 -= 1)
                    {
                        if (g_51)
                            break;
                    }
                    l_408 &= (-7L);
                }
                l_448 &= (((safe_rshift_func_int8_t_s_s((func_12((safe_sub_func_int16_t_s_s(func_67((safe_add_func_int32_t_s_s(g_370[8][3][0].f2, (((((((safe_rshift_func_int16_t_s_s(((func_20((safe_mod_func_int8_t_s_s((!g_315), (l_408 ^ 0x9BL))), func_67((g_87.f0 > (safe_add_func_int16_t_s_s(l_357, ((((8UL && (!l_403)) == 1L) | 0x82C6F2DCL) > l_447[2])))), g_23, p_11)) <= l_329[8][0]) > l_447[2]), g_324.f0)) == 1UL) || p_11) , 3UL) > l_403) | p_11) && l_405.f1))), p_11, l_384), (-1L))), l_403, p_11, g_324, g_324.f1) , 0x9CL), 7)) | 1UL) && g_378[0][2][2].f1);
            }
            else
            {
                unsigned l_455 = 1UL;
                int l_486[10][6] = {{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L,0x0A5EE16BL,0x0A5EE16BL,0x3F48CCA8L},{0x0A5EE16BL,0x0A5EE16BL,0x0A5EE16BL,0x625CD101L,0x625CD101L,0x0A5EE16BL}};
                int i, j;
                if ((g_324.f1 , p_11))
                {
                    struct S0 l_454 = {0x4C7AB59AL,0xD9B2F9ECL};
                    l_408 |= (0L ^ g_23);
                    for (g_327.f0 = 1; (g_327.f0 == 30); g_327.f0 = safe_add_func_uint16_t_u_u(g_327.f0, 3))
                    {
                        struct S0 l_453 = {0x8D2B8B2AL,1L};
                        l_452 = l_451;
                        l_454 = l_453;
                        l_455 = l_452.f1;
                    }
                    for (l_357 = 9; (l_357 >= 0); l_357 -= 1)
                    {
                        int i;
                        l_452.f1 = ((g_50[l_357] || ((safe_sub_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(g_23, 2)) , g_327) , (safe_rshift_func_uint8_t_u_s((+((-1L) && ((0xEDL || l_455) | 2L))), g_50[4]))) || 0x75L) , p_11), 0UL)) == 0x02EF5E5BL)) , g_319);
                        if (g_324.f0)
                            continue;
                        if (l_455)
                            break;
                    }
                }
                else
                {
                    for (l_452.f0 = 7; (l_452.f0 >= 28); l_452.f0 = safe_add_func_int32_t_s_s(l_452.f0, 1))
                    {
                        g_378[0][2][2].f0 = (safe_sub_func_int32_t_s_s(0x2FCE8534L, (l_448 || g_88)));
                        l_403 |= (g_466 , l_455);
                    }
                    if (g_466.f1)
                    {
                        unsigned l_467 = 0x70D3573AL;
                        l_467 = l_357;
                        return g_370[8][3][0].f2;
                    }
                    else
                    {
                        l_403 = 0L;
                    }
                    for (l_407 = 0; (l_407 == (-10)); l_407--)
                    {
                        int l_483 = 0xB8D7A3DEL;
                        int l_485 = 0L;
                        l_485 = ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(1UL, (((safe_add_func_uint32_t_u_u(((((p_11 >= (g_480 , (safe_lshift_func_int8_t_s_s((~p_11), (func_28(func_67((0x72L != p_11), p_11, l_455), p_11, g_327.f1, l_408) , 0xF0L))))) >= g_319) <= l_483) <= p_11), p_11)) , g_484) , 0x45L))), 7)) & l_448), 250UL)), 0x1DL)) == g_324.f0);
                        return g_466.f0;
                    }
                }
                l_486[7][4] = 7L;
                return l_448;
            }
            if ((safe_rshift_func_int8_t_s_s(0L, 2)))
            {
                int l_504 = 1L;
                int l_540 = 4L;
                struct S0 l_593 = {2L,0xB0A62ABDL};
                short l_624[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_624[i] = 0xDC5AL;
                l_504 ^= (g_489 , (safe_add_func_uint8_t_u_u((g_378[0][2][2].f1 >= (safe_lshift_func_int16_t_s_s(((p_11 | ((p_11 || (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_67(g_51, (((safe_rshift_func_int16_t_s_s(8L, 11)) , (-1L)) < 0xECDCD1B2L), g_466.f0), 1)), g_88)), g_87.f0)), p_11))) < g_324.f1)) , g_87.f0), g_87.f1))), g_50[1])));
                if ((safe_lshift_func_uint16_t_u_u(((((safe_unary_minus_func_int8_t_s(g_315)) != func_35(l_452.f1)) , l_408) || g_3), 9)))
                {
                    unsigned short l_516 = 0xA4AFL;
                    for (g_466.f0 = 0; (g_466.f0 >= 5); ++g_466.f0)
                    {
                        g_87 = l_451;
                    }
                    for (l_452.f1 = 0; (l_452.f1 >= 0); l_452.f1 -= 1)
                    {
                        unsigned l_515 = 4294967289UL;
                        l_451.f0 = (safe_rshift_func_uint8_t_u_s(l_407, 3));
                        g_378[0][2][2].f0 = (p_11 < (g_3 ^ (p_11 , (6L | l_407))));
                        g_87 = l_512;
                        l_517 = func_28(func_61(g_324, func_20(p_11, g_87.f1)), (safe_add_func_uint16_t_u_u(l_515, func_67(l_452.f1, p_11, l_516))), g_3, p_11);
                    }
                }
                else
                {
                    struct S0 l_526[8] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                    int i;
                    if ((0x6EL ^ (safe_unary_minus_func_int32_t_s((((l_519[0][0] , (func_61(g_324, ((((l_329[8][0] < ((g_466.f1 , (safe_add_func_int32_t_s_s(g_480.f1, g_50[9]))) , g_466.f1)) || (((0x6B8828CAL < g_324.f0) , 8L) < g_319)) >= 1L) , p_11)) && g_378[0][2][2].f1)) & 0xF1909537L) ^ p_11)))))
                    {
                        l_452.f1 = g_466.f0;
                        l_451.f0 |= (safe_lshift_func_uint8_t_u_s(l_504, 6));
                        l_452.f1 |= (g_524 , func_20(g_324.f1, p_11));
                        l_403 = (-9L);
                    }
                    else
                    {
                        g_87.f0 = p_11;
                        g_524.f0 = g_370[8][3][0].f1;
                    }
                    l_526[4] = l_525;
                    l_451 = g_324;
                    for (g_319 = 24; (g_319 == 37); ++g_319)
                    {
                        const struct S0 l_531 = {9L,0x7A84487CL};
                        l_540 = (safe_lshift_func_uint16_t_u_s(func_61(l_531, (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((l_452.f1 , p_11) | l_504), 3)), 2)) , g_480.f1) & (safe_sub_func_int32_t_s_s((g_466.f0 , (~g_327.f1)), ((0x34A3A905L < ((safe_mod_func_int16_t_s_s(g_51, p_11)) ^ p_11)) && 1UL))))), 7));
                        if (l_452.f1)
                            continue;
                    }
                }
                for (g_87.f1 = (-4); (g_87.f1 != 2); g_87.f1 = safe_add_func_int8_t_s_s(g_87.f1, 1))
                {
                    int l_549 = 0xD3BDC178L;
                    for (g_315 = 0; (g_315 < (-19)); g_315 = safe_sub_func_uint8_t_u_u(g_315, 7))
                    {
                        unsigned short l_556 = 0x2A85L;
                        int l_557 = 1L;
                        l_557 = (((((safe_lshift_func_int16_t_s_u((g_378[0][2][2].f1 >= ((g_315 , (safe_add_func_uint32_t_u_u(0UL, ((func_38((((l_549 , (((safe_unary_minus_func_int16_t_s(func_35(p_11))) >= (func_38(func_28((((safe_add_func_uint32_t_u_u(((0x6AEC2192L != ((safe_add_func_uint32_t_u_u(l_451.f1, (p_11 <= g_524.f2))) ^ l_540)) | g_319), p_11)) > 0xD6603E84L) < l_519[0][1]), g_555, l_357, p_11), l_519[0][0]) != 4294967295UL)) , g_315)) != (-1L)) , l_517), p_11) , 2UL) | l_549)))) && l_549)), l_556)) | p_11) != 0xDC9D2E27L) ^ g_87.f1) >= g_327.f1);
                        g_524.f0 = (g_315 , (g_378[0][2][2].f1 > (-5L)));
                    }
                    l_512 = g_87;
                    l_451.f0 = l_549;
                }
                for (l_403 = 21; (l_403 == (-20)); l_403 = safe_sub_func_uint8_t_u_u(l_403, 9))
                {
                    short l_564 = 0x4DDFL;
                    int l_621 = 0L;
                    for (l_512.f1 = 9; (l_512.f1 >= 1); l_512.f1 -= 1)
                    {
                        int i;
                        if (g_50[l_512.f1])
                            break;
                    }
                    if (func_12((p_11 || g_524.f0), p_11, l_540, func_75(func_35(g_489.f1), (0xE504L | ((safe_add_func_int32_t_s_s(g_378[0][2][2].f2, (((safe_rshift_func_uint16_t_u_u(0x5C39L, g_327.f1)) >= 65532UL) <= l_564))) , l_408)), p_11, p_11, g_555), g_378[0][2][2].f2))
                    {
                        unsigned l_581 = 0x98EA9512L;
                        int l_594 = (-7L);
                        short l_604 = (-1L);
                        l_581 = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((g_480.f0 , (g_87.f0 == (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_11, 0)), ((l_452.f1 & l_452.f1) ^ ((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((p_11 < (safe_lshift_func_int8_t_s_s(p_11, 0))), p_11)), (safe_add_func_int8_t_s_s(g_2, l_407)))) == 0x76BAL) || g_378[0][2][2].f0) == g_50[4])))) & 1UL) == 6L))), 14)), 6)) == g_87.f1);
                        g_524.f0 ^= (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_586 , g_378[0][2][2].f1), g_87.f0)), ((safe_unary_minus_func_int8_t_s(l_581)) < (~p_11))));
                        l_594 = ((((safe_sub_func_uint32_t_u_u(((l_519[0][5] != (l_452.f1 ^ (l_590 == g_87.f1))) , 2UL), l_504)) & (safe_add_func_uint16_t_u_u(g_324.f0, func_38(l_593, ((l_504 , g_87) , g_370[8][3][0].f1))))) | g_51) != 0xC1L);
                        l_605 = func_75((+(((p_11 ^ (l_408 & g_88)) , g_595) , 0x1C465E17L)), (l_564 && (g_586.f1 || (p_11 , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_uint8_t_u_u((((!(safe_add_func_int32_t_s_s((g_480.f0 < 0x8CFD9F78L), p_11))) != g_23) , g_87.f0), 6)) , p_11) < g_378[0][2][2].f2) != p_11), l_604)), 9))))), p_11, p_11, l_519[0][4]);
                    }
                    else
                    {
                        l_621 ^= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((g_610 != (0x1EL > (((g_484.f2 < func_67(func_67((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((func_67((~(safe_rshift_func_int16_t_s_s(0L, 9))), l_593.f0, g_610) && (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((-1L) == ((l_564 != 7L) & g_324.f1)), g_315)), p_11))), 0xC9611D21L)), g_324.f1)), g_23, g_50[7]), l_408, p_11)) < p_11) , p_11))), 6)), 15));
                    }
                    l_605.f1 = ((func_61(l_525, l_451.f0) ^ (((g_50[4] <= func_38(g_324, (func_67((safe_unary_minus_func_uint8_t_u(((g_324 , l_623) , (p_11 != (((p_11 ^ 0L) < g_50[4]) && l_624[0]))))), g_484.f1, l_452.f1) | 1L))) >= 65528UL) > p_11)) > l_519[0][0]);
                }
            }
            else
            {
                unsigned l_627 = 4294967295UL;
                if (func_20(p_11, (~(safe_sub_func_uint8_t_u_u(l_627, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_452.f1, (safe_sub_func_int32_t_s_s((l_452.f1 > (!(((safe_sub_func_int16_t_s_s((((l_627 >= p_11) < 65535UL) & ((((((l_452.f0 & (((6UL & 0xCFL) < g_636) & l_452.f0)) | p_11) < 0x1C42F5F7L) && 7L) > l_627) == l_452.f1)), l_525.f0)) | l_637) < p_11))), g_610)))), l_627)))))))
                {
                    unsigned char l_646 = 255UL;
                    int l_647[4][5] = {{0x37A28554L,0x37A28554L,1L,1L,0x37A28554L},{0x952B2962L,(-1L),0x952B2962L,(-1L),0x952B2962L},{0x37A28554L,1L,1L,0x37A28554L,0x37A28554L},{0xDB332072L,(-1L),0xDB332072L,(-1L),0xDB332072L}};
                    int i, j;
                    for (g_595 = 0; (g_595 <= (-29)); g_595 = safe_sub_func_uint32_t_u_u(g_595, 3))
                    {
                        struct S0 l_640[1][8] = {{{0xB89D6259L,8L},{0xB89D6259L,8L},{0xB89D6259L,8L},{0xB89D6259L,8L},{0xB89D6259L,8L},{0xB89D6259L,8L},{0xB89D6259L,8L},{0xB89D6259L,8L}}};
                        int i, j;
                        l_640[0][0] = g_87;
                    }
                    g_87.f0 = (g_50[4] >= (l_641 <= (safe_mod_func_int16_t_s_s((p_11 <= (((safe_lshift_func_int16_t_s_s(func_67(l_623.f1, (p_11 == l_447[1]), (((((p_11 , (-2L)) ^ p_11) >= p_11) <= 0x2CL) , g_324.f0)), p_11)) | g_636) < l_646)), 0xC68BL))));
                    l_605.f1 = (-1L);
                    l_647[1][0] = (((p_11 | func_35(g_586.f1)) , l_403) != g_555);
                }
                else
                {
                    unsigned l_651 = 0x2D791E0DL;
                    unsigned char l_652 = 0xEFL;
                    l_452.f0 = func_38(l_525, p_11);
                    if ((safe_sub_func_uint16_t_u_u(p_11, l_650)))
                    {
                        l_605.f1 = l_651;
                    }
                    else
                    {
                        l_652 ^= p_11;
                    }
                }
                l_512.f0 = (safe_rshift_func_uint8_t_u_s((0UL != p_11), l_354));
            }
        }
    }
    l_605 = func_28(g_489.f2, (safe_lshift_func_uint8_t_u_u(g_378[0][2][2].f0, (safe_add_func_uint8_t_u_u((0xA7L > 0xF6L), ((safe_mod_func_int32_t_s_s(l_605.f1, g_51)) , (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((0xDDB23E6CL > (!func_38(func_75(l_447[5], g_50[4], l_623.f1, g_51, l_329[8][0]), g_610))), l_623.f0)) != g_315), l_605.f1)), l_447[2]))))))), g_524.f0, p_11);
    g_87 = func_28((safe_sub_func_uint8_t_u_u(((func_61(l_451, g_524.f1) | l_357) , l_623.f1), (l_605.f1 < (g_466.f2 && g_50[7])))), l_329[3][0], p_11, g_466.f0);
    return l_447[4];
}







static unsigned func_12(unsigned short p_13, unsigned p_14, unsigned p_15, const struct S0 p_16, unsigned p_17)
{
    g_87 = g_87;
    return p_15;
}







static unsigned short func_20(int p_21, int p_22)
{
    int l_24 = 0x16488A97L;
    int l_25 = 0xF59EC134L;
    struct S0 l_41 = {-10L,0x5E45DB0FL};
    char l_223 = 0x55L;
    unsigned char l_260 = 9UL;
    const unsigned char l_317 = 255UL;
    l_25 = l_24;
    for (p_21 = 0; (p_21 >= (-25)); p_21 = safe_sub_func_int32_t_s_s(p_21, 7))
    {
        int l_43[2];
        struct S0 l_53[6] = {{-1L,-1L},{-1L,-1L},{-4L,-9L},{-1L,-1L},{-1L,-1L},{-4L,-9L}};
        unsigned l_54 = 0x3EE1E161L;
        int i;
        for (i = 0; i < 2; i++)
            l_43[i] = 8L;
        l_53[3] = func_28(((safe_mod_func_uint16_t_u_u(5UL, func_35(p_21))) , func_38(l_41, (safe_unary_minus_func_int16_t_s(((((!l_43[0]) <= (func_35((g_23 , func_35((~func_35((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_25, l_41.f1)), 3)) , (p_21 && p_21)), 4))))))) > g_50[4])) , l_25) ^ g_50[7]))))), l_41.f0, g_50[9], g_50[4]);
        if (l_54)
            break;
        for (l_54 = 0; (l_54 <= 9); l_54 += 1)
        {
            const struct S0 l_64 = {5L,0x9E1D6210L};
            int i;
            l_41.f1 ^= ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_61(l_64, ((safe_add_func_int8_t_s_s(func_35(g_50[l_54]), (g_51 || 9L))) && (func_67((((g_50[4] , (g_50[l_54] < func_35(p_21))) == l_41.f0) | g_51), g_50[0], g_50[4]) | 1UL))), 5)), p_22)) != 0xA6L), p_21)) , p_22);
            for (l_25 = 2; (l_25 <= 9); l_25 += 1)
            {
                struct S0 l_220 = {0xC30E3669L,0xB6F9F128L};
                const int l_234 = 0xE1D2F55BL;
                for (l_24 = 6; (l_24 >= 1); l_24 -= 1)
                {
                    int l_224[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_224[i] = 0xA390C96BL;
                    p_22 = ((!(g_50[(l_24 + 3)] <= (+(safe_rshift_func_uint8_t_u_s((((g_50[(l_24 + 1)] | ((func_67(((safe_unary_minus_func_int16_t_s(((func_38(l_220, ((8UL | (l_64.f1 ^ func_67((g_87.f0 < (safe_add_func_uint32_t_u_u(((p_22 > l_223) | (l_41 , p_21)), (-1L)))), l_43[1], g_50[4]))) , l_53[3].f1)) & 0x7EL) >= 0xA8L))) ^ g_88), g_87.f1, g_51) & 0x3DL) > 0x37L)) ^ g_87.f1) != g_50[2]), p_21))))) , l_220.f0);
                    l_224[0] &= (p_22 | g_50[4]);
                    p_22 ^= l_64.f1;
                }
                g_87.f0 |= 5L;
                g_87 = l_41;
                for (l_220.f0 = 5; (l_220.f0 >= 0); l_220.f0 -= 1)
                {
                    int l_225 = 0L;
                    unsigned l_247 = 4294967295UL;
                    l_41.f1 &= (func_67((l_225 ^ (((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(func_35((safe_sub_func_int32_t_s_s(0L, (safe_add_func_uint8_t_u_u(p_21, ((0UL == l_234) != func_35((0x2449FA87L ^ 7L)))))))), g_51)), p_22)) || 0x92DFL) == 0x2B993DDFL)), g_87.f0, p_22) | 4294967293UL);
                    for (g_87.f0 = 0; (g_87.f0 <= 9); g_87.f0 += 1)
                    {
                        l_53[3].f0 = ((func_35(l_53[3].f1) <= l_24) & func_38(func_28(g_50[6], (g_50[4] && (((safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(p_21, (safe_rshift_func_uint16_t_u_s(6UL, 7)))) && func_67(g_51, (func_38(func_75(p_21, g_87.f0, l_41.f0, g_87.f0, l_225), p_21) ^ g_87.f0), g_87.f0)), l_64.f0)) , 0x4AL) ^ g_87.f1)), g_88, p_21), l_53[3].f0));
                        p_22 |= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0xF0L, 0)), p_21)) >= ((safe_add_func_int8_t_s_s(l_247, func_35(p_21))) == g_87.f0));
                    }
                }
            }
        }
        for (p_22 = 1; (p_22 >= 0); p_22 -= 1)
        {
            struct S0 l_250[9] = {{1L,-1L},{1L,-1L},{1L,-1L},{1L,-1L},{1L,-1L},{1L,-1L},{1L,-1L},{1L,-1L},{1L,-1L}};
            const int l_259 = 0xAF2571DAL;
            int i;
            l_43[p_22] = l_43[p_22];
            if (((l_43[p_22] <= (((l_41.f1 & ((p_22 > func_38((((safe_sub_func_int8_t_s_s((((p_21 <= (g_87.f0 & l_43[p_22])) >= func_38(l_250[6], (safe_add_func_uint32_t_u_u((((((p_21 <= ((+(safe_rshift_func_int16_t_s_u((p_22 & (-6L)), g_50[2]))) > 1L)) & p_21) , 0xC9L) == 0x31L) > p_21), 4UL)))) , 0x6EL), l_41.f0)) < l_223) , l_250[4]), g_87.f0)) > 0L)) , l_53[3].f1) <= p_22)) ^ g_88))
            {
                int i;
                l_53[(p_22 + 1)] = func_75(func_61(l_41, g_88), ((g_50[4] || (((l_24 | ((safe_mod_func_int16_t_s_s(func_67(p_22, ((safe_lshift_func_int8_t_s_s(func_67(g_50[3], p_21, ((((g_50[4] || g_50[5]) , 0UL) > g_50[4]) || 0xB0055050L)), 2)) && 0x17E4L), p_21), 0xC56CL)) == g_88)) ^ g_50[4]) < l_259)) || (-6L)), g_88, l_260, g_88);
            }
            else
            {
                unsigned l_285 = 4294967295UL;
                struct S0 l_300 = {1L,0L};
                for (g_51 = 11; (g_51 > 24); ++g_51)
                {
                    unsigned l_275 = 0xF731B951L;
                    struct S0 l_301 = {0x36BB0D7DL,0L};
                    for (g_88 = (-5); (g_88 != 6); g_88 = safe_add_func_uint16_t_u_u(g_88, 9))
                    {
                        int l_274 = 0xC055DACAL;
                        int l_276 = (-1L);
                        l_276 = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_223 != (p_21 != ((p_22 , g_50[4]) <= ((((safe_unary_minus_func_int32_t_s(((2UL >= (((safe_rshift_func_uint8_t_u_s(l_274, p_22)) && (g_51 , ((l_275 != p_22) && l_274))) ^ 0x9BL)) , p_21))) , p_21) , g_87.f0) || l_53[3].f0)))), g_87.f0)), l_260)), 6));
                    }
                    for (l_25 = 0; (l_25 > 16); ++l_25)
                    {
                        l_301 = func_75((g_87.f0 , ((safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((l_285 , 4L), (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_35(((safe_mod_func_int32_t_s_s((0x11L && (((safe_add_func_int32_t_s_s((-9L), (safe_add_func_int32_t_s_s(((g_87.f0 & l_43[p_22]) , ((safe_lshift_func_uint16_t_u_s((((p_21 , (safe_rshift_func_int8_t_s_u(p_21, p_22))) != 0UL) == 0x2847L), p_21)) , (-1L))), l_275)))) , l_300) , g_51)), 3UL)) & 0x8A32L)), l_275)), 0x19L)))) ^ l_300.f0) && g_88), l_275)) <= p_21), 7)) , 0xDB12DDB8L)), l_43[1], l_300.f1, l_43[p_22], l_25);
                        l_301.f1 ^= 0xFDE35EEEL;
                    }
                }
            }
            if (p_21)
                break;
            for (l_54 = 21; (l_54 <= 58); l_54++)
            {
                unsigned char l_312 = 0UL;
                int l_318 = 0xE8F414B3L;
                if ((p_21 == l_24))
                {
                    g_87.f1 = g_87.f0;
                    if (l_43[0])
                        continue;
                }
                else
                {
                    unsigned short l_316 = 7UL;
                    g_87.f0 &= ((+func_67(p_21, (!g_50[4]), p_21)) , l_24);
                    g_319 ^= ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(func_67(l_41.f0, (p_22 || ((safe_sub_func_uint32_t_u_u((((p_21 <= func_61(g_87, ((1UL <= ((func_28(p_21, (safe_add_func_uint32_t_u_u((((func_67(((l_312 >= 0xA7A3L) <= (((safe_sub_func_int32_t_s_s((-2L), l_41.f0)) != 0x732C53F8L) >= 0xE3370377L)), g_23, p_21) > g_315) , 1UL) || l_316), l_41.f1)), l_317, g_87.f1) , g_50[4]) < 4294967288UL)) != p_21))) > p_21) , l_312), g_50[5])) > l_318)), p_21), 4)) || p_22), p_22)) == g_315);
                    l_250[6].f1 &= g_51;
                }
                for (l_41.f1 = 5; (l_41.f1 <= (-10)); l_41.f1--)
                {
                    g_87.f1 = l_312;
                    if (g_50[4])
                        continue;
                    g_87 = g_87;
                }
                l_318 = p_21;
            }
        }
    }
    return l_41.f0;
}







static struct S0 func_28(const unsigned p_29, unsigned p_30, const unsigned p_31, unsigned short p_32)
{
    struct S0 l_52 = {1L,0xB7F464F6L};
    g_51 = p_30;
    return l_52;
}







static short func_35(unsigned p_36)
{
    unsigned char l_37[3][10] = {{0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L},{0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L},{0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L,0xD4L}};
    int i, j;
    for (g_23 = 0; g_23 < 3; g_23 += 1)
    {
        for (p_36 = 0; p_36 < 10; p_36 += 1)
        {
            l_37[g_23][p_36] = 250UL;
        }
    }
    return l_37[0][5];
}







static unsigned func_38(struct S0 p_39, unsigned p_40)
{
    return g_50[6];
}







static short func_61(const struct S0 p_62, const char p_63)
{
    unsigned l_83 = 4294967293UL;
    struct S0 l_90 = {1L,0L};
    struct S0 l_136 = {0xCA65C328L,0x76B0EF2BL};
    for (g_51 = 0; (g_51 != 10); ++g_51)
    {
        unsigned l_86 = 0xD8AD31ACL;
        struct S0 l_99 = {-4L,0x2D269A62L};
        unsigned l_155 = 0xAFDC62DBL;
        short l_190 = (-1L);
        unsigned char l_213 = 0UL;
        l_90 = func_75(g_50[3], p_63, (((safe_rshift_func_uint16_t_u_u((l_83 | (((l_83 >= p_63) , ((((safe_mod_func_int16_t_s_s(((((((0x010944B0L != (g_50[2] && l_86)) , (((l_86 >= g_50[2]) && g_50[4]) , l_86)) >= p_63) , 0xE9DD3713L) < p_62.f0) >= 6L), p_62.f1)) <= p_62.f0) , g_87) , 0x47L)) | 0x95L)), 14)) && g_88) == g_23), p_62.f1, p_62.f1);
        for (g_23 = (-18); (g_23 == 18); g_23 = safe_add_func_uint8_t_u_u(g_23, 1))
        {
            unsigned l_93[5] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL};
            int l_94 = (-3L);
            unsigned l_138 = 6UL;
            unsigned char l_157[7];
            int i;
            for (i = 0; i < 7; i++)
                l_157[i] = 1UL;
            l_93[4] = g_87.f1;
            for (l_90.f1 = 0; (l_90.f1 <= 4); l_90.f1 += 1)
            {
                int i;
                return l_93[l_90.f1];
            }
            if (p_62.f1)
            {
                l_94 = l_83;
                l_99.f0 = (safe_mod_func_int16_t_s_s((0x0D2CL == func_38(l_90, l_83)), (((p_62.f1 & ((safe_lshift_func_uint16_t_u_s((g_88 & (l_99 , (safe_add_func_int16_t_s_s(((+(safe_lshift_func_int8_t_s_u((((g_87 , ((0x81L >= p_63) & l_90.f1)) < (-9L)) && l_90.f1), 4))) & g_23), p_62.f0)))), l_90.f0)) , p_62.f1)) || g_50[4]) ^ 0x6401L)));
            }
            else
            {
                unsigned short l_134 = 0x7F8BL;
                unsigned l_163[7][3][8] = {{{4294967288UL,0x48FFD3BAL,0xC6BCD61EL,0x71900071L,1UL,0xCE8C50E4L,5UL,0UL},{0x1703F935L,1UL,0x465C56C7L,0xC6BCD61EL,0x1DDD8C58L,0xD2035C05L,0UL,0x6CEE14A3L},{4UL,0UL,0xEFE3CF7BL,0x28C699EDL,0x465C56C7L,0x28C699EDL,0xEFE3CF7BL,0UL}},{{1UL,0x1703F935L,0x1148879AL,1UL,1UL,0x71900071L,4294967293UL,1UL},{0xCE8C50E4L,0UL,4294967295UL,1UL,1UL,4294967289UL,4294967293UL,1UL},{1UL,1UL,0x1148879AL,0x71900071L,0x2F93AC7BL,4294967295UL,0xEFE3CF7BL,4294967288UL}},{{0x2F93AC7BL,4294967295UL,0xEFE3CF7BL,4294967288UL,0x9B02917FL,0x4F2ECF32L,0UL,6UL},{0xD2035C05L,0x6CEE14A3L,0x465C56C7L,5UL,1UL,1UL,5UL,0x465C56C7L},{0x5407840EL,0x5407840EL,0x18482C93L,0x9B02917FL,0UL,5UL,0x6CEE14A3L,4294967295UL}},{{1UL,0x48FFD3BAL,0xCE8C50E4L,0x4B4B0C76L,6UL,0x1DDD8C58L,4294967295UL,4294967295UL},{0x48FFD3BAL,0UL,4294967289UL,0x9B02917FL,0xEFE3CF7BL,0x1703F935L,1UL,0x465C56C7L},{0x465C56C7L,0x97FC644EL,0UL,5UL,0UL,0x5407840EL,0x48FFD3BAL,6UL}},{{1UL,0xEFE3CF7BL,0UL,4294967288UL,0xC6BCD61EL,0x28C699EDL,1UL,6UL},{0x1DDD8C58L,0xCE8C50E4L,0x1DDD8C58L,0x97FC644EL,0UL,1UL,0xEFE3CF7BL,0x4F2ECF32L},{4294967295UL,6UL,0xD2035C05L,4294967292UL,0UL,1UL,0UL,0x9C46A301L}},{{4294967295UL,1UL,0xC6BCD61EL,0xD9DE4CBCL,0UL,0x71900071L,1UL,4294967293UL},{0x1DDD8C58L,4294967289UL,0x1703F935L,0xD2035C05L,1UL,4294967288UL,4294967292UL,0x18482C93L},{0UL,4UL,0xD9DE4CBCL,1UL,4294967295UL,5UL,5UL,4294967295UL}},{{1UL,0x71900071L,0x71900071L,1UL,0x5407840EL,0x9B02917FL,0x1148879AL,0x465C56C7L},{0x9B02917FL,0UL,5UL,0x6CEE14A3L,4294967295UL,0x4B4B0C76L,0x9C46A301L,4294967292UL},{0x4F2ECF32L,0UL,0xEFE3CF7BL,4294967293UL,0x28C699EDL,0x9B02917FL,0x6CEE14A3L,0x4B4B0C76L}}};
                int l_166[8] = {9L,1L,9L,9L,1L,9L,9L,1L};
                int l_186 = 0x8216C10DL;
                unsigned l_195 = 0x22F7D754L;
                int i, j, k;
                for (l_99.f1 = (-7); (l_99.f1 > 1); l_99.f1 = safe_add_func_int32_t_s_s(l_99.f1, 1))
                {
                    int l_119 = 0L;
                    struct S0 l_135 = {0xE4E035C9L,0x6D21B019L};
                    int l_137 = 0xF1995C1DL;
                    unsigned char l_156 = 0x11L;
                    for (l_90.f0 = (-1); (l_90.f0 < (-29)); --l_90.f0)
                    {
                        unsigned short l_118 = 65529UL;
                        int l_120 = 0L;
                        l_120 = ((safe_add_func_int8_t_s_s(g_50[7], 1L)) == (g_50[4] , func_67((safe_add_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(p_62.f1, g_50[4])) , ((~(func_75(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((func_67(g_87.f0, g_88, l_118) < p_62.f1), g_87.f1)), 2)) , l_93[4]), p_63, g_88, l_119, g_87.f0) , 0xB6F9E293L)) <= 0UL)) == 4UL), g_23)), l_119, g_51)));
                        l_99.f0 = (func_67(p_62.f0, l_86, (safe_unary_minus_func_int8_t_s((l_83 || (0x9AL || p_63))))) ^ p_62.f1);
                        l_137 &= ((safe_rshift_func_int8_t_s_u(((g_87.f1 , ((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((!(safe_add_func_uint16_t_u_u(((p_62.f1 || (l_134 <= ((((((func_38(l_135, (p_62.f0 | (l_134 | func_38(l_136, l_93[4])))) == 0x15L) > p_62.f0) ^ g_88) , g_87.f0) , p_63) <= l_134))) >= 0xF7L), l_120))) >= p_62.f1), l_119)), g_23)), l_90.f1)) && p_62.f0)) && p_62.f0), l_90.f1)) || g_50[7]);
                        if (l_138)
                            break;
                    }
                    if (func_67((((safe_mod_func_uint8_t_u_u(((func_38(func_75(p_62.f1, ((safe_add_func_int16_t_s_s(((+(l_99.f1 , p_63)) != ((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(0UL, (safe_sub_func_int8_t_s_s((((l_155 , func_38(p_62, (4294967295UL != l_93[2]))) >= p_62.f1) < l_99.f0), g_23)))), 6)) && 1L), 65532UL)), l_156)) < l_90.f0)), 0xB37EL)) , p_62.f0), l_93[4], l_119, g_50[4]), g_50[4]) > 1L) , l_136.f1), g_23)) & l_134) != l_157[1]), l_135.f1, p_62.f0))
                    {
                        int l_162 = 1L;
                        g_87.f1 = (65535UL == (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_50[4], 0xAF397C00L)) && g_51), 7)));
                        if (l_136.f0)
                            continue;
                        l_136.f0 = (g_50[6] , (func_67((l_162 & (0xFBL <= func_38(g_87, p_63))), (p_63 , 4294967295UL), l_162) == l_163[1][2][5]));
                        if (p_62.f0)
                            continue;
                    }
                    else
                    {
                        l_166[5] = ((p_62.f0 , (safe_rshift_func_uint16_t_u_u(g_23, (g_51 && l_99.f1)))) ^ p_63);
                        return p_62.f0;
                    }
                }
                g_87.f0 = (func_38(p_62, (g_51 , 0xB3311CE5L)) | (l_93[0] & (func_67(l_83, p_63, g_23) != 1L)));
                for (l_90.f0 = 0; (l_90.f0 <= 7); l_90.f0 += 1)
                {
                    int i;
                    l_166[l_90.f0] = (l_166[l_90.f0] <= (safe_lshift_func_int8_t_s_u(func_38(g_87, (g_51 , 0x51A42648L)), 4)));
                    for (l_99.f0 = 0; (l_99.f0 > (-30)); l_99.f0 = safe_sub_func_int8_t_s_s(l_99.f0, 5))
                    {
                        l_166[l_90.f0] |= (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_23 && func_38(g_87, l_155)), func_38(func_75(p_63, ((p_62.f1 < 0UL) , (((9UL <= l_163[3][0][4]) ^ p_62.f0) < l_83)), p_62.f1, g_50[3], g_87.f1), g_87.f1))), 0x78804B5BL));
                        g_87.f1 = (safe_rshift_func_int16_t_s_s((p_62.f0 > l_138), 2));
                        l_136.f1 ^= g_87.f1;
                    }
                    l_186 &= (((safe_rshift_func_uint16_t_u_u(func_38((l_166[l_90.f0] , func_75(l_136.f1, (safe_lshift_func_int16_t_s_u(0L, ((((safe_lshift_func_uint16_t_u_u(l_166[l_90.f0], 4)) | g_50[4]) != ((safe_rshift_func_int16_t_s_u(func_67(((g_51 | (safe_unary_minus_func_int16_t_s(l_134))) & (p_63 >= (((l_166[l_90.f0] == 0xFC8DL) < g_50[7]) & p_62.f1))), l_138, g_50[4]), 7)) || g_50[4])) <= p_62.f0))), g_51, p_62.f1, g_50[5])), p_62.f0), 11)) , p_62.f1) < l_166[l_90.f0]);
                }
                if (p_62.f0)
                {
                    g_87.f1 = (safe_rshift_func_uint8_t_u_u(0x92L, g_50[9]));
                    return p_62.f1;
                }
                else
                {
                    unsigned l_189 = 0x64E466CCL;
                    unsigned char l_214 = 0x2BL;
                    l_166[4] ^= func_67(((l_90.f1 || ((l_189 < g_88) , g_51)) , func_67(l_190, g_87.f0, (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_195, (((safe_unary_minus_func_uint32_t_u((p_62.f0 <= (safe_rshift_func_int16_t_s_s(l_189, g_87.f1))))) && l_189) & p_63))) && 252UL), 15)))), l_99.f0, l_190);
                    for (l_134 = 1; (l_134 <= 4); l_134 += 1)
                    {
                        int i;
                        l_166[(l_134 + 3)] = ((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((((65534UL <= ((l_166[l_134] , func_67((safe_lshift_func_uint8_t_u_s(1UL, ((g_88 ^ (safe_lshift_func_uint8_t_u_u(l_189, 3))) ^ (safe_add_func_int16_t_s_s(0L, (safe_lshift_func_int8_t_s_s((func_38(func_75(g_87.f1, l_138, (p_63 > p_62.f0), l_93[4], p_62.f1), p_62.f1) & 9UL), g_87.f0))))))), p_62.f1, g_88)) < l_99.f1)) != 65535UL) > l_166[l_134]) > g_87.f0), 5)), 65528UL)), 4294967295UL)) & l_190);
                        if (l_157[1])
                            break;
                        l_166[(l_134 + 3)] &= ((p_62.f1 && l_136.f1) < g_87.f1);
                    }
                    for (g_87.f1 = 3; (g_87.f1 <= 9); g_87.f1 += 1)
                    {
                        int i;
                        l_213 &= 0x0795C423L;
                        l_214 = 0x6536C698L;
                        return g_50[g_87.f1];
                    }
                }
            }
            l_99.f1 = (l_213 != (((safe_mod_func_uint8_t_u_u(l_190, 0x12L)) <= p_62.f1) , g_87.f0));
        }
    }
    return p_63;
}







static unsigned short func_67(short p_68, const unsigned p_69, int p_70)
{
    for (p_68 = 0; (p_68 > 28); p_68++)
    {
        return p_69;
    }
    return p_69;
}







static struct S0 func_75(unsigned p_76, short p_77, unsigned char p_78, unsigned short p_79, unsigned p_80)
{
    unsigned l_89[9][5][5] = {{{0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL},{7UL,7UL,4294967292UL,7UL,7UL},{0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L},{7UL,0UL,0UL,7UL,0UL},{0xC3C0C886L,0xC3C0C886L,0x06E18572L,0xC3C0C886L,0xC3C0C886L}},{{0UL,7UL,0UL,0UL,7UL},{0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL},{7UL,7UL,4294967292UL,7UL,7UL},{0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L},{7UL,0UL,0UL,7UL,0UL}},{{0xC3C0C886L,0xC3C0C886L,0x06E18572L,0xC3C0C886L,0xC3C0C886L},{0UL,7UL,0UL,0UL,7UL},{0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL},{7UL,7UL,4294967292UL,7UL,7UL},{0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L}},{{7UL,0UL,0UL,7UL,0UL},{0xC3C0C886L,0xC3C0C886L,0x06E18572L,0xC3C0C886L,0xC3C0C886L},{0UL,7UL,0UL,0UL,7UL},{0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL},{7UL,7UL,4294967292UL,7UL,7UL}},{{0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL,0xC3C0C886L},{7UL,0UL,0UL,7UL,0UL},{0xC3C0C886L,0xC3C0C886L,0x06E18572L,0xC3C0C886L,0xC3C0C886L},{0UL,0UL,4294967292UL,4294967292UL,0UL},{0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL,0x06E18572L}},{{0UL,0UL,7UL,0UL,0UL},{0x06E18572L,0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL},{0UL,4294967292UL,4294967292UL,0UL,4294967292UL},{0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL},{4294967292UL,0UL,4294967292UL,4294967292UL,0UL}},{{0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL,0x06E18572L},{0UL,0UL,7UL,0UL,0UL},{0x06E18572L,0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL},{0UL,4294967292UL,4294967292UL,0UL,4294967292UL},{0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL}},{{4294967292UL,0UL,4294967292UL,4294967292UL,0UL},{0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL,0x06E18572L},{0UL,0UL,7UL,0UL,0UL},{0x06E18572L,0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL},{0UL,4294967292UL,4294967292UL,0UL,4294967292UL}},{{0xBD359D2DL,0xBD359D2DL,0xC3C0C886L,0xBD359D2DL,0xBD359D2DL},{4294967292UL,0UL,4294967292UL,4294967292UL,0UL},{0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL,0x06E18572L},{0UL,0UL,7UL,0UL,0UL},{0x06E18572L,0xBD359D2DL,0x06E18572L,0x06E18572L,0xBD359D2DL}}};
    int i, j, k;
    l_89[0][0][0] |= (-5L);
    return g_87;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_324.f0, "g_324.f0", print_hash_value);
    transparent_crc(g_324.f1, "g_324.f1", print_hash_value);
    transparent_crc(g_327.f1, "g_327.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_370[i][j][k].f0, "g_370[i][j][k].f0", print_hash_value);
                transparent_crc(g_370[i][j][k].f1, "g_370[i][j][k].f1", print_hash_value);
                transparent_crc(g_370[i][j][k].f2, "g_370[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_378[i][j][k].f0, "g_378[i][j][k].f0", print_hash_value);
                transparent_crc(g_378[i][j][k].f1, "g_378[i][j][k].f1", print_hash_value);
                transparent_crc(g_378[i][j][k].f2, "g_378[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f1, "g_466.f1", print_hash_value);
    transparent_crc(g_466.f2, "g_466.f2", print_hash_value);
    transparent_crc(g_480.f0, "g_480.f0", print_hash_value);
    transparent_crc(g_480.f1, "g_480.f1", print_hash_value);
    transparent_crc(g_480.f2, "g_480.f2", print_hash_value);
    transparent_crc(g_484.f0, "g_484.f0", print_hash_value);
    transparent_crc(g_484.f1, "g_484.f1", print_hash_value);
    transparent_crc(g_484.f2, "g_484.f2", print_hash_value);
    transparent_crc(g_489.f0, "g_489.f0", print_hash_value);
    transparent_crc(g_489.f1, "g_489.f1", print_hash_value);
    transparent_crc(g_489.f2, "g_489.f2", print_hash_value);
    transparent_crc(g_524.f0, "g_524.f0", print_hash_value);
    transparent_crc(g_524.f1, "g_524.f1", print_hash_value);
    transparent_crc(g_524.f2, "g_524.f2", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_586.f0, "g_586.f0", print_hash_value);
    transparent_crc(g_586.f1, "g_586.f1", print_hash_value);
    transparent_crc(g_586.f2, "g_586.f2", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_770[i][j][k], "g_770[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_801.f0, "g_801.f0", print_hash_value);
    transparent_crc(g_801.f1, "g_801.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
