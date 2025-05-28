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



static int g_18 = 0xDE9E8436L;
static int g_58 = (-1L);
static int g_77 = 1L;
static int g_87 = 0L;
static int g_88 = (-3L);
static int g_90 = (-9L);
static short g_109 = (-4L);
static int *g_114 = &g_87;
static char g_159[9] = {0x43L, 0x43L, 0x76L, 0x43L, 0x43L, 0x76L, 0x43L, 0x43L, 0x76L};
static unsigned g_217 = 0x881F7A3DL;
static int *g_225 = &g_87;
static unsigned char g_236[3] = {255UL, 255UL, 255UL};
static int **g_301 = &g_114;
static int ***g_300 = &g_301;
static int *g_385 = &g_58;
static const int *g_394 = &g_88;
static int g_397 = (-1L);
static int *g_399 = &g_58;
static unsigned short g_429[4][8] = {{0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L}, {0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L}, {0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L}, {0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L, 0UL, 0xBDB4L}};
static const short g_455 = 0x0352L;
static int ***g_579[8] = {&g_301, &g_301, &g_301, &g_301, &g_301, &g_301, &g_301, &g_301};
static int *g_632 = &g_77;
static const unsigned short g_664 = 0x7671L;
static const unsigned g_815 = 0xE65662BAL;
static int g_917[7] = {0x85345882L, 0x85345882L, 0xEFC96374L, 0x85345882L, 0x85345882L, 0xEFC96374L, 0x85345882L};
static int *g_933 = &g_58;
static int g_939 = 0x02131F4AL;
static int *g_959 = (void*)0;
static int g_960 = (-1L);
static int ***g_1023[5] = {&g_301, &g_301, &g_301, &g_301, &g_301};



static unsigned short func_1(void);
static unsigned char func_2(unsigned char p_3, char p_4, unsigned p_5, unsigned p_6, const unsigned p_7);
static unsigned short func_21(short p_22);
static int * func_43(int p_44, int p_45, int * p_46, unsigned char p_47);
static short func_49(int * p_50);
static int * func_51(int * p_52, unsigned char p_53, short p_54, unsigned p_55, char p_56);
static unsigned func_63(int * p_64, unsigned char p_65, int p_66, char p_67, int * p_68);
static int * func_69(const int * const p_70, char p_71, int * p_72, int p_73);
static int * func_74(int * const p_75, int * p_76);
static const int * func_80(int * p_81, int * p_82, int p_83);
static unsigned short func_1(void)
{
    unsigned char l_31[9] = {4UL, 2UL, 4UL, 2UL, 4UL, 2UL, 4UL, 2UL, 4UL};
    unsigned short l_42 = 0UL;
    int l_1011[10][6][2] = {{{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}, {{0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}, {0x72BA01FDL, 0xE878EE66L}}};
    int ***l_1024 = &g_301;
    unsigned short l_1029 = 0x8C76L;
    int **l_1030 = &g_225;
    int i, j, k;
    (*g_225) = (func_2((((((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0xD19CL, g_18)), ((safe_sub_func_uint16_t_u_u(func_21((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(g_18, 3)) || l_31[6]) == ((safe_mul_func_uint16_t_u_u(l_31[6], l_31[6])) >= (+(((safe_mod_func_int8_t_s_s(g_18, (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(((~l_42) ^ g_18), l_31[6])) < l_31[7]), 0)), 249UL)))) >= 1L) >= 0xBEL)))), l_42)) < l_42), 0))), g_917[3])) != (-2L)))), 1L)) < g_815), l_1011[4][5][0])) <= l_31[7]), 0x31A0L)) == l_1011[5][1][0]) ^ l_31[8]) && l_31[0]) >= l_31[2]), l_1011[4][5][0], g_159[3], l_31[6], g_429[3][6]) < l_42);

    ;

    if ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((-6L), 2)), (safe_rshift_func_int16_t_s_u((g_1023[1] == l_1024), ((safe_lshift_func_uint16_t_u_s((func_63((**l_1024), ((safe_mod_func_uint32_t_u_u((3UL & (g_88 != (l_42 || 0xCEL))), func_2((g_159[3] > 0L), g_815, g_90, g_917[6], g_236[0]))) >= l_1029), l_1029, g_664, (*g_301)) || (***l_1024)), 1)) <= l_42))))))
    {
        unsigned l_1036 = 0UL;
        int *l_1057 = &g_88;
        for (l_42 = 0; (l_42 <= 8); l_42 += 1)
        {
            int l_1041 = 0x35715803L;
            unsigned short l_1045 = 1UL;
            int **l_1048[6][9][4] = {{{&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}}, {{&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}}, {{&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}}, {{&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}}, {{&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}}, {{&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}, {&g_399, &g_933, &g_933, &g_114}}};
            int i, j, k;
            for (g_88 = 8; (g_88 >= 0); g_88 -= 1)
            {
                const int **l_1031 = (void*)0;
                int i;
                if (l_31[l_42])
                    break;
            }
        }
        (**l_1030) = ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(func_49(l_1057), (safe_rshift_func_int16_t_s_s(((void*)0 == (*l_1024)), 8)))), (((-1L) | (g_917[3] == 65529UL)) | ((*l_1030) != l_1057)))) != 0x6200EC28L), g_917[6])) == 0xF432C229L);
        return (***l_1024);
    }
    else
    {
        int l_1066 = (-1L);
        for (g_960 = 8; (g_960 >= 3); g_960 -= 1)
        {
            char l_1082 = (-1L);
            int * const l_1093 = (void*)0;
            int l_1098[2][1][5];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1098[i][j][k] = (-3L);
                }
            }
            for (l_42 = 1; (l_42 <= 8); l_42 += 1)
            {
                int *l_1068 = (void*)0;
                int l_1087 = 0x632EC993L;
                int i;
                for (g_88 = 1; (g_88 <= 8); g_88 += 1)
                {
                    int *l_1067 = (void*)0;
                    unsigned l_1092 = 0x8676541FL;
                    int i;
                    if (func_2(l_31[l_42], ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x8BL, 0xB0L)), (safe_mul_func_int16_t_s_s(l_31[g_960], 0xE15FL)))) < g_159[l_42]), g_960, g_88, func_63((*g_301), g_217, (*g_933), l_1066, l_1067)))
                    {
                        unsigned short l_1071 = 0x35FBL;
                        (**l_1024) = func_51(func_74((*g_301), l_1068), (***l_1024), g_960, (0x2F0B24E0L > l_1066), (safe_rshift_func_uint8_t_u_s((0xE7D3L >= (l_1071 != 0L)), 4)));
                    }
                    else
                    {
                        (*l_1030) = (*l_1030);
                        (*g_399) = ((safe_lshift_func_int8_t_s_s((g_429[3][6] && (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(249UL, ((g_217 ^ (safe_lshift_func_uint8_t_u_u((((g_87 > ((!(func_2((safe_sub_func_int16_t_s_s(l_1082, ((void*)0 != &g_301))), (func_2(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_429[3][6], func_2(g_77, l_1082, (***l_1024), g_87, g_917[4]))), g_455)) != 0UL), l_1082, (**l_1030), g_815, g_159[0]) > g_77), g_159[5], l_1082, l_1082) == g_960)) | l_1087)) >= g_217) >= g_917[6]), 2))) ^ 250UL))), g_917[6]))), 6)) < 0xBFL);
                        if ((**g_301))
                            continue;
                        (*l_1024) = (*l_1024);
                    }
                    (*g_399) = (g_88 < (safe_mod_func_uint8_t_u_u(func_63(l_1067, (safe_lshift_func_uint16_t_u_u(g_917[6], g_159[1])), (**g_301), l_1092, func_74(l_1093, (**g_300))), 1UL)));
                    (**l_1024) = (**g_300);
                    (**g_301) = (+(**g_301));
                }
            }
        }
        l_1066 = (+(safe_add_func_uint16_t_u_u(g_77, g_960)));
        (*g_933) = (**l_1030);
        return g_917[6];
    }
}







static unsigned char func_2(unsigned char p_3, char p_4, unsigned p_5, unsigned p_6, const unsigned p_7)
{
    unsigned char l_1014 = 251UL;
    (*g_399) = (p_5 != (safe_lshift_func_uint8_t_u_s((l_1014 | (safe_lshift_func_uint8_t_u_s(p_7, 3))), l_1014)));
    return l_1014;
}







static unsigned short func_21(short p_22)
{
    unsigned l_48[6][4] = {{7UL, 7UL, 0x89ED5B60L, 0UL}, {7UL, 7UL, 0x89ED5B60L, 0UL}, {7UL, 7UL, 0x89ED5B60L, 0UL}, {7UL, 7UL, 0x89ED5B60L, 0UL}, {7UL, 7UL, 0x89ED5B60L, 0UL}, {7UL, 7UL, 0x89ED5B60L, 0UL}};
    int *l_57 = &g_58;
    unsigned l_405 = 0xACF154E1L;
    int i, j;
    (*g_301) = func_43(p_22, ((l_48[2][2] || func_49(func_51(l_57, ((((safe_lshift_func_int16_t_s_s((-1L), 13)) || (((safe_lshift_func_int8_t_s_s(((~(*l_57)) >= func_63(func_69(func_74(l_57, &g_58), (*l_57), l_57, p_22), g_217, (*g_385), p_22, l_57)), 1)) <= (-5L)) ^ g_159[6])) && 4294967295UL) | g_236[0]), l_405, (*l_57), p_22))) || p_22), l_57, g_18);

    ;

    return p_22;
}







static int * func_43(int p_44, int p_45, int * p_46, unsigned char p_47)
{
    int * const l_633 = &g_87;
    int *l_689 = &g_77;
    int l_705 = (-1L);
    short l_734 = 8L;
    int *l_806 = (void*)0;
    const int *l_857 = &g_87;
    int ***l_867 = (void*)0;
    const unsigned short l_889 = 1UL;
    int *l_964[8][6][4] = {{{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}, {{&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}, {&g_88, &g_77, &g_77, &l_705}}};
    char l_975 = 0xE4L;
    int **l_976 = &g_399;
    char l_1001 = 0x2BL;
    char l_1005 = (-5L);
    int i, j, k;
    if ((*g_385))
    {
        int *l_640 = &g_58;
        int *l_642 = &g_87;
        int ***l_643 = &g_301;
        unsigned char l_645 = 0x22L;
        int *l_663[10][2][2] = {{{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}, {{&g_77, (void*)0}, {&g_77, (void*)0}}};
        int l_681 = 0x4ACD3A27L;
        int *l_683 = &g_88;
        int *l_796[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_796[i] = &g_77;
        for (g_77 = 0; (g_77 <= 23); g_77 = safe_add_func_uint8_t_u_u(g_77, 2))
        {
            int **l_634[2];
            int **l_635 = (void*)0;
            int **l_636[8][8] = {{(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_399, (void*)0, (void*)0, &g_399, (void*)0, (void*)0}};
            int **l_637 = &g_114;
            int i, j;
            for (i = 0; i < 2; i++)
                l_634[i] = &g_399;
            (*g_114) = ((void*)0 == g_632);
            (*l_637) = l_633;

            ;
            (**l_637) = (*g_114);
            p_46 = &p_45;

            ;
        }

        ;
        for (p_45 = 6; (p_45 >= 2); p_45 -= 1)
        {
            int l_638[10][7] = {{0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}, {0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L, 0xF4DF76F8L, 0xD8308F94L}};
            int *l_639 = &g_87;
            const int **l_678 = &g_394;
            const int ***l_677 = &l_678;
            int *l_708[10] = {&g_87, &g_87, &g_88, &g_87, &g_87, &g_88, &g_87, &g_87, &g_88, &g_87};
            int i, j;
            for (p_44 = 3; (p_44 >= 0); p_44 -= 1)
            {
                int i;
                if (l_638[1][1])
                    break;
            }
        }
        (*l_642) = ((p_47 ^ func_63((**l_643), (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((void*)0 == &p_45), (((safe_lshift_func_int16_t_s_s(p_44, 9)) & (!(*g_632))) != p_44))), ((8L & (0x24L >= (-1L))) <= (***l_643)))), (*g_225), (*l_640), &l_705)) & g_429[3][0]);

        ;
        if (func_63((*g_301), (*l_633), (*g_385), (*l_689), &p_45))
        {
            (*g_301) = &l_705;

            ;
        }
        else
        {
            int ***l_769 = &g_301;
            int l_787 = 4L;
            int *l_799 = &g_87;
            int *l_852 = &l_705;
            if (((safe_lshift_func_uint8_t_u_s(p_44, (safe_lshift_func_uint8_t_u_u(0xFBL, g_18)))) != (((g_429[3][6] | (safe_lshift_func_int8_t_s_s((1L & ((safe_sub_func_int16_t_s_s(p_47, (0x4D83L > p_47))) <= (p_47 == p_44))), 3))) > g_429[3][6]) < g_217)))
            {
                int * const l_762 = (void*)0;
                (*l_640) = func_49(func_74(func_74(l_762, (*g_301)), &p_45));
                (**g_300) = &p_45;

                ;
                p_46 = (void*)0;

                ;
                if ((!1L))
                {
                    (*g_399) = (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_44, ((safe_mul_func_int16_t_s_s(((*l_633) == (p_44 > ((p_44 || 0x9AL) != (p_45 > ((void*)0 == l_769))))), (safe_add_func_int16_t_s_s(p_45, p_45)))) <= (**g_301)))), p_47));
                    (***g_300) = (***g_300);
                }
                else
                {
                    int *l_774 = &g_88;
                    for (g_58 = 3; (g_58 >= 0); g_58 -= 1)
                    {
                        (*l_633) = ((l_769 != &g_301) && p_47);
                        (**g_300) = (**g_300);
                        if ((*g_225))
                            break;
                    }
                    for (g_87 = 6; (g_87 >= 29); ++g_87)
                    {
                        (**l_769) = &l_705;

                        ;
                    }

                    ;
                    (**l_643) = &l_705;

                    ;
                    return l_774;



                }
            }
            else
            {
                int *l_788 = &g_77;
                (***g_300) = (***l_769);
                (*g_225) = 0x118A7179L;
                if (((~(safe_mul_func_int16_t_s_s(g_18, ((0xA6L == (safe_add_func_uint8_t_u_u((p_45 != g_236[0]), ((*l_689) || (*g_114))))) || ((safe_mod_func_int32_t_s_s((*l_689), 7UL)) || 0xACL))))) | g_455))
                {
                    for (g_87 = 7; (g_87 > 22); g_87++)
                    {
                        int * const l_783 = &g_77;
                        int **l_784 = &l_689;
                        (*l_784) = l_783;
                        if ((*p_46))
                            continue;
                    }
                    (*l_683) = (safe_mul_func_uint8_t_u_u(p_44, g_159[0]));
                    (*g_632) = ((l_787 < ((1UL > (((~p_47) > g_429[3][6]) != g_90)) && (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0L, ((safe_sub_func_uint8_t_u_u(p_45, (*l_642))) >= 0xB2L))), 3)))) ^ p_44);
                }
                else
                {
                    int l_798 = 1L;
                    int *l_805 = &g_88;
                    if ((p_47 & g_87))
                    {
                        const int * const l_795 = (void*)0;
                        int *l_797[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_797[i] = (void*)0;
                        (**l_769) = func_74(&l_798, l_799);
                        (**l_769) = (**l_769);
                    }
                    else
                    {
                        unsigned l_800 = 1UL;
                        (*g_301) = func_74(&l_705, l_788);
                        (**l_769) = func_74(&l_798, (*g_301));
                        (*g_385) = l_800;
                    }
                    if ((*g_385))
                    {
                        (**l_769) = (void*)0;

                        ;
                    }
                    else
                    {
                        (**l_769) = (**l_769);
                        return (**l_769);


                    }

                    ;
                    if (((g_88 > l_798) <= ((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(func_63((**g_300), (*l_799), (0xC6L || 2L), p_44, func_74(func_74(func_74(l_788, &l_798), &l_705), (**g_300))), p_47)), g_159[2])) | (-1L))))
                    {
                        (*g_385) = (-6L);
                        (*g_385) = (*p_46);
                        return (**g_300);


                    }
                    else
                    {
                        (*g_399) = (+(*g_632));
                        (*g_399) = (*p_46);
                        l_805 = func_74(&p_45, func_74(func_74(&p_45, (**l_643)), (**g_300)));

                        ;
                    }

                    ;
                    ;
                    (**g_300) = l_788;

                    ;
                }

                ;
            }

            ;
            ;
            if (((&p_46 != &p_46) == (-4L)))
            {
                return l_806;



            }
            else
            {
                unsigned char l_818 = 0x7AL;
                short l_835[5] = {0x6F57L, 0x679DL, 0x6F57L, 0x679DL, 0x6F57L};
                int l_851[1];
                int *l_853 = &g_88;
                int i;
                for (i = 0; i < 1; i++)
                    l_851[i] = 0x4B9F8F33L;
                for (g_109 = 6; (g_109 >= 1); g_109 -= 1)
                {
                    unsigned char l_832 = 0xCDL;
                    int *l_854 = &g_90;
                    const int **l_855 = (void*)0;
                    const int **l_856[6][5][8] = {{{&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}}, {{&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}}, {{&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}}, {{&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}}, {{&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}}, {{&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}, {&g_394, &g_394, &g_394, &g_394, &g_394, (void*)0, &g_394, (void*)0}}};
                    int i, j, k;
                    if ((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((0x90466B02L && (((-2L) < (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_815, (0xB9D8L | (*l_633)))), (safe_rshift_func_uint8_t_u_u(0x92L, 6))))) | l_818)), 0xD90FC0F5L)), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_818, p_44)), 5L)), g_397)))))
                    {
                        (*l_633) = (+func_63(func_74((*g_301), (**l_769)), g_217, l_818, p_45, &p_45));

                        ;
                    }
                    else
                    {
                        int *l_825 = &g_88;
                        (**l_769) = l_825;

                        ;
                        (**l_769) = &p_45;

                        ;
                    }

                    ;
                    (*g_301) = &p_45;

                    ;
                    if ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((&p_46 != (void*)0), (l_832 != func_63((**g_300), g_236[2], ((safe_sub_func_int8_t_s_s(l_835[1], p_44)) & ((1L > (4L && l_832)) & p_47)), p_47, (**l_643))))), g_18)), l_835[2])))
                    {
                        (*g_399) = ((p_47 >= (l_835[1] <= (safe_mod_func_int8_t_s_s(1L, g_217)))) & ((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((-2L), 2)), (g_109 == p_44))), (l_832 | ((void*)0 != (*g_300))))) < (*l_689)));
                    }
                    else
                    {
                        unsigned char l_850 = 0UL;
                        (*l_640) = (safe_rshift_func_uint16_t_u_u(0x7FAFL, (((-4L) && p_44) >= p_47)));
                        (*l_633) = (safe_lshift_func_int8_t_s_u(func_63(func_51(&p_45, (safe_mod_func_uint8_t_u_u(5UL, g_58)), (((*l_642) >= (*l_642)) && (*l_642)), g_429[3][6], g_397), g_109, l_850, l_851[0], l_852), p_44));
                    }

                    ;
                    l_857 = func_80(l_853, l_854, (l_853 == (**l_769)));

                    ;
                }

                ;
                for (g_88 = 0; (g_88 <= 7); g_88 += 1)
                {
                    if ((*g_225))
                        break;
                }
                return l_853;



            }
        }

        ;
    }
    else
    {
        int l_860 = 0xFAFFF297L;
        (*g_301) = &p_45;

        ;
        for (g_77 = 13; (g_77 < 6); g_77 = safe_sub_func_uint8_t_u_u(g_77, 9))
        {
            (*g_225) = (*p_46);
            (*p_46) = (g_109 > (p_45 > l_860));
            if ((*p_46))
                break;
            if ((*p_46))
                continue;
        }
        for (g_217 = (-16); (g_217 != 43); ++g_217)
        {
            (*p_46) = l_860;
            (*g_301) = (**g_300);
        }
    }

    ;
    ;
    for (g_90 = (-16); (g_90 <= 11); g_90 = safe_add_func_int16_t_s_s(g_90, 1))
    {
        (*g_385) = (((g_815 ^ p_45) != 0x55008A9DL) != g_90);
        (*g_114) = (safe_mul_func_int16_t_s_s(0x1435L, ((void*)0 != l_867)));
    }
    for (p_44 = 0; (p_44 <= 2); p_44 += 1)
    {
        int *l_885[7][2][6] = {{{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}, {{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}, {{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}, {{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}, {{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}, {{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}, {{&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}, {&g_77, &g_77, &g_58, (void*)0, &g_88, &g_58}}};
        const int *l_898[8][8] = {{&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}, {&g_90, &g_77, &g_77, &l_705, &l_705, &g_77, &g_77, &g_90}};
        int ***l_916 = (void*)0;
        int *l_938 = &l_705;
        int *l_984 = &g_87;
        char l_992[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_992[i] = (-2L);
    }
    return (*l_976);



}







static short func_49(int * p_50)
{
    char l_408 = 0xF6L;
    int ***l_411 = &g_301;
    int *l_437[3][4][3] = {{{&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}}, {{&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}}, {{&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}, {&g_90, &g_87, &g_90}}};
    char l_441 = 0x79L;
    unsigned short l_442 = 65531UL;
    unsigned l_465 = 0x64AF0836L;
    char l_520 = (-1L);
    int *l_534 = &g_58;
    int i, j, k;
    if (l_408)
    {
        int * const l_413 = &g_58;
        int *l_414 = &g_77;
        int ***l_421 = &g_301;
        int l_435 = 0x166D391CL;
        char l_440 = (-8L);
        int l_479 = 0xD67BCEBCL;
        unsigned l_539 = 0x2B1B688AL;
        if ((safe_sub_func_uint16_t_u_u(((void*)0 != l_411), (***l_411))))
        {
            return g_77;
        }
        else
        {
            unsigned short l_412 = 65533UL;
            int ***l_415 = &g_301;
            (**l_411) = (**l_411);
            (***l_415) = (l_415 == l_415);
        }
        (**l_411) = p_50;

        ;
        (*g_399) = func_63(p_50, (safe_unary_minus_func_int16_t_s((((safe_sub_func_int16_t_s_s(((*g_300) != (*l_411)), g_397)) || func_63(func_74(p_50, (**l_411)), (***l_411), (*g_114), (***l_411), (**l_411))) <= (*g_399)))), (*g_399), g_159[1], p_50);

        ;
        if ((func_63(l_414, g_159[3], ((*l_414) < (((***l_411) < (safe_mod_func_uint32_t_u_u((0x50DBL >= ((*l_414) < (*g_385))), (*l_413)))) <= ((p_50 == p_50) || (***l_411)))), (*l_414), p_50) ^ (*g_385)))
        {
            int * const l_436 = &g_88;
            int *l_438 = &g_87;
            for (l_408 = 0; (l_408 <= 8); l_408 += 1)
            {
                int *l_422 = &g_77;
                char l_434[9][9] = {{0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}, {0x78L, (-1L), (-1L), 0x59L, 0xD7L, 0L, 0xD3L, 0x6FL, 0xCBL}};
                int *l_439 = &g_90;
                unsigned char l_446 = 0x7DL;
                const int *l_448 = (void*)0;
                int i, j;
                if ((((void*)0 != l_421) & 0x8B90L))
                {
                    unsigned char l_428 = 0xD9L;
                    if ((*g_399))
                        break;
                    if ((*p_50))
                        break;
                    l_422 = p_50;

                    ;
                    for (g_217 = 0; (g_217 <= 8); g_217 += 1)
                    {
                        unsigned l_430[2][2][5] = {{{4294967290UL, 0x986D2FA0L, 4294967293UL, 4294967290UL, 4294967290UL}, {4294967290UL, 0x986D2FA0L, 4294967293UL, 4294967290UL, 4294967290UL}}, {{4294967290UL, 0x986D2FA0L, 4294967293UL, 4294967290UL, 4294967290UL}, {4294967290UL, 0x986D2FA0L, 4294967293UL, 4294967290UL, 4294967290UL}}};
                        int *l_433 = &g_90;
                        int i, j, k;
                        (*p_50) = (safe_unary_minus_func_uint32_t_u(((((safe_mul_func_int16_t_s_s((***l_411), ((!(l_428 ^ 0xBDL)) == 0x9397L))) == ((*g_385) == g_429[3][6])) || l_430[1][1][3]) || (+(&p_50 == &p_50)))));
                        (*l_422) = (safe_sub_func_uint8_t_u_u(0x33L, func_63(l_433, l_434[4][8], l_435, func_63(func_74(l_436, l_437[0][1][0]), ((&g_301 == &g_301) == l_428), (***l_421), (*l_433), l_438), l_439)));
                        (*l_439) = func_63(l_438, func_63(func_74(p_50, (**l_421)), g_87, (&p_50 != (*l_411)), ((((*l_421) != &p_50) != (*l_433)) ^ g_236[0]), l_433), (*l_413), l_440, l_439);
                    }
                }
                else
                {
                    return l_441;
                }

                ;
                (**g_300) = (**g_300);
                (**l_421) = (**l_411);
                for (g_90 = 0; (g_90 <= 2); g_90 += 1)
                {
                    const int **l_443 = &g_394;
                    int i;
                    (*l_443) = func_80(func_51(func_51(func_74((*g_301), (*g_301)), g_236[g_90], g_236[g_90], g_236[g_90], (~(4L || 0xA3CF75FDL))), g_88, g_429[0][5], l_442, g_87), l_422, g_236[g_90]);

                    ;
                    (*g_301) = func_74((**g_300), func_74(p_50, (**g_300)));
                    (*g_399) = ((0x56E3L && (safe_mod_func_int16_t_s_s((-1L), l_446))) != ((&p_50 != (*g_300)) | 1UL));
                    for (g_109 = 6; (g_109 >= 1); g_109 -= 1)
                    {
                        const int *l_447[7][2] = {{&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}, {&g_88, &g_88}};
                        int i, j;
                        p_50 = (*g_301);

                        ;
                        (*g_225) = (*l_439);
                        l_448 = l_447[1][1];

                        ;
                        (*l_443) = func_80((*g_301), p_50, g_397);
                    }
                }

                ;
            }
            if ((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((&g_301 != l_411), 5UL)) > (func_63((**l_421), (*l_436), (*l_413), g_236[0], (**l_411)) && (***l_421))), 0)))
            {
                int l_464 = 0x05167DF0L;
                (*p_50) = (((+(0x583DL < 0x2A4FL)) | (5L <= func_63((**g_300), ((safe_sub_func_int32_t_s_s((**g_301), (*l_436))) >= g_455), (*p_50), g_429[3][6], l_438))) || (*l_436));
                for (g_217 = 0; (g_217 == 2); ++g_217)
                {
                    (*p_50) = (0xA9DDD121L <= (*p_50));
                }
                for (l_408 = 0; (l_408 == (-27)); --l_408)
                {
                    int l_463 = (-7L);
                    if ((*p_50))
                        break;
                    (***g_300) = (*g_385);
                    for (g_217 = (-15); (g_217 == 6); g_217 = safe_add_func_uint16_t_u_u(g_217, 1))
                    {
                        const int * const l_462 = (void*)0;
                        (*l_413) = (-3L);
                        (*g_301) = (*g_301);
                        (*g_385) = 0x83F7E285L;
                    }
                    (**l_421) = func_51((*g_301), g_58, (safe_rshift_func_int16_t_s_u(g_159[0], (6L > g_236[0]))), ((l_463 != (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_90 && ((*l_436) & (safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s(l_479, 0L)))))) <= l_463), l_464)), l_464)), l_463))) && g_455), l_463);
                }
            }
            else
            {
                char l_489 = 5L;
                for (g_77 = 0; (g_77 <= (-3)); --g_77)
                {
                    int l_482 = 0x51639882L;
                    (*g_301) = (*g_301);
                    if ((*p_50))
                    {
                        (**l_411) = (**g_300);
                        p_50 = (**l_421);

                        ;
                        (**l_411) = (*g_301);
                        (*g_301) = func_51((*g_301), l_482, (((void*)0 == l_421) > (*l_438)), g_77, (g_109 != 0L));
                    }
                    else
                    {
                        return (*l_436);
                    }

                    ;
                }
                (*g_301) = (**g_300);
                (*l_436) = (g_109 ^ ((*g_300) == (void*)0));
                (**l_421) = func_74(func_74(func_51((**l_411), g_455, (safe_add_func_uint16_t_u_u(((*l_413) == ((*l_413) && (((((255UL > (((***l_421) & 0x014387A0L) <= ((safe_mul_func_uint16_t_u_u(((*l_414) & (safe_rshift_func_uint16_t_u_s((*l_436), (*l_438)))), (***l_421))) >= 0x1C61L))) == g_18) || g_455) == (**g_301)) && (-1L)))), 0xD3B7L)), l_489, (*l_436)), l_438), p_50);
            }
        }
        else
        {
            char l_505 = 0xCEL;
            unsigned l_510[6][6][6] = {{{0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}}, {{0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}}, {{0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}}, {{0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}}, {{0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}}, {{0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}, {0x611BD117L, 4294967292UL, 0x43FCBE3AL, 4294967293UL, 0xD878331DL, 4294967288UL}}};
            int l_526 = (-1L);
            int i, j, k;
            for (l_441 = (-30); (l_441 <= 22); l_441 = safe_add_func_uint32_t_u_u(l_441, 1))
            {
                const int * const *l_493 = &g_394;
                const int * const **l_492 = &l_493;
                short l_521[5] = {0x6874L, 0xA1CFL, 0x6874L, 0xA1CFL, 0x6874L};
                int l_524 = 0x78597B9DL;
                unsigned l_529[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_529[i] = 0xBEF612F2L;
                (*l_413) = ((void*)0 == l_492);
            }
            (*g_225) = func_63(l_534, (1UL > ((g_236[0] >= 0xC7L) <= ((safe_mod_func_int32_t_s_s(0xE34FED9EL, ((*l_534) && 0x590EL))) && (1L & ((safe_add_func_int32_t_s_s((l_411 != &g_301), (***l_421))) == l_539))))), (*g_114), (*l_413), &l_526);
        }
    }
    else
    {
        short l_541 = 3L;
        int ***l_546 = &g_301;
        int *l_558 = &g_58;
        unsigned l_569 = 1UL;
        const int *l_572 = &g_58;
        for (g_77 = 0; (g_77 <= 2); g_77 += 1)
        {
            unsigned l_549 = 0x0D6ED008L;
            for (l_465 = 0; (l_465 <= 2); l_465 += 1)
            {
                int *l_540 = &g_90;
                int i;
                for (l_442 = 0; (l_442 <= 3); l_442 += 1)
                {
                    int i;
                    if (g_236[g_77])
                    {
                        int i, j, k;
                        l_437[l_465][l_442][g_77] = l_540;
                        (***l_411) = g_236[g_77];
                    }
                    else
                    {
                        int i, j;
                        (*g_114) = ((g_429[g_77][(l_442 + 2)] <= l_541) >= (safe_add_func_uint8_t_u_u((g_236[g_77] < (safe_rshift_func_uint8_t_u_s((g_455 & ((&g_301 == l_546) < (safe_mul_func_int16_t_s_s((0x60BEL || l_549), (*l_540))))), 5))), 0x41L)));
                        (*l_540) = (*p_50);
                        return (*l_540);
                    }
                    return (*l_540);
                }
                (**l_546) = (**g_300);
                if ((g_236[g_77] ^ (l_549 | 0x4716L)))
                {
                    for (l_442 = 0; (l_442 <= 2); l_442 += 1)
                    {
                        (*g_225) = (*l_534);
                        if ((*g_385))
                            break;
                    }
                }
                else
                {
                    (*g_385) = (safe_lshift_func_int16_t_s_u(3L, 13));
                }
                for (g_90 = 0; (g_90 <= 2); g_90 += 1)
                {
                    unsigned l_557[2][1][6] = {{{0x519CB422L, 0x870B0502L, 0x519CB422L, 0x870B0502L, 0x519CB422L, 0x870B0502L}}, {{0x519CB422L, 0x870B0502L, 0x519CB422L, 0x870B0502L, 0x519CB422L, 0x870B0502L}}};
                    int i, j, k;
                    for (l_442 = 0; (l_442 <= 2); l_442 += 1)
                    {
                        const char l_556 = 1L;
                        int i, j, k;
                        l_437[g_90][g_90][g_90] = func_51((*g_301), g_455, (65527UL ^ ((((*l_534) == (safe_sub_func_int8_t_s_s(l_549, g_455))) < (safe_sub_func_int32_t_s_s(((***l_411) | (l_556 < (((*g_114) && (*p_50)) == 0L))), (*p_50)))) ^ (*l_540))), (***l_546), g_429[3][6]);
                        if ((*p_50))
                            continue;
                        (*g_225) = 0x0284E7EFL;
                        (*g_225) = (***g_300);
                    }
                    for (l_408 = 2; (l_408 >= 0); l_408 -= 1)
                    {
                        int l_570 = (-1L);
                        const int **l_571[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_571[i] = &g_394;
                        (***g_300) = l_557[0][0][1];
                        l_572 = func_80(l_558, func_51(func_51((**g_300), (*l_558), g_217, (safe_lshift_func_uint16_t_u_u(g_159[8], 7)), ((+(safe_mod_func_int8_t_s_s(g_455, (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((g_58 > (safe_mul_func_uint16_t_u_u(((*p_50) > ((((0x207BL <= 65526UL) || 0x81ABL) ^ (*p_50)) || (*l_540))), (*l_534)))) > (*p_50)), (*g_385))), l_569))))) ^ (*l_540))), l_570, g_58, (*l_540), (*l_540)), (*l_558));
                    }
                    (*g_399) = ((*l_572) < ((((*l_540) && (safe_mod_func_uint16_t_u_u(7UL, (safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((&g_301 == g_579[6]), ((***l_411) || (g_58 == (l_557[0][0][1] >= (0x21ADL <= 0x1205L)))))) || (***l_546)), g_18))))) | l_557[0][0][1]) != g_429[3][6]));
                }
            }
            for (g_88 = 3; (g_88 >= 0); g_88 -= 1)
            {
                int l_590 = (-7L);
                int i, j;
                for (l_441 = 3; (l_441 >= 0); l_441 -= 1)
                {
                    int i, j;
                    (*g_385) = (((1L & (g_429[l_441][l_441] && 1L)) != (1L ^ g_429[g_88][(l_441 + 4)])) && g_236[g_77]);
                }
                if (g_429[g_88][g_77])
                {
                    int l_591 = (-1L);
                    int i;
                    (*l_534) = g_236[g_77];
                    if ((g_217 & (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_236[g_77], ((g_217 ^ ((*l_572) | g_236[g_77])) && (*l_558)))) <= ((*p_50) ^ (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(1L, 5)), (g_159[2] == l_549))))), g_236[g_77]))))
                    {
                        return g_236[g_77];
                    }
                    else
                    {
                        l_590 = (safe_lshift_func_uint8_t_u_s(g_236[g_77], 5));
                        l_591 = (**g_301);
                        return g_77;
                    }
                }
                else
                {
                    int * const *l_598 = &g_225;
                    for (g_90 = 6; (g_90 >= 0); g_90 -= 1)
                    {
                        int i, j, k;
                        l_590 = (safe_mod_func_uint8_t_u_u((g_579[(g_77 + 1)] == (void*)0), (safe_sub_func_uint16_t_u_u((((***l_546) > (((safe_rshift_func_uint16_t_u_u(((l_598 == (void*)0) > (safe_sub_func_uint16_t_u_u((l_549 ^ (((p_50 != (**l_411)) && (-8L)) | g_18)), 3L))), 3)) & 0xC22F00C5L) != g_236[0])) > 4UL), g_58))));
                        l_437[g_77][g_88][g_77] = (**g_300);
                    }
                }
                for (g_90 = 0; (g_90 <= 7); g_90 += 1)
                {
                    int i, j, k;
                    if (g_429[(g_77 + 1)][(g_88 + 2)])
                        break;
                }
                for (l_569 = 0; (l_569 <= 2); l_569 += 1)
                {
                    int i, j, k;
                    (***l_546) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((+((0xFCL & (l_437[l_569][g_88][g_77] == p_50)) | g_109)), ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((((void*)0 != p_50) != (***g_300)), (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((4294967295UL ^ (safe_unary_minus_func_int32_t_s(((safe_rshift_func_int16_t_s_s(0xDF42L, (*l_572))) <= g_77)))), g_236[2])), 3)), (*p_50))) != (***g_300)), 1)), 3)), l_590)), (*l_534))))) < 8UL), l_549)) & 0xFFF6L))) <= 0UL) ^ 0x70880618L), 2)), 0xFCL)) < (***l_546)), l_549));
                    if (l_549)
                        continue;
                }
            }
            if (l_549)
                continue;
            (**g_301) = (*l_572);
        }


    }


    return (*l_534);
}







static int * func_51(int * p_52, unsigned char p_53, short p_54, unsigned p_55, char p_56)
{
    int l_406 = 0x3C400E5AL;
    int *l_407 = &g_87;
    (*g_301) = p_52;
    return (*g_301);


}







static unsigned func_63(int * p_64, unsigned char p_65, int p_66, char p_67, int * p_68)
{
    unsigned l_402 = 0x16DD6A9FL;
    int * const l_403[3] = {&g_90, &g_90, &g_90};
    int *l_404 = &g_88;
    int i;
    (*g_301) = g_399;


    for (p_67 = (-2); (p_67 < 11); p_67++)
    {
        (**g_300) = (*g_301);
        (*g_225) = l_402;
    }
    (*g_225) = l_402;
    (*g_301) = func_74(l_403[1], func_74(l_403[2], l_404));
    return p_67;
}







static int * func_69(const int * const p_70, char p_71, int * p_72, int p_73)
{
    int **l_208 = &g_114;
    int *** const l_207 = &l_208;
    unsigned l_311 = 1UL;
    int *l_396 = &g_90;
    int *l_398 = &g_77;
    for (g_109 = 15; (g_109 > (-20)); g_109 = safe_sub_func_uint16_t_u_u(g_109, 8))
    {
        unsigned l_206 = 4294967295UL;
        int *l_210 = &g_88;
        for (g_90 = 5; (g_90 >= 0); g_90 -= 1)
        {
            int *l_218 = &g_58;
            int i;
        }
        return l_210;


    }
    if ((p_73 & g_109))
    {
        int *l_247 = &g_77;
        short l_251 = 3L;
        int ** const *l_339 = &l_208;
        int * const l_352 = &g_90;
        (*g_225) = ((safe_sub_func_int32_t_s_s(g_236[0], (***l_207))) || (*p_70));
        for (g_77 = (-18); (g_77 == (-8)); g_77++)
        {
            (**l_208) = 0x0867E8BEL;
            for (g_88 = 28; (g_88 > 12); g_88 = safe_sub_func_int16_t_s_s(g_88, 8))
            {
                const int **l_241 = (void*)0;
                const int *l_243 = &g_58;
                const int **l_242 = &l_243;
                (*l_242) = func_80((**l_207), &p_73, (0x8FL < g_217));


                return &g_77;


            }
            for (g_109 = 7; (g_109 >= 1); g_109 -= 1)
            {
                int *l_245 = &g_90;
                for (p_73 = 7; (p_73 >= 0); p_73 -= 1)
                {
                }
                l_245 = &p_73;

                ;
            }
        }
        if ((*g_225))
        {
            unsigned short l_246[9][5][5] = {{{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}, {{0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}, {0x042AL, 65535UL, 0x0A26L, 0x86E7L, 2UL}}};
            int ***l_250 = &l_208;
            unsigned short l_271 = 65532UL;
            int i, j, k;
            if ((0x5A429E24L >= l_246[4][1][0]))
            {
                (*l_208) = func_74(func_74((*l_208), &g_90), &g_87);

                ;
                (*l_208) = (**l_207);
            }
            else
            {
                const int l_256[8] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
                const int *l_258[3][1];
                const int **l_257 = &l_258[1][0];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_258[i][j] = &g_90;
                }
                (*l_257) = func_80(l_247, l_247, (safe_rshift_func_uint8_t_u_s(((l_250 == &l_208) >= ((l_251 && p_71) || ((*g_225) & (safe_rshift_func_int16_t_s_u((!p_73), ((safe_lshift_func_uint16_t_u_u(l_256[2], 1)) != l_256[2])))))), 6)));


                if ((safe_rshift_func_int16_t_s_u(((((0xCA91L < (**l_208)) <= (*l_247)) > (((!((safe_mod_func_uint16_t_u_u((8L ^ (safe_mul_func_int8_t_s_s(0xF2L, ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_159[0], (safe_add_func_uint16_t_u_u(g_87, 0x014AL)))), 6)) & l_271)))), (*l_247))) ^ 8L)) != g_90) | 0x57L)) > p_73), g_87)))
                {
                    unsigned short l_276[4][5] = {{65527UL, 65527UL, 0x795FL, 65527UL, 65527UL}, {65527UL, 65527UL, 0x795FL, 65527UL, 65527UL}, {65527UL, 65527UL, 0x795FL, 65527UL, 65527UL}, {65527UL, 65527UL, 0x795FL, 65527UL, 65527UL}};
                    int i, j;
                    (*g_225) = (*g_225);
                    (**l_208) = (safe_lshift_func_uint8_t_u_s(g_58, 7));
                    for (l_251 = 0; (l_251 > 1); l_251++)
                    {
                        (*l_257) = (*l_257);
                        (**l_208) = l_276[1][2];
                    }
                }
                else
                {
                    int *l_279 = &g_90;
                    (*l_208) = &p_73;

                    ;
                    if ((*g_114))
                    {
                        (*g_225) = (((p_73 ^ (p_71 == 0xDC7D750DL)) < p_71) != ((void*)0 == l_250));
                        return l_279;



                    }
                    else
                    {
                        short l_280 = 3L;
                        (*l_247) = l_280;
                        (*g_114) = 0x5E1EA13AL;
                    }
                    (**l_250) = &g_90;

                    ;
                }


                (***l_207) = ((safe_sub_func_uint8_t_u_u(1UL, (+(**l_208)))) || ((&l_258[2][0] != (*l_207)) >= g_77));
            }


            for (p_73 = 0; (p_73 != 29); p_73 = safe_add_func_int16_t_s_s(p_73, 4))
            {
                short l_298 = (-1L);
                int *l_299 = &g_58;
                int ***l_302 = &g_301;
            }
            (**l_250) = func_74(l_352, (*g_301));

            ;
        }
        else
        {
            int l_373 = 2L;
            int l_393 = 0x56C8BDA0L;
            (***l_207) = ((void*)0 != (*g_300));
            if ((*p_72))
            {
                int l_358 = 0x4B67363EL;
                int ***l_359 = &g_301;
                for (p_73 = 18; (p_73 < 16); p_73 = safe_sub_func_uint8_t_u_u(p_73, 2))
                {
                    unsigned l_374 = 0x455675CCL;
                    (*l_247) = (*p_70);
                }
                (*g_225) = (((safe_mul_func_int16_t_s_s((***l_207), (safe_mul_func_uint8_t_u_u(g_77, ((safe_mul_func_int8_t_s_s(g_217, l_373)) & (safe_unary_minus_func_int16_t_s(0x1EF7L))))))) != g_236[0]) == 1UL);
            }
            else
            {
                int *l_395 = (void*)0;
                for (l_251 = 0; (l_251 <= 2); l_251 += 1)
                {
                    int *l_386 = &g_88;
                    const int *l_390 = (void*)0;
                    const int **l_389 = &l_390;
                    int i;
                    if ((safe_lshift_func_int8_t_s_s(g_236[l_251], 6)))
                    {
                        return g_385;



                    }
                    else
                    {
                        const int *l_388[3][9][1] = {{{&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}}, {{&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}}, {{&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}, {&g_87}}};
                        const int **l_387 = &l_388[2][8][0];
                        int i, j, k;
                        (*g_301) = &p_73;

                        ;
                        (*l_387) = func_80(l_386, (*l_208), (g_236[l_251] || g_159[(l_251 + 4)]));
                    }

                    ;
                    (*l_389) = func_80((**g_300), (*g_301), p_73);

                    ;
                    for (p_73 = 0; (p_73 <= 2); p_73 += 1)
                    {
                        (**g_300) = &p_73;
                    }
                }


                (*g_225) = (((0x8C420147L > ((g_236[2] >= (65533UL ^ (safe_mod_func_int32_t_s_s((*g_385), l_393)))) != ((((p_73 >= p_71) ^ (*l_352)) && 4294967292UL) || (*l_352)))) || (*l_352)) ^ 0xADF2E0D3L);
                for (g_87 = 2; (g_87 >= 0); g_87 -= 1)
                {
                    int i;
                    l_393 = g_236[g_87];
                    for (p_73 = 0; (p_73 <= 8); p_73 += 1)
                    {
                        (**g_300) = (*g_301);
                        (**g_300) = &p_73;

                        ;
                    }
                    g_394 = func_80((**g_300), (**g_300), (!g_159[(g_87 + 1)]));


                    for (l_393 = 0; (l_393 <= 2); l_393 += 1)
                    {
                        return l_395;




                    }
                }


            }



        }



        (*l_352) = ((void*)0 == &g_301);
    }
    else
    {
        (**g_300) = func_74((**g_300), l_396);

        ;
    }



    g_397 = (g_217 ^ 0xA414L);
    return l_398;




}







static int * func_74(int * const p_75, int * p_76)
{
    short l_158 = 0xA346L;
    int l_175[9][4][2] = {{{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}, {{1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}, {1L, 0x32BA1A25L}}};
    const int *l_187[5][2][9] = {{{&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}, {&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}}, {{&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}, {&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}}, {{&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}, {&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}}, {{&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}, {&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}}, {{&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}, {&l_175[5][3][0], &g_87, &g_90, &g_77, &g_90, &g_87, &l_175[5][3][0], &l_175[7][3][0], (void*)0}}};
    const int ** const l_186 = &l_187[2][0][1];
    int i, j, k;
    for (g_77 = 11; (g_77 >= (-13)); g_77 = safe_sub_func_uint32_t_u_u(g_77, 6))
    {
        const int *l_153 = &g_90;
        const int **l_152 = &l_153;
        int l_163 = (-1L);
        (*l_152) = func_80(&g_77, &g_77, ((g_18 | 0xA21DEC74L) || 1L));

        ;
    }
    l_175[7][3][0] = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((~g_87), g_18)) | (+(((-1L) > ((g_18 | (0x2DL ^ (&l_187[2][0][1] == (void*)0))) < (0xAF0680C1L == g_109))) < g_87))), 10)), 0x20L));
    return &g_58;


}







static const int * func_80(int * p_81, int * p_82, int p_83)
{
    int l_86[10];
    int l_131[6];
    int i;
    for (i = 0; i < 10; i++)
        l_86[i] = 0xDDCDEDC2L;
    for (i = 0; i < 6; i++)
        l_131[i] = 0L;
    for (p_83 = 0; (p_83 != 6); p_83 = safe_add_func_uint32_t_u_u(p_83, 1))
    {
        short l_95 = 0x7586L;
        int l_96[2][4] = {{0x358D0DD0L, (-5L), 0x358D0DD0L, (-5L)}, {0x358D0DD0L, (-5L), 0x358D0DD0L, (-5L)}};
        int *l_120[5];
        const unsigned char l_130 = 249UL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_120[i] = &l_96[0][1];
    }
    return p_81;


}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_217, "g_217", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_236[i], "g_236[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_397, "g_397", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_429[i][j], "g_429[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_917[i], "g_917[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
