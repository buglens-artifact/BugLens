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



static int g_41 = 0xDD972C40L;
static int *g_40 = &g_41;
static unsigned g_57 = 0xCDD1F665L;
static unsigned g_61 = 0UL;
static const unsigned g_64[6] = {0UL, 0x46E0AEE4L, 0UL, 0x46E0AEE4L, 0UL, 0x46E0AEE4L};
static const unsigned *g_63 = &g_64[0];
static short g_69 = 0x1006L;
static unsigned g_70 = 4294967291UL;
static unsigned char g_73[1] = {250UL};
static unsigned short g_89[4] = {0x1E6AL, 1UL, 0x1E6AL, 1UL};
static const int g_95 = 1L;
static int g_100 = 0x447E3892L;
static int * const g_99 = &g_100;
static int * const *g_98 = &g_99;
static int g_135 = 0L;
static int *g_144 = &g_100;
static int **g_151[7] = {&g_144, &g_144, &g_144, &g_144, &g_144, &g_144, &g_144};
static int ***g_150 = &g_151[4];
static unsigned g_217 = 7UL;
static short g_233 = (-10L);
static short *g_277 = &g_69;
static short **g_276 = &g_277;
static const int g_322 = 0xE18F58E4L;
static const int *g_323 = &g_41;
static unsigned short *g_371 = (void*)0;
static unsigned short **g_370 = &g_371;
static unsigned char g_399 = 0xDCL;
static char g_503 = 1L;
static char *g_673 = &g_503;
static char **g_672 = &g_673;
static int g_714 = 1L;
static unsigned short g_756 = 0xF951L;
static unsigned *g_776 = &g_57;
static unsigned **g_775 = &g_776;
static unsigned * const g_816 = (void*)0;
static unsigned * const *g_815 = &g_816;
static short *g_836 = &g_233;
static int g_888[10][1] = {{0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}, {0x51F39389L}};
static char g_895 = 0x53L;
static unsigned short ***g_913 = &g_370;
static unsigned ** const ** const g_920 = (void*)0;
static char g_979 = 0xBBL;
static int ****g_1050[2] = {&g_150, &g_150};
static int *****g_1049 = &g_1050[1];
static unsigned g_1086 = 0xC964E7D1L;
static unsigned short g_1088 = 0xC5A5L;
static short g_1093 = 1L;
static short g_1097 = 0x6383L;
static int g_1103 = 1L;



static unsigned func_1(void);
static int * func_2(short p_3, short p_4);
static unsigned short func_6(unsigned p_7, char p_8, int * p_9, int p_10, const unsigned short p_11);
static unsigned func_14(int * p_15);
static int * func_16(unsigned p_17, unsigned p_18, unsigned p_19, unsigned p_20);
static short func_22(int * p_23, unsigned p_24, int p_25);
static int * func_26(short p_27, unsigned p_28);
static const int func_29(int * p_30, int p_31, unsigned p_32, unsigned char p_33);
static int * func_34(int * p_35, int p_36, int * p_37, int * p_38, unsigned p_39);
static int * func_43(int * p_44, int p_45, unsigned p_46, unsigned p_47, unsigned p_48);
static unsigned func_1(void)
{
    char l_21 = (-1L);
    int *l_42[9][8][2] = {{{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}, {{&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}, {&g_41, &g_41}}};
    int l_49 = 0xC1C57511L;
    unsigned l_374 = 0xEF1B187FL;
    unsigned short *l_1087[10] = {&g_756, &g_756, &g_756, &g_756, &g_756, &g_756, &g_756, &g_756, &g_756, &g_756};
    short l_1089 = 0xB288L;
    unsigned *l_1090 = &g_1086;
    const char l_1091 = (-3L);
    short l_1092 = 0xCFCEL;
    int l_1094 = 0xB6864B29L;
    int *l_1102 = (void*)0;
    int i, j, k;
    l_1102 = (l_42[4][5][0] = func_2((safe_unary_minus_func_uint16_t_u(((1UL != (g_89[2] = (((func_6((((safe_sub_func_uint32_t_u_u(((*l_1090) = ((g_1088 = (func_14(func_16(l_21, ((-1L) != func_22(func_26((func_29(func_34(g_40, l_21, l_42[2][6][0], func_43(&g_41, (*g_40), (((l_49 , (*g_40)) ^ (*g_40)) != 1UL), g_41, g_41), g_135), g_217, g_64[4], g_217) ^ 0xB8773EDCL), g_217), l_374, g_95)), g_399, g_888[7][0])) & g_1086)) & l_1089)), l_1091)) & g_979) , l_1092), g_1093, &l_49, l_1094, g_979) | g_1097) , g_1097) > g_1093))) >= 0xBB7EL))), g_1093));

    ;

    ;
    ;
    ;

    ;
    ;
    ;
    return g_1103;
}







static int * func_2(short p_3, short p_4)
{
    int *l_1098 = &g_135;
    int l_1099[6][5][4] = {{{0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}}, {{0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}}, {{0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}}, {{0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}}, {{0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}}, {{0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}, {0xFA86546BL, 1L, 0x8873B5C8L, (-8L)}}};
    unsigned *l_1100 = &g_61;
    unsigned l_1101 = 1UL;
    int i, j, k;
    (****g_1049) = l_1098;

    ;
    ;
    (*l_1098) = (((((((l_1099[5][2][0] && p_3) | ((*g_836) , ((*l_1100) = 4294967295UL))) < ((*l_1098) | ((*l_1098) || (p_4 = l_1101)))) , (*g_673)) != p_3) > p_3) , 0xDA5329AEL);
    return (**g_150);


}







static unsigned short func_6(unsigned p_7, char p_8, int * p_9, int p_10, const unsigned short p_11)
{
    int **l_1095 = (void*)0;
    int ***l_1096 = &l_1095;
    (*l_1096) = l_1095;
    (**g_150) = (**g_150);
    return p_7;
}







static unsigned func_14(int * p_15)
{
    int *l_891 = &g_714;
    int **l_892 = &l_891;
    int *l_893 = &g_135;
    char *l_894 = &g_895;
    unsigned l_900 = 0x349EADD6L;
    short *l_926 = &g_69;
    unsigned char l_935 = 255UL;
    unsigned l_936[8][10] = {{0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}, {0x068EFEBAL, 0x9C8C6002L, 8UL, 4294967295UL, 9UL, 0x4F144889L, 1UL, 4294967295UL, 0x0BCE7BBFL, 0x692964BCL}};
    const char *l_939[6][7] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
    const char **l_938 = &l_939[2][4];
    const char ***l_937[10] = {&l_938, &l_938, &l_938, &l_938, &l_938, &l_938, &l_938, &l_938, &l_938, &l_938};
    int *l_942 = &g_100;
    int *l_958 = (void*)0;
    char **l_970[10][5] = {{&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}, {&g_673, &l_894, &l_894, &l_894, &g_673}};
    int l_982[5] = {0L, 9L, 0L, 9L, 0L};
    unsigned short *l_987 = &g_89[0];
    unsigned l_1011 = 0x6630FEA1L;
    int *l_1037 = &g_100;
    int *****l_1061 = &g_1050[0];
    int i, j;
    if ((((((*l_892) = l_891) != (void*)0) | (func_22(l_893, func_22(func_16((~(((*l_893) , &g_151[0]) == (void*)0)), (*l_893), ((((*l_894) = ((*g_673) = (*g_673))) , ((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((**g_672), (*l_893))), (*l_893))) & (*l_893))) & (*l_893)), (*l_893)), (*l_893), l_900), g_888[7][0]) , (*g_40))) , (*l_893)))
    {
        short l_916 = 9L;
        int l_918 = 0x791CEB7CL;
        short l_922 = 4L;
        short *l_928 = (void*)0;
        short *l_929[2];
        short *l_930[7][9] = {{&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}, {&l_922, &l_922, &l_922, &l_922, &l_922, (void*)0, &l_922, &l_922, &l_922}};
        int *l_948 = &g_135;
        int i, j;
        for (i = 0; i < 2; i++)
            l_929[i] = &g_233;
lbl_957:
        for (g_895 = 0; (g_895 >= 0); g_895 -= 1)
        {
            unsigned short *l_901 = &g_89[0];
            int l_902[9][7][2] = {{{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}, {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}}};
            unsigned ***l_908[4][8][7] = {{{&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}}, {{&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}}, {{&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}}, {{&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}, {&g_775, &g_775, &g_775, &g_775, &g_775, &g_775, &g_775}}};
            unsigned ****l_907 = &l_908[2][0][4];
            unsigned ****l_909 = (void*)0;
            unsigned ***l_911 = &g_775;
            unsigned ****l_910 = &l_911;
            unsigned short ***l_912[1];
            char * const l_917[1] = {(void*)0};
            int *l_932 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_912[i] = &g_370;
        }
        (***g_150) = (func_22((**g_150), (safe_rshift_func_int8_t_s_u((*l_893), 1)), (((*g_776) | ((*g_144) >= (*l_942))) == ((l_918 = (*l_948)) >= (**g_98)))) <= (func_22(l_948, (*g_776), (*l_893)) , (*g_776)));
        if (g_100)
            goto lbl_957;
    }
    else
    {
        char l_961 = (-1L);
        unsigned char *l_966[9] = {&g_73[0], &g_73[0], (void*)0, &g_73[0], &g_73[0], (void*)0, &g_73[0], &g_73[0], (void*)0};
        int l_988 = 0x63F9216AL;
        unsigned l_1009 = 0x721F6692L;
        int l_1010 = 0x5D636302L;
        unsigned * const *l_1081[2];
        const unsigned *l_1083 = &l_936[6][1];
        const unsigned **l_1082 = &l_1083;
        int i;
        for (i = 0; i < 2; i++)
            l_1081[i] = &g_816;
        if ((*g_144))
        {
            int *l_967 = (void*)0;
            char ***l_971 = (void*)0;
            char ***l_972 = &g_672;
            unsigned short *l_985 = &g_756;
            unsigned short *l_986[6];
            int i;
            for (i = 0; i < 6; i++)
                l_986[i] = &g_89[0];
            (*g_40) = (*l_942);
            (**g_98) = ((((safe_add_func_int8_t_s_s((l_961 , (func_22(l_942, (l_982[4] , (~((*g_836) < (*l_893)))), g_888[7][0]) ^ ((l_988 = (((**g_913) = (**g_913)) == (l_987 = ((safe_mod_func_int8_t_s_s((((((*l_985) = 0xECD5L) ^ l_961) != 0x311C9F15L) , l_961), l_961)) , l_986[5])))) , 0x594FL))), 0x0FL)) | (*g_99)) , l_988) && (*l_942));
            for (l_935 = 0; (l_935 > 27); l_935++)
            {
                int *l_993 = &g_135;
                char *l_994 = &g_895;
                int *l_995 = &g_100;
                for (g_61 = 0; (g_61 < 9); g_61 = safe_add_func_uint8_t_u_u(g_61, 9))
                {
                    if ((*l_942))
                        break;
                    (*l_893) = ((*l_942) = 0xBDA4E083L);
                    l_995 = (p_15 = func_34(((*l_893) , p_15), (*l_893), l_993, func_34((((*g_673) >= ((void*)0 != l_994)) , l_993), (*l_942), p_15, p_15, (*l_993)), l_961));

                    ;
                }

                ;
                if (l_988)
                    continue;
            }

            ;
        }
        else
        {
            char l_998 = 0x07L;
            int *l_1029 = &g_135;
            if (((safe_mod_func_uint32_t_u_u((**g_775), ((0x25C9DF14L > func_22(((**g_98) , func_16((((void*)0 == &g_673) != (*l_893)), (l_961 & ((l_998 >= 0xCC026E75L) & 65527UL)), l_998, l_998)), l_998, l_998)) , (*g_144)))) | 0x58L))
            {
                int *l_999 = (void*)0;
                int *** const *l_1003 = &g_150;
                int *** const **l_1002 = &l_1003;
                unsigned *l_1012 = &g_61;
                char l_1023[2];
                short l_1024 = 6L;
                short l_1043 = 0x8E01L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1023[i] = (-1L);
                (**g_150) = p_15;

                ;
                ;
                for (g_895 = 0; (g_895 <= 6); g_895 += 1)
                {
                    int *** const *l_1001 = &g_150;
                    int *** const **l_1000 = &l_1001;
                    unsigned *l_1006[9];
                    unsigned **l_1007 = &l_1006[1];
                    int *l_1008 = &g_135;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1006[i] = &l_900;
                    (**g_150) = l_999;
                    l_1011 = ((((l_1000 != l_1002) > (((g_61 , (safe_add_func_int8_t_s_s((((*g_673) , (((*g_775) = p_15) != ((*l_1007) = l_1006[5]))) , (*g_673)), (**g_672)))) | l_1010) | 252UL)) > 0x1DD4L) <= 0xFC5A71CCL);

                    ;
                    (*g_99) = l_1010;
                }

                ;
                (****l_1002) = p_15;
                if ((safe_add_func_uint8_t_u_u((g_399 = (+((*l_1029) = (safe_lshift_func_uint16_t_u_u((*l_942), (l_998 & (*l_893))))))), g_61)))
                {
                    short l_1034 = 0L;
                    for (g_233 = (-26); (g_233 > (-1)); g_233 = safe_add_func_int16_t_s_s(g_233, 2))
                    {
                        if (l_1034)
                            break;
                    }
                    if (l_988)
                    {
                        (*l_942) = ((**g_276) != (*g_277));
                    }
                    else
                    {
                        short l_1038 = 0x55F0L;
                        (***l_1003) = p_15;
                        (*l_893) = (*g_323);
                        (*l_942) = (safe_sub_func_uint32_t_u_u(l_1038, l_1038));
                    }
                }
                else
                {
                    (****l_1002) = p_15;
                    for (g_61 = (-1); (g_61 != 11); g_61++)
                    {
                        return (*l_1029);
                    }
                    return (*l_1029);
                }
            }
            else
            {
                const short l_1048[3] = {0x4784L, 0x4784L, 0x4784L};
                int *l_1063 = &g_41;
                int l_1070[4][5] = {{0x9B2FF902L, 0x9B2FF902L, 0x77D104C3L, 0x9B2FF902L, 0x9B2FF902L}, {0x9B2FF902L, 0x9B2FF902L, 0x77D104C3L, 0x9B2FF902L, 0x9B2FF902L}, {0x9B2FF902L, 0x9B2FF902L, 0x77D104C3L, 0x9B2FF902L, 0x9B2FF902L}, {0x9B2FF902L, 0x9B2FF902L, 0x77D104C3L, 0x9B2FF902L, 0x9B2FF902L}};
                int i, j;
lbl_1062:
                (*g_144) = ((l_1048[0] | (g_1049 == (((g_233 , ((**g_775) = ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_15 == p_15), (safe_sub_func_int32_t_s_s((((*l_1029) < (~(*g_673))) != ((safe_mod_func_uint8_t_u_u((func_22(p_15, (*l_1029), g_399) < 1UL), (*g_673))) > l_1048[1])), (*g_776))))), 0x328DL)), g_399)) | (*****g_1049)))) && (*****g_1049)) , l_1061))) & l_1048[0]);
lbl_1072:
                for (l_1009 = 0; (l_1009 <= 6); l_1009 += 1)
                {
                    char l_1071 = (-5L);
                    for (g_399 = 0; (g_399 <= 3); g_399 += 1)
                    {
                        if (g_100)
                            goto lbl_1062;
                    }
                    if (g_895)
                        goto lbl_1072;
                    for (l_1011 = 0; (l_1011 <= 6); l_1011 += 1)
                    {
                        return l_1048[0];
                    }
                    for (l_988 = 2; (l_988 <= 6); l_988 += 1)
                    {
                        unsigned * const l_1064[1][3][4] = {{{&l_1009, &g_57, &l_1009, &g_57}, {&l_1009, &g_57, &l_1009, &g_57}, {&l_1009, &g_57, &l_1009, &g_57}}};
                        unsigned short *l_1069[2][3];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1069[i][j] = (void*)0;
                        }
                        (****l_1061) = l_1063;
                        (*l_942) = ((*l_1063) | (l_1064[0][1][3] == (*g_775)));
                        (*l_942) = (safe_lshift_func_int8_t_s_u((((*l_987) = (*l_1063)) >= (g_888[7][0] , (safe_lshift_func_uint16_t_u_u(l_988, (l_1070[1][0] = (!l_988)))))), 4));
                    }
                    (*****l_1061) = (l_1071 < l_1071);
                }
                if (((*g_99) | l_988))
                {
                    if ((safe_sub_func_uint32_t_u_u(func_22(p_15, (*g_776), g_888[2][0]), (l_1009 | (safe_rshift_func_uint8_t_u_s(func_22(&l_988, (~(0x9424L & (((g_89[0] , (safe_lshift_func_int8_t_s_u(((((*l_1029) , (*l_1063)) & (*l_1029)) <= (*g_673)), l_988))) < (*l_1029)) & (*g_99)))), l_988), 5))))))
                    {
                        (*g_40) = 0x09A6408DL;
                        (*g_144) = (*l_942);
                        return l_961;
                    }
                    else
                    {
                        (*l_1037) = ((*l_1029) > func_22(((****g_1049) = (****l_1061)), ((*l_1063) & 0x119DCD5AL), ((*l_891) = g_89[0])));
                    }
                    (**g_98) = (safe_mul_func_int32_t_s_s(func_22(((255UL ^ (g_399 = 251UL)) , l_1029), (*l_942), (*l_1063)), (l_1081[0] == (((void*)0 != &g_888[7][0]) , l_1082))));
                }
                else
                {
                    unsigned l_1084 = 7UL;
                    int *l_1085[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1085[i] = &g_135;
                    (**g_98) = (*l_1029);
                    l_1085[4] = func_34(p_15, ((**g_98) = (*l_1029)), &l_1070[1][1], &l_1010, ((*g_776) = l_1084));


                }
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        (*g_99) = l_988;
    }

    ;
    ;
    ;
    ;
    (*g_99) = (*l_942);
    return (*l_893);
}







static int * func_16(unsigned p_17, unsigned p_18, unsigned p_19, unsigned p_20)
{
    short l_889 = 7L;
    int *l_890 = &g_100;
    l_889 = ((***g_150) = (*g_99));
    l_890 = (void*)0;

    ;
    return l_890;


}







static short func_22(int * p_23, unsigned p_24, int p_25)
{
    int l_377 = 1L;
    unsigned *l_382 = (void*)0;
    unsigned l_383 = 0x1FD518D7L;
    char l_392[6] = {0x52L, 0x52L, 0xD4L, 0x52L, 0x52L, 0xD4L};
    char *l_411 = (void*)0;
    char **l_410 = &l_411;
    int l_419[10] = {0xBEF8F1ADL, 0x2C124EF3L, 0xBEF8F1ADL, 0x2C124EF3L, 0xBEF8F1ADL, 0x2C124EF3L, 0xBEF8F1ADL, 0x2C124EF3L, 0xBEF8F1ADL, 0x2C124EF3L};
    int *l_420 = (void*)0;
    unsigned char *l_580[5] = {&g_399, &g_73[0], &g_399, &g_73[0], &g_399};
    int l_581 = 0xEFB5CAA6L;
    unsigned l_588 = 1UL;
    short l_597[8][9] = {{0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}, {0L, 0L, 0xD151L, 0x7CA0L, 0x2CB7L, 0x2CB7L, 0x7CA0L, 0xD151L, 0L}};
    short **l_602 = &g_277;
    char l_605 = 0x6DL;
    int *l_611[7];
    short l_667 = 0x9691L;
    int *** const *l_736 = &g_150;
    int *** const **l_735 = &l_736;
    int l_764 = 3L;
    short *l_837[4];
    int *l_881 = &l_581;
    int i, j;
    for (i = 0; i < 7; i++)
        l_611[i] = &l_419[7];
    for (i = 0; i < 4; i++)
        l_837[i] = &g_233;
    return (*****l_735);
}







static int * func_26(short p_27, unsigned p_28)
{
    unsigned short l_337 = 0xCBAEL;
    int *l_341 = &g_41;
    char l_366 = 0L;
    int *l_373 = &g_41;
lbl_358:
    if (((0x57L != ((g_89[3] != (safe_rshift_func_int16_t_s_s((((((((safe_rshift_func_uint8_t_u_u(0x31L, 4)) < ((p_28 > (safe_add_func_int32_t_s_s(((((*g_277) >= (((+p_27) == ((safe_rshift_func_uint16_t_u_u(l_337, ((safe_add_func_int32_t_s_s(((*g_99) = ((0x80AB61ADL >= (g_61 & p_28)) != p_28)), l_337)) == 0x56L))) >= p_28)) && (*g_277))) && 0x8FABL) , 0L), 0x6E046924L))) , 7L)) | l_337) == 0x089EL) ^ (*g_277)) ^ (**g_276)) >= (**g_276)), l_337))) | l_337)) , l_337))
    {
lbl_340:
        for (g_233 = 0; (g_233 <= 6); g_233 += 1)
        {
            int i;
            if (l_337)
                break;
            if (g_233)
                goto lbl_358;
            if (g_69)
                goto lbl_340;
        }
        return l_341;


    }
    else
    {
        int *l_342 = &g_100;
        unsigned l_353 = 0x962FC695L;
        unsigned char *l_354 = (void*)0;
        unsigned char *l_355 = &g_73[0];
        unsigned char l_356 = 252UL;
        int **l_357 = &g_40;
        (**g_98) = (-2L);
        l_342 = func_34(l_342, p_28, l_342, ((safe_mod_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((*l_341), (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((*l_342), (safe_lshift_func_int16_t_s_u((**g_276), 7)))), 3)))) , 0UL) | (+(((void*)0 != l_341) >= (-6L)))), (*l_342))) , l_342), p_27);

        ;
        l_341 = ((*l_357) = func_34(l_341, (l_356 & (*g_277)), (**g_150), l_342, (*l_341)));

        ;
        (*l_341) = ((g_95 , (((*g_277) = (**l_357)) > 65527UL)) == 1UL);
    }

    ;
    if ((*l_341))
    {
        int *l_359 = &g_41;
        unsigned *l_367 = &g_70;
        unsigned *l_368[5];
        int **l_369 = &g_40;
        int i;
        for (i = 0; i < 5; i++)
            l_368[i] = &g_217;
        (*l_369) = func_34(l_341, (*l_341), l_359, func_34(l_359, (safe_sub_func_uint32_t_u_u((((((*l_341) > (((safe_rshift_func_uint16_t_u_u(((((*l_341) < ((g_135 & (safe_mod_func_uint32_t_u_u(((g_217 = (((*l_367) = (l_366 | (4294967295UL <= (*l_359)))) >= (*l_341))) , 0UL), p_27))) ^ 0x2A5EL)) ^ 0UL) == 4UL), 14)) >= 0x2FL) , g_70)) < g_64[0]) & (*l_359)) >= 0x2DF6L), 1UL)), l_341, (**g_150), (*l_341)), g_322);
        l_341 = l_341;
    }
    else
    {
        unsigned short ***l_372 = &g_370;
        (*l_372) = g_370;
    }
    return l_373;


}







static const int func_29(int * p_30, int p_31, unsigned p_32, unsigned char p_33)
{
    int l_287 = 0x95F2741BL;
    int l_298 = 0L;
    int l_302 = 0x71606EB4L;
    int *l_318 = &g_41;
    const int *l_321 = &g_322;
    unsigned *l_326 = &g_61;
    unsigned *l_327[9];
    char l_328 = 0xC9L;
    int i;
    for (i = 0; i < 9; i++)
        l_327[i] = &g_217;
    for (g_70 = (-18); (g_70 != 41); ++g_70)
    {
        unsigned short l_283 = 0xEF89L;
        int *l_311 = &g_100;
    }
    for (g_135 = 0; (g_135 < (-29)); g_135--)
    {
        int *l_314 = &g_41;
        int ***l_317 = (void*)0;
        const int *l_320 = (void*)0;
        const int **l_319[7][3][1] = {{{&l_320}, {&l_320}, {&l_320}}, {{&l_320}, {&l_320}, {&l_320}}, {{&l_320}, {&l_320}, {&l_320}}, {{&l_320}, {&l_320}, {&l_320}}, {{&l_320}, {&l_320}, {&l_320}}, {{&l_320}, {&l_320}, {&l_320}}, {{&l_320}, {&l_320}, {&l_320}}};
        int i, j, k;
        g_323 = (l_321 = func_34(&l_298, (*p_30), l_314, func_34(&l_298, (safe_sub_func_uint32_t_u_u((*l_314), ((&g_151[5] == l_317) & p_32))), &p_31, l_318, g_95), p_33));

        ;
        (*p_30) = (*g_323);
    }

    ;
    ;
    (***g_150) = (safe_rshift_func_uint16_t_u_u((((*l_326) = (p_32 , g_217)) >= (*l_321)), 15));
    (**g_150) = func_43(&l_298, (*g_99), ((*l_318) = (*l_321)), g_233, (l_328 , (1UL ^ 0xD0385831L)));

    ;
    ;
    return (*p_30);
}







static int * func_34(int * p_35, int p_36, int * p_37, int * p_38, unsigned p_39)
{
    for (g_57 = 0; g_57 < 7; g_57 += 1)
    {
        g_151[g_57] = &g_40;
    }
    return (**g_150);


}







static int * func_43(int * p_44, int p_45, unsigned p_46, unsigned p_47, unsigned p_48)
{
    int l_50[3][6] = {{(-1L), 2L, (-1L), 2L, (-1L), 2L}, {(-1L), 2L, (-1L), 2L, (-1L), 2L}, {(-1L), 2L, (-1L), 2L, (-1L), 2L}};
    const unsigned *l_60[5][8][1] = {{{&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}}, {{&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}}, {{&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}}, {{&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}}, {{&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}, {&g_61}}};
    int l_90[5][7][3] = {{{0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}}, {{0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}}, {{0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}}, {{0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}}, {{0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}, {0L, 0L, 0x46FFD3C4L}}};
    char l_102 = 0xBBL;
    int l_122 = 0x4ED5BCCFL;
    int *l_127 = &l_122;
    const int *l_168 = &g_135;
    const int **l_167 = &l_168;
    unsigned l_182[1];
    int ***l_273 = &g_151[4];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_182[i] = 0xABA5DBC7L;
    for (p_47 = 0; (p_47 <= 2); p_47 += 1)
    {
        const char l_76 = (-5L);
        const int *l_94 = &g_95;
        unsigned char l_103 = 0xA1L;
        unsigned *l_105 = (void*)0;
        unsigned **l_104[6][5][7] = {{{&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}}, {{&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}}, {{&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}}, {{&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}}, {{&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}}, {{&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}, {&l_105, &l_105, &l_105, &l_105, &l_105, (void*)0, &l_105}}};
        unsigned short l_133 = 0xF968L;
        int *l_138 = &l_122;
        const int l_236 = 0x1DA364DEL;
        const unsigned l_254 = 0x30F14CA1L;
        int i, j, k;
        for (p_46 = 0; (p_46 <= 2); p_46 += 1)
        {
            short l_67 = 0x9A7BL;
            unsigned *l_71 = &g_61;
            for (p_45 = 2; (p_45 >= 0); p_45 -= 1)
            {
                unsigned *l_55 = (void*)0;
                unsigned *l_56 = &g_57;
                const unsigned **l_62 = (void*)0;
                short *l_68[6] = {&l_67, &g_69, &l_67, &g_69, &l_67, &g_69};
                unsigned char *l_72 = &g_73[0];
                unsigned short l_84[9] = {0xD359L, 0x3F77L, 0xD359L, 0x3F77L, 0xD359L, 0x3F77L, 0xD359L, 0x3F77L, 0xD359L};
                int i, j;
                for (p_48 = 0; (p_48 <= 2); p_48 += 1)
                {
                    int *l_52 = &g_41;
                    int **l_51[10] = {&l_52, &l_52, &l_52, &l_52, &l_52, &l_52, &l_52, &l_52, &l_52, &l_52};
                    int i;
                    p_44 = (void*)0;

                    ;
                }
                if ((((((safe_add_func_int32_t_s_s(l_50[p_47][(p_47 + 3)], ((*l_56) = 0x95C1F4ACL))) & p_46) , (+(0x40778D40L & g_57))) ^ ((*l_72) = (safe_add_func_int32_t_s_s(((g_63 = l_60[3][5][0]) != ((safe_lshift_func_uint16_t_u_s(l_67, (g_70 = (g_69 = g_41)))) , l_71)), 0x13644CADL)))) || 0xD709L))
                {
                    int l_77[1][8][8] = {{{(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}, {(-1L), (-1L), 0xB92BB776L, (-1L), (-1L), 0xB92BB776L, (-1L), (-1L)}}};
                    int i, j, k;
                    if ((safe_lshift_func_int8_t_s_s((p_47 && g_61), (((g_61 , (+l_76)) != l_77[0][3][6]) , (safe_add_func_uint8_t_u_u(((((g_41 <= (safe_mod_func_uint32_t_u_u(l_50[1][1], (g_61 , 0x680EDED6L)))) != (*g_40)) & p_47) ^ 0x72CDL), p_46))))))
                    {
                        short l_93 = 1L;
                        if ((*g_40))
                            break;
                        (*g_40) = (safe_add_func_uint8_t_u_u(l_84[3], ((((safe_lshift_func_int8_t_s_s(g_41, 4)) ^ p_46) != (safe_add_func_int32_t_s_s((((g_89[0] = (*g_40)) >= l_90[3][4][2]) || (-10L)), ((*l_56) = 0x6D7B3CACL)))) , (safe_add_func_uint32_t_u_u(l_93, 7L)))));
                    }
                    else
                    {
                        const int *l_97 = &g_95;
                        const int **l_96 = &l_97;
                        (*g_40) = 0xFE19BE17L;
                        (*l_96) = (l_94 = &p_45);

                        ;
                        ;
                    }
                }
                else
                {
                    int l_101 = (-4L);
                    (*g_99) = (((g_61 <= (g_61 , ((g_98 = &g_40) != (((*g_40) = 0x5C8DD589L) , &g_40)))) & l_101) > (((l_102 & ((l_84[6] && (0xCE29L <= 0UL)) < p_47)) != l_50[p_47][(p_47 + 3)]) && l_50[p_47][(p_47 + 3)]));

                    ;
                }

                ;
                if ((**g_98))
                    break;
                if (l_90[3][4][2])
                    break;
            }
        }

        ;
        (*g_40) = l_50[0][5];
    }


    return (**l_273);


}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_89[i], "g_89[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_888[i][j], "g_888[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
