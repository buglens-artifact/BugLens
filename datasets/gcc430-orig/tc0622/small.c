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
   unsigned f1;
   char f2;
   unsigned short f3;
   unsigned f4;
   unsigned short f5;
   int f6;
};

struct S1 {
   unsigned f0;
   unsigned char f1;
};

struct S2 {
   short f0;
   int f1;
   struct S1 f2;
   unsigned f3;
   short f4;
   short f5;
   short f6;
   unsigned f7;
   unsigned short f8;
};

struct S3 {
   char f0;
   struct S1 f1;
   short f2;
   int f3;
   int f4;
};

struct S4 {
   struct S0 f0;
   struct S2 f1;
   unsigned char f2;
};

struct S5 {
   char f0;
};

struct S6 {
   unsigned char f0;
   unsigned short f1;
   int f2;
   short f3;
   unsigned char f4;
   unsigned f5;
   struct S5 f6;
};

struct S7 {
   short f0;
   unsigned short f1;
   struct S1 f2;
   struct S5 f3;
   struct S1 f4;
};


static unsigned char g_54 = 0x8AL;
static unsigned char g_55 = 0xF4L;
static struct S6 g_56 = {250UL,65535UL,0L,-8L,0UL,0xC725F569L,{1L}};
static int g_61 = 0x1E1EA803L;
static struct S1 g_67 = {0x04AB730DL,0x9BL};
static struct S1 **g_76 = (void*)0;
static int g_84 = (-1L);
static struct S6 g_111 = {0UL,0UL,0x2D788D99L,-10L,0xBEL,1UL,{0L}};
static struct S4 g_115 = {{1L,0xE85E3D3FL,1L,7UL,0xD7D783D8L,0UL,0x882324A6L},{0xD0D3L,0x459E8EBBL,{0xB1E83F6AL,248UL},4294967289UL,0x4ED3L,2L,0xDA63L,0xD3559E74L,65529UL},1UL};
static struct S1 *g_118 = (void*)0;
static int *g_125 = (void*)0;
static struct S2 *g_135 = &g_115.f1;
static unsigned *g_146 = &g_115.f0.f4;
static unsigned **g_145 = &g_146;
static struct S3 g_176 = {0xBFL,{0x2B63680AL,252UL},7L,0xD69D35C1L,2L};
static struct S6 g_211 = {1UL,1UL,0x960F0752L,0xFE84L,0xE0L,0xBB11AE36L,{0x6AL}};
static struct S2 g_275 = {-1L,-1L,{0UL,249UL},0x875FBCA4L,-6L,3L,0x379CL,4294967295UL,0x54CAL};
static struct S5 *g_282 = &g_111.f6;
static struct S3 g_305 = {1L,{4294967287UL,0UL},0xD96DL,0x03725270L,0xF43A48F0L};
static unsigned g_322 = 0x97ACBCCFL;
static int **g_332 = (void*)0;
static int ***g_331 = &g_332;
static struct S6 *g_346 = &g_111;
static struct S6 **g_345 = &g_346;
static struct S4 *g_351 = &g_115;
static struct S7 g_371 = {0x0E8AL,0x8008L,{4UL,0x5DL},{0x21L},{4294967295UL,1UL}};
static short *g_376 = &g_275.f0;



static struct S7 func_1(void);
static int func_4(struct S3 p_5);
static struct S3 func_6(int p_7, unsigned p_8, struct S2 p_9, struct S2 p_10, unsigned p_11);
static char func_13(unsigned short p_14, unsigned char p_15, short p_16, unsigned char p_17);
static short func_18(struct S4 p_19, unsigned short p_20);
static struct S4 func_21(unsigned char p_22, struct S6 p_23, struct S6 p_24);
static char func_29(struct S4 p_30, struct S3 p_31, struct S3 p_32, struct S6 p_33);
static struct S3 func_35(unsigned p_36, struct S4 p_37, unsigned short p_38, unsigned short p_39);
static unsigned func_40(struct S4 p_41, unsigned p_42, struct S5 p_43, int p_44, struct S1 p_45);
static struct S4 func_46(struct S7 p_47, int p_48, struct S5 p_49, struct S6 p_50);
static struct S7 func_1(void)
{
    unsigned l_12 = 1UL;
    struct S4 l_34 = {{0x9FL,0x6DE5F43CL,1L,65535UL,0UL,0xB7EAL,8L},{0x6B00L,4L,{1UL,0UL},0xE5819C35L,-1L,-1L,-8L,0x432CFC9AL,0xE810L},1UL};
    struct S7 l_51 = {4L,9UL,{4294967295UL,0x7FL},{1L},{0xD310D212L,0xA4L}};
    int l_116 = 1L;
    struct S3 *l_209 = &g_176;
    struct S3 l_210 = {-1L,{1UL,0xD6L},4L,0x14E27A1FL,1L};
    short *l_213 = &l_34.f1.f4;
    struct S6 l_214 = {0x4FL,0x50B1L,1L,0xF72FL,4UL,0xE79B9721L,{1L}};
    char l_219 = 0x23L;
    char l_220 = 0x6CL;
    unsigned short l_221 = 0x97B3L;
    struct S2 l_274 = {0x83A1L,0x4B54537DL,{4294967295UL,0x73L},4294967295UL,0x3BA6L,0x4CA9L,-1L,0UL,4UL};
    int *l_285 = &g_275.f1;
    struct S1 *l_290 = &l_34.f1.f2;
    struct S2 **l_365 = &g_135;
    if (((safe_add_func_int32_t_s_s(((*l_285) = (l_210.f3 = func_4(func_6((0UL == l_12), (l_116 = (4294967286UL >= (func_13((((func_18(func_21((((safe_rshift_func_uint8_t_u_u(0x84L, 7)) != ((*l_213) = (((((safe_add_func_int8_t_s_s(l_12, func_29(l_34, ((*l_209) = func_35(((func_40(func_46(l_51, (safe_sub_func_uint32_t_u_u(4294967295UL, (g_55 = ((0xBDL != g_54) < 0x7E50L)))), l_51.f3, g_56), l_51.f2.f1, l_51.f3, l_51.f1, l_34.f1.f2) <= g_67.f0) ^ 0x6D54L), l_34, l_116, l_34.f0.f4)), l_210, g_211))) && g_56.f1) >= l_210.f1.f0) >= g_56.f0) & l_51.f1))) == 0x3CFDL), l_214, l_214), g_211.f5) == l_219) > g_111.f0) == l_210.f1.f0), l_220, g_211.f3, l_221) < g_211.f4))), l_274, g_275, l_274.f3)))), 7UL)) >= l_210.f0))
    {
        int *l_287 = &g_111.f2;
        int **l_286 = &l_287;
        int ***l_288 = &l_286;
        struct S6 *l_289 = &g_111;
        struct S1 **l_291 = (void*)0;
        struct S1 *l_292 = (void*)0;
        int l_295 = 0L;
        struct S3 l_296 = {0x16L,{0xEDB2B042L,0xC1L},-4L,0L,1L};
        (*l_288) = l_286;
        (*l_289) = l_214;
        l_292 = l_290;

        ;
        g_115.f1.f1 = (((func_18(func_21(g_115.f1.f4, g_211, l_214), (safe_add_func_uint32_t_u_u(l_295, func_29(g_115, l_296, (*l_209), g_56)))) > g_115.f1.f8) || 0UL) == l_296.f1.f0);

        ;
    }
    else
    {
        struct S6 l_304 = {0xF9L,0x425BL,9L,1L,0UL,0x9512BAA6L,{0xB4L}};
        struct S3 *l_349 = (void*)0;
        struct S1 **l_367 = &l_290;
        for (g_211.f6.f0 = (-26); (g_211.f6.f0 <= 24); ++g_211.f6.f0)
        {
            struct S4 l_308 = {{0xB8L,1UL,1L,65535UL,7UL,0x29A9L,-3L},{0L,1L,{8UL,255UL},8UL,0x4D3BL,0L,0xA60BL,5UL,1UL},246UL};
            struct S6 l_310 = {6UL,65528UL,0xA8959AB8L,-1L,1UL,4UL,{0xB6L}};
            struct S3 l_336 = {4L,{0xA4C8DF44L,0xA4L},0L,1L,-1L};
            for (g_115.f0.f4 = 0; (g_115.f0.f4 <= 37); g_115.f0.f4 = safe_add_func_int32_t_s_s(g_115.f0.f4, 1))
            {
                struct S4 l_303 = {{3L,4294967295UL,0x55L,65526UL,0x1DC31B4AL,0x9CB0L,0x3B3B1A93L},{0xAC77L,0x25053CB1L,{1UL,0UL},8UL,0xDA9FL,-7L,5L,7UL,65529UL},0x5EL};
                struct S3 l_309 = {0x34L,{0UL,0x32L},-1L,-2L,0x428539D0L};
                struct S4 *l_311 = &l_34;
                (*l_285) = ((safe_sub_func_uint16_t_u_u(func_29(l_303, g_176, g_176, l_304), (g_211.f3 && l_304.f3))) != (func_4(g_305) < g_56.f3));
                (*l_311) = func_21((safe_lshift_func_uint8_t_u_s(func_29(l_308, (*l_209), l_309, l_214), (g_115.f0.f6 > 0xA2L))), l_310, l_214);
                for (l_308.f1.f7 = 0; (l_308.f1.f7 != 35); ++l_308.f1.f7)
                {
                    int *l_314 = &l_274.f1;
                    int **l_315 = &g_125;
                    (*l_285) = l_303.f0.f2;
                    (*l_315) = l_314;

                    ;
                }
                if (l_309.f1.f0)
                {
                    struct S7 l_316 = {0x27EDL,0xF3E7L,{4294967295UL,0x22L},{1L},{0x1C9501C3L,0UL}};
                    return l_316;


                }
                else
                {
                    for (l_303.f1.f4 = 0; (l_303.f1.f4 < 5); l_303.f1.f4 = safe_add_func_int8_t_s_s(l_303.f1.f4, 4))
                    {
                        int **l_319 = &g_125;
                        (*l_319) = &g_61;

                        ;
                        (*l_311) = g_115;
                    }
                    if ((*l_285))
                    {
                        struct S7 l_320 = {0x8862L,0x2D70L,{4294967292UL,254UL},{1L},{0xC9DA0943L,0xD8L}};
                        return l_320;


                    }
                    else
                    {
                        int **l_321 = &l_285;
                        (*l_321) = &g_61;

                        ;
                        (*l_285) = (-1L);
                    }

                    ;
                }

                ;
            }
            g_322 = (*l_285);
            for (g_275.f2.f0 = (-22); (g_275.f2.f0 == 47); g_275.f2.f0 = safe_add_func_int16_t_s_s(g_275.f2.f0, 2))
            {
                char l_347 = 0x39L;
                struct S7 l_353 = {0xF3A2L,65533UL,{1UL,0x81L},{0x6AL},{0UL,0x3EL}};
                struct S3 *l_354 = &l_210;
                int **l_366 = &l_285;
                if (g_211.f2)
                {
                    int **l_325 = &g_125;
                    (*l_325) = (void*)0;

                    ;
                }
                else
                {
                    int l_335 = (-8L);
                    struct S3 **l_355 = (void*)0;
                    struct S3 **l_356 = &l_209;
                    struct S4 l_359 = {{0x02L,0x066CB67EL,1L,0x1DE4L,1UL,0xB32BL,0x0F94A629L},{0x4404L,0xB913B07EL,{9UL,0UL},4294967295UL,0xB6D8L,0L,0xF281L,0xA3187CF5L,0x1F2FL},255UL};
                    if ((safe_unary_minus_func_int16_t_s(((*l_213) = g_305.f3))))
                    {
                        if (g_54)
                            break;
                    }
                    else
                    {
                        struct S4 *l_348 = &l_34;
                        (*l_348) = func_46(l_51, (safe_sub_func_uint8_t_u_u(((g_111.f1 & (safe_rshift_func_int16_t_s_u(g_67.f1, 7))) != ((((g_331 != &g_332) <= (safe_sub_func_uint8_t_u_u(l_335, (func_4(l_336) == ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s((((void*)0 != g_345) <= l_347), (*l_285))) != l_304.f1) | g_305.f1.f0), 13)) || g_275.f6), g_115.f1.f7)) >= g_211.f6.f0), g_176.f1.f1)) >= g_84))))) == 1UL) && g_111.f4)), g_275.f0)), g_211.f6, (*g_346));
                    }
                    if ((*l_285))
                    {
                        struct S3 **l_350 = &l_349;
                        int **l_352 = &g_125;
                        (*g_135) = (*g_135);
                        (*l_350) = l_349;
                        g_351 = (void*)0;

                        ;
                        (*l_352) = &g_61;

                        ;
                    }
                    else
                    {
                        return l_353;


                    }

                    ;
                    ;
                    (*l_356) = l_354;

                    ;
                    for (g_176.f1.f1 = 0; (g_176.f1.f1 != 38); g_176.f1.f1 = safe_add_func_int16_t_s_s(g_176.f1.f1, 3))
                    {
                        struct S4 *l_360 = (void*)0;
                        struct S4 *l_361 = (void*)0;
                        struct S4 *l_362 = &l_308;
                        (*l_362) = l_359;
                        (*l_285) = ((func_13(g_115.f0.f4, func_4(l_336), l_353.f2.f1, g_56.f5) == (safe_mod_func_int16_t_s_s((0UL < g_305.f4), g_61))) & 254UL);

                        ;
                        l_365 = l_365;
                    }

                    ;
                }

                ;
                (*l_366) = &g_84;

                ;
                (*l_366) = &g_84;
            }
        }


        ;
        ;
        ;
        (*l_367) = &g_67;

        ;
    }

    ;

    ;
    ;
    ;
    ;
lbl_372:
    for (g_56.f4 = 0; (g_56.f4 < 35); ++g_56.f4)
    {
        struct S7 l_370 = {0xAC3DL,0xFF1BL,{4294967287UL,0x3EL},{0x4AL},{0xBC5E591BL,1UL}};
        if (((void*)0 != &g_275))
        {
            return l_370;


        }
        else
        {
            if (l_370.f0)
                break;
            return g_371;


        }
    }
    if ((!g_211.f2))
    {
        struct S4 *l_373 = &l_34;
        int l_374 = (-1L);
        if (g_111.f3)
            goto lbl_372;
        (*l_285) = func_40(((*l_373) = l_34), g_111.f6.f0, (*g_282), l_374, (*g_118));
        (*l_285) = (safe_unary_minus_func_uint16_t_u(((void*)0 == g_376)));
    }
    else
    {
        struct S4 **l_378 = &g_351;
        struct S4 ***l_377 = &l_378;
        struct S4 **l_380 = (void*)0;
        struct S4 ***l_379 = &l_380;
        g_176.f3 = (((*l_379) = ((*l_377) = (void*)0)) == (void*)0);

        ;
    }
    return l_51;


}







static int func_4(struct S3 p_5)
{
    struct S1 *l_279 = &g_67;
    int l_280 = 0x56490D08L;
    int *l_281 = &l_280;
    struct S5 **l_283 = (void*)0;
    struct S5 **l_284 = &g_282;
    l_279 = &g_67;
    (*l_281) = l_280;
    (*l_284) = g_282;
    return g_211.f5;
}







static struct S3 func_6(int p_7, unsigned p_8, struct S2 p_9, struct S2 p_10, unsigned p_11)
{
    struct S4 l_276 = {{1L,0xE96E97BBL,1L,0UL,4294967295UL,65531UL,0x2EEEA668L},{0x6976L,1L,{0xC34B03E5L,5UL},0xA4747B00L,0x7999L,4L,-1L,0UL,0xE7B8L},249UL};
    int *l_277 = &l_276.f1.f1;
    int **l_278 = &g_125;
    p_9.f1 = (func_18(l_276, g_275.f2.f0) & (5UL > p_10.f1));

    ;
    (*l_278) = l_277;

    ;
    return g_176;


}







static char func_13(unsigned short p_14, unsigned char p_15, short p_16, unsigned char p_17)
{
    struct S3 *l_234 = &g_176;
    struct S6 *l_251 = (void*)0;
    struct S5 l_255 = {1L};
    int *l_259 = &g_176.f4;
    int **l_258 = &l_259;
    int **l_260 = (void*)0;
    int *l_262 = &g_115.f0.f6;
    int **l_261 = &l_262;
    short *l_263 = &g_176.f2;
    unsigned char *l_266 = &g_111.f0;
    int l_269 = 0xF7C56E56L;
    int **l_270 = &g_125;
    int **l_271 = (void*)0;
    int *l_273 = (void*)0;
    int **l_272 = &l_273;
    for (g_115.f1.f3 = (-23); (g_115.f1.f3 != 24); ++g_115.f1.f3)
    {
        char l_230 = 0L;
        struct S2 **l_238 = &g_135;
        int **l_256 = (void*)0;
        int **l_257 = &g_125;
        for (g_111.f1 = 20; (g_111.f1 <= 2); g_111.f1 = safe_sub_func_uint8_t_u_u(g_111.f1, 5))
        {
            int **l_226 = &g_125;
            struct S5 *l_228 = &g_211.f6;
            struct S5 **l_227 = &l_228;
            struct S5 ***l_229 = &l_227;
            struct S2 *l_254 = &g_115.f1;
            (*l_226) = &g_84;

            ;
            (*l_229) = l_227;
            if (p_15)
                break;
            if (l_230)
            {
                struct S3 *l_231 = &g_176;
                struct S3 **l_232 = (void*)0;
                struct S3 **l_233 = (void*)0;
                l_234 = l_231;
            }
            else
            {
                int l_235 = 0x8E465908L;
                struct S4 l_240 = {{0L,9UL,0x05L,65534UL,0x592116FDL,0xCFE8L,1L},{0xF6FBL,1L,{0xC816288DL,1UL},0x44DA49FBL,-8L,-7L,-4L,4294967295UL,1UL},2UL};
                (**l_229) = (*l_227);
                if (((l_235 | p_16) <= 5UL))
                {
                    short *l_242 = (void*)0;
                    short **l_241 = &l_242;
                    unsigned short *l_247 = &g_115.f1.f8;
                    unsigned short *l_248 = &g_211.f1;
                    unsigned short *l_249 = &g_56.f1;
                    int *l_250 = &g_84;
                    for (g_54 = 9; (g_54 >= 47); g_54 = safe_add_func_uint16_t_u_u(g_54, 6))
                    {
                        struct S2 ***l_239 = &l_238;
                        (*l_239) = l_238;
                        (*g_125) = (-1L);
                    }
                    (*l_250) = (func_18(l_240, g_115.f0.f5) >= ((*l_249) = ((*l_248) = ((*l_247) = ((+((&p_16 == ((*l_241) = &p_16)) & (safe_mul_func_int8_t_s_s(0L, g_56.f1)))) & (0xF4E3L > (safe_add_func_int8_t_s_s(0x0BL, l_230))))))));

                    ;
                    ;
                }
                else
                {
                    struct S6 **l_252 = (void*)0;
                    struct S6 **l_253 = &l_251;
                    (**l_226) = p_14;
                    (*l_253) = l_251;
                    (*l_226) = (void*)0;

                    ;
                    return p_16;
                }

                ;
                (*l_238) = l_254;
                g_111.f6 = l_255;
            }

            ;
        }
        (*l_257) = &g_84;

        ;
    }
    l_269 = ((((-4L) != (!(((*l_261) = ((*l_258) = g_146)) != (void*)0))) <= ((*l_263) = 0x4824L)) > ((safe_mul_func_int16_t_s_s(g_115.f1.f4, (p_15 & ((*l_266) = 1UL)))) <= ((+(g_211.f5 | (safe_rshift_func_int16_t_s_s(0xDC17L, 7)))) || l_269)));

    ;
    ;
    (*l_272) = ((*l_270) = &g_84);

    ;
    ;
    return p_17;
}







static short func_18(struct S4 p_19, unsigned short p_20)
{
    int *l_216 = &g_115.f1.f1;
    int **l_217 = &g_125;
    struct S0 *l_218 = &g_115.f0;
    (*l_217) = l_216;

    ;
    (*l_218) = g_115.f0;
    return g_176.f2;
}







static struct S4 func_21(unsigned char p_22, struct S6 p_23, struct S6 p_24)
{
    struct S4 l_215 = {{-1L,0xD3A7C03DL,0L,0x8A82L,8UL,0UL,0x72D1EA1BL},{0x4DEAL,1L,{0UL,0xA4L},1UL,1L,0x5965L,0xD1DFL,0x827C7132L,0xD4BDL},0x23L};
    return l_215;
}







static char func_29(struct S4 p_30, struct S3 p_31, struct S3 p_32, struct S6 p_33)
{
    int l_212 = 1L;
    g_176.f3 = l_212;
    return l_212;
}







static struct S3 func_35(unsigned p_36, struct S4 p_37, unsigned short p_38, unsigned short p_39)
{
    struct S1 *l_117 = &g_67;
    int l_119 = (-1L);
    struct S3 l_132 = {0x7BL,{0xA6DA849FL,0x34L},1L,0x7B0DCBC0L,-5L};
    struct S5 l_179 = {0x93L};
    int *l_180 = &g_56.f2;
    short *l_185 = &g_176.f2;
    int *l_186 = (void*)0;
    short l_187 = 0xC9A6L;
    g_118 = l_117;

    ;
    if (l_119)
    {
        struct S3 *l_120 = (void*)0;
        l_120 = l_120;
    }
    else
    {
        int *l_123 = &l_119;
        int **l_124 = (void*)0;
        unsigned short *l_126 = &g_115.f0.f3;
        int **l_142 = &g_125;
        struct S1 **l_151 = (void*)0;
        struct S3 l_175 = {0x83L,{0xB6CC735AL,0x13L},0x1292L,0L,0x023A199CL};
        if (((((p_37.f0.f1 <= (safe_rshift_func_int8_t_s_s(((g_125 = l_123) != (void*)0), 7))) >= ((*l_126) = g_115.f2)) >= (safe_mul_func_int16_t_s_s(((((g_115.f1.f0 & g_115.f0.f2) >= 0xD7L) & l_119) && 1UL), l_119))) != p_37.f1.f2.f1))
        {
            short *l_131 = &g_115.f1.f6;
            struct S4 *l_139 = &g_115;
            struct S4 **l_138 = &l_139;
            int **l_140 = &l_123;
            int ***l_141 = &l_124;
            if ((safe_mul_func_int16_t_s_s((g_115.f1.f5 != (((*l_131) = (p_37.f0.f0 && (-2L))) ^ 65527UL)), p_37.f0.f1)))
            {
                return l_132;


            }
            else
            {
                struct S4 *l_134 = &g_115;
                struct S4 **l_133 = &l_134;
                struct S2 **l_136 = (void*)0;
                struct S2 **l_137 = &g_135;
                (*l_133) = &p_37;

                ;
                (*l_137) = g_135;
            }
            (*l_138) = &p_37;

            ;
            l_142 = ((*l_141) = l_140);

            ;
            ;
        }
        else
        {
            char l_162 = 0L;
            for (g_111.f4 = 1; (g_111.f4 != 51); g_111.f4++)
            {
                unsigned ***l_147 = (void*)0;
                unsigned ***l_148 = &g_145;
                struct S4 *l_150 = &g_115;
                struct S4 **l_149 = &l_150;
                char *l_159 = &g_115.f0.f2;
                int l_161 = 1L;
                unsigned char *l_163 = &g_115.f2;
                (*l_148) = g_145;
                (*l_149) = &p_37;

                ;
                l_151 = (void*)0;
            }
        }

        ;
        ;
        ;
    }

    ;
    if ((l_187 = (safe_mod_func_uint16_t_u_u((g_111.f0 != func_40(g_115, l_132.f0, l_179, ((*l_180) = 0L), ((*g_118) = (*g_118)))), (safe_mul_func_int16_t_s_s(((*l_185) = (((safe_rshift_func_int16_t_s_s(p_37.f0.f2, g_176.f2)) & l_132.f1.f0) < 0UL)), 0x2DCEL))))))
    {
        struct S1 **l_190 = &l_117;
        int l_195 = 2L;
        struct S1 *l_196 = &g_115.f1.f2;
        char *l_197 = &l_132.f0;
        char *l_202 = &g_111.f6.f0;
        int *l_203 = &l_132.f3;
        int **l_207 = &l_186;
        for (p_39 = 8; (p_39 >= 4); p_39 = safe_sub_func_int8_t_s_s(p_39, 3))
        {
            if (p_39)
                break;
            p_37.f1.f1 = (l_190 != &l_117);
            g_125 = &g_61;

            ;
        }

        ;
        (*l_203) = ((g_56.f6.f0 >= (0xF48657F9L | (safe_rshift_func_int8_t_s_u((((*l_197) = (safe_lshift_func_uint16_t_u_s(p_37.f1.f7, (l_195 > ((l_117 = (*l_190)) != l_196))))) | p_37.f1.f3), (safe_add_func_int32_t_s_s(p_37.f1.f5, (safe_sub_func_uint32_t_u_u((((*l_202) = (0x47298B66L > p_37.f0.f2)) || 0x31L), (**g_145))))))))) < g_115.f1.f4);
        for (g_115.f0.f2 = 7; (g_115.f0.f2 < (-21)); g_115.f0.f2 = safe_sub_func_uint8_t_u_u(g_115.f0.f2, 7))
        {
            unsigned short l_206 = 65535UL;
            (*l_203) = l_206;
            l_119 = ((*l_203) = l_206);
        }
        (*l_207) = &g_84;

        ;
    }
    else
    {
        struct S3 l_208 = {1L,{0UL,0x94L},-4L,9L,-5L};
        return l_208;


    }

    ;
    ;
    return g_176;


}







static unsigned func_40(struct S4 p_41, unsigned p_42, struct S5 p_43, int p_44, struct S1 p_45)
{
    struct S1 *l_81 = &g_67;
    int *l_82 = &g_61;
    int *l_83 = &g_84;
    int *l_86 = &g_84;
    int **l_85 = &l_86;
    char *l_104 = &g_56.f6.f0;
    struct S7 l_105 = {2L,3UL,{0x238762ACL,255UL},{0x6CL},{0xBE63813AL,0xB3L}};
    unsigned *l_110 = &g_56.f5;
    struct S4 *l_112 = (void*)0;
    struct S4 *l_113 = (void*)0;
    struct S4 *l_114 = &g_115;
    g_84 = (((*l_82) = (safe_mul_func_int16_t_s_s((l_81 != l_81), g_67.f0))) <= ((l_83 == ((*l_85) = l_83)) | (~(((p_41.f1.f2.f1 != g_67.f0) > p_41.f1.f2.f1) >= (safe_lshift_func_uint16_t_u_u(65535UL, 3))))));
    (*l_82) = (((safe_add_func_int8_t_s_s(p_41.f1.f5, (safe_mod_func_uint16_t_u_u(((*l_86) != (*l_83)), (p_41.f0.f5 || ((3L != (((*l_86) != g_67.f0) & (safe_mul_func_int16_t_s_s(p_41.f1.f4, (g_56.f1 = (safe_lshift_func_uint8_t_u_u(p_41.f0.f3, (*l_86)))))))) >= p_45.f0)))))) < 2UL) > p_41.f0.f1);
    g_84 = (p_41.f1.f3 <= (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((**l_85))), ((safe_sub_func_uint16_t_u_u((**l_85), (safe_rshift_func_uint8_t_u_s(p_41.f0.f0, ((*l_104) = (p_41.f0.f2 | (**l_85))))))) && ((*l_83) ^ 0L)))));
    (*l_114) = func_46(l_105, ((((p_41.f2 & (!g_67.f0)) & (safe_mod_func_uint32_t_u_u(0UL, 0x5F8C2579L))) > (safe_add_func_uint8_t_u_u((*l_86), ((**l_85) & ((*l_104) = (*l_83)))))) | (((*l_110) = ((void*)0 != g_76)) | 0xAF5395DFL)), l_105.f3, g_111);
    return g_115.f1.f0;
}







static struct S4 func_46(struct S7 p_47, int p_48, struct S5 p_49, struct S6 p_50)
{
    char l_73 = (-10L);
    int l_77 = 0xE314DBE9L;
    struct S4 l_78 = {{0x54L,0UL,1L,0x5C14L,0xCD6CAE52L,0x1CB2L,0x3AB48436L},{0x8B2AL,1L,{0x426CD914L,1UL},1UL,0x15FEL,0x6233L,1L,4294967295UL,5UL},1UL};
    for (p_47.f3.f0 = 0; (p_47.f3.f0 < (-28)); --p_47.f3.f0)
    {
        int *l_60 = &g_61;
        int **l_59 = &l_60;
        (*l_59) = &p_48;

        ;
        for (p_47.f4.f0 = 0; (p_47.f4.f0 <= 39); p_47.f4.f0 = safe_add_func_uint8_t_u_u(p_47.f4.f0, 6))
        {
            struct S1 *l_66 = &g_67;
            struct S1 **l_68 = &l_66;
            for (g_56.f3 = 0; (g_56.f3 != (-25)); g_56.f3 = safe_sub_func_int8_t_s_s(g_56.f3, 2))
            {
                (*l_59) = &g_61;

                ;
            }
            (*l_68) = l_66;
            if (g_56.f1)
                break;
        }

        ;
        if (p_48)
            break;
    }
    l_77 = (safe_add_func_uint16_t_u_u(p_50.f1, ((0L || (safe_add_func_uint16_t_u_u((l_73 != ((g_55 || (+(safe_add_func_int32_t_s_s((((((void*)0 != g_76) | 1UL) ^ g_56.f3) && p_47.f2.f1), 4294967289UL)))) | 65535UL)), g_67.f0))) >= 6L)));
    return l_78;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_56.f5, "g_56.f5", print_hash_value);
    transparent_crc(g_56.f6.f0, "g_56.f6.f0", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f2, "g_111.f2", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_111.f4, "g_111.f4", print_hash_value);
    transparent_crc(g_111.f5, "g_111.f5", print_hash_value);
    transparent_crc(g_111.f6.f0, "g_111.f6.f0", print_hash_value);
    transparent_crc(g_115.f0.f0, "g_115.f0.f0", print_hash_value);
    transparent_crc(g_115.f0.f1, "g_115.f0.f1", print_hash_value);
    transparent_crc(g_115.f0.f2, "g_115.f0.f2", print_hash_value);
    transparent_crc(g_115.f0.f3, "g_115.f0.f3", print_hash_value);
    transparent_crc(g_115.f0.f4, "g_115.f0.f4", print_hash_value);
    transparent_crc(g_115.f0.f5, "g_115.f0.f5", print_hash_value);
    transparent_crc(g_115.f0.f6, "g_115.f0.f6", print_hash_value);
    transparent_crc(g_115.f1.f0, "g_115.f1.f0", print_hash_value);
    transparent_crc(g_115.f1.f1, "g_115.f1.f1", print_hash_value);
    transparent_crc(g_115.f1.f2.f0, "g_115.f1.f2.f0", print_hash_value);
    transparent_crc(g_115.f1.f2.f1, "g_115.f1.f2.f1", print_hash_value);
    transparent_crc(g_115.f1.f3, "g_115.f1.f3", print_hash_value);
    transparent_crc(g_115.f1.f4, "g_115.f1.f4", print_hash_value);
    transparent_crc(g_115.f1.f5, "g_115.f1.f5", print_hash_value);
    transparent_crc(g_115.f1.f6, "g_115.f1.f6", print_hash_value);
    transparent_crc(g_115.f1.f7, "g_115.f1.f7", print_hash_value);
    transparent_crc(g_115.f1.f8, "g_115.f1.f8", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1.f0, "g_176.f1.f0", print_hash_value);
    transparent_crc(g_176.f1.f1, "g_176.f1.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_176.f3, "g_176.f3", print_hash_value);
    transparent_crc(g_176.f4, "g_176.f4", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_211.f4, "g_211.f4", print_hash_value);
    transparent_crc(g_211.f5, "g_211.f5", print_hash_value);
    transparent_crc(g_211.f6.f0, "g_211.f6.f0", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_275.f1, "g_275.f1", print_hash_value);
    transparent_crc(g_275.f2.f0, "g_275.f2.f0", print_hash_value);
    transparent_crc(g_275.f2.f1, "g_275.f2.f1", print_hash_value);
    transparent_crc(g_275.f3, "g_275.f3", print_hash_value);
    transparent_crc(g_275.f4, "g_275.f4", print_hash_value);
    transparent_crc(g_275.f5, "g_275.f5", print_hash_value);
    transparent_crc(g_275.f6, "g_275.f6", print_hash_value);
    transparent_crc(g_275.f7, "g_275.f7", print_hash_value);
    transparent_crc(g_275.f8, "g_275.f8", print_hash_value);
    transparent_crc(g_305.f0, "g_305.f0", print_hash_value);
    transparent_crc(g_305.f1.f0, "g_305.f1.f0", print_hash_value);
    transparent_crc(g_305.f1.f1, "g_305.f1.f1", print_hash_value);
    transparent_crc(g_305.f2, "g_305.f2", print_hash_value);
    transparent_crc(g_305.f3, "g_305.f3", print_hash_value);
    transparent_crc(g_305.f4, "g_305.f4", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_371.f2.f0, "g_371.f2.f0", print_hash_value);
    transparent_crc(g_371.f2.f1, "g_371.f2.f1", print_hash_value);
    transparent_crc(g_371.f3.f0, "g_371.f3.f0", print_hash_value);
    transparent_crc(g_371.f4.f0, "g_371.f4.f0", print_hash_value);
    transparent_crc(g_371.f4.f1, "g_371.f4.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
