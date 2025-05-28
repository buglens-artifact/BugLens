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



static int g_7 = 8L;
static int g_40 = 0xF5452FA8L;
static int *g_39 = &g_40;
static int * volatile g_43 = &g_40;
static int ** volatile g_44 = (void*)0;
static int ** const volatile g_45 = &g_39;
static int ** volatile g_47 = &g_39;
static unsigned short g_49 = 0x98CBL;
static unsigned char g_61 = 247UL;
static short g_63 = (-1L);
static int ** volatile g_81 = &g_39;
static const int ** volatile g_84 = (void*)0;
static const int *g_87 = &g_7;
static const int ** volatile g_86 = &g_87;
static unsigned g_104 = 1UL;
static volatile unsigned g_111 = 0UL;
static int ** volatile g_115 = &g_39;
static const int ** volatile g_124 = &g_87;
static unsigned * const g_127 = &g_104;
static unsigned * const volatile * volatile g_126 = &g_127;
static volatile unsigned char g_141 = 1UL;
static volatile unsigned char *g_140 = &g_141;
static volatile unsigned char **g_139 = &g_140;
static const unsigned char *g_162 = &g_61;
static const unsigned char **g_161 = &g_162;
static const unsigned char *** const volatile g_160 = &g_161;
static char g_189 = 1L;
static char *g_188 = &g_189;
static char * volatile *g_187 = &g_188;
static char * volatile * volatile *g_186 = &g_187;
static const int ** volatile g_225 = &g_87;
static const char *** volatile g_240 = (void*)0;
static int ** volatile g_243 = &g_39;
static int g_255 = 7L;
static int * volatile g_254 = &g_255;
static int * volatile g_269 = &g_255;
static int ** volatile g_279 = &g_39;
static char g_281 = 1L;
static int ** volatile g_284 = &g_39;
static int ** volatile g_287 = &g_39;
static short g_321 = (-1L);
static int ** volatile g_337 = &g_39;
static unsigned short * volatile *g_373 = (void*)0;
static unsigned short * volatile ** volatile g_374 = (void*)0;
static unsigned short * volatile ** const volatile g_375 = &g_373;
static int ** volatile g_379 = &g_39;
static unsigned short g_385 = 65526UL;
static int ** volatile g_390 = (void*)0;
static int ** volatile g_391 = &g_39;
static int ** volatile g_395 = (void*)0;
static int ** const volatile g_396 = &g_39;
static int ** volatile g_398 = &g_39;
static int g_430 = (-6L);
static int * volatile g_429 = &g_430;
static volatile short g_444 = 0L;
static volatile short *g_443 = &g_444;
static volatile short * volatile * volatile g_442 = &g_443;
static int ** const volatile g_448 = (void*)0;
static unsigned char g_462 = 247UL;
static int * volatile g_467 = &g_255;
static int ** volatile g_480 = &g_39;
static const volatile int g_533 = 9L;
static const volatile int * volatile g_532 = &g_533;
static int *g_535 = &g_255;
static int ** volatile g_534 = &g_535;
static int ** volatile g_538 = &g_535;
static volatile short g_548 = 0xED95L;
static int ** volatile g_553 = &g_39;
static int ** const volatile g_555 = (void*)0;
static int ** volatile g_556 = &g_535;
static int ** volatile g_592 = &g_39;
static const int g_594 = 0xC2B9D959L;
static const int ** volatile g_595 = &g_87;
static int * volatile g_637 = &g_430;
static int g_648 = 0xAB950D48L;
static int ** const volatile g_652 = &g_39;
static unsigned char * const *g_676 = (void*)0;
static unsigned char g_679 = 248UL;
static int ** volatile g_700 = &g_535;
static int ** volatile g_701 = &g_39;
static int ** volatile g_710 = &g_39;
static short g_711 = (-1L);
static int ** volatile g_715 = (void*)0;
static unsigned g_730 = 4294967293UL;



static const unsigned func_1(void);
static int * func_2(const short p_3, const int p_4, int * p_5, int * p_6);
static int * func_8(int p_9, int p_10);
static int * func_11(int * p_12, unsigned short p_13, int * p_14);
static int * func_15(int * p_16, int * p_17, char p_18);
static int * func_19(unsigned p_20, int * p_21, int p_22, unsigned char p_23);
static int * func_24(int * p_25, const int * p_26, unsigned char p_27, int * p_28, int p_29);
static int * func_30(const int * p_31, int * p_32, int * p_33);
static int * func_36(int * p_37);
static int * const func_41(int * p_42);
static const unsigned func_1(void)
{
    const int *l_34 = &g_7;
    int *l_35 = &g_7;
    int *l_38 = &g_7;
    const int **l_481 = &g_87;
    int **l_509 = (void*)0;
    int **l_510 = &l_35;
    char l_511 = (-1L);
    int l_653 = 0x1BD6B79AL;
    int l_720 = 0x2B729CE9L;
    (*l_510) = func_2(((g_7 != (((((*l_510) = func_8((((*l_510) = func_11(func_15(&g_7, func_19(g_7, ((*l_510) = func_24(&g_7, ((*l_481) = func_30(l_34, l_35, func_36((g_39 = l_38)))), g_281, &g_7, g_7)), g_7, l_511), l_653), g_679, &g_7)) == (void*)0), g_679)) == (void*)0) ^ g_648) < g_594)) || l_720), g_679, &g_7, &g_648);
    return g_548;
}







static int * func_2(const short p_3, const int p_4, int * p_5, int * p_6)
{
    const int **l_721 = &g_87;
    int *l_744 = &g_7;
    char *l_838 = &g_281;
    int **l_845 = &g_39;
    int *l_846 = &g_255;
    unsigned char l_847 = 0x5DL;
    (*l_721) = (*g_124);
    for (g_61 = 17; (g_61 != 32); g_61++)
    {
        short l_740 = 0xDCFAL;
        int *l_773 = &g_648;
        unsigned **l_825 = (void*)0;
        (*l_721) = &p_4;
        if ((**l_721))
            continue;
    }
    (*l_846) = (((**g_442) >= (((safe_sub_func_int32_t_s_s((&g_281 == l_838), ((*g_127) = (safe_mul_func_uint16_t_u_u(1UL, (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_255, (((((&g_281 == (void*)0) > (((*l_845) = p_5) != l_846)) != l_847) == p_4) ^ (**l_721)))), p_4))))))) != 0x5FL) <= 0x4144L)) >= (*l_846));
    return (*g_710);
}







static int * func_8(int p_9, int p_10)
{
    int *l_719 = (void*)0;
    l_719 = (*g_396);
    return (*g_538);
}







static int * func_11(int * p_12, unsigned short p_13, int * p_14)
{
    char *l_714 = &g_281;
    const unsigned short *l_718 = &g_49;
    const unsigned short **l_717 = &l_718;
    const unsigned short ***l_716 = &l_717;
    (*g_710) = func_41(p_14);
    (*g_284) = func_19((g_711 = 3UL), (*g_396), (((*g_127) = (safe_add_func_int16_t_s_s(p_13, ((*g_39) < (((*l_714) = ((*g_188) = (*g_188))) == (l_714 == (void*)0)))))) && ((void*)0 == &g_127)), (**g_161));
    (*g_39) = ((l_716 != &l_717) ^ p_13);
    return p_14;
}







static int * func_15(int * p_16, int * p_17, char p_18)
{
    unsigned l_658 = 0x8990C810L;
    int *l_709 = &g_255;
    if ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_658, (&p_17 == &p_16))), ((((*g_535) = 0xC753CE2FL) > (safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_658, (safe_sub_func_uint8_t_u_u(((p_18 > (l_658 == l_658)) && (*g_140)), p_18)))), g_61))) | 0UL))))
    {
        char l_668 = 8L;
        for (p_18 = 7; (p_18 == 0); p_18 = safe_sub_func_uint32_t_u_u(p_18, 2))
        {
            int *l_667 = &g_648;
            int *l_692 = &g_430;
        }
    }
    else
    {
        unsigned char l_705 = 0x77L;
        for (g_281 = (-16); (g_281 <= (-5)); ++g_281)
        {
            int *l_704 = &g_40;
            if ((*p_17))
                break;
            l_704 = (void*)0;
            (*p_17) = l_705;
            if ((*g_429))
                continue;
        }
    }
    for (l_658 = 27; (l_658 != 16); l_658--)
    {
        int **l_708 = &g_39;
        (*l_708) = p_17;
        if ((*g_637))
            break;
    }
    return l_709;
}







static int * func_19(unsigned p_20, int * p_21, int p_22, unsigned char p_23)
{
    int l_524 = 0x2A01E9A5L;
    int *l_525 = &g_40;
    unsigned *l_623 = &g_104;
    unsigned **l_622 = &l_623;
    unsigned ***l_621 = &l_622;
    char **l_644 = (void*)0;
    char ***l_643 = &l_644;
    unsigned short * const *** const l_647 = (void*)0;
    for (g_49 = 10; (g_49 > 58); g_49++)
    {
        unsigned char *l_520 = &g_462;
        int l_521 = (-10L);
        const int *l_554 = &g_40;
        unsigned short * const **l_561 = (void*)0;
        int l_590 = 0xA76652DCL;
        int **l_651 = &l_525;
    }
    return (*g_534);
}







static int * func_24(int * p_25, const int * p_26, unsigned char p_27, int * p_28, int p_29)
{
    const int **l_484 = (void*)0;
    const int ***l_485 = (void*)0;
    const int ***l_486 = &l_484;
    const int **l_487 = &g_87;
    const int ***l_488 = &l_487;
    unsigned short *l_507 = &g_49;
    for (g_49 = 0; (g_49 != 5); g_49++)
    {
        return p_25;
    }
    if ((((*l_486) = l_484) != ((*l_488) = l_487)))
    {
        (*g_254) = (safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(4UL, 5)) == (safe_div_func_int8_t_s_s(p_29, (*g_162)))) & 8L), (**g_442)));
        return p_25;
    }
    else
    {
        int *l_495 = &g_430;
        int l_500 = 0xB460BE90L;
        short *l_508 = &g_321;
        (**l_488) = p_26;
        (*l_487) = l_495;
        (*l_495) = (safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((0x4C72L & l_500), ((*l_495) || (**l_487)))) > (**g_139)), (safe_lshift_func_int16_t_s_u(((*l_508) = (safe_mul_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(p_29, (0x1F92L < (l_507 == (void*)0)))) || p_27) < 1L) && p_29), (**g_161)))), 8))));
    }
    return p_25;
}







static int * func_30(const int * p_31, int * p_32, int * p_33)
{
    return p_33;
}







static int * func_36(int * p_37)
{
    int l_59 = 0xD761E7FFL;
    unsigned char *l_94 = (void*)0;
    unsigned char *l_97 = &g_61;
    int *l_114 = &g_7;
    unsigned short l_245 = 65526UL;
    unsigned short l_246 = 0xA7EAL;
    short *l_332 = &g_321;
    short **l_331 = &l_332;
    if ((~(-1L)))
    {
        int *l_46 = &g_40;
        const unsigned char *l_159 = &g_61;
        const unsigned char **l_158 = &l_159;
        (*g_45) = func_41(p_37);
        (*g_47) = l_46;
        if ((**g_47))
        {
            unsigned short *l_48 = &g_49;
            const int *l_51 = &g_40;
            const int **l_50 = &l_51;
            (*l_46) = (0xD2F2L | ((*l_48) = (+g_40)));
            (*l_50) = (void*)0;
        }
        else
        {
            char l_58 = 0x5FL;
            unsigned char *l_60 = &g_61;
            short *l_62 = &g_63;
            const int *l_82 = &g_7;
            int l_108 = 0L;
            char ***l_190 = (void*)0;
            if (((-1L) || (((*l_62) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(l_58, g_40)) & (((l_59 & l_59) && ((*l_60) = g_49)) && l_58)), 14)), 2))) | l_58)))
            {
                char *l_66 = &l_58;
                unsigned char **l_95 = (void*)0;
                unsigned char **l_96 = &l_94;
                unsigned short *l_100 = (void*)0;
                unsigned short *l_101 = &g_49;
                unsigned *l_102 = (void*)0;
                unsigned *l_103 = &g_104;
                int l_107 = (-1L);
                if ((safe_mul_func_uint8_t_u_u(0xC8L, ((4294967293UL & ((-1L) < ((*l_66) = g_49))) || ((safe_div_func_uint8_t_u_u(((*p_37) | (**g_47)), (~l_58))) && (~0x1589A458L))))))
                {
                    unsigned short l_73 = 0xEAADL;
                    int **l_80 = (void*)0;
                    const int **l_83 = (void*)0;
                    const int **l_85 = (void*)0;
                    (*l_46) = (g_49 || ((((safe_sub_func_int16_t_s_s(l_73, l_73)) > (safe_mul_func_uint32_t_u_u(l_58, (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(l_73, l_58)) && 0UL), 1L))))) != (*l_46)) | g_40));
                    (*g_81) = p_37;
                    (*g_86) = l_82;
                }
                else
                {
                    char l_88 = 0x94L;
                    unsigned l_91 = 0xD1BD9F01L;
                    (*l_46) = (((*l_46) != l_88) == 0x26L);
                    for (l_88 = 0; (l_88 < 0); l_88 = safe_add_func_int16_t_s_s(l_88, 1))
                    {
                        (*l_46) = l_91;
                    }
                }
                if ((((*l_103) = (((g_40 ^ l_59) & (safe_rshift_func_uint8_t_u_s(((((*l_96) = l_94) == (l_97 = l_97)) & (safe_mul_func_uint8_t_u_u((*l_82), (*l_46)))), 5))) > ((*l_101) = 1UL))) && ((*l_103) = (((safe_mul_func_uint8_t_u_u(((*l_46) || (l_108 = l_107)), 0x5AL)) & 0x42L) <= (-6L)))))
                {
                    int *l_116 = &g_40;
                    (*l_46) = (safe_lshift_func_int16_t_s_s(g_111, 2));
                    for (l_58 = 24; (l_58 >= 18); --l_58)
                    {
                        if ((**g_81))
                            break;
                        (*g_115) = func_41(l_114);
                    }
                    return l_116;
                }
                else
                {
                    char **l_118 = &l_66;
                    char ***l_117 = &l_118;
                    (*l_117) = &l_66;
                    return (*g_115);
                }
            }
            else
            {
                unsigned short l_125 = 0x4556L;
                for (g_63 = 0; (g_63 != 19); g_63++)
                {
                }
            }
            if ((*l_46))
            {
                (*g_45) = &l_108;
            }
            else
            {
                g_126 = (void*)0;
            }
            for (l_59 = 0; (l_59 <= 12); l_59 = safe_add_func_uint16_t_u_u(l_59, 1))
            {
                int l_130 = 1L;
                int *l_131 = &l_130;
                const char *l_239 = &g_189;
                const char **l_238 = &l_239;
            }
        }
        (*l_46) = (*l_46);
    }
    else
    {
        int *l_244 = &g_40;
        unsigned l_308 = 0xDC9E869FL;
        int l_330 = (-1L);
        int *l_378 = &g_40;
lbl_394:
        (*l_244) = (**g_45);
        if (((l_245 < l_246) <= (*l_244)))
        {
            char * const *l_247 = &g_188;
            int l_267 = (-1L);
            int *l_323 = &g_255;
            if ((*g_87))
            {
                char * const **l_248 = &l_247;
                unsigned short *l_249 = &l_245;
                unsigned l_278 = 0x7D913FAEL;
                if (((*l_244) = (g_141 < ((*l_249) = (((*l_248) = l_247) == &g_188)))))
                {
                    int *l_253 = &g_40;
                    int *l_256 = &g_255;
lbl_257:
                    for (g_189 = 0; (g_189 <= 10); g_189++)
                    {
                        unsigned char l_252 = 0UL;
                        l_252 = 0L;
                        (*l_244) = ((**g_115) == (*p_37));
                        return l_253;
                    }
                    (*g_254) = ((*l_244) = (**g_81));
                    (*l_256) = ((*l_244) = (*p_37));
                    if (g_7)
                        goto lbl_257;
                }
                else
                {
                    unsigned l_261 = 1UL;
                    unsigned short **l_264 = &l_249;
                    short *l_268 = &g_63;
                    (*g_269) = ((safe_unary_minus_func_int8_t_s(((!255UL) > (~(~((void*)0 != (*g_126))))))) < (safe_sub_func_uint32_t_u_u((((l_261 > (safe_lshift_func_int16_t_s_s(((*g_87) & (((*l_264) = &l_246) != &g_49)), 6))) && (((*l_268) = (safe_rshift_func_int8_t_s_s(((((*l_244) = l_261) < l_267) == 0x9B09L), 5))) > g_49)) > (*l_114)), (*p_37))));
                    for (g_189 = (-6); (g_189 < (-26)); g_189 = safe_sub_func_uint8_t_u_u(g_189, 1))
                    {
                        int l_273 = 0x08D486CFL;
                        l_278 = (safe_unary_minus_func_int8_t_s(((0x0BL & ((*l_114) <= l_273)) || (0UL != (safe_mod_func_uint8_t_u_u(((*l_97) = (***g_160)), (safe_rshift_func_uint8_t_u_u((&g_127 != &g_127), 4))))))));
                        if ((*p_37))
                            break;
                        if (l_261)
                            break;
                        (*l_244) = l_267;
                    }
                    (*g_279) = l_114;
                }
            }
            else
            {
                int **l_280 = &l_114;
                (*l_280) = func_41(p_37);
                (*g_225) = ((*l_280) = p_37);
            }
            if (g_281)
            {
                unsigned l_282 = 0xBC71CFC6L;
                int *l_283 = &l_267;
                char l_304 = 0x27L;
                short *l_311 = (void*)0;
                unsigned short l_318 = 65535UL;
                unsigned short *l_319 = &l_246;
                short *l_320 = &g_321;
                if ((0L || l_282))
                {
                    int *l_295 = &l_267;
                    if ((*g_87))
                    {
                        char l_285 = (-1L);
                        int *l_286 = (void*)0;
                        (*g_284) = l_283;
                        l_285 = (*p_37);
                        (*g_287) = l_286;
                    }
                    else
                    {
                        int **l_294 = &g_39;
                        unsigned char **l_299 = &l_97;
                        unsigned char ***l_298 = &l_299;
                        unsigned short *l_300 = &g_49;
                        unsigned short *l_301 = &l_246;
                        (*l_295) = (safe_rshift_func_uint8_t_u_u((*g_140), ((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_267 != (+((((*l_294) = p_37) != (l_283 = l_295)) >= (*g_188)))), (safe_div_func_uint16_t_u_u(65535UL, ((*l_301) = (+((*l_300) = ((*g_127) | ((void*)0 == l_298))))))))), 0x0A84L)) ^ (*l_295))));
                        (*l_283) = (safe_add_func_uint32_t_u_u(l_304, (-7L)));
                        (*l_294) = p_37;
                        (*g_254) = (*p_37);
                    }
                }
                else
                {
                    unsigned char l_307 = 0xFFL;
                    (*l_244) = (((*l_283) & (3L >= 7L)) > (((l_307 <= (l_308 && (((((l_267 == (((*g_140) & l_267) > (safe_div_func_uint32_t_u_u((*g_127), (*g_87))))) || (*l_114)) & l_267) || 0x327CL) ^ (*p_37)))) != (*l_114)) && (*g_188)));
                }
                (*l_244) = (((g_63 = g_255) ^ ((*l_320) = (l_267 = (((safe_lshift_func_int16_t_s_u((((*l_114) < ((*g_87) || ((***g_160) && ((+(((((l_267 | ((*l_114) || (((*l_319) = ((*l_114) | ((*g_127) | ((!(safe_div_func_uint16_t_u_u(0xB6CDL, l_267))) != l_318)))) < (*l_283)))) == (**g_124)) != 65527UL) || 1UL) >= 0UL)) | (*l_244))))) <= 0x2EL), 8)) == 1L) >= (*l_114))))) <= (*p_37));
                (*l_244) = (!(**g_86));
            }
            else
            {
                int *l_322 = &g_255;
                int **l_324 = &l_322;
                l_267 = (~(*p_37));
                (*l_324) = func_41((l_323 = (p_37 = l_322)));
            }
            (*l_323) = ((void*)0 != &g_127);
            for (g_40 = 0; (g_40 >= 15); ++g_40)
            {
                int l_329 = 0x47712989L;
                l_329 = ((***g_160) | (safe_rshift_func_uint8_t_u_s((**g_161), 4)));
                l_330 = 0xFD4661E4L;
            }
        }
        else
        {
            const int *l_334 = &g_7;
            unsigned *l_359 = (void*)0;
            unsigned *l_360 = &l_308;
            const unsigned short l_361 = 0x60BBL;
            unsigned char **l_388 = &l_97;
            short *l_479 = &g_63;
lbl_431:
            if (((void*)0 == &g_187))
            {
                short ***l_333 = &l_331;
                const int **l_335 = &g_87;
lbl_336:
                (*l_333) = l_331;
                (*l_335) = l_334;
                if (g_104)
                    goto lbl_336;
            }
            else
            {
lbl_366:
                (*g_337) = p_37;
            }
            (*g_269) = (((safe_div_func_uint16_t_u_u(((*l_334) < (*l_114)), (~g_281))) <= 1UL) <= ((*l_334) && (0x3CB9L || ((safe_sub_func_uint16_t_u_u(65527UL, 6UL)) > (safe_mod_func_int32_t_s_s((**g_243), (*p_37)))))));
            if (((*l_244) = (safe_mul_func_uint8_t_u_u(((*l_97) = (((*l_360) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(0x481DL, (safe_mod_func_uint8_t_u_u(((*l_244) == (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((*l_244), ((*l_244) ^ (((((**g_187) = ((*l_114) <= ((**g_139) != (((*p_37) || ((*g_127) = (*l_334))) < (safe_unary_minus_func_int8_t_s((((safe_sub_func_uint16_t_u_u((0xFCL || (*l_244)), (*l_244))) <= (*l_244)) | 0x06L))))))) && (*l_334)) && (*l_334)) | 0x5A230B5BL)))), 0x29B3L))), (*l_334))))), (*l_244)))) || l_361)), (*l_244)))))
            {
                unsigned l_382 = 0x6B8BF16BL;
                unsigned char **l_386 = (void*)0;
                (*l_244) = (0xC1L >= (*l_334));
                for (g_49 = 0; (g_49 == 3); g_49++)
                {
                    unsigned char **l_364 = &l_94;
                    int l_371 = 1L;
                    if (((l_97 == ((*l_364) = &g_61)) > (***g_160)))
                    {
                        int **l_365 = &g_39;
                        unsigned short *l_369 = &l_245;
                        unsigned short *l_370 = &l_246;
                        int *l_372 = &g_255;
                        (*g_337) = func_41(((*l_365) = (*g_337)));
                        (*l_365) = (*l_365);
                        if (g_61)
                            goto lbl_366;
                        (*l_372) = ((((safe_lshift_func_uint16_t_u_u(((*l_370) = ((*l_369) = (**l_365))), l_371)) | (-7L)) | ((*l_244) = (**g_225))) || 0x57FDL);
                    }
                    else
                    {
                        (*g_375) = g_373;
                        if ((*p_37))
                            continue;
                    }
                    for (l_246 = 13; (l_246 > 47); l_246++)
                    {
                        unsigned short *l_383 = &l_245;
                        unsigned short *l_384 = &g_385;
                        unsigned char ***l_387 = &l_364;
                        (*g_379) = l_378;
                        (*g_39) = (safe_sub_func_uint8_t_u_u((((*l_384) = ((*l_383) = (l_382 = l_371))) == ((**l_331) = 0x1018L)), ((**g_115) < (((*l_387) = l_386) != l_388))));
                    }
                }
                if ((*g_87))
                {
                    if (l_382)
                    {
                        int **l_389 = (void*)0;
                        (*g_124) = p_37;
                        (*g_391) = (*g_379);
                        (*g_254) = (safe_mul_func_int8_t_s_s((*l_378), (*l_114)));
                        (*l_378) = (*p_37);
                    }
                    else
                    {
                        int **l_397 = &g_39;
                        if (g_189)
                            goto lbl_394;
                        (*g_396) = (*g_81);
                        (*l_397) = p_37;
                    }
                    (*g_398) = p_37;
                    for (l_330 = 0; (l_330 < 27); l_330 = safe_add_func_int32_t_s_s(l_330, 2))
                    {
                        int *l_401 = &g_255;
                        return l_401;
                    }
                }
                else
                {
                    unsigned l_420 = 0xE247BFBDL;
                    if ((*p_37))
                    {
                        unsigned **l_402 = &l_360;
                        (*l_244) = ((((*l_402) = (void*)0) != p_37) && (safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(g_255, 13)) && (safe_mod_func_int16_t_s_s((+((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u(0x9BL, ((*l_114) <= (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*l_378) ^ (safe_sub_func_int8_t_s_s(1L, 0x5FL))), ((*g_127) = (*g_127)))), g_111))))))), (*l_378))) & l_420)), 0xB443L))), (*l_378))));
                    }
                    else
                    {
                        char l_425 = (-9L);
                        int *l_426 = &g_255;
                        (*g_429) = ((*l_244) = ((safe_mul_func_int16_t_s_s(((*l_378) != (safe_sub_func_int16_t_s_s(((l_382 <= (((*l_426) = l_425) >= (safe_sub_func_int16_t_s_s(g_63, 0xE0D6L)))) || (*g_127)), ((0x4CCEA3E2L != (**g_126)) < (251UL > (**g_161)))))), 0x8144L)) | 0L));
                        (*l_426) = (*p_37);
                        if (l_382)
                            goto lbl_431;
                        return p_37;
                    }
                }
            }
            else
            {
                unsigned short l_439 = 7UL;
                int **l_468 = &g_39;
                for (l_59 = (-18); (l_59 < (-28)); --l_59)
                {
                    unsigned short *l_438 = &l_245;
                    int *l_447 = &g_7;
                    int **l_449 = &l_447;
                    (*l_244) = (safe_rshift_func_uint8_t_u_s(((*l_97) = (safe_lshift_func_uint16_t_u_s(((*l_438) = (*l_334)), 14))), (+(*l_334))));
                    (*l_378) = (((l_439 | (safe_lshift_func_int8_t_s_s(l_439, (g_442 != (void*)0)))) && 248UL) == (safe_mod_func_int16_t_s_s((*l_334), 0x8BCDL)));
                    (*l_449) = func_41(l_447);
                    if ((*p_37))
                    {
                        int l_460 = 1L;
                        unsigned char *l_461 = &g_462;
                        (*l_244) = ((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*l_360) = 0xF2F3D993L), (safe_div_func_int8_t_s_s(((*g_188) || ((*l_97) = (*l_244))), (safe_div_func_int32_t_s_s((*g_87), (safe_sub_func_int16_t_s_s((((*l_461) = ((*l_334) || l_460)) > (+(**l_449))), (-1L))))))))), (**g_139))) <= (-1L));
                        (*l_244) = (**g_225);
                    }
                    else
                    {
                        (*g_467) = (safe_mod_func_int32_t_s_s(((*l_244) = ((((void*)0 == &l_94) != ((*l_334) <= (**g_126))) > (safe_lshift_func_uint8_t_u_s((g_49 < (*l_244)), 2)))), ((*l_360) = (*l_114))));
                        (*l_378) = (**g_398);
                        return p_37;
                    }
                }
                (*l_468) = func_41((*g_391));
            }
            (*l_378) = (safe_mul_func_int16_t_s_s(((**l_331) = (safe_sub_func_uint32_t_u_u((*l_244), (safe_lshift_func_int16_t_s_s((*l_114), 3))))), (!((*l_479) = ((safe_rshift_func_uint16_t_u_s((*l_378), 11)) >= ((**g_160) != (*l_388)))))));
        }
        (*g_480) = func_41((*g_284));
        (*g_279) = l_378;
    }
    p_37 = p_37;
    return l_114;
}







static int * const func_41(int * p_42)
{
    (*g_43) = ((~0xCC7C44D9L) | 1L);
    return &g_7;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
