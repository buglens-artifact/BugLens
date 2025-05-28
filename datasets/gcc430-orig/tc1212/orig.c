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



static int g_2 = (-10L);
static unsigned g_26 = 0x89B58331L;
static int g_51 = 7L;
static int g_54 = 0x71B70561L;
static unsigned short g_101 = 65531UL;
static char g_108 = 0x30L;
static char g_111 = 0x2CL;
static int g_112 = 3L;
static char g_117 = 0xD7L;
static unsigned g_119 = 0x85BB29A1L;
static unsigned g_121 = 1UL;
static unsigned short *g_128 = &g_101;
static unsigned short * const *g_127 = &g_128;
static unsigned *g_150 = &g_26;
static unsigned **g_149 = &g_150;
static unsigned *** const g_148 = &g_149;
static short g_164 = 7L;
static unsigned short g_165 = 1UL;
static unsigned g_200 = 0x4483B597L;
static unsigned g_208 = 1UL;
static unsigned char g_225 = 0xDDL;
static int *g_227 = &g_112;
static int **g_226 = &g_227;
static short g_342 = 0x8C1AL;
static int g_343 = 0xDCB4F3F1L;
static short g_345 = 0L;
static unsigned ***g_390 = &g_149;
static int g_392 = (-8L);
static unsigned short g_442 = 0x46EEL;
static unsigned char *g_530 = &g_225;
static unsigned short g_536 = 0x50C8L;
static char g_571 = 0L;
static unsigned *g_574 = &g_200;
static unsigned **g_573 = &g_574;
static unsigned ***g_572 = &g_573;
static unsigned ****g_618 = &g_572;
static unsigned *****g_617 = &g_618;
static short g_684 = 0xF438L;
static short *g_760 = &g_684;
static const unsigned char g_820 = 247UL;
static unsigned g_879 = 1UL;
static unsigned *g_890 = &g_208;
static int ***g_979 = (void*)0;
static int ****g_978 = &g_979;
static int g_1000 = 0x09EF515EL;
static int g_1042 = 5L;



static char func_1(void);
static unsigned char func_7(unsigned p_8);
static unsigned short func_9(unsigned p_10, const int p_11, short p_12);
static short func_19(int p_20);
static int func_21(unsigned p_22);
static short func_35(int p_36, unsigned char p_37, short p_38, unsigned * p_39, unsigned p_40);
static unsigned char func_46(int p_47, short p_48, unsigned * p_49);
static unsigned func_64(unsigned * p_65, unsigned char p_66, const unsigned p_67);
static short func_72(int p_73, unsigned p_74);
static int * func_82(int * p_83, unsigned p_84, unsigned * p_85);
static char func_1(void)
{
    unsigned short l_567 = 0x8723L;
    int l_1032 = 0L;
    int * const l_1044 = &g_112;
    unsigned *l_1061 = &g_208;
    char l_1062 = 0x31L;
    int *l_1063 = &g_54;
    for (g_2 = (-11); (g_2 < (-19)); g_2 = safe_sub_func_int16_t_s_s(g_2, 2))
    {
        unsigned l_568 = 1UL;
        char *l_569 = (void*)0;
        char *l_570 = &g_571;
        unsigned ****l_575 = &g_572;
        int l_1016 = 2L;
        int l_1017 = 0L;
        char l_1026 = (-10L);
        int **l_1054 = &g_227;
        int *l_1056 = &l_1017;
        int **l_1055 = &l_1056;
    }
    (*l_1044) = (safe_lshift_func_uint8_t_u_s(((~((((safe_sub_func_int8_t_s_s(func_72((*l_1044), (1L < ((func_7((*l_1044)) != ((**g_127) <= (((*l_1063) = (((func_7((1UL < (func_64(l_1061, l_1062, (*l_1044)) && g_108))) , (*l_1044)) , &g_617) == &g_617)) <= (*l_1044)))) <= 0xEE37L))), l_1032)) , (*l_1044)) <= 0xA67BL) , (*l_1044))) & l_1062), 3));
    return (*l_1044);
}







static unsigned char func_7(unsigned p_8)
{
    int l_989 = 0x1BDD2805L;
    int l_990 = 1L;
    int l_991 = 0xDB1C3A1BL;
    l_991 ^= (l_990 = l_989);
    return l_991;
}







static unsigned short func_9(unsigned p_10, const int p_11, short p_12)
{
    int *l_576 = &g_112;
    const short l_579 = 0x6DF1L;
    unsigned ****l_593 = &g_390;
    unsigned *****l_594 = (void*)0;
    unsigned ****l_596 = &g_390;
    unsigned *****l_595 = &l_596;
    char *l_597 = &g_111;
    char *l_598 = &g_571;
    unsigned char l_599 = 0x48L;
    short l_600 = 0xD301L;
    int l_601 = 1L;
    unsigned *l_660 = (void*)0;
    unsigned short l_666 = 6UL;
    unsigned l_712 = 1UL;
    int l_749 = (-1L);
    const unsigned short *l_801 = &g_165;
    const unsigned short **l_800 = &l_801;
    int *l_809 = (void*)0;
    char l_811 = 4L;
    unsigned short l_844 = 0xCA50L;
    unsigned short l_862 = 0x1903L;
    int l_871 = (-1L);
    int ***l_901 = &g_226;
    const int l_913 = (-10L);
    unsigned l_919 = 4294967295UL;
    unsigned char l_920 = 0x49L;
    unsigned ******l_921 = (void*)0;
    int *l_985 = &g_112;
    int **l_986 = &l_809;
    unsigned *l_987 = &l_712;
    int **l_988 = &g_227;
    (*l_576) = p_11;
    l_601 |= ((~((((((((safe_mod_func_int32_t_s_s(((((*g_128) = (p_10 , ((*g_148) == (*g_148)))) && ((*l_576) , p_10)) < 0L), l_599)) , l_600) , 4294967295UL) , 4UL) , &g_342) == &g_345) >= (*l_576)) <= 4294967295UL)) & 65535UL);
    if ((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((-1L) & (safe_unary_minus_func_uint8_t_u(p_11))) && (*l_576)), 12)), ((*l_576) >= (*l_576)))) > ((safe_lshift_func_int16_t_s_s(p_12, 2)) | func_64((**g_572), ((*g_530) = p_12), p_12))) && 0x72L))
    {
        unsigned *****l_615 = &l_593;
        unsigned ******l_616 = &l_595;
        unsigned * const ****l_619 = (void*)0;
        unsigned * const *****l_620 = &l_619;
        int l_623 = (-1L);
        int **l_624 = (void*)0;
        int **l_625 = &g_227;
        int **l_626 = &l_576;
        const unsigned char *l_648 = (void*)0;
        const unsigned char **l_647 = &l_648;
        unsigned short *l_654 = &g_101;
        unsigned *l_683 = &g_200;
        short *l_703 = &g_345;
        short **l_702 = &l_703;
        unsigned *l_813 = &g_26;
        const unsigned short ***l_888 = &l_800;
        (*l_626) = ((*l_625) = ((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((*l_576) = ((p_12 & (safe_add_func_int8_t_s_s(p_10, (((65532UL && (-6L)) , (g_617 = ((*l_616) = l_615))) == ((*l_620) = l_619))))) | (safe_mul_func_int8_t_s_s(((*g_128) | ((**l_593) == (l_623 , (**l_593)))), 0xF8L)))) && l_623), l_623)), 0x03E5L)) , (*l_576)) < l_623) , &l_623));
        if (p_12)
        {
            unsigned char *l_631 = (void*)0;
            unsigned char *l_632 = &l_599;
            const int l_639 = (-8L);
            int l_640 = (-1L);
            unsigned *l_641 = (void*)0;
            int *l_642 = &g_343;
            unsigned *l_661 = &g_208;
            int **l_672 = &l_576;
            unsigned *l_701 = &g_26;
            unsigned l_746 = 0x7618C1D6L;
            unsigned l_777 = 4294967286UL;
            unsigned short **l_802 = (void*)0;
            unsigned short l_812 = 65535UL;
            const int *l_815 = &g_112;
            const int **l_814 = &l_815;
            const unsigned char * const **l_816 = (void*)0;
            const unsigned char * const l_819 = &g_820;
            const unsigned char * const *l_818 = &l_819;
            const unsigned char * const **l_817 = &l_818;
            const unsigned char * const *l_822 = &l_648;
            const unsigned char * const **l_821 = &l_822;
            const unsigned l_839 = 0x101B4301L;
            if ((&g_617 != (p_11 , (void*)0)))
            {
                short l_649 = 9L;
                unsigned *l_655 = &g_119;
                (*l_626) = ((((*l_598) = (p_12 && p_12)) != (safe_add_func_int32_t_s_s(((*g_227) = l_639), (safe_mod_func_int32_t_s_s(((0xC46AL | (l_647 == &l_648)) ^ l_649), g_536))))) , &l_640);
                (**l_626) = (safe_sub_func_uint32_t_u_u(func_35((l_649 , (safe_add_func_uint8_t_u_u((((*l_655) ^= ((void*)0 != l_654)) & (safe_mod_func_int32_t_s_s(l_649, (safe_add_func_uint16_t_u_u((*l_576), ((p_12 = ((((1L | (*g_530)) > ((0xD08CL ^ (-1L)) == g_571)) ^ l_640) > p_10)) , l_649)))))), 0x62L))), l_639, p_11, l_655, g_165), 1UL));
                (*l_625) = &l_601;
            }
            else
            {
                char l_667 = 0x36L;
                int l_668 = 0L;
                short *l_671 = &g_342;
                const unsigned *l_693 = &g_208;
                const unsigned **l_692 = &l_693;
                unsigned short **l_722 = &g_128;
                unsigned short ***l_721 = &l_722;
                unsigned *l_791 = &l_746;
                unsigned ******l_792 = &l_595;
                char l_794 = 2L;
                int l_810 = (-4L);
                (**l_626) = ((((**g_572) = l_660) == l_661) , ((l_668 , p_10) , l_667));
                if (((void*)0 == l_672))
                {
                    int l_680 = 0xCF256A80L;
                    int *l_695 = &g_2;
                    (*l_625) = (((~((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_int8_t_s_u(((*l_597) = (+(safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_680 , (safe_sub_func_int16_t_s_s((p_12 < ((*g_530) = l_680)), (*l_576)))), p_11)), ((**l_672) && (*l_576)))))), func_64((*g_573), p_10, g_343))) , l_680) & l_680))) || p_10)) >= (**l_625)) , (void*)0);
                    (**l_672) ^= p_12;
                    if ((func_35(p_10, (*g_530), g_536, l_683, (g_684 ^= g_442)) | ((+(safe_mul_func_uint16_t_u_u(0xC0FCL, (!(((void*)0 != &g_343) || (**l_672)))))) <= p_11)))
                    {
                        unsigned *l_691 = &g_121;
                        int l_694 = 0x288064B3L;
                        (*l_576) = ((safe_mul_func_uint8_t_u_u((((*l_691) = (safe_add_func_int16_t_s_s(l_680, (&g_117 == (void*)0)))) < func_64(l_691, (&g_618 == &g_618), (**l_626))), (l_692 != (**g_618)))) || l_694);
                        l_695 = &l_601;
                        (*l_576) = (l_667 < ((**l_672) != (p_12 != g_2)));
                    }
                    else
                    {
                        (**l_672) = p_12;
                    }
                }
                else
                {
                    short ***l_704 = &l_702;
                    int l_718 = 0xF56DDEC0L;
                    unsigned *l_723 = (void*)0;
                    short **l_728 = &l_703;
                    int l_778 = 0x68BBE33EL;
                    (*l_704) = l_702;
                    if ((*g_227))
                    {
                        (*l_576) |= (safe_mul_func_int16_t_s_s(p_11, (*g_128)));
                        return p_12;
                    }
                    else
                    {
                        unsigned *l_707 = &g_119;
                        unsigned short l_713 = 0x6FEBL;
                        unsigned *******l_735 = &l_616;
                        (**l_672) = ((((*l_597) = g_112) <= (((*l_707) = 0x9A803662L) || ((safe_add_func_int16_t_s_s((func_35((safe_sub_func_uint32_t_u_u((((((*l_654) |= l_712) || l_713) , (p_12 , g_200)) & ((-1L) ^ (g_536 && ((!(safe_unary_minus_func_uint8_t_u(((1L >= 0xF62680E8L) == 0xEB95L)))) , (**l_672))))), 8L)), p_10, p_11, (**g_572), g_119) > (*g_530)), 65535UL)) | 2L))) != (-10L));
                        (*l_626) = &l_668;
                        (*l_576) |= (safe_add_func_int16_t_s_s(((void*)0 != l_728), (((safe_rshift_func_int8_t_s_s(l_667, 4)) , ((g_117 <= (safe_sub_func_int16_t_s_s(g_54, ((safe_mul_func_int8_t_s_s(p_12, (*g_530))) == 0x2085L)))) < (((*l_735) = &g_617) != (void*)0))) , 0x76C8L)));
                    }
                    for (g_200 = (-13); (g_200 == 52); g_200 = safe_add_func_int8_t_s_s(g_200, 1))
                    {
                        unsigned l_756 = 0xB0143853L;
                        int *l_757 = &l_623;
                        (*l_626) = (void*)0;
                        (*l_757) |= p_12;
                    }
                    for (l_718 = 0; (l_718 == (-17)); l_718 = safe_sub_func_uint32_t_u_u(l_718, 9))
                    {
                        unsigned *l_775 = &g_200;
                        int l_776 = 0xE1E9FD62L;
                        g_392 = (((((g_760 = &g_345) != &g_342) != ((safe_add_func_int16_t_s_s(((l_776 &= (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(248UL, ((p_10 != p_12) != 0L))), 4))) < 0x386FL), 0xCA3BL)) ^ l_777)) >= p_10) , p_10);
                        if (l_776)
                            continue;
                        l_778 &= (l_668 && l_667);
                    }
                }
                for (g_392 = 14; (g_392 < 5); g_392--)
                {
                    const short l_786 = 1L;
                    unsigned char *l_803 = &l_599;
                    unsigned char *l_806 = &l_599;
                    for (l_600 = (-4); (l_600 == 22); l_600 = safe_add_func_int16_t_s_s(l_600, 3))
                    {
                        char l_783 = 0L;
                        l_783 = (-4L);
                        (*l_626) = (*l_672);
                    }
                    l_668 = p_11;
                    if ((g_51 = (safe_mod_func_int16_t_s_s(l_786, (((((*g_760) | ((((safe_mod_func_uint8_t_u_u(p_11, (safe_rshift_func_uint8_t_u_s(((*l_632) = 0x2FL), ((func_64(l_791, (*g_530), (((g_54 , ((p_11 ^ ((void*)0 == l_792)) , p_10)) > p_12) == g_343)) , l_786) > p_10))))) , g_165) , p_10) , l_786)) == 0x6DF9L) & 0x78L) , p_11)))))
                    {
                        if (p_10)
                            break;
                        (*l_625) = &l_668;
                    }
                    else
                    {
                        int *l_793 = &g_51;
                        (*l_672) = (void*)0;
                        (*l_625) = (*l_626);
                        (*l_793) &= p_10;
                    }
                    if (l_794)
                    {
                        int *l_795 = &l_601;
                        unsigned char *l_804 = (void*)0;
                        unsigned char **l_805 = (void*)0;
                        int *l_807 = &l_640;
                        (*l_795) &= l_786;
                        (*l_807) |= ((g_54 , (safe_rshift_func_int16_t_s_u((*g_760), (safe_add_func_uint8_t_u_u(((l_800 == l_802) == (p_11 , func_35(p_10, (*g_530), ((l_803 = &g_225) != (l_806 = l_804)), (***g_618), g_225))), g_165))))) , (*l_795));
                    }
                    else
                    {
                        int *l_808 = &g_112;
                        (*l_808) = p_12;
                        l_809 = ((*l_672) = &g_54);
                    }
                }
                g_112 = ((*g_760) & ((***l_721) = l_810));
            }
            (*l_814) = &l_639;
            (*l_821) = ((*l_817) = (void*)0);
            if (((*g_128) & p_10))
            {
                const unsigned *l_836 = &l_746;
                unsigned *l_837 = &l_746;
                int l_838 = 0L;
                unsigned short *l_859 = (void*)0;
                unsigned short *l_860 = (void*)0;
                unsigned short *l_861 = &g_536;
                unsigned *l_863 = &g_121;
                int *l_864 = &g_54;
                unsigned short * const **l_877 = &g_127;
                unsigned char l_878 = 0xD2L;
                unsigned l_897 = 4294967295UL;
                for (g_342 = 0; (g_342 == 22); g_342++)
                {
                    char l_831 = 0x22L;
                    int l_840 = 0L;
                    unsigned *l_841 = &g_121;
                    if ((safe_rshift_func_int8_t_s_s((((((((*l_598) = (safe_mod_func_uint8_t_u_u((((*l_800) = &g_442) != (((((*l_841) = (((((safe_mod_func_int16_t_s_s((((((*g_760) & (l_831 >= g_51)) , l_632) == &l_831) <= ((*l_597) = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(p_10, (l_840 = (l_838 & l_839)))) , p_12), 255UL)))), (*g_760))) <= 0xFB1B79AFL) || (*g_128)) != p_10) <= 0x2BL)) , (-1L)) > p_12) , (void*)0)), 0xD4L))) <= 0L) | g_165) >= (-1L)) & (*g_530)) ^ (*g_760)), g_54)))
                    {
                        return (*g_128);
                    }
                    else
                    {
                        if (l_838)
                            break;
                        g_112 |= ((safe_add_func_uint16_t_u_u(l_831, (*g_128))) || 0xC2L);
                        l_844 |= (p_11 , p_10);
                    }
                }
                g_392 = (l_601 = ((*l_864) = (p_10 == ((*l_863) ^= ((*g_760) && (l_862 = (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((*g_760), ((*g_128) ^= (~1UL)))), ((((*g_760) <= (func_64(l_837, ((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(l_838, 4)) , ((*l_861) = ((safe_lshift_func_uint16_t_u_s((8UL >= ((*g_530) < (-10L))), (**l_814))) >= (-7L)))), 1L)) , 1L), l_838)), l_838)) <= (-2L)), p_11) | 4L)) & 0x92L) , p_12)))))))));
                if (p_10)
                {
                    return (*g_128);
                }
                else
                {
                    unsigned short l_865 = 0x535FL;
                    unsigned *l_891 = (void*)0;
                    int ***l_900 = (void*)0;
                    const unsigned char l_914 = 0UL;
                    if ((*l_864))
                    {
                        return p_10;
                    }
                    else
                    {
                        int l_872 = 0x7483395FL;
                        (*l_864) &= l_865;
                        l_872 = l_872;
                        (*l_864) &= (((((-7L) < (g_200 >= (((void*)0 == &l_579) != (safe_add_func_uint16_t_u_u(((((*g_128) &= (l_877 != (p_11 , (void*)0))) , 0xFCL) >= p_12), 8UL))))) != 0L) , g_879) || 0xAC03L);
                        l_623 &= (safe_rshift_func_int16_t_s_s(((255UL <= (*l_864)) , (0x06CAL >= p_10)), (*g_760)));
                    }
                    if (((func_64(l_837, (((safe_mul_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_865, p_12)) || (*g_530)) , (-10L)), (*g_760))) <= 4294967295UL) , (*g_530)), g_54) , l_888) != &l_800))
                    {
                        int *l_889 = &g_51;
                        (*l_672) = (l_864 = l_889);
                        (*l_864) |= 0xFAFC1B52L;
                        (*l_814) = l_891;
                    }
                    else
                    {
                        int *l_892 = &l_623;
                        int l_902 = 2L;
                        unsigned short l_915 = 0xAE5AL;
                        (*l_672) = l_892;
                        l_902 ^= ((*l_864) = ((*l_892) = ((safe_mul_func_uint16_t_u_u(65528UL, (safe_sub_func_uint8_t_u_u(((**l_672) || (p_11 != l_897)), ((safe_rshift_func_uint8_t_u_s(((*l_632) = ((*g_530) = ((((l_901 = (p_10 , l_900)) != (void*)0) ^ p_11) < ((*l_815) || p_10)))), 3)) , (*g_530)))))) >= 0x93F7L)));
                        l_915 = (safe_mul_func_uint16_t_u_u(0x6F24L, ((safe_mod_func_uint8_t_u_u((((*g_760) = p_11) , ((safe_mod_func_int16_t_s_s(((*g_760) = (p_11 == g_119)), (((safe_add_func_int16_t_s_s((((*l_597) = (((safe_add_func_uint8_t_u_u((func_64(l_892, (*g_530), g_392) <= (((**l_672) = ((*l_632) ^= ((*g_530) , (*l_815)))) > 9UL)), (*g_530))) , 0xC57DL) , g_536)) , l_913), 65532UL)) > 4L) | g_342))) >= l_914)), p_12)) , 0xB81EL)));
                    }
                }
                return p_11;
            }
            else
            {
                unsigned l_916 = 4294967294UL;
                int l_922 = 0x53011701L;
                (*l_672) = &g_112;
                (*l_576) = (**l_626);
                (**l_626) ^= ((l_916 |= p_12) ^ p_10);
                l_922 = ((void*)0 == l_921);
            }
        }
        else
        {
            unsigned char l_944 = 0x2BL;
            unsigned *l_959 = &l_712;
            unsigned *l_960 = &g_200;
            int l_964 = 0xCC8CE6EFL;
            int *l_970 = &l_749;
            int **l_969 = &l_970;
            int *l_971 = &l_871;
            const int *l_977 = &g_54;
            const int **l_976 = &l_977;
            const int ***l_975 = &l_976;
            const int ****l_974 = &l_975;
            int *****l_980 = &g_978;
            int *l_981 = &l_601;
            if (p_10)
            {
                int *l_929 = &l_601;
                unsigned short *l_947 = (void*)0;
                unsigned short *l_948 = &l_666;
                for (g_879 = 0; (g_879 <= 21); g_879++)
                {
                    unsigned char l_930 = 0x3DL;
                }
                (*l_626) = &g_392;
            }
            else
            {
                unsigned char *l_961 = &l_599;
                (*l_576) &= (!((l_960 != (g_112 , l_960)) , (l_961 != l_961)));
                for (l_712 = 0; (l_712 <= 58); l_712++)
                {
                    l_964 ^= 0x14602716L;
                }
            }
            (*l_576) = func_64(l_960, (safe_mul_func_uint16_t_u_u((+((*l_654) = (safe_mul_func_uint8_t_u_u(p_11, ((*l_598) = g_108))))), ((((((*l_969) = l_959) != ((((*l_971) = ((void*)0 != (**l_593))) , (((*l_597) = (-10L)) == ((*g_530) |= (**l_625)))) , &l_871)) != 1L) >= 246UL) != p_11))), p_12);
            (*l_981) |= (**l_626);
        }
        (**l_626) = (-6L);
    }
    else
    {
        int *l_982 = &g_112;
        int **l_983 = &l_809;
        unsigned short ***l_984 = (void*)0;
        (*l_983) = l_982;
        (*l_983) = &l_601;
        (*l_982) = ((void*)0 != l_984);
    }
    (*l_988) = ((*l_986) = (*l_986));
    return p_12;
}







static short func_19(int p_20)
{
    unsigned *l_25 = &g_26;
    int **l_468 = &g_227;
    int l_476 = 0x8210BEDAL;
    unsigned short **l_535 = (void*)0;
    if (func_21(((*l_25) = (safe_rshift_func_uint8_t_u_u(g_2, 0)))))
    {
        int *l_466 = &g_54;
        short *l_467 = &g_164;
        unsigned *l_475 = &g_119;
        (*l_468) = &g_51;
    }
    else
    {
        int * const *l_480 = (void*)0;
        int * const **l_479 = &l_480;
        unsigned *l_491 = &g_119;
        int *l_492 = (void*)0;
        int *l_493 = (void*)0;
        int *l_494 = (void*)0;
        int *l_495 = &g_51;
        l_476 |= (g_121 == (safe_sub_func_int16_t_s_s((-1L), ((((void*)0 == l_479) && (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((0xFF4F0F04L > (safe_mul_func_uint8_t_u_u(0xA0L, (safe_add_func_int8_t_s_s(p_20, (safe_lshift_func_int16_t_s_s(((((~(p_20 , p_20)) && g_343) , (void*)0) != l_491), g_117))))))), 7)) & g_121), g_392))) || g_200))));
        (*l_495) = p_20;
        return p_20;
    }
    (*g_227) |= (safe_lshift_func_int16_t_s_u((p_20 <= (-8L)), 4));
    if ((**l_468))
    {
        return p_20;
    }
    else
    {
        unsigned l_500 = 0xF750CC62L;
        const int *l_501 = &l_476;
        unsigned char *l_533 = &g_225;
        int l_562 = 1L;
        int l_565 = (-7L);
        for (g_54 = 0; (g_54 >= (-28)); --g_54)
        {
            const int **l_502 = &l_501;
            int l_503 = 0x61FED1FCL;
            unsigned *l_508 = &l_500;
            unsigned short **l_526 = &g_128;
            unsigned short **l_529 = &g_128;
            char l_534 = 3L;
            (*l_502) = l_501;
            l_503 &= (**l_502);
        }
        return g_442;
    }
}







static int func_21(unsigned p_22)
{
    const unsigned l_41 = 0UL;
    int *l_50 = &g_51;
    int *l_55 = (void*)0;
    unsigned *l_437 = &g_26;
    unsigned char l_438 = 255UL;
    unsigned *l_446 = &g_200;
    if ((g_26 != ((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((-8L), ((safe_sub_func_uint16_t_u_u(((*g_128) = (p_22 && (((safe_sub_func_uint16_t_u_u(65534UL, func_35((l_41 ^ (((((safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(func_46(((*l_50) = l_41), (safe_lshift_func_int16_t_s_s(0x09E8L, ((g_54 = 0x3A099773L) || (l_50 != l_55)))), &g_26), 1)) != g_208), g_2)) | p_22) , g_208) & 65528UL) , p_22)), g_2, p_22, l_437, l_438))) | (-1L)) < p_22))), 1L)) ^ p_22))), 0UL)) <= p_22) ^ 0x0332F5C8L) && p_22)))
    {
        int *l_443 = &g_54;
        int l_447 = 0L;
        l_443 = (void*)0;
        (*l_50) = ((safe_mul_func_uint8_t_u_u((l_446 == ((**g_390) = &p_22)), p_22)) != p_22);
        (*g_390) = (*g_148);
        (*l_50) &= l_447;
    }
    else
    {
        int *l_465 = &g_54;
        for (g_343 = 0; (g_343 != 20); ++g_343)
        {
            int *l_450 = &g_51;
            int **l_451 = &l_50;
            unsigned char *l_456 = &l_438;
            char *l_463 = &g_117;
            int l_464 = 0x30814F4FL;
            (*l_451) = l_450;
            if ((*l_450))
                break;
            l_464 &= (((*l_463) = func_64(l_450, (((**l_451) & func_64(&p_22, ((*l_456) = (safe_add_func_uint16_t_u_u((*l_50), (safe_add_func_uint32_t_u_u(p_22, (*l_450)))))), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(65535UL, 2)), 1)))) > ((safe_add_func_uint16_t_u_u((p_22 , (*g_128)), p_22)) != g_108)), p_22)) & 0xC5L);
        }
        l_55 = l_465;
    }
    return p_22;
}







static short func_35(int p_36, unsigned char p_37, short p_38, unsigned * p_39, unsigned p_40)
{
    unsigned char l_439 = 0x3CL;
    int l_440 = 1L;
    unsigned *l_441 = (void*)0;
    l_440 = l_439;
    g_227 = &l_440;
    l_440 |= g_442;
    return l_440;
}







static unsigned char func_46(int p_47, short p_48, unsigned * p_49)
{
    char l_62 = 0x28L;
    int *l_63 = &g_51;
    unsigned l_81 = 0xBE4A9FF1L;
    int *l_391 = &g_392;
    unsigned char *l_393 = (void*)0;
    unsigned char *l_394 = (void*)0;
    short *l_402 = (void*)0;
    short *l_403 = &g_342;
    (*l_391) = ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_62, (g_54 <= p_47))), ((*l_403) = (((((*l_63) &= (&g_2 != l_63)) && ((func_64(&g_26, ((*l_63) = (safe_add_func_int16_t_s_s(g_26, (((*l_391) &= (safe_rshift_func_int16_t_s_u(func_72((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((*l_63) & g_2) & p_47), 4294967295UL)), l_81)), 3)), (*l_63)), p_48))) ^ g_200)))), p_47) , 0x8FBCCC2CL) , 0x58747C4EL)) ^ 255UL) , g_51)))), g_2)) >= g_2);
    for (g_343 = (-29); (g_343 >= (-9)); g_343++)
    {
        char l_418 = 9L;
        int l_421 = 1L;
        int l_422 = 1L;
        for (g_345 = 0; (g_345 < (-8)); g_345 = safe_sub_func_uint8_t_u_u(g_345, 4))
        {
            unsigned **l_411 = &g_150;
            unsigned ***l_410 = &l_411;
            unsigned **l_412 = (void*)0;
            int l_417 = 0xB1AD04E0L;
            int l_419 = (-9L);
            int *l_420 = &g_392;
            l_420 = (func_64((**g_390), g_164, ((safe_add_func_uint8_t_u_u((((l_412 = ((*l_410) = &p_49)) != &p_49) != 0x01L), g_392)) , func_64(p_49, ((((safe_rshift_func_uint8_t_u_u(func_64((**g_148), (l_417 = (safe_mul_func_int8_t_s_s((g_345 , 1L), 1L))), g_101), g_200)) , l_418) <= (*l_391)) == l_419), g_342))) , (void*)0);
            l_422 |= (((l_421 |= ((*l_391) = (p_47 <= ((*l_403) = ((void*)0 == &l_81))))) , 1L) , (*l_63));
        }
        for (l_418 = 0; (l_418 != (-21)); l_418--)
        {
            (*l_391) = ((l_422 , (*p_49)) , (p_48 ^ (safe_lshift_func_uint8_t_u_u(p_48, 7))));
        }
        return (*l_391);
    }
    (*l_391) ^= (*l_63);
    for (g_51 = 0; (g_51 <= 11); g_51 = safe_add_func_uint16_t_u_u(g_51, 5))
    {
        int l_433 = 0L;
        unsigned *l_434 = &g_26;
        int *l_435 = (void*)0;
        int *l_436 = &g_54;
        (*l_436) |= (0xEB98L ^ (!(((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u((((+((-5L) || (l_433 != 9L))) <= p_48) < p_47), ((*l_391) = l_433))) > func_64(l_434, l_433, g_345)) , (*l_63)), g_101)) , (-7L)) == (-3L))));
    }
    return p_47;
}







static unsigned func_64(unsigned * p_65, unsigned char p_66, const unsigned p_67)
{
    int l_395 = 0x40A1C30BL;
    int *l_396 = &g_112;
    const unsigned l_399 = 1UL;
    int l_401 = 0x25F03459L;
    l_401 ^= (l_395 || (p_66 && (*l_396)));
    return (*l_396);
}







static short func_72(int p_73, unsigned p_74)
{
    int *l_86 = &g_54;
    int **l_358 = &l_86;
    unsigned short *l_367 = &g_165;
    int l_374 = 0xDFED9079L;
    unsigned *l_375 = &g_119;
    unsigned ***l_388 = &g_149;
    unsigned ****l_389 = (void*)0;
    (*l_358) = func_82(l_86, ((safe_add_func_uint8_t_u_u(g_2, (safe_rshift_func_uint16_t_u_u((g_2 || p_73), ((l_86 != (void*)0) , (l_86 == l_86)))))) <= 1UL), &g_26);
    (*l_358) = &g_112;
    (*l_86) = (safe_add_func_uint32_t_u_u((((0x50ECL == ((g_165 >= ((p_73 , (g_108 & ((((safe_sub_func_int32_t_s_s(p_74, (safe_mul_func_uint16_t_u_u((*l_86), ((*g_128) = ((*l_86) > ((((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((**l_358) & ((g_390 = l_388) != (void*)0)), 0xF96EL)), (**l_358))), g_208)) == (-1L)) & 0x4A02L) | 0xC4462B6AL))))))) , &l_358) == &l_358) | 0x1288609CL))) || p_73)) > 0x40L)) && g_54) , g_200), 0UL));
    return g_112;
}







static int * func_82(int * p_83, unsigned p_84, unsigned * p_85)
{
    unsigned char l_91 = 255UL;
    unsigned **l_95 = (void*)0;
    unsigned ***l_94 = &l_95;
    unsigned char *l_96 = &l_91;
    int l_99 = (-1L);
    unsigned short *l_100 = &g_101;
    unsigned *l_120 = &g_121;
    char l_185 = (-1L);
    int l_201 = (-1L);
    unsigned **l_315 = &g_150;
    int l_340 = 0L;
    int *l_356 = &l_201;
    int *l_357 = (void*)0;
    g_51 = (*p_83);
    (*l_94) = ((~((g_26 < (l_91 , l_91)) >= (safe_rshift_func_uint8_t_u_u(0x03L, 6)))) , &p_85);
    if (((((*l_96) &= (((*l_95) = &p_84) != (void*)0)) < (l_99 = (safe_sub_func_int32_t_s_s((*p_83), (*p_83))))) , ((l_99 <= l_91) , ((p_84 & g_51) == ((*l_100) = ((-1L) > g_51))))))
    {
        unsigned l_106 = 0xC2D96A12L;
        char *l_107 = &g_108;
        char *l_109 = (void*)0;
        char *l_110 = &g_111;
        const int *l_113 = &g_2;
        int *l_115 = &g_51;
        int **l_114 = &l_115;
        char *l_116 = &g_117;
        unsigned *l_118 = &g_119;
        int *l_122 = (void*)0;
        int *l_123 = &g_51;
        unsigned short * const *l_126 = &l_100;
        int l_230 = 4L;
        char l_277 = 0L;
        int ***l_307 = &l_114;
        int ****l_306 = &l_307;
        int **l_308 = &l_122;
        if (((*l_123) = (((*l_118) |= (((g_112 = ((*l_110) ^= ((*l_107) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_51, 1)), l_106))))) && ((*l_94) == (void*)0)) >= ((*l_116) &= (p_84 , (l_113 == ((*l_114) = &l_99)))))) < ((p_83 == (l_120 = p_83)) && (-3L)))))
        {
            for (p_84 = 0; (p_84 == 23); ++p_84)
            {
                g_127 = l_126;
            }
        }
        else
        {
            const unsigned l_169 = 9UL;
            unsigned *l_178 = &l_106;
            int l_179 = 0xD50E3CEEL;
            int *l_293 = &l_230;
            if ((safe_sub_func_uint16_t_u_u((**g_127), (g_2 , l_99))))
            {
                unsigned l_151 = 0xDDDCD3E8L;
                int l_152 = 0x559E040FL;
                const int *l_153 = &l_152;
                const char *l_156 = &g_117;
                int l_172 = 0x319732ECL;
                unsigned short l_207 = 65535UL;
                for (l_99 = 24; (l_99 != (-1)); l_99--)
                {
                    char l_133 = 0L;
                    int l_173 = (-9L);
                    if (l_133)
                    {
                        short *l_163 = &g_164;
                        int l_166 = 0L;
                        l_152 |= (p_84 , (g_51 , (safe_rshift_func_int16_t_s_u(g_26, (((safe_mul_func_uint8_t_u_u(p_84, (safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((&l_95 == g_148), (l_151 >= g_108))) ^ 255UL), 0x60L)) & g_121), (*l_123))) ^ p_84), 0x52C7L)) ^ l_133), p_84)))) || 255UL) , 1UL)))));
                        l_153 = (void*)0;
                        g_112 |= ((((*l_95) = (((safe_mod_func_uint16_t_u_u(((~0L) | ((((g_165 &= (((p_84 , ((void*)0 == l_156)) | (p_84 <= (safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(0x2739EBEBL, g_54)) > (p_84 != ((safe_mul_func_int16_t_s_s(((*l_163) = 1L), 0L)) <= p_84))) | (*p_83)), 0xDFL)))) == (*g_128))) <= l_166) >= 0x97L) & (**g_127))), g_101)) && 0x91CAL) , (void*)0)) != &p_84) , 5L);
                    }
                    else
                    {
                        g_112 ^= (safe_mul_func_int16_t_s_s((~(l_169 && 1L)), ((g_108 ^ (l_172 = (safe_lshift_func_uint8_t_u_s(((*l_96) &= g_2), 7)))) < ((p_84 , (void*)0) == (void*)0))));
                        return p_83;
                    }
                    if (g_2)
                    {
                        l_173 = (*p_83);
                        (*l_123) ^= ((safe_mul_func_uint16_t_u_u(p_84, l_99)) & l_173);
                        l_179 = (safe_rshift_func_int8_t_s_u((p_83 == ((*p_83) , l_178)), 2));
                    }
                    else
                    {
                        short l_182 = 0L;
                        (*l_123) = (((l_172 = ((safe_mod_func_uint32_t_u_u(l_133, l_133)) & (*p_83))) != ((*l_96) = (p_84 & (l_152 = (((**g_127) = (l_182 , ((!g_51) != (((-1L) == (l_185 = (safe_mod_func_int32_t_s_s((*p_83), l_169)))) , 0xB5L)))) && 4L))))) && g_119);
                        (*l_123) ^= g_26;
                    }
                    l_152 |= (((safe_mul_func_uint16_t_u_u((*g_128), (l_179 = (((g_2 | ((safe_sub_func_int32_t_s_s(((*l_123) = 0L), (g_164 , (**l_114)))) || (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_117, ((l_201 = g_200) , p_84))), ((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((safe_mod_func_int8_t_s_s((+p_84), 1UL)) , l_99))), g_200)) & g_119) >= p_84) > 1UL))) <= 0x47E6L), l_207)), (**g_127))), 0xD2F48C2FL)))) == g_208) | p_84)))) ^ g_101) <= 1UL);
                    if ((*p_83))
                        break;
                }
                for (g_108 = 0; (g_108 == 5); ++g_108)
                {
                    int *l_217 = &l_201;
                    if (g_111)
                    {
                        l_201 |= (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((**l_114) > (**g_127)), (l_172 = (g_26 == (l_179 & ((*l_96) &= (safe_mul_func_int16_t_s_s(p_84, g_112)))))))) || p_84), ((*l_115) < 0x14L)));
                        (*l_123) = 7L;
                    }
                    else
                    {
                        return &g_2;
                    }
                }
                (**l_114) = ((*g_128) || ((**g_127) = p_84));
            }
            else
            {
                unsigned * const l_220 = &g_121;
                unsigned char *l_223 = (void*)0;
                unsigned char *l_224 = &g_225;
                int l_262 = 0x962F29F1L;
                int *l_271 = &l_262;
                if ((1UL || ((safe_add_func_int16_t_s_s((((void*)0 == l_220) , (safe_sub_func_int16_t_s_s((l_91 , l_91), ((g_119 = (&g_54 == (((*l_224) = g_200) , p_85))) , p_84)))), g_121)) <= (-2L))))
                {
                    int *l_231 = &g_51;
                    unsigned ***l_249 = &g_149;
                    if (g_51)
                    {
                        int ***l_228 = &l_114;
                        int ***l_229 = &g_226;
                        (*l_229) = ((*l_228) = g_226);
                        (*l_115) &= l_230;
                    }
                    else
                    {
                        unsigned ****l_250 = &l_94;
                        unsigned short *l_251 = &g_165;
                        int l_252 = 0L;
                        int **l_253 = &g_227;
                        (*g_226) = l_231;
                        (*g_227) = (safe_add_func_int16_t_s_s((**l_114), (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((*g_128), g_121)) > ((g_117 ^ (safe_unary_minus_func_uint8_t_u((((((0x7AL >= ((l_252 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((0xE6B08A47L > 5UL), ((safe_mod_func_uint16_t_u_u(((*l_251) = (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((3L < ((((*l_250) = l_249) == (void*)0) ^ l_169)), 0x22L)) , &g_149) == (void*)0), 0x6CBFL))), p_84)) | p_84))), p_84))) < 65528UL)) , (**g_226)) > g_117) , (*g_227)) || 4294967287UL)))) , 0x4184L)), 1L))));
                        (*l_253) = l_220;
                    }
                }
                else
                {
                    unsigned char l_268 = 1UL;
                    short *l_276 = &g_164;
                    for (l_185 = 14; (l_185 != 21); l_185 = safe_add_func_int16_t_s_s(l_185, 4))
                    {
                        int ***l_258 = &g_226;
                        int ***l_259 = &l_114;
                        char l_265 = 2L;
                        (*l_123) = ((*l_115) = (safe_lshift_func_int8_t_s_s(((((g_121 | g_111) != g_225) , p_84) < p_84), (((*l_258) = (void*)0) != (l_179 , ((*l_259) = ((**g_127) , &p_83)))))));
                        (*l_115) |= (safe_lshift_func_int8_t_s_s((&p_84 == ((l_262 & (safe_add_func_int8_t_s_s((~p_84), 1L))) , l_118)), (((l_265 ^= ((p_84 ^ (p_84 == ((*p_83) > (*p_83)))) > p_84)) , 0xCE0AL) & 0UL)));
                        if (l_169)
                            break;
                        (*g_227) = (l_91 ^ (safe_mul_func_uint16_t_u_u((l_99 ^ l_268), (((l_268 , g_111) , 0L) < p_84))));
                    }
                    for (g_119 = (-8); (g_119 != 55); ++g_119)
                    {
                        l_271 = &g_112;
                    }
                    (*l_114) = &g_54;
                    (*l_114) = ((safe_mod_func_uint32_t_u_u((l_268 == (safe_lshift_func_int16_t_s_s(((*l_276) = 0x8DAAL), 9))), l_277)) , &l_99);
                }
                (*l_271) = (safe_sub_func_uint8_t_u_u(((*l_224) = ((safe_add_func_int8_t_s_s(((*l_271) | (((*l_96) ^= (*l_113)) , ((safe_rshift_func_uint16_t_u_u((**g_127), 8)) ^ (safe_lshift_func_int8_t_s_s(((0x0141AF60L > (l_169 <= l_179)) || (safe_add_func_uint32_t_u_u(g_121, ((*l_118) = (&p_84 != ((**l_94) = (**g_148))))))), g_101))))), 0x37L)) | l_201)), p_84));
                (*l_271) |= (*p_83);
            }
            for (p_84 = 8; (p_84 > 29); p_84 = safe_add_func_int32_t_s_s(p_84, 3))
            {
                int *l_290 = &g_54;
                (*l_114) = l_290;
                for (g_121 = 0; (g_121 == 56); g_121 = safe_add_func_uint8_t_u_u(g_121, 2))
                {
                    unsigned ***l_303 = &l_95;
                    l_290 = l_293;
                    for (g_112 = (-20); (g_112 == 8); g_112 = safe_add_func_int16_t_s_s(g_112, 6))
                    {
                        unsigned ****l_302 = &l_94;
                        (*l_123) = (safe_sub_func_int8_t_s_s(g_121, 253UL));
                        (*l_114) = p_85;
                        (*l_123) |= (safe_rshift_func_int16_t_s_u((safe_mul_func_uint32_t_u_u((!4294967295UL), (((*l_302) = &g_149) != l_303))), (safe_rshift_func_int8_t_s_s(p_84, 1))));
                        l_290 = ((*l_114) = p_85);
                    }
                }
                (*l_293) ^= p_84;
            }
        }
        (*l_114) = (((*l_107) = (g_111 = (&l_114 == ((*l_306) = &g_226)))) , &g_51);
        (*l_308) = (g_227 = (*l_114));
    }
    else
    {
        unsigned l_324 = 4294967295UL;
        unsigned ****l_339 = &l_94;
        unsigned char *l_349 = &l_91;
        for (g_165 = 0; (g_165 == 9); ++g_165)
        {
            short *l_316 = &g_164;
            int l_317 = 8L;
            char *l_320 = &g_117;
            int *l_321 = &l_99;
            short l_355 = 1L;
            if (((*l_321) ^= (safe_mul_func_int16_t_s_s(((*g_227) , (1L & ((((safe_lshift_func_int16_t_s_u(((*l_316) &= (l_315 == (*g_148))), l_317)) <= ((void*)0 == l_316)) | ((*l_320) |= ((*g_128) > (safe_mul_func_uint8_t_u_u(l_317, g_51))))) >= p_84))), p_84))))
            {
                const unsigned ***l_338 = (void*)0;
                const unsigned **** const l_337 = &l_338;
                short *l_341 = &g_342;
                short *l_344 = &g_345;
                int l_346 = 1L;
                unsigned ***l_354 = &g_149;
                (*g_227) |= (((safe_mod_func_uint32_t_u_u(((*l_120) = p_84), (((4294967291UL == ((p_84 == (l_324 , (l_99 > (*l_321)))) ^ ((safe_mod_func_uint16_t_u_u((((*l_344) = (g_343 = ((*l_341) = (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*l_96) = g_200) > (((safe_add_func_uint16_t_u_u((*g_128), ((*l_316) &= (l_337 == l_339)))) > g_117) , p_84)), l_185)), l_340)), 4294967286UL)) , (*l_321)), l_324))))) , (**g_127)), g_208)) , p_84))) , 0xBA0CL) & p_84))) != 0xE5L) > 0xB1L);
                l_355 = ((l_346 >= ((g_26 >= ((((((safe_rshift_func_uint16_t_u_u((**g_127), 8)) , (p_84 && ((g_117 , l_349) == &g_225))) <= ((*l_120) = (!p_84))) & (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((((*l_339) = l_354) == (*l_337)), p_84)) & (-1L)), 2))) ^ p_84) , l_346)) <= 0x4CL)) , (**g_226));
            }
            else
            {
                (*g_227) = (*g_227);
                (*g_226) = p_85;
            }
            return p_83;
        }
    }
    return l_357;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
