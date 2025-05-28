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



static int g_7 = (-6L);
static const int *g_6 = &g_7;
static int *g_38 = (void*)0;
static int g_79 = 0x0673EEFDL;
static short g_99 = 0xCF7AL;
static int **g_126 = &g_38;
static int ***g_125 = &g_126;
static int *g_248 = &g_7;
static short g_361 = 1L;
static int g_363 = 0x0EB86FDFL;
static unsigned char g_508 = 8UL;
static int **g_557 = &g_38;
static short g_646 = (-1L);
static unsigned short g_702 = 0x648AL;



static int func_1(void);
static int * func_2(const int * p_3, int p_4, unsigned short p_5);
static int * func_11(int * p_12, int * p_13, int * p_14, unsigned p_15, int * p_16);
static int * func_18(short p_19, int p_20, int p_21);
static char func_26(int p_27, int * p_28, unsigned p_29, int p_30, int * p_31);
static int * func_32(unsigned p_33, const unsigned p_34, int * p_35, unsigned char p_36);
static int * func_41(int * p_42, unsigned p_43, int * p_44, int p_45);
static short func_50(unsigned short p_51, int * p_52, char p_53);
static int * func_55(int * p_56);
static int func_57(char p_58, int * p_59, int * p_60, int * p_61);
static int func_1(void)
{
    unsigned l_8 = 0xAA810D21L;
    int * const l_9 = &g_7;
    unsigned short l_10 = 65535UL;
    int *l_694 = &g_7;
    int * const l_703 = &g_363;
    int *l_712 = &g_363;
    (*g_557) = func_2(g_6, ((~0x2A1836CCL) , l_8), ((1L | ((void*)0 == l_9)) && l_10));

    ;
    if (((*l_9) < g_361))
    {
        int *l_697 = (void*)0;
        const int **l_701 = &g_6;
        const int ***l_700 = &l_701;
        int **l_704 = &g_38;
        if (func_50(func_50(g_363, l_694, ((safe_rshift_func_int16_t_s_s(func_50(g_508, l_697, (*l_694)), (g_508 == (4UL < (safe_rshift_func_int8_t_s_u(g_361, 3)))))) != (*l_9))), l_697, g_646))
        {
            (***g_125) = (*l_694);
        }
        else
        {
            return g_646;
        }

        ;
        (*g_126) = l_694;

        ;
        (**g_125) = (**g_125);
        (*l_704) = l_703;

        ;
    }
    else
    {
        unsigned l_705 = 6UL;
        const int **l_714 = &g_6;
        if (((l_705 == 4294967295UL) > (0x17L & (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((func_57((l_705 >= (65533UL && ((((*l_703) & ((&g_126 != &g_126) , ((g_646 && (-1L)) & (*l_9)))) & g_363) && 65535UL))), l_694, l_694, l_712) >= (*l_9)), 3)) & 1L) != l_705), 13)), 5)))))
        {
            char l_713 = 0xA0L;
            (*l_703) = l_713;
            (*l_712) = ((*g_125) == l_714);
        }
        else
        {
            return g_79;
        }
        (*g_126) = (void*)0;
        l_694 = (void*)0;

        ;
    }

    ;
    ;
    return g_508;
}







static int * func_2(const int * p_3, int p_4, unsigned short p_5)
{
    int *l_17 = (void*)0;
    const int l_37 = (-3L);
    (*g_557) = func_11(l_17, &g_7, func_18(p_5, (g_7 ^ ((safe_add_func_uint8_t_u_u(p_4, (((((((((p_5 == ((safe_rshift_func_int8_t_s_s(((*g_6) , func_26((*g_6), func_32(g_7, l_37, g_38, p_5), p_5, l_37, l_17)), 2)) || g_7)) , p_4) && 254UL) && (*p_3)) , l_37) <= p_4) >= l_37) == p_5) != 0UL))) < p_4)), p_5), l_37, l_17);

    ;
    ;
    (*g_248) = (*p_3);
    return l_17;


}







static int * func_11(int * p_12, int * p_13, int * p_14, unsigned p_15, int * p_16)
{
    unsigned short l_594 = 0xE9BFL;
    int ***l_595 = &g_126;
    char l_614 = 0x13L;
    unsigned char l_624 = 0x6CL;
    int *l_680 = &g_363;
    int *l_682 = &g_7;
    for (g_79 = 29; (g_79 >= (-11)); g_79 = safe_sub_func_int16_t_s_s(g_79, 8))
    {
        int *l_591 = &g_7;
        unsigned short l_643 = 7UL;
        for (g_99 = 0; (g_99 == 15); g_99 = safe_add_func_uint16_t_u_u(g_99, 6))
        {
            unsigned l_590 = 5UL;
            unsigned short l_621 = 0xB311L;
            (*p_13) = (***g_125);
            if ((((((l_590 , l_591) != p_13) >= g_361) && (+l_590)) != (((((((safe_lshift_func_uint16_t_u_s(g_7, 13)) != l_590) != p_15) , g_79) != l_594) <= l_594) || l_590)))
            {
                (*g_126) = l_591;

                ;
                if ((((*l_591) , l_595) == l_595))
                {
                    int *l_598 = &g_7;
                    (***l_595) = (*p_13);
                    for (g_7 = (-10); (g_7 < 28); g_7 = safe_add_func_uint32_t_u_u(g_7, 3))
                    {
                        (*p_14) = (g_79 ^ ((*p_13) || p_15));
                    }
                    (**g_125) = (g_79 , p_12);

                    ;
                    (*g_557) = l_598;

                    ;
                }
                else
                {
                    int *l_599 = &g_363;
                    l_599 = p_16;

                    ;
                }
                (*g_557) = (*g_557);
            }
            else
            {
                unsigned l_612 = 0UL;
                int *l_613 = &g_79;
                const int ***l_625 = (void*)0;
                if ((safe_rshift_func_int8_t_s_u(((((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(4294967295UL, (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_15 <= ((***l_595) != ((((safe_sub_func_int8_t_s_s(0x07L, (*l_591))) , (g_508 ^ (g_7 != p_15))) != ((*l_591) < (*p_14))) == (**g_557)))), 1L)), g_79)) , l_612) | 0x982813F4L))), p_15)) , l_613) != (void*)0) ^ l_590), l_614)))
                {
                    int * const l_617 = &g_79;
                    (*g_557) = l_613;

                    ;
                    for (g_508 = 0; (g_508 > 13); g_508 = safe_add_func_uint16_t_u_u(g_508, 8))
                    {
                        int **l_618 = &g_248;
                        (*l_618) = l_617;

                        ;
                        (**l_595) = p_13;

                        ;
                        (***l_595) = (***l_595);
                    }

                    ;
                }
                else
                {
                    (*p_14) = (g_508 , (**g_126));
                }
                if ((safe_mod_func_int16_t_s_s((*l_613), (*l_613))))
                {
                    l_621 = (*g_6);
                }
                else
                {
                    unsigned l_632 = 4294967288UL;
                    (*p_14) = (safe_sub_func_uint32_t_u_u((g_79 || ((((*l_591) & (l_624 < (&g_557 == l_625))) , p_15) >= (g_508 , (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((((+(g_79 >= (safe_rshift_func_uint16_t_u_s(p_15, 15)))) || p_15) || 0xF143L) & l_632), p_15)), 0))))), 0L));
                    (*p_14) = (**g_126);
                }
            }
            (*p_14) = (((((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(249UL, (safe_rshift_func_int16_t_s_s((***l_595), 0)))), 7)) <= (*p_14)) || g_79), (((safe_rshift_func_uint8_t_u_u(l_643, 1)) < 0x5A9BL) , ((-8L) & (safe_mod_func_uint8_t_u_u(((***l_595) >= g_646), p_15)))))) != g_361) , p_15) <= g_79) ^ p_15);
            if ((**g_126))
                break;
        }
        (*l_591) = (safe_add_func_uint8_t_u_u(((((((safe_rshift_func_int8_t_s_u(g_7, 2)) < ((safe_mod_func_uint16_t_u_u((((p_15 ^ (&l_591 == (*g_125))) , ((*l_591) & (65535UL != p_15))) > ((safe_rshift_func_int16_t_s_u(((g_7 ^ 8UL) ^ 0x8FL), 7)) < 0x15B67B09L)), p_15)) < g_508)) , (*g_557)) == (void*)0) >= p_15) == (*l_591)), 0x65L));
    }

    ;
    ;
    (***g_125) = ((**g_126) , 0xF67A0C9BL);
    (*g_248) = ((***l_595) , (safe_sub_func_uint8_t_u_u(((***l_595) == p_15), p_15)));
    for (p_15 = 19; (p_15 >= 3); p_15 = safe_sub_func_int16_t_s_s(p_15, 1))
    {
        unsigned short l_659 = 65533UL;
        int *l_678 = &g_79;
        unsigned short l_679 = 65535UL;
        int *l_681 = (void*)0;
        const int **l_691 = &g_6;
        const int ***l_690 = &l_691;
        if (func_57((((**g_125) != (void*)0) == ((***l_595) || ((l_659 , (safe_lshift_func_int8_t_s_u(l_659, 0))) != ((safe_mod_func_int16_t_s_s(((!(((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(((((*l_595) != (*g_125)) > ((safe_lshift_func_uint8_t_u_u((g_99 > func_57(((safe_lshift_func_uint8_t_u_s(((((safe_add_func_uint32_t_u_u(func_57(((g_79 ^ 0UL) , p_15), p_14, l_678, (**l_595)), (*p_14))) != 0x3AA1L) , l_679) ^ g_361), 5)) , 4L), (**g_125), (**g_125), l_678)), 5)) , p_15)) <= g_7), g_646)) , 0xA5L) | g_7) && (*g_248)), 65535UL)), p_15)), 0xFCCDL)) , (-1L)) , p_15)) && (*l_678)), g_508)) != 0x165AL)))), l_680, l_681, l_682))
        {
            const int l_685 = 0x99164837L;
            short l_692 = 0xE43AL;
            int *l_693 = &g_7;
            (*p_14) = func_57(((safe_add_func_int32_t_s_s(((l_685 <= func_50((*l_678), (**l_595), (((g_508 | (l_685 && (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(2L, (p_15 , ((((g_363 , (l_595 != l_690)) >= p_15) >= p_15) , g_646)))) < 0xF3B6A08AL), l_692)) & l_692) >= 2L))) | 1L) ^ 1L))) || (**l_691)), 5UL)) >= p_15), l_693, p_16, p_12);

            ;
            (*l_678) = (*p_13);
            return (**l_595);


        }
        else
        {
            return p_12;


        }
    }
    return (**l_595);


}







static int * func_18(short p_19, int p_20, int p_21)
{
    int *l_581 = &g_363;
    unsigned short l_582 = 65535UL;
    short l_585 = (-1L);
    (*g_248) = (-9L);
    (*g_248) = (0x93L | func_26((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((p_20 , ((((safe_add_func_uint16_t_u_u(g_79, 0xB579L)) > p_21) , g_363) || ((g_7 >= (safe_mod_func_int16_t_s_s((func_50(g_79, l_581, g_361) == p_21), p_19))) ^ g_508))), (*l_581))) , g_361) & (*l_581)), p_21)), l_581, l_582, p_20, l_581));
    (*l_581) = func_50((*l_581), l_581, ((((*l_581) >= (65534UL & (((safe_mod_func_uint32_t_u_u(g_79, (l_585 , ((((*l_581) == p_20) & (*l_581)) | (*l_581))))) && g_361) <= p_19))) || (*l_581)) < (*l_581)));

    ;
    return l_581;


}







static char func_26(int p_27, int * p_28, unsigned p_29, int p_30, int * p_31)
{
    const int l_567 = 0L;
    int **l_569 = &g_248;
    int l_572 = 9L;
    if (func_50((l_567 != (0x4DL > 0xF1L)), &p_30, g_508))
    {
        int *l_568 = &g_79;
        l_568 = &p_30;

        ;
        (*g_557) = (void*)0;

        ;
    }
    else
    {
        (***g_125) = (((((p_27 | g_508) , l_569) != l_569) , func_57(g_79, &p_30, &p_30, ((g_363 & (safe_rshift_func_int8_t_s_s((**l_569), 7))) , (*l_569)))) ^ 0xCCD6L);
    }
    (*g_557) = (*l_569);

    ;
    p_28 = func_55((*l_569));


    ;
    (*g_126) = func_32((**l_569), p_27, &p_27, func_50(p_30, (*l_569), l_572));

    ;
    return p_30;
}







static int * func_32(unsigned p_33, const unsigned p_34, int * p_35, unsigned char p_36)
{
    unsigned short l_54 = 6UL;
    int *l_319 = &g_7;
    int l_558 = 0x1A71AE4DL;
    short l_559 = (-7L);
    int ***l_566 = &g_126;
    for (p_36 = 0; (p_36 < 43); p_36 = safe_add_func_uint8_t_u_u(p_36, 1))
    {
        unsigned l_316 = 6UL;
    }
    (**g_125) = ((safe_sub_func_int8_t_s_s(((((*l_319) , (*g_125)) == (*g_125)) & ((safe_lshift_func_int8_t_s_u((func_50((safe_mod_func_int16_t_s_s(g_7, func_57(((g_363 , g_363) | (l_566 == l_566)), (**g_125), (**g_125), (**l_566)))), (*g_126), g_361) ^ (*l_319)), 7)) <= p_34)), g_99)) , (void*)0);

    ;
    return (*g_126);


}







static int * func_41(int * p_42, unsigned p_43, int * p_44, int p_45)
{
    char l_322 = 0xE4L;
    int *l_338 = &g_7;
    int *l_341 = &g_7;
    int l_436 = 0xEA4D41D1L;
    unsigned l_451 = 1UL;
    short l_494 = 3L;
    if (((safe_add_func_uint8_t_u_u(l_322, g_7)) & ((g_79 > ((p_43 , (l_322 ^ 1UL)) > p_43)) & ((safe_add_func_uint16_t_u_u((g_99 < (safe_unary_minus_func_uint16_t_u(p_43))), l_322)) , g_99))))
    {
        unsigned short l_365 = 65535UL;
        int *l_367 = &g_363;
        for (g_99 = 7; (g_99 > (-28)); --g_99)
        {
            int *l_335 = (void*)0;
            short l_342 = 0L;
            int ***l_369 = &g_126;
            const short l_371 = 0xE3E7L;
            int *l_380 = &g_363;
            for (p_43 = 0; (p_43 < 60); ++p_43)
            {
                int *l_330 = &g_79;
                unsigned l_353 = 0xBEA9577AL;
                (*g_126) = l_330;

                ;
                if (((p_45 > (p_45 ^ func_57((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((func_50(p_43, l_335, p_43) < ((safe_lshift_func_uint16_t_u_s(p_43, 8)) , g_7)), p_45)), g_7)), &g_7, l_338, l_335))) , (*p_44)))
                {
                    int l_354 = (-1L);
                    for (g_79 = (-16); (g_79 <= (-20)); g_79 = safe_sub_func_int32_t_s_s(g_79, 6))
                    {
                        if ((*g_248))
                            break;
                        return l_341;


                    }
                    if (l_342)
                        break;
                    (**g_125) = &p_45;

                    ;
                    (**g_125) = ((safe_add_func_uint8_t_u_u(0xF1L, (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(p_45, (*l_330))) == (&p_44 == (void*)0)), ((safe_rshift_func_uint8_t_u_u(g_79, 2)) == ((l_353 || 0xE27EL) | ((+(g_7 && p_45)) != l_354))))), g_99)))) , &p_45);
                }
                else
                {
                    (**g_125) = &p_45;

                    ;
                }

                ;
                (**g_126) = (((&g_126 != &g_126) | g_79) >= (g_7 | g_79));
            }
            for (l_342 = 22; (l_342 > (-15)); l_342--)
            {
                for (g_79 = 0; (g_79 == (-18)); g_79--)
                {
                    unsigned short l_362 = 0x5E46L;
                    (*g_126) = (void*)0;

                    ;
                    (*g_126) = (((void*)0 == &p_44) , &p_45);

                    ;
                    (**g_125) = (*g_126);
                    for (p_45 = 0; (p_45 <= 1); ++p_45)
                    {
                        int *l_364 = (void*)0;
                        if (g_361)
                            break;
                        g_363 = l_362;
                        return l_364;



                    }
                }
            }
            if (func_57((g_361 , (*l_341)), l_341, ((l_365 >= 0UL) , l_335), (*g_126)))
            {
                int *l_366 = &g_363;
                (*l_366) = func_57(p_43, l_366, (l_342 , (**g_125)), (**g_125));
            }
            else
            {
                const unsigned char l_379 = 3UL;
                int *l_385 = &g_363;
                if ((!(func_57(l_365, (*g_126), (*g_126), l_367) | (4UL >= (*p_42)))))
                {
                    unsigned short l_368 = 65535UL;
                    (*l_367) = ((*l_341) | ((l_368 != func_50((*l_367), (((l_369 != &g_126) && 1UL) , ((p_45 && (safe_unary_minus_func_int16_t_s((((+func_50(p_43, (**l_369), g_79)) | (-1L)) != l_371)))) , (**g_125))), (*l_367))) == 0xB1L));

                    ;
                    (**g_125) = (*g_126);
                    if ((*p_44))
                        continue;
                }
                else
                {
                    unsigned l_372 = 0xA06C3FE3L;
                    unsigned char l_386 = 0x42L;
                    if (l_372)
                        break;
                    if ((((((p_45 , (*p_42)) == ((func_50(((void*)0 == (*g_125)), (((((void*)0 != &g_126) && (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((l_379 ^ g_361), (func_57(p_43, (*g_126), (**g_125), l_380) == g_363))), 5))) && 0L) , &p_45), p_45) & p_43) == 0x8DD4A245L)) != 250UL) | 0UL) ^ 0xFAL))
                    {
                        (**g_125) = (*g_126);
                        (*l_380) = ((safe_add_func_uint16_t_u_u(p_45, (p_43 <= p_43))) != 0UL);
                        if (l_379)
                            break;
                        (*l_380) = 0xCB6A6315L;
                    }
                    else
                    {
                        (*g_126) = ((safe_lshift_func_int8_t_s_s(p_43, 6)) , l_385);

                        ;
                        (**l_369) = ((l_386 , 0x6AD8240CL) , (**g_125));
                    }

                    ;
                    (*g_126) = ((*p_42) , l_385);

                    ;
                }

                ;
                (***l_369) = (safe_sub_func_int8_t_s_s(0L, (0x096BL | (safe_add_func_int16_t_s_s((*l_385), 0x900BL)))));
            }
        }

        ;
    }
    else
    {
        int **l_395 = (void*)0;
        (*g_126) = (void*)0;

        ;
        for (g_361 = 2; (g_361 > 13); g_361++)
        {
            int *l_399 = &g_79;
            int **l_409 = &g_38;
        }
    }

    ;
    if ((((func_50(g_99, (**g_125), p_43) != p_43) != (p_45 | ((((safe_sub_func_uint32_t_u_u(((g_363 == g_361) , 0x7F19A99BL), 0xB3DDA44FL)) > 0x45D0L) <= 0xDAB7L) == g_7))) >= p_45))
    {
        (**g_125) = l_338;

        ;
    }
    else
    {
        unsigned char l_418 = 1UL;
        for (g_79 = 0; (g_79 < (-1)); g_79 = safe_sub_func_uint16_t_u_u(g_79, 1))
        {
            short l_414 = 3L;
            int *l_434 = &g_363;
            if (l_414)
                break;
        }
    }

    ;
    if (((safe_rshift_func_int8_t_s_u((-1L), 6)) && func_50((*l_338), ((func_57(((safe_rshift_func_uint8_t_u_u(p_45, p_45)) , ((((((safe_sub_func_uint16_t_u_u(func_57(((g_7 & (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((*l_341), p_43)), 1))) != ((safe_unary_minus_func_int8_t_s(g_7)) >= (*l_338))), (**g_125), l_341, l_341), g_7)) && (*l_338)) <= l_451) , g_79) , (*l_341)) , g_79)), (*g_126), l_338, (*g_126)) , g_7) , &p_45), (*l_341))))
    {
        const unsigned char l_454 = 0UL;
        int l_489 = 0x617D1CF3L;
        int l_492 = 0x744CDEB4L;
        int *l_536 = &g_7;
        if ((*p_44))
        {
            unsigned l_455 = 0x1B060480L;
            int *l_456 = &g_363;
            short l_530 = (-1L);
            int l_538 = 0xF4B7FC67L;
            const int **l_554 = &g_6;
            const int ***l_553 = &l_554;
            if (((func_57((((g_7 , ((g_363 < ((*l_341) , (((safe_add_func_int16_t_s_s(0x207DL, l_454)) , &p_44) == (void*)0))) , l_455)) != p_43) || p_43), l_456, (*g_126), (*g_126)) >= 1L) , (*p_44)))
            {
                unsigned l_476 = 4294967295UL;
                int *l_477 = (void*)0;
                (*l_456) = 0L;
                for (g_363 = 0; (g_363 <= (-5)); g_363 = safe_sub_func_uint16_t_u_u(g_363, 1))
                {
                    char l_459 = 4L;
                    int *l_460 = (void*)0;
                    l_459 = (*p_42);
                    (*g_126) = l_338;

                    ;
                    if ((*p_42))
                    {
                        return l_456;


                    }
                    else
                    {
                        return l_460;


                    }
                }
                for (l_436 = 0; (l_436 != 15); l_436++)
                {
                    int l_473 = 9L;
                    (**g_125) = (*g_126);
                    for (g_79 = (-2); (g_79 <= (-25)); g_79 = safe_sub_func_int8_t_s_s(g_79, 8))
                    {
                        int l_467 = 0x58894BF4L;
                        char l_468 = 0x99L;
                        (*l_456) = (p_45 || (safe_mod_func_uint32_t_u_u(l_467, l_468)));
                        (**g_125) = l_456;

                        ;
                    }
                    for (g_363 = (-29); (g_363 > (-16)); g_363 = safe_add_func_int32_t_s_s(g_363, 4))
                    {
                        int * const l_471 = &g_79;
                        int **l_472 = &g_38;
                        (*l_472) = l_471;

                        ;
                        (*l_472) = (*l_472);
                        (*g_38) = l_473;
                    }
                    for (l_451 = (-6); (l_451 < 32); l_451 = safe_add_func_uint8_t_u_u(l_451, 5))
                    {
                        l_476 = l_454;
                        (*g_125) = &p_44;

                        ;
                        return l_477;



                    }
                }

                ;
                (*l_456) = (!(0x62L > p_45));
            }
            else
            {
                int l_484 = 1L;
                int *l_485 = &g_363;
                (*l_456) = (func_57((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((((!(p_45 < func_50(((safe_lshift_func_int16_t_s_s((((l_454 == (func_57(p_43, func_55((*g_126)), (l_484 , &g_363), &p_45) , g_363)) > 0L) >= l_484), 12)) < 4294967295UL), l_456, p_45))) != 6UL) , g_99), (*l_341))) > p_43), 0x0FL)), l_485, l_338, l_338) , (*l_485));

                ;
            }

            ;
            for (g_79 = (-13); (g_79 > (-18)); g_79--)
            {
                unsigned l_488 = 0UL;
                l_489 = l_488;
            }
            if ((safe_unary_minus_func_uint16_t_u((func_57((*l_456), l_341, l_338, (**g_125)) < (p_45 || ((((*g_248) == (&l_456 != (((l_456 == &p_45) || l_489) , &p_44))) | 0x055F343BL) ^ (*l_341)))))))
            {
                char l_535 = 0x74L;
                int ***l_537 = &g_126;
                (**g_125) = (**g_125);
            }
            else
            {
                unsigned char l_546 = 0xCBL;
                (*g_126) = (((func_57(g_363, (((safe_mod_func_uint32_t_u_u(func_50(((safe_lshift_func_int16_t_s_u((((g_363 ^ (*l_338)) == (*l_536)) , p_45), g_508)) , ((safe_mod_func_int16_t_s_s((-1L), p_45)) > ((safe_unary_minus_func_int32_t_s(0x9E0CB473L)) > 0xCFA7L))), &l_489, g_99), (*p_42))) , l_546) , l_341), l_338, &l_492) & p_45) | l_546) , &p_45);

                ;
                (*g_126) = l_338;

                ;
            }
            (*l_456) = (safe_sub_func_uint16_t_u_u(func_50((((safe_sub_func_uint16_t_u_u(p_45, (((safe_rshift_func_int16_t_s_s(((0x5EEBL || ((l_553 != &g_126) & func_50(((((func_57(((((((void*)0 != &p_44) , (g_508 | (((safe_add_func_int16_t_s_s(((g_363 <= p_45) >= g_99), p_43)) , (***l_553)) , p_43))) , &l_536) == g_557) != g_79), l_456, &l_492, (**g_125)) | 1UL) , (**l_554)) > (*l_456)) && 0UL), (**g_125), (*l_456)))) || (***l_553)), (*l_338))) != 4L) & (*l_338)))) , 0xE7D2L) , g_361), l_456, g_99), 4UL));

            ;
        }
        else
        {
            (**g_125) = &p_45;

            ;
        }

        ;
        (**g_126) = (*p_44);
    }
    else
    {
        (*g_557) = (**g_125);
    }

    ;
    return l_341;



}







static short func_50(unsigned short p_51, int * p_52, char p_53)
{
    int *l_317 = &g_79;
    int ***l_318 = (void*)0;
    (*g_126) = l_317;

    ;
    (*l_317) = (l_318 == &g_126);
    return p_51;
}







static int * func_55(int * p_56)
{
    unsigned l_81 = 4294967287UL;
    int *l_84 = &g_7;
    const int l_101 = (-2L);
    int *l_109 = (void*)0;
    int **l_116 = &l_109;
    int ***l_115 = &l_116;
    int l_131 = (-5L);
    int *l_139 = &g_7;
    unsigned l_192 = 1UL;
    char l_256 = 0x5EL;
    char l_308 = (-10L);
    if ((l_81 & g_79))
    {
        int *l_82 = (void*)0;
        char l_83 = (-4L);
        int *l_85 = &g_79;
        (*l_85) = func_57((g_79 , (func_57(func_57((((g_79 == g_7) , func_57(l_81, p_56, l_82, (l_83 , l_82))) || 0x212EL), &g_7, p_56, l_84), l_84, &g_7, &g_7) < g_7)), l_82, l_82, &g_7);
        (*l_85) = (*l_85);
        if ((*g_6))
        {
            int ***l_86 = (void*)0;
            int **l_88 = &l_84;
            int ***l_87 = &l_88;
            (*l_87) = &g_38;

            ;
            for (l_81 = 24; (l_81 != 44); ++l_81)
            {
                int **l_91 = (void*)0;
                short l_100 = 0x3B3EL;
                (*l_85) = (*g_6);
                (*l_87) = &p_56;

                ;
                (*l_85) = ((((void*)0 != l_91) || ((-5L) & (safe_rshift_func_uint16_t_u_s((*l_85), 8)))) , ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((6L >= (((safe_unary_minus_func_int16_t_s((g_7 <= 0L))) | (*g_6)) != ((g_99 && 254UL) , (*l_85)))), l_100)), l_101)) & 7UL));
            }

            ;
            l_84 = p_56;

            ;
            (*l_88) = &g_7;
        }
        else
        {
            int *l_102 = &g_79;
            int **l_108 = &l_102;
            l_102 = l_82;

            ;
            for (g_99 = 0; (g_99 <= (-15)); --g_99)
            {
                int **l_105 = (void*)0;
                int **l_106 = (void*)0;
                int **l_107 = (void*)0;
                p_56 = p_56;
            }
            (*l_108) = p_56;

            ;
            (*l_108) = l_109;

            ;
        }

        ;
    }
    else
    {
lbl_166:
        for (l_81 = 15; (l_81 == 7); l_81 = safe_sub_func_int16_t_s_s(l_81, 4))
        {
            int **l_112 = &l_109;
            const int **l_114 = (void*)0;
            const int ***l_113 = &l_114;
            (*l_112) = p_56;

            ;
            (*l_113) = &g_6;

            ;
            (*l_112) = &g_7;

            ;
        }

        ;
        return &g_79;


    }

    ;
lbl_138:
    (*l_115) = &p_56;

    ;
    if ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((g_79 || 0L), 4)) != ((!((*g_6) ^ g_79)) | (safe_mod_func_int32_t_s_s((g_99 >= (1L <= ((*l_116) == (void*)0))), (((void*)0 == g_125) ^ g_79))))), g_7)), g_99)))
    {
        unsigned char l_129 = 253UL;
        int *l_140 = &l_131;
        unsigned l_147 = 4294967295UL;
        int *l_150 = (void*)0;
        unsigned l_210 = 4294967290UL;
        int l_211 = (-3L);
        for (l_81 = 0; (l_81 != 57); l_81++)
        {
            short l_134 = (-1L);
            int *l_143 = &g_79;
            char l_144 = 0x84L;
            int *l_240 = &l_131;
            if (l_129)
            {
                int *l_130 = &g_7;
                int *l_132 = (void*)0;
                int *l_133 = &l_131;
                l_131 = func_57(l_129, l_130, (*g_126), l_130);
                (*l_133) = 0x25A2E691L;
                l_134 = (l_129 , (*g_6));
                for (l_129 = 0; (l_129 > 5); l_129 = safe_add_func_uint16_t_u_u(l_129, 2))
                {
                    int *l_137 = &g_7;
                    (*l_116) = l_137;

                    ;
                    if (l_101)
                        goto lbl_138;
                }
            }
            else
            {
                if (func_57(func_57(g_99, l_139, (l_134 , p_56), p_56), l_140, (**g_125), l_140))
                {
                    if (l_134)
                        break;
                    for (g_99 = 29; (g_99 <= (-22)); g_99 = safe_sub_func_int8_t_s_s(g_99, 4))
                    {
                        (*l_116) = l_143;

                        ;
                        if ((*l_140))
                            continue;
                        p_56 = (void*)0;

                        ;
                    }
                }
                else
                {
                    (**l_115) = (*g_126);

                    ;
                }

                ;
                (**g_125) = p_56;
                if (l_144)
                    break;
                for (l_131 = 0; (l_131 < 5); l_131 = safe_add_func_uint16_t_u_u(l_131, 1))
                {
                    return l_143;


                }
            }

            ;
            if (func_57(((*l_139) != l_147), (*g_126), p_56, ((((((((g_79 || ((g_99 < (g_79 | ((*l_143) ^ ((void*)0 == &l_140)))) | (*l_140))) <= 0x25EDB48BL) && g_7) , p_56) == (void*)0) , p_56) == l_150) , p_56)))
            {
                int l_165 = 0xD446D23EL;
                int ***l_167 = (void*)0;
                int l_208 = 6L;
                unsigned l_212 = 0xB32BFE36L;
                (*l_116) = l_143;

                ;
                if ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_99, ((*l_143) >= ((*l_140) <= (safe_rshift_func_int8_t_s_s(((((*g_6) , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((*l_143), g_7)), (safe_rshift_func_int16_t_s_u(0xB1A1L, 0))))) && (((safe_rshift_func_int8_t_s_u(g_99, 0)) && ((((((l_165 != (*l_143)) , 4294967291UL) != g_7) == g_99) , (*l_139)) == g_79)) & (*l_143))) & (-1L)), (*l_139))))))), 1)))
                {
                    unsigned short l_168 = 0x4BF6L;
                    if ((1L || l_165))
                    {
                        (*p_56) = (*p_56);
                        if (l_147)
                            goto lbl_166;
                        (*g_126) = ((*l_140) , p_56);

                        ;
                        if ((*l_140))
                            continue;
                    }
                    else
                    {
                        int *l_169 = &g_79;
                        (*g_125) = ((func_57(((l_165 <= (((void*)0 == l_167) != (***l_115))) != 4294967295UL), (**g_125), p_56, p_56) & 5L) , (*g_125));
                        l_169 = (func_57(l_168, p_56, p_56, (*l_116)) , (**g_125));

                        ;
                        (*l_143) = 1L;
                    }
                    (*g_126) = l_150;

                    ;
                    (*l_140) = 0xFD6AEB38L;
                    (**l_115) = (*g_126);

                    ;
                }
                else
                {
                    (*g_126) = l_150;

                    ;
                }

                ;
                ;
                (*l_143) = (g_7 & ((*g_125) != ((safe_add_func_uint8_t_u_u(g_79, (g_99 , (safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_99 , g_7), (safe_rshift_func_uint8_t_u_s(((65535UL > (1L | (safe_rshift_func_int8_t_s_u((0xEBL != 0x06L), g_99)))) == g_7), 6)))), 0x17L))))))) , &p_56)));
                if ((*l_143))
                {
                    int *l_187 = &g_7;
                    (*l_143) = (safe_mod_func_int16_t_s_s(((((void*)0 != p_56) , (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((func_57(g_99, l_187, p_56, l_187) < (!(safe_add_func_int32_t_s_s((g_99 & (-8L)), (-1L))))) <= (-10L)), 3)) == 0x67CB0E52L), 1L))) & (*l_187)), (-1L)));
                    for (l_131 = (-25); (l_131 >= 8); l_131 = safe_add_func_uint32_t_u_u(l_131, 2))
                    {
                        (*l_116) = (*g_126);

                        ;
                        (*g_126) = l_140;

                        ;
                        (*l_143) = (*g_38);
                        l_192 = 5L;
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned short l_197 = 2UL;
                    for (l_129 = (-12); (l_129 < 52); l_129 = safe_add_func_int8_t_s_s(l_129, 9))
                    {
                        int l_209 = 2L;
                        (*l_140) = (((((((l_197 <= ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((-1L), func_57((safe_rshift_func_uint16_t_u_s((~((func_57((safe_mod_func_uint16_t_u_u(0x8001L, (l_208 | (0x3FCFL >= ((l_209 , 0xA74A4E08L) ^ l_209))))), (**g_125), p_56, (**g_125)) , l_209) && (*l_143))), 7)), p_56, p_56, (*g_126)))) & (*l_139)), l_210)), l_134)) <= l_197)) && 0x434DL) , (*l_139)) <= l_209) , l_211) , l_212) >= g_99);
                        (*l_140) = (!(*l_140));
                    }
                    if ((((*l_140) || (*l_143)) , (safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((5UL || ((((safe_sub_func_int8_t_s_s((func_57((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0x96L, (safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(1UL, (((~(safe_lshift_func_int8_t_s_s(l_197, 4))) , p_56) != ((((safe_rshift_func_uint8_t_u_u(1UL, (safe_mod_func_uint32_t_u_u(g_7, 1UL)))) <= 5UL) , g_79) , (*g_126))))) > g_7), (*g_6))) == l_197), 0UL)))), 0xA977DB18L)), 4)), l_150, (*g_126), (**g_125)) , g_79), g_99)) , (*l_139)) || 0UL) && l_165)), 0x2810C4A4L)) , g_79), g_99))))
                    {
                        unsigned l_237 = 0UL;
                        (*l_140) = l_237;
                        (*l_140) = (*l_143);
                    }
                    else
                    {
                        int * const l_238 = &l_131;
                        int **l_239 = &l_150;
                        (*l_239) = l_238;

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                if (g_7)
                    goto lbl_166;
                (*l_116) = (*g_126);
                (**g_125) = (void*)0;

                ;
            }

            ;
            ;
            ;
            return l_143;



        }

        ;
        for (l_81 = 27; (l_81 <= 60); ++l_81)
        {
            char l_247 = 0xF9L;
            if ((safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((func_57(l_247, (**g_125), (**g_125), (*g_126)) , (*l_140)) , func_57(g_99, g_248, (**l_115), (**g_125))), 0x82A3L)) && 0x396CL), (*g_6))))
            {
                (**l_115) = (((*g_125) == (void*)0) , (**g_125));
                (*l_140) = (*g_248);
            }
            else
            {
                (*l_116) = (g_7 , (**g_125));
            }
        }
        (*g_126) = (*g_126);
    }
    else
    {
        int *l_251 = &l_131;
        for (l_192 = 0; (l_192 > 38); l_192 = safe_add_func_uint8_t_u_u(l_192, 8))
        {
            (**g_125) = (**g_125);
            return p_56;


        }
        (*g_126) = (**l_115);

        ;
        (*l_251) = (func_57(g_79, (**g_125), p_56, l_251) , (((*l_139) , func_57((func_57((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_s((((l_256 && 0x61F6L) , &g_126) != (void*)0), (*l_251))) != g_7) == g_99) , (*l_251)), 0)), p_56, (*l_116), (*g_126)) >= (*l_251)), (**g_125), (**g_125), p_56)) == (*l_251)));
    }

    ;
    for (l_131 = 22; (l_131 >= (-22)); l_131 = safe_sub_func_uint16_t_u_u(l_131, 7))
    {
        char l_274 = 4L;
        int l_275 = 0xC3956D99L;
        int *** const l_296 = &l_116;
        int *l_315 = &g_79;
        for (l_81 = 24; (l_81 <= 20); l_81 = safe_sub_func_int16_t_s_s(l_81, 3))
        {
            short l_263 = 0xE193L;
            int *l_301 = &l_275;
            for (l_256 = 0; (l_256 > 24); l_256++)
            {
                int l_268 = 0x16C6A2E2L;
                int *l_289 = &l_275;
            }
        }
        (**l_296) = (*g_126);
        (*l_315) = (((g_99 , (safe_sub_func_uint16_t_u_u(g_99, g_99))) | g_79) && (g_7 ^ (l_308 , ((safe_lshift_func_uint16_t_u_u(g_7, ((safe_rshift_func_int8_t_s_u(func_57(g_7, ((safe_lshift_func_uint8_t_u_u(g_99, g_99)) , (**l_296)), (*l_116), p_56), g_99)) > g_7))) && g_79))));
    }
    return (*g_126);


}







static int func_57(char p_58, int * p_59, int * p_60, int * p_61)
{
    unsigned l_64 = 0x025B0D6BL;
    int *l_75 = (void*)0;
    unsigned short l_76 = 0xC691L;
    unsigned l_77 = 0x2B13F3B7L;
    int *l_78 = &g_79;
    int **l_80 = &l_75;
    l_64 = (safe_mod_func_int32_t_s_s(0x8CA40452L, g_7));
    l_76 = ((&g_7 == &g_7) > ((safe_rshift_func_int16_t_s_u(g_7, 12)) | (safe_sub_func_uint16_t_u_u(l_64, (l_64 ^ (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((g_7 < ((6L > (safe_lshift_func_int8_t_s_s((((((void*)0 != l_75) || (*g_6)) || g_7) | p_58), 7))) >= 2UL)), 1)), p_58)))))));
    (*l_78) = (0xF2B9ACCEL | l_77);
    (*l_80) = p_59;


    return (*g_6);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
