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

struct S1 {
   unsigned short f0;
   struct S0 f1;
   struct S0 f2;
   struct S0 f3;
   int f4;
   unsigned char f5;
   unsigned f6;
   const char f7;
};


static struct S0 g_9 = {0x09L};
static int g_19 = (-10L);
static unsigned g_27 = 0xD07DDBF4L;
static int g_47 = 0xA5C1B09CL;
static int g_77 = 0xC8CA929EL;
static const int *g_81[2][3][6] = {{{(void*)0,&g_77,(void*)0,&g_19,&g_19,(void*)0},{&g_19,&g_19,(void*)0,&g_77,(void*)0,(void*)0},{&g_19,&g_77,&g_77,&g_19,(void*)0,(void*)0}},{{(void*)0,&g_19,&g_77,&g_77,&g_19,(void*)0},{(void*)0,&g_77,(void*)0,&g_19,&g_19,(void*)0},{&g_19,&g_19,(void*)0,&g_77,(void*)0,(void*)0}}};
static const int **g_80 = &g_81[0][1][1];
static short g_85 = 8L;
static int *g_101 = &g_19;
static int **g_100 = &g_101;
static const struct S1 g_103 = {4UL,{0L},{0xE7L},{0x6DL},1L,255UL,0x1309E202L,0xAEL};
static unsigned short g_120[6] = {65534UL,65534UL,65534UL,65534UL,65534UL,65534UL};
static unsigned char g_126 = 1UL;
static unsigned g_136 = 4294967295UL;
static short g_140 = 0x1466L;
static int g_141 = 0x11123652L;
static short g_142 = 0x044FL;
static unsigned g_147[7] = {4294967295UL,0xDEFA84F3L,4294967295UL,4294967295UL,4294967295UL,1UL,1UL};
static struct S0 g_167 = {0xC5L};
static struct S0 *g_166 = &g_167;
static int g_206 = 0x90666A6AL;
static unsigned short g_216 = 0x4839L;
static const char *g_229[1][5][9] = {{{(void*)0,&g_103.f7,&g_103.f7,(void*)0,(void*)0,&g_103.f7,(void*)0,(void*)0,&g_103.f7},{&g_103.f1.f0,&g_103.f1.f0,(void*)0,&g_103.f3.f0,&g_103.f1.f0,&g_103.f3.f0,(void*)0,&g_103.f1.f0,&g_103.f1.f0},{&g_103.f7,(void*)0,(void*)0,&g_103.f7,(void*)0,(void*)0,&g_103.f7,&g_103.f7,(void*)0},{&g_103.f3.f0,(void*)0,(void*)0,(void*)0,&g_103.f3.f0,&g_103.f2.f0,&g_103.f2.f0,&g_103.f3.f0,(void*)0},{&g_103.f7,(void*)0,&g_103.f7,&g_103.f7,&g_167.f0,&g_167.f0,&g_103.f7,&g_103.f7,(void*)0}}};
static short g_230 = 1L;
static unsigned g_252 = 0xAC924029L;
static struct S0 **g_255 = &g_166;
static struct S1 g_263 = {0UL,{0x6CL},{-7L},{0x5AL},1L,0x5FL,0x62337F8DL,-1L};
static short g_290 = 0xF648L;
static int g_291 = (-5L);
static char g_292 = (-4L);
static unsigned g_293 = 0UL;
static char g_325 = (-1L);
static char g_326[7] = {1L,1L,1L,1L,1L,1L,1L};
static short g_327 = 0x4A28L;
static short g_328 = (-8L);
static unsigned char g_329 = 0x47L;
static unsigned g_395[9][8] = {{0x5D41152DL,1UL,4294967295UL,0x3EEE8544L,0x3BEA1271L,0x3BEA1271L,0x3EEE8544L,4294967295UL},{0x5D41152DL,0x5D41152DL,4294967292UL,0xFC8C08B6L,0x3EEE8544L,0x5A43EBCEL,0x5D41152DL,0x3EEE8544L},{4294967295UL,0x3EEE8544L,1UL,4294967295UL,0xF67719E0L,4294967295UL,1UL,0x3EEE8544L},{0x3EEE8544L,0xC25B8416L,4294967295UL,0xFC8C08B6L,0xC25B8416L,1UL,0xF67719E0L,4294967295UL},{1UL,0xF67719E0L,4294967292UL,0x3EEE8544L,0x3EEE8544L,4294967292UL,0xF67719E0L,1UL},{4294967295UL,0xFC8C08B6L,0x3BEA1271L,4294967295UL,1UL,4294967295UL,4294967295UL,0x5D41152DL},{1UL,4294967295UL,4294967295UL,0x5D41152DL,4294967295UL,4294967295UL,1UL,4294967295UL},{0xF67719E0L,0xFC8C08B6L,4294967295UL,0xF67719E0L,0x3EEE8544L,2UL,0xFC8C08B6L,0xFC8C08B6L},{4294967295UL,0x3EEE8544L,0x3BEA1271L,0x3BEA1271L,0x3EEE8544L,4294967295UL,1UL,0x5D41152DL}};
static unsigned short g_458 = 0UL;
static char g_466 = 1L;



static char func_1(void);
static struct S0 func_2(struct S0 p_3, unsigned p_4, struct S0 p_5, unsigned short p_6, const unsigned char p_7);
static unsigned short func_10(short p_11);
static int * func_30(unsigned short p_31, struct S0 p_32, int p_33, struct S1 p_34, unsigned char p_35);
static struct S0 * func_38(int * p_39, unsigned char p_40);
static int * func_41(int * const p_42, struct S0 * p_43);
static int ** func_50(unsigned p_51);
static unsigned func_54(int ** p_55);
static int ** func_56(short p_57, char p_58, struct S0 * p_59, unsigned p_60);
static short func_61(int p_62, int * p_63, int * p_64);
static char func_1(void)
{
    struct S0 l_8 = {0x00L};
    int *l_45 = &g_19;
    int **l_44 = &l_45;
    struct S0 *l_319 = (void*)0;
    int *l_332 = &g_263.f4;
    struct S0 *l_504 = &g_263.f3;
    short l_505 = 0x35ADL;
    unsigned char *l_508 = &g_329;
    unsigned *l_511[1][2][10] = {{{(void*)0,&g_136,&g_147[2],&g_147[2],&g_136,(void*)0,(void*)0,(void*)0,&g_136,&g_147[2]},{&g_27,&g_263.f6,&g_27,&g_147[2],(void*)0,(void*)0,&g_147[2],&g_27,&g_263.f6,&g_27}}};
    int l_514[7] = {0xF4C4FE3FL,0xF4C4FE3FL,0x1A6DC4F1L,0xF4C4FE3FL,0xF4C4FE3FL,0x1A6DC4F1L,0xF4C4FE3FL};
    short *l_515 = &g_327;
    unsigned l_516 = 4294967293UL;
    unsigned l_517 = 0x28B4E32EL;
    struct S1 l_518 = {0x9CC5L,{0xDDL},{0x1DL},{0xF2L},0L,0xAFL,4294967290UL,0xDBL};
    int i, j, k;
    (*l_504) = func_2(l_8, l_8.f0, g_9, func_10(l_8.f0), (((*l_44) = func_30(g_9.f0, l_8, (safe_sub_func_uint16_t_u_u(((&l_8 == (l_319 = func_38(func_41(((*l_44) = &g_19), &l_8), g_103.f1.f0))) != l_8.f0), g_263.f5)), g_103, g_290)) == l_332));
    (*g_100) = (*g_100);
    l_505 = ((*l_332) && g_120[5]);
    (*l_44) = func_30(g_47, func_2((*g_166), (*l_332), (*l_504), (((((*l_515) = func_61((safe_mod_func_int16_t_s_s(((((((*l_508) = g_103.f2.f0) > (((&g_85 != &l_505) ^ (safe_sub_func_uint32_t_u_u((g_395[2][5]--), l_514[1]))) ^ g_103.f2.f0)) & (*l_332)) ^ (*l_332)) | g_325), g_126)), (*g_100), (*g_100))) != l_516) == l_517) ^ (*l_332)), g_103.f1.f0), (*l_332), l_518, g_9.f0);
    return (*l_332);
}







static struct S0 func_2(struct S0 p_3, unsigned p_4, struct S0 p_5, unsigned short p_6, const unsigned char p_7)
{
    unsigned **l_335 = (void*)0;
    short *l_340 = &g_328;
    int l_341 = (-1L);
    struct S1 *l_348[1];
    struct S1 ** const l_347 = &l_348[0];
    struct S1 ** const *l_346 = &l_347;
    short l_354 = 0xB9BFL;
    struct S0 **l_376 = &g_166;
    int l_392[1][4];
    unsigned char *l_400 = (void*)0;
    int l_410 = 0x3A3B31FDL;
    int *l_424 = (void*)0;
    int **l_423 = &l_424;
    struct S0 l_484 = {0L};
    unsigned char l_485 = 0x79L;
    int l_486 = 0x67ABEDC6L;
    unsigned l_488 = 0UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_348[i] = &g_263;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_392[i][j] = 0x7F3EB5AFL;
    }
    if ((safe_lshift_func_uint16_t_u_u((l_335 == l_335), (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((-1L), ((*l_340) = p_4))) < (l_341 == 0x0C00E2A9L)), 6)))))
    {
        unsigned short *l_349 = &g_216;
        char *l_355 = (void*)0;
        char *l_356 = (void*)0;
        char *l_357 = &g_263.f1.f0;
        const int l_358[10][1] = {{1L},{0x34D3A08BL},{1L},{0x34D3A08BL},{1L},{0x34D3A08BL},{1L},{0x34D3A08BL},{1L},{0x34D3A08BL}};
        int l_359 = 9L;
        int *l_360[5] = {&g_77,&g_77,&g_77,&g_77,&g_77};
        struct S0 l_363 = {0xC2L};
        int * const l_402 = &g_206;
        int * const *l_401[7] = {&l_402,&l_402,&l_402,&l_402,&l_402,&l_402,&l_402};
        unsigned **l_432 = (void*)0;
        struct S1 l_472 = {0x98E1L,{-1L},{0xA2L},{2L},-1L,8UL,0x25772441L,-1L};
        unsigned char l_480 = 0UL;
        unsigned char *l_483 = &g_126;
        int **l_487 = &l_360[1];
        int i, j;
        if ((safe_lshift_func_uint8_t_u_u(func_61(((&l_340 != (void*)0) > (safe_add_func_int16_t_s_s(9L, (((*l_349) &= (p_5.f0 < (l_341 >= (l_346 != (void*)0)))) & func_10((l_359 ^= (safe_add_func_uint32_t_u_u((g_147[5] |= (((((safe_mul_func_int8_t_s_s(((*l_357) = (g_292 ^= (((0xFA59L & (-7L)) == l_354) != p_3.f0))), l_358[7][0])) == p_4) && p_3.f0) >= l_354) && g_103.f5)), l_341)))))))), l_360[1], (*g_100)), p_3.f0)))
        {
            int l_361 = 0L;
            int l_362 = 0xA0429A4FL;
            l_362 ^= l_361;
            for (l_341 = 1; (l_341 <= 5); l_341 += 1)
            {
                return l_363;
            }
        }
        else
        {
            int *l_373 = &g_19;
            struct S1 l_384 = {65531UL,{0x07L},{0xE2L},{0x15L},0L,0xCCL,0UL,0x85L};
            unsigned l_388 = 0xDB7756A1L;
            int l_393 = 0x1F47291FL;
            int l_394 = 0xB05B6C17L;
            unsigned *l_412 = (void*)0;
            unsigned **l_411 = &l_412;
            short l_416 = (-6L);
            for (g_140 = 0; (g_140 <= 11); g_140 = safe_add_func_int16_t_s_s(g_140, 1))
            {
                unsigned char l_366 = 3UL;
                int *l_374 = &g_19;
                l_366--;
                for (g_327 = (-27); (g_327 == (-30)); g_327 = safe_sub_func_uint8_t_u_u(g_327, 4))
                {
                    struct S0 **l_375 = (void*)0;
                    for (g_290 = 0; (g_290 > (-7)); g_290--)
                    {
                        return p_5;
                    }
                    g_141 &= (0x0281L & (g_103.f1.f0 == func_61(p_5.f0, l_373, ((*g_100) = l_374))));
                    if (p_3.f0)
                        break;
                    l_376 = l_375;
                }
                if (((safe_mul_func_int8_t_s_s(((*l_357) = (p_6 <= g_147[4])), (safe_add_func_int32_t_s_s(0x9BF1A73DL, (*l_374))))) >= ((safe_add_func_uint32_t_u_u(4294967295UL, p_6)) <= 0x801EF4C1L)))
                {
                    int *l_383 = &g_206;
                    (*g_80) = (*g_100);
                    (*g_100) = func_30(g_140, p_5, ((*l_383) = (p_4 <= l_341)), l_384, (safe_lshift_func_uint16_t_u_u((func_61((l_354 == p_6), l_374, l_383) != 0xBCL), g_9.f0)));
                    (*l_374) = p_3.f0;
                }
                else
                {
                    short l_387 = 0x6D17L;
                    if (l_387)
                        break;
                }
            }
            g_291 &= (((*l_373) ^= (+p_4)) > ((void*)0 != &g_166));
            if ((0L ^ l_388))
            {
                (*l_373) = 9L;
                for (l_354 = 21; (l_354 == 23); ++l_354)
                {
                    short l_391 = (-3L);
                    unsigned char *l_399 = &g_263.f5;
                    unsigned char **l_398[9];
                    unsigned ***l_413 = &l_335;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_398[i] = &l_399;
                    ++g_395[2][5];
                    if (((*l_373) &= ((l_400 = &g_126) != &g_329)))
                    {
                        int * const **l_403 = (void*)0;
                        int * const **l_404 = (void*)0;
                        int * const **l_405 = &l_401[6];
                        (*l_405) = l_401[2];
                    }
                    else
                    {
                        unsigned l_406 = 0xB1F418CDL;
                        struct S0 l_409 = {1L};
                        --l_406;
                        return l_409;
                    }
                    if (l_410)
                        break;
                    (*l_413) = l_411;
                }
            }
            else
            {
                char *l_427[6][2] = {{&l_384.f2.f0,(void*)0},{&g_325,&g_325},{&g_325,(void*)0},{&l_384.f2.f0,&l_384.f1.f0},{(void*)0,&l_384.f1.f0},{&l_384.f2.f0,(void*)0}};
                int l_428 = 0x03CC5A4AL;
                int l_429 = 0x10A282EDL;
                unsigned ***l_433 = &l_432;
                unsigned **l_434[6][5] = {{&l_412,&l_412,&l_412,(void*)0,&l_412},{&l_412,(void*)0,(void*)0,&l_412,(void*)0},{&l_412,&l_412,&l_412,&l_412,&l_412},{(void*)0,&l_412,(void*)0,(void*)0,&l_412},{&l_412,(void*)0,(void*)0,&l_412,(void*)0},{&l_412,&l_412,&l_412,&l_412,&l_412}};
                unsigned ***l_435[4] = {&l_335,&l_335,&l_335,&l_335};
                struct S1 *l_449 = &g_263;
                struct S1 **l_448 = &l_449;
                unsigned l_450 = 0xCF27C97FL;
                int **l_451 = &l_360[3];
                int l_456 = 0L;
                struct S0 *l_473 = (void*)0;
                int i, j;
                l_429 &= ((safe_sub_func_int8_t_s_s(((*l_357) ^= ((l_416 && g_263.f4) && ((*l_373) |= (safe_mul_func_int8_t_s_s((0xC54B03DBL > (safe_lshift_func_int16_t_s_s(((++(*l_349)) && ((void*)0 == l_423)), 4))), 0L))))), (l_428 = (safe_mod_func_uint8_t_u_u(p_5.f0, l_392[0][0]))))) | p_6);
                (*l_373) = (safe_add_func_uint8_t_u_u(1UL, (((*l_433) = l_432) != (l_411 = l_434[1][2]))));
                (*l_451) = ((*g_100) = func_30(((0x03L ^ 0x3FL) <= g_103.f0), l_363, (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_5.f0, (safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((func_61((safe_mod_func_uint16_t_u_u(p_5.f0, (((*l_347) != ((*l_448) = (*l_347))) && 0xA4E3L))), &l_428, &l_359) != l_341) ^ 1UL), g_230)), 7)))), g_103.f1.f0)) & 0x9ED2F006L) < (-2L)), l_450)), g_263, p_3.f0));
                for (g_325 = 1; (g_325 >= (-20)); g_325 = safe_sub_func_int16_t_s_s(g_325, 6))
                {
                    int l_454 = 1L;
                    int *l_465[6][10][4] = {{{(void*)0,&l_429,&l_392[0][1],&l_359},{&g_47,&l_394,&g_19,&g_141},{&l_393,&g_19,&l_392[0][1],(void*)0},{&l_359,&g_19,&l_429,&l_429},{&l_456,&l_428,(void*)0,&g_291},{(void*)0,(void*)0,&l_392[0][0],&l_456},{(void*)0,&g_263.f4,&l_394,(void*)0},{&l_429,(void*)0,&g_291,(void*)0},{&l_394,&g_291,&g_263.f4,&g_263.f4},{&l_384.f4,&l_384.f4,&l_456,&l_456}},{{&g_291,&l_429,&g_141,(void*)0},{(void*)0,&l_393,&l_428,&g_141},{&g_291,&l_393,&l_429,(void*)0},{&l_393,&l_429,&l_429,&l_456},{(void*)0,&l_384.f4,&g_19,&g_263.f4},{(void*)0,&g_291,(void*)0,(void*)0},{&l_429,&l_392[0][1],&l_384.f4,&l_428},{(void*)0,&g_77,(void*)0,&l_392[0][0]},{&l_456,&l_429,&l_341,&l_429},{&l_392[0][3],(void*)0,&g_141,(void*)0}},{{&l_341,&g_19,&g_141,&l_429},{&l_393,&g_77,(void*)0,&g_19},{&l_392[0][0],&g_141,&l_429,&g_263.f4},{&l_341,(void*)0,&l_384.f4,&l_392[0][0]},{&l_392[0][3],(void*)0,&g_291,&l_384.f4},{&l_428,(void*)0,&l_428,&l_392[0][1]},{&l_456,(void*)0,&l_384.f4,&l_429},{&g_141,&g_141,&l_428,(void*)0},{&l_429,&g_263.f4,&l_428,&l_359},{&g_141,(void*)0,&l_384.f4,(void*)0}},{{&l_456,(void*)0,&l_428,&l_392[0][0]},{&l_428,&l_392[0][0],&g_291,&g_141},{&l_392[0][3],&g_77,&l_384.f4,&l_456},{&l_341,&g_19,&l_429,&l_359},{&l_392[0][0],&l_392[0][3],(void*)0,&l_392[0][3]},{&l_393,&l_428,&g_141,&g_263.f4},{&l_341,(void*)0,&g_141,&g_291},{&l_392[0][3],&l_429,&l_341,&g_141},{&l_456,(void*)0,(void*)0,&l_392[0][0]},{(void*)0,&g_47,&l_384.f4,&g_19}},{{(void*)0,&l_341,&g_77,(void*)0},{&l_384.f4,(void*)0,(void*)0,&l_384.f4},{(void*)0,&l_392[0][3],&l_393,&g_141},{&g_47,&l_359,&l_429,&l_341},{&l_393,&l_393,&g_291,&l_341},{&g_77,&l_359,&g_291,&g_141},{&l_429,&l_392[0][3],(void*)0,&l_384.f4},{&l_456,(void*)0,&g_291,(void*)0},{&g_77,&l_341,&l_341,&g_19},{(void*)0,&g_19,&g_77,&l_392[0][0]}},{{&g_77,(void*)0,&l_392[0][0],&g_77},{&g_263.f4,&g_47,&g_141,&g_77},{&l_359,(void*)0,&l_393,&g_47},{&g_47,&l_341,&l_359,&g_291},{&l_394,(void*)0,(void*)0,&g_47},{(void*)0,&l_428,&g_141,&g_141},{&l_456,&l_392[0][1],&g_141,&l_341},{&l_393,(void*)0,&g_141,(void*)0},{(void*)0,&l_359,(void*)0,&l_429},{(void*)0,&g_263.f4,(void*)0,&g_47}}};
                    int *** const l_471 = &l_451;
                    int i, j, k;
                    for (g_263.f5 = 0; (g_263.f5 <= 6); g_263.f5 += 1)
                    {
                        int l_455 = (-1L);
                        int l_457[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_457[i] = 0xA1003AA5L;
                        g_77 |= func_10(g_147[g_263.f5]);
                        g_458--;
                        (*l_373) |= l_455;
                        g_466 |= (l_392[0][0] = (safe_sub_func_int32_t_s_s((p_6 <= (safe_rshift_func_uint16_t_u_u(l_341, g_263.f7))), ((void*)0 != l_465[2][6][2]))));
                    }
                    if (p_4)
                        continue;
                    (*l_451) = (**l_471);
                }
            }
        }
        (*l_487) = ((*g_100) = func_30(((func_61(p_5.f0, (*g_100), func_30((0xA6L | ((*l_483) = ((safe_lshift_func_int8_t_s_u(p_6, 5)) == (((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_480, (safe_lshift_func_int8_t_s_s((0x688A32F2L & 3UL), 1)))), g_263.f5)) | 0x09L) < p_5.f0)))), l_484, g_230, (***l_346), l_485)) > 0xBE72L) < l_392[0][2]), p_5, l_341, g_263, l_486));
        for (l_484.f0 = 6; (l_484.f0 >= 0); l_484.f0 -= 1)
        {
            int i;
            if (g_147[l_484.f0])
            {
                if (l_488)
                    break;
            }
            else
            {
                p_5 = p_3;
                if (p_3.f0)
                    continue;
                if (p_4)
                    continue;
            }
        }
    }
    else
    {
        unsigned *l_492 = &g_27;
        unsigned **l_491 = &l_492;
        unsigned short *l_497 = &g_458;
        int l_498[1][5];
        char *l_501[8][6] = {{&g_292,&l_484.f0,&g_325,&g_326[3],&g_325,&l_484.f0},{&g_325,&g_292,&g_9.f0,&g_167.f0,&g_167.f0,&g_9.f0},{&g_325,&g_325,&g_167.f0,&g_292,&g_325,&g_292},{&l_484.f0,&g_167.f0,&l_484.f0,&g_326[3],&g_9.f0,&g_9.f0},{(void*)0,&l_484.f0,&l_484.f0,(void*)0,&g_167.f0,&g_292},{&g_292,(void*)0,&g_9.f0,(void*)0,&g_292,&g_326[3]},{(void*)0,&g_292,&g_326[3],&g_326[3],&g_292,(void*)0},{&l_484.f0,(void*)0,&g_167.f0,&g_292,&g_167.f0,(void*)0}};
        int l_502 = 9L;
        int *l_503 = &g_141;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_498[i][j] = 0x49963651L;
        }
        (*l_503) = (safe_sub_func_uint16_t_u_u((l_392[0][1] != (((void*)0 == l_491) | (safe_rshift_func_uint16_t_u_s(((*l_497) = (p_5.f0 >= (safe_rshift_func_uint8_t_u_u(p_4, 1)))), (l_498[0][4] | (safe_lshift_func_int8_t_s_s((l_502 ^= (g_326[3] = func_10(l_498[0][4]))), p_6))))))), 0xEB32L));
    }
    return p_3;
}







static unsigned short func_10(short p_11)
{
    struct S0 l_12 = {0x61L};
    struct S0 *l_13 = &l_12;
    int l_25 = 0xC3D6C1DFL;
    (*l_13) = l_12;
    for (p_11 = 0; (p_11 < (-3)); p_11 = safe_sub_func_int8_t_s_s(p_11, 1))
    {
        return p_11;
    }
    for (l_12.f0 = 0; (l_12.f0 > (-21)); l_12.f0 = safe_sub_func_int8_t_s_s(l_12.f0, 5))
    {
        int *l_18 = &g_19;
        int *l_20 = &g_19;
        int *l_21 = &g_19;
        int *l_22 = &g_19;
        int *l_23 = (void*)0;
        int *l_24[10];
        short l_26 = (-9L);
        int i;
        for (i = 0; i < 10; i++)
            l_24[i] = &g_19;
        --g_27;
        if (l_25)
            break;
        for (p_11 = 9; (p_11 >= 0); p_11 -= 1)
        {
            int i;
            if (g_19)
                break;
        }
        if (g_19)
            break;
    }
    return g_19;
}







static int * func_30(unsigned short p_31, struct S0 p_32, int p_33, struct S1 p_34, unsigned char p_35)
{
    int *l_320 = &g_291;
    int *l_321 = &g_291;
    int *l_322 = &g_291;
    int *l_323 = &g_141;
    int *l_324[8] = {(void*)0,(void*)0,&g_47,(void*)0,(void*)0,&g_47,(void*)0,(void*)0};
    int i;
    --g_329;
    return l_324[0];
}







static struct S0 * func_38(int * p_39, unsigned char p_40)
{
    struct S1 *l_317 = (void*)0;
    struct S1 **l_316 = &l_317;
    struct S1 ***l_315 = &l_316;
    int *l_318[6][6][5] = {{{&g_141,(void*)0,&g_19,(void*)0,(void*)0},{(void*)0,(void*)0,&g_141,&g_291,&g_19},{&g_291,(void*)0,&g_47,&g_291,(void*)0},{&g_141,(void*)0,&g_141,(void*)0,&g_47},{&g_291,(void*)0,&g_141,&g_47,&g_19},{(void*)0,&g_291,&g_47,(void*)0,&g_47}},{{&g_141,&g_291,&g_141,(void*)0,(void*)0},{(void*)0,(void*)0,&g_19,(void*)0,&g_19},{(void*)0,(void*)0,&g_47,&g_47,(void*)0},{&g_141,(void*)0,&g_19,(void*)0,(void*)0},{(void*)0,(void*)0,&g_141,&g_291,&g_141},{&g_19,&g_77,&g_291,&g_19,&g_19}},{{(void*)0,&g_263.f4,&g_263.f4,&g_141,(void*)0},{&g_19,&g_77,&g_263.f4,&g_47,&g_141},{&g_77,&g_19,&g_291,(void*)0,(void*)0},{(void*)0,&g_19,&g_19,&g_141,&g_19},{&g_263.f4,&g_77,&g_141,(void*)0,&g_141},{&g_263.f4,&g_263.f4,&g_291,&g_47,&g_141}},{{(void*)0,&g_77,&g_141,&g_141,&g_141},{&g_77,&g_77,&g_19,&g_19,&g_141},{&g_19,&g_77,&g_291,&g_19,&g_19},{(void*)0,&g_263.f4,&g_263.f4,&g_141,(void*)0},{&g_19,&g_77,&g_263.f4,&g_47,&g_141},{&g_77,&g_19,&g_291,(void*)0,(void*)0}},{{(void*)0,&g_19,&g_19,&g_141,&g_19},{&g_263.f4,&g_77,&g_141,(void*)0,&g_141},{&g_263.f4,&g_263.f4,&g_291,&g_47,&g_141},{(void*)0,&g_77,&g_141,&g_141,&g_141},{&g_77,&g_77,&g_19,&g_19,&g_141},{&g_19,&g_77,&g_291,&g_19,&g_19}},{{(void*)0,&g_141,&g_291,&g_77,&g_19},{&g_141,&g_47,&g_291,&g_263.f4,&g_291},{&g_19,&g_141,&g_263.f4,&g_77,&g_19},{(void*)0,&g_141,&g_141,&g_77,(void*)0},{&g_141,&g_47,&g_291,&g_77,&g_291},{&g_141,&g_141,&g_263.f4,&g_263.f4,&g_47}}};
    int i, j, k;
    (*g_100) = p_39;
    g_47 = (l_315 != (void*)0);
    g_77 = ((**l_315) != (**l_315));
    return (*g_255);
}







static int * func_41(int * const p_42, struct S0 * p_43)
{
    int *l_46 = &g_47;
    struct S0 *l_65 = (void*)0;
    struct S0 *l_67 = &g_9;
    struct S0 **l_66 = &l_67;
    char l_88 = 0x50L;
    int l_204 = (-1L);
    int ***l_218 = (void*)0;
    int ***l_219[9] = {&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100};
    unsigned l_279 = 0x6B8790D5L;
    char l_289 = 0xF7L;
    int i;
    if (((((*l_46) = g_9.f0) ^ ((safe_mul_func_uint8_t_u_u((((g_100 = func_50(((safe_add_func_int16_t_s_s(g_9.f0, (func_54(func_56(func_61((l_65 == ((*l_66) = &g_9)), l_46, &g_19), (safe_lshift_func_int16_t_s_u((g_19 != 0x39L), l_88)), &g_9, g_19)) <= 0xA6DA849FL))) | l_204))) != &p_42) <= g_103.f1.f0), 0UL)) ^ (*p_42))) <= g_103.f7))
    {
        char l_220[4];
        int ***l_224 = (void*)0;
        unsigned * const *l_225 = (void*)0;
        char l_233 = 0x4DL;
        short l_239 = 0xD4F5L;
        int l_251 = (-7L);
        int l_253[6] = {0L,0L,0L,0L,0L,0L};
        int *l_280 = &g_19;
        unsigned l_281 = 4294967295UL;
        int i;
        for (i = 0; i < 4; i++)
            l_220[i] = 0xAEL;
        for (g_140 = 5; (g_140 >= 0); g_140 -= 1)
        {
            const short *l_222 = &g_140;
            const short **l_221 = &l_222;
            int l_223 = 0x843EA291L;
            int *l_232[3][7] = {{&g_19,&g_19,&l_204,(void*)0,&g_19,(void*)0,&l_204},{&g_19,&g_19,&g_19,&g_19,&l_223,&g_19,&l_223},{&g_19,&l_204,&l_204,&g_19,(void*)0,&g_19,&g_19}};
            unsigned short l_234 = 4UL;
            int l_249 = 0xD675C657L;
            struct S1 *l_262 = &g_263;
            struct S1 **l_261 = &l_262;
            int i, j;
            l_223 ^= (l_220[3] >= (l_221 == &l_222));
            (*l_46) = (&g_100 != l_224);
            for (g_167.f0 = 0; (g_167.f0 <= 5); g_167.f0 += 1)
            {
                unsigned * const **l_226 = &l_225;
                int l_231[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_231[i][j] = (-5L);
                }
                (*l_226) = l_225;
                l_233 ^= func_61((l_231[0][0] = (g_230 = (g_141 = ((*l_46) = (safe_add_func_uint16_t_u_u((0L > func_61((*p_42), (*g_100), (*g_100))), (g_229[0][3][6] == &l_220[3]))))))), l_232[0][4], (*g_100));
                for (g_126 = 0; (g_126 <= 3); g_126 += 1)
                {
                    --l_234;
                }
            }
            for (l_233 = 5; (l_233 >= 0); l_233 -= 1)
            {
                unsigned short l_237 = 1UL;
                unsigned *l_238[7] = {&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136};
                int l_240[10][6][4] = {{{0xC03D4C3EL,0x0BA7A7D8L,0x3D1B2EE9L,0x7C71321DL},{0x59659D1DL,0x0BA7A7D8L,0xA50DC033L,0x0BA7A7D8L},{0x3D1B2EE9L,9L,0xA50DC033L,0x43D952B0L},{0x59659D1DL,0x26975CEAL,0x3D1B2EE9L,0x43D952B0L},{0xC03D4C3EL,9L,0xC03D4C3EL,0x0BA7A7D8L},{0xC03D4C3EL,0x0BA7A7D8L,0x59659D1DL,0x0BA7A7D8L}},{{(-4L),0x26975CEAL,0xC03D4C3EL,0x26975CEAL},{0x59659D1DL,0x43D952B0L,0xC03D4C3EL,0x7C71321DL},{(-4L),9L,0x59659D1DL,0x7C71321DL},{0x3D1B2EE9L,0x43D952B0L,0x3D1B2EE9L,0x26975CEAL},{0x3D1B2EE9L,0x26975CEAL,0x59659D1DL,0x0BA7A7D8L},{(-4L),0x26975CEAL,0xC03D4C3EL,0x26975CEAL}},{{0x59659D1DL,0x43D952B0L,0xC03D4C3EL,0x7C71321DL},{(-4L),9L,0x59659D1DL,0x7C71321DL},{0x3D1B2EE9L,0x43D952B0L,0x3D1B2EE9L,0x26975CEAL},{0x3D1B2EE9L,0x26975CEAL,0x59659D1DL,0x0BA7A7D8L},{(-4L),0x26975CEAL,0xC03D4C3EL,0x26975CEAL},{0x59659D1DL,0x43D952B0L,0xC03D4C3EL,0x7C71321DL}},{{(-4L),9L,0x59659D1DL,0x7C71321DL},{0x3D1B2EE9L,0x43D952B0L,0x3D1B2EE9L,0x26975CEAL},{0x3D1B2EE9L,0x26975CEAL,0x59659D1DL,0x0BA7A7D8L},{(-4L),0x26975CEAL,0xC03D4C3EL,0x26975CEAL},{0x59659D1DL,0x43D952B0L,0xC03D4C3EL,0x7C71321DL},{(-4L),9L,0x59659D1DL,0x7C71321DL}},{{0x3D1B2EE9L,0x43D952B0L,0x3D1B2EE9L,0x26975CEAL},{0x3D1B2EE9L,0x26975CEAL,0x59659D1DL,0x0BA7A7D8L},{(-4L),0x26975CEAL,0xC03D4C3EL,0x26975CEAL},{0x59659D1DL,0x43D952B0L,0xC03D4C3EL,0x7C71321DL},{(-4L),9L,0x59659D1DL,0x7C71321DL},{0x3D1B2EE9L,0x26975CEAL,0xA50DC033L,0x7C71321DL}},{{0xA50DC033L,0x7C71321DL,0xC03D4C3EL,0x43D952B0L},{0x3D1B2EE9L,0x7C71321DL,(-4L),0x7C71321DL},{0xC03D4C3EL,0x26975CEAL,(-4L),9L},{0x3D1B2EE9L,0x0BA7A7D8L,0xC03D4C3EL,9L},{0xA50DC033L,0x26975CEAL,0xA50DC033L,0x7C71321DL},{0xA50DC033L,0x7C71321DL,0xC03D4C3EL,0x43D952B0L}},{{0x3D1B2EE9L,0x7C71321DL,(-4L),0x7C71321DL},{0xC03D4C3EL,0x26975CEAL,(-4L),9L},{0x3D1B2EE9L,0x0BA7A7D8L,0xC03D4C3EL,9L},{0xA50DC033L,0x26975CEAL,0xA50DC033L,0x7C71321DL},{0xA50DC033L,0x7C71321DL,0xC03D4C3EL,0x43D952B0L},{0x3D1B2EE9L,0x7C71321DL,(-4L),0x7C71321DL}},{{0xC03D4C3EL,0x26975CEAL,(-4L),9L},{0x3D1B2EE9L,0x0BA7A7D8L,0xC03D4C3EL,9L},{0xA50DC033L,0x26975CEAL,0xA50DC033L,0x7C71321DL},{0xA50DC033L,0x7C71321DL,0xC03D4C3EL,0x43D952B0L},{0x3D1B2EE9L,0x7C71321DL,(-4L),0x7C71321DL},{0xC03D4C3EL,0x26975CEAL,(-4L),9L}},{{0x3D1B2EE9L,0x0BA7A7D8L,0xC03D4C3EL,9L},{0xA50DC033L,0x26975CEAL,0xA50DC033L,0x7C71321DL},{0xA50DC033L,0x7C71321DL,0xC03D4C3EL,0x43D952B0L},{0x3D1B2EE9L,0x7C71321DL,(-4L),0x7C71321DL},{0xC03D4C3EL,0x26975CEAL,(-4L),9L},{0x3D1B2EE9L,0x26975CEAL,0x3D1B2EE9L,0x43D952B0L}},{{0xC03D4C3EL,9L,0xC03D4C3EL,0x0BA7A7D8L},{0xC03D4C3EL,0x0BA7A7D8L,0x3D1B2EE9L,0x7C71321DL},{0x59659D1DL,0x0BA7A7D8L,0xA50DC033L,0x0BA7A7D8L},{0x3D1B2EE9L,9L,0xA50DC033L,0x43D952B0L},{0x59659D1DL,0x26975CEAL,0x3D1B2EE9L,0x43D952B0L},{0xC03D4C3EL,9L,0xC03D4C3EL,0x0BA7A7D8L}}};
                char l_250 = (-4L);
                int *l_278 = &l_253[3];
                int i, j, k;
                l_253[4] ^= (g_252 &= (l_251 |= (l_250 = (+(((l_237 & l_237) & ((++g_136) & ((*l_46) = (*p_42)))) ^ (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((l_240[4][4][3] ^= ((safe_rshift_func_uint16_t_u_u(func_61((*p_42), &l_223, &l_240[0][2][0]), l_249)) <= l_220[1])), l_239)), l_237)))))));
                for (l_223 = 4; (l_223 >= 0); l_223 -= 1)
                {
                    unsigned char l_256 = 246UL;
                    struct S0 *l_267 = &g_263.f2;
                    int l_268 = 1L;
                    for (l_239 = 0; (l_239 <= 1); l_239 += 1)
                    {
                        struct S0 ***l_254[7][8][4] = {{{&l_66,(void*)0,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66},{(void*)0,(void*)0,&l_66,&l_66},{&l_66,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66}},{{&l_66,(void*)0,&l_66,&l_66},{(void*)0,(void*)0,(void*)0,&l_66},{&l_66,&l_66,&l_66,(void*)0},{&l_66,(void*)0,&l_66,(void*)0},{&l_66,(void*)0,&l_66,&l_66},{&l_66,&l_66,&l_66,(void*)0},{&l_66,(void*)0,&l_66,&l_66},{&l_66,&l_66,&l_66,(void*)0}},{{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66},{&l_66,&l_66,&l_66,&l_66},{(void*)0,&l_66,&l_66,&l_66},{&l_66,&l_66,&l_66,&l_66}},{{(void*)0,(void*)0,&l_66,&l_66},{(void*)0,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,(void*)0},{(void*)0,&l_66,&l_66,&l_66},{(void*)0,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66}},{{&l_66,&l_66,&l_66,(void*)0},{(void*)0,&l_66,&l_66,&l_66},{(void*)0,&l_66,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66},{(void*)0,(void*)0,&l_66,(void*)0},{(void*)0,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66},{(void*)0,&l_66,&l_66,(void*)0}},{{&l_66,&l_66,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66},{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,(void*)0,&l_66},{&l_66,(void*)0,&l_66,&l_66},{&l_66,&l_66,(void*)0,&l_66},{&l_66,&l_66,&l_66,&l_66},{&l_66,(void*)0,&l_66,&l_66}},{{&l_66,&l_66,(void*)0,&l_66},{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,(void*)0,&l_66},{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,&l_66,(void*)0},{&l_66,&l_66,&l_66,&l_66},{&l_66,&l_66,&l_66,&l_66}}};
                        struct S1 ***l_264 = &l_261;
                        struct S1 **l_266 = (void*)0;
                        struct S1 ***l_265 = &l_266;
                        int i, j, k;
                        g_255 = &g_166;
                        (*l_46) &= 8L;
                        --l_256;
                        (*l_46) = (safe_sub_func_int16_t_s_s((((*l_265) = ((*l_264) = l_261)) == (void*)0), l_237));
                    }
                    (*l_267) = (*p_43);
                    if (l_256)
                    {
                        unsigned char l_269 = 0x45L;
                        l_269--;
                        return (*g_100);
                    }
                    else
                    {
                        unsigned l_272 = 0x86E6614BL;
                        int * const *l_276[7] = {&l_232[0][4],&l_232[0][4],&l_232[0][4],&l_232[0][4],&l_232[0][4],&l_232[0][4],&l_232[0][4]};
                        int * const **l_275 = &l_276[3];
                        int i;
                        --l_272;
                        (*l_275) = &p_42;
                        return (*g_100);
                    }
                }
                for (g_252 = 0; (g_252 <= 1); g_252 += 1)
                {
                    short l_277 = 0L;
                    int i, j, k;
                    l_277 = (*p_42);
                    for (l_204 = 0; (l_204 <= 5); l_204 += 1)
                    {
                        l_278 = p_42;
                        if (l_279)
                            continue;
                    }
                    g_81[g_252][(g_252 + 1)][(g_252 + 2)] = l_280;
                }
            }
        }
        ++l_281;
        for (l_239 = 0; (l_239 >= 14); l_239 = safe_add_func_int8_t_s_s(l_239, 8))
        {
            for (g_230 = 0; (g_230 < 17); g_230 = safe_add_func_uint8_t_u_u(g_230, 5))
            {
                int l_288 = 0xC5FDFF8AL;
                l_288 = ((*l_46) = 0x39F6DA06L);
            }
        }
        --g_293;
    }
    else
    {
        unsigned char l_299[2][1];
        int l_307 = 0x0C654F21L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_299[i][j] = 0x85L;
        }
        for (g_263.f6 = 0; g_263.f6 < 7; g_263.f6 += 1)
        {
            g_147[g_263.f6] = 1UL;
        }
        for (g_77 = 0; (g_77 <= 2); ++g_77)
        {
            int l_298 = 0x1D87F689L;
            unsigned char *l_305 = (void*)0;
            unsigned char **l_304 = &l_305;
            unsigned *l_306[4] = {&g_136,&g_136,&g_136,&g_136};
            char *l_314 = &g_292;
            int i;
            g_291 = (l_298 | (((l_299[1][0] != ((safe_mod_func_int8_t_s_s(((*l_314) = ((g_136 = (l_307 = (safe_mul_func_uint16_t_u_u(0x3CB1L, (((*l_304) = &g_126) == &g_126))))) != (~(safe_mul_func_uint16_t_u_u(g_216, (((((*l_46) >= (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((l_298 <= 0xD2L), 6)), 1)) >= l_298) < l_299[1][0])) ^ l_299[1][0]) == 1L) && 4294967295UL)))))), 255UL)) && l_298)) >= g_140) < l_299[1][0]));
            (*l_66) = p_43;
        }
    }
    g_263.f2 = (*p_43);
    (*g_100) = (void*)0;
    return (*g_100);
}







static int ** func_50(unsigned p_51)
{
    int **l_205[2];
    short *l_212[8][3][4] = {{{(void*)0,(void*)0,&g_85,&g_140},{(void*)0,&g_85,&g_140,&g_140},{&g_142,&g_140,&g_140,&g_85}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_85,&g_140,&g_140,&g_142},{&g_140,&g_140,&g_85,(void*)0}},{{&g_140,&g_85,&g_85,&g_85},{&g_142,(void*)0,(void*)0,&g_85},{(void*)0,&g_140,&g_140,&g_140}},{{&g_140,&g_85,&g_140,&g_140},{&g_142,&g_140,&g_85,(void*)0},{&g_140,&g_140,(void*)0,&g_140}},{{(void*)0,&g_85,(void*)0,&g_142},{&g_140,(void*)0,&g_85,(void*)0},{&g_142,&g_140,&g_140,&g_140}},{{&g_140,&g_140,&g_140,&g_142},{(void*)0,&g_85,(void*)0,&g_140},{&g_142,(void*)0,&g_85,(void*)0}},{{&g_140,(void*)0,&g_140,&g_140},{(void*)0,&g_85,&g_140,&g_142},{&g_140,&g_140,&g_85,&g_140}},{{&g_140,&g_140,&g_140,(void*)0},{&g_85,(void*)0,(void*)0,&g_142},{&g_85,&g_85,&g_85,&g_140}}};
    unsigned short *l_215 = &g_216;
    unsigned char *l_217 = &g_126;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_205[i] = &g_101;
    g_206 = func_54(l_205[0]);
    g_141 = (g_103.f6 <= (((*l_217) = ((safe_add_func_int16_t_s_s(0xCB1EL, ((p_51 && (p_51 && (safe_lshift_func_int16_t_s_u(g_140, 1)))) != ((g_142 = (safe_unary_minus_func_uint8_t_u(g_9.f0))) ^ g_120[5])))) > ((((safe_rshift_func_uint16_t_u_u((g_140 >= ((*l_215) = p_51)), p_51)) && p_51) || 0x929AL) | (-10L)))) ^ p_51));
    (*g_100) = (*g_100);
    (*g_100) = (void*)0;
    return &g_101;
}







static unsigned func_54(int ** p_55)
{
    int l_168 = (-1L);
    unsigned short l_186 = 65531UL;
    short *l_191 = &g_142;
    short **l_192 = (void*)0;
    short **l_193 = &l_191;
    unsigned char l_194 = 1UL;
    int *l_195 = &l_168;
    int *l_196 = &g_141;
    int ***l_199 = &g_100;
    char *l_202 = &g_167.f0;
    unsigned *l_203 = &g_147[4];
    (*l_196) = (l_168 < (safe_lshift_func_int8_t_s_u(func_61(((*l_196) ^= func_61((safe_add_func_uint8_t_u_u(((-1L) != l_168), ((g_142 = (safe_lshift_func_uint16_t_u_s(((l_168 == ((((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u(l_168)) >= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(func_61(((((l_186 ^= 5L) >= ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((((*l_193) = l_191) == (void*)0) == l_168) > l_168) || l_194), 1UL)), g_147[2])) < l_194)) || l_168) || l_194), (*g_100), (*g_100)), (*g_101))), l_168)), l_168))) || l_194), 5UL)) == l_168), l_168)) == 1UL) < l_194) <= 1L)) || 0xC19EL), 1))) == g_120[5]))), (*g_100), l_195)), &l_168, &l_168), 6)));
    (*l_196) &= (0x44C7829FL != (*l_195));
    (*l_195) &= (((*l_196) || (safe_sub_func_uint32_t_u_u(((((l_199 == (void*)0) | g_103.f3.f0) > (*l_196)) != 0xA4L), (g_136 != ((*l_203) = (((safe_sub_func_int8_t_s_s(((*l_202) = (***l_199)), (***l_199))) <= 65532UL) & 1L)))))) != g_136);
    return g_120[1];
}







static int ** func_56(short p_57, char p_58, struct S0 * p_59, unsigned p_60)
{
    struct S0 l_89 = {8L};
    int l_94 = 7L;
    int *l_99[8][4][8] = {{{(void*)0,&g_77,&l_94,&g_19,&g_19,&g_77,(void*)0,&l_94},{&l_94,&g_77,&g_77,&l_94,&l_94,(void*)0,&l_94,&l_94},{&g_77,&g_19,&g_19,&g_77,&g_19,&l_94,&l_94,(void*)0},{&g_19,&g_19,&g_19,(void*)0,&g_19,&l_94,&g_19,&g_77}},{{&l_94,&g_77,&l_94,&l_94,&g_77,(void*)0,&g_19,&g_19},{&g_19,&g_19,&l_94,&l_94,&g_19,&g_19,(void*)0,&g_77},{&l_94,&g_77,&g_77,&l_94,&g_19,(void*)0,&g_19,&g_19},{&l_94,&l_94,&g_77,&l_94,(void*)0,&l_94,&l_94,&g_77}},{{&l_94,(void*)0,&g_19,&l_94,&l_94,(void*)0,&g_77,&g_19},{(void*)0,&g_19,&g_77,&l_94,&g_19,&l_94,&g_77,&g_77},{&g_19,&l_94,&g_19,(void*)0,(void*)0,&g_77,&l_94,(void*)0},{&g_19,&g_77,&g_19,&l_94,&l_94,(void*)0,&g_19,&l_94}},{{(void*)0,(void*)0,&g_77,&g_19,&l_94,&l_94,&g_19,(void*)0},{(void*)0,&g_77,&g_77,&l_94,&l_94,&g_19,&g_77,(void*)0},{&g_77,&g_19,&g_19,&g_19,(void*)0,&l_94,&g_19,&l_94},{&g_77,&g_77,&g_77,&g_19,&g_19,(void*)0,&l_94,&g_77}},{{&g_19,&g_19,&g_19,&l_94,&l_94,&l_94,&g_19,&g_19},{&g_19,&l_94,&g_19,&g_77,&g_19,&l_94,&g_77,&l_94},{&g_77,&l_94,(void*)0,&l_94,&g_19,(void*)0,&g_19,&g_77},{&g_77,&g_77,&g_77,(void*)0,&g_19,&l_94,&g_77,&g_77}},{{(void*)0,&g_77,(void*)0,(void*)0,&g_19,(void*)0,&g_19,&g_19},{&g_77,&g_19,&g_77,&l_94,&l_94,&l_94,&g_77,&l_94},{&g_77,&g_19,&g_19,(void*)0,&g_77,&g_77,&l_94,&g_19},{(void*)0,(void*)0,&g_77,(void*)0,&g_19,&l_94,&l_94,(void*)0}},{{(void*)0,&l_94,&l_94,&g_77,&g_77,&l_94,&l_94,(void*)0},{&g_19,&l_94,&g_19,&g_19,&g_19,&g_77,&g_77,&g_19},{&l_94,&g_77,(void*)0,&g_19,&g_19,&g_77,&l_94,&l_94},{&g_77,&l_94,(void*)0,&g_19,&l_94,&l_94,(void*)0,&g_77}},{{&l_94,&l_94,&g_77,&l_94,&l_94,&l_94,&l_94,&g_77},{&g_19,&l_94,&l_94,&g_19,&l_94,(void*)0,&g_77,&l_94},{&l_94,&l_94,&l_94,&g_77,&l_94,&l_94,(void*)0,&l_94},{&l_94,(void*)0,&g_77,(void*)0,&g_19,&g_19,&g_77,&l_94}}};
    int **l_98 = &l_99[7][0][5];
    const struct S1 *l_102 = &g_103;
    struct S0 *l_165 = &g_9;
    struct S0 **l_164[3][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_164[i][j] = &l_165;
    }
    l_89 = g_9;
    for (p_60 = 0; (p_60 <= 16); p_60 = safe_add_func_int16_t_s_s(p_60, 6))
    {
        int *l_92 = (void*)0;
        int *l_93[9][3][8] = {{{&g_19,(void*)0,&g_19,&g_77,&g_77,&g_77,(void*)0,(void*)0},{&g_77,&g_19,&g_19,&g_19,&g_77,&g_77,&g_19,&g_19},{&g_77,(void*)0,&g_19,&g_19,&g_77,&g_19,&g_77,&g_19}},{{&g_19,&g_19,&g_19,(void*)0,&g_77,&g_19,(void*)0,&g_77},{(void*)0,(void*)0,&g_19,(void*)0,(void*)0,&g_19,&g_77,&g_19},{(void*)0,&g_19,&g_19,&g_19,&g_77,&g_19,&g_77,&g_77}},{{&g_19,&g_77,&g_77,&g_77,&g_77,&g_77,&g_19,&g_77},{&g_19,&g_19,(void*)0,&g_19,&g_19,&g_19,&g_19,(void*)0},{(void*)0,&g_77,&g_19,&g_19,&g_77,&g_19,(void*)0,&g_77}},{{(void*)0,&g_77,&g_19,&g_19,&g_19,&g_19,&g_19,&g_77},{&g_19,&g_19,(void*)0,&g_77,&g_19,(void*)0,&g_77,&g_77},{&g_19,&g_19,&g_77,(void*)0,&g_19,&g_19,&g_77,&g_77}},{{&g_77,(void*)0,(void*)0,(void*)0,&g_77,&g_19,&g_19,&g_77},{&g_77,&g_19,&g_19,&g_77,(void*)0,(void*)0,(void*)0,&g_77},{&g_77,&g_77,&g_19,&g_19,(void*)0,&g_77,&g_19,&g_19}},{{&g_77,&g_77,(void*)0,&g_19,&g_77,(void*)0,&g_19,&g_19},{&g_77,&g_19,&g_19,&g_19,&g_19,&g_19,&g_77,(void*)0},{&g_77,(void*)0,&g_19,&g_77,&g_19,&g_19,&g_77,(void*)0}},{{(void*)0,&g_19,&g_19,&g_19,&g_19,&g_77,&g_77,&g_19},{(void*)0,&g_19,&g_19,&g_77,&g_77,&g_77,&g_77,&g_19},{&g_19,&g_19,&g_77,(void*)0,(void*)0,(void*)0,&g_77,&g_19}},{{&g_19,(void*)0,&g_77,&g_77,&g_19,&g_19,&g_77,&g_19},{(void*)0,&g_77,&g_19,(void*)0,&g_77,&g_19,&g_19,&g_19},{&g_19,&g_77,(void*)0,&g_77,&g_19,&g_77,&g_19,&g_19}},{{&g_19,&g_77,&g_77,&g_77,&g_77,&g_77,&g_19,&g_77},{&g_19,&g_77,&g_77,&g_19,&g_77,&g_19,&g_19,&g_77},{&g_77,&g_19,(void*)0,&g_19,&g_19,(void*)0,&g_19,&g_77}}};
        const unsigned short l_127[7] = {0xD72CL,0xD72CL,0xD72CL,0xD72CL,0xD72CL,0xD72CL,0xD72CL};
        struct S0 l_162 = {0L};
        struct S0 *l_163 = (void*)0;
        int i, j, k;
        if (((((&g_81[0][1][1] != (void*)0) | (l_94 &= l_89.f0)) & p_58) > (((l_89.f0 > ((safe_sub_func_uint16_t_u_u(p_58, g_77)) == (((p_58 >= (g_77 <= g_77)) || p_60) & p_60))) && l_89.f0) < (-10L))))
        {
            int *l_97 = &l_94;
            (*g_80) = l_97;
            return g_100;
        }
        else
        {
            const struct S1 **l_104 = &l_102;
            int l_111[4] = {0L,0L,0L,0L};
            short *l_118 = &g_85;
            unsigned short *l_119 = &g_120[5];
            unsigned char *l_125 = &g_126;
            int l_145[3];
            char l_146[5][9] = {{0x3DL,0xBAL,0x3DL,0xBAL,0x3DL,0xBAL,0x3DL,0xBAL,0x3DL},{(-1L),(-1L),(-10L),(-10L),(-1L),(-1L),(-10L),(-10L),(-1L)},{(-1L),0xBAL,(-1L),0xBAL,(-1L),0xBAL,(-1L),0xBAL,(-1L)},{(-1L),(-10L),(-10L),(-1L),(-1L),(-10L),(-10L),(-1L),(-1L)},{0x3DL,0xBAL,0x3DL,0xBAL,0x3DL,0xBAL,0x3DL,0xBAL,0x3DL}};
            int **l_161 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_145[i] = 0L;
            (*l_104) = l_102;
            if (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(l_111[1], g_9.f0)), 13)), p_58)) >= (safe_lshift_func_uint16_t_u_u(((~(safe_mod_func_uint16_t_u_u((p_58 && (safe_mod_func_int16_t_s_s(((*l_118) = 0x5C0FL), l_111[1]))), (--(*l_119))))) && (safe_lshift_func_uint16_t_u_u((((((*l_125) &= 1UL) == ((l_111[2] ^ l_127[2]) < g_103.f5)) >= p_57) <= l_111[1]), 7))), 2))))
            {
                int **l_128[5];
                unsigned l_135 = 0xEB29FA79L;
                int i;
                for (i = 0; i < 5; i++)
                    l_128[i] = (void*)0;
                if (p_58)
                {
                    return l_128[4];
                }
                else
                {
                    int *l_134 = &l_111[1];
                    for (g_126 = (-27); (g_126 == 35); g_126++)
                    {
                        l_111[0] = ((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_s(65535UL, (func_61(p_60, l_134, (*l_98)) <= l_135))))) >= p_60);
                    }
                    g_136++;
                    if (p_58)
                        continue;
                }
            }
            else
            {
                short l_139 = 0xC2F1L;
                int l_143 = 0xA5490C03L;
                int l_144 = 0xFE66233FL;
                struct S0 l_159 = {-1L};
                int **l_160 = &l_99[7][0][5];
                g_147[4]--;
                for (g_136 = 0; (g_136 != 30); g_136++)
                {
                    (*l_104) = &g_103;
                }
                for (l_89.f0 = 0; (l_89.f0 != 12); l_89.f0 = safe_add_func_int32_t_s_s(l_89.f0, 2))
                {
                    struct S0 l_158[5][5] = {{{0xF8L},{-2L},{-2L},{0xF8L},{-2L}},{{0x4FL},{1L},{0x32L},{1L},{0x4FL}},{{-2L},{0xF8L},{-2L},{-2L},{0xF8L}},{{0x4FL},{0x35L},{-1L},{1L},{-1L}},{{0xF8L},{0xF8L},{0xFAL},{0xF8L},{0xF8L}}};
                    int i, j;
                    g_141 = (safe_add_func_uint16_t_u_u(p_58, (safe_mul_func_int8_t_s_s((&g_80 == (void*)0), ((g_140 < ((*l_119) = ((void*)0 == (*g_100)))) && ((func_61(p_58, (*g_100), (*g_100)) | p_57) | g_19))))));
                    l_159 = l_158[2][4];
                    return l_161;
                }
            }
            (*g_80) = (*g_100);
        }
        l_89 = l_162;
        if (p_60)
            continue;
        (*g_80) = (*g_100);
    }
    g_166 = &g_9;
    return &g_101;
}







static short func_61(int p_62, int * p_63, int * p_64)
{
    int *l_72 = &g_19;
    int *l_74 = &g_19;
    int **l_73 = &l_74;
    int *l_75 = (void*)0;
    int *l_76[5] = {&g_77,&g_77,&g_77,&g_77,&g_77};
    const int ***l_82[1];
    short *l_83 = (void*)0;
    short *l_84[3][4];
    int i, j;
    for (i = 0; i < 1; i++)
        l_82[i] = &g_80;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_84[i][j] = &g_85;
    }
    g_77 &= ((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(g_19, g_19)), 3)) != (l_72 == ((*l_73) = l_72)));
    g_77 = 0L;
    for (p_62 = 5; (p_62 <= 15); p_62 = safe_add_func_uint16_t_u_u(p_62, 2))
    {
        (*l_73) = &p_62;
    }
    p_62 = (((g_80 = g_80) != (void*)0) != (g_19 || (g_85 ^= ((p_62 & (&g_19 != &g_77)) != (*l_74)))));
    return p_62;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1.f0, "g_103.f1.f0", print_hash_value);
    transparent_crc(g_103.f2.f0, "g_103.f2.f0", print_hash_value);
    transparent_crc(g_103.f3.f0, "g_103.f3.f0", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_103.f7, "g_103.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    transparent_crc(g_263.f1.f0, "g_263.f1.f0", print_hash_value);
    transparent_crc(g_263.f2.f0, "g_263.f2.f0", print_hash_value);
    transparent_crc(g_263.f3.f0, "g_263.f3.f0", print_hash_value);
    transparent_crc(g_263.f4, "g_263.f4", print_hash_value);
    transparent_crc(g_263.f5, "g_263.f5", print_hash_value);
    transparent_crc(g_263.f6, "g_263.f6", print_hash_value);
    transparent_crc(g_263.f7, "g_263.f7", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_326[i], "g_326[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_395[i][j], "g_395[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
