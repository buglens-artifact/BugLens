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
   unsigned f0;
   char f1;
   char f2;
   int f3;
   short f4;
   unsigned f5;
   unsigned char f6;
};

struct S1 {
   unsigned short f0;
};


static int g_14 = 1L;
static char g_63 = 0L;
static struct S0 g_64 = {0xA9B22354L,0x20L,0L,0x6EB3E198L,0xBBC1L,0x46E972F3L,254UL};
static struct S1 g_78 = {65528UL};
static unsigned short *g_88 = &g_78.f0;
static int g_92 = 0x8D4E4AF0L;
static int *g_105 = &g_92;
static int **g_104 = &g_105;
static struct S0 g_116 = {0xD4CE2787L,-1L,6L,1L,0x138AL,4294967295UL,0x70L};
static struct S0 *g_126 = &g_64;
static struct S0 **g_125 = &g_126;
static unsigned char g_146 = 1UL;
static int g_153 = 0xC7970BCDL;
static int g_159 = 0x9D2773D6L;
static unsigned short g_166 = 65530UL;
static struct S0 g_173 = {0UL,0xB9L,0x20L,0x4F22EBF5L,0x6147L,0x4E495FCCL,0xBDL};
static unsigned g_212 = 7UL;
static int g_260 = 0x02C53580L;
static short **g_357 = (void*)0;
static int **g_411 = (void*)0;
static unsigned short **g_436 = &g_88;
static unsigned short ***g_435 = &g_436;



static unsigned func_1(void);
static struct S1 func_2(unsigned char p_3);
static struct S1 func_5(struct S1 p_6, unsigned char p_7, unsigned short p_8, int p_9, unsigned p_10);
static struct S1 func_11(unsigned short p_12, unsigned short p_13);
static unsigned short func_17(unsigned p_18, short p_19, short p_20);
static char func_24(unsigned char p_25, unsigned p_26, unsigned p_27);
static unsigned char func_30(struct S1 p_31, int p_32);
static struct S1 func_33(unsigned p_34, unsigned p_35, unsigned char p_36, struct S0 p_37, unsigned short p_38);
static unsigned func_41(struct S1 p_42, char p_43, short p_44, struct S0 p_45, unsigned char p_46);
static unsigned func_54(unsigned p_55, unsigned char p_56, struct S0 p_57, short p_58);
static unsigned func_1(void)
{
    int l_4 = 7L;
    struct S1 l_607 = {0x97F9L};
    int *l_608 = (void*)0;
    int *l_609 = &g_159;
    int *l_610 = &g_64.f3;
    int *l_611 = &g_173.f3;
    struct S0 l_628 = {0xD667FF0BL,0x7BL,8L,0x73F6401EL,0xBC08L,4294967288UL,248UL};
    short *l_629 = (void*)0;
    short *l_630 = &g_173.f4;
    unsigned short *l_631 = &g_166;
    int l_632 = (-1L);
    unsigned char l_633 = 0x64L;
    unsigned l_634 = 0UL;
    (*l_611) = ((*l_610) = (func_2(l_4) , ((*l_609) = l_4)));
    (*g_104) = (((((*l_611) == ((((safe_mod_func_int16_t_s_s((*l_611), (*l_610))) >= l_633) != (*l_610)) < (*l_611))) , l_634) , g_116.f0) , (void*)0);
    return (*l_610);
}







static struct S1 func_2(unsigned char p_3)
{
    unsigned char l_23 = 0UL;
    char *l_61 = (void*)0;
    char *l_62 = &g_63;
    struct S1 l_70 = {0xBFA2L};
    struct S0 l_71 = {4294967295UL,0x28L,0x67L,0xE3B61EA5L,8L,4294967292UL,0x80L};
    unsigned l_138 = 4294967295UL;
    char l_241 = 0x42L;
    int *l_602 = &g_64.f3;
    (*l_602) = (func_5(func_11(g_14, ((((((safe_mul_func_uint16_t_u_u(func_17((l_23 == (p_3 < (func_24(((0xE3L <= ((safe_lshift_func_uint8_t_u_u(func_30((func_33((safe_sub_func_uint32_t_u_u(func_41(((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((p_3 , l_23) || (((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint8_t_u_u(((func_54(g_14, (safe_mod_func_int16_t_s_s((((((*l_62) |= p_3) ^ p_3) >= g_14) & g_14), l_23)), g_64, l_23) || 0L) , 2UL), 0x24L)) & g_64.f5))) >= p_3) , 0xA479L)), p_3)), (-5L))) , l_70), p_3, g_64.f0, l_71, g_64.f1), p_3)), l_71.f3, l_138, l_71, (*g_88)) , l_70), l_23), 1)) <= 5L)) , 0xF3L), g_64.f2, p_3) | 1UL))), p_3, p_3), 0x47CAL)) , p_3) || 0x51CDL) , l_71.f4) , l_138) > l_241)), g_14, l_70.f0, p_3, p_3) , l_71.f1);
    (*l_602) |= p_3;
    return g_78;
}







static struct S1 func_5(struct S1 p_6, unsigned char p_7, unsigned short p_8, int p_9, unsigned p_10)
{
    unsigned char l_322 = 0x7FL;
    char *l_323 = &g_64.f2;
    int *l_330 = &g_92;
    short l_331 = (-1L);
    short *l_332 = &l_331;
    unsigned char *l_333 = &g_146;
    struct S0 l_334 = {0UL,-8L,0x62L,-2L,0x458AL,4294967294UL,0x76L};
    unsigned short **l_336 = &g_88;
    unsigned short l_355 = 65534UL;
    short ***l_362 = (void*)0;
    struct S1 l_372 = {0x3352L};
    unsigned l_397 = 0x57602EC6L;
    struct S0 l_399 = {0x0AD938A7L,9L,0xB4L,0xCF6A44C2L,-4L,1UL,252UL};
    char l_400 = (-4L);
    unsigned char l_443 = 254UL;
    unsigned short l_515 = 0x5E15L;
    int l_596 = 0L;
    struct S1 *l_600 = &g_78;
    struct S1 **l_599 = &l_600;
    short l_601 = 0xF245L;
    if (((*l_330) = (((!func_54((safe_unary_minus_func_int8_t_s((g_173.f0 < (safe_mod_func_int8_t_s_s(l_322, ((*l_323) = l_322)))))), ((*l_333) = (safe_mul_func_int16_t_s_s(((*l_332) = (((((*l_330) = (safe_mul_func_uint16_t_u_u(((255UL > l_322) >= (safe_add_func_uint32_t_u_u((((*g_88) |= l_322) , l_322), l_322))), l_322))) , p_8) , l_331) != 65531UL)), 1UL))), l_334, g_173.f4)) > 0x83EAL) , (*l_330))))
    {
        int *l_335 = &g_116.f3;
        unsigned short ***l_337 = &l_336;
        (*g_104) = l_335;
        (*l_337) = l_336;
    }
    else
    {
        int *l_343 = &l_334.f3;
        short **l_346 = &l_332;
        unsigned short l_356 = 0xD6CEL;
        struct S0 l_389 = {0xAD6D6285L,-1L,0xF9L,0x9B86C75BL,0x9259L,0x6D4BF3CDL,0xC0L};
        int *l_398 = &l_389.f3;
        short *l_410 = &l_331;
        short **l_409 = &l_410;
        int l_423 = 0xC626A049L;
        struct S0 l_434 = {0xBF5D3054L,0x78L,0x9FL,-8L,-10L,0x701A78B9L,0UL};
        unsigned short ***l_437 = (void*)0;
        unsigned char l_444 = 0xFBL;
        struct S1 l_485 = {0xB65AL};
        struct S0 **l_493 = &g_126;
        int l_571 = 0L;
        for (l_334.f2 = 0; (l_334.f2 > (-23)); --l_334.f2)
        {
            int *l_342 = &g_116.f3;
            struct S1 l_361 = {0x33FAL};
            struct S0 l_365 = {0x9A469476L,1L,-1L,1L,1L,1UL,0x59L};
            unsigned short l_388 = 0xFBADL;
            unsigned l_392 = 0UL;
            for (g_116.f5 = (-16); (g_116.f5 == 54); g_116.f5 = safe_add_func_int16_t_s_s(g_116.f5, 4))
            {
                short ***l_358 = (void*)0;
                short ***l_359 = (void*)0;
                short ***l_360 = &l_346;
                struct S0 l_379 = {0xB4B80B16L,-5L,1L,-6L,1L,0UL,0x10L};
                l_342 = l_330;
                (*l_342) |= ((p_7 , (((void*)0 != l_343) & (safe_sub_func_int32_t_s_s(p_9, (l_346 != ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((-1L) & 252UL), ((safe_rshift_func_uint16_t_u_s(l_355, 15)) < (+g_64.f1)))), g_173.f5)), l_356)) , g_357)))))) , 0x66C921BAL);
                (*l_360) = (void*)0;
                if (((*l_343) = (*l_342)))
                {
                    struct S0 ***l_376 = &g_125;
                    int l_378 = 0xCA8DFE0FL;
                    struct S1 l_391 = {0x1D2CL};
                    if ((*l_330))
                    {
                        int l_373 = 0x9CE2A3B5L;
                        int *l_374 = &g_153;
                        int *l_375 = &g_14;
                        struct S0 ****l_377 = &l_376;
                        char **l_380 = &l_323;
                        (*l_343) = (((*l_380) = (((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((*g_88) = func_41(l_372, func_17((((*l_375) = ((*l_374) ^= l_373)) , (g_116.f2 ^ (((*l_377) = l_376) == (void*)0))), (*l_343), p_10), func_54(((l_378 >= (*l_330)) , g_116.f0), (*l_330), l_379, g_166), l_334, l_379.f3)), 7)), 0xC5595F86L)), l_373)) && p_10) , &g_63)) == &g_63);
                        return p_6;
                    }
                    else
                    {
                        unsigned short l_383 = 0x353BL;
                        int l_387 = 9L;
                        unsigned char *l_390 = &l_322;
                        (*l_342) = ((*l_343) , g_173.f0);
                        (*l_330) = (((((*l_343) = 0xA7DE5309L) && func_54((((0x85ACL | (((g_116.f0 != g_116.f5) & (((*l_390) &= (((l_387 |= p_10) | (g_64.f5 , (&g_166 == (func_33(((*l_330) == l_383), g_173.f5, p_8, l_389, (*g_88)) , (void*)0)))) ^ 252UL)) || p_10)) && p_8)) , l_391) , (*l_343)), l_392, l_389, l_383)) , p_7) == p_9);
                        return l_391;
                    }
                }
                else
                {
                    (*g_104) = l_343;
                    if ((*g_105))
                        continue;
                    (*l_343) = (*g_105);
                }
            }
            return l_361;
        }
        (*l_343) = ((!((**l_346) = 0x8520L)) & func_41(p_6, (*l_330), (+((0xD2L < ((*l_343) = (((((*g_104) = l_330) == (void*)0) && (*g_88)) < (func_54(((safe_lshift_func_int16_t_s_u(((((*l_398) &= func_54((safe_mod_func_int16_t_s_s((l_397 , 0x56C6L), (*l_343))), p_6.f0, l_334, (*l_330))) ^ g_116.f5) < (*l_330)), p_6.f0)) , 0xE427DB72L), g_173.f4, l_334, (*l_330)) | p_8)))) , 0x4593L)), l_399, l_400));
        (*l_330) &= ((*l_398) |= ((*l_343) = p_6.f0));
        if (((l_389 , (safe_div_func_uint16_t_u_u((*g_88), (p_7 && 65535UL)))) != (((*l_346) != ((*l_409) = ((g_78 , (((*l_330) = (g_116.f0 && (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_260 | 1L), p_8)), p_8)))) == 7L)) , (*l_346)))) , 0x2AA0L)))
        {
            int ***l_412 = (void*)0;
            int ***l_413 = &g_411;
            unsigned char *l_417 = &l_322;
            unsigned char **l_416 = &l_417;
            unsigned char *l_419 = (void*)0;
            unsigned char **l_418 = &l_419;
            struct S0 l_424 = {0xA12F7E8FL,-1L,-1L,0x2F96E446L,0x6918L,1UL,0xECL};
            unsigned short *l_465 = &g_78.f0;
            struct S1 l_486 = {3UL};
            struct S0 **l_492 = &g_126;
            int *l_495 = &g_116.f3;
            unsigned short l_517 = 0x2239L;
            (*l_413) = g_411;
            if (((~(safe_rshift_func_uint8_t_u_u(((((g_78 , 0x18L) | g_64.f0) , (-9L)) & (*g_88)), 2))) ^ p_7))
            {
                unsigned l_453 = 0x9A405CFCL;
                int *l_460 = &l_424.f3;
                int l_484 = 1L;
                unsigned short **l_488 = &g_88;
                if (((((*l_417) = p_8) ^ p_9) , p_8))
                {
                    short l_446 = (-1L);
                    int *l_467 = &g_153;
                    int **l_466 = &l_467;
                    if ((g_435 != l_437))
                    {
                        int l_442 = 0x1842C28AL;
                        struct S0 l_445 = {0xF36BA644L,0x44L,0x3DL,0x532CAB0FL,0x1D35L,0xE2882098L,0x89L};
                        (*l_398) &= (0x8DL & ((*l_417) = l_446));
                        (*g_104) = &l_442;
                        (*g_104) = ((safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_445.f5 < l_445.f5), ((**l_416) = 0xECL))) < (safe_lshift_func_int16_t_s_s(((9UL != l_453) , 1L), 12))), (((*g_105) <= (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((p_8 , (safe_mul_func_uint8_t_u_u(0x80L, p_9))), l_446)) && g_153), 4))) && 0x78CB8FEEL))) , l_460);
                    }
                    else
                    {
                        (*l_330) |= ((*l_343) &= ((safe_div_func_int16_t_s_s((((((*g_436) = &p_8) == (l_424.f2 , l_465)) & (g_64.f0 >= ((*l_333) = ((4294967290UL ^ 4294967291UL) <= (*l_460))))) != p_10), (*l_460))) , l_446));
                        (*l_460) |= ((void*)0 == l_466);
                    }
                    if (p_9)
                    {
                        short ****l_468 = &l_362;
                        short ***l_470 = &l_346;
                        short ****l_469 = &l_470;
                        short ***l_472 = &l_409;
                        short ****l_471 = &l_472;
                        (*l_413) = g_411;
                        (*l_398) |= (((*l_468) = &g_357) != ((*l_471) = ((*l_469) = &l_409)));
                        return p_6;
                    }
                    else
                    {
                        short ****l_475 = &l_362;
                        struct S0 l_480 = {0x49AF41FEL,0x4BL,0xA2L,0xEF68E0F3L,0L,0x4E239630L,0x68L};
                        (*l_343) ^= p_6.f0;
                        (*g_104) = l_467;
                        (*l_343) |= ((safe_lshift_func_int16_t_s_u(((g_116.f4 >= (((*l_475) = &g_357) != (void*)0)) & (((safe_rshift_func_uint16_t_u_s(0xAB7AL, 14)) | func_41(g_78, p_9, (l_446 | (safe_add_func_uint32_t_u_u(g_146, ((*l_330) >= p_8)))), l_480, l_424.f6)) <= p_8)), (*l_460))) , (*l_460));
                    }
                    (*l_398) ^= p_7;
                    (*g_125) = &l_389;
                }
                else
                {
                    short l_483 = 0x028DL;
                    struct S1 *l_487 = &g_78;
                    p_6 = ((*l_487) = (l_486 = ((safe_add_func_uint16_t_u_u((p_8 < ((*l_330) || l_483)), l_484)) , l_485)));
                    if (((*l_398) = l_424.f2))
                    {
                        (*l_487) = g_78;
                        return g_78;
                    }
                    else
                    {
                        unsigned short **l_489 = (void*)0;
                        (*l_460) |= 0xC93D087EL;
                        l_489 = ((*l_487) , l_488);
                        (*l_460) = 0x6BDEAA82L;
                    }
                    return p_6;
                }
                (*g_104) = l_343;
                return l_486;
            }
            else
            {
                struct S0 l_490 = {0x2F34A80FL,0L,0x35L,-1L,0x6A62L,2UL,0x28L};
                struct S0 ***l_491 = &g_125;
                int **l_494 = &l_398;
                (*l_343) = ((((p_10 , (l_490 , (l_491 != &g_125))) , (g_64.f6 == g_116.f2)) >= ((-1L) & p_9)) != p_7);
                (*l_330) ^= (1L || (l_492 != l_493));
                (*l_494) = ((*g_104) = (void*)0);
                (*g_104) = l_495;
            }
            for (l_399.f2 = (-13); (l_399.f2 != (-20)); --l_399.f2)
            {
                unsigned short l_513 = 65529UL;
                struct S0 l_514 = {0x44248F9BL,0x9DL,0L,0x63DE6470L,-1L,0xC47DBB03L,0xC0L};
                struct S1 *l_516 = &l_485;
                (*l_516) = func_33((safe_add_func_uint16_t_u_u(((**g_436) = (255UL < ((((safe_lshift_func_uint8_t_u_s((*l_495), 7)) | (*l_495)) & p_9) , (((**l_409) ^= (safe_unary_minus_func_int16_t_s(p_7))) == (**g_436))))), (*l_343))), l_513, l_513, l_514, l_515);
                if (l_517)
                    continue;
            }
        }
        else
        {
            short l_569 = 0x5C0FL;
            int l_580 = 0x5166857AL;
            unsigned short *l_585 = &l_356;
            for (g_173.f3 = 0; (g_173.f3 > 23); g_173.f3++)
            {
                short *l_528 = (void*)0;
                int l_531 = (-1L);
                if ((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s((*l_343), (safe_mod_func_uint16_t_u_u(p_7, 0xC8A9L)))) >= 247UL) >= 65534UL), (*l_330))), p_10)))
                {
                    (*l_398) ^= 6L;
                }
                else
                {
                    if (l_531)
                        break;
                }
                (*l_330) = (*l_343);
                for (g_166 = 0; (g_166 != 54); g_166 = safe_add_func_int16_t_s_s(g_166, 3))
                {
                    unsigned l_540 = 4294967295UL;
                    unsigned *l_543 = &l_397;
                    int **l_544 = (void*)0;
                    int **l_545 = &l_398;
                    int **l_546 = &l_330;
                }
                if (l_531)
                {
                    unsigned *l_551 = &g_173.f0;
                    unsigned **l_550 = &l_551;
                    unsigned ***l_549 = &l_550;
                    for (g_63 = 0; (g_63 >= (-16)); g_63 = safe_sub_func_int16_t_s_s(g_63, 6))
                    {
                        return p_6;
                    }
                    (*l_549) = (void*)0;
                    if ((*l_343))
                        break;
                }
                else
                {
                    struct S0 l_554 = {0xACAF62CAL,0x1BL,0L,0xE664A99CL,0L,4UL,0xE5L};
                    (*l_330) = (safe_lshift_func_int8_t_s_u(g_63, (p_6.f0 , 0xA6L)));
                    if ((p_9 > (p_9 || (*l_398))))
                    {
                        int l_555 = (-8L);
                        struct S0 l_570 = {0x69DC975DL,-8L,0L,-10L,1L,0xEF8EE94CL,254UL};
                        (*l_330) = (l_555 , (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*l_330), p_10)), l_554.f3)) , g_173.f1) >= 1UL), 0UL)));
                        if (l_554.f1)
                            break;
                    }
                    else
                    {
                        int *l_572 = &g_64.f3;
                        (*g_104) = l_572;
                        if ((*l_572))
                            continue;
                    }
                    for (l_571 = (-8); (l_571 == 2); l_571++)
                    {
                        short l_575 = (-2L);
                        l_575 &= g_116.f1;
                        if (l_531)
                            break;
                    }
                }
            }
            (*g_125) = ((0x2B87716DL >= (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_569 && ((*l_410) = (((*l_333) = ((*l_330) != p_9)) && (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((l_585 = &p_8) != &p_8), 0xB60CAE16L)), 1UL))))), p_9)), p_9))) , (void*)0);
        }
    }
    (*l_330) = (0xF5F6L || ((&l_334 != &l_399) , (p_8 ^= ((safe_sub_func_uint16_t_u_u(((((+(g_64.f4 ^= ((*l_330) <= ((((!(((safe_add_func_uint32_t_u_u(((*l_330) == p_10), (*l_330))) , (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((l_399 = l_399) , (((*l_333) = g_146) <= (*l_330))), g_116.f6)), 11))) , 0x26L)) || g_116.f0) , (*g_88)) ^ p_7)))) == (**g_436)) == (*l_330)) > p_6.f0), 0x325AL)) & g_14))));
    l_399.f3 = ((*l_330) , (g_78.f0 , (((*l_330) = (*l_330)) , (safe_mul_func_int8_t_s_s(l_596, (safe_mod_func_uint16_t_u_u(((&p_6 == ((*l_599) = &l_372)) && (l_601 < (g_116.f4 != (~p_6.f0)))), 0x0D50L)))))));
    return p_6;
}







static struct S1 func_11(unsigned short p_12, unsigned short p_13)
{
    int l_244 = 0xC9F7DF0BL;
    short *l_245 = &g_64.f4;
    int *l_250 = &g_92;
    short l_251 = (-1L);
    int l_266 = 0x22D2A8B1L;
    struct S0 l_268 = {0x091D02A6L,0x60L,1L,1L,0xCCF7L,1UL,247UL};
    char *l_275 = &l_268.f1;
    short ***l_280 = (void*)0;
    struct S1 l_317 = {65530UL};
    unsigned l_318 = 0UL;
    if (((((*l_250) ^= ((safe_div_func_int16_t_s_s(((l_244 ^ l_244) <= l_244), 0x16B7L)) >= func_17(g_173.f1, ((*l_245) ^= p_12), (safe_sub_func_int32_t_s_s((func_17(g_116.f1, (safe_mul_func_uint16_t_u_u((~l_244), (*g_88))), g_166) , 0xA7043D30L), l_244))))) & l_251) , (*l_250)))
    {
        unsigned short l_258 = 2UL;
        int *l_259 = &g_260;
        unsigned short l_265 = 65533UL;
        l_266 = (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((func_30(g_78, g_116.f1) <= ((safe_mul_func_uint8_t_u_u(((((~l_258) < (((*l_259) = g_64.f0) , p_13)) , (~(safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((g_166 &= p_13), l_258)), (p_13 , g_173.f1))))) != p_12), 3L)) && 1UL)), l_265)) < l_265), l_265));
        (*g_104) = (*g_104);
    }
    else
    {
        unsigned *l_267 = &g_116.f0;
        unsigned short *l_271 = &g_78.f0;
        char *l_274 = &l_268.f2;
        int l_283 = 0xF38A1A9FL;
        struct S1 l_294 = {1UL};
        struct S0 l_303 = {1UL,0x63L,9L,0x238EC8A2L,6L,0UL,5UL};
        struct S0 l_309 = {0UL,3L,6L,0x51D1B7C7L,-1L,0x1AFCBC47L,0x71L};
        struct S1 l_311 = {65529UL};
        int *l_316 = &l_283;
        (*l_250) = func_24(p_13, (func_54(((*l_267) = (~g_116.f1)), p_13, ((**g_125) = l_268), g_63) >= p_13), ((((void*)0 != &g_260) >= (*g_105)) & g_260));
        (*l_250) ^= (safe_mod_func_uint32_t_u_u(((l_271 = l_271) != &g_166), (safe_add_func_uint32_t_u_u(((l_274 != l_275) == p_12), (safe_rshift_func_int16_t_s_s(g_153, ((safe_div_func_int8_t_s_s(((void*)0 != l_280), (safe_rshift_func_uint8_t_u_s(func_54(((*l_267) = p_12), l_283, (**g_125), g_153), 3)))) & 0xBCL)))))));
        for (l_266 = 0; (l_266 <= 7); l_266++)
        {
            int **l_286 = &l_250;
            unsigned short l_314 = 1UL;
            int *l_315 = &l_303.f3;
            if (((l_286 == &g_105) < p_12))
            {
                unsigned l_291 = 5UL;
                for (g_64.f3 = 29; (g_64.f3 > 29); g_64.f3++)
                {
                    unsigned *l_289 = &g_212;
                    int l_290 = 0xE1F7ADB6L;
                    struct S0 *l_292 = (void*)0;
                    struct S0 *l_293 = &g_173;
                    (*l_250) = (((*l_289) = g_173.f2) , func_17(l_290, l_291, g_64.f2));
                    (*l_293) = l_268;
                }
                if (p_13)
                    break;
            }
            else
            {
                char *l_299 = &g_64.f2;
                struct S0 l_302 = {0xEA1ABC11L,0x70L,-1L,0x47AF62D5L,0xF5CCL,0x39FE8C37L,255UL};
                unsigned short l_304 = 0xA67FL;
                (*l_286) = &l_283;
                if (((p_13 , l_303) , l_304))
                {
                    struct S0 *l_310 = (void*)0;
                    (*g_104) = (void*)0;
                    (*l_250) ^= (safe_lshift_func_int8_t_s_s((l_294 , ((p_13 > g_173.f2) ^ (safe_lshift_func_uint16_t_u_s(((l_309 , &l_268) != ((*g_125) = l_310)), 10)))), p_12));
                }
                else
                {
                    return l_311;
                }
                for (g_64.f0 = (-30); (g_64.f0 != 25); g_64.f0++)
                {
                    (**l_286) = (((*g_88) = l_314) | g_153);
                }
            }
            (*l_315) |= ((-10L) || (**l_286));
        }
        l_316 = &l_244;
    }
    (*g_104) = &l_244;
    l_250 = &l_244;
    (*g_104) = (func_17(p_13, ((*l_245) = (((((p_13 == (*l_250)) > (p_12 | (-8L))) > ((*g_88) |= (((*l_250) , (*l_250)) , 0x0C8CL))) <= g_116.f1) & p_12)), g_64.f5) , (*g_104));
    return g_78;
}







static unsigned short func_17(unsigned p_18, short p_19, short p_20)
{
    (*g_104) = &g_159;
    return (*g_88);
}







static char func_24(unsigned char p_25, unsigned p_26, unsigned p_27)
{
    struct S0 *l_222 = &g_116;
    int l_223 = 0x5087B765L;
    unsigned short l_224 = 0x1A9AL;
    short *l_225 = (void*)0;
    char *l_230 = &g_173.f2;
    char *l_231 = &g_63;
    struct S1 l_234 = {5UL};
    int l_239 = (-4L);
    int *l_240 = &l_223;
    if ((((((*l_231) &= ((*l_230) &= (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_222 != (*g_125)), func_54(l_223, l_224, (*l_222), (((void*)0 == l_225) , (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*g_126) , 0x3159L), l_223)), 0L)))))), 0xC4FDL)))) < l_224) | g_116.f1) >= 8UL))
    {
        int *l_232 = (void*)0;
        (*g_104) = l_232;
    }
    else
    {
        unsigned l_233 = 3UL;
        l_233 |= 0x25579C5BL;
    }
    (*l_240) = (p_26 , (((l_223 & (((l_234 , ((*l_222) = (**g_125))) , (func_54(g_64.f2, ((*g_126) , (g_173.f6 = (safe_div_func_int16_t_s_s((&g_166 == (void*)0), (safe_rshift_func_uint8_t_u_s(p_27, p_27)))))), (*l_222), g_173.f0) && p_26)) && l_224)) || 0xBEL) && l_239));
    return p_27;
}







static unsigned char func_30(struct S1 p_31, int p_32)
{
    unsigned short *l_165 = &g_166;
    struct S0 l_167 = {1UL,0x74L,0x5EL,-1L,0xF503L,4294967287UL,0x7EL};
    struct S0 **l_168 = &g_126;
    struct S0 ***l_169 = (void*)0;
    struct S0 ***l_170 = &g_125;
    short l_171 = 0x0033L;
    unsigned char *l_172 = &g_116.f6;
    short *l_175 = &g_116.f4;
    short **l_174 = &l_175;
    short **l_176 = &l_175;
    int l_177 = 0L;
    int *l_178 = &g_92;
    struct S0 l_179 = {4294967290UL,0x53L,0x31L,-1L,6L,0UL,0x58L};
    struct S0 l_197 = {0x673AC837L,0x47L,-6L,-1L,0xCFA7L,3UL,0x64L};
    int l_213 = 0L;
    struct S0 l_216 = {0x2B2746C7L,0x78L,0xD5L,0x51C3764CL,-1L,4294967295UL,252UL};
    (*l_178) = (l_177 = ((((safe_div_func_uint8_t_u_u((p_32 && 6L), l_167.f1)) == 0UL) , l_174) == l_176));
    (*l_178) |= 7L;
    if (((func_33((*l_178), func_54((~func_54((func_54(g_173.f4, func_54((((*l_172) &= 255UL) == (*l_178)), p_31.f0, ((*l_178) , (**g_125)), p_32), l_167, g_159) >= g_78.f0), (*l_178), l_179, p_31.f0)), (*l_178), l_167, p_31.f0), p_31.f0, g_173, (*l_178)) , g_116.f2) < p_32))
    {
        unsigned l_180 = 4294967288UL;
        struct S0 **l_189 = &g_126;
        int l_190 = 0x4EA9950EL;
        l_178 = ((*g_104) = (void*)0);
        l_180 ^= p_32;
        l_190 |= (g_173.f3 != (g_78 , (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(249UL, (p_32 , 0x81L))), (safe_add_func_int16_t_s_s(g_116.f1, 0x555FL)))), ((((((*l_170) = (p_32 , l_189)) != &g_126) ^ p_31.f0) | 1L) > p_32)))));
    }
    else
    {
        char *l_195 = &g_116.f2;
        int l_196 = 0xE69F5B7FL;
        short **l_198 = &l_175;
        struct S0 l_199 = {0x44792A7BL,0x70L,1L,1L,0xB28DL,0UL,249UL};
        int *l_200 = &l_167.f3;
        struct S1 *l_202 = &g_78;
        struct S1 **l_201 = &l_202;
        unsigned *l_211 = &g_212;
        unsigned char *l_214 = (void*)0;
        unsigned char *l_215 = &g_146;
        unsigned l_217 = 0x6D85FAA4L;
        (*l_200) |= (func_54((safe_add_func_uint8_t_u_u(((**l_168) , (((*l_172) = p_32) , (+func_54((((void*)0 != l_198) , 0x570141F5L), p_31.f0, l_199, g_146)))), (-1L))), (*l_178), g_173, p_32) > g_116.f4);
        (*l_201) = &g_78;
        (*l_202) = func_33((safe_div_func_int16_t_s_s(((((g_159 >= (safe_lshift_func_int8_t_s_u((g_78 , (p_31.f0 && ((*g_88) , (((((0xA9L ^ 0x4EL) >= (safe_rshift_func_int16_t_s_s(((0xA3B0L != 65529UL) >= ((*l_211) &= (((safe_div_func_int8_t_s_s(g_14, (*l_178))) > p_32) && g_116.f5))), p_32))) & (*l_178)) && g_116.f1) > g_173.f6)))), 7))) >= (*l_200)) < (*l_178)) >= p_32), p_32)), g_146, p_31.f0, l_199, (*l_200));
        l_196 ^= (*l_200);
    }
    return p_31.f0;
}







static struct S1 func_33(unsigned p_34, unsigned p_35, unsigned char p_36, struct S0 p_37, unsigned short p_38)
{
    short l_139 = 7L;
    int *l_140 = &g_92;
    struct S1 l_143 = {0x8DCBL};
    struct S1 *l_144 = &g_78;
    unsigned char *l_145 = &g_146;
    struct S0 l_154 = {0x12332C83L,0x21L,0xB9L,0x146B1AA6L,0x5BE0L,4294967294UL,0x38L};
    char l_155 = 0xECL;
    int *l_156 = (void*)0;
    int *l_157 = (void*)0;
    int *l_158 = &g_159;
    struct S1 l_160 = {0UL};
    (*l_140) &= l_139;
    (*l_158) ^= (g_64.f6 == ((safe_sub_func_int8_t_s_s((((*l_145) = (((*l_144) = (g_78.f0 , l_143)) , (g_116.f6 = g_78.f0))) , (safe_div_func_int16_t_s_s(0x4755L, (safe_mod_func_uint8_t_u_u(g_116.f3, ((safe_sub_func_int32_t_s_s(((func_54(g_64.f3, ((*l_140) || ((*g_88) ^= ((g_153 = 4294967295UL) & 1UL))), l_154, g_63) <= l_155) || (*l_140)), (*l_140))) , g_116.f5)))))), g_92)) == g_116.f0));
    return l_160;
}







static unsigned func_41(struct S1 p_42, char p_43, short p_44, struct S0 p_45, unsigned char p_46)
{
    short *l_72 = &g_64.f4;
    int l_75 = 3L;
    struct S0 l_90 = {0xD2C906C2L,0xAAL,0xFEL,0xAFDD7421L,-4L,0xBF40F859L,255UL};
    struct S1 l_109 = {0x88B2L};
    if ((((*l_72) = ((g_64 , 0xC0L) != p_45.f6)) && ((p_45.f0 >= g_64.f2) & (func_54(g_64.f1, (safe_div_func_uint8_t_u_u(((p_42 , l_75) | l_75), 0x90L)), g_64, p_45.f1) | 0xEE8DL))))
    {
        unsigned char *l_83 = &g_64.f6;
        int l_84 = 9L;
        unsigned short *l_87 = (void*)0;
        int *l_89 = &g_64.f3;
        int *l_91 = &g_92;
        short **l_94 = &l_72;
        short ***l_93 = &l_94;
        (*l_91) &= (safe_div_func_int16_t_s_s((((((g_78 , (~(safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(((*l_83) &= p_45.f6), l_84)) , func_54(p_45.f6, ((safe_div_func_int32_t_s_s(((*l_89) |= ((l_75 &= (&p_46 != &p_46)) < ((p_45.f2 = ((void*)0 == g_88)) >= l_84))), g_63)) , 0xE4L), l_90, p_45.f1)), p_45.f0)))) , g_64.f2) <= g_64.f4) & 1UL) >= 3UL), l_90.f4));
        (*l_93) = (void*)0;
        (*l_91) = 0xF6B910F8L;
    }
    else
    {
        char l_103 = (-10L);
        struct S0 *l_114 = &l_90;
        struct S0 **l_127 = &l_114;
        int *l_130 = &l_75;
        for (g_64.f3 = 0; (g_64.f3 != (-11)); g_64.f3--)
        {
            int *l_106 = &g_92;
            struct S0 *l_115 = &g_116;
            for (l_90.f4 = 2; (l_90.f4 > (-20)); l_90.f4 = safe_sub_func_uint8_t_u_u(l_90.f4, 4))
            {
                int *l_100 = (void*)0;
                int **l_99 = &l_100;
                (*l_99) = (void*)0;
            }
        }
        (*g_104) = l_130;
        (**g_104) = (**g_104);
    }
    (*g_104) = (*g_104);
    (*g_105) = 0x249FF590L;
    return g_64.f5;
}







static unsigned func_54(unsigned p_55, unsigned char p_56, struct S0 p_57, short p_58)
{
    char l_69 = 0L;
    g_64.f3 &= (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_64.f4, 1L)), p_58));
    return l_69;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6, "g_64.f6", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_116.f1, "g_116.f1", print_hash_value);
    transparent_crc(g_116.f2, "g_116.f2", print_hash_value);
    transparent_crc(g_116.f3, "g_116.f3", print_hash_value);
    transparent_crc(g_116.f4, "g_116.f4", print_hash_value);
    transparent_crc(g_116.f5, "g_116.f5", print_hash_value);
    transparent_crc(g_116.f6, "g_116.f6", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_173.f0, "g_173.f0", print_hash_value);
    transparent_crc(g_173.f1, "g_173.f1", print_hash_value);
    transparent_crc(g_173.f2, "g_173.f2", print_hash_value);
    transparent_crc(g_173.f3, "g_173.f3", print_hash_value);
    transparent_crc(g_173.f4, "g_173.f4", print_hash_value);
    transparent_crc(g_173.f5, "g_173.f5", print_hash_value);
    transparent_crc(g_173.f6, "g_173.f6", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
