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
};


static int g_15 = 0x834D8A94L;
static int *g_14 = &g_15;
static volatile int g_29 = 0xFB57A67DL;
static struct S0 g_79 = {-1L};
static int * const **g_110 = (void*)0;
static volatile int g_126 = 0x2BFC98A5L;
static volatile int *g_125[2] = {&g_126, &g_126};
static int g_131 = 1L;
static int *g_130 = &g_131;
static const int * const g_230 = &g_131;
static int g_263[7] = {0xADCCFBDEL, 0xADCCFBDEL, 1L, 0xADCCFBDEL, 0xADCCFBDEL, 1L, 0xADCCFBDEL};
static const unsigned short g_338 = 0xEECBL;
static volatile struct S0 g_358 = {0x80L};
static volatile struct S0 *g_357 = &g_358;
static volatile struct S0 * volatile * volatile g_356[7][8] = {{&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357, &g_357}};
static volatile struct S0 * volatile * volatile * volatile g_355 = &g_356[1][1];
static struct S0 *g_361 = &g_79;
static struct S0 ** volatile g_360 = &g_361;
static struct S0 ** volatile *g_359[1] = {&g_360};
static struct S0 ** volatile g_364[9] = {&g_361, &g_361, &g_361, &g_361, &g_361, &g_361, &g_361, &g_361, &g_361};
static int ** volatile g_366[4] = {&g_14, &g_130, &g_14, &g_130};
static int ** volatile g_380 = (void*)0;
static int ** volatile g_381 = (void*)0;
static int ** volatile g_382 = &g_130;
static const char g_405 = (-8L);
static int **g_433[10][2][3] = {{{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}, {{&g_14, &g_14, &g_130}, {&g_14, &g_14, &g_130}}};
static int *** volatile g_432 = &g_433[1][0][1];
static int *g_485 = (void*)0;
static const int g_516[7] = {(-10L), 3L, (-10L), 3L, (-10L), 3L, (-10L)};
static int ** volatile g_548 = (void*)0;
static int *g_640 = &g_263[5];
static int *g_772 = &g_263[0];
static int ** volatile g_797 = &g_485;
static int ** volatile g_821 = &g_640;
static int ** volatile g_827 = &g_14;
static int ** volatile g_840 = &g_130;
static int *** volatile g_861 = &g_433[0][1][2];



static int func_1(void);
static int * func_2(int * const p_3, unsigned p_4, int * p_5, const unsigned p_6, unsigned char p_7);
static int * const func_8(int * p_9, struct S0 p_10, unsigned char p_11, const unsigned p_12, unsigned char p_13);
static struct S0 func_16(unsigned short p_17);
static unsigned func_19(int * p_20, unsigned p_21, int * p_22, int * p_23, int * p_24);
static int * func_26(int p_27);
static int func_30(unsigned short p_31);
static int func_50(const int p_51, int * p_52, unsigned short p_53, char p_54, unsigned short p_55);
static unsigned short func_56(int * p_57, int * p_58, short p_59, char p_60);
static int * func_61(int p_62, const int * p_63, int * p_64);
static int func_1(void)
{
    short l_18 = 0L;
    int *l_25 = &g_15;
    struct S0 *l_833[9][3][1];
    const struct S0 *l_843[6] = {(void*)0, (void*)0, &g_79, (void*)0, (void*)0, &g_79};
    const struct S0 **l_842 = &l_843[0];
    unsigned short l_892 = 0x18C7L;
    int *l_893[1];
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_833[i][j][k] = &g_79;
        }
    }
    for (i = 0; i < 1; i++)
        l_893[i] = &g_263[4];
    l_25 = func_2(func_8(g_14, func_16(((((*g_14) > g_15) && l_18) & func_19(l_25, g_15, &g_15, func_26((*l_25)), l_25))), g_405, g_338, g_263[6]), g_338, g_772, g_263[5], g_405);
    if ((l_833[3][0][0] != (void*)0))
    {
        int **l_834 = (void*)0;
        int **l_835 = (void*)0;
        int **l_836 = &g_772;
        (*l_836) = (*g_827);
        (*l_25) = (l_833[3][0][0] != (void*)0);
        return (*l_25);
    }
    else
    {
        unsigned l_837[6] = {0x2057407BL, 0UL, 0x2057407BL, 0UL, 0x2057407BL, 0UL};
        const int *l_838 = (void*)0;
        int *l_839[6];
        struct S0 l_862[8][4] = {{{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}, {{8L}, {0x6AL}, {8L}, {0x6AL}}};
        struct S0 **l_877 = &l_833[5][2][0];
        const char l_879[4] = {1L, 1L, 1L, 1L};
        unsigned l_885[7] = {1UL, 1UL, 0xF0D72EB7L, 1UL, 1UL, 0xF0D72EB7L, 1UL};
        int i, j;
        for (i = 0; i < 6; i++)
            l_839[i] = (void*)0;
        (*g_840) = func_61(l_837[5], l_838, l_839[0]);
        if ((*g_130))
        {
            struct S0 **l_841 = &g_361;
            int l_846 = 0x357FCDB1L;
            int **l_860 = &g_14;
            unsigned short l_869[4] = {0xD6ABL, 0x8DD9L, 0xD6ABL, 0x8DD9L};
            int i;
            if ((l_841 != l_842))
            {
                for (l_18 = 5; (l_18 == 11); l_18 = safe_add_func_uint32_t_u_u(l_18, 3))
                {
                    return l_846;
                }
            }
            else
            {
                int **l_854[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_854[i] = (void*)0;
                for (g_79.f0 = 1; (g_79.f0 <= (-27)); --g_79.f0)
                {
                    for (g_131 = (-20); (g_131 <= (-27)); g_131 = safe_sub_func_int8_t_s_s(g_131, 4))
                    {
                        return l_846;
                    }
                    for (g_131 = 0; (g_131 > 16); ++g_131)
                    {
                        int **l_853 = &g_640;
                        (*l_853) = func_26(l_846);
                        if ((*g_230))
                            break;
                    }
                }
                l_25 = l_25;
                (*g_14) = (*g_640);
            }
            if (l_846)
            {
                int *l_855[8] = {&g_263[4], &g_263[4], &l_846, &g_263[4], &g_263[4], &l_846, &g_263[4], &g_263[4]};
                int i;
                for (g_15 = 1; (g_15 <= 5); g_15 += 1)
                {
                    const int *l_858 = &g_263[1];
                }
                if ((g_15 | ((*l_25) <= g_516[6])))
                {
                    int **l_859 = &g_130;
                    (*l_859) = (void*)0;
                    (*l_859) = (void*)0;
                }
                else
                {
                    for (l_846 = 0; l_846 < 6; l_846 += 1)
                    {
                        l_839[l_846] = (void*)0;
                    }
                    (*g_861) = l_860;
                }
            }
            else
            {
                const int *l_863 = &g_131;
                int *l_868 = &g_131;
                int **l_870 = (void*)0;
                struct S0 l_875 = {0x21L};
                short l_882 = 1L;
                (*g_827) = func_8(func_61(g_405, l_838, (*g_797)), l_862[4][2], (l_863 == (void*)0), (safe_lshift_func_int16_t_s_s(0x067BL, 1)), ((safe_lshift_func_int8_t_s_u((func_50((*g_772), l_868, (*l_863), l_869[2], (**l_860)) & 0x995AA5B9L), (*l_25))) ^ 0xE25A14B5L));
                for (g_131 = 0; (g_131 > (-23)); g_131--)
                {
                    for (l_846 = 18; (l_846 >= (-4)); l_846--)
                    {
                        struct S0 l_876 = {7L};
                        int *l_878 = &g_263[4];
                        l_876 = l_875;
                        (*l_860) = func_61((!((l_877 != (void*)0) || g_131)), func_26((**g_840)), l_878);
                        (*l_860) = l_878;
                        (*l_860) = func_61((g_15 < l_879[1]), (*l_860), (*g_840));
                    }
                    (*l_860) = (*l_860);
                    for (l_875.f0 = (-20); (l_875.f0 >= (-25)); --l_875.f0)
                    {
                        if (l_882)
                            break;
                    }
                }
                return (*l_25);
            }
        }
        else
        {
            return (*l_25);
        }
        for (g_131 = (-11); (g_131 > 9); g_131++)
        {
            (*l_25) = l_885[6];
            (*l_877) = (*l_877);
        }
        (*g_357) = (*g_357);
    }
    l_893[0] = (*g_382);
    (*l_25) = (*l_25);
    return (*g_640);
}







static int * func_2(int * const p_3, unsigned p_4, int * p_5, const unsigned p_6, unsigned char p_7)
{
    unsigned char l_781 = 0UL;
    int *l_795 = &g_15;
    struct S0 * const *l_809 = &g_361;
    int l_824 = 7L;
    int *l_830[1][10] = {{&g_263[2], &g_263[4], &g_263[2], &g_263[4], &g_263[2], &g_263[4], &g_263[2], &g_263[4], &g_263[2], &g_263[4]}};
    int i, j;
    for (g_15 = 0; (g_15 <= 0); g_15 += 1)
    {
        unsigned l_782[3][6] = {{1UL, 0xBFD87E88L, 1UL, 0xBFD87E88L, 1UL, 0xBFD87E88L}, {1UL, 0xBFD87E88L, 1UL, 0xBFD87E88L, 1UL, 0xBFD87E88L}, {1UL, 0xBFD87E88L, 1UL, 0xBFD87E88L, 1UL, 0xBFD87E88L}};
        int *l_792 = &g_15;
        char l_793 = 0x8DL;
        int *l_798 = &g_263[2];
        struct S0 ** const l_808 = &g_361;
        int i, j;
    }
    return p_5;
}







static int * const func_8(int * p_9, struct S0 p_10, unsigned char p_11, const unsigned p_12, unsigned char p_13)
{
    const int *l_765 = &g_131;
    int *l_766[4];
    int **l_771 = &g_130;
    int i;
    for (i = 0; i < 4; i++)
        l_766[i] = &g_263[6];
    p_9 = func_61(g_338, l_765, l_766[3]);
    (*l_771) = func_26((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_516[3], (g_263[4] ^ g_263[4]))), p_10.f0)));
    return p_9;
}







static struct S0 func_16(unsigned short p_17)
{
    int *l_722 = &g_131;
    char l_723[8] = {0L, 0L, 0xF2L, 0L, 0L, 0xF2L, 0L, 0L};
    unsigned l_729[9][2] = {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}};
    struct S0 l_756 = {2L};
    int **l_757 = &l_722;
    int i, j;
    for (g_15 = 0; (g_15 <= 1); g_15 += 1)
    {
        int l_734 = 0xB3C715F4L;
        unsigned l_750[9][9][3] = {{{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}, {{0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}, {0UL, 4294967292UL, 4294967293UL}}};
        int i, j, k;
        if (p_17)
            break;
        if (func_56(l_722, func_26(l_723[0]), (safe_mul_func_int16_t_s_s(((0x1025L == 0xBEFCL) == (!(~2L))), (safe_unary_minus_func_uint16_t_u((l_729[4][0] >= (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(func_50(p_17, l_722, p_17, l_734, g_131), 10)) <= g_338), (-3L)))))))), p_17))
        {
            struct S0 l_753 = {0L};
            for (g_79.f0 = 1; (g_79.f0 >= 0); g_79.f0 -= 1)
            {
                char l_743 = 8L;
                int l_751 = 0x3E8678F2L;
                int **l_752 = &g_130;
                l_751 = (((((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(g_131, p_17)) < (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_743 & p_17), (safe_div_func_uint8_t_u_u(((p_17 ^ (safe_lshift_func_int8_t_s_u(((func_50((safe_div_func_uint16_t_u_u((&g_366[2] == (void*)0), (p_17 && p_17))), l_722, g_338, g_263[4], l_750[2][0][1]) == 1L) > l_743), 5))) == (*l_722)), 250UL)))), (*l_722)))), 4294967295UL)) < 0x1E0D6559L) >= g_358.f0) != 0L) || p_17);
                (*l_752) = &l_751;
                (*l_752) = (*l_752);
            }
            return l_753;
        }
        else
        {
            int l_754 = 2L;
            l_754 = l_754;
        }
        for (g_79.f0 = 0; (g_79.f0 <= 3); g_79.f0 += 1)
        {
            int **l_755 = &g_130;
            int i;
            g_366[g_79.f0] = l_755;
            return l_756;
        }
    }
lbl_764:
    (*l_757) = l_722;
    for (g_79.f0 = 23; (g_79.f0 < 5); g_79.f0--)
    {
        struct S0 *l_760[5][10] = {{&g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756}, {&g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756}, {&g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756}, {&g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756}, {&g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756, &g_79, &l_756}};
        int i, j;
        if ((*l_722))
        {
            for (g_131 = 6; (g_131 >= 0); g_131 -= 1)
            {
                (*g_360) = l_760[3][6];
            }
            for (p_17 = (-9); (p_17 > 28); ++p_17)
            {
                int *l_763 = &g_131;
                (*l_757) = l_763;
            }
            (**l_757) = p_17;
        }
        else
        {
            if (l_756.f0)
                goto lbl_764;
        }
        return l_756;
    }
    return l_756;
}







static unsigned func_19(int * p_20, unsigned p_21, int * p_22, int * p_23, int * p_24)
{
    struct S0 *l_716 = &g_79;
    struct S0 **l_717 = &l_716;
    (*l_717) = l_716;
    for (p_21 = 0; (p_21 >= 24); p_21 = safe_add_func_int32_t_s_s(p_21, 7))
    {
        int *l_720[6][2] = {{(void*)0, &g_263[4]}, {(void*)0, &g_263[4]}, {(void*)0, &g_263[4]}, {(void*)0, &g_263[4]}, {(void*)0, &g_263[4]}, {(void*)0, &g_263[4]}};
        int **l_721 = &g_130;
        int i, j;
        l_720[1][1] = l_720[0][1];
        if ((*p_20))
            continue;
        (*l_721) = p_24;
    }
    return g_126;
}







static int * func_26(int p_27)
{
    struct S0 l_28[8][1] = {{{8L}}, {{8L}}, {{8L}}, {{8L}}, {{8L}}, {{8L}}, {{8L}}, {{8L}}};
    int l_71[6][6] = {{0xD9258C0FL, 0xD9258C0FL, (-1L), 0xD9258C0FL, 0xD9258C0FL, (-1L)}, {0xD9258C0FL, 0xD9258C0FL, (-1L), 0xD9258C0FL, 0xD9258C0FL, (-1L)}, {0xD9258C0FL, 0xD9258C0FL, (-1L), 0xD9258C0FL, 0xD9258C0FL, (-1L)}, {0xD9258C0FL, 0xD9258C0FL, (-1L), 0xD9258C0FL, 0xD9258C0FL, (-1L)}, {0xD9258C0FL, 0xD9258C0FL, (-1L), 0xD9258C0FL, 0xD9258C0FL, (-1L)}, {0xD9258C0FL, 0xD9258C0FL, (-1L), 0xD9258C0FL, 0xD9258C0FL, (-1L)}};
    unsigned l_339 = 0x364701A2L;
    struct S0 **l_391 = &g_361;
    struct S0 ***l_390 = &l_391;
    int **l_394[4][2][7] = {{{(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}, {(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}}, {{(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}, {(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}}, {{(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}, {(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}}, {{(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}, {(void*)0, &g_130, &g_14, &g_130, &g_130, &g_14, &g_130}}};
    int *l_455[6];
    char l_563 = 0x1CL;
    char l_592 = 5L;
    int *l_683[3][9][3] = {{{&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}}, {{&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}}, {{&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}, {&l_71[3][3], (void*)0, &g_263[0]}}};
    const int *l_711 = &g_15;
    int *l_712[2];
    int *l_713 = &g_263[1];
    unsigned char l_714 = 247UL;
    int *l_715 = &g_15;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_455[i] = &l_71[1][5];
    for (i = 0; i < 2; i++)
        l_712[i] = &g_263[4];
    for (p_27 = 0; p_27 < 8; p_27 += 1)
    {
        for (g_29 = 0; g_29 < 1; g_29 += 1)
        {
            struct S0 tmp = {0x61L};
            l_28[p_27][g_29] = tmp;
        }
    }
    return l_715;
}







static int func_30(unsigned short p_31)
{
    char l_38[2];
    int *l_41[1];
    int i;
    for (i = 0; i < 2; i++)
        l_38[i] = (-10L);
    for (i = 0; i < 1; i++)
        l_41[i] = &g_15;
    g_29 = (*g_14);
    g_29 = ((!(safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((l_38[1] >= (safe_add_func_int32_t_s_s(l_38[1], 0x433AC254L))), (((void*)0 != l_41[0]) & (p_31 && (p_31 == (0x1CD25BB5L < p_31)))))) <= p_31), p_31)), p_31))) ^ (*g_14));
    return (*g_14);
}







static int func_50(const int p_51, int * p_52, unsigned short p_53, char p_54, unsigned short p_55)
{
    struct S0 l_308 = {-1L};
    struct S0 *l_309 = (void*)0;
    struct S0 *l_310 = &l_308;
    (*l_310) = l_308;
    return (*p_52);
}







static unsigned short func_56(int * p_57, int * p_58, short p_59, char p_60)
{
    char l_83[4];
    struct S0 *l_88[10][6] = {{(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}, {(void*)0, (void*)0, &g_79, &g_79, &g_79, &g_79}};
    unsigned char l_114 = 255UL;
    int **l_136 = &g_14;
    int ***l_135[4];
    unsigned l_137 = 0UL;
    int * const * const *l_192 = (void*)0;
    const struct S0 ***l_212 = (void*)0;
    int ***l_219 = &l_136;
    int i, j;
    for (i = 0; i < 4; i++)
        l_83[i] = 0x5BL;
    for (i = 0; i < 4; i++)
        l_135[i] = &l_136;
    if ((!(safe_sub_func_int32_t_s_s((*g_14), (l_83[2] != (safe_add_func_uint8_t_u_u(l_83[2], (safe_mul_func_int8_t_s_s(((l_88[6][0] != &g_79) || (safe_mul_func_int16_t_s_s(g_79.f0, l_83[2]))), (safe_div_func_uint16_t_u_u(((5L || p_60) ^ l_83[1]), 0x5619L)))))))))))
    {
        int l_97[2][5] = {{0x9EDD65E7L, 0x9654EA11L, 0x9EDD65E7L, 0x9654EA11L, 0x9EDD65E7L}, {0x9EDD65E7L, 0x9654EA11L, 0x9EDD65E7L, 0x9654EA11L, 0x9EDD65E7L}};
        int *l_98 = &l_97[0][1];
        struct S0 l_103 = {0x0CL};
        int * const * const *l_134 = (void*)0;
        struct S0 ** const l_181 = &l_88[6][0];
        int i, j;
        (*l_98) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_59, l_97[0][1])), p_59));
    }
    else
    {
        for (l_137 = (-19); (l_137 > 5); l_137++)
        {
            int *l_306 = &g_131;
            for (p_59 = 13; (p_59 != 3); --p_59)
            {
                int *l_307 = &g_131;
                l_307 = func_61(p_60, func_61(g_263[0], func_61(p_60, func_61(g_131, &g_263[4], &g_263[2]), l_306), (*l_136)), p_57);
            }
            if ((*g_130))
                continue;
            return g_131;
        }
    }
    return p_59;
}







static int * func_61(int p_62, const int * p_63, int * p_64)
{
    const int *l_75[7][9] = {{&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}, {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}, {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}, {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}, {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}, {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}, {&g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15, &g_15}};
    const int **l_74[2];
    const int ***l_73 = &l_74[1];
    struct S0 *l_78 = &g_79;
    int i, j;
    for (i = 0; i < 2; i++)
        l_74[i] = &l_75[0][8];
    (*l_73) = &p_63;
    for (p_62 = 0; (p_62 < (-26)); p_62 = safe_sub_func_int8_t_s_s(p_62, 2))
    {
        struct S0 **l_80 = &l_78;
        (*l_80) = l_78;
        for (g_79.f0 = 1; (g_79.f0 >= 0); g_79.f0 -= 1)
        {
            int i, j;
            if ((*g_14))
                break;
            l_75[(g_79.f0 + 2)][g_79.f0] = &g_15;
        }
        (*l_80) = &g_79;
        (**l_73) = p_63;
    }
    (**l_73) = &g_15;
    return &g_15;
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
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_263[i], "g_263[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_358.f0, "g_358.f0", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_516[i], "g_516[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
