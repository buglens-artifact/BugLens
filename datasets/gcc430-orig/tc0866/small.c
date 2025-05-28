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



static short g_22[4] = {0x6695L, 0x6695L, 0x6695L, 0x6695L};
static int g_56 = 0xE7721CA7L;
static int *g_55 = &g_56;
static unsigned short g_79 = 8UL;
static int g_112 = 0x5B57A05EL;
static short g_113 = 0xC5F8L;
static char *g_121 = (void*)0;
static char **g_120[7] = {&g_121, &g_121, &g_121, &g_121, &g_121, &g_121, &g_121};
static char g_155 = 0x41L;
static unsigned char g_160[9] = {252UL, 252UL, 252UL, 252UL, 252UL, 252UL, 252UL, 252UL, 252UL};
static unsigned g_166 = 0UL;
static unsigned *g_165 = &g_166;
static unsigned **g_179 = &g_165;
static int **g_193 = &g_55;
static int ***g_192[7] = {&g_193, &g_193, (void*)0, &g_193, &g_193, (void*)0, &g_193};
static unsigned short g_275 = 0UL;
static short g_279 = (-6L);
static short g_336[4] = {(-1L), 0L, (-1L), 0L};
static unsigned *g_366[9] = {(void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166, (void*)0};
static int *g_412[4][6][5] = {{{(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}}, {{(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}}, {{(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}}, {{(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}, {(void*)0, (void*)0, &g_56, &g_56, (void*)0}}};
static unsigned char g_423 = 0x91L;
static unsigned g_450 = 4294967295UL;
static int *g_459 = (void*)0;
static int **g_458 = &g_459;
static int ***g_457 = &g_458;
static unsigned g_484 = 4294967294UL;
static unsigned short g_549 = 0xBF70L;
static const int *g_594 = &g_56;
static int g_639 = (-7L);
static int **g_774 = &g_459;
static short *g_794 = &g_22[2];
static const short *g_802[7][5] = {{&g_113, &g_113, (void*)0, &g_279, &g_22[0]}, {&g_113, &g_113, (void*)0, &g_279, &g_22[0]}, {&g_113, &g_113, (void*)0, &g_279, &g_22[0]}, {&g_113, &g_113, (void*)0, &g_279, &g_22[0]}, {&g_113, &g_113, (void*)0, &g_279, &g_22[0]}, {&g_113, &g_113, (void*)0, &g_279, &g_22[0]}, {&g_113, &g_113, (void*)0, &g_279, &g_22[0]}};
static const short **g_801 = &g_802[1][2];
static unsigned char g_829 = 0x34L;
static unsigned *g_987 = &g_484;
static unsigned **g_986 = &g_987;
static char g_1065 = 0L;
static int **g_1068 = &g_412[2][3][3];



static unsigned char func_1(void);
static int func_2(unsigned short p_3);
static short func_7(char p_8, char p_9);
static char func_10(int p_11, int p_12, unsigned p_13, const char p_14, short p_15);
static short func_33(int p_34, const int p_35, unsigned short p_36, unsigned char p_37);
static int func_38(char p_39, int p_40);
static short func_41(int p_42, unsigned p_43, unsigned char p_44, unsigned char p_45);
static char func_50(char p_51, char p_52);
static short func_60(int * p_61, unsigned char p_62);
static int * func_63(int ** p_64, int ** p_65);
static unsigned char func_1(void)
{
    const unsigned l_6 = 0x444182BDL;
    char *l_357[8] = {&g_155, &g_155, (void*)0, &g_155, &g_155, (void*)0, &g_155, &g_155};
    int l_358 = 0L;
    unsigned l_367 = 0UL;
    int l_550 = 0L;
    int **l_1122[2][1][8] = {{{&g_412[3][0][4], &g_412[1][4][2], &g_412[3][0][4], &g_412[1][4][2], &g_412[3][0][4], &g_412[1][4][2], &g_412[3][0][4], &g_412[1][4][2]}}, {{&g_412[3][0][4], &g_412[1][4][2], &g_412[3][0][4], &g_412[1][4][2], &g_412[3][0][4], &g_412[1][4][2], &g_412[3][0][4], &g_412[1][4][2]}}};
    unsigned l_1125 = 0UL;
    unsigned short *l_1129 = (void*)0;
    unsigned short l_1142 = 0x3BC9L;
    short l_1161 = (-3L);
    int i, j, k;
    if (func_2((safe_mul_func_int16_t_s_s(l_6, func_7(func_10(l_6, ((l_6 && ((l_550 = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_22[2], 5)), (safe_mul_func_uint8_t_u_u((g_160[4] = (+((safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((!((g_22[0] == func_33(func_38(((func_41(l_6, g_22[2], (((l_358 = (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((!(((func_50(g_22[2], (((safe_sub_func_uint32_t_u_u(((l_6 <= g_22[2]) < l_6), l_6)) <= l_6) ^ g_22[0])) || l_6) < g_22[0]) >= l_6)), 11)), g_22[0]))) == g_22[1]) ^ 0xC82F1767L), g_22[3]) ^ l_367) | l_6), l_6), g_22[1], g_22[2], l_367)) < 8UL)), g_549)) && 1UL), 0x99L)), 1UL)) || l_358), 0x67L)) == 0x67L))), g_423)))), l_6)) != g_549)) ^ 0UL)) ^ l_6), g_22[2], l_6, g_22[2]), g_829)))))
    {
        for (l_358 = (-23); (l_358 != (-6)); l_358++)
        {
            return l_367;
        }
    }
    else
    {
        int **l_1123 = &g_412[3][5][0];
        int *l_1124 = &l_550;
        const int *l_1141 = (void*)0;
        int l_1143 = 0L;
        unsigned short l_1146 = 1UL;
        unsigned l_1149 = 0x9FE60D70L;
        unsigned short *l_1154 = &g_79;
        unsigned short *l_1155 = &g_549;
        unsigned char l_1156 = 0UL;
        (*l_1123) = l_1124;


        if ((*l_1124))
        {
            unsigned char l_1128[4][5] = {{0x47L, 0x3DL, 0x40L, 0x3DL, 0x3DL}, {0x47L, 0x3DL, 0x40L, 0x3DL, 0x3DL}, {0x47L, 0x3DL, 0x40L, 0x3DL, 0x3DL}, {0x47L, 0x3DL, 0x40L, 0x3DL, 0x3DL}};
            int **l_1130 = &g_55;
            int **l_1131 = &g_412[2][5][0];
            unsigned char *l_1138 = &g_160[4];
            int i, j;
            (*l_1124) = ((~(l_1128[2][4] || ((l_1129 == (void*)0) > func_60((*g_193), ((*l_1124) || ((*l_1138) = (safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((func_60((*l_1130), ((safe_lshift_func_uint8_t_u_s((*l_1124), 7)) < 0x60890769L)) & (*g_794)), l_1128[2][4])) > 0x8D1DL), (*l_1124))))))))) > (*g_594));
        }
        else
        {
            const int *l_1139 = &l_358;
            const int **l_1140[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1140[i] = &l_1139;
            l_1141 = l_1139;

            ;
            (*l_1123) = (*g_193);
            if (l_1142)
            {
                return g_279;


            }
            else
            {
                (*l_1124) = (*l_1141);
            }
            l_1143 = ((*l_1124) = 0x4D3B2F54L);
        }

        ;
        l_1143 = ((safe_lshift_func_int8_t_s_s((!(l_1146 ^ (safe_div_func_int32_t_s_s((((l_1149 > ((*l_1124) = ((0x07L & (safe_add_func_uint16_t_u_u(((*l_1155) = ((*l_1154) = ((*l_1124) != (safe_add_func_int8_t_s_s((*l_1124), g_549))))), 5L))) != l_1156))) & ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((*g_594) != 0x27F938DEL), 0)) & l_1161), (*g_794))) && g_113)) & g_450), 7L)))), 4)) <= 0xEBFECD94L);
        for (l_1149 = 24; (l_1149 < 19); --l_1149)
        {
            for (l_1156 = 2; (l_1156 <= 6); l_1156 += 1)
            {
                int l_1164 = 0x1B4636B7L;
                if (l_1164)
                    break;
            }
        }
    }

    ;





    return g_79;


}







static int func_2(unsigned short p_3)
{
    int **l_890 = &g_412[3][0][4];
    int ***l_891 = &l_890;
    int **l_892[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    int *l_893 = &g_639;
    int *l_894 = &g_639;
    unsigned short l_899 = 1UL;
    unsigned **l_900[3][1][10] = {{{&g_366[8], (void*)0, &g_165, (void*)0, (void*)0, &g_165, (void*)0, &g_366[8], &g_165, &g_366[8]}}, {{&g_366[8], (void*)0, &g_165, (void*)0, (void*)0, &g_165, (void*)0, &g_366[8], &g_165, &g_366[8]}}, {{&g_366[8], (void*)0, &g_165, (void*)0, (void*)0, &g_165, (void*)0, &g_366[8], &g_165, &g_366[8]}}};
    unsigned *l_901 = &g_450;
    char *l_902 = &g_155;
    char *l_903[9][2] = {{&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}, {&g_155, (void*)0}};
    int *l_914 = &g_56;
    int l_958 = 1L;
    short **l_1042 = &g_794;
    short ***l_1041 = &l_1042;
    unsigned short *l_1053 = &g_79;
    unsigned short **l_1052 = &l_1053;
    int *l_1085 = &l_958;
    int l_1114[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1114[i] = (-1L);
lbl_1034:
    (*g_193) = l_893;

    ;
    (*g_193) = ((*l_890) = l_894);
    if (((safe_div_func_int16_t_s_s(((void*)0 != l_893), (safe_mul_func_int8_t_s_s(p_3, (l_899 & ((l_901 = l_893) == (void*)0)))))) ^ (l_902 == l_903[2][1])))
    {
        unsigned **l_917[9];
        int l_919 = 0x36F4D143L;
        int **l_920 = &l_893;
        unsigned char *l_1000[9] = {&g_160[4], &g_829, &g_160[4], &g_829, &g_160[4], &g_829, &g_160[4], &g_829, &g_160[4]};
        short **l_1002 = &g_794;
        short **l_1003 = &g_794;
        char l_1025[7] = {0L, 0L, 0x4FL, 0L, 0L, 0x4FL, 0L};
        unsigned l_1028 = 1UL;
        int i;
        for (i = 0; i < 9; i++)
            l_917[i] = (void*)0;
        if (((**g_193) = p_3))
        {
            return p_3;
        }
        else
        {
            short l_904 = 0xC063L;
            int l_918 = (-9L);
            unsigned * const *l_945 = &g_366[8];
            unsigned * const * const *l_944[6][3];
            int **l_959 = &l_914;
            const unsigned l_962 = 0xA16BDBD0L;
            short **l_1001 = &g_794;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 3; j++)
                    l_944[i][j] = &l_945;
            }
            if (l_904)
            {
                unsigned short l_911[4][4] = {{0x0C5FL, 0xB78AL, 65526UL, 0xB78AL}, {0x0C5FL, 0xB78AL, 65526UL, 0xB78AL}, {0x0C5FL, 0xB78AL, 65526UL, 0xB78AL}, {0x0C5FL, 0xB78AL, 65526UL, 0xB78AL}};
                int **l_921 = &l_893;
                int l_927 = 0x2F87B27FL;
                int i, j;
                if (func_7(p_3, (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((((l_919 = ((safe_mod_func_uint32_t_u_u(l_911[2][2], (safe_mod_func_uint16_t_u_u(func_60(l_914, g_155), 0xFC74L)))) & (l_918 = (safe_mul_func_int16_t_s_s(((g_79 && ((void*)0 == l_917[4])) > g_336[1]), (*g_794)))))) <= p_3) < 0x3C1EL), 0xBE4DL)), 1))))
                {
                    (*l_890) = (*g_193);
                }
                else
                {
                    unsigned char *l_925[4];
                    short l_926 = 0x1320L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_925[i] = &g_829;
                    for (g_829 = 18; (g_829 >= 28); ++g_829)
                    {
                        int l_924 = 0x86DB550CL;
                        (*l_893) = (g_336[3] >= 2UL);
                        if (p_3)
                            break;
                        (*l_894) = 0x6C135D6AL;
                        if (l_924)
                            break;
                    }
                    (**l_921) = (0UL | (p_3 & g_450));
                    (*l_890) = &l_918;


                    if ((l_918 = (((void*)0 != &l_918) && ((((**l_921) = 1UL) && (**l_920)) > (l_927 = func_7(l_926, p_3))))))
                    {
                        unsigned short *l_930 = &l_911[2][0];
                        unsigned short **l_929 = &l_930;
                        unsigned short ***l_928 = &l_929;
                        (*g_193) = (*g_193);
                        (*l_928) = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_940 = (void*)0;
                        int *l_941 = &g_112;
                        (*l_893) = ((safe_add_func_uint8_t_u_u(p_3, (g_160[4] = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(func_41(((*l_941) = 0xD557DE2DL), ((safe_mul_func_uint8_t_u_u(((**l_920) = ((1UL == (**l_921)) ^ p_3)), 0xA1L)) == (0x57BDL > ((void*)0 != l_944[4][2]))), g_160[4], g_275))), 65528UL)) & p_3), g_160[4])), p_3))))) || p_3);

                        ;
                    }

                    ;
                }

                ;

            }
            else
            {
                int **l_961 = &l_893;
                int l_1018 = 6L;
                if (p_3)
                {
                    unsigned char *l_952[5] = {&g_423, &g_829, &g_423, &g_829, &g_423};
                    int l_957 = 0x0E33C46DL;
                    int i;
                    if (((*l_893) = ((safe_rshift_func_int8_t_s_s(((*l_902) = (safe_mul_func_uint8_t_u_u((g_829 = (safe_sub_func_int16_t_s_s((*g_794), p_3))), (0xB1L == ((*l_914) != ((func_60((*g_193), g_113) == (-6L)) ^ ((safe_lshift_func_int16_t_s_s((9L | 0xA188L), l_957)) >= 0x0AL))))))), l_958)) && 0UL)))
                    {
                        int **l_960 = &l_894;
                        (*l_959) = func_63(l_959, l_960);
                        (*l_959) = func_63(l_961, l_960);


                        (**l_891) = (*l_959);
                    }
                    else
                    {
                        unsigned char l_977 = 1UL;
                        l_957 = l_962;
                        (*l_893) = (safe_rshift_func_uint16_t_u_u(5UL, ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_113, (((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u(((*l_914) == ((safe_lshift_func_uint16_t_u_u(p_3, p_3)) | func_60((*l_961), (safe_mod_func_int8_t_s_s(0xE4L, 0xDAL))))), g_160[4])) != l_957) && l_977), l_977)) != (**l_961)) || 0xB8L))) != 0UL), p_3)) > 1UL)));
                        (*l_920) = &l_957;

                        ;
                    }


                    if (g_275)
                        goto lbl_999;

                }
                else
                {
                    char **l_978 = &l_903[5][1];
                    char ***l_979 = (void*)0;
                    char ***l_980 = &g_120[6];
                    unsigned char *l_983 = &g_829;
                    unsigned char *l_995 = (void*)0;
                    unsigned char **l_994 = &l_995;
                    int l_996 = 0x567CE0CFL;
                    (*l_894) = (&l_903[2][0] != ((*l_980) = l_978));


                    (**g_193) = (safe_sub_func_uint8_t_u_u(((*l_983) = 0x20L), 252UL));
                    (*l_890) = func_63(l_961, l_920);


                    (*l_894) = (safe_sub_func_int32_t_s_s(func_7((((*l_894) = ((void*)0 != g_986)) & (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((&g_423 != l_983), (safe_mul_func_uint8_t_u_u((((*l_994) = &g_160[6]) != (void*)0), 0xD7L)))), 9))), l_996), 4294967295UL));

                    ;
                    ;
                }

                ;


lbl_999:
                (**l_959) = (!(safe_mul_func_uint16_t_u_u(p_3, g_166)));
                (*l_894) = (func_41(((((p_3 != (**l_959)) || ((((l_1000[5] == &g_423) ^ ((l_1002 = l_1001) == l_1003)) || (~(((safe_add_func_uint32_t_u_u(((*l_901) = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((+((safe_mul_func_int8_t_s_s(p_3, (0L <= (safe_mod_func_int32_t_s_s((-3L), p_3))))) || p_3)), 0xD80FL)), g_336[1])), l_1018))), p_3)) > (**l_959)) || 0UL))) >= g_484)) | 0UL) | p_3), (**g_986), p_3, g_166) >= p_3);

                ;
                (*l_914) = (safe_add_func_int32_t_s_s(p_3, p_3));
            }

            ;



        }

        ;


        for (g_275 = 0; (g_275 <= 6); g_275 += 1)
        {
            int l_1031 = 0x35C69C65L;
            int i;
            (*l_920) = (*g_193);

            ;
            (*l_914) = (safe_mul_func_uint8_t_u_u(func_41((((((safe_div_func_int8_t_s_s((l_1025[2] >= (*l_914)), (safe_rshift_func_int16_t_s_s(((((+0x22L) ^ (((l_1025[2] | p_3) | (*l_914)) != l_1028)) != (((**l_1002) = (safe_rshift_func_int8_t_s_u(l_1028, 1))) < ((!p_3) && p_3))) ^ p_3), 13)))) == l_1031) > 0xDC890428L) <= p_3) || 5L), (**g_986), p_3, g_639), (-1L)));

            ;
        }


        (**l_891) = (*g_193);
    }
    else
    {
        int l_1035 = 0xC4301EF5L;
        int l_1057[2];
        unsigned *l_1117[9][9][3] = {{{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}, {{(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}, {(void*)0, (void*)0, &g_166}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1057[i] = 1L;
        for (g_549 = 0; (g_549 == 56); g_549++)
        {
            char l_1036 = (-3L);
            if (g_112)
                goto lbl_1034;
            (*l_893) = l_1035;
            if (l_1036)
                continue;
        }
        for (g_549 = 0; (g_549 >= 46); g_549 = safe_add_func_int16_t_s_s(g_549, 5))
        {
            short ***l_1043 = &l_1042;
            int l_1056 = (-1L);
            short l_1060 = 0x4C45L;
            int **l_1072 = &g_412[2][4][2];
            for (l_1035 = 0; (l_1035 == 3); l_1035 = safe_add_func_int16_t_s_s(l_1035, 2))
            {
                unsigned short l_1044 = 0x26E5L;
                (*g_55) = (&g_801 == (l_1043 = l_1041));
                (**g_193) = (0UL || ((*l_1053) = (((**g_193) == p_3) != g_484)));
                (**l_891) = &l_1056;
                l_1060 = (l_1057[0] = (safe_lshift_func_uint16_t_u_s(((*l_1053) = g_549), 3)));
            }


            if (p_3)
                break;

            for (g_423 = 0; (g_423 == 37); ++g_423)
            {
                unsigned char l_1066 = 1UL;
                int **l_1069[9][6] = {{(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}, {(void*)0, &g_412[1][3][4], &l_893, &g_412[0][5][3], &g_412[3][0][4], &g_412[0][5][3]}};
                const unsigned *l_1070 = &g_166;
                unsigned *l_1073 = &g_450;
                int i, j;
                for (l_958 = 0; (l_958 <= 1); l_958 += 1)
                {
                    short ***l_1067 = (void*)0;
                    (*g_193) = (*g_193);
                    (*l_894) = 3L;
                    if ((safe_lshift_func_int8_t_s_u((p_3 <= ((**l_1042) = 6L)), 3)))
                    {
                        (**g_193) = (g_1065 = (*g_594));
                    }
                    else
                    {
                        const unsigned **l_1071 = &l_1070;
                        unsigned *l_1074 = &g_450;
                        (*l_893) = ((-1L) || func_41(l_1066, (l_1067 == (void*)0), g_275, ((((((*l_1071) = l_1070) != (l_1074 = l_1073)) != p_3) <= 255UL) >= p_3)));
                    }
                    for (l_1035 = 0; (l_1035 <= 1); l_1035 += 1)
                    {
                        int i, j;
                        l_1057[l_1035] = l_1057[l_958];
                    }
                }
                (*l_893) = l_1035;
            }
        }

        ;
        for (l_958 = (-4); (l_958 < (-17)); l_958--)
        {
            unsigned short l_1077[10][6] = {{0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}, {0x9651L, 0UL, 0x0AFBL, 0UL, 0x9651L, 8UL}};
            int *l_1078[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_1078[i] = &l_1057[0];
        }
    }

    ;


    ;
    return p_3;


}







static short func_7(char p_8, char p_9)
{
    unsigned l_841 = 0xA4F8ED81L;
    int l_842 = 0L;
    int l_863 = 0x25D69FC4L;
    unsigned ***l_888 = &g_179;
lbl_864:
    l_842 = (0x49AEL && l_841);
    for (p_9 = 0; (p_9 <= (-2)); --p_9)
    {
        unsigned l_847[1];
        unsigned *l_848 = &g_166;
        int l_849 = 0xD3C8849CL;
        char *l_854 = &g_155;
        unsigned short *l_855 = &g_549;
        int l_862[5][4][8] = {{{1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}}, {{1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}}, {{1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}}, {{1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}}, {{1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}, {1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL, 1L, 0xC779059DL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_847[i] = 0x41E479FDL;
        l_849 = (safe_rshift_func_uint8_t_u_s(l_847[0], (l_841 <= p_8)));
        l_862[4][1][6] = (safe_sub_func_uint8_t_u_u(((((*l_855) = (safe_mul_func_int8_t_s_s(p_9, ((*l_854) = 0xA2L)))) | (((p_9 == (l_849 = 0UL)) == func_60(l_848, (~(g_829 > (safe_div_func_int32_t_s_s(((l_842 = (safe_add_func_int8_t_s_s(l_862[4][1][6], (-1L)))) ^ ((l_863 = l_841) || p_9)), p_9)))))) | p_9)) > l_841), 7L));
        if (p_8)
            goto lbl_864;
        return (*g_794);
    }
    for (l_863 = 0; (l_863 <= (-22)); l_863 = safe_sub_func_uint8_t_u_u(l_863, 6))
    {
        int * const *l_886 = &g_459;
        unsigned l_887 = 4294967294UL;
        int *l_889 = &g_56;
        for (g_79 = 0; (g_79 <= 4); g_79 += 1)
        {
            int *l_871 = &l_863;
            unsigned l_876 = 0UL;
            int *l_879 = (void*)0;
            int *l_880 = &l_842;
            int i, j;
            (*l_880) = ((g_160[g_79] | ((safe_sub_func_int16_t_s_s(0xEF0FL, (safe_mod_func_uint32_t_u_u(func_60(l_871, (safe_add_func_int8_t_s_s((*l_871), (safe_rshift_func_uint8_t_u_u(func_41((l_876 = 0L), p_9, g_336[2], func_41((+0x41AF4BABL), (((safe_mul_func_uint16_t_u_u(((void*)0 == &g_484), l_863)) || p_8) >= p_8), g_22[3], g_22[2])), p_8))))), p_9)))) != 4294967286UL)) >= p_8);

            ;
            (*g_193) = (void*)0;

            ;
        }
        (*l_889) = (safe_rshift_func_uint8_t_u_u((l_841 <= (safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u((&l_841 == &l_841), p_9))))), g_336[1]));
    }
    return p_8;
}







static char func_10(int p_11, int p_12, unsigned p_13, const char p_14, short p_15)
{
    char l_553 = 0x0AL;
    int l_566 = 0xFBAF6D04L;
    unsigned short l_571 = 0x66BFL;
    char l_577 = 0x67L;
    char l_583 = 0xAEL;
    int **l_590 = &g_412[3][0][4];
    short l_658 = 0xCBDBL;
    int l_702 = 1L;
    unsigned **l_724 = (void*)0;
    int ***l_746 = &g_458;
    unsigned short l_788 = 0UL;
    short **l_797 = &g_794;
    int **l_806 = (void*)0;
    for (g_155 = 0; (g_155 < (-2)); g_155--)
    {
        unsigned short l_554 = 0UL;
        int *l_561 = &g_56;
        int *l_582 = &g_56;
        int **l_593 = &g_412[2][1][0];
        unsigned l_614 = 0xE743125BL;
        int *l_622 = &l_566;
        short l_651 = (-1L);
        unsigned l_694 = 4294967288UL;
        p_11 = 1L;
        l_553 = p_13;
        if (l_554)
        {
            unsigned char l_562 = 0x76L;
            unsigned short *l_563 = &g_549;
            l_566 = (l_554 < ((safe_lshift_func_int8_t_s_u(5L, (safe_lshift_func_uint16_t_u_u((&p_11 != (void*)0), p_13)))) & (safe_mod_func_uint16_t_u_u(func_60(l_561, (((*l_563) = l_562) < (safe_div_func_int32_t_s_s(((0xDAL && p_14) < l_562), 0x30D78874L)))), 0xB1FBL))));
        }
        else
        {
            char *l_610 = &g_155;
            const int l_613 = 0L;
            int *l_619 = (void*)0;
            const int *l_620[2];
            short l_623[6];
            int i;
            for (i = 0; i < 2; i++)
                l_620[i] = &l_566;
            for (i = 0; i < 6; i++)
                l_623[i] = 0x98B9L;
            if (((g_56 | (safe_sub_func_uint16_t_u_u((l_566 == (~(p_11 = p_14))), (func_60(((*g_193) = (void*)0), func_60(&l_566, (*l_561))) || func_60(&l_566, l_566))))) == p_15))
            {
                unsigned l_576 = 6UL;
                int l_584 = 9L;
                l_566 = (0x67A9L && (p_15 = (func_60((*g_193), g_484) == (((safe_add_func_uint8_t_u_u(l_571, (safe_sub_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s((l_576 = p_13), l_577)) || (~(((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((func_60(l_582, g_160[4]) || l_583), 1)) & p_15), l_577)) <= g_56) == 0x751AL))) && 0xEC623C0EL) < g_275), p_11)))) && p_12) & l_584))));
            }
            else
            {
                int **l_591 = &g_412[3][0][4];
                int l_605 = 0xE83F2A3EL;
                char *l_608 = &l_583;
                unsigned *l_632 = (void*)0;
                unsigned *l_633 = &g_166;
                int l_638[7] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L, (-1L)};
                unsigned char *l_652 = &g_160[4];
                unsigned short *l_655 = &g_275;
                unsigned short *l_656 = &g_549;
                unsigned short l_657 = 0xCA49L;
                const int **l_659 = (void*)0;
                const int **l_660 = (void*)0;
                const int **l_661 = &l_620[1];
                int i;
                for (p_15 = 0; (p_15 <= (-9)); p_15 = safe_sub_func_int32_t_s_s(p_15, 7))
                {
                    unsigned char *l_604[6][6][3] = {{{&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}}, {{&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}}, {{&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}}, {{&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}}, {{&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}}, {{&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}, {&g_423, (void*)0, &g_423}}};
                    char **l_609 = &l_608;
                    char *l_611 = (void*)0;
                    char **l_612 = &g_121;
                    int l_615[10][10] = {{9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}, {9L, 6L, 0xF8B0B803L, 1L, 0x086DE3C4L, 1L, (-6L), 1L, 0xF8B0B803L, 1L}};
                    short *l_616[10][6][2] = {{{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}, {{&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}, {&g_279, &g_22[2]}}};
                    int l_617[2][1][6] = {{{0x87FBA505L, (-1L), 0L, 0L, (-1L), 0x87FBA505L}}, {{0x87FBA505L, (-1L), 0L, 0L, (-1L), 0x87FBA505L}}};
                    int l_621 = (-2L);
                    int i, j, k;
                    for (g_112 = 6; (g_112 >= 0); g_112 -= 1)
                    {
                        int ***l_592[2][10][5] = {{{&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}}, {{&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}, {&g_193, &l_591, (void*)0, (void*)0, &g_193}}};
                        const int **l_595 = &g_594;
                        int i, j, k;
                        (*l_561) = (safe_add_func_int8_t_s_s((0x0BD806CBL || (safe_unary_minus_func_int16_t_s(func_60(((*g_193) = &p_11), p_14)))), (l_590 != (l_593 = l_591))));
                        (*l_595) = g_594;
                    }
                }

                ;
                g_639 = (func_60(l_622, l_623[2]) >= (p_12 > ((safe_add_func_uint16_t_u_u(g_484, (((g_79 <= (safe_div_func_int16_t_s_s(((((0UL | (safe_add_func_uint32_t_u_u(((*l_633) = p_12), ((((*l_622) = (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((~((((p_13 > 0xC3L) | 0x84L) & 0x4C7AC32EL) ^ (-6L))), (-2L))), g_336[1]))) > p_14) || 0xC4E2L)))) && 255UL) == p_14) || (*l_582)), 1UL))) || l_638[1]) != 0x34L))) > (-3L))));
                l_658 = ((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_uint32_t_u((~(safe_sub_func_uint16_t_u_u(((*l_656) = ((safe_lshift_func_uint16_t_u_s(p_14, (func_60(l_619, (safe_mod_func_uint8_t_u_u((~((*l_652) = (safe_div_func_uint16_t_u_u(l_651, g_56)))), p_11))) > (safe_sub_func_int32_t_s_s((((*l_655) = p_13) > (l_619 == (void*)0)), 0x3DF54FF3L))))) < g_549)), g_22[2]))))) <= l_657), 15)) & p_14);
                (*l_661) = &l_613;


            }

            ;

        }
        if (p_13)
        {
            int *l_666 = &g_639;
            unsigned **l_669 = (void*)0;
            (*l_582) = p_11;
            (*l_561) = (func_60((*l_593), (safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(0x3F9D9CB6L, func_60(l_666, g_22[1]))), func_60(((*g_193) = &p_11), (g_160[7] = g_160[4]))))) && 0x8EL);

            ;
            for (g_56 = 0; (g_56 >= 22); ++g_56)
            {
                unsigned **l_670 = (void*)0;
                int **l_675 = &g_412[3][0][4];
                int **l_677 = &g_412[3][0][4];
                l_670 = l_669;
                for (g_275 = 0; (g_275 < 16); g_275 = safe_add_func_int32_t_s_s(g_275, 7))
                {
                    int *l_678 = &g_639;
                    for (g_450 = 0; (g_450 <= 18); ++g_450)
                    {
                        int ***l_676 = &l_675;
                        l_677 = ((*l_676) = l_675);
                        if (p_12)
                            break;
                    }
                    l_678 = (*l_675);

                    ;
                }
                (*g_55) = (*l_666);
            }
        }
        else
        {
            unsigned char l_681[6] = {0UL, 252UL, 0UL, 252UL, 0UL, 252UL};
            const int **l_704[4] = {&g_594, &g_594, &g_594, &g_594};
            const int ***l_703 = &l_704[0];
            unsigned char *l_705 = &g_423;
            int i;
            (*l_622) = (safe_div_func_int8_t_s_s(l_681[3], p_15));
            for (l_577 = 24; (l_577 >= (-2)); l_577 = safe_sub_func_uint32_t_u_u(l_577, 4))
            {
                const unsigned char l_695 = 252UL;
                for (l_571 = 0; (l_571 > 46); ++l_571)
                {
                    int *l_689 = &l_566;
                    if (l_566)
                    {
                        int *l_686 = &l_566;
                        unsigned *l_691 = &g_484;
                        unsigned **l_690 = &l_691;
                        (*l_593) = l_686;
                        (*l_686) = (((g_155 > (g_336[1] > func_60(l_689, func_60(l_689, (((*l_690) = &g_484) == &g_484))))) ^ (safe_mod_func_uint32_t_u_u((*l_689), l_681[3]))) | 0x93L);
                        (*l_593) = (void*)0;
                        if ((*l_689))
                            continue;
                    }
                    else
                    {
                        return p_15;



                    }
                }
                (*l_622) = l_694;
                (*l_590) = &p_11;
                if (l_695)
                    continue;
            }
            (*l_582) = func_60(((*g_193) = (*l_590)), (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((-1L) > (safe_add_func_int16_t_s_s(1L, 1UL))), l_702)), (((void*)0 == l_703) | ((((func_60((*l_590), (((*l_705) = g_336[1]) == p_14)) == (-6L)) == (***l_703)) < p_14) > p_11)))));

            ;
            (*l_582) = l_571;
        }

        ;
    }



    for (g_423 = 0; (g_423 <= 8); g_423 += 1)
    {
        int l_709 = 0L;
        int *l_715 = &l_566;
        int **l_807 = &g_459;
        int l_817 = 0xCEA69A1FL;
        for (g_279 = 5; (g_279 >= 0); g_279 -= 1)
        {
            char ***l_706 = (void*)0;
            char ***l_707 = (void*)0;
            char ***l_708 = &g_120[5];
            for (l_553 = 6; (l_553 >= 3); l_553 -= 1)
            {
                int i;
                if (g_160[(g_279 + 1)])
                    break;
            }
            (*l_708) = &g_121;
        }
        if (l_709)
            continue;
    }
    return p_13;



}







static short func_33(int p_34, const int p_35, unsigned short p_36, unsigned char p_37)
{
    int l_388 = 0xA428A5F0L;
    int l_397 = (-3L);
    int *l_461 = &g_56;
    unsigned l_492 = 0xC40D32A6L;
    unsigned char l_504 = 0x2BL;
    int *l_519[3];
    int i;
    for (i = 0; i < 3; i++)
        l_519[i] = &l_397;
    for (g_113 = 0; (g_113 < 0); g_113 = safe_add_func_int8_t_s_s(g_113, 1))
    {
        unsigned l_389[5];
        unsigned char l_396 = 0xD3L;
        unsigned short *l_398 = &g_79;
        int *l_399 = (void*)0;
        int *l_400 = &g_112;
        int l_401 = (-5L);
        short l_413 = 3L;
        int l_460 = 0x3411C7EEL;
        char l_536 = (-1L);
        int l_537 = 0xE895B413L;
        int i;
        for (i = 0; i < 5; i++)
            l_389[i] = 0x48D14C74L;
        if (func_41(((*l_400) = (safe_add_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(l_388, func_41(l_388, l_389[3], (safe_add_func_uint16_t_u_u(((*l_398) = (safe_div_func_int32_t_s_s(l_389[4], (l_397 = ((((safe_div_func_int16_t_s_s(l_389[0], (l_388 ^ l_396))) > (p_37 & l_388)) || l_388) ^ l_396))))), 0x260CL)), p_37))) < 0xDEE0L) == l_388) != p_36), 0x9B36L))), p_36, l_388, l_401))
        {
            int *l_406 = (void*)0;
            for (l_396 = 0; l_396 < 9; l_396 += 1)
            {
                g_366[l_396] = &g_166;
            }
            (**g_193) = (safe_mul_func_int8_t_s_s(8L, p_37));
            (*g_55) = (g_155 >= (safe_add_func_int16_t_s_s(func_60(l_399, g_166), func_60(l_406, (safe_rshift_func_int8_t_s_u((l_388 && func_60(l_406, p_37)), 5))))));
        }
        else
        {
            char l_430 = 5L;
            char l_431 = 0x38L;
            int l_446 = (-7L);
            for (l_388 = (-14); (l_388 < (-22)); l_388 = safe_sub_func_uint16_t_u_u(l_388, 1))
            {
                int *l_411[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_411[i] = (void*)0;
                (*g_193) = l_411[4];

                ;
                (*g_193) = g_412[3][0][4];


                if (l_413)
                {
                    int **l_428 = &g_412[3][0][4];
                    int **l_432 = &l_400;
                    int l_451 = 0x3204EFEEL;
                    int *l_452[10][8] = {{&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}, {&l_446, &l_397, (void*)0, &l_451, &l_451, (void*)0, &l_397, &l_451}};
                    int i, j;
                    if (((void*)0 != &g_160[0]))
                    {
                        int ***l_429 = &g_193;
                        int ***l_433 = &l_432;
                        l_431 = (l_430 = (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0xEA14L, p_36)), p_34)));
                        (*l_433) = l_432;
                        (*l_428) = (void*)0;
                    }
                    else
                    {
                        l_397 = (-3L);
                    }
                    (*l_428) = (*l_428);
                    for (p_37 = 1; (p_37 == 38); p_37 = safe_add_func_int8_t_s_s(p_37, 6))
                    {
                        char *l_444 = (void*)0;
                        char *l_445[9] = {(void*)0, &l_431, (void*)0, &l_431, (void*)0, &l_431, (void*)0, &l_431, (void*)0};
                        unsigned *l_447 = &g_166;
                        unsigned *l_448 = (void*)0;
                        unsigned *l_449 = &g_450;
                        int i;
                        l_451 = (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((255UL < (((g_56 < p_35) <= ((*l_449) = ((!((func_60(l_399, ((func_60((*g_193), (4UL && (safe_div_func_int32_t_s_s(0x612B1020L, ((*l_449) = ((*l_447) = (safe_rshift_func_uint8_t_u_s(((l_446 = (p_34 < 0xDBL)) <= p_35), p_34)))))))) >= g_279) || 1L)) >= 0UL) != p_37)) > 0x67EEL))) ^ 0UL)), p_35)), 0x02L)) == 1L) == p_35);
                    }
                    (*g_193) = l_452[8][3];

                    ;
                }
                else
                {
                    const char l_469 = 0x27L;
                    char *l_482 = &l_430;
                    unsigned *l_483 = &g_484;
                    unsigned short *l_485 = &g_275;
                    if (p_34)
                    {
                        l_460 = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(0xC8L, (((void*)0 == &l_397) & 0x81L))) <= ((void*)0 != g_457)), ((func_41(p_35, p_35, g_22[2], p_35) ^ 65532UL) ^ 6L)));

                        ;
                        l_461 = ((*g_193) = l_411[3]);

                        ;
                        ;
                        return p_34;
                    }
                    else
                    {
                        (*g_193) = (*g_193);
                        (*g_193) = (*g_193);
                    }
                    for (g_112 = 24; (g_112 > (-1)); g_112 = safe_sub_func_int8_t_s_s(g_112, 9))
                    {
                        (*g_193) = &l_446;

                        ;
                        if (p_37)
                            break;
                        if (p_35)
                            continue;
                        l_460 = 1L;
                    }


                    for (l_431 = (-2); (l_431 != 11); ++l_431)
                    {
                        char l_466[2][2][6] = {{{0xA3L, 1L, 1L, 1L, 0xA3L, (-1L)}, {0xA3L, 1L, 1L, 1L, 0xA3L, (-1L)}}, {{0xA3L, 1L, 1L, 1L, 0xA3L, (-1L)}, {0xA3L, 1L, 1L, 1L, 0xA3L, (-1L)}}};
                        int i, j, k;
                        (*l_461) = (l_466[1][1][5] | func_60(&l_397, g_160[4]));
                    }
                    (*l_461) = ((0xCD90L ^ (safe_rshift_func_uint8_t_u_u(l_469, 6))) && ((*l_485) = ((*l_398) = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(func_41(l_389[3], ((*l_483) = (safe_rshift_func_int8_t_s_s(l_460, ((*l_482) = func_41(func_41(((*l_400) = (safe_sub_func_uint16_t_u_u((~(func_60((*g_193), p_34) ^ p_37)), (safe_mod_func_uint16_t_u_u((p_37 ^ l_396), p_36))))), g_336[2], g_336[1], l_430), p_35, l_469, p_34))))), p_36, p_36), g_22[2])) < 4294967291UL), g_160[5])), g_275)))));
                }


                l_411[3] = l_411[4];
            }


            (*l_461) = p_35;
            if (p_37)
                continue;

        }
        if ((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_389[3], 1)), 0)) <= ((*l_461) & l_492)), func_60(&l_397, l_396))))
        {
            int *l_499 = &l_460;
            int *l_500 = &l_397;
            (*g_193) = &l_460;

            ;
            for (l_460 = (-3); (l_460 == (-20)); l_460--)
            {
                short l_508 = (-1L);
                int *l_524 = &l_397;
                char *l_535 = (void*)0;
            }
        }
        else
        {
            int *l_540 = &l_397;
            unsigned char *l_547 = &l_396;
            short *l_548 = &g_336[1];
            (*g_193) = &l_460;

            ;
            (*l_461) = ((func_60(l_540, p_37) ^ (**g_193)) ^ (safe_sub_func_int32_t_s_s(func_60(&l_397, p_35), (safe_mul_func_int16_t_s_s(((*l_548) = (safe_mod_func_uint32_t_u_u((((*l_547) = 0UL) & p_35), p_35))), p_35)))));
        }

        ;
    }


    (*g_193) = &l_397;

    ;
    return p_35;


}







static int func_38(char p_39, int p_40)
{
    int l_368 = 0x315DB4A1L;
    int *l_372 = &g_56;
    unsigned l_377 = 4294967295UL;
    unsigned short l_379 = 0x6521L;
    short *l_381 = &g_336[1];
lbl_380:
    for (g_279 = 0; (g_279 <= 3); g_279 += 1)
    {
        int i;
        return g_336[g_279];


    }
    if (func_50(l_368, l_368))
    {
        unsigned char l_371 = 0x01L;
        p_40 = (p_40 & ((safe_add_func_uint32_t_u_u(l_371, (p_40 == g_160[4]))) ^ func_60(l_372, (*l_372))));
    }
    else
    {
        unsigned l_373 = 4294967292UL;
        int **l_376 = (void*)0;
        unsigned char *l_378[10] = {&g_160[2], &g_160[2], (void*)0, &g_160[2], &g_160[2], (void*)0, &g_160[2], &g_160[2], (void*)0, &g_160[2]};
        int i;
        (*l_372) = l_373;
        for (g_155 = 0; g_155 < 4; g_155 += 1)
        {
            g_336[g_155] = (-1L);
        }
        (*l_372) = (safe_add_func_uint16_t_u_u(func_60(&p_40, (l_377 = (*l_372))), ((p_40 < p_39) & (func_60(((*g_193) = &p_40), (l_379 = func_60(&p_40, g_22[2]))) == g_336[3]))));

        ;
        if (g_79)
            goto lbl_380;
    }


    (*l_372) = (func_60(l_372, p_40) != ((*l_381) = (g_279 = p_40)));
    (*l_372) = ((void*)0 != &g_179);
    return p_39;


}







static short func_41(int p_42, unsigned p_43, unsigned char p_44, unsigned char p_45)
{
    int *l_359 = &g_56;
    int **l_360 = &l_359;
    unsigned short l_361 = 0x321CL;
    char *l_362 = &g_155;
    unsigned **l_363 = &g_165;
    unsigned **l_364 = &g_165;
    unsigned **l_365[2];
    int i;
    for (i = 0; i < 2; i++)
        l_365[i] = &g_165;
    (*l_360) = ((*g_193) = l_359);

    ;
    (*l_359) = (((*l_362) = l_361) ^ ((l_359 == (g_366[8] = l_359)) < (*l_359)));
    return g_279;
}







static char func_50(char p_51, char p_52)
{
    int **l_57 = &g_55;
    const char *l_225 = (void*)0;
    char *l_226 = &g_155;
    char l_227[6][1] = {{0xC1L}, {0xC1L}, {0xC1L}, {0xC1L}, {0xC1L}, {0xC1L}};
    int *l_341 = &g_56;
    unsigned char *l_353 = &g_160[5];
    int i, j;
    (*l_57) = g_55;
    for (p_52 = (-3); (p_52 > 1); p_52 = safe_add_func_int32_t_s_s(p_52, 2))
    {
        int **l_66 = &g_55;
        short *l_180 = &g_113;
        int l_181 = 0x1F4BA9CCL;
        if ((((4294967295UL & ((((void*)0 == &g_55) < ((*l_180) = func_60(((*l_57) = func_63(l_66, l_66)), p_52))) == g_22[1])) == l_181) < g_166))
        {
            (*l_66) = func_63(l_57, l_66);
        }
        else
        {
            int *l_184 = &g_56;
            for (g_112 = 0; (g_112 < (-9)); g_112 = safe_sub_func_int32_t_s_s(g_112, 9))
            {
                int *l_185 = &g_56;
                l_185 = l_184;
            }
            if ((*g_55))
                break;
            (*l_66) = &g_56;
        }

        ;
    }
    if ((*g_55))
    {
        int ***l_194 = &g_193;
        unsigned char l_228[8][4] = {{5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}, {5UL, 0xA2L, 0x52L, 0xA2L}};
        char ***l_248 = &g_120[1];
        int l_276[9] = {(-1L), (-1L), 0L, (-1L), (-1L), 0L, (-1L), (-1L), 0L};
        int *l_355 = (void*)0;
        int i, j;
        if ((**l_57))
        {
            char l_201 = 0x72L;
            unsigned l_219 = 6UL;
            unsigned *l_220 = &l_219;
            int l_235 = 0L;
            for (g_56 = 0; (g_56 <= 15); g_56 = safe_add_func_int8_t_s_s(g_56, 4))
            {
                (*l_57) = &g_56;

                ;
                if (p_51)
                    continue;
            }
            for (p_51 = 0; (p_51 == (-24)); p_51 = safe_sub_func_uint8_t_u_u(p_51, 5))
            {
                unsigned l_195 = 4294967295UL;
                short *l_196 = &g_113;
                int *l_210 = &g_56;
                if ((((safe_mod_func_int32_t_s_s((p_52 < (g_192[4] != l_194)), l_195)) ^ ((*l_196) = p_52)) & ((safe_div_func_uint32_t_u_u(4294967291UL, ((-1L) & (safe_add_func_uint16_t_u_u((***l_194), g_112))))) | l_201)))
                {
                    int **l_211 = &l_210;
                    (***l_194) = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(0xB977L, (**l_57))) && l_195), 248UL)), func_60(l_210, g_112))), l_201));
                    (*l_57) = func_63((*l_194), l_211);

                    ;
                }
                else
                {
                    int **l_212[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_212[i][j] = (void*)0;
                    }
                    (**l_194) = (*g_193);
                }
            }
            if ((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(0x83F6A3D2L, ((*l_220) = ((***l_194) = ((***l_194) ^ (l_219 > (&p_52 != &l_201))))))) || p_51), (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_225 != l_226), l_227[4][0])), l_228[0][2])))), p_52)))
            {
                unsigned l_236 = 0UL;
                (*l_57) = (void*)0;

                ;
                l_235 = (safe_sub_func_uint32_t_u_u(l_201, (safe_lshift_func_int16_t_s_u(g_112, (g_79 = (safe_mul_func_int16_t_s_s(0x4BE7L, g_160[3])))))));
                (*g_193) = (void*)0;
                return l_236;
            }
            else
            {
                int l_237 = 0x27156C71L;
                return l_237;
            }
        }
        else
        {
            int l_257 = 0x3807ABEAL;
            int l_280[10][2][9] = {{{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}, {{0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}, {0x813B9690L, (-1L), 0x4D1DA3ECL, (-1L), 0x813B9690L, 0x6C923159L, 0x813B9690L, (-1L), 0x4D1DA3ECL}}};
            unsigned **l_351 = &g_165;
            unsigned char *l_352 = &g_160[4];
            int i, j, k;
            for (p_51 = 0; (p_51 <= 6); p_51 += 1)
            {
                char **l_286 = &g_121;
                int **l_287[3][2][8] = {{{&g_55, (void*)0, (void*)0, (void*)0, &g_55, (void*)0, (void*)0, (void*)0}, {&g_55, (void*)0, (void*)0, (void*)0, &g_55, (void*)0, (void*)0, (void*)0}}, {{&g_55, (void*)0, (void*)0, (void*)0, &g_55, (void*)0, (void*)0, (void*)0}, {&g_55, (void*)0, (void*)0, (void*)0, &g_55, (void*)0, (void*)0, (void*)0}}, {{&g_55, (void*)0, (void*)0, (void*)0, &g_55, (void*)0, (void*)0, (void*)0}, {&g_55, (void*)0, (void*)0, (void*)0, &g_55, (void*)0, (void*)0, (void*)0}}};
                int i, j, k;
                (*g_55) = (-1L);
                if (((**g_193) = 0xD0CB17AFL))
                {
                    unsigned l_273 = 1UL;
                    unsigned short *l_274[2];
                    short *l_277 = (void*)0;
                    short *l_278[6][7][6] = {{{&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}}, {{&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}}, {{&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}}, {{&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}}, {{&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}}, {{&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}, {&g_22[2], (void*)0, &g_279, &g_279, &g_22[1], (void*)0}}};
                    int *l_281 = &l_257;
                    unsigned * const *l_282[1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_274[i] = &g_275;
                    for (i = 0; i < 1; i++)
                        l_282[i] = &g_165;
                    for (g_113 = (-13); (g_113 >= 28); ++g_113)
                    {
                        (*g_55) = (safe_sub_func_int16_t_s_s(func_60((*l_57), (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((~((*l_226) = p_51)) > (***l_194)), 5)), (((((void*)0 != l_248) < (safe_add_func_int16_t_s_s(((*g_55) || p_52), (0x2BE6L > (safe_div_func_int8_t_s_s((g_22[3] != 255UL), 0xACL)))))) ^ 0x3239L) < (-9L)))), g_160[8]))), 0x8359L));
                    }
                    (*l_281) = (safe_div_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s(g_22[3], 9)) <= l_257) >= (safe_mod_func_int16_t_s_s(((***l_194) = (l_280[1][1][8] = (((((g_113 = func_60((*l_57), (**l_57))) < func_60((*l_57), (safe_add_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(((+(g_79 ^ (safe_div_func_uint32_t_u_u(((((l_276[0] = (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(g_22[1], func_60((*g_193), p_51))), 3)), l_273)), 0))) <= 1UL) < (***l_194)) < g_155), 4294967292UL)))) && g_22[2]))), p_52)))) > (**g_193)) <= p_52) | p_51))), 0x96B6L))) ^ 0x1EBF44B9L), 0xF2L));
                    (**g_193) = (l_282[0] != &g_165);
                }
                else
                {
                    int *l_283 = (void*)0;
                    (*g_193) = &l_280[7][1][6];

                    ;
                    if ((**g_193))
                    {
                        (*g_193) = l_283;

                        ;
                        return p_51;
                    }
                    else
                    {
                        (**l_194) = l_283;

                        ;
                        (*l_57) = (void*)0;
                    }

                    ;
                    for (g_166 = 0; (g_166 >= 22); g_166++)
                    {
                        int *l_288[6] = {&l_280[3][1][2], &l_280[1][1][8], &l_280[3][1][2], &l_280[1][1][8], &l_280[3][1][2], &l_280[1][1][8]};
                        int i;
                        (*l_248) = l_286;
                        (*g_193) = l_288[3];

                        ;
                    }

                    ;
                }


                return p_51;


            }
            (***l_194) = (***l_194);
            if ((func_60(func_63(l_57, (*l_194)), p_51) <= 1L))
            {
                for (g_155 = 8; (g_155 >= 3); g_155 -= 1)
                {
                    unsigned short *l_293 = (void*)0;
                    unsigned short *l_294 = &g_275;
                    int l_295 = (-5L);
                    int i;
                    l_295 = (g_160[g_155] && (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_160[g_155], ((*l_294) = 0x07D8L))), g_160[0])));
                }
            }
            else
            {
                int *l_296 = &l_280[5][1][4];
                int *l_347 = &l_276[0];
                (**l_194) = l_296;

                ;
                if ((safe_lshift_func_uint16_t_u_u(func_60((**l_194), g_113), (safe_rshift_func_int8_t_s_u(p_51, (***l_194))))))
                {
                    short l_313 = 0xF0FAL;
                    short *l_322 = &g_113;
                    unsigned char *l_335[3];
                    unsigned l_344 = 0x280DFA0FL;
                    int *l_345 = &g_56;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_335[i] = &g_160[4];
                    (**l_57) = (safe_rshift_func_int16_t_s_s(((*l_322) = (((((safe_rshift_func_int8_t_s_u((((**l_57) | (((safe_add_func_int16_t_s_s((-1L), (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(l_313, func_60((*g_193), (p_52 | (safe_mul_func_uint16_t_u_u(((func_60((**l_194), (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(func_60(l_296, (l_313 <= (safe_lshift_func_uint16_t_u_s(((***l_194) ^ g_112), 3)))), (**l_57))), 1))) | (**l_57)) > 0x04L), 0x179FL)))))) & p_52) == (**l_57)), p_52)), (***l_194))))) <= l_257) != 9UL)) && g_275), l_257)) <= (*l_296)) != 0x81AAL) || 0x84FDD125L) == 2L)), 10));
                    if (l_257)
                        goto lbl_346;
                    if ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((l_280[8][0][5] = ((safe_div_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(func_60(((*g_193) = (void*)0), (g_336[1] = (g_160[0] = ((safe_lshift_func_int8_t_s_u(p_51, 6)) > l_313)))), (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((0UL > func_60(l_341, p_52)), ((safe_mod_func_int8_t_s_s((l_313 & (*l_341)), 250UL)) < g_113))), (*l_296))))) < p_51), l_280[1][1][8])) != p_52)) > 1L), g_79)) == l_344), 6)) <= p_51), g_79)))
                    {
                        (*l_341) = (p_51 & p_51);
                        (*l_57) = l_345;

                        ;
                        (*l_345) = 0xABC0FDD5L;
                        return p_51;
                    }
                    else
                    {
                        (**l_194) = (*l_57);
lbl_346:
                        (*l_296) = p_52;
                        (*g_193) = l_347;

                        ;
                        return (*l_341);


                    }
                }
                else
                {
                    if ((safe_rshift_func_uint16_t_u_s((**l_57), l_257)))
                    {
                        int *l_350 = (void*)0;
                        l_350 = l_350;
                        (*l_57) = (**l_194);
                        (*l_57) = l_350;

                        ;
                    }
                    else
                    {
                        (*l_57) = &l_257;

                        ;
                    }

                    ;
                    if (((&g_165 != l_351) & ((*l_296) | l_280[6][1][8])))
                    {
                        unsigned char *l_354[4][8][8] = {{{&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}}, {{&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}}, {{&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}}, {{&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}, {&l_228[0][2], &l_228[0][2], &l_228[0][0], &l_228[5][2], &l_228[0][2], &l_228[4][0], &l_228[5][2], &g_160[5]}}};
                        int i, j, k;
                        (*l_347) = ((l_353 = l_352) == l_354[3][1][3]);
                    }
                    else
                    {
                        return p_51;


                    }
                }

                ;
            }


        }


        (*g_193) = l_355;

        ;
    }
    else
    {
        for (g_79 = 0; (g_79 <= 3); g_79 += 1)
        {
            int *l_356 = (void*)0;
            (*l_57) = l_356;

            ;
            for (g_279 = 0; (g_279 <= 3); g_279 += 1)
            {
                int i;
                return g_336[g_279];
            }
        }


    }


    return (*l_341);
}







static short func_60(int * p_61, unsigned char p_62)
{
    return g_112;
}







static int * func_63(int ** p_64, int ** p_65)
{
    int l_69 = 0xF75D5927L;
    char l_74[10] = {1L, 1L, 0xC8L, 1L, 1L, 0xC8L, 1L, 1L, 0xC8L, 1L};
    char *l_75 = &l_74[8];
    unsigned short *l_78[6][2] = {{&g_79, &g_79}, {&g_79, &g_79}, {&g_79, &g_79}, {&g_79, &g_79}, {&g_79, &g_79}, {&g_79, &g_79}};
    int l_80 = 0x86D5672FL;
    unsigned l_81 = 4294967295UL;
    int l_84[7][8] = {{(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}, {(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}, {(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}, {(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}, {(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}, {(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}, {(-3L), 0x0C687044L, 0xC4096A60L, (-9L), 0x3003F861L, (-1L), 0x3003F861L, (-9L)}};
    int l_90 = 0L;
    int *l_102 = &l_84[6][6];
    int *l_114 = &l_84[6][5];
    char *l_153 = (void*)0;
    char *l_154 = &g_155;
    int *l_156 = (void*)0;
    int *l_157[7];
    unsigned *l_164 = &l_81;
    unsigned **l_163[10] = {&l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164};
    unsigned *l_167 = &g_166;
    int i, j;
    for (i = 0; i < 7; i++)
        l_157[i] = (void*)0;
    if (((safe_mod_func_int16_t_s_s(l_69, (+((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(g_22[0], l_69)), (((*l_75) = l_74[7]) | (safe_lshift_func_uint16_t_u_s((l_80 = g_56), 14))))) > ((l_81 & ((*p_65) != &l_69)) <= (((l_84[3][0] = (safe_div_func_int32_t_s_s(((**p_64) != 0x9BED5D29L), 0x4005DEF9L))) ^ l_81) || 0x2A5EL)))))) >= 2UL))
    {
        short l_89 = 0x9948L;
        int l_93 = (-10L);
        for (g_79 = 0; (g_79 == 49); ++g_79)
        {
            int *l_100[7] = {(void*)0, (void*)0, &l_93, (void*)0, (void*)0, &l_93, (void*)0};
            int i;
            (**p_65) = (((l_89 != g_79) && 0UL) > ((g_56 <= (g_22[2] & (l_90 = g_22[2]))) > 255UL));
            for (l_90 = 3; (l_90 <= 9); l_90 += 1)
            {
                const int *l_95 = &l_84[3][0];
                const int **l_96 = &l_95;
                const int *l_98 = (void*)0;
                const int **l_97 = &l_98;
                int i;
                for (l_81 = 0; (l_81 <= 9); l_81 += 1)
                {
                    int *l_94 = &l_69;
                    l_93 = (~((**p_64) = (safe_lshift_func_uint16_t_u_s(8UL, 5))));
                    return &g_56;


                }
                (**p_65) = l_74[l_90];
                (*l_97) = ((*l_96) = l_95);

                ;
            }
            for (l_80 = 0; (l_80 <= 6); l_80 += 1)
            {
                int *l_99 = &l_84[2][6];
                return &g_56;


            }
            l_100[0] = ((*p_64) = (*p_65));


        }
    }
    else
    {
        int *l_101[6];
        short *l_131 = (void*)0;
        short *l_132[5][7] = {{&g_22[2], &g_113, &g_22[2], (void*)0, &g_113, &g_113, &g_113}, {&g_22[2], &g_113, &g_22[2], (void*)0, &g_113, &g_113, &g_113}, {&g_22[2], &g_113, &g_22[2], (void*)0, &g_113, &g_113, &g_113}, {&g_22[2], &g_113, &g_22[2], (void*)0, &g_113, &g_113, &g_113}, {&g_22[2], &g_113, &g_22[2], (void*)0, &g_113, &g_113, &g_113}};
        const int l_140[8] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
        unsigned *l_141 = &l_81;
        int i, j;
        for (i = 0; i < 6; i++)
            l_101[i] = &l_80;
lbl_115:
        l_102 = l_101[5];

        ;
lbl_144:
        for (g_56 = 0; (g_56 >= (-16)); g_56 = safe_sub_func_int16_t_s_s(g_56, 1))
        {
            int **l_111 = (void*)0;
            if ((safe_add_func_int32_t_s_s((g_113 = (!((l_69 = ((*l_102) = (**p_64))) ^ (g_112 = (safe_rshift_func_uint16_t_u_s((((safe_div_func_uint8_t_u_u(((g_22[2] | (g_79 = (0x26432604L > ((void*)0 != l_111)))) ^ 7L), l_74[7])) && ((*p_64) != (*p_65))) || g_56), g_22[2])))))), g_56)))
            {
                return &g_56;



            }
            else
            {
                int *l_126[9] = {&g_56, &l_84[3][0], &g_56, &l_84[3][0], &g_56, &l_84[3][0], &g_56, &l_84[3][0], &g_56};
                int i;
                if (l_69)
                    goto lbl_115;
                for (g_113 = 0; (g_113 <= 5); g_113 = safe_add_func_uint32_t_u_u(g_113, 9))
                {
                    char **l_123[10] = {(void*)0, (void*)0, &l_75, (void*)0, (void*)0, &l_75, (void*)0, (void*)0, &l_75, (void*)0};
                    int i;
                    for (g_112 = 0; (g_112 <= 6); ++g_112)
                    {
                        char ***l_122 = (void*)0;
                        l_123[2] = g_120[6];
                    }


                    for (l_69 = 0; (l_69 > 15); ++l_69)
                    {
                        (*p_64) = (void*)0;

                        ;
                        (*l_102) = g_56;
                    }


                    (*p_64) = l_126[5];

                    ;
                }
            }
        }
        g_56 = ((safe_rshift_func_int8_t_s_u(((((*l_102) = (safe_lshift_func_uint16_t_u_s(((*l_114) = (*l_102)), 5))) || g_22[2]) | 0x34L), 6)) >= (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(g_22[2])), ((*l_141) = (safe_div_func_int8_t_s_s((1L < 0x319573BDL), l_140[6]))))), (safe_sub_func_int32_t_s_s(((((void*)0 != l_78[4][1]) == g_113) ^ g_79), g_113)))));
        if (g_79)
            goto lbl_144;
    }


    ;
    (**p_64) = (safe_sub_func_uint8_t_u_u((*l_114), ((safe_sub_func_int8_t_s_s(((*l_154) = ((*l_75) = ((~(safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((-3L), (3L <= 0x67F6E1A6L))), 6))) <= 0xDE101195L))), (((void*)0 != &g_55) != 0x4DDAL))) <= (*l_114))));
    g_160[4] = ((*l_114) = ((((*l_114) <= (*l_114)) & (g_56 = (*g_55))) == (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint16_t_u((g_22[2] & (&g_22[0] == (void*)0))))))));
    if (((**p_65) = (((*p_64) != (void*)0) == (safe_add_func_int8_t_s_s(((g_165 = &l_81) == l_167), (*l_114))))))
    {
        short l_168 = (-10L);
        l_168 = ((*l_114) = (g_112 && 0UL));
    }
    else
    {
        int l_173[4] = {0xBB4DD17DL, 0x56D7E5A2L, 0xBB4DD17DL, 0x56D7E5A2L};
        int **l_177 = &l_157[4];
        int ***l_176 = &l_177;
        unsigned ***l_178[5][1];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_178[i][j] = &l_163[0];
        }
        (**p_65) = ((safe_div_func_uint16_t_u_u((*l_102), (safe_mul_func_int8_t_s_s((*l_102), (*l_102))))) >= (((*l_154) = l_173[1]) | ((1UL ^ l_173[0]) == (safe_lshift_func_uint16_t_u_u(l_173[1], 5)))));
        (**p_65) = ((+0UL) != (p_65 != ((*l_176) = &g_55)));

        ;
        (*p_64) = (*p_64);
        g_179 = &l_164;

        ;
    }

    ;

    return &g_56;





}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_160[i], "g_160[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_336[i], "g_336[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
