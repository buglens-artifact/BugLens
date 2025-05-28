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



static unsigned g_19 = 0xC97412DFL;
static unsigned g_32 = 0x4C5530C4L;
static int g_65[4] = {0xA3F0BDE8L,0xA3F0BDE8L,0xA3F0BDE8L,0xA3F0BDE8L};
static int *g_64 = &g_65[3];
static int g_77 = 0x8F9E1C21L;
static unsigned short g_80 = 0x3A39L;
static int g_105 = 9L;
static unsigned char g_120 = 0UL;
static int g_146[7] = {(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L)};
static int **g_153 = (void*)0;
static unsigned g_159 = 9UL;
static int *g_166 = &g_146[5];
static short g_180 = (-10L);
static short *g_179 = &g_180;
static char g_194 = 1L;
static unsigned *g_198 = &g_32;
static const short * const **g_221 = (void*)0;
static const short g_226 = 6L;
static unsigned short *g_228[1][8][3] = {{{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80}}};
static unsigned short **g_227 = &g_228[0][3][1];
static char g_254 = 0x51L;
static unsigned short g_301 = 0x007EL;
static short g_303 = 0x81A5L;
static unsigned **g_371 = &g_198;
static int g_393[8][3] = {{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L},{0x1F0A9A96L,0x1F0A9A96L,0x1F0A9A96L}};
static unsigned *** const g_401 = &g_371;
static unsigned *** const *g_400 = &g_401;
static unsigned ***g_477 = &g_371;
static int *g_521 = &g_105;
static unsigned g_618 = 0xA5560431L;
static const int g_655 = (-5L);
static char *g_674 = (void*)0;
static char **g_673 = &g_674;
static char ***g_672[8] = {&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673,&g_673};
static int *** const g_709 = (void*)0;
static unsigned char g_715[8][2] = {{255UL,255UL},{4UL,255UL},{255UL,255UL},{4UL,255UL},{255UL,255UL},{4UL,255UL},{255UL,255UL},{4UL,255UL}};
static unsigned ****g_821 = &g_477;
static unsigned ***g_861 = &g_371;
static unsigned **** const g_860[1] = {&g_861};
static unsigned **** const *g_859 = &g_860[0];
static unsigned * const *g_865 = &g_198;
static unsigned * const **g_864[7] = {&g_865,&g_865,&g_865,&g_865,&g_865,&g_865,&g_865};
static unsigned * const *** const g_863 = &g_864[5];
static unsigned * const *** const *g_862 = &g_863;
static const unsigned char *g_889 = &g_715[5][1];
static const unsigned char ** const g_888 = &g_889;
static unsigned short ***g_901 = &g_227;
static unsigned short ****g_900 = &g_901;
static unsigned char *g_917[9] = {&g_715[6][1],&g_715[6][1],&g_715[6][1],&g_715[6][1],&g_715[6][1],&g_715[6][1],&g_715[6][1],&g_715[6][1],&g_715[6][1]};
static unsigned char **g_916 = &g_917[7];
static unsigned g_1008 = 0xA407DE9AL;
static unsigned ******g_1014 = (void*)0;
static unsigned short g_1058 = 0x99D4L;
static unsigned ****g_1072 = &g_861;
static unsigned *g_1078 = (void*)0;
static unsigned ** const g_1077[8] = {&g_1078,&g_1078,&g_1078,&g_1078,&g_1078,&g_1078,&g_1078,&g_1078};
static unsigned ** const *g_1076 = &g_1077[1];
static unsigned ** const **g_1075 = &g_1076;
static unsigned g_1083 = 4294967295UL;



static const int func_1(void);
static char func_4(unsigned char p_5, unsigned short p_6, char p_7);
static char func_10(char p_11, unsigned char p_12, int p_13);
static char func_14(unsigned p_15, unsigned p_16, unsigned short p_17, unsigned p_18);
static unsigned short func_29(unsigned char p_30);
static short func_45(unsigned short * p_46, int p_47);
static unsigned short * func_48(short p_49, unsigned short p_50, unsigned short * p_51, unsigned p_52, int p_53);
static char func_54(int p_55, unsigned short p_56);
static unsigned func_59(unsigned char p_60, unsigned short * p_61);
static unsigned char func_62(char p_63);
static const int func_1(void)
{
    unsigned short l_20 = 0x7D8CL;
    unsigned short *l_23 = (void*)0;
    unsigned short *l_24 = (void*)0;
    int l_25 = 0x46B8D963L;
    unsigned *l_31 = &g_32;
    int l_33 = 0x40E13F5EL;
    int l_813[1];
    int l_814 = 7L;
    unsigned l_1057 = 4294967286UL;
    int l_1059 = 0x10AD1BF8L;
    short *l_1060 = &g_303;
    unsigned ****l_1067 = &g_861;
    unsigned *****l_1068 = &g_821;
    unsigned *****l_1069 = &l_1067;
    unsigned ****l_1071 = &g_477;
    unsigned *****l_1070[6] = {&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071};
    unsigned ** const **l_1073 = (void*)0;
    unsigned ** const ***l_1074[9] = {&l_1073,&l_1073,&l_1073,&l_1073,&l_1073,&l_1073,&l_1073,&l_1073,&l_1073};
    int l_1086 = 0L;
    unsigned char l_1095 = 2UL;
    unsigned short *l_1100[1][10][10] = {{{&g_301,&l_20,&g_1058,&g_80,(void*)0,&g_80,&l_20,&g_301,&l_20,(void*)0},{&g_301,&g_80,&g_80,&l_20,(void*)0,(void*)0,&l_20,&g_80,&g_301,&g_301},{&g_80,&g_1058,&g_301,&l_20,&l_20,&g_1058,&g_80,(void*)0,&g_301,(void*)0},{&l_20,(void*)0,(void*)0,&g_80,(void*)0,(void*)0,&l_20,&g_1058,&g_301,&l_20},{&g_301,&g_301,&g_301,&g_1058,&g_301,&g_80,&g_80,&l_20,&l_20,&g_1058},{&g_80,&g_301,&l_20,&l_20,&l_20,(void*)0,&l_20,&l_20,(void*)0,&g_301},{&g_1058,(void*)0,&g_1058,&l_20,(void*)0,&l_20,&g_80,&g_80,&l_20,(void*)0},{(void*)0,&g_1058,&g_1058,(void*)0,&g_301,&g_1058,(void*)0,(void*)0,&g_80,(void*)0},{&g_301,&l_20,&g_80,(void*)0,&g_301,(void*)0,&g_1058,(void*)0,&g_80,&g_80},{&l_20,&g_1058,&l_20,(void*)0,(void*)0,&g_80,&g_301,&g_80,&l_20,&g_301}}};
    int l_1101 = 0L;
    short l_1102[5] = {0xD70EL,0xD70EL,0xD70EL,0xD70EL,0xD70EL};
    int *l_1103 = &g_77;
    int *l_1104 = &l_813[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_813[i] = 0x90F062F3L;
    if ((safe_mod_func_uint8_t_u_u((0L ^ func_4((safe_lshift_func_uint8_t_u_s((func_10(func_14(g_19, l_20, (safe_div_func_int8_t_s_s((((l_25 = l_20) != (safe_div_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(func_29((((0xA11600D5L >= (((l_33 = ((*l_31) = 0x5D1CB6A7L)) < 1UL) || (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_19, (safe_add_func_uint32_t_u_u((g_32 >= l_20), l_33)))), 0x10L)))) < 1L) && 0UL)))) >= 0x43423001L), g_655))) || l_813[0]), l_20)), l_814), g_655, l_814) | l_813[0]), 3)), l_813[0], l_813[0])), l_20)))
    {
        const short l_1053 = 0xEA6DL;
        return l_1053;
    }
    else
    {
        int l_1054 = (-1L);
        for (g_194 = 5; (g_194 >= 2); g_194 -= 1)
        {
            int i;
            g_146[g_194] = (l_1054 && l_25);
        }
    }
    (*g_521) = ((safe_mod_func_int16_t_s_s(l_33, (l_1057 | l_814))) != (l_1057 || g_1058));
    (*g_166) = ((~l_1059) == (((((*l_1060) = g_19) ^ ((safe_div_func_uint32_t_u_u((**g_865), 1UL)) == (((0L | (l_1059 <= (l_25 = (g_1083 = ((((g_1072 = ((*l_1069) = ((*l_1068) = l_1067))) != (g_1075 = l_1073)) && (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_20, l_20)) >= l_813[0]), l_25))) || 65535UL))))) & l_813[0]) == l_813[0]))) || l_25) & 0xDAL));
    (*l_1104) = ((*l_1103) = (safe_add_func_int32_t_s_s(func_4(((l_1086 == (((safe_rshift_func_uint16_t_u_s(func_4((safe_rshift_func_int8_t_s_s((5L || l_25), func_14(func_10((safe_rshift_func_int8_t_s_u(((((l_20 != (safe_sub_func_uint16_t_u_u(l_813[0], ((~0xAAL) > func_54(l_1095, (l_1101 = (l_1095 > (safe_mod_func_uint32_t_u_u((+(l_33 = (!l_33))), 0x9E3DD91CL))))))))) || l_1101) <= l_813[0]) <= l_1102[3]), 4)), l_1102[3], l_20), l_1102[3], l_813[0], l_1059))), l_1102[3], l_25), 12)) & 4294967294UL) != 0x48L)) >= 0x8DL), l_1059, l_20), 0x0951F9C9L)));
    return (*g_166);
}







static char func_4(unsigned char p_5, unsigned short p_6, char p_7)
{
    int *l_1050 = &g_146[4];
    int **l_1051 = &g_521;
    unsigned l_1052 = 1UL;
    g_166 = ((*l_1051) = l_1050);
    (*l_1051) = (*l_1051);
    return l_1052;
}







static char func_10(char p_11, unsigned char p_12, int p_13)
{
    int * const l_824 = (void*)0;
    int l_844 = (-1L);
    unsigned short l_847 = 0xF575L;
    const int *l_882 = (void*)0;
    const unsigned char **l_895 = &g_889;
    unsigned ***l_936[10][1] = {{(void*)0},{&g_371},{(void*)0},{&g_371},{(void*)0},{&g_371},{(void*)0},{&g_371},{(void*)0},{&g_371}};
    char **l_988 = (void*)0;
    int l_991[6] = {0x0235C07BL,0x0235C07BL,0x9EA712E8L,0x0235C07BL,0x0235C07BL,0x9EA712E8L};
    const unsigned l_996[7] = {0x5B10002CL,0x5B10002CL,0x5B10002CL,0x5B10002CL,0x5B10002CL,0x5B10002CL,0x5B10002CL};
    unsigned *****l_1016[8][6][5] = {{{&g_821,&g_821,(void*)0,&g_821,&g_821},{(void*)0,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,&g_821,(void*)0,&g_821},{(void*)0,&g_821,&g_821,&g_821,&g_821},{&g_821,(void*)0,(void*)0,(void*)0,&g_821},{&g_821,&g_821,&g_821,&g_821,(void*)0}},{{&g_821,(void*)0,&g_821,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,(void*)0},{&g_821,&g_821,(void*)0,&g_821,&g_821},{(void*)0,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,&g_821,(void*)0,&g_821},{(void*)0,&g_821,&g_821,&g_821,&g_821}},{{&g_821,(void*)0,(void*)0,(void*)0,&g_821},{&g_821,&g_821,&g_821,&g_821,(void*)0},{&g_821,(void*)0,&g_821,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,(void*)0},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,(void*)0,&g_821}},{{(void*)0,&g_821,&g_821,&g_821,(void*)0},{&g_821,(void*)0,(void*)0,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,(void*)0,&g_821},{(void*)0,&g_821,&g_821,&g_821,(void*)0},{&g_821,(void*)0,(void*)0,&g_821,&g_821}},{{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,(void*)0,&g_821},{(void*)0,&g_821,&g_821,&g_821,(void*)0},{&g_821,(void*)0,(void*)0,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,(void*)0,&g_821}},{{(void*)0,&g_821,&g_821,&g_821,(void*)0},{&g_821,(void*)0,(void*)0,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,(void*)0,&g_821},{(void*)0,&g_821,&g_821,&g_821,(void*)0},{&g_821,&g_821,(void*)0,&g_821,&g_821}},{{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,&g_821,(void*)0},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,(void*)0},{&g_821,&g_821,&g_821,&g_821,&g_821},{(void*)0,&g_821,&g_821,&g_821,&g_821}},{{&g_821,&g_821,&g_821,&g_821,&g_821},{(void*)0,&g_821,(void*)0,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,(void*)0,&g_821,(void*)0},{&g_821,&g_821,&g_821,&g_821,&g_821},{&g_821,&g_821,&g_821,&g_821,(void*)0}}};
    unsigned ******l_1015 = &l_1016[7][0][3];
    int *l_1029[7][3] = {{&l_844,(void*)0,(void*)0},{&l_844,(void*)0,(void*)0},{&l_844,(void*)0,(void*)0},{&l_844,(void*)0,(void*)0},{&l_844,(void*)0,(void*)0},{&l_844,(void*)0,(void*)0},{&l_844,(void*)0,(void*)0}};
    int i, j, k;
    for (p_12 = 0; (p_12 <= 36); p_12 = safe_add_func_uint16_t_u_u(p_12, 6))
    {
        int *l_825 = &g_65[1];
        unsigned char * const l_831 = (void*)0;
        unsigned char * const *l_830[2][3] = {{(void*)0,(void*)0,(void*)0},{&l_831,&l_831,&l_831}};
        const short l_845 = 0x73C8L;
        char l_846 = 0L;
        unsigned short l_850 = 0UL;
        unsigned char *l_891 = &g_715[5][1];
        unsigned char **l_890 = &l_891;
        int l_904 = 0xD334225CL;
        unsigned short *l_941 = &g_80;
        int i, j;
        l_825 = l_824;
        for (g_80 = (-11); (g_80 == 55); g_80++)
        {
            const unsigned char * const l_833 = (void*)0;
            const unsigned char * const * const l_832 = &l_833;
            int l_842[6] = {0x50696E67L,(-1L),(-1L),0x50696E67L,(-1L),(-1L)};
            int *l_843 = &g_65[3];
            short ***l_852 = (void*)0;
            short ****l_851[7][9][4] = {{{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852}},{{&l_852,&l_852,&l_852,&l_852},{&l_852,(void*)0,&l_852,&l_852},{&l_852,(void*)0,&l_852,&l_852},{&l_852,(void*)0,&l_852,&l_852},{(void*)0,(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{(void*)0,&l_852,(void*)0,&l_852},{&l_852,&l_852,&l_852,&l_852}},{{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,(void*)0,&l_852},{(void*)0,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852}},{{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852}},{{&l_852,(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852}},{{&l_852,(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,(void*)0},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852}},{{&l_852,&l_852,&l_852,(void*)0},{&l_852,&l_852,&l_852,(void*)0},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{(void*)0,&l_852,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,(void*)0,&l_852,&l_852},{&l_852,&l_852,&l_852,&l_852},{&l_852,&l_852,(void*)0,(void*)0}}};
            unsigned * const **l_868 = (void*)0;
            unsigned * const *** const l_867 = &l_868;
            unsigned * const *** const *l_866 = &l_867;
            int i, j, k;
            (*l_843) = ((((0xF700L <= 65526UL) || (g_80 && (l_830[1][0] != l_832))) > func_54(((p_13 != p_13) >= 0xECL), p_11)) & l_847);
            for (p_11 = 0; (p_11 <= 1); p_11 += 1)
            {
                unsigned ** const **l_853 = (void*)0;
                for (g_180 = 0; (g_180 <= 3); g_180 += 1)
                {
                    int i;
                    g_65[(p_11 + 2)] = g_65[g_180];
                    for (g_301 = 2; (g_301 <= 6); g_301 += 1)
                    {
                        unsigned ** const ***l_854 = &l_853;
                        unsigned ***l_858 = &g_371;
                        unsigned **** const l_857 = &l_858;
                        unsigned **** const *l_856 = &l_857;
                        unsigned **** const **l_855[9][4] = {{(void*)0,&l_856,&l_856,(void*)0},{&l_856,(void*)0,(void*)0,(void*)0},{&l_856,&l_856,&l_856,&l_856},{&l_856,&l_856,(void*)0,&l_856},{&l_856,&l_856,&l_856,(void*)0},{(void*)0,&l_856,&l_856,&l_856},{&l_856,&l_856,&l_856,&l_856},{&l_856,&l_856,&l_856,(void*)0},{&l_856,&l_856,&l_856,&l_856}};
                        unsigned char l_873 = 0x3FL;
                        int i, j;
                        g_65[g_180] = ((g_194 > (l_851[2][3][0] != (void*)0)) & (((*l_854) = l_853) != (void*)0));
                        if ((*l_843))
                            break;
                        g_65[(p_11 + 1)] = (((((g_859 = &g_821) == (l_866 = g_862)) >= (*l_843)) && g_65[g_180]) | ((safe_lshift_func_uint8_t_u_s(p_12, ((-2L) < (l_873 < p_12)))) != g_65[(p_11 + 2)]));
                    }
                }
            }
            for (g_32 = 0; (g_32 <= 2); g_32 += 1)
            {
                unsigned l_874 = 0xE313590EL;
                for (g_618 = 0; (g_618 <= 2); g_618 += 1)
                {
                    unsigned char ***l_892 = &l_890;
                    int i, j;
                    if ((g_393[(g_618 + 5)][g_32] = 0L))
                    {
                        int i, j;
                        p_13 = ((*l_843) = 0xE99B496EL);
                        l_874 = 0x3E900FF2L;
                        g_105 = ((*l_843) = ((safe_add_func_int16_t_s_s((0xEB7AL | (l_825 != (void*)0)), (0x10L | (g_393[(g_32 + 5)][g_618] || g_393[(g_32 + 1)][g_32])))) > (safe_mod_func_int8_t_s_s((g_393[(g_32 + 1)][g_32] ^ (+((***g_401) || 0xB711CB1EL))), g_393[(g_32 + 5)][g_618]))));
                    }
                    else
                    {
                        unsigned *l_881 = &g_159;
                        const int *l_884 = (void*)0;
                        const int **l_883 = &l_884;
                        (*l_843) = (safe_add_func_int8_t_s_s(g_393[(g_618 + 5)][g_32], ((void*)0 == l_881)));
                        (*l_883) = (l_882 = &l_842[3]);
                        return (*l_843);
                    }
                    if ((6L != (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_s((g_888 == ((*l_892) = l_890)), 4))))))
                    {
                        unsigned short ****l_902 = &g_901;
                        (*l_843) = ((p_13 = (-1L)) >= (safe_mod_func_uint8_t_u_u(((void*)0 != l_895), (safe_sub_func_uint8_t_u_u((0x83L | ((**l_890) = p_12)), (safe_sub_func_int8_t_s_s((-1L), ((g_900 = g_900) == l_902))))))));
                        (*l_843) = (safe_unary_minus_func_uint16_t_u(2UL));
                    }
                    else
                    {
                        return p_13;
                    }
                    (*l_843) = (l_904 = (l_850 < p_12));
                    for (p_13 = 0; (p_13 >= (-22)); p_13 = safe_sub_func_uint16_t_u_u(p_13, 1))
                    {
                        int **l_907 = &l_825;
                        (*l_907) = &p_13;
                    }
                }
            }
        }
    }
    for (g_32 = 0; (g_32 > 24); g_32 = safe_add_func_uint8_t_u_u(g_32, 4))
    {
        const int *l_972 = &g_146[0];
        int l_973 = 6L;
        int *l_976 = &g_146[6];
        int *l_998 = (void*)0;
        unsigned short l_1027 = 0UL;
        l_972 = (void*)0;
        if ((l_973 != ((p_12 ^ (**g_916)) & (((safe_sub_func_int32_t_s_s((p_13 = ((*l_976) = p_12)), l_973)) <= (l_976 == (****g_862))) && 0x7F7DD581L))))
        {
            const int **l_978 = &l_882;
            const int ***l_977 = &l_978;
            (*l_977) = &l_972;
        }
        else
        {
            return p_11;
        }
        for (g_618 = 1; (g_618 <= 7); g_618 += 1)
        {
            unsigned l_986 = 0x6E00CE53L;
            unsigned short *l_987 = &g_80;
            int *l_1032 = &g_393[0][2];
            int l_1045 = (-1L);
            if ((safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((((*l_987) = ((safe_add_func_int16_t_s_s(l_986, p_12)) > ((p_13 != 0xE321L) || p_12))) | (l_988 != (void*)0)) > ((0x07L < (safe_mod_func_int16_t_s_s(0L, 1UL))) >= p_11)))) >= l_991[4]), p_13)) || (-1L)), (*l_976))))
            {
                unsigned short l_992 = 0UL;
                int **l_993[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                if (l_992)
                    break;
                l_972 = &p_13;
                l_882 = &l_844;
                l_844 = (*l_882);
            }
            else
            {
                unsigned char l_994 = 0x7BL;
                int l_1007 = 0xFE421971L;
                if ((l_994 = p_11))
                {
                    int **l_995 = &g_166;
                    (*l_995) = &p_13;
                    for (g_120 = 0; (g_120 <= 0); g_120 += 1)
                    {
                        if (p_13)
                            break;
                    }
                    if (p_12)
                        break;
                    for (l_973 = 0; (l_973 <= 0); l_973 += 1)
                    {
                        if (l_996[3])
                            break;
                    }
                }
                else
                {
                    int *l_997 = &g_105;
                    unsigned short *l_1006[5] = {&g_301,&g_301,&g_301,&g_301,&g_301};
                    int i;
                    l_882 = l_997;
                    l_882 = &p_13;
                    for (p_13 = 0; (p_13 <= 3); p_13 += 1)
                    {
                        int **l_999 = &g_521;
                        (*l_999) = l_998;
                        (*l_999) = (void*)0;
                        (*l_999) = &p_13;
                    }
                    p_13 = ((safe_mod_func_int8_t_s_s(func_54(p_13, p_12), func_14(func_14((((**g_916) = ((!(l_1007 = ((+(safe_rshift_func_uint16_t_u_u(p_13, (safe_mod_func_uint16_t_u_u(((void*)0 == &g_180), l_986))))) >= p_13))) && (0xE6L != (*l_997)))) > l_994), p_11, (*l_997), l_994), p_12, p_13, g_194))) <= 0x06F1L);
                }
                g_1008 = p_11;
            }
            for (g_120 = 0; (g_120 <= 7); g_120 += 1)
            {
                int l_1009 = (-7L);
                return l_1009;
            }
            for (p_12 = 0; (p_12 <= 0); p_12 += 1)
            {
                unsigned *******l_1017 = (void*)0;
                unsigned *******l_1018 = &g_1014;
                unsigned **** const **l_1020 = &g_859;
                unsigned **** const ***l_1019 = &l_1020;
                int *l_1028[7][2];
                short *l_1043 = &g_180;
                unsigned short l_1044 = 1UL;
                unsigned l_1046[9][10] = {{0xA42F400EL,0x2D8933E2L,0x73AC2CF3L,0xF3F590A3L,0x64B43F06L,0UL,0xB1B2DBB3L,4294967293UL,4294967287UL,0xF3F590A3L},{0xF3F590A3L,0xDBAB11B5L,0UL,0x2D8933E2L,0x78891B47L,0x168BD265L,2UL,0UL,0UL,2UL},{0x78891B47L,0xB1B2DBB3L,0x168BD265L,0x168BD265L,0xB1B2DBB3L,0x78891B47L,4294967295UL,0x7C9A6310L,0UL,7UL},{4294967289UL,4294967293UL,0x0BBF6BB4L,0x3CCB1128L,0x7C9A6310L,4294967295UL,0xF3F590A3L,4294967293UL,0xAF8A0241L,0x64B43F06L},{4294967289UL,0x168BD265L,0xB56AD109L,0xA42F400EL,0UL,0x78891B47L,0x64B43F06L,0UL,4294967295UL,0UL},{0x78891B47L,0x64B43F06L,0UL,4294967295UL,0UL,0x168BD265L,0xDBAB11B5L,2UL,0xDBAB11B5L,0x168BD265L},{0xF3F590A3L,0x3CCB1128L,1UL,0x3CCB1128L,0xF3F590A3L,0UL,4294967289UL,0x64B43F06L,0UL,0xB5D64E95L},{0xA42F400EL,0x78891B47L,0x90632D01L,4294967290UL,0x168BD265L,0x90632D01L,0x64B43F06L,4294967295UL,0UL,0UL},{0xDBAB11B5L,0x2D8933E2L,0UL,0x90632D01L,0xA42F400EL,0UL,4294967295UL,0xB1B2DBB3L,0UL,0x5F0D5B61L}};
                int **l_1047[1];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1028[i][j] = &l_973;
                }
                for (i = 0; i < 1; i++)
                    l_1047[i] = (void*)0;
                if (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_11, (((*l_1018) = (l_1015 = g_1014)) == ((*l_1019) = (void*)0)))), ((safe_rshift_func_int8_t_s_s(0xE6L, (safe_rshift_func_int16_t_s_u(g_715[5][1], p_13)))) & (-1L)))) && (safe_div_func_uint8_t_u_u(p_12, l_1027))))
                {
                    for (l_986 = 0; (l_986 <= 0); l_986 += 1)
                    {
                        l_1028[3][0] = (void*)0;
                        if (p_13)
                            break;
                        l_1029[5][2] = &p_13;
                    }
                    return p_13;
                }
                else
                {
                    int **l_1030 = (void*)0;
                    int **l_1031[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1031[i] = &g_64;
                    p_13 = p_13;
                    l_1032 = &l_844;
                    for (g_1008 = 1; (g_1008 <= 7); g_1008 += 1)
                    {
                        (*l_976) = 0xEBB7B91CL;
                    }
                }
                (*l_1032) = ((p_12 >= func_14((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s((((((((*l_1043) = ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(p_13, ((p_12 && p_13) && (p_11 > ((!(0x48L || 0x22L)) < p_11))))) >= p_12), 0x77L)) && p_12)) || p_11) && l_1044) & p_11) && l_1045) ^ l_1046[0][3]), p_13)))) || p_11), 9)), p_13, (*l_1032), g_715[0][1])) | (*g_889));
                l_976 = &l_844;
                p_13 = p_13;
            }
        }
    }
    g_393[1][2] = p_12;
    for (p_12 = 29; (p_12 <= 19); p_12--)
    {
        p_13 = (-1L);
        if (p_12)
            continue;
    }
    return p_13;
}







static char func_14(unsigned p_15, unsigned p_16, unsigned short p_17, unsigned p_18)
{
    int *l_815[1][4];
    int **l_816 = &l_815[0][1];
    unsigned ****l_817 = &g_477;
    unsigned *****l_818 = &l_817;
    unsigned ****l_820 = &g_477;
    unsigned *****l_819[2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_815[i][j] = &g_393[0][0];
    }
    for (i = 0; i < 2; i++)
        l_819[i] = &l_820;
    (*l_816) = l_815[0][3];
    (**l_816) = ((((*l_818) = l_817) == (g_821 = &g_477)) | p_16);
    (*l_816) = (*l_816);
    return p_18;
}







static unsigned short func_29(unsigned char p_30)
{
    const unsigned char l_40 = 0x01L;
    unsigned short *l_79 = &g_80;
    unsigned char *l_807 = &g_715[5][1];
    short l_808 = 0xE1E1L;
    l_808 = (p_30 | ((l_40 > ((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((*l_807) = ((l_40 > l_40) | ((func_45(func_48(((*g_179) = (func_54((safe_div_func_uint32_t_u_u(func_59((func_62(p_30) < l_40), l_79), p_30)), p_30) < g_194)), l_40, l_79, g_194, l_40), l_40) ^ 0x8788L) > p_30))) | l_40), l_40)), g_19)) & 2L)) & 0UL));
    if (l_40)
    {
        int *l_809 = &g_105;
        int *l_810 = &g_65[0];
        int *l_811 = &g_77;
        int **l_812 = &l_810;
        (*l_811) = ((*l_810) = ((*l_809) = (g_146[2] = 0x519A92A7L)));
        (*l_812) = l_811;
    }
    else
    {
        return p_30;
    }
    return l_40;
}







static short func_45(unsigned short * p_46, int p_47)
{
    unsigned ***l_596 = (void*)0;
    unsigned ****l_597[2];
    int l_598[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
    int l_637 = (-3L);
    const unsigned char l_644 = 0x71L;
    char l_676 = 0x54L;
    int ***l_710 = &g_153;
    int *l_719 = &l_637;
    int l_764 = 0L;
    unsigned short l_787 = 0xDE36L;
    unsigned short l_806 = 0xD238L;
    int i;
    for (i = 0; i < 2; i++)
        l_597[i] = &l_596;
    for (g_77 = 0; g_77 < 4; g_77 += 1)
    {
        g_65[g_77] = 0x866F5487L;
    }
    (*g_521) = (((g_477 = l_596) != (*g_400)) && l_598[3]);
    if (l_598[3])
    {
        short *l_599 = &g_180;
        int l_614 = 0xB54E23AEL;
        unsigned char *l_615 = &g_120;
        unsigned short l_619 = 0x5451L;
        unsigned ***l_645 = (void*)0;
        unsigned short l_649 = 0x98CAL;
        int *l_650 = (void*)0;
        short **l_688 = &g_179;
        short ***l_687 = &l_688;
        int * const *l_722 = &l_650;
        int * const **l_721 = &l_722;
        (*g_521) = ((p_46 != l_599) >= g_146[0]);
        (*g_521) = (safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((&g_401 != (void*)0), 1)), (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_47, ((*l_615) = (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((~0L))), (l_614 = ((1L != (0L ^ 0x7BL)) < 251UL))))))), 6UL)), 0x2FL))))));
        if ((safe_lshift_func_int16_t_s_u((~p_47), (func_54(func_54(p_47, l_614), (g_618 != l_619)) < (safe_div_func_uint8_t_u_u(255UL, p_47))))))
        {
            short l_626 = (-1L);
            int *l_629 = &l_614;
            for (g_303 = 0; (g_303 > (-20)); --g_303)
            {
                return l_598[5];
            }
            for (g_120 = 0; (g_120 >= 57); g_120 = safe_add_func_int32_t_s_s(g_120, 6))
            {
                (*g_521) = p_47;
                for (g_32 = 0; (g_32 <= 3); g_32 += 1)
                {
                    int i;
                    l_598[(g_32 + 2)] = 2L;
                    if (g_65[g_32])
                        break;
                }
                l_598[3] = l_626;
            }
            l_598[3] = 0xB26133E6L;
            for (g_618 = 14; (g_618 >= 11); g_618 = safe_sub_func_int16_t_s_s(g_618, 6))
            {
                unsigned short l_631 = 0x0BDAL;
                unsigned short *l_646 = &g_80;
                int *l_658 = &l_637;
                for (g_120 = 0; (g_120 <= 1); g_120 += 1)
                {
                    int **l_630 = &l_629;
                    (*l_630) = l_629;
                }
                if ((+(safe_add_func_int16_t_s_s(0xC481L, (l_644 >= ((((*l_646) = ((*g_400) == (l_645 = l_645))) & l_631) & (*g_198)))))))
                {
                    l_650 = &l_614;
                }
                else
                {
                    for (l_626 = 1; (l_626 >= 0); l_626 -= 1)
                    {
                        (*g_521) = func_59((safe_div_func_uint16_t_u_u(p_47, func_59(g_254, &g_80))), &l_619);
                        return p_47;
                    }
                }
                if (p_47)
                {
                    const int *l_654 = &g_655;
                    const int **l_653 = &l_654;
                    const int *l_657 = &g_65[3];
                    const int **l_656 = &l_657;
                    (*l_656) = ((*l_653) = &g_105);
                    if ((**l_653))
                        continue;
                    return p_47;
                }
                else
                {
                    int l_661 = 0x6CB85DFBL;
                    int l_663 = 0xCC2A7603L;
                    char ***l_675 = &g_673;
                    l_658 = l_629;
                    for (l_614 = 0; (l_614 != (-1)); l_614--)
                    {
                        const int l_662 = 0x9068C3CCL;
                        l_663 = (l_661 != (l_662 | 0x8580L));
                        if (p_47)
                            continue;
                    }
                    (*g_521) = ((safe_mul_func_uint16_t_u_u((g_254 > 0x82L), (p_47 <= (*l_629)))) && (safe_lshift_func_uint16_t_u_u(((***g_401) <= ((*l_629) = (p_47 | ((safe_add_func_int8_t_s_s((((safe_div_func_int8_t_s_s(0xCBL, 0x1DL)) ^ (!(*l_629))) || l_661), g_105)) && (*l_658))))), l_676)));
                }
                return p_47;
            }
        }
        else
        {
            const short l_717 = 0x0AC4L;
            int *l_720 = &g_77;
            unsigned short *l_793[2][3] = {{&g_301,&g_301,&g_301},{&g_301,&g_301,&g_301}};
            int i, j;
            for (g_105 = 0; (g_105 > 24); ++g_105)
            {
                char l_681[3][2];
                int *l_682 = &l_598[3];
                const unsigned char l_718 = 0x74L;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_681[i][j] = 2L;
                }
                if ((*g_521))
                {
                    int *l_679 = &g_65[3];
                    int **l_680 = &g_521;
                    (*l_679) = p_47;
                    (*l_680) = (void*)0;
                    l_681[0][0] = l_676;
                    (*l_680) = l_682;
                }
                else
                {
                    short ****l_689 = (void*)0;
                    short ****l_690 = &l_687;
                    int l_695[2];
                    unsigned short *l_716 = &g_80;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_695[i] = (-6L);
                    l_637 = ((*l_682) = (l_695[0] = (((safe_mod_func_int8_t_s_s((p_47 | (****g_400)), g_303)) == func_54((g_303 <= (((*l_690) = l_687) == g_221)), p_47)) != (safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(p_47, 2L)) || 0x7CL), 0x860160B3L)))));
                    for (l_649 = 23; (l_649 > 25); l_649 = safe_add_func_uint32_t_u_u(l_649, 7))
                    {
                        int **l_698[8] = {(void*)0,(void*)0,&l_650,(void*)0,(void*)0,&l_650,(void*)0,(void*)0};
                        int i;
                        l_650 = &l_695[0];
                    }
                    if (l_695[0])
                        break;
                    l_695[0] = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((p_47 ^ (safe_rshift_func_uint16_t_u_u(((*l_716) = ((p_47 && l_695[0]) && ((safe_sub_func_int32_t_s_s((g_709 != l_710), (((4294967289UL <= ((*l_682) <= (((safe_div_func_uint32_t_u_u(p_47, (safe_lshift_func_uint16_t_u_s(p_47, p_47)))) <= 0x4297L) >= p_47))) > g_715[5][1]) < p_47))) || 0x3E7AL))), l_717))) ^ l_718), p_47)), p_47)) == p_47), 8));
                }
                l_719 = l_682;
                l_720 = (l_682 = &l_614);
            }
            if ((&g_153 != l_721))
            {
                unsigned char l_727[8][5] = {{6UL,0xCEL,6UL,255UL,0xCEL},{0x48L,0UL,0x93L,0x48L,0x93L},{255UL,255UL,0x48L,0xCEL,255UL},{0xD4L,249UL,0x93L,0x93L,249UL},{255UL,0x1DL,6UL,255UL,255UL},{1UL,249UL,9UL,249UL,1UL},{6UL,255UL,0x1DL,255UL,255UL},{1UL,0UL,0UL,1UL,0x93L}};
                unsigned *l_736 = &g_618;
                int l_750 = 1L;
                int i, j;
                for (g_303 = 0; (g_303 == 21); ++g_303)
                {
                    for (l_676 = 0; (l_676 == (-2)); l_676 = safe_sub_func_int8_t_s_s(l_676, 4))
                    {
                        int *l_728 = &g_393[1][2];
                        l_727[7][4] = p_47;
                        (*l_719) = ((*l_720) = 0L);
                        l_719 = l_728;
                        return p_47;
                    }
                    for (l_676 = 0; (l_676 > 19); l_676 = safe_add_func_uint8_t_u_u(l_676, 3))
                    {
                        unsigned short l_731 = 7UL;
                        if (l_731)
                            break;
                        (*l_719) = l_727[7][4];
                    }
                    for (g_254 = (-4); (g_254 < 22); g_254 = safe_add_func_int32_t_s_s(g_254, 4))
                    {
                        (*l_720) = p_47;
                    }
                }
                if (p_47)
                {
                    short l_739 = 0xB93EL;
                    int *l_748 = &g_65[3];
                    unsigned l_749 = 1UL;
                    if ((safe_mod_func_uint8_t_u_u(((void*)0 != l_736), ((*l_615) = (((((l_739 ^ (0x60L && 250UL)) & (p_47 != (func_54((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(251UL, (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_47, 0xA68335B3L)), p_47)))), (*l_720))), (*l_720)) >= p_47))) < 0xFF21F11FL) & p_47) | 0L)))))
                    {
                        unsigned short *l_757 = &l_649;
                        l_720 = l_748;
                        l_750 = l_749;
                        (*g_521) = ((safe_sub_func_int8_t_s_s(p_47, (safe_sub_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s(func_54(p_47, (p_47 >= ((void*)0 == l_615))), p_47)) != (*g_521)) && ((*l_757) = ((((*l_615) = 255UL) != (*l_748)) >= l_750))) ^ p_47), 248UL)))) > g_301);
                    }
                    else
                    {
                        int **l_758[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_758[i] = (void*)0;
                        g_166 = (g_64 = l_720);
                    }
                    g_521 = (void*)0;
                }
                else
                {
                    const unsigned l_759 = 0x013B05A4L;
                    int l_765 = (-1L);
                    (*l_720) = (l_759 > (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((l_759 | g_254) <= p_47), p_47)) == l_765), p_47)));
                    for (g_303 = (-29); (g_303 == (-1)); g_303 = safe_add_func_uint8_t_u_u(g_303, 2))
                    {
                        unsigned char **l_769 = &l_615;
                        unsigned char ***l_768 = &l_769;
                        int **l_770 = &g_166;
                        l_650 = &l_750;
                        (*l_768) = &l_615;
                        (*l_770) = &l_765;
                    }
                    for (g_159 = (-5); (g_159 < 40); g_159 = safe_add_func_uint8_t_u_u(g_159, 3))
                    {
                        unsigned l_779 = 0x7C3418F8L;
                        char *l_780[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_780[i] = &g_194;
                        (*l_720) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((*l_615) = l_779), (*l_719))), ((*l_599) = ((**g_401) == (void*)0)))), 1));
                        (*g_521) = ((l_765 = (l_736 != (*g_371))) ^ p_47);
                        (*l_720) = 6L;
                        return l_779;
                    }
                    for (g_254 = 20; (g_254 == (-3)); --g_254)
                    {
                        if (l_765)
                            break;
                        (*l_720) = p_47;
                        if ((*g_521))
                            break;
                    }
                }
            }
            else
            {
                unsigned short l_788[1][6] = {{0x3EF6L,0x3EF6L,0x3EF6L,0x3EF6L,0x3EF6L,0x3EF6L}};
                int i, j;
                (*l_720) = (~0xF19E80E6L);
                for (l_614 = 0; (l_614 > (-12)); --l_614)
                {
                    int *l_792 = &g_65[3];
                    unsigned *l_794 = (void*)0;
                    unsigned *l_795[9][7] = {{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,&g_159,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159},{&g_159,&g_159,&g_159,&g_159,(void*)0,&g_159,&g_159}};
                    unsigned short l_796 = 0UL;
                    char *l_799 = &g_254;
                    int i, j;
                    for (g_120 = 0; (g_120 == 29); ++g_120)
                    {
                        l_788[0][0] = l_787;
                    }
                    for (l_637 = 0; (l_637 <= 0); l_637 += 1)
                    {
                        int i, j;
                        return l_788[l_637][(l_637 + 5)];
                    }
                    for (l_764 = 0; (l_764 < 26); l_764 = safe_add_func_uint8_t_u_u(l_764, 8))
                    {
                        int **l_791 = &l_719;
                        (*l_791) = (void*)0;
                        (*l_791) = l_792;
                        if ((*l_720))
                            break;
                        if (p_47)
                            break;
                    }
                    (*l_792) = (func_59(p_47, &g_301) || p_47);
                }
            }
        }
    }
    else
    {
        for (g_159 = (-6); (g_159 <= 36); g_159 = safe_add_func_int16_t_s_s(g_159, 3))
        {
            unsigned char l_804[7][3] = {{1UL,1UL,0x59L},{0x54L,0x54L,250UL},{1UL,1UL,0x59L},{0x54L,0x54L,250UL},{1UL,1UL,0x59L},{0x54L,0x54L,250UL},{1UL,1UL,0x59L}};
            int i, j;
            for (g_618 = (-29); (g_618 >= 3); g_618 = safe_add_func_uint8_t_u_u(g_618, 8))
            {
                int *l_805 = &g_105;
                (*g_521) = (p_47 >= l_804[3][1]);
                l_805 = (void*)0;
            }
            return l_806;
        }
    }
    return p_47;
}







static unsigned short * func_48(short p_49, unsigned short p_50, unsigned short * p_51, unsigned p_52, int p_53)
{
    unsigned l_289 = 0x4F3EA3D8L;
    const int *l_290 = &g_77;
    int l_304 = 0x1687608FL;
    unsigned short *l_365[3][1];
    unsigned * const *l_437[5][2] = {{&g_198,&g_198},{&g_198,&g_198},{&g_198,&g_198},{&g_198,&g_198},{&g_198,&g_198}};
    char *l_444 = &g_254;
    unsigned l_532 = 0x160D6F5DL;
    unsigned char l_586[4][10][6] = {{{1UL,0x32L,1UL,0x24L,0x8DL,251UL},{0x04L,1UL,250UL,7UL,0xF9L,255UL},{0x0EL,6UL,255UL,3UL,0xBFL,6UL},{0x76L,0x5CL,1UL,0UL,0UL,1UL},{0x4CL,0x4CL,0x04L,0x32L,251UL,0x11L},{0xDFL,8UL,9UL,0xA8L,255UL,0x04L},{0x84L,0xDFL,9UL,250UL,0x4CL,0x11L},{0x24L,250UL,0x04L,0xF9L,9UL,1UL},{0xF9L,9UL,1UL,0x11L,250UL,0x4CL},{1UL,255UL,0UL,6UL,0x32L,252UL}},{{0x32L,0x03L,6UL,1UL,6UL,0x03L},{0x0EL,6UL,255UL,253UL,0UL,0x17L},{250UL,0x77L,1UL,7UL,249UL,250UL},{252UL,0x77L,0UL,9UL,0UL,0x32L},{1UL,6UL,0UL,255UL,6UL,1UL},{0xA8L,0x03L,0x8DL,0x77L,0x32L,6UL},{0x5CL,255UL,253UL,0x76L,250UL,9UL},{6UL,9UL,0x24L,0x24L,9UL,6UL},{3UL,250UL,255UL,1UL,0x4CL,0x0EL},{6UL,0x32L,0x77L,0x8DL,0x03L,0xA8L}},{{6UL,251UL,0x8DL,0x24L,1UL,0x32L},{0xDFL,0x76L,0x17L,0UL,252UL,0UL},{0xF9L,250UL,0x5CL,0UL,0xA8L,0x0EL},{250UL,0x4CL,0xDFL,255UL,0UL,1UL},{1UL,255UL,0UL,255UL,1UL,0x17L},{0x24L,249UL,0x76L,0x11L,255UL,8UL},{0x77L,1UL,7UL,249UL,250UL,8UL},{0x84L,0x5CL,0x76L,0UL,251UL,0x17L},{250UL,252UL,0UL,0x0EL,0x5CL,1UL},{253UL,0x24L,0xDFL,0xF9L,0x77L,0x0EL}},{{0x0EL,0x04L,0x5CL,1UL,0UL,0UL},{0x5CL,0x17L,0x17L,0x5CL,0x4CL,0x32L},{0UL,0x84L,0x8DL,7UL,0x24L,0xA8L},{0x17L,0x20L,0x77L,1UL,0x24L,250UL},{0x32L,0x84L,8UL,253UL,0x4CL,0xF9L},{0x04L,0xF9L,9UL,1UL,0x11L,250UL},{0x20L,0UL,3UL,251UL,0x24L,0x4CL},{0x03L,0x17L,1UL,255UL,0UL,255UL},{0xDFL,1UL,0xDFL,0x5CL,0x03L,249UL},{3UL,0UL,1UL,0x03L,251UL,1UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_365[i][j] = &g_301;
    }
    if ((func_59(p_49, (*g_227)) == l_289))
    {
        const int **l_291[2];
        int l_321 = 0L;
        short l_332 = 0x4686L;
        unsigned short **l_336 = &g_228[0][3][1];
        char l_354[5];
        unsigned **l_369 = &g_198;
        int *l_395 = &g_65[1];
        int i;
        for (i = 0; i < 2; i++)
            l_291[i] = &l_290;
        for (i = 0; i < 5; i++)
            l_354[i] = (-6L);
        l_290 = l_290;
        for (g_80 = 11; (g_80 != 23); g_80 = safe_add_func_uint16_t_u_u(g_80, 7))
        {
            const unsigned char l_299[5] = {1UL,1UL,1UL,1UL,1UL};
            int *l_305 = &g_146[0];
            unsigned **l_358[8][6] = {{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198},{&g_198,&g_198,&g_198,&g_198,&g_198,&g_198}};
            unsigned ***l_357 = &l_358[1][4];
            int i, j;
            l_290 = &p_53;
            for (g_180 = 6; (g_180 >= 0); g_180 -= 1)
            {
                int **l_353 = &g_166;
                const short *l_362[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_362[i] = &g_303;
            }
            for (g_105 = (-15); (g_105 != (-25)); g_105 = safe_sub_func_int32_t_s_s(g_105, 5))
            {
                l_305 = &p_53;
                return l_365[2][0];
            }
        }
        for (l_332 = (-28); (l_332 >= 4); l_332 = safe_add_func_uint8_t_u_u(l_332, 8))
        {
            unsigned short *l_368 = &g_80;
            int l_392 = 0xF64ABFFEL;
            for (g_105 = 1; (g_105 >= 0); g_105 -= 1)
            {
                for (p_49 = 6; (p_49 >= 1); p_49 -= 1)
                {
                    unsigned ***l_370[3];
                    int *l_372 = &g_65[3];
                    char *l_379 = &l_354[2];
                    char *l_380 = (void*)0;
                    char *l_381 = &g_194;
                    int *l_394 = &g_146[0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_370[i] = &l_369;
                    for (p_50 = 0; (p_50 <= 4); p_50 += 1)
                    {
                        return l_368;
                    }
                    (*l_372) = (g_146[g_105] = l_354[(g_105 + 3)]);
                    for (g_80 = 0; (g_80 <= 3); g_80 += 1)
                    {
                        return (*g_227);
                    }
                    (*l_394) = (safe_sub_func_uint16_t_u_u(((**g_227) = (*p_51)), ((safe_add_func_int32_t_s_s((((*l_381) = ((safe_add_func_int32_t_s_s((p_53 = ((*l_372) = p_50)), p_49)) == (((*l_379) = g_254) || g_194))) & (((((*g_179) = (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((p_50 == (l_392 > g_254)) || (g_393[1][2] == 0x8BA8L)), 7)) > (**g_371)) | 0xA7F48A36L), p_50)) <= (*g_179)), p_52)), 246UL)), p_52))) ^ 0xE378L) && g_254) <= (**g_371))), l_392)) != p_50)));
                }
                return (*g_227);
            }
            l_290 = &p_53;
            g_64 = l_395;
            (*g_64) = (*g_64);
        }
    }
    else
    {
        unsigned l_405 = 6UL;
        int l_418 = 1L;
        int *l_436 = &g_77;
        for (g_80 = 0; (g_80 <= 56); g_80 = safe_add_func_uint8_t_u_u(g_80, 4))
        {
            char l_407 = 0x89L;
            int l_435 = 0xC25200B4L;
            for (g_194 = (-2); (g_194 >= 25); g_194++)
            {
                unsigned *** const **l_402 = &g_400;
                if ((((*l_402) = g_400) == (void*)0))
                {
                    if (p_52)
                        break;
                }
                else
                {
                    int **l_419 = &g_64;
                    unsigned char *l_431 = &g_120;
                    int *l_432 = (void*)0;
                    int *l_433 = (void*)0;
                    int *l_434[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_434[i] = &g_65[3];
                    for (g_77 = 6; (g_77 >= 0); g_77 -= 1)
                    {
                        char *l_406[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_406[i] = &g_254;
                        g_146[g_77] = (((l_407 = (p_49 >= ((safe_lshift_func_uint16_t_u_s(l_405, 9)) < (*p_51)))) && p_53) != (safe_div_func_uint8_t_u_u(g_159, p_52)));
                        if (p_50)
                            continue;
                        g_146[g_77] = (((safe_mod_func_int8_t_s_s(((((p_50 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((-6L), (l_405 >= l_407))), 7))) < (*p_51)) | g_194) && (((*g_179) = 7L) <= ((!((l_405 | (((***g_401) = (safe_rshift_func_uint8_t_u_s(g_146[g_77], 5))) > l_405)) && g_146[g_77])) && l_407))), g_146[0])) == l_418) < p_53);
                    }
                    (*l_419) = &l_304;
                    l_435 = (((safe_div_func_uint16_t_u_u((g_146[6] != (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_62(((safe_unary_minus_func_uint8_t_u(p_53)) != ((((*g_179) = p_49) & (safe_rshift_func_uint8_t_u_u(3UL, 1))) < g_146[0]))), l_407)), (g_65[3] & ((*l_431) = (safe_lshift_func_int8_t_s_u((~(l_418 != p_52)), 1))))))), g_303)) <= g_303) < l_407);
                }
            }
            l_436 = &p_53;
            (*l_436) = (l_435 = ((*g_401) != l_437[0][1]));
        }
    }
    if (p_50)
    {
        int l_445 = 0x7642CCEFL;
        int *l_448 = (void*)0;
        short *l_455 = &g_303;
        char l_456 = 0xAFL;
        unsigned ***l_468 = &g_371;
        p_53 = 0xC0206790L;
        p_53 = (0UL && (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((*p_51), func_54((((((safe_add_func_uint8_t_u_u((l_304 = (g_19 | p_49)), 0x5DL)) < 0xFEL) || l_445) && (-1L)) >= 4UL), (*p_51)))), (**g_227))));
        g_65[0] = (safe_add_func_uint8_t_u_u((*l_290), (0xF6L > p_52)));
        if ((safe_lshift_func_uint8_t_u_u((l_304 = (safe_sub_func_uint32_t_u_u((2L <= (~((*g_179) = ((**g_227) == (*p_51))))), ((safe_div_func_int16_t_s_s(((*l_455) = p_53), (p_52 || (*g_198)))) ^ p_52)))), ((l_456 || (***g_401)) > p_50))))
        {
            l_448 = &p_53;
        }
        else
        {
            int * const l_465 = &g_393[2][2];
            unsigned ***l_467 = &g_371;
            unsigned short *l_473[7];
            int i;
            for (i = 0; i < 7; i++)
                l_473[i] = (void*)0;
            if (((safe_rshift_func_int8_t_s_s(p_50, ((safe_sub_func_uint16_t_u_u((*p_51), ((p_52 && ((p_52 == ((void*)0 != &g_401)) == 0x7B16BBABL)) && (g_159 > (((void*)0 == &l_290) ^ 0xA935BD54L))))) != (****g_400)))) & (*p_51)))
            {
                char **l_463[4] = {&l_444,&l_444,&l_444,&l_444};
                char ***l_464 = &l_463[2];
                int **l_466 = &l_448;
                int i;
                (*l_464) = l_463[0];
                p_53 = p_52;
                (*l_466) = l_465;
            }
            else
            {
                if ((l_467 == (l_468 = l_467)))
                {
                    for (p_52 = 0; (p_52 != 33); p_52++)
                    {
                        int * const l_471 = (void*)0;
                        int **l_472 = &g_64;
                        (*l_472) = l_471;
                        if (p_53)
                            break;
                    }
                }
                else
                {
                    for (l_304 = 0; l_304 < 8; l_304 += 1)
                    {
                        for (p_53 = 0; p_53 < 3; p_53 += 1)
                        {
                            g_393[l_304][p_53] = 0xC34FAF21L;
                        }
                    }
                    return l_365[2][0];
                }
                return l_473[5];
            }
        }
    }
    else
    {
        int **l_474 = &g_166;
        unsigned ***l_475 = &g_371;
        unsigned ****l_476[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned char l_478 = 1UL;
        char *l_488 = &g_194;
        int *l_523 = &g_146[0];
        unsigned short *l_563 = &g_80;
        int i;
        (*l_474) = (void*)0;
        l_478 = (l_304 = ((g_477 = l_475) == (*g_400)));
        for (p_49 = 0; (p_49 == (-2)); p_49--)
        {
            unsigned char l_483[5][10][5] = {{{5UL,0UL,251UL,251UL,1UL},{0UL,255UL,251UL,0xCEL,0xFAL},{0UL,0xEAL,0x28L,0x0FL,0xF0L},{255UL,253UL,1UL,253UL,255UL},{1UL,5UL,0UL,0xB8L,0x68L},{4UL,255UL,0xFDL,0xC0L,0x4CL},{249UL,249UL,0xB8L,5UL,0x68L},{1UL,0xC0L,0x87L,0x4CL,255UL},{0x68L,0xF0L,0x20L,0x20L,0xF0L},{0xFDL,252UL,0UL,254UL,0xFAL}},{{249UL,0x42L,0xB8L,1UL,1UL},{0x2AL,0x42L,249UL,0xD9L,0UL},{249UL,0x56L,0UL,2UL,1UL},{0xFDL,0x9DL,248UL,255UL,248UL},{0x68L,251UL,0x28L,1UL,8UL},{1UL,0x4CL,0UL,0xD9L,249UL},{249UL,1UL,0xE4L,0x28L,249UL},{4UL,0x4CL,0xFAL,254UL,0UL},{1UL,251UL,3UL,0x56L,0x56L},{255UL,0x9DL,255UL,0x42L,1UL}},{{249UL,5UL,0xE4L,3UL,1UL},{248UL,252UL,0xE6L,0x4CL,0UL},{0x97L,250UL,0xE4L,1UL,0x68L},{255UL,0xD9L,8UL,255UL,0UL},{8UL,0x97L,0x42L,0UL,0UL},{255UL,0x4CL,0UL,0xC0L,255UL},{0x97L,0xB8L,0x28L,1UL,1UL},{1UL,0x83L,1UL,0xC0L,0x87L},{249UL,0xF0L,0xFEL,0UL,0x97L},{4UL,255UL,251UL,255UL,4UL}},{{0x56L,3UL,251UL,1UL,1UL},{255UL,0x83L,2UL,0x4CL,255UL},{1UL,249UL,2UL,3UL,1UL},{0xB4L,0x4CL,248UL,0x42L,4UL},{1UL,0x42L,0xEAL,5UL,0x97L},{2UL,0xD9L,1UL,0xCEL,0x87L},{249UL,0x0FL,2UL,0xFEL,1UL},{0xFAL,252UL,0UL,255UL,255UL},{249UL,0xEAL,251UL,0x56L,249UL},{0x2AL,0xCEL,1UL,253UL,1UL}},{{1UL,1UL,249UL,0xEAL,1UL},{255UL,252UL,0xB4L,255UL,0x70L},{0x56L,249UL,0xFEL,249UL,0x56L},{255UL,252UL,1UL,0xC0L,0UL},{5UL,1UL,250UL,3UL,0xF0L},{0x4CL,0xCEL,0x4CL,252UL,251UL},{249UL,3UL,0x28L,0x97L,0x56L},{0UL,0xD9L,249UL,0x42L,0x2AL},{0x0FL,8UL,0x28L,0x20L,1UL},{4UL,255UL,0x4CL,0x9DL,255UL}}};
            int l_533 = (-6L);
            unsigned short l_568 = 0x1083L;
            char ** const l_572 = &l_444;
            unsigned short ***l_577 = &g_227;
            unsigned l_582[8];
            int *l_593 = (void*)0;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_582[i] = 0x9BA3C2F2L;
            if ((l_483[0][8][4] = (safe_mod_func_uint16_t_u_u((0L || (*p_51)), 65535UL))))
            {
                unsigned char l_489 = 0x6EL;
                short *l_502 = &g_180;
                int *l_525 = &g_77;
                for (l_478 = 14; (l_478 < 8); l_478 = safe_sub_func_uint16_t_u_u(l_478, 2))
                {
                    unsigned char *l_490 = &l_483[0][3][2];
                    int l_494 = 0xBDA51932L;
                    short *l_506 = &g_303;
                    unsigned short ***l_517 = &g_227;
                    if (g_254)
                        break;
                    if ((safe_div_func_uint32_t_u_u((l_489 = (0x79AEL != ((void*)0 != l_488))), func_59(func_59(((*l_490) = g_120), &p_50), (*g_227)))))
                    {
                        short l_493 = 0x733EL;
                        int *l_495 = &g_146[6];
                        short **l_503 = &g_179;
                        short *l_505 = (void*)0;
                        short **l_504 = &l_505;
                        char l_511 = 0x9BL;
                        p_53 = (safe_sub_func_int16_t_s_s((*g_179), l_493));
                        l_494 = (*l_290);
                        (*l_495) = l_494;
                        (*l_495) = ((safe_lshift_func_int16_t_s_u(l_494, l_489)) < ((func_54((*l_495), (*p_51)) == (safe_div_func_int16_t_s_s(p_53, (safe_sub_func_uint8_t_u_u(((((*l_504) = ((*l_503) = (l_502 = &p_49))) != l_506) < (((safe_mod_func_int32_t_s_s((l_511 = (safe_rshift_func_uint16_t_u_s(0xF690L, l_483[0][8][4]))), l_489)) < 1L) ^ 0xA2L)), l_494))))) || 0xD692B3C6L));
                    }
                    else
                    {
                        int l_516 = 4L;
                        int *l_518 = &g_393[1][2];
                        p_53 = p_52;
                        (*l_518) = (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(0x0BCFL, (l_483[0][8][4] && ((p_53 = p_53) != l_494)))), (p_52 >= (l_516 | (&g_227 == l_517)))));
                        if (p_50)
                            continue;
                        if (g_65[3])
                            continue;
                    }
                    (*l_474) = (void*)0;
                    for (g_32 = 0; (g_32 != 54); g_32 = safe_add_func_int8_t_s_s(g_32, 1))
                    {
                        int *l_522 = &g_393[5][0];
                        int **l_524 = &l_523;
                        (*l_474) = &p_53;
                        l_522 = g_521;
                        (*l_474) = &p_53;
                        (*l_524) = ((*l_474) = l_523);
                    }
                }
                (*l_474) = &p_53;
                (*l_474) = (*l_474);
                l_290 = l_525;
            }
            else
            {
                unsigned short **l_534[3][2];
                int * const * const l_535[3][1][8] = {{{&g_521,(void*)0,(void*)0,&l_523,(void*)0,(void*)0,&g_521,&g_521}},{{(void*)0,&l_523,&g_521,&g_521,&l_523,(void*)0,&g_166,(void*)0}},{{&l_523,(void*)0,&g_166,(void*)0,&l_523,&g_521,&g_521,&l_523}}};
                int **l_536 = &g_521;
                int ***l_537 = &g_153;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_534[i][j] = (void*)0;
                }
                for (g_254 = (-13); (g_254 == (-4)); g_254 = safe_add_func_int8_t_s_s(g_254, 9))
                {
                    short **l_531 = &g_179;
                    short ***l_530 = &l_531;
                    (*l_523) = (0xB2C3FE0CL && (safe_sub_func_int8_t_s_s(func_59(g_77, ((*g_227) = &p_50)), p_53)));
                    (*g_521) = (g_221 != l_530);
                }
                l_533 = (l_532 <= 0xED08L);
                l_290 = &p_53;
                (*l_523) = ((**l_536) = ((((void*)0 == l_534[0][0]) >= (l_535[0][0][1] != ((*l_537) = l_536))) >= 0UL));
            }
            if ((2L && (safe_div_func_int16_t_s_s(0xE1F3L, (*p_51)))))
            {
                int *l_549 = &g_146[5];
                unsigned short *l_554 = &g_301;
                if ((p_53 = (p_50 | (**g_227))))
                {
                    int **l_546 = (void*)0;
                    int **l_547 = (void*)0;
                    int **l_548 = (void*)0;
                    l_549 = ((*l_474) = &p_53);
                    for (g_77 = 15; (g_77 != 14); g_77 = safe_sub_func_uint8_t_u_u(g_77, 1))
                    {
                        (*l_474) = &p_53;
                    }
                }
                else
                {
                    int *l_555[2][8] = {{&g_77,&g_393[1][2],&g_393[1][2],&g_77,&g_77,&g_393[1][2],&g_393[1][2],&g_77},{&g_77,&g_393[1][2],&g_393[1][2],&g_77,&g_77,&g_393[1][2],&g_393[1][2],&g_77}};
                    int i, j;
                    p_53 = (safe_rshift_func_uint8_t_u_s(l_483[0][8][4], p_53));
                    if (((*g_521) = ((*g_198) | 3L)))
                    {
                        (*l_523) = ((*g_521) = 0x6CF3960AL);
                        return l_554;
                    }
                    else
                    {
                        (*l_474) = l_555[1][1];
                        (*l_474) = &p_53;
                        (*g_166) = (func_59(g_77, (*g_227)) < 0UL);
                        (*l_474) = &l_304;
                    }
                    if ((((-1L) && (p_53 > p_53)) && (!((((g_303 = (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((func_59(p_53, l_554) > (l_304 = (safe_add_func_uint8_t_u_u(g_180, (((void*)0 != &g_153) < l_483[0][8][4]))))), (*l_549))), 0xDCA76B49L))) >= 0x50F4L) != l_533) ^ p_50))))
                    {
                        (*l_474) = &p_53;
                        g_64 = (*l_474);
                        (**l_474) = ((((*g_227) = (*g_227)) == (void*)0) >= (*l_549));
                    }
                    else
                    {
                        short l_562 = (-6L);
                        (*l_474) = &p_53;
                        if (l_562)
                            continue;
                        return l_563;
                    }
                }
                (*g_521) = 0L;
                if ((*g_166))
                    break;
            }
            else
            {
                short l_569 = 0xBC43L;
                unsigned short ***l_579[6][5] = {{&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,&g_227}};
                unsigned short ****l_578 = &l_579[1][3];
                int i, j;
                if ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(0x19L, 0)) && 4294967290UL), func_59((l_568 <= (l_569 >= ((((*l_290) || (*p_51)) == 0x3BBA9BDEL) >= p_52))), (*g_227)))))
                {
                    unsigned short *l_587 = &l_568;
                    if ((0xC88DL ^ (*l_523)))
                    {
                        unsigned **l_585 = &g_198;
                        l_582[6] = p_50;
                        (*l_474) = &p_53;
                        (*l_474) = &p_53;
                        l_533 = func_54((p_53 && g_194), (l_586[3][9][4] > (*g_166)));
                    }
                    else
                    {
                        (*l_474) = &p_53;
                        return l_365[2][0];
                    }
                }
                else
                {
                    (*l_474) = &p_53;
                    if ((*l_290))
                        break;
                    (*g_166) = (*g_521);
                    if (p_52)
                    {
                        int *l_592 = &g_146[3];
                        if ((*g_166))
                            break;
                        (*g_166) = (*g_166);
                        l_592 = (void*)0;
                    }
                    else
                    {
                        l_593 = &l_533;
                        (*l_474) = &p_53;
                    }
                }
                for (l_478 = 0; (l_478 == 55); l_478 = safe_add_func_uint32_t_u_u(l_478, 4))
                {
                    p_53 = p_52;
                    (*l_474) = (*l_474);
                    if (p_53)
                        continue;
                }
                (*l_523) = (*g_521);
            }
        }
        (*l_474) = (void*)0;
    }
    return l_365[2][0];
}







static char func_54(int p_55, unsigned short p_56)
{
    const int l_137 = (-1L);
    int *l_145 = &g_146[0];
    int **l_144 = &l_145;
    const int *l_148[10];
    const int **l_147 = &l_148[6];
    int *l_167 = &g_146[0];
    short l_168 = 0x185DL;
    unsigned l_201 = 0UL;
    unsigned short **l_206 = (void*)0;
    const short * const l_225[1] = {&g_226};
    const short * const *l_224 = &l_225[0];
    const short * const **l_223 = &l_224;
    int l_282 = 0x361898E5L;
    int i;
    for (i = 0; i < 10; i++)
        l_148[i] = &g_146[0];
    for (p_56 = 0; (p_56 <= 3); p_56 += 1)
    {
        int **l_129 = &g_64;
        unsigned l_130 = 0x4FB9B3D0L;
        unsigned l_157 = 0xA7E7D718L;
        int i;
        (*l_129) = &g_65[p_56];
        l_130 = ((**l_129) = (*g_64));
        if (p_56)
        {
            const int **l_149 = (void*)0;
            int l_150[6][9] = {{1L,(-1L),(-2L),(-2L),(-1L),1L,(-1L),1L,(-1L)},{1L,0L,0L,1L,1L,(-1L),1L,1L,0L},{1L,1L,(-1L),(-1L),9L,(-1L),(-1L),1L,1L},{0L,1L,1L,(-1L),1L,1L,0L,0L,1L},{(-1L),1L,(-1L),1L,(-1L),(-2L),(-2L),(-1L),1L},{0L,1L,0L,(-2L),(-1L),(-1L),(-2L),0L,1L}};
            int i, j;
            for (g_120 = 0; (g_120 != 16); g_120 = safe_add_func_uint32_t_u_u(g_120, 5))
            {
                int *l_143 = &g_105;
                int l_162 = 0x557B4538L;
                for (p_55 = 0; (p_55 > 5); p_55 = safe_add_func_uint16_t_u_u(p_55, 9))
                {
                    for (g_77 = 0; (g_77 <= (-12)); g_77 = safe_sub_func_int8_t_s_s(g_77, 1))
                    {
                        return g_80;
                    }
                }
            }
        }
        else
        {
            int *l_165 = (void*)0;
            (*l_167) = (((g_166 = ((*l_129) = l_165)) != ((*l_144) = l_167)) > (&p_55 == (void*)0));
            (*l_167) = l_130;
            if (p_56)
                continue;
        }
        g_65[p_56] = ((*l_145) = (*l_167));
    }
    (**l_144) = 1L;
    for (p_55 = 0; (p_55 <= 9); p_55 += 1)
    {
        const unsigned l_191[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        int l_205[8][6] = {{0x80BDAFFAL,(-10L),0x3DA2BACBL,0xA5583D22L,0x2D4355F6L,0xBFC4B41FL},{0x7B63B490L,(-8L),9L,0x80BDAFFAL,(-6L),0L},{0L,0x4EF8352AL,(-4L),(-1L),(-6L),1L},{0x2D4355F6L,(-8L),0xA5583D22L,(-8L),0x2D4355F6L,(-1L)},{(-4L),0x3DA2BACBL,0x025993BAL,0xBFC4B41FL,0xA5583D22L,0L},{0x025993BAL,0x4FDC908BL,0x2D4355F6L,0x3DA2BACBL,(-10L),0L},{(-1L),1L,0x025993BAL,0x025993BAL,1L,(-1L)},{(-10L),0x80BDAFFAL,0xA5583D22L,(-6L),(-4L),1L}};
        unsigned short *l_244 = (void*)0;
        int i, j;
        for (g_159 = 2; (g_159 <= 9); g_159 += 1)
        {
            short **l_212 = &g_179;
            short l_229 = 0xD21FL;
            int i;
            (*l_147) = l_148[p_55];
        }
    }
    return p_55;
}







static unsigned func_59(unsigned char p_60, unsigned short * p_61)
{
    char l_93[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int l_99 = 0xC0D400C6L;
    int i;
    for (p_60 = 0; (p_60 <= 3); p_60 += 1)
    {
        unsigned l_103 = 0x8944B879L;
        int l_109 = 0L;
        for (g_80 = 0; (g_80 <= 3); g_80 += 1)
        {
            int *l_82 = &g_65[3];
            for (g_77 = 3; (g_77 >= 0); g_77 -= 1)
            {
                int **l_84 = &l_82;
                int i;
                for (g_32 = 0; (g_32 <= 3); g_32 += 1)
                {
                    int **l_81[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int ***l_83 = &l_81[4];
                    int i;
                    l_82 = &g_65[g_77];
                    g_64 = l_82;
                    (*l_83) = l_81[4];
                }
                (*l_84) = &g_65[g_77];
                if ((safe_rshift_func_int16_t_s_s(g_65[p_60], p_60)))
                {
                    char *l_94 = &l_93[6];
                    int *l_102 = &l_99;
                    int *l_104 = &g_105;
                    int i;
                    g_65[p_60] = 5L;
                    (*l_104) = ((*l_82) = (safe_div_func_int8_t_s_s((((0xF94618C4L ^ (safe_sub_func_uint16_t_u_u((((**l_84) || (safe_lshift_func_int8_t_s_s(((*l_94) = l_93[6]), 7))) >= (safe_div_func_int8_t_s_s(7L, g_65[3]))), (g_65[p_60] >= (safe_div_func_uint32_t_u_u(((l_99 && (safe_mod_func_int32_t_s_s(((*l_102) = p_60), l_103))) < (**l_84)), (**l_84))))))) <= g_80) || l_93[3]), g_32)));
                    g_64 = &g_65[p_60];
                    for (l_99 = 0; (l_99 <= (-6)); l_99 = safe_sub_func_uint32_t_u_u(l_99, 7))
                    {
                        unsigned char l_108 = 255UL;
                        (*l_82) = (!0x69FE4373L);
                        l_109 = ((*l_104) = ((*l_82) = l_108));
                    }
                }
                else
                {
                    for (l_109 = 19; (l_109 == (-23)); l_109 = safe_sub_func_uint16_t_u_u(l_109, 4))
                    {
                        return g_65[3];
                    }
                }
                return g_105;
            }
            return g_32;
        }
        for (g_105 = 3; (g_105 >= 0); g_105 -= 1)
        {
            int *l_113 = &g_65[1];
            for (l_103 = 0; (l_103 <= 8); l_103 += 1)
            {
                int **l_112[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_112[i] = (void*)0;
                l_113 = &g_65[g_105];
            }
            for (l_103 = 0; (l_103 <= 3); l_103 += 1)
            {
                int **l_114 = &l_113;
                unsigned char *l_119[5][7] = {{(void*)0,&g_120,(void*)0,(void*)0,&g_120,(void*)0,(void*)0},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,(void*)0,(void*)0,&g_120,(void*)0,(void*)0,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120},{&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120}};
                int i, j;
                (*l_114) = &g_65[p_60];
                l_99 = (g_65[g_105] = (safe_lshift_func_int8_t_s_u(((p_60 || ((safe_sub_func_int8_t_s_s((l_93[(p_60 + 1)] = ((p_60 | (*l_113)) >= (g_120 = g_105))), (safe_rshift_func_int8_t_s_u((0x4DL == (0xDDL <= p_60)), 6)))) <= (safe_rshift_func_uint16_t_u_u((*p_61), 2)))) | ((void*)0 == &l_114)), g_65[0])));
                if (g_65[3])
                    continue;
                (*l_114) = (*l_114);
            }
            (*l_113) = (safe_lshift_func_uint16_t_u_u(0xE40AL, 8));
        }
    }
    g_64 = &l_99;
    return p_60;
}







static unsigned char func_62(char p_63)
{
    int **l_66 = &g_64;
    unsigned char *l_75[2];
    int *l_76 = &g_77;
    int *l_78[6] = {&g_77,&g_65[3],&g_65[3],&g_77,&g_65[3],&g_65[3]};
    int i;
    for (i = 0; i < 2; i++)
        l_75[i] = (void*)0;
    (*l_66) = g_64;
    (*l_76) = (+(safe_lshift_func_uint8_t_u_s(((**l_66) = (((((safe_lshift_func_int8_t_s_s((**l_66), (g_32 == p_63))) < (safe_div_func_uint16_t_u_u(g_19, g_19))) == p_63) & (safe_rshift_func_int8_t_s_u(p_63, 7))) == (p_63 >= ((((**l_66) <= 4294967295UL) > p_63) >= 5L)))), 3)));
    g_64 = (*l_66);
    (*l_66) = l_78[4];
    return p_63;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_393[i][j], "g_393[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_715[i][j], "g_715[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1083, "g_1083", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
