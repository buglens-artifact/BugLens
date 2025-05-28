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



static int g_5 = 0x8D32FFABL;
static unsigned g_68 = 4294967290UL;
static int g_73 = 0x7FF73186L;
static short g_139[7][9] = {{0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}, {0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}, {0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}, {0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}, {0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}, {0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}, {0x8379L, 0L, 0xF5B1L, 0L, 0x8379L, 7L, 0xF5B1L, 7L, 0x8379L}};
static unsigned g_147 = 4294967295UL;
static volatile int g_163 = 0x2BE3B962L;
static volatile int *g_162 = &g_163;
static volatile int **g_161 = &g_162;
static short g_175[2] = {0xB295L, 0xB295L};
static int g_319 = 0L;
static unsigned g_375 = 0x880659D2L;
static unsigned g_440 = 0xF16F2CCCL;
static int *g_503 = &g_319;
static char g_516 = 5L;
static const int *g_579 = &g_73;
static short g_632 = (-4L);
static short g_640[7][4][2] = {{{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}, {{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}, {{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}, {{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}, {{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}, {{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}, {{0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}, {0x8BB0L, 0L}}};
static int **g_711[10] = {&g_503, (void*)0, &g_503, &g_503, (void*)0, &g_503, (void*)0, &g_503, &g_503, (void*)0};
static int g_753 = 0x9E2297DEL;
static int *g_892[2][3][5] = {{{&g_753, &g_753, &g_753, &g_319, &g_753}, {&g_753, &g_753, &g_753, &g_319, &g_753}, {&g_753, &g_753, &g_753, &g_319, &g_753}}, {{&g_753, &g_753, &g_753, &g_319, &g_753}, {&g_753, &g_753, &g_753, &g_319, &g_753}, {&g_753, &g_753, &g_753, &g_319, &g_753}}};
static unsigned short g_903 = 0xA95DL;
static volatile int g_1095 = 0x61D16006L;



static int func_1(void);
static int * func_6(int p_7, int * p_8, int * p_9, int * p_10, int * p_11);
static unsigned short func_13(unsigned p_14, int p_15, char p_16, int * p_17, int * p_18);
static int func_19(char p_20, int p_21, unsigned char p_22);
static short func_25(int * p_26, unsigned p_27);
static int func_30(unsigned char p_31);
static int * func_32(const int * p_33, short p_34, char p_35, int * p_36, int * p_37);
static int * func_38(short p_39, char p_40);
static char func_43(int p_44);
static unsigned char func_55(const char p_56, const unsigned p_57, int * p_58, const int * p_59);
static int func_1(void)
{
    char l_2 = (-1L);
    int *l_12 = &g_5;
    unsigned l_1129 = 0UL;
    unsigned l_1166 = 0xFC93EA00L;
    if (l_2)
    {
        unsigned char l_3 = 0x89L;
        int *l_4 = &g_5;
        unsigned char l_739 = 0xA2L;
        int **l_1107[5][4];
        int *l_1108 = &g_319;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_1107[i][j] = &g_892[1][1][0];
        }
        (*l_4) = l_3;
        l_1108 = func_6((((((l_12 != &g_5) | (func_13((func_19((safe_rshift_func_int16_t_s_u(func_25(l_12, (*l_12)), (safe_div_func_uint32_t_u_u((~g_375), g_375)))), l_2, g_375) >= g_640[6][0][1]), l_2, g_440, l_4, l_12) <= g_640[6][0][1])) == l_739) >= 0x225EA081L) >= g_632), l_12, l_12, l_12, l_12);

        ;
        ;
        ;
        return (*l_12);
    }
    else
    {
        short l_1124 = (-1L);
        int *l_1134 = &g_5;
        const unsigned l_1140 = 0x7A086D17L;
        const int *l_1165 = &g_5;
        unsigned l_1174 = 3UL;
        int **l_1185 = &g_503;
        for (g_753 = 1; (g_753 >= 0); g_753 -= 1)
        {
            const int l_1111 = 0x8260B23CL;
            unsigned l_1132 = 0xF7993655L;
            int * const l_1133 = (void*)0;
            int l_1135[10][3] = {{0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}, {0xB9D5866FL, 0x1F908EF7L, 0x9734955AL}};
            char l_1138 = 0x7DL;
            int i, j;
            (*l_12) = ((safe_sub_func_uint32_t_u_u((((void*)0 == &g_161) , ((l_1111 & (safe_rshift_func_int8_t_s_s(g_73, func_19((safe_sub_func_uint16_t_u_u((*l_12), (func_19(((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((0UL <= (safe_lshift_func_uint8_t_u_u(((g_175[1] < (0x05L < (safe_mod_func_uint8_t_u_u(g_139[3][3], l_1111)))) , 0x8FL), 5))), 1UL)), 1)) , g_640[6][0][1]), l_1111, g_753) != l_1124))), l_1124, g_5)))) < l_1111)), l_1124)) || 0x48BCL);
            l_1135[1][2] |= ((*l_12) > ((*g_503) & (((safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(l_1129, g_753)) != (((safe_sub_func_uint8_t_u_u(l_1111, l_1132)) , l_1133) != l_1134)) <= g_175[1]), 8UL)) != g_175[1]) , 0x92678F36L)));
            for (l_1132 = 0; (l_1132 <= 1); l_1132 += 1)
            {
                unsigned l_1136[7];
                char l_1137 = 0xDAL;
                int **l_1139[3][6][9] = {{{&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}}, {{&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}}, {{&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}, {&g_503, &l_1134, &g_503, &l_1134, &l_12, &g_892[0][2][4], &g_503, &l_12, &g_503}}};
                unsigned char l_1143 = 0x62L;
                int *l_1178 = &g_319;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1136[i] = 0xDC80F6D4L;
                (**g_161) ^= (*l_1134);
                l_1134 = func_38(func_19((((l_1136[4] > g_516) , (g_516 | (((*l_12) , (0x66C7L <= (l_1137 , 0x2B77L))) , l_1137))) || (g_753 | g_375)), g_640[5][3][1], l_1138), (*l_12));

                ;
                if (l_1140)
                {
                    volatile int ***l_1141 = (void*)0;
                    volatile int ***l_1142 = &g_161;
                    int *l_1149 = &g_73;
                    char l_1169 = 0L;
                    (*l_1142) = &g_162;
                    if (((l_1143 || (safe_sub_func_uint8_t_u_u(g_1095, 255UL))) , (**g_161)))
                    {
                        unsigned l_1148 = 0x01B57FCBL;
                        char l_1167 = 0x8AL;
                        int l_1168 = 3L;
                        l_1168 = (((safe_rshift_func_uint16_t_u_u((func_19(l_1148, (0x9F959301L <= (*g_162)), l_1166) >= l_1167), g_440)) , 0xAFABE143L) || g_640[6][0][1]);
                        return (*l_12);
                    }
                    else
                    {
                        l_1169 = (*g_503);
                    }
                }
                else
                {
                    unsigned l_1177[8] = {0xD3153BB0L, 0xD3153BB0L, 0UL, 0xD3153BB0L, 0xD3153BB0L, 0UL, 0xD3153BB0L, 0xD3153BB0L};
                    int *l_1180 = &g_5;
                    int i;
                    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
                    {
                        int l_1179 = 0xD3B1AC6EL;
                        int i, j, k;
                        l_1179 |= (g_139[5][3] & func_13((func_43(g_5) && (g_892[g_753][g_753][(g_147 + 3)] == g_892[l_1132][(g_753 + 1)][g_753])), (safe_mod_func_int8_t_s_s((l_1174 | (-8L)), 0xE3L)), (safe_sub_func_int16_t_s_s(((0x6F9CL || l_1177[4]) & 0xCAL), 65527UL)), l_1178, l_1134));
                        g_892[g_753][(l_1132 + 1)][(l_1132 + 3)] = func_38(l_1177[7], (((func_13((&l_1133 == (void*)0), g_753, g_903, (l_1177[1] , l_1180), l_1180) || g_139[3][1]) | (*l_1134)) ^ g_903));
                    }
                    (**g_161) = (*l_1180);
                }
                for (g_632 = 6; (g_632 >= 0); g_632 -= 1)
                {
                    unsigned short l_1181[1][5];
                    int *l_1182 = &g_73;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1181[i][j] = 65535UL;
                    }
                    l_1165 = l_12;
                    for (l_2 = 1; (l_2 >= 0); l_2 -= 1)
                    {
                        (*g_162) |= l_1181[0][3];
                        l_1182 = l_12;

                        ;
                    }

                    ;
                }
            }
        }

        ;
        (*l_1185) = func_38((((safe_lshift_func_uint16_t_u_s((0xC3L >= g_640[2][3][0]), (*l_1165))) && (((((g_640[2][0][1] , (((*l_1165) != (*l_1134)) | (-1L))) >= ((l_12 == l_12) == g_516)) & (*l_1134)) , (*l_1165)) == g_753)) , (*l_1165)), (*l_12));

        ;
        return (*g_503);
    }
}







static int * func_6(int p_7, int * p_8, int * p_9, int * p_10, int * p_11)
{
    char l_749 = 0x06L;
    int *l_750 = &g_319;
    unsigned l_779 = 4UL;
    unsigned char l_808 = 0x3AL;
    int *l_809 = &g_73;
    int ** const *l_839[3];
    unsigned char l_843 = 3UL;
    unsigned l_852[9];
    int *l_882[10] = {(void*)0, &g_319, (void*)0, &g_319, (void*)0, &g_319, (void*)0, &g_319, (void*)0, &g_319};
    int *l_893 = &g_753;
    unsigned l_935 = 0x10137DE5L;
    unsigned l_951 = 0x3CA50A2AL;
    unsigned l_985 = 0xEF3BC829L;
    int l_1031[8] = {0L, 0x074E18C8L, 0L, 0x074E18C8L, 0L, 0x074E18C8L, 0L, 0x074E18C8L};
    unsigned l_1034 = 1UL;
    char l_1057 = 0xBEL;
    int i;
    for (i = 0; i < 3; i++)
        l_839[i] = &g_711[6];
    for (i = 0; i < 9; i++)
        l_852[i] = 0xD2081AC7L;
    if ((*p_11))
    {
        int *l_748 = &g_319;
        int **l_751[1];
        int i;
        for (i = 0; i < 1; i++)
            l_751[i] = &l_750;
        (*p_9) = (safe_rshift_func_int16_t_s_u(g_440, (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((((((func_30(g_319) & ((*g_161) == l_748)) < ((g_640[6][0][1] <= p_7) , (0x46L ^ p_7))) , p_7) <= l_749) < p_7) <= 0L), p_7)), 6))));
        p_9 = l_750;

        ;
    }
    else
    {
        unsigned char l_752 = 5UL;
        char l_777 = 0xF1L;
        const int *l_778 = &g_5;
        int l_800 = 0x757BE97DL;
        int ***l_842 = &g_711[6];
        int l_881 = 7L;
        unsigned short l_886 = 3UL;
        (*p_11) |= l_752;
        (*l_750) &= g_753;
        for (g_375 = 0; (g_375 >= 55); ++g_375)
        {
            int **l_756 = &l_750;
            (*l_756) = p_11;

            ;
            for (g_516 = (-26); (g_516 < (-1)); g_516++)
            {
                (*l_750) |= 0xB9D7CA3EL;
                for (g_440 = 0; (g_440 <= 1); g_440 += 1)
                {
                    int i;
                    (*p_9) = (&g_579 == (void*)0);
                    (*l_750) = g_175[g_440];
                }
            }
        }

        ;
        if (((safe_add_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(p_7, ((l_752 && (((*p_8) , &g_579) != (void*)0)) & (p_7 != (safe_lshift_func_uint16_t_u_s(g_516, func_55((g_175[1] , func_19(g_175[1], l_777, g_516)), g_516, p_9, l_778))))))) | (*l_778)), 0xB53EL)), 0xDB722B07L)), 0xF1L)), l_779)) , (*l_750)) , (*l_750)), (*l_750))) && (-5L)))
        {
            int ***l_781 = &g_711[4];
            int *l_807 = &g_73;
            int ***l_817 = (void*)0;
            unsigned l_826 = 4294967295UL;
            const unsigned char l_827 = 0UL;
            const int *l_828 = &g_73;
            short l_829 = 0L;
            int *l_830 = &g_753;
            short l_855 = 0x6554L;
            unsigned l_878 = 0UL;
            for (l_779 = 2; (l_779 <= 6); l_779 += 1)
            {
                int l_780 = 0xDD9AC16DL;
                int *l_802 = &g_753;
                p_11 = (l_780 , (((((func_19(func_30((*l_778)), l_780, ((l_750 == ((l_780 | g_139[1][0]) , (void*)0)) & (5UL | g_175[1]))) & g_139[6][1]) , (void*)0) != l_781) == g_139[6][8]) , p_8));
                if ((*p_9))
                    continue;
                for (g_632 = 6; (g_632 >= 1); g_632 -= 1)
                {
                    int ***l_790 = &g_711[7];
                    char l_824[5];
                    char l_825[5][8][6] = {{{0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}}, {{0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}}, {{0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}}, {{0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}}, {{0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}, {0x55L, 7L, 0x54L, 7L, 0x55L, 0x68L}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_824[i] = (-1L);
                    for (g_753 = 2; (g_753 <= 6); g_753 += 1)
                    {
                        int i, j;
                    }
                    if ((safe_unary_minus_func_int16_t_s(func_30((((safe_add_func_uint16_t_u_u(func_13((func_30((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((p_7 , g_163), (l_790 != l_817))), (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((0xFF3497D4L < 6L), 2)) >= (safe_rshift_func_int8_t_s_u((*l_802), func_43(((((void*)0 != p_10) , g_753) , 0xA1A5342AL))))), 2)))) < 6L) , l_824[4])) | 3L), g_640[6][0][1], g_175[1], l_809, p_8), g_375)) , g_632) <= l_825[1][4][3])))))
                    {
                        (*p_9) = (*p_8);
                    }
                    else
                    {
                        (*p_8) = 0x70340839L;
                    }
                    if (l_826)
                        continue;
                }
            }
            p_11 = (l_827 , p_11);
            for (g_73 = 0; (g_73 <= 18); ++g_73)
            {
                return p_11;


            }
            if ((*p_8))
            {
                int **l_837 = (void*)0;
                int **l_838 = &g_503;
                int *l_877 = &g_319;
                (*l_838) = l_750;

                ;
                if ((l_839[1] != (void*)0))
                {
                    (*p_9) = (safe_add_func_uint16_t_u_u((g_640[4][2][0] && ((g_139[6][2] , (l_842 == &l_838)) | (p_7 != g_640[3][2][0]))), l_843));
                }
                else
                {
                    char l_879 = (-2L);
                    int *l_885 = &l_881;
                    (*p_9) = (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((func_30(g_147) <= (65535UL > (((safe_rshift_func_uint16_t_u_s((g_375 < ((p_7 > g_375) <= (g_175[0] ^ l_852[2]))), ((+(safe_rshift_func_uint8_t_u_s(p_7, 7))) <= 0x94L))) <= 0UL) > g_319))) && p_7), p_7)), l_855));
                    for (l_826 = 0; (l_826 <= 40); ++l_826)
                    {
                        unsigned l_862 = 4294967295UL;
                        int l_880 = 0xD13E6BBDL;
                        (*p_8) = (safe_div_func_uint32_t_u_u((0x365AL != ((g_375 , func_13((func_19((g_375 , g_440), (safe_div_func_int16_t_s_s((p_7 & l_862), (g_5 , (((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((g_640[6][0][1] >= (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((((func_55((g_516 , (-4L)), g_163, l_877, p_8) , 7UL) == 0x62L) , l_862), 0xA0FDL)) < p_7) ^ p_7), p_7)) > p_7) <= g_175[1]), 1L)) , p_7), (**l_838)))), (-1L))), l_878)) != g_319), l_879)) > l_880) ^ g_139[6][1])))), l_879) & g_516), l_881, p_7, p_9, l_882[0])) , p_7)), 0xDCE03BAAL));
                    }
                    if (l_879)
                    {
                        (*p_9) &= (1UL | 0x5874L);
                    }
                    else
                    {
                        (*l_838) = (void*)0;

                        ;
                        return p_8;


                    }
                    (*p_9) = (g_753 >= ((((safe_sub_func_int32_t_s_s((~((void*)0 == &p_11)), (*p_8))) || ((((l_885 != p_9) , ((*l_885) , 0xE2L)) & 255UL) > p_7)) ^ (*l_807)) != p_7));
                }
            }
            else
            {
                int *l_891 = &g_753;
                l_830 = l_891;
                l_893 = (((*l_830) ^ ((void*)0 == &g_892[1][1][0])) , p_8);

                ;
                (*p_8) |= (*l_830);
                (*g_161) = ((g_5 , (((safe_mul_func_int8_t_s_s((((((safe_add_func_int16_t_s_s((g_73 , 0x9F8CL), (safe_div_func_int16_t_s_s(((((0x542DL < ((((*l_891) == (safe_unary_minus_func_int16_t_s((g_68 , (safe_lshift_func_int8_t_s_u((p_9 == p_11), (*l_891))))))) | p_7) >= 0UL)) == (-1L)) == g_640[6][0][1]) != (-5L)), g_640[6][0][1])))) >= p_7) , l_842) != &g_161) , g_163), g_903)) , 0x856541C6L) <= (*l_891))) , (*g_161));
            }

            ;
            ;
        }
        else
        {
            int ***l_908 = &g_711[6];
            int l_913[4][2][4];
            const char l_921 = 0xAFL;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_913[i][j][k] = 0x69FC333DL;
                }
            }
            (*p_8) = (*p_10);
            for (g_5 = 0; (g_5 != 21); g_5 = safe_add_func_int16_t_s_s(g_5, 1))
            {
                char l_918 = 0x92L;
                (*l_893) = (safe_mul_func_int16_t_s_s(((void*)0 != l_908), (safe_rshift_func_int8_t_s_u((((*p_10) , ((func_43(((*l_778) , (func_19(g_175[1], (*l_778), g_163) , ((safe_sub_func_uint16_t_u_u(func_43(l_913[3][0][2]), p_7)) , 0x6A7C68C7L)))) , (-2L)) > 3L)) > 1UL), g_753))));
                p_8 = p_11;
                p_10 = func_38((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(g_640[6][0][1], ((((p_7 | l_918) & (safe_mod_func_int32_t_s_s(((func_19((((p_7 , (*p_11)) | (func_55(p_7, l_921, p_11, p_8) <= p_7)) , g_516), g_175[1], (*l_893)) | g_175[0]) <= g_319), (*l_750)))) > 5UL) == 1UL))), 4)), g_5);

                ;
            }

            ;
            return p_8;


        }

        ;
        ;
    }

    ;
    ;
    ;
    ;
    (*p_10) = (*p_8);
    for (g_903 = 0; (g_903 <= 1); g_903 += 1)
    {
        unsigned short l_936[5] = {65532UL, 65535UL, 65532UL, 65535UL, 65532UL};
        int l_943 = 0L;
        int *l_953 = &g_73;
        unsigned short l_954[2];
        int l_958 = 0xD14759F0L;
        int **l_986 = &l_809;
        int **l_993 = &g_503;
        unsigned short l_1015 = 0x09AFL;
        unsigned char l_1092 = 1UL;
        char l_1098 = 0xDCL;
        int i;
        for (i = 0; i < 2; i++)
            l_954[i] = 65526UL;
        for (g_73 = 9; (g_73 >= 1); g_73 -= 1)
        {
            int i;
            p_11 = l_882[g_73];

            ;
            for (g_147 = 0; (g_147 <= 1); g_147 += 1)
            {
                int i, j, k;
                for (g_68 = 0; (g_68 <= 2); g_68 += 1)
                {
                    int i, j, k;
                    g_892[g_147][g_68][(g_147 + 3)] = g_892[g_147][g_68][g_68];
                    (*p_9) = 0x5B5F59B8L;
                }
                return g_892[g_903][(g_147 + 1)][(g_147 + 3)];


            }
            for (g_632 = 9; (g_632 >= 0); g_632 -= 1)
            {
                int i, j, k;
                return g_892[g_903][g_903][g_903];


            }
        }
        for (g_516 = 0; (g_516 <= 2); g_516 += 1)
        {
            unsigned short l_926 = 0xFA55L;
            int i;
            (*p_10) = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_903, p_7)), (~g_753))) , (!((func_43((g_68 ^ (l_926 | (((((((void*)0 == l_839[g_516]) || (safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_903 , ((((!g_640[6][0][1]) ^ (*p_10)) > g_175[1]) , p_7)), g_640[5][0][1])), g_175[1])) , g_139[2][8]) == p_7) || g_632), p_7)) > p_7), 0x62L))) , l_935) != l_936[0]) > l_936[1]) < p_7)))) , 0x90CEL) & p_7)));
            for (l_779 = 0; (l_779 <= 2); l_779 += 1)
            {
                int i, j, k;
                (*l_750) ^= g_640[g_516][(g_516 + 1)][g_903];
                if ((*p_8))
                    continue;
            }
            for (g_753 = 0; (g_753 <= 1); g_753 += 1)
            {
                unsigned char l_941 = 0xF9L;
                int *l_942 = (void*)0;
                if ((*l_750))
                {
                    unsigned char l_944 = 0xEFL;
                    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
                    {
                        int i, j, k;
                        l_944 &= (*l_809);
                        g_892[g_147][(g_903 + 1)][g_516] = func_38(func_43(((safe_mod_func_uint32_t_u_u((g_73 & g_319), (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_139[2][1], 0x62L)), (*p_8))))) , (-1L))), p_7);
                        (*p_9) = 9L;
                    }
                    if (l_951)
                    {
                        unsigned char l_952 = 0UL;
                        (*l_809) |= (*p_8);
                        (*g_161) = (*g_161);
                        if (l_952)
                            break;
                    }
                    else
                    {
                        int i, j, k;
                        (*p_9) = (-1L);
                        (*l_809) &= (*p_8);
                        (*l_809) = ((g_640[5][0][0] , g_753) , (0x21A2L == p_7));
                        (*l_953) &= ((l_944 >= ((p_8 != p_8) > p_7)) && ((void*)0 != &p_9));
                    }
                }
                else
                {
                    int *l_959 = &g_5;
                    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
                    {
                        unsigned l_957[1][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_957[i][j] = 4294967295UL;
                        }
                        l_954[1] &= func_43((p_7 , p_7));
                        l_958 = (((*p_9) < (safe_add_func_uint8_t_u_u(((g_175[1] || 0xD98DL) >= l_957[0][0]), g_632))) , (p_7 ^ (g_147 , ((((9L <= p_7) | 0xA3B67D58L) , (*l_809)) , 65526UL))));
                        l_942 = l_959;

                        ;
                    }

                    ;
                    for (l_779 = 0; (l_779 <= 1); l_779 += 1)
                    {
                        int *l_960[7][1][1] = {{{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}};
                        int i, j, k;
                        return l_960[5][0][0];


                    }
                    (*l_959) = (-1L);
                }

                ;
            }
            (*l_809) = (*l_809);
            for (l_943 = 0; (l_943 <= 1); l_943 += 1)
            {
                int ***l_982[9][5] = {{&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}, {&g_711[6], (void*)0, &g_711[6], &g_711[6], &g_711[5]}};
                int i, j;
                for (g_753 = 0; (g_753 <= 1); g_753 += 1)
                {
                    for (l_958 = 1; (l_958 <= 6); l_958 += 1)
                    {
                        int i;
                        if ((*g_503))
                            break;
                    }
                    for (g_440 = 0; (g_440 <= 4); g_440 += 1)
                    {
                        int i, j, k;
                        return g_892[g_753][g_753][(g_516 + 2)];


                    }
                    for (g_632 = 1; (g_632 >= 0); g_632 -= 1)
                    {
                        int *l_961 = &g_753;
                        return l_961;


                    }
                    return p_10;


                }
                if ((*p_10))
                {
                    for (l_951 = 0; (l_951 <= 1); l_951 += 1)
                    {
                        (*l_893) |= (p_9 != p_10);
                    }
                    (*p_9) = (safe_div_func_int16_t_s_s((g_516 , ((g_640[5][2][0] , 1UL) != (p_7 | ((safe_sub_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s(g_640[3][3][1], ((!(+((((p_7 , p_7) < (safe_lshift_func_uint8_t_u_s((((*p_8) >= ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((p_7 , l_982[3][0]) != (void*)0), g_73)), p_7)) , (*l_953)) & (*l_953)), 4)), 3)), 1)), 3)) <= g_139[1][4])) > g_640[6][0][1]), 5))) || 0xB5L) != p_7))) , (*l_953)))) >= 0xD1FB7FE5L) < 0xB641906EL) , 7UL), p_7)) , p_7)))), p_7));
                    if ((*p_9))
                        break;
                }
                else
                {
                    int *l_983 = &g_319;
                    int l_984[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_984[i] = (-1L);
                    p_10 = l_983;

                    ;
                    (*l_809) = l_984[5];
                }

                ;
                return p_8;


            }
        }
        l_985 |= (*p_8);
        for (l_951 = 0; (l_951 <= 1); l_951 += 1)
        {
            int l_992 = 0x1DB94BA6L;
            int *l_1063 = &l_1031[5];
            int *** const l_1069 = (void*)0;
            unsigned l_1104 = 1UL;
        }
    }

    ;
    return p_8;


}







static unsigned short func_13(unsigned p_14, int p_15, char p_16, int * p_17, int * p_18)
{
    (*p_17) = ((g_147 || (g_163 ^ g_375)) == 0x3CL);
    (*g_503) = (*g_579);
    return p_15;
}







static int func_19(char p_20, int p_21, unsigned char p_22)
{
    int *l_376 = &g_73;
    int **l_377 = &l_376;
    short l_420[3];
    unsigned l_446 = 4294967295UL;
    int l_474 = (-1L);
    const int l_573 = 0x5E6B0F8BL;
    const int *l_578[5][9][2] = {{{(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}}, {{(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}}, {{(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}}, {{(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}}, {{(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}, {(void*)0, &g_319}}};
    int *l_657 = &g_73;
    unsigned l_701 = 0x5CDDE873L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_420[i] = (-10L);
    (*l_377) = l_376;
    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
    {
        int l_392 = 0x65CE0117L;
        int ***l_393 = &l_377;
        unsigned l_438 = 0x1588C483L;
        int *l_475 = &g_5;
        const int l_535 = 3L;
        unsigned l_656 = 1UL;
        unsigned l_687 = 0x39ABC6E6L;
        unsigned l_710 = 0x4856B311L;
        short l_731 = 0xD695L;
        int i;
    }
    return (*g_503);
}







static short func_25(int * p_26, unsigned p_27)
{
    unsigned l_45 = 4294967295UL;
    short l_336 = 1L;
    int l_337 = 0x7A945704L;
    int *l_361 = &l_337;
    if ((((safe_div_func_int32_t_s_s(func_30((0x2DA3L && (((((g_5 | g_5) < 65530UL) , func_32(func_38((safe_sub_func_int16_t_s_s(g_5, g_5)), func_43(l_45)), l_45, p_27, &g_5, &g_5)) == (void*)0) , 1L))), p_27)) | p_27) , l_45))
    {
        int *l_293 = &g_5;
        int **l_292 = &l_293;
        int *** const l_291 = &l_292;
        (**l_291) = p_26;
        (***l_291) = (((l_45 , ((((0x8E96002CL && func_43(l_45)) > (g_163 >= ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(1L, (&p_26 != &g_162))), 14)) ^ (((safe_div_func_int32_t_s_s((((l_45 == g_5) && g_139[5][4]) < g_5), 1L)) || 3L) == (*p_26))))) < 0UL) >= p_27)) <= (**l_292)) , (*p_26));
    }
    else
    {
        unsigned l_304 = 4294967288UL;
        int *l_323 = (void*)0;
        int **l_322 = &l_323;
        int *l_338 = &g_319;
        for (g_73 = 5; (g_73 >= 0); g_73 -= 1)
        {
            const int *l_303 = &g_73;
            const int **l_302 = &l_303;
            const int ***l_301 = &l_302;
            for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
            {
                (*g_161) = (*g_161);
                (*g_161) = (*g_161);
                for (g_147 = 1; (g_147 <= 6); g_147 += 1)
                {
                    (*g_161) = (*g_161);
                }
                for (l_45 = 0; (l_45 <= 1); l_45 += 1)
                {
                    int i, j;
                    if (g_139[(l_45 + 1)][(g_73 + 1)])
                    {
                        volatile int *l_300 = &g_163;
                        int i, j;
                        if (g_139[g_73][g_73])
                            break;
                        l_300 = (*g_161);

                        ;
                        l_304 = (g_175[l_45] <= ((l_301 != &g_161) || (*l_303)));
                    }
                    else
                    {
                        unsigned l_311 = 4294967287UL;
                        int *l_318 = &g_319;
                        (*l_318) = (((safe_rshift_func_uint8_t_u_u((g_175[0] < ((safe_rshift_func_int8_t_s_s(0x3FL, 4)) >= ((*p_26) && (***l_301)))), 4)) > ((***l_301) ^ (safe_lshift_func_uint8_t_u_s(l_311, 7)))) >= (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_45, ((safe_lshift_func_int8_t_s_u(0x8CL, p_27)) <= g_163))), p_27)));
                    }
                }
            }
            for (p_27 = 2; (p_27 <= 6); p_27 += 1)
            {
                int ***l_324 = (void*)0;
                unsigned l_325 = 0x4B0D07F0L;
                int i, j;
                (*p_26) &= ((+4L) >= ((safe_mul_func_int8_t_s_s((g_139[(g_73 + 1)][p_27] , (g_175[1] && ((g_175[1] , (*l_301)) != l_322))), (1L >= (***l_301)))) != ((l_324 != &g_161) , l_325)));
                (*p_26) = (*p_26);
            }
        }
        (*l_338) ^= ((safe_add_func_uint32_t_u_u(p_27, ((((((((((safe_rshift_func_uint8_t_u_s(0x85L, 7)) & (0x42959143L && (&g_161 != &l_322))) , ((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_163, func_43(l_336))), (l_337 , 0xE3E4L))) & 0UL)) == 0x8D8AL) , (-1L)) <= g_175[1]) , 4294967295UL) , p_27) || p_27) , (*p_26)))) , l_45);
        (*l_338) = ((safe_sub_func_int16_t_s_s((-4L), g_163)) != ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0xE1L, 5)), 4294967295UL)), (safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((((-1L) || ((*p_26) != g_5)) <= (p_27 & (func_43(g_175[1]) & p_27))) < g_175[1]), 1UL)) != p_27) & p_27), g_147)))), 5)), g_139[5][3])) != g_139[0][8]));
    }

    ;
    (*l_361) &= (((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_336 && l_336), func_30(g_175[0]))), g_139[0][3])) < (g_147 && (((safe_add_func_uint32_t_u_u(g_147, (g_175[1] >= l_336))) && l_336) >= l_336))) > g_139[3][5]);
    for (g_68 = 0; (g_68 < 59); ++g_68)
    {
        int *l_364[5][8][1] = {{{&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}}, {{&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}}, {{&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}}, {{&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}}, {{&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}, {&l_337}}};
        int i, j, k;
        if ((*p_26))
            break;
        (*p_26) |= (((*l_361) < ((void*)0 != l_364[0][7][0])) , (&g_162 == ((p_27 < (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u((*l_361), 2)) , (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_27, (&p_26 != &l_364[0][7][0]))), 0x5CL))), 0))) , &l_364[0][7][0])));
    }
    return g_68;
}







static int func_30(unsigned char p_31)
{
    int *l_190 = &g_5;
    int * const *l_189[9][5][5] = {{{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}, {{(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}, {(void*)0, &l_190, &l_190, (void*)0, (void*)0}}};
    unsigned l_201[8][8][4] = {{{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}, {{0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}, {0UL, 0x14671A0EL, 0x57758768L, 0x4E84316CL}}};
    int i, j, k;
    (*l_190) = (l_189[3][3][1] != &l_190);
    for (g_68 = 0; (g_68 <= 4); g_68 += 1)
    {
        int **l_192[2][4] = {{&l_190, &l_190, &l_190, &l_190}, {&l_190, &l_190, &l_190, &l_190}};
        int ***l_191 = &l_192[1][2];
        unsigned l_203[10] = {4294967289UL, 0x094D6605L, 4294967289UL, 0x094D6605L, 4294967289UL, 0x094D6605L, 4294967289UL, 0x094D6605L, 4294967289UL, 0x094D6605L};
        short l_210 = 0xC772L;
        int l_239 = 0x0A26E969L;
        char l_246 = 0x10L;
        int **l_262 = &l_190;
        int i, j;
        (*l_191) = &l_190;
        for (p_31 = 0; (p_31 <= 6); p_31 += 1)
        {
            const int *l_233 = &g_5;
            int l_276[5];
            int i;
            for (i = 0; i < 5; i++)
                l_276[i] = 0x13D963D4L;
            for (g_73 = 1; (g_73 <= 4); g_73 += 1)
            {
                int l_211[10][2] = {{(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}, {(-4L), 1L}};
                int i, j, k;
            }
            if (((!0x7F9CC139L) , (&l_233 != (void*)0)))
            {
                if (((void*)0 == &g_161))
                {
                    int i, j;
                    return g_139[(g_68 + 2)][p_31];
                }
                else
                {
                    return p_31;
                }
            }
            else
            {
                if (((safe_div_func_int16_t_s_s((p_31 && (((safe_unary_minus_func_int32_t_s((((void*)0 == &g_162) <= (safe_sub_func_uint8_t_u_u(g_147, g_175[1]))))) , &l_192[1][2]) == &l_189[1][4][2])), (safe_sub_func_uint8_t_u_u(p_31, (g_175[1] ^ p_31))))) <= 6L))
                {
                    short l_275 = 0x81C6L;
                    l_276[1] = (+(p_31 , l_275));
                    l_190 = (g_139[3][4] , &l_276[1]);

                    ;
                    if (l_275)
                        break;

                    return p_31;
                }
                else
                {
                    return p_31;
                }
            }
        }
    }


    for (g_5 = 0; (g_5 == 16); g_5 = safe_add_func_uint16_t_u_u(g_5, 9))
    {
        const unsigned l_281 = 0UL;
        const int *l_286 = &g_73;
        const int ** const l_285 = &l_286;
        const int ** const *l_284 = &l_285;
        int l_289[4] = {0xFBFE16F5L, 0x2550F3DBL, 0xFBFE16F5L, 0x2550F3DBL};
        int *l_290 = &g_5;
        int i;
        g_163 = func_55((l_281 || ((g_175[1] | g_175[1]) == g_175[1])), p_31, l_290, &g_73);
        if ((*l_286))
            continue;
    }
    return p_31;
}







static int * func_32(const int * p_33, short p_34, char p_35, int * p_36, int * p_37)
{
    unsigned l_90 = 0x2311C7DCL;
    int *l_127 = &g_5;
    int *l_174 = &g_5;
    if (l_90)
    {
        char l_128[9][10];
        const int *l_129 = (void*)0;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 10; j++)
                l_128[i][j] = (-1L);
        }
        for (p_34 = 13; (p_34 < (-29)); p_34 = safe_sub_func_uint16_t_u_u(p_34, 2))
        {
            char l_103 = (-6L);
            unsigned short l_106 = 65535UL;
            (*p_36) &= ((((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((!((safe_rshift_func_int16_t_s_s((((void*)0 == p_36) <= 0x4CB544DDL), 7)) > ((void*)0 == &g_5))), (safe_lshift_func_int8_t_s_s((((~l_90) != l_103) , l_90), ((safe_add_func_int32_t_s_s((((p_34 >= l_90) | p_35) == l_106), p_35)) >= 1UL))))), 4294967295UL)) , p_35) , l_106) || g_73);
            for (l_106 = 2; (l_106 <= 36); l_106++)
            {
                int l_113 = 0xBEB709D1L;
                int l_138 = (-1L);
                if ((l_106 && (l_90 & p_35)))
                {
                    (*p_36) |= (~(255UL >= l_103));
                    for (g_68 = (-15); (g_68 != 14); g_68 = safe_add_func_uint32_t_u_u(g_68, 2))
                    {
                        (*p_37) ^= (l_90 , ((&g_5 == (g_73 , p_36)) ^ (0x82E8BC96L || (safe_add_func_int8_t_s_s(((((l_103 > p_34) ^ (&g_5 == (g_73 , (void*)0))) & 1UL) != l_113), 0x0EL)))));
                        (*p_36) = (-1L);
                        (*p_36) = (safe_div_func_uint16_t_u_u(p_34, p_34));
                    }
                }
                else
                {
                    const int l_116 = 0xC23FC009L;
                    (*p_36) = ((l_116 && (g_68 | (safe_mul_func_uint8_t_u_u(((p_34 | (l_103 < (((((safe_add_func_int8_t_s_s(0L, (((p_35 , ((((g_68 < 0UL) & (+(1UL >= g_5))) & l_106) || g_68)) | 0x9F82L) , 246UL))) && (-7L)) ^ 0x1B8BL) , l_106) ^ 4294967295UL))) < 1L), g_73)))) | p_35);
                    if ((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_113, (~(l_106 <= (*p_33))))), (*l_127))) , l_113) | 0x8FA8L), g_5)))
                    {
                        int * const l_132 = &g_5;
                        (*p_36) = (safe_mod_func_uint16_t_u_u(((*l_127) & ((p_33 != l_132) , g_5)), (g_5 ^ (0xB3D10A89L || (((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(g_68, (l_106 , 0x8265L))), 15)) | l_103) , 0x8081AEECL)))));
                        (*p_37) = g_73;
                        return p_36;


                    }
                    else
                    {
                        int **l_137[7][2][2] = {{{&l_127, &l_127}, {&l_127, &l_127}}, {{&l_127, &l_127}, {&l_127, &l_127}}, {{&l_127, &l_127}, {&l_127, &l_127}}, {{&l_127, &l_127}, {&l_127, &l_127}}, {{&l_127, &l_127}, {&l_127, &l_127}}, {{&l_127, &l_127}, {&l_127, &l_127}}, {{&l_127, &l_127}, {&l_127, &l_127}}};
                        int i, j, k;
                        p_37 = l_127;
                        l_138 |= (*p_36);
                    }
                }
                l_138 = (*p_33);
                (*p_37) = 0xAA7E9AD5L;
            }
        }
        for (l_90 = 0; (l_90 <= 8); l_90 += 1)
        {
            return l_127;


        }
    }
    else
    {
        int l_140 = 0x1BBE70E5L;
        for (g_68 = 0; (g_68 <= 6); g_68 += 1)
        {
            unsigned l_155 = 4294967295UL;
            (*l_127) = (0xECL >= l_140);
            for (l_90 = 1; (l_90 <= 6); l_90 += 1)
            {
                int *l_159[8][7] = {{(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}, {(void*)0, &g_5, (void*)0, &g_5, (void*)0, &g_5, (void*)0}};
                int **l_160 = &l_127;
                int i, j;
            }
        }
        (**g_161) &= (0x3E69L != (g_161 != &g_162));
    }
    g_175[1] &= (((safe_mul_func_uint16_t_u_u(func_55((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(0UL, 4)) != (!((*g_161) != p_33))), (-10L))), g_139[3][8], ((g_163 == (safe_div_func_uint8_t_u_u((((((*l_127) >= (!p_34)) & ((((safe_lshift_func_uint16_t_u_s(((*l_127) != 0xB6L), g_5)) | p_35) && 0x81L) , g_68)) , 0x91L) && p_34), (*l_127)))) , l_174), l_174), g_5)) ^ 0UL) ^ (*l_174));
    if (((+0xB87DL) < ((((safe_lshift_func_int16_t_s_s(((((*l_127) , (((*l_127) ^ 0x6E20L) & (0xED1FL != (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s((*l_127))), (((safe_mul_func_int16_t_s_s(g_5, (safe_lshift_func_uint8_t_u_s(g_163, p_35)))) || 1L) || (*g_162))))))) , p_37) != (void*)0), 5)) , p_35) , (void*)0) != (*g_161))))
    {
        int **l_185 = (void*)0;
        p_36 = l_174;
        for (g_68 = 0; (g_68 >= 34); g_68++)
        {
            for (g_147 = 0; g_147 < 7; g_147 += 1)
            {
                for (g_163 = 0; g_163 < 9; g_163 += 1)
                {
                    g_139[g_147][g_163] = (-6L);
                }
            }
        }
    }
    else
    {
        int l_188 = 0xF0FEBA86L;
        (*p_37) = (!l_188);
        (*g_161) = (void*)0;

        ;
    }

    ;
    return l_174;


}







static int * func_38(short p_39, char p_40)
{
    unsigned l_88[3][9] = {{0x103C2894L, 0UL, 0x961AC8BEL, 0x961AC8BEL, 0UL, 0x103C2894L, 0UL, 0x961AC8BEL, 0x961AC8BEL}, {0x103C2894L, 0UL, 0x961AC8BEL, 0x961AC8BEL, 0UL, 0x103C2894L, 0UL, 0x961AC8BEL, 0x961AC8BEL}, {0x103C2894L, 0UL, 0x961AC8BEL, 0x961AC8BEL, 0UL, 0x103C2894L, 0UL, 0x961AC8BEL, 0x961AC8BEL}};
    int *l_89 = &g_73;
    int i, j;
    (*l_89) = (safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_40, func_43(p_40))), (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(g_5, p_40)), ((safe_mul_func_uint8_t_u_u(p_39, l_88[0][1])) >= (l_88[1][2] <= g_5))))));
    return l_89;


}







static char func_43(int p_44)
{
    unsigned l_52 = 0xBFA08552L;
    int *l_60 = &g_5;
    int l_75 = 0xE42CDC50L;
    l_75 = ((((&g_5 == (void*)0) , ((safe_add_func_uint16_t_u_u(g_5, (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((p_44 != (p_44 > 1L)) | 0UL), ((l_52 && (safe_rshift_func_uint8_t_u_u((!func_55(((l_52 , l_60) != l_60), p_44, &g_5, &g_5)), 2))) != l_75))) , p_44), p_44)))) > p_44)) || p_44) > g_5);
    return (*l_60);
}







static unsigned char func_55(const char p_56, const unsigned p_57, int * p_58, const int * p_59)
{
    unsigned short l_61[4][6][8] = {{{0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}}, {{0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}}, {{0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}}, {{0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}, {0xEAA9L, 65531UL, 0xEDE6L, 65535UL, 0UL, 65535UL, 0xEDE6L, 65531UL}}};
    int *l_66 = &g_5;
    unsigned l_67 = 0xB9DB5DF1L;
    int l_69 = 0x678C6C42L;
    int l_74 = 0x2ABB1EF3L;
    int i, j, k;
    g_68 = (l_61[0][4][1] <= ((!((((p_57 != (g_5 >= (safe_sub_func_int8_t_s_s((p_57 , (((((safe_lshift_func_uint8_t_u_s(0x8AL, ((((p_56 , &g_5) == &g_5) , l_61[0][4][1]) > 0xC29BL))) , p_57) , l_66) == &g_5) , 0xA9L)), g_5)))) == 1UL) > l_67) || g_5)) , g_5));
    l_69 |= ((((3L <= 0xAEL) < ((*l_66) , (l_66 == ((((p_56 , (((g_68 , &g_5) == (void*)0) & (0xEEDBL | p_57))) , 0xD947E9E5L) == 0L) , p_59)))) , g_5) & (*l_66));
    for (l_69 = 5; (l_69 == 17); l_69++)
    {
        int *l_72 = &g_73;
        (*l_72) = ((*p_59) , (p_57 | 0xEF36L));
    }
    return l_74;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_139[i][j], "g_139[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_640[i][j][k], "g_640[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_753, "g_753", print_hash_value);
    transparent_crc(g_903, "g_903", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
