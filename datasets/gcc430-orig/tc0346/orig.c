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
   char f0;
   char f1;
   short f2;
   int f3;
   int f4;
   char f5;
   unsigned char f6;
};


static char g_9 = 0L;
static unsigned char g_35 = 246UL;
static struct S0 g_42 = {0x86L,-1L,-1L,0x53245E34L,1L,2L,8UL};
static int g_55 = 0x4D05C447L;
static char g_56 = 6L;
static unsigned g_57 = 4294967292UL;
static char g_86[2][7][4] = {{{8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}}, {{8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}, {8L, 0xF7L, 8L, 0xF7L}}};
static unsigned g_114 = 1UL;
static unsigned short g_115 = 65535UL;
static int g_117 = 0xF2B610B7L;
static short g_119 = 1L;
static int g_122[6] = {(-4L), 0xFC3FFF75L, (-4L), 0xFC3FFF75L, (-4L), 0xFC3FFF75L};
static struct S0 g_218 = {-1L,0x36L,0x5BC9L,0x01DDF3D5L,4L,0x0BL,0xDBL};
static unsigned g_297 = 0x2C10CE26L;
static unsigned short g_316 = 65535UL;
static int g_381 = 0xB91D5159L;
static int g_396 = (-7L);
static short g_631 = (-1L);
static unsigned short g_653 = 0UL;
static const unsigned char g_789 = 1UL;
static const unsigned g_1004 = 0x2422D65BL;
static unsigned short g_1100 = 0xD0DDL;
static int g_1101 = 0x5527A32FL;
static char g_1162 = 0L;
static short g_1167 = 0xC291L;
static int g_1424 = 1L;
static struct S0 g_1454 = {1L,0x17L,-2L,0x0B707A9BL,1L,-1L,0x86L};



static unsigned func_1(void);
static int func_2(short p_3, unsigned p_4, int p_5, unsigned char p_6);
static unsigned short func_10(unsigned p_11, short p_12, unsigned short p_13, int p_14, unsigned p_15);
static short func_16(unsigned char p_17, int p_18, const char p_19);
static int func_21(unsigned p_22, unsigned p_23, const unsigned p_24, int p_25);
static unsigned func_26(unsigned p_27, unsigned char p_28, int p_29, struct S0 p_30);
static unsigned func_33(unsigned p_34);
static short func_49(int p_50, int p_51);
static unsigned char func_78(struct S0 p_79, struct S0 p_80);
static struct S0 func_81(int p_82, unsigned p_83, unsigned p_84, unsigned char p_85);
static unsigned func_1(void)
{
    short l_20 = 1L;
    int l_41[3][6][7] = {{{0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}}, {{0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}}, {{0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}, {0x36EEBCB1L, 0x191D4D00L, 3L, 9L, 0L, (-2L), 1L}}};
    int l_1502 = 1L;
    short l_1507 = (-2L);
    int i, j, k;
    l_1502 ^= func_2((safe_add_func_uint16_t_u_u(g_9, (func_10(g_9, func_16(l_20, func_21(l_20, func_26((((safe_sub_func_int32_t_s_s(g_9, func_33((g_35--)))) | ((g_9 >= 0UL) | ((safe_add_func_int16_t_s_s(0x7F17L, l_20)) <= g_9))) < g_9), l_20, l_41[2][5][5], g_42), l_41[0][3][4], g_9), g_653), g_789, l_41[1][4][2], l_20) || l_41[2][5][5]))), g_1004, l_20, g_789);
    l_41[2][5][5] = (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(g_1100, l_41[2][5][3])) || l_41[1][3][1]) & (l_1502 |= (4294967289UL == (l_20 && func_49((g_218.f3 ^= func_78(g_1454, (g_42 = func_81(g_1100, l_41[2][5][5], ((-8L) >= 0xEB71F338L), l_1507)))), l_20))))), g_1454.f5));
    for (g_1424 = 0; (g_1424 == (-29)); g_1424 = safe_sub_func_int16_t_s_s(g_1424, 1))
    {
        unsigned l_1510 = 0x45BE08D9L;
        l_1510++;
    }
    return g_631;
}







static int func_2(short p_3, unsigned p_4, int p_5, unsigned char p_6)
{
    short l_1480 = (-7L);
    int l_1481 = 9L;
    short l_1489 = 0x212CL;
    l_1481 = l_1480;
    g_1454.f3 |= 1L;
    for (g_218.f6 = 0; (g_218.f6 <= 5); g_218.f6 += 1)
    {
        unsigned l_1482 = 0UL;
        return l_1482;
    }
    l_1481 = (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_1489, (func_21((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(func_10(l_1480, l_1480, g_1424, (safe_lshift_func_uint8_t_u_u(g_1162, ((g_117 <= ((safe_sub_func_uint8_t_u_u(p_5, ((safe_mul_func_uint8_t_u_u((func_33((((safe_rshift_func_uint8_t_u_s(g_42.f1, l_1480)) || g_1454.f6) & 0L)) || l_1480), 0xAAL)) == g_122[2]))) || l_1480)) < 0x214FL))), p_5), g_9)), l_1489)), l_1481, p_5, l_1489) | l_1489))), p_4)), l_1489));
    return g_86[1][1][0];
}







static unsigned short func_10(unsigned p_11, short p_12, unsigned short p_13, int p_14, unsigned p_15)
{
    int l_956 = 6L;
    int l_957 = 1L;
    int l_958 = 3L;
    int l_959[3];
    short l_974 = 0x9FA3L;
    short l_975 = 0xD743L;
    struct S0 l_976 = {-1L,0x41L,1L,0xDDF669E8L,-1L,1L,250UL};
    struct S0 l_983 = {0x6DL,0xF2L,0x2108L,0x06755F35L,9L,0xECL,0x12L};
    int l_1086[1];
    unsigned l_1113 = 0x288B2578L;
    int l_1119 = (-1L);
    const unsigned short l_1220 = 0xB4E5L;
    char l_1319 = 1L;
    unsigned char l_1337 = 0x61L;
    unsigned l_1364[5][7] = {{0xAB7CF4AEL, 1UL, 0xA107F669L, 0x4681AD3FL, 0x4681AD3FL, 0xA107F669L, 1UL}, {0xAB7CF4AEL, 1UL, 0xA107F669L, 0x4681AD3FL, 0x4681AD3FL, 0xA107F669L, 1UL}, {0xAB7CF4AEL, 1UL, 0xA107F669L, 0x4681AD3FL, 0x4681AD3FL, 0xA107F669L, 1UL}, {0xAB7CF4AEL, 1UL, 0xA107F669L, 0x4681AD3FL, 0x4681AD3FL, 0xA107F669L, 1UL}, {0xAB7CF4AEL, 1UL, 0xA107F669L, 0x4681AD3FL, 0x4681AD3FL, 0xA107F669L, 1UL}};
    int l_1398 = (-4L);
    unsigned char l_1417 = 0xA3L;
    int l_1426 = 1L;
    unsigned char l_1427 = 255UL;
    int l_1452 = (-9L);
    int l_1476 = 0x5C4E44AFL;
    unsigned l_1477 = 0xA9D09C3DL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_959[i] = 0x34A6E298L;
    for (i = 0; i < 1; i++)
        l_1086[i] = 0x4A8A7177L;
    for (g_56 = (-7); (g_56 > 23); ++g_56)
    {
        unsigned char l_960 = 0x9EL;
        int l_973 = 0x416C4BB7L;
        --l_960;
        g_122[1] ^= (g_218.f3 = ((((p_15 && (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_959[1] = 0xDDL), p_11)), 0xD6L))) == (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((func_21(p_15, (l_960 || 0xC9L), (safe_rshift_func_int8_t_s_u((l_973 = g_57), 6)), l_974) & l_975), g_631)), 1L))) >= (-2L)) <= (-3L)));
        return g_122[5];
    }
    l_976 = func_81(g_218.f4, g_631, g_42.f4, g_57);
    if ((l_976.f3 = ((l_976.f0 ^ p_14) & ((safe_sub_func_uint8_t_u_u(l_976.f4, ((((p_13 = ((65529UL != ((l_959[0] <= (safe_rshift_func_int16_t_s_u(p_13, (safe_mod_func_uint16_t_u_u((func_26(func_49(func_78(l_976, l_983), l_976.f1), l_956, g_789, l_983) | l_983.f0), 0x0302L))))) && l_976.f6)) | l_974)) == 0x3754L) < p_12) == p_12))) == (-7L)))))
    {
        const int l_1001[2][8] = {{1L, (-6L), 0xC0CB0559L, 0xC0CB0559L, (-6L), 1L, (-6L), 0xC0CB0559L}, {1L, (-6L), 0xC0CB0559L, 0xC0CB0559L, (-6L), 1L, (-6L), 0xC0CB0559L}};
        char l_1006 = 0xBBL;
        int l_1009[2][6][8] = {{{0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}}, {{0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}, {0x3E261264L, 0x8F982FECL, (-6L), 0xAB4C7DBFL, (-1L), 0xC0A000D2L, (-3L), 0xAB4C7DBFL}}};
        unsigned l_1011 = 0xEDB0CDEEL;
        unsigned short l_1085 = 0xA6B4L;
        unsigned char l_1099 = 0UL;
        int l_1161 = (-1L);
        int i, j, k;
        for (g_631 = 0; (g_631 >= (-8)); g_631--)
        {
            unsigned char l_1003 = 0xA5L;
            int l_1007[4][9][5] = {{{0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}}, {{0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}}, {{0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}}, {{0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}, {0xF04CDA72L, 0x1E0EBDC2L, 0x41A5898BL, 0L, 0x41A5898BL}}};
            short l_1016 = (-1L);
            unsigned short l_1044 = 65535UL;
            unsigned l_1049 = 0x5979C04AL;
            unsigned char l_1053[7] = {0UL, 0UL, 1UL, 0UL, 0UL, 1UL, 0UL};
            int i, j, k;
            for (g_42.f6 = 0; (g_42.f6 <= 2); g_42.f6 += 1)
            {
                int l_1002 = 9L;
                int l_1005[8][9] = {{(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}, {(-6L), 0xF5A99025L, 0x0FCBF350L, 0xF5A99025L, (-6L), 0x9BCC2622L, (-6L), 0xF5A99025L, 0x0FCBF350L}};
                int i, j;
                l_1005[4][2] &= (func_49((safe_mod_func_int32_t_s_s((!(func_21((l_959[g_42.f6] == ((l_959[g_42.f6] ^ 0x04D87A4AL) <= 0x1AL)), l_959[g_42.f6], (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((65533UL || func_33((l_976.f3 = ((safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s((0L ^ ((safe_sub_func_uint8_t_u_u(((g_297 != (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((l_1003 = (func_49(func_33((l_1002 &= (func_21(p_15, p_13, l_1001[0][3], g_42.f6) & (-2L)))), g_42.f1) && 1UL)) && g_1004) && g_218.f5), 0x8D78L)), l_959[g_42.f6]))) ^ p_14), 0xDCL)) | p_15)), 0UL)) == p_11))) || 0xDA32L)))) == g_789), p_11)) ^ l_1001[0][3]), 13)), l_957) && g_122[4])), l_959[g_42.f6])), l_1001[0][3]) || 0x796A4F84L);
                for (g_42.f1 = 1; (g_42.f1 >= 0); g_42.f1 -= 1)
                {
                    int l_1008 = 0x4377B2C0L;
                    int l_1010[6] = {7L, (-1L), 7L, (-1L), 7L, (-1L)};
                    int i, j, k;
                    if (g_86[g_42.f1][(g_42.f6 + 3)][g_42.f6])
                        break;
                    l_1011--;
                    if (l_1009[1][5][6])
                        break;
                }
                if (((((g_316 = l_1001[0][1]) <= (func_21(g_86[1][1][0], l_1001[0][3], l_974, (safe_mul_func_uint16_t_u_u(p_11, 0xFF11L))) >= ((l_976.f3 ^= p_13) > func_33(g_218.f6)))) & l_1016) == l_1009[1][5][6]))
                {
                    const unsigned char l_1022[8] = {8UL, 255UL, 8UL, 255UL, 8UL, 255UL, 8UL, 255UL};
                    int l_1043[4][8] = {{1L, 0x69E99F8BL, 0x26AC0A04L, (-1L), (-1L), 0x26AC0A04L, 0x69E99F8BL, 1L}, {1L, 0x69E99F8BL, 0x26AC0A04L, (-1L), (-1L), 0x26AC0A04L, 0x69E99F8BL, 1L}, {1L, 0x69E99F8BL, 0x26AC0A04L, (-1L), (-1L), 0x26AC0A04L, 0x69E99F8BL, 1L}, {1L, 0x69E99F8BL, 0x26AC0A04L, (-1L), (-1L), 0x26AC0A04L, 0x69E99F8BL, 1L}};
                    int i, j;
                    if ((l_1007[3][6][2] = p_13))
                    {
                        unsigned l_1021 = 7UL;
                        l_959[g_42.f6] |= ((--p_13) != (((0UL == (g_218.f2 > 0xFCL)) == func_21(l_1003, p_15, g_42.f1, (4UL | (safe_add_func_int32_t_s_s(func_21((!(g_86[1][1][0] | (((0xEB880B1EL != p_12) || g_42.f6) | 0xC27AL))), l_1021, l_1022[2], l_1007[3][6][2]), 0x5DF4D24FL))))) & 0x47L));
                        return l_1007[3][6][2];
                    }
                    else
                    {
                        int l_1042 = 0x63118EC2L;
                        g_218.f4 &= ((p_13 < (safe_mul_func_uint8_t_u_u((((((p_11 || g_297) != (((p_15 == (p_12 = (-4L))) == g_114) > p_15)) == (p_14 != (g_218.f6++))) > (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_1022[2], g_42.f0)), p_14))) >= 1UL), p_11))) ^ l_959[0]);
                        if (p_11)
                            continue;
                        l_1043[1][3] ^= ((safe_mod_func_int16_t_s_s((g_218.f2 &= (safe_unary_minus_func_uint8_t_u(g_9))), ((safe_lshift_func_uint8_t_u_s((p_15 >= ((p_15 || (g_42.f0 = (func_21((safe_mod_func_uint32_t_u_u((~((g_218.f6 = (g_35 = g_86[1][5][0])) < (safe_mod_func_uint16_t_u_u(0x71E3L, 0x19B5L)))), g_9)), (l_1042 && p_13), p_14, l_1001[0][3]) && g_119))) && l_1022[3])), g_122[1])) && g_86[1][5][1]))) || 0UL);
                    }
                    l_1043[1][4] = g_115;
                    g_218.f3 = func_49(g_114, p_14);
                    for (g_42.f5 = 3; (g_42.f5 >= 0); g_42.f5 -= 1)
                    {
                        int i, j, k;
                        return l_1007[g_42.f5][(g_42.f6 + 4)][(g_42.f6 + 1)];
                    }
                }
                else
                {
                    short l_1052 = 0xC6BDL;
                    g_381 = g_42.f4;
                    l_1044++;
                    for (l_976.f0 = 0; (l_976.f0 == 23); l_976.f0 = safe_add_func_int16_t_s_s(l_976.f0, 3))
                    {
                        unsigned l_1054[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1054[i] = 0xCECFED92L;
                        l_959[g_42.f6] |= ((p_12 || l_1049) ^ (--p_11));
                        g_218 = func_81(p_11, l_1052, g_42.f6, l_1053[6]);
                        if (p_11)
                            break;
                        if (l_1054[6])
                            continue;
                    }
                }
            }
        }
        l_957 ^= g_316;
        if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((~(safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((func_33(((safe_add_func_uint8_t_u_u(0xA0L, (l_957 = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((l_976.f3 = (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((0xD8L ^ (g_42.f1 = (safe_add_func_int32_t_s_s(func_33(g_218.f4), ((safe_mul_func_uint8_t_u_u(l_983.f4, (safe_mod_func_uint8_t_u_u(func_21(((safe_mod_func_uint16_t_u_u(((p_14 ^ (safe_unary_minus_func_int32_t_s((l_1009[0][4][7] = l_976.f5)))) <= (safe_mul_func_int16_t_s_s((4UL ^ (((+(l_1085 = g_396)) | l_983.f1) | 0x82L)), 9L))), g_56)) || 0xF41EF520L), l_1006, l_976.f3, l_976.f3), l_1086[0])))) || g_42.f4))))) <= p_12), 0xEFL)), 1)), p_14))) && 65535UL) ^ l_1001[0][3]), 0x0737L)), l_1011))))) < 0L)) || g_42.f0))), g_42.f4))), l_958)), 1UL)))
        {
            struct S0 l_1089 = {0L,0x93L,-1L,0x0494D331L,0L,0L,0xCBL};
            int l_1102 = (-5L);
            int l_1103[10][1][7] = {{{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}, {{8L, 0xA6A70A40L, (-2L), 0x78CB960BL, 0x78CB960BL, (-2L), 0xA6A70A40L}}};
            unsigned short l_1104 = 0x599AL;
            int i, j, k;
            for (p_12 = (-29); (p_12 == 14); ++p_12)
            {
                unsigned short l_1095 = 0xB368L;
                for (g_42.f2 = 0; (g_42.f2 >= 0); g_42.f2 -= 1)
                {
                    unsigned l_1096[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1096[i] = 1UL;
                    l_983 = l_1089;
                    for (g_381 = 0; (g_381 <= 0); g_381 += 1)
                    {
                        int i;
                        l_1086[g_381] = 0x7D59C7C5L;
                        g_1100 ^= (safe_add_func_int8_t_s_s(6L, (func_49((l_1089.f4 ^= ((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u(l_1086[g_42.f2], (((g_297 |= (func_21(l_1086[g_381], l_1095, p_14, l_1096[3]) & (safe_rshift_func_int16_t_s_s((func_33((p_12 ^ (g_42.f4 = g_218.f3))) != l_1086[g_42.f2]), g_35)))) >= l_1095) ^ l_1099))))) | 65535UL)), l_1095) || g_55)));
                        l_983 = g_42;
                        return p_13;
                    }
                }
            }
            l_1104++;
            for (l_1089.f6 = 0; (l_1089.f6 <= 5); l_1089.f6 += 1)
            {
                unsigned l_1107 = 0x1BB3B08CL;
                int i;
                l_1107--;
                g_42.f4 &= (g_122[l_1089.f6] != p_14);
                if (l_1103[6][0][4])
                    break;
            }
        }
        else
        {
            int l_1112 = 0x311CF272L;
            int l_1117 = 4L;
            int l_1118 = 8L;
            unsigned l_1121 = 0x58A300D9L;
            unsigned l_1137[5][3] = {{0x0B10DFFEL, 0x0B10DFFEL, 4294967295UL}, {0x0B10DFFEL, 0x0B10DFFEL, 4294967295UL}, {0x0B10DFFEL, 0x0B10DFFEL, 4294967295UL}, {0x0B10DFFEL, 0x0B10DFFEL, 4294967295UL}, {0x0B10DFFEL, 0x0B10DFFEL, 4294967295UL}};
            int i, j;
            for (l_976.f2 = 0; (l_976.f2 == 13); l_976.f2++)
            {
                int l_1116 = (-10L);
                int l_1120[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1120[i] = 0x022109D8L;
                ++l_1113;
                ++l_1121;
                if ((g_381 = g_218.f5))
                {
                    return g_122[5];
                }
                else
                {
                    int l_1132 = 0x68D3C43EL;
                    g_42.f3 ^= ((safe_lshift_func_int8_t_s_u(func_49(l_1009[1][5][5], p_11), (safe_lshift_func_uint16_t_u_s((((l_1117 |= (safe_mul_func_uint16_t_u_u(((p_13 = g_218.f6) & (((p_11 ^ (+((l_1120[0] = p_15) & (((l_1112 &= g_218.f1) ^ (safe_lshift_func_int16_t_s_s((((p_11 > (g_42.f0 >= 0x49L)) | g_42.f1) > l_1009[0][1][3]), g_42.f2))) & g_42.f1)))) & 0x1ABCFA95L) >= p_11)), g_316))) == g_119) || p_12), p_12)))) < (-10L));
                    if (l_1132)
                        break;
                }
                l_957 = ((safe_rshift_func_int8_t_s_u((g_56 |= g_42.f1), 1)) != (safe_sub_func_uint16_t_u_u((((!(l_1137[2][0] | (g_57 > (safe_sub_func_uint8_t_u_u(p_15, (l_1117 = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(l_1116, g_381)), 14)) > l_1137[2][0]))))))) <= (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_976.f2, (l_983.f4 = ((safe_mod_func_int32_t_s_s(g_218.f1, g_57)) & g_396)))), 6UL))) >= p_13), p_14)));
            }
            if ((p_14 == (l_1117 = (safe_sub_func_uint32_t_u_u((!(p_11 = (g_1162 |= (func_16(l_1117, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((0xEDD2L | (g_42.f0 && (l_1009[1][5][6] == (safe_unary_minus_func_uint32_t_u((0xED09909EL ^ l_1137[2][0])))))), 6)), (safe_mul_func_uint16_t_u_u((((p_13 < (((safe_mul_func_int8_t_s_s(g_42.f0, (-1L))) <= p_11) == 1UL)) < g_57) ^ l_1161), (-1L))))), p_13) >= g_1100)))), 0UL)))))
            {
                return l_974;
            }
            else
            {
                for (g_316 = (-4); (g_316 <= 29); ++g_316)
                {
                    for (l_958 = (-4); (l_958 < 22); l_958++)
                    {
                        g_218 = g_42;
                    }
                }
            }
        }
        l_1009[1][5][6] = (func_33((g_42.f0 && p_14)) > g_381);
    }
    else
    {
        int l_1177 = 0xF217C681L;
        struct S0 l_1204 = {0x7FL,0xA4L,-1L,0L,0x63242231L,0x65L,2UL};
        const unsigned l_1306 = 1UL;
        unsigned char l_1323 = 0x91L;
        int l_1353 = 0x875B1CB8L;
        int l_1354 = 0xF543F19CL;
        int l_1355 = 9L;
        int l_1357 = 0L;
        int l_1358 = (-3L);
        int l_1359 = 0xE2D0D744L;
        int l_1362 = 2L;
        int l_1363 = 0L;
        int l_1408[7][10][3] = {{{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}, {{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}, {{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}, {{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}, {{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}, {{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}, {{0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}, {0L, 0L, 0x05C794A8L}}};
        unsigned l_1411 = 0x7A22186EL;
        short l_1425 = (-3L);
        short l_1469[10][2][10] = {{{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}, {{0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}, {0x703CL, 0x7E47L, 0L, 7L, 0x590FL, 0x4219L, 0x703CL, (-2L), (-2L), (-5L)}}};
        char l_1470 = (-1L);
        int l_1475 = (-7L);
        int i, j, k;
        if (func_26(l_956, p_11, l_983.f1, g_218))
        {
            char l_1175[2][3][10] = {{{0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L}, {0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L}, {0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L}}, {{0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L}, {0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L}, {0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L, 0x7DL, 0x64L}}};
            int l_1194 = 9L;
            int l_1195 = (-8L);
            struct S0 l_1252 = {9L,0xAFL,-1L,-5L,1L,0xCEL,0x2BL};
            unsigned l_1318 = 0x89C9A294L;
            int l_1320[10][5] = {{0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}, {0x74D585E2L, 0x187B81ABL, 0x8546BEFCL, (-1L), 9L}};
            int l_1321 = 1L;
            int l_1322[8][7] = {{(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}, {(-5L), 4L, (-5L), 0x1326441EL, 0x73AB8C44L, 1L, 0x564FEFBBL}};
            int i, j, k;
            for (g_218.f5 = 0; (g_218.f5 <= 0); g_218.f5 += 1)
            {
                unsigned l_1176 = 4294967287UL;
                int l_1178 = 0L;
                short l_1179 = 0x243CL;
                struct S0 l_1180[7][7][5] = {{{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}, {{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}, {{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}, {{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}, {{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}, {{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}, {{{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}, {{0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0x06L,0x0BL,0x9EFCL,9L,0x1B134B77L,5L,1UL}, {0xC2L,0xDBL,1L,-1L,0xFE7BA43BL,-3L,7UL}, {0x9EL,0xEEL,1L,0xF981F841L,0x2C7567AAL,0x76L,0UL}, {0xE6L,-7L,-4L,0xCBD07EB6L,0xD67723EBL,-8L,248UL}}}};
                short l_1202[8] = {0xEBA2L, (-1L), 0xEBA2L, (-1L), 0xEBA2L, (-1L), 0xEBA2L, (-1L)};
                int i, j, k;
                for (l_976.f1 = 2; (l_976.f1 >= 0); l_976.f1 -= 1)
                {
                    unsigned l_1168 = 4294967295UL;
                    struct S0 l_1181 = {0x7FL,-1L,-1L,0xDE3A5E40L,0x8D83AEFAL,0L,0x45L};
                    unsigned l_1203[1][9];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_1203[i][j] = 0x6BEF3781L;
                    }
                    for (l_1119 = 0; (l_1119 <= 2); l_1119 += 1)
                    {
                        int i;
                        --l_1168;
                        l_1179 = (l_1178 = ((g_1167 = (safe_sub_func_uint8_t_u_u((g_42.f6 = ((((!(g_122[l_976.f1] = 0UL)) & (((g_1162 = func_49(l_1086[g_218.f5], l_959[l_976.f1])) | (g_218.f4 != func_33((safe_mod_func_uint16_t_u_u((l_1175[1][0][2] || (func_33(l_1176) && (l_959[0] >= p_12))), 65535UL))))) ^ l_1177)) && p_13) & l_1176)), l_1175[1][0][2]))) <= p_14));
                    }
                    for (g_117 = 2; (g_117 >= 0); g_117 -= 1)
                    {
                        int i;
                        g_122[(l_976.f1 + 2)] &= (l_959[l_976.f1] = (l_1086[g_218.f5] = 0x6160741AL));
                        g_396 &= (l_959[l_976.f1] ^= func_78((l_1180[1][6][2] = l_983), l_983));
                        g_42 = l_1181;
                    }
                    if (l_1086[g_218.f5])
                        break;
                    l_1181.f4 ^= (l_1086[g_218.f5] && (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_122[(g_218.f5 + 5)], (func_49((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((l_1180[1][6][2].f3 >= p_13), 246UL)), 10)), (l_1203[0][3] = func_33(((safe_mod_func_int32_t_s_s((l_1195 = l_1194), (safe_lshift_func_int8_t_s_u((g_1167 == 0xDBL), (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((-1L) != g_316), l_1176)), g_631)))))) > l_1202[6])))) < 0x6196290AL))), 0)), 2)));
                }
                for (g_1100 = 0; (g_1100 <= 2); g_1100 += 1)
                {
                    int i;
                    if ((func_78(g_42, l_1204) < (l_1086[g_218.f5] | 0x20L)))
                    {
                        int i;
                        l_959[g_218.f5] = (l_1086[g_218.f5] = (safe_mul_func_int16_t_s_s(p_13, g_122[4])));
                    }
                    else
                    {
                        char l_1207 = 0x1FL;
                        int l_1210 = 0x67877623L;
                        l_1086[g_218.f5] ^= ((3UL || (0L <= (l_1207 && p_13))) || p_12);
                        l_1210 = (g_218.f4 = ((-3L) ^ (safe_sub_func_int32_t_s_s(0xE0FEC3F5L, g_789))));
                    }
                    for (l_983.f0 = 0; (l_983.f0 <= 4); l_983.f0 += 1)
                    {
                        int l_1217[1][2][9] = {{{0x695A6620L, 0x695A6620L, 0x1E95DC79L, 0x695A6620L, 0x695A6620L, 0x1E95DC79L, 0x695A6620L, 0x695A6620L, 0x1E95DC79L}, {0x695A6620L, 0x695A6620L, 0x1E95DC79L, 0x695A6620L, 0x695A6620L, 0x1E95DC79L, 0x695A6620L, 0x695A6620L, 0x1E95DC79L}}};
                        int i, j, k;
                        g_42.f4 |= ((func_49(func_33(l_1202[(l_983.f0 + 3)]), l_1175[g_218.f5][(g_218.f5 + 1)][(l_983.f0 + 5)]) != (safe_mul_func_int8_t_s_s((l_1217[0][0][5] = (safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((g_114 = l_1175[(g_218.f5 + 1)][g_1100][(g_1100 + 2)]), ((func_33((0xAEEDL | (65535UL | 0x3DB0L))) & p_12) && l_1180[1][6][2].f3))) & p_11), g_218.f4))), 0x43L))) & p_15);
                        if (l_956)
                            continue;
                    }
                }
            }
            for (g_631 = 0; (g_631 != 14); g_631 = safe_add_func_int16_t_s_s(g_631, 9))
            {
                unsigned l_1223 = 0xE4FAE8F3L;
                int l_1242 = 0x4AD774F5L;
                int l_1243 = (-2L);
                unsigned short l_1244 = 0xB34EL;
                if (l_1220)
                {
                    unsigned short l_1221 = 0UL;
                    struct S0 l_1245 = {0x75L,0x50L,0x39CBL,-1L,9L,1L,0xB8L};
                    if (((((p_15 |= l_1221) < (g_297 |= g_114)) ^ p_11) && (l_956 &= p_14)))
                    {
                        char l_1222 = 0x81L;
                        g_122[5] = (g_42.f6 == func_21(p_12, p_14, p_13, l_1222));
                        ++l_1223;
                    }
                    else
                    {
                        unsigned char l_1226 = 7UL;
                        int l_1227 = 1L;
                        g_381 = func_33(g_9);
                        l_1245 = func_81((+((l_1227 = (g_218.f5 |= (g_218.f3 && l_1226))) <= g_218.f6)), l_1175[1][0][2], (safe_lshift_func_int8_t_s_u(0xDAL, (p_15 <= l_1226))), ((((safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(0xFA306DBEL, (safe_add_func_uint16_t_u_u(((l_1243 = (l_1242 ^= ((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(l_1223, 0x1D26L)) || (-1L)), 0xDE586A32L)) < l_1204.f2))) > l_1175[1][0][2]), l_1244)))) || g_117) & 0UL), p_14)) | 8UL) <= g_35) & l_976.f5));
                        l_1252 = func_81(l_1204.f4, ((+func_21(l_976.f0, (l_1175[0][0][8] >= ((safe_mul_func_int16_t_s_s(p_13, (safe_mul_func_int16_t_s_s(l_1223, ((g_218.f0 <= (safe_sub_func_int16_t_s_s(((func_49((func_33(p_13) | (((l_1242 = (0xD77DL >= l_974)) || g_1162) == p_11)), g_789) >= l_1245.f5) ^ 0xC59AL), l_1226))) > l_1245.f6))))) > g_42.f0)), l_1227, l_1243)) < 0x60B46870L), g_316, p_11);
                    }
                    if (func_33(p_15))
                    {
                        g_218 = g_218;
                        l_976 = func_81(g_122[1], p_14, ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(g_42.f2, 6)), g_1162)) < (safe_sub_func_uint16_t_u_u(l_1204.f1, p_11))), (safe_sub_func_uint16_t_u_u((p_13 = func_49(l_1245.f6, p_12)), p_12)));
                        l_1204.f3 ^= (g_115 && 0UL);
                    }
                    else
                    {
                        int l_1267 = 0x36BB4419L;
                        int l_1272 = 0xD87DB53FL;
                        if (g_42.f2)
                            break;
                        g_381 ^= func_49(p_14, (l_1272 = ((safe_mul_func_int16_t_s_s((g_119 = (g_42.f2 = l_976.f3)), p_11)) == (g_218.f5 = (((g_35 = (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(p_14, 0x7CA7L)), l_1267)) > (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((!(0x7CB8D661L != l_1244)) >= func_21((p_15++), g_86[1][1][0], l_1223, p_14)), g_631)), l_1204.f6))) & p_11)) & g_122[4]) == (-1L))))));
                        g_381 = (+l_1245.f4);
                        l_1177 &= l_1195;
                    }
                    if (g_57)
                    {
                        unsigned l_1288 = 3UL;
                        g_122[5] |= (safe_rshift_func_uint16_t_u_s(g_42.f6, l_1245.f2));
                        g_218.f3 &= ((safe_lshift_func_int16_t_s_s(1L, 3)) < (safe_sub_func_uint16_t_u_u((p_11 ^ (((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(p_13)) ^ ((safe_mul_func_int16_t_s_s((0UL == (l_1242 = l_1288)), (4294967288UL <= ((p_13 & (safe_add_func_int16_t_s_s(p_13, ((g_122[5] = (safe_lshift_func_int8_t_s_s(((l_1244 && g_55) & l_976.f0), p_14))) | p_15)))) | g_1004)))) < 0x94652C3DL)), p_12)), 0)) ^ g_1167) == g_117)), 1UL)));
                    }
                    else
                    {
                        l_1252.f4 = ((!g_56) != ((g_1100 = (l_1204.f3 &= g_218.f4)) >= (safe_sub_func_int16_t_s_s((l_1194 &= func_78(func_81(g_297, ((((0x0EL ^ ((safe_add_func_int8_t_s_s(g_1167, 0x1DL)) > g_122[5])) == ((g_218.f2 = (safe_rshift_func_int8_t_s_s((g_653 && (((safe_add_func_int16_t_s_s(p_11, 0x5EF5L)) <= g_218.f3) != p_12)), 4))) | 1L)) || l_976.f0) <= 4L), p_14, p_14), g_42)), l_1195))));
                    }
                    for (l_1252.f0 = 0; (l_1252.f0 > 9); l_1252.f0 = safe_add_func_uint32_t_u_u(l_1252.f0, 6))
                    {
                        unsigned short l_1303 = 65535UL;
                        --l_1303;
                        g_122[5] ^= (l_983.f3 ^ ((l_1306 < g_631) ^ (safe_mul_func_int8_t_s_s(g_115, ((g_86[1][1][3] &= (p_11 | 1UL)) < 2L)))));
                    }
                }
                else
                {
                    unsigned char l_1309 = 255UL;
                    return l_1309;
                }
                l_959[0] |= (-1L);
                for (g_42.f2 = (-29); (g_42.f2 != (-9)); ++g_42.f2)
                {
                    l_1252.f3 ^= (safe_sub_func_uint32_t_u_u(l_1204.f1, p_11));
                    if (l_1244)
                        continue;
                }
                l_1242 |= func_21((safe_lshift_func_uint8_t_u_u((func_78(l_1204, l_1204) <= (((p_13 || 0UL) < (safe_mod_func_int32_t_s_s(func_33(((!func_33(p_11)) >= l_1318)), l_1319))) != g_316)), g_631)), p_12, p_13, g_653);
            }
            l_1323++;
        }
        else
        {
            const unsigned l_1328 = 4294967295UL;
            struct S0 l_1338 = {0x83L,-1L,3L,0xF6D9B9DFL,0xF41B5DA4L,8L,0x0AL};
            int l_1356 = (-1L);
            int l_1360 = 0x35784215L;
            int l_1361[6][7] = {{(-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L)}, {(-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L)}, {(-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L)}, {(-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L)}, {(-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L)}, {(-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L), 0xF3E08EC2L, (-1L)}};
            char l_1410 = (-1L);
            unsigned short l_1414[5][8][6] = {{{0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}}, {{0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}}, {{0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}}, {{0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}}, {{0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}, {0x5DF1L, 0xD7D0L, 0x4266L, 1UL, 0UL, 0x4772L}}};
            unsigned l_1453[5][10][3] = {{{4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}}, {{4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}}, {{4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}}, {{4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}}, {{4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}, {4294967291UL, 6UL, 4294967288UL}}};
            unsigned l_1466[3][7][6] = {{{0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}}, {{0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}}, {{0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}, {0x2F3F59D2L, 0x80B5EB2EL, 0x0619C570L, 4294967290UL, 4UL, 0x036A5B06L}}};
            unsigned l_1472[8] = {0xE089990DL, 1UL, 0xE089990DL, 1UL, 0xE089990DL, 1UL, 0xE089990DL, 1UL};
            int i, j, k;
            if ((l_959[0] = p_13))
            {
                unsigned short l_1329 = 0xB408L;
                struct S0 l_1339[5][8] = {{{0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0x0EL,1L,-2L,0xDF2EA053L,0x05E0009EL,0L,2UL}, {0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0L,0x54L,0L,0x30727F6AL,0x435C3C15L,-1L,0x1CL}, {0x46L,0xF3L,0L,0x49570159L,0x3E1AC5DAL,0xF3L,0xB4L}, {1L,0x20L,0x2095L,0xD98D30EAL,9L,4L,251UL}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}}, {{0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0x0EL,1L,-2L,0xDF2EA053L,0x05E0009EL,0L,2UL}, {0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0L,0x54L,0L,0x30727F6AL,0x435C3C15L,-1L,0x1CL}, {0x46L,0xF3L,0L,0x49570159L,0x3E1AC5DAL,0xF3L,0xB4L}, {1L,0x20L,0x2095L,0xD98D30EAL,9L,4L,251UL}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}}, {{0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0x0EL,1L,-2L,0xDF2EA053L,0x05E0009EL,0L,2UL}, {0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0L,0x54L,0L,0x30727F6AL,0x435C3C15L,-1L,0x1CL}, {0x46L,0xF3L,0L,0x49570159L,0x3E1AC5DAL,0xF3L,0xB4L}, {1L,0x20L,0x2095L,0xD98D30EAL,9L,4L,251UL}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}}, {{0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0x0EL,1L,-2L,0xDF2EA053L,0x05E0009EL,0L,2UL}, {0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0L,0x54L,0L,0x30727F6AL,0x435C3C15L,-1L,0x1CL}, {0x46L,0xF3L,0L,0x49570159L,0x3E1AC5DAL,0xF3L,0xB4L}, {1L,0x20L,0x2095L,0xD98D30EAL,9L,4L,251UL}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}}, {{0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0x0EL,1L,-2L,0xDF2EA053L,0x05E0009EL,0L,2UL}, {0x3DL,2L,0xB265L,0x973D3161L,-4L,9L,0UL}, {0L,0x54L,0L,0x30727F6AL,0x435C3C15L,-1L,0x1CL}, {0x46L,0xF3L,0L,0x49570159L,0x3E1AC5DAL,0xF3L,0xB4L}, {1L,0x20L,0x2095L,0xD98D30EAL,9L,4L,251UL}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}, {0xF2L,0x9BL,-7L,0L,0x72F974ECL,0xE1L,0x57L}}};
                int i, j;
                l_1329 = (safe_rshift_func_uint8_t_u_u(l_1328, 5));
                g_122[5] = 0x00CCA499L;
                if ((safe_sub_func_uint8_t_u_u(((l_957 = (safe_unary_minus_func_uint32_t_u((g_117 >= ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_16(l_1337, g_218.f4, func_78(l_1338, l_1339[4][2])), l_956)), p_13)) && g_1162))))) == l_1204.f5), g_1162)))
                {
                    int l_1345 = 9L;
                    for (g_42.f5 = 27; (g_42.f5 > 7); --g_42.f5)
                    {
                        g_218 = l_983;
                        l_958 |= g_42.f1;
                    }
                    g_218.f3 = (~g_1167);
                    l_976 = l_1339[4][2];
                    for (g_218.f4 = 5; (g_218.f4 >= 0); g_218.f4 -= 1)
                    {
                        int i;
                        l_1339[4][2] = g_42;
                        l_1204.f3 = ((l_1339[4][2].f3 = g_42.f2) != (g_122[g_218.f4] = (p_12 < ((((~l_1338.f5) | g_1162) & (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_13)), ((l_1345 = (g_316 = (0x7900L || g_218.f6))) >= func_33(l_1339[4][2].f1))))) <= 0x51L))));
                        l_1177 |= g_9;
                    }
                }
                else
                {
                    for (l_983.f4 = 0; (l_983.f4 != 21); l_983.f4 = safe_add_func_uint16_t_u_u(l_983.f4, 8))
                    {
                        return p_12;
                    }
                    l_1086[0] = (!0x07A1180CL);
                    for (l_1337 = 0; (l_1337 >= 31); l_1337 = safe_add_func_int16_t_s_s(l_1337, 5))
                    {
                        unsigned short l_1350 = 0x8D27L;
                        if (g_42.f4)
                            break;
                        ++l_1350;
                    }
                }
                --l_1364[3][4];
            }
            else
            {
                unsigned short l_1369[7][2] = {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}};
                int l_1401[2];
                int l_1406 = 0L;
                char l_1409 = 0xCEL;
                const int l_1451 = 0x878412A1L;
                struct S0 l_1471[1] = {{1L,0xDFL,0x99B0L,0xA570E4D4L,4L,0xFAL,0xEBL}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1401[i] = 0x8F904824L;
                if ((safe_mod_func_uint8_t_u_u((g_218.f0 > ((l_1369[0][1] ^ p_15) == l_1369[2][1])), (safe_add_func_int16_t_s_s(l_1086[0], g_117)))))
                {
                    int l_1381 = (-1L);
                    int l_1404 = 0x799EACF7L;
                    int l_1405 = 0xEDE4FBEEL;
                    int l_1407[3][10] = {{(-6L), 0L, 0xA0837C72L, 0x058F8BB9L, 0x058F8BB9L, 0xA0837C72L, 0L, (-6L), 0xA0837C72L, (-6L)}, {(-6L), 0L, 0xA0837C72L, 0x058F8BB9L, 0x058F8BB9L, 0xA0837C72L, 0L, (-6L), 0xA0837C72L, (-6L)}, {(-6L), 0L, 0xA0837C72L, 0x058F8BB9L, 0x058F8BB9L, 0xA0837C72L, 0L, (-6L), 0xA0837C72L, (-6L)}};
                    int i, j;
                    for (g_42.f4 = 4; (g_42.f4 >= 0); g_42.f4 -= 1)
                    {
                        l_1381 = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((0xA55032CAL ^ func_21((((((l_1338.f3 ^= (safe_lshift_func_int8_t_s_s(((func_21(g_57, g_789, p_15, (g_396 = l_1369[4][0])) | (3L | ((safe_lshift_func_int16_t_s_s(g_218.f2, (safe_unary_minus_func_uint32_t_u((0xF5C8CAE9L ^ l_1369[0][0]))))) != 0xE71F8E4EL))) != 0x6E3B306AL), 3))) & 0x0CDB550CL) || (-1L)) <= p_11) || p_15), l_956, p_15, g_218.f6)) < (-1L)), 5)), l_1381));
                    }
                    if ((p_14 != (safe_rshift_func_int8_t_s_u((l_1381 | (l_1353 = ((safe_lshift_func_uint8_t_u_u((l_1360 = (((((l_1381 != (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_1361[2][6], 7)), (safe_lshift_func_int16_t_s_u(l_1204.f5, 10)))), (l_1369[3][0] < func_49(func_49((safe_mod_func_uint8_t_u_u((((l_983.f1 & (!0x2FL)) <= 1L) <= p_15), p_15)), g_122[5]), g_42.f6))))) & g_218.f3) && 0x33L) == g_1167) ^ g_86[1][5][1])), l_1369[1][0])) < 0x4BL))), l_1357))))
                    {
                        short l_1399[8];
                        int l_1400 = 6L;
                        int l_1402 = 0x80393597L;
                        int l_1403[3][2][9] = {{{0x46B7C05CL, 0xA3CBF9F1L, 0L, 0xB1785A29L, 0xB1785A29L, 0L, 0xA3CBF9F1L, 0x46B7C05CL, 0xC877AA19L}, {0x46B7C05CL, 0xA3CBF9F1L, 0L, 0xB1785A29L, 0xB1785A29L, 0L, 0xA3CBF9F1L, 0x46B7C05CL, 0xC877AA19L}}, {{0x46B7C05CL, 0xA3CBF9F1L, 0L, 0xB1785A29L, 0xB1785A29L, 0L, 0xA3CBF9F1L, 0x46B7C05CL, 0xC877AA19L}, {0x46B7C05CL, 0xA3CBF9F1L, 0L, 0xB1785A29L, 0xB1785A29L, 0L, 0xA3CBF9F1L, 0x46B7C05CL, 0xC877AA19L}}, {{0x46B7C05CL, 0xA3CBF9F1L, 0L, 0xB1785A29L, 0xB1785A29L, 0L, 0xA3CBF9F1L, 0x46B7C05CL, 0xC877AA19L}, {0x46B7C05CL, 0xA3CBF9F1L, 0L, 0xB1785A29L, 0xB1785A29L, 0L, 0xA3CBF9F1L, 0x46B7C05CL, 0xC877AA19L}}};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_1399[i] = 0x0CAFL;
                        --l_1411;
                        l_1204.f3 = 0xDC1125FBL;
                        ++l_1414[3][3][1];
                        l_1417--;
                    }
                    else
                    {
                        int l_1420 = 0x437C0DF3L;
                        int l_1421 = 0L;
                        int l_1422 = (-1L);
                        int l_1423[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1423[i] = (-10L);
                        ++l_1427;
                        l_1359 &= ((((g_218.f3 &= (g_42.f6 ^ ((l_1361[4][6] >= (l_1354 = ((l_1363 ^= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(g_297)), p_14))) >= (safe_sub_func_int32_t_s_s((g_1100 == func_21((l_1421 && (+(safe_add_func_int32_t_s_s(1L, ((l_956 = (safe_add_func_int16_t_s_s(l_1409, g_114))) < l_1423[4]))))), p_11, g_42.f6, g_114)), g_115))))) != 255UL))) | 0x5364A5B2L) && 0x14L) > 253UL);
                    }
                    if ((((l_1381 == (safe_mul_func_int8_t_s_s((g_86[1][3][2] ^= g_218.f3), (l_1407[1][9] ^= func_21(p_13, (0x07L && 255UL), func_21(l_1405, p_12, g_115, (g_42.f3 = (safe_rshift_func_int8_t_s_s(g_55, l_975)))), g_218.f4))))) ^ 0xA7EEL) < l_1409))
                    {
                        unsigned char l_1443 = 1UL;
                        l_1443--;
                    }
                    else
                    {
                        short l_1446 = (-3L);
                        int l_1449 = (-9L);
                        int l_1450 = 0xAF1B8A85L;
                        g_1454 = func_81(g_1101, (l_1446 |= g_42.f0), ((safe_mul_func_uint8_t_u_u(func_49((p_14 || (func_21(((p_13 >= (((~(l_1449 = p_12)) < ((!((g_55 & l_1405) | g_1004)) & (g_381 ^= p_15))) < 0xB52809ABL)) != 0L), l_1450, l_1451, l_1452) >= l_1453[3][4][2])), l_1337), p_14)) || p_13), p_11);
                        l_1204 = func_81(g_1454.f0, (l_1338.f4 = (p_14 == 65529UL)), (safe_add_func_int16_t_s_s(0L, 65535UL)), (g_42.f6 = (l_1362 &= p_11)));
                    }
                    return g_218.f4;
                }
                else
                {
                    int l_1463 = 0L;
                    l_976.f3 |= ((safe_add_func_int32_t_s_s(g_42.f6, (l_1360 = 0x627CF4A0L))) > (((0xC8L ^ (safe_mul_func_uint8_t_u_u((l_1338.f4 = func_49((safe_add_func_uint32_t_u_u(g_218.f6, l_1427)), l_1463)), ((g_1454.f2 | func_33(l_1361[2][6])) > l_1453[3][4][2])))) <= g_119) < 1UL));
                    for (l_1425 = 0; (l_1425 == 7); l_1425 = safe_add_func_int32_t_s_s(l_1425, 4))
                    {
                        l_1466[2][3][1]++;
                    }
                    l_1471[0] = func_81(func_21(p_12, l_1469[8][1][7], p_15, (l_1401[1] = l_1451)), (g_42.f1 && l_1369[0][1]), ((((func_33((g_115 || func_33(p_12))) ^ l_1463) || g_42.f1) | l_1470) != l_1463), p_13);
                }
                l_1472[5]--;
            }
        }
        l_1477--;
        l_1204 = l_1204;
    }
    return p_11;
}







static short func_16(unsigned char p_17, int p_18, const char p_19)
{
    unsigned short l_749 = 9UL;
    int l_752 = 0x58158667L;
    struct S0 l_760[3] = {{0L,0xC7L,0L,-1L,0L,-1L,247UL}, {0L,0xC7L,0L,-1L,0L,-1L,247UL}, {0L,0xC7L,0L,-1L,0L,-1L,247UL}};
    unsigned l_764 = 0x647330CAL;
    const unsigned short l_770[2] = {0x3F69L, 0x3F69L};
    short l_834[4] = {(-10L), 0xB71FL, (-10L), 0xB71FL};
    unsigned char l_921 = 0x14L;
    int l_946 = 0x67C03BB6L;
    int i;
    for (g_42.f4 = (-21); (g_42.f4 <= (-24)); --g_42.f4)
    {
        int l_744 = (-7L);
        return l_744;
    }
    for (g_297 = 0; (g_297 <= 1); g_297 += 1)
    {
        short l_750[6] = {7L, 7L, 0x4F78L, 7L, 7L, 0x4F78L};
        int l_751 = (-1L);
        int l_753 = 0x80E8A472L;
        struct S0 l_754 = {8L,1L,-7L,0x68FBFF16L,-1L,0x74L,0x8EL};
        unsigned l_761 = 0xE634BD56L;
        int i;
        if ((safe_mod_func_uint8_t_u_u(func_33((l_751 = (func_33(p_19) == (safe_mul_func_int16_t_s_s(func_49((l_750[5] = ((p_19 | (p_18 & l_749)) | l_749)), ((g_218.f1 = (l_751 | ((l_753 = (l_752 = 0x60L)) && g_42.f1))) & p_17)), g_86[1][1][0]))))), 250UL)))
        {
            struct S0 l_755 = {-4L,0x2FL,-3L,0x2F5D3DB9L,0xE6A727B4L,-2L,255UL};
            l_755 = l_754;
            for (l_755.f6 = 0; l_755.f6 < 2; l_755.f6 += 1)
            {
                for (g_218.f2 = 0; g_218.f2 < 7; g_218.f2 += 1)
                {
                    for (g_316 = 0; g_316 < 4; g_316 += 1)
                    {
                        g_86[l_755.f6][g_218.f2][g_316] = 0x27L;
                    }
                }
            }
            g_42.f3 ^= l_752;
            return g_42.f4;
        }
        else
        {
            short l_756 = 0x0B65L;
            struct S0 l_757 = {0xD2L,5L,-1L,0x1D85FC51L,1L,0xDFL,3UL};
            l_752 |= func_33(p_19);
            if (l_756)
                continue;
            g_42.f4 = (-3L);
            g_122[5] = func_78(l_757, g_42);
        }
        for (g_119 = 0; (g_119 <= 1); g_119 += 1)
        {
            int l_762 = 0L;
            if (g_114)
                break;
            for (g_631 = 1; (g_631 >= 0); g_631 -= 1)
            {
                struct S0 l_763 = {-1L,-1L,0xE0E6L,0x4AD65B82L,0xAA4D6D1BL,0L,0x88L};
                int i, j, k;
                g_218.f4 ^= func_78(func_81(g_86[g_119][(g_631 + 5)][(g_297 + 2)], ((g_86[g_119][(g_631 + 5)][(g_297 + 2)] <= func_33(l_749)) < g_35), ((l_752 ^= ((safe_lshift_func_int8_t_s_s(l_749, func_78(l_760[2], l_760[2]))) != p_17)) || l_761), l_762), l_763);
            }
        }
    }
    for (g_218.f3 = 5; (g_218.f3 >= 0); g_218.f3 -= 1)
    {
        int l_769 = 7L;
        int l_812 = 7L;
        int l_813[7];
        char l_830 = 9L;
        unsigned char l_868 = 0UL;
        unsigned char l_918 = 6UL;
        int i;
        for (i = 0; i < 7; i++)
            l_813[i] = 0x3E3A8C2FL;
        g_42 = func_81(p_18, ((func_49(g_218.f5, ((l_752 = (func_33((0x2580D25EL || g_218.f2)) && (g_218.f5 >= (4294967292UL <= g_297)))) | l_764)) != p_17) ^ g_86[1][3][0]), p_18, l_749);
        g_122[g_218.f3] = g_42.f5;
        if (p_17)
            continue;
        if (((safe_add_func_int8_t_s_s(g_86[1][5][2], (0x9BL && (((0xFA5FL ^ (safe_mod_func_uint8_t_u_u(((g_631 &= (((g_42.f1 = (g_218.f4 & g_122[g_218.f3])) != (func_21(((l_769 = func_33(p_19)) && 1UL), ((((p_17 | 0x0DL) >= 0UL) | 4294967295UL) | g_381), g_122[g_218.f3], l_760[2].f4) || 0x852B3C43L)) > g_122[g_218.f3])) >= p_19), g_122[g_218.f3]))) > l_770[0]) != p_19)))) ^ 0x2AL))
        {
            const char l_783 = (-2L);
            int l_795 = 0L;
            int l_815[4][8] = {{0xD9562689L, 0x918D280BL, 0xE0595FB8L, 0x0962DB45L, 0xC9058277L, 0x0962DB45L, 0xE0595FB8L, 0x918D280BL}, {0xD9562689L, 0x918D280BL, 0xE0595FB8L, 0x0962DB45L, 0xC9058277L, 0x0962DB45L, 0xE0595FB8L, 0x918D280BL}, {0xD9562689L, 0x918D280BL, 0xE0595FB8L, 0x0962DB45L, 0xC9058277L, 0x0962DB45L, 0xE0595FB8L, 0x918D280BL}, {0xD9562689L, 0x918D280BL, 0xE0595FB8L, 0x0962DB45L, 0xC9058277L, 0x0962DB45L, 0xE0595FB8L, 0x918D280BL}};
            unsigned l_817 = 0x3DD1A058L;
            int i, j;
            if (g_42.f1)
            {
                int l_774 = 0x1E1FAE8AL;
                int l_775[6] = {0xE4142B34L, 0x53205262L, 0xE4142B34L, 0x53205262L, 0xE4142B34L, 0x53205262L};
                int i;
                for (g_42.f5 = 0; (g_42.f5 == (-12)); --g_42.f5)
                {
                    int l_773[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_773[i] = 6L;
                    for (p_18 = 2; (p_18 >= 0); p_18 -= 1)
                    {
                        unsigned short l_776 = 0xEC3AL;
                        l_776++;
                        l_773[3] = 3L;
                        g_381 &= g_42.f0;
                    }
                }
                g_122[5] = (l_774 || 0x5A13L);
            }
            else
            {
                unsigned short l_788 = 1UL;
                int l_800 = 0xE1961DAFL;
                int l_809 = (-1L);
                int l_810[9][9][3] = {{{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}, {{0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}, {0x2F8ACCDDL, 0x54170CB0L, (-3L)}}};
                short l_828 = 0xE562L;
                unsigned l_855 = 0UL;
                struct S0 l_858 = {0x58L,3L,-9L,0L,-7L,0x5DL,0x39L};
                int i, j, k;
                for (g_218.f0 = (-14); (g_218.f0 >= (-26)); g_218.f0--)
                {
                    char l_792 = (-6L);
                    int l_811 = 1L;
                    int l_814 = 0xB83A3396L;
                    int l_816 = 0x896BF857L;
                    l_792 ^= ((((safe_sub_func_int32_t_s_s((g_122[0] = (((l_783 > (l_760[2].f0 == (((-2L) < (safe_rshift_func_int8_t_s_s(p_17, (g_218.f6 ^ ((((safe_add_func_int8_t_s_s(l_788, l_788)) >= g_789) || (safe_sub_func_int8_t_s_s((l_783 ^ p_17), l_760[2].f1))) | 2L))))) | 0UL))) | l_783) & 8UL)), 0x0449D25AL)) | g_42.f1) == 1L) | g_218.f5);
                    if (p_19)
                    {
                        unsigned l_796 = 0xA770123FL;
                        int l_797[5] = {0xA129A69AL, (-1L), 0xA129A69AL, (-1L), 0xA129A69AL};
                        int i;
                        l_752 = (safe_lshift_func_int8_t_s_s((l_795 = p_19), (l_797[1] = l_796)));
                        g_218.f4 = (func_21((safe_sub_func_uint32_t_u_u(g_42.f0, func_33(l_764))), l_760[2].f1, (l_800 = p_18), p_17) <= (((!p_18) <= (g_42.f2 = ((l_797[3] = (g_218.f4 > p_18)) | g_316))) | p_19));
                        g_122[5] &= (safe_add_func_uint16_t_u_u((l_760[2].f3 |= p_18), ((l_800 = g_218.f1) < ((safe_sub_func_uint16_t_u_u(p_18, (safe_mul_func_uint16_t_u_u(p_17, func_49(g_297, (+g_218.f0)))))) || (safe_add_func_uint8_t_u_u((l_760[2].f6 == ((g_42.f3 &= p_19) >= 0x2D327A67L)), l_792))))));
                        --l_817;
                    }
                    else
                    {
                        struct S0 l_820 = {0x44L,-1L,-1L,0x14516E5AL,0x25902D97L,0xE2L,0x8CL};
                        if (p_17)
                            break;
                        l_820 = l_760[2];
                    }
                    g_122[5] = l_749;
                    for (g_57 = 0; (g_57 <= 3); g_57 += 1)
                    {
                        struct S0 l_823 = {1L,7L,1L,0x32A42363L,0x2F2D8845L,-1L,255UL};
                        int i, j;
                        l_815[g_57][(g_218.f3 + 2)] &= p_17;
                        g_42.f4 = ((p_18 >= (safe_lshift_func_uint8_t_u_u(0x70L, 6))) | p_19);
                        l_823 = func_81((p_18 = 0x263F7A30L), l_810[1][6][0], l_795, ((g_42.f4 && g_114) != g_57));
                        if (l_815[2][5])
                            continue;
                    }
                }
                if ((safe_mul_func_uint16_t_u_u(65534UL, (func_49(p_19, (l_810[7][4][0] = (safe_rshift_func_int16_t_s_u((g_218.f6 <= (l_809 &= ((g_122[g_218.f3] != p_19) >= p_17))), (func_21((l_752 = p_18), func_33(l_760[2].f6), g_297, p_17) < g_42.f4))))) == l_828))))
                {
                    int l_829 = 0xD5143436L;
                    int l_831 = (-2L);
                    int l_832 = 0L;
                    int l_833[10] = {1L, 1L, 0x66AAE6A1L, 1L, 1L, 0x66AAE6A1L, 1L, 1L, 0x66AAE6A1L, 1L};
                    int i;
                    if (g_789)
                    {
                        unsigned l_835 = 0x0C3C3D0DL;
                        ++l_835;
                        if (p_19)
                            continue;
                        l_813[3] |= g_218.f1;
                    }
                    else
                    {
                        l_833[6] = g_42.f5;
                        if (p_18)
                            break;
                    }
                    l_810[7][1][2] = (0x62L & 0xA9L);
                    for (g_114 = 0; (g_114 != 18); g_114 = safe_add_func_uint32_t_u_u(g_114, 3))
                    {
                        struct S0 l_842 = {-1L,-4L,0xC3EEL,3L,1L,0x2EL,0x33L};
                        g_42.f3 |= (safe_rshift_func_int8_t_s_u(0x8DL, 6));
                        l_812 ^= p_18;
                        l_842 = g_42;
                        l_832 = (safe_lshift_func_int8_t_s_u(func_49(func_33((g_57 = g_789)), (((safe_mul_func_int16_t_s_s((l_788 >= (l_764 ^ (safe_lshift_func_uint16_t_u_u((l_760[2].f3 ^= l_833[6]), (safe_add_func_uint32_t_u_u((l_810[7][1][2] |= func_33((l_831 &= (safe_sub_func_uint8_t_u_u((g_218.f4 >= (safe_sub_func_int32_t_s_s(p_19, (l_800 = p_17)))), (-7L)))))), g_42.f4)))))), 3L)) | 0x70DB7395L) >= l_855)), l_842.f2));
                    }
                    if (g_789)
                        continue;
                }
                else
                {
                    struct S0 l_859 = {0x3CL,8L,-10L,3L,6L,0x3DL,0xC5L};
                    l_813[5] = 0x6FEA0E2DL;
                    g_42.f4 ^= (l_810[7][1][2] = p_17);
                    l_752 |= (safe_rshift_func_uint8_t_u_s(func_78(l_858, l_859), ((-1L) && (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(0xC4D0L, g_218.f1)) | (p_19 | l_749)), 3)) & 4294967286UL), g_631)))));
                }
            }
            return g_631;
        }
        else
        {
            unsigned short l_877 = 0x8CF0L;
            int l_909 = 6L;
            struct S0 l_922[3][4][1] = {{{{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}}, {{{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}}, {{{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}, {{0xF0L,0xEAL,-8L,-1L,1L,0x88L,0x46L}}}};
            int i, j, k;
            l_769 ^= (((p_17 = l_813[0]) & l_770[0]) && (safe_rshift_func_int8_t_s_s(((l_813[4] = p_19) && ((func_49(l_868, p_17) > (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0xA5BAL, p_17)), (l_877 & p_17))), p_17)), 0x1E544E2EL))) > p_19)), 0)));
            if (l_813[2])
                break;
            for (g_119 = 0; (g_119 < (-30)); --g_119)
            {
                return p_17;
            }
            for (l_877 = (-20); (l_877 > 6); l_877++)
            {
                const short l_890[9] = {0x25A1L, (-9L), 0x25A1L, (-9L), 0x25A1L, (-9L), 0x25A1L, (-9L), 0x25A1L};
                int l_891 = 0x680A0A92L;
                short l_947 = (-1L);
                int i;
                for (l_752 = 0; (l_752 < 25); l_752 = safe_add_func_int8_t_s_s(l_752, 1))
                {
                    const unsigned short l_887 = 0xEA49L;
                    int l_904 = 1L;
                    if (func_33((p_19 >= (safe_mul_func_uint16_t_u_u(0x7ADAL, (safe_unary_minus_func_int8_t_s((((!0xAAL) & l_887) | ((5UL >= (((-1L) ^ (safe_sub_func_int32_t_s_s((g_218.f4 = (l_812 || g_86[1][1][0])), 1UL))) != l_890[4])) <= l_890[4])))))))))
                    {
                        unsigned l_892 = 0x49A447F7L;
                        l_891 = 0x3E797B36L;
                        ++l_892;
                        return l_892;
                    }
                    else
                    {
                        g_122[5] |= (safe_lshift_func_uint8_t_u_s(0xCBL, func_33((safe_mul_func_uint8_t_u_u(g_381, (g_297 || g_86[0][3][3]))))));
                    }
                    for (g_42.f5 = 1; (g_42.f5 >= 0); g_42.f5 -= 1)
                    {
                        int l_899 = 1L;
                        int i, j, k;
                        l_812 = g_86[g_42.f5][g_218.f3][(g_42.f5 + 2)];
                        l_899 &= 0xC114F376L;
                        l_891 &= l_813[4];
                    }
                    l_891 = (safe_add_func_int32_t_s_s((g_631 > ((safe_add_func_uint16_t_u_u(l_813[0], 0xB74EL)) | g_56)), (l_904 = 0xB046D7F9L)));
                }
                for (g_381 = 0; (g_381 < 10); g_381 = safe_add_func_int32_t_s_s(g_381, 2))
                {
                    unsigned short l_923 = 0x5094L;
                    if ((((safe_rshift_func_int16_t_s_u((((l_909 = g_119) && (++g_297)) == (g_122[g_218.f3] > ((safe_sub_func_uint16_t_u_u(p_18, (1L & ((safe_rshift_func_int16_t_s_u(((g_114 = (~p_19)) ^ func_21((safe_lshift_func_uint16_t_u_s((l_918 || p_18), 0)), l_760[2].f4, (safe_lshift_func_uint16_t_u_u(0UL, 11)), l_834[0])), l_921)) || p_17)))) != 252UL))), 4)) && 0xD204L) != 65528UL))
                    {
                        l_909 = func_78(l_760[0], l_922[2][3][0]);
                    }
                    else
                    {
                        l_923 = p_19;
                        if (p_19)
                            continue;
                    }
                    if ((p_17 >= l_922[2][3][0].f1))
                    {
                        l_922[2][2][0] = g_42;
                    }
                    else
                    {
                        int l_924[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_924[i] = (-1L);
                        l_924[2] |= (g_396 = (0x24E4L != g_86[0][2][2]));
                        l_922[2][3][0].f4 |= (((((safe_mod_func_int8_t_s_s(func_49((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(g_42.f0, (g_42.f6 = func_33((safe_lshift_func_uint16_t_u_u((func_33((func_49(l_924[2], p_18) & g_42.f3)) && (0UL >= (p_17++))), func_33(p_19))))))) <= g_631) && 1L), 0x9631L)) | (-1L)), 1L)), g_122[5]), 0xCAL)) < 255UL) & 0x14L) >= p_18) || 6UL);
                        g_42.f4 &= (safe_rshift_func_int8_t_s_u(0x3FL, 7));
                    }
                }
                for (g_297 = 0; (g_297 <= 1); g_297 += 1)
                {
                    int i, j, k;
                    if (g_86[g_297][g_218.f3][(g_297 + 1)])
                    {
                        g_122[2] = l_918;
                        if (g_35)
                            break;
                        if (p_18)
                            continue;
                        if (g_42.f4)
                            break;
                    }
                    else
                    {
                        unsigned l_939[8][9][3] = {{{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}, {{4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}, {4294967295UL, 0x240065CDL, 4294967294UL}}};
                        int i, j, k;
                        l_813[5] ^= (func_49((func_21(l_939[7][8][2], (g_86[0][2][1] != l_921), l_868, (l_891 = l_922[2][3][0].f3)) <= p_19), (p_17 <= (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((~(safe_sub_func_uint8_t_u_u(0x29L, l_939[7][8][2]))), g_86[1][1][0])), 15)))) == l_946);
                    }
                    for (g_218.f1 = 0; (g_218.f1 <= 2); g_218.f1 += 1)
                    {
                        return l_947;
                    }
                    g_42.f3 = (~p_17);
                }
                for (g_653 = 0; (g_653 <= 1); g_653 += 1)
                {
                    for (g_218.f2 = 0; (g_218.f2 <= 3); g_218.f2 += 1)
                    {
                        int i;
                        l_760[g_653] = l_760[g_653];
                    }
                }
            }
        }
    }
    g_396 |= ((safe_rshift_func_uint8_t_u_s(g_218.f6, 4)) != (safe_mul_func_uint8_t_u_u(g_631, (l_760[2].f2 == ((((((g_56 = func_49(g_218.f5, l_770[0])) | g_316) & (l_752 = g_218.f5)) <= (((0L == 0x7848L) | p_19) < g_42.f3)) > l_760[2].f3) < l_760[2].f0)))));
    return p_17;
}







static int func_21(unsigned p_22, unsigned p_23, const unsigned p_24, int p_25)
{
    unsigned char l_738 = 0x54L;
    unsigned l_739 = 1UL;
    int l_740[1][8] = {{(-10L), 1L, (-10L), 1L, (-10L), 1L, (-10L), 1L}};
    int l_741[8] = {0x1E095DF6L, 0x62A86232L, 0x1E095DF6L, 0x62A86232L, 0x1E095DF6L, 0x62A86232L, 0x1E095DF6L, 0x62A86232L};
    int i, j;
    l_741[7] = (l_740[0][2] = (safe_add_func_uint8_t_u_u(7UL, (((safe_sub_func_uint32_t_u_u(p_25, 9L)) <= (safe_lshift_func_int16_t_s_s(func_49(l_738, g_42.f0), (l_739 || (0x05L >= (!(p_25 > 0x577E0D34L))))))) >= l_739))));
    g_42.f3 |= ((g_396 &= p_24) != l_738);
    return p_23;
}







static unsigned func_26(unsigned p_27, unsigned char p_28, int p_29, struct S0 p_30)
{
    const int l_62 = 0x2185AEBCL;
    unsigned l_75 = 0xEA3FEE22L;
    struct S0 l_92 = {0x21L,0xDDL,1L,-5L,0x11A0996AL,0xD2L,0x13L};
    unsigned l_185 = 4294967288UL;
    char l_186[9][6] = {{0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}, {0xFEL, 0xFEL, 0xFFL, (-8L), 0L, (-8L)}};
    int l_251[4];
    unsigned short l_336 = 0x8525L;
    int l_409 = 1L;
    short l_428 = 0x34B3L;
    unsigned short l_501 = 0x8A38L;
    int l_504 = (-1L);
    short l_538 = 0x561FL;
    unsigned char l_540[2][1][1];
    unsigned l_716 = 0UL;
    int l_730 = 0x718B71D1L;
    int l_731 = 0xDDE009CEL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_251[i] = 0x14511D41L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_540[i][j][k] = 0UL;
        }
    }
    if ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(func_33((func_33(p_27) & (func_49(g_35, p_30.f0) || (safe_mul_func_int8_t_s_s(l_62, (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_30.f0, func_49((253UL >= l_62), g_35))), l_62)), g_35)), p_29)) && 0xC96F5CA2L) <= l_62) || l_62), 5)) != l_75), l_75))))))), p_30.f1)) <= g_9), l_62)), 3)))
    {
        int l_169 = 0xC97BAAA8L;
        int l_172 = 0xF44F0F88L;
        struct S0 l_204 = {0L,0xA0L,-1L,-3L,1L,0x4CL,254UL};
        char l_231 = 0x5CL;
        int l_254 = 0x0F5DE1A1L;
        int l_256 = (-8L);
        unsigned short l_259 = 4UL;
        char l_263[3][1];
        int l_269 = 0xE8016A9AL;
        int l_272 = (-1L);
        int l_273[2][6] = {{(-1L), (-1L), (-5L), (-1L), (-1L), 1L}, {(-1L), (-1L), (-5L), (-1L), (-1L), 1L}};
        int l_326 = 7L;
        struct S0 l_327 = {0x15L,0xDBL,0xA50CL,-1L,0x14DE6C49L,5L,0x79L};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_263[i][j] = 0x70L;
        }
        if ((safe_add_func_int16_t_s_s(g_56, func_49((func_78(func_81(g_9, g_57, (g_86[1][1][0] = func_33(p_30.f6)), ((func_33(p_30.f3) | (0x96L & (0x9FD4L >= g_42.f5))) ^ 0L)), l_92) < l_92.f5), g_119))))
        {
            unsigned l_170 = 1UL;
            struct S0 l_171 = {1L,-1L,0x4838L,0x0BF67765L,0L,0xC4L,0UL};
            p_29 = (l_92.f4 = ((safe_sub_func_uint8_t_u_u(((((func_78(g_42, (l_171 = (p_30 = func_81(p_30.f2, g_9, (safe_sub_func_uint8_t_u_u(l_169, l_170)), g_119)))) >= (l_172 = (((((9UL & p_28) == p_27) == g_86[1][5][0]) >= 0xF51EL) ^ p_27))) & 0UL) > 0x92C3L) & l_169), p_28)) && p_30.f3));
            for (p_30.f5 = 1; (p_30.f5 >= 0); p_30.f5 -= 1)
            {
                unsigned l_182 = 4294967294UL;
                int l_197 = 0xBE31B953L;
                int l_198 = 0x8932FEBFL;
                struct S0 l_201 = {0x10L,1L,0x6C01L,2L,-10L,1L,8UL};
                for (g_42.f1 = 0; (g_42.f1 <= 1); g_42.f1 += 1)
                {
                    p_30.f4 = (safe_lshift_func_uint16_t_u_s(0x2838L, 11));
                    for (l_171.f0 = 1; (l_171.f0 >= 0); l_171.f0 -= 1)
                    {
                        int i, j, k;
                        l_186[3][5] = ((((p_30.f0 ^= ((g_86[l_171.f0][(g_42.f1 + 5)][(p_30.f5 + 2)] >= g_57) < (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_30.f5, (((0xE0C13267L && g_42.f0) & (((((safe_unary_minus_func_uint32_t_u(l_182)) <= (safe_mul_func_uint8_t_u_u(func_33((l_169 & (~(l_182 | g_86[1][1][0])))), l_185))) != g_9) ^ l_169) ^ 0x25L)) & g_56))), g_35)))) | 0UL) < g_42.f2) == p_30.f6);
                    }
                }
                if ((g_42.f1 != func_49(g_42.f1, ((p_30.f1 > l_182) > (~func_33((0x41DAL < (l_198 &= (safe_sub_func_int8_t_s_s((0xB6L && ((l_197 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((g_42.f0 | (safe_add_func_uint8_t_u_u(((0xCDL > (safe_lshift_func_uint16_t_u_s(func_49(l_182, l_172), 15))) ^ (-5L)), 0xC7L))) && 0x49252602L), p_29)), l_169))) > p_30.f2)), g_119))))))))))
                {
                    l_201 = (l_171 = func_81(g_86[0][4][0], p_30.f5, (g_9 || (safe_lshift_func_uint8_t_u_u(p_30.f2, g_55))), p_30.f4));
                }
                else
                {
                    return g_86[0][1][1];
                }
            }
        }
        else
        {
            unsigned short l_205[5][10] = {{0x0A2BL, 0x87E1L, 0x0A2BL, 0UL, 0x31B5L, 65535UL, 0x36FBL, 65533UL, 0UL, 0x8DAAL}, {0x0A2BL, 0x87E1L, 0x0A2BL, 0UL, 0x31B5L, 65535UL, 0x36FBL, 65533UL, 0UL, 0x8DAAL}, {0x0A2BL, 0x87E1L, 0x0A2BL, 0UL, 0x31B5L, 65535UL, 0x36FBL, 65533UL, 0UL, 0x8DAAL}, {0x0A2BL, 0x87E1L, 0x0A2BL, 0UL, 0x31B5L, 65535UL, 0x36FBL, 65533UL, 0UL, 0x8DAAL}, {0x0A2BL, 0x87E1L, 0x0A2BL, 0UL, 0x31B5L, 65535UL, 0x36FBL, 65533UL, 0UL, 0x8DAAL}};
            int i, j;
            for (l_92.f5 = 16; (l_92.f5 != 17); l_92.f5 = safe_add_func_int16_t_s_s(l_92.f5, 6))
            {
                return g_115;
            }
            if ((l_172 = ((l_205[2][5] = func_78(p_30, l_204)) ^ g_35)))
            {
                struct S0 l_217 = {0xE0L,0xF9L,0x75DFL,-1L,0x90DC8609L,0x7BL,0UL};
                for (g_42.f3 = 0; (g_42.f3 <= 4); g_42.f3 += 1)
                {
                    l_204 = func_81(g_42.f6, (((func_49((0x0A1AL < (+p_30.f2)), (safe_rshift_func_int8_t_s_s(l_205[2][5], (safe_lshift_func_uint16_t_u_u(p_30.f3, 12))))) >= (safe_unary_minus_func_uint32_t_u(((((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((p_30.f6 = func_33(g_42.f5)), (safe_mod_func_uint8_t_u_u(l_205[2][5], g_122[3])))), g_35)) <= g_86[0][2][0]) == g_122[5]) ^ p_30.f3)))) | g_42.f5) <= l_205[2][5]), g_114, g_42.f5);
                    p_30.f3 = l_205[2][8];
                    g_218 = l_217;
                    for (g_218.f6 = 0; (g_218.f6 <= 4); g_218.f6 += 1)
                    {
                        if (l_204.f5)
                            break;
                    }
                }
                p_30.f3 |= l_172;
            }
            else
            {
                p_30.f3 &= 0xD1FC4DF2L;
            }
            p_29 = (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((-1L), l_205[2][5])), ((safe_add_func_uint32_t_u_u((l_204.f4 = g_42.f6), l_205[2][5])) | (func_49(p_30.f3, (g_122[2] & 3L)) && func_49(func_49(g_57, g_117), l_92.f0)))));
        }
        for (g_218.f6 = 0; (g_218.f6 <= 1); g_218.f6 += 1)
        {
            unsigned short l_238 = 65535UL;
            int l_245 = 0x0727ED88L;
            int l_246[7][6] = {{1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}, {1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}, {1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}, {1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}, {1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}, {1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}, {1L, 1L, 0x5958B3C0L, 0x15A7A7B2L, 0L, 0x15A7A7B2L}};
            char l_283 = 1L;
            int l_310 = 0L;
            int l_313[8];
            unsigned l_357[5] = {0xCA68B6D3L, 0x5F50F75EL, 0xCA68B6D3L, 0x5F50F75EL, 0xCA68B6D3L};
            unsigned l_397 = 1UL;
            int i, j;
            for (i = 0; i < 8; i++)
                l_313[i] = 0L;
            for (l_204.f4 = 5; (l_204.f4 >= 0); l_204.f4 -= 1)
            {
                int l_242 = 0x4C3DE91EL;
                struct S0 l_243 = {1L,0x48L,0xB581L,1L,0xBB092D7BL,-8L,0xEAL};
                int l_250 = 0xD5845017L;
                int l_262 = 9L;
                int l_264[5];
                int l_266 = 0x122AFA7AL;
                int l_267 = 0x479E1C12L;
                int l_270 = (-1L);
                int l_271[5][9] = {{0xEC5E2515L, (-1L), 0x9A875923L, (-9L), (-9L), 0x9A875923L, (-1L), 0xEC5E2515L, 0x9A875923L}, {0xEC5E2515L, (-1L), 0x9A875923L, (-9L), (-9L), 0x9A875923L, (-1L), 0xEC5E2515L, 0x9A875923L}, {0xEC5E2515L, (-1L), 0x9A875923L, (-9L), (-9L), 0x9A875923L, (-1L), 0xEC5E2515L, 0x9A875923L}, {0xEC5E2515L, (-1L), 0x9A875923L, (-9L), (-9L), 0x9A875923L, (-1L), 0xEC5E2515L, 0x9A875923L}, {0xEC5E2515L, (-1L), 0x9A875923L, (-9L), (-9L), 0x9A875923L, (-1L), 0xEC5E2515L, 0x9A875923L}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_264[i] = 0xC1574738L;
                if ((safe_sub_func_int16_t_s_s(func_78(p_30, g_42), ((l_172 = (safe_mod_func_int16_t_s_s(((func_33(l_186[(l_204.f4 + 1)][g_218.f6]) ^ ((g_218.f1 &= p_30.f1) ^ (safe_add_func_uint32_t_u_u(func_33(((g_55 & 0x88L) != func_33((l_231 = g_218.f0)))), g_119)))) < 1L), p_30.f2))) || p_30.f4))))
                {
                    unsigned l_241 = 0UL;
                    int l_247 = 1L;
                    int l_248 = 0L;
                    int l_249 = 0x5A9EFD83L;
                    int l_252[7] = {0x8D6F5572L, 1L, 0x8D6F5572L, 1L, 0x8D6F5572L, 1L, 0x8D6F5572L};
                    unsigned l_274 = 4294967292UL;
                    unsigned l_290[6] = {4294967289UL, 1UL, 4294967289UL, 1UL, 4294967289UL, 1UL};
                    int i;
                    if (((safe_lshift_func_int8_t_s_s((g_119 >= func_49(((((safe_add_func_uint32_t_u_u(g_122[5], (p_27 = g_114))) <= ((p_30.f2 |= (l_169 = l_204.f3)) > (safe_sub_func_int16_t_s_s(g_122[l_204.f4], p_30.f5)))) ^ l_238) & ((p_29 = p_30.f5) == (func_49((safe_sub_func_uint32_t_u_u((((((-2L) && g_42.f1) < 252UL) != g_218.f2) && g_86[0][6][1]), l_92.f1)), g_218.f0) != l_204.f2))), g_42.f2)), l_92.f5)) & l_241))
                    {
                        l_242 &= (g_218.f4 = g_122[l_204.f4]);
                        g_42.f4 = l_186[3][5];
                        if (g_42.f1)
                            continue;
                        g_218.f3 = ((~9UL) != p_30.f0);
                    }
                    else
                    {
                        struct S0 l_244 = {0xF1L,0x05L,0xD9B5L,-1L,0x3F0A4CBCL,0x57L,0x97L};
                        int l_253 = 0x2F4B510BL;
                        int l_255 = 0xAF64C552L;
                        int l_257 = 1L;
                        int l_258 = 0x9D8676E7L;
                        char l_265[3];
                        int l_268 = (-8L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_265[i] = (-1L);
                        g_218.f4 |= g_218.f5;
                        l_244 = l_243;
                        --l_259;
                        l_274++;
                    }
                    l_290[4] = (((safe_rshift_func_int16_t_s_s(l_245, 7)) == ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_29, func_33(l_283))) == (p_28++)), (safe_mul_func_uint8_t_u_u((g_35 = (safe_lshift_func_int16_t_s_u((p_30.f2 = (func_49(p_30.f5, ((((p_27 && 0x5ABB6D33L) > func_78(g_218, g_42)) <= l_264[2]) || g_42.f0)) < p_29)), 1))), p_27)))) && 0x73L)) >= l_246[4][3]);
                    g_42 = func_81(l_186[(l_204.f4 + 1)][g_218.f6], g_56, (!(safe_add_func_int32_t_s_s(4L, p_29))), ((-1L) > ((l_252[6] &= l_204.f4) <= g_42.f3)));
                }
                else
                {
                    short l_295 = 1L;
                    char l_296 = (-8L);
                    for (l_243.f6 = 0; (l_243.f6 <= 3); l_243.f6 += 1)
                    {
                        int i, j, k;
                        g_122[2] &= (g_86[g_218.f6][l_204.f4][l_243.f6] != (l_264[(g_218.f6 + 2)] || ((l_251[l_243.f6] < (+(g_218.f0 = ((g_218.f5 < (safe_mul_func_int16_t_s_s((l_295 = 0xC1E8L), ((0x85L || (l_296 |= g_114)) > (0UL & l_92.f1))))) == g_297)))) != p_29)));
                    }
                    for (l_267 = 0; (l_267 <= 1); l_267 += 1)
                    {
                        int i, j, k;
                        l_251[3] &= ((g_86[l_267][(g_218.f6 + 5)][(g_218.f6 + 1)] <= (g_218.f2 ^= func_78(p_30, l_92))) <= ((p_30.f4 ^ (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(l_62, 0xCE8DBD78L)), (safe_sub_func_uint16_t_u_u((0x6DL && (p_30.f3 == p_28)), g_9))))) || g_86[1][1][0]));
                    }
                }
                if (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((--g_115), 11)), func_49(l_243.f2, (p_30.f1 != (l_310 >= ((safe_rshift_func_uint8_t_u_s((g_42.f0 ^ ((p_27 ^= (((0UL | (p_28 == l_313[7])) == ((g_42.f1 ^= g_218.f5) != (safe_lshift_func_int8_t_s_s(p_30.f6, 7)))) && 0x67L)) != g_218.f2)), g_117)) || (-7L))))))) <= (-3L)))
                {
                    g_316 ^= ((func_78(g_218, g_42) && 255UL) != p_30.f6);
                    p_30 = func_81(l_238, p_29, p_30.f4, l_186[l_204.f4][(g_218.f6 + 1)]);
                }
                else
                {
                    unsigned l_325 = 1UL;
                    if (g_42.f0)
                        break;
                    if ((p_29 = (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((p_30.f2 < (((func_33(l_246[0][0]) != (safe_mul_func_uint8_t_u_u(0x09L, (((~(safe_sub_func_int32_t_s_s((p_30.f4 = 0x2FB002A2L), p_30.f6))) == (l_325 != ((((1L | l_251[1]) == 0xE316L) <= g_218.f3) || 0x4A1AL))) || l_326)))) < 1UL) <= p_30.f1)), p_30.f2)), p_28))))
                    {
                        l_251[1] = 0x6751FD97L;
                    }
                    else
                    {
                        l_327 = l_243;
                    }
                    p_29 = ((((g_218.f3 = g_218.f5) >= (p_30.f2 <= p_30.f1)) >= func_33(p_30.f0)) > g_218.f0);
                }
                p_29 = ((((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_42.f4, 3)), 0x93L)), (((0xB6L | func_49(l_267, (safe_lshift_func_uint16_t_u_u((l_336 & (safe_add_func_int8_t_s_s((0xBCL || (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((g_42.f2 || l_186[0][4]) == (safe_add_func_uint8_t_u_u(p_30.f0, 0L))) ^ l_327.f1), 0xBD091194L)), p_30.f3))), 0xEEL))), l_186[7][4])))) == 4L) && g_55))) != p_28) != g_218.f1) & l_242);
                for (g_218.f1 = 0; (g_218.f1 <= 1); g_218.f1 += 1)
                {
                    int l_358 = 0xE778C606L;
                    int i, j, k;
                    p_29 = ((safe_add_func_int8_t_s_s((4294967290UL && (((safe_mod_func_int32_t_s_s((g_42.f3 = (safe_sub_func_uint8_t_u_u(((l_272 = (-1L)) < (g_86[g_218.f6][(g_218.f6 + 5)][(g_218.f1 + 2)] || ((p_27 ^= 5UL) & (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((g_218.f5 ^= (l_358 |= (l_357[3] >= 0xDB86L))), l_246[5][4])) != (safe_mod_func_int16_t_s_s(g_42.f3, p_30.f5))), 1)) < 0xEF9E927FL) <= 255UL), l_327.f6))))), 0xC9L))), p_29)) | l_327.f3) | 0x28C3L)), 0xBEL)) <= 255UL);
                }
            }
            p_29 = (((+(((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_122[(g_218.f6 + 2)] & func_33(g_122[(g_218.f6 + 4)])), 6)), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_33(((safe_rshift_func_int8_t_s_u((((g_35 = g_42.f5) & ((((l_336 || g_218.f2) > 0x4F8EL) != (p_27++)) != ((safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_9, l_185)) < l_283), p_30.f4)) != g_122[5]))) | 0x21E02E55L), l_251[0])) == g_117)), g_381)), 1)), 0x04B572D1L)))), l_92.f5)) <= 0xA0L) && 0xD4D7L)) & p_30.f3) & p_28);
            for (g_218.f4 = 1; (g_218.f4 >= 0); g_218.f4 -= 1)
            {
                char l_398 = 0xB2L;
                int l_401[8][4][8] = {{{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}, {{0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}, {0x08A696AFL, 0xED044678L, 0xABB8F628L, 0xED044678L, 0x08A696AFL, 1L, 0x08A696AFL, 0xED044678L}}};
                int i, j, k;
                p_30 = func_81((safe_sub_func_int16_t_s_s(((!(((((l_186[(g_218.f4 + 1)][(g_218.f6 + 4)] && ((((-1L) >= (((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_251[3], (l_310 = (((g_55 == l_310) ^ ((safe_rshift_func_int16_t_s_s((p_30.f0 | (p_30.f5 = p_30.f2)), (g_122[(g_218.f6 + 2)] = (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_117 != (safe_mul_func_uint16_t_u_u(func_78(func_81(l_259, g_86[1][4][2], g_218.f6, l_204.f4), g_218), 65535UL))), 13)), g_396)) == p_30.f4) | 0x1A8E55CBL)))) & 65532UL)) < p_30.f3)))), l_327.f5)) & 6L) >= g_396)) | l_326) != p_30.f3)) ^ 0xB0L) != l_397) || p_27) & l_186[(g_218.f4 + 1)][(g_218.f6 + 4)])) == 1UL), 0L)), l_92.f5, l_398, l_259);
                for (l_269 = 1; (l_269 >= 0); l_269 -= 1)
                {
                    int l_402 = 0xFA869796L;
                    int i, j, k;
                    if ((l_401[2][0][2] = (safe_sub_func_uint8_t_u_u((g_86[g_218.f6][(g_218.f6 + 2)][(g_218.f4 + 1)] || p_30.f5), (p_30.f4 >= p_30.f3)))))
                    {
                        int l_403 = 0xEC2D5EB0L;
                        l_403 ^= ((p_27 = func_49((g_218.f3 = 0x458DF7C0L), (l_402 = g_9))) <= p_29);
                        if (l_403)
                            continue;
                        p_29 ^= (l_185 && p_30.f4);
                    }
                    else
                    {
                        return l_186[(g_218.f4 + 1)][(g_218.f6 + 4)];
                    }
                    p_30 = g_42;
                }
            }
        }
    }
    else
    {
        unsigned l_411 = 0x23F81C85L;
        int l_430[3][2][4] = {{{1L, 3L, 1L, 0xB65F6D48L}, {1L, 3L, 1L, 0xB65F6D48L}}, {{1L, 3L, 1L, 0xB65F6D48L}, {1L, 3L, 1L, 0xB65F6D48L}}, {{1L, 3L, 1L, 0xB65F6D48L}, {1L, 3L, 1L, 0xB65F6D48L}}};
        int i, j, k;
        if ((l_75 ^ (safe_mod_func_uint16_t_u_u(0xB94BL, (func_33(g_86[1][1][0]) || (safe_mul_func_uint16_t_u_u(0x1C92L, (g_86[1][4][2] > func_33(p_30.f4)))))))))
        {
            int l_408[1];
            int l_410 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_408[i] = 0x9C112142L;
            ++l_411;
        }
        else
        {
            unsigned short l_414 = 0x9A95L;
            int l_423 = 1L;
            struct S0 l_429 = {4L,5L,0x6E9DL,1L,0L,0L,1UL};
            l_429 = func_81((l_414 = (g_55 && p_30.f0)), (func_78(func_81(p_30.f2, ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((g_56 |= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(l_411, g_122[3])), 0))) || (l_423 >= (safe_mul_func_int8_t_s_s((-4L), (p_30.f5 &= (safe_lshift_func_uint8_t_u_s(g_56, p_30.f6))))))), g_42.f6)) != g_218.f2), l_423)) ^ g_218.f4), l_423, l_411), g_42) ^ l_428), g_218.f1, p_28);
        }
        g_218.f4 |= ((g_122[3] >= p_30.f0) ^ func_49((p_30.f4 ^= (p_29 = func_33((++g_57)))), g_42.f1));
    }
    l_92 = p_30;
    if ((((safe_lshift_func_uint8_t_u_s(l_75, l_92.f2)) && (safe_rshift_func_int16_t_s_u(((((((g_297 = (safe_add_func_int8_t_s_s(((func_49((l_251[1] != (p_28 | (p_30.f1 |= l_251[3]))), (1UL && (g_122[5] |= g_218.f3))) >= g_218.f0) <= l_186[3][5]), g_42.f2))) > 0xF3B9260FL) < p_30.f4) | g_86[1][1][0]) >= 0xCF64L) > l_185), g_218.f5))) & 1UL))
    {
        unsigned l_447 = 4294967295UL;
        int l_448 = 0x1EDD1854L;
        l_448 = ((!(g_218.f2 && p_28)) || (g_218.f2 = (safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((g_316 = (((func_49(g_42.f3, (safe_mul_func_uint16_t_u_u((0x3D8E3869L | p_30.f4), (4294967295UL || p_30.f5)))) && (safe_add_func_int16_t_s_s((l_92.f1 != g_42.f6), g_218.f2))) || g_381) || l_185)), l_447)) & p_30.f5) || p_30.f1), p_30.f1))));
        return g_9;
    }
    else
    {
        unsigned char l_480 = 1UL;
        int l_511[9] = {0L, 0L, 0x5900E209L, 0L, 0L, 0x5900E209L, 0L, 0L, 0x5900E209L};
        unsigned short l_513 = 0x9A29L;
        int l_519 = 0x17433422L;
        struct S0 l_647 = {-5L,6L,0x2C9FL,0x0DA0DEE1L,0L,0xD3L,1UL};
        int i;
        for (g_218.f2 = 18; (g_218.f2 >= (-6)); g_218.f2 = safe_sub_func_int32_t_s_s(g_218.f2, 1))
        {
            unsigned l_481 = 0x0C88BF96L;
            int l_489 = 0x25F2C366L;
            unsigned l_496[4];
            int l_506 = 0xFD3F6214L;
            int l_509[7][6][6] = {{{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}, {{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}, {{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}, {{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}, {{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}, {{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}, {{5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}, {5L, 0x61B4F056L, 0xE16616DEL, (-1L), (-5L), (-5L)}}};
            struct S0 l_518 = {0x49L,1L,0x61FBL,0xE4E3C277L,1L,0xBCL,0UL};
            unsigned char l_685[10] = {0x16L, 0xB1L, 0x16L, 0xB1L, 0x16L, 0xB1L, 0x16L, 0xB1L, 0x16L, 0xB1L};
            int l_706 = 0x0C7308E7L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_496[i] = 0xD122C4DDL;
            for (g_119 = 14; (g_119 == 10); g_119 = safe_sub_func_uint8_t_u_u(g_119, 5))
            {
                unsigned l_463 = 6UL;
                int l_493 = 0xE506E548L;
                int l_494 = 0x7EF1E308L;
                int l_495 = 0x5A18A621L;
                int l_505 = 0x02425F4DL;
                int l_507 = 0x4F22A72FL;
                int l_508[2][9][8] = {{{1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}}, {{1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}, {1L, 1L, 0x9DC22E8DL, 0x6617A1FBL, 0xACEDEE32L, 8L, 0x4302C692L, 0xC00DA8C9L}}};
                unsigned l_532 = 9UL;
                int i, j, k;
                l_92.f3 ^= (safe_mod_func_uint16_t_u_u(g_86[1][1][0], ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(l_463, (safe_lshift_func_uint16_t_u_u(g_218.f6, 5)))), func_49(func_49((((p_30.f5 = l_251[2]) || (safe_rshift_func_int16_t_s_s((g_42.f2 & (safe_lshift_func_int8_t_s_s((p_30.f3 & func_33(l_463)), 6))), g_42.f4))) >= p_30.f4), p_28), g_218.f1))), 1UL)), p_28)) && 0xC9L)));
                if (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-1L), 0)), (((safe_sub_func_uint16_t_u_u(g_86[0][6][3], (+(g_316 = (safe_rshift_func_int16_t_s_u(0xF3A2L, 1)))))) <= 0xCEF8L) > p_30.f6))) < (g_42.f3 = (l_481 &= ((safe_lshift_func_int8_t_s_u((l_463 <= 0x2481L), 6)) == l_480)))))
                {
                    const int l_490 = 0x70570A3BL;
                    int l_499 = 0x64465B74L;
                    int l_500[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_500[i] = 0x469D889CL;
                    if (g_56)
                    {
                        return g_115;
                    }
                    else
                    {
                        g_42 = func_81(l_480, (safe_unary_minus_func_uint8_t_u(((0xCDE75B58L == (g_114 |= p_29)) == (((p_29 <= (safe_mul_func_int16_t_s_s(g_218.f3, 9L))) != ((safe_lshift_func_uint16_t_u_s(((p_30.f0 ^ (g_42.f1 > (((safe_add_func_int32_t_s_s((l_92.f3 = (p_30.f4 = (l_489 ^= (-1L)))), l_490)) ^ 1UL) & g_42.f5))) | g_119), 3)) ^ 0x50D49B4FL)) == g_86[1][1][1])))), l_490, g_86[1][1][0]);
                    }
                    for (p_30.f1 = 19; (p_30.f1 >= 1); p_30.f1 = safe_sub_func_uint8_t_u_u(p_30.f1, 1))
                    {
                        short l_510[6] = {0x0A96L, 0x1BB3L, 0x0A96L, 0x1BB3L, 0x0A96L, 0x1BB3L};
                        int l_512[9][2] = {{0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}, {0xA9608E59L, 0xA9608E59L}};
                        int i, j;
                        l_496[1]--;
                        l_499 &= p_30.f6;
                        ++l_501;
                        l_513++;
                    }
                }
                else
                {
                    unsigned l_523 = 0x8C0D16B0L;
                    int l_530[7] = {0x5919ACF5L, 0x5919ACF5L, 0xF3F65397L, 0x5919ACF5L, 0x5919ACF5L, 0xF3F65397L, 0x5919ACF5L};
                    struct S0 l_535 = {1L,0x4FL,0xABCAL,0xE687EA47L,1L,0x7FL,7UL};
                    int i;
                    for (l_336 = 0; (l_336 != 24); ++l_336)
                    {
                        unsigned l_520 = 0x44534611L;
                        struct S0 l_524[1] = {{0x1DL,1L,6L,1L,-10L,-1L,0x9DL}};
                        int i;
                        l_511[0] = func_78(l_518, l_518);
                        l_520--;
                        l_524[0] = func_81(l_523, g_55, p_29, ((g_218.f6 ^ (l_511[7] &= g_122[5])) || g_218.f3));
                    }
                    if (((safe_lshift_func_uint8_t_u_u(0UL, (safe_sub_func_uint32_t_u_u(1UL, l_505)))) >= 0x51264D90L))
                    {
                        int l_529[3][5] = {{(-5L), (-5L), 0xCCEB2877L, 0xF22250A9L, 0L}, {(-5L), (-5L), 0xCCEB2877L, 0xF22250A9L, 0L}, {(-5L), (-5L), 0xCCEB2877L, 0xF22250A9L, 0L}};
                        int l_531[3][9] = {{(-4L), 0xD9E4FD49L, (-5L), 0xD9E4FD49L, (-4L), 0L, (-4L), 0xD9E4FD49L, (-5L)}, {(-4L), 0xD9E4FD49L, (-5L), 0xD9E4FD49L, (-4L), 0L, (-4L), 0xD9E4FD49L, (-5L)}, {(-4L), 0xD9E4FD49L, (-5L), 0xD9E4FD49L, (-4L), 0L, (-4L), 0xD9E4FD49L, (-5L)}};
                        int i, j;
                        if (g_122[0])
                            break;
                        l_532--;
                        l_535 = g_218;
                    }
                    else
                    {
                        short l_536 = 9L;
                        int l_537 = 1L;
                        int l_539 = 4L;
                        ++l_540[1][0][0];
                    }
                    g_396 = (safe_mul_func_int8_t_s_s((!(safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((g_9 >= (l_519 = (safe_mul_func_uint16_t_u_u(func_49(((safe_lshift_func_uint8_t_u_s(g_119, (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint8_t_u_u((l_509[5][1][2] ^= l_540[0][0][0]), g_119)) <= g_218.f0))) & (safe_mul_func_uint16_t_u_u(0x4C96L, (-1L)))), (((safe_unary_minus_func_uint16_t_u(((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_30.f3, func_49((((safe_mul_func_int16_t_s_s((p_27 >= g_55), p_28)) && p_29) ^ p_30.f5), g_42.f5))) == g_114), p_29)) ^ g_381))) != p_27) && p_30.f5))))) > l_251[3]), g_218.f0), p_30.f1)))), g_218.f3)) > l_336), g_122[4])) != 65535UL), 1)), l_336)), l_540[1][0][0]))), l_480));
                }
                l_251[3] = ((g_297 >= l_186[3][1]) && (g_218.f1 = ((l_508[0][7][6] = g_114) >= ((g_42.f2 &= (safe_rshift_func_int16_t_s_s(0xE956L, 13))) > ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xB6C2L, ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_518.f6, 15)), (65529UL | p_30.f6))), p_30.f5)) | 0x4FL))), p_30.f0)) == g_218.f4)))));
                if (func_33(((+(safe_add_func_int16_t_s_s(g_86[1][1][0], (g_42.f2 |= ((p_30.f6 = (safe_sub_func_int16_t_s_s(0xBC02L, (p_27 <= p_30.f4)))) > ((0x0995E805L || (func_49(l_511[0], l_511[0]) <= (((safe_mod_func_uint32_t_u_u((~(g_297 ^= p_30.f1)), g_396)) | l_489) & p_30.f5))) != p_30.f1)))))) == p_28)))
                {
                    p_30.f3 = p_29;
                }
                else
                {
                    char l_593 = 0xEDL;
                    for (l_92.f2 = 13; (l_92.f2 >= (-15)); --l_92.f2)
                    {
                        p_30.f4 &= (l_593 ^ p_30.f2);
                    }
                    for (l_463 = 0; (l_463 == 37); ++l_463)
                    {
                        char l_608 = (-5L);
                        p_29 = g_396;
                        g_218.f4 = (!(p_28 <= (g_117 && (func_49((l_251[3] = ((safe_add_func_int16_t_s_s((g_297 | (safe_sub_func_uint32_t_u_u(func_78(func_81(p_30.f2, (safe_sub_func_int32_t_s_s((((0x13E65367L && 0x2154861DL) | (g_117 != (safe_mod_func_int16_t_s_s(l_92.f5, (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_218.f6, g_42.f6)) || g_42.f1), l_593)))))) <= l_463), 4294967295UL)), l_608, l_509[3][5][2]), p_30), g_218.f2))), g_86[1][3][2])) == 0xE752L)), l_507) <= 0x79L))));
                        g_42.f4 = ((~g_117) != (safe_rshift_func_int16_t_s_u((-1L), 12)));
                    }
                    if ((safe_lshift_func_int8_t_s_u(l_508[0][4][6], 6)))
                    {
                        p_30 = g_42;
                        if (p_30.f4)
                            continue;
                    }
                    else
                    {
                        char l_625 = 0x9DL;
                        l_511[0] = (p_30.f3 && (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((4L && (((~(p_27 = (safe_sub_func_int8_t_s_s(l_518.f0, g_115)))) <= (safe_add_func_int32_t_s_s(0x215D3C44L, (safe_rshift_func_uint8_t_u_u((((p_30.f5 == (g_316 |= (!65535UL))) | p_28) != (~((g_42.f1 = (-1L)) & l_518.f5))), l_511[6]))))) || 0UL)), 0)), l_511[1])));
                        l_625 ^= (l_593 & ((safe_rshift_func_int8_t_s_u(g_218.f5, 6)) && (g_42.f0 = 0x2AL)));
                        l_518.f4 &= g_218.f4;
                        g_218.f4 |= 0xCF29229AL;
                    }
                }
            }
            for (g_218.f1 = (-19); (g_218.f1 >= 18); ++g_218.f1)
            {
                unsigned l_630 = 0xA3A5F7B2L;
                int l_632 = 7L;
                int l_633 = 0x9762B1C5L;
                int l_634 = 0x0EED0708L;
                unsigned char l_635 = 0xF8L;
                for (l_92.f2 = 2; (l_92.f2 > (-27)); --l_92.f2)
                {
                    p_30.f3 = l_630;
                }
                l_632 = (p_30.f3 ^ g_631);
                ++l_635;
            }
            for (l_409 = 3; (l_409 >= 0); l_409 -= 1)
            {
                int l_644 = 0xD4127D36L;
                int l_648[8][6][4] = {{{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}, {{0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}, {0x50A783D1L, 0x226D0BCAL, 0x5E827301L, 6L}}};
                int i, j, k;
                l_251[l_409] = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((p_30.f2 = (safe_sub_func_uint8_t_u_u((g_316 == (l_644 = p_30.f6)), (safe_mul_func_uint8_t_u_u((g_218.f6 || (p_30.f2 | (l_648[3][4][3] = (l_511[3] = func_33(func_78(g_218, l_647)))))), p_30.f1))))), g_86[1][1][0])), g_9)) || g_316);
            }
            if ((l_647.f2 | (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_647.f4 <= g_42.f0), g_653)), (-9L)))))
            {
                unsigned short l_656 = 0x970BL;
                g_42 = g_218;
                p_30 = func_81(((safe_mod_func_uint8_t_u_u(l_656, p_30.f1)) && (func_78(g_218, func_81(((+(func_78(func_81((((!l_75) >= (g_381 | p_30.f0)) | (safe_unary_minus_func_uint8_t_u(((l_647.f4 = g_42.f1) >= 0xBE23558AL)))), g_218.f4, g_42.f0, p_30.f2), l_518) <= 0UL)) < 0x6C7AF672L), p_29, l_656, l_656)) > p_30.f1)), p_30.f4, p_28, l_656);
            }
            else
            {
                short l_675[8][3] = {{9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}, {9L, 9L, 0x99F9L}};
                int l_704 = 0x8609F81AL;
                unsigned char l_705 = 3UL;
                int l_709[1][5][8] = {{{0x6BE052EDL, 0xC653DABBL, (-9L), 0x3E65E872L, 0x3E65E872L, (-9L), 0xC653DABBL, 0x6BE052EDL}, {0x6BE052EDL, 0xC653DABBL, (-9L), 0x3E65E872L, 0x3E65E872L, (-9L), 0xC653DABBL, 0x6BE052EDL}, {0x6BE052EDL, 0xC653DABBL, (-9L), 0x3E65E872L, 0x3E65E872L, (-9L), 0xC653DABBL, 0x6BE052EDL}, {0x6BE052EDL, 0xC653DABBL, (-9L), 0x3E65E872L, 0x3E65E872L, (-9L), 0xC653DABBL, 0x6BE052EDL}, {0x6BE052EDL, 0xC653DABBL, (-9L), 0x3E65E872L, 0x3E65E872L, (-9L), 0xC653DABBL, 0x6BE052EDL}}};
                int i, j, k;
                if ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((g_218.f6 &= (p_28 = (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((func_49(func_33((l_647.f3 ^= g_631)), ((-4L) | 7UL)) == (g_218.f3 = func_33((safe_mod_func_uint8_t_u_u(p_30.f5, g_631))))), (p_29 < p_29))), p_30.f6)) && g_42.f1), 6)))))), 0L)) == l_647.f5), g_653)), 0x6D68L)))
                {
                    char l_679[1][5][7] = {{{7L, 0x53L, 7L, 0x53L, 7L, 0x53L, 7L}, {7L, 0x53L, 7L, 0x53L, 7L, 0x53L, 7L}, {7L, 0x53L, 7L, 0x53L, 7L, 0x53L, 7L}, {7L, 0x53L, 7L, 0x53L, 7L, 0x53L, 7L}, {7L, 0x53L, 7L, 0x53L, 7L, 0x53L, 7L}}};
                    int i, j, k;
                    for (p_30.f2 = (-19); (p_30.f2 <= 23); ++p_30.f2)
                    {
                        const short l_676[8] = {0x9303L, 0x9303L, 0x9303L, 0x9303L, 0x9303L, 0x9303L, 0x9303L, 0x9303L};
                        int i;
                        l_675[2][2] = p_28;
                        if (l_676[7])
                            continue;
                        g_396 = (~((safe_add_func_uint8_t_u_u(((p_30.f6 && ((l_679[0][1][1] = p_30.f3) >= (safe_mod_func_int8_t_s_s(7L, g_381)))) ^ l_676[4]), (safe_unary_minus_func_int32_t_s(g_42.f1)))) || ((safe_mod_func_int16_t_s_s((g_631 = ((func_78(p_30, p_30) <= g_218.f0) == g_55)), l_679[0][1][1])) & 254UL)));
                    }
                    if (l_685[7])
                    {
                        l_706 = ((safe_lshift_func_uint16_t_u_s(l_679[0][1][1], ((g_35 ^= (safe_add_func_int16_t_s_s(l_679[0][1][1], (!(p_30.f5 | ((g_42.f0 = p_30.f1) <= 0xBFL)))))) != (g_42.f6 = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_30.f5, ((safe_rshift_func_uint8_t_u_s(func_33(func_49((safe_sub_func_uint32_t_u_u(g_42.f1, func_33((l_704 |= (1UL <= l_647.f4))))), l_705)), p_30.f0)) & 5L))), 3)) >= p_30.f2), p_30.f4)), g_631)), 0xD6L)) || l_251[0]))))) < 0x721AL);
                        p_30 = p_30;
                        p_29 = func_78(g_218, g_218);
                    }
                    else
                    {
                        return l_647.f4;
                    }
                }
                else
                {
                    unsigned short l_707 = 0x3B66L;
                    int l_708[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_708[i] = 0xF7522CFFL;
                    p_30 = func_81(g_653, g_631, func_78(func_81(g_218.f3, (l_708[3] ^= l_707), g_42.f5, p_30.f4), p_30), g_297);
                    for (g_42.f4 = 5; (g_42.f4 >= 0); g_42.f4 -= 1)
                    {
                        unsigned short l_719 = 0x41ADL;
                        g_42.f3 = (l_709[0][1][2] == ((((l_509[3][1][3] ^= (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((~0x2C6BL), g_631)), (l_708[3] = func_49((((p_28 = 0x78L) != 0x17L) > (((safe_mod_func_uint16_t_u_u(p_30.f5, func_33((++l_716)))) || 0xB7L) < ((p_27 || 0xA294D6D4L) >= p_30.f2))), p_29))))) >= p_30.f3) ^ l_489) & p_27));
                        l_719++;
                    }
                }
                if (p_30.f5)
                    continue;
            }
        }
        for (g_42.f6 = 19; (g_42.f6 < 47); g_42.f6 = safe_add_func_int8_t_s_s(g_42.f6, 1))
        {
            p_30.f4 &= func_33((l_251[3] = p_30.f3));
        }
        g_381 = (safe_rshift_func_uint8_t_u_s((p_30.f1 <= g_122[5]), (p_30.f1 < (safe_mul_func_int16_t_s_s(func_49(p_30.f1, (safe_rshift_func_uint16_t_u_s(((l_647.f0 == (l_730 |= g_218.f0)) ^ (func_33(g_115) & (g_218.f2 = (+(l_731 > p_30.f1))))), 4))), l_92.f1)))));
    }
    return l_731;
}







static unsigned func_33(unsigned p_34)
{
    short l_38 = 0x5077L;
    l_38 = g_9;
    return l_38;
}







static short func_49(int p_50, int p_51)
{
    short l_52 = 0xC0F8L;
    int l_53 = 8L;
    int l_54[5][3] = {{1L, (-3L), 1L}, {1L, (-3L), 1L}, {1L, (-3L), 1L}, {1L, (-3L), 1L}, {1L, (-3L), 1L}};
    int i, j;
    --g_57;
    return l_54[2][2];
}







static unsigned char func_78(struct S0 p_79, struct S0 p_80)
{
    unsigned short l_101 = 65528UL;
    int l_116[5];
    unsigned char l_123[1];
    unsigned char l_140 = 0xBDL;
    const unsigned char l_162 = 0xE1L;
    int i;
    for (i = 0; i < 5; i++)
        l_116[i] = 0xB726758DL;
    for (i = 0; i < 1; i++)
        l_123[i] = 252UL;
    for (p_80.f2 = 28; (p_80.f2 >= 9); p_80.f2 = safe_sub_func_uint32_t_u_u(p_80.f2, 8))
    {
        int l_95 = 1L;
        struct S0 l_96 = {0x1DL,0x45L,-8L,0x176C3709L,2L,1L,1UL};
        int l_112 = 0x10558E76L;
        int l_120[8] = {0x005CC3D6L, 9L, 0x005CC3D6L, 9L, 0x005CC3D6L, 9L, 0x005CC3D6L, 9L};
        unsigned short l_161 = 65528UL;
        int i;
        p_79 = p_79;
        if (l_95)
        {
            g_42 = l_96;
            if (p_79.f2)
                break;
        }
        else
        {
            unsigned short l_113 = 0xCD43L;
            int l_118 = 0xB5993E3AL;
            int l_121[5][7][7] = {{{0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}}, {{0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}}, {{0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}}, {{0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}}, {{0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}, {0xC2DAEADAL, (-1L), (-3L), 0x9646ABAFL, (-10L), 0xF491B13FL, 0xC2DAEADAL}}};
            int i, j, k;
            g_42.f3 = ((((((safe_mul_func_int16_t_s_s(((g_115 = (p_80.f6 | ((p_79.f2 |= ((safe_rshift_func_uint16_t_u_s(p_79.f5, g_42.f4)) == l_101)) == (((g_114 = func_49((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((p_79.f0 | (g_42.f4 != ((safe_rshift_func_uint8_t_u_s((0UL <= 0xF2E681A9L), ((safe_rshift_func_int8_t_s_s(p_79.f4, g_86[1][4][3])) & p_80.f1))) ^ 65535UL))), l_96.f3)) >= l_101) < l_96.f2), l_112)), l_113)), p_79.f6)) > g_56) == g_42.f2)))) != p_79.f0), l_113)) < l_96.f1) < l_96.f6) < g_42.f2) | 8UL) == l_101);
            l_123[0]++;
        }
        for (p_80.f3 = 0; (p_80.f3 < 3); p_80.f3 = safe_add_func_int8_t_s_s(p_80.f3, 8))
        {
            unsigned short l_130 = 0UL;
            int l_164 = 0xE34C1BD7L;
            g_122[5] ^= ((l_130 = (safe_add_func_uint8_t_u_u(0x67L, func_33(l_123[0])))) && (g_86[1][1][1] >= 8UL));
            g_42.f3 = ((((safe_sub_func_uint32_t_u_u(l_116[1], func_49(g_122[5], p_80.f3))) || 0xAFL) == g_42.f0) != (safe_lshift_func_uint8_t_u_u((g_86[1][1][0] <= (safe_add_func_int32_t_s_s(p_80.f0, 0UL))), g_56)));
            if (l_123[0])
                break;
            for (p_80.f0 = 0; (p_80.f0 < 10); p_80.f0 = safe_add_func_int16_t_s_s(p_80.f0, 6))
            {
                short l_139 = 0x811DL;
                int l_156 = 0L;
                int l_163 = 0x466328CBL;
                l_140--;
                for (p_79.f2 = 0; (p_79.f2 >= 10); ++p_79.f2)
                {
                    short l_145 = (-4L);
                    l_96 = func_81(l_145, l_130, (g_57 ^ ((func_33(l_112) >= func_33(g_35)) ^ (((safe_mul_func_uint16_t_u_u(g_42.f3, p_79.f1)) < 1L) == g_35))), l_123[0]);
                    if (l_140)
                        break;
                    if (g_122[4])
                        break;
                }
                l_164 = (+(p_79.f4 >= ((((l_96.f4 = (l_163 &= ((func_49(l_139, (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x7E9FL, 13)), ((+p_79.f6) | ((l_156 = func_33(l_139)) < (safe_mul_func_uint16_t_u_u((l_130 && (g_114 = ((safe_rshift_func_uint8_t_u_s((l_161 >= g_9), g_122[5])) == 0x49L))), g_55)))))) <= l_162), l_96.f4))) <= g_9) || p_79.f3))) && 0x5517ECD9L) ^ l_120[3]) ^ 0x75F163BAL)));
                for (l_163 = 0; l_163 < 6; l_163 += 1)
                {
                    g_122[l_163] = 0x6D7588BFL;
                }
            }
        }
    }
    l_116[1] = 0x000613AAL;
    return g_56;
}







static struct S0 func_81(int p_82, unsigned p_83, unsigned p_84, unsigned char p_85)
{
    int l_89 = 6L;
    if ((l_89 = p_84))
    {
        struct S0 l_90 = {0xD0L,0x42L,2L,2L,1L,0x96L,0x4AL};
        return l_90;
    }
    else
    {
        if (((4UL && l_89) < 0x77L))
        {
            struct S0 l_91 = {1L,0x68L,0x5487L,-4L,0x50A3B4BAL,0x79L,0UL};
            return l_91;
        }
        else
        {
            return g_42;
        }
    }
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
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_42.f1, "g_42.f1", print_hash_value);
    transparent_crc(g_42.f2, "g_42.f2", print_hash_value);
    transparent_crc(g_42.f3, "g_42.f3", print_hash_value);
    transparent_crc(g_42.f4, "g_42.f4", print_hash_value);
    transparent_crc(g_42.f5, "g_42.f5", print_hash_value);
    transparent_crc(g_42.f6, "g_42.f6", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_86[i][j][k], "g_86[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_218.f3, "g_218.f3", print_hash_value);
    transparent_crc(g_218.f4, "g_218.f4", print_hash_value);
    transparent_crc(g_218.f5, "g_218.f5", print_hash_value);
    transparent_crc(g_218.f6, "g_218.f6", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1454.f0, "g_1454.f0", print_hash_value);
    transparent_crc(g_1454.f1, "g_1454.f1", print_hash_value);
    transparent_crc(g_1454.f2, "g_1454.f2", print_hash_value);
    transparent_crc(g_1454.f3, "g_1454.f3", print_hash_value);
    transparent_crc(g_1454.f4, "g_1454.f4", print_hash_value);
    transparent_crc(g_1454.f5, "g_1454.f5", print_hash_value);
    transparent_crc(g_1454.f6, "g_1454.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
