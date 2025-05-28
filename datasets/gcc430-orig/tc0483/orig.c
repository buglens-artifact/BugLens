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
   signed f0 : 23;
   unsigned f1;
   unsigned f2 : 18;
   unsigned short f3;
   int f4;
   int f5;
   unsigned short f6;
   unsigned f7;
};

struct S1 {
   signed f0 : 16;
   unsigned : 0;
   unsigned f1;
};

struct S2 {
   unsigned short f0;
   struct S0 f1;
   unsigned f2;
   struct S0 f3;
   unsigned f4;
   char f5;
   short f6;
   unsigned f7;
   unsigned short f8;
};


static int g_2 = 0x9F361739L;
static char g_3 = 1L;
static unsigned g_14 = 1UL;
static int g_16 = (-7L);
static struct S1 g_43 = {-33,4294967295UL};
static unsigned *g_47 = &g_14;
static unsigned short g_61 = 65535UL;
static short g_83 = 0L;
static unsigned short g_87 = 0x03D5L;
static short g_89 = (-1L);
static short *g_88 = &g_89;
static struct S0 g_94 = {-1052,0x9ACB3B36L,415,0x0335L,1L,0x46498492L,0x769EL,1UL};
static struct S1 *g_112 = &g_43;
static unsigned short g_126 = 0UL;
static struct S2 g_151 = {0x27E3L,{-1847,4294967288UL,270,0x1CE7L,0x6402E1C8L,0xCAAAA389L,0x47EDL,0x55874C7DL},0xE7134089L,{2706,1UL,264,0x8C12L,0xCB49D4ABL,0xF9760D51L,0xACB9L,0UL},0xD90DC829L,0x9FL,0xA9ACL,0UL,0x7BAFL};
static struct S2 *g_150 = &g_151;
static unsigned char g_167 = 0x38L;
static unsigned char g_176 = 0xF2L;
static struct S2 g_213 = {0xDE66L,{-908,0x67C8C73FL,128,0x2EA5L,0x37F148B7L,-2L,0x259DL,0xFE3AFA29L},0x62681438L,{2674,6UL,214,2UL,-1L,0xBBBA2D26L,0xC2A3L,1UL},4294967293UL,0L,0xF0FEL,0x554AE0E0L,0x78EEL};
static int *g_273 = &g_151.f3.f5;
static int **g_317 = (void*)0;
static int ***g_316 = &g_317;
static struct S0 g_400 = {2380,0x01DCC2C6L,388,0UL,0x566AA79EL,0L,0x323DL,4294967295UL};
static char **g_444 = (void*)0;
static struct S0 *g_469 = &g_400;
static struct S0 **g_468 = &g_469;
static short **g_538 = &g_88;



static short func_1(void);
static int func_17(int p_18, unsigned char p_19);
static int * func_21(int * p_22, struct S0 p_23, int * p_24, int p_25);
static int * func_26(int * p_27, int p_28);
static int * func_29(unsigned * p_30, struct S0 p_31, unsigned p_32, unsigned * p_33);
static unsigned * func_34(int p_35, unsigned * p_36, unsigned char p_37, int p_38);
static unsigned ** func_44(unsigned * p_45, unsigned * p_46);
static struct S1 func_49(unsigned p_50, unsigned * p_51, int p_52);
static short func_55(unsigned short p_56, unsigned p_57);
static unsigned short func_62(unsigned p_63, unsigned p_64, struct S1 p_65, struct S0 p_66, struct S0 p_67);
static short func_1(void)
{
    unsigned l_20 = 0xE7B1B0CAL;
    struct S0 *l_483 = (void*)0;
    short l_489 = (-1L);
    short l_495 = 0x1FC5L;
    struct S2 l_497 = {1UL,{-883,0x1A200B15L,26,65535UL,-1L,0x7B932794L,0xB9A4L,0x5D67222AL},0x31EEAB81L,{-2575,1UL,222,0x5939L,0x8FEEFFBAL,0x1FCC4563L,0UL,4294967286UL},4294967295UL,0L,1L,0x01F40AD7L,8UL};
    struct S2 *l_525 = &l_497;
    short **l_539 = (void*)0;
    g_3 = g_2;
    if (g_2)
    {
        unsigned char l_4 = 1UL;
        unsigned *l_13 = &g_14;
        int *l_15 = &g_16;
        struct S1 *l_521 = &g_43;
        int *l_526 = &g_213.f3.f5;
        (*l_15) = (l_4 == (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((65535UL | g_3), (safe_add_func_uint32_t_u_u(((*l_13) = (0L <= g_2)), 4UL)))), l_4)), 5)));
        if ((func_17(g_3, l_20) && (*l_15)))
        {
            struct S0 *l_482 = &g_151.f1;
            int *l_484 = &g_213.f3.f5;
            int **l_490 = &l_15;
            for (g_151.f3.f5 = 0; (g_151.f3.f5 == 21); ++g_151.f3.f5)
            {
                int **l_485 = (void*)0;
                int **l_486 = &l_484;
                l_483 = l_482;
            }
            l_15 = l_15;
            (*l_490) = func_26(&g_16, (safe_rshift_func_int16_t_s_u(l_489, 6)));
        }
        else
        {
            char l_511 = 7L;
            if ((safe_rshift_func_uint16_t_u_s((*l_15), 14)))
            {
                int *l_493 = &g_213.f3.f5;
                int **l_494 = &l_493;
                (*l_494) = l_493;
                (*l_15) = l_489;
            }
            else
            {
                struct S2 l_496 = {0x585EL,{846,0xE49B540DL,222,0xAC40L,0L,0x644BE911L,0UL,0xB28DB9A1L},1UL,{2133,0xAF8C7771L,300,65535UL,0x64A20EF3L,8L,0x3A01L,1UL},0x66872836L,0xBFL,0x62D2L,0UL,0UL};
                struct S2 *l_498 = &l_496;
                short *l_505 = &g_83;
                unsigned *l_508 = &g_94.f1;
                (*g_469) = (*g_469);
                (*l_498) = ((*g_150) = (l_497 = l_496));
                if ((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(l_497.f1.f5, g_213.f3.f4)) == 0xA58CL), ((*g_88) <= ((*l_505) = (l_497.f8 > (safe_add_func_int32_t_s_s(0x79964828L, (0xA9FEE52BL || 0xFA915693L)))))))))
                {
                    unsigned short *l_510 = &l_496.f1.f3;
                    int l_512 = 0xC8185F2EL;
                    int *l_513 = &l_512;
                    int **l_517 = (void*)0;
                    int **l_518 = (void*)0;
                    int **l_519 = (void*)0;
                    int **l_520 = &l_513;
                    struct S1 **l_522 = (void*)0;
                    struct S1 **l_523 = &l_521;
                    struct S1 **l_524 = &g_112;
                    (*l_513) = (safe_mul_func_uint16_t_u_u((0xB0L || (((void*)0 == l_508) | (((*g_273) = 6L) <= (safe_unary_minus_func_int32_t_s((((*l_510) = g_151.f6) >= (*g_88))))))), (l_511 <= l_512)));
                    (*l_520) = l_508;
                    (*l_524) = ((*l_523) = l_521);
                    l_525 = &g_213;
                }
                else
                {
                    return l_511;
                }
            }
            g_273 = l_526;
        }
    }
    else
    {
        int *l_530 = &g_94.f5;
        unsigned **l_531 = &g_47;
        int **l_534 = (void*)0;
        for (l_497.f3.f1 = (-3); (l_497.f3.f1 > 32); l_497.f3.f1 = safe_add_func_int32_t_s_s(l_497.f3.f1, 4))
        {
            char l_529 = 0x03L;
            (*g_273) = l_529;
        }
        g_273 = l_530;
        for (l_497.f3.f7 = 0; (l_497.f3.f7 < 42); l_497.f3.f7++)
        {
            struct S0 *l_537 = (void*)0;
            (*g_468) = l_537;
            l_539 = (g_538 = &g_88);
            (*g_273) = (g_213.f0 > g_94.f4);
        }
    }
    return (*g_88);
}







static int func_17(int p_18, unsigned char p_19)
{
    unsigned l_39 = 1UL;
    unsigned *l_40 = &g_14;
    unsigned *l_402 = (void*)0;
    unsigned **l_401 = &l_402;
    struct S0 l_472 = {1681,0xC5A63EBDL,190,2UL,-1L,0x57D6EC18L,0x2ABDL,0x924F3BA3L};
    int **l_479 = &g_273;
    (*l_479) = func_21(func_26(func_29(func_34(l_39, l_40, g_2, (g_16 = p_19)), g_400, g_400.f5, ((*l_401) = g_47)), l_39), l_472, g_47, p_19);
    return (**l_479);
}







static int * func_21(int * p_22, struct S0 p_23, int * p_24, int p_25)
{
    struct S2 **l_473 = &g_150;
    int *l_476 = &g_16;
    l_473 = (void*)0;
    for (g_151.f1.f7 = (-12); (g_151.f1.f7 > 31); g_151.f1.f7 = safe_add_func_int32_t_s_s(g_151.f1.f7, 7))
    {
        int **l_477 = (void*)0;
        int **l_478 = &l_476;
        (*l_478) = l_476;
        (*l_478) = l_476;
    }
    return l_476;
}







static int * func_26(int * p_27, int p_28)
{
    struct S2 l_450 = {0UL,{2263,4UL,461,4UL,3L,5L,1UL,0UL},0x51BD0BF2L,{1333,0x68164DC9L,18,1UL,0xBAB2FB22L,-7L,0UL,0xF1A3C8B6L},0x8D3BB893L,-9L,0L,0x7AB407BEL,1UL};
    int l_458 = 0xFF7FA8EDL;
    struct S0 *l_467 = &g_94;
    struct S0 **l_466 = &l_467;
    struct S1 **l_471 = &g_112;
    (*g_150) = l_450;
    (*g_150) = (*g_150);
    for (g_2 = 0; (g_2 < 1); ++g_2)
    {
        char *l_455 = &g_3;
        short *l_459 = (void*)0;
        short *l_460 = &g_83;
        int l_461 = (-9L);
        (*g_273) = ((l_450.f8 || ((safe_mod_func_int8_t_s_s(((*l_455) = l_450.f2), ((((*g_88) = (*g_88)) ^ 65526UL) & (((*l_460) = (safe_mul_func_int8_t_s_s(l_458, (0x06C5L >= 0x2D7CL)))) ^ l_450.f5)))) | (l_450.f3.f1 <= l_461))) < (*p_27));
        for (l_450.f1.f4 = 0; (l_450.f1.f4 <= (-1)); l_450.f1.f4 = safe_sub_func_int32_t_s_s(l_450.f1.f4, 3))
        {
            struct S1 l_464 = {-108,0x23D4D1E4L};
            struct S1 *l_465 = &l_464;
            int *l_470 = (void*)0;
            if (l_450.f1.f5)
                break;
            (*l_465) = l_464;
            g_468 = l_466;
            l_470 = l_470;
        }
    }
    (*l_471) = (void*)0;
    return &g_16;
}







static int * func_29(unsigned * p_30, struct S0 p_31, unsigned p_32, unsigned * p_33)
{
    int *l_406 = &g_151.f1.f5;
    unsigned short *l_411 = &g_213.f1.f6;
    int *l_412 = &g_94.f5;
    struct S1 *l_415 = &g_43;
    int **l_416 = &l_406;
    for (g_126 = 0; (g_126 < 21); g_126 = safe_add_func_uint16_t_u_u(g_126, 8))
    {
        int **l_405 = &g_273;
        (*l_405) = p_30;
        return l_406;
    }
    (*l_416) = func_34((((*g_273) = (g_213.f3.f5 != (((*g_47) = (safe_mul_func_uint16_t_u_u(((*l_411) = ((*g_88) < (safe_rshift_func_uint16_t_u_u(0x824EL, 1)))), (*l_406)))) >= ((((*l_412) = 0xD59CFF97L) == (*l_406)) && (*g_273))))) && ((safe_add_func_uint16_t_u_u(((void*)0 != l_415), 0xDD7CL)) && (*l_406))), l_412, (*l_406), p_31.f2);
    if ((0x13F2L == (func_55((*l_412), (0x8BBBL <= 1UL)) & ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x99L, (safe_add_func_uint16_t_u_u(0xB195L, (*g_88))))), p_31.f2)) <= g_213.f8))))
    {
        unsigned char l_429 = 0xF8L;
        int *l_436 = &g_213.f3.f5;
        for (g_151.f3.f6 = 0; (g_151.f3.f6 <= 37); g_151.f3.f6++)
        {
            int *l_432 = &g_213.f1.f5;
            char *l_443 = &g_3;
            char **l_442 = &l_443;
            int *l_445 = &g_151.f3.f5;
            for (g_213.f2 = 0; (g_213.f2 >= 51); g_213.f2 = safe_add_func_uint32_t_u_u(g_213.f2, 9))
            {
                (*g_273) = (safe_mod_func_int8_t_s_s(g_400.f1, g_213.f3.f5));
                if (l_429)
                    break;
                return p_30;
            }
            for (g_151.f1.f6 = (-23); (g_151.f1.f6 == 11); g_151.f1.f6 = safe_add_func_int32_t_s_s(g_151.f1.f6, 9))
            {
                l_432 = (*l_416);
                if ((**l_416))
                {
                    struct S2 **l_433 = &g_150;
                    (*l_433) = &g_213;
                    (*g_273) = (*g_273);
                    for (p_31.f7 = 2; (p_31.f7 <= 20); p_31.f7 = safe_add_func_int32_t_s_s(p_31.f7, 5))
                    {
                        return l_436;
                    }
                    if ((*l_436))
                        break;
                }
                else
                {
                    for (g_16 = (-7); (g_16 >= (-2)); g_16 = safe_add_func_uint16_t_u_u(g_16, 9))
                    {
                        unsigned l_439 = 0x87C23023L;
                        p_31.f0 = ((**l_416) = l_439);
                    }
                    for (g_151.f3.f3 = 0; (g_151.f3.f3 < 32); g_151.f3.f3++)
                    {
                        g_444 = l_442;
                    }
                }
            }
            l_445 = l_445;
            (*l_416) = p_33;
        }
        return l_436;
    }
    else
    {
        for (g_126 = (-29); (g_126 > 19); g_126++)
        {
            struct S2 **l_448 = &g_150;
            int *l_449 = &g_213.f3.f5;
            (*l_448) = &g_151;
            return l_449;
        }
        return p_33;
    }
}







static unsigned * func_34(int p_35, unsigned * p_36, unsigned char p_37, int p_38)
{
    struct S1 *l_42 = &g_43;
    struct S1 **l_41 = &l_42;
    unsigned **l_390 = &g_47;
    unsigned ***l_389 = &l_390;
    char *l_393 = (void*)0;
    char *l_395 = &g_3;
    char **l_394 = &l_395;
    unsigned short *l_398 = &g_151.f3.f6;
    int l_399 = 0x5275EBEAL;
    (*l_41) = (void*)0;
    (*l_389) = func_44(&g_14, g_47);
    (*g_273) = (*g_273);
    (*g_273) = (safe_mul_func_int16_t_s_s(((*g_273) && (((*g_88) = ((g_151.f1.f6 < (l_393 != ((*l_394) = l_393))) || (&g_47 != &p_36))) && ((*l_398) = (safe_sub_func_uint16_t_u_u(((void*)0 != &g_3), ((254UL <= 255UL) ^ (-1L))))))), l_399));
    return p_36;
}







static unsigned ** func_44(unsigned * p_45, unsigned * p_46)
{
    int *l_48 = &g_16;
    unsigned short *l_60 = &g_61;
    struct S1 *l_68 = &g_43;
    struct S0 l_69 = {2266,4294967295UL,298,0x1244L,0xB8CC39B9L,1L,3UL,0UL};
    unsigned short *l_324 = (void*)0;
    unsigned short *l_325 = &l_69.f3;
    (*l_48) = (((void*)0 == &g_16) | (*g_47));
    (*l_68) = func_49((!((*l_48) == ((!(safe_mul_func_int16_t_s_s(func_55(g_2, ((safe_mod_func_uint16_t_u_u(((*l_60) = 65534UL), ((*l_325) = func_62(g_43.f1, ((l_68 == (void*)0) | g_16), (*l_68), l_69, l_69)))) ^ g_89)), (*l_48)))) < (*l_48)))), g_47, g_126);
    (*g_273) = (*l_48);
    for (l_69.f5 = 0; (l_69.f5 >= (-8)); l_69.f5 = safe_sub_func_int32_t_s_s(l_69.f5, 2))
    {
        int *l_350 = (void*)0;
        struct S0 l_376 = {-910,0xADB1BDB2L,232,4UL,9L,-3L,0x6B77L,0xDDEED181L};
        if ((l_60 == l_60))
        {
            unsigned l_359 = 4294967295UL;
            int *l_361 = &g_151.f3.f5;
            if (((*p_46) & func_55(((((*g_88) = ((safe_lshift_func_int8_t_s_s(3L, 7)) > ((((l_350 != p_46) > (*l_48)) == ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_151.f0, 4)), (safe_add_func_int8_t_s_s(g_151.f3.f5, (((safe_add_func_uint8_t_u_u((g_151.f6 < (-1L)), (*l_48))) < l_359) <= (*g_273)))))) < g_213.f1.f6) != 0xD6CE0CBFL) >= (*l_48))) || g_213.f1.f7))) >= l_359) && (*l_48)), (*p_46))))
            {
                int *l_360 = &g_213.f3.f5;
                l_361 = l_360;
            }
            else
            {
                char l_372 = 0x27L;
                struct S1 l_375 = {247,1UL};
                struct S0 l_377 = {2658,0UL,261,65529UL,0x18022487L,-9L,0x28E4L,0x76B4536FL};
                (*l_48) = (safe_sub_func_int8_t_s_s((func_62((safe_sub_func_uint32_t_u_u(1UL, (safe_mul_func_int16_t_s_s(((*g_88) = ((*l_48) = ((safe_sub_func_int32_t_s_s(((253UL & (safe_lshift_func_uint16_t_u_s(l_372, 12))) != (*l_361)), (func_55(g_151.f5, ((*p_45) = ((void*)0 == &l_372))) & ((safe_rshift_func_int8_t_s_u((*l_361), g_151.f3.f2)) | 0xE1L)))) || l_372))), l_69.f7)))), l_372, l_375, l_376, l_377) != g_2), g_2));
                return &g_47;
            }
            for (g_94.f1 = 0; (g_94.f1 < 24); ++g_94.f1)
            {
                struct S2 l_380 = {65535UL,{-2692,0x2840B4C9L,106,65535UL,0x1FC34EC1L,0L,65535UL,4294967295UL},0xA55D6717L,{-902,1UL,417,0xF20DL,-1L,-9L,65531UL,0UL},4294967295UL,0x79L,0x70BBL,0x89C63379L,65535UL};
                struct S2 *l_381 = (void*)0;
                struct S2 *l_382 = &l_380;
            }
        }
        else
        {
            int l_388 = 0xF15A80F2L;
            if (l_388)
                break;
        }
        if ((*g_273))
            continue;
    }
    return &g_47;
}







static struct S1 func_49(unsigned p_50, unsigned * p_51, int p_52)
{
    struct S0 l_335 = {-1412,0xEDAFD709L,331,0x61F3L,-1L,0xE093644EL,0x2E7EL,4294967291UL};
    struct S0 *l_336 = &g_94;
    struct S1 l_344 = {70,0x0764D266L};
    struct S1 *l_345 = &l_344;
    (*g_273) = (safe_lshift_func_uint8_t_u_s(0x23L, 1));
    (*l_336) = l_335;
    (*g_273) = (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(g_89)) == ((*p_51) = ((+(*g_47)) ^ 0x7EAFF6CAL))), ((g_94.f2 | g_167) != (safe_mul_func_uint8_t_u_u((0xBFL > p_50), (((*g_88) > l_335.f0) < g_213.f1.f0)))))), 5));
    (*l_345) = l_344;
    return g_43;
}







static short func_55(unsigned short p_56, unsigned p_57)
{
    int *l_326 = &g_213.f3.f5;
    int **l_327 = &g_273;
    struct S0 *l_328 = &g_94;
    struct S0 **l_329 = &l_328;
    unsigned short *l_332 = &g_151.f3.f6;
    (*l_327) = l_326;
    (*g_273) = 0xD9A2B6C1L;
    (**l_327) = ((((*l_329) = l_328) == &g_94) && (safe_lshift_func_uint16_t_u_s(((*l_332) = ((*g_273) | (*g_273))), (*l_326))));
    return p_56;
}







static unsigned short func_62(unsigned p_63, unsigned p_64, struct S1 p_65, struct S0 p_66, struct S0 p_67)
{
    int l_70 = (-3L);
    short *l_106 = &g_83;
    struct S1 *l_110 = (void*)0;
    unsigned **l_129 = &g_47;
    int **l_136 = (void*)0;
    unsigned short l_161 = 3UL;
    struct S2 l_211 = {0UL,{-874,0x05763FF8L,233,4UL,0x46CE155FL,0x6BB7620FL,65535UL,0x5711A968L},1UL,{1351,0xBB63F96EL,103,0x87A6L,0L,0x9EE90AB4L,0x1E68L,0x90F11B2BL},0x449D27B8L,0x70L,0xB40BL,0x85C477C2L,0x372FL};
    unsigned l_246 = 0x85F25224L;
    unsigned l_297 = 0xB24E1413L;
    if (l_70)
    {
        char l_75 = 0L;
        int *l_141 = (void*)0;
        struct S0 l_215 = {2162,0x90EE7B76L,119,0x23DBL,8L,0x30DE6A78L,0xC8BCL,1UL};
        unsigned char *l_263 = &g_167;
        struct S2 *l_266 = (void*)0;
        int *l_267 = (void*)0;
        int *l_268 = (void*)0;
        for (p_67.f5 = 2; (p_67.f5 == 8); p_67.f5++)
        {
            short *l_91 = &g_89;
            int *l_98 = &g_94.f5;
            unsigned short *l_103 = &g_87;
            short **l_107 = &l_106;
            struct S1 *l_142 = &g_43;
            if (g_3)
            {
                short *l_80 = (void*)0;
                short *l_81 = (void*)0;
                short *l_82 = &g_83;
                unsigned short *l_84 = (void*)0;
                unsigned short *l_85 = (void*)0;
                unsigned short *l_86 = &g_87;
                short **l_90 = &g_88;
                int *l_93 = &g_16;
                int **l_92 = &l_93;
                g_43.f0 = (safe_mul_func_uint16_t_u_u((l_75 >= (safe_sub_func_uint16_t_u_u(g_16, (((safe_add_func_int32_t_s_s((p_67.f0 = l_75), l_75)) == (p_67.f2 < ((*l_82) = 0xA9A6L))) || ((*l_86) = p_66.f6))))), (((*l_90) = g_88) != l_91)));
                (*l_92) = &g_16;
            }
            else
            {
                struct S0 *l_95 = &g_94;
                (*l_95) = g_94;
            }
            if (((((safe_lshift_func_int8_t_s_s(((((((*l_98) = g_83) != (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_103) = p_63), (*g_88))), p_65.f1))) <= p_66.f6) >= (safe_sub_func_uint32_t_u_u((((*l_107) = l_106) == &g_89), (*g_47)))) && (safe_mod_func_int8_t_s_s(l_75, g_83))), p_67.f5)) >= 9UL) ^ 0x891BC53CL) > l_70))
            {
                short l_131 = 0x9E1DL;
                int l_132 = 0L;
                if (g_94.f5)
                    break;
                (*l_98) = p_67.f4;
                if (p_67.f6)
                {
                    struct S1 **l_111 = &l_110;
                    g_112 = ((*l_111) = l_110);
                }
                else
                {
                    struct S1 **l_116 = &g_112;
                    int l_123 = 1L;
                    for (p_63 = 8; (p_63 >= 47); ++p_63)
                    {
                        int **l_115 = &l_98;
                        (*l_115) = l_98;
                        if (p_67.f4)
                            continue;
                    }
                    (*l_98) = p_67.f2;
                    (*l_116) = &p_65;
                    for (p_66.f7 = 0; (p_66.f7 >= 58); p_66.f7 = safe_add_func_int16_t_s_s(p_66.f7, 2))
                    {
                        int *l_130 = &l_70;
                        (*l_98) = ((safe_add_func_uint32_t_u_u((((((safe_add_func_uint8_t_u_u(l_123, (p_64 | (safe_mul_func_int16_t_s_s(g_126, (6UL || (g_94.f1 > (*l_98)))))))) ^ ((safe_rshift_func_int8_t_s_s((((&g_47 == l_129) != ((*l_130) = (-8L))) && p_67.f1), 7)) == l_75)) ^ p_66.f5) < 5L) < l_131), l_131)) >= l_75);
                        (*l_130) = l_75;
                    }
                }
                (*l_98) = l_132;
            }
            else
            {
                int **l_133 = &l_98;
                int l_144 = (-1L);
                unsigned l_146 = 0xBB27750EL;
                if ((l_133 != &l_98))
                {
                    for (g_94.f4 = 0; (g_94.f4 < 20); ++g_94.f4)
                    {
                        int ***l_137 = (void*)0;
                        int ***l_138 = (void*)0;
                        l_136 = l_136;
                    }
                    for (p_66.f3 = 0; (p_66.f3 >= 58); p_66.f3 = safe_add_func_int8_t_s_s(p_66.f3, 6))
                    {
                        struct S1 **l_143 = &l_110;
                        (*l_133) = l_141;
                        (*l_143) = l_142;
                        l_144 = (p_66.f5 < ((*l_103) = g_94.f6));
                    }
                }
                else
                {
                    return p_67.f2;
                }
                (*l_133) = &g_16;
                if (g_43.f1)
                {
                    (*l_133) = (void*)0;
                }
                else
                {
                    int l_145 = 0L;
                    int *l_147 = (void*)0;
                    p_66.f0 = l_145;
                    g_94.f0 = ((&g_14 == (void*)0) ^ (l_144 = l_146));
                    (*l_133) = (*l_133);
                }
            }
        }
        for (g_14 = 0; (g_14 == 36); g_14 = safe_add_func_int16_t_s_s(g_14, 3))
        {
            int *l_152 = &g_151.f1.f5;
            g_150 = g_150;
            if (g_43.f0)
                break;
            (*l_152) = 0xC2F3C20DL;
            for (p_66.f5 = 0; (p_66.f5 != (-27)); --p_66.f5)
            {
                unsigned l_157 = 1UL;
                unsigned short *l_158 = &g_151.f3.f6;
                unsigned char *l_166 = &g_167;
                unsigned short *l_168 = &g_151.f1.f3;
                unsigned short *l_169 = (void*)0;
                unsigned short *l_170 = (void*)0;
                if ((safe_mul_func_int16_t_s_s(((p_67.f3 = ((*l_168) = ((((*l_158) = l_157) || (*g_88)) != ((*l_166) = (safe_mul_func_uint16_t_u_u((2L | (l_161 > p_66.f7)), (safe_rshift_func_uint16_t_u_u((g_151.f0 = (safe_mod_func_uint32_t_u_u((g_151.f1.f2 = ((p_67.f5 || g_94.f5) == p_64)), (-1L)))), 9)))))))) < g_151.f1.f7), g_3)))
                {
                    struct S0 *l_174 = &g_151.f1;
                    struct S0 **l_173 = &l_174;
                    (*l_152) = (safe_mul_func_uint8_t_u_u(((void*)0 != &g_14), ((((*l_152) & g_151.f3.f1) <= p_67.f0) < ((void*)0 != &p_67))));
                    (*l_173) = &p_67;
                }
                else
                {
                    int **l_175 = &l_141;
                    (*l_175) = l_141;
                    (*g_150) = (*g_150);
                }
            }
        }
        if ((g_176 | (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0xF792L, (g_151.f1.f5 | (safe_lshift_func_uint8_t_u_s(0x75L, 2))))), p_65.f1)), 2))))
        {
            int *l_185 = &g_94.f5;
            int **l_186 = &l_185;
            struct S1 l_187 = {63,0xDD4F9EB4L};
            (*l_185) = g_83;
            (*l_186) = &g_16;
            l_187 = p_65;
        }
        else
        {
            unsigned char l_200 = 247UL;
            struct S0 l_214 = {73,5UL,376,65535UL,0xE06837CBL,0x35DCCD6DL,0x89F7L,0xB1BDB072L};
            int l_229 = 0xCF226FB7L;
            int **l_247 = &l_141;
            g_151.f3.f5 = g_151.f2;
            for (g_151.f3.f4 = 0; (g_151.f3.f4 <= 12); g_151.f3.f4 = safe_add_func_uint32_t_u_u(g_151.f3.f4, 4))
            {
                int **l_203 = &l_141;
                for (g_151.f6 = 0; (g_151.f6 == 25); g_151.f6 = safe_add_func_int8_t_s_s(g_151.f6, 2))
                {
                    int ***l_204 = &l_136;
                    if ((safe_add_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_200, p_66.f6)), 7)), g_151.f3.f1)) || p_64) != ((safe_mod_func_int16_t_s_s((p_66.f2 != (((*l_204) = l_203) == &l_141)), 4L)) || l_200)) > p_64), l_70)))
                    {
                        int *l_207 = &l_70;
                        int *l_208 = (void*)0;
                        p_67.f5 = (g_43.f0 = (p_65.f0 = ((*l_207) = (safe_sub_func_int16_t_s_s((*g_88), g_151.f3.f2)))));
                    }
                    else
                    {
                        struct S0 *l_210 = &g_94;
                        struct S0 **l_209 = &l_210;
                        struct S2 *l_212 = &g_213;
                        (*l_209) = &p_66;
                        (*l_212) = (l_211 = l_211);
                        g_112 = l_110;
                        (*l_203) = (**l_204);
                    }
                }
            }
            if (p_67.f0)
            {
                unsigned char *l_220 = &g_176;
                int *l_223 = &g_213.f1.f5;
                struct S1 *l_224 = &g_43;
                l_215 = l_214;
                g_151.f3.f5 = ((safe_add_func_uint32_t_u_u((*g_47), g_94.f1)) >= ((safe_rshift_func_uint8_t_u_u(((*l_220) = (l_200 <= l_200)), 6)) | ((safe_add_func_uint16_t_u_u((p_67.f6 = (p_67.f7 || ((*l_223) = 0x0B466F09L))), (g_213.f3.f5 <= l_211.f3.f2))) | ((*g_47) < p_67.f0))));
                (*l_224) = p_65;
                for (g_83 = 0; (g_83 > (-27)); g_83--)
                {
                    int **l_234 = &l_141;
                    (*l_223) = ((g_213.f3.f0 >= ((((safe_lshift_func_int8_t_s_s(l_214.f7, 3)) < l_229) || 0xC9L) | (((g_151.f3.f1 = ((**l_129) = 0x15554DE5L)) || l_229) > (g_151.f3.f0 > (safe_sub_func_int16_t_s_s((p_66.f1 && p_67.f6), p_66.f6)))))) <= p_67.f5);
                    (*l_234) = &l_229;
                    (**l_234) = g_151.f4;
                }
            }
            else
            {
                unsigned short l_245 = 0x66ACL;
                int ***l_248 = &l_136;
                int *l_250 = &l_211.f3.f5;
                int **l_249 = &l_250;
                g_94.f5 = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(0x7CADE12AL, ((l_246 = (safe_lshift_func_int8_t_s_s(((((p_64 || (*g_88)) > ((l_200 != 0x61L) && (safe_add_func_int8_t_s_s((l_245 || p_67.f7), ((*g_47) == g_151.f7))))) == g_167) | l_229), p_66.f5))) == 0x8FL))), p_63)), p_66.f1));
                (*l_248) = l_247;
                (*l_249) = ((*l_136) = (**l_248));
            }
            (*l_247) = (void*)0;
        }
        g_94.f5 = (safe_sub_func_uint32_t_u_u((((*g_47) && (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((0xC8L <= ((p_67.f3 >= ((0x88275454L & l_211.f1.f0) != (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((((*l_263) = g_151.f2) > (!((safe_add_func_int16_t_s_s((l_266 == &l_211), 0UL)) <= 0x31L))), (*g_88))), g_94.f4)), g_151.f8)))) && g_151.f2)) <= (*g_47)), 0x762DA659L)), p_66.f1))) <= g_94.f5), 0x4F7F432AL));
    }
    else
    {
        int *l_269 = &g_213.f3.f5;
        int **l_270 = &l_269;
        unsigned char *l_296 = &g_167;
        struct S1 l_300 = {86,0x4181E067L};
        struct S0 *l_304 = &g_151.f1;
        char *l_323 = &g_151.f5;
        (*l_270) = l_269;
        for (g_176 = 8; (g_176 < 9); g_176 = safe_add_func_int8_t_s_s(g_176, 1))
        {
            unsigned char l_284 = 4UL;
            unsigned short *l_295 = &l_211.f3.f3;
            int l_299 = 9L;
        }
        (*g_273) = (((*l_323) = (**l_270)) & (p_66.f0 <= g_213.f1.f4));
    }
    return g_176;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1.f0, "g_151.f1.f0", print_hash_value);
    transparent_crc(g_151.f1.f1, "g_151.f1.f1", print_hash_value);
    transparent_crc(g_151.f1.f2, "g_151.f1.f2", print_hash_value);
    transparent_crc(g_151.f1.f3, "g_151.f1.f3", print_hash_value);
    transparent_crc(g_151.f1.f4, "g_151.f1.f4", print_hash_value);
    transparent_crc(g_151.f1.f5, "g_151.f1.f5", print_hash_value);
    transparent_crc(g_151.f1.f6, "g_151.f1.f6", print_hash_value);
    transparent_crc(g_151.f1.f7, "g_151.f1.f7", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_151.f3.f0, "g_151.f3.f0", print_hash_value);
    transparent_crc(g_151.f3.f1, "g_151.f3.f1", print_hash_value);
    transparent_crc(g_151.f3.f2, "g_151.f3.f2", print_hash_value);
    transparent_crc(g_151.f3.f3, "g_151.f3.f3", print_hash_value);
    transparent_crc(g_151.f3.f4, "g_151.f3.f4", print_hash_value);
    transparent_crc(g_151.f3.f5, "g_151.f3.f5", print_hash_value);
    transparent_crc(g_151.f3.f6, "g_151.f3.f6", print_hash_value);
    transparent_crc(g_151.f3.f7, "g_151.f3.f7", print_hash_value);
    transparent_crc(g_151.f4, "g_151.f4", print_hash_value);
    transparent_crc(g_151.f5, "g_151.f5", print_hash_value);
    transparent_crc(g_151.f6, "g_151.f6", print_hash_value);
    transparent_crc(g_151.f7, "g_151.f7", print_hash_value);
    transparent_crc(g_151.f8, "g_151.f8", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_213.f1.f0, "g_213.f1.f0", print_hash_value);
    transparent_crc(g_213.f1.f1, "g_213.f1.f1", print_hash_value);
    transparent_crc(g_213.f1.f2, "g_213.f1.f2", print_hash_value);
    transparent_crc(g_213.f1.f3, "g_213.f1.f3", print_hash_value);
    transparent_crc(g_213.f1.f4, "g_213.f1.f4", print_hash_value);
    transparent_crc(g_213.f1.f5, "g_213.f1.f5", print_hash_value);
    transparent_crc(g_213.f1.f6, "g_213.f1.f6", print_hash_value);
    transparent_crc(g_213.f1.f7, "g_213.f1.f7", print_hash_value);
    transparent_crc(g_213.f2, "g_213.f2", print_hash_value);
    transparent_crc(g_213.f3.f0, "g_213.f3.f0", print_hash_value);
    transparent_crc(g_213.f3.f1, "g_213.f3.f1", print_hash_value);
    transparent_crc(g_213.f3.f2, "g_213.f3.f2", print_hash_value);
    transparent_crc(g_213.f3.f3, "g_213.f3.f3", print_hash_value);
    transparent_crc(g_213.f3.f4, "g_213.f3.f4", print_hash_value);
    transparent_crc(g_213.f3.f5, "g_213.f3.f5", print_hash_value);
    transparent_crc(g_213.f3.f6, "g_213.f3.f6", print_hash_value);
    transparent_crc(g_213.f3.f7, "g_213.f3.f7", print_hash_value);
    transparent_crc(g_213.f4, "g_213.f4", print_hash_value);
    transparent_crc(g_213.f5, "g_213.f5", print_hash_value);
    transparent_crc(g_213.f6, "g_213.f6", print_hash_value);
    transparent_crc(g_213.f7, "g_213.f7", print_hash_value);
    transparent_crc(g_213.f8, "g_213.f8", print_hash_value);
    transparent_crc(g_400.f0, "g_400.f0", print_hash_value);
    transparent_crc(g_400.f1, "g_400.f1", print_hash_value);
    transparent_crc(g_400.f2, "g_400.f2", print_hash_value);
    transparent_crc(g_400.f3, "g_400.f3", print_hash_value);
    transparent_crc(g_400.f4, "g_400.f4", print_hash_value);
    transparent_crc(g_400.f5, "g_400.f5", print_hash_value);
    transparent_crc(g_400.f6, "g_400.f6", print_hash_value);
    transparent_crc(g_400.f7, "g_400.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
