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
   unsigned char f0;
};

struct S1 {
   unsigned f0;
};


static short g_13 = 0x8F57L;
static int g_62 = 0xD65FE96FL;
static struct S0 g_78 = {0x99L};
static struct S0 * volatile g_81 = &g_78;
static const struct S1 g_84 = {0x73C04290L};
static int g_88 = 2L;
static int *g_87 = &g_88;
static struct S0 g_89 = {248UL};
static struct S0 *g_102 = &g_78;
static struct S0 **g_101 = &g_102;
static struct S0 *** volatile g_100 = &g_101;
static int **g_107 = &g_87;
static int *** volatile g_106 = &g_107;
static unsigned g_182 = 0x844EC947L;
static int ** volatile g_201 = (void*)0;
static const struct S1 *g_206 = &g_84;
static const struct S1 ** volatile g_205 = &g_206;
static int * const *g_209 = &g_87;
static int * const ** volatile g_208 = &g_209;
static struct S1 g_224 = {0xE0FA9FD3L};
static const int *g_251 = (void*)0;
static const int ** volatile g_250 = &g_251;
static int ** volatile g_289 = &g_87;
static const int ** volatile g_291 = &g_251;
static unsigned char g_297[5][9][1] = {{{0x1DL},{0xF5L},{0UL},{251UL},{0UL},{0xF5L},{0x1DL},{0xF5L},{0UL}},{{251UL},{0UL},{0xF5L},{0x1DL},{0xF5L},{0UL},{251UL},{0UL},{0xF5L}},{{0x1DL},{0xF5L},{0UL},{251UL},{0UL},{0xF5L},{0x1DL},{0xF5L},{0UL}},{{251UL},{0UL},{0xF5L},{0x1DL},{0xF5L},{0UL},{251UL},{0UL},{0xF5L}},{{0x1DL},{0xF5L},{0UL},{251UL},{0UL},{0xF5L},{0x1DL},{0xF5L},{0UL}}};
static int *** volatile g_299 = &g_107;
static int *g_335[2] = {&g_62,&g_62};
static unsigned char g_338 = 0xCCL;
static volatile int g_342 = 0xD598AE99L;
static int ** volatile g_393[9][7][4] = {{{(void*)0,&g_87,&g_87,&g_87},{&g_335[1],&g_335[1],&g_335[0],&g_335[1]},{&g_87,&g_87,(void*)0,(void*)0},{&g_87,&g_87,&g_87,&g_335[1]},{(void*)0,&g_87,&g_87,&g_335[1]},{(void*)0,&g_87,(void*)0,&g_87},{(void*)0,&g_87,(void*)0,&g_335[1]}},{{&g_87,&g_87,&g_87,&g_335[1]},{(void*)0,&g_87,&g_335[1],(void*)0},{&g_335[1],&g_87,&g_335[0],&g_335[1]},{&g_335[1],&g_335[1],&g_87,&g_87},{&g_335[1],&g_87,(void*)0,&g_335[1]},{(void*)0,&g_335[0],&g_335[1],&g_335[1]},{&g_87,(void*)0,&g_87,&g_335[0]}},{{&g_335[0],&g_87,&g_335[0],&g_335[1]},{&g_335[1],&g_87,&g_87,&g_87},{&g_335[0],&g_87,&g_87,&g_87},{&g_335[1],(void*)0,&g_87,&g_335[0]},{&g_335[1],(void*)0,&g_335[0],&g_335[1]},{&g_87,(void*)0,&g_335[0],(void*)0},{&g_335[1],&g_87,&g_87,&g_87}},{{&g_335[1],&g_335[1],&g_335[0],(void*)0},{&g_335[0],&g_335[1],(void*)0,(void*)0},{&g_87,&g_87,&g_87,(void*)0},{&g_335[0],&g_87,&g_335[1],&g_335[1]},{&g_87,(void*)0,&g_87,&g_87},{&g_335[1],&g_87,&g_335[1],&g_335[0]},{&g_87,&g_335[1],&g_87,&g_335[0]}},{{(void*)0,(void*)0,&g_87,(void*)0},{&g_87,&g_335[0],&g_335[1],&g_87},{&g_87,&g_335[1],&g_87,&g_335[1]},{&g_335[1],(void*)0,&g_87,&g_335[1]},{&g_335[1],(void*)0,&g_87,&g_87},{&g_87,&g_335[1],&g_335[1],&g_335[1]},{&g_87,&g_87,&g_87,&g_335[1]}},{{(void*)0,&g_335[0],&g_87,&g_335[0]},{&g_87,&g_87,&g_335[1],&g_335[0]},{&g_335[1],&g_87,&g_87,&g_335[0]},{&g_87,&g_335[1],&g_335[1],&g_335[0]},{&g_335[0],&g_87,&g_87,(void*)0},{(void*)0,(void*)0,&g_335[1],&g_335[1]},{&g_87,&g_87,&g_335[1],&g_335[0]}},{{&g_335[0],(void*)0,(void*)0,&g_87},{&g_335[1],&g_335[1],&g_335[1],&g_335[1]},{(void*)0,&g_335[1],&g_335[1],(void*)0},{&g_335[1],&g_335[1],&g_87,(void*)0},{&g_335[1],(void*)0,&g_87,&g_335[1]},{&g_87,&g_335[0],&g_335[0],&g_335[1]},{&g_335[0],&g_87,&g_87,&g_335[1]}},{{&g_335[0],&g_335[0],&g_335[0],&g_335[0]},{&g_87,&g_87,&g_335[1],&g_87},{&g_335[1],&g_87,&g_335[1],&g_87},{&g_87,(void*)0,&g_335[0],&g_87},{&g_87,&g_335[1],(void*)0,&g_335[0]},{&g_87,&g_87,&g_87,&g_87},{&g_87,&g_87,&g_335[1],&g_87}},{{&g_335[1],(void*)0,&g_87,&g_87},{&g_87,&g_335[1],&g_335[1],&g_87},{(void*)0,(void*)0,(void*)0,&g_87},{&g_87,&g_87,&g_335[1],&g_87},{(void*)0,&g_87,&g_335[1],&g_335[0]},{&g_335[0],&g_335[1],&g_87,&g_87},{&g_335[1],(void*)0,&g_87,&g_87}}};
static volatile struct S0 g_421[6] = {{0x52L},{0x52L},{0x52L},{0x52L},{0x52L},{0x52L}};
static volatile struct S0 *g_420 = &g_421[2];
static volatile struct S0 ** volatile g_419 = &g_420;
static volatile struct S0 ** volatile *g_418 = &g_419;
static int ** const volatile g_446 = (void*)0;
static int ** volatile g_447 = &g_87;



static struct S0 func_1(void);
static int func_2(int p_3, struct S0 p_4);
static struct S0 func_6(unsigned p_7, struct S0 p_8, int p_9, const unsigned char p_10);
static const short func_26(int p_27, int p_28);
static struct S1 func_29(struct S1 p_30, unsigned p_31, const struct S1 p_32, unsigned short p_33);
static struct S1 func_36(unsigned p_37, unsigned short p_38, int p_39, int p_40, unsigned p_41);
static int * func_46(int p_47, unsigned short p_48);
static short func_49(int p_50, int * p_51, int * p_52, int * p_53, struct S0 p_54);
static int func_55(const unsigned char p_56, int * p_57, int * p_58, struct S0 p_59, int * p_60);
static int * func_63(unsigned char p_64, unsigned p_65, char p_66, char p_67, short p_68);
static struct S0 func_1(void)
{
    unsigned short l_5[2];
    struct S0 l_183 = {0x5EL};
    int *l_391 = &g_62;
    struct S0 **l_398 = &g_102;
    unsigned l_401 = 0xD65FC683L;
    int i;
    for (i = 0; i < 2; i++)
        l_5[i] = 65535UL;
    if (func_2(l_5[1], func_6((safe_add_func_int8_t_s_s(g_13, (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_div_func_int16_t_s_s((~g_13), (safe_add_func_int8_t_s_s(l_5[1], (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_5[1] != 0x2BA7B7E8L), ((g_13 >= func_26(l_5[0], l_5[1])) | g_13))), (-1L))))))) >= 4L) > g_84.f0) != 0x2FFCB450L), l_5[1])), g_182)))), l_183, g_13, g_182)))
    {
        int l_371 = 0x7342A22DL;
        struct S0 l_374 = {247UL};
        struct S1 l_389[5][2] = {{{0xAD876D7FL},{0UL}},{{0xB296C2EFL},{0xAD876D7FL}},{{0xD6ECBC03L},{0xD6ECBC03L}},{{0xD6ECBC03L},{0xAD876D7FL}},{{0xB296C2EFL},{0UL}}};
        struct S1 *l_390[1][4][2] = {{{&g_224,(void*)0},{&g_224,(void*)0},{&g_224,(void*)0},{&g_224,(void*)0}}};
        int **l_392 = (void*)0;
        int *l_394 = &g_88;
        int i, j, k;
        g_224 = l_389[2][1];
        l_394 = l_391;

        ;
    }
    else
    {
        char l_397 = (-1L);
        struct S0 * const *l_399 = &g_102;
        int l_400 = 1L;
        const struct S1 l_404 = {4294967294UL};
        struct S1 l_413[6] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
        int i;
        l_391 = func_46(func_2((((((((safe_mod_func_uint16_t_u_u(l_397, (0x72L | (l_398 == l_398)))) <= ((~3UL) || ((((*l_391) | g_13) >= (l_399 != (void*)0)) != g_88))) < (-8L)) < 9L) & g_342) >= l_400) <= l_401), l_183), g_297[0][1][0]);

        ;
        for (l_400 = 11; (l_400 >= (-16)); --l_400)
        {
            unsigned l_411 = 0x24AB5D2EL;
            struct S1 *l_412[6];
            int i;
            for (i = 0; i < 6; i++)
                l_412[i] = &g_224;
            l_413[1] = func_29((**g_205), g_224.f0, l_404, (safe_rshift_func_uint8_t_u_u((*l_391), (safe_sub_func_int16_t_s_s((g_88 & ((((safe_lshift_func_int16_t_s_s(l_411, 3)) || g_89.f0) <= ((void*)0 == &g_251)) | g_78.f0)), 0x7E35L)))));
        }
        (*l_391) = (safe_mod_func_uint16_t_u_u(g_224.f0, (l_397 ^ (g_62 | (safe_sub_func_int8_t_s_s((*l_391), ((void*)0 == g_418)))))));
    }





    ;
    ;
    ;
    for (g_89.f0 = 0; (g_89.f0 <= 1); g_89.f0 += 1)
    {
        struct S0 l_431 = {255UL};
        int *l_436 = &g_62;
        for (g_62 = 0; (g_62 <= 1); g_62 += 1)
        {
            int l_428 = (-1L);
            int *l_429 = &g_62;
            unsigned l_430 = 1UL;
            int *l_439[2][8] = {{(void*)0,&g_62,&g_62,(void*)0,&g_62,&g_62,(void*)0,&g_62},{(void*)0,(void*)0,&g_88,(void*)0,(void*)0,&g_88,(void*)0,(void*)0}};
            struct S0 ***l_445 = &l_398;
            int i, j;
            if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_55((safe_div_func_uint8_t_u_u(g_297[2][7][0], l_428)), l_391, l_429, (***g_418), l_391), 4)), ((g_88 != l_430) | g_224.f0))))
            {
                (*g_420) = l_431;
            }
            else
            {
                int *l_440 = &g_88;
                struct S0 l_441[10][8][3] = {{{{0x43L},{249UL},{4UL}},{{0x49L},{0xECL},{0x42L}},{{0xE6L},{0x64L},{1UL}},{{0xCFL},{0xECL},{247UL}},{{0xD1L},{249UL},{250UL}},{{0x1AL},{0x6BL},{0UL}},{{0xF0L},{248UL},{0x20L}},{{248UL},{247UL},{0x64L}}},{{{248UL},{0xCFL},{0x1AL}},{{0xF0L},{0xF0L},{0xE6L}},{{0x1AL},{0xCFL},{0x43L}},{{0xD1L},{0xC5L},{0x45L}},{{0xCFL},{0x45L},{0x84L}},{{0xE6L},{0xD1L},{0x45L}},{{0x49L},{1UL},{0x43L}},{{0x43L},{0xDFL},{0xE6L}}},{{{4UL},{0x43L},{0x1AL}},{{1UL},{250UL},{0x64L}},{{0xCFL},{250UL},{0x20L}},{{0UL},{0x43L},{0UL}},{{0UL},{0xDFL},{250UL}},{{253UL},{1UL},{247UL}},{{0x6BL},{0xD1L},{1UL}},{{250UL},{0x45L},{0x42L}}},{{{0x6BL},{0xC5L},{4UL}},{{253UL},{0xCFL},{1UL}},{{0UL},{0xF0L},{248UL}},{{0UL},{0x64L},{0x6BL}},{{0xD1L},{1UL},{0x6BL}},{{250UL},{0x20L},{0x20L}},{{0xB6L},{249UL},{0xE6L}},{{0xCFL},{4UL},{0xB6L}}},{{{0x1AL},{0x49L},{249UL}},{{0x43L},{4UL},{250UL}},{{0x64L},{0x49L},{1UL}},{{0x95L},{4UL},{0x42L}},{{0UL},{249UL},{0xC5L}},{{1UL},{0x20L},{0x84L}},{{0x20L},{1UL},{4UL}},{{0x20L},{0x64L},{0UL}}},{{{1UL},{1UL},{0x43L}},{{0UL},{0xD1L},{0xCFL}},{{0x95L},{0xDFL},{0xCFL}},{{0x64L},{0xCFL},{0xECL}},{{0x43L},{0x95L},{0xCFL}},{{0x1AL},{0xE6L},{0xCFL}},{{0xCFL},{0x6BL},{0x43L}},{{0xB6L},{0xCFL},{0UL}}},{{{250UL},{0x42L},{4UL}},{{0xD1L},{0x42L},{0x84L}},{{0xC5L},{0xCFL},{0xC5L}},{{253UL},{0x6BL},{0x42L}},{{0x45L},{0xE6L},{1UL}},{{249UL},{0x95L},{250UL}},{{0x42L},{0xCFL},{249UL}},{{249UL},{0xDFL},{0xB6L}}},{{{0x45L},{0xD1L},{0xE6L}},{{253UL},{1UL},{0x20L}},{{0xC5L},{0x64L},{0x6BL}},{{0xD1L},{0xD1L},{0UL}},{{248UL},{0xC5L},{0xC5L}},{{249UL},{253UL},{0x95L}},{{1UL},{0x45L},{249UL}},{{4UL},{249UL},{0x84L}}},{{{0xF0L},{0x42L},{248UL}},{{250UL},{249UL},{0xD1L}},{{0x64L},{0x45L},{0x20L}},{{247UL},{253UL},{0x49L}},{{0xB6L},{0xC5L},{0xDFL}},{{0xC5L},{0xD1L},{0x42L}},{{0xC5L},{250UL},{247UL}},{{0xB6L},{0xB6L},{0xF0L}}},{{{247UL},{0xCFL},{1UL}},{{0x64L},{0x1AL},{0x43L}},{{250UL},{0x43L},{0x6BL}},{{0xF0L},{0x64L},{0x43L}},{{4UL},{0x95L},{1UL}},{{1UL},{0UL},{0xF0L}},{{249UL},{1UL},{247UL}},{{248UL},{0x20L},{0x42L}}}};
                int **l_442 = &g_87;
                int i, j, k;
                (*l_440) = (((0xF232AE47L || (func_55(l_431.f0, l_391, func_46(g_224.f0, (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((void*)0 != l_436), (((g_224.f0 ^ g_297[0][1][0]) <= 0x41E1EA96L) || 0L))) >= g_338) && g_182), g_13))), l_441[8][3][1], l_436) >= g_84.f0)) && g_78.f0) || 0x12A79366L);
                (*l_442) = l_440;

                ;
                (*l_442) = func_46(((safe_mod_func_int32_t_s_s((((void*)0 != l_445) > 1L), (*l_429))) == 0x7369L), g_297[0][1][0]);
            }
        }
        (*l_391) = ((void*)0 == &l_431);
    }
    (*g_447) = l_391;

    ;
    return (***g_418);
}







static int func_2(int p_3, struct S0 p_4)
{
    unsigned l_355 = 0xF7E6AA0FL;
    int l_364 = 4L;
    for (g_89.f0 = 0; (g_89.f0 == 46); g_89.f0 = safe_add_func_int16_t_s_s(g_89.f0, 8))
    {
        char l_354 = 0L;
        struct S0 ***l_361 = &g_101;
        int *l_365 = &g_88;
        for (g_62 = 0; (g_62 == (-30)); g_62 = safe_sub_func_uint32_t_u_u(g_62, 8))
        {
            l_354 = 0x890436ECL;
        }
        if (l_355)
            break;
        for (g_224.f0 = 0; (g_224.f0 <= 1); g_224.f0 += 1)
        {
            int l_356[3];
            int i;
            for (i = 0; i < 3; i++)
                l_356[i] = 0x3FC1196AL;
            for (p_4.f0 = 0; (p_4.f0 <= 0); p_4.f0 += 1)
            {
                int i, j, k;
                return g_297[(p_4.f0 + 3)][(g_224.f0 + 1)][p_4.f0];
            }
            if (l_356[0])
                continue;
            for (g_78.f0 = 0; (g_78.f0 <= 2); g_78.f0 += 1)
            {
                int i;
                l_364 = (safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((1L != 65526UL) | l_356[g_78.f0]), 7)) || ((l_356[g_78.f0] || (((void*)0 == l_361) | 0x43L)) >= (p_3 != ((safe_div_func_uint8_t_u_u(p_3, g_182)) ^ 0xD366C35CL)))), g_224.f0));
            }
        }
        l_365 = l_365;
    }
    return l_355;
}







static struct S0 func_6(unsigned p_7, struct S0 p_8, int p_9, const unsigned char p_10)
{
    struct S0 *l_184[2];
    unsigned char l_185[4][10][6] = {{{0x25L,3UL,0x77L,0x3EL,0x77L,3UL},{0x77L,0x25L,0xBAL,252UL,252UL,0xBAL},{0x77L,0x77L,252UL,0x3EL,255UL,0x3EL},{0x25L,0x77L,0x25L,0xBAL,252UL,252UL},{3UL,0x25L,0x25L,3UL,0x77L,0x3EL},{0x3EL,3UL,252UL,0x3EL,252UL,0x77L},{0x3EL,252UL,0x77L,0x77L,252UL,0x3EL},{0xBAL,0x3EL,3UL,252UL,3UL,0x3EL},{3UL,0xBAL,0x77L,255UL,255UL,0x77L},{3UL,3UL,255UL,252UL,0x25L,252UL}},{{0xBAL,3UL,0xBAL,0x77L,255UL,255UL},{0x3EL,0xBAL,0xBAL,0x3EL,3UL,252UL},{252UL,0x3EL,255UL,0x3EL,252UL,0x77L},{0x3EL,252UL,0x77L,0x77L,252UL,0x3EL},{0xBAL,0x3EL,3UL,252UL,3UL,0x3EL},{3UL,0xBAL,0x77L,255UL,255UL,0x77L},{3UL,3UL,255UL,252UL,0x25L,252UL},{0xBAL,3UL,0xBAL,0x77L,255UL,255UL},{0x3EL,0xBAL,0xBAL,0x3EL,3UL,252UL},{252UL,0x3EL,255UL,0x3EL,252UL,0x77L}},{{0x3EL,252UL,0x77L,0x77L,252UL,0x3EL},{0xBAL,0x3EL,3UL,0xBAL,255UL,0x25L},{255UL,0x3EL,252UL,0x77L,0x77L,252UL},{255UL,255UL,0x77L,0xBAL,3UL,0xBAL},{0x3EL,255UL,0x3EL,252UL,0x77L,0x77L},{0x25L,0x3EL,0x3EL,0x25L,255UL,0xBAL},{0xBAL,0x25L,0x77L,0x25L,0xBAL,252UL},{0x25L,0xBAL,252UL,252UL,0xBAL,0x25L},{0x3EL,0x25L,255UL,0xBAL,255UL,0x25L},{255UL,0x3EL,252UL,0x77L,0x77L,252UL}},{{255UL,255UL,0x77L,0xBAL,3UL,0xBAL},{0x3EL,255UL,0x3EL,252UL,0x77L,0x77L},{0x25L,0x3EL,0x3EL,0x25L,255UL,0xBAL},{0xBAL,0x25L,0x77L,0x25L,0xBAL,252UL},{0x25L,0xBAL,252UL,252UL,0xBAL,0x25L},{0x3EL,0x25L,255UL,0xBAL,255UL,0x25L},{255UL,0x3EL,252UL,0x77L,0x77L,252UL},{255UL,255UL,3UL,0x77L,0x3EL,0x77L},{252UL,0x25L,252UL,255UL,3UL,3UL},{0xBAL,252UL,252UL,0xBAL,0x25L,0x77L}}};
    struct S0 ***l_186[7] = {&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101};
    unsigned short l_199 = 3UL;
    int *l_204 = &g_62;
    const struct S1 **l_247[10][9] = {{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{(void*)0,&g_206,(void*)0,&g_206,&g_206,(void*)0,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{(void*)0,&g_206,(void*)0,&g_206,&g_206,(void*)0,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{(void*)0,&g_206,(void*)0,&g_206,&g_206,(void*)0,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{(void*)0,&g_206,(void*)0,&g_206,&g_206,(void*)0,&g_206,&g_206,(void*)0},{&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206,&g_206},{&g_206,&g_206,&g_206,&g_206,(void*)0,&g_206,&g_206,&g_206,&g_206}};
    struct S0 *l_321[1];
    const int l_324[3] = {0x0048D735L,0x0048D735L,0x0048D735L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_184[i] = &g_89;
    for (i = 0; i < 1; i++)
        l_321[i] = &g_78;
    if (((((void*)0 != l_184[1]) <= (p_9 != (p_8.f0 > 0x07L))) >= l_199))
    {
        int * const * const l_207 = (void*)0;
        int l_212 = 1L;
        int *l_221 = &g_88;
        for (g_62 = 0; (g_62 <= 1); g_62 += 1)
        {
            int *l_200 = &g_62;
            int **l_226 = &l_204;
            struct S1 *l_229 = (void*)0;
            if (p_8.f0)
            {
                int **l_202 = (void*)0;
                int **l_203 = &g_87;
                (*l_203) = l_200;

                ;
                (*l_203) = l_204;

                ;
            }
            else
            {
                (*g_205) = &g_84;
                (*g_208) = l_207;

                ;
            }
            for (g_182 = 0; (g_182 <= 1); g_182 += 1)
            {
                struct S0 l_214 = {1UL};
                struct S1 *l_223 = &g_224;
                struct S1 **l_225 = &l_223;
                for (p_9 = 0; (p_9 <= 6); p_9 += 1)
                {
                    int *l_222 = &l_212;
                    for (g_13 = 0; (g_13 <= 6); g_13 += 1)
                    {
                        if ((*l_204))
                            break;
                        g_205 = &g_206;
                        l_212 = (safe_mod_func_uint16_t_u_u(g_88, p_9));
                    }
                    if ((g_78.f0 == g_88))
                    {
                        int **l_213 = &l_204;
                        int i;
                        (*l_213) = l_204;
                        l_184[g_62] = &p_8;
                    }
                    else
                    {
                        p_8 = l_214;
                    }
                    l_221 = func_46(((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0UL, l_214.f0)), (-1L))), 7)) || 65535UL), g_182);
                    (*l_221) = func_55(g_62, &l_212, l_222, p_8, l_204);
                }
                (*l_225) = l_223;
            }
            (*l_226) = l_200;

            ;
            (*l_226) = func_46((safe_rshift_func_int16_t_s_u((p_8.f0 && (l_229 == l_229)), 7)), (**l_226));

            ;
        }


        ;
        ;
    }
    else
    {
        int *l_230 = &g_62;
        const char l_274 = (-1L);
        struct S0 l_294 = {0x98L};
        struct S0 ***l_304 = &g_101;
        struct S0 l_341 = {5UL};
        int *** const l_349 = &g_107;
        if (func_55(((void*)0 == l_204), l_230, l_204, (*g_81), func_46((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((*l_230), (safe_add_func_uint8_t_u_u((&p_8 == (void*)0), (safe_add_func_uint8_t_u_u((p_9 == p_7), 0x76L)))))), 3)) ^ (-1L)), 7UL)), (*l_230))))
        {
            int * const l_243 = &g_88;
            const struct S1 **l_248 = &g_206;
            int *l_280[8] = {&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62,&g_62};
            int **l_281 = &l_280[5];
            int i;
            for (g_78.f0 = 11; (g_78.f0 == 9); --g_78.f0)
            {
                const int *l_249[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_249[i] = &g_62;
                if (p_8.f0)
                {
                    int **l_244 = &l_204;
                    (*l_244) = l_243;

                    ;
                }
                else
                {
                    for (g_224.f0 = 16; (g_224.f0 > 53); g_224.f0 = safe_add_func_uint32_t_u_u(g_224.f0, 9))
                    {
                        l_248 = l_247[0][5];
                        (*g_250) = l_249[4];

                        ;
                    }
                }
                (*g_205) = (*g_205);
                (*l_243) = p_9;
                for (g_89.f0 = 3; (g_89.f0 >= 8); g_89.f0 = safe_add_func_uint32_t_u_u(g_89.f0, 5))
                {
                    int l_254[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_254[i] = 0x68F20608L;
                    l_230 = func_63((4294967295UL | (!(65535UL & g_182))), p_9, p_7, p_10, (l_254[0] != (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0UL, (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((g_88 && 1L) ^ p_7), g_78.f0)), (*l_243))))), g_89.f0)), p_9)), 7UL))));
                    for (g_13 = 0; (g_13 <= 1); g_13 += 1)
                    {
                        struct S1 *l_273 = &g_224;
                        int l_275[3][6] = {{0xF2558EA9L,0x3F7CD451L,0L,0L,0x3F7CD451L,0xF2558EA9L},{0xF2558EA9L,(-1L),(-1L),0L,(-1L),0L},{0xF2558EA9L,0x4E24FC96L,0xF2558EA9L,0L,0x4E24FC96L,(-1L)}};
                        int i, j;
                        (*l_273) = func_29((**g_205), g_182, (*g_206), ((safe_add_func_int16_t_s_s(g_13, 0xA68FL)) >= (g_13 && (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(p_8.f0, (*l_204))), 15)))));
                        if (l_274)
                            break;
                        (*l_243) = l_275[0][1];
                    }
                }
            }

            ;
            ;
            ;
            (*l_281) = func_63(g_13, p_8.f0, p_10, (safe_mod_func_uint16_t_u_u((g_84.f0 ^ (((((safe_lshift_func_uint8_t_u_u(0xF9L, 1)) || (*l_204)) && p_8.f0) >= p_9) < (*l_230))), (*l_243))), g_89.f0);
        }
        else
        {
            const struct S1 *l_282 = &g_84;
            int *l_287[2][5] = {{(void*)0,&g_88,(void*)0,&g_88,(void*)0},{&g_88,&g_88,&g_88,&g_88,&g_88}};
            const int *l_290[3][10] = {{&g_62,&g_62,&g_62,&g_62,&g_62,&g_88,&g_62,&g_62,&g_62,&g_62},{&g_62,&g_88,&g_88,&g_62,&g_88,&g_88,&g_62,&g_88,&g_88,&g_62},{&g_88,&g_62,&g_88,&g_88,&g_62,&g_88,&g_88,&g_62,&g_88,&g_88}};
            int i, j;
            for (l_199 = 0; (l_199 <= 3); l_199 += 1)
            {
                int *l_284 = &g_88;
                (*g_205) = l_282;
                for (g_62 = 0; (g_62 <= 3); g_62 += 1)
                {
                    int *l_283 = &g_62;
                    struct S0 l_288 = {1UL};
                    for (p_9 = 0; (p_9 <= 3); p_9 += 1)
                    {
                        int i, j, k;
                        (*l_284) = (func_55(l_185[p_9][(p_9 + 5)][(l_199 + 1)], l_230, l_283, p_8, l_284) || g_13);
                        (*g_289) = l_230;

                        ;
                    }
                    for (p_8.f0 = 0; (p_8.f0 <= 3); p_8.f0 += 1)
                    {
                        (*g_291) = l_290[1][5];

                        ;
                        return (*g_81);
                    }
                }
            }
            (*l_230) = 0x38C1A74CL;
            (*l_204) = (*l_204);
        }

        ;
        ;
        for (l_199 = 0; (l_199 <= 1); l_199 += 1)
        {
            struct S0 l_295 = {7UL};
            int *l_317 = &g_88;
            unsigned l_339 = 1UL;
            for (g_78.f0 = 0; (g_78.f0 <= 1); g_78.f0 += 1)
            {
                int i;
                l_294 = p_8;
                for (g_62 = 0; (g_62 <= 1); g_62 += 1)
                {
                    struct S0 l_296 = {0x09L};
                    int l_298 = (-1L);
                    l_296 = l_295;
                    l_298 = g_297[0][1][0];
                }
            }
            (*g_299) = &l_204;

            ;
            (*g_107) = func_46(((safe_div_func_uint32_t_u_u((g_182 == ((0x23L >= ((&l_204 != &l_204) < (l_304 != (void*)0))) >= ((safe_lshift_func_uint8_t_u_u(p_10, (safe_lshift_func_uint8_t_u_u(((p_9 >= (p_8.f0 && 0x7BL)) != 0x0F93L), l_295.f0)))) >= p_9))), (*l_230))) && p_8.f0), g_88);

            ;
            for (p_7 = 0; (p_7 <= 6); p_7 += 1)
            {
                unsigned char l_313 = 6UL;
                int **l_316 = (void*)0;
                struct S0 *l_320 = &g_89;
                (**g_107) = ((*l_204) == ((safe_sub_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(l_313, 0x73L)) != (safe_add_func_int32_t_s_s(l_313, (l_316 == (void*)0)))), func_55(p_7, l_317, l_317, p_8, l_317))) ^ 0L));
                if (p_8.f0)
                    break;
                if ((func_49(((l_320 != l_321[0]) && (1L != (*l_317))), l_204, l_204, l_204, p_8) | g_297[0][1][0]))
                {
                    short l_336 = (-6L);
                    (*l_317) = (~(safe_lshift_func_uint8_t_u_u(l_324[0], p_10)));
                    if (p_7)
                    {
                        return p_8;


                    }
                    else
                    {
                        const unsigned char l_329 = 0x6BL;
                        struct S0 l_334[10][10] = {{{7UL},{7UL},{0xCAL},{255UL},{0x89L},{0xCAL},{0x89L},{255UL},{0xCAL},{3UL}},{{0xCBL},{1UL},{0xCAL},{0xCBL},{255UL},{255UL},{0xCBL},{0xCAL},{1UL},{0xCBL}},{{0xCAL},{3UL},{1UL},{255UL},{3UL},{255UL},{1UL},{3UL},{0xCAL},{0xCAL}},{{0xCBL},{0UL},{255UL},{3UL},{3UL},{255UL},{0UL},{0xCBL},{255UL},{0xCBL}},{{3UL},{1UL},{255UL},{3UL},{255UL},{1UL},{3UL},{0xCAL},{0xCAL},{3UL}},{{0xCAL},{0xCBL},{255UL},{255UL},{0xCBL},{0xCAL},{1UL},{0xCBL},{1UL},{0xCAL}},{{0UL},{0xCBL},{255UL},{0xCBL},{0UL},{255UL},{3UL},{3UL},{255UL},{0UL}},{{0UL},{1UL},{1UL},{0UL},{255UL},{0xCAL},{0UL},{0xCAL},{255UL},{0UL}},{{0xCAL},{0UL},{0xCAL},{255UL},{0UL},{1UL},{1UL},{0UL},{255UL},{0xCAL}},{{3UL},{3UL},{255UL},{0UL},{0xCBL},{255UL},{0xCBL},{0UL},{255UL},{3UL}}};
                        short l_337 = 0L;
                        int i, j;
                        (**g_107) = ((safe_sub_func_int16_t_s_s(((*l_230) & (safe_add_func_int8_t_s_s((l_186[6] != &g_101), (0xBEF140DDL | l_329)))), (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((((func_55((&g_81 == (void*)0), (**g_299), (*g_107), l_334[4][7], g_335[1]) != 7L) || 0xCEL) ^ l_336) >= l_337) > 65533UL), p_9)), g_338)))) | l_339);
                    }
                    if (p_10)
                        break;
                }
                else
                {
                    struct S0 l_344 = {255UL};
                    for (l_339 = 0; (l_339 <= 1); l_339 += 1)
                    {
                        (*l_320) = p_8;
                        return p_8;


                    }
                    for (g_62 = 1; (g_62 >= 0); g_62 -= 1)
                    {
                        const struct S1 *l_343 = &g_224;
                        (*g_107) = func_46(func_55(((safe_unary_minus_func_int8_t_s(g_224.f0)) == p_7), func_46(p_7, g_13), l_230, (*l_320), func_46(g_182, func_55(g_78.f0, (**g_299), l_204, l_341, (*g_107)))), (*l_317));
                        (*l_317) = 0x7C61B3FFL;
                        if (g_342)
                            break;
                        l_343 = (*g_205);

                        ;
                    }
                    for (g_338 = 0; (g_338 <= 1); g_338 += 1)
                    {
                        l_344 = l_295;
                        return (*g_81);


                    }
                }


                for (l_339 = 0; (l_339 <= 6); l_339 += 1)
                {
                    (*g_107) = (*g_107);
                }
            }
        }


        (*l_204) = (1L < (func_49((safe_add_func_int16_t_s_s((&p_8 != (void*)0), ((*l_204) || ((void*)0 == l_349)))), l_230, l_204, l_204, (*g_81)) <= p_9));


        (*l_204) = p_10;
    }



    ;
    ;
    ;
    return p_8;


}







static const short func_26(int p_27, int p_28)
{
    struct S1 l_34 = {0x09C3997BL};
    unsigned short l_35 = 9UL;
    struct S1 *l_172 = &l_34;
    const unsigned short l_181 = 65530UL;
    (*l_172) = func_29(l_34, l_35, func_36(l_34.f0, (safe_unary_minus_func_uint8_t_u(p_27)), (~(((0x082F4E55L != 0x5AB4D258L) < 0x336DL) && 0x58L)), g_13, g_13), p_28);





    for (g_88 = 8; (g_88 < (-12)); --g_88)
    {
        short l_177 = 0L;
        int **l_180 = &g_87;
        if (p_27)
            break;
        (*l_180) = func_46((((((l_177 <= l_34.f0) == (l_34.f0 && 0L)) & l_35) && g_89.f0) >= (safe_mod_func_uint16_t_u_u((((void*)0 != &l_34) == p_27), p_27))), p_27);

        ;
        (*l_172) = (*l_172);
    }
    return l_181;
}







static struct S1 func_29(struct S1 p_30, unsigned p_31, const struct S1 p_32, unsigned short p_33)
{
    return g_84;
}







static struct S1 func_36(unsigned p_37, unsigned short p_38, int p_39, int p_40, unsigned p_41)
{
    short l_45 = 0x3EA3L;
    int *l_61 = &g_62;
    int *** const l_108 = &g_107;
    unsigned l_113 = 0x62A889E4L;
    int *l_117[3][3] = {{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88},{&g_88,&g_88,&g_88}};
    struct S0 ***l_124 = &g_101;
    int * const l_171[8][8] = {{&g_62,&g_62,(void*)0,(void*)0,&g_88,&g_62,(void*)0,&g_88},{&g_62,&g_88,&g_62,&g_62,&g_62,(void*)0,(void*)0,&g_88},{&g_88,&g_62,(void*)0,&g_62,&g_62,&g_88,&g_88,&g_62},{&g_62,&g_88,&g_88,&g_62,&g_62,(void*)0,&g_62,&g_88},{&g_88,(void*)0,(void*)0,&g_62,&g_62,&g_62,&g_88,&g_62},{&g_88,(void*)0,&g_62,&g_88,(void*)0,(void*)0,&g_62,&g_62},{&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,&g_88,(void*)0},{(void*)0,&g_62,(void*)0,&g_88,&g_62,(void*)0,&g_88,&g_88}};
    int i, j;
    if ((safe_rshift_func_int16_t_s_u(l_45, 7)))
    {
        short l_69[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int *l_72 = &g_62;
        int **l_104 = &g_87;
        int i;
        (*l_104) = func_46(g_13, (func_49(func_55((~1UL), l_61, func_63(l_69[4], (*l_61), (*l_61), g_62, (safe_sub_func_int16_t_s_s(((-5L) || (l_72 != l_61)), g_13))), g_78, l_72), g_87, l_72, &g_88, g_89) | l_45));


        (*l_72) = 0xCCB2DC50L;
        (*l_61) = (*g_87);
    }
    else
    {
        int **l_105 = &l_61;
        (*l_61) = 1L;
        (*l_105) = (void*)0;

        ;
        (*g_106) = &l_61;

        ;
    }

    ;

    ;
    (**l_108) = func_46((((void*)0 != l_108) & (g_13 <= g_89.f0)), p_37);

    ;
    for (p_39 = (-16); (p_39 < (-27)); p_39 = safe_sub_func_uint32_t_u_u(p_39, 7))
    {
        unsigned char l_114[2][3] = {{0xCBL,0xD1L,0xCBL},{0xCBL,0xD1L,0xCBL}};
        int *l_115 = (void*)0;
        struct S0 l_116 = {0x14L};
        int i, j;
        if ((!(((safe_rshift_func_uint16_t_u_s(p_37, 2)) & func_49(l_113, (**l_108), func_63((0L <= p_41), (g_84.f0 >= 248UL), g_13, g_84.f0, g_89.f0), l_117[2][0], (*g_102))) < g_13)))
        {
            for (p_41 = 0; (p_41 != 47); p_41 = safe_add_func_uint32_t_u_u(p_41, 1))
            {
                struct S0 l_123 = {0x81L};
                for (g_88 = 2; (g_88 >= 0); g_88 -= 1)
                {
                    struct S0 ***l_122 = &g_101;
                    int i, j;
                    for (l_113 = 0; (l_113 <= 1); l_113 += 1)
                    {
                        int i, j;
                        l_117[g_88][l_113] = l_117[g_88][g_88];
                        if (l_114[l_113][l_113])
                            continue;
                    }
                    l_117[g_88][g_88] = l_117[g_88][g_88];
                    if ((safe_lshift_func_uint8_t_u_s((&g_101 != l_122), 6)))
                    {
                        (*g_102) = l_123;
                        (*g_107) = (void*)0;
                    }
                    else
                    {
                        return g_84;


                    }
                }
                l_115 = func_46(p_41, p_40);

                ;
            }

            ;
        }
        else
        {
            unsigned char l_125 = 0x72L;
            for (l_45 = 0; (l_45 <= 1); l_45 += 1)
            {
                int i, j;
                l_125 = ((l_124 != l_124) == ((void*)0 != &l_117[(l_45 + 1)][l_45]));
                l_117[(l_45 + 1)][l_45] = l_115;
                if (p_41)
                    continue;
            }
            for (l_116.f0 = 0; (l_116.f0 > 19); l_116.f0 = safe_add_func_int8_t_s_s(l_116.f0, 8))
            {
                short l_128 = (-4L);
                int l_129 = 0x997E3454L;
                struct S1 l_130 = {9UL};
                (*g_107) = (void*)0;
                l_129 = (+((+g_84.f0) ^ l_128));
                return l_130;


            }
        }


        ;
        for (p_41 = 0; (p_41 <= 2); p_41 += 1)
        {
            int l_131 = 1L;
            int i, j;
            l_131 = 0L;
        }
        for (g_89.f0 = 20; (g_89.f0 == 20); g_89.f0++)
        {
            int *l_142 = (void*)0;
            int l_148 = (-2L);
            char l_149 = 0L;
            int l_150 = 1L;
            struct S0 **l_153 = &g_102;
            for (l_45 = 16; (l_45 >= (-11)); l_45 = safe_sub_func_uint32_t_u_u(l_45, 9))
            {
                struct S0 l_143 = {9UL};
                struct S1 l_168 = {1UL};
                l_150 = ((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(0x78B3ED55L, (safe_mod_func_int16_t_s_s(func_55((p_38 <= (&g_107 != l_108)), l_142, &p_39, l_143, func_63(p_38, ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(g_88, g_62)), 0)) && l_148), l_149, p_38, p_38)), g_88)))), p_38)) >= 0x9CFF1310L);
                for (g_88 = 2; (g_88 >= 0); g_88 -= 1)
                {
                    struct S0 ***l_159 = &g_101;
                    int l_165 = 0xFC91578AL;
                    for (p_41 = 0; p_41 < 2; p_41 += 1)
                    {
                        for (p_38 = 0; p_38 < 3; p_38 += 1)
                        {
                            l_114[p_41][p_38] = 255UL;
                        }
                    }
                    for (l_143.f0 = 0; (l_143.f0 <= 2); l_143.f0 += 1)
                    {
                        int l_164 = 0x3730F596L;
                        int i, j;
                        l_117[l_143.f0][l_143.f0] = func_46(((safe_mod_func_uint8_t_u_u(((((0x34055586L || (l_153 != (void*)0)) < 0x42L) || (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_159 == &l_153), 1UL)), p_39))))) & (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((-4L), l_164)) ^ g_62), 2))), g_84.f0)) == 255UL), l_165);
                        (*l_153) = &l_143;

                        ;
                    }

                    ;
                    if ((safe_sub_func_int32_t_s_s(0L, (l_143.f0 <= (0x1956L || l_165)))))
                    {
                        int i, j;
                        l_117[g_88][g_88] = l_117[g_88][g_88];
                        l_117[g_88][g_88] = l_117[g_88][g_88];
                        l_150 = p_37;
                    }
                    else
                    {
                        (**g_106) = &p_39;

                        ;
                        ;
                        (**l_153) = l_116;
                    }

                    ;
                    ;
                    return l_168;




                }
            }
        }
        for (l_116.f0 = 0; (l_116.f0 <= 52); l_116.f0++)
        {
            return g_84;


        }
    }

    ;

    (**l_108) = l_171[1][1];

    ;
    return g_84;


}







static int * func_46(int p_47, unsigned short p_48)
{
    int *l_103 = &g_88;
    return l_103;


}







static short func_49(int p_50, int * p_51, int * p_52, int * p_53, struct S0 p_54)
{
    const int *l_97 = &g_88;
    struct S0 *l_99 = &g_89;
    struct S0 **l_98[7] = {&l_99,&l_99,&l_99,&l_99,&l_99,&l_99,&l_99};
    int i;
    for (g_62 = 0; (g_62 >= 29); ++g_62)
    {
        const int *l_95 = &g_88;
        for (g_78.f0 = 23; (g_78.f0 >= 40); g_78.f0++)
        {
            struct S0 *l_94 = &g_89;
            const int **l_96 = (void*)0;
            (*l_94) = p_54;
            l_97 = l_95;
        }
    }
    (*g_100) = l_98[6];

    ;
    return p_50;


}







static int func_55(const unsigned char p_56, int * p_57, int * p_58, struct S0 p_59, int * p_60)
{
    char l_79[4] = {0xC5L,0xC5L,0xC5L,0xC5L};
    struct S0 l_80 = {0UL};
    int l_86[10] = {0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L,0xABF77135L};
    int i;
    for (p_59.f0 = 0; (p_59.f0 <= 3); p_59.f0 += 1)
    {
        (*g_81) = l_80;
    }
    for (p_59.f0 = 8; (p_59.f0 > 10); p_59.f0 = safe_add_func_uint32_t_u_u(p_59.f0, 6))
    {
        struct S1 l_85 = {4294967295UL};
        l_85 = g_84;
        return (*p_60);
    }
    return l_86[4];
}







static int * func_63(unsigned char p_64, unsigned p_65, char p_66, char p_67, short p_68)
{
    int *l_74 = (void*)0;
    int **l_73 = &l_74;
    int *l_77 = &g_62;
    (*l_73) = (void*)0;
    (*l_77) = (0x012CL && (&l_74 == (void*)0));
    return &g_62;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_297[i][j][k], "g_297[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_421[i].f0, "g_421[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
