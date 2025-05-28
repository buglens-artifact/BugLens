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



static unsigned g_22 = 1UL;
static int *g_30 = (void*)0;
static int g_41 = 0L;
static unsigned char g_56 = 0x63L;
static unsigned g_68 = 0x1153AA9BL;
static short g_98 = 0x43DEL;
static unsigned char g_105[10] = {0x73L,0xD4L,0x73L,0x73L,0xD4L,0x73L,0x73L,0xD4L,0x73L,0x73L};
static volatile unsigned ***g_106 = (void*)0;
static volatile unsigned g_109 = 0UL;
static unsigned *g_117[3] = {&g_22,&g_22,&g_22};
static unsigned **g_116[1] = {&g_117[2]};
static unsigned g_119 = 0UL;
static char g_128 = 0x38L;
static unsigned short g_131 = 1UL;
static unsigned short g_133 = 2UL;
static unsigned g_137 = 0xF58447B4L;
static int g_171 = 0L;
static int *g_175 = (void*)0;
static int **g_194[8] = {&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175,&g_175};
static volatile short g_198 = 0x58A1L;
static volatile short *g_197 = &g_198;
static short g_202 = 0x5F73L;
static short *g_203 = &g_202;
static unsigned char g_204[6][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
static short g_262[5] = {0L,0L,0L,0L,0L};
static short **g_267 = (void*)0;
static int g_286[4] = {(-10L),(-10L),(-10L),(-10L)};
static int *g_285 = &g_286[2];
static char *g_332 = &g_128;
static char **g_331[8] = {&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332,&g_332};
static short ***g_379[6] = {&g_267,&g_267,(void*)0,(void*)0,&g_267,(void*)0};
static volatile unsigned short g_393[7][9][2] = {{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}},{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}},{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}},{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}},{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}},{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}},{{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L},{0xEA7EL,0x5B88L},{0x5B88L,0xEA7EL},{0x5B88L,0x5B88L}}};
static int *g_400 = &g_41;



static unsigned func_1(void);
static int * func_2(int * p_3, unsigned char p_4, int * p_5);
static int * func_6(unsigned p_7, int p_8, int * p_9, char p_10, int * p_11);
static unsigned func_12(int * p_13, int p_14, int * p_15);
static int * func_16(int p_17, int * p_18);
static short func_25(int * p_26, int * p_27, char p_28, int p_29);
static unsigned func_36(int * p_37, int * p_38, unsigned p_39);
static int * func_42(int * p_43, int * p_44, int * p_45, unsigned p_46, unsigned short p_47);
static int * func_49(unsigned char p_50, unsigned p_51, int p_52, unsigned char p_53, char p_54);
static int * func_58(unsigned char * p_59, int * p_60);
static unsigned func_1(void)
{
    int l_21 = 0x566A9272L;
    int *l_31 = &l_21;
    unsigned char l_280 = 248UL;
    unsigned *l_281 = (void*)0;
    unsigned *l_282 = &g_68;
    unsigned short *l_283 = &g_133;
    int **l_396[10][5] = {{&l_31,&g_30,&l_31,&g_30,&l_31},{&g_285,&g_285,&g_285,&g_285,&g_285},{&l_31,&g_30,&l_31,&g_30,&l_31},{&g_285,&g_285,&g_285,&g_285,&g_285},{&l_31,&g_30,&l_31,&g_30,&l_31},{&g_285,&g_285,&g_285,&g_285,&g_285},{&l_31,&g_30,&l_31,&g_30,&l_31},{&g_285,&g_285,&g_285,&g_285,&g_285},{&l_31,&g_30,&l_31,&g_30,&l_31},{&g_285,&g_285,&g_285,&g_285,&g_285}};
    int *l_397 = &g_286[3];
    int *l_398 = &g_286[0];
    int *l_399 = &g_286[3];
    int i, j;
    l_397 = func_2(func_6(func_12(func_16((((*l_283) = ((safe_lshift_func_uint8_t_u_u(l_21, (((*l_282) = (g_22 || (safe_sub_func_int16_t_s_s((func_25(g_30, l_31, g_22, g_22) > (safe_add_func_uint8_t_u_u(0xBFL, (*l_31)))), l_280)))) && (-5L)))) && (-8L))) >= g_128), &l_21), g_262[3], g_285), l_280, g_285, g_262[0], l_282), g_262[3], l_31);




    ;

    ;
    ;
    l_399 = l_398;
    g_400 = (void*)0;

    ;
    return g_202;
}







static int * func_2(int * p_3, unsigned char p_4, int * p_5)
{
    int *l_322[10][8][3] = {{{&g_286[0],&g_286[2],&g_286[2]},{(void*)0,&g_286[1],(void*)0},{&g_286[2],&g_286[2],&g_286[0]},{&g_41,&g_41,(void*)0},{&g_286[0],&g_286[0],&g_41},{&g_286[2],&g_41,&g_286[2]},{&g_286[1],&g_286[0],&g_41},{&g_41,&g_286[3],(void*)0}},{{&g_286[2],&g_41,&g_286[3]},{&g_286[1],&g_41,&g_41},{&g_286[1],&g_286[1],(void*)0},{&g_286[1],&g_41,&g_286[2]},{&g_286[3],&g_286[1],&g_41},{(void*)0,&g_286[3],&g_286[2]},{&g_286[0],&g_41,&g_286[1]},{&g_286[1],(void*)0,&g_286[3]}},{{(void*)0,&g_286[2],&g_286[2]},{&g_286[0],&g_41,(void*)0},{&g_286[2],&g_286[2],&g_286[2]},{&g_41,&g_286[2],&g_286[2]},{&g_41,&g_286[2],&g_286[2]},{&g_286[2],(void*)0,(void*)0},{&g_286[2],&g_286[2],&g_286[2]},{&g_286[2],&g_286[2],&g_286[3]}},{{&g_41,&g_41,&g_41},{&g_286[0],(void*)0,&g_286[2]},{&g_286[2],&g_41,&g_286[1]},{&g_286[3],&g_286[2],&g_286[2]},{&g_286[1],&g_286[2],&g_41},{&g_286[3],(void*)0,(void*)0},{&g_41,&g_286[2],&g_286[1]},{&g_286[0],&g_286[2],&g_286[2]}},{{(void*)0,&g_286[2],(void*)0},{&g_286[2],&g_41,&g_286[1]},{&g_41,&g_286[2],&g_286[2]},{&g_286[2],&g_41,&g_286[2]},{&g_286[1],&g_286[0],(void*)0},{&g_41,&g_41,&g_41},{&g_286[1],&g_41,&g_286[2]},{&g_41,&g_286[2],&g_286[1]}},{{&g_286[0],(void*)0,&g_41},{&g_286[3],&g_286[0],&g_286[3]},{(void*)0,&g_41,&g_286[1]},{&g_41,&g_41,(void*)0},{&g_286[3],&g_286[2],&g_286[0]},{(void*)0,&g_286[2],&g_286[3]},{&g_286[3],&g_286[1],(void*)0},{&g_41,(void*)0,&g_286[2]}},{{(void*)0,&g_286[2],&g_41},{&g_286[3],&g_286[2],(void*)0},{&g_286[0],&g_286[2],(void*)0},{&g_41,(void*)0,&g_286[2]},{&g_286[1],&g_286[2],&g_41},{&g_41,&g_41,&g_286[1]},{&g_286[1],(void*)0,&g_41},{&g_286[2],&g_41,(void*)0}},{{&g_286[2],(void*)0,&g_286[3]},{&g_286[2],&g_286[3],&g_286[2]},{&g_286[2],&g_286[1],&g_286[1]},{&g_286[2],&g_41,&g_286[3]},{&g_286[1],&g_286[2],&g_41},{(void*)0,(void*)0,&g_286[2]},{&g_286[2],&g_41,&g_286[1]},{&g_41,&g_286[2],&g_286[2]}},{{&g_286[1],(void*)0,&g_41},{(void*)0,&g_41,&g_286[2]},{&g_286[2],&g_286[2],&g_286[2]},{&g_286[2],&g_286[2],&g_41},{&g_286[2],&g_286[2],&g_41},{&g_286[3],&g_286[1],&g_286[1]},{&g_286[2],&g_286[2],&g_286[0]},{&g_41,&g_41,(void*)0}},{{&g_41,&g_41,&g_286[2]},{&g_286[2],&g_286[2],&g_286[2]},{&g_286[0],&g_41,&g_286[1]},{&g_286[3],&g_286[2],&g_286[1]},{&g_286[2],(void*)0,&g_286[1]},{&g_286[1],&g_286[2],(void*)0},{(void*)0,(void*)0,(void*)0},{&g_286[1],&g_41,(void*)0}}};
    int **l_323 = &g_285;
    char *l_362 = &g_128;
    int i, j, k;
    (*l_323) = l_322[7][4][2];

    ;
    for (g_98 = 2; (g_98 >= 0); g_98 -= 1)
    {
        unsigned short l_324 = 1UL;
        int *l_338 = &g_41;
        short ***l_378 = &g_267;
        (*p_3) &= l_324;
    }
    (*p_3) |= (~(safe_unary_minus_func_uint32_t_u(((-3L) != p_4))));
    return p_5;


}







static int * func_6(unsigned p_7, int p_8, int * p_9, char p_10, int * p_11)
{
    int l_301 = 0x9FDD93EAL;
    int *l_304 = &g_41;
    unsigned char *l_310 = &g_204[0][0];
    int *l_311[3];
    int **l_312 = &g_285;
    unsigned short *l_316 = &g_131;
    unsigned *l_317 = &g_68;
    char **l_318 = (void*)0;
    char *l_319 = &g_128;
    char *l_321 = &g_128;
    char **l_320 = &l_321;
    int i;
    for (i = 0; i < 3; i++)
        l_311[i] = &g_41;
    for (p_7 = 25; (p_7 >= 1); p_7 = safe_sub_func_uint32_t_u_u(p_7, 4))
    {
        int *l_298 = &g_286[1];
        unsigned short *l_305[10][3][8] = {{{&g_133,&g_133,(void*)0,&g_131,&g_131,&g_131,&g_131,&g_131},{&g_133,&g_133,(void*)0,(void*)0,&g_133,&g_133,(void*)0,&g_131},{&g_131,&g_133,&g_133,&g_133,&g_131,&g_131,&g_133,&g_133}},{{&g_133,&g_131,&g_133,&g_133,&g_133,&g_131,&g_133,&g_131},{&g_133,&g_133,&g_133,(void*)0,&g_131,&g_131,&g_131,&g_131},{&g_133,&g_133,&g_133,&g_131,&g_131,&g_133,&g_133,&g_133}},{{&g_133,&g_133,&g_131,&g_131,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_131,&g_133,&g_133,&g_131,&g_131,&g_133}},{{&g_133,&g_133,(void*)0,&g_131,(void*)0,(void*)0,&g_131,(void*)0},{&g_131,&g_131,&g_131,&g_131,&g_131,(void*)0,&g_133,&g_133},{&g_131,(void*)0,&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133}},{{(void*)0,&g_131,(void*)0,&g_131,&g_131,&g_133,&g_133,(void*)0},{&g_133,&g_133,&g_131,&g_131,&g_133,&g_131,&g_131,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_131,&g_131,&g_133,&g_133}},{{(void*)0,&g_133,&g_131,&g_133,&g_133,&g_131,&g_133,&g_131},{&g_131,&g_133,&g_133,&g_133,&g_131,&g_131,&g_133,&g_133},{&g_131,&g_133,&g_131,(void*)0,(void*)0,&g_131,&g_133,&g_133}},{{&g_133,&g_133,&g_131,&g_131,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,(void*)0,&g_131,&g_133},{&g_133,&g_131,&g_133,(void*)0,&g_133,&g_131,&g_133,&g_133}},{{&g_133,&g_133,(void*)0,&g_131,(void*)0,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,(void*)0,(void*)0,&g_133,&g_133,(void*)0},{&g_133,(void*)0,&g_131,&g_133,&g_133,&g_133,(void*)0,&g_133}},{{&g_133,&g_131,&g_131,&g_133,&g_133,&g_133,&g_131,&g_131},{&g_133,(void*)0,&g_133,&g_131,&g_133,&g_133,&g_133,&g_131},{&g_131,&g_133,(void*)0,&g_133,&g_133,&g_133,&g_133,(void*)0}},{{&g_133,&g_133,&g_133,&g_133,&g_131,&g_131,&g_131,&g_133},{&g_131,&g_131,&g_131,&g_133,(void*)0,(void*)0,(void*)0,&g_133},{&g_131,&g_133,&g_131,&g_133,&g_133,&g_131,&g_133,(void*)0}}};
        int i, j, k;
        (*l_304) |= (*l_298);
        return l_304;


    }
    p_8 |= (safe_sub_func_uint16_t_u_u((((*l_317) = ((safe_mod_func_int16_t_s_s((((*l_316) = (((*l_310) = p_7) == 0xCFL)) || g_68), g_171)) == p_10)) != (**l_312)), p_7));
    (*p_9) = (((*l_320) = (l_319 = &p_10)) == (void*)0);

    ;
    ;
    return (*l_312);


}







static unsigned func_12(int * p_13, int p_14, int * p_15)
{
    int ***l_291 = (void*)0;
    int ****l_290[5] = {&l_291,&l_291,&l_291,&l_291,&l_291};
    int i;
    for (g_98 = (-7); (g_98 < (-14)); g_98 = safe_sub_func_uint32_t_u_u(g_98, 1))
    {
        return p_14;
    }
    (*g_285) ^= (+(safe_unary_minus_func_uint32_t_u((l_290[2] == &l_291))));
    p_13 = p_15;

    ;
    for (g_131 = 0; (g_131 > 9); ++g_131)
    {
        int l_294[7] = {0x5107FC32L,0x5107FC32L,0x5107FC32L,0x5107FC32L,0x5107FC32L,0x5107FC32L,0x5107FC32L};
        int l_295[9] = {0x97D7729DL,(-9L),0x97D7729DL,(-9L),0x97D7729DL,(-9L),0x97D7729DL,(-9L),0x97D7729DL};
        int i;
        l_295[1] |= ((p_14 & (l_294[2] = g_286[2])) < p_14);
    }
    return p_14;
}







static int * func_16(int p_17, int * p_18)
{
    int **l_284 = &g_30;
    (*l_284) = (void*)0;

    ;
    (*p_18) = 1L;
    return (*l_284);


}







static short func_25(int * p_26, int * p_27, char p_28, int p_29)
{
    int *l_40 = &g_41;
    unsigned *l_67 = &g_68;
    int *l_149 = &g_41;
    unsigned char *l_168 = &g_105[6];
    short *l_220 = &g_202;
    int **l_229 = (void*)0;
    short **l_253 = &l_220;
    short ***l_252 = &l_253;
    unsigned l_263[8][6][5] = {{{3UL,0UL,0x05E57BF4L,3UL,0xC267DE76L},{0x6395540AL,0UL,5UL,0UL,7UL},{0x2CC213E5L,3UL,1UL,0xC267DE76L,4UL},{7UL,4294967295UL,0x56E6B598L,0x7AF62D5FL,0x56E6B598L},{0x64FB073FL,0x64FB073FL,4294967293UL,0xE27D5561L,0xFB31ECCFL},{4294967292UL,1UL,0UL,4294967294UL,0x09ACC29EL}},{{4294967295UL,0x05E57BF4L,0x2DC7AD04L,4294967287UL,9UL},{5UL,1UL,5UL,0xAA813B8EL,0xFED72C55L},{1UL,0x64FB073FL,0UL,9UL,4294967295UL},{0x7BCFC9B8L,4294967295UL,4294967286UL,0UL,0xD6611CEDL},{0xFB31ECCFL,3UL,0UL,0x64FB073FL,1UL},{4294967292UL,0UL,4294967295UL,0x5BEA1ABCL,5UL}},{{1UL,0UL,0xEF8C94D6L,0x64FB073FL,9UL},{0xF493AA1AL,0UL,0x99D4765FL,0UL,0x6395540AL},{0x2CC213E5L,4294967295UL,9UL,9UL,4294967295UL},{0x09ACC29EL,0x02C249F4L,0xC234BBA6L,0xAA813B8EL,0x56E6B598L},{0xE27D5561L,1UL,3UL,0x2CC213E5L,0xEF8C94D6L},{0x99D4765FL,4294967295UL,0x9CFB0435L,0UL,0x3580E5CDL}},{{0xC267DE76L,7UL,0UL,0xC267DE76L,1UL},{4294967292UL,4294967294UL,5UL,4294967295UL,4294967295UL},{0UL,9UL,0UL,1UL,0xC267DE76L},{4294967295UL,0xBBF6FE1FL,5UL,0x02C249F4L,1UL},{0x05E57BF4L,0x9FAD4949L,4UL,0xEF8C94D6L,0x2CC213E5L},{5UL,0UL,5UL,0UL,0xC234BBA6L}},{{1UL,0xF51EB76DL,0UL,0x2DC7AD04L,1UL},{0x56E6B598L,0xB7C7B12AL,5UL,0xB7C7B12AL,0x56E6B598L},{4294967293UL,0x05E57BF4L,0UL,1UL,0UL},{0UL,0xBBF6FE1FL,0x9CFB0435L,4294967295UL,5UL},{0x2DC7AD04L,0xC267DE76L,3UL,0x05E57BF4L,0UL},{5UL,4294967295UL,0x99D4765FL,4294967295UL,0x56E6B598L}},{{0UL,7UL,1UL,0x9FAD4949L,1UL},{4294967286UL,4294967295UL,0x7BCFC9B8L,0x5BEA1ABCL,0xC234BBA6L},{0UL,0x2CC213E5L,4294967295UL,1UL,0x2CC213E5L},{4294967295UL,2UL,4294967292UL,0xFDD35DFBL,1UL},{0xEF8C94D6L,0x2CC213E5L,3UL,1UL,0xC267DE76L},{0x99D4765FL,0xB7C7B12AL,4294967292UL,0xC370A029L,0xC234BBA6L}},{{0x9FAD4949L,4294967295UL,4294967295UL,0x9FAD4949L,7UL},{0xD6611CEDL,0x02C249F4L,0UL,0xB7C7B12AL,4294967292UL},{1UL,0UL,4294967295UL,7UL,0x05E57BF4L},{4294967292UL,0xF91241E1L,0x9CFB0435L,0xB7C7B12AL,4UL},{1UL,0x2CC213E5L,4294967295UL,0x9FAD4949L,0xEF8C94D6L},{1UL,4294967295UL,4UL,0xC370A029L,0UL}},{{9UL,0UL,1UL,0xC267DE76L,0UL},{4294967286UL,0x5BEA1ABCL,0UL,4294967294UL,0x3580E5CDL},{1UL,1UL,0UL,0UL,0x2CC213E5L},{4294967286UL,0xF91241E1L,0x99D4765FL,4294967295UL,4294967293UL},{9UL,0x9FAD4949L,1UL,1UL,1UL},{1UL,4294967295UL,1UL,0xBBF6FE1FL,4294967286UL}}};
    int i, j, k;
    if ((safe_add_func_uint8_t_u_u(p_29, (safe_mod_func_uint32_t_u_u(func_36(l_40, func_42(l_40, &g_41, l_40, g_41, g_22), ((*l_67) &= ((g_56 == g_56) | g_56))), g_109)))))
    {
        int **l_110[9][9][3] = {{{&g_30,&l_40,(void*)0},{(void*)0,(void*)0,&l_40},{&l_40,(void*)0,&l_40},{&l_40,&l_40,&g_30},{(void*)0,&g_30,(void*)0},{&g_30,&l_40,&g_30},{&l_40,&l_40,&l_40},{&g_30,&g_30,&g_30},{(void*)0,(void*)0,&l_40}},{{&l_40,&l_40,(void*)0},{&l_40,(void*)0,&l_40},{(void*)0,&g_30,&g_30},{&g_30,(void*)0,&l_40},{&g_30,&g_30,&g_30},{(void*)0,&l_40,&l_40},{&l_40,&l_40,&l_40},{(void*)0,&l_40,&l_40},{&g_30,(void*)0,&l_40}},{{(void*)0,&l_40,&g_30},{(void*)0,&l_40,&l_40},{(void*)0,&l_40,&l_40},{&l_40,&l_40,&g_30},{(void*)0,(void*)0,(void*)0},{&g_30,&l_40,&g_30},{(void*)0,&l_40,&g_30},{&g_30,&l_40,&l_40},{&g_30,&g_30,(void*)0}},{{&g_30,(void*)0,&g_30},{&g_30,&g_30,(void*)0},{(void*)0,&l_40,&l_40},{&l_40,&l_40,(void*)0},{(void*)0,(void*)0,&g_30},{(void*)0,&g_30,&g_30},{(void*)0,&l_40,&l_40},{&g_30,(void*)0,&g_30},{&l_40,&g_30,&g_30}},{{&l_40,&l_40,(void*)0},{(void*)0,(void*)0,&l_40},{(void*)0,(void*)0,(void*)0},{&g_30,(void*)0,&g_30},{&l_40,&g_30,(void*)0},{&l_40,&l_40,&l_40},{&l_40,(void*)0,&g_30},{&g_30,&l_40,&g_30},{&l_40,&g_30,(void*)0}},{{&l_40,(void*)0,&g_30},{&l_40,(void*)0,&g_30},{(void*)0,&l_40,&l_40},{(void*)0,&l_40,&l_40},{&l_40,&l_40,(void*)0},{&l_40,&g_30,&l_40},{&l_40,&g_30,&l_40},{&g_30,&g_30,&g_30},{&g_30,&l_40,&l_40}},{{&g_30,&l_40,&g_30},{&g_30,&g_30,(void*)0},{(void*)0,&g_30,&l_40},{&g_30,&g_30,&g_30},{&l_40,&l_40,&l_40},{&g_30,(void*)0,&g_30},{&l_40,(void*)0,&l_40},{(void*)0,&l_40,(void*)0},{&g_30,(void*)0,(void*)0}},{{&l_40,(void*)0,&g_30},{(void*)0,&l_40,&l_40},{&l_40,&g_30,&l_40},{(void*)0,&g_30,&l_40},{&g_30,&g_30,(void*)0},{&l_40,&l_40,(void*)0},{&g_30,&l_40,&l_40},{&g_30,&g_30,(void*)0},{&l_40,&g_30,&g_30}},{{(void*)0,&g_30,&l_40},{&g_30,&l_40,&g_30},{&l_40,(void*)0,(void*)0},{(void*)0,&l_40,(void*)0},{&l_40,&g_30,&l_40},{(void*)0,&g_30,&l_40},{&l_40,&l_40,(void*)0},{&l_40,&l_40,(void*)0},{&l_40,&l_40,(void*)0}}};
        int l_145 = 0xCD18219FL;
        char l_162[10] = {0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L,0x02L};
        unsigned *l_164 = &g_137;
        unsigned *l_165[4][3] = {{&g_22,&g_68,&g_22},{&g_22,&g_68,&g_22},{&g_22,&g_68,&g_22},{&g_22,&g_68,&g_22}};
        unsigned short l_205 = 0xDCA3L;
        short **l_214 = &g_203;
        int l_223 = (-8L);
        int i, j, k;
        l_40 = (void*)0;

        ;
        for (g_22 = 0; g_22 < 9; g_22 += 1)
        {
            for (g_68 = 0; g_68 < 9; g_68 += 1)
            {
                for (p_28 = 0; p_28 < 3; p_28 += 1)
                {
                    l_110[g_22][g_68][p_28] = &g_30;
                }
            }
        }
        if (func_36(&g_41, &g_41, (safe_mod_func_uint32_t_u_u(p_29, p_28))))
        {
            unsigned **l_118 = &g_117[2];
            int **l_160 = (void*)0;
            p_29 = (0x5D51L <= g_105[6]);
            for (g_22 = 1; (g_22 <= 9); g_22 += 1)
            {
                unsigned ***l_113 = (void*)0;
                unsigned **l_115 = &l_67;
                unsigned ***l_114[7] = {&l_115,&l_115,&l_115,&l_115,&l_115,&l_115,&l_115};
                int i;
                g_30 = l_40;

                ;
                l_118 = (g_116[0] = &l_67);

                ;
            }

            ;

            ;
        }
        else
        {
            unsigned char *l_169[1][10] = {{(void*)0,(void*)0,&g_56,(void*)0,(void*)0,&g_56,(void*)0,(void*)0,&g_56,(void*)0}};
            int *l_170 = &g_41;
            short *l_209 = &g_202;
            short *l_210[4][7] = {{&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98},{(void*)0,&g_98,&g_98,(void*)0,&g_98,(void*)0,&g_98},{&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98},{&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98}};
            unsigned short l_211 = 0UL;
            short ***l_215 = &l_214;
            short **l_216 = &l_209;
            int i, j;
            if ((*p_27))
            {
                unsigned char l_173[8][5] = {{1UL,0x9DL,1UL,1UL,0x9DL},{0x9DL,1UL,1UL,0x9DL,1UL},{0x9DL,0x9DL,0x69L,0x9DL,0x9DL},{1UL,0x9DL,1UL,1UL,0x9DL},{0x9DL,1UL,1UL,0x9DL,1UL},{0x9DL,0x9DL,0x69L,0x9DL,0x9DL},{1UL,0x9DL,1UL,1UL,0x9DL},{0x9DL,1UL,1UL,0x9DL,1UL}};
                unsigned l_186 = 1UL;
                int *l_187 = (void*)0;
                unsigned short *l_190 = &g_131;
                short *l_193 = &g_98;
                short **l_199 = (void*)0;
                short *l_201 = &g_202;
                short **l_200[2][7][5] = {{{&l_201,&l_201,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_201,&l_201,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_201,&l_201,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_201,&l_201,&l_201,&l_201,&l_201}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_201,&l_201,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_201,&l_201,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_201,&l_201,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                g_171 &= func_36(func_58(l_168, func_58((l_169[0][8] = &g_56), &g_41)), l_170, (*l_170));
                for (g_171 = 0; (g_171 <= 0); g_171 += 1)
                {
                    unsigned char l_172 = 8UL;
                    unsigned short l_184 = 1UL;
                    int l_185 = (-2L);
                    if ((*p_27))
                    {
                        (*g_30) |= l_172;
                        (*g_30) ^= 0xBFC78DC0L;
                    }
                    else
                    {
                        unsigned short *l_174 = &g_133;
                        g_175 = func_49(l_173[7][3], g_98, l_173[2][0], (((*l_174) = g_128) <= (l_173[7][3] > p_29)), l_173[7][3]);
                        (*l_149) = ((g_98 & l_173[7][3]) < (*g_30));
                        return g_131;
                    }
                    g_175 = func_49(p_28, p_28, (*p_27), ((*l_149) < (safe_mod_func_uint32_t_u_u((l_173[7][1] || p_29), (l_186 = (safe_sub_func_uint8_t_u_u((l_185 &= (safe_lshift_func_int8_t_s_u((p_29 < (safe_rshift_func_uint8_t_u_u(l_184, 7))), p_28))), p_29)))))), (*l_149));
                    if ((*l_149))
                        continue;
                    l_187 = &g_41;

                    ;
                    for (p_28 = 0; (p_28 >= 0); p_28 -= 1)
                    {
                        return p_28;
                    }
                }

                ;
                (*l_170) = func_36(&g_41, func_42(&g_41, &p_29, l_149, (4294967295UL <= 4L), ((*l_190) = (p_28 | (safe_rshift_func_uint8_t_u_u(p_28, p_29))))), (*l_149));
                g_204[0][0] &= (safe_mod_func_uint32_t_u_u(((*l_67) = ((*l_164) = (((((*l_193) &= 0x5701L) ^ ((g_194[0] = &l_40) != &g_175)) >= ((((safe_mod_func_int16_t_s_s((p_28 <= (0x97EF1F1AL | (*g_30))), 8L)) < ((g_197 == (g_203 = (void*)0)) & g_119)) & g_171) > (*l_170))) <= l_173[6][1]))), (*g_30)));


                ;
            }
            else
            {
                int *l_206 = &g_41;
                for (g_202 = 7; (g_202 >= 1); g_202 -= 1)
                {
                    for (g_98 = 0; g_98 < 3; g_98 += 1)
                    {
                        g_117[g_98] = &g_68;
                    }

                    return l_205;
                }
                p_26 = (l_206 = &p_29);

                ;
                ;
            }

            ;

            ;
            (*l_149) &= (*p_27);
            if ((((*l_67) = p_29) != (safe_rshift_func_int16_t_s_u((((*l_215) = l_214) == (l_216 = &l_210[1][2])), (+p_29)))))
            {
                unsigned char *l_217 = &g_105[9];
                int *l_218 = &l_145;
                unsigned **l_219 = &g_117[1];
                (*l_170) = (((*l_219) = func_58(l_217, l_218)) == l_170);


            }
            else
            {
                unsigned short l_224 = 0xCF6DL;
                int l_225[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_225[i] = 4L;
                l_225[0] = (((**l_215) == (l_220 = &g_98)) == (safe_sub_func_uint8_t_u_u((((((((*g_30) &= l_223) == (*p_27)) | l_224) | g_131) <= (*p_27)) | (p_28 = 0xBDL)), g_22)));

                ;
                (*l_170) &= l_224;
            }


            ;
            ;
        }

        ;
        ;



        ;
        ;
    }
    else
    {
        int ***l_234 = &g_194[5];
        int l_247 = 0x57962F05L;
        short ***l_255 = (void*)0;
        int *l_272 = &l_247;
        for (g_119 = 20; (g_119 >= 16); g_119 = safe_sub_func_int16_t_s_s(g_119, 4))
        {
            int l_228 = 0x7ADA8718L;
            int ***l_230 = &g_194[2];
            int ****l_233[8] = {&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230,&l_230};
            short ****l_254 = &l_252;
            short *l_256[4][2][10] = {{{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,&g_98,&g_202,&g_202},{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202,&g_202}},{{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,&g_98,&g_202,&g_202},{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202,&g_202}},{{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,&g_98,&g_202,&g_202},{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202,&g_202}},{{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,&g_98,&g_202,&g_202},{&g_202,&g_202,(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0,&g_202,&g_202}}};
            unsigned short *l_259 = &g_133;
            unsigned short *l_260[1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_260[i][j] = (void*)0;
            }
            (*l_40) = ((g_119 > l_228) < ((*l_67) &= ((&p_27 == ((*l_230) = l_229)) || (-7L))));
            (*l_40) ^= (safe_lshift_func_uint16_t_u_s(p_28, (((*l_168) = ((l_234 = &g_194[0]) != (void*)0)) != p_28)));
            for (g_41 = 7; (g_41 >= 0); g_41 -= 1)
            {
                int i;
                l_247 = (((safe_add_func_int32_t_s_s((*g_30), (safe_rshift_func_int16_t_s_s(((0xA1L == p_28) <= 5UL), (*g_203))))) ^ (safe_add_func_uint8_t_u_u(((p_28 | (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((*l_40), (safe_sub_func_uint8_t_u_u((p_28 >= (p_28 & p_28)), p_29)))), p_29))) & (*g_203)), g_98))) && g_202);
            }
            if ((l_263[4][4][1] = ((safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(l_247, (*g_203))) ^ (((*l_254) = l_252) == (l_255 = &l_253))) >= (g_198 & (((*l_40) = p_29) ^ g_56))), (safe_lshift_func_uint16_t_u_s((g_131 |= ((*l_259) ^= p_29)), (safe_unary_minus_func_int8_t_s((g_262[3] ^ p_29))))))) < 0xBF57L)))
            {
                short **l_266 = &l_256[1][0][7];
                for (g_137 = 0; (g_137 == 19); ++g_137)
                {
                    g_267 = l_266;

                    ;
                }


            }
            else
            {
                unsigned l_268 = 0x46315E2CL;
                p_26 = &p_29;

                ;
                (*l_40) &= (*p_27);
                for (g_131 = 0; (g_131 <= 1); g_131 += 1)
                {
                    for (g_22 = 0; (g_22 <= 1); g_22 += 1)
                    {
                        return l_268;
                    }
                    return (*g_197);
                }
            }

            ;

        }

        ;
        ;

        for (p_28 = 3; (p_28 >= 0); p_28 = safe_sub_func_int8_t_s_s(p_28, 1))
        {
            int **l_271[6][2][7] = {{{&g_30,(void*)0,&g_175,&l_149,&g_30,&l_40,&g_175},{&g_175,&g_175,&g_175,&l_149,&g_30,&l_149,&g_175}},{{&g_175,&g_175,&g_175,&g_175,&l_149,&g_175,&g_30},{(void*)0,&g_30,&l_149,&g_30,&g_175,&g_175,&l_149}},{{&l_149,&g_175,(void*)0,&l_149,&l_149,&g_175,&g_175},{&l_40,&l_149,(void*)0,(void*)0,&g_30,&g_175,(void*)0}},{{&g_30,&l_149,&l_149,&l_149,&g_30,&g_175,&g_30},{&g_30,&g_175,&g_175,&g_30,&l_149,&g_175,&l_40}},{{&g_175,&l_149,&g_175,&g_175,&l_40,&g_175,&g_30},{(void*)0,&l_149,(void*)0,&l_149,&g_175,&g_175,&l_40}},{{&l_149,&g_175,&g_30,(void*)0,&g_175,&l_149,&g_30},{(void*)0,&g_175,&g_175,&g_175,&g_175,&l_40,(void*)0}}};
            int i, j, k;
            l_272 = &p_29;

            ;
            for (g_56 = (-19); (g_56 <= 10); ++g_56)
            {
                unsigned short l_275 = 0UL;
                (*l_272) = l_275;
            }
        }

        ;
        (*l_149) |= (*l_272);
    }

    ;
    ;
    ;



    ;
    ;

    (*l_149) = (safe_add_func_uint16_t_u_u(g_262[3], (&l_252 != &l_252)));
    return p_28;



}







static unsigned func_36(int * p_37, int * p_38, unsigned p_39)
{
    unsigned char *l_73 = &g_56;
    unsigned *l_78 = &g_22;
    unsigned **l_77 = &l_78;
    int l_108 = 0x08F1B1E9L;
    (*p_38) = (safe_lshift_func_uint16_t_u_s(0UL, 1));
    if ((*g_30))
    {
        char l_72 = 1L;
        unsigned char *l_74 = &g_56;
        (*p_38) ^= ((safe_unary_minus_func_uint32_t_u(l_72)) != (l_73 == l_74));
    }
    else
    {
        unsigned *l_76 = &g_22;
        unsigned **l_75 = &l_76;
        int l_81 = 0xA4792D8CL;
        int *l_107 = &l_81;
        l_77 = l_75;

        ;
        for (g_41 = 0; (g_41 != 25); g_41 = safe_add_func_uint16_t_u_u(g_41, 3))
        {
            unsigned **l_83 = &l_78;
            unsigned ***l_84 = &l_77;
            int *l_93 = &l_81;
            short *l_96 = (void*)0;
            short *l_97 = &g_98;
            unsigned l_103 = 4294967288UL;
            (*l_93) = ((l_81 >= (safe_unary_minus_func_uint32_t_u((((*l_84) = (l_83 = (void*)0)) == (void*)0)))) | (safe_mod_func_int32_t_s_s((*g_30), ((0xADC7L > (g_68 >= p_39)) | ((*l_76) = ((safe_lshift_func_uint16_t_u_u(g_56, (!(safe_sub_func_uint8_t_u_u(0x28L, 249UL))))) < (*p_37)))))));

            ;
            ;
            (*l_93) &= (safe_rshift_func_int16_t_s_u((g_68 > ((*l_97) = p_39)), ((g_41 ^ (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((0x4ED7B975L || 1L), l_103)), p_39))) > ((safe_unary_minus_func_int32_t_s((*p_37))) && g_68))));
            for (g_68 = 0; (g_68 <= 9); g_68 += 1)
            {
                int i;
                (*l_93) |= ((void*)0 != g_106);
                if (g_105[g_68])
                    break;
            }
        }

        ;
        l_81 &= (*g_30);
        (*l_107) ^= (*p_38);
    }


    for (p_39 = 0; (p_39 <= 9); p_39 += 1)
    {
        for (g_56 = 0; g_56 < 10; g_56 += 1)
        {
            g_105[g_56] = 0x15L;
        }
    }
    return l_108;
}







static int * func_42(int * p_43, int * p_44, int * p_45, unsigned p_46, unsigned short p_47)
{
    int l_48 = 1L;
    unsigned char *l_55[4] = {&g_56,&g_56,&g_56,&g_56};
    int l_57 = (-9L);
    int *l_63 = &g_41;
    int **l_66 = &l_63;
    int i;
    (*p_44) &= l_48;
    (*l_66) = func_49((l_57 = (l_48 || p_46)), g_56, ((l_63 = func_58(&g_56, &l_48)) == &g_41), ((void*)0 == &g_56), p_46);

    ;
    ;
    return p_43;


}







static int * func_49(unsigned char p_50, unsigned p_51, int p_52, unsigned char p_53, char p_54)
{
    int **l_64[8][10][2] = {{{&g_30,&g_30},{(void*)0,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,(void*)0}},{{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,&g_30}},{{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{(void*)0,&g_30}},{{(void*)0,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,&g_30}},{{&g_30,(void*)0},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,(void*)0},{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,(void*)0}},{{&g_30,&g_30},{&g_30,(void*)0},{&g_30,(void*)0},{(void*)0,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30}},{{(void*)0,(void*)0},{&g_30,(void*)0},{(void*)0,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{(void*)0,(void*)0}},{{&g_30,(void*)0},{(void*)0,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{&g_30,&g_30},{(void*)0,(void*)0},{&g_30,(void*)0}}};
    int *l_65 = (void*)0;
    int i, j, k;
    g_30 = func_58(&g_56, &g_41);

    ;
    return l_65;


}







static int * func_58(unsigned char * p_59, int * p_60)
{
    for (g_22 = (-17); (g_22 >= 26); ++g_22)
    {
        return p_60;


    }
    return &g_41;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_204[i][j], "g_204[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_286[i], "g_286[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_393[i][j][k], "g_393[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
