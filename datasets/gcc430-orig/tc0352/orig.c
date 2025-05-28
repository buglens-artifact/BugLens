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



static short g_9 = (-10L);
static int g_24 = 0x39EE491BL;
static int g_78 = 0xC853D3C4L;
static int *g_161 = &g_24;
static int **g_160 = &g_161;
static int g_172 = 0xBCDDAFE0L;
static int g_206 = 0x03EE88BDL;
static const unsigned g_218 = 0x04FF0672L;
static short g_248 = 1L;
static int * const *g_280 = &g_161;
static unsigned short g_308 = 0xEB96L;
static const unsigned short g_466 = 0UL;



static unsigned func_1(void);
static const char func_2(int p_3, const unsigned p_4, int p_5, const unsigned p_6);
static int func_14(unsigned p_15, int p_16, unsigned short p_17, unsigned short p_18, unsigned p_19);
static int func_21(const short p_22);
static unsigned char func_27(const int p_28, int p_29, const int p_30, int * p_31);
static int * func_34(char p_35, int p_36, int * p_37, int * p_38);
static short func_39(int p_40, int * p_41, char p_42, unsigned p_43);
static unsigned func_46(int * const p_47, int * const p_48, unsigned short p_49, unsigned char p_50);
static short func_58(int * p_59, int * p_60, int * p_61);
static unsigned func_67(unsigned p_68);
static unsigned func_1(void)
{
    unsigned short l_20 = 65535UL;
    unsigned short l_759 = 0xA04AL;
    int l_761 = 0x008CD5CEL;
    unsigned l_790 = 4UL;
    int * const l_812 = &g_172;
    int ***l_813 = &g_160;
    l_761 &= (func_2((safe_sub_func_uint8_t_u_u(g_9, (safe_mod_func_int8_t_s_s((0x534BL < (((((g_9 & (safe_rshift_func_uint8_t_u_s((((4294967295UL | ((((func_14(l_20, (func_21(g_9) && (safe_rshift_func_uint8_t_u_s(func_27((safe_add_func_int16_t_s_s((&g_24 != (void*)0), 1UL)), l_20, g_24, &g_24), 2))), g_9, l_20, g_9) >= l_20) != 0x72B2773BL) , (-10L)) , 0x8E1C5BBFL)) ^ l_20) == 0x4AL), 0))) , l_20) & g_9) | l_20) || 4294967295UL)), 1L)))), l_20, l_759, l_759) , 0x37988330L);



    for (g_308 = (-14); (g_308 != 10); g_308++)
    {
        unsigned l_788 = 1UL;
        int *l_800 = (void*)0;
        int l_811 = (-1L);
        for (g_172 = 0; (g_172 == (-5)); --g_172)
        {
            int ***l_771 = &g_160;
            int l_804 = (-1L);
            for (g_248 = 0; (g_248 == 14); g_248 = safe_add_func_uint8_t_u_u(g_248, 5))
            {
                const int l_769 = 0x9DE71AADL;
                int *l_770 = &g_206;
                unsigned short l_799 = 1UL;
                (*l_770) = (g_308 ^ (0UL >= (safe_unary_minus_func_int32_t_s(l_769))));
            }
        }
        if (l_790)
            continue;
        (*g_160) = &g_24;

        ;
        (*g_160) = &l_811;

        ;
    }
    l_761 = l_761;
    (*l_812) = (((g_172 | (1L || func_21(((void*)0 != l_813)))) == 0UL) >= (*l_812));
    return g_172;
}







static const char func_2(int p_3, const unsigned p_4, int p_5, const unsigned p_6)
{
    const unsigned l_760 = 8UL;
    return l_760;
}







static int func_14(unsigned p_15, int p_16, unsigned short p_17, unsigned short p_18, unsigned p_19)
{
    int *l_596 = &g_78;
    int *l_597 = &g_78;
    int l_598 = 1L;
    int ***l_614 = &g_160;
    int l_623 = 1L;
    unsigned l_640 = 0xB5B1DDC9L;
    short l_641 = 0x1229L;
    unsigned l_642 = 0x6FF24493L;
    unsigned char l_663 = 1UL;
    int l_681 = 0x21E2ACB7L;
    unsigned l_726 = 0x33E72CE1L;
    char l_757 = 1L;
    unsigned short l_758 = 65535UL;
    (*g_160) = &p_16;

    ;
    if ((((((safe_add_func_uint32_t_u_u((((func_58(l_596, (*g_160), l_597) || g_9) , 7UL) <= p_17), l_598)) > ((((l_598 , (**g_160)) >= g_308) , (-1L)) , p_15)) && p_19) != g_9) ^ (-7L)))
    {
        (**g_280) = (safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((func_67(p_16) >= (((0xDE4A3F8BL >= 0xF6651F00L) & g_466) ^ (p_15 && g_466))), (0xE599L | 0L))) && p_18) >= p_16), p_19));
        (*g_161) &= ((void*)0 != &g_161);
        (*g_160) = &p_16;
    }
    else
    {
        unsigned l_605 = 0x5FCB77ECL;
        int *l_618 = (void*)0;
        int *l_746 = &l_598;
        if ((safe_add_func_int32_t_s_s((func_21(p_16) , func_67(((l_605 != p_19) , ((safe_lshift_func_int16_t_s_u(l_605, ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(0xC1L, (func_67(((g_466 , l_614) != l_614)) || p_17))), p_15)), 0x8B22L)) >= g_206))) || 0L)))), p_17)))
        {
            for (g_308 = (-1); (g_308 < 42); g_308 = safe_add_func_uint16_t_u_u(g_308, 5))
            {
                return p_18;


            }
            (*g_160) = (*g_280);
            (*g_160) = &p_16;
        }
        else
        {
            int *l_617 = &l_598;
            (**g_280) = p_19;
            (*g_160) = l_617;

            ;
            (**l_614) = l_618;

            ;
            (*l_596) = (safe_rshift_func_uint16_t_u_u(g_9, 7));
        }

        ;
        for (l_605 = (-16); (l_605 > 38); l_605++)
        {
            unsigned l_646 = 0x2C61DAAAL;
            int *l_650 = (void*)0;
            int l_673 = 0x477C0D85L;
            const short l_745 = (-7L);
            if (l_623)
            {
                int **l_624 = &g_161;
                int *l_629 = &g_172;
                (*l_624) = (*g_280);
                for (l_623 = 0; (l_623 < (-11)); --l_623)
                {
                    int l_627 = 0xBB5A18C0L;
                    if (l_627)
                    {
                        int *l_628 = &g_24;
                        (*l_597) = (&p_16 == l_628);
                        (*l_596) = 0x386E6F62L;
                    }
                    else
                    {
                        (**l_614) = (*l_624);
                        (*l_597) = p_15;
                        (**l_614) = (p_17 , l_629);

                        ;
                    }
                    for (g_308 = (-3); (g_308 <= 12); g_308++)
                    {
                        (*g_160) = (void*)0;

                        ;
                        (*l_624) = (void*)0;
                        (*l_629) |= (((void*)0 != &p_16) != g_248);
                        if (p_15)
                            continue;
                    }
                    (*l_629) = l_627;
                    (*l_596) |= (*l_629);
                }
                (*l_597) = 1L;
                p_16 = (safe_div_func_int8_t_s_s((g_248 > (!(safe_lshift_func_uint16_t_u_s(p_17, 7)))), (+((((safe_sub_func_uint8_t_u_u(((!(4UL != ((safe_div_func_int8_t_s_s((-1L), ((((((g_172 , ((((*l_596) & (g_218 , ((void*)0 == (*l_624)))) | 0x396BL) || p_18)) || l_640) == p_18) ^ p_17) & 0xE40B8747L) & (*l_629)))) <= g_78))) && p_16), 0UL)) , l_641) == g_206) > (*l_629)))));
            }
            else
            {
                int *l_648 = &l_598;
                int *l_649 = &g_172;
                if (l_642)
                {
                    char l_643 = 0xF8L;
                    int **l_647 = &l_618;
                    l_650 = l_649;

                    ;
                    for (l_643 = 1; (l_643 > (-17)); --l_643)
                    {
                        (*l_647) = (void*)0;

                        ;
                    }
                    (*l_597) = p_17;
                }
                else
                {
                    unsigned short l_664 = 0UL;
                    (**l_614) = &p_16;

                    ;
                }

                ;
                if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x20L, 0)), g_9)))
                {
                    (*l_648) |= ((+(&g_161 == (*l_614))) < ((0UL || func_67((func_21(g_9) & (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(g_172, 0L)), 9))))) ^ (((((((((65528UL >= p_19) & 0x2AL) & g_218) >= 0x551FBB73L) , (*l_649)) & p_17) , &l_650) != &g_161) | p_19)));
                    if ((*l_649))
                        continue;
                    if (l_673)
                        break;
                }
                else
                {
                    unsigned l_674 = 4294967295UL;
                    (*l_649) = l_674;
                    for (g_24 = 2; (g_24 <= (-24)); g_24 = safe_sub_func_int32_t_s_s(g_24, 7))
                    {
                        unsigned short l_684 = 0x36FDL;
                        p_16 |= ((*l_597) <= ((((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_18, ((l_681 && ((*l_596) < (g_308 & g_218))) , 0x4C5769C4L))), 0x4D91L)) >= (safe_sub_func_uint8_t_u_u(0x84L, l_684))) , 65529UL) == (*l_596)));
                        (*l_649) = p_15;
                        return p_16;


                    }
                    for (l_598 = 0; (l_598 > 26); l_598 = safe_add_func_uint8_t_u_u(l_598, 2))
                    {
                        int *l_699 = &l_598;
                        int l_700 = 5L;
                        l_700 = (safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(func_58((*g_160), l_649, l_699), (*l_648))) , p_16) != g_466), p_15));
                        if ((*l_596))
                            break;
                        (**l_614) = (void*)0;

                        ;
                        (*l_597) &= p_17;
                    }
                }
                for (p_16 = 0; (p_16 < (-18)); --p_16)
                {
                    unsigned char l_705 = 0UL;
                    int **l_715 = &l_618;
                    (*l_648) |= ((~((+(func_21(((((!(((safe_mod_func_int8_t_s_s(p_16, l_705)) > (!p_17)) , p_17)) && g_218) || 0x50L) , g_308)) , 0xA7L)) ^ (*l_596))) == p_17);
                    for (p_18 = 22; (p_18 < 19); --p_18)
                    {
                        unsigned l_716 = 0xDD57CF03L;
                        (*l_596) &= l_705;
                        (*l_715) = &p_16;

                        ;
                        if ((*l_618))
                            continue;
                        return p_19;


                    }
                }
                for (g_248 = 0; (g_248 >= 23); ++g_248)
                {
                    unsigned short l_725 = 0xB923L;
                    int * const * const l_735 = &l_650;
                    (*l_648) &= (((1L != (((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_24, ((!(((safe_mod_func_uint8_t_u_u(0x95L, 1UL)) ^ (func_67(((p_16 && l_673) == (*l_596))) < 0UL)) <= p_15)) , p_18))) >= 4294967295UL), p_18)) == l_725) & (-8L))) , p_17) <= g_308);
                    if (p_18)
                    {
                        int * const **l_736 = &g_280;
                        (**l_614) = &p_16;

                        ;
                        (*l_736) = ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_9, (safe_sub_func_int8_t_s_s(p_15, ((0x4C8475FDL || l_725) != (&g_161 == l_735)))))), 0xABL)) , l_735);

                        ;
                        return p_16;



                    }
                    else
                    {
                        (*g_160) = func_34(g_248, p_18, (*g_160), l_746);

                        ;
                    }

                    ;
                    (**g_160) = p_16;
                }
            }

            ;
        }

        ;
        ;
    }

    ;
    (**l_614) = (void*)0;

    ;
    (*l_596) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(l_758, 0x83L)) || p_18) != 1UL), g_308)) , g_248), g_9)), p_17));
    return p_19;
}







static int func_21(const short p_22)
{
    int *l_23 = &g_24;
    (*l_23) ^= (1L | g_9);
    return (*l_23);
}







static unsigned char func_27(const int p_28, int p_29, const int p_30, int * p_31)
{
    int *l_51 = &g_24;
    (*g_160) = func_34(g_9, (((*p_31) || (func_21(func_39((safe_div_func_uint8_t_u_u((func_46((((g_24 || (&g_24 != &g_24)) | ((&p_30 == l_51) , ((-9L) < (g_9 == 0x1FL)))) , (void*)0), p_31, g_9, p_28) , p_30), (-1L))), l_51, g_248, g_9)) || 0xAEFA8C9FL)) | p_30), l_51, l_51);

    ;
    return p_28;
}







static int * func_34(char p_35, int p_36, int * p_37, int * p_38)
{
    int *l_593 = &g_78;
    (*p_38) = 0xB845820DL;
    l_593 = l_593;
    p_37 = &p_36;

    ;
    return &g_78;


}







static short func_39(int p_40, int * p_41, char p_42, unsigned p_43)
{
    int *l_391 = (void*)0;
    int l_392 = 4L;
    int l_469 = 0x7AFEA888L;
    int ***l_523 = &g_160;
    int l_574 = 0x5297FCE3L;
    l_392 &= (*p_41);
    if ((*p_41))
    {
        char l_393 = 0x25L;
        l_393 = 0x2ED6E516L;
        (*g_160) = ((p_40 <= ((((safe_sub_func_int32_t_s_s((p_40 == g_24), (*p_41))) < (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_67((((func_67(g_78) || g_9) < ((0x16L <= (l_393 , p_42)) < g_9)) >= (*p_41))), 2)), p_42))) , g_248) || g_206)) , &l_392);

        ;
        (*g_160) = p_41;

        ;
    }
    else
    {
        int *l_416 = (void*)0;
        int l_422 = 1L;
        unsigned l_432 = 4294967294UL;
        int *l_453 = &l_392;
        int l_467 = (-4L);
        char l_468 = 0L;
        for (g_78 = 19; (g_78 > 9); g_78 = safe_sub_func_uint16_t_u_u(g_78, 1))
        {
            int **l_407 = (void*)0;
            int ***l_435 = &g_160;
            if ((*p_41))
            {
                short l_406 = 7L;
                const int l_438 = (-10L);
                int *l_439 = &l_422;
                for (l_392 = 0; (l_392 > 11); l_392 = safe_add_func_int32_t_s_s(l_392, 4))
                {
                    unsigned l_429 = 0x897AE2AFL;
                    for (g_248 = 0; (g_248 == 18); g_248 = safe_add_func_int32_t_s_s(g_248, 4))
                    {
                        (*g_160) = &l_392;

                        ;
                    }
                    (*p_41) = ((((*p_41) , l_406) , ((l_407 == (((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((void*)0 == &p_41), 0xB83C1876L)), ((&g_280 != (void*)0) < func_21((safe_add_func_uint8_t_u_u((1UL < 0x46L), g_206)))))) , 0x4374E920L) , &p_41)) , (void*)0)) == &g_161);
                    for (g_248 = 4; (g_248 == 18); g_248++)
                    {
                        (*g_160) = l_416;

                        ;
                        if ((*p_41))
                            break;
                    }
                    for (p_40 = (-25); (p_40 == (-9)); p_40++)
                    {
                        int **l_419 = &g_161;
                        int l_430 = 0x893017CBL;
                        short l_431 = 9L;
                        if ((*p_41))
                            break;
                        (*l_419) = (*g_280);
                        (*l_419) = (*g_160);
                        (*p_41) = ((safe_mod_func_int32_t_s_s(l_422, (safe_div_func_int8_t_s_s(1L, ((g_172 || (safe_div_func_int32_t_s_s((*p_41), (safe_lshift_func_int8_t_s_s(l_406, 6))))) && ((0x0A03590AL || (((254UL & (((((l_429 >= (*p_41)) , (void*)0) == (*g_160)) , g_308) < g_24)) >= 0x66L) || l_430)) == l_431)))))) < 0xA2L);
                    }
                }
                (*l_439) &= (l_432 , (safe_sub_func_uint8_t_u_u(p_43, ((&g_160 != (p_42 , l_435)) , (safe_sub_func_uint32_t_u_u(func_21(((((0xB5L ^ p_42) < g_218) || ((4294967289UL >= l_438) , 1L)) >= g_206)), l_438))))));
            }
            else
            {
                int *l_440 = (void*)0;
                (*g_160) = l_440;

                ;
                (*p_41) = (func_21((safe_div_func_int8_t_s_s(g_172, 1L))) != g_172);
                return p_40;
            }
            for (g_172 = 0; (g_172 != (-27)); g_172--)
            {
                for (g_206 = (-20); (g_206 >= 1); g_206 = safe_add_func_int32_t_s_s(g_206, 8))
                {
                    int *l_447 = (void*)0;
                    int *l_448 = &l_392;
                    (*l_448) |= (*p_41);
                    return g_78;


                }
                (**l_435) = (func_21(p_43) , (**l_435));
                (*g_160) = (g_248 , p_41);

                ;
            }
            (*g_160) = &l_392;

            ;
        }

        ;
        (*l_453) |= (safe_div_func_uint8_t_u_u((0UL == p_42), (g_248 | (safe_mod_func_uint16_t_u_u(func_21(((func_21(g_172) | (246UL && 0L)) , g_78)), p_42)))));
        l_469 &= ((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*p_41), (safe_rshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((1UL || ((safe_add_func_int8_t_s_s(((g_172 > g_308) <= g_24), (safe_rshift_func_uint16_t_u_s(func_67(g_172), ((&l_391 == &g_161) != g_466))))) || g_466)) && (-1L)), g_466)) ^ l_467) , 0x89L), 3)))), l_468)) < (*l_453));
        if ((safe_div_func_uint32_t_u_u(4294967291UL, g_308)))
        {
            int *l_472 = &g_172;
            l_472 = p_41;

            ;
            p_41 = &l_422;

            ;
            (*p_41) |= 4L;
        }
        else
        {
            (*g_160) = (*g_160);
        }

        ;
    }

    ;

    for (p_42 = 0; (p_42 < (-12)); --p_42)
    {
        unsigned l_481 = 0x4D5DF07AL;
        char l_521 = 0x9DL;
        int l_525 = (-1L);
        unsigned char l_561 = 255UL;
        for (g_206 = (-27); (g_206 > 6); g_206 = safe_add_func_uint32_t_u_u(g_206, 9))
        {
            unsigned l_492 = 1UL;
            unsigned l_526 = 0x99C4CE3AL;
            int *l_527 = &g_172;
        }
    }
    for (g_206 = 0; (g_206 == 3); g_206++)
    {
        int **l_592 = &l_391;
        (*l_592) = (*g_280);
    }

    ;
    return g_206;


}







static unsigned func_46(int * const p_47, int * const p_48, unsigned short p_49, unsigned char p_50)
{
    unsigned l_52 = 4294967295UL;
    const unsigned short l_215 = 1UL;
    int *l_223 = (void*)0;
    int ***l_295 = &g_160;
    unsigned l_312 = 8UL;
    int l_347 = 0x865396A4L;
    int **l_386 = (void*)0;
    int **l_387 = (void*)0;
    int **l_388 = &l_223;
    if (l_52)
    {
        unsigned short l_55 = 0x377FL;
        int *l_62 = &g_24;
        int *l_205 = &g_206;
        (*l_205) ^= (func_21(func_21((((func_21(((safe_lshift_func_int16_t_s_u((l_55 < ((safe_add_func_uint16_t_u_u(((p_48 == (void*)0) && (~(func_21(func_58((l_52 , &g_24), l_62, l_62)) || 1L))), 0xE899L)) >= g_172)), 13)) , g_172)) , l_62) == (*g_160)) , 1L))) && 0xB458L);
    }
    else
    {
        int *l_219 = &g_78;
        int ***l_287 = &g_160;
        (*g_161) &= (safe_rshift_func_int8_t_s_s(p_49, 1));
        (**g_160) |= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_78, 2)), 5L));
        if (((safe_add_func_int32_t_s_s((&p_47 == (l_52 , &g_161)), func_21(l_215))) > ((void*)0 == (*g_160))))
        {
            int *l_222 = (void*)0;
            int l_238 = 0x93EE8434L;
            const int ** const *l_286 = (void*)0;
            int *l_291 = &g_172;
            unsigned short l_298 = 65535UL;
            unsigned short l_306 = 0x7A8CL;
            for (p_50 = 0; (p_50 > 49); ++p_50)
            {
                int l_237 = (-1L);
                int *l_246 = &l_238;
                const int l_254 = 0xD2D3AF8AL;
                int ***l_281 = &g_160;
                int *l_283 = (void*)0;
                unsigned short l_299 = 0x13B1L;
            }
        }
        else
        {
            return g_308;
        }
    }
    if ((((safe_unary_minus_func_uint16_t_u(func_21(g_206))) < (((safe_sub_func_uint32_t_u_u(((((g_206 != p_49) , (p_50 | ((g_9 , (((((((((((void*)0 == &g_280) >= p_49) ^ l_52) , 0xF0L) < (-1L)) , (**l_295)) == (*g_160)) <= g_78) >= g_206) , 1L)) <= g_248))) > g_9) ^ 0x1955L), l_215)) ^ (-7L)) , l_52)) != l_312))
    {
        char l_319 = 1L;
        (**g_280) = (p_50 , (((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((g_9 <= (l_319 | (p_49 ^ p_49))) ^ p_49) || l_319) && (g_206 != (l_319 | g_172))), p_49)), g_248)) < (***l_295)) || p_49));
    }
    else
    {
        const unsigned short l_322 = 4UL;
        int **l_332 = &l_223;
        (*g_160) = (*g_160);
        if ((safe_add_func_uint32_t_u_u(func_21(l_322), g_78)))
        {
            int *l_331 = &g_206;
            unsigned l_363 = 0x03CFD7B8L;
            int l_364 = 1L;
            for (l_52 = 5; (l_52 < 21); l_52 = safe_add_func_int32_t_s_s(l_52, 8))
            {
                int l_335 = 0xE1F03AA0L;
                if ((safe_add_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((l_322 , func_21((safe_lshift_func_uint16_t_u_u((p_50 == g_248), 1)))), g_248)) , (((p_47 != l_331) , l_332) == ((safe_rshift_func_uint16_t_u_u((((p_50 , 1UL) , g_78) || l_335), 6)) , &p_48))), (-6L))))
                {
                    int *l_342 = &g_172;
                    if (((g_308 <= (((void*)0 == l_295) , ((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(func_58((*g_160), (*g_160), (*g_160)), (safe_add_func_int32_t_s_s(p_50, 0x6143401AL)))), 1L)) < 1UL))) <= g_218))
                    {
                        l_342 = (void*)0;

                        ;
                    }
                    else
                    {
                        int **l_343 = &g_161;
                        (*l_343) = (*g_280);
                    }

                    ;
                    (*g_160) = (void*)0;

                    ;
                    l_347 |= ((0L > ((g_172 , (*l_295)) == (void*)0)) | ((&g_161 == &g_161) > ((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((p_48 == (*g_160)))), g_24)) | g_172)));
                }
                else
                {
                    unsigned char l_362 = 0x28L;
                    l_364 |= (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_335, 4)), func_67((~g_248)))) < (&p_47 == &p_48)), ((safe_add_func_uint8_t_u_u(((g_248 && 4L) < ((((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_50, l_335)), (*l_331))) ^ g_308) == l_362) != g_206)), (-1L))) <= l_363)));
                    (*g_160) = (*g_160);
                    if ((*p_48))
                        continue;
                }

                ;
                return g_308;
            }
        }
        else
        {
            (*l_332) = p_47;
        }
        (*p_48) = ((+2L) <= (safe_div_func_uint8_t_u_u(p_50, ((safe_rshift_func_int16_t_s_s(((((void*)0 == &p_48) , (safe_mod_func_uint32_t_u_u((func_58((*g_160), (**l_295), (**l_295)) || (4L != g_172)), p_50))) < (-1L)), g_206)) & l_312))));
        for (l_312 = 23; (l_312 > 38); l_312 = safe_add_func_uint32_t_u_u(l_312, 3))
        {
            int l_373 = 0xAB2AEFC5L;
        }
    }
    (*l_388) = p_47;
    (**g_280) ^= (safe_div_func_int16_t_s_s(g_78, g_172));
    return g_206;
}







static short func_58(int * p_59, int * p_60, int * p_61)
{
    short l_98 = (-4L);
    int *l_99 = (void*)0;
    int **l_101 = &l_99;
    for (g_24 = 5; (g_24 > (-1)); g_24 = safe_sub_func_uint32_t_u_u(g_24, 8))
    {
        unsigned short l_97 = 0xD543L;
        int l_100 = 0x4D8593D4L;
        l_100 = (246UL <= (g_9 < ((safe_rshift_func_uint8_t_u_s((func_67(g_24) ^ (((((0UL == 1UL) & l_97) , p_61) != (((((!(((l_98 != (-8L)) , (void*)0) == p_59)) , (void*)0) == l_99) && 0xC7F1L) , (void*)0)) != l_97)), g_9)) , l_97)));
        return g_78;
    }
    (*l_101) = &g_78;

    ;
    for (g_78 = 0; (g_78 > 13); g_78 = safe_add_func_uint32_t_u_u(g_78, 8))
    {
        int l_105 = (-7L);
        int **l_150 = (void*)0;
        unsigned l_166 = 0UL;
        int l_191 = 7L;
    }
    return g_172;
}







static unsigned func_67(unsigned p_68)
{
    unsigned char l_71 = 0xECL;
    int *l_76 = (void*)0;
    if ((safe_mod_func_uint32_t_u_u(p_68, l_71)))
    {
        for (p_68 = 0; (p_68 == 24); p_68 = safe_add_func_int16_t_s_s(p_68, 1))
        {
            if (g_24)
                break;
        }
    }
    else
    {
        int *l_77 = &g_78;
        const short l_88 = 4L;
        (*l_77) = (safe_sub_func_int32_t_s_s(0xEF28F0E4L, (&g_24 != l_76)));
        for (p_68 = 0; (p_68 == 56); ++p_68)
        {
            short l_81 = 0xA361L;
            (*l_77) = (l_81 == (l_81 , ((p_68 || (safe_add_func_int16_t_s_s(0x2517L, (((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((p_68 > (l_88 || ((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_78, p_68)), (0xE450DE0BL & p_68))) >= 0xCEL))) , 0x6DC3DB88L), p_68)) ^ (-1L)), p_68)) && g_9) ^ (-9L))))) == g_9)));
        }
    }
    for (l_71 = 0; (l_71 != 13); l_71++)
    {
        int * const l_95 = (void*)0;
        int *l_96 = &g_78;
        g_78 = (((l_76 != (void*)0) , &g_78) != l_95);
        (*l_96) &= (0x5B4C718FL < g_9);
    }
    return p_68;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
