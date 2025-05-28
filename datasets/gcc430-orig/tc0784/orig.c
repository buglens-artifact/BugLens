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



static unsigned g_13 = 4294967287UL;
static int g_47 = (-1L);
static int *g_49 = &g_47;
static unsigned char g_56 = 0x17L;
static int g_65 = 0x8945CB29L;
static int g_70 = 0x98093AF8L;
static int *g_69 = &g_70;
static const int *g_92 = &g_65;
static const int **g_91 = &g_92;
static const int ***g_90 = &g_91;
static int **g_96 = &g_49;
static int ***g_95 = &g_96;
static short g_115 = 0xF938L;
static unsigned short g_117 = 0xF910L;
static unsigned g_157 = 4294967286UL;
static unsigned char g_161 = 255UL;
static const unsigned char g_182 = 247UL;
static char g_201 = 0xEEL;
static int g_211 = 1L;
static int *g_218 = &g_47;
static unsigned g_250 = 8UL;
static int g_332 = 1L;
static char **g_383 = (void*)0;
static char *g_385 = &g_201;
static char **g_384 = &g_385;
static int g_405 = 0x71CDC077L;
static char g_430 = 0x1BL;
static short *g_432 = &g_115;
static short **g_431 = &g_432;
static unsigned char ** const g_488 = (void*)0;
static unsigned short g_496 = 0xAA7DL;
static unsigned g_523 = 0x1C93AB68L;
static const int g_527 = 0xE7C6EC0EL;
static int *g_559 = &g_405;
static int **g_558 = &g_559;
static int ** const *g_557 = &g_558;
static int g_607 = 0x52D9A9B5L;
static int g_633 = 1L;
static int g_640 = 0x598D26FAL;
static int *g_639 = &g_640;
static int ****g_741 = &g_95;
static int **** const *g_740 = &g_741;
static unsigned g_743 = 0xA23D5AF6L;



static const char func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5, unsigned short p_6);
static int * func_7(unsigned char p_8, char p_9, int * p_10, char p_11, int * p_12);
static int * func_14(unsigned p_15, int * p_16, int * const p_17, int * p_18);
static unsigned func_19(short p_20, int * p_21, int * p_22, char p_23);
static unsigned char func_28(int p_29, unsigned short p_30);
static unsigned short func_31(unsigned p_32, unsigned char p_33);
static unsigned func_34(int * p_35, unsigned char p_36, const int p_37, int * p_38);
static int * func_39(const short p_40);
static const short func_41(int * p_42, int * p_43, unsigned char p_44, short p_45);
static const char func_1(void)
{
    int *l_46 = &g_47;
    int **l_48 = (void*)0;
    unsigned char l_50 = 0x24L;
    int **l_67 = &g_49;
    unsigned short l_68 = 0x3964L;
    int *l_606 = &g_607;
    int * const l_617 = (void*)0;
    (*g_91) = func_2(func_7(g_13, g_13, func_14(func_19(((**g_431) = (safe_add_func_uint8_t_u_u((0x5B05L == g_13), ((safe_rshift_func_int8_t_s_s(((+func_28(g_13, func_31(func_34(((*l_67) = func_39(func_41(l_46, (g_49 = &g_47), l_50, (safe_rshift_func_uint8_t_u_s((*l_46), 3))))), l_68, g_13, g_69), g_13))) ^ g_182), g_182)) != 0xC1L)))), l_46, l_606, (*l_606)), g_218, l_617, l_46), g_13, g_218), g_559, g_639, g_182);

    ;
    ;
    ;
    return (*g_385);
}







static int * func_2(int * p_3, int * p_4, int * p_5, unsigned short p_6)
{
    unsigned l_643 = 0xEA1F4ABEL;
    int *l_648 = &g_607;
    int *l_650 = &g_640;
    int *l_654 = (void*)0;
    int ***l_655 = (void*)0;
    char ** const *l_687 = &g_384;
    short **l_733 = &g_432;
    const unsigned char *l_780 = &g_161;
    const unsigned char **l_779 = &l_780;
    for (g_640 = 0; (g_640 < (-19)); --g_640)
    {
        int *l_649 = &g_332;
    }
    (**g_95) = (void*)0;

    ;
    if (((-9L) | g_527))
    {
        unsigned char l_653 = 1UL;
        const short *l_666 = &g_115;
        int l_679 = 1L;
        unsigned char l_735 = 255UL;
        int l_773 = 0L;
        const unsigned char **l_782 = &l_780;
        unsigned *l_804 = &g_250;
        char l_807 = (-1L);
        const int l_814 = 6L;
        int l_815 = (-5L);
        unsigned char l_816 = 255UL;
        int *l_817 = &g_607;
        int *l_818 = &g_70;
        unsigned char l_819 = 251UL;
lbl_714:
        for (g_405 = 1; (g_405 != 2); g_405++)
        {
            return l_648;


        }
        if (l_653)
        {
            unsigned short l_656 = 65530UL;
            int *l_661 = &g_640;
            unsigned l_678 = 4294967295UL;
            char **l_710 = (void*)0;
            const unsigned char ***l_781 = &l_779;
            const unsigned char ***l_783 = &l_782;
            unsigned char *l_792 = &l_653;
            const int l_793 = 0x0F0A7633L;
            int *l_800 = &g_633;
            unsigned short *l_801 = (void*)0;
            unsigned short *l_802 = &g_496;
            if (l_656)
            {
                unsigned short l_660 = 0x6459L;
                unsigned short *l_682 = &g_496;
                unsigned short *l_683 = (void*)0;
                unsigned short *l_684 = &l_656;
                int *l_689 = &g_47;
                for (g_211 = 0; (g_211 != (-7)); g_211--)
                {
                    unsigned l_659 = 9UL;
                    unsigned short *l_672 = &l_660;
                    unsigned short **l_671 = &l_672;
                    unsigned *l_677 = &g_157;
                    if (l_659)
                    {
                        (**g_95) = func_14(l_660, ((*g_96) = l_661), p_5, p_5);
                        (**g_90) = (*g_91);
                    }
                    else
                    {
                        (*g_69) = func_28(p_6, (safe_rshift_func_int16_t_s_s(((**g_431) = (&p_6 == &g_117)), 14)));

                        ;
                        if (g_527)
                            goto lbl_803;
                        (*g_91) = (*g_91);
                        (**g_90) = (**g_90);
                        (**g_90) = (void*)0;
                    }

                    ;
                    l_679 = (((-1L) < ((void*)0 == l_666)) < (p_6 < ((*g_69) = (l_678 = (*g_69)))));
                    return p_5;


                }
                if ((safe_sub_func_uint16_t_u_u(((*l_684) = ((*l_682) = p_6)), 0x3FC8L)))
                {
                    int l_688 = 0x8366D133L;
                    (*g_91) = (**g_90);
                    if ((((*l_661) ^ (&g_383 != l_687)) ^ p_6))
                    {
                        (*p_4) = l_688;
                    }
                    else
                    {
                        return l_689;


                    }
                    for (g_405 = 0; (g_405 < (-27)); g_405 = safe_sub_func_int16_t_s_s(g_405, 5))
                    {
                        unsigned char *l_694 = &g_161;
                        unsigned char *l_697 = &g_56;
                        int l_702 = 0L;
                        (**g_90) = (**g_90);
                        (**g_90) = (*g_96);
                        if ((*g_639))
                            continue;
                        (*g_639) = func_41(&l_679, p_3, g_640, p_6);

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned *l_707 = &l_643;
                    (*g_91) = (*g_91);
                }

                ;
                ;
                (**g_90) = (**g_90);
                for (l_643 = 0; (l_643 < 26); l_643 = safe_add_func_uint8_t_u_u(l_643, 1))
                {
                    (*g_91) = l_661;

                    ;
                }

                ;
            }
            else
            {
                unsigned short *l_711 = &l_656;
                int l_734 = 0x1A4E1B76L;
                if ((((*l_711) = 7UL) ^ (safe_rshift_func_int8_t_s_s((*l_661), 6))))
                {
                    short l_723 = 0xF0B8L;
                    unsigned *l_724 = &g_13;
                    if (l_643)
                        goto lbl_714;
                    (*l_650) = (((safe_rshift_func_uint8_t_u_s(g_430, p_6)) && (safe_lshift_func_uint8_t_u_s((l_679 = (0UL & ((*l_724) = (safe_add_func_uint8_t_u_u(0xABL, l_723))))), (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*p_4) && (func_28((func_28((safe_lshift_func_uint8_t_u_s((l_733 != l_733), 0)), (*l_650)) <= p_6), g_607) > 255UL)), 0x13D0C929L)), g_211)) > 9UL), (*g_385)))))) || (*p_5));

                    ;
                }
                else
                {
                    unsigned char *l_742 = &g_161;
                    unsigned short l_763 = 65535UL;
                    int *l_776 = &g_65;
lbl_766:
                    (****g_740) = (p_3 = &l_734);

                    ;
                    ;
                    if (((*l_650) = (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_41((*g_96), p_5, p_6, (*l_648)), l_653)), (safe_unary_minus_func_uint32_t_u(((!(p_6 & (**g_431))) ^ (~((p_6 <= 0UL) || l_679))))))), (*g_385)))))
                    {
                        unsigned *l_757 = &g_250;
                        const int l_762 = 0xE085FA71L;
                        int l_764 = 0x3A667183L;
                        int l_765 = 0xE025326AL;
                        (**g_96) = (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint8_t_u_u(((((*l_757) = (safe_add_func_int8_t_s_s(((*g_385) = p_6), p_6))) | (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s(l_762, l_763)) & (l_653 | ((***g_95) ^ (***g_95)))), 0))) | l_763), 4)) && ((((l_765 = (l_764 = ((*p_4) | g_201))) ^ (*l_661)) & p_6) ^ 1L)) >= p_6), 6));
                        (****g_740) = p_5;

                        ;
                    }
                    else
                    {
                        if (l_643)
                            goto lbl_766;
                        return (**g_95);


                    }

                    ;
                    if ((func_19((safe_lshift_func_int8_t_s_u((*l_661), ((((*p_3) & 6L) | ((***l_687) = (((+(safe_lshift_func_int8_t_s_u(0xFAL, 2))) || ((l_773 | ((void*)0 == (*g_740))) ^ (safe_rshift_func_uint8_t_u_s(g_47, (*l_661))))) >= l_734))) <= g_527))), &l_734, l_776, l_734) <= l_734))
                    {
                        return l_661;


                    }
                    else
                    {
                        (*****g_740) = (safe_sub_func_uint32_t_u_u(0xCC3B4C0DL, (*l_648)));
                    }

                    ;
                }

                ;
                ;
            }

            ;
            ;

            (*p_5) = ((0x81L < (-6L)) < func_28(p_6, p_6));

            ;
            (*l_650) = (safe_lshift_func_int8_t_s_s((**g_384), 0));
            l_661 = func_39(func_28(((*l_800) = ((**g_558) = (safe_mod_func_int32_t_s_s((*p_5), ((**g_96) = (safe_rshift_func_uint16_t_u_s(p_6, 11))))))), ((((*l_802) = (0UL | 4L)) & (g_117 = (&l_773 != (*g_558)))) | (*g_432))));

            ;
            ;
        }
        else
        {
lbl_803:
            (****g_740) = (**g_95);
            (****g_740) = (****g_740);
            (*g_639) = (*l_817);
        }

        ;
        ;

        (*g_218) = (0xECL ^ (*g_385));
    }
    else
    {
        (**g_95) = (void*)0;
    }

    ;
    ;

    return p_4;


}







static int * func_7(unsigned char p_8, char p_9, int * p_10, char p_11, int * p_12)
{
    (***g_95) = (-7L);
    return p_10;


}







static int * func_14(unsigned p_15, int * p_16, int * const p_17, int * p_18)
{
    const unsigned l_618 = 0xF1620296L;
    char ***l_619 = &g_384;
    const int *l_623 = &g_211;
    const int **l_622 = &l_623;
    short **l_629 = &g_432;
    int *l_638 = (void*)0;
    (*g_218) = (*p_18);
    (*g_91) = func_39(l_618);

    ;
    if ((*p_16))
    {
        (**g_96) = (*p_18);
    }
    else
    {
        char ****l_620 = &l_619;
        const int ***l_624 = &l_622;
        int l_632 = 0xB70DC504L;
        (*g_49) = (&g_384 == ((*l_620) = l_619));
        (**g_96) = (safe_unary_minus_func_int8_t_s((((*l_624) = l_622) == (*g_557))));
        (*p_18) = (safe_rshift_func_uint16_t_u_u(l_618, 8));
        (**g_90) = func_39((safe_sub_func_uint16_t_u_u(((!((void*)0 != l_629)) < ((safe_sub_func_int8_t_s_s(((*l_619) == (void*)0), l_632)) ^ ((**g_431) = ((g_633 | (l_618 ^ (g_56 = l_632))) > func_28((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((*g_384) == (**l_619)), 0)), l_632)), l_632))))), g_527)));

        ;
    }
    return l_638;


}







static unsigned func_19(short p_20, int * p_21, int * p_22, char p_23)
{
    int l_608 = (-1L);
    if (((*p_22) = l_608))
    {
        int l_609 = (-1L);
        return l_609;
    }
    else
    {
        char l_610 = (-1L);
        unsigned char *l_613 = &g_161;
        unsigned short *l_616 = &g_117;
        (*g_218) = ((((g_161 = l_610) | 0x27L) && func_41(((*g_96) = p_22), p_22, ((*l_613) = (safe_mod_func_uint16_t_u_u(g_527, l_608))), (!((*g_432) = ((*g_385) < ((l_610 ^ (*g_69)) ^ (**g_431))))))) < p_20);

        ;
        (*g_69) = 0xCFD5BAA6L;
        l_608 = (((*l_616) = (safe_sub_func_int16_t_s_s(0xFBCBL, 8UL))) < g_211);
    }

    ;
    return g_523;
}







static unsigned char func_28(int p_29, unsigned short p_30)
{
    unsigned short l_594 = 0x29AFL;
    int *l_595 = &g_47;
    unsigned *l_600 = &g_523;
    short *l_601 = &g_115;
    short *l_602 = &g_115;
    int *l_603 = (void*)0;
    l_603 = l_600;

    ;
    (*g_218) = ((*l_603) = (safe_lshift_func_uint8_t_u_s(((g_211 || 0xF3L) == (*l_603)), (&l_595 != &l_595))));
    (*g_96) = l_603;

    ;
    l_603 = l_595;

    ;
    return (*l_595);
}







static unsigned short func_31(unsigned p_32, unsigned char p_33)
{
    short *l_145 = &g_115;
    int l_155 = 0x8EED364FL;
    const int *l_166 = (void*)0;
    unsigned short * const l_226 = &g_117;
    char l_231 = 0xA4L;
    int *l_280 = (void*)0;
    unsigned l_282 = 0x77F44A9BL;
    short l_288 = 0xF02DL;
    int *l_337 = &g_211;
    int **l_336 = &l_337;
    int ****l_342 = &g_95;
    int ** const **l_343 = (void*)0;
    int ** const ***l_344 = &l_343;
    char l_349 = 1L;
    const char l_449 = 0x5DL;
    char *** const l_466 = &g_384;
    int *l_469 = &g_405;
    unsigned l_581 = 9UL;
    for (p_32 = (-8); (p_32 >= 46); p_32++)
    {
        unsigned char l_152 = 0x7EL;
        unsigned *l_156 = &g_157;
        int ***l_202 = &g_96;
        int l_215 = 0x7A9B704CL;
        char *l_241 = &l_231;
        char **l_240 = &l_241;
        const int *l_265 = &g_47;
        unsigned l_281 = 4294967295UL;
        unsigned *l_283 = &g_250;
        const unsigned short *l_296 = &g_117;
    }
    (*g_96) = &l_155;

    ;
    (***g_95) = (l_280 != ((*l_336) = &g_211));
    if ((func_34(func_39((g_157 | g_201)), (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((g_161 = ((p_33 > ((l_342 != ((*l_344) = l_343)) ^ (-8L))) | ((*g_218) | (safe_sub_func_int8_t_s_s(g_161, g_201))))) | 0x58L), p_33)), g_117)), g_250, l_337) && p_32))
    {
        unsigned *l_347 = (void*)0;
        unsigned *l_348 = &g_157;
        int l_351 = 0x5A29D448L;
        int l_389 = 0x9C396952L;
        if ((((*l_348) = g_161) || (0x2EC3L | p_33)))
        {
            int ***l_350 = &l_336;
            int *l_352 = &g_70;
            int *l_353 = &g_332;
            char *l_364 = &l_349;
            (*l_350) = (void*)0;

            ;
            l_351 = ((*g_49) = ((255UL < (g_182 == g_201)) | p_33));
            if ((((*l_353) || g_70) >= (***g_95)))
            {
                for (l_288 = 0; (l_288 != (-27)); l_288--)
                {
                    (**g_90) = ((*g_96) = (**g_95));

                    ;
                    if ((*g_92))
                        break;
                }

                ;
                (*g_91) = (***l_342);

                ;
            }
            else
            {
                unsigned short l_360 = 0x5B3CL;
                int *l_379 = &g_65;
                char **l_382 = &l_364;
                for (g_70 = 0; (g_70 > (-5)); g_70 = safe_sub_func_uint32_t_u_u(g_70, 8))
                {
                    int *l_388 = &g_47;
                    if (((*g_218) = p_32))
                    {
                        char **l_361 = (void*)0;
                        char *l_363 = &g_201;
                        char **l_362 = &l_363;
                        (***g_95) = ((safe_lshift_func_uint8_t_u_s((1UL ^ (g_65 != l_360)), (((*l_362) = &g_201) != l_364))) || g_13);
                    }
                    else
                    {
                        (***l_342) = (void*)0;

                        ;
                    }

                    ;
                    if (((*l_353) = (*g_92)))
                    {
                        short *l_365 = &g_115;
                        unsigned short *l_368 = (void*)0;
                        unsigned short *l_369 = &l_360;
                        int l_370 = 8L;
                        unsigned char *l_386 = &g_56;
                        int l_387 = 0x18FD0311L;
                        (*g_218) = p_33;
                        if ((*g_218))
                            break;
                        (*g_69) = ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((*l_365) = 5L) ^ ((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_33, (l_370 == l_387))), 1UL)) || 0x1CE6L)), p_33)), 0x648E5995L)) | p_33);
                        if ((*l_379))
                            break;
                    }
                    else
                    {
                        return g_211;


                    }
                    (*l_353) = ((*g_218) = (*g_218));
                    (**g_95) = l_388;

                    ;
                }

                ;
                (***l_342) = l_352;

                ;
            }

            ;
            ;
        }
        else
        {
            return l_389;


        }

        ;
        ;
        ;
        l_351 = (*g_218);
    }
    else
    {
        int *l_399 = &g_47;
        unsigned char *l_401 = &g_56;
        unsigned char **l_400 = &l_401;
        int *l_402 = &g_211;
        int *l_403 = (void*)0;
        int *l_404 = &g_405;
        const unsigned char *l_453 = &g_182;
        const unsigned char **l_452 = &l_453;
        unsigned short l_553 = 0xB441L;
        for (g_56 = 7; (g_56 >= 46); ++g_56)
        {
            unsigned char *l_398 = &g_161;
            for (g_70 = 0; (g_70 != 17); g_70++)
            {
            }
            (*g_49) = (safe_lshift_func_uint8_t_u_s(((*l_398) = (safe_rshift_func_uint8_t_u_u(p_33, 6))), 5));
        }
        if (func_34(l_399, p_33, ((*l_404) = ((*l_402) = ((void*)0 != l_400))), (**g_95)))
        {
            int l_412 = 1L;
            short ** const l_433 = &g_432;
            int *l_434 = &g_405;
            for (g_332 = 0; (g_332 > (-2)); g_332--)
            {
                unsigned short *l_415 = (void*)0;
                unsigned l_416 = 4294967288UL;
                int l_417 = 0x2AD76D7FL;
                (*g_69) = ((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(9UL, g_115)) <= (+l_412)) == (1L || func_41(((*g_96) = (*g_96)), l_399, (safe_lshift_func_uint8_t_u_s((((**l_400) = (l_416 = ((void*)0 == l_415))) <= p_33), 0)), l_417))), 0x920E2189L)) || g_13);
                (***g_95) = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(1L, ((((safe_rshift_func_int8_t_s_s((l_412 <= ((p_33 <= (*l_399)) || p_32)), 3)) || g_161) <= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_416 & l_416), ((safe_rshift_func_uint8_t_u_u((g_56 && 0x38CAB490L), 6)) >= (***g_95)))) && p_33), 1))) && p_32))), 1)) < g_332);
                (*g_69) = (*g_49);
            }
            if (func_34(func_39(g_13), (g_430 | (p_32 > ((g_115 <= l_412) ^ g_430))), ((*l_434) = (g_431 != l_433)), l_404))
            {
                const int l_437 = 0x824FF3ADL;
                int l_443 = 0xA5BBB0BCL;
                if ((~(safe_mod_func_int8_t_s_s(l_437, (safe_sub_func_uint8_t_u_u(func_34(func_39((**g_431)), ((l_412 = p_33) > g_161), p_33, l_399), 0L))))))
                {
                    short l_442 = 0xB8C2L;
                    char *l_446 = &g_430;
                    (*g_69) = (((((*l_145) = l_437) & (safe_sub_func_uint8_t_u_u(((*l_401) = (0xA2F4L < (p_33 | p_33))), 0x3CL))) >= l_442) && 1UL);
                    l_443 = p_33;
                    for (g_201 = 0; (g_201 != (-7)); --g_201)
                    {
                        char **l_447 = &l_446;
                        int l_448 = 7L;
                    }
                }
                else
                {
                    int *l_450 = &l_443;
                    if ((**g_96))
                    {
                        unsigned char **l_451 = &l_401;
                        const unsigned char ***l_454 = &l_452;
                        (*g_96) = l_450;

                        ;
                        (*g_218) = p_32;
                        (**g_90) = (*g_91);
                        (*l_450) = (((**g_384) = ((0x0CD57975L == (*g_69)) <= g_250)) && (g_157 | (l_451 != ((*l_454) = l_452))));
                    }
                    else
                    {
                        (*g_91) = (*g_91);
                    }

                    ;
                    return g_65;



                }
            }
            else
            {
                l_412 = ((*g_49) = (0x81ACE426L | (safe_lshift_func_int16_t_s_u((**g_431), p_32))));
            }

            ;
            (***g_95) = (safe_rshift_func_int8_t_s_s((*g_385), 3));
            (*g_69) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_399) = (+((void*)0 != &l_401))) && (((safe_unary_minus_func_uint32_t_u(p_32)) != ((safe_sub_func_int16_t_s_s((!p_33), (l_466 == l_466))) != ((safe_rshift_func_int8_t_s_s(0xDBL, 5)) > func_41(l_399, l_399, p_33, l_412)))) > 4UL)), 10)), 8));
        }
        else
        {
            int *l_497 = &g_70;
            (***g_95) = (((void*)0 != l_469) || (((void*)0 == &l_401) || 0xCD72L));
            for (g_117 = 0; (g_117 <= 59); ++g_117)
            {
                unsigned char l_498 = 0xCFL;
                for (l_155 = 20; (l_155 >= (-21)); --l_155)
                {
                    char l_492 = 0x03L;
                    for (l_288 = (-19); (l_288 == (-6)); l_288++)
                    {
                        short l_476 = (-7L);
                        char *l_485 = (void*)0;
                        char *l_486 = (void*)0;
                        char *l_487 = &l_231;
                        char *l_491 = &g_430;
                        unsigned short *l_495 = &g_496;
                        if (l_476)
                            break;
                        l_497 = l_497;
                    }
                    (*g_91) = (*g_91);
                }
            }
        }

        ;
        (**g_90) = (*g_91);
        if (p_33)
        {
            unsigned short l_508 = 65528UL;
            int l_541 = 0L;
            (**g_90) = (*g_91);
            for (g_117 = (-16); (g_117 >= 54); g_117 = safe_add_func_int32_t_s_s(g_117, 2))
            {
                int l_505 = (-9L);
                (*g_69) = (safe_sub_func_uint16_t_u_u(((**g_384) < g_182), (l_505 > ((safe_mod_func_int8_t_s_s((*g_385), l_508)) == ((safe_rshift_func_int8_t_s_s((+(safe_mod_func_int32_t_s_s(0L, (safe_lshift_func_int8_t_s_s(p_32, 6))))), (safe_lshift_func_uint16_t_u_u(g_115, (((**l_400) = func_41((**g_95), (**g_95), l_508, p_32)) < 0x97L))))) > (**g_431))))));

                ;
                for (g_430 = 0; (g_430 < (-27)); g_430 = safe_sub_func_int16_t_s_s(g_430, 6))
                {
                    int *l_534 = &l_505;
                    if ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_523, g_56)), ((-7L) || l_505))))
                    {
                        (****l_342) = ((**g_96) > 0x8BF4BCD0L);
                    }
                    else
                    {
                        const int l_524 = 0xB9EB235EL;
                        (***l_342) = l_399;
                        (*l_466) = &g_385;
                        if (l_524)
                            break;
                        return l_505;


                    }
                    for (g_211 = (-19); (g_211 > 1); ++g_211)
                    {
                        unsigned l_530 = 4294967286UL;
                        int l_533 = (-1L);
                        l_534 = func_39((((p_32 | p_32) > g_527) <= ((***g_95) < (((safe_lshift_func_int8_t_s_s(((**g_384) = l_530), ((*g_69) && (safe_rshift_func_int8_t_s_s(l_505, 0))))) > (****l_342)) > (p_32 && l_533)))));

                        ;
                        (*g_91) = (void*)0;

                        ;
                        (***g_95) = l_533;
                        return g_70;
                    }
                }
                return l_508;


            }
            (***l_342) = (void*)0;

            ;
            for (g_201 = 6; (g_201 > 22); g_201++)
            {
                short l_542 = 0x40E6L;
                const int *l_556 = (void*)0;
                for (g_332 = 0; (g_332 > (-25)); --g_332)
                {
                    if (p_33)
                        break;
                }
                (**g_90) = (*g_96);

                ;
            }

            ;
        }
        else
        {
            unsigned l_567 = 0x303509A9L;
            int *l_568 = (void*)0;
            if ((*g_49))
            {
                (**g_90) = l_402;

                ;
            }
            else
            {
                int *l_566 = &l_155;
                (*l_399) = (safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((+((safe_lshift_func_uint8_t_u_s(p_33, 4)) != (***g_90))), 9)) >= (*l_399)), (*g_218)));
                for (l_553 = 0; (l_553 > 7); l_553 = safe_add_func_int16_t_s_s(l_553, 2))
                {
                    int *l_571 = (void*)0;
                    int **l_572 = &l_568;
                    (***g_95) = (~((*g_69) = (*l_566)));
                    for (l_155 = (-6); (l_155 >= (-3)); l_155 = safe_add_func_uint8_t_u_u(l_155, 2))
                    {
                        unsigned *l_586 = &g_250;
                        int l_589 = 0L;
                        (*g_218) = (safe_sub_func_uint32_t_u_u(((***g_95) & (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((*l_145) = (l_581 | ((p_32 != (p_33 = ((safe_sub_func_int16_t_s_s((*g_432), (-1L))) || ((*l_586) = (*l_399))))) & (((l_589 = (safe_rshift_func_int16_t_s_s(p_32, 10))) > (p_32 || p_32)) <= (*l_566))))), g_117)), 4))), p_32));
                        (*g_69) = (***g_90);
                        (*g_69) = l_589;
                    }
                }
            }
        }

        ;
        ;
    }

    ;
    ;
    ;
    return p_32;



}







static unsigned func_34(int * p_35, unsigned char p_36, const int p_37, int * p_38)
{
    int **l_71 = &g_69;
    int l_74 = 1L;
    (*l_71) = &g_65;

    ;
lbl_128:
    (*l_71) = (*l_71);
    for (g_65 = 16; (g_65 <= 2); g_65 = safe_sub_func_uint16_t_u_u(g_65, 1))
    {
        unsigned char l_75 = 0xBAL;
        int ***l_97 = (void*)0;
        int l_133 = 0L;
        (*p_38) = (p_36 && l_75);
        (*p_38) = (**l_71);
        if ((*p_38))
        {
            const int ****l_93 = (void*)0;
            const int ****l_94 = (void*)0;
            unsigned l_98 = 0UL;
            int l_118 = (-9L);
            if ((safe_rshift_func_int16_t_s_s((+((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((g_13 && (p_37 != (safe_add_func_int32_t_s_s((((**l_71) | ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((((*g_69) < (*g_69)) < ((g_90 = g_90) == (l_97 = g_95))) >= (((*g_69) || (((p_37 && (**l_71)) != 6UL) > (**l_71))) < 0x4BD9L)), 5)), g_56)), (**l_71))) != 0xC8L)) >= l_98), 4294967287UL)))), l_75)), (*p_38))) & g_65)), 5)))
            {
                int *l_101 = (void*)0;
                for (p_36 = (-2); (p_36 > 2); p_36 = safe_add_func_int32_t_s_s(p_36, 1))
                {
                    l_101 = (**g_95);
                    for (g_70 = 0; (g_70 >= (-20)); g_70 = safe_sub_func_uint16_t_u_u(g_70, 4))
                    {
                        int *l_106 = &g_47;
                        (*l_106) = (safe_rshift_func_uint16_t_u_u((0x66835AC2L == p_36), 9));
                    }
                }


            }
            else
            {
                int l_113 = 0x1534BB8EL;
                short *l_114 = &g_115;
                unsigned short *l_116 = &g_117;
                (*p_38) = (~(safe_lshift_func_int8_t_s_s(g_70, 6)));
                (*p_38) = (safe_add_func_int16_t_s_s(((*l_114) = (safe_sub_func_int32_t_s_s(((!0x5AL) || p_36), (((l_113 <= p_36) && (**g_91)) > g_65)))), ((*l_116) = p_37)));
                if ((l_118 = (+(*p_38))))
                {
                    int l_121 = 1L;
                    for (g_115 = (-27); (g_115 != 22); g_115++)
                    {
                        l_121 = (-4L);
                    }
                }
                else
                {
                    if ((safe_sub_func_int16_t_s_s(((*p_38) != ((**l_71) && (p_37 ^ (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_37, 3)), p_37)) ^ (**g_91)) <= (**l_71))))), g_70)))
                    {
                        if (l_98)
                            goto lbl_128;
                        (**g_90) = (void*)0;

                        ;
                        (**g_90) = p_38;


                    }
                    else
                    {
                        (**g_95) = (**g_95);
                    }
                }
                for (g_56 = (-27); (g_56 < 23); g_56++)
                {
                    l_118 = ((0xCFL | (l_113 == g_117)) >= g_117);
                    for (g_70 = 0; (g_70 == (-13)); --g_70)
                    {
                        l_133 = (**g_91);
                    }
                    l_113 = (*p_38);
                    return p_36;
                }
            }

            ;
            (*p_38) = 0L;
        }
        else
        {
            int *l_136 = &l_74;
            short *l_138 = &g_115;
            (*l_136) = (safe_rshift_func_uint8_t_u_s(((**l_71) == ((void*)0 != (**g_90))), (func_41(l_136, l_136, p_36, ((*l_138) = (safe_unary_minus_func_int8_t_s(p_36)))) >= 0x667CL)));

            ;
        }

        ;
        (*g_91) = (**g_90);
    }
    return g_56;
}







static int * func_39(const short p_40)
{
    char l_61 = (-1L);
    int *l_66 = (void*)0;
    (*g_49) = p_40;
    if (l_61)
    {
        int *l_62 = (void*)0;
        g_49 = &g_47;

        ;
        l_62 = &g_47;

        ;
    }
    else
    {
        char l_63 = 0x39L;
        int *l_64 = &g_65;
        (*l_64) = ((*g_49) = (l_63 | g_56));
    }
    return l_66;


}







static const short func_41(int * p_42, int * p_43, unsigned char p_44, short p_45)
{
    int **l_54 = &g_49;
    int ***l_53 = &l_54;
    unsigned char *l_55 = &g_56;
    g_49 = &g_47;

    ;
    (*p_42) = ((+(((*l_53) = &g_49) != (void*)0)) | ((*l_55) = p_44));
    if ((safe_unary_minus_func_uint32_t_u(((g_13 > 0x3EL) <= (*p_42)))))
    {
        p_43 = &g_47;

        ;
    }
    else
    {
        return g_56;
    }

    ;
    for (g_56 = 0; (g_56 < 52); ++g_56)
    {
        int *l_60 = (void*)0;
        (**l_53) = l_60;

        ;
        (**l_53) = &g_47;

        ;
        return g_13;
    }
    return (**l_54);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
