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
   char * f0;
};

union U1 {
   unsigned f0;
   int f1;
   char * f2;
};

union U2 {
   int f0;
   unsigned short f1;
   int f2;
   short f3;
   unsigned short f4;
};


static int g_11[1][1][4] = {{{(-1L),(-1L),(-1L),(-1L)}}};
static char g_45 = 1L;
static char *g_44[1][7][2] = {{{&g_45,&g_45},{&g_45,&g_45},{&g_45,&g_45},{&g_45,&g_45},{&g_45,&g_45},{&g_45,&g_45},{&g_45,&g_45}}};
static char *g_46 = &g_45;
static int g_61 = 0x2D748AEEL;
static int g_76 = 0x82F3C076L;
static int g_80 = (-1L);
static unsigned g_87[8] = {8UL,6UL,8UL,8UL,6UL,8UL,8UL,6UL};
static unsigned g_102 = 0xD84CB426L;
static char g_108[9] = {0x88L,0x88L,0x88L,0x88L,0x88L,0x88L,0x88L,0x88L,0x88L};
static union U2 *g_135 = (void*)0;
static union U2 **g_134 = &g_135;
static int *g_143 = &g_61;
static unsigned char g_156 = 0xC5L;
static union U0 g_171[7] = {{0},{0},{0},{0},{0},{0},{0}};
static short g_184[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static union U2 g_195 = {0x4EAD8C2DL};
static union U2 g_219[8][8] = {{{2L},{0x6D705035L},{0x33619917L},{-1L},{0x3C7F1B25L},{-1L},{0x33619917L},{0x6D705035L}},{{0x6D705035L},{0xEA306168L},{3L},{0xA92CE884L},{0x33619917L},{3L},{9L},{2L}},{{9L},{0x2A30B260L},{0x24D1F9F7L},{0x2D898F86L},{0x6D705035L},{0xDCAF3CC0L},{9L},{9L}},{{3L},{0x2D898F86L},{3L},{3L},{0x2D898F86L},{3L},{0x33619917L},{0x2A30B260L}},{{0x2D898F86L},{3L},{0x33619917L},{0x2A30B260L},{-1L},{3L},{-6L},{-1L}},{{0x2A30B260L},{9L},{0xEB3D4A04L},{0x2A30B260L},{0x6D705035L},{0L},{0x6D705035L},{0x2A30B260L}},{{0xEA306168L},{0x6D705035L},{0xEA306168L},{3L},{0xA92CE884L},{0x33619917L},{3L},{9L}},{{0x6D705035L},{2L},{0x33619917L},{0x2D898F86L},{1L},{-1L},{0xA92CE884L},{2L}}};
static unsigned char g_234 = 0xE1L;
static unsigned short *g_258 = (void*)0;
static unsigned short **g_257 = &g_258;
static unsigned short ***g_256 = &g_257;
static char **g_362 = (void*)0;
static char ***g_361 = &g_362;
static unsigned g_369 = 4294967295UL;
static union U1 g_378 = {0xFFC5D27DL};
static int g_386 = 0xB3F4C96FL;
static unsigned short ***g_398 = &g_257;
static unsigned g_417 = 8UL;
static char g_420 = 0xA8L;
static unsigned short g_436 = 9UL;
static short *g_475 = &g_184[0];
static short **g_474 = &g_475;
static char g_488 = 0L;
static unsigned g_489 = 6UL;
static unsigned short g_511 = 0UL;
static union U0 *g_528 = &g_171[5];
static union U0 **g_527 = &g_528;
static unsigned g_562 = 0x66E02A54L;
static unsigned g_591 = 0UL;
static union U1 *g_649 = &g_378;
static unsigned short ****g_788 = &g_256;
static union U0 g_835[7] = {{0},{0},{0},{0},{0},{0},{0}};
static unsigned char g_839 = 7UL;
static unsigned char g_841 = 0x1BL;



static unsigned short func_1(void);
static unsigned short func_7(unsigned p_8, char * p_9, char * p_10);
static char * func_13(char * p_14, char * p_15, int p_16);
static char * func_17(union U0 p_18, char * p_19, char * p_20, char * p_21, char * p_22);
static char * func_24(union U2 p_25, char p_26, unsigned short p_27, union U0 p_28, char * p_29);
static char func_30(char * p_31, char * p_32, char * p_33);
static char * func_34(union U2 p_35, char * p_36, char * p_37, unsigned p_38, union U2 p_39);
static union U2 func_40(unsigned p_41, char * p_42, char * p_43);
static int * func_47(short p_48, union U2 p_49, unsigned short p_50, int * p_51, unsigned p_52);
static union U2 func_53(char p_54, unsigned char p_55, int * p_56, short p_57);
static unsigned short func_1(void)
{
    unsigned short l_12 = 0xEFA5L;
    union U0 l_23 = {0};
    char *l_264 = &g_108[5];
    char **l_263 = &l_264;
    char *l_266 = &g_108[1];
    char **l_265 = &l_266;
    short l_267 = 0L;
    union U2 l_268 = {0x9C35DD16L};
    unsigned char l_418 = 0UL;
    char *l_419 = &g_420;
    unsigned char *l_838 = &g_839;
    unsigned char *l_840 = &g_841;
    char l_842[4][1];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_842[i][j] = (-8L);
    }
    l_268.f2 = (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((*l_840) |= (((safe_lshift_func_uint8_t_u_s(((*l_838) ^= (func_7((g_11[0][0][0] , l_12), func_13(func_17(l_23, func_24((((func_30(func_34(func_40(l_12, g_44[0][4][0], g_46), &g_108[2], ((*l_265) = ((*l_263) = &g_108[6])), l_267, l_268), &g_108[6], &g_108[0]) ^ 0UL) < l_418) , l_268), l_12, l_12, g_171[1], g_44[0][2][0]), l_419, l_419, &g_420), &g_420, g_369), &g_420) < 1UL)), 4)) ^ l_268.f1) == l_268.f4)))), l_268.f4));

    ;
    ;
    ;

        ;

    (*g_143) = 0x8D410C83L;
    (*g_143) |= ((l_268.f2 &= 0xCE64L) && l_842[0][0]);
    return l_268.f3;
}







static unsigned short func_7(unsigned p_8, char * p_9, char * p_10)
{
    int l_601 = 0xB061B423L;
    unsigned short **l_604[2][9][6] = {{{&g_258,&g_258,&g_258,&g_258,&g_258,(void*)0},{(void*)0,&g_258,&g_258,&g_258,(void*)0,&g_258},{&g_258,(void*)0,&g_258,(void*)0,&g_258,(void*)0},{&g_258,&g_258,&g_258,(void*)0,&g_258,&g_258},{(void*)0,&g_258,&g_258,&g_258,(void*)0,(void*)0},{&g_258,&g_258,&g_258,&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258,(void*)0,&g_258,&g_258},{&g_258,&g_258,(void*)0,&g_258,(void*)0,(void*)0},{&g_258,(void*)0,&g_258,(void*)0,&g_258,&g_258}},{{&g_258,&g_258,(void*)0,&g_258,(void*)0,&g_258},{&g_258,&g_258,(void*)0,&g_258,&g_258,&g_258},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_258},{&g_258,&g_258,&g_258,&g_258,(void*)0,(void*)0},{&g_258,&g_258,(void*)0,&g_258,(void*)0,&g_258},{&g_258,&g_258,&g_258,&g_258,(void*)0,&g_258},{&g_258,(void*)0,&g_258,(void*)0,&g_258,(void*)0},{&g_258,&g_258,&g_258,(void*)0,(void*)0,&g_258},{&g_258,&g_258,&g_258,&g_258,&g_258,&g_258}}};
    int l_605 = (-1L);
    union U2 l_606 = {1L};
    unsigned char *l_608[10];
    unsigned char **l_607 = &l_608[7];
    union U2 *l_610 = &g_219[5][5];
    union U0 **l_612 = (void*)0;
    char **l_630 = &g_46;
    int *l_638 = &l_606.f0;
    union U1 *l_648[1][6][1] = {{{(void*)0},{&g_378},{(void*)0},{&g_378},{(void*)0},{&g_378}}};
    unsigned l_668 = 4294967295UL;
    short l_695 = 0L;
    unsigned short **l_707 = &g_258;
    unsigned l_758 = 0UL;
    unsigned char l_779 = 0x6DL;
    union U0 l_825 = {0};
    union U0 *l_834 = &g_835[3];
    unsigned short l_836[1][9][10] = {{{0x7F2EL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL},{0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL,0xFBCDL,0x7F2EL,0x135EL,0x7F2EL,0xFBCDL}}};
    int **l_837 = &l_638;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_608[i] = &g_234;
    if (((((((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((!(l_601 < ((*g_475) = (safe_mul_func_int8_t_s_s((*p_10), ((((*p_9) ^= l_601) != (*p_10)) , ((l_606.f2 = (p_8 > (((g_219[6][0] = ((l_605 = (((*g_46) = ((*p_9) = ((*g_528) , (((*g_143) = (*g_143)) , ((void*)0 == l_604[0][8][2]))))) != l_601)) , l_606)) , l_607) == &l_608[7]))) && p_8))))))) , l_606.f3), 1)), l_601)), p_8)) , l_601) , (*g_527)) == (*g_527)) , (*g_143)) , 0xDAEB1DF8L))
    {
        union U2 *l_609 = &g_195;
        l_610 = (((**l_607) = g_156) , ((*g_134) = l_609));

        ;
        ;
    }
    else
    {
        unsigned l_611 = 0xB494D382L;
        unsigned l_621 = 4294967294UL;
        char *l_632 = &g_45;
        union U2 l_635[8][3][5] = {{{{0x3D27D5CDL},{0xCC5DB2F0L},{0L},{0xD61302B3L},{-1L}},{{4L},{-4L},{6L},{0L},{4L}},{{0x03A35D33L},{0xE12FBE3AL},{0x85CB0032L},{0L},{0x85CB0032L}}},{{{4L},{4L},{0xD1A7188EL},{0x5E92BDA4L},{0L}},{{0L},{0x3D27D5CDL},{0xE12FBE3AL},{0xCC5DB2F0L},{4L}},{{0xD1A7188EL},{0L},{-7L},{7L},{-1L}}},{{{0xCC5DB2F0L},{0x3D27D5CDL},{-4L},{0x263F547DL},{0L}},{{1L},{4L},{7L},{1L},{0xD8559BF3L}},{{7L},{0xE12FBE3AL},{0L},{0xD8559BF3L},{0xD8559BF3L}}},{{{0xB808B5DAL},{-4L},{0xB808B5DAL},{-6L},{0L}},{{-4L},{-6L},{4L},{0x85CB0032L},{-1L}},{{0x0072AAE1L},{-1L},{4L},{0x03A35D33L},{4L}}},{{{0x5E92BDA4L},{0x37EC8796L},{4L},{-1L},{0L}},{{6L},{0x5E92BDA4L},{0xB808B5DAL},{0x0072AAE1L},{0x85CB0032L}},{{-7L},{-3L},{0L},{0x3D27D5CDL},{4L}}},{{{-7L},{7L},{7L},{-7L},{-1L}},{{6L},{0x03A35D33L},{-4L},{0xD1A7188EL},{1L}},{{0x5E92BDA4L},{0x263F547DL},{-7L},{4L},{0x0072AAE1L}}},{{{0x0072AAE1L},{0xD61302B3L},{0xE12FBE3AL},{0xD1A7188EL},{0x03A35D33L}},{{-4L},{0x85CB0032L},{0xD1A7188EL},{-7L},{-3L}},{{0xB808B5DAL},{0L},{0x5E92BDA4L},{0xD1A7188EL},{4L}}},{{{1L},{0L},{1L},{0L},{1L}},{{0L},{0x5E92BDA4L},{0xD8559BF3L},{0xE12FBE3AL},{-7L}},{{6L},{0xCC5DB2F0L},{-6L},{0x263F547DL},{0xB808B5DAL}}}};
        int *l_637 = &g_76;
        char **l_643[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        char *l_653 = &g_108[0];
        int l_662 = 0x6ED9FFBFL;
        short **l_669 = &g_475;
        unsigned l_671 = 1UL;
        union U1 l_694 = {0x7E7303D8L};
        union U0 l_703 = {0};
        int i, j, k;
        l_611 &= ((*g_143) = p_8);
        (*g_143) |= (((void*)0 == l_612) > (*p_10));
        (*g_143) = 1L;
        if ((safe_rshift_func_int16_t_s_s(p_8, 13)))
        {
            char *l_619 = &g_45;
            int l_631 = 0x1034CE9CL;
            union U1 l_650 = {8UL};
            int l_666 = 6L;
            for (g_511 = 2; (g_511 != 21); g_511 = safe_add_func_int8_t_s_s(g_511, 7))
            {
                char *l_633 = (void*)0;
                int l_634 = 0xEFFBB726L;
                union U2 l_636 = {1L};
                union U1 l_651 = {5UL};
                for (l_606.f2 = 11; (l_606.f2 > (-25)); l_606.f2--)
                {
                    char *l_620 = &g_420;
                    union U1 *l_624 = (void*)0;
                    union U1 **l_625 = &l_624;
                    union U0 **l_626 = &g_528;
                    short *l_627 = (void*)0;
                    short *l_628 = &g_219[6][0].f3;
                    short *l_629 = &g_195.f3;
                    (*g_143) = ((l_621 & ((safe_sub_func_int16_t_s_s((p_8 , 0x525CL), p_8)) == g_219[6][0].f2)) < 6L);
                }
                l_638 = &l_634;

                ;
                for (l_606.f0 = 1; (l_606.f0 >= 0); l_606.f0 -= 1)
                {
                    unsigned *l_646 = (void*)0;
                    unsigned *l_647 = &g_417;
                    int *l_652[9][10] = {{&g_219[6][0].f0,(void*)0,&g_219[6][0].f0,&l_631,&g_61,&g_61,&l_631,&g_219[6][0].f0,(void*)0,&g_219[6][0].f0},{&g_219[6][0].f0,&g_80,(void*)0,&g_219[6][0].f0,(void*)0,&g_80,&g_219[6][0].f0,&g_219[6][0].f0,&g_80,(void*)0},{&g_80,&g_219[6][0].f0,&g_219[6][0].f0,&g_80,(void*)0,&g_219[6][0].f0,(void*)0,&g_80,&g_219[6][0].f0,&g_219[6][0].f0},{(void*)0,&g_219[6][0].f0,&l_631,&g_61,&g_61,&l_631,&g_219[6][0].f0,(void*)0,&g_219[6][0].f0,&l_631},{&g_219[6][0].f0,&g_80,&g_61,&g_80,&g_219[6][0].f0,&l_631,&l_631,&g_219[6][0].f0,&g_80,&g_61},{(void*)0,(void*)0,&g_61,&g_219[6][0].f0,(void*)0,&g_219[6][0].f0,&g_61,(void*)0,(void*)0,&g_61},{&g_80,&g_219[6][0].f0,&l_631,&l_631,&g_219[6][0].f0,&g_80,&g_61,(void*)0,&g_219[6][0].f0,&g_219[6][0].f0},{&g_80,&g_61,&g_80,&g_219[6][0].f0,&l_631,&l_631,&g_219[6][0].f0,&g_80,&g_61,&g_80},{&g_80,(void*)0,&g_61,&g_219[6][0].f0,&g_61,(void*)0,&g_80,&g_80,(void*)0,&g_61}};
                    int i, j;
                    (*l_638) = (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_108[(l_606.f0 + 6)], ((*l_637) &= ((*g_361) != (l_643[9] = (*g_361)))))), (safe_sub_func_uint8_t_u_u((0x2688L == (g_102 <= p_8)), 0x52L)))) | ((*l_610) , 0x7BB6L)) , (*l_638));
                    l_605 &= ((l_651 = (((*l_637) | (((!(0x9EL == l_631)) , (g_649 = (((*l_647) |= ((*l_638) && p_8)) , l_648[0][2][0]))) == &g_378)) , l_650)) , p_8);
                    for (g_45 = 2; (g_45 >= 0); g_45 -= 1)
                    {
                        return l_650.f1;
                    }
                    for (g_61 = 0; (g_61 <= 1); g_61 += 1)
                    {
                        if (l_651.f1)
                            break;
                        if (p_8)
                            break;
                    }
                }

                            }


            ;
            if ((l_653 == (*l_630)))
            {
                char *l_663 = (void*)0;
                union U0 l_667[9] = {{0},{0},{0},{0},{0},{0},{0},{0},{0}};
                int i;
                (*g_143) = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((l_662 != l_668), p_8)) , (-1L)), p_8)) ^ 0x0A4358AEL), p_8)), 0x55EBL));
            }
            else
            {
                short ***l_670 = &l_669;
                (*g_143) = (((*l_670) = l_669) != &g_475);
                return l_671;
            }
            for (l_662 = 8; (l_662 == (-27)); l_662 = safe_sub_func_uint32_t_u_u(l_662, 5))
            {
                union U1 **l_674 = &g_649;
                (*l_674) = &g_378;

                ;
            }
        }
        else
        {
            int *l_677[10];
            union U0 l_698 = {0};
            unsigned char **l_699 = (void*)0;
            unsigned short *l_770[10] = {&g_219[6][0].f4,&g_219[6][0].f1,&g_219[6][0].f4,&g_219[6][0].f4,&g_219[6][0].f1,&g_219[6][0].f4,&g_219[6][0].f4,&g_219[6][0].f1,&g_219[6][0].f4,&g_219[6][0].f4};
            char **l_771 = (void*)0;
            int i;
            for (i = 0; i < 10; i++)
                l_677[i] = (void*)0;
            for (g_234 = 9; (g_234 == 18); g_234++)
            {
                union U1 **l_678 = (void*)0;
                union U1 **l_679 = &l_648[0][2][0];
                int l_685 = 0x53DB959AL;
                unsigned *l_688 = (void*)0;
                unsigned *l_689 = &g_87[3];
                int l_690[10] = {0x38D0E76CL,0x38D0E76CL,(-1L),0x38D0E76CL,0x38D0E76CL,(-1L),0x38D0E76CL,0x38D0E76CL,(-1L),0x38D0E76CL};
                unsigned short ****l_693 = (void*)0;
                unsigned short **l_708 = &g_258;
                unsigned short **l_709 = &g_258;
                short **l_743 = &g_475;
                int *l_745 = &g_80;
                int i;
                l_637 = l_677[4];

                ;
                (*l_679) = &g_378;
                l_690[4] ^= ((*l_638) = ((65533UL || p_8) , ((safe_unary_minus_func_int8_t_s((-1L))) <= (((void*)0 == &g_475) < (safe_mod_func_uint8_t_u_u((l_685 = (safe_lshift_func_uint8_t_u_u(g_195.f4, 2))), (((safe_add_func_uint32_t_u_u(((*l_689) = p_8), p_8)) <= (func_53((*p_10), g_102, &l_662, (**g_474)) , g_219[6][0].f0)) | p_8)))))));

                            }

            ;
            ;
            ;
            (*l_638) = (safe_lshift_func_uint8_t_u_u(0x49L, 7));

                        (*g_143) ^= 0xFEF0BFA5L;
            l_605 ^= ((+(*l_638)) != (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((p_8 != ((p_8 ^ (((g_436 = p_8) & 0x8F5EL) <= (p_8 || (*g_143)))) , (l_779 &= 4294967294UL))), ((*g_46) |= ((&g_61 != &l_662) <= 251UL)))), p_8)));
        }

        ;

        ;
        ;
    }

        ;

    ;
    for (g_591 = (-22); (g_591 == 54); g_591 = safe_add_func_int32_t_s_s(g_591, 1))
    {
        unsigned short ****l_789 = (void*)0;
        int l_797 = (-2L);
        union U0 l_813 = {0};
        union U1 l_814 = {1UL};
        for (g_156 = 0; (g_156 < 9); ++g_156)
        {
            if ((*g_143))
            {
                if (p_8)
                    break;
            }
            else
            {
                unsigned short l_786 = 0x9FCEL;
                unsigned short ****l_787 = &g_256;
                union U0 l_802 = {0};
                unsigned char *l_811[7][10][3] = {{{&l_779,&g_234,&g_156},{&g_234,&l_779,&g_234},{&g_156,&l_779,&g_156},{&g_156,&g_234,&g_156},{&l_779,&g_156,&l_779},{&g_156,&g_234,&g_234},{(void*)0,(void*)0,&l_779},{(void*)0,&g_156,&g_156},{(void*)0,&g_234,&g_156},{&g_156,(void*)0,&g_234}},{{&g_234,&g_156,&g_156},{&g_156,&g_156,&g_156},{&g_234,&g_156,&g_156},{&g_234,(void*)0,&g_156},{&g_156,&l_779,&g_156},{&g_156,&l_779,(void*)0},{(void*)0,&g_156,&l_779},{&l_779,&l_779,&g_234},{(void*)0,&g_234,&g_156},{&g_156,&g_234,(void*)0}},{{&g_234,&l_779,&g_234},{(void*)0,&l_779,&g_234},{&l_779,&g_234,&g_234},{&l_779,&l_779,&g_234},{&g_156,&g_234,&g_234},{&g_156,&g_234,(void*)0},{&g_156,(void*)0,&g_156},{&g_156,&g_156,&g_234},{&g_156,&g_234,&l_779},{&g_234,&g_156,(void*)0}},{{&g_156,(void*)0,&g_156},{&g_156,&g_234,&l_779},{&g_234,&g_234,&l_779},{&g_234,&l_779,&g_156},{&l_779,&g_234,&l_779},{&g_234,&l_779,&g_234},{&g_234,&l_779,(void*)0},{&g_156,&g_234,&l_779},{&g_156,&g_234,&l_779},{&g_234,&l_779,&l_779}},{{&g_156,&g_156,&l_779},{&g_156,&l_779,&l_779},{&g_156,&l_779,(void*)0},{&g_156,(void*)0,&g_234},{&g_156,&g_156,&l_779},{&l_779,&l_779,&g_156},{&l_779,&l_779,&g_234},{&g_234,&g_156,(void*)0},{&l_779,&g_156,&l_779},{&g_234,&g_156,&l_779}},{{(void*)0,&l_779,&g_234},{&l_779,(void*)0,&g_234},{(void*)0,&g_234,&l_779},{&g_234,&l_779,&g_156},{&l_779,&g_234,&g_156},{&g_234,&l_779,&l_779},{&g_156,(void*)0,&l_779},{&g_156,(void*)0,&l_779},{&l_779,&g_156,&g_156},{&g_156,&g_234,&g_156}},{{&g_156,&g_234,&l_779},{&l_779,&g_234,&g_234},{&g_234,&g_234,&g_234},{&l_779,&g_234,&l_779},{(void*)0,&g_234,&l_779},{&g_156,&g_234,(void*)0},{&l_779,&g_156,&g_234},{&g_156,(void*)0,&l_779},{&g_156,(void*)0,&g_234},{&g_156,&l_779,&g_234}}};
                int i, j, k;
                if ((safe_mul_func_int8_t_s_s(l_786, ((g_788 = l_787) == l_789))))
                {
                    int *l_792 = &l_606.f0;
                    (*l_792) ^= (safe_lshift_func_uint8_t_u_u(p_8, ((*g_143) < g_76)));

                                        (*l_792) &= l_786;
                }
                else
                {
                    unsigned short l_798 = 0x4D9CL;
                    unsigned l_799[4][2][10] = {{{0x5CF535A0L,4294967288UL,0x5CF535A0L,4294967292UL,1UL,1UL,4294967292UL,0x5CF535A0L,4294967288UL,0x5CF535A0L},{0x5CF535A0L,0x959DE2C0L,4294967288UL,0xA0FFB2CAL,4294967288UL,0x959DE2C0L,0x5CF535A0L,0x5CF535A0L,0x959DE2C0L,4294967288UL}},{{0x959DE2C0L,0x5CF535A0L,0x5CF535A0L,0x959DE2C0L,0x959DE2C0L,1UL,0x959DE2C0L,0xA0FFB2CAL,4294967292UL,4294967292UL},{0x959DE2C0L,4294967292UL,4294967288UL,1UL,1UL,4294967288UL,4294967292UL,0x959DE2C0L,4294967292UL,4294967288UL}},{{1UL,0xA0FFB2CAL,1UL,0xA0FFB2CAL,1UL,4294967288UL,4294967288UL,1UL,0xA0FFB2CAL,1UL},{0x959DE2C0L,0x959DE2C0L,1UL,1UL,0x5CF535A0L,1UL,1UL,0x959DE2C0L,0x959DE2C0L,1UL}},{{0xA0FFB2CAL,1UL,4294967288UL,4294967288UL,1UL,0xA0FFB2CAL,1UL,0xA0FFB2CAL,1UL,4294967288UL},{4294967292UL,0x959DE2C0L,4294967292UL,4294967288UL,1UL,1UL,4294967288UL,4294967292UL,0x959DE2C0L,4294967292UL}}};
                    int **l_812 = &l_638;
                    int i, j, k;
                    (*g_143) = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0x42L, ((*p_10) = 0x3AL))), l_797)) , 0L);
                    (*g_143) |= (((l_798 >= l_799[2][1][5]) < (safe_mul_func_uint16_t_u_u(p_8, p_8))) || (l_802 , (safe_sub_func_int32_t_s_s((p_8 >= ((*p_10) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((-4L), 6)) == (((*l_607) = &g_156) == (l_797 , l_811[3][8][1]))), p_8)), p_8)))), 0x0DFF92F9L))));
                    (*l_812) = (void*)0;

                    ;
                    (*g_143) &= 0x7F3C630FL;
                }

                            }
            if (p_8)
                continue;
            if ((((*g_474) = (*g_474)) == &l_695))
            {
                union U0 *l_815 = &g_171[0];
                int *l_816 = (void*)0;
                int *l_817 = (void*)0;
                g_61 ^= (l_813 , ((*g_143) = ((l_814 , l_815) != (void*)0)));

                ;
            }
            else
            {
                for (g_195.f0 = 0; g_195.f0 < 9; g_195.f0 += 1)
                {
                    g_108[g_195.f0] = (-1L);
                }
                for (g_61 = 15; (g_61 == (-28)); g_61 = safe_sub_func_int32_t_s_s(g_61, 2))
                {
                    for (l_601 = 0; (l_601 < (-27)); l_601--)
                    {
                        int *l_822 = &g_219[6][0].f2;
                        int **l_823 = (void*)0;
                        int **l_824 = &l_822;
                        (*l_824) = l_822;
                    }
                }
            }
        }



        ;
        return p_8;
    }
    l_836[0][7][8] ^= ((func_40(g_80, ((*l_630) = func_17(l_825, func_17(((*l_834) = ((*g_528) = ((((safe_lshift_func_int8_t_s_u((*p_10), (safe_mod_func_int32_t_s_s((0L != p_8), (safe_mul_func_int16_t_s_s(p_8, (safe_sub_func_int8_t_s_s(l_668, (g_108[0] < p_8))))))))) | g_11[0][0][0]) , 0x50L) , l_825))), (*l_630), &g_108[2], p_10, p_9), p_10, (*l_630), p_9)), l_608[6]) , p_8) | g_369);


    ;

    (*g_143) |= (l_837 != &l_638);
    return p_8;
}







static char * func_13(char * p_14, char * p_15, int p_16)
{
    int l_429[4][5] = {{0x4758E080L,0x4758E080L,0x24DE1589L,1L,9L},{(-2L),9L,0L,0L,9L},{9L,0x92D0AA21L,(-2L),9L,0L},{1L,9L,0x24DE1589L,9L,1L}};
    union U1 l_430 = {2UL};
    char *l_446 = &g_108[2];
    int l_460 = 1L;
    int *l_463[8][9][3] = {{{&g_61,&g_76,&g_76},{&g_219[6][0].f2,&g_76,&g_219[6][0].f2},{&g_219[6][0].f0,&g_76,&g_61},{&g_76,&g_76,&g_80},{&g_76,&g_219[6][0].f2,&g_80},{&g_219[6][0].f2,&g_80,&g_80},{&g_76,&g_76,&g_80},{&g_76,&g_76,&g_76},{&g_76,&g_80,(void*)0}},{{&g_219[6][0].f2,&g_76,&g_80},{&g_80,&g_80,&g_61},{&g_219[6][0].f2,&g_76,&g_219[6][0].f2},{&g_219[6][0].f2,&g_76,&g_219[6][0].f0},{&g_76,&g_76,&g_76},{&g_219[6][0].f0,&g_219[6][0].f2,&g_219[6][0].f0},{(void*)0,&g_80,&g_219[6][0].f2},{&g_219[6][0].f2,&g_76,&g_61},{&g_76,&g_219[6][0].f2,&g_80}},{{&g_61,(void*)0,(void*)0},{&g_76,&g_219[6][0].f2,&g_76},{&g_219[6][0].f2,&g_76,&g_80},{(void*)0,&g_76,&g_76},{&g_219[6][0].f0,&g_61,&g_61},{&g_76,&g_76,&g_76},{&g_219[6][0].f2,&g_76,&g_61},{&g_219[6][0].f2,&g_219[6][0].f2,&g_219[6][0].f2},{&g_80,(void*)0,&g_76}},{{&g_219[6][0].f2,&g_219[6][0].f2,&g_219[6][0].f2},{&g_76,&g_76,&g_61},{&g_76,&g_80,&g_76},{(void*)0,&g_219[6][0].f2,&g_61},{&g_76,&g_76,&g_76},{(void*)0,&g_76,&g_80},{&g_76,&g_76,&g_76},{&g_76,&g_80,(void*)0},{&g_219[6][0].f2,&g_76,&g_80}},{{&g_80,&g_80,&g_61},{&g_219[6][0].f2,&g_76,&g_219[6][0].f2},{&g_219[6][0].f2,&g_61,&g_76},{&g_80,&g_219[6][0].f2,&g_80},{&g_76,&g_219[6][0].f0,&g_76},{&g_76,&g_76,&g_76},{&g_219[6][0].f2,(void*)0,&g_219[6][0].f2},{&g_219[6][0].f2,&g_219[6][0].f2,&g_76},{&g_61,&g_76,&g_76}},{{&g_219[6][0].f2,&g_76,&g_80},{&g_219[6][0].f2,&g_76,&g_61},{&g_76,&g_80,&g_219[6][0].f2},{&g_76,&g_219[6][0].f2,&g_61},{&g_80,&g_80,&g_76},{&g_219[6][0].f0,&g_76,&g_80},{&g_219[6][0].f2,&g_76,(void*)0},{&g_61,&g_76,&g_76},{(void*)0,&g_219[6][0].f2,(void*)0}},{{&g_76,(void*)0,&g_80},{&g_219[6][0].f2,&g_76,&g_76},{&g_76,&g_219[6][0].f0,&g_61},{&g_219[6][0].f2,&g_219[6][0].f2,&g_219[6][0].f2},{&g_76,&g_61,&g_61},{&g_219[6][0].f2,&g_80,&g_80},{&g_76,&g_61,&g_76},{(void*)0,&g_76,&g_76},{&g_61,&g_61,&g_219[6][0].f2}},{{&g_219[6][0].f2,&g_80,&g_76},{&g_219[6][0].f0,&g_61,&g_76},{&g_80,&g_219[6][0].f2,&g_80},{&g_76,&g_219[6][0].f0,&g_76},{&g_76,&g_76,&g_76},{&g_219[6][0].f2,(void*)0,&g_219[6][0].f2},{&g_219[6][0].f2,&g_219[6][0].f2,&g_76},{&g_80,&g_61,&g_61},{&g_76,&g_219[6][0].f2,&g_76}}};
    int l_526 = 0xAE081F21L;
    int *l_555 = &g_76;
    unsigned short **l_563[9][3] = {{(void*)0,(void*)0,(void*)0},{&g_258,&g_258,&g_258},{&g_258,(void*)0,&g_258},{&g_258,&g_258,&g_258},{(void*)0,(void*)0,(void*)0},{&g_258,&g_258,&g_258},{&g_258,(void*)0,&g_258},{&g_258,&g_258,&g_258},{(void*)0,(void*)0,(void*)0}};
    unsigned char l_580[3][3] = {{2UL,2UL,2UL},{0UL,0UL,0UL},{2UL,2UL,2UL}};
    union U2 **l_593 = &g_135;
    int i, j, k;
    for (g_61 = 0; (g_61 <= 20); g_61 = safe_add_func_uint8_t_u_u(g_61, 1))
    {
        char *l_438 = &g_108[5];
        union U0 l_439[2] = {{0},{0}};
        union U2 l_442 = {0xAC4A36EEL};
        int *l_461 = &l_442.f0;
        union U0 l_472 = {0};
        short **l_477 = (void*)0;
        union U0 *l_525 = &l_439[0];
        union U0 **l_524 = &l_525;
        unsigned char l_554 = 255UL;
        unsigned short l_575 = 65535UL;
        int **l_594 = &g_143;
        int i;
        for (g_195.f4 = 2; (g_195.f4 <= 7); g_195.f4 += 1)
        {
            char l_426[8][9] = {{1L,1L,0x8CL,0x91L,0x8CL,1L,1L,0L,0xD8L},{0x17L,(-4L),0L,0x17L,0L,(-4L),0x17L,0L,0L},{1L,1L,0x8CL,0x91L,0x8CL,1L,1L,0L,0xD8L},{0x17L,(-4L),0L,0x17L,0L,(-4L),0x17L,0L,0L},{1L,1L,0x8CL,0x91L,0x8CL,1L,1L,0L,0xD8L},{0x17L,(-4L),0L,0x17L,0L,(-4L),(-4L),(-9L),(-9L)},{0L,0x25L,(-1L),1L,(-1L),0x25L,0L,0x3DL,(-8L)},{(-4L),0x2DL,0x4FL,(-4L),0x4FL,0x2DL,(-4L),(-9L),(-9L)}};
            union U0 l_431 = {0};
            unsigned short **l_434 = &g_258;
            unsigned short *l_435 = &g_436;
            union U2 **l_444 = (void*)0;
            union U2 l_445 = {0L};
            int *l_469 = (void*)0;
            union U1 *l_515 = (void*)0;
            unsigned l_547 = 0x814998F5L;
            int i, j;
        }

        (*l_594) = l_555;

        ;
    }
    return l_446;


}







static char * func_17(union U0 p_18, char * p_19, char * p_20, char * p_21, char * p_22)
{
    int *l_421 = &g_80;
    g_143 = l_421;

    ;
    return p_19;


}







static char * func_24(union U2 p_25, char p_26, unsigned short p_27, union U0 p_28, char * p_29)
{
    (*g_143) = ((void*)0 == &g_362);
    return &g_45;


}







static char func_30(char * p_31, char * p_32, char * p_33)
{
    unsigned short l_275[6] = {6UL,6UL,6UL,6UL,6UL,6UL};
    unsigned short l_278 = 0x3D7BL;
    int l_291 = 0x2E7B58E8L;
    int l_296 = 0x7A9950C4L;
    short *l_333 = &g_184[0];
    unsigned l_357[1];
    union U2 *l_388 = &g_195;
    int l_416 = 0x5FE1BB9BL;
    int i;
    for (i = 0; i < 1; i++)
        l_357[i] = 0xE41796EBL;
    if (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_195.f2, (g_195.f0 > 254UL))), (safe_lshift_func_uint16_t_u_s(((l_275[1] <= (((l_275[4] != (-1L)) == l_275[1]) <= 0UL)) , (safe_add_func_uint16_t_u_u(((l_278 > l_278) > l_278), l_275[3]))), l_275[1])))) , 0x40F40E80L))
    {
        char l_281 = 0xACL;
        short *l_290 = &g_184[4];
        int *l_292 = &g_61;
        int **l_293 = &g_143;
        int *l_294 = (void*)0;
        int *l_295[9] = {&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76};
        union U2 l_368 = {-1L};
        int i;
        (*l_293) = l_292;

        ;
        if ((l_296 ^= ((*l_292) , (0x70F6B2B4L && ((*g_143) & ((*l_292) > (*l_292)))))))
        {
            unsigned short ***l_297 = &g_257;
            int l_298 = 0xC7D9CDFDL;
            char l_303 = (-1L);
            (*l_293) = func_47((l_297 == &g_257), (l_296 , func_40(l_298, &g_108[5], p_33)), (((((safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(1UL, 0x37L)) == 4L) >= g_80), 0x559AL)) != l_298) | (-1L)) , g_184[0]) , l_291), &l_291, g_87[7]);

            ;
            l_303 &= ((*l_292) ^= 0x9338E5F9L);
        }
        else
        {
            int l_306 = 0x7B3EB1FBL;
            union U0 *l_313 = &g_171[5];
            int *l_317 = &l_306;
            int *l_330 = &g_219[6][0].f0;
            for (g_195.f1 = 0; (g_195.f1 != 2); g_195.f1 = safe_add_func_uint16_t_u_u(g_195.f1, 3))
            {
                return (*g_46);
            }

            (*g_143) ^= (l_306 < g_184[0]);
            if ((safe_lshift_func_uint16_t_u_u(l_296, 12)))
            {
                int l_309 = 0x16BE27C5L;
                l_309 = ((*g_143) = 0xE0D86B51L);
            }
            else
            {
                unsigned l_310 = 0xCE430C6EL;
                int l_322 = 0x2451ADBBL;
                char **l_326[9] = {&g_46,&g_46,&g_46,&g_46,&g_46,&g_46,&g_46,&g_46,&g_46};
                char ***l_325[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                char **l_327[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_327[i] = &g_46;
                if ((l_310 != l_278))
                {
                    for (g_234 = 0; (g_234 > 33); g_234 = safe_add_func_int8_t_s_s(g_234, 6))
                    {
                        union U0 **l_314 = &l_313;
                        (*l_314) = l_313;
                        return (*p_31);
                    }
                }
                else
                {
                    char l_318 = 0xFDL;
                    int l_323 = 0x5D6D75DEL;
                    for (g_61 = 0; (g_61 == 19); ++g_61)
                    {
                        unsigned l_321 = 4294967295UL;
                        l_317 = &g_80;

                        ;
                        if ((*l_292))
                            break;
                        l_323 &= ((l_318 >= (~(safe_lshift_func_uint8_t_u_s((g_234 = l_321), (+(*p_33)))))) , (l_322 &= l_291));
                    }

                    ;
                    for (l_310 = 1; (l_310 <= 8); l_310 += 1)
                    {
                        int *l_324 = &g_76;
                        (*l_293) = l_324;

                        ;
                    }

                    ;
                }

                ;
                ;
                l_327[0] = &p_33;


            }

            ;
            ;
            for (g_61 = 9; (g_61 <= 26); ++g_61)
            {
                unsigned l_339 = 4294967293UL;
                int *l_366 = &g_61;
                unsigned char *l_377 = &g_234;
            }
        }

        ;
        (*g_134) = l_388;

        ;
        l_291 &= (*g_143);
    }
    else
    {
        unsigned l_395[2];
        unsigned short *l_396 = &l_275[1];
        unsigned short ****l_397 = &g_256;
        int l_399 = 0x8CA38CBAL;
        int **l_406 = &g_143;
        unsigned l_408 = 0xBB8548AEL;
        int i;
        for (i = 0; i < 2; i++)
            l_395[i] = 0x5B861159L;
        if ((((*p_33) |= ((255UL == (safe_lshift_func_uint16_t_u_u(0UL, 8))) , ((0x9D40L | (safe_lshift_func_int16_t_s_u((l_399 = ((((safe_mul_func_uint16_t_u_u(l_395[1], (l_395[1] > g_219[6][0].f0))) != (((*l_396) ^= 8UL) , (((*l_397) = &g_257) == (g_398 = &g_257)))) != 4294967295UL) >= l_395[1])), 14))) ^ 7L))) , l_275[1]))
        {
            int *l_402 = &g_219[6][0].f0;
            for (g_61 = (-20); (g_61 >= 25); g_61 = safe_add_func_uint8_t_u_u(g_61, 3))
            {
                unsigned char *l_403 = &g_156;
                unsigned char *l_404 = &g_234;
                int *l_412 = &l_399;
                l_402 = &l_399;

                ;
                if ((0x71AB1AB8L >= (((((0x5950L && g_11[0][0][0]) ^ (l_395[1] > g_219[6][0].f2)) , (*p_32)) == ((*l_404) ^= ((*l_403) = (((void*)0 != (**g_256)) , 255UL)))) , (*l_402))))
                {
                    unsigned l_405 = 1UL;
                    (*l_402) = l_405;
                }
                else
                {
                    int ***l_407 = &l_406;
                    if ((((((*l_407) = l_406) != (void*)0) >= l_275[3]) ^ l_278))
                    {
                        (*l_402) |= l_408;
                    }
                    else
                    {
                        return (*g_46);
                    }
                    for (g_195.f4 = (-14); (g_195.f4 != 7); ++g_195.f4)
                    {
                        int **l_411 = (void*)0;
                        (*g_134) = (*g_134);
                        l_412 = ((*l_406) = (*l_406));

                        ;
                    }

                    ;
                    return (*p_33);
                }
            }

            ;
        }
        else
        {
            int l_413[5][6][8] = {{{(-7L),0xC3397EC0L,0xCFE58925L,0xE990CB86L,(-5L),(-1L),0x9CCC1E15L,0x7BE7A53BL},{5L,0xE990CB86L,0xA7E6444AL,0x94DDC960L,2L,1L,1L,1L},{2L,1L,1L,1L,1L,1L,2L,0x94DDC960L},{(-7L),0xE990CB86L,0x10AE2BAFL,0x7BE7A53BL,0x9CCC1E15L,(-1L),(-5L),0xE990CB86L},{1L,0xC3397EC0L,0xA7E6444AL,0x0D0EFD32L,0x9CCC1E15L,0x94DDC960L,0L,1L},{(-7L),7L,8L,1L,0xA7E6444AL,7L,(-5L),7L}},{{(-7L),1L,1L,1L,(-7L),(-1L),0L,0x544C4648L},{8L,0x7BE7A53BL,0xA7E6444AL,1L,0L,0x71640995L,8L,1L},{0x9CCC1E15L,0x0D0EFD32L,0xA7E6444AL,0xC3397EC0L,1L,7L,0L,0x0D0EFD32L},{0L,0xE990CB86L,1L,0x544C4648L,(-5L),1L,(-5L),0x544C4648L},{0L,0xE990CB86L,0L,0x0D0EFD32L,0L,7L,1L,0xC3397EC0L},{(-7L),0x0D0EFD32L,5L,1L,8L,0x71640995L,0L,1L}},{{(-7L),0x7BE7A53BL,(-1L),0x544C4648L,0L,(-1L),(-7L),1L},{0L,1L,0xA7E6444AL,7L,(-5L),7L,0xA7E6444AL,1L},{0L,0x94DDC960L,5L,0x544C4648L,1L,0x0D0EFD32L,(-5L),1L},{0x9CCC1E15L,0xE990CB86L,3L,1L,0L,(-10L),(-5L),0xC3397EC0L},{8L,1L,5L,0x0D0EFD32L,(-7L),0x71640995L,0xA7E6444AL,0x544C4648L},{(-7L),0x71640995L,0xCFE58925L,7L,0xCFE58925L,0xFD67946DL,1L,(-1L)}},{{0xA7E6444AL,0x71640995L,(-7L),0x0D0EFD32L,5L,1L,8L,0x71640995L},{0xCFE58925L,1L,3L,(-10L),5L,(-1L),1L,7L},{0xA7E6444AL,(-4L),(-1L),0x71640995L,0xCFE58925L,1L,5L,1L},{1L,0x71640995L,0x9CCC1E15L,0x71640995L,1L,0xE990CB86L,8L,7L},{0x10AE2BAFL,0x94DDC960L,0xCFE58925L,(-10L),8L,0xFD67946DL,0x10AE2BAFL,0x71640995L},{0xA7E6444AL,(-1L),0xCFE58925L,0x0D0EFD32L,1L,1L,8L,(-1L)}},{{8L,1L,0x9CCC1E15L,7L,5L,0x7BE7A53BL,5L,7L},{(-1L),1L,(-1L),(-1L),8L,1L,1L,0x0D0EFD32L},{1L,(-1L),3L,0x71640995L,0x10AE2BAFL,0xFD67946DL,8L,(-10L)},{1L,0x94DDC960L,(-7L),7L,8L,0xE990CB86L,1L,0x71640995L},{(-1L),0x71640995L,0xCFE58925L,1L,5L,1L,0xCFE58925L,0x71640995L},{8L,(-1L),0x10AE2BAFL,0x94DDC960L,0xCFE58925L,(-10L),8L,0xFD67946DL}}};
            int i, j, k;
            l_413[0][5][3] |= 0x7DA6F13BL;
            for (l_291 = 6; (l_291 != 28); l_291++)
            {
                return l_416;
            }
        }
        (*g_361) = (*g_361);
    }

    ;
    ;
    for (g_195.f0 = 0; (g_195.f0 <= 7); g_195.f0 += 1)
    {
        int i;
        (*g_143) ^= (((*p_33) = (!(~g_87[g_195.f0]))) >= g_417);
        return (*p_31);
    }

    return (*p_32);
}







static char * func_34(union U2 p_35, char * p_36, char * p_37, unsigned p_38, union U2 p_39)
{
    return &g_108[5];


}







static union U2 func_40(unsigned p_41, char * p_42, char * p_43)
{
    unsigned short l_66 = 1UL;
    short l_67 = 0x9457L;
    int *l_79 = &g_80;
    union U2 l_262 = {0L};
    for (g_45 = 0; (g_45 >= 0); g_45 -= 1)
    {
        unsigned char l_58 = 0x17L;
        int *l_222 = &g_195.f0;
        if (g_11[0][0][2])
            break;
        for (p_41 = 0; (p_41 <= 0); p_41 += 1)
        {
            int *l_59 = (void*)0;
            int *l_60 = &g_61;
            short *l_68 = &l_67;
            int *l_75 = &g_76;
            l_79 = func_47(p_41, func_53((((*l_60) = l_58) < l_58), (safe_mod_func_int8_t_s_s(((((*l_68) = (safe_lshift_func_int8_t_s_u(((l_66 , l_58) , l_67), (+g_45)))) , ((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((*l_75) = g_11[0][0][3]) , (safe_rshift_func_int16_t_s_u(p_41, l_67))), l_66)), p_41)), 3UL)) , g_11[0][0][0])) != p_41), g_11[0][0][2])), l_79, p_41), g_87[3], l_222, p_41);

            return l_262;

                    }
    }
    (*g_143) = ((*p_43) < g_195.f1);
    return l_262;

    }







static int * func_47(short p_48, union U2 p_49, unsigned short p_50, int * p_51, unsigned p_52)
{
    short l_224 = 7L;
    unsigned char *l_249 = &g_234;
    union U1 l_252 = {0x91C9919DL};
    unsigned short *l_255 = &g_195.f1;
    unsigned short **l_254 = &l_255;
    unsigned short ***l_253 = &l_254;
    int l_261 = 0x6DF9734EL;
    (*g_143) = (*g_143);
    if ((safe_unary_minus_func_uint16_t_u(l_224)))
    {
        int **l_225 = &g_143;
        int *l_230 = (void*)0;
        int *l_231 = &g_219[6][0].f2;
        (*p_51) = (*g_143);

        (*l_225) = &g_76;

        ;
        g_234 ^= (g_108[8] >= ((((((**l_225) = (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((0UL > (**l_225)), 0x1CC889B6L)), g_80))) > p_49.f3) <= ((*l_231) = (*p_51))) ^ g_11[0][0][0]) >= (safe_mod_func_int16_t_s_s(g_61, g_11[0][0][0]))));
        for (p_49.f4 = 22; (p_49.f4 != 9); --p_49.f4)
        {
            union U0 **l_237 = (void*)0;
            union U0 *l_239[3];
            union U0 **l_238 = &l_239[1];
            int l_240 = 0x893F3FD8L;
            int i;
            for (i = 0; i < 3; i++)
                l_239[i] = (void*)0;
            (*l_238) = (void*)0;
            (**l_225) &= ((l_240 ^ (+(safe_lshift_func_int8_t_s_s(p_48, 2)))) , l_224);
            (*l_231) = (*g_143);
            (*p_51) ^= (safe_unary_minus_func_int32_t_s((0x76L & g_184[4])));
        }

            }
    else
    {
        short l_246 = 0xAFB2L;
        (*g_143) = (safe_add_func_uint16_t_u_u(l_246, l_246));
        (*g_143) = l_224;
    }

        (*g_143) = ((*p_51) = (((((*l_249) = (safe_rshift_func_uint8_t_u_s(p_50, 3))) == ((safe_mod_func_uint32_t_u_u(p_49.f4, (((l_252 , l_253) != g_256) , (*g_143)))) == (((*g_143) <= (((l_261 = (safe_add_func_uint32_t_u_u(g_195.f4, (p_49.f4 | p_50)))) <= p_52) <= p_52)) > 0x1182L))) , &g_234) != (void*)0));

    return &g_80;


}







static union U2 func_53(char p_54, unsigned char p_55, int * p_56, short p_57)
{
    int l_93 = 0x6E0E3F56L;
    char **l_120 = &g_44[0][4][0];
    int *l_123 = &g_80;
    union U2 l_130 = {0x3068B84FL};
    union U2 *l_157 = &l_130;
    union U0 *l_170 = &g_171[5];
    unsigned l_192 = 4294967295UL;
    union U2 l_221 = {6L};
    for (g_76 = 26; (g_76 > (-14)); g_76 = safe_sub_func_int16_t_s_s(g_76, 1))
    {
        int l_83 = 0x8CFB9963L;
        unsigned *l_84 = (void*)0;
        unsigned *l_85 = (void*)0;
        unsigned *l_86 = &g_87[7];
        union U0 l_94 = {0};
        char *l_107 = &g_108[5];
        union U1 l_158 = {4294967295UL};
        unsigned short *l_177 = &l_130.f1;
        unsigned short **l_176 = &l_177;
        unsigned short ***l_178 = &l_176;
        union U2 l_179 = {0x7CCE436CL};
        union U0 **l_180[6][9][3] = {{{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,(void*)0},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,(void*)0},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170}},{{&l_170,&l_170,&l_170},{&l_170,&l_170,(void*)0},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,(void*)0},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170}},{{&l_170,&l_170,(void*)0},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,(void*)0},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,(void*)0}},{{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,&l_170,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,&l_170,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170}},{{&l_170,(void*)0,&l_170},{&l_170,&l_170,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,&l_170,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170}},{{&l_170,&l_170,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,&l_170,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,(void*)0,&l_170},{&l_170,&l_170,&l_170}}};
        unsigned char *l_183 = &g_156;
        union U0 l_190[10][2][2] = {{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}}}};
        int i, j, k;
        if (l_83)
            break;
    }
    return l_221;

    }





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_184[i], "g_184[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_195.f1, "g_195.f1", print_hash_value);
    transparent_crc(g_195.f3, "g_195.f3", print_hash_value);
    transparent_crc(g_195.f4, "g_195.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_219[i][j].f0, "g_219[i][j].f0", print_hash_value);
            transparent_crc(g_219[i][j].f1, "g_219[i][j].f1", print_hash_value);
            transparent_crc(g_219[i][j].f2, "g_219[i][j].f2", print_hash_value);
            transparent_crc(g_219[i][j].f3, "g_219[i][j].f3", print_hash_value);
            transparent_crc(g_219[i][j].f4, "g_219[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_378.f0, "g_378.f0", print_hash_value);
    transparent_crc(g_378.f1, "g_378.f1", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
