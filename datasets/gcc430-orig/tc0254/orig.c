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



static int g_7 = 0L;
static unsigned g_17 = 4294967289UL;
static int g_59 = 0x66B3883FL;
static char g_82 = 0x17L;
static unsigned g_94 = 4294967289UL;
static unsigned char g_98 = 0x1BL;
static int ** const g_113 = (void*)0;
static int *g_115 = &g_59;
static int **g_114 = &g_115;
static unsigned char g_143 = 0x08L;
static short g_156 = 3L;
static int g_157 = 0xCBD1ED58L;
static unsigned **g_177 = (void*)0;
static unsigned char *g_188 = (void*)0;
static unsigned char **g_187 = &g_188;
static const unsigned char g_191 = 0xB5L;
static unsigned g_209 = 4294967295UL;
static const unsigned *g_307 = &g_17;
static const unsigned **g_306 = &g_307;
static const short g_328 = (-1L);
static const short *g_327 = &g_328;
static unsigned g_404 = 0x6384A5B2L;
static short *g_432 = &g_156;
static short **g_431 = &g_432;
static short g_443 = (-3L);
static unsigned *g_446 = (void*)0;
static unsigned short g_481 = 0UL;
static unsigned short g_512 = 6UL;
static short *g_557 = &g_156;
static char g_664 = (-8L);
static unsigned char g_681 = 0xDAL;
static int *g_721 = (void*)0;
static int g_731 = 0x8C225DE8L;
static const unsigned short *g_746 = &g_512;
static const unsigned short **g_745 = &g_746;
static unsigned char ***g_755 = (void*)0;
static int *g_771 = &g_7;
static short ****g_790 = (void*)0;
static unsigned char g_828 = 0x4EL;
static unsigned g_884 = 0x677E7806L;



static int func_1(void);
static unsigned short func_3(unsigned char p_4, int p_5, const unsigned char p_6);
static int * func_18(unsigned p_19, unsigned * p_20, unsigned * p_21, unsigned short p_22);
static short func_25(int * p_26, unsigned short p_27);
static int * func_28(unsigned p_29);
static unsigned func_34(short p_35, unsigned * p_36);
static unsigned * func_37(const int p_38, unsigned * p_39, unsigned * p_40, char p_41);
static unsigned * func_42(unsigned p_43, unsigned * p_44, int * p_45, unsigned p_46);
static int * func_48(int p_49, int * p_50, const unsigned char p_51, int p_52);
static int * func_53(unsigned * p_54, unsigned * const p_55, int * p_56, int * p_57);
static int func_1(void)
{
    unsigned short l_10 = 65535UL;
    int l_13 = (-2L);
    int l_14 = 0xFA8F90A3L;
    unsigned *l_15 = (void*)0;
    unsigned *l_16 = &g_17;
    int *l_877 = &g_59;
    unsigned short l_880 = 0x1829L;
    unsigned *l_883 = &g_884;
    unsigned char l_885 = 252UL;
    (*l_877) = (~((*g_771) = ((safe_unary_minus_func_uint16_t_u(func_3(g_7, (l_10 = (safe_sub_func_uint32_t_u_u((0x5A60L & g_7), 0x5B7F37C0L))), (((safe_sub_func_uint32_t_u_u(l_13, ((*l_16) = l_14))) && g_17) <= 0xF23E93D0L)))) || (*g_746))));
    (*g_771) = (*l_877);
    (*l_877) = ((*g_771) = 0x4A583837L);
    if (((*g_307) >= ((safe_div_func_uint8_t_u_u((*l_877), l_880)) | (0xD33DL <= ((0x33L > (((*g_771) = (((*l_883) = 3UL) != (*l_877))) == l_885)) & ((**g_745) < (*l_877)))))))
    {
        int *l_886 = &g_59;
        l_877 = l_886;
        return (*g_771);
    }
    else
    {
        unsigned char **l_887 = (void*)0;
        unsigned char ***l_888 = &l_887;
        (*l_888) = l_887;
        (*l_888) = &g_188;
        (*l_877) = ((*g_432) > (**g_431));
    }
    return (*l_877);
}







static unsigned short func_3(unsigned char p_4, int p_5, const unsigned char p_6)
{
    unsigned *l_47 = &g_17;
    int l_444 = 0xD1CA6563L;
    unsigned char *l_638 = &g_98;
    int *l_855 = &g_157;
    int l_856 = 0xE98D283FL;
    short *****l_859 = &g_790;
    unsigned short *l_863 = &g_481;
    unsigned short **l_862 = &l_863;
    unsigned short ***l_861 = &l_862;
    unsigned char *l_868 = &g_681;
    unsigned char *l_870 = &g_98;
    unsigned short l_876 = 0x2418L;
    l_855 = func_18((safe_lshift_func_uint8_t_u_u((1UL == (((((func_25(func_28(((*l_47) = ((((safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((~((*l_638) = (0L != func_34(p_5, func_37(p_4, func_42(g_17, l_47, func_48(p_6, func_53(&g_17, &g_17, &g_7, l_47), g_17, p_6), g_17), l_47, l_444))))), 0xA3L)) > l_444), p_6)) != g_328) > 0UL) < g_328))), g_328) | p_6) ^ l_444) ^ l_444) | p_6) || l_444)), 7)), l_47, l_47, p_6);
    (*l_855) = l_856;
    if ((p_4 | (g_7 < (((*g_307) == p_5) | (l_859 == l_859)))))
    {
        int **l_860 = &l_855;
        unsigned char **l_869 = &l_638;
        (*l_860) = func_28(((*l_47) = p_6));
        (*g_771) = (+((p_6 & (((((void*)0 != l_861) != l_856) >= func_25((*l_860), ((~((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((**g_431) = (*g_432)) != p_5), 0x7377L)), p_5)) && (**g_745))) == 0x3ED23AEFL))) || p_6)) == p_6));
    }
    else
    {
        int *l_873 = (void*)0;
        int **l_874 = (void*)0;
        int **l_875 = &l_873;
        (*l_875) = l_873;
    }
    l_856 = l_876;
    return p_4;
}







static int * func_18(unsigned p_19, unsigned * p_20, unsigned * p_21, unsigned short p_22)
{
    char l_680 = 1L;
    unsigned *l_698 = &g_94;
    unsigned char *l_728 = &g_143;
    int l_732 = (-1L);
    short ***l_742 = &g_431;
    short *** const * const l_741 = &l_742;
    int *l_749 = &g_59;
    unsigned char ***l_754 = &g_187;
    int **l_854 = &g_721;
    if ((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_19, l_680)), g_681)))
    {
        int l_686 = (-1L);
        const unsigned *l_706 = &g_94;
        short l_724 = 0xE26AL;
        int *l_735 = (void*)0;
        int *l_736 = &g_157;
        for (g_664 = 16; (g_664 >= (-6)); g_664--)
        {
            unsigned l_718 = 0xC174661CL;
            short **l_729 = &g_432;
            if ((safe_lshift_func_int16_t_s_u(l_686, 10)))
            {
                if (p_19)
                    break;
                l_686 = (safe_rshift_func_uint16_t_u_u(g_82, 11));
            }
            else
            {
                unsigned l_717 = 0xD3B14C19L;
                int l_719 = 0L;
                for (g_443 = 0; (g_443 != 17); g_443++)
                {
                    int *l_696 = &g_59;
                    char *l_709 = &g_82;
                    char **l_708 = &l_709;
                    for (l_680 = 0; (l_680 >= 1); l_680 = safe_add_func_int8_t_s_s(l_680, 5))
                    {
                        int *l_693 = &l_686;
                        int **l_694 = &g_115;
                        (*l_693) = (0UL == 0x1AF7C589L);
                        (*l_694) = l_693;
                    }
                    if (p_22)
                    {
                        int **l_695 = &g_115;
                        (*l_695) = &l_686;
                        return l_696;
                    }
                    else
                    {
                        int **l_697 = &l_696;
                        int **** const l_699 = (void*)0;
                        (*l_697) = l_696;
                        (*l_697) = &l_686;
                        if (l_680)
                            continue;
                    }
                    if (func_25(l_696, g_143))
                    {
                        const unsigned **l_707 = &g_307;
                        char ***l_710 = &l_708;
                        char **l_712 = &l_709;
                        char ***l_711 = &l_712;
                        char **l_714 = (void*)0;
                        char ***l_713 = &l_714;
                        int **l_720 = &g_115;
                        l_719 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_19, 9)), ((((*l_707) = l_706) == (void*)0) & ((((p_19 < (((*p_21) | (*p_20)) || (((*l_713) = ((*l_711) = ((*l_710) = l_708))) == (void*)0))) >= (safe_rshift_func_uint8_t_u_u(l_717, p_22))) | p_19) && l_718)))) != p_19), (*p_20)));
                        (*l_696) = l_680;
                        g_721 = ((*l_720) = &l_686);
                    }
                    else
                    {
                        short **l_730 = &g_557;
                        (*l_696) = (safe_sub_func_uint32_t_u_u((((0UL ^ l_718) ^ ((0xDF0CL && 65535UL) <= ((**l_708) = (l_724 | l_724)))) && (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((void*)0 != l_728))), p_19))), l_724));
                        (*l_696) = ((l_729 != l_730) ^ (l_724 ^ p_22));
                    }
                }
            }
            if (g_731)
                break;
        }
        l_732 = l_680;
        (*l_736) = (safe_div_func_uint16_t_u_u(((!((+0x7EB7L) & (**g_431))) | (-4L)), p_19));
        (*l_736) = ((safe_rshift_func_uint16_t_u_u((&l_732 == (l_749 = func_28((safe_mod_func_uint32_t_u_u(((-2L) > (((l_741 != (void*)0) | (safe_lshift_func_uint8_t_u_s((g_745 == (void*)0), (l_680 & func_25(p_20, (safe_rshift_func_uint8_t_u_u(((-1L) | (*g_327)), 3))))))) >= p_19)), 0x3E72F31FL))))), 5)) || (*g_432));
    }
    else
    {
        int l_772 = 1L;
        unsigned * const l_779 = (void*)0;
        short ****l_794 = &l_742;
        short **** const *l_846 = (void*)0;
        char *l_847 = (void*)0;
        char *l_848 = (void*)0;
        char *l_849 = &l_680;
        short l_850 = (-4L);
        int *l_853 = &g_59;
        for (g_443 = 0; (g_443 < (-6)); --g_443)
        {
            int *l_752 = &g_157;
            unsigned **l_803 = &g_446;
            if (func_25(l_752, (0xBBL ^ (*l_752))))
            {
                unsigned char l_766 = 249UL;
                int *l_787 = &g_731;
                int *l_796 = (void*)0;
                char *l_801 = &l_680;
                (*l_752) = ((*l_749) = 0xC26EA1E2L);
                if ((p_19 ^ func_25(p_21, p_22)))
                {
                    unsigned char ***l_753 = (void*)0;
                    int **l_773 = &g_115;
                    char l_778 = 0xC2L;
                    unsigned * const l_780 = (void*)0;
                    int *l_781 = (void*)0;
                    if (p_22)
                        break;
                    (*l_773) = func_48(((*l_749) = (l_753 == (g_755 = l_754))), &g_7, (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*l_752) = (func_25(((*l_773) = func_48(((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((~((p_19 ^ l_766) <= ((safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_22, 1L)) != (func_25(g_771, l_766) >= (-8L))), (**g_745))) != 0x6C01L))) != 0x4EL), p_19)), 3)), l_772)) != 0x095CL), p_21, p_19, p_22)), (**g_745)) == 0x1E561871L)), 0xA3FC51C5L)), l_766)), p_22);
                    (*g_115) = 0L;
                    if (((*g_771) = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((**l_773), (p_22 = l_778))), p_19))))
                    {
                        int *l_782 = &g_157;
                        (**l_773) = (!(*g_115));
                        (*l_773) = (l_782 = p_20);
                        (*g_771) = (safe_mod_func_uint8_t_u_u((p_22 != (0x3714L ^ (((func_25(func_37(p_22, func_37(g_664, l_782, func_48((*g_771), p_20, l_766, (safe_sub_func_int32_t_s_s(l_766, 9UL))), (**l_773)), l_752, p_19), p_22) >= 0x50L) > (*g_746)) <= 0xE6179690L))), p_22));
                        l_787 = &l_732;
                    }
                    else
                    {
                        short *****l_791 = (void*)0;
                        short *****l_792 = (void*)0;
                        short *****l_793 = (void*)0;
                        int *l_795 = &l_732;
                        char *l_800 = &g_82;
                        char **l_802 = &l_801;
                        unsigned ***l_804 = &g_177;
                        (*l_752) = ((((*l_800) = (safe_add_func_uint32_t_u_u(((*l_787) <= ((l_794 = g_790) != (void*)0)), (func_25((l_796 = l_795), (*g_746)) != (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(0L)), p_22)))))) | ((*l_749) = (((((*l_802) = l_801) == &g_664) <= p_19) && p_19))) >= 0xE77B94C2L);
                        (*l_773) = &l_772;
                        if (p_19)
                            break;
                        (*l_773) = func_48((*l_749), ((*l_773) = p_20), (l_803 == ((*l_804) = &p_20)), (*l_795));
                    }
                }
                else
                {
                    int *l_823 = &g_731;
                    short **l_824 = &g_557;
                    short ** const l_825 = &g_557;
                    if ((safe_add_func_uint8_t_u_u(p_22, ((safe_lshift_func_int8_t_s_u(func_25(&l_732, (*l_787)), (safe_mod_func_uint32_t_u_u(((*l_749) > ((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_772, 0)), ((((*p_20) != (safe_rshift_func_uint16_t_u_s(((*l_787) >= ((+g_59) & 0x5AL)), p_19))) && 0x7BL) ^ 7L))), g_143)) & 1UL)), l_772)))) | g_328))))
                    {
                        short *l_826 = (void*)0;
                        short *l_827 = (void*)0;
                        unsigned short *l_841 = &g_512;
                        unsigned short *l_842 = &g_481;
                        (*l_787) = 0xE3AB2A21L;
                        (*l_787) = (safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((*l_728) = func_25(func_48((*l_752), l_823, p_22, p_22), l_772)), g_98)), (((g_828 = (l_824 != l_825)) & 0x8ED0L) | 0xC8D5L)));
                        (*l_787) = (func_25(&l_732, (!((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((**g_745), p_22)), 8)) | ((*l_749) = (0x2659L && p_19))))) <= ((*g_307) != (safe_rshift_func_int8_t_s_u((((void*)0 != l_827) ^ p_22), (*l_787)))));
                        (*l_752) = ((p_19 >= (safe_add_func_int32_t_s_s(((*p_21) == ((*l_749) < 0xC4E6L)), (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((*l_842) = ((*l_841) = p_22)), (**g_431))), 7))))) <= 0UL);
                    }
                    else
                    {
                        (*l_787) = 5L;
                        (*l_823) = l_772;
                        if (p_19)
                            continue;
                        l_752 = &g_59;
                    }
                }
            }
            else
            {
                int **l_843 = &l_752;
                (*l_843) = &l_772;
                if ((*l_749))
                    break;
            }
        }
        (*l_749) = ((((+(p_22 != l_772)) <= (**g_431)) <= (safe_rshift_func_int8_t_s_s((&l_794 == (l_846 = &l_794)), (((*l_849) = ((((!p_19) == (((*l_749) || (-6L)) >= (*p_20))) ^ 0x7471CA20L) == 4294967293UL)) ^ p_19)))) > l_850);
        for (g_156 = 0; (g_156 != (-5)); g_156 = safe_sub_func_uint32_t_u_u(g_156, 1))
        {
            return l_853;
        }
    }
    (*g_771) = (0x8522L == p_22);
    (*l_854) = &l_732;
    return p_21;
}







static short func_25(int * p_26, unsigned short p_27)
{
    int **l_642 = &g_115;
    int ***l_643 = &g_114;
    int ***l_644 = &g_114;
    int ***l_645 = &l_642;
    unsigned short **l_646 = (void*)0;
    unsigned short ***l_647 = (void*)0;
    unsigned short *l_650 = &g_481;
    unsigned short **l_649 = &l_650;
    unsigned short ***l_648 = &l_649;
    int l_653 = 0xB893CF23L;
    char *l_654 = &g_82;
    int *l_655 = &g_7;
    (*l_655) = ((~(safe_div_func_int8_t_s_s(g_17, g_328))) ^ ((*l_654) = ((((((*l_645) = l_642) != &g_115) ^ (l_646 == ((*l_648) = l_646))) ^ ((safe_add_func_int32_t_s_s(l_653, p_27)) == g_94)) && 0xE692L)));
    (*l_642) = func_37(p_27, l_655, l_655, p_27);
    if (p_27)
    {
        (**l_645) = p_26;
    }
    else
    {
        unsigned char l_658 = 0xC1L;
        char * const l_663 = &g_664;
        char * const *l_662 = &l_663;
        char * const **l_661 = &l_662;
        int l_667 = (-8L);
        char **l_668 = &l_654;
        unsigned *l_672 = &g_94;
        if ((safe_add_func_uint32_t_u_u(l_658, ((-2L) > (safe_rshift_func_uint16_t_u_u(((((((*l_661) = &l_654) == &l_654) > (*l_655)) > (((((safe_mod_func_int16_t_s_s(((**g_431) = (l_667 | (&g_664 == ((*l_668) = &g_664)))), (safe_rshift_func_int8_t_s_u(g_404, 3)))) != p_27) != p_27) || p_27) | l_658)) <= 0x4831C160L), 7))))))
        {
            unsigned l_671 = 0xFD64D53EL;
            l_671 = g_512;
            (*l_642) = p_26;
        }
        else
        {
            unsigned **l_673 = &g_446;
            int l_674 = (-1L);
            int *l_675 = &g_157;
            (**l_645) = (*l_642);
            (*l_675) = (((**g_431) < l_674) == ((*l_655) = ((&g_115 != (void*)0) > l_674)));
        }
        return p_27;
    }
    return (*g_432);
}







static int * func_28(unsigned p_29)
{
    int *l_639 = (void*)0;
    return l_639;
}







static unsigned func_34(short p_35, unsigned * p_36)
{
    unsigned char l_447 = 0x88L;
    int ***l_464 = &g_114;
    unsigned short * const *l_499 = (void*)0;
    short ***l_522 = &g_431;
    unsigned *l_597 = &g_94;
    short l_609 = 2L;
    int l_613 = 0x3EB383CFL;
    int l_625 = 0xB147C340L;
    int *l_634 = &g_59;
    int l_637 = 5L;
    if (p_35)
    {
        const unsigned l_450 = 4294967286UL;
        int ** const * const l_461 = &g_114;
        unsigned *l_478 = &g_17;
        short l_485 = 0x710EL;
        unsigned short *l_498 = &g_481;
        unsigned short **l_497 = &l_498;
        unsigned ***l_517 = (void*)0;
        int *l_521 = &g_157;
        if ((1UL && l_447))
        {
            const int * const l_459 = &g_7;
            const int * const *l_458 = &l_459;
            const int * const **l_457 = &l_458;
            const int * const ***l_460 = &l_457;
            unsigned short l_462 = 0x9A3FL;
            int *l_463 = &g_59;
            int l_486 = 8L;
            int l_487 = 0x1DF06D25L;
            unsigned ***l_516 = &g_177;
            if ((safe_lshift_func_int16_t_s_s((l_450 || 0x1C3F769CL), (safe_sub_func_int8_t_s_s((l_450 < (0xFACAL || (l_462 = (safe_div_func_uint32_t_u_u((l_447 || ((safe_div_func_int16_t_s_s(((((((*l_460) = l_457) != l_461) < p_35) & (p_35 >= 3L)) <= l_447), p_35)) >= (*g_432))), l_447))))), l_450)))))
            {
                int ***l_466 = (void*)0;
                int ****l_465 = &l_466;
                l_463 = (void*)0;
                if (((l_464 != ((*l_465) = l_464)) <= (*g_307)))
                {
                    const int * const l_467 = &g_7;
                    const int *l_469 = &g_59;
                    const int **l_468 = &l_469;
                    int l_473 = 0xAD086198L;
                    (*l_468) = l_467;
                    for (l_462 = 0; (l_462 >= 14); l_462++)
                    {
                        int *l_472 = (void*)0;
                        l_472 = l_472;
                    }
                    l_473 = (***l_457);
                }
                else
                {
                    for (l_462 = 0; (l_462 == 52); l_462 = safe_add_func_int32_t_s_s(l_462, 5))
                    {
                        unsigned **l_479 = &g_446;
                        unsigned short *l_480 = &g_481;
                        int *l_482 = &g_59;
                        (*l_482) = (safe_rshift_func_uint16_t_u_u(((*l_480) = (l_463 != ((*l_479) = (l_478 = p_36)))), 7));
                        (*l_482) = (*l_482);
                    }
                }
                for (g_59 = 0; (g_59 <= (-13)); --g_59)
                {
                    int *l_488 = &l_487;
                    short **l_495 = &g_432;
                    short * const *l_496 = (void*)0;
                    l_486 = l_485;
                    (*l_488) = l_487;
                    (*l_488) = (safe_lshift_func_int16_t_s_s((4294967295UL <= (safe_rshift_func_uint8_t_u_s(p_35, (safe_rshift_func_int16_t_s_s((*l_488), 11))))), ((**g_431) = (((l_495 = &g_432) != l_496) > (l_497 != l_499)))));
                }
                for (g_143 = 19; (g_143 >= 37); g_143++)
                {
                    g_115 = p_36;
                }
            }
            else
            {
                int **l_502 = &l_463;
                const int l_505 = 0xD62FCB4EL;
                unsigned char *l_513 = &l_447;
                int *l_514 = &l_486;
                unsigned l_515 = 1UL;
                unsigned l_518 = 0x620321E0L;
                (*l_502) = p_36;
                (*l_502) = (*l_502);
                (*l_502) = func_48(l_515, p_36, (l_516 != (l_517 = &g_177)), p_35);
                (*l_463) = l_518;
            }
        }
        else
        {
            g_157 = (safe_mod_func_int8_t_s_s(g_328, (-9L)));
            l_521 = p_36;
        }
    }
    else
    {
        short ** const *l_523 = &g_431;
        short ** const **l_524 = &l_523;
        int l_533 = (-6L);
        char * const l_536 = &g_82;
        int *l_545 = (void*)0;
        const char l_570 = 1L;
        unsigned char **l_614 = (void*)0;
        unsigned char **l_617 = &g_188;
        if ((l_522 == ((*l_524) = l_523)))
        {
            unsigned short l_539 = 0x7E63L;
            unsigned short *l_540 = (void*)0;
            unsigned short *l_541 = &g_481;
            int *l_542 = &g_59;
            (*l_542) = ((p_35 >= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(((((safe_add_func_int16_t_s_s((((*g_432) = (l_533 && ((*l_541) = (l_533 = (safe_div_func_uint16_t_u_u(((((*l_536) = ((l_533 <= g_17) || ((void*)0 != l_536))) > (!g_512)) >= (p_35 | (safe_div_func_int32_t_s_s(l_539, p_35)))), l_533)))))) && 0x7049L), p_35)) != p_35) <= l_539) > g_443), 1L)) == l_539), 5)), p_35))) & (-7L));
            g_115 = &l_533;
            for (g_94 = 28; (g_94 <= 11); --g_94)
            {
                l_545 = (void*)0;
            }
            for (p_35 = 0; (p_35 > (-26)); p_35--)
            {
                int **l_548 = &l_545;
                (*l_548) = p_36;
                (*l_548) = p_36;
                (*g_115) = p_35;
            }
        }
        else
        {
            int l_549 = 0x16E9539AL;
            int l_552 = (-1L);
            char *l_572 = (void*)0;
            char **l_571 = &l_572;
            const unsigned ***l_576 = &g_306;
            short l_579 = 1L;
            l_549 = p_35;
            if ((safe_mod_func_int16_t_s_s(l_549, l_552)))
            {
                int *l_558 = (void*)0;
                int *l_559 = &g_7;
                (*l_559) = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0xBDL, ((((**l_522) = (**l_522)) == (g_557 = (void*)0)) ^ p_35))), 0x0541L)) ^ 3UL);
                for (g_443 = 0; (g_443 == 20); g_443++)
                {
                    short l_564 = 1L;
                    for (g_209 = 0; (g_209 != 52); g_209++)
                    {
                        return l_564;
                    }
                }
                l_549 = p_35;
                if ((safe_lshift_func_int16_t_s_s((*g_327), (*l_559))))
                {
                    int l_567 = 3L;
                    (*l_559) = 0x4A8A4F5FL;
                    (*l_559) = l_567;
                }
                else
                {
                    char l_580 = (-2L);
                    if ((safe_rshift_func_uint8_t_u_s(p_35, l_570)))
                    {
                        char ***l_573 = &l_571;
                        int l_583 = (-1L);
                        unsigned *l_584 = &g_94;
                        (*l_559) = p_35;
                        (*l_573) = l_571;
                        (*l_559) = (((void*)0 != l_576) && ((g_209 | (safe_add_func_uint32_t_u_u((*g_307), l_579))) < (l_580 | ((safe_add_func_int32_t_s_s(l_583, ((*l_584) = l_583))) > (safe_mod_func_int8_t_s_s(((-3L) | g_328), l_580))))));
                        return l_552;
                    }
                    else
                    {
                        int l_587 = 0L;
                        (*l_464) = &l_545;
                        return l_587;
                    }
                }
            }
            else
            {
                unsigned *l_595 = &g_94;
                int *l_596 = &l_533;
                int **l_601 = &g_115;
                for (l_447 = 0; (l_447 <= 37); l_447++)
                {
                    unsigned *l_590 = &g_94;
                    int *l_591 = &g_7;
                    l_591 = &l_533;
                    for (g_82 = 0; (g_82 > (-11)); g_82 = safe_sub_func_int8_t_s_s(g_82, 4))
                    {
                        int *l_594 = &g_7;
                        l_594 = &l_533;
                        if (p_35)
                            break;
                        l_596 = func_37(g_94, l_595, p_36, (*l_591));
                    }
                }
                l_596 = func_37(g_17, func_53(l_597, l_545, &l_533, &l_533), p_36, p_35);
                for (l_552 = 0; (l_552 <= 25); l_552++)
                {
                    int **l_600 = &l_545;
                    (*l_600) = &l_533;
                    return (*g_307);
                }
                (*l_601) = l_595;
            }
        }
        for (g_157 = 0; (g_157 <= 26); ++g_157)
        {
            int **l_606 = &g_115;
            if ((safe_div_func_int16_t_s_s((l_606 == &l_545), ((((*l_536) = (!g_157)) | (safe_div_func_uint16_t_u_u(p_35, 1L))) | (l_609 ^ ((+((p_35 && 0xF105L) | (((safe_sub_func_int32_t_s_s(p_35, (*g_307))) <= g_7) < 4294967288UL))) > 0xB7FCL))))))
            {
                char l_612 = 0x9AL;
                unsigned char ***l_615 = &l_614;
                unsigned char ***l_616 = &g_187;
                int *l_618 = &g_59;
                unsigned short *l_628 = &g_512;
                (*l_464) = (void*)0;
                l_613 = ((l_612 = (((*l_597) = l_570) > (*g_307))) & p_35);
                (*l_618) = (g_82 == (((*l_616) = ((*l_615) = l_614)) != l_617));
                (*l_618) = (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((0x378DL <= p_35), (safe_sub_func_int32_t_s_s(l_625, 0x9AF9E6DFL)))), (safe_rshift_func_uint16_t_u_s(((*l_628) = p_35), (*l_618)))));
            }
            else
            {
                int *l_633 = &g_7;
                l_634 = func_48((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(l_533, (l_570 && (p_35 <= g_443)))), g_17)), l_633, (*l_633), g_512);
                (*l_633) = ((*l_633) < ((void*)0 == &g_431));
                (*l_606) = p_36;
            }
        }
    }
    for (g_82 = 0; (g_82 <= (-30)); g_82 = safe_sub_func_int16_t_s_s(g_82, 6))
    {
        return p_35;
    }
    return l_637;
}







static unsigned * func_37(const int p_38, unsigned * p_39, unsigned * p_40, char p_41)
{
    int *l_445 = &g_157;
    (*l_445) = 6L;
    return g_446;
}







static unsigned * func_42(unsigned p_43, unsigned * p_44, int * p_45, unsigned p_46)
{
    char l_78 = 0x28L;
    int l_79 = 0x9BDD1892L;
    char *l_80 = (void*)0;
    char *l_81 = &g_82;
    const unsigned *l_85 = &g_17;
    unsigned *l_96 = &g_94;
    int * const *l_121 = &g_115;
    unsigned short l_133 = 1UL;
    unsigned **l_178 = &l_96;
    unsigned * const l_180 = &g_94;
    short *l_196 = &g_156;
    int *l_282 = &g_7;
    unsigned *l_283 = (void*)0;
    unsigned *l_338 = &g_94;
    unsigned l_438 = 0x63558F21L;
    if ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(0xC9L, (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((l_78 ^ 1L) && l_78) || ((void*)0 == p_45)), (((*l_81) = (l_79 = 0x83L)) && ((safe_add_func_int16_t_s_s(((l_85 == l_85) != g_17), p_43)) & (*p_45))))), l_78)))) >= l_78), p_43)), g_17)), g_17)))
    {
        short l_90 = 0x1A4AL;
        const unsigned *l_93 = &g_94;
        const unsigned **l_95 = &l_85;
        unsigned char *l_97 = &g_98;
        unsigned short l_106 = 0x8BDCL;
        int l_132 = (-3L);
        short *l_152 = (void*)0;
        short *l_153 = &l_90;
        short *l_154 = (void*)0;
        short *l_155 = &g_156;
        unsigned *l_179 = &g_94;
        if ((((*p_45) = ((safe_mod_func_uint8_t_u_u((l_79 == ((safe_sub_func_uint32_t_u_u(((*p_44) = l_90), 0L)) == p_43)), ((*l_97) = (safe_add_func_int32_t_s_s(((+p_43) != (g_82 == (((*l_95) = l_93) == l_96))), (g_82 && l_78)))))) <= l_90)) != 0x4F37316AL))
        {
            const unsigned char *l_99 = (void*)0;
            int *l_101 = &g_59;
            int **l_100 = &l_101;
            int l_116 = (-1L);
            (*l_100) = func_48(g_59, p_44, (((void*)0 == l_99) < 0x2819L), g_98);
            for (g_59 = 0; (g_59 <= 17); ++g_59)
            {
                unsigned char *l_108 = &g_98;
                if ((*p_45))
                {
                    unsigned char **l_107 = &l_97;
                    g_7 = ((safe_rshift_func_uint16_t_u_s(((l_106 = p_43) && (((*l_107) = (void*)0) != l_108)), (safe_lshift_func_uint8_t_u_s((l_90 || g_59), 5)))) <= p_46);
                    for (g_17 = 0; (g_17 <= 10); g_17++)
                    {
                        (*l_100) = (void*)0;
                    }
                }
                else
                {
                    g_114 = g_113;
                }
                (*l_100) = func_48(l_116, p_44, p_43, l_79);
                for (g_17 = 26; (g_17 != 35); g_17 = safe_add_func_uint16_t_u_u(g_17, 9))
                {
                    if ((*l_101))
                        break;
                }
            }
            (**l_100) = (*l_101);
            l_79 = ((*g_115) = (safe_sub_func_uint8_t_u_u(247UL, ((*l_81) = g_94))));
        }
        else
        {
            int * const **l_122 = &l_121;
            int *l_135 = &l_132;
            int **l_134 = &l_135;
            unsigned char *l_142 = &g_143;
            l_79 = ((*g_115) = (g_7 | (((*l_122) = l_121) != (void*)0)));
            (*l_134) = ((*g_114) = func_48((**g_114), func_48((g_7 = ((safe_rshift_func_uint16_t_u_u((((+(safe_add_func_int16_t_s_s(0x5FDEL, (g_82 && p_43)))) ^ (**l_121)) || (((void*)0 == &g_98) || (l_132 = (((*l_96) = (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_s((((*l_97) = 0x7AL) ^ g_7), p_46)) ^ (*p_45))))) != (*p_45))))), p_46)) > l_133)), &l_79, (**l_121), p_46), g_82, p_43));
            (***l_122) = (252UL | ((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((*p_44), g_98)), ((*g_115) < (**g_114)))) != (safe_rshift_func_uint8_t_u_s(((*l_142) = (***l_122)), 2))));
            (*g_114) = (*g_114);
        }
        if (((((safe_mod_func_uint8_t_u_u((l_132 = (((**l_121) = ((((safe_lshift_func_int8_t_s_u(l_132, 3)) & (safe_add_func_uint32_t_u_u(0x59534E3AL, (((safe_sub_func_uint16_t_u_u(((**l_121) | ((*l_153) = (**l_121))), (g_157 = (p_46 || ((*l_155) = (0x76L <= (&l_132 == &l_132))))))) & (((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(((((void*)0 == l_121) == l_106) >= (*p_44)))), g_7)) | l_132) != 0x9B53D0E5L)) <= p_43)))) & (-1L)) <= 255UL)) && (*p_45))), p_43)) != l_133) == 0x79A8B53EL) ^ 65532UL))
        {
            (*p_45) = 0xE034D058L;
            return &g_94;
        }
        else
        {
            unsigned short l_172 = 8UL;
            int **l_181 = &g_115;
            for (g_7 = 0; (g_7 >= (-8)); g_7 = safe_sub_func_uint16_t_u_u(g_7, 7))
            {
                unsigned char l_169 = 255UL;
                const int *l_175 = &g_157;
                if ((safe_rshift_func_uint16_t_u_s((((**l_121) | (((safe_add_func_int16_t_s_s(p_46, ((l_169 = g_59) & (p_43 != (safe_mod_func_uint16_t_u_u(l_172, ((safe_mod_func_uint16_t_u_u((g_157 < p_43), g_7)) & (g_59 & l_106)))))))) & l_106) < 255UL)) == 0UL), (**l_121))))
                {
                    const int **l_176 = &l_175;
                    (*l_176) = l_175;
                    (*l_176) = &l_132;
                }
                else
                {
                    if ((*p_45))
                        break;
                    if ((*p_45))
                        continue;
                    (**l_121) = (**l_121);
                }
                l_178 = g_177;
                if (l_106)
                    break;
            }
            (*l_181) = p_44;
            return p_44;
        }
    }
    else
    {
        (*p_45) = (safe_unary_minus_func_int16_t_s(0xB179L));
    }
    (*p_45) = (*g_115);
    if ((*p_45))
    {
        return &g_94;
    }
    else
    {
        int *l_184 = &l_79;
        int **l_183 = &l_184;
        short l_268 = 0x6540L;
        unsigned *l_275 = &g_17;
        (*l_183) = ((*g_114) = p_45);
        (*g_114) = func_53(((*l_178) = (*l_178)), &g_94, &l_79, p_44);
        (**l_183) = (safe_sub_func_int32_t_s_s((*g_115), (*p_44)));
        if (((void*)0 != g_187))
        {
            int *l_189 = &l_79;
            (*g_114) = l_189;
            (*l_184) = (*p_45);
            (*l_183) = l_189;
        }
        else
        {
            const unsigned char *l_190 = &g_191;
            const unsigned char *l_193 = &g_191;
            const unsigned char **l_192 = &l_193;
            int *l_194 = &g_7;
            int **l_273 = (void*)0;
            int **l_274 = &l_194;
            int *l_276 = &g_157;
            unsigned char l_281 = 0x08L;
            if (((0xA080E1D1L >= (**l_121)) != (2L == (p_43 && (g_82 = (((*l_192) = (l_190 = l_80)) == (*g_187)))))))
            {
                unsigned char l_195 = 0x2DL;
                int l_197 = 0x7F47E08CL;
                unsigned char **l_204 = (void*)0;
                p_45 = ((*l_183) = (l_194 = ((*g_114) = p_45)));
                if (((l_195 > (l_197 = ((void*)0 != l_196))) != ((safe_lshift_func_int8_t_s_s(0x93L, 6)) | p_43)))
                {
                    return p_45;
                }
                else
                {
                    unsigned ***l_201 = &l_178;
                    (*p_45) = (safe_unary_minus_func_int32_t_s((((*l_201) = &l_96) == (void*)0)));
                    (**g_114) = (safe_mod_func_uint8_t_u_u(((l_204 != &g_188) > (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((g_209 = (**l_121)) != 4L) < (**l_121)), 5)), ((void*)0 != p_44))) || (p_46 > p_46)) & 1L)), 1UL));
                }
            }
            else
            {
                int l_212 = (-1L);
                int l_223 = (-1L);
                unsigned short *l_224 = &l_133;
                const unsigned *l_229 = &g_94;
                const short l_237 = 0x8DC3L;
                unsigned * const l_244 = &g_94;
                unsigned *l_251 = &g_17;
                (*g_114) = func_48(((*l_184) ^ (safe_mod_func_int8_t_s_s((l_212 && (safe_add_func_int32_t_s_s(0xC1894117L, (0xDAL != (safe_unary_minus_func_int16_t_s(g_59)))))), (safe_rshift_func_int16_t_s_s((*l_194), (g_156 = ((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((((*l_224) = ((l_223 = p_43) & (((0L > ((*l_180) = (*p_44))) > g_191) && 0UL))) < g_209))), 8UL)), p_43)) != 0xCAL))))))), (*g_114), p_46, p_46);
                if ((*l_194))
                {
                    int l_243 = 0xCFCA4276L;
                    unsigned l_250 = 0xE6538CD0L;
                    int *l_252 = (void*)0;
                    if (((*p_45) & 0x073B97F1L))
                    {
                        const unsigned **l_230 = &l_229;
                        char *l_231 = (void*)0;
                        char *l_232 = &l_78;
                        int l_238 = 0x9F6A1B49L;
                        (**l_121) = ((safe_div_func_int32_t_s_s(((~p_46) || (+((*l_81) = (*l_194)))), (*p_44))) < (safe_rshift_func_uint16_t_u_u((((*l_224) = (((*l_230) = l_229) != &g_94)) < (((*l_232) = 0xE6L) != (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_237, l_238)), (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(g_209, 4)), p_43)))))), 4)));
                        (*g_114) = (*g_114);
                    }
                    else
                    {
                        int l_245 = 0x6CFE17A9L;
                        int *l_246 = (void*)0;
                        int *l_247 = (void*)0;
                        int *l_248 = (void*)0;
                        int *l_249 = &l_223;
                        p_45 = func_48(l_243, (*g_114), l_250, (**l_121));
                        return p_44;
                    }
                    if (l_250)
                    {
                        (*l_184) = (0x696A6714L ^ l_237);
                        return l_184;
                    }
                    else
                    {
                        (*g_114) = l_252;
                    }
                    l_223 = (g_17 && ((p_43 | (safe_lshift_func_int8_t_s_s((*l_194), g_191))) | (*p_44)));
                }
                else
                {
                    unsigned char *l_257 = &g_98;
                    int *l_260 = (void*)0;
                    for (g_143 = 1; (g_143 == 56); g_143++)
                    {
                        return &g_94;
                    }
                    (*l_194) = (((*l_257) = p_43) > 0x39L);
                    l_260 = ((*g_114) = func_48((**g_114), (*g_114), p_43, (l_237 & (((*l_244) = (*p_44)) >= (safe_add_func_int16_t_s_s(((*l_196) = (g_17 | (((void*)0 != g_177) && g_143))), p_46))))));
                }
            }
            for (g_157 = 0; (g_157 >= (-18)); g_157 = safe_sub_func_int32_t_s_s(g_157, 3))
            {
                const int l_263 = 3L;
                (*g_114) = (void*)0;
                (*l_184) = (l_263 || (safe_sub_func_uint16_t_u_u((g_17 | 1L), ((safe_lshift_func_uint8_t_u_u(p_46, p_46)) && l_268))));
                (**l_183) = (((*l_194) && (!(safe_rshift_func_uint8_t_u_s(g_17, g_7)))) == (*l_184));
            }
            (*l_274) = (*l_121);
            l_282 = p_44;
        }
    }
    if ((*p_45))
    {
        return l_283;
    }
    else
    {
        unsigned short l_284 = 0xE260L;
        unsigned * const l_290 = &g_94;
        int *l_304 = &g_157;
        unsigned l_305 = 0x05F6503AL;
        short *l_329 = (void*)0;
        int l_407 = 0L;
        if ((*l_282))
        {
            unsigned char **l_285 = (void*)0;
            unsigned char *l_286 = &g_143;
            int l_289 = 9L;
            int **l_303 = &l_282;
            (*g_114) = func_53(func_48(l_284, ((*g_114) = p_45), (((l_285 == l_285) >= ((*l_286) = p_43)) != g_82), ((p_46 <= ((g_59 ^ (safe_rshift_func_uint8_t_u_s((0xB538L < (*l_282)), l_289))) < g_191)) == 0x27ACL)), l_290, &l_289, &l_289);
            for (g_59 = 0; (g_59 >= (-28)); g_59 = safe_sub_func_int16_t_s_s(g_59, 8))
            {
                int *l_298 = &g_157;
                for (l_133 = 0; (l_133 < 56); l_133++)
                {
                    int ***l_297 = &g_114;
                    p_45 = &l_289;
                    g_115 = func_48((safe_add_func_int32_t_s_s((**l_121), ((((*l_297) = &p_45) == (void*)0) >= (+l_289)))), &l_79, p_46, (**l_121));
                }
            }
            (*l_303) = ((*g_114) = (void*)0);
            l_304 = (*g_114);
        }
        else
        {
            const short *l_326 = &g_156;
            int l_330 = 0L;
            int *l_340 = (void*)0;
            char **l_370 = &l_81;
            if ((*p_45))
            {
                char *l_315 = &l_78;
                int l_319 = 0x43535FD6L;
                if (l_305)
                {
                    g_306 = &l_85;
                    for (g_157 = (-24); (g_157 <= (-7)); ++g_157)
                    {
                        return p_45;
                    }
                }
                else
                {
                    const unsigned l_314 = 4294967295UL;
                    char **l_316 = &l_80;
                    if ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_314, (((*l_316) = l_315) != &g_82))), (safe_mod_func_int32_t_s_s((0UL >= l_319), (safe_lshift_func_uint16_t_u_s(65534UL, (p_46 || (p_45 == (void*)0)))))))))
                    {
                        int *l_331 = &g_157;
                        (*l_304) = ((*l_282) = (safe_div_func_int8_t_s_s(((*l_315) = ((g_327 = l_326) != l_329)), 0xD8L)));
                        l_330 = (*p_45);
                        (*g_114) = p_44;
                        (*g_114) = l_331;
                    }
                    else
                    {
                        int l_332 = 0x8CB2D432L;
                        unsigned short *l_333 = &l_133;
                        int *l_339 = &g_59;
                        (*g_114) = (void*)0;
                        (*l_304) = ((0x08L != l_332) <= (((*l_333) = g_328) < (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_82 = (-1L)), 1)), p_46))));
                        (*g_114) = p_44;
                    }
                    (*p_45) = (*g_115);
                    (*l_304) = ((*l_304) || (**g_306));
                }
                (*l_282) = ((*p_45) = ((*l_304) = (*p_45)));
                (*l_304) = (*p_45);
                (*l_304) = (0xCB36B856L || ((**l_178) = (g_7 || (g_7 ^ p_43))));
            }
            else
            {
                unsigned l_345 = 0x3795DC2FL;
                for (g_82 = 0; (g_82 <= 9); g_82++)
                {
                    (*g_114) = (*g_114);
                    (*g_114) = func_48((safe_rshift_func_uint16_t_u_s(0UL, l_345)), (*g_114), (safe_lshift_func_int8_t_s_s(0L, 7)), p_43);
                    for (p_43 = 3; (p_43 == 27); p_43 = safe_add_func_uint8_t_u_u(p_43, 7))
                    {
                        (*g_115) = ((**g_114) || 4294967295UL);
                        return p_45;
                    }
                }
            }
            g_59 = (g_157 && (*l_282));
            if ((((*l_282) = (*p_45)) <= ((*l_304) = (safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(p_46, ((!(*l_304)) & ((safe_lshift_func_int8_t_s_s(p_46, 3)) < 0xB3L)))), p_43)), 1L)))))
            {
                unsigned char l_360 = 254UL;
                int l_373 = 0x2A38A6AAL;
                short l_380 = 0xBF72L;
                const short ** const l_387 = (void*)0;
                const short **l_389 = (void*)0;
                const short ***l_388 = &l_389;
                if ((+0L))
                {
                    int ***l_363 = &g_114;
                    if (((0x725DL || (((l_360 = 255UL) < (((*l_96) = (safe_rshift_func_uint16_t_u_u(g_156, (((&g_115 != ((*l_363) = &p_45)) || (safe_lshift_func_uint16_t_u_s(((~(*p_44)) || (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((((void*)0 == l_370) != (safe_mod_func_uint8_t_u_u(l_373, (*l_282)))), (***l_363))), 2))), 10))) && (*p_44))))) == (*p_45))) == 0x0EL)) && l_360))
                    {
                        return l_340;
                    }
                    else
                    {
                        (*p_45) = (safe_add_func_uint8_t_u_u(0xEAL, (0xB6L || (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(65532UL, 7L)), 9)) > 1UL) | (g_209 >= (4294967290UL & l_380))))));
                        (*l_304) = (safe_lshift_func_int8_t_s_s(g_156, 3));
                        (*l_282) = (safe_unary_minus_func_int16_t_s(0x6E77L));
                    }
                }
                else
                {
                    (*l_282) = (*p_45);
                    (*p_45) = (*p_45);
                    (*g_114) = p_45;
                }
                (*g_114) = func_53(&l_305, l_340, &l_79, ((*g_114) = (*g_114)));
                for (l_133 = 25; (l_133 < 12); l_133--)
                {
                    int *l_386 = &l_79;
                    (*g_114) = l_386;
                }
                (*l_388) = l_387;
            }
            else
            {
                unsigned short *l_392 = &l_133;
                unsigned l_401 = 0x314E4734L;
                unsigned short *l_402 = &l_284;
                char *l_403 = &l_78;
                int **l_428 = &l_304;
                if (((safe_sub_func_uint16_t_u_u(((*l_392) = p_46), g_328)) <= ((safe_rshift_func_int16_t_s_u(1L, ((g_404 = ((*l_403) = ((*l_81) = (safe_sub_func_int32_t_s_s((&p_44 == &l_290), ((safe_sub_func_int32_t_s_s((*p_45), (safe_rshift_func_int8_t_s_s(g_143, p_43)))) | ((*l_402) = (((l_401 > 0xDAL) & 1L) | 0xC1L)))))))) ^ g_98))) > (*l_282))))
                {
                    unsigned char **l_410 = &g_188;
                    int l_423 = 2L;
                    short ***l_433 = &g_431;
                    short **l_435 = &l_329;
                    short ***l_434 = &l_435;
                    if (((l_407 & ((*p_45) == (safe_rshift_func_uint8_t_u_u(p_43, 6)))) | (p_46 <= (g_156 = 0L))))
                    {
                        l_340 = (void*)0;
                        return l_340;
                    }
                    else
                    {
                        (*p_45) = (((void*)0 == l_410) == (p_46 > p_46));
                        l_423 = (safe_lshift_func_uint16_t_u_s(((0xAFL || (p_46 || (safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((*g_327), (l_401 && (safe_lshift_func_int16_t_s_u((-8L), (safe_rshift_func_uint8_t_u_s(p_46, 0))))))), (*l_304))) < 0x7CL), l_401)))) ^ 65529UL), p_43));
                        (*g_114) = (*g_114);
                    }
                    if (((**l_428) = ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((void*)0 != l_428), 14)) > (safe_sub_func_uint32_t_u_u((7UL <= (((*l_433) = g_431) != ((*l_434) = &g_432))), (safe_sub_func_int32_t_s_s((p_43 > ((p_46 & p_46) >= p_43)), l_438))))), 2)) == p_46)))
                    {
                        (*l_282) = (**l_428);
                    }
                    else
                    {
                        unsigned short **l_439 = &l_402;
                        p_45 = func_48((**l_428), (*g_114), l_330, g_17);
                        (*p_45) = (-6L);
                        (*l_282) = (l_392 != ((*l_439) = l_402));
                    }
                    for (g_404 = 0; (g_404 > 54); g_404 = safe_add_func_uint16_t_u_u(g_404, 9))
                    {
                        short *l_442 = &g_443;
                        l_423 = (((**l_435) = (*g_327)) == (p_46 & ((*l_442) = ((*l_304) = p_46))));
                        (*l_282) = ((**l_428) = (*p_45));
                    }
                    (*l_428) = (*g_114);
                }
                else
                {
                    (*g_114) = (*g_114);
                }
            }
        }
    }
    return &g_17;
}







static int * func_48(int p_49, int * p_50, const unsigned char p_51, int p_52)
{
    int *l_65 = &g_59;
    for (g_7 = 17; (g_7 < 21); g_7++)
    {
        int *l_64 = &g_59;
        p_49 = 0xCFDEF05DL;
        return l_64;
    }
    return l_65;
}







static int * func_53(unsigned * p_54, unsigned * const p_55, int * p_56, int * p_57)
{
    int *l_58 = &g_59;
    int **l_60 = (void*)0;
    int **l_61 = &l_58;
    (*l_58) = ((*p_56) = (&g_17 != p_54));
    (*l_61) = l_58;
    return p_57;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
