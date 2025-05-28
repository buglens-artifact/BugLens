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



static int g_11 = (-1L);
static unsigned g_59 = 4294967288UL;
static unsigned g_60 = 0x99B96BC7L;
static int g_67 = 0x9C29AEDAL;
static int *g_66 = &g_67;
static const int g_72 = 0x6275F98AL;
static const int *g_71 = &g_72;
static const int *g_73 = &g_67;
static int g_79 = (-1L);
static int g_96 = 0x5B33599DL;
static unsigned g_105[7][1] = {{4294967295UL},{0x73B194E8L},{4294967295UL},{0x73B194E8L},{4294967295UL},{0x73B194E8L},{4294967295UL}};
static unsigned short g_113[7] = {0x3FF4L,0x3FF4L,0x3FF4L,0x3FF4L,0x3FF4L,0x3FF4L,0x3FF4L};
static unsigned short *g_112 = &g_113[4];
static unsigned short **g_111[7] = {&g_112,&g_112,&g_112,&g_112,&g_112,&g_112,&g_112};
static unsigned g_149 = 0xDB1A9972L;
static unsigned char g_171[3] = {248UL,248UL,248UL};
static short g_175 = 0L;
static char g_216[2] = {0xAAL,0xAAL};
static short g_226 = 0x5AAAL;
static int g_240 = 0x2FD023D6L;
static char g_242 = 1L;
static unsigned g_261 = 0xE09E583AL;
static unsigned g_263 = 0x11A8359AL;
static int g_346[8] = {0x9D081BB5L,0x9D081BB5L,0x9D081BB5L,0x9D081BB5L,0x9D081BB5L,0x9D081BB5L,0x9D081BB5L,0x9D081BB5L};
static volatile unsigned short g_424 = 0x7912L;
static char g_460 = 9L;
static const unsigned char *g_468 = (void*)0;
static const unsigned char **g_467[5] = {&g_468,&g_468,&g_468,&g_468,&g_468};
static const unsigned char ***g_466 = &g_467[4];
static int **g_521 = &g_66;
static int ***g_520 = &g_521;
static short g_602 = 7L;
static char *g_607[9][3] = {{&g_460,&g_460,&g_460},{&g_216[1],&g_216[1],&g_216[0]},{(void*)0,&g_460,(void*)0},{&g_216[1],&g_216[0],&g_216[0]},{&g_460,&g_460,&g_460},{&g_216[1],&g_216[1],&g_216[0]},{(void*)0,&g_460,(void*)0},{&g_216[1],&g_216[0],&g_216[0]},{&g_460,&g_460,&g_460}};
static char **g_606 = &g_607[7][0];
static unsigned short *g_610 = &g_113[4];
static int g_666 = 0x71216119L;
static int *g_679 = &g_67;
static const unsigned char ** const *g_721 = &g_467[4];
static const unsigned char ** const **g_720[9][3] = {{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721},{&g_721,&g_721,&g_721}};
static unsigned g_727 = 0x169A528DL;
static unsigned char *g_756 = &g_171[2];
static unsigned char **g_755 = &g_756;
static unsigned char * const **g_769 = (void*)0;
static const int g_807 = 0x17373DEDL;
static unsigned short g_842 = 0xA713L;



static const int func_1(void);
static char func_2(int p_3, char p_4, unsigned p_5);
static int func_6(char p_7, int p_8, char p_9, const unsigned short p_10);
static unsigned short func_16(int p_17, unsigned p_18);
static short func_22(unsigned p_23, unsigned short p_24, const char p_25);
static unsigned func_28(unsigned p_29, const int p_30, const unsigned p_31, unsigned p_32, unsigned p_33);
static unsigned func_34(int p_35, int p_36);
static short func_39(unsigned char p_40, unsigned p_41, int p_42, short p_43, unsigned p_44);
static unsigned char func_45(char p_46, const short p_47);
static unsigned func_56(short p_57);
static const int func_1(void)
{
    const short l_21 = 0L;
    unsigned l_92 = 0x80B142B9L;
    short l_93[7][1];
    unsigned short l_97 = 0xBABEL;
    unsigned *l_309 = &l_92;
    int l_310 = (-7L);
    unsigned *l_333[9];
    short *l_345[6][8] = {{&g_226,&g_226,&g_226,&l_93[5][0],&l_93[5][0],&l_93[5][0],&g_226,&g_226},{&l_93[5][0],&l_93[5][0],&g_226,&g_226,&g_226,&l_93[5][0],&l_93[5][0],&l_93[5][0]},{&l_93[5][0],&g_226,&l_93[3][0],&g_226,&l_93[5][0],&g_226,&l_93[5][0],&g_226},{&g_226,&g_226,&g_226,&l_93[5][0],&l_93[5][0],&l_93[5][0],&g_226,&g_226},{&l_93[5][0],&l_93[5][0],&g_226,&g_226,&g_226,&l_93[5][0],&l_93[5][0],&l_93[5][0]},{&l_93[5][0],&g_226,&l_93[3][0],&g_226,&l_93[5][0],&g_226,&l_93[5][0],&g_226}};
    int l_347 = (-7L);
    int l_530 = 0x4BE58ECAL;
    unsigned l_531 = 2UL;
    int *l_836 = &g_346[2];
    short l_839 = 0xC9CBL;
    unsigned short *l_840 = &l_97;
    unsigned short *l_841 = &g_842;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_93[i][j] = (-1L);
    }
    for (i = 0; i < 9; i++)
        l_333[i] = &g_149;
    (*l_836) = (func_2(func_6(g_11, (((8L | ((g_460 = ((0x57L >= (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(func_16((safe_sub_func_int16_t_s_s(l_21, (l_347 = (g_346[2] = func_22(((safe_mod_func_int32_t_s_s(l_21, (g_263 = func_28((l_310 = ((*l_309) = (((!func_34(((!l_21) != (safe_rshift_func_int16_t_s_s(func_39(func_45((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_21 || (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((func_56(l_21) > g_11), g_11)) > l_92), l_21))), l_93[5][0])), l_93[5][0])), g_11), l_97, g_72, l_93[2][0], g_11), 8))), g_263)) > l_93[6][0]) == l_97))), g_261, g_261, l_97, l_93[5][0])))) <= (*g_112)), l_21, g_11))))), l_97), 0x46B1L)), (-8L)))) | (-1L))) != (-6L))) & g_11) || 0x31L), l_93[5][0], l_97), l_530, l_531) & l_93[4][0]);
    (*l_836) = ((*l_836) || (0xEFL == func_6((*l_836), (safe_add_func_uint32_t_u_u((l_839 = g_113[1]), (g_149 = (*l_836)))), (*l_836), ((*l_841) = ((*l_840) = (*l_836))))));
    return (*l_836);
}







static char func_2(int p_3, char p_4, unsigned p_5)
{
    unsigned short l_536 = 0xB5B1L;
    short *l_541 = &g_175;
    int *l_542[8] = {&g_346[7],&g_346[7],&g_346[7],&g_346[7],&g_346[7],&g_346[7],&g_346[7],&g_346[7]};
    short l_543 = 0L;
    unsigned l_551 = 0xE7A549F0L;
    unsigned char *l_598 = &g_171[0];
    unsigned char * const *l_597 = &l_598;
    unsigned char l_626[6] = {8UL,8UL,8UL,8UL,8UL,8UL};
    int *l_629 = &g_79;
    short l_641 = (-3L);
    int *l_650 = &g_346[2];
    int *l_740 = &g_11;
    const char l_793 = 0x83L;
    const int *l_800 = &g_79;
    char **l_816 = &g_607[7][0];
    const unsigned l_834 = 0xBACA19DCL;
    const int l_835 = (-2L);
    int i;
    l_543 = (safe_mod_func_int16_t_s_s((p_3 >= p_3), (~(safe_lshift_func_int8_t_s_s((p_3 && (g_11 = (l_536 & (p_4 > ((safe_mod_func_uint32_t_u_u(p_5, l_536)) | (((safe_rshift_func_int16_t_s_u(((*l_541) = g_424), 12)) == (l_536 && p_5)) > p_4)))))), 1)))));
    for (g_11 = 2; (g_11 >= 0); g_11 -= 1)
    {
        char *l_550 = &g_216[1];
        unsigned *l_552 = (void*)0;
        int l_553 = 0x014F9A1EL;
        int l_559 = 0x61427EEAL;
        const int l_562 = 0x5A303A25L;
        unsigned short *l_591[8][6] = {{&l_536,&l_536,&l_536,&l_536,&l_536,&l_536},{&l_536,&l_536,&l_536,&l_536,&g_113[6],&l_536},{&l_536,&g_113[4],&l_536,&g_113[4],&l_536,&l_536},{&l_536,&l_536,&g_113[4],&l_536,(void*)0,(void*)0},{&l_536,&g_113[6],&g_113[6],&l_536,&l_536,(void*)0},{&l_536,(void*)0,&g_113[4],&l_536,&l_536,&l_536},{&l_536,&g_113[4],&l_536,&g_113[6],&l_536,&l_536},{&g_113[4],(void*)0,&l_536,&l_536,&l_536,&l_536}};
        int *l_628 = &g_67;
        char * const *l_640[7][2][3];
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_640[i][j][k] = &g_607[6][2];
            }
        }
        if ((((((safe_add_func_uint16_t_u_u(func_6(((*l_550) = (~(safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_171[2], 1)), p_4)))), l_551, ((l_553 = g_171[2]) & (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((4294967295UL ^ (p_3 = (safe_unary_minus_func_uint32_t_u(g_346[2])))) ^ ((*g_112) = ((l_559 != ((safe_add_func_uint32_t_u_u(((l_542[3] == (void*)0) == g_240), 0x41B56AB6L)) & p_4)) > 0x09C7792CL))), l_559)) > 0xD3L), 7))), p_5), 0xE1C8L)) < p_5) || l_562) ^ p_5) > 0x7CCA2D37L))
        {
            int l_567 = 0xDBEAB5D8L;
            int * const *l_592[7][4][9] = {{{&l_542[2],&l_542[2],&l_542[2],&g_66,&l_542[6],&l_542[2],(void*)0,&l_542[1],&g_66},{&l_542[2],&g_66,&g_66,&l_542[2],&l_542[2],&l_542[4],(void*)0,&l_542[4],&l_542[2]},{&g_66,(void*)0,(void*)0,&g_66,&g_66,&l_542[4],&g_66,&l_542[5],&l_542[2]},{&g_66,&l_542[2],&l_542[0],(void*)0,&g_66,&g_66,&g_66,(void*)0,&l_542[5]}},{{&l_542[2],&l_542[1],(void*)0,&l_542[6],&l_542[2],&l_542[2],&g_66,&g_66,(void*)0},{&l_542[2],&l_542[2],&g_66,&l_542[1],&g_66,&g_66,(void*)0,&g_66,&l_542[1]},{&l_542[1],(void*)0,(void*)0,&g_66,(void*)0,&l_542[2],&l_542[2],&l_542[2],&l_542[5]},{&g_66,(void*)0,&g_66,&l_542[0],&l_542[1],&l_542[5],&g_66,&l_542[1],&l_542[1]}},{{&l_542[2],&l_542[2],&l_542[5],&l_542[4],&l_542[5],&l_542[2],&l_542[2],(void*)0,&g_66},{&g_66,&l_542[1],&l_542[5],&l_542[2],&g_66,&g_66,(void*)0,&l_542[2],&l_542[2]},{&g_66,&g_66,&g_66,&g_66,&l_542[2],&g_66,&g_66,(void*)0,&l_542[2]},{&l_542[4],(void*)0,(void*)0,&g_66,(void*)0,&l_542[2],&l_542[5],&l_542[1],&g_66}},{{&l_542[2],&l_542[2],&g_66,&l_542[2],&l_542[5],(void*)0,&l_542[4],&l_542[2],&l_542[2]},{(void*)0,(void*)0,(void*)0,&l_542[4],&l_542[5],(void*)0,&l_542[2],&g_66,&l_542[2]},{&l_542[6],&g_66,&g_66,&l_542[4],&g_66,&g_66,&l_542[4],&g_66,(void*)0},{&l_542[4],&l_542[5],&l_542[2],&l_542[2],(void*)0,&g_66,&l_542[2],(void*)0,&l_542[1]}},{{&l_542[2],&l_542[5],&l_542[5],&l_542[0],&g_66,(void*)0,&l_542[4],&g_66,&l_542[5]},{&g_66,&l_542[5],&l_542[2],(void*)0,(void*)0,&g_66,&l_542[4],&l_542[2],&g_66},{&l_542[2],(void*)0,&g_66,&g_66,&g_66,&l_542[2],&l_542[2],&g_66,&l_542[2]},{&l_542[1],&g_66,&l_542[2],&l_542[2],(void*)0,(void*)0,&l_542[4],&g_66,(void*)0}},{{&l_542[2],&g_66,&l_542[5],&g_66,&l_542[5],&l_542[2],&g_66,&l_542[2],&l_542[5]},{&l_542[2],&l_542[2],&l_542[2],&l_542[2],&g_66,(void*)0,&l_542[2],&g_66,&l_542[5]},{&l_542[0],&l_542[2],&g_66,&g_66,&l_542[2],(void*)0,&l_542[2],(void*)0,(void*)0},{&g_66,&l_542[1],&g_66,(void*)0,&g_66,&g_66,&l_542[1],&g_66,&l_542[2]}},{{&g_66,(void*)0,&l_542[2],&l_542[0],&l_542[5],&l_542[2],&l_542[4],(void*)0,&g_66},{&g_66,&l_542[4],&l_542[3],(void*)0,&l_542[4],&l_542[2],&g_66,&g_66,&l_542[2]},{&g_66,&l_542[4],&l_542[2],&g_66,&g_66,&l_542[7],(void*)0,(void*)0,(void*)0},{&g_66,&l_542[2],&l_542[7],(void*)0,&l_542[7],&l_542[2],&g_66,&l_542[3],&l_542[2]}}};
            const unsigned l_595 = 4294967295UL;
            int i, j, k;
            for (g_59 = 0; (g_59 <= 2); g_59 += 1)
            {
                int l_596 = (-1L);
                for (g_240 = 2; (g_240 >= 0); g_240 -= 1)
                {
                    const int ** const l_570 = &g_73;
                    char l_594 = 0xA9L;
                    int *l_601 = (void*)0;
                    unsigned *l_605 = &g_149;
                    int i;
                    for (l_536 = 0; (l_536 <= 4); l_536 += 1)
                    {
                        unsigned *l_571 = (void*)0;
                        int i;
                        l_542[2] = &g_346[(g_59 + 5)];
                        g_346[(l_536 + 1)] = (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((func_22(l_567, func_22((g_263 = (4294967294UL & (safe_sub_func_uint16_t_u_u(((*g_112) = 1UL), (l_570 != (void*)0))))), p_4, p_4), (safe_rshift_func_uint8_t_u_s(func_34(g_149, p_3), 6))) & 0xC5A2E17AL), (-5L))), p_4)) >= 0x50C1L) != 4UL);
                    }
                    if (p_5)
                        break;
                    for (p_3 = 0; (p_3 >= 0); p_3 -= 1)
                    {
                        int *l_574 = &g_96;
                        unsigned short *l_589 = &g_113[5];
                        unsigned short **l_590[1];
                        int * const **l_593 = &l_592[1][0][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_590[i] = &g_112;
                        (**g_520) = l_574;
                        l_596 = (safe_add_func_uint32_t_u_u(((g_105[g_59][p_3] <= (p_5 || ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(p_5, 11)), 4)) & ((*g_66) = 3L)))) > (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_3, (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((l_589 != (l_591[0][4] = (void*)0)) >= (((*l_593) = l_592[1][0][3]) == (*g_520))), 0xFC6DL)), l_594)))), l_562))), l_595));
                    }
                    l_559 = (p_3 = ((g_171[g_11] = (func_22(g_59, ((*g_112) = ((void*)0 == l_597)), (((*l_605) = ((safe_sub_func_uint16_t_u_u(func_34((g_602 = p_5), p_3), g_105[0][0])) & (safe_rshift_func_int16_t_s_s((p_3 >= g_149), l_559)))) == p_3)) & 0xA8L)) <= 251UL));
                }
                return g_424;
            }
            p_3 = p_3;
        }
        else
        {
            const unsigned l_612 = 0x70FB87AFL;
            l_542[2] = &p_3;
            if (l_553)
            {
                char **l_608 = (void*)0;
                unsigned short *l_611 = &g_113[4];
                int l_621 = 5L;
                if ((g_606 != l_608))
                {
                    unsigned short **l_609[6][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    int i, j, k;
                    if (p_5)
                        break;
                    (**g_520) = &p_3;
                    p_3 = func_6(((*l_550) = p_4), p_5, ((g_610 = &l_536) != (l_591[3][3] = l_611)), l_612);
                    p_3 = (-1L);
                }
                else
                {
                    unsigned *l_622 = &g_59;
                    unsigned *l_623[4];
                    unsigned *l_624 = (void*)0;
                    unsigned *l_625 = &g_149;
                    int l_632 = 0L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_623[i] = &g_149;
                    if (func_28((p_3 == (safe_mod_func_int32_t_s_s((-1L), p_3))), p_4, ((*l_625) = ((*l_622) = ((safe_rshift_func_uint16_t_u_u(func_22(p_5, ((*g_610) = 0xB874L), ((safe_mod_func_int8_t_s_s(p_3, l_553)) ^ (safe_add_func_int32_t_s_s(l_621, p_5)))), p_3)) == 0x09D34A1AL))), l_626[0], l_612))
                    {
                        int *l_627 = &g_11;
                        l_628 = ((**g_520) = l_627);
                        if (p_3)
                            continue;
                        l_629 = &p_3;
                    }
                    else
                    {
                        (**g_520) = &g_11;
                        (*l_629) = (((safe_add_func_int32_t_s_s((l_632 = (*g_66)), func_34(func_34(p_3, p_3), (safe_add_func_uint16_t_u_u(p_5, p_5))))) == (safe_add_func_uint16_t_u_u((((*l_628) = (safe_sub_func_int32_t_s_s((*g_66), 0x6685AF39L))) & 1UL), p_4))) & p_4);
                    }
                }
            }
            else
            {
                char * const *l_639 = (void*)0;
                l_640[3][0][1] = l_639;
                l_641 = 7L;
            }
        }
        for (g_460 = 0; (g_460 <= 2); g_460 += 1)
        {
            int **l_642 = &l_542[2];
            unsigned *l_647 = &g_263;
        }
    }
    if (p_5)
    {
        const int *l_648 = &g_79;
        unsigned short l_661[1][1][1];
        int *l_670 = &g_240;
        int **l_669 = &l_670;
        unsigned char **l_687 = &l_598;
        int ***l_739 = (void*)0;
        const unsigned *l_776 = (void*)0;
        const unsigned **l_775 = &l_776;
        char l_790 = 0xD3L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_661[i][j][k] = 65535UL;
            }
        }
        for (g_226 = 0; (g_226 <= 2); g_226 += 1)
        {
            const int **l_649 = &g_71;
            unsigned char *l_653 = &l_626[5];
            unsigned char ***l_705[5] = {&l_687,&l_687,&l_687,&l_687,&l_687};
            unsigned char ****l_704 = &l_705[0];
            unsigned char l_768 = 0x44L;
            int l_770 = (-1L);
            const unsigned **l_777 = (void*)0;
            int i;
            p_3 = g_171[g_226];
            (*l_649) = l_648;
            (*g_521) = l_650;
            if ((safe_add_func_int8_t_s_s((g_171[g_226] >= (p_5 < (**l_649))), ((*l_653) = (*l_648)))))
            {
                unsigned char *l_667 = &g_171[g_226];
                int l_671 = 0L;
                int i;
                if ((((void*)0 != g_111[(g_226 + 3)]) | 0x97E0L))
                {
                    int *l_654 = &g_11;
                    if ((***g_520))
                        break;
                    (*l_649) = l_654;
                    if ((safe_add_func_uint16_t_u_u((*l_648), p_4)))
                    {
                        int *l_668 = &g_240;
                        if ((*l_648))
                            break;
                        (*l_654) = func_28((p_5 = 0UL), (*l_654), (safe_rshift_func_uint16_t_u_u(65534UL, 11)), g_59, (safe_add_func_int32_t_s_s((l_661[0][0][0] || ((!func_34(((*l_668) = (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(g_666, ((void*)0 == l_667))) < func_22(p_3, (*g_112), (*l_648))), p_4))), (*l_654))) == (*l_654))), 0x20D0B49DL)));
                        (**g_520) = &p_3;
                    }
                    else
                    {
                        l_669 = l_669;
                        if ((***g_520))
                            break;
                        (**g_521) = 0xF03D2CDDL;
                        (*l_629) = 1L;
                    }
                    for (g_60 = 0; (g_60 <= 6); g_60 += 1)
                    {
                        (*g_66) = (**g_521);
                        if ((**g_521))
                            continue;
                        (*g_66) = l_671;
                    }
                }
                else
                {
                    (***g_520) = (***g_520);
                    return l_671;
                }
                if ((***g_520))
                    continue;
                if (p_5)
                    continue;
                for (g_79 = 0; (g_79 <= 6); g_79 += 1)
                {
                    unsigned short *l_676 = (void*)0;
                    int l_677 = 0x7878195AL;
                    int l_678 = (-1L);
                    if ((((!func_22(g_113[4], (*g_112), p_5)) ^ (safe_add_func_uint16_t_u_u((l_678 = (~(p_3 > ((((*l_650) = (safe_add_func_int32_t_s_s(((((l_677 = 0x0CD5L) >= (((void*)0 == &p_3) == ((void*)0 == &p_4))) > 65535UL) | p_5), 0UL))) <= 0xC7C1CE8FL) || 0x71D5L)))), g_171[0]))) ^ (*l_648)))
                    {
                        p_3 = p_4;
                        g_679 = &p_3;
                        if ((*l_648))
                            continue;
                        (*g_521) = l_650;
                    }
                    else
                    {
                        int *l_680[6][7][6] = {{{&g_11,&l_677,&l_677,(void*)0,(void*)0,&g_96},{&g_666,&l_677,&l_677,(void*)0,(void*)0,&g_346[2]},{&g_666,&g_79,&g_96,&g_346[5],&l_677,(void*)0},{&g_346[2],&g_79,&l_677,&g_346[5],&g_346[0],&g_346[1]},{&g_79,&g_67,(void*)0,&l_671,(void*)0,&g_11},{&g_346[2],(void*)0,&g_96,&l_671,&l_671,(void*)0},{&l_678,&g_666,&g_67,(void*)0,&g_346[2],&g_79}},{{&g_346[5],&l_677,&g_666,&g_666,&g_79,&g_96},{(void*)0,(void*)0,(void*)0,(void*)0,&g_346[3],&g_346[2]},{&l_677,&g_666,&g_11,&g_96,(void*)0,&g_346[1]},{&g_346[1],&l_677,&g_79,&g_346[2],&l_671,&g_11},{&g_11,&l_671,&g_346[2],&g_346[2],(void*)0,&g_346[5]},{&g_346[2],&g_346[2],(void*)0,&g_67,&l_678,&l_671},{&g_346[2],&g_11,&g_346[6],(void*)0,&g_79,&g_11}},{{(void*)0,(void*)0,&g_11,&g_96,(void*)0,&g_11},{(void*)0,&l_671,(void*)0,&l_671,&g_11,&g_96},{&l_678,&g_346[3],&l_678,(void*)0,&l_678,&g_346[3]},{&l_671,&g_666,(void*)0,&g_96,&g_666,(void*)0},{&g_346[3],&g_11,(void*)0,&g_346[2],&g_346[2],&g_346[5]},{&g_11,&g_67,&g_96,&l_678,(void*)0,&l_671},{(void*)0,&g_96,&g_346[2],&l_671,&g_666,(void*)0}},{{&l_677,&l_677,&g_346[2],&g_79,&l_671,(void*)0},{&g_346[5],&l_678,(void*)0,&l_671,(void*)0,&g_96},{&l_678,&g_96,&l_671,&g_346[3],&g_666,&g_11},{&g_79,&l_671,&g_79,&g_346[2],&g_67,&g_346[2]},{(void*)0,&g_666,(void*)0,&l_678,&g_11,&g_79},{&g_346[2],&l_671,&g_11,&g_96,&g_666,(void*)0},{&g_346[1],&g_96,&g_79,&l_677,&g_346[5],(void*)0}},{{&g_79,&g_79,(void*)0,&g_666,&l_677,&g_11},{&g_11,&g_79,&l_678,(void*)0,(void*)0,&g_67},{&g_666,(void*)0,&g_346[2],&g_79,&g_346[3],&g_11},{(void*)0,&g_346[5],&g_346[2],&l_678,&g_346[1],&l_677},{&l_671,&g_11,&l_678,&g_346[2],&g_346[5],&g_346[3]},{&g_67,&l_678,&g_11,&g_346[5],&g_79,&g_346[5]},{&g_96,(void*)0,&g_346[1],(void*)0,&g_346[0],&g_346[0]}},{{(void*)0,&g_346[5],&g_666,&g_96,&g_96,&g_666},{&g_67,&g_67,&l_678,(void*)0,&g_96,(void*)0},{&g_346[1],(void*)0,&g_11,&l_677,&g_346[3],&l_678},{(void*)0,&g_346[1],&g_11,&g_96,&g_67,(void*)0},{&g_346[2],&g_96,&l_678,(void*)0,&g_96,&g_666},{(void*)0,&g_96,&g_666,&g_79,(void*)0,&g_346[0]},{&g_666,(void*)0,&g_346[1],&l_678,&g_346[2],&g_79}}};
                        const unsigned char **l_685 = &g_468;
                        const unsigned char ***l_686 = &g_467[0];
                        unsigned short *l_688 = &l_661[0][0][0];
                        int i, j, k;
                        (*g_521) = l_680[1][0][1];
                        (*g_679) = ((((*l_688) = ((*g_610) = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((((*l_686) = l_685) != l_687) ^ p_5), 0)), p_3)))) <= (~(safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(p_4, 2)), ((*l_667) = func_34(((**l_669) = (((-2L) >= p_5) && (*g_679))), p_3)))))) < (*l_648));
                        (*g_521) = (*g_521);
                    }
                    return p_5;
                }
            }
            else
            {
                unsigned short l_693 = 65535UL;
                int l_702 = 0x582244F2L;
                unsigned *l_703 = &g_261;
                const int ** const *l_738 = &l_649;
                unsigned char ** const ***l_767 = (void*)0;
                for (g_242 = 4; (g_242 >= 0); g_242 -= 1)
                {
                    l_648 = &p_3;
                    if (p_3)
                        continue;
                }
                p_3 = ((func_45(l_693, l_693) <= (safe_sub_func_uint32_t_u_u(((*l_650) >= p_4), ((*l_703) = (safe_lshift_func_int16_t_s_s((!((p_5 <= ((safe_sub_func_int16_t_s_s(0x8DC1L, (g_602 = p_3))) | (l_702 = ((safe_add_func_uint8_t_u_u(((**l_687) = 0xDAL), l_693)) && 8L)))) ^ g_346[5])), 12)))))) | (*l_650));
                for (g_460 = 0; (g_460 <= 6); g_460 += 1)
                {
                    unsigned char *** const *l_706 = &l_705[0];
                    int l_707 = 0xF1E79353L;
                    const unsigned char ** const ***l_722 = &g_720[0][1];
                    unsigned char ****l_724[6] = {&l_705[4],&l_705[4],&l_705[4],&l_705[4],&l_705[4],&l_705[4]};
                    unsigned char *****l_723 = &l_724[4];
                    int *l_728 = &g_67;
                    int i;
                }
                for (g_175 = 2; (g_175 <= 6); g_175 += 1)
                {
                    const unsigned short l_757 = 65530UL;
                    int l_758[6][10] = {{(-4L),1L,0xB63A4640L,1L,(-4L),(-4L),1L,0xB63A4640L,1L,(-4L)},{(-4L),1L,0xB63A4640L,1L,(-4L),(-4L),1L,0xB63A4640L,1L,(-4L)},{(-4L),1L,0xB63A4640L,1L,(-4L),(-4L),1L,0xB63A4640L,1L,(-4L)},{(-4L),1L,0xB63A4640L,1L,(-4L),(-4L),1L,0xB63A4640L,1L,(-4L)},{(-4L),1L,0xB63A4640L,(-4L),4L,4L,(-4L),0xF196858FL,(-4L),4L},{4L,(-4L),0xF196858FL,(-4L),4L,4L,(-4L),0xF196858FL,(-4L),4L}};
                    unsigned short l_763 = 65533UL;
                    int i, j;
                }
            }
        }
        (*g_679) = (((p_3 == ((*g_610) <= p_4)) | g_602) >= (func_56(p_3) > (safe_lshift_func_int8_t_s_s(l_793, 3))));
    }
    else
    {
        const int *l_794 = (void*)0;
        int l_802 = 0x2D91C7A3L;
        unsigned char l_811 = 251UL;
        char **l_818[1];
        int i;
        for (i = 0; i < 1; i++)
            l_818[i] = (void*)0;
        l_794 = l_794;
        if ((g_113[4] <= (((*l_597) == (*l_597)) == (-8L))))
        {
            const int **l_795 = &g_73;
            unsigned char *** const **l_797 = (void*)0;
            unsigned char *** const ***l_796 = &l_797;
            (*l_795) = l_794;
            (*g_679) = (&g_720[0][1] != ((*l_796) = (void*)0));
            return p_5;
        }
        else
        {
            short l_798 = 0x1F31L;
            unsigned *l_799[2];
            unsigned short *l_801[9] = {&l_536,&l_536,&l_536,&l_536,&l_536,&l_536,&l_536,&l_536,&l_536};
            unsigned l_803 = 2UL;
            const int *l_806 = &g_807;
            const int **l_808 = &l_800;
            int i;
            for (i = 0; i < 2; i++)
                l_799[i] = (void*)0;
            if ((l_798 && (p_3 == (func_28((p_5 = g_263), func_28(((l_802 = ((*g_112) = (l_794 != l_800))) < (0x6283B564L < 0x3C11DA6BL)), func_28(p_3, ((void*)0 != &p_3), p_4, g_149, p_4), g_72, g_11, g_216[1]), g_261, l_803, p_4) ^ (*g_756)))))
            {
                int *l_804 = &g_666;
                (*g_521) = (**g_520);
                l_542[2] = &p_3;
                l_804 = (*g_521);
            }
            else
            {
                int **l_805 = &l_542[3];
                (*l_805) = ((**g_520) = &p_3);
            }
            (*l_808) = (l_806 = (**g_520));
        }
        for (g_96 = 0; (g_96 != (-5)); g_96 = safe_sub_func_uint8_t_u_u(g_96, 8))
        {
            (**g_520) = (void*)0;
            if (l_811)
                continue;
        }
        for (p_3 = 6; (p_3 >= 0); p_3 -= 1)
        {
            char ***l_817[8][6] = {{&l_816,&g_606,&l_816,&g_606,&g_606,&g_606},{&g_606,&l_816,&l_816,&l_816,&g_606,&g_606},{&l_816,&l_816,&g_606,&l_816,&g_606,&g_606},{&l_816,&g_606,&g_606,&l_816,&l_816,&g_606},{&g_606,&g_606,&g_606,&g_606,&l_816,&g_606},{&l_816,&g_606,&l_816,&g_606,&g_606,&g_606},{&g_606,&l_816,&l_816,&l_816,&g_606,&g_606},{&l_816,&l_816,&g_606,&l_816,&g_606,&g_606}};
            short *l_823 = &l_641;
            int i, j;
            (*l_740) = g_113[p_3];
            (*l_650) = ((((65535UL != (*g_112)) ^ ((*l_541) = ((safe_add_func_uint8_t_u_u((p_5 ^ p_5), ((g_606 = l_816) == (l_818[0] = &g_607[7][0])))) < (safe_mod_func_uint16_t_u_u(0x0416L, (func_56((((func_34((safe_mod_func_int16_t_s_s(((((+((*l_823) = ((*l_541) = (g_113[p_3] <= func_22(p_5, p_5, p_3))))) | (*l_650)) & p_5) || (*l_740)), (*l_629))), g_113[p_3]) <= 65535UL) != 0x1CC0EEAFL) > p_5)) || (*l_629))))))) >= p_4) || p_3);
        }
    }
    (*l_650) = ((*l_740) = ((*g_679) = (safe_lshift_func_uint8_t_u_s((!(p_3 | 0x9A53L)), (((p_3 & (func_45(p_3, ((safe_rshift_func_uint8_t_u_u(p_4, (safe_mod_func_uint32_t_u_u(func_22(func_28((safe_rshift_func_uint16_t_u_s(0xF3E4L, (0x97L >= (safe_mod_func_uint16_t_u_u(0x761FL, func_22((*l_740), p_5, (*l_740))))))), l_834, p_4, (*l_650), (*l_740)), p_3, l_835), 0x9D4483DBL)))) | (-1L))) != p_3)) > p_5) || (*l_650))))));
    return p_4;
}







static int func_6(char p_7, int p_8, char p_9, const unsigned short p_10)
{
    const unsigned char ***l_464 = (void*)0;
    const unsigned char ****l_465[6] = {&l_464,&l_464,&l_464,&l_464,&l_464,&l_464};
    char l_475 = 0x28L;
    int *l_509 = &g_346[2];
    const short l_527 = 5L;
    int l_528[1][8] = {{0x35681CDBL,0x35681CDBL,(-1L),0x35681CDBL,0x35681CDBL,(-1L),0x35681CDBL,0x35681CDBL}};
    int i, j;
    for (p_8 = (-3); (p_8 <= 11); ++p_8)
    {
        int *l_463 = &g_346[2];
        (*l_463) = 0x8720E440L;
    }
    if (func_16(((g_466 = l_464) == &g_467[3]), p_8))
    {
        int * const l_495 = &g_11;
        int **l_515 = &g_66;
        int *l_516 = &g_67;
        int **l_517 = &l_509;
        for (p_9 = 23; (p_9 == (-1)); p_9--)
        {
            unsigned l_480 = 0xC644FDACL;
            unsigned l_507[9][10] = {{4294967286UL,0x8161A80EL,1UL,9UL,4294967295UL,4294967295UL,0xEDF39F53L,0x6FF4A4D8L,0x27F23E15L,1UL},{4294967295UL,0x29EB7519L,4294967295UL,0x1C97152BL,0xDDB2AB74L,4294967295UL,0x3F3200E3L,0x1390D716L,0x6FF4A4D8L,0xBD11EDD7L},{2UL,3UL,0xDDB2AB74L,8UL,0x8161A80EL,0x3F3200E3L,0x41C22FC8L,0x1390D716L,4294967295UL,4294967288UL},{4294967286UL,0xDDB2AB74L,4294967295UL,0x27D78AA4L,0x6FF4A4D8L,2UL,2UL,0x6FF4A4D8L,0x27D78AA4L,4294967295UL},{0x1C97152BL,0x1C97152BL,0xBD11EDD7L,0x67FC84AFL,4294967295UL,0x27D78AA4L,0UL,0xDEB21495L,0x55475CBAL,2UL},{0x55475CBAL,0xEDF39F53L,0x27D78AA4L,0xDDB2AB74L,0x3F3200E3L,4294967294UL,0UL,3UL,8UL,4294967286UL},{4294967295UL,0x1C97152BL,4294967288UL,9UL,2UL,0xDEB21495L,2UL,9UL,4294967288UL,0x1C97152BL},{0x8161A80EL,0xDDB2AB74L,0xEDF39F53L,0xDEB21495L,0x27D78AA4L,0x1C97152BL,0x41C22FC8L,1UL,4294967294UL,0x55475CBAL},{4294967295UL,3UL,4UL,4294967288UL,4294967294UL,0x1C97152BL,0x3F3200E3L,4294967286UL,0x41C22FC8L,4294967295UL}};
            int *l_514 = (void*)0;
            int i, j;
            for (g_226 = 5; (g_226 >= 2); g_226 -= 1)
            {
                int *l_476 = (void*)0;
                int *l_477 = &g_96;
                int *l_481 = &g_11;
                int l_508[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                if (g_113[(g_226 + 1)])
                    break;
                (*l_477) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_475 || g_59), 5)), 4));
                if (l_475)
                    continue;
            }
        }
        (*l_517) = (l_516 = ((*l_515) = &g_79));
    }
    else
    {
        char l_518 = 0x05L;
        int ****l_522 = (void*)0;
        int ****l_523 = &g_520;
        int l_529 = 0xC68201A1L;
        l_529 = ((*l_509) = l_528[0][0]);
    }
    (*g_521) = (void*)0;
    return g_72;
}







static unsigned short func_16(int p_17, unsigned p_18)
{
    unsigned char l_359 = 9UL;
    unsigned char *l_361 = &g_171[0];
    unsigned char **l_360 = &l_361;
    int l_379 = 1L;
    int *l_420 = &g_96;
    unsigned short ***l_440 = (void*)0;
    unsigned short * const *l_459 = (void*)0;
    for (g_242 = 0; (g_242 != (-9)); g_242--)
    {
        int *l_350 = &g_67;
        (*l_350) = p_18;
        if (p_18)
        {
            char *l_352 = &g_216[1];
            char **l_351 = &l_352;
            int *l_353 = (void*)0;
            int *l_354 = (void*)0;
            int *l_355 = &g_346[5];
            (*l_355) = ((*l_350) = (((*l_351) = &g_216[0]) == &g_242));
        }
        else
        {
            int **l_356 = &l_350;
            (*l_356) = &g_79;
        }
    }
    if (func_28(g_240, p_17, (safe_mod_func_uint8_t_u_u(l_359, l_359)), (func_56(g_175) > (((*l_360) = &g_171[0]) == &g_171[0])), p_18))
    {
        int *l_362 = &g_79;
        int *l_371 = &g_346[2];
        int * const *l_374 = (void*)0;
        int * const **l_373 = &l_374;
        unsigned l_377 = 3UL;
        unsigned *l_378 = &g_263;
        unsigned *l_380[5] = {&g_261,&g_261,&g_261,&g_261,&g_261};
        unsigned short ***l_410 = &g_111[1];
        int i;
        if (((*l_362) = p_18))
        {
            int *l_363[1][6] = {{&g_67,(void*)0,&g_346[1],(void*)0,&g_346[1],&g_346[1]}};
            char *l_370 = &g_216[1];
            int i, j;
            l_363[0][4] = &g_11;
            p_17 = (safe_add_func_int8_t_s_s(((*l_370) = (func_56(l_359) == (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(0xB1ACB79CL, (&g_111[1] != (void*)0))), 7)))), p_17));
        }
        else
        {
            int **l_372 = &l_362;
            (*l_372) = l_371;
        }
        (*l_371) = func_22((!(&g_71 != ((*l_373) = &g_66))), ((p_18 = ((((safe_add_func_int32_t_s_s(p_18, func_45(l_377, p_17))) > g_240) && (l_379 = ((*l_378) = (l_359 >= 0x5CD6L)))) && 0x62L)) | g_113[4]), p_17);
        if (l_379)
        {
            unsigned char **l_397 = &l_361;
            int l_401[3];
            unsigned short ***l_411[10][2] = {{&g_111[4],&g_111[6]},{&g_111[4],&g_111[4]},{&g_111[6],&g_111[4]},{&g_111[4],&g_111[6]},{&g_111[4],&g_111[4]},{&g_111[6],&g_111[4]},{&g_111[4],&g_111[6]},{&g_111[4],&g_111[4]},{&g_111[6],&g_111[4]},{&g_111[4],&g_111[6]}};
            unsigned short * const *l_413 = &g_112;
            unsigned short * const **l_412 = &l_413;
            int i, j;
            for (i = 0; i < 3; i++)
                l_401[i] = 0x796F63ACL;
            for (g_175 = 7; (g_175 >= 0); g_175 -= 1)
            {
                short *l_383 = &g_226;
                unsigned *l_384 = &l_377;
                int i;
                p_17 = (func_56(((*l_383) = (safe_rshift_func_uint8_t_u_u(g_346[g_175], g_346[g_175])))) > (&p_18 == l_384));
                for (g_226 = 3; (g_226 >= 0); g_226 -= 1)
                {
                    int l_394 = 3L;
                    unsigned char ***l_398 = (void*)0;
                    unsigned char ***l_399 = (void*)0;
                    unsigned char ***l_400 = &l_360;
                    int i;
                    for (l_379 = 0; (l_379 <= 4); l_379 += 1)
                    {
                        int l_385 = 0xFBF22F49L;
                        l_385 = p_18;
                        return p_18;
                    }
                    (*l_362) = (p_17 ^ (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_18, (safe_sub_func_uint16_t_u_u((p_18 >= ((l_379 | (g_149 & l_394)) && func_28(p_17, ((safe_lshift_func_int16_t_s_s((((p_17 != (((*l_400) = l_397) == (void*)0)) & l_401[0]) != p_18), 11)) ^ p_18), g_261, g_11, (*l_371)))), p_18)))), 1L)), 1L)));
                }
                for (g_96 = 4; (g_96 >= 1); g_96 -= 1)
                {
                    unsigned l_407 = 0x09FD4003L;
                    char *l_414 = (void*)0;
                    char *l_415 = &g_242;
                    for (g_149 = 0; (g_149 <= 4); g_149 += 1)
                    {
                        int *l_402 = &l_401[0];
                        int i;
                        (*l_402) = ((*l_362) = (*l_362));
                        (*l_371) = ((*l_402) = func_56(p_17));
                        (*l_402) = func_34((((safe_add_func_uint16_t_u_u(((*g_112) = (func_56(l_401[0]) | (p_17 | (safe_sub_func_uint16_t_u_u((((*l_383) = g_346[g_175]) ^ g_261), l_379))))), (l_401[2] & 4294967295UL))) || ((*l_384) = 4294967293UL)) || g_149), l_407);
                        (*l_371) = (l_401[2] < l_401[0]);
                    }
                    (*l_371) = (safe_mod_func_uint8_t_u_u((g_216[1] | ((l_411[0][0] = l_410) != l_412)), ((*l_415) = p_17)));
                }
            }
            (*l_362) = p_17;
        }
        else
        {
            int *l_416 = (void*)0;
            int **l_417 = (void*)0;
            int **l_418 = &l_416;
            (*l_418) = l_416;
            (*l_418) = &g_346[2];
        }
    }
    else
    {
        int **l_419[1];
        int i;
        for (i = 0; i < 1; i++)
            l_419[i] = &g_66;
        l_420 = (g_66 = &l_379);
        for (g_96 = (-26); (g_96 == 17); ++g_96)
        {
            char l_423 = (-8L);
            (*l_420) = (0x25802926L & (l_423 & g_424));
        }
        l_420 = &p_17;
        g_66 = &l_379;
    }
    for (p_18 = 0; (p_18 >= 6); p_18++)
    {
        int l_427 = 0L;
        char l_436 = (-1L);
        unsigned short ***l_441 = (void*)0;
        unsigned *l_449 = &g_105[6][0];
        if ((l_427 = ((*l_420) = (g_60 || g_216[1]))))
        {
            unsigned *l_435 = &g_149;
            int l_437 = 0x10DF42E3L;
            (*l_420) = ((func_56((!(p_18 || ((((*l_420) <= (((*l_435) = ((0x837798A5L >= g_105[6][0]) || ((safe_unary_minus_func_uint8_t_u(((safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*l_420) >= (p_17 || (func_56(((0xF882FCCFL || (func_22(((*l_435) = p_17), l_436, p_18) || (*l_420))) >= p_17)) >= p_18))), g_346[2])), l_436)) <= p_17), (-7L))) ^ p_18))) == g_424))) != p_18)) > 0x371E6630L) && l_436)))) | l_437) > g_105[6][0]);
            for (g_96 = 7; (g_96 != (-7)); g_96 = safe_sub_func_uint32_t_u_u(g_96, 6))
            {
                short l_442[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_442[i] = 5L;
                l_442[0] = ((l_441 = l_440) == &g_111[6]);
            }
        }
        else
        {
            int **l_443[3];
            int i;
            for (i = 0; i < 3; i++)
                l_443[i] = &g_66;
            g_66 = &g_346[2];
            if (p_18)
                continue;
            if (p_17)
                continue;
        }
        if (p_17)
        {
            unsigned **l_446 = (void*)0;
            unsigned *l_448 = &g_105[6][0];
            unsigned **l_447 = &l_448;
            (*l_420) = (safe_rshift_func_uint16_t_u_u(p_17, ((*g_112) = ((l_449 = ((*l_447) = &g_105[6][0])) == (void*)0))));
            for (g_175 = 13; (g_175 <= (-10)); --g_175)
            {
                const int *l_452 = &g_346[2];
                int **l_453 = &l_420;
                l_452 = (void*)0;
                l_452 = ((*l_453) = &g_96);
            }
        }
        else
        {
            return (*g_112);
        }
        for (p_17 = (-30); (p_17 >= 1); ++p_17)
        {
            int *l_456 = &g_346[2];
            int **l_457 = (void*)0;
            int **l_458[7] = {&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456};
            int i;
            (*l_456) = (p_18 ^ g_226);
            (*l_456) = (((void*)0 == &g_112) >= 7UL);
            g_73 = &p_17;
            l_379 = (l_459 != (void*)0);
        }
    }
    return p_17;
}







static short func_22(unsigned p_23, unsigned short p_24, const char p_25)
{
    int *l_341 = &g_11;
    int l_342 = 5L;
    int **l_344 = &g_66;
    for (g_242 = 2; (g_242 <= 6); g_242 += 1)
    {
        int *l_334 = &g_96;
        int **l_335 = &l_334;
        unsigned char *l_340 = (void*)0;
        unsigned char **l_339 = &l_340;
        (*l_335) = l_334;
        for (g_263 = 0; (g_263 <= 6); g_263 += 1)
        {
            unsigned char *l_337 = &g_171[1];
            unsigned char **l_336[9][8][3] = {{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337}}};
            int *l_343[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_343[i] = &g_67;
            for (g_261 = 0; (g_261 <= 2); g_261 += 1)
            {
                unsigned char ***l_338[8][8] = {{&l_336[7][1][1],&l_336[2][1][2],(void*)0,(void*)0,&l_336[4][4][0],(void*)0,&l_336[4][4][0],(void*)0},{&l_336[2][3][1],(void*)0,&l_336[2][3][1],&l_336[2][1][2],&l_336[2][3][1],&l_336[2][3][1],&l_336[4][5][1],(void*)0},{(void*)0,(void*)0,&l_336[2][3][1],&l_336[2][3][1],(void*)0,(void*)0,&l_336[2][3][1],&l_336[7][7][2]},{(void*)0,&l_336[2][3][1],(void*)0,(void*)0,&l_336[2][3][1],&l_336[2][3][1],&l_336[7][7][2],(void*)0},{&l_336[2][3][1],(void*)0,&l_336[3][6][0],&l_336[4][4][0],&l_336[4][4][0],&l_336[3][6][0],(void*)0,&l_336[2][3][1]},{&l_336[3][6][0],&l_336[2][3][1],(void*)0,&l_336[2][3][1],&l_336[2][3][1],(void*)0,&l_336[2][1][2],&l_336[4][4][0]},{&l_336[2][3][1],&l_336[6][4][0],(void*)0,&l_336[2][3][1],&l_336[2][3][1],(void*)0,(void*)0,&l_336[3][7][0]},{&l_336[2][1][2],&l_336[2][3][1],&l_336[7][1][1],(void*)0,&l_336[2][3][1],(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_339 = l_336[2][3][1];
                if (g_113[g_263])
                    break;
                (*l_335) = l_341;
                l_342 = 4L;
            }
            l_341 = l_343[1];
            return p_25;
        }
    }
    (*l_344) = &l_342;
    return p_24;
}







static unsigned func_28(unsigned p_29, const int p_30, const unsigned p_31, unsigned p_32, unsigned p_33)
{
    int *l_313 = &g_96;
    unsigned short * const *l_318 = (void*)0;
    unsigned short * const ** const l_317 = &l_318;
    for (g_240 = 0; (g_240 == 22); g_240 = safe_add_func_uint8_t_u_u(g_240, 7))
    {
        unsigned l_316 = 3UL;
        unsigned char *l_326 = &g_171[0];
        unsigned char **l_325 = &l_326;
        g_73 = l_313;
        for (p_33 = 0; (p_33 == 53); ++p_33)
        {
            int *l_330[1][10][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_330[i][j][k] = (void*)0;
                }
            }
            if (p_31)
            {
                (*l_313) = (p_32 <= (((-1L) != l_316) >= (l_317 != (void*)0)));
            }
            else
            {
                int l_328 = 1L;
                for (p_32 = 1; (p_32 <= 6); p_32 += 1)
                {
                    int *l_319 = &g_96;
                    const int **l_322 = &g_73;
                    for (g_79 = 0; (g_79 <= 0); g_79 += 1)
                    {
                        int **l_320 = (void*)0;
                        int **l_321 = &g_66;
                        int i;
                        l_319 = &g_79;
                        if (g_171[(g_79 + 2)])
                            continue;
                        (*l_321) = &g_67;
                    }
                    (*l_322) = &p_30;
                }
                for (g_67 = 0; (g_67 != (-16)); --g_67)
                {
                    unsigned char ***l_327 = &l_325;
                    int **l_329[9] = {(void*)0,&g_66,(void*)0,&g_66,(void*)0,&g_66,(void*)0,&g_66,(void*)0};
                    int i;
                    (*l_327) = l_325;
                    (*l_313) = (9L == l_328);
                    l_330[0][7][3] = &g_67;
                }
            }
            if ((*g_73))
                break;
            g_73 = &p_30;
        }
        for (g_60 = (-16); (g_60 < 2); g_60 = safe_add_func_uint32_t_u_u(g_60, 2))
        {
            if ((*l_313))
                break;
            return p_31;
        }
    }
    return p_32;
}







static unsigned func_34(int p_35, int p_36)
{
    int **l_306 = (void*)0;
    int **l_307 = (void*)0;
    int **l_308[2];
    int i;
    for (i = 0; i < 2; i++)
        l_308[i] = (void*)0;
    g_71 = &p_36;
    return g_175;
}







static short func_39(unsigned char p_40, unsigned p_41, int p_42, short p_43, unsigned p_44)
{
    unsigned short l_104[6];
    unsigned short *l_106[8] = {&l_104[0],&l_104[0],&l_104[0],&l_104[0],&l_104[0],&l_104[0],&l_104[0],&l_104[0]};
    int l_107 = 1L;
    int l_108 = 0x167B9C73L;
    int l_109[6][8][5] = {{{0x632B0D1CL,(-1L),1L,0L,0x084A9EC0L},{1L,0x427E885CL,1L,0x084A9EC0L,0xD927889CL},{1L,0x848233F3L,2L,1L,1L},{0x632B0D1CL,1L,0x632B0D1CL,(-10L),0xD927889CL},{1L,0L,0L,(-10L),0x084A9EC0L},{0L,(-7L),2L,1L,0x88CBA7A3L},{2L,1L,0L,0x084A9EC0L,0x80A06078L},{0x86F2BE0BL,1L,0x632B0D1CL,0L,2L}},{{1L,(-7L),2L,0x78ED21FDL,0L},{0x86F2BE0BL,0L,1L,0x5B4E2C4FL,0L},{2L,1L,1L,0x8C39940FL,0x7006BDA4L},{2L,0xB2A2CB73L,0xFDD6AA84L,(-7L),0xE63E716AL},{0xB7C33EA3L,(-3L),0xFDD6AA84L,4L,0L},{0x5B4E2C4FL,8L,0L,0xB06C8777L,(-5L)},{1L,(-3L),0xD927889CL,(-5L),0x8C39940FL},{1L,0xB2A2CB73L,0x34670EA8L,1L,1L}},{{0x5B4E2C4FL,8L,0x5B4E2C4FL,(-1L),0x8C39940FL},{0xB7C33EA3L,1L,2L,(-1L),(-5L)},{2L,0xBE956BE9L,(-10L),1L,0L},{0x34670EA8L,(-1L),2L,(-5L),0xE63E716AL},{0x084A9EC0L,(-1L),0x5B4E2C4FL,0xB06C8777L,0x7006BDA4L},{0x80A06078L,0xBE956BE9L,0x34670EA8L,4L,0xB06C8777L},{0x084A9EC0L,1L,0xD927889CL,(-7L),0xB06C8777L},{0x34670EA8L,8L,0L,0x8C39940FL,0x7006BDA4L}},{{2L,0xB2A2CB73L,0xFDD6AA84L,(-7L),0xE63E716AL},{0xB7C33EA3L,(-3L),0xFDD6AA84L,4L,0L},{0x5B4E2C4FL,8L,0L,0xB06C8777L,(-5L)},{1L,(-3L),0xD927889CL,(-5L),0x8C39940FL},{1L,0xB2A2CB73L,0x34670EA8L,1L,1L},{0x5B4E2C4FL,8L,0x5B4E2C4FL,(-1L),(-1L)},{8L,(-1L),0x38A02C35L,(-1L),2L},{0x38A02C35L,0x3E4BC467L,(-3L),2L,1L}},{{(-1L),4L,0x38A02C35L,2L,1L},{0xFACB5C81L,4L,0x10CA82D2L,0x86F2BE0BL,1L},{0L,0x3E4BC467L,(-1L),0L,0x86F2BE0BL},{0xFACB5C81L,(-1L),0xB2A2CB73L,(-1L),0x86F2BE0BL},{(-1L),(-5L),8L,(-1L),1L},{0x38A02C35L,0x7006BDA4L,0L,(-1L),1L},{8L,0L,0L,0L,1L},{0x10CA82D2L,(-1L),8L,0x86F2BE0BL,2L}},{{1L,0L,0xB2A2CB73L,2L,(-1L)},{1L,0x7006BDA4L,(-1L),2L,2L},{0x10CA82D2L,(-5L),0x10CA82D2L,(-1L),(-1L)},{8L,(-1L),0x38A02C35L,(-1L),2L},{0x38A02C35L,0x3E4BC467L,(-3L),2L,1L},{(-1L),4L,0x38A02C35L,2L,1L},{0xFACB5C81L,4L,0x10CA82D2L,0x86F2BE0BL,1L},{0L,0x3E4BC467L,(-1L),0L,0x86F2BE0BL}}};
    int * const l_195 = &g_79;
    int *l_231 = &g_79;
    unsigned l_232 = 0UL;
    const unsigned short *l_248 = (void*)0;
    const unsigned short **l_247 = &l_248;
    const unsigned short ***l_246 = &l_247;
    const int *l_277 = &g_67;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_104[i] = 8UL;
    l_109[1][1][1] = (safe_mod_func_int8_t_s_s(((((func_56(p_44) != p_43) <= (-3L)) || (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(p_42, ((l_108 = ((&g_71 != (void*)0) <= (l_107 = ((g_105[6][0] = l_104[5]) | l_104[5])))) < g_60))), 0xA478L))) ^ g_11), 2UL));
    for (l_108 = 0; (l_108 <= 0); l_108 += 1)
    {
        int *l_115[3];
        unsigned short *l_146 = (void*)0;
        unsigned short **l_150 = &l_106[0];
        int *l_181 = (void*)0;
        unsigned l_197 = 8UL;
        int i;
        for (i = 0; i < 3; i++)
            l_115[i] = &g_11;
        for (p_41 = 0; (p_41 <= 0); p_41 += 1)
        {
            int **l_116 = &l_115[1];
            int l_133[8];
            int i, j;
            for (i = 0; i < 8; i++)
                l_133[i] = (-1L);
            if (g_105[(p_41 + 2)][p_41])
            {
                int **l_110 = &g_66;
                unsigned short ***l_114 = &g_111[1];
                (*l_110) = &g_67;
                (*l_114) = g_111[1];
            }
            else
            {
                return g_113[4];
            }
            (*l_116) = l_115[1];
            (*l_116) = &g_96;
            p_42 = (p_42 >= (safe_mod_func_uint16_t_u_u((g_96 | (safe_rshift_func_uint16_t_u_s(((**l_116) == (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(8UL, ((g_105[6][0] == ((safe_sub_func_int32_t_s_s(((((**l_116) | (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_133[4] = ((**l_116) ^ func_56(g_72))), g_105[6][0])), p_42))) > 7UL) ^ g_113[0]), g_72)) <= p_40)) || 0x70L))), 0x97L)), 15)) && g_72) | 0x3EL)), p_42))), 4UL)));
        }
        (*g_66) = (l_107 == p_42);
        for (g_59 = 0; (g_59 < 47); ++g_59)
        {
            unsigned l_177 = 0xDE4FE5DEL;
            unsigned short **l_184 = (void*)0;
            int *l_198 = &g_67;
            int **l_199 = &l_115[0];
            for (l_107 = 0; (l_107 == (-10)); l_107 = safe_sub_func_int8_t_s_s(l_107, 3))
            {
                unsigned short ***l_162 = &g_111[3];
                const int l_176 = (-10L);
                if (p_41)
                {
                    int l_140 = 1L;
                    for (p_40 = 0; (p_40 > 54); p_40 = safe_add_func_int32_t_s_s(p_40, 8))
                    {
                        (*g_66) = l_140;
                    }
                }
                else
                {
                    unsigned *l_147 = &g_60;
                    unsigned *l_148 = &g_149;
                    (*g_66) = (((*l_148) = ((safe_lshift_func_uint8_t_u_s(p_43, 5)) > ((safe_unary_minus_func_uint32_t_u(g_60)) || (safe_add_func_int32_t_s_s(((void*)0 != l_146), ((*l_147) = g_67)))))) | (-2L));
                    l_150 = &l_146;
                }
                for (g_67 = 0; (g_67 != (-21)); g_67--)
                {
                    int *l_155[2][3][10] = {{{&l_108,&g_67,&l_108,&g_67,(void*)0,&g_79,&g_67,&l_108,&l_109[1][1][1],(void*)0},{&l_109[5][2][1],(void*)0,&g_11,(void*)0,&g_11,&l_108,(void*)0,&l_108,&g_11,(void*)0},{&g_11,(void*)0,&g_11,&l_109[1][1][1],&l_109[1][1][1],&g_67,(void*)0,&l_108,(void*)0,&g_11}},{{&g_79,&l_108,&g_11,&g_11,&l_109[1][1][1],&l_109[5][2][1],&l_108,&l_108,&l_109[1][1][1],&l_109[1][1][1]},{&l_108,&l_108,&g_11,(void*)0,(void*)0,&g_11,&l_108,&l_108,(void*)0,&l_109[1][1][1]},{&g_67,&g_67,&g_11,&l_109[1][1][1],(void*)0,&g_79,&g_67,&l_108,&l_109[1][1][1],(void*)0}}};
                    unsigned short *l_172 = &l_104[5];
                    int **l_196 = &l_115[2];
                    int i, j, k;
                    for (g_149 = 14; (g_149 == 25); g_149++)
                    {
                        int **l_156 = &l_115[1];
                        (*l_156) = l_155[0][2][2];
                        g_73 = &g_96;
                        g_71 = l_115[1];
                        (*l_156) = l_115[1];
                    }
                    if ((g_79 = (-8L)))
                    {
                        int **l_157 = (void*)0;
                        int **l_158 = (void*)0;
                        int **l_159 = &g_66;
                        unsigned *l_163[3][2][7] = {{{&g_60,&g_59,&g_59,&g_59,&g_59,&g_59,&g_60},{&g_149,&g_60,&g_149,&g_149,&g_149,&g_60,&g_149}},{{&g_60,&g_59,&g_59,&g_59,&g_59,&g_59,&g_60},{&g_149,&g_60,&g_149,&g_149,&g_149,&g_60,&g_149}},{{&g_60,&g_59,&g_59,&g_59,&g_59,&g_59,&g_60},{&g_149,&g_60,&g_149,&g_149,&g_60,&g_59,&g_60}}};
                        unsigned char *l_170 = &g_171[0];
                        unsigned short *l_173 = (void*)0;
                        short *l_174 = &g_175;
                        int i, j, k;
                        (*l_159) = &g_11;
                        l_177 = ((p_41 = ((safe_lshift_func_uint8_t_u_s(3UL, p_42)) & (l_162 == l_162))) > (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((((*l_170) = g_60) & ((p_43 ^ ((((l_172 == l_173) || ((*l_174) = g_11)) ^ p_44) >= l_107)) == l_108)) || g_175) || l_176), 4)), 0)), l_176)));
                        (*l_159) = &l_109[4][1][1];
                    }
                    else
                    {
                        int **l_178 = &l_115[1];
                        int **l_179 = (void*)0;
                        int **l_180[7];
                        unsigned char *l_187 = (void*)0;
                        unsigned char *l_188 = &g_171[0];
                        short *l_189 = (void*)0;
                        short *l_190 = &g_175;
                        unsigned *l_191 = &g_60;
                        unsigned *l_192 = &g_149;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_180[i] = (void*)0;
                        g_79 = 0xC00F1287L;
                        l_181 = ((*l_178) = &p_42);
                        p_42 = (~(l_177 < (((*l_192) = ((*l_191) = (safe_rshift_func_int16_t_s_s((((void*)0 == l_184) > ((*l_190) = ((((*l_188) = (safe_mod_func_int16_t_s_s(((void*)0 != l_180[0]), p_44))) | p_40) | (*g_73)))), 11)))) == 0xD92CAEC0L)));
                        l_155[0][0][2] = &p_42;
                    }
                    for (p_41 = 3; (p_41 != 28); p_41++)
                    {
                        p_42 = 5L;
                        if ((*g_73))
                            continue;
                        return l_109[2][2][1];
                    }
                    (*l_196) = l_195;
                }
                (*g_66) = p_41;
                (*l_195) = l_197;
            }
            l_198 = l_115[2];
            (*l_199) = &p_42;
            return p_44;
        }
        if (((*g_66) = (*g_66)))
        {
            unsigned l_206 = 4294967295UL;
            for (g_79 = (-4); (g_79 != (-17)); --g_79)
            {
                (*g_66) = 0xC3962B67L;
                (*g_66) = (*g_66);
                (*g_66) = (safe_sub_func_uint8_t_u_u((l_206 > ((void*)0 == &g_111[0])), g_105[6][0]));
            }
        }
        else
        {
            unsigned char l_217 = 255UL;
            const int l_218[2][9][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
            int i, j, k;
            for (g_175 = 0; (g_175 == 9); g_175++)
            {
                char *l_215[2];
                short *l_225 = &g_226;
                int i;
                for (i = 0; i < 2; i++)
                    l_215[i] = &g_216[1];
                (*l_195) = (safe_rshift_func_uint16_t_u_s((g_105[6][0] != (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((((l_217 = p_44) ^ g_149) | l_218[0][0][0]), (((*g_66) = ((safe_mod_func_uint16_t_u_u(l_218[1][1][1], p_40)) ^ 0x49857D90L)) && (safe_add_func_int16_t_s_s((*l_195), (safe_lshift_func_int16_t_s_u(((*l_225) = (p_42 >= g_96)), 5))))))), 6))), 4));
            }
            if (p_41)
                continue;
        }
    }
    for (p_42 = 8; (p_42 == 12); ++p_42)
    {
        int *l_233 = &g_96;
        int **l_234 = &g_66;
        const int *l_271 = &l_109[1][1][1];
        unsigned short l_301 = 2UL;
    }
    return g_11;
}







static unsigned char func_45(char p_46, const short p_47)
{
    int *l_94[1][5] = {{&g_79,&g_79,&g_79,&g_79,&g_79}};
    unsigned l_95 = 8UL;
    int i, j;
    g_96 = (l_95 = func_56(g_79));
    return g_59;
}







static unsigned func_56(short p_57)
{
    unsigned l_58 = 0x4B38B4B7L;
    int *l_65 = (void*)0;
    int **l_82 = &g_66;
    int *l_84 = &g_67;
    int **l_83 = &l_84;
    unsigned *l_85 = (void*)0;
    unsigned *l_86 = &g_59;
    int *l_91 = &g_79;
    g_59 = l_58;
    if (((g_60 = (0x46L < l_58)) <= ((safe_rshift_func_uint8_t_u_u(g_11, g_59)) ^ (p_57 && l_58))))
    {
        return g_59;
    }
    else
    {
        const int *l_69 = &g_11;
        const int **l_70[4][3][5] = {{{&l_69,&l_69,&l_69,&l_69,&l_69},{(void*)0,&l_69,&l_69,(void*)0,(void*)0},{&l_69,&l_69,&l_69,&l_69,&l_69}},{{(void*)0,(void*)0,&l_69,&l_69,(void*)0},{(void*)0,&l_69,(void*)0,&l_69,&l_69},{(void*)0,&l_69,&l_69,(void*)0,(void*)0}},{{&l_69,&l_69,&l_69,&l_69,&l_69},{(void*)0,(void*)0,&l_69,&l_69,(void*)0},{&l_69,&l_69,(void*)0,&l_69,(void*)0}},{{(void*)0,&l_69,&l_69,(void*)0,(void*)0},{&l_69,&l_69,&l_69,&l_69,&l_69},{(void*)0,&l_69,&l_69,&l_69,&l_69}}};
        int *l_74 = (void*)0;
        int *l_75 = &g_67;
        int i, j, k;
        for (g_60 = (-8); (g_60 <= 27); g_60 = safe_add_func_int16_t_s_s(g_60, 1))
        {
            int l_68 = (-1L);
            g_66 = l_65;
            if (l_68)
                continue;
            l_68 = p_57;
        }
        g_73 = (g_71 = l_69);
        (*l_75) = 1L;
        for (g_67 = 4; (g_67 <= 5); g_67 = safe_add_func_uint32_t_u_u(g_67, 3))
        {
            int *l_78[6][3][4] = {{{&g_79,&g_11,&g_67,&g_11},{&g_11,&g_67,(void*)0,&g_11},{(void*)0,&g_11,&g_79,&g_79}},{{&g_11,&g_11,&g_67,&g_79},{&g_11,&g_67,&g_79,&g_11},{(void*)0,&g_79,(void*)0,&g_79}},{{&g_11,&g_79,&g_67,&g_11},{&g_79,&g_67,&g_67,&g_79},{(void*)0,&g_11,&g_67,&g_79}},{{&g_79,&g_11,&g_67,&g_11},{&g_11,&g_67,(void*)0,&g_11},{(void*)0,&g_11,&g_79,&g_79}},{{&g_11,&g_11,&g_67,&g_79},{&g_11,&g_67,&g_79,&g_11},{(void*)0,&g_79,(void*)0,&g_79}},{{&g_11,&g_79,&g_67,&g_11},{&g_79,&g_67,&g_67,&g_79},{(void*)0,&g_11,&g_67,&g_79}}};
            int i, j, k;
            g_71 = l_65;
            g_79 = (+p_57);
        }
    }
    (*l_91) = ((safe_sub_func_uint16_t_u_u(3UL, l_58)) | (0x0EL ^ (((*l_86) = (l_65 != ((*l_83) = ((*l_82) = &g_67)))) <= (safe_sub_func_int8_t_s_s((0xAAL > (p_57 > (*g_73))), (safe_lshift_func_uint8_t_u_s(((0UL >= p_57) != 1L), g_72)))))));
    return p_57;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_105[i][j], "g_105[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_171[i], "g_171[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_216[i], "g_216[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_346[i], "g_346[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
