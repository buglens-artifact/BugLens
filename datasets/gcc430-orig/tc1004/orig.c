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



static int g_27 = (-5L);
static int g_35 = 0L;
static int g_47 = 0xB1300CA3L;
static int g_50 = 0xB49F2B78L;
static unsigned g_52 = 0x5D8D3410L;
static unsigned short g_57 = 0x25A9L;
static unsigned char g_59 = 255UL;
static short g_60 = 1L;
static int g_62 = 0x8FE831E3L;
static char g_111 = 0x36L;
static char g_113 = 0x82L;
static int g_118 = 0xD0B90E51L;
static unsigned short g_132 = 6UL;
static int *g_135 = (void*)0;
static int **g_134 = &g_135;
static int g_253 = 1L;
static unsigned short g_287 = 0UL;
static unsigned g_341 = 4294967295UL;
static int *g_383 = &g_62;
static short g_410 = 0x17EFL;
static int ****g_441 = (void*)0;
static unsigned char *g_451 = &g_59;
static unsigned char **g_450 = &g_451;
static int *g_458 = (void*)0;
static int g_463 = 0x39DDD20AL;
static unsigned *g_473 = &g_341;
static unsigned **g_472 = &g_473;
static unsigned char g_569 = 249UL;
static unsigned short g_597 = 0xCDF7L;
static unsigned short *g_625 = &g_597;
static unsigned short **g_624 = &g_625;
static int g_725 = 1L;
static volatile int g_761 = 0x4AC5390CL;
static unsigned **g_807 = &g_473;
static int **g_841 = &g_458;



static char func_1(void);
static char func_2(int p_3, short p_4, int p_5, char p_6);
static unsigned char func_9(int p_10, short p_11, int p_12, unsigned p_13);
static short func_16(int p_17, int p_18, unsigned p_19, short p_20, int p_21);
static unsigned char func_25(unsigned p_26);
static unsigned func_42(int p_43, int * p_44);
static unsigned char * func_69(unsigned char p_70, int * p_71, int p_72, int p_73);
static char func_80(unsigned short * p_81);
static unsigned short * func_82(int ** p_83, unsigned char p_84, unsigned short p_85, char p_86);
static int ** func_87(unsigned short p_88, int ** p_89, unsigned char p_90, int p_91, unsigned p_92);
static char func_1(void)
{
    unsigned char l_22 = 0x8CL;
    unsigned short l_634 = 65535UL;
    int l_650 = 1L;
    unsigned l_662 = 0UL;
    int l_663 = 6L;
    unsigned short l_675 = 0x0566L;
    unsigned short l_684 = 2UL;
    unsigned ***l_695 = (void*)0;
    int *l_728 = &g_118;
    int **l_765 = &l_728;
    int l_766 = 0x45C7E5A0L;
    char *l_818 = &g_111;
    char **l_817 = &l_818;
    unsigned short **l_835 = &g_625;
    unsigned short **l_837 = &g_625;
    int l_842 = 0x7FC3E3A7L;
    if ((((func_2((+((safe_div_func_int32_t_s_s(((func_9((safe_lshift_func_int16_t_s_s(0xFD1FL, func_16(l_22, (safe_lshift_func_uint8_t_u_s(func_25(g_27), 4)), l_22, g_27, g_27))), g_27, l_22, l_22) ^ l_22) | 1L), l_634)) != l_634)), l_634, g_27, g_27) | l_22) ^ l_634) & 6UL))
    {
        unsigned char l_647 = 0UL;
        unsigned l_648 = 5UL;
        int l_649 = 0x2AAEE6A0L;
        int *l_651 = &g_253;
        (*l_651) &= (g_50 = (l_650 ^= (g_35 ^= (l_647 >= (l_649 = l_648)))));
        if (g_597)
            goto lbl_652;
lbl_652:
        g_62 = 0x23F67A7AL;
        for (g_52 = 28; (g_52 == 35); ++g_52)
        {
            (*g_134) = &g_62;

            ;
            (*g_135) = (*g_135);
        }


        (*g_134) = (void*)0;

        ;
    }
    else
    {
lbl_664:
        for (g_118 = 4; (g_118 == (-10)); g_118 = safe_sub_func_uint16_t_u_u(g_118, 3))
        {
            return g_59;
        }
    }



    ;
    for (g_27 = (-1); (g_27 < (-22)); --g_27)
    {
        int *l_659 = &g_463;
        l_659 = l_659;
    }
    if ((l_663 = (safe_lshift_func_uint16_t_u_u(l_662, 2))))
    {
        short l_673 = 1L;
        int l_674 = 7L;
        char *l_676 = &g_111;
        int *l_677 = &g_463;
        short *l_680 = &l_673;
        char l_683 = 0x4AL;
        int *l_694 = &g_35;
        short l_715 = (-1L);
        unsigned l_716 = 0x0D017512L;
        unsigned l_749 = 4294967295UL;
        int l_753 = 0x729EC944L;
        char l_801 = 0x57L;
        unsigned **l_805 = &g_473;
        if (g_35)
            goto lbl_664;
lbl_687:
        (*l_677) &= (((**g_624) <= (l_662 & (*g_451))) | (safe_rshift_func_int8_t_s_s((((*g_473) | 0UL) | ((*l_676) = ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_662 | l_673), func_16(l_674, l_673, l_675, l_673, l_22))), l_662)) <= 0x42L))), 7)));
        if ((safe_add_func_uint16_t_u_u(((l_680 == (void*)0) <= (safe_div_func_int32_t_s_s(((*l_677) = ((l_684 = (0xA9L < (((*l_680) ^= (func_2((1UL | (l_634 <= (65526UL < (*l_677)))), ((l_683 < (*g_451)) >= (**g_624)), (*l_677), l_634) != 0x275DL)) <= 0x7B38L))) && (*g_625))), g_59))), 1UL)))
        {
            unsigned l_685 = 4294967293UL;
            int *l_686 = &g_253;
            char *l_722 = (void*)0;
            int l_732 = 0L;
            int ***l_733 = &g_134;
            if ((((*l_686) |= ((g_341 != 1UL) >= (~func_2(func_16(l_634, l_634, (**g_472), l_685, (!g_341)), l_675, (*l_677), l_685)))) == (*l_677)))
            {
                unsigned char *l_696 = (void*)0;
                unsigned char *l_697 = &g_569;
                int *l_698 = (void*)0;
                short l_707 = 0x437BL;
                if (g_47)
                    goto lbl_687;
                if ((safe_rshift_func_uint16_t_u_u((**g_624), ((safe_add_func_int16_t_s_s(func_42((g_59 & (g_111 = (safe_sub_func_int16_t_s_s(g_35, 0x884DL)))), l_694), 8UL)) == ((*l_697) = func_16(((void*)0 != l_695), g_287, (*l_694), g_59, l_684))))))
                {
                    return g_410;
                }
                else
                {
                    char l_712 = 1L;
                    (*g_134) = l_698;

                    ;
                    (*l_686) ^= (safe_add_func_int8_t_s_s(g_111, (safe_add_func_uint32_t_u_u((((*l_697) = l_662) != (0x5BDB4726L <= ((void*)0 == l_698))), l_684))));
                    (*l_694) = (+((*l_686) && g_50));
                    (*l_694) = (~func_2(((l_707 & ((func_25(((((+l_663) >= ((((safe_lshift_func_uint16_t_u_u(((*l_686) != (safe_add_func_uint32_t_u_u(func_80((*g_624)), l_712))), l_707)) & l_22) || g_118) != l_684)) < l_715) != (-8L))) | g_463) && l_716)) ^ g_569), g_410, l_22, g_597));


                }
            }
            else
            {
                int *l_717 = &l_663;
                char *l_720 = &l_683;
                char **l_721 = &l_720;
                unsigned *l_723 = &g_52;
                unsigned char *l_724 = &l_22;
                unsigned l_748 = 4294967295UL;
                (*g_134) = l_717;

                ;
                (*l_717) = func_9(g_597, (safe_add_func_int32_t_s_s(((*l_686) = ((**g_134) = (*g_135))), 0x68BD78BAL)), g_341, (((((*l_724) &= ((+((*g_451) = (*g_451))) & (0xC642AF54L > ((!(((*l_721) = l_720) == l_722)) >= ((*l_723) = (**g_472)))))) && l_634) || 0xB2A7L) ^ (-1L)));


                if (((*l_717) = g_725))
                {
                    int *l_729 = (void*)0;
                    int ***l_736 = &g_134;
lbl_739:
                    for (g_410 = 0; (g_410 > (-26)); g_410 = safe_sub_func_int16_t_s_s(g_410, 6))
                    {
                        (*l_686) = (*l_686);
                    }
                    if ((g_569 <= (l_728 == l_729)))
                    {
                        int ****l_734 = (void*)0;
                        int ****l_735 = &l_733;
                        (*l_717) &= ((*l_677) |= (safe_add_func_uint8_t_u_u(l_732, (((*l_735) = l_733) != l_736))));
                        (*l_694) = (safe_lshift_func_int8_t_s_u(((*l_676) |= g_725), (*g_451)));
                        if (l_674)
                            goto lbl_739;
                        (***l_735) = l_677;

                        ;
                    }
                    else
                    {
                        unsigned char l_740 = 0x21L;
                        int *l_741 = &g_50;
                        (*l_717) |= l_740;
                        l_741 = &l_650;

                        ;
                    }


                    (*l_686) = (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((*l_728), (*l_677))), (safe_rshift_func_uint16_t_u_u(func_2(g_132, l_748, ((*l_717) = (*l_686)), (*l_694)), ((g_113 = ((**l_721) |= (0x3AL | 253UL))) < 0x22L)))));


                    (*l_694) = (*l_717);
                }
                else
                {
                    unsigned short l_750 = 0x3242L;
                    int l_751 = 0x4945EC7FL;
                    int l_754 = (-1L);
                    if ((*l_686))
                    {
                        l_751 = func_2((*l_717), l_749, func_42((*l_694), ((*g_134) = l_677)), l_750);


                        (**l_733) = l_677;

                        ;
                        (**l_733) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned l_752 = 0x77D6217FL;
                        (*l_694) |= (l_754 |= (+func_16(((*l_728) = l_751), l_752, (*l_677), ((*l_680) &= ((*g_451) < (l_753 <= l_752))), g_113)));
                        (*l_686) = (*l_686);
                        (*l_717) &= ((*l_728) >= ((*g_473) = 0UL));
                    }
                    (**l_733) = &l_751;

                    ;
                    for (l_683 = 0; (l_683 >= (-29)); l_683--)
                    {
                        short l_762 = 7L;
                        int *l_767 = (void*)0;
                    }
                    if (((**l_765) = ((&l_750 != ((*g_624) = (*g_624))) < 0x034DL)))
                    {
                        (***l_733) &= ((*l_728) | ((*g_625) == g_35));
                        (**g_134) &= 0xE0FBC24DL;
                        return g_253;


                    }
                    else
                    {
                        int *l_770 = &g_118;
                        l_770 = (*l_765);
                    }
                }


            }
            for (g_27 = 24; (g_27 != (-8)); g_27--)
            {
                char l_781 = 0L;
                int *l_782 = &g_118;
                (**l_765) = (safe_mod_func_uint16_t_u_u((*l_677), ((g_597 < (((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((**l_765), (((*l_694) != (((*l_686) &= (safe_sub_func_uint32_t_u_u((*g_473), (*l_728)))) < 0L)) != g_118))), (((*g_624) = (*g_624)) != &l_634))) >= 1UL) != l_781)) && (*g_473))));
                (*g_134) = l_782;

                ;
            }


            (*l_677) &= 0x53F1995EL;
        }
        else
        {
            short l_783 = 0xAF2CL;
            int *l_813 = &g_50;
            unsigned char *l_831 = &l_22;
            (*l_728) = l_783;
            for (l_663 = 0; (l_663 < (-29)); --l_663)
            {
                char l_796 = 0L;
                int *l_797 = &g_118;
                unsigned char *l_830 = (void*)0;
                (*l_797) = func_42(((g_52 <= func_2((*l_677), ((&g_410 != &g_410) || 0xCA6EL), ((safe_sub_func_int16_t_s_s(l_783, (safe_lshift_func_int8_t_s_u(g_253, 7)))) < (func_16((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((*l_728), (safe_rshift_func_uint16_t_u_u((((*g_451) = l_783) == (*l_694)), 1)))), g_463)) <= 0xF774L) && (*l_728)), g_47, (**g_472), (*l_677), g_341) != l_783)), l_796)) && l_796), l_797);
                for (g_463 = 0; (g_463 < 1); ++g_463)
                {
                    unsigned l_800 = 1UL;
                    unsigned ***l_804 = &g_472;
                    unsigned ***l_806 = (void*)0;
                    char *l_808 = &l_796;
                    unsigned short *l_810 = &l_684;
                    unsigned char **l_832 = (void*)0;
                    unsigned char **l_833 = &l_831;
                }
            }
        }


        (*g_134) = l_694;

        ;
    }
    else
    {
        char l_834 = 0x3FL;
        unsigned short ***l_836 = &l_835;
        (*g_134) = &g_118;

        ;
        (**g_134) = 0x0D5805CBL;
        (**g_134) &= (l_834 ^ (0UL | (((*l_836) = l_835) == l_837)));
        for (l_684 = 0; (l_684 < 16); l_684++)
        {
            int ***l_840 = &g_134;
            g_841 = ((*l_840) = &g_383);

            ;
            ;
        }

        ;
        ;
    }

    ;
    ;
    ;
    return l_842;
}







static char func_2(int p_3, short p_4, int p_5, char p_6)
{
    unsigned char l_636 = 6UL;
    int l_637 = 5L;
    unsigned short l_644 = 65529UL;
    l_637 = ((safe_unary_minus_func_uint8_t_u(0xB4L)) == (((*g_625) = l_636) <= l_636));
    (*g_134) = &p_5;

    ;
    (*g_134) = (*g_134);
    (**g_134) &= ((safe_lshift_func_uint8_t_u_u(0x68L, (*g_451))) < (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_636, l_644)), (safe_mul_func_int16_t_s_s(p_6, ((**g_624) <= g_463))))));
    return p_6;


}







static unsigned char func_9(int p_10, short p_11, int p_12, unsigned p_13)
{
    int *l_387 = &g_118;
    int ***l_392 = &g_134;
    unsigned char l_504 = 4UL;
    unsigned l_510 = 4294967293UL;
    int l_523 = 0x23CBE16CL;
    unsigned **l_535 = (void*)0;
    unsigned l_587 = 4294967293UL;
    int l_596 = 0L;
    for (p_11 = 0; (p_11 < 1); p_11++)
    {
        unsigned l_397 = 1UL;
        unsigned short *l_422 = &g_287;
        int ****l_440 = &l_392;
        int l_525 = 7L;
        char *l_532 = &g_111;
        int l_601 = 0x781D7D97L;
        unsigned short l_621 = 3UL;
        (*g_134) = l_387;

        ;
        if ((*l_387))
        {
            for (p_10 = 0; (p_10 >= (-21)); p_10--)
            {
                int ***l_393 = &g_134;
                int ****l_394 = &l_393;
                short *l_395 = (void*)0;
                short *l_396 = &g_60;
                int *l_404 = &g_50;
                int l_405 = 0x0DB601ADL;
                (*l_387) = ((l_392 != ((*l_394) = l_393)) <= (0UL < ((*l_396) ^= g_47)));
                l_405 &= ((***l_393) > (!(p_12 < func_16(((*g_135) >= (((0xE8147767L & (~(l_397 = (g_35 = (**g_134))))) ^ ((((safe_rshift_func_uint8_t_u_s((g_287 < (*l_387)), 4)) == (!(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_16(((*l_404) = p_12), (((*l_387) || g_52) & (**g_134)), (****l_394), p_10, p_12), 8)), p_12)) == 0L) | 0x04L))) && p_12) > (**g_134))) < g_52)), (***l_392), g_27, p_13, p_10))));
                (****l_394) = (&g_60 == l_395);
            }
            (**g_134) &= ((safe_rshift_func_int16_t_s_u(0x6A63L, 15)) | (safe_rshift_func_int16_t_s_s(g_410, (safe_rshift_func_int16_t_s_s(0x53FEL, 13)))));
            (**g_134) |= p_13;
        }
        else
        {
            char *l_418 = (void*)0;
            char *l_419 = &g_113;
            int l_425 = 0xDF545FCCL;
            (**g_134) |= (+(safe_lshift_func_int8_t_s_u(((**l_392) == (void*)0), 1)));
            (*l_387) |= l_397;
            l_425 = (0xC52AL && ((*l_422) = (p_10 == (safe_sub_func_uint16_t_u_u((+(+(((((!(safe_unary_minus_func_int8_t_s(((*l_419) = (g_111 = func_80(&g_57)))))) && (p_13 < ((safe_mod_func_int16_t_s_s(func_80(l_422), p_10)) != (safe_sub_func_int32_t_s_s(l_425, 4294967286UL))))) != g_57) < 1UL) >= p_10))), 1L)))));

            ;
        }

        ;
        for (g_52 = 0; (g_52 > 52); g_52++)
        {
            int ***l_433 = &g_134;
            unsigned char *l_449 = (void*)0;
            unsigned char **l_448 = &l_449;
            int *l_464 = (void*)0;
            int *l_465 = (void*)0;
            int *l_466 = &g_50;
            unsigned l_522 = 0UL;
            for (g_60 = (-1); (g_60 > 5); ++g_60)
            {
                unsigned l_455 = 0xD73319C6L;
                int *l_459 = &g_62;
                if ((safe_lshift_func_int16_t_s_u(1L, 13)))
                {
                    unsigned char l_432 = 0xE0L;
                    unsigned char ***l_452 = &g_450;
                    char *l_456 = &g_111;
                    unsigned *l_457 = &g_341;
                    char l_460 = 9L;
                    if (l_432)
                    {
                        unsigned short l_434 = 65535UL;
                        l_434 = ((void*)0 == l_433);
                    }
                    else
                    {
                        int l_439 = 1L;
                        int *****l_442 = &g_441;
                        (*l_387) = (safe_add_func_int8_t_s_s((l_397 > (g_35 ^ ((safe_mod_func_int32_t_s_s(p_10, ((0x5BCD1A03L && l_439) && (l_440 == ((*l_442) = g_441))))) || p_12))), (safe_mod_func_int8_t_s_s(p_10, 1UL))));
                    }
                    (**l_392) = (void*)0;

                    ;
                    if ((safe_div_func_uint32_t_u_u(((*l_457) = (g_35 == (((*l_456) = ((safe_unary_minus_func_int16_t_s(((l_448 == ((*l_452) = g_450)) <= g_60))) && (((p_13 = (+((p_12 & ((safe_sub_func_uint32_t_u_u((func_16(((((*l_452) = (void*)0) == (l_448 = &g_451)) == func_16(g_253, func_42(((*l_387) = (g_111 != p_10)), (**l_433)), p_11, p_11, g_111)), p_11, g_50, g_59, g_111) < p_11), 1UL)) & l_455)) || p_12))) & g_341) & 0x0EL))) ^ g_27))), g_50)))
                    {
                        g_458 = (*g_134);
                        (*g_134) = (***l_440);
                        (*g_134) = l_459;

                        ;
                        if ((**g_134))
                            continue;
                    }
                    else
                    {
                        if (l_432)
                            break;
                        (*l_387) |= l_460;
                    }

                    ;
                }
                else
                {
                    (*g_134) = (**l_433);
                }
                (*l_387) = (-1L);
                (*l_387) &= (0xD2C3L >= 0xB2A8L);
                (***l_440) = l_459;

                ;
            }

            ;
            if (((safe_lshift_func_uint8_t_u_s(p_10, 6)) || ((*l_466) = ((*l_387) = g_463))))
            {
                int l_467 = 0x084201DBL;
                short *l_468 = (void*)0;
                short *l_469 = &g_410;
                (*l_387) ^= l_467;
                if ((((*l_469) = (*l_387)) >= g_35))
                {
                    short l_489 = 3L;
                    int l_491 = 1L;
                    for (g_410 = 0; (g_410 == 3); ++g_410)
                    {
                        if (l_397)
                            break;
                        (**l_392) = (**l_392);
                    }
                    if (l_467)
                    {
                        unsigned ***l_474 = (void*)0;
                        unsigned ***l_475 = &g_472;
                        (**l_392) = (**l_433);
                        (*l_475) = g_472;
                    }
                    else
                    {
                        int *l_476 = &l_467;
                        char *l_490 = &g_113;
                        (*g_134) = l_476;

                        ;
                        if (p_12)
                            break;

                        (*l_387) = (((safe_sub_func_int16_t_s_s(func_16((safe_mod_func_uint16_t_u_u(((*l_422) = ((safe_rshift_func_uint8_t_u_s(p_12, ((*l_490) = (((****l_440) &= g_27) & ((0x60L < func_42(p_10, (**l_433))) <= (((*l_469) = ((l_489 |= ((safe_rshift_func_uint16_t_u_u(g_52, (safe_sub_func_uint16_t_u_u(p_12, 0x2CA9L)))) & (*l_387))) >= 4294967289UL)) == 0x0CB6L)))))) | (-1L))), p_12)), p_11, (*g_473), l_491, p_12), g_50)) & (-5L)) <= 0L);
                        (*g_134) = &l_467;
                    }

                    ;
                    return l_489;


                }
                else
                {
                    int l_501 = 0xC287AF55L;
                    (***l_440) = (*g_134);
                    if (p_12)
                    {
                        if (p_12)
                            break;
                    }
                    else
                    {
                        unsigned short l_500 = 0xA145L;
                        l_501 &= (safe_lshift_func_uint16_t_u_s((p_13 >= (func_42((((safe_lshift_func_int8_t_s_s(g_57, 3)) <= (**g_472)) == (g_132 |= (+0xC0BAL))), (*g_134)) < 0x8FL)), (safe_sub_func_uint32_t_u_u((**g_472), (safe_div_func_uint32_t_u_u(l_500, 4294967290UL))))));
                        (*l_466) = p_11;
                    }
                    (**l_433) = (**l_392);
                }
            }
            else
            {
                unsigned l_505 = 0UL;
                char *l_519 = &g_111;
                unsigned char *l_524 = &l_504;
                l_505 &= ((*l_466) = (p_12 || (g_47 <= ((*l_422) = (l_504 >= (g_253 ^ (0x81189C19L ^ ((*l_387) = p_13))))))));
                l_525 = (safe_rshift_func_uint8_t_u_u(((*l_387) = (+(p_12 ^ ((safe_rshift_func_int16_t_s_s((l_510 > (safe_lshift_func_uint16_t_u_s(p_12, 7))), 6)) < (*l_387))))), ((safe_rshift_func_uint16_t_u_s(0UL, 1)) > (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((*l_466), ((*l_524) = ((*g_451) = ((l_523 = ((((*l_519) ^= (*l_466)) > (safe_mod_func_uint8_t_u_u((*g_451), 1L))) ^ l_522)) & (-8L)))))), 1)))));
            }
        }


        if ((((safe_sub_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(g_59, (safe_rshift_func_int8_t_s_s((p_12 ^ (((*l_532) = (func_80(&g_57) == 65527UL)) || (+(safe_mod_func_uint32_t_u_u((**g_472), p_12))))), 0)))) >= p_12) < (+(p_13 | 0xC3F4L))), g_47)) || p_13) || g_52))
        {
            unsigned l_552 = 0x3F5ABAE5L;
            int l_572 = (-1L);
            int l_620 = 0xF6516F19L;
            short *l_627 = &g_410;
            (**l_392) = &g_253;

            ;
            if ((&g_473 != l_535))
            {
                unsigned char *l_545 = &l_504;
                unsigned char *l_547 = &g_59;
                int l_566 = 0xAA36CC25L;
                int *l_584 = &g_62;
                unsigned short **l_600 = (void*)0;
                for (g_341 = 0; (g_341 != 47); ++g_341)
                {
                    int *l_540 = &g_35;
                    unsigned char **l_546 = &l_545;
                    for (g_111 = 0; (g_111 > 5); ++g_111)
                    {
                        short *l_544 = &g_410;
                        (*g_134) = l_540;

                        ;
                        (*g_135) |= (safe_rshift_func_int16_t_s_s(p_11, (((safe_unary_minus_func_uint16_t_u(((*l_422) = 1UL))) == (p_11 & (g_60 = ((*l_544) &= 0L)))) || g_132)));
                        (*g_135) &= 1L;
                    }
                    (*l_540) = (((*l_546) = l_545) == l_547);
                    (****l_440) = p_13;
                    for (g_50 = 0; (g_50 >= (-12)); g_50 = safe_sub_func_uint32_t_u_u(g_50, 3))
                    {
                        short *l_550 = &g_410;
                        int *l_551 = &g_62;
                        (*g_135) = ((-7L) & ((*l_550) &= g_57));
                        (***l_440) = l_551;

                        ;
                        if (p_13)
                            continue;
                        (*l_540) &= (**g_134);
                    }
                }

                ;
                if ((~((***l_392) = l_552)))
                {
                    short l_555 = 0L;
                    int l_558 = (-7L);
                    (*l_387) &= ((l_558 = ((*l_422) = ((safe_add_func_int32_t_s_s(l_555, (safe_lshift_func_uint8_t_u_s(l_552, 6)))) == p_13))) || (((**g_134) & p_12) > (safe_mod_func_uint32_t_u_u((((*g_451) ^ ((****l_440) ^ (safe_lshift_func_int16_t_s_s((1UL < (p_11 & l_552)), g_62)))) | p_10), p_10))));
                }
                else
                {
                    short l_563 = (-1L);
                    int *l_599 = &g_47;
                    if (l_563)
                    {
                        unsigned char *l_567 = (void*)0;
                        unsigned char *l_568 = &g_569;
                        unsigned l_581 = 0x4EAD1AE0L;
                        (****l_440) &= ((safe_mod_func_uint8_t_u_u(((*l_545) = l_566), (((*l_568) = ((*l_547) = p_12)) & (l_572 = (safe_add_func_int32_t_s_s(p_13, p_10)))))) < ((&g_472 == &g_472) <= ((((((!((*g_473) != p_10)) ^ p_13) >= 0x356C04FAL) ^ g_118) != 0x29L) & g_50)));
                        (**g_134) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((0x7BL <= ((((*l_422) = ((safe_mod_func_int32_t_s_s((0xF860701AL && (+func_16((****l_440), (p_13 >= (safe_mod_func_uint32_t_u_u(((**g_472) = p_12), p_12))), l_581, g_27, p_11))), g_59)) >= l_566)) < 0x4762L) && l_552)), p_13)), (*l_387)));
                        l_572 = func_42((safe_add_func_uint16_t_u_u(l_566, ((*l_422) = g_569))), ((*g_134) = (l_584 = (***l_440))));

                        ;
                        (*g_134) = &l_572;

                        ;
                    }
                    else
                    {
                        unsigned l_598 = 1UL;
                        l_598 ^= (safe_mod_func_uint8_t_u_u(p_11, (g_597 |= ((g_62 < l_587) == ((*l_545) = ((((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((1UL <= (p_11 > ((((*l_532) |= g_113) && ((safe_rshift_func_uint16_t_u_u(((4294967295UL >= ((**g_472) |= ((*l_387) < (p_11 > 0xF030ED60L)))) || p_11), 7)) || g_59)) < l_596))), p_10)) <= g_47) && 255UL), 0xEE3AA84FL)) <= (*g_451)) ^ p_11) || (*g_473)))))));
                        (****l_440) = (*g_135);
                        (*g_134) = l_599;

                        ;
                    }

                    ;
                    ;
                    (*l_387) = (l_572 && (+(p_12 > ((((void*)0 != l_600) & ((**g_472) = p_13)) <= (*l_599)))));
                    return (*l_599);


                }
                if (l_552)
                {
                    int **l_602 = &g_383;
                    (*g_135) = l_601;
                    (*l_602) = ((**l_392) = &l_566);

                    ;
                    ;
                }
                else
                {
                    int *l_622 = (void*)0;
                    unsigned short **l_626 = &l_422;
                    if ((*l_387))
                    {
                        short l_619 = 0xFFA1L;
                        l_620 &= ((safe_sub_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((-3L), p_12)) < ((safe_sub_func_int16_t_s_s(((p_13 > g_569) | p_13), p_10)) > l_572)), (safe_add_func_int8_t_s_s(func_25((safe_rshift_func_uint8_t_u_s((l_619 < p_12), p_13))), g_410)))) != p_12), (-1L))), 0UL)) == p_11) & p_12) | l_619), p_10)) > p_10);


                        (*l_584) = (l_621 <= (((*l_422) = (g_132 |= g_463)) && 0x299BL));
                        if (p_11)
                            continue;
                        (***l_440) = l_622;

                        ;
                    }
                    else
                    {
                        int *l_623 = &l_523;
                        int *l_628 = &l_601;
                        (*l_628) &= func_16(((*l_623) &= ((*l_387) = func_25(p_12))), (((l_600 = g_624) != l_626) >= l_621), p_12, (l_627 == &p_11), p_10);


                        ;
                    }


                    ;
                    (*g_134) = l_622;

                    ;
                }

                ;

                ;
                if (p_12)
                    continue;


            }
            else
            {
                (***l_440) = (*g_134);
            }


            return l_620;
        }
        else
        {
            unsigned short l_629 = 8UL;
            int *l_630 = &g_62;
            (*l_630) ^= (((*g_451) == (l_629 || ((&g_50 == (void*)0) >= ((*g_473) && ((**g_472) = (*l_387)))))) > g_113);
            (*l_630) = p_13;
        }
    }


    for (l_523 = (-23); (l_523 != (-30)); l_523 = safe_sub_func_uint16_t_u_u(l_523, 4))
    {
        unsigned l_633 = 0xFAF56826L;
        return l_633;
    }
    (**l_392) = &l_523;

    ;
    return p_11;


}







static short func_16(int p_17, int p_18, unsigned p_19, short p_20, int p_21)
{
    return p_17;
}







static unsigned char func_25(unsigned p_26)
{
    int *l_34 = &g_35;
    int l_36 = 0L;
    int l_45 = 0L;
    int *l_49 = &g_50;
    unsigned *l_51 = &g_52;
    int l_55 = 0xE214356EL;
    unsigned short *l_56 = &g_57;
    unsigned char *l_58 = &g_59;
    int *l_61 = &g_62;
    char l_316 = 1L;
    int *l_379 = (void*)0;
    int *l_380 = &l_45;
    int *l_381 = &g_47;
    int *l_382 = &l_55;
    int l_384 = 0x147D93FDL;
    if (((*l_61) |= (((g_60 = ((safe_add_func_uint8_t_u_u(((*l_58) |= ((safe_mod_func_int8_t_s_s(((((*l_56) = (safe_rshift_func_uint8_t_u_u(((l_36 ^= ((*l_34) ^= g_27)) > (((safe_add_func_uint16_t_u_u(0xC6D0L, p_26)) < ((safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u(func_42((l_45 = g_27), l_34), ((*l_51) = ((l_49 = (void*)0) != (void*)0)))))) | (safe_add_func_int16_t_s_s((-1L), 0x7AB8L)))) | l_55)), 7))) ^ g_50) < 0x94BFL), g_50)) != p_26)), p_26)) | 0xC894L)) >= p_26) && 0x25L)))
    {
        int l_65 = 0xB3B6AC89L;
        int **l_95 = &l_49;
        unsigned *l_329 = &g_52;
        unsigned l_339 = 0xAAB763AFL;
        if (p_26)
        {
            char l_66 = 1L;
            int *l_267 = &l_55;
            for (g_59 = 10; (g_59 != 35); g_59++)
            {
                if (l_65)
                    break;
                if (p_26)
                    break;
                (*l_34) = g_35;
                if (l_66)
                    break;
            }
            if (l_65)
            {
                int *l_67 = &g_50;
                int **l_68 = &l_61;
                short *l_236 = &g_60;
                unsigned char **l_252 = &l_58;
                (*l_68) = l_67;

                ;
                g_253 ^= ((&g_59 != ((*l_252) = func_69(((*l_58) = (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((*l_67), (p_26 | ((func_42(g_47, &g_62) > ((*l_236) = (safe_mod_func_int8_t_s_s(func_80(func_82(func_87((((safe_mod_func_uint16_t_u_u(0x14A8L, p_26)) || (((((void*)0 == (*l_68)) == p_26) & g_62) > 5L)) < 0L), l_95, g_35, l_66, p_26), g_60, g_50, (**l_68))), 1UL)))) >= g_27)))), 6))), &l_45, (*l_67), g_50))) > p_26);


                ;
                if (((*l_267) = ((*l_34) = (safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((~(((*l_56) = (g_111 > (safe_sub_func_uint32_t_u_u(((p_26 <= (((**l_68) ^= ((void*)0 != l_56)) > 0x331BD6A1L)) ^ (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(func_42(((~((((*l_34) = ((p_26 ^ (1L < p_26)) >= (((!0x875AL) & 0x7A40L) | g_118))) & g_57) < 1L)) < 0xC58AL), l_267), (*l_267))), g_59))), 4294967295UL)))) == g_113)), 3)), g_113)) >= p_26))))))
                {
                    int *l_270 = &l_55;
                    unsigned short *l_279 = &g_57;
                    unsigned short **l_278 = &l_279;
                    char *l_280 = &g_113;
                    for (g_35 = 0; (g_35 == (-13)); --g_35)
                    {
                        l_270 = (*g_134);

                        ;
                        (*g_134) = (*g_134);
                        (*l_95) = ((*l_68) = (*g_134));

                        ;
                        ;
                    }


                    ;
                    ;
                    (*l_67) = (*l_67);
                    (*l_34) = (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*l_280) |= (safe_sub_func_uint8_t_u_u((l_56 == ((*l_278) = &g_132)), g_50))), 0xC4L)), 10))));

                    ;
                    for (p_26 = 18; (p_26 == 52); ++p_26)
                    {
                        (*l_67) = (((*l_280) &= p_26) || (((+p_26) | (safe_mod_func_uint8_t_u_u(g_62, (~((-3L) && 0xBCL))))) == func_42(g_287, (*g_134))));
                    }
                }
                else
                {
                    (*g_134) = (*g_134);
                    (*l_68) = (*l_68);
                }


                ;
                (*l_67) &= p_26;
            }
            else
            {
                char l_288 = 0L;
                (*l_267) &= l_288;
                (*l_61) = (g_60 <= 0xB04CL);
            }


            ;
            ;
        }
        else
        {
            unsigned short l_319 = 0x21F3L;
            int l_326 = (-8L);
            char *l_332 = &l_316;
            char *l_333 = &g_111;
            char *l_334 = &g_113;
            short *l_340 = &g_60;
            for (g_132 = 23; (g_132 > 1); --g_132)
            {
                int *l_297 = &g_253;
                int ***l_302 = (void*)0;
                int ***l_303 = (void*)0;
                int ***l_304 = &l_95;
            }
            for (g_62 = 0; (g_62 >= (-15)); g_62--)
            {
                (*l_34) = (safe_div_func_int8_t_s_s(g_59, p_26));
            }
            l_326 &= (safe_mod_func_uint8_t_u_u(func_42(((*l_61) = ((void*)0 == (*l_95))), &l_55), l_319));
            g_50 &= ((g_341 |= ((*l_340) = (((l_329 != l_34) > ((((*l_334) = ((*l_333) = (safe_rshift_func_uint8_t_u_s(g_62, ((*l_332) |= func_80(&g_57)))))) > ((p_26 && (l_326 = ((safe_add_func_int32_t_s_s(l_319, ((safe_add_func_int32_t_s_s((7UL || p_26), l_339)) <= p_26))) < l_326))) & g_27)) >= g_57)) || g_132))) & p_26);
        }


        ;
        ;
    }
    else
    {
        unsigned *l_344 = &g_341;
        g_253 &= (safe_sub_func_int16_t_s_s((0x0DL || (((*l_344) ^= ((*l_51) = p_26)) > (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((*l_61), (g_113 < ((*l_61) != (safe_mod_func_int16_t_s_s((*l_34), g_132)))))), (safe_rshift_func_int8_t_s_s(func_42(g_287, (*g_134)), 4)))))), p_26));
        for (l_36 = 24; (l_36 == (-30)); --l_36)
        {
            return p_26;
        }
        for (g_52 = (-7); (g_52 >= 25); g_52 = safe_add_func_uint32_t_u_u(g_52, 3))
        {
            short l_367 = 0x36DCL;
            int l_368 = 5L;
            for (g_111 = (-10); (g_111 >= 7); g_111 = safe_add_func_int8_t_s_s(g_111, 1))
            {
                l_368 = (safe_sub_func_uint8_t_u_u((((!(func_42((p_26 != (safe_sub_func_uint8_t_u_u((~(safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(p_26, 10)), ((&g_52 == &g_52) <= (&g_132 == l_56))))), g_253))), (*g_134)) >= p_26)) ^ p_26) & g_35), l_367));
                (*l_61) ^= p_26;
            }
            for (g_287 = 0; (g_287 >= 55); ++g_287)
            {
                (*l_34) ^= 7L;
            }
        }
    }


    ;
    ;
    (*l_382) |= ((p_26 > p_26) ^ func_42(func_80(func_82(func_87(p_26, &l_34, ((*l_58) ^= (0x16L || (safe_lshift_func_uint16_t_u_s(((*l_34) || ((*l_34) = (safe_lshift_func_int8_t_s_s((1L <= p_26), 7)))), 9)))), ((*l_381) = ((*l_380) = ((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((-10L), g_341)), 5)) != 0x3127L))), g_60), p_26, g_27, g_57)), &l_36));



    (*l_381) |= (p_26 || (*l_380));
    (*g_134) = (g_383 = &l_55);

    ;
    ;
    return l_384;



}







static unsigned func_42(int p_43, int * p_44)
{
    int *l_46 = &g_47;
    int l_48 = 1L;
    l_48 = ((*l_46) = 8L);
    (*l_46) |= 0xA644184EL;
    return (*l_46);
}







static unsigned char * func_69(unsigned char p_70, int * p_71, int p_72, int p_73)
{
    int *l_237 = (void*)0;
    int **l_238 = &l_237;
    int *l_244 = &g_50;
    unsigned l_247 = 4294967291UL;
    unsigned char *l_251 = &g_59;
    (*g_134) = l_237;

    ;
    (*l_238) = ((*g_134) = l_237);
    if ((*p_71))
    {
        unsigned short l_243 = 65535UL;
        (*p_71) = (g_132 <= (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_243, ((*p_71) >= func_42((*p_71), l_244)))) != (safe_mod_func_uint8_t_u_u((4294967290UL | g_111), func_80(&l_243)))), l_247)));
        (*p_71) |= func_42(g_27, p_71);
        (*l_238) = (*g_134);
    }
    else
    {
        unsigned short l_250 = 65531UL;
        (*l_244) = (safe_add_func_int32_t_s_s((*p_71), ((*p_71) > ((g_59 | g_118) & (p_70 >= g_111)))));
        (*l_244) = func_42((&p_71 != (void*)0), ((*g_134) = p_71));


        (**g_134) = (l_250 && p_70);
    }


    (*l_244) &= (*p_71);
    return l_251;


}







static char func_80(unsigned short * p_81)
{
    unsigned char l_208 = 0x78L;
    int l_211 = 0L;
    unsigned l_228 = 0xC24FB951L;
    int l_229 = 9L;
    int *l_234 = &l_211;
    short l_235 = 0x8588L;
    for (g_35 = 0; (g_35 != (-30)); g_35 = safe_sub_func_uint8_t_u_u(g_35, 3))
    {
        int l_205 = (-3L);
        return l_205;
    }
    for (g_52 = (-7); (g_52 == 31); g_52 = safe_add_func_int8_t_s_s(g_52, 3))
    {
        int *l_209 = (void*)0;
        int *l_210 = (void*)0;
        unsigned l_219 = 1UL;
        l_211 = l_208;
        if (((~l_208) ^ l_211))
        {
            g_118 = 0xFE2047E0L;
        }
        else
        {
            unsigned l_212 = 0x2CA4FB35L;
            int *l_213 = (void*)0;
            int *l_214 = &g_35;
            int *l_215 = &g_118;
            (*g_134) = l_209;

            ;
            (*l_214) = l_212;
            (*l_215) |= ((*l_214) = (*l_214));
        }
        l_229 |= ((safe_div_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(l_219)) != ((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(((void*)0 != &l_210), l_211)), (safe_add_func_int32_t_s_s(g_111, (safe_mod_func_uint8_t_u_u(((g_113 == l_211) == l_228), g_62)))))) | 0x478FA292L)), l_211)) >= l_228);
    }
    (*l_234) = (safe_sub_func_int8_t_s_s((l_229 &= ((g_113 |= l_228) & l_228)), (l_228 <= (safe_div_func_uint8_t_u_u(g_132, g_57)))));
    return l_235;
}







static unsigned short * func_82(int ** p_83, unsigned char p_84, unsigned short p_85, char p_86)
{
    int *l_119 = &g_62;
    int l_140 = 0xC2A0AA59L;
    unsigned char l_183 = 250UL;
    unsigned short *l_202 = &g_57;
    (*l_119) = ((-4L) >= (0L || 3L));
    for (g_60 = (-14); (g_60 > 19); g_60++)
    {
        int l_128 = 0x8DA2FB92L;
        int l_188 = 0x8D392A8AL;
        int *l_194 = (void*)0;
        for (g_62 = 0; (g_62 <= 19); ++g_62)
        {
            unsigned short *l_129 = (void*)0;
            unsigned short *l_130 = &g_57;
            unsigned short *l_131 = &g_132;
            int l_133 = 0x416FBB8AL;
            int **l_137 = &g_135;
            int ***l_136 = &l_137;
            unsigned char *l_201 = &l_183;
            unsigned char **l_200 = &l_201;
            if ((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_131) = ((*l_130) = l_128)), l_133)), ((l_128 == g_59) <= (g_134 != ((*l_136) = p_83))))))
            {
                unsigned char *l_138 = &g_59;
                int l_139 = 0x3E414CEAL;
                if (((p_84 & 0xEC64L) < (((((*l_138) = p_85) ^ 0x1BL) ^ (-1L)) ^ g_27)))
                {
                    int *l_141 = &l_133;
                    l_139 ^= 0x42FF3E09L;
                    l_140 = l_128;
                    (*l_141) &= p_84;
                }
                else
                {
                    short l_150 = 0xEF34L;
                    unsigned l_156 = 0UL;
                    int *l_182 = &g_35;
                    for (l_139 = 0; (l_139 != (-24)); l_139 = safe_sub_func_uint32_t_u_u(l_139, 5))
                    {
                        (*l_137) = (*g_134);
                    }


                    if (((g_132 >= g_132) >= ((0L ^ l_139) & (((safe_lshift_func_int16_t_s_s(0x5088L, ((p_85 | (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((p_85 ^ ((p_85 >= (~((*l_119) || l_150))) == g_27)), g_60)), (*l_119)))) <= 0x8807L))) & l_150) == p_84))))
                    {
                        int *l_151 = &l_140;
                        (*l_151) &= 0xC438F618L;
                    }
                    else
                    {
                        int *l_169 = (void*)0;
                        char *l_174 = &g_113;
                        int *l_177 = &l_133;
                        l_140 ^= (&p_85 == &g_57);
                        g_118 &= (((((safe_div_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(0x08L, ((*l_138) = (l_156 <= (safe_mul_func_int16_t_s_s((g_27 || p_86), ((safe_add_func_uint16_t_u_u((*l_119), p_84)) >= 0xA62FL))))))) || (safe_rshift_func_uint16_t_u_s(((*l_131) &= (safe_lshift_func_uint16_t_u_s(0x25E3L, (((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_52, p_85)), p_84)) < g_57) < 0x848CL)))), p_85))), g_50)) ^ p_84) > 0xB603A3F6L) & 4294967295UL) | 4L);
                        (*l_177) = ((0x2EE892D9L != (0xF956F524L != (safe_lshift_func_int8_t_s_s((+(g_62 || 0xCD12L)), ((safe_lshift_func_int8_t_s_u(((*l_174) &= 0L), ((g_62 & p_84) >= (safe_rshift_func_uint16_t_u_u(9UL, 11))))) || 0x2BA0D44CL))))) <= 9UL);
                    }
                    (*l_182) ^= ((safe_lshift_func_int8_t_s_s((l_156 <= p_85), 1)) == (safe_lshift_func_int16_t_s_u(0xAD0EL, 5)));
                }


                return &g_57;




            }
            else
            {
                char *l_191 = &g_113;
                int l_192 = 0x0A8A3E14L;
                if ((l_183 = 0x356CCD2EL))
                {
                    int *l_193 = &l_133;
                    if ((+((*l_119) && (*l_119))))
                    {
                        g_35 |= (*l_119);
                    }
                    else
                    {
                        if (p_85)
                            break;
                    }
                    if (l_128)
                        break;
                    (*l_193) &= ((safe_rshift_func_int16_t_s_s(0x75C3L, (p_86 != ((*l_130) = ((safe_lshift_func_int16_t_s_u(p_85, l_188)) ^ ((safe_lshift_func_uint16_t_u_s(((void*)0 == l_191), 2)) ^ l_188)))))) & ((p_85 == l_128) >= l_192));
                    (*g_134) = l_194;

                    ;
                }
                else
                {
                    int *l_197 = &g_35;
                    (*l_197) = (safe_add_func_uint8_t_u_u(253UL, g_27));
                }
                g_35 = (p_84 ^ g_60);
            }


            if (p_85)
                continue;
            g_35 = ((l_194 == (void*)0) <= (((*l_200) = &g_59) != &g_59));

            ;
            return &g_57;



        }
        (*g_134) = l_194;

        ;
        (*g_134) = &l_140;

        ;
    }


    (*p_83) = ((*g_134) = (*g_134));


    return l_202;




}







static int ** func_87(unsigned short p_88, int ** p_89, unsigned char p_90, int p_91, unsigned p_92)
{
    unsigned l_96 = 0xC7BD553FL;
    int *l_97 = &g_35;
    int *l_100 = &g_62;
    unsigned char l_101 = 2UL;
    unsigned short *l_116 = &g_57;
    (*l_97) &= (l_96 == l_96);
    (*p_89) = l_97;


    (*l_100) &= ((*l_97) = (safe_div_func_uint16_t_u_u(0xA6AFL, 0x08D8L)));
    if (l_101)
    {
        int *l_102 = &g_35;
        short l_105 = 0x0A11L;
        char *l_110 = &g_111;
        char *l_112 = &g_113;
        int *l_117 = &g_118;
        (*p_89) = l_102;
        (*l_117) &= (((*l_100) = (safe_mod_func_uint32_t_u_u(((-4L) | g_62), l_105))) || ((*l_102) > (((*l_112) = ((*l_110) = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((4294967289UL > g_57), (*l_102))), 14)))) & (((safe_div_func_uint16_t_u_u((((p_91 || (&g_57 == l_116)) ^ (*l_100)) != 6L), p_92)) != g_57) || 0xC18A2FD9L))));
        (*p_89) = (void*)0;


        (*l_97) ^= g_57;
    }
    else
    {
        (*l_100) = g_27;
    }


    return p_89;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
