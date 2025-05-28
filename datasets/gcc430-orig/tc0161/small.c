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



static int g_12 = 0x035C5735L;
static int *g_38[2] = {&g_12, &g_12};
static int **g_37 = &g_38[0];
static volatile int g_39 = 0xD59FF446L;
static int g_40 = 0xFEC46BC2L;
static int g_41 = 1L;
static unsigned char g_81 = 249UL;
static volatile unsigned g_84 = 0xCA3631A0L;
static short g_102 = 0x982FL;
static unsigned short g_105 = 0x8EC4L;
static int *g_112 = &g_12;
static int *g_113 = &g_12;
static unsigned short g_129 = 9UL;
static char g_136 = 0xE8L;
static int g_157 = 0xCD540B5EL;
static short g_159 = 0x0395L;
static short g_161 = 0xF008L;
static char g_165 = (-3L);
static unsigned char *g_172 = &g_81;
static unsigned char **g_171 = &g_172;
static int ***g_195 = (void*)0;
static int ****g_194 = &g_195;
static volatile short g_247 = 0x4C38L;
static volatile short *g_246 = &g_247;
static volatile short **g_245 = &g_246;
static unsigned char g_313 = 0x69L;
static short g_339 = 1L;
static int g_344 = 1L;
static int g_346[1][8] = {{1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L}};
static int g_367[6][8][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}};
static int *g_366 = &g_367[0][1][0];
static unsigned g_397 = 0xB0F15120L;
static unsigned g_401 = 0xAABB8F62L;
static int *g_482 = &g_41;



static unsigned func_1(void);
static int * func_2(char p_3, int p_4, int * p_5);
static char func_6(unsigned p_7);
static unsigned func_8(int * p_9, unsigned short p_10);
static int * func_14(unsigned p_15);
static unsigned func_16(unsigned p_17, int * p_18);
static int * func_19(int p_20);
static unsigned char func_24(int * p_25, int * p_26, short p_27, unsigned p_28);
static int * func_29(unsigned p_30);
static int ** func_35(int ** p_36);
static unsigned func_1(void)
{
    int *l_11 = &g_12;
    unsigned l_13 = 4294967292UL;
    short *l_338[10][7][3] = {{{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339}}};
    short **l_337[10][3] = {{&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}, {&l_338[7][0][0], (void*)0, &l_338[7][0][0]}};
    short ***l_336 = &l_337[2][2];
    short ****l_340 = (void*)0;
    short ***l_342 = &l_337[8][2];
    short ****l_341 = &l_342;
    int *l_343 = &g_344;
    int *l_345[7];
    unsigned l_365 = 0xAEEDC8E8L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_345[i] = (void*)0;
    g_482 = func_2(func_6(((func_8(l_11, l_13) != (safe_sub_func_int32_t_s_s(g_313, (safe_mul_func_int16_t_s_s((-9L), ((~0UL) >= (g_346[0][4] = ((safe_sub_func_uint32_t_u_u((l_336 == ((*l_341) = &l_337[2][2])), ((*l_343) = g_313))) >= g_313)))))))) < g_313)), l_365, g_366);


    ;


    ;
    return g_157;
}







static int * func_2(char p_3, int p_4, int * p_5)
{
    unsigned char **l_368 = &g_172;
    int *l_371 = (void*)0;
    short l_452 = 1L;
    int **l_464 = &g_113;
    if ((l_368 != l_368))
    {
        short *l_373 = &g_161;
        short **l_372[7] = {&l_373, &l_373, &l_373, &l_373, &l_373, &l_373, &l_373};
        int l_382[8][9][3] = {{{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}, {{0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}, {0xDAA95AB5L, (-3L), 0x912448B6L}}};
        int l_392 = 0x73343AB0L;
        int l_420 = (-5L);
        int *l_434 = (void*)0;
        int i, j, k;
        for (g_129 = 0; (g_129 <= 1); g_129 += 1)
        {
            int l_380[4][2] = {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}};
            int i, j;
        }
    }
    else
    {
        unsigned l_454 = 4294967293UL;
        unsigned char l_455 = 0x94L;
        int *l_456 = (void*)0;
        short *l_463 = (void*)0;
        short **l_462 = &l_463;
        for (g_339 = 0; (g_339 <= 0); g_339 += 1)
        {
            unsigned short l_453 = 0x5D62L;
            int **l_465[6][1][7] = {{{&g_112, (void*)0, (void*)0, (void*)0, &g_112, &g_113, &l_456}}, {{&g_112, (void*)0, (void*)0, (void*)0, &g_112, &g_113, &l_456}}, {{&g_112, (void*)0, (void*)0, (void*)0, &g_112, &g_113, &l_456}}, {{&g_112, (void*)0, (void*)0, (void*)0, &g_112, &g_113, &l_456}}, {{&g_112, (void*)0, (void*)0, (void*)0, &g_112, &g_113, &l_456}}, {{&g_112, (void*)0, (void*)0, (void*)0, &g_112, &g_113, &l_456}}};
            int *l_477 = &g_367[0][1][0];
            int i, j, k;
        }
        (*g_366) = (((**g_37) = (*p_5)) < (*p_5));
    }
    (*p_5) = (-1L);
    (*l_464) = &p_4;

    ;
    return (*g_37);



}







static char func_6(unsigned p_7)
{
    int **l_351 = &g_38[0];
    short l_352[10] = {0xB594L, (-1L), 0xABBFL, 0xABBFL, (-1L), 0xB594L, (-1L), 0xABBFL, 0xABBFL, (-1L)};
    int l_353 = 0x37DC95B4L;
    int *l_356 = &g_346[0][1];
    unsigned short l_360 = 0xA8C0L;
    int i;
    for (g_157 = 20; (g_157 != 10); g_157--)
    {
        int **l_349 = &g_38[0];
        int ***l_350[9][2] = {{&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}, {&g_37, &g_37}};
        int **l_357 = &l_356;
        int *l_359 = &g_157;
        int **l_358 = &l_359;
        int i, j;
        l_351 = l_349;
        (*l_349) = (*g_37);
        l_353 = (p_7 != (+((func_16(((g_102 && (**l_351)) < ((*g_172) = p_7)), (*l_349)) ^ l_352[9]) && (((((((**l_349) || ((**l_351) = p_7)) == p_7) ^ p_7) > 0UL) | 65528UL) && 65535UL))));
        (**l_349) = (safe_mul_func_uint8_t_u_u((((*l_358) = ((*l_357) = l_356)) != &g_346[0][5]), p_7));

        ;
    }
    if ((func_16((6L && l_360), (*l_351)) ^ l_353))
    {
        char l_363 = (-1L);
        int *l_364 = &g_41;
        (**g_37) = (safe_mod_func_int32_t_s_s((p_7 == ((6UL | (func_16((((**l_351) = p_7) && ((*l_351) == (*g_37))), (*l_351)) > 0UL)) ^ (p_7 > p_7))), l_363));
        (*l_351) = l_364;


    }
    else
    {
        return (**l_351);
    }


    (*g_37) = (*l_351);
    return (**l_351);
}







static unsigned func_8(int * p_9, unsigned short p_10)
{
    int l_21 = 1L;
    int **l_329[7][1];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_329[i][j] = &g_113;
    }
    g_38[0] = func_14(func_16(((g_112 = func_19(l_21)) == (void*)0), p_9));


    ;
    ;

    return g_12;
}







static int * func_14(unsigned p_15)
{
    unsigned char l_264 = 0x50L;
    int l_277 = (-1L);
    unsigned l_326[3];
    int *l_327 = (void*)0;
    int *l_328 = &g_157;
    int i;
    for (i = 0; i < 3; i++)
        l_326[i] = 0x1153ED2FL;
    for (g_81 = 0; (g_81 >= 35); ++g_81)
    {
        int *l_251 = &g_41;
        int **l_252 = &g_113;
        (*l_252) = (l_251 = func_29(p_15));

        ;
        ;
        for (g_40 = 0; (g_40 <= 1); g_40 += 1)
        {
            for (g_161 = 0; (g_161 <= 1); g_161 += 1)
            {
                int l_256 = 0xBD95F1D4L;
                int i;
                g_38[g_40] = g_38[g_40];
                for (g_129 = 0; (g_129 >= 19); g_129 = safe_add_func_int16_t_s_s(g_129, 9))
                {
                    int **l_255 = &g_38[0];
                    l_256 = ((void*)0 == l_255);
                }
            }
        }
        for (g_159 = 0; (g_159 >= (-8)); --g_159)
        {
            char l_259[9][7][3] = {{{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}, {{0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}, {0L, 0x67L, 0x86L}}};
            int i, j, k;
            (*l_252) = func_29(l_259[1][6][1]);
            if (l_259[0][2][0])
                continue;
        }
        if (((*g_172) != (safe_mod_func_uint16_t_u_u((0xD057D9B5L && p_15), (safe_add_func_uint8_t_u_u(l_264, p_15))))))
        {
            (**g_37) = p_15;
        }
        else
        {
            int *l_265 = &g_12;
            return l_265;


        }
    }

    ;
    for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
    {
        int l_279 = (-10L);
        unsigned char ***l_281 = &g_171;
        char *l_310 = &g_136;
    }
    (*g_37) = (*g_37);
    return (*g_37);


}







static unsigned func_16(unsigned p_17, int * p_18)
{
    int l_236 = 0x5741575FL;
    int l_237[3][7][1] = {{{0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}}, {{0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}}, {{0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}, {0xA450838BL}}};
    char *l_238 = &g_165;
    char *l_239 = (void*)0;
    char *l_240 = (void*)0;
    int l_241 = 7L;
    int *l_244[6] = {&l_237[2][6][0], &l_237[2][6][0], &g_40, &l_237[2][6][0], &l_237[2][6][0], &g_40};
    volatile short ***l_248[7][2][3] = {{{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}, {{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}, {{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}, {{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}, {{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}, {{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}, {{&g_245, (void*)0, &g_245}, {&g_245, (void*)0, &g_245}}};
    int i, j, k;
    (*g_112) = (l_236 & l_237[2][6][0]);
    (*p_18) = (g_157 & (((254UL == (l_241 = ((*l_238) = (l_237[2][6][0] == ((*g_172) = l_237[1][3][0]))))) != 1UL) <= (safe_add_func_uint16_t_u_u(p_17, 0x3C38L))));
    l_244[4] = &l_237[2][3][0];
    g_245 = g_245;
    return g_39;
}







static int * func_19(int p_20)
{
    int **l_121 = (void*)0;
    int *l_122 = (void*)0;
    unsigned short l_123 = 0xA499L;
    unsigned short *l_127 = (void*)0;
    unsigned short *l_128 = &g_129;
    int ***l_131 = &l_121;
    int ****l_130 = &l_131;
    short l_191 = (-1L);
    int l_201 = 0x1C270E04L;
    (*g_112) = (safe_sub_func_uint8_t_u_u(func_24((l_122 = func_29(p_20)), g_112, g_39, l_123), (safe_unary_minus_func_int8_t_s((g_105 == ((((((0x1B91L || ((*l_128) = 0xE363L)) && p_20) != 0xD18442E1L) >= 0xF53D4211L) ^ g_105) != 0x1993L))))));


    ;
    (**g_37) = (((*l_130) = &l_121) != &g_37);
    for (g_102 = 0; (g_102 <= 1); g_102 += 1)
    {
        unsigned char l_132 = 255UL;
        int *l_139 = &g_40;
        int ****l_151 = &l_131;
        int l_163 = 0x4FD87F62L;
        unsigned short *l_188 = &l_123;
        short l_190 = 1L;
        for (l_123 = 0; (l_123 <= 1); l_123 += 1)
        {
            char *l_135 = &g_136;
            int i;
            (*g_113) = l_132;
        }
        if ((*l_139))
            continue;
        for (l_132 = (-8); (l_132 >= 54); l_132 = safe_add_func_uint16_t_u_u(l_132, 6))
        {
            char l_162 = 0x3EL;
            unsigned char *l_169 = &l_132;
            unsigned char **l_168 = &l_169;
            int l_182 = 0xEDDC4DC9L;
            int **l_187 = (void*)0;
            for (g_40 = (-16); (g_40 < 9); g_40++)
            {
                int ***l_148 = (void*)0;
                int *l_198 = (void*)0;
                int *l_199 = (void*)0;
                int *l_200[8][10] = {{&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}, {&l_163, &l_163, &g_41, &l_163, (void*)0, &l_182, (void*)0, &l_163, &g_41, &l_163}};
                int i, j;
                for (g_105 = 0; (g_105 == 17); g_105 = safe_add_func_int8_t_s_s(g_105, 6))
                {
                    char *l_156 = &g_136;
                    short *l_158 = &g_159;
                    short *l_160[3][9][2] = {{{&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}}, {{&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}}, {{&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}, {&g_161, &g_161}}};
                    char *l_164 = &g_165;
                    int *l_166 = (void*)0;
                    int *l_167 = &g_41;
                    int *l_189 = (void*)0;
                    int i, j, k;
                    if (((safe_mod_func_uint16_t_u_u(((void*)0 == l_148), (((*l_167) = (((-2L) > (~((*l_164) = (((((*g_113) = (safe_sub_func_uint8_t_u_u((((void*)0 == l_151) == ((0xDF7CL < (safe_mul_func_uint8_t_u_u(0xB3L, (safe_mul_func_int8_t_s_s(((*l_156) = p_20), ((l_162 = ((*l_158) = ((g_157 = (~p_20)) || 65527UL))) >= g_12)))))) || 1L)), g_84))) ^ (*l_139)) < 0xA315590EL) ^ l_163)))) == p_20)) & 3L))) < 0x042FL))
                    {
                        unsigned char ***l_170 = &l_168;
                        int l_173 = 0x7607B9B3L;
                        g_171 = ((*l_170) = l_168);

                        ;
                        (*g_112) = ((l_173 && (0xE4CE34C1L > ((safe_lshift_func_uint16_t_u_s(0xFEE0L, 0)) < (safe_add_func_int8_t_s_s(((*g_112) <= ((((!(safe_sub_func_uint16_t_u_u(((*l_128) = (safe_lshift_func_uint8_t_u_s((l_182 = ((*g_172) = 1UL)), 3))), (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 == l_187), ((*l_156) = ((0xB0DFL & (l_188 == &g_105)) && (-5L))))), g_102))))) || g_165) >= p_20) ^ 0x38B7L)), 0x45L))))) >= (**g_171));
                        l_189 = (void*)0;
                    }
                    else
                    {
                        return l_167;



                    }

                    ;
                    l_190 = ((0x3092L < (((*g_112) = (**g_37)) != 9L)) || (g_41 && ((*l_128) = p_20)));
                    (*g_112) = (l_191 > (safe_mul_func_uint8_t_u_u(((*g_172) = (0xCCL | (l_151 == g_194))), ((*l_164) = g_136))));
                }
                l_201 = (safe_mod_func_int32_t_s_s(0x6E33F1E1L, ((*g_113) = p_20)));
            }


            l_122 = (void*)0;

            ;
            for (l_201 = 1; (l_201 >= 0); l_201 -= 1)
            {
                int *l_202 = &l_182;
                unsigned char l_231 = 0x6BL;
                unsigned char **l_234 = &g_172;
                int *l_235 = &l_163;
                int i;
            }
        }
    }


    (*g_113) = func_24((*g_37), &l_201, g_157, p_20);
    return (*g_37);


}







static unsigned char func_24(int * p_25, int * p_26, short p_27, unsigned p_28)
{
    (**g_37) = ((g_81 || ((-2L) < ((4294967295UL <= (*p_26)) != (safe_rshift_func_int16_t_s_u(p_27, 2))))) == g_41);
    return g_105;
}







static int * func_29(unsigned p_30)
{
    int l_64[10][8] = {{0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}, {0L, 0x66DF464CL, 9L, (-6L), 6L, 0x5A0A0DE8L, 0x5A0A0DE8L, 6L}};
    int *l_78 = &g_12;
    short l_85 = 0x87E8L;
    char l_86[6][9][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
    int *l_91 = &g_40;
    int ***l_119 = (void*)0;
    int i, j, k;
    for (p_30 = 4; (p_30 == 57); p_30++)
    {
        int *l_79 = &g_41;
        for (g_12 = 0; (g_12 > (-24)); g_12 = safe_sub_func_int16_t_s_s(g_12, 5))
        {
            int ***l_57 = &g_37;
            (*l_57) = func_35(g_37);
            for (g_40 = (-7); (g_40 >= 11); g_40 = safe_add_func_int16_t_s_s(g_40, 5))
            {
                (*g_37) = (*g_37);
            }
        }
        for (g_12 = 0; (g_12 <= 1); g_12 += 1)
        {
            int i;
            g_38[g_12] = g_38[g_12];
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            {
                unsigned short l_60[7] = {0xF93AL, 0xF93AL, 0xBBE9L, 0xF93AL, 0xF93AL, 0xBBE9L, 0xF93AL};
                int *l_71 = &g_41;
                int l_73 = 0L;
                unsigned char *l_80 = &g_81;
                int *l_87 = &l_73;
                int i;
            }
        }
        (**g_37) = ((*l_79) = ((*l_78) & p_30));
        (*g_37) = (*g_37);
    }
    for (l_85 = 0; (l_85 > 24); l_85 = safe_add_func_uint8_t_u_u(l_85, 2))
    {
        int *l_90 = (void*)0;
        return l_90;


    }
    (*g_37) = l_91;
    for (g_41 = 1; (g_41 <= 7); g_41 += 1)
    {
        unsigned char *l_93 = &g_81;
        unsigned char **l_92 = &l_93;
        int l_108 = 0x7DCA9E6BL;
        int *l_114[8] = {&g_41, &g_41, (void*)0, &g_41, &g_41, (void*)0, &g_41, &g_41};
        int i;
        (**g_37) = 0x5864DC94L;
        for (p_30 = 0; (p_30 <= 1); p_30 += 1)
        {
            unsigned char ***l_94 = &l_92;
            int l_106[6][7][2] = {{{0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}}, {{0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}}, {{0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}}, {{0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}}, {{0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}}, {{0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}, {0x326F70CDL, 0x326F70CDL}}};
            unsigned short *l_107[3];
            int ***l_116 = &g_37;
            int **l_118 = &l_91;
            int ***l_117 = &l_118;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_107[i] = &g_105;
            (*l_94) = l_92;
        }
        for (g_40 = 2; (g_40 <= 7); g_40 += 1)
        {
            unsigned l_120 = 0x8C8CD5B4L;
            for (p_30 = 0; (p_30 <= 1); p_30 += 1)
            {
                int i, j;
                if (l_64[(g_41 + 1)][g_40])
                    break;
                if (p_30)
                    break;
            }
            (*g_37) = l_78;
            (*l_78) = p_30;
            l_120 = ((*l_78) = ((void*)0 != l_119));
        }
    }
    return l_91;


}







static int ** func_35(int ** p_36)
{
    unsigned char l_49 = 3UL;
    int *l_54 = &g_41;
    int l_55[7][5] = {{(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}, {(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}, {(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}, {(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}, {(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}, {(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}, {(-10L), 0xFCE06DFEL, (-10L), 0xFCE06DFEL, (-10L)}};
    int i, j;
    for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
    {
        int l_56 = 9L;
        int i;
        for (g_41 = 1; (g_41 >= 0); g_41 -= 1)
        {
            unsigned l_46 = 0UL;
            l_56 = (l_55[0][0] = ((safe_add_func_int8_t_s_s((((safe_add_func_int8_t_s_s(l_46, ((l_49 > (5L && ((safe_mul_func_uint16_t_u_u(0UL, (246UL >= (l_49 == (((-1L) > ((*p_36) == l_54)) && 0L))))) && g_12))) != 0x27L))) & 3L) || l_46), 0UL)) & g_41));
            for (l_46 = 0; (l_46 <= 1); l_46 += 1)
            {
                int i;
                g_38[l_46] = (*g_37);
            }
        }
        (*l_54) = 0x53245E34L;
    }
    return p_36;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_346[i][j], "g_346[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_367[i][j][k], "g_367[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
