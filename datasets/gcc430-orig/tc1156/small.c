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
   int f0;
   unsigned f1;
   unsigned f2 : 12;
};

union U1 {
   char f0;
   int f1;
   unsigned char f2;
};

union U2 {
   int f0;
};


static union U1 g_33 = {0x70L};
static int g_69 = 0xC17F7268L;
static union U1 *g_76 = &g_33;
static union U1 **g_75 = &g_76;
static unsigned g_87 = 4294967295UL;
static union U1 g_92 = {9L};
static unsigned g_96 = 4294967286UL;
static union U2 g_103[1] = {{0L}};
static union U0 g_110[4][4] = {{{0x4848B2A4L},{0x4848B2A4L},{1L},{0x4848B2A4L}},{{0x4848B2A4L},{1L},{1L},{0x4848B2A4L}},{{1L},{0x4848B2A4L},{1L},{1L}},{{0x4848B2A4L},{0x4848B2A4L},{1L},{0x4848B2A4L}}};
static unsigned short g_141 = 65535UL;
static int *g_144 = &g_69;
static int *g_150 = &g_69;
static unsigned short g_221 = 3UL;
static int *g_229 = &g_110[1][2].f0;
static unsigned *g_230[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U2 g_233 = {4L};
static int **g_235 = &g_150;
static union U1 g_255 = {0xFEL};
static union U1 g_256 = {9L};
static int g_284 = 0x67408596L;
static unsigned g_295 = 4294967295UL;
static unsigned char *g_305 = &g_255.f2;
static short g_335 = 0x4D69L;
static union U0 *g_404 = &g_110[1][2];
static union U0 **g_403 = &g_404;
static union U0 **g_410[3][5] = {{&g_404,&g_404,(void*)0,&g_404,&g_404},{&g_404,&g_404,&g_404,(void*)0,&g_404},{&g_404,&g_404,&g_404,&g_404,&g_404}};
static char *g_447 = &g_256.f0;
static char **g_446[4] = {&g_447,&g_447,&g_447,&g_447};
static int *g_471[9][3][9] = {{{&g_69,(void*)0,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_284,&g_69,&g_69,&g_284,(void*)0,&g_284,&g_284,(void*)0},{(void*)0,&g_284,&g_69,&g_284,(void*)0,(void*)0,&g_284,&g_284,&g_284}},{{&g_284,&g_284,(void*)0,(void*)0,&g_284,&g_69,&g_284,(void*)0,(void*)0},{(void*)0,(void*)0,&g_284,&g_284,&g_284,(void*)0,(void*)0,&g_284,&g_69},{&g_69,&g_284,(void*)0,&g_284,&g_284,(void*)0,&g_284,&g_69,&g_69}},{{&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284},{(void*)0,&g_284,(void*)0,&g_284,(void*)0,(void*)0,&g_284,(void*)0,&g_69},{&g_284,&g_284,&g_69,&g_284,&g_284,&g_284,&g_284,&g_284,&g_69}},{{(void*)0,(void*)0,&g_69,(void*)0,&g_284,(void*)0,(void*)0,&g_284,(void*)0},{&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_69},{&g_284,(void*)0,(void*)0,&g_284,&g_284,&g_284,(void*)0,(void*)0,&g_284}},{{&g_284,&g_284,(void*)0,&g_284,&g_284,&g_284,&g_284,(void*)0,&g_69},{(void*)0,&g_284,(void*)0,(void*)0,&g_284,(void*)0,&g_284,(void*)0,(void*)0},{&g_284,&g_284,&g_69,(void*)0,&g_284,&g_284,&g_284,&g_284,(void*)0}},{{&g_284,&g_284,&g_284,(void*)0,(void*)0,&g_284,&g_284,&g_284,(void*)0},{&g_284,&g_284,&g_69,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,(void*)0,(void*)0,(void*)0,&g_69,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_284,&g_284,(void*)0,(void*)0,&g_284,&g_69,&g_284,(void*)0,(void*)0},{&g_69,&g_69,(void*)0,(void*)0,(void*)0,(void*)0,&g_69,(void*)0,(void*)0},{&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_69}},{{&g_284,(void*)0,(void*)0,&g_284,&g_284,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_284,&g_284,&g_284,(void*)0,&g_284,&g_284,&g_69,&g_284},{(void*)0,&g_69,&g_284,&g_284,&g_69,&g_69,&g_69,&g_284,&g_284}},{{(void*)0,(void*)0,&g_284,&g_69,&g_284,&g_284,(void*)0,&g_284,&g_284},{(void*)0,&g_69,(void*)0,(void*)0,(void*)0,(void*)0,&g_69,(void*)0,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284}}};
static union U1 ***g_485 = &g_75;
static unsigned g_540 = 0UL;
static short g_547 = 0xF948L;
static int g_610 = 1L;
static int ****g_639[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned g_676 = 0UL;
static char g_695 = 1L;
static int *g_714[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned g_751 = 6UL;



static char func_1(void);
static short func_2(unsigned char p_3, int p_4, unsigned p_5, unsigned char p_6);
static unsigned char func_10(unsigned p_11, short p_12, unsigned char p_13);
static unsigned char func_14(unsigned p_15, union U1 p_16, unsigned short p_17);
static unsigned func_20(unsigned char p_21, union U1 p_22, union U1 p_23, union U1 p_24, unsigned p_25);
static unsigned func_28(union U1 p_29, unsigned p_30, union U0 p_31, union U1 p_32);
static union U0 func_34(unsigned p_35);
static unsigned short func_40(union U1 p_41, int p_42, union U1 p_43);
static char func_44(char p_45, char p_46, unsigned char p_47);
static unsigned short func_55(union U2 p_56, unsigned p_57, int p_58);
static char func_1(void)
{
    unsigned short l_7 = 0UL;
    int l_48 = 7L;
    union U1 l_241[8] = {{0x05L},{1L},{0x05L},{1L},{0x05L},{1L},{0x05L},{1L}};
    unsigned *l_245 = (void*)0;
    unsigned *l_246[7];
    int l_247 = 1L;
    union U0 l_251 = {7L};
    unsigned char *l_253 = &g_92.f2;
    unsigned char *l_254 = &g_33.f2;
    union U1 l_257 = {0x47L};
    short l_259 = 0x125CL;
    int l_764 = 0xC1E3F189L;
    int l_765 = 1L;
    int i;
    for (i = 0; i < 7; i++)
        l_246[i] = &g_110[1][2].f1;
    (*g_144) = ((func_2(l_7, ((safe_sub_func_uint8_t_u_u(((*l_254) = func_10((func_14(((((((((l_48 = ((safe_lshift_func_int8_t_s_s((func_20(((*l_254) = ((*l_253) = (((safe_add_func_uint32_t_u_u(func_28(g_33, (g_33.f0 == (func_34((255UL < (((safe_lshift_func_int16_t_s_s(g_33.f2, 8)) && (l_247 = (safe_lshift_func_uint16_t_u_u((((g_33.f0 | 0xF803L) > (func_40((((func_44(g_33.f2, l_48, g_33.f0) , 0xA071473CL) | l_7) , l_241[6]), l_7, (*g_76)) , (-5L))) <= 0x73EEL), g_92.f2)))) == 1L))) , l_247)), l_251, (**g_75)), l_48)) ^ l_48) , l_251.f1))), g_255, g_256, l_257, l_251.f0) == 0xA1A30916L), l_7)) >= 0x7A94L)) <= 4294967289UL) || 0x4B92L) , l_247) , l_251.f2) || (*g_144)) <= 0x66B3BE21L) & l_259), l_241[6], g_110[1][2].f2) != 7L), g_110[1][2].f0, l_241[6].f2)), l_251.f2)) & 0xC0L), l_251.f2, g_87) < 5L) >= l_764);
    (*g_235) = &l_48;
    return l_765;
}







static short func_2(unsigned char p_3, int p_4, unsigned p_5, unsigned char p_6)
{
    union U0 l_692 = {0x9307D3FCL};
    union U1 l_693[7] = {{1L},{0x96L},{1L},{1L},{0x96L},{1L},{1L}};
    short l_694[8] = {0L,0L,6L,0L,0L,6L,0L,0L};
    char ***l_696 = &g_446[1];
    int **l_698[1];
    union U0 **l_706[5];
    union U2 l_740 = {0x5CE444D7L};
    int *l_763 = &g_284;
    int i;
    for (i = 0; i < 1; i++)
        l_698[i] = &g_144;
    for (i = 0; i < 5; i++)
        l_706[i] = &g_404;
    if (((((((l_694[2] && g_695) == p_6) & l_692.f2) ^ l_693[4].f0) <= l_694[1]) , 0x02BF84A6L))
    {
        int l_697 = 0xD14558F6L;
        int *l_699[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int i, j;
        l_699[1][1] = ((**g_403) , (func_44(l_693[4].f0, (p_4 , ((***l_696) = ((l_696 == &g_446[1]) ^ l_697))), (l_698[0] != l_698[0])) , &l_697));
        if ((&l_697 != (void*)0))
        {
            int *l_705 = (void*)0;
            for (g_33.f0 = 0; (g_33.f0 > (-7)); g_33.f0--)
            {
                union U0 *l_703[7] = {&l_692,&l_692,&l_692,&l_692,&l_692,&l_692,&l_692};
                union U0 **l_702 = &l_703[5];
                int *l_704 = &g_284;
                int i;
                (*l_702) = ((*g_403) = (*g_403));
                l_705 = l_704;
                for (l_692.f0 = 0; (l_692.f0 <= 6); l_692.f0 += 1)
                {
                    for (g_233.f0 = 6; (g_233.f0 >= 2); g_233.f0 -= 1)
                    {
                        union U0 ***l_707 = (void*)0;
                        union U0 ***l_708 = &l_702;
                        union U0 ***l_709 = (void*)0;
                        union U0 ***l_710 = &g_403;
                        int *l_711 = &g_284;
                        int l_712 = 0xBC431939L;
                        int i;
                        (*l_710) = ((*l_708) = l_706[2]);
                        (*g_235) = g_230[l_692.f0];
                        l_711 = ((*g_235) = (*g_235));
                        if (l_712)
                            break;
                    }
                    return g_110[1][2].f1;
                }
            }
        }
        else
        {
            unsigned l_713 = 0x34FC150AL;
            l_713 = (-10L);
            (*g_235) = (g_714[0] = &l_697);
        }
        (*g_144) = (*g_144);
    }
    else
    {
        int *l_717 = &g_69;
        union U2 l_726 = {0xD993C284L};
        int *l_731 = &g_284;
        for (g_256.f2 = 22; (g_256.f2 == 40); g_256.f2++)
        {
            int *l_737[4][8][5] = {{{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69}},{{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69}},{{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69}},{{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284},{&g_69,&g_69,&g_69,&g_69,&g_69}}};
            union U2 l_738 = {0L};
            int *l_758[8] = {&g_69,&g_284,&g_69,&g_284,&g_69,&g_284,&g_69,&g_284};
            int i, j, k;
            l_717 = l_717;
            for (p_3 = 12; (p_3 > 8); p_3 = safe_sub_func_uint32_t_u_u(p_3, 4))
            {
                short *l_720 = &l_694[3];
                short **l_721 = &l_720;
                union U2 l_724 = {0L};
                union U2 *l_725[2];
                int *l_732[10][9] = {{&g_284,(void*)0,&g_284,(void*)0,&g_284,&g_69,(void*)0,&g_284,(void*)0},{(void*)0,&g_69,&g_284,&g_284,(void*)0,&g_284,(void*)0,&g_284,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_69},{&g_69,(void*)0,&g_69,&g_284,&g_284,&g_69,(void*)0,&g_69,&g_284},{&g_69,&g_284,&g_284,&g_69,(void*)0,&g_69,&g_284,&g_284,&g_69},{&g_284,&g_284,&g_69,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284},{&g_284,(void*)0,&g_69,&g_284,(void*)0,&g_284,(void*)0,&g_284,&g_69},{&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_69},{&g_69,(void*)0,&g_69,&g_284,&g_284,&g_69,(void*)0,&g_69,&g_284},{&g_69,&g_284,&g_284,&g_69,(void*)0,&g_69,&g_284,&g_284,&g_69}};
                union U1 l_733 = {-2L};
                char l_734 = 0x8CL;
                char *l_735 = &g_695;
                unsigned short l_741 = 0x8E78L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_725[i] = &g_233;
            }
            for (g_255.f0 = 0; (g_255.f0 >= 25); g_255.f0 = safe_add_func_int8_t_s_s(g_255.f0, 2))
            {
                short l_759 = 0x793FL;
                int *l_761 = &g_284;
                if ((safe_rshift_func_uint16_t_u_s((0x6200B895L < p_3), ((!((l_740 , (safe_rshift_func_int8_t_s_s(0x3DL, (((((*g_447) || ((l_726 , l_758[7]) != (p_5 , l_758[2]))) < g_110[1][2].f1) != (-4L)) && p_6)))) & l_759)) , g_284))))
                {
                    return g_96;
                }
                else
                {
                    int *l_760 = &g_69;
                    int *l_762[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_762[i] = &g_69;
                    (*g_75) = &l_693[2];
                    l_761 = ((*g_235) = l_760);
                    (*g_235) = l_762[0];
                    return g_335;
                }
            }
        }
    }
    (*g_235) = l_763;
    return g_751;
}







static unsigned char func_10(unsigned p_11, short p_12, unsigned char p_13)
{
    union U2 l_493[3] = {{0x50643649L},{0x50643649L},{0x50643649L}};
    int *l_495 = (void*)0;
    union U1 l_512[8][3] = {{{-1L},{-1L},{-5L}},{{-1L},{-1L},{-5L}},{{-1L},{-1L},{-5L}},{{-1L},{-1L},{-5L}},{{-1L},{-1L},{-1L}},{{0x61L},{0x61L},{-1L}},{{0x61L},{0x61L},{-1L}},{{0x61L},{0x61L},{-1L}}};
    unsigned **l_544 = (void*)0;
    int ***l_545 = (void*)0;
    union U0 *l_581 = &g_110[1][2];
    unsigned short l_594 = 65527UL;
    union U1 *l_595 = &g_255;
    union U1 ***l_600 = (void*)0;
    short l_601 = (-7L);
    unsigned short *l_602 = &l_594;
    int l_603 = 8L;
    union U2 l_643 = {0x352E56F2L};
    unsigned short l_662 = 0x77CDL;
    union U2 *l_678 = &l_493[0];
    union U2 **l_677 = &l_678;
    union U1 **l_687 = &l_595;
    int i, j;
    for (p_13 = 0; (p_13 <= 3); p_13 += 1)
    {
        union U1 *l_480 = &g_256;
        union U1 **l_479 = &l_480;
        union U0 l_481 = {0x6C9BECACL};
        union U1 ***l_482[1][7][8] = {{{&g_75,&l_479,&g_75,(void*)0,(void*)0,&g_75,&l_479,&g_75},{(void*)0,(void*)0,&g_75,(void*)0,(void*)0,(void*)0,(void*)0,&g_75},{(void*)0,(void*)0,(void*)0,&g_75,(void*)0,(void*)0,(void*)0,(void*)0},{&g_75,(void*)0,(void*)0,&g_75,&l_479,&g_75,(void*)0,(void*)0},{(void*)0,&l_479,&g_75,&g_75,&l_479,(void*)0,&l_479,&g_75},{&g_75,&l_479,&g_75,(void*)0,(void*)0,&g_75,&l_479,&g_75},{(void*)0,(void*)0,&g_75,(void*)0,(void*)0,(void*)0,(void*)0,&g_75}}};
        union U1 ***l_484 = &g_75;
        union U1 ****l_483[4][9][7] = {{{(void*)0,(void*)0,&l_484,&l_484,(void*)0,&l_484,&l_484},{&l_484,(void*)0,&l_484,&l_484,&l_484,&l_484,&l_484},{(void*)0,&l_484,(void*)0,&l_484,&l_484,&l_484,&l_484},{(void*)0,&l_484,(void*)0,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484},{&l_484,(void*)0,(void*)0,&l_484,&l_484,&l_484,(void*)0},{&l_484,&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484}},{{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484},{&l_484,(void*)0,(void*)0,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,(void*)0,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,(void*)0,&l_484,&l_484,&l_484,(void*)0,&l_484},{(void*)0,(void*)0,&l_484,&l_484,&l_484,&l_484,&l_484}},{{(void*)0,&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484},{(void*)0,(void*)0,&l_484,&l_484,&l_484,&l_484,(void*)0},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{(void*)0,(void*)0,&l_484,&l_484,&l_484,&l_484,(void*)0},{(void*)0,&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484,&l_484}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,(void*)0,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,(void*)0,&l_484,&l_484},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&l_484,(void*)0,&l_484,&l_484,(void*)0,&l_484,&l_484},{&l_484,(void*)0,(void*)0,(void*)0,(void*)0,&l_484,(void*)0},{&l_484,&l_484,(void*)0,&l_484,&l_484,&l_484,(void*)0},{(void*)0,&l_484,&l_484,(void*)0,(void*)0,&l_484,&l_484}}};
        int l_486[10] = {2L,2L,2L,2L,2L,2L,2L,2L,2L,2L};
        int ***l_489 = &g_235;
        union U2 l_511 = {1L};
        unsigned l_543 = 6UL;
        int *l_578 = &l_486[3];
        int i, j, k;
        (*g_235) = (void*)0;
        (*l_479) = ((*g_75) = (*g_75));
        l_486[0] = ((g_485 = ((l_481 , (**g_75)) , (l_482[0][1][0] = (void*)0))) == (void*)0);
        for (g_284 = 3; (g_284 >= 0); g_284 -= 1)
        {
            unsigned char l_487 = 0xDAL;
            int ***l_491 = (void*)0;
            int ****l_490 = &l_491;
            unsigned char *l_492 = &l_487;
            union U2 l_494 = {0xE31938AEL};
            int l_500 = (-1L);
            union U1 l_513 = {1L};
            union U1 l_562 = {0xDCL};
            union U2 l_573 = {0xC32D835AL};
            int i;
        }
    }
    (*g_75) = l_595;
    (*g_235) = l_495;
    if (((*g_144) = (l_603 = (safe_sub_func_uint16_t_u_u((~((!((g_141 = (safe_rshift_func_uint8_t_u_u(((*g_305) = ((void*)0 != &g_446[2])), (l_600 == (void*)0)))) > 0x985EL)) != l_601)), ((*l_602) = (((p_12 <= ((p_13 , p_11) & p_11)) & p_13) ^ (-1L))))))))
    {
        union U1 *l_604 = &g_33;
        (*g_75) = l_604;
        (*g_144) = (0xE330A0F9L >= 0xB92336C6L);
    }
    else
    {
        union U1 l_607 = {0x79L};
        unsigned *l_611[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned char l_612 = 255UL;
        union U0 l_618 = {0x1B6F7D6CL};
        union U2 *l_621 = &g_233;
        union U1 l_635 = {-3L};
        int l_649 = 1L;
        int i;
        if ((safe_rshift_func_uint16_t_u_s(((((0x8230L < (func_20((4L >= p_12), l_607, (**g_75), (*l_595), l_607.f0) & (l_612 = ((safe_add_func_uint8_t_u_u(func_55(l_493[1], l_607.f2, g_610), (*g_305))) | g_256.f0)))) > l_607.f2) != 4294967295UL) <= 1UL), 6)))
        {
            return p_12;
        }
        else
        {
            unsigned short l_619 = 0x0782L;
            int l_620 = 0x5AC16BA8L;
            union U1 l_622 = {0xFAL};
            union U2 l_632 = {8L};
            unsigned ***l_636 = &l_544;
            unsigned l_648 = 1UL;
            union U1 l_661 = {0xA6L};
            union U2 **l_680[6] = {&l_621,&l_621,&l_621,&l_621,&l_621,&l_621};
            int i;
            for (g_92.f2 = 0; (g_92.f2 <= 2); g_92.f2 += 1)
            {
                union U1 l_615 = {0x83L};
                unsigned char l_631 = 0xAAL;
                union U2 l_642 = {4L};
                int *l_651 = &l_603;
                unsigned l_663 = 4294967292UL;
                union U1 **l_686 = &l_595;
                for (g_255.f1 = 0; (g_255.f1 <= 2); g_255.f1 += 1)
                {
                    return p_12;
                }
                for (l_607.f0 = 0; (l_607.f0 <= 2); l_607.f0 += 1)
                {
                    union U1 l_616 = {0xB3L};
                    union U1 *l_617 = &g_256;
                    l_603 = (l_620 = (l_619 = (func_28((**g_75), ((safe_rshift_func_uint8_t_u_s((func_20(p_11, l_615, l_616, ((*l_617) = (l_512[3][2] = (p_13 , (*l_595)))), g_33.f0) && 0x4C18L), 2)) && p_13), l_618, (**g_75)) && p_12)));
                    (*g_235) = (void*)0;
                    l_621 = &l_493[0];
                    for (g_33.f2 = 0; (g_33.f2 <= 2); g_33.f2 += 1)
                    {
                        return (*g_305);
                    }
                    for (l_616.f2 = 0; (l_616.f2 <= 2); l_616.f2 += 1)
                    {
                        return l_616.f2;
                    }
                }
                if (l_618.f0)
                {
                    (*g_144) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(l_607.f0, ((((g_103[0].f0 ^ l_631) , ((func_55(l_632, (safe_mod_func_uint8_t_u_u(((*g_305) = (((g_255.f2 ^ func_20(l_618.f1, l_635, (**g_75), ((((*g_229) = (l_636 != (void*)0)) , l_618) , l_635), p_12)) | l_632.f0) != l_618.f2)), g_141)), p_11) , g_221) > 0x2075L)) >= 1UL) | (*g_447)))), 5));
                }
                else
                {
                    union U1 l_660 = {0xB2L};
                    int l_664[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_664[i] = 1L;
                    for (p_13 = 0; (p_13 <= 2); p_13 += 1)
                    {
                        int *l_644 = &g_255.f1;
                        union U0 l_647 = {0L};
                        int i, j;
                        (*g_235) = (*g_235);
                        if (l_607.f0)
                            continue;
                        (*g_144) = p_12;
                        l_649 = func_44(((*g_447) = (safe_lshift_func_uint16_t_u_s(((void*)0 == g_639[4]), (safe_mod_func_uint16_t_u_u((0x39L && ((((((((func_55((l_643 = ((*l_621) = l_642)), (((l_644 == ((((p_11 , 0x6AL) >= (l_619 > ((*l_602) = (safe_add_func_int16_t_s_s(l_615.f2, 0x0010L))))) , l_647) , &g_610)) , 0xA87BA560L) , 1UL), p_13) , (*g_229)) , 248UL) >= l_648) > l_615.f2) & (*g_305)) >= p_11) > l_647.f1) && l_635.f2)), (-8L)))))), p_12, p_12);
                    }
                    for (l_648 = 0; (l_648 <= 2); l_648 += 1)
                    {
                        int *l_650 = &g_284;
                        (*g_144) = (*g_144);
                        (*l_650) = ((*g_144) = 4L);
                        (*g_235) = l_651;
                    }
                    if (((*l_651) ^ (safe_rshift_func_uint8_t_u_s(((((((*l_651) & p_13) ^ (safe_add_func_uint8_t_u_u(0x9FL, (l_664[0] = (p_13 , (safe_add_func_uint8_t_u_u((l_663 = ((safe_rshift_func_uint8_t_u_s(l_662, p_13)) < 4294967295UL)), (*l_651)))))))) , g_335) & l_660.f0) != (-1L)), 2))))
                    {
                        (*l_651) = l_660.f2;
                        if (p_12)
                            continue;
                    }
                    else
                    {
                        int l_665 = 0x8D7191BCL;
                        int *l_675 = &l_649;
                        (*g_144) = (l_620 = l_665);
                        (*g_403) = l_581;
                        (*l_675) = ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((!((*l_651) = ((*g_144) = p_13))))), ((safe_add_func_int8_t_s_s(l_618.f0, 0x90L)) <= (safe_rshift_func_int8_t_s_u(func_40((l_619 , l_615), ((g_233.f0 & ((safe_rshift_func_uint8_t_u_s((*g_305), (g_96 | l_664[0]))) && (*g_305))) || p_12), l_661), 0))))) | l_660.f2);
                    }
                    for (p_11 = 0; (p_11 <= 2); p_11 += 1)
                    {
                        return (*g_305);
                    }
                }
                for (l_615.f2 = 0; (l_615.f2 <= 2); l_615.f2 += 1)
                {
                    int *l_681 = &l_620;
                    union U1 **l_684 = &l_595;
                    (*g_144) = ((l_607 , g_540) | ((*l_602) = (0xFEL & ((*g_447) = p_13))));
                    for (g_255.f1 = 0; (g_255.f1 <= 2); g_255.f1 += 1)
                    {
                        if (p_11)
                            break;
                        if (p_13)
                            continue;
                        return g_676;
                    }
                    for (g_547 = 0; (g_547 <= 2); g_547 += 1)
                    {
                        union U2 ***l_679[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        union U1 ***l_685 = &l_684;
                        int i, j, k;
                        l_680[0] = (p_13 , l_677);
                        (*g_144) = p_13;
                        g_471[(g_547 + 1)][l_615.f2][(l_615.f2 + 2)] = l_681;
                        (*g_144) = (((*g_305) = (((((l_618.f1 , (void*)0) == &g_96) != g_284) && ((safe_rshift_func_uint8_t_u_u(p_13, 0)) ^ (((*l_685) = ((g_233 = l_642) , l_684)) == (l_687 = l_686)))) & p_11)) != (*g_447));
                    }
                }
            }
            (*g_235) = &l_620;
            (**g_235) = (((safe_rshift_func_uint16_t_u_s(g_610, 7)) && (safe_rshift_func_int8_t_s_s(0xE4L, 1))) , (p_12 == 4294967295UL));
        }
    }
    return (*g_305);
}







static unsigned char func_14(unsigned p_15, union U1 p_16, unsigned short p_17)
{
    unsigned l_264 = 1UL;
    union U0 l_265 = {-1L};
    short l_268[4] = {0x7B0AL,0x7B0AL,0x7B0AL,0x7B0AL};
    unsigned char *l_269[8] = {&g_92.f2,&g_256.f2,&g_92.f2,&g_256.f2,&g_92.f2,&g_256.f2,&g_92.f2,&g_256.f2};
    int *l_274 = &g_69;
    int **l_288 = &g_150;
    union U1 l_350 = {0x95L};
    unsigned l_381[6];
    union U0 **l_405[6] = {&g_404,&g_404,&g_404,&g_404,&g_404,&g_404};
    char l_434 = 1L;
    unsigned l_477 = 0x3B3EF07DL;
    union U2 l_478[9][6][4] = {{{{-1L},{0L},{9L},{0x7FF525CEL}},{{0L},{0L},{-2L},{0xE93A670AL}},{{-6L},{0x71F9795EL},{0L},{0x43608894L}},{{0L},{0x53687620L},{0xE93A670AL},{-1L}},{{0xC1822DFBL},{-6L},{0L},{0L}},{{0xBA240EC6L},{0x68196360L},{-1L},{0x2BB6B124L}}},{{{0xE93A670AL},{0x3E0812CBL},{0x27CD1FFBL},{1L}},{{0L},{0xB363B81CL},{0L},{0x3A5E5EBDL}},{{0L},{0x4B49A304L},{0x71F9795EL},{0x27CD1FFBL}},{{1L},{7L},{-9L},{0x4B49A304L}},{{0xEA11B46FL},{1L},{-9L},{0xD21AE5DDL}},{{1L},{0x80BF275DL},{0x71F9795EL},{1L}}},{{{0L},{0L},{0L},{0x54F06149L}},{{0L},{0x54F06149L},{0x27CD1FFBL},{9L}},{{0xE93A670AL},{0x0BF5A4D9L},{-1L},{0x2B55ED96L}},{{0xBA240EC6L},{-1L},{0x68196360L},{9L}},{{0x2B55ED96L},{1L},{0L},{0xB176B55DL}},{{0xF1FD76CDL},{-7L},{0xB176B55DL},{0x43608894L}}},{{{9L},{1L},{1L},{0L}},{{0x7A3B3C2DL},{-1L},{0L},{0x630AE561L}},{{0x53687620L},{-9L},{0L},{0xC591ABFAL}},{{-2L},{9L},{-9L},{1L}},{{-1L},{-6L},{1L},{0L}},{{-1L},{0L},{-1L},{0L}}},{{{0x4B49A304L},{5L},{-1L},{0x80BF275DL}},{{-9L},{1L},{1L},{-9L}},{{0x43608894L},{0xFCA51F46L},{0xC591ABFAL},{1L}},{{0x7FF525CEL},{0xE93A670AL},{0L},{0xEA11B46FL}},{{-1L},{0x27CD1FFBL},{1L},{1L}},{{-1L},{0L},{-1L},{-1L}}},{{{0L},{0x3E0812CBL},{0x53687620L},{-2L}},{{0L},{6L},{1L},{0L}},{{0x27CD1FFBL},{0xEA11B46FL},{0L},{-9L}},{{-1L},{0L},{1L},{0x630AE561L}},{{6L},{0L},{0x3E0812CBL},{7L}},{{9L},{0x68196360L},{-1L},{0xBA240EC6L}}},{{{0x3E0812CBL},{-2L},{0L},{0L}},{{0L},{0x0BF5A4D9L},{-1L},{0xB176B55DL}},{{-1L},{7L},{0L},{-9L}},{{0xC1822DFBL},{-1L},{-1L},{0x49D25CB7L}},{{6L},{0x3A5E5EBDL},{0x48D6704EL},{0L}},{{0L},{0xC1822DFBL},{0x27CD1FFBL},{0x71F9795EL}}},{{{-1L},{6L},{-9L},{0x68196360L}},{{0x2B55ED96L},{-7L},{0x630AE561L},{-7L}},{{0L},{0x54F06149L},{-1L},{1L}},{{0x48D6704EL},{0L},{9L},{0xC591ABFAL}},{{1L},{0xE93A670AL},{-7L},{0xFCA51F46L}},{{1L},{1L},{9L},{0L}}},{{{0x48D6704EL},{0xFCA51F46L},{-1L},{1L}},{{0L},{-1L},{0x630AE561L},{6L}},{{0x2B55ED96L},{0L},{-9L},{0x43608894L}},{{-1L},{1L},{0x27CD1FFBL},{9L}},{{0L},{0x71F9795EL},{0x3A5E5EBDL},{0xD21AE5DDL}},{{1L},{0L},{0x2BB6B124L},{9L}}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_381[i] = 2UL;
    if ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(func_44(l_264, (l_265 , g_110[1][2].f1), l_265.f1), ((safe_add_func_uint8_t_u_u(((l_268[1] & (g_255.f2 = (((~p_16.f0) || l_265.f2) == (g_141 && g_92.f0)))) | l_268[1]), 0x30L)) != 0x13L))), 7)) & l_265.f1) < 0xE3L))
    {
        unsigned char l_272 = 1UL;
        unsigned *l_273[6] = {(void*)0,&g_96,(void*)0,(void*)0,&g_96,(void*)0};
        int **l_286 = (void*)0;
        union U1 l_291[5][6] = {{{1L},{0x4EL},{1L},{0x4EL},{1L},{0x4EL}},{{1L},{0x4EL},{1L},{0x4EL},{1L},{0x4EL}},{{1L},{0x4EL},{1L},{0x4EL},{1L},{0x4EL}},{{1L},{0x4EL},{1L},{0x4EL},{1L},{0x4EL}},{{1L},{0x4EL},{1L},{0x4EL},{1L},{0x4EL}}};
        char *l_302[10] = {&g_33.f0,&l_291[0][3].f0,&g_33.f0,&g_33.f0,&g_33.f0,&g_33.f0,&l_291[0][3].f0,&g_33.f0,&g_33.f0,&g_33.f0};
        union U0 *l_342 = &g_110[0][3];
        union U0 **l_341 = &l_342;
        int l_347 = 0x485C10DBL;
        short l_364 = 0x18E5L;
        int l_418[6][3] = {{1L,1L,5L},{1L,1L,5L},{1L,1L,5L},{1L,1L,5L},{1L,1L,5L},{1L,1L,5L}};
        union U2 *l_476 = (void*)0;
        int i, j;
        (*g_235) = ((safe_lshift_func_int8_t_s_s((0xCA816459L >= (p_15 = l_272)), 1)) , l_274);
        for (g_92.f1 = (-10); (g_92.f1 > 10); g_92.f1 = safe_add_func_uint16_t_u_u(g_92.f1, 8))
        {
            int *l_281 = &g_69;
            unsigned **l_310 = &g_230[2];
            union U2 l_323 = {0x74E2E903L};
            for (l_264 = 0; (l_264 > 24); l_264 = safe_add_func_int16_t_s_s(l_264, 6))
            {
                unsigned char l_306 = 255UL;
                int *l_313 = &g_284;
                union U2 *l_329 = &g_233;
                union U2 **l_328 = &l_329;
            }
        }
        for (g_295 = 0; (g_295 < 22); g_295 = safe_add_func_int8_t_s_s(g_295, 7))
        {
            int l_332[4];
            short *l_333 = &l_268[1];
            short *l_334 = &g_335;
            int *l_338 = &g_284;
            union U1 *l_344[9] = {&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3]};
            int i;
            for (i = 0; i < 4; i++)
                l_332[i] = 1L;
            (*g_150) = func_44(g_284, l_332[0], ((p_15 || (!0xCFE398A9L)) , (((*l_333) = p_16.f0) | ((255UL < p_16.f2) | ((*l_334) = 0L)))));
            for (g_96 = (-3); (g_96 < 34); g_96 = safe_add_func_uint8_t_u_u(g_96, 9))
            {
                union U2 *l_340 = (void*)0;
                union U2 **l_339 = &l_340;
                union U0 ***l_343 = &l_341;
                l_338 = ((*l_288) = (*g_235));
                (*l_339) = &g_103[0];
                (*l_343) = l_341;
            }
            for (p_17 = 0; (p_17 <= 3); p_17 += 1)
            {
                int l_373 = 0x9394039BL;
                int l_374[8][2][3] = {{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}},{{4L,4L,4L},{0L,0L,0L}}};
                int l_375[9][3][9] = {{{6L,0xEEAC1E9BL,0x4F3EBBF6L,1L,(-1L),1L,(-7L),0xDD458D54L,(-10L)},{0x4F3EBBF6L,0x26144F1BL,(-1L),1L,0x2C48CEFEL,(-8L),0x5A35583CL,(-3L),1L},{0x0797C9DDL,0x9BF9DE1AL,1L,1L,0L,0L,1L,1L,0x9BF9DE1AL}},{{(-1L),(-3L),6L,(-1L),0x73BD247EL,0xD2C5A1C4L,0xBB6C3E15L,0x73329E79L,1L},{1L,(-1L),(-1L),0x7DE2283CL,0x4F3EBBF6L,(-1L),0x11A9DF11L,0x479C5F92L,0x6AAA068FL},{0x7CC7ADC2L,(-3L),0xE6293F26L,(-6L),0x3DBCB720L,(-1L),1L,(-1L),6L}},{{(-10L),0x9BF9DE1AL,0xEA5CF4F5L,0xAA551F5BL,7L,(-1L),7L,0xD76D0187L,0x7DE2283CL},{0x67347383L,7L,0x11A9DF11L,0L,0x5A35583CL,(-1L),(-3L),0x4DE21D8FL,0x9BF9DE1AL},{(-6L),0x6E5EFCE0L,0xBD9D0B88L,0x2C48CEFEL,0x35EA06B9L,6L,(-1L),(-1L),4L}},{{1L,(-1L),0x5A35583CL,0x6AAA068FL,0xB1F425F7L,0L,0L,4L,(-7L)},{1L,(-1L),1L,0L,0x6AAA068FL,0x67347383L,0L,0xB8C2398DL,0x35EA06B9L},{(-6L),(-1L),1L,0x5A35583CL,0xDD458D54L,0xBD9D0B88L,(-1L),0x73BD247EL,1L}},{{0x67347383L,0x97597BC2L,0x0797C9DDL,(-3L),0L,1L,7L,0x35EA06B9L,(-10L)},{0L,0x7099C4F5L,0xD5257FD2L,7L,7L,0xD5257FD2L,0x7099C4F5L,0L,0x3DBCB720L},{0x97597BC2L,(-3L),1L,0x67347383L,0xE6293F26L,0L,(-10L),1L,(-2L)}},{{(-1L),0x23CCDCFFL,0x7E348761L,0x622250C0L,0xEEAC1E9BL,0x97597BC2L,(-3L),0xFB2199A3L,0x3DBCB720L},{0x73BD247EL,0xB13E08F9L,(-1L),1L,(-1L),0xFB2199A3L,0xEEAC1E9BL,(-8L),(-10L)},{(-3L),0x58F28B37L,7L,(-1L),0xBB6C3E15L,0x11A9DF11L,0xBCDE2D0AL,0x9BF9DE1AL,(-1L)}},{{0x0797C9DDL,(-1L),0L,(-8L),0x7099C4F5L,1L,1L,(-1L),0L},{0x7DE2283CL,(-8L),0xBB6C3E15L,1L,(-6L),6L,0L,0xD2C5A1C4L,0L},{(-1L),1L,1L,0xD5257FD2L,0x3DE8FA77L,(-8L),0xE800A0C4L,0xD2C5A1C4L,1L}},{{0L,0x7099C4F5L,0x23CCDCFFL,(-1L),(-7L),0x73329E79L,(-1L),(-1L),0x11A9DF11L},{0x11A9DF11L,(-8L),0x35EA06B9L,1L,0x67347383L,1L,0L,0x9BF9DE1AL,0xB8C2398DL},{0xEEAC1E9BL,0L,0x4F3EBBF6L,0xBD9D0B88L,0x7DE2283CL,1L,0x23CCDCFFL,(-6L),0x23CCDCFFL}},{{(-6L),0x7E348761L,0xAA551F5BL,0xAA551F5BL,0x7E348761L,(-6L),0x4F3EBBF6L,0x8E436B11L,(-1L)},{1L,6L,(-8L),(-3L),0x58F28B37L,0xFB2199A3L,0x8E436B11L,0x5A35583CL,0x97597BC2L},{0x26144F1BL,0xAA9112C5L,1L,0x0797C9DDL,0xEFC29A86L,0x23CCDCFFL,0x4F3EBBF6L,0xEDE46D8CL,(-1L)}}};
                int i, j, k;
            }
        }
        if ((+(safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(func_44(l_291[0][3].f2, p_16.f2, (*l_274)), 0x9976D085L)) | l_381[1]), (g_92.f0 = (+(g_256.f0 = func_40((*g_76), func_40(p_16, ((safe_lshift_func_uint8_t_u_u((*g_305), 0)) || (*g_305)), l_291[0][3]), (*g_76)))))))))
        {
            unsigned char l_388 = 0x30L;
            union U0 l_396 = {0x85BC03FFL};
            unsigned char l_397 = 0x63L;
            int l_398[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
            unsigned short l_408[6][10] = {{1UL,0UL,65531UL,0UL,1UL,0UL,65531UL,0UL,1UL,0UL},{0x44A0L,0UL,0x44A0L,65528UL,0x44A0L,0UL,0x44A0L,65528UL,0x44A0L,0UL},{1UL,65528UL,65531UL,65528UL,1UL,65528UL,65531UL,65528UL,1UL,65528UL},{0x44A0L,65528UL,0x44A0L,0UL,0x44A0L,65528UL,0x44A0L,0UL,0x44A0L,65528UL},{1UL,0UL,65531UL,0UL,1UL,0UL,65531UL,0UL,1UL,0UL},{0x44A0L,0UL,0x44A0L,65528UL,0x44A0L,0UL,0x44A0L,65528UL,0x44A0L,0UL}};
            union U0 l_443[2] = {{0x39473622L},{0x39473622L}};
            int i, j;
            for (g_233.f0 = 20; (g_233.f0 == (-7)); g_233.f0 = safe_sub_func_int8_t_s_s(g_233.f0, 9))
            {
                short l_389[8];
                union U0 *l_411 = &g_110[1][2];
                union U1 *l_428 = &l_291[3][0];
                union U1 l_457 = {0x3DL};
                int l_470[4][8][4] = {{{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L}},{{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L}},{{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L}},{{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L},{0x3659447CL,0x5F272853L,0x3659447CL,0x5F272853L}}};
                union U2 *l_475 = &g_233;
                union U2 **l_474[7][5] = {{(void*)0,(void*)0,&l_475,(void*)0,&l_475},{&l_475,(void*)0,&l_475,(void*)0,&l_475},{&l_475,(void*)0,&l_475,(void*)0,&l_475},{&l_475,(void*)0,&l_475,(void*)0,&l_475},{&l_475,(void*)0,&l_475,(void*)0,&l_475},{&l_475,(void*)0,&l_475,(void*)0,&l_475},{&l_475,(void*)0,&l_475,(void*)0,&l_475}};
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_389[i] = 0xEED4L;
            }
            (*l_288) = &l_398[1];
        }
        else
        {
            (*l_274) = ((*g_447) != ((p_15 || (p_16.f2 | l_477)) && func_55(l_478[3][1][1], (&g_235 != (l_478[3][1][1] , (void*)0)), (((0x1BL >= p_16.f2) >= g_92.f2) | (-6L)))));
        }
    }
    else
    {
        (*g_403) = (*g_403);
    }
    return (*l_274);
}







static unsigned func_20(unsigned char p_21, union U1 p_22, union U1 p_23, union U1 p_24, unsigned p_25)
{
    int *l_258 = &g_69;
    (*g_235) = l_258;
    l_258 = ((*l_258) , (*g_235));
    return p_22.f0;
}







static unsigned func_28(union U1 p_29, unsigned p_30, union U0 p_31, union U1 p_32)
{
    unsigned char l_252 = 0x56L;
    (*g_144) = (**g_235);
    (*g_144) = (func_55(g_103[0], (p_31.f0 | func_44(l_252, g_33.f2, p_31.f2)), (g_110[1][2].f1 || g_87)) & p_31.f0);
    return p_32.f0;
}







static union U0 func_34(unsigned p_35)
{
    union U2 **l_248 = (void*)0;
    union U2 *l_250 = &g_103[0];
    union U2 **l_249 = &l_250;
    (*l_249) = &g_103[0];
    return g_110[2][0];
}







static unsigned short func_40(union U1 p_41, int p_42, union U1 p_43)
{
    union U0 *l_242[8][9][3] = {{{&g_110[1][2],&g_110[3][2],&g_110[3][3]},{&g_110[1][2],&g_110[3][1],&g_110[3][2]},{&g_110[1][3],(void*)0,&g_110[1][2]},{&g_110[0][0],(void*)0,&g_110[0][3]},{&g_110[0][1],&g_110[3][1],&g_110[1][1]},{(void*)0,&g_110[3][2],&g_110[1][2]},{&g_110[1][2],&g_110[1][2],&g_110[3][2]},{(void*)0,&g_110[1][2],(void*)0},{&g_110[2][2],&g_110[1][2],&g_110[0][3]}},{{(void*)0,&g_110[3][3],(void*)0},{&g_110[3][3],&g_110[1][2],&g_110[1][2]},{(void*)0,&g_110[0][0],&g_110[1][0]},{&g_110[1][2],&g_110[1][2],&g_110[0][0]},{&g_110[1][2],(void*)0,&g_110[2][0]},{&g_110[1][2],&g_110[1][1],(void*)0},{(void*)0,&g_110[1][2],(void*)0},{&g_110[3][3],&g_110[1][0],&g_110[0][3]},{(void*)0,&g_110[1][3],&g_110[1][2]}},{{&g_110[2][2],&g_110[0][1],&g_110[2][1]},{(void*)0,&g_110[1][0],&g_110[1][2]},{&g_110[1][2],&g_110[1][2],&g_110[1][0]},{&g_110[1][2],&g_110[0][1],&g_110[1][2]},{&g_110[0][1],&g_110[2][0],(void*)0},{&g_110[3][2],&g_110[2][2],(void*)0},{(void*)0,&g_110[2][0],&g_110[1][2]},{&g_110[3][0],&g_110[3][3],&g_110[1][0]},{&g_110[1][2],&g_110[3][3],&g_110[1][2]}},{{&g_110[1][2],&g_110[1][2],&g_110[0][0]},{&g_110[2][0],&g_110[1][3],&g_110[1][2]},{(void*)0,&g_110[3][3],&g_110[3][3]},{&g_110[1][2],&g_110[1][0],(void*)0},{&g_110[1][2],&g_110[1][2],&g_110[1][2]},{&g_110[1][3],&g_110[1][2],&g_110[3][3]},{&g_110[1][1],&g_110[1][2],&g_110[3][3]},{&g_110[1][2],&g_110[1][2],&g_110[0][3]},{&g_110[1][2],&g_110[1][2],&g_110[1][3]}},{{&g_110[3][2],&g_110[1][0],&g_110[0][1]},{&g_110[0][3],&g_110[3][3],&g_110[1][2]},{(void*)0,&g_110[1][3],&g_110[1][2]},{&g_110[3][3],&g_110[1][2],&g_110[1][2]},{&g_110[1][2],&g_110[3][3],&g_110[1][2]},{&g_110[1][0],&g_110[3][3],&g_110[1][2]},{&g_110[3][2],&g_110[2][0],&g_110[3][3]},{&g_110[3][3],&g_110[2][2],&g_110[1][0]},{&g_110[3][3],&g_110[2][0],&g_110[1][0]}},{{&g_110[3][2],&g_110[0][1],&g_110[0][0]},{&g_110[1][0],&g_110[1][2],&g_110[0][1]},{&g_110[1][2],&g_110[1][3],&g_110[1][3]},{&g_110[3][3],(void*)0,&g_110[1][2]},{(void*)0,&g_110[0][3],&g_110[3][2]},{&g_110[0][3],&g_110[0][3],&g_110[3][2]},{&g_110[3][2],&g_110[0][0],&g_110[1][2]},{&g_110[1][2],&g_110[3][2],&g_110[1][2]},{(void*)0,&g_110[3][1],&g_110[2][0]}},{{&g_110[1][2],&g_110[1][2],&g_110[1][2]},{&g_110[3][3],&g_110[2][1],&g_110[3][3]},{&g_110[1][2],&g_110[2][1],&g_110[1][3]},{&g_110[0][3],&g_110[1][2],&g_110[1][2]},{&g_110[3][0],&g_110[1][3],&g_110[1][2]},{&g_110[1][0],&g_110[1][2],(void*)0},{&g_110[1][0],&g_110[1][1],&g_110[3][2]},{&g_110[1][2],&g_110[1][2],&g_110[1][2]},{(void*)0,&g_110[0][3],&g_110[0][0]}},{{(void*)0,&g_110[1][2],&g_110[0][1]},{&g_110[2][1],&g_110[1][2],&g_110[3][2]},{&g_110[3][2],&g_110[0][3],&g_110[1][2]},{&g_110[1][2],&g_110[1][2],&g_110[1][2]},{&g_110[3][3],&g_110[1][1],&g_110[0][3]},{&g_110[3][3],&g_110[1][2],&g_110[1][0]},{&g_110[0][0],&g_110[1][3],&g_110[1][2]},{&g_110[3][1],&g_110[1][2],&g_110[3][1]},{&g_110[1][2],&g_110[2][1],(void*)0}}};
    union U0 **l_243 = &l_242[3][3][1];
    unsigned short l_244 = 0UL;
    int i, j, k;
    (*l_243) = l_242[7][2][0];
    (*g_235) = (*g_235);
    return l_244;
}







static char func_44(char p_45, char p_46, unsigned char p_47)
{
    short l_97 = 0x1220L;
    char l_100[10][9] = {{0L,0x8FL,0x8FL,0L,1L,0L,0x8FL,0x16L,0L},{(-1L),0xB2L,1L,0xB2L,(-1L),0x8AL,(-2L),0x52L,(-2L)},{0x16L,1L,0x59L,0x59L,1L,0x16L,8L,0x59L,4L},{0x3EL,0x8AL,(-2L),0x52L,(-2L),0x8AL,0x3EL,0xB2L,1L},{1L,0x8FL,8L,4L,4L,8L,0x8FL,1L,4L},{0x17L,0x52L,1L,(-1L),(-2L),(-1L),1L,0x52L,0x17L},{0L,4L,(-5L),0x59L,0L,0L,0x59L,(-5L),4L},{1L,0xB2L,0x3EL,0x8AL,(-2L),0x52L,(-2L),0x8AL,0x3EL},{0L,0L,0x59L,0x2EL,4L,0L,0L,4L,0x2EL},{0x17L,0xB2L,0x17L,0x52L,1L,(-1L),(-2L),(-1L),1L}};
    union U1 l_101[5] = {{2L},{2L},{2L},{2L},{2L}};
    union U2 l_104 = {-1L};
    int l_128[10] = {(-5L),0xE0D7569DL,(-5L),0xE0D7569DL,(-5L),0xE0D7569DL,(-5L),0xE0D7569DL,(-5L),0xE0D7569DL};
    int *l_139[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_69,&g_69,(void*)0,(void*)0,&g_69,&g_69},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_69,&g_69,(void*)0,(void*)0,&g_69},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_69,&g_69,(void*)0,(void*)0,&g_69,&g_69},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int **l_138 = &l_139[0][2];
    int ***l_137[6][3][2] = {{{(void*)0,&l_138},{&l_138,&l_138},{&l_138,(void*)0}},{{(void*)0,(void*)0},{&l_138,&l_138},{&l_138,&l_138}},{{(void*)0,&l_138},{&l_138,(void*)0},{&l_138,&l_138}},{{&l_138,(void*)0},{&l_138,&l_138},{(void*)0,&l_138}},{{&l_138,&l_138},{&l_138,(void*)0},{(void*)0,(void*)0}},{{&l_138,&l_138},{&l_138,&l_138},{(void*)0,&l_138}}};
    int *l_238 = &l_128[9];
    int i, j, k;
    for (p_46 = 0; (p_46 >= 4); p_46 = safe_add_func_int32_t_s_s(p_46, 7))
    {
        union U2 l_59 = {0xB3925B97L};
        union U1 *l_94[2];
        unsigned *l_95 = &g_96;
        int l_98 = 0L;
        int *l_99[3][2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_94[i] = &g_33;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_99[i][j] = &g_69;
        }
        l_98 = (safe_mod_func_uint16_t_u_u((~((safe_rshift_func_uint16_t_u_u(func_55(l_59, l_59.f0, p_45), g_69)) || func_55(l_59, ((*l_95) = (g_69 > (((*g_75) != l_94[0]) ^ p_46))), l_97))), 65526UL));
        g_69 = 0x41AE9EC2L;
    }
    for (p_45 = 7; (p_45 >= 0); p_45 -= 1)
    {
        unsigned l_102 = 2UL;
        int l_108 = 8L;
        union U0 *l_111 = &g_110[1][2];
        int *l_123 = (void*)0;
        union U1 ***l_165 = &g_75;
        union U2 l_176 = {-10L};
    }
    return g_69;
}







static unsigned short func_55(union U2 p_56, unsigned p_57, int p_58)
{
    for (p_56.f0 = 0; (p_56.f0 <= 20); ++p_56.f0)
    {
        int *l_64 = (void*)0;
        int **l_71 = &l_64;
        union U1 *l_91 = &g_92;
        union U1 *l_93 = &g_92;
        for (p_58 = 22; (p_58 > 11); p_58 = safe_sub_func_uint32_t_u_u(p_58, 1))
        {
            int **l_65 = &l_64;
            unsigned l_82[5][5] = {{0x2E653D3AL,0x3E1ABB41L,0x2E653D3AL,0x2E653D3AL,0x3E1ABB41L},{4294967295UL,0x1FBECDB5L,0x1FBECDB5L,4294967295UL,0x1FBECDB5L},{0x3E1ABB41L,0x3E1ABB41L,3UL,0x3E1ABB41L,0x3E1ABB41L},{0x1FBECDB5L,4294967295UL,0x1FBECDB5L,0x1FBECDB5L,4294967295UL},{0x3E1ABB41L,0x2E653D3AL,0x2E653D3AL,0x3E1ABB41L,0x2E653D3AL}};
            int i, j;
            (*l_65) = l_64;
        }
    }
    return g_69;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_103[i].f0, "g_103[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_110[i][j].f0, "g_110[i][j].f0", print_hash_value);
            transparent_crc(g_110[i][j].f1, "g_110[i][j].f1", print_hash_value);
            transparent_crc(g_110[i][j].f2, "g_110[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_233.f0, "g_233.f0", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f2, "g_255.f2", print_hash_value);
    transparent_crc(g_256.f0, "g_256.f0", print_hash_value);
    transparent_crc(g_256.f2, "g_256.f2", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
