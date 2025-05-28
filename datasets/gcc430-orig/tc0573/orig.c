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



static unsigned char g_2[10] = {1UL, 1UL, 0x6AL, 1UL, 1UL, 0x6AL, 1UL, 1UL, 0x6AL, 1UL};
static int g_3 = 0x1F2C29A3L;
static int g_49 = 0x589AFCA8L;
static int g_70 = (-1L);
static int *g_69 = &g_70;
static int g_149[4] = {0xEAE24F21L, 0xEAE24F21L, 0xEAE24F21L, 0xEAE24F21L};
static unsigned char g_176 = 0xBEL;
static int g_177 = 0x9E02A2B8L;
static int **g_253 = (void*)0;
static int ***g_252 = &g_253;
static int g_324 = (-4L);
static int g_341[2] = {(-1L), (-1L)};
static unsigned short g_409 = 0x323DL;
static unsigned char g_537 = 246UL;
static const int g_625 = (-1L);
static unsigned g_737 = 0xFBA2E139L;
static int **g_831[8] = {&g_69, &g_69, &g_69, &g_69, &g_69, &g_69, &g_69, &g_69};
static int *g_933 = (void*)0;
static int g_1195 = 0x2BAE0EF0L;
static int g_1196 = (-4L);
static int g_1236 = 0L;
static const int g_1248[6] = {(-1L), 1L, (-1L), 1L, (-1L), 1L};



static unsigned char func_1(void);
static int func_4(unsigned short p_5, char p_6, const unsigned short p_7, unsigned char p_8);
static int func_12(unsigned short p_13, unsigned char p_14);
static char func_17(int p_18);
static unsigned char func_27(unsigned p_28);
static unsigned func_31(int p_32, unsigned p_33, int p_34, int p_35);
static unsigned func_40(unsigned p_41, int p_42);
static unsigned func_43(short p_44, unsigned short p_45, const unsigned char p_46, unsigned p_47);
static int * func_50(char p_51, short p_52, unsigned char p_53);
static unsigned func_54(short p_55, int * p_56);
static unsigned char func_1(void)
{
    unsigned short l_9 = 65535UL;
    const int *l_1129 = (void*)0;
    const int **l_1128 = &l_1129;
    int l_1172 = 0x96870A40L;
    short l_1225 = (-1L);
    char l_1231[2][9] = {{0x6AL, 0x6AL, 0x4AL, 0x6AL, 0x6AL, 0x4AL, 0x6AL, 0x6AL, 0x4AL}, {0x6AL, 0x6AL, 0x4AL, 0x6AL, 0x6AL, 0x4AL, 0x6AL, 0x6AL, 0x4AL}};
    unsigned short l_1241 = 0xC583L;
    unsigned char l_1249 = 255UL;
    int i, j;
    for (g_3 = 9; (g_3 >= 3); g_3 -= 1)
    {
        const unsigned char l_1127 = 255UL;
        int *l_1157 = &g_324;
        int *l_1173 = &l_1172;
        if (func_4(l_9, g_3, g_3, g_2[4]))
        {
            char l_1126 = 6L;
            int *l_1136 = (void*)0;
            int *l_1160 = &g_70;
            int l_1171 = 0x94B0248FL;
            if ((l_1126 < l_1127))
            {
                short l_1137[10][3] = {{(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}, {(-3L), (-1L), 0xB826L}};
                int l_1156 = 0L;
                int i, j;
                if (((l_1128 == (*g_252)) == (*g_69)))
                {
                    int * const l_1138 = &g_3;
                    int **l_1139 = (void*)0;
                    int **l_1140 = (void*)0;
                    int **l_1141 = &l_1136;
                    (*l_1128) = l_1136;
                    l_1137[9][1] ^= func_27(g_3);
                    (*l_1141) = l_1138;
                    (*g_69) = (*l_1138);
                }
                else
                {
                    int *l_1142 = &g_70;
                    (*l_1128) = l_1142;
                    if (l_1137[6][1])
                        break;
                    for (g_177 = 0; (g_177 <= 1); g_177 += 1)
                    {
                        unsigned char l_1155 = 0xCDL;
                        int i, j;
                        (*l_1128) = (void*)0;
                        if (l_1137[(g_177 + 3)][(g_177 + 1)])
                            continue;
                        l_1156 &= (safe_mod_func_uint32_t_u_u((l_1137[g_3][(g_177 + 1)] | (8UL <= (((0x00L != (g_341[g_177] >= l_1137[(g_177 + 3)][(g_177 + 1)])) < (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0L, ((safe_rshift_func_int8_t_s_u(g_49, (safe_mod_func_uint8_t_u_u((1L > func_4(g_737, g_537, g_70, l_1137[0][1])), l_1155)))) & (*l_1142)))), 0x139F47A7L)), g_324))) && l_1137[9][1]))), 4294967295UL));
                        (*l_1128) = (*l_1128);
                    }
                }
                (*l_1128) = l_1157;
                if ((*g_69))
                    continue;
                for (g_176 = 0; (g_176 <= 2); g_176 += 1)
                {
                    int i;
                    (*g_69) ^= (l_1157 != (void*)0);
                    l_1171 |= (0x75L & (safe_rshift_func_uint16_t_u_s((l_1160 == (void*)0), ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(0L, (func_17(g_149[g_176]) ^ ((safe_lshift_func_int16_t_s_u((g_409 <= func_31((*g_69), l_1137[9][1], g_341[0], g_149[g_176])), 8)) != (*g_69))))), 8)), 255UL)) > g_149[g_176]))));
                    if ((*l_1157))
                        break;
                    l_1172 = (*g_69);
                }
            }
            else
            {
                unsigned char l_1183 = 8UL;
                const int l_1210 = 8L;
                (*l_1128) = l_1173;
                for (l_1172 = 9; (l_1172 >= 0); l_1172 -= 1)
                {
                    unsigned short l_1184[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1184[i] = 0xDCF2L;
                    for (g_409 = 1; (g_409 <= 7); g_409 += 1)
                    {
                        unsigned char l_1174 = 252UL;
                        (*l_1160) = l_1174;
                        l_1136 = l_1157;
                    }
                    for (g_537 = 1; (g_537 <= 9); g_537 += 1)
                    {
                        short l_1189 = 7L;
                        unsigned short l_1194 = 0UL;
                        (*l_1128) = func_50((((((g_341[1] < func_31((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(func_54((((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_1183 & (0x98L <= l_1184[0])), func_27(g_49))), (safe_lshift_func_uint16_t_u_u(g_409, (safe_mul_func_int32_t_s_s(l_1189, ((safe_div_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s(l_1194, 0x7E5B54B0L)) > (**l_1128)) || (**l_1128)) & l_1183), (*g_69))) <= 0x649CADB0L))))))) || 0x3FL) & (*l_1173)), &l_1171), 0x3C5DL)), g_70)), (*l_1157), g_70, l_1189)) > 0xB4L) | 0xE6BB7BC5L) ^ g_3) < g_149[2]), g_70, g_1195);
                        if ((*l_1160))
                            continue;
                        return l_1183;
                    }
                    for (l_1126 = 0; (l_1126 <= 7); l_1126 += 1)
                    {
                        (*g_69) = g_1196;
                        if ((*g_69))
                            continue;
                        if ((*l_1160))
                            continue;
                    }
                }
                for (g_176 = 2; (g_176 <= 9); g_176 += 1)
                {
                    unsigned l_1197 = 0x0EDD8A45L;
                }
                if ((**l_1128))
                    break;
            }
        }
        else
        {
            short l_1226 = 0xBDA6L;
            (*l_1157) = (g_70 || ((0L >= l_1226) < (g_70 ^ func_4(l_1226, g_341[1], g_1196, l_1226))));
        }
    }
    for (l_1225 = 0; (l_1225 != (-20)); l_1225 = safe_sub_func_int16_t_s_s(l_1225, 6))
    {
        if ((*g_69))
            break;
    }
    l_1172 ^= (safe_lshift_func_int8_t_s_u(func_31(l_1231[0][3], l_1231[0][3], (g_3 > ((l_1225 != ((((safe_lshift_func_int16_t_s_u(l_1225, (safe_lshift_func_uint16_t_u_s((((g_1236 < (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((&g_253 != &l_1128) > g_1196) >= g_177), l_1241)), g_324))) < 0x098CL) < g_341[1]), 12)))) || g_409) && l_1231[0][3]) | 0x7CBBA2C3L)) != g_1196)), (*g_69)), l_1231[0][3]));
    l_1249 = (safe_sub_func_int8_t_s_s(g_3, ((safe_sub_func_uint8_t_u_u((0xD78C8727L & 0xBDC3A0C0L), ((&l_1128 != &g_831[4]) < (!(((*l_1128) != (void*)0) >= (func_4(g_177, g_537, g_1248[3], l_1172) < 0UL)))))) ^ 1UL)));
    return g_1196;
}







static int func_4(unsigned short p_5, char p_6, const unsigned short p_7, unsigned char p_8)
{
    unsigned l_26 = 0xEBA4D3ECL;
    char l_746 = 0xAEL;
    int ***l_802 = &g_253;
    int l_819[10] = {0xECA43FC3L, 0L, 0xECA43FC3L, 0L, 0xECA43FC3L, 0L, 0xECA43FC3L, 0L, 0xECA43FC3L, 0L};
    int *l_863 = &g_49;
    const int *l_867[7][1][2];
    const int **l_866[4] = {&l_867[2][0][0], (void*)0, &l_867[2][0][0], (void*)0};
    unsigned short l_1046[5][9] = {{65534UL, 65535UL, 65534UL, 0xBB28L, 4UL, 0xB63CL, 0x09C3L, 0x906BL, 65535UL}, {65534UL, 65535UL, 65534UL, 0xBB28L, 4UL, 0xB63CL, 0x09C3L, 0x906BL, 65535UL}, {65534UL, 65535UL, 65534UL, 0xBB28L, 4UL, 0xB63CL, 0x09C3L, 0x906BL, 65535UL}, {65534UL, 65535UL, 65534UL, 0xBB28L, 4UL, 0xB63CL, 0x09C3L, 0x906BL, 65535UL}, {65534UL, 65535UL, 65534UL, 0xBB28L, 4UL, 0xB63CL, 0x09C3L, 0x906BL, 65535UL}};
    unsigned l_1088 = 3UL;
    unsigned l_1096[1][7];
    int l_1103 = 0x967F768FL;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_867[i][j][k] = &g_70;
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_1096[i][j] = 0x6DDE62D6L;
    }
    for (p_6 = 0; (p_6 < 2); p_6 = safe_add_func_uint16_t_u_u(p_6, 3))
    {
        unsigned short l_19 = 0x32FDL;
        int *l_719 = &g_70;
    }
    return p_6;
}







static int func_12(unsigned short p_13, unsigned char p_14)
{
    int l_666 = (-1L);
    int *l_669 = &g_49;
    int *l_670 = &g_70;
    const unsigned l_707 = 0x3AE20AD1L;
    (*l_670) ^= ((safe_sub_func_uint8_t_u_u((l_666 | (((((safe_div_func_int8_t_s_s(3L, p_14)) <= func_54(func_27(p_13), l_669)) | p_14) > g_409) | 0x400B5F16L)), p_13)) | 0x4C31AAA1L);
lbl_688:
    (*l_670) |= (safe_div_func_uint8_t_u_u(((((void*)0 == l_670) | (safe_mod_func_uint32_t_u_u(((p_13 && (*l_669)) != g_49), (*l_669)))) ^ (*l_669)), p_13));
    for (g_70 = 2; (g_70 <= 9); g_70 += 1)
    {
        const int *l_676 = &g_625;
        const int **l_675 = &l_676;
        int l_687 = 0L;
        int i;
        (*l_675) = (void*)0;
        (*l_669) |= g_2[g_70];
        for (g_537 = 0; (g_537 <= 9); g_537 += 1)
        {
            int l_682 = (-3L);
            unsigned char l_697 = 246UL;
            unsigned l_704 = 7UL;
            int *l_705 = &g_70;
            int i;
            (*l_669) = func_27((g_2[g_537] <= g_3));
            if (((void*)0 != &g_253))
            {
                const unsigned l_677 = 1UL;
                int * const *l_680 = &g_69;
                (*l_669) |= g_2[g_537];
            }
            else
            {
                unsigned l_683[6] = {8UL, 0x1DE1768DL, 8UL, 0x1DE1768DL, 8UL, 0x1DE1768DL};
                int *l_684[9][4][7] = {{{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}, {{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}};
                int i, j, k;
                for (g_176 = 0; (g_176 <= 3); g_176 += 1)
                {
                    int *l_685 = &g_3;
                    int i;
                    l_683[4] |= (g_149[g_176] >= l_682);
                    for (p_13 = 0; (p_13 <= 9); p_13 += 1)
                    {
                        (*l_675) = l_684[1][0][4];
                        (*l_669) = (p_14 | 4294967293UL);
                    }
                    if (p_14)
                    {
                        int *l_686 = &g_70;
                        (*l_669) |= p_13;
                        if (p_13)
                            break;
                        l_687 ^= ((l_685 != l_686) & 0xBB4FBD1FL);
                    }
                    else
                    {
                        if (l_682)
                            goto lbl_688;
                    }
                    if (p_13)
                        break;
                }
                (*l_675) = func_50((safe_mul_func_int16_t_s_s(0xC19BL, ((void*)0 == &l_675))), func_17((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(65532UL, ((((safe_add_func_uint8_t_u_u(247UL, g_3)) && ((void*)0 != &l_669)) | (l_682 > g_324)) > l_682))) != (*l_669)), p_14))), p_14);
                (*l_669) = p_14;
            }
            (*l_669) = l_697;
            if (((void*)0 != l_669))
            {
                unsigned short l_706 = 0x0867L;
                (*l_669) = (g_70 & (safe_add_func_int8_t_s_s(p_13, ((((g_49 <= (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((l_697 < (func_17(l_704) <= (((void*)0 != l_705) >= g_341[0]))) > p_13), (*l_670))), p_14))) < g_537) != l_706) >= g_149[0]))));
            }
            else
            {
                return (*l_705);
            }
        }
        for (l_666 = 9; (l_666 >= 0); l_666 -= 1)
        {
            int i;
            (*l_669) = g_2[l_666];
            (*l_669) = p_14;
        }
    }
    if (l_707)
    {
        unsigned char l_708 = 0x99L;
lbl_713:
        (*l_670) = (((*l_669) < l_708) != 1UL);
        (*l_669) = (-1L);
        for (g_177 = 0; (g_177 <= 6); ++g_177)
        {
            int *l_716 = &g_324;
            for (g_49 = (-12); (g_49 != (-18)); g_49--)
            {
                if (g_324)
                    goto lbl_713;
            }
            for (l_708 = 3; (l_708 <= 9); l_708 += 1)
            {
                int l_717[9][5] = {{0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}, {0x646305BCL, 1L, 0xA5BC04C2L, 1L, 0x646305BCL}};
                int i, j;
                l_717[6][1] = (func_54((safe_div_func_uint16_t_u_u(g_2[l_708], (*l_669))), l_716) | 4294967290UL);
                (*l_669) |= func_17(p_13);
            }
            (*l_669) = ((*l_670) >= g_176);
            if (l_707)
                goto lbl_713;
        }
    }
    else
    {
        int *l_718 = &g_70;
        l_718 = l_718;
    }
    return (*l_669);
}







static char func_17(int p_18)
{
    int **l_385 = (void*)0;
    int l_386 = 1L;
    int *l_391 = (void*)0;
    unsigned char l_403 = 2UL;
    unsigned l_426[10] = {1UL, 0xC4545611L, 1UL, 0xC4545611L, 1UL, 0xC4545611L, 1UL, 0xC4545611L, 1UL, 0xC4545611L};
    int *l_557 = &g_324;
    int l_590 = 0x08E1B7F9L;
    int *l_622 = &g_70;
    int *l_663 = &g_324;
    int i;
    for (g_324 = 0; (g_324 > 19); g_324++)
    {
        p_18 = ((*g_252) == l_385);
    }
    return p_18;
}







static unsigned char func_27(unsigned p_28)
{
    int **l_381 = (void*)0;
    int *l_382[8] = {&g_3, &g_324, &g_3, &g_324, &g_3, &g_324, &g_3, &g_324};
    int i;
    l_382[4] = &g_70;
    return p_28;
}







static unsigned func_31(int p_32, unsigned p_33, int p_34, int p_35)
{
    int *l_365 = (void*)0;
    int * const *l_379[3][3] = {{&g_69, &l_365, &g_69}, {&g_69, &l_365, &g_69}, {&g_69, &l_365, &g_69}};
    int * const **l_378 = &l_379[0][1];
    int **l_380 = &l_365;
    int i, j;
    g_49 = g_176;
    l_365 = func_50((safe_rshift_func_uint8_t_u_u(5UL, g_176)), (safe_lshift_func_int8_t_s_u(g_49, 2)), (safe_add_func_int8_t_s_s(p_33, 255UL)));
    (*l_380) = func_50(p_35, (*l_365), (((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_34, ((0xA4L || ((safe_lshift_func_int16_t_s_u(0x701BL, (l_378 != &g_253))) >= 4294967291UL)) == (((void*)0 != &l_379[0][1]) & p_35)))), p_34)) & (*l_365)) > (*l_365)));
    return g_70;
}







static unsigned func_40(unsigned p_41, int p_42)
{
    int *l_254 = &g_49;
    unsigned char l_297[5] = {1UL, 0x8CL, 1UL, 0x8CL, 1UL};
    int l_311 = 0L;
    char l_349 = 0xCEL;
    int i;
    (*l_254) = (*g_69);
    for (p_42 = 0; (p_42 >= (-1)); p_42 = safe_sub_func_uint8_t_u_u(p_42, 9))
    {
        int *l_260 = (void*)0;
        int l_281 = 0L;
        unsigned char l_301 = 1UL;
        unsigned short l_308 = 1UL;
        for (p_41 = (-19); (p_41 > 4); ++p_41)
        {
            int **l_259[5][4] = {{&l_254, &g_69, &l_254, &g_69}, {&l_254, &g_69, &l_254, &g_69}, {&l_254, &g_69, &l_254, &g_69}, {&l_254, &g_69, &l_254, &g_69}, {&l_254, &g_69, &l_254, &g_69}};
            unsigned short l_279 = 0xE054L;
            short l_325 = 0L;
            int i, j;
        }
        for (g_49 = 0; (g_49 < 29); ++g_49)
        {
            unsigned short l_360 = 65535UL;
            l_360 &= (-7L);
            for (l_349 = 0; (l_349 < (-7)); l_349 = safe_sub_func_uint32_t_u_u(l_349, 7))
            {
                int *l_363 = &l_311;
                int **l_364 = &g_69;
                (*l_363) = (*g_69);
                (*l_364) = l_363;
                (*g_69) |= ((&p_42 == &p_42) <= p_42);
            }
        }
        for (g_324 = 0; g_324 < 5; g_324 += 1)
        {
            l_297[g_324] = 0xAFL;
        }
    }
    return g_70;
}







static unsigned func_43(short p_44, unsigned short p_45, const unsigned char p_46, unsigned p_47)
{
    unsigned short l_57 = 0xD0E1L;
    int *l_58 = &g_49;
    int l_142[6][9][2] = {{{0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}}, {{0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}}, {{0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}}, {{0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}}, {{0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}}, {{0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}, {0x5BF6126CL, (-1L)}}};
    int **l_189 = (void*)0;
    int ***l_188[8][8][4] = {{{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}, {{(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}, {(void*)0, &l_189, &l_189, &l_189}}};
    unsigned l_194 = 0xE7C7CCD3L;
    unsigned short l_243 = 1UL;
    int i, j, k;
    for (p_45 = 0; (p_45 <= 9); p_45 += 1)
    {
        int *l_48 = &g_49;
        int **l_75 = &l_48;
        int l_245[2][8] = {{0x303FCA0DL, 0x3CAA0374L, 0x303FCA0DL, 0x3CAA0374L, 0x303FCA0DL, 0x3CAA0374L, 0x303FCA0DL, 0x3CAA0374L}, {0x303FCA0DL, 0x3CAA0374L, 0x303FCA0DL, 0x3CAA0374L, 0x303FCA0DL, 0x3CAA0374L, 0x303FCA0DL, 0x3CAA0374L}};
        int i, j;
        (*l_48) = g_2[p_45];
        for (p_44 = 2; (p_44 <= 9); p_44 += 1)
        {
            unsigned char l_73 = 0x5DL;
            int l_122 = 0x7D00CD1DL;
        }
        for (p_47 = 0; (p_47 <= 9); p_47 += 1)
        {
            int **l_145 = &l_58;
            int l_160 = 6L;
            unsigned l_214 = 0x15AC9E3CL;
        }
        (*l_48) |= 0L;
    }
    (*g_69) = (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((*g_69) == (p_46 > (&g_49 != &g_49))) ^ func_54(g_70, &g_49)) == (p_44 || (g_252 != (void*)0))), p_45)), p_44)) & p_44) > (*g_69)), g_149[2]));
    g_69 = &g_3;
    return g_70;
}







static int * func_50(char p_51, short p_52, unsigned char p_53)
{
    return &g_3;
}







static unsigned func_54(short p_55, int * p_56)
{
    int *l_61[6] = {&g_49, &g_49, &g_49, &g_49, &g_49, &g_49};
    int i;
    g_49 = (p_55 | ((safe_add_func_uint32_t_u_u((p_56 != &g_49), (g_2[4] | ((((void*)0 == l_61[0]) == 0xCFL) & (safe_div_func_uint16_t_u_u(g_49, 0x4C38L)))))) > 0x75L));
    return p_55;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_341[i], "g_341[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1236, "g_1236", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1248[i], "g_1248[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
