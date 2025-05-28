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



static unsigned g_13 = 0x289A6957L;
static int g_48 = 1L;
static unsigned g_49 = 0xDE6EAB3AL;
static char g_65[7][3] = {{(-1L), 0x4BL, 0L}, {(-1L), 0x4BL, 0L}, {(-1L), 0x4BL, 0L}, {(-1L), 0x4BL, 0L}, {(-1L), 0x4BL, 0L}, {(-1L), 0x4BL, 0L}, {(-1L), 0x4BL, 0L}};
static int g_66[6] = {0x4E69A457L, 0x4E69A457L, 0x4E69A457L, 0x4E69A457L, 0x4E69A457L, 0x4E69A457L};
static unsigned short g_71 = 0xF607L;
static int *g_77 = &g_48;
static char g_123[5] = {0xF6L, 0xF6L, 0xF6L, 0xF6L, 0xF6L};
static unsigned short g_125 = 0xB2DEL;
static unsigned g_141 = 0xFC517259L;
static short g_163 = 3L;
static unsigned char g_166 = 246UL;
static short g_170[4] = {0x471FL, 0x8459L, 0x471FL, 0x8459L};
static char *g_188 = &g_65[3][0];
static char **g_187 = &g_188;
static int g_191 = 9L;
static unsigned short *g_209 = &g_125;
static unsigned short **g_208[2] = {&g_209, &g_209};
static unsigned g_244 = 4294967295UL;
static int *g_247 = (void*)0;
static int **g_246 = &g_247;
static short *g_509 = &g_170[2];
static short **g_508 = &g_509;
static char ***g_537 = &g_187;
static char ****g_536 = &g_537;
static unsigned g_551 = 1UL;
static int g_566 = (-5L);
static char g_567[10][2] = {{0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}, {0x7EL, 0x4CL}};
static int *g_574 = &g_66[3];
static int **g_637 = (void*)0;
static int ***g_636 = &g_637;
static int g_647 = (-1L);
static unsigned short g_680 = 0UL;
static int *g_742 = &g_66[3];
static int **g_797[4][2] = {{&g_574, &g_742}, {&g_574, &g_742}, {&g_574, &g_742}, {&g_574, &g_742}};
static int ****g_805 = (void*)0;
static unsigned char g_937 = 0x7FL;
static unsigned short ****g_1100 = (void*)0;
static unsigned short *g_1104 = &g_680;
static int *g_1125 = &g_48;
static short g_1168[10] = {(-6L), 9L, (-6L), 9L, (-6L), 9L, (-6L), 9L, (-6L), 9L};
static unsigned short g_1279[1][10] = {{1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL}};



static unsigned char func_1(void);
static int func_3(short p_4, int p_5, unsigned short p_6, unsigned p_7, unsigned char p_8);
static short func_14(unsigned p_15, unsigned p_16, short p_17);
static char func_30(unsigned short p_31, unsigned short p_32, unsigned p_33, unsigned short p_34, short p_35);
static unsigned short func_40(int p_41, int p_42, char p_43, int p_44, unsigned p_45);
static int * func_52(int p_53, int * p_54);
static int func_81(unsigned short * p_82, int p_83, int p_84, int p_85, unsigned short * p_86);
static unsigned func_89(short p_90);
static int ** func_94(char * p_95, short p_96, char * p_97, unsigned char p_98);
static char * func_99(unsigned short * p_100, int p_101, int * p_102, int p_103, int p_104);
static unsigned char func_1(void)
{
    int l_2[6] = {(-6L), 0x1897A4A1L, (-6L), 0x1897A4A1L, (-6L), 0x1897A4A1L};
    unsigned l_46 = 4294967295UL;
    int *l_47 = &g_48;
    char *l_69 = &g_65[4][2];
    unsigned short *l_70 = &g_71;
    unsigned char *l_997 = (void*)0;
    unsigned char *l_998[10][1] = {{&g_937}, {&g_937}, {&g_937}, {&g_937}, {&g_937}, {&g_937}, {&g_937}, {&g_937}, {&g_937}, {&g_937}};
    char l_999 = 0x9AL;
    char l_1005 = 0x87L;
    char l_1235 = 1L;
    unsigned short ***l_1244 = &g_208[1];
    unsigned short ****l_1243 = &l_1244;
    unsigned l_1265 = 0x826E6C13L;
    unsigned l_1270[9][2] = {{0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}, {0UL, 4294967289UL}};
    int i, j;
    if ((l_2[5] == func_3(((+(safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_13, 0)), ((g_13 || 0x9AL) > ((*g_509) = func_14(g_13, (safe_lshift_func_int16_t_s_u(0xC710L, 2)), (safe_sub_func_uint16_t_u_u((8UL & (safe_rshift_func_int8_t_s_s((g_13 || (safe_mod_func_uint8_t_u_u((l_999 = (((*g_509) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(func_30(((*l_70) = (safe_lshift_func_int8_t_s_u(((*l_69) = (safe_add_func_uint16_t_u_u(func_40(((*l_47) = l_46), g_13, g_49, g_49, g_13), g_13))), l_46))), g_13, g_13, l_46, g_49), 1)), l_46))) == 65535UL)), g_567[8][1]))), 4))), l_46)))))))) & 5L), l_1005, l_46, l_2[1], l_2[2])))
    {
        unsigned char l_1200[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1200[i] = 0xF2L;
        l_1200[1] = (safe_add_func_uint8_t_u_u(g_170[0], (&g_508 == (void*)0)));
        return g_49;
    }
    else
    {
        char **l_1208 = (void*)0;
        unsigned char l_1212 = 0UL;
        int l_1213 = (-5L);
        int l_1290 = 0L;
        int l_1298 = 0xEA0833CBL;
        for (l_1005 = (-30); (l_1005 <= (-6)); l_1005++)
        {
            char **l_1207 = &l_69;
            int l_1211 = 7L;
            int l_1216[3][2][1] = {{{0x1353938EL}, {0x1353938EL}}, {{0x1353938EL}, {0x1353938EL}}, {{0x1353938EL}, {0x1353938EL}}};
            int *l_1251 = &g_566;
            int l_1263 = 5L;
            unsigned short l_1264 = 0x9FD9L;
            int *l_1267 = &l_1216[1][0][0];
            int l_1277 = 0L;
            short *l_1289[7];
            unsigned short ***l_1294 = &g_208[0];
            unsigned short ****l_1293 = &l_1294;
            unsigned *l_1296 = (void*)0;
            unsigned *l_1297[6];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1289[i] = &g_1168[4];
            for (i = 0; i < 6; i++)
                l_1297[i] = &l_1270[2][0];
            if ((safe_rshift_func_uint8_t_u_u(g_566, (safe_lshift_func_int16_t_s_u(((*g_509) = ((l_1207 == ((**g_536) = l_1208)) || ((safe_add_func_int8_t_s_s(l_1211, (l_1213 = l_1212))) & (safe_div_func_uint8_t_u_u((l_1216[1][0][0] = l_1212), 0x5AL))))), (*l_47))))))
            {
                unsigned l_1219 = 0xBF940361L;
                unsigned short *l_1237[6] = {&g_680, (void*)0, &g_680, (void*)0, &g_680, (void*)0};
                int l_1238 = (-1L);
                short l_1248 = 0xEE92L;
                unsigned l_1252 = 7UL;
                unsigned l_1253[10] = {0x116DC7F5L, 0x116DC7F5L, 0xFD5CDD52L, 0x116DC7F5L, 0x116DC7F5L, 0xFD5CDD52L, 0x116DC7F5L, 0x116DC7F5L, 0xFD5CDD52L, 0x116DC7F5L};
                int **l_1266 = &g_77;
                int i;
                if (l_1216[0][1][0])
                {
                    unsigned short l_1226[4];
                    short **l_1247 = &g_509;
                    int *l_1250 = &l_1216[1][0][0];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1226[i] = 0xB873L;
                    if ((*l_47))
                    {
                        unsigned short l_1222 = 65532UL;
                        (*g_1125) = (((((0xECB6L < (g_566 && 0x662D6894L)) && (*g_188)) >= ((safe_mod_func_int32_t_s_s((*g_1125), (*g_1125))) || (*g_509))) > l_1219) >= (safe_lshift_func_uint16_t_u_u((*g_1104), l_1222)));
                    }
                    else
                    {
                        unsigned short *l_1225 = &g_71;
                        int l_1236 = 9L;
                        l_1236 = ((safe_add_func_uint16_t_u_u((l_1236 == l_1226[3]), (*l_47))) == l_1238);
                    }
                    for (g_937 = 0; (g_937 <= 0); g_937 += 1)
                    {
                        int l_1241 = 0L;
                        unsigned short ****l_1242 = (void*)0;
                        int **l_1249 = &g_742;
                        int i;
                        (*l_47) = (((g_166 = (l_1248 = (safe_add_func_uint8_t_u_u((l_1241 = ((**g_508) <= ((func_89((l_1241 > (l_1242 != l_1243))) <= ((safe_sub_func_int32_t_s_s((l_1241 && g_65[4][2]), (l_1247 == (void*)0))) | (-1L))) | l_1226[3]))), l_1238)))) & l_1226[3]) != l_1213);
                        (*l_1249) = func_52(((void*)0 == &l_1213), &l_1213);

                        ;
                        l_1251 = l_1250;

                        ;
                        if (l_1252)
                            break;
                    }

                    ;

                    ;
                    return l_1253[1];



                }
                else
                {
                    unsigned *l_1260 = &l_1253[1];
                    int l_1261 = 0x25F246A7L;
                    (*l_1251) = (safe_lshift_func_uint8_t_u_s((((g_166 = (((*l_1260) = ((*l_1251) == 0xF9C9C6A9L)) | g_65[3][2])) == (*l_47)) | 0x06L), (*g_188)));
                }
                (*l_1266) = func_52(l_1265, &l_2[5]);

                ;
                (**l_1266) = (**l_1266);
                l_1267 = ((*l_1266) = &l_1213);

                ;
                ;
            }
            else
            {
                short l_1278 = (-5L);
                (*l_1267) = ((safe_div_func_int8_t_s_s((0xB7ECC567L && 0x85E63DC1L), (func_40(l_1212, l_1213, (*l_1251), (l_1270[7][0] = (*l_1251)), (safe_mod_func_uint8_t_u_u(func_14((*l_47), ((safe_add_func_uint16_t_u_u(((***l_1244) = (*l_1267)), (safe_mod_func_uint8_t_u_u((*l_1251), l_1277)))) <= l_1278), (*g_509)), 0x04L))) && g_163))) <= g_1279[0][1]);
                for (g_191 = (-6); (g_191 != 15); g_191 = safe_add_func_uint8_t_u_u(g_191, 4))
                {
                    unsigned l_1284[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1284[i] = 0xC0BEA6ADL;
                    (*l_47) = (safe_rshift_func_int16_t_s_s(0x4168L, (l_1284[0] = func_14(g_566, l_1278, (**g_508)))));
                }
            }

            ;
            ;
            l_1267 = func_52((safe_rshift_func_int16_t_s_u(((*l_1251) = ((((*g_509) = l_1213) != (safe_lshift_func_uint16_t_u_u(((*l_70) = (((*l_1267) < (l_1290 = (*l_1251))) != g_1279[0][8])), (safe_add_func_int32_t_s_s(((*l_1243) == ((*l_1293) = (void*)0)), ((safe_unary_minus_func_int16_t_s(((-2L) ^ g_123[1]))) | (l_1298 = (g_551 < l_1213)))))))) == (*l_1251))), 15)), &l_1216[2][1][0]);

            ;
            ;
        }


        ;
        return g_647;


    }
}







static int func_3(short p_4, int p_5, unsigned short p_6, unsigned p_7, unsigned char p_8)
{
    unsigned char *l_1008[8] = {&g_937, &g_937, &g_937, &g_937, &g_937, &g_937, &g_937, &g_937};
    unsigned char l_1011 = 0xCCL;
    int l_1012 = 1L;
    int l_1041 = (-10L);
    int ***l_1050 = &g_797[1][1];
    unsigned short l_1062[5] = {0UL, 0x3949L, 0UL, 0x3949L, 0UL};
    int *l_1063 = &g_66[3];
    int l_1083 = (-5L);
    unsigned short ***l_1099[8] = {&g_208[0], &g_208[0], &g_208[1], &g_208[0], &g_208[0], &g_208[1], &g_208[0], &g_208[0]};
    unsigned short ****l_1098[4] = {&l_1099[7], &l_1099[7], &l_1099[7], &l_1099[7]};
    char *****l_1114 = &g_536;
    int l_1170[9][6] = {{1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}, {1L, 0xD65E5076L, 5L, 0L, 0x0D42ED26L, (-1L)}};
    int i, j;
    if (p_8)
    {
        for (p_7 = 0; (p_7 >= 17); p_7++)
        {
            if (p_8)
                break;
        }
    }
    else
    {
        int *l_1014 = &l_1012;
        int **l_1024 = &g_247;
        unsigned short l_1040 = 0xEDD9L;
        int ***l_1056 = &g_797[2][1];
        int **l_1075 = &g_247;
        if ((l_1008[3] != (void*)0))
        {
            int **l_1016 = &l_1014;
            for (g_680 = 0; (g_680 >= 34); g_680++)
            {
                p_5 = func_89(p_7);
                l_1012 = l_1011;
                if (p_5)
                    continue;
                if (p_7)
                {
                    int **l_1013 = &g_77;
                    (*l_1013) = &p_5;

                    ;
                    p_5 = (-4L);
                    return p_7;



                }
                else
                {
                    int **l_1015 = &g_574;
                    (*l_1015) = l_1014;

                    ;
                    if ((*l_1014))
                        break;
                    (**l_1015) = func_14(p_5, (**l_1015), p_6);
                }

                ;
            }



            (*l_1016) = &l_1012;
        }
        else
        {
            int *l_1021 = &g_66[2];
            unsigned *l_1031[4][3][7] = {{{&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}}, {{&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}}, {{&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}}, {{&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}, {&g_13, &g_244, &g_13, (void*)0, (void*)0, (void*)0, &g_13}}};
            unsigned **l_1030 = &l_1031[0][0][2];
            int l_1037 = 8L;
            int i, j, k;
            if ((safe_add_func_uint8_t_u_u((*l_1014), p_5)))
            {
                l_1021 = func_52((safe_add_func_uint16_t_u_u(p_5, ((*g_509) = (**g_508)))), l_1014);

                ;
                (*l_1014) = (*l_1014);
            }
            else
            {
                for (g_191 = 0; (g_191 <= 1); g_191 += 1)
                {
                    (*l_1021) = l_1011;
                    return p_6;
                }
            }

            ;
            if ((safe_mod_func_uint8_t_u_u((1UL | func_89((*g_509))), l_1012)))
            {
                int ***l_1025 = &g_246;
                int ****l_1028 = (void*)0;
                (*l_1025) = l_1024;
                for (g_680 = 0; (g_680 > 7); g_680++)
                {
                    int *****l_1029[6] = {&l_1028, &g_805, &l_1028, &g_805, &l_1028, &g_805};
                    int i;
                    if ((((g_805 = l_1028) != &g_636) || func_89((l_1030 != (void*)0))))
                    {
                        int l_1032[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1032[i] = 0L;
                        (*l_1014) = (!l_1032[0]);
                        (*l_1014) = ((0x33A9L >= (func_89((*l_1014)) < (((safe_rshift_func_int16_t_s_u(p_4, 12)) < p_6) ^ (l_1012 || (safe_add_func_uint16_t_u_u(p_6, (p_5 != 1UL))))))) ^ p_4);
                        return l_1037;
                    }
                    else
                    {
                        l_1012 = (safe_lshift_func_uint8_t_u_u(l_1012, p_7));
                    }
                }
                l_1040 = 0xD9469BADL;
                return l_1041;
            }
            else
            {
                unsigned *l_1046 = (void*)0;
                int ***l_1049 = &g_797[1][1];
                int ****l_1051 = &l_1050;
                unsigned short ***l_1061[5][6][8] = {{{&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}}, {{&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}}, {{&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}}, {{&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}}, {{&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}, {&g_208[1], &g_208[1], &g_208[0], (void*)0, (void*)0, &g_208[1], &g_208[0], &g_208[1]}}};
                int i, j, k;
                l_1012 = p_8;
                l_1014 = (void*)0;

                ;
                (*l_1021) = (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_4, p_4)), ((*g_209) = (g_48 >= 0xFFL))));
                (**l_1056) = func_52(((((p_6 = p_6) == ((g_125 & p_5) > (safe_rshift_func_int8_t_s_u(((void*)0 != l_1056), 7)))) >= (****g_536)) && (((safe_rshift_func_uint16_t_u_u((l_1062[0] = (safe_rshift_func_int8_t_s_u(((((((void*)0 == l_1061[2][4][0]) ^ (p_5 >= p_5)) & g_937) ^ (**g_508)) >= p_8), (*l_1021)))), 1)) || 0x38L) < g_71)), l_1063);
            }



            ;
            for (g_566 = 0; (g_566 != (-8)); g_566 = safe_sub_func_uint8_t_u_u(g_566, 9))
            {
                return p_5;
            }
        }



        ;
        (**l_1050) = func_52(p_6, &l_1012);


        for (g_680 = 0; (g_680 <= 27); g_680 = safe_add_func_uint16_t_u_u(g_680, 2))
        {
            short l_1072[9][8] = {{0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}, {0xDFC8L, 0x4888L, 0x592EL, 1L, 1L, 0x592EL, 0x4888L, 0xDFC8L}};
            int l_1091 = (-1L);
            int **l_1092[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1092[i] = &g_77;
            for (l_1041 = 0; (l_1041 != (-23)); --l_1041)
            {
                for (g_125 = 0; (g_125 < 56); ++g_125)
                {
                    return p_5;



                }
                (**l_1050) = (void*)0;
            }
            if ((l_1072[3][5] <= g_13))
            {
                for (g_141 = 0; (g_141 > 37); g_141 = safe_add_func_int16_t_s_s(g_141, 5))
                {
                    return p_7;



                }
                (*l_1063) = (*l_1063);
            }
            else
            {
                int ***l_1076 = &g_246;
                (*l_1076) = l_1075;
                for (l_1011 = (-9); (l_1011 > 58); l_1011++)
                {
                    unsigned char l_1088 = 2UL;
                    unsigned *l_1089 = &g_141;
                    unsigned *l_1090[10] = {&g_244, &g_13, &g_244, &g_13, &g_244, &g_13, &g_244, &g_13, &g_244, &g_13};
                    char *****l_1095 = &g_536;
                    int i;
                }
            }
            (**l_1056) = &p_5;
            p_5 = (l_1098[2] != g_1100);
        }



    }




    for (l_1041 = 20; (l_1041 >= 10); l_1041--)
    {
        short l_1103 = (-1L);
        unsigned *l_1105 = &g_141;
        char *****l_1112 = &g_536;
        char ******l_1113 = &l_1112;
        short *l_1115 = (void*)0;
        short *l_1116 = (void*)0;
        short *l_1117 = &g_163;
        unsigned short l_1118[10][3] = {{65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}, {65526UL, 65526UL, 0x4171L}};
        int *l_1119[8] = {&g_66[3], (void*)0, &g_66[3], (void*)0, &g_66[3], (void*)0, &g_66[3], (void*)0};
        int l_1134 = (-3L);
        unsigned short *l_1160 = &l_1062[0];
        unsigned l_1172[4];
        int **l_1178 = &g_247;
        int *l_1193 = &l_1134;
        char l_1194 = 0x16L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1172[i] = 0UL;
    }
    for (g_125 = 0; (g_125 < 45); g_125++)
    {
        int *l_1197[5][4] = {{&l_1170[2][1], &g_66[3], &g_566, &g_566}, {&l_1170[2][1], &g_66[3], &g_566, &g_566}, {&l_1170[2][1], &g_66[3], &g_566, &g_566}, {&l_1170[2][1], &g_66[3], &g_566, &g_566}, {&l_1170[2][1], &g_66[3], &g_566, &g_566}};
        int i, j;
        l_1197[3][3] = &p_5;


    }
    return p_4;



}







static short func_14(unsigned p_15, unsigned p_16, short p_17)
{
    unsigned short l_1000 = 8UL;
    int *l_1001 = &g_66[0];
    int *l_1004 = &g_48;
    l_1001 = func_52(l_1000, l_1001);
    (*l_1004) = ((*l_1001) = (safe_add_func_uint16_t_u_u((p_17 > p_16), (*l_1001))));
    (*l_1004) = 0x0043E126L;
    return (*g_509);
}







static char func_30(unsigned short p_31, unsigned short p_32, unsigned p_33, unsigned short p_34, short p_35)
{
    int l_72 = 0L;
    unsigned short *l_73[10] = {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71};
    int *l_76 = &g_66[3];
    char ****l_780 = &g_537;
    unsigned short l_789 = 3UL;
    int ****l_795 = &g_636;
    int l_863 = (-6L);
    char l_913 = 0L;
    short l_924 = 1L;
    unsigned short ***l_968 = &g_208[1];
    int **l_986 = &g_574;
    int **l_987 = (void*)0;
    int **l_988[1];
    int *l_989[6];
    unsigned **l_996 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_988[i] = &g_742;
    for (i = 0; i < 6; i++)
        l_989[i] = &g_48;
    if (l_72)
    {
        char l_78 = (-1L);
        int *l_80 = (void*)0;
        int l_794 = 0x00ACA13AL;
        char *l_827[1];
        unsigned l_837 = 0xD2CC41B0L;
        int i;
        for (i = 0; i < 1; i++)
            l_827[i] = &g_65[4][2];
        if ((&p_34 != l_73[0]))
        {
            return l_72;
        }
        else
        {
            int **l_93 = &l_80;
            int l_817[2][3][4] = {{{1L, (-4L), 0x7470CB92L, 0x7470CB92L}, {1L, (-4L), 0x7470CB92L, 0x7470CB92L}, {1L, (-4L), 0x7470CB92L, 0x7470CB92L}}, {{1L, (-4L), 0x7470CB92L, 0x7470CB92L}, {1L, (-4L), 0x7470CB92L, 0x7470CB92L}, {1L, (-4L), 0x7470CB92L, 0x7470CB92L}}};
            char *l_826[5][5][2];
            char *l_828 = &g_123[4];
            int *l_872 = &l_72;
            char l_880 = (-1L);
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_826[i][j][k] = &g_123[1];
                }
            }
            for (p_31 = 3; (p_31 <= 9); p_31 += 1)
            {
                int *l_74 = &g_66[3];
                int **l_75[10];
                unsigned l_793 = 3UL;
                char **l_808 = &g_188;
                int i;
                for (i = 0; i < 10; i++)
                    l_75[i] = &l_74;
                g_77 = (l_76 = l_74);

                ;
                for (g_48 = 2; (g_48 >= 0); g_48 -= 1)
                {
                    unsigned l_419 = 0UL;
                    for (p_33 = 3; (p_33 <= 9); p_33 += 1)
                    {
                        int l_79 = 0L;
                        int ***l_561 = &l_75[9];
                        int i, j;
                        l_78 = 1L;
                        l_79 = g_65[(g_48 + 1)][g_48];
                        l_80 = &l_72;

                        ;
                    }
                }

                ;
                for (g_566 = 0; (g_566 <= 2); g_566 += 1)
                {
                    int l_787 = (-1L);
                    unsigned l_788 = 0x68B2420BL;
                    int l_818 = 0xED89F7A8L;
                    for (g_141 = 0; (g_141 <= 1); g_141 += 1)
                    {
                        int *l_765 = &g_66[3];
                        int i, j;
                        l_765 = l_765;
                        if (g_65[(g_566 + 4)][(g_141 + 1)])
                            break;
                    }
                    for (g_680 = 0; (g_680 <= 2); g_680 += 1)
                    {
                        int l_790 = 0xCF535A08L;
                        unsigned *l_791 = &g_141;
                        unsigned *l_792 = &g_244;
                        int i, j;
                        l_794 = ((*g_742) = func_40((safe_sub_func_uint32_t_u_u(((*l_792) = ((*l_791) = (safe_sub_func_int8_t_s_s((((g_65[(g_566 + 4)][g_680] & (*g_209)) || (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((**g_508) != (p_31 != 1L)), (+((*l_74) = ((((safe_div_func_uint32_t_u_u((((void*)0 == l_780) | (safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((func_40(((*l_74) = (safe_rshift_func_int8_t_s_s(l_787, 2))), p_33, p_34, l_788, g_170[2]) > g_567[4][0]) && l_789), (*g_209))) < p_35), (*g_509)))), (-3L))) < 0xB4L) & g_170[2]) & g_170[2]))))), l_790)), l_790))) <= (-3L)), g_13)))), p_34)), g_125, p_31, l_793, p_35));
                        (*g_574) = (*g_77);
                    }
                }
                (*l_93) = &l_794;

                ;
                for (g_48 = 0; (g_48 <= 2); g_48 += 1)
                {
                    for (g_551 = 0; (g_551 <= 9); g_551 += 1)
                    {
                        (*l_80) = (*g_77);
                    }
                }
            }

            ;
            ;
            for (g_71 = (-6); (g_71 == 56); g_71 = safe_add_func_uint8_t_u_u(g_71, 6))
            {
                unsigned l_838 = 1UL;
                int *l_859 = &l_817[0][0][1];
                int l_862[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_862[i] = 0x3B97D8ECL;
                if ((*g_574))
                    break;
                if ((safe_lshift_func_uint16_t_u_s((func_40((func_40(p_35, p_33, ((*l_828) = (safe_add_func_uint8_t_u_u(p_31, ((****l_780) = (p_35 >= 0xF4L))))), ((*l_76) = (safe_rshift_func_uint16_t_u_u(65529UL, 2))), ((**g_508) & 9UL)) & 0xC108L), p_34, p_31, p_34, p_34) || l_78), l_837)))
                {
                    (*g_742) = l_838;
                    for (p_34 = 0; (p_34 <= 1); p_34 += 1)
                    {
                        int i, j;
                        (*l_93) = func_52(g_65[(p_34 + 1)][p_34], &l_794);

                        ;
                        if (p_31)
                            continue;
                    }
                }
                else
                {
                    char l_839 = 0xCEL;
                    int *l_857 = (void*)0;
                    unsigned char *l_858 = &g_166;
                    unsigned *l_861 = (void*)0;
                    unsigned **l_860 = &l_861;
                    int *l_873 = &l_794;
                    if (l_839)
                        break;
                    (*g_574) = (func_40((safe_div_func_int32_t_s_s((func_40(p_32, (&g_13 == ((*l_860) = func_52((safe_div_func_uint8_t_u_u(((*l_858) = (p_35 && (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((((*g_509) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((*g_509), (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((!8UL) == ((l_857 != (void*)0) <= ((*l_76) ^ l_839))) <= p_31), l_839)), p_33)))), 0x9568L))) <= 1L))), (**g_187))), 2)))), g_191)), l_859))), p_34, l_862[1], l_863) >= g_123[1]), p_31)), p_34, p_31, p_34, p_33) >= l_839);

                    ;
                    if ((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((*l_858) = g_48))), (!(&p_34 != (void*)0)))))
                    {
                        int *l_867[5][1] = {{&l_862[1]}, {&l_862[1]}, {&l_862[1]}, {&l_862[1]}, {&l_862[1]}};
                        int l_868 = (-1L);
                        int *l_871 = &l_817[1][2][1];
                        int i, j;
                        (*l_859) = (((**g_187) == (***g_537)) ^ (!2UL));
                        (*l_93) = func_52((l_868 = 1L), l_859);

                        ;
                        (**l_93) = (safe_sub_func_int32_t_s_s(p_34, 0xAA1C13ECL));
                        l_871 = l_871;
                    }
                    else
                    {
                        (*l_93) = &l_794;

                        ;
                        l_873 = l_872;

                        ;
                        return (****g_536);
                    }

                    ;
                }

                ;
                return (****g_536);
            }
            (*l_76) = (safe_mod_func_uint32_t_u_u(p_34, (((safe_div_func_int32_t_s_s(((+(p_35 < 0xAEL)) < (&l_872 == &l_80)), ((l_837 >= (-1L)) | p_34))) > (safe_add_func_uint16_t_u_u(p_34, l_880))) | (*g_574))));
            for (p_33 = 0; (p_33 < 49); ++p_33)
            {
                char l_901 = 0x69L;
                int *l_908 = &l_863;
                for (g_647 = 0; (g_647 >= 13); g_647 = safe_add_func_uint16_t_u_u(g_647, 5))
                {
                    unsigned char l_906 = 247UL;
                    for (p_35 = (-3); (p_35 > (-29)); p_35 = safe_sub_func_int16_t_s_s(p_35, 4))
                    {
                        int *l_887 = (void*)0;
                        int **l_888 = &g_742;
                        unsigned short *l_897[6] = {(void*)0, &g_71, (void*)0, &g_71, (void*)0, &g_71};
                        unsigned char *l_898 = &g_166;
                        int i;
                        (*l_888) = ((*l_93) = l_887);

                        ;
                        ;
                        (*l_888) = func_52((*l_76), ((*l_93) = func_52((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_680, ((p_32 & (***g_537)) >= ((*l_872) < 0L)))), 5)), p_31)), &l_72)));

                        ;
                        ;
                        (**l_93) = (*l_76);
                        (**l_93) = func_40(p_31, (*l_76), p_35, (((*l_898) = ((safe_rshift_func_int8_t_s_s((&p_32 != l_897[5]), 7)) & (-4L))) | (safe_lshift_func_int8_t_s_s((((*g_209) = (**l_93)) | (*l_76)), 3))), (((*g_509) = ((*g_188) | l_901)) < (-7L)));
                    }

                    ;
                    ;
                    for (g_163 = 0; (g_163 <= 1); g_163 += 1)
                    {
                        int i, j, k;
                        (*l_93) = &l_817[g_163][g_163][(g_163 + 1)];

                        ;
                    }

                    ;
                    for (l_863 = 0; (l_863 == (-8)); l_863 = safe_sub_func_int32_t_s_s(l_863, 7))
                    {
                        int *l_907 = &g_191;
                        int *l_909 = (void*)0;
                        (*l_93) = func_52(((*l_907) = ((safe_mod_func_uint8_t_u_u(p_31, l_906)) ^ p_35)), l_908);

                        ;
                        l_909 = (void*)0;
                        (*l_93) = l_909;

                        ;
                    }
                    return p_31;


                }
            }
        }

        ;
        ;
    }
    else
    {
        char *l_910 = (void*)0;
        int l_911 = 0xCAA7A0DEL;
        int *l_912[1];
        int l_914 = (-6L);
        int **l_915 = &g_77;
        int l_955 = 1L;
        unsigned short *l_970 = &l_789;
        short **l_985 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_912[i] = &g_647;
        if (func_40(p_32, ((((*g_636) = (**l_795)) != l_915) > 0x741DL), p_32, (*g_574), p_33))
        {
            short l_935 = (-1L);
            int l_939 = 0xD080BBCEL;
            int *l_954 = &g_48;
            int *l_956 = &l_911;
            unsigned short ***l_967 = (void*)0;
            unsigned short ****l_966 = &l_967;
            unsigned short ****l_969 = &l_968;
            if ((*g_574))
            {
                unsigned char *l_916 = &g_166;
                int l_917 = 0xFB86CF9EL;
                char ***l_923 = &g_187;
                int *l_942 = &l_939;
                unsigned short *l_944 = &g_125;
                if (((*l_76) = ((p_32 >= 0x49L) == ((*l_916) = 253UL))))
                {
                    int *l_918[6] = {&l_72, &l_72, (void*)0, &l_72, &l_72, (void*)0};
                    unsigned char *l_936 = &g_937;
                    unsigned *l_938[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_938[i] = &g_244;
                    l_917 = 0xEDF5E26EL;
                    l_918[1] = func_52(p_31, &l_917);


                    l_917 = (((safe_lshift_func_int8_t_s_u((0x52L | p_33), ((((void*)0 != l_923) <= ((~l_924) == (g_141 = (l_939 = (safe_div_func_uint8_t_u_u(253UL, ((*l_936) = (safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_916) = (safe_lshift_func_int16_t_s_u((**g_508), ((**l_915) = (p_33 == ((((safe_rshift_func_uint8_t_u_u(l_935, g_71)) && p_34) ^ (-1L)) >= (****g_536))))))), l_917)) >= 0x068DL), g_123[2]))))))))) >= p_34))) > 0UL) & p_35);
                }
                else
                {
                    int *l_943 = &g_566;
                    for (l_935 = 5; (l_935 != 13); l_935 = safe_add_func_uint16_t_u_u(l_935, 9))
                    {
                        short l_948 = 0L;
                        unsigned *l_951[5] = {(void*)0, &g_141, (void*)0, &g_141, (void*)0};
                        int i;
                        l_943 = l_942;

                        ;
                    }

                    ;
                    for (l_911 = 29; (l_911 == (-19)); l_911 = safe_sub_func_uint32_t_u_u(l_911, 1))
                    {
                        if ((*g_77))
                            break;
                        l_954 = (void*)0;

                        ;
                        return (*g_188);
                    }
                }
                return (*l_76);
            }
            else
            {
                (*l_915) = func_52(l_955, l_956);

                ;
                (*l_915) = (void*)0;

                ;
            }

            ;
            for (g_141 = (-5); (g_141 != 26); g_141 = safe_add_func_uint16_t_u_u(g_141, 2))
            {
                (*l_915) = &l_939;

                ;
                for (g_680 = 0; (g_680 <= 2); g_680 += 1)
                {
                    int i, j;
                    return g_65[(g_680 + 4)][g_680];


                }
            }

            ;
            (*l_956) = ((g_141 >= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(4294967295UL)), p_34))) ^ func_40((p_34 == p_35), (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((*l_966) = &g_208[1]) == ((*l_969) = l_968)), p_31)), (*l_956))), p_33, p_34, (*l_956)));

            ;
        }
        else
        {
            int l_975 = 0x594E6E80L;
            short **l_976 = &g_509;
            unsigned char *l_979 = &g_166;
            unsigned short *l_980 = &l_789;
            (**l_915) = p_32;
        }


        (*l_915) = func_52((2UL == (g_551 >= (***g_537))), func_52((safe_sub_func_int16_t_s_s((*g_509), (p_35 < (safe_rshift_func_int16_t_s_s((&g_509 == (l_985 = (void*)0)), 15))))), &l_863));

        ;
        (*l_915) = (*l_915);
    }

    ;
    l_989[4] = ((*l_986) = (l_76 = func_52(p_33, &l_863)));

    ;
    ;

    for (g_141 = 0; (g_141 <= 39); g_141 = safe_add_func_int16_t_s_s(g_141, 6))
    {
        char l_992[3][3][2] = {{{1L, 0x96L}, {1L, 0x96L}, {1L, 0x96L}}, {{1L, 0x96L}, {1L, 0x96L}, {1L, 0x96L}}, {{1L, 0x96L}, {1L, 0x96L}, {1L, 0x96L}}};
        short l_993 = 0x6672L;
        unsigned *l_995 = &g_141;
        unsigned **l_994[4][8] = {{&l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995}, {&l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995}, {&l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995}, {&l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995, &l_995}};
        int i, j, k;
        l_993 = l_992[1][0][1];
        (*g_77) = (l_994[1][3] != (l_996 = &l_995));

        ;
    }


    return (***g_537);



}







static unsigned short func_40(int p_41, int p_42, char p_43, int p_44, unsigned p_45)
{
    int *l_56 = &g_48;
    int **l_60 = (void*)0;
    int **l_61 = &l_56;
    char *l_64 = &g_65[4][2];
    for (p_43 = (-11); (p_43 <= (-18)); p_43 = safe_sub_func_int32_t_s_s(p_43, 4))
    {
        int l_55 = 0xA9D01274L;
        int **l_59 = &l_56;
        (*l_59) = func_52(l_55, l_56);
    }
    (*l_61) = func_52(g_13, ((*l_61) = &g_48));
    g_66[3] = (safe_mod_func_uint32_t_u_u(g_49, ((**l_61) = ((*l_56) || (p_43 || ((*l_64) = (-1L)))))));
    (*l_56) = (safe_lshift_func_uint8_t_u_s((**l_61), g_66[3]));
    return g_66[0];
}







static int * func_52(int p_53, int * p_54)
{
    int *l_58 = &g_48;
    int **l_57 = &l_58;
    (*l_57) = (void*)0;

    ;
    return p_54;


}







static int func_81(unsigned short * p_82, int p_83, int p_84, int p_85, unsigned short * p_86)
{
    int **l_612[7][10][3] = {{{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}, {{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}, {{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}, {{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}, {{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}, {{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}, {{(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}, {(void*)0, &g_574, &g_574}}};
    int **l_628 = &g_247;
    char **l_675 = (void*)0;
    unsigned short l_719 = 0UL;
    int l_720 = (-3L);
    short l_741 = 0x5C8FL;
    int *l_745 = &g_566;
    int ****l_746 = &g_636;
    int i, j, k;
    l_612[6][5][1] = (void*)0;
    g_574 = (void*)0;

    ;
    if (g_567[5][0])
    {
        unsigned l_623 = 2UL;
        int l_624 = (-9L);
        unsigned char *l_625 = &g_166;
        int ***l_634 = (void*)0;
        char l_643 = 0x8FL;
        int *l_654 = &g_66[3];
        unsigned short ***l_660 = &g_208[1];
        unsigned char l_665 = 0UL;
        int ***l_696 = &l_628;
        int l_721 = (-6L);
        if ((safe_add_func_uint8_t_u_u(((*l_625) = (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0x87L, (func_89((l_624 = (safe_sub_func_uint8_t_u_u((func_89((**g_508)) == 4294967291UL), (((safe_add_func_int32_t_s_s(g_170[2], ((-4L) == ((*g_188) == l_623)))) != p_85) | l_623))))) > p_84))), 4))), p_83)))
        {
            char l_638 = 0x07L;
            int l_639[2][6][5] = {{{0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}}, {{0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}, {0L, (-2L), 0xB88F3010L, (-2L), 0L}}};
            int **l_652 = &g_247;
            int *l_664[4][9][7] = {{{&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}}, {{&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}}, {{&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}}, {{&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}, {&g_566, &g_48, &l_624, &g_48, (void*)0, &g_66[5], &l_624}}};
            int i, j, k;
            for (g_166 = 0; (g_166 <= 5); g_166 += 1)
            {
                int ***l_629 = &g_246;
                int i;
                g_66[g_166] = (safe_mod_func_uint8_t_u_u((((*l_629) = l_628) == (void*)0), g_66[g_166]));
                for (g_71 = 17; (g_71 < 50); ++g_71)
                {
                    int ****l_635 = &l_634;
                    l_639[1][4][4] = (safe_div_func_uint32_t_u_u((g_13 >= (((*l_635) = l_634) == g_636)), (l_638 = (p_83 = 0xAE10B3CCL))));
                }
                l_639[1][0][4] = (safe_unary_minus_func_uint8_t_u(0xC8L));
            }
            if ((((*p_86) | ((safe_rshift_func_int8_t_s_s(func_89(l_624), p_85)) < g_65[4][2])) != (l_638 > l_643)))
            {
                unsigned char l_646 = 0xCBL;
                unsigned short ***l_662 = &g_208[1];
                int *l_666 = &g_66[3];
                p_83 = p_84;
                g_66[3] = (((((safe_div_func_int32_t_s_s(l_646, func_89(p_84))) <= ((*l_625) = g_13)) || l_646) ^ (g_647 = p_85)) ^ (safe_sub_func_uint16_t_u_u((*p_86), (safe_add_func_int32_t_s_s((l_652 == &g_247), p_84)))));
                if ((func_89((*g_509)) > (+(p_83 & p_84))))
                {
                    short l_653 = 0x3E8FL;
                    l_654 = func_52(l_653, &l_639[1][4][4]);

                    ;
                }
                else
                {
                    g_574 = &g_566;

                    ;
                    if ((*g_574))
                    {
                        int *l_655 = (void*)0;
                        unsigned short ****l_661[4][4] = {{&l_660, &l_660, &l_660, &l_660}, {&l_660, &l_660, &l_660, &l_660}, {&l_660, &l_660, &l_660, &l_660}, {&l_660, &l_660, &l_660, &l_660}};
                        short *l_663[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_663[i] = &g_163;
                        l_655 = &p_83;

                        ;
                        l_639[1][0][4] = ((*g_574) = (p_83 = (*l_654)));
                        (*g_574) = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((*g_509), (&g_208[1] != (l_662 = l_660)))) == ((*l_654) = 0x89E4L)), ((*l_655) = l_639[1][4][4])));
                        l_664[1][6][6] = &p_83;


                    }
                    else
                    {
                        l_666 = func_52(l_665, l_666);
                        l_654 = &p_83;

                        ;
                    }

                    ;

                    g_77 = &p_83;

                    ;
                }


                ;
                ;

            }
            else
            {
                int l_684 = 0x45410807L;
                int *l_690 = (void*)0;
                if (((((p_85 | g_123[2]) | 0xCC6CB872L) > ((p_83 <= p_84) < ((*p_82) <= ((0xBB5DL <= (*g_209)) >= (p_85 != (*p_86)))))) && (****g_536)))
                {
                    char **l_674[2];
                    char ***l_673 = &l_674[0];
                    char ***l_676 = (void*)0;
                    char ***l_677 = (void*)0;
                    char ***l_678 = &l_675;
                    unsigned short *l_679[6] = {&g_680, &g_680, &g_680, &g_680, &g_680, &g_680};
                    char l_683[4];
                    int *l_685 = &g_66[4];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_674[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_683[i] = 0x75L;
                    l_685 = func_52(((safe_add_func_uint16_t_u_u((((((func_89((**g_508)) == (safe_sub_func_uint16_t_u_u((l_624 = ((((*l_673) = (void*)0) == ((*l_678) = l_675)) | 0UL)), p_85))) && (*g_209)) < ((((((p_84 || (safe_sub_func_uint16_t_u_u(((*g_509) <= (*p_86)), (*g_509)))) ^ g_65[1][2]) | (*p_86)) < p_85) >= (*g_509)) | p_83)) & l_683[1]) && 5L), 0xB970L)) & l_684), &l_684);

                    ;
                    for (g_163 = 0; (g_163 <= 1); g_163 += 1)
                    {
                        int l_691 = 1L;
                        l_684 = ((*g_209) ^ (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((*l_654) = (p_84 == 0x68L)), (l_690 != ((*l_652) = func_52(p_83, &l_639[0][5][2]))))), (p_84 ^ l_691))));

                        ;
                        l_684 = 0x7B03C9ADL;
                        g_77 = l_685;

                        ;
                    }


                    ;
                    (*l_654) = ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_696 != &l_652), (((void*)0 != (*g_246)) || 0x23L))), (safe_unary_minus_func_int16_t_s((p_84 & (*p_82)))))) | (g_567[5][0] == (safe_div_func_uint16_t_u_u((((*p_86) = 65535UL) | 0xDD68L), l_684))));
                }
                else
                {
                    p_83 = func_89(((*p_82) > 65528UL));
                }


                ;
            }


            ;
            ;
            ;

            for (g_566 = 0; (g_566 <= 1); g_566 += 1)
            {
                short l_700 = (-1L);
                g_77 = &p_83;

                ;
                p_83 = l_700;
            }
        }
        else
        {
            int l_703 = (-1L);
            int *l_705[8] = {&g_48, &g_48, (void*)0, &g_48, &g_48, (void*)0, &g_48, &g_48};
            char *l_712[2][2] = {{&g_123[1], &g_65[5][0]}, {&g_123[1], &g_65[5][0]}};
            int i, j;
            l_654 = &g_566;

            ;
            p_83 = 0x2027F275L;
            for (g_49 = 0; (g_49 >= 33); g_49++)
            {
                int *l_704 = (void*)0;
                (*l_654) = l_703;
                (*l_654) = p_85;
                l_704 = (void*)0;
                l_705[3] = l_704;
            }
            l_705[7] = func_52(((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((func_89((*l_654)) | (safe_sub_func_int8_t_s_s((&g_637 != (void*)0), (g_123[1] = p_85)))) && (safe_sub_func_int8_t_s_s(func_89((*l_654)), (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((l_719 & (g_13 < p_85)) & l_720) != (*p_86)), (*p_86))), g_65[4][2]))))), (*p_86))), l_721)) || 0xCCL), l_705[3]);
        }



        ;

        for (g_680 = 0; (g_680 != 11); ++g_680)
        {
            unsigned l_726[1];
            short l_729 = 0xEE0BL;
            int *l_744 = &g_66[3];
            int i;
            for (i = 0; i < 1; i++)
                l_726[i] = 4294967295UL;
            for (g_191 = 0; (g_191 <= 5); g_191 += 1)
            {
                int l_727 = 0L;
                int i;
                if ((((*l_625) = 0x39L) ^ g_66[g_191]))
                {
                    for (l_623 = 0; (l_623 <= 5); l_623 += 1)
                    {
                        int ****l_728 = &g_636;
                        int i;
                        g_66[g_191] = ((g_66[g_191] & (~g_125)) >= (&p_84 == &p_85));
                        l_729 = ((safe_lshift_func_uint8_t_u_u((((g_66[g_191] = p_84) >= (l_726[0] <= (l_726[0] ^ (*g_188)))) == ((l_727 && ((((*l_728) = &g_637) != &g_637) <= (l_696 == &g_246))) > p_84)), 2)) >= (*p_86));
                        return p_84;



                    }
                    if (p_83)
                        continue;
                }
                else
                {
                    int *l_730 = &l_721;
                    l_730 = &p_83;

                    ;
                }
                g_566 = (g_66[g_191] = ((****g_536) & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_85, (g_48 <= 1L))), (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((****g_536), 3)), (safe_rshift_func_uint8_t_u_u(p_84, 1))))))));
                if (l_741)
                    break;
                g_742 = &p_83;

                ;
            }
            for (l_721 = 3; (l_721 >= 0); l_721 -= 1)
            {
                int *l_743 = &g_66[3];
                l_744 = l_743;
                l_654 = l_745;

                ;
            }
            if (p_85)
                continue;
        }


        for (g_125 = 0; (g_125 <= 4); g_125 += 1)
        {
            (*g_636) = &l_745;

            ;
            (**g_637) = 1L;
        }

        ;
        if (((l_746 != &g_636) | (*g_209)))
        {
            char l_747 = 0x97L;
            int ***l_752 = &g_246;
            int *l_755 = &g_66[3];
            int *l_756 = &g_566;
            p_83 = (~(p_84 != ((((func_89(l_747) & 0x77820411L) < p_83) != (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_752 != l_696), 1)), (p_85 && (0x98B59B02L ^ 0UL))))) && l_747)));
            l_756 = (l_755 = &l_721);

            ;
            ;
            l_756 = &p_83;

            ;
            for (g_71 = 0; (g_71 > 16); g_71 = safe_add_func_uint16_t_u_u(g_71, 7))
            {
                unsigned short l_761 = 65533UL;
                int *l_762 = (void*)0;
                for (g_125 = 0; (g_125 < 19); g_125 = safe_add_func_uint8_t_u_u(g_125, 1))
                {
                    int *l_763 = &g_66[1];
                    for (l_624 = 0; l_624 < 2; l_624 += 1)
                    {
                        g_208[l_624] = &g_209;
                    }
                    l_763 = func_52(l_761, l_762);

                    ;
                }
            }
        }
        else
        {
            int *l_764 = &l_721;
            g_574 = l_764;

            ;
            g_77 = l_764;

            ;
        }


        ;
    }
    else
    {
        (*l_745) = (g_244 & ((((*g_246) = (*l_628)) == &p_85) != ((((**g_508) = (*g_509)) ^ (*l_745)) < (-5L))));
    }




    ;

    return (*l_745);




}







static unsigned func_89(short p_90)
{
    unsigned l_562[1];
    int *l_563 = &g_66[3];
    int *l_564 = (void*)0;
    int *l_565 = &g_566;
    unsigned short l_568 = 0xE131L;
    unsigned l_569 = 4294967288UL;
    int *l_597 = &g_66[1];
    unsigned char l_611 = 0x10L;
    int i;
    for (i = 0; i < 1; i++)
        l_562[i] = 0x3504A857L;
    l_569 = ((((g_567[5][0] = (~((*l_565) = ((*l_563) = l_562[0])))) <= p_90) && (l_568 & (g_191 > p_90))) & 0x1572L);
    for (g_566 = 0; (g_566 <= (-1)); --g_566)
    {
        int **l_572 = (void*)0;
        int **l_573 = &g_77;
        unsigned char l_575 = 0x96L;
        g_574 = ((*l_573) = &g_48);

        ;
        ;
        (*l_563) = l_575;
        if ((*g_77))
        {
            int l_576[6][1];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_576[i][j] = 1L;
            }
            if (((*l_563) = (0xEBL > (**l_573))))
            {
                unsigned l_584 = 0UL;
                int *l_585 = &g_48;
                l_576[4][0] = (1L >= 65535UL);
                (*l_573) = &g_66[2];

                ;
                for (l_568 = 0; (l_568 >= 3); l_568 = safe_add_func_uint32_t_u_u(l_568, 8))
                {
                    int *l_579 = &g_48;
                    l_579 = l_579;
                    for (l_569 = 0; (l_569 >= 11); l_569++)
                    {
                        return g_65[4][2];
                    }
                    (*l_573) = &g_48;

                    ;
                    for (g_551 = (-2); (g_551 >= 25); g_551++)
                    {
                        l_584 = (*l_565);
                        (*l_573) = (void*)0;

                        ;
                        (*l_563) = 0x62A0674CL;
                        g_77 = l_585;

                        ;
                    }
                }

                ;
                if ((*g_574))
                    break;
            }
            else
            {
                for (l_569 = 0; (l_569 <= 2); l_569 += 1)
                {
                    int l_588 = 0x38A6E474L;
                    int i, j;
                    (*l_563) = (safe_lshift_func_int16_t_s_s(g_65[(l_569 + 4)][l_569], 3));
                    for (g_141 = 0; (g_141 <= 2); g_141 += 1)
                    {
                        int i, j;
                        if (g_65[(l_569 + 2)][g_141])
                            break;
                        l_588 = (!g_170[l_569]);
                    }
                }
            }

            ;
        }
        else
        {
            unsigned short **l_595[4] = {&g_209, (void*)0, &g_209, (void*)0};
            int *l_598 = &g_48;
            char **l_605[1][10] = {{&g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188, &g_188}};
            int i, j;
            if (p_90)
            {
                int *l_594 = &g_566;
                unsigned short **l_596 = (void*)0;
                for (g_49 = (-16); (g_49 < 22); g_49 = safe_add_func_int32_t_s_s(g_49, 7))
                {
                    unsigned char l_591[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_591[i] = 255UL;
                    if ((*g_77))
                        break;
                    l_591[2] = (*g_574);
                    for (g_551 = 18; (g_551 < 44); g_551 = safe_add_func_int8_t_s_s(g_551, 1))
                    {
                        (*l_573) = l_594;

                        ;
                        (*l_563) = (((*g_536) == (*g_536)) | (l_595[0] != l_596));
                    }

                    ;
                    (*l_573) = l_597;

                    ;
                }

                ;
                l_594 = l_598;

                ;
            }
            else
            {
                char l_601 = (-1L);
                int l_602 = (-5L);
                for (g_244 = (-15); (g_244 != 16); g_244++)
                {
                    (*l_563) = l_601;
                    for (g_141 = 0; (g_141 <= 2); g_141 += 1)
                    {
                        l_598 = func_52(p_90, l_564);

                        ;
                        (*l_573) = (void*)0;

                        ;
                    }
                }

                ;
                ;
                (*l_563) = (l_602 = ((**g_508) <= (*g_509)));
            }

            ;
            ;
            (*l_573) = (void*)0;

            ;
            for (p_90 = 0; (p_90 < (-7)); --p_90)
            {
                int *l_606[6][5] = {{&g_66[4], (void*)0, &g_66[4], (void*)0, &g_66[4]}, {&g_66[4], (void*)0, &g_66[4], (void*)0, &g_66[4]}, {&g_66[4], (void*)0, &g_66[4], (void*)0, &g_66[4]}, {&g_66[4], (void*)0, &g_66[4], (void*)0, &g_66[4]}, {&g_66[4], (void*)0, &g_66[4], (void*)0, &g_66[4]}, {&g_66[4], (void*)0, &g_66[4], (void*)0, &g_66[4]}};
                int i, j;
                (*l_573) = func_52(((-1L) & (((*g_537) = l_605[0][6]) == l_605[0][6])), func_52(((void*)0 == &g_509), (g_77 = l_606[4][2])));

                ;
            }

            ;
        }

        ;
        (*l_597) = (l_611 = ((((safe_add_func_int16_t_s_s((*g_509), p_90)) | g_66[5]) || ((*g_209) = (*l_563))) != ((**g_508) >= p_90)));
    }
    return p_90;
}







static int ** func_94(char * p_95, short p_96, char * p_97, unsigned char p_98)
{
    unsigned char l_432 = 255UL;
    int *l_452 = &g_48;
    int l_481 = 0x802F9AF2L;
    int l_497 = (-1L);
    char ***l_535 = (void*)0;
    char ****l_534 = &l_535;
    int *l_541[7];
    int i;
    for (i = 0; i < 7; i++)
        l_541[i] = &l_481;
    if (p_98)
    {
        int *l_422 = &g_66[1];
        unsigned short **l_447 = &g_209;
        unsigned short **l_448 = &g_209;
        (*l_422) = (safe_add_func_uint8_t_u_u(p_98, g_125));
        for (p_98 = 0; (p_98 != 38); p_98 = safe_add_func_uint16_t_u_u(p_98, 1))
        {
            unsigned l_449 = 0x97B2767EL;
            char ***l_450 = &g_187;
            unsigned short l_451 = 2UL;
            char ***l_459 = (void*)0;
        }
    }
    else
    {
        int l_468 = 0L;
        int **l_469 = &g_77;
        short *l_476 = &g_170[1];
        (*l_469) = func_52(l_468, l_452);

        ;
        g_66[3] = ((safe_add_func_uint8_t_u_u(255UL, (*p_97))) & ((*g_77) == (safe_add_func_int32_t_s_s(((**l_469) >= p_98), ((*l_452) & (safe_lshift_func_int16_t_s_s(p_96, (+((*l_476) = g_48)))))))));
    }


    for (g_244 = (-21); (g_244 >= 14); ++g_244)
    {
        int l_479 = (-5L);
        int *l_480[2][2];
        int **l_482 = &l_480[1][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_480[i][j] = &g_66[3];
        }
        l_481 = ((&p_97 == (void*)0) ^ l_479);
        (*l_482) = &l_481;


    }
    for (g_125 = 0; (g_125 <= 1); g_125 += 1)
    {
        unsigned short l_489 = 9UL;
        int *l_491 = &g_66[0];
        char **l_527 = &g_188;
        int *l_556 = &g_191;
        unsigned short l_557 = 0x1AADL;
        for (g_163 = 0; g_163 < 2; g_163 += 1)
        {
            g_208[g_163] = (void*)0;
        }
        for (g_191 = 0; (g_191 <= 2); g_191 += 1)
        {
            int *l_483 = &g_66[3];
            int **l_493[3][9][3] = {{{&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}}, {{&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}}, {{&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}, {&l_483, &g_77, &l_491}}};
            int i, j, k;
            if (g_123[g_191])
            {
                int **l_488 = &l_483;
                int i;
                g_66[(g_191 + 1)] = ((p_96 && (*g_209)) & (((void*)0 == l_483) && (safe_lshift_func_int16_t_s_u(g_123[0], (*l_452)))));
                g_66[g_191] = (safe_add_func_int16_t_s_s(p_98, g_191));
                return &g_77;


            }
            else
            {
                int **l_490 = (void*)0;
                int **l_492 = &l_483;
                l_491 = (g_77 = func_52(l_489, l_483));

                ;
                (*l_492) = &l_481;

                ;
            }

            ;
            ;
            l_452 = l_491;

            ;
        }
        for (l_489 = 0; (l_489 <= 1); l_489 += 1)
        {
            int **l_494[8] = {(void*)0, &g_77, (void*)0, &g_77, (void*)0, &g_77, (void*)0, &g_77};
            int i;
            return l_494[3];


        }
        for (g_71 = 0; (g_71 <= 1); g_71 += 1)
        {
            char l_500 = 1L;
            int *l_506[1][10] = {{(void*)0, &g_48, (void*)0, &g_48, (void*)0, &g_48, (void*)0, &g_48, (void*)0, &g_48}};
            short **l_510[1];
            int l_525 = 0x52B67117L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_510[i] = &g_509;
            for (l_481 = 0; (l_481 <= 1); l_481 += 1)
            {
                unsigned short *l_501 = &l_489;
                int l_502 = (-9L);
                int *l_503 = &g_191;
                g_77 = func_52(((*l_503) = (l_502 = ((((*l_491) & ((*g_187) != (void*)0)) && (safe_sub_func_int16_t_s_s(p_96, (l_497 || (safe_add_func_uint32_t_u_u(g_123[0], (g_71 & ((*l_501) = ((l_500 != g_13) | (*g_209)))))))))) && 0xABL))), &g_66[0]);

                ;
            }
        }
    }


    ;
    g_66[4] = (-1L);
    return &g_77;


}







static char * func_99(unsigned short * p_100, int p_101, int * p_102, int p_103, int p_104)
{
    unsigned short *l_124 = &g_125;
    int l_126[1];
    int *l_127[9][10][1] = {{{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}, {{&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}, {&g_66[3]}}};
    char *l_134 = &g_65[4][2];
    short l_196[6];
    unsigned short l_215 = 1UL;
    unsigned short l_219 = 0UL;
    unsigned l_220 = 0UL;
    char **l_268 = &g_188;
    unsigned l_281 = 1UL;
    char ****l_289[1][6][1];
    int *l_317 = (void*)0;
    int ***l_413 = &g_246;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_126[i] = 1L;
    for (i = 0; i < 6; i++)
        l_196[i] = 0xE35DL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
                l_289[i][j][k] = (void*)0;
        }
    }
    if ((safe_rshift_func_uint8_t_u_u(0x7EL, ((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((g_65[3][1] | (safe_rshift_func_uint8_t_u_s((((*p_100) < (safe_rshift_func_uint16_t_u_u((!((*l_124) = (safe_lshift_func_int16_t_s_s((p_101 && ((safe_sub_func_uint16_t_u_u(g_66[3], (((g_77 = &p_103) != &g_66[3]) | (((void*)0 == &g_65[4][2]) > g_71)))) && 0xF9L)), g_123[1])))), 10))) >= p_101), 0))), 4)) ^ l_126[0]), p_101)) | g_123[4]))))
    {
        int **l_128 = &l_127[3][9][0];
        unsigned short *l_129 = &g_71;
        int l_130 = 0x7D18C36EL;
        unsigned short l_288 = 65535UL;
        int **l_290 = &g_247;
        int l_308[10][9][2] = {{{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}, {{0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}, {0xD27568DBL, (-4L)}}};
        unsigned char l_355 = 4UL;
        int i, j, k;
        (*l_128) = l_127[3][9][0];
        if ((&g_71 != l_129))
        {
            unsigned char l_167 = 0x20L;
            char l_177 = 0x49L;
            int l_207 = 0xD00B73EBL;
            unsigned char *l_249[6] = {&l_167, &l_167, (void*)0, &l_167, &l_167, (void*)0};
            int **l_287 = &g_247;
            unsigned short *l_312 = &g_125;
            int l_323[10];
            unsigned l_328[4];
            int i;
            for (i = 0; i < 10; i++)
                l_323[i] = 9L;
            for (i = 0; i < 4; i++)
                l_328[i] = 8UL;
            if ((l_130 = ((*g_77) = 0L)))
            {
                unsigned l_133 = 0x66D82068L;
                (*g_77) = ((void*)0 == &g_123[1]);
                for (p_101 = 8; (p_101 <= (-8)); p_101 = safe_sub_func_uint16_t_u_u(p_101, 1))
                {
                    (*l_128) = func_52(l_133, &g_66[0]);
                    (*l_128) = func_52(g_49, &g_48);
                }
                (*l_128) = (*l_128);
            }
            else
            {
                char *l_137 = &g_65[4][1];
                int l_171 = 0xA432D786L;
                unsigned l_240 = 0x27C4DB56L;
                int ***l_248 = &g_246;
                p_103 = (*p_102);
                if ((*g_77))
                {
                    int *l_135 = &l_130;
                    char *l_136 = &g_65[4][2];
                    unsigned *l_140 = &g_141;
                    for (p_101 = 0; (p_101 >= 0); p_101 -= 1)
                    {
                        int i;
                        p_102 = &l_126[p_101];

                        ;
                        return l_134;



                    }
                    (*l_128) = l_135;


                    if (((l_136 == l_137) > (((0L <= g_66[3]) | g_13) >= ((*l_140) = (~(safe_div_func_int32_t_s_s((&g_123[1] != l_136), (*p_102))))))))
                    {
                        short *l_162 = &g_163;
                        int l_164 = (-7L);
                        unsigned char *l_165[9] = {&g_166, &g_166, &g_166, &g_166, &g_166, &g_166, &g_166, &g_166, &g_166};
                        short *l_168 = (void*)0;
                        short *l_169 = &g_170[2];
                        int i;
                        (*g_77) = (0xE3L != (0xC4FE17DDL || ((p_102 != p_102) > ((safe_sub_func_int8_t_s_s(((*l_134) = g_125), ((safe_div_func_uint32_t_u_u((((+(((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((*l_135) || ((((*l_169) = (safe_rshift_func_uint8_t_u_s((*l_135), (((l_167 = (safe_mod_func_uint8_t_u_u(g_13, (safe_lshift_func_uint16_t_u_s((l_164 = (((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((((*l_162) = g_13) & g_123[1]), p_104)), (*l_135))), p_103)) < (*p_102)) > (*l_135))), g_141))))) || 0x32L) | g_66[3])))) != p_103) > 255UL)), p_104)), g_13)) & p_101) && g_123[1])) ^ g_66[4]) | (*p_102)), 0x203B3843L)) && l_171))) | 0xC6L))));
                        (*g_77) = ((*l_135) = (((g_71 == p_104) < ((*l_140) = 0xCD10D832L)) && (p_100 != p_100)));
                        (*g_77) = (g_49 || (+g_125));
                    }
                    else
                    {
                        int *l_172 = &l_126[0];
                        char *l_180 = &g_123[1];
                        (*l_135) = (*l_135);
                        l_172 = &g_48;

                        ;
                        (*l_135) = (g_65[2][1] < (((l_171 && ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_125, 11)), l_177)) && (((safe_sub_func_int32_t_s_s((((*l_180) = 0xF5L) ^ ((*g_77) != (p_103 > (safe_mod_func_int8_t_s_s(p_103, l_177))))), p_101)) ^ (*l_135)) > 0x1AL))) <= 4294967293UL) < g_166));
                        (*l_128) = (void*)0;
                    }
                    for (g_49 = 0; (g_49 < 57); ++g_49)
                    {
                        char *l_185 = &g_65[6][2];
                        int l_186 = 6L;
                        char ***l_189 = &g_187;
                        (*g_77) = (*p_102);
                        (*g_77) = (((l_185 == &g_65[4][2]) < 0x48L) || l_186);
                        (*g_77) = 0x89A0F2D9L;
                        (*l_189) = g_187;
                    }
                }
                else
                {
                    char ***l_206[7][8][4] = {{{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}, {{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}, {{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}, {{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}, {{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}, {{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}, {{&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}, {&g_187, &g_187, &g_187, &g_187}}};
                    char ****l_205 = &l_206[4][7][2];
                    int l_237 = 0xEB0DE8B8L;
                    int i, j, k;
                    for (g_49 = 0; (g_49 <= 0); g_49 += 1)
                    {
                        int *l_190 = &g_191;
                        unsigned *l_197 = (void*)0;
                        unsigned *l_198 = &g_141;
                        (*l_128) = func_52(((*l_190) = p_104), &g_66[3]);
                        (*g_77) = (safe_lshift_func_int16_t_s_u(p_103, (g_125 = g_71)));
                        (*g_77) = (((safe_div_func_int32_t_s_s(((&g_66[3] == &p_101) < ((((*l_198) = l_196[5]) | g_166) <= (g_123[3] < (safe_div_func_uint16_t_u_u(((*l_124) = ((safe_div_func_uint16_t_u_u((255UL ^ ((4294967295UL && (*p_102)) ^ (safe_add_func_uint8_t_u_u(g_48, p_101)))), 0x7561L)) && p_103)), 8L))))), 0x6EDFE9C0L)) || (*p_100)) ^ 9L);
                        if (l_171)
                            continue;
                    }
                    if ((((*l_205) = (void*)0) != (void*)0))
                    {
                        (*l_128) = &p_101;


                        l_207 = 0L;
                    }
                    else
                    {
                        unsigned short ***l_210 = &g_208[1];
                        (*l_210) = g_208[1];
                        (*l_128) = func_52(l_171, &g_66[3]);
                        (*g_77) = (*g_77);
                        (*l_128) = &p_101;


                    }


                    if ((*g_77))
                    {
                        int l_218[2][5] = {{6L, 0xE7D2BA4BL, 6L, 0xE7D2BA4BL, 6L}, {6L, 0xE7D2BA4BL, 6L, 0xE7D2BA4BL, 6L}};
                        unsigned char l_223 = 0x89L;
                        int i, j;
                        l_130 = ((*g_77) = (((g_170[2] < (safe_rshift_func_int16_t_s_u(l_215, (*p_100)))) > (safe_rshift_func_int16_t_s_u(l_218[0][0], l_219))) > (0x5F86D9A3L == l_220)));
                        p_104 = (safe_div_func_int16_t_s_s(p_104, l_223));
                        (*g_77) = l_171;
                    }
                    else
                    {
                        unsigned char l_232 = 0x03L;
                        unsigned *l_243 = &l_240;
                        int l_245[6][5][7] = {{{0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}}, {{0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}}, {{0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}}, {{0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}}, {{0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}}, {{0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}, {0xAF917290L, (-6L), 0x39CA9CDBL, (-5L), 0x8AB03692L, (-5L), 0x39CA9CDBL}}};
                        int i, j, k;
                        l_245[2][4][5] = (((*g_77) = ((g_66[3] == ((*p_102) <= (safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0UL, (safe_lshift_func_uint16_t_u_u((l_232 > (p_103 && ((((*l_243) = ((safe_add_func_uint16_t_u_u(((*g_209) = l_237), (safe_lshift_func_uint16_t_u_u(l_240, (((*g_77) | (safe_div_func_int16_t_s_s((((*g_188) = (**g_187)) || p_104), l_171))) && 65531UL))))) > p_101)) == g_48) != 0x76L))), 14)))), 1L)) & g_244), 4)))) > l_171)) <= l_207);
                    }
                }


                (*l_248) = g_246;
            }


            if (((g_166 = 1UL) || (~p_103)))
            {
                int l_258[5][5] = {{3L, 6L, 0x770EC779L, 1L, 1L}, {3L, 6L, 0x770EC779L, 1L, 1L}, {3L, 6L, 0x770EC779L, 1L, 1L}, {3L, 6L, 0x770EC779L, 1L, 1L}, {3L, 6L, 0x770EC779L, 1L, 1L}};
                int *l_273[7] = {&l_126[0], &l_126[0], &g_48, &l_126[0], &l_126[0], &g_48, &l_126[0]};
                short *l_305 = (void*)0;
                short *l_306 = (void*)0;
                short *l_307[9];
                int i, j;
                for (i = 0; i < 9; i++)
                    l_307[i] = &g_170[0];
                for (l_220 = 0; (l_220 == 30); l_220++)
                {
                    short *l_259 = &l_196[1];
                    char ***l_269 = &l_268;
                    (*g_77) = (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((*l_259) = l_258[3][1]), l_258[3][1])) <= l_177), l_177)), ((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((*g_188), (**g_187))) | ((safe_lshift_func_uint16_t_u_u((((*g_209) && (safe_add_func_uint8_t_u_u((((*g_188) <= ((((*l_269) = l_268) == (void*)0) & 1UL)) > l_258[3][1]), 0x12L))) | g_163), 15)) | 255UL)) != p_104) <= g_66[3]), l_258[0][2])) | 4294967295UL)));
                    (*l_128) = &g_66[3];
                    (*l_128) = func_52(p_104, &l_207);
                    g_77 = ((*l_128) = &p_101);

                    ;
                }

                ;

                for (l_207 = 5; (l_207 >= 0); l_207 -= 1)
                {
                    int ***l_270 = &g_246;
                    int i;
                }
                for (p_103 = (-3); (p_103 != 28); p_103++)
                {
                    unsigned char l_280[3][9][5] = {{{0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}}, {{0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}}, {{0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}, {0x24L, 254UL, 0xAFL, 254UL, 0x24L}}};
                    int i, j, k;
                    for (p_104 = (-23); (p_104 < (-17)); p_104 = safe_add_func_uint16_t_u_u(p_104, 1))
                    {
                        p_101 = (safe_add_func_int32_t_s_s((*p_102), (l_130 = (*p_102))));
                        if ((*p_102))
                            break;
                    }
                    (*l_128) = func_52(l_280[2][5][0], func_52(l_167, func_52(l_281, &g_48)));
                    if ((((safe_rshift_func_uint8_t_u_s(0x32L, 2)) || (safe_lshift_func_uint16_t_u_u((*p_100), 6))) > 6L))
                    {
                        (*l_128) = &l_207;
                        if ((*g_77))
                            continue;
                        if (l_280[2][1][3])
                            break;
                    }
                    else
                    {
                        char *l_286[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_286[i] = &g_123[3];
                        return l_286[6];



                    }
                    if (((g_246 = l_287) != (void*)0))
                    {
                        if (l_288)
                            break;
                        p_101 = ((void*)0 != l_289[0][0][0]);
                        (*l_128) = &p_101;
                    }
                    else
                    {
                        int ***l_291 = (void*)0;
                        l_287 = l_290;
                    }
                }
                l_127[3][7][0] = func_52((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u(((((*g_77) = (*g_77)) >= (((safe_lshift_func_uint16_t_u_u(65535UL, (safe_mod_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s((**g_187))) == ((safe_sub_func_int16_t_s_s(p_104, (safe_add_func_uint8_t_u_u((g_170[0] == l_167), (p_104 >= (g_123[4] = (*g_188))))))) || ((((l_207 = g_163) <= g_244) != p_104) ^ l_177))) & l_167), g_125)))) & l_167) | 1UL)) != l_308[4][2][0]), 6)) >= 0UL) ^ p_104), g_49)), &g_48);
            }
            else
            {
                unsigned short **l_311 = &g_209;
                int l_313 = 0L;
                p_102 = func_52((l_207 = (l_207 >= (((*l_311) = p_100) == l_312))), func_52(p_101, func_52(l_313, &l_313)));

                ;
                ;
                for (g_166 = 12; (g_166 < 15); g_166 = safe_add_func_uint16_t_u_u(g_166, 9))
                {
                    int *l_316 = &l_126[0];
                    (*g_77) = (*p_102);
                    (*l_128) = l_316;
                }
                (*l_128) = l_317;
            }

            ;


            ;
            for (g_163 = (-10); (g_163 != 22); ++g_163)
            {
                int *l_320 = (void*)0;
                if ((((*g_77) = (l_207 = (*g_77))) | (g_13 >= ((*p_100) | (*p_100)))))
                {
                    if ((*g_77))
                        break;
                    for (g_141 = 0; (g_141 <= 0); g_141 += 1)
                    {
                        (*g_77) = p_101;
                    }
                }
                else
                {
                    (*l_128) = &g_66[3];
                }
                (*l_128) = func_52(p_101, l_320);
                p_101 = (*g_77);
                p_104 = (l_328[0] = (g_244 ^ ((*g_77) = (((safe_add_func_int8_t_s_s(((*g_77) <= (l_167 >= 4294967295UL)), g_13)) | l_323[9]) & ((g_166 = g_49) || (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((*g_209) = (*p_100)), 14)), (+p_103))))))));
            }
            for (l_130 = 0; (l_130 != (-20)); l_130--)
            {
                int l_335 = 0L;
                short *l_338[9] = {&g_163, &g_163, &g_170[2], &g_163, &g_163, &g_170[2], &g_163, &g_163, &g_170[2]};
                short **l_339 = (void*)0;
                short **l_340 = &l_338[6];
                short **l_341 = (void*)0;
                short **l_342 = (void*)0;
                short *l_344 = &l_196[4];
                short **l_343 = &l_344;
                unsigned *l_345[9] = {&g_244, &g_244, (void*)0, &g_244, &g_244, (void*)0, &g_244, &g_244, (void*)0};
                int l_348 = 0xF986D55AL;
                int i;
                p_101 = ((safe_sub_func_uint8_t_u_u(((l_335 = (safe_rshift_func_int8_t_s_u(0x2FL, 5))) <= (g_141 = (g_244 = (safe_add_func_uint16_t_u_u((((*l_340) = l_338[2]) != ((*l_343) = &l_196[5])), g_244))))), l_177)) < (0x91327A0FL < (safe_lshift_func_uint8_t_u_u(l_348, (l_348 != ((l_348 & 0x5CF390D4L) <= l_328[0]))))));
            }
        }
        else
        {
            short *l_356 = &g_170[2];
            unsigned *l_365 = &g_244;
            int l_366[1][5][9] = {{{0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL, 5L, 0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL}, {0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL, 5L, 0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL}, {0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL, 5L, 0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL}, {0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL, 5L, 0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL}, {0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL, 5L, 0xE854735EL, 5L, 0xE4F86FADL, 0xE4F86FADL}}};
            int l_367[4];
            unsigned l_368 = 1UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_367[i] = 2L;
            (*g_77) = 0L;
            (*g_77) = (*g_77);
            for (l_281 = (-7); (l_281 == 28); l_281 = safe_add_func_int16_t_s_s(l_281, 9))
            {
                (*g_77) = 0x91BB542EL;
            }
            l_368 = (((((l_366[0][4][7] = (((((safe_mod_func_int32_t_s_s(((9L < ((*l_356) = (safe_mod_func_uint32_t_u_u((l_355 != (g_163 = p_104)), (*g_77))))) >= ((safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((*p_102) & (((*l_365) = (g_123[1] & g_244)) < (((**g_187) = p_103) != p_103))), p_101)) && 0L), (*g_77))) & g_125)), (*g_77))) >= 0L) != 0L) <= 0x986A586AL) | g_125)) ^ g_48) ^ g_49) && (*p_100)) != l_367[3]);
        }

        ;


        ;
    }
    else
    {
        short l_375 = 0xC4DAL;
        int *l_376 = &g_66[2];
        int l_377 = (-7L);
        unsigned *l_378 = &g_244;
        int l_379[5];
        char l_380 = 0xABL;
        int i;
        for (i = 0; i < 5; i++)
            l_379[i] = 9L;
        if ((((safe_sub_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((*l_378) = (l_375 && (l_377 = (&l_126[0] != (l_376 = (void*)0))))), (+(l_379[0] = ((*g_77) = 8L))))) ^ (l_380 <= (**g_187))) || (l_379[4] = (~(safe_mod_func_int8_t_s_s(((*g_188) = (**g_187)), g_170[3]))))), (g_123[1] || 0x32C4L))) && (*g_188)) > g_13))
        {
            unsigned char *l_389 = &g_166;
            int l_390 = 0x0239DE05L;
            char ***l_401[9][9] = {{&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}, {&g_187, &l_268, (void*)0, (void*)0, &g_187, (void*)0, &g_187, (void*)0, (void*)0}};
            char ****l_400 = &l_401[0][0];
            int i, j;
            for (l_377 = 0; l_377 < 2; l_377 += 1)
            {
                g_208[l_377] = &l_124;
            }

            for (g_244 = 0; (g_244 != 8); g_244 = safe_add_func_int16_t_s_s(g_244, 1))
            {
                if ((*p_102))
                    break;
            }
            (*g_77) = (safe_div_func_uint32_t_u_u(((!(*p_100)) < (~(((safe_rshift_func_int16_t_s_u(((l_389 == &g_166) | ((l_390 & p_101) != g_166)), (*p_100))) != (safe_lshift_func_int16_t_s_u(l_390, (*p_100)))) ^ 4294967286UL))), g_66[1]));
            for (g_163 = 1; (g_163 > 6); ++g_163)
            {
                int l_404 = (-10L);
                for (g_71 = 6; (g_71 == 28); ++g_71)
                {
                    short l_402 = 0xBFFCL;
                    for (l_220 = 0; (l_220 <= 0); l_220 += 1)
                    {
                        unsigned l_397[6][3] = {{0x469D8621L, 0xB63F0CFFL, 0xA94A030CL}, {0x469D8621L, 0xB63F0CFFL, 0xA94A030CL}, {0x469D8621L, 0xB63F0CFFL, 0xA94A030CL}, {0x469D8621L, 0xB63F0CFFL, 0xA94A030CL}, {0x469D8621L, 0xB63F0CFFL, 0xA94A030CL}, {0x469D8621L, 0xB63F0CFFL, 0xA94A030CL}};
                        unsigned *l_403[10][3][8] = {{{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}, {{&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}, {&g_141, &g_141, &g_13, &g_13, &g_141, &g_141, (void*)0, &g_13}}};
                        int i, j, k;
                        l_379[l_220] = ((l_397[3][1] = l_379[(l_220 + 2)]) & (*g_77));
                        (*g_77) = (safe_lshift_func_uint8_t_u_u(((l_289[l_220][(l_220 + 3)][l_220] == l_400) < (l_404 = (~((*l_378) = ((*p_100) || (p_101 > l_402)))))), 3));
                        if (l_390)
                            break;
                        (*g_77) = ((p_103 != (safe_add_func_int8_t_s_s(p_101, ((*l_389) = (safe_lshift_func_int8_t_s_s(((l_390 = g_66[3]) >= ((*l_134) = 5L)), 4)))))) && (l_379[l_220] = ((void*)0 != g_188)));
                    }
                }
                return (*g_187);




            }
        }
        else
        {
            unsigned short l_414 = 0UL;
            int l_417 = 0xEDB1D9BCL;
            for (g_166 = 26; (g_166 != 37); ++g_166)
            {
            }
        }


        ;
        (*g_77) = (*g_77);
    }

    ;


    ;

    return (*g_187);




}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_567[i][j], "g_567[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1168[i], "g_1168[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1279[i][j], "g_1279[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
