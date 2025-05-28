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
   char * const f0;
   char * f1;
   int f2;
   char * f3;
};


static unsigned g_2[4] = {0x2124F84BL,0x2124F84BL,0x2124F84BL,0x2124F84BL};
static int g_3 = 1L;
static int g_7 = 0x1B055CC2L;
static char *g_31 = (void*)0;
static char g_53 = 9L;
static union U0 g_65[9] = {{0},{0},{0},{0},{0},{0},{0},{0},{0}};
static int g_83[10][2] = {{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L},{(-1L),(-1L)},{0L,(-1L)},{(-1L),0L},{(-1L),(-1L)}};
static short g_89 = 0xDFB9L;
static char *g_104 = &g_53;
static union U0 * const *g_126 = (void*)0;
static int *g_130 = &g_3;
static int **g_129[1] = {&g_130};
static int g_133[4][3] = {{0xEB5AB84AL,0xEB5AB84AL,0xBD50C841L},{0xEB5AB84AL,0xEB5AB84AL,0xBD50C841L},{0xEB5AB84AL,0xEB5AB84AL,0xBD50C841L},{0xEB5AB84AL,0xEB5AB84AL,0xBD50C841L}};
static unsigned char g_157 = 0x15L;
static int g_161 = 0x40B5A963L;
static char **g_209[3][7] = {{&g_104,&g_104,&g_31,&g_31,&g_104,&g_104,&g_31},{&g_104,&g_104,&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_31,&g_31,&g_104,&g_104,&g_31,&g_31}};
static char ***g_208 = &g_209[1][5];
static unsigned char g_222[10][3] = {{0x4BL,0x46L,251UL},{0UL,253UL,0UL},{251UL,0x46L,0x4BL},{0UL,0x7AL,0x4BL},{0xEFL,0UL,0UL},{0UL,0UL,251UL},{0xEFL,251UL,0UL},{0UL,251UL,0xEFL},{251UL,0UL,0UL},{0UL,0UL,0xEFL}};
static const short *g_235 = &g_89;
static const short **g_234 = &g_235;
static unsigned short g_264 = 65535UL;
static unsigned g_271 = 0x423A1251L;
static unsigned short g_275 = 3UL;
static char g_278 = (-1L);
static union U0 ***g_283 = (void*)0;
static char **g_371 = &g_104;
static char *** const g_370[3] = {&g_371,&g_371,&g_371};
static char *** const *g_369 = &g_370[0];
static unsigned g_415 = 0x49663793L;
static int g_470 = 0x78A2D69EL;
static char g_495[10][1] = {{0xCDL},{0xCDL},{0xC7L},{0xCDL},{0xCDL},{0xC7L},{0xCDL},{0xCDL},{0xC7L},{0xCDL}};
static union U0 g_586 = {0};
static const union U0 *g_585 = &g_586;
static unsigned *g_601 = &g_2[2];
static unsigned **g_600 = &g_601;
static unsigned ***g_599 = &g_600;
static unsigned g_664[4] = {1UL,1UL,1UL,1UL};
static short g_698 = 0xEC73L;
static int *g_709 = &g_470;
static int **g_708[2][3] = {{&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709}};
static const int *g_815 = &g_3;
static unsigned char g_882 = 0UL;
static char g_883 = 0x13L;
static union U0 ****g_901 = &g_283;
static int g_959 = 0xBC6EECE5L;



static unsigned func_1(void);
static int * func_8(short p_9, int p_10, const int * p_11, unsigned char p_12, unsigned char p_13);
static const int * func_15(unsigned p_16, short p_17, char * p_18, int * const p_19);
static char * func_32(char * p_33, short p_34, int * p_35, const unsigned short p_36, const unsigned p_37);
static int * func_39(int p_40);
static union U0 * func_41(int * p_42, short p_43);
static int * func_44(char * p_45);
static char * func_46(int p_47, char * p_48, char * p_49, union U0 * p_50, int p_51);
static union U0 * func_54(char * p_55, const unsigned p_56, unsigned char p_57);
static char * func_58(union U0 * p_59, unsigned p_60, short p_61, int p_62, unsigned short p_63);
static unsigned func_1(void)
{
    unsigned char l_38 = 0UL;
    char l_886 = 0x4DL;
    int *l_887[2];
    unsigned short l_983[2];
    int l_1022[9][9][2] = {{{0x004C21B1L,0x9FDD4B00L},{0x9FDD4B00L,0x6314EC4FL},{1L,0L},{0x4F4906E2L,0x7B3E50B1L},{0x375F601FL,6L},{0x5C0498F7L,1L},{0x84487F3EL,1L},{0x7B3E50B1L,6L},{0x9FDD4B00L,(-1L)}},{{0x4F4906E2L,0x7DC4AF23L},{0x9FEECF4AL,0x4F4906E2L},{(-1L),0x08B4BF6FL},{(-3L),0L},{0x7B3E50B1L,(-7L)},{1L,(-1L)},{(-1L),1L},{0L,0x004C21B1L},{0x22953E8FL,1L}},{{(-1L),(-1L)},{1L,(-7L)},{(-1L),0x3A83ED6DL},{(-3L),(-1L)},{0x08B4BF6FL,0x4F4906E2L},{0x3A83ED6DL,(-1L)},{0xDF1E0BD9L,1L},{(-1L),0x79048EADL},{1L,0x22953E8FL}},{{0xF4172C9BL,0x22953E8FL},{1L,0x79048EADL},{(-1L),1L},{0xDF1E0BD9L,(-1L)},{0x3A83ED6DL,0x4F4906E2L},{0x08B4BF6FL,(-1L)},{(-3L),0x3A83ED6DL},{(-1L),(-7L)},{1L,(-1L)}},{{(-1L),1L},{0x22953E8FL,0x004C21B1L},{0L,1L},{(-1L),(-1L)},{1L,(-7L)},{0x7B3E50B1L,0L},{(-3L),0x08B4BF6FL},{(-1L),0x4F4906E2L},{0x22953E8FL,0x5C0498F7L}},{{0xDF1E0BD9L,1L},{(-1L),0x79048EADL},{0x9FEECF4AL,0x3A83ED6DL},{0xF4172C9BL,0L},{1L,0x79048EADL},{0x08B4BF6FL,0x9FEECF4AL},{0xDF1E0BD9L,0x7B3E50B1L},{0L,0x4F4906E2L},{(-1L),(-1L)}},{{(-3L),0x22953E8FL},{0x5C0498F7L,(-7L)},{0x9FEECF4AL,0x08B4BF6FL},{(-1L),0x9FEECF4AL},{0x3A83ED6DL,4L},{0xF4172C9BL,1L},{0x40D13B57L,0xDF1E0BD9L},{1L,0x5135BD21L},{(-1L),0x004C21B1L}},{{0xA7A98340L,(-7L)},{(-7L),0xBACF5ADFL},{0x6314EC4FL,0x0AD040EFL},{0x194D38A7L,1L},{0xDF1E0BD9L,(-8L)},{0L,0x6314EC4FL},{0xC952202DL,0xF4172C9BL},{1L,(-8L)},{(-7L),0x84487F3EL}},{{0x194D38A7L,(-1L)},{0x004C21B1L,0xBACF5ADFL},{(-1L),0xDF1E0BD9L},{0xA7A98340L,0x6314EC4FL},{0x0AD040EFL,0x5135BD21L},{0L,(-1L)},{0x40D13B57L,0L},{0x6314EC4FL,4L},{0x004C21B1L,0x84487F3EL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_887[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_983[i] = 0xEB0EL;
    if (g_2[1])
    {
        unsigned short l_14 = 1UL;
        int * const l_24[9][8][3] = {{{(void*)0,(void*)0,&g_3},{&g_3,&g_3,(void*)0},{&g_3,(void*)0,&g_3},{&g_7,&g_7,&g_7},{(void*)0,&g_7,&g_7},{&g_7,&g_3,&g_3},{&g_3,&g_7,(void*)0},{&g_7,&g_7,&g_3}},{{&g_3,&g_7,&g_3},{&g_7,&g_7,&g_7},{(void*)0,&g_7,&g_3},{&g_7,&g_7,&g_7},{&g_3,&g_7,&g_7},{&g_3,&g_7,&g_7},{(void*)0,&g_3,&g_3},{&g_3,&g_7,&g_7}},{{&g_3,&g_7,&g_7},{&g_7,&g_3,&g_3},{&g_7,&g_7,&g_3},{&g_7,&g_3,&g_7},{&g_3,&g_7,&g_3},{&g_3,&g_3,&g_3},{&g_7,(void*)0,&g_7},{&g_7,&g_3,&g_3}},{{&g_3,&g_7,&g_3},{&g_7,&g_3,&g_7},{&g_7,&g_7,&g_7},{&g_3,&g_7,(void*)0},{&g_3,&g_3,&g_7},{&g_7,&g_7,(void*)0},{&g_7,&g_3,&g_7},{&g_7,(void*)0,(void*)0}},{{(void*)0,&g_3,&g_7},{(void*)0,&g_7,&g_7},{&g_7,&g_3,&g_3},{&g_7,&g_7,&g_3},{&g_7,&g_3,&g_7},{&g_3,&g_7,&g_3},{&g_3,&g_3,&g_3},{&g_7,(void*)0,&g_7}},{{&g_7,&g_3,&g_3},{&g_3,&g_7,&g_3},{&g_7,&g_3,&g_7},{&g_7,&g_7,&g_7},{&g_3,&g_7,(void*)0},{&g_3,&g_3,&g_7},{&g_7,&g_7,(void*)0},{&g_7,&g_3,&g_7}},{{&g_7,(void*)0,(void*)0},{&g_3,(void*)0,&g_7},{&g_3,&g_7,&g_7},{&g_3,&g_3,(void*)0},{&g_7,&g_7,&g_7},{&g_7,&g_3,&g_7},{&g_7,&g_7,&g_7},{&g_3,(void*)0,&g_7}},{{&g_3,(void*)0,&g_7},{&g_7,&g_7,&g_7},{(void*)0,&g_3,(void*)0},{&g_7,&g_7,&g_7},{&g_3,&g_3,&g_7},{&g_3,&g_3,(void*)0},{&g_7,&g_7,&g_3},{&g_7,&g_3,&g_3}},{{&g_7,&g_7,&g_3},{&g_3,(void*)0,(void*)0},{&g_3,(void*)0,&g_7},{&g_3,&g_7,&g_7},{&g_3,&g_3,(void*)0},{&g_7,&g_7,&g_7},{&g_7,&g_3,&g_7},{&g_7,&g_7,&g_7}}};
        int * const l_496 = &g_3;
        int *l_888[4] = {&g_133[1][1],&g_133[1][1],&g_133[1][1],&g_133[1][1]};
        int i, j, k;
        for (g_3 = (-2); (g_3 != (-18)); --g_3)
        {
            int *l_6 = &g_7;
            int l_493 = (-9L);
            char *l_494 = &g_495[4][0];
            int **l_885 = &l_6;
            (*l_6) = 0xB3F36565L;
        }

        (*g_130) = (*g_815);
        l_888[0] = l_887[0];


    }
    else
    {
        char l_895 = 0x54L;
        short *l_918[2];
        short **l_917 = &l_918[1];
        short ***l_919 = &l_917;
        int *l_926 = &g_133[3][2];
        int l_976 = 2L;
        unsigned char l_984 = 1UL;
        int i;
        for (i = 0; i < 2; i++)
            l_918[i] = &g_89;
        for (g_275 = 0; (g_275 < 60); g_275 = safe_add_func_int8_t_s_s(g_275, 2))
        {
            unsigned short *l_893 = (void*)0;
            unsigned short *l_894[8][4] = {{&g_264,&g_264,&g_275,(void*)0},{(void*)0,&g_275,&g_264,&g_264},{&g_275,&g_264,&g_264,&g_275},{(void*)0,&g_275,&g_275,&g_275},{&g_264,&g_264,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275},{&g_264,&g_275,&g_264,(void*)0},{&g_264,&g_264,&g_275,&g_275}};
            int i, j;
            (*g_130) |= (~((safe_mod_func_uint16_t_u_u((g_264 = g_2[1]), g_698)) < (l_895 >= (**g_600))));
        }
        for (g_161 = 3; (g_161 >= 0); g_161 -= 1)
        {
            union U0 ****l_900 = (void*)0;
            int l_904[4][1] = {{0L},{(-1L)},{0L},{(-1L)}};
            unsigned l_913 = 0UL;
            int i, j;
            (*g_130) |= ((safe_add_func_uint16_t_u_u(l_895, (**g_234))) && ((safe_lshift_func_uint8_t_u_s((l_900 == (g_901 = &g_283)), 0)) || g_495[4][0]));
            (*g_130) = (safe_lshift_func_uint16_t_u_u(g_157, (((**g_600) | (*g_815)) <= (*g_235))));
            for (g_882 = 0; (g_882 <= 3); g_882 += 1)
            {
                unsigned short l_914 = 65526UL;
                unsigned char *l_915 = &l_38;
                unsigned char *l_916[3][1][8] = {{{&g_157,&g_157,&g_882,&g_157,&g_157,&g_882,&g_157,&g_157}},{{&g_882,&g_157,&g_882,&g_882,&g_157,&g_882,&g_882,&g_157}},{{&g_157,&g_882,&g_882,&g_157,&g_882,&g_882,&g_157,&g_882}}};
                int i, j, k;
                l_887[0] = func_8(l_895, l_904[0][0], l_887[0], (g_222[8][2] = (safe_mod_func_uint8_t_u_u(l_895, (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0L, (g_2[g_882] |= l_904[0][0]))), g_698))))), (g_157 = ((*l_915) = ((2UL > (safe_mod_func_uint16_t_u_u(l_913, l_914))) <= l_914))));
            }
        }


        (*l_919) = l_917;
        for (g_7 = 0; (g_7 < (-23)); g_7 = safe_sub_func_uint8_t_u_u(g_7, 7))
        {
            unsigned char *l_922 = (void*)0;
            unsigned char *l_923 = &g_157;
            int l_924 = 0x84425C0BL;
            int **l_967[2][7][10] = {{{(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709,&g_709,(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709}},{{(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709,(void*)0,&g_709},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,(void*)0},{&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{&g_709,&g_709,(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709},{(void*)0,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709,&g_709}}};
            int ***l_968 = &g_708[1][1];
            int l_969 = 0x0E8EAE78L;
            int i, j, k;
        }
    }


    l_1022[3][8][0] &= (*g_130);
    return (**g_600);
}







static int * func_8(short p_9, int p_10, const int * p_11, unsigned char p_12, unsigned char p_13)
{
    int *l_884 = &g_83[0][1];
    (*l_884) = (+(&g_283 != &g_283));
    return l_884;


}







static const int * func_15(unsigned p_16, short p_17, char * p_18, int * const p_19)
{
    int l_497 = 0x91D6E6C1L;
    const unsigned l_503[5] = {1UL,1UL,1UL,1UL,1UL};
    int *l_564 = &g_133[2][0];
    const union U0 *l_583 = (void*)0;
    union U0 ***l_607 = (void*)0;
    unsigned l_611[6][8][1] = {{{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL}},{{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL}},{{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL}},{{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL}},{{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL}},{{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL},{0x2C2E9884L},{1UL}}};
    unsigned char l_645 = 0x31L;
    unsigned l_663 = 0xDF472566L;
    int l_687 = 9L;
    char l_688[8][7] = {{(-9L),0xA0L,(-9L),0xA0L,(-9L),0xA0L,(-9L)},{0xA6L,0xA6L,(-1L),(-1L),0xA6L,0xA6L,(-1L)},{5L,0xA0L,5L,0xA0L,5L,0xA0L,5L},{0xA6L,(-1L),(-1L),0xA6L,0xA6L,(-1L),(-1L)},{(-9L),0xA0L,(-9L),0xA0L,(-9L),0xA0L,(-9L)},{0xA6L,0xA6L,(-1L),(-1L),0xA6L,0xA6L,(-1L)},{5L,0xA0L,5L,0xA0L,5L,0xA0L,5L},{0xA6L,(-1L),(-1L),0xA6L,0xA6L,(-1L),(-1L)}};
    short *l_689 = &g_89;
    short **l_695[3][8] = {{&l_689,&l_689,&l_689,&l_689,&l_689,&l_689,&l_689,&l_689},{&l_689,&l_689,&l_689,&l_689,&l_689,&l_689,&l_689,&l_689},{&l_689,&l_689,&l_689,&l_689,&l_689,&l_689,&l_689,&l_689}};
    short ***l_694 = &l_695[2][3];
    short *l_697 = &g_698;
    short **l_696 = &l_697;
    int *l_699 = &g_83[8][1];
    char ****l_704 = &g_208;
    int *l_706[6][4][3] = {{{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470},{&g_470,&g_470,(void*)0}},{{&g_470,&g_470,(void*)0},{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470}},{{&g_470,&g_470,(void*)0},{&g_470,&g_470,(void*)0},{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470}},{{&g_470,&g_470,&g_470},{&g_470,&g_470,(void*)0},{&g_470,&g_470,(void*)0},{&g_470,&g_470,&g_470}},{{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470},{&g_470,&g_470,(void*)0},{&g_470,&g_470,(void*)0}},{{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470}}};
    int **l_705 = &l_706[4][3][0];
    int l_722 = 0x0B25219CL;
    int * const *l_726 = &l_699;
    unsigned short *l_759 = &g_264;
    short *l_806 = &g_89;
    const char l_845[4] = {(-1L),(-1L),(-1L),(-1L)};
    int *l_879 = &g_133[3][2];
    int *l_880 = &g_161;
    const int *l_881 = (void*)0;
    int i, j, k;
    if (l_497)
    {
        unsigned short l_498 = 3UL;
        int l_504 = (-8L);
        char *l_505[3][1][2] = {{{&g_495[3][0],&g_495[4][0]}},{{&g_495[3][0],&g_495[3][0]}},{{&g_495[4][0],&g_495[3][0]}}};
        int **l_506 = &g_130;
        int i, j, k;
        l_504 = (((8L | ((l_497 = (l_498 || 0x16L)) < (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_498, p_17)), g_89)))) ^ ((*p_18) | (*p_18))) < (((l_503[2] < g_278) && 6L) ^ 1L));
        (*l_506) = func_44(l_505[1][0][0]);

        ;
    }
    else
    {
        int *l_508 = &g_3;
        int l_519 = 0x29A58EB4L;
        unsigned short l_527 = 65535UL;
        int l_530 = 1L;
        unsigned short l_550 = 65535UL;
        short l_560 = 0x53D0L;
        int *l_572 = (void*)0;
        unsigned ***l_598 = (void*)0;
        int **l_604 = &l_508;
        short *l_608 = &g_89;
        unsigned char l_640[9][9] = {{255UL,0UL,0UL,255UL,255UL,253UL,0x68L,0UL,253UL},{248UL,0UL,0x25L,0x68L,0xCAL,0xCAL,0x68L,0x25L,0UL},{0x68L,255UL,0x25L,4UL,255UL,0UL,0x87L,0x25L,0x25L},{248UL,0xCAL,0UL,4UL,0UL,0xCAL,248UL,0UL,0x25L},{255UL,255UL,253UL,0x68L,0UL,253UL,0x87L,253UL,0UL},{255UL,0UL,0UL,255UL,255UL,253UL,0x68L,0UL,253UL},{248UL,0UL,0x25L,0x68L,0xCAL,0xCAL,0x68L,0x25L,0UL},{0x68L,255UL,0x25L,4UL,255UL,0UL,0x87L,0x25L,0x25L},{248UL,0xCAL,0UL,4UL,0UL,0xCAL,248UL,0UL,0x25L}};
        unsigned l_667 = 0x18590FC7L;
        int i, j;
        if (l_497)
        {
            unsigned short l_507 = 65526UL;
            int **l_509 = &l_508;
            (*l_509) = l_508;
        }
        else
        {
            short l_518[3];
            int l_528[7] = {(-8L),0xE73C3EBBL,0x7A02C6AAL,0xE73C3EBBL,0x7A02C6AAL,0x7A02C6AAL,0xE73C3EBBL};
            unsigned char *l_529 = (void*)0;
            char *l_531 = &g_278;
            unsigned char *l_536 = &g_222[4][2];
            unsigned *l_544 = (void*)0;
            unsigned ** const l_543[9][7][4] = {{{&l_544,&l_544,&l_544,(void*)0},{&l_544,&l_544,&l_544,(void*)0},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,(void*)0,&l_544},{(void*)0,(void*)0,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{(void*)0,&l_544,(void*)0,&l_544}},{{&l_544,(void*)0,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,(void*)0},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,(void*)0},{&l_544,&l_544,&l_544,&l_544}},{{&l_544,&l_544,(void*)0,&l_544},{&l_544,(void*)0,(void*)0,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,(void*)0,&l_544,&l_544},{&l_544,&l_544,(void*)0,&l_544},{&l_544,&l_544,(void*)0,(void*)0}},{{&l_544,&l_544,&l_544,(void*)0},{&l_544,&l_544,&l_544,&l_544},{(void*)0,&l_544,(void*)0,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,(void*)0,&l_544},{&l_544,&l_544,&l_544,&l_544}},{{&l_544,(void*)0,&l_544,&l_544},{&l_544,&l_544,(void*)0,(void*)0},{&l_544,&l_544,(void*)0,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,(void*)0},{&l_544,(void*)0,(void*)0,&l_544},{&l_544,&l_544,&l_544,&l_544}},{{&l_544,(void*)0,&l_544,(void*)0},{&l_544,&l_544,(void*)0,(void*)0},{(void*)0,(void*)0,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,(void*)0,&l_544,(void*)0},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544}},{{&l_544,&l_544,&l_544,(void*)0},{&l_544,&l_544,&l_544,&l_544},{&l_544,(void*)0,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{(void*)0,&l_544,&l_544,&l_544}},{{(void*)0,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,(void*)0,&l_544},{&l_544,&l_544,(void*)0,&l_544}},{{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,&l_544,&l_544,&l_544},{&l_544,(void*)0,&l_544,(void*)0},{(void*)0,&l_544,&l_544,(void*)0},{(void*)0,(void*)0,&l_544,&l_544}}};
            int **l_589 = &l_508;
            int *l_590[7][5][7] = {{{&g_7,&g_133[3][2],&g_83[1][1],&l_497,&g_83[0][1],&l_497,&g_83[1][1]},{(void*)0,(void*)0,&g_133[1][2],&g_133[3][2],&g_83[2][1],&g_133[0][2],&l_530},{&g_133[2][1],&l_497,&l_497,&g_7,&g_133[3][2],&l_497,&g_7},{&g_161,&g_7,&g_133[1][2],&g_133[3][2],&g_83[2][1],&g_133[0][0],&g_83[8][0]},{&g_83[8][0],&g_133[0][2],&g_133[1][2],&g_133[3][2],&g_133[3][2],&g_83[8][0],&l_497}},{{&l_497,&l_530,&g_133[3][2],&g_7,&g_133[3][2],&g_83[1][1],&l_497},{&l_497,&g_161,(void*)0,&g_133[0][2],&g_133[0][2],(void*)0,&g_161},{&g_7,(void*)0,&l_530,&g_133[3][2],&g_133[1][2],&g_83[0][1],&g_133[3][2]},{&g_133[1][2],&l_497,&g_133[3][2],&g_83[8][0],(void*)0,&g_133[0][0],&g_161},{&g_83[8][0],&g_133[3][2],&l_530,&g_133[3][2],&l_530,&g_161,&g_7}},{{&l_530,&g_161,&g_133[3][2],&g_133[0][2],&g_133[0][0],&l_530,&g_83[1][1]},{&l_530,&g_83[8][0],&g_133[0][0],&g_7,&g_133[0][0],&l_530,&g_83[1][1]},{&g_7,&g_3,&g_83[1][1],&g_133[3][2],&g_83[1][1],&g_3,&g_7},{&g_83[8][0],&g_83[2][1],&l_497,(void*)0,&l_530,&g_7,&g_161},{&g_133[3][2],&g_83[8][0],&g_83[2][1],&l_497,&g_7,&l_497,&g_133[3][2]}},{{&l_497,&g_83[8][0],&l_497,&g_7,&g_83[8][0],(void*)0,&g_161},{(void*)0,&l_530,&g_83[1][1],&l_530,&g_133[1][2],&g_133[3][2],&l_497},{&g_133[3][2],&l_497,&g_133[0][0],(void*)0,&g_7,(void*)0,&g_83[8][0]},{&g_133[3][2],&g_133[2][1],&g_133[0][0],&g_133[0][0],&g_133[2][1],&g_133[3][2],&l_530},{&g_133[3][2],&g_133[1][2],&g_133[1][2],&g_133[2][1],(void*)0,&l_530,&g_83[8][0]}},{{&g_83[0][1],&g_133[0][0],(void*)0,&l_530,&g_133[3][2],&g_83[2][1],&l_497},{(void*)0,&g_133[1][2],&l_497,&l_530,&l_530,&l_530,&l_530},{&g_161,&g_133[2][1],&g_133[3][2],(void*)0,&g_161,&g_133[1][2],&g_7},{&g_83[8][0],&l_530,(void*)0,&g_133[1][2],&g_161,&g_133[2][1],&g_133[2][1]},{&l_530,&l_497,&g_133[1][2],&l_497,&l_530,&g_83[0][1],&g_3}},{{&g_133[0][0],&g_161,&g_83[8][0],&l_497,&g_133[3][2],&g_133[3][2],&g_133[0][2]},{&l_530,&l_530,&g_133[3][2],&g_83[8][0],(void*)0,&l_530,&g_83[8][0]},{&g_133[0][0],&l_497,&g_83[8][0],&g_161,&g_133[2][1],&g_133[3][2],(void*)0},{&l_530,&l_530,&l_530,(void*)0,&g_133[3][2],(void*)0,&g_133[3][2]},{&g_83[8][0],&l_530,&l_497,(void*)0,&g_133[1][2],&l_530,&g_133[1][2]}},{{&g_161,&g_83[0][1],&g_83[0][1],&g_161,&l_530,&g_7,&l_530},{(void*)0,&g_161,(void*)0,&g_3,&g_83[8][0],&l_530,&l_530},{&g_133[3][2],&l_497,&g_83[8][0],&l_530,&l_497,&g_161,&g_133[3][2]},{&g_83[0][1],&g_133[1][2],&l_497,(void*)0,&l_530,&l_497,&g_83[8][0]},{&g_133[1][2],&g_83[1][1],&g_133[1][2],&g_83[8][0],&g_7,&l_530,&g_83[0][1]}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_518[i] = 0L;
            if ((l_497 = (g_53 && (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_518[1], l_503[3])), l_519)), (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s(g_53, ((l_530 = (l_528[1] ^= l_527)) != (*p_18)))))), ((*l_531) = l_518[2]))) > ((((*l_536) &= (safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(((((void*)0 == &l_531) && l_518[1]) & l_518[1]), 0x15BB668DL)) || g_264) && (*g_235)) >= p_16), g_275))) <= l_503[2]) & (*l_508))), p_16)))) > (*l_508)), p_17)))))
            {
                unsigned l_537 = 0UL;
                int *l_540 = &g_133[1][1];
                (*l_540) ^= ((l_537 != (safe_mod_func_int8_t_s_s((*l_508), l_537))) && 0xAD67L);
                for (g_470 = 12; (g_470 == 6); g_470 = safe_sub_func_uint32_t_u_u(g_470, 2))
                {
                    if ((p_17 || 0x99L))
                    {
                        unsigned ***l_545 = (void*)0;
                        unsigned **l_547 = &l_544;
                        unsigned ***l_546 = &l_547;
                        (*l_546) = l_543[2][4][0];

                        ;
                        return l_544;


                    }
                    else
                    {
                        int l_557[6][3][2] = {{{0xFAEE3562L,0x498C6C65L},{0xFAEE3562L,0xFAEE3562L},{0x498C6C65L,0xFAEE3562L}},{{0xFAEE3562L,0x498C6C65L},{0xFAEE3562L,0xFAEE3562L},{0x498C6C65L,0xFAEE3562L}},{{0xFAEE3562L,0x498C6C65L},{0xFAEE3562L,0xFAEE3562L},{0x498C6C65L,0xFAEE3562L}},{{0xFAEE3562L,0x498C6C65L},{0xFAEE3562L,0xFAEE3562L},{0x498C6C65L,0xFAEE3562L}},{{0xFAEE3562L,0x498C6C65L},{0xFAEE3562L,0xFAEE3562L},{0x498C6C65L,0xFAEE3562L}},{{0xFAEE3562L,0x498C6C65L},{0xFAEE3562L,0xFAEE3562L},{0x498C6C65L,0xFAEE3562L}}};
                        int i, j, k;
                        l_550 |= ((safe_add_func_int8_t_s_s(((*l_531) = (*l_540)), 0x17L)) < g_89);
                        (*l_540) = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((*p_18), (l_497 &= ((*l_531) = (safe_sub_func_uint16_t_u_u(l_557[2][1][1], (*g_235))))))), p_17));
                        return l_544;


                    }
                }
                for (l_527 = 0; (l_527 == 39); l_527 = safe_add_func_uint8_t_u_u(l_527, 7))
                {
                    for (g_7 = 0; (g_7 <= 2); g_7 += 1)
                    {
                        return l_544;


                    }
                    if ((*p_19))
                    {
                        (*l_540) |= (*p_19);
                    }
                    else
                    {
                        int l_561 = 0L;
                        (*l_540) &= 0xF954569EL;
                        (*l_540) ^= l_560;
                        (*l_540) &= (p_17 < l_561);
                    }
                    if (l_528[1])
                        continue;
                }
            }
            else
            {
                unsigned l_562 = 1UL;
                int *l_563 = &g_83[8][1];
                for (g_278 = 0; (g_278 <= 2); g_278 += 1)
                {
                    for (g_470 = 0; (g_470 <= 2); g_470 += 1)
                    {
                        int i;
                        l_562 ^= ((void*)0 != &l_518[g_278]);
                    }
                }
                (*l_563) = (*p_19);
                l_564 = p_19;

                ;
            }

            ;
            if ((*p_19))
            {
                short l_575 = 0xCF32L;
                int **l_579 = &l_508;
                for (l_497 = 9; (l_497 > 26); l_497 = safe_add_func_int32_t_s_s(l_497, 6))
                {
                    int *l_567 = &g_83[8][0];
                    int *l_571 = &g_470;
                    int **l_570[5][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_571,&l_571},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_571},{&l_571,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&l_571,&l_571},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_571},{&l_571,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&l_571,&l_571},{&l_571,(void*)0},{(void*)0,(void*)0},{&l_571,(void*)0},{(void*)0,&l_571},{(void*)0,(void*)0},{(void*)0,&l_571},{(void*)0,(void*)0}},{{&l_571,(void*)0},{(void*)0,(void*)0},{&l_571,(void*)0},{(void*)0,&l_571},{(void*)0,(void*)0},{(void*)0,&l_571},{(void*)0,(void*)0},{&l_571,(void*)0}},{{(void*)0,(void*)0},{&l_571,(void*)0},{(void*)0,&l_571},{(void*)0,(void*)0},{(void*)0,&l_571},{(void*)0,(void*)0},{&l_571,(void*)0},{(void*)0,(void*)0}}};
                    int i, j, k;
                    (*l_567) ^= (*p_19);
                    if ((safe_rshift_func_int8_t_s_s((((*l_508) > p_17) && (&l_519 != (l_572 = l_564))), ((*p_19) == ((safe_add_func_int16_t_s_s((-5L), (!l_528[1]))) | l_575)))))
                    {
                        (*l_567) = (safe_sub_func_int16_t_s_s(l_528[6], 5L));
                    }
                    else
                    {
                        const int *l_578 = &g_7;
                        return l_578;


                    }
                }

                ;
                (*l_579) = p_19;
            }
            else
            {
                int *l_580 = &l_530;
                (*l_580) = (*l_508);
                for (g_470 = 0; (g_470 > (-9)); g_470--)
                {
                    const union U0 **l_584[9][8][3] = {{{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583}},{{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{&l_583,&l_583,&l_583},{(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583}},{{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{&l_583,(void*)0,&l_583},{(void*)0,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583}},{{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{&l_583,(void*)0,&l_583},{(void*)0,&l_583,&l_583}},{{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583}},{{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{&l_583,(void*)0,&l_583},{(void*)0,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583}},{{(void*)0,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{(void*)0,&l_583,&l_583}},{{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583},{(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583},{&l_583,&l_583,&l_583}},{{(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583},{(void*)0,&l_583,&l_583},{(void*)0,&l_583,&l_583},{&l_583,(void*)0,&l_583},{&l_583,&l_583,&l_583},{(void*)0,(void*)0,&l_583},{&l_583,&l_583,&l_583}}};
                    int i, j, k;
                    g_585 = l_583;

                    ;
                }

                ;
                for (g_278 = 7; (g_278 != (-19)); g_278 = safe_sub_func_int16_t_s_s(g_278, 1))
                {
                    if ((*p_19))
                        break;
                }
            }

            ;
            ;
            (*l_589) = p_19;
            l_530 = (g_470 >= (-6L));
        }

        ;
        ;
        ;
        for (g_157 = 24; (g_157 < 49); g_157++)
        {
            int *l_595 = (void*)0;
            int l_602 = 0L;
            int *l_603 = &g_83[8][0];
            (*l_603) &= (safe_mod_func_int8_t_s_s((*l_564), ((((&g_470 == l_595) & ((safe_mod_func_int16_t_s_s(((p_17 ^ (g_222[4][2] | ((*l_564) || ((l_598 != g_599) || ((((((*l_508) && p_17) || 6L) || 65535UL) ^ (*l_564)) <= 0x5BL))))) & (*l_564)), (*l_564))) < (**g_600))) == l_602) && p_17)));
        }
        (*l_604) = &l_497;

        ;
        if (((safe_rshift_func_int16_t_s_s((0xBA30L & p_17), 13)) & ((*l_608) = (l_607 == (void*)0))))
        {
            short l_635 = 0x9F3FL;
            for (l_519 = 0; (l_519 <= (-24)); l_519 = safe_sub_func_int8_t_s_s(l_519, 2))
            {
                int l_612 = 0L;
            }
            for (p_17 = 0; (p_17 < (-2)); p_17 = safe_sub_func_int16_t_s_s(p_17, 7))
            {
            }
            for (g_157 = 0; (g_157 < 16); g_157++)
            {
                unsigned l_634 = 0x35155014L;
                int l_646 = (-1L);
                const unsigned * const l_660[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                const unsigned * const *l_659 = &l_660[0];
                int i;
            }
        }
        else
        {
            unsigned short l_672 = 0xEF47L;
            (*l_508) = l_672;
            (**l_604) = (g_3 && (*g_235));
            (*l_508) = (&p_19 != (void*)0);
            for (p_16 = 12; (p_16 > 32); ++p_16)
            {
                unsigned l_683 = 0UL;
                for (l_519 = 0; (l_519 >= 0); l_519 -= 1)
                {
                    unsigned char l_680[8] = {1UL,255UL,1UL,1UL,255UL,1UL,1UL,255UL};
                    int l_684 = 0L;
                    int i;
                    for (l_530 = 0; (l_530 <= 0); l_530 += 1)
                    {
                        unsigned char *l_679 = &g_222[9][2];
                        int i, j;
                        l_684 |= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(0x0E00L, ((void*)0 != &g_369))) || g_495[(l_519 + 8)][l_530]), ((((l_680[2] &= (((*l_508) &= ((*l_679) = g_133[3][2])) > (*l_564))) != (safe_lshift_func_uint16_t_u_s(p_17, l_683))) ^ ((l_683 < (*p_19)) < (*p_18))) | 0x264D60C7L)));
                        (**l_604) ^= 0x232DE515L;
                    }
                }
                (**l_604) &= (65532UL & (&g_126 != (void*)0));
            }
        }
    }

    ;
    ;
    (*l_699) &= (((*l_689) = ((g_271 | (((!(safe_rshift_func_int16_t_s_s((*l_564), 5))) >= (*l_564)) <= l_687)) & l_688[5][6])) >= (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((&l_689 == (l_696 = ((*l_694) = &l_689))), (p_18 != (void*)0))), (*l_564))));

    ;
    if ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_495[8][0], (*p_18))), (l_704 == &g_208))))
    {
        char *** const *l_717 = (void*)0;
        const char **l_720 = (void*)0;
        const char ***l_719 = &l_720;
        const char ****l_718 = &l_719;
        int l_723 = (-4L);
        int l_756 = (-7L);
        const int *l_797 = (void*)0;
        if ((*p_19))
        {
            for (g_271 = 0; g_271 < 10; g_271 += 1)
            {
                for (p_16 = 0; p_16 < 1; p_16 += 1)
                {
                    g_495[g_271][p_16] = 0x53L;
                }
            }
            (*l_699) ^= ((void*)0 == &g_126);
        }
        else
        {
            int ***l_707[10];
            char *l_727 = &g_495[4][0];
            short l_729 = 0xB6BAL;
            unsigned short *l_760 = (void*)0;
            union U0 *l_767 = (void*)0;
            unsigned char l_776[1][10][10] = {{{1UL,0UL,1UL,0xAFL,251UL,251UL,0xEEL,1UL,249UL,0x49L},{0xAFL,1UL,1UL,0x32L,0xEDL,0UL,0xA0L,0x16L,0x16L,0xA0L},{253UL,249UL,0xC3L,0xC3L,249UL,253UL,0x16L,0xEEL,9UL,1UL},{0x6DL,251UL,0x16L,0xAFL,251UL,249UL,0UL,0x86L,0xF8L,0x32L},{0x6DL,0xA0L,0x32L,253UL,1UL,253UL,0x32L,0xA0L,0x6DL,9UL},{253UL,0x32L,0xA0L,0x6DL,9UL,0UL,1UL,0xC3L,0x49L,0x86L},{0xAFL,0x16L,251UL,0x6DL,0x49L,0UL,0UL,0x49L,0x6DL,251UL},{0xC3L,0xC3L,249UL,253UL,0x16L,0xEEL,9UL,1UL,0xF8L,1UL},{0x32L,1UL,1UL,0xAFL,0UL,0xF8L,9UL,253UL,9UL,0xF8L},{1UL,0xC3L,0xAFL,0xC3L,1UL,1UL,0UL,0xEDL,0x16L,249UL}}};
            int l_779[8] = {0x3E415A8FL,0x3E415A8FL,0x3E415A8FL,0x3E415A8FL,0x3E415A8FL,0x3E415A8FL,0x3E415A8FL,0x3E415A8FL};
            int *l_800 = (void*)0;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_707[i] = &l_705;
            g_708[0][0] = l_705;


            for (p_17 = (-2); (p_17 == (-5)); p_17 = safe_sub_func_int32_t_s_s(p_17, 4))
            {
                unsigned char l_712 = 5UL;
                char *l_735[7] = {(void*)0,&l_688[5][6],&l_688[5][6],(void*)0,&l_688[5][6],&l_688[5][6],(void*)0};
                int l_744[10][6] = {{0x1F82673AL,0xA5C4FDE9L,0x88867232L,0x88867232L,0xA5C4FDE9L,0x1F82673AL},{(-5L),0x1F82673AL,6L,0xA5C4FDE9L,6L,0x1F82673AL},{6L,(-5L),0x88867232L,0L,0L,0x88867232L},{6L,6L,0L,0xA5C4FDE9L,7L,0xA5C4FDE9L},{(-5L),6L,(-5L),0x88867232L,0L,0L},{0x1F82673AL,(-5L),(-5L),0x1F82673AL,6L,0xA5C4FDE9L},{0xA5C4FDE9L,0x1F82673AL,0L,0x1F82673AL,0xA5C4FDE9L,0x88867232L},{0x1F82673AL,0xA5C4FDE9L,0x88867232L,0x88867232L,0xA5C4FDE9L,0x1F82673AL},{(-5L),0x1F82673AL,6L,0xA5C4FDE9L,6L,0x1F82673AL},{6L,(-5L),0x88867232L,0L,0L,0x88867232L}};
                int i, j;
                (*l_699) = l_712;
                for (g_275 = (-30); (g_275 != 47); g_275++)
                {
                    const char *****l_721 = &l_718;
                    l_723 &= ((safe_add_func_int16_t_s_s((l_717 != ((*l_721) = l_718)), g_495[3][0])) || ((*p_18) = l_722));
                    for (l_645 = 0; (l_645 != 55); l_645 = safe_add_func_int16_t_s_s(l_645, 7))
                    {
                        l_726 = &p_19;

                        ;
                        (*l_699) |= l_712;
                    }
                }
                for (g_278 = 0; (g_278 <= 0); g_278 += 1)
                {
                    union U0 *l_728 = (void*)0;
                    int **l_730 = &g_130;
                    int i;
                    (*l_730) = func_44(func_58((l_728 = func_54(l_727, p_17, (~p_16))), l_729, l_712, p_16, (((-7L) == (p_17 != (**l_726))) && (*p_18))));

                    ;
                    ;
                    (*l_699) = ((((safe_add_func_uint32_t_u_u((**g_600), ((p_18 != p_18) == ((*p_18) == (safe_sub_func_uint32_t_u_u((l_727 != ((***g_369) = l_735[6])), (*p_19))))))) & (**g_600)) >= l_712) & (**l_726));

                    ;
                    for (g_271 = 0; (g_271 <= 3); g_271 += 1)
                    {
                        int *l_743[3][2][3] = {{{&g_133[2][0],&l_723,&l_723},{&g_133[3][0],&l_723,&g_133[3][0]}},{{&g_133[3][2],&g_133[2][0],&l_723},{&g_133[3][2],&g_133[3][2],&g_133[2][0]}},{{&g_133[3][0],&g_133[2][0],&g_133[2][0]},{&g_133[2][0],&l_723,&l_723}}};
                        unsigned short *l_755[6][9] = {{(void*)0,&g_264,&g_264,&g_264,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_264,&g_264,&g_264,(void*)0,(void*)0,(void*)0,(void*)0,&g_264,&g_264},{&g_264,&g_264,(void*)0,(void*)0,(void*)0,(void*)0,&g_264,&g_264,&g_264},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_264,&g_264,(void*)0,&g_264,(void*)0,&g_264,(void*)0,&g_264},{&g_264,&g_264,(void*)0,(void*)0,&g_264,(void*)0,(void*)0,&g_264,&g_264}};
                        int i, j, k;
                        (*l_699) = (*p_19);
                        l_744[5][3] = (~((safe_unary_minus_func_int32_t_s(((*l_699) = (((~0xB90CL) || (((*l_699) != (*g_601)) || p_17)) > 0UL)))) == ((safe_rshift_func_uint8_t_u_s(((*p_18) >= ((((safe_lshift_func_int8_t_s_s((l_712 < (*p_19)), 4)) < l_723) && (*g_601)) < (*g_235))), 7)) >= l_712)));
                        (*l_699) &= (((safe_sub_func_int16_t_s_s(7L, (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(l_723, ((safe_mul_func_uint16_t_u_u(p_17, ((void*)0 != p_19))) < ((*g_601) |= p_16)))), (l_756 = g_698))), (-1L))))) > (safe_sub_func_int32_t_s_s((l_759 != l_760), p_16))) ^ l_729);
                    }
                }
            }

            ;
            ;
            if ((~((safe_lshift_func_uint8_t_u_u((+p_17), g_83[6][1])) & ((*p_18) || ((l_760 == (void*)0) == g_664[0])))))
            {
                int l_768 = 0L;
                int l_773 = 0x85A7FAE8L;
                if (l_729)
                {
                    (*l_699) ^= 9L;
                }
                else
                {
                    int *l_765 = &l_723;
                    for (g_157 = 0; (g_157 == 5); g_157 = safe_add_func_uint32_t_u_u(g_157, 3))
                    {
                        int **l_766 = &l_765;
                        (*l_766) = l_765;
                        if ((**l_726))
                            continue;
                    }
                }
                if ((*p_19))
                {
                    int **l_769 = &g_130;
                    (*l_769) = func_44(func_58(l_767, l_768, ((*l_689) = (*l_564)), p_16, p_16));

                    ;
                }
                else
                {
                    const int *l_780 = &l_768;
                    for (g_271 = 0; (g_271 >= 15); ++g_271)
                    {
                        int **l_772 = &l_564;
                        (*l_772) = p_19;

                        ;
                        l_773 |= (l_768 = 0x1A4DFEBEL);
                        l_779[2] &= (safe_mod_func_int8_t_s_s((l_776[0][9][1] && l_768), (safe_add_func_uint8_t_u_u(g_2[1], l_756))));
                    }
                    for (g_470 = 1; (g_470 >= 0); g_470 -= 1)
                    {
                        (*l_699) &= 7L;
                        (*l_699) = l_756;
                    }
                    for (g_157 = 0; (g_157 <= 1); g_157 += 1)
                    {
                        const int *l_781 = (void*)0;
                        return l_781;




                    }
                    (*l_699) = (safe_add_func_uint8_t_u_u((**l_726), (1UL < 0x6B286A31L)));
                }
            }
            else
            {
                int l_788 = 0x307BDCC7L;
                const int *l_796[8][9] = {{&g_83[5][0],(void*)0,(void*)0,(void*)0,&l_687,(void*)0,&g_83[5][0],&g_83[8][0],(void*)0},{(void*)0,(void*)0,&g_3,(void*)0,&g_7,&g_133[3][2],&g_133[3][2],&g_7,(void*)0},{&g_83[5][0],&l_687,&g_83[5][0],&g_133[3][2],&g_133[0][1],&g_3,&g_133[3][2],&g_83[8][0],(void*)0},{(void*)0,&g_83[8][0],&g_133[3][2],&g_3,&g_133[0][1],&g_133[3][2],&g_83[5][0],&l_687,&g_83[5][0]},{(void*)0,&g_7,&g_133[3][2],&g_133[3][2],&g_7,(void*)0,&g_3,(void*)0,(void*)0},{(void*)0,&g_83[8][0],&g_83[8][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_83[8][0]},{(void*)0,(void*)0,&g_83[9][0],(void*)0,&g_83[5][0],(void*)0,&g_83[9][0],(void*)0,(void*)0},{&g_83[8][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_83[8][0],&g_133[3][2],(void*)0}};
                int l_807 = (-8L);
                int i, j;
                (*l_699) ^= 0x30405A8CL;
                if ((*l_699))
                {
                    const int *l_791 = &g_3;
                    for (g_157 = 0; (g_157 > 3); g_157 = safe_add_func_uint32_t_u_u(g_157, 1))
                    {
                        int *l_786 = &g_83[8][0];
                        union U0 *l_787 = &g_586;
                        l_583 = l_787;

                        ;
                        if (l_779[2])
                            continue;
                        (*l_786) |= ((~(&g_709 != &g_709)) > g_89);
                        if (l_788)
                            continue;
                    }

                    ;
                    for (g_470 = (-17); (g_470 < (-22)); g_470 = safe_sub_func_uint8_t_u_u(g_470, 7))
                    {
                        (*l_699) &= l_788;
                        return l_791;




                    }
                }
                else
                {
                    int **l_792 = &l_699;
                    union U0 **l_795 = &l_767;
                    int *l_799 = (void*)0;
                    (*l_792) = func_44((*g_371));

                    ;
                    (*l_792) = &l_779[5];

                    ;
                    g_708[0][0] = &g_709;
                    if ((*p_19))
                    {
                        int **l_793 = (void*)0;
                        int **l_794 = &l_699;
                        (*l_794) = p_19;

                        ;
                        l_795 = l_795;
                        return l_797;




                    }
                    else
                    {
                        char l_798 = 7L;
                        int **l_803 = &l_699;
                        l_798 = 0x8E2C7616L;
                        l_800 = l_799;
                        (*l_803) = p_19;

                        ;
                        l_807 = (p_17 ^ (safe_sub_func_int16_t_s_s(0L, (((void*)0 != l_806) == (*p_18)))));
                    }

                    ;
                }

                ;
                ;
                if ((l_687 = (safe_mod_func_int32_t_s_s(0x5A79B0A3L, (*p_19)))))
                {
                    int * const l_812 = &g_83[8][0];
                    for (l_663 = 0; (l_663 < 59); l_663 = safe_add_func_int32_t_s_s(l_663, 4))
                    {
                        int **l_813 = &l_800;
                        (*l_813) = l_812;

                        ;
                        (**l_813) &= (*p_19);
                    }

                    ;
                    l_723 ^= ((!(*g_235)) > 0xC8B8L);
                }
                else
                {
                    int *l_814 = &l_723;
                    l_800 = p_19;

                    ;
                    (*l_814) = (*p_19);
                    return g_815;




                }

                ;
                for (l_723 = 0; (l_723 > 28); ++l_723)
                {
                    if ((*p_19))
                        break;
                }
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;

        ;
        for (l_723 = 12; (l_723 < (-30)); --l_723)
        {
            short l_846 = (-1L);
            int *l_864[10][5] = {{&g_133[3][2],&l_756,&l_497,&g_3,&l_723},{&g_161,&l_497,&l_497,&g_161,&g_3},{&g_133[3][2],&g_3,&g_133[3][2],&g_133[3][2],&g_3},{&l_497,&g_133[3][2],&l_723,(void*)0,&l_723},{(void*)0,(void*)0,&g_3,&g_133[3][2],&g_133[3][2]},{&l_497,(void*)0,&g_3,&g_161,&l_497},{&l_497,&g_3,&l_723,&g_3,&l_497},{&g_133[3][2],(void*)0,&g_133[3][2],&l_497,(void*)0},{&g_133[3][2],(void*)0,&l_497,&g_3,&g_3},{&l_497,&g_133[3][2],&l_497,(void*)0,(void*)0}};
            int **l_872 = &l_699;
            const int *l_876 = &g_133[1][1];
            int i, j;
            for (g_157 = 0; (g_157 <= 2); g_157 += 1)
            {
                unsigned short l_825 = 65535UL;
                const int *l_837[5][8][6] = {{{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3},{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3}},{{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3},{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3}},{{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3},{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3}},{{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3},{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3}},{{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3},{&l_497,&g_3,(void*)0,&g_3,&l_497,&g_3},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,(void*)0},{&l_497,(void*)0,(void*)0,(void*)0,&l_497,(void*)0},{(void*)0,&g_3,(void*)0,(void*)0,(void*)0,&g_3}}};
                int l_871 = 0x9C6E1010L;
                int i, j, k;
                for (g_470 = 2; (g_470 <= 6); g_470 += 1)
                {
                    int l_822[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    short l_824 = 0x27C8L;
                    int *l_831 = &g_7;
                    char *l_834 = (void*)0;
                    char *l_835 = &g_278;
                    int i, j;
                    for (g_89 = 0; (g_89 <= 6); g_89 += 1)
                    {
                        int *l_823 = &l_687;
                        unsigned char *l_830 = &g_222[4][2];
                        int i, j;
                        (*l_823) = ((((4294967295UL && (safe_sub_func_int16_t_s_s(((*l_697) = l_688[(g_157 + 1)][(g_157 + 1)]), ((g_133[g_157][g_157] > 0x6EL) != g_2[g_157])))) == (!(g_2[(g_157 + 1)] == ((*p_18) != (*p_18))))) | (*l_699)) < l_822[0]);
                        if (l_824)
                            break;
                        (*l_823) &= ((l_825 & (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_825, (*l_699))), (((*l_830) = 0xADL) < (-5L))))) <= ((0x82L >= 255UL) || ((*l_759) ^= l_822[4])));
                        (*l_823) = (**l_726);
                    }
                    (*l_831) &= 0xA98FFBD2L;
                    if ((safe_mul_func_uint8_t_u_u(l_688[(g_470 + 1)][g_470], ((*l_835) |= (g_133[(g_157 + 1)][g_157] || (*p_18))))))
                    {
                        short l_836 = 0xE49CL;
                        const int *l_838 = (void*)0;
                        l_756 = l_836;
                        return l_838;





                    }
                    else
                    {
                        short l_844[3];
                        int **l_847 = &l_699;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_844[i] = (-1L);
                        (*l_831) = (*p_19);
                        l_846 &= ((g_698 | p_17) | ((*l_831) || (safe_unary_minus_func_int16_t_s(((+((9UL || (safe_rshift_func_uint8_t_u_s((p_17 > (((p_17 | p_16) == ((((safe_sub_func_int16_t_s_s(p_17, (((l_844[1] ^ (**g_234)) > 4294967291UL) == 0x0E22L))) ^ (*g_235)) ^ (*g_601)) < (*l_831))) == 0x555EL)), 0))) & l_845[1])) && 0x5EABL)))));
                        (*l_847) = p_19;

                        ;
                    }

                    ;
                    (*l_831) |= 0xC9EAFD1EL;
                    for (g_698 = 0; (g_698 >= 0); g_698 -= 1)
                    {
                        int i, j, k;
                        (*l_831) |= l_611[(g_698 + 2)][(g_470 + 1)][g_698];
                    }
                }
                if ((*p_19))
                    continue;
                for (g_271 = 0; (g_271 <= 0); g_271 += 1)
                {
                    unsigned char l_859 = 0x1CL;
                    union U0 *l_861 = &g_65[6];
                    union U0 **l_860 = &l_861;
                    union U0 **l_863[3];
                    union U0 ***l_862 = &l_863[0];
                    unsigned **l_866 = &g_601;
                    int l_869 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_863[i] = &l_861;
                    if ((safe_add_func_int8_t_s_s((*p_18), (*p_18))))
                    {
                        int **l_850 = &g_130;
                        (*l_850) = func_44(p_18);

                        ;
                        return (*l_850);





                    }
                    else
                    {
                        const int **l_851 = (void*)0;
                        const int **l_852 = &g_815;
                        (*l_852) = l_837[2][3][1];
                        l_756 = (~(safe_add_func_uint32_t_u_u(9UL, (p_16 <= (safe_rshift_func_int16_t_s_s(0x82DBL, 0))))));
                    }
                    if ((safe_rshift_func_int16_t_s_s(l_859, (0xFC477384L | (l_860 == ((*l_862) = &l_861))))))
                    {
                        unsigned **l_865[5] = {&g_601,&g_601,&g_601,&g_601,&g_601};
                        unsigned ***l_867 = &l_866;
                        int **l_868 = &l_864[3][4];
                        int i;
                        (*l_868) = func_44(p_18);
                    }
                    else
                    {
                        int l_870[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        int i;
                        l_869 |= (*p_19);
                        l_869 = l_870[6];
                    }
                    l_871 &= (*p_19);
                    if ((*l_699))
                        continue;
                }
            }

            ;
            (*l_872) = p_19;

            ;
            for (l_756 = 5; (l_756 > (-12)); l_756--)
            {
                char *l_875 = (void*)0;
                (*l_872) = func_44(l_875);

                ;
            }

            ;
            return l_876;





        }
    }
    else
    {
        (*l_699) = ((void*)0 == &g_708[0][0]);
    }

    ;
    ;
    ;

    ;
    (*l_880) &= ((*l_879) = (safe_sub_func_int16_t_s_s((*l_564), ((*g_601) >= (*p_19)))));
    return l_881;




}







static char * func_32(char * p_33, short p_34, int * p_35, const unsigned short p_36, const unsigned p_37)
{
    unsigned char l_464 = 1UL;
    const int **l_482 = (void*)0;
    short *l_491 = &g_89;
    short **l_490 = &l_491;
    short ***l_489 = &l_490;
    char *l_492 = &g_278;
    for (g_53 = (-14); (g_53 != 11); g_53 = safe_add_func_uint16_t_u_u(g_53, 7))
    {
        int * const l_469 = &g_470;
        int l_471 = 0xEC39AD11L;
        const int *l_485 = &l_471;
        const int **l_484 = &l_485;
        if (((*p_35) |= (p_36 | p_34)))
        {
            unsigned short l_444 = 1UL;
            int l_480[2][8] = {{(-9L),0xE354D0A6L,0xE354D0A6L,(-9L),0xE354D0A6L,0xE354D0A6L,(-9L),0xE354D0A6L},{(-9L),(-9L),5L,(-9L),(-9L),5L,(-9L),(-9L)}};
            int **l_481 = &g_130;
            const int ***l_483[4] = {&l_482,&l_482,&l_482,&l_482};
            int i, j;
            if (l_444)
            {
                unsigned l_452 = 0x59589AFBL;
                char *l_453 = &g_278;
                for (g_7 = 0; (g_7 < (-13)); g_7 = safe_sub_func_uint16_t_u_u(g_7, 8))
                {
                    char *l_449[5][5][9] = {{{&g_53,&g_278,&g_278,&g_53,&g_53,&g_278,&g_278,&g_278,&g_278},{&g_278,&g_53,&g_278,&g_278,&g_53,&g_278,&g_53,(void*)0,&g_53},{(void*)0,&g_278,&g_278,&g_53,&g_53,&g_278,&g_278,&g_278,&g_278},{&g_53,&g_278,(void*)0,&g_53,(void*)0,(void*)0,&g_53,(void*)0,&g_278},{(void*)0,&g_278,&g_53,&g_278,&g_278,&g_53,&g_53,&g_278,&g_278}},{{&g_53,&g_53,&g_53,&g_278,&g_53,&g_53,&g_278,&g_278,&g_53},{&g_53,&g_278,(void*)0,&g_278,&g_53,&g_278,&g_278,&g_53,&g_53},{(void*)0,&g_278,&g_53,&g_278,&g_53,&g_278,(void*)0,&g_53,(void*)0},{&g_278,(void*)0,&g_278,&g_278,(void*)0,&g_278,&g_278,(void*)0,&g_278},{&g_278,&g_278,&g_278,&g_53,&g_53,&g_53,&g_53,&g_53,&g_278}},{{&g_278,&g_278,&g_53,(void*)0,(void*)0,&g_53,&g_278,&g_53,(void*)0},{&g_278,&g_53,&g_53,&g_278,&g_53,(void*)0,&g_278,&g_278,&g_278},{&g_278,&g_278,&g_53,&g_53,&g_278,&g_278,(void*)0,&g_278,&g_53},{(void*)0,(void*)0,&g_278,&g_53,&g_53,&g_278,&g_53,(void*)0,&g_278},{&g_278,&g_278,(void*)0,&g_278,(void*)0,(void*)0,&g_278,(void*)0,&g_278}},{{&g_53,(void*)0,&g_278,&g_278,&g_53,&g_53,&g_53,&g_53,&g_278},{&g_278,&g_53,&g_278,(void*)0,&g_278,&g_278,&g_53,&g_53,&g_278},{&g_278,(void*)0,&g_53,(void*)0,&g_278,&g_278,&g_53,&g_53,&g_53},{(void*)0,&g_278,&g_278,(void*)0,&g_278,&g_278,(void*)0,&g_278,(void*)0},{&g_278,&g_53,(void*)0,&g_278,&g_278,&g_278,(void*)0,&g_53,&g_278}},{{&g_278,&g_53,&g_53,&g_278,&g_278,&g_278,&g_278,&g_278,&g_53},{&g_53,&g_53,(void*)0,&g_53,&g_53,&g_53,&g_278,&g_53,&g_53},{&g_278,&g_278,&g_278,&g_278,&g_278,(void*)0,(void*)0,&g_53,(void*)0},{&g_278,&g_278,(void*)0,(void*)0,&g_278,&g_278,&g_278,&g_53,&g_278},{&g_278,&g_53,(void*)0,&g_278,&g_278,(void*)0,&g_53,&g_278,&g_53}}};
                    int i, j, k;
                    for (g_415 = 13; (g_415 != 21); g_415++)
                    {
                        return l_449[0][0][3];


                    }
                    for (g_89 = 0; (g_89 != 9); ++g_89)
                    {
                        (*p_35) = 1L;
                    }
                    (*p_35) |= l_452;
                }
                return l_453;


            }
            else
            {
                int *l_457 = &g_133[1][1];
                for (p_34 = 3; (p_34 >= 5); p_34 = safe_add_func_uint8_t_u_u(p_34, 1))
                {
                    int **l_456[7][4] = {{&g_130,&g_130,&g_130,&g_130},{&g_130,&g_130,(void*)0,&g_130},{(void*)0,&g_130,&g_130,&g_130},{(void*)0,(void*)0,&g_130,&g_130},{(void*)0,&g_130,&g_130,(void*)0},{(void*)0,&g_130,(void*)0,&g_130},{&g_130,&g_130,&g_130,(void*)0}};
                    int i, j;
                    l_457 = (void*)0;

                    ;
                    if (l_444)
                        continue;
                }

                ;
                (*p_35) |= (((((safe_mul_func_int16_t_s_s((g_89 = p_37), (safe_mul_func_int8_t_s_s((-5L), (safe_add_func_int8_t_s_s(((!(((l_464 >= ((safe_add_func_uint16_t_u_u(p_36, p_36)) <= (safe_rshift_func_uint8_t_u_s(g_275, 2)))) == ((void*)0 == l_469)) != p_37)) != g_83[8][0]), l_471)))))) & (-9L)) & 65533UL) == g_7) >= l_471);
                for (g_89 = 3; (g_89 >= 27); ++g_89)
                {
                    int *l_474 = &g_3;
                    int *l_477 = (void*)0;
                    int *l_478 = (void*)0;
                    int *l_479[3][7][1] = {{{&g_83[8][1]},{&l_471},{&g_83[8][1]},{&g_83[8][1]},{&l_471},{&g_83[8][1]},{&g_83[8][1]}},{{&l_471},{&g_83[8][1]},{&g_83[8][1]},{&l_471},{&g_83[8][1]},{&g_83[8][1]},{&l_471}},{{&g_83[8][1]},{&g_83[8][1]},{&l_471},{&g_83[8][1]},{&g_83[8][1]},{&l_471},{&g_83[8][1]}}};
                    int i, j, k;
                }
            }
            (*l_481) = &l_480[0][0];

            ;
            l_484 = l_482;

            ;
        }
        else
        {
            const int l_486 = 5L;
            (*p_35) |= ((0xFDCAA5BAL & (((l_486 >= (((void*)0 != p_35) != l_486)) | p_37) < (safe_add_func_int8_t_s_s((l_489 == (void*)0), (&l_484 != &g_129[0]))))) < g_415);
        }

        ;
        (*p_35) = (-7L);
    }
    if ((*p_35))
    {
        return p_33;


    }
    else
    {
        (*p_35) = (*p_35);
    }
    return l_492;


}







static int * func_39(int p_40)
{
    char *l_52 = &g_53;
    union U0 *l_64 = &g_65[5];
    int l_66 = 0x9B398EF5L;
    char *l_103[2][6][7] = {{{&g_53,&g_53,&g_53,&g_53,(void*)0,&g_53,&g_53},{(void*)0,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,(void*)0,&g_53,&g_53},{(void*)0,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,(void*)0,&g_53,&g_53},{(void*)0,&g_53,(void*)0,&g_53,(void*)0,&g_53,(void*)0}},{{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,(void*)0,&g_53,(void*)0,&g_53,(void*)0},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,(void*)0,&g_53,(void*)0,&g_53,(void*)0},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,(void*)0,&g_53,(void*)0,&g_53,(void*)0}}};
    char **l_102 = &l_103[0][5][1];
    union U0 **l_438 = (void*)0;
    union U0 **l_439 = (void*)0;
    union U0 **l_440 = &l_64;
    int *l_441 = &g_133[1][0];
    int i, j, k;
    (*l_440) = func_41(func_44(func_46(g_2[1], l_52, l_52, func_54((g_104 = ((*l_102) = func_58(l_64, g_53, l_66, (0x5F8F5063L > ((&l_66 != &g_7) & g_7)), l_66))), l_66, g_53), p_40)), p_40);

    ;


    return l_441;


}







static union U0 * func_41(int * p_42, short p_43)
{
    int *l_259 = (void*)0;
    int l_260 = 0xAAE58CCBL;
    unsigned l_261 = 0xB04CF609L;
    union U0 **l_290 = (void*)0;
    union U0 ***l_289[8][3][8] = {{{&l_290,&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,(void*)0},{&l_290,(void*)0,&l_290,(void*)0,&l_290,&l_290,(void*)0,&l_290},{&l_290,(void*)0,(void*)0,(void*)0,&l_290,&l_290,(void*)0,(void*)0}},{{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290},{(void*)0,(void*)0,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290}},{{&l_290,(void*)0,&l_290,(void*)0,&l_290,(void*)0,&l_290,&l_290},{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290,(void*)0},{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290,&l_290}},{{&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,(void*)0,&l_290},{&l_290,(void*)0,&l_290,&l_290,(void*)0,(void*)0,(void*)0,&l_290},{&l_290,(void*)0,&l_290,&l_290,&l_290,(void*)0,&l_290,&l_290}},{{(void*)0,&l_290,(void*)0,&l_290,(void*)0,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,(void*)0},{&l_290,&l_290,&l_290,&l_290,(void*)0,(void*)0,&l_290,&l_290}},{{(void*)0,(void*)0,(void*)0,&l_290,&l_290,&l_290,&l_290,(void*)0},{&l_290,&l_290,(void*)0,&l_290,(void*)0,(void*)0,&l_290,(void*)0},{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290}},{{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,(void*)0},{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,(void*)0,&l_290},{(void*)0,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0}},{{&l_290,&l_290,&l_290,(void*)0,(void*)0,&l_290,&l_290,&l_290},{&l_290,(void*)0,&l_290,&l_290,(void*)0,&l_290,(void*)0,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290}}};
    char *l_295 = &g_278;
    int l_359 = 0x3D1A0008L;
    char *** const *l_367[10][3][6] = {{{&g_208,&g_208,&g_208,&g_208,&g_208,&g_208},{(void*)0,&g_208,(void*)0,&g_208,&g_208,&g_208},{&g_208,&g_208,&g_208,&g_208,&g_208,(void*)0}},{{&g_208,(void*)0,&g_208,&g_208,&g_208,(void*)0},{(void*)0,&g_208,&g_208,&g_208,(void*)0,(void*)0},{&g_208,(void*)0,&g_208,&g_208,&g_208,&g_208}},{{&g_208,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_208,&g_208,(void*)0,(void*)0,&g_208,(void*)0},{&g_208,&g_208,&g_208,(void*)0,&g_208,(void*)0}},{{&g_208,&g_208,&g_208,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_208,&g_208,(void*)0},{&g_208,&g_208,(void*)0,&g_208,&g_208,&g_208}},{{&g_208,(void*)0,(void*)0,&g_208,&g_208,&g_208},{&g_208,&g_208,&g_208,&g_208,&g_208,&g_208},{(void*)0,&g_208,&g_208,(void*)0,(void*)0,&g_208}},{{&g_208,&g_208,(void*)0,(void*)0,(void*)0,&g_208},{&g_208,&g_208,&g_208,&g_208,&g_208,(void*)0},{(void*)0,&g_208,&g_208,&g_208,&g_208,&g_208}},{{&g_208,(void*)0,&g_208,&g_208,&g_208,&g_208},{(void*)0,&g_208,&g_208,&g_208,&g_208,(void*)0},{&g_208,(void*)0,&g_208,(void*)0,(void*)0,&g_208}},{{(void*)0,&g_208,(void*)0,&g_208,&g_208,&g_208},{(void*)0,&g_208,&g_208,(void*)0,&g_208,&g_208},{&g_208,(void*)0,&g_208,&g_208,&g_208,(void*)0}},{{&g_208,(void*)0,&g_208,&g_208,&g_208,&g_208},{(void*)0,(void*)0,&g_208,&g_208,&g_208,&g_208},{&g_208,&g_208,(void*)0,&g_208,&g_208,(void*)0}},{{(void*)0,&g_208,&g_208,&g_208,(void*)0,(void*)0},{&g_208,(void*)0,&g_208,(void*)0,&g_208,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_208,&g_208}}};
    const union U0 ** const l_384 = (void*)0;
    const union U0 ** const *l_383 = &l_384;
    const union U0 ** const **l_382 = &l_383;
    union U0 ** const *l_402 = &l_290;
    union U0 ** const **l_401 = &l_402;
    int *l_436 = (void*)0;
    int *l_437 = &g_83[8][0];
    int i, j, k;
    if ((l_260 = 1L))
    {
        char *l_262 = &g_53;
        unsigned short *l_263 = &g_264;
        int l_269 = 1L;
        unsigned l_270 = 4294967293UL;
        unsigned short *l_274 = &g_275;
        int l_276 = 1L;
        char *l_277 = &g_278;
        int *l_279 = &g_7;
        union U0 ***l_282 = (void*)0;
        union U0 ****l_284 = &g_283;
        union U0 *l_288 = (void*)0;
        union U0 **l_287 = &l_288;
        union U0 ***l_286 = &l_287;
        union U0 ****l_285[2];
        int *l_316 = &l_269;
        union U0 **l_357 = &l_288;
        int l_360[8] = {9L,4L,4L,9L,4L,4L,9L,4L};
        int i;
        for (i = 0; i < 2; i++)
            l_285[i] = &l_286;
        (*l_279) = (((*l_262) = l_261) | ((*l_277) = (((*l_263) = 4UL) <= (safe_mod_func_uint16_t_u_u((p_43 ^ (safe_sub_func_uint8_t_u_u(((p_43 != l_269) && l_270), g_271))), (l_276 = ((*l_274) = (0x4C5EL & (safe_mod_func_uint16_t_u_u((0x30L < l_270), (*g_235)))))))))));
        l_276 ^= (((void*)0 != &g_264) <= (*l_279));
        if ((safe_add_func_int8_t_s_s((0x61524D6DL > (l_282 == (l_289[1][2][1] = ((*l_284) = g_283)))), ((p_43 & p_43) <= ((*l_279) == (safe_mul_func_int16_t_s_s((*g_235), ((g_133[3][0] > 1UL) > 0xC628EA8FL))))))))
        {
            unsigned char l_300 = 0xC1L;
            unsigned short l_301 = 0x8E14L;
            int l_306 = 0xD1B2AB06L;
            char *l_307 = &g_53;
            int *l_308 = &g_133[3][2];
            for (l_260 = 2; (l_260 >= 0); l_260 -= 1)
            {
                int l_298[6] = {0L,0L,0L,0L,0L,0L};
                unsigned l_304[7][3] = {{0x17D36292L,1UL,1UL},{0x77D440B1L,4294967293UL,0x77D440B1L},{0x17D36292L,0x17D36292L,1UL},{0x65FA4DD6L,4294967293UL,0x65FA4DD6L},{0x17D36292L,1UL,1UL},{0x77D440B1L,4294967293UL,0x77D440B1L},{0x17D36292L,0x17D36292L,1UL}};
                int i, j;
                for (g_275 = 0; g_275 < 10; g_275 += 1)
                {
                    for (g_271 = 0; g_271 < 3; g_271 += 1)
                    {
                        g_222[g_275][g_271] = 255UL;
                    }
                }
                for (g_161 = 2; (g_161 >= 0); g_161 -= 1)
                {
                    unsigned short l_302 = 0x7041L;
                    for (l_276 = 0; (l_276 <= 2); l_276 += 1)
                    {
                        int **l_296 = &l_279;
                        int *l_299 = &l_269;
                        char **l_303 = &l_295;
                        (*l_296) = func_44(l_295);

                        ;
                        if (p_43)
                            continue;
                        if (p_43)
                            continue;
                        l_304[0][0] = (safe_unary_minus_func_uint16_t_u(((l_262 = (l_277 = (**g_208))) == ((*l_303) = func_58(&g_65[3], g_133[3][2], l_298[2], ((*l_299) &= p_43), (l_300 ^ (l_301 || l_302)))))));

                        ;
                        ;
                    }
                    for (l_301 = 0; (l_301 <= 2); l_301 += 1)
                    {
                        int **l_305 = &g_130;
                        (*l_305) = p_42;

                        ;
                    }
                }
            }


            ;
            ;
            ;
            ;
            (*l_308) = (p_43 > ((*l_307) = (l_306 = l_300)));
        }
        else
        {
            unsigned *l_313[9][2] = {{&l_270,&g_2[2]},{&g_2[1],&g_2[1]},{&g_2[1],&g_2[2]},{&l_270,&l_270},{&g_2[2],&g_2[1]},{&g_2[1],&g_2[1]},{&g_2[2],&l_270},{&l_270,&g_2[2]},{&g_2[1],&g_2[1]}};
            int l_321 = 0L;
            int i, j;
            (*l_279) |= (-8L);
            (*l_279) = (safe_mul_func_int8_t_s_s((*l_279), p_43));
            (*l_279) = (+(safe_lshift_func_int8_t_s_s((((g_2[1] ^= p_43) == p_43) == (safe_add_func_int16_t_s_s((p_42 != l_316), (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_321, (p_43 ^ p_43))), (**g_234)))))), (safe_lshift_func_int16_t_s_s(((0L | (*g_235)) | 0xA3L), 5)))));
        }


        ;
        ;
        ;
        ;
        for (g_264 = (-16); (g_264 < 31); g_264 = safe_add_func_int16_t_s_s(g_264, 6))
        {
            unsigned l_340 = 8UL;
            int l_350 = 1L;
            for (g_89 = 3; (g_89 != 28); g_89++)
            {
                const char l_351 = 0x06L;
                const int l_353[3] = {0x7FF40A62L,0x7FF40A62L,0x7FF40A62L};
                int i;
                for (g_53 = (-8); (g_53 >= 14); g_53++)
                {
                    int *l_354 = &g_7;
                    for (l_269 = 0; (l_269 <= 20); l_269 = safe_add_func_int16_t_s_s(l_269, 5))
                    {
                        unsigned char *l_349[10][9][2] = {{{&g_222[4][2],(void*)0},{&g_222[4][2],(void*)0},{&g_157,&g_222[4][2]},{&g_222[8][0],&g_222[8][0]},{&g_222[4][2],&g_157},{(void*)0,&g_222[4][2]},{&g_222[1][0],&g_222[8][0]},{(void*)0,&g_222[1][0]},{&g_157,&g_157}},{{&g_157,&g_222[1][0]},{(void*)0,&g_222[8][0]},{&g_222[1][0],&g_222[4][2]},{(void*)0,&g_157},{&g_222[4][2],&g_222[8][0]},{&g_222[8][0],&g_222[4][2]},{&g_157,(void*)0},{&g_222[4][2],&g_222[1][0]},{&g_222[8][0],(void*)0}},{{&g_222[1][0],&g_157},{&g_157,&g_157},{&g_222[1][0],(void*)0},{&g_222[8][0],&g_222[1][0]},{&g_222[4][2],(void*)0},{&g_157,&g_222[4][2]},{&g_222[8][0],&g_222[8][0]},{&g_222[4][2],&g_157},{(void*)0,&g_222[4][2]}},{{&g_222[1][0],&g_222[8][0]},{(void*)0,&g_222[1][0]},{&g_157,&g_157},{&g_157,&g_222[1][0]},{(void*)0,&g_222[8][0]},{&g_222[1][0],&g_222[4][2]},{(void*)0,&g_157},{&g_222[4][2],&g_222[8][0]},{&g_222[8][0],&g_222[4][2]}},{{&g_157,(void*)0},{&g_222[4][2],&g_222[1][0]},{&g_222[8][0],(void*)0},{&g_222[1][0],&g_157},{&g_157,&g_157},{&g_222[1][0],(void*)0},{&g_222[8][0],&g_222[1][0]},{&g_222[4][2],(void*)0},{&g_157,&g_222[4][2]}},{{&g_222[8][0],&g_222[8][0]},{&g_222[4][2],&g_157},{(void*)0,&g_222[4][2]},{&g_222[1][0],(void*)0},{&g_157,&g_157},{&g_222[4][2],&g_222[4][2]},{&g_222[4][2],&g_157},{&g_157,(void*)0},{&g_157,(void*)0}},{{&g_222[1][0],&g_222[4][2]},{&g_222[4][2],(void*)0},{(void*)0,&g_222[4][2]},{&g_222[4][2],&g_222[1][0]},{(void*)0,&g_157},{(void*)0,&g_157},{&g_157,&g_222[4][2]},{&g_222[4][2],&g_222[4][2]},{&g_157,&g_157}},{{(void*)0,&g_157},{(void*)0,&g_222[1][0]},{&g_222[4][2],&g_222[4][2]},{(void*)0,(void*)0},{&g_222[4][2],&g_222[4][2]},{&g_222[1][0],(void*)0},{&g_157,(void*)0},{&g_157,&g_157},{&g_222[4][2],&g_222[4][2]}},{{&g_222[4][2],&g_157},{&g_157,(void*)0},{&g_157,(void*)0},{&g_222[1][0],&g_222[4][2]},{&g_222[4][2],(void*)0},{(void*)0,&g_222[4][2]},{&g_222[4][2],&g_222[1][0]},{(void*)0,&g_157},{(void*)0,&g_157}},{{&g_157,&g_222[4][2]},{&g_222[4][2],&g_222[4][2]},{&g_157,&g_157},{(void*)0,&g_157},{(void*)0,&g_222[1][0]},{&g_222[4][2],&g_222[4][2]},{(void*)0,(void*)0},{&g_222[4][2],&g_222[4][2]},{&g_222[1][0],(void*)0}}};
                        int *l_352 = &l_260;
                        int i, j, k;
                        (*l_352) = (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x12L, (safe_mul_func_uint8_t_u_u(p_43, (safe_add_func_int32_t_s_s(l_340, p_43)))))), (safe_rshift_func_uint16_t_u_s(((g_2[3] <= 0L) != (safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((p_43 <= ((l_350 = (safe_lshift_func_uint16_t_u_s(3UL, 11))) ^ ((l_351 == 0L) || p_43))), 5L)) || p_43), p_43))), l_351))));
                        (*l_352) = (g_222[1][2] || ((*l_352) == l_353[2]));
                        if (p_43)
                            continue;
                    }
                    (*l_354) = l_351;
                    if ((*l_354))
                    {
                        int *l_355 = &l_350;
                        int **l_356[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_356[i] = &l_259;
                        p_42 = l_355;

                        ;
                        p_42 = p_42;
                    }
                    else
                    {
                        union U0 **l_358 = &l_288;
                        (*l_354) = (-1L);
                        (*l_287) = (void*)0;
                        (*l_354) = (l_357 == l_358);
                        l_359 ^= l_340;
                    }
                }
            }


            if (l_360[2])
                continue;

        }


    }
    else
    {
        unsigned l_363 = 8UL;
        int *l_364 = &l_260;
        char ****l_372 = &g_208;
        union U0 *l_375 = &g_65[5];
        int ***l_390 = &g_129[0];
        unsigned *l_418[2][9];
        unsigned **l_417 = &l_418[0][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 9; j++)
                l_418[i][j] = &g_271;
        }
        (*l_364) = (safe_sub_func_int8_t_s_s(l_363, p_43));
        for (g_271 = 10; (g_271 > 40); g_271 = safe_add_func_uint16_t_u_u(g_271, 3))
        {
            char *** const **l_368[8];
            int ***l_378 = (void*)0;
            int l_389 = 2L;
            int i;
            for (i = 0; i < 8; i++)
                l_368[i] = &l_367[4][2][1];
        }
        (*l_390) = &p_42;


        for (g_53 = 0; (g_53 != (-23)); g_53--)
        {
            int l_395 = 0x04191B9CL;
            unsigned **l_420 = &l_418[0][3];
            for (g_271 = 0; (g_271 == 35); g_271 = safe_add_func_int16_t_s_s(g_271, 1))
            {
                unsigned l_412 = 0xFDD72BB7L;
                int l_435 = 1L;
                if ((g_278 >= (((**g_234) >= l_395) | (+0x5452E4DEL))))
                {
                    int l_396 = 0x252574A7L;
                    (*l_364) = 0x07F98C77L;
                    (**l_390) = &l_359;
                    (*l_364) = l_396;
                    (*l_364) = (*l_364);
                }
                else
                {
                    union U0 ** const ***l_403 = &l_401;
                    unsigned *l_413 = (void*)0;
                    unsigned *l_414 = &g_415;
                    int l_416 = 0x6529D9DCL;
                    unsigned ***l_419[9] = {&l_417,&l_417,&l_417,&l_417,&l_417,&l_417,&l_417,&l_417,&l_417};
                    unsigned l_433 = 0x0E24ADB1L;
                    const unsigned short l_434 = 0x9614L;
                    int i;
                    (*l_364) = ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((*l_403) = l_401) != &l_402), 5)), g_2[1])) >= ((*g_235) ^ (safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(p_43, 1L)) == ((*l_414) ^= (safe_sub_func_int16_t_s_s(((&p_42 == (void*)0) & ((safe_add_func_int16_t_s_s((251UL || (*l_364)), l_412)) != g_83[9][1])), (*l_364))))), g_157))));
                    if (l_416)
                        continue;
                    l_420 = l_417;
                    (*l_364) = ((safe_sub_func_int16_t_s_s(l_395, ((!(l_435 = (safe_mod_func_int8_t_s_s(((p_43 ^ (l_412 | ((safe_mul_func_uint8_t_u_u(l_416, l_416)) ^ (safe_add_func_uint32_t_u_u(g_275, p_43))))) | (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((g_264 = ((l_359 = l_433) | (g_415 = (p_43 ^ p_43)))), 4)) ^ 0xC60E40DFL), l_434))), 0x09L)))) & g_7))) & p_43);
                }
                l_435 = ((*l_364) = p_43);
            }
        }


        ;
    }




    ;
    (*l_437) |= 0xC176A152L;
    return &g_65[8];




}







static int * func_44(char * p_45)
{
    short l_256[8][5] = {{0x732BL,0L,0x3627L,8L,1L},{1L,(-3L),0x18B0L,0x5B8BL,(-1L)},{(-1L),8L,(-1L),0x732BL,0x732BL},{8L,1L,8L,1L,0x2F8CL},{8L,0x8663L,0x5B8BL,1L,8L},{(-1L),(-1L),(-3L),0x9A67L,0L},{1L,0x732BL,0x5B8BL,8L,0x5B8BL},{0x18B0L,0x18B0L,8L,0x8663L,0x5B8BL}};
    int l_257 = 0L;
    int *l_258 = (void*)0;
    int i, j;
    l_257 = (safe_mod_func_int16_t_s_s(l_256[7][2], l_256[7][2]));
    return l_258;


}







static char * func_46(int p_47, char * p_48, char * p_49, union U0 * p_50, int p_51)
{
    int l_108[3];
    char *l_110[9][2] = {{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53},{&g_53,&g_53}};
    int l_163 = 0x0995485AL;
    short *l_169 = &g_89;
    short *l_173 = (void*)0;
    int *l_174 = (void*)0;
    union U0 ***l_186 = (void*)0;
    char l_224 = 0x4FL;
    unsigned char *l_253 = &g_157;
    int i, j;
    for (i = 0; i < 3; i++)
        l_108[i] = 0x0A6D4616L;
    for (g_89 = 13; (g_89 >= 3); g_89 = safe_sub_func_uint16_t_u_u(g_89, 6))
    {
        char **l_109 = &g_104;
        char **l_111 = (void*)0;
        char **l_112 = &l_110[0][1];
        int l_115 = 0x310E34D2L;
        int **l_116 = (void*)0;
        int *l_180 = &g_83[8][0];
        if (((l_108[1] < (((*l_109) = p_49) == ((*l_112) = l_110[0][1]))) <= g_7))
        {
            int l_131 = 0x81ECF37DL;
            if ((safe_add_func_int8_t_s_s((&g_53 == (g_104 = func_58(func_54(p_48, g_7, l_115), ((void*)0 != l_116), (g_2[1] & (p_51 | g_89)), l_108[0], g_89))), p_51)))
            {
                int *l_117 = &l_115;
                int *l_132 = &g_133[3][2];
                (*l_117) = g_2[0];
                (*l_132) ^= (((safe_mod_func_uint8_t_u_u(((+(safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(l_108[1], g_83[8][0])) == (safe_add_func_uint8_t_u_u(((g_126 = g_126) != (void*)0), (g_53 || (g_7 = ((*l_117) = p_47)))))), p_47))) ^ (safe_rshift_func_int16_t_s_u(((g_129[0] != l_116) == 0x7DC9L), 11))), l_131)) > l_108[1]) != g_83[8][0]);
            }
            else
            {
                short l_139 = 0xFC1DL;
                char *l_141[10] = {(void*)0,&g_53,(void*)0,&g_53,&g_53,(void*)0,&g_53,(void*)0,&g_53,&g_53};
                int i;
                for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
                {
                    int *l_134 = &l_115;
                    const int l_140 = 0x493B5762L;
                    int i;
                    (*l_134) &= l_108[g_7];
                    if ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_108[g_7] || l_139), (+g_133[3][2]))) | g_89), 4)))
                    {
                        p_51 = (-1L);
                        (*l_134) ^= l_140;
                        p_47 = p_47;
                        return l_141[9];



                    }
                    else
                    {
                        return &g_53;



                    }
                }
            }

            ;
        }
        else
        {
            const unsigned short l_166 = 65530UL;
            for (g_53 = 0; (g_53 < 26); ++g_53)
            {
                int l_146 = (-8L);
                int l_160 = 0xCEC10F2CL;
                unsigned l_162 = 0x36818C3BL;
                int *l_165 = &l_163;
                int **l_168 = &g_130;
                short **l_170 = &l_169;
                short *l_172 = &g_89;
                short **l_171 = &l_172;
                for (p_47 = (-1); (p_47 < 27); p_47++)
                {
                    unsigned short l_147 = 5UL;
                    int l_167 = 4L;
                    if (l_146)
                        break;
                    l_108[1] = (*g_130);
                    if (l_147)
                        continue;
                    for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
                    {
                        short *l_152 = &g_89;
                        unsigned char *l_156 = &g_157;
                        int **l_164[4] = {&g_130,&g_130,&g_130,&g_130};
                        int i, j;
                        l_163 &= (safe_sub_func_uint8_t_u_u(((g_161 = (l_160 &= (((~(g_83[g_7][g_7] | (l_108[g_7] = (safe_rshift_func_uint8_t_u_u((l_108[(g_7 + 1)] < ((void*)0 != l_152)), 3))))) >= (safe_mod_func_uint8_t_u_u(((*l_156) ^= (safe_unary_minus_func_uint8_t_u(g_2[0]))), (safe_rshift_func_uint8_t_u_s(p_51, 5))))) | (g_7 < (!((*p_48) & g_89)))))) || l_162), l_147));
                        l_165 = &l_163;
                        l_167 |= l_166;
                        return p_48;



                    }
                }
                (*l_168) = &p_47;

                ;
                (*g_130) = ((l_173 = ((*l_171) = ((*l_170) = l_169))) != (void*)0);

                ;
            }
            p_47 |= p_51;
            l_163 |= l_108[2];
            l_174 = &p_51;

            ;
        }
        if ((safe_add_func_int16_t_s_s(g_157, ((safe_lshift_func_int16_t_s_s(g_89, 11)) | g_161))))
        {
            int **l_179[6][4][8] = {{{&l_174,&l_174,&l_174,&g_130,&g_130,(void*)0,&l_174,(void*)0},{(void*)0,(void*)0,&g_130,(void*)0,(void*)0,&g_130,&l_174,(void*)0},{(void*)0,&g_130,&l_174,&g_130,&g_130,&l_174,&g_130,(void*)0},{&l_174,&g_130,&l_174,&l_174,&g_130,&g_130,&g_130,&l_174}},{{&l_174,(void*)0,&l_174,&g_130,&l_174,&g_130,&l_174,&l_174},{&l_174,(void*)0,(void*)0,(void*)0,(void*)0,&l_174,&l_174,&g_130},{&l_174,&g_130,&g_130,(void*)0,&l_174,(void*)0,&g_130,&g_130},{&l_174,&g_130,&g_130,(void*)0,&g_130,&g_130,&g_130,&g_130}},{{(void*)0,&g_130,&g_130,(void*)0,&l_174,&g_130,&g_130,&l_174},{&g_130,(void*)0,&g_130,&g_130,&g_130,(void*)0,&g_130,&l_174},{&g_130,(void*)0,&g_130,&l_174,&g_130,&g_130,&l_174,&g_130},{&g_130,&g_130,(void*)0,&l_174,&g_130,&g_130,&l_174,&g_130}},{{&g_130,&g_130,&l_174,&g_130,&g_130,(void*)0,&g_130,&g_130},{&g_130,&g_130,&l_174,&l_174,&l_174,&l_174,&g_130,&g_130},{(void*)0,(void*)0,&l_174,&l_174,&g_130,&g_130,&g_130,&l_174},{&l_174,(void*)0,&g_130,(void*)0,&g_130,&l_174,&g_130,&g_130}},{{&g_130,&l_174,&l_174,&l_174,&l_174,&g_130,&g_130,(void*)0},{&g_130,(void*)0,&g_130,&l_174,&g_130,&l_174,&g_130,(void*)0},{&g_130,&g_130,&l_174,&l_174,(void*)0,(void*)0,(void*)0,(void*)0},{&l_174,(void*)0,(void*)0,&l_174,&g_130,(void*)0,(void*)0,&g_130}},{{&g_130,&l_174,&l_174,(void*)0,&l_174,&l_174,&g_130,&g_130},{&l_174,&l_174,&g_130,&g_130,(void*)0,(void*)0,&g_130,&g_130},{(void*)0,(void*)0,&l_174,&g_130,(void*)0,(void*)0,&g_130,(void*)0},{&l_174,&g_130,&g_130,&g_130,&l_174,&l_174,(void*)0,(void*)0}}};
            short *l_230 = &g_89;
            const short l_241 = 0L;
            int i, j, k;
            l_180 = &p_47;

            ;
            if ((*g_130))
            {
                unsigned char *l_181 = &g_157;
                union U0 ***l_184[2];
                union U0 ****l_185 = &l_184[0];
                int l_193 = 0x6C01FFE2L;
                int i;
                for (i = 0; i < 2; i++)
                    l_184[i] = (void*)0;
                if ((((*l_181) = p_51) & ((~(~((*p_49) && ((safe_mod_func_int32_t_s_s((p_47 <= g_53), p_47)) ^ ((((*l_185) = l_184[0]) != l_186) != (p_51 >= (*p_48))))))) && g_7)))
                {
                    char ***l_187 = (void*)0;
                    char ***l_188 = (void*)0;
                    char ***l_189 = &l_112;
                    (*l_189) = &g_104;

                    ;
                }
                else
                {
                    int *l_192 = &l_163;
                    if ((p_51 = ((*l_180) = (safe_rshift_func_uint16_t_u_u(((((*p_49) >= ((*l_181) = g_2[3])) & (&p_51 == (l_192 = &p_51))) & l_193), ((safe_mod_func_int8_t_s_s((*p_48), 0x3CL)) == g_83[8][1]))))))
                    {
                        (*l_192) = p_47;
                        if (p_51)
                            break;
                    }
                    else
                    {
                        l_192 = (void*)0;

                        ;
                        p_47 = (safe_rshift_func_int16_t_s_s(p_51, 4));
                        p_47 = (*g_130);
                        l_174 = &p_47;

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
            }
            else
            {
                char l_205 = 0L;
                int l_219 = 0xB38FC1FCL;
                int l_223 = 0x30ACF16FL;
                short **l_233 = (void*)0;
                int *l_246 = &g_133[3][2];
                if (((*l_180) && (*g_130)))
                {
                    for (g_7 = (-8); (g_7 <= 25); ++g_7)
                    {
                        int *l_200 = (void*)0;
                        if ((*g_130))
                            break;
                        l_200 = (void*)0;
                    }
                    if (p_47)
                        continue;
                    (*l_180) |= 8L;
                }
                else
                {
                    char ****l_210 = (void*)0;
                    char ****l_211 = &g_208;
                    unsigned *l_218[5];
                    unsigned char *l_220 = &g_157;
                    unsigned char *l_221[8];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_218[i] = &g_2[1];
                    for (i = 0; i < 8; i++)
                        l_221[i] = &g_222[4][2];
                    l_224 |= ((l_223 = (safe_mul_func_uint8_t_u_u(((((*l_220) = ((((safe_rshift_func_int16_t_s_s((-10L), ((l_205 == (l_205 ^ (safe_add_func_uint8_t_u_u(((&l_111 != ((*l_211) = g_208)) && (safe_rshift_func_int8_t_s_u((((*p_49) = (*p_48)) | (((g_157 >= (safe_sub_func_uint8_t_u_u((p_47 >= (p_51 = ((l_219 &= (safe_lshift_func_uint8_t_u_s(p_51, 1))) ^ l_205))), p_47))) ^ g_7) && 0x150CL)), 6))), l_205)))) | g_161))) == g_161) ^ 1L) == 0x1D61L)) ^ 0xAFL) || 4294967295UL), l_205))) >= l_163);
                    for (l_223 = 0; (l_223 > (-12)); --l_223)
                    {
                        const short ***l_236 = &g_234;
                        int ***l_242 = &l_179[5][3][6];
                        (*l_180) = (safe_unary_minus_func_int16_t_s((safe_mul_func_int16_t_s_s(g_133[3][2], ((((*p_48) >= ((void*)0 != l_230)) > (safe_mul_func_uint8_t_u_u((g_222[4][2] = ((*l_220) = ((p_51 == (l_233 != ((*l_236) = g_234))) <= g_157))), (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((0x44C75526L ^ p_47), l_241)) <= p_47), (*l_180)))))) == (*g_235))))));
                        (*l_242) = &g_130;
                    }
                }
                for (g_157 = (-10); (g_157 >= 45); ++g_157)
                {
                    int *l_245 = (void*)0;
                    l_174 = l_245;

                    ;
                }
                l_246 = &p_51;

                ;
            }

            ;
            ;
        }
        else
        {
            return p_49;



        }

        ;
        ;
        ;
        return (**g_208);



    }

    ;
    ;
    ;
    p_51 = ((l_163 |= (safe_add_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(p_51, (safe_lshift_func_uint8_t_u_u(((*l_253) = g_133[3][2]), 7)))) < (*p_49)) ^ ((g_83[8][0] == (g_222[4][2] && (*p_48))) ^ ((*g_235) == p_47))), g_222[7][1]))) > g_2[1]);
    return p_49;



}







static union U0 * func_54(char * p_55, const unsigned p_56, unsigned char p_57)
{
    int *l_105 = (void*)0;
    l_105 = (void*)0;
    return &g_65[5];


}







static char * func_58(union U0 * p_59, unsigned p_60, short p_61, int p_62, unsigned short p_63)
{
    union U0 *l_67 = &g_65[6];
    int *l_95 = &g_83[1][1];
    char *l_101 = (void*)0;
    l_67 = l_67;
    for (p_62 = 0; (p_62 != (-9)); p_62--)
    {
        for (p_60 = (-29); (p_60 != 4); p_60 = safe_add_func_uint8_t_u_u(p_60, 8))
        {
            return &g_53;


        }
    }
    if (g_3)
    {
        unsigned l_77[8][6] = {{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL},{0x3A35E06CL,0UL,0x3A35E06CL,0UL,0x3A35E06CL,0UL}};
        char *l_82[6][9] = {{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,(void*)0,&g_53,&g_53,&g_53},{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53},{&g_53,&g_53,(void*)0,&g_53,&g_53,(void*)0,&g_53,&g_53,&g_53}};
        short *l_88[9] = {&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89,&g_89};
        unsigned char *l_90[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_91 = 0xA103ABEDL;
        int l_92 = (-1L);
        int *l_93 = &g_7;
        int i, j;
        for (p_60 = 0; (p_60 < 41); p_60++)
        {
            int *l_74 = (void*)0;
            int l_75[3];
            int **l_76 = &l_74;
            int i;
            for (i = 0; i < 3; i++)
                l_75[i] = (-1L);
            l_75[2] = (p_61 <= p_60);
            (*l_76) = &g_7;

            ;
        }
        if (((*l_93) = (l_77[0][0] & (l_92 = (safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_2[0], (((l_82[1][6] == &g_53) >= g_83[8][0]) != (0x7AL < (safe_lshift_func_uint8_t_u_s((l_91 ^= (safe_lshift_func_uint16_t_u_s(((l_77[0][0] | (p_61 ^= g_2[0])) & (4L && p_60)), 0))), l_77[0][0])))))) & l_77[0][0]), g_2[0]))))))
        {
            int **l_94[1][7][6] = {{{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,(void*)0},{&l_93,&l_93,&l_93,(void*)0,&l_93,&l_93},{&l_93,&l_93,&l_93,(void*)0,&l_93,(void*)0},{&l_93,(void*)0,&l_93,&l_93,(void*)0,&l_93},{&l_93,(void*)0,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,(void*)0}}};
            int i, j, k;
            l_95 = &g_7;

            ;
        }
        else
        {
            (*l_95) = g_3;
        }

        ;
        (*l_95) ^= (safe_rshift_func_uint8_t_u_u(0x39L, 1));
        g_83[7][0] ^= p_62;
    }
    else
    {
        union U0 **l_99[4][10][6] = {{{&l_67,(void*)0,&l_67,&l_67,&l_67,(void*)0},{&l_67,(void*)0,(void*)0,&l_67,&l_67,&l_67},{&l_67,(void*)0,(void*)0,&l_67,&l_67,&l_67},{&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67},{&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67},{&l_67,(void*)0,(void*)0,&l_67,&l_67,(void*)0},{&l_67,(void*)0,&l_67,&l_67,&l_67,(void*)0},{&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67},{&l_67,(void*)0,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0},{&l_67,&l_67,&l_67,&l_67,(void*)0,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,(void*)0},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,(void*)0,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0},{&l_67,&l_67,(void*)0,&l_67,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0}},{{&l_67,&l_67,&l_67,&l_67,(void*)0,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,(void*)0},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,(void*)0,&l_67},{&l_67,&l_67,(void*)0,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{(void*)0,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,(void*)0,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0},{(void*)0,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,(void*)0,&l_67},{(void*)0,&l_67,(void*)0,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{(void*)0,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,(void*)0,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0},{(void*)0,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67}}};
        union U0 ***l_98 = &l_99[3][9][5];
        int l_100 = 0x81B22E00L;
        int i, j, k;
        (*l_95) = p_60;
        (*l_98) = &p_59;


        (*l_95) |= l_100;
    }

    ;
    return l_101;


}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_83[i][j], "g_83[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_222[i][j], "g_222[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_495[i][j], "g_495[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_664[i], "g_664[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
