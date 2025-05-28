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



static unsigned g_2 = 0xD16DF251L;
static unsigned g_3 = 0UL;
static int g_87 = 0x5F80954CL;
static volatile int g_123 = (-9L);
static volatile int *g_122 = &g_123;
static volatile int **g_121 = &g_122;
static int *g_206 = &g_87;
static char g_236 = (-2L);
static int **g_282 = &g_206;
static volatile unsigned char g_349 = 255UL;
static unsigned short g_473 = 0x5D72L;
static int *g_487 = &g_87;
static unsigned char g_506 = 0x2FL;
static char g_559 = 0xD3L;
static volatile int ***g_571 = &g_121;
static short g_738 = 1L;
static short g_739 = 7L;



static unsigned char func_1(void);
static short func_23(int p_24, char p_25, unsigned short p_26, unsigned p_27);
static short func_41(unsigned char p_42, short p_43, int p_44);
static unsigned short func_47(unsigned short p_48, int p_49, unsigned short p_50);
static int func_51(unsigned p_52, int p_53, unsigned p_54);
static unsigned func_57(unsigned char p_58, unsigned p_59);
static unsigned char func_61(int p_62);
static int func_63(int p_64);
static unsigned char func_67(unsigned short p_68, unsigned short p_69, int p_70);
static unsigned char func_75(unsigned p_76, short p_77, unsigned p_78, char p_79);
static unsigned char func_1(void)
{
    unsigned short l_17 = 0xCAA8L;
    unsigned char l_20 = 8UL;
    unsigned l_494 = 0x0E0C252FL;
    int **l_729 = (void*)0;
    int *l_760 = (void*)0;
    unsigned short l_769 = 0xD0CDL;
    int l_793 = 0x6DCE20CDL;
    g_3 = (+(g_2 <= 0x9F42L));
    if ((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((g_2 != (safe_unary_minus_func_int32_t_s(((safe_lshift_func_int16_t_s_u(g_2, 3)) ^ (safe_mod_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(g_3, 9)), 5)) & (-9L)) > (g_3 & g_3)) && g_3) != l_17) < ((safe_lshift_func_uint8_t_u_u(((l_20 , g_3) || 8L), l_17)) , l_20)), l_20)))))) != 1L), g_2)) & g_2), l_20)))
    {
        unsigned char l_40 = 1UL;
        int l_723 = 0x0A3448A4L;
        int *l_750 = &l_723;
        if (((safe_lshift_func_uint16_t_u_s((func_23((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(g_2, (safe_add_func_uint32_t_u_u(g_3, l_17)))) , (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((l_20 >= ((safe_rshift_func_int8_t_s_u(l_40, 0)) >= 0xF08A1BABL)), func_41(l_40, (((safe_mod_func_uint16_t_u_u(func_47((func_51(l_40, (safe_lshift_func_int16_t_s_u(0x5B0DL, g_3)), g_2) != g_2), g_2, l_17), g_2)) != l_17) ^ 4UL), l_40))) && l_40), l_40))), 5)) == l_17) & l_40), l_40, l_494, g_2) & 8UL), g_559)) ^ g_506))
        {
            char l_722 = 0x10L;
            int *l_725 = (void*)0;
            int l_727 = (-6L);
            for (g_506 = 0; (g_506 >= 18); g_506 = safe_add_func_uint8_t_u_u(g_506, 8))
            {
                char l_716 = 6L;
                int *l_724 = &g_87;
                for (l_40 = 2; (l_40 > 27); l_40++)
                {
                    unsigned char l_715 = 255UL;
                    unsigned short l_721 = 3UL;
                    int l_740 = (-1L);
                    for (l_17 = (-9); (l_17 > 42); l_17 = safe_add_func_int32_t_s_s(l_17, 3))
                    {
                        unsigned l_712 = 4294967295UL;
                        l_723 = (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((l_721 == 0x12D7L), l_722)), 0x21L));
                    }
                    if ((((void*)0 == (**g_571)) & ((l_40 | l_20) > ((g_559 , l_724) == (void*)0))))
                    {
                        int **l_726 = &g_487;
                        int *l_728 = (void*)0;
                        (*l_726) = l_725;

                        ;
                        l_727 = 0x53553522L;
                        (*l_726) = l_728;
                    }
                    else
                    {
                        if (l_723)
                            break;
                        if (l_721)
                            continue;
                    }
                    (*l_724) = func_67((l_723 , ((((l_729 == &l_725) || 0xD3C5L) != (safe_lshift_func_int16_t_s_s(((l_40 , (0x33L > ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_2, ((l_727 < (safe_add_func_int32_t_s_s(((((l_40 <= 0L) , l_715) != g_123) != l_715), g_738))) != g_559))), 0x1658L)) > l_715))) , 0xAB71L), g_738))) == 0xBA44CD91L)), g_739, l_721);
                    l_740 = ((&l_727 != (void*)0) , l_715);
                }
                return g_349;
            }
            for (g_473 = 27; (g_473 > 26); --g_473)
            {
                int **l_743 = &l_725;
                (*l_743) = &l_727;

                ;
            }

            ;
            l_723 = l_723;
            for (g_87 = 0; (g_87 > 23); g_87 = safe_add_func_uint32_t_u_u(g_87, 2))
            {
                char l_746 = 1L;
                return l_746;
            }
        }
        else
        {
            int l_747 = (-1L);
            int *l_749 = &l_723;
            if (l_747)
            {
                (**g_571) = (**g_571);
            }
            else
            {
                int **l_748 = &g_206;
                (*l_748) = &l_723;

                ;
                l_750 = l_749;
            }


            (*l_750) = (((*l_749) == g_123) <= ((*l_749) & (*l_749)));
            return g_123;


        }

        ;

        ;

    }
    else
    {
        (***g_571) = (**g_121);
    }

    ;

    ;

    for (g_506 = 0; (g_506 >= 42); ++g_506)
    {
        int l_759 = (-1L);
        int ***l_774 = &l_729;
        unsigned char l_792 = 4UL;
        for (g_473 = 0; (g_473 <= 2); g_473 = safe_add_func_int8_t_s_s(g_473, 3))
        {
            int *l_768 = &g_87;
            int l_798 = 0x76AFE09DL;
            for (g_559 = 0; (g_559 < 3); g_559 = safe_add_func_uint32_t_u_u(g_559, 8))
            {
                int **l_765 = &g_487;
                int l_779 = (-4L);
                if (l_759)
                {
                    int **l_761 = (void*)0;
                    int **l_762 = &l_760;
                    if (l_20)
                        break;
                    (*l_762) = l_760;
                    for (l_17 = 0; (l_17 < 55); l_17 = safe_add_func_uint8_t_u_u(l_17, 6))
                    {
                        int ***l_766 = (void*)0;
                        int ***l_767 = &g_282;
                        (**g_571) = (**g_571);
                        (*l_767) = l_765;

                        ;
                        (*g_121) = (void*)0;

                        ;
                        (*l_765) = l_768;

                        ;
                    }

                    ;
                }
                else
                {
                    int l_782 = 0xBF51163EL;
                    int **l_785 = &l_760;
                    l_759 = ((+((void*)0 != (**g_571))) >= (*l_768));
                    l_769 = (*l_768);
                    (*l_768) = (safe_add_func_int16_t_s_s(g_559, g_739));
                    (*g_571) = (g_123 , (*g_571));
                }

                ;
                if ((safe_sub_func_int8_t_s_s(g_236, (*l_768))))
                {
                    (*g_121) = (*g_121);
                    return g_473;
                }
                else
                {
                    short l_804 = (-1L);
                    (*l_768) = ((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((((g_236 , func_41((((((*g_121) == (**g_571)) , l_798) == g_87) < func_41((func_41((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_s(func_41(g_738, g_506, (g_349 <= g_506)), g_473)))), 3)), (*l_768), g_87) >= 0x4984L), g_87, (*l_768))), l_804, (*l_768))) , 251UL) ^ g_559) >= g_2) != (*l_768)), g_3)), (*l_768))) < (*l_768)) , 65535UL) | 0x7ED4L);


                    (*l_768) = l_804;
                    return g_236;
                }
            }
            (*l_768) = ((g_3 , &g_121) == (void*)0);
        }
    }
    (**g_571) = (*g_121);
    return g_739;
}







static short func_23(int p_24, char p_25, unsigned short p_26, unsigned p_27)
{
    unsigned l_499 = 4294967288UL;
    unsigned l_512 = 0x0D7A6ACEL;
    int **l_522 = &g_487;
    int ***l_546 = &g_282;
    unsigned l_615 = 8UL;
    short l_682 = (-1L);
    int l_701 = 1L;
    (*g_487) = (safe_lshift_func_int16_t_s_s(((p_25 || 0xC3DCL) | ((p_26 ^ (((safe_sub_func_uint16_t_u_u(l_499, ((((safe_sub_func_uint32_t_u_u((!p_25), l_499)) , (-9L)) & 0xA80C7E70L) , (-10L)))) || 65533UL) | g_349)) | 6L)), 11));
    (*g_487) = p_26;
    if (p_26)
    {
        int **l_502 = (void*)0;
        int **l_503 = &g_487;
        int ***l_511 = &g_282;
        int *l_523 = &g_87;
        int l_543 = 0xB34C7463L;
        int *l_567 = (void*)0;
        int **l_630 = &g_206;
        int l_639 = (-4L);
        int *l_655 = &g_87;
        (*l_503) = &p_24;

        ;
        if ((safe_mod_func_int32_t_s_s(((l_499 , &p_24) == &p_24), (p_24 | ((safe_rshift_func_int8_t_s_u((((~(((~(safe_mod_func_uint8_t_u_u(((&l_502 != l_511) != l_512), 247UL))) || 248UL) | p_26)) , (*l_511)) != (*l_511)), 4)) == l_512)))))
        {
            int ***l_513 = &l_502;
            int *l_566 = (void*)0;
            short l_640 = (-1L);
            if (((l_513 == ((g_87 == 0x5D6AL) , l_513)) == g_236))
            {
                unsigned short l_524 = 0xD838L;
                unsigned char l_531 = 0x48L;
                int **l_542 = &l_523;
                (**l_522) = (((p_27 || ((&l_522 == l_513) == l_524)) , (+(safe_sub_func_uint32_t_u_u((g_506 && (func_47(((g_2 & g_349) & (0xFBCC8995L && p_25)), (**l_522), g_3) || g_87)), p_25)))) < 0xD4588692L);
                p_24 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((**l_522), g_506)), 0xCFL));
                if (l_531)
                {
                    char l_547 = 0xFFL;
                    int l_554 = (-9L);
                    int l_568 = 0xFF10FA94L;
                    int *l_569 = &g_87;
                    if ((((*g_487) , 0xFB6FL) || ((p_27 >= (safe_rshift_func_int16_t_s_s(0x372BL, (((((safe_rshift_func_uint16_t_u_s((0xAB74AC61L ^ (safe_sub_func_int16_t_s_s(p_27, (((((safe_lshift_func_int16_t_s_s((((((**l_522) >= (g_349 , ((safe_mod_func_uint16_t_u_u(0xC1FDL, g_3)) ^ 0L))) , l_542) == (*l_513)) , p_27), l_543)) >= p_26) , 0xBBL) , p_27) || 4294967295UL)))), 4)) != g_506) ^ g_3) == g_236) < (**l_503))))) > g_2)))
                    {
                        l_554 = (safe_sub_func_uint8_t_u_u((((-3L) & (((void*)0 == l_546) < (l_547 , ((((p_25 && (safe_sub_func_int8_t_s_s((((+((safe_rshift_func_uint16_t_u_s(p_24, 10)) || g_2)) , g_3) == ((safe_lshift_func_int8_t_s_u(p_26, 0)) && 0xF824L)), g_123))) || 1UL) > (**l_542)) & g_3)))) , g_236), 0x7FL));
                        (*g_121) = (*g_121);
                        (**l_542) = (p_27 || ((p_24 <= (253UL >= g_473)) , func_67(g_3, g_123, g_3)));
                    }
                    else
                    {
                        (*l_503) = l_566;

                        ;
                        (*l_542) = l_567;

                        ;
                    }

                    ;
                    ;
                    (*l_569) = ((((0x8C3C6051L && (g_236 & (((l_568 , g_123) != func_41((((void*)0 != (*l_546)) && ((1L && p_25) | ((0x85L || p_24) , p_27))), p_25, l_499)) , g_473))) , 0xEC1B9CDCL) > p_25) || 0x1CL);
                    (*l_569) = (p_27 >= g_87);
                    if (p_25)
                    {
                        int *l_570 = &l_554;
                        l_570 = (*l_522);

                        ;
                        p_24 = p_24;
                        (*l_522) = ((((g_87 , g_571) != ((safe_sub_func_uint32_t_u_u(((g_559 , (*g_571)) == l_542), ((void*)0 == &g_282))) , (void*)0)) <= (safe_add_func_int8_t_s_s(p_25, p_24))) , l_570);
                    }
                    else
                    {
                        char l_578 = 0L;
                        (*l_569) = (safe_rshift_func_int8_t_s_u(p_26, 0));
                        return l_578;


                    }
                }
                else
                {
                    (*l_523) = (**l_542);
                    (**l_522) = ((safe_mod_func_uint32_t_u_u(g_2, 4294967295UL)) >= (*g_487));
                }

                ;
                ;
            }
            else
            {
                int **l_581 = (void*)0;
                p_24 = p_26;
                (**g_571) = (((((*g_571) != l_581) && p_27) , (safe_sub_func_uint8_t_u_u(g_559, ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_236, 5)), 2)) | func_41(((g_2 , (p_27 <= (((~(safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_3, (&g_282 == &g_121))) ^ 0xDFBFL), 6)) == g_349), g_506))) < g_3) , g_87))) | p_27), p_24, (*g_487)))))) , (**g_571));
            }

            ;
            ;
            for (l_499 = 0; (l_499 <= 20); l_499 = safe_add_func_uint16_t_u_u(l_499, 6))
            {
                short l_600 = 0xA267L;
                int *l_610 = &g_87;
                unsigned l_654 = 4294967295UL;
                for (g_3 = 0; (g_3 < 44); g_3++)
                {
                    int l_609 = (-1L);
                    unsigned short l_620 = 0xF481L;
                    if ((((safe_rshift_func_int16_t_s_u(p_27, 8)) | (((l_600 >= (safe_rshift_func_int16_t_s_u(((g_559 == (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_473, l_600)), 0x4BL))) & 0x5509BC93L), p_24))) | p_24) < 1L)) && g_506))
                    {
                        (*l_503) = l_610;

                        ;
                    }
                    else
                    {
                        int l_611 = 0L;
                        int ***l_619 = &l_502;
                        (*l_610) = (*l_610);
                        p_24 = (!(l_611 || ((p_26 ^ ((*l_610) || g_473)) != 1L)));
                        (*l_503) = &p_24;

                        ;
                    }

                    ;
                }
                for (g_87 = 0; (g_87 < 22); g_87++)
                {
                    int l_642 = 1L;
                    int *l_643 = &l_642;
                    if (func_41(((safe_rshift_func_uint16_t_u_u((g_349 && ((+(safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint16_t_u_s(((void*)0 != l_630), (safe_rshift_func_int8_t_s_s(0L, g_87)))) | p_26))), 6))) && (((safe_add_func_int8_t_s_s((*l_610), (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((&p_24 != (void*)0), l_639)), 0x0537L)))) >= l_640) && (-1L)))), p_27)) == p_24), p_26, p_27))
                    {
                        int **l_641 = &l_567;
                        l_641 = (*l_513);

                        ;
                        (**g_571) = (**g_571);
                        l_642 = (0x4CL | 0xF0L);
                        l_643 = &p_24;

                        ;
                    }
                    else
                    {
                        int l_644 = 0x4B0B5B20L;
                        (*l_643) = l_644;
                    }


                    ;
                    for (l_615 = 0; (l_615 < 53); ++l_615)
                    {
                        (*l_643) = (*l_643);
                        (*l_643) = p_25;
                    }
                }
                if (p_25)
                    continue;
                for (g_2 = 2; (g_2 > 49); ++g_2)
                {
                    int ***l_651 = &l_630;
                    int *l_656 = &g_87;
                    (*l_610) = (((-1L) | (!1L)) , (safe_mod_func_uint16_t_u_u(0xAE56L, ((p_24 & 0xD9L) , (((((l_651 == (((safe_rshift_func_int16_t_s_s((*l_610), g_559)) == (p_24 ^ g_506)) , l_651)) ^ l_654) , p_24) & g_123) & 0x5BL)))));
                    (*l_503) = l_655;

                    ;
                    g_206 = l_656;

                    ;
                    if (p_25)
                        continue;
                }
            }


            ;
            for (l_499 = 0; (l_499 != 10); l_499 = safe_add_func_uint8_t_u_u(l_499, 3))
            {
                char l_659 = 0xA0L;
                (*l_655) = p_24;
                (*l_503) = (void*)0;

                ;
                if (l_659)
                    continue;
            }
        }
        else
        {
            unsigned char l_666 = 0x28L;
            int l_667 = 0x6D859497L;
            int **l_670 = &g_487;
            char l_675 = (-7L);
            int l_676 = 0x52B0EFCAL;
            p_24 = p_25;
            l_667 = (g_506 != g_559);
            (**l_522) = ((**l_670) == 0UL);
            (*g_487) = ((((((0x0A5EL >= ((*g_121) == &p_24)) & 0UL) && (g_236 | p_27)) , l_675) , g_87) , l_676);
        }


        ;
        ;
    }
    else
    {
        unsigned char l_683 = 0xF3L;
        int *l_684 = &g_87;
        if (((p_24 , &g_121) == &g_282))
        {
            int **l_679 = &g_487;
            (*g_121) = (void*)0;

            ;
            p_24 = 0xE5AF367DL;
            (*l_546) = (void*)0;

            ;
            (*l_522) = (((safe_sub_func_uint8_t_u_u(p_26, p_26)) & p_27) , l_684);
        }
        else
        {
            (**l_522) = (-5L);
            (*g_121) = ((**l_522) , (void*)0);

            ;
        }

        ;
        for (g_473 = 0; (g_473 > 56); g_473 = safe_add_func_uint16_t_u_u(g_473, 7))
        {
            int ***l_692 = (void*)0;
            int l_693 = 0xDE1F16ACL;
            int l_699 = 0L;
            int *l_700 = &l_699;
        }
        (*l_684) = (0x0173L || (!((p_27 || p_25) >= 0L)));
    }


    ;
    return l_701;


}







static short func_41(unsigned char p_42, short p_43, int p_44)
{
    int **l_492 = (void*)0;
    int **l_493 = &g_206;
    (*l_493) = &p_44;

    ;
    return g_87;


}







static unsigned short func_47(unsigned short p_48, int p_49, unsigned short p_50)
{
    unsigned l_461 = 0xC62E073BL;
    char l_465 = (-1L);
    int *l_466 = &g_87;
    short l_490 = 0x1A6EL;
    int l_491 = (-1L);
    (*l_466) = (g_349 < g_236);
    if ((((safe_sub_func_uint32_t_u_u((*l_466), p_49)) >= (-1L)) , 0x99ED0B66L))
    {
        int *l_478 = &g_87;
        int ***l_486 = &g_282;
        int **l_488 = &l_478;
        if (((((safe_sub_func_uint16_t_u_u(g_3, ((void*)0 == l_478))) & (safe_lshift_func_int16_t_s_s(g_236, (*l_478)))) <= (p_49 | p_50)) & ((p_48 ^ (*l_478)) != 0L)))
        {
            unsigned char l_481 = 252UL;
            (*l_478) = (g_3 , l_481);
        }
        else
        {
            int **l_482 = (void*)0;
            int **l_483 = &g_206;
            (*l_483) = &p_49;

            ;
        }


        (*l_466) = (&p_49 != (((safe_lshift_func_uint8_t_u_u(p_48, g_3)) >= (l_486 == (void*)0)) , g_487));
        (*l_488) = &p_49;

        ;
    }
    else
    {
        int **l_489 = &l_466;
        (*l_489) = &p_49;

        ;
        (*g_121) = (*g_121);
        (*l_489) = &p_49;
        p_49 = 0xF291AFECL;
    }


    ;
    (*g_487) = l_491;
    return p_48;


}







static int func_51(unsigned p_52, int p_53, unsigned p_54)
{
    unsigned char l_60 = 6UL;
    unsigned l_417 = 0x2CAB4327L;
    int ***l_426 = &g_282;
    int *l_437 = (void*)0;
    int *l_447 = &g_87;
    unsigned short l_460 = 9UL;
    if ((((func_57((l_60 , (func_61(func_63(g_2)) || (p_52 , g_123))), (g_2 , l_60)) != 0xE4534EDEL) >= l_60) != g_2))
    {
        unsigned short l_416 = 65535UL;
        int *l_418 = &g_87;
        (*l_418) = l_417;
    }
    else
    {
        unsigned l_421 = 0x5D04719DL;
        int ***l_427 = &g_282;
        int **l_438 = &l_437;
        if ((safe_sub_func_int16_t_s_s(l_421, p_52)))
        {
            int l_428 = (-9L);
            (*g_121) = (((((l_421 & ((l_427 == &g_282) | (p_54 == p_53))) < g_123) , l_428) != (safe_add_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(p_54, g_87)) < p_54) , p_52), p_53))) , (*g_121));
        }
        else
        {
            int *l_433 = &g_87;
            (*l_433) = 0x2BA1CCBCL;
        }
        for (p_54 = 0; (p_54 < 43); ++p_54)
        {
            char l_436 = (-1L);
            (*g_121) = (*g_121);
            l_436 = 0x2367D3F5L;
        }
        (*l_438) = l_437;
        (*l_438) = (*l_438);
    }

    ;
    ;
    ;
    (*l_447) = (safe_rshift_func_uint16_t_u_u(func_67((0x657BL == 0x2941L), ((((*g_121) == l_437) & p_52) || (+p_54)), (safe_sub_func_int32_t_s_s(p_53, ((((((p_52 , (safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u(p_53, g_3)) , 1L) || g_2) >= 0UL), p_54))) ^ g_87) >= 0x82F4L) == g_87) , 0x2CC0L) , p_53)))), 8));
    l_447 = l_437;

    ;
    if (((p_52 , &g_206) != (void*)0))
    {
        int *l_448 = &g_87;
        int **l_455 = &l_437;
        (*l_448) = 0x4022EA4DL;
        (*l_448) = (((((safe_rshift_func_uint16_t_u_s(p_52, 2)) != (g_2 < p_54)) , (safe_rshift_func_int16_t_s_u((g_87 , 0x6BE1L), g_2))) , (-1L)) ^ g_3);
        (*l_455) = l_448;

        ;
    }
    else
    {
        int **l_458 = (void*)0;
        int l_459 = (-1L);
        l_459 = ((safe_lshift_func_int16_t_s_s(p_53, 3)) , ((0x3DE3L & (l_458 == (*l_426))) || 0L));
    }

    ;
    return l_460;
}







static unsigned func_57(unsigned char p_58, unsigned p_59)
{
    int l_376 = (-2L);
    int **l_388 = &g_206;
    unsigned l_391 = 2UL;
    short l_410 = 0x444AL;
    volatile int *l_411 = &g_123;
    for (p_59 = 0; (p_59 >= 23); p_59 = safe_add_func_int16_t_s_s(p_59, 8))
    {
        short l_377 = (-1L);
        int *l_378 = &g_87;
        int ***l_386 = &g_282;
        int l_387 = 0xD63A894BL;
        (*g_282) = (*g_282);
        if (((p_58 < ((&g_121 != &g_121) ^ ((l_376 >= ((func_67(l_377, g_3, p_59) || l_376) == 0x404761DBL)) , 0x7DL))) , l_376))
        {
            unsigned short l_381 = 0x9FE4L;
            (*g_282) = l_378;

            ;
            (*l_378) = ((*l_378) >= (safe_mod_func_int16_t_s_s(p_59, l_376)));
            l_381 = p_58;
            (**l_388) = (*l_378);
        }
        else
        {
            unsigned short l_400 = 0x26DDL;
            int **l_403 = &g_206;
            for (g_236 = (-14); (g_236 >= 5); g_236 = safe_add_func_uint16_t_u_u(g_236, 4))
            {
                unsigned l_406 = 4UL;
                for (l_391 = 7; (l_391 == 16); l_391 = safe_add_func_uint32_t_u_u(l_391, 1))
                {
                    if (p_58)
                        break;
                    for (g_87 = 0; (g_87 <= (-6)); g_87 = safe_sub_func_uint32_t_u_u(g_87, 4))
                    {
                        int *l_404 = (void*)0;
                        int *l_405 = &l_387;
                        if (p_59)
                            break;
                        (*l_405) = (((safe_sub_func_int32_t_s_s(((((((p_59 && l_400) & (((safe_mod_func_uint16_t_u_u(((((p_58 < (l_403 == l_403)) & ((-2L) != (g_3 | (-1L)))) && 0xFC42L) != 0x71L), 0x4426L)) , g_123) | 0UL)) , p_59) != 65530UL) || 0x89L) <= (-1L)), (*l_378))) || g_2) && (*l_378));
                        (**l_386) = (**l_386);
                    }
                    if ((l_406 <= (p_58 ^ (safe_lshift_func_uint8_t_u_u(g_2, 3)))))
                    {
                        (*g_121) = (*g_121);
                        return g_349;
                    }
                    else
                    {
                        int *l_409 = (void*)0;
                        (*g_282) = (*g_282);
                        (*g_282) = l_409;

                        ;
                        if (p_59)
                            break;
                    }

                    ;
                }
            }
            (*l_378) = p_58;
        }
    }
    if (l_410)
    {
        int **l_412 = (void*)0;
        int ***l_413 = &g_282;
        l_411 = (*g_121);

        ;
        (*l_413) = l_412;

        ;
    }
    else
    {
        return g_123;
    }

    ;
    ;
    (*l_388) = (*l_388);
    return p_59;
}







static unsigned char func_61(int p_62)
{
    int l_368 = (-6L);
    int *l_369 = &g_87;
    int **l_373 = &l_369;
    (*l_369) = l_368;
    for (p_62 = (-11); (p_62 < 14); ++p_62)
    {
        int *l_372 = &g_87;
        (*g_282) = l_372;

        ;
        l_372 = l_369;
        (*g_282) = l_372;
        l_373 = (void*)0;

        ;
    }

    ;
    return (*l_369);
}







static int func_63(int p_64)
{
    int l_71 = 4L;
    unsigned l_74 = 4294967294UL;
    unsigned l_304 = 0xE679D64BL;
    int l_355 = 1L;
    l_355 = (safe_rshift_func_uint8_t_u_s(func_67(l_71, (l_71 , ((g_3 < (safe_add_func_uint8_t_u_u(l_74, (g_3 < g_2)))) | (g_3 , ((l_74 , ((func_75((safe_mod_func_int16_t_s_s(0x7D1CL, 1L)), p_64, g_3, l_74) || 0x5AL) , (-9L))) <= 0x5934397CL)))), l_304), 4));

    ;
    ;
    for (l_355 = 0; (l_355 != 22); l_355++)
    {
        unsigned l_362 = 4294967286UL;
        int *l_367 = &g_87;
        (*l_367) = ((l_304 == ((((((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((p_64 && l_362), l_362)), 0xE948L)) , 0x4E25801CL) , l_355) || l_74) , p_64) , l_304)) && p_64);
    }
    return g_123;
}







static unsigned char func_67(unsigned short p_68, unsigned short p_69, int p_70)
{
    char l_305 = 0x29L;
    int *l_306 = (void*)0;
    int *l_307 = &g_87;
    int ***l_314 = (void*)0;
    int l_350 = 0xD127F73BL;
    int l_351 = (-1L);
    (*l_307) = l_305;
    if ((((safe_sub_func_uint8_t_u_u((*l_307), (safe_rshift_func_int8_t_s_s(0x0AL, 2)))) & (safe_add_func_int16_t_s_s(((((0xDBL >= (l_314 == (void*)0)) & ((safe_lshift_func_uint16_t_u_s(g_3, g_87)) || (*l_307))) == (safe_lshift_func_uint8_t_u_u(p_70, 7))) > (*l_307)), g_3))) > 65535UL))
    {
        (*l_307) = p_68;
    }
    else
    {
        unsigned l_336 = 1UL;
        for (g_87 = 10; (g_87 < 17); ++g_87)
        {
            int **l_321 = (void*)0;
            g_123 = (l_321 == ((g_2 > (safe_lshift_func_int8_t_s_u(g_3, 3))) , (g_3 , &g_206)));
            (*g_121) = ((((*g_121) == ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-1L), 1)), (p_70 , (g_123 >= (((*l_307) ^ g_2) <= (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_70, (safe_add_func_int16_t_s_s(g_236, p_70)))), g_87))))))) , l_306)) <= l_336) , (void*)0);

            ;
            g_123 = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(g_87, g_3)), l_336));
            l_351 = ((safe_sub_func_int8_t_s_s(((!p_69) , (safe_sub_func_int32_t_s_s(((((g_123 | p_69) , (((safe_sub_func_uint8_t_u_u(((((g_236 && (0xD2L || (g_2 >= ((((l_314 != l_314) || ((safe_mod_func_int32_t_s_s(0xDA33E1B8L, 0xE3F43202L)) <= g_349)) > g_236) , g_87)))) | l_350) , 1L) , 0x52L), 9L)) & g_236) != p_70)) < 1L) <= g_87), p_68))), g_236)) == 2UL);
        }
        for (l_351 = 0; (l_351 >= 14); l_351++)
        {
            int l_354 = 9L;
            (*l_307) = (p_68 , l_354);
        }
        (*l_307) = p_69;
    }
    return (*l_307);
}







static unsigned char func_75(unsigned p_76, short p_77, unsigned p_78, char p_79)
{
    unsigned l_82 = 0x673EEFD7L;
    unsigned char l_85 = 253UL;
    int *l_112 = &g_87;
    unsigned char l_153 = 246UL;
    unsigned l_187 = 0x924A4583L;
    int **l_211 = &g_206;
    int ***l_210 = &l_211;
    unsigned short l_303 = 0x4BCFL;
    if (l_82)
    {
        int l_88 = 0x3F01E835L;
        int l_105 = 0L;
        int *l_152 = (void*)0;
        unsigned char l_209 = 1UL;
        int ***l_222 = &l_211;
        for (p_79 = 0; (p_79 > 22); p_79 = safe_add_func_int16_t_s_s(p_79, 3))
        {
            int *l_86 = &g_87;
            unsigned l_106 = 0x18440AC7L;
            short l_111 = 0xBCF7L;
            (*l_86) = l_85;
            (*l_86) = (l_88 && (safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((*l_86), 7)), (~((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((p_76 && ((safe_add_func_uint16_t_u_u((0x3D8A5C08L && g_2), (0xCD19L >= (((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(g_3, ((((g_87 , g_3) , 0xF3FAL) < p_79) == l_105))) || g_87), g_3)) < l_106) < p_77)))) == g_3)) , 1L), 0)), l_82)) ^ p_76)))) && (-5L)), 0x9F09L)));
            if ((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_3, ((l_111 , l_112) == l_112))), (*l_86))) , p_76) >= (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(((g_2 & (+1L)) != ((void*)0 == &g_87)), 6)) || 2UL) , 0UL), g_3))))
            {
                short l_119 = 0x77DDL;
                int *l_135 = &g_87;
                if (p_76)
                    break;
                l_119 = (safe_add_func_uint16_t_u_u((*l_86), g_87));
                (*l_86) = g_87;
                if ((*l_112))
                {
                    int **l_120 = &l_112;
                    (*l_120) = l_86;
                }
                else
                {
                    volatile int ***l_124 = &g_121;
                    int l_131 = 6L;
                    (*l_124) = g_121;
                    if ((***l_124))
                        continue;
                    if ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((0xC0L <= (0xD3L >= (safe_sub_func_uint8_t_u_u((0x56B17FCBL || (**g_121)), g_3)))) >= l_131) && (safe_lshift_func_int8_t_s_s(g_2, ((void*)0 == &g_121)))) != 4294967292UL), 0x86L)), g_3)))
                    {
                        (*l_86) = (**g_121);
                    }
                    else
                    {
                        short l_134 = 0L;
                        int **l_136 = &l_86;
                        (*l_136) = ((g_123 , l_134) , l_135);
                        (***l_124) = (((safe_sub_func_int16_t_s_s((g_123 | (safe_sub_func_int32_t_s_s(0x11E678B1L, ((safe_add_func_uint8_t_u_u(0xDFL, l_131)) > g_87)))), (safe_rshift_func_int16_t_s_u((*l_112), (*l_135))))) <= 0x26L) == (0x1EL <= p_78));
                        (*g_121) = (*g_121);
                    }
                }
            }
            else
            {
                unsigned l_147 = 7UL;
                int **l_151 = &l_86;
                int ***l_150 = &l_151;
                (*l_86) = ((safe_sub_func_int16_t_s_s(g_123, 0x8BF8L)) < l_147);
                for (l_82 = 0; (l_82 <= 30); l_82++)
                {
                    int ***l_155 = (void*)0;
                    if ((((p_77 , &g_121) == l_150) , ((g_87 <= g_2) >= p_79)))
                    {
                        unsigned char l_154 = 9UL;
                        (**g_121) = (**g_121);
                        (**l_150) = l_152;

                        ;
                        (*l_112) = (l_153 , ((&l_151 == (void*)0) > (0x53L || ((l_154 , l_155) != (g_3 , &g_121)))));
                    }
                    else
                    {
                        return g_2;
                    }

                    ;
                }

                ;
                if ((safe_lshift_func_uint16_t_u_u(((0xB01ECF65L | ((p_76 , ((safe_add_func_int8_t_s_s(((((void*)0 != &l_86) , (((((safe_lshift_func_uint16_t_u_u(0x6E4EL, ((safe_add_func_int32_t_s_s(((g_2 > (safe_rshift_func_uint8_t_u_s(p_78, g_87))) | 0x35B4L), g_87)) , p_78))) , g_87) <= g_87) != p_77) & g_3)) != 253UL), g_123)) , p_79)) && 0xA001L)) & (*l_112)), p_78)))
                {
                    (**l_150) = l_112;

                    ;
                    (*g_121) = (*g_121);
                    return g_123;
                }
                else
                {
                    unsigned char l_184 = 3UL;
                    if ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(1L, 0)), 6)))
                    {
                        (*g_121) = (*g_121);
                        (**g_121) = (((g_3 || (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((((p_77 , &g_122) != ((safe_mod_func_uint32_t_u_u(p_78, g_2)) , (((g_2 && 0UL) , (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(0x43L, 0)) == (safe_mod_func_uint8_t_u_u(((p_76 > (*l_112)) != g_3), p_77))), g_87))) , (*l_150)))) , p_78) > g_123) , g_2), 4L)), (-1L)))) > p_76) != (-1L));
                    }
                    else
                    {
                        (**l_150) = l_152;

                        ;
                    }
                    if ((safe_lshift_func_int16_t_s_u((((*l_112) > (((l_184 <= p_76) == ((g_123 && (p_77 != p_78)) != p_77)) > (safe_sub_func_uint32_t_u_u((p_76 | g_2), l_187)))) & 0xFA11L), p_77)))
                    {
                        int *l_188 = &g_87;
                        l_188 = (**l_150);

                        ;
                        (*l_112) = (g_87 <= p_78);
                    }
                    else
                    {
                        (*g_122) = (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((g_123 ^ (+p_78)) != ((safe_lshift_func_uint8_t_u_s((0xD1B1L && 0xD190L), 4)) ^ (~(g_3 > 1UL)))), p_77)), (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_3, g_3)), g_87)) | g_3) || p_77), 0xB1L)), 0xD6A31045L)), p_78))));
                        (**l_150) = l_152;

                        ;
                    }
                    if (((g_3 , &g_122) == (void*)0))
                    {
                        int *l_205 = &g_87;
                        l_205 = (void*)0;

                        ;
                        if (p_78)
                            break;
                    }
                    else
                    {
                        (**l_150) = g_206;

                        ;
                        (*l_151) = l_86;
                        (*l_112) = (((safe_sub_func_int32_t_s_s((((p_79 <= p_79) < p_78) , p_76), ((p_78 , g_87) == g_87))) , &g_206) != (((g_2 || g_123) == 0L) , &l_112));
                    }
                    (*g_206) = l_184;
                }
            }

            ;
            (**l_211) = ((p_79 || ((l_209 > (p_78 , p_78)) && ((void*)0 == l_210))) || (safe_lshift_func_int8_t_s_u(g_3, 6)));
        }
        if ((*g_206))
        {
            char l_232 = 0L;
            for (l_82 = 0; (l_82 < 44); l_82++)
            {
                int ***l_223 = &l_211;
                (**g_121) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((((p_78 , (l_222 != l_223)) < (safe_add_func_uint32_t_u_u(1UL, (safe_lshift_func_uint8_t_u_s((**l_211), 3))))) > p_79), ((**l_223) != (*g_121)))) , (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((!(**l_211)) , g_2), (-5L))) , p_79), l_232))), p_78)), (-1L)));
            }
        }
        else
        {
            int l_235 = 2L;
            if ((g_123 <= 0x8DL))
            {
                int *l_233 = (void*)0;
                (*g_121) = (void*)0;

                ;
                (**l_222) = l_233;

                ;
            }
            else
            {
                int *l_234 = (void*)0;
                (**l_210) = l_234;

                ;
            }

            ;
            ;
            l_235 = ((g_123 , (0xE2A2L | (g_3 > p_77))) , p_78);
        }

        ;
        ;
        (**l_210) = (**l_222);
        (*l_112) = ((p_77 || (*l_112)) > (~g_236));
    }
    else
    {
        unsigned l_239 = 1UL;
        int *l_271 = &g_87;
        volatile int *l_281 = &g_123;
        int ***l_285 = &l_211;
        l_239 = (safe_add_func_uint32_t_u_u(p_77, (***l_210)));
        if ((0UL && p_79))
        {
            int ***l_242 = &l_211;
            for (g_236 = (-11); (g_236 <= 19); g_236 = safe_add_func_int32_t_s_s(g_236, 2))
            {
                int l_253 = 1L;
                int *l_276 = &g_87;
                (***l_242) = ((((l_242 != ((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((p_79 < l_239), (p_77 == (safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0xDB18L, (((p_76 | ((((p_79 | ((((l_239 && (p_79 < 0x92L)) > (**l_211)) | (***l_242)) != g_236)) , 0xFEL) <= 0x60L) == p_76)) , g_2) > 0xB4L))), 10)) <= l_253) && (***l_210)) != (*g_122)), g_236))))) , p_76), p_77)) , (void*)0)) , 4294967290UL) , 0x4EL) <= 255UL);
                if ((*g_122))
                {
                    short l_260 = 0x2FE7L;
                    int **l_272 = (void*)0;
                    for (l_187 = 0; (l_187 == 54); l_187 = safe_add_func_uint16_t_u_u(l_187, 1))
                    {
                        (**l_211) = (g_2 || (p_79 ^ 4294967295UL));
                        (*g_121) = (*g_121);
                        return g_87;
                    }
                    for (p_77 = 28; (p_77 != 11); p_77 = safe_sub_func_int16_t_s_s(p_77, 3))
                    {
                        (*l_112) = ((safe_mod_func_uint8_t_u_u((p_77 , (((((*l_211) == (l_260 , (**l_210))) >= g_123) , ((*l_112) , (g_236 >= (((safe_mod_func_int32_t_s_s(p_79, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x20L, g_123)), (***l_242))) , (*l_112)))) || g_2) && 0xC6FE17D3L)))) ^ 1L)), g_3)) , (-1L));
                    }
                    if ((*g_122))
                        break;
                    for (l_260 = (-10); (l_260 != 12); l_260 = safe_add_func_uint32_t_u_u(l_260, 1))
                    {
                        (*g_121) = (*g_121);
                        (*g_206) = (safe_rshift_func_uint8_t_u_s((l_271 == (*g_121)), 7));
                        l_272 = l_272;
                        (**l_242) = l_271;
                    }
                }
                else
                {
                    (*l_211) = (**l_242);
                    for (l_85 = 0; (l_85 > 42); ++l_85)
                    {
                        int *l_275 = &g_87;
                        (**l_242) = l_275;
                    }
                    g_206 = l_276;
                }
                (**l_210) = (**l_242);
            }
            (**l_242) = l_271;
            if ((((*g_121) != (**l_242)) & (**l_211)))
            {
                g_206 = (**l_242);
            }
            else
            {
                unsigned char l_292 = 0xC0L;
                for (l_82 = 0; (l_82 > 39); l_82 = safe_add_func_uint32_t_u_u(l_82, 3))
                {
                    for (l_153 = 0; (l_153 > 49); l_153 = safe_add_func_int8_t_s_s(l_153, 6))
                    {
                        (*g_121) = (*g_121);
                        l_281 = (*g_121);
                        (*l_112) = (1UL && p_79);
                        g_282 = &g_206;
                    }
                    return g_3;
                }
                (*l_281) = ((*l_281) > ((((((*l_271) >= (+(l_281 != ((safe_lshift_func_uint8_t_u_s(p_76, p_77)) , (*l_211))))) , g_2) > ((l_285 == &l_211) & (-1L))) ^ 0L) , p_76));
                (*l_112) = ((***l_242) || ((0x7B0BA2C0L == ((safe_sub_func_uint8_t_u_u((0x658364F2L & (g_2 > ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_78, 3)), 7)) , ((((***l_242) == g_2) , (p_78 && (((void*)0 != l_242) & 0x5DAC8414L))) || p_79)))), p_79)) <= l_292)) | p_77));
            }
        }
        else
        {
            int **l_293 = &g_206;
            (*l_285) = l_293;
            (***l_285) = (**g_282);
        }
        (*g_282) = (*l_211);
    }

    ;
    ;
    (*l_112) = (((((void*)0 == (*l_210)) & (*l_112)) & 3L) >= (((((safe_unary_minus_func_int32_t_s(p_79)) < ((safe_mod_func_uint16_t_u_u((((((safe_add_func_int16_t_s_s((((((p_79 < g_3) & (2L | ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((~(*l_112)) , (*l_210)) != (*l_210)), (*l_112))), 5)) , p_76))) || p_76) , p_77) && 0x7545C5AFL), (*l_112))) || 0x8EFDL) ^ p_77) , g_123) < l_303), g_87)) >= (-1L))) | (*l_112)) | g_87) < p_79));
    (*l_211) = (*l_211);
    return g_123;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
