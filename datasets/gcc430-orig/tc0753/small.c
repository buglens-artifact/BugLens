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


union U0 {
   char f0;
   unsigned short f1;
   int f2;
};


static int g_15 = (-3L);
static int *g_50 = (void*)0;
static unsigned short g_52 = 4UL;
static int g_54 = 0xF84B0F4FL;
static char g_61 = 0x85L;
static int g_67 = 0L;
static int *g_66 = &g_67;
static short g_69[6] = {0xEB44L, 7L, 0xEB44L, 7L, 0xEB44L, 7L};
static unsigned g_90 = 4294967295UL;
static unsigned char g_116 = 0x85L;
static unsigned char g_118 = 3UL;
static char ***g_119 = (void*)0;
static union U0 g_170 = {-10L};
static unsigned short **g_171 = (void*)0;
static unsigned g_172[9] = {4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL};
static union U0 g_229 = {0xCFL};
static char *g_255 = &g_170.f0;
static char **g_254 = &g_255;
static unsigned short g_277 = 65533UL;
static int *g_302 = &g_229.f2;
static union U0 *g_303 = &g_170;
static int g_334[4][1] = {{1L}, {1L}, {1L}, {1L}};
static unsigned short g_358 = 0UL;
static int *g_418 = &g_67;
static unsigned char *g_423 = &g_118;
static unsigned char **g_422 = &g_423;
static unsigned g_466 = 2UL;
static int **g_494 = &g_50;
static int ***g_493 = &g_494;
static union U0 g_578 = {0L};
static unsigned *g_719[9][9] = {{&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}, {&g_90, (void*)0, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90, &g_90}};
static unsigned **g_718 = &g_719[5][3];
static int g_732 = (-4L);
static short g_740 = (-1L);
static short *g_739 = &g_740;
static union U0 **g_777 = (void*)0;
static union U0 **g_779[4][3][2] = {{{(void*)0, &g_303}, {(void*)0, &g_303}, {(void*)0, &g_303}}, {{(void*)0, &g_303}, {(void*)0, &g_303}, {(void*)0, &g_303}}, {{(void*)0, &g_303}, {(void*)0, &g_303}, {(void*)0, &g_303}}, {{(void*)0, &g_303}, {(void*)0, &g_303}, {(void*)0, &g_303}}};
static unsigned *g_806[3] = {&g_466, &g_466, &g_466};
static unsigned **g_805 = &g_806[0];



static union U0 func_1(void);
static int func_2(char p_3, char p_4, unsigned short p_5, short p_6, union U0 p_7);
static int func_10(short p_11, unsigned char p_12, short p_13, unsigned p_14);
static int func_16(union U0 p_17, unsigned p_18, unsigned short p_19, int p_20);
static union U0 func_21(char p_22, unsigned char p_23, int p_24, char p_25, int p_26);
static char func_29(int p_30, int p_31, unsigned char p_32, int p_33);
static int * func_35(unsigned p_36, int * p_37);
static int * func_38(char p_39, union U0 p_40);
static union U0 func_41(int * p_42, int * p_43);
static int * func_44(int p_45, int * p_46);
static union U0 func_1(void)
{
    int l_34[7][3] = {{(-10L), (-10L), 0xD5EC7E01L}, {(-10L), (-10L), 0xD5EC7E01L}, {(-10L), (-10L), 0xD5EC7E01L}, {(-10L), (-10L), 0xD5EC7E01L}, {(-10L), (-10L), 0xD5EC7E01L}, {(-10L), (-10L), 0xD5EC7E01L}, {(-10L), (-10L), 0xD5EC7E01L}};
    int l_304 = 0xE3687874L;
    int l_306 = 2L;
    unsigned short l_573 = 1UL;
    char *l_574[2][1];
    unsigned char l_575 = 0xADL;
    unsigned *l_576 = &g_90;
    char l_577 = (-1L);
    union U0 l_828 = {0xFEL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_574[i][j] = &g_61;
    }
    (*g_418) = func_2((safe_div_func_uint8_t_u_u(((((*l_576) = ((l_34[3][1] = (func_10(((!g_15) != 251UL), ((g_15 != 0L) ^ (((0UL < (g_15 | func_16(func_21(g_15, ((~0xB0FE2CF4L) | ((safe_rshift_func_int8_t_s_s(func_29(g_15, l_34[3][1], l_34[3][1], l_34[4][2]), 1)) <= l_34[3][1])), l_34[0][1], l_304, l_34[3][1]), l_306, g_172[5], g_172[3]))) != g_334[3][0]) ^ 0UL)), l_573, g_358) >= l_573)) | l_575)) < l_577) ^ (-1L)), g_358)), l_304, g_172[3], l_306, g_578);
    return l_828;
}







static int func_2(char p_3, char p_4, unsigned short p_5, short p_6, union U0 p_7)
{
    short l_585 = (-1L);
    char ***l_588 = (void*)0;
    int l_594 = 0xA6643504L;
    unsigned l_626 = 4294967295UL;
    int **l_664 = &g_302;
    short *l_702 = &g_69[4];
    short **l_701[9] = {&l_702, (void*)0, &l_702, (void*)0, &l_702, (void*)0, &l_702, (void*)0, &l_702};
    int *l_768[7] = {&g_334[3][0], &g_334[3][0], &g_15, &g_334[3][0], &g_334[3][0], &g_15, &g_334[3][0]};
    union U0 **l_776 = &g_303;
    int *l_780 = (void*)0;
    int i;
lbl_818:
    for (p_7.f2 = 0; (p_7.f2 == 24); p_7.f2++)
    {
        unsigned short l_607 = 65535UL;
        int l_618 = 1L;
        unsigned *l_678 = &g_90;
        char **l_688 = (void*)0;
        union U0 *l_705[1][3][1];
        int *l_709 = &l_594;
        unsigned char ***l_737[8][7] = {{(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}, {(void*)0, (void*)0, &g_422, (void*)0, (void*)0, &g_422, (void*)0}};
        char l_761[8] = {0x17L, 0x8FL, 0x17L, 0x8FL, 0x17L, 0x8FL, 0x17L, 0x8FL};
        int l_765 = 5L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_705[i][j][k] = &g_229;
            }
        }
    }
    for (g_90 = 0; (g_90 <= 0); g_90 += 1)
    {
        char l_790[10] = {(-10L), 0xF5L, (-10L), 0xF5L, (-10L), 0xF5L, (-10L), 0xF5L, (-10L), 0xF5L};
        unsigned short l_800[1][7][4];
        char ***l_801 = (void*)0;
        int *l_819 = &g_67;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 4; k++)
                    l_800[i][j][k] = 65535UL;
            }
        }
        for (p_5 = 0; (p_5 <= 6); p_5 += 1)
        {
            int i;
            if (p_6)
                break;
            (*g_494) = func_44(((void*)0 != &g_423), (l_780 = ((**g_493) = ((*l_664) = l_768[p_5]))));
        }
        for (l_626 = 0; (l_626 <= 6); l_626 += 1)
        {
            unsigned short l_787 = 0xC864L;
            unsigned char *l_799 = &g_116;
            int *l_815 = &g_54;
            (*g_493) = (*g_493);
            if (func_10((safe_lshift_func_uint8_t_u_s((func_10((safe_div_func_int16_t_s_s(((l_787 == 8UL) || ((safe_div_func_int32_t_s_s((((*g_423) = l_787) == l_790[9]), (**l_664))) >= (-1L))), (safe_sub_func_uint8_t_u_u(((*l_799) = (((**g_254) = (**l_664)) == (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((*g_739), (safe_add_func_int8_t_s_s(7L, l_787)))), p_7.f0)))), (**l_664))))), l_800[0][2][3], (*g_739), l_800[0][2][3]) & (**l_664)), p_7.f1)), l_790[6], (*g_739), g_334[0][0]))
            {
                if (p_5)
                    break;
                (*g_302) = (l_801 == (void*)0);
            }
            else
            {
                unsigned *l_804 = (void*)0;
                unsigned **l_803 = &l_804;
                unsigned ***l_802[6][10][4] = {{{&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}}, {{&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}}, {{&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}}, {{&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}}, {{&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}}, {{&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}, {&l_803, &l_803, (void*)0, (void*)0}}};
                int l_810 = 0x415EBEF3L;
                int **l_820 = &l_819;
                int **l_821[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                int ***l_822 = &l_821[8];
                int i, j, k;
                g_805 = (void*)0;
                if (((void*)0 != l_702))
                {
                    unsigned short l_809 = 0x8C03L;
                    int i;
                    (**l_664) = (safe_sub_func_int32_t_s_s(l_809, (((*l_702) = (p_5 < func_10((*g_739), l_810, p_4, p_7.f2))) | (safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_768[(g_90 + 3)] != l_815), (**g_422))) && (**l_664)), (*l_815))))));
                    (*g_302) = (safe_rshift_func_uint16_t_u_s((p_6 <= l_809), (*g_739)));
                }
                else
                {
                    for (g_118 = 0; (g_118 <= 6); g_118 += 1)
                    {
                        if (g_15)
                            goto lbl_818;
                    }
                }
                (*l_820) = ((*l_664) = ((*g_494) = l_819));
                (*l_822) = l_821[8];
            }
            (*g_66) = (*l_815);
        }
    }
    for (g_358 = 0; (g_358 <= 33); g_358 = safe_add_func_int32_t_s_s(g_358, 1))
    {
        for (l_626 = 0; (l_626 < 4); ++l_626)
        {
            char l_827[9][3] = {{0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}, {0x2BL, 0x94L, 0xA0L}};
            int i, j;
            l_827[6][1] = (p_7.f0 >= 0x3EL);
        }
    }
    return (**l_664);
}







static int func_10(short p_11, unsigned char p_12, short p_13, unsigned p_14)
{
    return p_14;
}







static int func_16(union U0 p_17, unsigned p_18, unsigned short p_19, int p_20)
{
    unsigned char l_307 = 0UL;
    short *l_311 = &g_69[5];
    unsigned char *l_312 = &g_118;
    int *l_322[3];
    union U0 *l_351 = &g_170;
    unsigned short *l_359 = &g_277;
    short l_398 = 0x43F3L;
    char **l_472 = &g_255;
    int l_528 = 0L;
    unsigned short l_570 = 0x54C0L;
    int l_572[1][2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_322[i] = &g_54;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_572[i][j] = 7L;
    }
    if ((((0xFB300115L <= l_307) < (p_20 >= (safe_unary_minus_func_int8_t_s((*g_255))))) >= (((g_61 > ((*l_312) = (safe_rshift_func_int16_t_s_s((((-3L) > 0x583CL) | (((*l_311) = g_69[4]) > (4294967288UL >= p_19))), 3)))) && 0x32AA098AL) && 0x525884CEL)))
    {
lbl_555:
        (*g_66) = (*g_66);
    }
    else
    {
        int *l_315 = &g_67;
        char *l_338 = (void*)0;
        union U0 *l_349 = &g_170;
        union U0 **l_350[7];
        int i;
        for (i = 0; i < 7; i++)
            l_350[i] = &l_349;
        for (g_118 = 18; (g_118 != 27); ++g_118)
        {
            int **l_316 = &g_50;
            union U0 **l_317 = &g_303;
            (*l_316) = l_315;
            (*l_317) = &p_17;
            (*g_302) = 0x103A3FB9L;
        }
        for (g_170.f0 = 5; (g_170.f0 >= 0); g_170.f0 -= 1)
        {
            unsigned l_321 = 9UL;
            int *l_325 = &g_67;
            char *l_340 = &g_61;
            unsigned l_348 = 0xCEB2B01DL;
            for (g_61 = 0; (g_61 <= 8); g_61 += 1)
            {
                for (g_54 = 1; (g_54 <= 5); g_54 += 1)
                {
                    char *l_320 = (void*)0;
                    int **l_326 = (void*)0;
                    int **l_327 = (void*)0;
                    int i;
                    (*g_302) = (safe_add_func_int16_t_s_s((g_172[g_61] == (l_321 = (l_320 == l_312))), (g_69[g_170.f0] <= (*g_66))));
                    for (g_277 = 3; (g_277 <= 8); g_277 += 1)
                    {
                        int **l_323 = (void*)0;
                        int **l_324 = &l_322[2];
                        l_325 = ((*l_324) = l_322[2]);
                    }
                    g_66 = l_315;
                }
                return (*g_302);
            }
            if ((safe_lshift_func_uint8_t_u_s(0x9CL, (safe_rshift_func_uint8_t_u_s(p_18, 3)))))
            {
                return (*l_315);
            }
            else
            {
                unsigned short l_335 = 0x1ADBL;
                char **l_339 = &l_338;
                unsigned char *l_341 = &g_116;
                (*g_66) = (safe_rshift_func_int8_t_s_s(g_334[3][0], (((*l_325) = ((+l_335) == (((*l_341) = ((*l_312) = (safe_sub_func_int32_t_s_s(0x0020281DL, (((*g_254) = (*g_254)) == (l_340 = ((*l_339) = l_338))))))) != (p_17.f0 = (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((0x3062EDECL & (safe_rshift_func_int16_t_s_u(((*l_311) = ((*l_325) <= (((*g_302) ^ l_348) < 0UL))), 11))), 2)), 0x80L)))))) <= g_52)));
                (*g_66) = ((*l_325) = ((void*)0 != &g_171));
            }
        }
        l_351 = l_349;
    }
lbl_505:
    if ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(1L, (*g_255))), g_358)), (~(((l_322[2] == (void*)0) && ((*l_359) = 0x3F9EL)) || (0L >= (p_20 ^ p_17.f0)))))))
    {
        unsigned char *l_362 = &l_307;
        int l_363[1];
        short **l_366[10][4][5] = {{{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}, {{&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}, {&l_311, &l_311, &l_311, &l_311, &l_311}}};
        int *l_399 = &g_67;
        union U0 *l_434 = &g_229;
        short l_447 = 1L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_363[i] = 0xF6E66C45L;
        if (((*g_66) = (safe_rshift_func_uint16_t_u_u((l_362 != (void*)0), 4))))
        {
            l_322[2] = func_38(l_363[0], p_17);
        }
        else
        {
            return p_17.f0;
        }
    }
    else
    {
        int l_451 = (-4L);
        (*g_418) = (safe_add_func_int32_t_s_s((65528UL && (l_451 = 0x3E6DL)), (p_20 || p_20)));
        for (g_54 = 0; (g_54 != (-12)); g_54--)
        {
            union U0 **l_454[3][10] = {{&l_351, &l_351, &l_351, &g_303, &l_351, &g_303, &l_351, &l_351, &l_351, &g_303}, {&l_351, &l_351, &l_351, &g_303, &l_351, &g_303, &l_351, &l_351, &l_351, &g_303}, {&l_351, &l_351, &l_351, &g_303, &l_351, &g_303, &l_351, &l_351, &l_351, &g_303}};
            int i, j;
            l_351 = (void*)0;
            return p_18;
        }
    }
    if (p_20)
    {
        char l_481[10][6][4] = {{{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}, {{1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}, {1L, 0L, (-7L), 0xE4L}}};
        int l_488 = 0xCA26BFCBL;
        int *l_514 = &g_334[0][0];
        int i, j, k;
        if (p_18)
        {
            unsigned l_459[2];
            unsigned char *l_465 = &l_307;
            short l_467 = 0L;
            unsigned l_468 = 0xD8817E3DL;
            int l_495 = 1L;
            int *l_498 = &g_67;
            int i;
            for (i = 0; i < 2; i++)
                l_459[i] = 0x7F9FE42FL;
            for (p_17.f2 = (-18); (p_17.f2 > (-1)); p_17.f2 = safe_add_func_int32_t_s_s(p_17.f2, 1))
            {
                unsigned char *l_464 = &l_307;
                unsigned char l_480 = 0x47L;
                if ((safe_sub_func_uint32_t_u_u(func_29(func_29(g_52, l_459[0], l_459[0], g_54), p_17.f0, (safe_mod_func_int8_t_s_s((+((g_466 = (safe_rshift_func_uint16_t_u_u(l_459[1], (l_464 != l_465)))) > p_19)), l_467)), p_17.f2), l_468)))
                {
                    unsigned char l_469 = 0x42L;
                    return l_469;
                }
                else
                {
                    char l_487 = 0x55L;
                    (*g_418) = (safe_sub_func_int16_t_s_s((l_472 != (void*)0), func_29(func_29((p_17.f2 > (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(((0x3D38L >= (-1L)) != g_229.f0), l_480)))), (+(((*l_359) = p_18) && ((0x18L | (*g_423)) != l_468))))), p_18))), (*g_66), (*g_423), p_20), l_481[2][0][2], p_20, l_481[6][0][3])));
                    for (l_468 = 0; (l_468 <= 7); l_468 = safe_add_func_int16_t_s_s(l_468, 5))
                    {
                        int **l_496 = &g_418;
                        int **l_497[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_497[i] = &l_322[2];
                        (*g_66) = (safe_mod_func_int32_t_s_s(((*g_418) = 0x6DA1C93AL), l_481[2][0][2]));
                        l_488 = ((safe_unary_minus_func_uint16_t_u(l_487)) > l_480);
                    }
                }
                (**g_493) = func_35((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((func_29(g_52, p_17.f0, ((*l_464) = (((**g_254) = (*l_498)) ^ (g_61 >= 0x4EEEL))), ((*l_498) | (g_172[3] == p_17.f0))) | l_488) | p_18), l_481[2][0][2])), p_17.f0)), l_322[0]);
            }
            (**g_493) = (**g_493);
            for (g_54 = 0; (g_54 <= 13); ++g_54)
            {
                int *l_511 = (void*)0;
                unsigned *l_515 = (void*)0;
                unsigned *l_516[6][9];
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_516[i][j] = &g_90;
                }
                for (l_307 = 0; (l_307 <= 3); l_307 += 1)
                {
                    (*l_498) = (*g_302);
                    for (l_467 = 0; (l_467 <= 2); l_467 += 1)
                    {
                        int i;
                        (*g_302) = (-1L);
                        if (p_20)
                            goto lbl_505;
                    }
                    for (p_19 = 0; (p_19 <= 0); p_19 += 1)
                    {
                        union U0 **l_506 = &g_303;
                        int i, j, k;
                        (*l_506) = &p_17;
                        if (l_481[(l_307 + 5)][(p_19 + 2)][(p_19 + 3)])
                            break;
                        p_17.f2 = ((safe_lshift_func_uint16_t_u_s(l_481[(l_307 + 6)][l_307][l_307], l_481[(p_19 + 5)][(p_19 + 5)][l_307])) < g_334[l_307][p_19]);
                    }
                }
                for (g_170.f2 = 0; (g_170.f2 == 12); g_170.f2 = safe_add_func_int16_t_s_s(g_170.f2, 8))
                {
                    l_511 = l_322[2];
                }
                (*g_418) = (safe_div_func_int32_t_s_s(p_20, (l_481[9][2][3] && (l_488 = ((p_17.f2 < ((l_514 = &p_20) != (void*)0)) && (**g_254))))));
            }
        }
        else
        {
            unsigned l_530 = 0xFEDDA966L;
            unsigned l_546 = 0x659DBCF3L;
            for (g_229.f1 = 0; (g_229.f1 >= 12); ++g_229.f1)
            {
                unsigned l_523 = 8UL;
                int *l_529 = &l_488;
                (*g_418) = (-8L);
                for (g_170.f2 = 3; (g_170.f2 >= 0); g_170.f2 -= 1)
                {
                    int **l_527 = &g_418;
                    int i;
                }
                (*g_418) = l_530;
                (*l_529) = ((**g_493) != l_322[2]);
            }
            (*g_418) = (l_530 || (p_17.f2 = func_29((((safe_mod_func_int32_t_s_s(0xCE7516D5L, p_17.f0)) <= (safe_sub_func_int16_t_s_s(((&l_488 != (void*)0) > (safe_rshift_func_uint16_t_u_s(func_29(p_17.f0, (safe_div_func_int8_t_s_s((g_229.f1 || 0L), (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((*g_423), 2)) ^ 4294967295UL), 1)))), p_18, g_67), p_17.f0))), l_481[8][1][2]))) > g_172[3]), l_546, p_20, p_20)));
            for (g_61 = 0; (g_61 <= 16); g_61 = safe_add_func_uint32_t_u_u(g_61, 8))
            {
                for (l_528 = 0; (l_528 < 20); l_528++)
                {
                    (*g_302) = (safe_sub_func_uint8_t_u_u(p_19, p_18));
                    (*g_66) = p_17.f0;
                    for (p_17.f0 = 0; (p_17.f0 >= (-9)); p_17.f0--)
                    {
                        if ((*g_418))
                            break;
                    }
                    if (g_229.f0)
                        goto lbl_555;
                }
                (*g_66) = (*g_418);
            }
        }
    }
    else
    {
        short *l_568[7];
        int l_569 = (-10L);
        int l_571 = 0L;
        int i;
        for (i = 0; i < 7; i++)
            l_568[i] = &l_398;
        (*g_418) = ((-6L) && ((safe_div_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u(func_29(((((safe_sub_func_uint8_t_u_u((p_20 || ((**g_422) = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_29(g_54, p_19, (*g_423), (&l_307 != &l_307)), (safe_rshift_func_int16_t_s_s((l_570 = (l_569 = (((0xDF87CCE1L == p_19) != p_17.f0) <= 0x87L))), l_571)))), p_19)))), p_18)) || g_277) <= p_18) && p_18), p_17.f0, p_19, p_17.f0), 7)) | g_15) | l_571) > l_572[0][1]) ^ g_172[7]), g_172[3])) > p_18));
    }
    return (*g_66);
}







static union U0 func_21(char p_22, unsigned char p_23, int p_24, char p_25, int p_26)
{
    union U0 l_305 = {0x56L};
    return l_305;
}







static char func_29(int p_30, int p_31, unsigned char p_32, int p_33)
{
    unsigned char l_49 = 255UL;
    unsigned short *l_51 = &g_52;
    int *l_53 = &g_54;
    int *l_55 = &g_54;
    union U0 *l_228 = &g_170;
    int **l_301[5];
    int i;
    for (i = 0; i < 5; i++)
        l_301[i] = &g_66;
    g_302 = func_35(g_15, func_38(g_15, (g_229 = ((*l_228) = func_41(func_44(((safe_sub_func_int16_t_s_s(p_33, (l_49 > 0x04L))) < (((*l_51) = (g_50 == (void*)0)) || ((*l_51) = (&p_31 == (l_53 = &p_31))))), l_55), g_66)))));
    g_303 = l_228;
    return p_31;
}







static int * func_35(unsigned p_36, int * p_37)
{
    int **l_297 = (void*)0;
    int **l_298 = (void*)0;
    int **l_299 = &g_66;
    int *l_300 = &g_67;
    (*l_299) = &g_54;
    return l_300;
}







static int * func_38(char p_39, union U0 p_40)
{
    int *l_232 = (void*)0;
    int *l_235 = &g_54;
    int l_238 = (-2L);
    char *l_239 = &g_61;
    for (g_90 = 0; (g_90 == 54); g_90++)
    {
        int *l_233 = &g_67;
        l_232 = (void*)0;
        for (g_170.f2 = 8; (g_170.f2 >= 3); g_170.f2 -= 1)
        {
            int **l_234 = &g_50;
            (*l_234) = l_233;
            for (g_54 = 5; (g_54 >= 0); g_54 -= 1)
            {
                int **l_236 = (void*)0;
                int **l_237 = &g_66;
                (*l_237) = ((*l_234) = l_235);
            }
            (*l_234) = func_44(g_116, ((*l_234) = (*l_234)));
        }
    }
    (*g_66) = ((8UL == (*g_66)) && (l_238 < (((void*)0 == l_239) >= 0xD7050356L)));
    if (p_39)
    {
        unsigned l_240 = 0xCF41E0E3L;
        int *l_246 = &g_54;
lbl_263:
        (*l_235) = l_240;
        (*l_235) = (p_40.f0 == (safe_unary_minus_func_uint8_t_u(0x0AL)));
        for (l_238 = 0; (l_238 < (-18)); l_238--)
        {
            unsigned char *l_253 = &g_118;
            int l_262 = 0x4D383001L;
            int *l_285 = &g_54;
            for (g_116 = 0; (g_116 <= 39); ++g_116)
            {
                union U0 *l_248 = &g_170;
                union U0 **l_247 = &l_248;
                int l_256 = (-9L);
                if (p_40.f0)
                    break;
                for (g_90 = 0; (g_90 <= 5); g_90 += 1)
                {
                    return l_246;
                }
                (*l_247) = &g_170;
                for (g_170.f2 = 28; (g_170.f2 <= (-25)); g_170.f2 = safe_sub_func_int32_t_s_s(g_170.f2, 8))
                {
                    char l_259 = 0L;
                    if ((safe_mod_func_int32_t_s_s((((p_40.f0 = ((*l_239) = ((void*)0 != l_253))) | ((*l_253) = (&l_239 != g_254))) != (*l_246)), 0xF489C560L)))
                    {
                        l_256 = 0x8C7E9381L;
                        l_259 = (safe_add_func_int16_t_s_s(((void*)0 != (*g_254)), g_52));
                    }
                    else
                    {
                        (*l_246) = (p_39 <= (*l_246));
                    }
                    if ((p_40.f0 || (safe_rshift_func_uint8_t_u_u(l_262, 0))))
                    {
                        return &g_67;
                    }
                    else
                    {
                        if ((*g_66))
                            break;
                        if (g_52)
                            goto lbl_263;
                        return &g_67;
                    }
                }
            }
            (*g_66) = (*l_235);
            for (g_52 = 0; (g_52 <= 5); g_52 += 1)
            {
                int l_264 = (-3L);
                int **l_284 = &g_66;
                for (g_61 = 1; (g_61 <= 8); g_61 += 1)
                {
                    int i;
                    (*l_246) = g_69[g_52];
                    for (p_40.f1 = 0; (p_40.f1 <= 5); p_40.f1 += 1)
                    {
                        int i;
                        (*g_66) = g_172[g_52];
                        if (g_69[p_40.f1])
                            continue;
                        if (l_264)
                            continue;
                    }
                    if ((*g_66))
                    {
                        unsigned short *l_276 = &g_277;
                        int l_278 = 0x6DF9734EL;
                        int l_279[6] = {0x9C18CBA6L, 0x9C18CBA6L, 0x64B272FCL, 0x9C18CBA6L, 0x9C18CBA6L, 0x64B272FCL};
                        int i;
                        (*l_246) = (safe_div_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(p_39)), (1UL && ((*l_253) = (((safe_lshift_func_uint16_t_u_u((l_262 >= (p_40.f0 == (**g_254))), ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_262 | g_229.f0), (l_278 = ((*l_276) = p_40.f0)))), 3)), (-5L))) >= l_279[3]))) == g_172[3]) > p_39)))));
                    }
                    else
                    {
                        return &g_54;
                    }
                    (*g_66) = (l_262 < ((safe_mod_func_int8_t_s_s(p_40.f1, (*l_246))) || (safe_rshift_func_int16_t_s_s(p_40.f1, 2))));
                }
                (*l_284) = l_246;
                return l_285;
            }
            g_50 = func_44(p_39, &g_54);
        }
    }
    else
    {
        short l_294[1][5][1] = {{{0xDE2CL}, {0xDE2CL}, {0xDE2CL}, {0xDE2CL}, {0xDE2CL}}};
        unsigned char *l_295[4][10] = {{&g_118, (void*)0, &g_116, &g_116, (void*)0, &g_118, (void*)0, &g_116, &g_116, (void*)0}, {&g_118, (void*)0, &g_116, &g_116, (void*)0, &g_118, (void*)0, &g_116, &g_116, (void*)0}, {&g_118, (void*)0, &g_116, &g_116, (void*)0, &g_118, (void*)0, &g_116, &g_116, (void*)0}, {&g_118, (void*)0, &g_116, &g_116, (void*)0, &g_118, (void*)0, &g_116, &g_116, (void*)0}};
        char l_296[5][6] = {{0xAEL, (-7L), 0x10L, 0L, 0L, 0x10L}, {0xAEL, (-7L), 0x10L, 0L, 0L, 0x10L}, {0xAEL, (-7L), 0x10L, 0L, 0L, 0x10L}, {0xAEL, (-7L), 0x10L, 0L, 0L, 0x10L}, {0xAEL, (-7L), 0x10L, 0L, 0L, 0x10L}};
        int i, j, k;
        (*g_66) = (!(p_39 > (p_40.f0 <= (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((p_39 < 1UL), p_39)), 15)) == (l_294[0][1][0] | (&g_116 == l_295[3][1]))), l_296[1][4])), (*l_235))))));
    }
    return l_232;
}







static union U0 func_41(int * p_42, int * p_43)
{
    int **l_68 = &g_50;
    int l_81 = 1L;
    unsigned short *l_96 = &g_52;
    unsigned short **l_95 = &l_96;
    union U0 l_121 = {0x1CL};
    unsigned char *l_167 = &g_118;
    unsigned l_187 = 4294967295UL;
    (*l_68) = (void*)0;
    for (g_67 = 4; (g_67 >= 0); g_67 -= 1)
    {
        int *l_70 = &g_67;
        unsigned l_73 = 0xF6F8F643L;
        unsigned short *l_80 = (void*)0;
        int i;
        (*l_68) = func_44(g_69[(g_67 + 1)], l_70);
        (*p_42) = (!((safe_mod_func_uint8_t_u_u((*l_70), l_73)) == (l_81 = (safe_lshift_func_int16_t_s_u((g_69[g_67] = ((*p_42) <= (((*l_68) = &g_67) == &g_67))), (safe_div_func_int16_t_s_s(g_61, (safe_add_func_int16_t_s_s(g_52, (*l_70))))))))));
        for (g_54 = 0; (g_54 >= 7); g_54++)
        {
            unsigned l_84 = 0x9F6C8506L;
            int *l_85 = &l_81;
            unsigned char l_86 = 0x0DL;
            l_86 = ((*l_85) = l_84);
            (*l_68) = p_43;
            (*l_68) = p_43;
            (*l_68) = &g_67;
        }
    }
    for (g_67 = 0; (g_67 > (-15)); g_67 = safe_sub_func_uint32_t_u_u(g_67, 6))
    {
        int l_114 = 0x08AFAEF9L;
        unsigned char *l_115 = &g_116;
        unsigned char *l_117[3];
        unsigned short l_120 = 65535UL;
        int i;
        for (i = 0; i < 3; i++)
            l_117[i] = &g_118;
        for (l_81 = 0; (l_81 <= 5); l_81 += 1)
        {
            unsigned *l_89 = &g_90;
            int l_91 = 0x4D501105L;
            char *l_93 = &g_61;
            char **l_92 = &l_93;
            char ***l_94 = &l_92;
            unsigned short ***l_97 = &l_95;
            int i;
            l_91 = (g_69[l_81] | ((*l_89) = g_69[l_81]));
            (*l_94) = l_92;
            (*l_97) = l_95;
        }
        if ((*g_66))
            continue;
        (*l_68) = p_43;
    }
    for (g_170.f0 = 9; (g_170.f0 > 7); g_170.f0--)
    {
        unsigned l_209 = 0x4C99D688L;
        union U0 l_227 = {7L};
        if (l_209)
        {
            int *l_210 = &g_67;
            (*l_68) = l_210;
            (*l_210) = (safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_61, (~(safe_mod_func_uint16_t_u_u((*l_210), (safe_add_func_uint16_t_u_u((**l_68), 1UL))))))) && 1UL), (safe_add_func_uint16_t_u_u((*l_210), (((*p_42) = (*p_43)) || (safe_div_func_uint16_t_u_u(l_209, (((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((*g_50), (*g_50))), 0xD311L)) <= 9UL) ^ (*l_210)))))))));
        }
        else
        {
            (*p_42) = 0x7D2BA4BAL;
            return l_227;
        }
    }
    return l_121;
}







static int * func_44(int p_45, int * p_46)
{
    unsigned char l_58 = 0xDAL;
    int *l_59 = &g_54;
    char *l_60[4][4] = {{(void*)0, (void*)0, &g_61, &g_61}, {(void*)0, (void*)0, &g_61, &g_61}, {(void*)0, (void*)0, &g_61, &g_61}, {(void*)0, (void*)0, &g_61, &g_61}};
    int i, j;
    g_54 = (safe_sub_func_uint8_t_u_u((l_58 != ((p_46 != l_59) ^ (g_61 = p_45))), (safe_rshift_func_uint8_t_u_s(g_54, (safe_add_func_uint32_t_u_u(g_15, (*l_59)))))));
    return &g_54;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_170.f0, "g_170.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_172[i], "g_172[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_334[i][j], "g_334[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_578.f0, "g_578.f0", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
