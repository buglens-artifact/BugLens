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
   unsigned char f1;
};

union U1 {
   int f0;
   int f1;
   signed f2 : 16;
   int f3;
   unsigned f4;
};

union U2 {
   char * f0;
   unsigned f1;
};


static union U0 g_9 = {0xEEL};
static char *g_21 = &g_9.f0;
static union U1 g_39 = {0xE74FD574L};
static union U2 g_64 = {0};
static int *g_73 = &g_39.f3;
static union U0 *g_112[9] = {&g_9, &g_9, &g_9, &g_9, &g_9, &g_9, &g_9, &g_9, &g_9};
static union U2 *g_133 = &g_64;
static union U2 **g_132[5] = {&g_133, &g_133, &g_133, &g_133, &g_133};
static char **g_146 = &g_21;
static char ***g_145 = &g_146;
static unsigned g_152 = 4294967289UL;
static unsigned short g_214 = 0UL;
static int g_225[8][10][3] = {{{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}, {{0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}, {0L, (-1L), 0xE82CD3DBL}}};
static union U1 g_252[7] = {{-3L}, {-3L}, {0L}, {-3L}, {-3L}, {0L}, {-3L}};
static union U1 *g_251 = &g_252[0];
static union U1 **g_255 = &g_251;
static int g_297[6][1][2] = {{{0x9226B48DL, 0L}}, {{0x9226B48DL, 0L}}, {{0x9226B48DL, 0L}}, {{0x9226B48DL, 0L}}, {{0x9226B48DL, 0L}}, {{0x9226B48DL, 0L}}};
static union U0 g_362[3] = {{0xC8L}, {0xC8L}, {0xC8L}};



static union U1 func_1(void);
static unsigned char func_2(char * p_3, char * p_4, unsigned p_5, unsigned short p_6);
static union U1 func_7(union U0 p_8);
static union U1 func_10(char * p_11, char ** p_12, char p_13, char * p_14, char ** p_15);
static char * func_16(char * p_17, char * p_18, unsigned p_19, char ** p_20);
static char ** func_24(char ** p_25, char ** p_26, char p_27, char * p_28, union U0 p_29);
static unsigned char func_33(int p_34, char ** p_35, char p_36);
static short func_42(char * p_43, union U0 p_44, int p_45, union U1 p_46);
static char * func_47(char ** p_48, char ** p_49);
static char ** func_50(char ** p_51, unsigned p_52, char * p_53, union U0 p_54, int p_55);
static union U1 func_1(void)
{
    char *l_206 = &g_9.f0;
    int l_207 = 0xB9524142L;
    int *l_216 = &l_207;
    unsigned l_231 = 1UL;
    union U2 *l_260[8][3] = {{&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}, {&g_64, &g_64, &g_64}};
    union U2 *l_277 = &g_64;
    char ***l_299 = &g_146;
    unsigned short l_305 = 0x87E7L;
    short l_327[8] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
    union U0 l_392 = {0x96L};
    union U1 ***l_417[8];
    int i, j;
    for (i = 0; i < 8; i++)
        l_417[i] = &g_255;
    (*l_216) = (func_2((func_7(g_9) , l_206), l_206, l_207, (safe_sub_func_uint8_t_u_u((!l_207), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(g_214, g_214)), ((g_214 >= l_207) ^ l_207)))))) > l_207);

            ;


    for (g_39.f4 = (-17); (g_39.f4 < 11); ++g_39.f4)
    {
        unsigned l_220[6][5][2] = {{{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}}, {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}}, {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}}, {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}}, {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}}, {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}}};
        short l_232 = 0x9402L;
        unsigned char l_235[9][3] = {{0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}, {0x26L, 7UL, 0x26L}};
        int *l_243 = &g_225[2][1][1];
        char *l_256 = &g_9.f0;
        union U2 l_272 = {0};
        union U0 l_275 = {-1L};
        int l_296 = 0L;
        union U2 l_322 = {0};
        union U2 ***l_326 = &g_132[0];
        unsigned short l_333 = 0xA583L;
        union U2 *l_441[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_441[i] = &l_322;
        for (l_207 = 5; (l_207 >= 0); l_207 -= 1)
        {
            int *l_226[6][1] = {{&g_225[6][3][1]}, {&g_225[6][3][1]}, {&g_225[6][3][1]}, {&g_225[6][3][1]}, {&g_225[6][3][1]}, {&g_225[6][3][1]}};
            int i, j;
            for (g_152 = 1; (g_152 <= 8); g_152 += 1)
            {
                int *l_228 = (void*)0;
                for (g_9.f1 = 0; (g_9.f1 <= 4); g_9.f1 += 1)
                {
                    int **l_219 = &l_216;
                    (*l_219) = (g_39.f4 , &l_207);
                    if (l_220[1][3][0])
                    {
                        if (g_39.f3)
                            break;
                    }
                    else
                    {
                        short l_221 = 0x6F6AL;
                        int *l_224[9] = {(void*)0, &g_225[2][1][1], (void*)0, &g_225[2][1][1], (void*)0, &g_225[2][1][1], (void*)0, &g_225[2][1][1], (void*)0};
                        int i;
                        g_225[2][1][1] = (l_221 > (safe_lshift_func_int16_t_s_s(g_39.f4, 8)));
                        return g_39;

                                            }
                }
                for (g_9.f0 = 0; (g_9.f0 <= 8); g_9.f0 += 1)
                {
                    int **l_227[7][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
                    int i, j;
                    l_228 = l_226[5][0];
                    for (g_214 = 0; (g_214 <= 8); g_214 += 1)
                    {
                        g_225[7][6][0] = (l_220[1][3][0] , g_39.f4);
                        g_73 = (void*)0;

                        ;
                    }
                }

                                ;
                for (g_9.f0 = 0; (g_9.f0 <= 8); g_9.f0 += 1)
                {
                    unsigned l_241 = 1UL;
                    int l_242 = 0L;
                    g_225[5][5][0] = ((safe_rshift_func_int16_t_s_u(g_214, 8)) != l_231);
                    for (l_231 = 3; (l_231 <= 8); l_231 += 1)
                    {
                        unsigned l_238 = 0x936EF0B1L;
                        l_242 = ((0x32E3L <= ((l_232 >= (safe_add_func_uint16_t_u_u(((g_225[2][1][1] <= l_235[0][2]) && (((((safe_sub_func_int8_t_s_s((0x5BL >= (*g_21)), ((l_238 >= (safe_lshift_func_uint16_t_u_u(g_39.f4, 9))) | l_241))) , 1L) && l_238) == 4294967295UL) >= 0UL)), g_9.f1))) && g_225[2][1][1])) && 0x1ECB1D28L);
                    }
                    for (l_232 = 0; (l_232 <= 0); l_232 += 1)
                    {
                        int i, j;
                        l_226[l_232][l_232] = l_226[l_232][l_232];
                    }
                    l_226[5][0] = (void*)0;
                }
            }
        }
        l_243 = &g_225[2][1][1];
        g_73 = &g_225[2][1][1];

        ;
    }

        ;
    return (*g_251);

    }







static unsigned char func_2(char * p_3, char * p_4, unsigned p_5, unsigned short p_6)
{
    int *l_215[7][3] = {{&g_39.f3, &g_39.f3, &g_39.f3}, {&g_39.f3, &g_39.f3, &g_39.f3}, {&g_39.f3, &g_39.f3, &g_39.f3}, {&g_39.f3, &g_39.f3, &g_39.f3}, {&g_39.f3, &g_39.f3, &g_39.f3}, {&g_39.f3, &g_39.f3, &g_39.f3}, {&g_39.f3, &g_39.f3, &g_39.f3}};
    int i, j;
    g_39.f2 = p_5;

    return p_6;
}







static union U1 func_7(union U0 p_8)
{
    char *l_22 = &g_9.f0;
    int l_23 = (-3L);
    char *l_32 = &g_9.f0;
    union U0 l_129 = {0xF5L};
    char **l_204 = &l_32;
    union U1 l_205 = {7L};
    l_204 = (func_10(func_16(g_21, l_22, l_23, func_24(&g_21, &l_22, (((safe_lshift_func_uint16_t_u_u(((((l_32 != l_22) == func_33(p_8.f0, &g_21, (*g_21))) != l_23) || g_9.f0), 13)) & l_23) || p_8.f0), l_32, l_129)), &l_22, p_8.f1, l_32, &l_32) , &l_32);

            ;


    return l_205;

    }







static union U1 func_10(char * p_11, char ** p_12, char p_13, char * p_14, char ** p_15)
{
    unsigned l_175[6][6][7] = {{{0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}}, {{0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}}, {{0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}}, {{0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}}, {{0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}}, {{0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}, {0x605A33BAL, 0xEBD79624L, 0x4C4AE1A5L, 0UL, 1UL, 4UL, 0x6E4037C9L}}};
    int *l_176[3][6];
    int **l_177 = &l_176[1][4];
    char **l_178 = &g_21;
    union U1 l_190[7] = {{0x3DB8FB2BL}, {0x3DB8FB2BL}, {0x3DB8FB2BL}, {0x3DB8FB2BL}, {0x3DB8FB2BL}, {0x3DB8FB2BL}, {0x3DB8FB2BL}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
            l_176[i][j] = (void*)0;
    }
    (*l_177) = ((((p_13 > l_175[2][1][3]) , l_176[1][4]) != (void*)0) , l_176[1][4]);
    (*l_177) = g_73;


    if ((l_178 != &p_14))
    {
        union U1 l_181 = {0x5E18F196L};
        if ((4294967295UL <= (safe_rshift_func_int16_t_s_u(0xF09AL, 11))))
        {
            return l_181;

                    }
        else
        {
            int **l_182 = &l_176[0][1];
            if (((void*)0 == l_182))
            {
                return g_39;

                            }
            else
            {
                return g_39;

                            }
        }
    }
    else
    {
        union U1 l_187 = {0L};
        char *l_191 = (void*)0;
        union U0 l_192 = {1L};
        unsigned l_193[4][1][3] = {{{0UL, 0x97552E39L, 0UL}}, {{0UL, 0x97552E39L, 0UL}}, {{0UL, 0x97552E39L, 0UL}}, {{0UL, 0x97552E39L, 0UL}}};
        union U2 **l_195 = &g_133;
        int i, j, k;
        for (g_9.f1 = (-5); (g_9.f1 <= 43); ++g_9.f1)
        {
            union U1 l_194 = {0xF050AB9EL};
            int *l_201 = &l_190[6].f3;
            if ((safe_mul_func_int16_t_s_s(p_13, (~(l_187 , ((safe_rshift_func_int16_t_s_u((l_190[6] , g_39.f0), 13)) || (p_13 > g_9.f0)))))))
            {
                return l_194;

                            }
            else
            {
                union U2 ***l_196 = &l_195;
                int l_202 = 0L;
                (*l_196) = l_195;
                for (l_192.f0 = 0; (l_192.f0 == 19); ++l_192.f0)
                {
                    (*l_177) = (*l_177);
                    for (l_187.f3 = 0; (l_187.f3 == (-25)); l_187.f3--)
                    {
                        (*l_177) = l_201;
                    }

                                    }
                if (l_202)
                    continue;
                g_112[7] = &g_9;
            }
        }


        (*g_145) = (l_193[2][0][1] , &l_191);

        ;
        for (l_187.f4 = 1; (l_187.f4 <= 4); l_187.f4 += 1)
        {
            unsigned l_203 = 0xDA35C18DL;
            g_73 = (void*)0;

            ;
            l_203 = (-1L);
        }

                return l_190[6];


            }
}







static char * func_16(char * p_17, char * p_18, unsigned p_19, char ** p_20)
{
    int *l_174 = &g_39.f3;
    (*l_174) = 0x6A3D26EDL;

    return (*p_20);


}







static char ** func_24(char ** p_25, char ** p_26, char p_27, char * p_28, union U0 p_29)
{
    char **l_144[8] = {&g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21, &g_21};
    char ***l_143 = &l_144[5];
    union U0 l_164 = {0xEDL};
    union U2 *l_168[5];
    union U1 l_171 = {0x45837069L};
    int i;
    for (i = 0; i < 5; i++)
        l_168[i] = &g_64;
    if (p_27)
    {
        short l_150 = 0x462BL;
        union U2 *l_153 = &g_64;
        char *l_162[3];
        int l_165 = 0xC2A325B7L;
        int **l_166 = (void*)0;
        int **l_167 = &g_73;
        int i;
        for (i = 0; i < 3; i++)
            l_162[i] = &g_9.f0;
        for (g_9.f1 = 0; (g_9.f1 <= 8); g_9.f1 += 1)
        {
            union U2 **l_134[7] = {&g_133, &g_133, &g_133, &g_133, &g_133, &g_133, &g_133};
            union U0 l_163 = {7L};
            int i;
            if ((safe_mod_func_int8_t_s_s(((g_39.f2 , (g_132[0] != l_134[4])) < (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0xB59FL, (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_143 == g_145), g_39.f2)), ((safe_add_func_int8_t_s_s(((p_29.f1 > 1L) || 255UL), (*g_21))) > p_29.f0))))), 1))), g_39.f4)))
            {
                union U0 **l_149 = &g_112[g_9.f1];
                int l_151 = 0x41912E77L;
                int **l_156 = &g_73;
                int i;
                (*l_149) = &p_29;
                l_150 = g_39.f1;
                for (g_39.f4 = 2; (g_39.f4 <= 7); g_39.f4 += 1)
                {
                    g_152 = (g_39.f4 , ((l_151 != ((void*)0 == &g_133)) , (g_9.f0 | (0xC29DF71FL < p_27))));
                    l_153 = l_153;
                    for (l_150 = 0; (l_150 <= 8); l_150 += 1)
                    {
                        int *l_154[1];
                        int **l_155 = &l_154[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_154[i] = &g_39.f3;
                        (*l_155) = l_154[0];
                    }
                }

                (*l_156) = (void*)0;

                ;
            }
            else
            {
                int *l_158 = &g_39.f3;
                int **l_159 = &g_73;
                for (g_39.f0 = 1; (g_39.f0 <= 4); g_39.f0 += 1)
                {
                    int **l_157 = &g_73;
                    (*l_157) = (void*)0;

                    ;
                }

                (*l_158) = ((void*)0 == l_158);

                (*l_159) = g_73;
                l_165 = (safe_add_func_uint32_t_u_u(g_9.f1, g_9.f1));
            }

        }


        (*l_167) = g_73;
    }
    else
    {
        union U2 **l_169 = &l_168[2];
        union U0 l_170 = {4L};
        int *l_172[7][7][1] = {{{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}, {{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}, {{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}, {{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}, {{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}, {{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}, {{&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}, {&g_39.f3}}};
        int **l_173 = &l_172[0][0][0];
        int i, j, k;
        (*l_169) = l_168[2];
        g_39.f2 = (g_9.f1 == p_29.f1);

        (*l_173) = g_73;
    }


    return (*g_145);



}







static unsigned char func_33(int p_34, char ** p_35, char p_36)
{
    unsigned char l_58[8] = {247UL, 253UL, 247UL, 253UL, 247UL, 253UL, 247UL, 253UL};
    int l_59 = 0L;
    union U1 l_60 = {1L};
    char *l_61 = &g_9.f0;
    union U0 l_76[6][10] = {{{4L}, {0x00L}, {0xAEL}, {0x17L}, {0x17L}, {0xAEL}, {0x00L}, {4L}, {3L}, {-2L}}, {{4L}, {0x00L}, {0xAEL}, {0x17L}, {0x17L}, {0xAEL}, {0x00L}, {4L}, {3L}, {-2L}}, {{4L}, {0x00L}, {0xAEL}, {0x17L}, {0x17L}, {0xAEL}, {0x00L}, {4L}, {3L}, {-2L}}, {{4L}, {0x00L}, {0xAEL}, {0x17L}, {0x17L}, {0xAEL}, {0x00L}, {4L}, {3L}, {-2L}}, {{4L}, {0x00L}, {0xAEL}, {0x17L}, {0x17L}, {0xAEL}, {0x00L}, {4L}, {3L}, {-2L}}, {{4L}, {0x00L}, {0xAEL}, {0x17L}, {0x17L}, {0xAEL}, {0x00L}, {4L}, {3L}, {-2L}}};
    unsigned l_77 = 0x06571F67L;
    int i, j;
    for (g_9.f1 = 0; (g_9.f1 < 8); g_9.f1++)
    {
        union U0 l_62 = {-1L};
        int *l_93 = (void*)0;
        int *l_94 = &l_59;
        p_35 = &g_21;
    }

        if (((g_39.f0 , (((((!((((safe_sub_func_uint32_t_u_u(g_39.f0, ((((((**p_35) == 9UL) ^ ((p_34 , (l_60 , (p_36 ^ (0x340D7ECFL & (safe_add_func_uint8_t_u_u((((((p_36 > 5L) , 0x6B90ED9AL) != l_60.f3) , l_76[5][2]) , g_9.f0), 0x40L)))))) | p_34)) > p_36) , g_9.f1) || p_36))) == 0x8CFFL) , l_60.f1) > l_76[1][3].f1)) & l_59) <= p_36) <= g_39.f2) < (-1L))) , p_36))
    {
        int *l_99 = &g_39.f3;
        int *l_100 = &l_60.f3;
        (*l_100) = (*g_73);

                return p_34;
    }
    else
    {
        union U1 l_107 = {0xD8298C98L};
        int *l_117[10][1] = {{&l_59}, {&l_59}, {&l_59}, {&l_59}, {&l_59}, {&l_59}, {&l_59}, {&l_59}, {&l_59}, {&l_59}};
        union U0 l_126 = {5L};
        int i, j;
        if ((safe_add_func_uint32_t_u_u((p_34 <= 0xAF67B55CL), 1UL)))
        {
            return g_9.f1;
        }
        else
        {
            int *l_108[6] = {&l_107.f3, &l_107.f3, &g_39.f3, &l_107.f3, &l_107.f3, &g_39.f3};
            int **l_109 = &l_108[1];
            union U0 *l_110 = &l_76[1][3];
            unsigned l_128 = 0xAA76CBE3L;
            int i;
            for (g_39.f1 = 0; (g_39.f1 < (-22)); g_39.f1--)
            {
                for (l_59 = 0; (l_59 >= (-15)); --l_59)
                {
                    return g_39.f4;
                }
            }

            (*l_109) = ((p_36 <= func_42((*p_35), l_76[1][3], p_34, l_107)) , l_108[5]);

            ;
            for (l_107.f3 = 7; (l_107.f3 >= 0); l_107.f3 -= 1)
            {
                union U0 **l_111[10][5] = {{&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}, {&l_110, &l_110, &l_110, &l_110, &l_110}};
                int l_115 = 0L;
                int i, j;
                g_112[7] = l_110;
                for (l_60.f0 = 4; (l_60.f0 >= 0); l_60.f0 -= 1)
                {
                    int l_116[9] = {6L, 6L, 0L, 6L, 6L, 0L, 6L, 6L, 0L};
                    char *l_125[7][8][4] = {{{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}, {{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}, {{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}, {{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}, {{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}, {{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}, {{&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}, {&g_9.f0, (void*)0, (void*)0, &g_9.f0}}};
                    union U1 l_127 = {0x79060071L};
                    int i, j, k;
                    for (g_9.f0 = 5; (g_9.f0 >= 0); g_9.f0 -= 1)
                    {
                        int i;
                        l_59 = l_58[l_107.f3];
                    }

                                        if ((safe_sub_func_uint16_t_u_u(p_34, (p_36 <= l_115))))
                    {
                        int i;
                        g_39.f3 = l_116[1];

                        l_108[l_60.f0] = l_117[9][0];
                        if (g_39.f1)
                            continue;
                    }
                    else
                    {
                        char l_122[10][5][5] = {{{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}, {{0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}, {0x96L, 5L, 0L, 0L, 0xCBL}}};
                        int i, j, k;
                        l_122[0][1][2] = (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(p_36, g_39.f0)) , l_115), 3));
                        l_128 = (p_36 != ((safe_mul_func_uint8_t_u_u(g_9.f0, (*g_21))) ^ g_39.f4));
                    }

                    l_108[l_60.f0] = g_73;
                    l_115 = p_36;
                }
            }



            for (l_126.f0 = 0; l_126.f0 < 9; l_126.f0 += 1)
            {
                g_112[l_126.f0] = &l_76[1][3];
            }
        }

        ;

        l_60.f2 = 1L;

            }

        ;

    return p_36;


}







static short func_42(char * p_43, union U0 p_44, int p_45, union U1 p_46)
{
    unsigned l_78 = 0x9B11162BL;
    unsigned short l_79[1][3];
    union U0 *l_85 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_79[i][j] = 0x3003L;
    }
    if (l_78)
    {
        for (p_44.f1 = 0; (p_44.f1 <= 0); p_44.f1 += 1)
        {
            int **l_80 = &g_73;
            (*l_80) = g_73;
            for (g_39.f0 = 0; (g_39.f0 >= 0); g_39.f0 -= 1)
            {
                if ((*g_73))
                    break;
            }

        }

            }
    else
    {
        int l_88 = 0xC1F666C8L;
        char **l_89 = &g_21;
        char ***l_90 = (void*)0;
        char ***l_91 = &l_89;
        int *l_92 = &l_88;
        for (p_46.f4 = 0; (p_46.f4 < 6); p_46.f4++)
        {
            int *l_83 = (void*)0;
            int **l_84 = &g_73;
            (*l_84) = l_83;

            ;
        }

        ;
                l_85 = (void*)0;
        (*l_91) = func_50(func_50(func_50(&g_21, ((g_9.f0 , (safe_sub_func_uint16_t_u_u(((l_88 || ((~(l_89 == (void*)0)) & ((l_88 , &p_44) != (p_44 , (p_46.f4 , &p_44))))) ^ p_46.f3), 1L))) , g_39.f4), g_21, g_9, p_46.f4), p_45, (*l_89), p_44, g_9.f1), p_46.f1, p_43, g_9, p_46.f4);
        (*l_92) = 1L;
    }

    ;
        return g_39.f0;
}







static char * func_47(char ** p_48, char ** p_49)
{
    unsigned char l_72 = 1UL;
    int *l_74 = &g_39.f3;
    unsigned l_75 = 4294967295UL;
    (*g_73) = (safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_72)), (g_64 , (l_72 && ((((((l_72 | (g_73 == l_74)) ^ g_39.f3) & (*g_73)) <= ((*g_73) || (*g_73))) >= (*g_21)) | l_75)))));

    return g_21;


}







static char ** func_50(char ** p_51, unsigned p_52, char * p_53, union U0 p_54, int p_55)
{
    union U2 *l_63 = &g_64;
    union U2 **l_65 = &l_63;
    int *l_66 = &g_39.f3;
    int **l_67 = &l_66;
    char **l_68[2][4];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_68[i][j] = &g_21;
    }
    (*l_65) = l_63;

    (*l_67) = l_66;
    return l_68[1][3];


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_39.f2, "g_39.f2", print_hash_value);
    transparent_crc(g_39.f3, "g_39.f3", print_hash_value);
    transparent_crc(g_39.f4, "g_39.f4", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_225[i][j][k], "g_225[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_252[i].f0, "g_252[i].f0", print_hash_value);
        transparent_crc(g_252[i].f1, "g_252[i].f1", print_hash_value);
        transparent_crc(g_252[i].f2, "g_252[i].f2", print_hash_value);
        transparent_crc(g_252[i].f3, "g_252[i].f3", print_hash_value);
        transparent_crc(g_252[i].f4, "g_252[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_297[i][j][k], "g_297[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_362[i].f0, "g_362[i].f0", print_hash_value);
        transparent_crc(g_362[i].f1, "g_362[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
