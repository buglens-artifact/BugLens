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
   short f1;
   unsigned f2;
   short f3;
   int f4;
   unsigned short f5;
   int f6;
};


static int g_2 = 0x61F66568L;
static unsigned g_27 = 0x41CE3CB5L;
static struct S0 g_28 = {0x7C8B166CL,-1L,1UL,-1L,0L,9UL,2L};
static unsigned *g_36 = &g_28.f0;
static char g_53 = 0x7EL;
static char g_55 = 0x9FL;
static char g_58 = 0xE2L;
static char g_61 = 0x0DL;
static unsigned short g_75 = 0xB3AAL;
static int g_87 = 0x4CAD7069L;
static int *g_86 = &g_87;
static struct S0 g_91 = {0UL,5L,1UL,1L,0xFD71F6E6L,0UL,0x22041F5FL};
static unsigned **g_95 = &g_36;
static unsigned g_116 = 0x3529ADFFL;
static unsigned g_127 = 0xA8FE19BEL;
static struct S0 g_136 = {8UL,0xE389L,4294967293UL,-8L,-4L,0xCB4CL,0L};
static unsigned char g_162 = 255UL;
static short *g_182 = &g_91.f3;
static unsigned char g_188 = 0UL;
static struct S0 g_255 = {0xD9DD0687L,-4L,0x431BED74L,0L,0x06565B60L,65535UL,-10L};
static int *g_262 = &g_255.f6;
static short **g_311 = &g_182;
static short ***g_310 = &g_311;
static unsigned g_365 = 4294967289UL;
static unsigned g_369 = 4294967287UL;
static struct S0 *g_426 = &g_136;
static char *g_454 = (void*)0;
static char **g_453 = &g_454;
static int *g_493 = &g_136.f6;
static unsigned short *g_530 = (void*)0;
static unsigned short **g_529 = &g_530;
static unsigned g_561 = 0xEE1FDABAL;
static unsigned *g_567 = &g_116;
static unsigned **g_566 = &g_567;
static unsigned ***g_642 = &g_95;
static unsigned ****g_641 = &g_642;



static int func_1(void);
static short func_11(short p_12, short p_13);
static unsigned short func_16(unsigned short p_17, unsigned short p_18, short p_19, unsigned char p_20);
static unsigned short func_21(int p_22, unsigned p_23, struct S0 p_24, unsigned p_25);
static unsigned func_31(unsigned * p_32, unsigned * p_33, unsigned char p_34, struct S0 p_35);
static unsigned * func_37(unsigned * p_38, short p_39, unsigned * p_40);
static unsigned * func_41(unsigned short p_42, unsigned p_43, unsigned * p_44);
static struct S0 func_46(char p_47);
static int * func_64(unsigned * p_65, char p_66, int * p_67, unsigned * p_68, char * p_69);
static unsigned * func_70(unsigned char p_71, unsigned p_72, char p_73);
static int func_1(void)
{
    short l_599 = 0xD5F1L;
    for (g_2 = 26; (g_2 != (-14)); --g_2)
    {
        unsigned *l_26 = &g_27;
        int l_45 = 0L;
        struct S0 l_600 = {0xA8B92343L,0xF196L,4294967291UL,1L,1L,0x9C94L,0x4EE37C26L};
        unsigned short *l_632 = &g_75;
        int *l_647 = &g_87;
        (*l_647) = (((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((0xF4L & g_2), 6)), (safe_rshift_func_int16_t_s_u(func_11((safe_rshift_func_uint16_t_u_u(((*l_632) = func_16((g_2 < 8UL), ((*l_632) = func_21(g_2, ((*l_26) = g_2), g_28, (l_600.f6 = (safe_mul_func_uint16_t_u_u((func_31(g_36, func_37(func_41(l_45, g_28.f3, g_36), g_28.f3, g_262), l_599, l_600) <= l_599), l_600.f1))))), l_599, l_599)), l_600.f0)), l_599), 5)))) >= g_365) & g_28.f3);


        ;
        ;
        ;

        return (*l_647);
    }
    return g_255.f5;
}







static short func_11(short p_12, short p_13)
{
    unsigned char l_638 = 1UL;
    struct S0 *l_639 = &g_255;
    unsigned ****l_640 = (void*)0;
    unsigned *****l_643 = &g_641;
    int l_644 = 0xD262EE9CL;
    char *l_645 = &g_58;
    int **l_646 = &g_493;
    (*l_646) = &l_644;

    ;
    (*l_646) = (*l_646);
    return p_13;


}







static unsigned short func_16(unsigned short p_17, unsigned short p_18, short p_19, unsigned char p_20)
{
    struct S0 **l_633 = &g_426;
    struct S0 ***l_634 = &l_633;
    int l_635 = 0x62BA7E05L;
    (*l_634) = l_633;
    return l_635;
}







static unsigned short func_21(int p_22, unsigned p_23, struct S0 p_24, unsigned p_25)
{
    int *l_630 = &g_91.f6;
    int **l_631 = &l_630;
    (*g_493) = (p_22 = (*g_493));
    l_630 = &g_87;

    ;
    (*l_631) = l_630;
    return p_22;
}







static unsigned func_31(unsigned * p_32, unsigned * p_33, unsigned char p_34, struct S0 p_35)
{
    unsigned **l_603 = &g_567;
    struct S0 **l_615 = &g_426;
    int l_616 = 8L;
    int **l_627 = &g_262;
    unsigned short *l_628 = (void*)0;
    unsigned short *l_629 = &g_136.f5;
    for (g_75 = 0; (g_75 > 39); ++g_75)
    {
        unsigned char l_604 = 9UL;
        g_566 = l_603;
        if (p_34)
            break;
        return l_604;
    }
    l_616 = (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((-3L), (safe_mul_func_uint16_t_u_u(((l_615 == l_615) >= ((**g_566) = l_616)), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_616, (safe_add_func_int16_t_s_s(0xA0F0L, (safe_rshift_func_uint16_t_u_s(((*l_629) = (l_616 || (safe_add_func_uint32_t_u_u(((void*)0 == l_627), (*g_493))))), l_616)))))), g_255.f5)))))) < p_35.f0), p_35.f4)), g_55)) || 0xA0AEL), p_35.f3)) && 0xA2CD0A92L) > p_35.f1);
    return p_35.f3;
}







static unsigned * func_37(unsigned * p_38, short p_39, unsigned * p_40)
{
    char *l_305 = &g_61;
    char *l_306 = &g_61;
    short ***l_312 = &g_311;
    int l_318 = 0x1F9CA259L;
    struct S0 *l_344 = &g_255;
    struct S0 *l_396 = &g_255;
    int l_404 = 0xFACB78F7L;
    unsigned *l_420 = &g_28.f2;
    int l_477 = 8L;
    int *l_488 = &g_87;
    short ****l_555 = (void*)0;
    unsigned *l_565 = &g_127;
    unsigned **l_564 = &l_565;
    int l_591 = 0x8BC1A63AL;
    unsigned short l_594 = 65535UL;
    unsigned char l_596 = 1UL;
    if ((g_136.f6 || (l_305 != (l_306 = &g_61))))
    {
        int l_309 = 1L;
        short ****l_313 = &l_312;
        unsigned *l_323 = &g_116;
        unsigned **l_324 = &l_323;
        unsigned *l_325 = (void*)0;
        unsigned *l_326 = &g_116;
        unsigned char *l_332 = &g_162;
        int *l_341 = &g_255.f6;
        short *l_364 = &g_91.f1;
        char **l_385 = (void*)0;
        if ((l_309 <= ((*l_326) = ((g_310 == ((*l_313) = l_312)) == (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_309, l_318)), (safe_sub_func_int8_t_s_s(p_39, (safe_add_func_uint8_t_u_u((!(((*l_324) = l_323) == (void*)0)), l_318))))))))))
        {
            int **l_327 = &g_86;
            short l_366 = 5L;
            unsigned char l_375 = 0x2AL;
            (*l_327) = (void*)0;

            ;
            if ((!4L))
            {
                short l_331 = 0x2365L;
                for (g_91.f4 = 0; (g_91.f4 < (-1)); --g_91.f4)
                {
                    struct S0 *l_330 = &g_136;
                    unsigned char **l_333 = (void*)0;
                    unsigned char **l_334 = (void*)0;
                    unsigned char **l_335 = (void*)0;
                    unsigned char **l_336 = &l_332;
                    (*l_330) = g_255;
                    if (l_331)
                        continue;
                    (*g_262) = (l_331 > (((*l_336) = l_332) == &g_162));
                }
                (*l_327) = func_70(((*l_332) = (safe_mod_func_int8_t_s_s(g_136.f1, (-10L)))), g_136.f0, (safe_rshift_func_int16_t_s_s(p_39, 15)));

                ;
            }
            else
            {
                char *l_349 = &g_55;
                int l_363 = 8L;
                unsigned short *l_371 = (void*)0;
                unsigned short **l_370 = &l_371;
                struct S0 l_373 = {8UL,1L,1UL,4L,0xC0D2D930L,7UL,0xE12CC2AEL};
                l_341 = &g_87;

                ;
                if (((*g_262) = (g_28.f1 != (((safe_div_func_uint32_t_u_u((l_344 == (void*)0), (+(safe_add_func_uint8_t_u_u(g_53, (safe_mul_func_uint16_t_u_u((((*l_326) = 4294967288UL) > ((((*l_306) = ((l_332 != l_349) > p_39)) | (((*l_341) = p_39) & (*g_262))) || (-2L))), p_39))))))) < p_39) ^ p_39))))
                {
                    int *l_350 = (void*)0;
                    int **l_351 = (void*)0;
                    int **l_352 = &l_341;
                    unsigned short ***l_372 = &l_370;
                    (*l_352) = ((*l_327) = l_350);

                    ;
                    if ((safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != &g_36), (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((*g_262) <= l_363), (p_39 == 5UL))), (l_364 != ((*g_311) = (**g_310))))))), g_365)) == l_366), (-1L))))
                    {
                        unsigned l_367 = 4UL;
                        l_367 = (*g_262);
                        (*g_262) = p_39;
                    }
                    else
                    {
                        short l_368 = 0L;
                        (*l_327) = &l_363;

                        ;
                        l_318 = ((p_39 || p_39) != l_368);
                        (**l_327) = g_369;
                        (*l_344) = func_46(g_91.f4);

                        ;
                    }

                    ;
                    (*l_372) = l_370;
                    (*l_344) = l_373;
                }
                else
                {
                    unsigned short *l_374 = &l_373.f5;
                    int l_378 = (-8L);
                    (*g_262) = ((((*l_374) = g_28.f6) <= l_375) > ((*l_341) = (l_373.f4 > (safe_div_func_int32_t_s_s((-10L), l_378)))));
                    (*l_327) = &l_363;

                    ;
                    (*l_327) = p_40;

                    ;
                    (*l_341) = (0L == (g_91.f4 | (((safe_mod_func_int32_t_s_s(((*g_86) = (((p_39 != (safe_add_func_uint16_t_u_u(((*l_341) & (l_385 == (void*)0)), (safe_sub_func_int8_t_s_s(((!l_318) <= g_136.f3), (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((p_39 >= g_91.f6), p_39)), l_318))))))) == (*g_262)) <= 65526UL)), 0x39B39C02L)) ^ 0x3FL) >= (-4L))));
                }

                ;
                ;
                (*l_327) = &l_363;

                ;
            }


            ;
        }
        else
        {
            int **l_392 = &g_86;
            (*g_262) = (g_162 == ((void*)0 == &l_332));
            (*l_392) = &g_2;

            ;
        }


        ;
    }
    else
    {
        struct S0 **l_395 = &l_344;
        unsigned *l_397 = &g_28.f2;
        int **l_398 = (void*)0;
        struct S0 *l_399 = &g_136;
        g_262 = p_38;

        ;
        (*l_399) = ((*l_396) = (*l_344));
    }

    ;
    if (l_318)
    {
        unsigned short *l_405 = &g_75;
        int l_410 = 0x00FBA2ECL;
        int *l_411 = &l_318;
        struct S0 *l_427 = (void*)0;
        unsigned *l_464 = &g_136.f0;
        struct S0 l_494 = {0UL,0L,0UL,0L,0x30E477EDL,65535UL,1L};
        int *l_532 = (void*)0;
        l_318 = (safe_mul_func_uint16_t_u_u((p_39 | ((((*l_305) = ((-1L) <= 9L)) ^ p_39) != (safe_add_func_int8_t_s_s(p_39, l_318)))), ((*l_405) = (l_404 = 65531UL))));
        if (((*l_411) = (l_404 = (((safe_lshift_func_int16_t_s_u(p_39, p_39)) <= (safe_sub_func_int8_t_s_s((!(l_410 = p_39)), l_404))) >= p_39))))
        {
            int **l_412 = &l_411;
            char *l_416 = &g_55;
            unsigned *l_463 = &g_127;
            (*l_412) = func_70((*l_411), g_87, g_91.f5);

            ;
            ;
            if (((void*)0 != &g_255))
            {
                char *l_417 = &g_61;
                struct S0 *l_424 = (void*)0;
                (*l_412) = &l_410;

                ;
                for (g_61 = 0; (g_61 >= 10); g_61 = safe_add_func_int32_t_s_s(g_61, 3))
                {
                    int *l_415 = &g_28.f6;
                    int l_421 = 0xF3BDAC99L;
                    (*l_412) = &g_87;

                    ;
                    (*l_412) = func_64(func_64(func_64((*g_95), p_39, l_415, (*g_95), l_416), g_91.f1, &g_2, l_411, l_417), g_91.f1, l_415, p_40, &g_53);

                    ;
                    for (g_91.f4 = (-20); (g_91.f4 > (-29)); g_91.f4--)
                    {
                        return l_420;


                    }
                    l_421 = (*l_411);
                }

                ;
                ;
                for (g_55 = 0; (g_55 < 4); g_55 = safe_add_func_int16_t_s_s(g_55, 5))
                {
                    struct S0 **l_425 = (void*)0;
                    if (p_39)
                        break;
                    g_426 = l_424;

                    ;
                    (*l_344) = g_28;
                    l_404 = p_39;
                }

                ;
                (*l_396) = g_136;
            }
            else
            {
                short l_438 = 0x6755L;
                int l_452 = 0xCF447D91L;
                int *l_456 = &g_28.f6;
                if ((*g_86))
                {
                    struct S0 **l_428 = &l_344;
                    struct S0 **l_429 = &l_427;
                    int l_436 = (-5L);
                    int *l_437 = &g_87;
                    (*l_429) = ((*l_428) = (g_426 = l_427));

                    ;
                    ;
                    (*l_412) = &l_410;

                    ;
                    (*l_437) = (safe_add_func_int8_t_s_s((l_404 = (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((*l_411) = (*l_411)), p_39)), 4294967290UL))), l_436));
                    (**l_412) = (**l_412);
                }
                else
                {
                    unsigned char l_445 = 0x7CL;
                    struct S0 *l_447 = &g_255;
                    char ***l_455 = &g_453;
                    if ((**l_412))
                    {
                        unsigned *l_446 = &g_91.f0;
                        struct S0 **l_448 = &l_396;
                        g_262 = p_38;

                        ;
                        (*l_448) = l_447;
                        (*l_412) = &g_2;

                        ;
                    }
                    else
                    {
                        int *l_449 = &g_255.f6;
                        (*l_412) = l_449;

                        ;
                        (*l_449) = p_39;
                        (*l_412) = p_40;
                    }

                    ;
                    if (p_39)
                    {
                        g_255.f6 = p_39;
                        (*l_344) = func_46(g_61);

                        ;
                    }
                    else
                    {
                        struct S0 **l_450 = (void*)0;
                        struct S0 **l_451 = &l_344;
                        (*l_412) = &g_2;

                        ;
                        (*l_451) = l_344;
                        l_452 = (l_312 != (void*)0);
                    }

                    ;
                    (*l_455) = g_453;
                }

                ;
                ;
                ;
                ;
                if ((l_452 = (*g_86)))
                {
                    (*l_412) = (void*)0;

                    ;
                }
                else
                {
                    (*l_412) = l_456;

                    ;
                    (*l_412) = &g_87;

                    ;
                    (*l_412) = p_40;

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
            g_86 = ((*l_412) = &g_87);

            ;
            ;
        }
        else
        {
            short l_480 = 0x69D8L;
            int l_483 = 0xEF1F7B18L;
            int *l_491 = &g_255.f6;
            l_404 = p_39;
            for (g_91.f6 = 12; (g_91.f6 <= (-19)); g_91.f6 = safe_sub_func_uint16_t_u_u(g_91.f6, 6))
            {
                unsigned char *l_469 = &g_188;
                int l_472 = 0xBACB734EL;
                int *l_489 = &l_318;
                struct S0 l_518 = {0x96A58D8CL,0L,0xCE8A9F10L,0L,1L,0x06C1L,1L};
                if ((((*l_469) = (0L && (safe_mul_func_int8_t_s_s((p_39 < l_404), (p_39 && p_39))))) | ((safe_lshift_func_int8_t_s_s(l_472, (safe_add_func_int32_t_s_s((~((safe_mul_func_uint16_t_u_u(p_39, 6L)) || (g_136.f3 || l_477))), (*l_411))))) != l_472)))
                {
                    int *l_484 = &l_410;
                    int **l_485 = &l_411;
                    (*l_484) = ((safe_mul_func_int16_t_s_s(l_480, ((safe_mod_func_int8_t_s_s(0L, (g_136.f3 & 0x9509L))) && (((*l_405) = l_472) == (l_318 = (l_483 = ((&l_411 == (void*)0) | p_39))))))) || g_136.f6);
                    (*l_485) = &l_318;

                    ;
                    if ((*l_411))
                        continue;
                    (*l_485) = &l_472;

                    ;
                }
                else
                {
                    int **l_497 = (void*)0;
                    int **l_498 = (void*)0;
                    int **l_499 = &l_488;
                    if (l_480)
                    {
                        int *l_486 = &g_87;
                        int **l_487 = &l_486;
                        (*l_487) = l_486;
                        g_262 = (*l_487);

                        ;
                        l_488 = &l_472;

                        ;
                        (*l_486) = ((((*l_469) = (*l_411)) | g_75) || 0x07B2179AL);
                    }
                    else
                    {
                        (*l_411) = (&g_453 == &g_453);
                        return (*g_95);


                    }

                    ;
                    ;
                    l_489 = p_38;

                    ;
                    if (((*l_488) = (((*l_411) = p_39) >= g_365)))
                    {
                        int **l_490 = &l_489;
                        l_488 = p_38;

                        ;
                        l_491 = ((*l_490) = p_40);

                        ;
                        (**l_490) = p_39;
                        g_262 = &g_87;
                    }
                    else
                    {
                        unsigned *l_492 = &g_116;
                        int **l_495 = (void*)0;
                        int *l_496 = (void*)0;
                        (*l_411) = (((*l_405) = (1UL | ((*l_492) = (*l_488)))) != (*l_411));
                        g_493 = p_40;

                        ;
                        (*g_426) = l_494;
                        l_496 = p_38;

                        ;
                    }

                    ;
                    ;
                    (*l_499) = &g_87;

                    ;
                }

                ;
                ;
                for (g_136.f3 = 23; (g_136.f3 < 13); g_136.f3--)
                {
                    int l_506 = 0x9245AE2BL;
                    short ****l_516 = &l_312;
                    int **l_517 = &l_411;
                    (*l_488) = ((safe_sub_func_int8_t_s_s((((*g_493) = (safe_mod_func_uint8_t_u_u(((p_39 && l_506) != p_39), g_2))) & ((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s((((p_39 == p_39) || (safe_mod_func_int16_t_s_s((l_516 == (void*)0), p_39))) < 0x444AL), g_55)))), 3L)), 1UL)) > 1UL)), 0L)) | 0x4BL);
                    (*l_517) = p_40;

                    ;
                    (*l_344) = l_518;
                    for (g_255.f5 = 0; (g_255.f5 == 26); ++g_255.f5)
                    {
                        struct S0 *l_523 = &g_28;
                        unsigned short **l_528 = (void*)0;
                        unsigned char *l_531 = &g_162;
                        (**l_517) = (safe_lshift_func_int16_t_s_s((p_39 = ((~0x56L) > ((*l_531) = ((*l_469) = (((&g_136 != l_523) & 0xE908L) == (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0UL, (p_39 && ((*l_405) = ((p_39 <= (l_528 != g_529)) > 0x3CL))))), 4294967295UL))))))), 13));
                    }
                }

                ;
                l_532 = (l_411 = &l_483);

                ;
                ;
            }

            ;
            ;
            ;
            for (g_58 = 9; (g_58 >= 1); --g_58)
            {
                int **l_535 = (void*)0;
                int **l_536 = &g_493;
                (*l_536) = &g_87;

                ;
                if (p_39)
                    continue;
            }

            ;
        }

        ;

        ;
        ;

        (*l_396) = l_494;
        (*l_396) = g_255;
    }
    else
    {
        char l_543 = 0x24L;
        unsigned ***l_547 = &g_95;
        unsigned ****l_546 = &l_547;
        short ****l_554 = (void*)0;
        unsigned char l_560 = 1UL;
        (*l_488) = (((*g_493) = (safe_mod_func_int8_t_s_s((*l_488), ((safe_lshift_func_int16_t_s_s(0xE66CL, 9)) & (safe_lshift_func_uint16_t_u_u((((*l_488) <= l_543) <= (safe_mul_func_uint8_t_u_u((((*l_546) = &g_95) != (void*)0), p_39))), (p_38 == &g_127))))))) <= p_39);
        for (g_255.f0 = 22; (g_255.f0 <= 24); ++g_255.f0)
        {
            char l_556 = 0x3DL;
            short l_557 = 0xEB3AL;
            short ****l_558 = (void*)0;
            unsigned char l_559 = 1UL;
            int **l_562 = (void*)0;
            int **l_563 = &g_86;
            (*l_563) = func_70((1L == (safe_add_func_uint32_t_u_u(((p_39 || p_39) < ((safe_lshift_func_uint8_t_u_s((((l_556 = (l_554 != l_555)) == p_39) != ((1L <= l_557) | (((*l_488) = ((void*)0 != l_558)) || l_559))), 0)) && p_39)), l_560))), l_559, g_561);

            ;
            (*g_426) = func_46(p_39);

            ;
        }
    }

    ;
    ;
    ;
    if ((l_564 == g_566))
    {
        int **l_568 = &l_488;
        int l_569 = 0x7251137BL;
        short *l_576 = &g_91.f1;
        unsigned short *l_577 = &g_136.f5;
        char *l_578 = &g_55;
        (*g_493) = ((void*)0 != l_568);
        (*l_568) = &g_2;

        ;
        (*l_568) = (*l_568);
    }
    else
    {
        int **l_579 = &g_86;
        (*l_579) = &g_87;

        ;
        return (*g_95);


    }

    ;
    for (g_255.f6 = 0; (g_255.f6 >= (-9)); g_255.f6 = safe_sub_func_int8_t_s_s(g_255.f6, 3))
    {
        unsigned l_584 = 4294967295UL;
        char **l_589 = &l_305;
        int *l_590 = &g_87;
        short *l_595 = &g_91.f1;
        struct S0 l_597 = {1UL,1L,0UL,1L,0xFE34874BL,1UL,0x8457D294L};
        struct S0 *l_598 = &g_91;
        for (p_39 = 0; (p_39 < (-13)); p_39 = safe_sub_func_uint32_t_u_u(p_39, 4))
        {
            char l_587 = 0xDBL;
            int **l_588 = &g_493;
            (*l_588) = func_70((*l_488), ((*g_567) = l_584), ((6UL | ((*l_488) > (safe_add_func_int32_t_s_s(l_587, 0xD8D51A2AL)))) & p_39));

            ;
            ;
        }
        (*l_590) = ((void*)0 != l_589);
        (*l_590) = ((l_591 < ((safe_lshift_func_uint16_t_u_s((p_39 >= (l_594 < 0xB326AB20L)), 7)) >= ((((*l_595) = p_39) == ((void*)0 != &l_344)) < (l_596 > ((p_39 == (*l_488)) == (*g_493)))))) | 9UL);
        (*l_598) = (g_136 = l_597);
    }

    ;
    return (*g_95);


}







static unsigned * func_41(unsigned short p_42, unsigned p_43, unsigned * p_44)
{
    unsigned *l_50 = &g_28.f0;
    int l_51 = 0x33E7A329L;
    char *l_52 = &g_53;
    char *l_54 = &g_55;
    char *l_56 = (void*)0;
    char *l_57 = &g_58;
    char *l_59 = (void*)0;
    char *l_60 = &g_61;
    struct S0 *l_194 = &g_91;
    struct S0 *l_195 = (void*)0;
    struct S0 *l_196 = (void*)0;
    struct S0 *l_197 = &g_136;
    unsigned ***l_200 = (void*)0;
    unsigned ***l_202 = &g_95;
    unsigned ****l_201 = &l_202;
    int l_216 = 0x222122A3L;
    int *l_299 = (void*)0;
    unsigned *l_302 = (void*)0;
    (*l_194) = func_46(((*l_60) = ((*l_57) = ((*l_54) = ((*l_52) = (g_28.f2 <= (safe_lshift_func_uint16_t_u_u((l_50 != g_36), l_51))))))));
    (*l_197) = (g_91 = g_136);
    if ((safe_rshift_func_uint16_t_u_s((l_51 <= (l_200 == ((*l_201) = &g_95))), 15)))
    {
        char l_203 = 6L;
        short **l_208 = &g_182;
        int l_217 = 0x70B70258L;
        unsigned short l_220 = 0xF268L;
        struct S0 *l_241 = &g_28;
        int *l_258 = &g_255.f6;
        (*g_86) = ((p_43 == l_203) & p_42);
        if ((safe_lshift_func_int8_t_s_s(p_42, 1)))
        {
            struct S0 **l_206 = (void*)0;
            struct S0 *l_207 = &g_136;
            (*g_86) = l_51;
            l_207 = (void*)0;

            ;
        }
        else
        {
            short ***l_209 = &l_208;
            int l_225 = 1L;
            int **l_230 = &g_86;
            unsigned char *l_231 = &g_188;
            unsigned *l_232 = &g_116;
            (*l_209) = l_208;
            (*l_230) = func_70((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((l_217 = l_216), 7)), (safe_rshift_func_int16_t_s_u(((**l_208) = l_220), 8)))), 15)), ((safe_div_func_int32_t_s_s(0x341E3A30L, 0x848D3DA1L)) | (safe_mod_func_uint8_t_u_u((l_225 >= (safe_mul_func_int8_t_s_s(((*l_60) = (safe_rshift_func_int8_t_s_s(g_58, 0))), l_225))), p_42))), p_43);

            ;
            (*l_230) = func_70((l_57 == l_231), p_43, (**l_230));
            g_136.f6 = (p_43 || (p_43 != ((4294967295UL == ((*l_232) = ((g_127 >= p_42) != l_51))) != ((p_44 = p_44) != (void*)0))));
        }

        ;
        for (g_53 = 0; (g_53 < 13); g_53 = safe_add_func_uint32_t_u_u(g_53, 2))
        {
            int l_250 = 1L;
            int *l_256 = &g_255.f6;
            int **l_281 = &l_258;
            if (p_42)
            {
                int *l_243 = &l_51;
                int **l_244 = &g_86;
                for (g_116 = 0; (g_116 != 52); ++g_116)
                {
                    int **l_237 = &g_86;
                    struct S0 **l_242 = &l_196;
                    (*l_237) = &g_2;

                    ;
                    for (p_43 = (-14); (p_43 > 21); p_43 = safe_add_func_int16_t_s_s(p_43, 4))
                    {
                        int *l_240 = &g_91.f6;
                        (*l_240) = (0x5DBC7C01L ^ 3L);
                        if ((*l_240))
                            continue;
                    }
                    (*l_242) = l_241;

                    ;
                }
                (*l_244) = l_243;

                ;
                (*g_86) = (*g_86);
            }
            else
            {
                int *l_245 = &l_51;
                (*l_245) = (*g_86);
                (*l_245) = l_203;
            }
            for (g_91.f5 = 4; (g_91.f5 == 26); g_91.f5++)
            {
                for (g_75 = 6; (g_75 <= 14); g_75 = safe_add_func_int32_t_s_s(g_75, 1))
                {
                    if (p_42)
                        break;
                }
                l_250 = (*g_86);
            }
            for (g_91.f4 = 14; (g_91.f4 != (-9)); --g_91.f4)
            {
                int *l_253 = &l_250;
                short *l_254 = &g_136.f3;
                (*l_253) = 0L;
                (*l_197) = g_91;
                if ((l_254 == ((*l_208) = (void*)0)))
                {
                    g_255 = ((*l_197) = g_91);
                }
                else
                {
                    char *l_257 = &g_53;
                    int **l_259 = &l_256;
                    (*l_259) = func_64((p_44 = func_64((*g_95), g_91.f5, (l_256 = &g_87), l_253, l_257)), l_216, (l_258 = &g_2), (*g_95), &g_61);

                    ;
                    ;
                    (*l_253) = (*g_86);
                    g_86 = &g_2;

                    ;
                    if (((safe_sub_func_uint32_t_u_u(0xACBB44B8L, ((**l_259) < g_61))) <= l_216))
                    {
                        int *l_263 = &g_87;
                        struct S0 **l_264 = (void*)0;
                        struct S0 **l_265 = &l_241;
                        int *l_272 = &l_217;
                        unsigned short *l_279 = (void*)0;
                        unsigned short *l_280 = &g_136.f5;
                        l_263 = ((*l_259) = func_64((*g_95), p_42, g_262, p_44, &g_58));

                        ;
                        ;
                        ;
                        (*l_265) = &g_28;
                        (*l_259) = p_44;

                        ;
                        (*g_262) = (safe_add_func_int32_t_s_s(((*l_253) ^ ((*l_253) == ((safe_div_func_uint32_t_u_u(((*l_263) | ((*l_272) = (*g_86))), (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0xC9D9L, 0x5C96L)), ((*l_54) = p_43))), p_43)))) < ((((*l_280) = (*l_258)) < (**l_259)) > l_51)))), 0x2FDB1AD6L));
                    }
                    else
                    {
                        return p_44;


                    }

                    ;
                }

                ;
            }

            ;
            (*l_281) = p_44;

            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*l_194) = g_136;
    }
    else
    {
        short **l_283 = &g_182;
        short ***l_282 = &l_283;
        (*g_262) = (*g_86);
        if ((l_282 == (void*)0))
        {
            char **l_285 = &l_60;
            char ***l_284 = &l_285;
            char ***l_286 = (void*)0;
            char **l_288 = &l_57;
            char ***l_287 = &l_288;
            (*l_287) = ((*l_284) = &l_60);

            ;
        }
        else
        {
            (*g_86) = 1L;
            (*l_197) = g_255;
        }
        (*g_262) = (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*g_86), 0x28480904L)), p_42));
    }

    ;
    ;
    ;
    ;
    for (g_91.f1 = 0; (g_91.f1 < (-18)); g_91.f1--)
    {
        int *l_295 = &g_91.f6;
        int **l_296 = &g_86;
        (*l_296) = (l_295 = l_295);

        ;
        for (g_127 = 0; (g_127 >= 8); ++g_127)
        {
            l_299 = (void*)0;
        }
        if ((*g_262))
            continue;
        l_51 = (0x7099L < (safe_sub_func_int8_t_s_s(((*l_57) = (p_43 && 0x5996L)), p_43)));
    }

    ;
    return l_302;



}







static struct S0 func_46(char p_47)
{
    char l_74 = 0x1FL;
    int *l_98 = (void*)0;
    int **l_192 = &g_86;
    struct S0 l_193 = {0xE22FAA98L,0xF002L,1UL,-6L,0x6C83836BL,65535UL,-1L};
    for (g_61 = 0; (g_61 <= 17); ++g_61)
    {
        return g_28;
    }
    (*l_192) = func_64(func_70(g_58, l_74, (g_75 >= (!l_74))), ((-7L) < (g_75 == 0x0BL)), l_98, l_98, &g_58);

    ;
    (*l_192) = &g_87;

    ;
    return l_193;
}







static int * func_64(unsigned * p_65, char p_66, int * p_67, unsigned * p_68, char * p_69)
{
    int l_134 = 0x362DC179L;
    short l_160 = 0L;
    int l_189 = 0x51B88579L;
    if ((p_66 & g_58))
    {
        struct S0 l_130 = {3UL,-1L,0UL,0x71A1L,-9L,1UL,1L};
        for (g_91.f2 = (-6); (g_91.f2 != 49); ++g_91.f2)
        {
            unsigned *l_109 = (void*)0;
            struct S0 l_129 = {0x6D4D43A6L,1L,0x91089868L,-1L,0x68C86622L,0xCD07L,0x1F873594L};
            for (g_55 = (-28); (g_55 >= (-1)); g_55 = safe_add_func_int32_t_s_s(g_55, 6))
            {
                int *l_107 = (void*)0;
                int *l_108 = &g_91.f6;
                unsigned short *l_114 = &g_75;
                unsigned *l_115 = &g_116;
                short *l_125 = &g_91.f3;
                unsigned *l_126 = &g_127;
                unsigned char l_144 = 0xE1L;
                struct S0 l_152 = {0x13A7E429L,-9L,0UL,-10L,0x7F33B7E8L,0x3380L,0x28DF6465L};
                unsigned char *l_155 = &l_144;
                unsigned char *l_161 = &g_162;
                unsigned ***l_164 = (void*)0;
                (*l_108) = ((safe_mod_func_int16_t_s_s(p_66, g_91.f6)) ^ (safe_lshift_func_int16_t_s_u(p_66, (1UL & 1UL))));
                if (((g_28.f1 || (p_68 != l_109)) ^ ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((*l_115) = (((*l_114) = p_66) <= 0x2B27L)) < (*g_86)), ((safe_mod_func_uint32_t_u_u(((*l_126) = ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((*l_125) = (safe_lshift_func_int8_t_s_s(8L, 3))), (!g_28.f0))) >= 0x5EC3E4F7L), g_28.f4)) & p_66)), (*g_86))) | g_53))), p_66)) && (*l_108))))
                {
                    return &g_2;


                }
                else
                {
                    int **l_128 = &g_86;
                    struct S0 l_131 = {0xF7E758ACL,0x152CL,0x29BE908AL,6L,0xBB5AF479L,0xCDF4L,0x991E3C28L};
                    struct S0 *l_132 = (void*)0;
                    struct S0 *l_133 = &l_129;
                    (*l_128) = &g_87;

                    ;
                    l_130 = l_129;
                    (*l_133) = l_131;
                    if ((l_134 || 0x3B10L))
                    {
                        struct S0 l_135 = {7UL,-10L,0x4C52037BL,6L,0xF876E496L,65535UL,0L};
                        g_136 = l_135;
                        return p_65;


                    }
                    else
                    {
                        (*g_86) = ((safe_rshift_func_uint8_t_u_s((((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_144, (safe_mod_func_int16_t_s_s(((*l_125) = (((*l_115) = (safe_unary_minus_func_uint8_t_u(g_28.f0))) >= (safe_rshift_func_int8_t_s_u(g_136.f0, 4)))), (safe_div_func_uint16_t_u_u((&g_136 == (void*)0), (g_91.f4 && p_66))))))), (((g_136.f3 = p_66) ^ (2UL && g_127)) || g_136.f3))))) & 65534UL) <= l_129.f5), g_136.f1)) >= p_66);
                        (*l_133) = g_91;
                        (*l_133) = l_152;
                        (*l_128) = &g_87;
                    }
                }

                ;
                if (((safe_mod_func_int32_t_s_s(((((*l_155) = p_66) != ((safe_rshift_func_int16_t_s_s((g_91.f5 >= ((*l_161) = (l_160 = (((safe_mul_func_uint8_t_u_u((((~p_66) == (*p_69)) == l_130.f0), (g_87 < (p_66 <= p_66)))) || (p_66 ^ 246UL)) | (-9L))))), 15)) || 0x33L)) & 65535UL), l_134)) != g_75))
                {
                    unsigned char l_163 = 0xB4L;
                    int *l_170 = (void*)0;
                    if ((((*l_114) = l_163) && (l_164 != &g_95)))
                    {
                        struct S0 *l_165 = (void*)0;
                        struct S0 *l_166 = &l_130;
                        int *l_167 = &g_28.f6;
                        int **l_168 = &g_86;
                        (*l_166) = l_130;
                        (*l_108) = (*g_86);
                        (*l_168) = l_167;

                        ;
                    }
                    else
                    {
                        return p_67;


                    }

                    ;
                    if ((&g_36 != (void*)0))
                    {
                        struct S0 *l_169 = &g_136;
                        int **l_171 = &l_107;
                        (*l_169) = g_136;
                        (*l_108) = (*g_86);
                        (*l_171) = l_170;
                    }
                    else
                    {
                        unsigned char l_172 = 0x9DL;
                        if (l_129.f1)
                            break;
                        if ((*g_86))
                            continue;
                        if (l_172)
                            break;
                    }
                }
                else
                {
                    if ((*g_86))
                        break;
                }

                ;
                l_130.f6 = l_129.f5;
            }
        }
    }
    else
    {
        int *l_173 = &g_2;
        return l_173;


    }
    for (g_91.f0 = 9; (g_91.f0 > 48); ++g_91.f0)
    {
        unsigned char *l_183 = (void*)0;
        unsigned char *l_184 = &g_162;
        unsigned *l_185 = &g_127;
        int l_186 = 0x644E6105L;
        unsigned char *l_187 = &g_188;
        struct S0 *l_191 = (void*)0;
        struct S0 **l_190 = &l_191;
        l_189 = (((*l_187) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((*l_185) = (safe_add_func_uint16_t_u_u(((void*)0 != g_182), ((g_91.f3 >= ((*l_184) = g_28.f6)) ^ 1L)))) || l_160), 2)), (g_136.f2 <= (l_186 != (*g_86)))))) | p_66);
        (*l_190) = (void*)0;
    }
    return p_67;


}







static unsigned * func_70(unsigned char p_71, unsigned p_72, char p_73)
{
    unsigned *l_88 = &g_28.f2;
    unsigned ***l_96 = &g_95;
    int **l_97 = &g_86;
    for (g_61 = 20; (g_61 < 1); g_61 = safe_sub_func_uint8_t_u_u(g_61, 1))
    {
        char l_94 = 0x21L;
        for (p_73 = 0; (p_73 >= (-20)); p_73--)
        {
            short l_92 = 1L;
            for (p_71 = (-17); (p_71 < 25); p_71 = safe_add_func_uint16_t_u_u(p_71, 9))
            {
                if ((0x74L || (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((p_72 != p_72), g_53)), g_28.f3))))
                {
                    g_86 = &g_2;

                    ;
                    return l_88;


                }
                else
                {
                    int *l_89 = &g_87;
                    struct S0 *l_90 = &g_91;
                    (*l_89) = (((g_86 = &g_2) == (void*)0) | g_28.f1);

                    ;
                    (*l_90) = g_28;
                    (*l_89) = (*g_86);
                    if (l_92)
                    {
                        return g_36;


                    }
                    else
                    {
                        int **l_93 = &l_89;
                        (*l_93) = &g_2;

                        ;
                        l_94 = p_73;
                    }

                    ;
                }

                ;
            }
        }
    }
    (*l_96) = g_95;
    (*l_97) = l_88;

    ;
    (*l_97) = (*l_97);
    return (**l_96);


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_28.f5, "g_28.f5", print_hash_value);
    transparent_crc(g_28.f6, "g_28.f6", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_91.f5, "g_91.f5", print_hash_value);
    transparent_crc(g_91.f6, "g_91.f6", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_136.f1, "g_136.f1", print_hash_value);
    transparent_crc(g_136.f2, "g_136.f2", print_hash_value);
    transparent_crc(g_136.f3, "g_136.f3", print_hash_value);
    transparent_crc(g_136.f4, "g_136.f4", print_hash_value);
    transparent_crc(g_136.f5, "g_136.f5", print_hash_value);
    transparent_crc(g_136.f6, "g_136.f6", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f1, "g_255.f1", print_hash_value);
    transparent_crc(g_255.f2, "g_255.f2", print_hash_value);
    transparent_crc(g_255.f3, "g_255.f3", print_hash_value);
    transparent_crc(g_255.f4, "g_255.f4", print_hash_value);
    transparent_crc(g_255.f5, "g_255.f5", print_hash_value);
    transparent_crc(g_255.f6, "g_255.f6", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
