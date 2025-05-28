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


struct S0 {
   unsigned f0;
   short f1;
   const short f2;
   unsigned f3 : 24;
   const int f4;
   char f5;
   unsigned char f6;
};

union U1 {
   unsigned f0 : 18;
   unsigned f1;
   unsigned char f2;
};


static unsigned g_12 = 0UL;
static unsigned char g_21 = 0x19L;
static const unsigned char g_38 = 255UL;
static const unsigned char *g_37 = &g_38;
static int g_40 = (-4L);
static unsigned char g_69 = 1UL;
static unsigned char *g_68 = &g_69;
static int g_72 = 0x28D0D4A4L;
static unsigned short g_77 = 65535UL;
static unsigned short g_94 = 65535UL;
static struct S0 g_99 = {4294967295UL,-1L,1L,194,0L,1L,0xBDL};
static unsigned g_111 = 0UL;
static unsigned char **g_140 = (void*)0;
static unsigned char ***g_139 = &g_140;
static unsigned char g_145 = 5UL;
static struct S0 * const *g_154 = (void*)0;
static unsigned g_175 = 0xB3E14F1FL;
static int g_177 = 5L;
static struct S0 g_187 = {4294967289UL,0xDD28L,0L,83,-1L,7L,0x78L};
static union U1 g_188 = {4294967295UL};
static int *g_227 = (void*)0;
static unsigned short *g_298 = &g_77;
static unsigned short *g_300 = &g_77;
static const unsigned g_302 = 0UL;
static unsigned g_457 = 0x97B1F3AFL;
static unsigned g_503 = 0x00954460L;
static unsigned g_513 = 4294967295UL;
static int g_515 = 8L;
static unsigned g_521 = 0UL;
static int g_523 = 0x30079341L;
static char g_570 = (-9L);
static const int *g_603 = &g_177;
static struct S0 **g_673 = (void*)0;
static int **g_779 = (void*)0;
static unsigned char g_785 = 0x44L;
static unsigned char ****g_792 = &g_139;
static unsigned char *****g_791 = &g_792;
static const int **g_806 = &g_603;
static union U1 **g_822 = (void*)0;
static char *g_858 = &g_570;
static char **g_857 = &g_858;
static char ***g_856 = &g_857;
static int *g_890 = (void*)0;
static char g_902 = 0xE6L;
static union U1 g_931 = {0UL};
static unsigned g_943 = 0x5BBBF206L;
static unsigned char g_955 = 255UL;



static char func_1(void);
static int func_2(unsigned char p_3, const int p_4, const int p_5, const unsigned p_6);
static unsigned func_15(const int p_16, unsigned char p_17, char p_18, unsigned p_19);
static unsigned char * func_22(unsigned char * p_23, unsigned char * p_24, char p_25, const unsigned char * p_26, unsigned char * p_27);
static unsigned char * func_28(int p_29, unsigned char * p_30, unsigned char * p_31, const unsigned p_32, unsigned short p_33);
static int func_34(const unsigned char * p_35, short p_36);
static int * func_41(unsigned p_42, short p_43, union U1 p_44, char p_45, int p_46);
static unsigned char func_47(struct S0 p_48, unsigned char p_49, union U1 p_50);
static union U1 func_52(const unsigned p_53, unsigned char p_54, const unsigned char * p_55, unsigned char p_56, unsigned p_57);
static unsigned char * func_59(unsigned char p_60, const union U1 p_61, union U1 p_62, const int * const p_63, unsigned p_64);
static char func_1(void)
{
    char l_7 = (-3L);
    unsigned char *l_20 = &g_21;
    unsigned char **l_518 = &g_68;
    int *l_522 = &g_523;
    const int l_524 = (-1L);
    struct S0 **l_675 = (void*)0;
    union U1 l_726 = {1UL};
    unsigned l_727 = 0x534A2DFFL;
    const char *l_731 = (void*)0;
    const char **l_730 = &l_731;
    char l_737 = 0L;
    unsigned char *l_752 = &g_99.f6;
    int l_795 = 0L;
    unsigned l_811 = 0x7C6E6096L;
    int ***l_845 = (void*)0;
    unsigned l_880 = 0xAB53934BL;
    short l_881 = 0xE3D8L;
    const unsigned l_887 = 0xBDD6A47FL;
    short *l_981 = (void*)0;
    short *l_982 = &g_99.f1;
    struct S0 l_987 = {4294967295UL,0x65F9L,0x0D82L,1191,5L,6L,246UL};
    int l_988 = 0xF7EB0519L;
    unsigned short l_989 = 0xFDC1L;
    int *l_990 = &l_988;
    if (func_2(l_7, ((*l_522) |= (g_521 &= (((g_12 = (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_12, (g_12 && 0UL))), (safe_rshift_func_uint16_t_u_s(g_12, 5))))) , ((g_12 == ((func_15(l_7, ((*l_20) |= g_12), ((((*l_518) = func_22(func_28(func_34(g_37, g_38), l_20, l_20, l_7, l_7), l_20, g_12, l_20, l_20)) == &g_38) , g_99.f4), g_503) && l_7) , g_175)) , (*g_298))) , (-4L)))), g_503, l_524))
    {
        unsigned *l_670 = &g_175;
        const unsigned char *l_671 = &g_21;
        int l_683 = 2L;
        const union U1 l_762 = {4294967295UL};
        unsigned char *l_765 = &g_187.f6;
        int **l_807 = &g_227;
        unsigned short l_854 = 8UL;
        char ***l_855 = (void*)0;
        const unsigned l_860 = 0xDCBBDF8DL;
        struct S0 l_871 = {4UL,1L,0L,335,-1L,0xFBL,255UL};
        unsigned char l_905 = 2UL;
        short l_913 = 0L;
        unsigned l_914 = 4294967295UL;
        int *l_915 = &g_177;
        if ((1UL >= g_99.f0))
        {
            unsigned l_672 = 4294967294UL;
            struct S0 ***l_674 = &g_673;
            short l_676 = (-4L);
            union U1 l_684 = {0x3191E6CDL};
            int l_685 = 0x910D322FL;
            int *l_686 = &l_685;
            short l_725 = 1L;
            int l_759 = 1L;
            const unsigned char l_774 = 246UL;
            unsigned l_797 = 4294967288UL;
            unsigned l_849 = 1UL;
            (*l_686) = (l_683 = ((l_676 == l_676) , ((*l_522) = (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(l_683, 5)) , g_187.f2), g_38)) >= l_685), (*g_68))))));
            if (((*l_522) , g_187.f4))
            {
                unsigned l_689 = 7UL;
                const unsigned char *l_700 = &g_21;
                int l_717 = 0x300FC23CL;
                int *l_718 = (void*)0;
                short *l_728 = &l_725;
                int **l_729 = &l_522;
                for (l_672 = (-3); (l_672 != 31); ++l_672)
                {
                    unsigned short l_690 = 0xC9B4L;
                    short *l_695 = &g_187.f1;
                    const unsigned char *l_701 = &g_38;
                    int *l_702 = &g_177;
                    unsigned *l_703 = &g_12;
                    unsigned *l_708 = &l_689;
                    (*l_686) ^= l_689;
                    (*l_702) ^= ((l_690 = l_683) > (safe_mod_func_int32_t_s_s(((*l_686) != (safe_mod_func_int16_t_s_s(((*l_695) = 1L), l_689))), func_15(l_689, l_689, (g_187.f5 , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((*l_522), l_683)), 1))), (*l_686)))));
                    l_718 = func_41(((*l_703) = (*l_702)), g_38, g_188, ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((g_99.f1 != 1L) || (((*l_522) = ((*l_708) = (g_503 < (~(*l_522))))) , (l_689 <= ((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((*l_695) = ((*l_686) | l_689)) & (*l_522)), l_683)) != l_683), 1L)) & 65535UL), g_99.f3)), g_145)) > l_689)))), g_187.f4)), g_99.f4)) > g_187.f6), l_717);
                }
                (*l_729) = (((g_187.f1 = ((*l_728) = ((safe_mod_func_uint16_t_u_u((func_15((l_683 >= (safe_lshift_func_uint8_t_u_s(((*l_522) , ((((*l_522) , (0x07D834A7L < (*l_686))) || (*g_37)) && (*l_522))), 2))), l_683, (*l_522), (*l_522)) >= 255UL), (*g_298))) , l_727))) >= 3UL) , (void*)0);
                (*l_686) &= l_726.f0;
            }
            else
            {
                const char ***l_732 = &l_730;
                int l_735 = 5L;
                unsigned short l_745 = 65535UL;
                const unsigned char *l_764 = &g_21;
                short l_766 = 0x1F10L;
                (*l_732) = l_730;
                if ((*l_686))
                {
                    int l_736 = 0x5A06EC77L;
                    char **l_742 = (void*)0;
                    char *l_744 = &g_187.f5;
                    char **l_743 = &l_744;
                    int **l_748 = &l_522;
                    (*l_522) |= ((l_737 &= (safe_lshift_func_uint16_t_u_u((l_735 , l_736), 11))) < (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_94 < (g_188 , (((*l_743) = &g_570) != &g_570))), l_745)), (l_745 != (*g_68)))));
                    (*l_686) = l_736;
                    (*l_686) |= (((**l_743) &= ((*l_522) ^ (safe_rshift_func_int8_t_s_s((l_683 != 0xC9L), ((l_748 != (void*)0) != (*g_298)))))) && 1UL);
                    for (l_683 = 0; (l_683 <= 15); l_683 = safe_add_func_uint8_t_u_u(l_683, 4))
                    {
                        const short l_751 = 0x2DE1L;
                        short *l_760 = (void*)0;
                        short *l_761 = &l_676;
                        unsigned char *l_763 = &g_145;
                        unsigned char *l_767 = &g_99.f6;
                        (**l_748) = g_513;
                        (**l_748) |= ((l_751 , (l_763 = l_763)) != l_767);
                    }
                }
                else
                {
                    char l_771 = 0xA2L;
                    g_177 = ((((*g_298) = 6UL) <= ((~l_745) <= (safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u(l_762.f0, l_771)))))) , ((*l_522) = l_745));
                    (*l_522) = 0xEBC629ACL;
                }
            }
            for (l_685 = 6; (l_685 != 28); l_685++)
            {
                int *l_778 = &g_515;
                int **l_777 = &l_778;
                unsigned char *****l_793 = &g_792;
                int l_794 = (-1L);
                int l_804 = 0L;
                g_779 = l_777;
                for (l_726.f1 = (-19); (l_726.f1 >= 24); l_726.f1 = safe_add_func_int8_t_s_s(l_726.f1, 4))
                {
                    int *l_782 = &l_683;
                    struct S0 l_788 = {0xCCEE27B4L,0L,-9L,555,-4L,0xB4L,0x37L};
                    const char *l_796 = (void*)0;
                    const int **l_805 = &g_603;
                    unsigned char * const *l_818 = &l_765;
                    int l_823 = 0xBAE9F0B6L;
                    unsigned l_837 = 1UL;
                    (*l_782) = l_683;
                    if (((safe_mod_func_uint32_t_u_u(g_99.f2, ((0x28A8L & (((+((((((g_785 , (safe_lshift_func_int8_t_s_u(0x0BL, ((((*l_782) == g_187.f3) , l_794) || l_795)))) <= (*l_782)) , l_671) != l_796) , l_794) & 0UL)) > (*l_782)) , (-1L))) || (*l_782)))) , l_797))
                    {
                        int ***l_808 = &l_807;
                        int **l_810 = &g_227;
                        int ***l_809 = &l_810;
                        char *l_816 = &l_737;
                        const char l_817 = 0xE5L;
                        unsigned char * const **l_819 = &l_818;
                        int *l_831 = &l_804;
                        l_759 = ((*l_686) || 0L);
                        (*l_805) = func_41(g_111, ((g_806 = l_805) != ((*l_809) = ((*l_808) = l_807))), g_188, g_785, l_811);
                        (*l_782) &= ((safe_lshift_func_uint16_t_u_s((((safe_div_func_uint8_t_u_u((((*l_816) = g_99.f5) & (~l_817)), l_726.f0)) < (((***g_791) != ((*l_819) = l_818)) | 1UL)) == (safe_mul_func_int16_t_s_s((((**l_777) = (**g_779)) , (g_99.f1 = ((void*)0 != g_822))), (**l_805)))), 3)) > l_823);
                        (*l_782) = (((safe_unary_minus_func_uint16_t_u((*g_298))) < l_794) != (((*l_670) = (*l_782)) == ((*l_831) = (safe_lshift_func_int16_t_s_s(0x2BA2L, (safe_mul_func_uint8_t_u_u((l_819 == (**g_791)), (g_187.f6 != (safe_sub_func_int32_t_s_s((g_177 = (**g_806)), (((-1L) || 0x25L) && (*l_782))))))))))));
                    }
                    else
                    {
                        struct S0 l_832 = {0UL,0xDD5CL,-1L,3336,0x2C51CF86L,0x47L,254UL};
                        (*l_782) = (((*l_670) = func_15(g_99.f6, (*g_68), l_794, (l_832 , ((*l_686) , ((*l_670) = (safe_rshift_func_uint16_t_u_s((func_15((safe_mod_func_int8_t_s_s(l_832.f4, ((g_40 |= (l_832.f6 < (func_52(l_804, l_794, (*l_518), (*g_37), l_837) , 0UL))) ^ g_187.f0))), l_832.f2, g_99.f6, g_99.f5) && 0xA24FA060L), g_99.f6))))))) ^ 0xAA30335CL);
                    }
                    if ((*l_686))
                    {
                        (*l_805) = (void*)0;
                    }
                    else
                    {
                        int l_844 = 6L;
                        int ****l_846 = (void*)0;
                        int ***l_848 = &l_807;
                        int ****l_847 = &l_848;
                        char ****l_859 = &g_856;
                        unsigned *l_861 = &g_12;
                        g_72 &= (safe_rshift_func_int8_t_s_u((l_849 = g_99.f3), (*g_68)));
                        (*l_782) |= (safe_add_func_int16_t_s_s((!(safe_add_func_int32_t_s_s(l_854, ((l_855 == ((*l_859) = g_856)) || (0L <= (*g_68)))))), g_38));
                    }
                }
                for (g_521 = 0; (g_521 > 45); g_521 = safe_add_func_int32_t_s_s(g_521, 4))
                {
                    unsigned char l_864 = 0xE0L;
                    int *l_865 = &l_794;
                    int *l_866 = &g_523;
                    (*l_866) = (((*g_298) &= (*l_686)) != (g_513 != ((*l_865) ^= l_864)));
                }
                if (l_854)
                    continue;
            }
        }
        else
        {
            unsigned char l_873 = 0x00L;
            union U1 l_874 = {4294967288UL};
            unsigned short l_879 = 0x0FCFL;
            int *l_891 = &g_72;
            short l_898 = 1L;
            const struct S0 l_909 = {1UL,-6L,1L,94,0L,-1L,252UL};
            unsigned char *****l_912 = &g_792;
            for (g_69 = (-26); (g_69 == 12); g_69 = safe_add_func_int8_t_s_s(g_69, 2))
            {
                const unsigned char **l_872 = &g_37;
                int l_884 = 0x716B8430L;
                int *l_892 = &g_72;
                struct S0 l_897 = {1UL,0xFDD7L,-1L,719,0xB41EF5F5L,0x14L,0xB2L};
                g_523 = (0UL & (func_15((safe_sub_func_uint16_t_u_u(0x6147L, (*g_300))), ((!func_15(((safe_add_func_uint32_t_u_u(((*l_670) = ((safe_rshift_func_uint8_t_u_u(l_879, 1)) , 0x69A823B1L)), g_99.f6)) , 0x00A27F8AL), (*l_522), l_880, (*l_522))) , 0x16L), l_879, (*l_522)) , (*g_300)));
                l_881 = 0xB54A8DEAL;
                (*l_522) = (safe_sub_func_uint32_t_u_u((~l_884), (((safe_add_func_int8_t_s_s(func_15(l_887, l_879, (((+(safe_mod_func_uint8_t_u_u(((g_188 , ((g_890 != (l_892 = l_891)) && (*g_298))) && ((((*g_858) ^ (safe_sub_func_uint32_t_u_u(func_15((safe_sub_func_int16_t_s_s((((g_187.f1 = ((l_897 , (*g_300)) == g_99.f5)) > 0x6619L) < 0x1BL), (*l_522))), (*g_37), l_898, g_515), (*l_892)))) <= 0x85E1E49CL) || (*l_892))), (*g_68)))) != 0x61L) >= 0x9971F0CBL), g_503), (*g_37))) | l_897.f2) > g_38)));
            }
            for (l_871.f1 = 0; (l_871.f1 != (-26)); l_871.f1 = safe_sub_func_int16_t_s_s(l_871.f1, 1))
            {
                int *l_901 = &g_40;
                short *l_907 = &g_99.f1;
                int *l_908 = &g_177;
                l_901 = &g_72;
                if (g_902)
                    continue;
                (*l_908) ^= (((*l_522) && (*l_891)) ^ func_15((safe_rshift_func_uint8_t_u_u((func_15((*l_901), l_905, ((**g_857) = (-1L)), ((g_99.f3 , g_175) >= (((safe_unary_minus_func_int16_t_s(((*l_907) = (*l_891)))) , 65530UL) && g_72))) , (*g_37)), 1)), (*g_68), (*l_901), (*l_901)));
            }
            (*g_806) = func_41((g_187.f6 > 0x95FAL), g_40, func_52((l_909 , (safe_div_func_uint8_t_u_u((*g_37), 0x56L))), func_15(((&g_792 != (l_762 , l_912)) , 0L), (*l_891), (*g_858), g_521), &l_905, l_905, l_913), (**g_857), l_914);
        }
        (*l_915) &= (-3L);
        (*l_915) = (*l_915);
        (*l_915) = (safe_rshift_func_uint16_t_u_s((g_187.f3 ^ (*g_300)), 2));
    }
    else
    {
        char l_918 = 7L;
        short l_923 = 1L;
        int l_946 = (-10L);
        union U1 l_958 = {0x7180C38BL};
        struct S0 *l_967 = &g_187;
        struct S0 **l_968 = &l_967;
        if (l_918)
        {
            union U1 *l_920 = &l_726;
            union U1 **l_919 = &l_920;
            (*l_919) = &g_188;
        }
        else
        {
            unsigned short l_930 = 0xE410L;
            int l_941 = (-5L);
            struct S0 *l_944 = &g_99;
            struct S0 l_947 = {0x17DDDB35L,7L,0xC019L,3023,5L,-8L,1UL};
            char ****l_954 = &g_856;
            union U1 l_961 = {0xF02717F2L};
            unsigned *l_962 = (void*)0;
            unsigned *l_963 = &g_503;
            if ((((((*l_752) ^= 250UL) || ((safe_add_func_uint16_t_u_u(l_923, (safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((l_930 ^ (*l_522)) <= 0xA956L), l_930)) , &g_154) != (g_931 , &g_154)), l_918)) & 0xF7L), 0x3EL)))) ^ 4294967295UL)) > g_175) <= l_923))
            {
                int *l_932 = (void*)0;
                int *l_933 = (void*)0;
                int l_934 = 0xB3732FDBL;
                l_934 |= (*l_522);
                (*g_806) = &g_177;
            }
            else
            {
                union U1 *l_936 = &l_726;
                union U1 **l_935 = &l_936;
                unsigned *l_939 = &g_513;
                int l_940 = 0xE5B462C2L;
                unsigned char l_942 = 0xACL;
                struct S0 **l_945 = &l_944;
                (*l_945) = ((l_935 != (((*l_522) = ((safe_div_func_int8_t_s_s(((void*)0 == l_939), (*g_858))) < (g_943 |= (l_942 = (l_941 &= l_940))))) , g_822)) , l_944);
                l_946 ^= l_940;
            }
            (*l_522) |= ((((*g_298) , (l_947 , ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((void*)0 != l_954) , ((((g_99 , ((*l_944) , l_930)) && (*g_298)) || 1UL) != 0x8BB703F4L)), g_12)), l_947.f6)), 13)) < (*g_298)))) > 0x30L) , l_947.f0);
            (*l_522) = (!(0x9C41F58FL & ((*l_963) = (g_955 <= (((safe_lshift_func_uint16_t_u_u(0x5F6AL, (!((*l_522) ^ (*l_522))))) , 5L) == 0x1AL)))));
            for (g_931.f1 = (-9); (g_931.f1 < 20); g_931.f1 = safe_add_func_uint8_t_u_u(g_931.f1, 6))
            {
                unsigned l_966 = 0x075051F9L;
                (*l_522) = l_966;
                if (l_923)
                    continue;
                if (l_947.f0)
                    break;
            }
        }
        (*l_968) = l_967;
    }
    (*l_990) = (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((0x0D63L ^ (((safe_add_func_int32_t_s_s(((*g_298) > 0x1BDBL), g_955)) < l_988) ^ (*g_37))), l_989)), (*g_300))) == l_987.f1), 1));
    (*l_990) = (*l_990);
    return (***g_856);
}







static int func_2(unsigned char p_3, const int p_4, const int p_5, const unsigned p_6)
{
    int l_530 = (-1L);
    char l_531 = 0L;
    union U1 *l_584 = (void*)0;
    union U1 **l_583 = &l_584;
    struct S0 l_586 = {1UL,0x938FL,0x33A3L,3733,6L,0xA8L,0xFCL};
    unsigned char l_626 = 0x21L;
    int *l_646 = (void*)0;
    int *l_647 = (void*)0;
    unsigned *l_651 = (void*)0;
    unsigned **l_650 = &l_651;
    unsigned **l_652 = (void*)0;
    unsigned *l_654 = &g_111;
    unsigned **l_653 = &l_654;
    unsigned l_655 = 1UL;
    unsigned *l_656 = &g_111;
    unsigned *l_658 = &g_111;
    unsigned **l_657 = &l_658;
    unsigned *l_659 = &g_503;
    int *l_660 = &g_72;
    short *l_667 = &l_586.f1;
    for (g_12 = 0; (g_12 >= 8); g_12++)
    {
        unsigned char *l_527 = &g_99.f6;
        int l_555 = 0x6832613BL;
        int l_556 = 0x87AC4B2DL;
        unsigned char l_615 = 0x47L;
        struct S0 l_630 = {8UL,1L,-9L,3750,-1L,5L,249UL};
        unsigned l_643 = 0UL;
        if ((((((*g_298) || func_15(p_4, ((*l_527) ^= (g_38 & (g_21 , p_3))), (safe_rshift_func_int8_t_s_s((p_6 & l_530), p_6)), l_531)) || 0x81L) <= g_21) , 0xA073421BL))
        {
            short l_558 = 0x0ABFL;
            int l_559 = (-1L);
            union U1 l_575 = {0x39C141DDL};
            union U1 **l_582 = (void*)0;
            for (g_94 = 0; (g_94 > 32); g_94 = safe_add_func_uint32_t_u_u(g_94, 8))
            {
                int l_534 = 0xF40139E5L;
                char *l_557 = &g_99.f5;
                int *l_560 = &g_523;
                unsigned char **l_585 = &l_527;
                union U1 l_587 = {1UL};
                struct S0 l_592 = {0x38022C89L,0x0FA4L,1L,667,0xE32E7C00L,0x5CL,0x8EL};
                int **l_644 = &l_560;
                if (l_534)
                    break;
                if ((~(func_15(p_5, (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(p_6, (g_94 < (safe_rshift_func_uint16_t_u_s((*g_300), 14))))) <= ((safe_mul_func_uint16_t_u_u((*g_298), (safe_mul_func_int8_t_s_s((func_15(((*l_560) = ((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((p_5 , ((l_558 = (safe_mod_func_uint8_t_u_u((+l_555), ((*l_557) = l_556)))) || (p_6 < 7UL))), l_534)), g_38)) , (-10L)), p_5)) <= l_559)), p_3, l_556, g_457) , 0x33L), (*g_68))))) == p_4)), 13)), p_4, p_5) && 0x6815BB66L)))
                {
                    char *l_567 = &g_187.f5;
                    short *l_571 = &g_187.f1;
                    int l_572 = 0x1D74C6D1L;
                    (*l_560) = (((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((func_15(l_558, l_531, ((*l_557) = 0xD0L), ((-4L) <= (p_5 < ((*l_527) = (l_559 , ((((*l_567) &= g_38) < ((((safe_rshift_func_int16_t_s_s(g_570, ((*l_571) = p_4))) ^ l_558) , 0xD4L) < 0xB6L)) > l_572)))))) || p_6), 1)) || l_558), l_556)) | l_531) > g_99.f4);
                }
                else
                {
                    unsigned l_578 = 0UL;
                    char l_611 = (-1L);
                    int *l_627 = &l_555;
                    (*l_560) |= p_4;
                    if ((safe_mod_func_int8_t_s_s(g_177, (p_3 = p_5))))
                    {
                        int **l_579 = &l_560;
                        unsigned char ****l_598 = (void*)0;
                        unsigned char *****l_597 = &l_598;
                        short *l_601 = &l_586.f1;
                        const int **l_602 = (void*)0;
                        (*l_579) = func_41((l_558 <= l_556), g_187.f6, l_575, (0xF624L && 0x1436L), (l_578 = ((p_6 || (p_5 > g_99.f2)) ^ p_3)));
                        (*l_560) ^= func_15((safe_rshift_func_uint8_t_u_u(l_555, 1)), p_4, ((*g_139) != ((l_582 != (p_4 , l_583)) , (((*l_557) = p_3) , l_585))), ((l_586 , l_587) , p_5));
                        l_530 &= (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((*g_37), p_5)), ((*l_601) ^= ((l_592 , (safe_lshift_func_int16_t_s_u(p_5, (p_5 <= (safe_rshift_func_uint8_t_u_u(((((*l_597) = &g_139) == ((safe_lshift_func_int8_t_s_s(0xE9L, 6)) , &g_139)) , (p_6 && (*l_560))), p_6)))))) >= p_4))));
                        g_603 = &p_4;
                    }
                    else
                    {
                        unsigned l_606 = 4294967291UL;
                        int *l_613 = (void*)0;
                        int **l_612 = &l_613;
                        unsigned *l_614 = &g_175;
                        int *l_616 = &g_40;
                        unsigned char **l_617 = (void*)0;
                        int **l_628 = (void*)0;
                        int **l_629 = &l_560;
                        (*l_616) |= (((((safe_mul_func_uint8_t_u_u(((-9L) & p_3), (g_77 , ((l_606 <= 0x23L) >= func_15((safe_div_func_int32_t_s_s(p_5, ((*l_614) |= ((~func_15(((((*l_612) = func_41((g_457 = (((l_555 & (safe_rshift_func_uint8_t_u_u((*g_68), 3))) , l_611) , 0UL)), l_556, g_188, g_515, (*g_603))) != &g_515) >= g_187.f1), p_4, g_99.f2, g_523)) , g_99.f6)))), (*g_68), p_5, p_5))))) > p_3) > p_3) , l_615) | 4294967292UL);
                        (*l_616) = func_15(func_15(l_556, ((**l_585) = (((*g_139) = l_617) != &g_68)), ((*l_557) |= 0x32L), p_4), ((*g_68) ^= (safe_lshift_func_uint8_t_u_s((*l_560), 7))), (((*l_616) == (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((((p_3 = func_15((safe_mul_func_uint16_t_u_u(((*g_300) &= p_3), 1L)), l_626, g_187.f3, l_611)) < l_575.f0) < 0L) != (*l_616)), p_5)), 3))) , (-9L)), g_99.f0);
                        (*l_629) = l_627;
                    }
                    (*l_627) = (~p_3);
                }
                if ((*l_560))
                    continue;
                (*l_644) = func_41((g_457 &= p_4), (p_3 <= (l_630 , (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(5L, (safe_add_func_uint32_t_u_u(0x2E8FB2FCL, ((safe_lshift_func_uint8_t_u_u(p_5, (((0x52E5L <= ((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((&l_585 == (void*)0), 0xF27AL)), 11)) != 0x4940AA01L)) , (void*)0) != (void*)0))) < l_586.f0))))), l_630.f0)))), l_587, l_643, (*g_603));
            }
        }
        else
        {
            int *l_645 = &g_72;
            (*l_645) = l_615;
        }
    }
    l_530 = l_586.f3;
    (*l_660) = (safe_sub_func_uint32_t_u_u(((*l_659) = (((*l_653) = ((*l_650) = func_41((~g_175), p_6, g_188, g_513, p_6))) == ((*l_657) = (l_656 = func_41((p_5 | p_4), l_655, g_188, p_4, p_5))))), 4294967287UL));
    g_40 ^= (func_15((*g_603), ((p_6 < 0xF9DD2228L) || p_4), g_99.f5, g_99.f5) != (*l_660));
    return p_5;
}







static unsigned func_15(const int p_16, unsigned char p_17, char p_18, unsigned p_19)
{
    unsigned l_519 = 0xECA930A1L;
    int l_520 = 0L;
    l_520 |= l_519;
    return g_457;
}







static unsigned char * func_22(unsigned char * p_23, unsigned char * p_24, char p_25, const unsigned char * p_26, unsigned char * p_27)
{
    const char l_297 = 0x70L;
    unsigned short *l_299 = &g_77;
    int l_301 = (-10L);
    struct S0 l_303 = {0xDACF9795L,0xB14AL,0L,3744,1L,-1L,254UL};
    union U1 l_304 = {4294967288UL};
    int *l_305 = &g_177;
    struct S0 *l_354 = (void*)0;
    struct S0 **l_353 = &l_354;
    struct S0 l_383 = {1UL,0xB456L,0xF982L,1165,0x713793D5L,0xF8L,0UL};
    unsigned short l_427 = 1UL;
    struct S0 ***l_450 = &l_353;
    struct S0 ****l_449 = &l_450;
    unsigned char l_456 = 0x46L;
    char *l_501 = &l_383.f5;
    char *l_502 = &g_187.f5;
    int l_510 = 0x42E43CE1L;
    int *l_514 = &g_515;
    const unsigned char **l_517 = (void*)0;
    const unsigned char ***l_516 = &l_517;
    (*l_305) |= func_47((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_25, (l_297 <= (((g_298 = &g_94) != (g_300 = l_299)) , (g_188 , (((((p_25 != (l_301 = ((*g_298) && l_297))) >= 0x9628L) | g_40) || g_302) || 5L)))))), g_72)), g_145)) == p_25) , l_303), (*g_68), l_304);
    for (g_40 = (-26); (g_40 >= (-15)); g_40 = safe_add_func_int16_t_s_s(g_40, 9))
    {
        char l_317 = (-3L);
        struct S0 l_318 = {0xCC094F27L,0xA778L,-4L,1385,9L,0xF9L,0x58L};
        int *l_366 = (void*)0;
        int l_397 = 0x2C9EF171L;
        unsigned l_428 = 0xD24E1954L;
        unsigned char ***l_438 = &g_140;
        union U1 l_463 = {0UL};
        unsigned short *l_479 = &g_94;
        const int l_482 = 0x672286EEL;
        unsigned char ***l_493 = &g_140;
        if (func_47(l_303, ((*g_68) = 0x10L), func_52(p_25, (3L != (-6L)), p_26, (g_188 , (*l_305)), p_25)))
        {
            struct S0 *l_308 = &l_303;
            l_308 = l_308;
            return p_24;
        }
        else
        {
            short l_323 = 0L;
            struct S0 l_370 = {4294967294UL,0x45D1L,0xAE8AL,628,-1L,0x07L,3UL};
            union U1 l_372 = {0xFD71BC48L};
            int l_373 = 5L;
            int l_374 = (-8L);
            unsigned char l_439 = 253UL;
            struct S0 ** const l_469 = &l_354;
            unsigned l_496 = 0x84FBF150L;
            int *l_497 = &g_177;
            if ((((safe_add_func_uint16_t_u_u((1L > ((((*l_299) = p_25) , (((((safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_25, (((((l_317 <= (((*g_37) , &g_227) != &l_305)) , l_318) , func_52((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0xF337L, g_175)), (*l_305))), l_323, p_27, (*g_68), (*l_305))) , p_25) || 0xE6L))), l_323)) ^ p_25), 0xACL)) , p_25) & p_25) <= p_25) || g_40)) > (*l_305))), 0L)) | 0xC738L) > p_25))
            {
                int l_324 = 0x2923499DL;
                struct S0 *l_325 = &l_303;
                int l_326 = (-2L);
                struct S0 **l_334 = &l_325;
                struct S0 ***l_333 = &l_334;
                int **l_385 = &g_227;
                l_326 = ((l_324 = l_318.f5) > ((l_325 == l_325) , 1L));
                if ((((safe_sub_func_uint16_t_u_u(((*g_300) = (*l_305)), ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((void*)0 == l_333), 1UL)), 0xBEL)) && p_25))) < ((*g_68) = (safe_add_func_int8_t_s_s(g_99.f1, (l_318.f1 == (l_318 , g_99.f0)))))) < l_318.f3))
                {
                    char l_355 = 0x6EL;
                    int l_356 = 0x020FB83DL;
                    unsigned short l_357 = 0x12F0L;
                    struct S0 l_371 = {4294967295UL,1L,0xD2E7L,506,0xA4B16BC2L,0x16L,0x7FL};
                    (*l_305) = ((*l_305) == (safe_sub_func_int16_t_s_s(p_25, ((((*g_300) < (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((*l_333) == g_154) , (safe_lshift_func_int16_t_s_u((l_355 &= (safe_div_func_int8_t_s_s(g_99.f5, (safe_div_func_int16_t_s_s(g_99.f2, (~((safe_rshift_func_uint8_t_u_s((!((((safe_lshift_func_uint16_t_u_u(((*l_333) != l_353), p_25)) ^ 4294967295UL) , l_299) != l_299)), p_25)) != 0x770E6CEFL))))))), 6))), p_25)) <= l_356), l_323))) , l_357) , 0xB301L))));
                    for (g_99.f5 = 8; (g_99.f5 > 7); g_99.f5 = safe_sub_func_int32_t_s_s(g_99.f5, 4))
                    {
                        int *l_360 = &l_324;
                        union U1 *l_362 = &g_188;
                        union U1 **l_361 = &l_362;
                        int l_365 = (-1L);
                        struct S0 l_367 = {0x04D39E5BL,-1L,0x7876L,2564,0x2B4AD35FL,1L,9UL};
                        (*l_305) ^= (((*l_360) = l_323) , 0L);
                        (*l_361) = &l_304;
                        (*l_305) = 8L;
                        l_374 = ((*l_305) = func_47(g_187, l_357, ((safe_add_func_int32_t_s_s((l_373 |= ((l_365 , ((void*)0 != l_366)) > (func_47(l_367, (*l_305), func_52((safe_add_func_int32_t_s_s((func_47(l_370, ((l_356 = ((func_47(l_371, l_318.f6, l_372) , (-1L)) ^ g_175)) , l_372.f0), (*l_362)) & g_99.f5), p_25)), l_372.f0, p_23, l_324, p_25)) ^ 5UL))), 0x4E792C0AL)) , g_188)));
                    }
                }
                else
                {
                    unsigned char l_382 = 0xCDL;
                    union U1 l_384 = {1UL};
                    (*l_305) = ((safe_lshift_func_int16_t_s_u(func_47(l_370, (safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s(1L, (l_324 >= ((safe_div_func_int8_t_s_s(l_382, (func_47(l_383, l_318.f2, g_188) , (~l_382)))) < g_302)))))), l_384), p_25)) <= p_25);
                    (*l_305) = (*l_305);
                }
                (*l_385) = &l_374;
                (*l_385) = &g_72;
            }
            else
            {
                int **l_386 = &l_305;
                int *l_387 = &l_373;
                int l_394 = 0x877B575EL;
                short *l_395 = &l_383.f1;
                union U1 l_396 = {3UL};
                (*l_386) = (void*)0;
                (*l_386) = &g_40;
                (*l_387) |= p_25;
                g_177 ^= ((((((((safe_mod_func_int32_t_s_s(p_25, 0xA4B1D58BL)) == ((*l_387) = func_47(l_370, (g_111 , (0x0BL <= (l_370.f1 & ((*l_395) = ((safe_lshift_func_uint8_t_u_s(255UL, 7)) <= (g_188.f0 || (safe_lshift_func_int16_t_s_s(l_394, g_99.f4)))))))), l_396))) ^ g_187.f0) , l_318.f4) >= p_25) != 0x90L) != p_25) ^ p_25);
            }
            if ((l_397 = (-5L)))
            {
                int l_398 = (-1L);
                unsigned *l_399 = &g_175;
                int *l_400 = (void*)0;
                char *l_403 = &l_318.f5;
                union U1 l_406 = {4294967295UL};
                int **l_407 = &l_305;
                const struct S0 * const l_412 = (void*)0;
                struct S0 ***l_413 = &l_353;
                unsigned char l_433 = 0UL;
                (*l_407) = func_41(((((((*l_399) = l_398) ^ (g_72 = p_25)) >= (0xB87F05BAL | (((*g_37) && (*l_305)) != p_25))) <= (safe_add_func_int8_t_s_s(g_12, ((*l_403) &= 2L)))) <= (safe_div_func_uint32_t_u_u(g_99.f5, p_25))), p_25, l_406, p_25, p_25);
                if (p_25)
                {
                    unsigned short l_425 = 0xC43EL;
                    int l_426 = 0x585D1403L;
                    int l_430 = 1L;
                    unsigned char ****l_437 = &g_139;
                    for (g_111 = 13; (g_111 <= 41); ++g_111)
                    {
                        struct S0 ****l_414 = &l_413;
                        char *l_421 = &l_383.f5;
                        const int l_424 = 0xA6BF2998L;
                        struct S0 ***l_429 = (void*)0;
                        int *l_434 = &l_426;
                        l_373 |= (safe_rshift_func_uint16_t_u_s((((*g_68) = (l_412 != (((((*l_414) = l_413) != (func_52(((l_425 = (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((*l_421) ^= ((*l_403) = p_25)) | ((*g_68) = (*l_305))), ((g_154 == g_154) == ((safe_add_func_int16_t_s_s((&g_154 != &g_154), (l_370.f3 == (*g_298)))) >= 0x71BEL)))), l_424)), p_25))) , l_370.f4), l_426, p_24, l_427, l_428) , l_429)) || g_99.f6) , &l_318))) <= g_99.f2), l_430));
                        (*l_305) = 0x8CAE07E1L;
                        if (l_370.f3)
                            continue;
                        (*l_434) ^= (safe_mod_func_int32_t_s_s(p_25, ((((((0x0449L < l_433) & ((l_397 != ((void*)0 == &g_302)) ^ (*g_298))) ^ (((void*)0 == &l_354) , 1UL)) >= p_25) | l_430) , (**l_407))));
                    }
                    (*l_407) = &g_177;
                    (*l_305) |= (safe_lshift_func_int16_t_s_s((((*l_437) = &g_140) != l_438), l_318.f5));
                    (*l_305) ^= l_439;
                }
                else
                {
                    unsigned l_440 = 0xA1E54621L;
                    if (l_440)
                        break;
                    (**l_407) = p_25;
                    for (l_318.f0 = 0; (l_318.f0 != 43); l_318.f0 = safe_add_func_uint32_t_u_u(l_318.f0, 1))
                    {
                        if ((*l_305))
                            break;
                    }
                }
            }
            else
            {
                struct S0 ***l_448 = &l_353;
                struct S0 ****l_447 = &l_448;
                struct S0 *****l_451 = &l_449;
                const int l_458 = 7L;
                unsigned *l_459 = (void*)0;
                unsigned *l_460 = &l_428;
                int l_471 = 3L;
                unsigned char *l_472 = &l_370.f6;
                union U1 **l_484 = (void*)0;
                union U1 *l_486 = (void*)0;
                union U1 **l_485 = &l_486;
                char *l_494 = &l_303.f5;
                char *l_495 = (void*)0;
                if (((g_99.f3 = ((safe_sub_func_uint16_t_u_u(((l_447 == ((*l_451) = l_449)) & (&p_24 != (*l_438))), p_25)) , (p_25 || (*l_305)))) < ((*l_460) = ((safe_rshift_func_uint8_t_u_u((p_25 > ((safe_div_func_int8_t_s_s((((((*g_300) = (g_94 ^ l_456)) | 0xB74CL) && 0UL) != g_457), l_428)) && l_458)), 0)) <= g_187.f5))))
                {
                    struct S0 l_464 = {4294967295UL,0x373CL,0xAB58L,3962,-8L,0x43L,255UL};
                    short *l_470 = &g_99.f1;
                    l_397 |= (safe_add_func_uint8_t_u_u((l_471 = ((*g_68) = (l_463 , (!(((((((((func_47(l_464, (*l_305), l_304) , (((safe_add_func_int16_t_s_s((g_99.f4 && (safe_lshift_func_uint16_t_u_s((l_469 == g_154), 9))), ((*l_470) |= ((void*)0 != (***l_447))))) == (*g_37)) || l_458)) <= (-2L)) , (*g_68)) ^ (*g_37)) , g_187.f0) , (*g_37)) | 0x72L) | g_12) != 8UL))))), l_370.f6));
                    return p_23;
                }
                else
                {
                    char *l_473 = (void*)0;
                    char *l_474 = &g_187.f5;
                    struct S0 l_477 = {0x7C25CDBEL,0L,0x2C7CL,231,-4L,0L,1UL};
                    int *l_483 = &l_397;
                    (*l_483) ^= ((0x47L ^ (g_99.f5 ^= ((*l_474) = 0x62L))) && (safe_mod_func_int32_t_s_s((l_471 = (l_477 , ((safe_unary_minus_func_uint32_t_u(0x61AE0644L)) || (l_479 != &g_94)))), ((safe_mul_func_uint8_t_u_u(l_482, (p_25 <= (*l_305)))) , g_187.f3))));
                }
                (*l_485) = &g_188;
                l_497 = func_41((func_47(g_99, ((*l_438) == &p_27), l_463) == ((*l_472) ^= ((safe_rshift_func_int8_t_s_s((p_25 = ((*l_494) = ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(l_317, (((l_458 > p_25) , l_493) != (void*)0))) != 0xAADB9676L), l_318.f6)) | l_458))), l_496)) >= g_187.f1))), g_187.f5, l_304, l_370.f4, (*l_305));
                for (l_323 = 0; (l_323 <= (-21)); l_323--)
                {
                    (*l_497) = (l_397 , p_25);
                }
            }
        }
        l_397 = g_99.f6;
        return p_27;
    }
    (*l_305) = (((safe_unary_minus_func_int16_t_s(((((*l_514) |= ((((*l_502) = (((*l_501) = func_34(&l_456, p_25)) , (0x1F47C031L <= (*l_305)))) | g_503) == ((l_301 = (((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_510, g_503)), (safe_div_func_int16_t_s_s((p_25 ^ p_25), l_456)))) | p_25) < g_513)) != 0L))) , (void*)0) == l_516))) ^ l_383.f0) , (-1L));
    return &g_69;
}







static unsigned char * func_28(int p_29, unsigned char * p_30, unsigned char * p_31, const unsigned p_32, unsigned short p_33)
{
    int *l_164 = &g_72;
    int **l_165 = (void*)0;
    const int *l_167 = &g_72;
    const int **l_166 = &l_167;
    const unsigned char *l_170 = &g_145;
    short *l_171 = &g_99.f1;
    unsigned *l_174 = &g_175;
    int *l_176 = &g_177;
    unsigned char l_180 = 251UL;
    int l_197 = (-2L);
    union U1 l_209 = {0x3540FA7CL};
    struct S0 * const l_241 = (void*)0;
    int l_279 = 0x8C652072L;
    union U1 l_288 = {0x3DBD0510L};
    unsigned short l_290 = 0xA52FL;
    (*l_164) = ((p_29 = g_99.f5) , 0L);
    (*l_166) = (void*)0;
    (*l_176) |= (g_99.f0 > ((+(safe_add_func_uint32_t_u_u(((g_99.f4 == (p_33 <= (g_99.f5 , (3L != (func_34(l_170, ((*l_171) |= p_32)) | (safe_div_func_uint32_t_u_u(((*l_174) &= p_29), g_99.f4))))))) , 0xB028D9ABL), g_99.f5))) , (*l_164)));
    if ((safe_add_func_uint8_t_u_u(l_180, (safe_add_func_int8_t_s_s(1L, 0L)))))
    {
        unsigned l_183 = 4294967295UL;
        int l_184 = (-1L);
        const union U1 l_208 = {4294967295UL};
        int l_210 = (-1L);
        struct S0 l_239 = {0xA9B7ED1FL,-9L,-6L,2524,-1L,0L,0x63L};
        unsigned char *** const l_253 = (void*)0;
        (*l_164) = l_183;
        (*l_176) = (&g_154 == &g_154);
        l_184 = ((*l_176) = 2L);
        for (g_99.f6 = 14; (g_99.f6 >= 56); ++g_99.f6)
        {
            unsigned char *l_189 = &g_145;
            struct S0 l_196 = {0x56A7B958L,1L,0L,1106,0xFBA12D9EL,0xA6L,0xCDL};
            unsigned short l_207 = 0UL;
            int l_230 = 0L;
            union U1 l_240 = {0UL};
            (*l_166) = &g_177;
            if ((g_177 &= func_47(g_187, (*g_68), g_188)))
            {
                return l_189;
            }
            else
            {
                union U1 l_250 = {0xE730205DL};
                struct S0 l_252 = {0x3FDEEFCCL,4L,0xC959L,2041,0x243D1E10L,-1L,5UL};
                short l_270 = (-9L);
                for (g_40 = (-11); (g_40 > (-4)); g_40 = safe_add_func_int16_t_s_s(g_40, 4))
                {
                    struct S0 l_211 = {0xD472F8A4L,7L,0x546FL,1615,6L,-1L,6UL};
                    union U1 l_226 = {4294967291UL};
                    struct S0 l_269 = {4294967295UL,-1L,0xEFB7L,3314,9L,-1L,0x0AL};
                    if (((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_164) = func_47(l_196, ((*g_68) = l_196.f0), func_52(p_29, l_197, func_59((safe_sub_func_uint32_t_u_u((g_188.f0 &= (p_33 <= ((safe_unary_minus_func_int32_t_s(p_33)) , (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(l_207, 1L)), 1)), (!g_187.f3)))))), 0xC7AA637DL)), l_208, l_209, &l_184, l_196.f2), l_210, p_32))), 1UL)), 0UL)) , p_29))
                    {
                        short l_216 = (-5L);
                        char *l_221 = &g_187.f5;
                        unsigned *l_222 = (void*)0;
                        unsigned *l_223 = (void*)0;
                        unsigned *l_224 = &g_99.f0;
                        union U1 *l_225 = &g_188;
                        unsigned short *l_242 = &l_207;
                        g_227 = func_41(func_47((((void*)0 == &p_33) , (l_196 , l_211)), (*g_37), ((*l_225) = func_52(((*l_224) = (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(p_33, ((*l_221) = (((*l_171) = l_216) < ((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_216, (+g_38))), l_184)) | g_12))))), g_99.f2))), (*g_68), p_30, l_208.f0, l_207))), l_196.f4, l_226, g_99.f4, g_187.f2);
                        (*l_176) = ((*l_164) = (((safe_sub_func_int16_t_s_s((l_230 | (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((*g_37) , 0xAF6FCE94L) , g_187.f3), ((safe_sub_func_int16_t_s_s(0x5A1BL, (~g_187.f5))) ^ (((*l_242) ^= ((func_52((g_99.f0 = (safe_add_func_int16_t_s_s(0x5D5FL, ((~(func_47(l_239, ((*l_189) = (0UL & g_99.f5)), l_240) && 0xEF9A41DAL)) ^ p_33)))), l_216, p_31, (*l_176), g_177) , l_241) == (void*)0)) | 0x2984L)))), p_29))), l_196.f0)) || p_33) != p_29));
                    }
                    else
                    {
                        unsigned l_245 = 0xD50EB43AL;
                        int *l_251 = &l_184;
                        unsigned l_254 = 6UL;
                        l_251 = func_41((safe_mul_func_uint16_t_u_u(((l_230 , (l_245 <= p_29)) && (g_94 | l_196.f3)), 0L)), ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_29, (0xC1F6L > (*l_164)))), g_99.f1)) , l_211.f0), l_250, g_187.f0, l_250.f0);
                        (*l_166) = (l_226 , func_41(g_187.f3, g_177, l_250, (((l_252 , l_253) == (void*)0) < (l_226 , (((*l_171) = (-2L)) & l_254))), p_32));
                        if ((*l_176))
                            break;
                    }
                    (*l_164) = (l_252.f5 >= (safe_div_func_int8_t_s_s((((*g_37) <= ((0x82L >= 2UL) , (p_33 > (safe_mul_func_int16_t_s_s(p_29, ((safe_mod_func_int8_t_s_s(p_32, func_47((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(l_196.f6, 10)) <= (((((safe_mod_func_uint32_t_u_u(p_29, l_252.f6)) || (-3L)) , p_33) , 0L) < 4L)), g_99.f2)) ^ (**l_166)) , l_269), l_270, l_226))) | 0xD6L)))))) != 6L), (*g_37))));
                }
                (*l_164) = (safe_mod_func_uint32_t_u_u(p_29, 0x913E9212L));
            }
            (*l_176) = (safe_lshift_func_int16_t_s_u(((0UL == 65533UL) || (p_33 | ((func_47(g_187, (*l_176), func_52((safe_mul_func_int8_t_s_s((((*g_68) = (*g_37)) & (&l_239 != ((l_279 != (((*l_189) |= ((*l_164) > (*l_176))) , (-8L))) , l_241))), 1UL)), (*l_164), p_30, (*l_167), g_187.f3)) || g_187.f4) , (-7L)))), 4));
            (*l_176) &= (+p_32);
        }
    }
    else
    {
        struct S0 *l_283 = &g_187;
        struct S0 **l_282 = &l_283;
        unsigned *l_284 = (void*)0;
        unsigned **l_285 = &l_174;
        int **l_286 = &l_176;
        const union U1 l_287 = {0x01ED4495L};
        const unsigned char **l_289 = &l_170;
        (*l_166) = &g_72;
        (**l_286) = (safe_add_func_uint16_t_u_u(func_34(((*l_289) = func_59((func_47(((0x17L & ((void*)0 == l_282)) , (**l_282)), ((*g_68) = (((l_284 != ((*l_285) = (void*)0)) , (((*l_171) ^= p_29) , l_286)) == (void*)0)), g_188) <= p_29), l_287, l_288, (*l_166), (**l_286))), g_187.f4), p_29));
        (**l_286) = func_47((*l_283), p_29, l_287);
        l_290 = (((*l_286) == (void*)0) & p_33);
    }
    return p_30;
}







static int func_34(const unsigned char * p_35, short p_36)
{
    int *l_39 = &g_40;
    struct S0 l_51 = {0x7EA1B148L,-1L,0L,2132,0L,0x79L,255UL};
    const unsigned char *l_58 = &g_38;
    const union U1 l_67 = {0xFDE63B69L};
    const unsigned char **l_70 = &g_37;
    int l_157 = (-1L);
    int **l_161 = (void*)0;
    int **l_162 = &l_39;
    int * const * const l_163 = &l_39;
    (*l_39) &= p_36;
    (*l_162) = func_41(g_40, (*l_39), ((~func_47(l_51, (*p_35), func_52((l_58 != (void*)0), (*p_35), ((*l_70) = func_59((safe_mul_func_int8_t_s_s((0L || ((p_36 || (*l_39)) || (*l_39))), (*l_39))), l_67, l_67, l_39, g_40)), (*l_39), p_36))) , l_67), p_36, l_157);
    (*l_39) = (&l_39 != l_163);
    return g_99.f6;
}







static int * func_41(unsigned p_42, short p_43, union U1 p_44, char p_45, int p_46)
{
    int **l_158 = (void*)0;
    int *l_160 = &g_40;
    int **l_159 = &l_160;
    (*l_159) = &g_72;
    return &g_72;
}







static unsigned char func_47(struct S0 p_48, unsigned char p_49, union U1 p_50)
{
    unsigned short *l_76 = &g_77;
    int l_82 = 0x691C6C8EL;
    unsigned char **l_84 = &g_68;
    unsigned char ***l_83 = &l_84;
    unsigned char * const * const l_85 = &g_68;
    short l_88 = 0x0086L;
    int *l_92 = &g_72;
    int **l_91 = &l_92;
    unsigned short *l_93 = &g_94;
    int *l_95 = (void*)0;
    int *l_96 = &l_82;
    unsigned char l_131 = 0UL;
    l_82 = (safe_div_func_int16_t_s_s((((*l_76) &= 65532UL) , (safe_rshift_func_int16_t_s_s(g_69, (safe_mod_func_int16_t_s_s((l_82 < 0xCCL), ((((*l_83) = &g_68) != l_85) & l_82)))))), (safe_rshift_func_int16_t_s_s(l_88, (safe_mod_func_uint16_t_u_u(((*l_93) = (((*l_91) = &g_40) != (void*)0)), l_82))))));
    if (((*l_96) = p_48.f4))
    {
        unsigned short l_110 = 1UL;
        int *l_112 = &l_82;
        (*l_91) = (*l_91);
        if (p_48.f3)
        {
            short *l_100 = &l_88;
            int l_107 = (-5L);
            if ((p_50.f0 ^ g_38))
            {
                struct S0 *l_98 = &g_99;
                struct S0 **l_97 = &l_98;
                g_72 = 1L;
                (*l_97) = &p_48;
                g_72 = (!((void*)0 == &g_72));
            }
            else
            {
                (*l_96) ^= p_50.f0;
            }
            (*l_91) = &g_40;
            l_107 = (((((*l_100) = (*l_92)) == ((((g_94 != g_99.f1) , ((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((**l_91), l_107)), g_40)), 2)) & g_99.f5)) >= ((safe_add_func_uint16_t_u_u((((*l_92) , 4294967294UL) , g_99.f6), g_40)) <= g_94)) != l_110)) && (*g_68)) < g_99.f3);
        }
        else
        {
            (*l_96) &= g_111;
            (*l_96) = g_94;
        }
        (*l_91) = l_112;
        g_72 = (safe_lshift_func_int8_t_s_s((**l_91), 1));
    }
    else
    {
        const unsigned l_115 = 4294967294UL;
        short *l_124 = &l_88;
        int *l_125 = &g_72;
        (*l_96) ^= ((p_48 , 0L) >= (l_115 <= ((p_48.f5 & (+(safe_rshift_func_int16_t_s_u(1L, g_99.f3)))) < (safe_mul_func_uint16_t_u_u(((*l_92) | l_115), (safe_mul_func_int8_t_s_s(g_94, 5L)))))));
        (*l_96) = ((safe_rshift_func_uint8_t_u_s((*g_37), 1)) ^ ((*l_124) = (+p_48.f1)));
        (*l_91) = l_125;
    }
    (*l_91) = &g_72;
    if (p_48.f3)
    {
        char l_130 = 0L;
        short *l_134 = (void*)0;
        short *l_135 = &g_99.f1;
        short *l_136 = &l_88;
        for (p_49 = 0; (p_49 != 22); p_49 = safe_add_func_int8_t_s_s(p_49, 9))
        {
            return p_48.f1;
        }
        g_145 = (((l_130 || ((**l_91) = g_111)) != l_131) <= ((((*l_136) = (safe_mul_func_uint16_t_u_u(g_99.f3, ((*l_135) &= g_99.f5)))) <= (safe_mul_func_uint16_t_u_u((((((0L < ((void*)0 != g_139)) <= ((safe_add_func_int32_t_s_s(((*l_96) = ((((safe_lshift_func_uint16_t_u_s((p_49 < p_48.f1), g_94)) , 0xCB90L) == 0xA4DCL) >= p_48.f1)), g_99.f4)) != p_48.f5)) & p_48.f4) >= 0x05F7L) , 0x1AA1L), g_99.f0))) >= l_130));
    }
    else
    {
        int *l_151 = (void*)0;
        for (p_49 = (-30); (p_49 <= 36); p_49 = safe_add_func_int8_t_s_s(p_49, 9))
        {
            unsigned l_150 = 0xA48E5C97L;
            (**l_91) = (0x4757L ^ (((*l_93) = (g_69 >= ((safe_lshift_func_int8_t_s_s(g_69, 5)) ^ l_150))) | p_48.f2));
        }
        (*l_91) = l_151;
        for (g_111 = (-27); (g_111 < 12); g_111 = safe_add_func_int8_t_s_s(g_111, 5))
        {
            struct S0 * const **l_155 = (void*)0;
            struct S0 * const **l_156 = &g_154;
            (*l_156) = g_154;
        }
        (*l_96) &= g_99.f3;
    }
    return (*g_68);
}







static union U1 func_52(const unsigned p_53, unsigned char p_54, const unsigned char * p_55, unsigned char p_56, unsigned p_57)
{
    int *l_71 = &g_72;
    union U1 l_73 = {0x97FB6F8AL};
    (*l_71) &= p_54;
    return l_73;
}







static unsigned char * func_59(unsigned char p_60, const union U1 p_61, union U1 p_62, const int * const p_63, unsigned p_64)
{
    return g_68;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3, "g_99.f3", print_hash_value);
    transparent_crc(g_99.f4, "g_99.f4", print_hash_value);
    transparent_crc(g_99.f5, "g_99.f5", print_hash_value);
    transparent_crc(g_99.f6, "g_99.f6", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_187.f0, "g_187.f0", print_hash_value);
    transparent_crc(g_187.f1, "g_187.f1", print_hash_value);
    transparent_crc(g_187.f2, "g_187.f2", print_hash_value);
    transparent_crc(g_187.f3, "g_187.f3", print_hash_value);
    transparent_crc(g_187.f4, "g_187.f4", print_hash_value);
    transparent_crc(g_187.f5, "g_187.f5", print_hash_value);
    transparent_crc(g_187.f6, "g_187.f6", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_931.f0, "g_931.f0", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
