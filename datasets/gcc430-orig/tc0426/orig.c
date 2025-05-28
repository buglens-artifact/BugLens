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
   signed f0 : 30;
   unsigned f1 : 27;
   unsigned f2 : 17;
};


static int g_28 = 0L;
static int *g_27 = &g_28;
static int ** volatile g_35 = &g_27;
static short g_88 = 0x30B5L;
static struct S0 g_92 = {-14548,8216,26};
static struct S0 * volatile g_91 = &g_92;
static int g_98 = 0xA0BDEC7EL;
static short g_116 = 0x1E29L;
static char g_119 = 0x76L;
static unsigned g_121 = 4294967295UL;
static int *g_123 = &g_98;
static int ** volatile g_122 = &g_123;
static unsigned char g_142 = 0xB2L;
static unsigned g_144 = 0xF6C633F4L;
static unsigned short g_158 = 65535UL;
static int * volatile g_189 = &g_98;
static struct S0 g_191 = {-18891,7396,14};
static unsigned g_231 = 4294967295UL;
static struct S0 *g_240 = &g_92;
static struct S0 ** volatile g_239 = &g_240;
static int ** volatile g_279 = (void*)0;
static int * volatile g_296 = (void*)0;
static int * volatile g_298 = (void*)0;
static int *g_303 = &g_98;
static int ** volatile g_305 = &g_123;
static int g_320 = 0x0D330B07L;
static int * volatile g_321 = &g_28;
static int ** volatile g_341 = &g_303;
static int g_357 = 1L;
static int **g_360 = &g_27;
static int *** volatile g_359 = &g_360;
static char g_377 = 0xF0L;
static int *g_381 = &g_98;
static short g_432 = 0x1F77L;
static char *g_532 = &g_119;
static char **g_531 = &g_532;
static unsigned *g_571 = &g_144;
static unsigned **g_570 = &g_571;
static unsigned ***g_569 = &g_570;
static struct S0 * volatile g_574 = &g_191;
static struct S0 * volatile g_578 = &g_191;
static int g_582 = 0x900534BFL;
static struct S0 * volatile g_621 = &g_92;
static int ** volatile g_625 = &g_27;
static int ** volatile g_690 = &g_303;
static int *g_705 = &g_582;



static unsigned func_1(void);
static int * func_2(int * p_3, unsigned short p_4, int p_5, int p_6);
static int * func_7(int * p_8, unsigned p_9, int * p_10, unsigned char p_11);
static int * func_12(struct S0 p_13, int p_14, int * p_15, int * p_16);
static int * func_18(int * p_19, unsigned p_20, int p_21);
static int * func_22(int * p_23, unsigned p_24, int * p_25, int p_26);
static char func_40(int p_41);
static int func_62(unsigned short p_63, int ** p_64, unsigned char p_65);
static int ** func_66(int ** p_67, int * p_68, int p_69, unsigned char p_70);
static int ** func_71(char p_72, short p_73, unsigned p_74);
static unsigned func_1(void)
{
    struct S0 l_17 = {-12519,1468,331};
    unsigned char l_29 = 0xF4L;
    int *l_30 = (void*)0;
    int **l_253 = (void*)0;
    int **l_254 = (void*)0;
    int **l_255 = &g_27;
    int **l_256 = &g_123;
    int *l_581 = &g_582;
    unsigned short *l_723 = &g_158;
    unsigned short l_730 = 0x8220L;
    (*l_255) = func_2(func_7(func_12(l_17, l_17.f2, func_18((l_30 = ((*l_256) = ((*l_255) = func_22(g_27, l_29, l_30, (*g_27))))), g_231, g_231), l_581), g_432, &g_582, (*l_581)), g_582, g_582, (*l_581));
    (*l_255) = (*g_625);
    (*g_705) = ((*g_381) = func_40(((((safe_sub_func_uint16_t_u_u((g_158 = 65535UL), (safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint16_t_u(65535UL)))))) && ((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_92.f1, g_158)), l_730)) <= (*g_705))) , (*g_359)) != &g_303)));
    return (*l_581);
}







static int * func_2(int * p_3, unsigned short p_4, int p_5, int p_6)
{
    unsigned short l_606 = 0UL;
    unsigned short *l_613 = &l_606;
    int l_614 = 0x1069D2D8L;
    unsigned char *l_615 = &g_142;
    struct S0 l_616 = {564,3969,43};
    int *l_622 = (void*)0;
    unsigned short l_710 = 0xE544L;
    (*p_3) = (((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(l_606, (safe_lshift_func_uint8_t_u_u(0x21L, 3)))), 0x8BD8L)) , (((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((((0x9503L <= ((*l_613) = g_432)) > ((+l_614) == 0xC57E579DL)) & 0x7FA0L) , ((*l_615) = ((l_606 , l_606) < g_92.f0))), (**g_531))), l_614)) , l_614) && l_606) == l_614) , 0L)) ^ l_614);
    if ((l_606 | (***g_569)))
    {
        (*g_240) = l_616;
        for (l_614 = 26; (l_614 < (-25)); l_614 = safe_sub_func_uint32_t_u_u(l_614, 9))
        {
            short l_623 = 0x20F1L;
            int l_624 = (-1L);
            if (l_606)
                break;
            for (g_357 = (-10); (g_357 > (-19)); g_357--)
            {
                (*g_621) = ((*g_240) = (*g_578));
                if ((*p_3))
                    break;
            }
            (*g_625) = p_3;
        }
        (*g_381) = ((*p_3) = (safe_div_func_uint8_t_u_u(0x66L, l_616.f0)));
    }
    else
    {
        struct S0 l_635 = {-23298,9129,202};
        short *l_650 = (void*)0;
        short *l_652 = (void*)0;
        int l_682 = 0xE9A8134EL;
        int *l_689 = (void*)0;
        struct S0 *l_700 = (void*)0;
        short *l_709 = &g_88;
        int l_714 = 0x567B505FL;
        for (g_121 = (-26); (g_121 < 45); ++g_121)
        {
            unsigned short l_630 = 0x116FL;
            char l_631 = 4L;
            int l_632 = 0xCC07B998L;
            short **l_708 = &l_650;
            int **l_713 = &g_381;
        }
    }
    return p_3;
}







static int * func_7(int * p_8, unsigned p_9, int * p_10, unsigned char p_11)
{
    short *l_593 = &g_432;
    int l_596 = 0L;
    unsigned char *l_597 = &g_142;
    int ***l_598 = (void*)0;
    int ***l_599 = &g_360;
    unsigned l_600 = 4294967292UL;
    unsigned short *l_601 = &g_158;
    (*g_381) = (safe_sub_func_uint16_t_u_u(((*l_601) = ((((*l_597) = ((l_593 == (void*)0) & ((safe_lshift_func_int16_t_s_s(p_9, p_9)) < l_596))) , func_62((l_596 = (l_596 >= ((*l_593) = p_9))), ((*l_599) = (void*)0), (((**g_531) = (((*g_381) = l_600) & (***g_569))) , 247UL))) || p_9)), g_320));
    return p_10;
}







static int * func_12(struct S0 p_13, int p_14, int * p_15, int * p_16)
{
    struct S0 *l_585 = &g_191;
    struct S0 **l_586 = &g_240;
    int l_587 = (-2L);
    int *l_590 = (void*)0;
    (*g_239) = (void*)0;
    if ((((g_92.f1 <= (((7UL | (*g_571)) , (safe_rshift_func_int8_t_s_s(0x4CL, 6))) | g_119)) , (((*l_586) = l_585) == ((((*g_91) , 0x65L) | l_587) , &g_191))) ^ 4UL))
    {
        int *l_588 = &g_582;
        l_588 = (*g_341);
        (*g_122) = &l_587;
    }
    else
    {
        int *l_589 = &g_98;
        return l_589;
    }
    return l_590;
}







static int * func_18(int * p_19, unsigned p_20, int p_21)
{
    short l_257 = 0x94A6L;
    int *l_273 = (void*)0;
    unsigned l_304 = 0x705220B7L;
    struct S0 l_307 = {26561,4493,173};
    struct S0 **l_333 = &g_240;
    struct S0 ***l_332 = &l_333;
    unsigned *l_340 = &g_231;
    unsigned **l_339 = &l_340;
    short *l_355 = &l_257;
    short **l_354 = &l_355;
    unsigned l_396 = 0x52E5FB81L;
    unsigned **l_429 = &l_340;
    unsigned char *l_451 = &g_142;
    unsigned short *l_469 = &g_158;
    char **l_533 = &g_532;
    unsigned **l_568 = (void*)0;
    unsigned ***l_567 = &l_568;
    if (l_257)
    {
        short l_260 = (-7L);
        struct S0 ***l_268 = (void*)0;
        int l_272 = 1L;
        int **l_334 = (void*)0;
        if (((func_62(l_257, (p_21 , &g_27), (safe_rshift_func_int8_t_s_s(l_260, 7))) , (&p_21 != &p_21)) ^ l_260))
        {
            short *l_262 = (void*)0;
            short **l_261 = &l_262;
            short l_263 = (-6L);
            struct S0 **l_270 = &g_240;
            struct S0 ***l_269 = &l_270;
            char *l_271 = (void*)0;
            int l_291 = 0x580673BCL;
            int *l_301 = &l_291;
            if (((&g_88 == ((*l_261) = (void*)0)) ^ (g_191.f0 >= (l_263 != (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((g_116 && ((l_268 == &g_239) ^ (l_272 = ((l_269 != l_268) != 2UL)))), g_191.f2)), g_92.f2))))))
            {
                int **l_274 = &g_27;
                int *l_275 = &g_28;
                (*l_274) = l_273;
                return l_275;
            }
            else
            {
                unsigned l_276 = 0x614CE61BL;
                int l_284 = 0x73AE872CL;
                int l_289 = 0x75B47AC9L;
                unsigned char *l_290 = &g_142;
                struct S0 l_306 = {16444,3064,41};
                if (l_276)
                {
                    return (*g_35);
                }
                else
                {
                    for (g_119 = 0; (g_119 >= (-30)); --g_119)
                    {
                        int **l_280 = &l_273;
                        (*l_280) = (*g_35);
                    }
                }
                l_291 = (p_21 >= func_62(p_20, &l_273, ((safe_unary_minus_func_int16_t_s((((*l_290) = ((l_272 = (safe_mod_func_int32_t_s_s((l_284 = l_284), (safe_lshift_func_uint8_t_u_s(0xA7L, l_272))))) & func_62(l_263, &g_27, (safe_rshift_func_uint16_t_u_s((l_289 = 9UL), g_158))))) && l_272))) | g_231)));
                if ((((void*)0 == (*l_261)) != (safe_sub_func_int16_t_s_s(p_21, g_116))))
                {
                    int l_302 = 0x11A0814CL;
                    for (g_158 = 0; (g_158 < 19); g_158++)
                    {
                        int *l_297 = (void*)0;
                        int *l_299 = &l_272;
                        struct S0 l_300 = {26059,8686,181};
                        (*l_299) = l_263;
                        (**l_270) = l_300;
                    }
                    (*g_305) = func_22(l_301, l_302, g_303, l_304);
                }
                else
                {
                    l_306 = (*g_240);
                }
            }
        }
        else
        {
            (*g_303) = p_21;
        }
        (*g_240) = l_307;
        (*g_321) = ((*g_303) = (((safe_mul_func_int8_t_s_s(((func_40((safe_div_func_int8_t_s_s((&g_298 == (void*)0), (safe_div_func_int16_t_s_s(func_40((safe_lshift_func_uint16_t_u_s(g_92.f2, 0))), (safe_rshift_func_uint16_t_u_u((l_272 & (((g_320 = (safe_rshift_func_int8_t_s_u(g_231, 6))) <= l_272) && g_320)), 1))))))) <= g_231) & g_231), g_231)) | 0UL) <= l_260));
        if (func_62((l_307 , (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_119, g_158)), (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(0x2EEFL, p_20)), ((safe_sub_func_int16_t_s_s((&g_239 != (void*)0), (l_332 != (void*)0))) | 0x52E9L)))))), l_334, g_142))
        {
            return l_273;
        }
        else
        {
            unsigned char l_335 = 255UL;
            (*g_303) = (*g_321);
            l_335 = (g_92.f0 == p_21);
        }
    }
    else
    {
        int l_336 = (-10L);
        unsigned *l_440 = &g_144;
        short **l_450 = &l_355;
        unsigned char l_475 = 255UL;
        int **l_499 = (void*)0;
        int l_503 = 1L;
        int *l_556 = &g_98;
        if (func_40(l_336))
        {
            short *l_346 = &g_116;
            int *l_356 = &g_357;
            int l_378 = (-1L);
            int *l_433 = &g_357;
            struct S0 *l_434 = &l_307;
            (*g_341) = func_22(&p_21, p_21, (*g_35), p_21);
            if ((p_21 > ((*l_346) = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(p_21, 6)), 1)))))
            {
                int **l_347 = &g_27;
                (*l_347) = (void*)0;
                for (g_320 = 23; (g_320 < 0); g_320 = safe_sub_func_int16_t_s_s(g_320, 1))
                {
                    int ***l_358 = (void*)0;
                    (*g_359) = func_66(func_66(((func_40(p_20) | (safe_mod_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(l_336, (p_20 ^ (0x342FEDE2L || (((l_336 , ((p_20 , &g_231) == (p_21 , (void*)0))) < 1L) , 0x610234A5L))))) , l_354) != &l_355), 1L))) , &g_123), l_356, (*l_356), p_21), &g_357, g_357, g_231);
                    (*g_91) = (**g_239);
                    if ((safe_mul_func_int16_t_s_s((-1L), (safe_div_func_uint32_t_u_u(p_21, ((*l_356) = func_40(l_336)))))))
                    {
                        if (l_307.f2)
                            break;
                    }
                    else
                    {
                        return (*l_347);
                    }
                }
            }
            else
            {
                int ***l_379 = &g_360;
                struct S0 *l_380 = &g_92;
                (*g_360) = (*g_35);
                (*l_356) = (*g_321);
                for (g_231 = 23; (g_231 >= 40); g_231++)
                {
                    unsigned l_384 = 4294967293UL;
                    unsigned *l_389 = &g_144;
                    unsigned **l_388 = &l_389;
                    unsigned ***l_390 = &l_388;
                    (***l_332) = (***l_332);
                    if ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, g_98)), g_191.f0)))
                    {
                        char *l_375 = &g_119;
                        char *l_376 = &g_377;
                        (*l_356) = (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((func_40(p_20) , ((*l_376) = ((*l_375) = p_21))), g_320)), l_378));
                        (*l_356) = (l_379 == (void*)0);
                        if (l_336)
                            continue;
                        (*g_239) = l_380;
                    }
                    else
                    {
                        char *l_385 = &g_119;
                        unsigned char *l_386 = &g_142;
                        int *l_387 = &l_378;
                        (**l_379) = (*g_305);
                        (**l_379) = (*g_35);
                        (*l_380) = (***l_332);
                    }
                    (*l_390) = l_388;
                }
            }
            if (func_62(p_21, (*g_359), g_357))
            {
                for (g_121 = 6; (g_121 == 48); g_121 = safe_add_func_int8_t_s_s(g_121, 1))
                {
                    for (g_88 = 0; (g_88 < (-11)); g_88--)
                    {
                        short l_395 = 0xEC63L;
                        l_396 = l_395;
                        return (*g_341);
                    }
                }
                (*g_360) = (*g_305);
                return (*g_122);
            }
            else
            {
                char l_407 = 1L;
                for (g_231 = (-1); (g_231 <= 52); g_231++)
                {
                    (*g_360) = (void*)0;
                }
                for (g_88 = 27; (g_88 == (-10)); g_88 = safe_sub_func_int16_t_s_s(g_88, 6))
                {
                    int l_424 = 8L;
                    for (g_98 = 0; (g_98 > (-13)); g_98 = safe_sub_func_uint32_t_u_u(g_98, 1))
                    {
                        short l_420 = 0L;
                        struct S0 l_423 = {21474,10892,241};
                        (*l_356) = l_336;
                        (**g_239) = ((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_336 , l_407), (safe_div_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(p_21, (g_142 = g_144))) || ((safe_mod_func_int8_t_s_s(((p_21 | (((*l_356) = 0x15CE64B5L) , p_21)) <= l_420), (safe_add_func_int16_t_s_s(((((g_377 , 0xB3L) | p_21) & p_20) , 0x0709L), g_92.f0)))) || p_20)), (-1L))), 11)) ^ g_191.f2) , g_92.f2) , p_20), g_144)) != g_158) < 0L), p_21)))), g_92.f1)) , l_423);
                    }
                    if ((*g_189))
                        continue;
                    if ((*l_356))
                    {
                        unsigned ***l_425 = &l_339;
                        unsigned ***l_426 = (void*)0;
                        unsigned **l_428 = &l_340;
                        unsigned ***l_427 = &l_428;
                        (*g_381) = (g_231 < 0x1F3727B0L);
                        l_307.f0 = ((*g_381) = (((((*l_346) = (func_62(l_407, (g_320 , (*g_359)), l_424) > (((*l_425) = (void*)0) == (l_429 = ((*l_427) = &l_340))))) || (((*g_321) == (safe_add_func_uint16_t_u_u(l_424, g_432))) == 1L)) < 0xB4L) < 0x2431L));
                        (***l_332) = (***l_332);
                        (*g_360) = l_433;
                    }
                    else
                    {
                        if (p_20)
                            break;
                        (**l_332) = l_434;
                    }
                    (*g_360) = &p_21;
                }
            }
            (**l_333) = (*l_434);
        }
        else
        {
            struct S0 l_462 = {27995,6489,252};
            int *l_490 = (void*)0;
            unsigned short l_504 = 0x5F8EL;
            unsigned char *l_509 = (void*)0;
            unsigned char *l_510 = &l_475;
            if ((*g_381))
            {
                char l_439 = 0xC6L;
                unsigned **l_441 = (void*)0;
                unsigned **l_442 = &l_440;
                unsigned char *l_447 = (void*)0;
                unsigned char *l_448 = (void*)0;
                unsigned char *l_449 = &g_142;
                unsigned ***l_466 = &l_339;
                struct S0 l_491 = {-9921,7613,332};
                (*g_360) = (*g_35);
                (*g_360) = l_340;
                if ((g_88 | (((void*)0 != l_451) & func_62((safe_mul_func_uint8_t_u_u(g_28, (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(4UL, (func_62(p_21, (*g_359), (safe_div_func_uint32_t_u_u(1UL, (safe_add_func_int16_t_s_s(((*l_355) = p_21), g_231))))) , l_439))), 5)))), &l_273, p_20))))
                {
                    short l_463 = 1L;
                    unsigned short *l_470 = &g_158;
                    int *l_476 = &g_28;
                    (*g_360) = &p_21;
                    if ((l_462 , (!((*g_381) = (l_463 , ((safe_sub_func_uint8_t_u_u(((void*)0 == l_466), (safe_lshift_func_int16_t_s_s((((l_469 = &g_158) != (((*l_470) = p_20) , &g_158)) , func_40(((*g_303) = (l_462.f0 , p_21)))), 4)))) , 0xA2F05105L))))))
                    {
                        (*g_360) = &p_21;
                    }
                    else
                    {
                        unsigned l_481 = 0x1FB460BEL;
                        unsigned char *l_484 = &l_475;
                        (*g_360) = (*g_122);
                        l_476 = func_22((((func_62(p_21, (g_121 , &p_19), p_20) || ((safe_sub_func_uint32_t_u_u((g_92.f1 ^ g_432), (safe_div_func_uint8_t_u_u((l_475 = l_463), 0xBFL)))) >= p_20)) && l_462.f2) , l_476), l_462.f2, (*g_360), p_21);
                        (***l_332) = ((p_21 || ((safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(g_377, p_21)) && l_481) , (safe_lshift_func_int16_t_s_s((g_144 != g_142), (((*l_484) = g_92.f1) & 0x37L)))), 5)) , ((safe_add_func_uint16_t_u_u(l_481, g_144)) < 2L))) , (**l_333));
                        return (*g_341);
                    }
                }
                else
                {
                    int *l_487 = &g_98;
                    (*g_360) = func_22((g_92.f0 , l_487), (safe_add_func_int8_t_s_s(g_88, (&g_142 == l_451))), l_490, p_21);
                    l_491 = (***l_332);
                }
                (***l_332) = l_491;
            }
            else
            {
                char **l_492 = (void*)0;
                char *l_494 = &g_119;
                char **l_493 = &l_494;
                int ***l_500 = (void*)0;
                int ***l_501 = (void*)0;
                int ***l_502 = &g_360;
                (*g_360) = func_22(&p_21, (((*l_355) = (g_98 != p_20)) , ((*l_440) = (g_357 ^ (p_21 > ((((*g_91) , (p_20 , 0x33L)) != (((*l_493) = (void*)0) == (void*)0)) > l_475))))), (*g_360), l_307.f2);
                (*g_381) = (safe_lshift_func_uint16_t_u_u((((((((safe_lshift_func_int8_t_s_u(func_62(g_432, l_499, (p_21 , (func_40((((*l_355) = ((0x54D59C3CL == (func_62(g_142, ((*l_502) = &l_273), p_20) , p_20)) , p_20)) >= 0x3ACDL)) != l_503))), p_21)) , (-7L)) || g_191.f2) ^ p_21) & l_504) >= p_21) , p_21), 13));
                (***l_332) = (*g_91);
            }
            (*g_240) = (***l_332);
            (*g_303) = ((~func_62(p_20, &l_490, (+(safe_rshift_func_uint8_t_u_u((func_62(((safe_sub_func_uint8_t_u_u(((*l_510) = ((*l_451) = g_92.f0)), ((((safe_mul_func_int16_t_s_s(p_20, g_191.f2)) == p_20) > g_191.f0) == (((*g_91) , g_320) | g_144)))) , g_88), &g_381, p_20) == g_116), 7))))) , l_475);
            (***l_332) = (**g_239);
        }
        if ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(4294967292UL, g_142)) | l_475), (+((((((*l_469) = 0xC181L) ^ (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(l_257, (g_320 >= (safe_sub_func_uint16_t_u_u(0x6B66L, func_62((safe_mod_func_uint8_t_u_u((p_21 <= g_98), 249UL)), (*g_359), l_307.f0)))))), g_432))) & 0UL) > p_20) < g_116)))))
        {
            char ***l_534 = (void*)0;
            char ***l_535 = &l_533;
            (*g_381) = (safe_mod_func_uint8_t_u_u(p_20, (safe_add_func_int16_t_s_s(g_191.f1, p_20))));
            (*g_381) = (safe_mul_func_uint8_t_u_u(p_21, (g_531 != ((*l_535) = l_533))));
        }
        else
        {
            int l_553 = 1L;
            char ***l_554 = &l_533;
            int l_555 = 0L;
            (*g_360) = (*g_35);
            p_21 = l_257;
            (*g_381) = (p_21 | (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(func_40(l_304), 4)) & g_231), ((p_20 , &g_432) != ((*l_450) = (*l_450))))), g_432)));
            (*g_360) = func_22(((*g_360) = &p_21), l_257, (((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_s(p_21, (((safe_rshift_func_int8_t_s_s((*g_532), (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((~l_553), 7)) < 248UL), (l_555 = ((((void*)0 == (*l_332)) < (l_554 != &g_531)) , 7L)))), g_142)))) < (-6L)) >= l_503))))) , 0UL) , (*g_122)), l_503);
        }
        (*g_381) = l_396;
        return l_556;
    }
    if (((((((**g_531) = (safe_div_func_uint16_t_u_u(g_119, ((*l_469) = g_320)))) <= (safe_sub_func_int8_t_s_s(((l_307.f1 , ((void*)0 != (*g_305))) | (g_191.f1 , (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(p_20, (~(p_21 , ((p_21 , 0UL) || 2UL))))), p_21)) , 1L) > g_191.f2), p_20)))), l_307.f2))) , 4294967288UL) , l_567) == g_569))
    {
        struct S0 l_572 = {-30871,10441,228};
        struct S0 *l_573 = (void*)0;
        (*g_574) = ((*g_240) = l_572);
    }
    else
    {
        int *l_577 = &g_357;
        for (g_98 = 0; (g_98 <= (-28)); g_98 = safe_sub_func_int32_t_s_s(g_98, 4))
        {
            (*g_360) = l_577;
            p_19 = (void*)0;
            (*g_578) = ((***l_332) = (*g_91));
            (*g_360) = l_577;
        }
    }
    for (g_158 = 0; (g_158 <= 60); ++g_158)
    {
        return (**g_359);
    }
    return l_340;
}







static int * func_22(int * p_23, unsigned p_24, int * p_25, int p_26)
{
    unsigned l_252 = 0x96D62455L;
    for (g_28 = 0; (g_28 != 2); g_28 = safe_add_func_int32_t_s_s(g_28, 8))
    {
        unsigned char l_33 = 0x30L;
        int **l_34 = (void*)0;
        if (l_33)
            break;
        (*g_35) = &g_28;
    }
    for (p_26 = 0; (p_26 <= (-11)); p_26--)
    {
        int **l_247 = &g_27;
        (*l_247) = ((safe_add_func_int8_t_s_s(func_40((0x30L <= (0xC7C4L < (safe_add_func_uint8_t_u_u((~g_28), g_28))))), p_24)) , (*g_35));
        (*g_189) = ((safe_rshift_func_uint16_t_u_u(p_26, func_40((safe_lshift_func_int16_t_s_s(((void*)0 != (*g_239)), 7))))) <= g_231);
        (*p_23) = l_252;
        return (*l_247);
    }
    return (*g_35);
}







static char func_40(int p_41)
{
    short l_87 = 0xB115L;
    int l_89 = (-2L);
    unsigned l_183 = 7UL;
    unsigned char l_197 = 1UL;
    struct S0 l_198 = {7645,6953,361};
    struct S0 *l_199 = &l_198;
    int **l_207 = &g_27;
    unsigned *l_233 = (void*)0;
    int *l_243 = &g_28;
    for (g_28 = 0; (g_28 != 9); g_28++)
    {
        int *l_182 = (void*)0;
        int l_185 = 4L;
        short *l_195 = &l_87;
        int *l_196 = &l_185;
        if ((safe_mul_func_uint8_t_u_u(0xD3L, (safe_add_func_int16_t_s_s((((*l_196) = (safe_add_func_int16_t_s_s((&p_41 == (void*)0), (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((*l_195) = (safe_div_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((func_62(p_41, func_66(func_71(g_28, p_41, (safe_mod_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((l_89 = ((((-5L) & (safe_mul_func_uint16_t_u_u((g_88 = ((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((-1L), ((safe_mul_func_uint16_t_u_u(g_28, p_41)) < p_41))), l_87)) & p_41)), 0x435DL))) || 0x1DL) >= l_87)), g_28)) < p_41), g_28))), l_182, l_183, l_183), l_185) || (*g_189)), 1UL)) , 255UL), g_28)) | g_28) , p_41), 1L))) <= p_41), 0L)), p_41))))) , g_191.f2), p_41)))))
        {
            return p_41;
        }
        else
        {
            p_41 = l_183;
            if ((*g_189))
                break;
            return l_197;
        }
    }
    (*l_199) = l_198;
    for (g_28 = (-17); (g_28 == (-19)); g_28--)
    {
        short l_204 = 1L;
        struct S0 l_214 = {19272,2863,64};
        int **l_226 = &g_27;
        int l_227 = 0xBFB6B4A2L;
        for (g_121 = 0; (g_121 >= 40); ++g_121)
        {
            struct S0 **l_205 = (void*)0;
            struct S0 ***l_206 = &l_205;
            int l_210 = 0x1A791DEBL;
            unsigned **l_211 = (void*)0;
            unsigned *l_213 = &g_121;
            unsigned **l_212 = &l_213;
            int *l_244 = &g_98;
            l_210 = (l_204 < (func_62(((&l_199 == ((*l_206) = l_205)) ^ g_28), l_207, ((safe_lshift_func_int8_t_s_s(1L, l_210)) , (((*l_212) = &g_121) != (l_214 , (void*)0)))) , 0xD5F4L));
            for (l_204 = 15; (l_204 != (-10)); l_204 = safe_sub_func_int32_t_s_s(l_204, 7))
            {
                struct S0 l_219 = {16122,5830,115};
                short *l_230 = &g_116;
                int **l_232 = &g_123;
                p_41 = ((safe_add_func_int16_t_s_s((p_41 , (0x58L || ((&g_121 != ((func_62(((g_191.f1 , l_219) , (safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(func_62(p_41, l_226, (l_227 , (safe_sub_func_int16_t_s_s(((*l_230) = ((0x92L && 0x9EL) , 0x6A14L)), l_219.f1)))), 0x47ABL)), 0x3462L)) & g_231), 14))), l_232, p_41) | 0x1C95L) , l_233)) & 0xA5DCL))), g_28)) != p_41);
                for (l_183 = 0; (l_183 > 37); l_183++)
                {
                    int *l_236 = &g_98;
                    struct S0 *l_245 = (void*)0;
                    struct S0 l_246 = {6743,2260,182};
                    (*l_232) = l_236;
                    for (g_88 = (-1); (g_88 < 18); ++g_88)
                    {
                        (*g_239) = &g_92;
                    }
                    for (l_227 = 0; (l_227 != (-29)); l_227 = safe_sub_func_uint32_t_u_u(l_227, 4))
                    {
                        (*l_232) = l_243;
                        (*l_232) = ((*l_226) = l_244);
                        l_245 = (*g_239);
                    }
                    (*l_199) = l_246;
                }
            }
        }
        p_41 = (p_41 == (p_41 <= g_92.f0));
    }
    return p_41;
}







static int func_62(unsigned short p_63, int ** p_64, unsigned char p_65)
{
    int l_188 = 0L;
    struct S0 *l_190 = &g_191;
    int l_194 = 0xC045D86BL;
    (*g_189) = (p_65 || ((!l_188) == 0xAF98DCA0L));
    (*l_190) = ((*g_91) = (*g_91));
    (*l_190) = (*l_190);
    for (g_119 = 0; (g_119 == 20); ++g_119)
    {
        l_194 = l_188;
        if (l_194)
            continue;
        if (p_63)
            continue;
    }
    return (*g_189);
}







static int ** func_66(int ** p_67, int * p_68, int p_69, unsigned char p_70)
{
    int **l_184 = &g_27;
    return l_184;
}







static int ** func_71(char p_72, short p_73, unsigned p_74)
{
    struct S0 l_90 = {31828,9566,61};
    int l_106 = 0L;
    int **l_109 = &g_27;
    (*g_91) = l_90;
    for (p_73 = (-24); (p_73 > 29); p_73++)
    {
        int **l_95 = &g_27;
        int *l_96 = (void*)0;
        int *l_97 = &g_98;
        int **l_99 = &g_27;
        (*l_95) = (void*)0;
        (*l_97) = 1L;
        if (p_74)
            break;
        return l_99;
    }
    if ((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_73, g_98)), ((safe_add_func_uint8_t_u_u(((0L & (((l_106 & (~(safe_sub_func_uint32_t_u_u((g_28 >= (g_92.f1 != 0xC80BFD78L)), (l_109 != ((safe_add_func_uint8_t_u_u(((g_98 , l_90.f2) != g_92.f1), l_90.f2)) , &g_27)))))) & p_74) ^ g_28)) != p_72), l_106)) , g_92.f0))))
    {
        struct S0 *l_112 = &g_92;
        (*l_112) = (*g_91);
    }
    else
    {
        int l_113 = 0xF0EBE340L;
        short *l_114 = &g_88;
        short *l_115 = &g_116;
        unsigned *l_120 = &g_121;
        short l_177 = 0xDEDAL;
        int l_179 = (-2L);
        (*g_122) = (((*l_120) = (g_92.f1 <= (p_73 <= (((l_113 | p_73) >= p_72) & (((*l_115) = ((*l_114) = g_92.f0)) <= (0xA2L & (!(g_119 = 7UL)))))))) , ((*l_109) = (*l_109)));
        if (p_72)
        {
            unsigned l_138 = 0x9BA4D29FL;
            int *l_147 = &g_28;
            for (g_119 = (-20); (g_119 < 17); g_119++)
            {
                unsigned char *l_141 = &g_142;
                unsigned *l_143 = &g_144;
                unsigned l_164 = 0UL;
                if (((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_72, (((safe_mul_func_uint8_t_u_u(p_73, (((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_74, 2L)), (safe_mod_func_int8_t_s_s(((*g_122) != (g_27 = l_120)), ((((l_138 ^ (safe_lshift_func_uint8_t_u_u(((*l_141) = g_121), (((*l_143) = l_113) && 1UL)))) > l_138) && 0UL) ^ 3UL))))) | g_28) , g_116))) || (*g_27)) <= p_73))), 6UL)) == g_92.f0))
                {
                    int l_156 = 0xEEA40FDBL;
                    struct S0 l_159 = {21683,2649,241};
                    for (g_142 = 26; (g_142 != 34); g_142 = safe_add_func_uint32_t_u_u(g_142, 8))
                    {
                        unsigned short *l_157 = &g_158;
                        unsigned *l_160 = (void*)0;
                        int l_163 = 0xDE5CCA7CL;
                        int *l_165 = &l_163;
                        (*l_109) = l_147;
                        (*l_165) = (safe_sub_func_int16_t_s_s((!(safe_rshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u(g_116, (((((((safe_mod_func_uint16_t_u_u(((*l_157) = l_156), (-6L))) , l_159) , g_142) , &g_121) == (g_88 , l_160)) , (safe_mul_func_uint8_t_u_u((*l_147), p_73))) && l_163))) , l_163) == 0x2BL), l_164))), 4UL));
                        (*l_109) = (*l_109);
                        if (p_74)
                            break;
                    }
                }
                else
                {
                    struct S0 *l_167 = &g_92;
                    struct S0 **l_166 = &l_167;
                    int l_178 = 0xDBDBD1F8L;
                    (*l_109) = l_120;
                    (*l_166) = &l_90;
                    if (p_74)
                        continue;
                    l_178 = ((**l_109) | (safe_mul_func_uint16_t_u_u(p_74, ((!g_119) , ((safe_rshift_func_int8_t_s_s(g_116, ((safe_unary_minus_func_uint8_t_u((g_88 ^ (safe_add_func_uint16_t_u_u((p_73 , (safe_mul_func_uint16_t_u_u((*l_147), 1L))), l_177))))) & 0x9422L))) && l_178)))));
                }
                return &g_123;
            }
        }
        else
        {
            l_179 = p_72;
        }
        (*l_109) = (*l_109);
        for (l_113 = 0; (l_113 == 27); l_113 = safe_add_func_int32_t_s_s(l_113, 5))
        {
            return l_109;
        }
    }
    return l_109;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_191.f0, "g_191.f0", print_hash_value);
    transparent_crc(g_191.f1, "g_191.f1", print_hash_value);
    transparent_crc(g_191.f2, "g_191.f2", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
