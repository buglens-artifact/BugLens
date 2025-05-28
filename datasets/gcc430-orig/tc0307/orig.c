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



static unsigned char g_16 = 255UL;
static int g_46 = 4L;
static int *g_45 = &g_46;
static short g_56 = 0x1295L;
static short g_59 = 3L;
static unsigned short g_73 = 0x931BL;
static int g_80 = (-1L);
static int g_91 = (-1L);
static int g_93 = 2L;
static int *g_92 = &g_93;
static int g_98 = 0xBFD34DB6L;
static char g_108 = 0x00L;
static char g_114 = 0L;
static const int g_127 = 0L;
static unsigned char *g_139 = &g_16;
static unsigned char ** const g_138 = &g_139;
static short **g_149 = (void*)0;
static const int *g_151 = &g_93;
static int **g_186 = &g_45;
static int g_199 = 0x458984F7L;
static int *g_198 = &g_199;
static unsigned g_212 = 0UL;
static unsigned char g_226 = 0x9AL;
static const int *g_263 = &g_98;
static unsigned g_267 = 2UL;
static unsigned short g_298 = 0UL;
static unsigned *g_320 = (void*)0;
static unsigned *g_330 = &g_212;
static int g_332 = (-1L);
static short ***g_375 = &g_149;
static short ****g_374 = &g_375;
static unsigned char g_408 = 0x4FL;
static const int g_412 = 1L;
static unsigned short *g_423 = &g_73;
static unsigned short **g_422 = &g_423;
static short *g_454 = &g_59;
static unsigned short g_554 = 0xB5BDL;
static unsigned g_555 = 9UL;
static unsigned g_615 = 0x7A1D9642L;
static unsigned **g_630 = &g_320;
static unsigned *** const g_629 = &g_630;
static int *g_713 = &g_332;
static int **g_712 = &g_713;
static char *g_722 = &g_114;
static char **g_721 = &g_722;
static char g_742 = 0x2EL;
static unsigned g_778 = 0xCE81A08CL;
static unsigned char g_829 = 3UL;
static char *g_840 = &g_114;
static unsigned g_842 = 1UL;
static char ** const *g_1014 = &g_721;
static char ** const **g_1013 = &g_1014;
static char ** const ***g_1012 = &g_1013;
static char ***g_1017 = &g_721;
static char ****g_1016 = &g_1017;
static char *****g_1015 = &g_1016;
static const unsigned g_1043 = 0UL;
static unsigned g_1045 = 0x3F4FB8CCL;



static int func_1(void);
static const int * func_2(const int * p_3);
static int * func_4(unsigned char p_5, unsigned char p_6, int * p_7, int p_8);
static unsigned char func_9(unsigned p_10, char p_11);
static int * func_12(unsigned p_13, const int * p_14);
static int * func_17(unsigned short p_18, unsigned char p_19, char p_20, int * p_21, const int * const p_22);
static const unsigned char func_26(const int p_27, int * p_28);
static short func_31(unsigned char p_32, short p_33, int * p_34);
static unsigned short func_37(int * p_38, int * p_39);
static int * func_40(int * p_41, int p_42, int * p_43, int * p_44);
static int func_1(void)
{
    int l_15 = 0x7D0FA516L;
    int **l_197 = &g_92;
    int *l_200 = &g_199;
    unsigned short ***l_572 = (void*)0;
    unsigned short **l_574 = &g_423;
    unsigned short ***l_573 = &l_574;
    const int **l_604 = &g_263;
    const unsigned *l_1042 = &g_1043;
    const unsigned **l_1041 = &l_1042;
    unsigned *l_1044 = &g_842;
    int *l_1084 = &g_46;
    (*l_604) = func_2(((*l_604) = func_4(func_9((((*l_197) = func_12(l_15, (g_16 , (void*)0))) != (l_200 = g_198)), g_91), ((4294967291UL | (((*l_573) = &g_423) != (void*)0)) , l_15), g_320, g_91)));
    if ((((*l_200) = ((**g_422) = (((*l_1041) = l_200) == l_1044))) <= g_1045))
    {
        const unsigned char l_1052 = 0xD0L;
        int *l_1053 = &g_98;
        (*g_186) = l_1053;
        return (*g_92);
    }
    else
    {
        unsigned l_1062 = 4294967293UL;
        int l_1065 = 0x8BD72BAAL;
        short l_1066 = 0xAF14L;
        short **l_1079 = &g_454;
        (*l_604) = (((**g_422) , (((**g_422) = (&g_186 != (void*)0)) < ((safe_mod_func_int16_t_s_s((l_1062 <= 4UL), l_1065)) < l_1066))) , (void*)0);
        for (l_1066 = 0; (l_1066 != 24); l_1066 = safe_add_func_int16_t_s_s(l_1066, 6))
        {
            int *l_1073 = &g_98;
            int l_1078 = (-6L);
            for (g_80 = (-16); (g_80 == (-5)); ++g_80)
            {
                int *l_1071 = &g_98;
                unsigned char l_1072 = 0x4FL;
                int *l_1082 = (void*)0;
                (*l_604) = l_1071;
                for (g_46 = 29; (g_46 <= (-23)); g_46 = safe_sub_func_int32_t_s_s(g_46, 1))
                {
                    short l_1083 = (-1L);
                    (*g_186) = l_1082;
                    (*l_604) = (*g_186);
                    (*l_200) = ((*l_1071) = l_1083);
                }
            }
            if ((*l_1073))
                continue;
        }
    }
    (*l_1084) = (((*l_200) = 0x130FL) | l_15);
    (*g_186) = &g_93;
    return (*g_92);
}







static const int * func_2(const int * p_3)
{
    short l_610 = 1L;
    unsigned short l_614 = 0xFF01L;
    unsigned ***l_628 = (void*)0;
    int *l_634 = &g_93;
    int l_638 = 9L;
    int *l_646 = &g_98;
    int * const *l_658 = (void*)0;
    int * const **l_657 = &l_658;
    char ***l_676 = (void*)0;
    unsigned **l_683 = &g_320;
    int **l_717 = &g_198;
    int l_761 = 0x1A142833L;
    int *l_905 = (void*)0;
    unsigned char l_1003 = 0x35L;
    char l_1040 = 0xE6L;
    for (g_91 = (-6); (g_91 >= 1); g_91++)
    {
        const int *l_607 = (void*)0;
        return l_607;
    }
    for (g_80 = (-29); (g_80 == 26); g_80 = safe_add_func_uint16_t_u_u(g_80, 2))
    {
        unsigned l_611 = 7UL;
        const int **l_612 = &g_263;
        char *l_613 = &g_114;
        const unsigned char l_631 = 0UL;
        int *l_632 = &g_93;
        int *l_686 = (void*)0;
        int **l_714 = (void*)0;
        l_611 = (g_114 < l_610);
        (*l_612) = p_3;
        if ((((*l_613) = (-1L)) , l_614))
        {
            int *l_620 = &g_332;
            int **l_621 = &l_620;
            int l_633 = 0xDE27F858L;
            char l_635 = 0xC9L;
            short **l_668 = &g_454;
            char **l_679 = (void*)0;
            char ***l_678 = &l_679;
            int l_687 = 0x9D51CA2FL;
            l_633 = (g_615 != (safe_sub_func_uint32_t_u_u((*g_330), 2UL)));
            for (g_555 = (-26); (g_555 <= 57); g_555++)
            {
                const int *l_639 = &g_98;
                short **l_667 = (void*)0;
                char ****l_677 = (void*)0;
                char ****l_680 = &l_676;
                int *l_684 = (void*)0;
                int *l_685 = &l_633;
                (*l_612) = l_639;
                (*l_612) = func_17((safe_sub_func_uint32_t_u_u((((((((*l_634) , ((&l_612 != (void*)0) >= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((*l_634), (*l_632))), 0UL)))) <= (*l_639)) > ((*l_632) && ((*l_632) , 0x43L))) > (*g_423)) && 0xDEL) | (**g_138)), l_635)), (*l_634), g_199, l_646, p_3);
                for (l_611 = 3; (l_611 < 35); ++l_611)
                {
                    unsigned l_666 = 4294967295UL;
                    const int *l_669 = &l_638;
                    for (g_46 = (-22); (g_46 > 19); g_46 = safe_add_func_uint32_t_u_u(g_46, 1))
                    {
                        return (*l_612);
                    }
                    p_3 = func_4((((*g_330) = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((*g_45) & ((void*)0 == l_657)), (*l_632))), (safe_unary_minus_func_uint16_t_u((((safe_div_func_uint32_t_u_u(0xB16D08ABL, (*p_3))) , (((((((*g_198) = (*p_3)) < (safe_add_func_int8_t_s_s(((*l_613) = (safe_rshift_func_int16_t_s_s((l_666 , (l_666 && 1UL)), 15))), (**l_612)))) > g_212) | l_633) < 65535UL) , l_667)) == l_668))))), (*l_639)))) & (*l_639)), l_633, &l_638, g_98);
                    return p_3;
                }
                (*g_186) = func_4((((l_633 , (*l_634)) > 1UL) , l_687), (*g_139), &l_638, g_412);
            }
        }
        else
        {
            int *l_692 = &g_46;
            unsigned char l_702 = 255UL;
            short l_715 = 0xB89AL;
            for (g_199 = 15; (g_199 < (-14)); g_199--)
            {
                unsigned l_695 = 0xFE2B892EL;
                for (l_614 = 6; (l_614 <= 15); l_614 = safe_add_func_uint8_t_u_u(l_614, 4))
                {
                    int *l_703 = &g_91;
                    int l_716 = 0xEDCC5794L;
                    (*l_612) = (*g_186);
                    (*l_632) = (safe_sub_func_int16_t_s_s(((-1L) > ((0xDCL <= (safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((*g_423), (safe_sub_func_int32_t_s_s(l_716, l_716)))) <= (**g_422)), 0xFD52L))) & l_716)), l_695));
                }
            }
        }
        (*l_612) = (void*)0;
    }
    if (func_37(((*g_186) = &l_638), &g_93))
    {
        const char *l_719 = &g_114;
        const char **l_718 = &l_719;
        const char ***l_720 = &l_718;
        int l_723 = 0x5FD3CB8AL;
        unsigned short l_728 = 65535UL;
        short ***l_729 = &g_149;
        unsigned short ***l_792 = &g_422;
        int l_835 = 1L;
        unsigned short l_873 = 0UL;
        int *l_886 = &l_638;
        int l_895 = 0xD0BDEE63L;
        if (((((*l_720) = l_718) != g_721) <= ((*l_634) <= (l_723 | 0UL))))
        {
            int *l_724 = &g_93;
            l_724 = (*l_717);
            return p_3;
        }
        else
        {
            char l_725 = 6L;
            short ***l_730 = (void*)0;
            int *l_740 = &l_723;
            unsigned l_743 = 4294967295UL;
            char ****l_795 = &l_676;
            int l_802 = 0x9269D617L;
            unsigned char l_852 = 0x6AL;
            int * const l_858 = &g_93;
            unsigned char l_897 = 1UL;
            int *l_906 = (void*)0;
            if ((((*g_330) = 0xD74EE14CL) == (((*g_454) && (*g_423)) == (((l_725 && (~l_725)) | (*l_634)) , ((safe_rshift_func_int8_t_s_s(((((void*)0 == (*g_422)) , ((*g_629) = (*g_629))) != (void*)0), l_723)) != l_728)))))
            {
                (*l_646) = l_725;
                (*g_198) = ((l_729 != ((*g_374) = l_730)) != (((l_723 = (l_725 >= 8UL)) , (&g_721 != l_676)) || 0x0010F954L));
            }
            else
            {
                char l_733 = 0xE4L;
                char *l_741 = &g_742;
                int *l_744 = &g_199;
                short *l_781 = &g_56;
                (**l_717) = (safe_sub_func_int32_t_s_s(((l_733 >= func_31(((**g_138) = (safe_lshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((-2L), l_725)) != ((!((((safe_lshift_func_uint8_t_u_u((func_37(func_12(l_725, p_3), l_740) ^ (((*l_741) = (-9L)) | 0x1CL)), l_728)) < 0UL) | l_743) >= l_728)) , (*g_151))) < l_733), 5))), g_199, l_744)) ^ (*l_744)), 0xE5357305L));
                (*l_634) = ((**g_422) || ((safe_div_func_uint32_t_u_u(0x6B662F56L, (*l_740))) | ((*p_3) < (~(~(*l_646))))));
                if (((*l_634) = (**g_186)))
                {
                    int *l_751 = &l_723;
                    if ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((**l_717), (*l_740))), 7)))
                    {
                        (*g_186) = l_751;
                        (*g_198) = (-1L);
                        (**l_717) = (func_37(&l_723, l_744) , (*g_151));
                    }
                    else
                    {
                        return (*l_717);
                    }
                }
                else
                {
                    unsigned l_760 = 4294967292UL;
                    short *l_782 = &l_610;
                    (*l_717) = func_4((*l_744), ((safe_mod_func_uint32_t_u_u((*l_634), l_728)) , ((*l_740) & (safe_mod_func_int16_t_s_s(((0x4ADFL & ((*l_634) <= (*l_740))) < (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((0xC0L >= 1L) , (*l_744)), 0x1510L)), l_760))), l_761)))), &l_723, (**g_712));
                    if ((safe_add_func_int32_t_s_s(((*p_3) , ((*l_646) = ((func_9((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*g_151), (safe_mod_func_int8_t_s_s((*g_722), (+(safe_lshift_func_int8_t_s_u((((*l_744) == (safe_add_func_int8_t_s_s(((0xA5144A77L > ((((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(0xD8L, (((*l_741) = g_778) > (*l_744)))) ^ ((safe_sub_func_int16_t_s_s(l_723, (*l_740))) & 0x05L)), (*g_423))) , l_781) == l_782) , (*p_3))) , 0x70L), (-6L)))) , (*l_740)), 1))))))), 7)), (*l_744)) , l_729) != (void*)0))), (-4L))))
                    {
                        return p_3;
                    }
                    else
                    {
                        unsigned char l_783 = 251UL;
                        (*l_717) = func_17((l_783 , (**g_422)), ((0x045748B2L == (((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(((*g_423) , l_728), (1L > (safe_lshift_func_int8_t_s_u(((((((*l_740) ^ (safe_lshift_func_uint8_t_u_u(l_783, l_723))) | 0x73D8L) > 0x7D62F147L) >= l_728) ^ (-3L)), 5))))) == 0x4F0CL) & (*g_423)), l_723)) | (*l_646)) < 0xA7DE6D82L)) , l_783), l_783, &l_723, &g_93);
                        return &g_46;
                    }
                }
            }
            if (l_723)
            {
                unsigned short l_798 = 0x4EEBL;
                unsigned char *l_799 = &g_226;
                int *l_805 = (void*)0;
                (*l_646) = (((void*)0 == l_792) ^ ((safe_rshift_func_uint16_t_u_s(((*g_423) = (**g_422)), (*l_740))) , (l_795 != ((safe_mod_func_uint16_t_u_u(((l_798 < ((-8L) & func_9(((*g_139) ^ ((*l_799) = l_728)), l_798))) <= l_728), l_728)) , (void*)0))));
                (*g_198) = (safe_rshift_func_uint8_t_u_s(l_802, (*l_646)));
                if ((safe_add_func_uint32_t_u_u(l_723, (*g_198))))
                {
                    unsigned char **l_814 = (void*)0;
                    unsigned char ***l_815 = &l_814;
                    int l_828 = 0L;
                    char *l_841 = &g_742;
                    (*g_186) = func_4(l_828, (**g_138), &g_199, (*g_713));
                    for (g_408 = 9; (g_408 < 14); g_408++)
                    {
                        int *l_834 = &l_723;
                        int l_843 = (-1L);
                        (*l_740) = (safe_sub_func_uint32_t_u_u(0xEA8E5EC2L, ((((*g_198) = ((func_37(l_834, (*l_717)) | (l_835 | ((safe_mod_func_uint32_t_u_u(l_728, l_828)) <= (safe_sub_func_uint16_t_u_u(((l_841 = g_840) != (g_842 , (void*)0)), l_843))))) != l_728)) ^ l_828) | (-1L))));
                        if ((*p_3))
                            break;
                    }
                }
                else
                {
                    short l_853 = 0x35E0L;
                    char l_862 = 4L;
                    unsigned l_872 = 4294967295UL;
                    int l_877 = 3L;
                    if ((((*g_840) = 0x40L) < ((((*l_799) = (safe_mul_func_uint32_t_u_u((*l_740), ((0x896BL >= (-1L)) > (*l_740))))) && ((*g_330) , ((safe_rshift_func_int16_t_s_u(l_798, (*g_423))) == (*p_3)))) > (*l_740))))
                    {
                        (*l_634) = ((*g_198) = (safe_add_func_uint16_t_u_u(l_835, (safe_rshift_func_uint16_t_u_u((**l_717), 1)))));
                        (*l_740) = 8L;
                    }
                    else
                    {
                        int **l_859 = &l_646;
                        unsigned *l_865 = &l_743;
                        unsigned short *l_874 = (void*)0;
                        unsigned short *l_875 = (void*)0;
                        unsigned short *l_876 = &l_798;
                        (*l_859) = l_858;
                        (*l_740) = (((*l_646) = (safe_div_func_int32_t_s_s(l_862, 0x0D8B63A4L))) , ((0x3BL && l_862) != ((!(*g_330)) & ((safe_lshift_func_uint16_t_u_u((**g_422), (**g_422))) <= (**l_859)))));
                        (*l_634) = ((*g_840) , ((*g_139) ^ (l_873 != (*l_858))));
                    }
                    (*g_186) = l_805;
                    return (*l_717);
                }
                if (((*l_740) ^ ((safe_lshift_func_int8_t_s_s((*l_646), 6)) & (((*g_330) = ((void*)0 == &l_805)) > (*l_886)))))
                {
                    return l_805;
                }
                else
                {
                    const int **l_887 = (void*)0;
                    const int **l_888 = &g_151;
                    (*l_888) = p_3;
                }
            }
            else
            {
                int *l_896 = &g_199;
                if (((safe_lshift_func_uint8_t_u_u(((**g_721) ^ (func_31((*l_886), (**l_717), (((((safe_lshift_func_uint8_t_u_s(((*g_139) = (safe_lshift_func_uint16_t_u_u((**l_717), (l_895 = ((***l_792) = ((*l_634) | (*g_454))))))), (&g_186 != &g_186))) != (0xFBE81C21L < (*l_634))) >= (*l_740)) > 0x2340L) , l_896)) , (*l_896))), l_897)) , (-9L)))
                {
                    unsigned ***l_902 = &l_683;
                    (*l_646) = (*p_3);
                    (*g_186) = (*g_186);
                    l_906 = (*g_186);
                }
                else
                {
                    for (g_332 = 0; (g_332 < (-18)); g_332 = safe_sub_func_uint16_t_u_u(g_332, 3))
                    {
                        const int *l_911 = &g_93;
                        (*l_717) = (((&g_186 != &g_186) < ((safe_rshift_func_uint8_t_u_u(0xF4L, 2)) == (*g_198))) , func_12((*l_858), (*g_186)));
                        (*g_198) = ((*l_740) = (*p_3));
                        return l_911;
                    }
                    (*l_858) = (*p_3);
                }
            }
            (*g_45) = (safe_div_func_int16_t_s_s((7UL | (*l_858)), (safe_add_func_uint32_t_u_u(0x844D0441L, (**l_717)))));
            return p_3;
        }
    }
    else
    {
        const int **l_916 = &g_263;
        int l_947 = 0xD6C801AAL;
        char l_993 = 0x9DL;
        (*l_916) = p_3;
        if ((~(*p_3)))
        {
            int l_917 = 3L;
            int l_932 = 7L;
            (*g_92) = (l_917 != (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((*g_722) = ((((safe_div_func_int8_t_s_s(((*g_263) && 0x8B98AABFL), (((((((*g_330) == (*g_330)) || (safe_div_func_int32_t_s_s((*p_3), (l_932 = ((*g_330) = ((((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((*g_423), 0x3C36L)), ((0x2EL || 0xCEL) >= (*g_198)))), (*g_454))) && (*g_139)) >= 0L) & (-10L))))))) != (*g_263)) & (*g_454)) || 0L) , 5L))) | 4294967295UL) && 0xBEL) == (*p_3))), 7)) ^ 4L), (**g_138))));
            for (l_761 = 0; (l_761 <= 4); l_761 = safe_add_func_uint8_t_u_u(l_761, 8))
            {
                int *l_935 = &g_199;
                char *l_942 = &g_114;
                unsigned short *l_950 = &l_614;
                (*l_717) = l_935;
                l_947 = (((**l_916) <= ((0x8DE5L && (((**l_717) = (safe_add_func_uint16_t_u_u(((*l_935) | l_932), ((((safe_rshift_func_uint16_t_u_s(((*g_423) = l_917), (safe_lshift_func_int16_t_s_s((**l_916), 2)))) , (((*g_721) = (*g_721)) != l_942)) , (((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((**g_422), 5)), (*g_139))) && (*l_935)) ^ l_917) , l_932) | (**l_916))) ^ 1UL)))) && (**l_916))) | 65535UL)) & l_932);
                (**l_717) = (safe_sub_func_uint16_t_u_u((**g_422), 0x732AL));
                l_917 = (((*l_950) = ((*g_423) = (l_932 = (*g_423)))) ^ (**l_916));
            }
            (*l_646) = (l_917 = ((*l_634) = (~(func_37(((*l_717) = func_4(((*g_139) = (~0x42L)), (!(**l_916)), &l_932, (**l_717))), &l_947) < (((safe_rshift_func_uint8_t_u_s((*l_646), ((((*l_634) & (*l_646)) ^ l_932) && (*g_722)))) != 0xB4L) || 255UL)))));
            (*l_646) = ((safe_unary_minus_func_int16_t_s(l_917)) , 1L);
        }
        else
        {
            unsigned char l_962 = 253UL;
            char ****l_965 = &l_676;
            char ***l_967 = &g_721;
            char ****l_966 = &l_967;
            int l_994 = 0x3305F7BBL;
            short ****l_1004 = &g_375;
            int *l_1005 = (void*)0;
            char l_1023 = 0x67L;
            (*g_198) = (safe_add_func_int32_t_s_s((**l_916), (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(l_962, (((*g_840) = ((((*l_965) = l_676) != (l_962 , ((*l_966) = &g_721))) ^ ((0xEC13E585L & l_962) != (**g_422)))) > (**l_916)))), 3)), (*l_634))) , l_962) && 1L)));
            for (g_267 = 0; (g_267 >= 17); g_267++)
            {
                char l_972 = 0xF1L;
                char ****l_984 = &l_676;
                unsigned **l_987 = &g_330;
                unsigned l_1011 = 1UL;
                int l_1024 = 0x28412F8AL;
                const unsigned l_1027 = 0x26A9064FL;
                int *l_1033 = &l_638;
            }
            (*g_45) = (((***g_1017) = l_1040) >= (**l_916));
        }
        (*l_916) = p_3;
    }
    return (*l_717);
}







static int * func_4(unsigned char p_5, unsigned char p_6, int * p_7, int p_8)
{
    char *l_576 = &g_108;
    char **l_575 = &l_576;
    unsigned char *l_577 = (void*)0;
    unsigned char *l_578 = (void*)0;
    unsigned char *l_579 = (void*)0;
    unsigned char *l_580 = &g_408;
    int *l_581 = &g_46;
    unsigned char l_598 = 255UL;
    (*g_186) = (p_7 = p_7);
    (*g_45) = (*l_581);
    if ((*l_581))
    {
        short l_582 = (-10L);
        (*g_186) = p_7;
    }
    else
    {
        unsigned short *l_590 = (void*)0;
        int l_592 = (-9L);
        short l_593 = 0x9E12L;
        unsigned char l_601 = 7UL;
        unsigned char **l_603 = &l_577;
        unsigned char ***l_602 = &l_603;
        for (g_212 = (-7); (g_212 >= 42); ++g_212)
        {
            unsigned l_587 = 0xF25CE08FL;
            unsigned short *l_591 = (void*)0;
            (*g_186) = p_7;
        }
        (*l_581) = ((*l_581) > (safe_sub_func_uint8_t_u_u(((*l_580) = p_8), ((p_5 = (safe_lshift_func_uint8_t_u_s(((*g_139) = l_593), 0))) , ((0xD7L || (*l_581)) < ((255UL || l_598) , (*l_581)))))));
        (*g_186) = p_7;
        (*g_186) = ((&g_138 != l_602) , (*g_186));
    }
    return l_581;
}







static unsigned char func_9(unsigned p_10, char p_11)
{
    int *l_201 = (void*)0;
    char *l_210 = &g_108;
    unsigned *l_211 = &g_212;
    unsigned char *l_225 = &g_226;
    char *l_227 = &g_114;
    int l_228 = 1L;
    short *l_229 = (void*)0;
    short *l_230 = &g_56;
    unsigned l_231 = 0UL;
    char l_232 = 0x2CL;
    int *l_255 = &l_228;
    int *l_256 = &g_46;
    unsigned l_281 = 0xD36F4B36L;
    unsigned l_369 = 0xE7DB46CAL;
    int l_370 = 7L;
    unsigned char **l_535 = &l_225;
    unsigned char ***l_534 = &l_535;
    unsigned short l_553 = 7UL;
    char l_571 = 0x5BL;
    (**g_186) = (*g_198);
    (*g_186) = l_201;
    g_198 = func_40(func_17(p_10, (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(g_80, 1L)), p_11)), p_10, &l_228, &l_228), p_11, &g_46, &l_228);
    if (l_232)
    {
        unsigned short *l_238 = &g_73;
        unsigned short **l_237 = &l_238;
        int l_239 = 0L;
        short **l_242 = &l_230;
        const char l_285 = 0xDCL;
        int *l_300 = &g_199;
        const char *l_302 = &g_114;
        const char **l_301 = &l_302;
        const int * const l_411 = &g_412;
        const int * const *l_410 = &l_411;
        unsigned **l_413 = &g_320;
        unsigned char l_435 = 0xD3L;
        unsigned short l_471 = 0x0036L;
        (*g_45) = (p_10 <= ((safe_div_func_int16_t_s_s(p_11, g_16)) ^ l_239));
        for (g_73 = 28; (g_73 == 33); g_73 = safe_add_func_uint32_t_u_u(g_73, 7))
        {
            int *l_243 = &g_93;
            unsigned short **l_253 = &l_238;
            short **l_264 = &l_229;
            int *l_299 = &l_239;
            char *l_337 = (void*)0;
            unsigned **l_352 = &g_330;
            int *l_358 = (void*)0;
            int l_362 = 0x11836D4CL;
            short ***l_373 = &l_264;
            short ****l_372 = &l_373;
            int *l_428 = &l_228;
            short l_453 = 0xAE8EL;
        }
    }
    else
    {
        int *l_476 = &g_98;
        int *l_513 = &l_228;
        int l_520 = 0xCCAD6D78L;
        int **l_557 = &g_92;
        unsigned **l_564 = &g_320;
        unsigned ***l_565 = &l_564;
        int *l_566 = &g_199;
        int *l_567 = (void*)0;
        int *l_568 = &g_98;
        if ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((**g_422), 6)), (**g_138))))
        {
            (*g_186) = l_476;
        }
        else
        {
            unsigned l_482 = 1UL;
            const int * const l_486 = &l_228;
            int l_492 = (-1L);
            int l_522 = 0L;
            int *l_536 = &g_46;
            int **l_556 = &l_536;
            (*g_186) = (void*)0;
            if (p_11)
            {
                unsigned short ***l_477 = &g_422;
                (*l_477) = &g_423;
                (*l_255) = ((**g_422) & (*g_454));
                return (**g_138);
            }
            else
            {
                unsigned char *l_485 = &g_408;
                int *l_487 = &g_199;
                unsigned **l_488 = &g_320;
                unsigned short **l_509 = &g_423;
                const unsigned short *l_533 = (void*)0;
                (*g_186) = l_487;
                if ((((*l_256) = (((((*l_487) , (void*)0) != l_488) <= ((*l_487) , (*l_487))) , ((((*l_487) = (p_11 != (*g_45))) , (*l_255)) , (((void*)0 != (*g_422)) && 8L)))) | (*l_486)))
                {
                    unsigned short *l_489 = &g_73;
                    (*g_186) = &l_228;
                    (*l_255) = (l_489 == l_489);
                    (*l_487) = ((-6L) <= (*l_487));
                }
                else
                {
                    unsigned l_493 = 4294967295UL;
                    int *l_496 = &g_46;
                    int **l_512 = &l_496;
                    (*g_186) = func_40(((safe_lshift_func_int16_t_s_s((((*g_45) <= l_492) == ((**g_138) == ((*l_227) = p_11))), 10)) , ((l_493 , (safe_rshift_func_int8_t_s_s(g_408, 5))) , (*g_186))), (*g_198), l_496, l_496);
                    if (((safe_rshift_func_uint8_t_u_s(func_37(((*l_512) = func_17((*g_423), (safe_rshift_func_uint16_t_u_s((*l_256), 0)), (((*l_227) = (((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((((*l_486) <= (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((void*)0 != l_509), ((p_10 , (safe_div_func_uint16_t_u_u((*l_476), (*l_487)))) | p_10))), 0))) != 1L) > (**g_138)) >= 0UL), g_16)), (*l_496))) , p_11) ^ (*l_486))) , g_127), (*g_186), &l_228)), l_513), (*l_476))) && 0x3BL))
                    {
                        unsigned short *l_521 = &g_298;
                        const int * const l_523 = &g_127;
                        int *l_524 = (void*)0;
                        int *l_525 = &l_520;
                        (*l_496) = (*l_476);
                        (*l_512) = (((*l_525) = func_26((p_10 > (*l_486)), func_17(((*l_521) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((*g_423) = p_11) , p_10), func_26((*g_92), (*g_186)))), (safe_div_func_uint32_t_u_u((p_10 != (((l_520 , (*g_330)) > (*g_330)) < 0x0D8EL)), 5UL))))), (**g_138), l_522, (*l_512), l_523))) , (*g_186));
                        (**l_512) = (p_11 ^ 0xAE67L);
                    }
                    else
                    {
                        int *l_528 = (void*)0;
                        (**l_512) = (p_10 & (safe_lshift_func_int8_t_s_s((0x37L ^ func_26(((*l_256) = p_11), (*g_186))), 6)));
                    }
                    (*l_496) = (1L != ((safe_lshift_func_int16_t_s_s((g_127 , p_10), func_37(func_40(func_17(((((safe_sub_func_uint8_t_u_u(p_11, ((p_11 , ((void*)0 == l_533)) == 4UL))) , p_11) , 65535UL) , p_11), (**l_512), (*l_476), l_513, (*g_186)), (*g_198), (*l_512), &l_228), l_487))) >= 0UL));
                }
                (*g_186) = (*g_186);
            }
            (*g_186) = (l_536 = func_40(&l_522, ((*g_198) & ((*l_486) , 4294967295UL)), &l_522, &l_228));
            (*l_556) = (g_198 = ((*g_186) = func_40(&l_228, (*l_486), ((func_26((safe_div_func_int16_t_s_s(p_10, (((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((*l_227) = 0xE0L) == (**g_138)), (*g_45))), (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_11, 4)), (((*g_423) = (safe_rshift_func_uint8_t_u_s(((***l_534) = (l_553 == p_11)), g_267))) , g_554))) | 0x1CA6AC66L) && (*l_255)), p_11)) , g_80), (*l_486))))) && p_11) | 0xBDL))), &l_228) <= g_555) , l_513), &l_522)));
        }
        (*l_557) = func_12((*g_330), (*g_186));
        (*g_186) = &l_228;
        (*l_568) = (safe_lshift_func_int16_t_s_u(func_26((**l_557), func_40(func_17(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(g_554, 2)), (((*l_565) = l_564) != (l_571 , &l_211)))) ^ 0x5D38B665L), (*g_139), g_114, (*l_557), &l_228), (*l_256), (*l_557), (*l_557))), 14));
    }
    return p_11;
}







static int * func_12(unsigned p_13, const int * p_14)
{
    unsigned l_23 = 4294967289UL;
    int *l_47 = &g_46;
    int *l_97 = &g_98;
    int **l_187 = (void*)0;
    int **l_188 = (void*)0;
    int **l_189 = &g_45;
    int *l_194 = (void*)0;
    int *l_195 = (void*)0;
    const int **l_196 = &g_151;
    (*l_189) = func_17(l_23, (safe_mod_func_uint8_t_u_u(func_26((safe_sub_func_int16_t_s_s((func_31(l_23, ((0xEAB3L | 0x8132L) || (safe_mod_func_uint16_t_u_u(((((65535UL && (((func_37(func_40(g_45, (*g_45), l_47, &g_46), l_47) ^ 1UL) , p_13) >= g_91)) > p_13) != 0xA3L) < 0xA4L), g_91))), g_92) || g_56), 9UL)), l_97), p_13)), p_13, l_47, p_14);
    (*l_196) = ((2UL < func_26(((*l_97) = ((((void*)0 != (*g_186)) ^ g_114) & (g_80 <= (g_108 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((9UL >= func_31((*l_47), g_59, (*l_189))), 14)), 1L)))))), (*g_186))) , p_14);
    return (*l_189);
}







static int * func_17(unsigned short p_18, unsigned char p_19, char p_20, int * p_21, const int * const p_22)
{
    int **l_117 = (void*)0;
    int ***l_116 = &l_117;
    const int *l_126 = &g_127;
    const int *l_128 = (void*)0;
    unsigned short *l_147 = (void*)0;
    unsigned short **l_146 = &l_147;
    const unsigned short l_158 = 65534UL;
    unsigned char l_159 = 0xDFL;
    (*l_116) = &g_92;
    (*g_45) = ((void*)0 != &g_92);
    for (g_73 = (-17); (g_73 > 40); g_73++)
    {
        int l_122 = 1L;
        char *l_172 = &g_108;
        int l_177 = 1L;
        const int **l_182 = &l_128;
        unsigned char * const *l_185 = &g_139;
    }
    g_186 = ((*l_116) = &g_92);
    return p_21;
}







static const unsigned char func_26(const int p_27, int * p_28)
{
    const int l_105 = (-5L);
    char *l_106 = (void*)0;
    char *l_107 = &g_108;
    char *l_113 = &g_114;
    int *l_115 = &g_93;
    (*g_92) = (safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_105 , 8UL), 1)), ((*l_107) = g_80))), (func_31((((((safe_lshift_func_uint16_t_u_s((l_105 < g_93), 0)) , g_46) != ((void*)0 != l_106)) , (((*l_113) = l_105) || p_27)) != g_98), p_27, l_115) && 0x7BB5L)));
    return p_27;
}







static short func_31(unsigned char p_32, short p_33, int * p_34)
{
    unsigned l_94 = 4294967294UL;
    int *l_95 = &g_93;
    int **l_96 = &g_45;
    (*g_92) = l_94;
    (*l_96) = l_95;
    return (**l_96);
}







static unsigned short func_37(int * p_38, int * p_39)
{
    int **l_60 = (void*)0;
    int **l_61 = &g_45;
    (*l_61) = p_38;
    for (g_56 = 0; (g_56 > (-23)); g_56 = safe_sub_func_uint32_t_u_u(g_56, 4))
    {
        int l_66 = 8L;
        unsigned char l_67 = 0x34L;
        int l_70 = 0xC717898AL;
        unsigned short *l_71 = (void*)0;
        unsigned short *l_72 = &g_73;
        const unsigned short *l_85 = &g_73;
        const unsigned short **l_86 = (void*)0;
        const unsigned short **l_87 = (void*)0;
        const unsigned short **l_88 = &l_85;
        unsigned short l_89 = 3UL;
        unsigned char *l_90 = &g_16;
        (*p_39) = ((safe_sub_func_uint32_t_u_u(0x0B631114L, (l_66 == (l_66 || ((*l_72) = ((l_67 ^ ((safe_lshift_func_int16_t_s_u((&p_39 == l_61), 7)) != l_70)) && (l_66 | 0x6A74B4FBL))))))) & 255UL);
        g_45 = ((g_59 = (safe_mul_func_int32_t_s_s(((*p_38) = (*p_38)), (((l_67 || l_66) == (safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((g_80 = l_67) >= ((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_90) = (((((*l_88) = l_85) != (l_89 , &g_73)) ^ ((*l_72) = l_70)) | g_59)), 255UL)) | l_70), l_66)) >= l_89)), l_89)) > l_66), g_59))) < l_89)))) , &g_46);
    }
    return (**l_61);
}







static int * func_40(int * p_41, int p_42, int * p_43, int * p_44)
{
    unsigned short l_49 = 0xE249L;
    const int l_54 = 0xCC9D6C84L;
    short *l_55 = &g_56;
    int l_57 = 1L;
    short *l_58 = &g_59;
    (*g_45) = (safe_unary_minus_func_uint16_t_u(((((l_49 = 65535UL) != ((*l_58) = ((g_16 && (4294967295UL || (((g_16 ^ ((+p_42) | (l_57 = ((*l_55) = (safe_add_func_int32_t_s_s(l_54, 0xB8F3BEC7L)))))) , (*p_41)) < ((void*)0 != l_55)))) ^ l_54))) < (*p_43)) >= l_54)));
    return &g_46;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
