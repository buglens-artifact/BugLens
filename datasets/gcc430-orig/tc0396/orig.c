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
   unsigned short f0;
   unsigned short f1;
   int f2;
   short f3;
   unsigned f4;
   int f5;
   int f6;
   int f7;
};

struct S1 {
   unsigned f0;
   unsigned short f1;
   int f2;
   int f3;
   unsigned f4;
   unsigned char f5;
   unsigned char f6;
   int f7;
   unsigned f8;
};

struct S2 {
   int f0;
   unsigned f1;
   unsigned f2;
   short f3;
   unsigned short f4;
   char f5;
   char f6;
   struct S0 f7;
   short f8;
};


static short g_2 = 0x1880L;
static int g_5 = 0x051AF7F3L;
static struct S2 g_18 = {-4L,0x79096A9CL,0xDE6B786AL,0x2AD2L,0xDD8EL,0x81L,0L,{0x4373L,0x9468L,9L,1L,9UL,0x309757A8L,0x60E56979L,1L},0xAEC7L};
static struct S2 g_75 = {9L,2UL,4UL,0x45F9L,9UL,0x5DL,0x31L,{65527UL,0x0404L,0xE6052A73L,0xAC79L,0xC16C4145L,1L,0x00A49797L,9L},0x9E73L};
static struct S2 *g_74 = &g_75;
static struct S1 g_77 = {0xF9D668DAL,1UL,-1L,-1L,0x8111800AL,3UL,8UL,0x9C462E65L,0xCDFF1806L};
static int *g_147 = &g_18.f7.f2;
static struct S0 *g_150 = &g_75.f7;
static unsigned char g_207 = 0UL;
static unsigned char g_209 = 0x2CL;
static unsigned *g_280 = &g_77.f8;
static char *g_299 = &g_75.f6;
static char **g_298 = &g_299;
static char ***g_297 = &g_298;
static struct S2 g_312 = {1L,4294967289UL,1UL,0x5331L,0xA1A8L,-1L,0xE6L,{0x65E5L,65528UL,0L,7L,4294967295UL,0xFC5D2938L,-1L,0xDE782365L},0xB3E2L};
static int **g_330 = &g_147;
static int ***g_329 = &g_330;
static struct S1 g_362 = {0x8FC0ECA9L,1UL,0xB1CDF8BAL,-4L,0xBB4C828DL,0xC5L,0x5DL,0L,0xE94982D3L};
static char ****g_391 = &g_297;
static char *****g_390 = &g_391;
static int g_401 = (-10L);
static struct S0 **g_403 = &g_150;
static struct S0 ***g_402 = &g_403;
static struct S2 g_434 = {0x3FFE5A35L,0x0BF8C4F9L,9UL,0x33B7L,3UL,0xE2L,1L,{65531UL,0xBE47L,2L,0x4CC6L,4294967294UL,-1L,7L,9L},0x9E8AL};
static unsigned g_448 = 0UL;
static unsigned short *g_485 = &g_312.f4;
static struct S1 **g_525 = (void*)0;
static struct S2 **g_548 = &g_74;
static struct S2 ***g_547 = &g_548;
static struct S1 g_608 = {0x2E02544FL,0x47F7L,1L,0x9B052699L,0UL,0x87L,255UL,0x0D6200C5L,2UL};
static unsigned char *g_611 = &g_77.f6;
static unsigned char **g_610 = &g_611;
static unsigned short g_632 = 65535UL;
static short *g_658 = (void*)0;
static short **g_657 = &g_658;
static struct S1 *g_691 = (void*)0;
static char g_738 = (-2L);
static short g_792 = 1L;
static unsigned g_804 = 0x7D60FA8AL;



static struct S1 func_1(void);
static unsigned short func_6(int * p_7, unsigned char p_8);
static struct S2 func_10(char p_11, struct S2 p_12, int * p_13);
static char func_32(int ** p_33, short p_34);
static char func_37(struct S1 p_38, unsigned char p_39, int p_40);
static unsigned func_41(unsigned p_42, int ** p_43, struct S2 * p_44, int p_45);
static int ** func_46(int * p_47, short p_48, char p_49, int p_50, int ** p_51);
static short func_53(int p_54, struct S1 p_55, unsigned p_56, int p_57);
static short func_68(short p_69, struct S2 * p_70);
static struct S1 * func_79(struct S1 * p_80);
static struct S1 func_1(void)
{
    int *l_3 = (void*)0;
    int *l_4 = &g_5;
    int **l_9 = &l_3;
    int l_60 = 0x66360CCDL;
    short l_76 = 0L;
    int l_78 = 0x6C0B5FFCL;
    int l_340 = 0xF9E2EB27L;
    int **l_341 = &l_4;
    struct S2 *l_346 = (void*)0;
    unsigned char l_495 = 0xEDL;
    int l_534 = 0x46C208F0L;
    struct S2 ***l_593 = &g_548;
    unsigned l_616 = 0UL;
    unsigned *l_679 = &g_77.f0;
    struct S0 ***l_685 = (void*)0;
    struct S1 *l_690 = &g_362;
    char *l_701 = (void*)0;
    int l_708 = 0x81132938L;
    char l_739 = (-1L);
    unsigned short l_753 = 65535UL;
    struct S2 *l_808 = (void*)0;
    int l_842 = 1L;
    unsigned short l_843 = 0xEE63L;
    (*l_4) ^= g_2;
    if (((*l_4) = (g_2 || func_6(((*l_9) = (void*)0), (*l_4)))))
    {
        unsigned l_31 = 0x9DE568C3L;
        char l_65 = 0xB9L;
        struct S1 l_351 = {0x8183C4D5L,65535UL,8L,-1L,0x392B0C70L,0xD7L,0xE3L,0x7BC428E5L,1UL};
        struct S1 *l_352 = (void*)0;
        struct S1 *l_353 = &l_351;
        unsigned l_458 = 0x5E16B5B5L;
        int *l_514 = &g_362.f7;
        struct S2 *l_535 = &g_312;
        unsigned char **l_612 = &g_611;
        if ((((!g_18.f7.f4) <= (safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((l_31 , (func_32((((safe_mul_func_int8_t_s_s(func_37(((*l_353) = (func_41((l_31 >= 0x1619L), func_46(((safe_unary_minus_func_int16_t_s(func_53((l_60 | ((g_18.f0 & (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((l_65 & (safe_div_func_int16_t_s_s(func_68(g_18.f7.f5, &g_18), g_18.f7.f6))), g_2)) , &g_18) != g_74), l_65))) <= l_76)), g_77, l_78, g_18.f7.f0))) , (void*)0), l_65, l_65, l_340, l_341), l_346, l_65) , l_351)), l_31, g_2), 0x50L)) || l_351.f6) , &l_3), g_18.f0) | l_458)) , 1UL), g_434.f7.f7)), 4)), 0)) <= l_65), g_434.f7.f7))) , 5L))
        {
            char *****l_477 = &g_391;
            int l_478 = 4L;
            struct S1 l_530 = {4294967287UL,0x3FDBL,0x1C49255DL,-9L,0x2F7DF20CL,0UL,0x22L,0xC77411E9L,0x50AD142FL};
            struct S2 *l_594 = (void*)0;
            for (g_75.f6 = (-9); (g_75.f6 == (-14)); g_75.f6 = safe_sub_func_int16_t_s_s(g_75.f6, 2))
            {
                unsigned char *l_467 = &g_77.f6;
                struct S1 l_472 = {2UL,0x7521L,-1L,6L,0x0AABB5BDL,252UL,0x3DL,0x60E761F9L,0x6BC484CAL};
                char **l_498 = &g_299;
                short l_510 = (-3L);
                short l_560 = 0xBF2CL;
                int *l_566 = &g_362.f2;
                struct S0 l_581 = {8UL,0x4450L,0x7D327119L,0x36F7L,4294967295UL,0L,0x2266E282L,1L};
                int ***l_589 = &l_341;
            }
            for (g_18.f7.f6 = 0; (g_18.f7.f6 <= (-25)); --g_18.f7.f6)
            {
                (*l_514) |= 0x1388155DL;
                l_514 = &l_478;

                ;
            }

            ;
            (*l_4) = (!(-1L));
            (*l_341) = ((*g_330) = ((g_434.f7.f4 ^= (l_530.f2 = g_434.f7.f7)) , (*g_330)));

            ;
        }
        else
        {
            struct S1 **l_598 = &l_353;
            struct S0 l_605 = {0xD9B3L,5UL,0x56B83C27L,4L,0x7AF20F4EL,-1L,9L,0xF1C87319L};
            short *l_609 = &g_18.f7.f3;
            (*l_598) = func_79(&g_362);

            ;
            ;
            ;
            (**g_547) = (void*)0;

            ;
            (*g_147) |= (~(g_77.f8 < ((*g_485) = (safe_add_func_uint8_t_u_u(g_434.f7.f4, (((*l_609) = (((safe_sub_func_uint32_t_u_u((l_605 , (safe_sub_func_int16_t_s_s((l_605.f6 ^ ((*g_329) != &l_514)), 65535UL))), (+(*l_514)))) >= (((g_608 , (*l_514)) , &g_330) == &l_9)) != 8UL)) && g_77.f1))))));
        }

        ;
        ;
        ;
        ;
        ;

        l_612 = g_610;
    }
    else
    {
        unsigned l_615 = 4294967293UL;
        char ****l_629 = &g_297;
        int l_649 = 0xE2DC8B5DL;
        int *l_654 = &g_312.f7.f2;
        char *l_702 = &g_312.f6;
        struct S2 *l_709 = &g_434;
        struct S1 l_710 = {0x5A9972EDL,9UL,-10L,0xBC7C4A2FL,0x5B48709BL,253UL,247UL,0x781E5DA2L,0UL};
        struct S1 l_754 = {6UL,0xFBAFL,0x1FC0A3F5L,0L,0xFCFD14D2L,0UL,0xB6L,0xF6EE024DL,6UL};
        struct S1 **l_781 = &l_690;
        unsigned short l_786 = 0xFC5BL;
        char ****l_793 = &g_297;
        short l_794 = 0xA040L;
        if (((*g_280) & ((safe_div_func_int16_t_s_s(func_6((**g_329), l_615), ((*g_485) = (l_615 && ((***g_402) , l_616))))) < (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_608.f3 >= g_77.f6), (*g_280))), 0x5B36L)))))
        {
            unsigned char l_625 = 250UL;
            int *l_628 = &g_75.f7.f6;
            short *l_630 = (void*)0;
            short *l_631 = &l_76;
            unsigned l_633 = 0xBF117EFFL;
            char ****l_634 = (void*)0;
            unsigned char *l_635 = &l_495;
            unsigned char *l_636 = (void*)0;
            unsigned char *l_637 = &g_207;
            struct S2 l_652 = {0x1E7A249BL,4294967294UL,1UL,0x0CB5L,0x832FL,-8L,-7L,{1UL,0x5AA9L,-1L,0x8942L,0xFA2B6242L,-1L,0x4B49EEABL,0x71490678L},1L};
            int **l_671 = (void*)0;
            struct S0 **l_684 = &g_150;
            struct S1 l_759 = {0x3F031B56L,0UL,1L,1L,4294967286UL,0x28L,0UL,0xF42747BFL,0xADEBBA0BL};
            int *l_789 = &g_312.f7.f7;
            int *l_795 = &g_434.f7.f5;
            if (((safe_rshift_func_int8_t_s_s(l_615, ((*g_611) & ((safe_div_func_uint32_t_u_u(((l_625 ^ (-8L)) , func_68((l_625 , (func_6((*l_9), ((*l_637) = ((*l_635) ^= (((*g_390) = (*g_390)) != (((safe_add_func_uint32_t_u_u(((*g_280) = (((*l_628) = 0x23B0A089L) , ((((*l_631) = ((void*)0 != l_629)) && g_632) < g_362.f3))), l_633)) >= (***g_297)) , l_634))))) ^ l_615)), (**l_593))), l_615)) >= 0x92L)))) , l_615))
            {
                int l_647 = 0L;
                struct S2 l_650 = {0x57D7D40BL,4294967295UL,3UL,0x068BL,0UL,0L,0xB8L,{0x538CL,0xD3D2L,1L,0xB1D3L,0xEE301717L,0xAD7C5E2DL,0xAF6E5A6EL,0L},0xCAFDL};
                int *l_653 = &l_652.f7.f2;
                char ***l_666 = &g_298;
                for (l_60 = (-13); (l_60 >= (-20)); l_60 = safe_sub_func_int8_t_s_s(l_60, 8))
                {
                    int l_644 = 0xDF07B0BAL;
                    int l_648 = 0xE3A2FFEBL;
                    short **l_668 = &g_658;
                    if (((**g_330) = (-1L)))
                    {
                        int *l_651 = &g_608.f2;
                        l_649 ^= ((safe_rshift_func_int8_t_s_u((((((*****g_390) = (****g_391)) | ((safe_mul_func_int8_t_s_s((((((((*l_635) = func_6((*g_330), l_644)) > l_625) , ((((void*)0 == (*g_547)) && (l_615 != (*l_4))) <= l_615)) >= l_633) != l_644) < 1UL), l_647)) & l_648)) , 0x1D3CL) != l_625), (*g_611))) < 1L);
                        (**g_548) = (l_650 , func_10((((void*)0 == (***g_390)) , l_648), func_10(((*l_651) = func_6(((**g_329) = l_651), (*g_611))), l_652, l_651), l_653));

                        ;
                        (***g_329) = (***g_329);
                    }
                    else
                    {
                        int l_659 = 0xF8A0F297L;
                        char ***l_664 = &g_298;
                        char ****l_665 = &l_664;
                        unsigned *l_667 = &l_652.f1;
                        int *l_669 = (void*)0;
                        int *l_670 = &g_75.f7.f2;
                        (*l_341) = l_654;

                        ;
                        (*l_670) &= (((safe_sub_func_uint8_t_u_u((*l_654), (((g_657 != (((*l_667) ^= (func_6((l_659 , (*g_330)), (g_77.f0 , ((*l_637) &= (((safe_lshift_func_uint8_t_u_s((((***g_329) , (safe_add_func_uint32_t_u_u((((*l_4) <= (((*l_665) = ((*g_391) = l_664)) != (l_666 = l_666))) < (**g_610)), (*l_653)))) != 0xCF0EL), 5)) && 1L) , 253UL)))) > (*g_485))) , l_668)) >= (*g_299)) , (*l_654)))) == 0xC8L) < l_659);
                        (*l_654) |= (***g_329);
                    }
                }

                ;
                ;
                for (g_434.f7.f2 = 2; (g_434.f7.f2 == (-16)); g_434.f7.f2--)
                {
                    char l_676 = 0L;
                    (*l_653) &= (safe_sub_func_int32_t_s_s(((***g_297) & func_68((*l_4), (**l_593))), (l_676 & ((0x025E235AL <= (((((safe_add_func_int16_t_s_s(l_652.f7.f7, ((*l_654) > l_676))) , (*l_654)) , l_679) != (void*)0) , 6UL)) > 4294967286UL))));
                }
            }
            else
            {
                struct S1 *l_694 = (void*)0;
                int l_721 = 0L;
                for (g_312.f7.f2 = 3; (g_312.f7.f2 >= 27); g_312.f7.f2++)
                {
                    l_694 = &g_608;

                    ;
                }

                ;
                if (((255UL || 0UL) || (****g_391)))
                {
                    int l_703 = 9L;
                    unsigned l_719 = 0x9076F7B2L;
                    struct S0 l_720 = {0x6358L,1UL,3L,-6L,0UL,0xAEE84571L,-9L,0xAA541A3FL};
                    if ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((7L || ((((**g_297) = l_701) != ((+(*g_280)) , l_702)) && (l_703 != l_703))), (*g_611))), ((*g_280) , (g_434.f5 = (safe_div_func_int32_t_s_s((((safe_div_func_uint16_t_u_u(func_68((((*l_702) = l_708) , 1L), l_709), 0xFF59L)) & g_608.f5) ^ (*l_4)), 6UL)))))) < (**l_341)) || (*g_485)), g_434.f0)))
                    {
                        short l_724 = 0x3FDCL;
                        int *l_737 = &l_534;
                        (**g_330) ^= l_721;
                        (*l_4) = (safe_lshift_func_int8_t_s_s(l_724, ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((((*l_702) = ((safe_mul_func_int16_t_s_s(((*l_631) = func_41((*g_280), (*g_329), (**g_547), (l_721 < (l_720.f5 ^= 0xE3606C66L)))), ((l_654 = l_654) == ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_721, l_710.f0)), 247UL)) , l_737)))) | (*l_737))) , 0L) | (*g_485)), 0xA6612AF9L)), l_720.f6)), l_721)) , g_738)));

                        ;
                        (*l_690) = (*l_690);
                    }
                    else
                    {
                        (*l_690) = l_710;
                        (*g_147) ^= l_721;
                        (***g_329) ^= 0x02423B62L;
                    }

                    ;
                    ;
                    (*l_341) = (**g_329);

                    ;
                    (*l_341) = (**g_329);
                }
                else
                {
                    int **l_742 = &l_3;
                    unsigned l_745 = 0x7AE4790BL;
                    l_739 = ((void*)0 == (*g_390));
                    for (g_362.f3 = 0; (g_362.f3 <= (-27)); --g_362.f3)
                    {
                        int l_746 = 0L;
                        (*g_147) = ((((0x97D1ACB8L >= ((*g_485) , func_41((*g_280), l_742, ((**g_547) = (*g_548)), (safe_div_func_uint32_t_u_u((*l_654), ((*l_679) = ((l_745 == (l_746 & l_746)) | 0x01B1L))))))) < (****g_391)) != l_746) && (**l_9));

                        ;
                        (**g_329) = &l_721;

                        ;
                        if ((**g_330))
                            continue;
                        (**l_742) = (*l_654);
                    }

                    ;
                    ;
                    (*g_330) = (void*)0;

                    ;
                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            if ((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(l_753, (**l_341))), 4)), (*l_654))) , &l_76) == (void*)0))
            {
                unsigned char l_768 = 249UL;
                short **l_785 = &l_630;
                (*l_341) = ((**g_329) = (*l_9));

                ;
                ;
                for (g_77.f1 = 0; (g_77.f1 <= 59); g_77.f1++)
                {
                    unsigned l_777 = 0xEA12BEA7L;
                    int l_778 = (-3L);
                    for (g_632 = 0; (g_632 > 39); g_632 = safe_add_func_int16_t_s_s(g_632, 5))
                    {
                        int *l_764 = &g_77.f2;
                        int *l_767 = (void*)0;
                        struct S1 **l_782 = &g_691;
                    }
                }
                for (g_18.f1 = 0; (g_18.f1 > 56); g_18.f1 = safe_add_func_uint32_t_u_u(g_18.f1, 8))
                {
                    (***g_402) = (***g_402);
                    if (l_768)
                        continue;
                }
            }
            else
            {
                (*l_654) &= 1L;
                (*l_9) = l_789;

                ;
            }

            ;
            ;
            (*l_789) |= ((safe_mul_func_int8_t_s_s(((***g_547) , (&l_701 != (((((func_10((0x34L < ((**g_610) ^= g_792)), (*g_74), (**g_329)) , l_793) == l_634) == (*l_654)) != 0x39D4L) , &l_701))), l_794)) & (*l_654));
            (**g_329) = l_795;

            ;
        }
        else
        {
            int l_798 = (-2L);
            struct S1 l_803 = {0x05927F28L,0UL,-9L,0L,0UL,8UL,0x0AL,6L,5UL};
            int *l_805 = &l_710.f2;
            struct S2 *l_806 = &g_75;
            struct S2 **l_807 = &l_709;
            struct S2 ****l_817 = (void*)0;
            struct S2 ****l_818 = &g_547;
            short *l_819 = (void*)0;
            short *l_820 = &g_312.f3;
            int *l_821 = &g_608.f7;
            int *l_826 = &g_18.f7.f6;
            struct S1 **l_827 = &l_690;
            char ***l_841 = &g_298;
            struct S0 l_850 = {0x2412L,3UL,0xC50C4655L,2L,0xE0472C39L,5L,0x10C90F03L,0x56388EEAL};
            (*l_805) |= (((safe_add_func_uint32_t_u_u(l_798, (-1L))) , (*l_654)) != ((+(safe_lshift_func_uint16_t_u_u((*g_485), (safe_sub_func_int8_t_s_s((-2L), (func_37(l_803, (0x730DL >= (*g_485)), ((**l_341) = g_804)) <= (*l_654))))))) <= (*l_654)));
            (*l_821) |= (((((*g_548) == (l_808 = ((*l_807) = (l_806 = (**g_547))))) || (safe_add_func_int8_t_s_s((l_803 , ((safe_lshift_func_uint16_t_u_s((0x7FL <= (safe_lshift_func_int8_t_s_s(0x4BL, (safe_mul_func_uint8_t_u_u((((*l_820) = (((*g_611) = (*l_805)) && ((&g_548 != ((*l_818) = &g_548)) | func_6(((*l_341) = l_805), (*l_805))))) == (*l_805)), 0xCFL))))), g_362.f6)) , (****g_391))), (*l_805)))) > (*l_654)) && (**l_341));

            ;
            ;
            ;
            if (((safe_sub_func_uint8_t_u_u(((**g_610) = (safe_div_func_uint32_t_u_u((*g_280), ((((*l_805) , ((*l_654) , (((*l_821) , ((*g_280) >= ((*l_805) <= (((+((((*l_826) ^= ((**l_341) || ((1UL != (*g_280)) , (*l_654)))) , l_827) != &g_691)) > (**g_330)) > (*l_654))))) || (*l_821)))) == (*l_654)) , (***g_329))))), (**g_298))) , (*g_147)))
            {
                char l_838 = 0xFBL;
                (***g_329) = (safe_rshift_func_uint8_t_u_s(((*g_611) = (safe_add_func_uint16_t_u_u(((*g_150) , ((safe_mul_func_uint8_t_u_u((*l_805), (*l_805))) != ((*g_485) == (safe_sub_func_uint8_t_u_u(((**l_781) , ((*l_654) = (((safe_add_func_uint8_t_u_u(1UL, 4UL)) < (((*****g_390) < 0x8DL) < (-1L))) & (*g_147)))), (*l_4)))))), l_838))), (*l_4)));
            }
            else
            {
                int *l_851 = &g_75.f7.f7;
                unsigned **l_853 = (void*)0;
                unsigned ***l_852 = &l_853;
                (*g_330) = (((**l_827) , (safe_sub_func_int8_t_s_s(func_37((**l_781), (((*g_391) = (void*)0) != l_841), l_842), (l_843 || (safe_mul_func_int8_t_s_s((*l_654), ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((l_850 , 255UL), (-3L))) || g_75.f6), 10)) >= 0xCB67FFCAL))))))) , l_851);

                ;
                ;
                (*l_852) = &g_280;

                ;
            }

            ;
            ;
            (*l_4) = func_37((**l_781), (safe_mul_func_int16_t_s_s((*l_654), ((*l_654) > ((safe_add_func_uint16_t_u_u((l_826 != (void*)0), (g_608 , (((void*)0 == g_147) == 65535UL)))) & (*g_611))))), (*l_654));
        }

        ;
        ;
        ;
        ;
        ;
        ;
        ;
    }

    ;

    ;
    ;
    ;
    ;
    ;
    ;
    (*l_690) = (*l_690);
    return (*l_690);
}







static unsigned short func_6(int * p_7, unsigned char p_8)
{
    struct S2 *l_22 = &g_18;
    (*l_22) = func_10((safe_add_func_int8_t_s_s(0L, (safe_lshift_func_uint16_t_u_u(1UL, 5)))), g_18, &g_5);
    return p_8;
}







static struct S2 func_10(char p_11, struct S2 p_12, int * p_13)
{
    int *l_20 = (void*)0;
    int **l_19 = &l_20;
    struct S2 l_21 = {-8L,1UL,0x5C87E177L,-1L,0xF363L,0xE6L,0xA9L,{0x9493L,7UL,7L,0x1A3AL,0xAA3E8518L,0xBF4D80A9L,0x2350C165L,-9L},0x8E87L};
    (*l_19) = (void*)0;
    return l_21;
}







static char func_32(int ** p_33, short p_34)
{
    char l_368 = 1L;
    int l_375 = 0x3092513CL;
    struct S0 *l_377 = &g_75.f7;
    struct S2 *l_381 = &g_312;
    struct S1 l_410 = {4294967295UL,0UL,5L,0x0CE527C4L,4294967295UL,0xF8L,251UL,0x099B38A2L,4294967295UL};
    short l_418 = 0L;
    unsigned l_456 = 4294967289UL;
    int **l_457 = &g_147;
    if ((l_368 > ((safe_rshift_func_int8_t_s_s(0xE2L, 5)) <= (safe_rshift_func_int16_t_s_s(g_312.f7.f2, 5)))))
    {
        struct S0 *l_376 = (void*)0;
        struct S1 l_380 = {1UL,65526UL,0x07313F53L,0x76E19BB2L,0UL,0xCCL,0xCDL,-4L,0UL};
        char *****l_392 = &g_391;
        struct S2 *l_404 = &g_312;
        int *l_411 = &g_5;
        int *l_414 = (void*)0;
        int *l_415 = &l_410.f7;
        (*p_33) = ((*g_330) = (((((3UL < ((safe_mul_func_int8_t_s_s(((6L <= p_34) , (l_375 &= ((***g_297) ^= p_34))), func_68(((l_376 = l_376) == l_377), ((safe_sub_func_int32_t_s_s((((g_147 == (l_380 , g_147)) != p_34) , l_368), 0x843BB297L)) , l_381)))) | 0x82L)) , (void*)0) != (void*)0) || p_34) , (void*)0));

        ;
        if ((+(safe_rshift_func_int16_t_s_s(p_34, (safe_mul_func_uint8_t_u_u(((~l_368) > ((safe_lshift_func_int16_t_s_u(((((safe_sub_func_int8_t_s_s((g_390 == l_392), (((&l_375 != ((**g_329) = (*g_330))) | (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((func_68(((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(func_68((g_401 == ((void*)0 != g_402)), l_381), p_34)), p_34)) , p_34), l_404) & 0xBD12EB80L), 10)), 0x70L))) & l_368))) == l_380.f4) , l_380.f3) <= 65529UL), g_362.f0)) || 0x8DL)), p_34))))))
        {
            short l_405 = 0x9D16L;
            l_380.f2 = l_405;
        }
        else
        {
            g_75.f0 ^= l_375;
        }
        g_18.f7.f5 |= ((void*)0 == &g_2);
        (*l_415) &= (safe_mod_func_uint8_t_u_u((0xD8AD19E7L & (safe_div_func_int16_t_s_s((l_410.f6 && 246UL), (*l_411)))), p_34));
    }
    else
    {
        struct S0 l_425 = {0xA9A0L,65534UL,9L,2L,0x1B3107ACL,-8L,0x09329CD4L,-10L};
        struct S2 *l_433 = &g_434;
        int l_435 = 0x4B6FDB36L;
        unsigned char *l_444 = (void*)0;
        unsigned char **l_443 = &l_444;
        unsigned char *l_445 = &g_207;
        short *l_446 = &g_434.f3;
        unsigned *l_447 = &g_448;
        int *l_449 = &g_75.f0;
        for (g_75.f7.f5 = 27; (g_75.f7.f5 == (-29)); g_75.f7.f5 = safe_sub_func_int32_t_s_s(g_75.f7.f5, 1))
        {
            short *l_420 = (void*)0;
            short **l_419 = &l_420;
            int l_426 = 0x89D789AEL;
            struct S1 *l_430 = &g_362;
            struct S1 **l_429 = &l_430;
            struct S2 *l_431 = (void*)0;
            short *l_432 = &g_312.f3;
            if (l_418)
                break;
        }
        (*l_449) = ((*g_147) = ((g_434.f7.f1 > (((*l_447) ^= func_68(((*****g_390) != 0x98L), l_433)) , 65535UL)) < 0x35L));
    }

    ;
    g_18.f7.f5 = l_410.f8;
    g_18.f7.f7 ^= ((((*l_381) , (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(0x57L, func_68(l_410.f4, &g_75))), l_410.f5))) | (safe_sub_func_int8_t_s_s((l_456 && (+l_418)), func_41(l_410.f8, l_457, l_381, l_418)))) , 0xBAA8C972L);

    ;
    return (**l_457);
}







static char func_37(struct S1 p_38, unsigned char p_39, int p_40)
{
    short l_358 = 0xD263L;
    struct S1 *l_361 = &g_362;
    unsigned char *l_363 = &g_209;
    unsigned char *l_364 = &g_77.f6;
    int *l_365 = &g_312.f0;
    struct S2 *l_366 = &g_18;
    struct S2 **l_367 = (void*)0;
    (*l_365) &= ((*g_147) = (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((*g_280) ^= l_358) > (safe_mod_func_int32_t_s_s((((*l_361) = p_38) , (!(*g_147))), l_358))), ((*l_364) = (l_358 , ((*l_363) ^= g_75.f7.f2))))), 14)));
    l_366 = l_366;
    return (*g_299);
}







static unsigned func_41(unsigned p_42, int ** p_43, struct S2 * p_44, int p_45)
{
    struct S1 l_347 = {4294967295UL,0xEACEL,0x595A54B1L,-1L,0xA2DE2E82L,246UL,0UL,0xC57C53E3L,0x1E934765L};
    struct S1 *l_348 = &g_77;
    struct S1 *l_349 = &l_347;
    int *l_350 = &g_77.f2;
    (*l_349) = ((*l_348) = l_347);
    (*p_43) = l_350;


    return p_45;
}







static int ** func_46(int * p_47, short p_48, char p_49, int p_50, int ** p_51)
{
    unsigned l_344 = 0UL;
    int **l_345 = &g_147;
    l_344 ^= func_68(((safe_rshift_func_int16_t_s_u(0xDB76L, 5)) | ((void*)0 == &g_330)), &g_18);
    return l_345;


}







static short func_53(int p_54, struct S1 p_55, unsigned p_56, int p_57)
{
    int l_81 = 5L;
    struct S0 l_82 = {3UL,6UL,0x31259C1DL,-9L,1UL,0x03D800CEL,0x564DE9A6L,0L};
    struct S0 *l_83 = &l_82;
    unsigned short *l_96 = &g_75.f7.f1;
    unsigned short *l_97 = (void*)0;
    unsigned short *l_98 = (void*)0;
    unsigned short *l_99 = &g_18.f7.f1;
    int *l_100 = &l_82.f5;
    char *l_101 = &g_75.f6;
    struct S1 *l_338 = (void*)0;
    struct S1 **l_337 = &l_338;
    unsigned l_339 = 0x3FAF5FAFL;
    (*l_337) = func_79((((*l_83) = (l_81 , l_82)) , ((safe_sub_func_int16_t_s_s((+(safe_rshift_func_int16_t_s_u(0xD993L, (g_18.f7.f2 , ((safe_mul_func_uint16_t_u_u(g_18.f0, (p_55.f8 >= (((g_18.f7.f0 && ((*l_101) = ((((safe_add_func_int32_t_s_s(((*l_100) = (safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_82.f4 <= ((*l_99) = ((*l_96) = (&p_57 == &l_81)))), 65535UL)) <= p_56), g_75.f0))), p_55.f2)) & 246UL) || g_75.f8) | p_54))) , (-7L)) || g_18.f7.f0)))) , 6UL))))), p_55.f4)) , (void*)0)));

    ;
    ;
    ;
    (**g_330) ^= (*l_100);
    return l_339;
}







static short func_68(short p_69, struct S2 * p_70)
{
    int *l_71 = (void*)0;
    int **l_72 = &l_71;
    int *l_73 = &g_18.f7.f2;
    (*l_72) = l_71;
    (*l_73) &= 0L;
    return g_18.f7.f2;
}







static struct S1 * func_79(struct S1 * p_80)
{
    struct S2 *l_102 = &g_75;
    struct S2 **l_103 = &l_102;
    int l_106 = 9L;
    struct S1 *l_113 = &g_77;
    unsigned *l_114 = (void*)0;
    unsigned *l_115 = &g_77.f0;
    int l_116 = 2L;
    struct S0 *l_117 = &g_75.f7;
    int l_140 = 0xE82FD218L;
    int **l_163 = &g_147;
    int l_208 = 7L;
    unsigned l_328 = 0xF8B71822L;
    char **l_336 = &g_299;
    (*l_103) = l_102;
    (*l_117) = (((safe_mod_func_int32_t_s_s((g_18.f7.f4 && (l_106 & (g_75.f7.f2 <= (g_77.f1 && ((safe_rshift_func_int16_t_s_s(0xE031L, (g_75.f7.f5 < (((safe_mod_func_int8_t_s_s((-6L), (l_116 = (safe_mod_func_uint32_t_u_u((l_106 , ((*l_115) = ((l_106 , l_113) == l_113))), g_18.f7.f5))))) ^ g_75.f7.f2) >= l_106)))) ^ l_106))))), l_106)) , l_106) , g_18.f7);
    if (l_106)
    {
        struct S1 l_118 = {0x39D135A3L,0x0EBAL,0xCB814C84L,0x226CAE36L,4294967295UL,0x6DL,255UL,-4L,0x93B24359L};
        unsigned short *l_119 = &g_18.f7.f1;
        short *l_122 = (void*)0;
        short *l_123 = &g_18.f7.f3;
        int *l_124 = &g_18.f7.f5;
        struct S2 *l_175 = &g_75;
        char ***l_296 = (void*)0;
        (*l_124) ^= (((*l_123) = (~((((((l_118 , ((l_118.f6 , ((*l_119) &= l_118.f5)) == l_106)) < (func_68(((safe_mul_func_int16_t_s_s(l_116, g_2)) <= ((l_106 != l_106) > (!l_106))), &g_75) , 4294967292UL)) != 0xFF3CL) | l_106) , 0xB72C1407L) || l_118.f8))) & 0x8F8DL);
        for (g_75.f3 = 23; (g_75.f3 <= (-27)); g_75.f3 = safe_sub_func_int16_t_s_s(g_75.f3, 6))
        {
            unsigned char l_135 = 0x3DL;
            unsigned char *l_138 = &g_77.f5;
            unsigned char *l_139 = &l_118.f5;
            int *l_141 = &g_77.f2;
            unsigned l_164 = 0xF6BAA5DAL;
            struct S2 *l_173 = &g_75;
            unsigned short *l_178 = (void*)0;
            short **l_182 = &l_122;
            short **l_183 = &l_123;
            char *l_184 = &g_18.f5;
            short *l_185 = (void*)0;
            short *l_186 = &g_18.f7.f3;
        }
        for (g_75.f0 = 10; (g_75.f0 != (-30)); --g_75.f0)
        {
            unsigned char l_220 = 0xC7L;
            char l_222 = 0L;
            unsigned short l_246 = 0xEC56L;
            int l_247 = 0x4E74358FL;
            int **l_281 = &l_124;
            struct S1 *l_290 = &l_118;
            unsigned **l_295 = &g_280;
            char ****l_300 = (void*)0;
            char ***l_301 = (void*)0;
            struct S1 l_306 = {0UL,0xCE83L,0xD4F4D559L,-1L,4294967289UL,0xC0L,255UL,2L,1UL};
            for (g_75.f7.f6 = 0; (g_75.f7.f6 >= 14); g_75.f7.f6 = safe_add_func_int8_t_s_s(g_75.f7.f6, 5))
            {
                struct S2 *l_221 = (void*)0;
                unsigned char *l_223 = &g_207;
                unsigned char *l_224 = &l_118.f6;
                unsigned short *l_225 = (void*)0;
                unsigned short *l_226 = &g_75.f7.f1;
                unsigned short *l_227 = (void*)0;
                unsigned short *l_228 = &g_75.f7.f0;
                int l_236 = 0x17EC8355L;
                unsigned short l_237 = 0xCF17L;
                int l_287 = 0L;
                struct S0 **l_288 = (void*)0;
                if ((+(safe_rshift_func_uint16_t_u_u(((*l_228) &= ((*l_226) = ((g_18.f0 <= ((*l_224) = ((*l_223) = (safe_mul_func_uint16_t_u_u(((*l_119) &= (((*l_103) != (((*l_113) = g_77) , (func_68(((*l_123) = (((+(*g_147)) , ((safe_rshift_func_uint8_t_u_u((*l_124), (*l_124))) || ((*l_124) = 0x70FDL))) >= l_220)), l_221) , (void*)0))) , g_18.f0)), l_222))))) <= g_75.f3))), l_118.f4))))
                {
                    char *l_233 = &g_75.f6;
                    int l_238 = 0xEB000830L;
                    (*g_147) = ((safe_sub_func_int32_t_s_s(((((*l_123) = (safe_mul_func_int8_t_s_s((*l_124), (g_18.f7.f2 != ((*l_233) = 0xE4L))))) > ((safe_lshift_func_uint16_t_u_s(((~g_18.f7.f5) ^ l_236), 4)) >= l_237)) >= ((l_222 > (((*l_124) != (g_75.f7.f2 , l_238)) != 1L)) <= 0x3E73L)), (**l_163))) || l_220);
                    for (g_75.f7.f1 = 27; (g_75.f7.f1 >= 31); g_75.f7.f1 = safe_add_func_int32_t_s_s(g_75.f7.f1, 9))
                    {
                        (*l_124) = (*g_147);
                    }
                    for (g_18.f4 = 0; (g_18.f4 != 24); g_18.f4 = safe_add_func_uint8_t_u_u(g_18.f4, 2))
                    {
                        int l_243 = 0x9F669453L;
                        (*g_147) ^= (l_243 && ((-3L) > l_236));
                        (*l_124) &= (-10L);
                        (**l_163) = (func_68((+(((safe_mod_func_int8_t_s_s(l_246, l_247)) , (safe_mod_func_int8_t_s_s((**l_163), (**l_163)))) <= ((-7L) & (safe_sub_func_int32_t_s_s((*g_147), (safe_add_func_int32_t_s_s((-4L), l_243))))))), (*l_103)) | g_75.f1);
                    }
                }
                else
                {
                    char **l_255 = (void*)0;
                    char ***l_254 = &l_255;
                    int l_260 = 0L;
                    int *l_286 = (void*)0;
                    struct S0 ***l_289 = &l_288;
                    (*l_254) = (void*)0;
                    if ((safe_mod_func_int32_t_s_s(func_68((func_68(l_246, (*l_103)) > g_18.f5), (*l_103)), ((safe_lshift_func_int16_t_s_s((+l_260), (safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((*l_124) && (safe_sub_func_uint8_t_u_u((l_260 == g_75.f3), g_18.f7.f6))), 4)) , &l_247) != (void*)0), (*l_124))) && 0xF1FFCAC8L) , &g_207) == &g_209), g_77.f4)))) && (*l_124)))))
                    {
                        (*l_113) = (*l_113);
                    }
                    else
                    {
                        unsigned **l_279 = (void*)0;
                        int ***l_282 = &l_281;
                        struct S0 *l_285 = &g_18.f7;
                        (*l_124) &= (l_260 , (safe_mul_func_int16_t_s_s(g_18.f7.f0, (!((safe_rshift_func_uint8_t_u_s((((((*l_119) = g_77.f7) , ((func_68(l_260, l_175) , 0L) ^ (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_236, ((((g_280 = g_147) == g_147) != g_75.f7.f5) & l_220))), 1)))) <= 0L) == 0x826AFAFCL), 3)) , 0xCA68L)))));

                        ;
                        (*l_282) = l_281;
                        l_287 &= ((safe_lshift_func_uint16_t_u_s(((func_10(((l_260 = (**l_281)) ^ 0x4FL), func_10((((g_18.f4 = (func_68(((l_236 , 1L) , (0x490589B7L && (((l_285 != (void*)0) <= func_68((***l_282), ((*l_103) = l_221))) >= l_237))), &g_75) , (*l_124))) , (*l_124)) > l_237), (*g_74), l_286), &g_5) , 1UL) <= (***l_282)), (***l_282))) < l_237);

                        ;
                    }

                    ;
                    ;
                    (*l_289) = l_288;
                    (*l_124) = (*g_147);
                }

                ;
                ;
                return l_113;


            }
            if ((((safe_rshift_func_int8_t_s_u(5L, (safe_sub_func_int8_t_s_s(((((*l_295) = l_124) != ((l_296 != (l_301 = g_297)) , l_114)) , (&g_74 == &g_74)), (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_75.f7.f3 , g_5), 0x0910E615L)), (*l_124))))))) <= 0xF3CD5421L) , 0x4D74A20BL))
            {
                (*l_290) = l_306;
                (*l_163) = l_124;

                ;
            }
            else
            {
                char *l_317 = (void*)0;
                struct S1 *l_318 = &l_306;
                if (((**l_281) |= (*g_147)))
                {
                    unsigned char l_307 = 0UL;
                    struct S1 *l_308 = &l_306;
                    struct S2 l_313 = {0xA76BEB16L,4294967286UL,0x207660B6L,9L,0x9EA3L,0L,0x97L,{0x314DL,1UL,8L,0x4BF7L,4294967295UL,0xCCCF3AA1L,0x837C6D80L,0x1CF77354L},4L};
                    struct S2 *l_314 = &g_312;
                    (*l_163) = &g_5;

                    ;
                    if (l_307)
                    {
                        return p_80;


                    }
                    else
                    {
                        struct S2 *l_311 = &g_312;
                        (*l_311) = func_10((+(safe_mod_func_int8_t_s_s((***g_297), (*l_124)))), (*g_74), &g_5);
                    }
                    (*l_314) = l_313;
                }
                else
                {
                    for (g_75.f8 = 0; (g_75.f8 != (-25)); g_75.f8--)
                    {
                        (**l_163) = (*l_124);
                    }
                }

                ;
                (*g_147) |= (**l_281);
                (*l_318) = ((*l_113) = (((l_317 = (**g_297)) != (void*)0) , ((*l_290) = (*l_290))));

                ;
                (*g_147) ^= 0xAEB41CDEL;
            }

            ;
            ;
            ;
            return p_80;


        }
        (*l_163) = (*l_163);
    }
    else
    {
        unsigned short l_319 = 0xF5FCL;
        char ****l_321 = &g_297;
        char *****l_320 = &l_321;
        struct S2 **l_322 = &g_74;
        int *l_325 = &l_140;
        int ***l_331 = &g_330;
        (**l_163) &= l_319;
        (*l_325) &= (((*g_147) = func_68((func_68(g_77.f2, (*l_103)) , (&g_297 != ((*l_320) = &g_297))), ((*l_322) = (*l_103)))) , (safe_sub_func_int32_t_s_s((~(*g_147)), 2UL)));
        (***g_329) = (((safe_lshift_func_int16_t_s_s(l_328, (**l_163))) ^ ((g_329 != l_331) ^ ((***l_331) <= (**g_330)))) > (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_336 == (*g_297)), (0xDC4B2344L & (**g_330)))), (**g_330))));
    }
    return p_80;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_18.f5, "g_18.f5", print_hash_value);
    transparent_crc(g_18.f6, "g_18.f6", print_hash_value);
    transparent_crc(g_18.f7.f0, "g_18.f7.f0", print_hash_value);
    transparent_crc(g_18.f7.f1, "g_18.f7.f1", print_hash_value);
    transparent_crc(g_18.f7.f2, "g_18.f7.f2", print_hash_value);
    transparent_crc(g_18.f7.f3, "g_18.f7.f3", print_hash_value);
    transparent_crc(g_18.f7.f4, "g_18.f7.f4", print_hash_value);
    transparent_crc(g_18.f7.f5, "g_18.f7.f5", print_hash_value);
    transparent_crc(g_18.f7.f6, "g_18.f7.f6", print_hash_value);
    transparent_crc(g_18.f7.f7, "g_18.f7.f7", print_hash_value);
    transparent_crc(g_18.f8, "g_18.f8", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
    transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
    transparent_crc(g_75.f4, "g_75.f4", print_hash_value);
    transparent_crc(g_75.f5, "g_75.f5", print_hash_value);
    transparent_crc(g_75.f6, "g_75.f6", print_hash_value);
    transparent_crc(g_75.f7.f0, "g_75.f7.f0", print_hash_value);
    transparent_crc(g_75.f7.f1, "g_75.f7.f1", print_hash_value);
    transparent_crc(g_75.f7.f2, "g_75.f7.f2", print_hash_value);
    transparent_crc(g_75.f7.f3, "g_75.f7.f3", print_hash_value);
    transparent_crc(g_75.f7.f4, "g_75.f7.f4", print_hash_value);
    transparent_crc(g_75.f7.f5, "g_75.f7.f5", print_hash_value);
    transparent_crc(g_75.f7.f6, "g_75.f7.f6", print_hash_value);
    transparent_crc(g_75.f7.f7, "g_75.f7.f7", print_hash_value);
    transparent_crc(g_75.f8, "g_75.f8", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
    transparent_crc(g_77.f5, "g_77.f5", print_hash_value);
    transparent_crc(g_77.f6, "g_77.f6", print_hash_value);
    transparent_crc(g_77.f7, "g_77.f7", print_hash_value);
    transparent_crc(g_77.f8, "g_77.f8", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_312.f0, "g_312.f0", print_hash_value);
    transparent_crc(g_312.f1, "g_312.f1", print_hash_value);
    transparent_crc(g_312.f2, "g_312.f2", print_hash_value);
    transparent_crc(g_312.f3, "g_312.f3", print_hash_value);
    transparent_crc(g_312.f4, "g_312.f4", print_hash_value);
    transparent_crc(g_312.f5, "g_312.f5", print_hash_value);
    transparent_crc(g_312.f6, "g_312.f6", print_hash_value);
    transparent_crc(g_312.f7.f0, "g_312.f7.f0", print_hash_value);
    transparent_crc(g_312.f7.f1, "g_312.f7.f1", print_hash_value);
    transparent_crc(g_312.f7.f2, "g_312.f7.f2", print_hash_value);
    transparent_crc(g_312.f7.f3, "g_312.f7.f3", print_hash_value);
    transparent_crc(g_312.f7.f4, "g_312.f7.f4", print_hash_value);
    transparent_crc(g_312.f7.f5, "g_312.f7.f5", print_hash_value);
    transparent_crc(g_312.f7.f6, "g_312.f7.f6", print_hash_value);
    transparent_crc(g_312.f7.f7, "g_312.f7.f7", print_hash_value);
    transparent_crc(g_312.f8, "g_312.f8", print_hash_value);
    transparent_crc(g_362.f0, "g_362.f0", print_hash_value);
    transparent_crc(g_362.f1, "g_362.f1", print_hash_value);
    transparent_crc(g_362.f2, "g_362.f2", print_hash_value);
    transparent_crc(g_362.f3, "g_362.f3", print_hash_value);
    transparent_crc(g_362.f4, "g_362.f4", print_hash_value);
    transparent_crc(g_362.f5, "g_362.f5", print_hash_value);
    transparent_crc(g_362.f6, "g_362.f6", print_hash_value);
    transparent_crc(g_362.f7, "g_362.f7", print_hash_value);
    transparent_crc(g_362.f8, "g_362.f8", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_434.f0, "g_434.f0", print_hash_value);
    transparent_crc(g_434.f1, "g_434.f1", print_hash_value);
    transparent_crc(g_434.f2, "g_434.f2", print_hash_value);
    transparent_crc(g_434.f3, "g_434.f3", print_hash_value);
    transparent_crc(g_434.f4, "g_434.f4", print_hash_value);
    transparent_crc(g_434.f5, "g_434.f5", print_hash_value);
    transparent_crc(g_434.f6, "g_434.f6", print_hash_value);
    transparent_crc(g_434.f7.f0, "g_434.f7.f0", print_hash_value);
    transparent_crc(g_434.f7.f1, "g_434.f7.f1", print_hash_value);
    transparent_crc(g_434.f7.f2, "g_434.f7.f2", print_hash_value);
    transparent_crc(g_434.f7.f3, "g_434.f7.f3", print_hash_value);
    transparent_crc(g_434.f7.f4, "g_434.f7.f4", print_hash_value);
    transparent_crc(g_434.f7.f5, "g_434.f7.f5", print_hash_value);
    transparent_crc(g_434.f7.f6, "g_434.f7.f6", print_hash_value);
    transparent_crc(g_434.f7.f7, "g_434.f7.f7", print_hash_value);
    transparent_crc(g_434.f8, "g_434.f8", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_608.f0, "g_608.f0", print_hash_value);
    transparent_crc(g_608.f1, "g_608.f1", print_hash_value);
    transparent_crc(g_608.f2, "g_608.f2", print_hash_value);
    transparent_crc(g_608.f3, "g_608.f3", print_hash_value);
    transparent_crc(g_608.f4, "g_608.f4", print_hash_value);
    transparent_crc(g_608.f5, "g_608.f5", print_hash_value);
    transparent_crc(g_608.f6, "g_608.f6", print_hash_value);
    transparent_crc(g_608.f7, "g_608.f7", print_hash_value);
    transparent_crc(g_608.f8, "g_608.f8", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
