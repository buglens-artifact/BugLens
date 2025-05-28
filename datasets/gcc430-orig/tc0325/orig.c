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



static char g_20 = (-10L);
static const int *g_82 = (void*)0;
static const int **g_81 = &g_82;
static int g_93 = 0x55F075F9L;
static unsigned g_108 = 1UL;
static int g_116 = 3L;
static int g_131 = 0x60B5C0E8L;
static int *g_317 = &g_93;
static unsigned g_575 = 0xDF06EF8AL;
static const unsigned char g_577 = 255UL;
static unsigned char g_846 = 0UL;
static unsigned g_860 = 0x35AD2E04L;



static unsigned func_1(void);
static char func_2(unsigned char p_3, short p_4, const int p_5, char p_6, short p_7);
static unsigned short func_21(const unsigned p_22, short p_23, unsigned short p_24, char p_25, unsigned char p_26);
static const unsigned func_27(unsigned char p_28, char p_29);
static unsigned char func_30(unsigned p_31, int p_32, const char p_33);
static unsigned short func_34(unsigned p_35, unsigned char p_36, char p_37, unsigned p_38, int p_39);
static int func_40(char p_41);
static char func_42(unsigned p_43, unsigned char p_44, unsigned short p_45, short p_46, unsigned char p_47);
static unsigned func_50(short p_51, const short p_52, unsigned p_53, int p_54, char p_55);
static int func_58(unsigned char p_59, int p_60, int p_61);
static unsigned func_1(void)
{
    unsigned char l_13 = 0xF3L;
    unsigned short l_180 = 0UL;
    unsigned char l_428 = 0x33L;
    int *l_809 = &g_131;
    (*l_809) = (func_2(((!(safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((~l_13) != ((246UL && (safe_lshift_func_int8_t_s_u((((l_13 >= ((l_13 < 0x52568108L) > (((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_20, ((func_21(func_27(func_30((func_34((((func_40(func_42((safe_sub_func_uint32_t_u_u(func_50((safe_mul_func_uint16_t_u_u(2UL, ((func_58(g_20, g_20, g_20) , g_20) < l_13))), g_20, g_20, l_13, g_20), g_20)), l_180, g_20, g_131, g_20)) ^ g_20) || g_108) >= l_13), l_13, l_180, l_13, g_20) > 65529UL), g_20, l_180), l_180), g_20, g_20, l_428, l_180) , l_428) , g_108))), g_20)) < 0x0D71L) , l_13))) > 0L) < g_20), g_20))) != 0x54L)) , 1L))), 0xB2L)), 11))) <= g_20), g_20, g_20, g_20, g_20) >= g_577);
    (*g_81) = (void*)0;
    for (l_13 = 0; (l_13 > 60); ++l_13)
    {
        unsigned l_829 = 3UL;
        char l_830 = 9L;
        unsigned short l_833 = 1UL;
        int *l_838 = &g_116;
        if (((g_116 , (((((*l_809) >= 0xE9L) ^ l_829) | g_116) > g_116)) >= (*l_809)))
        {
            for (g_20 = (-10); (g_20 > (-30)); g_20--)
            {
                int l_841 = 0x7DD362DFL;
                unsigned char l_842 = 0xADL;
                for (g_131 = 0; (g_131 != 25); g_131++)
                {
                    (*g_81) = l_838;
                    for (l_830 = 17; (l_830 <= (-10)); --l_830)
                    {
                        (*g_81) = (*g_81);
                    }
                    (*g_81) = (*g_81);
                }
                (*l_838) = ((-1L) | l_841);
                (*l_838) = l_842;
            }
        }
        else
        {
            int **l_863 = &g_317;
            const int ***l_873 = (void*)0;
            const int ***l_874 = &g_81;
            for (g_20 = 0; (g_20 >= (-3)); g_20 = safe_sub_func_int16_t_s_s(g_20, 8))
            {
                int *l_845 = &g_93;
                (*g_81) = l_845;
                return g_846;
            }
            (*g_81) = l_809;
            for (g_575 = 0; (g_575 <= 44); g_575 = safe_add_func_uint16_t_u_u(g_575, 5))
            {
                int **l_850 = &g_317;
                int ***l_849 = &l_850;
                int l_857 = (-4L);
                unsigned l_872 = 0x4FD7AEE9L;
                (*l_849) = &g_317;
                for (g_116 = (-11); (g_116 >= (-15)); --g_116)
                {
                    return (*l_838);
                }
                (*l_838) = ((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((l_857 || (safe_add_func_uint8_t_u_u(g_860, (0xCB52L >= ((safe_sub_func_uint32_t_u_u((l_863 == ((((((g_20 ^ (*l_838)) , g_860) , ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(g_131, (func_50(g_108, g_93, l_872, g_575, g_846) | g_575))) || 2UL), g_131)) <= g_577), g_20)), 251UL)) ^ 0L)) > 0xD6C625F8L) , 7L) , (void*)0)), 0UL)) , (*l_809)))))) , 1L) == g_20) != g_860), g_575)), 0x5D2FL)) ^ g_577) >= 0x5DL) , (*l_809));
            }
            (*l_874) = &g_82;
        }
        for (l_829 = 26; (l_829 <= 9); l_829 = safe_sub_func_int8_t_s_s(l_829, 7))
        {
            g_116 = (*l_838);
        }
    }
    return g_575;
}







static char func_2(unsigned char p_3, short p_4, const int p_5, char p_6, short p_7)
{
    unsigned short l_536 = 0x8249L;
    int * const l_569 = (void*)0;
    short l_574 = 0x4B8DL;
    unsigned short l_576 = 0UL;
    const int *l_636 = &g_93;
    int l_641 = 1L;
    short l_644 = (-1L);
    int * const l_646 = &g_93;
    int * const *l_655 = (void*)0;
    int * const **l_654 = &l_655;
    const unsigned l_691 = 0xA1B42E72L;
    int *l_731 = &g_116;
    short l_742 = 0L;
    (*g_81) = &p_5;
    for (p_3 = 0; (p_3 <= 6); p_3++)
    {
        int *l_537 = (void*)0;
        int *l_538 = &g_116;
        const int *l_554 = &g_93;
        unsigned l_559 = 0UL;
        int l_610 = 0x7EC7626EL;
        (*l_538) = (func_40(p_6) == ((safe_mod_func_uint8_t_u_u(g_20, ((~0x945AL) || g_116))) , l_536));
        for (p_6 = (-9); (p_6 >= (-4)); ++p_6)
        {
            unsigned l_543 = 0xCCAED22AL;
            if (p_4)
                break;
            for (g_93 = 3; (g_93 > (-7)); g_93 = safe_sub_func_int32_t_s_s(g_93, 2))
            {
                if (l_543)
                    break;
                if (p_7)
                    continue;
                (*l_538) = l_536;
            }
        }
        if (func_58(p_3, p_4, g_116))
        {
            int l_550 = 0x0F39FC39L;
            (*l_538) = p_3;
            if (func_40(l_550))
            {
                unsigned l_551 = 4294967287UL;
                (*g_81) = &p_5;
                (*g_81) = (*g_81);
                (*l_538) = (l_536 , (~((l_550 && p_5) <= 0L)));
            }
            else
            {
                (*l_538) = (p_5 , (*l_538));
            }
            (*g_81) = (*g_81);
            l_554 = (*g_81);
        }
        else
        {
            for (l_536 = 20; (l_536 > 18); --l_536)
            {
                return g_20;
            }
            (*l_538) = (~l_536);
        }
        if (func_34((safe_lshift_func_uint16_t_u_s(((p_6 && (((l_559 < (safe_unary_minus_func_uint8_t_u((p_3 < g_93)))) , g_93) <= l_576)) != p_3), g_577)), p_4, p_5, (*l_538), l_576))
        {
            unsigned l_584 = 0x879DCA48L;
            (*l_538) = (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_3, g_116)), (((((safe_lshift_func_int8_t_s_u(p_6, l_584)) , (p_3 >= (safe_mod_func_int16_t_s_s((!p_4), (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(l_584, (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((&g_81 == (void*)0), 6)), p_5)))) , 0x0AC2L), 0L)), 0x17L)))))) != g_20) < 0x9C11E298L) || 0x29L)));
        }
        else
        {
            int l_611 = 0x731D6845L;
            (*l_538) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((func_42(((((safe_sub_func_int16_t_s_s((((((((safe_lshift_func_int16_t_s_u((((p_6 , (safe_rshift_func_uint16_t_u_s((p_4 < (*l_538)), (safe_unary_minus_func_int8_t_s((((1UL | func_40(p_4)) | ((g_577 , (safe_lshift_func_int8_t_s_u(0L, 7))) < 0x0448L)) >= 0x4AL)))))) , l_610) , p_6), (*l_538))) ^ p_4) | l_611) > 0x4C27L) , g_93) != 0xC912L) , g_577), 1L)) > p_6) > 0UL) , l_574), g_116, p_4, p_7, (*l_538)) != 0x86L) <= g_108) != g_116) <= l_611), g_108)), p_5));
            for (g_131 = 0; (g_131 != 27); g_131 = safe_add_func_uint32_t_u_u(g_131, 6))
            {
                unsigned l_616 = 0xFCBB5A18L;
                (*g_81) = (*g_81);
                (*l_538) = (((g_20 >= (l_569 != (void*)0)) , (safe_mod_func_uint8_t_u_u((0xE304L > (p_7 ^ ((l_616 & (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((func_50(g_116, (((safe_mul_func_int16_t_s_s(g_93, g_577)) , p_3) , g_20), g_108, p_6, p_7) < p_5) > 2L), p_5)), g_577))) & 0x95L))), 9L))) > 65535UL);
                g_81 = &g_82;
                return l_611;
            }
            l_611 = p_6;
        }
    }
lbl_764:
    if ((p_5 != (1L ^ (((safe_mul_func_int16_t_s_s((g_20 <= g_108), (((((&l_569 == (((65533UL | (safe_mul_func_int8_t_s_s((g_131 , l_574), (safe_rshift_func_uint8_t_u_s(g_575, p_4))))) == p_4) , (void*)0)) || 1L) , g_575) > p_7) , g_20))) <= p_7) == g_116))))
    {
        int *l_633 = &g_93;
        (*l_633) = (safe_sub_func_int8_t_s_s(0x20L, g_93));
        (*g_81) = l_633;
        (*g_81) = &p_5;
    }
    else
    {
        int l_653 = 0L;
        int **l_658 = &g_317;
        int l_670 = (-1L);
        const int *l_687 = &g_93;
        unsigned l_693 = 0x22A99AA6L;
        int *l_696 = (void*)0;
        const int ***l_699 = &g_81;
lbl_694:
        for (g_20 = 23; (g_20 >= 11); g_20 = safe_sub_func_uint8_t_u_u(g_20, 6))
        {
            (*g_81) = &p_5;
            (*g_81) = &p_5;
        }
lbl_688:
        l_636 = &p_5;
        for (g_116 = 0; (g_116 > 17); g_116++)
        {
            unsigned l_663 = 0UL;
            int *l_695 = &g_93;
            g_93 = (((func_58(p_4, p_3, (safe_mul_func_int8_t_s_s((+l_641), 0xB7L))) ^ 9UL) < g_108) , 0x6FF24493L);
            for (g_131 = (-15); (g_131 <= 14); g_131 = safe_add_func_int8_t_s_s(g_131, 6))
            {
                int *l_645 = (void*)0;
                if (l_644)
                {
                    int **l_647 = &g_317;
                    (*g_81) = l_645;
                    (*l_647) = l_646;
                    (**l_647) = (+(safe_unary_minus_func_uint32_t_u(0xE7FAF82CL)));
                    for (p_3 = 0; (p_3 <= 43); p_3 = safe_add_func_uint8_t_u_u(p_3, 7))
                    {
                        (*l_646) = (safe_sub_func_int32_t_s_s((*g_317), func_58(g_131, g_577, (((l_653 , (func_58(p_6, (&l_647 == l_654), (safe_mod_func_int32_t_s_s(((g_116 && 0xA331L) >= g_93), g_108))) != 0L)) , (*g_81)) == &g_131))));
                        if (l_653)
                            break;
                        (*g_81) = &p_5;
                    }
                }
                else
                {
                    (*l_654) = l_658;
                }
                for (l_653 = 0; (l_653 == (-13)); --l_653)
                {
                    return (*l_646);
                }
                (*l_646) = (5L == func_58(p_6, (((g_575 != (1UL <= (safe_add_func_uint16_t_u_u(p_3, func_58((0x51C6L && l_663), ((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((&l_655 != &l_658), g_575)), 1)))) || 2L), p_3))))) <= p_5) < 1UL), g_20));
            }
            g_131 = (l_663 && (p_4 >= (l_663 & g_575)));
            if (p_7)
            {
                char l_692 = 0x76L;
                for (l_574 = 0; (l_574 != 22); l_574 = safe_add_func_uint8_t_u_u(l_574, 5))
                {
                    int l_683 = 0xF6BB1810L;
                    if (p_7)
                    {
                        return p_6;
                    }
                    else
                    {
                        unsigned l_686 = 0x17BB37BBL;
                        l_686 = (((p_6 , ((g_20 , g_20) || g_93)) , (safe_sub_func_int32_t_s_s((-6L), (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((l_683 == l_663) , p_7) ^ (safe_rshift_func_int16_t_s_u((-5L), 8))), g_116)), 7UL)) == g_108), 0xD0C7L))))) , p_5);
                        l_687 = (*g_81);
                        if (g_577)
                            goto lbl_688;
                        if (l_663)
                            break;
                    }
                    if (l_663)
                    {
                        (*g_81) = (*g_81);
                        (*l_646) = (-4L);
                        if (p_7)
                            goto lbl_694;
                    }
                    else
                    {
                        (*g_81) = (*g_81);
                        (*l_658) = (void*)0;
                        (*l_658) = l_695;
                        (*g_81) = l_695;
                    }
                }
            }
            else
            {
                (*g_81) = l_696;
                g_131 = (safe_lshift_func_int8_t_s_u((*l_695), p_4));
                (*g_81) = &p_5;
            }
        }
        (*l_699) = &g_82;
    }
    if ((safe_add_func_int8_t_s_s(g_577, (g_131 == func_58(g_93, (g_20 != (safe_sub_func_uint16_t_u_u((((g_108 <= 0xB3BEC366L) > (&l_655 == (void*)0)) == (safe_rshift_func_uint8_t_u_s(g_116, g_575))), (-7L)))), (*l_636))))))
    {
        int l_710 = 0xFA367F39L;
        int l_741 = (-2L);
        unsigned l_743 = 0x40C49F0AL;
        unsigned short l_783 = 1UL;
        unsigned short l_788 = 1UL;
        for (g_575 = 18; (g_575 == 36); g_575++)
        {
            unsigned l_718 = 0x3F176FB8L;
            int **l_760 = (void*)0;
            int ***l_759 = &l_760;
            if (((l_710 != (-1L)) & ((g_20 , (g_577 <= func_34((safe_sub_func_int32_t_s_s((0L <= 1L), (~(safe_mul_func_int16_t_s_s((0L <= p_3), p_3))))), g_108, p_7, g_20, l_710))) | l_710)))
            {
                short l_715 = 0x7A51L;
                g_93 = l_715;
                if ((!l_715))
                {
                    unsigned short l_725 = 2UL;
                    int l_726 = 0x9F4A7669L;
                    if ((!(safe_add_func_int8_t_s_s((l_718 < ((((safe_lshift_func_uint8_t_u_s(2UL, 7)) | (g_108 != ((safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((g_116 , p_4) , l_725), l_725)) && ((((l_725 & p_6) , g_108) , (void*)0) != (void*)0)) || 0xFEL), l_710)) , 65535UL))) <= p_4) , p_7)), 1UL))))
                    {
                        (*l_646) = p_3;
                        return l_718;
                    }
                    else
                    {
                        if (p_7)
                            break;
                        if (p_4)
                            continue;
                    }
                    l_726 = (l_718 > g_20);
                }
                else
                {
                    unsigned l_738 = 0x21F12AECL;
                    const int **l_744 = &l_636;
                    (*l_744) = (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(func_58((l_731 == &p_5), (func_40(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((func_42((l_738 , (((void*)0 != &l_655) != ((p_6 , ((((safe_add_func_int32_t_s_s((l_738 != (8UL != ((*l_636) >= p_5))), 4294967286UL)) & l_741) > l_715) && 0x8C76D6D4L)) , 0xE6L))), p_4, p_6, g_116, l_742) , p_5), 0xA3034DEAL)) > l_743), 4)), 1)) == g_108)) , l_738), l_710), 7)), p_6)) | p_3) , &p_5);
                    (*g_81) = (*g_81);
                    (*g_81) = &p_5;
                }
                return p_7;
            }
            else
            {
                int *l_774 = (void*)0;
                (*l_731) = 0x2D8BCCDFL;
                (*l_646) = (*l_636);
                if ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(0xD8F9L, p_6)), p_6)) >= (safe_add_func_uint8_t_u_u(func_58(((((safe_sub_func_uint16_t_u_u((0x8DL || p_3), g_577)) , (p_6 >= g_116)) || p_7) , p_7), g_108, l_718), 8L))) & p_5))
                {
                    unsigned short l_761 = 0xD20AL;
                    (*l_731) = (safe_sub_func_uint32_t_u_u((g_20 && (p_7 > p_6)), (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(9L, (g_93 ^ (l_759 == ((l_761 | (safe_add_func_int16_t_s_s((~g_108), 1L))) , (void*)0))))), p_6))));
                    (*g_81) = &p_5;
                    (*g_81) = (void*)0;
                }
                else
                {
                    unsigned short l_773 = 0x4CCAL;
                    if (l_576)
                        goto lbl_764;
                    (*l_646) = (((safe_rshift_func_uint8_t_u_u(0x81L, p_5)) , ((safe_mul_func_int8_t_s_s((func_40((((((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((*l_759) == (void*)0), ((func_58(g_108, g_20, g_108) > ((&l_655 == &l_655) , l_773)) && 0xDABFL))), 0x4D9DE71AL)) , p_3) > p_4) && g_116) == g_577)) ^ g_131), g_116)) != 0L)) > 0UL);
                    (*g_81) = l_774;
                    for (p_6 = (-6); (p_6 == (-10)); p_6 = safe_sub_func_uint16_t_u_u(p_6, 8))
                    {
                        const int *l_789 = &g_116;
                        (*l_731) = (g_93 && ((safe_rshift_func_uint8_t_u_s(p_7, 3)) , ((safe_mod_func_int16_t_s_s((4294967286UL != (p_6 ^ (safe_mod_func_uint8_t_u_u(4UL, l_741)))), (p_3 | l_788))) == p_7)));
                        (*g_81) = l_789;
                        (*l_646) = p_5;
                    }
                }
            }
        }
        return (*l_731);
    }
    else
    {
        const int *l_790 = &g_93;
        (*l_731) = p_5;
        l_790 = (*g_81);
        for (l_641 = 0; (l_641 >= 4); ++l_641)
        {
            short l_801 = 0L;
            unsigned char l_808 = 255UL;
            if (p_4)
                break;
            (*l_731) = (safe_sub_func_int32_t_s_s(0x7C6F3322L, (safe_rshift_func_uint8_t_u_s(func_40(func_34((((((safe_sub_func_uint16_t_u_u((~(1L & func_42((safe_mul_func_int8_t_s_s(l_801, (((safe_rshift_func_uint8_t_u_u((*l_646), 5)) || ((l_801 && (-1L)) <= ((safe_rshift_func_uint16_t_u_s((p_5 || (safe_rshift_func_uint16_t_u_u(((p_4 >= ((void*)0 == &p_5)) <= p_5), 10))), g_20)) <= (*l_646)))) > g_577))), l_801, p_4, p_4, (*l_646)))), g_577)) | 4294967291UL) , (*l_646)) <= g_20) != l_808), g_20, l_801, p_4, p_4)), 2))));
        }
    }
    return p_7;
}







static unsigned short func_21(const unsigned p_22, short p_23, unsigned short p_24, char p_25, unsigned char p_26)
{
    const int *l_429 = &g_116;
    int * const *l_474 = &g_317;
    int * const **l_473 = &l_474;
    int *l_475 = &g_131;
lbl_464:
    l_429 = l_429;
    if (p_26)
    {
        int **l_432 = &g_317;
        unsigned l_436 = 0x271EA74EL;
        unsigned short l_462 = 0x6C88L;
        int l_510 = 1L;
        if ((p_24 & ((safe_add_func_int32_t_s_s((l_432 != &l_429), ((p_22 , ((1L <= ((void*)0 == &l_429)) , p_22)) && g_108))) > p_22)))
        {
            const unsigned char l_447 = 0x25L;
            int l_448 = 0xC25593DAL;
            int l_476 = 1L;
            for (g_116 = 0; (g_116 >= 19); g_116 = safe_add_func_int16_t_s_s(g_116, 1))
            {
                int l_435 = 5L;
                short l_467 = (-1L);
                int l_468 = (-9L);
                l_436 = l_435;
                (**l_432) = ((safe_lshift_func_int8_t_s_u(((*l_429) != ((safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_int8_t_s(((((0x18A81A47L ^ p_22) & ((((func_27(g_93, (safe_mul_func_int8_t_s_s(p_25, (safe_sub_func_int8_t_s_s((func_58((((safe_rshift_func_uint8_t_u_s(p_26, func_58((7UL >= (*l_429)), g_20, g_108))) , l_447) ^ 0xACA3L), p_24, p_25) || p_23), p_25))))) == 4UL) || 0xA035L) || g_20) & 65535UL)) , l_435) || p_24))) ^ 0x0F035685L))) & 1L)), 7)) <= 3L);
                if ((g_93 >= ((-9L) <= func_42(g_20, (p_22 || l_448), p_26, (**l_432), ((*l_429) && (*l_429))))))
                {
                    short l_459 = 6L;
                    int *l_463 = (void*)0;
                    (**l_432) = ((safe_mod_func_int16_t_s_s((func_58(g_93, ((((((safe_mul_func_int16_t_s_s((p_23 , ((void*)0 == &g_82)), 0x5BAEL)) , (safe_lshift_func_int16_t_s_s(((g_93 >= (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((*g_317) == l_459) || (safe_add_func_int16_t_s_s(l_462, 1UL))), 0x2C34FCC0L)) <= l_448), l_459))) != 0xADL), g_93))) & 1UL) , 1L) , (void*)0) != l_463), g_108) <= (*l_429)), p_24)) <= 1UL);
                    if (l_448)
                        goto lbl_464;
                }
                else
                {
                    for (p_26 = (-29); (p_26 >= 23); p_26 = safe_add_func_uint16_t_u_u(p_26, 9))
                    {
                        return g_93;
                    }
                    if (l_467)
                        break;
                    l_468 = func_27(g_93, p_26);
                    (*g_317) = (p_24 >= p_23);
                }
            }
            l_476 = (p_24 || (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(65535UL, ((p_24 , l_473) != (void*)0))) && ((((func_27(p_24, (((((func_34(g_93, ((**l_432) , g_116), g_108, (**l_432), p_24) , (*l_473)) != &g_82) & 0x6860C1E1L) , l_475) == (*l_474))) & p_26) , p_22) <= 0xF741L) | (-8L))), 5)));
            (**l_474) = 8L;
        }
        else
        {
            int **l_477 = &g_317;
            int l_509 = 0x66EE760FL;
            (*l_477) = (*l_474);
            if ((((safe_lshift_func_uint8_t_u_u(g_131, func_58(((safe_sub_func_int8_t_s_s((g_20 >= (safe_mul_func_uint8_t_u_u(((p_22 & ((**l_432) && (**l_477))) || ((safe_sub_func_uint32_t_u_u(g_93, (p_26 > p_25))) <= 0x6DL)), p_26))), g_108)) & g_131), (**l_432), g_131))) == 1L) == 250UL))
            {
                int *l_486 = (void*)0;
                l_486 = (void*)0;
                (***l_473) = (p_23 , ((safe_sub_func_uint8_t_u_u((~g_20), ((p_23 & (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((((0xA7L || (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((~(((((safe_add_func_int32_t_s_s(func_34(g_108, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_25, (~(safe_add_func_uint8_t_u_u(func_58(func_27(p_22, (g_116 <= (((((safe_lshift_func_uint16_t_u_s((&g_93 == (*l_477)), 15)) , 4294967289UL) | (**l_432)) > 0x4CB7L) , (*l_475)))), p_24, l_509), g_116))))), 15)), (*l_429), g_108, g_116), p_26)) , (void*)0) == &g_317) < p_24) || 0x97366C97L)) , p_22) < g_20) > p_24), 3)), p_25))) & 7UL) , p_24) | p_23), p_25)) == 0xFE621D3BL) , 0x4CL), g_20)), 15))) || (**l_432)))) >= p_22));
                l_510 = p_22;
            }
            else
            {
                int *l_511 = &l_510;
                (*l_432) = l_511;
                (*l_511) = ((((safe_add_func_uint32_t_u_u(g_108, (safe_rshift_func_uint16_t_u_s(g_108, (p_25 || (**l_432)))))) | (((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s(0L, (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_108, (**l_477))), p_23)), (~((**l_432) > (**l_477))))), 0)))) != p_26), (**l_432))) , 255UL) && 0x98L)) & (***l_473)) > g_20);
                (**l_474) = p_25;
            }
        }
        (*l_475) = (safe_rshift_func_uint8_t_u_s((~(safe_add_func_int32_t_s_s((*g_317), (0xCA75A1E8L < (*g_317))))), 2));
        (*g_317) = 1L;
    }
    else
    {
        return p_23;
    }
    return g_93;
}







static const unsigned func_27(unsigned char p_28, char p_29)
{
    const int l_412 = (-9L);
    (*g_317) = l_412;
    for (p_28 = 0; (p_28 <= 45); p_28 = safe_add_func_int16_t_s_s(p_28, 3))
    {
        unsigned char l_415 = 0x33L;
        int l_416 = 2L;
        (*g_81) = &l_412;
        l_416 = (~l_415);
        for (l_415 = (-15); (l_415 < 34); l_415 = safe_add_func_uint8_t_u_u(l_415, 1))
        {
            int ** const l_422 = &g_317;
            int ** const *l_421 = &l_422;
            (*g_317) = ((*g_317) || (g_108 >= ((((((safe_mod_func_int16_t_s_s(p_29, (p_29 , 65535UL))) | (l_421 != &l_422)) <= l_415) >= func_42(func_58((safe_lshift_func_uint8_t_u_s((~(l_412 || 0x3358L)), g_116)), g_93, l_415), l_412, (***l_421), g_131, p_28)) < p_29) == 7L)));
        }
    }
    for (g_131 = (-17); (g_131 == (-6)); ++g_131)
    {
        int *l_427 = &g_116;
        (*g_81) = l_427;
    }
    return p_29;
}







static unsigned char func_30(unsigned p_31, int p_32, const char p_33)
{
    int *l_217 = &g_116;
    int l_304 = 0x4F0F99F4L;
lbl_351:
    (*l_217) = 0x2FEA0E90L;
lbl_340:
    (*g_81) = (*g_81);
    for (g_116 = 0; (g_116 > (-12)); g_116 = safe_sub_func_uint32_t_u_u(g_116, 5))
    {
        int l_222 = 1L;
        int * const *l_228 = &l_217;
        int * const **l_227 = &l_228;
        (*g_81) = l_217;
        g_131 = ((safe_mul_func_int16_t_s_s((1L ^ (*l_217)), p_33)) <= (l_222 & p_33));
        if ((safe_mod_func_uint8_t_u_u((l_217 == (void*)0), ((((0x61682E68L >= ((((((void*)0 != l_217) & (+((((safe_mul_func_int8_t_s_s(g_131, (l_227 == (void*)0))) == (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_20, p_31)), 0xCBFFL))) ^ p_31) > 0x3EL))) <= (*l_217)) , 0x8155E1EFL) <= (*g_82))) && (***l_227)) || 0xF4L) , (*l_217)))))
        {
            int *l_235 = &g_131;
            for (l_222 = 3; (l_222 < (-10)); l_222 = safe_sub_func_int16_t_s_s(l_222, 8))
            {
                g_131 = 6L;
            }
            (*l_235) = 5L;
        }
        else
        {
            (*g_81) = l_217;
            (*g_81) = (void*)0;
            (*g_81) = (*g_81);
        }
        if (p_32)
            break;
    }
    for (p_31 = 0; (p_31 > 34); p_31 = safe_add_func_int8_t_s_s(p_31, 5))
    {
        short l_246 = 0xAD68L;
        int *l_247 = &g_116;
        int **l_278 = (void*)0;
        int *** const l_277 = &l_278;
        const char l_367 = 5L;
        unsigned l_387 = 5UL;
        int l_394 = (-3L);
        unsigned l_406 = 0xC9E0D287L;
        if ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((((-1L) >= (+(safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(l_246, (((func_34(p_32, (1UL ^ (((g_108 < 249UL) | func_42((((l_246 , l_247) != (func_40(g_93) , (void*)0)) , 0x40841C12L), g_108, (*l_247), g_108, g_108)) ^ p_32)), (*l_247), (*l_247), g_20) >= g_20) , 65530UL) > p_32))) , p_31), p_32)))) >= g_20) | 7L), 0xD9L)), 3)))
        {
            const int * const *l_248 = &g_82;
            const int * const **l_249 = &l_248;
            (*l_249) = l_248;
            (*l_217) = p_32;
            if (p_31)
                break;
        }
        else
        {
            unsigned short l_254 = 1UL;
            const int *l_273 = (void*)0;
            if ((5L > p_31))
            {
                short l_269 = 0x6A1CL;
                int *l_272 = (void*)0;
                const int *l_276 = &g_131;
                short l_301 = 1L;
                (*g_81) = l_217;
                if ((**g_81))
                    continue;
                if (((((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_254 == (safe_add_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(func_34((*l_217), g_108, (((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((func_40(((~(safe_add_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(((*l_217) < (((func_40(p_32) ^ g_20) , (func_58(p_32, p_33, l_254) || g_108)) , p_33)), (*l_217))) > l_269) , 0xC5B6A20DL), g_131))) , 1L)) && l_269) , (-10L)), l_254)) & 0UL), 7)) != 65530UL) > 0x37L), p_32, g_131), 0x7C3347C7L)) > (-9L)) > p_33), (-6L)))), 65535UL)), g_20)) > g_131) || 0x57L) ^ l_269))
                {
                    unsigned char l_279 = 255UL;
                    (*g_81) = ((safe_add_func_uint16_t_u_u(g_108, (l_272 == l_247))) , l_273);
                    for (g_108 = 0; (g_108 < 31); g_108++)
                    {
                        (*g_81) = l_272;
                        l_276 = (*g_81);
                        (*l_247) = ((l_277 != &g_81) || ((l_279 ^ (safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u((0x5166A148L && p_33), ((void*)0 == &g_82)))))) == (safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(p_31, l_279)) < p_31), 0))));
                        (*l_247) = ((((p_32 , p_33) == g_20) < (((safe_sub_func_uint32_t_u_u(((1UL < ((((l_279 , (safe_rshift_func_uint16_t_u_u(p_32, (((safe_mod_func_uint32_t_u_u(g_93, (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s((3L >= p_32), g_20)))), g_93)))) && p_33) && 1UL)))) ^ p_33) < (*l_217)) , g_93)) , 0x0B42D0F6L), 0L)) , g_108) & g_20)) & (-7L));
                    }
                    (*l_217) = (*l_217);
                    (*l_217) = (safe_add_func_uint16_t_u_u(func_50(l_301, l_279, (*l_247), ((safe_add_func_int16_t_s_s(((func_40((p_33 , (((*l_217) , &l_217) != ((((void*)0 == l_273) , func_58(p_32, (*l_217), p_32)) , (*l_277))))) | p_31) || g_108), 65535UL)) | p_31), p_32), l_304));
                }
                else
                {
                    (*l_247) = (g_20 && 1L);
                }
            }
            else
            {
                unsigned char l_311 = 250UL;
                (*l_247) = (((func_40(p_33) & (p_33 , (safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((((g_131 , ((0L >= p_31) , g_116)) , (safe_mul_func_uint16_t_u_u((g_108 && (~g_131)), l_311))) , g_116), g_131)) || g_131) & g_131), (*l_247))))) < p_31) ^ 0x98DAL);
                if (((p_32 && g_131) , (*l_217)))
                {
                    int **l_314 = &l_247;
                    if ((+(!p_33)))
                    {
                        short l_320 = 0xAB12L;
                        (*l_247) = (safe_sub_func_uint16_t_u_u(p_31, (((((((l_314 != (void*)0) , (safe_add_func_int32_t_s_s((g_317 == (void*)0), (safe_mod_func_int32_t_s_s(p_33, (**l_314)))))) <= func_58(((*l_217) < func_58(func_40(p_32), g_116, p_32)), l_320, l_311)) > g_108) < g_20) ^ 8L) && g_93)));
                        (*g_81) = (*g_81);
                    }
                    else
                    {
                        (*l_217) = (*l_217);
                        return p_31;
                    }
                }
                else
                {
                    (*l_247) = p_32;
                }
            }
            for (g_116 = 0; (g_116 <= 18); g_116 = safe_add_func_int8_t_s_s(g_116, 6))
            {
                (*g_317) = 0xE0859B87L;
                if (p_31)
                    break;
                (*g_81) = (*g_81);
            }
            (*g_81) = (void*)0;
        }
        for (g_131 = 28; (g_131 >= 19); g_131 = safe_sub_func_int32_t_s_s(g_131, 1))
        {
            int l_329 = 0x3E4EA625L;
            unsigned char l_344 = 0xC8L;
            if ((safe_mul_func_uint16_t_u_u(0x1D60L, 65534UL)))
            {
                unsigned l_332 = 0x6A29B00BL;
                (*l_217) = ((void*)0 != &l_278);
                for (p_32 = 0; (p_32 == 24); p_32 = safe_add_func_int16_t_s_s(p_32, 9))
                {
                    (*l_217) = l_329;
                    l_332 = (safe_mod_func_int8_t_s_s(p_33, (*l_217)));
                    if (p_33)
                        continue;
                    if (l_332)
                        break;
                }
            }
            else
            {
                const unsigned l_349 = 1UL;
                if (p_31)
                    break;
                if ((safe_add_func_uint32_t_u_u(((0xC3FEE604L > (*l_217)) == (~(*l_217))), (p_33 & p_32))))
                {
                    int *l_335 = &g_131;
                    (*g_81) = l_335;
                    for (p_32 = 27; (p_32 != 1); p_32--)
                    {
                        (*g_81) = (*g_81);
                    }
                    if ((g_20 <= ((*l_247) | (safe_add_func_int16_t_s_s(g_131, ((g_20 && p_32) & 1L))))))
                    {
                        (*g_81) = &l_304;
                        if (g_116)
                            goto lbl_340;
                        (*g_317) = 0xA64952B1L;
                    }
                    else
                    {
                        return l_329;
                    }
                }
                else
                {
                    unsigned l_343 = 0xF1A5E73EL;
                    (*g_317) = ((g_20 ^ (func_58(g_131, g_20, p_32) ^ (*g_317))) > ((safe_mul_func_uint16_t_u_u(p_32, ((((p_31 || l_343) | 0x26L) | l_344) && 0x3FA161EEL))) | p_33));
                    for (g_108 = 0; (g_108 < 29); ++g_108)
                    {
                        unsigned short l_350 = 3UL;
                        (*g_81) = (*g_81);
                        (*l_247) = ((safe_sub_func_int8_t_s_s((l_349 , g_131), 0x4AL)) && l_350);
                        if (g_93)
                            goto lbl_351;
                    }
                }
                return (*l_217);
            }
            if ((safe_lshift_func_uint16_t_u_u(0x467AL, 3)))
            {
                int *l_354 = &g_93;
                (*g_81) = l_354;
            }
            else
            {
                unsigned l_362 = 0xE3A75C54L;
                int *l_368 = &g_131;
                for (p_32 = 0; (p_32 != 15); p_32 = safe_add_func_int8_t_s_s(p_32, 1))
                {
                    const int *l_357 = &l_304;
                    if (((((void*)0 != &g_82) , (void*)0) != &g_82))
                    {
                        l_357 = (*g_81);
                        (*g_317) = p_31;
                        (*g_81) = &l_304;
                        (*l_217) = 1L;
                    }
                    else
                    {
                        if (g_108)
                            goto lbl_340;
                        (*g_317) = (*g_317);
                    }
                }
                (*g_317) = ((((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(1L, g_20)) , ((!func_58(p_31, g_93, l_362)) & (safe_add_func_uint16_t_u_u(((p_33 , (safe_mod_func_int8_t_s_s((((p_31 , p_31) & p_31) < 0x6B46L), 0xA6L))) != 0x71L), g_93)))), 0xB1BB6D1EL)) | l_367) , g_20) , p_33);
                l_368 = l_368;
                for (p_32 = 0; (p_32 != 3); p_32 = safe_add_func_int32_t_s_s(p_32, 6))
                {
                    (*l_217) = (((safe_mul_func_int16_t_s_s((l_344 | ((*l_217) , (g_93 , 0x3AA0L))), (0xEAA7AA2BL & ((safe_lshift_func_int8_t_s_u(((((-9L) > g_116) , (safe_mul_func_int8_t_s_s(((*l_217) & func_58((*l_217), p_33, g_116)), 0x8CL))) || p_31), g_116)) || g_131)))) != g_108) && g_108);
                }
            }
        }
        for (g_131 = 0; (g_131 <= (-16)); --g_131)
        {
            int *l_379 = &l_304;
            (*g_81) = l_379;
        }
    }
    return g_20;
}







static unsigned short func_34(unsigned p_35, unsigned char p_36, char p_37, unsigned p_38, int p_39)
{
    for (g_116 = 0; (g_116 > 12); g_116 = safe_add_func_int8_t_s_s(g_116, 5))
    {
        int *l_216 = &g_93;
        for (g_108 = 0; (g_108 > 39); g_108++)
        {
            return g_116;
        }
        (*l_216) = 0L;
        if (p_39)
            break;
    }
    return g_108;
}







static int func_40(char p_41)
{
    int *l_197 = (void*)0;
    int **l_196 = &l_197;
    int l_200 = (-8L);
    int *l_211 = &g_93;
    (*g_81) = (*g_81);
    (*l_196) = (((!((safe_mod_func_int8_t_s_s((-10L), func_58(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(((((void*)0 != (*g_81)) , ((void*)0 != l_196)) != p_41), g_20)) ^ (safe_mul_func_int16_t_s_s(p_41, p_41))), 7)), l_200)) , g_116), g_93, g_20))) || l_200)) , g_93) , (void*)0);
    (*l_211) = ((((safe_add_func_uint32_t_u_u(g_131, (((((((void*)0 == &l_197) , (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(func_58(p_41, ((safe_add_func_int16_t_s_s(p_41, (safe_mul_func_int8_t_s_s(g_116, 5UL)))) , (251UL || g_108)), l_200), g_93)) , g_108) , p_41), p_41))) | g_116) & 65535UL) , (*g_81)) != (void*)0))) , g_20) <= p_41) | 0x48171D36L);
    (*g_81) = (void*)0;
    return (*l_211);
}







static char func_42(unsigned p_43, unsigned char p_44, unsigned short p_45, short p_46, unsigned char p_47)
{
    int *l_186 = &g_131;
    for (p_43 = 0; (p_43 >= 32); ++p_43)
    {
        unsigned short l_183 = 0x4C5EL;
        int *l_187 = &g_116;
        (*l_186) = (func_58((p_43 < (l_183 >= (+(g_20 , ((safe_rshift_func_uint16_t_u_s(g_116, (g_131 >= ((l_186 != l_187) > (((g_20 , &g_81) != (void*)0) ^ g_108))))) | (*l_186)))))), g_131, g_108) ^ p_43);
    }
    return g_116;
}







static unsigned func_50(short p_51, const short p_52, unsigned p_53, int p_54, char p_55)
{
    int *l_92 = &g_93;
    int **l_149 = (void*)0;
    int ***l_148 = &l_149;
    int *** const l_151 = &l_149;
    int *l_179 = &g_116;
    for (p_53 = 25; (p_53 <= 27); p_53 = safe_add_func_uint8_t_u_u(p_53, 1))
    {
        unsigned short l_97 = 0xED1EL;
        int * const l_128 = &g_116;
        unsigned short l_150 = 0xD168L;
        int l_174 = 1L;
        if (p_55)
            break;
        for (p_55 = 0; (p_55 <= 27); p_55++)
        {
            unsigned char l_105 = 0x36L;
            unsigned short l_112 = 0x77BCL;
            int *l_119 = (void*)0;
            (*g_81) = (*g_81);
            for (p_54 = (-26); (p_54 > 9); ++p_54)
            {
                int *l_94 = &g_93;
                for (p_51 = 0; (p_51 == (-20)); p_51 = safe_sub_func_int32_t_s_s(p_51, 8))
                {
                    return p_52;
                }
                l_92 = (void*)0;
                (*l_94) = p_53;
            }
            if (((safe_sub_func_int32_t_s_s((-2L), 0x77871239L)) | (p_51 >= l_97)))
            {
                int *l_98 = &g_93;
                if (p_53)
                    break;
                (*g_81) = (*g_81);
                (*l_98) = ((void*)0 == &g_81);
            }
            else
            {
                int **l_101 = (void*)0;
                for (p_51 = 0; (p_51 == 7); ++p_51)
                {
                    int ***l_102 = &l_101;
                    (*l_102) = l_101;
                    for (g_93 = (-1); (g_93 >= (-16)); --g_93)
                    {
                        char l_111 = 0x18L;
                        int *l_115 = &g_116;
                        (*g_81) = (*g_81);
                        g_108 = ((l_105 >= g_93) < ((0L == (safe_sub_func_uint16_t_u_u((p_55 != 246UL), 0x6374L))) , g_20));
                        (*l_115) = (p_52 , ((g_93 , (((((safe_lshift_func_uint8_t_u_u(((p_51 <= func_58(g_108, l_111, (l_112 != p_52))) && ((safe_rshift_func_uint8_t_u_u((!p_55), g_108)) != 0x96D0L)), l_111)) != p_51) < g_108) || 0xEDL) | p_51)) , p_54));
                    }
                    for (l_97 = 20; (l_97 != 44); l_97++)
                    {
                        (*g_81) = l_119;
                        (*l_128) = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(4UL, ((safe_mod_func_uint32_t_u_u((2UL > g_116), (safe_mul_func_int16_t_s_s(((void*)0 != l_128), (p_54 , (safe_sub_func_uint32_t_u_u(g_116, p_54))))))) ^ g_20))), 0x040EEAA4L));
                        (*g_81) = (*g_81);
                        if (g_93)
                            continue;
                    }
                    if (g_131)
                        continue;
                }
            }
            if ((g_20 , (((func_58(g_93, ((safe_mul_func_uint16_t_u_u(((((((((((safe_mod_func_int32_t_s_s(p_52, ((safe_rshift_func_uint16_t_u_u(0x1657L, 11)) , func_58(g_131, ((!(func_58(((safe_lshift_func_int16_t_s_u((p_54 != p_51), 14)) , (((((safe_mul_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s((p_51 > ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((+(((~((p_52 > g_131) || (*l_128))) , p_54) > (-8L))), 1UL)) == g_20), g_108)) , g_93)), g_116)) , &g_82) != &g_82) <= 0xBDEDL) || g_108), g_131)) , &g_82) != &l_128) && (*l_128)) , g_93)), p_51, p_55) <= 1L)) <= p_52), g_116)))) , &l_128) != &l_92) | 0x646EL) >= (*l_128)) & g_108) ^ 0xFAL) , (void*)0) == l_148) > l_150), p_53)) & p_55), (*l_128)) , l_151) == (void*)0) , p_51)))
            {
                int l_156 = (-1L);
                (*l_128) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((&g_82 != (void*)0), p_52)), 5));
                l_156 = p_55;
                if (p_51)
                    break;
            }
            else
            {
                (*l_128) = 0xD08C10FDL;
            }
        }
        for (g_108 = 0; (g_108 >= 1); g_108 = safe_add_func_uint32_t_u_u(g_108, 5))
        {
            unsigned short l_165 = 1UL;
            int **l_178 = &l_92;
            (*l_128) = ((~(((((void*)0 != (*g_81)) == g_108) , (safe_add_func_uint16_t_u_u(p_54, (((safe_add_func_int32_t_s_s((p_51 , func_58(p_55, (*l_128), ((*l_128) , (safe_sub_func_int32_t_s_s((g_108 == g_93), g_116))))), p_55)) >= l_165) < g_20)))) & g_116)) , p_53);
            (*l_128) = l_165;
            (*g_81) = (*g_81);
            if ((safe_mod_func_int16_t_s_s(p_54, g_93)))
            {
                short l_177 = 1L;
                (*l_128) = ((safe_mod_func_int8_t_s_s((p_53 , (safe_rshift_func_uint8_t_u_u(0xB0L, (safe_rshift_func_uint16_t_u_s((l_128 != (*g_81)), 11))))), ((l_174 , (safe_rshift_func_int8_t_s_s(l_165, (((-4L) >= (((l_177 , &l_174) != (void*)0) | 4294967288UL)) >= g_131)))) & l_177))) < l_177);
            }
            else
            {
                (*l_148) = l_178;
            }
        }
    }
    (*g_81) = (*g_81);
    (*g_81) = (*g_81);
    (*l_179) = p_53;
    return g_131;
}







static int func_58(unsigned char p_59, int p_60, int p_61)
{
    const unsigned l_64 = 4294967295UL;
    int l_65 = 1L;
    int *l_66 = &l_65;
    char l_80 = 4L;
    const int ***l_83 = &g_81;
    (*l_66) = ((g_20 && g_20) > ((~p_60) , (safe_mod_func_int32_t_s_s((l_64 ^ l_64), l_65))));
    (*l_66) = (safe_mod_func_uint16_t_u_u(0xB1C2L, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(p_59, 6)), (safe_rshift_func_int16_t_s_s(g_20, ((((safe_rshift_func_uint8_t_u_s((((safe_unary_minus_func_int16_t_s((*l_66))) , (p_61 | ((((((0xC9060546L >= 0x3B72B46FL) , ((*l_66) == g_20)) , 0x18L) < p_59) >= p_61) != p_61))) >= 0xAFFF74B7L), 7)) , g_20) >= 0x1AL) || 0x8CL)))))));
    (*l_83) = (p_59 , ((safe_add_func_int16_t_s_s(p_61, l_80)) , g_81));
    return g_20;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_860, "g_860", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
