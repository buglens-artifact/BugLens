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



static unsigned short g_9 = 65530UL;
static unsigned g_10 = 1UL;
static char g_12[9][1][1] = {{{(-2L)}},{{0x7BL}},{{(-2L)}},{{0x7BL}},{{(-2L)}},{{0x7BL}},{{(-2L)}},{{0x7BL}},{{(-2L)}}};
static unsigned short g_38 = 1UL;
static unsigned short *g_37 = &g_38;
static char g_64 = (-1L);
static char *g_67 = &g_64;
static unsigned g_77 = 0x453370C1L;
static unsigned g_79 = 0xDF9C202DL;
static char g_83 = 3L;
static int g_87 = 0x7DEECC15L;
static unsigned char g_101 = 1UL;
static const unsigned short g_129 = 65535UL;
static int **g_162 = (void*)0;
static int *g_220 = (void*)0;
static short g_232 = 6L;
static short *g_231[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static short **g_230 = &g_231[0];
static const int g_237 = 0xFE09AD7CL;
static unsigned g_273[6] = {0xA2BCBE6FL,0xA2BCBE6FL,0xA2BCBE6FL,0xA2BCBE6FL,0xA2BCBE6FL,0xA2BCBE6FL};
static unsigned char g_275 = 0xC3L;
static int *g_280 = &g_87;
static unsigned g_305 = 4UL;
static const int *g_319 = &g_87;
static unsigned *g_321 = &g_79;
static unsigned **g_320[10][1] = {{&g_321},{&g_321},{&g_321},{&g_321},{&g_321},{&g_321},{&g_321},{&g_321},{&g_321},{&g_321}};
static int *g_333 = &g_87;
static unsigned short *g_361[9][9][1] = {{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}},{{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38},{&g_38}}};
static const char * const g_524[1] = {&g_64};
static const char * const *g_523[1] = {&g_524[0]};
static const unsigned char *g_616 = &g_101;
static const unsigned char **g_615 = &g_616;
static unsigned short g_634 = 0x5D7EL;
static char g_664 = 0L;
static const char g_683 = 0xA6L;
static const char *g_682[7][7] = {{&g_683,(void*)0,(void*)0,&g_683,(void*)0,&g_683,&g_683},{&g_683,&g_683,(void*)0,(void*)0,&g_683,&g_683,(void*)0},{&g_683,&g_683,&g_683,&g_683,&g_683,&g_683,&g_683},{&g_683,(void*)0,&g_683,&g_683,(void*)0,(void*)0,&g_683},{(void*)0,&g_683,(void*)0,(void*)0,&g_683,&g_683,&g_683},{&g_683,&g_683,&g_683,&g_683,&g_683,&g_683,&g_683},{&g_683,&g_683,(void*)0,&g_683,(void*)0,&g_683,&g_683}};
static const char **g_681[9] = {&g_682[2][1],&g_682[5][6],&g_682[2][1],&g_682[5][6],&g_682[2][1],&g_682[5][6],&g_682[2][1],&g_682[5][6],&g_682[2][1]};
static unsigned short **g_803 = (void*)0;
static unsigned short ***g_802 = &g_803;
static const char *g_823 = &g_12[8][0][0];
static const char *g_831 = &g_12[3][0][0];
static const char g_929 = 6L;
static char g_933 = 0x95L;
static unsigned g_1094 = 0UL;



static const int func_1(void);
static const int func_2(unsigned p_3, char p_4, int p_5, short p_6);
static short func_14(unsigned char p_15, unsigned short * p_16, short p_17, unsigned short p_18);
static unsigned char func_21(int p_22, int p_23, short p_24, unsigned short p_25);
static unsigned char func_28(short p_29, const char * p_30, unsigned p_31, char * p_32, unsigned char p_33);
static const char * func_35(unsigned short * p_36);
static unsigned short func_41(unsigned p_42);
static unsigned func_43(unsigned short * p_44);
static unsigned short * func_45(unsigned short * p_46, int p_47, char * p_48, unsigned short p_49, char * p_50);
static unsigned short * func_51(const char p_52, const unsigned char p_53, const char * p_54);
static const int func_1(void)
{
    unsigned l_7 = 0x876942A1L;
    unsigned short *l_8[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    char *l_11 = &g_12[0][0][0];
    int l_13 = 0x6E5B14F4L;
    short *l_712[8] = {&g_232,&g_232,&g_232,&g_232,&g_232,&g_232,&g_232,&g_232};
    int l_713 = 0x4549D1EAL;
    int *l_1093[3][4] = {{&l_713,&l_713,&l_713,&l_713},{&l_713,&g_87,&g_87,&l_713},{&g_87,&l_713,&g_87,&g_87}};
    int **l_1095 = &g_280;
    const unsigned char l_1096 = 0x8EL;
    int i, j;
    g_1094 = func_2((((g_9 = l_7) | 0x61EEL) < 1L), ((*l_11) = (l_7 <= g_10)), l_13, func_14(g_10, l_8[3], (l_713 = (safe_mod_func_uint8_t_u_u((func_21(g_10, l_13, l_13, g_10) != 255UL), l_7))), l_13));
    (*l_1095) = &g_87;
    (**l_1095) = ((void*)0 == &g_803);
    return l_1096;
}







static const int func_2(unsigned p_3, char p_4, int p_5, short p_6)
{
    char *l_735 = &g_64;
    int l_738[10];
    unsigned short * const *l_749 = &g_361[7][5][0];
    unsigned short * const **l_748 = &l_749;
    unsigned l_763 = 8UL;
    unsigned short *l_774 = &g_9;
    int *l_829 = (void*)0;
    const short *l_851 = &g_232;
    const short **l_850 = &l_851;
    int *l_862 = &l_738[2];
    unsigned ***l_867 = (void*)0;
    unsigned char l_917 = 0xFDL;
    const char *l_928 = &g_929;
    unsigned short l_940 = 0UL;
    unsigned short **l_941[3][7] = {{&l_774,&l_774,(void*)0,&l_774,&l_774,(void*)0,&l_774},{&l_774,(void*)0,(void*)0,&l_774,(void*)0,(void*)0,&l_774},{(void*)0,&l_774,(void*)0,(void*)0,&l_774,(void*)0,(void*)0}};
    const int *l_956 = (void*)0;
    char l_987 = 0x83L;
    unsigned char l_1001 = 251UL;
    int *l_1092 = &g_87;
    int i, j;
    for (i = 0; i < 10; i++)
        l_738[i] = 0x61FC00C7L;
    for (p_6 = 0; (p_6 <= 0); p_6 += 1)
    {
        unsigned l_734 = 4294967292UL;
        int l_736 = 3L;
        const char *l_797 = &g_683;
        unsigned l_798 = 0xBBED41B3L;
        char *l_804 = &g_664;
        unsigned l_806 = 1UL;
        int l_861 = 0x747BF3ADL;
        short **l_884 = &g_231[0];
        unsigned short l_935 = 2UL;
        l_736 = ((*g_333) = (safe_sub_func_uint8_t_u_u(l_734, (&p_4 == (l_735 = l_735)))));
        if ((1L & 0x9B98L))
        {
            unsigned l_737 = 4294967295UL;
            unsigned short *l_750 = &g_9;
            int l_758 = 0L;
            int *l_826 = &g_87;
            l_738[2] = l_737;
            for (g_38 = 0; (g_38 <= 0); g_38 += 1)
            {
                const int **l_739[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_739[i] = &g_319;
                g_319 = (void*)0;
                for (g_79 = 0; (g_79 <= 0); g_79 += 1)
                {
                    unsigned ***l_740 = &g_320[7][0];
                    (*l_740) = &g_321;
                    (*g_333) = p_4;
                    for (g_87 = 0; (g_87 >= 0); g_87 -= 1)
                    {
                        return l_736;
                    }
                }
            }
            if (l_734)
            {
                unsigned l_747 = 0x9D3FB8D0L;
                int *l_755[10][7][1] = {{{&l_738[2]},{&l_738[2]},{&l_738[2]},{&l_738[2]},{&l_736},{&l_738[2]},{&g_87}},{{&l_738[2]},{&l_738[2]},{&g_87},{&l_738[2]},{&l_736},{&l_738[2]},{&l_738[2]}},{{&g_87},{&l_738[2]},{(void*)0},{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87}},{{&g_87},{&l_738[2]},{(void*)0},{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87}},{{&l_738[2]},{(void*)0},{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87},{&g_87}},{{&l_738[2]},{(void*)0},{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87},{&l_738[2]}},{{(void*)0},{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87},{&g_87},{&l_738[2]}},{{(void*)0},{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87},{&l_738[2]},{(void*)0}},{{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87},{&g_87},{&l_738[2]},{(void*)0}},{{&l_738[2]},{(void*)0},{&l_738[2]},{&g_87},{&l_738[2]},{(void*)0},{&l_738[2]}}};
                int i, j, k;
                l_736 = (0x4BFA430EL > (((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_3, (safe_mod_func_int32_t_s_s((l_747 = 0xFD53167DL), p_6)))), ((void*)0 == &l_736))) & (func_41(l_734) || (((((void*)0 == l_748) | (**g_615)) != l_734) & p_6))) && l_747));
                if (l_747)
                {
                    for (l_737 = 0; (l_737 <= 0); l_737 += 1)
                    {
                        int **l_753 = &g_220;
                        int **l_754 = &g_333;
                        int i;
                        (*g_333) = g_273[(p_6 + 5)];
                        (*l_754) = ((*l_753) = (void*)0);
                        return p_6;
                    }
                    l_755[2][1][0] = &l_738[9];
                }
                else
                {
                    int **l_756 = &l_755[2][1][0];
                    int **l_757[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_757[i] = &g_280;
                    g_280 = ((*l_756) = &l_738[2]);
                }
                l_758 = p_4;
            }
            else
            {
                unsigned char *l_767 = (void*)0;
                int l_775[3][3][10] = {{{0xD83F8B78L,0x220B3168L,0L,0L,1L,0L,0x68BC593BL,9L,(-6L),(-6L)},{0x220B3168L,0xD6346873L,0L,0L,0L,0L,0xD6346873L,0x220B3168L,0L,0x68BC593BL},{0xD83F8B78L,0L,0x057B1D42L,0x220B3168L,0xFA3B8FBCL,0L,0x4BE8D7E1L,0x68BC593BL,0x4BE8D7E1L,0L}},{{0L,0xFA3B8FBCL,0x057B1D42L,0xFA3B8FBCL,0L,0x68BC593BL,0L,0x220B3168L,0xD6346873L,0xD83F8B78L},{0x220B3168L,0L,0xD83F8B78L,0xFA3B8FBCL,0x55A083DCL,0xABA8264EL,0xABA8264EL,0x55A083DCL,0xFA3B8FBCL,0xD83F8B78L},{0xFA3B8FBCL,0xFA3B8FBCL,(-6L),0xD83F8B78L,0L,0L,0x55A083DCL,0x68BC593BL,1L,9L}},{{0x68BC593BL,0xD6346873L,0x55A083DCL,0L,0x4BE8D7E1L,0L,0x55A083DCL,0xD6346873L,0x68BC593BL,0xFA3B8FBCL},{0L,0xFA3B8FBCL,1L,0L,9L,0L,0xABA8264EL,0x4BE8D7E1L,0x4BE8D7E1L,0xABA8264EL},{0xD6346873L,0L,0L,0L,0L,0xD6346873L,0x220B3168L,0L,0x68BC593BL,0L}}};
                unsigned char *l_776 = &g_101;
                int i, j, k;
                for (g_275 = 0; g_275 < 7; g_275 += 1)
                {
                    for (l_734 = 0; l_734 < 7; l_734 += 1)
                    {
                        g_682[g_275][l_734] = &g_83;
                    }
                }
                if ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_734 > p_3), l_763)), (safe_unary_minus_func_uint8_t_u((+((*l_776) = (safe_sub_func_int8_t_s_s(((g_275 = l_737) || ((*g_67) = (-1L))), (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(p_4, func_14((*g_616), l_774, p_3, (*g_37)))) | p_5), l_736)), l_775[2][2][4])))))))))))
                {
                    unsigned *l_787 = &l_737;
                    int l_792 = 0x7ABE5FAFL;
                    int *l_799 = &l_792;
                    unsigned short **l_805 = &l_750;
                    (*l_799) = (((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((+4294967295UL) <= ((*l_787) = (safe_sub_func_int16_t_s_s(p_4, 0x66C6L)))), p_4)), func_28((safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(l_792, l_775[2][2][4])) >= (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((*g_37), (*g_37))) & 0x9AL) || p_3), l_758))), 0x38L)), l_797, l_798, &g_83, (*g_616)))), (-1L))), (**g_615))) > 0xD6A7L) | 0xD1L);
                    if ((safe_mul_func_int16_t_s_s(p_4, ((void*)0 == g_802))))
                    {
                        if (p_3)
                            break;
                        if (l_798)
                            break;
                    }
                    else
                    {
                        (*l_799) = p_5;
                        return p_5;
                    }
                    l_738[7] = (p_5 != l_775[0][0][7]);
                    for (g_275 = 0; (g_275 <= 0); g_275 += 1)
                    {
                        unsigned l_807 = 0x71D6BBE3L;
                        if (p_5)
                            break;
                        if (l_806)
                            break;
                        if (l_807)
                            continue;
                        return p_3;
                    }
                }
                else
                {
                    int l_822 = (-1L);
                    unsigned *l_824 = &g_79;
                    const char *l_825 = &g_64;
                    int **l_827[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_827[i] = &l_826;
                    (*g_333) = ((safe_add_func_int32_t_s_s(p_3, l_758)) >= (safe_mul_func_uint8_t_u_u(l_737, p_3)));
                    l_826 = &g_87;
                    g_220 = &l_738[2];
                    if (l_775[2][2][4])
                        continue;
                }
                if ((*g_333))
                    break;
                return (*g_333);
            }
        }
        else
        {
            int **l_828 = (void*)0;
            int l_830 = 1L;
            int l_835 = 0x9757CEE9L;
            short ** const l_852 = (void*)0;
            unsigned short *l_853 = (void*)0;
            unsigned l_858[5];
            int i;
            for (i = 0; i < 5; i++)
                l_858[i] = 7UL;
            l_829 = &l_736;
            for (g_64 = 0; (g_64 <= 0); g_64 += 1)
            {
                unsigned l_834[4];
                int *l_836 = &l_835;
                int i;
                for (i = 0; i < 4; i++)
                    l_834[i] = 0x078F55BDL;
                (*l_829) = (func_28(p_5, l_797, (p_6 == (func_41(((0x2BF3L ^ (((l_834[3] = (((*l_829) = ((*g_333) = (l_830 = (*g_333)))) && (*g_333))) < l_835) | p_4)) > (*g_831))) & 1L)), &g_664, l_835) >= p_5);
                l_836 = l_836;
                for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                {
                    int l_839 = 5L;
                    int **l_840[5][2][7] = {{{&l_829,&g_280,&g_333,&l_836,&g_220,(void*)0,&l_829},{&g_333,&l_836,(void*)0,&l_836,&g_220,&g_333,(void*)0}},{{&l_829,&l_836,&g_333,(void*)0,&l_836,&l_829,(void*)0},{&l_836,(void*)0,&g_333,(void*)0,&g_280,&g_280,(void*)0}},{{&l_836,&l_829,&l_836,&g_333,(void*)0,&l_836,(void*)0},{&l_829,(void*)0,&g_333,(void*)0,&l_836,&g_333,&l_829}},{{(void*)0,(void*)0,&g_280,&g_333,&g_333,&l_836,(void*)0},{&l_836,(void*)0,&g_333,&l_836,&l_836,&g_220,&g_333}},{{&g_333,&g_280,&g_220,&l_836,&l_836,&g_220,&g_280},{&l_836,(void*)0,&l_836,(void*)0,&g_333,&g_333,(void*)0}}};
                    int *l_841 = &l_835;
                    int i, j, k;
                    if (p_3)
                        break;
                    (*l_836) = (safe_sub_func_int16_t_s_s((l_839 = (*l_836)), ((**l_749) = ((*l_774) = ((void*)0 != &g_321)))));
                    l_841 = &l_738[2];
                }
                for (l_736 = 0; (l_736 <= 0); l_736 += 1)
                {
                    unsigned char l_854 = 1UL;
                    int *l_855 = (void*)0;
                    if (p_5)
                        break;
                    (*l_836) = (((safe_div_func_int16_t_s_s(((-5L) || (safe_mul_func_int8_t_s_s(p_6, (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(func_14((l_850 != l_852), l_853, p_3, ((*l_836) && l_798)), p_5)) | l_854), p_6))))), p_5)) == (*g_67)) == 0x2B552FCEL);
                    (*l_836) = ((*g_333) = p_6);
                    for (g_101 = 0; (g_101 <= 0); g_101 += 1)
                    {
                        int **l_856 = (void*)0;
                        int **l_857 = &g_280;
                        const int *l_859 = &l_830;
                        const int **l_860 = &g_319;
                        (*l_857) = l_855;
                        if (l_858[0])
                            break;
                        (*l_860) = l_859;
                        if (p_5)
                            break;
                    }
                    for (g_275 = 0; (g_275 <= 0); g_275 += 1)
                    {
                        (*l_836) = func_28((*l_829), l_804, ((*g_615) == (*g_615)), &g_664, (p_3 == 0xB5L));
                        l_861 = p_4;
                    }
                }
            }
            l_862 = (l_829 = &l_736);
        }
    }
    if ((p_3 || (p_5 & (((*g_37) = (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(l_940, p_3)) > (((g_361[7][5][0] = &l_940) != (void*)0) && (9L < l_940))), 0))) && (safe_sub_func_int32_t_s_s(((**g_615) <= (**g_615)), p_5))))))
    {
        unsigned l_946[6][7] = {{0xC84E4DBCL,0UL,0x81B1361DL,0UL,0xC84E4DBCL,0x885B75D4L,0x8F01D16CL},{0x5EED30A1L,0x52C2EE63L,0UL,0x885B75D4L,4294967288UL,0x885B75D4L,0UL},{0x8F01D16CL,0x8F01D16CL,4294967295UL,0x81B1361DL,0x52C2EE63L,0xDA4800C3L,0x5EED30A1L},{0x5EED30A1L,0x885B75D4L,4294967295UL,4294967295UL,0x885B75D4L,0x5EED30A1L,4294967288UL},{0xC84E4DBCL,4294967295UL,0UL,4294967288UL,0x52C2EE63L,0x52C2EE63L,4294967288UL},{0x81B1361DL,0x5165603AL,0x81B1361DL,0xDA4800C3L,4294967288UL,0xC84E4DBCL,0x5EED30A1L}};
        int *l_949 = (void*)0;
        unsigned short *l_959 = &l_940;
        int i, j;
        if ((safe_rshift_func_uint16_t_u_u(((***l_748) = p_3), 7)))
        {
            int *l_952 = (void*)0;
            unsigned l_998 = 6UL;
            for (l_917 = 0; (l_917 <= 0); l_917 += 1)
            {
                const int *l_962[2][6][10] = {{{&g_87,&g_237,&l_738[2],(void*)0,&l_738[2],&l_738[2],&l_738[2],(void*)0,&l_738[1],&l_738[2]},{&l_738[2],&g_87,&l_738[2],(void*)0,(void*)0,&l_738[7],&l_738[7],&l_738[7],&l_738[7],(void*)0},{&l_738[0],(void*)0,(void*)0,&l_738[0],(void*)0,&g_237,&g_87,(void*)0,&l_738[2],&g_237},{&l_738[2],&l_738[7],(void*)0,&g_237,&l_738[2],&l_738[2],(void*)0,&g_87,&l_738[2],&g_87},{&l_738[0],&g_87,(void*)0,(void*)0,&g_87,(void*)0,&l_738[7],&g_87,&l_738[7],&l_738[1]},{&g_237,&g_87,&g_237,(void*)0,&l_738[7],&l_738[9],&l_738[0],&l_738[2],(void*)0,&g_87}},{{&l_738[1],(void*)0,&l_738[2],&g_87,&l_738[2],&g_87,&l_738[9],&g_237,&g_87,&g_237},{&l_738[2],&g_237,&l_738[2],&l_738[9],&l_738[2],&g_237,&l_738[2],&g_87,&l_738[2],(void*)0},{&g_87,&g_87,&l_738[7],&l_738[7],&l_738[2],&g_237,&l_738[2],(void*)0,&g_237,&g_87},{&g_237,&g_87,&g_87,&g_237,(void*)0,&l_738[2],&l_738[2],(void*)0,&l_738[2],(void*)0},{&l_738[2],&g_237,&l_738[2],&l_738[1],&l_738[0],&l_738[2],&l_738[9],&l_738[2],(void*)0,&l_738[3]},{&g_87,(void*)0,(void*)0,(void*)0,&g_87,&g_237,&l_738[0],&l_738[2],&g_87,&l_738[7]}}};
                int l_989 = 1L;
                unsigned l_996 = 1UL;
                int i, j, k;
                (*g_333) = l_946[5][0];
                for (g_634 = 0; (g_634 <= 0); g_634 += 1)
                {
                    const int *l_957 = &g_87;
                    if ((safe_rshift_func_int16_t_s_u(p_4, 0)))
                    {
                        int **l_950 = (void*)0;
                        int **l_951 = &g_220;
                        (*l_951) = l_949;
                    }
                    else
                    {
                        int **l_953 = (void*)0;
                        int **l_954 = (void*)0;
                        int **l_955 = &l_862;
                        if (p_5)
                            break;
                        (*l_955) = l_952;
                        (*g_333) = p_3;
                        if (p_5)
                            break;
                    }
                    l_957 = l_956;
                    for (g_9 = 0; (g_9 <= 0); g_9 += 1)
                    {
                        unsigned short *l_958[4][9] = {{&l_940,&l_940,&l_940,&g_9,&l_940,&l_940,&l_940,&g_9,&g_9},{&g_634,&g_634,&g_38,&g_634,&g_38,&g_634,&g_634,&g_38,&g_634},{&l_940,&l_940,&l_940,&l_940,&l_940,&l_940,&l_940,&l_940,&l_940},{(void*)0,&g_38,&g_38,(void*)0,&g_634,(void*)0,&g_38,&g_38,(void*)0}};
                        int **l_960 = (void*)0;
                        int i, j, k;
                        (*g_333) = (1L ^ (((l_958[3][6] != l_959) < g_12[(l_917 + 7)][l_917][g_9]) | p_6));
                        l_957 = (void*)0;
                    }
                }
                for (g_87 = 0; (g_87 >= 0); g_87 -= 1)
                {
                    int **l_961 = &l_862;
                    (*l_961) = &l_738[3];
                    if (p_6)
                        break;
                    for (l_763 = 0; (l_763 <= 0); l_763 += 1)
                    {
                        const int **l_963 = &g_319;
                        int i, j, k;
                        if (g_12[(l_917 + 5)][l_917][l_917])
                            break;
                        (*l_963) = l_962[1][5][6];
                        return p_4;
                    }
                }
                for (g_9 = 0; (g_9 <= 0); g_9 += 1)
                {
                    unsigned *l_974 = &l_946[2][2];
                    unsigned *l_975 = &g_79;
                    int l_976 = 0L;
                    unsigned char *l_977[9][6][4] = {{{&g_101,(void*)0,&g_101,&g_101},{&g_275,&l_917,(void*)0,&l_917},{&l_917,&g_101,&g_101,&l_917},{&l_917,&g_101,&g_101,(void*)0},{&l_917,&g_275,&g_275,&g_275},{&l_917,&g_101,(void*)0,&g_275}},{{&l_917,&l_917,&g_275,&g_275},{&l_917,&l_917,&g_275,&g_101},{&g_101,&g_275,&l_917,&g_275},{&l_917,&g_275,&l_917,&g_275},{&g_101,(void*)0,&g_101,&g_275},{&g_275,&g_275,&l_917,&g_101}},{{&g_275,&l_917,&g_275,(void*)0},{&g_101,&g_101,&g_275,&g_275},{&l_917,&g_275,&l_917,&g_101},{&l_917,(void*)0,&l_917,&g_275},{&g_275,&g_275,&g_275,&g_101},{(void*)0,&g_275,&g_101,&l_917}},{{&g_101,&l_917,&g_101,&l_917},{&g_275,&g_101,&g_275,(void*)0},{&g_101,&g_275,(void*)0,&l_917},{(void*)0,&g_101,&g_101,&g_275},{&g_275,&g_275,&g_275,&l_917},{&g_101,&g_275,&l_917,&l_917}},{{&l_917,&g_275,&g_275,&g_101},{(void*)0,&g_101,&g_275,&g_275},{&g_101,(void*)0,&g_275,&g_275},{&l_917,&g_275,&g_101,&g_275},{&g_275,&g_275,&l_917,(void*)0},{&g_275,&g_101,&g_101,&g_275}},{{&g_275,&g_275,&g_101,&g_275},{&g_275,&g_275,&l_917,&g_101},{(void*)0,&g_275,&l_917,(void*)0},{(void*)0,&l_917,&g_275,&g_101},{&g_101,&l_917,(void*)0,&g_101},{(void*)0,&g_101,&g_275,(void*)0}},{{&g_275,&g_101,&l_917,&g_275},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_101,(void*)0,&l_917,&g_275},{&l_917,(void*)0,&g_101,&g_275},{&l_917,&g_275,&l_917,&g_275},{&l_917,&g_101,&g_101,&g_101}},{{&l_917,&l_917,(void*)0,&l_917},{(void*)0,&g_101,&g_275,(void*)0},{&l_917,&l_917,&g_275,(void*)0},{&g_275,&l_917,&l_917,&l_917},{(void*)0,&g_275,(void*)0,&l_917},{&g_275,&g_275,&l_917,&g_101}},{{&l_917,(void*)0,&g_275,&l_917},{&l_917,&g_101,&g_101,(void*)0},{&g_101,&l_917,&l_917,&l_917},{&g_101,&l_917,&l_917,&g_101},{&l_917,&g_275,&g_275,&g_101},{&g_101,(void*)0,&g_101,&g_275}}};
                    int l_980[9][9] = {{(-1L),(-8L),0xC35E2FB1L,(-8L),(-1L),6L,0xE98D42A2L,0x54FD7AC7L,1L},{0xB055AF4AL,1L,0xB055AF4AL,0x89D44E58L,0x95E376D8L,0x95E376D8L,0x89D44E58L,0xB055AF4AL,1L},{(-1L),0x64121CD6L,0xE98D42A2L,0xED7E80E3L,0xC35E2FB1L,6L,1L,(-1L),1L},{0xBF0F0E22L,5L,0x89D44E58L,0x89D44E58L,5L,0xBF0F0E22L,0x95E376D8L,0xBF0F0E22L,5L},{1L,(-8L),1L,(-1L),0xC35E2FB1L,0x64121CD6L,0xC35E2FB1L,(-1L),1L},{0x95E376D8L,0x95E376D8L,0x89D44E58L,0xB055AF4AL,1L,0xB055AF4AL,0x89D44E58L,0x95E376D8L,0x95E376D8L},{1L,(-1L),0xC35E2FB1L,0x64121CD6L,0xC35E2FB1L,(-1L),1L,(-8L),(-1L)},{0xB055AF4AL,0xB3A36E3CL,0x89D44E58L,0xB3A36E3CL,0xB055AF4AL,5L,5L,0xB055AF4AL,0xB3A36E3CL},{1L,0xED7E80E3L,1L,0x54FD7AC7L,0xE98D42A2L,6L,(-1L),(-8L),0xC35E2FB1L}};
                    int i, j, k;
                    (*g_333) = ((g_101 = (safe_lshift_func_int16_t_s_s((p_6 = (p_5 <= (safe_lshift_func_uint16_t_u_s((*g_37), ((((void*)0 != (*g_615)) && p_6) < (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((((*l_975) = ((*l_974) = p_5)) == (((*g_333) > p_4) & p_4)) & p_5), p_4)), (*g_831))), l_976))))))), l_976))) > (-8L));
                    if (p_6)
                    {
                        int *l_988[1];
                        char *l_992 = (void*)0;
                        char *l_993 = &g_933;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_988[i] = &l_738[8];
                        l_976 = (safe_mul_func_uint16_t_u_u((((0L && func_41(l_980[3][6])) ^ p_6) > l_976), ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((*l_993) = ((*g_67) = ((safe_div_func_uint16_t_u_u(((l_989 = (l_987 >= p_6)) <= (safe_lshift_func_int8_t_s_u((0L & 0xC813L), (**g_615)))), 1UL)) || p_5))), (**g_615))), 0UL)) & p_4)));
                    }
                    else
                    {
                        const int **l_994 = &g_319;
                        int l_995[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_995[i] = 8L;
                        l_962[1][5][6] = &l_989;
                        (*l_994) = &g_237;
                        l_995[0] = p_6;
                        (*g_333) = (l_996 && (l_980[8][0] ^ 0xA4L));
                    }
                    (*g_333) = ((*g_333) <= l_976);
                    if (p_6)
                        break;
                    for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                    {
                        int **l_997[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_997[i] = &g_280;
                        (*g_333) = p_5;
                        g_319 = (void*)0;
                        l_962[1][5][6] = &l_989;
                    }
                }
            }
            l_998 = ((*g_333) = p_5);
            for (g_9 = 1; (g_9 <= 5); g_9 += 1)
            {
                (*g_333) = (l_998 == p_6);
                for (g_38 = 0; (g_38 <= 6); g_38 += 1)
                {
                    for (g_634 = 1; (g_634 <= 7); g_634 += 1)
                    {
                        (*g_333) = ((void*)0 == &l_949);
                    }
                }
            }
        }
        else
        {
            int *l_999 = &g_87;
            int **l_1000 = (void*)0;
            g_280 = l_999;
            return (*g_333);
        }
        (*g_333) = l_1001;
    }
    else
    {
        unsigned short l_1004 = 65535UL;
        int l_1005 = 0x9E7C5270L;
        l_1005 = (safe_lshift_func_uint16_t_u_s(l_1004, 5));
    }
    if ((*g_333))
    {
        const unsigned short *l_1007[8] = {&g_129,&l_940,&g_129,&g_129,&l_940,&g_129,&g_129,&l_940};
        const unsigned short **l_1006 = &l_1007[7];
        const unsigned short ***l_1008 = &l_1006;
        const int l_1009 = (-1L);
        const char *l_1010 = &g_683;
        int l_1036 = 1L;
        unsigned short *l_1041 = &l_940;
        unsigned l_1062[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1062[i] = 0UL;
        if ((((*l_1008) = l_1006) == (*g_802)))
        {
            unsigned short *l_1027 = &g_38;
            int l_1032 = 0x4127F652L;
            short *l_1033 = &g_232;
            for (g_38 = 0; (g_38 <= 8); g_38 += 1)
            {
                unsigned l_1015 = 0UL;
                int *l_1018 = &g_87;
                int **l_1019 = (void*)0;
                int **l_1020 = &g_220;
                (*l_1018) = func_28(((*g_37) | l_1009), l_1010, g_12[0][0][0], &g_664, ((&g_320[7][0] != (void*)0) != (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_1015 = ((*l_774) = (*g_37))), (safe_mod_func_int32_t_s_s((-1L), p_4)))), l_1009))));
                (*l_1020) = &l_738[8];
                for (p_6 = 8; (p_6 >= 0); p_6 -= 1)
                {
                    int * const l_1021 = &l_738[2];
                    int **l_1022 = &l_862;
                    (*l_1022) = l_1021;
                    (*l_1021) = 0L;
                }
            }
            (*g_333) = ((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_4, 2)), p_4)) >= (safe_lshift_func_int8_t_s_s((1UL && (((*l_735) = (l_1009 > (l_1032 >= (-6L)))) < 254UL)), l_1032)));
            l_738[2] = ((*g_333) = p_3);
        }
        else
        {
            (*g_333) = (safe_rshift_func_uint8_t_u_s(p_6, 4));
        }
        l_1036 = 0xB060E088L;
        for (p_6 = 0; (p_6 <= (-6)); p_6--)
        {
            unsigned short ***l_1039 = &g_803;
            unsigned short ****l_1040 = &g_802;
            (*g_333) = ((&l_1006 == ((*l_1040) = l_1039)) == (*g_616));
        }
        if (p_5)
        {
            l_862 = &g_87;
        }
        else
        {
            int *l_1052[7] = {&l_738[2],&l_1036,&l_1036,&l_738[2],&l_1036,&l_1036,&l_738[2]};
            int i;
            for (p_3 = 24; (p_3 <= 42); p_3++)
            {
                return (*g_333);
            }
            for (g_634 = 0; (g_634 != 22); g_634 = safe_add_func_int32_t_s_s(g_634, 4))
            {
                unsigned short l_1068 = 1UL;
                unsigned ***l_1071 = &g_320[7][0];
                int l_1072 = (-1L);
                for (l_763 = 8; (l_763 > 42); l_763 = safe_add_func_uint16_t_u_u(l_763, 5))
                {
                    unsigned l_1053 = 0x67262017L;
                    const char *l_1067 = &g_929;
                    for (g_79 = (-27); (g_79 < 56); g_79 = safe_add_func_uint16_t_u_u(g_79, 8))
                    {
                        int *l_1050[4];
                        int **l_1051 = &g_333;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1050[i] = &l_738[5];
                        l_1052[2] = ((*l_1051) = l_1050[0]);
                        (*l_1051) = (void*)0;
                    }
                    if (l_1053)
                        continue;
                    if (((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((0x0415A9C7L >= (g_87 = (-1L))), (safe_mul_func_int8_t_s_s((l_1062[0] = (safe_rshift_func_uint8_t_u_u((0x1BL ^ p_4), 0))), l_1036)))), p_6)) == (((-9L) & p_5) != l_1053)))
                    {
                        const int **l_1063 = &l_956;
                        (*l_1063) = &l_1009;
                        (*l_1063) = l_1052[6];
                    }
                    else
                    {
                        unsigned short l_1066 = 0UL;
                        int l_1073[1][6][6] = {{{0x8B410B8DL,(-9L),0xB7C1F7D1L,0xB7C1F7D1L,(-9L),0x8B410B8DL},{(-1L),0x05BE2A12L,0x63C076BBL,1L,0x8B410B8DL,0xB219EFFEL},{(-9L),0x89D22F8DL,0xCD9B5733L,0x8B410B8DL,0xCD9B5733L,0x89D22F8DL},{(-9L),0xB219EFFEL,0x8B410B8DL,1L,0x63C076BBL,0x05BE2A12L},{(-1L),0x8B410B8DL,(-9L),0xB7C1F7D1L,0xB7C1F7D1L,(-9L)},{0x8B410B8DL,0x8B410B8DL,0xE5484D10L,(-1L),0x63C076BBL,0xB7C1F7D1L}}};
                        int i, j, k;
                        l_1036 = (safe_add_func_uint32_t_u_u(p_6, (func_28((l_1066 && p_3), l_1067, l_1068, &p_4, ((l_1072 = ((void*)0 == l_1071)) == ((l_1073[0][2][5] = (+(**g_615))) > 0x46L))) | 0x2EL)));
                        g_87 = 0xE577EB66L;
                    }
                }
            }
        }
    }
    else
    {
        int *l_1079 = &l_738[2];
        unsigned short *** const *l_1087 = &g_802;
        for (p_3 = 10; (p_3 >= 30); ++p_3)
        {
            int *l_1077[5];
            int **l_1080 = &l_1079;
            int i;
            for (i = 0; i < 5; i++)
                l_1077[i] = &g_87;
            for (l_917 = 0; (l_917 <= 0); l_917 += 1)
            {
                int * const l_1076 = (void*)0;
                int **l_1078[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_1077[2] = l_1076;
                g_220 = l_1077[2];
                l_1079 = &l_738[2];
                for (g_275 = 0; (g_275 <= 0); g_275 += 1)
                {
                    (*g_333) = (+(((*l_1079) = (*l_1079)) <= p_4));
                }
            }
            (*l_1080) = &l_738[2];
            (*g_333) = (safe_unary_minus_func_int32_t_s(((*l_1079) = (*g_333))));
            if (p_6)
                break;
        }
        for (p_3 = 0; (p_3 == 17); ++p_3)
        {
            unsigned short l_1086 = 0xC898L;
            unsigned *l_1088 = &g_273[2];
            int l_1089 = 5L;
            unsigned short l_1090 = 0x4FC4L;
        }
        (*l_1079) = (*l_1079);
    }
    (*l_1092) = (-4L);
    return p_6;
}







static short func_14(unsigned char p_15, unsigned short * p_16, short p_17, unsigned short p_18)
{
    unsigned l_722 = 0UL;
    unsigned char l_728 = 0x95L;
    for (p_15 = 13; (p_15 <= 51); p_15 = safe_add_func_uint32_t_u_u(p_15, 8))
    {
        const char *l_723 = &g_683;
        char *l_729 = &g_664;
        int l_730 = 0L;
        for (g_38 = 0; (g_38 <= 5); g_38 += 1)
        {
            int l_731 = 0xD7C5E2D6L;
            int i;
            l_731 = ((safe_mul_func_uint8_t_u_u((0UL <= (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(g_273[g_38], 2)) && ((~func_28(l_722, l_723, (((safe_mul_func_int8_t_s_s(1L, g_273[g_38])) > (safe_add_func_int8_t_s_s(((-1L) < l_728), 0x47L))) | l_728), l_729, l_730)) == l_728)), 12))), 0x3DL)) <= l_728);
            return p_17;
        }
        return p_15;
    }
    return p_17;
}







static unsigned char func_21(int p_22, int p_23, short p_24, unsigned short p_25)
{
    char l_34 = (-10L);
    char *l_662 = (void*)0;
    char *l_663[2];
    unsigned char *l_685[10] = {&g_275,&g_275,&g_275,&g_275,&g_275,&g_275,&g_275,&g_275,&g_275,&g_275};
    int l_686 = 0L;
    unsigned *l_696 = &g_273[4];
    int i;
    for (i = 0; i < 2; i++)
        l_663[i] = &g_664;
    if ((((safe_lshift_func_uint8_t_u_u((l_686 = (g_10 || func_28(l_34, func_35(g_37), (+(p_22 & (g_664 = (safe_mul_func_int8_t_s_s(1L, 3UL))))), &l_34, p_24))), 4)) >= p_25) != p_25))
    {
        unsigned l_691 = 0x92BB0671L;
        const unsigned *l_692[7][3][1];
        int **l_711 = &g_220;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_692[i][j][k] = &g_273[1];
            }
        }
        for (g_634 = 0; (g_634 <= 3); g_634 = safe_add_func_uint16_t_u_u(g_634, 2))
        {
            int l_702 = 0x482735DCL;
            for (g_275 = 0; (g_275 <= 0); g_275 += 1)
            {
                const unsigned **l_693 = (void*)0;
                const unsigned **l_694 = (void*)0;
                const unsigned **l_695 = &l_692[1][0][0];
                unsigned **l_697 = &g_321;
                int l_710 = 0x118BFA31L;
            }
            return l_691;
        }
        (*l_711) = &p_23;
    }
    else
    {
        return (**g_615);
    }
    return (**g_615);
}







static unsigned char func_28(short p_29, const char * p_30, unsigned p_31, char * p_32, unsigned char p_33)
{
    int *l_665[2];
    int **l_666 = &l_665[1];
    unsigned **l_673 = &g_321;
    unsigned *l_674 = &g_79;
    char * const *l_684 = &g_67;
    int i;
    for (i = 0; i < 2; i++)
        l_665[i] = &g_87;
    (*l_666) = l_665[1];
    for (g_87 = 0; (g_87 <= 14); ++g_87)
    {
        if (p_31)
            break;
        g_333 = (*l_666);
    }
    (**l_666) = (0x756BL >= (!((((safe_add_func_uint32_t_u_u(0x008B602CL, ((*l_674) = ((l_673 == &g_321) < (**l_666))))) >= ((safe_lshift_func_int8_t_s_s(((*p_32) = (p_33 ^ 4294967293UL)), 1)) && (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((((g_681[8] = &p_30) != l_684) <= 4294967295UL), 7)) >= 0x87L), p_33)))) && p_31) >= p_31)));
    return p_31;
}







static const char * func_35(unsigned short * p_36)
{
    char *l_63[4][10] = {{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64},{&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64,&g_64}};
    char *l_66 = &g_64;
    char **l_65[10][1][1] = {{{(void*)0}},{{&l_66}},{{&l_63[1][6]}},{{&l_63[1][6]}},{{&l_66}},{{(void*)0}},{{&l_66}},{{&l_63[1][6]}},{{&l_63[1][6]}},{{&l_66}}};
    unsigned char l_68 = 247UL;
    unsigned short **l_69 = &g_37;
    int *l_658 = &g_87;
    const char *l_659 = &g_83;
    int i, j, k;
    (*l_658) = ((*g_37) && (safe_lshift_func_uint16_t_u_u(func_41(func_43(func_45(func_51(g_10, (safe_mod_func_uint8_t_u_u(((*g_37) || (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((l_63[1][3] != (g_67 = l_63[2][1])), g_10)) ^ (l_68 ^ g_10)) >= (((*l_69) = p_36) == &g_38)), g_38)), 0x0C16569DL))), l_68)), &g_64), g_83, &g_83, l_68, &g_83))), l_68)));
    return l_659;
}







static unsigned short func_41(unsigned p_42)
{
    int l_652[4] = {0L,0L,0L,0L};
    unsigned char l_656 = 0xD3L;
    int **l_657 = &g_220;
    int i;
    (*g_333) = (safe_sub_func_int8_t_s_s(p_42, (((*g_37) = (safe_mul_func_int16_t_s_s(0x304DL, l_652[1]))) >= ((safe_lshift_func_uint8_t_u_s(0x1DL, 4)) & ((safe_unary_minus_func_int32_t_s(p_42)) ^ l_656)))));
    (*l_657) = &l_652[1];
    return p_42;
}







static unsigned func_43(unsigned short * p_44)
{
    int l_335 = 0L;
    unsigned char l_353 = 2UL;
    const unsigned short l_375 = 0UL;
    int *l_403 = &g_87;
    const char *l_406 = &g_64;
    unsigned short **l_432 = &g_37;
    int *l_501 = &g_87;
    char **l_600 = &g_67;
    char ***l_599 = &l_600;
    const unsigned *l_608[10];
    const unsigned **l_607 = &l_608[2];
    const unsigned ***l_606 = &l_607;
    unsigned char l_612[9][10][2] = {{{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L}},{{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL}},{{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL}},{{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L}},{{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL}},{{0x93L,249UL},{0xDFL,0x52L},{0xDFL,249UL},{0x93L,249UL},{0xDFL,0x52L},{0xDFL,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L}},{{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL}},{{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L}},{{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L},{0x93L,4UL},{0x93L,0x52L},{255UL,0x52L}}};
    unsigned char *l_618 = &l_353;
    unsigned char **l_617 = &l_618;
    int l_623 = 0x67B613DBL;
    int **l_647 = &l_501;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_608[i] = (void*)0;
    if ((*g_319))
    {
        const short l_325 = 0L;
        int *l_332 = &g_87;
        int *l_334 = &g_87;
        unsigned l_342 = 4294967295UL;
        unsigned char *l_377[9] = {&l_353,&g_275,&l_353,&g_275,&l_353,&g_275,&l_353,&g_275,&l_353};
        unsigned char * const *l_376 = &l_377[6];
        int *l_483 = &g_87;
        int *l_514 = (void*)0;
        int l_518 = 1L;
        int *l_519 = &l_335;
        int l_570 = 3L;
        int i;
        if ((*g_319))
        {
            int *l_323 = &g_87;
            int **l_324 = &g_280;
            int *l_384 = &g_87;
            (*l_324) = l_323;
            if ((*g_319))
            {
                int l_328 = (-1L);
                unsigned l_330 = 5UL;
                unsigned *l_372 = &g_273[0];
                char l_383[4][8];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_383[i][j] = (-7L);
                }
                if (l_325)
                {
                    (**l_324) = (*g_280);
                }
                else
                {
                    int *l_331 = &g_87;
                    for (g_101 = (-27); (g_101 < 46); ++g_101)
                    {
                        l_328 = l_325;
                    }
                    (*l_323) = 5L;
                    if ((**l_324))
                    {
                        unsigned char l_329 = 4UL;
                        (**l_324) = (((*g_37) = (l_328 && 0xBDB5L)) < ((l_325 != (l_329 & (l_330 = 0UL))) || (l_329 == ((*g_67) < g_305))));
                        (*l_324) = l_331;
                    }
                    else
                    {
                        (*g_280) = l_325;
                        l_334 = (g_333 = l_332);
                        (**l_324) = (*g_333);
                    }
                }
                if (((l_335 != (safe_sub_func_int32_t_s_s((*l_323), (~l_330)))) >= (safe_mod_func_int32_t_s_s(0x460910E6L, (safe_div_func_int16_t_s_s(l_342, (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*g_67) = (*g_67)), l_330)), (safe_div_func_uint16_t_u_u((!(safe_mul_func_int8_t_s_s((**l_324), ((l_328 != 0x1AL) != (*l_334))))), l_335))))))))))
                {
                    unsigned short **l_358 = &g_37;
                    unsigned short *l_360 = &g_38;
                    unsigned short **l_359 = &l_360;
                    int l_362 = 0x91E52429L;
                    unsigned *l_373 = (void*)0;
                    int l_381 = 0x73102F56L;
                    l_362 = ((*g_280) = (safe_add_func_uint32_t_u_u((((*l_332) && l_353) & (((~((safe_mod_func_int8_t_s_s(0xE3L, (safe_sub_func_uint32_t_u_u((*l_332), (((*l_359) = ((*l_358) = &g_38)) == (g_361[7][5][0] = &g_38)))))) >= 0x075EL)) > g_77) <= (l_335 = l_335))), l_362)));
                    for (g_77 = 0; (g_77 > 47); g_77 = safe_add_func_uint8_t_u_u(g_77, 2))
                    {
                        unsigned **l_374 = &g_321;
                        int l_380 = 0x4ADE73CAL;
                        short *l_382 = &g_232;
                        (*g_333) = (safe_div_func_uint8_t_u_u(((!(safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x61B7L, ((((*l_360) = (*p_44)) && (l_372 != ((*l_374) = l_373))) >= l_375))), ((void*)0 != l_376)))))) <= ((*l_382) = ((safe_lshift_func_int16_t_s_s((l_380 > (((*l_332) > l_381) || l_375)), l_330)) >= (*g_319)))), (*g_67)));
                    }
                    (*l_334) = (((*g_37) != l_383[1][2]) ^ 0x90E3L);
                }
                else
                {
                    (*l_324) = l_372;
                }
                (*l_324) = l_384;
                (**l_324) = (safe_rshift_func_uint16_t_u_u((*g_37), ((~((-3L) ^ (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*l_323) || (safe_add_func_uint32_t_u_u(l_383[3][0], ((*l_323) != (*l_384))))), (*g_67))), 0xD8L)))) < (*l_334))));
            }
            else
            {
                unsigned short l_393 = 0xD1C0L;
                int *l_396 = &g_87;
                (*g_333) = l_393;
                for (l_342 = 0; (l_342 != 11); l_342 = safe_add_func_uint32_t_u_u(l_342, 2))
                {
                    unsigned l_397[7][8] = {{0x386802A8L,4294967295UL,4294967295UL,0x386802A8L,4294967288UL,4294967295UL,0xAFFE6685L,4294967288UL},{0x386802A8L,0xAFFE6685L,0xCEE99220L,0x386802A8L,0x386802A8L,0xCEE99220L,0xAFFE6685L,0x386802A8L},{4294967288UL,0xAFFE6685L,4294967295UL,4294967288UL,0x386802A8L,4294967295UL,4294967295UL,0x386802A8L},{0x386802A8L,4294967295UL,4294967295UL,0x386802A8L,4294967288UL,4294967295UL,0xAFFE6685L,4294967288UL},{0x386802A8L,0xAFFE6685L,0xCEE99220L,0x386802A8L,0x386802A8L,0xCEE99220L,0xAFFE6685L,0x386802A8L},{4294967288UL,0xAFFE6685L,4294967295UL,4294967288UL,0x386802A8L,4294967295UL,4294967295UL,0x386802A8L},{0x386802A8L,4294967295UL,4294967295UL,0x386802A8L,4294967288UL,4294967295UL,0xAFFE6685L,4294967288UL}};
                    int i, j;
                    (*l_324) = l_396;
                    if (l_397[6][1])
                        break;
                    for (g_38 = 0; (g_38 <= 5); g_38 += 1)
                    {
                        unsigned short **l_399 = &g_361[6][5][0];
                        unsigned short ***l_398 = &l_399;
                        int i;
                        if (g_273[g_38])
                            break;
                        (*l_324) = (*l_324);
                        (*l_324) = (void*)0;
                        (*l_398) = &g_361[7][3][0];
                    }
                    if (l_397[6][1])
                        break;
                }
            }
            (*l_334) = (((*l_324) = &l_335) == l_334);
            for (g_38 = 0; (g_38 >= 35); g_38++)
            {
                int **l_411 = (void*)0;
                int l_414 = 0L;
                for (l_335 = 0; (l_335 <= 5); l_335 += 1)
                {
                    int i;
                    for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                    {
                        int *l_402 = &g_87;
                        (*l_324) = &l_335;
                        l_403 = l_402;
                        (*l_334) = 1L;
                    }
                    (*g_333) = g_273[l_335];
                }
                (*l_332) = (safe_rshift_func_uint8_t_u_s((&g_64 == l_406), 3));
                (*l_384) = ((0x28L & (safe_rshift_func_int16_t_s_s(0x92C3L, (((safe_div_func_uint8_t_u_u(((void*)0 == l_411), ((safe_lshift_func_int16_t_s_s((*l_403), 13)) ^ (((((*l_403) < (((*g_280) && ((**l_324) = (0x06L != 0x8BL))) <= (*l_332))) ^ l_414) & 4294967294UL) & 6UL)))) <= (*l_332)) ^ (*g_67))))) ^ (*l_384));
            }
        }
        else
        {
            short l_420 = (-1L);
            int *l_465[3];
            int l_500 = 0xDDC3FBEEL;
            int **l_515 = &l_465[1];
            int i;
            for (i = 0; i < 3; i++)
                l_465[i] = &g_87;
            for (g_275 = 12; (g_275 <= 43); g_275 = safe_add_func_uint32_t_u_u(g_275, 8))
            {
                char l_422 = (-6L);
                for (l_335 = 0; (l_335 != 0); l_335 = safe_add_func_uint8_t_u_u(l_335, 3))
                {
                    unsigned short l_419 = 65535UL;
                    if (l_419)
                        break;
                    for (g_79 = 0; (g_79 <= 0); g_79 += 1)
                    {
                        int **l_421 = &g_280;
                        (*g_333) = l_420;
                        if ((*l_332))
                            continue;
                        (*l_421) = l_332;
                    }
                    return g_38;
                }
                if (l_422)
                {
                    int **l_423 = &l_403;
                    unsigned l_436 = 6UL;
                    (*l_423) = l_332;
                    for (g_232 = 6; (g_232 >= 1); g_232 -= 1)
                    {
                        if (l_422)
                            break;
                        (*l_423) = l_334;
                    }
                    for (l_420 = 0; (l_420 <= (-20)); l_420--)
                    {
                        if ((*g_333))
                            break;
                    }
                    for (g_38 = 0; (g_38 >= 36); ++g_38)
                    {
                        unsigned short **l_431[7][9];
                        unsigned short ***l_430 = &l_431[5][4];
                        int l_437 = 0xACF82B64L;
                        int l_446 = (-3L);
                        int l_447[5];
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_431[i][j] = &g_361[7][5][0];
                        }
                        for (i = 0; i < 5; i++)
                            l_447[i] = 0L;
                        (*l_423) = &l_335;
                        (*l_403) = (safe_add_func_uint32_t_u_u(((*g_321) = ((0L | (0L == (((*g_37) | (((*l_430) = &g_37) != l_432)) && (safe_unary_minus_func_int32_t_s(((((safe_sub_func_uint8_t_u_u(((void*)0 == l_423), (*g_67))) > ((0L == l_436) && 0xC8L)) >= (*g_67)) >= 7UL)))))) > (*l_403))), (*l_332)));
                        (*l_332) = ((l_437 = l_422) ^ ((0L && (((safe_sub_func_int32_t_s_s(((**l_423) | ((l_446 = ((**l_423) >= ((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(0x68L, (&g_320[7][0] == &g_320[7][0]))), ((**l_423) ^ ((safe_add_func_uint32_t_u_u(0x24AD0F13L, (-8L))) | (*g_321))))) && l_420) < 0x3ECDF271L) ^ 0xF6F8L))) || (*l_334))), l_447[3])) < l_420) > 0xE6L)) | l_422));
                        (*l_423) = l_332;
                    }
                }
                else
                {
                    (*g_333) = l_420;
                }
            }
            for (l_420 = 0; (l_420 <= 7); l_420 += 1)
            {
                unsigned l_457 = 4294967295UL;
                const int *l_474 = &l_335;
                int **l_478 = &l_403;
                short *l_498 = (void*)0;
                short *l_499 = &g_232;
                if ((safe_sub_func_int32_t_s_s((((((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x1FL, 1)), g_101)) & (((1L >= (safe_unary_minus_func_uint32_t_u((*l_403)))) < (safe_rshift_func_int8_t_s_s((((**l_432) = (&l_406 != (void*)0)) > (*l_332)), 6))) > ((*g_321) = 8UL))) <= l_457) == 8UL) || (*g_67)), (*l_334))))
                {
                    const short l_462 = 0x9A1FL;
                    int *l_463 = &l_335;
                    (*l_463) = ((*l_332) = (+(safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((*l_332), l_420)), l_462))));
                    for (g_64 = 7; (g_64 >= 0); g_64 -= 1)
                    {
                        int *l_464 = &l_335;
                        int i;
                        l_465[1] = l_464;
                        (*l_463) = l_457;
                        (*g_333) = (safe_lshift_func_int8_t_s_s(((-1L) == (((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((void*)0 == l_377[6]), (*g_67))), (*g_67))) != (*p_44)) | (safe_rshift_func_int16_t_s_s(l_457, (*l_403))))), 3));
                        (*l_332) = ((*g_37) ^ ((void*)0 == p_44));
                    }
                    for (g_305 = 2; (g_305 <= 7); g_305 += 1)
                    {
                        const int **l_475 = &g_319;
                        int ***l_479 = &l_478;
                        int * const **l_480 = (void*)0;
                        int * const *l_482 = (void*)0;
                        int * const **l_481 = &l_482;
                        (*l_475) = l_474;
                        (*l_334) = (safe_lshift_func_uint8_t_u_s(((*l_474) & (((*l_479) = l_478) != ((*l_481) = &l_463))), 0));
                        (*l_478) = l_463;
                        if ((*g_319))
                            break;
                    }
                    if ((*l_474))
                    {
                        g_280 = &l_335;
                    }
                    else
                    {
                        (*l_478) = (*l_478);
                        (*l_478) = l_483;
                    }
                }
                else
                {
                    g_280 = l_465[0];
                }
                if ((*l_403))
                    break;
                if ((*l_403))
                    break;
                if ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((*l_334), (~(*l_334)))), (((safe_sub_func_int16_t_s_s(0xB5EBL, (*l_403))) > ((((void*)0 != (*l_432)) & (((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((*l_499) = (((*l_403) != (((safe_rshift_func_uint16_t_u_s((*g_37), (*l_474))) <= (*l_474)) <= (*g_321))) >= 248UL)), 4)), g_305)), (*l_403))) && (*l_403)) < (**l_478))) < 0xB5L)) | l_500))))
                {
                    l_403 = &l_335;
                    if ((*l_332))
                    {
                        (*l_478) = &l_335;
                    }
                    else
                    {
                        l_483 = l_501;
                    }
                }
                else
                {
                    unsigned short l_502 = 1UL;
                    int l_503 = 0x746391D3L;
                    if (l_502)
                        break;
                    for (g_101 = 0; (g_101 <= 7); g_101 += 1)
                    {
                        (*l_478) = l_334;
                        l_503 = l_502;
                        (*l_334) = (-8L);
                    }
                    for (g_79 = 1; (g_79 <= 7); g_79 += 1)
                    {
                        (*l_478) = (*l_478);
                    }
                }
            }
            (*g_333) = (*l_403);
            (*l_483) = (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(250UL, (safe_add_func_uint32_t_u_u((*g_321), ((*l_501) || (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((l_514 = &l_335) != ((*l_515) = &l_335)), 14)) <= ((**l_376) = 255UL)), (*p_44)))))))), (*p_44)));
        }
        (*l_519) = ((*g_333) = (safe_div_func_uint32_t_u_u((*l_501), l_518)));
        if ((*l_501))
        {
            int **l_520[2][4] = {{&l_334,&l_334,&g_333,&l_334},{&l_334,&l_334,&l_334,&l_334}};
            const char * const *l_521 = &l_406;
            const char * const **l_522[10][10][2];
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_522[i][j][k] = (void*)0;
                }
            }
            l_403 = &l_335;
            l_501 = (void*)0;
            l_501 = &l_518;
            g_523[0] = l_521;
        }
        else
        {
            int **l_525 = &l_501;
            int l_557 = 0x139E0D04L;
            (*l_525) = (void*)0;
            for (g_275 = (-13); (g_275 >= 21); g_275 = safe_add_func_uint8_t_u_u(g_275, 3))
            {
                int *l_531 = &l_518;
            }
        }
    }
    else
    {
        int *l_577[10][2][10] = {{{&g_87,(void*)0,&g_87,&l_335,&l_335,&g_87,&l_335,&g_87,(void*)0,&g_87},{&l_335,&l_335,&g_87,(void*)0,&l_335,&l_335,&l_335,&l_335,&l_335,&l_335}},{{&l_335,(void*)0,&g_87,&g_87,(void*)0,&l_335,&g_87,&l_335,&l_335,&g_87},{(void*)0,&l_335,(void*)0,&g_87,&l_335,&g_87,&g_87,&l_335,&l_335,(void*)0}},{{(void*)0,&l_335,&g_87,&g_87,&l_335,&l_335,(void*)0,&l_335,&l_335,&g_87},{&g_87,&l_335,&l_335,&g_87,&g_87,&g_87,&g_87,&l_335,&l_335,&l_335}},{{&g_87,&l_335,(void*)0,&g_87,(void*)0,&g_87,(void*)0,&g_87,&l_335,&l_335},{&g_87,&l_335,&l_335,&g_87,(void*)0,&g_87,&l_335,&l_335,(void*)0,&l_335}},{{(void*)0,&g_87,(void*)0,&l_335,&g_87,&g_87,(void*)0,&l_335,(void*)0,&l_335},{&l_335,&l_335,&l_335,&g_87,&l_335,&l_335,&l_335,&g_87,&g_87,&g_87}},{{&l_335,&g_87,(void*)0,&g_87,&g_87,(void*)0,(void*)0,(void*)0,(void*)0,&g_87},{&l_335,&g_87,&g_87,&l_335,&g_87,&l_335,&l_335,&g_87,&g_87,&g_87}},{{&l_335,&l_335,&l_335,&g_87,&g_87,(void*)0,(void*)0,&l_335,&g_87,&g_87},{&l_335,&g_87,&l_335,(void*)0,&g_87,&l_335,&l_335,(void*)0,&l_335,&g_87}},{{&g_87,&l_335,&l_335,&g_87,&l_335,(void*)0,(void*)0,&g_87,&g_87,&l_335},{(void*)0,&l_335,&g_87,&g_87,(void*)0,&l_335,&l_335,&l_335,(void*)0,(void*)0}},{{&g_87,&l_335,&l_335,(void*)0,(void*)0,&l_335,&l_335,&g_87,&l_335,&l_335},{&l_335,(void*)0,&l_335,&g_87,(void*)0,&l_335,&g_87,&l_335,&l_335,(void*)0}},{{&g_87,&l_335,&l_335,(void*)0,&g_87,&l_335,&g_87,&g_87,(void*)0,(void*)0},{&g_87,&g_87,&l_335,&l_335,&g_87,&g_87,&g_87,&l_335,&g_87,&l_335}}};
        unsigned char * const l_583[7] = {&l_353,&g_275,&g_275,&l_353,&g_275,&g_275,&l_353};
        unsigned l_588 = 3UL;
        unsigned ** const *l_605 = (void*)0;
        unsigned short l_637 = 0xD876L;
        int i, j, k;
        l_577[0][1][7] = &l_335;
        for (l_353 = 0; (l_353 <= 0); l_353 += 1)
        {
            unsigned char *l_582 = &g_275;
            int l_586 = 0L;
            unsigned short *l_587 = (void*)0;
            int i;
            if ((*g_319))
                break;
            l_588 = ((!((safe_rshift_func_int8_t_s_s((*g_67), (((*l_403) = (((l_582 != l_583[6]) > ((*g_321) = ((l_586 > ((p_44 != (l_587 = (void*)0)) <= (l_586 != (-8L)))) != (((*l_582) = g_273[1]) != 3L)))) <= (*g_319))) < 0L))) == 0UL)) ^ l_586);
            for (g_64 = 0; (g_64 >= 0); g_64 -= 1)
            {
                int l_593 = 0x7A9D84A5L;
                int i, j;
                l_586 = ((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((void*)0 == &g_523[0]), 5)) >= l_586), l_593)) ^ (safe_lshift_func_uint8_t_u_s(g_79, (*l_501))));
                (*l_501) = (*l_403);
                for (g_83 = 1; (g_83 >= 0); g_83 -= 1)
                {
                    for (g_275 = 0; (g_275 <= 0); g_275 += 1)
                    {
                        int i, j, k;
                        l_577[(l_353 + 5)][(g_275 + 1)][(g_64 + 1)] = l_577[g_275][(g_64 + 1)][(l_353 + 8)];
                    }
                    for (l_588 = 0; (l_588 <= 1); l_588 += 1)
                    {
                        unsigned char l_596 = 6UL;
                        (*l_403) = ((+((*l_582) = l_596)) >= ((safe_rshift_func_int16_t_s_s((&g_523[0] == l_599), 4)) == (*l_501)));
                    }
                }
            }
        }
        for (g_101 = 1; (g_101 <= 5); g_101 += 1)
        {
            short l_619 = 0xE118L;
            int l_620 = (-8L);
            for (l_588 = 0; (l_588 <= 5); l_588 += 1)
            {
                char *l_609 = &g_83;
                unsigned char l_635 = 1UL;
                int *l_636 = (void*)0;
                char l_644 = 0x42L;
                int i;
                (*l_501) = (safe_mul_func_uint8_t_u_u(g_273[g_101], g_273[g_101]));
                if ((safe_mul_func_int8_t_s_s(((*l_609) = ((*g_67) = (l_605 == l_606))), (safe_mod_func_int8_t_s_s((l_612[1][0][0] < ((safe_lshift_func_uint16_t_u_u((g_615 != l_617), (*p_44))) ^ ((*p_44) || (*g_37)))), (l_619 = ((*l_618) = g_273[g_101])))))))
                {
                    (*l_501) = (l_620 = l_619);
                    for (g_64 = 0; (g_64 <= 5); g_64 += 1)
                    {
                        return l_620;
                    }
                    for (l_335 = 0; (l_335 <= 5); l_335 += 1)
                    {
                        int *l_621 = &l_620;
                        int **l_622 = &l_577[0][1][7];
                        (*l_622) = (l_621 = &l_335);
                        (*l_403) = 0xC4ABF24CL;
                        return l_623;
                    }
                }
                else
                {
                    int l_630[10] = {0xD110BC2DL,0x53EB7830L,0xD110BC2DL,0xD110BC2DL,0x53EB7830L,0xD110BC2DL,0xD110BC2DL,0x53EB7830L,0xD110BC2DL,0xD110BC2DL};
                    unsigned short *l_633 = &g_634;
                    int i;
                    (*l_403) = (l_635 = (safe_mod_func_uint32_t_u_u(((g_273[l_588] = (safe_div_func_uint32_t_u_u(((-1L) & (safe_div_func_int16_t_s_s(l_630[5], (*p_44)))), (((*l_633) = ((l_630[6] > ((*l_403) ^ (safe_div_func_int16_t_s_s((((4294967295UL & (*g_321)) <= ((1L > l_630[5]) ^ 0xC4621246L)) || 255UL), g_273[g_101])))) & (*l_501))) ^ (*l_501))))) > l_620), 4294967288UL)));
                    l_636 = l_636;
                }
                if ((l_637 > ((*l_403) <= (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((((-1L) && (*l_501)) != 0xD6D039B7L), l_620)) && (safe_mod_func_int32_t_s_s((l_644 = (*l_501)), 0x4956DCCCL))), (*g_321))))))
                {
                    return l_620;
                }
                else
                {
                    (*l_403) = (safe_div_func_int16_t_s_s(l_620, (*p_44)));
                }
            }
        }
        (*l_403) = (*l_403);
    }
    (*l_647) = &l_335;
    return g_275;
}







static unsigned short * func_45(unsigned short * p_46, int p_47, char * p_48, unsigned short p_49, char * p_50)
{
    int l_93 = 0x910508B3L;
    int l_96 = (-9L);
    int *l_97 = (void*)0;
    int *l_98 = &g_87;
    const unsigned char l_102 = 8UL;
    char l_111 = 0L;
    unsigned char *l_123 = &g_101;
    unsigned l_124[2];
    unsigned short **l_125 = &g_37;
    unsigned short *l_127 = (void*)0;
    unsigned short **l_126 = &l_127;
    const unsigned short *l_128 = &g_129;
    short l_147[1];
    const int *l_240 = &l_96;
    int i;
    for (i = 0; i < 2; i++)
        l_124[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_147[i] = 0L;
    (*l_98) = (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_93 = 0xD5L), (safe_lshift_func_uint8_t_u_u(l_96, 3)))), 0xFEL));
    (*l_98) = ((safe_add_func_int8_t_s_s((*g_67), 0xA1L)) > g_101);
    if (((p_49 >= (*p_48)) < (((*l_126) = ((*l_125) = func_51(l_102, (0x21L > (safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((*l_98) == l_111), (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_49, (safe_unary_minus_func_uint32_t_u((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(8L, ((*l_123) = (*l_98)))), g_64)))))), p_47)), (*l_98))))), 8)), l_124[1])), (*p_46)))), &g_83))) != l_128)))
    {
        int * const l_133 = (void*)0;
        int **l_134 = &l_98;
        for (l_93 = 9; (l_93 != 21); l_93++)
        {
            int **l_132 = &l_97;
            (*l_132) = &p_47;
            l_98 = &p_47;
        }
        (*l_134) = l_133;
        for (l_96 = 1; (l_96 >= 0); l_96 -= 1)
        {
            unsigned short *l_136 = &g_38;
            (*l_134) = (void*)0;
            for (g_64 = 1; (g_64 >= 0); g_64 -= 1)
            {
                int *l_135[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_135[i] = &l_96;
                for (l_111 = 0; (l_111 <= 1); l_111 += 1)
                {
                    (*l_134) = l_135[1];
                    return l_136;
                }
                if ((safe_sub_func_uint32_t_u_u(0x11800AB3L, l_124[l_96])))
                {
                    (*l_134) = (void*)0;
                    (*l_134) = &g_87;
                    (*l_134) = (*l_134);
                }
                else
                {
                    int *l_139 = &g_87;
                    l_139 = &l_96;
                }
                if (l_124[l_96])
                    continue;
            }
        }
    }
    else
    {
        unsigned l_146 = 1UL;
        int *l_195 = (void*)0;
        short l_199 = (-3L);
        short l_258 = 4L;
        unsigned l_272 = 0UL;
        const short l_306 = 0xA3AFL;
        if ((((safe_div_func_uint32_t_u_u(g_64, g_64)) & ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((*l_127) = ((*p_46) | (~p_47))) & p_49), l_146)), l_147[0])) || g_79)) ^ ((g_87 = ((8UL == g_129) < (*g_67))) >= g_129)))
        {
            int **l_153 = &l_97;
            for (g_38 = 1; (g_38 < 59); ++g_38)
            {
                int **l_150 = &l_98;
                (*l_150) = &g_87;
                (*l_150) = &l_96;
                for (l_146 = 25; (l_146 <= 55); ++l_146)
                {
                    return (*l_125);
                }
            }
            (*l_153) = &p_47;
        }
        else
        {
            const int l_186 = 0x54A6601AL;
            int *l_221 = &l_96;
            unsigned char l_316[10][8][3] = {{{0xABL,0xD6L,255UL},{1UL,0x1EL,0xD9L},{0xCFL,1UL,1UL},{1UL,1UL,0UL},{253UL,0UL,0x2EL},{1UL,0xCCL,255UL},{0xD4L,0xB9L,250UL},{6UL,0xB9L,0UL}},{{255UL,252UL,0x66L},{0x2EL,1UL,1UL},{0UL,0x18L,0x97L},{1UL,1UL,0xBBL},{0xD9L,0x14L,0x1EL},{255UL,0xCCL,1UL},{1UL,0UL,0x14L},{0xF1L,0xCFL,255UL}},{{0x90L,0UL,0x80L},{2UL,1UL,0UL},{255UL,246UL,0xC9L},{0x74L,0UL,255UL},{0xC6L,0xC6L,0x90L},{0x39L,0xF1L,1UL},{0UL,0xC3L,0x0FL},{0x68L,0x1EL,0x7FL}},{{4UL,0UL,0x0FL},{252UL,3UL,1UL},{0x66L,3UL,0x90L},{2UL,0x50L,255UL},{0x3CL,0x90L,0xC9L},{255UL,0x2CL,0UL},{250UL,0x2EL,0x80L},{1UL,255UL,255UL}},{{0x32L,1UL,0x14L},{1UL,255UL,1UL},{1UL,1UL,0x1EL},{255UL,255UL,0xBBL},{0UL,0x9DL,0x97L},{3UL,255UL,1UL},{248UL,0xD4L,0x66L},{0x92L,0UL,255UL}},{{0xC9L,255UL,0UL},{0xC9L,1UL,0xC6L},{3UL,0x90L,0x97L},{0xC6L,0UL,0UL},{0UL,252UL,1UL},{255UL,0UL,3UL},{255UL,0UL,1UL},{0x50L,4UL,0x14L}},{{0x14L,6UL,0x49L},{0UL,0x80L,0UL},{3UL,1UL,0xD6L},{1UL,248UL,0x32L},{0x55L,1UL,0xBBL},{0UL,0x0FL,0x0FL},{0UL,1UL,2UL},{0xD4L,3UL,250UL}},{{0x18L,0x32L,0xC3L},{1UL,0x66L,255UL},{0UL,0x32L,0x66L},{255UL,3UL,0x30L},{0x0FL,1UL,6UL},{248UL,0x0FL,0UL},{250UL,1UL,255UL},{250UL,248UL,1UL}},{{255UL,1UL,255UL},{0xD9L,0x80L,1UL},{0x69L,6UL,248UL},{0x1EL,4UL,3UL},{253UL,0UL,1UL},{0x49L,0UL,0UL},{0x32L,252UL,0x2EL},{0UL,0UL,0x2CL}},{{0x97L,0x69L,1UL},{0xC6L,1UL,255UL},{0UL,0xD6L,255UL},{255UL,0x50L,1UL},{0xD4L,0UL,0x2CL},{1UL,252UL,9UL},{255UL,250UL,6UL},{252UL,0xC9L,252UL}}};
            int i, j, k;
            if (g_38)
            {
                unsigned l_154 = 1UL;
                p_47 = l_154;
            }
            else
            {
                int ***l_159 = (void*)0;
                int **l_161 = &l_97;
                int ***l_160 = &l_161;
                short *l_165 = (void*)0;
                short *l_166 = &l_147[0];
                unsigned *l_173[2];
                int *l_184 = (void*)0;
                int *l_185 = &l_96;
                int i;
                for (i = 0; i < 2; i++)
                    l_173[i] = &g_77;
                (*l_98) = (((safe_lshift_func_int16_t_s_u(((((*l_160) = (void*)0) == g_162) > ((safe_add_func_int32_t_s_s(p_49, (((*l_166) = p_49) == (safe_div_func_int8_t_s_s((*l_98), (safe_mul_func_uint8_t_u_u(p_47, (0UL < (safe_sub_func_uint32_t_u_u((g_77 = 4294967292UL), (safe_rshift_func_int8_t_s_u((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(((*l_185) = (g_38 > l_146)), 0x123E8B2BL)) ^ (*g_37)) <= (*g_37)), g_129)), 5)), 0x2870L)) != (*p_48)) > l_186), g_83)))))))))))) > 0xDEL)), (*g_37))) & 0x20L) == (*g_37));
                return &g_38;
            }
            (*l_98) = (safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s((&p_47 == &p_47), (((~(safe_rshift_func_int8_t_s_u(((((void*)0 != l_195) & ((*g_37) != l_186)) == g_87), (safe_mul_func_uint8_t_u_u(1UL, (((*p_50) = (*g_67)) && l_186)))))) != g_101) && (*g_67)))), 1UL));
            if (p_49)
            {
                int *l_198 = &l_96;
                (*l_198) = ((*l_98) = (*l_98));
                if (((void*)0 == &g_67))
                {
                    for (g_38 = 0; (g_38 <= 1); g_38 += 1)
                    {
                        int i;
                        (*l_198) = l_124[g_38];
                    }
                    (*l_198) = l_199;
                }
                else
                {
                    int l_218 = 0xEE22BCD3L;
                    int **l_219 = (void*)0;
                    (*l_98) = ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((+0xD567L), (*p_46))), (safe_div_func_int8_t_s_s((+(safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((*g_37), (g_162 != &l_198))) > (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((p_47 < ((g_101 < p_49) && ((!p_49) ^ p_47))), 9)), g_38))), 65532UL))), g_101)))) ^ l_186);
                    (*l_198) = (p_47 == ((safe_mul_func_int16_t_s_s(0x2776L, ((*p_46) = (*p_46)))) == l_218));
                    (*l_198) = (p_49 ^ g_38);
                    l_221 = (g_220 = &p_47);
                }
            }
            else
            {
                unsigned char l_226 = 0xCDL;
                short *l_229 = (void*)0;
                short ** const l_228 = &l_229;
                (*l_98) = (p_49 >= p_47);
                (*l_98) = (p_47 = (g_87 < (!p_47)));
                for (l_93 = 0; (l_93 < 16); ++l_93)
                {
                    for (g_87 = 0; (g_87 > 1); g_87++)
                    {
                        int **l_227 = &l_97;
                        p_47 = (p_49 && (p_47 > l_226));
                        (*l_227) = &g_87;
                        g_230 = l_228;
                        if ((**l_227))
                            continue;
                    }
                    for (l_111 = 0; (l_111 > 1); ++l_111)
                    {
                        const int *l_236[1];
                        const int **l_235 = &l_236[0];
                        const int *l_239 = &l_96;
                        const int **l_238[5] = {&l_239,&l_239,&l_239,&l_239,&l_239};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_236[i] = &g_237;
                        l_240 = ((*l_235) = l_221);
                    }
                }
            }
            for (p_47 = 19; (p_47 > (-5)); --p_47)
            {
                unsigned l_247 = 0xA2471E60L;
                int *l_279[8][6] = {{&g_87,&g_87,&g_87,&g_87,&g_87,&g_87},{&g_87,(void*)0,&g_87,&g_87,(void*)0,&g_87},{&g_87,&g_87,&g_87,&g_87,&g_87,&g_87},{(void*)0,&g_87,&g_87,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_87,&g_87,(void*)0},{&g_87,&g_87,&g_87,&g_87,&g_87,&g_87},{&g_87,(void*)0,&g_87,&g_87,(void*)0,&g_87},{&g_87,&g_87,&g_87,&g_87,&g_87,&g_87}};
                int l_296 = 0xD6A9C4ECL;
                int i, j;
                l_247 = ((safe_rshift_func_int16_t_s_u(p_47, 3)) <= (safe_rshift_func_int8_t_s_s((*p_50), 4)));
                (*l_98) = (*l_221);
                for (l_111 = (-9); (l_111 < (-19)); l_111 = safe_sub_func_int32_t_s_s(l_111, 7))
                {
                    unsigned l_250[5];
                    int l_253 = 0x7AAED5F3L;
                    int *l_281 = &g_87;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_250[i] = 0x4AC731D9L;
                    (*l_98) = l_250[0];
                    if (((((*p_46) < (safe_rshift_func_int16_t_s_u((l_253 = (p_47 && l_247)), 12))) | 1UL) > (*g_37)))
                    {
                        short *l_271[8][3][2] = {{{&g_232,(void*)0},{(void*)0,&g_232},{(void*)0,&l_147[0]}},{{&l_258,&l_258},{(void*)0,&l_147[0]},{&l_258,(void*)0}},{{(void*)0,(void*)0},{&l_258,&l_147[0]},{&l_199,(void*)0}},{{&g_232,&l_258},{&l_199,&l_258},{&l_199,&l_199}},{{&l_258,&l_199},{&l_258,&g_232},{(void*)0,&l_199}},{{&l_147[0],(void*)0},{&l_199,&g_232},{&l_199,(void*)0}},{{&l_147[0],&l_199},{(void*)0,&g_232},{&l_258,&l_199}},{{&l_258,&l_199},{&l_199,&l_258},{&l_199,&l_258}}};
                        unsigned char *l_274[4] = {&g_275,&g_275,&g_275,&g_275};
                        int l_276 = 1L;
                        int **l_277 = (void*)0;
                        int **l_278[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_278[i] = (void*)0;
                        l_276 = ((*p_50) != (g_275 = ((((void*)0 != &g_38) || ((safe_mul_func_int16_t_s_s(p_47, l_258)) <= ((safe_rshift_func_uint8_t_u_u(((*l_123) = (((*p_46) = ((safe_sub_func_uint16_t_u_u((*p_46), (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((*p_48), (safe_mul_func_int16_t_s_s((l_272 = p_47), (((1L || 4294967295UL) ^ (*p_46)) != 0x23L))))), p_47)), l_247)))) && g_273[1])) ^ 5UL)), 5)) <= p_47))) == g_77)));
                        l_279[6][3] = &l_96;
                        l_281 = g_280;
                    }
                    else
                    {
                        g_280 = (void*)0;
                        if (p_49)
                            break;
                    }
                    if (p_49)
                        break;
                }
                for (g_275 = 0; (g_275 > 18); g_275 = safe_add_func_int16_t_s_s(g_275, 2))
                {
                    char l_286[7][6][6] = {{{(-9L),4L,0L,4L,(-9L),0L},{(-9L),5L,4L,(-6L),0xDDL,0xDDL},{5L,0x3DL,0x3DL,5L,0L,0xDDL},{0x7AL,0xDDL,4L,0L,(-6L),0L},{0L,0x2CL,0L,0L,(-6L),(-9L)},{4L,0xDDL,0x7AL,0L,0L,0x7AL}},{{0x3DL,0x3DL,5L,0L,0xDDL,0L},{4L,5L,(-9L),0L,(-9L),5L},{0L,4L,(-9L),0L,0x3DL,0L},{0x7AL,0L,5L,5L,0L,0xDDL},{0L,0x7AL,0xDDL,4L,0L,(-6L)},{(-6L),0x3DL,(-9L),0x3DL,(-6L),0x7AL}},{{(-6L),0L,0x3DL,4L,0x2CL,0x2CL},{0L,0L,0L,0L,(-9L),0x2CL},{0xDDL,0x2CL,0x3DL,0x7AL,4L,0x7AL},{(-9L),0L,(-9L),5L,4L,(-6L)},{0x3DL,0x2CL,0xDDL,(-9L),(-9L),0xDDL},{0L,0L,0L,(-9L),0x2CL,5L}},{{0x3DL,0L,(-6L),5L,(-6L),0L},{(-9L),0x3DL,(-6L),0x7AL,0L,5L},{0xDDL,0x7AL,0L,0L,0x7AL,0xDDL},{0L,0x7AL,0xDDL,4L,0L,(-6L)},{(-6L),0x3DL,(-9L),0x3DL,(-6L),0x7AL},{(-6L),0L,0x3DL,4L,0x2CL,0x2CL}},{{0L,0L,0L,0L,(-9L),0x2CL},{0xDDL,0x2CL,0x3DL,0x7AL,0xDDL,5L},{0L,(-6L),0L,4L,0xDDL,0x7AL},{0x2CL,(-9L),0L,0L,0L,0L},{0L,0L,0x3DL,0L,(-9L),4L},{0x2CL,0x3DL,0x7AL,4L,0x7AL,0x3DL}},{{0L,0x2CL,0x7AL,5L,0L,4L},{0L,5L,0x3DL,0x3DL,5L,0L},{0x3DL,5L,0L,0xDDL,0L,0x7AL},{0x7AL,0x2CL,0L,0x2CL,0x7AL,5L},{0x7AL,0x3DL,0x2CL,0xDDL,(-9L),(-9L)},{0x3DL,0L,0L,0x3DL,0L,(-9L)}},{{0L,(-9L),0x2CL,5L,0xDDL,5L},{0L,(-6L),0L,4L,0xDDL,0x7AL},{0x2CL,(-9L),0L,0L,0L,0L},{0L,0L,0x3DL,0L,(-9L),4L},{0x2CL,0x3DL,0x7AL,4L,0x7AL,0x3DL},{0L,0x2CL,0x7AL,5L,5L,0x3DL}}};
                    unsigned char l_295[6] = {5UL,5UL,5UL,5UL,5UL,5UL};
                    unsigned char *l_301 = &g_101;
                    int *l_302 = (void*)0;
                    unsigned ***l_322 = &g_320[7][0];
                    int i, j, k;
                    for (g_38 = 0; (g_38 >= 28); ++g_38)
                    {
                        int l_289[6][4][2];
                        unsigned *l_297[2][3] = {{&g_79,&g_79,&g_79},{&g_273[1],&g_273[1],&g_273[1]}};
                        unsigned char **l_300[8][8] = {{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123},{&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123,&l_123}};
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_289[i][j][k] = 0L;
                            }
                        }
                        (*l_98) = ((void*)0 == &g_232);
                        (*l_98) = p_49;
                        (*l_98) = (l_286[1][3][1] = (&p_48 != &p_50));
                        (*l_98) = (safe_add_func_uint32_t_u_u(l_289[5][2][0], ((((*p_48) = (*g_67)) && p_47) == ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_s(((*l_123) = ((p_47 | (g_273[1] = (safe_div_func_uint16_t_u_u(((*p_46) > l_295[0]), l_296)))) ^ (safe_mul_func_int16_t_s_s(p_47, ((l_301 = &g_101) == &g_275))))), 1)))) && p_47))));
                    }
                    l_302 = &p_47;
                    if ((p_49 || (safe_add_func_uint32_t_u_u(g_10, g_305))))
                    {
                        (*l_98) = l_306;
                    }
                    else
                    {
                        unsigned short l_307 = 0UL;
                        (*l_98) = (l_307 = p_47);
                        (*l_98) = (((!p_47) && (*g_37)) & g_64);
                        g_87 = (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((*l_221), (-1L))), ((*g_67) = ((*p_50) = (*g_67))))), l_316[7][4][1])) | ((safe_lshift_func_int16_t_s_s(p_49, ((&p_48 == &p_50) && 0x22L))) && 0xE0106499L)), 2));
                        g_319 = &g_237;
                    }
                    (*l_322) = g_320[7][0];
                }
            }
        }
    }
    return &g_38;
}







static unsigned short * func_51(const char p_52, const unsigned char p_53, const char * p_54)
{
    const short l_74 = 1L;
    unsigned *l_75 = (void*)0;
    unsigned *l_76 = &g_77;
    unsigned *l_78[5] = {&g_79,&g_79,&g_79,&g_79,&g_79};
    char *l_82[6][7] = {{&g_83,&g_83,(void*)0,&g_83,(void*)0,&g_83,&g_83},{(void*)0,&g_64,&g_83,&g_64,(void*)0,&g_83,&g_83},{&g_83,(void*)0,&g_83,(void*)0,(void*)0,&g_83,&g_83},{(void*)0,&g_83,(void*)0,&g_64,&g_83,&g_83,&g_64},{&g_83,(void*)0,&g_83,&g_83,&g_83,&g_83,&g_64},{&g_83,&g_83,&g_83,&g_83,&g_64,&g_83,&g_83}};
    int l_84[1];
    int *l_85 = (void*)0;
    int *l_86 = &g_87;
    unsigned short *l_88 = &g_38;
    int i, j;
    for (i = 0; i < 1; i++)
        l_84[i] = 0xF79F6133L;
    (*l_86) = ((safe_mul_func_uint8_t_u_u(((l_74 < l_74) == ((p_53 >= (g_79 = ((*l_76) = g_10))) != ((*g_37) = (safe_mul_func_int8_t_s_s((*g_67), (*p_54)))))), (!l_74))) > ((l_84[0] = ((l_74 >= (0L != p_52)) || p_53)) != 0x02L));
    (*l_86) = g_64;
    (*l_86) = g_38;
    return l_88;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_12[i][j][k], "g_12[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_273[i], "g_273[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_929, "g_929", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
