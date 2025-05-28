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



static int g_4 = 0xC4D8E5CCL;
static int * volatile g_3 = &g_4;
static int *g_10 = (void*)0;
static int **g_9 = &g_10;
static int g_77 = 0xE0EA8EDFL;
static int **g_84 = &g_10;
static unsigned char g_95 = 255UL;
static unsigned short g_99 = 0x0213L;
static unsigned short g_102 = 65534UL;
static int g_104 = 0xDBF82AF6L;
static int * volatile g_103 = &g_104;
static unsigned short g_110 = 0xBC7FL;
static unsigned short g_137 = 0x5945L;
static short g_140 = 0x0201L;
static unsigned short g_156 = 65534UL;
static char g_173 = 0x93L;
static int *g_204 = &g_104;
static int ** volatile g_203 = &g_204;
static unsigned g_233 = 0x9DE8EE48L;
static int g_245 = 1L;
static int g_250 = 1L;
static int g_281 = 0L;
static unsigned g_412 = 4UL;
static char g_437 = 0x61L;
static short g_525 = 0xCC7DL;
static volatile short g_542 = 0L;
static volatile short *g_541 = &g_542;
static volatile short ** volatile g_540 = &g_541;
static char *g_545 = &g_437;
static char **g_544 = &g_545;
static int * volatile g_614 = &g_250;
static unsigned char *** volatile g_637 = (void*)0;
static unsigned g_645 = 0xCA81169FL;
static unsigned g_675 = 0UL;
static int *g_676 = &g_250;
static unsigned *g_695 = &g_675;
static unsigned **g_694 = &g_695;
static unsigned char *g_705 = &g_95;
static unsigned char **g_704 = &g_705;
static unsigned char g_716 = 1UL;
static int *g_724 = &g_104;
static unsigned g_730 = 0xB9E8AD52L;
static unsigned short g_787 = 0x331EL;
static short g_790 = 0x6989L;
static int g_793 = 0x85EF4EECL;
static unsigned short *g_876 = &g_137;
static unsigned short ** volatile g_875 = &g_876;
static unsigned short ** volatile * volatile g_877 = &g_875;
static short *g_885 = &g_140;
static short **g_884 = &g_885;
static volatile unsigned g_905 = 0x2EF61F05L;



static short func_1(void);
static int * func_13(int p_14);
static int ** func_20(int * p_21, int ** p_22);
static unsigned func_23(unsigned p_24);
static unsigned char func_25(int * p_26, int ** p_27);
static int * func_28(unsigned p_29, int * p_30);
static unsigned func_31(int ** p_32, char p_33, unsigned char p_34, int ** p_35);
static int ** func_36(short p_37);
static short func_42(unsigned short p_43, int p_44, unsigned p_45, int ** p_46, int * p_47);
static unsigned char func_50(int p_51);
static short func_1(void)
{
    unsigned char l_2 = 0xCEL;
    int l_792 = 0xB4DB8664L;
    int *l_818 = &g_4;
    unsigned l_841 = 0x40B6C431L;
    unsigned char ***l_851 = &g_704;
    unsigned char l_868 = 0x53L;
    short *l_883 = &g_140;
    short **l_882 = &l_883;
    unsigned char l_894 = 255UL;
    unsigned char l_897 = 0xF6L;
    unsigned l_924 = 0xE73E0F7AL;
    int l_936 = (-10L);
    (*g_3) &= l_2;
    if (((247UL & l_2) > 0x37A3L))
    {
        int *l_782 = &g_4;
        unsigned **l_794 = &g_695;
        for (g_4 = 0; (g_4 >= (-17)); g_4--)
        {
            int *l_8 = &g_4;
            int **l_7 = &l_8;
            short *l_788 = (void*)0;
            short *l_789 = &g_790;
            int l_791 = 0xC74DB732L;
            unsigned **l_795 = &g_695;
            int **l_796 = &g_10;
            g_9 = l_7;
        }
        (*g_724) = ((*l_782) = 0xA033F5DAL);
        (*l_782) = (((*g_724) &= (safe_rshift_func_uint16_t_u_s((*l_782), 15))) != (*l_782));
    }
    else
    {
        unsigned short l_805 = 0xDA56L;
        int *l_806 = &g_793;
        short *l_817 = &g_525;
        int **l_819 = &l_818;
        int l_824 = 6L;
        char l_839 = 0xD8L;
        unsigned char l_891 = 0UL;
        short l_901 = 0x8E01L;
        char l_906 = (-1L);
        (*l_806) = (((safe_sub_func_int8_t_s_s((g_156 , 1L), (**g_704))) >= (((safe_sub_func_int8_t_s_s(((**g_544) = (((*g_695) || ((*g_204) = (*g_724))) , 1L)), (((g_77 , 0xC2878274L) , ((*g_676) = (safe_mul_func_int8_t_s_s((g_645 , 1L), (**g_704))))) > 0xD8083B9BL))) & l_805) != (*g_541))) ^ 0UL);
        l_806 = func_28(((-7L) || 5L), l_806);
    }
    for (g_77 = 0; (g_77 >= 19); ++g_77)
    {
        unsigned l_935 = 4294967288UL;
        for (g_140 = 0; (g_140 != (-20)); g_140 = safe_sub_func_uint8_t_u_u(g_140, 6))
        {
            (*g_3) &= (safe_lshift_func_uint16_t_u_s((l_935 <= l_936), 3));
            return (*l_818);
        }
    }
    return (**g_884);
}







static int * func_13(int p_14)
{
    int l_19 = 7L;
    int **l_48 = &g_10;
    int *l_231 = &g_4;
    int ***l_234 = (void*)0;
    int ***l_235 = &g_9;
    int **l_756 = &g_724;
    (*g_676) = (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_4, ((l_19 != (((*l_235) = ((!1UL) , func_20((func_23((((((func_25(func_28(func_31(((*l_235) = func_36((safe_sub_func_int16_t_s_s(1L, (((safe_mul_func_uint8_t_u_u(1UL, (l_19 <= (4294967291UL == g_4)))) , ((*l_48) = (func_42(p_14, p_14, g_4, l_48, (*g_9)) , (void*)0))) == l_231))))), (*l_231), p_14, &l_231), &g_4), &l_231) , g_102) || 0x749569CBL) != 0UL) | g_437) ^ p_14)) , &p_14), l_756))) != (void*)0)) , p_14))), g_645));
    return (*l_756);
}







static int ** func_20(int * p_21, int ** p_22)
{
    int l_763 = 0x54206FACL;
    unsigned short *l_777 = &g_137;
    (*g_676) = (safe_mul_func_int16_t_s_s((((+(**p_22)) != ((safe_add_func_uint8_t_u_u(((*g_705) = (**g_704)), ((safe_lshift_func_int8_t_s_u(l_763, 7)) == 4294967295UL))) | (*g_614))) != (*p_21)), ((g_102 >= l_763) , ((**g_694) < (**g_694)))));
    (*g_724) |= ((*g_676) = (1UL == l_763));
    for (l_763 = (-20); (l_763 != (-27)); l_763 = safe_sub_func_int16_t_s_s(l_763, 2))
    {
        unsigned short l_772 = 0x2298L;
        int l_773 = 0xB7349B3AL;
        unsigned short *l_776 = &g_156;
        unsigned short **l_778 = &l_777;
        int *l_781 = (void*)0;
        (*g_203) = (*p_22);
    }
    return &g_204;
}







static unsigned func_23(unsigned p_24)
{
    int l_457 = (-1L);
    unsigned short *l_462 = &g_99;
    unsigned *l_465 = &g_233;
    char *l_467 = &g_173;
    char **l_466 = &l_467;
    int l_468 = (-5L);
    int l_493 = (-5L);
    int **l_502 = (void*)0;
    unsigned short l_591 = 0x19C3L;
    int *l_683 = &g_245;
    unsigned short l_700 = 0x0A93L;
    unsigned l_721 = 2UL;
    char l_749 = 0x5AL;
    int l_750 = 0L;
lbl_511:
    l_468 &= ((!(l_457 | ((((*l_465) = ((safe_mod_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s((-2L), 0xD8L)) == (((g_412 , l_462) != (p_24 , l_462)) , (safe_lshift_func_uint8_t_u_u((l_457 < g_437), 2)))) , g_250) , p_24), (*g_103))) , g_104)) , l_466) == (void*)0))) <= p_24);
lbl_550:
    if ((l_468 , ((l_468 , &g_203) == &g_9)))
    {
        unsigned l_471 = 4294967295UL;
        for (g_437 = 0; (g_437 < (-1)); g_437 = safe_sub_func_int16_t_s_s(g_437, 7))
        {
            int l_472 = 2L;
            unsigned char *l_475 = (void*)0;
            int *l_476 = (void*)0;
            int *l_477 = &g_250;
            (*l_477) = (p_24 >= (l_471 ^ (l_472 == (((safe_rshift_func_uint16_t_u_u(0x0FBEL, 3)) , l_475) != (void*)0))));
            (*g_84) = &l_468;
        }
    }
    else
    {
        unsigned *l_489 = &g_233;
        int **l_491 = (void*)0;
        char *l_503 = &g_437;
        unsigned short *l_504 = &g_156;
        unsigned short **l_505 = &l_504;
        int *l_506 = (void*)0;
        int *l_507 = &g_281;
        for (g_102 = (-24); (g_102 > 58); g_102++)
        {
            unsigned l_484 = 0UL;
            unsigned *l_485 = (void*)0;
            unsigned *l_486 = &g_412;
            short *l_490 = &g_140;
            int l_492 = (-1L);
            int *l_494 = &g_245;
            l_492 = ((l_457 = g_140) < g_140);
            (*l_494) = l_493;
            (*l_494) = (-2L);
        }
        (*g_9) = &l_457;
        if (l_468)
            goto lbl_508;
lbl_508:
        (*l_507) = ((&l_457 != (void*)0) , ((**g_84) = (p_24 , (-5L))));
        (*g_84) = &l_457;
    }
    if (p_24)
    {
        for (g_110 = 0; (g_110 <= 31); g_110 = safe_add_func_uint32_t_u_u(g_110, 1))
        {
            int *l_512 = &l_468;
            if (g_250)
                goto lbl_511;
            (*l_512) &= 0x35D3D24DL;
        }
    }
    else
    {
        unsigned l_513 = 0x7A66DFB4L;
        int *l_531 = &g_4;
        int ***l_553 = &g_9;
        int ***l_554 = &g_84;
        int l_642 = 0xA4C102F4L;
        unsigned **l_691 = (void*)0;
        short *l_731 = &g_525;
        unsigned char **l_751 = (void*)0;
        int *l_752 = &l_457;
        unsigned l_755 = 0xE31727CAL;
        if (l_513)
        {
            short *l_520 = &g_140;
            unsigned *l_521 = &l_513;
            int l_522 = 0xA1CF364DL;
            short *l_523 = (void*)0;
            short *l_524 = &g_525;
            unsigned *l_528 = (void*)0;
            unsigned *l_529 = &g_412;
            int l_530 = 0x5347A290L;
            int l_537 = 1L;
            char **l_543 = &l_467;
            int l_560 = (-7L);
            int **l_561 = (void*)0;
            l_531 = (*g_84);
            if (l_522)
            {
                int **l_536 = &g_204;
                int l_546 = 0x97FB774FL;
                int l_547 = 0x786106C9L;
                l_537 ^= (safe_mul_func_uint16_t_u_u((g_110 , (p_24 != ((l_522 , g_95) && ((*l_462) = (safe_rshift_func_int8_t_s_s(0x9AL, (p_24 ^ (p_24 , 6L)))))))), g_250));
                l_546 = (g_95 | (((safe_rshift_func_int16_t_s_u((g_540 == &g_541), 1)) , l_543) == (g_544 = l_543)));
                l_531 = (*g_84);
                for (l_547 = 0; (l_547 == (-18)); l_547 = safe_sub_func_uint8_t_u_u(l_547, 9))
                {
                    l_522 = (~p_24);
                    if (l_537)
                        goto lbl_550;
                    return g_4;
                }
            }
            else
            {
                (*g_9) = (*g_84);
            }
            for (g_437 = 0; (g_437 != 14); g_437 = safe_add_func_int16_t_s_s(g_437, 7))
            {
                unsigned char l_557 = 0x27L;
                int *l_562 = &l_560;
                unsigned short l_563 = 0x6215L;
                int l_566 = (-1L);
                (**l_554) = (*g_9);
                if (p_24)
                {
                    int l_575 = 0x669FF21DL;
                    int **l_590 = &g_10;
                    unsigned short *l_611 = &g_99;
                    int l_633 = 0xB84E7ED1L;
                    l_563 |= p_24;
                    for (g_110 = 0; (g_110 != 9); g_110 = safe_add_func_int16_t_s_s(g_110, 4))
                    {
                        int *l_576 = (void*)0;
                        int *l_577 = &l_457;
                        l_566 = (*g_103);
                        if ((*g_103))
                            continue;
                        (*g_103) ^= p_24;
                        l_537 = ((*l_577) = (((safe_lshift_func_int8_t_s_u(0xA3L, (p_24 , (p_24 & p_24)))) || (p_24 , (-1L))) > (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((((!(safe_lshift_func_int8_t_s_s(l_575, 4))) , &g_545) != ((*g_541) , &g_545)), 0)) , g_104), g_99))));
                    }
                    if ((p_24 , (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((p_24 <= (g_233 >= (p_24 && (safe_rshift_func_uint16_t_u_s(((p_24 <= 5L) != ((safe_sub_func_uint16_t_u_u(p_24, (safe_lshift_func_uint8_t_u_s(255UL, 2)))) < (safe_sub_func_uint32_t_u_u((p_24 != 0x46L), p_24)))), l_591))))), p_24)), p_24))))
                    {
                        unsigned **l_592 = (void*)0;
                        unsigned **l_593 = (void*)0;
                        unsigned **l_594 = &l_528;
                        int *l_608 = &l_468;
                        (**l_553) = (*l_590);
                        (*l_608) &= (((*l_462) &= 0x37D5L) | (g_525 | ((&g_412 != ((*l_594) = l_562)) != ((safe_unary_minus_func_uint8_t_u(g_140)) | (0x9385AABDL >= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((**g_544), 1)), (0x4B9EL && (safe_mod_func_int16_t_s_s((*g_541), g_137))))), 2)), 1)))))));
                        if (p_24)
                            continue;
                    }
                    else
                    {
                        short l_621 = 0xE6E1L;
                        char *l_632 = &g_173;
                        (*g_614) = (((*l_543) != (((*g_541) >= ((((safe_sub_func_uint16_t_u_u(0x4431L, ((*l_611) |= (l_611 != (void*)0)))) , (0L < p_24)) , ((*l_562) = (p_24 >= (((safe_mul_func_uint16_t_u_u((g_250 > 3UL), g_412)) , g_245) <= g_102)))) , g_281)) , (void*)0)) ^ p_24);
                        if (l_566)
                            break;
                        l_633 &= (safe_mod_func_uint8_t_u_u((((4UL & (safe_rshift_func_uint16_t_u_s((func_50((safe_lshift_func_int8_t_s_s(l_563, 4))) && (~((*l_462) ^= l_621))), 3))) >= (((safe_mul_func_int8_t_s_s(p_24, 8UL)) , (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((p_24 , (void*)0) == l_632), 6L)), g_281)), 255UL)), l_566))) || l_621)) == g_250), g_233));
                        (**l_553) = (*g_203);
                    }
                    if ((*g_3))
                    {
                        unsigned char *l_635 = &l_557;
                        unsigned char **l_634 = &l_635;
                        unsigned char ***l_636 = (void*)0;
                        l_634 = l_634;
                        if (g_77)
                            goto lbl_732;
                    }
                    else
                    {
                        unsigned l_638 = 1UL;
                        return l_638;
                    }
                }
                else
                {
                    int *l_641 = &g_250;
                    char l_659 = (-1L);
                    l_642 = (safe_rshift_func_int8_t_s_s(((0x3BL > (~(l_566 && p_24))) ^ ((*l_641) = 9L)), (func_50(p_24) <= p_24)));
                    (*g_203) = (*g_203);
                    if (p_24)
                    {
                        int l_648 = 1L;
                        unsigned short *l_660 = (void*)0;
                        unsigned short *l_661 = (void*)0;
                        unsigned short *l_662 = &l_591;
                        (*l_641) = (*g_3);
                        (*g_9) = (*g_84);
                        if (l_648)
                            continue;
                        (**l_554) = (*g_84);
                    }
                    else
                    {
                        char l_663 = 0x91L;
                        unsigned *l_674 = &g_675;
                        l_663 &= (*l_641);
                        (*l_641) = ((((safe_mul_func_int16_t_s_s((l_563 , ((**g_540) > g_110)), g_412)) == (g_525 && (l_663 , ((safe_sub_func_uint8_t_u_u(((l_663 >= l_566) ^ (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(g_95, 11)), l_663))), 0x70L)) , g_525)))) ^ 0x51L) , p_24);
                        if (l_663)
                            break;
                        (*g_84) = (l_641 = g_676);
                    }
                    if ((*g_103))
                        break;
                }
                (**l_553) = (*g_84);
            }
            (**l_554) = (*g_9);
        }
        else
        {
            unsigned *l_681 = &g_675;
            if (((-1L) >= ((safe_mul_func_int16_t_s_s(0xC3D2L, ((*l_462) ^= 2UL))) || (safe_mul_func_uint8_t_u_u((l_681 == &g_675), (((**g_540) ^ g_95) || (*g_614)))))))
            {
                (*g_676) ^= 0x362B389AL;
                return p_24;
            }
            else
            {
                char l_682 = (-3L);
                (**l_553) = (*g_9);
            }
        }
lbl_732:
        if (((func_50(g_173) || g_102) & (+p_24)))
        {
            int l_698 = (-1L);
            int *l_725 = &g_77;
            unsigned short **l_726 = &l_462;
            unsigned char *l_727 = &g_716;
            for (g_233 = 0; (g_233 == 20); ++g_233)
            {
                unsigned *l_693 = (void*)0;
                unsigned **l_692 = &l_693;
                int l_699 = 0xD1782765L;
                (*g_9) = ((*g_545) , (**l_553));
                if ((safe_add_func_uint8_t_u_u((*l_683), ((l_698 || l_699) || g_156))))
                {
                    return p_24;
                }
                else
                {
                    unsigned char *l_703 = (void*)0;
                    unsigned char **l_702 = &l_703;
                    unsigned char ***l_701 = &l_702;
                    unsigned char ***l_706 = &g_704;
                    unsigned char *l_714 = (void*)0;
                    unsigned char *l_715 = &g_716;
                    int l_717 = 6L;
                    int *l_718 = &g_245;
                    if (l_700)
                        break;
                    (*l_683) = ((*g_676) = ((p_24 , l_717) && (-1L)));
                    l_718 = (void*)0;
                    (*g_84) = &l_457;
                }
            }
            (*g_676) ^= (((((safe_mul_func_int16_t_s_s(l_698, ((*l_683) && (((((*g_695) ^= (p_24 = (((0x33L >= (((func_50(((*l_725) = p_24)) || 9UL) < p_24) >= 0x8BL)) != 0xB0B4L) <= p_24))) != (-1L)) , (void*)0) == l_726)))) & l_698) != 0x30D0L) < g_245) > (**g_544));
            (**l_553) = (*g_84);
            l_698 = ((((*l_727) ^= (**g_704)) != ((safe_rshift_func_int16_t_s_s((*g_541), 15)) >= (+(l_698 == g_730)))) , ((*l_683) |= ((void*)0 == l_731)));
        }
        else
        {
            (*l_683) = p_24;
        }
        (*g_676) = ((*l_752) |= (safe_lshift_func_int8_t_s_u((!((((((safe_sub_func_int8_t_s_s(((**l_466) = (l_750 ^= (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((*l_683) = ((safe_lshift_func_int8_t_s_u((**g_544), 5)) && 0x2C12L)), p_24)), ((*l_731) |= 0L))), (func_50(p_24) && (((g_250 , ((**g_694) = (((g_730 == (safe_mul_func_uint8_t_u_u(0x92L, 0L))) | l_749) == p_24))) || p_24) , g_104)))), 0)))), 1UL)) >= p_24) | p_24) , (void*)0) == l_751) != 0x29L)), g_645)));
        for (l_457 = 22; (l_457 >= (-30)); l_457--)
        {
            (*l_683) = l_755;
            (*l_683) ^= p_24;
            if ((*l_752))
                break;
        }
    }
    return g_542;
}







static unsigned char func_25(int * p_26, int ** p_27)
{
    int l_335 = (-1L);
    unsigned short *l_336 = &g_102;
    unsigned char l_339 = 0x5FL;
    int **l_340 = &g_204;
    char *l_341 = (void*)0;
    int l_345 = (-4L);
    unsigned l_350 = 0UL;
    int *l_362 = &g_104;
    unsigned l_376 = 4294967295UL;
    short l_398 = 3L;
    unsigned *l_451 = &l_350;
    unsigned l_452 = 4UL;
    int l_453 = 0xB27E0EBBL;
    int *l_454 = (void*)0;
    int *l_455 = &g_245;
    short l_456 = 0x0404L;
    if ((func_42((func_42((g_77 , ((*l_336) = l_335)), l_335, ((safe_lshift_func_uint16_t_u_u(g_137, 2)) , ((g_233 , l_339) >= ((~2L) >= g_173))), &g_204, &l_335) <= 65535UL), g_233, l_339, l_340, &g_4) , 0x2936B547L))
    {
        char **l_342 = &l_341;
        int l_348 = 0L;
        short *l_349 = &g_140;
        (*p_27) = (*g_9);
        for (g_110 = 0; (g_110 >= 22); g_110 = safe_add_func_int16_t_s_s(g_110, 2))
        {
            if ((*g_3))
                break;
        }
    }
    else
    {
        unsigned short l_358 = 0x3B42L;
        short *l_366 = &g_140;
        int l_367 = 0x5D61B836L;
        int l_370 = (-1L);
        unsigned char l_389 = 0x4FL;
        int *l_397 = &l_345;
        int l_399 = 0x4D4D5F1CL;
        int *l_402 = &g_104;
        if ((g_95 & (((safe_add_func_int16_t_s_s((**l_340), (**l_340))) , &l_336) != (void*)0)))
        {
            unsigned *l_359 = &l_350;
            int l_360 = 0L;
            short *l_361 = &g_140;
            (*p_27) = (*g_9);
            return g_173;
        }
        else
        {
            unsigned char l_377 = 0UL;
            int **l_378 = &g_204;
            char *l_390 = &g_173;
            unsigned *l_395 = (void*)0;
            unsigned *l_396 = &l_350;
            if ((l_358 || g_245))
            {
                short **l_363 = (void*)0;
                short *l_365 = &g_140;
                short **l_364 = &l_365;
                l_367 = ((*l_362) |= (((*l_364) = (void*)0) != l_366));
            }
            else
            {
                unsigned short l_373 = 0x4B1EL;
                int *l_379 = &l_345;
                unsigned *l_380 = &l_350;
                (**l_340) = (*g_3);
                (*l_362) = (*g_103);
                (**l_340) = (**l_340);
                (*l_340) = (((**l_340) = ((g_156 <= ((0xDDACL <= ((safe_add_func_uint32_t_u_u(((((*l_336) = (((((*l_380) = (((l_370 != (safe_sub_func_int8_t_s_s(l_373, ((((**p_27) <= ((*l_379) ^= (safe_add_func_int8_t_s_s((+(g_95 , func_31((l_373 , &g_10), ((((((*l_362) , l_376) > 0xF4077BFCL) && g_250) , 1UL) , l_373), l_377, l_378))), l_373)))) , 0x77L) == g_102)))) , 1UL) || (*g_204))) <= (**p_27)) || 0xDA9DL) , 65535UL)) | 65529UL) >= 0x30FD66C7L), (**p_27))) , 0UL)) < g_4)) & 65531UL)) , (void*)0);
            }
            l_399 &= (((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_281, (0x85L & (safe_add_func_int16_t_s_s((g_104 , l_377), g_104))))), (*l_397))) | l_398) <= 0x0CL);
        }
        for (g_95 = 0; (g_95 > 41); g_95++)
        {
            unsigned l_403 = 0x7E8A1ADBL;
            unsigned *l_410 = &l_350;
            unsigned *l_411 = &g_412;
            int *l_413 = &g_250;
            l_367 |= (*l_397);
            (*l_340) = l_402;
            if (((l_403 || ((*l_362) > 4UL)) <= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((*l_397), (((*l_411) = ((l_403 != ((*l_410) |= 0xE32A8D1FL)) != l_403)) , (((*l_366) = g_99) != g_102)))), l_403)), (*l_402)))))
            {
                int l_420 = 0L;
                (*l_397) |= (*g_103);
                (*l_340) = (l_413 = ((*g_84) = (*g_84)));
                (*l_397) &= (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(g_156, (+(*l_402)))), ((safe_mul_func_int16_t_s_s(l_420, g_4)) != ((*l_366) = (g_104 != 0x59EBL)))));
            }
            else
            {
                int l_421 = (-1L);
                if ((**l_340))
                    break;
                (*l_413) = ((((*l_336) = (l_421 >= g_245)) , l_421) , (-1L));
                (*g_9) = l_413;
                (**g_9) &= (*g_204);
            }
        }
        (*l_362) &= (**p_27);
    }
    (*l_362) = ((*l_362) , (*g_3));
    for (g_173 = (-1); (g_173 < 21); g_173++)
    {
        int l_424 = 9L;
        l_335 &= ((*l_362) || 0xE314L);
    }
    (*l_455) = (safe_mul_func_int8_t_s_s(((*l_362) = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((+g_156))), 2))), g_173));
    return l_456;
}







static int * func_28(unsigned p_29, int * p_30)
{
    unsigned l_251 = 4294967286UL;
    unsigned char *l_252 = &g_95;
    unsigned short **l_264 = (void*)0;
    int *l_279 = &g_245;
    char l_324 = (-1L);
    short l_334 = 0xFD3DL;
    if ((func_50((((*l_252) = func_42(p_29, g_102, l_251, func_36(l_251), &g_250)) < g_250)) > g_102))
    {
        unsigned l_256 = 0xFE5E31DAL;
        for (g_233 = 0; (g_233 < 10); g_233++)
        {
            int **l_255 = (void*)0;
            unsigned short *l_259 = &g_110;
            unsigned short **l_260 = &l_259;
            unsigned short *l_262 = &g_137;
            unsigned short **l_261 = &l_262;
            int l_263 = 0xB0840576L;
            l_263 = ((p_29 | ((l_256 , (g_173 = (p_29 , (safe_lshift_func_int8_t_s_s((p_29 , (((((*l_261) = ((*l_260) = l_259)) != (void*)0) > 65529UL) , g_99)), p_29))))) ^ g_104)) < 0x3CD95909L);
        }
    }
    else
    {
        unsigned l_277 = 0x03CDA892L;
        int l_278 = 0xBA3AC303L;
        unsigned char l_289 = 1UL;
        (*g_204) |= (l_264 == l_264);
        (*g_204) ^= (safe_mod_func_uint8_t_u_u(0x81L, 0x8DL));
        if ((*p_30))
        {
            int **l_271 = &g_204;
            int ***l_270 = &l_271;
            unsigned short *l_276 = (void*)0;
            int *l_280 = &g_281;
            unsigned short *l_290 = &g_110;
            unsigned short *l_295 = &g_137;
            short l_296 = (-8L);
            char *l_297 = &g_173;
            (*l_280) |= (func_42(func_50(p_29), ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((p_29 , l_270) == (void*)0))), g_250)) <= ((((safe_mul_func_int16_t_s_s(p_29, ((l_277 = ((safe_lshift_func_int8_t_s_s((~((*l_271) != p_30)), l_251)) , l_251)) & l_251))) <= l_278) , (*p_30)) , 0x3C9A6C5EL)), g_245, &g_204, l_279) >= (*p_30));
            (*g_204) = (*p_30);
            (*g_204) = ((*l_280) = (safe_lshift_func_int8_t_s_u(((((*l_297) = (safe_mod_func_int32_t_s_s(func_42(((*l_295) &= ((*l_279) = ((p_29 <= (g_77 < (((safe_lshift_func_uint16_t_u_u(p_29, p_29)) == ((safe_unary_minus_func_int8_t_s(p_29)) <= (((*l_290) ^= (((*l_280) |= l_289) & (***l_270))) && (safe_lshift_func_uint16_t_u_u((g_104 , (safe_sub_func_int8_t_s_s(0x8FL, p_29))), g_173))))) && 0xC3L))) >= (-1L)))), g_4, g_250, &l_279, p_30), l_296))) < l_289) , g_102), 5)));
            for (g_281 = 0; (g_281 >= (-8)); --g_281)
            {
                int **l_302 = &g_204;
                if ((safe_lshift_func_int8_t_s_u(func_42(p_29, ((&g_95 != (void*)0) | 0xA582L), p_29, l_302, (*l_302)), 4)))
                {
                    (*g_204) = ((*l_279) |= 0xA1103C04L);
                    (*g_204) = func_50((safe_sub_func_int16_t_s_s((*l_280), 65533UL)));
                }
                else
                {
                    l_278 ^= (*g_103);
                }
            }
        }
        else
        {
            int l_320 = 9L;
            if ((safe_rshift_func_int8_t_s_s(g_281, 7)))
            {
                return (*g_203);
            }
            else
            {
                short *l_315 = &g_140;
                int *l_321 = &g_4;
                for (g_99 = 10; (g_99 >= 45); ++g_99)
                {
                    char *l_318 = &g_173;
                    short l_319 = 0xE8EBL;
                    l_320 &= ((p_29 <= ((!(-1L)) <= p_29)) && ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((void*)0 == l_315), (((safe_rshift_func_int16_t_s_s((g_140 = ((g_281 , g_245) , 0xC4F8L)), 3)) , l_318) != (void*)0))), 2)), p_29)) != l_319));
                }
                return l_321;
            }
        }
        for (g_102 = 0; (g_102 != 45); g_102 = safe_add_func_uint16_t_u_u(g_102, 1))
        {
            int *l_329 = &g_77;
            int l_332 = 0xE93E954DL;
            char *l_333 = &l_324;
            (*l_279) ^= ((l_324 , ((g_104 == (safe_rshift_func_int16_t_s_u(l_278, 5))) , ((((((*l_333) = ((safe_add_func_int16_t_s_s(l_289, (func_50(((*l_329) = l_289)) && ((*p_30) > (((safe_rshift_func_uint16_t_u_s(p_29, 4)) >= (l_277 | 0xAAL)) <= l_278))))) , l_332)) , p_29) == p_29) != l_334) && l_332))) ^ l_278);
        }
    }
    return (*g_84);
}







static unsigned func_31(int ** p_32, char p_33, unsigned char p_34, int ** p_35)
{
    unsigned char l_238 = 0x65L;
    unsigned short *l_239 = (void*)0;
    int l_240 = 0x634B345AL;
    short *l_243 = (void*)0;
    short *l_244 = &g_140;
    int l_246 = (-5L);
    unsigned char *l_247 = &g_95;
    char *l_248 = &g_173;
    int *l_249 = &g_250;
    (*l_249) &= func_50(func_50((safe_lshift_func_int8_t_s_s(((*l_248) = (((*l_247) = ((((l_240 = l_238) , (safe_mod_func_uint32_t_u_u((g_102 , (l_240 | (((*l_244) = ((&l_239 == &l_239) , ((*p_32) == (*p_35)))) >= (g_245 = (((*g_204) = (*g_3)) == g_233))))), l_246))) & p_34) <= g_77)) != p_33)), 5))));
    l_249 = ((*g_84) = (*g_9));
    return p_34;
}







static int ** func_36(short p_37)
{
    unsigned l_232 = 5UL;
    (*g_204) = p_37;
    g_233 ^= (g_156 != (func_50(l_232) | l_232));
    return &g_10;
}







static short func_42(unsigned short p_43, int p_44, unsigned p_45, int ** p_46, int * p_47)
{
    unsigned l_49 = 4294967295UL;
    unsigned short *l_155 = &g_156;
    unsigned l_157 = 0x991D75C6L;
    int l_158 = 0x23F5DDD1L;
    int **l_171 = &g_10;
    unsigned char l_230 = 0xEAL;
    l_158 |= ((((l_49 > ((*g_103) = ((func_50(p_44) & (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_49, l_49)), (safe_sub_func_int8_t_s_s(l_49, (p_44 <= (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((((p_45 , ((*l_155) = (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_102, g_102)), p_45)))) , (void*)0) != &p_46), 0L)), l_49)))))))) , l_157))) , l_157) | (-6L)) && 4UL);
    for (g_77 = 0; (g_77 < (-25)); g_77 = safe_sub_func_int8_t_s_s(g_77, 9))
    {
        unsigned l_169 = 4UL;
        int l_190 = 0xF5A9F7A4L;
        int *l_199 = (void*)0;
        int *l_200 = &l_158;
        for (p_43 = 0; (p_43 <= 55); p_43 = safe_add_func_int16_t_s_s(p_43, 1))
        {
            int *l_165 = &g_4;
            unsigned short **l_177 = &l_155;
            int *l_192 = &g_104;
            for (g_137 = (-2); (g_137 >= 28); g_137++)
            {
                unsigned *l_166 = &l_49;
                int *l_170 = &l_158;
                int l_176 = 0x11F59170L;
                unsigned *l_198 = &l_157;
            }
            (*g_103) |= (p_44 | l_169);
            (*l_192) = (*p_47);
        }
    }
    (*g_204) = (safe_rshift_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((*g_3), (safe_mul_func_uint16_t_u_u(((p_45 < g_140) , 0x2E1EL), ((((*l_155) = (((4294967287UL | (*p_47)) ^ ((p_43 , ((((safe_lshift_func_int8_t_s_u((-1L), g_77)) >= l_49) | p_43) | 1UL)) ^ l_230)) <= (*p_47))) > 0xA5B2L) & p_43))))) ^ p_45) > p_44) == p_45), p_44));
    return p_44;
}







static unsigned char func_50(int p_51)
{
    char l_56 = (-10L);
    int l_60 = 0L;
    int **l_81 = &g_10;
    unsigned l_85 = 4294967295UL;
    int **l_86 = (void*)0;
    unsigned l_138 = 0UL;
    for (p_51 = 0; (p_51 <= (-21)); --p_51)
    {
        int *l_54 = (void*)0;
        int l_55 = 0xEE328DB1L;
        l_55 = (*g_3);
        if (l_56)
            break;
        if (p_51)
            continue;
        for (l_56 = 23; (l_56 <= 27); l_56 = safe_add_func_uint8_t_u_u(l_56, 9))
        {
            int *l_59 = &l_55;
            l_60 |= (g_4 || ((p_51 | (0x0CL < (((*l_59) = 3L) ^ 5L))) ^ p_51));
        }
    }
    if ((((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_4, 1)), g_4)), (safe_mul_func_int16_t_s_s(p_51, (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((0UL != (safe_mul_func_int8_t_s_s(g_4, (g_77 ^= ((0xE524L & (l_60 < 1L)) <= (safe_add_func_int16_t_s_s((g_4 , l_56), 0xD567L))))))), g_4)), g_4)))))) >= 0UL) <= 65535UL))
    {
        int l_80 = (-1L);
        int ***l_82 = &l_81;
        int ***l_83 = &g_9;
        unsigned l_93 = 9UL;
        unsigned char *l_94 = &g_95;
        unsigned short *l_98 = &g_99;
        unsigned short *l_101 = &g_102;
        unsigned short **l_100 = &l_101;
        l_60 = (safe_rshift_func_int8_t_s_u(((l_80 || ((*l_94) |= ((((((*l_82) = l_81) != (g_84 = ((*l_83) = &g_10))) <= p_51) & (l_85 , (((void*)0 == l_86) ^ ((safe_sub_func_int32_t_s_s(6L, ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((g_77 != p_51) , &g_4) != &g_4), 1)) != 0x26EEL), p_51)) , (-1L)))) , l_93)))) ^ p_51))) < 0x76L), 4));
        (*g_103) = (((*l_98) = (0xABL | p_51)) <= (l_98 == ((*l_100) = l_98)));
        return g_4;
    }
    else
    {
        unsigned char *l_109 = &g_95;
        int l_111 = 0xB3842746L;
        int *l_112 = &l_60;
        int *l_113 = &g_104;
        int ***l_130 = &g_9;
        if (((*l_113) &= ((*l_112) = (safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(g_102, (g_110 = (g_77 , ((*l_109) |= p_51))))) , l_111), 0x6F3B0A6BL)))))
        {
            unsigned char l_118 = 0xFAL;
            int l_126 = (-6L);
            for (g_95 = (-30); (g_95 == 16); g_95++)
            {
                unsigned short l_125 = 3UL;
                if ((g_99 , p_51))
                {
                    int l_121 = 0xBC9C4D8FL;
                    unsigned *l_124 = &l_85;
                    (*l_112) |= p_51;
                    l_126 ^= ((g_102 && (safe_mul_func_uint8_t_u_u(l_118, (((l_118 , &g_10) != (void*)0) > (safe_sub_func_int32_t_s_s(p_51, (((l_121 , (((*l_124) = (safe_lshift_func_uint16_t_u_s(p_51, g_104))) != 0xD4F1ACCAL)) && 0x74L) , l_125))))))) ^ g_77);
                    (*l_112) ^= (*l_113);
                }
                else
                {
                    if (p_51)
                        break;
                    (*g_84) = (*g_84);
                    return (*l_113);
                }
                (*l_113) = (-3L);
            }
        }
        else
        {
            int ***l_136 = &g_84;
            for (p_51 = (-8); (p_51 > 19); p_51 = safe_add_func_uint8_t_u_u(p_51, 3))
            {
                int *l_129 = &g_104;
                int *l_133 = &l_111;
                int l_139 = (-1L);
                if (p_51)
                    break;
                (*l_81) = l_129;
                l_139 |= ((**l_81) >= ((l_138 = ((~(l_130 != (void*)0)) || (((((*l_112) |= (safe_rshift_func_int8_t_s_s(g_95, (*l_113)))) ^ g_99) <= ((*l_133) = p_51)) >= (g_137 |= (((safe_mul_func_uint16_t_u_u(0xA668L, ((l_136 != &g_84) , g_104))) || 0xF046L) , p_51))))) && 0x845C4EFEL));
            }
            (*l_113) &= p_51;
        }
        g_140 = (*g_103);
        return g_140;
    }
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
